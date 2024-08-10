#include <stdio.h>
#include "math.h"

// int func_add(int,int);

int main()
{

/* sum of two numbers */
int a = 3; int b = 9;    
printf("Sum of numbers %d and %d is = %d \n", a,b,func_add(a,b));

/* 3-dimesnional matrix multiplication */
int c[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
int d[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
printf("Product of two 3D matrices is: \n"); 
func_matrix_mul(c,d);

/* cube of a integer number */
int e = 2;
printf("\nCube of the numbe %d is = %lu \n", e,func_cube(e));

/* return of the main function */
return 0;

}
