#include "linkedlist.h"
#include <stdlib.h>
#include <stdio.h>

void add_list_element(ListElement *root, ListElement *element) {
  if (root == NULL) {
    root = element;
  } else {
    ListElement *aux = root;
    while (aux -> nextElement != NULL) {
      aux = aux -> nextElement;
    }
    aux -> nextElement = element;
  }
}

void add_list_element_at(int index, ListElement* root, ListElement *element) {
  if (root == NULL) {
    root = element;
  }
  else {
    if (index > get_linkedlist_size(root)) {
    } else {
      ListElement *aux = root;
      int i = 0;
      while(i < index - 1) {
        aux = aux -> nextElement;
        i++;
      }
      if (aux -> nextElement != NULL) {
        ListElement *previous = aux;
        ListElement *ahead = aux -> nextElement;
        aux = previous;
        element -> nextElement = ahead;
        aux -> nextElement = element;
      }
    }
  }
}

ListElement* delete_head(ListElement *root) {
  if (root == NULL) {
    return NULL;;
  } else {
    ListElement *aux;
    aux = root -> nextElement;
    free(root);
    return aux;
  }
}

void delete_end(ListElement *root) {
  if (root == NULL) {
    return;
  }

  ListElement *aux = root;
  while (aux -> nextElement != NULL) {
    aux = aux -> nextElement;
  }
  aux -> nextElement = NULL;
}

int get_linkedlist_size(ListElement *root) {
  if (root == NULL) {
    return 0;
  } else {
    int size = 0;
    ListElement *aux = root;
    while (aux != NULL) {
      size++;
      aux = aux -> nextElement;
    }
    return size;
  }
}

void print_linkedlist(ListElement *root) {
  ListElement *aux = root;
  int i = 1;
  while (aux != NULL) {
    printf("Node %d: %d\n", i, aux -> value);
    i++;
    aux = aux -> nextElement;
  }
}

ListElement* create_list_element(int value) {
  ListElement* element = (ListElement *)malloc(sizeof(ListElement));
  element -> value = value;
  return element;
}
