#ifndef files_hpp
#define files_hpp

#include <XPLMPlugin.h>
#include <XPLMUtilities.h>
#include <string>

#ifdef APL
#define boostseparator '/'
#endif
#ifdef WIN
#define boostseparator '\\'
#endif
#ifdef LIN
#define boostseparator '/'
#endif

void initPath();

std::string getPluginPath();

std::string joinPath(std::string first, std::string second);

char getseparator();

#endif /* files_hpp */
