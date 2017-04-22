;+---------------------------------------------------------------------------
; RAMFOS
; ��������������
;
; 2013-11-01 ����������������� � ���������� vinxru
;----------------------------------------------------------------------------

; ����� ������� ������ ������ ���������� ������ ������� � 10 ��������
#if FAST_PRINT
#define DY 80h
#else
#define DY 0
#endif

	.db 000h,000h,000h,000h,000h,000h,000h,000h ; 0
	.db DY|038h,038h,038h,038h,000h,000h,000h,DY|000h ; 1
	.db DY|007h,007h,007h,007h,000h,000h,000h,DY|000h ; 2
	.db DY|03Fh,03Fh,03Fh,03Fh,000h,000h,000h,DY|000h ; 3
	.db DY|000h,000h,000h,000h,007h,007h,007h,DY|007h ; 4
	.db DY|038h,038h,038h,038h,007h,007h,007h,DY|007h ; 5
	.db DY|007h,007h,007h,007h,007h,007h,007h,DY|007h ; 6
	.db DY|03Fh,03Fh,03Fh,03Fh,007h,007h,007h,DY|007h ; 7
#if ALL_CHARS
	.db DY|030h,030h,030h,030h,030h,030h,030h,DY|030h ; 8+
#else
	.db 000h,000h,000h,000h,000h,000h,000h,000h
#endif
	.db 00Ch,00Ch,03Fh,02Dh,00Ch,00Ch,012h,021h ; 9
#if ALL_CHARS
	.db DY|003h,003h,003h,003h,003h,003h,003h,DY|003h ; 10+
#else
	.db 000h,000h,000h,000h,000h,000h,000h,000h
#endif
	.db 00Ch,01Eh,03Fh,00Ch,00Ch,00Ch,00Ch,000h ; 11
#if ALL_CHARS
	.db DY|030h,030h,030h,030h,030h,030h,030h,DY|03Fh ; 12+
#else
	.db 000h,000h,000h,000h,000h,000h,000h,000h
#endif
#if ALL_CHARS
	.db 000h,000h,000h,000h,000h,000h,000h,DY|03Fh ; 13
#else
	.db 000h,000h,000h,000h,000h,000h,000h,000h
#endif
	.db 008h,00Ch,03Eh,03Fh,03Eh,00Ch,008h,000h ; 14
	.db 00Ch,00Ch,00Ch,00Ch,03Fh,01Eh,00Ch,000h ; 15
	.db DY|000h,000h,000h,000h,038h,038h,038h,DY|038h ; 16
	.db DY|038h,038h,038h,038h,038h,038h,038h,DY|038h ; 17
	.db DY|007h,007h,007h,007h,038h,038h,038h,DY|038h ; 18
	.db DY|03Fh,03Fh,03Fh,03Fh,038h,038h,038h,DY|038h ; 19
	.db DY|000h,000h,000h,000h,03Fh,03Fh,03Fh,DY|03Fh ; 20
	.db DY|038h,038h,038h,038h,03Fh,03Fh,03Fh,DY|03Fh ; 21
	.db DY|007h,007h,007h,007h,03Fh,03Fh,03Fh,DY|03Fh ; 22
	.db DY|03Fh,03Fh,03Fh,03Fh,03Fh,03Fh,03Fh,DY|03Fh ; 23
#if ALL_CHARS
	.db DY|003h,003h,003h,003h,003h,003h,003h,DY|03Fh ; 24+
#else
	.db 000h,000h,000h,000h,000h,000h,000h,000h
#endif
#if ALL_CHARS
	.db DY|020h,020h,020h,020h,020h,020h,020h,DY|020h ; 25+
#else
	.db 000h,000h,000h,000h,000h,000h,000h,000h
#endif
	.db 000h,000h,000h,000h,000h,000h,000h,000h ; 26
	.db 00Ch,00Ch,00Ch,00Ch,00Ch,00Ch,00Ch,00Ch ; 27
	.db 000h,000h,000h,03Fh,03Fh,000h,000h,000h ; 28
	.db 004h,00Ch,01Fh,03Fh,01Fh,00Ch,004h,000h ; 29
	.db 000h,03Eh,03Ch,03Ch,03Eh,027h,002h,000h ; 30
	.db 000h,000h,000h,000h,000h,000h,000h,000h ; 31
	.db 000h,000h,000h,000h,000h,000h,000h,000h ; 32
	.db 004h,004h,004h,004h,004h,000h,004h,000h ; 33
	.db 00Ah,00Ah,00Ah,000h,000h,000h,000h,000h ; 34
	.db 00Ah,00Ah,01Fh,00Ah,01Fh,00Ah,00Ah,000h ; 35
	.db 000h,011h,00Eh,00Ah,00Eh,011h,000h,000h ; 36
	.db 018h,019h,002h,004h,008h,013h,003h,000h ; 37
	.db 004h,00Ah,00Ah,00Ch,015h,012h,00Dh,000h ; 38
	.db 006h,006h,002h,004h,000h,000h,000h,000h ; 39
	.db 002h,004h,008h,008h,008h,004h,002h,000h ; 40
	.db 008h,004h,002h,002h,002h,004h,008h,000h ; 41
	.db 000h,004h,015h,00Eh,015h,004h,000h,000h ; 42
	.db 000h,004h,004h,01Fh,004h,004h,000h,000h ; 43
	.db 000h,000h,000h,000h,00Ch,00Ch,004h,008h ; 44
	.db 000h,000h,000h,01Fh,000h,000h,000h,000h ; 45
	.db 000h,000h,000h,000h,000h,00Ch,00Ch,000h ; 46
	.db 000h,001h,002h,004h,008h,010h,000h,000h ; 47
	.db 00Eh,011h,013h,015h,019h,011h,00Eh,000h ; 48
	.db 004h,00Ch,004h,004h,004h,004h,00Eh,000h ; 49
	.db 00Eh,011h,001h,006h,008h,010h,01Fh,000h ; 50
	.db 01Fh,001h,002h,006h,001h,011h,00Eh,000h ; 51
	.db 002h,006h,00Ah,012h,01Fh,002h,002h,000h ; 52
	.db 01Fh,010h,01Eh,001h,001h,011h,00Eh,000h ; 53
	.db 007h,008h,010h,01Eh,011h,011h,00Eh,000h ; 54
	.db 01Fh,001h,002h,004h,008h,008h,008h,000h ; 55
	.db 00Eh,011h,011h,00Eh,011h,011h,00Eh,000h ; 56
	.db 00Eh,011h,011h,00Fh,001h,002h,01Ch,000h ; 57
	.db 000h,00Ch,00Ch,000h,000h,00Ch,00Ch,000h ; 58
	.db 00Ch,00Ch,000h,000h,00Ch,00Ch,004h,008h ; 59
	.db 002h,004h,008h,010h,008h,004h,002h,000h ; 60
	.db 000h,000h,01Fh,000h,01Fh,000h,000h,000h ; 61
	.db 008h,004h,002h,001h,002h,004h,008h,000h ; 62
	.db 00Eh,011h,001h,002h,004h,000h,004h,000h ; 63
	.db 00Eh,011h,013h,015h,017h,010h,00Eh,000h ; 64
	.db 004h,00Ah,011h,011h,01Fh,011h,011h,000h ; 65
	.db 01Eh,011h,011h,01Eh,011h,011h,01Eh,000h ; 66
	.db 00Eh,011h,010h,010h,010h,011h,00Eh,000h ; 67
	.db 01Eh,009h,009h,009h,009h,009h,01Eh,000h ; 68
	.db 01Fh,010h,010h,01Eh,010h,010h,01Fh,000h ; 69
	.db 01Fh,010h,010h,01Eh,010h,010h,010h,000h ; 70
	.db 00Eh,011h,010h,010h,013h,011h,00Fh,000h ; 71
	.db 011h,011h,011h,01Fh,011h,011h,011h,000h ; 72
	.db 00Eh,004h,004h,004h,004h,004h,00Eh,000h ; 73
	.db 001h,001h,001h,001h,011h,011h,00Eh,000h ; 74
	.db 011h,012h,014h,018h,014h,012h,011h,000h ; 75
	.db 010h,010h,010h,010h,010h,011h,01Fh,000h ; 76
	.db 011h,01Bh,015h,015h,011h,011h,011h,000h ; 77
	.db 011h,011h,019h,015h,013h,011h,011h,000h ; 78
	.db 00Eh,011h,011h,011h,011h,011h,00Eh,000h ; 79
	.db 01Eh,011h,011h,01Eh,010h,010h,010h,000h ; 80
	.db 00Eh,011h,011h,011h,015h,012h,00Dh,000h ; 81
	.db 01Eh,011h,011h,01Eh,014h,012h,011h,000h ; 82
	.db 00Eh,011h,010h,00Eh,001h,011h,00Eh,000h ; 83
	.db 01Fh,004h,004h,004h,004h,004h,004h,000h ; 84
	.db 011h,011h,011h,011h,011h,011h,00Eh,000h ; 85
	.db 011h,011h,011h,00Ah,00Ah,004h,004h,000h ; 86
	.db 011h,011h,011h,015h,015h,015h,00Ah,000h ; 87
	.db 011h,011h,00Ah,004h,00Ah,011h,011h,000h ; 88
	.db 011h,011h,00Ah,004h,004h,004h,004h,000h ; 89
	.db 01Fh,001h,002h,00Eh,008h,010h,01Fh,000h ; 90
	.db 00Eh,008h,008h,008h,008h,008h,00Eh,000h ; 91
	.db 000h,010h,008h,004h,002h,001h,000h,000h ; 92
	.db 00Eh,002h,002h,002h,002h,002h,00Eh,000h ; 93
	.db 00Eh,011h,000h,000h,000h,000h,000h,000h ; 94
	.db 000h,000h,000h,000h,000h,000h,01Fh,000h ; 95
	.db 000h,008h,004h,002h,000h,000h,000h,000h ; 96
	.db 000h,000h,00Eh,001h,00Fh,011h,00Fh,000h ; 97
	.db 010h,010h,010h,01Eh,011h,011h,01Eh,000h ; 98
	.db 000h,000h,00Fh,010h,010h,010h,00Fh,000h ; 99
	.db 001h,001h,001h,00Fh,011h,011h,00Fh,000h ; 100
	.db 000h,000h,00Eh,011h,01Fh,010h,00Fh,000h ; 101
	.db 003h,004h,004h,01Fh,004h,004h,004h,000h ; 102
	.db 000h,000h,00Fh,011h,00Fh,001h,011h,00Eh ; 103
	.db 010h,010h,010h,01Eh,011h,011h,011h,000h ; 104
	.db 000h,004h,000h,00Ch,004h,004h,00Eh,000h ; 105
	.db 002h,000h,002h,002h,002h,012h,00Ch,000h ; 106
	.db 010h,010h,012h,014h,018h,014h,012h,000h ; 107
	.db 00Ch,004h,004h,004h,004h,004h,00Eh,000h ; 108
	.db 000h,000h,015h,01Fh,015h,015h,015h,000h ; 109
	.db 000h,000h,01Eh,011h,011h,011h,011h,000h ; 110
	.db 000h,000h,00Eh,011h,011h,011h,00Eh,000h ; 111
	.db 000h,000h,01Eh,011h,011h,01Eh,010h,010h ; 112
	.db 000h,000h,00Fh,011h,011h,00Fh,001h,001h ; 113
	.db 000h,000h,017h,018h,010h,010h,010h,000h ; 114
	.db 000h,000h,00Fh,010h,00Eh,001h,01Eh,000h ; 115
	.db 008h,008h,01Eh,008h,008h,008h,007h,000h ; 116
	.db 000h,000h,011h,011h,011h,011h,00Fh,000h ; 117
	.db 000h,000h,011h,011h,00Ah,00Ah,004h,000h ; 118
	.db 000h,000h,011h,011h,015h,015h,00Ah,000h ; 119
	.db 000h,000h,011h,00Ah,004h,00Ah,011h,000h ; 120
	.db 000h,000h,011h,00Ah,004h,004h,004h,000h ; 121
	.db 000h,000h,01Fh,002h,004h,008h,01Fh,000h ; 122
	.db 003h,004h,004h,008h,004h,004h,003h,000h ; 123
	.db 004h,004h,004h,004h,004h,004h,004h,000h ; 124
	.db 018h,004h,004h,002h,004h,004h,018h,000h ; 125
	.db 01Fh,000h,000h,000h,000h,000h,000h,000h ; 126
	.db 01Fh,01Fh,01Fh,01Fh,01Fh,01Fh,01Fh,01Fh ; 127
	.db 000h,000h,012h,015h,01Dh,015h,012h,000h ; 128
	.db 000h,000h,00Ch,002h,00Eh,012h,00Fh,000h ; 129
	.db 001h,00Eh,018h,01Eh,011h,011h,00Eh,000h ; 130
	.db 000h,000h,012h,012h,012h,012h,01Fh,001h ; 131
	.db 000h,000h,006h,00Ah,00Ah,00Ah,01Fh,011h ; 132
	.db 000h,000h,00Eh,011h,01Fh,010h,00Fh,000h ; 133
	.db 000h,004h,00Eh,015h,015h,015h,00Eh,004h ; 134
	.db 000h,000h,01Fh,010h,010h,010h,010h,000h ; 135
	.db 000h,000h,011h,00Ah,004h,00Ah,011h,000h ; 136
	.db 000h,000h,011h,013h,015h,019h,011h,000h ; 137
	.db 000h,004h,011h,013h,015h,019h,011h,000h ; 138
	.db 000h,000h,011h,012h,014h,01Ch,013h,000h ; 139
	.db 000h,000h,007h,009h,009h,009h,019h,000h ; 140
	.db 000h,000h,011h,01Bh,015h,011h,011h,000h ; 141
	.db 000h,000h,011h,011h,01Fh,011h,011h,000h ; 142
	.db 000h,000h,00Eh,011h,011h,011h,00Eh,000h ; 143
	.db 000h,000h,01Fh,011h,011h,011h,011h,000h ; 144
	.db 000h,000h,00Fh,011h,00Fh,009h,011h,000h ; 145
	.db 000h,000h,01Eh,011h,011h,01Eh,010h,010h ; 146
	.db 000h,000h,00Eh,011h,010h,011h,00Eh,000h ; 147
	.db 000h,000h,01Fh,004h,004h,004h,004h,000h ; 148
	.db 000h,000h,011h,011h,00Fh,001h,01Eh,000h ; 149
	.db 000h,000h,015h,015h,00Eh,015h,015h,000h ; 150
	.db 000h,000h,01Ch,012h,01Eh,011h,01Eh,000h ; 151
	.db 000h,000h,010h,010h,01Eh,011h,01Eh,000h ; 152
	.db 000h,000h,011h,011h,01Dh,015h,01Dh,000h ; 153
	.db 000h,000h,00Eh,011h,006h,011h,00Eh,000h ; 154
	.db 000h,000h,015h,015h,015h,015h,01Fh,000h ; 155
	.db 000h,000h,01Eh,001h,00Fh,001h,01Eh,000h ; 156
	.db 000h,000h,015h,015h,015h,015h,01Fh,001h ; 157
	.db 000h,000h,011h,011h,00Fh,001h,001h,000h ; 158
	.db 000h,000h,018h,008h,00Eh,009h,00Eh,000h ; 159
	.db 012h,015h,015h,01Dh,015h,015h,012h,000h ; 160
	.db 004h,00Ah,011h,011h,01Fh,011h,011h,000h ; 161
	.db 01Fh,010h,010h,01Eh,011h,011h,01Eh,000h ; 162
	.db 012h,012h,012h,012h,012h,012h,01Fh,001h ; 163
	.db 006h,00Ah,00Ah,00Ah,00Ah,00Ah,01Fh,011h ; 164
	.db 01Fh,010h,010h,01Eh,010h,010h,01Fh,000h ; 165
	.db 004h,01Fh,015h,015h,01Fh,004h,004h,000h ; 166
	.db 01Fh,011h,010h,010h,010h,010h,010h,000h ; 167
	.db 011h,011h,00Ah,004h,00Ah,011h,011h,000h ; 168
	.db 011h,011h,013h,015h,019h,011h,011h,000h ; 169
	.db 015h,011h,013h,015h,019h,011h,011h,000h ; 170
	.db 011h,012h,014h,018h,014h,012h,011h,000h ; 171
	.db 003h,005h,009h,009h,009h,009h,019h,000h ; 172
	.db 011h,01Bh,015h,015h,011h,011h,011h,000h ; 173
	.db 011h,011h,011h,01Fh,011h,011h,011h,000h ; 174
	.db 00Eh,011h,011h,011h,011h,011h,00Eh,000h ; 175
	.db 01Fh,011h,011h,011h,011h,011h,011h,000h ; 176
	.db 00Fh,011h,011h,00Fh,005h,009h,011h,000h ; 177
	.db 01Eh,011h,011h,01Eh,010h,010h,010h,000h ; 178
	.db 00Eh,011h,010h,010h,010h,011h,00Eh,000h ; 179
	.db 01Fh,004h,004h,004h,004h,004h,004h,000h ; 180
	.db 011h,011h,011h,00Ah,004h,008h,010h,000h ; 181
	.db 011h,015h,015h,00Eh,015h,015h,011h,000h ; 182
	.db 01Eh,011h,011h,01Eh,011h,011h,01Eh,000h ; 183
	.db 010h,010h,010h,01Eh,011h,011h,01Eh,000h ; 184
	.db 011h,011h,011h,019h,015h,015h,019h,000h ; 185
	.db 00Eh,011h,001h,006h,001h,011h,00Eh,000h ; 186
	.db 011h,015h,015h,015h,015h,015h,01Fh,000h ; 187
	.db 00Eh,011h,001h,007h,001h,011h,00Eh,000h ; 188
	.db 015h,015h,015h,015h,015h,015h,01Fh,001h ; 189
	.db 011h,011h,011h,01Fh,001h,001h,001h,000h ; 190
	.db 03Fh,03Fh,03Fh,03Fh,03Fh,03Fh,03Fh,03Fh

#undef DY