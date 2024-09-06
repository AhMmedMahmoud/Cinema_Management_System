#include "Ticket.hpp"

class PaymentMethod
{
public:
    virtual void pay(Ticket ticket, int discount = 0) = 0;
};