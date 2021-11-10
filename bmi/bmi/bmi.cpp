
#include <iostream>
using namespace std;
int main()
{
   
    cout << "Zadaj svoju vysku v metroch" << endl;
    float vyska;
    cin >> vyska;
    cout << "Zadaj svoju vahu" << endl;
    float vaha;
    cin >> vaha;
    float bmi;
    bmi = (vaha / (vyska * vyska) *10000);
    cout << "Tvoje bmi je " << bmi << endl;
    if (bmi <= 18.5)

        cout << "Si extremne podvyziveny, mal by si viac jest!" << endl; // Si extremne podvyziveny, mal by si viac jest!

    if (bmi > 18.5 && bmi <= 24.99)
        cout << "Mas normalnu vahu" << endl; // Mas normalnu vahu

    if (bmi > 25 && bmi <= 29.99)
        cout << "Mas miernu nadvahu" << endl;  // Máš miernu nadváhu

    if (bmi > 30 && bmi <= 39.99)
        cout << "Si obezny, mal by si trochu pocvicit a jest menej." << endl; 

    if (bmi > 40)
        cout << "Si extremne obezny, ihned musis schudnut!" << endl;


 
    
}

