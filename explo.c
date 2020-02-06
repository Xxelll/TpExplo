#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){

  typedef struct Lieu lieu;
  struct Lieu
  {
      char nom[20];
      char description[50];

      int difficulte;
      int destination;
  };

  lieu listeDeLieux [3];

  strcpy(listeDeLieux[0].nom, "montpellier");
  strcpy(listeDeLieux[0].description, "Ville du sud");
  listeDeLieux[0].difficulte= 1;
  listeDeLieux[0].destination=1;

  strcpy(listeDeLieux[1].nom, "toulouse");
  strcpy(listeDeLieux[1].description, "Ville sympa");
  listeDeLieux[1].difficulte= 5;
  listeDeLieux[1].destination=2;

  strcpy(listeDeLieux[2].nom, "paris");
  strcpy(listeDeLieux[2].description, "Ville pas vraiment cool");
  listeDeLieux[2].difficulte= 19;
  listeDeLieux[2].destination=0;


    char reponse[50];
    char toulouse[50] = ("toulouse");
    char montpellier[50] = ("montpellier");
    char paris [50] = ("paris");

    printf("Voulez vous allez a montpellier, toulouse ou paris ?\n");

    // scan reponse joueur
    scanf("%s", reponse);

  while(reponse==0){

  if (strcmp(reponse,montpellier)==0){
    printf("Vous allez a montpellier\n");
    printf("Vous pouvez vous rendre a toulouse\n");

  }

  if (strcmp(reponse,toulouse)==0){
    printf("Vous allez a toulouse\n");
  }

  if (strcmp(reponse,paris)==0){
    printf("Vous allez a paris\n");
  }




}
    return 0;
}
