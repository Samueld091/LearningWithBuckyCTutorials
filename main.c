#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    /*char answer;

    printf("Do you like bagels? (y/n) \n");
    scanf(" %c", &answer);

    if( (answer == 'y') || (answer == 'n'))
    {
        printf("Good job, you didn't mess anything up");

    } else {
        printf("Keyboard much?");
    }
    */

   /*
    char lastName[20];
    printf("enter your last name: \n")
    scanf(" %s", lastName);

    (lastName[0] < 'M' ) ? printf("Blue Team") : printf("Red Team") ;
*/


/*
    int friends = 1;

    printf("I have %d friend%s", friends, (friends!=1) ? "s." : ".");
*/

    /*
    float grade = 0;
    float scoreEntered = 0;
    float numberOfTests = 0;
    float average = 0;

    printf("Press 0 when complete. \n\n");

    do{
        printf("Tests: %.0f    Average:%.2f \n", numberOfTests, average);
        printf("\nEnter test score: ");
        scanf("%f", &scoreEntered);
        grade += scoreEntered;
        numberOfTests++;
        average = grade / numberOfTests;

    } while(scoreEntered != 0);
*/

/*int columns;
    int rows;
    for(rows = 1; rows<= 6; rows++)
    {
        for (columns = 1; columns <= 4; columns++)
        {
            printf("%d ", columns);
        }
        printf("\n");

    }*/

    /*
    int a;
    int howMany;
    int maxAmount = 10;

    printf("How many times do you want this loop to loop? (up to 10) ");
    scanf(" %d", &howMany);
    for (a = 1; a <= maxAmount; a++)
    {
        printf("%d\n", a);
        if(a == howMany)
        {
            break;
        }
    }

    */

/*
   int num = 1;
   do
   {
    if(num == 6 || num == 8)
    {
        num++;
        continue;
    }

    printf("%d is available \n", num);

    num++;

   } while (num <= 10);
*/
/*
    String password[30];

    bool thereIsUpper = false;
    bool thereIsLower = false;
    bool thereIsDollar = false;


    printf("Create a password. (Make sure it has an upper case letter, a lower case letter, and a $)");

    scanf("%s", password);

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < password.length(); j++)
        {

            if(isalpha(password[j}))
            {
                if(isupper(password[j]))
                {
                    thereIsUpper = true;
                } else{
                    thereIsLower = true;
                }

            } else
            {
                if(isdigit(password[j]))
                {
                    continue;
                } else{
                    thereIsDollar = true;
                }
            }

        }
    }*/

    /*
    char a = 'a';
    char b = 'F';
    char c = '7';

    printf("%c \n", toupper(a));
    printf("%c \n", toupper(b));
    printf("%c \n", toupper(c));
    */

    char catsName[50];
    char catsFood[25];
    char sentence[75] = "";

    puts("What's the cats dumb name? ");
    gets(catsName);

    puts("What's the cat eat? ");
    gets(catsFood);

    strcat(sentence, catsName);
    strcat(sentence, " loves to eat ");
    strcat(sentence, catsFood);

    puts(sentence);

    





    return 0;
}
