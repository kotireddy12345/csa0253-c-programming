#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,r,s=0;
    clrscr();
    
    printf("\n  Enter The Number:");
    scanf("%d",&n);
    
    //LOOP FOR FINDING THE REVERSE OF A NUMBER
    for(i=n;i>0; )
    {
        r=i%10;
        s=s*10+r;
        i=i/10;
    }
    
    printf("\n  The Reverse Number of %d is %d",n,s);
    getch();
}
