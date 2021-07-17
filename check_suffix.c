#include "string.h"
#include "stdio.h"
/*
 * Check if suffix is a suffix of str
 * https://stackoverflow.com/questions/744766/how-to-compare-ends-of-strings-in-c
 */
int is_suffix(const char *str, const char *suffix)
{
    if (!str || !suffix)
        return 0;
    size_t lenstr = strlen(str);
    size_t lensuffix = strlen(suffix);
    if (lensuffix >  lenstr)
        return 0;
    return strncmp(str + lenstr - lensuffix, suffix, lensuffix) == 0;
}
