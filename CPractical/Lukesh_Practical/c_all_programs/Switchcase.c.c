/***************************************************  SWITCH CASE ******************************************************/

/// WAP To Perform The Addition,subtraction,division and multiplication by using switch case

//#include<stdio.h>
//int main()
//{
//    float a,b,ans;
//    int opt;
//
//    printf("\n Enter The Value Of a: ");
//    scanf("%f",&a);
//    printf("\n Enter The Value Of b: ");
//    scanf("%f",&b);
//
//    printf("\n******* MENU *******");
//    printf("\n 1.Addition \t 2.Subtraction \t 3.Division \t 4.Multiplication");
//    printf("\n Select The Option Which You Want To Perform Operation -> ");
//    scanf("%d",&opt);
//
//    switch(opt)
//    {
//        case 1:ans=a+b;
//        break;
//
//        case 2:ans=a-b;
//        break;
//
//        case 3:ans=a/b;
//        break;
//
//        case 4:ans=a*b;
//        break;
//
//        default: printf("\n Invalid Option !!!!");
//    }
//
//    printf("\n Answer is %0.2f",ans);
//
// return 0;
//
//}
//===============================================================================================================================================================================
/// Using Switch Case Within The Loop

//#include<stdio.h>
//
//int main()
//{
//    float a,b,ans;
//    int opt,i;
//
//     i=0;
//    while(i<3)
//    {
//            printf("\n Enter The Value Of a: ");
//    scanf("%f",&a);
//    printf("\n Enter The Value Of b: ");
//    scanf("%f",&b);
//
//    printf("\n******* MENU *******");
//    printf("\n 1.Addition \t 2.Subtraction \t 3.Division \t 4.Multiplication");
//    printf("\n Select The Option Which You Want To Perform Operation -> ");
//    scanf("%d",&opt);
//
//       switch(opt)
//      {
//         case 1:ans=a+b;
//         break;
//
//         case 2:ans=a-b;
//         break;
//
//         case 3:ans=a/b;
//         break;
//
//         case 4:ans=a*b;
//         break;
//
//         default: printf("\n Invalid Option !!!!");
//      }
//
//    printf("\n Answer is %0.2f",ans);
//
//     i++;
//    }
//
// return 0;
//}
//===============================================================================================================================================================================
/// Using The Switch Case In Infinite Loop Using Break To Stop

//#include<stdio.h>
//
//int main()
//{
//    float a,b,ans;
//    int opt;
//
//
//    while(1)
//    {
//
//      printf("\n******* MENU *******");
//      printf("\n 1.Addition \t 2.Subtraction \t 3.Division \t 4.Multiplication \t 5.Stop");
//      printf("\n Select The Option Which You Want To Perform Operation -> ");
//      scanf("%d",&opt);
//
//      if(opt==5)
//      {
//          break; // It Will Pass The Control Out Of The Loop
//      }
//
//      if(opt>=1 && opt<=4)
//    {
//      printf("\n Enter The Value Of a: ");
//      scanf("%f",&a);
//      printf("\n Enter The Value Of b: ");
//      scanf("%f",&b);
//
//      switch(opt)
//      {
//         case 1:ans=a+b;
//         break;
//
//         case 2:ans=a-b;
//         break;
//
//         case 3:ans=a/b;
//         break;
//
//         case 4:ans=a*b;
//         break;
//      }
//       printf("\n Answer is %0.2f",ans);
//    }
//    else
//    {
//        printf("\n Invalid Option");
//    }
//
//
//    }
//
// return 0;
//
//}
//===============================================================================================================================================================================
/// Using Switch Case In Infinite Loop Using Exit(0) To Stop

// #include<stdio.h>
//
// int main()
// {
//
//   float a,b,ans;
//   int opt;
//
// while(1)
//   {
//      printf("\n ******* MENU ******* ");
//      printf("\n 1.Addition \t 2.Subtraction \t 3.Division \t 4.Multiplication \t 5.Stop");
//      printf("\n Select The Option : ");
//      scanf("%d",&opt);
//
//      if(opt==5)
//      {
//          exit(0);
//      }
//
//      if(opt>=1 && opt<=5)
//      {
//         printf("\n Enter The Value Of a: ");
//         scanf("%f",&a);
//         printf("\n Enter The Value Of b: ");
//         scanf("%f",&b);
//
//         switch(opt)
//        {
//         case 1:ans=a+b;
//         break;
//
//         case 2:ans=a-b;
//         break;
//
//         case 3:ans=a/b;
//         break;
//
//         case 4:ans=a*b;
//         break;
//
//        }
//
//        printf("\n Answer is %0.2f",ans);
//
//      }
//      else
//      {
//          printf("\n Invalid Option");
//      }
//
//   }
//return 0;
//
// }
//===============================================================================================================================================================================
/// Using Char As A Option in The Switch Case

// #include<stdio.h>
//
// int main()
// {
//
//   float a,b,ans;
//   char opt;
//
// while(1)
//   {
//      printf("\n ******* MENU ******* ");
//      printf("\n A.Addition \t B.Subtraction \t C.Division \t D.Multiplication \t E.Stop");
//      printf("\n Select The Option : ");
//      scanf(" %c",&opt);
//
//      if(opt=='E')
//      {
//          exit(0);
//      }
//
//      if(opt>='A' && opt<='D')
//      {
//         printf("\n Enter The Value Of a: ");
//         scanf("%f",&a);
//         printf("\n Enter The Value Of b: ");
//         scanf("%f",&b);
//
//         switch(opt)
//        {
//         case 'A':ans=a+b;
//         break;
//
//         case 'B':ans=a-b;
//         break;
//
//         case 'C':ans=a/b;
//         break;
//
//         case 'D':ans=a*b;
//         break;
//
//        }
//
//        printf("\n Answer is %0.2f",ans);
//
//      }
//      else
//      {
//          printf("\n Invalid Option");
//      }
//
//   }
//return 0;
//
// }
//===============================================================================================================================================================================
/// Using Default Case In Different Way

//#include<stdio.h>
//
//int main()
//{
//    float a,b,ans;
//    int opt;
//
//    while(1)
//    {
//       printf("\n ******* MENU ******* ");
//       printf("\n 1.Addition \t 2.Subtraction \t 3.Division \t 4.Multiplication \t 5.Stop");
//       printf("\n Enter The Option :");
//       scanf("%d",&opt);
//
//        if(opt>=1 && opt<=5)
//      {
//         switch(opt)
//         {
//             case 1: a+b;
//             break;
//
//             case 2: a-b;
//             break;
//
//             case 3: a/b;
//             break;
//
//             case 4: a*b;
//             break;
//
//             case 5: exit(0);
//
//         }
//         printf("\n Answer is %0.2f",ans);
//      }
//      else
//      {
//          printf("\n Invalid Option");
//      }
//
//    }
//return 0;
//
//}
//===============================================================================================================================================================================






















