/**
 *  Copyright (c) 2010-2013 LG Electronics, Inc.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */


#ifndef ACTIVECALLBANNEREVENT_H
#define ACTIVECALLBANNEREVENT_H

#include <string>
#include <stdint.h>

struct ActiveCallBannerEvent
{
	enum Type {
		Add = 0,
		Update,
		Remove,
		Invalid = 0xFF00
	};

	Type type;
	std::string msg;
	std::string icon;
	uint32_t time;

    ActiveCallBannerEvent()
        : type(Invalid), time(0) {}
};

struct ActiveCallBannerEventWrapper
{
	ActiveCallBannerEventWrapper()
		: event(0) {}
	
	ActiveCallBannerEventWrapper(ActiveCallBannerEvent* evt)
		: event(evt) {}

	ActiveCallBannerEvent* event;
};

#endif /* ACTIVECALLBANNEREVENT_H */
