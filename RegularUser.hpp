#ifndef REGULAR_USER_H
#define REGULAR_USER_H

#include "User.hpp"
#include "Ticket.hpp"
#include "PaymentMethod.hpp"

class RegularUser : public CustomerC
{
protected:
    PaymentMethod* payment;

public:
    RegularUser(const string& mail, uint8_t phoneNum) : CustomerC(mail,phoneNum), payment(nullptr)
    {}

    void setPaymentMethod(PaymentMethod* payment) {
        this->payment = payment;
    }

    void pay(Ticket ticket) {
        payment->pay(ticket);
    }
};

#endif