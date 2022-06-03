enum FighterStatus {Invalid, Alive, Dead};

class MinimalFighter{
	private:
		int mHp;
		int mPower;
		FighterStatus mStatus;
	public:
		MinimalFighter();
		MinimalFighter(int, int);
		
		int hp()const;
		int power()const;
		FighterStatus status()const;
		void setHp(int);
		void hit(MinimalFighter*);
		void attack(MinimalFighter*);
		void fight(MinimalFighter*);
};