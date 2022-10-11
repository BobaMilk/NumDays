#include <iostream>
#include "NumDays.h"

NumDays::NumDays() {
    hoursWorked = 0;
    days = 0;
}
NumDays::NumDays(double hoursWorked) {
    this->hoursWorked = hoursWorked;
}
void NumDays::setHours(double hours) {
    hoursWorked = hours;
    days = hoursWorked / 8;
}
void NumDays::convert() {
    days = hoursWorked / 8;
}
double NumDays::getHours() {
    return hoursWorked;
}
double NumDays::getDays() {
    return days;
}
/*
NumDays NumDays::operator+(NumDays const& obj) {
    NumDays brandNew;
    brandNew.hoursWorked = hoursWorked + obj.hoursWorked;
    brandNew.days = days + obj.days;

    return brandNew;
}

NumDays NumDays::operator-(NumDays const& obj) {
    NumDays brandNew;
    brandNew.hoursWorked = hoursWorked - obj.hoursWorked;
    brandNew.days = days - obj.days;

    return brandNew;
}

void NumDays::operator++() {
    hoursWorked += 1;
    days = hoursWorked / 8;
}

void NumDays::operator--() {
    hoursWorked -= 1;
    days = hoursWorked / 8;
}
*/
