#include "BankProfile.h"

int main() {
    PROFILE Tim = PROFILE("Tim","Broly","1234", 0000);
    PROFILE Bob = PROFILE("Bob","Newman","1111", 0000);
    Tim.OPEN_ACC(10000, 0000);
    Tim.OPEN_ACC(20000, 0000);
    Tim.ADD_ACC(10000, 1);
    Bob.OPEN_ACC(10000, 0000);
    PROFILE Sam = Tim + Bob;
    Tim = Sam - Bob;
    cout << Sam.account[0] << endl;
    cout << Tim.account[0] << endl;
}
