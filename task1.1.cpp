
# include <iostream>
// # include <array>

using namespace std;

int main(){
    int num = 0;
     do
    {
    cout << "Введите число (1 - 9999): ";
    cin >> num;
    }
    while (num< 1 || num>9999);






    int ar1 [line][column] = {{0},{0}};

    int symbol1 = 0;
    cout <<"Ввести данные массива вручную да - 1, нет - любую клавишу: ";
    cin  >> symbol1;

    int i=0; int k=0;
      if (symbol1 == 1) {
      i=0; k=0;
         for (int i= 0; i<line; i++)
         {
             for (int k=0; k<column; k++)
             {
             cout <<"Введите элемент массива " << i+1 << ", " << k+1 << ": ";
             cin >> ar1 [i][k];
             }
         }
      }
      else {
         i=0; k=0;
         for (int i= 0; i<line; i++)
         {
             for (int k=0; k<column; k++)
             {
             ar1 [i][k] = rand();
             }

         }
      }


    cout << endl << endl <<"Массив: " << line << " - строк, " << column <<" - столбцов" <<" \n" <<endl;
    i=0; k=0;
    for (int i= 0; i<line; i++)
       {
       cout <<"Строка " << i+1 <<": ";
       for (int k=0; k<column; k++)
           {
           cout << ar1 [i][k]  << ", ";
           }
      cout << endl;
      }

    return 0;
}