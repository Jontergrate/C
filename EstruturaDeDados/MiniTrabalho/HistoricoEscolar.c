#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ALNS 60
#define DISC 3

typedef struct ldisciplina
{
    char disciplina[15];
    float nota;

}t_ldisciplina;

typedef struct lmatricula
{
    int matricula;
    t_ldisciplina disciplinas[DISC];

}t_lmatricula;

typedef struct lista
{
    t_lmatricula alunos[ALNS];
    int n;

}t_lista;

int exibirDados(t_lista * estudantes);
void registrando(t_lista * estudantes);
t_lista * criarLista();
int menu();

int main()
{
    int opcao;
    t_lista * estudantes;
    estudantes = criarLista();

    while(1){
        printf("ALUNO: Gabriel Nunes dos Santos\n");
        printf("DISCIPLINA: Estrutura de Dados I\n");
        printf("PROFESSOR: Walace Bonfim\n\n");

        opcao = menu();
        switch(opcao){
            case 0:
                free(estudantes);
                return 0;
            case 1:
                registrando(estudantes);
                break;
            case 2:
                exibirDados(estudantes);
                break;
        }
        system("cls");
    }
    return 0;
}
// EXIBE OS DADOS CADASTRADOS
int exibirDados(t_lista * estudantes)
{
    int id, i, cont;
    printf("\n\tInforme sua matricula: ");
    scanf("%d", &id);

    for(i = 0; i < estudantes->n; i++){
        if(id == estudantes->alunos[i].matricula){
            for(cont = 0; cont < DISC; cont++){
                printf("\n\t\tDisciplina %d -> %s\n", cont, estudantes->alunos[i].disciplinas[cont].disciplina);
                printf("\t\tNota -> %.2f\n\n", estudantes->alunos[i].disciplinas[cont].nota);
            }
            system("pause");
            return 0;
        }
    }

    printf("\t\tErro, matricula invalida!!\n");

    system("pause");

    return 0;
}
// REGISTRA OS ALUNOS
void registrando(t_lista * estudantes)
{
    int i;

    printf("\n\tDiga sua matricula: ");
    scanf("%d", &estudantes->alunos[estudantes->n].matricula);

    for(i = 0; i < DISC; i++){
        printf("\n\t\tDisciplina %d -> ", i);
        scanf("%s", estudantes->alunos[estudantes->n].disciplinas[i].disciplina);
        printf("\t\tNota -> ");
        scanf("%f", &estudantes->alunos[estudantes->n].disciplinas[i].nota);
        putchar('\n');
    }
    estudantes->n++;
}
// CRIA A LISTA PRINCIPAL
t_lista * criarLista()
{
    t_lista * lista;
    lista = (t_lista *) malloc(sizeof(t_lista));
    lista->n = 0;

    return lista;
}
// EXIBE AS OPCOES DE ENTRADA
int menu()
{
    int opcao = 0;

    printf("\t\tHistorico Escolar\n\n");
    printf("\t[1] - Inserir Matricula, Disciplinas e Notas\n");
    printf("\t[2] - Exibir Historico\n");
    printf("\t[0] - Sair\n\n");

    printf("\tDigite uma opcao: ");
    scanf("%d", &opcao);

    return opcao;
}
