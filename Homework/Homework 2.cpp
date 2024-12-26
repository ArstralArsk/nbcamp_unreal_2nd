#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Animal {
public:
	virtual void makeSound() = 0;
	virtual ~Animal() {};
};

class Dog : public Animal {
public:
	void makeSound() override {
		cout << "Bark!!!" << endl;
	}
	~Dog() {};
};

class Cat : public Animal {
public:
	void makeSound() override {
		cout << "Meow!!!" << endl;
	}
	~Cat() {};
};

class Cow : public Animal {
public:
	void makeSound() override {
		cout << "Mooooooo!!!" << endl;
	}
	~Cow() {};
};

Animal* createRandomAnimal()
{
	switch (rand() % 3)
	{
	case 0:
		return new Dog;
	case 1:
		return new Cat;
	case 2:
		return new Cow;
	}
}

class Zoo {
private:
	Animal* animals[10];
	int count = 0;
public:
	void addAnimal(Animal* animal)
	{
		if (count == 10) cout << "동물원 가득참.. 추가 실패" << endl;
		else
		{
			animals[count] = animal;
			count++;
		}
	}

	void performActions()
	{
		for (int i=0; i<count; i++)
		{
			animals[i]->makeSound();
		}
	}

	~Zoo() {
		for(int i=0; i< count; i++)
			delete animals[i];
	};
};
int main() {
	srand(time(0));
	Zoo zoo;
	for (int i =0; i< 5; i++)
		zoo.addAnimal(createRandomAnimal());
	zoo.performActions();
	return 0;
}