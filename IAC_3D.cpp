/*#ifdef _APPLE_
#include <OpenGL/OpenGL.h>
#include <GLUT/glut.h>
#include <iostream>
else**/

#include <GL/glut.h>

//#endif

void render(void);
void keyboard(unsigned char c, int x, int y);
//main procedure
int main(int argc, char** argv){
	//start the glut engine
	glutInit(&argc , argv);
	//setting colors RGB+A
	glutInitDisplayMode(GLUT_DEPTH |GLUT_RGBA | GLUT_SINGLE);
	//setting window size
	glutInitWindowSize(940,780);
	//set window position
	glutInitWindowPosition(25,30);
	//creat window for rendering
	glutCreateWindow("IAC_3D Project");
	//render Window:
	glutDisplayFunc(render);
	
	glutKeyboardFunc(keyboard);

	glutMainLoop();
	return 0;
}
//keyboard event
void keyboard(unsigned char c, int x, int y){
	if (c==27){
		exit(0);
	}
}
//void render method
void render(void){
	//clears previous rendering
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	//draw a 3d rectange
	glBegin(GL_POLYGON);
	glVertex3f(0.5,0.2,0.2);
	glVertex3f(-0.5,0.2,0.2);
	glVertex3f(-0.5,0.7,0.2);
	glVertex3f(0.5,0.7,0.2);
	glEnd();
	//send object for rendering
	glutSwapBuffers();
}
