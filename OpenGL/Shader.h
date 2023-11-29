#pragma once
#include <glad/glad.h>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

class Shader
{
public:
	unsigned int ID;

	Shader(const char* vertexPath, const char* fragmentPath);
	~Shader();

	void use();
	void setBool(const std::string &name, bool value) const;
	void setInt(const std::string &name, int value) const;
	void setFloat(const std::string& name, float value) const;
	void setFloat4(const std::string& name, float value0, float value1, float value2, float value3) const;
	void setVec3(const std::string& name, float value0, float value1, float value2) const;
	void setVec3(const std::string& name, glm::vec3) const;
	void setMat4(const std::string& name, glm::mat4 mat) const;
};

