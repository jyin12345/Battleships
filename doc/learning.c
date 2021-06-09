#include <stdio.h>


void other_shit();


typedef unsigned char   u8;
typedef unsigned short  u16;
typedef unsigned int    u32;
typedef unsigned long   u64;

typedef struct _test_structure {
    u8 money;
    u8 score;
    float weight;
} test_structure;


void do_something_to_test_struct(test_structure* x) {

    if (x->money > 10) {
        x->score += 10;
    }

    printf("Score: %d\n", x->score);
}


int test_function() {
    // do something

    return 360;
}


/*

exponent = e
matissa = m


float = m * 2^(e)


0 00000000 000000000000000000000000

0 10111111 000000000000000000000000

float = 0 * 2^(191)


0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000 0000


x * (1/sqrt(2))

*/


int main (int argc, char** argv) {

    test_structure temp_var;
    temp_var.money = 30;
    temp_var.score = 2;
    temp_var.weight = 0.0f;

    printf("Score: %d\n", temp_var.score);

    u64 x = *((u64*)&temp_var);

    printf("Struct size: %ld\n", sizeof(test_structure));

    printf("Structure Memory Location: %ld\n", (long int)&temp_var);

    do_something_to_test_struct(&temp_var); // Calling Function
    do_something_to_test_struct(&temp_var);
    do_something_to_test_struct(&temp_var);
    do_something_to_test_struct(&temp_var);
    do_something_to_test_struct(&temp_var);

    printf("Score: %d\n", temp_var.score);


    // Deconstructing Bytes of the Structure (size of 8 bytes)
    u8* struct_ptr = &temp_var;
    printf("Byte 1: %d\n", *(struct_ptr + 0));
    printf("Byte 2: %d\n", *(struct_ptr + 1));
    printf("Byte 3: %d\n", *(struct_ptr + 2));
    printf("Byte 4: %d\n", *(struct_ptr + 3));
    printf("Byte 5: %d\n", *(struct_ptr + 4));
    printf("Byte 6: %d\n", *(struct_ptr + 5));
    printf("Byte 7: %d\n", *(struct_ptr + 6));
    printf("Byte 8: %d\n", *(struct_ptr + 7));

    // Going out of memory 
    printf("Byte 9: %d\n", *(struct_ptr + 8));
    printf("Byte 10: %d\n", *(struct_ptr + 9));
    printf("Byte 11: %d\n", *(struct_ptr + 10));
    printf("Byte 12: %d\n", *(struct_ptr + 11));
    printf("Byte 13: %d\n", *(struct_ptr + 12));


    // Doing loops
    int i;
    for (i = 0; i < 10; i++) {
        printf("for looping: %d\n", i);
    }

    while (i) {
        printf("while looping: %d\n", i);
        i--;
    }


    return 0;
}


void other_shit() {
    char test_character = 65;
    short test_short_number = 1;
    int test_number = 2;
    long test_long_number = 3;

    unsigned char test_unsigned_character = 65;
    unsigned short test_unsigned_short_number = 1;
    unsigned int test_unsigned_number = 2;
    unsigned long test_unsigned_long_number = 3;

    float test_floating_point = 0.2f;
    double test_double = 0.3;


    int my_array[] = { 1, 2, 3, 4 };
    my_array[0];
    printf("%d\n", my_array[-1]); // Doesn't work


    // Playing with chars
    printf("Testing Char: %c %d 0x%x \n\n\n", test_character, test_character, 
                                            test_character);

    // Sizeof Variable Types
    printf("Char: %ld bytes\n",    sizeof(test_character));
    printf("Short: %ld bytes\n",   sizeof(test_short_number));
    printf("Int: %ld bytes\n",     sizeof(test_number));
    printf("Long: %ld bytes\n",    sizeof(test_long_number));
    printf("Float: %ld bytes\n",   sizeof(test_floating_point));
    printf("Double: %ld bytes\n",  sizeof(test_double));


    // Showing booleans and expressions
    int toggle_num = 0;
    if (!toggle_num) {
        printf("True\n");
    } else {
        printf("False\n");
    }
}