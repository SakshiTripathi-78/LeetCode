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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(-1);
        dummy->next = head;

        ListNode* temp = head;
        ListNode* curr = dummy;

        int count = 0;

        while(temp != NULL){
            count++;
            temp = temp->next;
        }

        int diff = count - n;

        while(diff != 0){
            diff--;
            curr = curr->next;
        }

        curr->next = curr->next->next;

        return dummy->next;
    }
};