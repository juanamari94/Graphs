//
//  multilinkedlist.h
//  Graphs
//
//  Created by Juan Amari on 8/21/17.
//  Copyright © 2017 Juan Amari. All rights reserved.
//

#ifndef multilinkedlist_h
#define multilinkedlist_h
#include "linkedlist.h"

typedef struct MultiLinkedListElement {
  struct MultiLinkedList *nextElement;
  ListElement *listElement;
}MultiLinkedListElement;

#endif /* multilinkedlist_h */
