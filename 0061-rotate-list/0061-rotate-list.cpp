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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr) return head;
        ListNode* temp = head;
        int n = 1;
        while(temp->next != nullptr) {
            temp = temp->next;
            n++;
        }
        k %= n;
        if(k == 0) return head;
        ListNode* kth = head;
        for(int i = 0; i < n-k-1; k++) {
            kth = kth->next;
        }
        temp->next = head;
        head = kth->next;
        kth->next = nullptr;
        return head;
    }
};