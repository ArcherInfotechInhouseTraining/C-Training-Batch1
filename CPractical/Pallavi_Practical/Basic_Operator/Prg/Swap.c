/*
//using third variable
#include<stdio.h>
int main()
{
    int a,b,tmp;

    printf("\n Enter the value of a and b: ");
    scanf("%d %d",&a,&b);
    printf("\n Before exchange a is %d and b is %d",a,b);

    //process
    tmp=a;
    a=b;
    b=tmp;

    printf("\n After exchange a is %d and b is %d",a,b);
    return 0;
}

*/

/*

//Without using third variable
#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter the values of a and b: ");
    scanf("%d %d",&a,&b);
    printf("\n Before exchange a is %d and b is %d",a,b);

    //process a=10 b=20
     a=a+b;    //a=10+20=30
     b=a-b;    //b=30-20=10
     a=a-b;    //a=30-10=20

    printf("\n After exchange a is %d and b is %d",a,b);
    return 0;
    
}

*/

/*

//Without using third variable(*,/)
#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter the values of a and b: ");
    scanf("%d %d",&a,&b);
    printf("\n Before exchange a is %d and b is %d",a,b);

    //process a=10 b=20
     a=a*b;    //a=10*20=200
     b=a/b;    //b=200/20=10
     a=a/b;    //a=200/10=20

    printf("\n After exchange a is %d and b is %d",a,b);
    return 0;
    
}

*/

/*

//Exchange of 3 character
#include<stdio.h>
int main()
{
    //only exchange the values of pq and ty
    char pq,rs,ty,tmp;

    printf("\n enter the values of pq,rs and ty: ");
    scanf("%c %c %c",&pq,&rs,&ty);
    printf("\n Before exchange values of pq is %c,rs is %c and ty is %c",pq,rs,ty);

    //process pq=x rs=y ty=z
    tmp=pq;
    pq=ty;
    rs=rs;
    ty=tmp;

    printf("\n After exchange values of pq is %c,rs is %c and ty is %c ",pq,rs,ty);
    return 0;
}

*/


// exchange the values of 3 character
#include<stdio.h>
int main()
{
    char ab,cd,ef,tmp;

    printf("\n Enter the values of ab,cd and ef: ");
    scanf("%c %c %c",&ab,&cd,&ef);
    printf("\n Before exchange ab is %c,\t cd is %c  and \t ef is %c",ab,cd,ef);

    //process ab=x cd=y ef= z  after ab=z cd=x ef=y
    tmp=ab;  //tmp=x
    ab=ef;   //ab=z
    ef=cd;   //ef=y
    cd=tmp;  //cd=x

    printf("\n After exchange ab is %c, \t cd is %c  and \t ef is %c",ab,cd,ef);
    return 0; 
}