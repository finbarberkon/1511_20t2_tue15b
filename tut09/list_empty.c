// implements functions in list.h
#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "list.h"

// ======= W10 Tut Problems ========

struct node *list_append(struct node *list1, struct node *list2) {
    struct node *curr = list1;
    
    // Check if the first list is empty, in which case we can just return the
    // second list
    if (curr == NULL) {
        return list2;
    }
    
    // Get current to the right place
    while (curr->next != NULL) {
        curr = curr->next;
    }
    
    // What do we do now that current points to the last node in list 1
    curr->next = list2;
    
    // how do we give back the pointer ot the whole list?
    return list1;
}

// returns a copy of the linked list
struct node *copy(struct node *head) {
    if (head == NULL) {
        return NULL;
    }
    
    struct node *new_head = create_node(head->data);
    struct node *old_curr = head->next;
    struct node *new_curr = new_head;
    
    while (old_curr != NULL) {
        new_curr->next = create_node(old_curr->data);
        new_curr = new_curr->next;
        old_curr = old_curr->next;
    }
    
    return new_head;
}

// returns 1 if the two lists are identical, otherwise returns 0
int identical(struct node *head1, struct node *head2) {
    if (head1 == NULL && head2 == NULL) return 1;
    if (head1 == NULL /* and head2 != NULL*/) return 0;
    if (head2 == NULL /* and head1 != NULL*/) return 0;
    
    while (head1 != NULL && head2 != NULL) {
        if (head1->data != head2->data) return 0;
        head1 = head1->next;
        head2 = head2->next;
    }
    
    if (head1 == NULL && head2 == NULL) {
        return 1;
    } else {
        return 0;
    }
}

// returns 1 if list is in strictly increasing order, otherwise returns 0
int ordered(struct node *head) {
    return 0;   // replace this
}

// given two lists in strictly increasing order,
// return a new linked list (in strictly increasing order) of the elements in both set1 and set2
struct node *set_intersection(struct node *set1, struct node *set2) {
    return NULL;    // replace this
}

// given two linked lists in strictly increasing order,
// return a new linked list (in strictly increasing order) of the elements in either set1 or set2
// no duplicates (only include them once)
struct node *set_union(struct node *set1, struct node *set2) {
    return NULL;    // replace this
}

// =================================

// given an array of integer values for data items
// returns the head of a linked list with these values
// in the order as they appear in the array
// size gives the size of the array
struct node *create_list(int values[], int size) {
    int i = 0;

    if (size <= 0) {
        // empty linked list (or invalid size)
        return NULL;
    }

    struct node *head = NULL;   // head of the linked list
    struct node *tmp = NULL;    // temporary item we're working with
    struct node *curr = NULL;   // current node we're looking at in the linked list

    while (i < size) {
        tmp = create_node(values[i]);

        // link this node onto our list
        if (head == NULL) {
            // this is the first node in the list
            head = tmp;
            curr = head;
        } else {
            // this is not the first node in the list
            // add it to the end, i.e. after curr
            curr->next = tmp;

            // reset curr to point at the new last node
            curr = tmp;
        }
        i = i + 1;
    }

    return head;
}

// creates a struct node with the given data value
// returns a pointer to this node
struct node *create_node(int dat) {
    struct node *new = malloc(sizeof(struct node));
    assert(new != NULL);
    new->data = dat;
    new->next = NULL;

    return new;
}

// prints out the list given the head of a list
void print_list(struct node *head) {
    struct node *curr;
    curr = head;

    while (curr != NULL) {
        printf("[ %d ]-->", curr->data);
        curr = curr->next;
    }
    printf("NULL\n");

}

// frees all the elements in a linked list
void free_list(struct node *head) {
    if (head == NULL) {
        return;
    }
    free_list(head->next);
    free(head);
}

// return the number of items in the linked list
int num_items(struct node *head) {
    struct node *curr = head;
    int count = 0;

    while (curr != NULL) {
        count = count + 1;
        curr = curr->next;
    }

    return count;
}
