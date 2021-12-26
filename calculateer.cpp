#include <stdio.h>

int main()

{
    int a,b,c,d;
    printf("welcome to the calculater\n");
     printf("enter the number a\n");
     scanf("%d",&a);
      printf("enter the number b\n");
     scanf("%d",&b);
    printf(" 1=+,2=-,3=*,4=%");
    scanf("%d",&c);
    
    switch(c)
    {
    case 1:
    	 printf("%d",a+b);
    	 break;
    case 2:
    	printf("%d",a-b);
    	break;
    case 3:
    	  printf("%d",a*b);
    	  break;
    case 4:
    	  printf("%d",a%b);
    	  break;
    default:
    printf("I AM STILL LEARNING");
   }

    return 0;
}
