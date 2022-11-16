BR main 
total: .BLOCK 2 ; int total
num1: .EQUATE 2 ; int num1
num2: .EQUATE 0 ; int num2
; int main()
main: SUBSP 4, i ; num1, num2
      STRO msg1, d ; cout << "Enter 2 integers";
      DECI num1, s ; cin >> num1
      DECI num2, s ; cin >> num2
      LDWA num1, s ; total = num1
      ADDA num2, s ; + num2
      STWA total, d
      STRO msg2, d ; cout << "Sum =" 
      DECO total, d ; << total
      LDBA '\n', i ; << endl
      STBA 0xFC16, d
      ADDSP 4, i ; num2 num1
      STOP
msg1: .ASCII "Enter two integers: \x00"
msg2: .ASCII "Sum = \x00"
      .END