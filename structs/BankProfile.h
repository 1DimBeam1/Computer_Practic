#ifndef STRUCTURS_BANKPROFILE_H
#define STRUCTURS_BANKPROFILE_H
#define MAXACC 10 //МАКСИМАЛЬНОЕ КОЛИЧЕСТВО СЧЕТОВ
#include <string>
#include <iostream>

using namespace std;

struct PROFILE{
<<<<<<< Updated upstream
    string NAME = " ";
    string SURNAME =" ";
    string PASSWORD = " ";
    int PIN;
    int NUMACC = 0;
    int ACCOUNT[MAXACC] = {0,0,0,0,0,0,0,0,0,0};

    void REGISTR(string, string, string, int);
=======
    string name ;
    string surname;
    string pasword;
    int pin;
    int numacc = 0;
    int account[MAXACC] = {0,0,0,0,0,0,0,0,0,0};

    PROFILE(string, string, string, int);
>>>>>>> Stashed changes
    void OPEN_ACC(int,int);
    void ADD_ACC(int, int);

    PROFILE operator +(PROFILE);
    PROFILE operator -(PROFILE);
    bool operator <(PROFILE);
    bool operator >(PROFILE);
    bool operator ==(PROFILE);
    bool operator !=(PROFILE);
};

#endif //STRUCTURS_BANKPROFILE_H