#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data=val;
        next = NULL;
    }
};
void InsertAtTail(Node* &head,int val){
    Node* n= new Node(val);

    Node* temp = head;

    while(temp->next != head){
        temp = temp->next;
    }
    temp->next=n;
    n->next=head;
    n = head;
}

void DeleteAtHead(Node* &head){
    Node* temp=head;
    Node* del=head;

    while(temp->next!=head->next){
        temp=temp->next;
    }
    temp->next=head->next;
    head=head->next;

    delete del;
}

void DeleteFromPos(Node* head, int target){
    if(head==NULL){
        return;
    }
    Node* temp=head;

    while (temp->next != NULL && temp->next->data != target) {
        temp = temp->next;
    }
    Node* del=temp->next;
    temp->next=temp->next->next;
    delete del;

     
}
Node* LoopDetect(Node* head) {
    if (head == NULL) return NULL;

    Node* slow = head;
    Node* fast = head;

    while (slow != NULL && fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast) {
            return slow;
        }
    }

    return NULL;
}

Node* GetStartNode(Node* head) {
    if (head == NULL) return NULL;

    Node* intersection = LoopDetect(head);

    if (intersection == NULL) return NULL;

    Node* slow = head;

    while (slow != intersection) {
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;
}

void RemoveNode(Node*& head) {
    if (head == NULL) return;

    Node* startOfLoop = GetStartNode(head);
    if (startOfLoop == NULL) return;

    Node* temp = startOfLoop;

    while (temp->next != startOfLoop) {
        temp = temp->next;
    }

    temp->next = NULL;
}

void Display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    Display(head);

    DeleteFromPos(head, 2);
    Display(head);

    head->next->next->next = head->next;

    if (LoopDetect(head)) {
        cout << "Loop detected!" << endl;
        RemoveNode(head);
        cout << "Loop removed!" << endl;
    } else {
        cout << "No loop detected!" << endl;
    }

    cout << "Final List: ";
    Display(head);

    return 0;
}