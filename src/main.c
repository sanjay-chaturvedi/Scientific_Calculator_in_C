#include <stdio.h>
#include "math.h"

// int func_add(int,int);

int main()
{
printf("sum = %d", func_add(3,4));

// matrices and matrix multiplication
int a[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
int b[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

func_matrix_mul(a,b);

return 0;

}
