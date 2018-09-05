/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        stack<int> _stack;
        vector<int> _vector;
        ListNode* phead = head;
        if(head != nullptr)
        {
        while(phead != nullptr)
        {
            _stack.push(phead->val);
            phead = phead->next;
        }
        while(!_stack.empty())
        {
            _vector.push_back(_stack.top());
            _stack.pop();
        }
        }
        return _vector;
    }  
 
};