#include <stdio.h>

int main()
{
    int c;
    int char_count[9] = {0};
    int count = 0;
    int highest = 0;

    while ((c = getchar()) != EOF)
    {
        if (c != ' ' && c != '\t' && c != '\n')
            ++count;
        
        else
        {
            if(count >= 9)
                count = 9;
            
            ++char_count[count - 1];
            count = 0;
        }
    }
    printf("Horizontal Histogram:\n");
    for (int i = 0; i < 9; i++){
        if (i < 9)
            printf("words with %d length ", i + 1);
        else
            printf("words with 9+ length ");
        for(int j = 0; j < char_count[i]; j++){
            printf("X");
        }
        printf("\n\n");
    }
    printf("Vertical Histogram:\n");

    for (int i = 0; i < 9; i++)
        if (char_count[i] > highest)
            highest = char_count[i];

    for (int i = 0; i < highest; i++){
        for(int j = 0; j < 9; j++)
            if(char_count[j] >= highest - i)
                printf("X  ");
            else printf("   ");
        printf("\n");
    }
    printf("#1 #2 #3 #4 #5 #6 #7 #8 #9+\n");

    return 0;
}