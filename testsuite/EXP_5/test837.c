#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = 109U;
static uint64_t x8 = 729LLU;
volatile uint16_t x23 = UINT16_MAX;
int8_t x24 = -4;
int16_t x35 = INT16_MAX;
volatile int32_t t7 = 2989826;
uint16_t x43 = 18740U;
uint16_t x46 = 96U;
volatile int8_t x47 = INT8_MIN;
static uint16_t x50 = 1U;
static int64_t x58 = INT64_MIN;
int16_t x60 = INT16_MIN;
int32_t x63 = INT32_MAX;
volatile int8_t x66 = -1;
int64_t t16 = 4269972504108429035LL;
static uint16_t x81 = 5124U;
uint32_t x86 = 2U;
int64_t x89 = -822694805952LL;
static volatile uint32_t x101 = UINT32_MAX;
volatile int8_t x105 = -10;
static int32_t x109 = -6295729;
volatile int64_t t28 = 249247268490369067LL;
volatile int64_t x122 = -26366896098738LL;
uint32_t x132 = UINT32_MAX;
static int64_t x133 = -1LL;
int64_t x139 = -1LL;
int32_t t34 = -577;
static int64_t x146 = 77851015107175216LL;
uint64_t x157 = 197701LLU;
uint64_t t38 = 902LLU;
static volatile int32_t x178 = 1316;
int32_t x179 = INT32_MIN;
static int16_t x181 = INT16_MIN;
static uint32_t t43 = 46807552U;
int32_t t45 = 2;
volatile int16_t x194 = INT16_MIN;
static uint64_t x201 = 7305320220650999LLU;
static int32_t x207 = INT32_MIN;
int32_t t49 = 18443495;
int8_t x209 = INT8_MIN;
int16_t x211 = INT16_MIN;
int16_t x214 = INT16_MIN;
int64_t x217 = 33219237885481LL;
int32_t x219 = INT32_MIN;
static int64_t t52 = -2865705146434667090LL;
int16_t x221 = INT16_MAX;
uint16_t x223 = UINT16_MAX;
uint8_t x224 = UINT8_MAX;
volatile int64_t x230 = -5771LL;
int16_t x231 = INT16_MIN;
int8_t x233 = INT8_MIN;
int32_t x237 = INT32_MIN;
volatile uint64_t t57 = 4232161385496LLU;
int32_t x242 = -109;
int16_t x250 = INT16_MAX;
int16_t x255 = INT16_MIN;
int64_t t61 = -455LL;
uint8_t x261 = 85U;
int64_t t64 = -208993899LL;
int8_t x271 = INT8_MIN;
int8_t x276 = -1;
uint32_t x277 = 21312U;
volatile int8_t x280 = INT8_MIN;
int64_t t67 = -2236339870894648LL;
uint32_t x288 = 4081U;
uint64_t x290 = UINT64_MAX;
uint16_t x304 = UINT16_MAX;
uint32_t t72 = 613U;
uint64_t x309 = 30460809242LLU;
uint64_t x318 = 80LLU;
static int16_t x322 = INT16_MAX;
static volatile int32_t x332 = -28362006;
volatile int64_t t80 = 136753105406LL;
int8_t x345 = -16;
int64_t x347 = INT64_MIN;
int64_t x349 = INT64_MIN;
int8_t x350 = INT8_MAX;
int64_t x351 = INT64_MAX;
volatile int64_t t82 = -3541377055LL;
static int8_t x353 = INT8_MIN;
int64_t x357 = INT64_MAX;
int16_t x359 = -1;
uint64_t x365 = 1089079724555081LLU;
int16_t x366 = -5;
uint64_t t86 = 494LLU;
int16_t x369 = INT16_MIN;
int32_t x374 = INT32_MAX;
int8_t x376 = 0;
uint32_t x402 = 3620U;
static int8_t x403 = -1;
uint32_t x408 = 8969U;
volatile int32_t x410 = INT32_MIN;
int32_t x412 = -1;
int8_t x417 = 40;
volatile int8_t x420 = INT8_MAX;
uint64_t x421 = UINT64_MAX;
int32_t x424 = INT32_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint32_t x2 = 97510840U;
	static uint8_t x4 = 1U;
	uint32_t t0 = 22939U;

	t0 = (x1%((x2%x3)^x4));

	if (t0 != 68U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 15U;
	uint64_t x6 = UINT64_MAX;
	uint8_t x7 = 1U;
	volatile uint64_t t1 = 19441358781586LLU;

	t1 = (x5%((x6%x7)^x8));

	if (t1 != 15LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	volatile uint8_t x10 = UINT8_MAX;
	static int8_t x11 = -1;
	int8_t x12 = -3;
	int32_t t2 = 3243;

	t2 = (x9%((x10%x11)^x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = UINT64_MAX;
	int64_t x18 = -1LL;
	volatile int32_t x19 = 31184827;
	static volatile int8_t x20 = INT8_MIN;
	static volatile uint64_t t3 = 152134292248591LLU;

	t3 = (x17%((x18%x19)^x20));

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = 43;
	volatile uint8_t x22 = 15U;
	int32_t t4 = -3839;

	t4 = (x21%((x22%x23)^x24));

	if (t4 != 4) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = -1LL;
	uint16_t x26 = 251U;
	static uint32_t x27 = UINT32_MAX;
	int16_t x28 = INT16_MAX;
	static volatile int64_t t5 = 33764634873855378LL;

	t5 = (x25%((x26%x27)^x28));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 121U;
	int32_t x30 = INT32_MIN;
	int8_t x31 = INT8_MAX;
	uint64_t x32 = 463428744964801884LLU;
	uint64_t t6 = 12261993213226308LLU;

	t6 = (x29%((x30%x31)^x32));

	if (t6 != 121LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x33 = INT16_MAX;
	int32_t x34 = 198;
	int32_t x36 = 249556;

	t7 = (x33%((x34%x35)^x36));

	if (t7 != 32767) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MAX;
	uint16_t x38 = 12U;
	static volatile int64_t x39 = -1LL;
	static volatile int8_t x40 = INT8_MIN;
	int64_t t8 = -17625791472830911LL;

	t8 = (x37%((x38%x39)^x40));

	if (t8 != 127LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MAX;
	uint16_t x42 = 14U;
	int8_t x44 = INT8_MAX;
	volatile int32_t t9 = -54801888;

	t9 = (x41%((x42%x43)^x44));

	if (t9 != 7) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = 8337110190278LL;
	volatile int64_t x48 = -26576LL;
	int64_t t10 = -56883154367340LL;

	t10 = (x45%((x46%x47)^x48));

	if (t10 != 18902LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 1200620518U;
	int16_t x51 = -1;
	int32_t x52 = -1;
	uint32_t t11 = 41767U;

	t11 = (x49%((x50%x51)^x52));

	if (t11 != 1200620518U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x53 = 0;
	int64_t x54 = -22726785994150LL;
	int64_t x55 = INT64_MAX;
	int64_t x56 = -1LL;
	volatile int64_t t12 = 348177518048898LL;

	t12 = (x53%((x54%x55)^x56));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = 0;
	int16_t x59 = INT16_MAX;
	int64_t t13 = 215818282206740LL;

	t13 = (x57%((x58%x59)^x60));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MAX;
	int64_t x62 = INT64_MIN;
	int8_t x64 = 20;
	static int64_t t14 = 1439458999589LL;

	t14 = (x61%((x62%x63)^x64));

	if (t14 != 9LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = 6951U;
	int32_t x67 = 32;
	int64_t x68 = -802891362437LL;
	volatile int64_t t15 = -1411035481261691947LL;

	t15 = (x65%((x66%x67)^x68));

	if (t15 != 6951LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MAX;
	volatile int16_t x70 = 3;
	static uint8_t x71 = UINT8_MAX;
	uint16_t x72 = 1U;

	t16 = (x69%((x70%x71)^x72));

	if (t16 != 1LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x73 = 1LLU;
	uint16_t x74 = UINT16_MAX;
	static int64_t x75 = -1LL;
	int32_t x76 = INT32_MIN;
	volatile uint64_t t17 = 81220881904749622LLU;

	t17 = (x73%((x74%x75)^x76));

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MIN;
	int8_t x78 = -1;
	volatile uint32_t x79 = 32292U;
	int64_t x80 = -1LL;
	static int64_t t18 = 42LL;

	t18 = (x77%((x78%x79)^x80));

	if (t18 != -848LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x82 = INT64_MIN;
	int64_t x83 = 5818LL;
	int16_t x84 = -28;
	int64_t t19 = -327925194LL;

	t19 = (x81%((x82%x83)^x84));

	if (t19 != 204LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x85 = 811627;
	volatile int32_t x87 = INT32_MIN;
	static volatile int16_t x88 = -1;
	uint32_t t20 = 22628430U;

	t20 = (x85%((x86%x87)^x88));

	if (t20 != 811627U) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x90 = -1;
	static uint64_t x91 = 363184LLU;
	static int16_t x92 = -1;
	uint64_t t21 = 1400LLU;

	t21 = (x89%((x90%x91)^x92));

	if (t21 != 18446743251014745664LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x93 = -100;
	static uint32_t x94 = UINT32_MAX;
	static volatile int64_t x95 = -3551LL;
	volatile uint64_t x96 = UINT64_MAX;
	volatile uint64_t t22 = 11890236LLU;

	t22 = (x93%((x94%x95)^x96));

	if (t22 != 737LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = INT32_MIN;
	int8_t x98 = INT8_MIN;
	int8_t x99 = INT8_MIN;
	volatile int32_t x100 = INT32_MIN;
	static int32_t t23 = 0;

	t23 = (x97%((x98%x99)^x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x102 = -1;
	int64_t x103 = 2750LL;
	uint64_t x104 = 93359LLU;
	volatile uint64_t t24 = 115399338050921559LLU;

	t24 = (x101%((x102%x103)^x104));

	if (t24 != 4294967295LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x106 = 4564LLU;
	int16_t x107 = INT16_MIN;
	int64_t x108 = INT64_MIN;
	volatile uint64_t t25 = 7966LLU;

	t25 = (x105%((x106%x107)^x108));

	if (t25 != 9223372036854771234LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x110 = 4483;
	uint64_t x111 = 1586452LLU;
	int64_t x112 = INT64_MAX;
	static uint64_t t26 = 164741202448832LLU;

	t26 = (x109%((x110%x111)^x112));

	if (t26 != 9223372036848484563LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x113 = 7413U;
	static volatile int16_t x114 = -6530;
	uint64_t x115 = 116248358690312LLU;
	static int8_t x116 = -27;
	uint64_t t27 = 185965600830645214LLU;

	t27 = (x113%((x114%x115)^x116));

	if (t27 != 7413LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x117 = INT64_MIN;
	volatile uint16_t x118 = UINT16_MAX;
	volatile uint32_t x119 = UINT32_MAX;
	uint8_t x120 = UINT8_MAX;

	t28 = (x117%((x118%x119)^x120));

	if (t28 != -32768LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x121 = UINT32_MAX;
	static int8_t x123 = -19;
	static uint32_t x124 = 10731301U;
	volatile int64_t t29 = 1731LL;

	t29 = (x121%((x122%x123)^x124));

	if (t29 != 2444095LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = 9U;
	int64_t x126 = INT64_MIN;
	volatile int32_t x127 = -1;
	int16_t x128 = INT16_MIN;
	volatile int64_t t30 = -435136318963002228LL;

	t30 = (x125%((x126%x127)^x128));

	if (t30 != 9LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = 19U;
	int16_t x130 = INT16_MAX;
	volatile int8_t x131 = -1;
	volatile uint32_t t31 = 9U;

	t31 = (x129%((x130%x131)^x132));

	if (t31 != 19U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x134 = UINT8_MAX;
	static int32_t x135 = -1;
	uint16_t x136 = UINT16_MAX;
	volatile int64_t t32 = -346813LL;

	t32 = (x133%((x134%x135)^x136));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = -1;
	static uint8_t x138 = UINT8_MAX;
	uint16_t x140 = 7621U;
	volatile int64_t t33 = -5636121LL;

	t33 = (x137%((x138%x139)^x140));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x141 = UINT8_MAX;
	int8_t x142 = -1;
	volatile int8_t x143 = INT8_MIN;
	int8_t x144 = INT8_MIN;

	t34 = (x141%((x142%x143)^x144));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = 11U;
	uint64_t x147 = UINT64_MAX;
	int16_t x148 = -1;
	volatile uint64_t t35 = 12223271LLU;

	t35 = (x145%((x146%x147)^x148));

	if (t35 != 11LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x149 = INT8_MIN;
	int8_t x150 = INT8_MIN;
	int32_t x151 = INT32_MIN;
	int16_t x152 = 3;
	static volatile int32_t t36 = -1031;

	t36 = (x149%((x150%x151)^x152));

	if (t36 != -3) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x153 = INT64_MAX;
	int8_t x154 = INT8_MAX;
	volatile int64_t x155 = 2969730104711927050LL;
	volatile uint8_t x156 = 0U;
	static volatile int64_t t37 = 69291470107331LL;

	t37 = (x153%((x154%x155)^x156));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x158 = 1;
	volatile int32_t x159 = 2368;
	int8_t x160 = -26;

	t38 = (x157%((x158%x159)^x160));

	if (t38 != 197701LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x165 = 79U;
	int32_t x166 = 0;
	int64_t x167 = INT64_MIN;
	volatile uint64_t x168 = UINT64_MAX;
	volatile uint64_t t39 = 4007400091782699LLU;

	t39 = (x165%((x166%x167)^x168));

	if (t39 != 79LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = INT16_MIN;
	volatile int64_t x170 = 2554LL;
	static int64_t x171 = INT64_MIN;
	static int32_t x172 = INT32_MIN;
	int64_t t40 = 2LL;

	t40 = (x169%((x170%x171)^x172));

	if (t40 != -32768LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x173 = UINT64_MAX;
	int64_t x174 = INT64_MAX;
	volatile int16_t x175 = -1;
	static volatile uint16_t x176 = 9U;
	uint64_t t41 = 1070053543148169601LLU;

	t41 = (x173%((x174%x175)^x176));

	if (t41 != 6LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x177 = 62U;
	volatile uint8_t x180 = 5U;
	static volatile int32_t t42 = -513177;

	t42 = (x177%((x178%x179)^x180));

	if (t42 != 62) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x182 = UINT32_MAX;
	int32_t x183 = INT32_MAX;
	uint16_t x184 = 10273U;

	t43 = (x181%((x182%x183)^x184));

	if (t43 != 5888U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = INT32_MIN;
	volatile int32_t x186 = -1;
	uint16_t x187 = 124U;
	int64_t x188 = -12933275566LL;
	static volatile int64_t t44 = -399462532558551470LL;

	t44 = (x185%((x186%x187)^x188));

	if (t44 != -2147483648LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x189 = 21;
	int32_t x190 = INT32_MAX;
	int32_t x191 = -1;
	static uint8_t x192 = UINT8_MAX;

	t45 = (x189%((x190%x191)^x192));

	if (t45 != 21) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x193 = -1;
	uint32_t x195 = 245U;
	volatile int64_t x196 = INT64_MIN;
	static int64_t t46 = 5920LL;

	t46 = (x193%((x194%x195)^x196));

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x197 = INT32_MIN;
	uint8_t x198 = 10U;
	static volatile uint32_t x199 = UINT32_MAX;
	int32_t x200 = -1829;
	volatile uint32_t t47 = 689U;

	t47 = (x197%((x198%x199)^x200));

	if (t47 != 2147483648U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x202 = INT8_MIN;
	uint32_t x203 = 47U;
	int32_t x204 = -1;
	static uint64_t t48 = 0LLU;

	t48 = (x201%((x202%x203)^x204));

	if (t48 != 1772258125LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x205 = UINT16_MAX;
	int32_t x206 = INT32_MAX;
	int8_t x208 = INT8_MIN;

	t49 = (x205%((x206%x207)^x208));

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x210 = -1;
	static int8_t x212 = INT8_MAX;
	volatile int32_t t50 = 2532;

	t50 = (x209%((x210%x211)^x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = INT8_MIN;
	volatile int16_t x215 = -128;
	int8_t x216 = -1;
	int32_t t51 = 0;

	t51 = (x213%((x214%x215)^x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x218 = UINT16_MAX;
	volatile uint16_t x220 = 661U;

	t52 = (x217%((x218%x219)^x220));

	if (t52 != 38533LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x222 = INT64_MAX;
	int64_t t53 = -697401574LL;

	t53 = (x221%((x222%x223)^x224));

	if (t53 != 255LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x225 = INT64_MAX;
	int64_t x226 = -57LL;
	int32_t x227 = INT32_MIN;
	int32_t x228 = INT32_MIN;
	int64_t t54 = 62289845453928785LL;

	t54 = (x225%((x226%x227)^x228));

	if (t54 != 6497LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = INT16_MIN;
	int16_t x232 = INT16_MAX;
	volatile int64_t t55 = -2081691LL;

	t55 = (x229%((x230%x231)^x232));

	if (t55 != -5770LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x234 = UINT64_MAX;
	int32_t x235 = -35474;
	uint8_t x236 = 11U;
	static uint64_t t56 = 2125734248685329LLU;

	t56 = (x233%((x234%x235)^x236));

	if (t56 != 9620LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint64_t x238 = UINT64_MAX;
	volatile uint64_t x239 = 2045582063833521257LLU;
	int8_t x240 = INT8_MAX;

	t57 = (x237%((x238%x239)^x240));

	if (t57 != 11466971592630103LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x241 = INT32_MIN;
	uint64_t x243 = 487363794LLU;
	static uint32_t x244 = 18252445U;
	volatile uint64_t t58 = 67470354923826668LLU;

	t58 = (x241%((x242%x243)^x244));

	if (t58 != 171123440LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x245 = INT16_MAX;
	static int32_t x246 = INT32_MIN;
	int16_t x247 = INT16_MAX;
	volatile int64_t x248 = -1LL;
	volatile int64_t t59 = 6746963LL;

	t59 = (x245%((x246%x247)^x248));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x249 = INT64_MIN;
	uint8_t x251 = 12U;
	int32_t x252 = -1;
	int64_t t60 = -1851115LL;

	t60 = (x249%((x250%x251)^x252));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x253 = 6U;
	int16_t x254 = INT16_MAX;
	int64_t x256 = INT64_MAX;

	t61 = (x253%((x254%x255)^x256));

	if (t61 != 6LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint32_t x257 = UINT32_MAX;
	volatile uint64_t x258 = UINT64_MAX;
	uint32_t x259 = 825U;
	volatile int32_t x260 = INT32_MAX;
	uint64_t t62 = 1724410860513593LLU;

	t62 = (x257%((x258%x259)^x260));

	if (t62 != 31LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x262 = INT32_MIN;
	int8_t x263 = INT8_MAX;
	volatile int8_t x264 = INT8_MIN;
	static volatile int32_t t63 = 8012988;

	t63 = (x261%((x262%x263)^x264));

	if (t63 != 85) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x265 = 6U;
	uint8_t x266 = 12U;
	int64_t x267 = -1LL;
	volatile int32_t x268 = INT32_MAX;

	t64 = (x265%((x266%x267)^x268));

	if (t64 != 6LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x269 = 636229324U;
	int16_t x270 = INT16_MIN;
	volatile int64_t x272 = INT64_MIN;
	volatile int64_t t65 = -2022415440LL;

	t65 = (x269%((x270%x271)^x272));

	if (t65 != 636229324LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x273 = INT64_MIN;
	static int8_t x274 = 0;
	uint8_t x275 = UINT8_MAX;
	volatile int64_t t66 = -60668510596770LL;

	t66 = (x273%((x274%x275)^x276));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x278 = INT64_MIN;
	uint16_t x279 = 19U;

	t67 = (x277%((x278%x279)^x280));

	if (t67 != 82LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x285 = INT16_MIN;
	int8_t x286 = -17;
	uint8_t x287 = UINT8_MAX;
	volatile uint32_t t68 = 94223U;

	t68 = (x285%((x286%x287)^x288));

	if (t68 != 4294934528U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x289 = -4;
	uint8_t x291 = 4U;
	int16_t x292 = INT16_MIN;
	volatile uint64_t t69 = 4296075925432815224LLU;

	t69 = (x289%((x290%x291)^x292));

	if (t69 != 32761LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x293 = INT32_MIN;
	static int8_t x294 = INT8_MIN;
	static int64_t x295 = -1LL;
	static int32_t x296 = -221428265;
	int64_t t70 = -3LL;

	t70 = (x293%((x294%x295)^x296));

	if (t70 != -154629263LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = 0;
	uint32_t x298 = UINT32_MAX;
	static volatile uint16_t x299 = 9U;
	int64_t x300 = -1LL;
	int64_t t71 = -13754887389481LL;

	t71 = (x297%((x298%x299)^x300));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x301 = -1;
	int32_t x302 = INT32_MIN;
	volatile uint32_t x303 = 48U;

	t72 = (x301%((x302%x303)^x304));

	if (t72 != 1088U) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x305 = -1LL;
	static uint32_t x306 = UINT32_MAX;
	static int16_t x307 = INT16_MAX;
	int64_t x308 = INT64_MIN;
	int64_t t73 = -29878LL;

	t73 = (x305%((x306%x307)^x308));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x310 = -83;
	static uint32_t x311 = 2397U;
	int64_t x312 = INT64_MAX;
	uint64_t t74 = 2297275LLU;

	t74 = (x309%((x310%x311)^x312));

	if (t74 != 30460809242LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x313 = UINT16_MAX;
	uint16_t x314 = 24U;
	int64_t x315 = 456473096LL;
	volatile int8_t x316 = -40;
	int64_t t75 = 1189148149348LL;

	t75 = (x313%((x314%x315)^x316));

	if (t75 != 63LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x317 = INT32_MIN;
	uint16_t x319 = 47U;
	volatile uint32_t x320 = 6U;
	volatile uint64_t t76 = 11331573970LLU;

	t76 = (x317%((x318%x319)^x320));

	if (t76 != 5LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x321 = -1;
	int8_t x323 = -1;
	int16_t x324 = INT16_MAX;
	volatile int32_t t77 = -1;

	t77 = (x321%((x322%x323)^x324));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x325 = 3LLU;
	int16_t x326 = INT16_MIN;
	volatile int8_t x327 = -7;
	uint16_t x328 = 50U;
	uint64_t t78 = 26562596434LLU;

	t78 = (x325%((x326%x327)^x328));

	if (t78 != 3LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x329 = INT16_MIN;
	int64_t x330 = INT64_MIN;
	volatile uint16_t x331 = UINT16_MAX;
	int64_t t79 = 3LL;

	t79 = (x329%((x330%x331)^x332));

	if (t79 != -32768LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x333 = -1;
	static int64_t x334 = INT64_MIN;
	int32_t x335 = INT32_MIN;
	static uint16_t x336 = UINT16_MAX;

	t80 = (x333%((x334%x335)^x336));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x346 = 6U;
	volatile int64_t x348 = INT64_MAX;
	volatile int64_t t81 = -5396324LL;

	t81 = (x345%((x346%x347)^x348));

	if (t81 != -16LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x352 = -1LL;

	t82 = (x349%((x350%x351)^x352));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x354 = 43U;
	static int64_t x355 = INT64_MIN;
	static int32_t x356 = INT32_MIN;
	int64_t t83 = 7821199715423LL;

	t83 = (x353%((x354%x355)^x356));

	if (t83 != -128LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x358 = INT32_MIN;
	int16_t x360 = INT16_MIN;
	static int64_t t84 = 133649820176251LL;

	t84 = (x357%((x358%x359)^x360));

	if (t84 != 32767LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x361 = INT32_MIN;
	static int32_t x362 = -23519961;
	volatile int64_t x363 = -832570452LL;
	uint32_t x364 = 232036248U;
	volatile int64_t t85 = 1320LL;

	t85 = (x361%((x362%x363)^x364));

	if (t85 != -17263478LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x367 = INT8_MIN;
	uint64_t x368 = 3026028265LLU;

	t86 = (x365%((x366%x367)^x368));

	if (t86 != 1089079724555081LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x370 = INT32_MIN;
	static int16_t x371 = INT16_MIN;
	int64_t x372 = INT64_MIN;
	int64_t t87 = -101143705LL;

	t87 = (x369%((x370%x371)^x372));

	if (t87 != -32768LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x373 = INT16_MIN;
	int16_t x375 = INT16_MIN;
	static volatile int32_t t88 = -1;

	t88 = (x373%((x374%x375)^x376));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x377 = INT16_MIN;
	static int32_t x378 = INT32_MIN;
	int16_t x379 = INT16_MIN;
	static int16_t x380 = -9;
	volatile int32_t t89 = 1347176;

	t89 = (x377%((x378%x379)^x380));

	if (t89 != -8) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x381 = INT64_MIN;
	volatile int32_t x382 = INT32_MIN;
	int16_t x383 = INT16_MIN;
	int8_t x384 = INT8_MAX;
	int64_t t90 = 126302107148081LL;

	t90 = (x381%((x382%x383)^x384));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x385 = 128;
	volatile int64_t x386 = 778991560800LL;
	int32_t x387 = -1;
	int8_t x388 = -1;
	int64_t t91 = -648262931562501689LL;

	t91 = (x385%((x386%x387)^x388));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint64_t x389 = 15274212441LLU;
	static uint8_t x390 = 0U;
	static uint32_t x391 = UINT32_MAX;
	volatile int64_t x392 = -1LL;
	uint64_t t92 = 43965673331944700LLU;

	t92 = (x389%((x390%x391)^x392));

	if (t92 != 15274212441LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x393 = INT64_MAX;
	static int16_t x394 = INT16_MIN;
	int32_t x395 = INT32_MIN;
	static int16_t x396 = -1;
	volatile int64_t t93 = 1951092519626856863LL;

	t93 = (x393%((x394%x395)^x396));

	if (t93 != 7LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x401 = 85808895561LLU;
	static uint8_t x404 = 115U;
	static uint64_t t94 = 2392111099037015310LLU;

	t94 = (x401%((x402%x403)^x404));

	if (t94 != 1090LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x405 = INT64_MAX;
	uint16_t x406 = UINT16_MAX;
	uint64_t x407 = 3889794649242440445LLU;
	volatile uint64_t t95 = 20312451LLU;

	t95 = (x405%((x406%x407)^x408));

	if (t95 != 44325LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x409 = 307750075U;
	volatile uint8_t x411 = UINT8_MAX;
	static uint32_t t96 = 6824306U;

	t96 = (x409%((x410%x411)^x412));

	if (t96 != 119U) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x413 = INT64_MIN;
	static volatile int32_t x414 = INT32_MIN;
	int16_t x415 = -233;
	int8_t x416 = -1;
	volatile int64_t t97 = -652539709201LL;

	t97 = (x413%((x414%x415)^x416));

	if (t97 != -2LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x418 = -1;
	int64_t x419 = INT64_MAX;
	int64_t t98 = 6072LL;

	t98 = (x417%((x418%x419)^x420));

	if (t98 != 40LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x422 = 11916;
	volatile uint32_t x423 = UINT32_MAX;
	uint64_t t99 = 21425296LLU;

	t99 = (x421%((x422%x423)^x424));

	if (t99 != 568059555LLU) { NG(); } else { ; }
	
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

