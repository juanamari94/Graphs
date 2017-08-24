//
//  multilinkedlist.h
//  Graphs
//
//  Created by Juan Amari on 8/21/17.
//  Copyright © 2017 Juan Amari. All rights reserved.
//

#ifndef multilinkedlist_h
#define multilinkedlist_h

#include <stdlib.h>
#include "linkedlist.h"

typedef struct MultiLinkedListElement {
  int value;
  struct MultiLinkedListElement *nextHigherElement;
  ListElement *subListRoot;
}MultiLinkedListElement;

void add_multilist_element(MultiLinkedListElement *root, MultiLinkedListElement* element);

void add_sub_element_to_multilist(MultiLinkedListElement *root, int value, ListElement* element);

MultiLinkedListElement* create_multilist_element(int value);

void destroy_multilist_element(MultiLinkedListElement *element);

void destroy_multilist(MultiLinkedListElement *root);

void print_multilist(MultiLinkedListElement *root);

#endif /* multilinkedlist_h */
