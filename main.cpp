#include <iostream>
#include <string.h>
#include "lib.h"

using namespace std;
int main() {

    char a[10][20], b[20];

    for (int i = 0; i < 10; ++i) {
        cin >> a[i];


    }

    cin >> b;


    lib(a, b);
    posizione(a, b);


    return 0;
}
