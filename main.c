#include "head.h"
#include "vol.h"
#include "convert.h"

int main()
{
    double length , width , height, volume;

    printf("\t\t\t\t*******************************\n\t\t\t\t**Volume Calculator for cubes**\n\t\t\t\t*******************************\n");

    printf("\n\nEnter the Length of the cube (cm)\n");
    scanf("%lf",&length);

    printf("\n\nEnter the Width of the cube (cm)\n");
    scanf("%lf",&width);

    printf("\n\nEnter the Height of the cube (cm)\n");
    scanf("%lf",&height);

    // Calling the vol function in vol.h
    volume = vol(length, width, height);

    printf("\n\nThe volume of the cube is %.2lf ml [ %.2lf L ]\n" ,volume, convert(volume)); // calling the convert function in convert.h
    return 0;
}
