/* Sound.h
Copyright (c) 2014 by Michael Zahniser

Endless Sky is free software: you can redistribute it and/or modify it under the
terms of the GNU General Public License as published by the Free Software
Foundation, either version 3 of the License, or (at your option) any later version.

Endless Sky is distributed in the hope that it will be useful, but WITHOUT ANY
WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A
PARTICULAR PURPOSE. See the GNU General Public License for more details.

You should have received a copy of the GNU General Public License along with
this program. If not, see <https://www.gnu.org/licenses/>.
*/

#pragma once

#include "supplier/AudioSupplier.h"

#include <filesystem>
#include <memory>
#include <string>



// This is a sound that can be played. The sound's file name will determine
// whether it is looping (ends in '~') or not.
class Sound {
public:
<<<<<<< HEAD:source/Sound.h
	bool Load(const std::string &path, const std::string &name);
	void Unload() const;
=======
	bool Load(const std::filesystem::path &path, const std::string &name);
>>>>>>> upstream/master:source/audio/Sound.h

	const std::string &Name() const;
	const std::string &Path() const;

	const std::vector<AudioSupplier::sample_t> &Buffer() const;
	const std::vector<AudioSupplier::sample_t> &Buffer3x() const;
	bool IsLooping() const;

	std::unique_ptr<AudioSupplier> CreateSupplier() const;


private:
	std::string name;
<<<<<<< HEAD:source/Sound.h
	std::string path;
	mutable bool isLoaded = false;
	unsigned buffer = 0;
=======
	std::vector<AudioSupplier::sample_t> buffer;
	std::vector<AudioSupplier::sample_t> buffer3x;
>>>>>>> upstream/master:source/audio/Sound.h
	bool isLooped = false;
};
