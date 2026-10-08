/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
    private:
    void inserttail(Node*&head, Node*&tail, int d){
        Node* newnode = new Node(d);
        if(head == NULL){
            head = newnode;
            tail = newnode;
            return;
        }
        else{
            tail->next = newnode;
            tail = newnode;
        }
    }
public:
    Node* copyRandomList(Node* head) {
        
        Node* clonehead = NULL;
        Node* clonetail = NULL;
        Node * temp = head;
        while(temp != NULL){
            inserttail(clonehead,clonetail,temp->val);
            temp = temp->next;
        }

        unordered_map<Node*,Node*>oldtonew;

        Node* original = head;
        Node* clone = clonehead;
        while(clone !=NULL && original != NULL){
            oldtonew[original] = clone;
            original = original ->next;
            clone = clone-> next;
        }
        original = head ;
        clone = clonehead;

        while(original != NULL){
            clone->random = oldtonew[original->random];
            original = original ->next;
            clone = clone-> next;
        }
        return clonehead;
    }
};