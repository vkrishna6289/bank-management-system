#include<stdio.h>
#include<conio.h>
#include<string.h>

long int checkbalance(char* username){
   // system("cls");
    FILE *fm;
    struct pass{
        char ff[30];
        char username[20];
        char usernameto[20];
        char usernamefrom[20];
        long int money1;
    };

    struct pass m1;
    int i=1;
    long int summoney = 0;

   fm = fopen("mon.txt","rb");

   printf("balance dashboard ===\n");

   while(fread(&m1, sizeof(m1), 1,fm)){
    if(strcmp(username, m1.usernameto)==0){
     printf("%d. ", i);
     printf("From: %s ", m1.usernamefrom);
     printf("Amount: %ld\n", m1.money1);
     summoney += m1.money1;
     i++;
    }
   }
   printf("Total amount: %ld\n", summoney);

   getch();

   fclose(fm);
   //display(username);

   return summoney;
}

int main() {
    char username[20];
    printf("Enter username to check balance: ");
    scanf("%s", username);
    long int balance = checkbalance(username);
    printf("Balance returned: %ld\n", balance);
    return 0;
}
