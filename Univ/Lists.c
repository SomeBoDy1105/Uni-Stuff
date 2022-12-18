#include<stdio.h>
#include <stdlib.h>

typedef struct element element;
typedef element* liste;
struct element
{
    int info;
    liste svt;
};
