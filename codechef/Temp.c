#include <stdio.h>

int main(void) {
	// your code goes here
	int cases;
    int N,K,i,j;
	int max=0;
    int sum=0;
	scanf("%d",&cases);
	while(cases>0)
	{
	    scanf("%d%d",&N,&K);
	    int a[N];
        for(i=0;i<N;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<N-K+1;i++)
        {
            for(j=i;j<i+K;j++)
            {
                sum+=a[j];
                
            }
            //printf("%d\n",sum);
            if(max<sum)
            {
                max=sum;
            }
            sum=0;
        }
        printf("%d\n",max);

    cases--;
	}
	return 0;
}

