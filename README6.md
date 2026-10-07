Train Ticket Booking System
Algorithm

Start the program.

Define a Passenger structure containing:

Passenger ID

Passenger name

Create two arrays:

confirmed for confirmed passengers.

waiting for passengers on the waiting list.

Initialize the front and rear positions of both queues.

Display a menu with the following options:

Book Ticket

Cancel Ticket

Display Confirmed Passengers

Display Waiting List

Exit

Book Ticket

Read the passenger ID and name.

Check whether seats are available in the confirmed queue.

If a seat is available, add the passenger to the confirmed queue.

If the confirmed queue is full, check the waiting list.

If space is available in the waiting list, add the passenger to the waiting list.

If both queues are full, display that the waiting list is also full.

Cancel Ticket

Read the passenger ID to be cancelled.

Search for the passenger in the confirmed queue.

If the passenger is found:

Display the passenger's name.

Remove the passenger from the confirmed queue.

Shift the remaining confirmed passengers.

Check whether passengers are present in the waiting list.

If the waiting list is not empty:

Move the first waiting passenger to the confirmed queue.

Shift the remaining waiting passengers.

If the passenger ID is not found, display Passenger ID not found.

Display Confirmed Passengers

Check whether the confirmed queue is empty.

If empty, display No confirmed passengers.

Otherwise, display the ID and name of each confirmed passenger.

Display Waiting List

Check whether the waiting list is empty.

If empty, display Waiting list is empty.

Otherwise, display the ID and name of each waiting passenger.

Exit

If the user selects option 5, terminate the program.

End the program.
