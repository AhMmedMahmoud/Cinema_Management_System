#include "User.hpp"

/***** constructor *****/
CustomerC::CustomerC( const string& mail, uint8_t phoneNum) : m_mail(mail),
                                                    m_phoneNum(phoneNum)
{}

/******** setters ******/
void CustomerC::SetMail(const string& mail) { m_mail = mail; };
void CustomerC::SetPhoneNum(uint8_t phoneNum) { m_phoneNum = phoneNum; }

/******** getters ******/
const string& CustomerC::GetMail() const { return m_mail; }
const uint8_t& CustomerC::GetPhoneNum() const { return m_phoneNum; } 
