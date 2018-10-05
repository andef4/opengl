#include <GL/glx.h>

typedef GLXContext (*glXCreateContextAttribsARBProc)(Display*, GLXFBConfig, GLXContext, Bool, const int*);

GLXContext createGLXContext(int major, int minor);
