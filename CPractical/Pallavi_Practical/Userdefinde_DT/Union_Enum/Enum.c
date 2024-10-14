#include<stdio.h>
int main()
{
    enum color{green,blue,orange,red,white};

    printf("\n green is %d",green);

    printf("\n blue is %d",blue);
    printf("\n orange is %d",orange);
    printf("\n Red is %d",red);
    printf("\n white is %d",white);
    printf("\n =================================================");

    printf("\n Size of enum : %d",sizeof(enum color));
    printf("\n =================================================");
    enum colo{p,a=99,l,s,v,i};
    printf("\n p is %d",p);
    printf("\n a is %d",a);
    printf("\n l is %d",l);
    printf("\n s is %d",s);
    printf("\n v is %d",v);
    printf("\n i is %d",i);
}


