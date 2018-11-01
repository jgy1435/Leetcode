//You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order and each of their nodes contain a single digit. Add the two numbers and return it as a linked list.
//
//You may assume the two numbers do not contain any leading zero, except the number 0 itself.

#include <iostream>
using namespace std;

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int carry=0;
    int n=l1->val+l2->val;
    if(n>=10) {n-=10; carry+=1;}
    ListNode *list=new ListNode(n);
    l1=l1->next;
    l2=l2->next;
    while(l1!=NULL||l2!=NULL){
      if(l1==NULL) {
        n=l2->val+carry;
        carry=0;
        if(n>=10) {n-=10; carry+=1;}
        ListNode *node=new ListNode(n);
        ListNode *temp=list;
        while(temp->next!=NULL) {
          temp=temp->next;
        }
        temp->next=node;
        l2=l2->next;
      } else if(l2==NULL) {
        n=l1->val+carry;
        carry=0;
        if(n>=10) {n-=10; carry+=1;}
        ListNode *node=new ListNode(n);
        ListNode *temp=list;
        while(temp->next!=NULL) {
          temp=temp->next;
        }
        temp->next=node;
        l1=l1->next;
      } else {
        n=l1->val+l2->val+carry;
        carry=0;
        if(n>=10) {n-=10; carry+=1;}
        ListNode *node=new ListNode(n);
        ListNode *temp=list;
        while(temp->next!=NULL) {
          temp=temp->next;
        }
        temp->next=node;
        l1=l1->next;
        l2=l2->next;
      }
    }
    if(carry!=0) {
      ListNode *node=new ListNode(carry);
      ListNode *temp=list;
      while(temp->next!=NULL) {
        temp=temp->next;
      }
      temp->next=node;
    }
    return list;
  }
};
int main(int argc, const char * argv[]) {
  return 0;
}
