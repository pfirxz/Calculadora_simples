#include <iostream>

int main(){

   char op; (declarei pra pedir 1 caractere)
   double num1; (um numero)
   double num2; (outro numero)
   double result; (resultado)

   std::cout << "************** calculator ***************\n";

   std::cout << "Enter  either ( + - * /): ";
   std::cin >> op; (aqui pedi pra digitar um dos 4 caracteres)

   std::cout << "enter #1: ";
   std::cin >> num1; (inserir um numero)

   std::cout << "enter #2: ";
   std::cin >> num2; (inserir o outro numero)

   switch(op){
      case '+':
          result = num1 + num2; (se for adi��o aparece esse)
          std::cout << "result: " << result << '\n';
      break;

      case '-':
          result = num1 - num2; (se for subtra��o aparece esse)
          std::cout << "result: " << result << '\n';
      break;

      case '*':
          result = num1 * num2; (multiplica��o esse)
          std::cout << "result: " << result << '\n';
      break;

      case '/':
          result = num1 / num2; (divis�o esse)
          std::cout << "result: " << result << '\n';
      break;

      default: (se n�o for nenhum dos 4 caracteres que pedi, da essa resposta)
      std::cout << "that wasn't valid operator\n";
      break;
   }

   std::cout << "*****************************************\n";

    return 0;
}

