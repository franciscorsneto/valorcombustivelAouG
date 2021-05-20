#include <iostream>

using namespace std;

int main()
{ char tipoc;
    float litros;
    float valor;
    
cout << "Qual combustível você vai abastecer?" << '\n' << "Digite A para álcool e G para gasolina:";
    cin >> tipoc;
cout << "Digite o valor do combustível:";
    cin >> valor;
cout << "Digite a quantidade que você pretende abastecer para calcular o valor promocional:";
    cin >> litros;

    if(tipoc== 'A'|| tipoc== 'a')
        if(litros <= 20)
    cout << "O valor abastecimento com desconto é: "<<(litros*valor)-valor*0.3*litros;
        else 
    cout << "O valor abastecimento com desconto é: "<<(litros*valor)-valor*0.3*litros;
    
    else
    if(tipoc== 'G'|| tipoc== 'g')
        if(litros <= 20)
    cout << "O valor abastecimento com desconto é: "<<(litros*valor)-valor*0.4*litros;
        else 
    cout << "O valor abastecimento com desconto é: "<<(litros*valor)-valor*0.6*litros;
    
    return 0;
}
