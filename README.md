# Student Academic Record Management System

OBJECTIVE


To develop a Doubly Linked List-based Student Academic Record Management System that efficiently manages and organizes student data, including GPA tracking, record updates, and list cloning for academic use.



FEATURES


1.Insert new student records 


Add student details such as ID, name, department, and GPA.


2.Search student by ID or Name


Easily locate student information for verification or updates.


3.Delete incorrect or outdated student records


Remove invalid entries using the student’s ID.


4.Display all student records


View all students and their academic details in an organized list.


5.Display in reverse order (Doubly Linked List)


View records from the latest to the earliest using backward traversal.


6.Clone the student list (Backup feature)


Create a deep copy of the current student database for safe backup.


7.Calculate Average GPA


Compute and display the average GPA of all enrolled students.



DATA STRUCTURE



Each student record is represented as a node in a doubly linked list.
Each node contains:

1.Student ID (int)


2.Name (char[50])


3.Department (char[50])


4.GPA (float)


5.Pointers:


6.next → Next student record


7.prev → Previous student record


8.Functionality Overview


FUNCTION   -                                    DESCRIPTION


insertStudent()-	                              Adds a new student record


deleteStudent()-	                              Deletes a record by Student ID


searchStudent()-                                Searches for a student by ID or Name


displayStudents() -                            	Displays all student records in order


reverseDisplay()-                              	Displays all records in reverse order


cloneList()-                                    	Creates a backup copy of the list


displayClonedList() -                          	Displays the cloned (backup) list


calculateAverageGPA()-	                        Calculates and displays the average GPA


  
   SAMPLE MENU (CLI)


   
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


Enter your choice:


 COMPILATION & EXECUTION:

 
 COMPILE

 
gcc student_record.c -o student_record



 RUN

 
./student_record


 REQUIREMENTS:


1.GCC Compiler


2.C Standard Library (stdio.h, stdlib.h, string.h)


 
 MEMORY MANAGEMENT


.All dynamically allocated memory is properly freed during deletion or program termination.


.Cloned lists and deleted nodes are freed to prevent memory leaks.


.Safe handling of pointers during insert, delete, and clone operations.


 
 NOTES


.Input validation ensures correct GPA range (0.0 – 10.0).


.The list supports bidirectional traversal (using next and prev).


.Backup list cloning allows safe data preservation before deletion or modification.


.Searching and displaying are performed in O(n) time complexity.



 AUTHOR

 
Dhivya S


Department of Computer Science engineering




