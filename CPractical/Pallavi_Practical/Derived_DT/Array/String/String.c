/*
#include<stdio.h>
int main()
{
   char ch[6]={'h','e','l','l','o','\0'};
   char str[]="Good morning all";
   int i;

   ///method 1
   for(i=0;str[i]!='\0';i++)
   {
       printf("\t %c",str[i]);
   }

   printf("\n");

   ///method 2
   printf("%s",str);

   printf("\n");

   ///method 3
   printf("\n String is: ");
   puts(str); ///used to print the string

   printf("\n Anathor string is : %s",ch);
   return 0;
}
*/


/// Input and display the string
/*
#include<stdio.h>
int main()
{
    char ch[50];

  //  printf("\n Enter any string : ");
    //scanf("%s",&ch);
    //printf("%s",ch);

    printf("\n Enter any string : ");
    scanf("%[^\nr]",&ch);
    //scanf("%[^\n]",&ch);
    //scanf("%[^\nrw]",&ch);
    printf("\n string is : %s",ch);

    printf("\n");
    //puts(ch);
}
*/

 /// 4. Using the gets():
/*
 #include<stdio.h>
 int main()
 {
     char ch[50];

     printf("\n Enter any string : ");
     gets(ch); ///act like a scanf()
     puts(ch); ///act like a printf()
 }

*/

///*******************************************************************************

///1. WAP to find the length of string (number of characters in it)
///(character count)

/*
#include<stdio.h>
int main()
{
    char ch[50];
    int i,cnt=0;

    printf("\n Enter any string : ");
    gets(ch);

    for(i=0;ch[i]!='\0';i++)
    {
        cnt++;
    }

    printf("\n String is : %s",ch);
    printf("\n Length is : %d",cnt);

    ///without using cnt
    for(i=0;ch[i]!='\0';i++);
    printf("\n Length is : %d",i);
}

*/

///2. WAP to convert the string into uppercase
/*
#include<stdio.h>
int main()
{
    char ch[50];
    int i;

    printf("\n Enter any string : ");
    gets(ch);

    for(i=0; ch[i]!='\0';i++)
    {
        if(ch[i]>=97 && ch[i]<=122)
        {
            ch[i]=ch[i]-32;
        }
    }
    puts(ch);
}
*/

///3.Copy at another location
/*
#include<stdio.h>
int main()
{
    char ch[50],str[50];
    int i;

    printf("\n Enter any string : ");
    gets(ch);
    puts(ch);

    for(i=0;ch[i]!='\0';i++)
    {
        str[i]=ch[i];
    }
    printf("\n");

    printf("Copy : ");
    puts(str);

}
*/

///4.Reverse Copy at another location
/*
#include<stdio.h>
int main()
{
    char ch[50],arr[50];
    int i,j;

    printf("\n Enter any string: ");
    gets(ch);

    for(i=0;ch[i]!=0;i++);

    for(i--,j=0;i>=0;i--,j++)
    {
        arr[j]=ch[i];
    }

   arr[j]='\0';

    printf("\n Original : ");
    puts(ch);
    printf("\n Arr is : ");
    puts(arr);


}
*/

///5.Reverse Copy at same location
/*
#include<stdio.h>
int main()
{
    char str[50],tmp;
    int i,j;

    printf("\n Enter any string : ");
    gets(str);
    puts(str);
    for(i=0;str[i]!='\0';i++);

    for(i--,j=0;i>=j;i--,j++)
    {
        tmp=str[i];
        str[i]=str[j];
        str[j]=tmp;
    }

    puts(str);

}
*/


///5.WAP to calculate word count of string (without any unwanted spaces)
/*
#include<stdio.h>
int main()
{
    char str[70];
    int cnt=0,i;

    printf("\n Enter any string : ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==32)
        {
            cnt++;
        }
    }
    printf("\n Count of words in enterd string is : %d",cnt+1);
}
*/

///6.WAP to display the  word count.(with multiple spaces)

/*
 #include<stdio.h>
 int main()
 {
     char arr[70];
     int i,sp,ep,cnt=0;

     printf("\n Enter any string : ");
     gets(arr);

     ///to calculate starting point
     for(i=0;arr[i]==32;i++);
     sp=i;


     ///calculate ending point

     for(i=0;arr[i]!='\0';i++);
     for(i--;arr[i]==32;i--);
     ep=i;

     ///calculate word count

     while(sp<=ep)
     {
         if(arr[sp]!=32 && arr[sp-1]==32)
         {
             cnt++;
         }
         sp++;
     }

     printf("\n Word count is : %d",cnt);

     return 0;
 }

*/

///7.    WAP to display the starting character of each word from entered string and word count.
///    (with multiple spaces)

/*
#include<stdio.h>
int main()
{
    char str[70];
    int i,cnt,sp,ep;

    printf("\n Enter any string : ");
    gets(str);

    ///staring point
    for(i=0;str[i]==32;i++);
    sp=i;

    ///ending point
    for(i=0;str[i]!='\0';i++);
    for(i--;str[i]==32;i--);
    ep=i;

    while(sp<=ep)
    {
        if(str[sp]!=32 && str[sp-1]==32)
        {
            cnt++;
            printf("\t %c",str[sp]);
        }
        sp++;
    }

    printf("\n");
    for(i=0;str[i]==32;i++);
    sp=i;
    printf("\n Starting points in Uppar Case : \n");
    while(sp<=ep)
    {
        if(str[sp]!=32 && str[sp-1]==32)
        {
            if(str[sp]>=97 && str[sp]<=122)
            {
                str[sp]=str[sp]-32;

                printf("\t %c",str[sp]);
            }
        }
        sp++;

    }
    return 0;

}

*/


///8.WAP to convert ending points of string into upper case
/*

#include<stdio.h>
int main()
{
    char str[70];
    int i,sp,ep;

    printf("\n Enter any string : ");
    gets(str);

    ///for starting point
    for(i=0;str[i]==32;i++);
    sp=i;

    ///for ending point
    for(i=0;str[i]!='\0';i++);
    for(i--;str[i]==32;i--);
    ep=i;

    printf("\n Display Ending Points of String : \n");

    while(sp<=ep)
    {
        if( str[sp-1]!=32 && str[sp+1]==32 )
        {
            printf("\t %c",str[sp]);
        }
        sp++;
    }

    ///here current value of sp is value of our ep  so we need to set it at starting point
    for(i=0;str[i]==32;i++);
    sp=i;

    printf("\n Display Ending Points of String in Upper Case : \n");
    while(sp<=ep)
    {
        if(str[sp-1]!=32 && str[sp+1]==32)
        {
           if(str[sp]>=97 && str[sp]<=122)
            {
                str[sp]=str[sp]-32;
                printf("\t %c",str[sp]);
            }
            else
            {
                printf("\t %c",str[sp]);
            }
        }
        sp++;
    }

    return 0;
}

*/


///9 WAP to swap first character and last character of word
///(for extraspaces in string)

/*

#include<stdio.h>
int main()
{
    char str[70];
    int i,j,sp,ep,temp;

    printf("\n Enter any string : ");
    gets(str);

    printf("\nBefore swap : \n");
    puts(str);

    printf("\n After Swap : \n");

    i=0;
    while(str[i]!='\0')
    {
        if(str[i]!=32 && str[i-1]==32)
        {
            sp=i;
            for(j=sp;str[j+1]!=32;j++);
            ep=j;

            temp=str[sp];
            str[sp]=str[ep];
            str[ep]=temp;
        }
        i++;
    }
    puts(str);
    return 0;
}
*/

/// 10.WAP to convert first and last character of word into upper case and other into lower case and print the string
///(with or without extra spaces)

/*
#include<stdio.h>
int main()
{
   char str[70];
   int i,sp,ep;

   printf("\n Enter any string : ");
   gets(str);

   ///to calculate starting point
   for(i=0;str[i]==32;i++);
   sp=i;

   ///calculate ending point
   for(i=0;str[i]!='\0';i++);
   for(i--;str[i]==32;i--);
   ep=i;

   while(sp<=ep)
   {
       if( (str[sp]!=32 && str[sp-1]==32) || (str[sp]!=32 && str[sp+1]==32) || str[sp+1] == '\0' )
       {
           if(str[sp]>=97&&str[sp]<=122)
           {
               str[sp]=str[sp]-32;
               //printf("\t %c",str[sp]);
           }
       }
       else if( str[sp]>=65 && str[sp]<=90)
       {
           str[sp]=str[sp]+32;
       }

       /// if sp don't have extra spaces
       else if(str[0]!=32)
       {
          if(str[0]>=97 && str[0]<=122)
          {
               str[0]=str[0]-32;
              // printf("\t %c",str[0]);
          }
       }
       sp++;
   }
   printf("\n\n \t %s \n \n ",str);
   return 0;

}

*/

/// 11.  i/p : hello how are you
///      o/p : olleh woh era uoy

/*
#include<stdio.h>
int main()
{
    char str[70];
    int i,j,t,temp;

    printf("\n Enter any string : ");
    gets(str);

    i=0;

    while(str[i]!='\0')
    {
        for(;str[i]==32;i++);

        for(j=i;str[j+1]!=32&&str[j+1]!=0;j++);

        t=j+1;

        do
        {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
            i++;
            j--;
        }while(i<=j);

        i=t;
    }
    printf("\t %s",str);
    puts(str);

    return 0;
}
*/

///12. WAP to revere the string
/// i/p: hello how are you
/// o/p: uoy era woh olleh
/*

#include<stdio.h>
int main()
{
    char str[60],ch[60];
    int i,top=-1;

    printf("\n enter any string : ");
    gets(str);

    i=0;

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
    printf("\t %s",str);
    return 0;
}

*/

/// 13 WAP to print missing characters from string

/*
#include<stdio.h>
int main()
{
    char str[60];
    int i,j,flg;

    printf("\n Enter any string : ");
    gets(str);

    for(i=97;i<=122;i++)
    {
        flg=0;
        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]==i)
            {
                flg=1;
                break;
            }
        }
        if(flg==0)
        {
            printf("\t %c",i);
        }
    }
    return 0;
}

*/


/// .13 WAP to print frequncy of character

/*

#include<stdio.h>
int main()
{
    char str[60];
    int i,j,cnt;

    printf("\n Enter any string : ");
    gets(str);

    for(i=97;i<=122;i++)
    {
        j=0;
        while(str[j]!='\0')
        {
            if(str[j]==i)
            {
                printf("\t %c",i);
            }
            j++;
        }
    }

///for count of character
    for(i=97;i<=122;i++)
    {
        j=0;
        cnt=0;
        while(str[j]!='\0')
        {
            if(str[j]==i)
            {
                cnt++;
                printf("\t %c %d",i,cnt);
            }
            j++;
        }
        printf("\n");
    }

    return 0;
}

*/

///14. calculate the max word length and print it
/*

#include<stdio.h>
int main()
{
    char str[100],tmp[30];
    int i,j,cnt,max=0;

    printf("\n Enter any string : ");
    gets(str);

    i=0;
    j=0;
    do
    {
        for(i=j;str[i]==32;i++);
        cnt=0;
        for(j=i;str[j]!=32&&str[j]!='\0';j++)
        {
            cnt++;
        }

        printf("\n %d",cnt);

        if(cnt>max)
        {
            max=cnt;
            for(j=0;str[i]!=32&&str[i]!='\0';i++,j++)
            {
                tmp[j]=str[i];
            }
            tmp[j]='\0';
        }

    }while(str[i]!='\0');

    printf("\n Max length  string is : %s \t\t\t and it's count is : %d ",tmp,max);
    return 0;
}

*/

///15.WAP to check whether string is palindrom or not
/*
#include<stdio.h>
int main()
{
    char str[60],arr[60],temp;
    int i,j,flg;

    printf("\n Enter any string : ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        arr[i]=str[i];
    }
    printf("\n %s",arr);

    for(i=0;str[i]!='\0';i++);
    for(i--,j=0;i>=j;i--,j++)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    for(i=0;str[i]!='\0';i++)
    {
        flg=0;
        if(str[i]!=arr[i])
        {
            flg=1;
            break;
        }
    }
    if(flg==0)
    {
        printf("\n string is palindrom");
    }
    else
    {
       printf("\n string is not palindrom");
    }

}
*/


///################# LIST ###################

///1. Compare two strings

/*
#include<stdio.h>
int main()
{
    char str[70],ch[70];
    int i,flg=0;

    printf("\n Enter the first string : ");
    gets(str);

    printf("\n Enter the second string : ");
    gets(ch);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]!=ch[i])
        {
            flg=1;
            break;
        }
    }

    if(flg==0)
    {
        printf("\n Strings are same");
    }
    else
    {
        printf("\n strings are not same");
    }
    return 0;
}

*/

///4.concatenate two strings
/*
#include<stdio.h>
int main()
{
    char str[70],ch[70],s[140];
    int i,j,k;

    printf("\n enter first string : ");
    gets(str);

    printf("\n Enter second string : ");
    gets(ch);

    for(i=0,k=0;str[i]!='\0';i++,k++)
    {
        s[k]=str[i];
    }

    for(j=0,k=k;ch[j]!='\0';j++,k++)
    {
        s[k]=ch[j];
    }

    puts(s);
    return 0;
}

*/
///5.copy first string into string

/*
#include<stdio.h>
int main()
{
    char str[70],ch[70];
    int i;

    printf("\n Enter any string : ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        ch[i]=str[i];
    }

    printf("\n string copy is : %s",ch);
    return 0;
}

*/

///6.count number of vowels in string
///18.C program to count total number of vowels and consonants in a string

/*
#include<stdio.h>
int main()
{
    char str[70];
    int i,j,Vcnt=0,Ccnt=0;

    printf("\n Enter any string : ");
    gets(str);

    for(i=0;str[i]==32;i++); //for unwanted spaces
    for(j=i;str[j]!='\0';j++)
    {
        if(str[j]=='a' || str[j]=='e' || str[j]=='i' || str[j]=='u' || str[j]=='o' )
        {
            Vcnt++;
        }
        else
        {
            Ccnt++;
        }
    }

    printf("\n Number of vowels in string is : %d",Vcnt);
    printf("\n Number of consonant in string is : %d",Ccnt);
    return 0;
}
*/

///7 delete vowels from a string

/*
#include<stdio.h>
int main()
{
    char str[70];
    int  i,j,k;

    printf("\n Enter the string : ");
    gets(str);

    printf("\n Before deleting all vowels stirng is  : ");
    puts(str);

    printf("\n After deleting all vowels stirng is : ");
    for(i=0;str[i]==32;i++);

    for(j=i;str[j]!='\0';j++)
    {
        if(str[j]=='a' || str[j]=='e' || str[j]=='i' || str[j]=='o' || str[j]=='u')
        {
           for(k=j;str[k]!='\0';k++)
           {
               str[k]=str[k+1];
           }
           j--;
        }

    }
    puts(str);
    return 0;
}

*/


///8) C Program to reverse each words in string without reversing the characters
/* i/p :  hello how are you
   o/p :  you are how hello

#include<stdio.h>
int main()
{
    char str[70],ch[70];
    int i,j,t,top=-1,temp;

    printf("\n Enter any string : ");
    gets(str);

    //copy string

    for(i=0;str[i]!='\0';i++)
    {
        top++;
        ch[top]=str[i];
    }

    i=0;
    while(top>=0)
    {
        str[i]=ch[top];
        top--;
        i++;
    }

  //  printf("\n %s",str);

  ///reverse each word

    i=0;
    while(str[i]!='\0')
    {
        for(;str[i]==32;i++);
        for(j=i;str[j+1]!=32&&str[j+1]!='\0';j++);
        t=j+1;

        while(j>=i)
        {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
            j--;
            i++;
        }
        i=t;
    }

    printf("\n %s",str);
    return 0;
}



///9) C Program to check whether string is palindrome or not

/*
#include<stdio.h>
int main()
{
    char str[60],arr[60],temp;
    int i,j,flg;

    printf("\n Enter any string : ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        arr[i]=str[i];
    }
    printf("\n %s",arr);

    for(i=0;str[i]!='\0';i++);
    for(i--,j=0;i>=j;i--,j++)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }

    for(i=0;str[i]!='\0';i++)
    {
        flg=0;
        if(str[i]!=arr[i])
        {
            flg=1;
            break;
        }
    }
    if(flg==0)
    {
        printf("\n string is palindrom");
    }
    else
    {
       printf("\n string is not palindrom");
    }

}
*/

///10) C Program to Converting string from lowercase to uppercase and vice-versa

/*
#include<stdio.h>
int main()
{
    char str[70],ch[70];
    int i;

    printf("\n Enter any string : ");
    gets(str);

    printf("\n Enter any string : ");
    gets(ch);

    //convert lover to upper
    printf("\n Enterd string into upper case : ");
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=97 && str[i]<=122)
        {
            str[i]=str[i]-32;
        }
    }

    puts(str);

    //convert upper to lower
    printf("\n Enterd string into lower case : ");
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>=65 && ch[i]<=90)
        {
            ch[i]=ch[i]+32;
        }
    }
    printf("%s",ch);
    return 0;
}
*/

///11) C Program to Counting the number of words in a given string
/*
#include<stdio.h>
int main()
{
    char str[70];
    int i,j,cnt=0;

    printf("\n Enter any string : ");
    gets(str);

    i=0;
    while(str[i]!='\0')
    {
        for(;str[i]==32;i++);
        for(j=i;str[j+1]!=32&&str[j+1]!=0;j++);
        cnt++;
        i=j+1;
    }
    printf("\n Word count is : %d",cnt);
    return 0;
}

*/

///12.C Program to Counting the number of character in a given string
/*
#include<stdio.h>
int main()
{
    char str[70],i,cnt=0;

    printf("\n Enter any string : ");
    gets(str);
    puts(str);

    ///process
    for(i=0;str[i]!='\0';i++)
    {
        cnt++;
    }

    printf("\n Character count of enterd string is : %d",cnt);
    return 0;
}

*/

///13.C Program to Remove all Characters in a String Except Alphabet
/*
#include<stdio.h>
int main()
{
    char str[70];
    int i,j;

    printf("\n Enter any string : ");
    gets(str);
    puts(str);

    for(i=0;str[i]!='\0';i++)
    {
        if( !( (str[i]>=65&&str[i]<=90) || (str[i]>=97&&str[i]<=122) || (str[i]==32)) )
        {
            printf("\n Numeric character position is %d ",i);
            for(j=i;str[j]!='\0';j++)
            {
                str[j]=str[j+1];
            }
            i--;
        }
    }

    printf("\n");
    puts(str);
}

*/

///14.C Program to arrange the string in alphabetical order

/*
#include<stdio.h>
int main()
{
    char str[70];
    int i,j;

    printf("\n Enter any string : ");
    gets(str);

    printf("\n Display the string : ");
    puts(str);

    ///process

    for(i=97;i<=122;i++)
    {
        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]==i)
            {
                printf("\t %c",str[j]);
                break;
            }
        }
    }

    return 0;
}

*/

///15)17) .C program to count uppercase, lowercase,digits and special characters in string

/*
#include<stdio.h>
int main()
{
    char str[70];
    int Ucnt=0,Lcnt=0,Dcnt=0,Acnt=0,Scnt=0,i;

    printf("\n Enter any string : ");
    gets(str);

    printf("\n Display the string : ");
    puts(str);

    ///process

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
        {
            Ucnt++;
            Acnt++;
        }
        else if(str[i]>=90 && str[i]<=122)
        {
            Lcnt++;
            Acnt++;
        }
        else if(str[i]>=48 && str[i]<=57)
        {
            Dcnt++;
        }
        else
        {
            Scnt++;
        }
    }
    printf("\n Uppercase character count is : %d",Ucnt);
    printf("\n Lowercase character count is : %d",Lcnt);
    printf("\n Alphabet character count is : %d",Acnt);
    printf("\n digit character count is : %d",Dcnt);
    printf("\n special character count is : %d",Scnt);
    return 0;

}
*/


///16. C program to toggle each character in a string
/*
#include<stdio.h>
int main()
{
    char str[70];
    int i;

    printf("\n Enter any string : ");
    gets(str);

    printf("\n Display the string : ");
    puts(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>=65 && str[i]<=90)
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

///17.same like 15
///18.same 6

///19.C program to find the first occurrence of a character in a string
/*
#include<stdio.h>
int main()
{
    char str[70],FO;
    int i,j,cnt=0;

    printf("\n Enter any string : ");
    gets(str);

    printf("\n Display the string : ");
    puts(str);

    ///process

    for(i=0;str[i]==32;i++);
    FO=str[i];
    printf("\n first occurred  character in a string is %c",FO);

    for(j=i;str[j]!='\0';j++)
    {
        if(str[j]==FO)
        {
           cnt++;
        }
    }
    printf("\n Occurence of %c is %d",FO,cnt);
    return 0;
}

*/

///20.C program to find last occurrence of a character in a string
/*
#include<stdio.h>
int main()
{
    char str[70],LO;
    int i,j,cnt=0;

    printf("\n Enter any string : ");
    gets(str);

    printf("\n Display the string : ");
    puts(str);

    ///process

    for(i=0;str[i+1]!='\0';i++);
    LO=str[i];
    printf("\n last occurred  character in a string is %c",LO);

    for(j=0;str[j]!='\0';j++)
    {
        if(str[j]==LO)
        {
           cnt++;
        }
    }
    printf("\n Occurence of %c is %d",LO,cnt);
    return 0;
}
*/


///C program to search all occurrences of a character in a string

/*
#include<stdio.h>
int main()
{
    char str[70];
    int i,j,k,cnt,Ucnt;

    printf("\n Enter the any string : ");
    gets(str);

    printf("\n Display the string : ");
    puts(str);

    for(i=97,k=65;i<=122,k<=90;i++,k++)
    {
        cnt=0;
        Ucnt=0;
        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]==i)
            {
                cnt++;
            }
            else if(str[j]==k)
            {
                Ucnt++;
            }
        }
        if(cnt!=0)
        {
            printf("\n Occurencess of %c in string is : %d",i,cnt);
        }
        else if(Ucnt!=0)
        {
            printf("\n Occurencess of %c in string is : %d",k,Ucnt);
        }

    }
    return 0;
}
*/

///22.C program to find maximum occurring character in a string
/*
#include<stdio.h>
int main()
{
    char str[70],Mchar;
    int i,max=0,Ccnt=0,j;

    printf("\n Enter any string : ");
    gets(str);

    printf("\n Display the string : ");
    puts(str);

    for(i=97;i<=122;i++)
    {
        Ccnt=0;
        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]==i)
            {
                Ccnt++;
            }
        }
        if(Ccnt>max)
        {
            max=Ccnt;
            Mchar=i;
        }
    }

    printf("\n Maximum occured character is %c which Occured %d times",Mchar,max);
    return 0;
}
*/

/// 23)C program to find minimum occurring character in a string
/*
#include<stdio.h>
int main()
{
    char str[70],mchar;
    int i,j,min=0,cnt;

    printf("\n Enter any string : ");
    gets(str);

    printf("\n display the string : ");
    puts(str);

    ///calculate the lenght

    for(i=0;str[i+1]!='\0';i++);
    min=i;

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
        if(cnt<min && cnt!=0)
        {
            min=cnt;
            mchar=i;
        }
    }

    printf("\n%c  %d",mchar,min);

    return 0;
}
*/

///24.C program to remove first occurrence of a character from string
/*
#include<stdio.h>
int main()
{
    char str[70],FO;
    int i,j;

    printf("\n Enter any string : ");
    gets(str);

    printf("\n Display the string: ");
    puts(str);

    for(i=0;str[i]==32;i++);
    FO=str[i];

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==FO)
        {
           for(j=i;str[j]!='\0';j++)
           {
               str[j]=str[j+1];
           }
           i--;
        }

    }
    puts(str);
    return 0;
}

*/

///25.C program to remove last occurrence of a character from the string
/*
#include<stdio.h>
int main()
{
    char str[80],LO;
    int i,j;

    printf("\n Enter any string : ");
    gets(str);

    printf("\n Display the enterd string : ");
    puts(str);

    for(i=0;str[i+1]!='\0';i++);
    LO=str[i];

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==LO)
        {
            for(j=i;str[j]!='\0';j++)
            {
                str[j]=str[j+1];
            }
            i--;
        }
    }
    printf("\n After deleting last occured character string is : \n");
    puts(str);
    return 0;
}
*/


///26) C program to remove all occurrences of a character from the string#
/*
#include<stdio.h>
int main()
{
    char str[60],ch,rep;
    int i,j;

    printf("\n Enter any string : ");
    gets(str);

    printf("\n Enter character that you want to remove : ");
    fflush(stdin);
    scanf("%c",&ch);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            for(j=i;str[j]!='\0';j++)
            {
                str[j]=str[j+1];

            }
            i--;
        }
    }
    puts(str);
}

*/

///27) C program to remove all repeated characters in a string

/*
#include<stdio.h>
int main()
{
    char str[70],s;
    int i,j,k,cnt=0;

    printf("\n Enter any string : ");
    gets(str);

    printf("\n Display the string : ");
    puts(str);

    for(i=97;i<=122;i++)
    {
        cnt=0;
        for(j=0;str[j]!='\0';j++)
        {
            if(str[j]==i)
            {
                cnt++;
                s=i;
            }
        }
        if(cnt>1)
        {
            for(j=0;str[j]!='\0';j++)
            {
                if(str[j]==s)
                {
                    for(k=j;str[k]!='\0';k++)
                    {
                        str[k]=str[k+1];
                    }
                    j--;
                }
            }
        }
    }

    puts(str);
    return 0;
}

*/

///28)C program to replace first occurrence of a character in a string

/*
#include<stdio.h>
int main()
{
    char str[70],ch,c;
    int i;

    printf("\n Enter any string : ");
    gets(str);

    printf("\n Display the string : ");
    puts(str);

    printf("\n Enter the character that you want to replace with first occured character ");
    scanf("%c",&ch);

    for(i=0;str[i]==32;i++);
    c=str[i];

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==c)
        {
            str[i]=ch;
        }
    }

    puts(str);
    return 0;
}
*/

///29.C program to replace last occurrence of a character in a string
/*

#include<stdio.h>
int main()
{
    char str[80],ch,c;
    int i;

    printf("\n Enter any string : ");
    gets(str);

    printf("\n Display the stirng : ");
    puts(str);

    printf("\n Enter the character the you want to replace with last character : ");
    scanf("%c",&ch);

    for(i=0;str[i+1]!='\0';i++);
    c=str[i];

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==c)
        {
            str[i]=ch;
        }
    }

    puts(str);
    return 0;
}
*/

///30.C program to replace all occurrences of a character in a string

/*
#include<stdio.h>
int main()
{
    char str[60],ch,rep;
    int i;

    printf("\n Enter any string : ");
    gets(str);

    printf("\n Enter character that you want to replace : ");
    fflush(stdin);
    scanf("%c",&ch);

    printf("\n Enter the character that you want replace with :  ");
    fflush(stdin);
    scanf("%c",&rep);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            str[i]=rep;
        }
    }
    puts(str);
}
*/
///31) C program to remove spaces and blanks from a string

#include<stdio.h>
int main()
{
    char str[60];
    int i,j;

    printf("\n Enter any string : ");
    gets(str);

    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==32)
        {
            for(j=i;str[j]!='\0';j++)
            {
                str[j]=str[j+1];
            }
            i--;
        }
    }
    puts(str);
    return 0;
}





