int Prime(int x) {
    if(x <= 1) {
        return 0;
    }

    for(int i = 2; i <= sqrt(x); i++) {
        if(x % i == 0) {
            return 0;
        }
    }

    return 1;
}