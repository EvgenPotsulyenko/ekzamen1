// ekzamen.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include "Header.h"
#include"Header1.h"
#include <string>
#include<string.h>
#include <windows.h>
#include <fstream>
#pragma once

using namespace std;

int main()
{
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout << "                                                    FISHPEDIA" << endl;


    menu();
    int a,k,q,r;
    cout << "Введите номер раздела:" << endl;
    cin >> a;
    cin.ignore();
    while (true)
    {
        if (a == 1)  //рыбы
        {
            system("cls");
            int b;
            ruba();
            cout << "Введите номер раздела:" << endl;
            cin >> b;
            system("pause");
            if (b == 1)//Среды обитания
            {
                system("cls");
                int c;
                sreda();
                cout << "Введите номер раздела:" << endl;
                cin >> c;
                system("pause");
                if (c == 1)
                {
                    system("cls");
                    morsk();
                    cin >> k;
                    system("pause");
                    if (k == 1)
                    {
                        system("cls");
                        menu();
                        cout << "Введите номер раздела:" << endl;
                        cin >> a;
                        system("pause");
                    }
                }
                if (c == 2)
                {
                    system("cls");
                    presn();
                    cin >> k;
                    system("pause");
                    if (k == 1)
                    {
                        system("cls");
                        menu();
                        cout << "Введите номер раздела:" << endl;
                        cin >> a;
                        system("pause");
                    }
                }
                if (c == 3)
                {
                    system("cls");
                    prox();
                    cin >> k;
                    system("pause");
                    if (k == 1)
                    {
                        system("cls");
                        menu();
                        cout << "Введите номер раздела:" << endl;
                        cin >> a;
                        system("pause");
                    }
                }
                if (c == 4)
                {
                    system("cls");
                    chast();
                    cin >> k;
                    system("pause");
                    if (k == 1)
                    {
                        system("cls");
                        menu();
                        cout << "Введите номер раздела:" << endl;
                        cin >> a;
                        system("pause");
                    }
                }
                if (c == 5)
                {
                    system("cls");
                    menu();
                    cout << "Введите номер раздела:" << endl;
                    cin >> a;
                    system("pause");
                    if (k == 1)
                    {
                        system("cls");
                        menu();
                        cout << "Введите номер раздела:" << endl;
                        cin >> a;
                        system("pause");
                    }
                }
                k = 0;
                system("pause");
            }           
                if (b == 2) //Выход в меню
                {
                    menu();
                    cout << "Введите номер раздела:" << endl;
                    cin >> a;
                }
        }
        if (a == 2) // Класификация рыб. снаст.
        {
            system("cls");
            int d;
            viduscnact();
            cin >> d;
            cout << "Введите номер раздела:" << endl;
            if (d == 1)
            {
                system("cls");
                spinning();
                cin >> k;
                if (k == 1)
                {
                    system("cls");
                    menu();
                    cout << "Введите номер раздела:" << endl;
                    cin >> a;
                }
            }
            if (d == 2)
            {
                system("cls");
                donka();
                cin >> k;
                if (k == 1)
                {
                    system("cls");
                    menu();
                    cout << "Введите номер раздела:" << endl;
                    cin >> a;
                }
            }
            if (d == 3)
            {
                system("cls");
                poplav();
                cin >> k;
                if (k == 1)
                {
                    system("cls");
                    menu();
                    cout << "Введите номер раздела:" << endl;
                    cin >> a;
                }

            }
            if (d == 4)
            {
                system("cls");
                menu();
                cout << "Введите номер раздела:" << endl;
                cin >> a;
            }
        }
        if (a == 3)// Праздники
        {     
            system("cls");
            prazdn();
            cin >> q;
            system("pause");
            if (q == 1)
            {
                system("cls");
                menu();
                cout << "Введите номер раздела:" << endl;
                cin >> a;
                system("pause");
            }
        }       
        if (a == 4)// Техники ловли
        {
            system("cls");
            int e;
            texn();
            cin >> e;
            cout << "Введите номер раздела:" << endl;
            system("pause");
            if (e == 1)
            {
                system("cls");
                blesn();
                cin >> k;
                system("pause");
                if (k == 1)
                {
                    system("cls");
                    menu();
                    cout << "Введите номер раздела:" << endl;
                    cin >> a;
                    system("pause");
                }
            }
            if (e == 2)
            {
                system("cls");
                tvich();
                cin >> k;
                system("pause");
                if (k == 1)
                {
                    system("cls");
                    menu();
                    cout << "Введите номер раздела:" << endl;
                    cin >> a;
                    system("pause");
                }
            }
            if (e == 3)
            {
                system("cls");
                djerk();
                cin >> k;
                system("pause");
                if (k == 1)
                {
                    system("cls");
                    menu();
                    cout << "Введите номер раздела:" << endl;
                    cin >> a;
                    system("pause");
                }
            }
            if (e == 4)
            {
                system("cls");
                djug();
                cin >> k;
                system("pause");
                if (k == 1)
                {
                    system("cls");
                    menu();
                    cout << "Введите номер раздела:" << endl;
                    cin >> a;
                    system("pause");
                }
            }
            if (e == 5)
            {
                system("cls");
                naxl();
                cin >> k;
                system("pause");
                if (k == 1)
                {
                    system("cls");
                    menu();
                    cout << "Введите номер раздела:" << endl;
                    cin >> a;
                    system("pause");
                }
            }
            if (e == 6)
            {
                system("cls");
                trol();
                cin >> k;
                system("pause");
                if (k == 1)
                {
                    menu();
                    cout << "Введите номер раздела:" << endl;
                    cin >> a;
                    system("pause");
                }
            }
            if (e == 7)
            {
                system("cls");
                yltrol();
                cin >> k;
                system("pause");
                if (k == 1)
                {
                    system("cls");
                    menu();
                    cout << "Введите номер раздела:" << endl;
                    cin >> a;
                    system("pause");
                }
            }
            if (e == 8)
            {
                system("cls");
                maxov();
                cin >> k;
                system("pause");
                if (k == 1)
                {
                    system("cls");
                    menu();
                    cout << "Введите номер раздела:" << endl;
                    cin >> a;
                    system("pause");
                }
            }
            if (e == 9)
            {
                system("cls");
                match();
                cin >> k;
                system("pause");
                if (k == 1)
                {
                    system("cls");
                    menu();
                    cout << "Введите номер раздела:" << endl;
                    cin >> a;
                    system("pause");
                }
            }
            if (e == 10)
            {
                system("cls");
                zimnaa();
                cin >> k;
                system("pause");
                if (k == 1)
                {
                    system("cls");
                    menu();
                    cout << "Введите номер раздела:" << endl;
                    cin >> a;
                    system("pause");
                }
            }
            if (e == 11)
            {
                system("cls");
                donka();
                cin >> k;
                system("pause");
                if (k == 1)
                {
                    system("cls");
                    menu();
                    cout << "Введите номер раздела:" << endl;
                    cin >> a;
                    system("pause");
                }
            }
            if (e == 12)
            {
                system("cls");
                fider();
                cin >> k;
                system("pause");
                if (k == 1)
                {
                    system("cls");
                    menu();
                    cout << "Введите номер раздела:" << endl;
                    cin >> a;
                    system("pause");
                }
            }
            if (e == 13)
            {
                system("cls");
                menu();
                cout << "Введите номер раздела:" << endl;
                cin >> a;
                system("pause");
            }
        }
        if (a == 5)
        {
            system("cls");
            float a1, d1,  k1;
            int o, l1;
            cout << "1.Расчёт количества лески на шпуле\n2.Длина бекинга\n3.Помощь\n4.Вывести все результаты\n5.Выход в меню\n";
            cout << "Введите номер раздела:" << endl;
            cin >> o;
            system("pause");
            if (o == 1)
            {
                system("cls");
                cout << "Введите диаметр лески" << endl;
                cin >> d1;
                cout << "Введите длину лески" << endl;
                cin >> l1;
                cout << "Введите диаметр искомой лески" << endl;
                cin >> k1;
                a1 = 0.7854 * d1 * d1 * l1;
                cout << "Емкость шпули:" << a1 << endl;
                l1 = a1 / (0.7854 * k1 * k1);
                cout << "Количество лески:" << l1 << endl;
                

                system("cls");
                ofstream out;
                out.open("kalkul.txt", ios::out | ios::app);
                out << "Емкость шпули:" << a1 << " Количество лески:" << l1 << endl;
                out.close();

                /*ifstream in;
                in.open("kalkul.txt");
                int st = 0;
                while (!in.eof())
                {                    
                    cout << st << endl;
                }
                in.close();
                system("pause");*/
            }
            if (o == 2)
            {
                system("cls");
                float  d2, l2, k2, vlb, vs, vh, a2;
                int db;
                cout << "Введите 1 диаметр лески" << endl;
                cin >> d2;
                cout << "Введите 1 длину лески" << endl;
                cin >> l2;
                cout << "Введите 2 диаметр лески" << endl;
                cin >> vs;
                cout << "Введите 2 длину лески" << endl;
                cin >> vh;
                cout << "Введите диаметр лески для бекинга" << endl;
                cin >> k2;
                a1 = 0.7854 * d2 * d2 * l2;
                a2 = 0.7854 * vs * vs * vh;
                if (a1 > a2)
                {
                    vlb = a1 - a2;

                }
                else
                {
                    vlb = a2 - a1;
                }
                cout << "Емкость шпули:" << vlb << endl;
                db = vlb / (0.7854 * k2 * k2);
                cout << "Длина бекинга:" << db << endl;  

                ofstream out;
                out.open("beking.txt", ios::out | ios::app);
                out << "Емкость шпули:" << vlb << " Длина бекинга:" << db << endl;
                out.close();
                system("pause");

            }
            if (o == 3)
            {
                system("cls");
                kalk();
                system("pause");
            }
            if (o == 4)
            {
                system("cls");
                int ls;
                cout << "1.Вывести информацию о емкости шпули\n2.Вывести информацию о длине бекинга\n5.Выход в меню\n" << endl;
                cout << "Введите номер раздела:" << endl;
                cin >> ls;
                system("pause");
                if (ls == 1)
                {
                    system("cls");
                    ifstream in;
                    in.open("kalkul.txt");
                    char st[80];
                    while (!in.eof())
                    {
                        in.getline(st, 80);
                        cout << st << endl;
                    }
                    in.close();
                    system("pause");
                }
                if (ls == 2)
                {
                    system("cls");
                    ifstream in;
                    in.open("beking.txt");
                    char st[80];
                    while (!in.eof())
                    {
                        in.getline(st, 80);
                        cout << st << endl;
                    }
                    in.close();
                    system("pause");
                }
                if (ls == 3)
                {
                    system("cls");
                    menu();
                    cout << "Введите номер раздела:" << endl;
                    cin >> a;
                    system("pause");
                }
            }
            if (o == 5)
            {
                system("cls");
                menu();
                cout << "Введите номер раздела:" << endl;
                cin >> a;
                system("pause");
            }
        }
        if (a == 6)//Выход
        {
            break;
        }
        else
        {
            system("cls");
            menu();
            cout << "Введите номер раздела:" << endl;
            cin >> a;
            system("pause");
        }
    }    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
