#include <iostream>
#include <string>

using namespace std;

// Definindo a estrutura de uma carta
struct Carta {
    string codigo;
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
};

int main() {
    Carta carta1;
    Carta carta2;

    // Cadastro da primeira carta
    cout << "Cadastro da primeira carta:\n";
    cout << "Código (ex: A01): ";
    cin >> carta1.codigo;

    cout << "População: ";
    cin >> carta1.populacao;

    cout << "Área (km²): ";
    cin >> carta1.area;

    cout << "PIB (em bilhões): ";
    cin >> carta1.pib;

    cout << "Número de pontos turísticos: ";
    cin >> carta1.pontosTuristicos;

    // Cadastro da segunda carta
    cout << "\nCadastro da segunda carta:\n";
    cout << "Código (ex: B02): ";
    cin >> carta2.codigo;

    cout << "População: ";
    cin >> carta2.populacao;

    cout << "Área (km²): ";
    cin >> carta2.area;

    cout << "PIB (em bilhões): ";
    cin >> carta2.pib;

    cout << "Número de pontos turísticos: ";
    cin >> carta2.pontosTuristicos;

    // Exibição dos dados
    cout << "\n--- Dados da Primeira Carta ---\n";
    cout << "Código: " << carta1.codigo << endl;
    cout << "População: " << carta1.populacao << endl;
    cout << "Área: " << carta1.area << " km²" << endl;
    cout << "PIB: R$ " << carta1.pib << " bilhões" << endl;
    cout << "Pontos turísticos: " << carta1.pontosTuristicos << endl;

    cout << "\n--- Dados da Segunda Carta ---\n";
    cout << "Código: " << carta2.codigo << endl;
    cout << "População: " << carta2.populacao << endl;
    cout << "Área: " << carta2.area << " km²" << endl;
    cout << "PIB: R$ " << carta2.pib << " bilhões" << endl;
    cout << "Pontos turísticos: " << carta2.pontosTuristicos << endl;

    return 0;
}
