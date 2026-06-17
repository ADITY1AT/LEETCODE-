class Solution {
public:
//    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         int carry = 0;

//         ListNode* temp = new ListNode(0);
//         ListNode* curr = temp;

//         while (l1 || l2 || carry) {
//             int sum = 0;

//             if (l1) {
//                 sum += l1->val;
//                 l1 = l1->next;
//             }
//             if (l2) {
//                 sum += l2->val;
//                 l2 = l2->next;
//             }
//             sum = sum + carry;

//             curr->next = new ListNode(sum % 10);
//             carry = sum / 10;
//             curr = curr->next;
//         }
//         return temp->next;
//     }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0,sum=0;
        ListNode* dummy=new ListNode(0);
        ListNode* temp=dummy;
        while(l1 || l2 || carry){
          if(l1){
            sum+=(l1->val);
            l1=l1->next;
          }
          if(l2){
            sum+=(l2->val);
            l2=l2->next;
          }

          if(carry)sum+=(carry);

          int digit=sum%10;
          carry=sum/10;
          temp->next=new ListNode(digit);
          temp=temp->next;
        
          sum=0;
        }
        return dummy->next;

        
    }
};
