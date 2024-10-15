/*****************************************  CHARACTER ARRAY / STRING  ****************************************/
/** displaying character array */
//  #include<stdio.h>
//  int main()
//{
//    char arr[40] = {'a','b','c','d','e','f','g','\0'};
//    char ar[40]="hello";
//    int i;
//                                   /// 1st method for printing
//    for(i=0;arr[i]!='\0';i++)
//    {
//        printf("%c",arr[i]);
//    }
//     printf("\n");
//
//    for(i=0;ar[i]!='\0';i++)
//    {
//        printf("%c",ar[i]);
//    }
//return 0;
//}
//======================================================================================================================================
// #include<stdio.h>
// int main()
// {
//     char arr[40]={'a','b','c','d','e','f','\0'};
//     char ar[40]="hello how are you ?";
//
//                             // 2 nd method using format specifier
//     printf("%s",arr);
//     printf("\n");
//     printf("%s",ar);
// return 0;
// }
//======================================================================================================================================
// #include<stdio.h>
// int main()
//{
//    char arr[40]={'a','b','c','d','e','f','\0'};
//    char ar[40]="my name is my name is";
//                           // 3 rd method in build function
//    puts(arr);
//    printf("\n");
//    puts(ar);
//return 0;
//}
//======================================================================================================================================
/** diffrent methods to input character array  */

//  #include<stdio.h>
//  int main()
//{
//  char arr[40];
//
//  for(i=0;  ??????;  i++)
//  {
//      scanf("%c",&arr[i]);
//                                                  // condition can not defined
//  }
//return 0;
//}
//======================================================================================================================================

// #include<stdio.h>
// int main()
//{
//    char arr[40];
//    printf("\n Input The Array");

//    scanf("%s",&arr);                      // %s format specifier method space is problem
//    printf("%s",arr);
// return 0;
//}
//======================================================================================================================================

//  #include<stdio.h>
//  int main()
// {
//     char arr[40];
//     printf("\n Input The Array ");
//                                       //  "%[^\n]";
//     scanf("%[^\n]",&arr);
//     printf("%s",arr);
//return 0;
//
// }
//======================================================================================================================================

// #include<stdio.h>
// int main()
//{
//    char arr[40];
//    printf("\n Input The Array");
//                                       // gets
//    gets(arr);
//
//    printf("\n %s",arr);
//    printf("\n");
//    puts(arr);
//
//return 0;
//}
//======================================================================================================================================

// #include<stdio.h>
// int main()
//{
//    char arr[40];
//    printf("\n Input The Array :");
//
//    gets(arr);
//    printf("%s",arr);
//
//    printf("\n");
//    puts(arr);
//return 0;
//}
//======================================================================================================================================
///  WAP to find the length of string (number of characters in it)

// #include<stdio.h>
// int main()
//{
//    char str[40];
//    int i,cnt=0;
//
//    printf("\n Enter Any String :");
//    gets(str);
//
//    i=0;
//    while(str[i]!='\0')
//    {
//       cnt++;
//
//    i++;
//    }
//    printf("\n string is %s",str);
//    printf("\n Number Of Character In It %d",cnt);
// return 0;
//}
//======================================================================================================================================
/**  same program without using count variable  */

// #include<stdio.h>
// int main()
//{
//    char str[40];
//    int i;
//    printf("\n Enter Any String :");
//    gets(str);
//
//    i=0;
//    while(str[i]!='\0')
//    {
//        i++;
//    }
//
//    printf("\n String Is %s",str);
//    printf("\n Number Of Character In It %d",i);
// return 0;
//
//}
//======================================================================================================================================
/**  WAP to convert string into UPPER CASE */

// #include<stdio.h>
// int main()
//{
//    char str[40];
//    int i;
//
//    printf("\n Enter Any String :");
//    gets(str);
//
//    i=0;
//    while(str[i]!='\0')
//    {
//        if(str[i]>=97 && str[i]<=122)
//        {
//            str[i]=str[i]-32;
//        }
//    i++;
//    }
//
//    puts(str);
// return 0;
//}
//======================================================================================================================================
/** reverse copy, reverse at same location
        str 0  1  2  3  4   5
           [h][e][l][l][o][\0][][][][][][][][][][][]

          t 0  1  2  3  4   5
           [h][e][l][l][o][\0][][][][][][][][][][][]


         ch 0  1  2  3  4   5
           [o][l][l][e][h][\0][][][][][][][][][][][]

*/

//  int main()
//{
//    char str[40],c[40],ch[40];
//    int i,j;
//
//    printf("\n Enter Any String :");
//
//    gets(str);
//                              // copying String
//    for(i=0;str[i]!='\0';i++)
//    {
//        c[i]=str[i];
//    }
//    c[i]='\0';
//                             // reversing String
//    for(i--,j=0;i>=0;j++,i--)
//    {
//        ch[j]=str[i];
//    }
//    ch[j]='\0';
//
//    printf("\n Orginal Array :%s",str);
//    printf("\n Copied Array :%s",c);
//    printf("\n Reversed Array :%s",ch);
//
//    return 0;
//}
//======================================================================================================================================
/** WAP to enter the string and reverse at same location */

// #include<stdio.h>
// int main()
//{
//    char str[40],tmp;
//    int i,j;
//
//    printf("\n enter the any string : ");
//    gets(str);
//
//    printf("\n Orginal String is %s",str);
//
//    for(j=0; str[j]!='\0';j++);
//
//    for(i=0,j--; j>=i; i++,j--)
//    {
//        tmp=str[i];
//        str[i]=str[j];
//        str[j]=tmp;
//        getch();       // getch() is required for turbo c
//    }
//
//    printf("\n string is %s",str);
//
//return 0;
//
//}
//======================================================================================================================================
/** Same program using the stack (Application of stack) */

// using for loop

// #include<stdio.h>
// int main()
//{
//    char str[40],stack[40];
//    int i,top=-1;
//
//    printf("\n Enter The String :");
//    gets(str);
//
//    printf("\n String Before Processing : %s",str);
//
//    for(i=0;str[i]!='\0';i++)
//    {
//        top++;
//        stack[top]=str[i];
//    }
//
//    for(i=0; top>=0;top--, i++)
//    {
//        str[i]=stack[top];
//    }
//    printf("\n String After Processing %s",str);
//
//return 0;
//
//}
//======================================================================================================================================
/** USING WHILE LOOP  */

// #include<stdio.h>
// int main()
//{
//    char str[50],stack[50];
//    int i,j,top;
//
//    printf("\n Enter Any String :");
//    gets(str);
//
//    printf("\n String Before Processing : %s",str);
//
//    top=-1;
//    i=0;
//    while(str[i]!='\0')
//    {
//        top++;
//        stack[top]=str[i];
//    i++;
//    }
//
//    i=0;
//    while(top>=0)
//    {
//        str[i]=stack[top];
//        top--;
//   i++;
//    }
//    printf("\n String After Processing : %s",str);
//
//return 0;
//
//}
//======================================================================================================================================
/// WAP to enter the string without unwanted spaces and find the word count

// #include<stdio.h>
// int main()
//{
//    char str[50];
//    int i,cnt=0;
//
//    printf("\n Enter Any String :");
//    gets(str);
//
//    for(i=0; str[i]!='\0';i++)
//    {
//        if(str[i]==32)
//        {
//            cnt++;
//        }
//    }
//
//    printf("\n Word Count Is %d",cnt+1);
//
//return 0;
//}
//======================================================================================================================================
/// WAP to enter the string with unwanted spaces and find the word count
//
// #include<stdio.h>
// int main()
//{
//    char str[50];
//    int i,sp,ep,cnt;
//
//    printf("\n Enter The String :");
//    gets(str);
//
//
////     finding starting point
//
//    for(i=0; str[i]==32; i++);
//    sp=i;
//
//    printf("\n SP is %d",sp);
//
////     finding total count
//
//    for(i=0; str[i]!='\0'; i++);
//
//  //   finding character end point
//
//        for(i--; str[i]==32; i--);
//
//        ep=i;
//
//    printf("\n EP is %d",ep);
//
//    cnt=0;
//    while(sp<=ep)
//    {
//        if(str[sp]!=32 && (str[sp+1]==32 || str[sp+1]==0))
//        {
//            cnt++;
//        }
//    sp++;
//    }
//
//    printf("\n String is :%s",str);
//    printf("\n Word Count is %d",cnt);
//
// return 0;
//
//}

//======================================================================================================================================
/** WAP to enter the string and find the 1st character of each word  */

 #include<stdio.h>
 int main()
{
    char str[50];
    int sp,ep,i,j;

    printf("\n Enter Any String :");
    gets(str);

    for(i=0; str[i]==32; i++);
    sp=i;

    for(i=0; str[i]!='\0'; i++);

    for(i--; j=0; str[j]==32; j++,i--);
    ep=i;






}































//======================================================================================================================================
///  WAP to enter any string and 1 st and last character of each word and convert it into UPPER case and print it

// #include<stdio.h>
// int main()
//{
//    char str[50];
//    int i,sp,ep;
//
//    printf("\n Enter Any String :");
//    gets(str);
//
//    // finding starting point of string
//
//    for(i=0;str[i]==32;i++);
//    sp=i;
//
//   // finding ending point of string
//
//   for(i=0;str[i]!='\0';i++);
//
//   for(i--;str[i]==32;i--);
//   ep=i;
//
//// _ _ _ HELLO _ GOOD_MORNING_TO_ALL_OF_YOU_ _ _
//
//   while(sp<=ep)
//   {
//       if((str[sp-1]==32 && str[sp]!=32) || (str[sp]!=32 && (str[sp+1]==32 || str[sp+1]==0)))
//       {
//           // here we are checking if 1st and last character of each word is lower case if yes
//           // then converting into upper case
//
//           if(str[sp]>=97 && str[sp]<=122)
//           {
//               str[sp]=str[sp]-32;
//           }
//       }
//
//  sp++;
//   }
//   if(str[0]!=32)
//   {
//       if(str[0]>=97 && str[0]<=122)
//       {
//           str[0]=str[0]-32;
//       }
//   }
//
//
//      printf("\n %s",str);
//
// return 0;
//
//}
//======================================================================================================================================
/// WAP to enter any string and swap the first and last character of each word of string

// #include<stdio.h>
// int main()
//{
//    char str[50],tmp;
//    int i,j;
//
//    printf("\n Enter Any String :");
//    gets(str);
//
////   _ _ _ HELLO _ GOOD_MORNING_TO_ALL_OF_YOU_ _ _
//
//    i=0;
//    while(str[i]!='\0')
//    {
//        for(;str[i]==32;i++);
//        for(j=i;(str[j]!=32 && str[j]!='\0');j++);
//
//            tmp=str[i];
//            str[i]=str[j-1];
//            str[j-1]=tmp;
//
//            i=j;
//
//    }
//      puts(str);
//
// return 0;
//
//}
//======================================================================================================================================
///  WAP to enter any string and reverse each word of string

// #include<stdio.h>
// int main()
//{
//  char str[50],tmp;
//  int i,j,t;
//
//  printf("\n Enter The String :");
//  gets(str);
//
//  i=0;
//  while(str[i]!='\0')
//
//  {
//      for(; str[i]==32; i++);
//
//    for(j=i; str[j+1]!=32 && str[j+1]!=0; j++);
//
//    t=j+1;
//
//    while(i<=j)
//    {
//      tmp=str[i];
//      str[i]=str[j];
//      str[j]=tmp;
//
//      j--;
//      i++;
//    }
//    i=t;
//
//  }
//
//  printf("\n String is %s",str);
//
//return 0;
//
//}
//======================================================================================================================================
/** WAP to enter any string and print the highest length string
*/


//  int main()
//{
//    char str[50],arr[50];
//    int i,j,cnt=0,highlen=0;
//
//    printf("\n Enter any string ");
//    gets(str);
//
//    // hello_good_ _ _morning_ _to_all_of_you
//
//    i=0;
//    while(str[i]!='\0')
//    {
//        cnt=0;
//        for(;str[i]==32;i++);
//        for(j=i;str[j]!=32 && str[j]!=0;j++)
//        {
//            cnt++;
//        }
//
//        if(highlen<cnt)
//        {
//            highlen=cnt;
//            for(j=0;str[i]!=32 && str[i]!='\0';i++,j++)
//            {
//                arr[j]=str[i];
//            }
//            arr[j]='\0';
//        }
//
//        i=j;
//    }
//    printf("\n String is %s",str);
//    printf("\n Array is %s",arr);
//    printf("\n Length is %d ",highlen);
//
//    return 0;
//
//}
//======================================================================================================================================
/** WAP to find two strings are matching or not.
*/
//int main()
//{
//	char s1[30],s2[30];
//	int i,j,flg=0;
//
//	printf("\n Enter 1st string: ");
//	gets(s1);
//
//	printf("\n Enter 2nd string: ");
//	gets(s2);
//
//	for(i=0;s1[i]!='\0';i++);
//	for(j=0;s2[j]!='\0';j++);
//
//	if(i==j)
//	{
//		for(i=0;i<=j;i++)
//		{
//			if(s1[i]!=s2[i])
//			{
//				flg=1;
//				break;
//			}
//		}
//	}
//	else
//	{
//		flg=1;
//	}
//
//	if(flg==0)
//	{
//		printf("\n String are matching");
//	}
//	else
//	{
//		printf("\n String are not matching");
//	}
//
//	return 0;
//}
//======================================================================================================================================
/**Enter the string contains digits and random symbols in between, remove all symbols and digits and display the actual string
(perform the operation @ same locations)
	e.g.

		input --> %%6h4el29?lo go@o5d d78ay3!
			      h%6%4el29?lo go@o5d d78ay3!
			      he6%4%l29?lo go@o5d d78ay3!
*/

// #include<stdio.h>
// int main()
//{
//    char str[50],tmp;
//    int i,j,cnt=0;
//    printf("\n Enter Any String: ");
//    gets(str);
//
//    for(i=0; str[i]!='\0'; i++)
//    {
//        if(!((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z') || str[i]==' '))
//        {
//            for(j=i+1; str[j]!='\0'; j++)
//            {
//                if((str[j]>='A' && str[j]<='Z') || (str[j]>='a' && str[j]<='z') || (str[j]==' '))
//                {
//                    tmp=str[i];
//                    str[i]=str[j];
//                    str[j]=tmp;
//                    cnt++;
//                    break;
//                }
//
//            }
//        }
//        else
//        {
//            cnt++;
//        }
//
//    }
//
//    printf("String is %s",str);
//    printf("\n %d \n",cnt);
//
//return 0;
//
//}

//======================================================================================================================================
/****************************   CHARACTER 2D ARRAY   ******************************/

// #include<stdio.h>
// int main()
//{
//    int i;
//    char ch[50]={{'h'},{'e'},{'l'},{'l'},{'o'}} ;
//
//      for(i=0; i<5; i++)
//      {
//        printf("%c",ch[i]);
//      }
//
// return 0;
//
//}
//======================================================================================================================================
/// WAP to enter any string and and enter the name to be searched and print its position

// #include<stdio.h>
// int main()
//{
//    char names[7][50],nm[50];
//    int i,j,len1,len2,flg=0,k=0;
//
//    // taking list of names
//
//    printf("\n Enter Any String :");
//
//    for(i=0; i<7; i++)
//    {
//        gets(names[i]);
//    }
//
//    // printing the names
//
//    printf("\n List of Names :");
//
//    for(i=0; i<7; i++)
//    {
//        puts(names[i]);
//    }
//
//    // taking name to be searched
//
//    printf("\n Enter The Name To Be Searched: ");
//    gets(nm);
//
//    // finding length of name to be searched
//
//    for(j=0; nm[j]!='\0'; j++);
//
//        len1=j;
//
//    // finding length of word in each row
//
//    for(i=0 ;i<7; i++)
//
//    {
//        flg=0;
//
//       for(j=0; names[i][j]!='\0'; j++);
//
//       len2=j;
//
//       if(len1==len2)
//       {
//           for(j=0; j<len2; j++)
//           {
//               if(names[i][j]!=nm[j])
//               {
//                   flg=1;
//                   break;
//               }
//           }
//       }
//       else
//       {
//           flg=1;
//       }
//
//       if(flg==0)
//       {
//             printf("\n %s word is present at %d position",nm,i+1);
//
//             //k++;
//       }
//
//    }
//
//    if(flg!=0)
//    printf("\n %s word is not present at %d position",nm,i+1);
//
//return 0;
//
//}

/** %%6h4el29?lo go@o5d d78ay3!


*/
//#include <stdio.h>
//int main()
//{
//	char str[50],tmp;
//	int i,j,cnt=0;
//
//	printf("\n Enter the string: ");
//	gets(str);
//
//	for(i=0;str[i]!='\0';i++)
//	{
//		if( !((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z') || str[i]==' ') )
//		{
//			for(j=i+1;str[j]!='\0';j++)
//			{
//				if( (str[j]>='A' && str[j]<='Z') || (str[j]>='a' && str[j]<='z') || str[j]==' ')
//				{
//					tmp=str[i];
//					str[i]=str[j];
//					str[j]=tmp;
//                    cnt++;
//                    break;
//				}
//			}
//		}
//		else
//		{
//		    cnt++;
//		}
//	}
//	str[cnt]='\0';
//	printf("string is: %s",str);
//	printf("\n cnt: %d",cnt);
//	return 0;
//}

















































































































































