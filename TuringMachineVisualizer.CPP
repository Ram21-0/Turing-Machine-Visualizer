#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <string.h>
#include <dos.h>

void wWr()
{
	// input
	cout<<"Enter a string\n";
	char str[100], newStr[100];
	cin>>str;
	newStr[0] = 'B';
	for(int i=0;i<strlen(str);i++) {
		newStr[i+1] = str[i];
	}
	newStr[strlen(str)+1] = 'B';
	newStr[strlen(str)+2] = '\0';
	

	// visualizer
	int l = strlen(str) + 2;
        
	int start = 50;
	for(i=0;i<l;i++) {
		setcolor(YELLOW);
		rectangle(start + i*50,200,start + i*50 + 50,250);
		setcolor(WHITE);
		settextstyle(1,0,1.5);
		char s[2];
		s[0] = newStr[i];
		s[1] = '\0';
		outtextxy(start + i*50 + 25,225,s);
	}

	// turing machine

	// BabcddcbaB
	int currPosition = 1;
	int finished = 1;
	while(finished) {
		// forward
		char currCharacter = newStr[currPosition];
		setcolor(GREEN);
		rectangle(start + currPosition*50,200,start + currPosition*50 + 50,250);
		delay(500);

		setcolor(BLACK);
		char s[2];
		s[0] = newStr[currPosition];
		s[1] = '\0';
		
		outtextxy(start + currPosition*50 + 25,225,s);

		// setwritemode(COPY_PUT);
		setcolor(WHITE);
		outtextxy(start + currPosition*50 + 25,225,"B");
		newStr[currPosition] = 'B';


		int j = currPosition + 1;
		do {
			setcolor(YELLOW);
			rectangle(start + (j-1)*50,200,start + (j-1)*50 + 50,250);
			setcolor(GREEN);
			rectangle(start + j*50,200,start + j*50 + 50,250);
			j += 1;
			delay(500);
		} while(newStr[j] != 'B');

		setcolor(YELLOW);
		rectangle(start + (j-1)*50,200,start + (j-1)*50 + 50,250);
		setcolor(GREEN);
		rectangle(start + j*50,200,start + j*50 + 50,250);

		delay(500);
		setcolor(YELLOW);
		rectangle(start + (j)*50,200,start + (j)*50 + 50,250);
		setcolor(GREEN);
		rectangle(start + (j-1)*50,200,start + (j-1)*50 + 50,250);

		delay(500);

		if(newStr[j-1] != currCharacter) {
			delay(500);
			cout<<"\nNot in the form of WWr";
			return;
		}

		setcolor(BLACK);
		
		s[0] = newStr[j-1];
		s[1] = '\0';
		outtextxy(start + (j-1)*50 + 25,225,s);

		setcolor(WHITE);
		outtextxy(start + (j-1)*50 + 25,225,"B");
		newStr[j-1] = 'B';
		j-=2;

		// backward
		do {
			setcolor(YELLOW);
			rectangle(start + (j+1)*50,200,start + (j+1)*50 + 50,250);
			setcolor(GREEN);
			rectangle(start + (j)*50,200,start + (j)*50 + 50,250);
			j--;
			delay(500);
		} while(newStr[j] != 'B');

		delay(500);
		setcolor(YELLOW);
		rectangle(start + (j+1)*50,200,start + (j+1)*50 + 50,250);

		delay(500);
		currPosition += 1;

		if(newStr[currPosition] == 'B')
			finished = 0;
	}

	cout<<"\nCorrect";
}

void anbn() {

	cout<<"Enter a string\n";
	char str[100],newStr[100];
	cin>>str;
	newStr[0] = 'B';
	for(int i=0;i<strlen(str);i++)
	{
		newStr[i+1] = str[i];
	}
	newStr[strlen(str)+1] = 'B';
	newStr[strlen(str)+2] = '\0';
	// visualizer
	
	int l = strlen(str) + 2;
        
	int start = 50;
	for(i=0;i<l;i++) {
		setcolor(YELLOW);
		rectangle(start + i*50,200,start + i*50 + 50,250);
		setcolor(WHITE);
		settextstyle(1,0,1.5);
		char s[2];
		s[0] = newStr[i];
		s[1] = '\0';
		outtextxy(start + i*50 + 25,225,s);
	}

	// turing machine

	// BabcddcbaB
	int currPosition = 1;
	int finished = 1;
	while(finished)
	{
		// forward
		if(newStr[currPosition] == 'B')
			finished = 0;
		if(newStr[currPosition] == 'b')
		{
			delay(500);
			cout<<"\nNot in the form of anbn";
			return;
		}

		char currCharacter = newStr[currPosition];
		setcolor(GREEN);
		rectangle(start + currPosition*50,200,start + currPosition*50 + 50,250);
		delay(500);

		setcolor(BLACK);
		// setwritemode(XOR_PUT);
		char s[2];
		s[0] = newStr[currPosition];
		s[1] = '\0';
		
		outtextxy(start + currPosition*50 + 25,225,s);

		// setwritemode(COPY_PUT);
		setcolor(WHITE);
		outtextxy(start + currPosition*50 + 25,225,"B");
		newStr[currPosition] = 'B';


		int j = currPosition + 1;
		do {
			setcolor(YELLOW);
			rectangle(start + (j-1)*50,200,start + (j-1)*50 + 50,250);
			setcolor(GREEN);
			rectangle(start + j*50,200,start + j*50 + 50,250);
			j += 1;
			delay(500);
		} while(newStr[j] != 'B');

		setcolor(YELLOW);
		rectangle(start + (j-1)*50,200,start + (j-1)*50 + 50,250);
		setcolor(GREEN);
		rectangle(start + j*50,200,start + j*50 + 50,250);

		delay(500);
		setcolor(YELLOW);
		rectangle(start + (j)*50,200,start + (j)*50 + 50,250);
		setcolor(GREEN);
		rectangle(start + (j-1)*50,200,start + (j-1)*50 + 50,250);

		delay(500);

		if(newStr[j-1] != 'b') {
			delay(500);
			cout<<"\nNot in the form of anbn";
			return;
		}

		setcolor(BLACK);
		
		s[0] = newStr[j-1];
		s[1] = '\0';
		outtextxy(start + (j-1)*50 + 25,225,s);

		setcolor(WHITE);
		outtextxy(start + (j-1)*50 + 25,225,"B");
		newStr[j-1] = 'B';
		j-=2;

		// backward
		do {
			setcolor(YELLOW);
			rectangle(start + (j+1)*50,200,start + (j+1)*50 + 50,250);
			setcolor(GREEN);
			rectangle(start + (j)*50,200,start + (j)*50 + 50,250);
			j--;
			delay(500);
		} while(newStr[j] != 'B');

		delay(500);
		setcolor(YELLOW);
		rectangle(start + (j+1)*50,200,start + (j+1)*50 + 50,250);

		delay(500);
		currPosition += 1;

		if(newStr[currPosition] == 'B')
			finished = 0;
		if(newStr[currPosition] == 'b')
		{
			delay(500);
			cout<<"\nNot in the form of anbn";
			return;
		}
	}

	cout<<"\nCorrect";
}


void wcw() 
{
	cout<<"Enter string\n";
	char str[100];
	cin>>str;

	char newStr[100];
	newStr[0] = 'B';
	for(int i=0;i<strlen(str);i++)
		newStr[i+1] = str[i];
	newStr[strlen(str)+1] = 'B';
	newStr[strlen(str)+2] = '\0';

	int l = strlen(str) + 2;
        
	int start = 50;
	for(i=0;i<l;i++) {
		setcolor(YELLOW);
		rectangle(start + i*50,200,start + i*50 + 50,250);
		setcolor(WHITE);
		settextstyle(1,0,1.5);
		char s[2];
		s[0] = newStr[i];
		s[1] = '\0';
		outtextxy(start + i*50 + 25,225,s);
	}

	int finished = 1;
	i = 1;
	while(finished)
	{
		if(newStr[i]=='a')
		{
			setcolor(GREEN);
			rectangle(start + (i)*50,200,start + (i)*50 + 50,250);
			delay(500);

			setcolor(BLACK);
			outtextxy(start + i*50 + 25,225,"a");
			setcolor(WHITE);
			outtextxy(start + i*50 + 25,225,"X");
			delay(500);
			newStr[i] = 'X';

			i+=1;
			while(newStr[i]=='a' || newStr[i]=='b')
			{
				setcolor(YELLOW);
				rectangle(start + (i-1)*50,200,start + (i-1)*50 + 50,250);
				setcolor(GREEN);
				rectangle(start + (i)*50,200,start + (i)*50 + 50,250);
				delay(500);
				i++;
			}

			if(newStr[i] == 'c') 
			{
				setcolor(YELLOW);
				rectangle(start + (i-1)*50,200,start + (i-1)*50 + 50,250);
				setcolor(GREEN);
				rectangle(start + (i)*50,200,start + (i)*50 + 50,250);
				i++;
			}
			else {
				cout<<"\nNot in the form of wcw";
				delay(1000);
				return;
			}

			while(newStr[i]=='X' || newStr[i]=='Y')
			{
				setcolor(YELLOW);
				rectangle(start + (i-1)*50,200,start + (i-1)*50 + 50,250);
				setcolor(GREEN);
				rectangle(start + (i)*50,200,start + (i)*50 + 50,250);
				delay(500);
				i++;
			}

			if(newStr[i] == 'a') {
				setcolor(YELLOW);
				rectangle(start + (i-1)*50,200,start + (i-1)*50 + 50,250);
				setcolor(GREEN);
				rectangle(start + (i)*50,200,start + (i)*50 + 50,250);
				delay(500);

				setcolor(BLACK);
				outtextxy(start + i*50 + 25,225,"a");
				setcolor(WHITE);
				outtextxy(start + i*50 + 25,225,"X");
				delay(500);
				newStr[i] = 'X';
				i--;
			}
			else
			{
				cout<<"\nNot in the form of wcw";
				delay(1000);
				return;
			}

			while(newStr[i] == 'X' || newStr[i] == 'Y') {
				setcolor(YELLOW);
				rectangle(start + (i+1)*50,200,start + (i+1)*50 + 50,250);
				setcolor(GREEN);
				rectangle(start + (i)*50,200,start + (i)*50 + 50,250);
				delay(500);
				i--;
			}

			if(newStr[i] == 'c') {
				setcolor(YELLOW);
				rectangle(start + (i+1)*50,200,start + (i+1)*50 + 50,250);
				setcolor(GREEN);
				rectangle(start + (i)*50,200,start + (i)*50 + 50,250);
				delay(500);
				i--;
			}
			else {
				cout<<"\nNot in the form of wcw";
				delay(1000);
				return;
			}

			while(newStr[i] == 'a' || newStr[i] == 'b') {
				setcolor(YELLOW);
				rectangle(start + (i+1)*50,200,start + (i+1)*50 + 50,250);
				setcolor(GREEN);
				rectangle(start + (i)*50,200,start + (i)*50 + 50,250);
				delay(500);
				i--;
			}

			if(newStr[i] == 'X') {
				setcolor(YELLOW);
				rectangle(start + (i+1)*50,200,start + (i+1)*50 + 50,250);
				setcolor(GREEN);
				rectangle(start + (i)*50,200,start + (i)*50 + 50,250);
				delay(500);
				setcolor(YELLOW);
				rectangle(start + (i)*50,200,start + (i)*50 + 50,250);
				i++;
			}
			else
			{
				cout<<"\nNot in the form of wcw";
				delay(1000);
				return;
			}

		}
		else if(newStr[i]=='b')
		{
			setcolor(GREEN);
			rectangle(start + (i)*50,200,start + (i)*50 + 50,250);
			delay(500);

			setcolor(BLACK);
			outtextxy(start + i*50 + 25,225,"b");
			setcolor(WHITE);
			outtextxy(start + i*50 + 25,225,"Y");
			delay(500);
			newStr[i] = 'Y';

			i+=1;
			while(newStr[i]=='a' || newStr[i]=='b')
			{
				setcolor(YELLOW);
				rectangle(start + (i-1)*50,200,start + (i-1)*50 + 50,250);
				setcolor(GREEN);
				rectangle(start + (i)*50,200,start + (i)*50 + 50,250);
				delay(500);
				i++;
			}

			if(newStr[i] == 'c') 
			{
				setcolor(YELLOW);
				rectangle(start + (i-1)*50,200,start + (i-1)*50 + 50,250);
				setcolor(GREEN);
				rectangle(start + (i)*50,200,start + (i)*50 + 50,250);
				i++;
			}
			else {
				cout<<"\nNot in the form of wcw";
				delay(1000);
				return;
			}

			while(newStr[i]=='X' || newStr[i]=='Y')
			{
				setcolor(YELLOW);
				rectangle(start + (i-1)*50,200,start + (i-1)*50 + 50,250);
				setcolor(GREEN);
				rectangle(start + (i)*50,200,start + (i)*50 + 50,250);
				delay(500);
				i++;
			}

			if(newStr[i] == 'b') {
				setcolor(YELLOW);
				rectangle(start + (i-1)*50,200,start + (i-1)*50 + 50,250);
				setcolor(GREEN);
				rectangle(start + (i)*50,200,start + (i)*50 + 50,250);
				delay(500);

				setcolor(BLACK);
				outtextxy(start + i*50 + 25,225,"b");
				setcolor(WHITE);
				outtextxy(start + i*50 + 25,225,"Y");
				delay(500);
				newStr[i] = 'Y';
				i--;
			}
			else
			{
				cout<<"\nNot in the form of WcW";
				delay(1000);
				return;
			}

			while(newStr[i] == 'X' || newStr[i] == 'Y') {
				setcolor(YELLOW);
				rectangle(start + (i+1)*50,200,start + (i+1)*50 + 50,250);
				setcolor(GREEN);
				rectangle(start + (i)*50,200,start + (i)*50 + 50,250);
				delay(500);
				i--;
			}

			if(newStr[i] == 'c') {
				setcolor(YELLOW);
				rectangle(start + (i+1)*50,200,start + (i+1)*50 + 50,250);
				setcolor(GREEN);
				rectangle(start + (i)*50,200,start + (i)*50 + 50,250);
				delay(500);
				i--;
			}
			else {
				cout<<"\nNot in the form of WcW";
				delay(1000);
				return;
			}

			while(newStr[i] == 'a' || newStr[i] == 'b') {
				setcolor(YELLOW);
				rectangle(start + (i+1)*50,200,start + (i+1)*50 + 50,250);
				setcolor(GREEN);
				rectangle(start + (i)*50,200,start + (i)*50 + 50,250);
				delay(500);
				i--;
			}

			if(newStr[i] == 'Y') {
				setcolor(YELLOW);
				rectangle(start + (i+1)*50,200,start + (i+1)*50 + 50,250);
				setcolor(GREEN);
				rectangle(start + (i)*50,200,start + (i)*50 + 50,250);
				delay(500);
				setcolor(YELLOW);
				rectangle(start + (i)*50,200,start + (i)*50 + 50,250);
				i++;
			}
			else
			{
				cout<<"\nNot in the form of WcW";
				delay(1000);
				return;
			}
		}
		else if(newStr[i] == 'c')
		{
			setcolor(GREEN);
			rectangle(start + (i)*50,200,start + (i)*50 + 50,250);
			delay(500);	
			i++;

			while(newStr[i] == 'X' || newStr[i] == 'Y') {
				setcolor(YELLOW);
				rectangle(start + (i-1)*50,200,start + (i-1)*50 + 50,250);
				setcolor(GREEN);
				rectangle(start + (i)*50,200,start + (i)*50 + 50,250);
				delay(500);
				i++;
			}
			if(newStr[i] == 'B') {
				finished = 0;
			}
			else {
				cout<<"\nNot in the form of WcW";
				delay(1000);
				return;
			}
		}
		else {
			cout<<"\nNot in the form of WcW";
			delay(1000);
			return;
		}
	}
	cout<<"\nCorrect";
}

void intro() {
	setfillstyle(SOLID_FILL,BLACK);
	floodfill(0,0,255);

	settextstyle(1,0,6.5);
	setcolor(WHITE);
	outtextxy(70,70,"TURING MACHINE");
	outtextxy(150,140,"VISUALIZER");

	setcolor(YELLOW);
	settextstyle(5,0,4);
	outtextxy(400,250,"V Sriram");
	outtextxy(400,300,"Vishesh Aggarwal");
	
	setcolor(WHITE);
	settextstyle(0,0,2);
	outtextxy(120,400,"Press any key to start");
	getch();
}

int select() {
	cleardevice();
	settextstyle(1,0,4);
	setcolor(WHITE);
	outtextxy(70,70,"Select a language to visualize");

	outtextxy(70,110,"1. WWr");
	outtextxy(70,150,"2. a^n b^n");
	outtextxy(70,190,"3. WCW");
	outtextxy(70,230,"4. End visualizer");	

	setcolor(GREEN);
	setlinestyle(0,0,3);
	rectangle(65,105,350,145);

	int pts[4][4] = {65,105,350,145,65,145,350,185,65,185,350,225,65,225,350,265};

	int i = 0;

	while(1) {

		if(kbhit()) {
			int inp = (int) getch();
			switch(inp) {
				
				case 72: if(i != 0) {
							setcolor(BLACK);
						 	rectangle(pts[i][0],pts[i][1],pts[i][2],pts[i][3]);
						 	setcolor(GREEN);
						 	rectangle(pts[i-1][0],pts[i-1][1],pts[i-1][2],pts[i-1][3]);
						 	i--;
						 }
						 break;
				case 80: if(i != 3) {
							setcolor(BLACK);
						 	rectangle(pts[i][0],pts[i][1],pts[i][2],pts[i][3]);
						 	setcolor(GREEN);
						 	rectangle(pts[i+1][0],pts[i+1][1],pts[i+1][2],pts[i+1][3]);
						 	i++;
						 }
						 break;
				
				case 13: return i + 1;
			}
		}
	}
	setlinestyle(0,0,1);
	getch();
}

void ending() {
	settextstyle(1,0,8);
	setcolor(WHITE);
	outtextxy(70,70,"THANK YOU");
}

void main() {
	clrscr();

	int gd = DETECT, gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");

	intro();
	cleardevice();
	clrscr();
	int choice = select();
	cleardevice();
	clrscr();
	setcolor(BLACK);
	floodfill(1,1,255);
	setcolor(WHITE);
	while(choice != 4)
	{
		if(choice == 1)
			wWr();
		else if(choice == 2)
			anbn();
		else if(choice == 3)
			wcw();

		getch();
		choice = select();
		cleardevice();
		clrscr();
		setcolor(BLACK);
		floodfill(1,1,255);
		setcolor(WHITE);
		cleardevice();
	}
	ending();
	getch();
}