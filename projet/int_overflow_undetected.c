#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(int argc, char *argv[]) {
    int value = 0;
    
    //read in the value from the command line
    if (argc > 1) {
        value = atoi(argv[1]);
    }
    //calculate the correct value with the offset of 1000 added
    value = value + 1000;

    //print the value
    printf("%d\n", value);
    return 0;
}
