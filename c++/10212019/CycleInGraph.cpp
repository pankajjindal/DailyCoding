import java.io.*;
import java.util.*;
import java.util.stream.*;
import static java.util.stream.Collectors.*;


class Result {

    // ============================ Start ============================

    public static boolean hasCycle(int N, int M, List<List<Integer>> edges) {
        ArrayList<Integer>[] adjacency = new ArrayList[N]; // Adjacency list.

        for (int i = 0; i < N; i++) {
            adjacency[i] = new ArrayList<>();
        }

        assert edges.size() == M;
        for (List<Integer> edge: edges) {
            adjacency[edge.get(0)].add(edge.get(1));
        }

        boolean[] visited = new boolean[N];
        boolean[] isInStack = new boolean[N];

        for (int i = 0; i < N; i++) {
            if(dfs(i, adjacency, visited, isInStack)) {
                return true;
            }
        }

        return false;
    }

    public static boolean dfs(int curVertex, ArrayList<Integer>[] adj,
                              boolean[] visited, boolean[] isInStack) {
        if (isInStack[curVertex])
            // We came to a vertex which we started from or passed by in current
            // DFS traversal. In other words, we found a back edge, and a cycle.
            return true;

        if (visited[curVertex])
            // We had already visited curVertex once. If a cycle including
            // curVertex existed, we would have found it then.
            return false;

        // Mark curVertex visited and a part of the recursion stack.
        visited[curVertex] = true;
        isInStack[curVertex] = true;

        // Recur for all vertices adjacent to curVertex.
        for (int v: adj[curVertex])
            if (dfs(v, adj, visited, isInStack))
                return true;

        isInStack[curVertex] = false;
        return false;
    }
}

// ============================ End =============================


class Solution {
    public static void main(String[] args) {
        /*
        This function is used to increase the size of recurison stack. 
        It makes the size of stack 2^26 ~= 10^8
        */
        new Thread(null, new Runnable() {
            public void run() {
                try{
                    solve();
                }
                catch(Exception e){
                    e.printStackTrace();
                }
            }
        }, "1", 1 << 26).start();
    }
    public static void solve() throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out));

        int N = Integer.parseInt(bufferedReader.readLine().trim());// N = Number of vertices
        int M = Integer.parseInt(bufferedReader.readLine().trim());// M = Number of directed edges

        List<List<Integer>> edges = new ArrayList<>();// To store directed edges

        IntStream.range(0, M).forEach(i -> {
            try {
                edges.add(
                        Stream.of(bufferedReader.readLine().replaceAll("\\s+$", "").split(" "))
                                .map(Integer::parseInt)
                                .collect(toList())
                );
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        });
        bufferedReader.close();

        boolean result = Result.hasCycle(N,M, edges);

        bufferedWriter.write(result ? "1" : "0");
        bufferedWriter.newLine();
        bufferedWriter.close();
    }
}
