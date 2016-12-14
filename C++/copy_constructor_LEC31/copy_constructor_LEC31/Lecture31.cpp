#include<stdio.h>

struct Foo {
	int x;
	Foo(void) { this->x = 10; printf("basic constructor\n"); }
	Foo(int x) { this->x = x; printf("int constructor\n"); }
	Foo(Foo& that) {
		this->x = that.x;
		printf("copy constructor\n");
	}
	~Foo(void) { printf("destructor for %d\n", this->x); }
};
////Part A
//int main(void) {
//	Foo f(10);
//}
////Part B
//int main(void) {
//	Foo* f;
//}
//Part C
int main(void) {
	Foo* f = new Foo(42);
}
////Part D
//void doit(Foo* g) {
//}
//
//int main(void) {
//	Foo f;
//	doit(&f);
//	}
////Part E
//void doit(Foo g) {
//}
//int main(void) {
//	Foo f;
//	doit(f);
//}
