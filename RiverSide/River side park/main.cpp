    /*
    Color Codes:
    glColor3f(1.0f, 1.0f, 1.0f); // White
    glColor3f(0.0f, 0.0f, 0.0f); //Black

    glColor3f(1.0f, 0.0f, 0.0f); // Red
    glColor3f(0.0f, 0.0f, 1.0f); // Blue
    glColor3f(0.0f, 1.0f, 0.0f); //Green
    glColor3f(0.0f, 0.7f, 0.0f); // Deep Green
    glColor3f(1.0f, 1.0f, 0.0f); // Yellow
    glColor3f(0.8f, 0.8f, 0.0f);//type yellow
    glColor3f(0.6f, 1.0f, 1.0f); // Light Sky

    glColor3f(0.6f, 0.6f, 0.5f);//Ash
    glColor3f(0.5f, 1.0f, 1.0f);//cyan
    glColor3f(0.1f, 0.0f, 0.0f);//Brown
    glColor3f(1.0f, 0.5f, 0.0f);//Orange
    glColor3f(1.0f, 0.0f, 1.0f);//Purple
    glColor3f(0.4f, 0.3f, 0.1f); // Light chocolate

    glColor3f(0.5f, 0.5f, 0.5f);//Violet
    glColor3f(2.0f, 0.5f, 1.0f);//Lilac
    glColor3f(0.1f, 0.1f, 0.0f);//Bronze
    glColor3f(0.0f, 0.5f, 0.5f);//Blue-Green
    glColor3f(0.0f, 0.5f, 1.0f);//baby Blue
    glColor3f(0.5f, 0.5f, 0.5f);//grey


    glColor3f(0.1f, 0.1f, 0.1f);//Dark grey
    glColor3f(0.1f, 0.0f, 0.1f);//Dark Purple
    glColor3f(0.0f, 0.1f, 0.1f);//Dark blue
    glColor3f(0.0f, 0.1f, 0.0f);//Forest Green
    */

#include<bits/stdc++.h>
#include<GL/glu.h>
#include<GL/glut.h>
#include <windows.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include<GL/gl.h>
#include<cstdio>
#include<time.h>
# define PI 3.14159265358979323846

int i;
float radius9 =0.10f;
int triangleAmount = 100; //# of lines used to draw circle
GLfloat twicePi = 2.0f * PI;

///For cloud 1
GLfloat position = 0.0f;
GLfloat speed = 0.01f;

///For cloud 2
GLfloat position2 = 0.0f;
GLfloat speed2 = 0.015f;

///For sun
GLfloat position3 = 0.0f;
GLfloat speed3 = 0.0025f;

///For football
GLfloat position4 = -0.10f;
GLfloat speed4 = 0.05f;

///for Boat 1
GLfloat position9 = 0.0f;
GLfloat speed9 = 0.01f;

///For boat 2
GLfloat position10 = 0.0f;
GLfloat speed10 = 0.0075f;

///For Car
GLfloat position11 = 0.0f;
GLfloat speed11 = 0.01f;

///For man going bazar
GLfloat position12 = 0.0f;
GLfloat speed12 = 0.005f;

void cloud1();
void cloud2();
void boat1();
void boat2();
void car();
void manGoingBazar();

/* Initialize OpenGL Graphics */
void initGL()
{
	// Set "clearing" or background color
	glClearColor(0.0f, 1.0f, 1.0f, 1.0f); //light blue
}

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void renderBitmapString(float x, float y, float z, void *font, char *string)
{
    char *c;
    glRasterPos3f(x, y,z);
    for (c=string; *c != '\0'; c++)
    {
        glutBitmapCharacter(font, *c);
    }
}

///********************************************Drawing Cloud 1*******************************************///
void cloud1()
{
    ///********************************************Drawing Cloud 1 **********************************///

	glPushMatrix();
    glTranslatef(position,0.0f, 0.0f);

        //circle1
        GLfloat x1=-0.5f; GLfloat y1=0.90f; GLfloat radius1 =-0.04f;
        glColor3f(1.0f, 1.0f, 1.0f);
        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x1, y1); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f( x1 + (radius1 * cos(i *  twicePi / triangleAmount)),
                            y1 + (radius1 * sin(i * twicePi / triangleAmount)) );
            }
        glEnd();

        //circle2
        GLfloat x2=-0.5f; GLfloat y2=0.85f; GLfloat radius2 =-0.04f;
        glColor3f(1.0f, 1.0f, 1.0f);
        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x2, y2); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f( x2 + (radius2 * cos(i *  twicePi / triangleAmount)),
                            y2 + (radius2 * sin(i * twicePi / triangleAmount)) );
            }
        glEnd();
//circle3
        GLfloat x3=-0.45f; GLfloat y3=0.90f; GLfloat radius3 =-0.04f;
        glColor3f(1.0f, 1.0f, 1.0f);
        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x3, y3); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f( x3 + (radius3 * cos(i *  twicePi / triangleAmount)),
                            y3 + (radius3 * sin(i * twicePi / triangleAmount)) );
            }
        glEnd();

        //circle4
        GLfloat x4=-0.45f; GLfloat y4=0.85f; GLfloat radius4 =-0.04f;
        glColor3f(1.0f, 1.0f, 1.0f);
        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x4, y4); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f( x4 + (radius4 * cos(i *  twicePi / triangleAmount)),
                            y4 + (radius4 * sin(i * twicePi / triangleAmount)) );
            }
        glEnd();

        //circle5
        GLfloat x5=-0.55f; GLfloat y5=0.87f; GLfloat radius5 =-0.04f;
        glColor3f(1.0f, 1.0f, 1.0f);
        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x5, y5); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f( x5 + (radius5 * cos(i *  twicePi / triangleAmount)),
                            y5 + (radius5 * sin(i * twicePi / triangleAmount)) );
            }
        glEnd();

        //circle6
        GLfloat x6=-0.42f; GLfloat y6=0.87f; GLfloat radius6 =-0.04f;
        glColor3f(1.0f, 1.0f, 1.0f);
        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x6, y6); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f( x6 + (radius6 * cos(i *  twicePi / triangleAmount)),
                            y6 + (radius6 * sin(i * twicePi / triangleAmount)) );
            }
        glEnd();
        glPopMatrix();

}

///****************************************Drawing Cloud 2***************************************///
void cloud2()
{
    glPushMatrix();
    glTranslatef(position2,0.0f, 0.0f);

        //circle12
        GLfloat x12=0.95f; GLfloat y12=0.90f; GLfloat radius12 =0.04f;
        glColor3f(1.0f, 1.0f, 1.0f);
        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x12, y12); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f( x12 + (radius12 * cos(i *  twicePi / triangleAmount)),
                            y12 + (radius12 * sin(i * twicePi / triangleAmount)) );
            }
        glEnd();
        //circle13
        GLfloat x13=0.90f; GLfloat y13=0.90f; GLfloat radius13 =0.04f;
        glColor3f(1.0f, 1.0f, 1.0f);
        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x13, y13); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f( x13 + (radius13 * cos(i *  twicePi / triangleAmount)),
                            y13 + (radius13 * sin(i * twicePi / triangleAmount)) );
            }
        glEnd();
        //circle14
        GLfloat x14=0.87f; GLfloat y14=0.88f; GLfloat radius14 =0.04f;
        glColor3f(1.0f, 1.0f, 1.0f);
        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x14, y14); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f( x14 + (radius14 * cos(i *  twicePi / triangleAmount)),
                            y14 + (radius14 * sin(i * twicePi / triangleAmount)) );
            }
        glEnd();
        //circle15
         GLfloat x15=0.92f; GLfloat y15=0.88f; GLfloat radius15 =0.05f;
        glColor3f(1.0f, 1.0f, 1.0f);
        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x15, y15); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f( x15 + (radius15 * cos(i *  twicePi / triangleAmount)),
                            y15 + (radius15 * sin(i * twicePi / triangleAmount)) );
            }
        glEnd();
   glPopMatrix();
}

///*******************************************Boat-1 Drawing***********************************///
void boat1(){
    glPushMatrix();
    glTranslatef(position9,0.0f, 0.0f);


	glBegin(GL_POLYGON);

    glColor3f(0.0f,0.0f,0.0f);//black-base of the boat

    glVertex2f(-0.85f,0.25f);

    glVertex2f(-0.65f,0.25f);

    glVertex2f(-0.65f,0.20f);

    glVertex2f(-0.85f,0.20f);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(0.0f,0.0f,0.0f);//black front nose of the boat

    glVertex2f(-0.65f,0.25f);

    glVertex2f(-0.60f,0.25f);

    glVertex2f(-0.65f,0.20f);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(0.0f,0.0f,0.0f);//black rear nose of the boat

    glVertex2f(-0.85f,0.25f);

    glVertex2f(-0.90f,0.25f);

    glVertex2f(-0.85f,0.20f);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(0.9f,0.5f,0.2f);//hood-1 of the boat-1

    glVertex2f(-0.85f,0.25f);

    glVertex2f(-0.80f,0.35f);

    glVertex2f(-0.70f,0.35f);

    glVertex2f(-0.74f,0.25f);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(0.6f,0.3f,0.3f);//hood-2 of the boat-1

    glVertex2f(-0.74f,0.25f);

    glVertex2f(-0.70f,0.35f);

    glVertex2f(-0.65f,0.25f);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.0f, 0.0f);//stick of flag

    glVertex2f(-0.65f,0.25f);

    glVertex2f(-0.65f,0.50f);

    glVertex2f(-0.645f,0.50f);

    glVertex2f(-0.645f,0.25f);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(1.0f, 1.0f, 0.0f);//flag

    glVertex2f(-0.65f,0.50f);

    glVertex2f(-0.70f,0.45f);

    glVertex2f(-0.65f,0.40f);

    glEnd();


    glPopMatrix();

}

///*******************************************Boat-2 Drawing***********************************///
void boat2(){
    glPushMatrix();
    glTranslatef(position10,0.0f, 0.0f);


        glBegin(GL_POLYGON);

        glColor3f(0.0f, 0.0f, 0.0f);//black-base of the boat-2

        glVertex2f(0.50f,0.10f);

        glVertex2f(0.45f,0.15f);

        glVertex2f(0.85f,0.15f);

        glVertex2f(0.80f,0.10f);

        glEnd();


        glBegin(GL_POLYGON);

        glColor3f(0.6f,0.3f,0.3f);//hood-1 of the boat-2

        glVertex2f(0.65f,0.15f);

        glVertex2f(0.60f,0.25f);

        glVertex2f(0.72f,0.25f);

        glVertex2f(0.77f,0.15f);

        glEnd();


        glBegin(GL_POLYGON);

        glColor3f(0.8f,0.4f,0.3f );//hood-2 of the boat-2

        glVertex2f(0.65f,0.15f);

        glVertex2f(0.60f,0.25f);

        glVertex2f(0.56f,0.15f);

        glEnd();


        glBegin(GL_POLYGON);

        glColor3f(0.0f, 0.0f, 0.0f);//stick of boat-2

        glVertex2f(0.555f,0.15f);

        glVertex2f(0.555f,0.45f);

        glVertex2f(0.56f,0.45f);

        glVertex2f(0.56f,0.15f);

        glEnd();


        glBegin(GL_POLYGON);

        glColor3f(0.8f,0.8f,0.7f);//paal

        glVertex2f(0.555f,0.45f);

        glVertex2f(0.45f,0.20f);

        glVertex2f(0.54f,0.20f);

        glEnd();


        glBegin(GL_LINES);

        glColor3f(0.0f, 0.0f, 0.0f);//rope-1

        glVertex2f(0.54f,0.20f);

        glVertex2f(0.555f,0.15f);

        glEnd();


        glBegin(GL_LINES);

        glColor3f(0.0f, 0.0f, 0.0f);//rope-2

        glVertex2f(0.45f,0.20f);

        glVertex2f(0.555f,0.15f);

        glEnd();


        glBegin(GL_LINES);

        glColor3f(0.0f, 0.0f, 0.0f);//rope-3

        glVertex2f(0.56f,0.45f);

        glVertex2f(0.85f,0.15f);

        glEnd();

    glPopMatrix();


}

///*******************************************Car Drawing***********************************///
void car(){
     glPushMatrix();
    glTranslatef(position11,0.0f, 0.0f);

        //[5:03 AM] PRITHANJOLY BISWAS PEW
        glBegin(GL_POLYGON);  // These vertices form a closed polygon
        glColor3f(0.9f, 0.0f, 0.7f);

        glVertex2f(-0.84f, -0.69f);
        glVertex2f(-0.885f, -0.73f);
        glVertex2f(-0.88f, -0.79f);
        glVertex2f(-0.44f, -0.72f);
        glVertex2f(-0.45f, -0.66f);
        glVertex2f(-0.53f, -0.65f);
        glVertex2f(-0.58f, -0.60f);
        glVertex2f(-0.81f, -0.62f);
        glEnd();

        //car window 1
        glBegin(GL_POLYGON);  // These vertices form a closed polygon
        glColor3f(0.0f, 0.0f, 0.0f);//peach
        glVertex2f(-0.79f, -0.63f);
        glVertex2f(-0.82f, -0.70f);
        glVertex2f(-0.685f, -0.69f);
        glVertex2f(-0.69f, -0.63f);
        glEnd();

        //car window 2
        glBegin(GL_POLYGON);  // These vertices form a closed polygon
        glColor3f(0.0f, 0.0f, 0.0f);//peach
        glVertex2f(-0.67f, -0.625f);
        glVertex2f(-0.66f, -0.69f);
        glVertex2f(-0.52f, -0.68f);
        glVertex2f(-0.58f, -0.62f);
        glEnd();

        //Car Wheel
        GLfloat x7=-0.55f; GLfloat y7=-0.75f; GLfloat radius7 =-0.04f;
        glColor3f(0.0f, 0.0f, 0.0f);
        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x7, y7); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f( x7 + (radius7 * cos(i *  twicePi / triangleAmount)),
                            y7 + (radius7 * sin(i * twicePi / triangleAmount)) );
            }
        glEnd();

        GLfloat x10=-0.55f; GLfloat y10=-0.75f; GLfloat radius10 =-0.03f;
        glColor3f(0.5f, 0.5f, 0.5f);
        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x10, y10); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f( x10 + (radius10 * cos(i *  twicePi / triangleAmount)),
                            y10+ (radius10 * sin(i * twicePi / triangleAmount)) );
            }
        glEnd();

        //Car Whee2
        GLfloat x8=-0.77f; GLfloat y8=-0.76f; GLfloat radius8 =0.04f;
        glColor3f(0.0f, 0.0f, 0.0f);
        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x8, y8); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f( x8 + (radius8 * cos(i *  twicePi / triangleAmount)),
                            y8 + (radius8 * sin(i * twicePi / triangleAmount)) );
            }
        glEnd();

        GLfloat x11=-0.77f; GLfloat y11=-0.76f; GLfloat radius11 =0.03f;
        glColor3f(0.5f, 0.5f, 0.5f);
        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x11, y11); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f( x11 + (radius11 * cos(i *  twicePi / triangleAmount)),
                            y11+ (radius11 * sin(i * twicePi / triangleAmount)) );
            }
        glEnd();

    glPopMatrix();

}

///***************************************Drawing man going bazar*******************************///
void manGoingBazar()
{
    glPushMatrix();
    glTranslatef(position12,0.0f, 0.0f);

        glBegin(GL_QUADS);//(body)
        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex2f(-0.57f, -0.50f);
        glVertex2f(-0.51f, -0.50f);
        glVertex2f(0-.51f, -0.39f);
        glVertex2f(-0.57f, -0.39f);

         glEnd();
        glBegin(GL_QUADS);//legr)
        glColor3f(0.1f, 0.1f, 0.1f);
        glVertex2f(-0.57f, -0.50f);
        glVertex2f(-0.54f, -0.50f);
        glVertex2f(0-.56f, -0.60f);
        glVertex2f(-0.57f, -0.60f);

        glEnd();

        glBegin(GL_QUADS);//legl)
        glColor3f(0.1f, 0.1f, 0.1f);
        glVertex2f(-0.54f, -0.50f);
        glVertex2f(-0.51f, -0.50f);
        glVertex2f(0-.51f, -0.60f);
        glVertex2f(-0.52f, -0.60f);

        glEnd();


        glBegin(GL_QUADS);//(hand1)
        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex2f(-0.57f, -0.39f);
        glVertex2f(-0.57f, -0.43f);
        glVertex2f(0-.61f, -0.47f);
        glVertex2f(-0.60f, -0.47f);
        glEnd();

        glBegin(GL_QUADS);//(hand2)
        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex2f(-0.51f, -0.39f);
        glVertex2f(-0.51f, -0.43f);
        glVertex2f(0-.47f, -0.47f);
        glVertex2f(-0.48f, -0.47f);
        glEnd();

        glBegin(GL_QUADS);//(bags)
        glColor3f(0.1f, 0.1f, 0.0f);
        glVertex2f(-0.50f, -0.47f);
        glVertex2f(-0.45f, -0.47f);
        glVertex2f(0-.45f, -0.53f);
        glVertex2f(-0.50f, -0.53f);
        glEnd();


        //head
        GLfloat x60=-0.54f; GLfloat y60=-0.37f; GLfloat radius60=0.02f;

        glColor3f(0.0f, 0.0f, 1.0f); //Green

        glBegin(GL_TRIANGLE_FAN);

            glVertex2f(x60, y60); // center of circle

            for(i = 0; i <= triangleAmount;i++) {

                glVertex2f( x60 + (radius60 * cos(i *  twicePi / triangleAmount)),

                            y60+ (radius60 * sin(i * twicePi / triangleAmount)) );

            }
        glEnd();

    glPopMatrix();
}


void point(GLfloat c1,GLfloat c2){
         glPointSize(1.5);
    glBegin(GL_POINTS);

    glColor3ub(255,255,255);
    glVertex2f(c1, c2);
    glEnd();
}

///***************************************Drawing Stars*******************************///
void stars()
{
      point(-.93,.83);    ///recursive call
      point(-.85,.77);
      point(-.72,.70);
      point(-.74,.90);
      point(-.67,.86);
      point(-.61,.67);
      point(-.55,.59);
      point(-.51,.66);
      point(-.47,.84);
      point(-.43,.95);
      point(-.39,.75);
      point(-.33,.55);
      point(-.25,.68);
      point(-.20,.81);
      point(-.17,.74);
      point(-.12,.93);
      point(-.08,.67);
      point(-.04,.97);
      point(.06,.73);
      point(.02,.55);
      point(.93,.83);
      point(.85,.77);
      point(.72,.70);
      point(.74,.90);
      point(.67,.86);
      point(.61,.67);
      point(.55,.59);
      point(.51,.66);
      point(.47,.84);
      point(.43,.95);
      point(.39,.75);
      point(.33,.55);
      point(.25,.68);
      point(.20,.81);
      point(.17,.74);
      point(.12,.93);

}

/// move cloud1
void update(int value)
{
    if(position <-1.0)
        position = 2.0f;
    position -= speed;

	glutPostRedisplay();
	glutTimerFunc(100, update, 0);
}
///move cloud 2
void update2(int value)
{
    if(position2 <-2.0)
        position2 = 2.0f;
    position2 -= speed2;

	glutPostRedisplay();
	glutTimerFunc(100, update2, 0);
}
///move sun
void update3(int value)
{
    if(position3 >2.0)
        position3 = -2.0f;
    position3 += speed3;

	glutPostRedisplay();
	glutTimerFunc(100, update3, 0);
}

///move football
void update4(int value)
{
    if(position4 >0.50)
        position4 = -0.05f;
    position4 += speed4;

	glutPostRedisplay();
	glutTimerFunc(100, update4, 0);
}

///move boat1
void update9(int value)
{
    if(position9 >=2.0)
        position9 = -2.0f;
    position9 += speed9;

	glutPostRedisplay();
	glutTimerFunc(100, update9, 0);
}

///move boat2
void update10(int value)
{

	if(position10 <=-2.0)
        position10 = 2.0f;
    position10 -= speed10;

	glutPostRedisplay();
	glutTimerFunc(100, update10, 0);
}


///move man going bazar
void update12(int value)
{

	if(position12 >=2.0)
        position12 = -2.0f;
    position12 += speed12;

	glutPostRedisplay();
	glutTimerFunc(100, update12, 0);
}


///move Car
void update11(int value)
{

	if(position11 >2.0)
        position11 = -2.0f;
    position11 += speed11;

	glutPostRedisplay();
	glutTimerFunc(100, update11, 0);
}


void displayProposal()
{
    glClearColor(0.0f, 1.0f, 1.0f, 1.0f); //light blue
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(0.0,0.0,0.0);

    renderBitmapString(-0.30f, 0.90f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "American International University-Bangladesh (AIUB)");
    renderBitmapString(-0.18f, 0.80f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Computer Graphics Project [D]");
    renderBitmapString(-0.17f, 0.70f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Project Title: River Side View ");
    renderBitmapString(-0.24f, 0.60f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Course teacher: Mr. Mahfujur Rahman");
    renderBitmapString(-0.5f, 0.50f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "Group Members:");

    renderBitmapString(-0.5f, 0.40f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "1.Name: Md. Sadman Shabal Shopan");
    renderBitmapString(-0.5f, 0.30f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "ID: 21-45205-2");

    renderBitmapString(-0.5f, 0.20f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "2.Name: Prithanjoly Biswas Pew");
    renderBitmapString(-0.5f, 0.10f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "ID: 20-43126-1");

    renderBitmapString(-0.5f, 0.00f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "3.Name: Md. Zihad Hasan");
    renderBitmapString(-0.5f, -0.10f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "ID: 20-43655-2");

    renderBitmapString(-0.5f, -0.20f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "4.Name: Md. Radowan Ahammed");
    renderBitmapString(-0.5f, -0.30f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "ID: 19-40922-2");

    renderBitmapString(-0.5f, -0.40f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "5.Name: Susmita Alam Athina");
    renderBitmapString(-0.5f, -0.50f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "ID: 21-45411-3");

    renderBitmapString(-0.5f, -0.60f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "6.Name: Fiaz-Al-Fardin");
    renderBitmapString(-0.5f, -0.70f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "ID: 21-45413-3");

    renderBitmapString(-0.70f, -0.80f, 0.0f, GLUT_BITMAP_TIMES_ROMAN_24, "To see the day view, please press 'd', for night view, press'n' and to back to proposal page, press 'p' ");


    glFlush();
}

void displayDay_view()
{
    glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

    ///*******************************************Drawing River***********************************///
    glBegin(GL_QUADS);  // These vertices form a closed polygon
	glColor3f(0.6f, 1.0f, 1.0f); // Light Sky
	glVertex2f(-1.0f, -0.20f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(1.0f, 0.48f);
	glVertex2f(-1.0f, 0.45f);
	glEnd();


	///*******************************************Drawing Sky***********************************///
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
	glColor3f(0.6f, 1.0f, 1.0f); // Light Sky
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(1.0f, 0.60f);
	glVertex2f(-1.0f, 0.60f);
	glEnd();


	///Drawing Sun
	glPushMatrix();
    glTranslatef(position3,0.0f, 0.0f);

    GLfloat x9=-0.85f; GLfloat y9=0.85f; GLfloat radius9 =0.10f;

	glColor3f(1.0f, 0.75f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x9, y9); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x9 + (radius9 * cos(i *  twicePi / triangleAmount)),
                        y9 + (radius9 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();
	glPopMatrix();

        ///calling cloud1
        cloud1();

        ///cloud2 calling
        cloud2();

	///**********************************************Drawing Hill****************************************///
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f); // Green for the hill 1
    glVertex2f(-1.0f, 0.68f);
    glVertex2f(-0.89f, 0.80f);
    glVertex2f(-0.60f, 0.60f);
    glVertex2f(-1.00f, 0.60f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.7f, 0.0f); // Deep Green for the hill 2
    glVertex2f(-.84f, 0.60f);
    glVertex2f(-0.61f, 0.79f);
    glVertex2f(-0.30f, 0.60f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f); // Green for the hill 3
    glVertex2f(-.60f, 0.60f);
    glVertex2f(-0.37f, 0.75f);
    glVertex2f(-0.18f, 0.60f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.7f, 0.0f); // Deep Green for the hill 4
    glVertex2f(-.34f, 0.60f);
    glVertex2f(-0.13f, 0.80f);
    glVertex2f(0.12f, 0.60f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f); // Green for the hill 5
    glVertex2f(0.05f, 0.60f);
    glVertex2f(0.20f, 0.74f);
    glVertex2f(0.39f, 0.60f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f); // Green for the hill 6
    glVertex2f(0.39f, 0.60f);
    glVertex2f(0.62f, 0.79f);
    glVertex2f(0.92f, 0.60f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.7f, 0.0f); // Deep Green for the hill 7
    glVertex2f(0.20f, 0.60f);
    glVertex2f(0.42f, 0.81f);
    glVertex2f(0.68f, 0.60f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.7f, 0.0f); // Green for the hill 8
    glVertex2f(0.73f, 0.60f);
    glVertex2f(1.00f, 0.60f);
    glVertex2f(0.94f, 0.68f);
    glEnd();

    ///river opposite view///

    glBegin(GL_POLYGON);
    glColor3f(0.2f,0.4f, 0.0f);
    glVertex2f(-1.00f, 0.60f);
    glVertex2f(-1.00f, 0.45f);
    glVertex2f(1.00f, 0.48f);
    glVertex2f(1.00f, 0.60f);
    glEnd();

glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.4f, 0.0f);
    glVertex2f(-1.00f, 0.50f);
    glVertex2f(-1.00f, 0.45f);
    glVertex2f(1.00f, 0.48f);
    glVertex2f(1.00f, 0.52f);
    glEnd();

///river tree///


glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.4f, 0.0f);
    glVertex2f(-.95f, 0.55f);
    glVertex2f(-.93f, 0.55f);
    glVertex2f(-.93f, 0.50f);
    glVertex2f(-.95f, 0.50f);
    glEnd();


    GLfloat x71=-0.94f; GLfloat y71=0.57f;GLfloat radius71 =0.04f;


    glColor3f(0.2f, .8f, 0.3f); //Green

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x71, y71); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x71 + (radius71 * cos(i *  twicePi / triangleAmount)),

                        y71+ (radius71 * sin(i * twicePi / triangleAmount)) );

		}

	glEnd();


    GLfloat x70=-0.94f; GLfloat y70=0.56f;GLfloat radius70 =0.025f;


    glColor3f(0.2f, .5f, 0.0f); //Green

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x70, y70); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x70 + (radius70 * cos(i *  twicePi / triangleAmount)),

                        y70+ (radius70 * sin(i * twicePi / triangleAmount)) );

		}

	glEnd();


    ///*******************************************Drawing River***********************************///
    glBegin(GL_QUADS);  // These vertices form a closed polygon
	glColor3f(0.6f, 1.0f, 1.0f); // Light Sky
	glVertex2f(-1.0f, -0.20f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(1.0f, 0.48f);
	glVertex2f(-1.0f, 0.45f);
	glEnd();


        ///calling boat1
        boat1();

        ///Calling boat2
        boat2();


	///***************************************Drawing Grassy Ground*****************************///
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.0f, 0.7f, 0.3f); //Green
	glVertex2f(-1.0f, -0.20f);
	glVertex2f(1.0f, 0.00f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(-1.0f, -1.0f);
	glEnd();

	///Drawing House

	//Drawing Overall Shape
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.8f, 0.8f, 0.3f);//Hay Yellow
	glVertex2f(-0.90f, -0.15f);
	glVertex2f(-0.65f, -0.15f);
	glVertex2f(-0.59f, -0.24f);
	glVertex2f(-0.60f, -0.24f);
	glVertex2f(-0.60f, -0.37f);
    glVertex2f(-0.72f, -0.40f);
    glVertex2f(-0.95f, -0.40f);
	glVertex2f(-0.95f, -0.24f);
	glVertex2f(-0.98f, -0.24f);
	glEnd();


	//drawing roof
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.6f, 0.6f, 0.1f);
    glVertex2f(-0.73f, -0.24f);
    glVertex2f(-0.65f, -0.15f);
    glVertex2f(-0.59f, -0.24f);
	glEnd();

	//drawing Door Side
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.6f, 0.6f, 0.5f);//Ash
	glVertex2f(-0.72f, -.38f);
	glVertex2f(-0.72f, -.24f);
	glVertex2f(-0.60f, -.24f);
	glVertex2f(-0.60f, -.36f);
	glEnd();

	//drawing Front Side
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(1.0f, 1.0f, 0.8f);//Off White
    glVertex2f(-0.95f, -0.24f);
    glVertex2f(-0.72f, -0.24f);
    glVertex2f(-0.72f, -0.38f);
    glVertex2f(-0.95f, -0.38f);
	glEnd();

	//Drawing Window 1
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.1f, 0.1f);//Dark grey
	glVertex2f(-0.92f, -.28f);
	glVertex2f(-0.92f, -.33f);
	glVertex2f(-0.87f, -.33f);
	glVertex2f(-0.87f, -.28f);
	glEnd();

	//Drawing Window 2
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.1f, 0.1f);//Dark grey
	glVertex2f(-0.80f, -.28f);
	glVertex2f(-0.80f, -.33f);
	glVertex2f(-0.75f, -.33f);
	glVertex2f(-0.75f, -.28f);
	glEnd();

	//Drawing Door
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.1f, 0.1f);//Dark grey
	glVertex2f(-0.68f, -.28f);
	glVertex2f(-0.68f, -.37f);
	glVertex2f(-0.64f, -.37f);
	glVertex2f(-0.64f, -.28f);
	glEnd();

	//drawing Border
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.5f, 0.5f, 0.5f);//grey
    glVertex2f(-0.72f, -0.40f);
    glVertex2f(-0.97f, -0.40f);
	glVertex2f(-0.97f, -0.38f);
	glVertex2f(-0.72f, -0.38f);
	glEnd();

	//drawing Border
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.0f, 0.0f, 0.0f); //Black
	glVertex2f(-0.72f, -0.38f);
	glVertex2f(-0.58f, -0.35f);
    glVertex2f(-0.58f, -0.37f);
	glVertex2f(-0.72f, -0.40f);
	glEnd();


	///Drawing Tree

	//Drawing Log Shape
	glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.3f, 0.1f); // Light chocolate

	glVertex2f(-0.43f, -0.30f);
	glVertex2f(-0.46f, -0.37f);
	glVertex2f(-0.46f, -0.31f);
	glVertex2f(-0.55f, -0.35f);
	glVertex2f(-0.49f, -0.30f);
	glVertex2f(-0.47f, -0.26f);
	glVertex2f(-0.46f, -0.20f);
	glVertex2f(-0.48f, -0.10f);
	glVertex2f(-0.50f, -0.05f);
	glVertex2f(-0.46f, -0.09f);
	glVertex2f(-0.46f, -0.05f);
	glVertex2f(-0.44f, -0.05f);
	glVertex2f(-0.43f, -0.09f);
	glVertex2f(-0.40f, -0.05f);
	glVertex2f(-0.38f, -0.05f);
	glVertex2f(-0.39f, -0.10f);
	glVertex2f(-0.39f, -0.15f);
	glVertex2f(-0.38f, -0.20f);
	glVertex2f(-0.38f, -0.26f);
	glVertex2f(-0.37f, -0.30f);
	glVertex2f(-0.32f, -0.35f);
	glVertex2f(-0.39f, -0.31f);
	glVertex2f(-0.38f, -0.37f);

	glEnd();


	///Drawing tree leaf
    //circle 7 middle

    GLfloat x27=-0.44f; GLfloat y27=0.14f;

    glColor3f(0.0f, 0.4f, 0.0f); //Green

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x27, y27); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x27 + (radius9 * cos(i *  twicePi / triangleAmount)),

                        y27+ (radius9 * sin(i * twicePi / triangleAmount)) );

		}

	glEnd();

	//circle 1

    GLfloat x20=-0.62f; GLfloat y20=0.10f;

    glColor3f(0.0f, 1.0f, 0.0f); //Green

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x20, y20); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x20 + (radius9 * cos(i *  twicePi / triangleAmount)),

                        y20+ (radius9 * sin(i * twicePi / triangleAmount)) );

		}

	glEnd();

    //circle 2

    GLfloat x21=-0.51f; GLfloat y21=0.23f;

    glColor3f(0.0f, 1.0f, 0.0f); //Green

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x21, y21); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x21 + (radius9 * cos(i *  twicePi / triangleAmount)),

                        y21+ (radius9 * sin(i * twicePi / triangleAmount)) );

		}

	glEnd();

    //circle 3

    GLfloat x22=-0.36f; GLfloat y22=0.2f;

    glColor3f(0.0f, 1.0f, 0.0f); //Green

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x22, y22); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x22 + (radius9 * cos(i *  twicePi / triangleAmount)),

                        y22+ (radius9 * sin(i * twicePi / triangleAmount)) );

		}

	glEnd();


	//circle 4

    GLfloat x24=-0.24f; GLfloat y24=0.11f;

    glColor3f(0.0f, 1.0f, 0.0f); //Green

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x24, y24); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x24 + (radius9 * cos(i *  twicePi / triangleAmount)),

                        y24+ (radius9 * sin(i * twicePi / triangleAmount)) );

		}

	glEnd();

	//circle 5

    GLfloat x25=-0.36f; GLfloat y25=0.01f;

    glColor3f(0.0f, 1.0f, 0.0f); //Green

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x25, y25); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x25 + (radius9 * cos(i *  twicePi / triangleAmount)),

                        y25+ (radius9 * sin(i * twicePi / triangleAmount)) );

		}

	glEnd();

    //circle 6

    GLfloat x26=-0.53f; GLfloat y26=0.02f;

    glColor3f(0.0f, 1.0f, 0.0f); //Green

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x26, y26); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x26 + (radius9 * cos(i *  twicePi / triangleAmount)),

                        y26+ (radius9 * sin(i * twicePi / triangleAmount)) );

		}

	glEnd();


	///Calling man going bazar function
        manGoingBazar();


    ///grass2
    glBegin(GL_POLYGON);

    glColor3f(0.0f, 1.0f, 0.0f); // Green grass

    glVertex2f(-0.05f, -0.21f);
    glVertex2f(-0.035f, -0.225f);
    glVertex2f(0.03f, -0.21f);
    glVertex2f(0.01f, -0.21f);
    glVertex2f(0.00f, -0.20f);
    glVertex2f(0.05f, -0.14f);
    glVertex2f(-0.02f, -0.20f);
    glVertex2f(0.02f, -0.10f);
    glVertex2f(-0.03f, -0.20f);
    glVertex2f(-0.04f, -0.10f);
    glVertex2f(-0.05f, -0.20f);
    glVertex2f(-0.09f, -0.12f);
    glVertex2f(-0.06f, -0.22f);
    glEnd();

	///bench 1

	//bench seat
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.8f, 0.5f, 0.3f);//peach

	glVertex2f(-0.25f, -0.16f);
	glVertex2f(-0.28f, -0.20f);
    glVertex2f(-0.02f, -0.20f);
	glVertex2f(-0.05f, -0.16f);
	glEnd();
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.5f, 0.0f);//peach

	glVertex2f(-0.28f, -0.20f);
	glVertex2f(-0.28f, -0.22f);
    glVertex2f(-0.02f, -0.22f);
	glVertex2f(-0.02f, -0.20f);
	glEnd();

    //bench stand
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.5f, 0.0f);//peach

	glVertex2f(-0.26f, -0.22f);
	glVertex2f(-0.26f, -0.28f);
    glVertex2f(-0.24f, -0.28f);
	glVertex2f(-0.24f, -0.22f);
	glEnd();

    //bench 2nd stand
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.5f, 0.0f);//peach

	glVertex2f(-0.04f, -0.22f);
	glVertex2f(-0.04f, -0.28f);
    glVertex2f(-0.06f, -0.28f);
	glVertex2f(-0.06f, -0.22f);
	glEnd();

    ///2nd bench
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.8f, 0.5f, 0.3f);//peach

	glVertex2f(0.2f, -0.1f);
	glVertex2f(0.17f, -0.14f);
    glVertex2f(0.43f, -0.14f);
	glVertex2f(0.4f, -0.1f);
	glEnd();

    //bench base
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.5f, 0.0f);//peach

	glVertex2f(0.17f, -0.14f);
	glVertex2f(0.17f, -0.16f);
    glVertex2f(0.43f, -0.16f);
	glVertex2f(0.43f, -0.14f);
	glEnd();

    //bench stand
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.5f, 0.0f);//peach

	glVertex2f(0.19f, -0.16f);
	glVertex2f(0.19f, -0.22f);
    glVertex2f(0.21f, -0.22f);
	glVertex2f(0.21f, -0.16f);
	glEnd();

    //bench stand
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.5f, 0.0f);//peach

	glVertex2f(0.39f, -0.16f);
	glVertex2f(0.39f, -0.22f);
    glVertex2f(0.41f, -0.22f);
	glVertex2f(0.41f, -0.16f);
	glEnd();


	///grass1

    glBegin(GL_POLYGON);

    glColor3f(0.0f, 1.0f, 0.0f); // Green grass

    glVertex2f(0.45f, -0.21f);
    glVertex2f(0.475f, -0.225f);
    glVertex2f(.48f, -0.21f);
    glVertex2f(0.51f, -0.21f);
    glVertex2f(0.50f, -0.20f);
    glVertex2f(.55f, -0.14f);
    glVertex2f(0.48f, -0.20f);
    glVertex2f(0.52f, -0.10f);
    glVertex2f(.47f, -0.20f);
    glVertex2f(0.46f, -0.10f);
    glVertex2f(0.45f, -0.20f);
    glVertex2f(.41f, -0.12f);
    glVertex2f(.44f, -0.22f);
    glEnd();



    ///3rd bench
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.8f, 0.5f, 0.3f);//peach

	glVertex2f(0.8f, -0.06f);
	glVertex2f(0.78f, -0.1f);
    glVertex2f(1.0f, -0.1f);
	glVertex2f(1.0f, -0.06f);
	glEnd();

	//bench base
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.5f, 0.0f);//peach

	glVertex2f(0.78f, -0.1f);
	glVertex2f(0.78f, -0.12f);
    glVertex2f(1.0f, -0.12f);
	glVertex2f(1.0f, -0.1f);
	glEnd();


    //bench stand
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.5f, 0.0f);//peach

	glVertex2f(0.79f, -0.12f);
	glVertex2f(0.79f, -0.18f);
    glVertex2f(.81f, -0.18f);
	glVertex2f(.81f, -0.12f);
	glEnd();


    //bench stand
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.5f, 0.0f);//peach

	glVertex2f(0.99f, -0.12f);
	glVertex2f(0.99f, -0.18f);
    glVertex2f(1.0f, -0.18f);
	glVertex2f(1.0f, -0.12f);
	glEnd();

    ///drawing shop
    glBegin(GL_POLYGON);//(body)
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex2f(0.50f, -0.50f);
    glVertex2f(0.53f, -0.30f);
    glVertex2f(0.73f, -0.30f);
    glVertex2f(0.70f, -0.50f);

    glEnd();

    glBegin(GL_POLYGON);//roof
    glColor3f(0.4f, 0.3f, 0.1f); // Light chocolate;
    glVertex2f(0.53f, -0.30f);
    glVertex2f(0.63f, -0.20f);
    glVertex2f(0.83f, -0.20f);
    glVertex2f(0.73f, -0.30f);
    glEnd();

    glBegin(GL_POLYGON);//ground border
    glColor3f(0.4f, 0.3f, 0.1f);//Dark grey
    glVertex2f(0.49f, -0.50f);
    glVertex2f(0.49f, -0.53f);
    glVertex2f(0.71f, -0.53f);
    glVertex2f(0.71f, -0.50f);
    glVertex2f(0.71f, -0.53f);

    glEnd();

    glBegin(GL_POLYGON);//piller
    glColor3f(0.4f, 0.3f, 0.1f);//Dark grey// Deep Green for the hill 2
    glVertex2f(0.80f, -0.48f);
    glVertex2f(0.81f, -0.48f);
    glVertex2f(0.80f, -0.22f);
    glVertex2f(0.81f, -0.22f);
    glVertex2f(0.80f, -0.23f);

    glEnd();



	///Calling man going bazar function
        manGoingBazar();


    ///human2 zihad
    glBegin(GL_QUADS);  // body
    glColor3f(1.0f, 0.0f, 1.0f);//peach

	glVertex2f(-0.15f, -0.16f);
	glVertex2f(-0.15f, -0.08f);
    glVertex2f(-0.10f, -0.08f);
	glVertex2f(-0.10f, -0.16f);
	glEnd();

    glBegin(GL_QUADS);  // handR
    glColor3f(1.0f, 0.0f, 1.0f);//purple

	glVertex2f(-0.15f, -0.08f);
	glVertex2f(-0.15f, -0.12f);
    glVertex2f(-0.20f, -0.15f);
	glVertex2f(-0.19f, -0.15f);
	glEnd();

	glBegin(GL_QUADS);  // handL
    glColor3f(1.0f, 0.0f, 1.0f);//purple

	glVertex2f(-0.10f, -0.08f);
	glVertex2f(-0.10f, -0.12f);
    glVertex2f(-0.06f, -0.15f);
	glVertex2f(-0.05f, -0.15f);
	glEnd();
	//head
    GLfloat x61=-0.125f; GLfloat y61=-0.07f; GLfloat radius61=0.02f;

      glColor3f(0.5f, 0.5f, 0.5f); //Green

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x61, y61); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x61 + (radius61 * cos(i *  twicePi / triangleAmount)),

                        y61+ (radius61 * sin(i * twicePi / triangleAmount)) );

		}

	glEnd();


	///human3 #zihad
	glBegin(GL_QUADS);  // body
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);

	glVertex2f(0.25f, -0.10f);
	glVertex2f(0.30f,  -0.10f);
    glVertex2f(0.30f,  -0.02f);
	glVertex2f(0.25f, -0.02f);
	glEnd();

	glBegin(GL_QUADS);  // handR
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);

	glVertex2f(0.25f, -0.02f);
	glVertex2f(0.25f,  -0.06f);
    glVertex2f(0.23f,  -0.09f);
	glVertex2f(0.22f, -0.09f);
	glEnd();

	glBegin(GL_QUADS);  // handL
    glColor3f(1.0f, 0.0f, 1.0f);

	glVertex2f(0.30f, -0.02f);
	glVertex2f(0.30f,  -0.06f);
    glVertex2f(0.33f,  -0.09f);
	glVertex2f(0.32f, -0.09f);
	glEnd();

	//head
	 GLfloat x62=0.275f; GLfloat y62=-0.01f;GLfloat radius62=0.02f;

    glColor3f(0.1f, 0.0f, 0.0f);

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x62, y62); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x62 + (radius62 * cos(i *  twicePi / triangleAmount)),

                        y62+ (radius62 * sin(i * twicePi / triangleAmount)) );

		}

	glEnd();


	///human4 #zihad
	glBegin(GL_QUADS);  // body
    glColor3f(1.0f, 0.5f, 0.0f);

	glVertex2f(0.82f, -0.06f);
	glVertex2f(0.87f,  -0.06f);
	glVertex2f(0.87f,  0.01f);
	glVertex2f(0.82f, 0.01f);
	glEnd();

	glBegin(GL_QUADS);  //handr
    glColor3f(1.0f, 0.5f, 0.0f);

	glVertex2f(0.82f, 0.01f);
	glVertex2f(0.82f,  -0.03f);
	glVertex2f(0.78f,  -0.05f);
	glVertex2f(0.77f, -0.05f);
	glEnd();
	glBegin(GL_QUADS);  //handL

    glColor3f(1.0f, 0.5f, 0.0f);

	glVertex2f(0.87f, 0.01f);
	glVertex2f(0.87f,  -0.03f);
	glVertex2f(0.91f,  -0.05f);
	glVertex2f(0.90f, -0.05f);
	glEnd();

	//head
    GLfloat x63=0.845f; GLfloat y63=0.02f; GLfloat radius63=0.02f;

      glColor3f(0.5f, 0.5f, 0.5f); //Green

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x63, y63); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x63 + (radius63 * cos(i *  twicePi / triangleAmount)),

                        y63+ (radius63 * sin(i * twicePi / triangleAmount)) );

		}

	glEnd();

	/// human5

    glBegin(GL_QUADS);  // body
    glColor3f(0.0f, 0.5f, 1.0f);

	glVertex2f(0.68f, -0.16f);
	glVertex2f(0.74f,  -0.16f);
	glVertex2f(0.74f, -0.06f);
	glVertex2f(0.68f,  -0.06f);

	glEnd();

	 glBegin(GL_QUADS);  // hhandr
    glColor3f(0.0f, 0.5f, 1.0f);

	glVertex2f(0.68f, -0.06f);
	glVertex2f(0.68f,  -0.10f);
	glVertex2f(0.64f, -0.18f);
	glVertex2f(0.63f,  -0.18f);

	glEnd();


    glBegin(GL_QUADS);  // hhandl
    glColor3f(0.0f, 0.5f, 1.0f);

	glVertex2f(0.74f, -0.06f);
	glVertex2f(0.74f,  -0.10f);
	glVertex2f(0.78f,  -0.18f);
	glVertex2f(0.77f,  -0.18f);
	glEnd();

	glBegin(GL_QUADS);  // leg1
    glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.68f, -0.16f);
	glVertex2f(0.71f,  -0.16f);
	glVertex2f(0.70f,  -0.20f);
	glVertex2f(0.68f,  -0.20f);
	glEnd();

	glBegin(GL_QUADS);  // leg1
    glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.74f, -0.16f);
	glVertex2f(0.71f,  -0.16f);
	glVertex2f(0.72f,  -0.20f);
	glVertex2f(0.74f,  -0.20f);
	glEnd();

	//head
	GLfloat x64=0.71f; GLfloat y64=-0.05f; GLfloat radius64=0.02f;

     glColor3f(0.0f, 0.0f, 0.0f);

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x64, y64); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x64 + (radius64 * cos(i *  twicePi / triangleAmount)),

                        y64+ (radius64 * sin(i * twicePi / triangleAmount)) );

		}
	glEnd();


	///Playing child 1

	//humanleg
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.23f, -0.50f);
	glVertex2f(-0.25f, -0.55f);
    glVertex2f(-0.26f, -0.60f);
	glVertex2f(-0.28f, -0.60f);
    glVertex2f(-0.26f, -0.50f);
    glEnd();

    //humanleg2
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.19f, -0.50f);
	glVertex2f(-0.15f, -0.60f);
    glVertex2f(-0.16f, -0.60f);
	glVertex2f(-0.20f, -0.55f);
    glVertex2f(-0.22f, -0.50f);
    glEnd();

    //right arm
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.9f, 0.7f, 0.5f);
	glVertex2f(-0.19f, -0.41f);
	glVertex2f(-0.19f, -0.43f);
    glVertex2f(-0.16f, -0.46f);
	glVertex2f(-0.15f, -0.46f);
    glEnd();

    //left arm
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.9f, 0.7f, 0.5f);
	glVertex2f(-0.26f, -0.42f);
	glVertex2f(-0.32f, -0.47f);
    glVertex2f(-0.31f, -0.47f);
	glVertex2f(-0.26f, -0.44f);
    glEnd();

    //humanbody
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(-0.26f, -0.42f);
	glVertex2f(-0.26f, -0.50f);
    glVertex2f(-0.19f, -0.50f);
	glVertex2f(-0.19f, -0.41f);
    glEnd();

    //humanneck
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.21f, -0.38f);
	glVertex2f(-0.24f, -0.42f);
    glVertex2f(-0.21f, -0.38f);
	glVertex2f(-0.24f, -0.42f);
    glEnd();

    //Football
    glPushMatrix();
    glTranslatef(position4,0.0f, 0.0f);
        GLfloat x35=-0.14; GLfloat y35=-0.55f; GLfloat radius35 =-0.025f;
        glColor3f(0.7f, 0.7f, 0.6f);
        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x35, y35); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f( x35 + (radius35 * cos(i *  twicePi / triangleAmount)),
                            y35 + (radius35 * sin(i * twicePi / triangleAmount)) );
            }

        glEnd();
    glPopMatrix();

    //head
        GLfloat x36=-0.22; GLfloat y36=-0.39; GLfloat radius36 =-0.02f;
        glColor3f(0.7f, 0.4f, 0.4f);
        glBegin(GL_TRIANGLE_FAN);
            glVertex2f(x36, y36); // center of circle
            for(i = 0; i <= triangleAmount;i++) {
                glVertex2f( x36 + (radius36 * cos(i *  twicePi / triangleAmount)),
                            y36 + (radius36 * sin(i * twicePi / triangleAmount)) );
            }
        glEnd();

	///playing child 2

    glBegin(GL_QUADS);  // body
    glColor3f(0.5f, 1.0f, 1.0f);

	glVertex2f(0.35f, -0.30f);
	glVertex2f(0.42f,  -0.30f);
	glVertex2f(0.42f, -0.45f);
	glVertex2f(0.35f,  -0.45f);

	glEnd();

	glBegin(GL_QUADS);  // legr
    glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.35f, -0.45f);
	glVertex2f(0.385f,  -0.45f);
	glVertex2f(0.37f,  -0.57f);
	glVertex2f(0.35f,  -0.57f);
	glEnd();

	glBegin(GL_QUADS);  // legl
    glColor3f(0.0f, 0.0f, 0.0f);

	glVertex2f(0.42f, -0.45f);
	glVertex2f(0.385f,  -0.45f);
	glVertex2f(0.40f,  -0.57f);
	glVertex2f(0.42f,  -0.57f);
	glEnd();

     glBegin(GL_QUADS);  // hhandr
    glColor3f(0.5f, 1.0f, 1.0f);

	glVertex2f(0.35f, -0.30f);
	glVertex2f(0.35f,  -0.36f);
	glVertex2f(0.31f,  -0.45f);
	glVertex2f(0.30f,  -0.45f);
	glEnd();

    glBegin(GL_QUADS);  // hhandl
    glColor3f(0.5f, 1.0f, 1.0f);

	glVertex2f(0.42f, -0.30f);
	glVertex2f(0.42f,  -0.36f);
	glVertex2f(0.45f,  -0.45f);
	glVertex2f(0.46f,  -0.45f);

	glEnd();

	//head
	GLfloat x65=0.385f; GLfloat y65=-0.28f; GLfloat radius65=0.02f;

     glColor3f(0.0f, 0.0f, 0.0f);

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x65, y65); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x65 + (radius65 * cos(i *  twicePi / triangleAmount)),

                        y65+ (radius65 * sin(i * twicePi / triangleAmount)) );

		}

      glEnd();


    ///human chiled playing with ballon

    // body
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.05f, -0.20f);
	glVertex2f(0.10f,  -0.20f);
	glVertex2f(0.10f, -0.31f);
	glVertex2f(0.05f,  -0.31f);
	glEnd();

	// legr
	glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.05f, -0.31f);
	glVertex2f(0.075f,  -0.31f);
	glVertex2f(0.06f,  -0.39f);
	glVertex2f(0.05f,  -0.39f);
	glEnd();

	// legs
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.10f, -0.31f);
	glVertex2f(0.075f,  -0.31f);
	glVertex2f(0.09f,  -0.39f);
	glVertex2f(0.10f,  -0.39f);
	glEnd();

	//handl
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.05f, -0.20f);
	glVertex2f(0.05f,  -0.25f);
	glVertex2f(0.02f,  -0.33f);
	glVertex2f(0.01f,  -0.33f);
	glEnd();

	//hand2
	glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.10f, -0.20f);
	glVertex2f(0.10f,  -0.24f);
	glVertex2f(0.13f,  -0.28f);
	glVertex2f(0.15f,  -0.28f);
	glEnd();

	glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(0.13f, -0.28f);
	glVertex2f(0.15f,  -0.28f);
	glVertex2f(0.14f,  -0.20f);
	glVertex2f(0.13f,  -0.20f);
	glEnd();

    //head
	GLfloat x66=0.075f; GLfloat y66=-0.18f; GLfloat radius66=0.02f;
    glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x66, y66); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x66 + (radius65 * cos(i *  twicePi / triangleAmount)),
                        y66+ (radius65 * sin(i * twicePi / triangleAmount)) );
		}
      glEnd();

    //ballon1
	GLfloat x67=0.16f; GLfloat y67=-0.07f; GLfloat radius67=0.03f;
    glColor4f(1.0f, 0.0f, 0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x67, y67); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x67 + (radius67 * cos(i *  twicePi / triangleAmount)),
                        y67+ (radius67 * sin(i * twicePi / triangleAmount)) );

		}
      glEnd();

    //rope1
    glBegin(GL_LINES);
    glVertex2f(0.13f, -0.20f);  // Start point of the line
    glVertex2f(0.16f, -0.07f);    // End point of the line
    glEnd();

    //ballon2
	GLfloat x68=0.10f; GLfloat y68=-0.07f; GLfloat radius68=0.03f;
    glColor3f(0.0f, 0.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x68, y68); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x68 + (radius67 * cos(i *  twicePi / triangleAmount)),
                        y68+ (radius67 * sin(i * twicePi / triangleAmount)) );
		}
    glEnd();

    //rope2
    glBegin(GL_LINES);
    glVertex2f(0.14f, -0.20f);  // Start point of the line
    glVertex2f(0.10f, -0.07f);    // End point of the line
    glEnd();


	///******************************************Drawing Road***********************************///

	//Drawing White Stripe
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-1.0f, -0.68f);
	glVertex2f(1.0f, -0.58f);
	glVertex2f(1.0f, -0.92f);
	glVertex2f(0.25f, -1.0f);
	glVertex2f(-1.0f, -1.0f);
	glEnd();


	//Drawing Black Road
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.0f, 0.0f, 0.0f); //Black
	glVertex2f(-1.0f, -0.70f);
	glVertex2f(1.0f, -0.60f);
	glVertex2f(1.0f, -0.75f);
	glVertex2f(-1.0f, -0.95f);
	//glVertex2f(-1.0f, -1.0f);
	glEnd();

	//Drawing Dark Gray Road
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.1f, 0.1f);//Dark grey
	glVertex2f(-1.0f, -0.96f);
	glVertex2f(1.0f, -0.76f);
	glVertex2f(1.0f, -0.90f);
	glVertex2f(0.06f, -1.0f);
	glVertex2f(-1.0f, -1.0f);
	glEnd();


	///lamp post1///


    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex2f(-.96f, -0.57f);
    glVertex2f(-0.93f, -.57f);
    glVertex2f(-0.93f, -.56f);
    glVertex2f(-.98f, -0.56f);
    glVertex2f(-.98f, -0.71f);
    glVertex2f(-.96f, -0.71f);
	glEnd();


    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.7f, 0.7f, 0.6f);
    glVertex2f(-.93f, -0.56f);
    glVertex2f(-0.93f, -.58f);
    glVertex2f(-0.88f, -.58f);
    glVertex2f(-.88f, -0.56f);

	glEnd();


    ///light2///
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex2f(-0.58f, -.56f);
    glVertex2f(-.55f, -0.56f);
    glVertex2f(-0.55f, -.55f);
    glVertex2f(-.60f, -0.55f);
    glVertex2f(-.60f, -0.70f);
    glVertex2f(-0.58f, -.70f);
	glEnd();


    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.7f, 0.7f, 0.6f);
    glVertex2f(-0.55f, -.55f);
    glVertex2f(-.55f, -0.57f);
    glVertex2f(-0.50f, -.57f);
    glVertex2f(-.50f, -0.55f);
	glEnd();

    ///light3///
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.1f, 0.1f);//Dark grey
    glVertex2f(-0.18f, -.54f);
    glVertex2f(-.15f, -0.54f);
    glVertex2f(-0.15f, -.53f);
    glVertex2f(-.20f, -0.53f);
    glVertex2f(-0.20f, -.67f);
    glVertex2f(-0.18f, -.67f);
    glEnd();


    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.7f, 0.7f, 0.6f);
    glVertex2f(-0.15f, -.53f);
    glVertex2f(-.15f, -0.55f);
    glVertex2f(-0.10f, -.55f);
    glVertex2f(-.10f, -0.53f);
	glEnd();

    ///light4///
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.1f, 0.1f);//Dark grey
    glVertex2f(0.17f, -.53f);
    glVertex2f(.20f, -0.53f);
    glVertex2f(0.20f, -.52f);
    glVertex2f(.15f, -0.52f);
    glVertex2f(0.15f, -.65f);
    glVertex2f(0.17f, -.65f);
    glEnd();



    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.7f, 0.7f, 0.6f);
    glVertex2f(0.20f, -.54f);
    glVertex2f(.25f, -0.54f);
    glVertex2f(0.25f, -.52f);
    glVertex2f(.20f, -0.52f);
    glEnd();

    ///light5///
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.1f, 0.1f);//Dark grey
    glVertex2f(0.52f, -.51f);
    glVertex2f(.55f, -0.51f);
    glVertex2f(0.55f, -.50f);
    glVertex2f(.50f, -0.50f);
    glVertex2f(0.50f, -.62f);
    glVertex2f(0.52f, -.62f);
    glEnd();

    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.7f, 0.7f, 0.6f);
    glVertex2f(0.55f, -.52f);
    glVertex2f(.60f, -0.52f);
    glVertex2f(0.60f, -.50f);
    glVertex2f(.55f, -0.50f);
    glEnd();

    ///light6///
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.1f, 0.1f);//Dark grey
    glVertex2f(0.87f, -.50f);
    glVertex2f(.90f, -0.50f);
    glVertex2f(0.90f, -.49f);
    glVertex2f(.85f, -0.49f);
    glVertex2f(0.85f, -.60f);
    glVertex2f(0.87f, -.60f);
    glEnd();

    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.7f, 0.7f, 0.6f);
    glVertex2f(0.90f, -.51f);
    glVertex2f(.95f, -0.51f);
    glVertex2f(0.95f, -.49f);
    glVertex2f(.90f, -0.49f);
    glEnd();

	///calling car function
	car();


	glFlush();  // Render now



}


void displayNight_view(){

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    ///*******************************************Drawing river***********************************///
    glEnable(GL_LIGHTING);//Enable Light Effect
    GLfloat global_ambient14[] = {0.6, 0.8, 1.0, 1.0};//ambient RGBA intensity of light
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient14);

    glBegin(GL_QUADS);  // These vertices form a closed polygon
	glColor3f(0.6f, 1.0f, 1.0f); // Light Sky
	glVertex2f(-1.0f, -0.20f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(1.0f, 0.48f);
	glVertex2f(-1.0f, 0.45f);
	glEnd();

	glDisable(GL_LIGHTING);

	///*******************************************Drawing Sky***********************************///
	 glEnable(GL_LIGHTING);//Enable Light Effect
    GLfloat global_ambient[] = {0.0, 0.0, 0.2, 1.0}; //ambient RGBA intensity of light
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);

	glBegin(GL_POLYGON);  // These vertices form a closed polygon
	glColor3f(0.6f, 1.0f, 1.0f); // Light Sky
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(1.0f, 0.60f);
	glVertex2f(-1.0f, 0.60f);
	glEnd();
    glDisable(GL_LIGHTING);


    glEnable(GL_LIGHTING);//Enable Light Effect
    GLfloat global_ambient3[] = {1.0, 1.0, 1.0, 1.0}; //ambient RGBA intensity of light
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient3);


        ///calling cloud1

        cloud1();

        ///cloud2 calling
        cloud2();
        glDisable(GL_LIGHTING);

    ///**********************************************Drawing Moon****************************************///
    //circle1

    GLfloat x_1=-0.85f; GLfloat y_1=0.85f; GLfloat radius_1 =0.10f;

	glColor3f(1.0f, 1.0f, 1.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x_1, y_1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x_1 + (radius_1 * cos(i *  twicePi / triangleAmount)),
                        y_1 + (radius_1 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();


	//circle2


    GLfloat x_2=-0.80f; GLfloat y_2=0.89f; GLfloat radius_2 =0.10f;

	glColor3f(0.0f, 0.0f, 0.0f);
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x_2, y_2); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x_2 + (radius_2 * cos(i *  twicePi / triangleAmount)),
                        y_2 + (radius_2 * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

        ///calling stars
        stars();


	///**********************************************Drawing Hill****************************************///


    glEnable(GL_LIGHTING);//Enable Light Effect
    GLfloat global_ambient2[] ={0.5, 0.5, 0.5, 1.0};//ambient RGBA intensity of light
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient2);


    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f); // Green for the hill 1
    glVertex2f(-1.0f, 0.68f);
    glVertex2f(-0.89f, 0.80f);
    glVertex2f(-0.60f, 0.60f);
    glVertex2f(-1.00f, 0.60f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.7f, 0.0f); // Deep Green for the hill 2
    glVertex2f(-.84f, 0.60f);
    glVertex2f(-0.61f, 0.79f);
    glVertex2f(-0.30f, 0.60f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f); // Green for the hill 3
    glVertex2f(-.60f, 0.60f);
    glVertex2f(-0.37f, 0.75f);
    glVertex2f(-0.18f, 0.60f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.7f, 0.0f); // Deep Green for the hill 4
    glVertex2f(-.34f, 0.60f);
    glVertex2f(-0.13f, 0.80f);
    glVertex2f(0.12f, 0.60f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f); // Green for the hill 5
    glVertex2f(0.05f, 0.60f);
    glVertex2f(0.20f, 0.74f);
    glVertex2f(0.39f, 0.60f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f); // Green for the hill 6
    glVertex2f(0.39f, 0.60f);
    glVertex2f(0.62f, 0.79f);
    glVertex2f(0.92f, 0.60f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.7f, 0.0f); // Deep Green for the hill 7
    glVertex2f(0.20f, 0.60f);
    glVertex2f(0.42f, 0.81f);
    glVertex2f(0.68f, 0.60f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.7f, 0.0f); // Green for the hill 8
    glVertex2f(0.73f, 0.60f);
    glVertex2f(1.00f, 0.60f);
    glVertex2f(0.94f, 0.68f);
    glEnd();

    glDisable(GL_LIGHTING);

    ///river opposite view///
    glEnable(GL_LIGHTING);//Enable Light Effect
    GLfloat global_ambient10[] = {0.0, 0.2, 0.0, 1.0}; //ambient RGBA intensity of light
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient10);

    glBegin(GL_POLYGON);
    glColor3f(0.2f,0.4f, 0.0f);
    glVertex2f(-1.00f, 0.60f);
    glVertex2f(-1.00f, 0.45f);
    glVertex2f(1.00f, 0.48f);
    glVertex2f(1.00f, 0.60f);
    glEnd();
    glDisable(GL_LIGHTING);

     glEnable(GL_LIGHTING);//Enable Light Effect
    GLfloat global_ambient11[] = {0.4, 0.2, 0.0, 1.0}; //ambient RGBA intensity of light
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient11);

    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.4f, 0.0f);
    glVertex2f(-1.00f, 0.50f);
    glVertex2f(-1.00f, 0.45f);
    glVertex2f(1.00f, 0.48f);
    glVertex2f(1.00f, 0.52f);
    glEnd();
    glDisable(GL_LIGHTING);

///river tree///


    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.4f, 0.0f);
    glVertex2f(-.95f, 0.55f);
    glVertex2f(-.93f, 0.55f);
    glVertex2f(-.93f, 0.50f);
    glVertex2f(-.95f, 0.50f);
    glEnd();

    glEnable(GL_LIGHTING);//Enable Light Effect
    GLfloat global_ambient13[] = {0.0, 0.5, 0.0, 1.0}; //ambient RGBA intensity of light
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient13);

    GLfloat x71=-0.94f; GLfloat y71=0.57f;GLfloat radius71 =0.04f;


    glColor3f(0.2f, .8f, 0.3f); //Green

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x71, y71); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x71 + (radius71 * cos(i *  twicePi / triangleAmount)),

                        y71+ (radius71 * sin(i * twicePi / triangleAmount)) );

		}

	glEnd();


    GLfloat x70=-0.94f; GLfloat y70=0.56f;GLfloat radius70 =0.025f;


    glColor3f(0.2f, .5f, 0.0f); //Green

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x70, y70); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x70 + (radius70 * cos(i *  twicePi / triangleAmount)),
                        y70+ (radius70 * sin(i * twicePi / triangleAmount)) );

		}

	glEnd();
	glDisable(GL_LIGHTING);

	///***************************************Ship-1 Drawing*****************************///
    glBegin(GL_POLYGON);

    glColor3f(1.0f, 0.0f, 0.0f);//red-base of the ship-1

    glVertex2f(0.20f,0.0f);

    glVertex2f(0.18f,0.03f);

    glVertex2f(0.42f,0.03f);

    glVertex2f(0.40f,0.0f);

    glEnd();


     glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.0f, 0.0f);//black-base of the ship-1

    glVertex2f(0.18f,0.03f);

    glVertex2f(0.13f,0.10f);

    glVertex2f(0.14f,0.12f);

    glVertex2f(0.45f,0.12f);

    glVertex2f(0.46f,0.08f);

    glVertex2f(0.42f,0.03f);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(1.0f, 0.0f, 0.0f);//red-window of the ship-1

    glVertex2f(0.18f,0.07f);

    glVertex2f(0.18f,0.09f);

    glVertex2f(0.24f,0.09f);

    glVertex2f(0.24f,0.07f);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(1.0f, 0.0f, 0.0f);//red-window of the ship-1

    glVertex2f(0.26f,0.07f);

    glVertex2f(0.26f,0.09f);

    glVertex2f(0.32f,0.09f);

    glVertex2f(0.32f,0.07f);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(1.0f, 0.0f, 0.0f);//red-window of the ship-1

    glVertex2f(0.34f,0.07f);

    glVertex2f(0.34f,0.09f);

    glVertex2f(0.40f,0.09f);

    glVertex2f(0.40f,0.07f);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(1.0f, 1.0f, 1.0f);//house-1 of the ship-1

    glVertex2f(0.28f,0.12f);

    glVertex2f(0.28f,0.22f);

    glVertex2f(0.36f,0.22f);

    glVertex2f(0.36f,0.12f);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(1.0f, 1.0f, 1.0f);//house-2 of the ship-1

    glVertex2f(0.32f,0.17f);

    glVertex2f(0.32f,0.30f);

    glVertex2f(0.40f,0.30f);

    glVertex2f(0.40f,0.17f);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(1.0f, 0.0f, 0.0f);//shed of house-1 of the ship-1

    glVertex2f(0.27f,0.22f);

    glVertex2f(0.27f,0.23f);

    glVertex2f(0.37f,0.23f);

    glVertex2f(0.37f,0.22f);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(1.0f, 0.0f, 0.0f);//shed of house-2 of the ship-1

    glVertex2f(0.31f,0.30f);

    glVertex2f(0.31f,0.31f);

    glVertex2f(0.41f,0.31f);

    glVertex2f(0.41f,0.30f);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(1.0f, 0.0f, 0.0f);//bottom of house-2 of the ship-1

    glVertex2f(0.36f,0.12f);

    glVertex2f(0.36f,0.17f);

    glVertex2f(0.40f,0.17f);

    glVertex2f(0.40f,0.12f);

    glEnd();


    glBegin(GL_LINES);

    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(0.28f,0.12f);

    glVertex2f(0.28f,0.22f);

    glEnd();


    glBegin(GL_LINES);

    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(0.36f,0.12f);

    glVertex2f(0.36f,0.22f);

    glEnd();


     glBegin(GL_LINES);

    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(0.32f,0.23f);

    glVertex2f(0.32f,0.30f);

    glEnd();


    glBegin(GL_LINES);

    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(0.40f,0.17f);

    glVertex2f(0.40f,0.30f);

    glEnd();


      glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.0f, 0.0f);//window of house-1 of the ship-1

    glVertex2f(0.29f,0.17f);

    glVertex2f(0.29f,0.19f);

    glVertex2f(0.32f,0.19f);

    glVertex2f(0.32f,0.17f);

    glEnd();


      glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.0f, 0.0f);//window of house-1 of the ship-1

    glVertex2f(0.325f,0.17f);

    glVertex2f(0.325f,0.19f);

    glVertex2f(0.355f,0.19f);

    glVertex2f(0.355f,0.17f);

    glEnd();


      glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.0f, 0.0f);//window of house-2 of the ship-1

    glVertex2f(0.33f,0.26f);

    glVertex2f(0.33f,0.28f);

    glVertex2f(0.36f,0.28f);

    glVertex2f(0.36f,0.26f);

    glEnd();


     glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.0f, 0.0f);//window of house-2 of the ship-1

    glVertex2f(0.365f,0.26f);

    glVertex2f(0.365f,0.28f);

    glVertex2f(0.395f,0.28f);

    glVertex2f(0.395f,0.26f);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(1.0f, 1.0f, 1.0f);//antenna

    glVertex2f(0.20f,0.12f);

    glVertex2f(0.20f,0.42f);

    glVertex2f(0.202f,0.42f);

    glVertex2f(0.202f,0.12f);

    glEnd();


    glBegin(GL_LINES);

    glColor3f(1.0f, 1.0f, 1.0f);//antenna

    glVertex2f(0.16f,0.24f);

    glVertex2f(0.24f,0.24f);

    glEnd();


    glBegin(GL_LINES);

    glColor3f(1.0f, 1.0f, 1.0f);//antenna

    glVertex2f(0.17f,0.28f);

    glVertex2f(0.23f,0.28f);

    glEnd();


    glBegin(GL_LINES);

    glColor3f(1.0f, 1.0f, 1.0f);//antenna

    glVertex2f(0.18f,0.32f);

    glVertex2f(0.22f,0.32f);

    glEnd();


     glBegin(GL_POLYGON);

    glColor3f(1.0f, 0.0f, 0.0f);//khuti

    glVertex2f(0.15f,0.12f);
    glVertex2f(0.15f,0.13f);
    glVertex2f(0.16f,0.13f);
    glVertex2f(0.16f,0.12f);

    glEnd();

    ///***************************************Drawing Speed Boat*****************************///


     glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.0f, 0.0f);//base of speed boat

    glVertex2f(-0.10f,-0.05f);

    glVertex2f(-0.12f,0.0f);

    glVertex2f(0.08f,0.02f);

    glVertex2f(0.05f,-0.05f);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(1.0f, 1.0f, 1.0f);//base of speed boat

    glVertex2f(-0.08f,0.005f);

    glVertex2f(-0.08f,0.07f);

    glVertex2f(0.02f,0.07f);

    glVertex2f(0.04f,0.015f);

    glEnd();


     glBegin(GL_POLYGON);

    glColor3f(1.0f, 0.0f, 0.0f);//hood of speed boat

    glVertex2f(-0.09f,0.07f);

    glVertex2f(-0.09f,0.08f);

    glVertex2f(0.03f,0.08f);

    glVertex2f(0.03f,0.07f);

    glEnd();


     glBegin(GL_LINE_LOOP);

    glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(-0.08f,0.005f);

    glVertex2f(-0.08f,0.07f);

    glVertex2f(0.02f,0.07f);

    glVertex2f(0.04f,0.015f);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.0f, 0.0f);//window

    glVertex2f(-0.07f,0.03f);

    glVertex2f(-0.07f,0.05f);

    glVertex2f(-0.05f,0.05f);

    glVertex2f(-0.05f,0.03f);

    glEnd();


    glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.0f, 0.0f);//window

    glVertex2f(-0.04f,0.03f);

    glVertex2f(-0.04f,0.05f);

    glVertex2f(-0.02f,0.05f);

    glVertex2f(-0.02f,0.03f);

    glEnd();


       glBegin(GL_POLYGON);

    glColor3f(0.0f, 0.0f, 0.0f);//window

    glVertex2f(-0.01f,0.03f);

    glVertex2f(-0.01f,0.05f);

    glVertex2f(0.01f,0.05f);

    glVertex2f(0.01f,0.03f);

    glEnd();


	///***************************************Drawing Grassy Ground*****************************///
	glEnable(GL_LIGHTING);//Enable Light Effect
    GLfloat global_ambient6[] = {0.0, 0.2, 0.0, 1.0};//ambient RGBA intensity of light
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient6);

	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.0f, 0.7f, 0.3f); //Green
	glVertex2f(-1.0f, -0.20f);
	glVertex2f(1.0f, 0.00f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(-1.0f, -1.0f);
	glEnd();

	glDisable(GL_LIGHTING);

	///Drawing House

	glEnable(GL_LIGHTING);//Enable Light Effect
    GLfloat global_ambient7[] = {1.0f, 1.0f, 0.0f, 1.0f};//ambient RGBA intensity of light
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient7);

	//Drawing Overall Shape
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.8f, 0.8f, 0.3f);//Hay Yellow
	glVertex2f(-0.90f, -0.15f);
	glVertex2f(-0.65f, -0.15f);
	glVertex2f(-0.59f, -0.24f);
	glVertex2f(-0.60f, -0.24f);
	glVertex2f(-0.60f, -0.37f);
    glVertex2f(-0.72f, -0.40f);
    glVertex2f(-0.95f, -0.40f);
	glVertex2f(-0.95f, -0.24f);
	glVertex2f(-0.98f, -0.24f);
	glEnd();


	//drawing roof
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.6f, 0.6f, 0.1f);
    glVertex2f(-0.73f, -0.24f);
    glVertex2f(-0.65f, -0.15f);
    glVertex2f(-0.59f, -0.24f);
	glEnd();

	//drawing Door Side
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.6f, 0.6f, 0.5f);//Ash
	glVertex2f(-0.72f, -.38f);
	glVertex2f(-0.72f, -.24f);
	glVertex2f(-0.60f, -.24f);
	glVertex2f(-0.60f, -.36f);
	glEnd();

	//drawing Front Side
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(1.0f, 1.0f, 0.8f);//Off White
    glVertex2f(-0.95f, -0.24f);
    glVertex2f(-0.72f, -0.24f);
    glVertex2f(-0.72f, -0.38f);
    glVertex2f(-0.95f, -0.38f);
	glEnd();
	//drawing Border
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.5f, 0.5f, 0.5f);//grey
    glVertex2f(-0.72f, -0.40f);
    glVertex2f(-0.97f, -0.40f);
	glVertex2f(-0.97f, -0.38f);
	glVertex2f(-0.72f, -0.38f);
	glEnd();

	//drawing Border
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.0f, 0.0f, 0.0f); //Black
	glVertex2f(-0.72f, -0.38f);
	glVertex2f(-0.58f, -0.35f);
    glVertex2f(-0.58f, -0.37f);
	glVertex2f(-0.72f, -0.40f);
	glEnd();
	glDisable(GL_LIGHTING);

    //Drawing Window 1
    glEnable(GL_LIGHTING);//Enable Light Effect
    GLfloat global_ambient8[] ={1.0f, 0.5f, 0.0f, 1.0f};   //ambient RGBA intensity of light
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient8);


	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.1f, 0.1f);//Dark grey
	glVertex2f(-0.92f, -.28f);
	glVertex2f(-0.92f, -.33f);
	glVertex2f(-0.87f, -.33f);
	glVertex2f(-0.87f, -.28f);
	glEnd();

	//Drawing Window 2
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.1f, 0.1f);//Dark grey
	glVertex2f(-0.80f, -.28f);
	glVertex2f(-0.80f, -.33f);
	glVertex2f(-0.75f, -.33f);
	glVertex2f(-0.75f, -.28f);
	glEnd();

	//Drawing Door
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.1f, 0.1f);//Dark grey
	glVertex2f(-0.68f, -.28f);
	glVertex2f(-0.68f, -.37f);
	glVertex2f(-0.64f, -.37f);
	glVertex2f(-0.64f, -.28f);
	glEnd();
    glDisable(GL_LIGHTING);


	///Drawing Tree

	//Drawing Log Shape
	glEnable(GL_LIGHTING);//Enable Light Effect
    GLfloat global_ambient4[] ={0.4, 0.2, 0.0, 1.0}; //ambient RGBA intensity of light
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient4);

	glBegin(GL_POLYGON);
    glColor3f(0.4f, 0.3f, 0.1f); // Light chocolate

	glVertex2f(-0.43f, -0.30f);
	glVertex2f(-0.46f, -0.37f);
	glVertex2f(-0.46f, -0.31f);
	glVertex2f(-0.55f, -0.35f);
	glVertex2f(-0.49f, -0.30f);
	glVertex2f(-0.47f, -0.26f);
	glVertex2f(-0.46f, -0.20f);
	glVertex2f(-0.48f, -0.10f);
	glVertex2f(-0.50f, -0.05f);
	glVertex2f(-0.46f, -0.09f);
	glVertex2f(-0.46f, -0.05f);
	glVertex2f(-0.44f, -0.05f);
	glVertex2f(-0.43f, -0.09f);
	glVertex2f(-0.40f, -0.05f);
	glVertex2f(-0.38f, -0.05f);
	glVertex2f(-0.39f, -0.10f);
	glVertex2f(-0.39f, -0.15f);
	glVertex2f(-0.38f, -0.20f);
	glVertex2f(-0.38f, -0.26f);
	glVertex2f(-0.37f, -0.30f);
	glVertex2f(-0.32f, -0.35f);
	glVertex2f(-0.39f, -0.31f);
	glVertex2f(-0.38f, -0.37f);

	glEnd();

    glDisable(GL_LIGHTING);

	///Drawing tree leaf
    //circle 7 middle
    glEnable(GL_LIGHTING);//Enable Light Effect
    GLfloat global_ambient5[] ={0.0, 0.5, 0.0, 1.0}; //ambient RGBA intensity of light
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient5);


    GLfloat x27=-0.44f; GLfloat y27=0.14f;

    glColor3f(0.0f, 0.4f, 0.0f); //Green

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x27, y27); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x27 + (radius9 * cos(i *  twicePi / triangleAmount)),

                        y27+ (radius9 * sin(i * twicePi / triangleAmount)) );

		}

	glEnd();

	//circle 1

    GLfloat x20=-0.62f; GLfloat y20=0.10f;

    glColor3f(0.0f, 1.0f, 0.0f); //Green

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x20, y20); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x20 + (radius9 * cos(i *  twicePi / triangleAmount)),

                        y20+ (radius9 * sin(i * twicePi / triangleAmount)) );

		}

	glEnd();

    //circle 2

    GLfloat x21=-0.51f; GLfloat y21=0.23f;

    glColor3f(0.0f, 1.0f, 0.0f); //Green

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x21, y21); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x21 + (radius9 * cos(i *  twicePi / triangleAmount)),

                        y21+ (radius9 * sin(i * twicePi / triangleAmount)) );

		}

	glEnd();

    //circle 3

    GLfloat x22=-0.36f; GLfloat y22=0.2f;

    glColor3f(0.0f, 1.0f, 0.0f); //Green

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x22, y22); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x22 + (radius9 * cos(i *  twicePi / triangleAmount)),

                        y22+ (radius9 * sin(i * twicePi / triangleAmount)) );

		}

	glEnd();


	//circle 4

    GLfloat x24=-0.24f; GLfloat y24=0.11f;

    glColor3f(0.0f, 1.0f, 0.0f); //Green

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x24, y24); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x24 + (radius9 * cos(i *  twicePi / triangleAmount)),

                        y24+ (radius9 * sin(i * twicePi / triangleAmount)) );

		}

	glEnd();

	//circle 5

    GLfloat x25=-0.36f; GLfloat y25=0.01f;

    glColor3f(0.0f, 1.0f, 0.0f); //Green

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x25, y25); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x25 + (radius9 * cos(i *  twicePi / triangleAmount)),

                        y25+ (radius9 * sin(i * twicePi / triangleAmount)) );

		}

	glEnd();

    //circle 6

    GLfloat x26=-0.53f; GLfloat y26=0.02f;

    glColor3f(0.0f, 1.0f, 0.0f); //Green

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x26, y26); // center of circle

		for(i = 0; i <= triangleAmount;i++) {

			glVertex2f( x26 + (radius9 * cos(i *  twicePi / triangleAmount)),

                        y26+ (radius9 * sin(i * twicePi / triangleAmount)) );

		}

	glEnd();
    glDisable(GL_LIGHTING);


	///bench 1
	glEnable(GL_LIGHTING);//Enable Light Effect
    GLfloat global_ambient9[] ={1.0, 0.8, 0.6, 1.0}; //ambient RGBA intensity of light
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient9);


	//bench seat
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.8f, 0.5f, 0.3f);//peach

	glVertex2f(-0.25f, -0.16f);
	glVertex2f(-0.28f, -0.20f);
    glVertex2f(-0.02f, -0.20f);
	glVertex2f(-0.05f, -0.16f);
	glEnd();
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.5f, 0.0f);//peach

	glVertex2f(-0.28f, -0.20f);
	glVertex2f(-0.28f, -0.22f);
    glVertex2f(-0.02f, -0.22f);
	glVertex2f(-0.02f, -0.20f);
	glEnd();

    //bench stand
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.5f, 0.0f);//peach

	glVertex2f(-0.26f, -0.22f);
	glVertex2f(-0.26f, -0.28f);
    glVertex2f(-0.24f, -0.28f);
	glVertex2f(-0.24f, -0.22f);
	glEnd();

    //bench 2nd stand
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.5f, 0.0f);//peach

	glVertex2f(-0.04f, -0.22f);
	glVertex2f(-0.04f, -0.28f);
    glVertex2f(-0.06f, -0.28f);
	glVertex2f(-0.06f, -0.22f);
	glEnd();

    ///2nd bench
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.8f, 0.5f, 0.3f);//peach

	glVertex2f(0.2f, -0.1f);
	glVertex2f(0.17f, -0.14f);
    glVertex2f(0.43f, -0.14f);
	glVertex2f(0.4f, -0.1f);
	glEnd();

    //bench base
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.5f, 0.0f);//peach

	glVertex2f(0.17f, -0.14f);
	glVertex2f(0.17f, -0.16f);
    glVertex2f(0.43f, -0.16f);
	glVertex2f(0.43f, -0.14f);
	glEnd();

    //bench stand
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.5f, 0.0f);//peach

	glVertex2f(0.19f, -0.16f);
	glVertex2f(0.19f, -0.22f);
    glVertex2f(0.21f, -0.22f);
	glVertex2f(0.21f, -0.16f);
	glEnd();

    //bench stand
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.5f, 0.0f);//peach

	glVertex2f(0.39f, -0.16f);
	glVertex2f(0.39f, -0.22f);
    glVertex2f(0.41f, -0.22f);
	glVertex2f(0.41f, -0.16f);
	glEnd();


	///grass
    glBegin(GL_POLYGON);

    glColor3f(0.0f, 1.0f, 0.0f); // Green grass

    glVertex2f(0.45f, -0.21f);
    glVertex2f(0.475f, -0.225f);
    glVertex2f(.48f, -0.21f);
    glVertex2f(0.51f, -0.21f);
    glVertex2f(0.50f, -0.20f);
    glVertex2f(.55f, -0.14f);
    glVertex2f(0.48f, -0.20f);
    glVertex2f(0.52f, -0.10f);
    glVertex2f(.47f, -0.20f);
    glVertex2f(0.46f, -0.10f);
    glVertex2f(0.45f, -0.20f);
    glVertex2f(.41f, -0.12f);
    glVertex2f(.44f, -0.22f);
    glEnd();

    ///grass2
    glBegin(GL_POLYGON);

    glColor3f(0.0f, 1.0f, 0.0f); // Green grass

    glVertex2f(-0.05f, -0.21f);
    glVertex2f(-0.035f, -0.225f);
    glVertex2f(0.03f, -0.21f);
    glVertex2f(0.01f, -0.21f);
    glVertex2f(0.00f, -0.20f);
    glVertex2f(0.05f, -0.14f);
    glVertex2f(-0.02f, -0.20f);
    glVertex2f(0.02f, -0.10f);
    glVertex2f(-0.03f, -0.20f);
    glVertex2f(-0.04f, -0.10f);
    glVertex2f(-0.05f, -0.20f);
    glVertex2f(-0.09f, -0.12f);
    glVertex2f(-0.06f, -0.22f);
    glEnd();


    ///3rd bench
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.8f, 0.5f, 0.3f);//peach

	glVertex2f(0.8f, -0.06f);
	glVertex2f(0.78f, -0.1f);
    glVertex2f(1.0f, -0.1f);
	glVertex2f(1.0f, -0.06f);
	glEnd();

	//bench base
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.5f, 0.0f);//peach

	glVertex2f(0.78f, -0.1f);
	glVertex2f(0.78f, -0.12f);
    glVertex2f(1.0f, -0.12f);
	glVertex2f(1.0f, -0.1f);
	glEnd();


    //bench stand
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.5f, 0.0f);//peach

	glVertex2f(0.79f, -0.12f);
	glVertex2f(0.79f, -0.18f);
    glVertex2f(.81f, -0.18f);
	glVertex2f(.81f, -0.12f);
	glEnd();


    //bench stand
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.5f, 0.0f);//peach

	glVertex2f(0.99f, -0.12f);
	glVertex2f(0.99f, -0.18f);
    glVertex2f(1.0f, -0.18f);
	glVertex2f(1.0f, -0.12f);
	glEnd();
	 glDisable(GL_LIGHTING);

    ///drawing shop
    glBegin(GL_POLYGON);//(body)
    glColor3f(0.1f, 0.1f, 0.1f);
    glVertex2f(0.50f, -0.50f);
    glVertex2f(0.53f, -0.30f);
    glVertex2f(0.73f, -0.30f);
    glVertex2f(0.70f, -0.50f);

    glEnd();

    glBegin(GL_POLYGON);//roof
    glColor3f(0.4f, 0.3f, 0.1f); // Light chocolate;
    glVertex2f(0.53f, -0.30f);
    glVertex2f(0.63f, -0.20f);
    glVertex2f(0.83f, -0.20f);
    glVertex2f(0.73f, -0.30f);
    glEnd();

    glBegin(GL_POLYGON);//ground border
    glColor3f(0.4f, 0.3f, 0.1f);//Dark grey
    glVertex2f(0.49f, -0.50f);
    glVertex2f(0.49f, -0.53f);
    glVertex2f(0.71f, -0.53f);
    glVertex2f(0.71f, -0.50f);
    glVertex2f(0.71f, -0.53f);

    glEnd();

    glBegin(GL_POLYGON);//piller
    glColor3f(0.4f, 0.3f, 0.1f);//Dark grey// Deep Green for the hill 2
    glVertex2f(0.80f, -0.48f);
    glVertex2f(0.81f, -0.48f);
    glVertex2f(0.80f, -0.22f);
    glVertex2f(0.81f, -0.22f);
    glVertex2f(0.80f, -0.23f);

    glEnd();


	///******************************************Drawing Road***********************************///

	//Drawing White Stripe
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(1.0f, 1.0f, 1.0f); // White
	glVertex2f(-1.0f, -0.68f);
	glVertex2f(1.0f, -0.58f);
	glVertex2f(1.0f, -0.92f);
	glVertex2f(0.25f, -1.0f);
	glVertex2f(-1.0f, -1.0f);
	glEnd();


	//Drawing Black Road
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.0f, 0.0f, 0.0f); //Black
	glVertex2f(-1.0f, -0.70f);
	glVertex2f(1.0f, -0.60f);
	glVertex2f(1.0f, -0.75f);
	glVertex2f(-1.0f, -0.95f);
	//glVertex2f(-1.0f, -1.0f);
	glEnd();

	//Drawing Dark Gray Road
	glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.1f, 0.1f);//Dark grey
	glVertex2f(-1.0f, -0.96f);
	glVertex2f(1.0f, -0.76f);
	glVertex2f(1.0f, -0.90f);
	glVertex2f(0.06f, -1.0f);
	glVertex2f(-1.0f, -1.0f);
	glEnd();


	///lamp post1///


    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.1f, 0.1f);//Dark grey
    glVertex2f(-.96f, -0.57f);
    glVertex2f(-0.93f, -.57f);
    glVertex2f(-0.93f, -.56f);
    glVertex2f(-.98f, -0.56f);
    glVertex2f(-.98f, -0.71f);
    glVertex2f(-.96f, -0.71f);
	glEnd();


    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(1.0f, 1.0f, 1.0f);//Dark grey
    glVertex2f(-.93f, -0.56f);
    glVertex2f(-0.93f, -.58f);
    glVertex2f(-0.88f, -.58f);
    glVertex2f(-.88f, -0.56f);

	glEnd();


    ///light2///
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.1f, 0.1f);//Dark grey
    glVertex2f(-0.58f, -.56f);
    glVertex2f(-.55f, -0.56f);
    glVertex2f(-0.55f, -.55f);
    glVertex2f(-.60f, -0.55f);
    glVertex2f(-.60f, -0.70f);
    glVertex2f(-0.58f, -.70f);
	glEnd();


    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(1.0f, 1.0f, 1.0f);//Dark grey
    glVertex2f(-0.55f, -.55f);
    glVertex2f(-.55f, -0.57f);
    glVertex2f(-0.50f, -.57f);
    glVertex2f(-.50f, -0.55f);
	glEnd();

    ///light3///
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.1f, 0.1f);//Dark grey
    glVertex2f(-0.18f, -.54f);
    glVertex2f(-.15f, -0.54f);
    glVertex2f(-0.15f, -.53f);
    glVertex2f(-.20f, -0.53f);
    glVertex2f(-0.20f, -.67f);
    glVertex2f(-0.18f, -.67f);
    glEnd();


    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(1.0f, 1.0f, 1.0f);//Dark grey
    glVertex2f(-0.15f, -.53f);
    glVertex2f(-.15f, -0.55f);
    glVertex2f(-0.10f, -.55f);
    glVertex2f(-.10f, -0.53f);
	glEnd();

    ///light4///
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.1f, 0.1f);//Dark grey
    glVertex2f(0.17f, -.53f);
    glVertex2f(.20f, -0.53f);
    glVertex2f(0.20f, -.52f);
    glVertex2f(.15f, -0.52f);
    glVertex2f(0.15f, -.65f);
    glVertex2f(0.17f, -.65f);
    glEnd();


    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(1.0f, 1.0f, 1.0f);//Dark grey
    glVertex2f(0.20f, -.54f);
    glVertex2f(.25f, -0.54f);
    glVertex2f(0.25f, -.52f);
    glVertex2f(.20f, -0.52f);
    glEnd();

    ///light5///
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.1f, 0.1f);//Dark grey
    glVertex2f(0.52f, -.51f);
    glVertex2f(.55f, -0.51f);
    glVertex2f(0.55f, -.50f);
    glVertex2f(.50f, -0.50f);
    glVertex2f(0.50f, -.62f);
    glVertex2f(0.52f, -.62f);
    glEnd();

    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(1.0f, 1.0f, 1.0f);//Dark grey
    glVertex2f(0.55f, -.52f);
    glVertex2f(.60f, -0.52f);
    glVertex2f(0.60f, -.50f);
    glVertex2f(.55f, -0.50f);
    glEnd();

    ///light6///
    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(0.1f, 0.1f, 0.1f);//Dark grey
    glVertex2f(0.87f, -.50f);
    glVertex2f(.90f, -0.50f);
    glVertex2f(0.90f, -.49f);
    glVertex2f(.85f, -0.49f);
    glVertex2f(0.85f, -.60f);
    glVertex2f(0.87f, -.60f);
    glEnd();

    glBegin(GL_POLYGON);  // These vertices form a closed polygon
    glColor3f(1.0f, 1.0f, 1.0f);//Dark grey
    glVertex2f(0.90f, -.51f);
    glVertex2f(.95f, -0.51f);
    glVertex2f(0.95f, -.49f);
    glVertex2f(.90f, -0.49f);
    glEnd();

	///calling car function
	car();



	glFlush();  // Render now

}


void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {

	    case  'd':  ///day
	        glutDestroyWindow(1);
	        glutInitWindowSize(1920, 1080);
            glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1920)/2,(glutGet(GLUT_SCREEN_HEIGHT)-1080)/2);
            glutCreateWindow("National Martyrs Memorial (Day View)");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(displayDay_view);
            break;


         case 'n':  ///night
            glutDestroyWindow(1);
	        glutInitWindowSize(1920, 1080);
            glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1920)/2,(glutGet(GLUT_SCREEN_HEIGHT)-1080)/2);
            glutCreateWindow("National Martyrs Memorial (Night View)");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(displayNight_view);
            glutPostRedisplay();
            break;

            case  'p':  ///proposal
	        glutDestroyWindow(1);
	        glutInitWindowSize(1920, 1080);

            glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1920)/2,(glutGet(GLUT_SCREEN_HEIGHT)-1080)/2);
            glutCreateWindow("Proposal page");

            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(displayProposal);
            break;

            }
}


/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv)
{
	glutInit(&argc, argv);          // Initialize GLUT
	glutInitWindowSize(1920, 1080);   // Set the window's initial width & height
	glutInitWindowPosition(0, 0);  // Set the window's initial position according to the monitor
	glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title

    glutDisplayFunc(displayDay_view);
    glutDisplayFunc(displayNight_view);
    glutDisplayFunc(displayProposal);

	glutTimerFunc(100, update, 0);      //moving cloud 1
	glutTimerFunc(100, update2, 0);     //moving cloud 2
	glutTimerFunc(100, update3, 0);     //moving sun
	glutTimerFunc(100, update4, 0);     //moving football
	glutTimerFunc(100, update9, 0);     //moving boat 1
	glutTimerFunc(100, update10, 0);    //moving boat 2
	glutTimerFunc(100, update12, 0);    //moving man going bazar
	glutTimerFunc(100, update11, 0);    //moving car

	initGL();

	sndPlaySound("music.wav",SND_ASYNC);
	glutKeyboardFunc(handleKeypress);
	glutMainLoop();                 // Enter the event-processing loop
	return 0;
}
