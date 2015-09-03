#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = -1;
int16_t x11 = 14;
int32_t x13 = INT32_MIN;
volatile int32_t x14 = INT32_MAX;
int8_t x16 = -1;
uint8_t x20 = UINT8_MAX;
uint16_t x24 = UINT16_MAX;
int32_t x25 = INT32_MIN;
volatile int64_t x28 = INT64_MIN;
int16_t x29 = -1;
int16_t x30 = INT16_MAX;
int64_t x33 = INT64_MIN;
uint8_t x37 = 110U;
volatile int32_t x40 = -248448661;
volatile uint64_t t11 = 1301084437840027LLU;
int32_t x63 = INT32_MIN;
static int16_t x65 = 2;
volatile int8_t x67 = INT8_MIN;
int64_t x80 = -16087LL;
volatile int64_t t18 = -2289908926LL;
volatile int8_t x85 = INT8_MIN;
static int32_t x86 = 3415;
static int64_t x92 = 8165LL;
int8_t x104 = INT8_MAX;
int32_t x106 = 378413952;
volatile uint64_t x109 = UINT64_MAX;
uint16_t x111 = 41U;
int16_t x112 = INT16_MIN;
static volatile uint64_t t25 = 59800327959LLU;
uint32_t x115 = 3858U;
uint32_t x117 = 0U;
volatile int64_t t28 = 303808716LL;
int8_t x132 = INT8_MAX;
volatile int32_t t30 = -15512807;
int32_t x143 = -5;
int8_t x144 = INT8_MAX;
int64_t x161 = INT64_MAX;
static volatile int64_t t35 = -654LL;
uint64_t x169 = 21LLU;
uint32_t x174 = 12146U;
uint32_t x186 = UINT32_MAX;
int8_t x188 = INT8_MAX;
volatile uint8_t x189 = 45U;
volatile int64_t t42 = 1714555789639LL;
static int32_t x193 = INT32_MAX;
static int64_t x198 = INT64_MAX;
uint8_t x201 = 79U;
volatile int64_t x206 = INT64_MIN;
int32_t x207 = INT32_MAX;
int8_t x211 = 1;
int16_t x215 = INT16_MAX;
volatile int64_t t48 = -165LL;
int64_t x225 = INT64_MIN;
int16_t x228 = -114;
volatile int64_t t54 = -1360496742778113LL;
static uint8_t x243 = UINT8_MAX;
volatile int32_t t55 = 4029;
static int32_t x246 = -1716;
static int64_t x248 = -3614562916994888LL;
uint64_t x257 = 2583892LLU;
uint64_t t59 = 7668322594307329LLU;
uint8_t x283 = 1U;
volatile int16_t x291 = INT16_MAX;
int8_t x292 = INT8_MIN;
int8_t x295 = -23;
int64_t x296 = INT64_MIN;
uint32_t t68 = 47198U;
static int16_t x312 = INT16_MAX;
uint32_t x327 = 87U;
int64_t x329 = -1LL;
uint32_t x334 = 7U;
uint64_t t76 = 45784295955LLU;
int32_t x338 = -101;
uint64_t x339 = UINT64_MAX;
static int8_t x340 = -1;
volatile int64_t x346 = 59445LL;
int32_t x356 = -1;
volatile uint64_t t81 = 11169535713LLU;
int64_t x357 = INT64_MAX;
int64_t x365 = INT64_MIN;
static volatile int32_t x371 = -23980043;
int16_t x373 = INT16_MAX;
int32_t x377 = INT32_MAX;
volatile int16_t x380 = -1;
volatile int64_t x381 = INT64_MIN;
int16_t x383 = -1;
uint32_t x388 = 664U;
volatile int8_t x390 = 5;
int16_t x392 = 13;
volatile int16_t x394 = 57;
int8_t x398 = 19;
uint8_t x401 = 1U;
volatile int64_t t93 = 1LL;
static volatile uint16_t x405 = 1304U;
volatile int8_t x406 = INT8_MIN;
uint16_t x408 = 73U;
int16_t x409 = -1;
int64_t x412 = 1821568LL;
static int64_t t95 = -30145019LL;
int64_t x414 = -5155LL;
static int8_t x417 = INT8_MIN;
int64_t x429 = INT64_MIN;


void f0(void) {
	int16_t x5 = INT16_MIN;
	static int32_t x6 = INT32_MIN;
	uint16_t x7 = 483U;
	int64_t x8 = 241359506210LL;
	int64_t t0 = 668850196LL;

	t0 = (x5/(x6&(x7|x8)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x10 = UINT8_MAX;
	uint32_t x12 = UINT32_MAX;
	volatile uint32_t t1 = 7U;

	t1 = (x9/(x10&(x11|x12)));

	if (t1 != 16843009U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x15 = 347622538394LLU;
	volatile uint64_t t2 = 59310133187952501LLU;

	t2 = (x13/(x14&(x15|x16)));

	if (t2 != 8589934595LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = UINT16_MAX;
	int64_t x18 = -458362162LL;
	volatile int16_t x19 = -2448;
	volatile int64_t t3 = -367263459LL;

	t3 = (x17/(x18&(x19|x20)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x21 = 1U;
	volatile int64_t x22 = -6725LL;
	volatile uint64_t x23 = UINT64_MAX;
	volatile uint64_t t4 = 926099LLU;

	t4 = (x21/(x22&(x23|x24)));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x26 = INT8_MIN;
	int8_t x27 = -1;
	static volatile int64_t t5 = -9LL;

	t5 = (x25/(x26&(x27|x28)));

	if (t5 != 16777216LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x31 = -1;
	int32_t x32 = INT32_MIN;
	volatile int32_t t6 = 93;

	t6 = (x29/(x30&(x31|x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x34 = INT32_MAX;
	int8_t x35 = -1;
	int16_t x36 = INT16_MIN;
	static volatile int64_t t7 = 0LL;

	t7 = (x33/(x34&(x35|x36)));

	if (t7 != -4294967298LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x38 = -4000;
	uint8_t x39 = 4U;
	volatile int32_t t8 = 274860;

	t8 = (x37/(x38&(x39|x40)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x41 = UINT8_MAX;
	uint64_t x42 = 108435630741LLU;
	static int64_t x43 = INT64_MIN;
	int32_t x44 = -1;
	static uint64_t t9 = 39923735437575098LLU;

	t9 = (x41/(x42&(x43|x44)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x45 = 506134821U;
	uint32_t x46 = 72265U;
	uint64_t x47 = 17029738480253108LLU;
	uint32_t x48 = 28205U;
	volatile uint64_t t10 = 166322LLU;

	t10 = (x45/(x46&(x47|x48)));

	if (t10 != 7010LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = UINT64_MAX;
	uint32_t x50 = 387994826U;
	volatile uint16_t x51 = UINT16_MAX;
	volatile int64_t x52 = INT64_MIN;

	t11 = (x49/(x50&(x51|x52)));

	if (t11 != 849845391767693LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = -1LL;
	int8_t x54 = -1;
	int64_t x55 = INT64_MAX;
	uint64_t x56 = 18619791233666979LLU;
	static uint64_t t12 = 117090070560809177LLU;

	t12 = (x53/(x54&(x55|x56)));

	if (t12 != 2LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x57 = 3463997039LLU;
	int64_t x58 = INT64_MIN;
	int32_t x59 = -1;
	static int8_t x60 = INT8_MIN;
	static uint64_t t13 = 720660213263367LLU;

	t13 = (x57/(x58&(x59|x60)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MIN;
	volatile uint64_t x62 = UINT64_MAX;
	int16_t x64 = INT16_MIN;
	uint64_t t14 = 268294107LLU;

	t14 = (x61/(x62&(x63|x64)));

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x66 = INT8_MIN;
	volatile int32_t x68 = 9770;
	volatile int32_t t15 = -26590384;

	t15 = (x65/(x66&(x67|x68)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = -72;
	static uint32_t x70 = 576578115U;
	int16_t x71 = 5;
	uint64_t x72 = UINT64_MAX;
	uint64_t t16 = 1079198400610927284LLU;

	t16 = (x69/(x70&(x71|x72)));

	if (t16 != 31993486387LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MIN;
	uint64_t x74 = 2005234689480LLU;
	uint64_t x75 = 5LLU;
	int32_t x76 = INT32_MIN;
	volatile uint64_t t17 = 15436881LLU;

	t17 = (x73/(x74&(x75|x76)));

	if (t17 != 9206789LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = UINT16_MAX;
	int64_t x78 = -8LL;
	uint8_t x79 = UINT8_MAX;

	t18 = (x77/(x78&(x79|x80)));

	if (t18 != -4LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = 12U;
	volatile int32_t x82 = INT32_MIN;
	int8_t x83 = INT8_MAX;
	int8_t x84 = INT8_MIN;
	volatile int32_t t19 = -3523242;

	t19 = (x81/(x82&(x83|x84)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint8_t x87 = 13U;
	volatile uint16_t x88 = 246U;
	static int32_t t20 = 216859;

	t20 = (x85/(x86&(x87|x88)));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MIN;
	static uint64_t x90 = 3808665674039305LLU;
	int64_t x91 = -1LL;
	static volatile uint64_t t21 = 1930LLU;

	t21 = (x89/(x90&(x91|x92)));

	if (t21 != 4843LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x97 = 3113U;
	static int32_t x98 = -12;
	uint32_t x99 = UINT32_MAX;
	int64_t x100 = -1LL;
	volatile int64_t t22 = 222306LL;

	t22 = (x97/(x98&(x99|x100)));

	if (t22 != -259LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x101 = UINT32_MAX;
	int64_t x102 = -1LL;
	int8_t x103 = -3;
	static int64_t t23 = -391LL;

	t23 = (x101/(x102&(x103|x104)));

	if (t23 != -4294967295LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x105 = INT64_MIN;
	uint16_t x107 = UINT16_MAX;
	static volatile uint8_t x108 = UINT8_MAX;
	int64_t t24 = 72814374352087LL;

	t24 = (x105/(x106&(x107|x108)));

	if (t24 != -1014895690675041LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x110 = UINT16_MAX;

	t25 = (x109/(x110&(x111|x112)));

	if (t25 != 562246459011538LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = -1;
	int32_t x114 = INT32_MAX;
	int16_t x116 = INT16_MIN;
	uint32_t t26 = 2204942U;

	t26 = (x113/(x114&(x115|x116)));

	if (t26 != 2U) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x118 = -97014739;
	int32_t x119 = 26217825;
	int8_t x120 = 2;
	uint32_t t27 = 5U;

	t27 = (x117/(x118&(x119|x120)));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x121 = -518;
	int64_t x122 = INT64_MIN;
	int64_t x123 = INT64_MIN;
	uint16_t x124 = 21U;

	t28 = (x121/(x122&(x123|x124)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x125 = UINT32_MAX;
	static volatile int32_t x126 = 4308616;
	static int32_t x127 = -1;
	int64_t x128 = 4418651446182LL;
	volatile int64_t t29 = -98677451LL;

	t29 = (x125/(x126&(x127|x128)));

	if (t29 != 996LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x129 = -1;
	int8_t x130 = INT8_MIN;
	int32_t x131 = 475801;

	t30 = (x129/(x130&(x131|x132)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x137 = 5680LLU;
	int8_t x138 = INT8_MIN;
	volatile int16_t x139 = INT16_MIN;
	int64_t x140 = INT64_MIN;
	volatile uint64_t t31 = 126LLU;

	t31 = (x137/(x138&(x139|x140)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x141 = INT32_MIN;
	volatile int16_t x142 = 566;
	int32_t t32 = 0;

	t32 = (x141/(x142&(x143|x144)));

	if (t32 != -3794140) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x145 = INT64_MAX;
	uint64_t x146 = UINT64_MAX;
	int64_t x147 = INT64_MIN;
	volatile int32_t x148 = INT32_MAX;
	uint64_t t33 = 1LLU;

	t33 = (x145/(x146&(x147|x148)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x157 = 1;
	int16_t x158 = -1;
	static uint8_t x159 = 17U;
	int64_t x160 = 12408LL;
	int64_t t34 = 444512574799LL;

	t34 = (x157/(x158&(x159|x160)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x162 = -1;
	int8_t x163 = -1;
	int16_t x164 = INT16_MIN;

	t35 = (x161/(x162&(x163|x164)));

	if (t35 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int16_t x165 = INT16_MAX;
	volatile int64_t x166 = -6935164324113652LL;
	static uint8_t x167 = 78U;
	int16_t x168 = -34;
	volatile int64_t t36 = 8973079737LL;

	t36 = (x165/(x166&(x167|x168)));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x170 = -7;
	static int8_t x171 = INT8_MIN;
	static volatile uint16_t x172 = 333U;
	uint64_t t37 = 6983388LLU;

	t37 = (x169/(x170&(x171|x172)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = INT8_MAX;
	uint64_t x175 = 2934909389953733336LLU;
	int8_t x176 = -3;
	uint64_t t38 = 46101LLU;

	t38 = (x173/(x174&(x175|x176)));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x177 = 27606226U;
	uint32_t x178 = 17U;
	int16_t x179 = 1;
	static volatile int64_t x180 = -1LL;
	int64_t t39 = 33137031906200160LL;

	t39 = (x177/(x178&(x179|x180)));

	if (t39 != 1623895LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x181 = 4618U;
	static volatile int8_t x182 = INT8_MAX;
	volatile uint32_t x183 = 10U;
	uint32_t x184 = UINT32_MAX;
	volatile uint32_t t40 = 60U;

	t40 = (x181/(x182&(x183|x184)));

	if (t40 != 36U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x185 = INT32_MIN;
	volatile int8_t x187 = -2;
	volatile uint32_t t41 = 7013U;

	t41 = (x185/(x186&(x187|x188)));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x190 = -1LL;
	static uint8_t x191 = 0U;
	uint16_t x192 = 5U;

	t42 = (x189/(x190&(x191|x192)));

	if (t42 != 9LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x194 = INT16_MIN;
	static int16_t x195 = -1;
	int32_t x196 = -1;
	int32_t t43 = -32;

	t43 = (x193/(x194&(x195|x196)));

	if (t43 != -65535) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = -1LL;
	int64_t x199 = 370211668LL;
	int32_t x200 = -1;
	int64_t t44 = -310LL;

	t44 = (x197/(x198&(x199|x200)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x202 = 39763U;
	uint8_t x203 = UINT8_MAX;
	uint32_t x204 = UINT32_MAX;
	volatile uint32_t t45 = 121U;

	t45 = (x201/(x202&(x203|x204)));

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = INT16_MAX;
	int8_t x208 = INT8_MIN;
	int64_t t46 = 870886412LL;

	t46 = (x205/(x206&(x207|x208)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x209 = INT32_MAX;
	static uint32_t x210 = UINT32_MAX;
	uint16_t x212 = 452U;
	volatile uint32_t t47 = 1602U;

	t47 = (x209/(x210&(x211|x212)));

	if (t47 != 4740582U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x213 = 0;
	int64_t x214 = -11053446LL;
	int8_t x216 = -21;

	t48 = (x213/(x214&(x215|x216)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x217 = 731U;
	int32_t x218 = -1;
	uint16_t x219 = 3510U;
	static int64_t x220 = INT64_MIN;
	int64_t t49 = 71538412LL;

	t49 = (x217/(x218&(x219|x220)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x221 = -1LL;
	int16_t x222 = INT16_MIN;
	int16_t x223 = -22;
	int32_t x224 = 1;
	volatile int64_t t50 = -1LL;

	t50 = (x221/(x222&(x223|x224)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x226 = INT32_MIN;
	int32_t x227 = -1;
	volatile int64_t t51 = -12241918557418LL;

	t51 = (x225/(x226&(x227|x228)));

	if (t51 != 4294967296LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint32_t x229 = UINT32_MAX;
	int32_t x230 = 124;
	int16_t x231 = INT16_MAX;
	volatile uint8_t x232 = 5U;
	volatile uint32_t t52 = 98215781U;

	t52 = (x229/(x230&(x231|x232)));

	if (t52 != 34636833U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x233 = -1LL;
	int8_t x234 = INT8_MIN;
	static uint8_t x235 = 10U;
	int64_t x236 = INT64_MIN;
	static int64_t t53 = -14792877LL;

	t53 = (x233/(x234&(x235|x236)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x237 = INT64_MAX;
	static int32_t x238 = 195875;
	static int64_t x239 = -44LL;
	int16_t x240 = INT16_MIN;

	t54 = (x237/(x238&(x239|x240)));

	if (t54 != 47096466691456LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = INT32_MIN;
	int8_t x242 = -1;
	int8_t x244 = INT8_MAX;

	t55 = (x241/(x242&(x243|x244)));

	if (t55 != -8421504) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x245 = 206616296LLU;
	volatile uint64_t x247 = 267695851809735LLU;
	volatile uint64_t t56 = 3680436064929LLU;

	t56 = (x245/(x246&(x247|x248)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x249 = 15071U;
	uint64_t x250 = UINT64_MAX;
	uint8_t x251 = 14U;
	uint16_t x252 = 2U;
	volatile uint64_t t57 = 1424392610927834382LLU;

	t57 = (x249/(x250&(x251|x252)));

	if (t57 != 1076LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x253 = UINT8_MAX;
	int16_t x254 = INT16_MAX;
	volatile int16_t x255 = -1;
	int64_t x256 = 1594434686723617527LL;
	int64_t t58 = 870730577666373088LL;

	t58 = (x253/(x254&(x255|x256)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x258 = -54;
	int16_t x259 = INT16_MIN;
	volatile int64_t x260 = INT64_MAX;

	t59 = (x257/(x258&(x259|x260)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x261 = -1;
	int8_t x262 = INT8_MIN;
	uint64_t x263 = 376LLU;
	static int64_t x264 = INT64_MAX;
	volatile uint64_t t60 = 4000469601001LLU;

	t60 = (x261/(x262&(x263|x264)));

	if (t60 != 2LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = 1637;
	int32_t x266 = 1592090;
	int8_t x267 = INT8_MAX;
	volatile int32_t x268 = -565298;
	int32_t t61 = 46;

	t61 = (x265/(x266&(x267|x268)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x269 = UINT32_MAX;
	uint32_t x270 = 7U;
	int8_t x271 = INT8_MIN;
	int64_t x272 = -1LL;
	int64_t t62 = 8962LL;

	t62 = (x269/(x270&(x271|x272)));

	if (t62 != 613566756LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x273 = -1LL;
	int8_t x274 = 15;
	static uint32_t x275 = 1828U;
	int64_t x276 = INT64_MIN;
	int64_t t63 = 4832551303366112LL;

	t63 = (x273/(x274&(x275|x276)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x281 = UINT32_MAX;
	uint64_t x282 = UINT64_MAX;
	uint16_t x284 = 13U;
	uint64_t t64 = 63LLU;

	t64 = (x281/(x282&(x283|x284)));

	if (t64 != 330382099LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x285 = 1609;
	int64_t x286 = -1LL;
	uint16_t x287 = 3761U;
	int16_t x288 = INT16_MIN;
	static volatile int64_t t65 = 37905190LL;

	t65 = (x285/(x286&(x287|x288)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x289 = INT16_MIN;
	int8_t x290 = INT8_MIN;
	int32_t t66 = -109;

	t66 = (x289/(x290&(x291|x292)));

	if (t66 != 256) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x293 = 1218028793529LLU;
	static volatile int32_t x294 = 3;
	volatile uint64_t t67 = 67LLU;

	t67 = (x293/(x294&(x295|x296)));

	if (t67 != 1218028793529LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x297 = INT32_MIN;
	static uint32_t x298 = 423U;
	uint8_t x299 = UINT8_MAX;
	int32_t x300 = 0;

	t68 = (x297/(x298&(x299|x300)));

	if (t68 != 12859183U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x301 = UINT32_MAX;
	int32_t x302 = -44573;
	static int32_t x303 = -1;
	volatile int16_t x304 = INT16_MIN;
	uint32_t t69 = 1947935U;

	t69 = (x301/(x302&(x303|x304)));

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x305 = 1635538LLU;
	uint8_t x306 = 69U;
	int8_t x307 = INT8_MIN;
	static volatile int64_t x308 = -1LL;
	volatile uint64_t t70 = 175LLU;

	t70 = (x305/(x306&(x307|x308)));

	if (t70 != 23703LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x309 = -1384;
	static volatile uint32_t x310 = 89203U;
	int16_t x311 = INT16_MAX;
	uint32_t t71 = 49838698U;

	t71 = (x309/(x310&(x311|x312)));

	if (t71 != 181474U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x313 = 902167U;
	int32_t x314 = INT32_MIN;
	uint64_t x315 = UINT64_MAX;
	static int64_t x316 = 587177380LL;
	uint64_t t72 = 0LLU;

	t72 = (x313/(x314&(x315|x316)));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x317 = 24U;
	int16_t x318 = -1;
	int16_t x319 = INT16_MAX;
	int64_t x320 = INT64_MAX;
	volatile int64_t t73 = -187826886LL;

	t73 = (x317/(x318&(x319|x320)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x325 = -1;
	int64_t x326 = -16462949LL;
	static uint16_t x328 = 10U;
	volatile int64_t t74 = -12500571231749850LL;

	t74 = (x325/(x326&(x327|x328)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x330 = INT8_MAX;
	int16_t x331 = INT16_MIN;
	int8_t x332 = -46;
	int64_t t75 = 1388LL;

	t75 = (x329/(x330&(x331|x332)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x333 = INT8_MAX;
	uint16_t x335 = UINT16_MAX;
	volatile uint64_t x336 = UINT64_MAX;

	t76 = (x333/(x334&(x335|x336)));

	if (t76 != 18LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint64_t x337 = 2214LLU;
	uint64_t t77 = 1600932011127458LLU;

	t77 = (x337/(x338&(x339|x340)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x341 = INT16_MIN;
	static uint8_t x342 = UINT8_MAX;
	int64_t x343 = -1LL;
	int64_t x344 = INT64_MAX;
	static volatile int64_t t78 = -83754LL;

	t78 = (x341/(x342&(x343|x344)));

	if (t78 != -128LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x345 = -1;
	int32_t x347 = 1;
	int16_t x348 = INT16_MAX;
	static volatile int64_t t79 = -63494095183136LL;

	t79 = (x345/(x346&(x347|x348)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x349 = -1;
	uint16_t x350 = UINT16_MAX;
	uint8_t x351 = 0U;
	int8_t x352 = INT8_MAX;
	volatile int32_t t80 = 229037;

	t80 = (x349/(x350&(x351|x352)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x353 = 3643U;
	volatile uint64_t x354 = 2664838LLU;
	volatile int64_t x355 = 600005LL;

	t81 = (x353/(x354&(x355|x356)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x358 = -1;
	uint16_t x359 = 4116U;
	static int32_t x360 = -99883;
	volatile int64_t t82 = -893124LL;

	t82 = (x357/(x358&(x359|x360)));

	if (t82 != -92341760228014LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x361 = INT8_MIN;
	static volatile int16_t x362 = INT16_MIN;
	static int32_t x363 = INT32_MIN;
	volatile int8_t x364 = -1;
	volatile int32_t t83 = -62508865;

	t83 = (x361/(x362&(x363|x364)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x366 = -1;
	int8_t x367 = -56;
	uint64_t x368 = 24600696503LLU;
	static volatile uint64_t t84 = 3768429935291LLU;

	t84 = (x365/(x366&(x367|x368)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x369 = 9382363037579LL;
	static int16_t x370 = INT16_MIN;
	int16_t x372 = INT16_MIN;
	int64_t t85 = 8022567230471685LL;

	t85 = (x369/(x370&(x371|x372)));

	if (t85 != -286326996LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x374 = 19587148U;
	int16_t x375 = INT16_MIN;
	volatile int64_t x376 = -1LL;
	static volatile int64_t t86 = -1068LL;

	t86 = (x373/(x374&(x375|x376)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x378 = INT16_MAX;
	int16_t x379 = INT16_MIN;
	volatile int32_t t87 = 164;

	t87 = (x377/(x378&(x379|x380)));

	if (t87 != 65538) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x382 = 13U;
	volatile uint16_t x384 = 231U;
	volatile int64_t t88 = -1LL;

	t88 = (x381/(x382&(x383|x384)));

	if (t88 != -709490156681136600LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x385 = INT32_MAX;
	volatile uint64_t x386 = 4589LLU;
	uint16_t x387 = 2U;
	static volatile uint64_t t89 = 810LLU;

	t89 = (x385/(x386&(x387|x388)));

	if (t89 != 15790320LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x389 = INT16_MAX;
	static int16_t x391 = 244;
	static volatile int32_t t90 = 356552506;

	t90 = (x389/(x390&(x391|x392)));

	if (t90 != 6553) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x393 = INT8_MIN;
	volatile uint16_t x395 = 7615U;
	int8_t x396 = INT8_MIN;
	volatile int32_t t91 = -8173;

	t91 = (x393/(x394&(x395|x396)));

	if (t91 != -2) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x397 = INT64_MIN;
	int32_t x399 = -1;
	int32_t x400 = -3835531;
	int64_t t92 = -31585966945034357LL;

	t92 = (x397/(x398&(x399|x400)));

	if (t92 != -485440633518672410LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x402 = INT32_MIN;
	int64_t x403 = INT64_MIN;
	static int64_t x404 = INT64_MIN;

	t93 = (x401/(x402&(x403|x404)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x407 = INT16_MIN;
	volatile int32_t t94 = -181422565;

	t94 = (x405/(x406&(x407|x408)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x410 = UINT16_MAX;
	int64_t x411 = INT64_MIN;

	t95 = (x409/(x410&(x411|x412)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x413 = 0;
	uint8_t x415 = 1U;
	volatile int64_t x416 = INT64_MAX;
	static int64_t t96 = -6773275898LL;

	t96 = (x413/(x414&(x415|x416)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x418 = INT16_MAX;
	int32_t x419 = INT32_MAX;
	int16_t x420 = INT16_MIN;
	volatile int32_t t97 = -68;

	t97 = (x417/(x418&(x419|x420)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x421 = -7762458;
	int64_t x422 = INT64_MAX;
	int8_t x423 = -1;
	volatile int16_t x424 = -1;
	static int64_t t98 = 37261160149LL;

	t98 = (x421/(x422&(x423|x424)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x430 = INT16_MIN;
	static volatile int8_t x431 = -1;
	uint16_t x432 = 77U;
	int64_t t99 = 574701300716521LL;

	t99 = (x429/(x430&(x431|x432)));

	if (t99 != 281474976710656LL) { NG(); } else { ; }
	
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

