void viewTask(int id) {
	string myTask;
	ifstream taskName("myTask.txt");
	int index = 1;
	while (getline(taskName, myTask)) {
		if(index++ == id)
			cout << id << ". " << myTask << '\n';
	}
	taskName.close();
}

void viewAllTask() {
	string myTask;
	ifstream taskName("myTask.txt");
	int index = 1;
	while (getline(taskName, myTask)) {
		cout << index++ << ". " << myTask << '\n';
	}
	taskName.close();
}
