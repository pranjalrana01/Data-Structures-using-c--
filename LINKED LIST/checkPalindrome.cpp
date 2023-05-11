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
/*
    ------------------solution 1 --------------------------------

class Solution {
    private:
        bool checkPalindrome(vector<int> arr){

            int n = arr.size();
            int s = 0;
            int e = n-1;

            while(s<=e){

                if(arr[s] != arr[e]){
                    return 0;
                }
                s++;
                e--;
            }
            return 1;
    }
public:
    bool isPalindrome(ListNode* head) {
        vector<int>arr;

        ListNode* temp = head;
        while(temp != NULL){
            arr.push_back(temp -> val);
            temp = temp -> next;
        }
        return checkPalindrome(arr);
    }
};

*/

// another solution of check palindrome

class Solution{
    private:
        ListNode* getMid(ListNode* head){
            ListNode* slow = head;
            ListNode* fast = head->next;

            while(fast != NULL && fast->next != NULL){
                fast = fast->next->next;
                slow = slow->next;
            }
            return slow;
        }

        ListNode* reverse(ListNode* head){
            ListNode* curr = head;
            ListNode* prev = NULL;
            ListNode* next = NULL;

            while(curr != NULL){
                next = curr -> next;
                curr -> next = prev;
                prev = curr;
                curr = next;
            }
            return prev;
        }
    public:
        bool isPalindrome(ListNode* head){
            if( head -> next == NULL){
                return true;
            }

            //mid nikal ke lao
            ListNode* middle = getMid(head);

            //step 2 -> reverse the list after middle
            ListNode* temp = middle -> next;
            middle -> next = reverse(temp); 

            //step3 -> compare both halves
            ListNode* head1 = head;
            ListNode* head2 = middle->next;

            while(head2 != NULL){
                if(head1 -> val != head2 -> val){
                    return false;
                }
                head1 = head1 -> next;
                head2 = head2 ->next;
            }

            //step4 -> reoeat step2
            temp = middle->next;
            middle->next = reverse(temp);

            return true;
        }
};