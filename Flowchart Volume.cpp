#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   int x;
   int y;
   int v;
   int z;

   raptor_prompt_variable_zzyz ="Masukkan Panjang Balok";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> x;
   raptor_prompt_variable_zzyz ="Masukkan Lebar Balok";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> y;
   raptor_prompt_variable_zzyz ="Masukkan Tinggi Balok";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> z;
   v =x*y*z;
   cout << v << endl;
   return 0;
}
