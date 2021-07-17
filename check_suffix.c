#include "string.h"
/*
 * Check if s1 is a suffix of s2
 * https://www.geeksforgeeks.org/check-if-a-string-is-suffix-of-another/
 */
int is_suffix(char* s1, char* s2){
    int n1 = strlen(s1), n2 = strlen(s2);
    if (n1 > n2)
        return 1;
    for (int i=0; i<n1; i++)
        if (s1[n1 - i - 1] != s2[n2 - i - 1])
            return 1;
    return 0;
}
