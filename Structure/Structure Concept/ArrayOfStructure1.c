#include <stdio.h>
#include <string.h>

int main() {
    typedef struct pokemon {
        int hp;
        int speed;
        int attack;
        char tier[10];
        char name[10];
    } pokemon;

    pokemon arr[100]; // Array of structures for Pokémon
    int n;

    printf("Enter the number of Pokémon you want to add: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Pokémon %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", arr[i].name);

        printf("Attack: ");
        scanf("%d", &arr[i].attack);

        printf("Speed: ");
        scanf("%d", &arr[i].speed);

        printf("Tier: ");
        scanf("%s", arr[i].tier);

        printf("HP: ");
        scanf("%d", &arr[i].hp);
    }

    printf("\n--- Pokémon Details ---\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s\n", arr[i].name);
        printf("Attack: %d\n", arr[i].attack);
        printf("Speed: %d\n", arr[i].speed);
        printf("Tier: %s\n", arr[i].tier);
        printf("HP: %d\n", arr[i].hp);
        printf("--------------------\n");
    }

    return 0;
}
