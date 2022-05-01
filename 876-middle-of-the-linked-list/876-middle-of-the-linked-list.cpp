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
    ListNode* middleNode(ListNode* head) {
        int length = 1;
        ListNode* ptr=head->next;
        ListNode* mid = head;
        int midIndex = 0;
        
        while(ptr != NULL)
        {
            length++;
            if(length/2 != midIndex)
            {
                midIndex++;
                if(mid->next != NULL)
                    mid = mid->next;
            }
            ptr = ptr->next;
        }
        return mid;
    }
};