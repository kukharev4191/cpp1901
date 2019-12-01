
# include <iostream>
// # include <array>

using namespace std;

int main(){
    int num1 = 0, num2 = 0;
     do
    {
    cout << "Введите однозначное число (0 - 9): ";
    cin >> num1;
    }
    while (num1< 0 || num1>9);

    do
    {
    cout << "Введите однозначное число (0 - 9): ";
    cin >> num2;
    }
    while (num2< 0 || num2>9);

    cout << num1 <<" * " << num2 <<" = ";

    cin >> num2;
    }

    switch (num2)
    {
     case 1: cout << "Большой палец \n"; break;
     case 2: cout << "Указательный палец \n"; break;
     case 3: cout << "Средний палец \n"; break;
     case 4: cout << "Безымянный палец \n"; break;
     case 5: cout << "Мизинец \n"; break;
     default: cout << "У вас нет пальца \n";
    }

    return 0;
}