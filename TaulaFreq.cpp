#include "TaulaFreq.hpp"

// Pre:
// Post: Crea una taula de freqüències buida.
TaulaFreq::TaulaFreq()
{
    list<Entrada> vacio; // preguntar profe
    m = vacio;
}

// Consultors

// Pre:
// Post: El resultat és el nombre d'elements de la taula p.i.
int TaulaFreq::mida() const
{
    return m.size();
}

// Modificadors

// Pre:
// Post: Omple la taula p.i. a partir dels caràcters de text.
void TaulaFreq::construirTaula(string text)
{
    unsigned int mida_text = text.size();
    map<char, int> dicc;
    for (unsigned int i = 0; i < mida_text; i++)
    {
        dicc[text[i]]++;
    }
    auto iter = dicc.begin();
    while (iter != dicc.end())
    {
        double freq = iter->second / int(mida_text);
        Entrada e(iter->first, freq);
        m.push_back(e);
        ++iter;
    }
}

// Pre:
// Post: Afegeix l'entrada e al final de la taula p.i.
void TaulaFreq::afegirEntrada(const Entrada &e)
{
    m.push_back(e);
}

// Pre:
// Post: S'ha mostrat pel canal estàndard de sortida el contingut
//       de la taula p.i.
void TaulaFreq::mostrarTaula() const
{
    auto iter = m.begin();
    while (iter != m.end())
    {
        cout << *iter;
        iter++;
    }
}