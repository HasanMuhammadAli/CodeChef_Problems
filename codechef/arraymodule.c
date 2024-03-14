#include <stdio.h>

int main(void) {
	// your code goes here
	int cases=1;
    int X;
    int Flag=1;
	

	//scanf("%d",&cases);
	while(cases>0)
	{
	    //scanf("%d",&X);
		int arr[5]={100,200,300,400,350};
	   // for(int i=0;i<X;i++)
		{
		//	scanf("%d",&arr[i]);
        }
        for(int i=0;i<X-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                Flag=0;
                break;
            }
            
         }
         if(Flag==0)
            printf("No\n");
        else
            printf("Yes\n");
        
        
	    cases--;
	}
	return 0;
}

