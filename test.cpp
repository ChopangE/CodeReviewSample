#include <iostream>

/**
* �Ű����� keyword�� ���� ������ ���ڿ��� ��ȯ����
*/

std::string getDescription(std::string& strParam) {
	return "desc";
}


void doA() {}
void doB() {}
void doC() {}
bool checkData() { return true;  }

/**
* flag�� ��Ʈ�Ǹ� doA()�� ȣ���ϰ� �׷��� ������ doB()�� ȣ���� ��
* checkData() �Լ� ��ȯ���� true�� doC()�� ȣ���Ѵ�.
*/

std::string getDescription(std::string& strParam, bool flag) {
	if (flag) {
		doA();
	}
	else {
		doB();
		if (checkData())
			doC();
	}
	return "desc";
}


/**
* (����)
* �� �Լ��� userProfile() �Լ����� ���ǰ� ����.
*/

std::string getDescription(std::string strParam) {
	return "desc";
}


