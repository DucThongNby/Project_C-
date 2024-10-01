#include<graphics.h>

void stick_man(int speed,int um_out,int um_color,int um_pattern) {
	int a = speed;

	setcolor(RED);
	circle(70 + a,370,40);
	line(70+a,410,70+a,500);
		
	//legs
	line(70+a,500,20+a,580);
	line(70+a,500,120+a,580);
		
	//right hand
	line(70 + a,420,140 + a,450);
	line(140 + a,450,160 + a, 420);
	line(70 + a,420,0 + a,450);
	setcolor(um_out);
	line(160 + a,420,160 + a, 300);
	line(70 + a,300,250 + a,300);
	arc(160 + a,300,0,180,90);
	setfillstyle(um_pattern,um_color);
	floodfill(160+a,290,um_out);
}

void stick_man_close(int speed,int um_out,int um_color,int um_pattern) {
	int a = speed;

	setcolor(RED);
	circle(70 + a,370,40);
	line(70+a,410,70+a,500);
		
	//legs
	line(70+a,500,70+a,580);
	line(70+a,500,60+a,580);
		
	//right hand
	line(70 + a,420,140 + a,450);
	line(140 + a,450,160 + a, 420);
	//left hand
	line(70 + a,420,60 + a,500);
	//umbrella
	setcolor(um_out);
	line(160 + a,420,160 + a, 300);
	line(70 + a,300,250 + a,300);
	arc(160 + a,300,0,180,90);
	setfillstyle(um_pattern,um_color);
	floodfill(160+a,290,um_out);
}

int main() {
	int s=0;
	initwindow(1200,1000,"Stickman",450,50);
	int n = 0;
	while(n <= 400) {
		cleardevice();
		if(n % 2 == 0) {
			stick_man(s,9,9,3);
		} else {
			stick_man_close(s,9,9,3);
		}
	    delay(200);
		s += 3;
		n++;
	}
	getch();
	closegraph();
}
