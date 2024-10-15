///// ************************** CHARACTER STRING ARRAY
//#include<stdio.h>
//int main()
//{
//	int i;
//	char str[50]={'h','e','l','l','o',' ','a','l','l','\0'};
//	// '\0' call null character, and it will indicates the termination
//
//	// display using %s format specifier
//	printf("\n Entered String is: %s",str);
//
////	// using puts() function
//	printf("\n Again same string: ");
//	puts(str);
//
//	// chatacter by character access
//	printf("\n Again character by character access: ");
//	for(i=0;str[i]!='\0';i++)
//	{
//		printf("%c",str[i]);
//	}
//	return 0;
//}
//
//
///// WAP TO INPUT AND DISPLAY STRING
//#include<stdio.h>
//    int main()
//    {
//        char str[50];
//        printf("\n Enter character string");
//        gets(str);
//        puts(str);
//        //printf("\n String is :%s",str);
//        return 0;
//    }
//
/////
//#include<stdio.h>
//    int main()
//    {
//        char str[30];
//        printf("\n Enter the String: ");
//        scanf("%[^\n]",&str);
//        printf("\n The string is: %s",str);
//        return 0;
//    }
//
///// WAP TO CNT THE VOWELS IN STRING OR CHARACTER SET
//#include<stdio.h>
//    int main()
//    {
//        int i,cnt=0;
//        char ch[50];
//        printf("\n Enter the string");
//        gets(ch);
//        for(i=0;ch[i]!='\0';i++)
//        {
//            if((ch[i]=='a'||ch[i]=='A')||(ch[i]=='e'||ch[i]=='E')||(ch[i]=='i'||ch[i]=='I')||(ch[i]=='o'||ch[i]=='O')||(ch[i]=='u'||ch[i]=='U'))
//            {
//                cnt++;
//            }
//        }
//       // printf("\n Entered string is %s",ch);
//       puts(ch);
//        printf("\n Count of vowel is %d",cnt);
//        return 0;
//    }
//
///// 11.convert the entered string into uppercase
//#include<stdio.h>
//    int main()
//    {
//        int i;
//        char ch[50];
//        printf("\n Enter string in lower case");
//        gets(ch);
//        for(i=0;ch[i]!='\0';i++)
//        {
//            if(ch[i]>=97 && ch[i]<=122)
//            {
//                ch[i]=ch[i]-32;
//            }
//        }
//        puts(ch);
//        return 0;
//    }
//
//
///// Demostrate reverse copy, reverse display and reverse string at same location
//#include<stdio.h>
//    int main()
//    {
//        int i,top;
//        char ch[50],t[50],ch1[50];
//        printf("\n Enter string");
//        gets(ch);
//        printf("\n Entered string is ");
//        puts(ch);
//        top=-1;
//        i=0;
//        while(ch[i]!='\0')
//        {
//            ++top;
//            t[top]=ch[i];
//            i++;
//        }
//        i=0;
//        while(ch[i]!='\0')
//        {
//            ch[i]=t[top];
//            ch1[i]=ch[i];
//            top--;
//            i++;
//
//        }
//        ch1[i]='\0';
//        printf("\n Reverse array ");
//        puts(ch);
//        printf("\n Reverse copy in another array");
//        printf(" %s",ch1);
////      puts(ch1);
//        return 0;
//
//    }
//
//============================================================================================
/////12. WAP TO COUNT WORDS FROM STRING
//#include<stdio.h>
//    int main()
//    {
//        int i,cnt=0;
//        char str[50];
//        printf("\n Enter any string");
//        gets(str);
//        for(i=0;str[i]!='\0';i++)
//        {
//            if(str[i]==32)
//            {
//                cnt++;
//            }
//        }
//        printf("\n Count of words is %d",cnt+1);
//        return 0;
//    }
//
/////----12.WAP TO FIND COUNT OF WORDS HAVING MULTIPLE SPACES
//#include<stdio.h>
//    int main()
//    {
//        int i,sp,ep,cnt=0;
//        char str[50];
//        printf("\n Enter any string");
//        gets(str);
//        // calc starting point
//        for(i=0;str[i]==32;i++);
//        sp=i;
//       //calc length
//        for(i=0;str[i]!='\0';i++);
//        // calculate ending point
//        for(i--;str[i]==32;i--);
//        ep=i;
//
//        while(sp<=ep)
//        {
//            if(str[sp]==32 && str[sp+1]!=32)
//            {
//                cnt++;
//            }
//            sp++;
//        }
//        printf("\n Count is %d",cnt+1);
//        return 0;
//    }
//
/////  ---------- WAP TO  FIND FIRST LETTER OF EACH WORD IN A STRING HAVING MULTIPLE SPACES
//#include<stdio.h>
//    int main()
//    {
//        int i,sp,ep;
//        char str[50];
//        printf("\n Enter any string");
//        gets(str);
//        // calc starting point
//        for(i=0;str[i]==32;i++);
//        sp=i;
//        // calc length of string
//        for(i=0;str[i]!='\0';i++);
//        // calc ending point
//        for(i--;str[i]==32;i--);
//        ep=i;
//        while(sp<=ep)
//        {
//            if(str[sp]!=32 && str[sp-1]==32)
//            {
//                printf("%c",str[sp]);
//            }
//            sp++;
//        }
//        return 0;
//    }
//
///// -----  WAP TO  CONVERT ENTERED STRING INTO TITLE CASE
//#include<stdio.h>
//    int main()
//    {
//        int i,sp,ep;
//        char str[50];
//        printf("\n Enter any string");
//        gets(str);
//        //calc starting point
//        for(i=0;str[i]==32;i++);
//        sp=i;
//        // calc length
//        for(i=0;str[i]!='\0';i++);
//        //calc endpoint
//        for(i--;str[i]==32;i--);
//        ep=i;
//        // process
//        while(sp<=ep)
//        {
//            if(str[sp]!=32 && str[sp-1]==32)
//            {
//                if(str[sp]>=97 && str[sp]<=122)
//                {
//                    str[sp]= str[sp]-32;
//                }
//            }
//            else if(str[sp]>=65 && str[sp]<=90)
//            {
//                str[sp] = str[sp]+32;
//            }
//            if(str[0]!=32 && (str[0]>=97 && str[0]<=122))
//            {
//                str[0]=str[0]-32;
//            }
//            sp++;
//        }
//        puts(str);
//        return 0;
//    }
//
//
///// 1.WAP TO COUNT LENGTH OF string
//#include<stdio.h>
//    int main()
//    {
//        int i,cnt=0;
//        char str[50];
//        printf("\n Enter any string");
//        gets(str);
//        for(i=0;str[i]!='\0';i++)
//        {
//            cnt++;
//        }
//        printf("\n Count is %d",cnt);
//        return 0;
//    }
//
///// 2. WAP TO COMPARE TWO STRINGS
//#include<stdio.h>
//    int main()
//    {
//        int i,flg=0;
//        char str1[50],str2[50];
//        printf("\n Enter first string");
//        gets(str1);
//        printf("\n Enter second string");
//        gets(str2);
//
//        for(i=0;str1[i]!='\0'&& str2[i]!='\0';i++)
//        {
//            if(str1[i]!=str2[i])
//            {
//                flg=1;
//                break;
//            }
//
//        }
//        if(flg==0)
//        {
//            printf("\n Two Strings are same");
//        }
//        else
//        {
//            printf("\n Two Strings are different");
//        }
//        return 0;
//
//    }
//
//
///// COMPARE TWO STRINGS HAVING  DIFFERENT MULTIPLE SPACES
//#include<stdio.h>
//    int main()
//    {
//        int i,flg=0,sp1,ep1,sp2,ep2;
//        char str1[50],str2[50];
//        printf("\n Enter first string");
//        gets(str1);
//        printf("\n Enter second string");
//        gets(str2);
//        // calc starting point of sp1
//        for(i=0;str1[i]==32;i++);
//        sp1=i;
//        // cal length of str1
//        for(i=0;str1[i]!='\0';i++);
//
//        // calc ending point of ep1
//        for(i--;str1[i]==32;i--);
//        ep1=i;
//
//        // calc starting point of sp2
//        for(i=0;str2[i]==32;i++);
//        sp2=i;
//        // cal length of str2
//        for(i=0;str2[i]!='\0';i++);
//
//        // calc ending point of ep2
//        for(i--;str2[i]==32;i--);
//        ep2=i;
//        while(sp1<=ep1 && sp2<=ep2)
//        {
//            for(i=0;str1[i]!='\0'&& str2[i]!='\0';i++)
//            {
//                if(str1[sp1]!=str2[sp2])
//                {
//                    flg=1;
//                    break;
//                }
//
//            }
//            sp1++;
//            sp2++;
//        }
//
//        if(flg==0)
//        {
//            printf("\n Two Strings are same");
//        }
//        else
//        {
//            printf("\n Two Strings are different");
//        }
//        return 0;
//
//    }
//
///// 3.WAP TO REVERSE STRING USING TEMP T ARRAY
//#include<stdio.h>
//    int main()
//    {
//        int i,top;
//        char str[50],t[50];
//        printf("\n Enter any String");
//        gets(str);
//        puts(str);
//        top=-1;
//        i=0;
//        //insert
//        while(str[i]!='\0')
//        {
//            ++top;
//            t[top]=str[i];
//            i++;
//        }
//        //extract
//        i=0;
//        while(str[i]!='\0')
//        {
//            str[i]=t[top];
//            top--;
//            i++;
//        }
//        printf("\n Reverse String :%s",str);
//        return 0;
//    }
//
///// REVERSE ANY STRING USING SWAPPING
//#include<stdio.h>
//    int main()
//    {
//        int i,j,tmp;
//        char ch[50];
//        printf("\n Enter any string:- ");
//        gets(ch);
//
//        /// For Length
//        for(i=0;ch[i]!='\0';i++);
//
//        /// For Revers
//        for(j=0,i--;i>=j;j++,i--)
//        {
//            tmp=ch[i];
//            ch[i]=ch[j];
//            ch[j]=tmp;
//        }
//        puts(ch);
//        return 0;
//
//    }
//
///// 4.WAP TO FIND FREQUENCY OF CHARACTERS
//#include<stdio.h>
//int main()
//{
//    int i,j,cnt=0;
//    char str[50],ch;
//    printf("\n Enter any character");
//    gets(str);
//    for(i=0; str[i]!='\0'; i++)
//    {
//        if(str[i]!=-1)
//        {
//            cnt=0;
//            ch= str[i];
//            for(j=0; str[j]!='\0'; j++)
//            {
//                if(str[j]==ch)
//                {
//                    str[j]=-1;
//                    cnt++;
//                }
//            }
//            printf("\n Frequency is %d of character %c",cnt,ch);
//        }
//    }
//    return 0;
//}
//
///// 5.C Program to concatenate two string
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        char str1[50],str2[50];
//        printf("\n Enter first string");
//        gets(str1);
//        printf("\n Enter second string");
//        gets(str2);
//
//        for(i=0;str1[i]!='\0';i++);
//
//    }
//
/////------ WAP TO CNVER EVERY WORD OF FIRST AND LAST  LETTER IS CAPITAL IN A ENTERED STRING
///        input hello how are you
///       OUTPUT HellO HoW ArE YoU
//#include<stdio.h>
//    int main()
//    {
//        int i,sp,ep;
//        char str[50];
//        printf("\n Enter any string");
//        gets(str);
//        //sp
//        for(i=0;str[i]==32;i++);
//        sp=i;
//        //length
//        for(i=0;str[i]!='\0';i++);
//        //ep
//        for(i--;str[i]==32;i--);
//        ep=i;
//        //process
//        while(sp<=ep)
//        {
//            if((str[sp]!=32 && str[sp-1]==32)||(str[sp]!=32 && (str[sp+1]==32 || str[sp+1]==0)))
//            {
//                if(str[sp]>=97 && str[sp]<=122)
//                {
//                    str[sp] = str[sp]-32;
//                }
//            }
//            else if(str[sp]>=65 && str[sp]<=90)
//            {
//                str[sp] = str[sp]+32;
//            }
//            if(str[0]!=32 && (str[0]>=97 && str[0]<=122))
//            {
//                str[0] = str[0]-32;
//            }
//            sp++;
//        }
//        puts(str);
//        return 0;
//    }
//
/////------    WAP TO REVERSE FIRST FIRST AND LAST LETTER OF WORD IN ENTERED STRING
//#include<stdio.h>
//    int main()
//    {
//        int i,j,tmp;
//        char str[100];
//        printf("\n Enter any string");
//        gets(str);
//        i=0;
//        while(str[i]!='\0')
//        {
//            for( ;str[i]==32;i++);
//            for(j=i;(str[j]!=32 && str[j]!='\0');j++);
//            tmp=str[i];
//            str[i]=str[j-1];
//            str[j-1]=tmp;
//            i=j;
//        }
//        puts(str);
//        return 0;
//    }
//
/////---9. WAP TO REVERSE EVERY WORD OF LETTER IN REVERSE ORDER
//#include<stdio.h>
//    int main()
//    {
//        int i,j,tmp;
//        char str[100];
//        printf("\n Enter any string");
//        gets(str);
//        i=0;
//        while(str[i]!='\0')
//        {
//            for( ;str[i]==32;i++);
//            for(j=i;(str[j]!=32 && str[j]!='\0');j++);
//            tmp=str[i];
//            str[i]=str[j-1];
//            str[j-1]=tmp;
//            i=j;
//        }
//        puts(str);
//        return 0;
//    }
//
///// 5.Program to concatenate two string
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        char str1[50],str2[50];
//        printf("\n Enter first string");
//        gets(str1);
//        printf("\n Enter second string");
//        gets(str2);
//
//        for(i=0;str1[i]!='\0';i++);
//        str1[i++]=' ';
//        for(j=0;str2[j]!='\0';j++)
//        {
//            str1[i]=str2[j];
//            i++;
//        }
//
//        str1[i]='\0';
//        puts(str1);
//        return 0;
//    }
//
///// 8.WAP TO DELETE VOWELS FROM STRING
//#include<stdio.h>
//    int main()
//    {
//       int i,j;
//       char ch[50];
//       printf("\n Enter any string");
//       gets(ch);
//       //process
//
//       for(i=0,j=0;ch[i]!='\0';i++)
//       {
//        if(!(ch[i]=='a'||ch[i]=='A'||ch[i]=='e'||ch[i]=='E'||ch[i]=='i'||ch[i]=='I'||ch[i]=='o'||ch[i]=='O'||ch[i]=='u'||ch[i]=='U'))
//        {
//          ch[j]=ch[i];
//          j++;
//        }
//
//       }
//       ch[j]='\0';
//       puts(ch);
//       return 0;
//    }
//
///// 10. WAP to check whether string is palindrome or not
//#include<stdio.h>
//    int main()
//    {
//        int i,j,flg=0;
//        char str[50];
//        printf("\n Enter any string");
//        gets(str);
//        for(i=0;str[i]!='\0';i++);
//        printf("\n %d",i);
//        for(i--,j=0;i>=j;j++,i--)
//        {
//            if(str[j]!=str[i])
//            {
//
//                flg=1;
//                break;
//            }
//        }
//
//        if(flg==0)
//        {
//            printf("\n palindrome %s",str);
//        }
//        else
//        {
//            printf("\n Not palindrome %s",str);
//        }
//
//
//        return 0;
//    }
//
//
///// 32. WAP TO REMOVE SPACES FROM string
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        char str[50];
//        printf("\n Enter any string");
//        gets(str);
//        for(i=0,j=0;str[i]!='\0';i++)
//        {
//            if(!(str[i]==32))
//            {
//                str[j]=str[i];
//                j++;
//            }
//        }
//        str[j]='\0';
//        puts(str);
//        return 0;
//    }
//
///// 34. WAP TO CALCULATE FREQUENCY OF VOWLES IN STRING
//#include<stdio.h>
//int main()
//{
//    int i,j,cnt=0;
//    char str[50],ch;
//    printf("\n Enter any character");
//    gets(str);
//    for(i=0; str[i]!='\0'; i++)
//    {
//        if(str[i]!=-1)
//        {
//            cnt=0;
//            ch= (str[i]);
//            for(j=0; str[j]!='\0'; j++)
//            {
//                if(ch[i]=='a'||ch[i]=='A'||ch[i]=='e'||ch[i]=='E'||ch[i]=='i'||ch[i]=='I'||ch[i]=='o'||ch[i]=='O'||ch[i]=='u'||ch[i]=='U')
//                {
//                    str[j]=-1;
//                    cnt++;
//                }
//            }
//            printf("\n Frequency is %d of character %c",cnt,ch);
//        }
//    }
//    return 0;
//}
//
/////14.C Program to Remove all Characters in a String Except Alphabet
//
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        char str[50];
//        printf("\n Enter any string");
//        gets(str);
//        for(i=0,j=0;str[i]!='\0';i++)
//        {
//            if(((str[i]>=97 && str[i]<=122)||(str[i]>=65 && str[i]<=90)))
//            {
//                str[j]=str[i];
//                j++;
//            }
//        }
//        str[j]='\0';
//        puts(str);
//        return 0;
//
//
/////16.C program to count uppercase, lowercase and special characters in
///string
//#include<stdio.h>
//    int main()
//    {
//        int i,ucnt=0,lcnt=0,spcnt=0;
//        char str[50];
//        printf("\n Enter any string");
//        gets(str);
//        for(i=0;str[i]!='\0';i++)
//        {
//            if(str[i]>=97 && str[i<=122])
//            {
//                lcnt++;
//            }
//            else if (str[i]>=65 && str[i]<=90)
//            {
//                ucnt++;
//            }
//            else
//            {
//                spcnt++;
//            }
//        }
//        printf("\n Count of Uppercase is %d",ucnt);
//        printf("\n Count of Lowercase is %d",lcnt);
//        printf("\n Count of Specialcase is %d",spcnt);
//        return 0;
//    }
//
///// 15.WAP TO ARRANGE STRING IN ALPHABETICAL ORDER
//#include<stdio.h>
//    int main()
//    {
//        int i,j;
//        char str[50],tmp;
//        printf("\n Enter any string");
//        gets(str);
//        // sorting
//        for(i=0;str[i]!=0;i++)
//        {
//            for(j=0;str[j]!='\0';j++)
//            {
//                if(str[i]<str[j])
//                {
//                    tmp=str[i];
//                    str[i]=str[j];
//                    str[j]=tmp;
//                }
//            }
//        }
//        puts(str);
//        return 0;
//    }
//
/////17. WAP PRG TOGGLE EACH CHARACTER IN A STRING
//#include<stdio.h>
//    int main()
//    {
//        int i;
//        char str[50];
//        printf("\n Enter any string");
//        gets(str);
//        // process
//        for(i=0;str[i]!='\0';i++)
//        {
//            if(str[i]>=97 && str[i]<=122)
//            {
//                str[i]=str[i]-32;
//            }
//            else if(str[i]>=65 && str[i]<=90)
//            {
//                str[i]=str[i]+32;
//            }
//        }
//        puts(str);
//        return 0;
//    }
//
///// 19.WAP TO CALC TOTAL NUMBER OF VOWELS AND CONSONENT IN A STRING
//#include<stdio.h>
//    int main()
//    {
//        int i,vcnt=0,cnt=0;
//        char str[50];
//        printf("\n Enter any string");
//        gets(str);
//        for(i=0;str[i]!='\0';i++)
//        {
//            if((str[i]>=97&& str[i]<=122) || (str[i]>=65 && str[i]<=90))
//            {
//                if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
//                {
//                    vcnt++;
//                }
//                else
//                {
//                    cnt++;
//                }
//            }
//        }
//        printf("\n Count of vowel %d",vcnt);
//        printf("\n Count of consonant %d",cnt);
//        return 0;
//    }
//
///// 23.WAP TO MAXIMUM OCCURING CHARACTER IN A STRING
//#include<stdio.h>
//int main()
//{
//    int i,j,cnt=0,mocrnt=0;
//    char str[50],ch,moch;
//    printf("\n Enter any character");
//    gets(str);
//    for(i=0; str[i]!='\0'; i++)
//    {
//        if(str[i]!=-1)
//        {
//            cnt=0;
//            ch= str[i];
//            for(j=0; str[j]!='\0'; j++)
//            {
//                if(str[j]==ch)
//                {
//                    str[j]=-1;
//                    cnt++;
//                }
//            }
//            printf("\n Frequency is %d of character %c",cnt,ch);
//            if(cnt>mocrnt)
//            {
//                mocrnt=cnt;
//                moch=ch;
//            }
//        }
//    }
//    printf("\n Most occuring character in a string is %c and %d times",moch,mocrnt);
//    return 0;
//}
//
///// 24. WAP TO FIND MINIMUM OCCURANCE CHARACTER IN STRING
//#include<stdio.h>
//int main()
//{
//    int i,j,cnt=0,locrnt=50;
//    char str[50],ch,loch;
//    printf("\n Enter any character");
//    gets(str);
//    for(i=0; str[i]!='\0'; i++)
//    {
//        if(str[i]!=-1)
//        {
//            cnt=0;
//            ch= str[i];
//            for(j=0; str[j]!='\0'; j++)
//            {
//                if(str[j]==ch)
//                {
//                    str[j]=-1;
//                    cnt++;
//                }
//            }
//            printf("\n Frequency is %d of character %c",cnt,ch);
//            if(cnt<locrnt)
//            {
//                locrnt=cnt;
//                loch=ch;
//            }
//        }
//    }
//    printf("\n least occuring character in a string is %c and %d times",loch,locrnt);
//    return 0;
//}
//
///// 34. WAP TO DISPLAY REVERSE AND LENGTH OF STRING
//#include<stdio.h>
//    int main()
//    {
//        int i,j,len=0;
//        char str[50],tmp;
//        printf("\n Enter any string");
//        gets(str);
//        for(i=0;str[i]!='\0';i++)
//        {
//            len++;
//        }
//        printf("\n length is: %d",len);
//        for(i--,j=0;i>=j;j++,i--)
//        {
//            tmp=str[i];
//            str[i]=str[j];
//            str[j]=tmp;
//        }
//        printf("\n Reverse string is: %s",str);
//        return 0;
//    }
//

/// 6. WAP TO COPY FIRST STRING IN TO SECOND STRING
//#include<stdio.h>
//int main()
//{
//    char str1[100],str2[100];
//    int i;
//    printf("\n Enter first string: ");
//    gets(str1);
//
//    for(i=0;str1[i]!='\0';i++)
//    {
//        str2[i]=str1[i];
//    }
//
//    printf("\n second string: ");
//    puts(str2);
//    return 0;
//}

/// 13.C Program to Counting the number of character in a given string
//#include<stdio.h>
//int main()
//{
//    char str[100];
//    int i,cnt=0;
//
//    printf("\n Enter any string: ");
//    gets(str);
//
//    for(i=0;str[i]!='\0';i++)
//    {
//        cnt++;
//    }
//    printf("\n Count: %d",cnt);
//    return 0;
//
//}

///18.C program to find number of alphabets, digits or special characters in
///a string
//#include<stdio.h>
//int main()
//{
//    char str[100];
//    int i,acnt=0,dcnt=0,scnt=0;
//
//    printf("\n Enter any string: ");
//    gets(str);
//
//    for(i=0;str[i]!='\0';i++)
//    {
//        if((str[i]>=65 && str[i]<=90)|| (str[i]>=97 && str[i]<=122))
//        {
//           acnt++;
//        }
//        if(str[i]>='0' && str[i]<='9')
//        {
//            dcnt++;
//        }
//        if(!(str[i]>=65 && str[i]<=90)|| (str[i]>=97 && str[i]<=122))
//        {
//            if(!(str[i]>='0' && str[i]<='9'))
//            {
//                scnt++;
//            }
//
//        }
//
//    }
//    printf("\n Count of alphabets: %d",acnt);
//    printf("\n Count of digits: %d",dcnt);
//    printf("\n Count of special symbols: %d",scnt);
//
//    return 0;
//
//}

/// REMAINING PROGRAMS **************
///20.C program to find the first occurrence of a character in a string
///21.C program to find last occurrence of a character in a string
///25.C program to remove first occurrence of a character from string
///26.C program to remove last occurrence of a character from the string
//27.C program to remove all occurrences of a character from the string
//28.C program to remove all repeated characters in a string
//29.C program to replace first occurrence of a character in a string
//30.C program to replace last occurrence of a character in a string
//31.C program to replace all occurrences of a character in a string

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 1000
#define MAX_WORD_LENGTH 100

int main() {
    char text[] = "This is a test. This test is only a test.";
    char words[MAX_WORDS][MAX_WORD_LENGTH];
    int count[MAX_WORDS] = {0};
    char mostFrequentWord[MAX_WORD_LENGTH] = "";
    int wordCount = 0;

    // Convert the text to lowercase
    for (int i = 0; text[i]; i++) {
        text[i] = tolower(text[i]);
    }

    // Split the text into words
    int len = strlen(text);
    int wordStart = 0;
    for (int i = 0; i <= len; i++) {
        if (!isalpha(text[i])) {
            if (i > wordStart) {
                strncpy(words[wordCount], text + wordStart, i - wordStart);
                words[wordCount][i - wordStart] = '\0';
                wordCount++;
            }
            wordStart = i + 1;
        }
    }

    // Count the occurrences of each word
    for (int i = 0; i < wordCount; i++) {
        for (int j = 0; j < wordCount; j++) {
            if (strcmp(words[i], words[j]) == 0) {
                count[i]++;
            }
        }
    }

    // Find the most frequent word
    int maxCount = 0;
    for (int i = 0; i < wordCount; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            strcpy(mostFrequentWord, words[i]);
        }
    }

    // Print the result
    printf("The most frequent word is '%s'.\n", mostFrequentWord);

    return 0;
}

