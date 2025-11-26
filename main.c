#include "./include/menus.h"

#define FIM     0

int main()
{
    int opcao_menu_principal;
    int opcao_sub_menu;

    do {
        opcao_menu_principal = menu_principal();

        switch (opcao_menu_principal) {
            
            case 1: do {
                        opcao_sub_menu = sub_menu_cadastros();
                        switch (opcao_sub_menu) {
                            case 1: break;
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