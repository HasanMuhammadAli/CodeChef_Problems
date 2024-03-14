#include <stdio.h>

int main(void) {
	// your code goes here
	int cases;
    int A,B,C;
	
    printf("Hello world");
	scanf("%d",&cases);
	while(cases>0)
	{
	    scanf("%d%d%d",&A ,&B, &C );
	    if(A!=B && A!=C && B!=C)
	    {
	        printf("Yes\n");
	        
	    }
	    else
	    printf("No\n");
	    cases--;
	}
	return 0;
}

