long int fibonacci(int n) {
    static long int cache[85] = { [0 ... 85-1] = -1 };
    cache[0] = 0;
    cache[1] = 1;
    
    if (cache[n] == -1) {
        cache[n] = (fibonacci(n-1) + fibonacci(n-2));
    }

    return cache[n];
}

// int main() {

//     int n;
    
//     scanf("%d", &n);
//     for(int i=0; i<n; i++) {
//         printf("%d ", fibonacci(i));
//     }

//     return 0;
// }