// class Solution {
// public:
//     ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
//     {
//         ListNode *dummy = new ListNode(-1);
//         ListNode *curr = dummy;
//         int carry = 0;
//         while(l1!=NULL || l2!= NULL || carry!=0)
//         {
//            int n1 = 0;
//            if(l1!=NULL) 
//            {
//              n1 = l1->val; 
//              l1 = l1->next;
//            }
//            int n2 = 0;
//            if(l2!=NULL) 
//            {
//              n2 = l2->val;
//              l2 = l2->next;
//            }
//            int sum = carry + n1 + n2;
//            carry = sum / 10; 
//            ListNode *ans = new ListNode(sum%10);
//            curr->next = ans;
//            curr = curr->next;
//          }
//        return dummy->next;
//      }
// };