#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

struct Student
{
	string name;
	int kor;
	int eng;
	int math;
};
int N;

bool cmp(Student a, Student b)
{
	if (a.kor == b.kor && a.eng == b.eng && a.math == b.math)
	{
		return a.name < b.name;
	}
	if (a.kor == b.kor && a.eng == b.eng)
	{
		return a.math > b.math;
	}
	if (a.kor == b.kor)
	{
		return a.eng < b.eng;
	}
	return a.kor > b.kor;
}

int main()
{
	cin >> N;
	vector<Student> v(N);
	Student student;

	for (int i = 0; i < N; i++)
	{
		cin >> v[i].name >> v[i].kor >> v[i].eng >> v[i].math;
	}

	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < N; i++)
	{
		cout << v[i].name << endl;
	}

	return 0;
}