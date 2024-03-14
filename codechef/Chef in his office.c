#include <stdio.h>

int main(void) {
	// your code goes here
	int cases;
    int X,Y;//X is hours mon to thu,Y is hours on fri
	

	scanf("%d",&cases);
	while(cases>0)
	{
        scanf("%d%d",&X,&Y);
	    printf("%d\n",(X*4)+Y);
	    
	}
	return 0;
}

