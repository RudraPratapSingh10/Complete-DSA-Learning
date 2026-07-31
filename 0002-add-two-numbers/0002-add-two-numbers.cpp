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
private:
    void inserttail(ListNode* &head, ListNode* &tail, int value){
        ListNode* temp = new ListNode(value);
        
        if(head == NULL){
            head = temp;
            tail = temp;
        }
        else{
            tail->next = temp;
            tail = temp;
        }
    }

public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        int carry = 0;
        ListNode* anshead = NULL;
        ListNode* anstail = NULL;

        while(l1 != NULL || l2 != NULL || carry != 0){
            
            int val1 = (l1 != NULL) ? l1->val : 0;
            int val2 = (l2 != NULL) ? l2->val : 0;

            int sum = val1 + val2 + carry;
            int digit = sum % 10;
            carry = sum / 10;

            inserttail(anshead, anstail, digit);

            if(l1) l1 = l1->next;
            if(l2) l2 = l2->next;
        }

        return anshead;
    }
};