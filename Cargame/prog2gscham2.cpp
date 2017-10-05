

#include <iostream>
#include <cctype>      // for toupper()
#include <string>
#include <iomanip> //for use of setw()

using namespace std;

// Global variables and constants
// Variables to store the board pieces
char  p1, p2, p3, p4, p5, p6,
p7, p8, p9, p10, p11, p12,
p13, p14, p15, p16, p17, p18,
p19, p20, p21, p22, p23, p24,
p25, p26, p27, p28, p29, p30,
p31, p32, p33, p34, p35, p36;


//A function used to determine which of the 36 global chars the car is
//first stored into.
int FindCarLocation(char car) {

	int carNum = 0;
	

	if (p1 == car) { carNum = 1; }
	else if (p2 == car) { carNum = 2; }
	else if (p3 == car) { carNum = 3; }
	else if(p4 == car) { carNum = 4; }
	else if(p5 == car) { carNum = 5; }
	else if(p6 == car) { carNum = 6; }
	else if(p7 == car) { carNum = 7; }
	else if(p8 == car) { carNum = 8; }
	else if(p9 == car) { carNum = 9; }
	else if(p10 == car) { carNum = 10; }
	else if(p11 == car) { carNum = 11; }
	else if(p12 == car) { carNum = 12; }
	else if(p13 == car) { carNum = 13; }
	else if(p14 == car) { carNum = 14; }
	else if(p15 == car) { carNum = 15; }
	else if(p16 == car) { carNum = 16; }
	else if(p17 == car) { carNum = 17; }
	else if(p18 == car) { carNum = 18; }
	else if(p19 == car) { carNum = 19; }
	else if(p20 == car) { carNum = 20; }
	else if(p21 == car) { carNum = 21; }
	else if(p22 == car) { carNum = 22; }
	else if(p23 == car) { carNum = 23; }
	else if(p24 == car) { carNum = 24; }
	else if(p25 == car) { carNum = 25; }
	else if(p26 == car) { carNum = 26; }
	else if(p27 == car) { carNum = 27; }
	else if(p28 == car) { carNum = 28; }
	else if(p29 == car) { carNum = 29; }
	else if(p30 == car) { carNum = 30; }
	else if(p31 == car) { carNum = 31; }
	else if(p32 == car) { carNum = 32; }
	else if(p33 == car) { carNum = 33; }
	else if(p34 == car) { carNum = 34; }
	else if(p35 == car) { carNum = 35; }
	else if(p36 == car) { carNum = 36; }

	return carNum;



}

//function to choose the location for the car's location
void MoveNum(int carNum, char carname) {


	switch (carNum) {
	case 1: p1 = carname;
			break;
	case 2: p2 = carname;
			break;
	case 3: p3 = carname;
			break;
	case 4: p4 = carname;
		   break;
	case 5:p5 = carname;
		   break;
	case 6:p6 = carname;
		   break;
	case 7:p7 = carname;
		   break;
	case 8:p8 = carname;
		   break;
	case 9:p9 = carname;
		   break;
	case 10:p10 = carname;
			break;
	case 11:p11 = carname;
			break;
	case 12:p12 = carname;
			break;
	case 13:p13 = carname;
			break;
	case 14:p14 = carname;
			break;
	case 15:p15 = carname;
			break;
	case 16:p16 = carname;
			break;
	case 17:p17 = carname;
			break;
	case 18:p18 = carname;
			break;
	case 19:p19 = carname;
			break;
	case 20:p20 = carname;
			break;
	case 21:p21 = carname;
			break;
	case 22:p22 = carname;
			break;
	case 23:p23 = carname;
			break;
	case 24:p24 = carname;
			break;
	case 25:p25 = carname;
			break;
	case 26:p26 = carname;
			break;
	case 27:p27 = carname;
			break;
	case 28:p28 = carname;
			break;
	case 29:p29 = carname;
			break;
	case 30:p30 = carname;
			break;
	case 31:p31 = carname;
			break;
	case 32:p32 = carname;
			break;
	case 33:p33 = carname;
			break;
	case 34:p34 = carname;
			break;
	case 35:p35 = carname;
			break;
	case 36:p36 = carname;
			break;
	default: break;
	}


}

//ChooseDirection uses direction as a multiplier for the spaces moved.\
//eg. if right returns 1, if left returns -1, if down returns 6.
int ChooseDirection(char direction) {

	int directionMult = 0;

	if (direction == 'R') {
		directionMult = 1;
	}
	else if (direction == 'L') {
		directionMult = -1;
	}
	else if (direction == 'D') {
		directionMult = 6;
	}
	else if (direction == 'U') {
		directionMult = -6;
	}

	return directionMult;

}



void MakeMove(char carName, char direction, int numSpaces) {

	/*Exists as a container for
	the 'move' functions created*/
	int carNum;
	int originalCarNum = 0;
	int directionMult;
	char dot = '.';			//direction will be translated into a 
							//multiplier to represent 

	carNum = FindCarLocation(carName);

	originalCarNum = carNum;

	directionMult = ChooseDirection(direction);

	carNum = carNum + (directionMult * numSpaces);


	if (carName == 'F') {						//This whole finishing ling of code for MakeMove() is how the pieces move across the game board.
		if (direction == 'R') {
			if (numSpaces < 2) {
				MoveNum(carNum + 2, carName);
				MoveNum(carNum + 1, carName);
				MoveNum(carNum, carName);
				MoveNum(originalCarNum, dot);
			}
			else if (numSpaces < 3) {
				MoveNum(carNum + 2, carName);
				MoveNum(carNum + 1, carName);
				MoveNum(carNum, carName);
				MoveNum(originalCarNum, dot);
				MoveNum(originalCarNum + 1, dot);

			}
			else {
				MoveNum(carNum + 2, carName);
				MoveNum(carNum + 1, carName);
				MoveNum(carNum, carName);
				MoveNum(originalCarNum, dot);
				MoveNum(originalCarNum + 1, dot);
				MoveNum(originalCarNum + 2, dot);

			}
		}
		else if (direction == 'L') {
			if (numSpaces < 2) {
				MoveNum(carNum, carName);
				MoveNum(carNum + 1, carName);
				MoveNum(carNum + 2, carName);
				MoveNum(originalCarNum + 2, dot);

			}
			else if (numSpaces < 3) {
				MoveNum(carNum, carName);
				MoveNum(carNum + 1, carName);
				MoveNum(carNum + 2, carName);
				MoveNum(originalCarNum + 2, dot);
				MoveNum(originalCarNum + 1, dot);

			}
			else {
				MoveNum(carNum, carName);
				MoveNum(carNum + 1, carName);
				MoveNum(carNum + 2, carName);
				MoveNum(originalCarNum + 2, dot);
				MoveNum(originalCarNum + 1, dot);
				MoveNum(originalCarNum, dot);


			}

		}

	}

	else if ((carName == 'G') || (carName == 'R') || (carName == 'T')) {
		if (direction == 'R') {
			if (numSpaces < 2) {
				MoveNum(carNum + 1, carName);
				MoveNum(carNum, carName);
				MoveNum(originalCarNum, dot);
			}
			else {
				MoveNum(carNum + 1, carName);
				MoveNum(carNum, carName);
				MoveNum(originalCarNum, dot);
				MoveNum(originalCarNum + 1, dot);

			}
		}
		else if (direction == 'L') {
			if (numSpaces < 2) {
				MoveNum(carNum + 1, carName);
				MoveNum(carNum, carName);
				MoveNum(originalCarNum + 1, dot);

			}
			else {
				MoveNum(carNum, carName);
				MoveNum(carNum + 1, carName);
				MoveNum(originalCarNum, dot);
				MoveNum(originalCarNum + 1, dot);

			}

		}

	}

	else if ((carName == 'P') || (carName == 'B') || (carName == 'Y')) {
		if (direction == 'D') {
			if (numSpaces < 2) {
				MoveNum(carNum + 12, carName);
				MoveNum(carNum + 6, carName);
				MoveNum(carNum, carName);
				MoveNum(originalCarNum, dot);

			}
			else if (numSpaces < 3) {
				MoveNum(carNum + 12, carName);
				MoveNum(carNum + 6, carName);
				MoveNum(carNum, carName);
				MoveNum(originalCarNum, dot);
				MoveNum(originalCarNum + 6, dot);
			}
			else {
				MoveNum(carNum + 12, carName);
				MoveNum(carNum + 6, carName);
				MoveNum(carNum, carName);
				MoveNum(originalCarNum, dot);
				MoveNum(originalCarNum + 6, dot);
				MoveNum(originalCarNum + 12, dot);
			}

		}
		else {
			if (numSpaces < 2) {
				MoveNum(carNum, carName);
				MoveNum(carNum + 6, carName);
				MoveNum(carNum + 12, carName);
				MoveNum(originalCarNum + 12, dot);

			}
			else if (numSpaces < 3) {
				MoveNum(carNum, carName);
				MoveNum(carNum + 6, carName);
				MoveNum(carNum + 12, carName);
				MoveNum(originalCarNum + 12, dot);
				MoveNum(originalCarNum + 6, dot);
			}
			else {
				MoveNum(carNum, carName);
				MoveNum(carNum + 6, carName);
				MoveNum(carNum + 12, carName);
				MoveNum(originalCarNum + 12, dot);
				MoveNum(originalCarNum + 6, dot);
				MoveNum(originalCarNum, dot);
			}

		}
	}
	else if (carName == 'O') {
		if (direction == 'U') {
			if (numSpaces < 2) {
				MoveNum(carNum, carName);
				MoveNum(carNum + 6, carName);
				MoveNum(originalCarNum + 6, dot);
			}

			else {
				MoveNum(carNum, carName);
				MoveNum(carNum + 6, carName);
				MoveNum(originalCarNum + 6, dot);
				MoveNum(originalCarNum, dot);
			}
		}

		else if (direction == 'D') {
			if (numSpaces < 2) {
				MoveNum(carNum + 6, carName);
				MoveNum(carNum, carName);
				MoveNum(originalCarNum, dot);
			}

			else {
				MoveNum(carNum + 6, carName);
				MoveNum(carNum, carName);
				MoveNum(originalCarNum, dot);
				MoveNum(originalCarNum + 6, dot);
			}
		}
	}
}




//--------------------------------------------------------------------
// Display ID info
void displayIDInfo() 
{
	printf("Author:Gregory Schamberger\n");
	printf("Lab: Tuesday 11am\n");
	printf("Program: #2, Traffic \n");
	printf(" \n");
}//end displayIDInfo()


 //--------------------------------------------------------------------
 // Display Instructions
void displayInstructions()
{
	cout << "Welcome to the traffic game!                          " << endl
		<< "                                                      " << endl
		<< "Move the vehicles so that the Red car (RR) can exit   " << endl
		<< "the board to the right. Each move should be of the    " << endl
		<< "of the form:   CDN   where:                           " << endl
		<< "   C  is the vehicle to be moved                      " << endl
		<< "   D  is the direction (u=up, d=down, l=left or r=right)" << endl
		<< "   N  is the number of squares to move it             " << endl
		<< "For example GR2  means move the G vehicle to the right" << endl
		<< "2 squares.  Lower-case input such as   gr2  is also   " << endl
		<< "accepted.  Enter '-' to reset board, or 'x' to exit.  " << endl;
}//end displayInstructions()



 //--------------------------------------------------------------------
 // Display the board, using the current values in the global variables.
void displayBoard()
{

	cout << setw(4) << p1 << setw(4) << p2 << setw(4) << p3 << setw(4) << p4 << setw(4) << p5 << setw(4) << p6 << endl;
	cout << setw(4) << p7 << setw(4) << p8 << setw(4) << p9 << setw(4) << p10 << setw(4) << p11 << setw(4) << p12 << endl;
	cout << setw(4) << p13 << setw(4) << p14 << setw(4) << p15 << setw(4) << p16 << setw(4) << p17 << setw(4) << p18 << endl;
	cout << setw(4) << p19 << setw(4) << p20 << setw(4) << p21 << setw(4) << p22 << setw(4) << p23 << setw(4) << p24 << endl;
	cout << setw(4) << p25 << setw(4) << p26 << setw(4) << p27 << setw(4) << p28 << setw(4) << p29 << setw(4) << p30 << endl;
	cout << setw(4) << p31 << setw(4) << p32 << setw(4) << p33 << setw(4) << p34 << setw(4) << p35 << setw(4) << p36 << endl;

}

void ResetBoard() {
	p1 = 'G'; p2 = 'G'; p3 = '.'; p4 = '.'; p5 = '.'; p6 = 'Y';
	p7 = 'P'; p8 = '.'; p9 = '.'; p10 = 'B'; p11 = '.'; p12 = 'Y';
	p13 = 'P'; p14 = 'R'; p15 = 'R'; p16 = 'B'; p17 = '.'; p18 = 'Y';
	p19 = 'P'; p20 = '.'; p21 = '.'; p22 = 'B'; p23 = '.'; p24 = '.';
	p25 = 'O'; p26 = '.'; p27 = '.'; p28 = '.'; p29 = 'T'; p30 = 'T';
	p31 = 'O'; p32 = '.'; p33 = 'F'; p34 = 'F'; p35 = 'F'; p36 = '.';

}

int main()
{

	char carName;
	char direction;
	int numSpaces;
	int count = 0; //counter for the game

	displayIDInfo();        // Display ID info
	displayInstructions();  // Display game instructions

							
	p1 = 'G'; p2 = 'G'; p3 = '.'; p4 = '.'; p5 = '.'; p6 = 'Y';
	p7 = 'P'; p8 = '.'; p9 = '.'; p10 = 'B'; p11 = '.'; p12 = 'Y';
	p13 = 'P'; p14 = 'R'; p15 = 'R'; p16 = 'B'; p17 = '.'; p18 = 'Y';
	p19 = 'P'; p20 = '.'; p21 = '.'; p22 = 'B'; p23 = '.'; p24 = '.';
	p25 = 'O'; p26 = '.'; p27 = '.'; p28 = '.'; p29 = 'T'; p30 = 'T';
	p31 = 'O'; p32 = '.'; p33 = 'F'; p34 = 'F'; p35 = 'F'; p36 = '.';

	displayBoard();    

	cout << "Please enter the move you would like to make in this format: Car letter, direction moving, number of spaces moving." << endl;
	

	bool isGameAlive = true;	//Allows for a running game, waits until the game is won.
	while (isGameAlive) {
		cin >> carName >> direction >> numSpaces;
		carName = toupper(carName);
		if (carName == 'X') {
			break;
		}
		else if (carName == '-') {
			ResetBoard();
		}
		direction = toupper(direction);
		MakeMove(carName, direction, numSpaces);
		displayBoard();
		count++;
		cout << endl;
		cout << count;
		cout << endl;
		if (p18 == 'R') {
			isGameAlive = false;
		}
	}

	cout << endl;

	if (carName == 'X'){
		cout << "Bye!" << endl;

	}
	else {
		cout << "You win!" << endl;
	}

	


	cout << endl;
	cout << "Thank you for playing.  Exiting..." << endl;

	return 0;
}//end main()



