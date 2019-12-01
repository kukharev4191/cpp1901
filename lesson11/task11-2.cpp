# include <iostream>

using namespace std;


int main(){
    int num = 11;
     do
    {
    cout << "Введите число: ";
    cin >> num;
    }
    while (num< 0 || num>10 || num==5 );

    cout << num*10 <<endl;

    return 0;
}