#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x9 = 74597U;
uint8_t x16 = UINT8_MAX;
static uint64_t t1 = 55585LLU;
int32_t x20 = -3943159;
uint16_t x21 = UINT16_MAX;
uint16_t x23 = 20U;
volatile uint32_t x30 = UINT32_MAX;
volatile int64_t x31 = INT64_MAX;
volatile uint32_t t5 = 10844U;
static int16_t x60 = -91;
int32_t x63 = -1;
uint16_t x71 = UINT16_MAX;
uint16_t x77 = UINT16_MAX;
static int8_t x90 = 14;
int32_t x92 = INT32_MAX;
int32_t t15 = -14007;
volatile uint8_t x98 = 26U;
static volatile int32_t t18 = 54;
volatile int8_t x121 = 0;
volatile uint16_t x144 = 2744U;
volatile int64_t x161 = -528905201LL;
uint64_t x162 = 945429076087LLU;
uint64_t x164 = 111748293512LLU;
int32_t x183 = INT32_MIN;
uint64_t x192 = 863929108006LLU;
uint32_t x194 = 39224U;
volatile uint64_t x195 = 63056LLU;
static int32_t x202 = 51848668;
int16_t x204 = INT16_MAX;
volatile int32_t t31 = -4897026;
int8_t x225 = -4;
int32_t x244 = INT32_MAX;
uint64_t x247 = UINT64_MAX;
int16_t x251 = INT16_MAX;
volatile uint64_t t35 = 37945LLU;
int32_t t36 = -1622;
uint16_t x265 = 9U;
uint64_t x266 = 94523901318LLU;
int8_t x311 = -26;
static volatile int32_t t43 = 418;
int16_t x333 = -1;
volatile uint32_t x350 = 3645U;
uint32_t t46 = 5029021U;
int32_t t47 = 120965113;
int8_t x369 = -1;
uint32_t x385 = UINT32_MAX;
volatile uint8_t x390 = 1U;
volatile int32_t x393 = INT32_MIN;
static int32_t x395 = INT32_MIN;
uint32_t t53 = 23147U;
volatile int32_t t55 = -1;
int32_t t57 = 107200;
int16_t x445 = 1;
static volatile int32_t x446 = 915752;
int16_t x449 = -1;
static int8_t x463 = 3;
int8_t x464 = INT8_MAX;
static int32_t x479 = -17984;
static volatile uint32_t x500 = 3040233U;
int32_t t65 = -22;
static int32_t x503 = -69;
int16_t x513 = -1;
static uint32_t x523 = 9022378U;
int32_t t70 = -1;
int64_t x532 = INT64_MIN;
static uint32_t x538 = UINT32_MAX;
uint64_t t73 = 5492554193146244LLU;
volatile int8_t x549 = INT8_MIN;
uint64_t x554 = UINT64_MAX;
uint64_t t75 = 2202287304LLU;
int8_t x557 = 3;
uint8_t x567 = 14U;
int64_t x573 = INT64_MIN;
int32_t x586 = INT32_MAX;
int8_t x588 = INT8_MAX;
int32_t x603 = INT32_MIN;
static uint64_t t82 = 1052327147250LLU;
int32_t x607 = 7448;
int64_t t83 = -86LL;
volatile uint64_t t84 = 30644923LLU;
volatile uint32_t x618 = 639063982U;
uint16_t x619 = 226U;
uint8_t x623 = 63U;
static volatile uint8_t x626 = UINT8_MAX;
static int64_t x627 = INT64_MIN;
volatile int64_t t89 = 2653LL;
static int16_t x643 = INT16_MAX;
static volatile int64_t t91 = -5548745446LL;
int16_t x649 = INT16_MIN;
int32_t x656 = -21469;
static volatile uint64_t t96 = 2814152735375LLU;
uint16_t x677 = 31U;
int16_t x681 = INT16_MIN;
int64_t x683 = INT64_MIN;


void f0(void) {
	uint64_t x10 = 204038829890LLU;
	int8_t x11 = -41;
	uint64_t x12 = UINT64_MAX;
	uint64_t t0 = 4356198269210LLU;

	t0 = (x9^(x10<<(x11==x12)));

	if (t0 != 204038755367LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x13 = -2886;
	static uint64_t x14 = 577216810847922221LLU;
	int32_t x15 = INT32_MIN;

	t1 = (x13^(x14<<(x15==x16)));

	if (t1 != 17869527262861630615LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x17 = 22U;
	int32_t x18 = INT32_MAX;
	int16_t x19 = -2661;
	int32_t t2 = 9;

	t2 = (x17^(x18<<(x19==x20)));

	if (t2 != 2147483625) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x22 = UINT64_MAX;
	int8_t x24 = INT8_MIN;
	static uint64_t t3 = 57LLU;

	t3 = (x21^(x22<<(x23==x24)));

	if (t3 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = 67326LL;
	static uint64_t x26 = 109767315059LLU;
	int64_t x27 = 12LL;
	int16_t x28 = INT16_MIN;
	volatile uint64_t t4 = 85LLU;

	t4 = (x25^(x26<<(x27==x28)));

	if (t4 != 109767379085LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = -1;
	volatile int32_t x32 = -4;

	t5 = (x29^(x30<<(x31==x32)));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x41 = INT32_MIN;
	static uint32_t x42 = 977U;
	int32_t x43 = INT32_MIN;
	uint64_t x44 = 58362825432723555LLU;
	uint32_t t6 = 13814263U;

	t6 = (x41^(x42<<(x43==x44)));

	if (t6 != 2147484625U) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x45 = 0U;
	volatile uint32_t x46 = 616U;
	volatile uint32_t x47 = 7974U;
	uint16_t x48 = UINT16_MAX;
	uint32_t t7 = 2504117U;

	t7 = (x45^(x46<<(x47==x48)));

	if (t7 != 616U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x57 = INT16_MIN;
	uint32_t x58 = UINT32_MAX;
	uint16_t x59 = UINT16_MAX;
	uint32_t t8 = 815678U;

	t8 = (x57^(x58<<(x59==x60)));

	if (t8 != 32767U) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x61 = -35;
	static volatile int64_t x62 = 539966269020758340LL;
	static int32_t x64 = -1;
	volatile int64_t t9 = 292446709LL;

	t9 = (x61^(x62<<(x63==x64)));

	if (t9 != -1079932538041516715LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x65 = 980240330U;
	int64_t x66 = 4772661552LL;
	int64_t x67 = -1LL;
	int8_t x68 = 11;
	static int64_t t10 = 28777LL;

	t10 = (x65^(x66<<(x67==x68)));

	if (t10 != 4933832442LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x69 = -119;
	int8_t x70 = 7;
	int16_t x72 = 350;
	volatile int32_t t11 = -1;

	t11 = (x69^(x70<<(x71==x72)));

	if (t11 != -114) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x78 = INT8_MAX;
	int16_t x79 = INT16_MIN;
	int64_t x80 = -1LL;
	volatile int32_t t12 = 3;

	t12 = (x77^(x78<<(x79==x80)));

	if (t12 != 65408) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint32_t x81 = 217U;
	int8_t x82 = 3;
	uint64_t x83 = 55662432089309547LLU;
	int64_t x84 = INT64_MAX;
	uint32_t t13 = 5U;

	t13 = (x81^(x82<<(x83==x84)));

	if (t13 != 218U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x89 = -1;
	static int64_t x91 = INT64_MIN;
	volatile int32_t t14 = -6548931;

	t14 = (x89^(x90<<(x91==x92)));

	if (t14 != -15) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x93 = -3684;
	uint16_t x94 = 4181U;
	int64_t x95 = 2989559758823929LL;
	volatile int16_t x96 = -1;

	t15 = (x93^(x94<<(x95==x96)));

	if (t15 != -7735) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x97 = 1188U;
	int32_t x99 = -1;
	uint16_t x100 = 1723U;
	volatile uint32_t t16 = 8938682U;

	t16 = (x97^(x98<<(x99==x100)));

	if (t16 != 1214U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x101 = 28379LLU;
	uint8_t x102 = 14U;
	int16_t x103 = 363;
	static int32_t x104 = INT32_MIN;
	volatile uint64_t t17 = 1819371630775091LLU;

	t17 = (x101^(x102<<(x103==x104)));

	if (t17 != 28373LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x113 = -63;
	static uint8_t x114 = 75U;
	uint16_t x115 = UINT16_MAX;
	static uint32_t x116 = 35U;

	t18 = (x113^(x114<<(x115==x116)));

	if (t18 != -118) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x122 = 0U;
	uint8_t x123 = UINT8_MAX;
	volatile int8_t x124 = -1;
	volatile int32_t t19 = -863436;

	t19 = (x121^(x122<<(x123==x124)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x129 = INT64_MAX;
	uint8_t x130 = 6U;
	int8_t x131 = INT8_MAX;
	static uint16_t x132 = 937U;
	int64_t t20 = -868966575367276683LL;

	t20 = (x129^(x130<<(x131==x132)));

	if (t20 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x137 = 250725110362LLU;
	int16_t x138 = 99;
	int32_t x139 = 1;
	uint32_t x140 = 237462U;
	volatile uint64_t t21 = 219372189672LLU;

	t21 = (x137^(x138<<(x139==x140)));

	if (t21 != 250725110329LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x141 = INT8_MIN;
	static volatile uint8_t x142 = 7U;
	uint8_t x143 = UINT8_MAX;
	int32_t t22 = 732480936;

	t22 = (x141^(x142<<(x143==x144)));

	if (t22 != -121) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x145 = INT64_MIN;
	static volatile uint64_t x146 = 2826LLU;
	int16_t x147 = 15496;
	static int8_t x148 = INT8_MAX;
	uint64_t t23 = 2301375LLU;

	t23 = (x145^(x146<<(x147==x148)));

	if (t23 != 9223372036854778634LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x149 = UINT16_MAX;
	int32_t x150 = 4533;
	volatile uint64_t x151 = 1021606775624921LLU;
	volatile uint8_t x152 = 7U;
	volatile int32_t t24 = 27961596;

	t24 = (x149^(x150<<(x151==x152)));

	if (t24 != 61002) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x163 = -25877LL;
	uint64_t t25 = 659774299990393606LLU;

	t25 = (x161^(x162<<(x163==x164)));

	if (t25 != 18446743128809362552LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x169 = INT32_MIN;
	uint16_t x170 = 3622U;
	uint64_t x171 = 3376LLU;
	static int16_t x172 = INT16_MAX;
	int32_t t26 = -873486583;

	t26 = (x169^(x170<<(x171==x172)));

	if (t26 != -2147480026) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x181 = UINT64_MAX;
	volatile int64_t x182 = INT64_MAX;
	volatile int8_t x184 = -1;
	uint64_t t27 = 137029587LLU;

	t27 = (x181^(x182<<(x183==x184)));

	if (t27 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x189 = 9U;
	int64_t x190 = 120107654763LL;
	volatile uint8_t x191 = UINT8_MAX;
	volatile int64_t t28 = 78289LL;

	t28 = (x189^(x190<<(x191==x192)));

	if (t28 != 120107654754LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x193 = 4396U;
	int64_t x196 = INT64_MIN;
	volatile uint32_t t29 = 2U;

	t29 = (x193^(x194<<(x195==x196)));

	if (t29 != 34836U) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x201 = -1;
	uint64_t x203 = UINT64_MAX;
	volatile int32_t t30 = -126049;

	t30 = (x201^(x202<<(x203==x204)));

	if (t30 != -51848669) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x221 = -1;
	int32_t x222 = 1089127;
	int8_t x223 = -1;
	uint64_t x224 = UINT64_MAX;

	t31 = (x221^(x222<<(x223==x224)));

	if (t31 != -2178255) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x226 = 7553833780LLU;
	int32_t x227 = INT32_MIN;
	static uint32_t x228 = 327002U;
	volatile uint64_t t32 = 11LLU;

	t32 = (x225^(x226<<(x227==x228)));

	if (t32 != 18446744066155717832LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x241 = UINT16_MAX;
	uint64_t x242 = UINT64_MAX;
	int32_t x243 = INT32_MIN;
	volatile uint64_t t33 = 2365LLU;

	t33 = (x241^(x242<<(x243==x244)));

	if (t33 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x245 = 1772267U;
	static uint8_t x246 = UINT8_MAX;
	int16_t x248 = INT16_MIN;
	static uint32_t t34 = 1445U;

	t34 = (x245^(x246<<(x247==x248)));

	if (t34 != 1772052U) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x249 = 223384825103932854LLU;
	int32_t x250 = 314788;
	int32_t x252 = -1;

	t35 = (x249^(x250<<(x251==x252)));

	if (t35 != 223384825104207890LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x253 = INT8_MAX;
	static uint16_t x254 = 176U;
	volatile uint8_t x255 = 1U;
	int32_t x256 = 1;

	t36 = (x253^(x254<<(x255==x256)));

	if (t36 != 287) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x267 = INT8_MIN;
	uint32_t x268 = 14546904U;
	volatile uint64_t t37 = 7901039LLU;

	t37 = (x265^(x266<<(x267==x268)));

	if (t37 != 94523901327LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x273 = INT16_MAX;
	int64_t x274 = 4051111095850438LL;
	int16_t x275 = INT16_MIN;
	uint64_t x276 = 17231734222885LLU;
	static int64_t t38 = 4206998715090106932LL;

	t38 = (x273^(x274<<(x275==x276)));

	if (t38 != 4051111095839289LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x277 = 4;
	volatile uint64_t x278 = 31401948256LLU;
	uint16_t x279 = 64U;
	volatile int64_t x280 = INT64_MIN;
	volatile uint64_t t39 = 2833LLU;

	t39 = (x277^(x278<<(x279==x280)));

	if (t39 != 31401948260LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x289 = 24;
	volatile uint64_t x290 = UINT64_MAX;
	uint32_t x291 = 0U;
	uint8_t x292 = 26U;
	static uint64_t t40 = 12968288387353009LLU;

	t40 = (x289^(x290<<(x291==x292)));

	if (t40 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x293 = 605992645529516972LL;
	volatile uint16_t x294 = UINT16_MAX;
	volatile int32_t x295 = -369307261;
	int8_t x296 = INT8_MAX;
	volatile int64_t t41 = 485LL;

	t41 = (x293^(x294<<(x295==x296)));

	if (t41 != 605992645529551955LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x309 = -1;
	static volatile uint32_t x310 = UINT32_MAX;
	uint16_t x312 = 913U;
	static uint32_t t42 = 3400337U;

	t42 = (x309^(x310<<(x311==x312)));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x325 = INT32_MAX;
	uint8_t x326 = 3U;
	int16_t x327 = INT16_MIN;
	volatile uint8_t x328 = 96U;

	t43 = (x325^(x326<<(x327==x328)));

	if (t43 != 2147483644) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x334 = 34;
	int64_t x335 = 4072817LL;
	int16_t x336 = -1;
	static volatile int32_t t44 = -4;

	t44 = (x333^(x334<<(x335==x336)));

	if (t44 != -35) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x337 = INT32_MIN;
	uint8_t x338 = 22U;
	int8_t x339 = INT8_MAX;
	static volatile int8_t x340 = -1;
	int32_t t45 = 57993;

	t45 = (x337^(x338<<(x339==x340)));

	if (t45 != -2147483626) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x349 = 10702051U;
	int16_t x351 = INT16_MIN;
	int64_t x352 = -1LL;

	t46 = (x349^(x350<<(x351==x352)));

	if (t46 != 10699486U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x353 = INT32_MIN;
	uint8_t x354 = 15U;
	static int16_t x355 = -1699;
	uint16_t x356 = 0U;

	t47 = (x353^(x354<<(x355==x356)));

	if (t47 != -2147483633) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x370 = UINT8_MAX;
	uint32_t x371 = 12U;
	int32_t x372 = -1;
	int32_t t48 = -3566618;

	t48 = (x369^(x370<<(x371==x372)));

	if (t48 != -256) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x377 = 103755197LLU;
	static volatile uint8_t x378 = 2U;
	uint8_t x379 = UINT8_MAX;
	uint8_t x380 = 13U;
	uint64_t t49 = 5LLU;

	t49 = (x377^(x378<<(x379==x380)));

	if (t49 != 103755199LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x381 = 6;
	uint8_t x382 = UINT8_MAX;
	volatile int64_t x383 = INT64_MIN;
	volatile int16_t x384 = INT16_MIN;
	volatile int32_t t50 = 113553;

	t50 = (x381^(x382<<(x383==x384)));

	if (t50 != 249) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x386 = 76LLU;
	int32_t x387 = -1;
	uint8_t x388 = 2U;
	volatile uint64_t t51 = 1006926824174LLU;

	t51 = (x385^(x386<<(x387==x388)));

	if (t51 != 4294967219LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x389 = 0U;
	uint8_t x391 = 83U;
	uint8_t x392 = 59U;
	volatile int32_t t52 = 535694;

	t52 = (x389^(x390<<(x391==x392)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint32_t x394 = 23156U;
	volatile int16_t x396 = 571;

	t53 = (x393^(x394<<(x395==x396)));

	if (t53 != 2147506804U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x401 = INT32_MIN;
	static uint32_t x402 = 2382713U;
	volatile uint32_t x403 = 181303036U;
	int16_t x404 = INT16_MAX;
	uint32_t t54 = 0U;

	t54 = (x401^(x402<<(x403==x404)));

	if (t54 != 2149866361U) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x413 = -1;
	int16_t x414 = INT16_MAX;
	volatile int8_t x415 = 0;
	volatile int32_t x416 = INT32_MAX;

	t55 = (x413^(x414<<(x415==x416)));

	if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x417 = -1;
	uint8_t x418 = UINT8_MAX;
	int32_t x419 = 118;
	int32_t x420 = INT32_MAX;
	volatile int32_t t56 = 149815362;

	t56 = (x417^(x418<<(x419==x420)));

	if (t56 != -256) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x421 = 1249U;
	int8_t x422 = 4;
	volatile int8_t x423 = INT8_MIN;
	int8_t x424 = 1;

	t57 = (x421^(x422<<(x423==x424)));

	if (t57 != 1253) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x429 = -1;
	uint64_t x430 = 269319994183775882LLU;
	int8_t x431 = -24;
	int16_t x432 = -1;
	volatile uint64_t t58 = 75390467LLU;

	t58 = (x429^(x430<<(x431==x432)));

	if (t58 != 18177424079525775733LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x433 = 28371235333433414LLU;
	volatile int64_t x434 = 726188661LL;
	uint8_t x435 = UINT8_MAX;
	int32_t x436 = 14;
	uint64_t t59 = 283632177740LLU;

	t59 = (x433^(x434<<(x435==x436)));

	if (t59 != 28371234608359987LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x447 = 2064337U;
	uint64_t x448 = UINT64_MAX;
	int32_t t60 = 401907;

	t60 = (x445^(x446<<(x447==x448)));

	if (t60 != 915753) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x450 = 771266928091LLU;
	static int64_t x451 = INT64_MIN;
	volatile uint16_t x452 = 1876U;
	static uint64_t t61 = 12LLU;

	t61 = (x449^(x450<<(x451==x452)));

	if (t61 != 18446743302442623524LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x461 = INT16_MIN;
	uint8_t x462 = 6U;
	volatile int32_t t62 = -11;

	t62 = (x461^(x462<<(x463==x464)));

	if (t62 != -32762) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x477 = 0;
	static uint32_t x478 = 506U;
	uint8_t x480 = 31U;
	uint32_t t63 = 1711930U;

	t63 = (x477^(x478<<(x479==x480)));

	if (t63 != 506U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x493 = 9;
	int8_t x494 = INT8_MAX;
	static volatile int16_t x495 = -551;
	int8_t x496 = -1;
	int32_t t64 = 7172;

	t64 = (x493^(x494<<(x495==x496)));

	if (t64 != 118) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x497 = -3086;
	static uint16_t x498 = 806U;
	int32_t x499 = INT32_MAX;

	t65 = (x497^(x498<<(x499==x500)));

	if (t65 != -3884) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x501 = -10;
	int16_t x502 = 0;
	volatile int16_t x504 = -1;
	volatile int32_t t66 = -395719;

	t66 = (x501^(x502<<(x503==x504)));

	if (t66 != -10) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x514 = 1908U;
	volatile int16_t x515 = 87;
	int16_t x516 = INT16_MIN;
	uint32_t t67 = 1U;

	t67 = (x513^(x514<<(x515==x516)));

	if (t67 != 4294965387U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x517 = INT8_MAX;
	static uint16_t x518 = 715U;
	volatile uint32_t x519 = UINT32_MAX;
	int16_t x520 = 0;
	int32_t t68 = 5560;

	t68 = (x517^(x518<<(x519==x520)));

	if (t68 != 692) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x521 = 28U;
	static uint16_t x522 = UINT16_MAX;
	int16_t x524 = 2;
	volatile int32_t t69 = 807508898;

	t69 = (x521^(x522<<(x523==x524)));

	if (t69 != 65507) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x525 = 91U;
	uint8_t x526 = 44U;
	int32_t x527 = INT32_MIN;
	volatile int8_t x528 = INT8_MIN;

	t70 = (x525^(x526<<(x527==x528)));

	if (t70 != 119) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x529 = 82U;
	uint8_t x530 = 0U;
	int64_t x531 = INT64_MIN;
	static int32_t t71 = 437414560;

	t71 = (x529^(x530<<(x531==x532)));

	if (t71 != 82) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x537 = INT8_MIN;
	int16_t x539 = -2;
	int16_t x540 = INT16_MIN;
	volatile uint32_t t72 = 119U;

	t72 = (x537^(x538<<(x539==x540)));

	if (t72 != 127U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x545 = INT16_MAX;
	static uint64_t x546 = UINT64_MAX;
	uint32_t x547 = 39758807U;
	int64_t x548 = INT64_MIN;

	t73 = (x545^(x546<<(x547==x548)));

	if (t73 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x550 = 405282LLU;
	static volatile int16_t x551 = INT16_MIN;
	int64_t x552 = -1LL;
	uint64_t t74 = 30556138085LLU;

	t74 = (x549^(x550<<(x551==x552)));

	if (t74 != 18446744073709146274LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x553 = UINT32_MAX;
	volatile int64_t x555 = -18673347626463LL;
	int16_t x556 = 1;

	t75 = (x553^(x554<<(x555==x556)));

	if (t75 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint64_t x558 = 3673LLU;
	uint32_t x559 = UINT32_MAX;
	int32_t x560 = INT32_MIN;
	uint64_t t76 = 247381LLU;

	t76 = (x557^(x558<<(x559==x560)));

	if (t76 != 3674LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x565 = INT64_MIN;
	uint8_t x566 = 11U;
	volatile int32_t x568 = INT32_MIN;
	int64_t t77 = -2LL;

	t77 = (x565^(x566<<(x567==x568)));

	if (t77 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x574 = INT32_MAX;
	int32_t x575 = -1;
	volatile int8_t x576 = -52;
	static int64_t t78 = 137817709143862LL;

	t78 = (x573^(x574<<(x575==x576)));

	if (t78 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x577 = INT64_MIN;
	uint16_t x578 = UINT16_MAX;
	uint8_t x579 = 1U;
	int64_t x580 = -59LL;
	int64_t t79 = -2LL;

	t79 = (x577^(x578<<(x579==x580)));

	if (t79 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x585 = INT16_MIN;
	int8_t x587 = -1;
	int32_t t80 = 123083868;

	t80 = (x585^(x586<<(x587==x588)));

	if (t80 != -2147450881) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x593 = 65916342U;
	static uint8_t x594 = 2U;
	static int16_t x595 = 1378;
	int8_t x596 = INT8_MIN;
	uint32_t t81 = 696089U;

	t81 = (x593^(x594<<(x595==x596)));

	if (t81 != 65916340U) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x601 = UINT64_MAX;
	uint16_t x602 = 1U;
	static volatile uint32_t x604 = UINT32_MAX;

	t82 = (x601^(x602<<(x603==x604)));

	if (t82 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x605 = -1658181445LL;
	int32_t x606 = 304606506;
	int64_t x608 = -112148219563256LL;

	t83 = (x605^(x606<<(x607==x608)));

	if (t83 != -1894922863LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x609 = -1LL;
	static uint64_t x610 = 13394038695LLU;
	volatile uint8_t x611 = UINT8_MAX;
	int8_t x612 = -1;

	t84 = (x609^(x610<<(x611==x612)));

	if (t84 != 18446744060315512920LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x617 = 1101;
	volatile uint8_t x620 = 109U;
	uint32_t t85 = 1014243992U;

	t85 = (x617^(x618<<(x619==x620)));

	if (t85 != 639063011U) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x621 = 54;
	uint8_t x622 = UINT8_MAX;
	uint16_t x624 = 14430U;
	static int32_t t86 = -2093721;

	t86 = (x621^(x622<<(x623==x624)));

	if (t86 != 201) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x625 = -17;
	static uint64_t x628 = 1999402225223165LLU;
	int32_t t87 = -365764048;

	t87 = (x625^(x626<<(x627==x628)));

	if (t87 != -240) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x629 = INT16_MAX;
	int64_t x630 = 1999839167LL;
	volatile int8_t x631 = -8;
	int32_t x632 = -13806488;
	int64_t t88 = -178080165655324LL;

	t88 = (x629^(x630<<(x631==x632)));

	if (t88 != 1999855680LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x633 = INT16_MIN;
	int64_t x634 = 2853988482604504LL;
	uint16_t x635 = 157U;
	static int8_t x636 = -28;

	t89 = (x633^(x634<<(x635==x636)));

	if (t89 != -2853988482589224LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x637 = INT32_MIN;
	int32_t x638 = 4501;
	uint64_t x639 = UINT64_MAX;
	uint64_t x640 = 96LLU;
	int32_t t90 = 968810517;

	t90 = (x637^(x638<<(x639==x640)));

	if (t90 != -2147479147) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x641 = INT64_MIN;
	static uint32_t x642 = 1720475955U;
	int8_t x644 = INT8_MIN;

	t91 = (x641^(x642<<(x643==x644)));

	if (t91 != -9223372035134299853LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x650 = 1592U;
	uint32_t x651 = 160U;
	uint16_t x652 = 2U;
	static volatile int32_t t92 = 107;

	t92 = (x649^(x650<<(x651==x652)));

	if (t92 != -31176) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x653 = INT8_MIN;
	uint32_t x654 = 4953899U;
	int64_t x655 = INT64_MIN;
	volatile uint32_t t93 = 6U;

	t93 = (x653^(x654<<(x655==x656)));

	if (t93 != 4290013355U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x661 = 26950;
	volatile uint32_t x662 = 437248U;
	int64_t x663 = INT64_MIN;
	int8_t x664 = -1;
	volatile uint32_t t94 = 458000U;

	t94 = (x661^(x662<<(x663==x664)));

	if (t94 != 443718U) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int8_t x665 = -1;
	int8_t x666 = 4;
	int8_t x667 = INT8_MIN;
	static uint16_t x668 = 5U;
	static int32_t t95 = 35449;

	t95 = (x665^(x666<<(x667==x668)));

	if (t95 != -5) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x673 = INT32_MIN;
	uint64_t x674 = 124LLU;
	uint64_t x675 = UINT64_MAX;
	static volatile uint8_t x676 = 0U;

	t96 = (x673^(x674<<(x675==x676)));

	if (t96 != 18446744071562068092LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x678 = INT32_MAX;
	int16_t x679 = INT16_MIN;
	int64_t x680 = INT64_MAX;
	static volatile int32_t t97 = -224969;

	t97 = (x677^(x678<<(x679==x680)));

	if (t97 != 2147483616) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x682 = 284978158360LLU;
	uint8_t x684 = 54U;
	static uint64_t t98 = 79041071455925LLU;

	t98 = (x681^(x682<<(x683==x684)));

	if (t98 != 18446743788731374360LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x693 = 9U;
	uint8_t x694 = 3U;
	uint32_t x695 = 2034779U;
	uint32_t x696 = 6107U;
	static int32_t t99 = -2;

	t99 = (x693^(x694<<(x695==x696)));

	if (t99 != 10) { NG(); } else { ; }
	
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

