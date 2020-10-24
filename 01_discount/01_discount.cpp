//--- Lesson 4.3 -Discount

#include<iostream>
#include<iomanip>

using namespace std;


int main(){

    double total, discount = 0;
    double age, purchasePrice;
    
    cout << "Enter Purchase Amount: \t₱ ";
    cin >> purchasePrice; 
    cout << "Enter Customer's Age: \t";
    cin >> age;
    
    if(age>=60){
        discount = purchasePrice * 0.2;
    }else{
        discount = 0;
    }

    total = purchasePrice - discount;
    cout << setprecision(2) << fixed;
    cout << "\n----------------------------------\n";
    cout << "Purchase:\t\t₱ " << purchasePrice << "\n";
    cout << "Discount:\t\t₱ " << discount;
    cout << "\n----------------------------------\n";
    cout << "Total Price:\t\t₱ " << total << "\n";

    return 0;
}