#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> participanti;
    int H, n, premianti = 0, temp;
    string mesaj = "NU";

    cout << "Dati codul lui H: ";
    cin >> H;

    cout << "Dati numarul de participanti: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Dati codul premiantului " << i + 1 << ": ";
        cin >> temp;
        participanti.push_back(temp);
    }
    
    for(int i = 0; i < n; i++) {
        if(H == participanti[i]) 
            mesaj = "DA";
        
        if(H / 10 == participanti[i] / 10) premianti++;
    }

    cout << "a) " << mesaj << endl;
    cout << "b) " << premianti << endl;

    return 0;
}