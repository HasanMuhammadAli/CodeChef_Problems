#include <stdio.h>

int main(void) {
	// your code goes here
	int cases;
    int N,X,Y=4;
	

	scanf("%d",&cases);
	while(cases>0)
	{
	    scanf("%d%d",&X ,&Y );
	    if(X + Y > 6)
	    {
	        printf("Yes");
	        
	    }
	    else
	    printf("No");
	    cases--;
	}
	return 0;
}

