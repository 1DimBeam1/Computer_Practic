#include "BankProfile.h"

void PROFILE:: OPEN_ACC(int money, int pin){
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
    }
    else {cout << "You can't registred new profile"<<endl;}
}

void PROFILE::ADD_ACC(int money, int number){
    if(number >= MAXACC || number > this->numacc || number < 1)
        cout << "Uncorrect number account"<<endl;
    else {
        this->account[number-1] += money;
    }
}

PROFILE PROFILE:: operator + (PROFILE one){
    PROFILE three = PROFILE(one.name + "+" + this->name,surname = one.surname + "+" + this->surname,
                            one.pasword + this->pasword ,one.pin+this->pin );
    three.numacc = MAXACC;
    for(int i = 0; i<MAXACC; i++){
        three.account[i] = one.account[i] + this->account[i];
    }
    return three;
}
PROFILE PROFILE:: operator - (PROFILE one){
    PROFILE three = PROFILE(one.name + "-" + this->name,surname = one.surname + "-" + this->surname,
                            one.pasword + this->pasword ,one.pin+this->pin );
    for(int i = 0; i<MAXACC; i++){
        three.account[i] = this->account[i] - one.account[i];
    }
    return three;
}
bool PROFILE:: operator < (PROFILE one){
    long sum1 =0 , sum2 = 0;
    for(int i =0; i < this->numacc;i++){
        sum1 += this->account[i];
    }
    for(int i =0; i < one.numacc;i++){
        sum2 += one.account[i];
    }
    return sum1 < sum2;
}
bool PROFILE:: operator > (PROFILE one){
    long sum1 =0 , sum2 = 0;
    for(int i =0; i < this->numacc;i++){
        sum1 += this->account[i];
    }
    for(int i =0; i < one.numacc;i++){
        sum2 += one.account[i];
    }
    return sum1 > sum2;

}
bool PROFILE:: operator ==(PROFILE one){
    long sum1 =0 , sum2 = 0;
    for(int i =0; i < this->numacc;i++){
        sum1 += this->account[i];
    }
    for(int i =0; i < one.numacc;i++){
        sum2 += one.account[i];
    }
    return sum1 == sum2;
}
bool PROFILE:: operator != (PROFILE one){
    long sum1 =0 , sum2 = 0;
    for(int i =0; i < this->numacc;i++){
        sum1 += this->account[i];
    }
    for(int i =0; i < one.numacc;i++){
        sum2 += one.account[i];
    }
    return sum1 != sum2;
}