#include <stdio.h>

int main() {
    int t;
    if (scanf("%d", &t) != 1) return 0;
    while (t--) {
        char raw[205];
        if (scanf("%s", raw) != 1) return 0;
        int logical_len = 0;
        int first_null = -1;
        for (int i = 0; raw[i] != '\0'; ++i) {
            if (raw[i] == '\\' && raw[i + 1] == '0') {
                if (first_null == -1) first_null = logical_len;
                ++logical_len;
                ++i;
            } else {
                ++logical_len;
            }
        }
        int total_size = logical_len + 1;
        int string_len = first_null == -1 ? logical_len : first_null;
        printf("%d %d\n", total_size, string_len);
    }
    return 0;
}
