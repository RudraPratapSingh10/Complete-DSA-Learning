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
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        if(head== nullptr){
            return nullptr;
        }


        ListNode* temp = head;
        int cnt = 0; 

        while(temp != nullptr && cnt < k){
            temp = temp->next;
            cnt++;
        }

        if(cnt < k){
            return head;
        }

        ListNode* curr = head;
        ListNode* forw = nullptr;
        ListNode* prev = nullptr;

       
        cnt = 0;
        while(curr != nullptr && cnt < k){
            forw = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forw;
            cnt++;  
        }

        
            head ->next = reverseKGroup(forw,k);
         

         return prev;

    }
};