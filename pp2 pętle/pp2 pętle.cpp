// pp2 pętle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	/*zadanie1 druga kropka
    for (int i = 5; i < 7; i++) {//aby program wyświetlał liczby od 5 do 7 włącznie, należy zmienić warunek pętli na i <= 7
            cout << i << endl;
        }
        return 0;
        */
    /*zadanie1 trzecia kropka
    for (int i = 0; i < 10; i=i+2) {
        cout << i << endl;
    }*/
    /*zadanie 1 czwarta kropka
    for (int i = 10; i >= 0; i--) {
        cout << i << endl;
    }*/
    /*zadanie2
    int fahr, celsius; //zmienne typu int 
    int start, limit, krok; //zmienne typu int 

    start = 0; //przypisz 0 do start 
    limit = 200; //przypisz 200 do limit 
    krok = 20; //przypisz 20 do krok 

    fahr = start; //przypisz wartosc start do zmiennej fahr, czyli fahr = 0 
    while (fahr <= limit) { //wykonuj petle dopoki wartosc fahr jest <= od zmiennej limit 
        celsius = 5 * (fahr - 32) / 9; //oblicz stopnie C i przypisz wynik do celsius 
        cout << fahr << "\t" << celsius << endl; //wypisz zmienne na ekran
        fahr = fahr + krok; //zwieksz wartosc zmiennej fahr o wartosc zmiennej krok
    }*/
    /*zadanie3
    int i, celsius; //zmienne typu int 
    int start, limit, krok; //zmienne typu int 

    start = 0; //przypisz 0 do start 
    limit = 200; //przypisz 200 do limit 
    krok = 20; //przypisz 20 do krok 

    //przypisz wartosc start do zmiennej fahr, czyli fahr = 0 , u mnie zamiast fahr - i
    for (i = 0;i<=limit;i = i + 20) { //wykonuj petle dopoki wartosc fahr jest <= od zmiennej limit 
        celsius = 5 * (i - 32) / 9; //oblicz stopnie C i przypisz wynik do celsius 
        cout << i << "\t" << celsius << endl; //wypisz zmienne na ekran
    }//zwieksz wartosc zmiennej fahr o wartosc zmiennej krok
    */
    /*zadanie5
    for (fahr = 0.0; fahr <= limit; fahr = fahr + krok)  //kod 02_14
    {
		float celsius = (5 / 9) * (fahr - 32.0);//błąd w kodzie, ponieważ 5/9 jest liczbą całkowitą, więc wynik będzie zawsze 0. Należy użyć 5.0/9.0 lub (5.0/9.0) aby uzyskać poprawny wynik.
        printf("%3.0f \t %6.1f \n", fahr, celsius);
    }*/
    /*zadanie6
    int limit, krok;
	float fahr, celsius;
    cout << "Podaj limit: \n";
    cin >> limit;
    cout << "Podaj o ile ma rosnąć fahrenheit co iteracje(?): \n", cin >> krok;
    for (fahr = 0.0; fahr <= limit; fahr = fahr + krok)  //kod 02_14
    {
        float celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f \t %6.1f \n", fahr, celsius);
    }*/
    /*zadanie7
    int i = 0;
    float liczba;
    while (i < 10) {
        cout << "podaj liczbe rzeczywista: ";
        cin >> liczba;
        if (liczba > 0) {
            cout << liczba<<"\n";
        }
        i++;
    }*/
	/*zadanie8
    int p=0;
    while (p <= 100) {
        cout << p << " ";
        p = p + 2;
    }*/
    /*zadanie9
    int n;
	cout << "podaj liczbe calkowita: ";
    cin >> n;
    for (int i=0; i<= 100; i++) {
                if (i%n==0) {
            cout << i << " ";
				}
    }*/
    /*zadanie10
    int n;
    cout << "podaj liczbe calkowita: ";
    cin >> n;
    int suma = 0;
    for (int i = 0; i <= 100; i++) {
        if (i % n == 0) {
            suma = suma + 1;
        }

    }
    cout << suma;*/
	/*zadanie11*/
    int a, b;
    cout << "podaj liczbe calkowita a: ", cin >> a;
    cout << "podaj liczbe calkowita b: ", cin >> b;
    if(a<b){}


}


