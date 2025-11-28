#ifndef ARQUIVOS_H
#define ARQUIVOS_H

#include "types.h"

void salvar_dados_livros(struct dados_livro *inicio);
void salvar_dados_clientes(struct dados_cliente *inicio);
void carregar_dados_livros(struct base_dados_livro *livros);
void carregar_dados_clientes(struct base_dados_cliente *clientes);

#endif