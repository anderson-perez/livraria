#include "../include/cadastros.h"
#include <stdlib.h>

void inicializar_base_clientes(struct base_dados_cliente *clientes)
{
    clientes->inicio = NULL;
    clientes->fim = NULL;
    clientes->contador = 0;
}

void inicializar_base_livros(struct base_dados_livro *livros)
{
    livros->inicio = NULL;
    livros->fim = NULL;
    livros->contador = 0;
}

void inserir_cliente_base_dados(struct base_dados_cliente *clientes, struct dados_cliente *cliente, int modo)
{
    if (clientes->inicio == NULL) {
        clientes->fim = cliente;
        clientes->inicio = cliente;
        return;
    }

    if (modo == 1) { // Inicio lista
        cliente->prox = clientes->inicio;
        clientes->inicio = cliente;
    }
    else if (modo == 2) { // Fim da lista
        clientes->fim->prox = cliente;
        clientes->fim = cliente;    
    }
}

void inserir_livro_base_dados(struct base_dados_livro *livros, struct dados_livro *livro, int modo)
{

}

struct dados_cliente *novo_cliente(unsigned int *codigo)
{
    struct dados_cliente *novo = NULL;

    // Alocação dinâmica
    novo = (struct dados_cliente*)malloc(sizeof(struct dados_cliente));

    // Entra com os dados
    novo->id = *codigo + 1;

    novo->prox = NULL;

    *codigo += 1;

    return novo;
}
