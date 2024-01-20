/*
Dylan Cael - TUQ68706 - 1/17/2024
CIS-3207-003
Lab #0 Introduction to git & GitHub

Function that calls an already seeded random number generator and returns values from 65-90 to return
a random character from A-Z
*/
#include <stdlib.h>
#include "random.h"

char randchar() {

    return (rand() % 26) + 65;               // returns call to seeded randomizer modulus 26 for A-Z and +65 for ASCII 'A' start point

}
