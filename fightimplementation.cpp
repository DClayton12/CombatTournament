/*
 * Darnel Clayton
 * 8/23/2014
 * Objective: Exercise using OOD, polymorphism, and containers to create turn based fighting game tournament with standings.
 * CS 162
 */

#include <iostream>
#include <cstdlib>
#include "fightinterface.h"

using std::cout;
using std::cin;
using std::endl;
using std::string;

namespace combat{

fighter::fighter(){
armor=3;
health=5;
venom=false;
owner=" ";
place=NULL;}

fighter::fighter(int newArmor,int newHealth){
armor=newArmor;
health=newHealth;
venom=false;
owner=" ";
place=NULL;}

void fighter::setHealth(int &newHealth){
health=newHealth;}

void fighter::setHealth(int &newHealth,bool &venom){
health=newHealth;
if(venom==true){
health--;
cout<<"* INFECTED WITH VENOM * 1 HEALTH POINTED DEDUCTED!"<<endl;}
}

void fighter::setHealth(bool &venom){
if(venom==true){
health--;
cout<<"* INFECTED WITH VENOM * 1 HEALTH POINTED DEDUCTED!"<<endl;}
}

void fighter::setVenom(){venom=true;}

void fighter::setArmor(int &newArmor){
armor=newArmor;}

void fighter::setOwner(string Player){
owner=Player;}

void fighter::setPlace(int placeFinished){
place=placeFinished;}

int fighter::getHealth(){return health;}

int fighter::getArmor(){return armor;}

bool fighter::getVenom(){return venom;}

string fighter::getOwner(){return owner;}

int fighter::getPlace(){return place;}

goblin::goblin():fighter(3,8){}

barbarian::barbarian():fighter(0,12){}

reptile::reptile():fighter(7,18){}

bluemen::bluemen():reptile(3,12){}

megaman::megaman():barbarian(5,15){}

fighter::~fighter(){}

goblin::~goblin(){
cout<<"GOBLIN OBJECT DELETED. MEMORY RETURNED TO FREESTORE."<<endl;}

barbarian::~barbarian(){
cout<<"BARBARIAN OBJECT DELETED. MEMORY RETURNED TO FREESTORE."<<endl;}

reptile::~reptile(){
cout<<"REPTILE OBJECT DELETED. MEMORY RETURNED TO FREESTORE."<<endl;}

bluemen::~bluemen(){
cout<<"BLUEMEN OBJECT DELETED. MEMORY RETURNED TO FREESTORE."<<endl;}

megaman::~megaman(){
cout<<"MEGAMAN OBJECT DELETED. MEMORY RETURNED TO FREESTORE."<<endl;}

goblin::goblin(int newArmor,int newHealth):fighter(newArmor,newHealth){
//Absolute C++ page 624
}

barbarian::barbarian(int newArmor,int newHealth):fighter(newArmor,newHealth){}

reptile::reptile(int newArmor,int newHealth):fighter(newArmor,newHealth){}

bluemen::bluemen(int newArmor,int newHealth):reptile(newArmor,newHealth){}

megaman::megaman(int newArmor,int newHealth):barbarian(newArmor,newHealth){}

int goblin::attack(){
srand(time(0));
int damage=rand()%6+1;//1st dice roll
damage=damage+(rand()%6+1);//2nd dice roll
if(damage==1||damage==3){
cout<<"* DOUBLE DAMAGE * BARBEDWIRED BAT SWUNG"<<endl;
damage=damage*2;
return damage;}
else{
cout<<"BAT SWUNG"<<endl;}
//cout<<"GOBLIN ATTACK member function in action!"<<endl; //UNcomment to validate this member function is being invoked.
return damage;}

int barbarian::attack(){
srand(time(0));
int damage=rand()%6+1;//1st dice roll
damage=damage+(rand()%6+1);//2nd dice roll
if(damage==1||damage==2){
cout<<"* DOUBLE DAMAGE * LEAD PIPE SWUNG"<<endl;
damage=damage*2;
return damage;}
else{
cout<<"PIPE SWUNG"<<endl;}
//cout<<"BARBARIAN ATTACK member function in action!"<<endl; //UNcomment to validate this member function is being invoked.
return damage;}

int reptile::attack(){
srand(time(0));
int damage=rand()%6+1;//1st dice roll
damage=damage+(rand()%6+1);//2nd dice roll
damage=damage+(rand()%6+1);//3rd dice roll
if(damage==2){
cout<<"* DOUBLE DAMAGE * CLAWED TWICE"<<endl;
damage=damage*2;
return damage;}
else{
cout<<"CLAWED"<<endl;}
//cout<<"REPTILE ATTACK member function in action!"<<endl; //UNcomment to validate this member function is being invoked.
return damage;}

int bluemen::attack(){
srand(time(0));
int damage=rand()%10+1;//1st dice roll
damage=damage+(rand()%10+1);//2nd dice roll
if(damage==1){
cout<<"* DOUBLE DAMAGE * SWORD SWUNG"<<endl;
damage=damage*2;
return damage;}
else{
cout<<"TENNIS RACKET SWUNG"<<endl;}
//cout<<"BLUEMEN ATTACK member function in action!"<<endl; //UNcomment to validate this member function is being invoked.
return damage;}

int megaman::attack(){
srand(time(0));
int damage=rand()%5+1;//1st dice roll
damage=damage+(rand()%5+1);//2nd dice roll
damage=damage+(rand()%5+1);//3rd dice roll
damage=damage+(rand()%5+1);//4th dice roll
if(damage==1){
cout<<"* DOUBLE DAMAGE * PLASMA BLAST"<<endl;
damage=damage*2;
return damage;}
else{
cout<<"IRON FIST PUNCH"<<endl;}
//cout<<"MEGAMAN ATTACK member function in action!"<<endl; //UNcomment to validate this member function is being invoked.
return damage;}

int goblin::defense(){
srand(time(0));
int deflect=rand()%6+1;//1st dice roll
//cout<<"GOBLIN DEFENSE member function in action!"<<endl; //UNcomment to validate this member function is being invoked.
return deflect;}

int barbarian::defense(){
srand(time(0));
int deflect=rand()%6+1;//1st dice roll
deflect=deflect+(rand()&6+1);//2nd dice roll
//cout<<"BARBARIAN DEFENSE member function in action!"<<endl; //UNcomment to validate this member function is being invoked.
return deflect;}

int reptile::defense(){
srand(time(0));
int deflect=rand()%6+1;//1st dice roll
//cout<<"REPTILE DEFENSE member function in action!"<<endl; //UNcomment to validate this member function is being invoked.
return deflect;}

int bluemen::defense(){
srand(time(0));
int deflect=rand()%6+1;//1st dice roll
deflect=deflect+(rand()&6+1);//2nd dice roll
deflect=deflect+(rand()&6+1);//3rd dice roll
//cout<<"BLUEMEN DEFENSE member function in action!"<<endl; //UNcomment to validate this member function is being invoked.
return deflect;}

int megaman::defense(){
srand(time(0));
int deflect=rand()%5+1;//1st dice roll
//cout<<"MEGAMAN DEFENSE member function in action!"<<endl; //UNcomment to validate this member function is being invoked.
return deflect;}

void optionCheck(int &x){
        while(cin.fail()){//Check that input in numerical and 1,2,3,4,or 5. Will loop till input is satisfactory.
        cin.fail();
        cout<<"ERROR: Selection must be either numerical.\n";//Alert user.
        cin.clear();//Clear stream.
        cin.ignore(9999,'\n');
        cout<<"User, please reenter your selection."<<endl;
        cin>>x;}//Re-enter input.
        while(x<1||x>5){
        cin.fail();
        cout<<"ERROR: option must be either [1],[2],[3],[4], OR [5].\n";//Alert user.
        cin.clear();//Clear stream.
        cin.ignore(9999,'\n');
        cout<<"User, please reenter your selection."<<endl;
        cin>>x;}//Re-enter input.
}

int menu(){
cout<<"SELECT [1] GOBLIN(1st),MEGAMAN(2nd),AND REPTILE(3rd)\n"
"SELECT [2] BARBARIAN(1st),REPTILE(2nd),AND GOBLIN(3rd)\n"
"SELECT [3] REPTILE(1st),GOBLIN,(2nd),AND BARBARIAN(3rd)\n"
"SELECT [4] to be a MEGAMAN(1st),MEGAMAN(2nd),AND MEGAMAN(3rd)\n"
"SELECT [5] to be a BLUEMAN(1st),BARBARIAN(2nd),AND REPTILE(3rd)\n";
int userPICK;
cin>>userPICK;
optionCheck(userPICK);
return userPICK;}

void battlemode(fighter *player1, fighter *player2){
int action, p1damage,p2damage,p1defense,p2defense,p1health,p2health;
bool venom1=false,venom2=false;
while(player1->getHealth()>0&&player2->getHealth()>0){

cout<<"*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n"
"PLAYER 1	        You have "<<player1->getHealth()<<" HEALTH remaining.\n";
if(player2->getVenom()==true){
cout<<"                       You are INFECTED WITH VENOM!! (-1  HEALTH).\n";}
cout<<"		    Opponest has "<<player2->getHealth()<<" HEALTH remaining.\n"
"Input [1],[2],[3] OR [4] to ATTACK!\n";
cin>>action;
optionCheck(action);
p2health=player2->getHealth();
p1damage=player1->attack();
cout<<"PLAYER 1 ROLLS "<<p1damage<<" FOR ATTACK DAMAGE!"<<endl;

p2defense=player2->defense();
cout<<"PLAYER 2 HAS "<<player2->getArmor()<<" POINTS OF UNBREAKABLE ARMOR!"<<endl;
p1damage=p1damage-player2->getArmor();
cout<<"PLAYER 2 ROLLS "<<p2defense<<" FOR DEFENSE!"<<endl;

p1damage=p1damage-p2defense;
p2health=p2health-p1damage;

if(p1damage>0){
cout<<"* HIT * "<<p1damage<<" points of damage done."<<endl;
player2->setHealth(p2health,venom1);
	if(p1damage>4){
		player1->setVenom();
		venom1=player1->getVenom();}
}
else{
cout<<"* ATTACK DEFENDED *"<<endl;
player2->setHealth(venom1);}

if(player2->getHealth()>0){
cout<<"*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n"
"PLAYER 2               You have "<<player2->getHealth()<<" HEALTH remaining.\n";
if(player1->getVenom()==true){
cout<<"                       You are INFECTED WITH VENOM!! (-1  HEALTH).\n";}
cout<<"                   Opponest has "<<player1->getHealth()<<" HEALTH remaining.\n"
"Input [1],[2],[3] OR [4] to ATTACK!\n";
cin>>action;
optionCheck(action);
p1health=player1->getHealth();
p2damage=player2->attack();
cout<<"PLAYER 2 ROLLS "<<p2damage<<" FOR ATTACK DAMAGE!"<<endl;

p1defense=player1->defense();
cout<<"PLAYER 1 HAS "<<player1->getArmor()<<" POINTS OF UNBREAKABLE ARMOR!"<<endl;
p2damage=p2damage-player1->getArmor();
cout<<"PLAYER 1 ROLLS "<<p1defense<<" FOR DEFENSE!"<<endl;

p2damage=p2damage-p1defense;
p1health=p1health-p2damage;

if(p2damage>0){
cout<<"* HIT * "<<p2damage<<" points of damage done."<<endl;
player1->setHealth(p1health,venom2);
	if(p2damage>4){
                player2->setVenom();
		venom2=player2->getVenom();}
}
else{
cout<<"* ATTACK DEFENDED *"<<endl;
player1->setHealth(venom2);}

}

}
if(player1->getHealth()<1){
	cout<<"*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n"
	"PLAYER 1 has been defeated!\n"
	"PLAYER 2 wins round and survives to fight again!\n"
	<<player2->getHealth()<<" health points remaining \n"
	"*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n";

}	
if(player2->getHealth()<1){
        cout<<"*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n"
        "PLAYER 2 has been defeated!\n"
	"PLAYER 1 wins round and survives to fight again!\n"
	<<player1->getHealth()<<" health points remaining \n"
        "*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n";}
}

void tourney(vector<fighter*> team1, vector<fighter*> team2,list<fighter*> fallen1, list<fighter*> fallen2){
int standing=6;//Assigned to defeated fighter and decremented to track standings.
while(team1.size()>0&&team2.size()>0){

cout<<endl<<" COMBATANTS ENTER, GET READY, FIIIIIIGHT! "<<endl<<endl;

battlemode(team1.front(),team2.front());// Single call to battlemode to fight head of each team.

if(team1.front()->getHealth()<1){
	team2.push_back(team2.front());
	team2.erase(team2.begin());
	
	team1.front()->setOwner("Player 1");
	team1.front()->setPlace(standing);
	fallen1.push_back(team1.front());
        team1.erase(team1.begin());}

if(team2.front()->getHealth()<1){
	team1.push_back(team1.front());
	team1.erase(team1.begin());

	team2.front()->setOwner("Player 2");
        team2.front()->setPlace(standing);   
	fallen2.push_back(team2.front());
	team2.erase(team2.begin());}

standing--;
}

if(team1.size()>=2){//Execute where 2+ fighters from team1 survive.
while(team1.size()>1){
cout<<endl<<" * PLAYER 1, YOU HAVE 2 OR MORE FIGHTERS LEFT. NOW THEY FIGHT FOR THE CHAMPIONSHIP! * "<<endl;
battlemode(team1.front(),team1.back());

if(team1.front()->getHealth()<1){
	team1.front()->setOwner("Player 1");
        team1.front()->setPlace(standing);
        fallen1.push_back(team1.front());
        team1.erase(team1.begin());}

if(team1.back()->getHealth()<1){
	team1.back()->setOwner("Player 1");
	team1.back()->setPlace(standing);
	fallen1.push_back(team1.back());
	team1.pop_back();}

standing--;}
}

if(team2.size()>=2){//Execute where 2+ survivors on team 2.
while(team2.size()>1){
cout<<endl<<" * PLAYER 2, YOU HAVE 2 OR MORE FIGHTERS LEFT. NOW THEY FIGHT FOR THE CHAMPIONSHIP! * "<<endl;
battlemode(team2.front(),team2.back());

if(team2.front()->getHealth()<1){
        team2.front()->setOwner("Player 2");
        team2.front()->setPlace(standing);
        fallen2.push_back(team2.front());
	team2.erase(team2.begin());}

if(team2.back()->getHealth()<1){
        team2.back()->setOwner("Player 2");
        team2.back()->setPlace(standing);
        fallen2.push_back(team2.back());
	team2.pop_back();}

standing--;}
}

if(team1.size()==1){
team1.front()->setOwner("Player 1");
team1.front()->setPlace(1);
fallen1.push_back(team1.front());
team1.erase(team1.begin());}

if(team2.size()==1){
team2.front()->setOwner("Player 2");
team2.front()->setPlace(1);
fallen2.push_back(team2.front());
team2.erase(team2.begin());}

//Display standings and return memory to freestore.
for(std::list<fighter*>::iterator itr1=fallen1.begin();itr1!=fallen1.end();itr1++){
cout<<(*itr1)->getOwner()<<" placed in position: "<<(*itr1)->getPlace()<<endl;
delete *itr1;}

for(std::list<fighter*>::iterator itr2=fallen2.begin();itr2!=fallen2.end();itr2++){
cout<<(*itr2)->getOwner()<<" placed in position: "<<(*itr2)->getPlace()<<endl;
delete *itr2;}

}

}
