#ifndef RELATORIOS_H
#define RELATORIOS_H

#include <stdio.h>
#include "../include/types.h"

void listar_clientes(struct dados_cliente *inicio_lista)
{
    while (inicio_lista) {
        printf("Codigo................: %i\n", inicio_lista->id);
        printf("Nome do cliente.......: %s\n", inicio_lista->nome);
        printf("Email.................: %s\n", inicio_lista->email);
        printf("Telefone de contato...: %s\n\n", inicio_lista->telefone);

        inicio_lista = inicio_lista->prox;

    }
}

void listar_livros(struct dados_livro *inicio_lista)
{
    while (inicio_lista) {
        printf("Identificacao......: %i\n", inicio_lista->id);
        printf("Publicacao.........: %i\n", inicio_lista->publicacao);
        printf("Valor do livro.....: %.2f\n", inicio_lista->valor);
        printf("Titulo.............: %s\n", inicio_lista->titulo);
        printf("Autor principal....: %s\n", inicio_lista->autor_principal);
        printf("Estoque............: %i\n\n", inicio_lista->qtd_estoque);
        
        inicio_lista = inicio_lista->prox;
    }
}

#endif