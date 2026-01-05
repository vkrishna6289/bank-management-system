#include "balance.c"
//#include "pass.h"

void login(void){
    system("cls");

    char username[50];
    char password[50];

    int i,j,k;
    char ch;
    FILE *fp,*fu;
    struct pass{
        char ff[30];
        char username[20];
        char usernameto[20];
        char usernamefrom[20];
        long int money1;
    };
    struct pass u1;

    //scanf userpass{
    struct userpass{
        char u2[30];
        char u23[30];
    };
    //struct userpass u2;
    struct userpass u2;
     
    fp = fopen("username.txt","rb");

    if (fp == NULL){
        printf("ERROR");
    }
    
    printf("accoutn login");
    printf("login");
   
    printf("give username");
    scanf("%c",&username);
    
    printf("password:");

    for(i=0,i<50,i++){
        ch = getchar();
        if (ch != 13){
            password[i] = ch;
            ch = '*';
            printf("%c",ch);
        }

        else 
          break;
    }
    
    while (fread(&u1,  
              sizeof(u1), 1, fp))  
 {
   if (strcmp(username,  
              u1.username) == 0)  
   {
     loginsu();
     display(username);
   }
 }

 // Closing the file
 fclose(fp);
}

// Screen is shown after  
// successful login
void loginsu(void)
{
//#include "pass.h"
 int i;
 FILE* fp;
struct pass *u1;
 system("cls");
 printf("Fetching account details.....\n");
 for (i = 0; i < 20000; i++)  
 {
   i++;
   i--;
 }
 gotoxy(30, 10);
 printf("LOGIN SUCCESSFUL....");
 gotoxy(0, 20);
 printf("Press enter to continue");

 getch();
}
        

