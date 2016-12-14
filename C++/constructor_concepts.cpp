struct Foo {
  int x;
  Foo(void) { this->x = 10; printf(“basic constructor\n”); }
  Foo(int x) { this->x = x; printf(“int constructor\n”); }
  Foo(Foo& that) { 
this->x = that.x; 
printf(“copy constructor\n”); 
  }
  ~Foo(void) { printf(“destructor for %d\n”, this->x); }
};

(a)	int main(void) {
   Foo f(10);
}
