#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glColor3f (0.0, 0.0, 0.0);

  glBegin(GL_QUADS);

    glColor3f (0.0, 1.0, 1.0);
    glVertex3f(0.0f, 0.0f, 0.0f);
    glVertex3f(0.0f, 0.05f, 0.0f);
    glVertex3f(0.30f, 0.05f, 0.0f);
    glVertex3f(0.30f, 0.00f, 0.0f);

    glColor3f (0.8, 0.8, 0.8);
    glVertex3f(0.0f, 0.05f, 0.0f);
    glVertex3f(0.0f, 0.40f, 0.0f);
    glVertex3f(0.30f, 0.40f, 0.0f);
    glVertex3f(0.30f, 0.05f, 0.0f);
//first building
    glColor3f (0.196078, 0.803922, 0.196078);
    glVertex3f(0.05f, 0.05f, 0.0f);
    glVertex3f(0.15f, 0.05f, 0.0f);
    glVertex3f(0.15f, 0.26f, 0.0f);
    glVertex3f(0.05f, 0.25f, 0.0f);
 //first building side
    glColor3f (0.196078, 0.803922, 0.196078);
    glVertex3f(0.05f, 0.05f, 0.0f);
    glVertex3f(0.05f, 0.25f, 0.0f);
    glVertex3f(0.04f, 0.23f, 0.0f);
    glVertex3f(0.04f, 0.06f, 0.0f);

    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(0.07f, 0.08f, 0.0f);
    glVertex3f(0.13f, 0.08f, 0.0f);
    glVertex3f(0.13f, 0.12f, 0.0f);
    glVertex3f(0.07f, 0.12f, 0.0f);

    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(0.07f, 0.15f, 0.0f);
    glVertex3f(0.13f, 0.15f, 0.0f);
    glVertex3f(0.13f, 0.19f, 0.0f);
    glVertex3f(0.07f, 0.19f, 0.0f);

    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(0.07f, 0.21f, 0.0f);
    glVertex3f(0.13f, 0.21f, 0.0f);
    glVertex3f(0.13f, 0.24f, 0.0f);
    glVertex3f(0.07f, 0.24f, 0.0f);

//2nd building
    glColor3f (0.5, 0.0, 0.0);
    glVertex3f(0.15f, 0.05f, 0.0f);
    glVertex3f(0.15f, 0.30f, 0.0f);
    glVertex3f(0.25f, 0.30f, 0.0f);
    glVertex3f(0.25f, 0.05f, 0.0f);

// 2nd building windows by floor sequence
//2nd building 1st floor
    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(0.16f, 0.07f, 0.0f);
    glVertex3f(0.19f, 0.07f, 0.0f);
    glVertex3f(0.19f, 0.09f, 0.0f);
    glVertex3f(0.16f, 0.09f, 0.0f);

    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(0.21f, 0.07f, 0.0f);
    glVertex3f(0.24f, 0.07f, 0.0f);
    glVertex3f(0.24f, 0.09f, 0.0f);
    glVertex3f(0.21f, 0.09f, 0.0f);

//2nd building 2nd floor.

    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(0.16f, 0.12f, 0.0f);
    glVertex3f(0.19f, 0.12f, 0.0f);
    glVertex3f(0.19f, 0.14f, 0.0f);
    glVertex3f(0.16f, 0.14f, 0.0f);

    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(0.21f, 0.12f, 0.0f);
    glVertex3f(0.24f, 0.12f, 0.0f);
    glVertex3f(0.24f, 0.14f, 0.0f);
    glVertex3f(0.21f, 0.14f, 0.0f);
//2nd building 3rd floor.
    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(0.16f, 0.17f, 0.0f);
    glVertex3f(0.19f, 0.17f, 0.0f);
    glVertex3f(0.19f, 0.19f, 0.0f);
    glVertex3f(0.16f, 0.19f, 0.0f);

    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(0.21f, 0.17f, 0.0f);
    glVertex3f(0.24f, 0.17f, 0.0f);
    glVertex3f(0.24f, 0.19f, 0.0f);
    glVertex3f(0.21f, 0.19f, 0.0f);

//2nd building 4th floor
    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(0.16f, 0.22f, 0.0f);
    glVertex3f(0.19f, 0.22f, 0.0f);
    glVertex3f(0.19f, 0.24f, 0.0f);
    glVertex3f(0.16f, 0.24f, 0.0f);

    glVertex3f(0.21f, 0.22f, 0.0f);
    glVertex3f(0.24f, 0.22f, 0.0f);
    glVertex3f(0.24f, 0.24f, 0.0f);
    glVertex3f(0.21f, 0.24f, 0.0f);
//2nd building 5th floor
    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(0.16f, 0.27f, 0.0f);
    glVertex3f(0.19f, 0.27f, 0.0f);
    glVertex3f(0.19f, 0.29f, 0.0f);
    glVertex3f(0.16f, 0.29f, 0.0f);

    glVertex3f(0.21f, 0.27f, 0.0f);
    glVertex3f(0.24f, 0.27f, 0.0f);
    glVertex3f(0.24f, 0.29f, 0.0f);
    glVertex3f(0.21f, 0.29f, 0.0f);

//3rd building
    glColor3f (0.4, 0.4, 0.4);
    glVertex3f(0.25f, 0.05f, 0.0f);
    glVertex3f(0.30f, 0.05f, 0.0f);
    glVertex3f(0.30f, 0.32f, 0.0f);
    glVertex3f(0.25f, 0.32f, 0.0f);
//3rd building windows
    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(0.26f, 0.07f, 0.0f);
    glVertex3f(0.29f, 0.07f, 0.0f);
    glVertex3f(0.29f, 0.13f, 0.0f);
    glVertex3f(0.26f, 0.13f, 0.0f);

    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(0.26f, 0.17f, 0.0f);
    glVertex3f(0.29f, 0.17f, 0.0f);
    glVertex3f(0.29f, 0.23f, 0.0f);
    glVertex3f(0.26f, 0.23f, 0.0f);

    glColor3f (1.0, 1.0, 1.0);
    glVertex3f(0.26f, 0.26f, 0.0f);
    glVertex3f(0.29f, 0.26f, 0.0f);
    glVertex3f(0.29f, 0.30f, 0.0f);
    glVertex3f(0.26f, 0.30f, 0.0f);

    // last border
    glColor3f (0.0, 0.0, 0.0);
    glVertex3f(0.04f, 0.05f, 0.0f);
    glVertex3f(0.04f, 0.06f, 0.0f);
    glVertex3f(0.05f, 0.05f, 0.0f);
    glVertex3f(0.05f, 0.04f, 0.0f);

    glColor3f (0.0, 0.0, 0.0);
    glVertex3f(0.05f, 0.04f, 0.0f);
    glVertex3f(0.05f, 0.05f, 0.0f);
    glVertex3f(0.30f, 0.05f, 0.0f);
    glVertex3f(0.30f, 0.04f, 0.0f);

glEnd();

glBegin(GL_LINES);
//1st building win 1
glColor3f(0.0 ,0.0,0.0);
glVertex3f( 0.10f, 0.08f ,0.0f );
glVertex3f( 0.10f, 0.12f ,0.0f );
//sideline 1 building
glColor3f(0.0 ,0.0,0.0);
glVertex3f( 0.05f, 0.05f ,0.0f );
glVertex3f( 0.05f, 0.25f ,0.0f );

//sideline 2 building
glColor3f(0.0 ,0.0,0.0);
glVertex3f( 0.15f, 0.05f ,0.0f );
glVertex3f( 0.15f, 0.30f ,0.0f );
//sideline 1 building
glColor3f(0.0 ,0.0,0.0);
glVertex3f( 0.25f, 0.05f ,0.0f );
glVertex3f( 0.25f, 0.32f ,0.0f );

// 1st building win 2
glColor3f(0.0 ,0.0,0.0);
glVertex3f( 0.10f, 0.15f ,0.0f );
glVertex3f( 0.10f, 0.19f ,0.0f );
//1st building win 3
glColor3f(0.0 ,0.0,0.0);
glVertex3f( 0.10f, 0.21f ,0.0f );
glVertex3f( 0.10f, 0.24f ,0.0f );
// 2nd building 1st floor
glColor3f(0.0 ,0.0,0.0);
glVertex3f( 0.15f, 0.10f ,0.0f );
glVertex3f( 0.25f, 0.10f ,0.0f );
// 2nd building 2nd floor
glColor3f(0.0 ,0.0,0.0);
glVertex3f( 0.15f, 0.15f ,0.0f );
glVertex3f( 0.25f, 0.15f ,0.0f );
// 2nd floor 3rd floor
glColor3f(0.0 ,0.0,0.0);
glVertex3f( 0.15f, 0.20f ,0.0f );
glVertex3f( 0.25f, 0.20f ,0.0f );
// 2nd floor 4th floor
glColor3f(0.0 ,0.0,0.0);
glVertex3f( 0.15f, 0.25f ,0.0f );
glVertex3f( 0.25f, 0.25f ,0.0f );

//3rd building
glColor3f(0.0 ,0.0,0.0);
glVertex3f( 0.25f, 0.14f ,0.0f );
glVertex3f( 0.30f, 0.14f ,0.0f );

glVertex3f( 0.25f, 0.24f ,0.0f );
glVertex3f( 0.30f, 0.24f ,0.0f );
glEnd();

glBegin(GL_TRIANGLES);
    glColor3f (0.5, 0.0, 0.0);
    glVertex3f(0.15f, 0.30f, 0.0f);
    glVertex3f(0.06f, 0.25f, 0.0f);
    glVertex3f(0.15f, 0.26f, 0.0f);

    glColor3f (0.4, 0.4, 0.4);
    glVertex3f(0.25f, 0.30f, 0.0f);
    glVertex3f(0.25f, 0.32f, 0.0f);
    glVertex3f(0.22f, 0.30f, 0.0f);

glEnd();

glFlush ();
}




void init (void)
{
    glClearColor (1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, 1.0, 0.0, 1.0, -10.0, 10.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (600, 600);
    glutInitWindowPosition (200, 200);
    glutCreateWindow ("hello");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
