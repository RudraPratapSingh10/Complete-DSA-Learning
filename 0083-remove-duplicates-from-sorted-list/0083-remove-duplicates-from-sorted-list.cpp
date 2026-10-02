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
        if(head == nullptr){
            return nullptr;
        }

        ListNode* temp = head;
        while(temp != nullptr){
            if((temp->next != nullptr && temp->val == temp ->next ->val)){
                ListNode * next_next = temp->next->next;
                ListNode *nodeToDelete = temp ->next;
                temp->next = next_next;
                delete nodeToDelete;

            }
            else{
                temp = temp->next;
            }

        }
        return head;
    }
};