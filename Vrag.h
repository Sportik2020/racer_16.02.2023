#pragma once
#include <SFML/Graphics.hpp>
#include "settings.h" 
struct Vrag {
	sf::Texture texture;
	sf::Sprite sprite;
};
void vragInit(Vrag& obj, sf::Vector2f pos, std::string fileName) {
	obj.texture.loadFromFile(fileName);
	obj.sprite.setTexture(obj.texture);
	obj.sprite.setPosition(pos);
}
void vragUpdate(Vrag& obj) {
	float PosX[]{ 130.f, 140.f, 150.f, 160.f, 170.f, 180.f, 190.f,200.f,210.f,220.f,230.f,240.f,250.f,260.f,
		270.f,280.f,290.f,300.f,315.f,330.f };
	float y = -100.f;
	float PosY[]{ y, 2 * y, 3 * y,4 * y ,5 * y,6 * y,7 * y,8 * y,9 * y, 10 * y,11 * y,12 * y,13 * y,14 * y,
		15 * y,16 * y,17 * y,18 * y,19 * y,20 * y,21 * y, 22 * y };
	int index = rand() % 22;

	obj.sprite.move(0.f, VragSpeedy);
	if (obj.sprite.getPosition().y >= WINDOW_HEIGHT) {
		obj.sprite.setPosition(PosX[index], PosY[index]);
	}

}
void vragDraw(sf::RenderWindow& window, Vrag& obj) {
	window.draw(obj.sprite);
}