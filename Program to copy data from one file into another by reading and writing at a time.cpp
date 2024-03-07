//Program to copy data from one file into another by reading and writing at a time

//Dependenties
#include<stdio.h>
#include<conio.h>

//Main Function
int main()
{
    //File pointers
    FILE *input;
    FILE *output;
    
    char ch;
    
    //Opening file
     if((input = fopen("D:\\All\\adata.txt","r"))== NULL){
         printf("Cannot open adata.txt file for reading\n");} 
         else if((output = fopen("D:\\All\\bdata.txt","w"))== NULL){
         printf("Cannot open bdata.txt file for writing\n");}
         else{
         output = fopen("D:\\All\\bdata.txt","w");
         //if both are open sucessfully
         while((ch = getc(input))!=EOF){
              putc(ch,output);
             }  
             printf("Data from adata.txt is copied into bdata.txt");
             fclose(input);
             fclose(output);
            }
}
