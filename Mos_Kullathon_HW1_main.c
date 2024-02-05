/**************************************************************
 * Class::  CSC-415-03 Spring 2024
 * Name::  Mos Kullathon
 * Student ID::  921425216
 * GitHub-Name::  mosguinz
 * Project::  Assignment 1 – Command Line Arguments
 *
 * File::  mos_kullathon_HW1_main.c
 *
 * Description::  This assignment is to write a C program that accepts
 * arguments via the command line and then displays each of those arguments
 * to the terminal along with how many arguments there are.
 *
 **************************************************************/

#include <stdio.h>

// `argc` allows me to easily obtain the argument length
// and traverse through the arguments.
int main(int argc, char *argv[])
{
    printf("There are %d arguments.\n\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("Argument %d: %s\n", i, argv[i]);
    }
    return 0;
}
