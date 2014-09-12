/*
 * Darnel Clayton
 * 8/23/2014
 * CS 162
 * Overview: Exercise using OOD, polymorphism, and containers to create turn based fighting game tournament with standings.
 * gamefight.cpp
 */

#include <iostream>
#include "fightinterface.h"
#include <list>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using combat::fighter;
using combat::goblin;
using combat::barbarian;
using combat::reptile;
using combat::bluemen;
using combat::megaman;
using combat::menu;
using combat::battlemode;
using std::list;
using std::vector;
using combat::tourney;

int main(){
int p1armor,p1health,p2armor,p2health;

list<fighter*> fallen1;//Store fallen warriors for player 1 and 2. 
list<fighter*> fallen2;

cout<<"*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*~*\n"
"\t\tWELCOME TO THE STREETS OF RAGE!\n"
"\t\t * TOURNAMENT EDITION *\n"
"This is a 2 PLAYER turn based fighting game.\n"
"Each players selects a team of multiple fighters.\n"
"Players roll dice for attack and defense.\n"
"Attacks are defended if the defensive roll exceeds the aggressor's roll.\n"
"When a player successfully lands and attack greater than 4, Venom is activated!\n"
"1 health point deducted every turn when you are infected with venom!(Even when attack Evaded)\n"
"A player is defeated when health reaches 0.\n"
"When a warrior is defeated, they are no longer able to fight.\n"
"Victorious Fighter, goes to the back of the line and awaits to battle again!\n"
"Game is completed when one team's warriors are all defeated.\n"
"Input [1],[2],[3],[4],OR [5] to attack.\n"
"Experiment with different fighters and their various character traits!\n"
"One group warriors will be victorious!\n"
"FIGHT!\n"
"\n";

cout<<"PLAYER 1 SELECT YOUR COMBATANTS!\n";
int option1=menu();
cout<<"PLAYER 2 SELECT YOUR COMBATANTS!\n";
int option2=menu();

vector<fighter*> team1;
vector<fighter*> team2;

if(option1==1&&option2==1){//P1 PICKS TEAM1, P2 PICKS TEAM 1
goblin *GOBLIN1=new goblin;
megaman *MEGA1=new megaman;
reptile *REPT1=new reptile;
team1.push_back(GOBLIN1);
team1.push_back(MEGA1);
team1.push_back(REPT1);

goblin *GOBLIN2=new goblin;
megaman *MEGA2=new megaman;
reptile *REPT2=new reptile;
team2.push_back(GOBLIN2);
team2.push_back(MEGA2);
team1.push_back(REPT2);}

if(option1==1&&option2==2){//P1 PICKS TEAM1, P2 PICKS TEAM 2
goblin *GOBLIN1=new goblin;
megaman *MEGA1=new megaman;
reptile *REPT1=new reptile;
team1.push_back(GOBLIN1);
team1.push_back(MEGA1);
team1.push_back(REPT1);

barbarian *BARB2=new barbarian;
reptile *REPT2=new reptile;
goblin *GOBLIN2=new goblin;
team2.push_back(BARB2);
team2.push_back(REPT2);
team2.push_back(GOBLIN2);}

if(option1==1&&option2==3){//P1 PICKS TEAM1, P2 PICKS TEAM3
goblin *GOBLIN1=new goblin;
megaman *MEGA1=new megaman;
reptile *REPT1=new reptile;
team1.push_back(GOBLIN1);
team1.push_back(MEGA1);
team1.push_back(REPT1);

reptile *REPT2=new reptile;
goblin *GOBLIN2=new goblin;
barbarian *BARB2=new barbarian;
team2.push_back(REPT2);
team2.push_back(GOBLIN2);
team2.push_back(BARB2);}

if(option1==1&&option2==4){//P1 PICKS TEAM1, P2 PICKS TEAM4
goblin *GOBLIN1=new goblin;
megaman *MEGA1=new megaman;
reptile *REPT1=new reptile;
team1.push_back(GOBLIN1);
team1.push_back(MEGA1);
team1.push_back(REPT1);

megaman *MEGA2=new megaman;
megaman *MEGA3=new megaman;
megaman *MEGA4=new megaman;
team2.push_back(MEGA2);
team2.push_back(MEGA3);
team2.push_back(MEGA4);}

if(option1==1&&option2==5){//P1 PICKS TEAM1, P2 PICKS TEAM5
goblin *GOBLIN1=new goblin;
megaman *MEGA1=new megaman;
reptile *REPT1=new reptile;
team1.push_back(GOBLIN1);
team1.push_back(MEGA1);
team1.push_back(REPT1);

bluemen *BLUE2=new bluemen;
barbarian *BARB2=new barbarian;
reptile *REPT2=new reptile;
team2.push_back(BLUE2);
team2.push_back(BARB2);
team2.push_back(REPT2);}

if(option1==2&&option2==1){//P1 PICKS TEAM2, P2 PICKS TEAM1
barbarian *BARB1=new barbarian;
reptile *REPT1=new reptile;
goblin *GOBLIN1=new goblin;
team1.push_back(BARB1);
team1.push_back(REPT1);
team1.push_back(GOBLIN1);

goblin *GOBLIN2=new goblin;
megaman *MEGA2=new megaman;
reptile *REPT2=new reptile;
team2.push_back(GOBLIN2);
team2.push_back(MEGA2);
team2.push_back(REPT2);}

if(option1==2&&option2==2){//P1 PICKS TEAM2, P2 PICKS TEAM2
barbarian *BARB1=new barbarian;
reptile *REPT1=new reptile;
goblin *GOBLIN1=new goblin;
team1.push_back(BARB1);
team1.push_back(REPT1);
team1.push_back(GOBLIN1);

barbarian *BARB2=new barbarian;
reptile *REPT2=new reptile;
goblin *GOBLIN2=new goblin;
team2.push_back(BARB2);
team2.push_back(REPT2);
team2.push_back(GOBLIN2);}

if(option1==2&&option2==3){//P1 PICKS TEAM2, P2 PICKS TEAM3
barbarian *BARB1=new barbarian;
reptile *REPT1=new reptile;
goblin *GOBLIN1=new goblin;
team1.push_back(BARB1);
team1.push_back(REPT1);
team1.push_back(GOBLIN1);

reptile *REPT2=new reptile;
goblin *GOBLIN2=new goblin;
barbarian *BARB2=new barbarian;
team2.push_back(REPT2);
team2.push_back(GOBLIN2);
team2.push_back(BARB2);}

if(option1==2&&option2==4){//P1 PICKS TEAM2, P2 PICKS TEAM4
barbarian *BARB1=new barbarian;
reptile *REPT1=new reptile;
goblin *GOBLIN1=new goblin;
team1.push_back(BARB1);
team1.push_back(REPT1);
team1.push_back(GOBLIN1);

megaman *MEGA2=new megaman;
megaman *MEGA3=new megaman;
megaman *MEGA4=new megaman;
team2.push_back(MEGA2);
team2.push_back(MEGA3);
team2.push_back(MEGA4);}

if(option1==2&&option2==5){//P1 PICKS TEAM2, P2 PICKS TEAM5
barbarian *BARB1=new barbarian;
reptile *REPT1=new reptile;
goblin *GOBLIN1=new goblin;
team1.push_back(BARB1);
team1.push_back(REPT1);
team1.push_back(GOBLIN1);

bluemen *BLUE2=new bluemen;
barbarian *BARB2=new barbarian;
reptile *REPT2=new reptile;
team2.push_back(BLUE2);
team2.push_back(BARB2);
team2.push_back(REPT2);}

if(option1==3&&option2==1){//P1 PICKS TEAM3, P2 PICKS TEAM1
reptile *REPT1=new reptile;
goblin *GOBLIN1=new goblin;
barbarian *BARB1=new barbarian;
team1.push_back(REPT1);
team1.push_back(GOBLIN1);
team1.push_back(BARB1);

goblin *GOBLIN2=new goblin;
megaman *MEGA2=new megaman;
reptile *REPT2=new reptile;
team2.push_back(GOBLIN2);
team2.push_back(MEGA2);
team2.push_back(REPT2);}

if(option1==3&&option2==2){//P1 PICKS TEAM3,P2 PICKS TEAM2
reptile *REPT1=new reptile;
goblin *GOBLIN1=new goblin;
barbarian *BARB1=new barbarian;
team1.push_back(REPT1);
team1.push_back(GOBLIN1);
team1.push_back(BARB1);

barbarian *BARB2=new barbarian;
reptile *REPT2=new reptile;
goblin *GOBLIN2=new goblin;
team2.push_back(BARB2);
team2.push_back(REPT2);
team2.push_back(GOBLIN2);}

if(option1==3&&option2==3){//P1 PICKS TEAM3, P2 PICKS TEAM3
reptile *REPT1=new reptile;
goblin *GOBLIN1=new goblin;
barbarian *BARB1=new barbarian;
team1.push_back(REPT1);
team1.push_back(GOBLIN1);
team1.push_back(BARB1);

reptile *REPT2=new reptile;
goblin *GOBLIN2=new goblin;
barbarian *BARB2=new barbarian;
team2.push_back(REPT2);
team2.push_back(GOBLIN2);
team2.push_back(BARB2);}

if(option1==3&&option2==4){//P1 PICKS TEAM3, P2 PICKS TEAM4
reptile *REPT1=new reptile;
goblin *GOBLIN1=new goblin;
barbarian *BARB1=new barbarian;
team1.push_back(REPT1);
team1.push_back(GOBLIN1);
team1.push_back(BARB1);

megaman *MEGA2=new megaman;
megaman *MEGA3=new megaman;
megaman *MEGA4=new megaman;
team2.push_back(MEGA2);
team2.push_back(MEGA3);
team2.push_back(MEGA4);}

if(option1==3&&option2==5){//P1 PICKS TEAM 3, P2 PICKS TEAM5
reptile *REPT1=new reptile;
goblin *GOBLIN1=new goblin;
barbarian *BARB1=new barbarian;
team1.push_back(REPT1);
team1.push_back(GOBLIN1);
team1.push_back(BARB1);

bluemen *BLUE2=new bluemen;
barbarian *BARB2=new barbarian;
reptile *REPT2=new reptile;
team2.push_back(BLUE2);
team2.push_back(BARB2);
team2.push_back(REPT2);}

if(option1==4&&option2==1){//P1 PICKS TEAM4, P2 PICKS TEAM1
megaman *MEGA2=new megaman;
megaman *MEGA3=new megaman;
megaman *MEGA4=new megaman;
team1.push_back(MEGA2);
team1.push_back(MEGA3);
team1.push_back(MEGA4);

goblin *GOBLIN2=new goblin;
megaman *MEGA8=new megaman;
reptile *REPT2=new reptile;
team2.push_back(GOBLIN2);
team2.push_back(MEGA8);
team2.push_back(REPT2);}

if(option1==4&&option2==2){//P1 PICKS TEAM4, P2 PICKS TEAM2
megaman *MEGA2=new megaman;
megaman *MEGA3=new megaman;
megaman *MEGA4=new megaman;
team1.push_back(MEGA2);
team1.push_back(MEGA3);
team1.push_back(MEGA4);

barbarian *BARB2=new barbarian;
reptile *REPT2=new reptile;
goblin *GOBLIN2=new goblin;
team2.push_back(BARB2);
team2.push_back(REPT2);
team2.push_back(GOBLIN2);}

if(option1==4&&option2==3){//P1 PICKS TEAM4, P2 PICKS TEAM3
megaman *MEGA2=new megaman;
megaman *MEGA3=new megaman;
megaman *MEGA4=new megaman;
team1.push_back(MEGA2);
team1.push_back(MEGA3);
team1.push_back(MEGA4);

reptile *REPT2=new reptile;
goblin *GOBLIN2=new goblin;
barbarian *BARB2=new barbarian;
team2.push_back(REPT2);
team2.push_back(GOBLIN2);
team2.push_back(BARB2);}

if(option1==4&&option2==4){//P1 PICKS TEAM4, P2 PICKS TEAM4
megaman *MEGA2=new megaman;
megaman *MEGA3=new megaman;
megaman *MEGA4=new megaman;
team1.push_back(MEGA2);
team1.push_back(MEGA3);
team1.push_back(MEGA4);

megaman *MEGA6=new megaman;
megaman *MEGA7=new megaman;
megaman *MEGA8=new megaman;
team2.push_back(MEGA6);
team2.push_back(MEGA7);
team2.push_back(MEGA8);}

if(option1==4&&option2==5){//P1 PICKS TEAM4,P2 PICKS TEAM5
megaman *MEGA2=new megaman;
megaman *MEGA3=new megaman;
megaman *MEGA4=new megaman;
team1.push_back(MEGA2);
team1.push_back(MEGA3);
team1.push_back(MEGA4);

bluemen *BLUE2=new bluemen;
barbarian *BARB2=new barbarian;
reptile *REPT2=new reptile;
team2.push_back(BLUE2);
team2.push_back(BARB2);
team2.push_back(REPT2);}

if(option1==5&&option2==1){//P1 PICKS TEAM5,P2 PICKS TEAMS1
bluemen *BLUE1=new bluemen;
barbarian *BARB1=new barbarian;
reptile *REPT1=new reptile;
team1.push_back(BLUE1);
team1.push_back(BARB1);
team1.push_back(REPT1);

goblin *GOBLIN2=new goblin;
megaman *MEGA2=new megaman;
reptile *REPT2=new reptile;
team2.push_back(GOBLIN2);
team2.push_back(MEGA2);
team2.push_back(REPT2);}

if(option1==5&&option2==2){//P1 PICKS TEAM5,P2 PICKS TEAM2
bluemen *BLUE1=new bluemen;
barbarian *BARB1=new barbarian;
reptile *REPT1=new reptile;
team1.push_back(BLUE1);
team1.push_back(BARB1);
team1.push_back(REPT1);

barbarian *BARB2=new barbarian;
reptile *REPT2=new reptile;
goblin *GOBLIN2=new goblin;
team2.push_back(BARB2);
team2.push_back(REPT2);
team2.push_back(GOBLIN2);}

if(option1==5&&option2==3){//P1 PICKS TEAM5, P2 PICKS TEAM3
bluemen *BLUE1=new bluemen;
barbarian *BARB1=new barbarian;
reptile *REPT1=new reptile;
team1.push_back(BLUE1);
team1.push_back(BARB1);
team1.push_back(REPT1);

reptile *REPT2=new reptile;
goblin *GOBLIN2=new goblin;
barbarian *BARB2=new barbarian;
team2.push_back(REPT2);
team2.push_back(GOBLIN2);
team2.push_back(BARB2);}

if(option1==5&&option2==4){//P1 PICKS TEAM5, P2 PICKS TEAM4
bluemen *BLUE1=new bluemen;
barbarian *BARB1=new barbarian;
reptile *REPT1=new reptile;
team1.push_back(BLUE1);
team1.push_back(BARB1);
team1.push_back(REPT1);

megaman *MEGA2=new megaman;
megaman *MEGA3=new megaman;
megaman *MEGA4=new megaman;
team2.push_back(MEGA2);
team2.push_back(MEGA3);
team2.push_back(MEGA4);}

if(option1==5&&option2==5){//P1 PICKS TEAM5,P2 PICKS TEAM5
bluemen *BLUE1=new bluemen;
barbarian *BARB1=new barbarian;
reptile *REPT1=new reptile;
team1.push_back(BLUE1);
team1.push_back(BARB1);
team1.push_back(REPT1);

bluemen *BLUE2=new bluemen;
barbarian *BARB2=new barbarian;
reptile *REPT2=new reptile;
team2.push_back(BLUE2);
team2.push_back(BARB2);
team2.push_back(REPT2);}

tourney(team1,team2,fallen1,fallen2);

cout<<endl<<"~*~THANK YOU FOR PLAYING!~*~"<<endl<<endl;
return 0;
}
