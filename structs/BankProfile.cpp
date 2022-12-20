#include "BankProfile.h"

void PROFILE:: OPEN_ACC(int money, int pin){
<<<<<<< Updated upstream
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
=======
    if (pin == this->pin){
        if (this->numacc < MAXACC){
            this->account[numacc] = money;
            this->numacc++;
        }
        else{cout << "You can't create new account"<<endl;}
    }
    else {cout << "incorrect pin"<< endl;}
}

 PROFILE::PROFILE (string name,string surname, string pass, int pin) {
    if (this-> name == " " && this-> surname == " " && this-> pasword == " ") {
        this->name = name;
        this->surname = surname;
        this->pasword = pass;
        this->pin = pin;
>>>>>>> Stashed changes
    }
    else {cout << "You can't registred new profile"<<endl;}
}

void PROFILE::ADD_ACC(int money, int number){
<<<<<<< Updated upstream
    if(number >= MAXACC || number > this->NUMACC || number < 1)
        cout << "Uncorrect number account"<<endl;
    else {
        this->ACCOUNT[number-1] += money;
=======
    if(number >= MAXACC || number > this->numacc || number < 1)
        cout << "Uncorrect number account"<<endl;
    else {
        this->account[number-1] += money;
>>>>>>> Stashed changes
    }
}

PROFILE PROFILE:: operator + (PROFILE one){
<<<<<<< Updated upstream
    PROFILE three;
    three.NAME = one.NAME + "/" + this->NAME;
    three.SURNAME = one.SURNAME + "/" + this->SURNAME;
    three.PASSWORD = one.PASSWORD;
    three.PIN = this->PIN;
    three.NUMACC = MAXACC;
    for(int i = 0; i<MAXACC; i++){
        three.ACCOUNT[i] = one.ACCOUNT[i] + this->ACCOUNT[i];
=======
    PROFILE three = PROFILE(one.name + "+" + this->name,surname = one.surname + "+" + this->surname,
                            one.pasword + this->pasword ,one.pin+this->pin );
    three.numacc = MAXACC;
    for(int i = 0; i<MAXACC; i++){
        three.account[i] = one.account[i] + this->account[i];
>>>>>>> Stashed changes
    }
    return three;
}
PROFILE PROFILE:: operator - (PROFILE one){
<<<<<<< Updated upstream
    PROFILE three;
    three.NAME = this->NAME;
    three.SURNAME = this->SURNAME;
    three.PASSWORD = this->PASSWORD;
    three.PIN = this->PIN;
    for(int i = 0; i<MAXACC; i++){
        three.ACCOUNT[i] = this->ACCOUNT[i] - one.ACCOUNT[i];
=======
    PROFILE three = PROFILE(one.name + "-" + this->name,surname = one.surname + "-" + this->surname,
                            one.pasword + this->pasword ,one.pin+this->pin );
    for(int i = 0; i<MAXACC; i++){
        three.account[i] = this->account[i] - one.account[i];
>>>>>>> Stashed changes
    }
    return three;
}
bool PROFILE:: operator < (PROFILE one){
    long sum1 =0 , sum2 = 0;
<<<<<<< Updated upstream
    for(int i =0; i < this->NUMACC;i++){
        sum1 += this->ACCOUNT[i];
    }
    for(int i =0; i < one.NUMACC;i++){
        sum2 += one.ACCOUNT[i];
=======
    for(int i =0; i < this->numacc;i++){
        sum1 += this->account[i];
    }
    for(int i =0; i < one.numacc;i++){
        sum2 += one.account[i];
>>>>>>> Stashed changes
    }
    return sum1 < sum2;
}
bool PROFILE:: operator > (PROFILE one){
    long sum1 =0 , sum2 = 0;
<<<<<<< Updated upstream
    for(int i =0; i < this->NUMACC;i++){
        sum1 += this->ACCOUNT[i];
    }
    for(int i =0; i < one.NUMACC;i++){
        sum2 += one.ACCOUNT[i];
=======
    for(int i =0; i < this->numacc;i++){
        sum1 += this->account[i];
    }
    for(int i =0; i < one.numacc;i++){
        sum2 += one.account[i];
>>>>>>> Stashed changes
    }
    return sum1 > sum2;

}
bool PROFILE:: operator ==(PROFILE one){
    long sum1 =0 , sum2 = 0;
<<<<<<< Updated upstream
    for(int i =0; i < this->NUMACC;i++){
        sum1 += this->ACCOUNT[i];
    }
    for(int i =0; i < one.NUMACC;i++){
        sum2 += one.ACCOUNT[i];
=======
    for(int i =0; i < this->numacc;i++){
        sum1 += this->account[i];
    }
    for(int i =0; i < one.numacc;i++){
        sum2 += one.account[i];
>>>>>>> Stashed changes
    }
    return sum1 == sum2;
}
bool PROFILE:: operator != (PROFILE one){
    long sum1 =0 , sum2 = 0;
<<<<<<< Updated upstream
    for(int i =0; i < this->NUMACC;i++){
        sum1 += this->ACCOUNT[i];
    }
    for(int i =0; i < one.NUMACC;i++){
        sum2 += one.ACCOUNT[i];
=======
    for(int i =0; i < this->numacc;i++){
        sum1 += this->account[i];
    }
    for(int i =0; i < one.numacc;i++){
        sum2 += one.account[i];
>>>>>>> Stashed changes
    }
    return sum1 != sum2;
}