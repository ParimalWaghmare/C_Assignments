#include<stdio.h>
#include<float.h>
#include<limits.h>

int main()
{
    printf("Range of Signed Float = %e to %e\n", FLT_MIN, FLT_MAX);


    
	 
    printf("Range ofSigned Double = %e to %e\n", DBL_MIN, DBL_MAX);
	

    printf("Range of Signed Long Double = %Le to %Le\n", LDBL_MIN, LDBL_MAX);
	
	

    return 0;
}

