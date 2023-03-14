int b = 50;
        int func(int a1)
        {
                // int un = 22;
                // printf("value of b is: %d\n", b);

                static int st = 0;
                printf("the value of st is %d\n", st);
                st++;
                return a1+st;
        }
        int main(int argc, char const *argv[])
        {
                int a = 10, un = 22;
                int val = func(a);
                
                val = func(a);

                val = func(a);
                int *pts = &val;

        //printf("%d\n", un);

        //printf("value of a is %d\n", a);
                // printf("value of function is %d\n", val);
        //printf("value of function is %d\n", val);
                // printf("address of 'a' is: %d\n", &a);
                // printf("address of 'func()' is: %d", &val);
                
        return 0;
        }