// Write a program to accept the annual income from the user and calculate tax based of the below conditions:

// In each case provide standard deduction of 50,000 INR, calculate taxable income by subtracting 50,000 form annual income.
// if the taxable income is:
// less than equal to 3,00,000 INR tax rate will be 0%.
// greater than 3,00,000 INR and less than or equal to 5,00,000 INR tax rate will be 5%.
// greater than 5,00,000 INR and less than or equal to 10,00,000 INR tax rate will be 15%.
// greater than 10,00,000 INR and less than or equal to 15,00,000 INR tax rate will be 20%.
// greater than 15,00,000 INR and less than or equal to 25,00,000 INR tax rate will be 25%.
// greater than 25,00,000 INR tax rate will be 30%.
// On the basis of the condition calculate tax amount and print.
#include<iostream>
using namespace std;
int main() {
    cout << " Enter your annual income in INR " << "\n";
    float annual_income = 0;
    cin >> annual_income;
    cout << "Standard deduction is 50,000 INR" << "\n";
    float taxable_income = annual_income - 50000 ;
    cout << " taxable income = " << taxable_income << "\n";
    if (taxable_income <= 300000) {
        float tax_ammount = (taxable_income * 0) / 100 ;
        cout << "Tax rate is 0% and tax_ammount = " << tax_ammount <<  "\n";
    }
    else if(taxable_income > 300000 &&  taxable_income <= 500000){
        float tax_ammount = (taxable_income * 5) / 100 ;
        cout << "Tax rate is 5% and tax_ammount = " << tax_ammount << "\n";
    }
    else if(taxable_income > 500000 &&  taxable_income <= 1000000){
        float tax_ammount = (taxable_income * 15) / 100 ;
        cout << "Tax rate is 15% and tax_ammount = " << tax_ammount << "\n";
    }
    else if(taxable_income > 1000000 &&  taxable_income <= 1500000){
        float tax_ammount = (taxable_income * 20) / 100 ;
        cout << "Tax rate is 20% and tax_ammount = " << tax_ammount << "\n";
    }
    else if(taxable_income > 1500000 &&  taxable_income <= 2500000){
        float tax_ammount = (taxable_income * 25) / 100 ;
        cout << "Tax rate is 25% and tax_ammount = " << tax_ammount << "\n";
    }
    else{
        float tax_ammount = (taxable_income * 30) / 100 ;
        cout << "Tax rate is 30% and tax_ammount = " << tax_ammount << "\n";
    }
    return 0;
}