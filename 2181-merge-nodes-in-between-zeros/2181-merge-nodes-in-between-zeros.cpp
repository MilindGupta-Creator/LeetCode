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
    ListNode* mergeNodes(ListNode* head) {
        
        head = head->next;
        
        ListNode* dummy = new ListNode;
        
        auto temp = dummy;
        
        while(head!=NULL)
        {
            int sum=0;
            
            while(head->val!=0)
            {
                sum+=head->val;
                head=head->next;
            }
            
            dummy->next  = new ListNode(sum);
            dummy = dummy->next;
            
            head=head->next;
            
        }
        
        return temp->next;
        
    }
};