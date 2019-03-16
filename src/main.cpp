#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>

#define SCR_WIDTH 800
#define SCR_HEIGHT 600


void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow *window);

int main(){
    std::cout << "Compiled against GLFW: " <<  GLFW_VERSION_MAJOR << "."
    << GLFW_VERSION_MINOR << "." << GLFW_VERSION_REVISION << "\n";

    // glfw: initialize GLFW and OpenGL version choice
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

#ifdef __APPLE__
    // only for MacOS machines
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);
#endif

    // glfw window creation
    GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "rpg", NULL, NULL);
    if (!window){
        std::cout << "Failed to create GLFW window\n";
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);

    // Set callbacks for GLFWwindow
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);

    // GLAD: load all OpenGL function pointers
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)){
        std::cout << "Failed to initialize GLAD\n";
        return -1;
    }

    glViewport(0, 0, SCR_WIDTH, SCR_HEIGHT);

    // Render loop
    while (!glfwWindowShouldClose(window)){
        // input
        processInput(window);
        
        // render
        // glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        // glClear(GL_COLOR_BUFFER_BIT);
        
        //  Draw Cals
        // glUseProgram(shaderProgram);
        // glBindVertexArray(VAO);
        // glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
        // glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
        // glDrawArrays(GL_TRIANGLES, 0, 3);

        // glfw: swap buffers and poll IO events
        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    // glDeleteVertexArrays(1, &VAO);
    // glDeleteBuffers(1, &VBO);

    // glfw: terminate, clearing all previously allocated GLFW resources.
    glfwTerminate();
    return 0;
}


void framebuffer_size_callback(GLFWwindow* window, int width, int height){
    std::cout << "Alert, window size changed to " << width << " x " << height << "\n";
    glViewport(0, 0, width, height);
}

void processInput(GLFWwindow *window){
    if(glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS){
        glfwSetWindowShouldClose(window, true);
    }
}

