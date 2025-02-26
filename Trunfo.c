#include <stdio.h>
//Variavel global 01
    
    char estado[50],cidade[50],codigoCart[50];
    int populacao,pontosTuristico;
    float area,densidade,pib,capita;
   

//Variavel global 02
    char estado02[50],cidade02[50],codigoCart02[50];
    int populacao02,pontosTuristico02;
    float area02,densidade02,pib02,capita02;   

int main() {


//Saída de Dados:
    printf("***Cadastro das cartas***\n");
    printf("01 carta\n");
    cadastro01();
    printf("02 carta\n");
    cadastro02();
  
   
   
   printf("***CARTAS CADASTRADAS***\n");

   printf ("Codigo da Carta %s\n",codigoCart);
   printf("Estado %s\n",estado);
   printf("Cidade %s\n",cidade);
   printf ("Codigo da Carta %s\n",codigoCart02);
   printf("Estado %s\n",estado02);
   printf("Cidade %s\n",cidade02);

     
   printf("###DADOS DAS CARTAS COMPARADOS###\n");
   comparacao01();

    

   return 0;
  
}
   
//Funcao Criando  cartas 01
cadastro01(){
    
//Entrada de Dados   
    printf("Estado: ");
    scanf("%s",&estado);
    printf("Codigo da Carta: ");
    scanf("%s",&codigoCart);
    printf("Nome da Cidade: ");
    scanf("%s",&cidade);
    printf("Populacao: ");
    scanf("%d",&populacao);
    printf("Pontos Turisticos ");
    scanf("%d",&pontosTuristico);
    printf("Area: ");
    scanf("%f",&area);
    printf("PIB: ");
    scanf("%f",&pib);
//Densidade Populacional: População dividida pela área da cidade.
    densidade = populacao / area;
//PIB per Capita: PIB total dividido pela população.    
    capita = populacao / pib;
    printf("Densidade populacional %.1f\n",densidade);
    printf("PIB per Capita %.1f\n",capita);
} 

//Funcao Criando  cartas 02 
cadastro02(){
//Entrada de Dados   
    printf("Estado: ");
    scanf("%s",&estado02);
    printf("Codigo da Carta: ");
    scanf("%s",&codigoCart02);
    printf("Nome da Cidade: ");
    scanf("%s",&cidade02);
    printf("Populacao: ");
    scanf("%d",&populacao02);
    printf("Pontos Turisticos ");
    scanf("%d",&pontosTuristico02);
    printf("Area: ");
    scanf("%f",&area02);
    printf("PIB: ");
    scanf("%f",&pib02);
//Densidade Populacional: População dividida pela área da cidade.
    densidade02 = populacao02 / area02;
//PIB per Capita: PIB total dividido pela população.    
    capita02 = populacao02 / pib02;
    printf("Densidade populacional %.1f\n",densidade02);
    printf("PIB per Capita %.1f\n",capita02); 
}
// Funcao comparacao
comparacao01(){
   if(populacao > populacao02){
    printf("CIDADE: %s\n""POPULACAO %d\n",cidade,populacao);
   
   }else {
       printf("CIDADE: %s\n""POPULACAO> %d\n",cidade02,populacao02);
   }


   if(pontosTuristico > pontosTuristico02)
    printf("CIDADE: %S\n""PontosTuristico: %f\n",cidade,pontosTuristico);
   
     else 
     printf("CIDADE: %S\n""PontosTuristico: %d\n",cidade02,pontosTuristico02);
   

   if(area > area02)
    printf("CIDADE: %s\n""AREA %f\n",cidade,area);
   
     else 
     printf("CIDADE: %s\n""AREA%f\n",cidade02,area02);
   

   if(pib > pib02)
    printf("CIDADE: %S\n""PIBE %f",cidade,pib);
   
     else 
     printf("CIDADE: %S\n""PIBE %f",cidade02,pib02);
}
  