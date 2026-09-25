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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == nullptr){
            return nullptr;
        }
        ListNode* temp = head;
        int count = 0;
        while(temp->next != nullptr) {
            temp = temp->next;
            count++;
        }
        if(count+1 == n) {
            head = head->next;
            return head;
        }
        temp = head->next;
        ListNode* prev = head;
        for(int i = 0; i < count - n; i++){
            temp = temp->next;
            prev = prev->next;
        }
        prev->next = temp->next;
        temp = nullptr;

        return head;
    }
};