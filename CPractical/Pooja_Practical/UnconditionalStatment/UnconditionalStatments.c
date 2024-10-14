#include <stdio.h>
#include <stdlib.h>

int main()
{
    // QUE 1 : goto
/*
    int n,tot=0;
    n=1;
    back:tot=tot+n;
    printf(" %d",n);
    n++;
    if(n<=10)
    {
        goto back;
    }
    printf("\n %d",tot);
*/

/*  QUE 2: Break

    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(i<j)
            {
                printf("* ");
                break;
            }
            //printf("*");

        }
        printf("\n");
    }
*/

    //QUE 3 : Continue

    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("-");
            if(i<j)
            {
                continue;
            }
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
