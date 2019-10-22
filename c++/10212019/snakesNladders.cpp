import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

public class optimal_solution {
    // ==================start==================

    // An entry in queue used in BFS
    static class Node {
        int index; // Zero-based index of the cell.
        int dist; // Distance, measured in dice rolls, from the 0th cell.
    }

    static int minNumberOfRolls(int n, List<Integer> moves) {
        boolean[] visited = new boolean[n]; // Java guarantees to initialize all with False.

        // Add the 0th cell to the queue as we start from there
        Queue<Node> queue = new LinkedList<>();
        Node node = new Node();
        node.index = 0;
        node.dist = 0;
        queue.add(node);
        
        // Run BFS from Node 0
        while (!queue.isEmpty()) {
            node = queue.poll();
            if (visited[node.index]) {
                // If we visited this node before we must have reached it with
                // fewer dice rolls than we have done now. No need to consider it again.
                continue;
            }

            visited[node.index] = true;

            if (node.index == n-1) {
                // We arrived at the last cell. Since we advanced one dice roll at a time,
                // current distance (number of dice rolls) from the 0th is the smallest possible.
                return node.dist;
            }
            // Add all the neighbors to the queue.
            for (int dice = 1; dice <= 6; dice++) {
                int goingTo = node.index + dice;
                if (goingTo >= n) {
                    break; // No stepping beyond the board.
                }

                // Accounting for a snake or ladder if any:
                int snakeOrLadder = moves.get(goingTo);
                if (snakeOrLadder != -1) {
                    goingTo = snakeOrLadder;
                }

                Node newNode = new Node();
                newNode.index = goingTo;
                newNode.dist = node.dist + 1; // We used one dice roll to jump from node to newNode.
                queue.add(newNode);
            }
        }

        // No way to reach
        return -1;
    }

    // ==================end==================
}
