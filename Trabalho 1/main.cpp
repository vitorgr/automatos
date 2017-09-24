#include <iostream>
#include <cstdio>
#include <string>
#include<cstdlib>

using namespace std;
void transicao (string e, string w)
{
  int b = e.length();

  for(int i =0;i <=b-1;i++)
  {
    if(x == 0 && y == 0)
    {
        e ="q2";
    }
    if(strcmp(e,"q0") == 0 && strcmp(w[i],"b") == 0)
    {
        e ="q1";
    }
    if(strcmp(e,"q1") == 0 && strcmp(w[i],"a") == 0)
    {
        e ="q4";
    }
    if(strcmp(e,"q1") == 0 && strcmp(w[i],"b") == 0)
    {
        e ="q3";
    }
    if(strcmp(e,"q2") == 0 && strcmp(w[i],"a") == 0)
    {
        e ="q6";
    }
    if(strcmp(e,"q2") == 0 && strcmp(w[i],"b") == 0)
    {
        e ="q5";
    }
    if(strcmp(e,"q3") == 0 && strcmp(w[i],"a") == 0)
    {
        e ="q8";
    }
    if(strcmp(e,"q3") == 0 && strcmp(w[i],"b") == 0)
    {
        e ="q7";
    }
    if(strcmp(e,"q4") == 0 && strcmp(w[i],"a") == 0)
    {
        e ="q8";
    }
    if(strcmp(e,"q4") == 0 && strcmp(w[i],"b") == 0)
    {
        e ="q4";
    }
    if(strcmp(e,"q5") == 0 && strcmp(w[i],"a") == 0)
    {
        e ="q8";
    }
    if(strcmp(e,"q5") == 0 && strcmp(w[i],"b") == 0)
    {
        e ="q10";
    }
    if(strcmp(e,"q6") == 0 && strcmp(w[i],"a") == 0)
    {
        e ="q8";
    }
    if(strcmp(e,"q6") == 0 && strcmp(w[i],"b") == 0)
    {
        e ="q11";
    }
    if(strcmp(e,"q7") == 0 && strcmp(w[i],"a") == 0)
    {
        e ="q12";
    }
    if(strcmp(e,"q7") == 0 && strcmp(w[i],"b") == 0)
    {
        e ="q7";
    }
    if(strcmp(e,"q8") == 0 && strcmp(w[i],"a") == 0)
    {
        e ="q8";
    }
    if(strcmp(e,"q8") == 0 && strcmp(w[i],"b") == 0)
    {
        e ="q8";
    }
    if(strcmp(e,"q9") == 0 && strcmp(w[i],"a") == 0)
    {
        e ="q13";
    }
    if(strcmp(e,"q9") == 0 && strcmp(w[i],"b") == 0)
    {
        e ="q10";
    }
    if(strcmp(e,"q10") == 0 && strcmp(w[i],"a") == 0)
    {
        e ="q12";
    }
    if(strcmp(e,"q10") == 0 && strcmp(w[i],"b") == 0)
    {
        e ="q7";
    }
    if(strcmp(e,"q11") == 0 && strcmp(w[i],"a") == 0)
    {
        e ="q13";
    }
    if(strcmp(e,"q11") == 0 && strcmp(w[i],"b") == 0)
    {
        e ="q13";
    }
    if(strcmp(e,"q12") == 0 && strcmp(w[i],"a") == 0)
    {
        e ="q14";
    }
    if(strcmp(e,"q12") == 0 && strcmp(w[i],"b") == 0)
    {
        e ="q9";
    }
    if(strcmp(e,"q13") == 0 && strcmp(w[i],"a") == 0)
    {
        e ="q14";
    }
    if(strcmp(e,"q13") == 0 && strcmp(w[i],"b") == 0)
    {
        e ="q9";
    }
    if(strcmp(e,"q14") == 0 && strcmp(w[i],"a") == 0)
    {
        e ="q15";
    }
    if(strcmp(e,"q14") == 0 && strcmp(w[i],"b") == 0)
    {
        e ="q11";
    }
    if(strcmp(e,"q15") == 0 && strcmp(w[i],"a") == 0)
    {
        e ="q15";
    }
    if(strcmp(e,"q15") == 0 && strcmp(w[i],"b") == 0)
    {
        e ="q11";
    }
  }
  if(strcmp(e,"q7") == 0 || strcmp(e,"q9") == 0 || strcmp(e,"q12") == 0 || strcmp(e,"q14") == 0)
  {
    std::cout << "A PALAVRA É DA LINGUAGUEM" << '\n';
  }
}/
int main() {
  string w, asd;
  std::cout << "insira a palvra" << '\n';
  std::cin >> w;
  transicao(w,"q0");
}
