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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n = 0;
        ListNode* temp = head;

        while(temp != nullptr) {
            temp = temp->next;
            n++;
        }

        vector<ListNode*> ans(k, nullptr);

        int rem = n % k;
        int que = n / k;

        for(int i = 0; i < k; i++) {
            if(head == nullptr) break;

            ListNode* dummy = head;
            temp = dummy;

            int len = que;

            if(rem > 0) {
                len++;
                rem--;
            }

            for(int j = 0; j < len-1; j++) {
                temp = temp->next;
            }

            head = temp->next;
            temp->next = nullptr;

            ans[i] = dummy;
        }

        return ans;
    }
};
