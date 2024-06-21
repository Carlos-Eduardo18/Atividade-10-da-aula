#include <stdio.h>
#include <stdlib.h>

int main() {
    char username[20]; // Defina o tamanho máximo do nome de usuário
    char sen[20]; // Defina o tamanho máximo da senha

    // Defina o nome de usuário e a senha correta
    char correct_username[] = "usuario";
    char correct_password[] = "senha123";

    // Solicitar nome de usuário
    printf("Digite o nome de usuario: ");
    scanf("%s", username);

    // Verificar se o nome de usuário está correto
    if (strcmp(username, correct_username) == 0) {
        // Solicitar senha
        printf("Digite a senha: ");
        scanf("%s", sen);
    }
        // Verificar se a senha corresponde ao nome de usuário fornecido
        if (strcmp(sen, correct_password) == 0) {
            printf("Login Realizado.\n");
        } 
        else {
            printf("Falha no login. Senha incorreta.\n");
        }
    }