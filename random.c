#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar() {

    const char randomChar = (rand() % (26)) + 65;
    return randomChar;
}
