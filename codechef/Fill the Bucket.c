#include <stdio.h>

int main(void) {
	// your code goes here
	int cases;
    int K,X;
	

	scanf("%d",&cases);
	while(cases>0)
	{
	    scanf("%d%d",&K ,&X );
	    printf("%d\n",K-X);
	    cases--;
	}
	return 0;
}

