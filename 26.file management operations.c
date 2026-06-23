#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char text[100];

    fp=fopen("sample.txt","w");
    printf("Enter text: ");
    fgets(text,sizeof(text),stdin);
    fputs(text,fp);
    fclose(fp);

    fp=fopen("sample.txt","r");
    printf("\nFile contents:\n");
    while(fgets(text,sizeof(text),fp))
        printf("%s",text);
    fclose(fp);

    fp=fopen("sample.txt","a");
    printf("\nAppend text: ");
    fgets(text,sizeof(text),stdin);
    fputs(text,fp);
    fclose(fp);

    fp=fopen("sample.txt","r");
    printf("\nUpdated contents:\n");
    while(fgets(text,sizeof(text),fp))
        printf("%s",text);
    fclose(fp);

    remove("sample.txt");

    return 0;
}