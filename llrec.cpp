#include "llrec.h"

//*********************************************
// Provide your implementation of llpivot below
//*********************************************

void llpivot (Node*& head, Node*& smaller, Node*& larger, int pivot)
{
 if (head == NULL)
 {
   smaller = larger = nullptr;
   return;
 }
 else if ((head -> val) <= pivot)
 {
   smaller = head;
   //head = NULL;
   llpivot(head-> next, smaller -> next, larger, pivot);
 }
 else if ((head -> val) >= pivot)
 {

   larger = head;
   llpivot(head->next, smaller, larger->next, pivot);
 }
 //head = NULL;
}
