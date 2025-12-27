#include <stdio.h>
#include <conio.h>
#include <string.h>
int main (){
    // this is to transfer money
    int i , j;
    char userp[20],usert[20];
    //char username;
    FILE *fm,*fp;
    struct pass {
        char ff[30];
        char username[20];
        char usernameto[20];
        char usernamefrom[20];
        long int money1;
        //long int money1;
    };
    struct pass u1;
    //struct money m1;
     
    /*struct pass {
        long int money1;
    };*/
    struct pass m1;

    

    fm = fopen("userdetails.txt","rb");
    fp = fopen("mon.txt","ab");

   // gotoxy(33,4);
    printf("transfer money");
    //gotoxy(33,4);
    printf("transfer money");
    
    //gotoxy(33,11);
    printf("FROM");
    scanf("%s",&usert);
    
   // gotoxy(33,11);
    printf("TO");
    scanf("%s",&userp);

    while(fread(&u1,sizeof(u1),1,fm))
    {
        if(strcmp(userp,u1.username) == 0){
            strcpy(m1.usernameto,u1.username);
            strcpy(m1.usernamefrom,usert);

        }
    }


    printf("enter amount to be transfered:");
    scanf("%d", &m1.money1);
    
  // gotoxy(0, 29);
 printf("transferring amount, Please wait..");

 //gotoxy(33,40);
 printf("amount transfered successfully");
 getch();

fclose(fp);
fclose(fm);
//display(usert);
}