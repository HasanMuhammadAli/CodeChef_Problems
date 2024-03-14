#include <stdio.h>
void check(int A,int B,int C)
{
    if(A==(B+C)||B==(A+C)||C==(A+B))
	    printf("Yes\n");
	else
	    printf("No\n");
}

int main(void) {
	// your code goes here
	int cases;
    int A,B,C;
	

	scanf("%d",&cases);
	while(cases>0)
	{
	    scanf("%d%d%d",&A ,&B,&C );
        check(A,B,C);
	    cases--;
	}
	return 0;
}

