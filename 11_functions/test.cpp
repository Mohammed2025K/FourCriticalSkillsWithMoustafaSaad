void f1(int arr[10][20][30][40]) {}
void f2(int arr[][20][30][40]) {}
void f3(int arr[20][30][40]) {}
void f4(int arr[30][40]) {}
void f5(int arr[][40]) {}
 
int main() {
 int arr[10][20][30][40];
 
 f1(arr);
 f2(arr);
 f3(arr[0]);
 f4(arr[0][0]);
 f5(arr[0][0]);
 
return 0;
}