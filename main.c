#include <GLFW/glfw3.h>
#include <GL/gl.h> 
#include <leif/leif.h>



int main(){
    glfwInit();
    
    GLFWwindow* window = glfwCreateWindow(1280,720,"todo",NULL,NULL);
    
    glfwMakeContextCurrent(window);

    lf_init_glfw(1280,720,window);

    while(!glfwWindowShouldClose(window)){
        glClear(GL_COLOR_BUFFER_BIT);
        glClearColor(0.1f,0.1f,0.1f,0.1f);

        lf_begin();
        lf_text("fernando halllo kajajshskshs\n");
        lf_end();

        glfwPollEvents();
        glfwSwapBuffers(window);
    }
    glfwDestroyWindow(window);
    glfwTerminate();

    return 0;
     
}
