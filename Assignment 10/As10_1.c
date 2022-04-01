#include<stdio.h>
#include<string.h>
typedef struct book
{
    char type;
    char name[50];
    char author[20];
}book_t;
int print(char filename[])
{
    FILE *fp, *fp1, *fp2;
    fp=fopen(filename,"r");
    if(fp == NULL)
    {
        printf("File Not Found");
        return 0;
    }
    int i=0;
    book_t b[10];
    fp1=fopen("Paperbacks.txt","w");
    fp2=fopen("Handbacks.txt","w");
    while(fscanf(fp," %c, %[^,], %[^\n]\n",&b[i].type,b[i].name,b[i].author)!=EOF)
    {
        if(b[i].type=='b')
        {
            fprintf(fp1,"%s, %s\n",b[i].name,b[i].author);
            fprintf(fp2,"%s, %s\n",b[i].name,b[i].author);
        }
        else if(b[i].type == 'p')
            fprintf(fp1,"%s, %s\n",b[i].name,b[i].author);
        else if(b[i].type == 'h')
            fprintf(fp2,"%s, %s\n",b[i].name,b[i].author);
        i++;
    }
    fclose(fp1);
    fclose(fp2);
    fclose(fp); 
}
int main()
{
    char filename[20];
    scanf("%s",filename);
    strcat(filename,".txt");
    print(filename);
    return 0;
}
