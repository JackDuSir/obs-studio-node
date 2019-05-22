/******************************************************************************
    Copyright (C) 2016-2019 by Streamlabs (General Workings Inc)

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.

******************************************************************************/

#pragma once
#include "obs.h"
#include "nodeobs_configManager.hpp"
#include <map>
#include <mutex>
#include <windows.h>
#include "psapi.h"
#include <algorithm>

#define LIMIT 2048000000

struct source_info
{
	bool          cached;
	uint64_t      size;
	obs_source_t* source;
};

class MemoryManager {
	public:
	static MemoryManager& GetInstance()
	{
		static MemoryManager instance;
		return instance;
	}

	private:
	MemoryManager();

	public:
	MemoryManager(MemoryManager const&) = delete;
	void operator=(MemoryManager const&) = delete;

	private:
	std::map<const char*, source_info*> sources;

	std::mutex mtx;
	uint64_t   available_memory;
	uint64_t   current_cached_size;
	uint64_t   allowed_cached_size;

	public:
	void registerSource(obs_source_t* source);
	void unregisterSource(obs_source_t* source);
	void updateCacheState();
	void updateCacheSettings(obs_source_t* source, bool updateSize);
};