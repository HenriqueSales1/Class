#include <iostream>
#include <windows.h>
#include "pessoa.hpp"
 
using namespace std;
 
int main() {
    UINT CPAGE_UTF8 = 65001;
    // UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);

    Pessoa p = Pessoa("Henrique", 18, 1.80);
    p.mostraDados();

    cout << endl << endl;
    return 0;
}