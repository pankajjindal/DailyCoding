#include<bits/stdc++.h>

using namespace std;

const int MAX_N = 500000, MIN_VAL = -2000000000, MAX_VAL = 2000000000;

// -------------------------- START --------------------------

 // Adjancency list representation of a graph.
vector<vector<int> > graph;

 // It will store three states during dfs,
 // 0 for unvisited nodes, 1 for nodes in current dfs stack, 2 for completely visited nodes.
vector<int> visited;

// Array to store ordering in which courses should be taken.
vector<int> ans;

// Utility method for dfs. It returns false if a cycle is detected.
bool dfs(int current_node){

    // Mark the current node as part of current stack.
    visited[current_node] = 1;

    // Traverse the nodes connected to that node.
    for(int i = 0; i < graph[current_node].size(); i++)
    {
        // Check if the connected_node is already in dfs stack to check for cycle.
        if(visited[graph[current_node][i]] == 1)
        {
            return false;
        }

        // If the connected_node is not visited even once, call dfs.
        if(visited[graph[current_node][i]] == 0)
        {
            if(!dfs(graph[current_node][i]))
            {
                return false;
            }
        }
    }

    // Mark the current_node completely visited.
    visited[current_node] = 2;
    ans.push_back(current_node);

    // Return true if no cycle is found.
    return true;
}

vector<int> course_schedule(int n, vector<vector<int> > prerequisites)
{

    visited.clear();
    ans.clear();
    graph.clear();

    for(int i = 0; i < n; i++)
    {
        visited.push_back(0);
        graph.push_back(vector<int>());
    }

    // Create graph out of given prerequisites pairs.
    for(int i = 0; i < prerequisites.size(); i++)
    {
        graph[prerequisites[i][0]].push_back(prerequisites[i][1]);
    }

    // Call dfs for each unvisited node in the graph.
    for(int i = 0; i < n; i++)
    {
        if(visited[i] == 0)
        {
            if(!dfs(i))
            {
                ans.clear();
                ans.push_back(-1);
                return ans;
            }
        }
    }
    
    return ans;
}

// -------------------------- END ---------------------------

int main()
{
    // freopen(
    // 	"..//test_cases//sample_test_cases_input.txt",
    // 	"r", stdin
    // );
    // freopen(
    // 	"..//test_cases//sample_test_cases_expected_output.txt",
    // 	"w", stdout
    // );
    // freopen(
    // 	"..//test_cases//handmade_test_cases_input.txt",
    // 	"r", stdin
    // );
    // freopen(
    // 	"..//test_cases//handmade_test_cases_expected_output.txt",
    // 	"w", stdout
    // );
    // freopen(
    // 	"..//test_cases//generated_small_test_cases_input.txt",
    // 	"r", stdin
    // );
    // freopen(
    // 	"..//test_cases//generated_small_test_cases_expected_output.txt",
    // 	"w", stdout
    // );
    // freopen(
    //     "..//test_cases//generated_big_test_cases_input.txt",
    //     "r", stdin
    // );
    // freopen(
    //     "..//test_cases//generated_big_test_cases_expected_output.txt",
    //     "w", stdout
    // );
    // freopen(
    // 	"..//test_cases//ignore.txt",
    // 	"w", stdout
    // );

    int test_cases;
    cin >> test_cases;
    assert(test_cases >= 0);

    while (test_cases--)
    {

        int n;
        cin >> n;

        int e;
        cin >> e;

        vector<vector<int> > prerequisites(e);

        for (int i = 0; i < e; i++) {
            prerequisites[i].resize(2);

            for (int j = 0; j < 2; j++) {
                cin >> prerequisites[i][j];
            }
        }

        vector<int> result = course_schedule(n, prerequisites);

        for (int i = 0; i < result.size(); i++)
        {
            cout << result[i];
            cout<<"\n";
        }

        cout << "\n";
    }

    return 0;
}

