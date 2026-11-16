#include "ECReverseLinkedList.h"

struct ECLinkedListNode* ECReverseLinkedList(struct ECLinkedListNode *pHead)
{
  struct ECLinkedListNode *previous = nullptr;
  struct ECLinkedListNode *current = pHead;

  while (current != nullptr)
  {
    struct ECLinkedListNode *next = current->pNext;
    current->pNext = previous;
    previous = current;
    current = next;
  }

  return previous;
}
