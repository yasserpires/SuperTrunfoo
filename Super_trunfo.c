//inicio do programa
//adicionando variaveis
#include <stdio.h>
int main(){
char estado1[3],estado2[3];
char cdgdacarta1[30], cdgdacarta2[30];
char nomedacidade1[30], nomedacidade2[30];
int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int numerodepontosturisticos1, numerodepontosturisticos2;



//colhendo o valor das variaveis da primeira carta
printf("digite o codigo da carta:\n");
scanf("%s", cdgdacarta1);
printf("digite a sigla do estado:\n");
scanf("%s", estado1);
printf("digite o nome da cidade:\n");
scanf("%s", nomedacidade1);
printf("digite a populacao do estado:\n");    
scanf("%d", &populacao1);
printf("digite a area do estado:\n");
scanf("%f", &area1);
printf("digite o pib do estado:\n");
scanf("%f", &pib1);
printf("digite o numero de pontos turisticos do estado:\n");  
scanf("%d", &numerodepontosturisticos1);

//colhendo o valor das variaveis da segunda carta

printf("digite o codigo da carta:\n");
scanf("%s", cdgdacarta2);
printf("digite a sigla do estado:\n");
scanf("%s", estado2);
printf("digite o nome da cidade:\n");
scanf("%s", nomedacidade2);
printf("digite a populacao do estado 2:\n");
scanf("%d", &populacao2);
printf("digite a area do estado 2:\n");
scanf("%f", &area2);
printf("digite o pib do estado 2:\n");
scanf("%f", &pib2);
printf("digite o numero de pontos turisticos do estado 2:\n");
scanf("%d", &numerodepontosturisticos2);
printf("\n");
printf("\n");

//calculando o pib per capita das duas cartas

float Pibpercapita = (float)pib1/populacao1 ;
float Pibpercapita2 = (float)pib2/populacao2;

//calculando a densidade populacinal das duas cartas

float densidadepopulacional1 = (float)populacao1/area1 ;
float densidadepopulacional2 = (float)populacao2/area2 ;
//mostrando os valores colhidos da segunda carta



//mostrando os valores colhidos da primeira carta

printf("-------CARTA 1-------\n");
printf("estado: %s\n", estado1);
printf("codigo da carta: %s\n", cdgdacarta1);
 printf("nome da cidade: %s\n", nomedacidade1); 
 printf("populacao do estado: %d\n", populacao1);
printf("area do estado: %.2f km²\n", area1);
printf("pib do estado: %.2f bilhoes de reais\n", pib1);
printf("pontos turisticos do estado: %d\n", numerodepontosturisticos1);
printf("Pib per capita: R$ %.2f reais\n", Pibpercapita);
printf("densidade populacional: %.2f hab/km² \n", densidadepopulacional1);
printf("\n");



printf("\n");
printf("-------CARTA 2-------\n");

printf("estado: %s\n", estado2);
printf("codigo da carta: %s\n", cdgdacarta2);
printf("nome da cidade: %s\n", nomedacidade2);
printf("populacao do estado: %d\n", populacao2);
printf("area do estado: %.2f km² \n", area2);            
printf("pib do estado: %.2f bilhoes de reais \n", pib2);
printf("pontos turisticos do estado : %d\n", numerodepontosturisticos2);
printf("Pib per capita: %.2f reais \n", Pibpercapita2); 
printf("densidade populacional: %.2f hab/km² \n", densidadepopulacional2);
printf("\n");

return 0;
}   
