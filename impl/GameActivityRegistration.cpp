/*=============================================================================

	Library: Silver

	Copyright (c) Azriel Hoh

	Licensed under the Apache License, Version 2.0 (the "License");
	you may not use this file except in compliance with the License.
	You may obtain a copy of the License at

		http://www.apache.org/licenses/LICENSE-2.0

	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and
	limitations under the License.

=============================================================================*/

#include "GameActivity.h"
#include "GameActivityRegistration.h"

namespace sl {
namespace ax {
namespace game {

GameActivityRegistration::GameActivityRegistration() :
		gameActivity(sl::core::application::ActivityPointer(new sl::ax::game::GameActivity())) {
}

GameActivityRegistration::~GameActivityRegistration() {
}

std::string GameActivityRegistration::getName() const {
	return "sl::ax::game::GameActivity";
}

sl::core::application::ActivityPointer GameActivityRegistration::getActivity() const {
	return this->gameActivity;
}

} /* namespace game */
} /* namespace ax */
} /* namespace sl */
