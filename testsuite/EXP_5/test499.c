#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x8 = INT8_MAX;
int64_t t1 = 606LL;
int16_t x12 = INT16_MAX;
int64_t t2 = -5202991236448LL;
volatile int16_t x16 = INT16_MAX;
static uint8_t x25 = 5U;
uint8_t x36 = 1U;
volatile int16_t x48 = -1;
int8_t x58 = -1;
int16_t x60 = 157;
volatile int8_t x62 = 1;
int8_t x65 = INT8_MAX;
volatile uint32_t t16 = 227169U;
static int8_t x77 = -1;
static volatile int16_t x80 = -55;
volatile uint64_t t17 = 464LLU;
uint16_t x93 = UINT16_MAX;
uint64_t x94 = 446144LLU;
int32_t x96 = INT32_MIN;
static int8_t x106 = -1;
int16_t x128 = INT16_MIN;
int8_t x144 = -1;
int32_t x145 = INT32_MIN;
int8_t x146 = -14;
uint64_t x154 = 27431522061786509LLU;
volatile uint64_t t30 = 145378996080LLU;
static uint8_t x163 = UINT8_MAX;
volatile uint64_t t31 = 0LLU;
int16_t x178 = INT16_MIN;
uint8_t x184 = 3U;
int64_t x200 = -1LL;
uint16_t x203 = 986U;
int32_t t39 = -11;
uint64_t x215 = 0LLU;
volatile int16_t x227 = -1;
static int16_t x232 = INT16_MIN;
volatile int64_t t44 = 7457461062085LL;
volatile int64_t t46 = -10889LL;
volatile uint64_t t47 = 47457727086211985LLU;
int64_t t49 = 3014327967025510LL;
uint64_t t50 = 106880353LLU;
int8_t x286 = INT8_MIN;
uint32_t x287 = 80526004U;
int16_t x288 = INT16_MIN;
uint32_t t52 = 3U;
static uint8_t x296 = UINT8_MAX;
volatile int32_t x298 = INT32_MIN;
int64_t x303 = -848319878LL;
int64_t x306 = INT64_MAX;
int32_t x308 = -1;
volatile int16_t x311 = -1;
uint8_t x313 = 18U;
int16_t x314 = INT16_MIN;
int16_t x317 = INT16_MAX;
static int64_t x318 = 342LL;
uint16_t x322 = UINT16_MAX;
volatile int32_t x323 = -85;
static int64_t x324 = 286825893349881864LL;
int64_t t60 = -230302LL;
uint16_t x336 = 1U;
uint32_t t64 = 19606U;
volatile int8_t x360 = -1;
static int32_t x361 = INT32_MIN;
int16_t x362 = INT16_MAX;
uint16_t x363 = 151U;
volatile int8_t x372 = -17;
volatile int32_t t69 = 0;
static volatile uint32_t x379 = 6U;
static int64_t t72 = -67649462294LL;
int32_t x408 = -1;
uint64_t t73 = 242655674178382224LLU;
uint16_t x421 = 903U;
static uint64_t x436 = 263604441470039825LLU;
volatile uint64_t t77 = 27741992863797163LLU;
volatile uint16_t x439 = 580U;
static int64_t t78 = 276405201524987122LL;
static uint32_t x443 = UINT32_MAX;
volatile uint32_t t79 = 214U;
volatile uint64_t t83 = 557492120955971LLU;
int16_t x466 = 15;
int64_t x473 = -120156092LL;
int64_t x484 = INT64_MIN;
volatile int32_t x485 = INT32_MAX;
int16_t x487 = 3453;
static uint64_t t88 = 113952157576649225LLU;
int16_t x500 = INT16_MAX;
uint8_t x504 = 5U;
volatile uint8_t x506 = 12U;
int16_t x516 = INT16_MAX;
static uint8_t x524 = 0U;
static uint32_t x535 = 276U;
int64_t x552 = INT64_MIN;


void f0(void) {
	volatile int32_t x1 = -1;
	static uint8_t x2 = 1U;
	uint8_t x3 = UINT8_MAX;
	volatile int32_t x4 = INT32_MAX;
	static int32_t t0 = -359051404;

	t0 = (x1%((x2*x3)^x4));

	if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	volatile uint8_t x6 = 28U;
	static int8_t x7 = INT8_MAX;

	t1 = (x5%((x6*x7)^x8));

	if (t1 != -1160LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 1LL;
	static volatile uint32_t x10 = UINT32_MAX;
	int8_t x11 = INT8_MAX;

	t2 = (x9%((x10*x11)^x12));

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = -1LL;
	int16_t x14 = 91;
	int8_t x15 = INT8_MAX;
	volatile int64_t t3 = -334921475769805LL;

	t3 = (x13%((x14*x15)^x16));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -1;
	int32_t x18 = -1;
	volatile int16_t x19 = INT16_MIN;
	int64_t x20 = INT64_MAX;
	volatile int64_t t4 = -1194372267421445258LL;

	t4 = (x17%((x18*x19)^x20));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -14438;
	int8_t x22 = -6;
	volatile uint16_t x23 = UINT16_MAX;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = -127482;

	t5 = (x21%((x22*x23)^x24));

	if (t5 != -14438) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x26 = INT8_MAX;
	static int32_t x27 = 146129;
	int16_t x28 = INT16_MAX;
	volatile int32_t t6 = -921;

	t6 = (x25%((x26*x27)^x28));

	if (t6 != 5) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MAX;
	uint64_t x30 = 3133254482611211885LLU;
	volatile int64_t x31 = 1LL;
	int16_t x32 = 15512;
	uint64_t t7 = 2840970618443LLU;

	t7 = (x29%((x30*x31)^x32));

	if (t7 != 2147483647LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = 4051468U;
	int8_t x34 = 2;
	static int8_t x35 = INT8_MIN;
	volatile uint32_t t8 = 13008U;

	t8 = (x33%((x34*x35)^x36));

	if (t8 != 4051468U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MIN;
	static int32_t x38 = -124724276;
	int8_t x39 = -1;
	volatile int64_t x40 = -1LL;
	int64_t t9 = 681LL;

	t9 = (x37%((x38*x39)^x40));

	if (t9 != -27170939LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = 3;
	int64_t x46 = 976LL;
	int16_t x47 = INT16_MAX;
	volatile int64_t t10 = -685218LL;

	t10 = (x45%((x46*x47)^x48));

	if (t10 != 3LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = 129435863209673489LL;
	static uint16_t x54 = 152U;
	int8_t x55 = -1;
	volatile int64_t x56 = -1LL;
	int64_t t11 = -946LL;

	t11 = (x53%((x54*x55)^x56));

	if (t11 != 59LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = INT8_MIN;
	int8_t x59 = -1;
	volatile int32_t t12 = 88142;

	t12 = (x57%((x58*x59)^x60));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = INT16_MIN;
	uint8_t x63 = 54U;
	int32_t x64 = INT32_MIN;
	int32_t t13 = 2004;

	t13 = (x61%((x62*x63)^x64));

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x66 = UINT16_MAX;
	static int16_t x67 = 21;
	static int64_t x68 = INT64_MIN;
	static int64_t t14 = -30312415012958095LL;

	t14 = (x65%((x66*x67)^x68));

	if (t14 != 127LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x69 = 8042057;
	int64_t x70 = -1LL;
	int16_t x71 = -1;
	uint64_t x72 = 794228650623861973LLU;
	volatile uint64_t t15 = 51229LLU;

	t15 = (x69%((x70*x71)^x72));

	if (t15 != 8042057LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x73 = 11U;
	int16_t x74 = INT16_MAX;
	int16_t x75 = INT16_MIN;
	int16_t x76 = -1;

	t16 = (x73%((x74*x75)^x76));

	if (t16 != 11U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x78 = UINT64_MAX;
	int32_t x79 = INT32_MIN;

	t17 = (x77%((x78*x79)^x80));

	if (t17 != 2147483702LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = 54;
	int8_t x86 = -27;
	int64_t x87 = -146283506871327437LL;
	int8_t x88 = -1;
	volatile int64_t t18 = 3310LL;

	t18 = (x85%((x86*x87)^x88));

	if (t18 != 54LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x89 = -7711116;
	int8_t x90 = INT8_MIN;
	int32_t x91 = -1;
	static volatile int64_t x92 = INT64_MIN;
	int64_t t19 = -119354926508LL;

	t19 = (x89%((x90*x91)^x92));

	if (t19 != -7711116LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x95 = UINT8_MAX;
	volatile uint64_t t20 = 763750035LLU;

	t20 = (x93%((x94*x95)^x96));

	if (t20 != 65535LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = INT64_MAX;
	int32_t x102 = INT32_MIN;
	int16_t x103 = 0;
	int32_t x104 = INT32_MAX;
	int64_t t21 = -1LL;

	t21 = (x101%((x102*x103)^x104));

	if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x105 = INT8_MIN;
	int16_t x107 = -1;
	int16_t x108 = INT16_MIN;
	volatile int32_t t22 = 107;

	t22 = (x105%((x106*x107)^x108));

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x109 = 0U;
	int64_t x110 = -10586278LL;
	volatile int16_t x111 = 405;
	int8_t x112 = INT8_MIN;
	volatile int64_t t23 = 5LL;

	t23 = (x109%((x110*x111)^x112));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = 808147955LL;
	volatile int32_t x114 = 1;
	int64_t x115 = 1LL;
	uint64_t x116 = 7LLU;
	static volatile uint64_t t24 = 12582896LLU;

	t24 = (x113%((x114*x115)^x116));

	if (t24 != 5LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x125 = -1;
	volatile int64_t x126 = -1LL;
	int32_t x127 = -2238;
	int64_t t25 = -13460275LL;

	t25 = (x125%((x126*x127)^x128));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x129 = 10276U;
	static uint8_t x130 = UINT8_MAX;
	int16_t x131 = INT16_MIN;
	static uint16_t x132 = UINT16_MAX;
	volatile int32_t t26 = 85;

	t26 = (x129%((x130*x131)^x132));

	if (t26 != 10276) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x137 = 16541328865520748LLU;
	volatile int16_t x138 = INT16_MIN;
	int16_t x139 = INT16_MAX;
	uint8_t x140 = UINT8_MAX;
	uint64_t t27 = 5LLU;

	t27 = (x137%((x138*x139)^x140));

	if (t27 != 16541328865520748LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x141 = 1U;
	uint64_t x142 = UINT64_MAX;
	int8_t x143 = INT8_MIN;
	volatile uint64_t t28 = 458776623LLU;

	t28 = (x141%((x142*x143)^x144));

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x147 = INT16_MIN;
	static int64_t x148 = -1LL;
	volatile int64_t t29 = -1816LL;

	t29 = (x145%((x146*x147)^x148));

	if (t29 != -60855LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x153 = INT64_MIN;
	volatile int16_t x155 = INT16_MIN;
	volatile int16_t x156 = INT16_MIN;

	t30 = (x153%((x154*x155)^x156));

	if (t30 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x161 = 724541837735061649LLU;
	int16_t x162 = -1;
	int8_t x164 = INT8_MAX;

	t31 = (x161%((x162*x163)^x164));

	if (t31 != 724541837735061649LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x165 = -1;
	uint32_t x166 = UINT32_MAX;
	int32_t x167 = INT32_MAX;
	static volatile uint16_t x168 = 29957U;
	static volatile uint32_t t32 = 6671198U;

	t32 = (x165%((x166*x167)^x168));

	if (t32 != 2147453691U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x173 = -1LL;
	uint64_t x174 = UINT64_MAX;
	uint64_t x175 = UINT64_MAX;
	volatile uint8_t x176 = UINT8_MAX;
	volatile uint64_t t33 = 1353830061LLU;

	t33 = (x173%((x174*x175)^x176));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x177 = 1224218655794843690LL;
	uint8_t x179 = 23U;
	int16_t x180 = INT16_MIN;
	int64_t t34 = 2183LL;

	t34 = (x177%((x178*x179)^x180));

	if (t34 != 512042LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x181 = UINT64_MAX;
	static uint16_t x182 = 110U;
	int16_t x183 = -224;
	static volatile uint64_t t35 = 67051156478826879LLU;

	t35 = (x181%((x182*x183)^x184));

	if (t35 != 24636LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x185 = -4125;
	uint16_t x186 = 1U;
	static volatile uint8_t x187 = 9U;
	uint32_t x188 = 786720372U;
	uint32_t t36 = 3099U;

	t36 = (x185%((x186*x187)^x188));

	if (t36 != 361361266U) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x193 = -230LL;
	static int32_t x194 = -1;
	int8_t x195 = INT8_MIN;
	int8_t x196 = -10;
	volatile int64_t t37 = -1945LL;

	t37 = (x193%((x194*x195)^x196));

	if (t37 != -92LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x197 = INT32_MIN;
	volatile uint32_t x198 = 1457393781U;
	int64_t x199 = -1LL;
	int64_t t38 = -5311540208223LL;

	t38 = (x197%((x198*x199)^x200));

	if (t38 != -690089868LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x201 = -62;
	static volatile uint16_t x202 = 2296U;
	int32_t x204 = 637047478;

	t39 = (x201%((x202*x203)^x204));

	if (t39 != -62) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x205 = INT16_MIN;
	volatile int64_t x206 = INT64_MAX;
	volatile uint64_t x207 = 1316746612614LLU;
	int32_t x208 = INT32_MAX;
	static volatile uint64_t t40 = 237LLU;

	t40 = (x205%((x206*x207)^x208));

	if (t40 != 1318215790715LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x213 = 980;
	uint8_t x214 = 11U;
	static int8_t x216 = -1;
	uint64_t t41 = 305131768072LLU;

	t41 = (x213%((x214*x215)^x216));

	if (t41 != 980LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x225 = -1;
	int8_t x226 = 0;
	int32_t x228 = -1;
	int32_t t42 = 12771020;

	t42 = (x225%((x226*x227)^x228));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x229 = 3205851;
	static int8_t x230 = INT8_MIN;
	volatile int16_t x231 = -5097;
	int32_t t43 = 1429559;

	t43 = (x229%((x230*x231)^x232));

	if (t43 != 78171) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x233 = INT64_MIN;
	int64_t x234 = -64321794LL;
	int64_t x235 = -1LL;
	volatile int64_t x236 = -90365512470476LL;

	t44 = (x233%((x234*x235)^x236));

	if (t44 != -29637304100034LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x241 = INT16_MAX;
	volatile uint32_t x242 = 3059U;
	uint16_t x243 = UINT16_MAX;
	static int16_t x244 = INT16_MAX;
	volatile uint32_t t45 = 1373464U;

	t45 = (x241%((x242*x243)^x244));

	if (t45 != 32767U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x245 = INT16_MAX;
	static int8_t x246 = INT8_MIN;
	int8_t x247 = -1;
	int64_t x248 = INT64_MIN;

	t46 = (x245%((x246*x247)^x248));

	if (t46 != 32767LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x249 = 1666U;
	uint64_t x250 = 684468422LLU;
	int64_t x251 = 3113238172564995LL;
	uint16_t x252 = 1U;

	t47 = (x249%((x250*x251)^x252));

	if (t47 != 1666LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x261 = INT64_MIN;
	int8_t x262 = INT8_MIN;
	int8_t x263 = 58;
	int32_t x264 = INT32_MIN;
	int64_t t48 = -905011018603547LL;

	t48 = (x261%((x262*x263)^x264));

	if (t48 != -110231552LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x269 = INT32_MAX;
	int64_t x270 = 0LL;
	int64_t x271 = -1LL;
	static int32_t x272 = INT32_MAX;

	t49 = (x269%((x270*x271)^x272));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x273 = 0LLU;
	volatile int32_t x274 = 2173;
	int8_t x275 = -1;
	uint64_t x276 = 136392LLU;

	t50 = (x273%((x274*x275)^x276));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x281 = INT8_MIN;
	uint8_t x282 = UINT8_MAX;
	static volatile int64_t x283 = -1LL;
	volatile int8_t x284 = INT8_MAX;
	int64_t t51 = -1002LL;

	t51 = (x281%((x282*x283)^x284));

	if (t51 != -128LL) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x285 = INT16_MAX;

	t52 = (x285%((x286*x287)^x288));

	if (t52 != 32767U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x293 = 2;
	int16_t x294 = INT16_MAX;
	uint8_t x295 = 1U;
	static int32_t t53 = -11674;

	t53 = (x293%((x294*x295)^x296));

	if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x297 = UINT16_MAX;
	int64_t x299 = -1LL;
	int32_t x300 = INT32_MAX;
	static int64_t t54 = -1LL;

	t54 = (x297%((x298*x299)^x300));

	if (t54 != 65535LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x301 = -1;
	int32_t x302 = INT32_MIN;
	static int16_t x304 = -9068;
	static volatile int64_t t55 = -23533850302LL;

	t55 = (x301%((x302*x303)^x304));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x305 = -35;
	uint16_t x307 = 1U;
	static int64_t t56 = 226317118117083690LL;

	t56 = (x305%((x306*x307)^x308));

	if (t56 != -35LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x309 = UINT8_MAX;
	uint64_t x310 = 400562933LLU;
	int32_t x312 = INT32_MIN;
	static volatile uint64_t t57 = 40966075038097558LLU;

	t57 = (x309%((x310*x311)^x312));

	if (t57 != 255LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x315 = 9316U;
	static volatile int16_t x316 = INT16_MIN;
	int32_t t58 = 8212057;

	t58 = (x313%((x314*x315)^x316));

	if (t58 != 18) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x319 = UINT32_MAX;
	volatile uint8_t x320 = 0U;
	volatile int64_t t59 = -20924317762411LL;

	t59 = (x317%((x318*x319)^x320));

	if (t59 != 32767LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x321 = INT32_MIN;

	t60 = (x321%((x322*x323)^x324));

	if (t60 != -2147483648LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x329 = INT64_MIN;
	volatile int32_t x330 = -176;
	uint64_t x331 = 7938LLU;
	int16_t x332 = 3832;
	volatile uint64_t t61 = 33840LLU;

	t61 = (x329%((x330*x331)^x332));

	if (t61 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x333 = -1;
	int64_t x334 = 435LL;
	uint8_t x335 = 1U;
	int64_t t62 = 8675357655412LL;

	t62 = (x333%((x334*x335)^x336));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x337 = UINT8_MAX;
	uint8_t x338 = 0U;
	volatile int16_t x339 = INT16_MAX;
	int8_t x340 = -3;
	static volatile int32_t t63 = 321713624;

	t63 = (x337%((x338*x339)^x340));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint32_t x341 = 777553U;
	int32_t x342 = INT32_MAX;
	static uint32_t x343 = 24U;
	static int32_t x344 = -1066724;

	t64 = (x341%((x342*x343)^x344));

	if (t64 != 777553U) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x345 = -24LL;
	int8_t x346 = INT8_MIN;
	uint8_t x347 = 1U;
	static volatile int64_t x348 = -2880LL;
	volatile int64_t t65 = 238643847351LL;

	t65 = (x345%((x346*x347)^x348));

	if (t65 != -24LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x353 = INT64_MIN;
	int32_t x354 = INT32_MIN;
	int64_t x355 = -1LL;
	static volatile int16_t x356 = INT16_MAX;
	static volatile int64_t t66 = -8398578396907925LL;

	t66 = (x353%((x354*x355)^x356));

	if (t66 != -2147352578LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x357 = INT16_MIN;
	int8_t x358 = 3;
	static int32_t x359 = 368253727;
	int32_t t67 = -44;

	t67 = (x357%((x358*x359)^x360));

	if (t67 != -32768) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x364 = UINT64_MAX;
	uint64_t t68 = 7385935LLU;

	t68 = (x361%((x362*x363)^x364));

	if (t68 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x369 = -1;
	int16_t x370 = INT16_MIN;
	static int16_t x371 = -15;

	t69 = (x369%((x370*x371)^x372));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x373 = -1;
	int16_t x374 = INT16_MAX;
	static volatile uint32_t x375 = 8301883U;
	int16_t x376 = INT16_MAX;
	volatile uint32_t t70 = 10507263U;

	t70 = (x373%((x374*x375)^x376));

	if (t70 != 1405265291U) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x377 = INT8_MIN;
	volatile int8_t x378 = INT8_MIN;
	volatile int16_t x380 = 89;
	static volatile uint32_t t71 = 858292U;

	t71 = (x377%((x378*x379)^x380));

	if (t71 != 551U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x393 = INT64_MIN;
	int64_t x394 = INT64_MIN;
	uint8_t x395 = 1U;
	uint32_t x396 = 3U;

	t72 = (x393%((x394*x395)^x396));

	if (t72 != -3LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x405 = 283529095773452544LLU;
	uint32_t x406 = 46699U;
	volatile int64_t x407 = -31629LL;

	t73 = (x405%((x406*x407)^x408));

	if (t73 != 919272274LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x409 = INT64_MIN;
	volatile int8_t x410 = INT8_MAX;
	static int64_t x411 = -318LL;
	volatile uint8_t x412 = 2U;
	volatile int64_t t74 = -3795537LL;

	t74 = (x409%((x410*x411)^x412));

	if (t74 != -21508LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x413 = 2U;
	int64_t x414 = -1LL;
	int64_t x415 = INT64_MAX;
	uint32_t x416 = 34983U;
	volatile int64_t t75 = 2936538LL;

	t75 = (x413%((x414*x415)^x416));

	if (t75 != 2LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x422 = -1LL;
	int16_t x423 = -1;
	int64_t x424 = -440437750LL;
	volatile int64_t t76 = -46348375665LL;

	t76 = (x421%((x422*x423)^x424));

	if (t76 != 903LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x433 = 533U;
	static int8_t x434 = INT8_MIN;
	uint32_t x435 = 141625U;

	t77 = (x433%((x434*x435)^x436));

	if (t77 != 533LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x437 = 115U;
	int64_t x438 = 6LL;
	static uint16_t x440 = 0U;

	t78 = (x437%((x438*x439)^x440));

	if (t78 != 115LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x441 = 317U;
	static int16_t x442 = INT16_MAX;
	volatile int32_t x444 = INT32_MAX;

	t79 = (x441%((x442*x443)^x444));

	if (t79 != 317U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x445 = -1;
	uint16_t x446 = 1U;
	uint64_t x447 = 473301069565LLU;
	static volatile uint64_t x448 = UINT64_MAX;
	static volatile uint64_t t80 = 4042293960567557LLU;

	t80 = (x445%((x446*x447)^x448));

	if (t80 != 473301069565LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x449 = -576;
	int16_t x450 = 1;
	volatile int16_t x451 = INT16_MAX;
	volatile int8_t x452 = INT8_MAX;
	volatile int32_t t81 = 312938756;

	t81 = (x449%((x450*x451)^x452));

	if (t81 != -576) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x453 = 252683963;
	uint16_t x454 = 25U;
	uint8_t x455 = 64U;
	static volatile int16_t x456 = INT16_MIN;
	static int32_t t82 = 39422477;

	t82 = (x453%((x454*x455)^x456));

	if (t82 != 4987) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x461 = INT32_MIN;
	static uint8_t x462 = 1U;
	int32_t x463 = INT32_MAX;
	uint64_t x464 = 48718723301670LLU;

	t83 = (x461%((x462*x463)^x464));

	if (t83 != 5719463108013LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x465 = -1;
	int16_t x467 = INT16_MAX;
	static int32_t x468 = INT32_MIN;
	int32_t t84 = -231473606;

	t84 = (x465%((x466*x467)^x468));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x469 = UINT16_MAX;
	int32_t x470 = -91;
	int8_t x471 = -1;
	volatile uint64_t x472 = UINT64_MAX;
	volatile uint64_t t85 = 6046LLU;

	t85 = (x469%((x470*x471)^x472));

	if (t85 != 65535LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x474 = INT16_MIN;
	static uint8_t x475 = UINT8_MAX;
	int8_t x476 = 2;
	int64_t t86 = 4321179321017596LL;

	t86 = (x473%((x474*x475)^x476));

	if (t86 != -3174360LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x481 = INT16_MIN;
	uint32_t x482 = 15U;
	static int8_t x483 = INT8_MAX;
	static volatile int64_t t87 = -25496LL;

	t87 = (x481%((x482*x483)^x484));

	if (t87 != -32768LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x486 = 919424738632367847LLU;
	int32_t x488 = -15921720;

	t88 = (x485%((x486*x487)^x488));

	if (t88 != 2147483647LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x493 = INT16_MAX;
	uint64_t x494 = UINT64_MAX;
	uint32_t x495 = UINT32_MAX;
	int16_t x496 = INT16_MIN;
	volatile uint64_t t89 = 478813242454757861LLU;

	t89 = (x493%((x494*x495)^x496));

	if (t89 != 32767LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x497 = INT32_MIN;
	int8_t x498 = -1;
	int16_t x499 = 0;
	volatile int32_t t90 = -120996850;

	t90 = (x497%((x498*x499)^x500));

	if (t90 != -2) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x501 = UINT16_MAX;
	uint64_t x502 = 4315496789551586LLU;
	uint64_t x503 = 80LLU;
	volatile uint64_t t91 = 17015235611751641LLU;

	t91 = (x501%((x502*x503)^x504));

	if (t91 != 65535LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x505 = INT64_MAX;
	volatile uint16_t x507 = UINT16_MAX;
	volatile int32_t x508 = -52364995;
	int64_t t92 = 1867407413372732LL;

	t92 = (x505%((x506*x507)^x508));

	if (t92 != 40646737LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x513 = 135U;
	uint64_t x514 = 24762LLU;
	int16_t x515 = INT16_MIN;
	uint64_t t93 = 857345385192LLU;

	t93 = (x513%((x514*x515)^x516));

	if (t93 != 135LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x517 = INT32_MIN;
	static uint8_t x518 = UINT8_MAX;
	uint8_t x519 = 29U;
	int64_t x520 = -1LL;
	static volatile int64_t t94 = -16321873LL;

	t94 = (x517%((x518*x519)^x520));

	if (t94 != -3276LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x521 = UINT64_MAX;
	int16_t x522 = INT16_MIN;
	int16_t x523 = INT16_MAX;
	volatile uint64_t t95 = 3586599782312LLU;

	t95 = (x521%((x522*x523)^x524));

	if (t95 != 1073709055LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x525 = INT8_MAX;
	volatile uint8_t x526 = 112U;
	int16_t x527 = INT16_MIN;
	int8_t x528 = -1;
	int32_t t96 = -1;

	t96 = (x525%((x526*x527)^x528));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x533 = 26241U;
	uint8_t x534 = 8U;
	static int16_t x536 = -60;
	static volatile uint32_t t97 = 2022156U;

	t97 = (x533%((x534*x535)^x536));

	if (t97 != 26241U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x537 = INT8_MIN;
	int64_t x538 = -1LL;
	uint16_t x539 = 6083U;
	int32_t x540 = INT32_MIN;
	volatile int64_t t98 = -3LL;

	t98 = (x537%((x538*x539)^x540));

	if (t98 != -128LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint32_t x549 = 7308U;
	int32_t x550 = 300664489;
	uint32_t x551 = 25353U;
	volatile int64_t t99 = -54479LL;

	t99 = (x549%((x550*x551)^x552));

	if (t99 != 7308LL) { NG(); } else { ; }
	
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

