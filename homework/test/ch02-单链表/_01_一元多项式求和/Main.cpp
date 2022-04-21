#include<iostream>
using namespace std;

struct Node {
	int coef;
	int exp;
	Node * next;
};

Node * p = nullptr , * q = nullptr;


void save(bool st){
	Node * temp = nullptr , * last = nullptr;
	if(st){
		 p = new Node();
		 last = p;
	}else{
		 q = new Node();
		 last = q;
	}	
	int coef , exp;
	while(true){
		cin >> coef >> exp;
		if(!coef && !exp) break;
		temp = new Node();
		temp->coef = coef , temp->exp = exp;
		last->next = temp;
		last = temp;
	}
	last->next = NULL;

}


void print(bool st){
	Node * temp = nullptr;
	if(st) temp = p->next;
	else temp = q->next;

	while(temp != NULL){
		cout << temp->coef << "x^" << temp->exp << " ";
		temp = temp->next;
	}
}

void solve(){
	if(p->next == NULL || q->next == NULL) return;
	Node * tp = p->next, * tq = q->next;
	while(tp != NULL && tq != NULL){
		if(tp->exp < tq->exp) tp = tp->next;
		else if(tp->exp > tq->exp) {
			Node * t = new Node();
			t->exp = tq->exp , t->coef = tq->coef;
			t->next = tp->next->next;
			tp->next = t;
			tq = tq->next;
		}else{
			tp->coef = tp->coef + tq->coef;
			if(tp->coef == 0){
				tp->exp = tp->next->exp;
				tp->coef = tp->next->coef;
				tp->next = tp->next->next;
			}else tp = tp->next;
			tq = tq->next;
		}
	}

	if(tq != NULL){
		if(tp != NULL){
			while(tp -> next != NULL){
				tp = tp->next;
			}
		}else{
			tp = p->next;
			while(tp -> next != NULL){
				tp = tp->next;
			}
		}
		tp->next = tq;
	}
}

int main(){
	save(true);
	save(false);
	solve();
	print(true);
	return 0;
}