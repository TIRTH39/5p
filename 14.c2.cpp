#include<stdio.h>

main()
{
    
    int no;
    printf("Entre The Number=");
    scanf("%d",&no);
    if(no==0)
    {
    printf("no is neutral");
	}
    else if(no>0) 
    {
    printf("no is positive");	
	}
      else if(no<0) 
    {
    printf("no is negative");	
	} 
}
