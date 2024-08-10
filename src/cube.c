unsigned long func_cube(int a)
{
	unsigned long cube_out = 0;
    cube_out = (a*(a*a)); // no typecasting needed for int to unsigned long
    return cube_out;
}

