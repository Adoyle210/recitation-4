/*
 * This program implements a simple loop through a small linked list, but it
 * is broken.  When you try to compile this file using the provided Makefile,
 * you will see several errors that say something like "incomplete type" or
 * "incomplete definition of type".  This happens because the linked list
 * is implemented in such a way as not to expose its inner implementation
 * details.  In this recitation exercise, you'll explore how to fix this
 * broken loop without exposing the implementation details of the list.
 */

#include <stdio.h>

#include "list.h"

int main() {
  struct list* list = list_setup();
  struct list_it *iter = list_it_setup(list);  /* This line generates a compiler error. */
  int i = 0;

  while (list_it_get_next(iter)) { //has* 
    /*
     * The next two lines each generate a compiler error.
     */
    printf("== list[%2d]: %d\n", i, list_it_next(iter));
    //curr = curr->next;
    i++;
  }

  return 0;
}
