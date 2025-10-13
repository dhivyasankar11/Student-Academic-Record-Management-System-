# Student Academic Record Management System

Mini Project – Arrays and Linked Lists 

Department: Computer Science and Engineering

Institution: Coimbatore Institute of Engineering and Technology


 PROJECT OVERVIEW

Managing student academic data is an essential process in every educational institution.
Static data storage like spreadsheets becomes inefficient when handling large and dynamic datasets.
This project demonstrates a Student Academic Record Management System implemented using a Doubly Linked List (DLL) to efficiently perform insertion, deletion, searching, and data traversal operations.

OBJECTIVES

   1. Dynamically manage student records using linked list structures.

   2. Support efficient operations for adding, removing, and searching student details.

   3. Provide reverse traversal and backup functionalities using the doubly linked list.

   4. Calculate the average GPA of all recorded students.

FEATURES IMPLEMENTED

1.Insert New Record	  -  Dynamically adds a new student (ID, Name, Department, GPA).

2.Delete Record	      -  Removes a student by ID.

3.Search Record	      -  Finds a student by ID or Name.

4.Display Records  	  -  Displays all records in order of entry.

5.Reverse Display	    -  Traverses and displays the list in reverse using prev pointers.

6.Clone List    	     -  Creates a backup copy of all student records.

7.Display Backup	     -  Shows the cloned list (for verification).

8.Calculate Average GPA-	Computes average GPA of all stored records.


DATA STRUCTURE USED
   * Doubly Linked List
   * Each node contains:

 
struct Student {

    int id;
	
    char name[50];
	
    char department[50];
	
    float gpa;
	
    struct Student *next;
	
    struct Student *prev;
	
};


SYSTEM DESIGN

Main Modules:

insertStudent() – Adds a new student node.

deleteStudent() – Deletes by ID.

searchStudent() – Searches by ID or Name.

displayStudents() – Displays all students in normal order.

reverseDisplay() – Displays in reverse order.

cloneList() – Clones the full list for backup.

calculateAverageGPA() – Calculates and displays average GPA.


SAMPLE OUTPUT

========== STUDENT ACADEMIC RECORD SYSTEM ==========

1. Insert New Student Record
 
2. Delete Student by ID
 
3. Search Student (by ID or Name)
 
4. Display All Records
 
5. Reverse Display (Using Doubly Linked List)
   
6. Clone the List (Backup)
 
7. Display Cloned Backup
 
8. Calculate Average GPA
 
9. Exit

====================================================

Enter your choice: 1

Enter Student ID: 101

Enter Student Name: Alice

Enter Department: CSE

Enter GPA: 8.9


 Student record added successfully!
 

====================================================

Enter your choice: 1

Enter Student ID: 102

Enter Student Name: Bob

Enter Department: ECE

Enter GPA: 7.8


 Student record added successfully!

====================================================

Enter your choice: 1

Enter Student ID: 103

Enter Student Name: Carol

Enter Department: IT

Enter GPA: 9.1


 Student record added successfully!
 

====================================================

Enter your choice: 4


===== Student Records =====


ID: 101

Name: Alice

Department: CSE

GPA: 8.90



ID: 102

Name: Bob

Department: ECE

GPA: 7.80



ID: 103

Name: Carol

Department: IT

GPA: 9.10


====================================================

Enter your choice: 3

Search by: 1. ID  2. Name

Enter choice: 1

Enter Student ID: 102



Record Found:

ID: 102

Name: Bob

Dept: ECE

GPA: 7.80


====================================================

Enter your choice: 2

Enter Student ID to delete: 102


Student record deleted successfully!


====================================================

Enter your choice: 4


===== Student Records =====


ID: 101

Name: Alice

Department: CSE

GPA: 8.90



ID: 103

Name: Carol

Department: IT

GPA: 9.10


====================================================

Enter your choice: 5


===== Student Records (Reverse Order) =====


ID: 103

Name: Carol

Department: IT

GPA: 9.10



ID: 101

Name: Alice

Department: CSE

GPA: 8.90


====================================================

Enter your choice: 6


 Backup list cloned successfully!

====================================================

Enter your choice: 7


===== Backup (Cloned) Student Records =====


ID: 101

Name: Alice

Department: CSE

GPA: 8.90



ID: 103

Name: Carol

Department: IT

GPA: 9.10


====================================================

Enter your choice: 8


Average GPA of all students: 9.00


====================================================

Enter your choice: 9

Exiting... Thank you!
