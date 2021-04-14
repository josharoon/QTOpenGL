#version 400

layout (location = 5) in vec3 VertexPosition;
layout (location = 6) in vec3 VertexColor;

out vec3 Color;

uniform mat4 ModelViewMatrix;
uniform mat4 MVP;

void main()
{
    Color = VertexColor;

    gl_Position = MVP * vec4(VertexPosition,1.0);
}
