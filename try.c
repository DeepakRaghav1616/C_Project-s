#include "addProduct.c"
#include "delete.c"
#include "view.c"
#include "edit.c"
// #include "search.c"
#include<windows.h>

int main()
{
	system("cls");
     char USER_ID[]="Deepak", password[]="6031", id[8], p[6];
    int n=1, x, y;

    do{
         printf("\nUSER_ID:");
         scanf("%s", &id);

         printf("\nPassword:");
         scanf("%s", &p);

         x=strcmp(id, USER_ID);
         y=strcmp(p, password);

         if(x==0 && y==0){
           printf("\nSucessfully Logged In");
           /* printf("|%10s","Deepak\n");
    printf("..........\n");
    printf("|%10s","Deepak raghav\n");
    printf("%05d\n",671);
    printf("%09s\n","Deepak");
    printf("|%-5d|%-5d|\n",1,2);*/
    printf("............\n");
gotoxy(26,100);
    printf("\n");
 char text[4000]="\
       WW     WW        WW    EEEEEEEE   LL         CCCCCCC     OOOOOOOO         MM MM       MM          EEEEEEEE   \n\r\
       WW    WW WW     WW     EE         LL         CC          OO    OO        MM   MM     MM MM        EE        \n\r\
       WW   WW   WW   WW      EEEEEEE    LL         CC          OO    OO       MM     MM   MM   MM       EEEEEEE   \n\r\
       WW  WW    WW  WW       EE         LL         CC          OO    OO      MM       MM MM     MM      EE         \n\r\
         WW        WW         EEEEEEEE   LLLLLLL    CCCCCCC     OOOOOOOO     MM         MM        MM     EEEEEEEE  \n\r\
       \n\r\
       PPPPPPPPP    RRRRRRRRR      OOOOOOOOO       JJJJJJJJJJJJJ    EEEEEEEEEE     CCCCCCCCC    TTTTTTTTTTTTT \n\r\
       PP     PP    RR    RRR      OO     OO            JJ          EE             CC                TT       \n\r\
       PPPPPPPPP    RRRRRRRRR      OO     OO      JJ    JJ          EEEEEEEEEE     CC                TT       \n\r\
       PP           RR   RR        OO     OO      JJ    JJ          EE             CC                TT       \n\r\
       PP           RR     RR      OOOOOOOOO       JJJJJJ           EEEEEEEEEE     CCCCCCCCC         TT       \n\r\
        \n\r\
        \r ";  

        printf("%s",text);
    getch();
    int choice;
    char ch;
    do
    {
        // system("cls");
        system("color 86");
        // system("clear");//for linux
        printf("\n\t=========Welcome to Product mangement System==================\n");
        printf("\t 1.Add Product \n");
        printf("\t 2.Delete Product \n");
        printf("\t 3.view Product \n");
        printf("\t 4.Edit Product \n");
        printf("\t 5.Exit\n");

        printf("enter ur choice :");
        scanf("%d%*c", &choice);

        switch (choice)
        {
        case 1:
            addProduct();
            break;
        case 2:
            deleteProduct();
            break;
        case 3:
            viewProduct();
            break;
        case 4:
            editProduct();
            break;
        case 5:
            printf("Exiting System....\n");
            exit(0);
            break;

        default:
            printf(" Invalid Choice !!");
            exit(0);
            break;
        }
        printf("Press enter to continue  else press any key...  ");
        scanf("%c", &ch);
    } while (ch == '\n');
} else {
           printf("\nWrong Password, try again", 5-n);
            getch();
            n++;}

         if(n>5){
          printf("\nAccess Denied");
          getch();
          }

       }while (n<=3);
    return 0;
}
