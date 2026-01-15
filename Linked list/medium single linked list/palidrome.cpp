// bool isPalindrome(ListNode* head) {
//         ListNode* last=head;
//         int len=0;
//         while(last!=NULL) {
//             len=len+1;
//             last=last->next;
//         }
//         int mid=len/2;
//         ListNode* temp=head;
//         ListNode* rotate=head;
//         int i=0;
//         ListNode* prev=NULL;
//         while(i<mid){
//             ListNode* nextelem=temp->next;
//             temp->next=prev;
//             prev=temp;
//             rotate=temp;
//             temp=nextelem;
//             i++;
//         }
//         if(len%2!=0) temp=temp->next;

//         while(temp!=NULL&& rotate!=NULL){
//             if(rotate->val!=temp->val) return false;
//             rotate=rotate->next;
//             temp=temp->next;
//         }

//         return true;
//             }