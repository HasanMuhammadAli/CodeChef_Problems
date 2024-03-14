#include <stdio.h>

int main(void) {
	// your code goes here
	int cases;
    int N=5,i,p[11]={0},s[100]={0};
    int sum[]={0};
    int t_sum=0;
	
    
	scanf("%d",&cases);
    int temp,temp2;
	while(cases>0)
	{
	    scanf("%d",&N);
        for(i=0;i<N;i++)
            {

                scanf("%d%d",&temp2,&temp);
                if(s[temp2]<temp && temp2<=8)
                {
                    p[i]=temp2;
                    printf("got it : %d\n",temp);
                    s[p[i]]=temp;
                    t_sum+=s[p[i]];
                }
            }
            printf("%d\n",t_sum);
	    cases--;
	}
	return 0;
}

