#include <iostream>
#define  B 100
#define A 2
using namespace std;

int main() {
   char str[A][B];
   int num = 0, space1 = 0, space2,szf;
   bool bolk = true;
   int p = 0;
   for(int i = 0; i<=A-1; i++){
       cin.getline(str[i], B);
   }
    for(int i = 0; i<=A-1; i++) {
        space1 = 0; space2 = 0;
        for (int j = 0; j < B && str[i][j]!='\0'; j++) {
            if (str[i][j] == ' ' || str[i][j] == '\0') {
                space2 = j;
                szf = space2 - space1;
                for (int k = space1; k <= (space2-(szf/2)-1) && bolk; k++) {// нормальное условие в цикле
                    if (str[i][k] != str[i][space2-(k-space1)-1]) {
                        bolk = false;
                    }
                }
                space1 = space2+1;
                if (bolk) { num++;} else{bolk = true;}
            }
        }
    }

   cout << num;


}
