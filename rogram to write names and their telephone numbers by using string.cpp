//Program to write names and their telephone numbers by using string

//Dependenties
#include<stdio.h>
#include<string.h>

//Main function
int main()
{
    //File pointer
    FILE *fp;
    char name[30],tel[11];
    
    //opening file
    if((fp = fopen("D:\\All\\contacts.txt","w"))==NULL){
        printf("Cannot open contacts.txt file");
    }else{
        do{
            printf("Enter the name(or press Enter to quit):");
            gets(name);
            if(strlen(name) > 0){
                printf("Enter telephone number(max 11 character):");
                gets(tel);
            }
            fputs(name,fp);
            fputs(":",fp);
            fputs(tel,fp);
            fputs("\n",fp);
        }while(strlen(name)>0);
        fclose(fp);
    } 
}
