#include <iostream>
#define  B 100
#define A 2
using namespace std;

int main() {
   char str[A][B];
   int num = 0,szf, lenstr;
   bool flag;
   for(int i = 0; i<=A-1; i++){
       cin.getline(str[i], B);
   }

    for(int i = 0; i<=A-1; i++) {
        lenstr = 0;
        flag = true;
        while (str[i][lenstr] != '\0'){lenstr++;}
        if(lenstr % 2 == 1 ){szf = (lenstr+1)/2;}
        else {szf = (lenstr)/2;}

        for(int j = 0; j<= szf && flag; j++){
            if(str[i][j] != str[i][lenstr - j-1]){flag = false;}
        }
        if (flag){num++;}
    }

   cout << "Palindrom:"<< num ;


}
