#include <stdio.h>
#include <string.h>

struct Pessoa {
    char nome[100];
    int idade;
    char endereco[200];
};

struct Aluno {
    char nome[100];
    int matricula;
    char curso[100];
};

struct Vetor {
    float x;
    float y;
    float z;
};

int main() {
    // struct Pessoa pessoa;

    // Crie um programa que leia o nome, a idade e o endereço de uma pessoa e armazene os dados em uma
    // struct.

    // printf("Digite o nome: ");
    // fgets(pessoa.nome, 100, stdin);
    // pessoa.nome[strcspn(pessoa.nome, "\n")] = '\0';

    // printf("Digite a idade: ");
    // scanf("%d", &pessoa.idade);

    // printf("Digite o endereco: ");
    // fgets(pessoa.endereco, 200, stdin);
    // pessoa.endereco[strcspn(pessoa.endereco, "\n")] = '\0';

    // printf("\nDados da Pessoa:\n");
    // printf("Nome: %s\n", pessoa.nome);
    // printf("Idade: %d\n", pessoa.idade);
    // printf("Endereco: %s\n", pessoa.endereco);

    // Crie um programa que tenha uma struct chamada aluno contendo nome, número de matrícula e curso.
    // Leia do usuário a informação de 5 alunos, armazene em um vetor desta estrutura e imprima os dados na
    // tela.
    
    struct Aluno alunos[5];
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        fgets(alunos[i].nome, 100, stdin);

        printf("Digite a matricula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);

        printf("Digite o curso do aluno %d: ", i + 1);
        fgets(alunos[i].curso, 100, stdin);
    }

    printf("\nDados dos Alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s", alunos[i].nome); 
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Curso: %s", alunos[i].curso); 
        printf("\n");
    }



    return 0;
}
