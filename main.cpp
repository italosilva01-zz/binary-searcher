#include <iostream>

int bsearch(int *vector, short left, short right,int target){  
   
    int mid = (right + left) /2;//catch middle of vector

    
      while (vector[mid]!= target)
    {


        if(target<vector[mid]){
            //check if the destination is less than the middle of vectoe
            
            right = mid-1;
            //ignore the middle
        }else{
            left = mid +1;
        }
        mid = (right + left) /2;
        //new middle of vector

        if(left==right){
            return false;
        }

    }

    if(vector[mid] == target){
    //examine if find the target
        return true;
    }
    return -1;
}

int main(){

    int size;
    int left;
    int right;
    int target;
    int vector[10]{-1,1,2,3,4,5,6,7,8,9};
    left = 0;
    size = sizeof(vector)/sizeof(vector[0]);
    right = vector[0]+size - 1;

    std::cin >> target;

    int result = bsearch(vector,left,right,target);

    if(result){
        std::cout<<"found the number "<<target<<" in arrayx ";
    }else{
        std::cout<<"not found";
    }


    return 0;
}