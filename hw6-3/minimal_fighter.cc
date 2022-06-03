#include "minimal_fighter.h"

MinimalFighter::MinimalFighter(){
	mHp= 0;
	mPower =0;
	mStatus = Invalid;
}
MinimalFighter::MinimalFighter(int _hp, int _power){
	mHp =_hp;
	mPower =_power;
	if(_hp==0){
		mStatus =Dead;
	}
	else{
		mStatus =Alive;
	}
}

int MinimalFighter::hp()const{
	return mHp;
}

int MinimalFighter::power()const{
	return mPower;
}

FighterStatus MinimalFighter::status()const{
	return mStatus;
}

void MinimalFighter::setHp(int _hp){
	mHp =_hp;
}

void MinimalFighter::hit(MinimalFighter* _enemy){
	if(this->mStatus==Alive){
		this->mHp -=_enemy->mPower;
		_enemy->mHp -=this->mPower;
		if(this->mHp<=0){
			this->mStatus=Dead;
		}
		if(_enemy->mHp<=0){
			_enemy->mStatus=Dead;
		}
	}
}

void MinimalFighter::attack(MinimalFighter* _target){
	if(this->mStatus ==Alive){
		_target->mHp -=this->mPower;
		this->mPower=0;
		if(_target->mHp<=0){
			_target->mStatus =Dead;
		}
	}
}

void MinimalFighter::fight(MinimalFighter* _enemy){
	if(this->mStatus ==Alive){
		while(this->mStatus ==Alive&& _enemy->mStatus==Alive){
			hit(_enemy);
		}
	}
}