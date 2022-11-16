BR main
width:      .BLOCK 2 ; int width
length:     .BLOCK 2 ; int lenght
perim:      .BLOCK 2 ; int perim
; int main()
main:    DECI width, d ; cin >> width
         DECI length, d ; cin >> length
         LDWA width, d
         ADDA length, d
         ASLA
         STWA perim, d
         STRO msgw, d
         DECO width, d
         LDBA '\n', i
         STBA 0xFC16, d
         STRO msgl, d
         DECO length, d
         LDBA '\n', i
         STBA 0xFC16, d
         STRO msgp, d
         DECO perim, d
         LDBA '\n', i
         STOP
msgw:    .ASCII "w = \x00"
msgl:    .ASCII "l = \x00"
msgp:    .ASCII "p = \x00"
         .END