//Write a program that will append data records in contacts.txt file

//DEPENDENTIES
#include<stdio.h>
#include<string.h>

//MAIN FUNCTION
int main()
{
    //FILE POINTER
    
    FILE *fp;
    char name[30];
    char tel[11];
    
    //OPENING A FILE
    
    if ((fp = fopen("D:\\All\\contacts.txt","a")) == NULL)
    {
        printf("cannot open the file");
    }
    else
    {
        do
        {
          printf("Enter the name (press enter to quit):\n");
          gets(name);
          if(strlen > 0)
          {
              printf("Enter the number :");
              gets(tel);
              
              //put name and telephone number
              fputs(name,fp);
              fputs("!",fp);
              fputs(tel,fp);
              fputs("\n",fp);
              
          }while(strlen > 0);
        }
    }fclose(fp);
    
}
