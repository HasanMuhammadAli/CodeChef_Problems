#include <stdio.h>

int main(void) {
	// your code goes here
	int cases;
    int N,K;
	

	scanf("%d",&cases);
	while(cases>0)
	{
	    scanf("%d%d",&N ,&K );
	   printf("%d\n", N-K);
	    cases--;
	}
	return 0;
}

