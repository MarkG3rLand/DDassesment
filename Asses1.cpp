#include <iostream>

using namespace std;

int fac(int);

int main()
{
    int numb;
    cout << "input:";
    cin >> numb;
    cout << "output:" << fac(numb);
}

int fac(int nb)
{
    if (nb > 1){
        return nb*fac(nb-1);
    }
    else{
        return 1;
    }
}
