
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // Base case: if the list is empty
        if (head == nullptr) return nullptr;
        
        // Recurse on the rest of the list
        head->next = removeElements(head->next, val);
        
        // If current node needs to be deleted, skip it
        if (head->val == val)
            return head->next;
        else
            return head;
    }
};