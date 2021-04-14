#version 400

in vec3 Normal;
in vec2 TexCoord;

in vec3 lightDirection1;
in vec3 lightDirection2;
in vec3 lightDirection3;
in vec3 viewerDirection;
in vec3 spotDirection1;
in vec3 spotDirection2;
in vec3 spotDirection3;

uniform sampler2D Tex1;

uniform vec4 ambientColor;
uniform vec4 diffuseColor1;
uniform vec4 diffuseColor2;
uniform vec4 diffuseColor3;
uniform vec4 specularColor1;
uniform vec4 specularColor2;
uniform vec4 specularColor3;
uniform float ambientReflection;
uniform float diffuseReflection;
uniform float specularReflection;
uniform float constantAttenuation, linearAttenuation, quadraticAttenuation; 
uniform float spotCutoff, spotExponent;

uniform float shininess;

layout( location = 0 ) out vec4 FragColor;

void main() {
    vec3 lightDir1 = normalize(lightDirection1);
    vec3 lightDir2 = normalize(lightDirection2);
    vec3 lightDir3 = normalize(lightDirection3);
    vec3 viewDir = normalize(viewerDirection);
    float distance1 = length(lightDirection1); 
    float distance2 = length(lightDirection2); 
    float distance3 = length(lightDirection3); 

    float attenuation1 = 1.0 / (constantAttenuation + linearAttenuation * distance1 + quadraticAttenuation * distance1 * distance1); 
    float attenuation2 = 1.0 / (constantAttenuation + linearAttenuation * distance2 + quadraticAttenuation * distance2 * distance2); 
    float attenuation3 = 1.0 / (constantAttenuation + linearAttenuation * distance3 + quadraticAttenuation * distance3 * distance3); 
    
    
    if (spotCutoff <= 90.0) // spotlight 
    { 
	float clampedCosine = max(0.0, dot(-lightDir1, -normalize(spotDirection1))); 
	if (clampedCosine < cos(spotCutoff * 3.14159 / 180.0)) 
		// outside of spotlight cone 
	{ attenuation1 = 0.0;  } 
	else 
	{ attenuation1 = attenuation1 * pow(clampedCosine, spotExponent); } 


	clampedCosine = max(0.0, dot(-lightDir2, -normalize(spotDirection2))); 
	if (clampedCosine < cos(spotCutoff * 3.14159 / 180.0)) 
		// outside of spotlight cone 
	{ attenuation2 = 0.0;  } 
	else 
	{ attenuation2 = attenuation2 * pow(clampedCosine, spotExponent); } 

	clampedCosine = max(0.0, dot(-lightDir3, -normalize(spotDirection3))); 
	if (clampedCosine < cos(spotCutoff * 3.14159 / 180.0)) 
		// outside of spotlight cone 
	{ attenuation3 = 0.0;  } 
	else 
	{ attenuation3 = attenuation3 * pow(clampedCosine, spotExponent); } 
     }


    vec4 ambientIllumination = ambientReflection * ambientColor;
    vec4 diffuseIllumination1 = diffuseReflection * attenuation1*  max(0.0, dot(lightDir1, Normal)) * diffuseColor1;
    vec4 diffuseIllumination2 = diffuseReflection *  attenuation2*  max(0.0, dot(lightDir2, Normal)) *  diffuseColor2;
    vec4 diffuseIllumination3 = diffuseReflection * attenuation3 * max(0.0, dot(lightDir3, Normal)) *  diffuseColor3;
    vec4 specularIllumination1 = specularReflection * pow(max(0.0, 
                               dot(-reflect(lightDir1, Normal), viewDir)), shininess) * specularColor1;

    vec4 specularIllumination2 = specularReflection * pow(max(0.0, 
                               dot(-reflect(lightDir2, Normal), viewDir)), shininess) * specularColor2;

    vec4 specularIllumination3 = specularReflection * pow(max(0.0, 
                               dot(-reflect(lightDir3, Normal), viewDir)), shininess) * specularColor3;
    vec4 texColor = texture( Tex1, TexCoord );
   
    FragColor = texColor * (ambientIllumination + diffuseIllumination1 + diffuseIllumination2 + diffuseIllumination3) + specularIllumination1 + specularIllumination2 + specularIllumination3;
}

