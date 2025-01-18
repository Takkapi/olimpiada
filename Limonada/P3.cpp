#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // declararea fisierelor
    fstream limonada;
    fstream out;

    string text;

    // Deschiderea / crearea fisierelor
    limonada.open("limonada.in", ios::in);
    out.open("limonada.out", ios::out);

    if(limonada.is_open()) {
        // limonada >> text;
        while(getline(limonada, text)) {
            cout << text << endl;
        }
    }

    cout << text;

    // Inchiderea fisierelor
    limonada.close();
    out.close();
    return 0;
}