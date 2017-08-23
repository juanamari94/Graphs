#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

typedef struct ListElement{
  int value;
  struct ListElement *nextElement;
}ListElement;

void add_list_element(ListElement *root, ListElement *node);
void add_list_element_at(int index, ListElement* root, ListElement *node);
ListElement* pop(ListElement *root);
void delete_end(ListElement *root);
int get_linkedlist_size(ListElement *root);
void print_linkedlist(ListElement *root);
ListElement* create_list_element(int value);
void destroy_list(ListElement *root);

#endif
