#include <iostream>
#include <chrono>
#include "sorts.h"
#include "arraywork.h"
using namespace std;


int main(){
        int step = 100;
        bool flag1 = 1 , flag2 = 1, flag3 = 1 , flag4 = 1, flag5 = 1 , flag6 = 1;
        for(int arsize = 100; arsize <= 10000000; arsize += step){
            if (arsize == 500){

                step = 250;

            }
            if (arsize == 1000){

                step=1000;

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
            std::chrono::time_point<std::chrono::high_resolution_clock> start;
            std::chrono::time_point<std::chrono::high_resolution_clock> end;
            chrono::duration<double> diff;

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
