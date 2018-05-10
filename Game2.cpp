#include <iostream>
#include <cstdlib>
#include <cstring> // strings manipulation.
#include <unistd.h> // sleep function
// in windows sleep() is Sleep()
// so if the compilation failed change all sleep() to Sleep() with capital S.

using namespace std;
//"#################################################################"//
void Level_One(void);
void tags(); // will use this to separate different outputs of the program
void Again();
int Combat(int &Character, int Enemy);//Passing Character by Reference
//void Level_Two(void);
//void Level_Three(void);
//"#################################################################"//



class Character {


private:
	int experience ;
	int player_lvl ;
public:
	string char_name;
	int char_hp;
	int char_attack;
	int char_defence;
	int reset_hp;

	Character(int hp, int attack, int defence) {
		char_hp = hp;
		char_attack = attack;
		char_defence = defence;
		experience = 0;
		player_lvl = 1;
		reset_hp = hp;
	}

	void get_name() {
		cin >> char_name;
		cin.ignore();
	}

	void display_attribute() {
		cout << "Level:" << player_lvl << endl;
		cout << char_name << "'s" << " Health: " << char_hp << endl;
		cout << char_name << "'s" << " Attack: " << char_attack << endl;
		cout << char_name << "'s" << " Defense: " << char_defence << endl;
		cout << char_name << "'s" << " XP Points: " << experience << endl;
	}

	void get_dmg(int dmg) {
		char_hp = char_hp - dmg;
	}

	void heal(int x) {
		char_hp = char_hp + x;
	}

	void add_xp(int x) { // this function should be void since it doesn't return anything
		experience += x;
		if (experience > 1000) {
			player_lvl++;
			cout << "Level Up!\n";
			experience = 0;
		}
	}
	int return_char_hp()
	{
		return char_hp;
	}

	void reset_player_health() {
		char_hp = reset_hp;
	}
};

class Enemy {

public:
	string char_name;
	int char_hp;
	int char_attack;
	int char_defence;

	Enemy(string name, int hp, int attack, int defence) {
		char_name = name;
		char_hp = hp;
		char_attack = attack;
		char_defence = defence;

	}

	void display_attribute() {
		cout << char_name << "'s" << " Health: " << char_hp << endl;
		cout << char_name << "'s" << " Attack: " << char_attack << endl;
		cout << char_name << "'s" << " Defense: " << char_defence << endl;

	}

	void get_dmg(int dmg) {
		char_hp = char_hp - dmg;
	}

	void heal(int x) {
		char_hp = char_hp + x;
	}

	~Enemy() {
		cout << "Enemy is Dead!" << endl;
	};

};


int main() {
	int choice;
	cout << "1.Level 1\n" << "2.Level 2\n" << "3.How to Play\n" << endl;
	cout << "Input a choice:\t";
	cin >> choice;
	switch (choice) {
	case 1:
		cout << "Level 1" << endl;
//            Intro();
		Level_One();
		break;
	case 2:
		cout << "Level 2" << endl;
		break;
	case 3:
		cout << "How To Play" << endl;
	default:
		exit(0);
	}
	return 0;
}
//
//void Intro() {
//    Character Player(125, 20, 10);
//    cout << "Input a name for your Character!: \t";
//    Player.get_name();
//    Player.display_attribute();
//    Enemy Knight("Knight", 100, 18, 12);
//}

int Combat(Character &player, Enemy enemy) {

	int choice, dmg_dealt_enemy, dmg_dealt_player, potion = 3;

	double chance_to_heal;

	cout << "Battle Commenced!\n";

	cout << "1.Attack\n2.Heal\n";

	player.display_attribute();

	while (player.return_char_hp() > 0 && enemy.char_hp > 0) {

		cin >> choice;
		cout << "1.Attack\n2.Heal\n";
		if (choice == 1) {

			chance_to_heal = rand() % 1;

			dmg_dealt_enemy = rand() % enemy.char_attack + 5;

			dmg_dealt_player = rand() % player.char_attack + 5;

			cout << "You have attacked the enemy and dealt " << dmg_dealt_player << " damage!" << endl;

			enemy.get_dmg(dmg_dealt_player);

			if (enemy.char_hp >= 0)

				enemy.display_attribute();

			else if (enemy.char_hp < 0) {
				enemy.char_hp = 0;

				enemy.display_attribute();
			}

			player.add_xp(rand() % 200 + 100);

			cout << "The Enemy attacked You and dealt " << dmg_dealt_enemy << " damage!" << endl;

			player.get_dmg(dmg_dealt_enemy);

			player.display_attribute();

			if (chance_to_heal > 0.5) {
				cout << "Enemy healed himself!\n";
				enemy.heal(rand() % 5 + 3);
			}

		} else if (choice == 2) {

			if (potion > 0) {
				player.heal(rand() % 5 + 3);
				player.display_attribute();
				potion--;
				cout << "Potion:" << potion << endl;
			} else

				cout << "You ran out of Potions!";

		}
		if (player.char_hp <= 0)
			return 1;
		else if (enemy.char_hp <= 0)
		{
			player.reset_player_health();
			return 0;
		}

	}
	return 0;
}

void Level_One() {
	Character Player(110, 20, 10);
	Enemy Warrior("Warrior", 100, 18, 10);
	int choice, Game_Over;
	cout << "what is your name?\n" << endl;
	Player.get_name();
	cout << "Welcome young " << Player.char_name << endl;
	cout << " You have given 2 choices either to protect your village or go to the front line and fight Your Enemy "
	     << endl;
	cout << " Are ready " << Player.char_name << " ? " << " (select path 1 or path 2 )" << endl;
	cout << "Enter your Path : " << endl;

	cin >> choice;
	if (choice == 1) {
		cout << "\n!!!----------------------Chapter One: Fight----------------------!!!" << endl;
		cout << "\nYou: Where are we going?" << endl;
		cout << "Old warrior: Soon you will know. Just keep walking and focus to your surrounding. " << endl;
		cout << "# Wush!!!\n" << "# You confront the enemy Knight in the Battlefield " << endl;
	} else if (choice == 2) {
		cout << "\n!!!----------------------Chapter One: Defend----------------------!!!" << endl;
		cout << "\nWar Chief : We must prepare for battle, the enemy are marching toward our village. brace yourself. "
		     << endl;
		cout << "War Chief: Be brave young warrior, you may live to tell the story or die within the history. " << endl;
		cout << "You: Yes sir!!" << endl;
		cout << "# You starting to hear the enemy war cry " << endl;
		cout << "# You confront the enemy Knight " << endl;
	}



//function combat (game over or continue story)
	Game_Over = Combat(Player, Warrior);
	if (Game_Over == 1) {
		cout << "You Died\n" << "Game Over!" << endl;
		Again();
	} else;

	cout << "War Chief : WOW! I have never see a mere foot soldier defeat an enemy knight." << endl;
	cout << "War Chief : You may be the next King's head knight someday. " << endl;
	cout << "You : I was just lucky, today must be my lucky day HaHaHa " << endl;
	cout << "# Suddenly the ground shook like an earth quick ." << endl;
	cout << "# There is a huge looking soldier with a massive battle Axe coming toward you.  " << endl;
	cout << "# It almost seem like you will be defeated by it" << endl;
	cout << " Are going to fight or retreat? " << " (Press 1 to Fight or 2 to Retreat)" << endl;

	cin >> choice;
	if (choice == 1) {
		cout << "\n!!!----------------------Chapter Two: Survive----------------------!!!" << endl;
		cout << "\nYou : The enemy is to strong, arghhhh!!" << endl;
		cout << "War Chief : We must keep fighting and wait for the back up. " << endl;
		cout << "# You will fight the huge looking soldier.  " << endl;
	} else if (choice == 2) {
		cout << "\n!!!----------------------Chapter Two: Regroup----------------------!!!" << endl;
		cout << "\nWar Chief : We must split up. " << endl;
		cout << "You: Yeah, you are right. " << endl;
		cout << "You: Lets meet at the Base camp" << endl;
		cout << "# You been chase in the forest and suddenly ....... Dead end .. " << endl;
		cout << "# It looks like you meet a dead end, there is no choice but Fight" << endl;
		cout << "# You confront the Huge soldier. " << endl;
	}
//second function combat with upgraded hp strength and Def
	Game_Over = Combat(Player, Warrior);
	if (Game_Over == 1) {
		cout << "You Died\n" << "Game Over!" << endl;
		Again();

		// deleted the exit condition here since the program still has shit to do
	} else; // wtf is this??

	cout << "# Apparently the huge soldier is a mutant that been biologically engineered to fight us. " << endl;
	cout << "# You have fought bravely and win many fight \n" << endl;
	cout << "#You have win the Battle . CONGraTulaTion....!!" << endl;
//return function( do you want to play again or quit)
}
void Again()
{
	char again_yn[5];
	cout << "Do You Want to Play again?(yes or no)";
	cin >> again_yn;
	while (strcmp(again_yn, "yes") != 0 && strcmp(again_yn, "no") != 0 && strcmp(again_yn, "Yes") != 0 && strcmp(again_yn, "No") != 0) // again testing your IQ level.
	{
		sleep(1);
		cout << endl <<  "Please Type Yes Or No: ";
		cin >> again_yn;
	}
	if (strcmp(again_yn, "yes" ) == 0 || strcmp(again_yn, "Yes" ) == 0)
	{
		main(); // we go to main again because from there the game begins again, all the shit before will be already set
	}
	else if (strcmp(again_yn, "no") == 0 || strcmp(again_yn, "No") == 0)
	{
		exit(0);
	}
}
void tags() // decoration, separation.
{
	cout << "==============================" << endl;
}
