#include <iostream>
#include <chrono>
#include "sorts.h"
#include "arraywork.h"
using namespace std;


такой код смотрю последний раз!!!

int main(){
        int step = 100;
        bool flag1 = 1 , flag2 = 1, flag3 = 1 , flag4 = 1, flag5 = 1 , flag6 = 1;	много раз просил так не делать!!!!
											что это за переменные такие??? можно было объявить массив!!!
        cout << "  bubbleSort  "<<"  selectionSort  "<<"  countsort  "<< "  quickSort  "<<"  insertionSort  "<< "  mergeSort"<<endl;	пробелы!!!
            std::chrono::time_point<std::chrono::high_resolution_clock> start;
            std::chrono::time_point<std::chrono::high_resolution_clock> end;
            chrono::duration<double> diff;
        for(int arsize = 100; arsize <= 10000000; arsize += step){
            if (arsize == 500){
                step = 250;
            }
            if (arsize == 1000){
отличная пустая строчка.... только не понятно зачем она нужна
                step=1000;
ещё одна.... хмммм...
            }
            if (arsize == 10000){
                step=5000;
            }
            if (arsize == 100000){
                step=10000;
            }
            if (arsize == 200000){
                step=100000;
            }
            if (arsize == 1000000){
                step=1000000;
            }
            int* ar = new int[arsize];
            cout<< arsize <<"\t";
            randomFilling(ar , arsize ,0 , 999);

            if ( flag1 ){
                    start = chrono::high_resolution_clock::now();
                    bubbleSort(ar,arsize);
                    end = chrono::high_resolution_clock::now();
                    diff = end - start;
                    cout<< diff.count()<< "\t";
	
                    if( diff.count() > 50){

                            flag1 = false;

                    }
            }
            else {
                    cout << "-----" << "\t";
            }

	здесь надо опять заполнять массив рандомными значениями....
как думаешь можно ли всё что ты написал превратить в некоторый цикл???
	1.	выделяем память	
	2. 	рандомно заполняем массив
	3.	"запускаем" таймер
	4.	вызываем нужную сортировку
	5.	измеряем прошедшее время и выводим на экран (если время сортировки больше 60, исключаем эту сортировку из работы)
	6.	повторяем с пункта 2
	7.	освобождаем память задаём новый размер и начинаем с 1ого пункта 




            if ( flag2 == 1){
                start = chrono::high_resolution_clock::now();
                selectionSort(ar,arsize);
                end = chrono::high_resolution_clock::now();
                diff = end - start;
                cout<< diff.count()<<"\t";
                if( diff.count() > 50){

                    flag2 = 0;

                }
            }
            else{

                cout<<"-----"<<"\t";

            }

            if ( flag3 == 1 ){
                start = chrono::high_resolution_clock::now();
                countsort(ar,arsize);
                end = chrono::high_resolution_clock::now();
                diff = end - start;
                cout<< diff.count()<<"\t";
                if(diff.count() > 50 ){

                    flag3 = 0;

                }
            }
            else{

                cout<<"-----"<<"\t";

            }
            if ( flag4 == 1 ){
                start = chrono::high_resolution_clock::now();
                quickSort(ar,arsize);
                end = chrono::high_resolution_clock::now();
                diff = end - start;
                cout<< diff.count()<<"\t";
                if(diff.count()>50 ){

                    flag4 = 0;

                }
            }
            else{

                cout<<"-----"<<"\t";

            }
            if ( flag5 == 1 ){
                start = chrono::high_resolution_clock::now();

                insertionSort(ar,arsize);

                end = chrono::high_resolution_clock::now();
                diff = end - start;
                cout<< diff.count()<<"\t";
                if( diff.count() > 50 ){

                    flag5 = 0;

                }
            }
            else{

                cout<<"-----"<<"\t";

            }
            if ( flag6 == 1 ){
                start = chrono::high_resolution_clock::now();

                mergeSort(ar,arsize);

                end = chrono::high_resolution_clock::now();
                diff = end - start;
                cout<< diff.count()<<"\n";
                if( diff.count() > 50){

                    flag6 = 0;

                }
            }
            else{

                cout<<"-----"<<"\n";

            }

            delete[]  ar;

            }
	return 0;



}
