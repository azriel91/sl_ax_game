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

#ifndef __SL_AX_GAME__GAMEACTIVITY_H
#define __SL_AX_GAME__GAMEACTIVITY_H

#include <azriel/sl_core_application/Activity.h>

US_USE_NAMESPACE

namespace sl {
namespace ax {
namespace game {

class GameActivity : public sl::core::application::Activity {
public:
	GameActivity();
	virtual ~GameActivity();

	ExitCode run() override;
};

} /* namespace game */
} /* namespace ax */
} /* namespace sl */

#endif /* __SL_AX_GAME__GAMEACTIVITY_H */
