#include <iostream>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int alice, bob;
    cin >> alice >> bob;
    if ((alice + bob) & 1)
    {
      cout << "Alice" << endl;
    }
    else
    {
      cout << "Bob" << endl;
    }
  }
}

#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <list>
#include <vector>
#include <string>
#include <stack>
#include <sstream>
#include <math.h>
#include <queue>
#include <utility>
#define ll long long
#define IOS                         \
  std::ios::sync_with_stdio(false); \
  cin.tie(0);                       \
  cout.tie(0);
// using namespace std;

using std::cin;
using std::cout;
using std::endl;
using std::max;
using std::min;
using std::sort;

const int N = 2e5 + 10;
int sum[N];
int dp[N];
std::pair<int, int> pr[N];

long long int fpow(ll base, ll power) // 快速幂
{
  long long int result = 1;
  while (power > 0)
  {
    if (power & 1)
    {
      result = base * result;
    }
    power >>= 1;
    base = base * base;
  }
  return result;
}

// bool check(){}

void solve()
{
  ll a, b;
  cin >> a >> b;
  cout << (((a + b) % 2 == 0) ? "Bob" : "Alice") << endl;
}

int main()
{
  IOS int tt;
  cin >> tt;
  while (tt--)
    solve();
}

// shuiyunshen
// yanxiazhi
// A heart that`s broke is a heart that`s been loved

/*
⣿⣿⣿⣿⣿⣿⡷⣯⢿⣿⣷⣻⢯⣿⡽⣻⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣇⠸⣿⣿⣆⠹⣿⣿⢾⣟⣯⣿⣿⣿⣿⣿⣿⣽⣻⣿⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣻⣽⡿⣿⣎⠙⣿⣞⣷⡌⢻⣟⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣿⣿⣿⣿⣿⣿⡄⠹⣿⣿⡆⠻⣿⣟⣯⡿⣽⡿⣿⣿⣿⣿⣽⡷⣯⣿⣿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣟⣷⣿⣿⣿⡀⠹⣟⣾⣟⣆⠹⣯⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⢠⡘⣿⣿⡄⠉⢿⣿⣽⡷⣿⣻⣿⣿⣿⣿⡝⣷⣯⢿⣿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣯⢿⣾⢿⣿⡄⢄⠘⢿⣞⡿⣧⡈⢷⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⢸⣧⠘⣿⣷⠈⣦⠙⢿⣽⣷⣻⣽⣿⣿⣿⣿⣌⢿⣯⢿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⣟⣯⣿⢿⣿⡆⢸⡷⡈⢻⡽⣷⡷⡄⠻⣽⣿⣿⡿⣿⣿⣿⣿⣿⣿⣷⣿⣿⣿⣿⣏⢰⣯⢷⠈⣿⡆⢹⢷⡌⠻⡾⢋⣱⣯⣿⣿⣿⣿⡆⢻⡿⣿⣿⣿
⣿⣿⣿⣿⣿⣿⡎⣿⢾⡿⣿⡆⢸⣽⢻⣄⠹⣷⣟⣿⣄⠹⣟⣿⣿⣟⣿⣿⣿⣿⣿⣿⣽⣿⣿⣿⡇⢸⣯⣟⣧⠘⣷⠈⡯⠛⢀⡐⢾⣟⣷⣻⣿⣿⣿⡿⡌⢿⣻⣿⣿
⣿⣿⣿⣿⣿⣿⣧⢸⡿⣟⣿⡇⢸⣯⣟⣮⢧⡈⢿⣞⡿⣦⠘⠏⣹⣿⣽⢿⣿⣿⣿⣿⣯⣿⣿⣿⡇⢸⣿⣿⣾⡆⠹⢀⣠⣾⣟⣷⡈⢿⣞⣯⢿⣿⣿⣿⢷⠘⣯⣿⣿
⣿⣿⣿⣿⣿⣿⣿⡈⣿⢿⣽⡇⠘⠛⠛⠛⠓⠓⠈⠛⠛⠟⠇⢀⢿⣻⣿⣯⢿⣿⣿⣿⣷⢿⣿⣿⠁⣾⣿⣿⣿⣧⡄⠇⣹⣿⣾⣯⣿⡄⠻⣽⣯⢿⣻⣿⣿⡇⢹⣾⣿
⣿⣿⣿⣿⣿⣿⣿⡇⢹⣿⡽⡇⢸⣿⣿⣿⣿⣿⣞⣆⠰⣶⣶⡄⢀⢻⡿⣯⣿⡽⣿⣿⣿⢯⣟⡿⢀⣿⣿⣿⣿⣿⣧⠐⣸⣿⣿⣷⣿⣿⣆⠹⣯⣿⣻⣿⣿⣿⢀⣿⢿
⣿⣿⣿⣿⣿⣿⣿⣿⠘⣯⡿⡇⢸⣿⣿⣿⣿⣿⣿⣿⣧⡈⢿⣳⠘⡄⠻⣿⢾⣽⣟⡿⣿⢯⣿⡇⢸⣿⣿⣿⣿⣿⣿⡀⢾⣿⣿⣿⣿⣿⣿⣆⠹⣾⣷⣻⣿⡿⡇⢸⣿
⣿⣿⣿⣿⣿⣿⣿⣿⡇⢹⣿⠇⢸⣿⣿⣿⣿⣿⣿⣿⣿⣷⣄⠻⡇⢹⣆⠹⣟⣾⣽⣻⣟⣿⣽⠁⣾⣿⣿⣿⣿⣿⣿⣇⣿⣿⠿⠛⠛⠉⠙⠋⢀⠁⢘⣯⣿⣿⣧⠘⣿
⣿⣿⣿⣿⣿⣿⣿⣿⣿⡈⣿⡃⢼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣦⡙⠌⣿⣆⠘⣿⣞⡿⣞⡿⡞⢠⣿⣿⣿⣿⣿⡿⠛⠉⠁⢀⣀⣠⣤⣤⣶⣶⣶⡆⢻⣽⣞⡿⣷⠈⣿
⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃⠘⠁⠉⠉⠉⠉⠉⠉⠉⠉⠉⠙⠛⠛⢿⣄⢻⣿⣧⠘⢯⣟⡿⣽⠁⣾⣿⣿⣿⣿⣿⡃⢀⢀⠘⠛⠿⢿⣻⣟⣯⣽⣻⣵⡀⢿⣯⣟⣿⢀⣿
⣿⣿⣿⣟⣿⣿⣿⣿⣶⣶⡆⢀⣿⣾⣿⣾⣷⣿⣶⠿⠚⠉⢀⢀⣤⣿⣷⣿⣿⣷⡈⢿⣻⢃⣼⣿⣿⣿⣿⣻⣿⣿⣿⡶⣦⣤⣄⣀⡀⠉⠛⠛⠷⣯⣳⠈⣾⡽⣾⢀⣿
⣿⢿⣿⣿⣻⣿⣿⣿⣿⣿⡿⠐⣿⣿⣿⣿⠿⠋⠁⢀⢀⣤⣾⣿⣿⣿⣿⣿⣿⣿⣿⣌⣥⣾⡿⣿⣿⣷⣿⣿⢿⣷⣿⣿⣟⣾⣽⣳⢯⣟⣶⣦⣤⡾⣟⣦⠘⣿⢾⡁⢺
⣿⣻⣿⣿⡷⣿⣿⣿⣿⣿⡗⣦⠸⡿⠋⠁⢀⢀⣠⣴⢿⣿⣽⣻⢽⣾⣟⣷⣿⣟⣿⣿⣿⣳⠿⣵⣧⣼⣿⣿⣿⣿⣿⣾⣿⣿⣿⣿⣿⣽⣳⣯⣿⣿⣿⣽⢀⢷⣻⠄⠘
⣿⢷⣻⣿⣿⣷⣻⣿⣿⣿⡷⠛⣁⢀⣀⣤⣶⣿⣛⡿⣿⣮⣽⡻⣿⣮⣽⣻⢯⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣯⢀⢸⣿⢀⡆
⠸⣟⣯⣿⣿⣷⢿⣽⣿⣿⣷⣿⣷⣆⠹⣿⣶⣯⠿⣿⣶⣟⣻⢿⣷⣽⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢀⣯⣟⢀⡇
⣇⠹⣟⣾⣻⣿⣿⢾⡽⣿⣿⣿⣿⣿⣆⢹⣶⣿⣻⣷⣯⣟⣿⣿⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⢀⡿⡇⢸⡇
⣿⣆⠹⣷⡻⣽⣿⣯⢿⣽⣻⣿⣿⣿⣿⣆⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠛⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⢸⣿⠇⣼⡇
⡙⠾⣆⠹⣿⣦⠛⣿⢯⣷⢿⡽⣿⣿⣿⣿⣆⠻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⠎⢸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠏⢀⣿⣾⣣⡿⡇
⣿⣷⡌⢦⠙⣿⣿⣌⠻⣽⢯⣿⣽⣻⣿⣿⣿⣧⠩⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡏⢰⢣⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠃⢀⢀⢿⣞⣷⢿⡇
⣿⣽⣆⠹⣧⠘⣿⣿⡷⣌⠙⢷⣯⡷⣟⣿⣿⣿⣷⡀⡹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣷⣈⠃⣸⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠟⢀⣴⡧⢀⠸⣿⡽⣿⢀
⢻⣽⣿⡄⢻⣷⡈⢿⣿⣿⢧⢀⠙⢿⣻⡾⣽⣻⣿⣿⣄⠌⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠛⢁⣰⣾⣟⡿⢀⡄⢿⣟⣿⢀
⡄⢿⣿⣷⢀⠹⣟⣆⠻⣿⣿⣆⢀⣀⠉⠻⣿⡽⣯⣿⣿⣷⣈⢻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠋⢀⣠⠘⣯⣷⣿⡟⢀⢆⠸⣿⡟⢸
⣷⡈⢿⣿⣇⢱⡘⢿⣷⣬⣙⠿⣧⠘⣆⢀⠈⠻⣷⣟⣾⢿⣿⣆⠹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⠋⣠⡞⢡⣿⢀⣿⣿⣿⠇⡄⢸⡄⢻⡇⣼
⣿⣷⡈⢿⣿⡆⢣⡀⠙⢾⣟⣿⣿⣷⡈⠂⠘⣦⡈⠿⣯⣿⢾⣿⣆⠙⠻⠿⠿⠿⠿⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠛⢋⣠⣾⡟⢠⣿⣿⢀⣿⣿⡟⢠⣿⢈⣧⠘⢠⣿
⣿⣿⣿⣄⠻⣿⡄⢳⡄⢆⡙⠾⣽⣿⣿⣆⡀⢹⡷⣄⠙⢿⣿⡾⣿⣆⢀⡀⢀⢀⢀⢀⢀⢀⢀⢀⢀⢀⢀⢀⣀⣠⣴⡿⣯⠏⣠⣿⣿⡏⢸⣿⡿⢁⣿⣿⢀⣿⠆⢸⣿
⣿⣿⣿⣿⣦⡙⣿⣆⢻⡌⢿⣶⢤⣉⣙⣿⣷⡀⠙⠽⠷⠄⠹⣿⣟⣿⣆⢙⣋⣤⣤⣤⣄⣀⢀⢀⢀⢀⣾⣿⣟⡷⣯⡿⢃⣼⣿⣿⣿⠇⣼⡟⣡⣿⣿⣿⢀⡿⢠⠈⣿
⣿⣿⣿⣿⣿⣷⣮⣿⣿⣿⡌⠁⢤⣤⣤⣤⣬⣭⣴⣶⣶⣶⣆⠈⢻⣿⣿⣆⢻⣿⣿⣿⣿⣿⣿⣷⣶⣤⣌⣉⡘⠛⠻⠶⣿⣿⣿⣿⡟⣰⣫⣴⣿⣿⣿⣿⠄⣷⣿⣿⣿
*/

/**
                                                                                   .@@
                                                                                  .@@@@
                                                     :--:::::::-----==:           %%@@@%
                                             :*++*+==--========----------:-==:    @%@@@@.
                                        .:. ..-=+=+*+==---=----------------------:*@%@@@@         .:..
                                    .::::-----==+++====+***#+----=------:--------:-=%%@@@#+%@@@@@@@@@@@@@@@@@@@@@@@
                :+%@@@@@@@@@@@@@@%::::=*=+++++=++==*%*=-:=*#+##=-----------------:::-@%@@@@@@@@@@@@@@@@@@@@@@@@@@@*
             %%%%%%%%%%%%@@@@@@= .:=%@@@@@%#+=+++%@@@%+-==--++-=*=-------------:-----:*@@@@@@@@@@@@@@@@@@@@@@@@@@%
             .@%%%%%%%%%@@@@%-  .-+%@@@%@%%%####%#*#%%%%==----+=:-++-::------=----:::-:=@@@@@@@@@@@@@@@@@@@@@@@@%
               %%%%%%%%@%@@+  .::*%@@@@%#**#####******+*%+===---+=..:==---------:---::::-@@@@@@@@@@@@@@@@@@@@@@@
                %%%@%@%@@@:  .:.%%%%%#=+*+*+*#*+=+***+*#+##=--=-:-+.   ==--------::::--::-@@@@@@@@@@@@@@@@@@@@@
                .#%%%@%@%   . -@%%%*==+*++++**+++=+*++=++=+#--=----=:    +---:-::::::::--:-%@@@@@@@@@@@@@@@@@@=
                 :@%%%@=   . =%%%#---======+=========++=====*+--=-=--=.    --::::::::::::--=@@@@@@@@@@@@@@@@@@@:
                  @%@#   .  -%%*+---========-:===++======-==-==--=-----:     :-::::::::::::-=@@@@@@@@@@@@@@@@@@@=
                  @#.   .  .#*=+.-=-==-==-=-::===+=-==-=--=--==+=:------=     .-:::::::-:--:--#@@@@@@@@@@@@@@@@@@#
                 -         #+=-.:----=------.:-=-*===----==--==-+=-:::-::-:     :-::::::::::::==+@@@@@@@@@@@@@@@@@@
                     .    -==:..-=--==--:--:.-===+====----=====--=--::::::--      ::::::::::--:=%*=*@@@@@@@@@@@@@@@@.
                .+: .    .==-. :----==-::--:.---==-===---:------:----::::::-+       -:::------=--+#+#@@@@@@@@@@@@@@@@.
              .  . -    ::--. .::---:-:.-=-: :--==--==:=--:-::::::--=-:::-:::*.      :::-==-==--:--**@@@@@@@%@@@@@@@@@=
                :.:     :::.. .--:::::: --::.:-:---:--:--:::::::::--:==:::::::+.       -:-=-=------:*+@@@@@@@@+ #@@@@@@
               #-.     -::.. .=+:::::-:.--:-:.::::::::::+:::::::::::::=-:::::::=.       :=-=---------=%@@@@@@@@@  :@@@@
             =@-.     :=..   -=::::-:=.:::::-.::::::::::%.::::::::::::-=:::::::-+-        *%+=-------::%@@@@@@@@@:   :.
            #@*.      +-..  :-:::::::-..::::::.:::::::::%:-==:..::::::--+:::-:-====        :*%*+--------@@@@@@@@@@@
          .@@#       :=:   .::::::::-:.::::::-.::::::.::#.:-=-.:..::-.::-+:-=--===-=         -#++*+===-:#@@@@@@@@@@@@
         *@@*.    .  --.  .:::::::::-..::::.:::.::..:..-+:: :.......=-.::==--==-====-         .**++++++=*@@@@@@@@@@@@@@:
       =@@@==.   .: .=-.  ::::::.:::= .::::...::.-.....+::.  - :....:*::--==--=======-          -*++=+=++@@@@@@@@@@@@@@@@@@%-
     +@@@@::- . .:- :=-. .::::::.::=- .::......=.=.....+ :.  :  ... - -:-==+---==-=--*: .        .*++++=+%@@@@@@@@@@@@@@@
   :@@@@%.=.. : :--.-=:..:.::.:....-  ......... --:   ::.:.  .  :::.-  ----=#+====-==-*.           :*++=++@@@@@@@@@@@@@.
     +*#-- :.:: :-::==..::.:..:...:: .:....... . ::   :. :.      -::. ..:#=-=+-==-===-=+.+       ..  -+=++%#=-+=%@@@@#
        . ...::.--::==: ::........-:..=-   :  .   .   . .:.      :-*-    .:=-+====-==--=-+#       :.   +++++==+++++*@@*
          :.::.::-.-==-.=-:...--.: :.::-.  :            .:    :+--:.     ::.==+===---=-=+--%.      +@@=. :=*+++++++*++*
          .::::::::==---=-:.. =- .  ..: :..:  .:...  :  -. .+.   -*=:.+@@@@@@@@*====---=+*:**. .    =@@**%+:-+*%*++***+=
       . ...::::::-+=--+-=:--.+:.    ..  :.-.:::::. .:  :.*.  :-:+#@@%#++=%:-@##+===-==-=+--==+ ..   .###*+++**#@%#+*+++*=
       ..::::::::.*+--:=-----:=:-....::=:--=:....:..=. :.    ..+@@@*+==---#-=@*+*====-===+:-=*@% ::    *#*+*#+*++#%%%%##*+++-
       .::.:::::::%=--:-------: .     : -:-+#+-....= ..:     -*#::%+-:=+---:+**-+==-===-=-+-=@@@@ -#    =***#%#+*+#%==*+
      :.:::::::::-+=:---=-----. .      :. ::=..:..:   .       :   -=--:..:--+#-:-+=======-%==#@@@@:.@=   :#***%%#*+=#-==
      :-::-::::.:--*:---=-=---: . ..-+*#%#=-+:...:.                :+-....-+=::::#=======-*%-+@@@%@@-%%-  .#++*%%#*+#*+-
    . =-:::=:::::-:+.:--=-=--:- .=**+-:::+++%-..:.   .               ::..--:....:=#-=====-#@+=@@@%*%@%%@%-  -*+#%:*%++*=
      =:::---:------::-:==-=--+.      ....:  :.:.                     .   ......::*=-====-*@#-%@@%#*%%%%%%@*. +**- .*#**=
     +:::. :---=--=:=:-:==-==-:@.    .....:. ..:.                       ...::...--:*=====-+@@-*@%%*##%%*###+#*= +-  ::-:**
     ::-:   .:---.#:=.:-==-==-:%%    ....  ..:  :                              :=  ==-+==-*@@=*@%#**#%#****##*++**- .:     .
    .--      .:--:=:=-.-==-==-:%@+   ....   .:                                ::   :=--===#@@**%%**#*##***++**+=+*- ::
   :.         :----=.- -=-====-%@@:   ...   .      .                         .     :---==-@@@#%%%#*#*******+++***+# :
 .             -:--: .:-+--==-:%@@@                                              . #%:-===@@@#%##*##**+++#*+*+*+****-
                ::-:  *:%==----*+%@%   .                                        . #@%--+=*@%@%%##**#**+++%#*==+*++*+=
                -=:-. #:+#+---:#%++%#.                      . .:. .:+          ..#@@@--**%%%%%###*+#++*++*--+*==+++-+.
                . =:: -==%@--=-=%**%%+                 =@+ .....:.:.:.         .*:@@%--%%@%%%####**#++*+++--:   .+*-==
                   :---+**%%---:@**%%#+     .      :@%%%::.:::::..:.:         .-::%%%-:@%%%%%###**#*+++=*+-::    :==:-=
               .    :=-+*##*#:-:**+*%**@:           =@#*:.::::::::::        .:...:@%%-+%%%%%###**+%*==+=%=:-.    ..    :.
               .     +*=+**%**-:=***##*+%%.        . .*%.:::::::::..       :. ....@%%=%%%#*#####+#%+===+:-:-.    .
                     .+-++**#+** +*-*++++%%%.    ..     --:.::.:::       =: .    .%%#+%%####*+@*++%+=-+. .:-
                      --++=**#*+*-++==+++%%%#@+..         .:::.        :=.  .    .%%%#*#*##*#+#=++#===:  .-
               .    . =-=+****+**+#:+==++#%%#%%%@%=. ..              :-:       .  %#%###%*##.:*+==#++-    :
                    .  :-=+=++***++#-:+++*++*#%%%%@@%=.. ..       :---.           #@@%@@@@=  :=  .+-+-
                .    . :.-===++**+==*+::+#++++*#%%%%%%%%-.     .*=:-:.            *%%%##*==+**#*+==*+=
                     :  -::====++*=+=+*==*=-=#**##%#%%%%%*+-:%#--:-. ..           .%#*=-==-*#*++==++-=#*:
                     :*::**=====+**==+=++*##*+++**##%%%%%%. :::.:. ..             .:=--===+@#*+++=+*+=-=+=*#=
                     #-=+==*=-++++#++==-++++*++++*#%%%%%%=-  .:.... .            .  -=--=+@#*#%@@%+==+=====+*+
                   ..*++==+**+:=*++%++++#++++++*+**#%%%%#-=. .:........              .@-=+++#%%@@%@=======++*@+
                .+-.-+*==*++#+-:=++*%+=**++++++*++**%%%%--=-.::..........            .: ==++*%@@%@+========+*#@@+
               -:--.=-*+*+++++=:.:-+*#+++*****=+*##%+#%==---::...........           :    .+%@@@%@#+======++*#%%@@#%=
              +::-:==--=*==**=#=:::-+#**+*+**++**%=.-++-:::--... ..  ....          :.     ..-@@@*++====++++*#%@@@%*=+.
              =---.=--:*+=+#*+=:-:--=++=**+++++*#+:=-.--:.:::..........           +        ..*%-+=-====+++*###@@@#+=+#*
              =----==-*+===@%:..-=---++##=+++***#-. .:=::...:..........         :=          :*:==-=====+++*%#%@@*++++##@*
             .+=-=*=+#*---==%:.:-=%+#+-:--+++*+*%:..  -::.............         :.          .--==-=======+*#*%@%+++==+##@#%+
             -:=##*+=-::-===+:.--+*#---::+*++++#+ ....-  .:.........  ..   . :+. .         =============+**#*++++===*%%#%###.
             :--*#@*+-::::-==-:-=#=.---:-+*==+#-......-:  ..........        :.            +============+*##**++====*%%%#**+=+
            .:---%=@*+-::--:-:.-*=:=:--=#++*@%-... . .-:.... ......       .:.           .=-===========+**+++===-===*#***+++=-:
            ..:-==+*#+*=:-::--.=+=::-=+*+%@+#@%.... ..-:.  .........     .-            .+============++========--===++**++==--
             .:----++%**-::  .+=+=++++++*%#+@@@%......-:.  .            =. .          .+-===-===-==++==--===------==+++====--:
              ..:--=*#%*+=   .=%##-:-+++*##+@@@@@.... -:.  .         ..-             -+==-======++*=======------==++======+*#*
               .::=-=#+#-  .::=#-:-:=++=+##*@@@@@@.. .::.  .         -:      .     .=+==-==+-==++=:=---=----========+**+=----:=
                .::--=+#=.:::-*=:::::++=+*#*%.#@@@@:..::.   .   .  .+           .=#*++++*+=====--=-=---=--=+**##*+=====-------:-
                 ..::-=*+::::=:.::::--===**+*. -@@@@:.::  ...  .  -.. .  .  .-%@@@*+*#*#*+====--=-:----*##*+==--==---======----:
                   ..:-:+:-:--:::--:::-+#*+++:   @@@@+:-  ..  .  +. ..   -@@@@@@@*@%*###*======*+-=-=%#=-=======-====-=======-:-+
                     ..:=::::::::::-:**++=-++.   .@@@@#= . .   :+    :#@@@@@@@@@%##%%%%#+++==#@%%@=**+==========-------=====-=+==
                       .  .:::::::--+==----+#++.  .@@@@@ .. ..:::+#%@%@@@@@@@#@%%%%%%@%*=+#@@@%@#%@=============------=====++++=+
                          ....  ..::=-:----+*=+**=++@@@@@:.-*@@%%%%%@@@@*:. .@@%%@%%@%**%@@@@@##@@*========--------=====+++*#*+==
                           .    ...::=:--==++=+++=+++%@@@@@@@%%@%@@#-      :%#%%%%@%#@@@@@@@%#@*@@+--===-----------======*##**=--
                                ...:.--:--=*+===++=++=#@@@@@%%%#*++=.     :%%%@@%%@@@@@@@@+@@#+*@@+===-----------====+++*##**+=-:
                                ....:+=:-==#++===+++===%@@%#*+==+++++++*##@@@%@@@@@@@@@**%##+=-%@#=-------------====+++*##*++=-:.
                                 ..:-+#===+#  .-:=+=*+*+#*+==+++++++++**%@@@@@@@@@@@*-@@#+=+==+@@=--------------===+++*##*+=-:.
                                  ..:=%+==+%       =#*-##*#+=%+++=++*+#%@@@@@@@@@@:%@#*=+=-+=#@@+-=-------------====+*#*++=-:.
                                     .=*===*      .--#:..-#@@-.   .:=**@@@@@@@@*@@@%+%+@@=--#@%=--:----------------=+++==-:.
                                       =::--         :*-##==-.        -@@@@@@@@@@@@@@@@@@@@@%+=::::::::::::::::::--====-:..
                                           ...        *%=-.....       %@@@@@@@@@@@@@@@@@@@@@*-::..:.............:::--:..      .-:
                                                  ::  ==.   .....    +@%@@@@@@@@@@@@@@@@@@@@*.:. . ...          .... .     =@*-:
                                                      ::..:---::... :#*#@@@@@@@@@%%@@@@@@@@@@+ .                  :*    ##+%+:
                                                             ...::::*-:::@@@@@@%##%%%%@@@@@@@#                   -+. *+ =  -:
                                                                   ..  .#@@%%%%##*+*#%@@@%%%=                    . :     ::
                                                                        @@@%%%######%%%%#####%=                =        #
                                                                          @@@@@%@@%%%###*##*-                 . .     =
                                                                          :@@%%%%###******+=-                 .
                                                                            *@###***+**+++:
                                                                               -*- =*++*:
*/