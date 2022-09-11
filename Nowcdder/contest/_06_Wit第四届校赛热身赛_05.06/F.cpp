#include<bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define pb push_back
#define mm memset
#define mp make_pair
#define PII pair<int,int>
#define SZ size()
#define LL long long
#define FAST ios::sync_with_stdio(false),cin.tie(0),cout.tie(0)
#define rep(i,a,b) for(int i=a;i<=b;++i)
#define per(i,a,b) for(int i=a;i>=b;--i)
const int INF = 0x3f3f3f3f;
const int MINF = 0x3f;
const double EPS = 1e-6;

int main(){
	FAST;
	string s;
	cin >> s;
	string name , year , cnp;
	if(s == "王浩宇"){
		name = "王浩宇";
		year = "2018";
		cnp = "会长";
	}else if(s == "刘一麟"){
		name = "刘一麟";
		year = "2018";
		cnp = "副会长";
	}else if(s == "陈杰"){
		name = "陈杰";
		year = "2018";
		cnp = "副会长";
	}else if(s == "王晨闯"){
		name = "王晨闯";
		year = "2019";
		cnp = "会长";
	}else if(s == "刘子涵"){
		name = "刘子涵";
		year = "2019";
		cnp = "副会长";
	}else if(s == "李奕鹏"){
		name = "李奕鹏";
		year = "2019";
		cnp = "副会长";
	}else if(s == "屠啸雷"){
		name = "屠啸雷";
		year = "2019";
		cnp = "副会长";
	}else if(s == "薛康"){
		name = "薛康";
		year = "2020";
		cnp = "会长";
	}else if(s == "李顺"){
		name = "李顺";
		year = "2020";
		cnp = "副会长";
	}else if(s == "苏贤"){
		name = "苏贤";
		year = "2020";
		cnp = "副会长";
	}else if(s == "冯立冬"){
		name = "冯立冬";
		year = "2021";
		cnp = "会长";
	}else if(s == "刘典"){
		name = "刘典";
		year = "2021";
		cnp = "副会长";
	}else if(s == "廖粤辉"){
		name = "廖粤辉";
		year = "2021";
		cnp = "副会长";
	}else if(s == "黎永琪"){
		name = "黎永琪";
		year = "2021";
		cnp = "副会长";
	}else if(s == "余朝波"){
		name = "余朝波";
		year = "2021";
		cnp = "副会长";
	}else if(s == "樊长冰"){
		name = "樊长冰";
		year = "2022";
		cnp = "会长";
	}else if(s == "刘超"){
		name = "刘超";
		year = "2022";
		cnp = "副会长";
	}else if(s == "刘欣雨"){
		name = "刘欣雨";
		year = "2022";
		cnp = "副会长";
	}else if(s == "明钰祥"){
		name = "明钰祥";
		year = "2022";
		cnp = "副会长";
	}
	
	cout << "姓名：" << name << endl;
	cout << "年份：" << year << endl;
	cout << "职务：" << cnp << endl;
	return 0;
}