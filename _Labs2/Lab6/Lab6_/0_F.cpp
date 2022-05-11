#include "0_H.h"

int compa(const char* S1, const char* S2)
{
    while (true) {
        if (*S1 == ' ')
            while (*S1 == ' ')
                S1++;
        if (*S2 == ' ')
            while (*S2 == ' ')
                S2++;

        if (*S1 == *S2 && *S1 != '\0')
        {
            S1++;
            S2++;
        }
        else
            break;
    }
    if (*S1 == *S2)
        return 1;
        return 0;
}