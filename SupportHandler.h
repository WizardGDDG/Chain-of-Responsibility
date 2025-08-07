#pragma once
#include <iostream>
#include "Request.h"
class SupportHandler
{
public:
	virtual bool handleRequest(Request request) = 0;

};

