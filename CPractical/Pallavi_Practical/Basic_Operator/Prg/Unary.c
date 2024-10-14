// Unary Operators

/*

//Unary minus

#include<stdio.h>
int main()
{
    int x = 4;
    int y = -x;

    printf("\n y is %d",y);
    return 0;
}
*/


// Increment/Decrement

#include<stdio.h>
int main()
{
    int x , y , z;

    printf("\n Enter the value of x and y : ");
    scanf("%d %d",&x,&y);
    
    // x=3  y=5
    //post inc
    x++;    //x=4
    printf("\n x is %d \t y is %d",x,y);

    //pre inc
    ++y;    //y=6
    printf("\n x is %d \t y is %d",x,y);

    z = --x + y--;      // z = (x=3) +  (y=6) = 9
    printf("\n x ix %d \t y is %d \t z is %d",x,y,z);

    return 0;
}



/*

// Type Casting

#include<stdio.h>
int main()
{
    int x,y;
    float z;

    printf("\n Enter the value of x and y : ");
    scanf("%d %d",&x,&y);

    z = x/y;
    printf("\n z is : %f",z);

    z = (float)x/y;
    printf("\n z is : %.2f",z);

    z = x/(float)y;
    printf("\n z is : %0.2f",z);

    z = (float)x/(float)y;
    printf("\n z is : %0.4f",z);

    return 0;
}
*/

/*

//  Size of

#include<stdio.h>
int main()
{
    int x = 2;
    float ft = 34.43;

    printf("\n  size of x is %d",sizeof(x));
    printf("\n size of int %d",sizeof(int));

    printf("\n size of ft is %d",sizeof(ft));
    printf("\n size of float is %d",sizeof(float));

    printf("\n size of double is %d",sizeof(double));
    printf("\n size of char is %d",sizeof(char));

    return 0;
}

*/