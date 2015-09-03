#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = -1;
int8_t x16 = INT8_MIN;
uint8_t x17 = 10U;
volatile int64_t x21 = INT64_MIN;
volatile int32_t x23 = INT32_MAX;
uint32_t x31 = 21668646U;
int16_t x32 = INT16_MAX;
static uint32_t x36 = 250812U;
int64_t x37 = INT64_MAX;
static int32_t x43 = INT32_MIN;
static int64_t x44 = -1LL;
uint64_t x45 = 3063990290LLU;
volatile uint64_t t10 = 37693LLU;
static uint64_t t11 = 0LLU;
uint32_t x58 = UINT32_MAX;
uint16_t x71 = 13093U;
volatile int64_t x72 = -1LL;
int16_t x73 = -124;
uint16_t x75 = 25859U;
int64_t t16 = -245126296732633880LL;
uint32_t x78 = 16302U;
static volatile uint32_t x94 = 418859U;
static uint16_t x97 = UINT16_MAX;
volatile int8_t x101 = INT8_MIN;
static uint32_t x103 = 95124U;
volatile uint64_t t23 = 3347736880LLU;
static int16_t x112 = -2;
static uint64_t t25 = 4929353140980LLU;
int64_t x117 = 614028LL;
int8_t x118 = INT8_MAX;
uint8_t x121 = UINT8_MAX;
volatile int64_t x124 = INT64_MAX;
static int64_t t27 = 1893833LL;
int64_t x125 = -1LL;
int32_t x127 = INT32_MAX;
int16_t x131 = INT16_MIN;
volatile uint32_t t29 = 107872U;
static int8_t x134 = INT8_MAX;
int32_t x140 = INT32_MIN;
static int64_t x142 = INT64_MIN;
volatile uint64_t x149 = 1592746498337066786LLU;
uint8_t x150 = UINT8_MAX;
int8_t x153 = INT8_MAX;
uint32_t x157 = 32917566U;
int8_t x172 = -1;
int32_t t38 = -6;
volatile int64_t x174 = -1LL;
uint64_t x175 = 329LLU;
uint32_t x179 = UINT32_MAX;
static int16_t x188 = 481;
int64_t t41 = 1LL;
int64_t x190 = -1LL;
static int64_t x191 = INT64_MIN;
static volatile int64_t t42 = INT64_MIN;
int64_t x193 = -3135LL;
uint8_t x198 = 92U;
int16_t x199 = INT16_MIN;
static uint64_t x200 = 347834704791086LLU;
uint64_t t44 = 3013800839261812LLU;
volatile int32_t x202 = INT32_MIN;
volatile int32_t t45 = 14446889;
static int64_t x211 = -219609309739699108LL;
int64_t t46 = 34237LL;
uint32_t x213 = UINT32_MAX;
static uint16_t x214 = UINT16_MAX;
int8_t x218 = INT8_MAX;
int32_t x221 = INT32_MIN;
uint8_t x226 = 1U;
int32_t x230 = 56794389;
int8_t x238 = -1;
uint8_t x243 = UINT8_MAX;
int16_t x245 = 55;
static int64_t t55 = -16402658LL;
int16_t x254 = INT16_MIN;
int32_t x257 = -1;
uint16_t x259 = 1054U;
uint64_t x260 = UINT64_MAX;
volatile int8_t x269 = INT8_MIN;
static volatile int8_t x272 = -50;
int32_t x276 = 639140;
int64_t x280 = -1LL;
static int32_t x282 = -1;
uint16_t x287 = UINT16_MAX;
volatile int32_t t63 = 3;
int8_t x296 = -38;
uint16_t x297 = UINT16_MAX;
volatile int32_t x299 = -815991;
uint32_t x301 = UINT32_MAX;
static int32_t x302 = -1;
static int16_t x304 = -2388;
int32_t x314 = -1;
int64_t t68 = 0LL;
int64_t x318 = -1839178203403186940LL;
static volatile uint64_t t71 = 35789324282095LLU;
uint16_t x351 = 5U;
int64_t x355 = -1LL;
volatile uint16_t x356 = UINT16_MAX;
int64_t t75 = -8LL;
int16_t x361 = INT16_MAX;
volatile int32_t t77 = 105155124;
static int8_t x372 = 38;
uint16_t x380 = UINT16_MAX;
uint32_t x392 = UINT32_MAX;
uint64_t t85 = 2628519571LLU;
int64_t x405 = -1LL;
int32_t x411 = -1;
int64_t x412 = -1LL;
int8_t x414 = INT8_MIN;
uint32_t x425 = 44U;
uint8_t x427 = 28U;
uint64_t x435 = UINT64_MAX;
int8_t x439 = 4;
int64_t x449 = -2161552779224741211LL;
uint8_t x454 = UINT8_MAX;
int64_t x458 = 8341LL;
int64_t x464 = INT64_MAX;


void f0(void) {
	volatile int64_t x1 = -1LL;
	uint8_t x2 = UINT8_MAX;
	int64_t x4 = INT64_MIN;
	int64_t t0 = INT64_MIN;

	t0 = (((x1-x2)|x3)&x4);

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 24U;
	static int16_t x6 = -1;
	int8_t x7 = INT8_MAX;
	int32_t x8 = 2;
	volatile int32_t t1 = -10076;

	t1 = (((x5-x6)|x7)&x8);

	if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 41U;
	static volatile int16_t x14 = INT16_MIN;
	volatile int32_t x15 = 11820;
	static int32_t t2 = 52065;

	t2 = (((x13-x14)|x15)&x16);

	if (t2 != 44544) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x18 = 15;
	uint64_t x19 = UINT64_MAX;
	int8_t x20 = 61;
	static uint64_t t3 = 611084094906482LLU;

	t3 = (((x17-x18)|x19)&x20);

	if (t3 != 61LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x22 = -2152;
	int64_t x24 = -1LL;
	volatile int64_t t4 = 59981984992LL;

	t4 = (((x21-x22)|x23)&x24);

	if (t4 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = INT8_MIN;
	volatile uint16_t x26 = UINT16_MAX;
	int16_t x27 = INT16_MIN;
	int64_t x28 = -49673532248596991LL;
	volatile int64_t t5 = 2131532LL;

	t5 = (((x25-x26)|x27)&x28);

	if (t5 != -49673532248596991LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x29 = 32LLU;
	volatile int16_t x30 = -20;
	uint64_t t6 = 28628699246283LLU;

	t6 = (((x29-x30)|x31)&x32);

	if (t6 != 9014LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MAX;
	static int16_t x34 = INT16_MAX;
	volatile int32_t x35 = INT32_MIN;
	volatile int64_t t7 = -520997186696463936LL;

	t7 = (((x33-x34)|x35)&x36);

	if (t7 != 229376LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x38 = 1528081168478656LL;
	int64_t x39 = -1LL;
	int8_t x40 = INT8_MIN;
	int64_t t8 = -7489751218LL;

	t8 = (((x37-x38)|x39)&x40);

	if (t8 != -128LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = 2;
	uint16_t x42 = UINT16_MAX;
	volatile int64_t t9 = -4199201425LL;

	t9 = (((x41-x42)|x43)&x44);

	if (t9 != -65533LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x46 = 192052LLU;
	static int32_t x47 = INT32_MIN;
	static volatile uint16_t x48 = 27U;

	t10 = (((x45-x46)|x47)&x48);

	if (t10 != 26LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = UINT16_MAX;
	static volatile int64_t x54 = INT64_MAX;
	volatile int8_t x55 = INT8_MIN;
	volatile uint64_t x56 = UINT64_MAX;

	t11 = (((x53-x54)|x55)&x56);

	if (t11 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x57 = 4;
	static volatile uint32_t x59 = 69U;
	volatile int8_t x60 = -1;
	uint32_t t12 = 2553U;

	t12 = (((x57-x58)|x59)&x60);

	if (t12 != 69U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x61 = INT32_MIN;
	volatile uint64_t x62 = 287196712LLU;
	int64_t x63 = INT64_MIN;
	uint16_t x64 = 1U;
	static uint64_t t13 = 17776319644563610LLU;

	t13 = (((x61-x62)|x63)&x64);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = INT8_MIN;
	volatile int32_t x66 = INT32_MIN;
	int16_t x67 = -6023;
	int32_t x68 = INT32_MIN;
	volatile int32_t t14 = INT32_MIN;

	t14 = (((x65-x66)|x67)&x68);

	if (t14 != INT32_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = 31U;
	uint16_t x70 = 93U;
	static volatile int64_t t15 = -16380814763990LL;

	t15 = (((x69-x70)|x71)&x72);

	if (t15 != -25LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x74 = -1LL;
	volatile int16_t x76 = 1;

	t16 = (((x73-x74)|x75)&x76);

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = 1;
	int16_t x79 = INT16_MAX;
	static int8_t x80 = INT8_MAX;
	volatile uint32_t t17 = 3278U;

	t17 = (((x77-x78)|x79)&x80);

	if (t17 != 127U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x81 = 9U;
	int8_t x82 = -1;
	int16_t x83 = 157;
	volatile int8_t x84 = INT8_MAX;
	volatile int32_t t18 = 1304;

	t18 = (((x81-x82)|x83)&x84);

	if (t18 != 31) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x85 = -5289582609858823LL;
	uint32_t x86 = UINT32_MAX;
	static uint64_t x87 = 975401547LLU;
	int64_t x88 = 994466884724283LL;
	volatile uint64_t t19 = 25883296804806LLU;

	t19 = (((x85-x86)|x87)&x88);

	if (t19 != 281638607463995LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = -1;
	volatile int16_t x95 = INT16_MIN;
	int64_t x96 = INT64_MIN;
	int64_t t20 = 21625998805161LL;

	t20 = (((x93-x94)|x95)&x96);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x98 = 317752702U;
	uint8_t x99 = 1U;
	int32_t x100 = -1;
	static volatile uint32_t t21 = 388U;

	t21 = (((x97-x98)|x99)&x100);

	if (t21 != 3977280129U) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x102 = -41;
	volatile int64_t x104 = INT64_MIN;
	volatile int64_t t22 = -179LL;

	t22 = (((x101-x102)|x103)&x104);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = -3;
	uint64_t x106 = UINT64_MAX;
	static int16_t x107 = -6747;
	int32_t x108 = -24071;

	t23 = (((x105-x106)|x107)&x108);

	if (t23 != 18446744073709527545LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x109 = INT16_MAX;
	static int16_t x110 = INT16_MIN;
	volatile uint16_t x111 = 0U;
	volatile int32_t t24 = -8105909;

	t24 = (((x109-x110)|x111)&x112);

	if (t24 != 65534) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x113 = UINT64_MAX;
	int64_t x114 = -1LL;
	uint16_t x115 = 90U;
	int32_t x116 = INT32_MAX;

	t25 = (((x113-x114)|x115)&x116);

	if (t25 != 90LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint64_t x119 = UINT64_MAX;
	int8_t x120 = INT8_MIN;
	uint64_t t26 = 1500871897059760LLU;

	t26 = (((x117-x118)|x119)&x120);

	if (t26 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x122 = 585618124U;
	uint8_t x123 = 13U;

	t27 = (((x121-x122)|x123)&x124);

	if (t27 != 3709349439LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x126 = -3;
	static uint16_t x128 = 5U;
	volatile int64_t t28 = 1009525472955796514LL;

	t28 = (((x125-x126)|x127)&x128);

	if (t28 != 5LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x129 = 5U;
	int16_t x130 = INT16_MAX;
	static int8_t x132 = -1;

	t29 = (((x129-x130)|x131)&x132);

	if (t29 != 4294934534U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = -1;
	int32_t x135 = -1;
	static int64_t x136 = INT64_MAX;
	static int64_t t30 = INT64_MAX;

	t30 = (((x133-x134)|x135)&x136);

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x137 = INT32_MAX;
	int64_t x138 = INT64_MAX;
	volatile int64_t x139 = 146118355LL;
	volatile int64_t t31 = 27346369059LL;

	t31 = (((x137-x138)|x139)&x140);

	if (t31 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x141 = 275393604431291LLU;
	int8_t x143 = INT8_MIN;
	static uint16_t x144 = 3U;
	volatile uint64_t t32 = 1954384345987937LLU;

	t32 = (((x141-x142)|x143)&x144);

	if (t32 != 3LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x145 = -1;
	volatile int8_t x146 = -1;
	int16_t x147 = -2;
	uint16_t x148 = 4U;
	volatile int32_t t33 = 28368;

	t33 = (((x145-x146)|x147)&x148);

	if (t33 != 4) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x151 = UINT8_MAX;
	uint64_t x152 = UINT64_MAX;
	uint64_t t34 = 17086684615480150LLU;

	t34 = (((x149-x150)|x151)&x152);

	if (t34 != 1592746498337066751LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x154 = 3374769U;
	static int16_t x155 = INT16_MAX;
	int64_t x156 = 720491LL;
	int64_t t35 = 516762LL;

	t35 = (((x153-x154)|x155)&x156);

	if (t35 != 589419LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x158 = INT32_MAX;
	int16_t x159 = -11599;
	int32_t x160 = 8756;
	volatile uint32_t t36 = 413U;

	t36 = (((x157-x158)|x159)&x160);

	if (t36 != 564U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x161 = INT16_MAX;
	int8_t x162 = INT8_MIN;
	int16_t x163 = INT16_MIN;
	volatile int8_t x164 = INT8_MAX;
	volatile int32_t t37 = 1301;

	t37 = (((x161-x162)|x163)&x164);

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x169 = 14067U;
	volatile int16_t x170 = -1;
	static int16_t x171 = INT16_MAX;

	t38 = (((x169-x170)|x171)&x172);

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x173 = INT32_MIN;
	static volatile uint32_t x176 = 6651245U;
	volatile uint64_t t39 = 1997210LLU;

	t39 = (((x173-x174)|x175)&x176);

	if (t39 != 329LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = INT16_MAX;
	volatile int16_t x178 = 638;
	volatile int32_t x180 = -248;
	volatile uint32_t t40 = 322605762U;

	t40 = (((x177-x178)|x179)&x180);

	if (t40 != 4294967048U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x185 = -1;
	uint16_t x186 = 13U;
	static int64_t x187 = -726885993LL;

	t41 = (((x185-x186)|x187)&x188);

	if (t41 != 481LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x189 = -1;
	static int8_t x192 = INT8_MIN;

	t42 = (((x189-x190)|x191)&x192);

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x194 = 1207U;
	int32_t x195 = INT32_MAX;
	int64_t x196 = -1LL;
	volatile int64_t t43 = 30529LL;

	t43 = (((x193-x194)|x195)&x196);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x197 = 110U;

	t44 = (((x197-x198)|x199)&x200);

	if (t44 != 347834704789506LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x201 = -1;
	static uint16_t x203 = 0U;
	uint8_t x204 = 97U;

	t45 = (((x201-x202)|x203)&x204);

	if (t45 != 97) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x209 = INT32_MIN;
	int64_t x210 = INT64_MIN;
	static uint32_t x212 = 39U;

	t46 = (((x209-x210)|x211)&x212);

	if (t46 != 4LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x215 = UINT64_MAX;
	uint16_t x216 = UINT16_MAX;
	static volatile uint64_t t47 = 21LLU;

	t47 = (((x213-x214)|x215)&x216);

	if (t47 != 65535LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x217 = -44;
	int8_t x219 = -18;
	int32_t x220 = -99;
	volatile int32_t t48 = -224427653;

	t48 = (((x217-x218)|x219)&x220);

	if (t48 != -99) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x222 = UINT32_MAX;
	volatile int32_t x223 = INT32_MIN;
	static int8_t x224 = INT8_MIN;
	volatile uint32_t t49 = 329086158U;

	t49 = (((x221-x222)|x223)&x224);

	if (t49 != 2147483648U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x225 = 1277069845206717LLU;
	uint32_t x227 = 134916223U;
	int8_t x228 = INT8_MIN;
	uint64_t t50 = 9077LLU;

	t50 = (((x225-x226)|x227)&x228);

	if (t50 != 1277069845249664LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x229 = -6592;
	int16_t x231 = -1;
	uint64_t x232 = 108337LLU;
	uint64_t t51 = 33LLU;

	t51 = (((x229-x230)|x231)&x232);

	if (t51 != 108337LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x233 = INT8_MIN;
	static uint32_t x234 = 481U;
	uint16_t x235 = UINT16_MAX;
	uint16_t x236 = UINT16_MAX;
	uint32_t t52 = 609U;

	t52 = (((x233-x234)|x235)&x236);

	if (t52 != 65535U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = -1;
	uint8_t x239 = 0U;
	int8_t x240 = INT8_MIN;
	static volatile int32_t t53 = -23557;

	t53 = (((x237-x238)|x239)&x240);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x241 = 25U;
	int8_t x242 = INT8_MAX;
	int16_t x244 = INT16_MAX;
	volatile int32_t t54 = -188503067;

	t54 = (((x241-x242)|x243)&x244);

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x246 = INT16_MAX;
	int64_t x247 = -940LL;
	int16_t x248 = INT16_MIN;

	t55 = (((x245-x246)|x247)&x248);

	if (t55 != -32768LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x249 = 43U;
	int8_t x250 = 0;
	volatile int64_t x251 = 143LL;
	volatile uint16_t x252 = 14320U;
	int64_t t56 = -6300455901LL;

	t56 = (((x249-x250)|x251)&x252);

	if (t56 != 160LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x253 = 35273U;
	static uint16_t x255 = 216U;
	volatile int32_t x256 = INT32_MAX;
	static uint32_t t57 = 209597108U;

	t57 = (((x253-x254)|x255)&x256);

	if (t57 != 68057U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x258 = 450567120916LLU;
	volatile uint64_t t58 = 102972129073055560LLU;

	t58 = (((x257-x258)|x259)&x260);

	if (t58 != 18446743623142430719LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x270 = 104U;
	volatile int32_t x271 = -23184;
	volatile int32_t t59 = -499941;

	t59 = (((x269-x270)|x271)&x272);

	if (t59 != -184) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x273 = -1;
	uint16_t x274 = 2482U;
	int64_t x275 = -62115LL;
	int64_t t60 = 3LL;

	t60 = (((x273-x274)|x275)&x276);

	if (t60 != 638980LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x277 = INT16_MIN;
	volatile int16_t x278 = 0;
	uint8_t x279 = 10U;
	static volatile int64_t t61 = -67LL;

	t61 = (((x277-x278)|x279)&x280);

	if (t61 != -32758LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x281 = -1LL;
	uint16_t x283 = 9812U;
	int64_t x284 = INT64_MIN;
	static volatile int64_t t62 = 6109LL;

	t62 = (((x281-x282)|x283)&x284);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x285 = INT8_MIN;
	static int16_t x286 = INT16_MIN;
	int8_t x288 = 6;

	t63 = (((x285-x286)|x287)&x288);

	if (t63 != 6) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x293 = INT64_MIN;
	int64_t x294 = -4925295857951LL;
	uint16_t x295 = 29149U;
	volatile int64_t t64 = -116228808751LL;

	t64 = (((x293-x294)|x295)&x296);

	if (t64 != -9223367111558893094LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x298 = 356879742643277LLU;
	static int8_t x300 = -8;
	volatile uint64_t t65 = 15LLU;

	t65 = (((x297-x298)|x299)&x300);

	if (t65 != 18446744073709019064LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x303 = 1376808831LLU;
	uint64_t t66 = 236726340LLU;

	t66 = (((x301-x302)|x303)&x304);

	if (t66 != 1376806444LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x305 = 4;
	static uint8_t x306 = UINT8_MAX;
	uint32_t x307 = UINT32_MAX;
	static int64_t x308 = 44458052048396LL;
	volatile int64_t t67 = -7711392147LL;

	t67 = (((x305-x306)|x307)&x308);

	if (t67 != 845567500LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x313 = 260731U;
	uint16_t x315 = 1466U;
	int64_t x316 = INT64_MIN;

	t68 = (((x313-x314)|x315)&x316);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x317 = UINT32_MAX;
	uint32_t x319 = UINT32_MAX;
	static int32_t x320 = INT32_MIN;
	volatile int64_t t69 = -374124830642LL;

	t69 = (((x317-x318)|x319)&x320);

	if (t69 != 1839178206012243968LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x325 = 31U;
	uint16_t x326 = UINT16_MAX;
	uint64_t x327 = UINT64_MAX;
	int32_t x328 = 7864;
	volatile uint64_t t70 = 1763914150993816167LLU;

	t70 = (((x325-x326)|x327)&x328);

	if (t70 != 7864LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x329 = -7635;
	volatile int32_t x330 = INT32_MIN;
	int16_t x331 = -1;
	uint64_t x332 = 5932840190478554LLU;

	t71 = (((x329-x330)|x331)&x332);

	if (t71 != 5932840190478554LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x341 = -394679445896170084LL;
	int16_t x342 = INT16_MAX;
	static uint16_t x343 = 11918U;
	static int8_t x344 = -1;
	volatile int64_t t72 = -355LL;

	t72 = (((x341-x342)|x343)&x344);

	if (t72 != -394679445896200289LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x345 = INT16_MIN;
	static uint16_t x346 = 725U;
	int8_t x347 = -1;
	int8_t x348 = -1;
	volatile int32_t t73 = -211025997;

	t73 = (((x345-x346)|x347)&x348);

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x349 = -1LL;
	int16_t x350 = -19;
	static uint32_t x352 = 4886978U;
	int64_t t74 = -715LL;

	t74 = (((x349-x350)|x351)&x352);

	if (t74 != 2LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x353 = 6903785;
	static volatile int32_t x354 = -904;

	t75 = (((x353-x354)|x355)&x356);

	if (t75 != 65535LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x357 = 2045183U;
	uint64_t x358 = 738477072822LLU;
	int16_t x359 = INT16_MAX;
	int16_t x360 = INT16_MIN;
	uint64_t t76 = 16135614391647590LLU;

	t76 = (((x357-x358)|x359)&x360);

	if (t76 != 18446743335234502656LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x362 = 39;
	uint8_t x363 = 4U;
	volatile int16_t x364 = INT16_MAX;

	t77 = (((x361-x362)|x363)&x364);

	if (t77 != 32732) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x365 = -1;
	static int64_t x366 = INT64_MAX;
	volatile uint64_t x367 = UINT64_MAX;
	int16_t x368 = -1;
	volatile uint64_t t78 = UINT64_MAX;

	t78 = (((x365-x366)|x367)&x368);

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x369 = INT8_MAX;
	uint8_t x370 = UINT8_MAX;
	static uint32_t x371 = UINT32_MAX;
	uint32_t t79 = 539U;

	t79 = (((x369-x370)|x371)&x372);

	if (t79 != 38U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x373 = 2108U;
	uint64_t x374 = UINT64_MAX;
	int8_t x375 = -1;
	int8_t x376 = INT8_MAX;
	volatile uint64_t t80 = 933244488LLU;

	t80 = (((x373-x374)|x375)&x376);

	if (t80 != 127LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x377 = INT8_MAX;
	int64_t x378 = -2053052LL;
	volatile int16_t x379 = INT16_MIN;
	volatile int64_t t81 = -385265LL;

	t81 = (((x377-x378)|x379)&x380);

	if (t81 != 54331LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x385 = -1;
	static int32_t x386 = -77;
	int16_t x387 = INT16_MIN;
	int16_t x388 = INT16_MIN;
	int32_t t82 = -2;

	t82 = (((x385-x386)|x387)&x388);

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x389 = 1505278;
	int8_t x390 = INT8_MIN;
	static uint64_t x391 = 51114LLU;
	uint64_t t83 = 19885992098553136LLU;

	t83 = (((x389-x390)|x391)&x392);

	if (t83 != 1507326LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x393 = 1763;
	int64_t x394 = INT64_MAX;
	static int32_t x395 = 6307466;
	uint16_t x396 = 2U;
	int64_t t84 = -34LL;

	t84 = (((x393-x394)|x395)&x396);

	if (t84 != 2LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x397 = -148;
	uint64_t x398 = 4186201LLU;
	int32_t x399 = -7;
	uint16_t x400 = UINT16_MAX;

	t85 = (((x397-x398)|x399)&x400);

	if (t85 != 65531LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x401 = 562LL;
	int64_t x402 = INT64_MAX;
	uint64_t x403 = 677188431LLU;
	uint16_t x404 = UINT16_MAX;
	volatile uint64_t t86 = 3047440423060LLU;

	t86 = (((x401-x402)|x403)&x404);

	if (t86 != 4991LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x406 = INT16_MIN;
	int16_t x407 = INT16_MIN;
	int64_t x408 = -1LL;
	volatile int64_t t87 = 135506967979314LL;

	t87 = (((x405-x406)|x407)&x408);

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x409 = INT8_MIN;
	volatile uint64_t x410 = 4548962LLU;
	uint64_t t88 = UINT64_MAX;

	t88 = (((x409-x410)|x411)&x412);

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x413 = INT64_MIN;
	uint32_t x415 = 278U;
	int8_t x416 = INT8_MIN;
	volatile int64_t t89 = 466575349LL;

	t89 = (((x413-x414)|x415)&x416);

	if (t89 != -9223372036854775424LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x421 = -16LL;
	uint32_t x422 = 12652U;
	int64_t x423 = -2174LL;
	int8_t x424 = INT8_MIN;
	volatile int64_t t90 = 43120835799340LL;

	t90 = (((x421-x422)|x423)&x424);

	if (t90 != -128LL) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x426 = INT16_MAX;
	int64_t x428 = INT64_MIN;
	volatile int64_t t91 = 6049LL;

	t91 = (((x425-x426)|x427)&x428);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x429 = -19;
	uint64_t x430 = 13830LLU;
	int32_t x431 = INT32_MIN;
	uint8_t x432 = 59U;
	volatile uint64_t t92 = 126LLU;

	t92 = (((x429-x430)|x431)&x432);

	if (t92 != 35LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x433 = 3441615LLU;
	int32_t x434 = -187664;
	int32_t x436 = INT32_MAX;
	uint64_t t93 = 0LLU;

	t93 = (((x433-x434)|x435)&x436);

	if (t93 != 2147483647LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x437 = 0LL;
	int8_t x438 = 61;
	uint64_t x440 = 41055431LLU;
	volatile uint64_t t94 = 758003LLU;

	t94 = (((x437-x438)|x439)&x440);

	if (t94 != 41055431LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x441 = 5U;
	int16_t x442 = INT16_MIN;
	int8_t x443 = INT8_MIN;
	volatile uint32_t x444 = 111U;
	static uint32_t t95 = 0U;

	t95 = (((x441-x442)|x443)&x444);

	if (t95 != 5U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x450 = -1LL;
	static uint32_t x451 = 14833U;
	uint8_t x452 = UINT8_MAX;
	static volatile int64_t t96 = -2376058622LL;

	t96 = (((x449-x450)|x451)&x452);

	if (t96 != 247LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x453 = INT32_MAX;
	volatile int8_t x455 = -1;
	int8_t x456 = INT8_MIN;
	static volatile int32_t t97 = -67;

	t97 = (((x453-x454)|x455)&x456);

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x457 = -31794596808503LL;
	static uint32_t x459 = 5U;
	uint64_t x460 = UINT64_MAX;
	uint64_t t98 = 15379696346682LLU;

	t98 = (((x457-x458)|x459)&x460);

	if (t98 != 18446712279112734773LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x461 = 3U;
	int16_t x462 = -112;
	int16_t x463 = -1;
	volatile int64_t t99 = INT64_MAX;

	t99 = (((x461-x462)|x463)&x464);

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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


    return 0;
}

