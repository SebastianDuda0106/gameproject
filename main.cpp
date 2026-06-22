#include<iostream>

using namespace std;

int main() {
	string character_name="Sebastian";
	int character_healthpoints=100;
	int character_vitality=5;
	int character_strength=5;
	
	int character_defence=5;
	
	int character_mana=10;
	int character_intelligence=5;
	int character_dexterity=5;
	
	int character_stamina=10;
	int character_agility=5;
	int character_endurance=5;

	cout<<"Name: "<<character_name<<"\n";
	cout<<"\nhealth: "<<character_healthpoints;
	cout<<"\nmana: "<<character_mana;
	cout<<"\nstamina: "<<character_stamina;
	cout<<"\nstrength: "<<character_strength;
	cout<<"\ndefence: "<<character_defence;
	cout<<"\nagility: "<<character_agility;
	cout<<"\nvitality: "<<character_vitality;
	cout<<"\nendurance: "<<character_endurance;
	cout<<"\nintelligence: "<<character_intelligence;
	cout<<"\ndexterity: "<<character_dexterity;

	return 0;
}
