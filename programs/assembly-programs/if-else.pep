BR main 
number: .EQUATE 0 ; local variable number 
; int main()
main: SUBSP 2, i ; allocate memory number
      DECI number, s ; cin >> number
      LDWA number, s ; if (number % 2 ==0 )
      ANDA 0x0001, i ; mask all but rightmost bit
      BRNE elseif
      STRO msg1, d ; cout << "Even"
      BR endif
elseif: STRO msg2, d ; cout << "Odd"
endif: ADDSP 2, i
      STOP
msg1: .ASCII "Even\n\x00"
msg2: .ASCII "Odd\n\x00"
      .END