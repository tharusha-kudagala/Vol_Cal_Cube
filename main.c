#include <stdio.h>
#include <stdlib.h>


int main()
{
int length , width , height, volume;

    printf("\t\t\t\t*******************************\n\t\t\t\t**Volume Calculator for cubes**\n\t\t\t\t*******************************\n");
    printf("\n\n Enter the Length of the cube (cm)\n");
    scanf("%d",&length);

    printf("\n\n Enter the Width of the cube (cm)\n");
    scanf("%d",&width);

    printf("\n\n Enter the Height of the cube (cm)\n");
    scanf("%d",&height);

    volume = length * width * height;

    printf("\n \n The volume of the cube is %d (ml)\n",volume);
    return 0;
}
