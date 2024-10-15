///   BEST TIME TO SELL AND BUY STOCK
//
//#include<stdio.h>
//#include<stdlib.h>
//
//void maxProfit(int *A, int n1)
//{
//    int min, max, i;
//   // int z=0;
//    min = max = *(A + 0);
//
//    for (i = 0; i < n1; i++)
//        {
//            if (*(A + i) > max)
//            {
//                max = *(A + i);
//            }
//            else if (*(A + i) < min)
//                {
//                    min = *(A + i);
//                }
//        }
//
//   // printf("\n Maximum stock price is %d", max);
//   //printf("\n Minimum stock price is %d", min);
//   for(i=0;i<n1;i++)
//   {
//       if(*(A+i)==min)
//       {
//           printf("\n Buying Stock price is %d at day%d\n",min,i);
//       }
//       else if(*(A+i)==max)
//       {
//           printf("\n selling Stock price is %d at day%d \n",max,i);
//
//       }
//
//
//   }
//    int profit = max - min;
//   printf("\n Maximum Profit is %d \n",profit);
//}
//
//int main()
//{
//    int *A;
//    int n1, i;
//    printf("\nEnter the number of stocks: ");
//    scanf("%d", &n1);
//
//    // Allocate memory for array A
//    A = (int *)malloc(n1 * sizeof(int));
//
//    printf("\nEnter the price of stocks:\n");
//    for (i = 0; i < n1; i++)
//        {
//            scanf("%d", A + i);
//        }
//
//    printf("\nStock prices: ");
//    for (i = 0; i < n1; i++)
//        {
//            printf("%5d", *(A + i));
//        }
//
//    maxProfit(A, n1);
//
//    return 0;
//}

///Distinct Subsequences
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//int Dissubsequence(char str1[], char str2[], int flg)
//{
//    int cnt=0,i,j;
//    if(flg==0)
//    {
//        return 1;
//    }
//    else
//    {
//       for(i=0;str1[i]!='\0';i++)
//       {
//           for(j=0;str2[j]!='\0';j++)
//           {
//                if(str1[i]==str2[j])
//                {
//                    str1[i] = str1[i]+1;
//                    cnt++;
//                }
//           }
//       }
//       return cnt;
//    }
//}
//    int main()
//    {
//        char str1[50],str2[50];
//        int flg=0,i,ans;
//        printf("\n Enter any string 1");
//        gets(str1);
//
//        printf("\n Enter any string 2");
//        fflush(stdin);
//        gets(str2);
//
//        for(i=0;str1[i]!='\0' && str2[i]!='\0';i++)
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
//            printf("\n Strings are identical");
//        }
//        else
//        {
//            printf("\n Strings are not identical");
//        }
//        ans=Dissubsequence(str1,str2,flg);
//        printf("\n Output is %d",ans);
//
/// FIND DUCK NUMBER
// #include<stdio.h>
// int main()
// {
//     int n,rem,flg=0;
//     printf("\n Enter any number");
//     scanf("%d",&n);
//
//     while(n!=0)
//     {
//         rem=n%10;
//         if(rem==0)
//         {
//             flg=1;
//             break;
//         }
//         n=n/10;
//     }
//     if(flg==1)
//     {
//         printf("\n duck number");
//     }
//     else
//     {
//         printf("\n Not duck number");
//     }
//     return 0;
// }
///// 1. Enter an array of 10 integers and display only primes from it in increasing order
//#include<stdio.h>
//#define MAX 100
//int main()
//{
//    int x[10],i,j,d,flg,y[MAX],cnt=0,tmp;
//
//    printf("\n Enter array of 10 elements");
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    printf("\n Entered elemetns are \n");
//    for(i=0;i<10;i++)
//    {
//        printf("%5d",x[i]);
//    }
//
//    //process
//    printf("\n Prime numbers are \n");
//    for(i=0;i<10;i++)
//    {
//        flg=0;
//        d=2;
//        while(d<=x[i]/2)
//        {
//            if(x[i]%d==0)
//            {
//                flg=1;
//                break;
//            }
//            d++;
//        }
//        if(flg==0 && x[i]!=1)
//        {
//
//            printf("%5d",x[i]);
//            y[cnt]=x[i];
//
//            cnt++;
//        }
//
//    }
//
//    printf("\n Sorted elements are: ");
//
//    for(i=0;i<cnt-1;i++)
//    {
//        for(j=i+1;j<cnt;j++)
//        {
//            if(y[i]>y[j])
//            {
//                tmp=y[i];
//                y[i]=y[j];
//                y[j]=tmp;
//            }
//
//        }
//    }
//    printf("\n Sorted prime numbers are:\n");
//    for(i=0;i<cnt;i++)
//    {
//       printf("%5d",y[i]);
//    }
//    return 0;
//}
//
/////5. WAP TO CNT THE FREQUENCY OF EACH ELEMENTS IN AN ARRAY
//#include<stdio.h>
//int main()
//{
//    int x[5],i,j,cnt,no;
//
//    printf("\n Enter the 5 elements: ");
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    printf("\n Entered elements are:");
//    for(i=0;i<5;i++)
//    {
//        printf("%5d",x[i]);
//    }
//
//    for(i=0;i<5;i++)
//    {
//        if(x[i]!=-1)
//        {
//            cnt=0;
//            no=x[i];
//
//            for(j=0;j<5;j++)
//            {
//                if(x[j]==no)
//                {
//                    x[j]=-1;
//                    cnt++;
//                }
//            }
//            printf("\n %d is repeated %d times",no,cnt);
//
//        }
//
//
//    }
//    return 0;
//}
//
///// 6. WAP TO STORE THE RUNS SCORED BY 3 PLAYERS IN 5 MATCHES AND DISPLAY ALL RUNS WITH TOTAL
//#include<stdio.h>
//int main()
//{
//    int x[3][5],i,j,tot;
//
//    printf("\n Enter the  3 player score in 5 matches");
//    for(i=0;i<3;i++)
//    {
//        printf("\n Enter the %d player score in 5 matches",i+1);
//        for(j=0;j<5;j++)
//        {
//            scanf("%d",&x[i][j]);
//        }
//
//    }
//
//    //process
//    for(i=0;i<3;i++)
//    {
//        tot=0;
//        {
//            for(j=0;j<5;j++)
//            {
//                tot= tot+x[i][j];
//            }
//            printf("\n Total runs of %d player is %d",i+1,tot);
//        }
//    }
//    return 0;
//
//}
//
///// 8. WAP TO SEPARATE EVEN ELEMENTS ARRAY AND ODD ELEMENTS ARRAY
//#include<stdio.h>
//int main()
//{
//    int x[10],i;
//    printf("\n Enter 10 elemets: ");
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    printf("\n even elemets are:");
//    for(i=0;i<10;i++)
//    {
//        if(x[i]%2==0)
//        {
//            printf("%5d",x[i]);
//        }
//
//    }
//    printf("\n odd elements are:");
//    for(i=0;i<10;i++)
//    {
//       if(x[i]%2!=0)
//        {
//            printf("%5d",x[i]);
//        }
//    }
//
//    return 0;
//}
//
//
///// 7. WAP TO READ A MATRIX AND FIND SUM AND PRODUCT OF ALL ELEMENTS
//#include<stdio.h>
//int main()
//{
//    int x[3][3],i,j;
//    int sum=0,product=1;
//    printf("\n Enter the matrix");
//    for(i=0;i<3;i++)
//    {
//        for(j=0;j<3;j++)
//        {
//            scanf("%d",&x[i][j]);
//        }
//    }
//
//    printf("\n Entered Matrix is :\n");
//    for(i=0;i<3;i++)
//    {
//        for(j=0;j<3;j++)
//        {
//            printf("%5d",x[i][j]);
//        }
//        printf("\n");
//    }
//
//    //sum
//    for(i=0;i<3;i++)
//    {
//        for(j=0;j<3;j++)
//        {
//            sum = sum + x[i][j];
//        }
//    }
//    printf("\n Sum is: %d",sum);
//
//    //product
//    for(i=0;i<3;i++)
//    {
//        for(j=0;j<3;j++)
//        {
//            product = product * x[i][j];
//        }
//    }
//    printf("\n Product is: %d",product);
//
//    return 0;
//
//}
//
///// 3. WAP TO SORT STRING IN LEXICOGRAPHICAL ORDER
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//    char str[100],tmp;
//    int i,j;
//    printf("\n Enter any string");
//    gets(str);
//
//    for(i=0;str[i]!='\0';i++)
//    {
//        for(j=0;str[j]!='\0';j++)
//        {
//           if(str[i]<str[j])
//           {
//               tmp=str[i];
//               str[i]=str[j];
//               str[j]=tmp;
//           }
//        }
//
//    }
//    str[i]='\0';
//    puts(str);
//    return 0;
//}
//
/////2. WAP C FUNCTION TO MOVE ALL -VE ELEMENTS TO ONE SIDE OF GIVEN INTEGER ARRAY
//#include<stdio.h>
//int main()
//{
//    int x[10],i,j,tmp;
//    printf("\n Enter 10 elements");
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    printf("\n Entered elements are: ");
//    for(i=0;i<10;i++)
//    {
//        printf("%5d",x[i]);
//    }
//    //
//    for(i=0;i<9;i++)
//    {
//        for(j=i+1;j<10;j++)
//        {
//            if(x[i]<0)
//            {
//                tmp=x[i];
//                x[i]=x[j];
//                x[j]=tmp;
//            }
//        }
//    }
//    printf("\n Sorted elements are with negative on one side\n");
//    for(i=0;i<10;i++)
//    {
//        printf("%5d",x[i]);
//    }
//    return 0;
//}
//
/////4. WRITE A C FUNCTION  TO FIND MAXIMUM SUM OF K CONSECUTIVE ELEMENTS IN GIVEN ARRAY
//#include <stdio.h>
//int maxSum(int x[],int n,int k)
//{
//    int i,j,sum=0,maxSum=0,flg=0;
//
//    for (i=0;i<n-1;i++)
//    {
//        sum = 0;
//        for (j=0;j<k;j++)
//        {
//            sum = sum+x[i+j];
//        }
//        if (sum>maxSum)
//        {
//            maxSum=sum;
//            flg = 1;
//        }
//    }
//
//    if (flg == 1)
//    {
//        return maxSum;
//    }
//}
//
//int main()
//{
//    int x[5],i,k;
//
//    printf("\n Enter the elements:\n");
//    for (i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    printf("\n Enter the value of k:\n");
//    scanf("%d",&k);
//
//    int result = maxSum(x,5,k);
//
//    printf("\n Max sum of %d consecutive elements is: %d\n",k,result);
//
//
//    return 0;
//}
//
//
//
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
//*********************************STRING PROBLEMS**********************************************************
/////. 1.ENTER ANY STRING AND INTERCHANGE THE FIRST AND LAST CHARACTER OF EACH WORD
//#include<stdio.h>
//    int main()
//    {
//        int i,j,tmp;
//        char str[100];
//        printf("\n Enter any string: ");
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
//        printf("%s",str);
//        return 0;
//    }
//
/// 2. ENTER ANY STRING AND SORT EACH WORD OF STRING ALPHABETICALLY
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main()
//{
//    int i,j,t;
//    char str[100],tmp;
//
//    printf("\n Enter any string: ");
//    gets(str);
//
//    i=0;
//    while(str[i]!='\0')
//    {
//        for( ;str[i]==32;i++);
//        for(j=i;(str[j]!=32 && str[j]!='\0');j++)
//
//        do
//        {
//            if (str[i]>str[j])
//            {
//                tmp=str[i];
//                str[i]=str[j];
//                str[j]=tmp;
//            }
//            i++;
//            j--;
//        }while(i<=j);
//        i=j;
//    }
//    printf("\n Alphabetically: ");
//    puts(str);
//    return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//    int i, j, t;
//    char str[100], tmp;
//
//    printf("Enter any string: ");
//    gets(str);
//
//    i = 0;
//    while (str[i] != '\0')
//    {
//        // Skip spaces
//        while (str[i] == 32 && str[i] != '\0')
//        {
//            i++;
//        }
//
//        // Identify the start of the word
//        int start = i;
//
//        // Find the end of the word
//        while (str[i] != 32 && str[i] != '\0')
//        {
//            i++;
//        }
//        int end = i - 1;
//
//        // Sort the word using a simple bubble sort
//        for (j = start; j < end; j++)
//        {
//            for (t = start; t < end - (j - start); t++)
//            {
//                if (str[t] > str[t + 1])
//                {
//                    tmp = str[t];
//                    str[t] = str[t + 1];
//                    str[t + 1] = tmp;
//                }
//            }
//        }
//    }
//
//    printf("\nAlphabetically: ");
//    puts(str);
//
//    return 0;
//}

//
/// 6. WAP TO COUNT OCCURANCE OF WORD IN A STRING
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//    char str[100],word[100];
//    int i,j,flg;
//    int length,wlength,cnt=0;
//
//    printf("\n Enter any string: ");
//    gets(str);
//
//    printf("\n Enter word to be searched: ");
//    gets(word);
//
//    for(i=0;str[i]!='\0';i++);
//    length=i;
//
//    for(i=0;word[i]!='\0';i++);
//    wlength=i;
//
//    for(i=0;i<length;i++)
//    {
//        flg=1;
//        for(j=0;j<wlength;j++)
//        {
//           if(str[i+j]!=word[j])
//           {
//               flg=0;
//               break;
//           }
//        }
//        if(flg==1)
//        {
//            cnt++;
//        }
//    }
//    printf("\n Occurance is: %d",cnt);
//
//}
//
///9. ENTER ANY STRING THROUTH AND DISPLAY THE STARTING AND ENDING CHARACTER OF EACH WORD
//#include<stdio.h>
//    int main()
//    {
//
//        int i,sp,ep,cnt=0;
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
//        printf("%c",str[sp]);
//        while(sp<=ep)
//        {
//            if((str[sp]!=32 && str[sp-1]==32)||(str[sp]!=32 && (str[sp+1]==32 || str[sp+1]==0)))
//            {
//               printf("%c",str[sp]);
//            }
//            sp++;
//            if(str[sp]==32 && str[sp+1]!=32)
//            {
//                cnt++;
//            }
//        }
//        printf("\n Word count:%d",cnt+1);
//        return 0;
//    }
//
///
//******************* POINTER PROBLEMS**************************
/// 1. WAP TO FIND LARGEST NUMBER USING DYNAMIC MEMORY ALLOCATION
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int *p,cnt,i,large=0;
//    printf("\n Enter the count of elements");
//    scanf("%d",&cnt);
//
//    p=(int*)malloc(cnt*sizeof(int));
//
//    printf("\n Enter the %d elements",cnt);
//    for(i=0;i<cnt;i++)
//    {
//        scanf("%d",(p+i));
//    }
//
//    printf("\n Entered elements are: ");
//    for(i=0;i<cnt;i++)
//    {
//        printf("%5d",*(p+i));
//    }
//
//    for(i=0;i<cnt;i++)
//    {
//        if(*(p+i)>large)
//        {
//            large=*(p+i);
//        }
//    }
//    printf("\n Largest number is: %d",large);
//
//    return 0;
//}
//
/// 3. WAP TO SORT NUMBERS USING PTR
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int *p,i,j,tmp,cnt;
//
//    printf("\n Enter the cnt: ");
//    scanf("%d",&cnt);
//    p=(int*)malloc(cnt*sizeof(int));
//    printf("\n Enter the %d elements",cnt);
//    for(i=0;i<cnt;i++)
//    {
//        scanf("%d",(p+i));
//    }
//
//    printf("\n Entered elements are before sorting: ");
//    for(i=0;i<cnt;i++)
//    {
//        printf("%5d",*(p+i));
//    }
//
//    for(i=0;i<cnt-1;i++)
//    {
//        for(j=i+1;j<cnt;j++)
//        {
//            if(*(p+i)>*(p+j))
//            {
//                tmp=*(p+i);
//                *(p+i)=*(p+j);
//                *(p+j)=tmp;
//            }
//        }
//    }
//    printf("\n Sorted elements are: ");
//    for(i=0;i<cnt;i++)
//    {
//        printf("%5d",*(p+i));
//    }
//    return 0;
//}
//
/// 8. WAP TO PRINT VALUE AND ADDRESS OF ELEMENTS OF AN ARRAY USING PTR
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int *p,i,cnt;
//
//    printf("\n Enter the cnt");
//    scanf("%d",&cnt);
//    p=(int*)malloc(cnt*sizeof(int));
//
//    printf("\n Enter the %d elements",cnt);
//    for(i=0;i<cnt;i++)
//    {
//        scanf("%d",(p+i));
//    }
//
//    printf("\n address: ");
//    for(i=0;i<cnt;i++)
//    {
//        printf("\n %u",p+i);
//    }
//
//    printf("\n Value: ");
//    for(i=0;i<cnt;i++)
//    {
//        printf("%5d",*(p+i));
//    }
//    return 0;
//}
//
///9. WAP TO PERFORM CALL BY VALUE AND CALL BY REFERENCE
//#include<stdio.h>
//#include<stdlib.h>
//
//void swap(int x, int y)
//{
//    int tmp;
//    tmp=x;
//    x=y;
//    y=tmp;
//
//}
//int main()
//{
//    int x,y;
//
//    printf("\n Enter the value of x and y");
//    scanf("%d %d",&x,&y);
//
//    printf("\n value of x and y before swapping is %d %d",x,y);
//
//    swap(x,y);
//
//    printf("\n value of x and y After swapping is %d %d",x,y);
//
//}
//
///CALL BY REFERENCE
//#include<stdio.h>
//#include<stdlib.h>
//
//void swap(int *x, int *y)
//{
//    int tmp;
//    tmp=*x;
//    *x=*y;
//    *y=tmp;
//
//}
//int main()
//{
//    int x,y;
//
//    printf("\n Enter the value of x and y");
//    scanf("%d %d",&x,&y);
//
//    printf("\n value of x and y before swapping is %d %d",x,y);
//
//    swap(&x,&y);
//
//    printf("\n value of x and y After swapping is %d %d",x,y);
//
//}
//
/// 5. WAP C PRG TO PERFORM ARRAY OF POINTERS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int *p,cnt,i;
//
//    printf("\n Enter the cnt");
//    scanf("%d",&cnt);
//
//    p=(int*)malloc(cnt*sizeof(int));
//    printf("\n Enter the %d elements",cnt);
//    for(i=0;i<cnt;i++)
//    {
//        scanf("%d",(p+i));
//    }
//
//    printf("\n Entered elements are");
//    for(i=0;i<cnt;i++)
//    {
//        printf("%5d",*(p+i));
//    }
//    return 0;
//
//}
//
///6. WAP TO IMPLEMENT STACK OPERATIONS
//#include<stdio.h>
//#include<stdlib.h>
//    int main()
//    {
//        int i,top;
//        int *p,*t,cnt;
//        printf("\n Enter the cnt");
//        scanf("%d",&cnt);
//        p=(int*)malloc(cnt*sizeof(int));
//        t=(int*)malloc(cnt*sizeof(int));
//        printf("\n Enter the %d elements",cnt);
//        for(i=0;i<cnt;i++)
//        {
//            scanf("%d",(p+i));
//        }
//
//        printf("\n Entered elements are:");
//        for(i=0;i<cnt;i++)
//        {
//            printf("%5d",*(p+i));
//        }
//
//        top=-1;
//        i=0;
//        //insert
//        while(i<cnt)
//        {
//            ++top;
//            t[top]=*(p+i);
//            i++;
//        }
//        //extract
//        i=0;
//        while(i<cnt)
//        {
//            *(p+i)=t[top];
//            top--;
//            i++;
//        }
//        printf("\n Reverse array:");
//        for(i=0;i<cnt;i++)
//        {
//            printf("%5d",*(p+i));
//        }
//        return 0;
//    }
//
/// 4. WAP TO READ AND PRINT STUDENT DETAILS
//#include<stdio.h>
//#include<stdlib.h>
//struct student
//{
//	char nm[40];
//	int rno;
//	float per;
//};
//
//int cnt;
//void display(struct student s[])
//{
//    int i;
//    printf("\n student info: \n");
//	for(i=0;i<cnt;i++)
//	{
//		printf("\n %s \t %d \t %.2f",(s+i)->nm, (s+i)->rno, (s+i)->per);
//	}
//}
//
//int main()
//{
//	struct student *s;
//	int i;
//
//	printf("\n Enter the student count: ");
//	scanf("%d",&cnt);
//
//	s=(struct student*)malloc(cnt*sizeof(struct student));
//
//	printf("\n Enter the student info of %d students:   \n",cnt);
//
//	for(i=0;i<cnt;i++)
//	{
//		printf("\n Enter the student name: ");
//        	fflush(stdin);
//		gets(s[i].nm);
//
//		printf("\n Enter the rno and percentage: ",i+1);
//		scanf("%d %f",&(s+i)->rno,&(s+i)->per);
//	}
//	display(s);
//
//	return 0;
//}
//
/// 10. WAP TO UNDERSTAND HOW POINTER TO STRUCTURE VARIABLE IS SENT TO FUNCTION
//#include<stdio.h>
//#include<stdlib.h>
//
//void add(int a,int b)
//{
//	int z;
//	z=a+b;
//	printf("\n Addition is: %d",z);
//}
//void multi(int a,int b)
//{
//	int z;
//	z=a*b;
//	printf("\n multi. is: %d",z);
//}
//int main()
//{
//	int x,y;
//    void (*fptr)(int,int);
//
//	printf("\n Enter the values of x and y: ");
//	scanf("%d %d",&x,&y);
//	add(x,y);
//	multi(x,y);
//
//	fptr=&add;
//	fptr(x,y);
//
//	fptr=&multi;
//	fptr(x,y);
//
//	return 0;
//}
//
/// 7. WAP TO SHOW AN EXAMPLE OF POINTER TO POINTER
//#include<stdio.h>
//#include<stdlib.h>
//    int main()
//    {
//        int *p[3],mat[3],i,j;
//        printf("\n Enter the runs scored by 3 players in different matches:");
//        for(i=0;i<3;i++)
//        {
//            printf("\n Player %d",i+1);
//            printf("\n Enter the match cnt");
//            scanf("%d",&mat[i]);
//            p[i]=(int*)malloc(mat[i]*sizeof(int));
//            printf("\n Enter the runs scored in %d matches",mat[i]);
//            for(j=0;j<mat[i];j++)
//            {
//                printf("\n Match %d",j+1);
//                scanf("%d",*(p+i)+j);
//            }
//        }
//        printf("\n Score Card \n");
//        for(i=0;i<3;i++)
//        {
//            printf("\n Player %d=>",i+1);
//            for(j=0;j<mat[i];j++)
//            {
//                printf("\t Match %d=>",j+1);
//                printf("%7d",*(*(p+i)+j));
//            }
//        }
//        return 0;
//    }
//
/// 2. WAP TO REVERSE ORDER OF WORD IN STRING USING PTR
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    char str[100],tmp;
//    int i,j;
//    printf("\n Enter any string: ");
//    gets(str);
//    i=0;
//    while(str[i]!='\0')
//    {
//        for(i=0;str[i]!='\0';i++);
//        for(j=i;(str[j]!=32 && str[j]!=32);j++);
//
//            tmp=str[i];
//            str[i]=str[j];
//            str[j]=tmp;
//        i=j;
//    }
//
//    puts(str);
//}
//
///
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main() {
//    char str[100], *ptr, *start, *end, tmp;
//    int len;
//
//    printf("\nEnter any string: ");
//    gets(str);
//
//    len = strlen(str);
//
//    // Reverse the entire string
//    for (start = str, end = str + len - 1; start < end; start++, end--) {
//        tmp = *start;
//        *start = *end;
//        *end = tmp;
//    }
//
//    // Reverse each word in the string
//    ptr = str;
//    while (*ptr != '\0')
//    {
//        start = ptr;
//
//        // Move to the end of the word
//        while (*ptr != 32&& *ptr != '\0')
//        {
//            ptr++;
//        }
//
//        end = ptr - 1;
//
//        // Reverse the word
//        while (start < end)
//        {
//            tmp = *start;
//            *start = *end;
//            *end = tmp;
//
//            start++;
//            end--;
//        }
//
//        // Move to the next word
//        if (*ptr != '\0')
//        {
//            ptr++;
//        }
//    }
//
//    printf("\nReversed string: %s\n", str);
//
//    return 0;
//}
//
////************* FUNCTION *****************
/// 1. WAP TO FIND SUM OF ELEMENTS OF ARRAY USING RECURSION
//#include<stdio.h>
//
//int findSum(int x[], int n)
//{
//    if (n == 0)
//    {
//         return 0;
//    }
//
//    return x[n - 1] + findSum(x, n - 1);
//}
//
//int main()
//{
//    int x[10], i, sum;
//
//    printf("\n Enter the elements:\n");
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &x[i]);
//    }
//
//    printf("\n Entered elements:\n");
//    for (i = 0; i < 10; i++)
//    {
//        printf("%5d", x[i]);
//    }
//
//    sum = findSum(x, 10);
//
//    printf("\n Sum of elements is: %d", sum);
//    return 0;
//}
//
///2. WAP TO SWAP TWO STRINGS USING FUNCTION
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//void swap(char str1[],char str2[],char tmp[])
//{
//    tmp=str1;
//    str1=str2;
//    str2=tmp;
//
//    printf("\n After swapping first string is %s",str1);
//    printf("\n After swapping second string is %s",str2);
//
//}
//int main()
//{
//    char str1[100],str2[100],tmp[100];
//
//    printf("\n Enter first string: ");
//    gets(str1);
//
//    printf("\n Enter second string: ");
//    fflush(stdin);
//    gets(str2);
//
//    printf("\n Before swapping first string is %s",str1);
//    printf("\n before swapping second string is %s\n",str2);
//
//    swap(str1,str2,tmp);
//
//    return 0;
//}
//
/// 3. WAP TO CALCULATE FACTORIAL
/// 1. simple function
//#include<stdio.h>
//
//void fact()
//{
//    int no,fact=1,i;
//    printf("\n Enter any number");
//    scanf("%d",&no);
//
//    for(i=1;i<=no;i++)
//    {
//        fact=fact*i;
//    }
//    printf("\n Factorial is %d",fact);
//}
//int main()
//{
//
//    fact();
//    return 0;
//
//}
//
///2.with argument without return type
//#include<stdio.h>
//void fact(int no)
//{
//    int i,fact=1;
//    for(i=1;i<=no;i++)
//    {
//        fact = fact *i;
//    }
//    printf("\n Factorial of number is: %d",fact);
//}
//int main()
//{
//    int no;
//    printf("\n Enter any number: ");
//    scanf("%d",&no);
//
//    fact(no);
//    return 0;
//}
//
/// 3. without argument with return type
//#include<stdio.h>
//int fact()
//{
//    int no,fact=1,i;
//    printf("\n Enter any number: ");
//    scanf("%d",&no);
//    for(i=1;i<=no;i++)
//    {
//        fact=fact*i;
//    }
//    return fact;
//}
//
//int main()
//{
//    int ans;
//    ans=fact();
//
//    printf("\n Factorial is:%d",ans);
//    return 0;
//}
//
///4.With argument with return type
//#include<stdio.h>
//int fact(int no)
//{
//    int i,fact=1;
//    for(i=1;i<=no;i++)
//    {
//        fact=fact*i;
//    }
//    return fact;
//}
//int main()
//{
//    int no,ans;
//    printf("\n Enter any number: ");
//    scanf("%d",&no);
//
//    ans=fact(no);
//
//    printf("\n Factorial is:%d",ans);
//
//}
//
///5.Recursion
//#include<stdio.h>
//int fact(int no)
//{
//    if(no==1)
//    {
//        return 1;
//    }
//    else
//    {
//        return no *fact(no-1);
//    }
//}
//int main()
//{
//    int no,ans;
//    printf("\n Enter any number: ");
//    scanf("%d",&no);
//
//    ans= fact(no);
//    printf("\n Factorial is: %d",ans);
//}
//
//
///4.  WAP TO FIND SUM OF SERIES 1!/1+2!/2+3!/3+4!/4+5!/5
//#include<stdio.h>
//int main()
//{
//    int n,i;
//    float fact=1,sum=0;
//    printf("\n Enter the value of n");
//    scanf("%d",&n);
//
//    for(i=1;i<=n;i++)
//    {
//        fact=fact*i;
//        sum=sum+(fact/i);
//
//    }
//    printf("\n Sum is %f",sum);
//    return 0;
//
//}
//
/// WAP TO CHECK STRINGS ARE ANAGRAM OR NOT
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char str1[100], str2[100];
//    int i, len1, len2, flg = 0;
//
//    printf("\nEnter string 1: ");
//    gets(str1);
//
//    printf("\nEnter string 2: ");
//    gets(str2);
//
//    for(i=0;str1[i]!='\0';i++);
//    len1=i;
//    for(i=0;str2[i]!='\0';i++);
//    len2=i;
//    if(len1 != len2)
//    {
//        printf("\n Strings are Not anagram\n");
//        return 0;
//    }
//
//    for (i = 0; i < len1 - 1; i++)
//    {
//        for (int j = 0; j < len1 - i - 1; j++)
//        {
//            if (str1[j] > str1[j + 1])
//            {
//                char temp = str1[j];
//                str1[j] = str1[j + 1];
//                str1[j + 1] = temp;
//            }
//            if (str2[j] > str2[j + 1])
//            {
//
//                char temp = str2[j];
//                str2[j] = str2[j + 1];
//                str2[j + 1] = temp;
//            }
//        }
//    }
//
//    for (i = 0; i < len1; i++)
//    {
//        if (str1[i] != str2[i])
//        {
//            flg = 1;
//            break;
//        }
//    }
//
//    if (flg == 0)
//    {
//        printf("\n Strings are anagram \n");
//    }
//    else
//    {
//        printf("\n Strings are Not anagram \n");
//    }
//
//    return 0;
//}
//
//
//
/// 6.WAP TO CHECK ARMSTRONG,PERFECT AND PRIME NUMBERS
//#include<stdio.h>
//void armStrong(int no)
//{
//    int rem,cnt=0,sum=0,a,i;
//    int tmp=no;
//    while(no!=0)
//    {
//        cnt++;
//        no=no/10;
//    }
//    no=tmp;
//    while(no!=0)
//    {
//        a=1;
//        rem=no%10;
//
//        for(i=1;i<=cnt;i++)
//        {
//            a=a*rem;
//        }
//        sum=sum+a;
//        no=no/10;
//    }
//    no=tmp;
//    if(no==sum)
//    {
//        printf("\n %d is Armstrong",no);
//    }
//    else
//    {
//        printf("\n %d is Not Armstrong",no);
//    }
//}
//
//void perfect(int no)
//{
//    int i,sum=0;
//
//    for(i=1;i<no;i++)
//    {
//        if(no%i==0)
//        {
//            sum= sum+i;
//        }
//    }
//    if(sum==no)
//    {
//        printf("\n %d is Perfect",no);
//    }
//    else
//    {
//        printf("\n %d is Not-Perfect",no);
//    }
//}
//
//void prime(int no)
//{
//    int d=2,flg=0;
//
//    while(d<=no/2)
//    {
//        if(no%d==0)
//        {
//            flg=1;
//            break;
//        }
//        d++;
//    }
//    if(flg==0 && no!=1)
//    {
//        printf("\n %d is Prime Number",no);
//    }
//    else
//    {
//        printf("\n %d is Not-Prime Number",no);
//    }
//
//}
//int main()
//{
//    int no;
//
//    printf("\n Enter any number: ");
//    scanf("%d",&no);
//
//    armStrong(no);
//    perfect(no);
//    prime(no);
//    return 0;
//}
//
/// 8. WAP TO ENTER THE N NUMBERS AND DISPLAY THE LIST OF EVEN NUMBERS UISNG FUNCTIONS
//#include<stdio.h>
//#include<stdlib.h>
//void evenNumbers(int *p,int n)
//{
//    int i;
//    for(i=0;i<n;i++)
//    {
//        if(*(p+i)%2==0)
//        {
//            printf("%5d",*(p+i));
//        }
//    }
//}
//int main()
//{
//    int n,*p,i;
//    printf("\n Enter the n th term: ");
//    scanf("%d",&n);
//
//    p=(int*)malloc(n*sizeof(int));
//    printf("\n Enter the %d elements",n);
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",p+i);
//    }
//    evenNumbers(p,n);
//    return 0;
//
//}
//
/// 9.WAP TO FIND MAX BETN 3 NUMBERS USING NESTED FUNCTION
//#include<stdio.h>
//void findMax(int n1,int n2,int n3)
//{
//    if(n1>n2)
//    {
//        if(n1>n3)
//        {
//            printf("Max is:%d",n1);
//        }
//    }
//    else
//    {
//        if(n2>n3)
//        {
//            printf("Max is:%d",n2);
//        }
//        else
//        {
//            printf("Max is:%d",n3);
//        }
//    }
//}
//
//int main()
//{
//    int n1,n2,n3;
//
//    printf("\n Enter three numbers: ");
//    scanf("%d%d%d",&n1,&n2,&n3);
//
//    findMax(n1,n2,n3);
//    return 0;
//
//}
//
/// 10.WAP TO ENTER ANY NUMBER THROUGH KEYBOARD AND INSERT NEW NUMBER ON INSERTED POSITION
//
//#include<stdio.h>
//void newNumber(int rev)
//{
//    int i,rem,pos,n,nn=0;
//    printf("\nEnter position and number to be inserted: ");
//    scanf("%d %d",&pos,&n);
//    for (i=0;rev!=0;i++)
//    {
//        rem=rev%10;
//
//        if(pos==i)
//        {
//            nn=nn*10+n;
//        }
//        nn=nn*10+rem;
//
//        rev=rev/10;
//    }
//
//    if(pos==i)
//    {
//        nn=nn*10+n;
//    }
//
//    printf("\n The new number is: %d \n", nn);
//}
//int main()
//{
//    int no,rev=0,rem,tmp;
//
//    printf("\n Enter any number: ");
//    scanf("%d",&no);
//
//    tmp=no;
//    while (no!=0)
//    {
//        rem = no % 10;
//        rev = rev * 10 + rem;
//        no = no / 10;
//    }
//
//    no =tmp;
//
//    newNumber(rev);
//    return 0;
//}
//
///1. WAP TO CREATE STRUCTURE TO STORE NAMES, SALARY AND HRS OF WORK PER DAY OF 10 EMPLOYEES IN A COMPANY ,WAP TO INCREASE A SALARY DEPENDING ON THE NUMBER OF HRS PER DAY  AS FOLLOWS AN THEN PRINT THE NAMES OF ALL THE EMPLOYEES ALONG WITH THEIR FINAL SALARIES
//
/// HRS OF WORK       8    10     >=12
/// INCREASE IN SAL   $50  $100   $150
//#include<stdio.h>
//struct Employee
//{
//    char nm[50];
//    float sal;
//    int hrs;
//};
//int main()
//{
//    struct Employee e[3];
//    int i;
//    for(i=0;i<3;i++)
//    {
//        printf("\n Enter the name of Employee: ");
//        fflush(stdin);
//        gets(e[i].nm);
//
//        printf("\n Enter the Salary of Employee: ");
//        scanf("%f",&e[i].sal);
//
//        printf("\n Enter the Working hrs of Employee: ");
//        fflush(stdin);
//        scanf("%d",&e[i].hrs);
//    }
//    printf("\n Employee Details: \n ");
//    for(i=0;i<3;i++)
//    {
//        printf("\n Name of Employee: %s \t Salary of Employee: %.2f$ \t Working Hrs: %d",e[i].nm,e[i].sal,e[i].hrs);
//    }
//    for(i=0;i<3;i++)
//    {
//        if(e[i].hrs==8)
//        {
//            e[i].sal=e[i].sal+ 50;
//        }
//        else if((e[i].hrs>8) &&(e[i].hrs<=10))
//        {
//            e[i].sal=e[i].sal+ 100;
//        }
//        else
//        {
//            e[i].sal=e[i].sal+ 150;
//        }
//
//    }
//    printf("\n");
//    printf("\n Employee Details and Salary According to their Working Hrs: \n ");
//    for(i=0;i<3;i++)
//    {
//        printf("\n Name of Employee: %s \t Salary of Employee: %.2f$ \t Working Hrs: %d",e[i].nm,e[i].sal,e[i].hrs);
//    }
//    return 0;
//}
//
/// 4. WAP TO STORE AND PRINT THE ROLL NO,NAME, AGE AND
///    MARKS OF STUDENT USING STRUCTURE
//#include<stdio.h>
//struct Student
//{
//    int rollno;
//    char nm[50];
//    int age;
//    float mrk;
//};
//int main()
//{
//    struct Student s;
//
//    printf("\n Enter the student roll no: ");
//    scanf("%d",&s.rollno);
//
//    printf("\n Enter the student name: ");
//    fflush(stdin);
//    gets(s.nm);
//
//    printf("\n Enter the age of student: ");
//    scanf("%d",&s.age);
//
//    printf("\n Enter the Marks of student: ");
//    scanf("%f",&s.mrk);
//
//    printf("\n Student Roll No: %d \t Name: %s \t age: %d \t Marks: %.2f",s.rollno,s.nm,s.age,s.mrk);
//    return 0;
//}
//
/// 5.WAP TO STORE ROLL NO,(STARTING FROM 1),NAME,AGE OF 5 STUDENT
///   AND THE DISPLAY STUDENT DETAILS
//#include<stdio.h>
//struct Student
//{
//    int rollno;
//    char nm[50];
//    int age;
//};
//int main()
//{
//    struct Student s[5];
//    int i;
//
//    printf("\n Enter the student details: ");
//    for(i=0;i<5;i++)
//    {
//        printf("\n Enter the student roll no: ");
//        scanf("%d",&s[i].rollno);
//
//        printf("\n Enter the student name: ");
//        fflush(stdin);
//        gets(s[i].nm);
//
//        printf("\n Enter the age of student: ");
//        scanf("%d",&s[i].age);
//    }
//    printf("\n Student details: ");
//    for(i=0;i<5;i++)
//    {
//        printf("\n Student Roll No: %d \t Name: %s \t age: %d",s[i].rollno,s[i].nm,s[i].age);
//    }
//    return 0;
//}
//
/// 6.WAP TO STORE AND PRINT THE ROLL NO,NAME, AGE, ADDRESS AND MARKS OF
///   5 STUDENTS USING STRUCTURE
//#include<stdio.h>
//struct Student
//{
//    int rollno;
//    char nm[50];
//    int age;
//    float mrk;
//    char addr[100];
//};
//int main()
//{
//    struct Student s[5];
//    int i;
//    for(i=0;i<5;i++)
//    {
//        printf("\n Enter the student roll no: ");
//        scanf("%d",&s[i].rollno);
//
//        printf("\n Enter the student name: ");
//        fflush(stdin);
//        gets(s[i].nm);
//
//        printf("\n Enter the age of student: ");
//        scanf("%d",&s[i].age);
//
//        printf("\n Enter the Marks of student: ");
//        scanf("%f",&s[i].mrk);
//
//        printf("\n Enter the address of student: ");
//        fflush(stdin);
//        gets(s[i].addr);
//    }
//
//
//    for(i=0;i<5;i++)
//    {
//        printf("\n Student Roll No: %d \t Name: %s \t age: %d \t Marks: %.2f \t Address: %s",s[i].rollno,s[i].nm,s[i].age,s[i].mrk,s[i].addr);
//    }
//    return 0;
//}
//
/// 7. WAP TO ADD TWO DISTANCES IN INCH-FEET USING STRUCTURE THE VALUES OF DISTANCES
///IS TO BE TAKEN FROM USER
//#include<stdio.h>
//struct Distance
//{
//    int feet;
//    int inch;
//};
//void add(struct Distance d1, struct Distance d2)
//{
//    int feet = d1.feet+d2.feet;
//    int inch = d1.inch+d2.inch;
//
//    if(inch>=12)
//    {
//        feet++;
//        inch=inch-12;
//    }
//
//    printf("\n Feet: %d \t inch: %d",feet,inch);
//}
//int main()
//{
//    struct Distance d1,d2;
//
//    printf("\n Enter the distance d1 in feet: ");
//    scanf("%d",&d1.feet);
//    printf("\n Enter the distance d1 in inch: ");
//    scanf("%d",&d1.inch);
//
//    printf("\n Enter the distance d2 in feet: ");
//    scanf("%d",&d2.feet);
//    printf("\n Enter the distance d2 in inch: ");
//    scanf("%d",&d2.inch);
//
//    add(d1,d2);
//    return 0;
//}
//
/// 8. WAP TO ENTER THE MARKS OF 3 STUDENT IN CHEMISTRY, MATHS AND PHYSICS (EACH OF 100)
///USING A STRUCTURE  NAMED MARKS HAVING ELEMENTS roll no, chem_marks, maths_marks, phy_marks
///AND THEN DISPLAY THE PERCENTAGE OF EACH STUDENT
//
//#include<stdio.h>
//struct Marks
//{
//    int rollno;
//    char nm[50];
//    float chem_mrk;
//    float maths_mrk;
//    float phy_mrk;
//    float per;
//};
//
//int main()
//{
//    struct Marks m[3];
//    int i;
//    float tot=0,per=0;
//
//    printf("\n Enter the student details: ");
//    for(i=0;i<3;i++)
//    {
//        printf("\n Enter the Student %d Roll NO: ",i+1);
//        scanf("%d",&m[i].rollno);
//
//        printf("\n Enter the name of Student %d: ",i+1);
//        fflush(stdin);
//        gets(m[i].nm);
//
//        printf("\n Enter the chemistry marks of student %d: ",i+1);
//        scanf("%f",&m[i].chem_mrk);
//
//        printf("\n Enter the maths marks of student %d: ",i+1);
//        scanf("%f",&m[i].maths_mrk);
//
//        printf("\n Enter the physics marks of student %d: ",i+1);
//        scanf("%f",&m[i].phy_mrk);
//    }
//
//    printf("\n Student percentage: ");
//    for(i=0;i<3;i++)
//    {
//        tot=m[i].chem_mrk + m[i].maths_mrk + m[i].phy_mrk;
//        per=tot/3.0;
//
//        printf("\n Student %d percentage: %.2f",i+1,per);
//    }
//
//}
//
/// 9.WAP TO ADD, SUBTRACT AND MULTIPLY TWO COMPLEX NUMBERS USING STRUCTURES TO FUNCTION
//#include <stdio.h>
//struct complex
//{
//    int real;
//    int img;
//};
//
//void sum(struct complex c1, struct complex c2)
//{
//    int real = c1.real + c2.real;
//    int img = c1.img + c2.img;
//
//    printf("\n Sum of two complex numbers is :%d+%di",real,img);
//}
//void subtract(struct complex c1, struct complex c2)
//{
//    int real = c1.real - c2.real;
//    int img = c1.img - c2.img;
//
//    printf("\n Subtraction of two complex numbers is :%d+%di",real,img);
//}
//void multiplication(struct complex c1, struct complex c2)
//{
//    int real = (c1.real*c2.real)-(c1.img*c2.img);
//    int img = (c1.real*c2.img)+(c1.img*c2.real);
//
//    printf("\n Multiplication of two complex numbers is :%d+%di",real,img);
//}
//
//int main()
//{
//    struct complex c1, c2;
//
//    printf("\n Enter the value of c1 (real img): ");
//    scanf("%d %d", &c1.real, &c1.img);
//
//    printf("\n Enter the value of c2 (real img): ");
//    scanf("%d %d", &c2.real, &c2.img);
//
//    sum(c1,c2);
//    subtract(c1,c2);
//    multiplication(c1,c2);
//    return 0;
//}
//
/// 10.WAP  TO STORE ROLL NO,NAME ,AGE(BETN 11 TO 14) AND ADDRESS OF STUDENT (MORE THAN 10),STORE
/// THE INFO OF STUDENT
/// 1.WRITE A FUNCTION TO PRINT THE NAMES OF ALL STUDENT HAVING AGE 14
/// 2.WRITE ANOTHER FUNCTION TO PRINT THE NAMES OF ALL STUDENT HAVING EVEN ROLL NO
/// 3.WRITE ANOTHER FUNCTION TO DISPLAY THE DETAILS OF THE STUDENT WHOSE ROLL NO IS GIVEN (ROLL NO ENTERED BY USER)
//#include<stdio.h>
//struct Student
//{
//    int rollno;
//    char nm[50];
//    int age;
//    char addr[100];
//};
//int i;
//void age(struct Student s[5])
//{
//    printf("\n Names of All Students having age 14: ");
//    for(i=0;i<5;i++)
//    {
//        if(s[i].age==14)
//        {
//            printf("\n Name: %s ",s[i].nm);
//        }
//    }
//}
//void evenroll(struct Student s[5])
//{
//    printf("\n Names of all student having even roll no: ");
//    for(i=0;i<5;i++)
//    {
//        if(s[i].rollno%2==0)
//        {
//            printf("\n Name: %s ",s[i].nm);
//        }
//    }
//}
//void getroll(struct Student s[5])
//{
//    int r;
//    printf("\n Enter the Roll No: ");
//    scanf("%d",&r);
//
//    for(i=0;i<5;i++)
//    {
//        if(s[i].rollno==r)
//        {
//            printf("\n Student Roll no: %d \t Name: %s \t Age: %d \t Address: %s",s[i].rollno,s[i].nm,s[i].age,s[i].addr);
//        }
//    }
//}
//int main()
//{
//    struct Student s[5];
//
//    printf("\n Enter the student details: ");
//    for(i=0;i<5;i++)
//    {
//        printf("\n Enter the student roll no: ");
//        scanf("%d",&s[i].rollno);
//
//        printf("\n Enter the name of student: ");
//        fflush(stdin);
//        gets(s[i].nm);
//
//        printf("\n Enter the age of student: ");
//        scanf("%d",&s[i].age);
//
//        printf("\n Enter the address of student: ");
//        fflush(stdin);
//        gets(s[i].addr);
//    }
//
//    printf("\n Entered Details are: \n");
//
//    for(i=0;i<5;i++)
//    {
//        printf("\n Student Roll no: %d \t Name: %s \t Age: %d \t Address: %s",s[i].rollno,s[i].nm,s[i].age,s[i].addr);
//    }
//
//    age(s);
//    evenroll(s);
//    getroll(s);
//    return 0;
//}
//
/// 11.WAP TO STORE NAME ,ACCOUNT NUMBER AND BALANCE OF CUSTOMERS
///    1.WRITE A FUNCTION TO PRINT THE NAMES OF ALL CUSTOMERS HAVING BALANCE LESS THAN $200
///    2.WRITE A FUNCTION TO ADD $100 IN THE BALANCE OF ALL CUSTOMERS  HAVING MORE THAN $1000 IN THEIR BALANCE AND THEN PRINT INCREMENTED VALUE OF THEIR BALANCE
//#include<stdio.h>
//struct Bank
//{
//    char nm[50];
//    int accno;
//    float bal;
//};
//int i;
//void balless(struct Bank b[5])
//{
//    printf("\n Names of all customers having balance less than $200 \n");
//
//    for(i=0;i<5;i++)
//    {
//        if(b[i].bal<200)
//        {
//            printf("\n Account Holder Name: %s",b[i].nm);
//        }
//    }
//}
//void balincr(struct Bank b[5])
//{
//    printf("\n Account Details with incremented Balance: \n ");
//
//    for(i=0;i<5;i++)
//    {
//        if(b[i].bal>1000)
//        {
//            b[i].bal=b[i].bal+100;
//            printf("\n Account Holder Name: %s \t Account number: %d \t Account Balance: %.2f$",b[i].nm,b[i].accno,b[i].bal);
//        }
//    }
//}
//int main()
//{
//    struct Bank b[5];
//
//    printf("\n Enter the Bank Account Information: ");
//    for(i=0;i<5;i++)
//    {
//        printf("\n Enter the name of Account holder: ");
//        fflush(stdin);
//        gets(b[i].nm);
//
//        printf("\n Enter the Account Number: ");
//        scanf("%d",&b[i].accno);
//
//        printf("\n Enter the Balance of account: ");
//        scanf("%f",&b[i].bal);
//    }
//
//    printf("\n Bank Account Information: \n");
//    for(i=0;i<5;i++)
//    {
//        printf("\n Account Holder Name: %s \t Account number: %d \t Account Balance: %.2f$",b[i].nm,b[i].accno,b[i].bal);
//    }
//    balless(b);
//    balincr(b);
//
//    return 0;
//}
//
/// 12. WAP TO COMPARE TWO DATES ENTERED BY USER MAKE A STRUCTURE NAMES DATE TO STORE ELEMENTS
///     DAY,MONTH AND YEAR TO STORE DATES IF DATES ARE EQUAL ,DISPLAY "DATES ARE EQUAL" OTHERWISE
///     "DATES ARE NOT EQUAL"
//#include<stdio.h>
//struct Date
//{
//    int day;
//    int month;
//    int year;
//};
//int main()
//{
//    struct Date d1,d2;
//    int flg=0;
//    printf("\n Enter the day, month and year of date 1: ");
//    scanf("%d %d %d",&d1.day,&d1.month,&d1.year);
//
//    printf("\n Enter the day, month and year of date 2: ");
//    scanf("%d %d %d",&d2.day,&d2.month,&d2.year);
//
//    printf("\n Entered date 1 :");
//    printf("%d-%d-%d",d1.day,d1.month,d1.year);
//
//    printf("\n Entered date 2 :");
//    printf("%d-%d-%d",d2.day,d2.month,d2.year);
//
//
//    if(d1.day!=d2.day || d1.month!=d2.month || d1.year!=d2.year)
//    {
//        flg=1;
//    }
//    if(flg==0)
//    {
//       printf("\n Dates are Equal");
//    }
//    else
//    {
//        printf("\n Dates are not equal");
//    }
//    return 0;
//}
//
/// 3. WAP TO CREATE STRUCTURE DATE HAVING DAY,MONTH AND YEAR STORE CURRENT DATE AND ADD 45 DAYS TO
///    CURRENT AND DISPLAY FINAL DATE
//
//#include<stdio.h>
//
//struct Date
//{
//    int day;
//    int month;
//    int year;
//};
//
//int main()
//{
//    struct Date d;
//    printf("\nEnter the current date (DD MM YYYY): ");
//    scanf("%d %d %d", &d.day, &d.month, &d.year);
//
//    printf("\nEntered date is: %d-%d-%d", d.day, d.month, d.year);
//
//    int daysToAdd = 45;
//
//    while (daysToAdd > 0)
//    {
//        int daysInMonth;
//        switch(d.month)
//        {
//            case 2:
//                daysInMonth = ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0)) ? 29 : 28;
//                break;
//            case 4:
//            case 6:
//            case 9:
//            case 11:
//                daysInMonth = 30;
//                break;
//            default:
//                daysInMonth = 31;
//                break;
//        }
//
//        if (d.day + daysToAdd <= daysInMonth)
//        {
//            d.day = d.day+daysToAdd;
//            daysToAdd = 0;
//        }
//        else
//        {
//            daysToAdd = daysToAdd-(daysInMonth - d.day + 1);
//            d.day = 1;
//            if (d.month == 12)
//            {
//                d.month = 1;
//                d.year++;
//            }
//            else
//            {
//                d.month++;
//            }
//        }
//    }
//
//    printf("\n Final Date after adding 45 days: %d-%d-%d\n", d.day, d.month, d.year);
//
//    return 0;
//}

///// 1. Enter an array of 10 integers and display only primes from it in increasing order
//#include<stdio.h>
//#define MAX 100
//int main()
//{
//    int x[10],i,j,d,flg,y[MAX],cnt=0,tmp;
//
//    printf("\n Enter array of 10 elements");
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    printf("\n Entered elemetns are \n");
//    for(i=0;i<10;i++)
//    {
//        printf("%5d",x[i]);
//    }
//
//    //process
//    printf("\n Prime numbers are \n");
//    for(i=0;i<10;i++)
//    {
//        flg=0;
//        d=2;
//        while(d<=x[i]/2)
//        {
//            if(x[i]%d==0)
//            {
//                flg=1;
//                break;
//            }
//            d++;
//        }
//        if(flg==0 && x[i]!=1)
//        {
//
//            printf("%5d",x[i]);
//            y[cnt]=x[i];
//
//            cnt++;
//        }
//
//    }
//
//    printf("\n Sorted elements are: ");
//
//    for(i=0;i<cnt-1;i++)
//    {
//        for(j=i+1;j<cnt;j++)
//        {
//            if(y[i]>y[j])
//            {
//                tmp=y[i];
//                y[i]=y[j];
//                y[j]=tmp;
//            }
//
//        }
//    }
//    printf("\n Sorted prime numbers are:\n");
//    for(i=0;i<cnt;i++)
//    {
//       printf("%5d",y[i]);
//    }
//    return 0;
//}
//
/////5. WAP TO CNT THE FREQUENCY OF EACH ELEMENTS IN AN ARRAY
//#include<stdio.h>
//int main()
//{
//    int x[5],i,j,cnt,no;
//
//    printf("\n Enter the 5 elements: ");
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    printf("\n Entered elements are:");
//    for(i=0;i<5;i++)
//    {
//        printf("%5d",x[i]);
//    }
//
//    for(i=0;i<5;i++)
//    {
//        if(x[i]!=-1)
//        {
//            cnt=0;
//            no=x[i];
//
//            for(j=0;j<5;j++)
//            {
//                if(x[j]==no)
//                {
//                    x[j]=-1;
//                    cnt++;
//                }
//            }
//            printf("\n %d is repeated %d times",no,cnt);
//
//        }
//
//
//    }
//    return 0;
//}
//
///// 6. WAP TO STORE THE RUNS SCORED BY 3 PLAYERS IN 5 MATCHES AND DISPLAY ALL RUNS WITH TOTAL
//#include<stdio.h>
//int main()
//{
//    int x[3][5],i,j,tot;
//
//    printf("\n Enter the  3 player score in 5 matches");
//    for(i=0;i<3;i++)
//    {
//        printf("\n Enter the %d player score in 5 matches",i+1);
//        for(j=0;j<5;j++)
//        {
//            scanf("%d",&x[i][j]);
//        }
//
//    }
//
//    //process
//    for(i=0;i<3;i++)
//    {
//        tot=0;
//        {
//            for(j=0;j<5;j++)
//            {
//                tot= tot+x[i][j];
//            }
//            printf("\n Total runs of %d player is %d",i+1,tot);
//        }
//    }
//    return 0;
//
//}
//
///// 8. WAP TO SEPARATE EVEN ELEMENTS ARRAY AND ODD ELEMENTS ARRAY
//#include<stdio.h>
//int main()
//{
//    int x[10],i;
//    printf("\n Enter 10 elemets: ");
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    printf("\n even elemets are:");
//    for(i=0;i<10;i++)
//    {
//        if(x[i]%2==0)
//        {
//            printf("%5d",x[i]);
//        }
//
//    }
//    printf("\n odd elements are:");
//    for(i=0;i<10;i++)
//    {
//       if(x[i]%2!=0)
//        {
//            printf("%5d",x[i]);
//        }
//    }
//
//    return 0;
//}
//
//
///// 7. WAP TO READ A MATRIX AND FIND SUM AND PRODUCT OF ALL ELEMENTS
//#include<stdio.h>
//int main()
//{
//    int x[3][3],i,j;
//    int sum=0,product=1;
//    printf("\n Enter the matrix");
//    for(i=0;i<3;i++)
//    {
//        for(j=0;j<3;j++)
//        {
//            scanf("%d",&x[i][j]);
//        }
//    }
//
//    printf("\n Entered Matrix is :\n");
//    for(i=0;i<3;i++)
//    {
//        for(j=0;j<3;j++)
//        {
//            printf("%5d",x[i][j]);
//        }
//        printf("\n");
//    }
//
//    //sum
//    for(i=0;i<3;i++)
//    {
//        for(j=0;j<3;j++)
//        {
//            sum = sum + x[i][j];
//        }
//    }
//    printf("\n Sum is: %d",sum);
//
//    //product
//    for(i=0;i<3;i++)
//    {
//        for(j=0;j<3;j++)
//        {
//            product = product * x[i][j];
//        }
//    }
//    printf("\n Product is: %d",product);
//
//    return 0;
//
//}
//
///// 3. WAP TO SORT STRING IN LEXICOGRAPHICAL ORDER
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//    char str[100],tmp;
//    int i,j;
//    printf("\n Enter any string");
//    gets(str);
//
//    for(i=0;str[i]!='\0';i++)
//    {
//        for(j=0;str[j]!='\0';j++)
//        {
//           if(str[i]<str[j])
//           {
//               tmp=str[i];
//               str[i]=str[j];
//               str[j]=tmp;
//           }
//        }
//
//    }
//    str[i]='\0';
//    puts(str);
//    return 0;
//}
//
/////2. WAP C FUNCTION TO MOVE ALL -VE ELEMENTS TO ONE SIDE OF GIVEN INTEGER ARRAY
//#include<stdio.h>
//int main()
//{
//    int x[10],i,j,tmp;
//    printf("\n Enter 10 elements");
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    printf("\n Entered elements are: ");
//    for(i=0;i<10;i++)
//    {
//        printf("%5d",x[i]);
//    }
//    //
//    for(i=0;i<9;i++)
//    {
//        for(j=i+1;j<10;j++)
//        {
//            if(x[i]<0)
//            {
//                tmp=x[i];
//                x[i]=x[j];
//                x[j]=tmp;
//            }
//        }
//    }
//    printf("\n Sorted elements are with negative on one side\n");
//    for(i=0;i<10;i++)
//    {
//        printf("%5d",x[i]);
//    }
//    return 0;
//}
//
/////4. WRITE A C FUNCTION  TO FIND MAXIMUM SUM OF K CONSECUTIVE ELEMENTS IN GIVEN ARRAY
//#include <stdio.h>
//int maxSum(int x[],int n,int k)
//{
//    int i,j,sum=0,maxSum=0,flg=0;
//
//    for (i=0;i<n-1;i++)
//    {
//        sum = 0;
//        for (j=0;j<k;j++)
//        {
//            sum = sum+x[i+j];
//        }
//        if (sum>maxSum)
//        {
//            maxSum=sum;
//            flg = 1;
//        }
//    }
//
//    if (flg == 1)
//    {
//        return maxSum;
//    }
//}
//
//int main()
//{
//    int x[5],i,k;
//
//    printf("\n Enter the elements:\n");
//    for (i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    printf("\n Enter the value of k:\n");
//    scanf("%d",&k);
//
//    int result = maxSum(x,5,k);
//
//    printf("\n Max sum of %d consecutive elements is: %d\n",k,result);
//
//
//    return 0;
//}
//


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

///*********************************STRING PROBLEMS**********************************************************
/////. 1.ENTER ANY STRING AND INTERCHANGE THE FIRST AND LAST CHARACTER OF EACH WORD
//#include<stdio.h>
//    int main()
//    {
//        int i,j,tmp;
//        char str[100];
//        printf("\n Enter any string: ");
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
//        printf("%s",str);
//        return 0;
//    }
//
/// 2. ENTER ANY STRING AND SORT EACH WORD OF STRING ALPHABETICALLY
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//int main()
//{
//    int i,j,t;
//    char str[100],tmp;
//
//    printf("\n Enter any string: ");
//    gets(str);
//
//    i=0;
//    while(str[i]!='\0')
//    {
//        for( ;str[i]==32;i++);
//        for(j=i;(str[j+1]!=32 && str[j+1]!=0);j++);
//
//        do
//        {
//            if (str[i]<str[j])
//            {
//                tmp=str[i];
//                str[i]=str[j];
//                str[j]=tmp;
//            }
//            i++;
//            j--;
//        }while(i<=j);
//        i=j;
//    }
//    printf("\n Alphabetically: ");
//    puts(str);
//    return 0;
//}
//
/// 6. WAP TO COUNT OCCURANCE OF WORD IN A STRING
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//    char str[100],word[100];
//    int i,j,flg;
//    int length,wlength,cnt=0;
//
//    printf("\n Enter any string: ");
//    gets(str);
//
//    printf("\n Enter word to be searched: ");
//    gets(word);
//
//    for(i=0;str[i]!='\0';i++);
//    length=i;
//
//    for(i=0;word[i]!='\0';i++);
//    wlength=i;
//
//    for(i=0;i<length;i++)
//    {
//        flg=1;
//        for(j=0;j<wlength;j++)
//        {
//           if(str[i+j]!=word[j])
//           {
//               flg=0;
//               break;
//           }
//        }
//        if(flg==1)
//        {
//            cnt++;
//        }
//    }
//    printf("\n Occurance is: %d",cnt);
//
//}
//
///9. ENTER ANY STRING THROUTH AND DISPLAY THE STARTING AND ENDING CHARACTER OF EACH WORD
//#include<stdio.h>
//    int main()
//    {
//
//        int i,sp,ep,cnt=0;
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
//        printf("%c",str[sp]);
//        while(sp<=ep)
//        {
//            if((str[sp]!=32 && str[sp-1]==32)||(str[sp]!=32 && (str[sp+1]==32 || str[sp+1]==0)))
//            {
//               printf("%c",str[sp]);
//            }
//            sp++;
//            if(str[sp]==32 && str[sp+1]!=32)
//            {
//                cnt++;
//            }
//        }
//        printf("\n Word count:%d",cnt+1);
//        return 0;
//    }

///
///******************* POINTER PROBLEMS**************************
/// 1. WAP TO FIND LARGEST NUMBER USING DYNAMIC MEMORY ALLOCATION
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int *p,cnt,i,large=0;
//    printf("\n Enter the count of elements");
//    scanf("%d",&cnt);
//
//    p=(int*)malloc(cnt*sizeof(int));
//
//    printf("\n Enter the %d elements",cnt);
//    for(i=0;i<cnt;i++)
//    {
//        scanf("%d",(p+i));
//    }
//
//    printf("\n Entered elements are: ");
//    for(i=0;i<cnt;i++)
//    {
//        printf("%5d",*(p+i));
//    }
//
//    for(i=0;i<cnt;i++)
//    {
//        if(*(p+i)>large)
//        {
//            large=*(p+i);
//        }
//    }
//    printf("\n Largest number is: %d",large);
//
//    return 0;
//}
//
/// 3. WAP TO SORT NUMBERS USING PTR
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int *p,i,j,tmp,cnt;
//
//    printf("\n Enter the cnt: ");
//    scanf("%d",&cnt);
//    p=(int*)malloc(cnt*sizeof(int));
//    printf("\n Enter the %d elements",cnt);
//    for(i=0;i<cnt;i++)
//    {
//        scanf("%d",(p+i));
//    }
//
//    printf("\n Entered elements are before sorting: ");
//    for(i=0;i<cnt;i++)
//    {
//        printf("%5d",*(p+i));
//    }
//
//    for(i=0;i<cnt-1;i++)
//    {
//        for(j=i+1;j<cnt;j++)
//        {
//            if(*(p+i)>*(p+j))
//            {
//                tmp=*(p+i);
//                *(p+i)=*(p+j);
//                *(p+j)=tmp;
//            }
//        }
//    }
//    printf("\n Sorted elements are: ");
//    for(i=0;i<cnt;i++)
//    {
//        printf("%5d",*(p+i));
//    }
//    return 0;
//}
//
/// 8. WAP TO PRINT VALUE AND ADDRESS OF ELEMENTS OF AN ARRAY USING PTR
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int *p,i,cnt;
//
//    printf("\n Enter the cnt");
//    scanf("%d",&cnt);
//    p=(int*)malloc(cnt*sizeof(int));
//
//    printf("\n Enter the %d elements",cnt);
//    for(i=0;i<cnt;i++)
//    {
//        scanf("%d",(p+i));
//    }
//
//    printf("\n address: ");
//    for(i=0;i<cnt;i++)
//    {
//        printf("\n %u",p+i);
//    }
//
//    printf("\n Value: ");
//    for(i=0;i<cnt;i++)
//    {
//        printf("%5d",*(p+i));
//    }
//    return 0;
//}
//
///9. WAP TO PERFORM CALL BY VALUE AND CALL BY REFERENCE
//#include<stdio.h>
//#include<stdlib.h>
//
//void swap(int x, int y)
//{
//    int tmp;
//    tmp=x;
//    x=y;
//    y=tmp;
//
//}
//int main()
//{
//    int x,y;
//
//    printf("\n Enter the value of x and y");
//    scanf("%d %d",&x,&y);
//
//    printf("\n value of x and y before swapping is %d %d",x,y);
//
//    swap(x,y);
//
//    printf("\n value of x and y After swapping is %d %d",x,y);
//
//}
//
///CALL BY REFERENCE
//#include<stdio.h>
//#include<stdlib.h>
//
//void swap(int *x, int *y)
//{
//    int tmp;
//    tmp=*x;
//    *x=*y;
//    *y=tmp;
//
//}
//int main()
//{
//    int x,y;
//
//    printf("\n Enter the value of x and y");
//    scanf("%d %d",&x,&y);
//
//    printf("\n value of x and y before swapping is %d %d",x,y);
//
//    swap(&x,&y);
//
//    printf("\n value of x and y After swapping is %d %d",x,y);
//
//}
//
/// 5. WAP C PRG TO PERFORM ARRAY OF POINTERS
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    int *p,cnt,i;
//
//    printf("\n Enter the cnt");
//    scanf("%d",&cnt);
//
//    p=(int*)malloc(cnt*sizeof(int));
//    printf("\n Enter the %d elements",cnt);
//    for(i=0;i<cnt;i++)
//    {
//        scanf("%d",(p+i));
//    }
//
//    printf("\n Entered elements are");
//    for(i=0;i<cnt;i++)
//    {
//        printf("%5d",*(p+i));
//    }
//    return 0;
//
//}
//
///6. WAP TO IMPLEMENT STACK OPERATIONS
//#include<stdio.h>
//#include<stdlib.h>
//    int main()
//    {
//        int i,top;
//        int *p,*t,cnt;
//        printf("\n Enter the cnt");
//        scanf("%d",&cnt);
//        p=(int*)malloc(cnt*sizeof(int));
//        t=(int*)malloc(cnt*sizeof(int));
//        printf("\n Enter the %d elements",cnt);
//        for(i=0;i<cnt;i++)
//        {
//            scanf("%d",(p+i));
//        }
//
//        printf("\n Entered elements are:");
//        for(i=0;i<cnt;i++)
//        {
//            printf("%5d",*(p+i));
//        }
//
//        top=-1;
//        i=0;
//        //insert
//        while(i<cnt)
//        {
//            ++top;
//            t[top]=*(p+i);
//            i++;
//        }
//        //extract
//        i=0;
//        while(i<cnt)
//        {
//            *(p+i)=t[top];
//            top--;
//            i++;
//        }
//        printf("\n Reverse array:");
//        for(i=0;i<cnt;i++)
//        {
//            printf("%5d",*(p+i));
//        }
//        return 0;
//    }
//
/// 4. WAP TO READ AND PRINT STUDENT DETAILS
//#include<stdio.h>
//#include<stdlib.h>
//struct student
//{
//	char nm[40];
//	int rno;
//	float per;
//};
//
//int cnt;
//void display(struct student s[])
//{
//    int i;
//    printf("\n student info: \n");
//	for(i=0;i<cnt;i++)
//	{
//		printf("\n %s \t %d \t %.2f",(s+i)->nm, (s+i)->rno, (s+i)->per);
//	}
//}
//
//int main()
//{
//	struct student *s;
//	int i;
//
//	printf("\n Enter the student count: ");
//	scanf("%d",&cnt);
//
//	s=(struct student*)malloc(cnt*sizeof(struct student));
//
//	printf("\n Enter the student info of %d students:   \n",cnt);
//
//	for(i=0;i<cnt;i++)
//	{
//		printf("\n Enter the student name: ");
//        	fflush(stdin);
//		gets(s[i].nm);
//
//		printf("\n Enter the rno and percentage: ",i+1);
//		scanf("%d %f",&(s+i)->rno,&(s+i)->per);
//	}
//	display(s);
//
//	return 0;
//}
//
/// 10. WAP TO UNDERSTAND HOW POINTER TO STRUCTURE VARIABLE IS SENT TO FUNCTION
//#include<stdio.h>
//#include<stdlib.h>
//
//void add(int a,int b)
//{
//	int z;
//	z=a+b;
//	printf("\n Addition is: %d",z);
//}
//void multi(int a,int b)
//{
//	int z;
//	z=a*b;
//	printf("\n multi. is: %d",z);
//}
//int main()
//{
//	int x,y;
//    void (*fptr)(int,int);
//
//	printf("\n Enter the values of x and y: ");
//	scanf("%d %d",&x,&y);
//	add(x,y);
//	multi(x,y);
//
//	fptr=&add;
//	fptr(x,y);
//
//	fptr=&multi;
//	fptr(x,y);
//
//	return 0;
//}
//
/// 7. WAP TO SHOW AN EXAMPLE OF POINTER TO POINTER
//#include<stdio.h>
//#include<stdlib.h>
//    int main()
//    {
//        int *p[3],mat[3],i,j;
//        printf("\n Enter the runs scored by 3 players in different matches:");
//        for(i=0;i<3;i++)
//        {
//            printf("\n Player %d",i+1);
//            printf("\n Enter the match cnt");
//            scanf("%d",&mat[i]);
//            p[i]=(int*)malloc(mat[i]*sizeof(int));
//            printf("\n Enter the runs scored in %d matches",mat[i]);
//            for(j=0;j<mat[i];j++)
//            {
//                printf("\n Match %d",j+1);
//                scanf("%d",*(p+i)+j);
//            }
//        }
//        printf("\n Score Card \n");
//        for(i=0;i<3;i++)
//        {
//            printf("\n Player %d=>",i+1);
//            for(j=0;j<mat[i];j++)
//            {
//                printf("\t Match %d=>",j+1);
//                printf("%7d",*(*(p+i)+j));
//            }
//        }
//        return 0;
//    }

/// 2. WAP TO REVERSE ORDER OF WORD IN STRING USING PTR
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//    char str[100],tmp;
//    int i,j;
//    printf("\n Enter any string: ");
//    gets(str);
//    i=0;
//    while(str[i]!='\0')
//    {
//        for(i=0;str[i]!='\0';i++);
//        for(j=i;(str[j]!=32 && str[j]!=32);j++);
//
//            tmp=str[i];
//            str[i]=str[j];
//            str[j]=tmp;
//        i=j;
//    }
//
//    puts(str);
//}

///
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main() {
//    char str[100], *ptr, *start, *end, tmp;
//    int len;
//
//    printf("\nEnter any string: ");
//    gets(str);
//
//    len = strlen(str);
//
//    // Reverse the entire string
//    for (start = str, end = str + len - 1; start < end; start++, end--) {
//        tmp = *start;
//        *start = *end;
//        *end = tmp;
//    }
//
//    // Reverse each word in the string
//    ptr = str;
//    while (*ptr != '\0')
//    {
//        start = ptr;
//
//        // Move to the end of the word
//        while (*ptr != 32&& *ptr != '\0')
//        {
//            ptr++;
//        }
//
//        end = ptr - 1;
//
//        // Reverse the word
//        while (start < end)
//        {
//            tmp = *start;
//            *start = *end;
//            *end = tmp;
//
//            start++;
//            end--;
//        }
//
//        // Move to the next word
//        if (*ptr != '\0')
//        {
//            ptr++;
//        }
//    }
//
//    printf("\nReversed string: %s\n", str);
//
//    return 0;
//}

///************* FUNCTION *****************
/// 1. WAP TO FIND SUM OF ELEMENTS OF ARRAY USING RECURSION
//#include<stdio.h>
//
//int findSum(int x[], int n)
//{
//    if (n == 0)
//    {
//         return 0;
//    }
//
//    return x[n - 1] + findSum(x, n - 1);
//}
//
//int main()
//{
//    int x[10], i, sum;
//
//    printf("\n Enter the elements:\n");
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%d", &x[i]);
//    }
//
//    printf("\n Entered elements:\n");
//    for (i = 0; i < 10; i++)
//    {
//        printf("%5d", x[i]);
//    }
//
//    sum = findSum(x, 10);
//
//    printf("\n Sum of elements is: %d", sum);
//    return 0;
//}
//
///2. WAP TO SWAP TWO STRINGS USING FUNCTION
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//
//void swap(char str1[],char str2[],char tmp[])
//{
//    tmp=str1;
//    str1=str2;
//    str2=tmp;
//
//    printf("\n After swapping first string is %s",str1);
//    printf("\n After swapping second string is %s",str2);
//
//}
//int main()
//{
//    char str1[100],str2[100],tmp[100];
//
//    printf("\n Enter first string: ");
//    gets(str1);
//
//    printf("\n Enter second string: ");
//    fflush(stdin);
//    gets(str2);
//
//    printf("\n Before swapping first string is %s",str1);
//    printf("\n before swapping second string is %s\n",str2);
//
//    swap(str1,str2,tmp);
//
//    return 0;
//}
//
/// 3. WAP TO CALCULATE FACTORIAL
/// 1. simple function
//#include<stdio.h>
//
//void fact()
//{
//    int no,fact=1,i;
//    printf("\n Enter any number");
//    scanf("%d",&no);
//
//    for(i=1;i<=no;i++)
//    {
//        fact=fact*i;
//    }
//    printf("\n Factorial is %d",fact);
//}
//int main()
//{
//
//    fact();
//    return 0;
//
//}
//
///2.with argument without return type
//#include<stdio.h>
//void fact(int no)
//{
//    int i,fact=1;
//    for(i=1;i<=no;i++)
//    {
//        fact = fact *i;
//    }
//    printf("\n Factorial of number is: %d",fact);
//}
//int main()
//{
//    int no;
//    printf("\n Enter any number: ");
//    scanf("%d",&no);
//
//    fact(no);
//    return 0;
//}
//
/// 3. without argument with return type
//#include<stdio.h>
//int fact()
//{
//    int no,fact=1,i;
//    printf("\n Enter any number: ");
//    scanf("%d",&no);
//    for(i=1;i<=no;i++)
//    {
//        fact=fact*i;
//    }
//    return fact;
//}
//
//int main()
//{
//    int ans;
//    ans=fact();
//
//    printf("\n Factorial is:%d",ans);
//    return 0;
//}
//
///4.With argument with return type
//#include<stdio.h>
//int fact(int no)
//{
//    int i,fact=1;
//    for(i=1;i<=no;i++)
//    {
//        fact=fact*i;
//    }
//    return fact;
//}
//int main()
//{
//    int no,ans;
//    printf("\n Enter any number: ");
//    scanf("%d",&no);
//
//    ans=fact(no);
//
//    printf("\n Factorial is:%d",ans);
//
//}
//
///5.Recursion
//#include<stdio.h>
//int fact(int no)
//{
//    if(no==1)
//    {
//        return 1;
//    }
//    else
//    {
//        return no *fact(no-1);
//    }
//}
//int main()
//{
//    int no,ans;
//    printf("\n Enter any number: ");
//    scanf("%d",&no);
//
//    ans= fact(no);
//    printf("\n Factorial is: %d",ans);
//}
//
//
///4.  WAP TO FIND SUM OF SERIES 1!/1+2!/2+3!/3+4!/4+5!/5
//#include<stdio.h>
//int main()
//{
//    int n,i;
//    float fact=1,sum=0;
//    printf("\n Enter the value of n");
//    scanf("%d",&n);
//
//    for(i=1;i<=n;i++)
//    {
//        fact=fact*i;
//        sum=sum+(fact/i);
//
//    }
//    printf("\n Sum is %f",sum);
//    return 0;
//
//}
//
/// WAP TO CHECK STRINGS ARE ANAGRAM OR NOT
//#include <stdio.h>
//#include <string.h>
//
//int main()
//{
//    char str1[100], str2[100];
//    int i, len1, len2, flg = 0;
//
//    printf("\nEnter string 1: ");
//    gets(str1);
//
//    printf("\nEnter string 2: ");
//    gets(str2);
//
//    for(i=0;str1[i]!='\0';i++);
//    len1=i;
//    for(i=0;str2[i]!='\0';i++);
//    len2=i;
//    if(len1 != len2)
//    {
//        printf("\n Strings are Not anagram\n");
//        return 0;
//    }
//
//    for (i = 0; i < len1 - 1; i++)
//    {
//        for (int j = 0; j < len1 - i - 1; j++)
//        {
//            if (str1[j] > str1[j + 1])
//            {
//                char temp = str1[j];
//                str1[j] = str1[j + 1];
//                str1[j + 1] = temp;
//            }
//            if (str2[j] > str2[j + 1])
//            {
//
//                char temp = str2[j];
//                str2[j] = str2[j + 1];
//                str2[j + 1] = temp;
//            }
//        }
//    }
//
//    for (i = 0; i < len1; i++)
//    {
//        if (str1[i] != str2[i])
//        {
//            flg = 1;
//            break;
//        }
//    }
//
//    if (flg == 0)
//    {
//        printf("\n Strings are anagram \n");
//    }
//    else
//    {
//        printf("\n Strings are Not anagram \n");
//    }
//
//    return 0;
//}


//
/// 6.WAP TO CHECK ARMSTRONG,PERFECT AND PRIME NUMBERS
//#include<stdio.h>
//void armStrong(int no)
//{
//    int rem,cnt=0,sum=0,a,i;
//    int tmp=no;
//    while(no!=0)
//    {
//        cnt++;
//        no=no/10;
//    }
//    no=tmp;
//    while(no!=0)
//    {
//        a=1;
//        rem=no%10;
//
//        for(i=1;i<=cnt;i++)
//        {
//            a=a*rem;
//        }
//        sum=sum+a;
//        no=no/10;
//    }
//    no=tmp;
//    if(no==sum)
//    {
//        printf("\n %d is Armstrong",no);
//    }
//    else
//    {
//        printf("\n %d is Not Armstrong",no);
//    }
//}
//
//void perfect(int no)
//{
//    int i,sum=0;
//
//    for(i=1;i<no;i++)
//    {
//        if(no%i==0)
//        {
//            sum= sum+i;
//        }
//    }
//    if(sum==no)
//    {
//        printf("\n %d is Perfect",no);
//    }
//    else
//    {
//        printf("\n %d is Not-Perfect",no);
//    }
//}
//
//void prime(int no)
//{
//    int d=2,flg=0;
//
//    while(d<=no/2)
//    {
//        if(no%d==0)
//        {
//            flg=1;
//            break;
//        }
//        d++;
//    }
//    if(flg==0 && no!=1)
//    {
//        printf("\n %d is Prime Number",no);
//    }
//    else
//    {
//        printf("\n %d is Not-Prime Number",no);
//    }
//
//}
//int main()
//{
//    int no;
//
//    printf("\n Enter any number: ");
//    scanf("%d",&no);
//
//    armStrong(no);
//    perfect(no);
//    prime(no);
//    return 0;
//}
//
/// 8. WAP TO ENTER THE N NUMBERS AND DISPLAY THE LIST OF EVEN NUMBERS UISNG FUNCTIONS
//#include<stdio.h>
//#include<stdlib.h>
//void evenNumbers(int *p,int n)
//{
//    int i;
//    for(i=0;i<n;i++)
//    {
//        if(*(p+i)%2==0)
//        {
//            printf("%5d",*(p+i));
//        }
//    }
//}
//int main()
//{
//    int n,*p,i;
//    printf("\n Enter the n th term: ");
//    scanf("%d",&n);
//
//    p=(int*)malloc(n*sizeof(int));
//    printf("\n Enter the %d elements",n);
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",p+i);
//    }
//    evenNumbers(p,n);
//    return 0;
//
//}
//
/// 9.WAP TO FIND MAX BETN 3 NUMBERS USING NESTED FUNCTION
//#include<stdio.h>
//void findMax(int n1,int n2,int n3)
//{
//    if(n1>n2)
//    {
//        if(n1>n3)
//        {
//            printf("Max is:%d",n1);
//        }
//    }
//    else
//    {
//        if(n2>n3)
//        {
//            printf("Max is:%d",n2);
//        }
//        else
//        {
//            printf("Max is:%d",n3);
//        }
//    }
//}
//
//int main()
//{
//    int n1,n2,n3;
//
//    printf("\n Enter three numbers: ");
//    scanf("%d%d%d",&n1,&n2,&n3);
//
//    findMax(n1,n2,n3);
//    return 0;
//
//}
//
/// 10.WAP TO ENTER ANY NUMBER THROUGH KEYBOARD AND INSERT NEW NUMBER ON INSERTED POSITION
//
//#include<stdio.h>
//void newNumber(int rev)
//{
//    int i,rem,pos,n,nn=0;
//    printf("\nEnter position and number to be inserted: ");
//    scanf("%d %d",&pos,&n);
//    for (i=0;rev!=0;i++)
//    {
//        rem=rev%10;
//
//        if(pos==i)
//        {
//            nn=nn*10+n;
//        }
//        nn=nn*10+rem;
//
//        rev=rev/10;
//    }
//
//    if(pos==i)
//    {
//        nn=nn*10+n;
//    }
//
//    printf("\n The new number is: %d \n", nn);
//}
//int main()
//{
//    int no,rev=0,rem,tmp;
//
//    printf("\n Enter any number: ");
//    scanf("%d",&no);
//
//    tmp=no;
//    while (no!=0)
//    {
//        rem = no % 10;
//        rev = rev * 10 + rem;
//        no = no / 10;
//    }
//
//    no =tmp;
//
//    newNumber(rev);
//    return 0;
//}

///1. WAP TO CREATE STRUCTURE TO STORE NAMES, SALARY AND HRS OF WORK PER DAY OF 10 EMPLOYEES IN A COMPANY ,WAP TO INCREASE A SALARY DEPENDING ON THE NUMBER OF HRS PER DAY  AS FOLLOWS AN THEN PRINT THE NAMES OF ALL THE EMPLOYEES ALONG WITH THEIR FINAL SALARIES
//
/// HRS OF WORK       8    10     >=12
/// INCREASE IN SAL   $50  $100   $150
//#include<stdio.h>
//struct Employee
//{
//    char nm[50];
//    float sal;
//    int hrs;
//};
//int main()
//{
//    struct Employee e[3];
//    int i;
//    for(i=0;i<3;i++)
//    {
//        printf("\n Enter the name of Employee: ");
//        fflush(stdin);
//        gets(e[i].nm);
//
//        printf("\n Enter the Salary of Employee: ");
//        scanf("%f",&e[i].sal);
//
//        printf("\n Enter the Working hrs of Employee: ");
//        fflush(stdin);
//        scanf("%d",&e[i].hrs);
//    }
//    printf("\n Employee Details: \n ");
//    for(i=0;i<3;i++)
//    {
//        printf("\n Name of Employee: %s \t Salary of Employee: %.2f$ \t Working Hrs: %d",e[i].nm,e[i].sal,e[i].hrs);
//    }
//    for(i=0;i<3;i++)
//    {
//        if(e[i].hrs==8)
//        {
//            e[i].sal=e[i].sal+ 50;
//        }
//        else if((e[i].hrs>8) &&(e[i].hrs<=10))
//        {
//            e[i].sal=e[i].sal+ 100;
//        }
//        else
//        {
//            e[i].sal=e[i].sal+ 150;
//        }
//
//    }
//    printf("\n");
//    printf("\n Employee Details and Salary According to their Working Hrs: \n ");
//    for(i=0;i<3;i++)
//    {
//        printf("\n Name of Employee: %s \t Salary of Employee: %.2f$ \t Working Hrs: %d",e[i].nm,e[i].sal,e[i].hrs);
//    }
//    return 0;
//}
//
/// 4. WAP TO STORE AND PRINT THE ROLL NO,NAME, AGE AND
///    MARKS OF STUDENT USING STRUCTURE
//#include<stdio.h>
//struct Student
//{
//    int rollno;
//    char nm[50];
//    int age;
//    float mrk;
//};
//int main()
//{
//    struct Student s;
//
//    printf("\n Enter the student roll no: ");
//    scanf("%d",&s.rollno);
//
//    printf("\n Enter the student name: ");
//    fflush(stdin);
//    gets(s.nm);
//
//    printf("\n Enter the age of student: ");
//    scanf("%d",&s.age);
//
//    printf("\n Enter the Marks of student: ");
//    scanf("%f",&s.mrk);
//
//    printf("\n Student Roll No: %d \t Name: %s \t age: %d \t Marks: %.2f",s.rollno,s.nm,s.age,s.mrk);
//    return 0;
//}
//
/// 5.WAP TO STORE ROLL NO,(STARTING FROM 1),NAME,AGE OF 5 STUDENT
///   AND THE DISPLAY STUDENT DETAILS
//#include<stdio.h>
//struct Student
//{
//    int rollno;
//    char nm[50];
//    int age;
//};
//int main()
//{
//    struct Student s[5];
//    int i;
//
//    printf("\n Enter the student details: ");
//    for(i=0;i<5;i++)
//    {
//        printf("\n Enter the student roll no: ");
//        scanf("%d",&s[i].rollno);
//
//        printf("\n Enter the student name: ");
//        fflush(stdin);
//        gets(s[i].nm);
//
//        printf("\n Enter the age of student: ");
//        scanf("%d",&s[i].age);
//    }
//    printf("\n Student details: ");
//    for(i=0;i<5;i++)
//    {
//        printf("\n Student Roll No: %d \t Name: %s \t age: %d",s[i].rollno,s[i].nm,s[i].age);
//    }
//    return 0;
//}
//
/// 6.WAP TO STORE AND PRINT THE ROLL NO,NAME, AGE, ADDRESS AND MARKS OF
///   5 STUDENTS USING STRUCTURE
//#include<stdio.h>
//struct Student
//{
//    int rollno;
//    char nm[50];
//    int age;
//    float mrk;
//    char addr[100];
//};
//int main()
//{
//    struct Student s[5];
//    int i;
//    for(i=0;i<5;i++)
//    {
//        printf("\n Enter the student roll no: ");
//        scanf("%d",&s[i].rollno);
//
//        printf("\n Enter the student name: ");
//        fflush(stdin);
//        gets(s[i].nm);
//
//        printf("\n Enter the age of student: ");
//        scanf("%d",&s[i].age);
//
//        printf("\n Enter the Marks of student: ");
//        scanf("%f",&s[i].mrk);
//
//        printf("\n Enter the address of student: ");
//        fflush(stdin);
//        gets(s[i].addr);
//    }
//
//
//    for(i=0;i<5;i++)
//    {
//        printf("\n Student Roll No: %d \t Name: %s \t age: %d \t Marks: %.2f \t Address: %s",s[i].rollno,s[i].nm,s[i].age,s[i].mrk,s[i].addr);
//    }
//    return 0;
//}
//
/// 7. WAP TO ADD TWO DISTANCES IN INCH-FEET USING STRUCTURE THE VALUES OF DISTANCES
///IS TO BE TAKEN FROM USER
//#include<stdio.h>
//struct Distance
//{
//    int feet;
//    int inch;
//};
//void add(struct Distance d1, struct Distance d2)
//{
//    int feet = d1.feet+d2.feet;
//    int inch = d1.inch+d2.inch;
//
//    if(inch>=12)
//    {
//        feet++;
//        inch=inch-12;
//    }
//
//    printf("\n Feet: %d \t inch: %d",feet,inch);
//}
//int main()
//{
//    struct Distance d1,d2;
//
//    printf("\n Enter the distance d1 in feet: ");
//    scanf("%d",&d1.feet);
//    printf("\n Enter the distance d1 in inch: ");
//    scanf("%d",&d1.inch);
//
//    printf("\n Enter the distance d2 in feet: ");
//    scanf("%d",&d2.feet);
//    printf("\n Enter the distance d2 in inch: ");
//    scanf("%d",&d2.inch);
//
//    add(d1,d2);
//    return 0;
//}
//
/// 8. WAP TO ENTER THE MARKS OF 3 STUDENT IN CHEMISTRY, MATHS AND PHYSICS (EACH OF 100)
///USING A STRUCTURE  NAMED MARKS HAVING ELEMENTS roll no, chem_marks, maths_marks, phy_marks
///AND THEN DISPLAY THE PERCENTAGE OF EACH STUDENT
//
//#include<stdio.h>
//struct Marks
//{
//    int rollno;
//    char nm[50];
//    float chem_mrk;
//    float maths_mrk;
//    float phy_mrk;
//    float per;
//};
//
//int main()
//{
//    struct Marks m[3];
//    int i;
//    float tot=0,per=0;
//
//    printf("\n Enter the student details: ");
//    for(i=0;i<3;i++)
//    {
//        printf("\n Enter the Student %d Roll NO: ",i+1);
//        scanf("%d",&m[i].rollno);
//
//        printf("\n Enter the name of Student %d: ",i+1);
//        fflush(stdin);
//        gets(m[i].nm);
//
//        printf("\n Enter the chemistry marks of student %d: ",i+1);
//        scanf("%f",&m[i].chem_mrk);
//
//        printf("\n Enter the maths marks of student %d: ",i+1);
//        scanf("%f",&m[i].maths_mrk);
//
//        printf("\n Enter the physics marks of student %d: ",i+1);
//        scanf("%f",&m[i].phy_mrk);
//    }
//
//    printf("\n Student percentage: ");
//    for(i=0;i<3;i++)
//    {
//        tot=m[i].chem_mrk + m[i].maths_mrk + m[i].phy_mrk;
//        per=tot/3.0;
//
//        printf("\n Student %d percentage: %.2f",i+1,per);
//    }
//
//}
//
/// 9.WAP TO ADD, SUBTRACT AND MULTIPLY TWO COMPLEX NUMBERS USING STRUCTURES TO FUNCTION
//#include <stdio.h>
//struct complex
//{
//    int real;
//    int img;
//};
//
//void sum(struct complex c1, struct complex c2)
//{
//    int real = c1.real + c2.real;
//    int img = c1.img + c2.img;
//
//    printf("\n Sum of two complex numbers is :%d+%di",real,img);
//}
//void subtract(struct complex c1, struct complex c2)
//{
//    int real = c1.real - c2.real;
//    int img = c1.img - c2.img;
//
//    printf("\n Subtraction of two complex numbers is :%d+%di",real,img);
//}
//void multiplication(struct complex c1, struct complex c2)
//{
//    int real = (c1.real*c2.real)-(c1.img*c2.img);
//    int img = (c1.real*c2.img)+(c1.img*c2.real);
//
//    printf("\n Multiplication of two complex numbers is :%d+%di",real,img);
//}
//
//int main()
//{
//    struct complex c1, c2;
//
//    printf("\n Enter the value of c1 (real img): ");
//    scanf("%d %d", &c1.real, &c1.img);
//
//    printf("\n Enter the value of c2 (real img): ");
//    scanf("%d %d", &c2.real, &c2.img);
//
//    sum(c1,c2);
//    subtract(c1,c2);
//    multiplication(c1,c2);
//    return 0;
//}
//
/// 10.WAP  TO STORE ROLL NO,NAME ,AGE(BETN 11 TO 14) AND ADDRESS OF STUDENT (MORE THAN 10),STORE
/// THE INFO OF STUDENT
/// 1.WRITE A FUNCTION TO PRINT THE NAMES OF ALL STUDENT HAVING AGE 14
/// 2.WRITE ANOTHER FUNCTION TO PRINT THE NAMES OF ALL STUDENT HAVING EVEN ROLL NO
/// 3.WRITE ANOTHER FUNCTION TO DISPLAY THE DETAILS OF THE STUDENT WHOSE ROLL NO IS GIVEN (ROLL NO ENTERED BY USER)
//#include<stdio.h>
//struct Student
//{
//    int rollno;
//    char nm[50];
//    int age;
//    char addr[100];
//};
//int i;
//void age(struct Student s[5])
//{
//    printf("\n Names of All Students having age 14: ");
//    for(i=0;i<5;i++)
//    {
//        if(s[i].age==14)
//        {
//            printf("\n Name: %s ",s[i].nm);
//        }
//    }
//}
//void evenroll(struct Student s[5])
//{
//    printf("\n Names of all student having even roll no: ");
//    for(i=0;i<5;i++)
//    {
//        if(s[i].rollno%2==0)
//        {
//            printf("\n Name: %s ",s[i].nm);
//        }
//    }
//}
//void getroll(struct Student s[5])
//{
//    int r;
//    printf("\n Enter the Roll No: ");
//    scanf("%d",&r);
//
//    for(i=0;i<5;i++)
//    {
//        if(s[i].rollno==r)
//        {
//            printf("\n Student Roll no: %d \t Name: %s \t Age: %d \t Address: %s",s[i].rollno,s[i].nm,s[i].age,s[i].addr);
//        }
//    }
//}
//int main()
//{
//    struct Student s[5];
//
//    printf("\n Enter the student details: ");
//    for(i=0;i<5;i++)
//    {
//        printf("\n Enter the student roll no: ");
//        scanf("%d",&s[i].rollno);
//
//        printf("\n Enter the name of student: ");
//        fflush(stdin);
//        gets(s[i].nm);
//
//        printf("\n Enter the age of student: ");
//        scanf("%d",&s[i].age);
//
//        printf("\n Enter the address of student: ");
//        fflush(stdin);
//        gets(s[i].addr);
//    }
//
//    printf("\n Entered Details are: \n");
//
//    for(i=0;i<5;i++)
//    {
//        printf("\n Student Roll no: %d \t Name: %s \t Age: %d \t Address: %s",s[i].rollno,s[i].nm,s[i].age,s[i].addr);
//    }
//
//    age(s);
//    evenroll(s);
//    getroll(s);
//    return 0;
//}
//
/// 11.WAP TO STORE NAME ,ACCOUNT NUMBER AND BALANCE OF CUSTOMERS
///    1.WRITE A FUNCTION TO PRINT THE NAMES OF ALL CUSTOMERS HAVING BALANCE LESS THAN $200
///    2.WRITE A FUNCTION TO ADD $100 IN THE BALANCE OF ALL CUSTOMERS  HAVING MORE THAN $1000 IN THEIR BALANCE AND THEN PRINT INCREMENTED VALUE OF THEIR BALANCE
//#include<stdio.h>
//struct Bank
//{
//    char nm[50];
//    int accno;
//    float bal;
//};
//int i;
//void balless(struct Bank b[5])
//{
//    printf("\n Names of all customers having balance less than $200 \n");
//
//    for(i=0;i<5;i++)
//    {
//        if(b[i].bal<200)
//        {
//            printf("\n Account Holder Name: %s",b[i].nm);
//        }
//    }
//}
//void balincr(struct Bank b[5])
//{
//    printf("\n Account Details with incremented Balance: \n ");
//
//    for(i=0;i<5;i++)
//    {
//        if(b[i].bal>1000)
//        {
//            b[i].bal=b[i].bal+100;
//            printf("\n Account Holder Name: %s \t Account number: %d \t Account Balance: %.2f$",b[i].nm,b[i].accno,b[i].bal);
//        }
//    }
//}
//int main()
//{
//    struct Bank b[5];
//
//    printf("\n Enter the Bank Account Information: ");
//    for(i=0;i<5;i++)
//    {
//        printf("\n Enter the name of Account holder: ");
//        fflush(stdin);
//        gets(b[i].nm);
//
//        printf("\n Enter the Account Number: ");
//        scanf("%d",&b[i].accno);
//
//        printf("\n Enter the Balance of account: ");
//        scanf("%f",&b[i].bal);
//    }
//
//    printf("\n Bank Account Information: \n");
//    for(i=0;i<5;i++)
//    {
//        printf("\n Account Holder Name: %s \t Account number: %d \t Account Balance: %.2f$",b[i].nm,b[i].accno,b[i].bal);
//    }
//    balless(b);
//    balincr(b);
//
//    return 0;
//}
//
/// 12. WAP TO COMPARE TWO DATES ENTERED BY USER MAKE A STRUCTURE NAMES DATE TO STORE ELEMENTS
///     DAY,MONTH AND YEAR TO STORE DATES IF DATES ARE EQUAL ,DISPLAY "DATES ARE EQUAL" OTHERWISE
///     "DATES ARE NOT EQUAL"
//#include<stdio.h>
//struct Date
//{
//    int day;
//    int month;
//    int year;
//};
//int main()
//{
//    struct Date d1,d2;
//    int flg=0;
//    printf("\n Enter the day, month and year of date 1: ");
//    scanf("%d %d %d",&d1.day,&d1.month,&d1.year);
//
//    printf("\n Enter the day, month and year of date 2: ");
//    scanf("%d %d %d",&d2.day,&d2.month,&d2.year);
//
//    printf("\n Entered date 1 :");
//    printf("%d-%d-%d",d1.day,d1.month,d1.year);
//
//    printf("\n Entered date 2 :");
//    printf("%d-%d-%d",d2.day,d2.month,d2.year);
//
//
//    if(d1.day!=d2.day || d1.month!=d2.month || d1.year!=d2.year)
//    {
//        flg=1;
//    }
//    if(flg==0)
//    {
//       printf("\n Dates are Equal");
//    }
//    else
//    {
//        printf("\n Dates are not equal");
//    }
//    return 0;
//}

/// 3. WAP TO CREATE STRUCTURE DATE HAVING DAY,MONTH AND YEAR STORE CURRENT DATE AND ADD 45 DAYS TO
///    CURRENT AND DISPLAY FINAL DATE
//#include<stdio.h>
//struct Date
//{
//    int day;
//    int month;
//    int year;
//};
//int main()
//{
//    struct Date d;
//    printf("\n Enter the date: ");
//    scanf("%d %d %d",&d.day,&d.month,&d.year);
//
//    printf("\n Entered date is: ");
//    printf("%d-%d-%d",d.day,d.month,d.year);
//
//    if(d.month==1 || d.month==3 || d.month==5 || d.month==7 || d.month==8 || d.month==10)
//    {
//        d.day=45-31-d.day+1;
//        d.month++;
//        printf("\n Final Date: %d-%d-%d",d.day,d.month,d.year);
//
//
//    }
//    else if(d.month==4 || d.month==6 || d.month==9 || d.month==11)
//    {
//        if(d.day<16)
//        {
//            d.day=d.day+45;
//            d.month++;
//            d.day=d.day-30;
//            printf("\n Final Date: %d-%d-%d",d.day,d.month,d.year);
//        }
//        else
//        {
//            d.day=d.day+45;
//            d.month=d.month+2;
//            d.day=d.day-30;
//            d.day=d.day-31;
//            printf("\n Final Date: %d-%d-%d",d.day,d.month,d.year);
//        }
//
//    }
//    else if(d.month==2 && d.year%4==0)
//    {
//        d.day=d.day+45;
//        d.month++;
//        d.day=d.day-29;
//        printf("\n Final Date: %d-%d-%d",d.day,d.month,d.year);
//    }
//    else if(d.month==2 && d.year%4!=0)
//    {
//        d.day=d.day+45;
//        d.month++;
//        d.day=d.day-28;
//        printf("\n Final Date: %d-%d-%d",d.day,d.month,d.year);
//    }
//    else if(d.month==12)
//    {
//        d.day=d.day+45;
//        d.month=1;
//        d.year++;
//        d.day=d.day-31;
//        printf("\n Final Date: %d-%d-%d",d.day,d.month,d.year);
//    }
//    return 0;
//}

///
//#include<stdio.h>
//
//struct Date
//{
//    int day;
//    int month;
//    int year;
//};
//
//int main()
//{
//    struct Date d;
//    printf("\nEnter the current date (DD MM YYYY): ");
//    scanf("%d %d %d", &d.day, &d.month, &d.year);
//
//    printf("\nEntered date is: %d-%d-%d", d.day, d.month, d.year);
//
//    int daysToAdd = 45;
//
//    while (daysToAdd > 0) {
//        int daysInMonth;
//        switch(d.month) {
//            case 2:
//                daysInMonth = ((d.year % 4 == 0 && d.year % 100 != 0) || (d.year % 400 == 0)) ? 29 : 28;
//                break;
//            case 4:
//            case 6:
//            case 9:
//            case 11:
//                daysInMonth = 30;
//                break;
//            default:
//                daysInMonth = 31;
//                break;
//        }
//
//        if (d.day + daysToAdd <= daysInMonth) {
//            d.day += daysToAdd;
//            daysToAdd = 0;
//        } else {
//            daysToAdd -= (daysInMonth - d.day + 1);
//            d.day = 1;
//            if (d.month == 12) {
//                d.month = 1;
//                d.year++;
//            } else {
//                d.month++;
//            }
//        }
//    }
//
//    printf("\n Final Date after adding 45 days: %d-%d-%d\n", d.day, d.month, d.year);
//
//    return 0;
//}


///  PATTERN TEST***********
//#include<stdio.h>
//int main()
//{
//    int i,j;
//    for(i=1;i<=4;i++)
//    {
//        for(j=1;j<=4;j++)
//        {
//            if(j<=i)
//            {
//                printf("%d",j);
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}

///    Q4
#include<stdio.h>
//int main()
//{
//    int i,j,t;
//
//    for(i=1;i<=4;i++)
//    {
//        t=6;
//        for(j=1;j<=9;j++)
//        {
//            if(i<=j)
//            {
//                printf("%d",t);
//            }
//            t++;
//        }
//        printf("\n");
//    }
//    for(i=1;i<=9;i++)
//    {
//        t=5;
//        for(j=5;j<=9;j++)
//        {
//            if(i<=j)
//            {
//                printf("%d",t);
//            }
//            t--;
//        }
//        printf("\n");
//    }
//    return 0;
//}

///
//#include<stdio.h>
//int main()
//{
//    int i,j;
//    for(i=1;i<=8;i++)
//    {
//        for(j=1;j<=7;j++)
//        {
//            if(j==4)
//            {
//                printf("%d",i);
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}

/// ******* PATTERN TEST
/// WAP 1
//#include<stdio.h>
//int main()
//{
//    int i,j,t;
//    for(i=0;i<5;i++)
//    {
//        t=1;
//        for(j=0;j<5;j++)
//        {
//            if(j<=i)
//            {
//                printf("%d",t);
//            }
//            t++;
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
/// WAP 2
///   1
///   2 3
///   3 4 5
///   5 6 7 8
//#include<stdio.h>
//int main()
//{
//    int i,j,t=1;
//    for(i=1;i<=4;i++)
//    {
//        t=i;
//        for(j=1;j<=4;j++)
//        {
//            if(j<=i)
//            {
//                printf("%d",t);
//            }
//            t++;
//        }
//        if(i==4)
//        {
//            i=i+1;
//        }
//        printf("\n");
//    }
//    return 0;
//
//}

/// WAP 3
//#include<stdio.h>
//int main()
//{
//    int i,j;
//    for(i=9;i>=1;i--)
//    {
//        for(j=9;j>=1;j--)
//        {
//            if(i>=j)
//            {
//                printf("%d ",j);
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}

/// WAP 6
///   1
///   1 2 1
///   1 2 3 2 1
///   1 2 3 4 3 2 1

//#include<stdio.h>
//int main()
//{
//    int i,j,t;
//    for(i=1;i<=4;i++)
//    {
//        t=1;
//        for(j=1;j<=4;j++)
//        {
//            if(j<=i)
//            {
//                printf("%d ",t);
//                t++;
//            }
//
//        }
//        //printf("\n t: %d",t);
//        for(j=i-1;j>=1;j--)
//        {
//            printf("%d ",t-2);
//            t--;
//        }
//        printf("\n");
//    }
//    return 0;
//}

/// WAP
//#include<stdio.h>
//int main()
//{
//    int i,j;
//    for(i=1;i<=4 ;i++)
//    {
//        for(j=1;j<=4-i;j++)
//        {
//            printf(" ");
//        }
//        for(j=1;j<=2*i-1;j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    for(i=1;i<=4;i++)
//    {
//        for(j=5;j>=1;j++)
//        {
//
//        }
//    }
//    return 0;
//}

///
//#include<stdio.h>
//int main()
//{
//    int i,j;
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//            if(j<(5-i))
//            {
//                printf(" ");
//            }
//            else
//            {
//                printf("*");
//            }
//        }
//        for(j=0;j<=i;j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    for(i=0;i<5;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//            if(j<=i)
//            {
//                printf(" ");
//            }
//            else
//            {
//                printf("*");
//            }
//        }
//        for(j=0;j<5;j++)
//        {
//            if(j<(5-i))
//            {
//                printf("*");
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}

/// LINKED LIST
/// 1.WAP TO CREATE A SINGLY LINKED LIST OF N NODES AND COUNT THE NUMBER OF NODES
//#include<stdio.h>
//#define MAX 50
//int main()
//{
//    int x[MAX],i,n,cnt=0;
//    printf("\n Enter the number of nodes: ");
//    scanf("%d",&n);
//    if(n>MAX)
//    {
//        printf("\n Insufficient space");
//        return 0;
//    }
//    printf("\n Enter the Nodes: ");
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n Enter the Nodes: ");
//    for(i=0;i<n;i++)
//    {
//        printf("%5d",x[i]);
//        cnt++;
//    }
//    printf("\n Total Number of Nodes: %d",cnt);
//    return 0;
//}
/// 2. WAP TO INSERT A NEW NODE AT THE BEGINNING OF SINGLY LINKED LIST
//#include<stdio.h>
//#define MAX 50
//    int main()
//    {
//        int x[MAX],i,n,j,cnt=0;
//        printf("\n Enter Element Count");
//        scanf("%d",&n);
//        if(n>MAX)
//        {
//            printf("\n Insufficient space");
//            return 0;
//        }
//        printf("\n Enter the numbers");
//        for(i=0;i<n;i++)
//        {
//            scanf("%d",&x[i]);
//            cnt++;
//        }
//        printf("\n Entered Elements are");
//        for(i=0;i<n;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        j=cnt;
//        while(j>0)
//        {
//            x[j]=x[j-1];
//            j--;
//        }
//        printf("\n Enter the number");
//        scanf("%d",&x[0]);
//        cnt++;
//        printf("\n New Updated List ");
//        for(i=0;i<cnt;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        return 0;
//    }
//
/// 3. WAP TO INSERT NEW NODE AT THE END OF OF SINGLY LINKED LIST
//#include<stdio.h>
//#define MAX 50
//int main()
//{
//    int x[MAX],i,cnt=0,no,n;
//
//    printf("\n Enter the number of nodes: ");
//    scanf("%d",&n);
//
//    if(n>MAX)
//    {
//        printf("\n Insufficient Memory!");
//    }
//    printf("\n Enter the nodes: ");
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n Entered nodes are: ");
//    for(i=0;i<n;i++)
//    {
//        printf("%5d",x[i]);
//        cnt++;
//    }
//    printf("\n Enter the node to insert: ");
//    scanf("%d",&no);
//    x[cnt]=no;
//    cnt++;
//
//    printf("\n Updated List: ");
//    for(i=0;i<cnt;i++)
//    {
//        printf("%5d",x[i]);
//    }
//    return 0;
//}
//
/// 4. WAP TO INSERT NODE AT POSITION
//#include<stdio.h>
//#define MAX 50
//    int main()
//    {
//        int x[MAX],i,n,j,cnt=0,no,pos;
//        printf("\n Enter Element Count");
//        scanf("%d",&n);
//        if(n>MAX)
//        {
//            printf("\n Insufficient space");
//            return 0;
//        }
//        printf("\n Enter the numbers");
//        for(i=0;i<n;i++)
//        {
//            scanf("%d",&x[i]);
//            cnt++;
//        }
//        printf("\n Entered Elements are");
//        for(i=0;i<n;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        printf("\n Enter the number you want to insert:");
//        scanf("%d",&no);
//        printf("\n Enter the position you want to insert number:");
//        scanf("%d",&pos);
//
//        j=cnt;
//        while(j>pos)
//        {
//            x[j]=x[j-1];
//            j--;
//        }
//        x[pos]=no;
//        cnt++;
//        printf("\n New Updated List ");
//        for(i=0;i<cnt;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        return 0;
//    }
//
//
/// 5.WAP TO DELETE FIRST NODE OF SINGLY LINKED LIST
//#include<stdio.h>
//#define MAX 50
//int main()
//{
//    int x[MAX],i,n,cnt=0;
//    printf("\n Enter the number of nodes: ");
//    scanf("%d",&n);
//
//    if(n>MAX)
//    {
//        printf("\n Insufficient Memory");
//    }
//    printf("\n Enter the nodes: ");
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n Enter the nodes: ");
//    for(i=0;i<n;i++)
//    {
//        printf("%5d",x[i]);
//        cnt++;
//    }
//    cnt=n;
//    printf("\n Delete First node");
//    for(i=0;i<n;i++)
//    {
//        x[i]=x[i+1];
//    }
//    cnt--;
//    printf("\n New Updated node list: ");
//    for(i=0;i<cnt;i++)
//    {
//        printf("%5d",x[i]);
//    }
//    return 0;
//}
//
/// 6. WAP TO DELETE NODE OF POSITION
//#include<stdio.h>
//#define MAX 50
//int main()
//{
//    int x[MAX],i,n,cnt=0,pos;
//    printf("\n Enter the number of nodes: ");
//    scanf("%d",&n);
//
//    if(n>MAX)
//    {
//        printf("\n Insufficient Memory");
//    }
//    printf("\n Enter the nodes: ");
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n Enter the nodes: ");
//    for(i=0;i<n;i++)
//    {
//        printf("%5d",x[i]);
//        cnt++;
//    }
//    cnt=n;
//    printf("\n Enter the position of node for deletion");
//    scanf("%d",&pos);
//    for(i=pos;i<n;i++)
//    {
//        x[i]=x[i+1];
//    }
//    cnt--;
//    printf("\n New Updated node list: ");
//    for(i=0;i<cnt;i++)
//    {
//        printf("%5d",x[i]);
//    }
//    return 0;
//}
//
/// 7. WAP TO DELETE LAST NODE OF SINGLY LINKED LIST
//#include<stdio.h>
//#define MAX 50
//int main()
//{
//    int x[MAX],i,n,cnt=0;
//    printf("\n Enter the number of nodes: ");
//    scanf("%d",&n);
//
//    if(n>MAX)
//    {
//        printf("\n Insufficient Memory");
//    }
//    printf("\n Enter the nodes: ");
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n Enter the nodes: ");
//    for(i=0;i<n;i++)
//    {
//        printf("%5d",x[i]);
//        cnt++;
//    }
//    cnt--;
//    printf("\n New Updated node list: ");
//    for(i=0;i<cnt;i++)
//    {
//        printf("%5d",x[i]);
//    }
//    return 0;
//}
//
/// 8. WAP TO REMOVE DUPLICATES FROM SORTED SINGLY LINKED LIST
//#include<stdio.h>
//int main()
//{
//    int x[7],i,j,cnt=0;
//
//    printf("\n Enter the nodes: ");
//    for(i=0;i<7;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n Original Sorted Linked List: ");
//    for(i=0;i<7;i++)
//    {
//        printf("%5d",x[i]);
//    }
//    for(i=0;i<6;i++)
//    {
//        for(j=i+1;j<7;j++)
//        {
//            if(x[i]==x[j])
//            {
//                x[j]=x[j+1];
//            }
//        }
//        cnt++;
//    }
//    cnt--;
//    printf("\n After Removing Duplicates From Linked List:  \n");
//    for(i=0;i<cnt;i++)
//    {
//        printf("%5d",x[i]);
//    }
//    return 0;
//}
//
/// 9. WAP TO REPLACES SPACE WITH *
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//    char str[100];
//    int i;
//    printf("\n Enter any string: ");
//    gets(str);
//
//    for(i=0;str[i]!='\0';i++)
//    {
//        if(str[i]==32)
//        {
//            str[i]='*';
//        }
//    }
//    puts(str);
//    return 0;
//}
//
/// 10. WAP TO REMOVE SPACES FROM STRING
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//    char str[100];
//    int i, j = 0;
//    printf("\n Enter any string: ");
//    gets(str);
//
//    for (i = 0; str[i] != '\0'; i++)
//    {
//        if (str[i] != 32)
//        {
//            str[j] = str[i];
//            j++;
//        }
//    }
//
//    str[j] = '\0';
//
//    //printf("\n String after removing spaces: %s\n", str);
//    puts(str);
//    return 0;
//}
//
//
/// 11. WAP TO REPLACE LOWERCASE TO UPPERCASE OF STRING
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//    char str[100];
//    int i;
//    printf("\n Enter any string in lowercase: ");
//    gets(str);
//
//    for(i=0;str[i]!='\0';i++)
//    {
//        if(str[i]>=97 && str[i]<=122)
//        {
//            str[i]=str[i]-32;
//        }
//    }
//    puts(str);
//    return 0;
//
//}
//
/// 12. WAP TO ELIMINATE THE VOWELS FROM STRING
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//    char str[100];
//    int i, j = 0;
//
//    printf("\nEnter any string: ");
//    gets(str);
//
//    for (i = 0; str[i] != '\0'; i++)
//    {
//        if (!(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
//              str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'))
//        {
//            str[j] = str[i];
//            j++;
//        }
//    }
//
//    str[j] = '\0';
//
//    puts(str);
//
//    return 0;
//}
//
/// 13 WAP TO REMOVE FIRST CHARACTER FROM STRING
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//int main()
//{
//    char str[100];
//    int i, j = 0;
//    printf("\n Enter any string: ");
//    gets(str);
//
//    for (i = 0; str[i] != '\0'; i++)
//    {
//        if (!(str[i-1] == 32 && str[i]!=32))
//        {
//            str[j] = str[i];
//            j++;
//        }
//    }
//
//    str[j] = '\0';
//
//    puts(str);
//    return 0;
//}
//
/// 14 WAP TO REMOVE ALPHABETS FROM ALPHANUMERIC STRING
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//    char str[100];
//    int i,j=0;
//    printf("\n Enter any string: ");
//    gets(str);
//
//    for(i=0;str[i]!='\0';i++)
//    {
//        if(!((str[i]>=97 && str[i]<=122)||(str[i]>=65 && str[i]<=90)))
//        {
//            str[j]=str[i];
//            j++;
//        }
//    }
//    str[j]='\0';
//    puts(str);
//    return 0;
//}
//
/// 18.WAP TO DISPLAY REVERSE AND LENGTH OF STRING
//#include<stdio.h>
//int main()
//{
//    char str[50],tmp;
//    int i,j,l;
//    printf("\n Enter any string: ");
//    gets(str);
//
//    for(i=0;str[i]!='\0';i++);
//    l=i;
//    for(j=0,i--;i>=j;j++,i--)
//    {
//        tmp=str[i];
//        str[i]=str[j];
//        str[j]=tmp;
//    }
//    puts(str);
//
//    printf("\n Length of string: %d",l);
//    return 0;
//}
//
/// 15 WAP TO REMOVE FIRST OCCURANCE OF CHARACTER FROM STRING
/// 17 WAP TO REMOVE LAST OCCURANCE OF CHARACTER FROM STRING

///************SORTING**********
///1. WAP TO REVERSE EVERY WORD FROM STRING AT SAME LOCATION BY ALPHABETICALLY
//#include <stdio.h>
//#include<string.h>
//    int main()
//    {
//        char str[100];
//        int i,j,tmp;
//
//        printf("\n Enter Any String:- ");
//        gets(str);
//        i=0;
//        while(str[i]!='\0')
//        {
//           //For Starting Point
//           for( ;str[i]==32;i++);
//
//            //For Swapping
//            for(j=i;(str[j]!=32 && str[j]!='\0');j++);
//
//            for(i=0;str[i]!='\0';i++)
//            {
//                for(j=i+1;str[j]!='\0';j++)
//                {
//                    if(str[i]>str[j])
//                    {
//                        tmp=str[i];
//                        str[i]=str[j];
//                        str[j]=tmp;
//                    }
//                }
//            }
//        }
//        puts(str);
//        return 0;
//    }

/// 2. WAP TO ENTER ANY STRING AND SORT THE ENTERED STRING
//#include<stdio.h>
//int main()
//{
//    char str[100],tmp;
//    int i,j;
//    printf("\n Enter any string: ");
//    gets(str);
//
//    for(i=0;str[i]!='\0';i++)
//    {
//        for(j=0;str[j]!='\0';j++)
//        {
//            if(str[i]<str[j])
//            {
//                tmp=str[i];
//                str[i]=str[j];
//                str[j]=tmp;
//            }
//        }
//    }
//    puts(str);
//    return 0;
//}

/// 6.WAP TO COLLECT ALL NEGATIVE ELEMENTS AT LEFT AND POSITIVE AT RIGHT
//#include<stdio.h>
//#define MAX 100
//int main()
//{
//    int x[MAX],i,j,cnt,tmp;
//    printf("\n Enter the cnt: ");
//    scanf("%d",&cnt);
//
//    printf("\n Enter %d elements: ",cnt);
//    for(i=0;i<cnt;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    printf("\n Entered elements are: ");
//    for(i=0;i<cnt;i++)
//    {
//        printf("%5d",x[i]);
//    }
//
//    for(i=0;i<cnt-1;i++)
//    {
//        for(j=i+1;j<cnt;j++)
//        {
//            if(x[i]>0)
//            {
//                tmp=x[i];
//                x[i]=x[j];
//                x[j]=tmp;
//            }
//        }
//    }
//    printf("\n Sorted array: ");
//    for(i=0;i<cnt;i++)
//    {
//        printf("%5d",x[i]);
//    }
//    return 0;
//}

/// 7. WAP TO SORT HALF OF ENTERED ARRAY IN ASCENDING ORDER AND REMAINNING HALF ARRAY IN DESCENDING ORDER
///    WITHOUT ANT DUPLICATES ELEMENTS
//#include<stdio.h>
//int main()
//{
//    int x[10],i,j,tmp,cnt=0;
//    printf("\n Enter the elements: ");
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n Entered elements are: ");
//    for(i=0;i<10;i++)
//    {
//        printf("%5d",x[i]);
//    }
//
//    for(i=0;i<4;i++)
//    {
//        for(j=i+1;j<5;j++)
//        {
//            if(x[i]>x[j])
//            {
//                tmp=x[i];
//                x[i]=x[j];
//                x[j]=tmp;
//            }
//        }
//    }
//    for(i=5;i<9;i++)
//    {
//        for(j=i+1;j<10;j++)
//        {
//            if(x[i]<x[j])
//            {
//                tmp=x[i];
//                x[i]=x[j];
//                x[j]=tmp;
//            }
//        }
//    }
//
//    for(i=0;i<9;i++)
//    {
//        for(j=i+1;j<10;j++)
//        {
//            if(x[i]==x[j])
//            {
//                x[j]=x[j+1];
//            }
//        }
//        cnt++;
//    }
//    cnt--;
//    printf("\n");
//    printf("\n Sorted array: ");
//    for(i=0;i<cnt;i++)
//    {
//        printf("%5d",x[i]);
//    }
//    return 0;
//}

///  8. WAP TO CHECK ENTERED STRING IS ANAGRAM OR NOT
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char str1[100],str2[100];
//    int len1,len2,i,j,flg=0;
//    printf("\n Enter any string 1: ");
//    gets(str1);
//
//    printf("\n Enter any string 2: ");
//    gets(str2);
//
//    for(i=0;str1[i]!='\0';i++);
//    len1=i;
//
//    for(i=0;str2[i]!='\0';i++);
//    len2=i;
//
//    if(len1!=len2)
//    {
//        printf("\n Strings are not anagram");
//    }
//
//    for(i=0;i<len1-1;i++)
//    {
//        for(j=0;j<len1-i-1;j++)
//        {
//            if(str1[j]>str1[j+1])
//            {
//                char tmp =str1[j];
//                str1[j] =str1[j+1];
//                str1[j+1] =tmp;
//            }
//
//            if(str2[j]>str2[j+1])
//            {
//                char tmp =str2[j];
//                str2[j] =str2[j+1];
//                str2[j+1] =tmp;
//            }
//        }
//
//    }
//    for(i=0;i<len1;i++)
//    {
//        if(str1[i]!=str2[i])
//        {
//            flg=1;
//            break;
//        }
//    }
//    if(flg==0)
//    {
//        printf("\n Strings are anagram");
//    }
//    else
//    {
//        printf("\n Strings are not anagram");
//    }
//    return 0;
//}

/// 9. WAP TO TO CHECK STRING IS PANAGRAM OR NOT
//#include<stdio.h>
//#include<string.h>
//    int main()
//    {
//        char ch[50];
//        int i,flg=0;
//
//        printf("\n Enter Any String: ");
//        gets(ch);
//
//        for(i=0;ch[i]!='\0';i++)
//        {
//            if((ch[i]>='a' && ch[i]<='z') || (ch[i]>='A' && ch[i]<='Z')== ch[i] )
//            {
//                flg=1;
//                break;
//            }
//        }
//        if(flg==1)
//        {
//            printf("\n Entered String Is Panagram");
//        }
//        else
//        {
//            printf("\n Entered String Is Not Panagram");
//        }
//        return 0;
//    }

/// 4. WAP TO SEARCH NAME IN THE LIST
//#include<stdio.h>
//    int main()
//    {
//        int i,j,flg,len1,len2;
//        char names[7][50], nm[50];
//        printf("\n Enter names of 7 friends: ");
//        for(i=0;i<7;i++)
//        {
//            gets(names[i]);
//        }
//        printf("\n Enter the name to be searched: ");
//        gets(nm);
//
//        printf("\n Name of list:\n");
//        for(i=0;i<7;i++)
//        {
//            puts(names[i]);
//        }
//        printf("\n Name to be searched %s",nm);
//
//        // searchnig
//        for(j=0;nm[j]!='\0';j++);
//        len1=j;
//
//        for(i=0;i<7;i++)
//        {
//            for(j=0;names[i][j]!='\0';j++);
//            len2=j;
//
//            flg=0;
//            if(len1==len2)
//            {
//                for(j=0;j<len2;j++)
//                {
//                    if(names[i][j]!=nm[j])
//                    {
//                        flg=1;
//                        break;
//                    }
//                }
//            }
//            else
//            {
//                flg=1;
//            }
//
//            if(flg==0)
//            {
//                printf("\n %s is present at %d position",nm,i);
//            }
//            else
//            {
//                printf("\n %s is not present",nm);
//            }
//
//        }
//
//        return 0;
//    }


/// 11. WAP SORTED ARRAY SORT ARRAY LIKE ARR[1]>=ARR[2]<=ARR[3]>=ARR[4]<=ARR[5](some test cases not passed)

//#include<stdio.h>
//int main()
//{
//    int x[5],i,j,tmp;
//
//    printf("\n enter any 5 element: ");
//
//    for(i=0;i<5;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n entered the number:");
//    for(i=0;i<5;i++)
//    {
//        printf("%5d",x[i]);
//    }
//    for(i=0;i<4;i++)
//    {
//
//       for(j=1;j<5;j++)
//       {
//           if(x[i+1]>=x[j] && x[i-1]<=x[j+1] )
//           {
//             tmp=x[i];
//             x[i]=x[j];
//             x[j]=tmp;
//           }
//       }
//    }
//    printf("\n sorted array are:");
//    for(i=0;i<5;i++)
//    {
//        printf("%5d",x[i]);
//    }
//
//    return 0;
//}

/// 12. WAP TO FIND ELEMENT IN MATRIX
//#include<stdio.h>
//int main()
//{
//    int n,m,i,j,no,flg=0,row=0,col=0;
//    printf("\n Enter n: ");
//    scanf("%d",&n);
//    printf("\n Enter m: ");
//    scanf("%d",&m);
//    int x[n][m];
//    printf("\n Enter the array elements of matrix: ");
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<m;j++)
//        {
//            scanf("%d",&x[i][j]);
//        }
//    }
//    printf("\n Matrix: \n");
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<m;j++)
//        {
//            printf("%5d",x[i][j]);
//        }
//        printf("\n");
//    }
//    printf("\n Enter any number to be searched: ");
//    scanf("%d",&no);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            if (x[i][j]==no)
//            {
//                flg = 1;
//                row = i;
//                col = j;
//                break;
//            }
//        }
//        if(flg==1)
//            break;
//    }
//
//    if(flg==1)
//    {
//        printf("%d is present at row %d and column %d.\n", no, row + 1, col + 1);
//
//    }
//    else
//    {
//        printf("%d is not present in the matrix.\n", no);
//    }
//
//    return 0;
//}

/// 13. WAP TO TO FIND INDEX OF PRESENT ELEMENT
//#include<stdio.h>
//#define MAX 100
//int main()
//{
//    int x[MAX],i,j,key,n;
//
//    printf("\n Enter n: ");
//    scanf("%d",&n);
//
//    printf("\n Enter elements:");
//    for(i=0;i<n;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//
//    printf("\n Entered elements:");
//    for(i=0;i<n;i++)
//    {
//        printf("%d",x[i]);
//    }
//    printf("\n Enter key");
//    scanf("%d",&key);
//    for(i=0;i<n;i++)
//    {
//        for(j=0;j<5;j++)
//        {
//            if(x[i]==key)
//            {
//                printf("%d",i);
//                break;
//            }
//        }
//    }
//    return 0;
//}

///14 .WAP ON BUBBLE SORT, INSERTION SORT,SELECTION SORT,BINARY SEARCH AND SEQUENTIAL SEARCH USING SWITCH CASE
//#include<stdio.h>
//int main()
//{
//    int x[10],i,j,tmp,opt,pivot;
//    int start,end,mid,pos=-1,no;
//    printf("\n Enter the elements: ");
//    for(i=0;i<10;i++)
//    {
//        scanf("%d",&x[i]);
//    }
//    printf("\n Entered elements are: ");
//    for(i=0;i<10;i++)
//    {
//        printf("%5d",x[i]);
//    }
//
//    printf("\n ********** MENU ********\n");
//    printf("\n 1. Bubble Sort  2.Insertion Sort  3.Selection Sort  4.Binary Search  5.Sequential Search");
//    printf("\n Enter your option: ");
//    scanf("%d",&opt);
//    switch(opt)
//    {
//    case 1:
//        for(i=0;i<9;i++)
//        {
//            for(j=0;j<(9-i);j++)
//            {
//                if(x[j]>x[j+1])
//                {
//                    tmp=x[j];
//                    x[j]=x[j+1];
//                    x[j+1]=tmp;
//                }
//            }
//        }
//        printf("\n Sorted array by bubble sort \n");
//        for(i=0;i<10;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        break;
//
//    case 2:
//        for(i=1;i<10;i++)
//        {
//            pivot=x[i];
//            j=i-1;
//            while(j>=0 && x[j]>pivot)
//            {
//                x[j+1]=x[j];
//                j--;
//            }
//            x[j+1]=pivot;
//        }
//        printf("\n Sorted elements are :\n");
//        for(i=0;i<10;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        break;
//
//    case 3:
//        for(i=0;i<9;i++)
//        {
//            for(j=i+1;j<10;j++)
//            {
//                if(x[i]>x[j])
//                {
//                    tmp=x[i];
//                    x[i]=x[j];
//                    x[j]=tmp;
//                }
//
//            }
//        }
//        printf("\n Sorted elements are :\n");
//        for(i=0;i<10;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        break;
//
//    case 4:
//       printf("\n Enter the number to be searched: ");
//       scanf("%d",&no);
//
//        start=0;
//        end=9;
//        do{
//            mid= (start+end)/2;
//            if(x[mid]==no)
//            {
//                pos=mid;
//                break;
//            }
//            else if (no<x[mid])
//            {
//                end = mid-1;
//            }
//            else if (no>x[mid])
//            {
//                start = mid + 1;
//            }
//        }while(start<=end);
//        if(pos==-1)
//        {
//            printf("\n %d is not present",no);
//        }
//        else
//        {
//            printf("\n %d is present at position %d",no,pos);
//        }
//        break;
//
//    case 5:
//        printf("\n Enter the number to be searched: ");
//        scanf("%d",&no);
//        for(i=0;i<10;i++)
//        {
//            if(x[i]==no)
//            {
//                pos = i;
//                break;
//            }
//        }
//        if(pos==-1)
//        {
//            printf("\n %d is not present",no);
//        }
//        else
//        {
//            printf("\n %d is present at position %d",no,pos);
//        }
//     default:
//        printf("\n Option invalid!...");
//    }
//}

/// UNSOLVED
//1. Palindrome Partitioning II
//Problem Description: Given a string A, partition A such that every substring of the partition is
//a palindrome.
//Return the minimum cuts needed for a palindrome partitioning of A.

//2.  Jumps Array
//Problem Description: Given an array of non-negative integers, A, of length N, you are
//initially positioned at the first index of the array.
//Each element in the array represents your maximum jump length at that position.
//Return the minimum number of jumps required to reach the last index.
//If it is not possible to reach the last index, return -1.

//3. Distinct Subsequences
//Given two sequences A, B, count number of unique ways in sequence A, to form a
//subsequence that is identical to the sequence B.

//4. Split an array into two equal Sum subarrays
//Check if it is feasible to divide an integer array, consisting of positive integers, into two
//subarrays (maintaining the original order of elements) in such a way that the combined sum of
//both subarrays is equal. Display the two subarrays if possible. Sample cases

//5. Sort Characters by Frequency
//Given a string s, sort it in decreasing order based on the frequency of the characters. The
//frequency of a character is the number of times it appears in the string.
//Return the sorted string. If there are multiple answers, return any of them.




///  Practice

//#include<stdio.h>
//int main()
//{
//    int x,y,sum=0,sub=0,mod=0;
//    float div=0.0,mul=0.0;
//    printf("\n Enter value of x and y");
//    scanf("%d %d",&x,&y);
//    sum=x+y;
//    printf("\n Sum is: %d",sum);
//    sub=x-y;
//    printf("\n Subtraction is: %d",sub);
//
//    mul=(float)x*(float)y;
//    printf("\n Multiplication is %f",mul);
//
//    mod=x%y;
//    printf("\n Mod is %d",mod);
//
//    div=(float)x/(float)y;
//    printf("\n division is %f",div);
//}

/// FIND POWER OF ANY NUMBER
//#include<stdio.h>
//int main()
//{
//    int base,exponent,power=1,i;
//    printf("\n Enter the value of base and exponent");
//    scanf("%d%d",&base,&exponent);
//
//    for(i=1;i<=exponent;i++)
//    {
//        power=power*base;
//    }
//    printf("\n power is %d",power);
//    return 0;
//}

/// FIND MAXIMUM BETN 3 NOS
//#include<stdio.h>
//int main()
//{
//    int x,y,z,max=0;
//    printf("\n Enter the values of x and y z");
//    scanf("%d%d%d",&x,&y,&z);
//    max=(x>y)?(x>z)?x:z:(y>z)?y:z;
//    printf("\n max number is %d",max);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    char ch;
//    printf("\n Enter any char: ");
//    scanf("%c",&ch);
//    (ch>=65&&ch<=90 || ch>=97&&ch<=122)?printf("ch is character"):printf("ch is not character");
//}

/// check number is divisible by 5 11 and both or not
//#include<stdio.h>
//int main()
//{
//    int x;
//    printf("\n Enter the value of x: ");
//    scanf("%d",&x);
//    if(x%5==0)
//    {
//        if(x%11==0)
//        {
//            printf("\n %d is divisible by both 5 and 11",x);
//        }
//        else
//        {
//            printf("\n %d is divisible by only 5",x);
//        }
//    }
//    else
//    {
//        if(x%11==0)
//        {
//            printf("\n %d is divisible by only 11",x);
//        }
//        else
//        {
//            printf("\n %d is not divisible by both 5 and 11",x);
//        }
//    }
//    return 0;
//}

/// WAP TO FIND FIRST AND LAST DIGIT OF NUMBER
//#include<stdio.h>
//int main()
//{
//    int no,fd,ld,rem,rev=0;
//    printf("\n Enter any number");
//    scanf("%d",&no);
//    while(no!=0)
//    {
//        rem=no%10;
//        rev=rev*10+rem;
//        if(rem==rev)
//        {
//            ld=rem;
//        }
//        no=no/10;
//        if(no==0)
//        {
//            fd= rem;
//        }
//    }
//    printf("\n %d is fd",fd);
//    printf("\n %d is ld",ld);
//}

///find the frequency of each digit in number
//#include<stdio.h>
//int main()
//{
//    int no,i,rem,cnt,tmp;
//    printf("\n Enter any number: ");
//    scanf("%d",&no);
//    tmp=no;
//    for(i=0;i<10;i++)
//    {
//        no=tmp;
//        cnt=0;
//        while(no!=0)
//        {
//            rem=no%10;
//            if(rem==i)
//            {
//                cnt++;
//            }
//            no=no/10;
//        }
//
//        if(cnt>=1)
//        {
//            printf("\n %d is repeated %d times",i,cnt);
//        }
//    }
//    return 0;
//}

/// find  factorial
//#include<stdio.h>
//int main()
//{
//    int no,i,fact=1;
//    printf("\n Enter any number: ");
//    scanf("%d",&no);
//    for(i=1;i<=no;i++)
//    {
//        fact=fact*i;
//    }
//    printf("\n factorial of number: %d",fact);
//    return 0;
//}

/// find factors
//#include<stdio.h>
//int main()
//{
//    int no,i,sum=0;
//    printf("\n Enter any number: ");
//    scanf("%d",&no);
//
//    for(i=1;i<no;i++)
//    {
//        if(no%i==0)
//        {
//            sum=sum+i;
//        }
//    }
//    if(sum==no)
//    {
//        printf("\n %d is perfect number",no);
//    }
//    else{
//        printf("\n %d is not perfect number",no);
//    }
//    return 0;
//
//}

/// prime number
//#include<stdio.h>
//int main()
//{
//    int no,d=2,i,flg=0;
//    printf("\n Enter any number");
//    scanf("%d",&no);
//    while(d<=no/2)
//    {
//        if(no%d==0)
//        {
//            flg=1;
//            break;
//        }
//        d++;
//    }
//    if(flg==0 && no!=1)
//    {
//        printf("\n %d is prime",no);
//    }
//    else
//    {
//        printf("\n %d is not prime",no);
//    }
//
//}

/// Strong number
//#include<stdio.h>
//int main()
//{
//    int no,i,fact,sum=0,tmp,rem;
//    printf("\n Enter any number: ");
//    scanf("%d",&no);
//    tmp=no;
//    while(no!=0)
//    {
//        fact=1;
//        rem=no%10;
//        for(i=1;i<=rem;i++)
//        {
//            fact=fact*i;
//        }
//        sum=sum+fact;
//        no=no/10;
//    }
//    no=tmp;
//    if(sum==no)
//    {
//        printf("\n %d is strong number",no);
//    }
//    else
//    {
//        printf("\n %d is not strong number",no);
//    }
//    return 0;
//}

/// ArmStrong number
//#include<stdio.h>
//int main()
//{
//    int no,i,rem,a,dc,sum=0,tmp;
//    printf("\n Enter any number: ");
//    scanf("%d",&no);
//    tmp=no;
//    while(no!=0)
//    {
//        dc++;
//        no/=10;
//    }
//    no=tmp;
//    while(no!=0)
//    {
//        rem=no%10;
//        a=1;
//        for(i=1;i<=dc;i++)
//        {
//            a=a*rem;
//        }
//        sum=sum+a;
//        no=no/10;
//    }
//    no=tmp;
//    if(sum==no)
//    {
//        printf("\n %d is Armstrong",no);
//    }
//    else
//    {
//        printf("\n %d is Not Armstrong",no);
//    }
//}


