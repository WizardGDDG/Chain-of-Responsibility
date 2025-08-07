#pragma once
#include <iostream>
#include "SupportHandler.h"
class JuniorSupport : public SupportHandler
{
private:
	SupportHandler* nextHandler;
public:
	JuniorSupport(SupportHandler* next = nullptr) : nextHandler(next) {}
	 
	bool handleRequest(Request request) override
	{
		cout << "Клиентский запрос: " << request.text << endl;
		cout << "Младший специалист" << endl;

		
		if (false) {
			cout << "Проблема успешно решена" << endl;
			return true;
		}
		else {
			cout << "К сожалению, я не могу решить эту проблему" << endl;
			if (nextHandler != nullptr)
				return nextHandler->handleRequest(request);
			return false;
		}
	}
};

