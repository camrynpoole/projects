BR main
amount:  .EQUATE 200
num:     .BLOCK 2
sum:     .BLOCK 2
main:    DECI num, d
         LDWA num, d
         ADDA amount, i
         STWA sum, d
         STRO msg, d
         DECO sum, d
         LDBA '\n', i
         STBA 0xFC16, d
         STOP
msg:     .ASCII "sum = \x00"
         .END