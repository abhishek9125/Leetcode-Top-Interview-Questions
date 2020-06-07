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
    bool checkPalindrome(ListNode* head1,ListNode* head2){
        struct ListNode* temp1 = head1;
        struct ListNode* temp2 = head2;
        
        while(temp1 && temp2){
            if(temp1->val==temp2->val){
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
            else{
                return 0;
            }
        }
        
        if(temp1==NULL && temp2==NULL){
            return 1;
        }
        return 0;
    }
    
    ListNode* reverseList(ListNode* head){
        if(head==NULL){
            return head;
        }
        struct ListNode* ptr = head;
        struct ListNode* prev = NULL;
        struct ListNode* current;
        while(ptr!=NULL){
            current = ptr->next;
            ptr->next = prev;
            prev = ptr;
            ptr = current;
        }
        head = prev;
        return head;
    }
    
    
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return true;
        }
        struct ListNode* fast = head;
        struct ListNode* slow = head;
        struct ListNode* temp = head;
        
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            temp = slow;
            slow = slow->next;
        }
        if(fast!=NULL){
            slow = slow->next;
        }
        temp->next = NULL;
        slow = reverseList(slow);
        bool result = checkPalindrome(head,slow);
        return result;
    }
};
