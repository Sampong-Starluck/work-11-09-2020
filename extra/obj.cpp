
#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <stdexcept>
#include <sstream>
#include "commision.h"

using namespace std;

commission::commission(const string &first, const string &last,
                    const string &ssn, double sale, double rate){
    firstName = first;
    lastName = last;
    socialSecurityNumber = ssn;
    setGrossSale(sale);
    setCommission(rate);
}
// set first name
void commission::setFirstName(const string& first)
{
    firstName = first;
}
string commission::getFirstName() const{
    return firstName;
}
//set last name
void commission::setLastName(const string& last)
{
    lastName = last;
}
string commission::getLastName() const{
    return lastName;
}
// set social security number
void commission::setSocialSecrityNumber(const string& ssn)
{
    socialSecurityNumber = ssn;
}
string commission::getSocialSecurityNumber() const{
    return socialSecurityNumber;
}
//set gross sale amount
void commission::setGrossSale(double sale)
{
    if (sale < 0.0)
    {
        throw invalid_argument("Gross sales must be >= 0.0");
    }
    grossSale = sale;
}
double commission::getGrossSale() const{
    return grossSale;
}
//set commission rate
void commission::setCommission(double rate)
{
    if (rate <= 0.0 || rate >= 1.0)
    {
        throw invalid_argument("Commission must be >0.0 and < 1.0");
    }
    commisionRate = rate;
}
double commission::getCommission() const{
    return commisionRate;
}
//calculate earnings
double commission::earning() const{
    return commisionRate * grossSale;
}
// return string representation of commission object
string commission::toString() const{
    ostringstream output;
    output << fixed << setprecision(2);
    output << "Commission employee: " << firstName << " " << lastName << endl;
    output << "Social Security Number: " << socialSecurityNumber << endl;
    output << "Gross Sales: " << grossSale << endl;
    output << "Commission Rate: " << commisionRate;
    return output.str();
}
int main()
{
    // instantiate a CommissionEmployee object
    commission employee{"Sue", "Jones", "222-22-2222", 10000, .06};

    // get commission employee data
    cout << fixed << setprecision(2); // set floating-point formatting
    cout << "Employee information obtained by get functions: \n"
         << "\nFirst name is " << employee.getFirstName()
         << "\nLast name is " << employee.getLastName()
         << "\nSocial security number is "
         << employee.getSocialSecurityNumber()
         << "\nGross sales is " << employee.getGrossSale()
         << "\nCommission rate is " << employee.getCommission() << endl;

    employee.setGrossSale(8000);   // set gross sales
    employee.setCommission(.1); // set commission rate
    cout << "\nUpdated employee information from function toString: \n\n"
         << employee.toString();

    // display the employee's earnings
    cout << "\n\nEmployee's earnings: $" << employee.earning() << endl;
}