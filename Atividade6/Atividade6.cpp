////ATIVIDADE1
//#include <iostream>
//using namespace std;
//
//int main() {
//    // Declaração do vetor com 10 posições
//    int vetor[10];
//
//    // Pedir ao usuário para inserir os dados
//    cout << "Insira os dados no vetor de 10 posicoes:\n";
//    for (int i = 0; i < 10; i++) {
//        cout << "Digite o elemento " << i + 1 << ": ";
//        cin >> vetor[i];
//    }
//
//    // Mostrar os elementos do vetor
//    cout << "\nElementos do vetor:\n";
//    for (int i = 0; i < 10; i++) {
//        cout << vetor[i] << endl;
//    }
//
//    return 0;
//}

////ATIVIDADE2
//#include <iostream>
//using namespace std;
//
//int main() {
//    const int tamanho = 7;
//    int vetor[tamanho];
//    int soma = 0;
//
//    // Pedir ao usuário para inserir os dados no vetor
//    cout << "Insira os dados no vetor de 7 posicoes:" << endl;
//    for (int i = 0; i < tamanho; i++) {
//        cout << "Digite o valor para a posicao " << i << ": ";
//        cin >> vetor[i];
//        soma += vetor[i]; // Adiciona o valor inserido à soma
//    }
//
//    // Mostrar o resultado da soma dos elementos
//    cout << "O resultado da soma dos elementos do vetor e: " << soma << endl;
//
//    return 0;
//}

////ATIVIDADE3
//#include <iostream>
//
//int main() {
//    int numAlunos18 = 3; // Número de alunos com 18 anos
//    int numAlunos17 = 2; // Número de alunos com 17 anos
//    int numAlunos16 = 12; // Número de alunos com 16 anos
//
//    int totalAlunos = numAlunos18 + numAlunos17 + numAlunos16; // Total de alunos
//    int somaIdades = (numAlunos18 * 18) + (numAlunos17 * 17) + (numAlunos16 * 16); // Soma das idades
//
//    double mediaIdades = static_cast<double>(somaIdades) / totalAlunos; // Cálculo da média
//
//    std::cout << "A media das idades dos alunos e: " << mediaIdades << std::endl;
//
//    return 0;
//}

////ATIVIDADE4
//#include <iostream>
//
//int main() {
//    // Depositos iniciais
//    int depositos[] = { 5, 9, 7, 10, 15, 23 };
//
//    // Calculando o total dos depositos iniciais
//    int total = 0;
//    for (int i = 0; i < sizeof(depositos) / sizeof(depositos[0]); i++) {
//        total += depositos[i];
//    }
//
//    // Mais alguns valores
//    int valores_adicionais[] = { 20, 30 };
//
//    // Adicionando os valores adicionais ao total
//    for (int i = 0; i < sizeof(valores_adicionais) / sizeof(valores_adicionais[0]); i++) {
//        total += valores_adicionais[i];
//    }
//
//    // Exibindo o total
//    std::cout << "O homem tem um total de " << total << " reais." << std::endl;
//
//    return 0;
//}

////ATIVIDADE5
//#include <iostream>
//
//int main() {
//    const int tamanho = 10;
//    int vetor[tamanho];
//
//    // Preenchendo o vetor
//    std::cout << "Digite " << tamanho << " números para preencher o vetor:\n";
//    for (int i = 0; i < tamanho; i++) {
//        std::cin >> vetor[i];
//    }
//
//    int opcao;
//    std::cout << "Escolha uma opcao:\n";
//    std::cout << "1 - Soma dos elementos\n";
//    std::cout << "2 - Subtracao dos elementos\n";
//    std::cout << "3 - Multiplicacao dos elementos\n";
//    std::cin >> opcao;
//
//    switch (opcao) {
//    case 1: {
//        int soma = 0;
//        for (int i = 0; i < tamanho; i++) {
//            soma += vetor[i];
//        }
//        std::cout << "A soma dos elementos do vetor e: " << soma << "\n";
//        break;
//    }
//    case 2: {
//        int subtracao = vetor[0];
//        for (int i = 1; i < tamanho; i++) {
//            subtracao -= vetor[i];
//        }
//        std::cout << "A subtracao dos elementos do vetor e: " << subtracao << "\n";
//        break;
//    }
//    case 3: {
//        int multiplicacao = 1;
//        for (int i = 0; i < tamanho; i++) {
//            multiplicacao *= vetor[i];
//        }
//        std::cout << "A multiplicacao dos elementos do vetor e: " << multiplicacao << "\n";
//        break;
//    }
//    default:
//        std::cout << "Opcao invalida!\n";
//    }
//
//    return 0;
//}