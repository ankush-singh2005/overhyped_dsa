#include<pthread.h>
#include<semaphore.h>
#include<unistd.h>
#include<stdio.h>
int main(){
    void* fun1();
    void* fun2();
    int shared=1;
    sem_t s;
    pthread_t thread1,thread2;
    pthread_create(&thread1,NULL,fun1,NULL);
    pthread_create(&thread2,NULL,fun2,NULL);
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);

    void* fun1(){
        int x;
        sem_wait(&s);
        x=shared;
        printf("The value os shared in thread 1: %d \n",shared);
        x++;
        printf("Local upadation by thread 2: %d \n",shared);
        sleep(x);
        shared=x;
        printf("Value read by thread 1: %d \n",shared);
        sem_post(&s);
    }

    void* fun2(){
        int y;
        sem_wait(&s);
        y=shared;
        printf("The vlaue of shared variable is: %d \n",shared);
        y--;
        printf("The value of shared variable by thread 2: %d \n",shared);
        sleep(1);
        shared=y;
        printf("The new value is: %d \n",shared);
        sem_post(&s);
    }
}
