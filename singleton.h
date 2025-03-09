#ifndef SINGLETON_H
#define SINGLETON_H

#include <memory>
#include <mutex>
#include <iostream>

using namespace std;

/******************************************************************************
 *
 * @file       singleton.h
 * @brief      单例类
 *
 * @author     WuCF
 * @date       2025/01/07
 * @history
 *****************************************************************************/
template <typename T>
class Singleton
{
protected:
    //通过显式声明，避免编译器自动删除默认构造函数
    Singleton() = default;
    //删除语义（= delete）是 C++11 引入的功能，用于明确禁止拷贝行为。
    Singleton(const Singleton<T>&) = delete;
    //类似于禁止拷贝构造，这里是禁止赋值操作
    Singleton& operator=(const Singleton<T>& st) = delete;

    static std::shared_ptr<T> _instance;
public:
    //std::once_flag--一个轻量级同步标志，不能复制或移动
    //std::call_once--保证一个初始化函数或操作在整个程序执行期间只运行一次，会检查 flag 是否已标记为“已执行”。
    static std::shared_ptr<T> GetInstance() {
        static std::once_flag s_flag;
        std::call_once(s_flag, [&]() {
            _instance = shared_ptr<T>(new T);
            });

        return _instance;
    }

    void PrintAddress() {
        std::cout << _instance.get() << endl;
    }
    ~Singleton() {
        std::cout << "this is singleton destruct" << std::endl;
    }
};

//静态成员必须初始化
template <typename T>
std::shared_ptr<T> Singleton<T>::_instance = nullptr;
#endif // SINGLETON_H
