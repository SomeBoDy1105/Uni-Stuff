#include <stdio.h>

int main() {
    char character = 'M';
    char * pointer_to_Character = &character;
    int integer = 2;
    int * pointer_to_integer = &integer;
	float floater = 3.14;
    float * pointer_to_floater = &floater;
    //display the value of each pointer
    printf("the value pointer_to_Character is : %c\n",*pointer_to_Character);
    printf("the value pointer_to_integer is : %d\n",*pointer_to_integer);
    printf("the value pointer_to_floater is : %f\n", *pointer_to_floater);
    // note : "\n" is used to go back in line so the display won't be messed up
    return 0;
}