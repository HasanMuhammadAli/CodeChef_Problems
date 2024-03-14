#include <stdio.h>

int main(void) {
	// your code goes here
	int cases;
    int X;
	

	scanf("%d",&cases);
	while(cases>0)
	{
	    scanf("%d",&X);
	    if(X<=100)
	    {
	        printf("%d\n",100-X);
	    }
	    else
	    printf("%d\n",0);
	    cases--;
	}
	return 0;
}

