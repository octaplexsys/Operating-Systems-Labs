#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for (i = 1; i <= 3; i++)
    {
        fork();
        sleep(5);
    }

    return 0;
}
