#include "../include/arquivos.h"
#include "../include/cadastros.h"
#include "../include/types.h"
#include <stdlib.h>
#include <stdio.h>

void salvar_dados_livros(struct dados_livro *inicio)
{
    FILE *fp = NULL;

    fp = fopen("livros.bin", "wb");

    if (!fp) {
        printf("Erro ao tentar abrir arquivo livros.bin\n");
        return;
    }

    while (inicio) {
        fwrite(inicio, sizeof(struct dados_livro), 1, fp);
        inicio = inicio->prox;
    }

    fclose(fp);
}

void salvar_dados_clientes(struct dados_cliente *inicio)
{
    FILE *fp = NULL;

    fp = fopen("clientes.bin", "wb");

    if (!fp) {
        printf("Erro ao tentar abrir arquivo clientes.bin\n");
        return;
    }

    while (inicio) {
        fwrite(inicio, sizeof(struct dados_cliente), 1, fp);
        inicio = inicio->prox;
    }

    fclose(fp);
}

void carregar_dados_livros(struct base_dados_livro *livros)
{
    FILE *fp = NULL;
    struct dados_livro *novo = NULL;

    fp = fopen("livros.bin", "rb");

    if (!fp) {
        printf("Erro ao tentar abrir arquivo livros.bin\n");
        return;
    }

    while (!feof(fp)) {
        novo = (struct dados_livro*)malloc(sizeof(struct dados_livro));

        fread(novo, sizeof(struct dados_livro), 1, fp);
        novo->prox = NULL;
        if (!feof(fp)) {
            inserir_livro_base_dados(livros, novo, 2);
        }
        else {
            free(novo);
        }
    }

    fclose(fp);    
}

void carregar_dados_clientes(struct base_dados_cliente *clientes)
{
    FILE *fp = NULL;
    struct dados_cliente *novo = NULL;

    fp = fopen("clientes.bin", "rb");

    if (!fp) {
        printf("Erro ao tentar abrir arquivo clientes.bin\n");
        return;
    }

    while (!feof(fp)) {
        novo = (struct dados_cliente*)malloc(sizeof(struct dados_cliente));

        fread(novo, sizeof(struct dados_cliente), 1, fp);
        novo->prox = NULL;
        if (!feof(fp)) {
            inserir_cliente_base_dados(clientes, novo, 2);
        }
        else {
            free(novo);
        }
    }

    fclose(fp);    
}
