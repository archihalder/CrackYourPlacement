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
    // SC - O(1)
    ListNode* reverseList(ListNode* head) {
        ListNode *prev = nullptr, *curr = head, *temp = head;

        while(temp) {
            temp = temp->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        return prev;
    }
};