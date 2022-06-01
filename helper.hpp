int convertToInteger(string value){
	int answer = 0;
	for(int i=0;i<value.size();i++){
		answer = answer * 10 + (value[i] - '0');
	}
	return answer;
}

void clear(string filename){
	ofstream file(filename, ofstream::out | ofstream::trunc);
	file<<"";
}

vector<pair<int, string>> readAllTask() {
	string myTask, myTaskWeight;
	vector<pair<int, string>> prevTasks;
	ifstream taskName("myTask.txt");
	ifstream taskWeight("myTaskWeight.txt");
	while (getline(taskName, myTask), getline(taskWeight, myTaskWeight)) {
		prevTasks.push_back({convertToInteger(myTaskWeight), myTask});
	}
	taskName.close();
	taskWeight.close();
	return prevTasks;
}