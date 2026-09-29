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
    ListNode* swapPairs(ListNode* head) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* temp = head;

        ListNode* first = temp;
        ListNode* second = temp->next;

        temp = second->next;

        second->next = first;
        first->next =  temp;
        first->next = swapPairs(first->next);
        return second;
    }
};