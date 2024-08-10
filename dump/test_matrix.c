
# include <stdio.h>

int func_matrix_mul(int a[3][3], int b[3][3])
{
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
	return 0;
}

int main()
{
    // declaring output matrix
    int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    
    func_matrix_mul(a,b);
	
    return 0;
}




    
