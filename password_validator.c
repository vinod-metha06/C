#include<stdio.h>

void main(){
    int password= 1234;
    int x = 5;
    
    
    while (x!=0)
    {
        printf("Enter your password!\n");
        scanf("%d",&password);
        //printf("%d\n",password);


        if (password == 1234)
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