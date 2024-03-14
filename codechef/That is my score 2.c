#include <stdio.h>

int main(void) {
	// your code goes here
	int cases;
    int N,i,p[]={0},s[]={0};
    int sum[]={0};
    int t_sum=0;
	
    cases=1;
	//scanf("%d",&cases);
	while(cases>0)
	{
	    scanf("%d",&N);
        while(N>0)
        {
            for(i=0;i<N;i++)
            {
                scanf("%d%d",&p[i],&s[i]);
            }
            for(i=0;i<N;i++)
            {
                if(p[i]>8)
                {
                    sum[i]=0;
                    break;
                }
                else
                {
                    sum[i]+=s[i];
                }
                for(i=0;i<N;i++)
                {
                    t_sum+=sum[i];
                }
            }
                printf("%d\n",t_sum);
            
            N--;
        }
        cases--;
    }
    return 0;
}