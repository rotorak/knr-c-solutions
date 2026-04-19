#include <stdio.h>

int main()
{
    int c;
    int blank = 0;

    while ((c = getchar()) != EOF)
    {
        if (c != ' '){
            blank = 0;
            putchar(c);
        }

        else if (c == ' ' && blank >= 1){
            ++blank;
        }

        else{
            ++blank;
            putchar(c);
        }
    }

    return 0;
}