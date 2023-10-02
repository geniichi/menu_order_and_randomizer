#include <stdio.h>

enum Category {meat = 1, vegetables = 2, soup = 3, rice = 4};

typedef struct {
    int id;
    char foodName[50];
    double price;
    enum Category choice;
}menu;

// MEAT
menu food1 = {1, "paklay", 30, 1};
menu food2 = {2, "bola-bola(flour)", 5, 1};
menu food3 = {3, "bola-bola(pork)", 5, 1};
menu food4 = {4, "lumpia(pork)", 5, 1};
menu food5 = {5, "lumpia(pork)", 5, 1};
menu food6 = {6, "giniling", 30, 1};
menu food7 = {7, "fried-chicken", 35, 1};
menu food8 = {8, "adobong-manok", 30, 1};
menu food9 = {9, "curry", 30, 1};

// VEGETABLES
menu food10 = {10, "tortang-talong", 15, 2};
menu food11 = {11, "adobong-sitaw", 10, 2};
menu food12 = {12, "adobong-talong", 10, 2};
menu food13 = {13, "ngohiong", 10, 2};
menu food14 = {14, "bihon", 12, 2};
menu food15 = {15, "ginataang-kalabasa", 10, 2};

// SOUP
menu food16 = {16, "sinigang", 30, 3};
menu food17 = {17, "dinuguan", 10, 3};
menu food18 = {18, "available-soup(free)", 0, 3};

// RICE
menu food19 = {19, "rice", 10, 4};
menu food20 = {20, "1/2_rice", 5, 4};

// When you use extern, the variable cannot be initialized as all it does is point the variable
// name at a storage location that has been previously defined
menu* meatArr[] = {&food1, &food2, &food3, &food4, &food5, &food6, &food7, &food8, &food9};
menu* vegArr[] = {&food10, &food11, &food12, &food13, &food14, &food15};
menu* soupArr[] = {&food16, &food17, &food18};
menu* riceArr[] = {&food19, &food20};


/*
int main(){

    printf("\nId: %d\n", food10.id);
    printf("Food name: %s\n", food10.foodName);
    printf("Price: %.2lf\n", food10.price);

    switch(food10.choice){
        case 1:
            printf("Category: Meat\n");
            break;
        case 2:
            printf("Category: Vegetables\n");
            break;
        case 3:
            printf("category: Soup\n");
            break;
        case 4:
            printf("category: Rice\n");
            break;
        default:
            break;
    }



    return 0;
}
*/
