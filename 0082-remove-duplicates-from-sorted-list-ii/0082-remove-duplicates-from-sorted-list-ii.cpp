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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) return nullptr;

        ListNode* f = head;
        ListNode* candidate = head;
        ListNode* l = nullptr;
        int count = 0;

        while (f != nullptr) {
            if (f->val != candidate->val) {
                if (count == 1) {
                    if (l == nullptr) {
                        head = candidate;
                    } else {
                        l->next = candidate;
                    }
                    l = candidate;
                }
                candidate = f;
                count = 0;
            }
            count++;
            f = f->next;
        }

        if (count == 1) {
            if (l == nullptr) {
                head = candidate;
            } else {
                l->next = candidate;
            }
            l = candidate;
        }

        if (l == nullptr) return nullptr;
        l->next = nullptr;

        return head;
    }
};