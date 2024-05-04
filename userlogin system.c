#include<stdio.h>
#include<string.h>
int main()
{
    char user[]="sneha";
    char pass[]="amical";
    char user1[20],pass1[20];
    int i=0;
    int attempt=0;
    while(i<1)
    {
        attempt++;
        if (attempt==4)
        {
            printf("\n three attempt finished");
            break;
        }
        printf("\n enter your username");
        scanf("%s",&user1);
        printf("\n enter your password");
        scanf("%s",&pass1);
        if(strcmp(user,user1)==0 && strcmp(pass,pass1)==0)
        {
            printf("\n login successful:");
            break;
        }
        else
        {
            printf("\n enter again");
        }
    }
}
