#include <iostream>
#include <string>
using namespace std;

int main()
{
	// Your program must contain simple/primitive data type variables.
	char user_name[100];
	int user_age;

	// Your program must ask for the user's name, then greet them by name
	printf("Hello. What is your name?\n");
	cin.getline(user_name, sizeof(user_name));
	cout << "\n\nHello " << user_name << "!\nIt is a pleasure to meet you!\n" << endl;
	
	// Your program must contain a description for the user of what it does
	cout << "These are your instructions!" << endl;

	// Your program must be able to print text to the display.
	cout << "If you don't mind me asking, how old are you?" << endl;
	
	// Your program must accept user input.
	cin >> user_age;
	if (user_age <= 33)
	{
		cout << "You are nice and young!" << endl;
	}
	if (user_age >= 34 && user_age <= 66)
	{
		cout << "You are in your prime!" << endl;
	}
	else if (user_age >= 66)
	{
		cout << "My my! Have you filled out your retirement yet??" << endl;
	}
	


	system("pause");
	return 0;
}


///////////////////////////////////////////////Requirements///////////////////////////////////////////////


//Completed // Your program must contain a description for the user of what it does.
//Completed // Your program must ask for the user's name, then greet them by name,
//Completed // Your program must contain simple / primitive data type variables.
//Completed // Your program must be able to print text to the display.
//Completed // Your program must accept user input.
//Completed // Your program must be placed in GitHub


// The more humor in this program the better you will remember it.
// Your program must use one or more types of loops. For example, "for loop", or "do "while loop", or the "while loop".
// Your program must have at least one other function that takes parameters and returns a value which is called from main.
// Your program must use at least one reference
// Your program must use at least one pointer
// Your program must have at least one additional header file(.h) you created.
// Your program must have at least one additional code file(CPP) you created.
// Your program must use heavy comments in the code showing a good understanding of your code.
// Your program must include at least two classes, one base class, and one child class.
// Your program must demonstrate inheritance correctly.
// Your program must your private and public correctly to demonstrate encapsulation.
// You may make your program graphical, however you are only required to have a text - based console application. Get your program working using text before you think about making a GUI.
// The video is a demonstration of all functionality in your final project.There is no maximum time requirement, but there is a the requirement to demonstrate all functionality from a user 
// perspective only. Not from the role of the developer. This will be worth half of your grade on this assignment. Tell an interesting story, sell your program to the viewer on how exciting it is!