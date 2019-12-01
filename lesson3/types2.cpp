# include <iostream>

using namespace std;

int main(){

    int x = 10;
    int y = 12;
    int z = 3;
    x+=y-x++*z;
    cout <<"x = "  <<x <<endl;

    x = 10;
    y = 12;
    z = 3;
    z =--x-y*5;
    cout <<"z = "  <<z <<endl;

    x = 10;
    y = 12;
    z = 3;
    y/=x+5%z;
    cout <<"y = "  <<y <<endl;

    x = 10;
    y = 12;
    z = 3;
    z = x++ + y*5;
    cout <<"z = "  << z <<endl;

    x = 10;
    y = 12;
    z = 3;
    x = y-x++*z;
    cout <<"x = "  <<x <<endl;

    return 0;
}