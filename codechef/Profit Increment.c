#include <stdio.h>

int main(void) {
	// your code goes here
	int cases;
    int X,Y,N;
	

	scanf("%d",&cases);
	while(cases>0)
	{
	    scanf("%d%d",&X ,&Y );
        N = X + ((X*10)/100);
	    printf("%d\n", N - (X - Y));
	    cases--;
	}
	return 0;
}

