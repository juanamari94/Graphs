//
//  multilinkedlist.c
//  Graphs
//
//  Created by Juan Amari on 8/21/17.
//  Copyright © 2017 Juan Amari. All rights reserved.
//

#include <stdio.h>
#include "multilinkedlist.h"

void add_multilist_element(MultiLinkedListElement *root, MultiLinkedListElement* element) {
  if (root == NULL) {
    return;
  }
  MultiLinkedListElement *aux = root;
  while (aux -> nextHigherElement != NULL) {
    aux = aux -> nextHigherElement;
  }
  aux -> nextHigherElement = element;
}

void add_sub_element_to_multilist(MultiLinkedListElement *root, int value, ListElement* element) {
  if (root == NULL) {
    return;
  }
  MultiLinkedListElement *aux = root;
  while (aux != NULL) {
    if (aux -> value == value) {
      if (aux -> subListRoot == NULL) {
        aux -> subListRoot = create_list_element(element -> value);
      } else {
        add_list_element(aux -> subListRoot, element);
      }
      return;
    }
    aux = aux -> nextHigherElement;
  }
}

MultiLinkedListElement* create_multilist_element(int value) {
  MultiLinkedListElement *element = (MultiLinkedListElement *)malloc(sizeof(MultiLinkedListElement));
  element -> value = value;
  element -> nextHigherElement = NULL;
  element -> subListRoot = NULL;
}

void destroy_multilist_element(MultiLinkedListElement *element) {
  element -> nextHigherElement = NULL;
  destroy_list(element -> subListRoot);
  free(element);
}

void destroy_multilist(MultiLinkedListElement *root) {
  MultiLinkedListElement *current = root;
  while (current != NULL) {
    MultiLinkedListElement *next = current -> nextHigherElement;
    destroy_multilist_element(current);
    current = next;
  }
}

void print_multilist(MultiLinkedListElement *root) {
  MultiLinkedListElement *aux = root;
  while (aux != NULL) {
    printf("\n");
    printf("Higher Node: %d\n", aux -> value);
    print_linkedlist(aux -> subListRoot);
    printf("\n");
    aux = aux -> nextHigherElement;
  }
}