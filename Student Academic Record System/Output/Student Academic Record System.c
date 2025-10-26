#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structure for Student node (Doubly Linked List)
struct Student {
    int id;
    char name[50];
    char department[50];
    float gpa;
    struct Student *next;
    struct Student *prev;
};

// Global head pointer
struct Student *head = NULL;

// Function prototypes
void insertStudent();
void deleteStudent();
void searchStudent();
void displayStudents();
void reverseDisplay();
void calculateAverageGPA();
struct Student* cloneList(struct Student *source);
void displayClonedList(struct Student *clonedHead);

int main() {
    int choice;
    struct Student *backup = NULL;

    while (1) {
        printf("\n========== STUDENT ACADEMIC RECORD SYSTEM ==========\n");
        printf("1. Insert New Student Record\n");
        printf("2. Delete Student by ID\n");
        printf("3. Search Student (by ID or Name)\n");
        printf("4. Display All Records\n");
        printf("5. Reverse Display (Using Doubly Linked List)\n");
        printf("6. Clone the List (Backup)\n");
        printf("7. Display Cloned Backup\n");
        printf("8. Calculate Average GPA\n");
        printf("9. Exit\n");
        printf("====================================================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: insertStudent(); break;
            case 2: deleteStudent(); break;
            case 3: searchStudent(); break;
            case 4: displayStudents(); break;
            case 5: reverseDisplay(); break;
            case 6: backup = cloneList(head);
                    printf("\n Backup list cloned successfully!\n");
                    break;
            case 7: displayClonedList(backup); break;
            case 8: calculateAverageGPA(); break;
            case 9: printf("\nExiting... Thank you!\n");
                    exit(0);
            default: printf("\n Invalid choice! Try again.\n");
        }
    }
}

// Function to insert a new student record
void insertStudent() {
    struct Student *newNode = (struct Student*)malloc(sizeof(struct Student));

    printf("\nEnter Student ID: ");
    scanf("%d", &newNode->id);
    printf("Enter Student Name: ");
    scanf("%s", newNode->name);
    printf("Enter Department: ");
    scanf("%s", newNode->department);
    printf("Enter GPA: ");
    scanf("%f", &newNode->gpa);

    newNode->next = NULL;
    newNode->prev = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        struct Student *temp = head;
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }

    printf("\n Student record added successfully!\n");
}

// Function to display all student records
void displayStudents() {
    struct Student *temp = head;
    if (temp == NULL) {
        printf("\nNo student records found!\n");
        return;
    }

    printf("\n===== Student Records =====\n");
    while (temp != NULL) {
        printf("\nID: %d\nName: %s\nDepartment: %s\nGPA: %.2f\n", 
                temp->id, temp->name, temp->department, temp->gpa);
        temp = temp->next;
    }
}

// Function to delete a student record by ID
void deleteStudent() {
    int id;
    printf("\nEnter Student ID to delete: ");
    scanf("%d", &id);

    struct Student *temp = head;

    while (temp != NULL && temp->id != id)
        temp = temp->next;

    if (temp == NULL) {
        printf("\n Student with ID %d not found!\n", id);
        return;
    }

    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        head = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;

    free(temp);
    printf("\n Student record deleted successfully!\n");
}

// Function to search for a student by ID or Name
void searchStudent() {
    int option;
    printf("\nSearch by: 1. ID  2. Name\nEnter choice: ");
    scanf("%d", &option);

    if (option == 1) {
        int id;
        printf("Enter Student ID: ");
        scanf("%d", &id);
        struct Student *temp = head;
        while (temp != NULL) {
            if (temp->id == id) {
                printf("\nRecord Found:\nID: %d\nName: %s\nDept: %s\nGPA: %.2f\n",
                       temp->id, temp->name, temp->department, temp->gpa);
                return;
            }
            temp = temp->next;
        }
        printf("\n No record found with ID %d.\n", id);
    } 
    else if (option == 2) {
        char name[50];
        printf("Enter Student Name: ");
        scanf("%s", name);
        struct Student *temp = head;
        while (temp != NULL) {
            if (strcmp(temp->name, name) == 0) {
                printf("\nRecord Found:\nID: %d\nName: %s\nDept: %s\nGPA: %.2f\n",
                       temp->id, temp->name, temp->department, temp->gpa);
                return;
            }
            temp = temp->next;
        }
        printf("\n No record found for name '%s'.\n", name);
    } 
    else {
        printf("\n Invalid option!\n");
    }
}

// Function to reverse display the list
void reverseDisplay() {
    struct Student *temp = head;
    if (temp == NULL) {
        printf("\nNo records to display!\n");
        return;
    }

    while (temp->next != NULL)
        temp = temp->next;

    printf("\n===== Student Records (Reverse Order) =====\n");
    while (temp != NULL) {
        printf("\nID: %d\nName: %s\nDepartment: %s\nGPA: %.2f\n",
               temp->id, temp->name, temp->department, temp->gpa);
        temp = temp->prev;
    }
}

// Function to calculate average GPA of all students
void calculateAverageGPA() {
    if (head == NULL) {
        printf("\nNo records found!\n");
        return;
    }

    float total = 0;
    int count = 0;
    struct Student *temp = head;

    while (temp != NULL) {
        total += temp->gpa;
        count++;
        temp = temp->next;
    }

    printf("\nAverage GPA of all students: %.2f\n", total / count);
}

// Function to clone (copy) the linked list
struct Student* cloneList(struct Student *source) {
    if (source == NULL)
        return NULL;

    struct Student *cloneHead = NULL, *cloneTail = NULL;

    while (source != NULL) {
        struct Student *newNode = (struct Student*)malloc(sizeof(struct Student));
        newNode->id = source->id;
        strcpy(newNode->name, source->name);
        strcpy(newNode->department, source->department);
        newNode->gpa = source->gpa;
        newNode->next = NULL;
        newNode->prev = NULL;

        if (cloneHead == NULL) {
            cloneHead = newNode;
            cloneTail = newNode;
        } else {
            cloneTail->next = newNode;
            newNode->prev = cloneTail;
            cloneTail = newNode;
        }

        source = source->next;
    }
    return cloneHead;
}

// Function to display the cloned list
void displayClonedList(struct Student *clonedHead) {
    if (clonedHead == NULL) {
        printf("\nNo backup records available!\n");
        return;
    }

    printf("\n===== Backup (Cloned) Student Records =====\n");
    struct Student *temp = clonedHead;
    while (temp != NULL) {
        printf("\nID: %d\nName: %s\nDepartment: %s\nGPA: %.2f\n",
               temp->id, temp->name, temp->department, temp->gpa);
        temp = temp->next;
    }
}

