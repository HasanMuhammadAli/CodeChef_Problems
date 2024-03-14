#include <stdio.h>

int main(void) {
	// your code goes here
	int cases;
    int X,Y;
	

	scanf("%d",&cases);
	while(cases>0)
	{
	    scanf("%d%d",&X ,&Y );
	    if(X * Y >= 100)
	    {
	        printf("%d\n",(X*Y)/100);
	    }
	    else
	    printf("%d\n",0);
	    cases--;
	}
	return 0;
}

