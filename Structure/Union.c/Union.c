#include<stdio.h>
void main(){

  union pokemon{
    int hp;
    int speed;
    int attack;
    char tier; // S, A, B, C, D
  };
    
  union pokemon pikachu;
  // pikachu.attack = 60;
  printf("Enter Attack of Pikachu:\n");
  scanf("%d", &pikachu.attack);
  pikachu.hp = 50;
  // pikachu.speed = 100;  
  printf("Enter Speed of Pikachu:\n");
  scanf("%d", &pikachu.speed);
  pikachu.tier = 'A';
  printf("Pikachu Attack is: %d\n", pikachu.attack);
  printf("Pikachu Speed is: %d\n", pikachu.speed);

  union pokemon charizard;
  charizard.attack = 120;
  charizard.hp = 80;
  charizard.speed = 120;
  charizard.tier = 'S';

}   