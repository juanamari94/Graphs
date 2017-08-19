#include <stdio.h>
#include <stdlib.h>
#include "graph.h"
#include "linkedlist.h"

int main() {
  printf("hello\n");
  test();
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
  return 0;
}
