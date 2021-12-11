
#include "lib.h"
#include <iostream>
#include <string.h>
using namespace std;

void posizione(char a[10][20], char b[20]){

    int c=0;

    for (int i=0; i<10; i++){
        if (strcmp (a[i], b)==0){
            c=1;

            cout << i << endl;
        }
    }

    if (c==0){
        cout << "non presente" << endl;
    }

}

#include <cctype>

void lib(char a[10][20], char b[20]){
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 20; ++j) {

            if (isalpha(a[i][j])) {

                int r=a[i][j];

                if (r < 96) {
                    r = r + 32;
                    a[i][j] = r;
                }
            }
            if (isalpha(b[j])) {

                int f=b[j];

                if (f < 96) {
                    f = f + 32;
                    b[j] = f;
                }
            }
        }
    }
}
