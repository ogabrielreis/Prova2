#include <iostream>

using namespace std;

int main() {
  int tamanhoPalavra;
  char trocarLetra, letraNova;
  string palavra, palavraSemModificar;
  string *palavraAux;

  cout << "Informe uma palavra" << endl;
  cin >> palavra;
  cout << "Perfeito! Agora informe qual letra tu deseja trocar. " << endl;
  cin >> trocarLetra;
  cout << "Ótimo! Agora informe para qual letra tu deseja trocar. " << endl;
  cin >> letraNova;

  tamanhoPalavra = palavra.length();

  palavraAux = &palavra;
  palavraSemModificar = *palavraAux;

  for (int i = 0; i < tamanhoPalavra; i++) {
    if (palavra[i] == trocarLetra) {
      palavra[i] = letraNova;
    }
  }

  cout << "A nova palavra é: " << palavra << endl;
  cout << "A palavra original é: " << palavraSemModificar << endl;
  cout << "E contém " << tamanhoPalavra << " letras";
}