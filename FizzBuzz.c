#include <stdio.h>
#define NUMBERCAP 100
void performFizzBuzz(void);

int main (void)
{
    performFizzBuzz();
    return 0;
}

void performFizzBuzz(void)
{
    int counter = 1;
    for(; counter <= NUMBERCAP; counter++)
    {
        if(counter % 3 == 0)
        {
            printf("Fizz");

        }
        if(counter % 5 == 0)
        {
            printf("Buzz");

        }
        if(counter % 3 != 0 && counter % 5 != 0)
        {
            printf("%d" , counter);
        }
        puts("");
    }


}
