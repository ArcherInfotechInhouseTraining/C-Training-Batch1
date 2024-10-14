#include<Stdio.h>
int main()
{
    int a,b;
    char ch,cd;
    float ft,ft1;
    double db,db1;

    printf("\n Enter the value of a and b: ");
    scanf("%d %d",&a,&b);

    printf("\n Enter the value of ch and cd: ");
    fflush(stdin);  //use to remove keyboard storage
    scanf("%c %c",&ch,&cd);

    printf("\n Enter the value of ft anf ft1: ");
    scanf("%f %f",&ft,&ft1);

    printf("\n Enter the value of db and db1: ");
    scanf("%lf %lf",&db,&db1);

    printf("\n\n value of a is %d \t value of b is %d",a,b);
    printf("\nvalue of ch is %c \t value of cd is %c",cd,ch);
    printf("\nvalue of ft is %f \t value of ft1 is %f",ft,ft1);
    printf("\nvalue of db is %lf \t value of db1 is %lf",db,db1);

    return 0;


}