//--- Lesson 4.3 - Annual Bonus

#include<iostream>
#include<iomanip>

using namespace std;


int main(){
    
    double totalPay, bonus = 0;
    double salary, year;

    cout << "Enter your annual salary:\t₱ ";
    cin >> salary;
    cout << "Years of Service:\t\t";
    cin >> year;

    cout << "\n-----------------------------------------\n";
    
    if(year<5){
        bonus = salary * 0.01;
    }else{
        bonus = salary * 0.02;
    }

    totalPay = salary + bonus;
    cout << setprecision(2) << fixed;
    cout << "Annual Salary:\t\t\t₱ " << salary << "\n";
    cout << "Bonus:\t\t\t+\t₱ " << bonus;
    cout << "\n-----------------------------------------\n\n";

    cout << "Total Pay:\t\t\t₱ " << totalPay << "\n";

    return 0;
}