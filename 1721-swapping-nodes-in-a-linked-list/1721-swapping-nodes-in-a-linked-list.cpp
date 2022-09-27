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
    
    void swap(int i,int j,vector<int>&v)
    {
        int temp = v[i];
        v[i] = v[j];
        v[j] = temp;
    }
    
    ListNode* swapNodes(ListNode* head, int k) {
        
        ListNode* temp = head;
        
        vector<int>v;
        int cnt=0;
        
        while(temp)
        {
            v.push_back(temp->val);
            temp=temp->next;
            cnt++;
        }
        
        swap(k-1,cnt-k,v);
        
        ListNode* temp2=head;
        int i=0;
        
        while(temp2)
        {
            temp2->val = v[i];
            i++;
            temp2=temp2->next;
        }
        
        return head;
        
        
        
    }
};