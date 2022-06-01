void deleteAllTask(){
	clear("myTask.txt");
	clear("myTaskWeight.txt");
}

void deleteTask(int id){
	string myTask, myTaskWeight;
	ifstream taskName("myTask.txt");
	ifstream taskWeight("myTaskWeight.txt");
	vector<pair<int,string>> task;
	int index = 1;
	while (getline(taskName, myTask), getline(taskWeight, myTaskWeight)) {
		if(index++ != id){
			task.push_back({convertToInteger(myTaskWeight), myTask});
		}
	}
	taskName.close();
	taskWeight.close();
	
	
	clear("myTask.txt");
	clear("myTaskWeight.txt");
	ofstream inputTask("myTask.txt");
	ofstream inputTaskWeight("myTaskWeight.txt");
	
	for(int i=0;i<task.size();i++){
		inputTask << task[i].second << '\n';
		inputTaskWeight << task[i].first << '\n';
	}
	
	inputTask.close();
	inputTaskWeight.close();
}