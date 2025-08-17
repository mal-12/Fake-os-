#include  <stdio.h>
#include <stdlib.h>

const char *Theme[]={"Black","Yellow","Blue","White"};
int sizeTh = sizeof(Theme)/sizeof(Theme[0]);

void Install();

void Demo();

void SettingIns();

int MenuAll(int i);

int main ()
{
    int choice;

    printf("\t\t\t\tWelcome Fake OS!\n");

    do {
        printf("1.Install\n");
        printf("2.Demo\n");
        printf("3.Setting\n");
        printf("4.Exit\n");
        printf("Enter your choice(1-4):");
        scanf("%d", &choice);
        MenuAll(choice);
    }while (choice!=4);
    

    return 0;
}

void Install()
{
    float i=0;
    while (i<=50)
    {
        printf("%.2f\n", i);
        i+=0.01;
        for (volatile int j = 0; j < 1000000; j++);
    }
    printf("Sorry, but is fake os!\n");
    
}

void SettingIns()
{
    int ChoiceTh;
    printf("\nSetting Menu\n");
    printf("Available themes:\n");

    for(int i=0;i<sizeTh;i++)
    {
        printf("%d. %s\n", i+1,Theme[i]);
    }

    printf("Select theme (1-%d):", sizeTh);
    scanf("%d", &ChoiceTh);


    if((ChoiceTh > 0) && (ChoiceTh<=sizeTh))
    {
        printf("Theme changed  to %s\n", Theme[ChoiceTh-1]);
    }

    else
    {
        printf("Invalid theme selection!\n");
    }
}

int MenuAll(int i)
{
    switch (i)
    {
    case 1:
        Install();
        break;
    case 2:
        Demo();
        break;
    
    case 3:
        SettingIns();
        break;
    case 4:
        printf("Exiting Fake OS. Goodbye!\n");
        break;
    
    default:
        break;
    }
}

void Demo()
{
    printf("Welcome to Fake OS Demo!\n");
    printf("This is a demonstration of our fake operating system.\n");
    printf("Features:\n");
    printf("- Custom themes\n");
    printf("- Fake installation process\n");
    printf("- Basic settings menu\n");
    printf("Press Enter to continue...");
    getchar(); 
    getchar();
}