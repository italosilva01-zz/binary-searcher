#include <iostream>


int* bsearch(int* first, int*last,int target){

  // std::cout<<" last = "<<*(last);

    int count = last - first;
    while (count != 0){

        int step = count/2;
     
        int* mid = first + step;

        if(*mid == target ){
        
            return mid;
        }else if(*mid > target){
            count -= step;
        }else{
          
            count -=  (step+1) ;
            first = mid +1;
            
        }

    }

    std::cout<<" nao encontrou"<<std::endl;

    return last;
    

};

int main(){
    //teste
    int size;
    
    int target;
    int vector[10]{-1,1,2,3,4,5,6,7,8,9};
    size = sizeof(vector)/sizeof(vector[0]);
    size = size;

    std::cin >> target;

    int* result = bsearch(vector,vector+(size),target);
    
    std::cout<<*result;

    return 0;
}