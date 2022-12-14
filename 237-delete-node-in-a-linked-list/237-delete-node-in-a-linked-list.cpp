/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        
        ListNode* temp;
        temp = node->next; // value 1
        
        node->val  = node->next->val; // 4->1->1->9
        
        node->next = node->next->next; // 4->1->9;
        
        delete temp; // 4->1->9
        
    }
};