#include <stdio.h>
int check(int N,int K)
{
    int i,count;
    count = 0;
    int height[N];
    for (i=0;i<N;i++)
    {
        scanf("%d",&height[i]);
        if(height[i]>K)
            count++;
    }
    
    return count;
}
int main(void) {
	// your code goes here
	int cases;
    int N,K;
	

	scanf("%d",&cases);
	while(cases>0)
	{
	    scanf("%d%d",&N,&K);
	    printf("%d\n",check(N,K));
	    cases--;
	}
	return 0;
}

