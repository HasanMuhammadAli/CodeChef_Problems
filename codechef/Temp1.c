#include <stdio.h>

int main(void) {
	// your code goes here
	int cases;
    int N,M;
	

	scanf("%d",&cases);
	while(cases>0)
	{
	    scanf("%d%d",&N ,&M);
	    if(M>N)
	    {
	        printf("%d\n",N);
	    }
	    else if(M<=N)
        {
           printf("%d\n",(N*2)-M);
        }

	    cases--;
	}
	return 0;
}

