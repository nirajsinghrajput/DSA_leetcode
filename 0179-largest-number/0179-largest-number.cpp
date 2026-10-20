class Solution {
public:
    string largestNumber(vector<int>& nums) {
        for (int num : nums) {
            insert(to_string(num));
        }

        string ans = "";

        for (int i = 9; i >= 0; --i) {
            Node* temp = hashTable[i];

            while (temp != nullptr) {
                ans += temp->data;
                temp = temp->next;
            }
        }

        // Handle cases like [0, 0].
        if (!ans.empty() && ans[0] == '0') {
            return "0";
        }

        return ans;
    }

private:
    struct Node {
        string data;
        Node* next;

        Node(string val) {
            data = val;
            next = nullptr;
        }
    };

    Node* hashTable[10] = {};

    void insert(string key) {
        int idx = key[0] - '0';
        Node* newNode = new Node(key);

        Node* temp = hashTable[idx];
        Node* prev = nullptr;

        // Insert at the head if the new string belongs first.
        while (temp != nullptr &&
               key + temp->data <= temp->data + key) {
            prev = temp;
            temp = temp->next;
        }

        if (prev == nullptr) {
            newNode->next = hashTable[idx];
            hashTable[idx] = newNode;
        } else {
            newNode->next = temp;
            prev->next = newNode;
        }
    }
};