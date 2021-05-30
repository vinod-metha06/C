#include<stdio.h>

int main(){

 char password[20]="1234",pass_input[20];
 int x = 5;

    
    printf("enter password: ");
    gets(pass_input);
    
    while (x!=0)
    {

        for(int i=0;password[i]!='\0';i++)
        {
            if(password[i]==pass_input[i])
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
        
        break;
    }    

}