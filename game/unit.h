#pragma once
#include "game.h"

class Unit
{
protected:
	struct HealStats
	{
		int health;
		int maxHealt;
		int minHealh;
	};
	struct DamageStats
	{
		int damage;
		int maxDamage;
		int minDamage;
	};
	HealStats *healStats;
	DamageStats *damageStats;
	std::string handle;

public:
	Unit();
	~Unit();

	virtual int decrease_health(int dmg) = 0; // damage yourself
	virtual void die(void) = 0;
	virtual int attack(Unit *unit) = 0; 
	virtual int heal(Unit *unit) = 0;

	virtual std::string get_handle() = 0;
	virtual int get_health() = 0;
	virtual int get_damage() = 0;
};