/*
struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) :
			val(x), next(NULL) {
	}
};*/
class Solution {
public:
    ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
        if(pListHead==nullptr || k<1)
            return nullptr;
        ListNode* p1 = pListHead;
        ListNode* p2 = pListHead;
        while(k-1)
        {
            if(p2->next!=nullptr)
            {
            p2 = p2->next;
            }
            else
                return nullptr;
            k--;
        }
        while(p2->next!=nullptr)
        {
            p1 = p1->next;
            p2 = p2->next;
        }
        return p1;
    
    }
};