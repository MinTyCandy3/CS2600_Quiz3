#include <stdio.h> 

#include <stddef.h> 

typedef struct { 

    long number; // 4 bytes ~ 8 bytes 

    char *name; // 4 bytes ~ 8 bytes

    char *phone; // 4 bytes ~ 8 bytes

    double salary; // 8 bytes

    // bytes wasted when extended = padding

} Employee, *PtrToEmployee; 

typedef const Employee *PtrToConstEmployee; 