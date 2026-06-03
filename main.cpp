#include <iostream>
#include <string>
using namespace std;
#include <fstream>
#include <ctime>

int main()
{

    // VARIAVEIS
    string nomes[20];
    int qtdAlunos;
    float notas[20][5];
    float media[20];
    int qtdDisciplinas;
    int opcaoInicial;

    // processamento

    //LEITURA DE ALUNOS COMIT 1
   cout << "======SISTEMA DE NOTAS v4.0======" << endl;
    cout << "1 - Novo relatorio " << endl;
    cout << "2 - Ver relatorio  " << endl;
    cout << "Escolha uma opcao: " << endl;
    cin >> opcaoInicial;


    //LEITURA DE ARQUIVO COMMIT 5

    if(opcaoInicial == 2){
        ifstream leitura("relatorio.txt");
        if(leitura.is_open()){
            string linha;
            cout << "\n";
            while (getline(leitura, linha)){
                cout << linha << endl;
            }
            leitura.close();
        } else {
            cout << "Nenhum relatorio encontrado. " << endl;
        }
        return 0;
   } 


    do
    {
        cout << "Quantidade de alunos (1 a 20): ";
        cin >> qtdAlunos;
    } while (qtdAlunos < 1 || qtdAlunos > 20);

    cin.ignore();

    for (int i = 0; i < qtdAlunos; i++)
    {
        cout << "Nome do Aluno " << i + 1 << ": ";
        getline(cin, nomes[i]);
    }


        // NOTAS E MEDIA COMMIT 2
    do
    {
        cout << "\nQuantidade de disciplinas (1 a 5): " << endl;
        cin >> qtdDisciplinas;
    } while (qtdDisciplinas < 1 || qtdDisciplinas > 5);

    for (int i = 0; i < qtdAlunos; i++)
    {
        cout << "\nNotas de " << nomes[i] << ": " << endl;
        float soma = 0;
        for (int j = 0; j < qtdDisciplinas; j++)
        {
            do
            {
                cout << "Disciplina " << j + 1 << "(1 a 10): ";
                cin >> notas[i][j];
            } while (notas[i][j] < 1 || notas[i][j] > 10);
            soma += notas[i][j];
        }
        media[i] = soma / qtdDisciplinas;
    }

    // SAIDA
    cout << "\nAlunos cadastrados: " << endl;
    for (int i = 0; i < qtdAlunos; i++)
    {
        cout << "  " << i + 1 << ". " << nomes[i] << endl;
    }


            //CLASSIFICAÇAO DE ALUNOS COMMIT 3
    cout << "\n====RELATORIO====" << endl;
    int aprovados = 0, recuperaçao = 0, reprovados = 0;

    for (int i = 0; i < qtdAlunos; i++)
    {
        cout << nomes[i] << "- media: " << media[i] << " -";
        if (media[i] >= 7)
        {
            cout << "Aprovado" << endl;
            aprovados++;
        }
        else if (media[i] >= 5)
        {
            cout << "Recuperaçao" << endl;
            recuperaçao++;
        }
        else
        {
            cout << "Reprovado" << endl;
            reprovados++;
        }
    }
    cout << "\nResumo: " << aprovados << "Aprovados, " << recuperaçao << " em recuperaçao, " << reprovados << "Reprovados." << endl;
      

    ofstream arquivo("relatorio.txt");

    if(arquivo.is_open()){
        arquivo << "=====RELATORIO======" << endl;
        for (int i = 0; i < qtdAlunos; i++){
            arquivo << nomes[i] <<  "- media:" << media[i] << " - ";
            if(media[i] >= 7){
                arquivo << "Aprovado" << endl;
            } else if (media[i] >= 5){
                arquivo << "rcupraçao" << endl;
            }else{
                arquivo << "Reprovado" << endl;
            }
        }
        arquivo << "\nResumo: "<< aprovados << " aprovados, " << recuperaçao << " em recuperaçao, " << reprovados << " reprovados. " << endl;
             time_t agora = time(0);
                char* dataHora = ctime(&agora);
                arquivo << "Data do relatorio: " << dataHora << endl;

        arquivo.close();
        cout << "\nRelatorio salvo em relatorio.txt" << endl;
    } else{
        cout << "Erro ao criar arquivo. " << endl;
    }


    return 0;
}