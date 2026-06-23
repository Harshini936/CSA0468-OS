#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char line[100],word[20];
    int found=0;

    fp=fopen("sample.txt","r");
    printf("Enter word to search: ");
    scanf("%s",word);

    while(fgets(line,sizeof(line),fp))
    {
        if(strstr(line,word))
        {
            printf("%s",line);
            found=1;
        }
    }

    if(!found)
        printf("Word not found");

    fclose(fp);
    return 0;
}