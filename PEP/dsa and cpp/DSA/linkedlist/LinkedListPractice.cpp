#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};

void Insert(node* &head, int val){
    node* n = new node(val);

    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;

}

void InsertAtHead(node* &head, int val){
    node* n=new node(val);

    n->next=head;
    head=n;

}

void Display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"-> ";
        temp=temp->next;
    }
    cout<<endl;
}

bool search(node* head,int key){
    node* temp=head;

    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void Delete(node* head){
    node* temp=head;
    node* del;

    while (temp!=NULL)
    {
        if(temp->next->next==NULL){
            del=temp->next;
            temp->next=NULL;
        }
        temp=temp->next;
    }
    delete del;
    
}

void DeleteAtStart(node* &head){
    node* temp=head;

    head=temp->next;
    delete temp;
}

void DeleteAtPos(node* &head,int target){
    node* temp=head;

    while(temp->next->data!=target){
        temp=temp->next;
    }
    node* del=temp->next;
    temp->next=temp->next->next;
    delete del;
}
int main(){
    node* head=NULL;
    Insert(head,1);
    Insert(head,2);
    Insert(head,3);
    InsertAtHead(head,0);

    Display(head);
    int n=search(head,3);
    if(search(head,3)){
    cout<<"found "<<endl;
    }else{
        cout<<"not found";
    }

    DeleteAtPos(head, 2);

    Display(head);

    return 0;
}