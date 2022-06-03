#include "clock_time.h"

class Clock{
	public:
		Clock(int, int, int, double);
		void reset();
		void tick();
		virtual void displayTime()=0;
	protected:
		ClockTime _clockTime;
		double _driftPerSecond;
		double _totalDrift;
};
class NaturalClock:public Clock{
	public:
		NaturalClock(int, int, int, double);
};
class MechanicalClock:public Clock{
	public:
		MechanicalClock(int, int, int, double);
};
class DigitalClock:public Clock{
	public:
		DigitalClock(int, int, int, double);
};
class QuantumClock:public Clock{
	public:
		QuantumClock(int, int, int, double);
};


class SundialClock:public NaturalClock{
	public:
		SundialClock(int, int, int);
		virtual void displayTime();
};
class CuckooClock:public MechanicalClock{
	public:
		CuckooClock(int, int, int);
		virtual void displayTime();
};
class GrandFatherClock:public MechanicalClock{
	public:
		GrandFatherClock(int, int, int);
		virtual void displayTime();
};
class WristClock:public DigitalClock{
	public:
		WristClock(int, int, int);
		virtual void displayTime();
};
class AtomicClock:public QuantumClock{
	public:
		AtomicClock(int, int, int);
		virtual void displayTime();
};