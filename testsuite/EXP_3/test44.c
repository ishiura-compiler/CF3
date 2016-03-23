
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

int32_t x20 = INT32_MAX;
volatile uint32_t x21 = UINT32_MAX;
volatile int16_t x27 = INT16_MAX;
volatile int8_t x36 = -1;
static int64_t t7 = 25815509623299723LL;
static uint64_t t9 = 4227238LLU;
static volatile int32_t x53 = INT32_MIN;
int32_t x57 = INT32_MIN;
volatile int32_t x60 = -1;
int64_t t12 = 0LL;
volatile int32_t t13 = 58420263;
uint32_t x67 = 582930U;
int64_t t14 = 2994LL;
int8_t x77 = INT8_MIN;
static uint8_t x80 = UINT8_MAX;
volatile uint32_t t17 = 1653579749U;
int16_t x84 = -1;
int8_t x87 = INT8_MAX;
int16_t x88 = -1;
int32_t x93 = -1;
int32_t x96 = -30;
uint16_t x110 = 7U;
uint32_t x116 = UINT32_MAX;
volatile int64_t x117 = INT64_MIN;
static uint8_t x123 = UINT8_MAX;
uint32_t x130 = UINT32_MAX;
uint64_t x153 = 5422LLU;
static uint16_t x159 = 117U;
volatile uint64_t t33 = 7601119038270235LLU;
int64_t t37 = 1LL;
int32_t x193 = INT32_MAX;
int8_t x206 = INT8_MIN;
int8_t x214 = INT8_MIN;
int64_t x231 = -5423026120758483LL;
int64_t x239 = -1LL;
volatile int64_t x241 = -1LL;
static volatile uint8_t x251 = UINT8_MAX;
int8_t x253 = 1;
static uint32_t x264 = 1090757U;
int64_t x265 = 2164618679458253LL;
int64_t t50 = -32261676LL;
int8_t x269 = INT8_MIN;
static uint8_t x272 = 2U;
uint16_t x273 = 3U;
uint8_t x278 = 1U;
static uint16_t x291 = 311U;
static volatile uint64_t x295 = UINT64_MAX;
uint8_t x303 = 21U;
int16_t x312 = 197;
int16_t x314 = INT16_MAX;
uint64_t x316 = 417401315819LLU;
volatile uint64_t t60 = 1968560461LLU;
int64_t x317 = 5LL;
int64_t t65 = 3162LL;
volatile int8_t x345 = INT8_MIN;
uint16_t x351 = 453U;
int16_t x352 = INT16_MIN;
volatile int16_t x356 = 124;
int32_t x359 = INT32_MIN;
static uint32_t x360 = 73956U;
volatile int8_t x361 = -21;
static int64_t t70 = -49LL;
int16_t x365 = -1;
volatile int64_t x368 = -1LL;
uint8_t x370 = UINT8_MAX;
int64_t t72 = -20880409LL;
static uint64_t t75 = 647561LLU;
int32_t x396 = 31946;
int32_t x416 = INT32_MAX;
uint8_t x417 = 1U;
int8_t x420 = INT8_MIN;
int16_t x432 = 5;
volatile int64_t t84 = -105081LL;
int16_t x446 = -21;
int8_t x448 = INT8_MIN;
static int16_t x469 = INT16_MAX;
volatile int32_t t92 = 85;
int64_t t94 = 4574LL;
int32_t x492 = 1;
int8_t x496 = 1;
static int16_t x500 = -14;
int8_t x519 = INT8_MIN;
int8_t x522 = INT8_MIN;
int8_t x527 = -1;
static uint8_t x529 = 1U;
int16_t x533 = INT16_MIN;
static int16_t x535 = 21;
int64_t x543 = INT64_MAX;
uint8_t x546 = 17U;
static int8_t x548 = INT8_MIN;
static uint8_t x552 = 0U;
static volatile uint64_t t108 = 2094983769492748LLU;
static int8_t x557 = INT8_MIN;
uint32_t x559 = 333U;
uint16_t x563 = 6960U;
uint32_t x567 = 211U;
int32_t x570 = 83;
static int8_t x573 = INT8_MIN;
uint32_t x575 = 260960U;
static int32_t x578 = INT32_MIN;
static volatile int32_t x580 = INT32_MIN;
static uint64_t t114 = 1672555LLU;
static int8_t x584 = -1;
volatile uint64_t x587 = 427525182LLU;
uint64_t x595 = 811170684773208LLU;
int8_t x604 = INT8_MAX;
int32_t t120 = 47;
uint16_t x605 = 9619U;
int32_t x610 = 61856847;
volatile int64_t x613 = -1LL;
static uint8_t x620 = 29U;
volatile int32_t t124 = 6271454;
int16_t x626 = 2099;
static volatile int64_t x627 = -1LL;
static uint32_t x628 = 250970U;
uint64_t x630 = UINT64_MAX;
int32_t x634 = INT32_MIN;
int32_t x644 = -88509431;
int16_t x657 = INT16_MIN;
int64_t t135 = -14LL;
int16_t x669 = -29;
uint16_t x672 = UINT16_MAX;
uint16_t x674 = 18437U;
int64_t x700 = -1LL;
static int8_t x710 = INT8_MIN;
uint32_t x711 = 1111153U;
static volatile uint16_t x714 = 14999U;
volatile int32_t t144 = -59757324;
volatile int32_t x719 = 0;
int32_t x724 = INT32_MIN;
uint32_t t146 = 84532U;
int64_t x734 = INT64_MIN;
uint8_t x736 = 41U;
volatile int64_t t149 = 221172284087104LL;
static int8_t x746 = -1;
static int8_t x750 = INT8_MIN;
uint8_t x762 = 2U;
static int64_t x768 = INT64_MAX;
volatile int16_t x776 = -501;
uint8_t x781 = UINT8_MAX;
int16_t x808 = 15;
int64_t x809 = -1LL;
uint8_t x810 = UINT8_MAX;
int8_t x815 = -1;
uint16_t x816 = 2U;
int8_t x820 = -2;
volatile int32_t t168 = -474;
int64_t x825 = 105379054869LL;
uint16_t x851 = 14729U;
int64_t t175 = -281888860827LL;
static volatile int8_t x862 = INT8_MIN;
volatile uint32_t x868 = 51204U;
volatile uint32_t t178 = 2729U;
volatile int8_t x869 = -1;
static uint32_t x879 = 42U;
int32_t x890 = INT32_MAX;
volatile int16_t x893 = INT16_MIN;
int64_t x898 = INT64_MAX;
int8_t x902 = INT8_MIN;
static volatile int32_t t186 = 0;
volatile uint32_t x908 = UINT32_MAX;
volatile uint8_t x928 = 4U;
int64_t x932 = -1LL;
volatile uint64_t t192 = 64354LLU;
static uint16_t x934 = UINT16_MAX;
int64_t x936 = INT64_MIN;
int64_t t193 = -12972770LL;
static int16_t x943 = -1;
int64_t x944 = 1LL;
uint16_t x951 = UINT16_MAX;
static volatile uint16_t x952 = UINT16_MAX;
int16_t x965 = INT16_MAX;


void f0(void) {
    	int64_t x1 = INT64_MAX;
	volatile int16_t x2 = -15354;
	int8_t x3 = 4;
	uint32_t x4 = 1381879U;
	volatile int64_t t0 = 280252846958099LL;

    t0 = ((x1/x2)-(x3+x4));

    if (t0 != -600714605840315LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x9 = 112U;
	int32_t x10 = -15859;
	int64_t x11 = -4568494501234582701LL;
	int32_t x12 = -442;
	volatile int64_t t1 = 105LL;

    t1 = ((x9/x10)-(x11+x12));

    if (t1 != 4568494501234583143LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x17 = 9;
	int32_t x18 = INT32_MAX;
	uint64_t x19 = 467LLU;
	volatile uint64_t t2 = 434350LLU;

    t2 = ((x17/x18)-(x19+x20));

    if (t2 != 18446744071562067502LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x22 = INT32_MIN;
	int8_t x23 = -7;
	int8_t x24 = INT8_MIN;
	static uint32_t t3 = 1807U;

    t3 = ((x21/x22)-(x23+x24));

    if (t3 != 136U) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x25 = UINT8_MAX;
	static int32_t x26 = INT32_MIN;
	int8_t x28 = -1;
	volatile int32_t t4 = -23;

    t4 = ((x25/x26)-(x27+x28));

    if (t4 != -32766) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x29 = -4607073;
	int8_t x30 = 5;
	uint8_t x31 = UINT8_MAX;
	int64_t x32 = 6938256150602LL;
	static volatile int64_t t5 = -1213701625LL;

    t5 = ((x29/x30)-(x31+x32));

    if (t5 != -6938257072271LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint32_t x33 = 0U;
	static int16_t x34 = INT16_MAX;
	volatile int8_t x35 = INT8_MIN;
	uint32_t t6 = 3U;

    t6 = ((x33/x34)-(x35+x36));

    if (t6 != 129U) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint16_t x37 = UINT16_MAX;
	int8_t x38 = 1;
	int16_t x39 = INT16_MIN;
	int64_t x40 = -1LL;

    t7 = ((x37/x38)-(x39+x40));

    if (t7 != 98304LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x41 = 112;
	static int16_t x42 = INT16_MAX;
	uint32_t x43 = UINT32_MAX;
	static int32_t x44 = INT32_MIN;
	uint32_t t8 = 165750854U;

    t8 = ((x41/x42)-(x43+x44));

    if (t8 != 2147483649U) { NG(); } else { ; }
	
}

void f9(void) {
    	uint16_t x45 = UINT16_MAX;
	int16_t x46 = 31;
	volatile int64_t x47 = 47429973LL;
	uint64_t x48 = 9490729869422249LLU;

    t9 = ((x45/x46)-(x47+x48));

    if (t9 != 18437253343792701508LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x49 = -1;
	uint8_t x50 = 7U;
	int8_t x51 = 1;
	int8_t x52 = INT8_MAX;
	static volatile int32_t t10 = 1614389;

    t10 = ((x49/x50)-(x51+x52));

    if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint32_t x54 = 369U;
	volatile uint8_t x55 = 42U;
	int16_t x56 = -19;
	uint32_t t11 = 20138U;

    t11 = ((x53/x54)-(x55+x56));

    if (t11 != 5819715U) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x58 = -3075650LL;
	int16_t x59 = INT16_MIN;

    t12 = ((x57/x58)-(x59+x60));

    if (t12 != 33467LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x61 = 41U;
	int32_t x62 = INT32_MAX;
	int32_t x63 = 129001286;
	int8_t x64 = INT8_MAX;

    t13 = ((x61/x62)-(x63+x64));

    if (t13 != -129001413) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x65 = -1;
	int16_t x66 = INT16_MIN;
	int64_t x68 = -229LL;

    t14 = ((x65/x66)-(x67+x68));

    if (t14 != -582701LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x69 = INT8_MAX;
	volatile int8_t x70 = -50;
	static uint32_t x71 = 76U;
	int32_t x72 = -1;
	static volatile uint32_t t15 = 6U;

    t15 = ((x69/x70)-(x71+x72));

    if (t15 != 4294967219U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x73 = INT16_MIN;
	volatile int32_t x74 = 906973268;
	static int8_t x75 = -1;
	uint16_t x76 = UINT16_MAX;
	volatile int32_t t16 = -1530855;

    t16 = ((x73/x74)-(x75+x76));

    if (t16 != -65534) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x78 = -8091;
	uint32_t x79 = UINT32_MAX;

    t17 = ((x77/x78)-(x79+x80));

    if (t17 != 4294967042U) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x81 = -1;
	int32_t x82 = 26175;
	uint8_t x83 = 89U;
	volatile int32_t t18 = -3953720;

    t18 = ((x81/x82)-(x83+x84));

    if (t18 != -88) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x85 = INT64_MIN;
	static volatile uint32_t x86 = 879735304U;
	volatile int64_t t19 = -135959026693LL;

    t19 = ((x85/x86)-(x87+x88));

    if (t19 != -10484258282LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x89 = UINT8_MAX;
	uint16_t x90 = 93U;
	int64_t x91 = INT64_MIN;
	uint32_t x92 = UINT32_MAX;
	volatile int64_t t20 = -16779978972144998LL;

    t20 = ((x89/x90)-(x91+x92));

    if (t20 != 9223372032559808515LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int64_t x94 = 35LL;
	uint16_t x95 = 47U;
	int64_t t21 = -294844691708LL;

    t21 = ((x93/x94)-(x95+x96));

    if (t21 != -17LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x109 = 1050381LLU;
	int64_t x111 = -154970320LL;
	int32_t x112 = INT32_MAX;
	uint64_t t22 = 32489150269LLU;

    t22 = ((x109/x110)-(x111+x112));

    if (t22 != 18446744071717188343LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x113 = -1;
	uint64_t x114 = UINT64_MAX;
	volatile uint32_t x115 = UINT32_MAX;
	volatile uint64_t t23 = 27558LLU;

    t23 = ((x113/x114)-(x115+x116));

    if (t23 != 18446744069414584323LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x118 = 61LLU;
	int8_t x119 = 0;
	uint32_t x120 = UINT32_MAX;
	uint64_t t24 = 822717253LLU;

    t24 = ((x117/x118)-(x119+x120));

    if (t24 != 151202815981340505LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x121 = UINT8_MAX;
	uint32_t x122 = UINT32_MAX;
	uint16_t x124 = UINT16_MAX;
	volatile uint32_t t25 = 1U;

    t25 = ((x121/x122)-(x123+x124));

    if (t25 != 4294901506U) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x125 = INT64_MAX;
	uint16_t x126 = UINT16_MAX;
	int8_t x127 = 23;
	int8_t x128 = INT8_MIN;
	int64_t t26 = -2692501375LL;

    t26 = ((x125/x126)-(x127+x128));

    if (t26 != 140739635871849LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int16_t x129 = INT16_MIN;
	static volatile int16_t x131 = 2306;
	static uint64_t x132 = UINT64_MAX;
	static volatile uint64_t t27 = 1469275025547LLU;

    t27 = ((x129/x130)-(x131+x132));

    if (t27 != 18446744073709549311LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x133 = 719377U;
	static volatile uint32_t x134 = 28982U;
	volatile int8_t x135 = 2;
	static int32_t x136 = 0;
	volatile uint32_t t28 = 215U;

    t28 = ((x133/x134)-(x135+x136));

    if (t28 != 22U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x145 = UINT32_MAX;
	static int8_t x146 = 25;
	static int32_t x147 = -161389;
	volatile uint8_t x148 = 15U;
	static uint32_t t29 = 863855086U;

    t29 = ((x145/x146)-(x147+x148));

    if (t29 != 171960065U) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x149 = INT64_MAX;
	int16_t x150 = INT16_MIN;
	int8_t x151 = INT8_MIN;
	int32_t x152 = INT32_MAX;
	static int64_t t30 = 7844803LL;

    t30 = ((x149/x150)-(x151+x152));

    if (t30 != -281477124194174LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x154 = INT16_MIN;
	int16_t x155 = INT16_MIN;
	int32_t x156 = -900084011;
	uint64_t t31 = 0LLU;

    t31 = ((x153/x154)-(x155+x156));

    if (t31 != 900116779LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x157 = -3763;
	uint16_t x158 = UINT16_MAX;
	int64_t x160 = INT64_MIN;
	int64_t t32 = -2524LL;

    t32 = ((x157/x158)-(x159+x160));

    if (t32 != 9223372036854775691LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x165 = 1654475638U;
	uint8_t x166 = 27U;
	int8_t x167 = INT8_MIN;
	uint64_t x168 = 15779610802877018LLU;

    t33 = ((x165/x166)-(x167+x168));

    if (t33 != 18430964462967951601LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int32_t x169 = INT32_MIN;
	int32_t x170 = INT32_MIN;
	static uint8_t x171 = 11U;
	int32_t x172 = -1;
	volatile int32_t t34 = 14;

    t34 = ((x169/x170)-(x171+x172));

    if (t34 != -9) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x173 = -1;
	volatile int32_t x174 = INT32_MAX;
	int16_t x175 = -1;
	uint16_t x176 = 1U;
	int32_t t35 = 449;

    t35 = ((x173/x174)-(x175+x176));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x181 = INT16_MIN;
	static int64_t x182 = INT64_MAX;
	int8_t x183 = INT8_MIN;
	int8_t x184 = INT8_MIN;
	static int64_t t36 = 82026LL;

    t36 = ((x181/x182)-(x183+x184));

    if (t36 != 256LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x185 = 0U;
	int64_t x186 = -1LL;
	volatile int64_t x187 = -620015596987001LL;
	int16_t x188 = INT16_MAX;

    t37 = ((x185/x186)-(x187+x188));

    if (t37 != 620015596954234LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x189 = 30721609838921LL;
	uint8_t x190 = 37U;
	int32_t x191 = -1;
	int8_t x192 = INT8_MIN;
	int64_t t38 = -59261625381743460LL;

    t38 = ((x189/x190)-(x191+x192));

    if (t38 != 830313779559LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint64_t x194 = 45LLU;
	int16_t x195 = -1096;
	int16_t x196 = INT16_MIN;
	volatile uint64_t t39 = 3031LLU;

    t39 = ((x193/x194)-(x195+x196));

    if (t39 != 47755722LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x197 = INT16_MIN;
	volatile uint16_t x198 = 9379U;
	uint8_t x199 = 2U;
	int64_t x200 = -1LL;
	static volatile int64_t t40 = -3115966250431LL;

    t40 = ((x197/x198)-(x199+x200));

    if (t40 != -4LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x205 = INT32_MIN;
	uint64_t x207 = 58LLU;
	static uint8_t x208 = 3U;
	volatile uint64_t t41 = 2141687060LLU;

    t41 = ((x205/x206)-(x207+x208));

    if (t41 != 16777155LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int32_t x213 = -366455;
	uint64_t x215 = 195070897061046519LLU;
	int8_t x216 = -1;
	uint64_t t42 = 3LLU;

    t42 = ((x213/x214)-(x215+x216));

    if (t42 != 18251673176648507960LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x229 = 11;
	int8_t x230 = INT8_MIN;
	uint8_t x232 = 1U;
	volatile int64_t t43 = -49129LL;

    t43 = ((x229/x230)-(x231+x232));

    if (t43 != 5423026120758482LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x233 = 3643U;
	int16_t x234 = 51;
	int64_t x235 = INT64_MIN;
	static uint16_t x236 = 2965U;
	volatile int64_t t44 = -2816LL;

    t44 = ((x233/x234)-(x235+x236));

    if (t44 != 9223372036854772914LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x237 = -1;
	static volatile int64_t x238 = INT64_MIN;
	int16_t x240 = 109;
	volatile int64_t t45 = -5037LL;

    t45 = ((x237/x238)-(x239+x240));

    if (t45 != -108LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x242 = 1;
	int64_t x243 = -1LL;
	int64_t x244 = 494568778950LL;
	int64_t t46 = -29LL;

    t46 = ((x241/x242)-(x243+x244));

    if (t46 != -494568778950LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x249 = INT8_MIN;
	static int32_t x250 = -1;
	uint16_t x252 = 1306U;
	int32_t t47 = -970;

    t47 = ((x249/x250)-(x251+x252));

    if (t47 != -1433) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint8_t x254 = UINT8_MAX;
	int32_t x255 = -1;
	uint64_t x256 = 1821345LLU;
	volatile uint64_t t48 = 64318048441470LLU;

    t48 = ((x253/x254)-(x255+x256));

    if (t48 != 18446744073707730272LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x261 = 344510LLU;
	static volatile uint32_t x262 = UINT32_MAX;
	int16_t x263 = 396;
	uint64_t t49 = 132232564784886LLU;

    t49 = ((x261/x262)-(x263+x264));

    if (t49 != 18446744073708460463LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x266 = -544;
	volatile uint32_t x267 = 223153382U;
	int8_t x268 = -1;

    t50 = ((x265/x266)-(x267+x268));

    if (t50 != -3979301608267LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x270 = -1LL;
	uint64_t x271 = UINT64_MAX;
	uint64_t t51 = 379496988LLU;

    t51 = ((x269/x270)-(x271+x272));

    if (t51 != 127LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x274 = INT32_MAX;
	int64_t x275 = -1LL;
	uint8_t x276 = UINT8_MAX;
	volatile int64_t t52 = 2LL;

    t52 = ((x273/x274)-(x275+x276));

    if (t52 != -254LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x277 = INT8_MAX;
	int8_t x279 = 0;
	int64_t x280 = -1LL;
	static volatile int64_t t53 = -178280373844642LL;

    t53 = ((x277/x278)-(x279+x280));

    if (t53 != 128LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x285 = 121922100;
	static volatile uint8_t x286 = UINT8_MAX;
	volatile int8_t x287 = INT8_MAX;
	uint64_t x288 = 245LLU;
	volatile uint64_t t54 = 2439672317836LLU;

    t54 = ((x285/x286)-(x287+x288));

    if (t54 != 477753LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x289 = -1;
	volatile int64_t x290 = 9492LL;
	int32_t x292 = 75389;
	volatile int64_t t55 = 146275731LL;

    t55 = ((x289/x290)-(x291+x292));

    if (t55 != -75700LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x293 = 1239LLU;
	int8_t x294 = -1;
	int64_t x296 = -1LL;
	static uint64_t t56 = 27LLU;

    t56 = ((x293/x294)-(x295+x296));

    if (t56 != 2LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x297 = -1;
	int8_t x298 = INT8_MIN;
	int8_t x299 = INT8_MAX;
	uint32_t x300 = 1U;
	volatile uint32_t t57 = 7U;

    t57 = ((x297/x298)-(x299+x300));

    if (t57 != 4294967168U) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x301 = -1;
	uint8_t x302 = UINT8_MAX;
	int32_t x304 = -214688;
	int32_t t58 = 205744879;

    t58 = ((x301/x302)-(x303+x304));

    if (t58 != 214667) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x309 = -1;
	uint64_t x310 = 11269310LLU;
	int16_t x311 = -19;
	volatile uint64_t t59 = 20550892LLU;

    t59 = ((x309/x310)-(x311+x312));

    if (t59 != 1636900934636LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x313 = 0;
	int8_t x315 = -1;

    t60 = ((x313/x314)-(x315+x316));

    if (t60 != 18446743656308235798LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x318 = 1;
	int16_t x319 = INT16_MIN;
	int16_t x320 = INT16_MIN;
	int64_t t61 = 32871LL;

    t61 = ((x317/x318)-(x319+x320));

    if (t61 != 65541LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x321 = 3545;
	int16_t x322 = INT16_MIN;
	uint16_t x323 = 18050U;
	volatile int16_t x324 = INT16_MIN;
	int32_t t62 = 6627;

    t62 = ((x321/x322)-(x323+x324));

    if (t62 != 14718) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x325 = -1;
	int16_t x326 = -174;
	int8_t x327 = -4;
	int8_t x328 = INT8_MIN;
	volatile int32_t t63 = -210645241;

    t63 = ((x325/x326)-(x327+x328));

    if (t63 != 132) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x329 = -1750024;
	static int8_t x330 = INT8_MIN;
	uint32_t x331 = 22740U;
	int32_t x332 = -1;
	uint32_t t64 = 30698058U;

    t64 = ((x329/x330)-(x331+x332));

    if (t64 != 4294958229U) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x337 = INT32_MIN;
	int64_t x338 = INT64_MAX;
	volatile int16_t x339 = INT16_MAX;
	int8_t x340 = INT8_MIN;

    t65 = ((x337/x338)-(x339+x340));

    if (t65 != -32639LL) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint64_t x346 = 15721308852674LLU;
	int8_t x347 = 1;
	int32_t x348 = 537;
	uint64_t t66 = 273557380391612201LLU;

    t66 = ((x345/x346)-(x347+x348));

    if (t66 != 1172821LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x349 = -1;
	int16_t x350 = 15427;
	volatile int32_t t67 = -27275;

    t67 = ((x349/x350)-(x351+x352));

    if (t67 != 32315) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint64_t x353 = UINT64_MAX;
	int32_t x354 = -6;
	uint16_t x355 = UINT16_MAX;
	uint64_t t68 = 31LLU;

    t68 = ((x353/x354)-(x355+x356));

    if (t68 != 18446744073709485958LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x357 = 3U;
	int64_t x358 = -1LL;
	volatile int64_t t69 = 41793286LL;

    t69 = ((x357/x358)-(x359+x360));

    if (t69 != -2147557607LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x362 = INT32_MIN;
	static int64_t x363 = -2787720LL;
	int16_t x364 = -481;

    t70 = ((x361/x362)-(x363+x364));

    if (t70 != 2788201LL) { NG(); } else { ; }
	
}

void f71(void) {
    	static int64_t x366 = INT64_MIN;
	static uint32_t x367 = 557303U;
	int64_t t71 = -6041LL;

    t71 = ((x365/x366)-(x367+x368));

    if (t71 != -557302LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x369 = 12148022361LL;
	uint8_t x371 = 1U;
	uint16_t x372 = 2840U;

    t72 = ((x369/x370)-(x371+x372));

    if (t72 != 47636462LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x377 = INT64_MIN;
	int16_t x378 = INT16_MIN;
	int32_t x379 = INT32_MAX;
	uint8_t x380 = 0U;
	int64_t t73 = 950180903187526LL;

    t73 = ((x377/x378)-(x379+x380));

    if (t73 != 281472829227009LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x381 = 0;
	static uint8_t x382 = 23U;
	static int8_t x383 = INT8_MIN;
	int32_t x384 = -56179519;
	int32_t t74 = -3284012;

    t74 = ((x381/x382)-(x383+x384));

    if (t74 != 56179647) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x385 = INT64_MAX;
	static volatile uint64_t x386 = 1263030729563LLU;
	int8_t x387 = 0;
	uint8_t x388 = 1U;

    t75 = ((x385/x386)-(x387+x388));

    if (t75 != 7302570LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x389 = 2U;
	static uint8_t x390 = UINT8_MAX;
	static uint16_t x391 = UINT16_MAX;
	static uint16_t x392 = 64U;
	int32_t t76 = -3;

    t76 = ((x389/x390)-(x391+x392));

    if (t76 != -65599) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x393 = INT8_MIN;
	uint8_t x394 = UINT8_MAX;
	volatile int8_t x395 = 43;
	int32_t t77 = -11943;

    t77 = ((x393/x394)-(x395+x396));

    if (t77 != -31989) { NG(); } else { ; }
	
}

void f78(void) {
    	static int32_t x401 = INT32_MIN;
	uint32_t x402 = 5U;
	uint64_t x403 = 61777LLU;
	volatile int32_t x404 = -129742950;
	volatile uint64_t t78 = 15LLU;

    t78 = ((x401/x402)-(x403+x404));

    if (t78 != 559177902LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x409 = INT64_MIN;
	int16_t x410 = 14;
	volatile int64_t x411 = 2515458LL;
	static int8_t x412 = INT8_MIN;
	int64_t t79 = 907LL;

    t79 = ((x409/x410)-(x411+x412));

    if (t79 != -658812288349285030LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x413 = 15U;
	int64_t x414 = 6756356951484399LL;
	uint64_t x415 = 8286324380700LLU;
	volatile uint64_t t80 = 430428920LLU;

    t80 = ((x413/x414)-(x415+x416));

    if (t80 != 18446735785237687269LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x418 = INT32_MIN;
	volatile int8_t x419 = -1;
	volatile int32_t t81 = 53031417;

    t81 = ((x417/x418)-(x419+x420));

    if (t81 != 129) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x421 = 6U;
	int64_t x422 = INT64_MIN;
	int16_t x423 = INT16_MAX;
	static int8_t x424 = INT8_MIN;
	static int64_t t82 = 300796737963573LL;

    t82 = ((x421/x422)-(x423+x424));

    if (t82 != -32639LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x425 = 11U;
	int16_t x426 = -1;
	int8_t x427 = INT8_MIN;
	volatile uint64_t x428 = 26272373987LLU;
	uint64_t t83 = 4271328274LLU;

    t83 = ((x425/x426)-(x427+x428));

    if (t83 != 18446744047437177746LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x429 = -15279;
	volatile int64_t x430 = INT64_MAX;
	int32_t x431 = INT32_MIN;

    t84 = ((x429/x430)-(x431+x432));

    if (t84 != 2147483643LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x437 = 306;
	int8_t x438 = INT8_MIN;
	int16_t x439 = -5;
	int8_t x440 = INT8_MAX;
	static volatile int32_t t85 = -81575248;

    t85 = ((x437/x438)-(x439+x440));

    if (t85 != -124) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x441 = 84054U;
	int16_t x442 = -1;
	uint8_t x443 = UINT8_MAX;
	volatile int32_t x444 = -3977;
	volatile uint32_t t86 = 6775072U;

    t86 = ((x441/x442)-(x443+x444));

    if (t86 != 3722U) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x445 = -126120261874738LL;
	static int16_t x447 = INT16_MIN;
	volatile int64_t t87 = 24018LL;

    t87 = ((x445/x446)-(x447+x448));

    if (t87 != 6005726788835LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint8_t x449 = 60U;
	int32_t x450 = INT32_MAX;
	int64_t x451 = INT64_MAX;
	int64_t x452 = INT64_MIN;
	int64_t t88 = -24218198690206LL;

    t88 = ((x449/x450)-(x451+x452));

    if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x453 = INT16_MIN;
	int64_t x454 = INT64_MIN;
	int8_t x455 = 7;
	static uint64_t x456 = 144949809365879353LLU;
	uint64_t t89 = 434138937529LLU;

    t89 = ((x453/x454)-(x455+x456));

    if (t89 != 18301794264343672256LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x457 = -2LL;
	int16_t x458 = INT16_MIN;
	int8_t x459 = -2;
	volatile uint8_t x460 = UINT8_MAX;
	int64_t t90 = 0LL;

    t90 = ((x457/x458)-(x459+x460));

    if (t90 != -253LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint64_t x465 = UINT64_MAX;
	uint32_t x466 = 308682U;
	int8_t x467 = -1;
	volatile uint64_t x468 = 137066745189LLU;
	volatile uint64_t t91 = 266201923390116LLU;

    t91 = ((x465/x466)-(x467+x468));

    if (t91 != 59622634415584LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x470 = 1U;
	static int16_t x471 = -1;
	static volatile int32_t x472 = INT32_MAX;

    t92 = ((x469/x470)-(x471+x472));

    if (t92 != -2147450879) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x473 = INT32_MIN;
	uint64_t x474 = 34629810LLU;
	volatile int64_t x475 = -63291491LL;
	int16_t x476 = INT16_MAX;
	static volatile uint64_t t93 = 126LLU;

    t93 = ((x473/x474)-(x475+x476));

    if (t93 != 532747211409LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x477 = UINT16_MAX;
	volatile int64_t x478 = -153LL;
	static int32_t x479 = INT32_MIN;
	int64_t x480 = 12587751LL;

    t94 = ((x477/x478)-(x479+x480));

    if (t94 != 2134895469LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x489 = INT8_MAX;
	static uint8_t x490 = 1U;
	int32_t x491 = -23;
	int32_t t95 = 4105841;

    t95 = ((x489/x490)-(x491+x492));

    if (t95 != 149) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x493 = 25;
	volatile int64_t x494 = INT64_MIN;
	static int32_t x495 = 60599626;
	static int64_t t96 = -31435821266LL;

    t96 = ((x493/x494)-(x495+x496));

    if (t96 != -60599627LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x497 = 769320767278502LL;
	int32_t x498 = INT32_MAX;
	int16_t x499 = INT16_MIN;
	int64_t t97 = 205685657813764730LL;

    t97 = ((x497/x498)-(x499+x500));

    if (t97 != 391024LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x501 = 42U;
	uint64_t x502 = 33393200872LLU;
	volatile int32_t x503 = -1;
	static int64_t x504 = 94231LL;
	uint64_t t98 = 695190096597824000LLU;

    t98 = ((x501/x502)-(x503+x504));

    if (t98 != 18446744073709457386LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x513 = UINT32_MAX;
	int64_t x514 = INT64_MIN;
	static uint32_t x515 = 1218938U;
	uint16_t x516 = 0U;
	static volatile int64_t t99 = 87959601474561LL;

    t99 = ((x513/x514)-(x515+x516));

    if (t99 != -1218938LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x517 = INT8_MIN;
	static uint64_t x518 = UINT64_MAX;
	int16_t x520 = INT16_MIN;
	uint64_t t100 = 28522675LLU;

    t100 = ((x517/x518)-(x519+x520));

    if (t100 != 32896LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x521 = INT8_MAX;
	uint16_t x523 = 181U;
	volatile uint8_t x524 = UINT8_MAX;
	volatile int32_t t101 = -39;

    t101 = ((x521/x522)-(x523+x524));

    if (t101 != -436) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint8_t x525 = UINT8_MAX;
	uint8_t x526 = UINT8_MAX;
	uint64_t x528 = 1LLU;
	volatile uint64_t t102 = 102719548211LLU;

    t102 = ((x525/x526)-(x527+x528));

    if (t102 != 1LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static int16_t x530 = INT16_MAX;
	int32_t x531 = -1;
	volatile uint32_t x532 = 1U;
	uint32_t t103 = 957U;

    t103 = ((x529/x530)-(x531+x532));

    if (t103 != 0U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x534 = UINT16_MAX;
	int32_t x536 = INT32_MIN;
	int32_t t104 = -262026903;

    t104 = ((x533/x534)-(x535+x536));

    if (t104 != 2147483627) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x537 = UINT16_MAX;
	int32_t x538 = -1;
	int64_t x539 = -7082LL;
	uint32_t x540 = 34U;
	static volatile int64_t t105 = -6024LL;

    t105 = ((x537/x538)-(x539+x540));

    if (t105 != -58487LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x541 = 7326U;
	volatile int16_t x542 = -30;
	static int16_t x544 = INT16_MIN;
	volatile int64_t t106 = -1408783134555761856LL;

    t106 = ((x541/x542)-(x543+x544));

    if (t106 != -9223372036854743283LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x545 = UINT32_MAX;
	volatile uint64_t x547 = 600410112064501LLU;
	static uint64_t t107 = 271385942854403119LLU;

    t107 = ((x545/x546)-(x547+x548));

    if (t107 != 18446143663850132378LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x549 = 207779828963481LLU;
	uint32_t x550 = UINT32_MAX;
	int64_t x551 = INT64_MAX;

    t108 = ((x549/x550)-(x551+x552));

    if (t108 != 9223372036854824186LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int16_t x558 = INT16_MIN;
	static uint32_t x560 = 442U;
	uint32_t t109 = 5U;

    t109 = ((x557/x558)-(x559+x560));

    if (t109 != 4294966521U) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint8_t x561 = 0U;
	int32_t x562 = -21184;
	uint32_t x564 = 0U;
	uint32_t t110 = 41U;

    t110 = ((x561/x562)-(x563+x564));

    if (t110 != 4294960336U) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x565 = -1;
	int8_t x566 = -40;
	int64_t x568 = -500642149839325LL;
	static int64_t t111 = -2339047526683787200LL;

    t111 = ((x565/x566)-(x567+x568));

    if (t111 != 500642149839114LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x569 = 1LL;
	static uint64_t x571 = 1675226568LLU;
	uint8_t x572 = 7U;
	uint64_t t112 = 506667059164958LLU;

    t112 = ((x569/x570)-(x571+x572));

    if (t112 != 18446744072034325041LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x574 = INT16_MIN;
	volatile uint64_t x576 = UINT64_MAX;
	volatile uint64_t t113 = 2870435319962005963LLU;

    t113 = ((x573/x574)-(x575+x576));

    if (t113 != 18446744073709290657LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x577 = 58716245883922408LLU;
	uint16_t x579 = UINT16_MAX;

    t114 = ((x577/x578)-(x579+x580));

    if (t114 != 2147418113LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x581 = 2753U;
	int16_t x582 = INT16_MAX;
	int64_t x583 = -339659735557LL;
	int64_t t115 = 0LL;

    t115 = ((x581/x582)-(x583+x584));

    if (t115 != 339659735558LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint8_t x585 = UINT8_MAX;
	static int64_t x586 = 525901933371361LL;
	int8_t x588 = -14;
	volatile uint64_t t116 = 1778097329353623LLU;

    t116 = ((x585/x586)-(x587+x588));

    if (t116 != 18446744073282026448LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x589 = 0LL;
	volatile int8_t x590 = INT8_MAX;
	uint8_t x591 = UINT8_MAX;
	volatile int8_t x592 = 1;
	int64_t t117 = 6827166160564LL;

    t117 = ((x589/x590)-(x591+x592));

    if (t117 != -256LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x593 = INT32_MAX;
	int8_t x594 = 3;
	uint16_t x596 = 178U;
	uint64_t t118 = 18869144601516753LLU;

    t118 = ((x593/x594)-(x595+x596));

    if (t118 != 18445932903740606112LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x597 = 226306040U;
	int32_t x598 = -1;
	static uint8_t x599 = 2U;
	int32_t x600 = 139;
	static uint32_t t119 = 6495U;

    t119 = ((x597/x598)-(x599+x600));

    if (t119 != 4294967155U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x601 = UINT8_MAX;
	int16_t x602 = INT16_MIN;
	int8_t x603 = INT8_MIN;

    t120 = ((x601/x602)-(x603+x604));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x606 = 89LLU;
	static int8_t x607 = INT8_MAX;
	static uint64_t x608 = 6067743LLU;
	static volatile uint64_t t121 = 23530974987702LLU;

    t121 = ((x605/x606)-(x607+x608));

    if (t121 != 18446744073703483854LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint32_t x609 = 0U;
	static int32_t x611 = 482502787;
	static int8_t x612 = -1;
	volatile uint32_t t122 = 2U;

    t122 = ((x609/x610)-(x611+x612));

    if (t122 != 3812464510U) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x614 = 32;
	int32_t x615 = -1;
	static int64_t x616 = 31884LL;
	int64_t t123 = 5350573127014LL;

    t123 = ((x613/x614)-(x615+x616));

    if (t123 != -31883LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x617 = UINT8_MAX;
	volatile int16_t x618 = INT16_MAX;
	volatile uint16_t x619 = 0U;

    t124 = ((x617/x618)-(x619+x620));

    if (t124 != -29) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x625 = INT16_MIN;
	volatile int64_t t125 = 119801653LL;

    t125 = ((x625/x626)-(x627+x628));

    if (t125 != -250984LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x629 = 1034174U;
	static volatile int8_t x631 = INT8_MIN;
	uint8_t x632 = 118U;
	volatile uint64_t t126 = 208LLU;

    t126 = ((x629/x630)-(x631+x632));

    if (t126 != 10LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x633 = INT32_MIN;
	uint32_t x635 = 814024U;
	int32_t x636 = INT32_MAX;
	volatile uint32_t t127 = 15923753U;

    t127 = ((x633/x634)-(x635+x636));

    if (t127 != 2146669626U) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint8_t x637 = 0U;
	volatile uint16_t x638 = 96U;
	uint8_t x639 = UINT8_MAX;
	int32_t x640 = -87172994;
	volatile int32_t t128 = -13507350;

    t128 = ((x637/x638)-(x639+x640));

    if (t128 != 87172739) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x641 = 0;
	int64_t x642 = 59492LL;
	int16_t x643 = 13871;
	volatile int64_t t129 = -59799030026LL;

    t129 = ((x641/x642)-(x643+x644));

    if (t129 != 88495560LL) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x645 = INT64_MIN;
	int64_t x646 = INT64_MIN;
	volatile int8_t x647 = INT8_MIN;
	uint32_t x648 = UINT32_MAX;
	int64_t t130 = -831609329156895LL;

    t130 = ((x645/x646)-(x647+x648));

    if (t130 != -4294967166LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x649 = -1;
	int32_t x650 = INT32_MIN;
	int32_t x651 = -49026815;
	uint16_t x652 = 212U;
	static int32_t t131 = 7;

    t131 = ((x649/x650)-(x651+x652));

    if (t131 != 49026603) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint16_t x653 = 61U;
	volatile uint64_t x654 = 10510127438LLU;
	uint32_t x655 = 407799U;
	int8_t x656 = INT8_MIN;
	static volatile uint64_t t132 = 979848555297160998LLU;

    t132 = ((x653/x654)-(x655+x656));

    if (t132 != 18446744073709143945LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x658 = 54459172LLU;
	int32_t x659 = -1;
	int32_t x660 = 3;
	volatile uint64_t t133 = 13883632186203422LLU;

    t133 = ((x657/x658)-(x659+x660));

    if (t133 != 338726120801LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint32_t x661 = 866895730U;
	int16_t x662 = -18;
	int16_t x663 = INT16_MAX;
	uint8_t x664 = UINT8_MAX;
	volatile uint32_t t134 = 122U;

    t134 = ((x661/x662)-(x663+x664));

    if (t134 != 4294934274U) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x665 = -1LL;
	static int64_t x666 = INT64_MAX;
	static int32_t x667 = INT32_MAX;
	uint32_t x668 = 718210U;

    t135 = ((x665/x666)-(x667+x668));

    if (t135 != -2148201857LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x670 = INT64_MIN;
	static uint8_t x671 = UINT8_MAX;
	static int64_t t136 = -177872042599LL;

    t136 = ((x669/x670)-(x671+x672));

    if (t136 != -65790LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x673 = INT16_MIN;
	int16_t x675 = INT16_MIN;
	static uint64_t x676 = 32772593LLU;
	uint64_t t137 = 12467245879LLU;

    t137 = ((x673/x674)-(x675+x676));

    if (t137 != 18446744073676811790LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x677 = INT64_MIN;
	int8_t x678 = INT8_MAX;
	volatile int16_t x679 = 54;
	uint16_t x680 = 184U;
	static int64_t t138 = 382LL;

    t138 = ((x677/x678)-(x679+x680));

    if (t138 != -72624976668148079LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x685 = 3LL;
	int64_t x686 = -1LL;
	volatile uint32_t x687 = 957871491U;
	uint64_t x688 = UINT64_MAX;
	volatile uint64_t t139 = 75232477LLU;

    t139 = ((x685/x686)-(x687+x688));

    if (t139 != 18446744072751680123LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x693 = 3U;
	volatile uint8_t x694 = 98U;
	int8_t x695 = 1;
	static uint32_t x696 = 8463554U;
	volatile uint32_t t140 = 3814U;

    t140 = ((x693/x694)-(x695+x696));

    if (t140 != 4286503741U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x697 = 27188U;
	int8_t x698 = -1;
	uint64_t x699 = 8146957062882859LLU;
	volatile uint64_t t141 = 50506LLU;

    t141 = ((x697/x698)-(x699+x700));

    if (t141 != 18438597116646641570LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x705 = UINT16_MAX;
	volatile uint8_t x706 = 115U;
	volatile int8_t x707 = -1;
	int16_t x708 = INT16_MIN;
	int32_t t142 = -27;

    t142 = ((x705/x706)-(x707+x708));

    if (t142 != 33338) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x709 = 98556LLU;
	uint32_t x712 = 1U;
	volatile uint64_t t143 = 374326480937LLU;

    t143 = ((x709/x710)-(x711+x712));

    if (t143 != 18446744073708440462LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x713 = INT8_MAX;
	static volatile uint16_t x715 = 372U;
	int32_t x716 = INT32_MIN;

    t144 = ((x713/x714)-(x715+x716));

    if (t144 != 2147483276) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x717 = 16492LL;
	uint16_t x718 = UINT16_MAX;
	static volatile int8_t x720 = INT8_MAX;
	volatile int64_t t145 = 0LL;

    t145 = ((x717/x718)-(x719+x720));

    if (t145 != -127LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x721 = 1U;
	volatile int32_t x722 = 25;
	uint32_t x723 = 1U;

    t146 = ((x721/x722)-(x723+x724));

    if (t146 != 2147483647U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x725 = UINT8_MAX;
	uint32_t x726 = UINT32_MAX;
	uint64_t x727 = 19LLU;
	int8_t x728 = INT8_MAX;
	static volatile uint64_t t147 = 259680587067097LLU;

    t147 = ((x725/x726)-(x727+x728));

    if (t147 != 18446744073709551470LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x729 = UINT32_MAX;
	int32_t x730 = -1;
	int32_t x731 = 665;
	int8_t x732 = -52;
	uint32_t t148 = 1U;

    t148 = ((x729/x730)-(x731+x732));

    if (t148 != 4294966684U) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x733 = 123791;
	volatile uint8_t x735 = UINT8_MAX;

    t149 = ((x733/x734)-(x735+x736));

    if (t149 != -296LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int16_t x741 = 1;
	static int8_t x742 = -1;
	uint64_t x743 = 96461LLU;
	uint32_t x744 = 732788692U;
	static uint64_t t150 = 478875483529664LLU;

    t150 = ((x741/x742)-(x743+x744));

    if (t150 != 18446744072976666462LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x745 = -291984179;
	uint16_t x747 = UINT16_MAX;
	uint64_t x748 = 0LLU;
	uint64_t t151 = 116LLU;

    t151 = ((x745/x746)-(x747+x748));

    if (t151 != 291918644LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x749 = INT32_MIN;
	int16_t x751 = INT16_MIN;
	int32_t x752 = INT32_MAX;
	volatile int32_t t152 = 2083;

    t152 = ((x749/x750)-(x751+x752));

    if (t152 != -2130673663) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x757 = INT16_MIN;
	static int8_t x758 = INT8_MIN;
	volatile int8_t x759 = INT8_MIN;
	uint32_t x760 = 3411U;
	volatile uint32_t t153 = 86354232U;

    t153 = ((x757/x758)-(x759+x760));

    if (t153 != 4294964269U) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile uint64_t x761 = 302901769464LLU;
	static uint32_t x763 = 3825U;
	int64_t x764 = 540247713370770789LL;
	static uint64_t t154 = 17757LLU;

    t154 = ((x761/x762)-(x763+x764));

    if (t154 != 17906496511789661734LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x765 = 3U;
	int16_t x766 = INT16_MIN;
	int64_t x767 = INT64_MIN;
	volatile int64_t t155 = -864534LL;

    t155 = ((x765/x766)-(x767+x768));

    if (t155 != 1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x769 = 1520U;
	uint32_t x770 = UINT32_MAX;
	uint16_t x771 = 164U;
	volatile int16_t x772 = INT16_MAX;
	uint32_t t156 = 469U;

    t156 = ((x769/x770)-(x771+x772));

    if (t156 != 4294934365U) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x773 = INT16_MIN;
	int16_t x774 = 303;
	int8_t x775 = INT8_MAX;
	volatile int32_t t157 = -419;

    t157 = ((x773/x774)-(x775+x776));

    if (t157 != 266) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x777 = -1;
	int64_t x778 = INT64_MIN;
	uint32_t x779 = 25U;
	volatile int64_t x780 = INT64_MIN;
	volatile int64_t t158 = -248773LL;

    t158 = ((x777/x778)-(x779+x780));

    if (t158 != 9223372036854775783LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x782 = UINT8_MAX;
	static int16_t x783 = INT16_MAX;
	uint16_t x784 = 9U;
	static volatile int32_t t159 = 11367211;

    t159 = ((x781/x782)-(x783+x784));

    if (t159 != -32775) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x785 = INT16_MAX;
	uint8_t x786 = 59U;
	int32_t x787 = 1;
	int32_t x788 = 25;
	static volatile int32_t t160 = 114;

    t160 = ((x785/x786)-(x787+x788));

    if (t160 != 529) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int64_t x789 = -1LL;
	volatile int8_t x790 = INT8_MIN;
	int8_t x791 = 17;
	int16_t x792 = -103;
	int64_t t161 = 5552LL;

    t161 = ((x789/x790)-(x791+x792));

    if (t161 != 86LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x793 = INT16_MAX;
	volatile int8_t x794 = -1;
	uint16_t x795 = 156U;
	int8_t x796 = -57;
	volatile int32_t t162 = 37496;

    t162 = ((x793/x794)-(x795+x796));

    if (t162 != -32866) { NG(); } else { ; }
	
}

void f163(void) {
    	static int32_t x797 = INT32_MIN;
	int8_t x798 = INT8_MIN;
	int32_t x799 = 324;
	static int16_t x800 = -1;
	int32_t t163 = 6836770;

    t163 = ((x797/x798)-(x799+x800));

    if (t163 != 16776893) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x801 = INT32_MIN;
	static uint64_t x802 = 642LLU;
	int8_t x803 = -1;
	volatile int8_t x804 = -24;
	uint64_t t164 = 381842LLU;

    t164 = ((x801/x802)-(x803+x804));

    if (t164 != 28733246217386423LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x805 = -3954;
	int64_t x806 = INT64_MIN;
	volatile int8_t x807 = -1;
	volatile int64_t t165 = 1692128146359LL;

    t165 = ((x805/x806)-(x807+x808));

    if (t165 != -14LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x811 = -143550LL;
	uint32_t x812 = 231291U;
	int64_t t166 = -89837107LL;

    t166 = ((x809/x810)-(x811+x812));

    if (t166 != -87741LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x813 = INT32_MIN;
	int32_t x814 = INT32_MAX;
	volatile int32_t t167 = -966351315;

    t167 = ((x813/x814)-(x815+x816));

    if (t167 != -2) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x817 = 2U;
	uint8_t x818 = UINT8_MAX;
	static volatile int16_t x819 = -2;

    t168 = ((x817/x818)-(x819+x820));

    if (t168 != 4) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x821 = 427034185;
	static int16_t x822 = 23;
	int8_t x823 = INT8_MIN;
	uint32_t x824 = UINT32_MAX;
	volatile uint32_t t169 = 20311U;

    t169 = ((x821/x822)-(x823+x824));

    if (t169 != 18566832U) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x826 = INT16_MAX;
	static uint64_t x827 = 49709197LLU;
	uint32_t x828 = 137139896U;
	uint64_t t170 = 693202331873LLU;

    t170 = ((x825/x826)-(x827+x828));

    if (t170 != 18446744073525918534LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x829 = INT8_MIN;
	int16_t x830 = INT16_MAX;
	int32_t x831 = -93612484;
	int16_t x832 = INT16_MIN;
	int32_t t171 = -6643;

    t171 = ((x829/x830)-(x831+x832));

    if (t171 != 93645252) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x837 = -1;
	uint8_t x838 = UINT8_MAX;
	static uint32_t x839 = UINT32_MAX;
	int64_t x840 = INT64_MIN;
	int64_t t172 = -1186946804LL;

    t172 = ((x837/x838)-(x839+x840));

    if (t172 != 9223372032559808513LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x841 = INT32_MAX;
	uint32_t x842 = UINT32_MAX;
	static uint8_t x843 = 0U;
	volatile int16_t x844 = INT16_MIN;
	uint32_t t173 = 703U;

    t173 = ((x841/x842)-(x843+x844));

    if (t173 != 32768U) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x849 = -1;
	int16_t x850 = INT16_MIN;
	uint32_t x852 = UINT32_MAX;
	uint32_t t174 = 7185468U;

    t174 = ((x849/x850)-(x851+x852));

    if (t174 != 4294952568U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x853 = 43U;
	volatile int64_t x854 = INT64_MAX;
	uint32_t x855 = 6822U;
	int16_t x856 = INT16_MIN;

    t175 = ((x853/x854)-(x855+x856));

    if (t175 != -4294941350LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x857 = 13U;
	uint64_t x858 = 53303LLU;
	int32_t x859 = INT32_MIN;
	static int8_t x860 = 12;
	static volatile uint64_t t176 = 222323846039LLU;

    t176 = ((x857/x858)-(x859+x860));

    if (t176 != 2147483636LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x861 = INT32_MAX;
	uint64_t x863 = 4LLU;
	static int64_t x864 = -8416LL;
	volatile uint64_t t177 = 2198575781337914477LLU;

    t177 = ((x861/x862)-(x863+x864));

    if (t177 != 18446744073692782813LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x865 = -3;
	static int8_t x866 = INT8_MAX;
	uint16_t x867 = 5U;

    t178 = ((x865/x866)-(x867+x868));

    if (t178 != 4294916087U) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x870 = INT64_MAX;
	uint16_t x871 = UINT16_MAX;
	int64_t x872 = 21118128LL;
	volatile int64_t t179 = -6306190LL;

    t179 = ((x869/x870)-(x871+x872));

    if (t179 != -21183663LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x873 = 0LL;
	static uint64_t x874 = 59862394LLU;
	int64_t x875 = 353357433679295289LL;
	static int16_t x876 = INT16_MIN;
	volatile uint64_t t180 = 259010LLU;

    t180 = ((x873/x874)-(x875+x876));

    if (t180 != 18093386640030289095LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint64_t x877 = 142111447018184044LLU;
	volatile int8_t x878 = INT8_MAX;
	uint64_t x880 = 1LLU;
	volatile uint64_t t181 = 28214996403247LLU;

    t181 = ((x877/x878)-(x879+x880));

    if (t181 != 1118987771796681LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int64_t x885 = -7649869417LL;
	int8_t x886 = -1;
	int8_t x887 = INT8_MIN;
	int32_t x888 = -1;
	int64_t t182 = 63009655764716LL;

    t182 = ((x885/x886)-(x887+x888));

    if (t182 != 7649869546LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x889 = -1;
	volatile uint8_t x891 = UINT8_MAX;
	int32_t x892 = INT32_MIN;
	int32_t t183 = 433449;

    t183 = ((x889/x890)-(x891+x892));

    if (t183 != 2147483393) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x894 = 58;
	int16_t x895 = 0;
	uint16_t x896 = UINT16_MAX;
	int32_t t184 = -7962;

    t184 = ((x893/x894)-(x895+x896));

    if (t184 != -66099) { NG(); } else { ; }
	
}

void f185(void) {
    	static int64_t x897 = 1688LL;
	int8_t x899 = INT8_MAX;
	uint16_t x900 = UINT16_MAX;
	static int64_t t185 = 261062063LL;

    t185 = ((x897/x898)-(x899+x900));

    if (t185 != -65662LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x901 = INT16_MIN;
	int16_t x903 = INT16_MAX;
	static int32_t x904 = -1;

    t186 = ((x901/x902)-(x903+x904));

    if (t186 != -32510) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x905 = 0;
	volatile int8_t x906 = INT8_MIN;
	uint8_t x907 = UINT8_MAX;
	volatile uint32_t t187 = 375646U;

    t187 = ((x905/x906)-(x907+x908));

    if (t187 != 4294967042U) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x909 = INT64_MAX;
	static volatile uint8_t x910 = UINT8_MAX;
	int8_t x911 = INT8_MIN;
	volatile int16_t x912 = -1;
	int64_t t188 = -50427LL;

    t188 = ((x909/x910)-(x911+x912));

    if (t188 != 36170086419038465LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int64_t x917 = INT64_MIN;
	int64_t x918 = 3570LL;
	uint64_t x919 = 723524140334LLU;
	uint64_t x920 = UINT64_MAX;
	static volatile uint64_t t189 = 13008636841LLU;

    t189 = ((x917/x918)-(x919+x920));

    if (t189 != 18444159772584051402LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x921 = 1231909U;
	uint8_t x922 = UINT8_MAX;
	int16_t x923 = INT16_MAX;
	static int8_t x924 = -1;
	volatile uint32_t t190 = 1230U;

    t190 = ((x921/x922)-(x923+x924));

    if (t190 != 4294939361U) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x925 = -20;
	uint64_t x926 = 2062922222LLU;
	static int64_t x927 = -123589398LL;
	volatile uint64_t t191 = 7461994247947534688LLU;

    t191 = ((x925/x926)-(x927+x928));

    if (t191 != 9065634749LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x929 = -1LL;
	uint64_t x930 = UINT64_MAX;
	int16_t x931 = -3541;

    t192 = ((x929/x930)-(x931+x932));

    if (t192 != 3543LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x933 = INT16_MIN;
	volatile uint16_t x935 = 1231U;

    t193 = ((x933/x934)-(x935+x936));

    if (t193 != 9223372036854774577LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int32_t x941 = INT32_MIN;
	int32_t x942 = INT32_MAX;
	int64_t t194 = -59565302779LL;

    t194 = ((x941/x942)-(x943+x944));

    if (t194 != -1LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x949 = -1;
	volatile int16_t x950 = 1;
	int32_t t195 = -240765366;

    t195 = ((x949/x950)-(x951+x952));

    if (t195 != -131071) { NG(); } else { ; }
	
}

void f196(void) {
    	static int64_t x957 = 23246LL;
	int16_t x958 = INT16_MAX;
	uint64_t x959 = UINT64_MAX;
	uint32_t x960 = 31175660U;
	volatile uint64_t t196 = 1035697383612732LLU;

    t196 = ((x957/x958)-(x959+x960));

    if (t196 != 18446744073678375957LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x966 = 63;
	uint8_t x967 = 53U;
	static int16_t x968 = -1651;
	volatile int32_t t197 = -150132748;

    t197 = ((x965/x966)-(x967+x968));

    if (t197 != 2118) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x969 = UINT16_MAX;
	uint8_t x970 = 38U;
	int8_t x971 = INT8_MIN;
	int64_t x972 = -1LL;
	volatile int64_t t198 = -1007684LL;

    t198 = ((x969/x970)-(x971+x972));

    if (t198 != 1853LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x973 = INT16_MAX;
	uint64_t x974 = UINT64_MAX;
	int64_t x975 = INT64_MAX;
	int16_t x976 = INT16_MIN;
	volatile uint64_t t199 = 4075LLU;

    t199 = ((x973/x974)-(x975+x976));

    if (t199 != 9223372036854808577LLU) { NG(); } else { ; }
	
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

