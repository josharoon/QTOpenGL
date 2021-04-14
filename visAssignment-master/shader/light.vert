#version 400



layout (location = 3) in vec3 VertexPosition;
layout (location = 4) in vec3 VertexColor;


uniform mat4 MVP;



out vec3 color;


void main(void)

{
    
	color = VertexColor;
 
	
	gl_Position = MVP * vec4(VertexPosition,1.0); 
}
