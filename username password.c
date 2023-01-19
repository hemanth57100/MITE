#include <stdio.h>
#include<string.h>
int main()
{
    char username[20];
    char password[10];
   printf("enter the username\n");
   scanf("%s",username);
   printf("Enter password\n");
   scanf("%s",password);
   if (strcasecmp(username, "Admin") == 0 && strcmp(password, "Admin") == 0){
       printf("Loging successfull\n");
   }
   else
   printf("Unsuccessfull");
}
