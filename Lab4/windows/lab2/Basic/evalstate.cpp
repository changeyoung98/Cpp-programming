/*
 * File: evalstate.cpp
 * -------------------
 * This file implements the EvalState class, which defines a symbol
 * table for keeping track of the value of identifiers.  The public
 * methods are simple enough that they need no individual documentation.
 */

#include <string>
#include "evalstate.h"

#include "../StanfordCPPLib/map.h"
using namespace std;

/* Implementation of the EvalState class */

EvalState::EvalState() {
   /* Empty */
}

EvalState::~EvalState() {
   /* Empty */
}

void EvalState::setValue(string var, int value) {
   symbolTable.put(var, value);
}

int EvalState::getValue(string var) {
	return symbolTable.get(var);
	
}

bool EvalState::isDefined(string var) {
   return symbolTable.containsKey(var);
}
bool EvalState::isCommand(std::string var){
	if (var == "RUN" ||
		var == "HELP" ||
		var == "LIST" ||
		var == "CLEAR" ||
		var == "QUIT" ||
		var == "LET" ||
		var == "PRINT" ||
		var == "INPUT" ||
		var == "GOTO" ||
		var == "IF" ||
		var == "THEN" ||
		var == "REM" ||
		var == "END") {
		return true;
	}
	return false;
}
void EvalState::clear()
{
	symbolTable.clear();
}
string EvalState::getCommand(string com) {
	return com;
}