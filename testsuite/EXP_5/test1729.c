#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x2 = 5U;
uint16_t x14 = 4317U;
int64_t x21 = -1LL;
int64_t x26 = INT64_MIN;
static uint16_t x35 = UINT16_MAX;
volatile int64_t t6 = 169373111894656693LL;
uint16_t x42 = UINT16_MAX;
static int16_t x44 = -1;
volatile int16_t x58 = -1;
int8_t x71 = 7;
int16_t x72 = INT16_MAX;
int64_t x78 = INT64_MAX;
uint8_t x91 = 15U;
volatile uint16_t x103 = 34U;
uint32_t x105 = 13736U;
int32_t x108 = INT32_MAX;
int16_t x115 = -1;
int32_t x119 = INT32_MAX;
volatile int8_t x120 = -29;
static int8_t x124 = INT8_MAX;
int16_t x126 = INT16_MIN;
uint16_t x127 = 1602U;
uint8_t x130 = UINT8_MAX;
volatile int32_t x136 = -1;
volatile uint64_t t28 = UINT64_MAX;
int16_t x168 = -2;
static int64_t x173 = INT64_MIN;
uint64_t x177 = 23473LLU;
volatile uint8_t x183 = 45U;
volatile int64_t x189 = INT64_MAX;
volatile int16_t x191 = INT16_MIN;
static int8_t x193 = INT8_MIN;
int8_t x196 = INT8_MIN;
int64_t x197 = INT64_MIN;
static uint16_t x198 = 1U;
volatile int8_t x200 = 0;
int64_t x202 = INT64_MIN;
static uint32_t x209 = 144005435U;
uint16_t x211 = 978U;
int8_t x213 = INT8_MIN;
int64_t t42 = 46272372879LL;
int64_t x219 = -1LL;
int32_t x220 = INT32_MIN;
static volatile int64_t t43 = -1839108001LL;
volatile uint8_t x227 = UINT8_MAX;
int8_t x234 = -9;
int32_t x240 = 489917;
int32_t t48 = INT32_MIN;
volatile int32_t x244 = -1;
int64_t x253 = INT64_MIN;
volatile int8_t x263 = INT8_MAX;
uint8_t x264 = 33U;
int8_t x265 = INT8_MIN;
int64_t x266 = -15005784600692LL;
int64_t t55 = 2263428287LL;
int16_t x284 = INT16_MIN;
int64_t t59 = 50673799433LL;
int64_t x301 = -1LL;
int64_t x316 = -1723008LL;
volatile uint64_t t67 = 95LLU;
int64_t x329 = INT64_MAX;
int8_t x331 = INT8_MIN;
uint64_t t70 = 6LLU;
uint64_t x347 = 13674112537068LLU;
int16_t x348 = -1;
volatile int8_t x354 = 9;
int16_t x356 = -1;
static int16_t x365 = 46;
int8_t x367 = -1;
static volatile int64_t t75 = -68387480732809436LL;
static int8_t x376 = INT8_MIN;
int32_t t77 = INT32_MIN;
int64_t x377 = INT64_MAX;
static volatile uint64_t t78 = 13707719069325172LLU;
int64_t x381 = 18158LL;
uint32_t x382 = 0U;
int64_t x392 = INT64_MAX;
volatile uint64_t x402 = UINT64_MAX;
volatile uint64_t x404 = 12064656918LLU;
uint64_t t83 = 345238193222LLU;
int8_t x409 = INT8_MIN;
static volatile int32_t x417 = -1;
int64_t x419 = -1LL;
int32_t x434 = -118833092;
int32_t x435 = -1;
static int64_t x436 = 0LL;
static uint64_t x447 = 2906502820397113LLU;
uint8_t x449 = UINT8_MAX;
static uint32_t t92 = 328170U;
static uint8_t x453 = UINT8_MAX;
int16_t x461 = -1;
static volatile uint32_t t95 = UINT32_MAX;
uint64_t x472 = UINT64_MAX;
uint16_t x484 = 248U;


void f0(void) {
	volatile int64_t x1 = INT64_MAX;
	uint32_t x3 = UINT32_MAX;
	static int16_t x4 = INT16_MIN;
	volatile int64_t t0 = -440624LL;

	t0 = (x1^((x2&x3)*x4));

	if (t0 != 9223372032559972351LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = UINT16_MAX;
	int8_t x6 = -1;
	int16_t x7 = -1;
	static int32_t x8 = -1;
	volatile int32_t t1 = 6;

	t1 = (x5^((x6&x7)*x8));

	if (t1 != 65534) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 194U;
	int32_t x15 = INT32_MIN;
	int16_t x16 = -6910;
	int32_t t2 = -1461;

	t2 = (x13^((x14&x15)*x16));

	if (t2 != 194) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = UINT8_MAX;
	uint8_t x18 = UINT8_MAX;
	static int16_t x19 = INT16_MAX;
	uint64_t x20 = UINT64_MAX;
	uint64_t t3 = 1033LLU;

	t3 = (x17^((x18&x19)*x20));

	if (t3 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x22 = INT16_MIN;
	uint64_t x23 = UINT64_MAX;
	int16_t x24 = INT16_MAX;
	uint64_t t4 = 3464683641810985738LLU;

	t4 = (x21^((x22&x23)*x24));

	if (t4 != 1073709055LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MIN;
	uint16_t x27 = 216U;
	int64_t x28 = -112568LL;
	volatile int64_t t5 = INT64_MIN;

	t5 = (x25^((x26&x27)*x28));

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = INT64_MIN;
	int8_t x34 = -37;
	int8_t x36 = 14;

	t6 = (x33^((x34&x35)*x36));

	if (t6 != -9223372036853858822LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x37 = INT16_MIN;
	int32_t x38 = -3;
	uint64_t x39 = 1313065499LLU;
	uint32_t x40 = 53846060U;
	volatile uint64_t t7 = 21987466038978LLU;

	t7 = (x37^((x38&x39)*x40));

	if (t7 != 18376040670174174284LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x41 = -1;
	static int64_t x43 = INT64_MIN;
	int64_t t8 = -668914196LL;

	t8 = (x41^((x42&x43)*x44));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x45 = 57U;
	volatile int64_t x46 = INT64_MIN;
	uint8_t x47 = 2U;
	volatile int32_t x48 = -1;
	int64_t t9 = 2564941LL;

	t9 = (x45^((x46&x47)*x48));

	if (t9 != 57LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x49 = -1LL;
	int64_t x50 = INT64_MIN;
	static uint32_t x51 = 244042U;
	uint32_t x52 = 18643608U;
	int64_t t10 = -404413705806086562LL;

	t10 = (x49^((x50&x51)*x52));

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = INT64_MIN;
	int8_t x54 = 1;
	static int8_t x55 = -3;
	uint16_t x56 = 11U;
	volatile int64_t t11 = 5631287129518LL;

	t11 = (x53^((x54&x55)*x56));

	if (t11 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = 15074454;
	int16_t x59 = INT16_MIN;
	static volatile int16_t x60 = -2;
	int32_t t12 = -8;

	t12 = (x57^((x58&x59)*x60));

	if (t12 != 15139990) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x65 = 0U;
	int8_t x66 = -1;
	volatile uint32_t x67 = UINT32_MAX;
	uint8_t x68 = UINT8_MAX;
	uint32_t t13 = 1591U;

	t13 = (x65^((x66&x67)*x68));

	if (t13 != 4294967041U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = INT16_MAX;
	uint64_t x70 = 20065163435151134LLU;
	volatile uint64_t t14 = 1390281497118LLU;

	t14 = (x69^((x70&x71)*x72));

	if (t14 != 163845LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x77 = INT16_MIN;
	static uint8_t x79 = 1U;
	static int64_t x80 = -57114622LL;
	int64_t t15 = 3683706448570129210LL;

	t15 = (x77^((x78&x79)*x80));

	if (t15 != 57081858LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x89 = 27U;
	int16_t x90 = INT16_MIN;
	int64_t x92 = 16595147182800LL;
	volatile int64_t t16 = -386638LL;

	t16 = (x89^((x90&x91)*x92));

	if (t16 != 27LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x97 = 968729384766291096LL;
	int16_t x98 = INT16_MIN;
	static uint16_t x99 = UINT16_MAX;
	int8_t x100 = INT8_MAX;
	volatile int64_t t17 = 2711465313662571LL;

	t17 = (x97^((x98&x99)*x100));

	if (t17 != 968729384762850456LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x101 = 31234147800423682LLU;
	int32_t x102 = INT32_MIN;
	int16_t x104 = INT16_MIN;
	volatile uint64_t t18 = 63372830LLU;

	t18 = (x101^((x102&x103)*x104));

	if (t18 != 31234147800423682LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x106 = UINT16_MAX;
	int64_t x107 = -1LL;
	int64_t t19 = 119753LL;

	t19 = (x105^((x106&x107)*x108));

	if (t19 != 140735340819881LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x113 = INT32_MIN;
	static uint32_t x114 = UINT32_MAX;
	volatile uint32_t x116 = 475336U;
	uint32_t t20 = 1119658214U;

	t20 = (x113^((x114&x115)*x116));

	if (t20 != 2147008312U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x117 = 667U;
	int16_t x118 = INT16_MAX;
	int32_t t21 = -7;

	t21 = (x117^((x118&x119)*x120));

	if (t21 != -949626) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x121 = 104U;
	static int32_t x122 = INT32_MIN;
	static uint16_t x123 = 30U;
	int32_t t22 = -828;

	t22 = (x121^((x122&x123)*x124));

	if (t22 != 104) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x125 = 7LL;
	volatile uint32_t x128 = 449U;
	static volatile int64_t t23 = 46LL;

	t23 = (x125^((x126&x127)*x128));

	if (t23 != 7LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x129 = UINT8_MAX;
	volatile uint64_t x131 = 369013777245274LLU;
	uint64_t x132 = UINT64_MAX;
	uint64_t t24 = 43289LLU;

	t24 = (x129^((x130&x131)*x132));

	if (t24 != 18446744073709551449LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint16_t x133 = UINT16_MAX;
	int8_t x134 = INT8_MIN;
	uint64_t x135 = UINT64_MAX;
	uint64_t t25 = 3164573LLU;

	t25 = (x133^((x134&x135)*x136));

	if (t25 != 65407LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x137 = INT32_MIN;
	uint64_t x138 = 3137970LLU;
	int64_t x139 = -1LL;
	int16_t x140 = 124;
	volatile uint64_t t26 = 74217454LLU;

	t26 = (x137^((x138&x139)*x140));

	if (t26 != 18446744071951176248LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x145 = INT16_MIN;
	static int64_t x146 = INT64_MAX;
	int64_t x147 = 7421204429677030LL;
	static volatile int16_t x148 = -1;
	volatile int64_t t27 = 353812622445LL;

	t27 = (x145^((x146&x147)*x148));

	if (t27 != 7421204429692442LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x153 = UINT64_MAX;
	uint16_t x154 = UINT16_MAX;
	int32_t x155 = INT32_MIN;
	uint64_t x156 = 17635201LLU;

	t28 = (x153^((x154&x155)*x156));

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x157 = 70U;
	static int64_t x158 = -61185093LL;
	int32_t x159 = -6;
	volatile int8_t x160 = INT8_MAX;
	static int64_t t29 = -7432LL;

	t29 = (x157^((x158&x159)*x160));

	if (t29 != -7770507008LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x161 = INT64_MIN;
	uint16_t x162 = UINT16_MAX;
	static int64_t x163 = -1LL;
	volatile uint64_t x164 = UINT64_MAX;
	uint64_t t30 = 14378520574034839LLU;

	t30 = (x161^((x162&x163)*x164));

	if (t30 != 9223372036854710273LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x165 = INT32_MIN;
	static int16_t x166 = INT16_MIN;
	uint32_t x167 = 0U;
	uint32_t t31 = 2139U;

	t31 = (x165^((x166&x167)*x168));

	if (t31 != 2147483648U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x169 = 963080554818LLU;
	int32_t x170 = INT32_MAX;
	uint8_t x171 = 0U;
	static int8_t x172 = INT8_MIN;
	volatile uint64_t t32 = 94LLU;

	t32 = (x169^((x170&x171)*x172));

	if (t32 != 963080554818LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x174 = 7310LLU;
	uint16_t x175 = 13740U;
	uint16_t x176 = 6223U;
	static uint64_t t33 = 431848594LLU;

	t33 = (x173^((x174&x175)*x176));

	if (t33 != 9223372036887508788LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x178 = INT16_MAX;
	int64_t x179 = -1LL;
	int8_t x180 = 1;
	uint64_t t34 = 1072229198823LLU;

	t34 = (x177^((x178&x179)*x180));

	if (t34 != 9294LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x181 = 327U;
	uint8_t x182 = 95U;
	volatile int64_t x184 = 57LL;
	int64_t t35 = 33576312107382523LL;

	t35 = (x181^((x182&x183)*x184));

	if (t35 != 930LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x190 = -1;
	volatile uint64_t x192 = UINT64_MAX;
	volatile uint64_t t36 = 5918596515909102822LLU;

	t36 = (x189^((x190&x191)*x192));

	if (t36 != 9223372036854743039LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x194 = INT64_MIN;
	static uint64_t x195 = UINT64_MAX;
	volatile uint64_t t37 = 2302846375212LLU;

	t37 = (x193^((x194&x195)*x196));

	if (t37 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x199 = 1U;
	volatile int64_t t38 = INT64_MIN;

	t38 = (x197^((x198&x199)*x200));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x201 = INT8_MIN;
	uint64_t x203 = UINT64_MAX;
	volatile int8_t x204 = INT8_MIN;
	uint64_t t39 = 167710917400LLU;

	t39 = (x201^((x202&x203)*x204));

	if (t39 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x205 = 0U;
	uint16_t x206 = 3013U;
	static uint8_t x207 = 3U;
	int64_t x208 = -1LL;
	static int64_t t40 = 937005442787424LL;

	t40 = (x205^((x206&x207)*x208));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x210 = -3;
	uint8_t x212 = 94U;
	uint32_t t41 = 463500U;

	t41 = (x209^((x210&x211)*x212));

	if (t41 != 143933275U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x214 = 1U;
	int8_t x215 = -1;
	static int64_t x216 = INT64_MIN;

	t42 = (x213^((x214&x215)*x216));

	if (t42 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x217 = INT32_MIN;
	static uint32_t x218 = UINT32_MAX;

	t43 = (x217^((x218&x219)*x220));

	if (t43 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x221 = -1;
	static uint8_t x222 = 41U;
	static int64_t x223 = INT64_MIN;
	int32_t x224 = -1;
	static volatile int64_t t44 = -64761153LL;

	t44 = (x221^((x222&x223)*x224));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x225 = INT8_MAX;
	volatile int16_t x226 = INT16_MIN;
	static int16_t x228 = INT16_MIN;
	volatile int32_t t45 = 26567554;

	t45 = (x225^((x226&x227)*x228));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x229 = INT32_MIN;
	uint64_t x230 = UINT64_MAX;
	int16_t x231 = INT16_MAX;
	uint32_t x232 = UINT32_MAX;
	volatile uint64_t t46 = 3368234985945819310LLU;

	t46 = (x229^((x230&x231)*x232));

	if (t46 != 18446603342663614465LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x233 = INT32_MAX;
	volatile uint16_t x235 = UINT16_MAX;
	volatile int16_t x236 = -1;
	int32_t t47 = 34065687;

	t47 = (x233^((x234&x235)*x236));

	if (t47 != -2147418122) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x237 = INT32_MIN;
	int16_t x238 = 7;
	int32_t x239 = INT32_MIN;

	t48 = (x237^((x238&x239)*x240));

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x241 = INT8_MIN;
	static int8_t x242 = INT8_MIN;
	int8_t x243 = INT8_MIN;
	volatile int32_t t49 = -647;

	t49 = (x241^((x242&x243)*x244));

	if (t49 != -256) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x245 = -2;
	uint64_t x246 = 0LLU;
	int32_t x247 = -1;
	int64_t x248 = 0LL;
	volatile uint64_t t50 = 27299260768147204LLU;

	t50 = (x245^((x246&x247)*x248));

	if (t50 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x249 = -1;
	uint16_t x250 = 154U;
	volatile int16_t x251 = -3789;
	static int8_t x252 = INT8_MIN;
	volatile int32_t t51 = 84153;

	t51 = (x249^((x250&x251)*x252));

	if (t51 != 2303) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x254 = 785797282;
	int8_t x255 = INT8_MAX;
	uint32_t x256 = UINT32_MAX;
	static int64_t t52 = -310736304LL;

	t52 = (x253^((x254&x255)*x256));

	if (t52 != -9223372032559808546LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x257 = INT16_MIN;
	uint32_t x258 = 35U;
	int32_t x259 = INT32_MIN;
	int64_t x260 = -1LL;
	int64_t t53 = 162LL;

	t53 = (x257^((x258&x259)*x260));

	if (t53 != -32768LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x261 = 0U;
	int32_t x262 = INT32_MAX;
	static volatile int32_t t54 = 9616625;

	t54 = (x261^((x262&x263)*x264));

	if (t54 != 4191) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x267 = INT8_MIN;
	uint32_t x268 = 697U;

	t55 = (x265^((x266&x267)*x268));

	if (t55 != 10459031866690560LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x273 = 17U;
	int16_t x274 = INT16_MIN;
	int16_t x275 = INT16_MIN;
	int16_t x276 = INT16_MIN;
	volatile int32_t t56 = 1;

	t56 = (x273^((x274&x275)*x276));

	if (t56 != 1073741841) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x277 = 9U;
	volatile uint8_t x278 = 0U;
	uint32_t x279 = 40U;
	uint32_t x280 = 59600567U;
	volatile uint32_t t57 = 129559386U;

	t57 = (x277^((x278&x279)*x280));

	if (t57 != 9U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x281 = 56U;
	int8_t x282 = 30;
	uint64_t x283 = 19772806590553808LLU;
	uint64_t t58 = 28798LLU;

	t58 = (x281^((x282&x283)*x284));

	if (t58 != 18446744073709027384LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x285 = INT64_MAX;
	static uint32_t x286 = 7226629U;
	uint32_t x287 = 16712771U;
	volatile int8_t x288 = INT8_MIN;

	t59 = (x285^((x286&x287)*x288));

	if (t59 != 9223372033482686591LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x289 = INT8_MAX;
	volatile int8_t x290 = INT8_MIN;
	int8_t x291 = INT8_MAX;
	volatile uint16_t x292 = 2721U;
	int32_t t60 = -12;

	t60 = (x289^((x290&x291)*x292));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x293 = INT8_MIN;
	int16_t x294 = INT16_MIN;
	int8_t x295 = INT8_MIN;
	uint16_t x296 = 15373U;
	int32_t t61 = -3615;

	t61 = (x293^((x294&x295)*x296));

	if (t61 != 503742336) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x297 = INT16_MAX;
	int32_t x298 = INT32_MIN;
	uint32_t x299 = 2963735U;
	int32_t x300 = INT32_MIN;
	uint32_t t62 = 677U;

	t62 = (x297^((x298&x299)*x300));

	if (t62 != 32767U) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x302 = INT32_MAX;
	uint8_t x303 = 5U;
	volatile int64_t x304 = 1192LL;
	static int64_t t63 = -4406234584222923LL;

	t63 = (x301^((x302&x303)*x304));

	if (t63 != -5961LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x305 = 0;
	int16_t x306 = INT16_MIN;
	static volatile uint16_t x307 = 154U;
	volatile int64_t x308 = -120441859LL;
	volatile int64_t t64 = -1847725LL;

	t64 = (x305^((x306&x307)*x308));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x309 = 9;
	uint8_t x310 = 50U;
	int32_t x311 = INT32_MAX;
	static uint8_t x312 = 0U;
	static volatile int32_t t65 = -94;

	t65 = (x309^((x310&x311)*x312));

	if (t65 != 9) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x313 = -1;
	volatile int8_t x314 = INT8_MAX;
	volatile int64_t x315 = -36439007LL;
	volatile int64_t t66 = -10261395860970LL;

	t66 = (x313^((x314&x315)*x316));

	if (t66 != 56859263LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x317 = -1LL;
	uint64_t x318 = 110853105484874LLU;
	int32_t x319 = INT32_MAX;
	uint8_t x320 = 13U;

	t67 = (x317^((x318&x319)*x320));

	if (t67 != 18446744045797787709LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x330 = 3040053LLU;
	int32_t x332 = INT32_MIN;
	volatile uint64_t t68 = 1513797718286183810LLU;

	t68 = (x329^((x330&x331)*x332));

	if (t68 != 9229900387144695807LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x333 = INT8_MIN;
	static uint16_t x334 = UINT16_MAX;
	int16_t x335 = -1;
	int16_t x336 = INT16_MIN;
	static int32_t t69 = 6883666;

	t69 = (x333^((x334&x335)*x336));

	if (t69 != 2147450752) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x337 = INT64_MAX;
	static int64_t x338 = 8948202762964260LL;
	static uint64_t x339 = 104237555LLU;
	int16_t x340 = INT16_MIN;

	t70 = (x337^((x338&x339)*x340));

	if (t70 != 9223375370899685375LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x345 = INT32_MAX;
	static uint64_t x346 = UINT64_MAX;
	volatile uint64_t t71 = 2315446782LLU;

	t71 = (x345^((x346&x347)*x348));

	if (t71 != 18446730399617831403LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x349 = INT16_MIN;
	int32_t x350 = INT32_MAX;
	volatile int64_t x351 = -989728155189LL;
	static int32_t x352 = -1;
	int64_t t72 = -1LL;

	t72 = (x349^((x350&x351)*x352));

	if (t72 != 261793333LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x353 = INT32_MAX;
	int16_t x355 = -78;
	volatile int32_t t73 = INT32_MAX;

	t73 = (x353^((x354&x355)*x356));

	if (t73 != INT32_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x357 = -44;
	volatile uint8_t x358 = 24U;
	uint64_t x359 = UINT64_MAX;
	int16_t x360 = INT16_MIN;
	static volatile uint64_t t74 = 343468336586LLU;

	t74 = (x357^((x358&x359)*x360));

	if (t74 != 786388LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x366 = 664LL;
	int8_t x368 = -1;

	t75 = (x365^((x366&x367)*x368));

	if (t75 != -698LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x369 = 3;
	uint8_t x370 = 93U;
	uint32_t x371 = 854565U;
	int8_t x372 = INT8_MIN;
	uint32_t t76 = 15219096U;

	t76 = (x369^((x370&x371)*x372));

	if (t76 != 4294966659U) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x373 = INT32_MIN;
	int16_t x374 = INT16_MIN;
	static uint8_t x375 = 7U;

	t77 = (x373^((x374&x375)*x376));

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x378 = UINT64_MAX;
	uint8_t x379 = UINT8_MAX;
	static int32_t x380 = -1;

	t78 = (x377^((x378&x379)*x380));

	if (t78 != 9223372036854776062LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x383 = -225;
	int32_t x384 = -3816;
	static volatile int64_t t79 = 100248367LL;

	t79 = (x381^((x382&x383)*x384));

	if (t79 != 18158LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x385 = 25732308125306662LLU;
	static int8_t x386 = 13;
	static int64_t x387 = 27LL;
	int64_t x388 = -130732961790723LL;
	uint64_t t80 = 3990277LLU;

	t80 = (x385^((x386&x387)*x388));

	if (t80 != 18419927542972277699LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x389 = INT32_MAX;
	uint32_t x390 = 0U;
	uint64_t x391 = 4276121663794LLU;
	volatile uint64_t t81 = 185LLU;

	t81 = (x389^((x390&x391)*x392));

	if (t81 != 2147483647LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x397 = -1;
	static int16_t x398 = INT16_MAX;
	static int32_t x399 = INT32_MIN;
	int16_t x400 = -1193;
	volatile int32_t t82 = 21674775;

	t82 = (x397^((x398&x399)*x400));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x401 = 1U;
	static uint64_t x403 = 17896LLU;

	t83 = (x401^((x402&x403)*x404));

	if (t83 != 215909100204529LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x410 = 3590;
	int32_t x411 = 2376;
	int32_t x412 = -1;
	int32_t t84 = -111264;

	t84 = (x409^((x410&x411)*x412));

	if (t84 != 1920) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x413 = -1807;
	int32_t x414 = INT32_MAX;
	int32_t x415 = -1;
	static uint32_t x416 = 1U;
	volatile uint32_t t85 = 613770U;

	t85 = (x413^((x414&x415)*x416));

	if (t85 != 2147485454U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x418 = 61;
	int64_t x420 = 29305170948660LL;
	int64_t t86 = 17466383LL;

	t86 = (x417^((x418&x419)*x420));

	if (t86 != -1787615427868261LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x421 = -1LL;
	int32_t x422 = -32;
	volatile int64_t x423 = -1LL;
	uint32_t x424 = 18U;
	static int64_t t87 = -3345364302919402874LL;

	t87 = (x421^((x422&x423)*x424));

	if (t87 != 575LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x425 = UINT64_MAX;
	int64_t x426 = -1LL;
	int32_t x427 = 72874369;
	static volatile uint16_t x428 = 1960U;
	static volatile uint64_t t88 = 978LLU;

	t88 = (x425^((x426&x427)*x428));

	if (t88 != 18446743930875788375LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x429 = 0;
	uint64_t x430 = 20449707297968LLU;
	int8_t x431 = INT8_MIN;
	int16_t x432 = INT16_MIN;
	uint64_t t89 = 8LLU;

	t89 = (x429^((x430&x431)*x432));

	if (t89 != 17776648064971309056LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x433 = 171505042LLU;
	static uint64_t t90 = 501025287LLU;

	t90 = (x433^((x434&x435)*x436));

	if (t90 != 171505042LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x445 = INT8_MAX;
	volatile int8_t x446 = INT8_MIN;
	uint8_t x448 = 0U;
	uint64_t t91 = 2289406307231875686LLU;

	t91 = (x445^((x446&x447)*x448));

	if (t91 != 127LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x450 = UINT32_MAX;
	volatile int16_t x451 = INT16_MIN;
	volatile uint8_t x452 = 14U;

	t92 = (x449^((x450&x451)*x452));

	if (t92 != 4294508799U) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x454 = 34161LLU;
	int8_t x455 = INT8_MIN;
	uint16_t x456 = 11U;
	static volatile uint64_t t93 = 177972LLU;

	t93 = (x453^((x454&x455)*x456));

	if (t93 != 374783LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x457 = INT8_MIN;
	int64_t x458 = INT64_MAX;
	static int8_t x459 = INT8_MAX;
	volatile uint16_t x460 = 3071U;
	static volatile int64_t t94 = -1064236676438771984LL;

	t94 = (x457^((x458&x459)*x460));

	if (t94 != -390143LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x462 = 80428093U;
	static int32_t x463 = INT32_MIN;
	volatile int16_t x464 = -1;

	t95 = (x461^((x462&x463)*x464));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x465 = UINT16_MAX;
	int32_t x466 = INT32_MAX;
	uint32_t x467 = 1120630U;
	volatile int16_t x468 = -1;
	uint32_t t96 = 47813901U;

	t96 = (x465^((x466&x467)*x468));

	if (t96 != 4293794165U) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x469 = -47;
	int64_t x470 = INT64_MAX;
	int32_t x471 = -1;
	volatile uint64_t t97 = 4267526705450304169LLU;

	t97 = (x469^((x470&x471)*x472));

	if (t97 != 9223372036854775760LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x477 = UINT8_MAX;
	volatile uint8_t x478 = 102U;
	int64_t x479 = INT64_MIN;
	int64_t x480 = -1LL;
	int64_t t98 = 15925569LL;

	t98 = (x477^((x478&x479)*x480));

	if (t98 != 255LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x481 = 1197U;
	int64_t x482 = INT64_MAX;
	int8_t x483 = INT8_MAX;
	static int64_t t99 = 295339419LL;

	t99 = (x481^((x482&x483)*x484));

	if (t99 != 32677LL) { NG(); } else { ; }
	
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

