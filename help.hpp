// using namespace std;
void help(){
	cout << "1. Add a task -> (todo addTask \"name of task\" weight_of_task)\n";
	cout << "2. View pending tasks with id -> (todo viewTask id)\n";
	cout << "3. View all pending tasks -> (todo viewAllTask)\n";
	cout << "4. Edit task weight with id -> (todo editTaskWeight id new_weight)\n";
	cout << "5. Edit task name with id -> (todo editTaskName id \"name of task\")\n";
	cout << "6. Edit task with id -> (todo editTask id \"name of task\" new_weight)\n";
	cout << "7. Mark task completed with id -> (todo deleteTask id)\n";
	cout << "8. Mark all task completed -> (todo deleteAllTask)\n";
	cout << "9. Help -> (todo help)\n";
}