#include <stdio.h> 
int main()
{
    int a,b,choice;
    printf("Enter two intergers:");
    scanf("%d %d", &a ,&b);
    printf("\n1. addition");
    printf("\n2. substraction");
    printf("\n3. multiplication");
    printf("\n4. division ");
    printf("\n5. remainder");
    printf("\nEnter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    	case 1:
    		printf("sum =%d\n",a+b);
    		break;
    	case 2:
    		printf("difference =%d\n", a/b);
    	    break;
    	case 3:
    		printf("product =%d\n", a*b);
    		break ;
    	case 4:
    		if(b !=0)
    	    	printf("Quotient =%d\n", a/b);
    		else
    	    	printf("Division by zero is not possible.\n");
        	break;
		        printf("Remainder by zero is not possible.\n");
			break;
		default:
		    printf("Invalid choice.\n");
		
return 0;	
}
	
	
	
	
	
	
	
	
	
	
	
	
}