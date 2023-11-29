#pragma once
#include <glad/glad.h>
#include <iostream>
#include <vector>


class LoadTexture
{
public:
	static unsigned int loadCubemap(std::vector<std::string> faces);
	static unsigned int loadTexture(char const* path);
};

