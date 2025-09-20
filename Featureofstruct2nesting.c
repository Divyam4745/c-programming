 #include<stdio.h>
 #include<stdlib.h>
 #include<stdbool.h>
 int main(){
  typedef struct pokemon
  {
    int hp;
    int speed;
    int attack;
    char tier;
    char name[15];
  }pokemon;
  typedef struct legendarypokemon
  {
    pokemon normal;
    char ability[10];

  }legendarypokemon;

  legendarypokemon metwo;
  strcpy(metwo.ability,"Preassure");
  metwo.normal.hp = 150;
  metwo.normal.attack = 180;
  metwo.normal.speed = 180;
  metwo.normal.tier = 5;

  return 0;

  
  
 }
 