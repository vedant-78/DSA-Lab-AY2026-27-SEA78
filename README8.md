Online Directory System Using Binary Search Tree
Algorithm

Start the program.

Define a Node structure containing:

Name

Mobile number

Pointer to the left child

Pointer to the right child

Initialize the Binary Search Tree root as NULL.

Display a menu with the following options:

Insert

Display

Search

Exit

Insert Operation

Read the person's name and mobile number.

Create a new node and store the person's details.

If the tree is empty, make the new node the root.

Compare the new person's name with the current node's name.

If the name is smaller, insert the node into the left subtree.

Otherwise, insert it into the right subtree.

Repeat until the correct position is found.

Display a successful insertion message.

Display Operation

Check whether the directory is empty.

If empty, display Directory is empty.

Otherwise, display the tree using three traversal methods:

Inorder: Traverse left subtree, visit root, then traverse right subtree.

Preorder: Visit root, traverse left subtree, then traverse right subtree.

Postorder: Traverse left subtree, traverse right subtree, then visit root.

Display each person's name and mobile number during traversal.

Search Operation

Check whether the directory is empty.

If empty, display Directory is empty.

Otherwise, read the name to search.

Compare the search name with the current node's name.

If the names match, display the person's details.

If the search name is smaller, search the left subtree.

If the search name is greater, search the right subtree.

Continue until the person is found or the tree becomes NULL.

If the tree becomes NULL, display Person not found.

Exit Operation

If the user selects option 4, terminate the program.

End the program.
