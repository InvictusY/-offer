/*
struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
        val(x), next(NULL) {
    }
};
*/
class Solution {
public:
    ListNode* EntryNodeOfLoop(ListNode* pHead)
    {
        if(pHead==nullptr || pHead->next==nullptr)
            return nullptr;
        ListNode* fast = pHead;
        ListNode* slow = pHead;
        while(fast->next!=nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast)
            {
                fast = pHead;
                while(fast!=slow)
                {
                    fast = fast->next;
                    slow = slow->next;
                }
                return slow;
            }
        }
        return nullptr;

    }
};