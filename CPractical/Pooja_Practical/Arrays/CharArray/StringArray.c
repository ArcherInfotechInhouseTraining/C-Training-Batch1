 /*
QUE 1: Displaying The Characters Array
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch[]={'h','e','l','l','o','\0'};
    int i;


    /*First Method
    printf("\nDisplay The Characters :");
    for(i=0;ch[i]!='\0';i++)
    {
        printf("%c",ch[i]);
    }


    //secound method
    printf("\nSecond method using Format spec %s :");
    printf("\n%s",ch);



    //Third Method
    printf("\nThe String is :");
    puts(ch);
    return 0;
*/
//==========================================================================================================================================
 /*

 QUE 2:Input and display the string

 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
     char ch[45];

     /*
     1st method
     printf("\nEnter the String :");
     scanf("%s",&ch);
     printf(ch);

     //Here using printf and scanf function we get only one word of string
     //using for loop we cant diplay the string condition is problem.

//==========================================================================================================================================

    //using %[^\n] it work fine : 2nd method

    printf("\nEnter the String :");
    scanf("%[^\n]",&ch);

    printf("\nsting is : %s",ch);

//==========================================================================================================================================

     //using another character at \n

     printf("\nEnter String :");
     scanf("%[^\nrw]",&ch);

     printf("\nThe String Is : %s ",ch);

//==========================================================================================================================================
     //using gets() : 3rd Method:

     printf("\nEnter the String :");
     gets(ch);
     printf("\nThe String is : %s",ch);


     //to display the string puts()
     printf("\nUsing Puts() :");
     puts(ch);

     return 0;
 }

 */
 //==========================================================================================================================================
 /*
 QUE 3 : WAP to find the length of string (number of characters in it)

 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
     char ch[]={'h','e','l','l','o','g','o','o','d','m','o','r','n','i','n','g','\0'};
     char str[]="Hii How Are You";
     int i,cnt=0;

     //Whitout using another variable
     for(i=0;ch[i]!='\0';i++);
     printf("\nThe Length whthout using variable = %d",i);


     //with using cnt variable
     for(i=0;ch[i]!='\0';i++)
     {
         cnt++;
     }
     printf("\nLenth using cnt variable : %d",cnt);


     //for string str
     for(i=0;str[i]!='\0';i++);
     printf("\nThe Length For Str : %d ",i);
     return 0;
 }
*/
//-----------------------------------------------------------------------------------------
/*
QUE 4: WAP to convert the string into uppercase

#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch[45];
    int i;

    printf("\nEnter The String : ");
    gets(ch);

    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>='a' && ch[i]<='z') //if(ch[i]>=97 && ch[i]<=122)
        {
            ch[i]=ch[i]-32;
        }
    }

    printf("\nAfter convert String To Uppercase :");
    puts(ch);
    return 0;
}
*/
//-------------------------------------------------------------------------------------------
/*
QUE 4: WAP to convert the string into lowercase

#include<stdio.h>
int main()
{
    char ch[45];
    int i;
    printf("\nEnter Your String :");
    gets(ch);

    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>='A' && ch[i]<='Z') //if(ch[i]>=65 && ch[i]<=97)
        {
            ch[i]=ch[i]+32;
        }
    }

    printf("\nString After converting Into Lowercase :\n");
    puts(ch);
    return 0;
}
*/
//-----------------------------------------------------------------------------------------

/*
 //QUE 5 :Copy Characters At another Location

 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
     char ch[45],str[45];
     int i;

     printf("\nEnter Your String :");
     gets(ch);

     for(i=0;ch[i]!='\0';i++)
     {
         str[i]=ch[i];
     }
     str[i]='\0';

     printf("\nDisplaying the Elements after changing Location :\n");
     puts(str);
     return 0;
 }
*/
//------------------------------------------------------------------------------------------

/*
//QUE 6 :reverse copy

#include<stdio.h>
int main()
{
    char ch[45],str[45];
    int i,j,len;

    printf("\nEnter Your String :");
    gets(ch);

    //count
    for(i=0;ch[i]!='\0';i++);
    printf("\nCount = %d",i);
    len=i;

    printf("\nCount = %d",len);


    //Reverse copy at another location

    for(i--,j=0;i>=0;i--,j++)
    {
        str[j]=ch[i];
    }

   // str[j]='\0';

    printf("\n Original string : %s ",ch);
    printf("\nafter reverse The string : %s ",str);
    puts(str);

    return 0;
}
*/
//-------------------------------------------------------------------------------------------
/*

//QUE 7 : Reverse copy at same Location

#include<stdio.h>
int main()
{
    char ch[45],temp;
    int i,j;

    printf("\nEnter your String :");
    gets(ch);

    for(i=0;ch[i]!='\0';i++);
    printf("\n Count = %d ",i);

    for(i--,j=0;i>=j;i--,j++)
    {
        temp=ch[i];
        ch[i]=ch[j];
        ch[j]=temp;
    }

    printf("\nAfter Copy elements In reverse Manner at Same Location :\n");
    puts(ch);
    return 0;
}
*/
//-----------------------------------------------------------------------------
/*
QUE 8: word count in a simple way. (it takes unwanted spaces)

#include<stdio.h>
int main()
{
    char str[70];
    int i,cnt=0;

    //input
    printf("\n Enter Any String :");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==32)
        {
            cnt++;
        }
    }
    printf("\n The count of Word is = %d",cnt+1);

    return 0;
}
*/
//---------------------------------------------------------------------------
/*
//QUE 9: Calculating Word Count Without unwanted Spaces.

#include<stdio.h>
int main()
{
    char str[70];
    int i,cnt=0,sp,ep;

    //input
    printf("\nEnter Any String :");
    gets(str);

    for(i=0;str[i]==32;i++);
    sp=i; //calculate Starting point.
    printf("----------%d",sp);

    for(i=0;str[i]!='\0';i++);
    for(i--;str[i]==32;i--);
    ep=i; //calculating The Ending Point
    printf("----------%d",ep);

    while(sp<=ep)
    {
        if(str[sp]!=32 && str[sp-1]==32)
        {
            cnt++;
        }
        sp++;
    }

    printf("\n The Count Of Words = %d",cnt);

    return 0;
}
*/
//--------------------------------------------------------------------------
/*
QUE 10:
WAP to display the starting character of each word from entered string and word count.
(with multiple spaces)

#include<stdio.h>
int main()
{
    char str[70];
    int i,sp,ep,cnt=0;

    //input
    printf("\nEnter the String :");
    gets(str);

    for(i=0;str[i]==32;i++);
    sp=i; //Calculate Starting Point

    for(i=0;str[i]!='\0';i++);
    for(i--;str[i]==32;i--);
    ep=i;  //calculate the End point

    printf(" %c",str[sp]);

    while(sp<=ep)
    {
        if(str[sp]==32 && str[sp+1]!=32)
        {
            cnt++;
            printf("\t %c ",str[sp+1]);

        }
        sp++;
    }

    printf("\n The coount Of Words In string = %d ",cnt+1);
    return 0;
}
*/
//-------------------------------------------------------------------------------
/*
QUE 11:
WAP to display the ending character of each word from entered string.
(with multiple spaces)

---it start From Ending

#include<stdio.h>
int main()
{
    char str[60];
    int i,sp,ep;

    //input
    printf("\nEnter any String :");
    gets(str);

    for(i=0;str[i]==32;i++);
    sp=i;  //calculate starting Point

    for(i=0;str[i]!='\0';i++);
    for(i--;str[i]==32;i--);
    ep=i; //calculate End Point

    //process
    printf(" %c",str[ep]);
    while(ep>=sp)
    {
        if(str[ep]==32 && str[ep-1]!=32)
        {
            printf("\t %c",str[ep-1]);
        }
        ep--;
    }
    return 0;
}

OR
---it start Form Starting :

#include<stdio.h>
int main()
{
    char str[60];
    int i,sp,ep;

    //input
    printf("\nEnter any String :");
    gets(str);

    for(i=0;str[i]==32;i++);
    sp=i;  //calculate starting Point

    for(i=0;str[i]!='\0';i++);
    for(i--;str[i]==32;i--);
    ep=i; //calculate End Point

    //process
    //printf(" %c",str[ep]);
    while(sp<=ep)
    {
        if(str[sp]!=32 && str[sp+1]==32)
        {
            printf("\t %c",str[sp]);
        }
        sp++;
    }
    return 0;
}

*/
//-------------------------------------------------------------------------------
/*
QUE 12:
WAP to display the starting character of each word from entered string
and Convert It Into Uppercase.(with multiple spaces)

#include<stdio.h>
int main()
{
    char str[70];
    int i ,sp ,ep;

    //input
    printf("\nEnter the String :");
    gets(str);

    for(i=0;str[i]==32;i++);
    sp=i;// calculate starting point

    for(i=0;str[i]!='\0';i++);
    for(i--;str[i]==32;i--);
    ep=i; //calculatng Ending Point;

    printf("\n Display Starting Char after Converting into uppercase\n");
    if(str[sp]>='a' && str[sp]<='z')
    {
        str[sp]=str[sp]-32;
    }
    printf(" %c",str[sp]);


    while(sp<=ep)
    {
        if(str[sp]==32 && str[sp+1]!=32)
        {
            if(str[sp+1]>='a' && str[sp+1]<='z')// str[sp+1]>=97 && str[sp+1]<='z
            {
                str[sp+1]=str[sp+1]-32;
            }
            printf("\t %c",str[sp+1]);
        }
        sp++;
    }
    return 0;
}
*/
//-------------------------------------------------------------------------------
/*
QUE 13:
WAP to display the starting character of each word from entered string
and Convert It Into Uppercase.(with multiple spaces)

#include<stdio.h>
int main()
{
    char str[70];
    int i,sp,ep;

    //input
    printf("\nEnter ant String :");
    gets(str);

    for(i=0;str[i]==32;i++);
    sp=i; //calculate starting point

    for(i=0;str[i]!='\0';i++);
    for(i--;str[i]==32;i--);
    ep=i; //calculate Ening Point

    printf("\n Display the char after Convertign End Char into uppercase:\n");
    if(str[ep]>='a' && str[ep]<='z')
    {
        str[ep]=str[ep]-32;
    }

    printf("%c",str[ep]);

    while(ep>=sp)
    {
        if(str[ep]==32 && str[ep-1]!=32)
        {
            if(str[ep-1]>='a' && str[ep-1]<='z')//str[ep-1]>=97 && str[ep-1]<='z
            {
                str[ep-1]=str[ep-1]-32;
            }
            printf("\t %c",str[ep-1]);
        }
        ep--;
    }

    return 0;
}
*/
//----------------------------------------------------------------------------
// QUE14:

//Swaaping sp ep charcaters
/*
#include<stdio.h>
int main()
{
    char str[70],temp,Fchar,Lchar;
    int i,sp,ep;

    //input
    printf("\nEnter The string :");
    gets(str);

    for(i=0;str[i]==32;i++);
    sp=i;

    for(i=0;str[i]!='\0';i++);
    for(i--;str[i]==32;i--);
    ep=i;

    while(sp<=ep)
    {
        if(str[sp]==32 && str[sp+1]!=32)
        {
            Fchar=str[sp+1];
        }
        else if(str[sp]!=32 && str[sp+1]==32)
        {
            Lchar=str[sp];
        }

        str[temp]=Fchar;
        Fchar=Lchar;
        Lchar=str[temp];

        printf("\n Fchar = %c",Fchar);
        printf("\n Lchar = %c",Lchar);
        sp++;
    }
    puts(str);
    return 0;
}
*/
//------------------------------------------------------------------------------------
/*
QUE15:WAP To convert string first and Last Character To uppercase And other convert into lowercase

#include<stdio.h>
int main()
{
    char str[70];
    int i,sp,ep;

    //input
    printf("\nEnter The String :");
    gets(str);

    for(i=0;str[i]==32;i++);
    sp=i;

    for(i=0;str[i]!='\0';i++);
    for(i--;str[i]==32;i--);
    ep=i;

    while(sp<=ep)
    {
        if((str[sp]!=32 && str[sp-1]==32)||
           (str[sp]!=32 && str[sp+1]==32) || str[sp+1]==0)
        {
            if(str[sp]>=97 && str[sp]<=122)
            {
                str[sp]=str[sp]-32;
            }
        }
        else if(str[sp]>=65 && str[sp]<=90)
        {
            str[sp]=str[sp]+32;
        }
        else if(str[0]!=32 && str[0]>=97 && str[0]<=122)
        {
            str[0]=str[0]-32;
        }
        sp++;
    }
    puts(str);
    return 0;
}
*/
//----------------------------------------------------------------------------------
/*
que16: Reverse the whole String
input : hello how are you
output: uoy era woh olleh  //using Stack

#include<stdio.h>
int main()
{
    char ch[70],str[70];
    int i,j,top;

    //input
    printf("\nEnter Your String :");
    gets(str);

    i=0;
    top=-1;
    while(str[i]!='\0')
    {
        top++;
        ch[top]=str[i];
        i++;
    }
    i=0;
    while(top>=0)
    {
        str[i]=ch[top];
        top--;
        i++;
    }
    puts(str);

    return 0;
}
*/
//---------------------------------------------------------------------------------
/*
QUE 16: WAP To reverse the every word of string
input : hello how are you
outpu : olleh woh era uoy

#include<stdio.h>
int main()
{
    char str[70];
    int i,j,temp,k;

    //input
    printf("\nEnter Your String :");
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
*/
//--------------------------------------------------------------------------------
/*
QUE 17: Wap to display The missing char in string:
input : hello how are you
output : b c d f g i j k m n p q s t v  x z

#include<stdio.h>
int main()
{
    char str[70];
    int i,j;

    //input
    printf("\nEnter Your String :");
    gets(str);

    for(i=97;i<=122;i++)
    {
        int flag=0;
        j=0;
        while(str[j]!='\0')
        {
            if(str[j]==i)
            {
                flag=1;
                break;
            }
            j++;
        }
        if(flag==0)
        {
            printf("\t%c",i);
        }
    }
    return 0;
}
*/
//------------------------------------------------------------------
/*QUE 18: arrange the string in acending order
C Program to arrange the string in alphabetical order

input : hello how are you
output :aeehhlloooruwy

#include<stdio.h>
int main()
{
    char str[70];
    int i,j,temp;

    //input
    printf("\nEnter The String :");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    puts(str);
    return 0;
}
*/
//-----------------------------------------------------------------
/*
QUE 19:
input : hello how are you
output :hello ( Display max length word )

#include<stdio.h>
int main()
{
    char str[70],temp[70];
    int i,j,cnt,max=0;

    //input
    printf("\nEnter Your Sring :");
    gets(str);

    i=0;
    j=0;
    do
    {
        for(i=j;str[i]==32;i++);
        cnt=0;
        for(j=i;str[j]!=32&&str[j]!='\0';j++);
        {
            cnt++;
        }
       // printf("%d",cnt);
        if(cnt>max)
        {
            max=cnt;
            for(j=0;str[i]!=32 && str[i]!='\0';i++,j++)
            {
                temp[j]=str[i];
            }
            temp[j]='\0';
        }
    }while(str[i]!='\0');
   // puts(temp);
    printf("\n max length string is %s \t\t\t %d",temp,max);

    return 0;
}
*/
//-----------------------------------------------------------------
/*
que 20: cheak Entered String Is palindrom or not

#include<stdio.h>
int main()
{
    char str[70],ch[70],arr[70];
    int i,j,flag=0,temp;

    //input
    printf("\nEnter Your String :");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        arr[i]=str[i];
    }

    for(i=0;str[i]!='\0';i++);
    for(i--,j=0;i>=j;i--,j++)
    {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }

    for(i=0;str[i]!='\0';i++)
    {
        flag=0;
        if(arr[i]!=str[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("\n palindrom");
    }
    else
    {
        printf("\nNot Palindrom");
    }
    return 0;
}
*/
//==============================================================================
/*

QUE 21 : C Program to count number of vowels in string

#include<stdio.h>
int main()
{
    char str[70];
    int i ,cnt=0;

    //input
    printf("\nEnter String:");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            cnt++;
        }
    }
    printf("\n The count of Vowel is = %d",cnt);
    return 0;
}
*/
//==================================================================
/*
QUE 22:C Program to Converting string from lowercase to
uppercase and vice-versa

#include<stdio.h>
int main()
{
    char str[70];
    int i;
    //inpput
    printf("\nEnter The string :");
    gets(str);

    i=0;
    while(str[i]!='\0')
    {
        if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
        i++;
    }
    puts(str);
    return 0;
}
*/
//=================================================================
/*QUE 23:C Program to Converting string from uppercase to
lowercase

#include<stdio.h>
int main()
{
    char str[70];
    int i;

    //input
    printf("\nEnter The string :");
    gets(str);

    i=0;
    while(str[i]!='\0')
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        i++;
    }
    puts(str);
    return 0;
}
*/
//==================================================================
/*
QUE 24:
C program to count uppercase,
lowercase and special characters in string

#include<stdio.h>
int main()
{
    char ch[70];
    int i,cntU=0,cntL=0;

    //input
    printf("\nEnter The string :");
    gets(ch);

    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>=97 && ch[i]<=122)
        {
            cntL++;
        }
        else if(ch[i]>=65 && ch[i]<=90)
        {
            cntU++;
        }
    }
    printf("\n Count Of Lowercase = %d",cntL);
    printf("\n Count of Uppercase = %d",cntU);
    return 0;
}
*/
//====================================================================
/*
QUE25:
C Program to compare two strings

#include<stdio.h>
int main()
{
    char str[70],ch[60];
    int i,j,flag;
    printf("\nEnter Your First String:");
    gets(str);

    printf("\nEnter Your Secound String :");
    gets(ch);

    flag=0;

    for(i=0,j=0;str[i]!='\0'&&ch[j]!='\0';i++,j++)
    {
        if(str[i]!=ch[j])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("\n Matching");
    }
    else
    {
        printf("\nNot matching");
    }


    return 0;
}
*/
//=============================================================================================================
///QUE 26 :C Program to concatenate two string

/*
#include<stdio.h>
int main()
{
    char str[70],ch[70],temp[140];

    int i,j,len;

    printf("\nEnter First String:");
    gets(str);

    printf("\nEnter Secound String :");
    gets(ch);

   for(i=0,j=0;str[i]!='\0';i++,j++)
   {
       temp[j]=str[i];
   }
   for(i=0,j=j;ch[i]!='\0';i++,j++)
   {
       temp[j]=ch[i];
   }
    puts(temp);
    return 0;
}
*/
//==============================================================================================================
///QUE 27 :C program to delete vowels from a string
/*
#include<stdio.h>
int main()
{
    char str[70];
    int i,j,len,temp;

    printf("\nEnter Your String :");
    gets(str);

    for(i=0;str[i+1]!='\0';i++);
    len=i;

    printf("%d\n",len);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'|| str[i]=='o'|| str[i]=='u')
        {
            temp=str[i];
            for(j=i;j<=len;j++)
            {
                str[j]=str[j+1];
            }
            len--;
        }
    }
    puts(str);

    return 0;

}
*/
//=========================================================================================
/*
C Program to Counting the number of words in a given string

#include<stdio.h>
int main()
{
    char str[70];
    int i,j,cnt;

    printf("\nEnter Your String:");
    gets(str);

    i=0;
    cnt=0;
    while(str[i]!='\0')
    {
        for(;str[i]==32;i++);
        for(j=i;str[j+1]!=32&&str[j+1]!=0;j++);

        cnt++;
        i=j+1;
    }

    printf("\nThe Count Occured In Strig = %d",cnt);

    return 0;
}
*/
//===========================================================================================================
/*

--C Program to Counting the number of character in a given string

#include<stdio.h>
int main()
{
    char str[70];
    int i,cnt=0;

    printf("\nEnter Your String:");
    gets(str);

    i=0;

    while(str[i]!='\0')
    {
        if((str[i]>=65 &&str[i]<=90 )|| (str[i]>=97 && str[i]<=122))
        {
            cnt++;
        }
        i=i+1;
    }

    printf("The Characters Present In string are : %d",cnt);

    return 0;
}
*/

//==========================================================================================================
/*

C program to find number of alphabets, digits or special characters in a string

#include<stdio.h>
int main()
{
    char str[70];
    int i,cntChar,cntnum,cntSpeSy;


    printf("\nEnter Your String:");
    gets(str);

    cntChar=0;
    cntnum=0;
    cntSpeSy=0;

    for(i=0;str[i]!='\0';i++)
    {
        if((str[i]>=65 && str[i]<=90) || (str[i]>=97 &&str[i]<=122))
        {
            cntChar++;
        }

        else if(str[i]>=48 && str[i]<=57)
        {
            cntnum++;
        }
        else
        {
            cntSpeSy++;
        }
    }

    printf("\nCount Of Char = %d",cntChar);
    printf("\nCount of Digit = %d",cntnum);
    printf("\nCount of Special Symbol = %d",cntSpeSy);


    return 0;
}
*/
//===============================================================================================================
/*

C program to count total number of vowels and consonants in a string

#include<stdio.h>
int main()
{
    char str[70];
    int i,CntConso=0,CntVow=0,Spaccnt=0;

    printf("\nEnter Your String:");
    gets(str);

    i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='e')
        {
            CntVow++;
        }
        else if(str[i]!=32)
        {
            CntConso++;
        }
        i++;
    }

    printf("\nCount Of Vowel = %d",CntVow);
    printf("\nCount For Consonant = %d",CntConso);

    return 0;
}
*/
//============================================================================================================

/*

C Program to Remove all Characters in a String Except Alphabet

#include<stdio.h>
int main()
{
    char str[70];
    int i,j;

    printf("\nEnter Your String:");
    gets(str);

    i=0;
    while(str[i]!='\0')
    {
        if(!((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122) ||(str[i]==32)))
        {
            //printf(" %d is postion of ",i+1);

            for(j=i;str[j]!='\0';j++)
            {
                str[j]=str[j+1];

            }

            i--;
        }

        i++;
    }
    puts(str);


    return 0;
}
*/
//================================================================================================================
/*

C program to find the first occurrence of a character in a string

#include<stdio.h>
int main()
{
    char str[70];
    int i,j,cnt=0,st;

    printf("\nEnter Your string:");
    gets(str);

    for(i=0;str[i]==32;i++);
    st=i;

    i=0;
    while(str[i]!='\0')
    {
        if(str[st]==str[i])
        {
            cnt++;
        }
        i++;
    }

    printf("\n The count = %d",cnt);

    return 0;
}
*/
//=============================================================================================================
/*

C program to find last occurrence of a character in a string

#include<stdio.h>
int main()
{
    char str[70];
    int i,j,st,EP,cnt=0;

    printf("\nEnter Your String :");
    gets(str);

    for(i=0;str[i]==32;i++);
    st=i;

    for(j=0;str[j]!='\0';j++);
    j=j-1;
    EP=j;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[EP]==str[i])
        {
            cnt++;
        }
    }

    printf("\nThe Occurance Of last CHar = %d",cnt);

    return 0;
}
*/
//==================================================================================================================
/*
C program to search all occurrences of a character in a string

#include<stdio.h>
int main()
{
    char str[70];
    int i,j,cnt;

    printf("\nEnter Your String:");
    gets(str);

    for(i=97;i<=122;i++)
    {
        cnt=0;
        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]==i)
            {
                cnt++;
            }
        }
        if(cnt!=0)
        {
             printf("\t %c %d\n ",i,cnt);
        }
    }
    return 0;
}
*/
//==============================================================================================================
/*

C program to find maximum occurring character in a string

#include<stdio.h>
int main()
{
    char str[70];
    int i,j,max=0,cnt;


    printf("\nEnter Your String:");
    gets(str);

    for(i=97;i<=122;i++)
    {
        cnt=0;
        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]==i)
            {
                cnt++;
            }
        }
        if(cnt!=0)
        {
            printf("\t char %c times Occ %d\n",i,cnt);

            if(cnt>max)
            {
                max=cnt;
            }
        }

    }

    printf("\nMax Count = %d",max);

    return 0;
}
*/
//============================================================================================================
/*

C program to find minimum occurring character in a string


#include<stdio.h>
int main()
{
    char str[70];
    int i,j,min=9,cnt,length,len;


    printf("\nEnter Your String:");
    gets(str);

    for(len=0;str[len]!='\0';len++);
    length=len;

    for(i=97;i<=122;i++)
    {
        cnt=0;
        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]==i)
            {
                cnt++;
            }
        }
        if(cnt!=0)
        {
            printf("\t char %c times Occ %d\n",i,cnt);

            if(cnt<length)
            {
                length=cnt;
            }
        }

    }

    printf("\nmin lenth of string Char = %d",length);

    return 0;
}
*/
//================================================================================================================

/*
C program to remove first occurrence of a character from string

#include<stdio.h>
int main()
{
    char str[70],temp;
    int i,j,st;

    printf("\nEnter Your String:");
    gets(str);

    for(i=0;str[i]==32;i++);
    st=str[i];

    i=0;
    while(str[i]!='\0')
    {

        if(st==str[i])
        {
            for(j=i;str[j]!='\0';j++)
            {
                str[j]=str[j+1];
            }
            i--;
        }
        i++;
    }

    puts(str);

    return 0;
}
*/
//====================================================================================================
/*
//C program to remove last occurrence of a character from the string

#include<stdio.h>
int main()
{
    char str[70],temp;
    int i,j,Ep;

    printf("\nEnter Your String:");
    gets(str);

    for(i=0;str[i]!='\0';i++);
    i--;
    Ep=str[i];

    i=0;
    while(str[i]!='\0')
    {

        if(Ep==str[i])
        {
            for(j=i;str[j]!='\0';j++)
            {
                str[j]=str[j+1];
            }
            i--;
        }
        i++;
    }

    puts(str);

    return 0;
}
*/
//========================================================================================================
/*
C program to remove all repeated characters in a string

#include<stdio.h>
int main()
{
    char str[70];
    int i,j,k,cnt;


    printf("\n Enter Your String:");
    gets(str);

    for(i=97;i<=122;i++)
    {
        cnt=0;
        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]==i)
            {
                cnt++;

                if(cnt>1)
                {
                    for(k=j;str[k]!='\0';k++)
                    {
                        str[k]=str[k+1];
                    }
                }
            }
        }
    }

    puts(str);

    return 0;
}
*/
//================================================================================================================
/*

C program to replace first occurrence of a character in a string

#include<stdio.h>
int main()
{
    char str[70],ch;
    int i,j,st;

    printf("\nEnter Your String:");
    gets(str);

    for(i=0;str[i]==32;i++);
    st=str[i];

    printf("\nEnter Your Element You Want to replace With:");
    scanf("%c",&ch);

    i=0;
    while(str[i]!='\0')
    {
        if(st==str[i])
        {
            str[i]=ch;
        }
        i++;
    }

    puts(str);
    return 0;
}
*/
//=================================================================================================================
/*

C program to replace last occurrence of a character in a string

#include<stdio.h>
int main()
{
    char str[70],ch;
    int i,j,ep;

    printf("\nEnter Your String:");
    gets(str);

    for(i=0;str[i]!='\0';i++);
    i--; //i=i-1;
    ep=str[i];

    printf("\nEnter Your Element You Want to replace With:");
    scanf("%c",&ch);

    i=0;
    while(str[i]!='\0')
    {
        if(ep==str[i])
        {
            str[i]=ch;
        }
        i++;
    }

    puts(str);
    return 0;
}
*/
//================================================================================================================
/*

C program to remove spaces and blanks from a string

#include<stdio.h>
int main()
{
    char str[70];
    int i,j;

    printf("\n Enter Your STring:");
    gets(str);


    i=0;
    while(str[i]!='\0')
    {
        if(str[i]==32)
        {
            for(j=i;str[j]!='\0';j++)
            {
                str[j]=str[j+1];
            }
            i--;
        }
        i++;
    }

    puts(str);

    return 0;
}
*/
//================================================================================================================
/*
C Program to display reverse and length of string Using Stack:

#include<stdio.h>
int main()
{
    char str[70],temp[70];
    int i,top,len;


    printf("\nEnter Your STring:");
    gets(str);

    for(i=0;str[i]!='\0';i++);

    len=i;

    printf("\nThe Length of string is %d ",len);

    top=-1;
    i=0;
    while(str[i]!='\0')
    {
        top++;
        temp[top]=str[i];
        i++;
    }

    i=0;

    while(top>0)
    {
        str[i]=temp[top];
        top--;
        i++;
    }

    puts(str);

}
*/
//==============================================================================================================
///30
/*

C program to replace all occurrences of a character in a string

#include<stdio.h>
int main()
{
    char str[70],ch;
    int i,j,cnt;

    printf("\nEnter Your String:");
    gets(str);


    printf("\nENter your Elements Your Want To replace With:");
    scanf("%c",&ch);

    for(i=97;i<=122;i++)
    {
        cnt=0;
        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]==i)
            {
                cnt++;
                if(cnt>1)
                {
                    str[j]=ch;
                }
            }

        }

    }
    puts(str);

    return 0;
}
*/

//=============================================================================================================
///C program to remove all occurrences of a character from the string
/*
#include<stdio.h>
int main()
{
    char str[70],ch;
    int len,i,j;

    printf("\n Enter Your String:");
    gets(str);

    printf("\n Enter Charater Your Want to Remove This Occurance:");
    scanf("%c",&ch);

    for(i=0;str[i]!='\0';i++);
    len=i;

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            for(j=i;j<=len;j++)
            {
                str[j]=str[j+1];
            }
            len--;
        }
    }
    puts(str);

    return 0;
}
*/
//===================================================================================================================
///C program to toggle each character in a string
/*
#include<stdio.h>
int main()
{
    char str[50];

    printf("\n Enter Your Sting:");
    gets(str);

    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=97)
        {
            str[i]=str[i]+32;
        }
        else if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }
    puts(str);

    return 0;

}
*/
//============================================================================================================
/// Program to Replace occurance of character by another character

/*
#include<stdio.h>
int main()
{
    char str[70];
    printf("\n Enter Your String:");
    gets(str);

    printf


    return 0;
}
*/

























































