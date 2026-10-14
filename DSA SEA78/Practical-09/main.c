#include <stdio.h>

#define MAX 20

int graph[MAX][MAX];
int visited[MAX];
int n;

/* BFS Traversal */
void BFS(int start)
{
    int queue[MAX];
    int front = 0, rear = 0;
    int i, current;

    // Reset visited array
    for (i = 0; i < n; i++)
        visited[i] = 0;

    queue[rear++] = start;
    visited[start] = 1;

    printf("\nBFS Traversal: ");

    while (front < rear)
    {
        current = queue[front++];

        printf("%d ", current);

        for (i = 0; i < n; i++)
        {
            if (graph[current][i] == 1 && visited[i] == 0)
            {
                queue[rear++] = i;
                visited[i] = 1;
            }
        }
    }

    printf("\n");
}

/* DFS Traversal */
void DFS(int current)
{
    int i;

    visited[current] = 1;

    printf("%d ", current);

    for (i = 0; i < n; i++)
    {
        if (graph[current][i] == 1 && visited[i] == 0)
        {
            DFS(i);
        }
    }
}

int main()
{
    int edges;
    int u, v;
    int start;
    int i, j;

    printf("===== CAMPUS NAVIGATION SYSTEM =====\n");

    printf("\nEnter number of buildings: ");
    scanf("%d", &n);

    // Initialize adjacency matrix
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            graph[i][j] = 0;
        }
    }

    printf("Enter number of paths between buildings: ");
    scanf("%d", &edges);

    printf("\nEnter paths between buildings (building1 building2):\n");

    for (i = 0; i < edges; i++)
    {
        scanf("%d %d", &u, &v);

        graph[u][v] = 1;
        graph[v][u] = 1;   // Undirected graph
    }

    // Display adjacency matrix
    printf("\nAdjacency Matrix:\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter starting building: ");
    scanf("%d", &start);

    // BFS
    BFS(start);

    // DFS
    for (i = 0; i < n; i++)
        visited[i] = 0;

    printf("DFS Traversal: ");
    DFS(start);
    printf("\n");

    return 0;
}
