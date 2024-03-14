#include <stdio.h>

int main(void) {
	// your code goes here
	int cases;
    int X,Y,H;
    int C;//extra_hourcost
	scanf("%d%d%d",&X ,&Y, &H );
    C = ((H-1)*Y);

	printf("%d\n",X+C);
	   
	return 0;
}

