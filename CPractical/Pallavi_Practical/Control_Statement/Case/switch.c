/*
//1 perform Add,Sub,Mul and Div according to user choice

#include<stdio.h>
int main()
{
    int opt;
    float a , b , ans;

    printf("Enter values of a and b :");
    scanf("%f %f",&a,&b);

    printf("\n Welcome to our process....");

    printf("\n 1.Add \t 2.Sub \t 3.Mul \t 4.Div");
    printf("\n Enter your choice");
    scanf("%d",&opt);

    switch(opt)
    {
    case 1:
        ans = a + b;
        printf("\n Addition is : %f",ans);
        break;
    case 2:
        ans = a - b;
        printf("\n Sub is : %f",ans);
        break;
    case 3:
        ans = a * b;
        printf("\n Mul is : %f",ans);
        break;
    case 4:
        ans = a / b;
        printf("\n Div is : %f",ans);
        break;
    default:
        printf("\n Invalid choice");

    }
    return 0;
}

*/

//2. with dicision statement
/*

#include<stdio.h>
int main()
{
    int opt;
    float a , b , ans;

    printf("Enter values of a and b :");
    scanf("%f %f",&a,&b);

    printf("\n Welcome to our process....");

    printf("\n 1.Add \t 2.Sub \t 3.Mul \t 4.Div");
    printf("\n Enter your choice");
    scanf("%d",&opt);

    if(opt>=1 && opt<=4)

    {
        switch(opt)
        {

        case 1:
            ans = a + b;
            break;

        case 2:
            ans = a - b;
            break;

        case 3:
            ans = a * b;
            break;

        case 4:
            ans = a / b;
            break;
        }
        printf("\n Ans is : %.2f",ans);
    }
    else
    {
        printf("\n Invalid choice");
    }

    return 0;
}
*/

//3. Using while
/*

#include<stdio.h>
int main()
{
    int i=0,opt;
    float a,b,ans;

    while(i<4)
    {
        printf("\n ____Menu___");
        printf("\n 1.Add \t 2.Sub \t 3.Mul \t 4.Div");
        printf("\n Enter your choice");
        scanf("%d",&opt);

        printf("\n Enter the value of a and b : ");
        scanf("%f %f",&a,&b);

        i++;

        switch(opt)
        {
        case 1:
            ans = a + b;
            break;

        case 2:
            ans = a - b;
            break;

        case 3:
            ans = a * b;
            break;

        case 4:
            ans = a / b;
            break;

        default:
            printf("\n Invalid Option");
            return 0;
        }
        printf("\n ans is : %f",ans);
    }
    return 0;
}
*/

/*
//4.using char as a option
#include<stdio.h>
int main()
{
    char opt;
    float a,b,ans;


    {
        printf("\n ____Menu____");
        printf("\n a.Add \t b.Sub \t c.Mul \t d.Div");
        printf("\n Enter your choice");
        scanf("%c",&opt);

        printf("\n Enter the value of a and b : ");
        scanf("%f %f",&a,&b);

        switch(opt)
        {
        case 'a':
        case 'A':
            ans = a + b;
            break;

        case 'b':
        case 'B':
            ans = a - b;
            break;

        case 'c':
        case 'C':
            ans = a * b;
            break;

        case 'd':
        case 'D':
            ans = a / b;
            break;

        default:
            printf("\n Invalid Option");
            return ;
        }
        printf("\n ans is : %f",ans);
    }
    return 0;
}
*/

//5.Enter week no and print week day
/*
#include<stdio.h>
int main()
{
    int opt;

    printf("\n Enter your week no : ");
    scanf("%d",&opt);

    switch(opt)
    {
    case 1:
        printf("Monday");
        break;

    case 2:
        printf("tuesday");
        break;

    case 3:
        printf("Wednesday");
        break;

    case 4:
        printf("Thursday");
        break;

    case 5:
        printf("Friday");
        break;

    case 6:
        printf("Saturday");
        break;

    case 7:
        printf("Sunday");
        break;

    default:
        printf("Invalid choice");
    }
    return 0;
}
*/

//6. print gender (M/F)
/*
#include<stdio.h>
int main()
{
    char opt;

    while(1)
    {


        printf("\n Enter your choice : ");
        scanf("%c",&opt);

        switch(opt)
        {
            case 'M':
            case 'm':
                printf("Male");
                break;

            case 'F':
            case 'f':
                printf("Female");
                break;

           default:
                //printf("Invalid choice");
                exit(0);

           // return;
        }
    }
    return 0;
}
*/

//7.Vowel or Constant
/*
#include<stdio.h>
int main()
{
    char opt,ch;


    printf("\n Enter your choice: ");
    scanf("%c",&opt);

    if(opt>='A' && opt<='Z' || opt>='a' && opt<='z')
    {
        switch(opt)
        {
        case 'a':
        case 'A':

                printf("Vowel");

            break;

        case 'e':
        case 'E':
            printf("Vowel");
            break;

        case 'i':
        case 'I':
            printf("Vowel");
            break;

        case 'o':
        case 'O':
            printf("Vowel");
            break;

        case 'u':
        case 'U':
            printf("Vowel");
            break;

        default:
            printf("Constant");
        }
    }
    else
    {
        printf("\n Invalid Option");
    }

    return 0;
}
*/

//8.Odd or Even
/*
#include<stdio.h>
int main()
{
    int no , opt;

    printf("\n Enter any number : ");
    scanf("%d",&no);

    opt = no%2;

    switch(opt)
    {
        case 0:
            printf("Even no");
            break;

        case 1:
            printf("Odd no");
            break;

        default:
            printf("Invalid number");
    }
    return 0;
}
*/

//9.Enter month number and print no of days

#include<stdio.h>
int main()
{
    int opt;

    printf("\n Enter the Month no between 1 to 12 : ");
    scanf("%d",&opt);

    switch(opt)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 Days");
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 Days");
        break;

    case 2:
        printf("28/29 days");
        break;

    default:
        printf("Invalid choice");
        return ;
    }
}
