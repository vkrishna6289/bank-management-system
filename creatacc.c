#include<stdio.h>
#include<conio.h>

int main(){
    char password[20];
    int passlen , i , seek = 0;
    char ch  ;
    FILE *ft;

    struct pass{
        char fname[30];
        char mname[30];
        char age[30];
        char lname[30];
        //char fname[30];
        char acctype[30];
    }

    //printf("this is a page to create your account");

    ;struct pass u1;

    ft = fopen("userdetails.txt","ab");

    //system("cls");
    printf("create your account");

    printf("FIRST NAME:");
    scanf("%s",&u1.fname);

    printf("MIDDLE NAME:");
    scanf("%s",&u1.mname);

    printf("LAST NAME:");
    scanf("%s",&u1.lname);

    printf("AGE:");
    scanf("%s",&u1.age);

    printf("ACCOUNT TYPE:");
    scanf("%s",&u1.acctype);

    //taking password in star

    for(i=0;i<50;i++){

        ch = getch();
        if(ch != 13){
            password[i]=ch;
            ch = '*';
            printf("%c",ch);

        }
        else 
        break;

    }
    
    fwrite(&u1 , sizeof(u1),1,ft);

    //to close the file
    fclose(ft);

    
    


}