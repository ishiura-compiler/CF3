#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MAX;
volatile int64_t x4 = INT64_MAX;
uint64_t x5 = 411217LLU;
uint64_t t1 = 0LLU;
uint16_t x9 = 18U;
int8_t x13 = INT8_MIN;
int32_t t4 = INT32_MIN;
volatile int64_t t6 = 1830998351904536LL;
int32_t x30 = 38;
static int64_t x32 = -1LL;
static uint64_t t7 = UINT64_MAX;
int8_t x34 = -1;
int32_t t8 = 583;
int8_t x46 = -1;
int8_t x47 = INT8_MIN;
static int8_t x48 = 8;
uint8_t x50 = UINT8_MAX;
uint32_t x51 = 14U;
int32_t t11 = 11;
static int8_t x65 = -23;
int64_t x66 = INT64_MIN;
static uint8_t x76 = 7U;
volatile uint64_t x77 = 12583762317662213LLU;
int8_t x78 = INT8_MIN;
int32_t x80 = INT32_MAX;
static uint64_t t18 = 69LLU;
int64_t x83 = 3114475LL;
int16_t x87 = INT16_MAX;
uint8_t x88 = UINT8_MAX;
volatile int32_t t20 = -241719;
int64_t x90 = INT64_MAX;
int64_t x96 = 20366334LL;
int16_t x110 = INT16_MIN;
uint32_t x111 = 12U;
uint8_t x116 = UINT8_MAX;
volatile int16_t x118 = 1;
int32_t x119 = INT32_MAX;
uint8_t x130 = 1U;
volatile int32_t t30 = -1825390;
uint16_t x139 = 9045U;
int64_t x143 = -2193885LL;
uint8_t x144 = UINT8_MAX;
uint64_t x146 = 8220212302338611LLU;
int16_t x154 = INT16_MIN;
volatile int8_t x157 = INT8_MIN;
int32_t x160 = INT32_MIN;
static int32_t t40 = 35741640;
uint32_t x173 = 126422U;
static int8_t x177 = -2;
uint64_t x181 = 337554643LLU;
uint16_t x188 = UINT16_MAX;
int32_t x189 = -191423;
int32_t t45 = 26062991;
volatile int32_t t46 = 28901;
static uint8_t x201 = UINT8_MAX;
int64_t x211 = INT64_MIN;
uint16_t x215 = 450U;
uint64_t x218 = 57LLU;
uint64_t x220 = 31890932274027LLU;
volatile uint64_t x221 = 162LLU;
volatile uint64_t t53 = 4729LLU;
static int32_t x231 = -1;
volatile int32_t x237 = INT32_MIN;
volatile int32_t t57 = 850;
uint8_t x245 = 11U;
volatile int32_t t59 = -16;
uint32_t x250 = UINT32_MAX;
volatile int16_t x251 = INT16_MIN;
volatile int32_t t61 = 853361447;
uint16_t x260 = 183U;
uint64_t x272 = UINT64_MAX;
volatile uint16_t x274 = UINT16_MAX;
int32_t t66 = 294;
uint32_t x280 = 3157658U;
volatile int16_t x285 = 284;
static uint8_t x288 = UINT8_MAX;
int64_t x295 = INT64_MAX;
int32_t x300 = -1;
int32_t x301 = INT32_MIN;
int8_t x306 = INT8_MIN;
static uint32_t x307 = 1043698U;
volatile int8_t x308 = INT8_MIN;
uint64_t x309 = 4980785LLU;
static uint16_t x311 = 2446U;
int16_t x312 = 687;
static volatile uint64_t x313 = 99888798527994LLU;
uint64_t x317 = 28697008794240975LLU;
uint64_t t77 = 35231LLU;
int8_t x322 = INT8_MAX;
static int16_t x323 = INT16_MAX;
int16_t x324 = -1;
volatile int32_t x325 = -1;
uint32_t t80 = 107U;
int64_t x336 = -1LL;
int32_t t81 = 1056579;
int64_t x338 = INT64_MIN;
uint64_t x340 = 29337509981LLU;
static volatile int32_t t82 = 31045193;
static int16_t x351 = -14;
uint8_t x353 = 1U;
int64_t x357 = INT64_MIN;
int16_t x359 = -1;
volatile int8_t x360 = INT8_MAX;
static volatile int64_t t87 = 15513LL;
int8_t x368 = INT8_MIN;
int32_t t89 = 1505;
volatile int32_t t90 = 596373586;
int64_t x380 = 88519692368818890LL;
volatile int64_t x387 = 16436893LL;
int8_t x389 = -27;
int32_t t94 = -5570623;
int32_t x394 = 4635;
volatile int32_t t95 = INT32_MAX;
int32_t x402 = INT32_MIN;
int16_t x404 = INT16_MAX;
int32_t x408 = 1;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int16_t x3 = INT16_MIN;
	int32_t t0 = 187524827;

	t0 = (x1+((x2&x3)<=x4));

	if (t0 != -127) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = 0;
	int32_t x7 = INT32_MIN;
	int64_t x8 = INT64_MAX;

	t1 = (x5+((x6&x7)<=x8));

	if (t1 != 411218LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MIN;
	volatile int64_t x11 = INT64_MAX;
	volatile uint16_t x12 = 21861U;
	volatile int32_t t2 = -5;

	t2 = (x9+((x10&x11)<=x12));

	if (t2 != 18) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x14 = INT64_MAX;
	static int8_t x15 = INT8_MIN;
	int32_t x16 = -2257786;
	volatile int32_t t3 = 496171795;

	t3 = (x13+((x14&x15)<=x16));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	static uint32_t x18 = 138U;
	uint8_t x19 = UINT8_MAX;
	int8_t x20 = INT8_MAX;

	t4 = (x17+((x18&x19)<=x20));

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MIN;
	volatile int8_t x22 = INT8_MIN;
	int64_t x23 = INT64_MAX;
	int32_t x24 = 1;
	volatile int32_t t5 = -1;

	t5 = (x21+((x22&x23)<=x24));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 3121771924LL;
	volatile uint64_t x26 = UINT64_MAX;
	static int32_t x27 = 20380;
	int8_t x28 = -40;

	t6 = (x25+((x26&x27)<=x28));

	if (t6 != 3121771925LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	uint8_t x31 = 1U;

	t7 = (x29+((x30&x31)<=x32));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 26U;
	static int16_t x35 = 2935;
	static volatile uint32_t x36 = UINT32_MAX;

	t8 = (x33+((x34&x35)<=x36));

	if (t8 != 27) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x41 = -6;
	int8_t x42 = INT8_MIN;
	volatile int32_t x43 = -1;
	static volatile int64_t x44 = -1LL;
	int32_t t9 = 80193757;

	t9 = (x41+((x42&x43)<=x44));

	if (t9 != -5) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -22102905295543969LL;
	volatile int64_t t10 = 15LL;

	t10 = (x45+((x46&x47)<=x48));

	if (t10 != -22102905295543968LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = 6;
	int32_t x52 = INT32_MAX;

	t11 = (x49+((x50&x51)<=x52));

	if (t11 != 7) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = 1U;
	volatile int64_t x54 = -4559935012LL;
	int64_t x55 = 511829743216414389LL;
	int16_t x56 = -1;
	static uint32_t t12 = 63644700U;

	t12 = (x53+((x54&x55)<=x56));

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = UINT16_MAX;
	static uint32_t x58 = 138U;
	volatile uint32_t x59 = UINT32_MAX;
	int8_t x60 = 0;
	volatile int32_t t13 = 151483;

	t13 = (x57+((x58&x59)<=x60));

	if (t13 != 65535) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = -522;
	uint32_t x62 = 14813U;
	int16_t x63 = INT16_MAX;
	uint16_t x64 = UINT16_MAX;
	int32_t t14 = 321316719;

	t14 = (x61+((x62&x63)<=x64));

	if (t14 != -521) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x67 = INT8_MIN;
	volatile int64_t x68 = -1LL;
	int32_t t15 = 5633;

	t15 = (x65+((x66&x67)<=x68));

	if (t15 != -22) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = 3452496LL;
	volatile int32_t x70 = -1;
	int32_t x71 = INT32_MIN;
	int64_t x72 = INT64_MAX;
	volatile int64_t t16 = -178380281508191LL;

	t16 = (x69+((x70&x71)<=x72));

	if (t16 != 3452497LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = INT64_MIN;
	int8_t x74 = INT8_MIN;
	uint64_t x75 = 119653421785100LLU;
	volatile int64_t t17 = INT64_MIN;

	t17 = (x73+((x74&x75)<=x76));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x79 = 1601627668976LL;

	t18 = (x77+((x78&x79)<=x80));

	if (t18 != 12583762317662213LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x81 = INT16_MIN;
	uint64_t x82 = 285729664652308LLU;
	int32_t x84 = INT32_MIN;
	static volatile int32_t t19 = 82533;

	t19 = (x81+((x82&x83)<=x84));

	if (t19 != -32767) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x85 = -1;
	int8_t x86 = 3;

	t20 = (x85+((x86&x87)<=x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = 22754421U;
	int32_t x91 = INT32_MIN;
	static int8_t x92 = INT8_MIN;
	static volatile uint32_t t21 = 1405997814U;

	t21 = (x89+((x90&x91)<=x92));

	if (t21 != 22754421U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = UINT16_MAX;
	int32_t x94 = INT32_MIN;
	int64_t x95 = INT64_MIN;
	volatile int32_t t22 = 11604328;

	t22 = (x93+((x94&x95)<=x96));

	if (t22 != 65536) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = INT16_MAX;
	int64_t x98 = INT64_MIN;
	uint8_t x99 = UINT8_MAX;
	static volatile int64_t x100 = INT64_MAX;
	volatile int32_t t23 = 20675;

	t23 = (x97+((x98&x99)<=x100));

	if (t23 != 32768) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = 28;
	uint64_t x106 = UINT64_MAX;
	int64_t x107 = -1LL;
	static volatile uint32_t x108 = 1914572839U;
	int32_t t24 = 27;

	t24 = (x105+((x106&x107)<=x108));

	if (t24 != 28) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x109 = -11551781LL;
	static volatile int64_t x112 = INT64_MIN;
	int64_t t25 = 1760630LL;

	t25 = (x109+((x110&x111)<=x112));

	if (t25 != -11551781LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x113 = UINT32_MAX;
	int64_t x114 = INT64_MAX;
	uint8_t x115 = UINT8_MAX;
	volatile uint32_t t26 = 984U;

	t26 = (x113+((x114&x115)<=x116));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = -1;
	static int16_t x120 = -107;
	static volatile int32_t t27 = 263;

	t27 = (x117+((x118&x119)<=x120));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x121 = -1LL;
	uint32_t x122 = UINT32_MAX;
	uint16_t x123 = UINT16_MAX;
	int64_t x124 = INT64_MAX;
	volatile int64_t t28 = -431764174068LL;

	t28 = (x121+((x122&x123)<=x124));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = INT16_MIN;
	static int64_t x126 = INT64_MAX;
	int32_t x127 = -1;
	static int32_t x128 = INT32_MIN;
	int32_t t29 = -820206384;

	t29 = (x125+((x126&x127)<=x128));

	if (t29 != -32768) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = INT16_MIN;
	int64_t x131 = INT64_MAX;
	volatile int64_t x132 = -1LL;

	t30 = (x129+((x130&x131)<=x132));

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x133 = 1U;
	int64_t x134 = INT64_MAX;
	static int16_t x135 = INT16_MIN;
	int16_t x136 = -1;
	volatile int32_t t31 = 3424092;

	t31 = (x133+((x134&x135)<=x136));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x137 = 54U;
	volatile int16_t x138 = INT16_MAX;
	static int16_t x140 = -1;
	volatile int32_t t32 = -7;

	t32 = (x137+((x138&x139)<=x140));

	if (t32 != 54) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = INT64_MAX;
	static uint32_t x142 = 276518U;
	static volatile int64_t t33 = INT64_MAX;

	t33 = (x141+((x142&x143)<=x144));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x145 = 8668846661958825LLU;
	uint32_t x147 = UINT32_MAX;
	int16_t x148 = INT16_MIN;
	volatile uint64_t t34 = 77344088141LLU;

	t34 = (x145+((x146&x147)<=x148));

	if (t34 != 8668846661958826LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x149 = 8U;
	int8_t x150 = -1;
	int32_t x151 = INT32_MIN;
	int64_t x152 = INT64_MIN;
	static volatile int32_t t35 = -8740;

	t35 = (x149+((x150&x151)<=x152));

	if (t35 != 8) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x153 = 1U;
	int8_t x155 = -1;
	int16_t x156 = INT16_MAX;
	volatile int32_t t36 = -93862168;

	t36 = (x153+((x154&x155)<=x156));

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x158 = INT16_MIN;
	static uint32_t x159 = 501572U;
	int32_t t37 = 4676059;

	t37 = (x157+((x158&x159)<=x160));

	if (t37 != -127) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = -1;
	uint64_t x162 = 3190260449267525LLU;
	uint64_t x163 = 56623386158296LLU;
	int16_t x164 = -1;
	static int32_t t38 = -322652274;

	t38 = (x161+((x162&x163)<=x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x165 = UINT32_MAX;
	int8_t x166 = INT8_MIN;
	int8_t x167 = 5;
	volatile uint64_t x168 = 1607993135974287LLU;
	volatile uint32_t t39 = 77014673U;

	t39 = (x165+((x166&x167)<=x168));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x169 = 75U;
	volatile int64_t x170 = -343907533856373675LL;
	int16_t x171 = INT16_MIN;
	int8_t x172 = INT8_MIN;

	t40 = (x169+((x170&x171)<=x172));

	if (t40 != 76) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x174 = 91;
	uint16_t x175 = UINT16_MAX;
	static int64_t x176 = -117LL;
	static volatile uint32_t t41 = 110U;

	t41 = (x173+((x174&x175)<=x176));

	if (t41 != 126422U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x178 = UINT8_MAX;
	static volatile int64_t x179 = -1LL;
	static int32_t x180 = -1;
	volatile int32_t t42 = 11;

	t42 = (x177+((x178&x179)<=x180));

	if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x182 = 121U;
	static int32_t x183 = INT32_MIN;
	static int64_t x184 = INT64_MIN;
	uint64_t t43 = 3596LLU;

	t43 = (x181+((x182&x183)<=x184));

	if (t43 != 337554643LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x185 = 15U;
	uint8_t x186 = 10U;
	int16_t x187 = -77;
	int32_t t44 = -1214;

	t44 = (x185+((x186&x187)<=x188));

	if (t44 != 16) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x190 = 8;
	int8_t x191 = INT8_MAX;
	volatile uint64_t x192 = UINT64_MAX;

	t45 = (x189+((x190&x191)<=x192));

	if (t45 != -191422) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x193 = UINT16_MAX;
	uint64_t x194 = 19681862LLU;
	int16_t x195 = -1138;
	uint8_t x196 = UINT8_MAX;

	t46 = (x193+((x194&x195)<=x196));

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x197 = -1LL;
	static int64_t x198 = 2087289894409973LL;
	uint8_t x199 = UINT8_MAX;
	int16_t x200 = INT16_MIN;
	static volatile int64_t t47 = -61083316804970886LL;

	t47 = (x197+((x198&x199)<=x200));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x202 = 17541U;
	int16_t x203 = INT16_MIN;
	volatile int16_t x204 = INT16_MIN;
	volatile int32_t t48 = -7;

	t48 = (x201+((x202&x203)<=x204));

	if (t48 != 256) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x205 = UINT64_MAX;
	int64_t x206 = INT64_MAX;
	uint64_t x207 = UINT64_MAX;
	uint64_t x208 = UINT64_MAX;
	static volatile uint64_t t49 = 282138029709479830LLU;

	t49 = (x205+((x206&x207)<=x208));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x209 = 943U;
	int8_t x210 = 36;
	uint8_t x212 = 87U;
	uint32_t t50 = 1U;

	t50 = (x209+((x210&x211)<=x212));

	if (t50 != 944U) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x213 = 2U;
	int8_t x214 = 52;
	uint32_t x216 = 1U;
	int32_t t51 = 861461047;

	t51 = (x213+((x214&x215)<=x216));

	if (t51 != 3) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x217 = 11680780550877LLU;
	volatile int8_t x219 = INT8_MIN;
	uint64_t t52 = 2277065866866962LLU;

	t52 = (x217+((x218&x219)<=x220));

	if (t52 != 11680780550878LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x222 = INT8_MAX;
	int32_t x223 = INT32_MIN;
	int16_t x224 = INT16_MIN;

	t53 = (x221+((x222&x223)<=x224));

	if (t53 != 162LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = INT32_MIN;
	int64_t x226 = -7275LL;
	volatile uint8_t x227 = 7U;
	int16_t x228 = -4;
	volatile int32_t t54 = INT32_MIN;

	t54 = (x225+((x226&x227)<=x228));

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x229 = UINT32_MAX;
	int64_t x230 = INT64_MIN;
	uint64_t x232 = 71LLU;
	uint32_t t55 = UINT32_MAX;

	t55 = (x229+((x230&x231)<=x232));

	if (t55 != UINT32_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x233 = INT8_MIN;
	uint64_t x234 = 62929895072055276LLU;
	int16_t x235 = 5;
	int8_t x236 = INT8_MIN;
	int32_t t56 = -114000;

	t56 = (x233+((x234&x235)<=x236));

	if (t56 != -127) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x238 = INT32_MAX;
	int32_t x239 = INT32_MIN;
	int64_t x240 = INT64_MAX;

	t57 = (x237+((x238&x239)<=x240));

	if (t57 != -2147483647) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x241 = INT64_MIN;
	int32_t x242 = INT32_MAX;
	int16_t x243 = -1;
	int8_t x244 = INT8_MIN;
	int64_t t58 = INT64_MIN;

	t58 = (x241+((x242&x243)<=x244));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x246 = 65033U;
	uint64_t x247 = 16941515646249LLU;
	uint8_t x248 = 62U;

	t59 = (x245+((x246&x247)<=x248));

	if (t59 != 11) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = 120LL;
	int64_t x252 = INT64_MAX;
	static volatile int64_t t60 = -1LL;

	t60 = (x249+((x250&x251)<=x252));

	if (t60 != 121LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x253 = INT8_MIN;
	uint8_t x254 = 25U;
	static uint32_t x255 = 35467372U;
	int8_t x256 = 7;

	t61 = (x253+((x254&x255)<=x256));

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = INT16_MIN;
	int32_t x258 = INT32_MIN;
	uint32_t x259 = UINT32_MAX;
	volatile int32_t t62 = -174018;

	t62 = (x257+((x258&x259)<=x260));

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x261 = 2;
	int64_t x262 = -1LL;
	int64_t x263 = INT64_MAX;
	static int8_t x264 = -1;
	int32_t t63 = -18657939;

	t63 = (x261+((x262&x263)<=x264));

	if (t63 != 2) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x265 = INT8_MIN;
	uint64_t x266 = 474397699897890672LLU;
	volatile uint32_t x267 = 134U;
	static volatile uint64_t x268 = UINT64_MAX;
	volatile int32_t t64 = 34814567;

	t64 = (x265+((x266&x267)<=x268));

	if (t64 != -127) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x269 = -8;
	static uint64_t x270 = 25109516492LLU;
	int64_t x271 = -1LL;
	int32_t t65 = 624;

	t65 = (x269+((x270&x271)<=x272));

	if (t65 != -7) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x273 = 8U;
	static volatile uint16_t x275 = 4013U;
	int8_t x276 = INT8_MIN;

	t66 = (x273+((x274&x275)<=x276));

	if (t66 != 8) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x277 = 1901336855729LLU;
	volatile int16_t x278 = 1;
	volatile int32_t x279 = -1;
	static volatile uint64_t t67 = 7204756781LLU;

	t67 = (x277+((x278&x279)<=x280));

	if (t67 != 1901336855730LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x281 = -1LL;
	int32_t x282 = -389059280;
	uint64_t x283 = UINT64_MAX;
	static int32_t x284 = 194;
	int64_t t68 = 2843317379040828955LL;

	t68 = (x281+((x282&x283)<=x284));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x286 = UINT16_MAX;
	int64_t x287 = INT64_MIN;
	volatile int32_t t69 = 11;

	t69 = (x285+((x286&x287)<=x288));

	if (t69 != 285) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = INT8_MIN;
	static volatile int32_t x290 = INT32_MIN;
	int64_t x291 = -1LL;
	uint16_t x292 = UINT16_MAX;
	static volatile int32_t t70 = -50135831;

	t70 = (x289+((x290&x291)<=x292));

	if (t70 != -127) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x293 = 21U;
	volatile int32_t x294 = INT32_MAX;
	static int64_t x296 = INT64_MIN;
	int32_t t71 = -369;

	t71 = (x293+((x294&x295)<=x296));

	if (t71 != 21) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x297 = -1LL;
	int64_t x298 = -1LL;
	static int8_t x299 = INT8_MIN;
	volatile int64_t t72 = 255203272924LL;

	t72 = (x297+((x298&x299)<=x300));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x302 = -1;
	static int8_t x303 = -1;
	int16_t x304 = INT16_MIN;
	static volatile int32_t t73 = INT32_MIN;

	t73 = (x301+((x302&x303)<=x304));

	if (t73 != INT32_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x305 = -1586;
	volatile int32_t t74 = -6512;

	t74 = (x305+((x306&x307)<=x308));

	if (t74 != -1585) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x310 = UINT8_MAX;
	volatile uint64_t t75 = 36115027LLU;

	t75 = (x309+((x310&x311)<=x312));

	if (t75 != 4980786LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x314 = 6;
	int64_t x315 = INT64_MIN;
	int16_t x316 = INT16_MIN;
	uint64_t t76 = 452444835559LLU;

	t76 = (x313+((x314&x315)<=x316));

	if (t76 != 99888798527994LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x318 = UINT32_MAX;
	uint64_t x319 = 2220LLU;
	uint8_t x320 = 122U;

	t77 = (x317+((x318&x319)<=x320));

	if (t77 != 28697008794240975LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x321 = UINT64_MAX;
	uint64_t t78 = UINT64_MAX;

	t78 = (x321+((x322&x323)<=x324));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x326 = INT16_MIN;
	static int32_t x327 = -1;
	int16_t x328 = 1661;
	int32_t t79 = -1;

	t79 = (x325+((x326&x327)<=x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x329 = 27926721U;
	volatile int8_t x330 = INT8_MIN;
	int8_t x331 = INT8_MAX;
	uint16_t x332 = 24392U;

	t80 = (x329+((x330&x331)<=x332));

	if (t80 != 27926722U) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x333 = 0;
	int8_t x334 = INT8_MAX;
	volatile int8_t x335 = -1;

	t81 = (x333+((x334&x335)<=x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x337 = INT8_MIN;
	volatile int16_t x339 = -3;

	t82 = (x337+((x338&x339)<=x340));

	if (t82 != -128) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x341 = INT64_MIN;
	static int16_t x342 = -1;
	uint64_t x343 = 388544456LLU;
	volatile int8_t x344 = INT8_MAX;
	int64_t t83 = INT64_MIN;

	t83 = (x341+((x342&x343)<=x344));

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x345 = 748U;
	volatile int16_t x346 = INT16_MIN;
	int8_t x347 = 3;
	int32_t x348 = 3;
	volatile int32_t t84 = 2;

	t84 = (x345+((x346&x347)<=x348));

	if (t84 != 749) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x349 = INT8_MIN;
	uint8_t x350 = 61U;
	int8_t x352 = -1;
	volatile int32_t t85 = -29896154;

	t85 = (x349+((x350&x351)<=x352));

	if (t85 != -128) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x354 = INT32_MIN;
	int64_t x355 = INT64_MIN;
	int8_t x356 = 14;
	int32_t t86 = -1608;

	t86 = (x353+((x354&x355)<=x356));

	if (t86 != 2) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x358 = -1;

	t87 = (x357+((x358&x359)<=x360));

	if (t87 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x361 = 3059725858LLU;
	int8_t x362 = INT8_MIN;
	int16_t x363 = -346;
	volatile int16_t x364 = INT16_MIN;
	volatile uint64_t t88 = 217160120165861119LLU;

	t88 = (x361+((x362&x363)<=x364));

	if (t88 != 3059725858LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x365 = INT8_MIN;
	int64_t x366 = INT64_MIN;
	volatile uint32_t x367 = 7166U;

	t89 = (x365+((x366&x367)<=x368));

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x369 = UINT8_MAX;
	int16_t x370 = 27;
	int8_t x371 = 0;
	uint8_t x372 = 20U;

	t90 = (x369+((x370&x371)<=x372));

	if (t90 != 256) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x377 = 0U;
	uint64_t x378 = UINT64_MAX;
	volatile int16_t x379 = -5;
	volatile int32_t t91 = -6;

	t91 = (x377+((x378&x379)<=x380));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x381 = INT32_MIN;
	uint64_t x382 = 246LLU;
	static uint64_t x383 = UINT64_MAX;
	int8_t x384 = INT8_MIN;
	int32_t t92 = -13156;

	t92 = (x381+((x382&x383)<=x384));

	if (t92 != -2147483647) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x385 = INT8_MAX;
	volatile int32_t x386 = -1;
	int64_t x388 = -122607533699LL;
	volatile int32_t t93 = 412;

	t93 = (x385+((x386&x387)<=x388));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x390 = UINT8_MAX;
	static uint8_t x391 = UINT8_MAX;
	static int8_t x392 = INT8_MIN;

	t94 = (x389+((x390&x391)<=x392));

	if (t94 != -27) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x393 = INT32_MAX;
	uint8_t x395 = 76U;
	int64_t x396 = -1LL;

	t95 = (x393+((x394&x395)<=x396));

	if (t95 != INT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x397 = -1;
	static volatile int64_t x398 = -1LL;
	int64_t x399 = 105844186645330LL;
	int16_t x400 = -1;
	int32_t t96 = 0;

	t96 = (x397+((x398&x399)<=x400));

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x401 = INT32_MIN;
	static uint8_t x403 = 20U;
	int32_t t97 = -196163;

	t97 = (x401+((x402&x403)<=x404));

	if (t97 != -2147483647) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x405 = INT64_MIN;
	uint16_t x406 = 4817U;
	static uint64_t x407 = UINT64_MAX;
	int64_t t98 = INT64_MIN;

	t98 = (x405+((x406&x407)<=x408));

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x409 = -13833330123755LL;
	uint32_t x410 = 3U;
	uint8_t x411 = UINT8_MAX;
	volatile int16_t x412 = INT16_MIN;
	static volatile int64_t t99 = -4091846388887LL;

	t99 = (x409+((x410&x411)<=x412));

	if (t99 != -13833330123754LL) { NG(); } else { ; }
	
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
