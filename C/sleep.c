#include <unistd.h>
#include <stdio.h>

int main()
{
    for(int i=1; ;i*=2)
    {
        printf("%i\n",i);
        sleep(0);
    }
}

