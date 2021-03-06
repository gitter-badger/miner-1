/*  Blah, blah, blah.. all this pedantic nonsense to say that this
    source code is made available under the terms and conditions
    of the accompanying GNU General Public License */

#include "Log.h"
#include <chrono>
#include <ctime>

std::mutex x_log;

std::string timestamp()
{
	time_t rawTime = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
	char buf[24];
	if (strftime(buf, 24, "%X", localtime(&rawTime)) == 0)
		buf[0] = '\0';
	return std::string(buf);
}
