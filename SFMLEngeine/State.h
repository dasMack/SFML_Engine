#ifndef STATE_H
#define STATE_H

namespace Exla {
	class State {
	public:
		virtual void init() = 0;

		virtual void handleInput() = 0;
		virtual void update(float dt) = 0;
		virtual void render(float dt) = 0;

		virtual void pause() { }
		virtual void resume() { }
	};
}

#endif // STATE_HPP