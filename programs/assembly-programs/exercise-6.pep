BR main
num:      .BLOCK 2
; int main()
main:    DECI num, d
         LDWA num, d
         ANDA 0x0016, i
         STWA num, d
         STRO msg, d
         DECO num, d
         LDBA '\n', i 
         STBA 0xFC16, d
         BR main
         STOP
msg:    .ASCII "num = \x00"
         .END