#include<stdio.h>

int main(){

 char password[]="1234",pass_input[100];
 int x = 5;
 int flag =1;

    
    
    
    while (x!=0)
    {

        printf("enter password: ");
        gets(pass_input);

        for(int i=0;password[i]!='\0';i++)
        {
            if(password[i]==pass_input[i])
            {
               
               flag=0;
                            
            }
            
                
            else
            { flag =1;
                printf("%d\n",x);
                printf("Wrong Password :(\n");
                
                x-=1;

                if(x == 0){
                    break;

                }else{

                    printf("you have %d more attempt !! \n",x-1);
                }
              break;
            }
           
                    
        }
        
                
      
        if(flag==0)
        {
             printf("Access  Granted :) \n");
             x=0;
        }
        
        
    }    

   

}