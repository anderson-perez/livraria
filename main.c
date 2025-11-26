#include "./include/menus.h"
#include "./include/cadastros.h"

#define FIM     0

int main()
{
    int opcao_menu_principal;
    int opcao_sub_menu;

    // Bases de dados (clientes e livros)
    struct base_dados_cliente clientes;
    struct base_dados_livro livros;

    // Inicializar as bases de dados
    inicializar_base_clientes(&clientes);
    inicializar_base_livros(&livros);

    do {
        opcao_menu_principal = menu_principal();

        switch (opcao_menu_principal) {
            
            case 1: do {
                        opcao_sub_menu = sub_menu_cadastros();
                        switch (opcao_sub_menu) {
                            case 1: inserir_cliente_base_dados(&clientes, novo_cliente(&clientes.contador), 1);
                                    break;
                            case 2: break;                            
                        }
                    } while (opcao_sub_menu != FIM);

                    break;
            
            case 2: do {
                        opcao_sub_menu = sub_menu_relatorios();
                        switch (opcao_sub_menu) {
                            case 1: break;
                            case 2: break;
                            case 3: break;
                            case 4: break;          
                        }
                    } while (opcao_sub_menu != FIM);

                    break;
            
            case 3: break;

            case 0: printf("Tchau!!!\n");
                    break;
        }

    } while (opcao_menu_principal != FIM);

    
    return 0;
}