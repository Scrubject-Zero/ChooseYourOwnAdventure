 //Dalton Rowlett
//Text Based RPG

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
int hp = 6, attack = 1, defense = 0, enemyHp;

string name, weaponName = "fist";

int choice;

bool silentProtag = 0, naked = 1;

cout << endl << endl << "   In a state between dreaming and waking, a disembodied voice calls out..." << endl;
cout << "   (Press ENTER to continue) ";
cin.ignore ();
cout << endl << "  \"Hello adventurer! State your true name.\"" << endl;
cout << "   (Press ENTER to continue) ";
cin.ignore();

cout << endl << "   The hero thinks for a moment before responding ";
cout << endl << "   (Enter your character's name and press ENTER) ";
getline(cin, name);

if (name == "")
{
	cout << endl << "  \"Come now, don't be shy! You are the hero of this story after all.\n   State your true name.\"";
	cout << endl << "   (Enter your character's name and press ENTER) ";
	getline(cin, name);
	if (name == "")
	{
		cout << endl << "  \"Well, now you are just trying my patience. I don't have all day.\n  State your true name.\"";
		cout << endl << "   (Enter your character's name and press ENTER) ";
		getline(cin, name);
		if (name == "")
		{
			cout << endl << "   An akward silence lingers for what feels like a lifetime before the disembodied voice speaks again,";
			cout << endl << "  \"Wait a minute. I can see your lips moving. Are you trying to speak?\"";
			cout << endl << "  \"So, you can't talk. Well why didn't you say so? Have fun out there Silent Protagonist.\"";
			name = "Silent Protagonist";
			silentProtag = 1;
			cout << endl << "   The disembodied voice fades back into nothingness grumbling to itself\n   and you can just barely hear something about a \"wasted Sunday\" in there" << endl;
			cout << "   (Press ENTER to continue) ";
			cin.ignore();
		}
	}
}

cout << endl << "   So begins the adventure of " << name << "." << endl;
cout << "   (Press ENTER to continue) ";
cin.ignore ();

cout << endl << "   You awaken in a damp cave, dimly lit by the flicker of firelight in the next room." << endl;
cout << "   (Press ENTER to continue) ";
cin.ignore();

cout << endl << "   In the next room, you hear the crackling voice of someone(or something!) chattering to itself." << endl;
cout << endl << "   What do you do?" << endl;
cout << "   (1) Peek around the corner" << endl;
cout << "   (2) Search the room you are in" << endl;
cout << "   (Enter the number of your decision and press ENTER to continue) ";
cin >> choice;

switch (choice)
{
	case 1:
	{
		cout << endl << "   You carefully tiptoe towards the \"door\" to the next room, \n   slowly poking your head out from the left to try to get a glimpse of the source of the voice.";
	}
}

return 0;
}


