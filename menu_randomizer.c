#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>
#include "menuDb.c"
#include <stdlib.h>

enum Preferred {meat_preferred = 1, vegetables_preferred = 2};

// struct for getting the input value of the user
typedef struct{
    double budget;
    bool withRice;
    enum Preferred choice;
} Chosen_options;

// struct for getting available options from within budget(am tired)
typedef struct {
    int avail_id;
    char avail_foodName[50];
    double avail_price;
    enum Preferred avail_choice;
}avail_menu;

bool gohan_dayo(); // rice preference
int foodPref(); // food preference output
void food_randomizer(double, bool, int); // randomize food and find if within budget
avail_menu* getAvailableFood(menu*[], double, int);// function for getting meat within budget


int main(){

    Chosen_options user;

    printf("What is your budget: ");
    scanf("%lf", &user.budget);

    user.withRice = gohan_dayo();

    user.choice = foodPref();

    printf("\n\nReceipt\n");
    printf("Budget: %.2lf pesos\n", user.budget);
    printf("Rice?: %s\n", user.withRice == true ? "yes" : "no");
    printf("Meal: %s\n", user.choice == 1 ? "meat" : "vegetables");

    food_randomizer(user.budget, user.withRice, user.choice);


    return 0;
}

bool gohan_dayo(){
    char answer[9];
    do{
        printf("Would like Rice with it (yes/no)? ");
        scanf("%s", &answer);
        int ch;
        while(((ch = getchar()) != '\n') && (ch != EOF));
        strupr(answer);
    }while(strcmp(answer, "YES") != 0 && strcmp(answer, "NO") != 0);

    if(strcmp(answer, "YES") == 0){
        return true;
    } else if(strcmp(answer, "NO") == 0){
        return false;
    } else{
        gohan_dayo();
    }
}

int foodPref(){
    int answer;

    do{
        printf("Enter your choice (1 for meat, 2 for vegetables): ");
        scanf("%d", &answer);
        int ch;
        while(((ch = getchar()) != '\n') && (ch != EOF));
    }while(answer != 1 && answer != 2);

    return answer;
}

void food_randomizer(double max_money, bool include_rice, int prefer){
    int VegSize = sizeof(vegArr)/sizeof(vegArr[0]);// from menuDb.c
    int MeatSize = sizeof(meatArr)/sizeof(meatArr[0]);// from menuDb.c


    avail_menu availableVegtArr[9] = {};
    avail_menu availableMeatArr[9] = {};


}
