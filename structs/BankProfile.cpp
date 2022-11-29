#include "BankProfile.h"

void PROFILE:: OPEN_ACC(int money, int pin){
    if (pin == this->PIN){
        if (this->NUMACC < MAXACC){
            this->ACCOUNT[NUMACC] = money;
            this->NUMACC++;
        }
        else{cout << "You can't create new account"<<endl;}
    }
    else {cout << "incorrect PIN"<< endl;}
}

void PROFILE::REGISTR(string name,string surname, string pass, int pin) {
    if (this-> NAME == " " && this-> SURNAME == " " && this-> PASSWORD == " ") {
        this->NAME = name;
        this->SURNAME = surname;
        this->PASSWORD = pass;
        this->PIN = pin;
    }
    else {cout << "You can't registred new profile"<<endl;}
}

void PROFILE::ADD_ACC(int money, int number){
    if(number >= MAXACC || number > this->NUMACC || number < 1)
        cout << "Uncorrect number account"<<endl;
    else {
        this->ACCOUNT[number-1] += money;
    }
}

PROFILE PROFILE:: operator + (PROFILE one){
    PROFILE three;
    three.NAME = one.NAME + "/" + this->NAME;
    three.SURNAME = one.SURNAME + "/" + this->SURNAME;
    three.PASSWORD = one.PASSWORD;
    three.PIN = this->PIN;
    three.NUMACC = MAXACC;
    for(int i = 0; i<MAXACC; i++){
        three.ACCOUNT[i] = one.ACCOUNT[i] + this->ACCOUNT[i];
    }
    return three;
}
PROFILE PROFILE:: operator - (PROFILE one){
    PROFILE three;
    three.NAME = this->NAME;
    three.SURNAME = this->SURNAME;
    three.PASSWORD = this->PASSWORD;
    three.PIN = this->PIN;
    for(int i = 0; i<MAXACC; i++){
        three.ACCOUNT[i] = this->ACCOUNT[i] - one.ACCOUNT[i];
    }
    return three;
}
bool PROFILE:: operator < (PROFILE one){
    long sum1 =0 , sum2 = 0;
    for(int i =0; i < this->NUMACC;i++){
        sum1 += this->ACCOUNT[i];
    }
    for(int i =0; i < one.NUMACC;i++){
        sum2 += one.ACCOUNT[i];
    }
    return sum1 < sum2;
}
bool PROFILE:: operator > (PROFILE one){
    long sum1 =0 , sum2 = 0;
    for(int i =0; i < this->NUMACC;i++){
        sum1 += this->ACCOUNT[i];
    }
    for(int i =0; i < one.NUMACC;i++){
        sum2 += one.ACCOUNT[i];
    }
    return sum1 > sum2;

}
bool PROFILE:: operator ==(PROFILE one){
    long sum1 =0 , sum2 = 0;
    for(int i =0; i < this->NUMACC;i++){
        sum1 += this->ACCOUNT[i];
    }
    for(int i =0; i < one.NUMACC;i++){
        sum2 += one.ACCOUNT[i];
    }
    return sum1 == sum2;
}
bool PROFILE:: operator != (PROFILE one){
    long sum1 =0 , sum2 = 0;
    for(int i =0; i < this->NUMACC;i++){
        sum1 += this->ACCOUNT[i];
    }
    for(int i =0; i < one.NUMACC;i++){
        sum2 += one.ACCOUNT[i];
    }
    return sum1 != sum2;
}