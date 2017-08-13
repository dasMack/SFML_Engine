#ifndef Menu_STATE_H
#define Menu_STATE_H

#include <SFML/Graphics.hpp>
#include "State.h"
#include "Game.h"

namespace Exla {
	class MenuState : public State {

	public:
		MenuState(GameDataRef data);

		void init();

		// No pause() or resume() methods here as this
		// is a very simple example of a game state.

		void handleInput();
		void update(float dt);
		void render(float dt);

	private:
		GameDataRef _data;

		sf::Sprite _sprite;
		sf::Text _text;
	};
}

#endif // PAUSE_STATE_HPP