#ifndef Digrafo_H

#define Digrafo_H

#include "Aresta.h"
#include <vector>
#include <list>
#include <utility>

class Digrafo {
public:
    /** Constroi um Digrafo simples que possui o numero de vertices recebido por
     *  parametro e que nao possui arestas */
    Digrafo(int num_vertices);

    int num_vertices();
    int num_arestas();

    bool tem_aresta(Aresta e);

    /** Insere uma aresta no Digrafo caso a aresta ainda nao exista no Digrafo e
     * nao seja um laco */
    void insere_aresta(Aresta e);

    /** Remove uma aresta do Digrafo caso a aresta exista no Digrafo */
    void remove_aresta(Aresta e);
    
    void imprime();

    bool caminho(int v, int w, int marcado[]);

    bool eh_conexo();
    
private:
    int num_vertices_;
    int num_arestas_;
    std::vector<std::list<std::pair<int,int>>> lista_adj_;
};

#endif /* Digrafo_H */