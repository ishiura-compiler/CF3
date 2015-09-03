#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 32310U;
int64_t x10 = INT64_MIN;
int32_t x12 = -8766;
int32_t x13 = -24843;
static int16_t x14 = INT16_MIN;
int64_t x16 = 347947663549025537LL;
static int64_t t4 = 73048LL;
volatile int8_t x26 = -1;
int64_t x27 = -1LL;
int16_t x37 = -6;
static int16_t x38 = INT16_MIN;
volatile int64_t t9 = 898LL;
static int32_t x47 = -20623;
volatile int16_t x50 = -1;
static uint16_t x68 = UINT16_MAX;
volatile uint64_t x69 = 15399954310623LLU;
volatile int16_t x71 = 1398;
static int64_t t15 = 24565838715221448LL;
uint32_t x77 = 202675U;
int8_t x79 = -1;
static int16_t x91 = -520;
int16_t x94 = 1;
volatile int8_t x96 = 20;
volatile uint8_t x133 = UINT8_MAX;
uint8_t x134 = 59U;
volatile int32_t x140 = INT32_MIN;
int16_t x160 = INT16_MAX;
uint64_t t32 = 16057770980020016LLU;
static uint8_t x172 = UINT8_MAX;
uint64_t x182 = 3673346185570LLU;
uint64_t x200 = UINT64_MAX;
uint64_t t36 = 4401037LLU;
uint32_t t37 = 11528U;
volatile int8_t x207 = -27;
static int32_t x211 = -1;
volatile int64_t x218 = INT64_MIN;
int16_t x219 = 1;
int8_t x227 = 5;
volatile uint32_t x233 = UINT32_MAX;
int32_t t45 = -13698309;
volatile uint64_t x244 = UINT64_MAX;
int64_t x247 = -49743406799756LL;
int32_t x250 = INT32_MIN;
static volatile int16_t x252 = -1530;
int64_t t48 = 62305907LL;
static volatile int32_t t49 = 692;
int16_t x259 = -1;
uint64_t x261 = 972081740884190719LLU;
volatile uint64_t t51 = 127LLU;
volatile int32_t x272 = INT32_MIN;
uint64_t t52 = 24490489054826148LLU;
static uint32_t x278 = 4957544U;
static volatile uint8_t x280 = 2U;
static int16_t x285 = 135;
int64_t t56 = 1LL;
uint32_t x291 = 41764U;
int16_t x295 = 1301;
int8_t x303 = 1;
int8_t x304 = -1;
volatile int64_t x309 = INT64_MIN;
static volatile int64_t t62 = 27LL;
volatile int16_t x322 = 5;
int8_t x330 = -1;
uint32_t x331 = 1112U;
uint8_t x335 = 30U;
static int64_t x337 = INT64_MIN;
uint16_t x357 = 196U;
int32_t x366 = 0;
volatile uint16_t x367 = UINT16_MAX;
int32_t x369 = -27;
int8_t x370 = INT8_MAX;
volatile int64_t t77 = -900517582054623610LL;
int64_t x392 = INT64_MIN;
int64_t x396 = -1LL;
int16_t x402 = INT16_MIN;
static int8_t x403 = 0;
volatile uint8_t x404 = UINT8_MAX;
uint16_t x405 = UINT16_MAX;
static int8_t x410 = -1;
uint8_t x412 = 5U;
uint64_t t84 = 9245114LLU;
uint8_t x413 = UINT8_MAX;
int8_t x415 = -1;
uint8_t x416 = 7U;
volatile int64_t x419 = 203262082509556754LL;
static int16_t x420 = 485;
static uint16_t x424 = UINT16_MAX;
int32_t x435 = -1;
int32_t x446 = INT32_MAX;
int64_t t92 = -133347974648627699LL;
uint16_t x450 = UINT16_MAX;
int8_t x451 = INT8_MIN;
int32_t x456 = -141245731;
int16_t x459 = -149;
uint16_t x460 = UINT16_MAX;
int32_t t96 = 325047516;
int8_t x465 = INT8_MIN;
static uint32_t x468 = UINT32_MAX;
int64_t x473 = INT64_MIN;
static int64_t t98 = -1LL;
volatile uint16_t x480 = 80U;
volatile int64_t t99 = 1086017651LL;


void f0(void) {
	volatile int32_t x1 = -10438500;
	static int8_t x3 = INT8_MAX;
	int8_t x4 = INT8_MIN;
	int32_t t0 = 198;

	t0 = ((x1%(x2+x3))/x4);

	if (t0 != 204) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 7LLU;
	volatile int32_t x6 = -699665666;
	uint8_t x7 = 35U;
	uint16_t x8 = 2640U;
	volatile uint64_t t1 = 56422984371154LLU;

	t1 = ((x5%(x6+x7))/x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	uint8_t x11 = UINT8_MAX;
	int64_t t2 = 15462092709693LL;

	t2 = ((x9%(x10+x11))/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x15 = 473271U;
	volatile int64_t t3 = -21217413453107179LL;

	t3 = ((x13%(x14+x15))/x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x21 = -1;
	int32_t x22 = 44144;
	volatile int64_t x23 = -5620LL;
	int8_t x24 = -19;

	t4 = ((x21%(x22+x23))/x24);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -1;
	int64_t x28 = 2731554453070574LL;
	volatile int64_t t5 = -3LL;

	t5 = ((x25%(x26+x27))/x28);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x29 = 1LL;
	int64_t x30 = INT64_MIN;
	uint16_t x31 = 5U;
	static volatile uint32_t x32 = 46769253U;
	int64_t t6 = 584126148645861056LL;

	t6 = ((x29%(x30+x31))/x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = 9263440727707LL;
	static int16_t x34 = INT16_MIN;
	int16_t x35 = INT16_MIN;
	uint16_t x36 = UINT16_MAX;
	volatile int64_t t7 = -2294LL;

	t7 = ((x33%(x34+x35))/x36);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x39 = 87U;
	volatile uint64_t x40 = 14763157LLU;
	static volatile uint64_t t8 = 19257LLU;

	t8 = ((x37%(x38+x39))/x40);

	if (t8 != 1249512152022LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MAX;
	int8_t x42 = INT8_MAX;
	int8_t x43 = INT8_MIN;
	volatile uint8_t x44 = 6U;

	t9 = ((x41%(x42+x43))/x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = INT8_MIN;
	uint32_t x46 = 7770262U;
	int8_t x48 = 49;
	static volatile uint32_t t10 = 8U;

	t10 = ((x45%(x46+x47))/x48);

	if (t10 != 34023U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = -42892571;
	uint16_t x51 = UINT16_MAX;
	volatile uint64_t x52 = 523314461LLU;
	volatile uint64_t t11 = 6008LLU;

	t11 = ((x49%(x50+x51))/x52);

	if (t11 != 35249826726LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x57 = INT32_MIN;
	int64_t x58 = -11243723LL;
	static int32_t x59 = INT32_MAX;
	static int16_t x60 = -22;
	volatile int64_t t12 = -128261LL;

	t12 = ((x57%(x58+x59))/x60);

	if (t12 != 511078LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x65 = -1LL;
	volatile int64_t x66 = 16305097546726004LL;
	static uint8_t x67 = UINT8_MAX;
	int64_t t13 = 1163126268315LL;

	t13 = ((x65%(x66+x67))/x68);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x70 = INT8_MIN;
	uint64_t x72 = 83283085320874LLU;
	volatile uint64_t t14 = 2197890956522988LLU;

	t14 = ((x69%(x70+x71))/x72);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x73 = INT16_MIN;
	int32_t x74 = INT32_MAX;
	int64_t x75 = INT64_MIN;
	static int64_t x76 = INT64_MIN;

	t15 = ((x73%(x74+x75))/x76);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x78 = -1LL;
	int64_t x80 = INT64_MAX;
	volatile int64_t t16 = 2652246626LL;

	t16 = ((x77%(x78+x79))/x80);

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x81 = UINT16_MAX;
	uint8_t x82 = UINT8_MAX;
	uint16_t x83 = 15U;
	volatile int16_t x84 = -1;
	volatile int32_t t17 = -2594103;

	t17 = ((x81%(x82+x83))/x84);

	if (t17 != -195) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x85 = -1;
	uint8_t x86 = 4U;
	int16_t x87 = -1;
	int16_t x88 = INT16_MAX;
	volatile int32_t t18 = -14;

	t18 = ((x85%(x86+x87))/x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x89 = UINT64_MAX;
	uint16_t x90 = 1560U;
	int32_t x92 = -304428;
	uint64_t t19 = 468984LLU;

	t19 = ((x89%(x90+x91))/x92);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = -1;
	int8_t x95 = 0;
	int32_t t20 = -8220622;

	t20 = ((x93%(x94+x95))/x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = 1;
	uint64_t x98 = UINT64_MAX;
	int8_t x99 = -54;
	uint16_t x100 = UINT16_MAX;
	volatile uint64_t t21 = 1LLU;

	t21 = ((x97%(x98+x99))/x100);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x117 = UINT64_MAX;
	int16_t x118 = INT16_MAX;
	volatile int64_t x119 = -123312816LL;
	uint32_t x120 = 82665500U;
	static uint64_t t22 = 8389171554LLU;

	t22 = ((x117%(x118+x119))/x120);

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x121 = -1942731210367LL;
	static int32_t x122 = 674937;
	int16_t x123 = INT16_MIN;
	volatile uint64_t x124 = UINT64_MAX;
	static uint64_t t23 = 195LLU;

	t23 = ((x121%(x122+x123))/x124);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x125 = 3996307U;
	volatile uint32_t x126 = 10884U;
	int64_t x127 = -156589539LL;
	int32_t x128 = INT32_MIN;
	int64_t t24 = -10505757776LL;

	t24 = ((x125%(x126+x127))/x128);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x135 = INT16_MIN;
	uint64_t x136 = UINT64_MAX;
	uint64_t t25 = 28903LLU;

	t25 = ((x133%(x134+x135))/x136);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x137 = INT16_MIN;
	int8_t x138 = 0;
	int8_t x139 = INT8_MIN;
	static int32_t t26 = -9904;

	t26 = ((x137%(x138+x139))/x140);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x141 = UINT16_MAX;
	int64_t x142 = 4479812441896034283LL;
	uint64_t x143 = 18549752845LLU;
	int32_t x144 = INT32_MIN;
	uint64_t t27 = 19094175702212LLU;

	t27 = ((x141%(x142+x143))/x144);

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x145 = UINT64_MAX;
	uint16_t x146 = 4U;
	int64_t x147 = -16592590957230095LL;
	int64_t x148 = 88341998024385295LL;
	static uint64_t t28 = 8075999358LLU;

	t28 = ((x145%(x146+x147))/x148);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x153 = -1;
	int32_t x154 = -1;
	volatile uint64_t x155 = 152216643860LLU;
	static volatile int16_t x156 = 1;
	volatile uint64_t t29 = 102966192480LLU;

	t29 = ((x153%(x154+x155))/x156);

	if (t29 != 48995415386LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x157 = INT32_MIN;
	static uint8_t x158 = 43U;
	int32_t x159 = -48;
	int32_t t30 = 27833;

	t30 = ((x157%(x158+x159))/x160);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x161 = 248U;
	int8_t x162 = -1;
	uint64_t x163 = 4020067775LLU;
	int16_t x164 = 1711;
	volatile uint64_t t31 = 1051344LLU;

	t31 = ((x161%(x162+x163))/x164);

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x165 = 1327336344LLU;
	volatile int16_t x166 = -1;
	volatile int8_t x167 = INT8_MIN;
	int8_t x168 = INT8_MIN;

	t32 = ((x165%(x166+x167))/x168);

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x169 = INT8_MIN;
	int8_t x170 = 14;
	volatile int8_t x171 = INT8_MIN;
	volatile int32_t t33 = -548269;

	t33 = ((x169%(x170+x171))/x172);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x177 = -1;
	static int8_t x178 = 31;
	int8_t x179 = INT8_MIN;
	static uint8_t x180 = 94U;
	volatile int32_t t34 = 9049878;

	t34 = ((x177%(x178+x179))/x180);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x181 = -2;
	int8_t x183 = -1;
	int16_t x184 = INT16_MIN;
	static volatile uint64_t t35 = 26678368450LLU;

	t35 = ((x181%(x182+x183))/x184);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x197 = INT8_MAX;
	volatile int64_t x198 = -1LL;
	int16_t x199 = INT16_MIN;

	t36 = ((x197%(x198+x199))/x200);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x201 = 54U;
	uint32_t x202 = UINT32_MAX;
	int32_t x203 = -17;
	int16_t x204 = -7;

	t37 = ((x201%(x202+x203))/x204);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x205 = 5907217473505573LLU;
	volatile int16_t x206 = -1;
	uint64_t x208 = 1379LLU;
	volatile uint64_t t38 = 8888447948223014LLU;

	t38 = ((x205%(x206+x207))/x208);

	if (t38 != 4283696500004LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x209 = -989538664998040770LL;
	int64_t x210 = -1LL;
	int64_t x212 = INT64_MIN;
	int64_t t39 = -16273932948237LL;

	t39 = ((x209%(x210+x211))/x212);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x217 = INT16_MIN;
	volatile int32_t x220 = -46344;
	volatile int64_t t40 = 12621931614LL;

	t40 = ((x217%(x218+x219))/x220);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x221 = 897439;
	int8_t x222 = INT8_MAX;
	static int8_t x223 = INT8_MAX;
	int16_t x224 = -858;
	static volatile int32_t t41 = -1;

	t41 = ((x221%(x222+x223))/x224);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x225 = INT16_MIN;
	int16_t x226 = -1;
	static int64_t x228 = INT64_MIN;
	static int64_t t42 = 4347539999367991LL;

	t42 = ((x225%(x226+x227))/x228);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x229 = 4U;
	int32_t x230 = INT32_MIN;
	static uint32_t x231 = UINT32_MAX;
	static int16_t x232 = -161;
	uint32_t t43 = 0U;

	t43 = ((x229%(x230+x231))/x232);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x234 = 77U;
	int8_t x235 = INT8_MIN;
	int16_t x236 = -1;
	volatile uint32_t t44 = 41469U;

	t44 = ((x233%(x234+x235))/x236);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x237 = INT8_MAX;
	static uint8_t x238 = UINT8_MAX;
	uint16_t x239 = 4U;
	int8_t x240 = INT8_MAX;

	t45 = ((x237%(x238+x239))/x240);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x241 = 73634LLU;
	volatile uint32_t x242 = 1U;
	int32_t x243 = INT32_MAX;
	volatile uint64_t t46 = 4376LLU;

	t46 = ((x241%(x242+x243))/x244);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x245 = 25485474LL;
	static int16_t x246 = 166;
	uint16_t x248 = 2033U;
	volatile int64_t t47 = -61747092140978LL;

	t47 = ((x245%(x246+x247))/x248);

	if (t47 != 12535LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x249 = INT16_MIN;
	int64_t x251 = -1LL;

	t48 = ((x249%(x250+x251))/x252);

	if (t48 != 21LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x253 = INT32_MIN;
	volatile uint16_t x254 = 0U;
	int32_t x255 = INT32_MAX;
	uint8_t x256 = 76U;

	t49 = ((x253%(x254+x255))/x256);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x257 = UINT16_MAX;
	volatile int64_t x258 = 92230144192923LL;
	int64_t x260 = INT64_MIN;
	volatile int64_t t50 = 15629250909120469LL;

	t50 = ((x257%(x258+x259))/x260);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x262 = UINT16_MAX;
	int32_t x263 = -1;
	int8_t x264 = 3;

	t51 = ((x261%(x262+x263))/x264);

	if (t51 != 237LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x269 = UINT16_MAX;
	uint64_t x270 = 219557609LLU;
	int8_t x271 = INT8_MIN;

	t52 = ((x269%(x270+x271))/x272);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x273 = UINT64_MAX;
	static uint32_t x274 = 892244U;
	int32_t x275 = INT32_MIN;
	int32_t x276 = 24685398;
	uint64_t t53 = 359898432057583LLU;

	t53 = ((x273%(x274+x275))/x276);

	if (t53 != 20LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x277 = INT64_MIN;
	static int32_t x279 = INT32_MIN;
	static volatile int64_t t54 = 28471661749LL;

	t54 = ((x277%(x278+x279))/x280);

	if (t54 != -668981680LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x281 = -1;
	int32_t x282 = -1;
	uint32_t x283 = UINT32_MAX;
	int16_t x284 = -2;
	volatile uint32_t t55 = 14875470U;

	t55 = ((x281%(x282+x283))/x284);

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x286 = -353LL;
	uint8_t x287 = 70U;
	int16_t x288 = -1;

	t56 = ((x285%(x286+x287))/x288);

	if (t56 != -135LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x289 = 172126898541528248LLU;
	uint8_t x290 = 53U;
	int16_t x292 = INT16_MIN;
	volatile uint64_t t57 = 1579377LLU;

	t57 = ((x289%(x290+x291))/x292);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x293 = -7LL;
	int32_t x294 = INT32_MIN;
	int32_t x296 = INT32_MIN;
	static int64_t t58 = 68LL;

	t58 = ((x293%(x294+x295))/x296);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x301 = INT32_MIN;
	int32_t x302 = INT32_MIN;
	volatile int32_t t59 = 211496228;

	t59 = ((x301%(x302+x303))/x304);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x305 = 19339LLU;
	static uint8_t x306 = 5U;
	volatile uint16_t x307 = 242U;
	volatile int8_t x308 = -15;
	uint64_t t60 = 41150LLU;

	t60 = ((x305%(x306+x307))/x308);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x310 = 559LLU;
	static volatile uint64_t x311 = 6431764980880599597LLU;
	volatile int32_t x312 = 2405577;
	volatile uint64_t t61 = 1891LLU;

	t61 = ((x309%(x310+x311))/x312);

	if (t61 != 1160472957620LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x313 = INT8_MIN;
	uint16_t x314 = UINT16_MAX;
	int64_t x315 = INT64_MIN;
	static int32_t x316 = INT32_MIN;

	t62 = ((x313%(x314+x315))/x316);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x317 = UINT16_MAX;
	static int8_t x318 = -3;
	static int8_t x319 = INT8_MIN;
	int64_t x320 = INT64_MIN;
	int64_t t63 = -6LL;

	t63 = ((x317%(x318+x319))/x320);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x321 = 396742545304193LLU;
	int64_t x323 = -1LL;
	int64_t x324 = INT64_MIN;
	volatile uint64_t t64 = 271143559389LLU;

	t64 = ((x321%(x322+x323))/x324);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint64_t x325 = 3848750349406749293LLU;
	static int8_t x326 = INT8_MIN;
	int64_t x327 = -23590LL;
	int16_t x328 = -1;
	uint64_t t65 = 1617545006451875398LLU;

	t65 = ((x325%(x326+x327))/x328);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x329 = INT32_MIN;
	int64_t x332 = INT64_MIN;
	int64_t t66 = -24934310432LL;

	t66 = ((x329%(x330+x331))/x332);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x333 = INT64_MAX;
	int64_t x334 = INT64_MIN;
	int64_t x336 = -203333265704432598LL;
	static int64_t t67 = -45166113749LL;

	t67 = ((x333%(x334+x335))/x336);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x338 = UINT16_MAX;
	int32_t x339 = -871886;
	int32_t x340 = INT32_MIN;
	static volatile int64_t t68 = 12926396518LL;

	t68 = ((x337%(x338+x339))/x340);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x341 = -13112;
	volatile int8_t x342 = 1;
	int32_t x343 = INT32_MIN;
	static int16_t x344 = INT16_MIN;
	int32_t t69 = 3028725;

	t69 = ((x341%(x342+x343))/x344);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x349 = INT64_MIN;
	uint64_t x350 = 877348LLU;
	uint32_t x351 = UINT32_MAX;
	int8_t x352 = -2;
	volatile uint64_t t70 = 3277096555LLU;

	t70 = ((x349%(x350+x351))/x352);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x353 = INT32_MAX;
	static int8_t x354 = INT8_MIN;
	uint16_t x355 = 757U;
	int32_t x356 = INT32_MIN;
	static int32_t t71 = 224;

	t71 = ((x353%(x354+x355))/x356);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x358 = INT8_MIN;
	static int32_t x359 = INT32_MAX;
	int32_t x360 = -8481242;
	volatile int32_t t72 = -53416;

	t72 = ((x357%(x358+x359))/x360);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x361 = UINT32_MAX;
	uint8_t x362 = 0U;
	static int8_t x363 = INT8_MAX;
	static int8_t x364 = 4;
	volatile uint32_t t73 = 1U;

	t73 = ((x361%(x362+x363))/x364);

	if (t73 != 3U) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x365 = INT16_MAX;
	volatile int64_t x368 = -710LL;
	int64_t t74 = -688301346575LL;

	t74 = ((x365%(x366+x367))/x368);

	if (t74 != -46LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x371 = -3276538476LL;
	uint8_t x372 = 2U;
	int64_t t75 = 5049LL;

	t75 = ((x369%(x370+x371))/x372);

	if (t75 != -13LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x377 = UINT32_MAX;
	int64_t x378 = -1LL;
	uint16_t x379 = 5U;
	static int32_t x380 = -1;
	static int64_t t76 = -198066012LL;

	t76 = ((x377%(x378+x379))/x380);

	if (t76 != -3LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x381 = 1U;
	int64_t x382 = 192611374806871LL;
	volatile uint32_t x383 = 2056745020U;
	int64_t x384 = INT64_MAX;

	t77 = ((x381%(x382+x383))/x384);

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x385 = 15U;
	int8_t x386 = -1;
	int16_t x387 = INT16_MIN;
	int8_t x388 = INT8_MAX;
	volatile int32_t t78 = -26;

	t78 = ((x385%(x386+x387))/x388);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x389 = INT16_MAX;
	int64_t x390 = -1LL;
	uint8_t x391 = 0U;
	volatile int64_t t79 = -35487419506344129LL;

	t79 = ((x389%(x390+x391))/x392);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x393 = -1;
	int16_t x394 = -2639;
	int64_t x395 = -49085815343LL;
	static volatile int64_t t80 = 12435854LL;

	t80 = ((x393%(x394+x395))/x396);

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x397 = 1070272U;
	volatile int16_t x398 = INT16_MAX;
	volatile int8_t x399 = INT8_MIN;
	static int16_t x400 = INT16_MIN;
	static volatile uint32_t t81 = 1037932724U;

	t81 = ((x397%(x398+x399))/x400);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x401 = 25;
	static int32_t t82 = -93562304;

	t82 = ((x401%(x402+x403))/x404);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x406 = -1LL;
	int32_t x407 = -1;
	volatile uint64_t x408 = 3LLU;
	volatile uint64_t t83 = 557195148564LLU;

	t83 = ((x405%(x406+x407))/x408);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x409 = 99657385686479LLU;
	int32_t x411 = 61;

	t84 = ((x409%(x410+x411))/x412);

	if (t84 != 11LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x414 = 97U;
	static volatile int32_t t85 = 0;

	t85 = ((x413%(x414+x415))/x416);

	if (t85 != 9) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x417 = 501;
	uint16_t x418 = UINT16_MAX;
	int64_t t86 = -24LL;

	t86 = ((x417%(x418+x419))/x420);

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x421 = -34868806483691LL;
	volatile uint64_t x422 = UINT64_MAX;
	int16_t x423 = 22;
	volatile uint64_t t87 = 41LLU;

	t87 = ((x421%(x422+x423))/x424);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x429 = INT8_MIN;
	static uint64_t x430 = 10142LLU;
	uint64_t x431 = UINT64_MAX;
	int8_t x432 = INT8_MAX;
	uint64_t t88 = 218407912602217247LLU;

	t88 = ((x429%(x430+x431))/x432);

	if (t88 != 18LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x433 = 619LL;
	int8_t x434 = -2;
	uint64_t x436 = UINT64_MAX;
	volatile uint64_t t89 = 4287954LLU;

	t89 = ((x433%(x434+x435))/x436);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x437 = UINT8_MAX;
	int32_t x438 = INT32_MAX;
	static int16_t x439 = INT16_MIN;
	int16_t x440 = -1;
	volatile int32_t t90 = -86181420;

	t90 = ((x437%(x438+x439))/x440);

	if (t90 != -255) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x441 = INT32_MIN;
	static volatile uint16_t x442 = 0U;
	uint64_t x443 = 585975863425846LLU;
	static int64_t x444 = INT64_MIN;
	volatile uint64_t t91 = 181396903215769525LLU;

	t91 = ((x441%(x442+x443))/x444);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x445 = INT32_MIN;
	int64_t x447 = -1LL;
	static int32_t x448 = INT32_MAX;

	t92 = ((x445%(x446+x447))/x448);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x449 = INT8_MIN;
	int32_t x452 = 8368447;
	static int32_t t93 = -480566;

	t93 = ((x449%(x450+x451))/x452);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x453 = UINT16_MAX;
	volatile int32_t x454 = 3579486;
	int64_t x455 = 60821419LL;
	volatile int64_t t94 = 4636625782LL;

	t94 = ((x453%(x454+x455))/x456);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x457 = 112U;
	volatile int32_t x458 = -1;
	int32_t t95 = -38224301;

	t95 = ((x457%(x458+x459))/x460);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x461 = INT16_MIN;
	static uint16_t x462 = 593U;
	volatile int32_t x463 = -1;
	int16_t x464 = INT16_MIN;

	t96 = ((x461%(x462+x463))/x464);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x466 = INT8_MAX;
	static uint64_t x467 = UINT64_MAX;
	static volatile uint64_t t97 = 29LLU;

	t97 = ((x465%(x466+x467))/x468);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x474 = -1;
	int8_t x475 = -1;
	int32_t x476 = -7;

	t98 = ((x473%(x474+x475))/x476);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint32_t x477 = UINT32_MAX;
	int64_t x478 = 1758249435982562163LL;
	volatile uint32_t x479 = 683175U;

	t99 = ((x477%(x478+x479))/x480);

	if (t99 != 53687091LL) { NG(); } else { ; }
	
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

