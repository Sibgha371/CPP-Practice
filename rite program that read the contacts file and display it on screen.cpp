//Write program that read the contacts file and display it on screen

 //Dependenties
 #include<stdio.h>
 #include<conio.h>
 #include<windows.h>
 
//Main function
int main()
{
  //File pointer or variables
  COORD c;
    c.X = 0;
    c.Y = 0;
  
    
  FILE* fp;
  char ch;
  fp = fopen("D:\\All\\contactsName.txt","r");
   if(fp==NULL)
   {
     printf("cannot open file") ;
   }
   else
   {
       printf("Name");
       c.X = 40;
       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
       printf("Phone#\n");
       c.Y = 1;
       c.X = 0;
       SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
       printf("--------------------------------------------------------\n");
       c.X = 0;
       c.Y = 2;
       while((ch = getc(fp))!= EOF)
       {
         if(ch == '!') 
            {   c.X = 40;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c); 
            } 
            else if(ch =='\n')
            {
                c.X = 0;
                c.Y++;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
            }
            else
            {
                printf("%c",ch);
            }
       }
   }
   fclose(fp);
   getch();
}
