#include <stdio.h>

int CadastroTurma(int *TotalTurmas, int *Turmas[][4]){
    printf("Digite o código da turma: ");
    scanf("%d",& Turmas[*TotalTurmas]);
    printf("Turma de código %d cadastrada", Turmas[*TotalTurmas][4]);
    TotalTurmas ++;

    return 0;
}

void CadastroAluno(){

}

void Relatório(){

}

void RemoverAluno(){

}

int main(){
    int Escolha = 0, *TotalTurmas = 0, Turmas[10][4];
    do{
        printf("\n----- ESCOLA -----\n1 - Cadastrar turma\n2 - Cadastrar aluno\n3 - Relatório de turmas\n4 - Remover aluno\n0 - Sair");
        scanf("%d",& Escolha);
    
        switch (Escolha)
        {
        case 1:
            CadastroTurma(&TotalTurmas, Turmas);
            break;
        case 2:
            CadastroAluno();
            break;
        case 3:
            Relatório();
            break;
        case 4:
            RemoverAluno();
            break;
        default:
            printf("Valor inválido!");
            break;
        }
    }while(Escolha != 0);

    return 0;
}