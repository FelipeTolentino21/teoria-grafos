#include <stdio.h>
#include <locale.h>

#define NUM_VERTICES 3
#define NUM_ARESTAS 3

// Fun��o para descrever o grafo
void descreverGrafo(int grafo[NUM_VERTICES][NUM_VERTICES]) {
	int ordem = NUM_VERTICES;
	int tamanho = NUM_ARESTAS;
	printf("Ordem do grafo: %d v�rtices\n", ordem);
	printf("Tamanho do grafo: %d arestas\n", tamanho);
 	printf("Grau de cada v�rtice:\n");
 	int somagrau=0;
 	for (int i = 0; i < NUM_VERTICES; i++) {
		int grau = 0;
 		for (int j = 0; j < NUM_VERTICES; j++) {
 			if (grafo[i][j] == 1 || grafo[j][i] == 1 ) {
 			grau++;
			}
 		}
 		somagrau+=grau; // C�lculo do somat�rio dos graus de todos os v�rtices conectados
 		printf("V�rtice %d: %d\n", i, grau);
 	}
 
 	float graumedio=0;
 	int tamGrafo = 0;
 	int tam=0;
 
 	graumedio=somagrau/(float)NUM_VERTICES; // Aqui, deve-se transformar o tipo de vari�vel antes da divis�o
 	
 	for (int i = 0; i < NUM_VERTICES; i++) {
 		for (int j = 0; j < NUM_VERTICES; j++) {
 			if (grafo[i][j] == 1) {
 			tam++;
 			}
 		}
 		
		 if (tam > tamGrafo) {
 			tamGrafo = tam;
 		}
 	}
 
 	printf("Tamanho do grafo: %d\n", tamGrafo);
 	printf("Grau m�dio do grafo: %.2f\n", graumedio);
}

int main() {
	setlocale(LC_ALL,"Portuguese");
 	int grafo[NUM_VERTICES][NUM_VERTICES] = {0};
 	
	 // Adicionar as arestas ao grafo
	grafo[0][1] = 1;
 	grafo[1][2] = 1;
 	grafo[2][0] = 1;
 	descreverGrafo(grafo);
 	return 0;
}

