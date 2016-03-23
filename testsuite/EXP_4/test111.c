
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = 2236U;
uint16_t x5 = UINT16_MAX;
int16_t x16 = -59;
int16_t x19 = -1;
static int64_t x25 = INT64_MAX;
static int32_t t7 = -14;
static int64_t x38 = -742309376342651LL;
int8_t x40 = 21;
int32_t x56 = -1;
int16_t x67 = INT16_MIN;
volatile int64_t x78 = INT64_MAX;
static int64_t x86 = 302LL;
volatile uint64_t x89 = UINT64_MAX;
volatile int16_t x91 = 4;
uint64_t x92 = 125466772226LLU;
int32_t x93 = 39771351;
volatile uint64_t x97 = 7078LLU;
volatile int8_t x98 = 59;
volatile uint64_t t21 = 2798893LLU;
static int32_t x103 = -396;
int8_t x115 = INT8_MAX;
int32_t t24 = -73455;
int16_t x120 = -3662;
int8_t x128 = INT8_MIN;
static int32_t t27 = -510183596;
uint16_t x142 = 143U;
static int8_t x157 = INT8_MAX;
static int32_t t32 = 0;
int16_t x166 = -8933;
static volatile int16_t x170 = INT16_MIN;
static volatile int32_t t35 = -2430;
uint16_t x176 = UINT16_MAX;
int8_t x177 = -1;
volatile uint16_t x178 = 11U;
int8_t x184 = INT8_MAX;
uint32_t x185 = UINT32_MAX;
static int8_t x198 = 1;
int32_t t40 = 312724;
int16_t x204 = INT16_MAX;
uint64_t x205 = UINT64_MAX;
volatile uint64_t t43 = 9481557LLU;
volatile int16_t x215 = -1;
uint8_t x220 = UINT8_MAX;
volatile int32_t x226 = INT32_MIN;
uint32_t t47 = 2026386U;
volatile int64_t t49 = 853LL;
uint64_t x238 = 115045LLU;
static volatile int64_t x239 = 67LL;
int64_t x242 = -456165081LL;
static uint64_t x243 = UINT64_MAX;
uint64_t x252 = 4713LLU;
int32_t t53 = 7417;
int16_t x253 = INT16_MAX;
volatile int64_t x255 = -3720080826LL;
static volatile int64_t x256 = INT64_MAX;
uint64_t x258 = UINT64_MAX;
int16_t x259 = INT16_MIN;
int8_t x260 = -15;
int32_t x261 = 7289788;
int16_t x264 = -1;
volatile int32_t t56 = 2535017;
uint64_t x270 = 2084786218028178LLU;
static uint16_t x273 = 484U;
int32_t t59 = 11748854;
uint64_t x279 = 103468663699860140LLU;
int16_t x294 = INT16_MAX;
int8_t x300 = -3;
static int8_t x304 = INT8_MIN;
int8_t x310 = -7;
static uint16_t x312 = 25437U;
int8_t x314 = INT8_MAX;
uint16_t x343 = 42U;
uint8_t x353 = 49U;
int32_t x354 = 2;
static int8_t x357 = INT8_MAX;
int32_t x361 = INT32_MAX;
uint16_t x363 = UINT16_MAX;
uint32_t x372 = 216U;
int16_t x375 = INT16_MIN;
volatile int8_t x376 = INT8_MIN;
uint8_t x392 = 1U;
static volatile uint64_t x393 = 4275063939884LLU;
uint64_t t86 = 2LLU;
int64_t x406 = INT64_MAX;
int32_t t87 = 657886702;
int32_t x411 = -1256000;
int32_t x416 = -1;
volatile uint32_t t89 = UINT32_MAX;
int64_t x425 = 340921432235LL;
int32_t x427 = INT32_MAX;
int64_t t91 = 8LL;
static volatile int32_t t92 = -330;
uint16_t x433 = UINT16_MAX;
static uint32_t x435 = 14237U;
int16_t x442 = INT16_MAX;
volatile int8_t x445 = INT8_MAX;
static int32_t x454 = INT32_MIN;
int64_t x463 = -8214182LL;
int32_t t99 = 19010550;
volatile int32_t x474 = -167738;
uint64_t x475 = UINT64_MAX;
uint32_t x480 = UINT32_MAX;
static volatile int16_t x492 = INT16_MIN;
volatile uint8_t x493 = 8U;
volatile int16_t x503 = -578;
int32_t t107 = 179323;
volatile int8_t x507 = -12;
volatile uint16_t x511 = UINT16_MAX;
int16_t x513 = -73;
int32_t t110 = -80615;
int32_t t113 = 2561;
static volatile int32_t t118 = -382588043;
int8_t x554 = 3;
int16_t x555 = INT16_MIN;
uint16_t x559 = 4692U;
static int32_t t120 = -59471;
volatile int8_t x562 = INT8_MAX;
int16_t x567 = -1;
uint8_t x570 = UINT8_MAX;
volatile int64_t x579 = INT64_MIN;
volatile int64_t t124 = -2275264982LL;
int8_t x595 = -1;
static uint8_t x596 = UINT8_MAX;
volatile int64_t x599 = -1LL;
int16_t x602 = -5;
int32_t t130 = -84;
uint64_t x608 = 211688368223156824LLU;
volatile int32_t t131 = 247661439;
uint32_t x609 = 11738U;
volatile uint32_t t132 = 65742U;
int16_t x620 = INT16_MIN;
int8_t x624 = INT8_MIN;
int32_t t135 = -34;
int8_t x631 = INT8_MIN;
int64_t x634 = 73932348408LL;
int16_t x641 = INT16_MIN;
uint32_t x653 = 1400U;
int16_t x667 = INT16_MAX;
int8_t x668 = INT8_MIN;
uint16_t x670 = 31480U;
volatile int16_t x672 = INT16_MIN;
int32_t x676 = INT32_MIN;
int32_t x686 = -278134;
static volatile uint64_t t148 = 3235LLU;
int32_t x692 = INT32_MAX;
int64_t x697 = 0LL;
int32_t x701 = INT32_MIN;
volatile int16_t x712 = INT16_MIN;
volatile int32_t t153 = INT32_MIN;
int16_t x715 = INT16_MAX;
int64_t t154 = 28294583390259864LL;
int16_t x724 = -1;
volatile int64_t x750 = -1LL;
static uint32_t x755 = UINT32_MAX;
uint8_t x762 = UINT8_MAX;
int32_t t164 = 24453522;
int32_t x779 = -1011;
uint32_t x790 = UINT32_MAX;
int64_t x794 = -1LL;
static int32_t x808 = 7;
static uint8_t x810 = 1U;
static int64_t x823 = 302252LL;
int32_t t177 = INT32_MAX;
static int8_t x834 = 2;
uint8_t x836 = UINT8_MAX;
static uint32_t x838 = UINT32_MAX;
int32_t t181 = 563517;
int64_t x850 = INT64_MAX;
static volatile int64_t x851 = -1LL;
uint64_t x852 = 65513659231837LLU;
uint8_t x868 = 1U;
static uint64_t x882 = 997860167LLU;
int32_t x883 = -709022565;
static int32_t t190 = 766767197;
uint64_t x891 = 385547798228LLU;
int16_t x902 = INT16_MIN;
uint16_t x904 = 10486U;
int32_t t196 = 73604442;
static int16_t x909 = INT16_MIN;
int32_t t197 = -22925595;
volatile int32_t x914 = INT32_MIN;


void f0(void) {
    	uint64_t x1 = 6049281LLU;
	static volatile uint32_t x2 = 218U;
	static int64_t x4 = -3308336841940984008LL;
	volatile uint64_t t0 = 275984748998477085LLU;

    t0 = (x1|(x2==(x3+x4)));

    if (t0 != 6049281LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	static volatile int64_t x6 = INT64_MAX;
	uint32_t x7 = UINT32_MAX;
	static uint64_t x8 = 1103119001717453535LLU;
	int32_t t1 = 7631;

    t1 = (x5|(x6==(x7+x8)));

    if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MAX;
	volatile uint8_t x10 = 0U;
	static uint8_t x11 = 52U;
	static int8_t x12 = INT8_MIN;
	int32_t t2 = 432;

    t2 = (x9|(x10==(x11+x12)));

    if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 0U;
	uint8_t x14 = UINT8_MAX;
	uint16_t x15 = UINT16_MAX;
	static int32_t t3 = -29176;

    t3 = (x13|(x14==(x15+x16)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = -1;
	volatile int32_t x18 = -1;
	uint8_t x20 = 5U;
	volatile int32_t t4 = -23630;

    t4 = (x17|(x18==(x19+x20)));

    if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = INT64_MIN;
	static int16_t x22 = INT16_MAX;
	int16_t x23 = 13569;
	int8_t x24 = 2;
	volatile int64_t t5 = INT64_MIN;

    t5 = (x21|(x22==(x23+x24)));

    if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x26 = INT64_MAX;
	static int64_t x27 = -651314105538LL;
	int32_t x28 = INT32_MIN;
	int64_t t6 = INT64_MAX;

    t6 = (x25|(x26==(x27+x28)));

    if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = INT16_MIN;
	int64_t x34 = INT64_MAX;
	uint16_t x35 = 487U;
	int64_t x36 = INT64_MIN;

    t7 = (x33|(x34==(x35+x36)));

    if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x37 = -1LL;
	int16_t x39 = 1765;
	volatile int64_t t8 = 97110607993LL;

    t8 = (x37|(x38==(x39+x40)));

    if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x41 = INT32_MIN;
	int8_t x42 = 0;
	int8_t x43 = 10;
	static volatile int32_t x44 = -2;
	volatile int32_t t9 = INT32_MIN;

    t9 = (x41|(x42==(x43+x44)));

    if (t9 != INT32_MIN) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x45 = -1LL;
	uint32_t x46 = 29023U;
	uint8_t x47 = 1U;
	int8_t x48 = 1;
	int64_t t10 = 20835953813LL;

    t10 = (x45|(x46==(x47+x48)));

    if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x53 = 701U;
	int16_t x54 = INT16_MIN;
	static uint8_t x55 = 8U;
	static volatile uint32_t t11 = 3U;

    t11 = (x53|(x54==(x55+x56)));

    if (t11 != 701U) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x57 = -122;
	int16_t x58 = INT16_MAX;
	volatile int16_t x59 = INT16_MAX;
	volatile int8_t x60 = 1;
	volatile int32_t t12 = -1;

    t12 = (x57|(x58==(x59+x60)));

    if (t12 != -122) { NG(); } else { ; }
	
}

void f13(void) {
    	static volatile int32_t x65 = -3;
	volatile int16_t x66 = INT16_MAX;
	static uint64_t x68 = 55373615152151LLU;
	static int32_t t13 = -2410972;

    t13 = (x65|(x66==(x67+x68)));

    if (t13 != -3) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x69 = 0U;
	static uint64_t x70 = 58388715268550LLU;
	uint32_t x71 = UINT32_MAX;
	uint32_t x72 = UINT32_MAX;
	int32_t t14 = 7;

    t14 = (x69|(x70==(x71+x72)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x73 = 1729425612525670065LLU;
	int64_t x74 = -1LL;
	int8_t x75 = INT8_MAX;
	int8_t x76 = 1;
	static uint64_t t15 = 0LLU;

    t15 = (x73|(x74==(x75+x76)));

    if (t15 != 1729425612525670065LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x77 = 32U;
	static uint8_t x79 = 83U;
	int16_t x80 = -1;
	volatile int32_t t16 = 3495587;

    t16 = (x77|(x78==(x79+x80)));

    if (t16 != 32) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x81 = 87857259881333LLU;
	volatile int64_t x82 = INT64_MAX;
	static int16_t x83 = INT16_MIN;
	int16_t x84 = INT16_MIN;
	uint64_t t17 = 54590LLU;

    t17 = (x81|(x82==(x83+x84)));

    if (t17 != 87857259881333LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x85 = UINT16_MAX;
	uint16_t x87 = UINT16_MAX;
	static int16_t x88 = INT16_MIN;
	volatile int32_t t18 = 515544975;

    t18 = (x85|(x86==(x87+x88)));

    if (t18 != 65535) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x90 = INT16_MIN;
	static uint64_t t19 = UINT64_MAX;

    t19 = (x89|(x90==(x91+x92)));

    if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x94 = -63686LL;
	uint32_t x95 = UINT32_MAX;
	int8_t x96 = INT8_MIN;
	volatile int32_t t20 = 942195855;

    t20 = (x93|(x94==(x95+x96)));

    if (t20 != 39771351) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x99 = -1;
	uint8_t x100 = 6U;

    t21 = (x97|(x98==(x99+x100)));

    if (t21 != 7078LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x101 = 0U;
	int64_t x102 = INT64_MAX;
	volatile uint16_t x104 = 84U;
	volatile int32_t t22 = -15;

    t22 = (x101|(x102==(x103+x104)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x109 = INT8_MIN;
	volatile int32_t x110 = INT32_MIN;
	int32_t x111 = INT32_MIN;
	uint32_t x112 = UINT32_MAX;
	static int32_t t23 = -8074639;

    t23 = (x109|(x110==(x111+x112)));

    if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x113 = -1;
	uint8_t x114 = UINT8_MAX;
	volatile uint64_t x116 = UINT64_MAX;

    t24 = (x113|(x114==(x115+x116)));

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x117 = INT8_MIN;
	static uint64_t x118 = UINT64_MAX;
	int16_t x119 = INT16_MIN;
	int32_t t25 = 20660789;

    t25 = (x117|(x118==(x119+x120)));

    if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x121 = -1;
	int32_t x122 = INT32_MIN;
	int16_t x123 = -1;
	uint64_t x124 = 17LLU;
	volatile int32_t t26 = -50778;

    t26 = (x121|(x122==(x123+x124)));

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x125 = -7;
	int32_t x126 = -1;
	int64_t x127 = -1LL;

    t27 = (x125|(x126==(x127+x128)));

    if (t27 != -7) { NG(); } else { ; }
	
}

void f28(void) {
    	static int8_t x129 = -1;
	uint8_t x130 = 36U;
	volatile int16_t x131 = INT16_MAX;
	volatile uint64_t x132 = UINT64_MAX;
	volatile int32_t t28 = 0;

    t28 = (x129|(x130==(x131+x132)));

    if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x141 = 111U;
	int64_t x143 = -13062LL;
	uint64_t x144 = UINT64_MAX;
	int32_t t29 = -8232;

    t29 = (x141|(x142==(x143+x144)));

    if (t29 != 111) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x145 = INT8_MIN;
	int8_t x146 = INT8_MIN;
	int64_t x147 = 1123873388LL;
	int16_t x148 = 111;
	static int32_t t30 = -977342203;

    t30 = (x145|(x146==(x147+x148)));

    if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x149 = -74;
	uint32_t x150 = UINT32_MAX;
	uint32_t x151 = 0U;
	volatile int64_t x152 = -50163741861645LL;
	volatile int32_t t31 = -336;

    t31 = (x149|(x150==(x151+x152)));

    if (t31 != -74) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x158 = 4U;
	volatile uint32_t x159 = UINT32_MAX;
	uint16_t x160 = 45U;

    t32 = (x157|(x158==(x159+x160)));

    if (t32 != 127) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x161 = -7;
	uint64_t x162 = UINT64_MAX;
	int64_t x163 = 16312671730494LL;
	static int64_t x164 = 14846117716LL;
	int32_t t33 = -238037298;

    t33 = (x161|(x162==(x163+x164)));

    if (t33 != -7) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x165 = UINT8_MAX;
	int64_t x167 = -1375LL;
	int32_t x168 = -1;
	static int32_t t34 = -413208;

    t34 = (x165|(x166==(x167+x168)));

    if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x169 = -1;
	volatile uint32_t x171 = UINT32_MAX;
	int32_t x172 = INT32_MIN;

    t35 = (x169|(x170==(x171+x172)));

    if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x173 = 0U;
	static int8_t x174 = -6;
	int16_t x175 = -1;
	volatile int32_t t36 = 0;

    t36 = (x173|(x174==(x175+x176)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x179 = 99413497U;
	int32_t x180 = -1;
	volatile int32_t t37 = -7765;

    t37 = (x177|(x178==(x179+x180)));

    if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x181 = -152;
	int32_t x182 = INT32_MIN;
	uint64_t x183 = UINT64_MAX;
	static volatile int32_t t38 = -2339;

    t38 = (x181|(x182==(x183+x184)));

    if (t38 != -152) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x186 = INT8_MIN;
	uint16_t x187 = 1U;
	static int64_t x188 = -3232999907LL;
	volatile uint32_t t39 = UINT32_MAX;

    t39 = (x185|(x186==(x187+x188)));

    if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x197 = 102U;
	int8_t x199 = INT8_MIN;
	static uint32_t x200 = 61367748U;

    t40 = (x197|(x198==(x199+x200)));

    if (t40 != 102) { NG(); } else { ; }
	
}

void f41(void) {
    	static volatile int64_t x201 = INT64_MAX;
	int16_t x202 = INT16_MIN;
	volatile int8_t x203 = INT8_MIN;
	static int64_t t41 = INT64_MAX;

    t41 = (x201|(x202==(x203+x204)));

    if (t41 != INT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x206 = INT32_MAX;
	int32_t x207 = INT32_MIN;
	static volatile int16_t x208 = 1;
	uint64_t t42 = UINT64_MAX;

    t42 = (x205|(x206==(x207+x208)));

    if (t42 != UINT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x209 = 68755407901LLU;
	int8_t x210 = INT8_MAX;
	int8_t x211 = INT8_MIN;
	int32_t x212 = 219;

    t43 = (x209|(x210==(x211+x212)));

    if (t43 != 68755407901LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x213 = UINT8_MAX;
	int32_t x214 = 3;
	uint64_t x216 = 5191243623133836LLU;
	volatile int32_t t44 = -1799914;

    t44 = (x213|(x214==(x215+x216)));

    if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x217 = 19;
	int8_t x218 = INT8_MAX;
	int32_t x219 = -31;
	volatile int32_t t45 = 3824794;

    t45 = (x217|(x218==(x219+x220)));

    if (t45 != 19) { NG(); } else { ; }
	
}

void f46(void) {
    	static int16_t x221 = INT16_MAX;
	volatile int32_t x222 = INT32_MIN;
	int32_t x223 = INT32_MIN;
	volatile uint32_t x224 = 10607U;
	int32_t t46 = 123897679;

    t46 = (x221|(x222==(x223+x224)));

    if (t46 != 32767) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x225 = 158U;
	int64_t x227 = -85878231396384LL;
	volatile int16_t x228 = INT16_MIN;

    t47 = (x225|(x226==(x227+x228)));

    if (t47 != 158U) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int64_t x229 = INT64_MIN;
	int32_t x230 = INT32_MIN;
	int64_t x231 = 17403914LL;
	int32_t x232 = 399;
	static volatile int64_t t48 = INT64_MIN;

    t48 = (x229|(x230==(x231+x232)));

    if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
    	static int64_t x233 = -1LL;
	int16_t x234 = INT16_MAX;
	int8_t x235 = 13;
	uint32_t x236 = UINT32_MAX;

    t49 = (x233|(x234==(x235+x236)));

    if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x237 = 2U;
	static int64_t x240 = INT64_MIN;
	int32_t t50 = 85;

    t50 = (x237|(x238==(x239+x240)));

    if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
    	static uint64_t x241 = UINT64_MAX;
	volatile int32_t x244 = INT32_MAX;
	volatile uint64_t t51 = UINT64_MAX;

    t51 = (x241|(x242==(x243+x244)));

    if (t51 != UINT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint32_t x245 = UINT32_MAX;
	int64_t x246 = 14276168283LL;
	int64_t x247 = INT64_MIN;
	int16_t x248 = INT16_MAX;
	volatile uint32_t t52 = UINT32_MAX;

    t52 = (x245|(x246==(x247+x248)));

    if (t52 != UINT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x249 = 0U;
	int32_t x250 = INT32_MIN;
	uint8_t x251 = 97U;

    t53 = (x249|(x250==(x251+x252)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x254 = INT64_MAX;
	int32_t t54 = 21;

    t54 = (x253|(x254==(x255+x256)));

    if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x257 = INT16_MAX;
	volatile int32_t t55 = -50048;

    t55 = (x257|(x258==(x259+x260)));

    if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x262 = -1;
	volatile uint16_t x263 = 572U;

    t56 = (x261|(x262==(x263+x264)));

    if (t56 != 7289788) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x265 = 13199447U;
	uint16_t x266 = 81U;
	uint32_t x267 = 2007U;
	static volatile int8_t x268 = 17;
	volatile uint32_t t57 = 696624U;

    t57 = (x265|(x266==(x267+x268)));

    if (t57 != 13199447U) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x269 = -1;
	uint64_t x271 = 932812LLU;
	uint32_t x272 = UINT32_MAX;
	int32_t t58 = 3;

    t58 = (x269|(x270==(x271+x272)));

    if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x274 = UINT32_MAX;
	volatile int32_t x275 = 2;
	static int32_t x276 = -1;

    t59 = (x273|(x274==(x275+x276)));

    if (t59 != 484) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x277 = 15;
	int64_t x278 = -1LL;
	int8_t x280 = -53;
	int32_t t60 = -2631;

    t60 = (x277|(x278==(x279+x280)));

    if (t60 != 15) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x281 = INT16_MAX;
	volatile uint8_t x282 = UINT8_MAX;
	int16_t x283 = INT16_MAX;
	uint8_t x284 = 6U;
	static volatile int32_t t61 = -31369;

    t61 = (x281|(x282==(x283+x284)));

    if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x289 = INT16_MAX;
	uint8_t x290 = 43U;
	int8_t x291 = INT8_MIN;
	static uint32_t x292 = 917216U;
	static int32_t t62 = -826094;

    t62 = (x289|(x290==(x291+x292)));

    if (t62 != 32767) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x293 = INT16_MIN;
	int64_t x295 = INT64_MIN;
	uint16_t x296 = 0U;
	int32_t t63 = 113;

    t63 = (x293|(x294==(x295+x296)));

    if (t63 != -32768) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x297 = INT16_MAX;
	int64_t x298 = INT64_MAX;
	static int16_t x299 = INT16_MIN;
	volatile int32_t t64 = -1;

    t64 = (x297|(x298==(x299+x300)));

    if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x301 = INT8_MAX;
	volatile uint8_t x302 = 5U;
	volatile uint32_t x303 = 0U;
	volatile int32_t t65 = -163566;

    t65 = (x301|(x302==(x303+x304)));

    if (t65 != 127) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x309 = -3179632LL;
	static int32_t x311 = 83702;
	volatile int64_t t66 = 71603770LL;

    t66 = (x309|(x310==(x311+x312)));

    if (t66 != -3179632LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x313 = 23116U;
	static int64_t x315 = -880LL;
	int8_t x316 = 0;
	int32_t t67 = -125825964;

    t67 = (x313|(x314==(x315+x316)));

    if (t67 != 23116) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x317 = INT64_MIN;
	uint16_t x318 = UINT16_MAX;
	int16_t x319 = -2338;
	static int64_t x320 = 1LL;
	volatile int64_t t68 = INT64_MIN;

    t68 = (x317|(x318==(x319+x320)));

    if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x321 = -1;
	uint64_t x322 = 885457LLU;
	int16_t x323 = -1;
	volatile uint32_t x324 = 28533511U;
	volatile int32_t t69 = 503295828;

    t69 = (x321|(x322==(x323+x324)));

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x325 = 13760612LLU;
	int32_t x326 = 17;
	int64_t x327 = 36736LL;
	volatile int64_t x328 = 497768LL;
	uint64_t t70 = 0LLU;

    t70 = (x325|(x326==(x327+x328)));

    if (t70 != 13760612LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x333 = UINT64_MAX;
	int64_t x334 = 30847LL;
	int16_t x335 = INT16_MIN;
	int8_t x336 = -1;
	volatile uint64_t t71 = UINT64_MAX;

    t71 = (x333|(x334==(x335+x336)));

    if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x337 = INT32_MIN;
	static volatile uint32_t x338 = UINT32_MAX;
	int8_t x339 = INT8_MIN;
	int8_t x340 = -1;
	volatile int32_t t72 = INT32_MIN;

    t72 = (x337|(x338==(x339+x340)));

    if (t72 != INT32_MIN) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x341 = UINT8_MAX;
	uint8_t x342 = UINT8_MAX;
	int16_t x344 = INT16_MIN;
	volatile int32_t t73 = -22300994;

    t73 = (x341|(x342==(x343+x344)));

    if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x345 = INT8_MIN;
	static int16_t x346 = 201;
	volatile uint64_t x347 = 688942853155LLU;
	int64_t x348 = -1LL;
	int32_t t74 = -3960;

    t74 = (x345|(x346==(x347+x348)));

    if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x349 = INT32_MAX;
	int8_t x350 = -1;
	volatile int32_t x351 = -1;
	volatile uint64_t x352 = 1910984808702298LLU;
	static int32_t t75 = INT32_MAX;

    t75 = (x349|(x350==(x351+x352)));

    if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x355 = -182LL;
	int16_t x356 = INT16_MAX;
	int32_t t76 = 367014120;

    t76 = (x353|(x354==(x355+x356)));

    if (t76 != 49) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x358 = -4407588498583461LL;
	static int64_t x359 = 3441405993302977767LL;
	int16_t x360 = 5087;
	int32_t t77 = -450;

    t77 = (x357|(x358==(x359+x360)));

    if (t77 != 127) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x362 = INT8_MIN;
	volatile uint8_t x364 = UINT8_MAX;
	volatile int32_t t78 = INT32_MAX;

    t78 = (x361|(x362==(x363+x364)));

    if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x365 = 0;
	static int64_t x366 = INT64_MIN;
	static int8_t x367 = -1;
	volatile int64_t x368 = 3377266427690087LL;
	int32_t t79 = -333882;

    t79 = (x365|(x366==(x367+x368)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x369 = 92297151LLU;
	int8_t x370 = INT8_MIN;
	static uint8_t x371 = 4U;
	volatile uint64_t t80 = 585112867237LLU;

    t80 = (x369|(x370==(x371+x372)));

    if (t80 != 92297151LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static int8_t x373 = -1;
	static int32_t x374 = 1;
	int32_t t81 = -586827998;

    t81 = (x373|(x374==(x375+x376)));

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x377 = UINT64_MAX;
	int8_t x378 = INT8_MAX;
	static uint16_t x379 = UINT16_MAX;
	int32_t x380 = INT32_MIN;
	uint64_t t82 = UINT64_MAX;

    t82 = (x377|(x378==(x379+x380)));

    if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x381 = -1;
	uint8_t x382 = 11U;
	static volatile uint32_t x383 = 5U;
	int64_t x384 = 15423217341LL;
	int32_t t83 = 14;

    t83 = (x381|(x382==(x383+x384)));

    if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x385 = INT16_MAX;
	uint64_t x386 = UINT64_MAX;
	int64_t x387 = -3960057500571LL;
	int16_t x388 = INT16_MIN;
	static int32_t t84 = -1;

    t84 = (x385|(x386==(x387+x388)));

    if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x389 = INT8_MIN;
	int16_t x390 = -1;
	int8_t x391 = INT8_MAX;
	static int32_t t85 = 3;

    t85 = (x389|(x390==(x391+x392)));

    if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x394 = -1;
	int16_t x395 = INT16_MIN;
	uint64_t x396 = UINT64_MAX;

    t86 = (x393|(x394==(x395+x396)));

    if (t86 != 4275063939884LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x405 = INT16_MIN;
	int16_t x407 = INT16_MAX;
	uint8_t x408 = 34U;

    t87 = (x405|(x406==(x407+x408)));

    if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x409 = INT16_MAX;
	uint16_t x410 = UINT16_MAX;
	int8_t x412 = INT8_MAX;
	int32_t t88 = 11;

    t88 = (x409|(x410==(x411+x412)));

    if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x413 = UINT32_MAX;
	uint32_t x414 = UINT32_MAX;
	uint64_t x415 = 49131120022LLU;

    t89 = (x413|(x414==(x415+x416)));

    if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x421 = -1;
	volatile uint64_t x422 = 154503253LLU;
	volatile int8_t x423 = -1;
	volatile int8_t x424 = INT8_MAX;
	volatile int32_t t90 = -2;

    t90 = (x421|(x422==(x423+x424)));

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x426 = -1LL;
	volatile int16_t x428 = -1;

    t91 = (x425|(x426==(x427+x428)));

    if (t91 != 340921432235LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x429 = -1;
	int8_t x430 = 54;
	int8_t x431 = -2;
	int8_t x432 = INT8_MIN;

    t92 = (x429|(x430==(x431+x432)));

    if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
    	static int64_t x434 = 231707657435LL;
	uint32_t x436 = 13614U;
	volatile int32_t t93 = 14185;

    t93 = (x433|(x434==(x435+x436)));

    if (t93 != 65535) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x437 = INT8_MIN;
	static uint32_t x438 = 97672U;
	uint16_t x439 = 84U;
	volatile uint8_t x440 = UINT8_MAX;
	int32_t t94 = -313;

    t94 = (x437|(x438==(x439+x440)));

    if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x441 = 44;
	int8_t x443 = INT8_MAX;
	uint8_t x444 = 15U;
	volatile int32_t t95 = -13436;

    t95 = (x441|(x442==(x443+x444)));

    if (t95 != 44) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x446 = 119799472182962LL;
	int16_t x447 = -14;
	volatile uint32_t x448 = 6U;
	volatile int32_t t96 = -484656601;

    t96 = (x445|(x446==(x447+x448)));

    if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x453 = -1LL;
	int16_t x455 = -1;
	uint16_t x456 = 5U;
	volatile int64_t t97 = 7LL;

    t97 = (x453|(x454==(x455+x456)));

    if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x457 = 26795;
	int16_t x458 = INT16_MAX;
	volatile uint16_t x459 = UINT16_MAX;
	int8_t x460 = INT8_MIN;
	static int32_t t98 = 465990;

    t98 = (x457|(x458==(x459+x460)));

    if (t98 != 26795) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x461 = 10U;
	int64_t x462 = INT64_MIN;
	int8_t x464 = -1;

    t99 = (x461|(x462==(x463+x464)));

    if (t99 != 10) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x469 = INT32_MIN;
	int8_t x470 = INT8_MIN;
	volatile int32_t x471 = -397283;
	int8_t x472 = 15;
	volatile int32_t t100 = INT32_MIN;

    t100 = (x469|(x470==(x471+x472)));

    if (t100 != INT32_MIN) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint64_t x473 = 1008560405026406LLU;
	int64_t x476 = INT64_MIN;
	volatile uint64_t t101 = 202046723395568LLU;

    t101 = (x473|(x474==(x475+x476)));

    if (t101 != 1008560405026406LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x477 = -19LL;
	uint32_t x478 = 2207928U;
	volatile int32_t x479 = -1;
	volatile int64_t t102 = 385502LL;

    t102 = (x477|(x478==(x479+x480)));

    if (t102 != -19LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x481 = UINT64_MAX;
	static int16_t x482 = INT16_MAX;
	static uint64_t x483 = UINT64_MAX;
	int32_t x484 = INT32_MIN;
	volatile uint64_t t103 = UINT64_MAX;

    t103 = (x481|(x482==(x483+x484)));

    if (t103 != UINT64_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x489 = INT16_MIN;
	uint8_t x490 = 111U;
	uint8_t x491 = 1U;
	static volatile int32_t t104 = 9243093;

    t104 = (x489|(x490==(x491+x492)));

    if (t104 != -32768) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int16_t x494 = 109;
	int8_t x495 = -1;
	int16_t x496 = INT16_MIN;
	volatile int32_t t105 = 1;

    t105 = (x493|(x494==(x495+x496)));

    if (t105 != 8) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x497 = INT8_MIN;
	int16_t x498 = INT16_MAX;
	volatile int16_t x499 = INT16_MAX;
	uint32_t x500 = UINT32_MAX;
	int32_t t106 = 0;

    t106 = (x497|(x498==(x499+x500)));

    if (t106 != -128) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x501 = INT8_MAX;
	static volatile int8_t x502 = 59;
	int8_t x504 = -1;

    t107 = (x501|(x502==(x503+x504)));

    if (t107 != 127) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile uint32_t x505 = UINT32_MAX;
	static volatile uint8_t x506 = 9U;
	volatile int64_t x508 = -1LL;
	volatile uint32_t t108 = UINT32_MAX;

    t108 = (x505|(x506==(x507+x508)));

    if (t108 != UINT32_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x509 = 4U;
	static int16_t x510 = 1;
	int8_t x512 = 1;
	int32_t t109 = -307;

    t109 = (x509|(x510==(x511+x512)));

    if (t109 != 4) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x514 = UINT8_MAX;
	static int64_t x515 = INT64_MIN;
	uint64_t x516 = 1LLU;

    t110 = (x513|(x514==(x515+x516)));

    if (t110 != -73) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x517 = INT32_MIN;
	static int32_t x518 = -1;
	int64_t x519 = INT64_MAX;
	uint64_t x520 = 30LLU;
	int32_t t111 = INT32_MIN;

    t111 = (x517|(x518==(x519+x520)));

    if (t111 != INT32_MIN) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x525 = 33123517;
	uint16_t x526 = 12654U;
	uint32_t x527 = 1513363297U;
	static volatile int8_t x528 = -1;
	volatile int32_t t112 = 12808;

    t112 = (x525|(x526==(x527+x528)));

    if (t112 != 33123517) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x529 = INT16_MAX;
	int16_t x530 = 0;
	static volatile uint64_t x531 = UINT64_MAX;
	volatile int64_t x532 = INT64_MAX;

    t113 = (x529|(x530==(x531+x532)));

    if (t113 != 32767) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x533 = 9216;
	int64_t x534 = -1LL;
	static int16_t x535 = -1;
	volatile uint64_t x536 = UINT64_MAX;
	volatile int32_t t114 = -81209;

    t114 = (x533|(x534==(x535+x536)));

    if (t114 != 9216) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x537 = 902310;
	static int64_t x538 = -3035369588324662LL;
	int64_t x539 = 29535746534978853LL;
	static int8_t x540 = 1;
	static volatile int32_t t115 = 1039162161;

    t115 = (x537|(x538==(x539+x540)));

    if (t115 != 902310) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int8_t x541 = INT8_MAX;
	uint64_t x542 = 1198498LLU;
	uint64_t x543 = 443671808776277LLU;
	static int64_t x544 = INT64_MAX;
	static volatile int32_t t116 = -13869;

    t116 = (x541|(x542==(x543+x544)));

    if (t116 != 127) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x545 = UINT8_MAX;
	int64_t x546 = INT64_MIN;
	static int32_t x547 = -231;
	volatile uint32_t x548 = UINT32_MAX;
	volatile int32_t t117 = -87840589;

    t117 = (x545|(x546==(x547+x548)));

    if (t117 != 255) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int8_t x549 = -2;
	int32_t x550 = INT32_MIN;
	int32_t x551 = INT32_MIN;
	uint64_t x552 = 189046402307964LLU;

    t118 = (x549|(x550==(x551+x552)));

    if (t118 != -2) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x553 = -1LL;
	uint64_t x556 = 100386307LLU;
	int64_t t119 = 88352339295576651LL;

    t119 = (x553|(x554==(x555+x556)));

    if (t119 != -1LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x557 = INT16_MIN;
	uint16_t x558 = UINT16_MAX;
	static volatile uint64_t x560 = 1971489050013937462LLU;

    t120 = (x557|(x558==(x559+x560)));

    if (t120 != -32768) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x561 = 5U;
	int32_t x563 = 136037803;
	uint32_t x564 = 2085U;
	volatile int32_t t121 = -41986783;

    t121 = (x561|(x562==(x563+x564)));

    if (t121 != 5) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x565 = INT16_MIN;
	uint16_t x566 = 0U;
	uint8_t x568 = 61U;
	static int32_t t122 = -22000;

    t122 = (x565|(x566==(x567+x568)));

    if (t122 != -32768) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint64_t x569 = 2147792170388399LLU;
	uint8_t x571 = UINT8_MAX;
	int8_t x572 = INT8_MAX;
	volatile uint64_t t123 = 15735141519612853LLU;

    t123 = (x569|(x570==(x571+x572)));

    if (t123 != 2147792170388399LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int64_t x577 = -678LL;
	uint32_t x578 = UINT32_MAX;
	int64_t x580 = 521495454376LL;

    t124 = (x577|(x578==(x579+x580)));

    if (t124 != -678LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x581 = UINT16_MAX;
	int64_t x582 = INT64_MAX;
	int32_t x583 = INT32_MIN;
	static int32_t x584 = INT32_MAX;
	int32_t t125 = -133920908;

    t125 = (x581|(x582==(x583+x584)));

    if (t125 != 65535) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x585 = -23;
	int8_t x586 = INT8_MIN;
	volatile int8_t x587 = INT8_MIN;
	static int32_t x588 = -1;
	int32_t t126 = -94736446;

    t126 = (x585|(x586==(x587+x588)));

    if (t126 != -23) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x589 = INT16_MIN;
	volatile uint8_t x590 = 104U;
	int8_t x591 = INT8_MIN;
	int16_t x592 = INT16_MAX;
	static volatile int32_t t127 = 709;

    t127 = (x589|(x590==(x591+x592)));

    if (t127 != -32768) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x593 = INT32_MIN;
	volatile uint64_t x594 = 8487841722974007LLU;
	int32_t t128 = INT32_MIN;

    t128 = (x593|(x594==(x595+x596)));

    if (t128 != INT32_MIN) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x597 = 72U;
	int8_t x598 = INT8_MIN;
	int8_t x600 = 0;
	static volatile int32_t t129 = 43780;

    t129 = (x597|(x598==(x599+x600)));

    if (t129 != 72) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x601 = -1;
	int16_t x603 = 890;
	int64_t x604 = 28989155506721LL;

    t130 = (x601|(x602==(x603+x604)));

    if (t130 != -1) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x605 = INT16_MAX;
	int16_t x606 = INT16_MIN;
	int16_t x607 = 3081;

    t131 = (x605|(x606==(x607+x608)));

    if (t131 != 32767) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x610 = -1;
	int16_t x611 = 0;
	static uint32_t x612 = 120U;

    t132 = (x609|(x610==(x611+x612)));

    if (t132 != 11738U) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x617 = INT16_MIN;
	int16_t x618 = INT16_MAX;
	volatile int8_t x619 = INT8_MIN;
	volatile int32_t t133 = -943743;

    t133 = (x617|(x618==(x619+x620)));

    if (t133 != -32768) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x621 = 1538662U;
	int8_t x622 = -1;
	static uint16_t x623 = 4547U;
	static volatile uint32_t t134 = 13554345U;

    t134 = (x621|(x622==(x623+x624)));

    if (t134 != 1538662U) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x625 = INT8_MIN;
	int16_t x626 = INT16_MIN;
	volatile uint16_t x627 = UINT16_MAX;
	int16_t x628 = INT16_MIN;

    t135 = (x625|(x626==(x627+x628)));

    if (t135 != -128) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint16_t x629 = UINT16_MAX;
	int32_t x630 = -1;
	int64_t x632 = 491132818089807071LL;
	int32_t t136 = -2;

    t136 = (x629|(x630==(x631+x632)));

    if (t136 != 65535) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x633 = 1140949LLU;
	uint16_t x635 = 253U;
	uint32_t x636 = UINT32_MAX;
	uint64_t t137 = 180226147476LLU;

    t137 = (x633|(x634==(x635+x636)));

    if (t137 != 1140949LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x637 = INT8_MAX;
	static int32_t x638 = 58658386;
	static int16_t x639 = 151;
	volatile uint64_t x640 = 266255725110001LLU;
	volatile int32_t t138 = 23971578;

    t138 = (x637|(x638==(x639+x640)));

    if (t138 != 127) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x642 = UINT64_MAX;
	int32_t x643 = 0;
	uint16_t x644 = 3178U;
	volatile int32_t t139 = 2;

    t139 = (x641|(x642==(x643+x644)));

    if (t139 != -32768) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x654 = UINT64_MAX;
	int16_t x655 = 168;
	volatile int8_t x656 = 0;
	static volatile uint32_t t140 = 14413950U;

    t140 = (x653|(x654==(x655+x656)));

    if (t140 != 1400U) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x657 = INT32_MAX;
	uint32_t x658 = UINT32_MAX;
	static uint64_t x659 = UINT64_MAX;
	volatile uint32_t x660 = 11273U;
	int32_t t141 = INT32_MAX;

    t141 = (x657|(x658==(x659+x660)));

    if (t141 != INT32_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x661 = 1011U;
	uint64_t x662 = 89064LLU;
	static int32_t x663 = -82378;
	volatile int8_t x664 = -3;
	volatile uint32_t t142 = 376133U;

    t142 = (x661|(x662==(x663+x664)));

    if (t142 != 1011U) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x665 = -1;
	volatile int8_t x666 = INT8_MIN;
	volatile int32_t t143 = -62;

    t143 = (x665|(x666==(x667+x668)));

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x669 = INT32_MIN;
	int16_t x671 = -7;
	volatile int32_t t144 = INT32_MIN;

    t144 = (x669|(x670==(x671+x672)));

    if (t144 != INT32_MIN) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x673 = 1;
	static int16_t x674 = INT16_MIN;
	uint16_t x675 = UINT16_MAX;
	int32_t t145 = 97001;

    t145 = (x673|(x674==(x675+x676)));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x677 = -3583;
	uint32_t x678 = 31555U;
	int32_t x679 = INT32_MIN;
	volatile uint32_t x680 = 13U;
	static int32_t t146 = -764492556;

    t146 = (x677|(x678==(x679+x680)));

    if (t146 != -3583) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x681 = UINT32_MAX;
	int16_t x682 = INT16_MIN;
	int16_t x683 = 1;
	int8_t x684 = 5;
	uint32_t t147 = UINT32_MAX;

    t147 = (x681|(x682==(x683+x684)));

    if (t147 != UINT32_MAX) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x685 = 4297919944200455856LLU;
	int16_t x687 = -1;
	static volatile int16_t x688 = INT16_MIN;

    t148 = (x685|(x686==(x687+x688)));

    if (t148 != 4297919944200455856LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x689 = 141U;
	uint8_t x690 = 0U;
	static int64_t x691 = INT64_MIN;
	uint32_t t149 = 31U;

    t149 = (x689|(x690==(x691+x692)));

    if (t149 != 141U) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x693 = INT16_MIN;
	static int64_t x694 = INT64_MIN;
	volatile int32_t x695 = -92;
	static int32_t x696 = -3;
	int32_t t150 = 913477;

    t150 = (x693|(x694==(x695+x696)));

    if (t150 != -32768) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x698 = 666196059U;
	uint32_t x699 = 67U;
	int32_t x700 = INT32_MAX;
	volatile int64_t t151 = 1693575560656LL;

    t151 = (x697|(x698==(x699+x700)));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x702 = 43839;
	int16_t x703 = 14;
	uint16_t x704 = 10U;
	static int32_t t152 = INT32_MIN;

    t152 = (x701|(x702==(x703+x704)));

    if (t152 != INT32_MIN) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x709 = INT32_MIN;
	int16_t x710 = INT16_MIN;
	uint64_t x711 = 47804856844LLU;

    t153 = (x709|(x710==(x711+x712)));

    if (t153 != INT32_MIN) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x713 = 31562LL;
	int64_t x714 = 2827050LL;
	uint8_t x716 = 3U;

    t154 = (x713|(x714==(x715+x716)));

    if (t154 != 31562LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int32_t x717 = INT32_MAX;
	uint8_t x718 = 40U;
	static uint32_t x719 = 110639827U;
	volatile int32_t x720 = INT32_MAX;
	int32_t t155 = INT32_MAX;

    t155 = (x717|(x718==(x719+x720)));

    if (t155 != INT32_MAX) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x721 = -1;
	int16_t x722 = 110;
	volatile uint8_t x723 = 1U;
	volatile int32_t t156 = 3;

    t156 = (x721|(x722==(x723+x724)));

    if (t156 != -1) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x729 = INT32_MAX;
	volatile int64_t x730 = -1LL;
	int16_t x731 = INT16_MIN;
	int16_t x732 = -1;
	static int32_t t157 = INT32_MAX;

    t157 = (x729|(x730==(x731+x732)));

    if (t157 != INT32_MAX) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x733 = INT8_MIN;
	volatile int32_t x734 = INT32_MIN;
	uint32_t x735 = 12U;
	static int16_t x736 = INT16_MIN;
	static int32_t t158 = -3;

    t158 = (x733|(x734==(x735+x736)));

    if (t158 != -128) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x737 = INT64_MAX;
	static int64_t x738 = -37705505013887955LL;
	int64_t x739 = INT64_MAX;
	static int8_t x740 = -1;
	volatile int64_t t159 = INT64_MAX;

    t159 = (x737|(x738==(x739+x740)));

    if (t159 != INT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x741 = UINT16_MAX;
	int32_t x742 = -1;
	int16_t x743 = 0;
	uint8_t x744 = 32U;
	volatile int32_t t160 = 31;

    t160 = (x741|(x742==(x743+x744)));

    if (t160 != 65535) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x745 = INT64_MIN;
	static int16_t x746 = 1;
	int32_t x747 = INT32_MIN;
	int32_t x748 = INT32_MAX;
	volatile int64_t t161 = INT64_MIN;

    t161 = (x745|(x746==(x747+x748)));

    if (t161 != INT64_MIN) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x749 = UINT16_MAX;
	int32_t x751 = INT32_MIN;
	int64_t x752 = INT64_MAX;
	int32_t t162 = 1;

    t162 = (x749|(x750==(x751+x752)));

    if (t162 != 65535) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x753 = INT32_MIN;
	int64_t x754 = -1LL;
	int32_t x756 = INT32_MAX;
	volatile int32_t t163 = INT32_MIN;

    t163 = (x753|(x754==(x755+x756)));

    if (t163 != INT32_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint8_t x761 = UINT8_MAX;
	static uint32_t x763 = 1U;
	int64_t x764 = -20369LL;

    t164 = (x761|(x762==(x763+x764)));

    if (t164 != 255) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint8_t x765 = UINT8_MAX;
	int32_t x766 = INT32_MIN;
	int32_t x767 = -172;
	static uint8_t x768 = UINT8_MAX;
	int32_t t165 = 368737;

    t165 = (x765|(x766==(x767+x768)));

    if (t165 != 255) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x769 = UINT64_MAX;
	static int8_t x770 = -1;
	int32_t x771 = INT32_MIN;
	uint32_t x772 = UINT32_MAX;
	volatile uint64_t t166 = UINT64_MAX;

    t166 = (x769|(x770==(x771+x772)));

    if (t166 != UINT64_MAX) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x773 = -1;
	uint8_t x774 = 0U;
	uint32_t x775 = 3U;
	uint8_t x776 = 1U;
	static volatile int32_t t167 = 589204335;

    t167 = (x773|(x774==(x775+x776)));

    if (t167 != -1) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x777 = 1293061925734LL;
	static uint16_t x778 = 371U;
	int8_t x780 = -21;
	int64_t t168 = -1LL;

    t168 = (x777|(x778==(x779+x780)));

    if (t168 != 1293061925734LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int8_t x781 = INT8_MIN;
	int32_t x782 = -1;
	uint32_t x783 = 90U;
	int32_t x784 = 3895837;
	volatile int32_t t169 = 6170;

    t169 = (x781|(x782==(x783+x784)));

    if (t169 != -128) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x785 = -1LL;
	static int16_t x786 = 22;
	uint32_t x787 = 1501436U;
	int16_t x788 = 0;
	int64_t t170 = -124834LL;

    t170 = (x785|(x786==(x787+x788)));

    if (t170 != -1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x789 = UINT16_MAX;
	uint32_t x791 = UINT32_MAX;
	int32_t x792 = -1;
	int32_t t171 = 972657920;

    t171 = (x789|(x790==(x791+x792)));

    if (t171 != 65535) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x793 = -1;
	uint16_t x795 = 264U;
	int16_t x796 = -2009;
	int32_t t172 = 89321280;

    t172 = (x793|(x794==(x795+x796)));

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x797 = -264121975;
	uint16_t x798 = UINT16_MAX;
	uint64_t x799 = 134846574948LLU;
	static uint64_t x800 = UINT64_MAX;
	int32_t t173 = 451596;

    t173 = (x797|(x798==(x799+x800)));

    if (t173 != -264121975) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x805 = INT64_MIN;
	int16_t x806 = INT16_MIN;
	volatile int16_t x807 = INT16_MIN;
	static int64_t t174 = INT64_MIN;

    t174 = (x805|(x806==(x807+x808)));

    if (t174 != INT64_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x809 = UINT32_MAX;
	uint8_t x811 = 3U;
	static uint32_t x812 = 5509U;
	uint32_t t175 = UINT32_MAX;

    t175 = (x809|(x810==(x811+x812)));

    if (t175 != UINT32_MAX) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x817 = INT64_MAX;
	static uint32_t x818 = 432U;
	int16_t x819 = INT16_MAX;
	int64_t x820 = INT64_MIN;
	volatile int64_t t176 = INT64_MAX;

    t176 = (x817|(x818==(x819+x820)));

    if (t176 != INT64_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x821 = INT32_MAX;
	static uint8_t x822 = 76U;
	int16_t x824 = INT16_MIN;

    t177 = (x821|(x822==(x823+x824)));

    if (t177 != INT32_MAX) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x829 = INT16_MIN;
	int64_t x830 = 50649001241191LL;
	static int32_t x831 = INT32_MIN;
	int8_t x832 = 1;
	static int32_t t178 = -56723;

    t178 = (x829|(x830==(x831+x832)));

    if (t178 != -32768) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x833 = INT64_MAX;
	uint16_t x835 = UINT16_MAX;
	static int64_t t179 = INT64_MAX;

    t179 = (x833|(x834==(x835+x836)));

    if (t179 != INT64_MAX) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x837 = -1;
	static uint32_t x839 = UINT32_MAX;
	static int32_t x840 = INT32_MIN;
	volatile int32_t t180 = 2;

    t180 = (x837|(x838==(x839+x840)));

    if (t180 != -1) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x841 = -1;
	static uint32_t x842 = 67569U;
	uint16_t x843 = 7422U;
	int32_t x844 = 87;

    t181 = (x841|(x842==(x843+x844)));

    if (t181 != -1) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x845 = 72277498LLU;
	int64_t x846 = 73140992291012424LL;
	int16_t x847 = -1;
	volatile uint64_t x848 = 1937045600775LLU;
	static uint64_t t182 = 713537071966LLU;

    t182 = (x845|(x846==(x847+x848)));

    if (t182 != 72277498LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x849 = 241;
	volatile int32_t t183 = -254758898;

    t183 = (x849|(x850==(x851+x852)));

    if (t183 != 241) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x853 = 50711830U;
	static volatile int64_t x854 = 16306084932445721LL;
	volatile int32_t x855 = INT32_MAX;
	int8_t x856 = -2;
	static volatile uint32_t t184 = 76U;

    t184 = (x853|(x854==(x855+x856)));

    if (t184 != 50711830U) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x857 = 15072;
	uint32_t x858 = UINT32_MAX;
	volatile int16_t x859 = 3;
	static int16_t x860 = INT16_MIN;
	volatile int32_t t185 = 5065;

    t185 = (x857|(x858==(x859+x860)));

    if (t185 != 15072) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x861 = INT64_MIN;
	int8_t x862 = 0;
	static volatile int64_t x863 = -3684267593LL;
	uint16_t x864 = 31U;
	int64_t t186 = INT64_MIN;

    t186 = (x861|(x862==(x863+x864)));

    if (t186 != INT64_MIN) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x865 = UINT64_MAX;
	int64_t x866 = INT64_MIN;
	int8_t x867 = INT8_MIN;
	uint64_t t187 = UINT64_MAX;

    t187 = (x865|(x866==(x867+x868)));

    if (t187 != UINT64_MAX) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x869 = -1;
	int64_t x870 = INT64_MAX;
	volatile uint64_t x871 = 939LLU;
	uint32_t x872 = 11693589U;
	volatile int32_t t188 = 0;

    t188 = (x869|(x870==(x871+x872)));

    if (t188 != -1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x873 = INT16_MIN;
	uint32_t x874 = 23926620U;
	uint16_t x875 = 21815U;
	int8_t x876 = -1;
	int32_t t189 = 101708;

    t189 = (x873|(x874==(x875+x876)));

    if (t189 != -32768) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x881 = 2U;
	uint32_t x884 = 6056U;

    t190 = (x881|(x882==(x883+x884)));

    if (t190 != 2) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x885 = INT16_MAX;
	int16_t x886 = INT16_MIN;
	int8_t x887 = -31;
	uint8_t x888 = 80U;
	volatile int32_t t191 = 24372310;

    t191 = (x885|(x886==(x887+x888)));

    if (t191 != 32767) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x889 = 15761;
	int64_t x890 = INT64_MIN;
	int8_t x892 = -1;
	int32_t t192 = -1992;

    t192 = (x889|(x890==(x891+x892)));

    if (t192 != 15761) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x893 = -1;
	uint32_t x894 = 0U;
	static int32_t x895 = 3;
	static uint64_t x896 = 6755LLU;
	volatile int32_t t193 = 0;

    t193 = (x893|(x894==(x895+x896)));

    if (t193 != -1) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x897 = INT8_MIN;
	int8_t x898 = -1;
	static volatile uint16_t x899 = UINT16_MAX;
	uint16_t x900 = 6632U;
	volatile int32_t t194 = 0;

    t194 = (x897|(x898==(x899+x900)));

    if (t194 != -128) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x901 = INT8_MAX;
	int16_t x903 = 7223;
	static int32_t t195 = 461;

    t195 = (x901|(x902==(x903+x904)));

    if (t195 != 127) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x905 = 113;
	int32_t x906 = -1;
	static int32_t x907 = INT32_MIN;
	uint16_t x908 = 17323U;

    t196 = (x905|(x906==(x907+x908)));

    if (t196 != 113) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x910 = -463420701LL;
	static volatile uint32_t x911 = 59U;
	int8_t x912 = -1;

    t197 = (x909|(x910==(x911+x912)));

    if (t197 != -32768) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x913 = -1;
	int64_t x915 = INT64_MIN;
	int32_t x916 = INT32_MAX;
	static volatile int32_t t198 = 528664795;

    t198 = (x913|(x914==(x915+x916)));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x917 = -695627910;
	int16_t x918 = INT16_MIN;
	int64_t x919 = INT64_MIN;
	static uint64_t x920 = 1907715248509991LLU;
	int32_t t199 = 3941;

    t199 = (x917|(x918==(x919+x920)));

    if (t199 != -695627910) { NG(); } else { ; }
	
}

int main(void) {
        f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

