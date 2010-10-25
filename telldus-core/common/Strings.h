#ifndef STRING_H
#define STRING_H

#include <string>

namespace TelldusCore {
	std::wstring charToWstring(const char *value);
	int charToInteger(const char *value);
	bool comparei(std::wstring stringA, std::wstring stringB);
	std::string wideToString(const std::wstring &input);
}

#endif //STRING_H
