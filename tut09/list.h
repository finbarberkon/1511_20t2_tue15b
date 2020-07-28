// Emily Chen
// Defines a linked list and basic functions to debug it
// COMP1511 17s1 rendition

struct node {
	int data;		// data item at this node
	struct node *next;		// pointer to the next node
};

// ==== W10 Tut Problems ====
// returns a copy of the linked list
struct node *copy(struct node *head);
// returns 1 if the two lists are identical, otherwise returns 0
int identical(struct node *head1, struct node *head2);
// returns 1 if list is in strictly increasing order, otherwise returns 0
int ordered(struct node *head);
// given two lists in strictly increasing order,
// return a new linked list (in strictly increasing order) of the elements in both set1 and set2
struct node *set_intersection(struct node *set1, struct node *set2);
// given two linked lists in strictly increasing order,
// return a new linked list (in strictly increasing order) of the elements in either set1 or set2
// no duplicates (only include them once)
struct node *set_union(struct node *set1, struct node *set2);


// === Basic Functions ===
// creates a linked list from the given array of values
struct node *create_list(int values[], int size);
// creates a node with the given data item
struct node *create_node(int dat);
// print out the link list starting at head
void print_list(struct node *head);
// frees all the elements in a linked list
void free_list(struct node *head);
// return the number of items in the linked list
int num_items(struct node *head);
