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
ListNode* getmiddle(ListNode* head){
    ListNode* slow = head;
    ListNode* fast = head->next;

    while(fast != nullptr && fast -> next != nullptr){
        fast= fast->next->next;
        slow = slow->next;
    }
    return slow;
}
ListNode* reverse(ListNode* head){
    ListNode* curr = head;
    ListNode* prev = nullptr;
    ListNode* forw = nullptr;

    while(curr != nullptr){
        forw = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forw; 
    } 
    return prev;  
}
public:
    bool isPalindrome(ListNode* head) {
        if(head == nullptr || head->next == nullptr){
            return true;
        }
        ListNode* getmid = getmiddle(head);
        

        getmid ->next = reverse(getmid->next);

        ListNode* head1 = head;
        ListNode* head2 = getmid->next;

        while(head2 != nullptr){
            if(head1 ->val != head2->val){
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        getmid ->next = reverse(getmid->next);
        
        return true;
    }
};