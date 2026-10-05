#include <iostream>
#include <string>

std::string imie, nazwisko;
int wiek;

int main() {
    std::cout << "imie" << std::endl;
    std::cin  >> imie; //pobieranie danych od uzytkownika imie
    std::cout << "nazwisko" << std::endl;
    std::cin  >> nazwisko;//pobieranie danych od uzytkownika nazwisko
    std::cout << "wiek" << std::endl;
    std::cin  >> wiek;    //pobieranie danych od uzytkownika wiek
    std::cout << "\n" << std::endl; // odstep miedzy wprowadzonymi danymi a wyswietlanymi danymi
    std::cout << "imie: " << imie << std::endl;// wyswietlanie danych
    std::cout << "nazwisko: " << nazwisko << std::endl; //wyswietlanie danych
    std::cout << "wiek: " << wiek << std::endl; // wyswietlanie danych
    std::cout << "\n" << std::endl;
    return 0;
}
