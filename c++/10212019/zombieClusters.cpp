import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {

    // ============================ Start ============================
    public static int zombieCluster(List<String> zombies) {
        // To maintain number of zombies clusters
        int no_of_clusters = 0;
        int n = zombies.size();

        // To store visited status of zombies
        boolean visited[] = new boolean[n];

        // We are applying DFS to calculate number of disjoint components
        // Approach used is iterative approach with using stack
        Stack<Integer> stack = new Stack<Integer>();
        
        // Iterating over all indices of zombies
        for(int i=0;i<n;i++){
            // If zombie found which not visited means we found new cluster
            if(!visited[i]){
                no_of_clusters++;

                stack.add(i);
                visited[i] = true;
                
                while(!stack.isEmpty()){
                    int element = stack.pop();
                    // To visit all possible zombies connected with element
                    for(int j=0;j<n;j++){
                        // If zombie j is connected with zombie element and not visited yet
                        if(!visited[j]&&zombies.get(element).charAt(j)=='1'){
                            visited[j] = true;
                            stack.push(j);
                        }
                    }
                }
            }
        }
        return no_of_clusters;
    }
    // ============================ End =============================
}


class Solution {
    public static void main(String args[]) {
        /*
        This function is used to increase the size of recursion stack. It makes the size of stack
        2^26 ~= 10^8
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
    
    public static int MAX_SIZE = 1000;

    public static void solve() throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new OutputStreamWriter(System.out));
        
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int zombiesCount = Integer.parseInt(bufferedReader.readLine().trim());

        assert (1<=zombiesCount && zombiesCount<=MAX_SIZE) : "Invalid value of zombiesCount";

        List<String> zombies = IntStream.range(0, zombiesCount).mapToObj(i -> {
            try {
                return bufferedReader.readLine();
            } catch (IOException ex) {
                throw new RuntimeException(ex);
            }
        }).collect(toList());

        assert (zombies.size()==zombiesCount) : "Invalid number of zombies";

        int result = Result.zombieCluster(zombies);

        assert (1<=result && result<=zombiesCount) : "Invalid value of result";

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedWriter.close();

        bufferedReader.close();
    }
}

