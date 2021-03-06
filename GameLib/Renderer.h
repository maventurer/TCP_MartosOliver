#pragma once
#include <vector>
#include <iostream>
#include <SFML\Graphics.hpp>

#define R Renderer::GetInstance()

class Renderer {
public:
	static Renderer& GetInstance();
	~Renderer() = default;
private:
	Renderer() = default;

public:
	sf::RenderWindow window;
	
	std::vector<sf::Sprite*> sprites;
	std::vector<sf::Texture*> textures;

	void Draw();
	void CreateWindow(unsigned int w, unsigned int h, std::string name);
	void SetBackground(std::string path);

private:
	sf::Texture bg_texture;
	sf::Sprite bg_sprite;
};