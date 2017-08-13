#include "Menu_State.h"

namespace Exla {
	MenuState::MenuState(GameDataRef data) 
		: _data(data) {	}

	void MenuState::init() {
		_data->assets.loadFont("FiraMono", "assets/FiraMono-Regular.otf");
		_data->assets.loadTexture("alien", "assets/test.png");
	}

	void MenuState::handleInput() {
		sf::Event evt;
	}

	void MenuState::update(float dt) {

	}

	void MenuState::render(float dt) {
		_data->window.clear(sf::Color::Red);
		_data->window.draw(_sprite);
		_data->window.draw(_text);
		_data->window.display();
	}
}