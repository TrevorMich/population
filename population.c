#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int start_size;
    int end_size;
    int years = 0;
    do
    {
        start_size = get_int("Start Population: ");
    }
    while (start_size < 9);

    // TODO: Prompt for end size
    do
    {
        end_size = get_int("End population: ");
    }
    while (end_size < start_size);

    // TODO: Calculate number of years until we reach threshold
    while (start_size < end_size)
    {
        start_size = start_size + (start_size / 3) - (start_size / 4);
        years++;
    }

    // TODO: Print number of years
    printf("Years: %i\n", years);

}