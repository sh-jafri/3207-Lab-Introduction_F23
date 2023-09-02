#include <stdio.h>
#include <stdlib.h>
char randchar();

char randchar() {
    char randomletter = 'A' + (random() % 26);
    return randomletter;
}