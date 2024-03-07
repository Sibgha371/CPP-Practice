//COUNTING LETTER GRADES


//DEPENDENTIES
#include<stdio.h>

//MAIN FUNCTION
int main()
{
    //DECLARATION OF VARIABLES
    int grade;
    int acount=0 , bcount=0 , ccount=0 , dcount=0 , ecount=0 , fcount=0;
    
    printf("Enter letter grades (Enter S to end input)\n");
    //TAKING INPUT 
    while((grade = getchar())!='S')
    {
        switch(grade)
        {
            case 'A': case 'a':
                ++acount;
                break;
            case 'B': case 'b':
                ++acount;
                break; 
            case 'C': case 'c':
                ++acount;
                break;
            case 'D': case 'd':
                ++acount;
                break;
            case 'E': case 'e':
                ++acount;
                break;
            case '\n' : 
                break;
            default:
            printf("Incorrect letter grades enter\n");
            printf("Enter new grades;");     
        }
    }
    printf("Grades of albaphats are\n");
    printf("For 'A' : %d\n",acount);
    printf("For 'B' : %d\n",bcount);
    printf("For 'C' : %d\n",ccount);
    printf("For 'D' : %d\n",dcount);
    printf("For 'E' : %d\n",ecount);
}


