#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x8 = 1324895495LL;
int16_t x11 = INT16_MAX;
int64_t x23 = -1LL;
int16_t x30 = -1;
int32_t x38 = INT32_MAX;
uint8_t x43 = 2U;
int32_t x44 = INT32_MIN;
static volatile uint64_t t8 = 189275111279278073LLU;
int8_t x46 = INT8_MIN;
int16_t x51 = -1;
volatile int64_t x57 = INT64_MIN;
static volatile int64_t t11 = 6065356504LL;
int16_t x67 = 278;
static int32_t x77 = INT32_MAX;
int64_t x78 = -1LL;
int64_t t13 = -107LL;
static int8_t x91 = -1;
int8_t x96 = -1;
volatile int16_t x100 = 351;
uint64_t t18 = 0LLU;
int64_t x107 = -1LL;
static int16_t x108 = INT16_MAX;
uint64_t x114 = UINT64_MAX;
uint64_t t21 = 2987039073112587406LLU;
int16_t x132 = -1;
int64_t x135 = INT64_MIN;
uint16_t x137 = 0U;
uint8_t x138 = UINT8_MAX;
static uint64_t x143 = 4013585193LLU;
static uint64_t x148 = 1474LLU;
int16_t x167 = INT16_MIN;
static int32_t x188 = INT32_MIN;
static volatile int64_t t38 = -123278593607169924LL;
volatile uint64_t t39 = 3072540LLU;
int16_t x205 = INT16_MAX;
int64_t x211 = 515965624868550LL;
int64_t x232 = INT64_MIN;
uint8_t x233 = 116U;
int16_t x257 = -1;
volatile uint64_t t52 = 2143677LLU;
int64_t x282 = -241044LL;
static uint8_t x283 = UINT8_MAX;
volatile int64_t t54 = 1133155133083LL;
int8_t x292 = 7;
static volatile uint16_t x293 = 460U;
int64_t t57 = 1603789375243707491LL;
volatile int16_t x307 = INT16_MAX;
uint8_t x316 = 7U;
volatile uint32_t t62 = 7749173U;
int8_t x318 = 51;
int64_t x329 = INT64_MIN;
int64_t x330 = 76737757727LL;
uint32_t x331 = 62127U;
volatile int32_t x333 = -1;
int32_t x345 = -1;
uint8_t x347 = 4U;
int64_t t69 = -4LL;
volatile uint32_t t73 = 806018U;
volatile int16_t x378 = -20;
volatile uint16_t x387 = UINT16_MAX;
int32_t x388 = -1;
int8_t x392 = INT8_MAX;
int16_t x393 = INT16_MIN;
int32_t t79 = 61907;
int16_t x399 = -6;
uint8_t x400 = 4U;
uint64_t x412 = 495856302LLU;
volatile int16_t x417 = INT16_MAX;
volatile uint8_t x423 = 3U;
static uint64_t x433 = UINT64_MAX;
int64_t x436 = 1531LL;
static uint32_t x442 = 301010897U;
int16_t x444 = -1961;
int64_t x449 = INT64_MAX;
int8_t x455 = -4;
volatile int64_t t92 = 6687989LL;
volatile int16_t x458 = -887;
static int16_t x464 = INT16_MIN;
static int32_t t94 = -30;
int8_t x465 = INT8_MIN;
static int64_t x466 = INT64_MAX;
uint32_t x467 = UINT32_MAX;
int8_t x471 = INT8_MIN;
uint32_t x477 = 83U;
uint16_t x478 = UINT16_MAX;
volatile int64_t x483 = -2204LL;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint64_t x2 = UINT64_MAX;
	static int16_t x3 = INT16_MIN;
	int64_t x4 = INT64_MAX;
	static uint64_t t0 = 469144852935357LLU;

	t0 = ((x1/(x2&x3))^x4);

	if (t0 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	int64_t x6 = -1LL;
	static int8_t x7 = 17;
	volatile int64_t t1 = 79527426LL;

	t1 = ((x5/(x6&x7))^x8);

	if (t1 != -1324894850LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = UINT64_MAX;
	int64_t x10 = INT64_MAX;
	uint32_t x12 = 1002U;
	uint64_t t2 = 16LLU;

	t2 = ((x9/(x10&x11))^x12);

	if (t2 != 562967133815802LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x13 = 658813036324584LLU;
	int16_t x14 = -341;
	volatile int8_t x15 = INT8_MIN;
	int8_t x16 = INT8_MIN;
	uint64_t t3 = 4007114LLU;

	t3 = ((x13/(x14&x15))^x16);

	if (t3 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int8_t x18 = INT8_MAX;
	static volatile uint32_t x19 = 148U;
	static int8_t x20 = -1;
	volatile int64_t t4 = -22673151855186757LL;

	t4 = ((x17/(x18&x19))^x20);

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 1U;
	volatile int16_t x22 = -1;
	static int8_t x24 = INT8_MIN;
	volatile int64_t t5 = 21295588157051LL;

	t5 = ((x21/(x22&x23))^x24);

	if (t5 != 127LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x29 = -1;
	int32_t x31 = INT32_MAX;
	int64_t x32 = INT64_MIN;
	volatile int64_t t6 = INT64_MIN;

	t6 = ((x29/(x30&x31))^x32);

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = 69357421329047363LL;
	static int64_t x39 = 467920973935977632LL;
	static int8_t x40 = INT8_MIN;
	static volatile int64_t t7 = -18LL;

	t7 = ((x37/(x38&x39))^x40);

	if (t7 != -397167621LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x41 = UINT64_MAX;
	int8_t x42 = INT8_MAX;

	t8 = ((x41/(x42&x43))^x44);

	if (t8 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x45 = -1093;
	int32_t x47 = INT32_MIN;
	int8_t x48 = INT8_MAX;
	int32_t t9 = 783626457;

	t9 = ((x45/(x46&x47))^x48);

	if (t9 != 127) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = INT32_MAX;
	int64_t x50 = -21905716LL;
	int32_t x52 = INT32_MIN;
	int64_t t10 = -84545LL;

	t10 = ((x49/(x50&x51))^x52);

	if (t10 != 2147483550LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x58 = -1;
	int64_t x59 = INT64_MIN;
	int32_t x60 = 15134;

	t11 = ((x57/(x58&x59))^x60);

	if (t11 != 15135LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x65 = UINT32_MAX;
	uint32_t x66 = 1794561302U;
	uint64_t x68 = 2LLU;
	uint64_t t12 = 1127215816LLU;

	t12 = ((x65/(x66&x67))^x68);

	if (t12 != 15449520LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x79 = 13U;
	int16_t x80 = 656;

	t13 = ((x77/(x78&x79))^x80);

	if (t13 != 165191449LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x81 = INT8_MAX;
	int32_t x82 = INT32_MAX;
	static int8_t x83 = -1;
	static volatile int16_t x84 = -5240;
	static int32_t t14 = 27;

	t14 = ((x81/(x82&x83))^x84);

	if (t14 != -5240) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x85 = 69LLU;
	uint32_t x86 = 375025U;
	int16_t x87 = -1;
	int64_t x88 = INT64_MIN;
	volatile uint64_t t15 = 47LLU;

	t15 = ((x85/(x86&x87))^x88);

	if (t15 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x89 = 235684356285670LLU;
	static volatile int32_t x90 = INT32_MIN;
	static int64_t x92 = 33075303311165401LL;
	volatile uint64_t t16 = 431247LLU;

	t16 = ((x89/(x90&x91))^x92);

	if (t16 != 33075303311165401LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x93 = INT64_MAX;
	int32_t x94 = -1;
	static int64_t x95 = INT64_MIN;
	static volatile int64_t t17 = -1011902284633LL;

	t17 = ((x93/(x94&x95))^x96);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x97 = 1298970275761LLU;
	int64_t x98 = -1LL;
	int32_t x99 = -111164140;

	t18 = ((x97/(x98&x99))^x100);

	if (t18 != 351LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x105 = 50246U;
	static int32_t x106 = INT32_MIN;
	volatile int64_t t19 = -48165636410880LL;

	t19 = ((x105/(x106&x107))^x108);

	if (t19 != 32767LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x109 = -1;
	int16_t x110 = -3;
	static int64_t x111 = INT64_MIN;
	static volatile int8_t x112 = INT8_MIN;
	volatile int64_t t20 = 1129LL;

	t20 = ((x109/(x110&x111))^x112);

	if (t20 != -128LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x113 = INT8_MAX;
	uint16_t x115 = UINT16_MAX;
	int32_t x116 = INT32_MIN;

	t21 = ((x113/(x114&x115))^x116);

	if (t21 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x117 = -1;
	uint16_t x118 = UINT16_MAX;
	volatile uint8_t x119 = 9U;
	static int8_t x120 = INT8_MIN;
	int32_t t22 = 116969;

	t22 = ((x117/(x118&x119))^x120);

	if (t22 != -128) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x121 = INT16_MIN;
	volatile int64_t x122 = -14180570LL;
	static int16_t x123 = -1;
	static volatile int32_t x124 = -1;
	volatile int64_t t23 = 2346043367018LL;

	t23 = ((x121/(x122&x123))^x124);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x125 = 0U;
	volatile uint8_t x126 = 10U;
	int32_t x127 = -1;
	volatile uint32_t x128 = 13U;
	volatile uint32_t t24 = 173U;

	t24 = ((x125/(x126&x127))^x128);

	if (t24 != 13U) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x129 = 550106701577117LLU;
	volatile int32_t x130 = INT32_MIN;
	volatile int64_t x131 = -1LL;
	volatile uint64_t t25 = UINT64_MAX;

	t25 = ((x129/(x130&x131))^x132);

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x133 = INT64_MAX;
	static int16_t x134 = -1;
	int8_t x136 = INT8_MIN;
	static volatile int64_t t26 = -313LL;

	t26 = ((x133/(x134&x135))^x136);

	if (t26 != -128LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x139 = -1;
	volatile uint32_t x140 = UINT32_MAX;
	uint32_t t27 = UINT32_MAX;

	t27 = ((x137/(x138&x139))^x140);

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x141 = -26;
	static uint64_t x142 = 5366438029331150153LLU;
	volatile int32_t x144 = -474;
	uint64_t t28 = 54LLU;

	t28 = ((x141/(x142&x143))^x144);

	if (t28 != 18446744063818727207LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x145 = UINT32_MAX;
	static volatile int64_t x146 = 1LL;
	uint64_t x147 = 201442255LLU;
	static volatile uint64_t t29 = 1808711851559LLU;

	t29 = ((x145/(x146&x147))^x148);

	if (t29 != 4294965821LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x149 = INT32_MIN;
	volatile int64_t x150 = INT64_MAX;
	volatile uint8_t x151 = UINT8_MAX;
	uint32_t x152 = 10U;
	volatile int64_t t30 = -727602114643950779LL;

	t30 = ((x149/(x150&x151))^x152);

	if (t30 != -8421494LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x153 = -21;
	static int32_t x154 = 8;
	static int8_t x155 = -1;
	int64_t x156 = INT64_MAX;
	volatile int64_t t31 = 3569082692142599LL;

	t31 = ((x153/(x154&x155))^x156);

	if (t31 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x157 = INT32_MAX;
	static uint32_t x158 = 122114384U;
	volatile int16_t x159 = INT16_MAX;
	volatile int16_t x160 = INT16_MIN;
	uint32_t t32 = 54189U;

	t32 = ((x157/(x158&x159))^x160);

	if (t32 != 4294841085U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x161 = 1U;
	int16_t x162 = INT16_MAX;
	int8_t x163 = -1;
	int16_t x164 = -1;
	static int32_t t33 = 9;

	t33 = ((x161/(x162&x163))^x164);

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x165 = INT64_MIN;
	int64_t x166 = INT64_MAX;
	static int8_t x168 = INT8_MIN;
	static int64_t t34 = 22811640452251074LL;

	t34 = ((x165/(x166&x167))^x168);

	if (t34 != 127LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x173 = -1;
	volatile int8_t x174 = -1;
	int64_t x175 = INT64_MIN;
	int32_t x176 = 0;
	int64_t t35 = -3682LL;

	t35 = ((x173/(x174&x175))^x176);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x177 = 14;
	static int64_t x178 = 13932LL;
	int8_t x179 = -20;
	uint8_t x180 = UINT8_MAX;
	static int64_t t36 = 6376626LL;

	t36 = ((x177/(x178&x179))^x180);

	if (t36 != 255LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x181 = -1;
	int16_t x182 = INT16_MIN;
	static int32_t x183 = INT32_MAX;
	static uint32_t x184 = 622U;
	volatile uint32_t t37 = 24147U;

	t37 = ((x181/(x182&x183))^x184);

	if (t37 != 622U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x185 = INT64_MIN;
	int64_t x186 = INT64_MAX;
	volatile int8_t x187 = -1;

	t38 = ((x185/(x186&x187))^x188);

	if (t38 != 2147483647LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x197 = INT16_MAX;
	uint32_t x198 = 67479U;
	static uint32_t x199 = 615526090U;
	static volatile uint64_t x200 = UINT64_MAX;

	t39 = ((x197/(x198&x199))^x200);

	if (t39 != 18446744073709551596LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x206 = -257;
	static uint32_t x207 = 1766931U;
	static int16_t x208 = -7;
	static uint32_t t40 = 22976226U;

	t40 = ((x205/(x206&x207))^x208);

	if (t40 != 4294967289U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x209 = 7U;
	volatile int64_t x210 = -160LL;
	int16_t x212 = 2690;
	static int64_t t41 = -3306926259183LL;

	t41 = ((x209/(x210&x211))^x212);

	if (t41 != 2690LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x217 = -1;
	uint32_t x218 = 26973U;
	static uint8_t x219 = 13U;
	static uint64_t x220 = 722463682LLU;
	volatile uint64_t t42 = 17607966212239050LLU;

	t42 = ((x217/(x218&x219))^x220);

	if (t42 != 952029393LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x221 = INT8_MIN;
	static int64_t x222 = -2198411471836LL;
	static int32_t x223 = -78079807;
	int64_t x224 = INT64_MIN;
	int64_t t43 = INT64_MIN;

	t43 = ((x221/(x222&x223))^x224);

	if (t43 != INT64_MIN) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x229 = UINT16_MAX;
	volatile uint16_t x230 = 2896U;
	int16_t x231 = -1;
	volatile int64_t t44 = -23026499466LL;

	t44 = ((x229/(x230&x231))^x232);

	if (t44 != -9223372036854775786LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x234 = -106;
	uint32_t x235 = 310065U;
	int16_t x236 = -1;
	static uint32_t t45 = UINT32_MAX;

	t45 = ((x233/(x234&x235))^x236);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x241 = -1LL;
	static uint16_t x242 = 1U;
	static uint32_t x243 = UINT32_MAX;
	int16_t x244 = INT16_MIN;
	static volatile int64_t t46 = -19661319767LL;

	t46 = ((x241/(x242&x243))^x244);

	if (t46 != 32767LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x245 = 91U;
	volatile int64_t x246 = -1LL;
	int8_t x247 = INT8_MIN;
	volatile uint32_t x248 = 66U;
	int64_t t47 = -178792917290839789LL;

	t47 = ((x245/(x246&x247))^x248);

	if (t47 != 66LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x253 = 1098365764351532274LL;
	int64_t x254 = INT64_MAX;
	int64_t x255 = -74096943411LL;
	int32_t x256 = -1;
	static volatile int64_t t48 = 2171345986630LL;

	t48 = ((x253/(x254&x255))^x256);

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x258 = 29567889137LLU;
	int8_t x259 = -1;
	volatile int64_t x260 = INT64_MIN;
	uint64_t t49 = 15LLU;

	t49 = ((x257/(x258&x259))^x260);

	if (t49 != 9223372037478653420LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x265 = UINT8_MAX;
	static int64_t x266 = 3525LL;
	int64_t x267 = INT64_MAX;
	int64_t x268 = -1LL;
	int64_t t50 = 32476695LL;

	t50 = ((x265/(x266&x267))^x268);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x269 = UINT8_MAX;
	static int32_t x270 = INT32_MAX;
	int32_t x271 = -24613344;
	static volatile uint8_t x272 = 1U;
	volatile int32_t t51 = 0;

	t51 = ((x269/(x270&x271))^x272);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x273 = INT16_MIN;
	volatile int8_t x274 = 18;
	int16_t x275 = INT16_MAX;
	static uint64_t x276 = UINT64_MAX;

	t52 = ((x273/(x274&x275))^x276);

	if (t52 != 1819LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x277 = INT32_MIN;
	int8_t x278 = -1;
	static uint64_t x279 = UINT64_MAX;
	static int32_t x280 = -25084039;
	uint64_t t53 = 3531777979LLU;

	t53 = ((x277/(x278&x279))^x280);

	if (t53 != 18446744073684467577LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x281 = -56;
	int16_t x284 = -742;

	t54 = ((x281/(x282&x283))^x284);

	if (t54 != -742LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x285 = UINT16_MAX;
	volatile int32_t x286 = 379;
	int16_t x287 = INT16_MAX;
	volatile uint32_t x288 = UINT32_MAX;
	static uint32_t t55 = 362915285U;

	t55 = ((x285/(x286&x287))^x288);

	if (t55 != 4294967123U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x289 = 0U;
	uint16_t x290 = UINT16_MAX;
	volatile int64_t x291 = -1LL;
	volatile int64_t t56 = 3865744645201LL;

	t56 = ((x289/(x290&x291))^x292);

	if (t56 != 7LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int64_t x294 = -3050055474146357LL;
	int16_t x295 = -1;
	static uint8_t x296 = UINT8_MAX;

	t57 = ((x293/(x294&x295))^x296);

	if (t57 != 255LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x297 = 11641U;
	volatile int64_t x298 = INT64_MIN;
	int16_t x299 = -1;
	volatile int32_t x300 = INT32_MIN;
	volatile int64_t t58 = 104320242626842454LL;

	t58 = ((x297/(x298&x299))^x300);

	if (t58 != -2147483648LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x301 = UINT32_MAX;
	volatile int64_t x302 = INT64_MIN;
	volatile int16_t x303 = INT16_MIN;
	static int32_t x304 = INT32_MIN;
	static volatile int64_t t59 = 5586229749265LL;

	t59 = ((x301/(x302&x303))^x304);

	if (t59 != -2147483648LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x305 = -23441674224641814LL;
	volatile uint8_t x306 = 20U;
	volatile uint16_t x308 = UINT16_MAX;
	static int64_t t60 = -8LL;

	t60 = ((x305/(x306&x307))^x308);

	if (t60 != -1172083711260583LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x309 = INT16_MAX;
	int32_t x310 = -1;
	int32_t x311 = -337266;
	volatile uint32_t x312 = UINT32_MAX;
	static uint32_t t61 = UINT32_MAX;

	t61 = ((x309/(x310&x311))^x312);

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x313 = 77U;
	uint32_t x314 = UINT32_MAX;
	static volatile uint16_t x315 = 427U;

	t62 = ((x313/(x314&x315))^x316);

	if (t62 != 7U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x317 = 411;
	static uint32_t x319 = 101364842U;
	uint8_t x320 = 1U;
	uint32_t t63 = 15U;

	t63 = ((x317/(x318&x319))^x320);

	if (t63 != 13U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x321 = -1;
	int8_t x322 = INT8_MIN;
	uint32_t x323 = 25749U;
	volatile int64_t x324 = INT64_MIN;
	int64_t t64 = -149102499362300LL;

	t64 = ((x321/(x322&x323))^x324);

	if (t64 != -9223372036854608871LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x325 = INT8_MAX;
	uint16_t x326 = UINT16_MAX;
	int64_t x327 = INT64_MAX;
	int32_t x328 = -1;
	int64_t t65 = 98LL;

	t65 = ((x325/(x326&x327))^x328);

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x332 = UINT32_MAX;
	static volatile int64_t t66 = 26026587966355LL;

	t66 = ((x329/(x330&x331))^x332);

	if (t66 != -545407658434233LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x334 = INT8_MIN;
	uint64_t x335 = 2543409233LLU;
	uint32_t x336 = 1942198U;
	volatile uint64_t t67 = 643449LLU;

	t67 = ((x333/(x334&x335))^x336);

	if (t67 != 7253115728LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x346 = 529813186138326285LLU;
	static uint64_t x348 = 5LLU;
	uint64_t t68 = 38316634766LLU;

	t68 = ((x345/(x346&x347))^x348);

	if (t68 != 4611686018427387898LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x349 = 0;
	int64_t x350 = 134353800LL;
	volatile int16_t x351 = 60;
	volatile int16_t x352 = 44;

	t69 = ((x349/(x350&x351))^x352);

	if (t69 != 44LL) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x353 = INT8_MIN;
	int32_t x354 = -1;
	int16_t x355 = 3507;
	int16_t x356 = -1;
	int32_t t70 = 37;

	t70 = ((x353/(x354&x355))^x356);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x357 = INT32_MIN;
	static int16_t x358 = 67;
	uint64_t x359 = UINT64_MAX;
	uint32_t x360 = 15450U;
	uint64_t t71 = 138403758994467869LLU;

	t71 = ((x357/(x358&x359))^x360);

	if (t71 != 275324538381526416LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x361 = -1;
	int8_t x362 = -15;
	static uint16_t x363 = 9U;
	uint32_t x364 = 839564140U;
	uint32_t t72 = 968569U;

	t72 = ((x361/(x362&x363))^x364);

	if (t72 != 3455403155U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x365 = 409079725U;
	int32_t x366 = INT32_MIN;
	static int32_t x367 = -4;
	uint8_t x368 = 0U;

	t73 = ((x365/(x366&x367))^x368);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x373 = -27;
	int32_t x374 = 47970;
	uint32_t x375 = 1906300U;
	int64_t x376 = INT64_MIN;
	static volatile int64_t t74 = -1LL;

	t74 = ((x373/(x374&x375))^x376);

	if (t74 != -9223372036853862763LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x377 = 1326U;
	int16_t x379 = INT16_MIN;
	volatile int8_t x380 = INT8_MIN;
	static volatile int32_t t75 = -15374331;

	t75 = ((x377/(x378&x379))^x380);

	if (t75 != -128) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x381 = -221417644;
	uint64_t x382 = 31613LLU;
	volatile uint64_t x383 = 100476100292892686LLU;
	int16_t x384 = INT16_MIN;
	static uint64_t t76 = 15LLU;

	t76 = ((x381/(x382&x383))^x384);

	if (t76 != 18445925673351362521LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x385 = INT16_MIN;
	static int8_t x386 = INT8_MAX;
	int32_t t77 = 10;

	t77 = ((x385/(x386&x387))^x388);

	if (t77 != 257) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x389 = -254468824;
	int8_t x390 = 1;
	uint64_t x391 = UINT64_MAX;
	uint64_t t78 = 1061963012LLU;

	t78 = ((x389/(x390&x391))^x392);

	if (t78 != 18446744073455082839LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x394 = INT32_MAX;
	uint8_t x395 = 86U;
	int32_t x396 = 210;

	t79 = ((x393/(x394&x395))^x396);

	if (t79 != -431) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x397 = INT8_MAX;
	int8_t x398 = INT8_MAX;
	volatile int32_t t80 = 435097;

	t80 = ((x397/(x398&x399))^x400);

	if (t80 != 5) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x401 = 47LLU;
	static volatile int32_t x402 = -30865;
	int32_t x403 = 136135987;
	int64_t x404 = INT64_MIN;
	volatile uint64_t t81 = 11623LLU;

	t81 = ((x401/(x402&x403))^x404);

	if (t81 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile uint8_t x405 = 0U;
	int64_t x406 = -248516714LL;
	int64_t x407 = INT64_MAX;
	int32_t x408 = -13;
	int64_t t82 = 2819LL;

	t82 = ((x405/(x406&x407))^x408);

	if (t82 != -13LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x409 = 6481572437702666327LLU;
	volatile int8_t x410 = -39;
	uint16_t x411 = 1004U;
	static volatile uint64_t t83 = 3710794789125707875LLU;

	t83 = ((x409/(x410&x411))^x412);

	if (t83 != 6695839236302808LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x413 = -879159184519146LL;
	int16_t x414 = INT16_MIN;
	static int64_t x415 = INT64_MAX;
	int32_t x416 = INT32_MIN;
	static int64_t t84 = 821069472780435116LL;

	t84 = ((x413/(x414&x415))^x416);

	if (t84 != -2147483648LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x418 = -1;
	int64_t x419 = INT64_MIN;
	static int16_t x420 = -1;
	int64_t t85 = -685180LL;

	t85 = ((x417/(x418&x419))^x420);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x421 = 2U;
	static uint64_t x422 = UINT64_MAX;
	int64_t x424 = INT64_MAX;
	uint64_t t86 = 381068431LLU;

	t86 = ((x421/(x422&x423))^x424);

	if (t86 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x429 = INT16_MIN;
	int8_t x430 = INT8_MIN;
	int8_t x431 = INT8_MIN;
	int8_t x432 = -1;
	int32_t t87 = 1540075;

	t87 = ((x429/(x430&x431))^x432);

	if (t87 != -257) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x434 = INT16_MAX;
	int8_t x435 = -1;
	volatile uint64_t t88 = 19935097099LLU;

	t88 = ((x433/(x434&x435))^x436);

	if (t88 != 562967133816299LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x437 = 0;
	static volatile uint32_t x438 = 1926402U;
	uint32_t x439 = 7456191U;
	static int8_t x440 = INT8_MAX;
	volatile uint32_t t89 = 13U;

	t89 = ((x437/(x438&x439))^x440);

	if (t89 != 127U) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x441 = 6;
	int16_t x443 = -1;
	uint32_t t90 = 202464U;

	t90 = ((x441/(x442&x443))^x444);

	if (t90 != 4294965335U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x450 = 214U;
	static int64_t x451 = INT64_MAX;
	int32_t x452 = -40871127;
	static int64_t t91 = 56421175025275746LL;

	t91 = ((x449/(x450&x451))^x452);

	if (t91 != -43099869362463022LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x453 = 10171400083258626LL;
	int32_t x454 = -694;
	static int16_t x456 = -11005;

	t92 = ((x453/(x454&x455))^x456);

	if (t92 != 14614080572861LL) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint64_t x457 = 31358187900LLU;
	volatile uint16_t x459 = UINT16_MAX;
	static uint8_t x460 = 11U;
	volatile uint64_t t93 = 234310795794056290LLU;

	t93 = ((x457/(x458&x459))^x460);

	if (t93 != 485047LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x461 = INT8_MIN;
	int8_t x462 = INT8_MAX;
	volatile int8_t x463 = INT8_MAX;

	t94 = ((x461/(x462&x463))^x464);

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x468 = 27851252;
	int64_t t95 = -1LL;

	t95 = ((x465/(x466&x467))^x468);

	if (t95 != 27851252LL) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x469 = 7;
	uint64_t x470 = 36245912598LLU;
	static volatile int8_t x472 = 3;
	static volatile uint64_t t96 = 125488591LLU;

	t96 = ((x469/(x470&x471))^x472);

	if (t96 != 3LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x473 = -1;
	static uint32_t x474 = UINT32_MAX;
	int8_t x475 = INT8_MIN;
	static uint8_t x476 = UINT8_MAX;
	uint32_t t97 = 404850488U;

	t97 = ((x473/(x474&x475))^x476);

	if (t97 != 254U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x479 = UINT64_MAX;
	volatile int16_t x480 = INT16_MIN;
	static uint64_t t98 = 28073326206LLU;

	t98 = ((x477/(x478&x479))^x480);

	if (t98 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x481 = -1;
	int16_t x482 = INT16_MAX;
	uint64_t x484 = 21467LLU;
	volatile uint64_t t99 = 1365660825599663LLU;

	t99 = ((x481/(x482&x483))^x484);

	if (t99 != 21467LLU) { NG(); } else { ; }
	
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

