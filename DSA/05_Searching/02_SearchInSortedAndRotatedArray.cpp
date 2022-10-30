/*
if an array is given wich is sorted and rotaded by k 

original array ==> 1 ,2 ,4,5,6,7,8,9,10,12,14 
k=3 rotated array=>10,12,14,1,2,4,5,6,7,8,9

when k is given
1
1=if k is give then just a function that do binnay search and pass end and start point 
2= and your array is sorted from 0 k-1 and k to end-1 so call the the function with these values and you will get the ans
TC=O(logn+logn) ~ O(logn)

2 (k is still given)
if you dont want to call function twice then you can check for a conditon

if(arr[0]<target)==> then you need to search in left half of array
beacuse if array is rotated then the arr[0] is the mininum element is the left sorted array

        10,12,14   ,1,2,4,5,6,7,8,9

so if the target is greater than arr[0] then search in left part( 0 to k-1)

if(arr[0]<=target ==> then search in the right part of array because every element will be less than the arr[0] in the right part

if(arr[0]>=target){
    binarySearh(arr,0,k-1);
}else if(arr[0]<target){
    binarySearch(arr,k,n-1);

}




when k is not given

1 approch

find the peak and where you find will be the last index of left array
and then you can apply
if(arr[0]>=target){
    binarySearh(arr,0,k-1);
}else if(arr[0]<target){
    binarySearch(arr,k,n-1);

}

2 approach 
find a mid point in array and check which side it belongs left or right



*/