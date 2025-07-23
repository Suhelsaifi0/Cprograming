#include <stdio.h>
#include <string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier[10];
        char name[10];
}pokemon;

    // pokemon pikachu;
    // pokemon charizad;
    // pokemon mewtwo; We create the Array of Structure

    pokemon arr[100]; // arr[0], arr[1], arr[2], arr[3], arr[4]....... arr[9]
    arr[0].attack = 50;
    arr[0].speed = 100;
    strcpy(arr[0].tier, "A");
    strcpy(arr[0].name, "Pikachu");
    arr[0].hp = 80;

    arr[1].attack = 50;
    arr[1].speed = 100;
    strcpy(arr[1].tier, "B");
    strcpy(arr[1].name, "Charizard");
    arr[1].hp = 90;

    arr[2].attack = 50;
    arr[2].speed = 100;
    strcpy(arr[2].tier, "S");
    strcpy(arr[2].name, "Mewtwo");
    arr[2].hp = 120;

    for (int i = 0; i < 3; i++){
        printf("%s\n", arr[i].name);
        printf("Attack : %d\n", arr[i].attack);
        printf("Speed : %d\n", arr[i].speed);
        printf("Tier : %s\n", arr[i].tier);
        printf("Hp : %d\n", arr[i].hp);
    }

    return 0;
}