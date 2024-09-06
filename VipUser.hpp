#ifndef VIP_USER_HPP
#define VIP_USER_HPP

#include "User.hpp"
#include "Ticket.hpp"
#include "PaymentMethod.hpp"

class VipUser : public CustomerC
{
protected:
    PaymentMethod* payment;

public:
    VipUser(const string& mail, uint8_t phoneNum) : CustomerC(mail,phoneNum), payment(nullptr)
    {}

    void setPaymentMethod(PaymentMethod* payment) {
        this->payment = payment;
    }

    void pay(Ticket ticket) {
        payment->pay(ticket, 25);
    }
};

#endif