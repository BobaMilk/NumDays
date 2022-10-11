#ifndef NUMDAYS_H_
#define NUMDAYS_H_

class NumDays {
public:
    NumDays();
    NumDays(double hoursWorked);
    void setHours(double hours);
    void convert();
    double getHours();
    double getDays();
    /*NumDays operator+(NumDays const& obj);
    NumDays operator-(NumDays const& obj);
    void operator++();
    void operator--();
    */
private:
    double hoursWorked;
    double days;
};

#endif
