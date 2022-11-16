BR main
chConst:  .EQUATE '+'
ch1:     .BLOCK 1
ch2:     .BLOCK 1
main:    LDBA 0xFC15, d
         STBA ch1, d
         LDBA 0xFC15, i
         STBA ch2, d
         LDBA ch1, d
         STBA 0xFC16, d
         LDBA chConst, i
         STBA 0xFC16, d
         LDBA ch2, d
         STBA 0xFC16, d
         STOP
         .END