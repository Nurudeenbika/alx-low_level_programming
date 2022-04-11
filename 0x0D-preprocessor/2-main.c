#include <stdio.h>



/* The name of the file it was compiled from, followed by a new line.*/

int main(void)
{
        int i;
        i = "__FILE__";
        printf("%s\n", i);
        return 0;
}
