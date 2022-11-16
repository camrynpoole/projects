BR main
ch:      .BLOCK 1
; int main()
main:    LDBA 0xFC15, d
         STBA ch, d
         LDBA ch, d
         SUBA 1, i
         STBA ch, d
         LDBA ch, d
         STBA 0xFC16, d
         LDBA '\n', i
         STBA 0xFC16, d
         STOP
         .END