// Given a square matrix, calculate the absolute difference between the sums of its diagonals.

int diagonalDifference(int arr_rows, int arr_columns, int** arr) {
    
    int ltor = 0;
    int rtol = 0;
    
    int y = 0;
    
    for(int i = 0; i < arr_columns; i++)
    {
        ltor += arr[i][y];
        y++;
    }
    
    y = arr_rows-1;
    for(int i = 0; i < arr_columns; i++)
    {
        rtol += arr[i][y];
        y--;
    }
    
    int retvalue = abs(ltor - rtol);
    
    return retvalue;

}
