#include <sstream>
#include <iostream>
#include "Game_State.h"

namespace Exla {
	GameState::GameState(GameDataRef data)
		: _data(data) { }

	void GameState::init() {
		
	}


	void GameState::handleInput() {
		sf::Event evt;

		while (_data->window.pollEvent(evt)) {
			switch (evt.type) {

			case sf::Event::Closed:
				_data->window.close();


			case sf::Event::KeyPressed:
				std::cout << "Key Pressed \n";

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
		_data->window.display();


	}

	void GameState::update(float dt) {
		
	}

	void GameState::render(float dt) {

	}
}
