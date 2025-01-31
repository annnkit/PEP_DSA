#include<iostream>
using namespace std;

 struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
 };
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1) return list2;
        if(!list2) return list1;

        ListNode* head = (list1->val<=list2->val)?list1:list2;
        ListNode* tail = (head == list1) ? list2 : list1;
        ListNode* temp=head;

        while(temp->next!=NULL && tail!=NULL){
            if(tail->val<temp->next->val){
                ListNode* t = tail->next;
                tail->next=temp->next;
                temp->next = tail;
                tail = t;
            }
            temp=temp->next;
        }

        if(tail != NULL) temp->next=tail;
       
         return head;
   
    }
};

void printList(ListNode* head) {
    while (head) {
        cout << head->val << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    ListNode* list1 = new ListNode(1);
    list1->next = new ListNode(3);
    list1->next->next = new ListNode(5);

    ListNode* list2 = new ListNode(2);
    list2->next = new ListNode(4);
    list2->next->next = new ListNode(6);

    Solution s;
    ListNode* mergedList = s.mergeTwoLists(list1, list2);

    cout << "Merged Linked List: ";
    printList(mergedList);

    return 0;
}