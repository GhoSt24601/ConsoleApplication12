#include <iostream>
using namespace std;

struct User
{
    string id;
    string name;
    string surname;
    string patronymic;
    string Password;
};



struct Bank
{
    string id;
    double money;
    string adress;
};



int main()
{
    User GhoSt24601;
    GhoSt24601.id = 1;
    GhoSt24601.name = "James";
    GhoSt24601.surname = "Raynor";
    GhoSt24601.Password = "ILKERR";

    Bank Merasmus;
    Merasmus.id = 1;
    Merasmus.money = 500000;
    Merasmus.adress = "Сектор Копрулу, пограничный мир Мар-сара. повторно колонизирована в 2502г.";



    int cycle = 1;
    int e;

    string name = GhoSt24601.name;
    string surname = GhoSt24601.surname;
    string Password = GhoSt24601.Password;

    string adress = Merasmus.adress;

    string Name; 
    string Surname; 
    string password; 
    double Change;



    setlocale(LC_ALL, "Russian");

    cout << "\n";
   /* cout << GhoSt24601.name + "\n";
    cout << GhoSt24601.surname + "\n";
    cout << GhoSt24601.Password + "\n";
    cout << Merasmus.money; cout << "\n";
    cout << "\n";*/

    cout << "Эн таро Керриган!\n";
    cout << "\n";

    cout << "Введите имя\n";
    cin >> Name;
    cout << "\n";

    cout << "Введите фамилию\n";
    cin >> Surname;
    cout << "\n";

    cout << "Введите пароль\n";
    cin >> password;
    cout << "\n";

    if (name == Name && surname == Surname && Password == password)
    {
        
        cout << "Добро пожаловать, командир\n";

        while (cycle == 1)
        {
            system("cls");
            cout << "\n";
            cout << "Сейчас на вашем счету "; cout << Merasmus.money; cout << " рублей\n";
            cout << "\n";
            cout << "Выберите действие\n";
            cout << "\n";
            cout << "1)Вывести деньги\n";
            cout << "\n";
            cout << "2)Перевести деньги\n";
            cout << "\n";
            cout << "3)Выйти\n";

            cin >> e;
            if (e == 1)
            {
                cout << "сколько?\n";
                cin >> Change;

                if (Change < Merasmus.money)
                {
                    Merasmus.money = Merasmus.money - Change;
                }

            }

            else if (e == 2)
            {
                cout << "сколько?\n";
                cin >> Change;

                if (Change < Merasmus.money)
                {
                    Merasmus.money = Merasmus.money + Change;
                }
            }

            else if (e == 3)
            {
                system("cls");
                cycle = 0;
            }

        }

    }

    else if (Name != GhoSt24601.name || Surname != GhoSt24601.surname )
    {
        cout << "Пользователь не найден\n";
    }

    else if (password != GhoSt24601.Password)
    {
        cout << "Пароль неверный\n";
    }

}

