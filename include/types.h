#define T_STR   100

typedef char string[T_STR];

struct dados_cliente {
    unsigned int id;
    string nome;
    string email;
    string telefone;
    struct dados_cliente *prox;
};

struct dados_livro {
    unsigned int id;
    unsigned int publicacao;
    float valor;
    string titulo;
    string autor_principal;
    unsigned int qtd_estoque;
    struct dados_livro *prox;
};