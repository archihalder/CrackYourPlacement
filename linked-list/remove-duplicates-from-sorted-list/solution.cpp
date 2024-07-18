#include <bits/stdc++.h>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    // TC - O(n)
    // SC - O(n)
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *dummy = new ListNode(0);
        ListNode *temp = dummy;

        temp->next = head;
        temp = temp->next;

        while(head) {
            while(head->next != nullptr && head->val == head->next->val) {
                head = head->next;
            }

            temp->next = head->next;
            temp = temp->next;
            head = head->next;
        }

        return dummy->next;
    }
};