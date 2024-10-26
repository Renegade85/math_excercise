#include <iostream>
#include <vector>
#include <utility>
#include <stdio.h>
#include <random>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::pair;
using std::vector;
using std::srand;
using std::time;

int main (void)
{
    vector<pair<int, int>> priklad;
    
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            priklad.push_back(pair(i, j));
        }
    }
    
    srand(time(nullptr));
    
    int cislo;
    while (priklad.size() != 0)
    {
        int idx = rand() % (priklad.size());
        cout << priklad[idx].first << " + " << priklad[idx].second << " = ";
        cin >> cislo;

        int vysledek = priklad[idx].first + priklad[idx].second;
        if (cislo != vysledek)
        {
            cout << " Chyba! Sprave je: " << vysledek << endl;
        }
        
        vector<pair<int, int>>::iterator pos = priklad.begin() + idx;
        priklad.erase(pos);
    }

    return 0;
}