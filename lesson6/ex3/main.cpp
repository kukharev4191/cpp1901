
# include <iostream>
# include "calculate.hpp"
// # include "add.hpp"

#define COUNT 1000
#define NAME "Mike"

const int NUMBER = 100

using namespace std;

int main(void){

    cout << add (COUNT, 7) << endl;
    cout << multiply (COUNT, 7) << endl;
    cout << subtraction (COUNT, 7) << endl;
    cout << del (COUNT, 7) << endl;

    cout << NAME << endl;

    return 0;
}

