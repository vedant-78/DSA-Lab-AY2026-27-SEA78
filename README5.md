Circular Queue Using Array
Algorithm

Start the program.

Define the queue size as 3.

Initialize front and rear to -1.

Display a menu with four options:

Insert

Delete

Display

Exit

Insert Operation

Check whether the queue is full using (rear + 1) % SIZE == front.

If the queue is full, display Queue is Full.

Otherwise, accept a value from the user.

If the queue is empty, set front = 0 and rear = 0.

Otherwise, update rear using (rear + 1) % SIZE.

Store the value at queue[rear].

Display the insertion success message.

Delete Operation

Check whether the queue is empty using front == -1.

If the queue is empty, display Queue is Empty.

Otherwise, display the element at queue[front].

If front == rear, set both front and rear to -1.

Otherwise, update front using (front + 1) % SIZE.

Display Operation

Check whether the queue is empty.

If the queue is empty, display Queue is Empty.

Otherwise, start from the front position.

Print each element of the queue.

Move to the next position using (i + 1) % SIZE.

Stop when the rear position is reached.

Exit Operation

If the user selects option 4, terminate the program.

End the program.
