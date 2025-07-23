#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){

    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
        char name[15];    
    }pokemon;

    typedef struct legendarypokemon{
        pokemon normal;  // Nested Kar Raha hai Haam
        char ability[10];    
    }legendarypokemon;

    typedef struct godpokemon{
          legendarypokemon legend; // Nested Kar Raha hai Haam
          int specialattack;
    }godpokemon;

    godpokemon arceus;
    arceus.specialattack = 300;
    strcpy(arceus.legend.ability,"Turn Anynone to Stone");
    arceus.legend.normal.attack = 100;
    arceus.legend.normal.hp = 120;
    arceus.legend.normal.speed = 150;
    arceus.legend.normal.tier = 'A';
    
    legendarypokemon mewtwo;
    strcpy(mewtwo.ability, "Pressure");
    mewtwo.normal.attack = 150;
    mewtwo.normal.hp = 120;
    mewtwo.normal.speed = 250;
    strcpy(mewtwo.normal.name, "Mewtwo");
    
    printf("%s", mewtwo.ability);
    printf("%d",mewtwo.normal);

    return 0;
}
