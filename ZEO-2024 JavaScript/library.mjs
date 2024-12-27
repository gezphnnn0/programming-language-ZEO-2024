export function compare(str1, str2) {
    if (str1 > str2) {
        return -1;
    }
    if (str1 == str2) {
        return 0;
    }
    return 1;
}

export function absolute(num) {
    if (num < 0) {
        return -num;
    }
    return num;
}