#include <stdio.h>
#include "lib_plugin.hh"

int undefined_plugin_func()
{
    printf("undefined_plugin_func call\n");
}

int forgot_to_define2()
{
    printf("Forgot to define 2(!) func called\n");
    return 0;
}


int circular_dep_func();
