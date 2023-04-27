#include "search.hpp"

int binarysearch(int array[], int size, int key)  {
    int lo = 0, hi = size;
    while(lo <= hi) {
        int mid = (lo+hi)/2;
        if (key == array[mid]) {
            return mid;
        } else if (key < array[mid]){
            hi = mid-1;
        } else {
            lo = mid+1;
        }
    }
    return -1;
}

int rbinarysearch(int array[], int lo, int hi, int key)  {
    if(lo <= hi) {
        int mid = (lo+hi)/2;
        if (key == array[mid]) {
            return mid;
        } else if (key < array[mid]){
            return rbinarysearch(array,lo,mid-1,key);
        } else {
            return rbinarysearch(array,mid+1,hi,key);
        }
    }
    return -1;
}
