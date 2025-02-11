#include <GLFW/glfw3.h>


int main(){
    glfwInit();
    
    GLFWwindow* window = glfwCreateWindow(1280,720,"todo",NULL,NULL);
    
    glfwMakeContextCurrent(window);

    while(!glfwWindowShouldClose(window)){
        glClear(GL_COLOR_BUFFER_BIT);
        glClearColor(0.1f,0.1f,0.1f,0.1f);

        glfwPollEvents();
        glfwSwapBuffers(window);
    }
    glfwDestroyWindow(window);
    glfwTerminate();
     
}
