//Develop a program to append data one character at one time

//Dependenties
#include<stdio.h>
#include<conio.h>

//Main function
int main()
{
    //File pointer
    FILE *wc;
    char ch,string[20];
    
    //Taking file name from user
    printf("Enter the name of file to append data:");
    scanf("%s",string);
    
    //Opening a file
    wc = fopen(string,"a");
    
    //Condition if file does not exist
    if((wc = fopen(string,"a")==NULL){
        printf("File does not Exist");
        return 1;
    }
    
    //Opening a file
    printf("Type data:press esc key when finished\n");
    
    while(ch!=27){
        ch = getche();
        putc(ch,wc);
        if(ch=='\r')
        {
            printf("\n");
        }
    }
}




