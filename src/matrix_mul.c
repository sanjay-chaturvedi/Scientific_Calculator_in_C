int func_matrix_mul(int a[][3], int b[][3])
/* VERY IMP - while declaring a function with multi-dimensional array arguments, 
Only the last dimension values needs to be declared and rest all are left empty.

So, if you have a 2D array as a function argument, then in function definition do
as is done in this functions defintion above.
*/
{	
	// declaring output matrix
    // int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // int b[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int p[3][3] = {};

	// measue of matrix row and column
	int count_row = 2;
	int count_col = 2;
	int count_x = 2;
	
	// matrix multiplication
	for (int i = 0; i <= count_row; i++)
	{
		for (int k = 0; k < count_x+1; k++)
		{
			/* p[i][k] = 0; */
            for (int j = 0; j < count_col+1; j++)
			{
				p[i][k] = p[i][k] + a[i][j]*b[j][k];
			}
            printf("%d \t", p[i][k]);			
		}
	}
	// return the output matrix
	return 0;
}
