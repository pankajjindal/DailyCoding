#include <iostream>
//#include <iostream>


using namespace std;

/*
 * Complete the function below.
 */
int row_move[8] = {-1,1,2,-2,2,-2,-1,1};
int col_move[8] = {-2,-2,-1,-1,1,1,2,2};
//int count =0;
int find_minimum_number_of_moves(int rows, int cols, int start_row, int start_col, int end_row, int end_col) {
    // Write your code here.
    bool flag = false;
    static int count =0;
    int r=0,newRow,newCol;
    
    if (start_row == end_row && start_col ==end_col ){
        flag = true;
        return 0;
    }
    newRow = start_row + row_move[r];
    newCol = start_col + col_move[r];

    while (flag!=true){
        if (((newRow < rows) && (newRow >=0)) &&   ((newCol < cols) && (newCol >=0))){
        	cout << "count is 1" << count;
            count = find_minimum_number_of_moves(rows, cols, start_row +row_move[r] , start_col+col_move[r], end_row, end_col);
            cout << "count is " << count;
            count++;
        }
        r++;
    }
    //return count;
}


int main()
{
    ostream &fout = cout;

    int rows;
    cin >> rows;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int cols;
    cin >> cols;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int start_row;
    cin >> start_row;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int start_col;
    cin >> start_col;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int end_row;
    cin >> end_row;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int end_col;
    cin >> end_col;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int res = find_minimum_number_of_moves(rows, cols, start_row, start_col, end_row, end_col);

    fout << res << "\n";

    

    return 0;
}