#ifndef USER_HPP
#define USER_HPP

#include <iostream>
#include <string>
#include <vector>
#include "Movie.hpp"

using namespace std;

class CustomerC{
	private:
		/***** attributes ******/
		string m_mail;
		uint8_t m_phoneNum;

	public:
		/***** constructor *****/
		CustomerC( const string& mail, uint8_t phoneNum);

		/******** setters ******/
		void SetMail(const string& mail);
		void SetPhoneNum(uint8_t phoneNum);

		/******** getters ******/
		const string& GetMail() const;
		const uint8_t& GetPhoneNum() const;
};
#endif
