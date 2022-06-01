#include<bits/stdc++.h>
using namespace std;

#include "helper.hpp"
#include "help.hpp"
#include "addTask.hpp"
#include "editTask.hpp"
#include "deleteTask.hpp"
#include "viewTask.hpp"

int main(int argc, char **argv){
	vector<string> arguments;
	for(int i=0;i<argc;i++){
		arguments.push_back(argv[i]);
	}
	try{
		if(arguments[1] == "addTask")
			addTask(arguments[2], convertToInteger(arguments[3]));
		else if(arguments[1] == "deleteTask")
			deleteTask(convertToInteger(arguments[2]));
		else if(arguments[1] == "deleteAllTask")
			deleteAllTask();
		else if(arguments[1] == "editTaskWeight")
			editTaskWeight(convertToInteger(arguments[2]), convertToInteger(arguments[3]));
		else if(arguments[1] == "editTaskName")
			editTaskName(convertToInteger(arguments[2]), arguments[3]);
		else if(arguments[1] == "editTask")
			editTask(convertToInteger(arguments[2]), arguments[3], convertToInteger(arguments[4]));
		else if(arguments[1] == "viewTask")
			viewTask(convertToInteger(arguments[2]));
		else if(arguments[1] == "viewAllTask")
			viewAllTask();
		else if(arguments[1] == "help")
			help();
	}catch(...){
		help();
	}
}