Singly Linked List Operations on College Names
Algorithm
1. Create a Singly Linked List
Start.
Initialize head = NULL.
Allocate memory for a new node using malloc().
Read the college name and set next = NULL.
If head == NULL, assign the new node to head and p.
Otherwise, link the new node to the end of the list and update p.
Ask the user whether to continue creating nodes.
Repeat steps 3–7 while the user enters 1.
2. Display the Linked List
Start from head.
If the list is empty, the list contains no nodes.
Traverse the list until p == NULL.
Display the college name in each node followed by ->.
Display NULL at the end.
Stop.
3. Insert a Node at a Specified Position
Allocate memory for a new node.
Read the college name and the insertion position.
If the position is 1, link the new node to the current head and update head to the new node.
Otherwise, traverse the list to reach the node immediately before the specified position.
If the position is invalid, display an error message and free the allocated memory.
Otherwise, set nw->next = p->next and p->next = nw.
Stop.
4. Delete a Node from a Specified Position
Read the position of the node to be deleted.
If head == NULL, display “List is empty.”
If the position is 1, store head in p, update head = head->next, and free the deleted node.
Otherwise, traverse the list to reach the node immediately before the specified position.
If the position is invalid, display an error message.
Otherwise, store the node to be deleted in q.
Link the previous node to q->next and free q.
Stop.
5. Exit
Display the exit message.
Terminate the program when the user selects option 4.
Stop.
