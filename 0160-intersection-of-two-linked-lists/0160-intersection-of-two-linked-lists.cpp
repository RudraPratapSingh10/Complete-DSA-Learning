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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int l1=0, l2=0;
        ListNode*p1=headA;
        ListNode*p2=headB;
        while(p1!=NULL)
        {
            l1++;
            p1=p1->next;
        }
        while(p2!=NULL)
        {
            l2++;
            p2=p2->next;
        }
        p1=headA,p2=headB;
       if(l1>l2)
       {
        for(int i=1;i<=l1-l2;i++){
            p1=p1->next;
        }
       }
       if(l1<l2){
        for(int i=1;i<=l2-l1;i++){
            p2=p2->next;
        }
       }
       while(p1!=p2 and p1!=NULL and p2!=NULL)
       {
        p1=p1->next;
        p2=p2->next;
       }
       if(p1==NULL  or p2==NULL)
       {
        return(NULL);
       }
       else
       {
        return(p1);
       }
    }
};