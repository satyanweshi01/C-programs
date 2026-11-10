#include <stdio.h>

/*
this is basic implementation of linux's cat program
*/
int main(int argc, char** argv)
{
    //printf("%s",argv[1]);
    // edge cases
    // if no parameter was given 
    if (argc==1)
    {
        printf("No command line file name argument given\n");
        return 0;
    }
    // if many parameters was given
    else if (argc>2)
    {
        printf("Many command line arguments given\n");
        return 0;
    }

    
    FILE *ptr = fopen(argv[1],"r");
    // if file not found
    if (ptr == NULL)
    {
        printf("Null returned as file pointer, probably file does not exist\n");
        return 0;
    }


    // char arr[100]; now the main issue is this static data allocation

    // char ch; this code snippet is causing eof getting printed
    // while (ch != EOF)
    // {
    //     ch=fgetc(ptr);
    //     printf("%c",ch);
    // }

    for (int ch = fgetc(ptr); ch != EOF; ch = fgetc(ptr))
    {
        printf("%c",ch);
    }
    fclose(ptr);
}