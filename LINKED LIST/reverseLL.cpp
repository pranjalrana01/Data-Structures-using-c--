// 206. Reverse Linked List

// Given the head of a singly linked list, reverse the list, and return the reversed list.

// Example 1:

// Input: head = [1,2,3,4,5]
// Output: [5,4,3,2,1]

//solution

class Solution {
    private:
    void reverse(ListNode* &head,ListNode* &curr,ListNode* prev){
        if(curr == NULL){
            head = prev;
            return;
        }

        ListNode* forward = curr->next;
        reverse(head, forward, curr);
        curr->next = prev;
    }
    
public:
    ListNode* reverseList(ListNode* head) {
       ListNode* curr = head;
         ListNode* prev = NULL;
        reverse(head,curr,prev);
        return head;
    }
};