#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    // HIBA: hibás konstans név, NELEMENTS helyett N_ELEMENTS kellene
    int *b = new int[NELEMENTS];
    // HIBA: karakter literal használt, hiányzik a pontosvessző
    std::cout << '1-100 ertekek duplazasa'
    // HIBA: for fej hiányos (feltétel, növelés, i deklaráció)
    for (int i = 0;)
    {
        // HIBA: a ciklus törzse nem módosítja i-t, végtelen ciklus
        b[i] = i * 2;
    }
    // HIBA: feltétel i; sosem fut, 0 kezdőérték miatt
    for (int i = 0; i; i++)
    {
        // HIBA: hiányzó kiírandó érték és pontosvessző
        std::cout << "Ertek:"
    }    
    std::cout << "Atlag szamitasa: " << std::endl;
    // HIBA: atlag nincs inicializálva
    int atlag;
    // HIBA: for fejben vessző, növelés hiányzik
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        // HIBA: pontosvessző hiányzik
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}
