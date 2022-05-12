
#include <stdio.h>
#include <conio.h>
 void main()
 {
    int a,b;
printf("MARKS OF STUDENT");
scanf("%d", & a);
if (a>85 && a<101)
{
    printf("student has grade A");
}

if (a>70 && a<85)
{
    printf("student has grade B");
}

if (a>55 && a<70)
{
    printf("student has grade C");
}

if (a>40 && a<55)
{
    printf("student has grade D");
}

if (a>0 && a<40)
{
    printf("student has grade F");
}

 getch();
 }

