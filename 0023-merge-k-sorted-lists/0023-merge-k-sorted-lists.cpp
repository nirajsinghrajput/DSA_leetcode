/**
 * Definition for singly-linked lists.
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if(lists.empty()) return nullptr;
        while(n > 1) {
            vector<ListNode*> merged;
            
            for(int i = 0; i < n-1; i += 2) {
                ListNode dummy(0);
                ListNode* temp = &dummy;
                while(lists[i] != nullptr && lists[i+1] != nullptr) {
                    if(lists[i]->val >= lists[i+1]->val) {
                        temp->next = lists[i+1]; 
                        temp = temp->next;
                        lists[i+1] = lists[i+1]->next;
                    }
                    else {
                        temp->next = lists[i]; 
                        temp = temp->next;
                        lists[i] = lists[i]->next;
                    }
                }
                if(lists[i] == nullptr) {
                    temp->next = lists[i+1];
                }
                else {
                    temp->next = lists[i];
                }
                merged.push_back(dummy.next);
            }
            if(n%2 != 0) {
                merged.push_back(lists[n-1]);
            }
            lists = merged;
            n = lists.size();
        }
        return lists[0];
    }
};