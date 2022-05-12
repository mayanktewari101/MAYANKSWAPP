#include <stdio.h>

int main()
{
    int a;
    printf("1.Pizza,RS 239 \n2.Burger, rs 234 \n3.Pasta, rs 123 \n4.sandwich, rs234\n");
    printf("\nENTER YOUR CHOICE: ");
    scanf("%d",&a);
    
    switch (a)
    {
    case 1:{
    printf("Food Item-Pizza\n Price-rs 239");
        break;
    }

    
    case 2:{
    printf("Food Item-Burger\n Price-rs 234");
        break;
        
    }    

    
    case 3:{
    printf("Food Item-Pasta\n Price-rs 123");
        break;
        
    }
    
    case 4:
    {
    printf("Food Item-Sandwich\n Price-rs 234");
        break;
        
    }    
    
    default:{
    printf("WRONG CHOICE");
        break;
        
    }
    }
    return 0;
}