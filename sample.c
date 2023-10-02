#include <stdio.h>
#include <conio.h>

int main()
{
    int y = 1;
    int key;
    char* menu_items[] = {"meat", "vegetables"};
    char* selected_option = "";

    while(1)
    {
        printf("\033[H\033[J"); // Clear the screen

        for(int i = 0; i < 2; i++)
        {
            if(i == y - 1)
                printf("\033[7m"); // Reverse video for the selected item
            printf("> %s\n", menu_items[i]);
            if(i == y - 1)
                printf("\033[0m"); // Normal video for the other items
        }

        key = getch();

        if(key == 27) // Escape key
            break;

        if(key == 13) // Enter key
        {
            selected_option = menu_items[y - 1];
            printf("\033[H\033[J"); // Clear the screen
            printf("You selected: %s\n", selected_option);
            break;
        }

        if(key == 80 && y < 2) // Down arrow key
            y++;
        else if(key == 72 && y > 1) // Up arrow key
            y--;
    }

    return 0;
}
