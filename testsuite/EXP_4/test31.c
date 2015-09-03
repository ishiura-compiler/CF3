#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x3 = -1;
int64_t x15 = 2115553201LL;
int8_t x20 = INT8_MAX;
volatile int64_t t2 = -843703714179568400LL;
uint8_t x44 = 1U;
volatile int64_t t7 = -14983746040787LL;
volatile int16_t x61 = INT16_MAX;
static int16_t x113 = -1531;
static int32_t t15 = 106;
int16_t x127 = 10018;
static int16_t x128 = -1;
volatile uint16_t x146 = 3U;
int8_t x147 = INT8_MAX;
static volatile int64_t t20 = -3LL;
volatile uint64_t x162 = 250560LLU;
int64_t x167 = -1LL;
volatile uint64_t x174 = 25760477LLU;
int16_t x179 = 1;
static uint16_t x180 = 28157U;
uint8_t x188 = UINT8_MAX;
static int32_t x197 = -1;
volatile uint32_t x199 = UINT32_MAX;
volatile uint32_t t28 = 15273U;
int16_t x209 = 0;
int32_t t30 = -9008;
static uint32_t x246 = UINT32_MAX;
uint8_t x249 = 56U;
int8_t x257 = INT8_MAX;
volatile int8_t x258 = 23;
int32_t x261 = -1;
int16_t x280 = INT16_MIN;
volatile uint64_t x282 = 8593558560509305LLU;
int16_t x288 = INT16_MAX;
volatile uint32_t x297 = UINT32_MAX;
int16_t x301 = 2920;
static uint64_t x303 = UINT64_MAX;
static uint64_t t45 = 26483430010998LLU;
uint64_t x322 = 164801453721838LLU;
volatile uint32_t x326 = 511954U;
int32_t x339 = INT32_MAX;
uint64_t x342 = UINT64_MAX;
uint8_t x344 = UINT8_MAX;
volatile uint64_t t50 = 71977LLU;
uint16_t x351 = 107U;
static volatile uint32_t t51 = 1U;
int16_t x376 = INT16_MIN;
int32_t x391 = INT32_MAX;
static volatile uint64_t t56 = 1270032319355LLU;
volatile uint32_t x398 = UINT32_MAX;
uint8_t x400 = 9U;
uint16_t x413 = 239U;
int8_t x419 = INT8_MIN;
volatile int64_t t60 = -62LL;
uint16_t x433 = 3622U;
int8_t x436 = INT8_MAX;
uint64_t x460 = 70533470790462475LLU;
volatile int16_t x463 = INT16_MIN;
int16_t x467 = 4;
uint64_t t70 = 93601479LLU;
int8_t x478 = -35;
int64_t x481 = INT64_MAX;
static int8_t x485 = -47;
static uint8_t x500 = 8U;
static int16_t x501 = INT16_MAX;
volatile int16_t x516 = -72;
int8_t x538 = -1;
int8_t x541 = INT8_MIN;
static int16_t x549 = INT16_MIN;
uint32_t x553 = 51399U;
static int8_t x555 = -1;
static int16_t x566 = INT16_MIN;
int64_t t85 = 21076326037LL;
volatile int8_t x571 = -6;
static int16_t x583 = INT16_MIN;
uint16_t x590 = 35U;
volatile int32_t t89 = -214;
int64_t x597 = -1LL;
int64_t t90 = 425950969334252672LL;
uint64_t x604 = UINT64_MAX;
uint64_t t91 = 167229LLU;
volatile int64_t t93 = -901863LL;
int64_t x641 = INT64_MIN;
static int16_t x644 = INT16_MAX;
uint64_t x652 = 25604470511218LLU;
uint64_t t99 = 201855379114480LLU;


void f0(void) {
	static uint32_t x1 = 2U;
	static uint16_t x2 = 1016U;
	int16_t x4 = INT16_MAX;
	uint32_t t0 = 7U;

	t0 = (x1%(x2*(x3+x4)));

	if (t0 != 2U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x13 = INT32_MAX;
	static int8_t x14 = -1;
	int16_t x16 = INT16_MAX;
	int64_t t1 = -16013040887509354LL;

	t1 = (x13%(x14*(x15+x16)));

	if (t1 != 31897679LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x17 = 1U;
	uint8_t x18 = 2U;
	volatile int64_t x19 = 132818831LL;

	t2 = (x17%(x18*(x19+x20)));

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x21 = 8215263886728254526LLU;
	int16_t x22 = INT16_MIN;
	uint64_t x23 = UINT64_MAX;
	int64_t x24 = 439947LL;
	uint64_t t3 = 75837322708987054LLU;

	t3 = (x21%(x22*(x23+x24)));

	if (t3 != 8215263886728254526LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = -1;
	int64_t x26 = -1LL;
	static volatile uint64_t x27 = UINT64_MAX;
	static int16_t x28 = -1;
	volatile uint64_t t4 = 4716795408919LLU;

	t4 = (x25%(x26*(x27+x28)));

	if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x37 = INT32_MIN;
	static int16_t x38 = INT16_MIN;
	int64_t x39 = -1LL;
	volatile int8_t x40 = INT8_MIN;
	volatile int64_t t5 = 9336LL;

	t5 = (x37%(x38*(x39+x40)));

	if (t5 != -131072LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x41 = 16165324U;
	int8_t x42 = -1;
	int64_t x43 = INT64_MIN;
	int64_t t6 = -86LL;

	t6 = (x41%(x42*(x43+x44)));

	if (t6 != 16165324LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x45 = UINT32_MAX;
	static int64_t x46 = -236717LL;
	volatile uint16_t x47 = UINT16_MAX;
	int64_t x48 = -1LL;

	t7 = (x45%(x46*(x47+x48)));

	if (t7 != 4294967295LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x57 = 7896LLU;
	uint8_t x58 = 3U;
	uint16_t x59 = 2837U;
	uint32_t x60 = 918511901U;
	uint64_t t8 = 2652LLU;

	t8 = (x57%(x58*(x59+x60)));

	if (t8 != 7896LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x62 = 1583U;
	uint32_t x63 = 4U;
	uint32_t x64 = UINT32_MAX;
	volatile uint32_t t9 = 30U;

	t9 = (x61%(x62*(x63+x64)));

	if (t9 != 4273U) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x65 = -1LL;
	uint64_t x66 = UINT64_MAX;
	int32_t x67 = -1095;
	uint64_t x68 = 35LLU;
	static uint64_t t10 = 90923300494477158LLU;

	t10 = (x65%(x66*(x67+x68)));

	if (t10 != 915LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x69 = -1;
	volatile int64_t x70 = -1LL;
	int64_t x71 = -342468LL;
	int64_t x72 = -1LL;
	volatile int64_t t11 = 16133477013361LL;

	t11 = (x69%(x70*(x71+x72)));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x73 = -93158908096475288LL;
	volatile int16_t x74 = -1;
	uint32_t x75 = UINT32_MAX;
	uint16_t x76 = UINT16_MAX;
	int64_t t12 = -1932977LL;

	t12 = (x73%(x74*(x75+x76)));

	if (t12 != -2130575090LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x89 = 110802444;
	volatile int32_t x90 = INT32_MIN;
	uint16_t x91 = 872U;
	uint32_t x92 = UINT32_MAX;
	static uint32_t t13 = 201479878U;

	t13 = (x89%(x90*(x91+x92)));

	if (t13 != 110802444U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x105 = INT16_MIN;
	volatile int32_t x106 = INT32_MAX;
	volatile int16_t x107 = INT16_MAX;
	static int16_t x108 = INT16_MIN;
	volatile int32_t t14 = 14;

	t14 = (x105%(x106*(x107+x108)));

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x114 = -7808;
	uint8_t x115 = UINT8_MAX;
	int8_t x116 = -1;

	t15 = (x113%(x114*(x115+x116)));

	if (t15 != -1531) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x125 = INT64_MIN;
	static int8_t x126 = -1;
	volatile int64_t t16 = -13551608527251036LL;

	t16 = (x125%(x126*(x127+x128)));

	if (t16 != -6182LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x129 = 2094;
	volatile int8_t x130 = -5;
	int64_t x131 = 115221LL;
	int32_t x132 = INT32_MAX;
	int64_t t17 = 207522539239LL;

	t17 = (x129%(x130*(x131+x132)));

	if (t17 != 2094LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x145 = INT32_MIN;
	uint16_t x148 = 0U;
	static volatile int32_t t18 = -690098;

	t18 = (x145%(x146*(x147+x148)));

	if (t18 != -8) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x149 = INT8_MAX;
	int64_t x150 = -1LL;
	int16_t x151 = 12;
	int8_t x152 = INT8_MIN;
	volatile int64_t t19 = -251123LL;

	t19 = (x149%(x150*(x151+x152)));

	if (t19 != 11LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x153 = INT64_MIN;
	int32_t x154 = -1;
	int16_t x155 = 1;
	volatile uint8_t x156 = 2U;

	t20 = (x153%(x154*(x155+x156)));

	if (t20 != -2LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x161 = INT8_MIN;
	int16_t x163 = INT16_MAX;
	int8_t x164 = -10;
	volatile uint64_t t21 = 6LLU;

	t21 = (x161%(x162*(x163+x164)));

	if (t21 != 4389672128LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x165 = UINT32_MAX;
	int16_t x166 = -5;
	int16_t x168 = -1;
	static volatile int64_t t22 = 3659607LL;

	t22 = (x165%(x166*(x167+x168)));

	if (t22 != 5LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x173 = INT16_MIN;
	volatile uint32_t x175 = 21U;
	volatile int32_t x176 = 104;
	static uint64_t t23 = 4417978813656388640LLU;

	t23 = (x173%(x174*(x175+x176)));

	if (t23 != 2024999348LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x177 = 361380638765505LL;
	uint8_t x178 = 17U;
	int64_t t24 = 129223628833LL;

	t24 = (x177%(x178*(x179+x180)));

	if (t24 != 90423LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x181 = INT8_MIN;
	int8_t x182 = INT8_MAX;
	int8_t x183 = INT8_MIN;
	uint32_t x184 = UINT32_MAX;
	static volatile uint32_t t25 = 1870657U;

	t25 = (x181%(x182*(x183+x184)));

	if (t25 != 16255U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x185 = INT16_MIN;
	uint16_t x186 = UINT16_MAX;
	uint8_t x187 = 1U;
	volatile int32_t t26 = -7659;

	t26 = (x185%(x186*(x187+x188)));

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x193 = INT32_MAX;
	int32_t x194 = INT32_MIN;
	uint64_t x195 = 699678033913LLU;
	static int32_t x196 = INT32_MIN;
	uint64_t t27 = 16957106LLU;

	t27 = (x193%(x194*(x195+x196)));

	if (t27 != 2147483647LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x198 = INT16_MIN;
	static int32_t x200 = INT32_MIN;

	t28 = (x197%(x198*(x199+x200)));

	if (t28 != 32767U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x205 = INT16_MIN;
	int16_t x206 = 14023;
	uint32_t x207 = UINT32_MAX;
	static int16_t x208 = -3;
	uint32_t t29 = 107U;

	t29 = (x205%(x206*(x207+x208)));

	if (t29 != 23324U) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x210 = INT8_MAX;
	int32_t x211 = -37127;
	int32_t x212 = -1;

	t30 = (x209%(x210*(x211+x212)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x213 = INT16_MIN;
	int16_t x214 = -1;
	uint16_t x215 = 55U;
	volatile int32_t x216 = -1;
	static volatile int32_t t31 = -2844;

	t31 = (x213%(x214*(x215+x216)));

	if (t31 != -44) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x229 = -1343839;
	uint64_t x230 = 1834LLU;
	static int8_t x231 = 1;
	uint16_t x232 = 27U;
	static volatile uint64_t t32 = 3124LLU;

	t32 = (x229%(x230*(x231+x232)));

	if (t32 != 30809LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x245 = 1U;
	uint64_t x247 = UINT64_MAX;
	volatile int16_t x248 = INT16_MIN;
	uint64_t t33 = 1273965879944533072LLU;

	t33 = (x245%(x246*(x247+x248)));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x250 = INT16_MIN;
	uint64_t x251 = 326383321117820LLU;
	int16_t x252 = -109;
	volatile uint64_t t34 = 110962LLU;

	t34 = (x249%(x250*(x251+x252)));

	if (t34 != 56LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x259 = -1;
	uint64_t x260 = UINT64_MAX;
	uint64_t t35 = 287206666740409171LLU;

	t35 = (x257%(x258*(x259+x260)));

	if (t35 != 127LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x262 = -1;
	int64_t x263 = 77274026229LL;
	uint16_t x264 = 173U;
	volatile int64_t t36 = 62233821880257LL;

	t36 = (x261%(x262*(x263+x264)));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x265 = INT8_MAX;
	static int8_t x266 = -15;
	int8_t x267 = 38;
	int8_t x268 = -1;
	volatile int32_t t37 = 0;

	t37 = (x265%(x266*(x267+x268)));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x273 = 4U;
	int64_t x274 = 145477917870798LL;
	uint32_t x275 = 563U;
	volatile int16_t x276 = 5024;
	int64_t t38 = -9956223610823LL;

	t38 = (x273%(x274*(x275+x276)));

	if (t38 != 4LL) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x277 = INT32_MIN;
	int16_t x278 = INT16_MIN;
	uint64_t x279 = 2LLU;
	volatile uint64_t t39 = 22589004718119LLU;

	t39 = (x277%(x278*(x279+x280)));

	if (t39 != 4063232LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x281 = 122347821U;
	volatile int32_t x283 = -193388855;
	int16_t x284 = -11;
	volatile uint64_t t40 = 10547206039LLU;

	t40 = (x281%(x282*(x283+x284)));

	if (t40 != 122347821LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x285 = INT16_MIN;
	static uint64_t x286 = UINT64_MAX;
	int8_t x287 = INT8_MAX;
	uint64_t t41 = 215LLU;

	t41 = (x285%(x286*(x287+x288)));

	if (t41 != 126LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x298 = UINT32_MAX;
	int32_t x299 = 63222;
	uint32_t x300 = 13U;
	static uint32_t t42 = 24636818U;

	t42 = (x297%(x298*(x299+x300)));

	if (t42 != 63234U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x302 = INT64_MIN;
	uint16_t x304 = 1632U;
	volatile uint64_t t43 = 61148333148221LLU;

	t43 = (x301%(x302*(x303+x304)));

	if (t43 != 2920LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x305 = 13U;
	int16_t x306 = INT16_MAX;
	uint64_t x307 = 383279490556485LLU;
	static int32_t x308 = 4279;
	uint64_t t44 = 4LLU;

	t44 = (x305%(x306*(x307+x308)));

	if (t44 != 13LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x309 = 1U;
	uint16_t x310 = 22U;
	uint64_t x311 = 80787826450811298LLU;
	static int8_t x312 = 7;

	t45 = (x309%(x310*(x311+x312)));

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x321 = INT16_MIN;
	uint8_t x323 = 36U;
	volatile int16_t x324 = -1;
	volatile uint64_t t46 = 280361977866LLU;

	t46 = (x321%(x322*(x323+x324)));

	if (t46 != 517358624191508LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x325 = UINT64_MAX;
	static int64_t x327 = -1392619LL;
	int8_t x328 = INT8_MIN;
	uint64_t t47 = 8367282535679402747LLU;

	t47 = (x325%(x326*(x327+x328)));

	if (t47 != 713022397637LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x329 = 50U;
	uint64_t x330 = UINT64_MAX;
	int16_t x331 = INT16_MIN;
	int32_t x332 = 114959138;
	volatile uint64_t t48 = 77167370LLU;

	t48 = (x329%(x330*(x331+x332)));

	if (t48 != 50LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x337 = -1;
	int64_t x338 = -1LL;
	int8_t x340 = INT8_MIN;
	int64_t t49 = -111LL;

	t49 = (x337%(x338*(x339+x340)));

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x341 = -7;
	uint64_t x343 = 346691719188LLU;

	t50 = (x341%(x342*(x343+x344)));

	if (t50 != 346691719436LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x349 = UINT32_MAX;
	int16_t x350 = INT16_MIN;
	static int16_t x352 = INT16_MIN;

	t51 = (x349%(x350*(x351+x352)));

	if (t51 != 14024703U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x369 = -1LL;
	int8_t x370 = INT8_MIN;
	uint8_t x371 = 16U;
	int32_t x372 = -2;
	volatile int64_t t52 = 1089823730735LL;

	t52 = (x369%(x370*(x371+x372)));

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x373 = INT32_MAX;
	int64_t x374 = -50936492LL;
	int64_t x375 = -69LL;
	int64_t t53 = -2LL;

	t53 = (x373%(x374*(x375+x376)));

	if (t53 != 2147483647LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x377 = INT32_MAX;
	int64_t x378 = -789LL;
	int64_t x379 = -111304103627LL;
	int16_t x380 = -9;
	int64_t t54 = 73752988LL;

	t54 = (x377%(x378*(x379+x380)));

	if (t54 != 2147483647LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x381 = 15218;
	volatile int64_t x382 = -1LL;
	int8_t x383 = INT8_MAX;
	uint64_t x384 = UINT64_MAX;
	uint64_t t55 = 4589002108LLU;

	t55 = (x381%(x382*(x383+x384)));

	if (t55 != 15218LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x389 = INT64_MAX;
	int64_t x390 = INT64_MIN;
	static uint64_t x392 = 10LLU;

	t56 = (x389%(x390*(x391+x392)));

	if (t56 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x393 = 60059;
	uint64_t x394 = UINT64_MAX;
	volatile uint16_t x395 = 16233U;
	static int8_t x396 = INT8_MIN;
	uint64_t t57 = 122020299369147588LLU;

	t57 = (x393%(x394*(x395+x396)));

	if (t57 != 60059LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x397 = UINT64_MAX;
	uint16_t x399 = 3268U;
	static volatile uint64_t t58 = 15253LLU;

	t58 = (x397%(x398*(x399+x400)));

	if (t58 != 10738728LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x414 = 6;
	static int8_t x415 = INT8_MIN;
	volatile int16_t x416 = -1;
	int32_t t59 = 0;

	t59 = (x413%(x414*(x415+x416)));

	if (t59 != 239) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x417 = INT64_MIN;
	static int8_t x418 = INT8_MIN;
	static uint16_t x420 = 15526U;

	t60 = (x417%(x418*(x419+x420)));

	if (t60 != -853504LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x421 = INT64_MIN;
	static int8_t x422 = -1;
	int8_t x423 = -1;
	int16_t x424 = INT16_MAX;
	volatile int64_t t61 = 918442057468162LL;

	t61 = (x421%(x422*(x423+x424)));

	if (t61 != -128LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x425 = INT64_MIN;
	uint64_t x426 = UINT64_MAX;
	static int8_t x427 = INT8_MIN;
	static uint64_t x428 = 1963842482063933504LLU;
	static uint64_t t62 = 3LLU;

	t62 = (x425%(x426*(x427+x428)));

	if (t62 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x429 = 1380481U;
	int64_t x430 = 15065678953073LL;
	static int16_t x431 = -1;
	int16_t x432 = -15;
	int64_t t63 = 1327590967LL;

	t63 = (x429%(x430*(x431+x432)));

	if (t63 != 1380481LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x434 = 24255816142669LLU;
	uint16_t x435 = 2135U;
	volatile uint64_t t64 = 71585961LLU;

	t64 = (x433%(x434*(x435+x436)));

	if (t64 != 3622LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x437 = -1;
	int8_t x438 = INT8_MAX;
	static volatile int32_t x439 = -22554;
	volatile int16_t x440 = INT16_MAX;
	int32_t t65 = 97;

	t65 = (x437%(x438*(x439+x440)));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x449 = INT32_MAX;
	static uint16_t x450 = UINT16_MAX;
	int64_t x451 = -14685LL;
	volatile int32_t x452 = INT32_MAX;
	volatile int64_t t66 = -780182LL;

	t66 = (x449%(x450*(x451+x452)));

	if (t66 != 2147483647LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x457 = -1;
	int16_t x458 = -138;
	int8_t x459 = -25;
	uint64_t t67 = 3708594602359349782LLU;

	t67 = (x457%(x458*(x459+x460)));

	if (t67 != 1020493864458084583LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint8_t x461 = UINT8_MAX;
	int8_t x462 = -4;
	volatile int16_t x464 = INT16_MIN;
	int32_t t68 = 0;

	t68 = (x461%(x462*(x463+x464)));

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x465 = 375U;
	volatile int8_t x466 = -1;
	static uint16_t x468 = 45U;
	static volatile uint32_t t69 = 8U;

	t69 = (x465%(x466*(x467+x468)));

	if (t69 != 375U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x469 = -1LL;
	static int16_t x470 = -269;
	int8_t x471 = INT8_MAX;
	uint64_t x472 = UINT64_MAX;

	t70 = (x469%(x470*(x471+x472)));

	if (t70 != 33893LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x477 = 98730373437LLU;
	int16_t x479 = 315;
	volatile uint32_t x480 = 53U;
	volatile uint64_t t71 = 107693945LLU;

	t71 = (x477%(x478*(x479+x480)));

	if (t71 != 4241376285LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x482 = UINT16_MAX;
	int16_t x483 = INT16_MIN;
	static uint64_t x484 = UINT64_MAX;
	uint64_t t72 = 221LLU;

	t72 = (x481%(x482*(x483+x484)));

	if (t72 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x486 = -1;
	volatile int8_t x487 = 25;
	int8_t x488 = INT8_MIN;
	volatile int32_t t73 = 435645604;

	t73 = (x485%(x486*(x487+x488)));

	if (t73 != -47) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x489 = INT16_MIN;
	static int8_t x490 = -1;
	static int64_t x491 = -1LL;
	static uint16_t x492 = 4U;
	static volatile int64_t t74 = 23986431LL;

	t74 = (x489%(x490*(x491+x492)));

	if (t74 != -2LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x497 = INT8_MIN;
	volatile int16_t x498 = 162;
	volatile uint16_t x499 = UINT16_MAX;
	int32_t t75 = -937;

	t75 = (x497%(x498*(x499+x500)));

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x502 = 2;
	static int8_t x503 = INT8_MAX;
	uint64_t x504 = 4490000466106403LLU;
	volatile uint64_t t76 = 141936395371LLU;

	t76 = (x501%(x502*(x503+x504)));

	if (t76 != 32767LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x513 = UINT16_MAX;
	int8_t x514 = INT8_MAX;
	volatile uint32_t x515 = 3045838U;
	static uint32_t t77 = 106497082U;

	t77 = (x513%(x514*(x515+x516)));

	if (t77 != 65535U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x517 = 18U;
	uint16_t x518 = 53U;
	volatile uint8_t x519 = 62U;
	int8_t x520 = INT8_MIN;
	int32_t t78 = 0;

	t78 = (x517%(x518*(x519+x520)));

	if (t78 != 18) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x529 = INT64_MAX;
	static int8_t x530 = INT8_MIN;
	uint64_t x531 = 94LLU;
	static int32_t x532 = INT32_MAX;
	static uint64_t t79 = 0LLU;

	t79 = (x529%(x530*(x531+x532)));

	if (t79 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x537 = 109LL;
	int64_t x539 = INT64_MIN;
	uint16_t x540 = UINT16_MAX;
	volatile int64_t t80 = 652691076677315LL;

	t80 = (x537%(x538*(x539+x540)));

	if (t80 != 109LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x542 = UINT32_MAX;
	uint16_t x543 = UINT16_MAX;
	int16_t x544 = INT16_MAX;
	volatile uint32_t t81 = 3U;

	t81 = (x541%(x542*(x543+x544)));

	if (t81 != 98174U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x545 = INT32_MIN;
	int32_t x546 = -1;
	uint64_t x547 = 201572156658958LLU;
	uint16_t x548 = 0U;
	volatile uint64_t t82 = 25LLU;

	t82 = (x545%(x546*(x547+x548)));

	if (t82 != 201570009175310LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x550 = -1;
	uint32_t x551 = UINT32_MAX;
	int8_t x552 = INT8_MAX;
	uint32_t t83 = 60U;

	t83 = (x549%(x550*(x551+x552)));

	if (t83 != 4294934528U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x554 = INT64_MAX;
	uint8_t x556 = 0U;
	static int64_t t84 = 3736860LL;

	t84 = (x553%(x554*(x555+x556)));

	if (t84 != 51399LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x565 = 102U;
	static int64_t x567 = 297437999834LL;
	volatile uint16_t x568 = 13U;

	t85 = (x565%(x566*(x567+x568)));

	if (t85 != 102LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x569 = -1;
	static int16_t x570 = 1;
	uint32_t x572 = 11U;
	uint32_t t86 = 879U;

	t86 = (x569%(x570*(x571+x572)));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x573 = -1;
	volatile int16_t x574 = INT16_MIN;
	int64_t x575 = 105094189673814LL;
	uint8_t x576 = 8U;
	volatile int64_t t87 = 1688512LL;

	t87 = (x573%(x574*(x575+x576)));

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x581 = 0U;
	static uint16_t x582 = 1U;
	int8_t x584 = -1;
	volatile uint32_t t88 = 60043U;

	t88 = (x581%(x582*(x583+x584)));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x589 = INT32_MAX;
	uint16_t x591 = 2598U;
	int32_t x592 = 3610;

	t89 = (x589%(x590*(x591+x592)));

	if (t89 != 105407) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x598 = -1LL;
	int32_t x599 = INT32_MAX;
	static int64_t x600 = -3412LL;

	t90 = (x597%(x598*(x599+x600)));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x601 = 0U;
	static int16_t x602 = INT16_MAX;
	volatile int32_t x603 = -1;

	t91 = (x601%(x602*(x603+x604)));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x605 = 114681043;
	uint16_t x606 = 4033U;
	uint32_t x607 = 235101370U;
	int64_t x608 = -17564LL;
	int64_t t92 = -31334LL;

	t92 = (x605%(x606*(x607+x608)));

	if (t92 != 114681043LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x609 = -810703LL;
	static int8_t x610 = -1;
	int8_t x611 = INT8_MIN;
	volatile int16_t x612 = INT16_MIN;

	t93 = (x609%(x610*(x611+x612)));

	if (t93 != -21199LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x621 = UINT32_MAX;
	uint8_t x622 = 111U;
	uint64_t x623 = 3660332LLU;
	int16_t x624 = 0;
	volatile uint64_t t94 = 95710805108235LLU;

	t94 = (x621%(x622*(x623+x624)));

	if (t94 != 231998775LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x625 = 0;
	int32_t x626 = INT32_MIN;
	uint64_t x627 = 8450596454646910674LLU;
	volatile int16_t x628 = INT16_MIN;
	uint64_t t95 = 575859238932017LLU;

	t95 = (x625%(x626*(x627+x628)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x629 = 735;
	int32_t x630 = -1;
	int64_t x631 = INT64_MIN;
	static int8_t x632 = INT8_MAX;
	int64_t t96 = 242448202171621296LL;

	t96 = (x629%(x630*(x631+x632)));

	if (t96 != 735LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x642 = UINT64_MAX;
	int32_t x643 = 3;
	uint64_t t97 = 3LLU;

	t97 = (x641%(x642*(x643+x644)));

	if (t97 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x645 = INT32_MIN;
	uint32_t x646 = UINT32_MAX;
	int16_t x647 = INT16_MIN;
	volatile uint32_t x648 = UINT32_MAX;
	volatile uint32_t t98 = 5733U;

	t98 = (x645%(x646*(x647+x648)));

	if (t98 != 2U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x649 = INT16_MIN;
	int16_t x650 = INT16_MIN;
	int8_t x651 = INT8_MAX;

	t99 = (x649%(x650*(x651+x652)));

	if (t99 != 839007289715720192LLU) { NG(); } else { ; }
	
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

