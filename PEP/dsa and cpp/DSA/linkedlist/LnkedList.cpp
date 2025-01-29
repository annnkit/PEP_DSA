// #include<iostream>
// using namespace std;

// Node* RevLinkedList(Node* &head){
//     Node*prev = NULL;
//     Node* cur = head;
//     Node* next = NULL;

//     while(cur!=NULL){
//         next = cur->next;
//         cur->next=prev;

//         prev = cur;
//         cur = next;

//     }
//     return prev;
    
// }

// int main(){

//     Node* head = NULL;
//     Node* cur = next;
//     Node* next = NULL;
// }

#include<iostream>
using namespace std;

Node* KReversal(Node* &head, int k){
    Node* prev = NULL:
    Node* cur = head;
    Node* next = NULL;

    int count=0;

    while(count<=k){
        next = cur->next;
        cur->next = prev;
        
        prev = cur;
        cur = next;
    }
    return prev;
}
    
int main(){

    Node* head = NULL;
    Node* cur = next;
    Node* next = NULL;

    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    cout << "Reversal: " << endl;
    KReversal(head);

    return 0;
}