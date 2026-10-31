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
    void reversekg(ListNode* head, ListNode* tail, int k) {
        vector<int> values;
        ListNode* temp = head;
        while(temp != tail) {
            values.push_back(temp->val);
            temp = temp->next;
        }
        values.push_back(tail->val);
        temp = head;
        while(temp != tail) {
            temp->val = values[k-1];
            k--;
            temp = temp->next;
        }
        tail->val = values[0];
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int n = 0;
        ListNode* temp = head;
        ListNode* tail = head;
        while(tail != nullptr) {
            n++;
            if(n%k == 0) {
                reversekg(temp, tail, k);
                temp = tail->next;
            }
            tail = tail->next;
            
        }

        return head;
    }
};