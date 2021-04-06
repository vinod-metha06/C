#include<stdio.h>
#include<string.h>

int main()
{
    char a[100], b[100] ="Vinod", c[100] ="vinod",
    m [100]="Mayur" ,n[100]="mayur";  

    printf("Enter the Name\n");    
    gets(a);    // same as scanf ,whichs take array of character as input
   // scanf("%s",&a);   

    
    if( strcmp(a,b) == 0 ){
        printf("RCB is your favourite team :) .\n");

    }
       
    else if(strcmp(a,c) == 0){
        printf("RCB is your favourite team. :)\n");

    }
    else if(strcmp(a,m) == 0){
        printf("MI is your favourite team. :)\n");

    }
    else if(strcmp(a,n) == 0){
        printf("MI is your favourite team. :)\n");

    }
    else{
        printf("You don't have any favourite team. :(\n");
    }
        
        return 0;
}