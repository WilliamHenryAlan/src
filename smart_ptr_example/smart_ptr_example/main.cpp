/*
 1.需要包含头文件memory
 2.优先选择unique_ptr 再shared_ptr 因为共享指针有引用计数系统 开销大于独占指针
 3.weak指针不会增加引用次数 通常与shared_ptr联用
 */

#include <iostream>
#include <memory>
class Entity {
public:
	Entity() {
		std::cout << "create Entity" << std::endl;
	}
	~Entity() {
		std::cout << "destoryed Entity" << std::endl;
	}
	void print(){}
};
int main() {
	{
		//unique_ptr
		//第一种方式
		std::unique_ptr<Entity> ptr(new Entity);
		ptr->print();
		//第二种方式 会更安全 如果构造函数碰巧抛出异常 将不会得到一个没用的被悬挂的指针 而造成内存泄漏
		std::unique_ptr<Entity> ptr_better = std::make_unique<Entity>();
		ptr_better->print();
		//std::unique_ptr<Entity> e = ptr_better;	//不可复制 拷贝构造函数和赋值已经被delete

		//shared_ptr
		//
		std::shared_ptr<Entity> sptr(new Entity);
		//
		std::shared_ptr<Entity> sptr_better = std::make_shared<Entity>();
		sptr_better->print();
		std::shared_ptr<Entity> e = sptr_better;

	}
}
