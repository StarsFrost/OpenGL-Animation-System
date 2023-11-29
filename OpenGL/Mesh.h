#pragma once
#include <glad/glad.h>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include "Shader.h"
#include <string>
#include <vector>

struct Vertex {
	glm::vec3 position;
	glm::vec3 normal;
	glm::vec2 texCoords;
	glm::vec3 Tangent;
	glm::vec3 Bitangent;
	//bone indexes which will influence this vertex
	int m_BoneIDs[4];
	//weights from each bone
	float m_Weights[4];
};

class Texture {
public:
	unsigned int id;
	std::string type;
};

class Mesh
{
public:
	std::vector<Vertex> vertices;
	std::vector<unsigned int> indices;
	std::vector<Texture> textures;

	Mesh(std::vector<Vertex> vertices, std::vector<unsigned int> indices, std::vector<Texture> textures);
	void Draw(Shader& shader);

private:
	unsigned int VAO, VBO, EBO;
	void setupMesh();
};

