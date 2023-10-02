#include <stdio.h>
#include <stdbool.h>
#include "menuDb.c"

int main(){

    printf("\n%d\n", meatArr[0]->id);
    printf("%s\n", meatArr[0]->foodName);
    printf("%.2lf pesos\n", meatArr[0]->price);
    printf("%d\n", meatArr[0]->choice);

    return 0;
}
