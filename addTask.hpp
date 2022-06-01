void addTask(string taskName, int weight){
	vector<pair<int, string>> prevTasks = readAllTask();
	ofstream  myTask("myTask.txt");
	ofstream  myTaskWeight("myTaskWeight.txt");
	clear("myTask.txt");
	clear("myTaskWeight.txt");
	bool taskInserted = false;
	for(int i=0;i<prevTasks.size();i++){
		if(!taskInserted && prevTasks[i].first < weight){
			myTaskWeight << weight << '\n';
			myTask << taskName << '\n';
			taskInserted = true;
		}
		myTaskWeight << prevTasks[i].first << '\n';
		myTask << prevTasks[i].second << '\n';
	}
	if(!taskInserted){
		myTaskWeight << weight << '\n';
		myTask << taskName << '\n';
	}
	myTask.close();
	myTaskWeight.close();
}