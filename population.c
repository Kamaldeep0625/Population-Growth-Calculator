#include <cs50.h>
#include <stdio.h>

int main(void)

{


    // TODO: Prompt for start size
    int start;
    do
    {
        start = get_int("Starting Population (Greater than 9): ");
    }
    while (start < 9);
    // TODO: Prompt for end size
    int end;
    do
    {
        end = get_int("Ending Population (Greater than starting population): ");
    }

    while (end < start);
    // TODO: Calculate number of years until we reach threshold

    int years = 0;
    while (end > start)
    {
        // 3 and 4 represent a third or fourth of the starting population. The 3 is the birth rate, the 4 is the death rate. Adjust as needed.
        start = start + (start / 3) - (start / 4);
        years++;
    }

    {
// TODO: Print number of years
        printf("Years: %d\n", years);
    }


}
