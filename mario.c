#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    //Create height amount of rows
    for (int i = 0; i < height; i++)
    {
        //print " " height-1-i times
        for (int j = 0; j < height - 1 - i; j++)
        {
            printf(" ");
        }
        //print # i+1 times
        for (int k = 0 ; k < i + 1; k++)
        {
            printf("#");
        }
        //space between
        printf("  ");
        //symetric #, i+1 times
        for (int l = 0 ; l < i + 1; l++)
        {
            printf("#");
        }
        printf("\n");
    }

}
