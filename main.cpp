//#include "Huffman.hpp"
//#include "TaulaFreq.hpp"
#include "PriorityQueue.hpp"
using namespace std;

int main()
{ /*
	 string s;
	 getline(cin, s);
	 TaulaFreq t;
	 t.construirTaula(s);
	 t.mostrarTaula(); */

	Queue<int> c;

	cin >> c;
	cout << c;
	c.push(10);
	cout << endl;
	cout << c;
	cout << "front -> " << c.front() << endl;

	// 1. Lectura del text d'entrada

	// 2. Creació de la taula de freqüències

	// 3. Obtenció dels codis de Huffman

	// 4. Codificació Huffman d'un missatge de text

	// 4.1 Mostrar el text d'entrada original

	// 4.2 Mostrar el text d'entrada amb la codificació Huffman
}
