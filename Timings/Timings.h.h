#pragma once

#include "../Globals.h"

// This header file contains the behavouir detection. 


//Time based check



inline std::map<int, int> IDToTimeMap{ {1, 120}, };  // ID TO TIME ALLOWED TO TAKE MAP 

// https://en.cppreference.com/w/cpp/container/map

typedef struct TimeHandler
{
	int StartTime = 0;
	int EndTime = 0;
	int ID = 0;

	TimeHandler(const int Start, const int End, const int id);

};

//WORKS BY CALCULATING THE TIME TAKEN TO EXECUTE A SPECFIC CALL. 
class TimerBehavoirCheck
{
	int CallId = 0;
	int TimerStart = 0;
	void HandleTiming();
//	void SendTiming();


public:
	TimerBehavoirCheck(const int ID);
	void EndTimer();

};