#include <stdio.h>
#include <cs50.h>

int main (void){

    int height;
    // input data
    do {
        height = get_int("Enter a height: ");
    }while(height < 1 || height > 8);
    printf("\n");
    // output data
    for (int column = 0; column < height; column++)
    {
        for(int size = 0; size < height; size++)
        {
            if (column + size < height - 1)
            {
                printf(" ");
            } else{
                printf("#");
            }
        }
        printf("\n");
    }
    printf("\nChallenge: Mario versão fácil, concluido!\n");
}
