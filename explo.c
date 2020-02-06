#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char reponse[50];
    char toulouse[50] = ("toulouse");
    char montpellier[50] = ("montpellier");

    printf("Voulez vous allez a montpellier ou toulouse ?\n");

    scanf("%s", reponse);

  if (strcmp(reponse,montpellier)==0){
    printf("Vous allez a montpellier");
  }

  if (strcmp(reponse,toulouse)==0){
    printf("Vous allez a toulouse");
}
  if (strcmp(reponse,toulouse)!=0){
  printf("Error");
}

    return 0;
}
