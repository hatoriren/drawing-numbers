// Lista3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdio>
#include <ctime>

using namespace std;

int main()
{
    int ilosc, j, wynik, liczba1, liczba2;
    int liczby[50];
    j = 0;
    int max_dlugosc = 120;
    char ask;
    double suma = 0;


    while (j < 120) { //���� ������
        printf("*");
        j = j + 1;

        if (j > max_dlugosc) {
            break;
        }
    }
    printf("\n");
    printf("\n Autor programu: Anastasiia Nerestenko \n\n"); //���� �� ��'�

    j = 0;

    while (j < 120) { //����� ������ 
        printf("*");
        j = j + 1;

        if (j > max_dlugosc) {
            break;
        }
    }

    do {
    printf("\n\n Zadadaj przedzial losowania liczb\n"); // ���� ���� 
    printf("\nPoczatek: ");
    scanf_s("%d", &liczba1);
    printf("\nKoniec: ");
    scanf_s("%d", &liczba2);
    printf("\nIle liczb wylosowac(od 0 do 50): ");
    scanf_s("%d", &ilosc);

    srand(time(NULL)); //�������� ����� � ��������� ����

    for (int i = 0;  i < ilosc; ++i) { //������ �������� ����
        int wynik = rand() % (liczba2 - liczba1 + 1) + liczba1;
        liczby[i] = wynik;
        suma += wynik; 
    }  
    printf("\nLiczby w normalnej kolejnosci: "); //���� � ��������� ����������� 
    for (int i = 0; i < ilosc; ++i) {
        printf("%d ", liczby[i]);
    }

    printf("\nLiczby w odwrotnej kolejnosci "); //���� � ������� ����������� 

    for (int i = ilosc - 1; i >= 0; --i) {
        printf("%d ", liczby[i]);
    }

    double srednia = suma / ilosc; //���� ������� ��� ��� ����������� ���
    printf("\n\nSrednia suma wszystkich liczb: %.2f\n", srednia);


    do { //������ �������� 
        printf("\nCzy wykonac program ponownie t/n ? ");
        scanf_s(" %c", &ask);
        if (ask == 'n')
            return 0;
    } while (ask != 't');
} while (ask == 't');

}



