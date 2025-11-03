#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

typedef struct ListNode{
     int date;
   struct  ListNode* next;
    
   ListNode(int a):date(a),next(nullptr){
   
    }
}ln;

ln* revise(ln *head){
  if(!head || head->next == nullptr) return head;
   ln* re = revise(head->next);
    head->next->next = head;
    head->next = nullptr;
  return re;  

}
int main(){
 ln *ob=new ln(1);
  ob->next =new ln(2);
  ob->next->next=new ln(3);
  ob->next->next->next=new ln(4);
 ln*temp = ob;
 while(temp){
    cout<<temp->date<<" ";
    temp = temp->next; 
 }
  cout<<endl;

 ln* reshead = revise(ob);
     temp = reshead;
  while(temp){
    cout<<temp->date<<"";
     temp = temp->next;

 }
  cout<<endl;

return 0;
}
