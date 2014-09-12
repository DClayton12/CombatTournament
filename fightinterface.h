/*
 * Darnel Clayton
 * 8/23/2014
 * Objective: Exercise using OOD, polymorphism, and containers to create turn based fighting game tournament with standings.
 * CS 162
 */

#ifndef FIGHTINTERFACE_H
#define FIGHTINTERFACE_H

#include <list>
#include <vector>

using std::vector;
using std::string;
using std::list;


namespace combat{
class fighter{
private:
	int health,armor,place;
	bool venom;
	string owner;
public:
	fighter();
	fighter(int newArmor,int newHealth);
	void setHealth(int &newHeatlh);
	void setHealth(int &newHealth,bool &venom);
	void setHealth(bool &venom);
	void setArmor(int &newArmor);
	void setVenom();
	void setOwner(string Player);
	void setPlace(int placeFinished);
	int getHealth();
	int getArmor();
	bool getVenom();
	string getOwner();
	int getPlace();
	virtual int attack()=0;
	virtual int defense()=0;
	virtual ~fighter();
};

class goblin : public fighter{
private:

public:
	goblin();
	goblin(int newArmor,int newHealth);
	int attack();
	int defense();
	~goblin();
};

class barbarian : public fighter{
private:

public:
	barbarian();
	barbarian(int newArmor,int newHealth);
	int attack();
        int defense();
	~barbarian();
};

class reptile : public fighter{
private:

public: 
	reptile();
	reptile(int newArmor,int newHealth);
	int attack();
        int defense();
	~reptile();
};

class bluemen : public reptile{
private:

public:
	bluemen();
	bluemen(int newArmor,int newHealth);
	int attack();
	int defense();	
	~bluemen();
};

class megaman : public barbarian{
private:

public:
	megaman();
	megaman(int newArmor,int newHealth);
	int attack();
        int defense();
        ~megaman();
};

void optionCheck(int &x);
int menu();
void battlemode(fighter *player1, fighter *player2);
void tourney(vector<fighter*> team1, vector<fighter*> team2,list<fighter*> fallen1, list<fighter*> fallen2);

}

#endif
