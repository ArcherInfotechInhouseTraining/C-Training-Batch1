/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
     int num;
     printf("\nEnter the Number :");
     scanf("%d",&num);

     if(num%2==0)
     {
         printf("\nEven");
     }
     if(num!=0)
     {
         printf("\nOdd");
     }

    return 0;
}


#include<stdio.h>
#define SIZE 10
int main()
{
    int x[SIZE],i,cnt,opt,pos=-1,temp;
    printf("\nEnter The Elements cnt :");
    scanf("%d",&cnt);

    if(cnt>10)
    {
        printf("\n-----INSUFFICIENT STORAGE------");
        return 0;
    }
    printf("\nEnter The %d Elements:",cnt);
    for(i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }


    while(1)
    {
        printf("\nDisplay The Array Of Elements:");
        for(i=0;i<cnt;i++)
        {
            printf("%5d",x[i]);
        }

        printf("\n------MENU-----");
        printf("\n1.insert at Start\t 2.Insert at Last\t 3.Insert at pos\t 4.Delete at Start\t 5.Delete at end \t 6.Delete at Pos\t 7.stop");
        printf("\nEnter The Option");
        scanf("%d",&opt);


        switch(opt)
        {
            case 1:
                if(cnt<SIZE)
                {
                    for(i=cnt;i>=1;i--)
                    {
                        x[i]=x[i-1];
                    }
                    printf("\nEnter Element You Want To insert");
                    scanf("%d",&x[0]);
                    cnt++;
                }
                else
                {
                    printf("\nMemeory Full");
                    return 0;
                }
                break;

            case 2:
                if(cnt<SIZE)
                {
                    printf("\nEnter an Element You Want to Insert");
                    scanf("%d",&x[cnt]);
                    cnt++;
                }
                else
                {
                    printf("\nMemory FUll");
                }
                break;

            case 3:
                if(cnt<SIZE)
                {
                    printf("\nEnter the Postion You Want To insert An element");
                    scanf("%d",&pos);

                    if(pos<0 || pos>cnt)
                    {
                       printf("\n---INVLAID Positon-----");
                    }

                    else
                    {
                        if(pos==cnt)
                        {
                            printf("\nEnter the Postion You Want To insert An element");
                            scanf("%d",&x[pos]);
                        }
                        else
                        {
                            for(i=cnt;i>pos;i--)
                            {
                                x[i]=x[i-1];
                            }
                            printf("\nEnter the Postion You Want To insert An element");
                            scanf("%d",&x[pos]);
                            cnt++;
                        }

                    }

                }
                else
                {
                    printf("\n---Memory Full---");
                    return 0;
                }
                break;

            case 4:

                temp=x[0];
                for(i=0;i<cnt;i++)
                {
                    x[i]=x[i+1];
                }
                cnt--;
                printf("\nDeleted Elements = %d:",temp);
                break;

            case 5:

                temp=x[cnt-1];
                cnt--;
                printf("\nDeleted Element is = %d",temp);
                break;

            case 6:
                printf("\nEnter the Postion where You want to insert element");
                scanf("%d",&pos);

                if(pos<0 && pos>=cnt)
                {
                    printf("\n---Incorrect position----");
                    break;
                }
                temp=x[pos];
                for(i=pos;i<cnt-1;i++)
                {
                    x[i]=x[i+1];
                }
                cnt--;
                printf("\n Deleted Element At Positon = %d :",temp);
                break;

            case 7:
                printf("\npress Any key For Exit:");
                exit(0);
                break;

            default:
                printf("\n-----Invalide Option-------");
        }

    }

    return 0;
}

//=========================================================================

//max , min , initi , input/display Array

#include<stdio.h>
#define SIZE 10
int main()
{

    int y[10],sum=0,max=0,min;

    printf("Enter Tour Array Elements :");
    for(int i=0;i<10;i++)
    {
        scanf(" %d",&y[i]);
    }

    for(int i=0;i<10;i++)
    {
        printf(" %d",y[i]);
        sum=sum+y[i];
        if(y[i]>max)
        {
            max=y[i];
        }
    }
    printf("\nSum = %d",sum);
    printf("\nMax = %d",max);

    min=max;

    for(int i=0;i<10;i++)
    {
            if(y[i]<min)
            {
                min=y[i];
            }
    }

    printf("\nmin = %d",min);

    printf("\nArray Elements Are Using input:");
    for(int i=0;i<10;i++)
    {
        printf(" %d",y[i]);
    }

    return 0;
}

//==========================================

//Emax Omax

#include<stdio.h>
#define SIZE 10
int main()
{

    int x[5],Emax=0,Omax=0,max=0,no;

    printf("Enter Tour Array Elements :");
    for(int i=0;i<5;i++)
    {
        scanf(" %d",&x[i]);
    }

    //Emax Omax
    for(int i=0;i<5;i++)
    {

        if(x[i]%2==0)
        {
            if(x[i]>Emax)
            {
                Emax=x[i];
            }
        }
        else
        {
            if(x[i]>Omax)
            {
                Omax=x[i];
            }
        }
    }

    printf("\nEmax = %d ",Emax);
    printf("\nOmax = %d ",Omax);

    //Search presencce of Elem

    printf("\n Enter Element You Want To Search :");
    scanf("%d",&no);
    for(int i=0;i<5;i++)
    {
        if(x[i]==no)
        {
            printf("no Found at %d Locaion ",i);
        }

    }


    printf("\nArray Elements Are Using input:");
    for(int i=0;i<5;i++)
    {
        printf(" %d",x[i]);
    }

    return 0;
}

//=========================================
//Prime Number:

#include<stdio.h>
#define SIZE 10
int main()
{

    int x[5],flag,j;

    printf("Enter Tour Array Elements :");
    for(int i=0;i<5;i++)
    {
        scanf(" %d",&x[i]);
    }

    for(int i=0;i<5;i++)
    {
        j=2;
        flag=0;
        while(j<=x[i]/2)
        {
            if(x[i]%j==0)
            {
                flag=1;
                break;
            }
            j++;
        }
        if(flag == 0 && x[i]!=1)
        {
            printf(" %d",x[i]);
        }
    }


    printf("\nArray Elements Are Using input:");
    for(int i=0;i<5;i++)
    {
        printf(" %d",x[i]);
    }

    return 0;
}

//=================================================

//using Function : Prime number :

#include<stdio.h>
#define SIZE 10

void PrimeNum(int x[])
{
    int j,flag;
    for(int i=0;i<5;i++)
    {
        j=2;
        flag=0;
        while(j<=x[i]/2)
        {
            if(x[i]%j==0)
            {
                flag=1;
                break;
            }
            j++;
        }
        if(flag == 0 && x[i]!=1)
        {
            printf(" %d",x[i]);
        }
    }
}

int main()
{
    int x[5],flag,j;

    printf("Enter Tour Array Elements :");
    for(int i=0;i<5;i++)
    {
        scanf(" %d",&x[i]);
    }

    PrimeNum(x);

    printf("\nArray Elements Are Using input:");
    for(int i=0;i<5;i++)
    {
        printf(" %d",x[i]);
    }

    return 0;
}

//=======================================

//Enter two arrays And Merge Them inacening order :

#include<stdio.h>

int main()
{
    int x[5],y[5],z[10],temp,flag,j;

    printf("Enter Array Elements x :");
    for(int i=0;i<5;i++)
    {
        scanf(" %d",&x[i]);
        z[i]=x[i];
    }

    printf("\nEnter Array Elements y:");
    for(int i=5;i<10;i++)
    {
        scanf(" %d",&y[i]);
        z[i]=y[i];
    }

    for(int i=0;i<10;i++)
    {
        for(int j=i+1;j<10;j++)
        {
            if(z[i]>z[j])
            {
                temp=z[i];
                z[i]=z[j];
                z[j]=temp;
            }
        }
    }

    printf("\nmerge Array Elements z:");
    for(int i=0;i<10;i++)
    {
        printf(" %d",z[i]);
    }

    return 0;
}

//===========================================

//insert at Last

#include<stdio.h>
#define SIZE 10


int main()
{
    int x[SIZE],cnt,opt;

    printf("Enter The Count For Array :");
    scanf(" %d",&cnt);

    if(cnt>10)
    {
        printf("\nindufficient Memroy");
        return 0;
    }

    printf("\nEnter your Count Elements :");
    for(int i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }

    do
    {
        printf("Array Elemts are :");
        for(int i=0;i<cnt;i++)
        {
            printf(" %d",x[i]);
        }

        printf("\n1.inset \t 2.stop");
        scanf("%d",&opt);

        if(opt==1)
        {
            if(cnt<SIZE)
            {
                printf("\nEnter Your Element You Want to insert :");
                scanf(" %d",&x[cnt]);
                cnt++;
            }
            else
            {
                printf("Not Sufficient Storage unable to Insert:");
                return 0;
            }
        }
        else if(opt==2)
        {
            printf("exit");
            break;

        }
        else
        {
            printf("incorrect Option ");
        }

    }while(1);
    return 0;
}

//=============================

//insert ele At Position

#include<stdio.h>
#define SIZE 10

int main()
{
    int x[SIZE],cnt,opt,pos,no;

    printf("Enter The Count For Array :");
    scanf(" %d",&cnt);

    if(cnt>10)
    {
        printf("\nindufficient Memroy");
        return 0;
    }

    printf("\nEnter your Count Elements :");
    for(int i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }

    while(1)
    {
        printf("\n1.inset at pos \t 2.display \t3.stop");
        scanf("%d",&opt);

        switch(opt)
        {
            case 1:
                printf("\nEnter The Position :");
                scanf("%d",&pos);

                if(pos==SIZE)
                {
                    printf("insuficient Storage :");
                    return 0;
                }
                else if(pos<0 || pos>cnt)
                {
                    printf("Incorrect Option :");
                    return 0;
                }
                else
                {
                    if(pos==cnt)
                    {
                        printf("enter Ele You Want to add :");
                        scanf("%d",&x[cnt]);
                        cnt++;
                    }
                    else
                    {
                        for(int i=cnt;i>=pos;i--)
                        {
                            x[i]=x[i-1];
                        }
                        printf("Enter Your El ou Want to add");
                        scanf(" %d",&x[pos]);
                        cnt++;
                    }
                }
                break;

            case 2:
                printf("Array Ele Are :");
                for(int i=0;i<cnt;i++)
                {
                    printf(" %d",x[i]);
                }
                break;

            case 3:
                printf("\nEnter Any key to Exit :");
                exit(0);
                break;
        }

    }
    return 0;
}
*/

//================================================================
/*
//Using Switch Case:

#include<stdio.h>
#define SIZE 10

int main()
{
    int x[SIZE],cnt,opt,pos;

    printf("\nEnter The Count You Want :");
    scanf("%d",&cnt);

    if(cnt>10)
    {
        printf("\nIncsufficient Storage ");
        return 0;
    }
    printf("\n Enter Your cnt Elements");
    for(int i=0;i<cnt;i++)
    {
        scanf("%d",&x[i]);
    }

    while(1)
    {
        printf("\n --------------MENU-------------");
        printf("\n1.Inset_At_Last \t 2.Inset_At_Start \t3.Inset_At_Pos \t4.Display \t5.Stop");

        printf("\n Enter Your Opt:");
        scanf("%d",&opt);

        switch(opt)
        {
            case 1:

                if(cnt<SIZE)
                {
                    printf("\nEnter Element You Want to Inser at Last :");
                    scanf("%d",&x[cnt]);
                    cnt++;
                }
                else
                {
                    printf("\nInsufficient Storage Unable to inset Element");
                    return 0;
                }
                break;

            case 2:

                if(cnt<SIZE)
                {
                    for(int i=cnt;i>=1;i--)
                    {
                        x[i]=x[i-1];
                    }
                    printf("\nEnter Ele You Waant to Insert At Start");
                    scanf("%d",&x[0]);
                    cnt++;
                }
                else
                {
                    printf("Insufficient Storage");
                    return 0;
                }

                break;

            case 3:
                printf("\nEnter The pos Of Element");
                scanf("%d",&pos);
                if(pos==SIZE)
                {
                    printf("\nINsufficient Storage");
                    return 0;
                }
                else if(pos<0 || pos>cnt)
                {
                    printf("\nIncorrect Choice");
                }
                else
                {
                    if(pos==cnt)
                    {
                        printf("\nEnter Element");
                        scanf("%d",&x[pos]);
                        cnt++;
                    }
                    else
                    {
                        for(int i=cnt;i>=pos;i--)
                        {
                            x[i]=x[i-1];
                        }
                        printf("\nEnter the Ele");
                        scanf("%d",&x[pos]);
                        cnt++;
                    }
                }
                break;

            case 4:
                printf("Array is :");
                for(int i=0;i<cnt;i++)
                {
                    printf(" %d",x[i]);
                }
                break;

            case 5:

                printf("\nEnterAny ket to Exit:");
                exit(0);
                break;
        }
    }
    return 0;
}


//===================================================================
//sum for alll Rows : 2D Array:

#include<stdio.h>
int main()
{
    int x[3][3],sum=0;

    printf("\nEnter The 2D Array Elem:");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }

    printf("\n2D array Ele:\n");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum=sum+x[i][j];
            printf(" %d",x[i][j]);
        }

        printf(" Sum = %d",sum);
        printf("\n");
    }

    return 0;
}

//====================================

#include<stdio.h>
int main()
{
    int x[3][5],tot=0;

    printf("Sports Info For Player:\n");
    for(int i=0;i<3;i++)
    {
        printf("\nPlayer %d",i+1);

        for(int j=0;j<5;j++)
        {
            printf("\nMatches %d Score:",j+1);
            scanf("%d",&x[i][j]);
        }
    }


    for(int i=0;i<3;i++)
    {
        printf("Player %d:",i+1);

        for(int j=0;j<5;j++)
        {
            tot=tot+x[i][j];
            printf("  %d",x[i][j]);
        }
        printf("\tTot = %d",tot);
        printf("\n");
    }
    return 0;
}

//================================================

#include<stdio.h>
int main()
{
    char ch[] ={'h','e','l','l','o','\0'};

    int i;
    for(i=0;ch[i]!='\0';i++);

    printf("length of String is %d",i);
    return 0;
}

//==================================================

#include<stdio.h>
int main()
{
    char str[50],Fchar,Lchar,temp;
    int sp,ep,i;

    printf("Enter Your String :");
    gets(str);

    for(i=0;str[i]==32;i++);
    sp=i;

    for(i=0;str[i]!='\0';i++);
    for(i--;str[i]==32;i--);
    ep=i;

    while(sp<=ep)
    {
        if(str[sp]!=32 && str[sp-1]==32)
        {
            Fchar =str[sp];
        }
        else if(str[sp]==32 && str[sp-1]!=32)
        {
            Lchar = str[sp];
        }
        str[temp]=str[sp];
        str[sp]=str[sp-1];
        str[sp-1]=str[temp];

        sp++;
    }
    puts(str);
    return 0;
}


//=========-=========================================================

Enter Your String :

hello how are you
HellO HoW ArE YoU

#include<stdio.h>
int main()
{
    char str[50],Fchar,Lchar,temp;
    int sp,ep,i;

    printf("Enter Your String :");
    gets(str);

    for(i=0;str[i]==32;i++);
    sp=i;

    for(i=0;str[i]!='\0';i++);
    for(i--;str[i]==32;i--);
    ep=i;


    while(sp<=ep)
    {
        if((str[sp]!=32 && str[sp-1]==32) || (str[sp]!=32 && str[sp+1]==32)||str[sp+1]==0 ||str[sp-1]==0)
        {
            if(str[sp]>=97 && str[sp]<=122)
            {
                str[sp]=str[sp]-32;
            }
        }
        else if(str[sp]>=65 && str[sp]<=97)
        {
           str[sp]=str[sp]+32;
        }

        sp++;
    }
    puts(str);
    return 0;
}



//========================
Enter Your String :
hello how are you
olleh woh era uoy

#include<stdio.h>
int main()
{
    char str[50];
    int i,j,k,temp;

    printf("Enter Your String :");
    gets(str);


    i=0;
    while(str[i]!='\0')
    {
        for(;str[i]==32;i++);
        for(j=i;str[j+1]!=0 && str[j+1]!=32;j++);

        k=j+1;

        do
        {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
            i++;
            j--;

        }while(i<=j);

        i=k;
    }
    puts(str);

    return 0;
}

//====================

#include<stdio.h>
int main()
{
    char str[50];
    int i,j,k,temp,flag;

    printf("Enter Your String :");
    gets(str);

    for(i=97 ;i<=122 ;i++)
    {
        j=0,flag=0;
        while(str[j]!='\0')
        {
            if(str[j]==i)
            {
                flag = 1;
                break;
            }
            j++;
        }
        if(flag == 0)
        {
            printf(" %c",i);
        }
    }
    printf("\n Entered String ");
    puts(str);

    return 0;
}



 for(i=0;str[i]==32;i++);
    sp=i;

    for(i=0;str[i]!='\0';i++);
    for(i--;str[i]==32;i--);
    ep=i;

*/
//===============================================

/*
#include<stdio.h>
int main()
{
    char str[50],ch[50];
    int i,j,k,temp,flag,sp,ep,a,b,p;

    printf("Enter Your String :");
    gets(str);



    i=0;
    while(str[i]!='\0')
    {

        for(;str[i]==32;i++);
        for(j=i;str[j+1]!=0 && str[j+1]!=32;j++);

        for(p=i;str[p]!=0 && str[p]!=32;p++)
        {
            ch[p]=str[p];
        }


        k=p+1;
        puts(ch);

        do
        {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;

            i++;
            j--;

        }while(i<=j);

        i=k;

    }

    puts(str);


    return 0;
}
*/
//==========================================================

/*    int x=10;
    int *p,**q;

    p=&x;
    q=&p;



    printf("value of p = %u",p);
    printf("\naddress of p = %u",&p);
    printf("\naddress of x = %d",&x);
    printf("\nvalue of x = %d",x);
    printf("\nvalue of x using p = %u",*p);
    printf("\n ------------------------------");

    printf("\n Value at x using q = %u ",**q);
    printf("\n value at x using p = %u",*p);
    printf("\n Value of x %d",x);
    printf("\naddress of x = %d",&x);
    printf("\n Address of q =%u",&q);
    printf("\n Address of p =%u",&p);
    printf("\n Value of q = %u",q);
    printf("\n Value of p usig q = %u",*q);


    //==========================================================

    int x[]={1,2,3,4,5};
    int *p;

    p=&x[0]; // p=x or p=&x;

    for(int i=0;i<5;i++)
    {
        scanf("%d",(p+i)); //(p+i) Take an inout
    }

    for(int i=0;i<5;i++)
    {
        printf(" %d",*(p+i)); //*(p+i) Display
    }

    //-----------------------------------------------------

    //memrroy allocation :

     int *p,cnt;

     printf("\nEnter The Cnt:");
     scanf("%d",&cnt);

     p=(int*)malloc(cnt*sizeof(int));

    // p=x or p=&x;

    printf("\nEnter your Elements :");
    for(int i=0;i<cnt;i++)
    {
        scanf("%d",(p+i));       //(p+i) Take an input
    }

    printf("Size %d",sizeof(*p));
    printf("\nSize %d",sizeof(p));

    for(int i=0;i<cnt;i++)
    {
        printf("\n %d",&p[i]);
        printf(" %d",*(p+i));  // *(p+i) Display
    }


    //====================================================


    printf("\n-----------------------------------------");
    printf("\nArray :");
     int *q[5];

    printf("\nEnter your Elements :");
    for(int i=0;i<5;i++)
    {
        q[i]=(int*)malloc(sizeof(int));
        scanf("%d",(q+i)); //(p+i) Take an inout
    }


    printf("Size %u",sizeof(*q));
    printf("\nSize %u",sizeof(q));

    for(int i=0;i<5;i++)
    {
        printf("\n %d",&q[i]);
        printf(" %d",*(q+i)); //*(p+i) Display
    }

    //====================================================

     //for  4 buyers and n item:


     int *p[4];
     int ic[4],i,j;

     for(i=0;i<4;i++)
     {
         printf("\n Enter the Item Count for Person : %d ",i+1);
         scanf("%d",&ic[i]);

         p[i]=(int*)malloc(ic[i]*sizeof(int));

         printf("Enter the Item Price for Person : %d ",i+1);
         for(int j=0;j<ic[i];j++)
         {
             scanf("%d",*(p+i)+j);
         }
     }
     for(int i=0;i<4;i++)
     {
         printf("\nPeron %d ",i+1);
         for(j=0;j<ic[i];j++)
         {
             printf(" %d",*(*(p+i)+j));
         }
     }

     //========================================================

     //Arthmatic pointer

     int *p,*q,cnt;
     printf("\nEnter your count :");
     scanf("%d",&cnt);

     p=(int*)malloc(cnt*sizeof(int));

     q=p;
     printf("\nEnter cnt Elements :");
     for(int i=0;i<cnt;i++)
     {
         scanf("%d",p++);
     }
     p=q;

     printf("\nElements Are :");
     for(int i=0;i<cnt;i++)
     {
         printf(" %d",*p++);
     }

     //=========================================

     int *p,cnt,i;

     printf("\nEnter the COunt :");
     scanf("%d",&cnt);
     p=(int*)calloc(cnt,sizeof(int));

     printf("\n Enter Elements :");
     for(i=0;i<cnt;i++)
     {
         scanf("%d",(p+i));
     }

     printf("Array Elemsnts are :");
     for(i=0;i<cnt;i++)
     {
         printf(" %d",*(p+i));
     }

     i=cnt;
     printf("\n Enter Your new Count");
     scanf("%d",&cnt);

     p=realloc(p,cnt*sizeof(int));

     printf("\n Enter The New Ele :",cnt-i);
     for(;i<cnt;i++)
     {
         scanf("%d",(p+i));
     }
     printf("new Ele Are :");
     for(i=0;i<cnt;i++)
     {
         printf("%d",*(p+i));
     }

     //=========================================

    return 0;
}
*/
//==================================================
/*
//Functions :

#include<stdio.h>

void pune();
void mumbai();
void kolhapur();
int main()
{
    pune();
    printf("\n--------------Pune---------");
    mumbai();
    printf("\n------------Mumbai-----------");
    kolhapur();
    printf("\n------------kolhapur-----------");

    return 0;
}

void pune()
{
    mumbai();
    printf("\nHello I am From pune ");

}
void mumbai()
{
    printf("\nHello I am From Mumbai ");
}
void kolhapur()
{
    pune();
    printf("\nHello I am From Kolhapur ");
}
*/
//================================================

/*
int main( )
{
    void mumbai( );
    void kolhapur( );
    void pune( );

	printf("\n The main( ) starts");

	pune( );
	printf("\n In main Back From Pune");

	mumbai( );
	printf("\n In main Back from Kolhapur");

	printf("\n The main() ends");

	kolhapur();
	return 0;
}
void mumbai( )
{
	printf("\n I am in mumbai");
  //  pune();
	printf("\n back to mumbai from kolhapur");
}
void kolhapur( )
{
	printf("\n I am in kolhapur");
}
void pune()
{kolhapur( );
	printf("\n I am in Pune");
}
*/
//==================
/*

void add(int, int);
int main()
{
    int a,b;
    printf("\n Start of main");
    printf("\n Enter two nos: ");
    scanf("%d %d",&a,&b);
    add(a,b); // variables a and b are actual arguments
    printf("\n End of main");

    add(10,20);
}
void add(int x,int y) // variables x and y are formal arguments
{
    int c;
    c=x+y;
    printf("\n Addition is: %d",c);
}

*/
//=================================================

/*

void Pali(int);
int main()
{
    int num;
    printf("Enter The Number :");
    scanf("%d",&num);
    Pali(num);
}
void Pali(int num) // variables x and y are formal arguments
{
    int rev =0,i,NN=num;
    while(num!=0)
    {
        rev =(rev*10)+(num%10);
        num=num/10;
    }
    printf("Rev Num is %d:",rev);

    if(rev==NN)
    {
        printf("Number is Pali :");
    }
    else
    {
        printf("num is Not Pali");
    }
}

//========================================

int Pali(int);
int main()
{
    int num,rev1;
    printf("Enter The Number :");
    scanf("%d",&num);
    rev1 = Pali(num);
    printf("rev = %d",rev1);

    if(rev1==num)
    {
        printf("\nNumber is Pali :");
    }
    else
    {
        printf("\nnum is Not Pali");
    }
}
int Pali(int num) // variables x and y are formal arguments
{
    int rev =0,i,NN=num;
    while(num!=0)
    {
        rev =(rev*10)+(num%10);
        num=num/10;
    }

    return rev;
}
*/
//=====================================================
/*
int Pali(int);
char Ispali(int);

int main()
{
    int num;
    printf("Enter The Number :");
    scanf("%d",&num);
    char ans = Ispali(num);
    if(ans=='Y')
        printf("palindrome");
    else
        printf("Not Palindrom");
}
int Pali(int num) // variables x and y are formal arguments
{
    int rev =0,i,NN=num;
    while(num!=0)
    {
        rev =(rev*10)+(num%10);
        num=num/10;
    }

    return rev;
}

char Ispali(int num)
{
    int rev1;
    rev1 = Pali(num);
    if(rev1==num)
    {
        return 'Y';
    }
    else
    {
        return 'N';
    }
}
*/
//======================================
/*
Using Pointer ..
Pass The Addres of Variable as fuction Arrgument And Collect it into pointers

void Number(int *x , int *y)
{
    *x=10;
    *y=20;
}
int main()
{
    int x=1,y=4;

    Number(&x,&y);
    printf("x= %d \t y=%d ",x,y);
}

//=================================

Usinf aDDRESS not work :
void Number(int &x , int &y)
{
    x=10;
    y=20;
}
int main()
{
    int x=1,y=4;

    Number(x,y);
    printf("x= %d \t y=%d ",x,y);
}

*/
//======================================
/*
void display(int[]);
int main()
{
	int x[10],i;

	printf("\n Enter 10 nos: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
	}

	display(x);
	return 0;
}

void display(int y[])
{
    int i;
    printf("\n Elements are: ");
	for(i=0;i<10;i++)
	{
		printf("%6d",y[i]);
	}
}

//===============================


void incr100(int t[])
{
	int i;
	for(i=0;i<10;i++)
	{
		t[i]=t[i]+100;
	}
}
void display(int y[])  // or int y[]
{
    int i;
    printf("\n Elements are: ");
	for(i=0;i<10;i++)
	{
		printf("%6d",y[i]);
	}
}
int main()
{
	int x[10],i;

	printf("\n Enter 10 nos: ");
	for(i=0;i<10;i++)
	{
		scanf("%d",&x[i]);
	}

	printf("\n Before call to incr100: ");
	display(x);

	incr100(x);

	printf("\n\nAfter call to incr100: ");
	display(x);

	return 0;
}

//====================================================

#include<stdio.h>
void GetEvenArray(int *a)
{
    for(int i=0;i<10;i++)
    {
        if(a[i]%2==0)  //   *(a+i)%2==0
        {
            printf(" %d",a[i]);   //*(a+i)%2==0
        }
    }
}
int main()
{
    int x[10],i,j;
    printf("\n Enter Array El :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }

    GetEvenArray(x);

    return 0;
}

*/

//-=======================-
/*
#include<stdio.h>
int main()
{
 int i = 10,*ptr;
 ptr= &i;
 void *vptr;
 vptr = &ptr;
 printf("\nValue of iptr = %d ", vptr);
 printf("\nValue of iptr = %d ", &ptr);
 printf("\nValue of iptr = %d ", **(int**)vptr);
 return 0;
}
*/
//======================================================
/*
//Structure in C:

#include<stdio.h>
int main()
{
    struct Student
    {
        int id;
        char nm[50];
        float per;
    };

    struct Student S1;

    printf("\n Enter Your Name :");
    gets(S1.nm);

    printf("\nEnter your id And Per :");
    scanf("%d%f",&S1.id,&S1.per);

    printf("name = %s \tId = %d \tPer=%f",S1.nm,S1.id,S1.per);

    return 0;
}

*/
//===============================

//Pass Structure as Argument to IO
/*
#include<stdio.h>
struct Student
{
    int id;
    char nm[50];
    float per;
};

void input(struct Student *S1)
{
    fflush(stdin);
    printf("\n Enter Your Name :");
    gets(S1->nm);

    printf("\nEnter your id And Per :");
    scanf("%d%f",&S1->id,&S1->per);
}

void Display(struct Student *S1)
{
    printf("name = %s \tId = %d \tPer=%f",S1->nm,S1->id,S1->per);
}

int main()
{
    struct Student S1,S2;

    input(&S1);
    input(&S2);

    if(S1.per>S2.per)
    {
        Display(&S1);
    }
    else
    {
        Display(&S2);
    }

    return 0;
}*/
//===========================================
/*

#include<stdio.h>
struct Student
{
    int id;
    char nm[50];
    float per;
};

struct Student Max(struct Student S1,struct Student S2)
{
    if(S1.per>S2.per)
    {
        return S1;
    }
    else
    {
        return S2;
    }
}

void Display(struct Student S1)
{
    printf("name = %s \tId = %d \tPer=%f",S1.nm,S1.id,S1.per);
}

int main()
{
    struct Student S1,S2,I1;

    printf("\n Enter Your Name :");
    gets(S1.nm);

    printf("\nEnter your id And Per :");
    scanf("%d%f",&S1.id,&S1.per);

    //------------------------------------------------

    fflush(stdin);
    printf("\n Enter Your Name :");
    gets(S2.nm);

    printf("\nEnter your id And Per :");
    scanf("%d%f",&S2.id,&S2.per);

    I1=Max(S1,S2);
    Display(I1);

    return 0;
}

//================================

//Max

#include<stdio.h>
struct Student
{
    int id;
    char nm[50];
    float per;
};

int Max(float S1,float S2)
{
    if(S1>S2)
    {
        return S1;
    }
    else
    {
        return S2;
    }
}

void Display(struct Student S1)
{
    printf("name = %s \tId = %d \tPer=%f",S1.nm,S1.id,S1.per);
}

int main()
{
    struct Student S1,S2,I1;
    float max;

    printf("\n Enter Your Name :");
    gets(S1.nm);

    printf("\nEnter your id And Per :");
    scanf("%d%f",&S1.id,&S1.per);

    //------------------------------------------------

    fflush(stdin);
    printf("\n Enter Your Name :");
    gets(S2.nm);

    printf("\nEnter your id And Per :");
    scanf("%d%f",&S2.id,&S2.per);

    max=Max(S1.per,S2.per);
    printf("max per is %f:",max);

    return 0;
}

//=====================================================

//Array Of Structure

#include<stdio.h>
struct Student
{
    int id;
    char nm[50];
    float per;
};


int main()
{
    struct Student S[5];

    printf("Enter the Details of Student :");
    for(int i=0;i<5;i++)
    {
        fflush(stdin);

        printf("\n Enter Your Name :");
        gets(S[i].nm);

        printf("\nEnter your id And Per :");
        scanf("%d%f",&S[i].id,&S[i].per);
    }
    //------------------------------------

    for(int i=0;i<5;i++)
    {
        printf("\nName:%s \tId:%d \tPer:%f ",S[i].nm,S[i].id,S[i].per);
    }
    return 0;
}


//==========================

#include<stdio.h>
struct Student
{
    int id;
    char nm[50];
    float per;
};

void ExaArray(struct Student S[])
{

    printf("Enter the Details of Student :");
    for(int i=0;i<5;i++)
    {
        fflush(stdin);

        printf("\n Enter Your Name :");
        gets(S[i].nm);

        printf("\nEnter your id And Per :");
        scanf("%d%f",&S[i].id,&S[i].per);
    }
}
int main()
{
    struct Student S[5];

    ExaArray(S);

    for(int i=0;i<5;i++)
    {
        printf("\nName:%s \tId:%d \tPer:%f ",S[i].nm,S[i].id,S[i].per);
    }
    return 0;
}
*/
//===========================================

//pointer to structure
/*
#include<stdio.h>
struct Student
{
    int id;
    char nm[50];
    float per;
};

int main()
{
    struct Student *s;
    int cnt;

    printf("\n Enter Your Count :");
    scanf("%d",&cnt);

    s =(struct Student*)malloc(cnt*sizeof(struct Student));

    for(int i=0;i<cnt;i++)
    {
        fflush(stdin);
        printf("\nEnter Your name :");
        gets(s[i].nm);
        printf("\nEnter Id:");
        scanf("%d",&s[i].id);
    }

    for(int i=0;i<cnt;i++)
    {
        printf("\n name:%s \tid:%d ",s[i].nm,s[i].id);
    }

    return 0;
}
*/
//========================

///using take pointer and collect values in pointer
/*
#include<stdio.h>
struct Student
{
    int id;
    char nm[50];
    float per;
};

int main()
{
    struct Student *s;
    int cnt;

    printf("\n Enter Your Count :");
    scanf("%d",&cnt);

    s =(struct Student*)malloc(cnt*sizeof(struct Student));

    for(int i=0;i<cnt;i++)
    {
        fflush(stdin);
        printf("\nEnter Your name :");
        gets((s+i)->nm);
        printf("\nEnter Id:");
        scanf("%d",&(s+i)->id);
    }

    for(int i=0;i<cnt;i++)
    {
        printf("\n name:%s \tid:%d ",(s+i)->nm,(s+i)->id);
    }

    return 0;
}

//===================

//Creating an structure of pointer and Make Io Operations and Collect it in Array :

#include<stdio.h>
struct Student
{
    int id;
    char nm[50];
    float per;
};

void input(struct Student s[],int cnt)
{
    for(int i=0;i<cnt;i++)
    {
        fflush(stdin);
        printf("\nEnter Your name :");
        gets(s[i].nm);
        printf("\nEnter Id:");
        scanf("%d",&s[i].id);
    }
}
void display(struct Student s[],int cnt)
{
    for(int i=0;i<cnt;i++)
    {
        printf("\n name:%s \tid:%d ",s[i].nm,s[i].id);
    }
}
int main()
{
    struct Student *s;
    int cnt;

    printf("\n Enter Your Count :");
    scanf("%d",&cnt);

    s =(struct Student*)malloc(cnt*sizeof(struct Student));

    input(s,cnt);
    display(s,cnt);

    return 0;
}

//================

#include<stdio.h>
struct Student
{
    int id;
    char nm[50];
    float per;
};

void input(struct Student *s,int cnt)
{
    for(int i=0;i<cnt;i++)
    {
        fflush(stdin);
        printf("\nEnter Your name :");
        gets((s+i)->nm);
        printf("\nEnter Id:");
        scanf("%d",&(s+i)->id);
    }
}
void display(struct Student *s,int cnt)
{
    for(int i=0;i<cnt;i++)
    {
        printf("\n name:%s \tid:%d ",(s+i)->nm,(s+i)->id);
    }
}
int main()
{
    struct Student *s;
    int cnt;

    printf("\n Enter Your Count :");
    scanf("%d",&cnt);

    s =(struct Student*)malloc(cnt*sizeof(struct Student));

    input(&s,cnt);
    display(&s,cnt);

    return 0;
}


//================

#include<stdio.h>
int cnt;
struct Student
{
    int id;
    char nm[50];
    float per;
};
void input(struct Student *s)
{
    for(int i=0;i<cnt;i++)
    {
        fflush(stdin);
        printf("\nEnter Your name :");
        gets((s+i)->nm);
        printf("\nEnter Id:");
        scanf("%d",&(s+i)->id);
    }
}
void display(struct Student *s)
{
    for(int i=0;i<cnt;i++)
    {
        printf("\n name:%s \tid:%d ",(s+i)->nm,(s+i)->id);
    }
}
int main()
{
    struct Student *s;
    printf("\n Enter Your Count :");
    scanf("%d",&cnt);

    s =(struct Student*)malloc(cnt*sizeof(struct Student));

    input(&s);
    display(&s);

    return 0;
}
*/
//============================
/*
#include<stdio.h>
struct Student
{
    int id;
    char nm[50];
    int *sub;
};
int cnt;
int main()
{
    struct Student S;

    printf("Enter the Name Of Student :");
    gets(S.nm);
    printf("\nEnter The Id :");
    scanf("%d",&S.id);

    printf("\n Enter the Count Of Sub ");
    scanf("%d",&cnt);

    S.sub=(int*)malloc(cnt*sizeof(int));

    for(int i=0;i<cnt;i++)
    {
        printf("\n Enter The Subject Marks :",i+1);
        scanf("%d",&S.sub[i]);

    }

    printf("Dislay Deatils :");
    printf("\nname :%s \tid:%d",S.nm,S.id);
    printf("\nMarks :");
    for(int i=0;i<cnt;i++)
    {
        printf("   %d",S.sub[i]);
    }

    return 0;
}

//=========================================================

#include<stdio.h>
struct Student
{
    int id;
    char nm[50];
    int *sub;
};
int stucnt;
int main()
{
    struct Student *S;
    int cnt;

    printf("\n Enter Student cnt :");
    scanf("%d",&stucnt);

    S=(struct Student*)malloc(stucnt*sizeof(struct Student));


    for(int i=0;i<stucnt;i++)
    {
        cnt=0;
        fflush(stdin);
        printf("\nEnter The name Of Student : %d ",i+1);
        gets((S+i)->nm);
        printf("\nEnter Id:");
        scanf("%d",&(S+i)->id);

        printf("\nEnter The Sub cnt For Student :%d ",i+1);
        scanf("%d",&cnt);

        S[i].sub=(int*)malloc(cnt*sizeof(int));

        printf("\nEnter The Marks: ");
        for(int j=0;j<cnt;j++)
        {
            scanf("%d",&(S+i)->sub[j]);
        }
    }

    printf("\nDeatils Of Students : ");
    for(int i=0;i<stucnt;i++)
    {
        printf("\nname:%s \tid:%d",(S+i)->nm,(S+i)->id);
        printf("\tMarks ");
        for(int j=0;j<cnt;j++)
        {
           printf(" %d",(S+i)->sub[j]);
        }
    }
    return 0;
}
*/
//==================
/*
#include<stdio.h>
struct Student
{
    int id;
    char nm[50];
    int *sub;
};
int stucnt;
int main()
{
    struct Student **S;
    int cnt;

    printf("\n Enter Student cnt :");
    scanf("%d",&stucnt);

    S =(struct Student**)malloc(stucnt*sizeof(struct Student*));
    S->sub=(struct Student*)malloc(stucnt*sizeof(struct Student*));


    for(int i=0;i<stucnt;i++)
    {
        fflush(stdin);
        printf("\nEnter The name Of Student : %d ",i+1);
        gets((S[i].nm);
        printf("\nEnter Id:");
        scanf("%d",&S[i].id);

        printf("\nEnter The Sub cnt For Student :%d ",i+1);
        scanf("%d",&S[i]->(sub+i));

        S[i]->(sub+i)=(int*)malloc(*(S[i]->(sub+i))*sizeof(int));

        printf("\nEnter The Marks: ");
        for(int j=0;j<S->(sub+i);j++)
        {
            scanf("%d",&(S+i)->sub[j]);
        }
    }

    printf("\nDeatils Of Students : ");
    for(int i=0;i<stucnt;i++)
    {
        printf("\nname:%s \tid:%d",(S[i].nm,S[i].id);
        printf("\tMarks ");
        for(int j=0;j<S->(sub+i);j++)
        {
           printf(" %d",(S+i)->sub[j]);
        }
    }
    return 0;
}

*/
//==========================================

//Self Referable Structure:
/*
#include<stdio.h>
struct Student
{
    int id;
    char nm[50];
    struct Student *next;
};
int main()
{
    struct Student *start,*temp,*last;
    int opt;
    start=NULL;

    while(1)
    {
        printf("\n--------MENU------");
        printf("1.inset \t2.Display \t3.Exit");
        printf("\nEnter Your Option :");
        scanf("%d",&opt);

        switch(opt)
        {
            case 1:
                temp=(struct Student*)malloc(sizeof(struct Student));
                fflush(stdin);
                printf("\nEnter the name :");
                gets(temp->nm);
                printf("\nEnter The Id:");
                scanf("%d",&temp->id);
                temp->next=NULL;

                if(start==NULL)
                {
                    start=temp;
                    last=temp;
                }
                else
                {
                    last->next=temp;
                    last=temp;
                }
                break;

            case 2:

                temp=start;
                while(temp)
                {
                    printf("{%s,%d}",temp->nm,temp->id);
                    temp=temp->next;
                }
                break;

            case 3:
                exit(0);
                break;
        }
    }
}

*/
//===============================================
/*

#include<stdio.h>
struct Student
{
    int data;
    struct Student *next;
};
int main()
{
    struct Student *start,*temp,*last;
    int opt;
    start=NULL;

    while(1)
    {
        printf("\n--------MENU------");
        printf("1.push \t2.pop \t3.Exit");
        printf("\nEnter Your Option :");
        scanf("%d",&opt);

        switch(opt)
        {
            case 1:
                temp=(struct Student*)malloc(sizeof(struct Student));
                fflush(stdin);
                printf("\nEnter the data :");
                scanf("%d",&temp->data);
                temp->next=NULL;

                if(start==NULL)
                {
                    start=temp;
                    last=temp;
                }
                else
                {
                    last->next=temp;
                    last=temp;
                }
                break;

            case 2:

                temp=start;
                if(start==NULL)
                {
                    printf("Stack is Empty :");
                }
                else if(temp->next==NULL)
                {
                    start=NULL;
                    printf("Pop El %d",last->data);
                }
                else
                {
                    while(temp->next!=last)
                    {
                        temp=temp->next;
                    }
                    temp->next=NULL;
                    printf("Pop Ele %d",last->data);
                    free(last);
                    last=temp;
                }
                break;

            case 3:
                exit(0);
                break;
        }
    }
}

*/
//===================================================


union Test
{
	int x;
	float y;
	char ch;
	double db;
};

int main()
{
	union Test t;
	printf("\n Size of Test is: %d",sizeof( union Test));

	printf("\n Enter the character value: ");
	scanf("%c",&t.ch);
	printf("\n character is %c",t.ch);

	printf("\n Enter the int value: ");
	scanf("%d",&t.x);
	printf("\n int is %d",t.x);

	printf("\n Enter the float value: ");
	scanf("%f",&t.y);
	printf("\n float is %f",t.y);

	printf("\n Enter the double value: ");
	scanf("%lf",&t.db);
	printf("\n int is %lf",t.db);

	return 0;
}




