#include <iostream>
#include "ManagerSupport.h"
#include "SeniorSupport.h"
#include "JuniorSupport.h"
#include "Request.h"
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	Request r = Request();
	ManagerSupport ms = ManagerSupport();
	SeniorSupport ss = SeniorSupport(&ms);
	JuniorSupport js = JuniorSupport(&ss);
	
	
	r.inputRequest();
	js.handleRequest(r);
	
}
