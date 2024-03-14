#include <stdio.h>

int main(void) {
	// your code goes here
	int cases;
    int X,Y,Z;
    
	

	scanf("%d",&cases);
	while(cases>0)
	{
	    scanf("%d%d%d",&X ,&Y, &Z );
	    printf("%d\n",((X*5)+(Y*10))/Z);
	    cases--;
	}
	return 0;
}

