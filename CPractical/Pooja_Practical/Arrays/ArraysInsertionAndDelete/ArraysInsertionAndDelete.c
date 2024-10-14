/*//QUE 1: insert Element at lasts
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
int main()
{
    int x[SIZE],i,cnt,opt;
    printf("\nEnter The Count");
    scanf("%d",&cnt);

    if(cnt>10)
    {
        printf("\n***INSUFICIENT MEMROY***");
        return 0;
    }
    //Input of cnt element

    printf("\n The count %d element are",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }
    while(1)
    {
        printf("\nDisplay The count Element ;");
        for(i=0;i<cnt;i++)
        {
            printf(" %d",x[i]);
        }

        printf("\n1.Insert at Last \t 2.Disply\t 3.Stop");
        printf("\nEnter the options :");
        scanf("%d",&opt);
        if(opt==1)
        {
            if(cnt<SIZE)
            {
                printf("\Enter the element:");
                scanf("%d",&x[cnt]);
                cnt++;
            }
            else
            {
                printf("***INSUFICIENT MEMROY***");
                return 0;
            }
        }
        else if(opt==2)
        {
            printf("\n Display the element");
            for(i=0;i<cnt;i++)
            {
                printf(" %d",x[i]);
            }
        }
        else if(opt==3)
        {
            printf("\nEnter Any key To stop");
            exit(0);
            break;
        }
        else
        {
            printf("**incorrect Option**");
        }
    }
    return 0;
}
*/
/*
QUE 2: insert Element at last using switch case:

#include<stdio.h>
#define SIZE 10
int main()
{
    int cnt,x[SIZE],opt,i;
    printf("\nEnter count");
    scanf("%d",&cnt);

    if(cnt>SIZE)
    {
        printf("\n-------INSUFICIENT MEMROY------");
        return 0;

    }

    //input
    printf("\nEnter %d Element",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }

    while(1)
    {
        printf("\nDisplay The Element :");
        for(i=0;i<cnt;i++)
        {
            printf(" %d",x[i]);
        }
        printf("\n*******MENU*********");
        printf("\n1.Insert at last\t 2.Display\t 3.Stop");
        printf("\nEnter the Option");
        scanf("%d",&opt);

        switch(opt)
        {
            case 1://inset at start
                if(cnt<SIZE)
                {
                    printf("\nEnter The Element:");
                    scanf("%d",&x[cnt]);
                    cnt++;
                }
                else
                {
                    printf("**Insufficient mem**");
                }
                break;

            case 2:         //display
                printf("\nDisplay The all Elements :");
                for(i=0;i<cnt;i++)
                {
                    printf(" %d",x[i]);
                }
                break;

            case 3:     //stop
                printf("\npress any key for stop");
                exit(0);
                break;

            default:
                printf("\nIncorrect option");
        }
    }
    return 0;
}
*/
/*
QUE 2: insert Element at start.
#include<stdio.h>
#define SIZE 10
int main()
{
    int cnt ,x[SIZE],i,opt;
    printf("\nEnter your Count");
    scanf("%d",&cnt);

    //input
    printf("\nEnter %d Elements :",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }
    while(1)
    {
        printf("\nDisplay the Elements :");
        for(i=0;i<cnt;i++)
        {
            printf(" %d",x[i]);
        }
        printf("\n1.insert at star\t 2.display\t 3.stop");
        printf("\nEnter the Option");
        scanf("%d",&opt);

        if(opt==1)
        {
            if(cnt<SIZE)
            {
                //for element shift
                for(i=cnt;i>=1;i--)
                {
                    x[i]=x[i-1];
                }
                cnt++;
                printf("\nEnter Element You want to insert at start :");
                scanf("%d",&x[0]);
            }
            else
            {
                printf("\n***INSUFFICIENT MEMROY***");
                return 0;
            }
        }
        else if(opt==2)
        {
            printf("\n Display The all Element Entered :");
            for(i=0;i<cnt;i++)
            {
                printf(" %d",x[i]);
            }
        }
        else if(opt==3)
        {
            printf("\nEnter any key for stop :");
            exit(0);
            break;
        }
    }
    return 0;
}
*/
/*
QUE 3: insert Element at start using switch case:

#include<stdio.h>
#define SIZE 10
int main()
{
    int x[SIZE],i,cnt,opt;
    printf("\nEnter the Count :");
    scanf("%d",&cnt);

    if(cnt>10)
    {
        printf("\nINSUFICIENT MEM");
    }
    //input
    printf("\nEnter %d Element :",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }
    while(1)
    {
        printf("\n Display The all Element Arrays have :");
        for(i=0;i<cnt;i++)
        {
            printf(" %d",x[i]);
        }
        printf("\n*****MENU*****");
        printf("\n1.Insert at Start\t 2.Display\t 3.Stop");
        printf("\nEnter The Options");
        scanf("%d",&opt);

        switch(opt)
        {
            case 1:
                if(cnt<SIZE)
                {
                    //Element Shift
                    for(i=cnt;i>=1;i--)
                    {
                        x[i]=x[i-1];
                    }
                    cnt++;
                    printf("\nEnter number :");
                    scanf("%d",&x[0]);
                }
                else
                {
                    printf("**insufficient mem");
                    return 0;
                }
                break;

            case 2:
                printf("\nDisplay The Elements we enter in an arrays");
                for(i=0;i<cnt;i++)
                {
                    printf("%d",x[i]);
                }
                break;

            case 3: //stop
                printf("\nEnter Any key to stop :");
                exit(0);
                break;

            default:
                printf("\nincorrect option");
        }
    }
    return 0;
}
*/

/*
QUE 3: insert Element at position.
#include<stdio.h>
#define SIZE 10

int main()
{
    int x[SIZE],i,cnt,opt,pos;
    printf("\n Enter the Count :");
    scanf("%d",&cnt);

    if(cnt>10)
    {
        printf("\n****INSUFICIENT MEM****");
        return 0;
    }
    //input
    printf("\nEnter the %d Elements :",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }

    while(1)
    {
        printf("\nDisplay element :");
        for(i=0;i<cnt;i++)
        {
            printf(" %d",x[i]);
        }
        printf("\n-------MENU--------");
        printf("\n1.insert at Pos\t 2.Display\t 3.Stop");
        printf("\nEnter any option");
        scanf("%d",&opt);

        switch(opt)
        {
            case 1:
                printf("\nEnter the Positon Where Yu want To insert Elelments z:");
                scanf("%d",&pos);
                if(cnt==SIZE)
                {
                    printf("\nInsuficient storage");
                    return 0;
                }
                else if(pos<0 || pos>cnt)
                {
                    printf("\nIncorrect position");
                }
                else
                {
                    if(pos==cnt)
                    {
                        printf("\nEnter the element");
                        scanf("%d",&x[pos]);
                    }
                    else
                    {
                        for(i=cnt;i>pos;i--)
                        {
                            x[i]=x[i-1];
                        }
                        printf("\nEnter any number");
                        scanf("%d",&x[pos]);
                        cnt++;
                    }
                }
                break;

            case 2:
                printf("\nDisplay The Element :");
                for(i=0;i<cnt;i++)
                {
                    printf(" %d",x[i]);
                }
                break;

            case 3:
                printf("\nEnter any key for stop");
                exit(0);
                break;
        }
    }
    return 0;
}
*/

/*QUE 4: Delete Element at start last and pposition.
#include<stdio.h>
#define SIZE 10
int main()
{
    int cnt,opt,pos,x[SIZE],i,temp;
    printf("\nEnter the Count:");
    scanf("%d",&cnt);
    if(cnt>10)
    {
        printf("\n--INSUFFICIENT STORAGE--");
        return 0;
    }

    //input
    printf("\nEnter the %d elements :",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }

    while(1)
    {
        printf("\nDisplay The elemets :");
        for(i=0;i<cnt;i++)
        {
            printf(" %d",x[i]);
        }
        printf("\n---------MENU--------");
        printf("\n1.Delet last\t 2.Delet start\t 3.delet at pos\t 4.stop");
        printf("\nEnter The Option :");
        scanf("%d",&opt);

        switch(opt)
        {
            case 1: //delete last
                temp=x[cnt-1];
                cnt--;
                printf("\nDeleted Element = %d ",temp);
                break;

            case 2:
                temp=x[0];
                for(i=0;i<cnt-1;i++)
                {
                    x[i]=x[i+1];
                }
                cnt--;
                printf("\nThe Deletes Element = %d",temp);
                break;

            case 3: //at position
                printf("\nEnter the Positon");
                scanf("%d",&pos);
                if(pos<0 && pos>cnt)
                {
                    printf("\nIncorrect positon");
                    break;
                }
                temp=x[pos];
                for(i=pos;i<cnt-1;i++)
                {
                    x[i]=x[i+1];
                }
                cnt--;
                printf("\nThe deleted element = %d",temp);
                break;

            case 4:
                printf("\nEnter any Key To stop");
                exit(0);
                break;
        }
    }
    return 0;
}
*/
//QUE 4: Insert and Delete Element at start last and position;

#include<stdio.h>
#define SIZE 10
int main()
{
    return 0;
}












