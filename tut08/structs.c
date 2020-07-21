// A program to create and use a student struct
// Finbar Berkon
// July 2020

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_NAME_LENGTH 64

// Q7) Create a struct to represent a student and their asst 1 mark
struct student {
    char name[MAX_NAME_LENGTH];
    int zid;
    double asst1_mark;
    // Q12) Edit the struct student to hold a reference to another struct student
    //      (remember both places to edit)
    struct student *next;
};

// Q14) Create another struct to represent a class and a function to instatiate
//      it
struct class {
    int num_students;
    struct student *head;
};

// Create a struct student with the given properties, and return a pointer
// to that struct student
struct student *createStudent(char *name, int zid, double asst1_mark);

// Create and return a struct student with the given properties
struct class *createClass(void);

// Add a student to the given class
void addStudent(struct class *class, struct student *new_student);

int main(void) {
    // Q8) Create a student that exists locally within the function
    struct student finbar;
    finbar.zid = 1234567;
    finbar.asst1_mark = 65;
    strcpy(finbar.name, "Finbar");

    // Q9) Create a student that exists on the heap with a pointer to it
    struct student *jenny = createStudent("Jenny", 7654321, 100);

    // Q11) How can we print out the name of each of these students? What
    //      operator do we use?
    printf("Student '%s', zID: %d, Mark: %lf\n", finbar.name, finbar.zid, finbar.asst1_mark);
    printf("Student '%s', zID: %d, Mark: %lf\n", jenny->name, jenny->zid, jenny->asst1_mark);

    // Q10) Which of these causes a memory leak? How can we check?
    // we use ddc --leakcheck to compile, and then we run our program and it will
    // tell us if we have memory leaks. Make sure to use free() on every piece
    // of memory you malloc
    free(jenny);
    
    // Q13) Make a linked list of struct students to represent a class
    struct class *class = newClass();
    
    // Extra Q) Now lets migrate our earlier linked list into our class struct!
    
    // Create some students
    struct student *student1 = newStudent("student1", 1234567, 100);
    struct student *student2 = newStudent("student1", 1234567, 100);
    struct student *student3 = newStudent("student1", 1234567, 100);
    struct student *student4 = newStudent("student1", 1234567, 100);
    
    // And add those students to the class
    addStudent(class, student1);
    addStudent(class, student2);
    addStudent(class, student3);
    addStudent(class, student4);

    // Bonus: can you write a function to free all the elements of the linked list?

    return 0;
}

// Create a struct student with the given properties, and return a pointer
// to that struct student
struct student *createStudent(char *name, int zid, double asst1_mark) {
    struct student *new = malloc(sizeof(struct student));
    new->zid = zid;
    new->asst1_mark = asst1_mark;
    strcpy(new->name, name);
    new->next = NULL;
    return new;
}

// Create and return a struct student with the given properties
struct class *createClass(void) {
    struct class *new = malloc(sizeof(struct class));
    new->num_students = 0;
    new->head = NULL;
    return new;
}

// Add a student to the given class
void addStudent(struct class *class, struct student *new_student) {
    // Create a variable to use to iterate through your list. Its a good idea to
    // create a seperate variable rather than iterating through with class->head
    // because that would change what class->head refers to (it wouldn't refer
    // to the first student anymore!
    struct student *curr = class->head;

    // Now we have to deal with the special case that the list is empty, and
    // curr actually equals NULL. If that's the case, using curr->next on line
    // ???? would cause the program to dereference NULL and crash!
    //
    // Instead we check this first, add the new student as a new head of the
    // list, and return out of the function early. We only continue to the loop
    // if we know curr is NOT NULL.
    if (curr == NULL) {
        class->head = new_student;
        class->num_students++;
        return;
    }

    // Now we look through the list to find the last struct student
    while (curr->next != NULL) {
        curr = curr->next;
    }
    
    // Now that we know that curr points to the last student currently in the
    // list, we can update its next field to make new_student the last element
    // in our linked list.
    curr->next = new_student;
    curr->num_students++;
}
