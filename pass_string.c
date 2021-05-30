#include<stdio.h>
#include <string.h>

void main(){
   
    char m_pass[]="1234";
    char pass[];


    int x = 5;
    
    
    while (x!=0)
    {
        printf("Enter your password!\n");
        scanf("%c",&pass);
        //sprintf(pass_input, "%d", pass);
        printf("%c\n",pass);
       //int result =strcmp(m_pass,pass);
        //printf( result);


        if (strcmp(m_pass,pass) == 0)
        {
            printf("Access  Granted :) \n");
            break;
        }
        else
        {
            printf("Wrong Password :(\n");
            x-=1;

            if(x == 0){
                break;

            }else{
                printf("you have %d more attempt !! \n",x-1);
            }
            
        }
        

       
    }
    
    

}