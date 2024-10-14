//break
/*
#include<stdio.h>
int main()
{
    int i,j;

    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<5 ; j++)
        {
            if(i<j)
            {
                printf("*");
                break;
            }
        }

        printf("\n");
    }
    return 0;
}
*/

/*
//goto
#include<stdio.h>
int main()
{
    int total=0 , no ;

    no = 1;

    back:total = total + no;
    no++;

    while(no<=10)
    {
        goto back;
    }
    printf("\n Total is : %d ",total);
    return 0;
}
*/

//continue

#include<stdio.h>
int main()
{
    int i,j;

    for(i=0 ; i<5 ; i++)
    {
        for(j=0 ; j<5 ; j++)
        {
           // printf("-");
            if(i<j)
            {
                continue;
                //break;
            }
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
