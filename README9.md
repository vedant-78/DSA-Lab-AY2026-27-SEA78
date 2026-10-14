Campus Navigation System Using BFS and DFS
Algorithm
1. Initialize Graph
Start.
Read the number of buildings n.
Initialize the adjacency matrix with zeros.
Read the number of paths between buildings.
2. Create the Graph
Read the two building numbers u and v for each path.
Set graph[u][v] = 1.
Set graph[v][u] = 1 because the graph is undirected.
Repeat until all paths are entered.
3. Display Adjacency Matrix
Traverse each row and column of the adjacency matrix.
Display the adjacency matrix representing connections between buildings.
4. Breadth-First Search (BFS)
Initialize all vertices as unvisited.
Insert the starting building into the queue.
Mark the starting building as visited.
While the queue is not empty:
Remove a building from the front of the queue.
Display the building number.
Check all adjacent buildings.
If an adjacent building is unvisited, mark it as visited and insert it into the queue.
Repeat until the queue becomes empty.
Stop BFS traversal.
5. Depth-First Search (DFS)
Mark all vertices as unvisited.
Start from the selected building.
Mark the current building as visited.
Display the current building number.
Check all adjacent buildings.
If an adjacent building is unvisited, recursively perform DFS on that building.
Continue until all reachable buildings have been visited.
Stop DFS traversal.
6. Terminate
Display the BFS and DFS traversal results.
Stop.
