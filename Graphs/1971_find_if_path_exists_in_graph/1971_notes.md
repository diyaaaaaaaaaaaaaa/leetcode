# 1971. Find if path exists in a graph 
> **Difficulty:**   easy
> **Topics:** graphs, connected components, bfs

---


##  Approach

### Algorithm

1. Create an adjacency list from the array of edges. Kepp size= n+1, helps with indexing.
2. Iitialise a visited array vis of size n+1, keeping all values=0 initially.
3. Initialise an empty queue q, which will contain the nodes as theyre visited one by one.
4. mark vis[source]=1 and push the source node into the q.
5. Till q is non empty
     - if the fron of q is the destination node, return true
     - if not, pop the front node from q, and take its adjacent nodes from our adj vector, mark them as 1 in the vis array and push them into q.
6. if destination is not found till q empties, return false.
---

## ⏱ Complexity

| Time | Space |
|------|-------|
| `O(n+m)` | `O(n+m)` |

---

##  Takeaways

- IN graph questions, adjacency list or array of edges is always given along with the number of nodes 'n'.
- first bfs qn

![submission ss](image.png)