



/*
 * Complete the function below.
 */
int find_minimum_number_of_moves(int rows, int cols, int start_row, int start_col, int end_row, int end_col) {
    // Write your code here.
    static int count =0
    if ( row <=0)
        return 0;
    if (col <=0)
        return 0;
   int row_move[8] = {-1,1,2,2,1,-1,-2,-2};
   int col_move[8] = {0,0,-1,1,1,-1,1,-1};
   
    if (start_col == end_row && start_col ==end_col )
        return 1;
        
    for( r = 0; r <8;r++)
       for(c=0; c< 8;c++)
    if (((start_row + row_move[r] < row)&& (start_row + row_move[r] >=0)) &&   ((start_col + col_move[c] < col)&& (start_col + col_move[c] >=0))){
        if( find_minimum_number_of_moves(rows, cols, start_row +row_move[r] , start_col+col_move[c], end_row, end_col)){
            count++;
            printf("count = %d", count);
        }
    }
}

