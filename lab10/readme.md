INTRODUCTION:

Stack
A linked list is called circular if it is not NULL-terminated and all nodes are connected in the form of a cycle. The circular singly linked list has no beginning and no ending. There is no null value present in the next part of any of the nodes.

There are many functions declared in a linked list. Some of them are giving below:
•	Head: The entry point into a linked list is called the head of the list. 
•	Tail: The last of a linked list is called the tail of the list. The tail node is a special node.
•	Empty: Linked list should have a “head” pointer. If the head is set to null then it have a zero-length linked list.
•	Size: Linked list size method is used to get the size of the linked list or the number of elements present in the linked list. This method doesn’t take any           parameter. 
•	Front and Back: In a circular linked list, all nodes are linked in a continuous circle, without using null. For lists with a front and a back, one stores a reference to the last node in the list. The next node after the last node is the first node.
•	Pop: Linked list pop method pops an elements from the stack represented by this list. Popping means remove and return the first elements of the list.
•	Push: Push method is used to push an element at the starting of the stack represented by linked list. This is similar to the add first method of linked list and simply inserts the elements at the first position or top of the linked list.

Uses:

•	The real life application where the circular linked list is used is our Personal Computers, where multiple applications are running. All the running applications are kept in a circular linked list and the OS gives a fixed time slot to all for running.

•	The Operating System keeps on iterating over the linked list until all the applications are completed.

•	Another example can be Multiplayer games. All the Players are kept in a Circular Linked List and the pointer keeps on moving forward as a player's chance ends.
•	Circular Linked List can also be used to create Circular Queue. In a Queue we have to keep two pointers, FRONT and REAR in memory all the time, where as in Circular   Linked List, only one pointer is required.



