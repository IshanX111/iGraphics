# include "iGraphics.h"
#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include <time.h>
double H;
int M,S;
int r=20;
int g=200;
int b=255;
int radius=5;
int m=0;
int n=0;
/*
	function iDraw() is called again and again by the system.

*/

void outSideDesign(){
   
	iFilledRectangle(m+40,n+46,688,10);
	iFilledRectangle(m+36,n+46,5,250);
	iFilledRectangle(m+36,n+296,693,10);
	iFilledRectangle(m+724,n+46,5,250);
}
void one (int x=0){
	
	iFilledRectangle(x+160,180,4,60);
	iFilledRectangle(x+160,120,4,56);
}
void two(int x=0){
	
	iFilledRectangle(x+92,236,68,4);
	
	iFilledRectangle(x+160,180,4,56);
	
	iFilledRectangle(x+96,176,64,4);
	
	iFilledRectangle(x+92,124,4,52);
	
	iFilledRectangle(x+96,120,64,4);
	
}
void three(int x=0){
	
	iFilledRectangle(x+92,236,68,4);
	
	iFilledRectangle(x+160,180,4,56);
	
	iFilledRectangle(x+96,176,64,4);
	
	iFilledRectangle(x+160,124,4,52);
	iFilledRectangle(x+96,120,64,4);
}
void four(int x=0){
	
	iFilledRectangle(x+160,180,4,60);
	
	iFilledRectangle(x+96,176,64,4);
	
	
	iFilledRectangle(x+92,180,4,60);
	
	iFilledRectangle(x+160,120,4,56);
}
void five(int x=0){
	
	iFilledRectangle(x+96,236,68,4);
	
	
	iFilledRectangle(x+92,180,4,56);
	iFilledRectangle(x+96,176,64,4);
	
	iFilledRectangle(x+160,124,4,52);
	iFilledRectangle(x+92,120,68,4);
	
}
void six(int x=0){
	
	iFilledRectangle(x+96,236,64,4);
	
	iFilledRectangle(x+96,176,64,4);
	
	iFilledRectangle(x+92,180,4,56);
	
	iFilledRectangle(x+92,124,4,52);
	
	iFilledRectangle(x+96,120,64,4);
	
	iFilledRectangle(x+160,124,4,52);

}
void seven(int x=0){
	
		iFilledRectangle(x+92,236,68,4);
	
	iFilledRectangle(x+160,180,4,56);
	iFilledRectangle(x+160,120,4,56);
}
void eight(int x=0){

	iFilledRectangle(x+96,236,64,4);
	
	iFilledRectangle(x+160,180,4,56);
	
	iFilledRectangle(x+96,176,64,4);
	
	iFilledRectangle(x+92,180,4,56);
	
	iFilledRectangle(x+92,124,4,52);
	
	iFilledRectangle(x+96,120,64,4);
	
	iFilledRectangle(x+160,124,4,52);

}
void nine(int x=0){
	
	iFilledRectangle(x+96,236,64,4);

	iFilledRectangle(x+160,180,4,56);
	
	iFilledRectangle(x+96,176,64,4);
	
	iFilledRectangle(x+92,180,4,56);
	
	iFilledRectangle(x+92,120,68,4);
	
	iFilledRectangle(x+160,124,4,52);
}
void zero(int x=0){
	
	iFilledRectangle(x+96,236,64,4);
	
	iFilledRectangle(x+160,180,4,56);
	
	iFilledRectangle(x+92,180,4,56);
	
	iFilledRectangle(x+92,124,4,52);
	
	iFilledRectangle(x+96,120,64,4);
	
	iFilledRectangle(x+160,124,4,52);
}
void point(int radius){
   iFilledCircle(282,200,radius,100);
   
   iFilledCircle(282,145,radius,100);
   
   iFilledCircle(492,200,radius,100);
   
   iFilledCircle(492,145,radius,100);
}

void change(){
	r=rand()%255;
	g=rand()%255;
	b=rand()%255;

}
void blink(){
   if(radius==0)
	   radius=5;
   else
	   radius=0;

}

void iDraw()
{
	time_t rawtime;
    tm * ptm;

    time ( &rawtime );
	
    ptm = gmtime ( &rawtime );   //getting time from bios

    H=(ptm->tm_hour+6)%24;
	M=ptm->tm_min;
	S=(ptm->tm_sec);
	//place your drawing codes here
	iClear();

	
	iSetColor(r,g,b);
	outSideDesign();
	
	
	iFilledCircle(282,200,radius,100);
   
   iFilledCircle(282,145,radius,100);
   
   iFilledCircle(492,200,radius,100);
   
   iFilledCircle(492,145,radius,100);
	
	if(H==0){
	one();
	two(90);
	}
	if(H==1){
	zero();
		one(90);
	
	}
	if(H==2){
		zero();
	two(90);
	}
	if(H==3){
		zero();
	three(90);
	}
	if(H==4){
		zero();
	  four(90);
	}
	if(H==5){
		zero();
	five(90);
	}
	if(H==6){
		zero();
	six(90);
	}
	if(H==7){
	zero();
		seven(90);
	}
	if(H==8){
		zero();
	  eight(90);
	}
	if(H==9){
		zero();
	nine(90);

	}
	
	if(H==10){
	one();
	zero(90);
	
	}
	if(H==11){
	one();
	one(90);
	}
	if(H==12){
	one();
	two(90);
	}
	if(H==13){
	one();
	three(90);
	}
	if(H==14){
	one();
		four(90);
	}
	if(H==15){
	one();
	five(90);
	}
	if(H==16){
	  one();
		six(90);
	}
	if(H==17){
	one();
		seven(90);
	}
	if(H==18){
	    one();

		eight(90);
	}
	if(H==19){
	one();
		nine(90);
	}
	if(H==20){
	  two();
		zero(90);
	}
	if(H==21){
	two();
	one(90);
		

	}
		if(H==22){
	two();
		two(90);
	}
	if(H==23){
	  two();
		three(90);
	}
	if(H==24){
	two();
	four(90);
		
	}
	///minute
	if(M>=0 && M<10){
		if(M==0){
			zero(220);
			zero(305);
	}
		if(M==1){
	    zero(220);
		one(305);
	}
	if(M==2){
		zero(220);
		two(305);
	}
	if(M==3){
	    zero(220);
		three(305);
	}
	if(M==4){
		zero(220);
		four(305);
	}
	if(M==5){
	    zero(220);
		five(305);
	}
	if(M==6){
		zero(220);
		six(305);
	}
	if(M==7){
	    zero(220);
		seven(305);
	}
	if(M==8){
		zero(220);
		eight(305);
	}
	if(M==9){
	    zero(220);
		nine(305);
	}
	}
	///last minute
	if(M%10==0){
		zero(305);
	}
	if(M%10==1){
		one(305);
	}
	if(M%10==2){
		two(305);
	}
	if(M%10==3){
		three(305);
	}
	if(M%10==4){
	
		four(305);
	}
	if(M%10==5){
		five(305);
	}
	if(M%10==6){
		six(305);
	}
	if(M%10==7){
		seven(305);
	}
	if(M%10==8){
		eight(305);
	}
	if(M%10==9){
	  nine(305);
	}
	///doshok
	if(M/10==0){
		zero(220);
	}
	if(M/10==1){
		one(220);
	}
	if(M/10==2){
		two(220);
	}
	if(M/10==3){
		three(220);
	}
	if(M/10==4){
	
		four(220);
	}
	if(M/10==5){
		five(220);
	}
	if(M/10==6){
		six(220);
	}
	if(M/10==7){
		seven(220);
	}
	if(M/10==8){
		eight(220);
	}
	if(M/10==9){
	  nine(220);
	}
	///second
	if(S>=0 && S<10){
		if(S==0){
			zero(430);
			zero(515);
	}
		if(S==1){
	    zero(430);
		one(515);
	}
	if(S==2){
		zero(430);
		two(515);
	}
	if(S==3){
	    zero(430);
		three(515);
	}
	if(S==4){
		zero(430);
		four(515);
	}
	if(S==5){
	    zero(430);
		five(515);
	}
	if(S==6){
		zero(430);
		six(515);
	}
	if(S==7){
	    zero(430);
		seven(515);
	}
	if(S==8){
		zero(430);
		eight(515);
	}
	if(S==9){
	    zero(430);
		nine(515);
	}
	}
	///last minute
	if(S%10==0){
		zero(515);
	}
	if(S%10==1){
		one(515);
	}
	if(S%10==2){
		two(515);
	}
	if(S%10==3){
		three(515);
	}
	if(S%10==4){
	
		four(515);
	}
	if(S%10==5){
		five(515);
	}
	if(S%10==6){
		six(515);
	}
	if(S%10==7){
		seven(515);
	}
	if(S%10==8){
		eight(515);
	}
	if(S%10==9){
	  nine(515);
	}
	///doshok
	if(S/10==0){
		zero(430);
	}
	if(S/10==1){
		one(430);
	}
	if(S/10==2){
		two(430);
	}
	if(S/10==3){
		three(430);
	}
	if(S/10==4){
	
		four(430);
	}
	if(S/10==5){
		five(430);
	}
	if(S/10==6){
		zero(430);
	}
	if(S/10==7){
		zero(430);
	}
	if(S/10==8){
		zero(430);
	}
	if(S/10==9){
	  zero(430);
	}
	
		
	



}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//printf("x = %d, y= %d\n",mx,my);
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
		printf("x = %d, y= %d\n",mx,my);


	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here


	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{   
	if(key=='r'||key=='R'){
	r=255;
	g=0;
	b=0;
	iPauseTimer(0);
    
}
else if(key=='g'||key=='G'){
	r=0;
	g=255;
	b=0;
	iPauseTimer(0);
	
}
else if(key=='b'||key=='B'){
	r=0;
	g=0;
	b=255;
	iPauseTimer(0);
	
}
else if(key=='n'||key=='N'){
	r=20;
	g=200;
	b=255;
	iPauseTimer(0);
	
}
else if(key=='d'||key=='D'){
	iResumeTimer(0);
	
}
else if(key=='l'){
m=m+10;
}
else if(key=='j'){
	m=m-10;

}
else if(key=='i'){
n=n+10;
}
else if(key=='k'){
	n=n-10;
}



else if(key == 'q')
	{
		exit(0);
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);
	}
	//place your codes for other keys here
}


int main()
{
	
	iSetTimer(1000,change);
	iSetTimer(800,blink);
	iInitialize(800, 350, "Moja");

	return 0;
}

