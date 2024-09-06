#include "Ticket.hpp"
#include "PaymentMethod.hpp"

class PaypalPaymentMethod : public PaymentMethod
{
public:
    void pay(Ticket ticket,  int discount = 0) override {
        // logic to paypal payment method
    }
};