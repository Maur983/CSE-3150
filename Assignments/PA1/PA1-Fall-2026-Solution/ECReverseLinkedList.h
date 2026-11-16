#ifndef EC_REVERSE_LINKEDLIST_H
#define EC_REVERSE_LINKEDLIST_H

struct ECLinkedListNode
{
  int value;
  struct ECLinkedListNode *pNext;
};

struct ECLinkedListNode* ECReverseLinkedList(struct ECLinkedListNode *pHead);

#endif
