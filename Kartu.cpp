#include <iostream>
#include <string>

using namespace std;
int main()
{
   string raptor_prompt_variable_zzyz;
   string kartu;
   string bonus;

   raptor_prompt_variable_zzyz ="Silahkan Pilih Kartu Anda (Gold/Premium)";
   cout << raptor_prompt_variable_zzyz << endl;
   cin >> kartu;
   if (kartu=="gold")
   {
      raptor_prompt_variable_zzyz ="Pilih Bonus Anda (Ambil / Tukar)";
      cout << raptor_prompt_variable_zzyz << endl;
      cin >> bonus;
      if (bonus=="ambil")
      {
         cout << "Selamat bonus anda telah diambil" << endl;      }
      else
      {
         if (bonus=="tukar")
         {
            cout << "Selamat bonus anda telah masuk ke poin" << endl;         }
         else
         {
         }
      }
   }
   else
   {
      if (kartu=="premium")
      {
         raptor_prompt_variable_zzyz ="Pilih Bonus Anda (Ambil bonus / Tukar poin)";
         cout << raptor_prompt_variable_zzyz << endl;
         cin >> bonus;
         if (bonus=="ambil bonus")
         {
            cout << "Selamat bonus anda telah diambil" << endl;         }
         else
         {
            if (bonus=="tukar poin")
            {
               cout << "Selamat bonus anda telah masuk ke poin" << endl;            }
            else
            {
            }
         }
      }
      else
      {
      }
   }

   return 0;
}
