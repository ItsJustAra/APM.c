
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool BOOL = false ; // global var 

typedef struct 
{
    char familly_name[30] ;

    char first_name[30] ;

    int birth_day ;

    int birth_month ;

    int birth_year ;

    double cash_amount ; 

    int key ; // log in key 
   
} user_info  ;

void full_users_info(void)
{
    user_info users ;

    users.cash_amount = 0 ; // cash amount equals zero 

    char CODE[10] ;

    int index ;

    int age ;

    printf(" ➣ Familly name : \t") ;
    scanf("%s",&users.familly_name) ;
    printf("\n\n") ;

    printf(" ➣ First name :\t") ;
    scanf("%s",&users.first_name) ;
    printf("\n\n") ;

    printf(" ➣ Born in\n\n Day :\t") ;
    scanf("%d",&users.birth_day) ;
    printf("\n\n") ;

    printf(" Month :\t") ;
    scanf("%d",&users.birth_month) ;
    printf("\n\n") ;

    printf(" Year :\t") ;
    scanf("%d",&users.birth_year) ;
    printf("\n\n") ;

    age = 2022 - ( users.birth_year) ;

    if( age < 18 )
    {
        printf(" ✘ Sorry you are to young to have a bank account \n\n") ;

        exit(-1) ;
    }

    printf(" ➣ Your bank code :\t") ;
    scanf("%s",&CODE) ;
    printf("\n\n") ;

    printf(" ➣ Your bank key :\t") ;
    scanf("%d",&users.key) ;
    printf("\n\n") ;

    FILE *bank = fopen( CODE , "w") ;

    for( int i = 0 ; i < 70 ;++i)
    {
        fprintf(bank,"*") ;
    }

    fprintf(bank,"\n\n") ;

    fprintf(bank," ➢ Familly name : %s\n",users.familly_name) ;

    fprintf(bank," ➢ First name : %s\n",users.first_name) ;

    fprintf(bank," ➢ Born in : %d / % d / %d \n",users.birth_day , users.birth_month , users.birth_year) ;

    fprintf(bank," ➢ Your key : %d | ➢ Your code : %s \n",users.key ,CODE ) ;

    char cnv ; // converstation

    for( int i = 0 ; i < 70 ;++i)
    {
        printf("*") ;
    }

    system("cls");

    printf("Loading .") ;

    system("cls") ;

    printf("Loading ..") ;

    system("cls") ;

    printf("Loading ...") ;

    system("cls") ;

    printf("Loading .") ;

    system("cls") ;

    printf("Loading ..") ;

    system("cls") ;

    printf("Loading ...") ;

    system("cls") ;

    for( int i = 0 ; i < 70 ;++i)
    {
        printf("*") ;
    }

    printf("\n\n\a") ;

    printf(" ➢ Familly name : %s \n\n",users.familly_name) ;

    printf(" ➢ First name : %s\n\n",users.first_name) ;

    printf(" ➢ Born in : %d / % d / %d \n\n",users.birth_day , users.birth_month , users.birth_year) ;

    printf(" ➢ Your key : %d | ➢ Your code : %s \n\n",users.key ,CODE ) ;

    printf(" ➢ Cash amount : %ld \n\n",users.cash_amount) ;

    for( int i = 0 ; i < 70 ;++i)
    {
        printf("*") ;
    }

    printf("\n\n\a") ;

    printf(" You are sure that all the info are correct \n\n") ;

    printf("             | Yes |   or   | No | \n\n") ;

    printf("type :\t") ;
    scanf("%s",&cnv) ;

    printf("\n\n") ;

    if( cnv == 'y')
    {
        system("cls");

    printf("Loading .") ;

    system("cls") ;

    printf("Loading ..") ;

    system("cls") ;

    printf("Loading ...") ;

    system("cls") ;

    printf("Loading .") ;

    system("cls") ;

    printf("Loading ..") ;

    system("cls") ;

    printf("Loading ...") ;

    system("cls") ;

        for( int i = 0 ; i < 70 ;++i)
        {
        printf("*") ;
        }

        printf("\n\n\a") ;

        printf(" Do you want to add the cash amount :\t") ;

        printf("             | Yes |   or   | No | \n\n") ;

        printf("type :\t") ;

        scanf("%s",&cnv) ;

        printf("\n\n") ;

        for( int i = 0 ; i < 70 ;++i)
        {
        printf("*") ;
        }

        printf("\n\n\a") ;

        if( cnv == 'y')
        {
            system("cls");

    printf("Loading .") ;

    system("cls") ;

    printf("Loading ..") ;

    system("cls") ;

    printf("Loading ...") ;

    system("cls") ;

    printf("Loading .") ;

    system("cls") ;

    printf("Loading ..") ;

    system("cls") ;

    printf("Loading ...") ;

    system("cls") ;

            printf("add your cash amount :\t") ;
            scanf("%d",&users.cash_amount) ;

            fprintf(bank," ➢ Cash amount : %ld \n\n",users.cash_amount) ;

            for( int i = 0 ; i < 70 ;++i)
            {
                fprintf(bank,"*") ;
            }

            fprintf(bank,"\n\n") ;

            fclose(bank) ;
        }
    }

    else if( cnv == 'n')
    {
        printf("\n\n") ;

        fprintf(bank," ➢ Cash amount : %ld \n\n",users.cash_amount) ;

        for( int i = 0 ; i < 70 ;++i)
        {
            fprintf(bank,"*") ;
        }

        fprintf(bank,"\n\n") ;

        fclose(bank) ; 
    }
}

void sign_up(void)
{
    system("cls");

    printf("Loading .") ;

    system("cls") ;

    printf("Loading ..") ;

    system("cls") ;

    printf("Loading ...") ;

    system("cls") ;

    printf("Loading .") ;

    system("cls") ;

    printf("Loading ..") ;

    system("cls") ;

    printf("Loading ...") ;

    system("cls") ;

    printf("                               ▉▉ SIGN UP ▉▉ \n\n") ;
                        
    full_users_info() ;

    printf("\n\n") ;

    printf("account has been created successfully") ;
}

void PrintTheInfo( user_info users , char *code)
{   
    FILE *bank ;

    char single_line[100] ;

    bank = fopen(code , "r") ;

    if( bank == NULL)
    {
        printf("Error there is no such a information about this account \n\n") ;

        BOOL = false ;
    }

    while( !feof(bank))
    {
        fgets( single_line ,sizeof(single_line),bank) ;
        puts(single_line) ;
    }


    fclose(bank) ;

    BOOL = true ;
}

void log_in(void)
{
    system("cls");

    printf("Loading .") ;

    system("cls") ;

    printf("Loading ..") ;

    system("cls") ;

    printf("Loading ...") ;

    system("cls") ;

    printf("Loading .") ;

    system("cls") ;

    printf("Loading ..") ;

    system("cls") ;

    printf("Loading ...") ;

    system("cls") ;

    printf("                               ▉▉ LOG IN ▉▉ \n\n") ;

    user_info users ;

    char code[10] ;

    while( BOOL == false )
    { 

        printf(" Your key :\t") ;
        scanf("%d",&users.key) ;
        printf("\n\n") ;

        printf(" Your code :\t") ;
        scanf("%s",&code) ;
        printf("\n\n") ;

        PrintTheInfo(users ,code) ;
    }
}

void how_much( user_info users , char *code)
{
    char cnv ;

    FILE *first_file ;
    FILE *second_file ;

    int line = 9 ;
    int temp = 1 ;
    char ch ;

    first_file = fopen( code , "r");

    if ( first_file == NULL ) 
    {
        printf("\nUnable to open file\n");

        exit(-1) ;
    }

    while (!feof(first_file)) 
    {
        ch = getc(first_file);

        printf("%c", ch);
    }
    rewind(first_file);

    second_file = fopen("temp.txt", "w");

    while (!feof(first_file)) 
    {
        ch = getc(first_file);

        if (ch == '\n')

            temp++;

        if (temp != line)

            putc(ch, second_file);
    }

    fclose(first_file);

    fclose(second_file);

    remove( code );

    rename("temp.txt", code);

    printf(" Would you like to draw or add cash\n\n") ;

    printf("                  | Draw |    or    | Add |\n\n") ;
    printf("type :\t") ;
    scanf("%S",&cnv) ;

    if( cnv == 'd')
    {
        printf("how much would you like to draw :\t") ;

        scanf("%d",& users.cash_amount) ;

    }

    else if( cnv == 'a')
    {
        printf("how much would you like to add :\t") ;
        
        scanf("%d",& users.cash_amount) ;
    }
}
void AddOrDraw(void)
{
    system("cls");

    printf("Loading .") ;

    system("cls") ;

    printf("Loading ..") ;

    system("cls") ;

    printf("Loading ...") ;

    system("cls") ;

    printf("Loading .") ;

    system("cls") ;

    printf("Loading ..") ;

    system("cls") ;

    printf("Loading ...") ;

    system("cls") ;

    printf("                               ▉▉ LOG IN ▉▉ \n\n") ;

    user_info users ;

    char code[10] ;

    while( BOOL == false )
    {   
        printf(" Your key :\t") ;
        scanf("%d",&users.key) ;
        printf("\n\n") ;

        printf(" Your code :\t") ;
        scanf("%s",&code) ;
        printf("\n\n") ;

        how_much( users,code) ;
    }
}

void Deactivate_your_bank_account(void)
{
    system("cls");

    printf("Loading .") ;

    system("cls") ;

    printf("Loading ..") ;

    system("cls") ;

    printf("Loading ...") ;

    system("cls") ;

    printf("Loading .") ;

    system("cls") ;

    printf("Loading ..") ;

    system("cls") ;

    printf("Loading ...") ;

    system("cls") ;

    printf("                               ▉▉ LOG IN ▉▉ \n\n") ;

    user_info users ;

    char code[10] ;
    
    printf(" Your key :\t") ;
    scanf("%d",&users.key) ;
    printf("\n\n") ;

    printf(" Your code :\t") ;
    scanf("%s",&code) ;
    printf("\n\n") ;

    remove(code) ;
        
    printf(" \n Account has been deleted succefully \n\n ");
}

void users_options(void)
{
    int option ;

    printf(" \n\n                        $【 welcome to the main menu 】$\n\n \t\t\t") ;

    for(int i = 0 ; i < 40 ; ++i)
    {
        printf("_") ;
    }

    printf("\n\n") ;

    printf("                     1_ ☛ sign up  Create a bank account  \n\n") ;

    printf("                     2_ ☛ log in your bank account \n\n") ;

    printf("                     3_ ☛ Add or draw cash \n\n") ;

    printf("                     4_ ☛ deactivate your bank account \n\n") ;

    printf("                     5_ ☛ Exit \n\n") ;

    printf("\t\t\t") ;

    for(int i = 0 ; i < 40 ; ++i)
    {
        printf("_") ;
    }

    printf("\n\n") ;

    printf(" whats your option :\t") ;
    scanf("%d",&option ) ;

    char cnv ; // converstation 

    if( option == 1 )
    {
        printf("\n\n") ;

        sign_up() ;

        printf("\n\n") ;
    }

    else if( option == 2 )
    {
        printf("\n\n") ;

        log_in() ;

        printf("\n\n") ;
    }

    else if( option == 3 )
    {
        printf("\n\n") ;

        AddOrDraw() ;

        printf("\n\n") ;
    }

    else if( option == 4)
    {
        printf("\n\n") ;

        Deactivate_your_bank_account();

        printf("\n\n") ;
    }

    else if( option == 5)
    {
        printf("\n\n") ;

        exit(-1) ;

        printf("\n\n") ;
    }

    else {

        printf("\n\n there is no such a option like this in our menu \n\n") ;

        printf(" would you like to choose a other option ( yes ) or exit the program ( no ) \n\n") ;

        printf("             | Yes |   or   | No | \n\n") ;

        printf("type :\t") ;
        scanf("%s",&cnv) ;

        if( cnv == 'y')
        {
            printf("\n\n") ;

            users_options() ;

            printf("\n\n") ;
        }

        else if( cnv == 'n')
        {
            printf("\n\n") ;

            exit(-1) ;
        }
    }  
}

int main (void)
{
    users_options() ;

    printf(" \n\n CREDITS : WALID ARAAR \n\n") ;
}
