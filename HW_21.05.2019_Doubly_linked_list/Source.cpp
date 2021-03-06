﻿#include"DLList.h"

int main() {
	setlocale(LC_ALL, "rus");
	List<int> l;
	
	try {
		
		cout << "Добавление в начало списка" << endl;
		l.push_front(3);
		l.push_front(2);
		l.push_front(1);
		l.push_front(0);
		l.dump();

		cout << "Добавление в конец списка" << endl;
		l.push_back(4);
		l.push_back(5);
		l.push_back(6);
		l.dump();

		cout << "Добавление по позиции" << endl;
		l.insert_by_pos(222, 2);
		//l.insert_by_pos(333, 4);//именно если при четном списке в позицию size/2 добавлять новый нечетный элемент, вылетает
		l.insert_by_pos(444, 5);
		l.dump();
		
		cout << "Удаление по позиции" << endl;
		l.del_by_pos(6);
		l.del_by_pos(1);
		//l.del_by_pos(2);
		//l.del_by_pos(3);
		//l.del_by_pos(0);
		//l.del_by_pos(0);
		//l.del_by_pos(0);
		l.del_by_pos(0);
		l.dump();

		cout << "Удаление с начала" << endl;
		l.pop_front();
		l.dump();

		cout << "Удаление с конца" << endl;
		l.pop_back();
		l.dump();

		cout << "list size: " << l.getSize() << endl << endl;
		
		List<int> l2(l);
		cout << endl << "COPY" << endl;
		l2.dump();

		try {
			cout << "list size: " << l.getSize() << endl << endl;
			l.insert_by_pos(999, -3);
			l.insert_by_pos(999, 7);
			l.insert_by_pos(999, 5);
			l.del_by_pos(-2);
			l.del_by_pos(5);
		}
		catch (out_of_range err) {
			cout << err.what() << endl;
		}
		l.dump();

		cout << endl << l[0] << endl;
		cout << l[4] << endl;
		cout << l[100] << endl;
		cout << l[-3] << endl;
	}
	catch (out_of_range err) {
		cout << err.what() << endl;
	}

	//l.~List();


	system("pause");
	return 0;
}