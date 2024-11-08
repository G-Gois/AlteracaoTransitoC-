/*
 * Tarefa 02 - Alteracoes de Transito
 *
 * GEN254 - Grafos - 2024/2
 *
 * Nome:      Arthur Henrique Paulini Grasnievicz
 * Matricula: 2311100002
 * Nome:      Gabriel Gois
 * Matricula: 2311100030
 */

#include <iostream>
using namespace std;
#include "Digrafo.h"
#include "Aresta.h"

int main() {
    int arestas, vias;
    cin >> arestas, vias;
    Digrafo grafo(arestas);
    for(int i=0; i<vias; i++){
        int v1, v2, sentido;
        cin >> v1 >> v2 >> sentido;
        Aresta a(v1,v2,1);
        Aresta b(v2,v1,1);
        if(sentido==1){
            grafo.insere_aresta(a);    
        }else{
            grafo.insere_aresta(b);
        }
    }

    return 0;
}