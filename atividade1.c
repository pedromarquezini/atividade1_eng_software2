#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    typedef struct {
        char nome[200];
        int rank;
        int escalado;
    } Jogador;

    int i, j;
    int N;

    while (1){
     printf("Digite o numero de times:");
     scanf("%d", &N);
     if(N<=1){
         printf("Numero de time precisa ser maior que 1\n");
     }
     else{
         break;
     }
    }



    Jogador vet_jog [10] ={{"Jaqueline Vega ", 10, 1},
                              {"Eder Costa", 5, 0},
                              {"Humberto Gomes", 8, 1},
                              {"Dijalma Lacerda", 4, 0},
                              {"Caroline Silva", 3, 1},
                              {"Igor Goncalves", 9, 0},
                              {"Bruna Carla", 2, 1},
                              {"Fabio Quadros", 6, 0},
                              {"Ana Celia", 1, 1},
                              {"Carla Perez", 7, 0}};

    Jogador temp; //variável temporária

    for (i=0; i<10; i++) {
        for (j=i+1; j<10; j++) {
            if (vet_jog[i].rank > vet_jog[j].rank) {
                temp = vet_jog[i];
                vet_jog[i] = vet_jog[j];
                vet_jog[j] = temp;
            }
        }
    }



for(i=0; i<N; i++){
	printf("Time(%d)\n", i+1);
	printf("%s\n", vet_jog[i].nome);
	for(j=2; j<((round(10/N))+2); j++){
	    if((j*N)-(i+2)>=9){
	        break;
	    }
	    else{
		    printf("%s\n", vet_jog[(j*N)-(i+2)]);
	    }
	}

}
}
