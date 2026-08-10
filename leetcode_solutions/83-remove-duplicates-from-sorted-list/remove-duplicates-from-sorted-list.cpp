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
        ListNode* curr = new ListNode();
        curr = head;
        while (curr != NULL && curr->next != NULL) {
            if (curr->val == curr->next->val) {
                curr->next = curr->next->next;
            }else{
                curr=curr->next;
            }
        }

        return head;
    }
};

// Time: O(n)
// Space: O(1)

// Interview mein bolna

// "Since the linked list is sorted, duplicate values will always be adjacent. I'll maintain a current pointer and compare it with the next node. If they are equal, I'll bypass the next node. Otherwise, I'll move the current pointer forward. When I delete a duplicate, I won't move the pointer because there may be consecutive duplicates."