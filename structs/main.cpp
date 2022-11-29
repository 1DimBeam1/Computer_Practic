#include "BankProfile.h"

int main() {
    PROFILE Tim, Bob, Sam;
    Tim.REGISTR("Tim","Broly","1234", 0000);
    Bob.REGISTR("Bob","Newman","1111", 0000);
    Tim.OPEN_ACC(10000, 0000);
    Tim.OPEN_ACC(20000, 0000);
    Tim.ADD_ACC(10000, 1);
    Bob.OPEN_ACC(10000, 0000);
    Sam = Tim + Bob;
    Tim = Sam - Bob;
    cout << Sam.ACCOUNT[0] << endl;
    cout << Tim.ACCOUNT[0] << endl;
}
