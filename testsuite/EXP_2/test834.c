
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

static int8_t x5 = INT8_MAX;
int64_t x10 = INT64_MAX;
uint8_t x13 = 14U;
int32_t x25 = 3;
static volatile uint8_t x28 = 44U;
static volatile int32_t t6 = 42;
int32_t x50 = -74426;
int64_t x51 = INT64_MIN;
int64_t x53 = INT64_MIN;
static volatile int8_t x57 = INT8_MAX;
int16_t x58 = -318;
int16_t x61 = INT16_MIN;
int32_t x87 = -3;
volatile int32_t x101 = INT32_MIN;
volatile uint32_t x103 = 1852U;
int32_t t15 = 1912;
static volatile uint32_t x117 = UINT32_MAX;
volatile uint8_t x120 = UINT8_MAX;
int32_t t18 = 61;
int32_t x127 = INT32_MAX;
static int64_t x137 = INT64_MIN;
static volatile int32_t t22 = 32885448;
volatile int64_t x157 = INT64_MIN;
int32_t x162 = -1;
uint64_t x164 = 7947390914LLU;
uint32_t x165 = 1934U;
uint16_t x166 = UINT16_MAX;
int32_t x168 = 1463159;
int32_t x172 = -54600011;
int16_t x173 = INT16_MIN;
static int32_t t29 = 5;
int8_t x180 = -1;
static volatile int32_t t30 = -7686826;
uint64_t x191 = 11LLU;
static volatile int32_t t34 = 84;
int32_t x198 = INT32_MIN;
volatile int32_t x200 = 190;
uint16_t x215 = 7870U;
int32_t x222 = -1;
volatile int32_t t39 = -190;
static volatile int32_t t43 = 12;
volatile int32_t t45 = 12309979;
volatile int32_t t47 = 57891;
static int32_t t48 = -236;
int8_t x277 = INT8_MAX;
static int16_t x282 = INT16_MAX;
volatile int64_t x288 = -4967575438324LL;
static int8_t x295 = INT8_MAX;
volatile int32_t t52 = -673;
uint32_t x298 = 918U;
uint16_t x299 = 49U;
uint32_t x312 = UINT32_MAX;
volatile int32_t x316 = 4671;
int16_t x320 = INT16_MIN;
int8_t x321 = -34;
uint16_t x327 = UINT16_MAX;
int64_t x328 = -34LL;
int8_t x330 = -1;
uint64_t x331 = 798352716633LLU;
uint8_t x332 = 2U;
static uint32_t x342 = 1670U;
int64_t x348 = -1LL;
int8_t x356 = -1;
static int8_t x361 = 29;
int32_t x363 = -168;
int32_t t68 = -26726290;
static volatile int32_t t69 = 363;
int8_t x402 = -54;
static uint64_t x407 = 89645894879532LLU;
int64_t x426 = 18222622862191LL;
int32_t t75 = -30929562;
int64_t x441 = -1LL;
static int8_t x443 = INT8_MIN;
int32_t t76 = 53871;
static uint16_t x448 = UINT16_MAX;
volatile int8_t x452 = INT8_MIN;
volatile int32_t t78 = 5667631;
uint8_t x453 = 45U;
volatile uint32_t x454 = 1021U;
uint32_t x470 = UINT32_MAX;
int16_t x472 = INT16_MAX;
int32_t t83 = -364971;
static int8_t x480 = INT8_MIN;
volatile int32_t x485 = -1;
static uint64_t x486 = UINT64_MAX;
volatile int8_t x487 = -56;
uint8_t x488 = 0U;
uint32_t x496 = 1186709536U;
int32_t t87 = 18651326;
volatile int8_t x497 = -1;
volatile uint64_t x500 = UINT64_MAX;
int64_t x509 = INT64_MAX;
static int8_t x512 = -1;
uint64_t x518 = 77LLU;
int32_t x531 = -257907427;
int64_t x542 = INT64_MAX;
int32_t t98 = -20;
volatile int32_t t100 = -58503;
uint64_t x578 = 547406345539LLU;
int32_t x586 = -37128742;
uint16_t x587 = 832U;
volatile int32_t t106 = 11;
uint32_t x590 = 26U;
int16_t x597 = -1;
int32_t t109 = -52;
volatile uint64_t x603 = UINT64_MAX;
int8_t x604 = INT8_MIN;
static volatile int32_t t110 = 31;
int32_t t111 = -5;
static volatile int32_t x622 = -566;
int32_t t115 = -6616575;
static int64_t x671 = INT64_MIN;
uint8_t x673 = 43U;
uint64_t x677 = 49068629780768414LLU;
int64_t x678 = INT64_MAX;
int32_t t118 = 262219;
int32_t x682 = -1;
int8_t x683 = -2;
int32_t x694 = INT32_MAX;
int16_t x702 = INT16_MIN;
uint16_t x712 = UINT16_MAX;
volatile int32_t t125 = 24791069;
int32_t x737 = INT32_MAX;
static int32_t x740 = INT32_MAX;
volatile uint32_t x750 = UINT32_MAX;
volatile int8_t x772 = INT8_MAX;
int32_t t134 = -61;
uint32_t x786 = 2U;
static int32_t t136 = -33753;
int64_t x793 = 6295424918LL;
int32_t x797 = INT32_MAX;
int64_t x800 = -35058083LL;
volatile int32_t t138 = 17;
uint64_t x803 = 411LLU;
volatile int32_t t141 = 71784;
uint64_t x815 = 1898135403851905506LLU;
int64_t x816 = INT64_MAX;
int64_t x821 = INT64_MIN;
int16_t x822 = INT16_MIN;
volatile int32_t x837 = -1;
volatile int32_t x856 = INT32_MIN;
static uint32_t x868 = 55206U;
int32_t t150 = -482636973;
int64_t x870 = INT64_MIN;
static int64_t x877 = INT64_MIN;
volatile int32_t t153 = -9569644;
volatile uint16_t x896 = 27U;
int64_t x898 = INT64_MIN;
int64_t x903 = 143LL;
volatile int32_t t157 = -66028365;
static int32_t t159 = 267380223;
int64_t x921 = INT64_MAX;
volatile int16_t x923 = INT16_MIN;
int32_t x925 = -1;
int64_t x929 = INT64_MAX;
static volatile int32_t t163 = -14;
int16_t x938 = 39;
uint64_t x943 = 9954149027LLU;
volatile int16_t x946 = -1;
uint64_t x953 = 285591845614806313LLU;
static uint32_t x988 = 44U;
int32_t t173 = 12209;
uint8_t x1000 = UINT8_MAX;
int64_t x1007 = INT64_MIN;
volatile int8_t x1028 = 20;
static int16_t x1043 = -107;
int32_t x1044 = INT32_MAX;
volatile int32_t t181 = -28835;
static uint16_t x1049 = 6U;
int16_t x1050 = INT16_MIN;
volatile int32_t t183 = 1299715;
int8_t x1057 = -32;
static int16_t x1058 = INT16_MIN;
uint8_t x1059 = UINT8_MAX;
volatile int16_t x1061 = INT16_MIN;
volatile int32_t x1062 = INT32_MAX;
uint64_t x1075 = 233683LLU;
volatile int32_t t188 = 800534066;
int32_t t189 = -214979340;
static volatile int64_t x1091 = INT64_MIN;
uint32_t x1094 = 280101U;
static uint64_t x1103 = 3899256572LLU;
uint64_t x1108 = UINT64_MAX;
uint64_t x1111 = 109572053LLU;
int8_t x1113 = INT8_MIN;
volatile int8_t x1114 = INT8_MIN;
volatile int32_t t196 = -6;
uint8_t x1134 = 14U;
static volatile int32_t x1135 = 11;


void f0(void) {
    	static volatile uint8_t x6 = UINT8_MAX;
	static volatile uint16_t x7 = 22U;
	uint32_t x8 = UINT32_MAX;
	int32_t t0 = -1452;

    t0 = ((x5/(x6%x7))==x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x9 = INT16_MAX;
	int32_t x11 = INT32_MIN;
	int8_t x12 = 5;
	int32_t t1 = 1563455;

    t1 = ((x9/(x10%x11))==x12);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int64_t x14 = -112283648651262351LL;
	static int16_t x15 = -20;
	volatile uint8_t x16 = UINT8_MAX;
	volatile int32_t t2 = 1;

    t2 = ((x13/(x14%x15))==x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x17 = -1;
	uint16_t x18 = 399U;
	int64_t x19 = INT64_MAX;
	int32_t x20 = INT32_MIN;
	int32_t t3 = -58852682;

    t3 = ((x17/(x18%x19))==x20);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x21 = INT8_MIN;
	int16_t x22 = -1;
	int64_t x23 = INT64_MAX;
	uint64_t x24 = 190LLU;
	int32_t t4 = -32313;

    t4 = ((x21/(x22%x23))==x24);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x26 = UINT32_MAX;
	int32_t x27 = INT32_MIN;
	volatile int32_t t5 = 86;

    t5 = ((x25/(x26%x27))==x28);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint16_t x29 = 6U;
	static volatile int8_t x30 = INT8_MAX;
	static volatile int8_t x31 = INT8_MIN;
	uint64_t x32 = 3054726889360LLU;

    t6 = ((x29/(x30%x31))==x32);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x37 = 331648U;
	uint8_t x38 = 127U;
	int32_t x39 = 62;
	volatile int16_t x40 = 13043;
	int32_t t7 = -99121;

    t7 = ((x37/(x38%x39))==x40);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x41 = -61;
	int32_t x42 = 30633103;
	int64_t x43 = INT64_MAX;
	uint64_t x44 = 554657835392088585LLU;
	int32_t t8 = -183182131;

    t8 = ((x41/(x42%x43))==x44);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint8_t x49 = UINT8_MAX;
	static int8_t x52 = INT8_MIN;
	int32_t t9 = -81296709;

    t9 = ((x49/(x50%x51))==x52);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x54 = 4819350U;
	volatile int8_t x55 = -15;
	static uint8_t x56 = 99U;
	volatile int32_t t10 = -195300;

    t10 = ((x53/(x54%x55))==x56);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int64_t x59 = INT64_MAX;
	volatile uint32_t x60 = UINT32_MAX;
	static int32_t t11 = -140578970;

    t11 = ((x57/(x58%x59))==x60);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x62 = INT16_MIN;
	uint64_t x63 = UINT64_MAX;
	uint8_t x64 = 0U;
	volatile int32_t t12 = 10570536;

    t12 = ((x61/(x62%x63))==x64);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x85 = INT32_MIN;
	static int16_t x86 = -26;
	int16_t x88 = INT16_MIN;
	static int32_t t13 = -3;

    t13 = ((x85/(x86%x87))==x88);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x102 = 145U;
	int16_t x104 = -1;
	int32_t t14 = -38;

    t14 = ((x101/(x102%x103))==x104);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int16_t x105 = INT16_MIN;
	static int8_t x106 = 7;
	volatile int8_t x107 = INT8_MIN;
	static int32_t x108 = INT32_MAX;

    t15 = ((x105/(x106%x107))==x108);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x109 = INT64_MIN;
	volatile int16_t x110 = INT16_MIN;
	int32_t x111 = INT32_MAX;
	int32_t x112 = 2;
	volatile int32_t t16 = 6;

    t16 = ((x109/(x110%x111))==x112);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x118 = UINT8_MAX;
	int16_t x119 = -504;
	int32_t t17 = -250395;

    t17 = ((x117/(x118%x119))==x120);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x121 = -1;
	uint64_t x122 = 16693435870LLU;
	int32_t x123 = INT32_MAX;
	uint16_t x124 = UINT16_MAX;

    t18 = ((x121/(x122%x123))==x124);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x125 = UINT64_MAX;
	static int8_t x126 = -1;
	int16_t x128 = -1;
	volatile int32_t t19 = -8071;

    t19 = ((x125/(x126%x127))==x128);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x138 = 200LLU;
	uint32_t x139 = 600175U;
	uint64_t x140 = UINT64_MAX;
	volatile int32_t t20 = 0;

    t20 = ((x137/(x138%x139))==x140);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x141 = -15;
	uint8_t x142 = 1U;
	int16_t x143 = 201;
	int16_t x144 = 401;
	volatile int32_t t21 = 41;

    t21 = ((x141/(x142%x143))==x144);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x145 = -1;
	static volatile int32_t x146 = INT32_MIN;
	int8_t x147 = 48;
	volatile int64_t x148 = 3078LL;

    t22 = ((x145/(x146%x147))==x148);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x149 = 33;
	int16_t x150 = INT16_MAX;
	int8_t x151 = INT8_MAX;
	uint32_t x152 = 4398U;
	int32_t t23 = -255;

    t23 = ((x149/(x150%x151))==x152);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint16_t x153 = 729U;
	int64_t x154 = INT64_MAX;
	int64_t x155 = -1715079470484086LL;
	int16_t x156 = INT16_MAX;
	int32_t t24 = -28142937;

    t24 = ((x153/(x154%x155))==x156);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x158 = -1LL;
	uint64_t x159 = 817032553LLU;
	int16_t x160 = -4790;
	int32_t t25 = -67710920;

    t25 = ((x157/(x158%x159))==x160);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x161 = UINT32_MAX;
	volatile int64_t x163 = -3102338542572LL;
	int32_t t26 = -245907171;

    t26 = ((x161/(x162%x163))==x164);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x167 = -6106009209462LL;
	static volatile int32_t t27 = 1;

    t27 = ((x165/(x166%x167))==x168);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x169 = -1;
	static uint32_t x170 = UINT32_MAX;
	static uint64_t x171 = 84680LLU;
	volatile int32_t t28 = 63;

    t28 = ((x169/(x170%x171))==x172);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x174 = -2;
	uint32_t x175 = 27U;
	uint32_t x176 = 261838U;

    t29 = ((x173/(x174%x175))==x176);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x177 = INT8_MAX;
	int16_t x178 = -1;
	volatile int8_t x179 = -26;

    t30 = ((x177/(x178%x179))==x180);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x181 = INT32_MAX;
	int16_t x182 = INT16_MAX;
	int32_t x183 = INT32_MAX;
	static volatile int64_t x184 = INT64_MIN;
	int32_t t31 = -792;

    t31 = ((x181/(x182%x183))==x184);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x185 = -1;
	int16_t x186 = INT16_MIN;
	volatile uint64_t x187 = 888LLU;
	uint64_t x188 = UINT64_MAX;
	volatile int32_t t32 = 0;

    t32 = ((x185/(x186%x187))==x188);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x189 = 49;
	static int32_t x190 = -45697;
	int32_t x192 = INT32_MIN;
	volatile int32_t t33 = -6781358;

    t33 = ((x189/(x190%x191))==x192);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile int16_t x193 = -1;
	uint8_t x194 = 17U;
	int8_t x195 = INT8_MAX;
	volatile uint8_t x196 = UINT8_MAX;

    t34 = ((x193/(x194%x195))==x196);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x197 = 617687743LLU;
	int64_t x199 = 260782LL;
	int32_t t35 = 15022;

    t35 = ((x197/(x198%x199))==x200);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x205 = 121U;
	static int16_t x206 = -1;
	volatile int32_t x207 = 34309;
	int8_t x208 = 6;
	static volatile int32_t t36 = -3415;

    t36 = ((x205/(x206%x207))==x208);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x213 = 7740LLU;
	int16_t x214 = -1133;
	int32_t x216 = -39253;
	int32_t t37 = 3;

    t37 = ((x213/(x214%x215))==x216);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x217 = INT16_MIN;
	volatile int16_t x218 = -1;
	uint8_t x219 = 5U;
	static int32_t x220 = INT32_MIN;
	int32_t t38 = -1;

    t38 = ((x217/(x218%x219))==x220);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x221 = INT16_MIN;
	int64_t x223 = INT64_MIN;
	volatile int32_t x224 = -2;

    t39 = ((x221/(x222%x223))==x224);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x225 = -1;
	static int16_t x226 = 1;
	volatile uint16_t x227 = 4U;
	int8_t x228 = INT8_MIN;
	volatile int32_t t40 = 17;

    t40 = ((x225/(x226%x227))==x228);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x229 = UINT32_MAX;
	int16_t x230 = INT16_MIN;
	volatile int32_t x231 = -600720664;
	int16_t x232 = INT16_MAX;
	volatile int32_t t41 = 1;

    t41 = ((x229/(x230%x231))==x232);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x233 = INT64_MIN;
	int32_t x234 = INT32_MAX;
	uint16_t x235 = 55U;
	int32_t x236 = -1;
	static volatile int32_t t42 = 1;

    t42 = ((x233/(x234%x235))==x236);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x241 = -6462959112702422LL;
	int8_t x242 = INT8_MIN;
	int8_t x243 = -10;
	uint8_t x244 = 9U;

    t43 = ((x241/(x242%x243))==x244);

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile uint16_t x245 = 156U;
	int64_t x246 = -1LL;
	int16_t x247 = INT16_MIN;
	int32_t x248 = INT32_MIN;
	int32_t t44 = -79;

    t44 = ((x245/(x246%x247))==x248);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x249 = 2U;
	uint8_t x250 = 37U;
	int8_t x251 = INT8_MIN;
	int8_t x252 = 1;

    t45 = ((x249/(x250%x251))==x252);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x257 = -1;
	int16_t x258 = INT16_MAX;
	int32_t x259 = INT32_MIN;
	int64_t x260 = INT64_MAX;
	int32_t t46 = 14204436;

    t46 = ((x257/(x258%x259))==x260);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x261 = 87U;
	uint64_t x262 = 653LLU;
	int64_t x263 = 1430528529205868130LL;
	uint8_t x264 = 63U;

    t47 = ((x261/(x262%x263))==x264);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x273 = -1;
	static volatile int64_t x274 = INT64_MIN;
	volatile int32_t x275 = 190541637;
	int8_t x276 = INT8_MIN;

    t48 = ((x273/(x274%x275))==x276);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x278 = INT8_MIN;
	uint64_t x279 = UINT64_MAX;
	static uint32_t x280 = UINT32_MAX;
	volatile int32_t t49 = -51650;

    t49 = ((x277/(x278%x279))==x280);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x281 = 588;
	volatile int16_t x283 = 34;
	static int8_t x284 = INT8_MAX;
	int32_t t50 = -107794785;

    t50 = ((x281/(x282%x283))==x284);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x285 = 12U;
	static uint64_t x286 = UINT64_MAX;
	volatile int16_t x287 = INT16_MIN;
	static int32_t t51 = 317088484;

    t51 = ((x285/(x286%x287))==x288);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint32_t x293 = 25034178U;
	int8_t x294 = INT8_MIN;
	static uint8_t x296 = UINT8_MAX;

    t52 = ((x293/(x294%x295))==x296);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x297 = 0;
	int32_t x300 = INT32_MAX;
	volatile int32_t t53 = 23;

    t53 = ((x297/(x298%x299))==x300);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x305 = INT8_MAX;
	int16_t x306 = INT16_MIN;
	int8_t x307 = -11;
	int32_t x308 = -1;
	volatile int32_t t54 = 3591;

    t54 = ((x305/(x306%x307))==x308);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x309 = 62403746;
	int8_t x310 = -30;
	volatile int16_t x311 = INT16_MIN;
	volatile int32_t t55 = -59;

    t55 = ((x309/(x310%x311))==x312);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int64_t x313 = -5558390473LL;
	static volatile int16_t x314 = INT16_MIN;
	int8_t x315 = INT8_MAX;
	int32_t t56 = 266783890;

    t56 = ((x313/(x314%x315))==x316);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x317 = 28;
	int16_t x318 = -3092;
	volatile int16_t x319 = -5022;
	static int32_t t57 = -27659340;

    t57 = ((x317/(x318%x319))==x320);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	static int32_t x322 = INT32_MAX;
	int64_t x323 = 75917LL;
	static int16_t x324 = -7643;
	volatile int32_t t58 = -4342458;

    t58 = ((x321/(x322%x323))==x324);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x325 = -7712LL;
	volatile uint8_t x326 = 3U;
	static volatile int32_t t59 = 0;

    t59 = ((x325/(x326%x327))==x328);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x329 = UINT32_MAX;
	volatile int32_t t60 = -61635;

    t60 = ((x329/(x330%x331))==x332);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x333 = 144U;
	uint8_t x334 = UINT8_MAX;
	static volatile int32_t x335 = INT32_MAX;
	static volatile int16_t x336 = INT16_MAX;
	volatile int32_t t61 = 137538;

    t61 = ((x333/(x334%x335))==x336);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x341 = 0;
	static int64_t x343 = 1190LL;
	int8_t x344 = INT8_MIN;
	static int32_t t62 = 0;

    t62 = ((x341/(x342%x343))==x344);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x345 = 4896U;
	static uint64_t x346 = 845388880809978365LLU;
	static int32_t x347 = INT32_MIN;
	int32_t t63 = -4136;

    t63 = ((x345/(x346%x347))==x348);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint16_t x349 = 385U;
	static volatile int64_t x350 = INT64_MAX;
	int8_t x351 = INT8_MIN;
	uint64_t x352 = 3744623455LLU;
	volatile int32_t t64 = -50453;

    t64 = ((x349/(x350%x351))==x352);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x353 = INT8_MIN;
	int32_t x354 = -1;
	static uint16_t x355 = 13U;
	int32_t t65 = -27850383;

    t65 = ((x353/(x354%x355))==x356);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x362 = 141U;
	uint64_t x364 = UINT64_MAX;
	int32_t t66 = 4022607;

    t66 = ((x361/(x362%x363))==x364);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x365 = UINT8_MAX;
	static int8_t x366 = -9;
	uint32_t x367 = 690U;
	int64_t x368 = INT64_MIN;
	int32_t t67 = -66;

    t67 = ((x365/(x366%x367))==x368);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x389 = INT32_MIN;
	uint32_t x390 = 175U;
	int32_t x391 = INT32_MIN;
	volatile uint64_t x392 = UINT64_MAX;

    t68 = ((x389/(x390%x391))==x392);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint16_t x397 = 63U;
	int8_t x398 = INT8_MIN;
	int16_t x399 = INT16_MIN;
	int8_t x400 = INT8_MIN;

    t69 = ((x397/(x398%x399))==x400);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x401 = INT32_MAX;
	volatile int32_t x403 = INT32_MIN;
	int8_t x404 = 7;
	volatile int32_t t70 = 1;

    t70 = ((x401/(x402%x403))==x404);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x405 = 25;
	int64_t x406 = -1LL;
	int8_t x408 = -1;
	int32_t t71 = 4;

    t71 = ((x405/(x406%x407))==x408);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x409 = UINT16_MAX;
	static int64_t x410 = INT64_MAX;
	uint16_t x411 = UINT16_MAX;
	volatile int8_t x412 = INT8_MAX;
	int32_t t72 = -30;

    t72 = ((x409/(x410%x411))==x412);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x413 = -1;
	int8_t x414 = -1;
	uint16_t x415 = 24113U;
	volatile int32_t x416 = INT32_MIN;
	volatile int32_t t73 = -226;

    t73 = ((x413/(x414%x415))==x416);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x421 = -1;
	volatile int64_t x422 = 1942LL;
	volatile int32_t x423 = INT32_MAX;
	static volatile uint16_t x424 = UINT16_MAX;
	int32_t t74 = -179156941;

    t74 = ((x421/(x422%x423))==x424);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x425 = -1;
	uint32_t x427 = 58U;
	int8_t x428 = INT8_MIN;

    t75 = ((x425/(x426%x427))==x428);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x442 = INT32_MAX;
	static uint64_t x444 = 307847055LLU;

    t76 = ((x441/(x442%x443))==x444);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x445 = 485U;
	int8_t x446 = -1;
	volatile int64_t x447 = INT64_MIN;
	volatile int32_t t77 = 42367;

    t77 = ((x445/(x446%x447))==x448);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x449 = INT16_MIN;
	static int64_t x450 = -1LL;
	uint32_t x451 = 11941U;

    t78 = ((x449/(x450%x451))==x452);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x455 = 245U;
	int32_t x456 = INT32_MAX;
	volatile int32_t t79 = 690;

    t79 = ((x453/(x454%x455))==x456);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x457 = INT16_MIN;
	int8_t x458 = -15;
	int32_t x459 = INT32_MIN;
	int16_t x460 = -3185;
	int32_t t80 = -94;

    t80 = ((x457/(x458%x459))==x460);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x461 = INT8_MIN;
	static uint32_t x462 = UINT32_MAX;
	volatile int32_t x463 = INT32_MIN;
	int32_t x464 = INT32_MIN;
	volatile int32_t t81 = -2026;

    t81 = ((x461/(x462%x463))==x464);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x469 = 11568U;
	int8_t x471 = INT8_MIN;
	int32_t t82 = 134403540;

    t82 = ((x469/(x470%x471))==x472);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	static volatile int8_t x473 = INT8_MIN;
	int8_t x474 = INT8_MIN;
	static volatile int32_t x475 = INT32_MIN;
	static uint32_t x476 = 2502040U;

    t83 = ((x473/(x474%x475))==x476);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int16_t x477 = INT16_MAX;
	uint32_t x478 = UINT32_MAX;
	int32_t x479 = -49262539;
	volatile int32_t t84 = 3688554;

    t84 = ((x477/(x478%x479))==x480);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x481 = -15;
	volatile int16_t x482 = INT16_MAX;
	static volatile int32_t x483 = INT32_MIN;
	int16_t x484 = -1;
	int32_t t85 = 19;

    t85 = ((x481/(x482%x483))==x484);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t t86 = 0;

    t86 = ((x485/(x486%x487))==x488);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x493 = 44U;
	static int32_t x494 = 45;
	volatile int32_t x495 = INT32_MIN;

    t87 = ((x493/(x494%x495))==x496);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x498 = INT8_MIN;
	int16_t x499 = -15;
	int32_t t88 = -2495778;

    t88 = ((x497/(x498%x499))==x500);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x505 = 5U;
	int64_t x506 = INT64_MIN;
	static uint32_t x507 = 1123310U;
	volatile int64_t x508 = INT64_MIN;
	static volatile int32_t t89 = 201;

    t89 = ((x505/(x506%x507))==x508);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x510 = 7LLU;
	volatile int64_t x511 = -1LL;
	int32_t t90 = 4;

    t90 = ((x509/(x510%x511))==x512);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	static volatile int32_t x517 = -1;
	volatile int16_t x519 = INT16_MIN;
	int64_t x520 = 2LL;
	int32_t t91 = 45591;

    t91 = ((x517/(x518%x519))==x520);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x521 = 2897093;
	int16_t x522 = 1874;
	int64_t x523 = -757658594824947LL;
	static int32_t x524 = -1;
	volatile int32_t t92 = -298425;

    t92 = ((x521/(x522%x523))==x524);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x525 = INT8_MIN;
	uint16_t x526 = 20U;
	static volatile int8_t x527 = -42;
	static uint16_t x528 = 129U;
	volatile int32_t t93 = -148408755;

    t93 = ((x525/(x526%x527))==x528);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x529 = UINT64_MAX;
	static uint32_t x530 = 130767482U;
	int16_t x532 = -88;
	int32_t t94 = -67;

    t94 = ((x529/(x530%x531))==x532);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int16_t x533 = INT16_MIN;
	int16_t x534 = -728;
	uint16_t x535 = 5559U;
	static volatile int32_t x536 = -1;
	int32_t t95 = 0;

    t95 = ((x533/(x534%x535))==x536);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x537 = -2;
	int16_t x538 = -1;
	uint8_t x539 = UINT8_MAX;
	uint32_t x540 = 50654927U;
	volatile int32_t t96 = 1;

    t96 = ((x537/(x538%x539))==x540);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x541 = 6LL;
	int8_t x543 = INT8_MIN;
	int32_t x544 = INT32_MIN;
	volatile int32_t t97 = 398;

    t97 = ((x541/(x542%x543))==x544);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x545 = INT32_MIN;
	uint32_t x546 = 2U;
	int8_t x547 = INT8_MIN;
	static int32_t x548 = 10828008;

    t98 = ((x545/(x546%x547))==x548);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x549 = 714U;
	int8_t x550 = -1;
	int16_t x551 = INT16_MIN;
	uint64_t x552 = UINT64_MAX;
	static volatile int32_t t99 = 58925887;

    t99 = ((x549/(x550%x551))==x552);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x557 = 33;
	int16_t x558 = INT16_MAX;
	int32_t x559 = INT32_MIN;
	static int8_t x560 = -1;

    t100 = ((x557/(x558%x559))==x560);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int16_t x561 = -15;
	int8_t x562 = INT8_MIN;
	int16_t x563 = INT16_MAX;
	uint64_t x564 = 194277605519542LLU;
	volatile int32_t t101 = 32164;

    t101 = ((x561/(x562%x563))==x564);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x565 = INT8_MIN;
	static uint8_t x566 = 13U;
	volatile uint32_t x567 = 164464478U;
	uint32_t x568 = 253952618U;
	volatile int32_t t102 = 1055883;

    t102 = ((x565/(x566%x567))==x568);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x573 = 3258;
	uint8_t x574 = 5U;
	uint8_t x575 = UINT8_MAX;
	int64_t x576 = -123117735457LL;
	static volatile int32_t t103 = 224357126;

    t103 = ((x573/(x574%x575))==x576);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x577 = UINT32_MAX;
	int16_t x579 = 311;
	int64_t x580 = INT64_MIN;
	int32_t t104 = -684832954;

    t104 = ((x577/(x578%x579))==x580);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x581 = 47U;
	uint64_t x582 = 8LLU;
	static volatile int16_t x583 = -8;
	uint16_t x584 = UINT16_MAX;
	int32_t t105 = 0;

    t105 = ((x581/(x582%x583))==x584);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x585 = 24986731;
	int8_t x588 = 1;

    t106 = ((x585/(x586%x587))==x588);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x589 = 1U;
	int32_t x591 = INT32_MIN;
	int64_t x592 = -1LL;
	int32_t t107 = 148;

    t107 = ((x589/(x590%x591))==x592);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x593 = -1;
	uint32_t x594 = 9643377U;
	int16_t x595 = INT16_MIN;
	volatile int32_t x596 = INT32_MAX;
	int32_t t108 = -2;

    t108 = ((x593/(x594%x595))==x596);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x598 = -4548;
	int32_t x599 = INT32_MIN;
	int16_t x600 = -1;

    t109 = ((x597/(x598%x599))==x600);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x601 = UINT16_MAX;
	volatile int32_t x602 = INT32_MIN;

    t110 = ((x601/(x602%x603))==x604);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x613 = -52732204;
	int16_t x614 = INT16_MAX;
	int32_t x615 = INT32_MAX;
	uint32_t x616 = 28U;

    t111 = ((x613/(x614%x615))==x616);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x617 = 804695725060LLU;
	volatile int8_t x618 = -9;
	static volatile uint64_t x619 = 461LLU;
	volatile uint8_t x620 = 22U;
	int32_t t112 = 417;

    t112 = ((x617/(x618%x619))==x620);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x621 = INT16_MAX;
	int16_t x623 = INT16_MIN;
	int8_t x624 = INT8_MIN;
	int32_t t113 = -509863;

    t113 = ((x621/(x622%x623))==x624);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x637 = 48U;
	int64_t x638 = -1LL;
	static uint8_t x639 = UINT8_MAX;
	int32_t x640 = 10225434;
	int32_t t114 = -91740122;

    t114 = ((x637/(x638%x639))==x640);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x649 = INT32_MAX;
	uint8_t x650 = UINT8_MAX;
	static int32_t x651 = -48532;
	volatile uint64_t x652 = UINT64_MAX;

    t115 = ((x649/(x650%x651))==x652);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x669 = 1;
	static int32_t x670 = INT32_MIN;
	volatile uint64_t x672 = 3LLU;
	volatile int32_t t116 = 245676875;

    t116 = ((x669/(x670%x671))==x672);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x674 = UINT8_MAX;
	int16_t x675 = INT16_MIN;
	static int64_t x676 = 80718308568547LL;
	volatile int32_t t117 = -50870;

    t117 = ((x673/(x674%x675))==x676);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x679 = INT16_MAX;
	static uint8_t x680 = 4U;

    t118 = ((x677/(x678%x679))==x680);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int16_t x681 = INT16_MIN;
	static uint16_t x684 = UINT16_MAX;
	int32_t t119 = 8;

    t119 = ((x681/(x682%x683))==x684);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x685 = INT16_MIN;
	uint8_t x686 = 102U;
	int64_t x687 = INT64_MAX;
	int16_t x688 = 21;
	int32_t t120 = -6;

    t120 = ((x685/(x686%x687))==x688);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x689 = 450348921U;
	int16_t x690 = -1;
	int8_t x691 = INT8_MAX;
	uint32_t x692 = 31410U;
	volatile int32_t t121 = 432;

    t121 = ((x689/(x690%x691))==x692);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x693 = 66U;
	uint8_t x695 = 34U;
	uint16_t x696 = UINT16_MAX;
	int32_t t122 = -868275;

    t122 = ((x693/(x694%x695))==x696);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x701 = 0;
	int8_t x703 = -10;
	static int64_t x704 = INT64_MIN;
	static int32_t t123 = -131381203;

    t123 = ((x701/(x702%x703))==x704);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x705 = -4052;
	static uint16_t x706 = 42U;
	int32_t x707 = INT32_MIN;
	static int8_t x708 = INT8_MIN;
	int32_t t124 = -463;

    t124 = ((x705/(x706%x707))==x708);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x709 = INT32_MIN;
	int32_t x710 = INT32_MIN;
	uint16_t x711 = 2987U;

    t125 = ((x709/(x710%x711))==x712);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint8_t x713 = 0U;
	volatile int64_t x714 = -1LL;
	int64_t x715 = 13LL;
	volatile int64_t x716 = INT64_MIN;
	int32_t t126 = 183;

    t126 = ((x713/(x714%x715))==x716);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x717 = INT8_MAX;
	uint64_t x718 = 599LLU;
	uint16_t x719 = 485U;
	uint16_t x720 = 46U;
	int32_t t127 = 4504;

    t127 = ((x717/(x718%x719))==x720);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x729 = -1;
	static int16_t x730 = 7911;
	volatile uint32_t x731 = UINT32_MAX;
	int8_t x732 = 13;
	volatile int32_t t128 = -206175388;

    t128 = ((x729/(x730%x731))==x732);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x738 = 62U;
	volatile int32_t x739 = -1817;
	volatile int32_t t129 = -203;

    t129 = ((x737/(x738%x739))==x740);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x749 = 1352LL;
	uint64_t x751 = UINT64_MAX;
	static int8_t x752 = INT8_MIN;
	volatile int32_t t130 = -1998;

    t130 = ((x749/(x750%x751))==x752);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int16_t x753 = INT16_MAX;
	int32_t x754 = -754447;
	static int32_t x755 = INT32_MIN;
	uint32_t x756 = 46977691U;
	volatile int32_t t131 = 320;

    t131 = ((x753/(x754%x755))==x756);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x769 = -1LL;
	uint16_t x770 = 11U;
	uint64_t x771 = UINT64_MAX;
	volatile int32_t t132 = 4373950;

    t132 = ((x769/(x770%x771))==x772);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x773 = INT32_MIN;
	int16_t x774 = INT16_MIN;
	int64_t x775 = 469930349122486888LL;
	static uint64_t x776 = UINT64_MAX;
	volatile int32_t t133 = 41603771;

    t133 = ((x773/(x774%x775))==x776);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x777 = INT64_MAX;
	int32_t x778 = -6005;
	static volatile uint8_t x779 = UINT8_MAX;
	int32_t x780 = -3390344;

    t134 = ((x777/(x778%x779))==x780);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x781 = INT32_MAX;
	volatile int32_t x782 = 1;
	static volatile uint8_t x783 = 61U;
	uint16_t x784 = UINT16_MAX;
	volatile int32_t t135 = 27297165;

    t135 = ((x781/(x782%x783))==x784);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x785 = INT32_MIN;
	int64_t x787 = INT64_MAX;
	volatile uint16_t x788 = 15U;

    t136 = ((x785/(x786%x787))==x788);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x794 = 1940084609787623287LL;
	int16_t x795 = INT16_MIN;
	int64_t x796 = 58496208591366LL;
	int32_t t137 = 6657613;

    t137 = ((x793/(x794%x795))==x796);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint8_t x798 = UINT8_MAX;
	int64_t x799 = 1751604297LL;

    t138 = ((x797/(x798%x799))==x800);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x801 = 8739584861270LLU;
	static uint16_t x802 = 2874U;
	volatile uint32_t x804 = UINT32_MAX;
	static volatile int32_t t139 = -15919;

    t139 = ((x801/(x802%x803))==x804);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static int64_t x805 = 3911057024LL;
	static int16_t x806 = 10755;
	volatile uint16_t x807 = UINT16_MAX;
	int16_t x808 = -1;
	volatile int32_t t140 = -53694;

    t140 = ((x805/(x806%x807))==x808);

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int64_t x809 = INT64_MIN;
	int32_t x810 = 316409;
	int8_t x811 = INT8_MAX;
	uint16_t x812 = UINT16_MAX;

    t141 = ((x809/(x810%x811))==x812);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x813 = 27U;
	uint16_t x814 = 5546U;
	volatile int32_t t142 = 50;

    t142 = ((x813/(x814%x815))==x816);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x817 = -25;
	int16_t x818 = INT16_MIN;
	volatile int32_t x819 = 1205860;
	uint16_t x820 = 242U;
	int32_t t143 = 3;

    t143 = ((x817/(x818%x819))==x820);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x823 = INT8_MAX;
	uint32_t x824 = UINT32_MAX;
	int32_t t144 = -363828;

    t144 = ((x821/(x822%x823))==x824);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static int64_t x825 = -1138969232806525620LL;
	int8_t x826 = -1;
	static int32_t x827 = INT32_MAX;
	volatile int8_t x828 = INT8_MIN;
	static int32_t t145 = 1;

    t145 = ((x825/(x826%x827))==x828);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x838 = -1;
	volatile int16_t x839 = INT16_MAX;
	int32_t x840 = 872;
	volatile int32_t t146 = -32420699;

    t146 = ((x837/(x838%x839))==x840);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x845 = INT16_MIN;
	static uint32_t x846 = 244950954U;
	uint16_t x847 = 12694U;
	volatile int8_t x848 = INT8_MIN;
	static volatile int32_t t147 = -1;

    t147 = ((x845/(x846%x847))==x848);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x853 = 146257130379LL;
	int16_t x854 = 232;
	int32_t x855 = 109;
	int32_t t148 = 4;

    t148 = ((x853/(x854%x855))==x856);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x861 = 99U;
	int8_t x862 = -1;
	volatile int32_t x863 = INT32_MIN;
	volatile int8_t x864 = 0;
	volatile int32_t t149 = 71;

    t149 = ((x861/(x862%x863))==x864);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int32_t x865 = INT32_MIN;
	volatile int64_t x866 = INT64_MIN;
	uint32_t x867 = 1761U;

    t150 = ((x865/(x866%x867))==x868);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x869 = UINT32_MAX;
	uint16_t x871 = UINT16_MAX;
	int16_t x872 = -1;
	static int32_t t151 = 25462287;

    t151 = ((x869/(x870%x871))==x872);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x878 = -422;
	volatile uint8_t x879 = UINT8_MAX;
	int16_t x880 = INT16_MAX;
	int32_t t152 = 24687407;

    t152 = ((x877/(x878%x879))==x880);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int16_t x881 = -708;
	int8_t x882 = -1;
	uint64_t x883 = 83216281586634332LLU;
	volatile int32_t x884 = 50;

    t153 = ((x881/(x882%x883))==x884);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x885 = INT16_MIN;
	uint8_t x886 = UINT8_MAX;
	int8_t x887 = INT8_MAX;
	int8_t x888 = -1;
	int32_t t154 = 1506712;

    t154 = ((x885/(x886%x887))==x888);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x893 = -1847911668634887LL;
	int32_t x894 = INT32_MAX;
	static volatile int64_t x895 = INT64_MIN;
	int32_t t155 = -54;

    t155 = ((x893/(x894%x895))==x896);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x897 = INT32_MIN;
	volatile int16_t x899 = 15;
	uint16_t x900 = UINT16_MAX;
	volatile int32_t t156 = 380200619;

    t156 = ((x897/(x898%x899))==x900);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint8_t x901 = 1U;
	int32_t x902 = -1;
	int8_t x904 = INT8_MAX;

    t157 = ((x901/(x902%x903))==x904);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x905 = 14;
	int64_t x906 = INT64_MAX;
	int16_t x907 = -30;
	uint8_t x908 = 24U;
	volatile int32_t t158 = -1;

    t158 = ((x905/(x906%x907))==x908);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x913 = INT32_MAX;
	int64_t x914 = 500259255040LL;
	volatile int8_t x915 = -63;
	uint8_t x916 = 3U;

    t159 = ((x913/(x914%x915))==x916);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x917 = INT16_MAX;
	uint64_t x918 = 261263079843LLU;
	int64_t x919 = INT64_MIN;
	int16_t x920 = INT16_MIN;
	volatile int32_t t160 = -143683695;

    t160 = ((x917/(x918%x919))==x920);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x922 = INT64_MAX;
	int32_t x924 = INT32_MIN;
	int32_t t161 = -214701602;

    t161 = ((x921/(x922%x923))==x924);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x926 = 871U;
	int16_t x927 = -5;
	uint16_t x928 = 0U;
	volatile int32_t t162 = 394207;

    t162 = ((x925/(x926%x927))==x928);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x930 = UINT8_MAX;
	static int8_t x931 = INT8_MIN;
	int32_t x932 = INT32_MIN;

    t163 = ((x929/(x930%x931))==x932);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x937 = -482LL;
	uint8_t x939 = 26U;
	volatile uint32_t x940 = 971U;
	int32_t t164 = 28906;

    t164 = ((x937/(x938%x939))==x940);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x941 = 3U;
	int16_t x942 = INT16_MIN;
	int32_t x944 = 63;
	static volatile int32_t t165 = 192803904;

    t165 = ((x941/(x942%x943))==x944);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x945 = 0U;
	int32_t x947 = INT32_MIN;
	int8_t x948 = -54;
	volatile int32_t t166 = 21;

    t166 = ((x945/(x946%x947))==x948);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x954 = 778350;
	uint32_t x955 = UINT32_MAX;
	static volatile int32_t x956 = INT32_MIN;
	int32_t t167 = 56036;

    t167 = ((x953/(x954%x955))==x956);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x965 = 22;
	volatile int8_t x966 = INT8_MIN;
	uint64_t x967 = UINT64_MAX;
	uint8_t x968 = UINT8_MAX;
	int32_t t168 = 196579800;

    t168 = ((x965/(x966%x967))==x968);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint32_t x969 = UINT32_MAX;
	uint64_t x970 = 25821681968LLU;
	volatile uint32_t x971 = 11074U;
	uint8_t x972 = 58U;
	int32_t t169 = -39779069;

    t169 = ((x969/(x970%x971))==x972);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	static uint32_t x977 = 16330545U;
	int64_t x978 = INT64_MAX;
	int8_t x979 = INT8_MIN;
	int64_t x980 = INT64_MIN;
	int32_t t170 = 797031;

    t170 = ((x977/(x978%x979))==x980);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x981 = UINT32_MAX;
	static volatile int16_t x982 = INT16_MIN;
	static volatile int64_t x983 = 85293390688LL;
	volatile int64_t x984 = -1LL;
	int32_t t171 = 1194;

    t171 = ((x981/(x982%x983))==x984);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint16_t x985 = 3U;
	int16_t x986 = -1;
	static uint64_t x987 = 63LLU;
	int32_t t172 = -597632;

    t172 = ((x985/(x986%x987))==x988);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x989 = 1;
	int16_t x990 = 6043;
	volatile int32_t x991 = 107;
	int64_t x992 = INT64_MIN;

    t173 = ((x989/(x990%x991))==x992);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int32_t x997 = -1;
	uint8_t x998 = UINT8_MAX;
	int16_t x999 = -5710;
	volatile int32_t t174 = 12;

    t174 = ((x997/(x998%x999))==x1000);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x1005 = UINT16_MAX;
	int8_t x1006 = -1;
	int64_t x1008 = INT64_MIN;
	int32_t t175 = 8929;

    t175 = ((x1005/(x1006%x1007))==x1008);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x1009 = INT16_MIN;
	uint64_t x1010 = 165115982544368539LLU;
	volatile int8_t x1011 = -8;
	int8_t x1012 = INT8_MIN;
	int32_t t176 = 0;

    t176 = ((x1009/(x1010%x1011))==x1012);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint8_t x1017 = 2U;
	uint64_t x1018 = UINT64_MAX;
	int64_t x1019 = INT64_MAX;
	volatile uint8_t x1020 = 0U;
	static volatile int32_t t177 = -4207315;

    t177 = ((x1017/(x1018%x1019))==x1020);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x1021 = -1;
	uint8_t x1022 = 2U;
	uint8_t x1023 = 50U;
	static volatile int8_t x1024 = INT8_MIN;
	volatile int32_t t178 = -87313;

    t178 = ((x1021/(x1022%x1023))==x1024);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1025 = INT8_MIN;
	volatile int64_t x1026 = INT64_MAX;
	int32_t x1027 = 2;
	int32_t t179 = -33;

    t179 = ((x1025/(x1026%x1027))==x1028);

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x1037 = INT16_MAX;
	int64_t x1038 = 9006776143918981LL;
	static uint32_t x1039 = 3965714U;
	int8_t x1040 = INT8_MIN;
	static volatile int32_t t180 = 25905437;

    t180 = ((x1037/(x1038%x1039))==x1040);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1041 = INT32_MIN;
	static uint32_t x1042 = 137U;

    t181 = ((x1041/(x1042%x1043))==x1044);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x1045 = -62;
	int64_t x1046 = 31061392185LL;
	uint64_t x1047 = 23047308427673112LLU;
	uint8_t x1048 = 3U;
	int32_t t182 = 1817;

    t182 = ((x1045/(x1046%x1047))==x1048);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile uint32_t x1051 = 25U;
	static int8_t x1052 = 46;

    t183 = ((x1049/(x1050%x1051))==x1052);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x1060 = 612823093470140243LL;
	volatile int32_t t184 = -55317773;

    t184 = ((x1057/(x1058%x1059))==x1060);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint64_t x1063 = 81813676688LLU;
	uint64_t x1064 = 119194LLU;
	volatile int32_t t185 = 127048;

    t185 = ((x1061/(x1062%x1063))==x1064);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x1065 = -5;
	int16_t x1066 = -9675;
	volatile uint8_t x1067 = 11U;
	int16_t x1068 = INT16_MIN;
	int32_t t186 = 1243329;

    t186 = ((x1065/(x1066%x1067))==x1068);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1073 = UINT64_MAX;
	int64_t x1074 = -1LL;
	static uint32_t x1076 = 126780261U;
	volatile int32_t t187 = -15333;

    t187 = ((x1073/(x1074%x1075))==x1076);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint64_t x1077 = UINT64_MAX;
	int16_t x1078 = INT16_MIN;
	int16_t x1079 = INT16_MAX;
	int8_t x1080 = INT8_MAX;

    t188 = ((x1077/(x1078%x1079))==x1080);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x1081 = INT64_MAX;
	int64_t x1082 = 5091013618357LL;
	int8_t x1083 = INT8_MAX;
	int16_t x1084 = INT16_MIN;

    t189 = ((x1081/(x1082%x1083))==x1084);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x1089 = 4U;
	uint8_t x1090 = 36U;
	int32_t x1092 = -1;
	int32_t t190 = -91878;

    t190 = ((x1089/(x1090%x1091))==x1092);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x1093 = UINT16_MAX;
	int8_t x1095 = INT8_MIN;
	static int8_t x1096 = 5;
	volatile int32_t t191 = -1;

    t191 = ((x1093/(x1094%x1095))==x1096);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1101 = INT64_MIN;
	static uint64_t x1102 = 27975626957LLU;
	int32_t x1104 = INT32_MIN;
	volatile int32_t t192 = 35;

    t192 = ((x1101/(x1102%x1103))==x1104);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1105 = -1;
	uint32_t x1106 = 143107U;
	volatile int16_t x1107 = -4168;
	static volatile int32_t t193 = 185;

    t193 = ((x1105/(x1106%x1107))==x1108);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x1109 = UINT8_MAX;
	uint32_t x1110 = 13688809U;
	int16_t x1112 = 0;
	volatile int32_t t194 = 30467039;

    t194 = ((x1109/(x1110%x1111))==x1112);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x1115 = INT16_MIN;
	int64_t x1116 = 434411904LL;
	volatile int32_t t195 = 5;

    t195 = ((x1113/(x1114%x1115))==x1116);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1117 = -1;
	int64_t x1118 = -22832686604LL;
	int16_t x1119 = -583;
	static int16_t x1120 = -19;

    t196 = ((x1117/(x1118%x1119))==x1120);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x1129 = INT16_MAX;
	volatile uint64_t x1130 = 2657951233LLU;
	int32_t x1131 = INT32_MAX;
	uint16_t x1132 = UINT16_MAX;
	volatile int32_t t197 = 11;

    t197 = ((x1129/(x1130%x1131))==x1132);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x1133 = 1U;
	int16_t x1136 = 1928;
	int32_t t198 = -5246142;

    t198 = ((x1133/(x1134%x1135))==x1136);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1137 = INT8_MIN;
	int8_t x1138 = INT8_MIN;
	volatile int16_t x1139 = -3;
	static int32_t x1140 = INT32_MIN;
	static volatile int32_t t199 = 35390;

    t199 = ((x1137/(x1138%x1139))==x1140);

    if (t199 != 0) { NG(); } else { ; }
	
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

