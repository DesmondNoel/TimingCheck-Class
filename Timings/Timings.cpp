#include "Behavoir.h"


TimeHandler::TimeHandler(const int Start, const int End, const int ID)
{
	int TimeSpentExecuting = End - Start;

	if (IDToTimeMap[ID] < TimeSpentExecuting) //Something took too much time
	{
		IDToTimeMap.erase(ID);//ID REMOVED HERE 
		exit(1);
	}
}




TimerBehavoirCheck::TimerBehavoirCheck(const int ID)
{
	CallId = ID;
	TimerStart = GetTickCount64(); //This function can be hooked and it will make this entire class irrelevant

}

void TimerBehavoirCheck::HandleTiming()
{
	if (IDToTimeMap.find(this->CallId) == IDToTimeMap.end()) 
	{
		// exit here, key removed earlier
		exit(1);
	}
 
}

void TimerBehavoirCheck::EndTimer()
{
	TimeHandler(this->TimerStart, GetTickCount(), this->CallId);


	this->HandleTiming();
}
