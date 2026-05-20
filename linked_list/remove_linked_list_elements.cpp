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
    ListNode* removeElements(ListNode* head, int val) {
        if (head == nullptr) {
            return head;
        }
        ListNode* temp1 = nullptr; 
        ListNode* temp2 = head;
        while (temp2 != nullptr) {
            if (temp2->val == val && temp2 == head) {
                head = head->next;
                delete temp2;
                temp2 = head;
            }
            else if(temp2->val == val) {
                temp1->next = temp2->next;
                delete temp2;
                temp2 = temp1->next;
            }
            else {
                temp1 = temp2;
                temp2 = temp2->next;
            }
        }
        return head;
    }
};