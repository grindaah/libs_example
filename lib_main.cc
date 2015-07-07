#include <stdio.h>
#include "lib_main.hh"

#include "lib_plugin.hh"

int forgot_to_define()
{
    printf("Forgot to define func called\n");
    // dlopen here ?
    forgot_to_define2();
    return 0;
}

int circular_dep_func()
{
    printf("circular_dep_func called\n");
}

