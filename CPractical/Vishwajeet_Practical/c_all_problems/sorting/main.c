///// ********************* SORTING BY SELECTION SORT FOR ASCENDING ORDER **********************************
//#include<stdio.h>
//    int main()
//    {
//        int x[5],i,j,tmp;
//        printf("\n Enter Elements");
//        for(i=0;i<5;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        printf("\n Entered elements are :");
//        for(i=0;i<5;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        //sorting in ascending
//        for(i=0;i<4;i++)
//        {
//            for(j=i+1;j<5;j++)
//            {
//                if(x[i]>x[j])
//                {
//                    tmp=x[i];
//                    x[i]=x[j];
//                    x[j]=tmp;
//                }
//            }
//        }
//        printf("\n Sorted arrray ");
//        for(i=0;i<5;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        return 0;
//    }
//
///// WAP TO SORTING ------BUBBLE SORT
//#include<stdio.h>
//    int main()
//    {
//        int x[5],i,j,tmp;
//        printf("\n Enter Elements");
//        for(i=0;i<5;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        printf("\n Entered elements are :");
//        for(i=0;i<5;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        //sorting in ascending
//        for(i=0;i<4;i++)
//        {
//            for(j=0;j<(4-i);j++)
//            {
//                if(x[j]>x[j+1])
//                {
//                    tmp=x[j];
//                    x[j]=x[j+1];
//                    x[j+1]=tmp;
//                }
//            }
//        }
//        printf("\n Sorted arrray ");
//        for(i=0;i<5;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        return 0;
//    }
//
//
///// SORTING ********** INSERTION SORT
//#include<stdio.h>
//    int main()
//    {
//        int x[5],i,j,pivot;
//        printf("\n Enter the elements");
//        for(i=0;i<5;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        printf("\n Inserted elements are");
//        for(i=0;i<5;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        //sorting
//        for(i=1;i<5;i++)
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
//        printf("\n Sorted elements are :");
//        for(i=0;i<5;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        return 0;
//    }
//
///// WAP TO CALCULATE MEDIAN OF ARRAY
/// BY USING SELECTION SORT FOR EVEN AND ODD COUNT OF ARRAY
//#include<stdio.h>
//#define MAX 50
//    int main()
//    {
//        int x[MAX],n,i,j,tmp,cnt,pos=0;
//        int median=0;
//        printf("\n Enter N th term");
//        scanf("%d",&n);
//
//        printf("\n Enter elements");
//        for(i=0;i<n;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        printf("\n Inserted elements are:");
//        for(i=0;i<n;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        // selection sort
//        for(i=0;i<n-1;i++)
//        {
//            for(j=i+1;j<n;j++)
//            {
//                if(x[i]>x[j])
//                {
//                    tmp=x[i];
//                    x[i]=x[j];
//                    x[j]=tmp;
//                }
//            }
//        }
//        printf("\n Sorted array by selection:");
//        for(i=0;i<n;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        if(n%2==0)
//        {
//            pos= (n/2 + (n/2+1))/2;
//            median= x[pos];
//        }
//        else
//        {
//            pos = n/2;
//            median = x[pos];
//        }
//        printf("\n Median is %d",median);
//        return 0;
//
//    }
//
///// ******** SEARCHING TECHNIQUES
/// 1.SEQUENTIAL SEARCH
/// 2.BINARY SEARCH
//#include<stdio.h>
//    int main()
//    {
//        int x[10],i,no,pos=-1;
//        printf("\n Enter Elements");
//        for(i=0;i<10;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        printf("\n Enter the number to be searched");
//        scanf("%d",&no);
//        // searchnig
//        for(i=0;i<10;i++)
//        {
//            if(x[i]==no)
//            {
//                pos = i;
//                break;
//            }
//
//        }
//        if(pos==-1)
//        {
//            printf("\n %d is not present",no);
//        }
//        else
//        {
//            printf("\n %d is present at position %d",no,pos);
//        }
//        return 0;
//
//    }
//
///// **** BINARY SORT ONLY FOR SORTED ARRAY
//#include<stdio.h>
//    int main()
//    {
//        int x[10],i,no,pos=-1,start,end,mid;
//        printf("\n Enter Elements in ascending order");
//        for(i=0;i<10;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        printf("\n Enter the number to be searched");
//        scanf("%d",&no);
//        // searchnig
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
//        return 0;
//
//    }

///// WAP TO REMOVE DUPLICATE ELEMENTS FROM ARRAY
//#include<stdio.h>
//    int main()
//    {
//        int x[5],i,j,k,cnt=0;
//        printf("\n Enter elements:");
//        for(i=0;i<5;i++)
//        {
//            scanf("%d",&x[i]);
//        }
//        printf("\n Inserted Elements are:");
//        for(i=0;i<5;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        for(i=0;i<5;i++)
//        {
//            for(j=i+1;j<5;j++)
//            {
//                if(x[i]==x[j])
//                {
//                    x[j]=x[j+1];
//                }
//            }
//            cnt++;
//        }
//        cnt--;
//        printf("\n Elements after removing duplicates :");
//        for(i=0;i<cnt;i++)
//        {
//            printf("%5d",x[i]);
//        }
//        return 0;
//    }
