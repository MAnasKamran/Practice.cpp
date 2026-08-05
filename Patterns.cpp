#include <iostream>

using namespace std;

int main(){

    cout << "Pattern #1: \n";
    int n = 6;
    for(int i = 0; i < 5; i++){
        char ch = 'A';
        for(int j = 0; j < n; j++){
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << '\n';
    }

    cout << "\n";


    cout << "Pattern #2: \n";
    n = 3;
    int num = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << num << " ";
            num++;
        }
        cout << '\n';
    }

    cout << "\n";

    cout << "Pattern #3: \n";
    char ch = 'A';
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << ch << " ";
            ch++;
        }
        cout << '\n';
    }

    cout << "\n";

    cout << "Pattern #4: \n";
    n = 4;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << '\n';
    }

    cout << "\n";

    cout << "Pattern #5: \n";
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= i + 1; j++){
            cout << j << " ";
        }
        cout << '\n';
    }

    cout << "\n";

    cout << "Pattern #6: \n";
    //Floyd's Triangle Pattern
    cout << "Floyd's Triangle Pattern: \n";
    num = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << num << " ";
            num++;
        }
        cout << '\n';
    }

        cout << "\n";

    cout << "Pattern #7: \n";
    num = 1;
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= i + 1; j++){
            cout << num << " ";
        }
        num++;
        cout << '\n';
    }

    cout << "\n";

    cout << "Pattern #8: \n";
    n = 5;
    ch = 'A';
    for(int i = 0; i < n; i++){
        for(int j = 1; j <= i + 1; j++){
            cout << ch << " ";
        }
        ch++;
        cout << '\n';
    }

    cout << "\n";

    cout << "Pattern #9: \n";
    n = 4;
    for(int i = 0; i < n; i++){
        for(int j = n; j >= i + 1; j--){
            cout << j << " ";
        }
        cout << '\n';
    }

    cout << "\n";

    cout << "Pattern #10: \n";
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j > 0; j--){
            cout << j << " ";
        }
        cout << '\n';
    }

    cout << "\n";

    cout << "Pattern #11: \n";
    ch = 'E';
    for(int i = 'A'; i <= ch; i++){
        for(int j = i; j >= 'A'; j--){
            cout << (char)j << " ";
        }
        cout << '\n';
    }

    cout << '\n';

    cout << "Pattern #12: \n";
    //Floyd's Triangle Pattern
    cout << "Floyd's Triangle Pattern (with characters): \n";
    ch = 'A';
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << ch << " ";
            ch++;
        }
        cout << '\n';
    }

    cout << '\n';

    cout << "Pattern #13: \n";
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            cout << " ";
        }
        for(int k = 1; k <= i + 1; k++){
            cout << k;
        }
        cout << '\n';
    }

    cout << '\n';

    cout << "Pattern #14: \n";
    num = 1;
   for(int i = 0; i < n; i++){
    for(int j = 0; j < i; j++){
        cout << " ";
    }
    for(int j = 0; j < n - i; j++){
        cout << num << " ";
    }
    num++;
    cout << '\n';
   }

   cout << '\n';

   cout << "Pattern #15: \n";
   num = 1;
   for(int i = 0; i < n; i++){
    for(int j = 0; j < i; j++){
        cout << " ";
    }
    for(int j = 0; j < n - i; j++){
        cout << num;
    }
    num++;
    cout << '\n';
   }

   cout << '\n';

   cout << "Pattern #16: \n";
   num = 4;
   for(int i = 0; i < n; i++){
    for(int j = 0; j < i; j++){
        cout << " ";
    }
    for(int j = 0; j < n - i; j++){
        cout << num << " ";
    }
    num--;
    cout << '\n';
   }

   cout << '\n';
   cout << "Pattern #17: \n";
   cout << "Character versions: \n";
   ch = 'A';
   for(int i = 0; i < n; i++){
    for(int j = 0; j < i; j++){
        cout << " ";
    }
    for(int j = 0; j < n - i; j++){
        cout << ch << " ";
    }
    ch++;
    cout << '\n';
   }

   cout << '\n';

   cout << "Pattern #18: \n";
    ch = 'A';
   for(int i = 0; i < n; i++){
    for(int j = 0; j < i; j++){
        cout << " ";
    }
    for(int j = 0; j < n - i; j++){
        cout << ch;
    }
    ch++;
    cout << '\n';
   }

   cout << '\n';

   cout << "Pattern #19: \n";
   n = 4;
   for(int i = 0; i < n; i++){
    for(int j = i; j < n; j++){
        cout << " ";
    }

    for(int k = 0; k < i + 1; k++){
        cout << k + 1 << " ";
    }
    cout << '\n';
   }

   cout << '\n';

   cout << "Pattern #20: \n";
    n = 9;
    for(int i = 0; i < n;i++){
        for(int j = 0; j <= n-i-1; j++){
            cout << " ";
        }
        for(int j = 1; j <= i + 1; j++){
            cout << j;
        }
        for(int j = i; j >= 1; j--){
            cout << j;
        }
        cout << '\n';
    }

    cout << '\n';

    cout << "Pattern #21: \n";
    cout << "Hollow diamond: \n";
    n = 4;
    //top part:
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= n-i-1; j++){
            cout << " ";
        }
        cout << "*";
        if(i != 0){
            for(int j = 0; j < 2*i-1;j++){
                cout << " ";
            }
            cout << "*";
        }
        cout << '\n';
    }
    //bottom part:
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j <= i + 1; j++){
            cout << " ";
        }
        cout << "*";
        if(i != n-2){
            for(int j = 0; j < 2 * (n-2-i)-1; j++){
                cout << " ";
            }
            cout  << "*";
        }
        cout << '\n';
    }

    cout << '\n';
    cout << "Pattern #22: \n";
    cout << "Butterfly pattern: \n";
    n = 4;
    //top
    for(int i = 0; i < n; i++){
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        for(int j = 0; j < 2*(n-1)-2*i; j++){
            cout << " ";
        }
        for(int j = 0; j <= i; j++){
            cout << "*";
        }
        cout << '\n';
    }
    //bottom
    for(int i = 0; i < n; i++){
        for(int j = n; j > i; j--){
            cout << "*";
        }
        for(int j = 0; j < 2*i; j++){
            cout << " ";
        }
        for(int j = n; j > i; j--){
            cout << "*";
        }
        cout << '\n';
    }
    return 0;
}