#include<GL/gl.h>
#include<iostream>
#include <GL/glut.h>
#define SPEED 30.0
#include <math.h>
int posx=0,posy=0,posz=0;
int day = 1;        //1 for day ,0 for night

float meghX = 0;
float meghY = 0;
int meghStatus = 0;

float x_rot = 0;
float y_inc = 0;
float y_dec =0;

float x3_rot = 0;
float dy_inc = 0;
float dy_dec =0;
float x_dec =0;

float hill2X = 1;
float hill2Y = 1;

//hill1
float hill11= 0;
float hill112 =0;
float hill12 =0;
float hill122 =0;
float hill13 =0;

//hill2
float hill21= 0;
float hill212 =0;
float hill22 =0;
float hill222 =0;
float hill23 =0;


#define PI 3.1416

//GLint i, j, k,x=0,y=0,speed=0,alt=0,n1=1000,n2=1100,s1=0,s2=1,s3=1;
GLfloat sun_spin=0, sun_x=0, sun_y=0,reduce=10;
GLfloat ax=0,bx=0,cx=0,dx=0,str=500.0,mn=500.0;
GLfloat sr=0.0,sg=0.749,sb=1.0;
GLfloat spin = 0.0;



void DrawCircle(float cx, float cy, float r, int num_segments){

		 glBegin(GL_TRIANGLE_FAN);
		for (int i = 0; i < num_segments; i++)
		{
		float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);//get the current angle

		float x = r * cosf(theta);//calculate the x component
		float y = r * sinf(theta);//calculate the y component

		glVertex2f(x + cx, y + cy);//output vertex

		}
		glEnd();
	}



void megh(int x){

	glColor3f(1.0, 1.0, 1.0);
	DrawCircle(100, 1000, 60, 2000);//1
	DrawCircle(200,1000, 80, 2000);//2
	DrawCircle(300, 1000, 55, 2000);//3


	DrawCircle(800, 1000, 60, 1000);//1
	DrawCircle(900,1000, 80, 1000);//2
	DrawCircle(1000, 1000, 55, 1000);//3

	DrawCircle(500, 900, 60, 2000);//1
	DrawCircle(600,900, 80, 2000);//2
	DrawCircle(700, 900, 55, 2000);//3

	DrawCircle(500, 1100, 60, 2000);//1
	DrawCircle(600,1100, 80, 2000);//2
	DrawCircle(700, 1100, 55, 2000);//3


	}


void movemegh()
	{
		//if (meghStatus == 1)
		//{
		//	meghX +=.5;
		//}
		//if (meghX>2000)
		//{
		//	meghX = -200;
		//}
		glPushMatrix();
		glTranslatef(meghX, meghY, 0);
		megh(1);
		glPopMatrix();


	}





///tree

void tree()
{
///tree1
    glColor3f(0.6156863,0,0);

    glBegin(GL_POLYGON);

        glVertex3i(50, 350, 0);
        glVertex3i(70, 350, 0);


        glVertex3i(70, 500, 0);
        glVertex3i(50, 500, 0);

    glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);

    glVertex3i(10, 500, 0);
    glVertex3i(110, 500, 0);


    glVertex3i(60, 600, 0);

glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15, 550, 0);
    glVertex3i(105, 550, 0);


    glVertex3i(60, 650, 0);



glEnd();

///tree2
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);


    glVertex3i(50+100, 350, 0);
    glVertex3i(70+100, 350, 0);


    glVertex3i(70+100, 500, 0);
    glVertex3i(50+100, 500, 0);


glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);


    glVertex3i(10+100, 500, 0);
    glVertex3i(110+100, 500, 0);


    glVertex3i(60+100, 600, 0);



glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15+100, 550, 0);
    glVertex3i(105+100, 550, 0);


    glVertex3i(60+100, 650, 0);



glEnd();
///tree3
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);


    glVertex3i(50+1000, 350+100, 0);
    glVertex3i(70+1000, 350+100, 0);


    glVertex3i(70+1000, 500+100, 0);
    glVertex3i(50+1000, 500+100, 0);


glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);


    glVertex3i(10+1000, 500+100, 0);
    glVertex3i(110+1000, 500+100, 0);


    glVertex3i(60+1000, 600+100, 0);



glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15+1000, 550+100, 0);
    glVertex3i(105+1000, 550+100, 0);


    glVertex3i(60+1000, 650+100, 0);



glEnd();
///tree4
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);


    glVertex3i(50+1100, 350+200, 0);
    glVertex3i(70+1100, 350+200, 0);


    glVertex3i(70+1100, 500+200, 0);
    glVertex3i(50+1100, 500+200, 0);


glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);


    glVertex3i(10+1100, 500+200, 0);
    glVertex3i(110+1100, 500+200, 0);


    glVertex3i(60+1100, 600+200, 0);



glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15+1100, 550+200, 0);
    glVertex3i(105+1100, 550+200, 0);


    glVertex3i(60+1100, 650+200, 0);



glEnd();
///tree5
glColor3f(0.6156863,0,0);

glBegin(GL_POLYGON);


    glVertex3i(50+900, 350+200, 0);
    glVertex3i(70+900, 350+200, 0);


    glVertex3i(70+900, 500+200, 0);
    glVertex3i(50+900, 500+200, 0);


glEnd();

  glColor3f(0.0, 0.5, 0.0);

glBegin(GL_POLYGON);


    glVertex3i(10+900, 500+200, 0);
    glVertex3i(110+900, 500+200, 0);


    glVertex3i(60+900, 600+200, 0);



glEnd();
glBegin(GL_POLYGON);


    glVertex3i(15+900, 550+200, 0);
    glVertex3i(105+900, 550+200, 0);


    glVertex3i(60+900, 650+200, 0);

glEnd();


}



///river
void river()
{
    //glColor3f(0.0352941176470588, 0.5098039215686275, 0.9568627450980392);

    glColor3f(0.0, 0.8, 0.0);
    glBegin(GL_POLYGON);

    glVertex3i(0, 0, 0);
    glVertex3i(1200, 0, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(0, 300, 0);


glEnd();



}
//land
void land()
{
    glColor3f(0.5 ,1.0 ,0.5);
    glBegin(GL_POLYGON);

    glVertex3i(0, 300, 0);
    glVertex3i(1200, 300, 0);
    glVertex3i(1200, 600, 0);
    glVertex3i(0, 600, 0);


glEnd();

}
///hill
void hill()
{

  //  glColor3f(0.50196, 0.25098, 0.0);
  //  glBegin(GL_POLYGON);

   // glVertex3i(600, 600, 0);
   // glVertex3i(800, 900, 0);
   // glVertex3i(900, 650, 0);
    //glVertex3i(600, 600, 0);

    glColor3f(0.50196, 0.25098, 0.0);
    glBegin(GL_POLYGON);

    //glVertex3i(600, 600, 0);
    glVertex3i(900, 600, 0);
    glVertex3i(1000, 800, 0);
    glVertex3i(1100, 600, 0);

     glColor3f(0.50196, 0.25098, 0.0);
    glBegin(GL_POLYGON);

    glVertex3i(1050, 600, 0);
    glVertex3i(1200, 800, 0);
    glVertex3i(1200, 600, 0);
    //glVertex3i(1100, 620, 0);




glEnd();

}

void hill1()
{

    glColor3f(0.128, 0.128, 0.128);
    glBegin(GL_POLYGON);

    glVertex3i(700+hill11, 600+hill112, 0);
    glVertex3i(900+hill12, 600+hill122, 0);
    glVertex3i(800, 950+hill13, 0);
    //glVertex3i(600, 600, 0);

glEnd();

}

void hill2()
{

    glColor3f(0.50196, 0.25098, 0.0);
    glBegin(GL_POLYGON);

    glVertex3i(800+hill2X, 600+hill2Y, 0);
    glVertex3i(900+hill2X, 900+hill2Y, 0);
    glVertex3i(1000+hill2X, 600+hill2Y, 0);
    //glVertex3i(600, 600, 0);

glEnd();

}





///house

void house()
{

///house1
glColor3f(0.5411764705882353, 0.0, 0.5411764705882353);

glBegin(GL_POLYGON);

    glVertex3i(220, 350, 0);
    glVertex3i(380, 350, 0);
    glVertex3i(380, 450, 0);
    glVertex3i(220, 450, 0);


glEnd();

glColor3f(0, 0, 1);
glBegin(GL_POLYGON);

    glVertex3i(200, 450, 0);
    glVertex3i(400, 450, 0);
    glVertex3i(300, 650, 0);



glEnd();


glColor3f(1,1,1);
glBegin(GL_POLYGON);

    glVertex3i(280, 350, 0);
    glVertex3i(320, 350, 0);
    glVertex3i(320, 450, 0);
    glVertex3i(280, 450, 0);


glEnd();
///house2
glColor3f(0.5411764705882353, 0.0, 0.5411764705882353);

glBegin(GL_POLYGON);

   // glVertex3i(420, 400, 0);
  // glVertex3i(580, 400, 0);
  //  glVertex3i(580, 500, 0);
  //  glVertex3i(420, 500, 0);


    glVertex3i(420, 400, 0);
   glVertex3i(480, 400, 0);
    glVertex3i(480, 500, 0);
    glVertex3i(420, 500, 0);





glEnd();



glColor3f(0.5411764705882353, 0.0, 0.5411764705882353);
glBegin(GL_POLYGON);


     glVertex3i(520, 400, 0);
     glVertex3i(580, 400, 0);
     glVertex3i(580, 500, 0);
     glVertex3i(520, 500, 0);

glEnd();




glColor3f(1.444, .5, 0);
glBegin(GL_POLYGON);

    glVertex3i(200+200, 450+50, 0);
    glVertex3i(400+200, 450+50, 0);
    glVertex3i(300+200, 650+50, 0);



glEnd();

glColor3f(1,1,1);
glBegin(GL_POLYGON);

    glVertex3i(280+200, 350+50, 0);
    glVertex3i(320+200, 350+50, 0);
    glVertex3i(320+200, 450+50, 0);
    glVertex3i(280+200, 450+50, 0);


glEnd();
/*

glColor3f(1,1,0);
glBegin(GL_POLYGON);

    glVertex3i(280+200, 350+50, 0);
    glVertex3i(320+200, 350+50, 0);
    glVertex3i(320+200, 450+50, 0);
    glVertex3i(280+200, 450+50, 0);


glEnd();
*/
}


///////////////////////////////////////////////////////////////////////////////

void house3d(){


	glBegin(GL_POLYGON); //House rec
	glColor3f(0.5, 0.2, 0.1);
	glVertex2i(100, 100);
	glVertex2i(350, 100);
	glVertex2i(350, 250);
	glVertex2i(100, 250);
	glEnd();




	glBegin(GL_POLYGON); //House rec border
	glColor3f(1.0, 0.3, 0.2);
	glVertex2i(90, 80);
	glVertex2i(355, 80);
	glVertex2i(350, 100);
	glVertex2i(100, 100);
	glEnd();

	glBegin(GL_POLYGON); //House door
	glColor3f(1, 1, 1);
	glVertex2i(200, 100);
	glVertex2i(250, 100);
	glVertex2i(250, 200);
	glVertex2i(200, 200);
	glEnd();


	glBegin(GL_POLYGON); //House tin
	glColor3f(0.2, 0.2, 0.1);
	glVertex2i(100, 250);
	glVertex2i(350, 250);
	glVertex2i(300, 400);
	glVertex2i(50, 400);
	glEnd();



	glBegin(GL_POLYGON); //House tri
	glColor3f(0.6, 0.3, 0.1);
	glVertex2i(25, 275);
	glVertex2i(100, 250);
	glVertex2i(50, 400);

	glEnd();




	glBegin(GL_POLYGON); //House tri down rec
	glColor3f(0.9, 0.2, 0.16);
	glVertex2i(25, 150);
	glVertex2i(100, 100);
	glVertex2i(100, 250);
	glVertex2i(25, 275);
	glEnd();




	glBegin(GL_POLYGON); //House tri down rec bor
	glColor3f(0.3, 0.3, 0.1);
	glVertex2i(20, 130);
	glVertex2i(90,80 );
	glVertex2i(100, 100);
	glVertex2i(25, 150);
	glEnd();



	glBegin(GL_POLYGON); //House tri down rec ven
	glColor3f(0.2, 0.2, 0.1);
	glVertex2i(50, 210);
	glVertex2i(75, 200);
	glVertex2i(75, 240);
	glVertex2i(50, 250);
	glEnd();




	glBegin(GL_POLYGON); //House vender
	glColor3f(0.2, 0.2, 0.1);
	glVertex2i(125, 200);
	glVertex2i(150, 200);
	glVertex2i(150, 240);
	glVertex2i(125, 240);
	glEnd();

	glBegin(GL_POLYGON); //House vender
	glColor3f(0.2, 0.2, 0.1);
	glVertex2i(300, 200);
	glVertex2i(325, 200);
	glVertex2i(325, 240);
	glVertex2i(300, 240);
	glEnd();
	 glBegin(GL_POLYGON); //Grass
	glColor3f(0.0, 0.6, 0.3);
	glVertex2i(495, 110);
	glVertex2i(480, 130);
	glVertex2i(470, 140);
	glVertex2i(490, 130);
	glVertex2i(480, 160);
	glVertex2i(500, 130);
	glVertex2i(505, 180);
	glColor3f(0.8, 0.8, 0.1);
	glVertex2i(510, 140);
	glVertex2i(530, 160);
	glVertex2i(520, 130);
	glVertex2i(540, 140);
	glVertex2i(530, 130);
	glVertex2i(515, 110);
	glEnd();

	glBegin(GL_POLYGON); //Grass
	glColor3f(0.0, 0.6, 0.1);
	glVertex2i(635, 100);
	glVertex2i(620, 120);
	glVertex2i(610, 130);
	glVertex2i(630, 120);
	glVertex2i(620, 150);
	glVertex2i(640, 130);
	glVertex2i(645, 170);
	glColor3f(0.8, 0.8, 0.1);
	glVertex2i(650, 130);
	glVertex2i(670, 150);
	glVertex2i(660, 120);
	glVertex2i(680, 130);
	glVertex2i(670, 120);
	glVertex2i(655, 100);
	glEnd();
	}


	void door3()
	{
        glBegin(GL_POLYGON); //House door
        glColor3f(0.2, 0.2, 0.1);
        glVertex3f(200, 100,0);
        glVertex3f(250, 100+y_inc,x_rot);
        glVertex3f(250, 200+y_dec,x_rot);
        glVertex3f(200, 200,0);
        glEnd();
	}

void door1()
{
     glColor3f(0.2, 0.2, 0.1);
//glColor3f(1,1,0);
glBegin(GL_POLYGON);

    glVertex3i(280, 350, 0);
    glVertex3i(320, 350+y_inc, x_rot);
    glVertex3i(320, 450+y_dec, x_rot);
    glVertex3i(280, 450, 0);


glEnd();
}

/////////////////////////////////////////////////////////////////////////////////

void door()
{
     glColor3f(0.2, 0.2, 0.1);
  //  glColor3f(1,1,0);
glBegin(GL_POLYGON);

    glVertex3i(275+200, 350+50, 0);
    glVertex3i(320+200, 350+50+y_inc, x_rot);
    glVertex3i(320+200, 450+50+y_dec, x_rot);
    glVertex3i(275+200, 450+50, 0);


glEnd();
}


void circle(GLdouble rad)
{
   glBegin(GL_POLYGON);
    {
      	for(int i=0;i<50;i++)
        {

            float pi=3.1416;
            float A=(i*2*pi)/50;
            float r=rad;
            float x = r * cos(A);

            float y = r * sin(A);
            glVertex2f(x,y );
        }
    }
    glEnd();
}




/////////////////////////////////////////////////

/// *** Windmill_Stand_Model ***///
void Windmill_Stand_Model(){

    glColor3f(0.38, 0.41, 0.36);
    glBegin(GL_POLYGON);
    glVertex2i(375, 100);
    glVertex2i(380, 240);
    glVertex2i(384, 240);
    glVertex2i(390, 100);
    glEnd();
}

///*** Windmill_Blades_Model ***///

void Windmill_Blade(){

    ///Blade_One
    glPushMatrix();
    glRotatef(spin,0,0,90);
    glBegin(GL_POLYGON);
    glVertex2i(-5, 0);
    glVertex2i(-85, -36);
    glVertex2i(-83, -37);
    glVertex2i(-3, -8);
    glEnd();
    glPopMatrix();

    ///Blade_Two
    glPushMatrix();
    glRotatef(spin,0,0,90);
    glBegin(GL_POLYGON);
    glVertex2i(0, 5);
    glVertex2i(45, 70);
    glVertex2i(50, 73);
    glVertex2i(5, 0);
    glEnd();
    glPopMatrix();

    ///Blade_Three
    glPushMatrix();
    glRotatef(spin,0,0,90);
    glBegin(GL_POLYGON);
    glVertex2i(68, -78);
    glVertex2i(0,0);
    glVertex2i(5, 5);
    glVertex2i(70, -77);
    glEnd();
    glPopMatrix();

}
///*** Windmill_Final_Model ***///
void Windmill(){



        ///Windmill_Stand
    glColor3f(0.38, 0.41, 0.36);
    glPushMatrix();
    Windmill_Stand_Model();
    glPopMatrix();

    ///Windmill_Motor
   glColor3ub(208, 211, 212);
    glPushMatrix();
    glTranslatef(380,250,0);
    circle(10);
    glPopMatrix();

    ///Windmill_Rotary_Blades
    glColor3ub(208, 211, 212);
    glPushMatrix();
    glTranslatef(380,251,0);
    Windmill_Blade();
    glPopMatrix();




}


void move_right(){

   // sun_move();

    spin = spin +.1;
    ax = ax + .05;
    bx = bx + .08;
    cx = cx + .10;
    dx = dx + .15;

    if(cx>1000){
        cx = -300;
    }
    if(bx>1000){
            bx= -400;

    }
    if(cx>1000){
            cx= -400;

    }
    if(dx>1000){
            dx= -500;

    }


    glutPostRedisplay();
}
///////////////////////////////////////////////////////





int rad,x,y,a,b,h;
bool SE,E;



///clouds
void draw_object()
{
    if(day==1)
    {
        movemegh();
        land();
        hill();
        hill1();
        hill2();

        tree();
        river();
        house();
        door();
         door1();


     house3d();
       door3();





        glPushMatrix();
        glTranslatef(posx,0,0);
       // boat();
       //  door();
        glPopMatrix();

         glColor3f(0.11, 0.23, 0.36);
    glPushMatrix();
    glTranslatef(250,500,0);//-10
    Windmill();
    glPopMatrix();

    }
}


void display(void)
{

glClear(GL_COLOR_BUFFER_BIT);



  draw_object();

glFlush();
}
void keyboardFunc(unsigned char key, int x, int y)
{
	switch(key)
	{
    case 'n':
        day=0;
        display();
        break;
	case 'd':
        day=1;
        display();
        break;
        case 'N':
        day=0;
        display();
        break;
	case 'D':
        day=1;
        display();
        break;
    case 'v':
        //meghStatus = 1;
        meghX +=4;
        break;
    case 'c':
        meghX -=4;
        break;
     case 'p':
         hill11 -=4;
         hill112 -=4;
         hill12 +=4;
         hill122 -=4;
         hill13 +=4;
        break;
     case 'o':
         hill11 +=4;
         hill112 +=4;
         hill12 -=4;
         hill122 +=4;
         hill13 -=4;
        break;
    case 'l':
         hill2X *=100;
         hill2Y *=100;
        break;
     case 'k':
          hill2X /=100;
         hill2Y /=100;
        break;
    case 'a':
        glutIdleFunc(move_right);
        break;
    case 's':
        glutIdleFunc(NULL);
        break;
   /* case 'r':
        x_rot-=0.5;
        y_inc+=5;
        y_dec-=5;
        break;
    case 't':
        x_rot+=0.5;
        y_inc-=5;
        y_dec+=5;
        break;
*/
	}

}
void update(int value) {


    if(posx>=1200)
    {
        posx=0;
    }
    else{
        posx++;
    }
    glutPostRedisplay();
	glutTimerFunc(10, update, 0);
}


void updateD(int value) {


    if(posy>=50)
    {
        posy=0;
    }
    else{
        posy++;
    }
    glutPostRedisplay();
	glutTimerFunc(40, updateD, 0);
}
void updateDoor(int value) {


    if(y_inc>=40)
    {
        x_rot=0;
        y_inc=0;
        y_dec=0;
    }
    else{
        x_rot-=0.5;
        y_inc+=5;
        y_dec-=5;
    }
    glutPostRedisplay();
	glutTimerFunc(200, updateDoor, 0);
}
void init(void)
{

glClearColor(0.6196078431372549,0.9333333333333333, 0.996078431372549, 1.0);

glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 1200.0, 0, 1200.0);


}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(1000, 600);
glutInitWindowPosition(0, 0);
glutCreateWindow("Village Scenario");


glutDisplayFunc(display);
glutKeyboardFunc(keyboardFunc);

init();
glutTimerFunc(25, update, 0);
glutTimerFunc(25, updateD, 0);
glutTimerFunc(50, updateDoor, 0);
glutMainLoop();
return 0;
}
