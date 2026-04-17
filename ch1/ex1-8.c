#include <stdio.h>

int main()
{
    int c;
    int nl, tab, blank;

    nl = tab = blank = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
            ++nl;
        if (c == ' ')
            ++blank;
        if (c == '\t')
            ++tab;
    }
    printf("%d line breaks\n%d blank spaces\n%d tabs\n", nl, blank, tab);

    return 0;
}