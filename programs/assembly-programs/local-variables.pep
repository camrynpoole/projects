BR main 
bonus: .EQUATE 5     ;constant 
exam1: .EQUATE 8     ;local variable #2d 
exam2: .EQUATE 6     ;local variable #2d 
exam3: .EQUATE 4     ;local variable #2d
exam4: .EQUATE 2     ;local variable #2d
score: .EQUATE 0     ;local variable #2d 
main:  SUBSP 10, i    ;allocate #exam1 #exam2 #score 
       DECI exam1, s ;cin >> exam1 
       DECI exam2, s ; >> exam2 
       DECI exam3, s ; >> exam3
       DECI exam4, s ; >> exam4
       LDWA exam1, s ;score = (exam1 
       ADDA exam2, s ; + exam2
       ADDA exam3, s ; + exam3
       ADDA exam4, s ; + exam4)
       ASRA          ; / 2
       ASRA          ; / 2
       ADDA bonus, i ; + bonus 
       STWA score, s 
       STRO msg, d   ;cout << "score = " 
       DECO score, s ; << score 
       LDBA '\n', i  ; << endl 
       STBA 0xFC16, d
       ADDSP 10,i ;   ;deallocate #score #exam2 #exam1 
       STOP 
msg:   .ASCII "score = \x00" 
       .END 