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
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        int l1 = 0;
        int l2 = 0;
        ListNode* p1 = pHead1;
        ListNode* p2 = pHead2;
        if(pHead1==nullptr || pHead2==nullptr)
            return nullptr;
        while(p1!=nullptr)
        {
            ++l1;
            p1 = p1->next;
        }
        while(p2!=nullptr)
        {
            ++l2;
            p2 = p2->next;
        }
        int diff = abs(l1-l2);
        if(l1 < l2)
        {
            swap(pHead1, pHead2);
        }
        ListNode* cur = pHead1;
        while(diff){
            cur = cur->next;
            diff--;
        }
        while(cur != pHead2){
            cur = cur->next;
            pHead2 = pHead2->next;
        }
        return cur;
        
        
        
    }
};