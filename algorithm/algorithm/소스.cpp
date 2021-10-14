#include<iostream> // <stdio.h>
#include<fstream>
#include<string>


using namespace std;

int main() {

	 // "" : string, '':char
	/*
	* 입력 주민등록 번호
	* 출력 주인의 나이, 성별 판단
	*/
	// N명의 나이중에 가장 나이차이 많이 나는 경우

	// 파일 입력
	/*ios_base::sync_with_stdio(false);
	ifstream cin;
	cin.open("input.txt");*/
	// 변수
	string no, first; // char a[20] string보다는 char 배열로
	char second;
	int age;
	// 입력
	cin >> no; // scanf("%s", &a) // string으로 a의 참조값 읽음

	second = no[7]; // 1900, 2000 구분
	
	if ((second == '1') || (second == '2')) { // 1900
		first = "19";
		// year = 1900 + ( (a[0]-48) * 10 + (a[1]-48)*1) // 48빼야지 정수형!!!
	}
	else if ((second == '3') || (second == '4')) { // 2000
		first = "20";
	}

	for (int i = 0; i < 2; i++) {
		first = first + no[i];
	}
	
	age = stoi(first);
	age = 2019 - age + 1;

	// printf("%d", age)

	if ((second == '1') || (second == '3')) {
		cout << age << " M" << endl;
		
	}
	else if ((second == '2') || (second == '4')) {
		cout << age << " W" << endl;
	}

	/*
	* 
	*/
	
	return 0;
}