class Foo {
public:
    Foo() {
        firstDone = false;
        secondDone = false;
        thirdDone = false;
    }

    void first(function<void()> printFirst) {
        
        // printFirst() outputs "first". Do not change or remove this line.
        std::unique_lock<std::mutex> locker(mu);
        cond.wait(locker, [this](){return !firstDone;});
        printFirst();
        firstDone = true;
        secondDone = false;
        thirdDone = false;
        locker.unlock();
        cond.notify_all();
    }

    void second(function<void()> printSecond) {
        
        // printSecond() outputs "second". Do not change or remove this line.
        std::unique_lock<std::mutex> locker(mu);
        cond.wait(locker, [this](){return !secondDone && firstDone;});
        printSecond();
        firstDone = true;
        secondDone = true;
        thirdDone = false;
        locker.unlock();
        cond.notify_all();
    }

    void third(function<void()> printThird) {
        
        // printThird() outputs "third". Do not change or remove this line.
        std::unique_lock<std::mutex> locker(mu);
        cond.wait(locker, [this](){return secondDone && firstDone;});
        printThird();
        firstDone = false;
        secondDone = false;
        thirdDone = true;
        locker.unlock();
        cond.notify_all();
    }
    private:
    std::mutex mu;
    std::condition_variable cond;
    bool firstDone, secondDone, thirdDone;
};

