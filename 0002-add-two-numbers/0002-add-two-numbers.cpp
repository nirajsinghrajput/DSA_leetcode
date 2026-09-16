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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummyhead = new ListNode(0);
        ListNode* curr = dummyhead;
        int carry = 0;
        while(l1 != nullptr || l2 != nullptr || carry != 0){
            int sum = 0;
            if(l1 != nullptr && l2 != nullptr){
                sum = l1->val + l2->val;
                l1 = l1->next;
                l2 = l2->next;
            }
            else if(l1 == nullptr && l2 != nullptr){
                sum = l2->val;
                l2 = l2->next;
            }
            else if(l2 == nullptr && l1 != nullptr){
                sum = l1->val;
                l1 = l1->next;
            }
            else{
                sum = 0;
            }
            
            sum = sum + carry;
            
            curr->next = new ListNode((sum%10));
            curr = curr->next;
            if(sum >= 10){
                carry = 1;
            }
            else{
                carry = 0;
            }
        }
        return dummyhead->next;
    }
};