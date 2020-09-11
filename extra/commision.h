#ifndef COMMISION_H
# define COMMISION_H

#include <string>
class commission
{
private:
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;
    double grossSale;
    double commisionRate;

public:
    commission(const std::string &, const std::string &,
            const std::string &, double = 0.0, double = 0.0);

    void setFirstName(const std::string &);
    std::string getFirstName() const;

    void setLastName(const std::string &);
    std::string getLastName() const;

    void setSocialSecrityNumber(const std::string &);
    std::string getSocialSecurityNumber() const;

    void setGrossSale(double);
    double getGrossSale() const;

    void setCommission(double);
    double getCommission() const;

    double earning() const;
    std::string toString() const;
};

#endif