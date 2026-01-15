//  ListNode* recursive(ListNode* head, ListNode* prev){
//               if(head==NULL) return prev;
//               ListNode* temp=head->next;
//               head->next=prev;
//               prev=head;
//               head=temp;
//             return recursive(head,prev);
//  }
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev=NULL;
//         if(head==NULL) return NULL;
//         // while(head!=NULL){
//         //     ListNode* temp=head->next;
//         //     head->next=prev;
//         //     prev=head;
//         //     head=temp; 
//         // }
//         // return prev;

//         return recursive(head,prev);

//     }