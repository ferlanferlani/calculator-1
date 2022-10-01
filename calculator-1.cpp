# include <iostream>
using namespace std;

int main() {

  char op;
  float num1, num2;

  cout << "----------------------------------------------------------------------" <<endl;
  cout << "------------------------ KALKULATOR SEDERHANA ------------------------" <<endl;
  cout << "----------------------------------------------------------------------" <<endl;
  cout << "Masukkan Operator : (+), (-), (*), (/) : ";
  cin >> op;

  cout << "Masukkan 2 Nilai Yang Akan Dihasilkan : ";
  cin >> num1 >> num2;

  switch(op) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2 <<endl;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;
      
    default:
      // Jika operator yang dimasukkan selain ini  +, -, * atau  /, pesan error akan tampil
      cout << "Error! Operator Yang Anda Masukkan Salah, Silahkan Coba Lagi!";
      break;
  }
  
  cin.get();

  return 0;
}
