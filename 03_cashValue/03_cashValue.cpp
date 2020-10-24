//--- Lesson 4.3 - Cash Value

#include<iostream>
#include<iomanip>
using namespace std;


int main(){
    
    double deposit=25000;
    double cashVal, interest, rate;
    double month;

    cout << "Deposit: \t\t₱ 25000.00\n";
    cout << "Duration (months):\t";
    cin >> month;
    
    if(month<6){
        rate = 0;
    }else if(month>=6 && month<=12){
        rate = 0.01;
    }else if(month>=13 && month<=18){
        rate = 0.02;
    }else if(month>=19 && month<=24){
        rate = 0.035;
    }else{
        cout << "\n\nnot applicable\n\n";
        return 0;
    }

    interest = deposit * rate;
    cashVal = deposit + interest;

    cout << "Interest Rate:\t\t" << rate << "\n\n";
    cout << setprecision(2) << fixed;
    cout << "Total cash value:\t₱ " << cashVal << "\n";
    return 0;
}