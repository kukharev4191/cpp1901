
# include <iostream>
// # include <array>

using namespace std;

int main(){
    int num = 0;
     do
    {
    cout << "Введите номер пальца (1 - 5): ";
    cin >> num;
    }
    while (num< 1 || num>5);

    switch (num)
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