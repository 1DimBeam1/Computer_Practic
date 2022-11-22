#include <iostream>
#include <fstream>
#include <conio.h>
#define A 100
#define B 100
using namespace std;

int main() {
    int numstr = 0, lnsubstr = 0, lnstr, k, inwrite = 0;
    bool equally;
    ifstream F("C:\\GitHub\\Computer_Practic\\SubString\\in.txt");
    char substr[A], str[B];
    //cin >> substr;
    cin.getline(substr, A);
    while(substr[lnsubstr] != '\0'){
        lnsubstr++;
    }

    while (!F.eof()){
        F.getline(str, B );
        numstr++;
        for(int i = 0; str[i] != '\0'; i++){
            if (str[i] == substr[0]){
                equally = true;
                k = i;
                while(equally && (k-i < lnsubstr)){
                    if(str[k] != substr[k-i]){
                        equally = false;
                    }
                    k++;
                }
                if (equally && inwrite < numstr){
                    cout << numstr << endl;
                    inwrite = numstr;
                }
            }
        }
    }
    if (inwrite == 0){cout << "Not found substring"<< endl;}

    F.close();
}
