#version 400

layout (location = 0) in vec3 VertexPosition;
layout (location = 1) in vec3 VertexNormal;
layout (location = 2) in vec2 VertexTexCoord;

out vec3 Normal;
out vec2 TexCoord;
out vec3 lightDirection1;
out vec3 lightDirection2;
out vec3 lightDirection3;
out vec3 viewerDirection;
out vec3 spotDirection1;
out vec3 spotDirection2;
out vec3 spotDirection3;

uniform mat4 ModelViewMatrix;
uniform mat3 NormalMatrix;
uniform mat4 ProjectionMatrix;
uniform mat4 MVP;
uniform vec4 lightPosition1;
uniform vec4 lightPosition2;
uniform vec4 lightPosition3;

void main()
{
    vec4 eyeVertex = ModelViewMatrix * vec4(VertexPosition,1.0);
    vec4 temp =  ModelViewMatrix * vec4(vec3(0.2f,0.0f,0.0f),1.0);
    TexCoord = VertexTexCoord;
    Normal = normalize( NormalMatrix * VertexNormal);
    lightDirection1 = lightPosition1.xyz - eyeVertex.xyz;
    lightDirection2 = lightPosition2.xyz - eyeVertex.xyz;
   lightDirection3 = lightPosition3.xyz - eyeVertex.xyz;
   spotDirection1 = lightDirection1;//-temp.xyz;
 spotDirection2 = lightDirection2;//-temp.xyz;
spotDirection3 = lightDirection3;//-temp.xyz;



    viewerDirection = -eyeVertex.xyz;

    gl_Position = MVP * vec4(VertexPosition,1.0);
}


