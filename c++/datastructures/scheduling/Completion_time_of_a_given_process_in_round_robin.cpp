// Program to find end time of a process 
// p in round robin scheduling with unit 
// time slice. 
#include <bits/stdc++.h> 
using namespace std; 

// Returns completion time of p. 
int completionTime(int arr[], int n, int p) { 

// Initialize result 
int time_req = 0; 

// Step 1 : Add time of processes on left 
// of p (Scheduled before p) 
for (int i = 0; i < p; i++) { 
	if (arr[i] < arr[p]) 
	time_req += arr[i]; 
	else
	time_req += arr[p]; 
} 

// Step 2 : Add time of p 
time_req += arr[p]; 

// Step 3 : Add time of processes on right 
// of p (Scheduled after p) 
for (int i = p + 1; i < n; i++) { 
	if (arr[i] < arr[p]) 
	time_req += arr[i]; 
	else
	time_req += arr[p] - 1; 
} 

return time_req; 
} 

// driver program 
int main() { 
int arr[] = {3, 5, 2, 7, 6, 1}; 
int n = sizeof(arr) / sizeof(arr[0]); 
int p = 2; 
cout << "Completion time = "
	<< completionTime(arr, n, p); 
return 0; 
} 

