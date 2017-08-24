#include <stdio.h>
#include "linkedlist.h"
#include "multilinkedlist.h"

int main() {
  ListElement *root = create_list_element(0);
  ListElement *node = create_list_element(1);
  ListElement *node2 = create_list_element(2);
  ListElement *el3 = create_list_element(3);
  ListElement *el4 = create_list_element(100);
  add_list_element(root, node);
  add_list_element(root, node2);
  add_list_element_at(1, root, el3);
  add_list_element_at(3, root, el4);
  printf("\n");
  print_linkedlist(root);
  printf("\n");
  root = delete_head(root);
  print_linkedlist(root);
  ListElement *popped = pop(root);
  printf("Popped element: %d", popped -> value);
  printf("\n");
  print_linkedlist(root);
  destroy_list(root);
  printf("\n\n");
  MultiLinkedListElement *multiRoot = create_multilist_element(1);
  add_sub_element_to_multilist(multiRoot, 1, node);
  add_sub_element_to_multilist(multiRoot, 1, node2);
  MultiLinkedListElement *multiEl1 = create_multilist_element(2);
  add_multilist_element(multiRoot, multiEl1);
  add_sub_element_to_multilist(multiRoot, 2, el3);
  add_sub_element_to_multilist(multiRoot, 2, el4);
  print_multilist(multiRoot);
  return 0;
}