
        ORG     0000h

        ; --- START PROC L0000 ---
L0000:  JP      L0158+1         ; reference not aligned to instruction

L0003:  JP      L0125

L0006:  JP      L004B

L0009:  JP      L2C00

L000C:  JP      L0000

L000F:  NOP
        JP      0FFFFh

L0013:  NOP
        NOP
        NOP
        NOP
        NOP
        JP      0FC06h

L001B:  NOP
L001C:  NOP
        NOP
        NOP
        NOP
L0020:  JP      0FFFFh

L0023:  NOP
        NOP
        NOP
        NOP
        NOP
        JP      0FFFFh

L002B:  NOP
        NOP
        NOP
        NOP
        NOP
        JP      0FFFFh

L0033:  NOP
        NOP
        NOP
        NOP
        NOP
        JP      0FC03h

L003B:  NOP
        NOP
        NOP
L003E:  NOP
        RRCA
        LD      H,B
        RLCA
        ; --- START PROC L0042 ---
L0042:  AND     B
        INC     E
L0044:  ADD     HL,DE
        LD      B,1Fh
        LD      A,(5060h)
        ; --- START PROC L004A ---
L004A:  LD      A,A
L004B:  OR      0FFh
        RET

L004E:  LD      SP,0000h
        LD      A,11h
        OUT     (1Ch),A
        LD      HL,003Bh
        LD      BC,1019h
L005B:  LD      A,B
        DEC     A
        OUT     (18h),A
        OUTI
        JR      NZ,L005B
        LD      A,84h
        OUT     (20h),A         ; ' '
        LD      A,02h
        OUT     (1Ch),A
        XOR     A
        OUT     (23h),A         ; '#'
        LD      A,0Fh
        LD      HL,0BFFh
        LD      BC,0017h
L0076:  OTDR
        DEC     C
        CP      C
        JR      NZ,L0076
        LD      E,07h
        LD      A,E
L007F:  LD      HL,0084h
        JR      L0097

L0084:  LD      E,20h           ; ' '
        LD      A,0FFh
        LD      HL,008Dh
        JR      L0097

L008D:  LD      E,00h
        LD      A,7Fh           ; ''
        LD      BC,0FCFFh
        LD      HL,00A1h
L0097:  DEC     B
        OUT     (C),E
        JR      NZ,L0097
        DEC     C
        CP      C
        JR      NZ,L0097
        JP      (HL)

L00A1:  IN      A,(1Ch)
        AND     80h
        JR      NZ,L00F3
        INC     A
        OUT     (23h),A         ; '#'
        LD      BC,0080h
        LD      E,18h
L00AF:  IN      A,(C)
        LD      D,A
        CPL
        OUT     (C),A
        IN      A,(C)
        CPL
        CP      D
        JP      NZ,L013E
        OUT     (C),D
        INC     B
        JR      NZ,L00AF
        INC     C
        LD      A,E
        CP      C
        JR      NZ,L00AF
        LD      A,01h
        OUT     (1Ch),A
        LD      A,04h
        OUT     (23h),A         ; '#'
        LD      HL,8000h
L00D1:  LD      A,(HL)
        LD      B,A
        CPL
        LD      (HL),A
        LD      A,(HL)
        CPL
        CP      B
        JP      NZ,L0141+1      ; reference not aligned to instruction
        LD      (HL),B
        INC     HL
        LD      A,H
        OR      L
        JR      NZ,L00D1
        LD      HL,01AAh
        LD      DE,0F000h
        LD      BC,0018h
        LDIR
        LD      A,10h
        OUT     (1Ch),A
        JP      0F000h

L00F3:  LD      HL,0182h
        LD      BC,0FCFFh
L00F9:  IN      A,(C)
        XOR     (HL)
        JR      NZ,L010E
        INC     HL
L00FF:  INC     B
        JR      NZ,L00F9
        LD      HL,0186h
        JP      L0145

L0108:  JP      NZ,L0141+1      ; reference not aligned to instruction
        SUB     A
        OUT     (23h),A         ; '#'
L010E:  LD      A,01h
        OUT     (1Ch),A
        LD      A,10h
        CALL    L012A
        LD      A,62h           ; 'b'
        CALL    L0133
        LD      A,42h           ; 'B'
        CALL    L0133
        SUB     A
        CALL    L012A
L0125:  LD      C,00h
        JP      L2C00

        ; --- START PROC L012A ---
L012A:  OUT     (1Bh),A
L012C:  IN      A,(1Bh)
        AND     02h
        JR      NZ,L012C
        RET

        ; --- START PROC L0133 ---
L0133:  OUT     (1Bh),A
L0135:  IN      A,(1Bh)
        AND     06h
        CP      04h
        JR      NZ,L0135
        RET

L013E:  LD      HL,019Ch
L0141:  LD      IX,018Fh
L0145:  LD      A,01h
        OUT     (1Ch),A
        LD      BC,4A01h
L014C:  LD      A,(HL)
        OUT     (C),A
        INC     HL
        INC     B
        INC     B
        OR      A
        JR      NZ,L014C
        LD      HL,0181h
L0158:  LD      IX,004Eh
        LD      A,9Fh
        OUT     (53h),A         ; 'S'
        LD      A,0BFh
        OUT     (53h),A         ; 'S'
        LD      A,0DFh
        OUT     (53h),A         ; 'S'
        LD      A,0FFh
        OUT     (53h),A         ; 'S'
        LD      DE,0080h
L016F:  LD      B,E
        LD      A,15h
        OUT     (1Ch),A
L0174:  DJNZ    L0174
        LD      B,E
        LD      A,05h
        OUT     (1Ch),A
L017B:  DJNZ    L017B
        DEC     D
        JR      NZ,L016F
        JP      (HL)

L0181:  HALT
        OUT     (0CFh),A
        ADC     A,0D9h
        LD      D,H
        LD      D,L
        LD      D,D
        LD      C,(HL)
        JR      NZ,L01DB
        LD      B,(HL)
        LD      B,(HL)
        NOP
        LD      C,L
        LD      B,L
        LD      C,L
        LD      C,A
        LD      D,D
        LD      E,C
        JR      NZ,L01DC
        LD      D,D
        LD      D,D
        LD      C,A
        LD      D,D
        NOP
        LD      B,H
        LD      C,C
        LD      D,E
        LD      D,B
        LD      C,H
        LD      B,C
        LD      E,C
        JR      NZ,L01EA
        LD      D,D
        LD      D,D
        LD      C,A
        LD      D,D
        NOP
        LD      HL,8000h
L01AD:  DEC     HL
        LD      A,(HL)
        LD      D,A
        CPL
        LD      (HL),A
        LD      A,(HL)
        CPL
        CP      D
        JR      NZ,L01BC
        LD      (HL),D
        LD      A,H
        OR      L
        JR      NZ,L01AD
L01BC:  SUB     A
        OUT     (1Ch),A
        JP      L0108

L01C2:  NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
L01DB:  NOP
L01DC:  NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
L01EA:  NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        LD      (L3137),A
        LD      (L2D38),A
        LD      C,D
        DEC     (HL)
        LD      SP,0FF0Ch
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        JR      L0232

L020E:  JR      L0210

L0210:  LD      E,10h
        DJNZ    L0224
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        LD      A,B
        NOP
        NOP
        NOP
        NOP
        NOP
L0224:  NOP
        DJNZ    L022F
        NOP
        NOP
        NOP
        NOP
        JR      L0245

L022D:  NOP
        NOP
L022F:  NOP
        EX      AF,AF'
        INC     A
L0232:  DJNZ    L026A
        LD      C,B
        INC     D
        LD      C,00h
        NOP
        DJNZ    L0273
        INC     D
        INC     A
        LD      E,D
        INC     (HL)
        NOP
        NOP
        NOP
        NOP
        LD      B,H
        LD      B,D
L0245:  LD      H,D
        JR      NZ,L0248
L0248:  NOP
        JR      L024B

L024B:  JR      C,L0291
        EX      AF,AF'
        DJNZ    L0250
L0250:  NOP
        JR      L0253

L0253:  LD      A,H
        EX      AF,AF'
        JR      NC,L02A3
        NOP
        NOP
        DJNZ    L0293
        LD      (DE),A
        INC     A
        LD      D,D
        INC     H
        NOP
        NOP
        NOP
        JR      Z,L02A0
        LD      H,D
        INC     H
        DJNZ    L0268
L0268:  NOP
        NOP
L026A:  EX      AF,AF'
        LD      E,H
        LD      L,D
        LD      C,D
        DJNZ    L0270
L0270:  NOP
        DJNZ    L028F
L0273:  DJNZ    L02A4+1         ; reference not aligned to instruction
        LD      E,B
        INC     H
        NOP
        NOP
        NOP
        NOP
        LD      A,B
        INC     B
        EX      AF,AF'
        JR      NC,L0280
L0280:  NOP
        NOP
        NOP
        LD      A,(HL)
        NOP
        NOP
        NOP
        NOP
        JR      NZ,L0302
        INC     H
        INC     A
        LD      L,D
        OR      D
        LD      B,H
L028F:  NOP
        NOP
L0291:  LD      B,H
        LD      B,D
L0293:  LD      B,D
        LD      B,D
        LD      D,B
        JR      NZ,L0298
L0298:  JR      L029A

L029A:  JR      C,L02E0
        INC     B
        EX      AF,AF'
        DJNZ    L02A0
L02A0:  JR      L02A2

L02A2:  LD      A,H
L02A3:  EX      AF,AF'
L02A4:  DJNZ    L02CC+2         ; reference not aligned to instruction
        LD      C,(HL)
        NOP
        JR      NZ,L031E
        LD      (6438h),HL
        AND     H
        LD      C,B
        NOP
        INC     H
        LD      (L28FA),HL
        JR      Z,L02FE
        SBC     A,B
        NOP
        DJNZ    L0336
        DJNZ    L033A
        EX      AF,AF'
        LD      B,H
        JR      NC,L02C0
L02C0:  EX      AF,AF'
        DJNZ    L02E3
        LD      B,B
        JR      NZ,L02D6
        EX      AF,AF'
        NOP
        INC     B
        SBC     A,(HL)
        ADD     A,H
        ADD     A,H
L02CC:  CALL    NZ,L1088
        NOP
        NOP
        INC     A
        NOP
        NOP
        NOP
        LD      B,B
L02D6:  LD      A,00h
        DJNZ    L0358
        EX      AF,AF'
        INC     B
        LD      B,D
        JR      NZ,L02F7
        NOP
L02E0:  NOP
        JR      NZ,L0302+1      ; reference not aligned to instruction
L02E3:  JR      NZ,L0305
        LD      (L001C),HL
        INC     B
        LD      A,(HL)
        INC     E
        INC     H
        INC     E
        INC     B
        EX      AF,AF'
        NOP
        EX      AF,AF'
        LD      C,B
        CP      48h             ; 'H'
        LD      C,B
        LD      B,B
L02F6:  INC     A
L02F7:  NOP
        LD      A,H
        DJNZ    L0321
        RET     M
        DJNZ    L030E
L02FE:  EX      AF,AF'
        NOP
        JR      NZ,L02FE
L0302:  JR      NZ,L0332
        LD      B,B
L0305:  LD      C,B
        ADD     A,(HL)
        NOP
        EX      AF,AF'
        LD      A,H
        DJNZ    L0348
        LD      B,D
        LD      (BC),A
L030E:  INC     E
        NOP
        NOP
        LD      A,H
        LD      (BC),A
        LD      (BC),A
        INC     B
        JR      L0317

L0317:  NOP
        NOP
        LD      A,(HL)
        INC     B
        EX      AF,AF'
        DJNZ    L032E
L031E:  INC     C
        NOP
        NOP
L0321:  LD      B,B
        INC     H
L0323:  JR      L0345

L0325:  LD      B,B
        INC     A
        NOP
        JR      NZ,L0323+1      ; reference not aligned to instruction
        LD      (9848h),HL
        INC     H
L032E:  LD      A,(DE)
        NOP
        NOP
        LD      C,(HL)
L0332:  LD      B,B
        LD      B,B
        LD      B,B
        LD      C,B
L0336:  LD      B,(HL)
        NOP
        NOP
        LD      C,B
L033A:  LD      A,H
        LD      D,D
        OR      (HL)
        XOR     D
        LD      B,L
        NOP
        LD      B,B
        LD      E,H
        JP      PO,4A42h
L0345:  CALL    NC,L004A
L0348:  NOP
        JR      C,L039E+1       ; reference not aligned to instruction
        SUB     D
        SUB     D
        AND     D
        LD      B,H
        NOP
        INC     B
        LD      E,(HL)
        LD      B,H
        LD      B,H
        LD      C,H
        LD      D,H
        LD      C,D
        NOP
L0358:  NOP
        CALL    PO,4424h
        ADC     A,D
        SUB     B
        LD      H,B
        NOP
        JR      C,L0369+1       ; reference not aligned to instruction
        DJNZ    L02F6
        ADC     A,D
        XOR     D
        DJNZ    L0368
L0368:  NOP
L0369:  JR      NZ,L03BA+1      ; reference not aligned to instruction
        ADC     A,B
        INC     B
        LD      (BC),A
        NOP
        NOP
        LD      E,44h           ; 'D'
        LD      E,(HL)
        LD      B,H
        LD      C,H
        LD      D,H
        LD      C,D
        NOP
        DJNZ    L03F6
        DJNZ    L03F8
        DJNZ    L03F6
        LD      H,H
        NOP
        LD      (HL),B
        INC     D
        INC     D
        LD      A,(HL)
        AND     H
        AND     H
L0386:  LD      C,B
        NOP
        JR      NZ,L0386
        JR      NZ,L03AE
        LD      H,B
        AND     H
        LD      E,B
        NOP
        EX      AF,AF'
        ADC     A,B
        LD      E,H
        LD      L,D
L0394:  OR      D
        AND     D
        LD      B,H
        NOP
        DJNZ    L0414+2         ; reference not aligned to instruction
        DJNZ    L0418
        JR      NZ,L03C2
L039E:  JR      L03A0

L03A0:  LD      C,B
        LD      E,H
        JP      PE,L2422
        DJNZ    L03B7
        NOP
        EX      AF,AF'
        SBC     A,H
        XOR     D
        JP      Z,948Ah
L03AE:  DJNZ    L03B0
L03B0:  DJNZ    L03CE
        DJNZ    L03C4
        JR      NC,L040E
        INC     H
L03B7:  NOP
        DJNZ    L03C2
L03BA:  JR      NZ,L0414
        LD      H,H
        INC     B
        JR      C,L03C0
L03C0:  INC     H
        LD      B,H
L03C2:  LD      H,H
        LD      B,H
L03C4:  INC     B
        EX      AF,AF'
        DJNZ    L03C8
L03C8:  LD      A,H
        EX      AF,AF'
        JR      NC,L0394
        INC     H
        LD      D,H
L03CE:  JR      C,L03D0
L03D0:  LD      B,B
        LD      C,H
        CALL    NC,4464h
        CALL    NZ,L0042
        INC     A
        EX      AF,AF'
        JR      NC,L0420
        LD      (BC),A
        INC     B
        JR      L03E0

L03E0:  JR      NZ,L040E
        LD      (HL),D
        LD      (6222h),HL
        INC     H
        NOP
        DJNZ    L040A
        JR      NC,L043C
        LD      D,B
        SUB     D
        ADC     A,H
        NOP
        DJNZ    L043A
        JR      NZ,L03F4
L03F4:  NOP
        NOP
L03F6:  NOP
        NOP
L03F8:  JR      NC,L0441+1      ; reference not aligned to instruction
        JR      NC,L03FC
L03FC:  NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        EX      AF,AF'
L040A:  INC     E
        LD      HL,(L0808)
L040E:  EX      AF,AF'
        NOP
        NOP
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
L0414:  LD      HL,(L081C)
        NOP
L0418:  NOP
        EX      AF,AF'
        INC     B
        LD      A,(HL)
        INC     B
        EX      AF,AF'
        NOP
        NOP
L0420:  NOP
        DJNZ    L0441+2         ; reference not aligned to instruction
        LD      A,(HL)
        JR      NZ,L0435+1      ; reference not aligned to instruction
        NOP
        NOP
        INC     E
        LD      (L1C20+2),HL    ; reference not aligned to instruction
        EX      AF,AF'
        LD      A,08h
        EX      AF,AF'
        EX      AF,AF'
        INC     E
        LD      HL,(L1C06+2)    ; reference not aligned to instruction
L0435:  LD      (L1C20+2),HL    ; reference not aligned to instruction
        DJNZ    L0452
L043A:  INC     D
        LD      (DE),A
L043C:  LD      (DE),A
        INC     (HL)
        LD      H,B
        NOP
        LD      A,A
L0441:  LD      (L0814),HL
        INC     D
        LD      (L007F),HL
        NOP
        NOP
L044A:  NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        ADD     A,B
        RET     NZ
L0452:  RET     PO
        RET     NC
        AND     B
        JR      NZ,L0467
        DJNZ    L045F+2         ; reference not aligned to instruction
        EX      AF,AF'
        INC     B
        DEC     B
        DEC     BC
        RLCA
        INC     BC
L045F:  LD      BC,7C7Ch
        INC     B
        INC     B
        DEC     D
        LD      C,04h
L0467:  NOP
        NOP
        INC     BC
        INC     BC
        INC     DE
        INC     HL
        LD      A,A
        JR      NZ,L0480
        LD      A,(HL)
        RST     0x38
        IN      A,(0FFh)
        IN      A,(0E7h)
        LD      A,(HL)
        INC     A
        LD      A,(HL)
        ADD     A,C
        AND     L
        ADD     A,C
        AND     L
        SBC     A,C
        LD      B,D
        INC     A
L0480:  INC     A
        LD      A,(HL)
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        LD      A,(HL)
        INC     A
        INC     A
        LD      D,(HL)
        XOR     E
        PUSH    DE
        XOR     E
        PUSH    DE
        LD      L,D
        INC     A
        INC     A
        LD      B,D
        ADD     A,C
        ADD     A,C
        ADD     A,C
        ADD     A,C
        LD      B,D
        INC     A
        RST     0x38
        PUSH    DE
        XOR     E
        PUSH    DE
        XOR     E
        PUSH    DE
        XOR     E
        RST     0x38
        RST     0x38
        ADD     A,C
        ADD     A,C
        ADD     A,C
        ADD     A,C
        ADD     A,C
        ADD     A,C
        RST     0x38
        CALL    M,8786h
        ADD     A,C
        ADD     A,C
        ADD     A,C
        ADD     A,C
        RST     0x38
        RST     0x38
        CP      L
        RST     0x38
        CP      L
        RST     0x38
        CP      L
        RST     0x38
        CP      L
        RET     P
        ADC     A,B
        ADD     A,A
        ADD     A,C
        ADD     A,C
        ADD     A,A
        ADC     A,B
        RET     P
        NOP
        RLCA
        ADD     HL,SP
        POP     BC
        ADD     A,C
        RST     0x38
        NOP
        NOP
        JR      L052E

L04CA:  LD      (HL),D
        LD      (HL),D
        LD      (HL),D
        LD      (HL),D
        LD      H,D
        LD      B,B
        RST     0x38
        RST     0x20
        RST     0x20
        RST     0x20
        RST     0x38
        RST     0x38
        RST     0x38
        NOP
        RST     0x38
        SBC     A,C
        SBC     A,C
        RST     0x38
        JP      0FF81h

L04DF:  NOP
        CCF
        LD      A,A
        ADD     A,IYL
        ADD     A,L
        ADD     A,L
        ADD     A,(HL)
        CALL    M,5577h
        LD      E,L
        LD      B,C
        LD      E,L
        LD      D,L
        LD      (HL),A
        NOP
        INC     E
        INC     E
        EX      AF,AF'
        LD      A,5Dh           ; ']'
        LD      E,L
        INC     D
        LD      (HL),1Ch
        LD      E,H
        LD      C,B
        LD      A,A
        DEC     E
        LD      A,L
        LD      B,H
        LD      B,A
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        JR      L0521+1         ; reference not aligned to instruction

L050A:  JR      L0524

L050C:  NOP
        NOP
        JR      L0510

L0510:  LD      H,(HL)
        LD      H,(HL)
        LD      B,H
        NOP
        NOP
        NOP
        NOP
        NOP
        INC     H
        INC     H
        LD      A,(HL)
        INC     H
        LD      A,(HL)
        INC     H
        INC     H
        NOP
        EX      AF,AF'
L0521:  LD      A,48h           ; 'H'
        INC     A
L0524:  LD      (DE),A
        LD      A,H
        DJNZ    L0528
L0528:  NOP
        LD      (6854h),A
        LD      D,2Ah           ; '*'
L052E:  LD      C,H
        NOP
        JR      NC,L057A
        LD      C,B
        JR      NC,L057F
        LD      B,H
        LD      A,(L0C00)
        INC     C
        DJNZ    L053C
L053C:  NOP
        NOP
        NOP
        NOP
        INC     B
        EX      AF,AF'
        DJNZ    L0552+2         ; reference not aligned to instruction
        DJNZ    L054D+1         ; reference not aligned to instruction
        INC     B
        NOP
        JR      NZ,L055A
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
L054D:  DJNZ    L056F
        NOP
        NOP
        EX      AF,AF'
L0552:  LD      HL,(L1C1B+1)    ; reference not aligned to instruction
        LD      HL,(L0006+2)    ; reference not aligned to instruction
        NOP
        EX      AF,AF'
L055A:  EX      AF,AF'
        LD      A,08h
        EX      AF,AF'
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        INC     C
        INC     C
        DJNZ    L0569
L0569:  NOP
        NOP
        LD      A,(HL)
        NOP
        NOP
        NOP
L056F:  NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        JR      L058F

L0577:  NOP
        NOP
        LD      (BC),A
L057A:  INC     B
        EX      AF,AF'
        DJNZ    L059E
        LD      B,B
L057F:  NOP
        INC     A
        LD      B,D
        LD      B,(HL)
        LD      E,D
        LD      H,D
        LD      B,D
        INC     A
        NOP
        EX      AF,AF'
        JR      L05C3

L058B:  EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
L058F:  NOP
        INC     A
        LD      B,D
        LD      (BC),A
        INC     C
        JR      NC,L05D5+1      ; reference not aligned to instruction
        LD      A,(HL)
        NOP
        INC     A
        LD      B,D
        LD      (BC),A
        INC     E
        LD      (BC),A
        LD      B,D
L059E:  INC     A
        NOP
        INC     B
        INC     C
        INC     D
        INC     H
        LD      A,(HL)
        INC     B
        INC     B
        NOP
        LD      A,H
        LD      B,B
        LD      A,B
        INC     B
        LD      (BC),A
        LD      B,H
        JR      C,L05B0
L05B0:  INC     E
        JR      NZ,L05F3
        LD      A,H
        LD      B,D
        LD      B,D
        INC     A
        NOP
        LD      A,(HL)
        LD      (BC),A
        INC     B
        EX      AF,AF'
        DJNZ    L05CE
        DJNZ    L05C0
L05C0:  INC     A
        LD      B,D
        LD      B,D
L05C3:  INC     A
        LD      B,D
        LD      B,D
        INC     A
        NOP
        INC     A
        LD      B,D
        LD      B,D
        LD      A,02h
        INC     B
L05CE:  JR      C,L05D0
L05D0:  NOP
        NOP
        JR      L05D4

L05D4:  NOP
L05D5:  JR      L05D7

L05D7:  NOP
        NOP
        NOP
        JR      L05DC

L05DC:  NOP
        JR      L05F7

L05DF:  JR      NZ,L05ED
        JR      L0611+2         ; reference not aligned to instruction

L05E3:  LD      H,B
        JR      NC,L05FE
        INC     C
        NOP
        NOP
        NOP
        LD      A,(HL)
        NOP
        LD      A,(HL)
L05ED:  NOP
        NOP
        NOP
        JR      NC,L060A
        INC     C
L05F3:  LD      B,0Ch
        JR      L0626+1         ; reference not aligned to instruction

L05F7:  NOP
        INC     A
        LD      B,D
        LD      (BC),A
        INC     C
        DJNZ    L05FE
L05FE:  JR      L0600

L0600:  INC     E
        LD      (564Ah),HL
        LD      C,H
        JR      NZ,L0625
        NOP
        JR      L062E

L060A:  LD      B,D
        LD      A,(HL)
        LD      B,D
        LD      B,D
        LD      B,D
        NOP
        LD      A,H
L0611:  LD      (L3C20+2),HL    ; reference not aligned to instruction
        LD      (7C22h),HL
        NOP
        INC     E
        LD      (4040h),HL
        LD      B,B
        LD      (L001C),HL
        JR      C,L0645+1       ; reference not aligned to instruction
        LD      (L2222),HL
L0625:  INC     H
L0626:  JR      C,L0628
L0628:  LD      A,20h           ; ' '
        JR      NZ,L0668
        JR      NZ,L064E
L062E:  LD      A,00h
        LD      A,20h           ; ' '
        JR      NZ,L0670
        JR      NZ,L0656
        JR      NZ,L0638
L0638:  INC     E
        LD      (4E40h),HL
        LD      B,D
        LD      (L001C),HL
        LD      (L2222),HL
        LD      A,22h           ; '"'
L0645:  LD      (L0020+2),HL    ; reference not aligned to instruction
        INC     E
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
L064E:  INC     E
        NOP
        INC     B
        INC     B
        INC     B
        INC     B
        LD      B,H
        LD      B,H
L0656:  JR      C,L0658
L0658:  LD      (L2822+2),HL    ; reference not aligned to instruction
        JR      NC,L0684+1      ; reference not aligned to instruction
        INC     H
        LD      (L1FFF+1),HL    ; reference not aligned to instruction
        JR      NZ,L0681+2      ; reference not aligned to instruction
        JR      NZ,L0684+1      ; reference not aligned to instruction
        JR      NZ,L06A5
        NOP
L0668:  LD      B,D
        LD      H,(HL)
        LD      E,D
        LD      E,D
        LD      B,D
        LD      B,D
        LD      B,D
        NOP
L0670:  LD      (L3221+1),HL    ; reference not aligned to instruction
        LD      HL,(L2225+1)    ; reference not aligned to instruction
        LD      (L17FE+2),HL    ; reference not aligned to instruction
        INC     H
        LD      B,D
        LD      B,D
        LD      B,D
        INC     H
        JR      L0680

L0680:  INC     A
L0681:  LD      (L3C20+2),HL    ; reference not aligned to instruction
L0684:  JR      NZ,L06A6
        JR      NZ,L0688
L0688:  JR      L06AE

L068A:  LD      B,D
        LD      B,D
        LD      C,D
        INC     H
        LD      A,(DE)
        NOP
        INC     A
        LD      (L3C20+2),HL    ; reference not aligned to instruction
        JR      Z,L06BA
        LD      (L3C00),HL
        LD      B,D
        LD      B,B
        INC     A
        LD      (BC),A
        LD      B,D
        INC     A
        NOP
        LD      A,08h
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
L06A5:  EX      AF,AF'
L06A6:  EX      AF,AF'
        NOP
        LD      (L2222),HL
        LD      (L2222),HL
L06AE:  INC     E
        NOP
        LD      B,D
        LD      B,D
        LD      B,D
        INC     H
        INC     H
        JR      L06CF

L06B7:  NOP
        LD      B,D
        LD      B,D
L06BA:  LD      B,D
        LD      E,D
        LD      E,D
        LD      H,(HL)
        LD      B,D
        NOP
        LD      B,D
        LD      B,D
        INC     H
        JR      L06E9

L06C5:  LD      B,D
        LD      B,D
        NOP
        LD      (L2222),HL
        INC     E
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
L06CF:  NOP
        LD      A,(HL)
        LD      (BC),A
        INC     B
        EX      AF,AF'
        DJNZ    L06F6
        LD      A,(HL)
        NOP
        INC     A
        JR      NZ,L06FB
        JR      NZ,L06FD
        JR      NZ,L071A+1      ; reference not aligned to instruction
        NOP
        LD      (L1421+1),HL    ; reference not aligned to instruction
        LD      A,08h
        LD      A,08h
        NOP
        INC     A
L06E9:  INC     B
        INC     B
        INC     B
        INC     B
        INC     B
        INC     A
        NOP
        EX      AF,AF'
        INC     D
        LD      (L0000),HL
        NOP
L06F6:  NOP
        NOP
        NOP
        NOP
        NOP
L06FB:  NOP
        NOP
L06FD:  NOP
        LD      A,(HL)
        NOP
        JR      NC,L0732
        EX      AF,AF'
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        JR      C,L070E+2       ; reference not aligned to instruction
        INC     A
        LD      B,H
L070E:  LD      A,(L1FFF+1)     ; reference not aligned to instruction
        JR      NZ,L074F
        LD      (L2222),HL
        INC     A
        NOP
        NOP
        NOP
L071A:  LD      E,20h           ; ' '
        JR      NZ,L073E
        LD      E,00h
        INC     B
        INC     B
        INC     A
        LD      B,H
        LD      B,H
        LD      B,H
        INC     A
        NOP
        NOP
        NOP
        INC     A
        LD      B,D
        LD      A,(HL)
        LD      B,B
        INC     A
        NOP
        INC     C
        LD      (DE),A
L0732:  DJNZ    L07AE+2         ; reference not aligned to instruction
        DJNZ    L0746
        DJNZ    L0738
L0738:  NOP
        NOP
        INC     A
        LD      B,H
        LD      B,H
        INC     A
L073E:  INC     B
        JR      C,L0761
        JR      NZ,L076F
        LD      (L2222),A
L0746:  LD      (L17FE+2),HL    ; reference not aligned to instruction
        NOP
        JR      L0754

L074C:  EX      AF,AF'
        EX      AF,AF'
        INC     E
L074F:  NOP
        INC     C
        NOP
        INC     B
        INC     B
L0754:  INC     B
        LD      B,H
        LD      B,H
        JR      C,L0779
        JR      NZ,L077D
        INC     H
        JR      Z,L0792
        LD      (L17FE+2),HL    ; reference not aligned to instruction
L0761:  EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        INC     E
        NOP
        NOP
        NOP
        HALT
        LD      C,C
        LD      C,C
        LD      C,C
        LD      C,C
L076F:  NOP
        NOP
        NOP
        LD      E,H
        LD      H,D
        LD      B,D
        LD      B,D
        LD      B,D
        NOP
        NOP
L0779:  NOP
        INC     A
        LD      B,D
        LD      B,D
L077D:  LD      B,D
        INC     A
        NOP
        NOP
        NOP
        INC     A
        LD      (L3C20+2),HL    ; reference not aligned to instruction
        JR      NZ,L07A8
        NOP
        NOP
        INC     A
        LD      B,H
        LD      B,H
        INC     A
        INC     B
        INC     B
        NOP
        NOP
L0792:  LD      L,30h           ; '0'
        JR      NZ,L07B6
        JR      NZ,L0798
L0798:  NOP
        NOP
        LD      E,20h           ; ' '
        INC     E
        LD      (BC),A
        INC     A
        NOP
        DJNZ    L07B2
        LD      A,H
        DJNZ    L07B5
        LD      (DE),A
        INC     C
        NOP
L07A8:  NOP
        NOP
        LD      B,D
        LD      B,D
        LD      B,D
        LD      B,(HL)
L07AE:  LD      A,(L0000)
        NOP
L07B2:  LD      B,D
        LD      B,D
        LD      B,D
L07B5:  INC     H
L07B6:  JR      L07B8

L07B8:  NOP
        NOP
        LD      B,C
        LD      C,C
        LD      C,C
        LD      C,C
        LD      (HL),00h
        NOP
        NOP
        LD      (L0814),HL
        INC     D
        LD      (L0000),HL
        NOP
        LD      B,H
        LD      B,H
        LD      C,H
        INC     (HL)
        INC     B
        JR      C,L07D1
L07D1:  NOP
        LD      A,04h
        EX      AF,AF'
        DJNZ    L0815
        NOP
        LD      C,10h
        DJNZ    L083C
        DJNZ    L07EE
        LD      C,00h
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        NOP
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        NOP
        LD      (HL),B
        EX      AF,AF'
        EX      AF,AF'
        LD      B,08h
        EX      AF,AF'
L07EE:  LD      (HL),B
        NOP
        JR      NC,L083B
        LD      B,00h
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
L0804:  NOP
        NOP
        NOP
        RST     0x38
L0808:  NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        RST     0x38
        RST     0x38
        NOP
        NOP
        NOP
        NOP
L0814:  NOP
L0815:  RST     0x38
        RST     0x38
        RST     0x38
        NOP
        NOP
        NOP
        NOP
L081C:  RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        NOP
        NOP
        NOP
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        NOP
        NOP
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        NOP
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
L083B:  RST     0x38
L083C:  RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        ADD     A,B
        ADD     A,B
        ADD     A,B
        ADD     A,B
        ADD     A,B
        ADD     A,B
        ADD     A,B
        ADD     A,B
        RET     NZ
        RET     NZ
        RET     NZ
        RET     NZ
        RET     NZ
        RET     NZ
        RET     NZ
        RET     NZ
        RET     PO
        RET     PO
        RET     PO
        RET     PO
        RET     PO
        RET     PO
        RET     PO
        RET     PO
        RET     P
        RET     P
        RET     P
        RET     P
        RET     P
        RET     P
        RET     P
        RET     P
        RET     M
        RET     M
        RET     M
        RET     M
        RET     M
        RET     M
        RET     M
        RET     M
        CALL    M,0FCFCh
        CALL    M,0FCFCh
        CALL    M,0FEFCh
        CP      0FEh
        CP      0FEh
        CP      0FEh
        CP      08h
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        RST     0x38
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        RST     0x38
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        RST     0x38
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        RET     M
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        RRCA
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        RST     0x38
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        RST     0x38
        NOP
        NOP
        NOP
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        LD      BC,0101h
        LD      BC,0101h
        LD      BC,0001h
        NOP
        NOP
        NOP
        RRCA
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        NOP
        NOP
        NOP
        NOP
        RET     M
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        RRCA
        NOP
        NOP
        NOP
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        RET     M
L08DD:  NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        INC     BC
        INC     B
        EX      AF,AF'
        EX      AF,AF'
        NOP
        NOP
        NOP
        NOP
        RET     PO
        DJNZ    L08F7
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        INC     B
        INC     BC
        NOP
        NOP
L08F7:  NOP
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        DJNZ    L08DD
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        JR      L0931+1         ; reference not aligned to instruction

L090E:  JR      L0910

L0910:  LD      E,10h
        DJNZ    L0924
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        LD      A,B
        NOP
        NOP
        NOP
        NOP
        NOP
L0924:  NOP
        DJNZ    L092F
        NOP
        NOP
        NOP
        NOP
        JR      L0944+1         ; reference not aligned to instruction

L092D:  NOP
        NOP
L092F:  NOP
        NOP
L0931:  LD      A,02h
        LD      A,02h
        INC     B
        JR      L0938

L0938:  NOP
        NOP
        LD      A,H
        INC     B
        JR      L094E

L093E:  JR      NZ,L0940
L0940:  NOP
        NOP
        INC     B
        EX      AF,AF'
L0944:  JR      L096E

L0946:  EX      AF,AF'
        NOP
        NOP
        NOP
        DJNZ    L09C8
        LD      B,H
        EX      AF,AF'
L094E:  JR      NC,L0950
L0950:  NOP
        NOP
        NOP
        LD      A,H
        DJNZ    L0965+1         ; reference not aligned to instruction
        LD      A,H
        NOP
        NOP
        NOP
        EX      AF,AF'
        LD      A,H
        JR      L0986

L095E:  LD      C,B
        NOP
        NOP
        NOP
        JR      NZ,L09E0
        INC     H
L0965:  JR      Z,L0987
        NOP
        NOP
        NOP
        NOP
        JR      C,L0975
        EX      AF,AF'
L096E:  LD      A,(HL)
        NOP
        NOP
        NOP
        INC     A
        INC     B
        INC     A
L0975:  INC     B
        INC     A
        NOP
        NOP
        NOP
        NOP
        LD      D,H
        LD      D,H
        INC     B
        JR      L0980

L0980:  NOP
        NOP
        NOP
        LD      A,(HL)
        NOP
        NOP
L0986:  NOP
L0987:  NOP
        NOP
        CP      02h
        INC     D
        JR      L099E

L098E:  JR      NZ,L0990
L0990:  NOP
        INC     B
        EX      AF,AF'
        DJNZ    L09BD
        LD      C,B
        EX      AF,AF'
        NOP
        DJNZ    L0A18
        LD      B,D
        LD      B,D
        LD      (BC),A
        INC     B
L099E:  JR      L09A0

L09A0:  NOP
        LD      A,H
        DJNZ    L09B4
        DJNZ    L09B5+1         ; reference not aligned to instruction
        LD      A,H
        NOP
        EX      AF,AF'
        LD      A,(HL)
        EX      AF,AF'
        JR      L09D5

L09AD:  LD      C,B
        EX      AF,AF'
        NOP
        DJNZ    L0A30
        LD      (DE),A
        LD      (DE),A
L09B4:  LD      (DE),A
L09B5:  LD      (L0044),HL
        DJNZ    L0A38
        EX      AF,AF'
        LD      A,(HL)
        EX      AF,AF'
L09BD:  EX      AF,AF'
        EX      AF,AF'
        NOP
        DJNZ    L09E0
        LD      (L0441+1),HL    ; reference not aligned to instruction
        EX      AF,AF'
        DJNZ    L09C8
L09C8:  JR      NZ,L09EA
        LD      A,48h           ; 'H'
        EX      AF,AF'
        DJNZ    L09EF
        NOP
        NOP
        LD      A,H
        INC     B
        INC     B
        INC     B
L09D5:  INC     B
        LD      A,H
        NOP
        INC     H
        LD      A,(HL)
        INC     H
        INC     H
        INC     B
        EX      AF,AF'
        DJNZ    L09E0
L09E0:  NOP
        LD      (HL),B
        NOP
        LD      (HL),D
        LD      (BC),A
        INC     B
        LD      A,B
        NOP
        NOP
        LD      A,(HL)
L09EA:  INC     B
        EX      AF,AF'
        JR      L0A12

L09EE:  LD      B,D
L09EF:  NOP
        JR      NZ,L0A70
        LD      (L2024),HL
        JR      NZ,L0A15
        NOP
        NOP
        LD      B,D
        LD      B,D
        LD      (L0804),HL
        DJNZ    L0A00
L0A00:  DJNZ    L0A20
        LD      (L044A),HL
        EX      AF,AF'
        DJNZ    L0A08
L0A08:  INC     B
        JR      C,L0A13
        LD      A,(HL)
        EX      AF,AF'
        DJNZ    L0A2F
        NOP
        NOP
        LD      D,D
L0A12:  LD      D,D
L0A13:  LD      D,D
        LD      (BC),A
L0A15:  INC     B
        JR      L0A18

L0A18:  NOP
        INC     A
        NOP
        LD      A,(HL)
        EX      AF,AF'
        EX      AF,AF'
        JR      NC,L0A20
L0A20:  NOP
        DJNZ    L0A33
        JR      L0A3B

L0A25:  DJNZ    L0A37
        NOP
        EX      AF,AF'
        EX      AF,AF'
        LD      A,(HL)
        EX      AF,AF'
        EX      AF,AF'
        DJNZ    L0A4F
L0A2F:  NOP
L0A30:  NOP
        INC     A
        NOP
L0A33:  NOP
        NOP
        NOP
        LD      A,(HL)
L0A37:  NOP
L0A38:  NOP
        LD      A,H
        INC     B
L0A3B:  JR      Z,L0A4D
        JR      Z,L0A83
        NOP
        EX      AF,AF'
        LD      A,04h
        JR      L0A73

L0A45:  LD      C,B
        EX      AF,AF'
        NOP
        NOP
        INC     B
        INC     B
        INC     B
        EX      AF,AF'
L0A4D:  DJNZ    L0AAF
L0A4F:  NOP
        NOP
        DJNZ    L0A5B
        LD      B,H
        LD      B,H
        LD      B,D
        ADD     A,D
        NOP
        NOP
        LD      B,B
        LD      A,H
L0A5B:  LD      B,B
        LD      B,B
        LD      B,B
        INC     A
        NOP
        NOP
        LD      A,(HL)
        LD      (BC),A
        LD      (BC),A
        INC     B
        EX      AF,AF'
        JR      NC,L0A68
L0A68:  NOP
        JR      NZ,L0ABB
        ADC     A,B
        INC     B
        LD      (BC),A
        NOP
        NOP
L0A70:  EX      AF,AF'
        LD      A,08h
L0A73:  LD      HL,(492Ah)
        EX      AF,AF'
        NOP
        NOP
        LD      A,(HL)
        LD      (BC),A
        INC     B
        JR      Z,L0A8D+1       ; reference not aligned to instruction
        EX      AF,AF'
        NOP
        NOP
        INC     A
        NOP
L0A83:  INC     A
        NOP
        JR      C,L0A92+1       ; reference not aligned to instruction
        NOP
        NOP
        DJNZ    L0AAB
        LD      B,B
        LD      B,H
L0A8D:  CALL    M,L0000+2       ; reference not aligned to instruction
        NOP
        LD      (BC),A
L0A92:  LD      (L0814),HL
        INC     D
        LD      H,D
        NOP
        NOP
        LD      A,(HL)
        DJNZ    L0B1A
        DJNZ    L0AAE
        LD      E,00h
        JR      NZ,L0AC2
        LD      A,(HL)
        LD      (DE),A
        INC     D
        DJNZ    L0AB6+1         ; reference not aligned to instruction
        NOP
        NOP
        INC     A
        INC     B
L0AAB:  INC     B
        INC     B
        INC     B
L0AAE:  LD      A,(HL)
L0AAF:  NOP
        LD      A,02h
        LD      (BC),A
        LD      A,02h
        LD      (BC),A
L0AB6:  LD      A,00h
        NOP
        INC     A
        NOP
L0ABB:  LD      A,(HL)
        LD      (BC),A
        INC     B
        JR      L0AC0

L0AC0:  NOP
        LD      B,H
L0AC2:  LD      B,H
        LD      B,H
        INC     B
        EX      AF,AF'
        JR      NC,L0AC8
L0AC8:  NOP
        JR      Z,L0AF2+1       ; reference not aligned to instruction
        LD      HL,(L2C2A)
        LD      C,B
        NOP
        NOP
        JR      NZ,L0AF2+1      ; reference not aligned to instruction
        LD      (L2822+2),HL    ; reference not aligned to instruction
        JR      NC,L0AD8
L0AD8:  NOP
        LD      A,H
        LD      B,H
        LD      B,H
        LD      B,H
        LD      B,H
        LD      A,H
        NOP
        NOP
        LD      A,(HL)
        LD      B,D
        LD      B,D
        LD      (BC),A
        INC     B
        JR      L0AE8

L0AE8:  NOP
        LD      (HL),B
        LD      (BC),A
        LD      (BC),A
        INC     B
        EX      AF,AF'
        LD      (HL),B
        NOP
        DJNZ    L0B3A
L0AF2:  JR      NZ,L0AF4
L0AF4:  NOP
        NOP
        NOP
        NOP
        JR      NC,L0B42
        JR      NC,L0AFC
L0AFC:  NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        RST     0x38
        NOP
        NOP
        RST     0x38
        NOP
        NOP
        EX      AF,AF'
        EX      AF,AF'
        RRCA
        EX      AF,AF'
        EX      AF,AF'
        RRCA
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        RST     0x38
        EX      AF,AF'
        EX      AF,AF'
        RST     0x38
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
L0B1A:  RET     M
        EX      AF,AF'
        EX      AF,AF'
        RET     M
        EX      AF,AF'
        EX      AF,AF'
        LD      BC,0703h
        RRCA
        RRA
        CCF
        LD      A,A
        RST     0x38
        ADD     A,B
        RET     NZ
        RET     PO
        RET     P
        RET     M
        CALL    M,0FFFEh
        RST     0x38
        LD      A,A
        CCF
        RRA
        RRCA
        RLCA
        INC     BC
        LD      BC,0FEFFh
L0B3A:  CALL    M,0F0F8h
        RET     PO
        RET     NZ
        ADD     A,B
        EX      AF,AF'
        INC     E
L0B42:  LD      A,7Fh           ; ''
        LD      A,A
        INC     E
        LD      A,00h
        LD      (HL),7Fh        ; ''
        LD      A,A
        LD      A,A
        LD      A,1Ch
        EX      AF,AF'
        NOP
        EX      AF,AF'
        INC     E
        LD      A,7Fh           ; ''
        LD      A,1Ch
        EX      AF,AF'
        NOP
        INC     E
        INC     E
        LD      A,A
        LD      A,A
        LD      L,E
        EX      AF,AF'
        LD      A,00h
        NOP
        INC     A
        LD      A,(HL)
        LD      A,(HL)
        LD      A,(HL)
        LD      A,(HL)
        INC     A
        NOP
        NOP
        INC     A
        LD      B,D
        LD      B,D
        LD      B,D
        LD      B,D
        INC     A
        NOP
        LD      BC,0402h
        EX      AF,AF'
        DJNZ    L0B96
        LD      B,B
        ADD     A,B
        ADD     A,B
        LD      B,B
        JR      NZ,L0B8C
        EX      AF,AF'
        INC     B
        LD      (BC),A
        LD      BC,4281h
        INC     H
        JR      L0B9C+1         ; reference not aligned to instruction

L0B85:  INC     H
        LD      B,D
        ADD     A,C
        LD      A,A
        LD      C,C
        LD      C,C
        LD      A,A
L0B8C:  LD      B,C
        LD      B,C
        LD      B,C
        NOP
        JR      NZ,L0BD0
        LD      B,H
        LD      A,14h
        LD      A,A
L0B96:  INC     B
        NOP
        LD      A,22h           ; '"'
        LD      A,22h           ; '"'
L0B9C:  LD      A,22h           ; '"'
        LD      B,(HL)
        NOP
        LD      A,22h           ; '"'
        LD      (L223C+2),HL    ; reference not aligned to instruction
        LD      (L003E),HL
        INC     B
        XOR     0A4h
        RST     0x38
        XOR     D
        JP      PE,L0006
        INC     E
        LD      (L3E41),HL
        LD      A,(BC)
        LD      (DE),A
        LD      H,00h
        LD      A,(7F12h)
        RLA
        DEC     SP
        LD      D,D
        INC     D
        NOP
        JR      NZ,L0BF2
        JR      C,L0C00
        JR      C,L0BF5+1       ; reference not aligned to instruction
        JR      NZ,L0BC8
L0BC8:  INC     B
        INC     C
        INC     E
        INC     A
        INC     E
        INC     C
        INC     B
        NOP
L0BD0:  INC     A
        LD      B,D
        SBC     A,C
        AND     C
        AND     C
        SBC     A,C
        LD      B,D
        INC     A
        INC     A
        LD      B,D
        CP      C
        AND     L
        CP      C
        AND     L
        LD      H,D
        INC     A
        RST     0x38
        JP      8181h

L0BE4:  ADD     A,C
        ADD     A,C
        JP      L00FF

L0BE9:  EX      AF,AF'
        DJNZ    L0C2A+1         ; reference not aligned to instruction
        CALL    M,0F8FCh
        NOP
        RST     0x38
        NOP
L0BF2:  RST     0x38
        JR      L0C0D

L0BF5:  JR      L0C0F

L0BF7:  NOP
        LD      A,(HL)
        ADD     A,C
        INC     A
        LD      H,(HL)
        LD      H,(HL)
        LD      A,(HL)
        LD      A,(HL)
        NOP
L0C00:  LD      HL,(0FF1Bh)
        RRCA
        NOP
        NOP
        RET     P
        NOP
        NOP
        RST     0x38
        NOP
        NOP
        RST     0x38
L0C0D:  NOP
        NOP
L0C0F:  RST     0x38
        NOP
        NOP
        RST     0x38
        NOP
        NOP
        RRCA
        NOP
        NOP
        RET     P
        NOP
        NOP
        RST     0x38
        RET     P
        NOP
        RST     0x38
        RRCA
        NOP
        CCF
        NOP
        NOP
        RST     0x08
        NOP
        NOP
        DI
        NOP
        NOP
L0C2A:  CALL    M,L0000
        RST     0x38
        NOP
        NOP
        RST     0x38
        NOP
        NOP
        RST     0x38
        NOP
        NOP
        RST     0x38
        NOP
        NOP
        RST     0x38
        NOP
        NOP
        RST     0x38
        NOP
        NOP
        RST     0x38
        NOP
        NOP
        RST     0x38
        NOP
        NOP
        CCF
        NOP
        NOP
        RST     0x08
        NOP
        NOP
        DI
        NOP
        NOP
        CALL    M,L0000
        RST     0x38
        RET     NZ
        NOP
        RST     0x38
        JR      NC,L0C57
L0C57:  RST     0x38
        INC     C
        NOP
        RST     0x38
        INC     BC
        NOP
        LD      A,A
        NOP
        RST     0x38
        NOP
        RST     0x38
        NOP
        RST     0x38
        ADD     A,B
        RST     0x38
        NOP
        LD      A,A
        ADD     A,B
        LD      A,A
        NOP
        LD      A,A
        ADD     A,B
        RST     0x38
        ADD     A,B
        RST     0x38
        ADD     A,B
        SBC     A,A
        NOP
        LD      H,E
        NOP
        RRCA
        PUSH    DE
        INC     E
        LD      D,1Dh
        CALL    M,9410h
        LD      (DE),A
        LD      D,D
        LD      (DE),A
        XOR     12h
        CP      B
        LD      DE,11A4h
        SBC     A,C
        LD      DE,119Eh
        CCF
        LD      BC,00C7h
        RRCA
        PUSH    DE
        INC     E
        LD      D,1Dh
        LD      E,11h
        SBC     A,L
        LD      (DE),A
        LD      E,D
        LD      (DE),A
        XOR     12h
        ADD     A,A
        LD      DE,1174h
        SBC     A,C
        LD      DE,119Eh
        LD      A,A
        LD      (BC),A
        RST     0x00
        NOP
        INC     BC
        RET

L0CA9:  INC     E
        CALL    P,L261B+1       ; reference not aligned to instruction
        LD      DE,12BAh
        LD      L,(HL)
        LD      (DE),A
        LD      H,13h
        NOP
        LD      (DE),A
        RST     0x28
        LD      DE,11DDh
        JP      Z,7F11h
        LD      (BC),A
        ADC     A,A
        LD      BC,0CF01h
        INC     E
        DEC     B
        DEC     E
        DEC     A
        LD      DE,12BAh
        LD      A,D
        LD      (DE),A
        LD      H,A
        INC     DE
        LD      B,(HL)
        LD      (DE),A
        SCF
        LD      (DE),A
        LD      (L0E11+1),HL    ; reference not aligned to instruction
        LD      (DE),A
        LD      L,00h
        CALL    L0D7D
        LD      HL,0000h
        LD      (0FF44h),HL
        LD      (0FF46h),HL
        LD      BC,0007h
        JR      L0D54

L0CE8:  LD      A,0C3h
        LD      (0FF8Ah),A
        LD      (0FF8Bh),HL
        LD      (0FF8Dh),A
        LD      (0FF8Eh),DE
        LD      (0FF90h),A
        LD      (0FF91h),BC
        LD      L,01h
        PUSH    DE
        PUSH    BC
        LD      A,L
        AND     03h
        LD      (0FF3Fh),A
        PUSH    AF
        PUSH    HL
        CP      03h
        JR      Z,L0D0F
        XOR     A
L0D0F:  CALL    L13F7
        POP     HL
        POP     AF
        PUSH    AF
        PUSH    HL
        LD      L,A
        ADD     A,A
        ADD     A,A
        ADD     A,L
        LD      L,A
        ADD     A,A
        ADD     A,A
        ADD     A,L
        LD      HL,0C71h
        CALL    L13F1
        LD      DE,0FF69h
        LD      BC,0009h
        LDIR
        EX      DE,HL
        LD      BC,08C3h
        CALL    L13E4
        POP     HL
        POP     AF
        JR      NZ,L0D3D
        LD      L,H
        CALL    L0D71
        JR      L0D51

L0D3D:  CP      02h
        JR      NZ,L0D47
        BIT     0,H
        JR      Z,L0D47
        OR      08h
L0D47:  ADD     A,A
        ADD     A,A
        LD      L,A
        IN      A,(20h)         ; ' '
        AND     0D0h
        OR      L
        OUT     (20h),A         ; ' '
L0D51:  POP     DE
        POP     BC
        RET

        ; --- START PROC L0D54 ---
L0D54:  PUSH    HL
        PUSH    BC
        LD      A,C
        AND     0Fh
        LD      (0FF42h),A
        LD      A,B
        LD      HL,0D6Ch
        LD      BC,0005h
        CPIR
        LD      A,C
        LD      (0FF43h),A
        POP     BC
        POP     HL
        RET

L0D6C:  LD      BC,0300h
        INC     B
        LD      (BC),A
        ; --- START PROC L0D71 ---
L0D71:  LD      A,L
        AND     03h
        LD      L,A
        IN      A,(20h)         ; ' '
        AND     0F0h
        OR      L
        OUT     (20h),A         ; ' '
        RET

        ; --- START PROC L0D7D ---
L0D7D:  LD      H,L
        CALL    L10EE
        LD      (0FF40h),HL
        RET

L0D85:  CALL    L0D54
        PUSH    HL
        PUSH    DE
        CALL    L1502
        JR      C,L0DC2
        POP     DE
        POP     HL
        PUSH    HL
        PUSH    DE
        CALL    L0FB1
        EXX
        CALL    L0E09
        CALL    L0FB1
        PUSH    HL
        PUSH    DE
        EXX
        EX      (SP),HL
        LD      B,H
        LD      C,L
        OR      A
        SBC     HL,DE
        POP     HL
        JR      NC,L0DAD
        PUSH    DE
        PUSH    BC
        POP     DE
        POP     BC
L0DAD:  CALL    L0E01
        EX      (SP),HL
        PUSH    BC
        CALL    L0E74
        POP     BC
        PUSH    HL
        LD      H,B
        LD      L,C
        OR      A
        SBC     HL,DE
        POP     HL
        EX      (SP),HL
        INC     DE
        JR      NZ,L0DAD
        POP     HL
L0DC2:  JP      L0F32

L0DC5:  CALL    L0D54
        PUSH    HL
        LD      HL,(0FF46h)
        OR      A
        SBC     HL,DE
        POP     HL
        JR      Z,L0DDC
        EX      DE,HL
        PUSH    HL
        LD      HL,(0FF44h)
        OR      A
        SBC     HL,DE
        POP     HL
        EX      DE,HL
L0DDC:  JP      Z,L0E74
        PUSH    HL
        PUSH    DE
        EXX
        LD      HL,(0FF44h)
        PUSH    HL
        LD      HL,(0FF46h)
        PUSH    HL
        EXX
        CALL    L0E01
        POP     DE
        CALL    L0DFB
        POP     HL
        CALL    L0DFB
        POP     DE
        CALL    L0DFB
        POP     HL
        ; --- START PROC L0DFB ---
L0DFB:  CALL    L0E74
        JP      L0F89

        ; --- START PROC L0E01 ---
L0E01:  LD      (0FF44h),HL
        LD      (0FF46h),DE
        RET

        ; --- START PROC L0E09 ---
L0E09:  LD      HL,(0FF44h)
        LD      DE,(0FF46h)
        RET

L0E11:  JP      L1199

L0E14:  JP      L11B7

L0E17:  JP      L11B8

L0E1A:  JP      L11B7

L0E1D:  JP      L1199

L0E20:  JP      L11A3

L0E23:  JP      L11A4

L0E26:  JP      L11A3

L0E29:  JP      L1199

L0E2C:  JP      L1186

L0E2F:  JP      L1187

L0E32:  JP      L1186

L0E35:  JP      L1199

L0E38:  JP      L1173

L0E3B:  JP      L1174

L0E3E:  JP      L1173

L0E41:  JP      L11DD

L0E44:  JP      L11FD

L0E47:  JP      L1200

L0E4A:  JP      L11FD

L0E4D:  JP      L11DD

L0E50:  JP      L11EC

L0E53:  JP      L11EF

L0E56:  JP      L11EC

L0E59:  JP      L1222

L0E5C:  JP      L1243

L0E5F:  JP      L1246

L0E62:  JP      L1243

L0E65:  JP      L1222

L0E68:  JP      L1234

L0E6B:  JP      L1237

L0E6E:  JP      L1234

L0E71:  CALL    L0D54
        ; --- START PROC L0E74 ---
L0E74:  PUSH    HL
        PUSH    DE
        CALL    L0F3C
        JP      C,L0F32
        JR      Z,L0EEC
        OR      A
        SBC     HL,DE
        JP      Z,L0F16
        LD      A,01h
        JR      NC,L0E8D
        CALL    L1E66
        LD      A,03h
L0E8D:  EX      DE,HL
        LD      HL,(0FF48h)
        LD      BC,(0FF44h)
        OR      A
        SBC     HL,BC
        PUSH    HL
        OR      A
        SBC     HL,DE
        POP     HL
        JR      C,L0EA1
        EX      DE,HL
        DEC     A
L0EA1:  PUSH    HL
        PUSH    DE
        ADD     A,A
        LD      H,A
        ADD     A,A
        ADD     A,H
        LD      H,A
        LD      A,(0FF3Fh)
        ADD     A,A
        ADD     A,A
        ADD     A,A
        LD      L,A
        ADD     A,A
        ADD     A,L
        ADD     A,H
        LD      HL,0E11h
        CALL    L13F1
        LD      DE,0FF1Bh
        LD      BC,0006h
        LDIR
        POP     DE
        LD      HL,8000h
        EX      (SP),HL
        CALL    L1393
        LD      H,B
        LD      L,C
        LD      C,D
        LD      B,E
        EX      DE,HL
        LD      HL,(0FF4Ch)
        INC     B
L0ED1:  CALL    0FF75h
        EX      (SP),HL
        ADD     HL,DE
        EX      (SP),HL
        JR      NC,L0EE0
        CALL    0FF1Eh
        DJNZ    L0ED1
        JR      L0EE5

L0EE0:  CALL    0FF1Bh
        DJNZ    L0ED1
L0EE5:  DEC     C
        JP      P,L0ED1
        POP     HL
        JR      L0F32

L0EEC:  OR      A
        SBC     HL,DE
        EX      DE,HL
        LD      HL,(0FF4Ch)
        JR      C,L0F03
        INC     DE
L0EF6:  CALL    0FF75h
        CALL    0FF7Eh
        DEC     DE
        LD      A,D
        OR      E
        JR      NZ,L0EF6
        JR      L0F32

L0F03:  EX      DE,HL
        CALL    L1E74
        EX      DE,HL
        INC     DE
L0F09:  CALL    0FF75h
        CALL    0FF81h
        DEC     DE
        LD      A,D
        OR      E
        JR      NZ,L0F09
        JR      L0F32

L0F16:  LD      HL,(0FF48h)
        LD      DE,(0FF44h)
        OR      A
        SBC     HL,DE
        LD      C,H
        LD      B,L
        INC     B
        LD      HL,(0FF4Ch)
L0F26:  CALL    0FF75h
        CALL    0FF84h
        DJNZ    L0F26
        DEC     C
        JP      P,L0F26
L0F32:  POP     DE
        LD      (0FF46h),DE
        POP     HL
        LD      (0FF44h),HL
        RET

        ; --- START PROC L0F3C ---
L0F3C:  CALL    L1431+1         ; reference not aligned to instruction
        RET     C
        LD      HL,(0FF48h)
        LD      DE,(0FF4Ah)
        LD      BC,(0FF44h)
        OR      A
        SBC     HL,BC
        PUSH    AF
        JR      NC,L0F59
        CALL    L15E8
        LD      HL,(0FF44h)
        JR      L0F5F

L0F59:  LD      DE,(0FF46h)
        LD      H,B
        LD      L,C
L0F5F:  CALL    0FF72h
        LD      (0FF4Ch),HL
        CALL    0FF7Bh
        LD      HL,(0FF46h)
        LD      DE,(0FF4Ah)
        POP     AF
        SCF
        CCF
        RET

L0F73:  PUSH    HL
        PUSH    DE
        CALL    L0D54
        CALL    L0F89
        JR      L0F32

        ; --- START PROC L0F7D ---
L0F7D:  CALL    L0FD4
        RET     C
        PUSH    HL
        PUSH    DE
        PUSH    BC
        CALL    0FF72h
        JR      L0F99

        ; --- START PROC L0F89 ---
L0F89:  CALL    L0FD4
        RET     C
        PUSH    HL
        PUSH    DE
        PUSH    BC
        CALL    L0E01
        CALL    0FF72h
        CALL    0FF7Bh
        ; --- START PROC L0F99 ---
L0F99:  CALL    0FF75h
        JP      L1074

        ; --- START PROC L0F9F ---
L0F9F:  CALL    L0FD4
        LD      A,0FFh
        RET     C
        PUSH    HL
        PUSH    DE
        PUSH    BC
        CALL    0FF72h
        CALL    0FF78h
        JP      L1074

        ; --- START PROC L0FB1 ---
L0FB1:  PUSH    HL
        LD      HL,(0FF6Bh)
        CALL    L0FC4
        POP     HL
        EX      DE,HL
        PUSH    HL
        LD      HL,(0FF69h)
        CALL    L0FC4
        POP     HL
        EX      DE,HL
        RET

        ; --- START PROC L0FC4 ---
L0FC4:  BIT     7,D
        JR      NZ,L0FD0
        PUSH    HL
        OR      A
        SBC     HL,DE
        POP     HL
        RET     NC
        EX      DE,HL
        RET

L0FD0:  LD      DE,0000h
        RET

        ; --- START PROC L0FD4 ---
L0FD4:  PUSH    HL
        LD      HL,(0FF6Bh)
        OR      A
        SBC     HL,DE
        POP     HL
        RET     C
        EX      DE,HL
        PUSH    HL
        LD      HL,(0FF69h)
        SBC     HL,DE
        POP     HL
        EX      DE,HL
        RET

        ; --- START PROC L0FE7 ---
L0FE7:  LD      BC,0080h
L0FEA:  OUT     (C),A
        DEC     B
        OUT     (C),A
        DEC     B
        OUT     (C),A
        DEC     B
        OUT     (C),A
        DJNZ    L0FEA
        INC     C
        JR      NZ,L0FEA
        RET

L0FFB:  PUSH    HL
        PUSH    DE
        PUSH    BC
        LD      A,(0FF3Fh)
        OR      A
        JR      Z,L1025
        INC     B
        DEC     B
        JR      NZ,L1011
        LD      A,C
        CALL    L10D0
        CALL    L0FE7
        JR      L1074

L1011:  CALL    L108B
        LD      BC,0080h
L1017:  IN      A,(C)
        AND     D
        XOR     L
        OR      H
        OUT     (C),A
        DJNZ    L1017
        INC     C
        JR      NZ,L1017
        JR      L1074

L1025:  INC     B
        DEC     B
        JR      NZ,L1052
        CALL    L1078
        LD      A,C
        CALL    L10D0
        LD      C,H
L1031:  LD      E,10h
L1033:  OUT     (C),A
        DEC     B
        DEC     B
        OUT     (C),A
        DEC     B
        DEC     B
        OUT     (C),A
        DEC     B
        DEC     B
        OUT     (C),A
        DJNZ    L1045
        DJNZ    L1047
L1045:  DJNZ    L1033
L1047:  INC     C
        DEC     E
        JR      NZ,L1033
        CALL    L1082
        JR      NZ,L1031
        JR      L1074

L1052:  CALL    L108B
        EXX
        CALL    L1078
        LD      C,H
L105A:  LD      E,10h
L105C:  IN      A,(C)
        EXX
        AND     D
        XOR     L
        OR      H
        EXX
        OUT     (C),A
        DJNZ    L1069
        DJNZ    L106B
L1069:  DJNZ    L105C
L106B:  INC     C
        DEC     E
        JR      NZ,L105C
        CALL    L1082
        JR      NZ,L105A
        ; --- START PROC L1074 ---
L1074:  POP     BC
        POP     DE
        POP     HL
        RET

        ; --- START PROC L1078 ---
L1078:  LD      HL,(0FF40h)
        LD      A,L
        NEG
        LD      B,A
        LD      D,04h
        RET

        ; --- START PROC L1082 ---
L1082:  DEC     D
        RET     Z
        PUSH    AF
        LD      A,C
        ADD     A,10h
        ; --- START PROC L1088 ---
L1088:  LD      C,A
        POP     AF
        RET

        ; --- START PROC L108B ---
L108B:  CALL    L0D54
        CALL    0FF7Bh
        LD      A,(0FF3Fh)
        CP      02h
        JR      NC,L10A4
        EXX
        LD      A,D
        XOR     C
        CPL
        LD      D,A
        LD      A,L
        OR      B
        LD      L,A
        LD      A,H
        OR      E
        LD      H,A
        RET

L10A4:  LD      BC,03FFh
        JR      Z,L10AC
        LD      BC,0700h
L10AC:  LD      HL,0FF51h
        LD      E,03h
L10B1:  PUSH    BC
        LD      A,(HL)
        AND     0C0h
        LD      D,A
L10B6:  RRC     D
        RRC     C
        JR      Z,L10BE
        RRC     D
L10BE:  OR      D
        DJNZ    L10B6
        LD      (HL),A
        INC     HL
        POP     BC
        DEC     E
        JR      NZ,L10B1
        DEC     HL
        LD      D,(HL)
        DEC     HL
        LD      E,(HL)
        DEC     HL
        LD      H,(HL)
        EX      DE,HL
        RET

L10CF:  NOP
        ; --- START PROC L10D0 ---
L10D0:  PUSH    HL
        LD      HL,(0FF3Fh)
        DEC     L
        DEC     L
        JR      Z,L10DE
        DEC     L
        JR      NZ,L10E4
        LD      L,A
        ADD     A,A
        OR      L
L10DE:  AND     03h
        LD      L,A
        ADD     A,A
        ADD     A,A
        OR      L
L10E4:  AND     0Fh
        LD      L,A
        ADD     A,A
        ADD     A,A
        ADD     A,A
        ADD     A,A
        OR      L
        POP     HL
        RET

        ; --- START PROC L10EE ---
L10EE:  LD      A,H
        AND     01h
        LD      L,A
        LD      A,H
        AND     02h
        ADD     A,A
        ADD     A,A
        ADD     A,A
        OR      80h
        LD      H,A
        RET

L10FC:  PUSH    HL
        LD      A,E
        RRCA
        RRCA
        RRCA
        AND     60h             ; '`'
        LD      D,A
        LD      A,E
        RLCA
        RLCA
        RLCA
        LD      H,A
        AND     0E0h
        LD      L,A
        LD      A,H
        AND     07h
        LD      H,A
        LD      B,H
        LD      C,L
        ADD     HL,HL
        ADD     HL,HL
        ADD     HL,BC
        LD      A,H
        ADD     A,D
        LD      H,A
        POP     DE
        ADD     HL,DE
        LD      (0FF4Fh),HL
        RET

L111E:  CALL    L1155
        ADD     HL,DE
        LD      (0FF4Fh),HL
        RET

        ; --- START PROC L1126 ---
L1126:  CALL    L1155
        LD      A,E
        AND     03h
        SRL     D
        RR      E
        ADD     HL,DE
        SCF
        RR      H
        RR      L
L1136:  LD      (0FF4Eh),A
        LD      (0FF4Fh),HL
        RET

L113D:  PUSH    DE
        SRL     D
        RR      E
        CALL    L1126
        BIT     0,L
        RES     0,L
        JR      Z,L114D
        ADD     A,04h
L114D:  POP     DE
        BIT     0,E
        JR      Z,L1136
        INC     L
        JR      L1136

        ; --- START PROC L1155 ---
L1155:  PUSH    HL
        LD      A,E
        RRCA
        RRCA
        RRCA
        AND     0E0h
        LD      D,A
        LD      A,E
        RLCA
        RLCA
        RLCA
        LD      H,A
        AND     0C0h
        LD      L,A
        LD      A,H
        AND     07h
        LD      H,A
        LD      B,H
        LD      C,L
        ADD     HL,HL
        ADD     HL,HL
        ADD     HL,BC
        LD      A,H
        ADD     A,D
        LD      H,A
        POP     DE
        RET

L1173:  INC     HL
L1174:  LD      A,H
        ADD     A,20h           ; ' '
        LD      H,A
        JR      NC,L1182
        LD      A,L
        ADD     A,40h           ; '@'
        LD      L,A
        LD      A,H
        ADC     A,01h
        LD      H,A
L1182:  LD      (0FF4Fh),HL
        RET

L1186:  INC     HL
L1187:  LD      A,H
        SUB     20h             ; ' '
        LD      H,A
        JR      NC,L1195
        LD      A,L
        ADD     A,0C0h
        LD      L,A
        LD      A,H
        ADC     A,0FEh
        LD      H,A
L1195:  LD      (0FF4Fh),HL
        RET

L1199:  INC     HL
        LD      (0FF4Fh),HL
        RET

L119E:  DEC     HL
        LD      (0FF4Fh),HL
        RET

L11A3:  INC     HL
L11A4:  LD      A,H
        ADD     A,20h           ; ' '
        LD      H,A
        JP      P,L11B3
        ; --- START PROC L11AB ---
L11AB:  LD      A,L
        ADD     A,0A0h
        LD      L,A
        LD      A,H
        ADC     A,80h
        LD      H,A
L11B3:  LD      (0FF4Fh),HL
        RET

L11B7:  INC     HL
L11B8:  LD      A,H
        SUB     20h             ; ' '
        LD      H,A
        JR      NC,L11C6
        ; --- START PROC L11BE ---
L11BE:  LD      A,L
        ADD     A,60h           ; '`'
        LD      L,A
        LD      A,H
        ADC     A,7Fh           ; ''
        LD      H,A
L11C6:  LD      (0FF4Fh),HL
        RET

L11CA:  LD      HL,0FF4Eh
        LD      A,(HL)
        DEC     A
        AND     03h
        LD      (HL),A
        CP      03h
        RET     NZ
        LD      HL,(0FF4Fh)
        DEC     HL
        LD      (0FF4Fh),HL
        RET

        ; --- START PROC L11DD ---
L11DD:  LD      HL,0FF4Eh
        LD      A,(HL)
        INC     A
        AND     03h
        LD      (HL),A
        RET     NZ
        INC     HL
        INC     (HL)
        RET     NZ
        INC     HL
        INC     (HL)
        RET

L11EC:  CALL    L11DD
L11EF:  LD      HL,(0FF4Fh)
L11F2:  LD      A,H
        ADD     A,10h
        LD      H,A
        CALL    C,L11AB
        LD      (0FF4Fh),HL
        RET

L11FD:  CALL    L11DD
L1200:  LD      HL,(0FF4Fh)
L1203:  LD      A,H
        SUB     10h
        LD      H,A
        CALL    P,L11BE
L120A:  LD      (0FF4Fh),HL
        RET

L120E:  LD      HL,0FF4Eh
        LD      A,(HL)
        DEC     A
        AND     07h
        LD      (HL),A
        CP      07h
        RET     NZ
        LD      HL,(0FF4Fh)
        DEC     HL
        DEC     HL
        LD      (0FF4Fh),HL
        RET

        ; --- START PROC L1222 ---
L1222:  LD      HL,0FF4Eh
        LD      A,(HL)
        INC     A
        AND     07h
        LD      (HL),A
        RET     NZ
        LD      HL,(0FF4Fh)
        INC     HL
        INC     HL
        LD      (0FF4Fh),HL
        RET

L1234:  CALL    L1222
L1237:  LD      HL,(0FF4Fh)
        BIT     0,L
        INC     HL
        JR      Z,L120A
        DEC     HL
        DEC     HL
        JR      L11F2

L1243:  CALL    L1222
L1246:  LD      HL,(0FF4Fh)
        BIT     0,L
        DEC     HL
        JR      NZ,L120A
        INC     HL
        INC     HL
        JR      L1203

L1252:  PUSH    BC
        CALL    L12DB
        JR      Z,L1266
        JR      L126A

L125A:  PUSH    BC
        LD      B,L
        LD      C,H
        SCF
        RR      C
        RR      B
        IN      A,(C)
        JR      C,L126A
L1266:  RRA
        RRA
        RRA
        RRA
L126A:  AND     0Fh
        POP     BC
        RET

L126E:  PUSH    BC
        CALL    L1285
L1272:  RLCA
        RLCA
        DJNZ    L1272
        AND     03h
        POP     BC
        RET

L127A:  PUSH    BC
        CALL    L1285
L127E:  RLCA
        DJNZ    L127E
        AND     01h
        POP     BC
        RET

        ; --- START PROC L1285 ---
L1285:  PUSH    HL
        LD      HL,(0FF4Fh)
        LD      C,H
        LD      B,L
        IN      A,(C)
        LD      HL,0FF4Eh
        LD      B,(HL)
        INC     B
        POP     HL
        RET

L1294:  PUSH    BC
        CALL    L12DB
        EXX
        JR      Z,L12AA
        JR      L12B2

L129D:  PUSH    BC
        LD      B,L
        LD      C,H
        SCF
        RR      C
        RR      B
        IN      A,(C)
        EXX
        JR      C,L12B2
L12AA:  AND     C
        XOR     B
        OR      E
        EXX
        OUT     (C),A
        POP     BC
        RET

L12B2:  AND     D
        XOR     L
        OR      H
        EXX
        OUT     (C),A
        POP     BC
        RET

L12BA:  EXX
        LD      HL,(0FF4Fh)
        LD      C,H
        LD      B,L
        IN      A,(C)
        LD      D,A
        LD      A,(0FF4Eh)
        LD      L,A
        ADD     A,A
        ADD     A,L
        LD      HL,0FF51h
        ADD     A,L
        LD      L,A
        JR      NC,L12D1
        INC     H
L12D1:  LD      A,D
        AND     (HL)
        INC     HL
        XOR     (HL)
        INC     HL
        OR      (HL)
        OUT     (C),A
        EXX
        RET

        ; --- START PROC L12DB ---
L12DB:  LD      A,(0FF41h)
        ADD     A,H
        LD      C,A
        LD      A,L
        RRCA
        ADD     A,A
        LD      B,A
        LD      A,(0FF40h)
        OR      B
        LD      B,A
        IN      A,(C)
        BIT     0,L
        RET

L12EE:  EXX
        LD      A,(0FF43h)
        ADD     A,A
        LD      L,A
        ADD     A,A
        ADD     A,L
        LD      HL,0C03h
        LD      BC,0006h
        CALL    L1357
        JR      Z,L1304
        JR      NC,L1319
        INC     A
L1304:  DEC     A
        CALL    L13F1
        LD      A,(0FF42h)
        ADD     A,A
        ADD     A,A
        ADD     A,A
        ADD     A,A
        OR      (HL)
        LD      (HL),A
        LD      A,(0FF42h)
        INC     HL
        INC     HL
        INC     HL
        OR      (HL)
        LD      (HL),A
L1319:  LD      BC,(0FF51h)
        LD      DE,(0FF53h)
        LD      HL,(0FF55h)
        EXX
        RET

L1326:  EXX
        LD      A,(0FF43h)
        ADD     A,A
        LD      L,A
        ADD     A,A
        ADD     A,L
        ADD     A,A
        LD      HL,0C21h
        LD      BC,000Ch
        CALL    L1357
        JR      Z,L133D
        JR      NC,L1355
        INC     A
L133D:  DEC     A
        CALL    L13F1
        LD      A,(0FF42h)
        AND     03h
        LD      D,A
        LD      B,04h
L1349:  RRC     D
        RRC     D
        LD      A,D
        OR      (HL)
        LD      (HL),A
        INC     HL
        INC     HL
        INC     HL
        DJNZ    L1349
L1355:  EXX
        RET

        ; --- START PROC L1357 ---
L1357:  CALL    L13F1
        LD      DE,0FF51h
        PUSH    DE
        LDIR
        POP     HL
        LD      A,(0FF43h)
        CP      03h
        RET

L1367:  EXX
        LD      A,(0FF43h)
        ADD     A,A
        ADD     A,A
        LD      L,A
        LD      A,(0FF42h)
        AND     01h
        ADD     A,A
        ADD     A,L
        LD      HL,0C5Dh
        CALL    L13F1
        LD      A,(HL)
        INC     HL
        LD      H,(HL)
        LD      L,00h
        EX      DE,HL
        LD      HL,0FF51h
        LD      B,08h
L1386:  LD      (HL),A
        INC     HL
        LD      (HL),D
        INC     HL
        LD      (HL),E
        INC     HL
        RRCA
        RRC     D
        DJNZ    L1386
        EXX
        RET

        ; --- START PROC L1393 ---
L1393:  PUSH    HL
        OR      A
        SBC     HL,DE
        POP     HL
        JR      NZ,L139E
        LD      BC,0FFFFh
        RET

L139E:  LD      BC,0001h
        ADD     HL,HL
L13A2:  SBC     HL,DE
        JR      NC,L13B0
        ADD     HL,DE
        ADD     HL,HL
        RL      C
        RL      B
        JP      NC,L13A2
        RET

L13B0:  ADD     HL,HL
        SCF
        RL      C
        RL      B
        JP      NC,L13A2
        RET

        ; --- START PROC L13BA ---
L13BA:  PUSH    DE
        LD      E,(HL)
        INC     HL
        LD      D,(HL)
        INC     HL
        LD      A,(HL)
        EX      DE,HL
        CALL    L13CD
        EX      DE,HL
        LD      (HL),A
        DEC     HL
        LD      (HL),D
        DEC     HL
        LD      (HL),E
        EX      DE,HL
        POP     DE
        RET

        ; --- START PROC L13CD ---
L13CD:  CALL    L13D7
        PUSH    DE
        LD      D,A
        OR      H
        OR      L
        LD      A,D
        POP     DE
        RET

        ; --- START PROC L13D7 ---
L13D7:  SRA     H
        RR      L
        RRA
        BIT     7,H
        RET     Z
        RET     NC
        INC     A
        RET     NZ
        INC     HL
        RET

        ; --- START PROC L13E4 ---
L13E4:  LD      (HL),C
        INC     HL
        LD      A,(DE)
        LD      (HL),A
        INC     HL
        INC     DE
        LD      A,(DE)
        LD      (HL),A
        INC     HL
        INC     DE
        DJNZ    L13E4
        RET

        ; --- START PROC L13F1 ---
L13F1:  ADD     A,L
        LD      L,A
        JR      NC,L13F6
        INC     H
        ; --- START PROC L13F6 ---
L13F6:  RET

        ; --- START PROC L13F7 ---
L13F7:  PUSH    HL
        PUSH    BC
        LD      HL,1420h
        OR      A
        JR      Z,L1402
L13FF:  LD      HL,1429h
L1402:  LD      B,04h
L1404:  LD      A,B
        CP      0Ah
        JR      Z,L1412
        OUT     (18h),A
        LD      A,(HL)
        OUT     (19h),A
        INC     HL
        INC     B
        JR      L1404

L1412:  LD      A,(HL)
        INC     HL
        OUT     (1Ch),A
        IN      A,(20h)         ; ' '
        AND     (HL)
        INC     HL
        OR      (HL)
        OUT     (20h),A         ; ' '
        POP     BC
        POP     HL
        RET

L1420:  RRA
L1421:  LD      B,19h
        INC     E
        AND     B
        RLCA
        LD      (BC),A
        RST     0x28
        NOP
        RRA
        LD      B,19h
        INC     E
        AND     E
        LD      C,02h
        RST     0x38
L1431:  DJNZ    L13FF+1         ; reference not aligned to instruction
        LD      (BC),A
        DEC     D
        RET     C
        OR      A
        RET     Z
        DEC     A
        JR      NZ,L144F
        INC     L
        DEC     L
        CALL    Z,L15E0
        CALL    L1560
        CALL    L14C6
        LD      (0FF48h),DE
        LD      (0FF4Ah),BC
        RET

L144F:  CALL    L1560
L1452:  CALL    L158A
L1455:  SCF
        RET     Z
        CALL    L14F1
        CALL    L153D
        OR      A
        JR      Z,L146F
        LD      H,A
        LD      A,(0FF2Dh)
        LD      L,A
        CALL    L152B
        JR      C,L1452
        CALL    L159A
        JR      L1455

L146F:  LD      HL,(0FF21h)
        PUSH    HL
        LD      HL,(0FF23h)
        PUSH    HL
        LD      HL,(0FF25h)
        PUSH    HL
        CALL    L148D
        CALL    L15E0
        POP     HL
        LD      (0FF25h),HL
        POP     HL
        LD      (0FF23h),HL
        POP     HL
        LD      (0FF21h),HL
        ; --- START PROC L148D ---
L148D:  CALL    L149D
        CALL    L14C6
        LD      (0FF44h),DE
        LD      (0FF46h),BC
        OR      A
        RET

        ; --- START PROC L149D ---
L149D:  LD      HL,0FF23h
        XOR     A
        SUB     (HL)
        LD      HL,(0FF44h)
        LD      DE,(0FF21h)
        SBC     HL,DE
        LD      (0FF27h),HL
        LD      (0FF29h),A
        LD      HL,0FF26h
        XOR     A
        SUB     (HL)
        LD      HL,(0FF46h)
        LD      DE,(0FF24h)
        SBC     HL,DE
        LD      (0FF2Ah),HL
        LD      (0FF2Ch),A
        RET

        ; --- START PROC L14C6 ---
L14C6:  CALL    L158A
        JR      Z,L14D9
L14CB:  CALL    L14F1
        CALL    L153D
        OR      A
        JR      Z,L14C6
        CALL    L159A
        JR      NZ,L14CB
L14D9:  CALL    L14F1
        BIT     7,H
        JR      Z,L14E1
        INC     DE
L14E1:  BIT     7,L
        JR      Z,L14E6
        INC     BC
L14E6:  EX      DE,HL
        LD      D,B
        LD      E,C
        CALL    L0FB1
        EX      DE,HL
        LD      B,H
        LD      C,L
        OR      A
        RET

        ; --- START PROC L14F1 ---
L14F1:  LD      DE,(0FF21h)
        LD      BC,(0FF24h)
        LD      A,(0FF23h)
        LD      H,A
        LD      A,(0FF26h)
        LD      L,A
        RET

        ; --- START PROC L1502 ---
L1502:  LD      (0FF48h),HL
        LD      (0FF4Ah),DE
        LD      HL,0000h
        LD      DE,(0FF44h)
        LD      BC,(0FF46h)
        CALL    L153D
        LD      (0FF2Dh),A
        PUSH    AF
        LD      HL,0000h
        LD      DE,(0FF48h)
        LD      BC,(0FF4Ah)
        CALL    L153D
        POP     HL
        LD      L,A
        ; --- START PROC L152B ---
L152B:  LD      A,L
        OR      H
        RET     Z
        LD      A,L
        AND     H
        ADD     A,0FFh
        RET     C
        LD      A,01h
        INC     H
        DEC     H
        RET     Z
        INC     L
        DEC     L
        RET     Z
        INC     A
        RET

        ; --- START PROC L153D ---
L153D:  PUSH    HL
        PUSH    BC
        XOR     A
        LD      C,H
        LD      HL,(0FF69h)
        CALL    L154F
        ADD     A,A
        ADD     A,A
        POP     DE
        POP     HL
        LD      C,L
        LD      HL,(0FF6Bh)
        ; --- START PROC L154F ---
L154F:  BIT     7,D
        JR      NZ,L155E
        SBC     HL,DE
        JR      NZ,L155C
        LD      B,A
        LD      A,C
        ADD     A,0FFh
        LD      A,B
L155C:  RET     NC
        INC     A
L155E:  INC     A
        RET

        ; --- START PROC L1560 ---
L1560:  LD      HL,0FF21h
        LD      B,0Ch
        XOR     A
L1566:  LD      (HL),A
        INC     HL
        DJNZ    L1566
        LD      HL,(0FF44h)
        LD      (0FF21h),HL
        EX      DE,HL
        LD      HL,(0FF48h)
        SBC     HL,DE
        LD      (0FF27h),HL
        LD      HL,(0FF46h)
        LD      (0FF24h),HL
        EX      DE,HL
        LD      HL,(0FF4Ah)
        OR      A
        SBC     HL,DE
        LD      (0FF2Ah),HL
        RET

        ; --- START PROC L158A ---
L158A:  CALL    L15B5
        PUSH    AF
        ADD     A,C
        ADC     HL,DE
        CALL    L15C4
        PUSH    AF
        ADD     A,C
        ADC     HL,DE
        JR      L15A8

        ; --- START PROC L159A ---
L159A:  CALL    L15B5
        PUSH    AF
        CALL    L15D9
        CALL    L15C4
        PUSH    AF
        CALL    L15D9
        ; --- START PROC L15A8 ---
L15A8:  LD      (0FF24h),HL
        LD      (0FF26h),A
        POP     AF
        JR      NZ,L15B3
        POP     AF
        RET

L15B3:  POP     BC
        RET

        ; --- START PROC L15B5 ---
L15B5:  LD      HL,0FF27h
        CALL    L13BA
        LD      DE,(0FF21h)
        LD      BC,(0FF23h)
        RET

        ; --- START PROC L15C4 ---
L15C4:  LD      (0FF21h),HL
        LD      (0FF23h),A
        LD      HL,0FF2Ah
        CALL    L13BA
        LD      DE,(0FF24h)
        LD      BC,(0FF26h)
        RET

        ; --- START PROC L15D9 ---
L15D9:  LD      B,A
        LD      A,C
        SUB     B
        EX      DE,HL
        SBC     HL,DE
        RET

        ; --- START PROC L15E0 ---
L15E0:  LD      BC,(0FF44h)
        LD      DE,(0FF4Ah)
        ; --- START PROC L15E8 ---
L15E8:  LD      HL,(0FF48h)
        LD      (0FF44h),HL
        LD      (0FF48h),BC
        LD      HL,(0FF46h)
        LD      (0FF46h),DE
        LD      (0FF4Ah),HL
        RET

L15FD:  LD      (0FF93h),SP
        LD      (0FF26h),IY
        PUSH    HL
        LD      HL,170Eh
        INC     B
        JR      NZ,L1616
        POP     HL
        PUSH    HL
        CALL    L0F9F
        LD      B,A
        LD      HL,1707h
        INC     B
L1616:  DEC     B
        LD      (0FF24h),HL
        LD      A,0C3h
        LD      (0FF23h),A
        LD      HL,0FF6Dh
        LD      A,B
        AND     (HL)
        LD      B,A
        LD      A,C
        AND     (HL)
        LD      C,A
        PUSH    BC
        LD      B,00h
        CALL    L0D54
        POP     BC
        CALL    0FF7Bh
        LD      HL,0FFFFh
        CALL    L174B
        POP     HL
L1639:  PUSH    HL
        PUSH    DE
        XOR     A
        CALL    L1653
        POP     DE
        POP     HL
        INC     HL
        LD      A,01h
        CALL    NC,L1653
        CALL    0FF8Ah
        CALL    0FF8Dh
        LD      A,H
        AND     L
        INC     A
        JR      NZ,L1639
        RET

        ; --- START PROC L1653 ---
L1653:  LD      (0FF1Bh),A
        LD      (0FF21h),HL
        PUSH    DE
        PUSH    BC
        CALL    0FF72h
        POP     BC
        POP     DE
L1660:  CALL    L16F5
        RET     C
        CALL    L1716
        LD      (0FF1Ch),A
        CALL    L1723
        LD      (0FF1Dh),A
L1670:  LD      HL,(0FF4Fh)
        CALL    0FF75h
        CALL    L16A5
        CALL    L1716
        DEC     DE
        LD      HL,0FF1Ch
        CALL    L16C5
        INC     DE
        CALL    L1723
        INC     DE
        LD      HL,0FF1Dh
        CALL    L16C5
        DEC     DE
        CALL    L16F5
        JR      NC,L1670
        DEC     DE
        LD      A,(0FF1Ch)
        OR      A
        CALL    Z,L16CA
        INC     DE
        INC     DE
        LD      A,(0FF1Dh)
        OR      A
        RET     NZ
        JR      L16CA

        ; --- START PROC L16A5 ---
L16A5:  LD      A,(0FF1Bh)
        OR      A
        JR      Z,L16B7
        LD      HL,(0FF4Fh)
        CALL    0FF84h
        LD      HL,(0FF21h)
        INC     HL
        JR      L16C1

L16B7:  LD      HL,(0FF4Fh)
        CALL    0FF87h
        LD      HL,(0FF21h)
        DEC     HL
L16C1:  LD      (0FF21h),HL
        RET

        ; --- START PROC L16C5 ---
L16C5:  CP      (HL)
        RET     Z
        LD      (HL),A
        OR      A
        RET     Z
        ; --- START PROC L16CA ---
L16CA:  LD      HL,(0FF21h)
        LD      A,(0FF1Bh)
        OR      A
        INC     HL
        JR      Z,L16D6
        DEC     HL
        DEC     HL
L16D6:  PUSH    HL
        PUSH    DE
        CALL    L173E
L16DB:  CALL    0FF8Dh
        LD      A,L
        AND     H
        INC     A
        JR      Z,L16EB
        CALL    L0F9F
        CALL    0FF23h
        JR      C,L16DB
L16EB:  CALL    L1762
        CALL    L1731
        POP     DE
        POP     HL
        JR      L174B

        ; --- START PROC L16F5 ---
L16F5:  LD      HL,(0FF21h)
        CALL    L0FD4
        RET     C
        PUSH    HL
        LD      HL,(0FF4Fh)
        CALL    0FF78h
        POP     HL
        JP      0FF23h

L1707:  CP      C
        SCF
        RET     Z
        CP      B
        RET     Z
        SCF
        RET

L170E:  CP      B
        SCF
        RET     Z
        CP      C
        SCF
        RET     Z
        OR      A
        RET

        ; --- START PROC L1716 ---
L1716:  DEC     DE
        CALL    L173E
        CALL    0FF7Eh
        CALL    L16F5
        INC     DE
        JR      L172E

        ; --- START PROC L1723 ---
L1723:  INC     DE
        CALL    L173E
        CALL    0FF81h
        CALL    L16F5
        DEC     DE
        ; --- START PROC L172E ---
L172E:  SBC     A,A
        NEG
        ; --- START PROC L1731 ---
L1731:  LD      HL,(0FF1Fh)
        LD      (0FF4Fh),HL
        LD      HL,(0FF1Eh)
        LD      (0FF4Eh),HL
        RET

        ; --- START PROC L173E ---
L173E:  LD      A,(0FF4Eh)
        LD      (0FF1Eh),A
        LD      HL,(0FF4Fh)
        LD      (0FF1Fh),HL
        RET

        ; --- START PROC L174B ---
L174B:  PUSH    DE
        PUSH    IX
        EX      (SP),HL
        LD      DE,(0FF26h)
        OR      A
        SBC     HL,DE
        JR      C,L175D
        LD      DE,0004h
        SBC     HL,DE
L175D:  JP      C,L198B
        POP     HL
        POP     DE
        ; --- START PROC L1762 ---
L1762:  DEC     IX
        LD      (IX+00h),H
        DEC     IX
        LD      (IX+00h),L
        DEC     IX
        LD      (IX+00h),D
        DEC     IX
        LD      (IX+00h),E
        RET

L1777:  LD      (0FF93h),SP
        LD      (0FF1Bh),HL
        LD      (0FF1Dh),DE
        PUSH    HL
        PUSH    DE
        CALL    L0D54
        EXX
        CALL    0FF7Bh
        LD      A,L
        OR      H
        JR      NZ,L17A7
        PUSH    DE
        EXX
        POP     BC
        POP     DE
        POP     HL
        PUSH    DE
        EX      DE,HL
        ADC     HL,BC
        EX      DE,HL
        JP      PE,L198D+1      ; reference not aligned to instruction
        CALL    L0E01
        POP     DE
        EX      DE,HL
        OR      A
        SBC     HL,BC
        EX      DE,HL
        JR      L17BD

L17A7:  LD      A,E
        OR      D
        JR      NZ,L17CE
        PUSH    HL
        EXX
        POP     BC
        POP     DE
        POP     HL
        PUSH    HL
        ADC     HL,BC
        JP      PE,L198D+1      ; reference not aligned to instruction
        CALL    L0E01
        POP     HL
        OR      A
        SBC     HL,BC
L17BD:  JP      PE,L198D+1      ; reference not aligned to instruction
        CALL    L0E74
        LD      HL,(0FF1Bh)
        LD      DE,(0FF1Dh)
        OR      A
        JP      L0E01

L17CE:  PUSH    HL
        PUSH    DE
        LD      BC,0FF1Fh
        CALL    L1A22
        LD      (0FF25h),A
        LD      (0FF26h),HL
        EX      DE,HL
        LD      BC,0FF22h
        CALL    L1A22
        LD      HL,0FF1Fh
        LD      DE,0FF22h
        PUSH    HL
        PUSH    DE
        CALL    L1ADE
        LD      A,B
        LD      (0FF34h),A
        LD      (0FF35h),HL
        POP     HL
        POP     DE
        CALL    L1ADE
        LD      A,B
        LD      (0FF31h),A
L17FE:  LD      (0FF32h),HL
        LD      HL,0000h
        LD      (0FF28h),HL
        LD      (0FF29h),HL
        POP     DE
        POP     HL
        OR      A
        SBC     HL,DE
        JR      NC,L1835
        LD      HL,0FF34h
        LD      DE,0FF22h
        CALL    L1ADE
        LD      A,B
        LD      (0FF2Bh),A
        LD      (0FF2Ch),HL
        LD      HL,1A1Fh
        LD      DE,0FF1Fh
        LD      A,(DE)
        NOP
        CALL    L1ADE
        LD      A,B
        LD      (0FF2Eh),A
        LD      (0FF2Fh),HL
        JR      L1855

L1835:  LD      HL,0FF31h
        LD      DE,0FF1Fh
        CALL    L1ADE
        LD      A,B
        LD      (0FF2Eh),A
        LD      (0FF2Fh),HL
        LD      HL,1A1Fh
        LD      DE,0FF22h
        CALL    L1ADE
        LD      A,B
        LD      (0FF2Bh),A
        LD      (0FF2Ch),HL
L1855:  LD      HL,0FF37h
        LD      B,08h
        LD      A,80h
L185C:  LD      (HL),A
        INC     A
        INC     HL
        DJNZ    L185C
L1861:  CALL    0FF8Ah
        CALL    L186D
        JR      NC,L1861
        OR      A
        JP      L0F32

        ; --- START PROC L186D ---
L186D:  CALL    L1913
        RET     C
        CALL    L1973
        LD      BC,(0FF37h)
        PUSH    HL
        OR      A
        SBC     HL,BC
        POP     HL
        JR      NZ,L188A
        LD      BC,(0FF39h)
        EX      DE,HL
        PUSH    HL
        OR      A
        SBC     HL,BC
        POP     HL
        EX      DE,HL
L188A:  LD      (0FF37h),HL
        LD      (0FF39h),DE
        CALL    NZ,L192E
        CALL    L1913
        RET     C
        LD      HL,0FF25h
        LD      DE,0FF31h
        CALL    L1A7F
        CALL    L1A50
        PUSH    HL
        LD      HL,0FF28h
        LD      DE,0FF34h
        CALL    L1A7F
        CALL    L1A50
        POP     DE
        LD      BC,(0FF3Bh)
        PUSH    HL
        OR      A
        SBC     HL,BC
        POP     HL
        JR      NZ,L18C8
        LD      BC,(0FF3Dh)
        EX      DE,HL
        PUSH    HL
        OR      A
        SBC     HL,BC
        POP     HL
        EX      DE,HL
L18C8:  LD      (0FF3Bh),HL
        LD      (0FF3Dh),DE
        CALL    NZ,L192E
        LD      HL,0FF28h
        LD      DE,0FF2Bh
        CALL    L1A7F
        LD      A,(0FF25h)
        LD      C,A
        LD      DE,(0FF26h)
        PUSH    DE
        PUSH    AF
        CALL    L1B3E
        POP     AF
        EX      (SP),HL
        PUSH    BC
        LD      B,A
        LD      A,(0FF2Eh)
        LD      C,A
        LD      DE,(0FF2Fh)
        CALL    L1A82
        LD      A,(0FF28h)
        LD      C,A
        LD      DE,(0FF29h)
        CALL    L1B37
        LD      A,B
        LD      (0FF28h),A
        LD      (0FF29h),HL
        POP     AF
        LD      (0FF25h),A
        POP     HL
        LD      (0FF26h),HL
        OR      A
        RET

        ; --- START PROC L1913 ---
L1913:  LD      HL,(0FF37h)
        LD      DE,(0FF3Bh)
        CALL    L1925
        RET     NC
        LD      HL,(0FF39h)
        LD      DE,(0FF3Dh)
        ; --- START PROC L1925 ---
L1925:  ADD     HL,DE
        INC     HL
        LD      A,H
        OR      A
        RET     NZ
        LD      A,L
        CP      03h
        RET

        ; --- START PROC L192E ---
L192E:  LD      A,L
        ; --- START PROC L192F ---
L192F:  OR      H
        LD      B,00h
        JR      Z,L1935
        INC     B
L1935:  LD      A,D
        OR      E
        JR      Z,L193B
        INC     B
        INC     B
L193B:  LD      A,B
        PUSH    HL
        LD      HL,(0FF1Dh)
        ADD     HL,DE
        EX      (SP),HL
        PUSH    HL
        LD      BC,(0FF1Bh)
        ADD     HL,BC
        EX      (SP),HL
        PUSH    HL
        LD      HL,(0FF1Dh)
        OR      A
        SBC     HL,DE
        EX      DE,HL
        POP     BC
        LD      HL,(0FF1Bh)
        OR      A
        SBC     HL,BC
        PUSH    AF
        CALL    L0F7D
        POP     AF
        EX      (SP),HL
        RRCA
        PUSH    AF
        CALL    C,L0F7D
        POP     AF
        POP     BC
        POP     DE
        PUSH    AF
        OR      A
        CALL    PE,L0F7D
        LD      H,B
        LD      L,C
        POP     AF
        RRA
        RET     NC
        JP      L0F7D

        ; --- START PROC L1973 ---
L1973:  LD      HL,0FF28h
        CALL    L1982
        PUSH    HL
        LD      HL,0FF25h
        CALL    L1982
        POP     DE
        RET

        ; --- START PROC L1982 ---
L1982:  LD      B,(HL)
        INC     HL
        LD      A,(HL)
        INC     HL
        LD      H,(HL)
        LD      L,A
        JP      L1A50

        ; --- START PROC L198B ---
L198B:  LD      A,86h
L198D:  LD      HL,083Eh
        LD      SP,(0FF93h)
        SCF
        RET

L1996:  BIT     7,H
        PUSH    AF
        CALL    NZ,L19CB
        PUSH    HL
        EX      DE,HL
        CALL    L19D8
        LD      C,A
        BIT     7,H
        JR      Z,L19A7
        INC     C
L19A7:  EX      DE,HL
        POP     DE
        PUSH    DE
        LD      A,E
        CALL    L19D8
        BIT     7,L
        JR      Z,L19B6
        INC     H
        JR      NZ,L19B6
        INC     A
L19B6:  LD      B,A
        LD      A,C
        ADD     A,H
        LD      C,A
        JR      NC,L19BD
        INC     B
L19BD:  POP     AF
        EX      DE,HL
        CALL    L19D8
        ADD     HL,BC
        ADC     A,00h
        LD      B,A
        POP     AF
        LD      A,L
        LD      L,H
        LD      H,B
        RET     Z
        ; --- START PROC L19CB ---
L19CB:  CPL
        LD      B,A
        LD      A,L
        CPL
        LD      L,A
        LD      A,H
        CPL
        LD      H,A
        LD      A,B
        INC     A
        RET     NZ
        INC     HL
        RET

        ; --- START PROC L19D8 ---
L19D8:  PUSH    BC
        EX      DE,HL
        LD      B,A
        XOR     A
        LD      H,A
        LD      L,A
        LD      C,A
        RL      B
        JR      NC,L19E5
        ADD     HL,DE
        ADC     A,C
L19E5:  ADD     HL,HL
        ADC     A,A
        RL      B
        JR      NC,L19ED
        ADD     HL,DE
        ADC     A,C
L19ED:  ADD     HL,HL
        ADC     A,A
        RL      B
        JR      NC,L19F5
        ADD     HL,DE
        ADC     A,C
L19F5:  ADD     HL,HL
        ADC     A,A
        RL      B
        JR      NC,L19FD
        ADD     HL,DE
        ADC     A,C
L19FD:  ADD     HL,HL
        ADC     A,A
        RL      B
        JR      NC,L1A05
        ADD     HL,DE
        ADC     A,C
L1A05:  ADD     HL,HL
        ADC     A,A
        RL      B
        JR      NC,L1A0D
        ADD     HL,DE
        ADC     A,C
L1A0D:  ADD     HL,HL
        ADC     A,A
        RL      B
        JR      NC,L1A15
        ADD     HL,DE
        ADC     A,C
L1A15:  ADD     HL,HL
        ADC     A,A
        RL      B
        POP     BC
        RET     NC
        ADD     HL,DE
        RET     NC
        INC     A
        RET

L1A1F:  LD      B,B
        NOP
        ADD     A,B
        ; --- START PROC L1A22 ---
L1A22:  PUSH    BC
        CALL    L1A31
        EX      (SP),HL
        LD      (HL),B
        INC     HL
        LD      A,B
        POP     BC
        LD      (HL),C
        INC     HL
        LD      (HL),B
        LD      H,B
        LD      L,C
        RET

        ; --- START PROC L1A31 ---
L1A31:  LD      A,H
        OR      L
        LD      B,A
        RET     Z
        LD      B,50h           ; 'P'
        BIT     7,H
        JR      Z,L1A40
        LD      B,0D0h
        CALL    L1E74
L1A40:  DEC     B
        ADD     HL,HL
        JP      NC,L1A40
        RR      H
        RR      L
        RET

L1A4A:  LD      B,(HL)
        INC     HL
        LD      A,(HL)
        INC     HL
        LD      H,(HL)
        LD      L,A
        ; --- START PROC L1A50 ---
L1A50:  BIT     7,B
        PUSH    AF
        LD      A,B
        AND     7Fh             ; ''
        CP      3Fh             ; '?'
        JR      NC,L1A5F
        POP     AF
        LD      HL,0000h
        RET

L1A5F:  CP      5Fh             ; '_'
        JR      C,L1A6A
        LD      HL,7FFFh
        POP     AF
        RET     Z
        INC     HL
        RET

L1A6A:  LD      B,A
        LD      A,50h           ; 'P'
        SUB     B
        LD      B,A
        JR      L1A75

L1A71:  SRL     H
        RR      L
L1A75:  DJNZ    L1A71
        JR      NC,L1A7A
        INC     HL
L1A7A:  POP     AF
        RET     Z
        JP      L1E74

        ; --- START PROC L1A7F ---
L1A7F:  CALL    L1B28
        ; --- START PROC L1A82 ---
L1A82:  LD      A,B
        SUB     01h
        SBC     A,A
        CPL
        AND     C
        JR      NZ,L1A8E
        LD      B,A
        LD      H,A
        LD      L,A
        RET

L1A8E:  PUSH    BC
        PUSH    HL
        LD      A,D
        PUSH    DE
        CALL    L19D8
        POP     DE
        EX      (SP),HL
        PUSH    AF
        LD      A,E
        CALL    L19D8
        LD      L,A
        LD      A,H
        LD      H,00h
        POP     DE
        POP     BC
        LD      E,B
        LD      B,C
        ADD     A,B
        ADC     HL,DE
        LD      E,A
        POP     BC
        CALL    L1BD5
        LD      D,A
        LD      A,B
        ADD     A,C
        INC     A
        LD      B,A
        LD      A,E
L1AB2:  DJNZ    L1AB8
        LD      HL,0000h
        RET

L1AB8:  ADD     A,A
        ADC     HL,HL
        JR      NC,L1AB2
        INC     B
        RR      H
        RR      L
        JR      NC,L1ACC
        INC     HL
        LD      A,H
        OR      L
        JR      NZ,L1ACC
        INC     B
        LD      H,80h
L1ACC:  LD      A,B
        SUB     40h             ; '@'
        JR      C,L1B23
        JR      Z,L1B23
        CP      80h
        LD      B,A
        LD      A,D
        JR      NC,L1B1C
        OR      A
        RET     PE
        SET     7,B
        RET

        ; --- START PROC L1ADE ---
L1ADE:  CALL    L1B28
        INC     C
        DEC     C
        JR      Z,L1B19
        INC     B
        DEC     B
        RET     Z
        CALL    L1BD5
        PUSH    AF
        PUSH    BC
        PUSH    HL
        OR      A
        SBC     HL,DE
        JR      C,L1AF5
        POP     BC
        PUSH    HL
L1AF5:  POP     HL
        SBC     A,A
        PUSH    AF
        CALL    L1BE1
        LD      H,B
        LD      L,C
        POP     DE
        POP     BC
        LD      A,B
        ADD     A,3Fh           ; '?'
        SUB     C
        JR      NC,L1B08
        POP     AF
        JR      L1B23

L1B08:  INC     D
        JR      Z,L1B11
        INC     A
        SCF
        RR      H
        RR      L
L1B11:  POP     DE
        CP      80h
        LD      B,A
        LD      A,D
        JR      NC,L1B1C
        RET

L1B19:  LD      A,B
        AND     80h
        ; --- START PROC L1B1C ---
L1B1C:  LD      HL,7FFFh
        OR      A
        RET     PE
        DEC     HL
        RET

        ; --- START PROC L1B23 ---
L1B23:  XOR     A
        LD      H,A
        LD      L,A
        LD      B,A
        RET

        ; --- START PROC L1B28 ---
L1B28:  PUSH    DE
        LD      B,(HL)
        INC     HL
        LD      E,(HL)
        INC     HL
        LD      D,(HL)
        POP     HL
        LD      C,(HL)
        INC     HL
        LD      A,(HL)
        INC     HL
        LD      H,(HL)
        LD      L,A
        EX      DE,HL
        RET

        ; --- START PROC L1B37 ---
L1B37:  LD      A,B
        OR      A
        JR      Z,L1B3E
        XOR     80h
        LD      B,A
        ; --- START PROC L1B3E ---
L1B3E:  INC     C
        DEC     C
        RET     Z
        INC     B
        DEC     B
        JR      NZ,L1B48
        EX      DE,HL
        LD      B,C
        RET

L1B48:  CALL    L1BD5
        EX      AF,AF'
        LD      A,B
        SUB     C
        JR      NC,L1B58
        LD      A,B
        LD      B,C
        LD      C,A
        CALL    L1BCB
        LD      A,B
        SUB     C
L1B58:  JR      NZ,L1B62
        PUSH    HL
        OR      A
        SBC     HL,DE
        POP     HL
        CALL    C,L1BCB
L1B62:  CP      11h
        RET     NC
        PUSH    BC
        LD      B,A
        LD      A,11h
        SUB     B
        LD      BC,0000h
        EX      DE,HL
        JR      L1B75

L1B70:  ADD     HL,HL
        RL      C
        RL      B
L1B75:  DEC     A
        JR      NZ,L1B70
        EX      DE,HL
        EX      AF,AF'
        OR      A
        JP      PO,L1B9F
        EX      AF,AF'
        XOR     A
        SLA     D
        ADC     HL,BC
        JR      NC,L1B8F
        LD      A,01h
        RR      H
        RR      L
        JR      NC,L1B8F
        INC     HL
L1B8F:  POP     BC
        ADD     A,B
        JR      NC,L1B98
        EX      AF,AF'
        AND     01h
        JR      L1B1C

L1B98:  LD      B,A
        EX      AF,AF'
        RRA
        RET     NC
        SET     7,B
        RET

L1B9F:  EX      AF,AF'
        PUSH    HL
        LD      HL,0000h
        XOR     A
        SBC     HL,DE
        EX      DE,HL
        POP     HL
        SBC     HL,BC
        POP     BC
        LD      A,H
        OR      L
        OR      D
        OR      E
        JR      NZ,L1BB4
        LD      B,A
        RET

L1BB4:  BIT     7,H
        JR      NZ,L1BC4
        DEC     B
        JP      Z,L1B23
        RR      D
        RR      E
        ADC     HL,HL
        JR      L1BB4

L1BC4:  EX      AF,AF'
        AND     02h
        RET     Z
        SET     7,B
        RET

        ; --- START PROC L1BCB ---
L1BCB:  EX      DE,HL
        EX      AF,AF'
        OR      A
        JP      PE,L1BD3
        XOR     03h
L1BD3:  EX      AF,AF'
        RET

        ; --- START PROC L1BD5 ---
L1BD5:  XOR     A
        SLA     B
        RLA
        SRL     B
        SLA     C
        RLA
        SRL     C
        RET

        ; --- START PROC L1BE1 ---
L1BE1:  LD      BC,0000h
L1BE4:  SCF
L1BE5:  RL      C
        RL      B
        RET     C
        ADD     HL,HL
        JR      C,L1BF6
        SBC     HL,DE
        JR      NC,L1BE4
        ADD     HL,DE
        OR      A
        JP      L1BE5

L1BF6:  OR      A
        SBC     HL,DE
        JP      L1BE5

L1BFC:  LD      (0FF93h),SP
        EXX
        INC     DE
        LD      B,80h
        EXX
        PUSH    HL
L1C06:  LD      HL,(0FF6Eh)
        OR      A
        JR      L1C2C

L1C0C:  LD      (0FF93h),SP
        LD      A,C
        LD      (0FF1Eh),A
        LD      C,00h
        CALL    L0D54
        LD      A,0FFh
L1C1B:  LD      (0FF42h),A
        EXX
        INC     DE
L1C20:  LD      BC,0001h
        CALL    L1D60
        EXX
        PUSH    HL
        LD      HL,(0FF70h)
        SCF
L1C2C:  LD      A,0C3h
        LD      (0FF1Bh),A
        LD      (0FF1Ch),HL
        POP     HL
        PUSH    HL
        PUSH    DE
        PUSH    AF
        LD      (0FF48h),HL
        LD      (0FF4Ah),DE
        CALL    L0FD4
        JR      C,L1C4A
        CALL    L0E09
        CALL    L0FD4
L1C4A:  JP      C,L198D+1       ; reference not aligned to instruction
        CALL    L1C98
        LD      HL,(0FF46h)
        LD      (0FF21h),HL
        EX      DE,HL
L1C57:  LD      HL,(0FF44h)
        LD      (0FF1Fh),HL
        CALL    0FF72h
L1C60:  CALL    0FF1Bh
        JR      NC,L1C68
        POP     AF
        JR      L1C94

L1C68:  LD      HL,(0FF1Fh)
        INC     HL
        LD      (0FF1Fh),HL
        EX      DE,HL
        LD      HL,(0FF48h)
        OR      A
        SBC     HL,DE
        JR      C,L1C80
        LD      HL,(0FF4Fh)
        CALL    0FF84h
        JR      L1C60

L1C80:  LD      HL,(0FF21h)
        INC     HL
        LD      (0FF21h),HL
        EX      DE,HL
        LD      HL,(0FF4Ah)
        OR      A
        SBC     HL,DE
        JR      NC,L1C57
        POP     AF
        CALL    NC,L1CBE
L1C94:  OR      A
        JP      L0F32

        ; --- START PROC L1C98 ---
L1C98:  LD      HL,(0FF44h)
        LD      DE,(0FF48h)
        CALL    L1DBC
        JR      C,L1CAB
        LD      (0FF44h),DE
        LD      (0FF48h),HL
L1CAB:  LD      HL,(0FF46h)
        LD      DE,(0FF4Ah)
        CALL    L1DBC
        RET     C
        LD      (0FF46h),DE
        LD      (0FF4Ah),HL
        RET

        ; --- START PROC L1CBE ---
L1CBE:  EXX
        LD      A,B
        CP      80h
        RET     Z
L1CC3:  RR      B
        JR      NC,L1CC3
        JR      L1CE8

L1CC9:  CALL    0FF78h
        EXX
        JR      L1CDF

L1CCF:  CALL    0FF78h
        EXX
        JR      L1CE2

L1CD5:  CALL    0FF78h
        EXX
        RRCA
        RR      B
        RRCA
        RR      B
L1CDF:  RRCA
        RR      B
L1CE2:  RRCA
        RR      B
        EXX
        RET     NC
        EXX
L1CE8:  DEC     DE
        LD      A,D
        OR      E
        SCF
        RET     Z
        CCF
        LD      (HL),B
        INC     HL
        LD      B,80h
        EXX
        RET

L1CF4:  CALL    L1D54
        RRC     C
        JR      NC,L1D00
        CALL    L1D49
        LD      C,88h
L1D00:  LD      A,B
        AND     03h
        JR      L1D2B

L1D05:  CALL    L1D54
        RRC     C
        JR      NC,L1D11
        CALL    L1D49
        LD      C,80h
L1D11:  LD      A,B
        AND     01h
        JR      L1D2D

L1D16:  CALL    L1D54
        LD      A,B
        RRC     C
        JR      NC,L1D2F
        CALL    L1D49
        RET     C
        LD      C,0AAh
        LD      A,B
        AND     0Fh
        SRL     B
        SRL     B
L1D2B:  SRL     B
L1D2D:  SRL     B
L1D2F:  CALL    L1D60
        LD      C,A
        LD      A,(0FF1Eh)
        CP      C
        RET     Z
        LD      A,C
        LD      HL,0FF42h
        CP      (HL)
        LD      (HL),A
        CALL    NZ,0FF7Bh
        LD      HL,(0FF4Fh)
        CALL    0FF75h
        OR      A
        RET

        ; --- START PROC L1D49 ---
L1D49:  DEC     DE
        LD      A,D
        OR      E
        SCF
        RET     Z
        CCF
        CALL    0FF90h
        INC     HL
        RET

        ; --- START PROC L1D54 ---
L1D54:  LD      HL,(0FF23h)
        LD      DE,(0FF25h)
        LD      BC,(0FF27h)
        RET

        ; --- START PROC L1D60 ---
L1D60:  LD      (0FF23h),HL
        LD      (0FF25h),DE
        LD      (0FF27h),BC
        RET

L1D6C:  LD      BC,0017h
        LD      HL,0BFFh
        OR      A
        JR      NZ,L1D7D
L1D75:  OTDR
        DEC     C
        BIT     4,C
        JR      NZ,L1D75
        RET

L1D7D:  LD      H,03h
        OTDR
        LD      C,14h
        OTDR
        RET

        ; --- START PROC L1D86 ---
L1D86:  LD      C,01h
        LD      A,01h
        OR      A
        SCF
        RET

        ; --- START PROC L1D8D ---
L1D8D:  LD      A,(0FFA5h)
        OR      A
        JR      Z,L1D98
        CALL    L1E74
        JR      L1D9C

L1D98:  BIT     7,H
        JR      NZ,L1D86
L1D9C:  LD      C,01h
        OR      C
        RET

        ; --- START PROC L1DA0 ---
L1DA0:  LD      C,A
        LD      A,19h
        CP      H
        RET     C
        LD      A,C
        LD      B,H
        LD      C,L
        ADD     HL,HL
        ADD     HL,HL
        ADD     HL,BC
        ADD     HL,HL
        INC     B
        RET     C
        LD      B,00h
        LD      C,A
        ADD     HL,BC
        RET     C
        LD      A,H
        SLA     A
        RET     NC
        OR      L
        RET     Z
        XOR     A
        SCF
        RET

        ; --- START PROC L1DBC ---
L1DBC:  PUSH    HL
        PUSH    DE
        CALL    L1DC4
        POP     DE
        POP     HL
        RET

        ; --- START PROC L1DC4 ---
L1DC4:  LD      A,80h
        XOR     H
        LD      H,A
        LD      A,80h
        XOR     D
        LD      D,A
        SBC     HL,DE
        RET

L1DCF:  CALL    L1DD5
        LD      A,01h
        RET

        ; --- START PROC L1DD5 ---
L1DD5:  LD      B,00h
        BIT     7,H
        JR      Z,L1DDF
        CALL    L1E74
        INC     B
L1DDF:  BIT     7,D
        JR      Z,L1DE8
        EX      DE,HL
        CALL    L1E74
        INC     B
L1DE8:  LD      A,B
        EX      AF,AF'
        LD      A,H
        LD      C,L
        LD      HL,0000h
        LD      B,08h
L1DF1:  ADD     HL,HL
        RL      C
        RLA
        JR      NC,L1DF9
        ADD     HL,DE
        RET     C
L1DF9:  ADD     HL,HL
        RL      C
        RLA
        JR      NC,L1E01
        ADD     HL,DE
        RET     C
L1E01:  DJNZ    L1DF1
        OR      C
        SCF
        RET     NZ
        EX      AF,AF'
        BIT     0,A
        JR      NZ,L1E11
        BIT     7,H
        SCF
        RET     NZ
        CCF
        RET

L1E11:  LD      A,H
        CP      80h
        CCF
        JR      NC,L1E74
        RET     NZ
        INC     L
        DEC     L
        RET     NZ
        OR      A
        RET

L1E1D:  LD      A,D
        OR      E
        SCF
        LD      A,02h
        RET     Z
        LD      B,00h
        BIT     7,D
        JR      Z,L1E2F
        EX      DE,HL
        CALL    L1E74
        EX      DE,HL
        DEC     B
L1E2F:  XOR     A
        BIT     7,H
        PUSH    AF
        JR      Z,L1E3A
        CALL    L1E74
        LD      A,0FFh
L1E3A:  XOR     B
        PUSH    AF
        CALL    L1E4D
        EX      DE,HL
        LD      H,B
        LD      L,C
        POP     AF
        CALL    NZ,L1E74
        POP     AF
        EX      DE,HL
        CALL    NZ,L1E74
        EX      DE,HL
        RET

        ; --- START PROC L1E4D ---
L1E4D:  LD      B,H
        LD      C,L
        LD      HL,0000h
        LD      A,10h
L1E54:  SCF
        RL      C
        RL      B
        ADC     HL,HL
        SBC     HL,DE
        JR      NC,L1E61
        ADD     HL,DE
        DEC     C
L1E61:  DEC     A
        JP      NZ,L1E54
        RET

        ; --- START PROC L1E66 ---
L1E66:  LD      A,H
        XOR     80h
        OR      L
        JR      NZ,L1E70
        LD      A,01h
        SCF
        RET

L1E70:  OR      A
        BIT     7,H
        RET     Z
        ; --- START PROC L1E74 ---
L1E74:  LD      A,L
        CPL
        LD      L,A
        LD      A,H
        CPL
        LD      H,A
        INC     HL
        RET

L1E7C:  LD      A,H
        XOR     80h
        OR      L
        JR      NZ,L1E74
        LD      A,01h
        SCF
        RET

L1E86:  LD      H,(HL)
        LD      L,00h
        LD      A,H
        OR      L
        RET     Z
        RLC     H
        SBC     A,A
        LD      H,A
        ADD     A,A
        INC     A
        LD      L,A
        OR      A
        RET

L1E95:  XOR     A
L1E96:  LD      C,37h           ; '7'
        EX      AF,AF'
        EX      DE,HL
        CALL    L2351
        EX      DE,HL
        LD      A,H
        OR      L
        JR      Z,L1ECC
        EX      AF,AF'
        JR      NC,L1EA8
        LD      A,H
        AND     80h
L1EA8:  ADD     A,3Fh           ; '?'
        LD      (0FF95h),A
        CALL    M,L1E74
L1EB0:  LD      A,H
        OR      L
        JR      Z,L1ECC
        LD      DE,000Ah
        CALL    L1E4D
        LD      A,L
        LD      HL,0FF95h
        INC     (HL)
        INC     HL
        RRD
        INC     HL
        RRD
        INC     HL
        RRD
        LD      H,B
        LD      L,C
        JR      L1EB0

L1ECC:  LD      HL,0FF95h
        RET

        ; --- START PROC L1ED0 ---
L1ED0:  LD      E,01h
        LD      BC,001Eh
        CALL    L1EDB
        LD      A,01h
        RET

        ; --- START PROC L1EDB ---
L1EDB:  LD      A,(HL)
        AND     80h
        LD      (0FFA5h),A
        LD      A,(HL)
        AND     7Fh             ; ''
        JR      NZ,L1EE9
        LD      H,A
        LD      L,A
        RET

L1EE9:  CP      45h             ; 'E'
        CCF
        RET     C
        INC     HL
        PUSH    HL
        EXX
        POP     HL
        LD      DE,0EAAh
        EXX
        LD      HL,0000h
        SUB     40h             ; '@'
        LD      D,A
        INC     D
        JR      NC,L1F19
        BIT     0,E
        RET     NZ
        ADC     A,00h
        RET     NZ
        LD      A,(0FFA5h)
        OR      A
        JR      Z,L1F3B
        CALL    L1F67
        SCF
        CCF
        RET     Z
        ADD     A,0FBh
        RET     NC
        DEC     HL
        BIT     1,E
        RET     NZ
        CCF
        RET

L1F19:  CALL    L1F85
        CALL    L1DA0
        JR      NC,L1F25
        RET     NZ
        BIT     2,E
        RET     Z
L1F25:  DEC     D
        JR      NZ,L1F19
        BIT     0,E
        JR      Z,L1F35
        CALL    L1F67
        RET     C
        JP      Z,L1D8D
        SCF
        RET

L1F35:  LD      A,(0FFA5h)
        OR      A
        JR      NZ,L1F4E
L1F3B:  CALL    L1F67
        CP      05h
        JR      C,L1F47
        INC     HL
        LD      A,L
        OR      H
        SCF
        RET     Z
L1F47:  OR      A
        BIT     2,E
        RET     NZ
        LD      A,H
        ADD     A,A
        RET

L1F4E:  BIT     1,E
        SCF
        RET     NZ
        CALL    L1E74
        LD      A,H
        ADD     A,A
        CCF
        RET     C
        CALL    L1F67
        SCF
        CCF
        RET     Z
        ADD     A,0FBh
        RET     NC
        DEC     HL
        LD      A,H
        ADD     A,A
        CCF
        RET

        ; --- START PROC L1F67 ---
L1F67:  CALL    L1F85
        JR      NZ,L1F77
L1F6C:  CALL    L1F85
        CCF
        RET     NC
        JR      Z,L1F6C
        CCF
        LD      A,00h
        RET

L1F77:  CP      05h
        JR      NZ,L1F83
L1F7B:  CALL    L1F85
        LD      A,05h
        RET     C
        JR      Z,L1F7B
L1F83:  OR      A
        RET

        ; --- START PROC L1F85 ---
L1F85:  EXX
        DEC     D
        SCF
        JR      Z,L1F97
        LD      A,(HL)
        RRC     E
        JR      C,L1F94
        RRCA
        RRCA
        RRCA
        RRCA
        DEC     HL
L1F94:  INC     HL
        AND     0Fh
L1F97:  EXX
        RET

        ; --- START PROC L1F99 ---
L1F99:  PUSH    HL
        CALL    L205E
        POP     HL
        RET     C
        JR      L1FA4

        ; --- START PROC L1FA1 ---
L1FA1:  LD      HL,0FF9Dh
        ; --- START PROC L1FA4 ---
L1FA4:  LD      DE,0FF95h
        JR      L1FB7

L1FA9:  PUSH    DE
        CALL    L1FA4
        POP     HL
        ; --- START PROC L1FAE ---
L1FAE:  LD      DE,0FF9Dh
        JR      L1FB7

        ; --- START PROC L1FB3 ---
L1FB3:  LD      DE,0FF95h
        EX      DE,HL
        ; --- START PROC L1FB7 ---
L1FB7:  LD      BC,0008h
        LDIR
        RET

        ; --- START PROC L1FBD ---
L1FBD:  LD      HL,0FF95h
        ; --- START PROC L1FC0 ---
L1FC0:  LD      A,(HL)
        OR      A
        RET     Z
        XOR     80h
        LD      (HL),A
        RET

        ; --- START PROC L1FC7 ---
L1FC7:  LD      HL,0FF95h
        BIT     7,(HL)
        RES     7,(HL)
        RET

L1FCF:  CALL    L1FC7
        PUSH    AF
        CALL    L1FE8
        POP     AF
        RET     Z
        JR      L1FBD

        ; --- START PROC L1FDA ---
L1FDA:  LD      A,(0FF95h)
        AND     7Fh             ; ''
        CP      4Dh             ; 'M'
        RET     NC
        LD      HL,2549h
        CALL    L2089
        ; --- START PROC L1FE8 ---
L1FE8:  LD      HL,0FF95h
        LD      A,(HL)
        AND     7Fh             ; ''
        RET     Z
        CP      4Dh             ; 'M'
        RET     NC
        CP      40h             ; '@'
        JR      NC,L2001
        LD      A,(HL)
        OR      A
        JP      P,L2354
        EX      DE,HL
        LD      HL,23F4h
L1FFF:  JR      L1FB7

L2001:  NEG
        ADD     A,4Dh           ; 'M'
        LD      B,A
        BIT     7,(HL)
        JR      NZ,L201B
        LD      HL,0FF9Ch
        XOR     A
L200E:  DEC     B
        JR      Z,L2016
        LD      (HL),A
        DEC     HL
        DJNZ    L200E
        RET

L2016:  LD      A,(HL)
        AND     0F0h
        LD      (HL),A
        RET

L201B:  LD      C,A
        LD      DE,0FF9Ch
L201F:  LD      A,(DE)
        AND     0Fh
        JR      NZ,L202F
L2024:  DEC     B
        RET     Z
        LD      A,(DE)
        AND     0F0h
        JR      NZ,L202F
        DEC     DE
        DJNZ    L201F
        RET

L202F:  LD      A,(HL)
        RES     7,A
        ADD     A,C
        LD      (HL),A
        LD      A,C
        CALL    L21A2
        SCF
        PUSH    HL
        CALL    L2334
        POP     HL
        SET     7,(HL)
        JP      L2172

        ; --- START PROC L2043 ---
L2043:  LD      HL,0FF95h
        LD      DE,0FF9Dh
        LD      BC,0008h
L204C:  LD      A,(DE)
        LDI
        DEC     HL
        LD      (HL),A
        INC     HL
        JP      PE,L204C
        OR      A
        RET

        ; --- START PROC L2057 ---
L2057:  LD      HL,0FF95h
        LD      A,(HL)
        RLC     A
        RET

        ; --- START PROC L205E ---
L205E:  EX      DE,HL
        LD      HL,0FF95h
        LD      A,(DE)
        XOR     (HL)
        LD      A,(HL)
        JP      P,L206B
        ADD     A,80h
        RET

L206B:  ADD     A,A
        JR      C,L206F
        EX      DE,HL
L206F:  LD      B,08h
L2071:  LD      A,(DE)
        CP      (HL)
        RET     NZ
        INC     HL
        INC     DE
        DJNZ    L2071
        RET

L2079:  NOP
        LD      (BC),A
        INC     BC
        INC     B
        LD      (BC),A
        NOP
        INC     B
L2080:  LD      B,0CDh
        XOR     C
        RRA
        JR      L208C

        ; --- START PROC L2086 ---
L2086:  LD      HL,0FF95h
        ; --- START PROC L2089 ---
L2089:  CALL    L1FAE
L208C:  LD      HL,2079h
        JR      L20A4

        ; --- START PROC L2091 ---
L2091:  CALL    L1FAE
        JR      L20A1

        ; --- START PROC L2096 ---
L2096:  EXX
        LD      HL,0FF95h
        CALL    L1FAE
        EXX
        CALL    L1FA4
        ; --- START PROC L20A1 ---
L20A1:  LD      HL,207Dh
        ; --- START PROC L20A4 ---
L20A4:  LD      A,(0FF95h)
        RLCA
        JR      NC,L20B1
        SRL     A
        LD      (0FF95h),A
        INC     HL
        INC     HL
L20B1:  LD      A,(0FF9Dh)
        RLCA
        JR      NC,L20BD
        SRL     A
        LD      (0FF9Dh),A
        INC     HL
L20BD:  LD      A,(HL)
        SRL     A
        PUSH    AF
        CALL    C,L2043
        LD      HL,0FF95h
        LD      A,(HL)
        OR      A
        JR      NZ,L20D3
        CALL    L1FA1
        POP     AF
        OR      A
        RET     PE
        JR      L2121

L20D3:  LD      A,(0FF9Dh)
        OR      A
        JR      NZ,L20DC
        POP     AF
        JR      L211E

L20DC:  LD      B,00h
        LD      C,A
        LD      A,(HL)
        SUB     C
        JR      Z,L20FD
        JR      NC,L20E9
        LD      (HL),C
        NEG
        DEC     B
L20E9:  CP      0Fh
        JR      NC,L210E
        LD      HL,0FF9Dh
        INC     B
        JR      NZ,L20F6
        LD      HL,0FF95h
L20F6:  OR      A
        CALL    L21A2
        CALL    L2332
L20FD:  POP     AF
        RRCA
        PUSH    AF
        JR      C,L2108
        CALL    L2124
        JP      C,L2327
L2108:  CALL    C,L2140
        POP     AF
        JR      L211F

L210E:  POP     AF
        INC     B
        JR      NZ,L211E
        CALL    L1FA1
        RRCA
        JR      NC,L211F
        LD      HL,0FF95h
        SET     7,(HL)
        RLCA
L211E:  RRCA
L211F:  RRCA
        RET     NC
        ; --- START PROC L2121 ---
L2121:  JP      L1FBD

        ; --- START PROC L2124 ---
L2124:  LD      HL,0FF9Ch
        LD      DE,0FFA4h
        OR      A
        CALL    L236C
        ; --- START PROC L212E ---
L212E:  RET     NC
        DEC     HL
        LD      A,01h
        CALL    L21A2
        CALL    L2332
        RET     C
        LD      HL,0FF95h
        INC     (HL)
        RET     P
        SCF
        RET

        ; --- START PROC L2140 ---
L2140:  LD      DE,0FF96h
        LD      HL,0FF9Eh
        LD      B,07h
L2148:  LD      A,(DE)
        CP      (HL)
        JR      NZ,L2153
        INC     HL
        INC     DE
        DJNZ    L2148
        JP      L2351

L2153:  LD      DE,0FF9Ch
        LD      HL,0FFA4h
        LD      BC,0007h
        JR      NC,L2160
        EX      DE,HL
        INC     B
L2160:  OR      A
        CALL    L239B
        DJNZ    L216F
        DEC     HL
        DEC     DE
        SET     7,(HL)
        EX      DE,HL
        INC     HL
        INC     DE
        LDIR
        ; --- START PROC L216F ---
L216F:  LD      HL,0FF95h
        ; --- START PROC L2172 ---
L2172:  LD      D,H
        LD      E,L
        LD      BC,0007h
        ADD     HL,BC
        EX      DE,HL
        LD      C,0Eh
L217B:  INC     HL
        LD      A,(HL)
        AND     0F0h
        JR      NZ,L218C
        LD      H,D
        LD      L,E
        CALL    L23D6
        DEC     C
        JR      NZ,L217B
        XOR     A
        LD      (HL),A
        RET

L218C:  DEC     HL
        LD      A,(HL)
        AND     80h
        LD      B,A
        LD      A,0Eh
        SUB     C
        LD      C,A
        LD      A,(HL)
        AND     7Fh             ; ''
        SUB     C
        JP      Z,L2354
        JP      C,L2354
        OR      B
        LD      (HL),A
        RET

        ; --- START PROC L21A2 ---
L21A2:  PUSH    HL
        EX      DE,HL
        INC     DE
        LD      B,A
L21A6:  LD      A,00h
        ADC     A,A
        LD      H,D
        LD      L,E
        RRD
        INC     HL
        RRD
        INC     HL
        RRD
        INC     HL
        RRD
        INC     HL
        RRD
        INC     HL
        RRD
        INC     HL
        RRD
        DJNZ    L21A6
        POP     HL
        RET

        ; --- START PROC L21C3 ---
L21C3:  LD      HL,0FF95h
        ; --- START PROC L21C6 ---
L21C6:  EX      DE,HL
        LD      HL,0FF95h
        ; --- START PROC L21CA ---
L21CA:  PUSH    HL
        LD      HL,0FFABh
        CALL    L2354
        CALL    L235B
        EX      DE,HL
        LD      DE,0FFD8h
        CALL    L2264
        POP     HL
        JR      Z,L21E6
        PUSH    BC
        LD      DE,0FFB8h
        CALL    L2264
        POP     DE
L21E6:  JP      Z,L2351
        LD      A,C
        XOR     E
        LD      (0FF95h),A
        LD      E,B
        PUSH    DE
        LD      HL,0FFD7h
        LD      DE,0FFDFh
        LD      B,08h
L21F8:  LD      A,(DE)
        ADC     A,A
        DAA
        LD      (HL),A
        DEC     HL
        DEC     DE
        LD      A,(DE)
        ADC     A,A
        DAA
        LD      (HL),A
        DEC     HL
        DEC     DE
        LD      A,(DE)
        ADC     A,A
        DAA
        LD      (HL),A
        DEC     HL
        DEC     DE
        DJNZ    L21F8
        LD      B,0Eh
        EXX
        LD      HL,0FFB8h
        LD      E,0AAh
        JR      L2220

L2216:  LD      HL,0FFB8h
        XOR     A
        CALL    L23C4
        RLD
        EXX
L2220:  RRC     E
L2222:  JR      C,L2225
        INC     HL
L2225:  RLD
        EXX
        JR      Z,L2247
        LD      C,A
        RRA
        CALL    C,L2275
        LD      DE,0FFD7h
        BIT     1,C
        CALL    NZ,L2278
        LD      DE,0FFCFh
        BIT     2,C
L223C:  CALL    NZ,L2278
        LD      DE,0FFC7h
        BIT     3,C
        CALL    NZ,L2278
L2247:  DJNZ    L2216
        POP     BC
        LD      A,C
        SUB     40h             ; '@'
        ADD     A,B
        LD      B,A
        JP      M,L232A
        LD      A,(0FFABh)
        AND     0F0h
        LD      C,A
        LD      HL,0FFB2h
        JR      Z,L2261
        INC     B
        JP      M,L232E
        ; --- START PROC L2261 ---
L2261:  JP      L22FF

        ; --- START PROC L2264 ---
L2264:  XOR     A
        LD      (DE),A
        LD      A,(HL)
        INC     DE
        INC     HL
        LD      BC,0007h
        LDIR
        ADD     A,A
        RR      C
        RR      A
        LD      B,A
        RET

        ; --- START PROC L2275 ---
L2275:  LD      DE,0FFDFh
        ; --- START PROC L2278 ---
L2278:  LD      HL,0FFB8h
        OR      A
        CALL    L2366
        RET     NC
L2280:  DEC     HL
        LD      A,00h
        ADC     A,(HL)
        DAA
        LD      (HL),A
        RET     NC
        JP      L2280

        ; --- START PROC L228A ---
L228A:  EX      DE,HL
        LD      HL,0FF95h
        JR      L2296

        ; --- START PROC L2290 ---
L2290:  LD      HL,2551h
        ; --- START PROC L2293 ---
L2293:  LD      DE,0FF95h
        ; --- START PROC L2296 ---
L2296:  PUSH    HL
        EX      DE,HL
        LD      DE,0FFB3h
        CALL    L2264
        POP     HL
        LD      A,02h
        SCF
        RET     Z
        PUSH    BC
        LD      DE,0FFABh
        CALL    L2264
        POP     DE
        JP      Z,L2351
        LD      A,C
        XOR     E
        LD      (0FF95h),A
        LD      E,B
        PUSH    DE
        LD      HL,0FFBBh
        CALL    L2354
        LD      B,10h
L22BD:  LD      C,0FFh
L22BF:  INC     C
        LD      DE,0FFB2h
        LD      HL,0FFBAh
        CALL    L2395
        JP      NC,L22BF
        LD      A,C
L22CD:  LD      HL,0FFC2h
        CALL    L23D3
        LD      DE,0FFBAh
        LD      HL,0FFB2h
        OR      A
        CALL    L2366
        XOR     A
        LD      HL,0FFB2h
        CALL    L23D3
        DJNZ    L22BD
        POP     BC
        LD      A,(0FFBBh)
        AND     0F0h
        LD      E,A
        JR      NZ,L22F0
        DEC     C
L22F0:  LD      A,C
        SUB     B
        ADD     A,40h           ; '@'
        JP      M,L232A
        JR      Z,L2351
        LD      C,E
        LD      DE,0FFC2h
        JR      L2301

        ; --- START PROC L22FF ---
L22FF:  EX      DE,HL
        LD      A,B
        ; --- START PROC L2301 ---
L2301:  LD      HL,0FF95h
        OR      (HL)
        LD      (HL),A
        INC     C
        DEC     C
        JR      NZ,L2311
        PUSH    DE
        POP     HL
        LD      A,0Fh
        CALL    L23D3
L2311:  EX      DE,HL
        LD      A,(HL)
        EX      AF,AF'
        DEC     HL
        LD      DE,0FF9Ch
        LD      BC,0007h
        LDDR
        EX      AF,AF'
        ADD     A,0B0h
        RET     NC
        EX      DE,HL
        CALL    L2334
        JR      L232F

        ; --- START PROC L2327 ---
L2327:  POP     AF
        JR      L232E

        ; --- START PROC L232A ---
L232A:  CP      0C1h
        JR      NC,L2351
        ; --- START PROC L232E ---
L232E:  SCF
        ; --- START PROC L232F ---
L232F:  LD      A,01h
        RET

        ; --- START PROC L2332 ---
L2332:  ADD     A,0FBh
        ; --- START PROC L2334 ---
L2334:  INC     HL
        INC     HL
        INC     HL
        INC     HL
        INC     HL
        INC     HL
        INC     HL
        LD      D,07h
        RET     NC
L233E:  LD      A,(HL)
        ADC     A,00h
        DAA
        LD      (HL),A
        RET     NC
        DEC     HL
        DEC     D
        JR      NZ,L233E
        INC     (HL)
        RET     Z
        RET     PE
        INC     HL
        LD      A,10h
        LD      (HL),A
        OR      A
        RET

        ; --- START PROC L2351 ---
L2351:  LD      HL,0FF95h
        ; --- START PROC L2354 ---
L2354:  XOR     A
        LD      (HL),A
        INC     HL
        LD      (HL),A
        INC     HL
        LD      (HL),A
        INC     HL
        ; --- START PROC L235B ---
L235B:  LD      (HL),A
        INC     HL
        LD      (HL),A
        INC     HL
        LD      (HL),A
        INC     HL
        LD      (HL),A
        INC     HL
        LD      (HL),A
        INC     HL
        RET

        ; --- START PROC L2366 ---
L2366:  LD      A,(DE)
        ADC     A,(HL)
        DAA
        LD      (HL),A
        DEC     HL
        DEC     DE
        ; --- START PROC L236C ---
L236C:  LD      A,(DE)
        ADC     A,(HL)
        DAA
        LD      (HL),A
        DEC     HL
        DEC     DE
        LD      A,(DE)
        ADC     A,(HL)
        DAA
        LD      (HL),A
        DEC     HL
        DEC     DE
        LD      A,(DE)
        ADC     A,(HL)
        DAA
        LD      (HL),A
        DEC     HL
        DEC     DE
        LD      A,(DE)
        ADC     A,(HL)
        DAA
        LD      (HL),A
        DEC     HL
        DEC     DE
        LD      A,(DE)
        ADC     A,(HL)
        DAA
        LD      (HL),A
        DEC     HL
        DEC     DE
        LD      A,(DE)
        ADC     A,(HL)
        DAA
        LD      (HL),A
        DEC     HL
        DEC     DE
        LD      A,(DE)
        ADC     A,(HL)
        DAA
        LD      (HL),A
        RET

        ; --- START PROC L2395 ---
L2395:  LD      A,(DE)
        SUB     (HL)
        DAA
        LD      (DE),A
        DEC     HL
        DEC     DE
        ; --- START PROC L239B ---
L239B:  LD      A,(DE)
        SBC     A,(HL)
        DAA
        LD      (DE),A
        DEC     HL
        DEC     DE
        LD      A,(DE)
        SBC     A,(HL)
        DAA
        LD      (DE),A
        DEC     HL
        DEC     DE
        LD      A,(DE)
        SBC     A,(HL)
        DAA
        LD      (DE),A
        DEC     HL
        DEC     DE
        LD      A,(DE)
        SBC     A,(HL)
        DAA
        LD      (DE),A
        DEC     HL
        DEC     DE
        LD      A,(DE)
        SBC     A,(HL)
        DAA
        LD      (DE),A
        DEC     HL
        DEC     DE
        LD      A,(DE)
        SBC     A,(HL)
        DAA
        LD      (DE),A
        DEC     HL
        DEC     DE
        LD      A,(DE)
        SBC     A,(HL)
        DAA
        LD      (DE),A
        RET

        ; --- START PROC L23C4 ---
L23C4:  RLD
        DEC     HL
        RLD
        DEC     HL
        RLD
        DEC     HL
        RLD
        DEC     HL
        RLD
        DEC     HL
        ; --- START PROC L23D3 ---
L23D3:  RLD
        DEC     HL
        ; --- START PROC L23D6 ---
L23D6:  RLD
        DEC     HL
        RLD
        DEC     HL
        RLD
        DEC     HL
        RLD
        DEC     HL
        RLD
        DEC     HL
        RLD
L23E7:  DEC     HL
        RLD
        DEC     HL
        RET

L23EC:  CCF
        DEC     H
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        RET     NZ
        DJNZ    L23F7
L23F7:  NOP
        NOP
        NOP
        NOP
        NOP
        CP      A
        DEC     H
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        LD      B,B
        LD      H,D
        ADD     A,E
        JR      L245E

L240B:  RLCA
        RLA
        SUB     (HL)
        LD      B,B
        INC     HL
        LD      (BC),A
        LD      E,B
        LD      D,B
        SUB     D
        SBC     A,C
        LD      B,B
        LD      B,B
        LD      SP,2762h
        HALT
        LD      H,B
        LD      D,84h
        CCF
        INC     H
        LD      (BC),A
        LD      D,E
L2422:  RLCA
        INC     SP
        LD      D,D
        INC     B
        CCF
        SUB     B
        LD      BC,1758h
        EX      AF,AF'
        LD      B,L
        INC     BC
        CCF
        LD      (HL),L
        SUB     A
        LD      B,(HL)
        SUB     D
        LD      H,(HL)
        LD      B,A
        SUB     (HL)
        LD      B,B
        JR      Z,L247E+1       ; reference not aligned to instruction
        LD      D,L
        NOP
        LD      (HL),H
        JR      Z,L2450+1       ; reference not aligned to instruction
        LD      B,38h           ; '8'
        LD      D,H
        LD      H,D
        LD      D,H
        SBC     A,B
        NOP
        NOP
        NOP
        CP      D
        DEC     (HL)
        SUB     L
        LD      (HL),B
        LD      D,A
        SUB     (HL)
        NOP
        NOP
        INC     A
L2450:  LD      D,04h
        ADD     HL,SP
        DEC     B
        JR      NZ,L23E7
        NOP
        CP      L
        LD      B,(HL)
        ADD     A,C
        LD      (HL),L
        INC     SP
        SUB     B
        LD      (DE),A
L245E:  JR      NZ,L249E
        LD      A,C
        LD      L,C
        LD      H,26h           ; '&'
        LD      (DE),A
        JR      NZ,L23EC
        CP      A
        LD      H,H
        LD      E,C
        LD      H,H
        ADD     HL,BC
        LD      (HL),H
        SBC     A,B
        LD      C,C
        LD      B,B
        DEC     D
        LD      (HL),B
        LD      A,C
        LD      H,E
        LD      H,79h           ; 'y'
        LD      C,B
        CCF
        LD      D,(HL)
        LD      H,C
        SUB     B
        SCF
        ADC     A,C
        LD      L,C
L247E:  LD      B,3Fh           ; '?'
        LD      D,C
        LD      D,C
        ADC     A,B
        ; --- START PROC L2483 ---
L2483:  LD      B,C
        LD      (L1660+2),A     ; reference not aligned to instruction
        LD      A,(BC)
        LD      A,47h           ; 'G'
        LD      H,C
        SUB     B
        LD      B,A
        LD      H,C
        SUB     B
        LD      C,B
        CP      (HL)
        LD      D,D
        LD      H,E
        DEC     D
        LD      A,B
        SUB     H
        LD      (HL),E
        LD      L,B
        LD      A,58h           ; 'X'
        ADD     A,D
        DEC     (HL)
        ADD     HL,HL
        LD      B,C
L249E:  RLA
        LD      H,L
        CP      (HL)
        LD      H,(HL)
        LD      H,(HL)
        LD      H,(HL)
        LD      H,(HL)
        LD      H,(HL)
        LD      H,(HL)
        LD      H,A
        LD      A,76h           ; 'v'
        SUB     D
        JR      NC,L2523
        SUB     D
        JR      NC,L2527
        CP      (HL)
        SUB     B
        SUB     B
        SUB     B
        SUB     B
        SUB     B
        SUB     B
        SUB     C
        CCF
        LD      DE,1111h
        LD      DE,1111h
        LD      DE,14BFh
        JR      Z,L251B
        INC     D
        JR      Z,L251E
        INC     D
        CCF
        ; --- START PROC L24C9 ---
L24C9:  JR      NZ,L24CB
L24CB:  NOP
        NOP
        NOP
        NOP
        NOP
        CP      A
        INC     SP
        INC     SP
        INC     SP
        INC     SP
        INC     SP
        INC     SP
        INC     SP
        LD      B,B
        DJNZ    L24DB
L24DB:  NOP
        NOP
        NOP
        NOP
        NOP
        LD      B,C
        LD      H,H
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        POP     BC
        LD      H,H
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        LD      B,B
        RLA
        LD      A,B
        DAA
        SUB     H
        DJNZ    L24FA
        ADC     A,C
        INC     C
        SCF
L24FA:  JR      NZ,L2483
        LD      H,A
        LD      D,(HL)
        SBC     A,B
        LD      A,B
        LD      L,B
        JR      C,L2528
        DEC     B
        ; --- START PROC L2504 ---
L2504:  LD      HL,3808h
        LD      D,H
        LD      B,D
        ADD     HL,SP
        DAA
        LD      D,L
        LD      (HL),E
        ADD     HL,DE
        LD      (8639h),HL
        LD      A,(5527h)
        LD      (HL),E
        ADD     HL,DE
        LD      (8639h),HL
        DEC     SP
        INC     H
        ; --- START PROC L251B ---
L251B:  ADD     A,B
        DEC     D
        ADD     A,A
        ; --- START PROC L251E ---
L251E:  JR      NC,L2535
        ADD     A,A
        INC     A
        ADD     HL,DE
        ; --- START PROC L2523 ---
L2523:  ADD     A,H
        LD      (DE),A
        LD      L,C
L2526:  ADD     A,H
        ; --- START PROC L2527 ---
L2527:  LD      (DE),A
L2528:  LD      (HL),B
        DEC     A
        INC     DE
        ADC     A,B
        ADC     A,B
        ADC     A,B
        ADC     A,B
        ADC     A,B
        ADC     A,C
        DEC     A
        ADD     A,E
        INC     SP
        INC     SP
        ; --- START PROC L2535 ---
L2535:  INC     SP
        INC     SP
        INC     SP
        INC     SP
        LD      A,41h           ; 'A'
        LD      H,(HL)
        LD      H,(HL)
        LD      H,(HL)
        LD      H,(HL)
        LD      H,(HL)
        LD      H,A
        CCF
        LD      D,66h           ; 'f'
        LD      H,(HL)
        LD      H,(HL)
        LD      H,(HL)
        LD      H,(HL)
        LD      H,A
        CCF
L254A:  LD      D,B
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        LD      B,B
        DJNZ    L2554
L2554:  NOP
        NOP
        NOP
        NOP
        NOP
        LD      B,B
        DJNZ    L255C
L255C:  NOP
        NOP
        NOP
        NOP
        NOP
        DEC     BC
        CCF
        JR      NZ,L256D+1      ; reference not aligned to instruction
        LD      H,H
        LD      (HL),C
        ADD     HL,HL
        SUB     H
        LD      D,0BFh
        DJNZ    L2504
L256D:  LD      (HL),95h
        LD      SP,2102h
        CCF
        LD      DE,8460h
        LD      B,L
        LD      (4228h),HL
        LD      A,31h           ; '1'
        INC     SP
        LD      L,B
        JR      NC,L25F9
        SUB     E
        ADD     A,L
        LD      A,61h           ; 'a'
        LD      B,A
        ADD     A,E
        LD      B,25h           ; '%'
        JR      L251B

L258A:  LD      A,66h           ; 'f'
        JR      C,L2526
        LD      (DE),A
        ADD     A,H
        LD      C,C
        LD      (HL),3Eh        ; '>'
        LD      A,B
        SBC     A,C
        LD      D,L
        LD      (HL),L
        DEC     (HL)
        LD      (DE),A
        LD      (HL),A
        LD      A,96h
        LD      D,B
        ADD     A,D
        LD      (HL),H
        LD      H,L
        NOP
        ADD     A,A
        CCF
        LD      (DE),A
        LD      B,B
        ADD     A,H
        JR      L25E1

L25A8:  LD      B,D
        ADD     HL,HL
        CCF
        RLA
        SCF
        RLA
        LD      A,C
        JR      NZ,L2627
        LD      H,D
        CCF
        JR      Z,L254A
        ADD     HL,HL
        LD      H,L
        LD      B,(HL)
        LD      B,13h
        CCF
        ADD     A,(HL)
        ADD     A,L
        ADC     A,B
        SUB     (HL)
        JR      C,L25C7
        LD      D,B
        LD      HL,0FF95h
        LD      A,(HL)
        OR      A
L25C7:  RET     Z
        RLCA
        LD      A,03h
        RET     C
        LD      A,(HL)
        LD      DE,0FFE0h
        CALL    L1FB7
        LD      B,40h           ; '@'
        SUB     B
        LD      HL,241Eh
        SRA     A
        JR      NC,L25E0
        LD      HL,242Eh
L25E0:  PUSH    AF
L25E1:  LD      A,B
        LD      (DE),A
        PUSH    HL
        LD      HL,0FFE1h
        INC     DE
        LD      BC,0007h
        LDIR
        POP     HL
        LD      A,01h
        CALL    L27FD
        POP     AF
        LD      HL,0FF95h
        ADD     A,(HL)
        LD      (HL),A
L25F9:  LD      B,04h
L25FB:  PUSH    BC
        CALL    L2827
        LD      HL,0FFE0h
        CALL    L2293
        LD      HL,0FFE8h
        CALL    L2089
        LD      HL,2549h
        CALL    L21C6
        POP     BC
        DJNZ    L25FB
        RET

L2615:  CALL    L281D
        CALL    L2630
L261B:  CALL    L2822
        LD      HL,0FFF8h
        CALL    L1FA4
        CALL    L2646
L2627:  LD      HL,0FFF0h
        CALL    L228A
        LD      A,03h
        RET

        ; --- START PROC L2630 ---
L2630:  CALL    L268F
        XOR     A
        PUSH    AF
        LD      HL,23ECh
        CALL    L2089
        LD      HL,2551h
        CALL    L2817
        CALL    NC,L2091
        JR      L264A

        ; --- START PROC L2646 ---
L2646:  CALL    L268F
        PUSH    AF
        ; --- START PROC L264A ---
L264A:  LD      HL,2549h
        CALL    L2817
        CALL    NC,L2091
        CCF
        PUSH    AF
        CALL    L2086
        LD      HL,2549h
        CALL    L205E
        LD      HL,2551h
        CALL    NC,L2096
        CALL    L2086
        CALL    L1FC7
        CALL    L282C
        CALL    L21C3
        CALL    L2827
        LD      HL,243Eh
        CALL    L27FB
        LD      HL,0FFE0h
        CALL    L21C6
        LD      HL,2551h
        CALL    L1F99
        POP     AF
        CALL    C,L1FBD
        POP     AF
        CALL    NZ,L1FBD
        OR      A
        RET

        ; --- START PROC L268F ---
L268F:  LD      HL,2406h
        CALL    L228A
        CALL    L1FC7
        PUSH    AF
        CALL    L282C
        CALL    L1FE8
        LD      HL,0FFE0h
        CALL    L2096
        POP     AF
        RET

L26A7:  CALL    L2057
        JR      NC,L26B0
        CALL    L1FC0
        SCF
L26B0:  PUSH    AF
        LD      HL,2551h
        CALL    L205E
        CALL    NC,L2290
        PUSH    AF
        LD      HL,23ECh
        CALL    L205E
        JR      C,L26E3
        CALL    L282C
        LD      HL,2477h
        PUSH    HL
        CALL    L2091
        CALL    L2827
        POP     HL
        LD      DE,0FFE0h
        CALL    L21CA
        LD      HL,2551h
        CALL    L2089
        LD      HL,0FFE8h
        CALL    L2293
L26E3:  PUSH    AF
        CALL    L282C
        CALL    L21C3
        CALL    L2827
        LD      HL,2487h
        CALL    L27FB
        LD      HL,0FFE0h
        CALL    L21C6
        LD      HL,247Fh
        POP     AF
        CALL    NC,L2089
        LD      HL,246Fh
        POP     AF
        PUSH    HL
        CALL    NC,L2096
        POP     HL
        CALL    L1F99
        POP     AF
        RET     NC
        JP      L1FBD

L2711:  LD      HL,240Eh
        CALL    L228A
        RET     C
        LD      HL,24E0h
        CALL    L205E
        JR      NC,L2790
        LD      HL,24E8h
        CALL    L205E
        JR      Z,L2783
        JP      C,L2351
        CALL    L2822
        CALL    L1FDA
        CALL    L281D
        LD      HL,0FFF0h
        CALL    L2096
        LD      HL,23ECh
        CALL    L2817
        JR      C,L2749
        CALL    L2091
        XOR     A
        INC     A
        JR      L2758

L2749:  LD      HL,23FCh
        CALL    L2817
        JR      NC,L2756+1      ; reference not aligned to instruction
        CALL    L2091
        XOR     A
        DEC     A
L2756:  LD      B,0AFh
L2758:  PUSH    AF
        CALL    L2798
        CALL    L2827
        LD      HL,24F8h
        CALL    L27FB
        POP     AF
        JR      Z,L2773
        LD      HL,24F0h
        ADD     A,01h
        CALL    NC,L21C6
        CALL    C,L228A
L2773:  CALL    L2822
        LD      HL,0FFF8h
        CALL    L1ED0
        LD      A,(0FFF0h)
        ADD     A,L
        JP      M,L2790
L2783:  JP      Z,L2351
        LD      (0FFF0h),A
        OR      A
        LD      HL,0FFF0h
        JP      L1FA4

L2790:  LD      A,01h
        SCF
        RET

L2794:  CALL    L279E
        RET     C
        ; --- START PROC L2798 ---
L2798:  LD      HL,240Eh
        JP      L21C6

        ; --- START PROC L279E ---
L279E:  CALL    L2057
        LD      A,03h
        RET     C
        SCF
        RET     Z
        LD      A,(HL)
        LD      B,40h           ; '@'
        SUB     B
        PUSH    AF
        LD      (HL),B
        CALL    L2822
        LD      HL,2416h
        CALL    L2817
        JR      NC,L27BA
        LD      HL,2551h
L27BA:  PUSH    AF
        PUSH    HL
        CALL    L2091
        CALL    L281D
        POP     HL
        LD      DE,0FFF0h
        CALL    L2080+1         ; reference not aligned to instruction
        LD      HL,0FFF8h
        PUSH    HL
        CALL    L2293
        CALL    L281D
        CALL    L21C3
        CALL    L2827
        LD      HL,2561h
        CALL    L27FB
        POP     HL
        CALL    L21C6
        LD      HL,2549h
        POP     AF
        CALL    NC,L2089
        CALL    L281D
        POP     AF
        LD      L,A
        RLCA
        SBC     A,A
        LD      H,A
        CALL    L1E96+1         ; reference not aligned to instruction
        LD      HL,0FFF8h
        JP      L2089

        ; --- START PROC L27FB ---
L27FB:  LD      A,(HL)
        INC     HL
        ; --- START PROC L27FD ---
L27FD:  CALL    L1FA4
        LD      B,A
L2801:  PUSH    BC
        PUSH    HL
        LD      HL,0FFE8h
        CALL    L21C6
        POP     HL
        PUSH    HL
        CALL    L2089
        POP     HL
        LD      BC,0008h
        ADD     HL,BC
        POP     BC
        DJNZ    L2801
        RET

        ; --- START PROC L2817 ---
L2817:  PUSH    HL
        CALL    L205E
        POP     HL
        RET

        ; --- START PROC L281D ---
L281D:  LD      HL,0FFF8h
        JR      L282F

        ; --- START PROC L2822 ---
L2822:  LD      HL,0FFF0h
        JR      L282F

        ; --- START PROC L2827 ---
L2827:  LD      HL,0FFE8h
        JR      L282F

        ; --- START PROC L282C ---
L282C:  LD      HL,0FFE0h
        ; --- START PROC L282F ---
L282F:  JP      L1FB3

L2832:  RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
L28FA:  RST     0x38
        RST     0x38
L28FC:  RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
L2A2E:  RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
L2C00:  LD      (0FC5Dh),SP
        LD      SP,0FC5Dh
        PUSH    AF
        PUSH    BC
        PUSH    DE
        PUSH    HL
        PUSH    IX
        PUSH    IY
        EXX
        EX      AF,AF'
        PUSH    AF
        PUSH    BC
        PUSH    DE
        PUSH    HL
        EXX
        EX      AF,AF'
        LD      HL,2C46h
        LD      A,C
        CP      23h             ; '#'
        CALL    C,L2C33
        POP     HL
        POP     DE
        POP     BC
        POP     AF
        EX      AF,AF'
        EXX
        POP     IY
        POP     IX
L2C2A:  POP     HL
        POP     DE
        POP     BC
        POP     AF
        LD      SP,(0FC5Dh)
        RET

        ; --- START PROC L2C33 ---
L2C33:  LD      A,C
        ADD     A,A
        ADD     A,L
        LD      L,A
        JR      NC,L2C3A
        INC     H
L2C3A:  LD      A,(HL)
        INC     HL
        LD      H,(HL)
        LD      L,A
        PUSH    HL
        LD      HL,(0FC55h)
        LD      A,(0FC5Ch)
        RET

L2C46:  AND     H
        DEC     SP
        XOR     E
        INC     L
        OR      B
        INC     L
        LD      (L322B+1),A     ; reference not aligned to instruction
        INC     L
        XOR     2Ch             ; ','
        LD      BC,1A2Dh
        DEC     L
        RST     0x10
        INC     L
        AND     E
        INC     L
        JP      P,0F72Ch
        INC     L
        LD      (L322B+1),A     ; reference not aligned to instruction
        INC     L
        LD      (L322B+1),A     ; reference not aligned to instruction
        INC     L
        LD      (L322B+1),A     ; reference not aligned to instruction
        INC     L
        LD      D,(HL)
        DEC     L
        LD      (L322B+1),A     ; reference not aligned to instruction
        INC     L
        RRA
        DEC     L
        CALL    M,L322B+1       ; reference not aligned to instruction
        INC     L
        LD      (L322B+1),A     ; reference not aligned to instruction
        INC     L
        LD      C,B
        DEC     L
        LD      B,E
        DEC     L
        JR      C,L2CAB+2       ; reference not aligned to instruction
        SBC     A,A
        INC     L
        LD      (L322B+1),A     ; reference not aligned to instruction
        INC     L
        ADC     A,2Ch           ; ','
        ADC     A,H
        INC     L
        LD      D,B
        INC     A
        LD      A,E
        LD      (0FC60h),A
        OR      A
        RET     NZ
        LD      (0FC5Fh),A
        RET

L2C96:  LD      A,(DE)
        OR      A
        RET     Z
        CALL    L2CAE
        INC     DE
        JR      L2C96

        ; --- START PROC L2C9F ---
L2C9F:  CALL    L2CAE
        INC     DE
        ; --- START PROC L2CA3 ---
L2CA3:  LD      A,(DE)
        OR      A
        RET     Z
        CP      24h             ; '$'
        RET     Z
        JR      L2C9F

L2CAB:  CALL    L2CFC
        ; --- START PROC L2CAE ---
L2CAE:  LD      C,A
        CP      4Bh             ; 'K'
        LD      B,D
        CALL    L2CB7
        JR      L2CD9

        ; --- START PROC L2CB7 ---
L2CB7:  CALL    L2DA1
        JR      NZ,L2CC0
        CALL    L2D11
        RET     Z
L2CC0:  CP      13h
        JP      NZ,L2DDD
        CALL    L3552
        CP      1Bh
        CALL    Z,L2DDD
        RET

L2CCE:  LD      A,E
        PUSH    AF
        CALL    L2D7C
        POP     AF
        LD      C,A
        JR      L2CDC

L2CD7:  LD      C,E
        LD      B,D
        ; --- START PROC L2CD9 ---
L2CD9:  CALL    L2D6A
        ; --- START PROC L2CDC ---
L2CDC:  LD      A,(0FC5Fh)
        AND     01h
        RET     Z
        CALL    L3B71
        OR      A
        JP      NZ,L3B7A
        CALL    L2DD5
        JR      L2CDC

L2CEE:  LD      C,E
        JP      L3B7A

L2CF2:  CALL    L35BD
        JR      L2D52

L2CF7:  CALL    L2DAC
        JR      L2D52

        ; --- START PROC L2CFC ---
L2CFC:  CALL    L2DB6
        JR      L2D52

L2D01:  LD      C,E
        INC     C
        JR      NZ,L2CD7
        CALL    L2D0D
        CALL    L2DC3
        JR      L2D52

        ; --- START PROC L2D0D ---
L2D0D:  CALL    L2DA1
        RET     NZ
        ; --- START PROC L2D11 ---
L2D11:  CALL    L3501
        RET     Z
        CALL    L3552
        OR      A
        RET

L2D1A:  CALL    L3B71
        JR      L2D52

L2D1F:  PUSH    DE
        CALL    L2E45
        LD      B,A
        POP     AF
        CP      08h
        RET     C
        CP      0Bh
        JR      C,L2D35
        CP      20h             ; ' '
        JR      Z,L2D35
        CP      18h
        RET     NZ
        JR      L2D60

L2D35:  LD      A,B
        JR      L2D52

L2D38:  CALL    L3AB3
        PUSH    AF
        LD      A,C
        LD      (0FC59h),A
        POP     AF
        JR      L2D4B

L2D43:  CALL    L35A0
        JR      L2D4B

L2D48:  CALL    L35BF
L2D4B:  LD      (0FC55h),HL
        LD      (0FC57h),DE
        ; --- START PROC L2D52 ---
L2D52:  LD      (0FC5Ch),A
        RET

L2D56:  PUSH    BC
        CALL    L34D0
        POP     BC
        JR      C,L2D64
        LD      A,B
        OR      A
        RET     NZ
L2D60:  LD      (0FC55h),HL
        RET

L2D64:  LD      HL,0FC5Bh
        SET     0,(HL)
        RET

        ; --- START PROC L2D6A ---
L2D6A:  PUSH    BC
        PUSH    DE
        PUSH    HL
        PUSH    IX
        PUSH    IY
        CALL    L2DE1
        POP     IY
        POP     IX
        POP     HL
        POP     DE
        POP     BC
        RET

        ; --- START PROC L2D7C ---
L2D7C:  CP      09h
        JR      NZ,L2D8D
L2D80:  LD      A,09h
        CALL    L2D8D
        LD      A,(0FC68h)
        AND     07h
        JR      NZ,L2D80
        RET

        ; --- START PROC L2D8D ---
L2D8D:  LD      DE,(0FC6Ah)
        ; --- START PROC L2D91 ---
L2D91:  CP      09h
        JR      Z,L2D9D
        CP      20h             ; ' '
        JR      NC,L2D9D
        SET     5,E
        ADD     A,40h           ; '@'
L2D9D:  LD      H,A
        JP      L30B4

        ; --- START PROC L2DA1 ---
L2DA1:  LD      A,(0FC61h)
        OR      A
        PUSH    AF
        SUB     A
        LD      (0FC61h),A
        POP     AF
        RET

        ; --- START PROC L2DAC ---
L2DAC:  LD      A,(0FC61h)
        OR      A
        LD      A,0FFh
        RET     NZ
        JP      L34FA

        ; --- START PROC L2DB6 ---
L2DB6:  CALL    L2DAC
        JR      Z,L2DB6
        CALL    L2DA1
        JR      NZ,L2DC3
        CALL    L3509
        ; --- START PROC L2DC3 ---
L2DC3:  CP      10h
        RET     NZ
        LD      A,(0FC60h)
        OR      A
        RET     Z
        LD      A,(0FC5Fh)
        XOR     01h
        LD      (0FC5Fh),A
        SUB     A
        RET

        ; --- START PROC L2DD5 ---
L2DD5:  CALL    L2D11
        RET     Z
        CALL    L2DC3
        RET     Z
        ; --- START PROC L2DDD ---
L2DDD:  LD      (0FC61h),A
        RET

        ; --- START PROC L2DE1 ---
L2DE1:  LD      DE,(0FC68h)
        LD      HL,0FD7Dh
        LD      A,(HL)
        OR      A
        LD      A,C
        JR      NZ,L2E28
        CP      7Fh             ; ''
        LD      A,B
        JP      Z,L2F5A
        LD      A,C
        CP      20h             ; ' '
        JP      NC,L2F5A
        SUB     07h
        RET     C
        LD      HL,2E5Ch
        ; --- START PROC L2DFF ---
L2DFF:  CALL    L2E52
        JP      (HL)

L2E03:  LD      (0FD80h),SP
        LD      SP,0FD7Dh
        LD      A,0FFh
        LD      (0FD7Dh),A
        CALL    L2E19
        CALL    L2E31
        SUB     A
        LD      (0FD7Dh),A
        ; --- START PROC L2E19 ---
L2E19:  LD      (0FD7Eh),SP
        LD      SP,(0FD80h)
        RET

        ; --- START PROC L2E22 ---
L2E22:  CALL    L2E19
        SUB     20h             ; ' '
        RET

        ; --- START PROC L2E28 ---
L2E28:  LD      (0FD80h),SP
        LD      SP,(0FD7Eh)
        RET

        ; --- START PROC L2E31 ---
L2E31:  CP      59h             ; 'Y'
        JR      NZ,L2E37
        LD      A,3Dh           ; '='
L2E37:  SUB     3Bh             ; ';'
        CP      17h
        RET     NC
        LD      DE,(0FC68h)
        LD      HL,2EE9h
        JR      L2DFF

        ; --- START PROC L2E45 ---
L2E45:  LD      A,D
        CP      27h             ; '''
        RET     NC
        PUSH    HL
        LD      HL,2E8Eh
        CALL    L2E52
        EX      (SP),HL
        RET

        ; --- START PROC L2E52 ---
L2E52:  ADD     A,A
        LD      C,A
L2E54:  LD      B,00h
        ADD     HL,BC
        LD      A,(HL)
        INC     HL
        LD      H,(HL)
        LD      L,A
        RET

L2E5C:  LD      (4330h),HL
        JR      NC,L2E73
        JR      NC,L2EE1
        CPL
L2E64:  SCF
        JR      NC,L2EC3+1      ; reference not aligned to instruction
        CPL
        SUB     2Fh             ; '/'
        IN      A,(2Fh)         ; '/'
        LD      D,C
L2E6D:  LD      L,51h           ; 'Q'
        LD      L,51h           ; 'Q'
        LD      L,51h           ; 'Q'
L2E73:  LD      L,51h           ; 'Q'
        LD      L,0ECh
        CPL
L2E78:  LD      D,C
        LD      L,43h           ; 'C'
        JR      NC,L2EB4
        JR      NC,L2ED0
        LD      L,5Dh           ; ']'
        CPL
        IN      A,(2Fh)         ; '/'
        INC     BC
        LD      L,7Eh           ; '~'
        CPL
        LD      D,C
        LD      L,0ECh
        CPL
        CCF
        CPL
        AND     (HL)
        JR      NC,L2E54
        CPL
        IN      A,(2Fh)         ; '/'
        LD      E,D
        JR      NC,L2F0D
        JR      NC,L2E54+1      ; reference not aligned to instruction
        LD      SP,30BAh
        OR      H
        JR      NC,L2E64
        JR      NC,L2E6D
        JR      NC,L2E78
        JR      NC,L2EF6
        LD      L,51h           ; 'Q'
        LD      L,0D4h
        CPL
        CALL    PE,L192F
        LD      (L321E),A
        INC     HL
        LD      (L3228),A
L2EB4:  ADD     HL,DE
        LD      (L321E),A
        INC     HL
        LD      (L3228),A
        CALL    PO,7130h
        LD      SP,3272h
        DEC     (HL)
L2EC3:  LD      (L31C1+1),A     ; reference not aligned to instruction
        ADC     A,D
        LD      SP,31F8h
        RST     0x38
        LD      SP,320Ch
        DJNZ    L2F02
L2ED0:  OR      H
        LD      (L32EE),A
        DI
        JR      NC,L2EE7
        LD      SP,3175h
        CALL    C,L212E
        LD      H,(HL)
        CALL    M,5522h
L2EE1:  CALL    M,6E3Ah
        CALL    M,5C32h
L2EE7:  CALL    M,L24C9
        CPL
        ADD     A,H
        ADD     HL,SP
        RLA
        CPL
        LD      A,A
        ADD     HL,SP
        DEC     (HL)
        CPL
        LD      D,C
        LD      L,37h           ; '7'
L2EF6:  JR      NC,L2F76
        CPL
        LD      E,L
        CPL
        LD      B,E
        JR      NC,L2F4F
        LD      L,17h
        CPL
        LD      D,C
L2F02:  LD      L,0ECh
        CPL
        LD      E,D
        JR      NC,L2F7E
        JR      NC,L2F5A+1      ; reference not aligned to instruction
        LD      L,0DBh
        CPL
L2F0D:  LD      D,C
        LD      L,0B4h
        LD      (L32EE),A
        JR      NC,L2F47
        LD      (HL),D
        LD      (L22CD),A
        LD      L,67h           ; 'g'
        PUSH    HL
        CALL    L2E22
        POP     HL
        LD      L,A
        JP      L30A6

L2F24:  CALL    L2E19
        AND     0DFh
        LD      (0FCC1h),A
        CALL    L2E19
        AND     0DFh
        LD      (0FCC2h),A
        RET

L2F35:  CALL    L2E22
        RET     C
        OR      A
        RET     Z
        LD      (0FCC0h),A
        RET

L2F3F:  LD      HL,(0FC68h)
        LD      A,(0FCC0h)
        LD      C,A
L2F46:  CP      L
L2F47:  JR      C,L2F4B
        JR      NZ,L2F4E
L2F4B:  ADD     A,C
        JR      L2F46

L2F4E:  SUB     L
L2F4F:  LD      B,A
L2F50:  PUSH    BC
        LD      A,20h           ; ' '
        CALL    L2F5A
        POP     BC
        DJNZ    L2F50
        RET

        ; --- START PROC L2F5A ---
L2F5A:  CALL    L331A
        ; --- START PROC L2F5D ---
L2F5D:  INC     E
        LD      HL,0FC66h
        LD      A,E
        CP      (HL)
        JR      C,L2F8E
        LD      E,00h
        LD      A,(0FC6Ch)
        CP      D
        JR      Z,L2F7E
        PUSH    AF
        CALL    L33BA
        INC     HL
        INC     HL
        INC     HL
        RES     7,(HL)
L2F76:  POP     AF
        JR      NC,L2F7E
        LD      A,18h
        CP      D
        JR      Z,L2F8E
L2F7E:  LD      A,(0FC6Ch)
        CP      D
        JR      NZ,L2F89
        CALL    L2FA4
        JR      L2F8E

L2F89:  LD      A,18h
        CP      D
        RET     Z
        INC     D
        ; --- START PROC L2F8E ---
L2F8E:  LD      (0FC68h),DE
        CALL    L3346
        LD      A,0Eh
        OUT     (18h),A
        LD      A,C
        OUT     (19h),A
        LD      A,0Fh
        OUT     (18h),A
        LD      A,B
        OUT     (19h),A
        RET

        ; --- START PROC L2FA4 ---
L2FA4:  LD      A,(0FC6Dh)
        OR      A
        RET     Z
        DEC     A
        JR      Z,L2FB2
        CALL    L2DB6
        CP      1Bh
        RET     Z
L2FB2:  LD      HL,0FC70h
        INC     (HL)
        PUSH    DE
        CALL    L33DD
        LD      DE,(0FCBCh)
        CALL    L3301
        POP     DE
        RET

L2FC3:  LD      HL,0FC71h
        LD      B,4Bh           ; 'K'
        CALL    L33D7
        LD      HL,0000h
        LD      DE,07CFh
        CALL    L2FF2
        LD      D,00h
        ; --- START PROC L2FD6 ---
L2FD6:  LD      E,00h
        JP      L2F8E

        ; --- START PROC L2FDB ---
L2FDB:  LD      HL,(0FCBEh)
        LD      DE,004Fh
        ADD     HL,DE
        EX      DE,HL
        LD      HL,(0FCBCh)
        CALL    L2FF2
        CALL    L33C7
L2FEC:  LD      A,(0FC6Bh)
        LD      D,A
        JR      L2FD6

        ; --- START PROC L2FF2 ---
L2FF2:  LD      C,H
        LD      B,L
        LD      L,D
        LD      H,E
        LD      D,20h           ; ' '
        LD      A,(0FC6Ah)
        LD      E,A
L2FFC:  OUT     (C),D
        SET     3,C
        OUT     (C),E
        RES     3,C
        LD      A,H
        CP      B
        JR      NZ,L300B
        LD      A,L
        CP      C
        RET     Z
L300B:  INC     B
        JR      NZ,L2FFC
        INC     C
        JP      L2FFC

L3012:  LD      C,07h
L3014:  PUSH    BC
        LD      A,20h           ; ' '
        CALL    L2F5A
        POP     BC
        LD      A,(0FC68h)
        AND     C
        JR      NZ,L3014
        RET

L3022:  LD      D,60h           ; '`'
        LD      E,D
L3025:  LD      B,E
        LD      A,15h
        OUT     (1Ch),A
L302A:  DJNZ    L302A
        LD      B,E
        LD      A,05h
        OUT     (1Ch),A
L3031:  DJNZ    L3031
        DEC     D
        JR      NZ,L3025
        RET

L3037:  LD      A,D
        OR      A
        RET     Z
        LD      A,(0FC6Bh)
        CP      D
        RET     Z
        DEC     D
        JP      L2F8E

L3043:  LD      A,E
        OR      A
        JR      NZ,L3056
        LD      A,(0FC6Bh)
        CP      D
        RET     Z
        JR      C,L3051
        LD      A,D
        OR      A
        RET     Z
L3051:  LD      A,(0FC66h)
        LD      E,A
        DEC     D
L3056:  DEC     E
        JP      L2F8E

        ; --- START PROC L305A ---
L305A:  LD      DE,(0FC68h)
        LD      C,D
        CALL    L33BE
        INC     HL
        INC     HL
        LD      (HL),E
        CALL    L3346
        LD      A,(0FC66h)
        DEC     A
        LD      E,A
        PUSH    HL
        CALL    L3346
        EX      DE,HL
        POP     HL
        JP      L2FF2

L3076:  LD      DE,(0FC68h)
        LD      HL,0FC69h
        CALL    L33CA
        CALL    L33BA
        LD      A,(0FC68h)
        INC     HL
        INC     HL
        LD      (HL),A
        LD      HL,0FC6Bh
        LD      A,D
        CP      (HL)
        RET     C
        LD      A,(0FC6Ch)
        CP      D
        RET     C
        CALL    L3346
        LD      D,A
        LD      A,(0FC66h)
        DEC     A
        LD      E,A
        PUSH    HL
        CALL    L3346
        EX      DE,HL
        POP     HL
        JP      L2FF2

        ; --- START PROC L30A6 ---
L30A6:  LD      A,(0FC66h)
        DEC     A
        CP      L
        RET     C
        LD      A,18h
        CP      H
        RET     C
        EX      DE,HL
        JP      L2F8E

        ; --- START PROC L30B4 ---
L30B4:  PUSH    DE
        LD      A,H
        CALL    L331A
        POP     DE
        LD      A,E
        CALL    L3342
        SET     3,C
        OUT     (C),A
        JP      L2F5D

L30C5:  EX      DE,HL
        CALL    L3346
        IN      A,(C)
        RET

L30CC:  EX      DE,HL
        CALL    L3346
        SET     3,C
        IN      A,(C)
        RET

L30D5:  LD      A,(0FC6Ah)
        RET

        ; --- START PROC L30D9 ---
L30D9:  LD      A,97h
        PUSH    HL
        PUSH    DE
        LD      E,A
        CALL    L30E4
        POP     DE
        POP     HL
        RET

        ; --- START PROC L30E4 ---
L30E4:  LD      HL,0FC6Eh
        LD      A,(HL)
        INC     E
        DEC     E
        JR      NZ,L30F0
        SET     7,(HL)
        JR      L30FB

L30F0:  RES     7,A
        LD      E,A
        ; --- START PROC L30F3 ---
L30F3:  LD      A,E
        LD      (0FC6Eh),A
        OR      A
        JP      P,L3100
L30FB:  AND     9Fh
        OR      0A0h
        LD      E,A
L3100:  CALL    L3107+1         ; reference not aligned to instruction
        LD      E,0Fh
        LD      A,0Bh
L3107:  LD      HL,0A3Eh
        OUT     (18h),A
        LD      A,E
        OUT     (19h),A
        RET

L3110:  LD      A,E
        CP      06h
        RET     NC
        ADD     A,A
        ADD     A,A
        ADD     A,A
        ADD     A,E
        LD      E,A
        LD      D,00h
        LD      HL,313Bh
        ADD     HL,DE
        LD      B,04h
L3121:  LD      A,B
        CP      0Ah
        JR      Z,L312F
        OUT     (18h),A
        LD      A,(HL)
        OUT     (19h),A
        INC     HL
        INC     B
        JR      L3121

L312F:  LD      A,(HL)
        INC     HL
        OUT     (1Ch),A
        IN      A,(20h)         ; ' '
        AND     (HL)
        INC     HL
L3137:  OR      (HL)
        OUT     (20h),A         ; ' '
        RET

L313B:  RRA
        LD      B,19h
        INC     E
        AND     B
        RLCA
        LD      (BC),A
        RST     0x28
        NOP
        LD      H,00h
        ADD     HL,DE
        RRA
        AND     B
        RLCA
        LD      (DE),A
        RST     0x28
        NOP
        LD      HL,1906h
        DEC     E
        AND     B
        EX      AF,AF'
        LD      (DE),A
        RST     0x28
        NOP
        RRA
        LD      B,19h
        INC     E
        AND     E
        LD      C,02h
        RST     0x38
        DJNZ    L3186
        NOP
        ADD     HL,DE
        RRA
        AND     E
        LD      C,12h
        RST     0x38
        DJNZ    L318A
        LD      B,19h
        DEC     E
        AND     E
        DJNZ    L3180+1         ; reference not aligned to instruction
        RST     0x38
        DJNZ    L319C
        LD      L,B
        CALL    M,0CDC9h
        SBC     A,H
        LD      SP,0C5D8h
        LD      BC,004Fh
        EX      DE,HL
        ADD     HL,BC
        EX      DE,HL
L3180:  CALL    L2FF2
        POP     BC
        LD      A,B
        SUB     C
L3186:  INC     A
        JP      L33D0

L318A:  CALL    L319C
        RET     C
        LD      (0FC6Bh),BC
        LD      (0FCBEh),DE
        LD      (0FCBCh),HL
        JP      L2FEC

        ; --- START PROC L319C ---
L319C:  LD      A,H
        CP      19h
        CCF
        RET     C
        ADD     A,L
        RET     C
        CP      19h
        CCF
        RET     C
        LD      L,H
        LD      H,A
        PUSH    HL
        CALL    L31B6
        EX      (SP),HL
        LD      A,L
        PUSH    HL
        CALL    L31B6
        POP     BC
        POP     DE
        RET

        ; --- START PROC L31B6 ---
L31B6:  LD      D,A
        LD      E,00h
        JP      L3346

L31BC:  LD      A,E
        LD      (0FC6Ah),A
        RET

        ; --- START PROC L31C1 ---
L31C1:  LD      A,7Bh           ; '{'
        LD      DE,8028h
        OR      A
        JR      NZ,L31CC
        LD      DE,0050h
L31CC:  LD      A,E
        LD      (0FC66h),A
        IN      A,(20h)         ; ' '
        AND     3Fh             ; '?'
        OR      D
        OUT     (20h),A         ; ' '
        LD      A,18h
        LD      (0FC6Ch),A
        LD      (0FC67h),A
        SUB     A
        LD      (0FC6Bh),A
        LD      (0FD7Dh),A
        LD      H,A
        LD      L,A
        INC     A
        LD      (0FC6Dh),A
        LD      (0FCBCh),HL
        LD      HL,0780h
        LD      (0FCBEh),HL
        JP      L2FDB

L31F8:  LD      A,E
        AND     03h
        LD      (0FC6Dh),A
        RET

L31FF:  SUB     A
        ; --- START PROC L3200 ---
L3200:  LD      BC,0080h
L3203:  OUT     (C),A
        INC     B
        JR      NZ,L3203
        INC     C
        JR      NZ,L3203
        RET

L320C:  LD      A,E
        OUT     (23h),A         ; '#'
        RET

L3210:  LD      A,(0FC66h)
        SUB     50h             ; 'P'
        RET     Z
        LD      A,0FFh
        RET

        ; --- START PROC L3219 ---
L3219:  LD      HL,3043h
        JR      L322B

        ; --- START PROC L321E ---
L321E:  LD      HL,2F5Dh
L3221:  JR      L322B

L3223:  LD      HL,3037h
        JR      L322B

        ; --- START PROC L3228 ---
L3228:  LD      HL,2F7Eh
        ; --- START PROC L322B ---
L322B:  LD      DE,(0FC68h)
        JP      (HL)

L3230:  CALL    L2E19
        LD      L,A
        LD      BC,202Eh
        LD      DE,(0FC68h)
        CALL    L3241
        JP      L2F5D

        ; --- START PROC L3241 ---
L3241:  PUSH    HL
        PUSH    DE
        LD      HL,0FC66h
        LD      A,(HL)
        DEC     A
        SUB     E
        LD      C,A
        LD      B,00h
        LD      E,(HL)
        DEC     E
        PUSH    BC
        CALL    L3346
        POP     BC
        LD      D,H
        LD      E,L
        CALL    L32A7
        JR      Z,L325B
        DEC     HL
L325B:  DEC     HL
        CALL    L3387
        POP     DE
        LD      C,D
        CALL    L33BE
        INC     HL
        INC     HL
        LD      A,(0FC66h)
        CP      (HL)
        JR      Z,L326D
        INC     (HL)
L326D:  POP     BC
        LD      A,C
        JP      L331E

L3272:  LD      DE,(0FC68h)
        LD      C,D
        CALL    L33BE
        INC     HL
        INC     HL
        LD      A,(HL)
        OR      A
        JR      Z,L3286
        CP      E
        JR      Z,L3285
        JR      C,L3286
L3285:  DEC     (HL)
L3286:  LD      HL,0FC66h
        LD      A,(HL)
        DEC     A
        SUB     E
        LD      C,A
        LD      B,00h
        PUSH    BC
        CALL    L3346
        POP     BC
        LD      D,H
        LD      E,L
        CALL    L32A7
        JR      Z,L329C
        INC     HL
L329C:  INC     HL
        CALL    L3364
        LD      C,D
        LD      B,E
        LD      A,20h           ; ' '
        JP      L3338

        ; --- START PROC L32A7 ---
L32A7:  LD      A,(0FC66h)
        AND     08h
        RET     Z
        SLA     C
        RR      B
        OR      0FFh
        RET

L32B4:  LD      DE,(0FC68h)
        ; --- START PROC L32B8 ---
L32B8:  CALL    L32E8
        RET     C
        PUSH    DE
        CALL    L33FC
        POP     DE
        LD      E,00h
        CALL    L3346
        LD      B,H
        LD      C,L
        LD      HL,(0FCBEh)
        LD      D,H
        LD      E,L
        SBC     HL,BC
        EX      DE,HL
        LD      BC,004Fh
        ADD     HL,BC
        LD      B,D
        LD      C,E
        EX      DE,HL
        LD      HL,0FFB0h
        ADD     HL,DE
        CALL    L3387
        INC     HL
        EX      DE,HL
        LD      HL,004Fh
        ADD     HL,DE
        EX      DE,HL
        JP      L2FF2

        ; --- START PROC L32E8 ---
L32E8:  LD      A,(0FC6Ch)
        CP      D
        LD      A,D
        RET

        ; --- START PROC L32EE ---
L32EE:  LD      DE,(0FC68h)
        CALL    L32E8
        RET     C
        PUSH    DE
        CALL    L33E0
        POP     DE
        LD      E,00h
        CALL    L3346
        EX      DE,HL
        ; --- START PROC L3301 ---
L3301:  LD      HL,(0FCBEh)
        SBC     HL,DE
        RET     C
        RET     Z
        LD      B,H
        LD      C,L
        LD      HL,0050h
        ADD     HL,DE
        CALL    L3364
        DEC     HL
        EX      DE,HL
        LD      HL,0FFB1h
        ADD     HL,DE
        JP      L2FF2

        ; --- START PROC L331A ---
L331A:  LD      DE,(0FC68h)
        ; --- START PROC L331E ---
L331E:  CALL    L3346
        CALL    L3338
        LD      C,D
        CALL    L33BE
        INC     HL
        LD      A,(HL)
        INC     E
        CP      E
        JR      C,L3330
        LD      (HL),00h
L3330:  INC     HL
        LD      A,(HL)
        CP      E
        JR      NC,L3336
        LD      (HL),E
L3336:  DEC     E
        RET

        ; --- START PROC L3338 ---
L3338:  OUT     (C),A
        SET     3,C
        LD      A,(0FC6Ah)
        OUT     (C),A
        RET

        ; --- START PROC L3342 ---
L3342:  LD      DE,(0FC68h)
        ; --- START PROC L3346 ---
L3346:  LD      H,00h
        LD      L,D
        ADD     HL,HL
        ADD     HL,HL
        ADD     HL,HL
        ADD     HL,HL
        LD      B,H
        LD      C,L
        ADD     HL,HL
        ADD     HL,HL
        ADD     HL,BC
        LD      B,H
        LD      C,L
        LD      HL,0FC66h
        BIT     3,(HL)
        LD      L,E
        LD      H,00h
        JR      Z,L3360
        SLA     L
L3360:  ADD     HL,BC
        LD      C,H
        LD      B,L
        RET

        ; --- START PROC L3364 ---
L3364:  CALL    L33AA
        RET     Z
L3368:  EXX
        LD      C,H
        LD      B,L
        IN      A,(C)
        EX      AF,AF'
        SET     3,C
        IN      A,(C)
        LD      C,D
        LD      B,E
        OUT     (C),A
        RES     3,C
        EX      AF,AF'
        OUT     (C),A
        INC     HL
        INC     DE
        EXX
        DJNZ    L3368
        DEC     C
        JR      NZ,L3368
        EXX
        RES     3,D
        RET

        ; --- START PROC L3387 ---
L3387:  CALL    L33AA
        RET     Z
L338B:  EXX
        LD      C,H
        LD      B,L
        IN      A,(C)
        EX      AF,AF'
        SET     3,C
        IN      A,(C)
        LD      C,D
        LD      B,E
        OUT     (C),A
        RES     3,C
        EX      AF,AF'
        OUT     (C),A
        DEC     HL
        DEC     DE
        EXX
        DJNZ    L338B
        DEC     C
        JR      NZ,L338B
        EXX
        RES     3,D
        RET

        ; --- START PROC L33AA ---
L33AA:  PUSH    HL
        PUSH    DE
        EXX
        POP     DE
        SET     3,D
        POP     HL
        EXX
        DEC     BC
        LD      A,B
        INC     C
        INC     A
        LD      B,C
        LD      C,A
        OR      B
        RET

        ; --- START PROC L33BA ---
L33BA:  LD      BC,(0FC69h)
        ; --- START PROC L33BE ---
L33BE:  LD      B,00h
        LD      HL,0FC71h
        ADD     HL,BC
        ADD     HL,BC
        ADD     HL,BC
        RET

        ; --- START PROC L33C7 ---
L33C7:  LD      HL,0FC6Bh
        ; --- START PROC L33CA ---
L33CA:  LD      A,(0FC6Ch)
        SUB     (HL)
        INC     A
        LD      C,(HL)
L33D0:  CALL    L33BE
        LD      C,A
        ADD     A,A
        ADD     A,C
        LD      B,A
        ; --- START PROC L33D7 ---
L33D7:  SUB     A
L33D8:  LD      (HL),A
        INC     HL
        DJNZ    L33D8
        RET

        ; --- START PROC L33DD ---
L33DD:  LD      A,(0FC6Bh)
        ; --- START PROC L33E0 ---
L33E0:  LD      C,A
        CALL    L33BE
        LD      D,H
        LD      E,L
        LD      A,(0FC6Ch)
        SUB     C
        JR      Z,L33F5
        LD      C,A
        ADD     A,A
        ADD     A,C
        LD      C,A
        INC     HL
        INC     HL
        INC     HL
        LDIR
L33F5:  SUB     A
        LD      (DE),A
        INC     DE
        LD      (DE),A
        INC     DE
        LD      (DE),A
        RET

        ; --- START PROC L33FC ---
L33FC:  LD      C,A
        LD      HL,0FC6Ch
        LD      A,(HL)
        SUB     C
        LD      C,(HL)
        CALL    L33BE
        INC     HL
        INC     HL
        LD      D,H
        LD      E,L
        JR      Z,L3415
        LD      C,A
        ADD     A,A
        ADD     A,C
        LD      C,A
        DEC     HL
        DEC     HL
        DEC     HL
        LDDR
L3415:  SUB     A
        LD      (DE),A
        DEC     DE
        LD      (DE),A
        DEC     DE
        LD      (DE),A
        RET

L341C:  ADD     A,E
        ADD     A,L
        SUB     D
        SBC     A,B
        SUB     L
        ADC     A,E
        ADD     A,(HL)
        ADD     A,H
        ADD     A,D
        ADD     A,C
        LD      B,D
        LD      B,C
        LD      D,E
        LD      C,C
        LD      B,E
        JR      NZ,L342D
L342D:  NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        LD      C,H
        LD      C,A
        LD      B,A
        LD      C,A
        JR      NZ,L343D
L343D:  NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        LD      D,B
        LD      D,D
        LD      C,C
        LD      C,(HL)
        LD      D,H
        JR      NZ,L344F
L344F:  NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        LD      D,H
        LD      E,C
        LD      D,B
        LD      B,L
        JR      NZ,L345F
L345F:  NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        LD      B,E
        LD      C,A
        LD      D,B
        LD      E,C
        JR      NZ,L3470
L3470:  NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        LD      HL,(L2A2E)
        DEC     C
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        LD      HL,(422Eh)
        LD      B,C
        LD      D,E
        DEC     C
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        LD      HL,(4C2Eh)
        LD      C,A
        LD      B,A
        DEC     C
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        LD      HL,(542Eh)
        LD      E,B
        LD      D,H
        DEC     C
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        LD      HL,(412Eh)
        LD      C,(HL)
        LD      C,(HL)
        DEC     C
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        NOP
        ; --- START PROC L34D0 ---
L34D0:  LD      HL,0FCC3h
        LD      A,B
        OR      A
        RET     Z
        LD      A,(DE)
        INC     DE
        SUB     30h             ; '0'
        RET     C
        CP      0Ah
        CCF
        RET     C
        INC     A
        CALL    L34EF
        LD      B,11h
L34E5:  LD      A,(DE)
        LD      (HL),A
        INC     HL
        OR      A
        JR      Z,L34EC
        INC     DE
L34EC:  DJNZ    L34E5
        RET

        ; --- START PROC L34EF ---
L34EF:  LD      HL,0FCB2h
        LD      BC,0011h
L34F5:  ADD     HL,BC
        DEC     A
        JR      NZ,L34F5
        RET

        ; --- START PROC L34FA ---
L34FA:  LD      A,(0FC63h)
        OR      A
        LD      A,0FFh
        RET     NZ
        ; --- START PROC L3501 ---
L3501:  IN      A,(1Bh)
        AND     01h
        RET     Z
        OR      0FFh
        RET

        ; --- START PROC L3509 ---
L3509:  CALL    L34FA
        JR      Z,L3509
        PUSH    HL
        PUSH    BC
        CALL    L3522
        POP     BC
        POP     HL
        RET

        ; --- START PROC L3516 ---
L3516:  LD      A,B
        CALL    L34EF
        LD      (0FC64h),HL
        LD      A,0FFh
        LD      (0FC63h),A
        ; --- START PROC L3522 ---
L3522:  CALL    L3535
        RET     NZ
        CALL    L3552
        LD      HL,341Ch
        LD      B,0Ah
L352E:  CP      (HL)
        JR      Z,L3516
        INC     HL
        DJNZ    L352E
        RET

        ; --- START PROC L3535 ---
L3535:  LD      A,(0FC63h)
        OR      A
        RET     Z
        LD      HL,(0FC64h)
        LD      A,(HL)
        INC     HL
        LD      (0FC64h),HL
        OR      A
        JR      NZ,L354A
        ; --- START PROC L3545 ---
L3545:  LD      HL,0FC63h
        LD      (HL),A
        RET

        ; --- START PROC L354A ---
L354A:  PUSH    AF
        LD      A,(HL)
        OR      A
        CALL    Z,L3545
        POP     AF
        RET

        ; --- START PROC L3552 ---
L3552:  CALL    L3501
        JR      Z,L3552
        IN      A,(1Ah)
        CP      20h             ; ' '
        RET     NC
        PUSH    BC
        LD      C,A
        IN      A,(1Bh)
        ADD     A,A
        LD      A,C
        POP     BC
        RET     C
        PUSH    HL
        PUSH    BC
        JP      P,L3579
        LD      C,A
        LD      HL,3589h
        LD      B,09h
L356F:  LD      A,(HL)
        CP      C
        INC     HL
        LD      A,(HL)
        JR      Z,L3586
        INC     HL
        DJNZ    L356F
        LD      A,C
L3579:  LD      HL,359Bh
        LD      B,05h
L357E:  CP      (HL)
        JR      Z,L3586
        INC     HL
        DJNZ    L357E
        ADD     A,80h
L3586:  POP     BC
        POP     HL
        RET

L3589:  RLA
        ADC     A,B
        INC     E
        ADC     A,D
        LD      D,87h
        ADD     HL,DE
        ADC     A,C
        INC     D
        ADC     A,H
        LD      C,8Dh
        RRCA
        SUB     B
        LD      DE,1D93h
        ADD     A,B
        EX      AF,AF'
        ADD     HL,BC
        LD      A,(BC)
        DEC     C
        DEC     DE
        ; --- START PROC L35A0 ---
L35A0:  PUSH    BC
        PUSH    DE
        INC     DE
        INC     DE
        CALL    L362C
        CALL    L363A
        PUSH    HL
        CALL    L360A
        EX      (SP),HL
        CALL    L38DA
        CALL    L305A
        POP     HL
        CALL    L3612
        POP     DE
        POP     BC
        JR      L35C4

        ; --- START PROC L35BD ---
L35BD:  LD      B,00h
        ; --- START PROC L35BF ---
L35BF:  PUSH    BC
        CALL    L362C
        POP     BC
        ; --- START PROC L35C4 ---
L35C4:  LD      A,B
        LD      (0FD85h),A
        SUB     A
        LD      (0FD84h),A
        LD      (0FD82h),DE
L35D0:  CALL    L2DB6
        OR      A
        JR      Z,L35D0
        LD      C,A
        LD      HL,3662h
        CALL    L3654
        JR      Z,L35E4
        CALL    L3646
        JR      L35D0

L35E4:  LD      IX,(0FD82h)
        LD      (IX+01h),00h
        LD      (IX+02h),00h
        PUSH    BC
L35F1:  CALL    L3653
        POP     HL
        LD      A,L
L35F6:  JR      C,L35D0
        PUSH    AF
        PUSH    BC
        CALL    L36F7
        POP     BC
        POP     AF
        LD      DE,(0FD82h)
        LD      L,C
        LD      H,00h
        INC     HL
        INC     HL
        ADD     HL,DE
        RET

        ; --- START PROC L360A ---
L360A:  SUB     A
L360B:  LD      (0FC70h),A
        LD      HL,(0FC68h)
        RET

        ; --- START PROC L3612 ---
L3612:  LD      A,(0FC70h)
L3615:  OR      A
        JR      Z,L3629
        LD      E,A
        LD      A,H
        OR      A
        JR      Z,L3629
        PUSH    HL
        CALL    L3A38
        POP     HL
L3622:  JR      Z,L3629
        LD      A,E
        DEC     A
        DEC     H
        JR      NZ,L3615
        ; --- START PROC L3629 ---
L3629:  JP      L30A6

        ; --- START PROC L362C ---
L362C:  CALL    L39C5
        LD      A,(0FC68h)
        LD      (IX+01h),A
L3635:  SET     7,(IX+00h)
        RET

        ; --- START PROC L363A ---
L363A:  LD      A,(HL)
        PUSH    AF
        LD      (HL),00h
        PUSH    HL
        CALL    L38DA
        POP     HL
        POP     AF
        LD      (HL),A
        RET

        ; --- START PROC L3646 ---
L3646:  LD      HL,3675h
        CALL    L3654
        JP      NZ,L3704
        LD      DE,(0FC68h)
        ; --- START PROC L3653 ---
L3653:  JP      (HL)

        ; --- START PROC L3654 ---
L3654:  LD      B,(HL)
L3655:  INC     HL
        LD      A,(HL)
        INC     HL
        CP      C
        LD      A,(HL)
        INC     HL
        JR      Z,L365F
        DJNZ    L3655
L365F:  LD      H,(HL)
        LD      L,A
        RET

L3662:  LD      B,1Bh
        SBC     A,D
        JR      C,L3674
        OR      A
        JR      C,L35F1+1       ; reference not aligned to instruction
        OR      C
        JR      C,L35F6+1       ; reference not aligned to instruction
        OR      C
        JR      C,L360B+2       ; reference not aligned to instruction
        SBC     A,A
        JR      C,L35F1+2       ; reference not aligned to instruction
        SBC     A,A
L3674:  JR      C,L368C
        EX      AF,AF'
        LD      H,38h           ; '8'
        LD      A,A
        LD      H,38h           ; '8'
        LD      A,(BC)
        CCF
        SCF
        ADD     HL,BC
        CP      B
        LD      (HL),97h
        INC     SP
        SCF
        SBC     A,H
        CCF
        SCF
        SBC     A,C
        DEC     DE
        SCF
        SUB     (HL)
L368C:  DAA
        SCF
        SUB     H
        ADD     A,H
        ADD     HL,SP
        SUB     C
        DEC     L
        JR      C,L3622+1       ; reference not aligned to instruction
        PUSH    HL
        SCF
        ADC     A,A
        LD      D,E
        SCF
        ADC     A,C
        SUB     H
        ADD     HL,SP
        ADD     A,A
        ADC     A,C
        ADD     HL,SP
        ADC     A,H
        LD      A,A
        ADD     HL,SP
        ADC     A,L
        DEC     E
        JR      C,L3635+2       ; reference not aligned to instruction
        RET     PO
        LD      (HL),93h
        LD      (IX+14h),0C5h
        LD      (HL),0Eh
        NOP*

        RRCA
        OUT     (36h),A         ; '6'
        LD      DE,36CCh
L36B8:  LD      C,09h
        CALL    L3704
        LD      A,(0FC68h)
        AND     07h
        JR      NZ,L36B8
        RET

L36C5:  LD      HL,2FECh
        LD      A,08h
        JR      L36D8

L36CC:  LD      HL,32EEh
        LD      A,01h
        JR      L36D8

L36D3:  LD      HL,32B4h
        LD      A,02h
L36D8:  CALL    L3935
        RET     C
        JP      (HL)

L36DD:  LD      A,40h           ; '@'
        RET

L36E0:  LD      A,80h
        LD      HL,0FD84h
        XOR     (HL)
        LD      (HL),A
        BIT     7,A
        JR      NZ,L36FE+1      ; reference not aligned to instruction
        JR      L36FC

L36ED:  LD      A,04h
        CALL    L3935
        RET     C
        LD      HL,2FDBh
        PUSH    HL
        ; --- START PROC L36F7 ---
L36F7:  LD      HL,0FD84h
        RES     7,(HL)
L36FC:  LD      E,60h           ; '`'
L36FE:  LD      BC,661Eh
        JP      L30F3

        ; --- START PROC L3704 ---
L3704:  LD      A,(0FD84h)
        AND     80h
        JR      NZ,L3714
        PUSH    BC
        CALL    L39D6
        POP     BC
        LD      A,C
        JP      C,L3907+1       ; reference not aligned to instruction
L3714:  LD      L,C
        CALL    L3755
        JP      L321E

L371B:  CALL    L3933
        JR      NC,L3724
        CALL    L39D6
        RET     NC
L3724:  JP      L321E

L3727:  CALL    L3933
        JR      NC,L3730
        CALL    L39E4
        RET     NC
L3730:  JP      L3219

L3733:  CALL    L3933
        JR      NC,L373C
        CALL    L3A09
        RET     NC
L373C:  JP      L3223

L373F:  CALL    L3933
        JR      NC,L3748
        CALL    L39F2
        RET     NC
L3748:  CALL    L3A33
        RET     Z
        CALL    L3A2E
        RET     Z
        JP      L3228

L3753:  LD      L,20h           ; ' '
        ; --- START PROC L3755 ---
L3755:  PUSH    HL
        CALL    L39A7
        PUSH    HL
        LD      A,(0FC69h)
        CALL    L39F2
        POP     HL
        JR      C,L3769
        LD      A,(0FC68h)
        CP      L
        JR      NC,L376A
L3769:  LD      A,L
L376A:  PUSH    HL
        INC     A
        CALL    L3A24
        POP     HL
        LD      A,H
        CALL    NC,L37AE
        CALL    L3342
        PUSH    HL
        CALL    L39A7
        LD      C,H
        CALL    L39C9
        INC     (IX+02h)
        LD      A,(0FC66h)
        CP      (IX+02h)
        JR      NC,L378D
        LD      (IX+02h),A
L378D:  EX      DE,HL
        CALL    L3346
        POP     BC
        PUSH    HL
        SBC     HL,BC
        LD      B,H
        LD      C,L
        POP     HL
        LD      D,H
        LD      E,L
        DEC     HL
        JR      C,L37A6
        CALL    L3894
        JR      Z,L37A3
        DEC     HL
L37A3:  CALL    L3387
L37A6:  POP     HL
        LD      A,L
        CALL    L3907+1         ; reference not aligned to instruction
        JP      L3219

        ; --- START PROC L37AE ---
L37AE:  CALL    L3A33
        JR      NZ,L37CF
        PUSH    AF
        CALL    L360A
        PUSH    HL
        CALL    L30D9+1         ; reference not aligned to instruction
        LD      HL,(0FC6Bh)
        LD      L,00h
        CALL    L30A6
        CALL    L3228
        POP     HL
        CALL    L3612
        CALL    L30D9
        POP     AF
        RET

L37CF:  CALL    L3A2E
        RET     Z
        INC     A
        LD      C,A
        CALL    L39C9
        LD      A,(IX+02h)
        OR      A
        LD      D,C
        JP      NZ,L32B8
        RES     7,(IX+00h)
        RET

L37E5:  CALL    L39A7
        LD      A,H
        LD      HL,(0FC68h)
        SUB     H
        RET     C
        INC     A
        LD      B,A
        CALL    L30D9+1         ; reference not aligned to instruction
        LD      HL,(0FC68h)
        PUSH    HL
        CALL    L3801
        CALL    L30D9
        POP     HL
        JP      L30A6

        ; --- START PROC L3801 ---
L3801:  PUSH    HL
        PUSH    BC
        CALL    L30A6
        CALL    L305A
        POP     BC
        POP     HL
        DEC     B
        RET     Z
        INC     H
        LD      L,00h
        PUSH    BC
        CALL    L30A6
        POP     BC
L3815:  PUSH    BC
        CALL    L32EE
        POP     BC
        DJNZ    L3815
        RET

L381D:  CALL    L39E4
        RET     NC
        CALL    L382A
        JR      L381D

L3826:  CALL    L39E4
        RET     NC
        ; --- START PROC L382A ---
L382A:  CALL    L3219
        CALL    L39D6
        RET     NC
        LD      DE,(0FC68h)
        LD      B,00h
L3837:  PUSH    BC
        CALL    L3346
        IN      A,(C)
        POP     BC
        CP      09h
        JR      NZ,L3851
        INC     B
        INC     E
        LD      A,E
        AND     07h
        JR      NZ,L3837
L3849:  PUSH    BC
        CALL    L3851
        POP     BC
        DJNZ    L3849
        RET

        ; --- START PROC L3851 ---
L3851:  CALL    L39A7
        LD      C,H
        CALL    L39C9
        DEC     (IX+02h)
        JP      P,L3867
        INC     (IX+02h)
        DEC     (IX-01h)
        JP      P,L3867
L3867:  EX      DE,HL
        CALL    L3346
        PUSH    HL
        CALL    L3342
        EX      (SP),HL
        POP     BC
        SBC     HL,BC
        PUSH    BC
        EX      (SP),HL
        POP     BC
        RET     Z
        RET     C
        LD      D,H
        LD      E,L
        DEC     BC
        INC     HL
        CALL    L3894
        JR      Z,L3883
        DEC     BC
        INC     HL
L3883:  CALL    L3364
        LD      B,E
        LD      C,D
        LD      A,20h           ; ' '
        OUT     (C),A
        CALL    L391D
        SET     3,C
        OUT     (C),A
        RET

        ; --- START PROC L3894 ---
L3894:  LD      A,(0FC66h)
        SUB     50h             ; 'P'
        RET

L389A:  CALL    L397F
        SUB     A
        RET

L389F:  LD      HL,(0FC68h)
        PUSH    HL
        LD      A,20h           ; ' '
        CALL    L38B3
        POP     HL
        RET     C
        PUSH    BC
        CALL    L30A6
        POP     BC
        SUB     A
        RET

L38B1:  LD      A,80h
        ; --- START PROC L38B3 ---
L38B3:  CALL    L3935
        RET     C
        CALL    L3941
        JR      C,L392C
        PUSH    BC
        CALL    L3984
        LD      DE,(0FD82h)
        INC     DE
        INC     DE
        PUSH    DE
        CALL    L38DA
        POP     DE
        CALL    L38D0
        POP     BC
        RET

        ; --- START PROC L38D0 ---
L38D0:  LD      A,(DE)
        OR      A
        RET     Z
        LD      C,A
        CALL    L2CDC
        INC     DE
        JR      L38D0

        ; --- START PROC L38DA ---
L38DA:  CALL    L30D9+1         ; reference not aligned to instruction
        CALL    L38E7
        JP      L30D9

        ; --- START PROC L38E3 ---
L38E3:  CALL    L38FC
        ; --- START PROC L38E6 ---
L38E6:  INC     DE
        ; --- START PROC L38E7 ---
L38E7:  LD      A,(DE)
        OR      A
        RET     Z
        CP      09h
        JR      NZ,L38E3
L38EE:  LD      A,09h
        CALL    L38FC
        LD      A,(0FC68h)
        AND     07h
        JR      NZ,L38EE
        JR      L38E6

        ; --- START PROC L38FC ---
L38FC:  PUSH    DE
        PUSH    BC
        CALL    L3904
        POP     BC
        POP     DE
        RET

        ; --- START PROC L3904 ---
L3904:  LD      HL,0FCC1h
L3907:  LD      IX,0FCC2h
        LD      C,A
        LD      A,(HL)
        CALL    L3920
        LD      E,A
        LD      A,40h           ; '@'
        CALL    L3935
        LD      A,C
        JP      C,L2F5A
        JP      L2D91

        ; --- START PROC L391D ---
L391D:  LD      A,(0FCC1h)
        ; --- START PROC L3920 ---
L3920:  PUSH    BC
        AND     27h             ; '''
        LD      C,A
        LD      A,(0FC6Ah)
        AND     0D8h
        OR      C
        POP     BC
        RET

        ; --- START PROC L392C ---
L392C:  LD      C,07h
        CALL    L2DE1
        SCF
        RET

        ; --- START PROC L3933 ---
L3933:  LD      A,10h
        ; --- START PROC L3935 ---
L3935:  PUSH    HL
        LD      HL,0FD85h
        AND     (HL)
        POP     HL
        LD      A,(0FC69h)
        RET     NZ
        SCF
        RET

        ; --- START PROC L3941 ---
L3941:  CALL    L30D9+1         ; reference not aligned to instruction
        CALL    L3979
        PUSH    BC
        LD      HL,(0FC68h)
        PUSH    HL
        CALL    L3984
L394F:  LD      HL,(0FC68h)
        POP     DE
        POP     BC
        OR      A
        SBC     HL,DE
        CALL    Z,L3979
        PUSH    BC
        PUSH    DE
        CALL    L39D6
        JR      NC,L3966
        CALL    L3A3D
        JR      NC,L394F
L3966:  POP     HL
        POP     BC
        PUSH    AF
        PUSH    BC
        PUSH    HL
        CALL    L3979
        SUB     A
        CALL    L3AAD
        CALL    L30D9
        POP     HL
        POP     BC
        POP     AF
        RET

        ; --- START PROC L3979 ---
L3979:  LD      HL,(0FD82h)
        INC     HL
        LD      C,(HL)
        RET

        ; --- START PROC L397F ---
L397F:  CALL    L39A7
        JR      L39A4

        ; --- START PROC L3984 ---
L3984:  CALL    L39B6
        JR      L39A4

L3989:  LD      A,(0FC69h)
        CALL    L3A09
        JR      NC,L3984
        SUB     A
        JR      L39A0

L3994:  LD      A,(0FC69h)
        CALL    L39F2
        JR      NC,L397F
        LD      A,(0FC66h)
        DEC     A
L39A0:  LD      HL,(0FC68h)
        LD      L,A
        ; --- START PROC L39A4 ---
L39A4:  JP      L30A6

        ; --- START PROC L39A7 ---
L39A7:  LD      A,(0FC69h)
L39AA:  CALL    L39F2
        INC     A
        JR      C,L39AA
        DEC     A
        LD      H,A
        LD      L,(IX+02h)
        RET

        ; --- START PROC L39B6 ---
L39B6:  LD      A,(0FC69h)
L39B9:  CALL    L3A09
        DEC     A
        JR      C,L39B9
        INC     A
        LD      H,A
        LD      L,(IX+01h)
        RET

        ; --- START PROC L39C5 ---
L39C5:  LD      BC,(0FC69h)
        ; --- START PROC L39C9 ---
L39C9:  LD      B,00h
        LD      IX,0FC71h
        ADD     IX,BC
        ADD     IX,BC
        ADD     IX,BC
        RET

        ; --- START PROC L39D6 ---
L39D6:  LD      DE,(0FC68h)
        LD      A,D
        CALL    L39F2
        RET     C
        LD      A,E
        CP      (IX+02h)
        RET

        ; --- START PROC L39E4 ---
L39E4:  LD      DE,(0FC68h)
        LD      A,D
        CALL    L3A09
        RET     C
        LD      A,(IX+01h)
        CP      E
        RET

        ; --- START PROC L39F2 ---
L39F2:  LD      C,A
        CALL    L39C9
        CALL    L3A2E
        RET     Z
        CALL    L3A33
        RET     Z
        OR      A
        BIT     7,(IX+03h)
        RET     NZ
        LD      A,(IX+02h)
        JR      L3A1E

        ; --- START PROC L3A09 ---
L3A09:  LD      C,A
        CALL    L39C9
        CALL    L3A38
        RET     Z
        CALL    L3A29
        RET     Z
        OR      A
        BIT     7,(IX+00h)
        RET     NZ
        LD      A,(IX-01h)
        ; --- START PROC L3A1E ---
L3A1E:  CALL    L3A24
        LD      A,C
        CCF
        RET

        ; --- START PROC L3A24 ---
L3A24:  LD      HL,0FC66h
        CP      (HL)
        RET

        ; --- START PROC L3A29 ---
L3A29:  LD      HL,3AAEh
        CP      (HL)
        RET

        ; --- START PROC L3A2E ---
L3A2E:  LD      HL,0FC67h
        CP      (HL)
        RET

        ; --- START PROC L3A33 ---
L3A33:  LD      HL,0FC6Ch
        CP      (HL)
        RET

        ; --- START PROC L3A38 ---
L3A38:  LD      HL,0FC6Bh
        CP      (HL)
        RET

        ; --- START PROC L3A3D ---
L3A3D:  CALL    L3A71
        CP      09h
        JR      NZ,L3A6A
        LD      B,00h
L3A46:  PUSH    BC
        CALL    L321E
        POP     BC
        LD      A,(0FC68h)
        AND     07h
        LD      A,09h
        JR      Z,L3A9F
        INC     B
        PUSH    BC
        CALL    L3A71
        POP     BC
        CP      09h
        JR      Z,L3A46
        LD      C,A
L3A5F:  LD      A,20h           ; ' '
        PUSH    BC
        CALL    L3A9F
        POP     BC
        RET     C
        DJNZ    L3A5F
        LD      A,C
L3A6A:  CALL    L3A9F
        CALL    NC,L321E
        RET

        ; --- START PROC L3A71 ---
L3A71:  CALL    L3342
        IN      A,(C)
        EX      AF,AF'
        LD      A,40h           ; '@'
        CALL    L3935
        JR      C,L3A9D
        SET     3,C
        IN      L,(C)
        CALL    L391D
        OUT     (C),A
        EX      AF,AF'
        BIT     5,L
        JR      NZ,L3A97
        CP      20h             ; ' '
        RET     NC
        CP      09h
        RET     Z
        SET     5,L
        OUT     (C),L
        RET

L3A97:  SUB     40h             ; '@'
        RET     NC
        ADD     A,40h           ; '@'
        RET

L3A9D:  EX      AF,AF'
        RET

        ; --- START PROC L3A9F ---
L3A9F:  PUSH    AF
        LD      HL,(0FD82h)
        LD      A,(HL)
        INC     HL
        DEC     A
        CP      (HL)
        POP     BC
        LD      A,B
        SCF
        RET     Z
        LD      C,(HL)
        INC     (HL)
        ; --- START PROC L3AAD ---
L3AAD:  LD      B,00h
        INC     HL
        ADD     HL,BC
        LD      (HL),A
        RET

        ; --- START PROC L3AB3 ---
L3AB3:  PUSH    DE
        LD      B,20h           ; ' '
        SUB     A
L3AB7:  LD      (DE),A
        INC     DE
        DJNZ    L3AB7
        POP     DE
        PUSH    DE
        INC     HL
        LD      A,(HL)
        DEC     HL
        CP      3Ah             ; ':'
        JR      NZ,L3ACE
        CALL    L3B1A
        JR      Z,L3ACB
        SUB     40h             ; '@'
L3ACB:  LD      (DE),A
        INC     HL
        INC     HL
L3ACE:  INC     DE
        LD      C,00h
        LD      B,08h
        CALL    L3AEB
        PUSH    HL
        CALL    L3B36
        CP      2Eh             ; '.'
        JR      NZ,L3AE0+1      ; reference not aligned to instruction
        POP     AF
        INC     HL
L3AE0:  LD      A,0E1h
        LD      B,03h
        CALL    L3AEB
        POP     DE
        LD      A,(HL)
        OR      A
        RET

        ; --- START PROC L3AEB ---
L3AEB:  CALL    L3B1A
        JR      NC,L3B03
        JR      NZ,L3B12
        INC     C
        CP      3Fh             ; '?'
        JR      Z,L3B03
        DEC     C
        LD      A,B
        ADD     A,C
        LD      C,A
        LD      A,3Fh           ; '?'
        CALL    L3B14
        INC     HL
        JR      L3B08

L3B03:  LD      (DE),A
        INC     DE
        INC     HL
        DJNZ    L3AEB
L3B08:  CALL    L3B1A
        INC     HL
        JR      NC,L3B08
        JR      Z,L3B08
        DEC     HL
        RET

        ; --- START PROC L3B12 ---
L3B12:  LD      A,20h           ; ' '
        ; --- START PROC L3B14 ---
L3B14:  LD      (DE),A
        INC     DE
        DJNZ    L3B14
        LD      A,(HL)
        RET

        ; --- START PROC L3B1A ---
L3B1A:  LD      A,(HL)
        CALL    L3B3D
        JR      C,L3B25
        CALL    L3B2D
        OR      A
        RET

L3B25:  CP      2Ah             ; '*'
        SCF
        RET     Z
        CP      3Fh             ; '?'
        SCF
        RET

        ; --- START PROC L3B2D ---
L3B2D:  CP      61h             ; 'a'
        RET     C
        CP      7Bh             ; '{'
        RET     NC
        SUB     20h             ; ' '
        RET

        ; --- START PROC L3B36 ---
L3B36:  LD      A,(HL)
        CP      20h             ; ' '
        RET     NZ
        INC     HL
        JR      L3B36

        ; --- START PROC L3B3D ---
L3B3D:  OR      A
        RLCA
        RRA
        RET     C
        PUSH    HL
        PUSH    BC
        LD      HL,3B61h
        CALL    L3B4D
        POP     BC
        POP     HL
        LD      A,(HL)
        RET

        ; --- START PROC L3B4D ---
L3B4D:  PUSH    AF
        AND     0F8h
        RRCA
        RRCA
        RRCA
        LD      C,A
        POP     AF
        LD      B,00h
        ADD     HL,BC
        AND     07h
        INC     A
        LD      B,A
        LD      A,(HL)
L3B5D:  ADD     A,A
        DJNZ    L3B5D
        RET

L3B61:  RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        PUSH    AF
        EX      DE,HL
        NOP
        CCF
        NOP
        NOP
        NOP
        RRA
        ADD     A,B
        NOP
        NOP
        RRA
        ; --- START PROC L3B71 ---
L3B71:  IN      A,(1Dh)
        CPL
        AND     10h
        RET     Z
        OR      0FFh
        RET

        ; --- START PROC L3B7A ---
L3B7A:  PUSH    HL
        LD      HL,0FC62h
        CALL    L3B83
        POP     HL
        RET

        ; --- START PROC L3B83 ---
L3B83:  LD      A,C
        CP      0Ah
        JR      Z,L3B93
        CP      0Dh
        JR      Z,L3B90
        CP      0Ch
        JR      NZ,L3B92
L3B90:  LD      (HL),0FFh
L3B92:  INC     (HL)
L3B93:  CALL    L3B71
        JR      Z,L3B93
        LD      A,C
        OUT     (22h),A         ; '"'
        LD      A,16h
        OUT     (1Ch),A
        LD      A,06h
        OUT     (1Ch),A
        RET

L3BA4:  CALL    L3C50
        LD      HL,3C28h
        LD      DE,8000h
        LD      BC,0028h
        LDIR
        SUB     A
        OUT     (34h),A         ; '4'
L3BB5:  LD      HL,0000h
        LD      B,06h
L3BBA:  IN      A,(30h)         ; '0'
        AND     81h
        JR      Z,L3BCF
        DEC     HL
        LD      A,H
        OR      L
        JR      NZ,L3BBA
        DJNZ    L3BBA
        LD      DE,3BF8h
        CALL    L2CA3
        JR      L3BB5

L3BCF:  DI
        LD      B,0Ah
L3BD2:  LD      A,0Fh
        OUT     (30h),A         ; '0'
L3BD6:  IN      A,(34h)         ; '4'
        RLCA
        JR      NC,L3BD6
        IN      A,(30h)         ; '0'
        AND     99h
        JR      Z,L3BEB
        DJNZ    L3BD2
L3BE3:  LD      HL,3C0Eh
        EX      DE,HL
        CALL    L2CA3
        HALT
L3BEB:  LD      DE,0000h
        CALL    L3C1C
        JR      NZ,L3BE3
        LD      A,10h
        OUT     (1Ch),A
        RST     0x00
        LD      D,B
        LD      L,H
        LD      H,L
        LD      H,C
        LD      (HL),E
        LD      H,L
        JR      NZ,L3C49
L3C00:  LD      L,(HL)
        LD      (HL),E
        LD      H,L
        LD      (HL),D
        LD      (HL),H
        JR      NZ,L3C4A+1      ; reference not aligned to instruction
        LD      C,C
        LD      D,E
        LD      C,E
        RLCA
        DEC     C
        LD      A,(BC)
        NOP
        LD      B,H
        LD      C,C
        LD      D,E
        LD      C,E
        JR      NZ,L3C59
        LD      D,D
        LD      D,D
        LD      C,A
        LD      D,D
        DEC     C
        LD      A,(BC)
        RLCA
        NOP
        ; --- START PROC L3C1C ---
L3C1C:  LD      A,01h
        OUT     (32h),A         ; '2'
L3C20:  CALL    8000h
        IN      A,(30h)         ; '0'
        AND     9Dh
        RET

L3C28:  LD      A,10h
        OUT     (1Ch),A
        CALL    800Bh
        SUB     A
        OUT     (1Ch),A
        RET

L3C33:  LD      HL,801Eh
        LD      C,34h           ; '4'
        LD      A,8Ch
        OUT     (30h),A         ; '0'
        IN      B,(C)
        JR      Z,L3C46
        RET     M
        IN      B,(C)
        JP      NZ,8014h
L3C46:  IN      A,(33h)         ; '3'
        LD      (DE),A
L3C49:  INC     DE
L3C4A:  IN      B,(C)
        JP      NZ,8014h
        JP      (HL)

        ; --- START PROC L3C50 ---
L3C50:  CALL    L3C8F
        CALL    L3CCB
        CALL    L3D3D
L3C59:  CALL    L3D2C
        CALL    L3C9B
        LD      HL,3C7Fh
        LD      BC,1019h
L3C65:  LD      A,B
        DEC     A
        OUT     (18h),A
        OUTI
        JR      NZ,L3C65
        LD      A,84h
        OUT     (20h),A         ; ' '
        LD      A,02h
        OUT     (1Ch),A
        SUB     A
        OUT     (23h),A         ; '#'
        CALL    L31C1
        SUB     A
        JP      L3200

L3C7F:  NOP
        NOP
        NOP
        NOP
        RRCA
        LD      H,B
        RLCA
        AND     B
        INC     E
        ADD     HL,DE
        LD      B,1Fh
        LD      A,(5060h)
        LD      A,A
        ; --- START PROC L3C8F ---
L3C8F:  LD      HL,3CB2h
        LD      DE,0FC5Fh
        LD      BC,0007h
        LDIR
        RET

        ; --- START PROC L3C9B ---
L3C9B:  LD      HL,3CB9h
        LD      DE,0FC66h
        LD      BC,000Bh
        LDIR
        LD      HL,3CC4h
        LD      DE,0FCBCh
        LD      BC,0007h
        LDIR
        RET

L3CB2:  NOP
        RST     0x38
        NOP
        NOP
        NOP
        JP      L28FC

L3CBA:  JR      L3CBC

L3CBC:  NOP
        RLCA
        NOP
        JR      L3CC2

L3CC1:  LD      H,B
L3CC2:  NOP
        NOP
        NOP
        NOP
        ADD     A,B
        RLCA
        RRCA
        RLCA
        INC     BC
        ; --- START PROC L3CCB ---
L3CCB:  LD      HL,3426h
        LD      DE,0FCC3h
        LD      BC,00AAh
        LDIR
        SUB     A
        LD      (0FC63h),A
        LD      HL,3D14h
        LD      D,06h
L3CDF:  LD      A,10h
        OUT     (1Ah),A
        CALL    L3D0D
        LD      A,(HL)
        INC     HL
        OUT     (1Bh),A
        CALL    L3D0D
        LD      E,03h
L3CEF:  IN      A,(1Bh)
        CALL    L3D0D
        LD      A,(HL)
        OUT     (1Ah),A
        INC     HL
        DEC     E
        JR      NZ,L3CEF
L3CFB:  IN      A,(1Bh)
        AND     04h
        JR      Z,L3CFB
        SUB     A
        OUT     (1Bh),A
        CALL    L3D0D
        DEC     D
        JR      NZ,L3CDF
        RET

L3D0B:  OUT     (1Ah),A
        ; --- START PROC L3D0D ---
L3D0D:  IN      A,(1Bh)
        AND     02h
        JR      NZ,L3D0D
        RET

L3D14:  AND     C
        LD      BC,1A15h
        AND     D
        LD      (BC),A
        JR      L3D2C

L3D1C:  AND     E
        INC     B
        LD      (DE),A
        INC     DE
        AND     H
        LD      B,05h
        RLCA
        AND     L
        DEC     BC
        INC     BC
        INC     C
        AND     (HL)
        DEC     E
        DEC     E
        DEC     E
        ; --- START PROC L3D2C ---
L3D2C:  LD      A,9Fh
        OUT     (53h),A         ; 'S'
        LD      A,0BFh
        OUT     (53h),A         ; 'S'
        LD      A,0DFh
        OUT     (53h),A         ; 'S'
        LD      A,0FFh
        OUT     (53h),A         ; 'S'
        RET

        ; --- START PROC L3D3D ---
L3D3D:  CALL    L3D76
        RET     NZ
        LD      A,06h
        OUT     (51h),A         ; 'Q'
        LD      A,07h
        OUT     (51h),A         ; 'Q'
        LD      HL,3D7Eh
        SUB     A
L3D4D:  PUSH    AF
        CALL    L3D58
        POP     AF
        INC     A
        CP      10h
        RET     Z
        JR      L3D4D

        ; --- START PROC L3D58 ---
L3D58:  LD      C,52h           ; 'R'
        LD      B,A
        CALL    L3D67
        SET     4,B
        CALL    L3D67
        RES     4,B
        SET     5,B
        ; --- START PROC L3D67 ---
L3D67:  LD      A,(HL)
        INC     HL
        ADD     A,A
        ADD     A,A
        ADD     A,A
        ADD     A,A
        LD      E,A
L3D6E:  IN      A,(51h)         ; 'Q'
        ADD     A,A
        JR      C,L3D6E
        OUT     (C),E
        RET

        ; --- START PROC L3D76 ---
L3D76:  IN      A,(1Ch)
        BIT     2,A
        RET     NZ
        BIT     4,A
        RET

L3D7E:  NOP
        NOP
        NOP
        NOP
        NOP
        RRCA
        NOP
        RRCA
        NOP
        NOP
        RRCA
        RRCA
        RRCA
        NOP
        NOP
        RRCA
        NOP
        RRCA
        RRCA
        RRCA
        NOP
        RRCA
        RRCA
        RRCA
        LD      BC,0104h
        LD      BC,0207h
        DEC     C
        DEC     B
        LD      (BC),A
        LD      C,09h
        LD      (BC),A
        LD      BC,0805h
        LD      BC,0E09h
        RRCA
        RLCA
        ADD     HL,BC
        EX      AF,AF'
        EX      AF,AF'
        EX      AF,AF'
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
L3E41:  RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
        RST     0x38
