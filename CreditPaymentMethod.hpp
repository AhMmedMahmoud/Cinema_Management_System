#include "Ticket.hpp"
#include "PaymentMethod.hpp"

class CreditPaymentMethod : public PaymentMethod
{
public:
    void pay(Ticket ticket,  int discount = 0) override {
        // logic to credit payment method
    }
};