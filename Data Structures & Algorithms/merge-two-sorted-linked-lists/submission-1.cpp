/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==nullptr && list2!=nullptr){
            return list2;
        }
        if(list2==nullptr && list1!=nullptr){
            return list1;
        }
        if(list2==nullptr && list1==nullptr){
            return nullptr;
        }
       ListNode* dummy = new ListNode(-1);
       ListNode*curr=dummy;
ListNode* temp = list1;
ListNode* temp1 = list2;

while (temp != nullptr && temp1 != nullptr) {

    // cout << "temp = " << temp->val 
    //      << ", temp1 = " << temp1->val << endl;

    if (temp->val >= temp1->val) {
        cout << "Taking temp1: " << temp1->val << endl;

        curr->next = temp1;
        temp1 = temp1->next;
    }
    else {
        cout << "Taking temp: " << temp->val << endl;

        curr->next = temp;
        temp = temp->next;
    }
  curr=curr->next;
    cout << "dummy->next = " << curr->val << endl;
}
while(temp != nullptr){
    curr->next=temp;
    temp=temp->next;
     curr=curr->next;
}
while(temp1 != nullptr){
    curr->next=temp1;
    temp1=temp1->next;
     curr=curr->next;
}
cout << "Loop ended" << endl;

if (temp != nullptr)
    cout << "Remaining temp = " << temp->val << endl;

if (temp1 != nullptr)
    cout << "Remaining temp1 = " << temp1->val << endl;

return dummy->next;
    }
};
