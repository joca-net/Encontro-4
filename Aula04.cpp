#include <iostream>
using namespace std;

// Método principal da aplicação
int main()
{
    // Variaveis são delaradas informando o tipo em seguida o nome exemplos:

    int Idade; // Cria uma variavel do tipo inteiro
    double Preco;
    string Nome;

    // Constantes são declaradas e recebem seu valor imediadamente, é estatica, ou seja seu valor NUNCA muda
    const int MaiorIdade = 18;

    // ********************************************* //
    // Leitura e escrita de dados atráves do console //
    // ********************************************* //

    // Escreve a mensagem para o usuário
    cout << "Digite seu nome" << endl;

    // Lê o valor digitado pelo usuario e atribui o valor  a variavel pré definida.
    cin >> Nome;

    // Para o console out é possivel concatenar as o conteudo a ser exibido com variaveis utilizado <<

    cout << "Digite sua idade: " << endl;
   // cin >> Idade;

   getline(cin, Nome);

    // condicionais

    if (Idade < 0)
    {
        cout << "Idade invalida!" << endl;
    }
    else if (Idade < 12)
    {
        cout << "e crianca" << endl;
    }
    else if (Idade >= 12 && Idade < 18)
    {
        cout << "e adolescente" << endl;
    }
    else
    {
        cout << "e adulto" << endl;
    }

    return 0;
}