#ifndef PAYPAL_PAYMENT_METHOD_H
#define PAYPAL_PAYMENT_METHOD_H

#include "Ticket.hpp"
#include "PaymentMethod.hpp"

class PaypalPaymentMethod : public PaymentMethod
{
public:
    void pay(Ticket ticket,  int discount = 0) override {
        // logic to paypal payment method
    }
};

#endif