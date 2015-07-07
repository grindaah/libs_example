#include <stdio.h>
#include "lib_main.hh"

int init()
{
    printf("Hello world\n");
    forgot_to_define();
}


int main()
{
    init();
    return 0;
}
