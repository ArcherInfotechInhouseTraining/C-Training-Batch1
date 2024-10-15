///// !+2+3+4+5+n.....
//#include<stdio.h>
//    int main()
//    {
//        int i,sum =0,num;
//        printf("\n Enter any number");
//        scanf("%d",&num);
//        for(i=1;i<=num;i++)
//        {
//            printf("%d + ",i);
//            sum = sum +i;
//
//        }
//        printf("\n Sum of series is %d",sum);
//        return 0;
//    }
//
/////   1^2+2^2+3^2+4^2+.....
//#include<stdio.h>
//    int main()
//    {
//        int i,sum =0,num;
//        printf("\n Enter any number");
//        scanf("%d",&num);
//        for(i=1;i<=num;i++)
//        {
//            printf("%d",i);
//            sum = sum +(i*i);
//
//        }
//        printf("\n Sum of series is %d",sum);
//        return 0;
//    }

/////  1/1! + 2/2! + 3/3! + 4/4! + ....N/N!
//#include<stdio.h>
//    int main()
//    {
//        int i,N;
//        float fact=1;
//        float sum =0.0;
//        printf("\n Enter any number");
//        scanf("%d",&N);
//        for(i=1;i<=n;i++)
//        {
//            sum=0;
//            fact = fact * i;
//            sum = sum +(float)i/(float)fact;
//            printf("%f\t", sum);
//        }
//
//        return 0;
//    }
//
/////  1 + 1/2 + 1/3 + 1/4 + 1/5 +.......1/N
//#include<stdio.h>
//    int main()
//    {
//        int i,N;
//        float j;
//        printf("\n Enter Nth Term ");
//        scanf("%d",&N);
//        for(i=1;i<=N;i++)
//        {
//            j = 1/(float)i;
//            printf("%f \t",j);
//        }
//       return 0;
//    }
//
///// 1 + 3^2/3^3 + 5^2/5^3 + 7^2/7^3
//#include<stdio.h>
//    int main()
//    {
//        int i,N;
//        float p2,p3,sum=0;
//        printf("\n Enter any Number");
//        scanf("%d",&N);
//        for(i=1;i<=N;i=i+2)
//        {
//          p2= i * i;
//          p3= i * i * i;
//          printf("%f \t",(float)p2/(float)p3);
//          sum = sum + ((float)p2/(float)p3);
//        }
//        printf("\n sum is %f",sum);
//        return 0;
//    }
//

/////    WAP TO FIND SUM OF SERIES
/////  1-2+3-4+5-6+7-8...N
//#include<stdio.h>
//    int main()
//    {
//        int i,N,sum= 0;
//        printf("\n Enter any Number");
//        scanf("%d",&N);
//        for(i=0;i<=N;i++)
//        {
//            if(i%2==0)
//            {
//                sum = sum -i;
//                printf("%5d",sum);
//            }
//            else if(i%2!=0)
//            {
//                sum = sum +i;
//                printf("%5d",sum);
//            }
//
//        }
//        printf("\n sum of series is %d",sum);
//        return 0;
//    }
//
///// 1+(1+2)+(1+2+3)+(1+2+3+4)+(1+2+3+4+5)+(1+2+3+4+5+...n)
//#include<stdio.h>
//    int main()
//    {
//        int i,j,n,sum=0;
//        printf("\n Enter Nth number");
//        scanf("%d",&n);
//        for(i=1;i<=n;i++)
//        {
//            for(j=1;j<=i;j++)
//            {
//                sum = sum + j;
//            }
//            printf("%d \t",sum);
//        }
//        printf("\n Sum of series is %d",sum);
//        return 0;
//    }
//
/////  FIND SUM OF SERIES 1^2/1! + 2^2/2! + 3^2/3! + 4^2/4!.....n
//#include<stdio.h>
//    int main()
//    {
//        int i,N;
//        float fact=1;
//        float sum =0.0;
//        printf("\n Enter any number");
//        scanf("%d",&N);
//        for(i=1;i<=N;i++)
//        {
//            fact = fact * i;
//            sum = sum +(((float)i * (float)i)/(float)fact);
//            printf("%f\t", sum);
//        }
//        printf("\n sum of series is %f",sum);
//        return 0;
//    }
//
///// FIND SUM OF SERIES 1.2/3 + 2.3/4 + 3.4/5 + 4.5/6 + ....n(n+1)/(n+2)
//#include<stdio.h>
//    int main()
//    {
//        int i,n;
//        float sum=0;
//        printf("\n Enter Nth Term");
//        scanf("%d",&n);
//        for(i=1;i<=n;i++)
//        {
//            sum = sum +((float)(n)*(n+1)/(float)(n+2));
//        }
//        printf("\n Sum of series is %f",sum);
//        return 0;
//    }
//
///// FIND SUM OF SERIES X+X/2! +X/4! +....X/n!
//#include<stdio.h>
//    int main()
//    {
//        int i,n,x,j;
//        float sum =0,fact=1;
//        printf("\n Enter the value of x");
//        scanf("%d",&x);
//        printf("\n Enter the nth term");
//        scanf("%d",&n);
//        for(i=1;i<=n;i++)
//        {
//            if(i%2==0)
//            {
//                fact=1;
//              for(j=i;j>=1;j--)
//                {
//                    fact = fact * j;
//                }
//            }
//                sum = sum + (((float)x)/((float)fact));
//
//        }
//        printf("%f",sum);
//        return 0;
//    }
//
///// FIND SUM OF SERIES 1^3 - 2^3 + 3^3 - 4^3 +.......N^3
//#include<stdio.h>
//    int main()
//    {
//        int i,N,sum= 0;
//        printf("\n Enter Nth Number");
//        scanf("%d",&N);
//        for(i=0;i<=N;i++)
//        {
//            if(i%2==0)
//            {
//                sum = sum -(i*i*i);
//                printf("%5d",sum);
//            }
//            else if(i%2!=0)
//            {
//                sum = sum +(i*i*i);
//                printf("%5d",sum);
//            }
//
//        }
//        printf("\n sum of series is %d",sum);
//        return 0;
//    }

///    x + x^2/2! + x^3/3! +.... x^n/n!
//#include<stdio.h>
//    int main()
//    {
//        int i,n,x,fact= 1,power=1;
//        float k=0;
//        printf("\n Enter value of x");
//        scanf("%d",&x);
//        printf("\n Enter Nth term");
//        scanf("%d",&n);
//        for(i=1;i<=n;i++)
//        {
//            power = power * x;
//            fact = fact * i;
//            k= (float)power/(float)fact;
//            printf("%f \t",k);
//        }
//
//        return 0;
//    }

