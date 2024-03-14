#include <stdio.h>
void cost(int C, int X,int Y)
{
    scanf ("%d%d%d",&C,&X,&Y);
    int total=(C-X)*Y;
    printf("%d\n",total);
}
int main(void) {
	// your code goes here
	int cases;
    int C,X,Y;
	scanf("%d",&cases);
	while(cases>0)
	{
	    cost(C,X,Y);
	    cases--;
	}
	return 0;
}

