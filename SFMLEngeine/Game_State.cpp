#include <sstream>
#include <iostream>
#include "Game_State.h"

namespace Exla {
	GameState::GameState(GameDataRef data)
		: _data(data) { }

	void GameState::init() {
		_data->assets.loadTexture("SS13", "ss13_64.png");
		_sprite.setTexture(_data->assets.getTexture("SS13"));
		_sprite.setPosition(30, 30);
		_sprite.scale(0.5, 0.5);

		_data->assets.loadSound("Test", "ambience/ambimalf.ogg");
		_sound.setBuffer(_data->assets.getSound("Test"));
		

		sf::View view(sf::FloatRect(0, 0, 512, 512));
		_data->window.setView(view);
	}


	void GameState::handleInput() {
		sf::Event evt;

		while (_data->window.pollEvent(evt)) {
			switch (evt.type) {

			case sf::Event::Closed:
				_data->window.close();
				
			case sf::Event::Resized:
				//add black bars

			case sf::Event::KeyPressed:
				std::cout << "Key Pressed \n";
				_sound.play();
				switch (evt.key.code)
				{
				case sf::Keyboard::A:
					std::cout << "A Bois \n";

				default:
					break;
				}


			case sf::Event::KeyReleased:
				std::cout << "Key Released \n";


			default:
				break;
			}
		}

		_data->window.clear();
		_data->window.draw(_sprite);
		_data->window.display();


	}

	void GameState::update(float dt) {
		
	}

	void GameState::render(float dt) {

	}
}
