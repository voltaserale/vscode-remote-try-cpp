#include <iomanip>      //per setprecision, fixed
#include <iostream>     //per cout e cin
#include <string>       //per string (non necessario se si include iostream)
using namespace std;    //per evitare di scrivere std::string, std::cout, ecc.

int main()
{
    struct prodotto {
        int codice;
        string descrizione;
        float prezzo;
    };
    srand(time(0)); //inizializza il rand()    
    
    cout <<"Hello World " << rand()%10<<endl;
    
    prodotto lista[3];
    
    for (int i=0;i<2;i++){
        cout << "Inserisci il codice: ";
        cin >>lista[i].codice;
        cout << "Inserisci la descrizione: ";
        cin >>lista[i].descrizione;
        cout << "Inserisci il prezzo: ";
        cin >>lista[i].prezzo;
    }
    
    //imposto la visualizzazione dei numeri reali con 2 cifre decimali
    cout << setprecision(2) << fixed;

    cout<<"\n\nProdotti inseriti:\n\n";
    for (int i=0;i<2;i++){
        cout << lista[i].codice << "\t\t" << lista[i].descrizione << "\t"<< lista[i].prezzo<<endl;
    }

    return 0;
}