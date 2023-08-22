#pragma once

#include <gl\glew.h>
#include <glm/glm.hpp>

#include <ShadowMap.hpp>

class Light {
public:
	Light();
	Light(GLfloat red, GLfloat green, GLfloat blue, GLfloat ambientIntensity,  GLfloat diffuseIntensity,
		GLfloat shadowWidth, GLfloat shadowHeight);
	~Light();

	ShadowMap* GetShadowMap() { return shadowMap; }

	virtual void UseLight(GLuint ambientIntensityLocation, GLuint ambientColorLocation,
		GLuint diffuseIntensityLocation);
protected:
	glm::vec3 color;
	GLfloat ambientIntensity;
	GLfloat diffuseIntensity;

	glm::mat4 lightProj;

	ShadowMap* shadowMap;
};