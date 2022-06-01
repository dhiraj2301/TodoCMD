void editTaskWeight(int id, int weight){
	vector<pair<int, string>> prevTasks = readAllTask();
	ofstream  myTask("myTask.txt");
	ofstream  myTaskWeight("myTaskWeight.txt");
	clear("myTask.txt");
	clear("myTaskWeight.txt");
	prevTasks[id-1].first = weight;
	sort(prevTasks.begin(), prevTasks.end(), [&](auto i, auto j){
		return i.first > j.first;
	});
	for(int i=0;i<prevTasks.size();i++){
		myTaskWeight << prevTasks[i].first << '\n';
		myTask << prevTasks[i].second << '\n';
	}
	myTask.close();
	myTaskWeight.close();
}

void editTaskName(int id, string task){
	vector<pair<int, string>> prevTasks = readAllTask();
	ofstream  myTask("myTask.txt");
	ofstream  myTaskWeight("myTaskWeight.txt");
	clear("myTask.txt");
	clear("myTaskWeight.txt");
	prevTasks[id-1].second = task;
	for(int i=0;i<prevTasks.size();i++){
		myTaskWeight << prevTasks[i].first << '\n';
		myTask << prevTasks[i].second << '\n';
	}
	myTask.close();
	myTaskWeight.close();
}

void editTask(int id, string task, int weight){
	vector<pair<int, string>> prevTasks = readAllTask();
	ofstream  myTask("myTask.txt");
	ofstream  myTaskWeight("myTaskWeight.txt");
	clear("myTask.txt");
	clear("myTaskWeight.txt");
	prevTasks[id-1].first = weight;
	prevTasks[id-1].second = task;
	sort(prevTasks.begin(), prevTasks.end(), [&](auto i, auto j){
		return i.first > j.first;
	});
	for(int i=0;i<prevTasks.size();i++){
		myTaskWeight << prevTasks[i].first << '\n';
		myTask << prevTasks[i].second << '\n';
	}
	myTask.close();
	myTaskWeight.close();
}
