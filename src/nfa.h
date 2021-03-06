#ifndef NFA_H
#define NFA_H

#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <map>
#include <set>

#include "thompsonConstruction.h"
#include "regexEvaluater.h"

class NFA
{
public:
	std::set<char> inputs;

	NFA();
	pAutomata getNFA(const std::string& grammarPath);

private:
	void handleKeyword(const std::string& line);
	void handlePunc(const std::string& line);
	pAutomata combineNFA();

	std::map<std::string, std::string> definitions;
	std::vector<pAutomata> collections;
};

#endif