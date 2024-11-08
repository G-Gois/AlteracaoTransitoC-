#include "Digrafo.h"
#include <iostream>
#include <limits>
using namespace std;

Digrafo::Digrafo(int num_vertices) {
    if (num_vertices <= 0) {
        throw(invalid_argument("Erro no construtor Digrafo(int): o "
            "numero de vertices eh invalido!"));
    }

    num_vertices_ = num_vertices;
    num_arestas_ = 0;

    lista_adj_.resize(num_vertices);
}

int Digrafo::num_vertices() {
    return num_vertices_;
}

int Digrafo::num_arestas() {
    return num_arestas_;
}

bool Digrafo::tem_aresta(Aresta e) {
    for(auto i :lista_adj_[e.v1]){
        if(i.first==e.v2){
            return true;
        }
    }
    return false;
}

void Digrafo::insere_aresta(Aresta e) {
    if (tem_aresta(e) || (e.v1 == e.v2)) {
        return;
    }
    lista_adj_[e.v1].push_front({e.v2, e.peso});

    num_arestas_++;
}

/*
void Digrafo::remove_aresta(Aresta e) {
    if (!tem_aresta(e)) {
        return;
    }
    lista_adj_[e.v1].remove(e.v2);

    num_arestas_--;
}


void Digrafo::imprime() {
    for (int i = 0; i < num_vertices_; i++) {
        cout << i << ":";
        for (int j = 0; j < num_vertices_; j++) {
            if (lista_adj_[i][j] != 0) {
                cout << " " << j;
            }
        }
        cout << "\n";
    }
}
bool Digrafo::caminho(int v, int w, int marcado[]) {
    if (v == w) {
        printf("%d-", v);
        return true;
    }
    marcado[v] = 1;
    for (int u = 0; u < num_vertices_; u++){
        if (lista_adj_[v][u] != 0){
            if (marcado[u] == 0){
                if (caminho(u, w, marcado)) {
                    printf("%d-", v);
                    return true;  
                }
            }
        }  
    }
return false;
}

bool Digrafo::eh_conexo() {
    int marcado[num_vertices_];
    for(int i =0; i<num_vertices_;i++){
        marcado[i]=0;
    }
    
    for(int i=0; i<num_vertices_; i++){
        for(int j=i+1; j<num_vertices_; j++){
            if(!caminho(i,j,marcado) ){
                return false;
            }
        }
    }
    return true;
}*/