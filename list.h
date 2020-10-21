/*
 * This file contains basic linked list declarations.  Only a forward
 * declaration of the list structure is included, thus preventing users of the
 * list structure from accessing its internals.
 */

#ifndef __LIST_H
#define __LIST_H

struct list;
struct list_it; //added struct for iterator

struct list* list_setup();

//added iterator function
struct list_it* list_it_setup(struct list* list);
int list_it_get_next(struct list_it *iter);
int list_it_next(struct list_it *iter);

#endif
