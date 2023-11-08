#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void clearConsole() {
    #ifdef _WIN32
    system("cls");
    #else
    system("clear");
    #endif
}

void waitForEnter() {
    printf("\nPressione Enter para continuar...");
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
    getchar();
}

typedef struct user {
    char nomecompleto[500];
    int d, m, a;
} user;

typedef struct dados {
    char nomeuser[500];
    int senha;
    user *aut;
} dados;

dados registro() {
    printf("---TELA DE REGISTRO---\n");
    dados usuariocriado;
    usuariocriado.aut = (user *)malloc(sizeof(user));
    printf("Digite o nome do usuario: ");
    scanf("%s", usuariocriado.nomeuser);
    printf("\nDigite o nome completo do usuario: ");
    fflush(stdin);
    fgets(usuariocriado.aut->nomecompleto, sizeof(usuariocriado.aut->nomecompleto), stdin);
    usuariocriado.aut->nomecompleto[strcspn(usuariocriado.aut->nomecompleto, "\n")] = '\0';
    printf("\nDigite a data de nascimento do usuario: ");
    int d, m, a;
    scanf("%d /%d /%d", &d, &m, &a);
    usuariocriado.aut->d = d;
    usuariocriado.aut->m = m;
    usuariocriado.aut->a = a;
    printf("\nDigite a senha do usuario: ");
    int senha;
    scanf("%d", &senha);
    usuariocriado.senha = senha;
    return usuariocriado;
}

dados login(dados *arraydeusuario, int tamanho) {
    int checked = 0;
    dados checkeduser;
    dados wrong;
    checkeduser.aut = (user *)malloc(sizeof(user));
    printf("Nome de usuario: ");
    char username[500];
    scanf("%s", username);
    printf("\nSenha: ");
    int pass;
    scanf("%d", &pass);
    for (int i = 0; i < tamanho; i++) {
        if (((strcmp(username, arraydeusuario[i].nomeuser) == 0) && pass == arraydeusuario[i].senha)) {
            strcpy(checkeduser.aut->nomecompleto, arraydeusuario[i].aut->nomecompleto);
            checkeduser.aut->d = arraydeusuario[i].aut->d;
            checkeduser.aut->m = arraydeusuario[i].aut->m;
            checkeduser.aut->a = arraydeusuario[i].aut->a;
            checked = 1;
        } 
    }
    if (checked == 1) {
        return checkeduser;
    } else {
        printf("Login ou senha errados");
        free(checkeduser.aut);
        return wrong;
    }
}

int main() {
    int op, tamanho = 0, i = 0;
    dados usuario, usuariocheck;
    dados *arrayusuarios = (dados *)malloc(sizeof(dados) * tamanho);
    do {
        printf("--- MENU ---\n");
        printf("1 - Registrar novo usuario\n2 - Fazer login\n0 - Sair\nEscolha uma opcao: ");
        scanf("%d", &op);
        switch (op) {
            case 1:
                tamanho++;
                arrayusuarios = (dados *)realloc(arrayusuarios, tamanho * sizeof(dados));
                usuario = registro();
                arrayusuarios[i] = usuario;
                i++;
                clearConsole();
                break;
            case 2:
                usuariocheck = login(arrayusuarios, tamanho);
                if (usuariocheck.aut != NULL) {
                    printf("Nome Completo: %s", usuariocheck.aut->nomecompleto);
                    printf("\nData de Nascimento: %d/%d/%d", usuariocheck.aut->d, usuariocheck.aut->m, usuariocheck.aut->a);
                }
                waitForEnter();
                clearConsole();
                break;
        }
    } while (op != 0);

    free(arrayusuarios);

    return 0;
}
