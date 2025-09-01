#include <stdlib.h>
#include <time.h>

void rand_string(char *s, int size) 
{
    static const char letters[] =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";


    for (int i = 0; i < size; i++) {
        s[i] = letters[rand() % (sizeof(letters) - 1)];
    }
    s[size] = '\0';
}
