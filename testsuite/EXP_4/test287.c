#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x7 = INT16_MIN;
int64_t x8 = 2235237719960474623LL;
volatile uint32_t t1 = 1397100751U;
volatile uint64_t x10 = UINT64_MAX;
uint32_t x12 = 389U;
volatile int32_t t2 = 24322;
volatile int16_t x25 = INT16_MIN;
volatile int8_t x27 = INT8_MAX;
uint64_t t6 = UINT64_MAX;
int32_t x38 = -5703677;
int16_t x45 = INT16_MIN;
int64_t x46 = INT64_MAX;
static int8_t x47 = INT8_MIN;
static int32_t x54 = 160070445;
uint64_t x55 = 30669228272303683LLU;
int32_t t10 = 35556946;
int16_t x59 = -1;
volatile int32_t x66 = -1166999;
int16_t x68 = INT16_MAX;
volatile int8_t x69 = -1;
volatile int32_t x71 = INT32_MIN;
uint32_t x72 = UINT32_MAX;
volatile int64_t t15 = INT64_MIN;
uint32_t x85 = 1U;
volatile uint64_t x91 = 79485248802908661LLU;
uint8_t x93 = 33U;
volatile uint16_t x98 = 14U;
int32_t t21 = 56;
int32_t x107 = 102111;
volatile int16_t x108 = 464;
int32_t t23 = -3;
uint32_t x114 = 618577721U;
int16_t x123 = INT16_MIN;
static volatile int32_t t26 = -3733;
int64_t x127 = 2208117453953632881LL;
int16_t x146 = 1;
int8_t x149 = INT8_MAX;
int64_t x154 = 450066917LL;
int32_t x165 = -1;
static volatile int32_t t33 = -61761128;
static volatile int32_t x174 = -1;
int32_t t34 = -1;
int64_t x177 = -1LL;
int8_t x180 = -1;
int16_t x187 = -1;
uint64_t t40 = 1022LLU;
volatile uint64_t x206 = 103LLU;
int8_t x209 = 5;
int64_t x214 = INT64_MIN;
int16_t x218 = INT16_MIN;
static volatile int64_t x226 = -1LL;
volatile int8_t x234 = 7;
static uint32_t x241 = 53U;
int8_t x243 = -5;
static int16_t x250 = INT16_MIN;
volatile int32_t t52 = -89;
int8_t x256 = INT8_MIN;
volatile uint16_t x265 = UINT16_MAX;
volatile int32_t x266 = INT32_MIN;
static uint16_t x269 = 79U;
uint32_t x283 = UINT32_MAX;
static uint32_t x292 = UINT32_MAX;
int8_t x297 = -1;
volatile int32_t t64 = 32;
int8_t x311 = INT8_MAX;
volatile int32_t x314 = INT32_MIN;
uint64_t x315 = UINT64_MAX;
uint8_t x319 = 3U;
static uint32_t x321 = UINT32_MAX;
uint16_t x322 = 53U;
volatile int8_t x328 = INT8_MIN;
static volatile int32_t t71 = 218317;
int64_t x329 = INT64_MIN;
int32_t x330 = 3198;
int32_t x342 = INT32_MIN;
static int32_t x345 = INT32_MAX;
int16_t x348 = 0;
uint8_t x349 = UINT8_MAX;
int32_t x351 = 373;
int8_t x353 = -1;
volatile uint16_t x354 = 259U;
uint64_t x356 = 32208LLU;
volatile int32_t t77 = -1412094;
int32_t x357 = INT32_MIN;
volatile uint32_t t80 = 866469U;
volatile uint16_t x387 = UINT16_MAX;
int32_t x390 = INT32_MIN;
int32_t t85 = -493;
static int8_t x401 = INT8_MAX;
volatile int32_t t87 = -229099;
uint32_t x413 = 983731297U;
static int8_t x414 = INT8_MIN;
static int64_t x415 = -394120579388LL;
volatile uint32_t t90 = 124530635U;
static uint8_t x417 = 5U;
int64_t x430 = -1LL;
uint8_t x434 = 63U;
uint16_t x436 = 23U;
static uint64_t x438 = UINT64_MAX;


void f0(void) {
	uint8_t x1 = 17U;
	volatile int32_t x2 = INT32_MIN;
	int32_t x3 = -1;
	int16_t x4 = 13496;
	volatile int32_t t0 = 9;

	t0 = (x1+(x2<=(x3-x4)));

	if (t0 != 18) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x5 = UINT32_MAX;
	volatile int64_t x6 = INT64_MIN;

	t1 = (x5+(x6<=(x7-x8)));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 0;
	static volatile uint32_t x11 = 210864134U;

	t2 = (x9+(x10<=(x11-x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MIN;
	uint8_t x14 = 91U;
	uint64_t x15 = UINT64_MAX;
	static int16_t x16 = INT16_MIN;
	int64_t t3 = -2028LL;

	t3 = (x13+(x14<=(x15-x16)));

	if (t3 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 1547LLU;
	int16_t x22 = -1;
	int16_t x23 = -1;
	int64_t x24 = INT64_MAX;
	uint64_t t4 = 2870074LLU;

	t4 = (x21+(x22<=(x23-x24)));

	if (t4 != 1547LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x26 = -26;
	uint16_t x28 = UINT16_MAX;
	int32_t t5 = -240215;

	t5 = (x25+(x26<=(x27-x28)));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x33 = UINT64_MAX;
	uint16_t x34 = UINT16_MAX;
	int16_t x35 = INT16_MAX;
	int16_t x36 = INT16_MAX;

	t6 = (x33+(x34<=(x35-x36)));

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x37 = INT16_MIN;
	int8_t x39 = INT8_MIN;
	int8_t x40 = INT8_MIN;
	int32_t t7 = 3;

	t7 = (x37+(x38<=(x39-x40)));

	if (t7 != -32767) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x41 = -1;
	uint32_t x42 = 616321080U;
	static int8_t x43 = INT8_MIN;
	int16_t x44 = -1121;
	int32_t t8 = -16;

	t8 = (x41+(x42<=(x43-x44)));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x48 = INT16_MAX;
	int32_t t9 = -7888635;

	t9 = (x45+(x46<=(x47-x48)));

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x53 = 89U;
	int16_t x56 = INT16_MAX;

	t10 = (x53+(x54<=(x55-x56)));

	if (t10 != 90) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = INT32_MIN;
	static int64_t x58 = -1LL;
	static uint64_t x60 = 5LLU;
	volatile int32_t t11 = INT32_MIN;

	t11 = (x57+(x58<=(x59-x60)));

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x65 = -1LL;
	static uint64_t x67 = 3282614409LLU;
	volatile int64_t t12 = -3LL;

	t12 = (x65+(x66<=(x67-x68)));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x70 = -3115230;
	volatile int32_t t13 = 24397;

	t13 = (x69+(x70<=(x71-x72)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x73 = 42525195289398LLU;
	volatile uint8_t x74 = 7U;
	uint8_t x75 = 30U;
	uint64_t x76 = 3372047690561332LLU;
	uint64_t t14 = 288704432088631123LLU;

	t14 = (x73+(x74<=(x75-x76)));

	if (t14 != 42525195289399LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x77 = INT64_MIN;
	int16_t x78 = INT16_MAX;
	volatile int8_t x79 = -1;
	volatile uint8_t x80 = 0U;

	t15 = (x77+(x78<=(x79-x80)));

	if (t15 != INT64_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x81 = 324730994;
	int32_t x82 = -1;
	static int8_t x83 = 1;
	uint32_t x84 = UINT32_MAX;
	volatile int32_t t16 = -31647430;

	t16 = (x81+(x82<=(x83-x84)));

	if (t16 != 324730994) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x86 = -32;
	volatile uint64_t x87 = 445LLU;
	uint32_t x88 = 102U;
	uint32_t t17 = 175U;

	t17 = (x85+(x86<=(x87-x88)));

	if (t17 != 1U) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x89 = INT16_MIN;
	int64_t x90 = 529311376LL;
	int16_t x92 = 0;
	static int32_t t18 = -944;

	t18 = (x89+(x90<=(x91-x92)));

	if (t18 != -32767) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x94 = 4;
	uint32_t x95 = 132340U;
	int16_t x96 = INT16_MAX;
	volatile int32_t t19 = -108638027;

	t19 = (x93+(x94<=(x95-x96)));

	if (t19 != 34) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x97 = 2U;
	volatile int16_t x99 = -1;
	int32_t x100 = INT32_MIN;
	volatile uint32_t t20 = 889818174U;

	t20 = (x97+(x98<=(x99-x100)));

	if (t20 != 3U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = -1;
	int8_t x102 = 2;
	uint64_t x103 = 149726LLU;
	volatile uint16_t x104 = UINT16_MAX;

	t21 = (x101+(x102<=(x103-x104)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x105 = UINT8_MAX;
	int64_t x106 = -1504LL;
	int32_t t22 = -1;

	t22 = (x105+(x106<=(x107-x108)));

	if (t22 != 256) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x109 = INT16_MAX;
	int8_t x110 = INT8_MAX;
	int16_t x111 = -3758;
	uint8_t x112 = 8U;

	t23 = (x109+(x110<=(x111-x112)));

	if (t23 != 32767) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = -1;
	static volatile uint32_t x115 = 183U;
	static int32_t x116 = INT32_MAX;
	volatile int32_t t24 = 2737;

	t24 = (x113+(x114<=(x115-x116)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x117 = 137595736U;
	int64_t x118 = -1LL;
	int64_t x119 = -6LL;
	int32_t x120 = 1469;
	static uint32_t t25 = 940047764U;

	t25 = (x117+(x118<=(x119-x120)));

	if (t25 != 137595736U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x121 = INT8_MIN;
	int8_t x122 = INT8_MAX;
	static volatile int64_t x124 = -34658LL;

	t26 = (x121+(x122<=(x123-x124)));

	if (t26 != -127) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x125 = INT64_MIN;
	int32_t x126 = INT32_MIN;
	int32_t x128 = INT32_MIN;
	volatile int64_t t27 = 65225588524235LL;

	t27 = (x125+(x126<=(x127-x128)));

	if (t27 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x129 = UINT16_MAX;
	uint64_t x130 = 113691762LLU;
	static volatile uint8_t x131 = 6U;
	int8_t x132 = INT8_MIN;
	volatile int32_t t28 = -61836779;

	t28 = (x129+(x130<=(x131-x132)));

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x137 = INT8_MIN;
	static int16_t x138 = INT16_MIN;
	static int32_t x139 = INT32_MIN;
	static int64_t x140 = -1LL;
	int32_t t29 = -3349528;

	t29 = (x137+(x138<=(x139-x140)));

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x145 = 3U;
	int16_t x147 = INT16_MAX;
	int16_t x148 = 3;
	static volatile uint32_t t30 = 138167403U;

	t30 = (x145+(x146<=(x147-x148)));

	if (t30 != 4U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x150 = -1755;
	static uint32_t x151 = UINT32_MAX;
	int32_t x152 = 487156817;
	volatile int32_t t31 = 11765;

	t31 = (x149+(x150<=(x151-x152)));

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x153 = 1U;
	volatile int8_t x155 = INT8_MAX;
	static uint16_t x156 = 239U;
	int32_t t32 = 8182255;

	t32 = (x153+(x154<=(x155-x156)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x166 = 1;
	volatile int8_t x167 = INT8_MIN;
	int64_t x168 = INT64_MIN;

	t33 = (x165+(x166<=(x167-x168)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x173 = 0;
	static volatile uint64_t x175 = 58682128LLU;
	volatile uint64_t x176 = 55775682960435914LLU;

	t34 = (x173+(x174<=(x175-x176)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x178 = UINT64_MAX;
	static volatile uint8_t x179 = 108U;
	int64_t t35 = 7070864LL;

	t35 = (x177+(x178<=(x179-x180)));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x181 = 174U;
	int32_t x182 = INT32_MIN;
	int8_t x183 = 0;
	static int8_t x184 = 1;
	volatile int32_t t36 = 6;

	t36 = (x181+(x182<=(x183-x184)));

	if (t36 != 175) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x185 = UINT16_MAX;
	int64_t x186 = -1LL;
	int64_t x188 = INT64_MIN;
	int32_t t37 = 354;

	t37 = (x185+(x186<=(x187-x188)));

	if (t37 != 65536) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x189 = INT16_MIN;
	volatile int8_t x190 = -1;
	int8_t x191 = INT8_MIN;
	volatile int16_t x192 = INT16_MIN;
	static int32_t t38 = -59411;

	t38 = (x189+(x190<=(x191-x192)));

	if (t38 != -32767) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x193 = -1;
	int32_t x194 = INT32_MAX;
	int8_t x195 = -1;
	int16_t x196 = 109;
	volatile int32_t t39 = -16967217;

	t39 = (x193+(x194<=(x195-x196)));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x197 = UINT64_MAX;
	int16_t x198 = 5;
	static int64_t x199 = INT64_MAX;
	uint8_t x200 = 10U;

	t40 = (x197+(x198<=(x199-x200)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x205 = 6320867;
	int8_t x207 = INT8_MIN;
	volatile int32_t x208 = INT32_MIN;
	int32_t t41 = 641;

	t41 = (x205+(x206<=(x207-x208)));

	if (t41 != 6320868) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x210 = UINT8_MAX;
	int64_t x211 = 4629247769099529LL;
	int32_t x212 = INT32_MAX;
	volatile int32_t t42 = 105748;

	t42 = (x209+(x210<=(x211-x212)));

	if (t42 != 6) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x213 = -1LL;
	int16_t x215 = 1509;
	uint64_t x216 = 170737658363188128LLU;
	int64_t t43 = 163758748426152LL;

	t43 = (x213+(x214<=(x215-x216)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x217 = INT8_MIN;
	int16_t x219 = -179;
	uint16_t x220 = 6U;
	int32_t t44 = -1;

	t44 = (x217+(x218<=(x219-x220)));

	if (t44 != -127) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x221 = 59651463845LL;
	uint32_t x222 = UINT32_MAX;
	uint16_t x223 = UINT16_MAX;
	int16_t x224 = 776;
	volatile int64_t t45 = 8LL;

	t45 = (x221+(x222<=(x223-x224)));

	if (t45 != 59651463845LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x225 = 1078816988701LL;
	int64_t x227 = INT64_MAX;
	uint64_t x228 = 16061955LLU;
	int64_t t46 = 175389666998877113LL;

	t46 = (x225+(x226<=(x227-x228)));

	if (t46 != 1078816988701LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x229 = -35;
	static volatile uint8_t x230 = UINT8_MAX;
	int64_t x231 = INT64_MIN;
	volatile int32_t x232 = -5909;
	int32_t t47 = 0;

	t47 = (x229+(x230<=(x231-x232)));

	if (t47 != -35) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x233 = -16;
	uint16_t x235 = 7U;
	int64_t x236 = INT64_MAX;
	int32_t t48 = -2615;

	t48 = (x233+(x234<=(x235-x236)));

	if (t48 != -16) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x237 = INT16_MIN;
	int32_t x238 = -1;
	static uint8_t x239 = 28U;
	uint16_t x240 = UINT16_MAX;
	volatile int32_t t49 = -29206;

	t49 = (x237+(x238<=(x239-x240)));

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x242 = INT8_MIN;
	int64_t x244 = -1LL;
	static uint32_t t50 = 8U;

	t50 = (x241+(x242<=(x243-x244)));

	if (t50 != 54U) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x245 = INT32_MIN;
	static int32_t x246 = INT32_MAX;
	volatile uint32_t x247 = UINT32_MAX;
	static int32_t x248 = INT32_MIN;
	int32_t t51 = -103;

	t51 = (x245+(x246<=(x247-x248)));

	if (t51 != -2147483647) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x249 = -1;
	static uint8_t x251 = 0U;
	int16_t x252 = INT16_MIN;

	t52 = (x249+(x250<=(x251-x252)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x253 = INT64_MIN;
	int16_t x254 = INT16_MAX;
	static int16_t x255 = INT16_MIN;
	volatile int64_t t53 = INT64_MIN;

	t53 = (x253+(x254<=(x255-x256)));

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x257 = 418;
	volatile int16_t x258 = INT16_MIN;
	int32_t x259 = INT32_MIN;
	int64_t x260 = INT64_MIN;
	int32_t t54 = 97558315;

	t54 = (x257+(x258<=(x259-x260)));

	if (t54 != 419) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x261 = -50;
	int8_t x262 = -1;
	uint32_t x263 = 9608479U;
	static volatile uint16_t x264 = 31473U;
	volatile int32_t t55 = 8;

	t55 = (x261+(x262<=(x263-x264)));

	if (t55 != -50) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x267 = -1;
	volatile int16_t x268 = INT16_MIN;
	int32_t t56 = -2;

	t56 = (x265+(x266<=(x267-x268)));

	if (t56 != 65536) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint16_t x270 = 3103U;
	int64_t x271 = INT64_MIN;
	volatile int16_t x272 = -1;
	int32_t t57 = -21985848;

	t57 = (x269+(x270<=(x271-x272)));

	if (t57 != 79) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x273 = 2165;
	volatile int32_t x274 = -25;
	uint16_t x275 = 0U;
	int32_t x276 = -3215;
	volatile int32_t t58 = -213566597;

	t58 = (x273+(x274<=(x275-x276)));

	if (t58 != 2166) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x277 = -14;
	uint8_t x278 = 15U;
	uint64_t x279 = 240341378929LLU;
	static uint8_t x280 = 0U;
	static int32_t t59 = -15057988;

	t59 = (x277+(x278<=(x279-x280)));

	if (t59 != -13) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x281 = INT32_MIN;
	static int16_t x282 = INT16_MIN;
	uint32_t x284 = 379604709U;
	volatile int32_t t60 = INT32_MIN;

	t60 = (x281+(x282<=(x283-x284)));

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x285 = 2227U;
	static uint8_t x286 = 2U;
	int8_t x287 = INT8_MIN;
	static uint32_t x288 = UINT32_MAX;
	volatile uint32_t t61 = 2U;

	t61 = (x285+(x286<=(x287-x288)));

	if (t61 != 2228U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x289 = 24864U;
	volatile uint32_t x290 = UINT32_MAX;
	static int64_t x291 = INT64_MAX;
	volatile int32_t t62 = 71395748;

	t62 = (x289+(x290<=(x291-x292)));

	if (t62 != 24865) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x293 = 46;
	uint64_t x294 = UINT64_MAX;
	static int8_t x295 = -1;
	volatile uint64_t x296 = 2549251104427LLU;
	static int32_t t63 = -13570;

	t63 = (x293+(x294<=(x295-x296)));

	if (t63 != 46) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x298 = INT32_MIN;
	volatile int16_t x299 = -1;
	int16_t x300 = INT16_MIN;

	t64 = (x297+(x298<=(x299-x300)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x301 = -1LL;
	volatile int8_t x302 = -13;
	int16_t x303 = -13;
	uint8_t x304 = UINT8_MAX;
	volatile int64_t t65 = -53101LL;

	t65 = (x301+(x302<=(x303-x304)));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x305 = INT64_MAX;
	static uint64_t x306 = UINT64_MAX;
	volatile int8_t x307 = INT8_MIN;
	volatile int16_t x308 = INT16_MIN;
	volatile int64_t t66 = INT64_MAX;

	t66 = (x305+(x306<=(x307-x308)));

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x309 = UINT16_MAX;
	int16_t x310 = -1;
	uint8_t x312 = UINT8_MAX;
	int32_t t67 = 0;

	t67 = (x309+(x310<=(x311-x312)));

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x313 = -1;
	uint8_t x316 = 13U;
	volatile int32_t t68 = 518;

	t68 = (x313+(x314<=(x315-x316)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x317 = UINT64_MAX;
	int16_t x318 = INT16_MIN;
	int16_t x320 = INT16_MAX;
	uint64_t t69 = 28306674794LLU;

	t69 = (x317+(x318<=(x319-x320)));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint16_t x323 = 5U;
	int16_t x324 = INT16_MAX;
	static volatile uint32_t t70 = UINT32_MAX;

	t70 = (x321+(x322<=(x323-x324)));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x325 = UINT8_MAX;
	int16_t x326 = INT16_MAX;
	int8_t x327 = INT8_MIN;

	t71 = (x325+(x326<=(x327-x328)));

	if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x331 = -1;
	volatile int64_t x332 = -5LL;
	int64_t t72 = INT64_MIN;

	t72 = (x329+(x330<=(x331-x332)));

	if (t72 != INT64_MIN) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x333 = -11443448;
	volatile uint64_t x334 = UINT64_MAX;
	static int8_t x335 = INT8_MIN;
	uint8_t x336 = 18U;
	volatile int32_t t73 = 1837;

	t73 = (x333+(x334<=(x335-x336)));

	if (t73 != -11443448) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x341 = 806U;
	volatile uint16_t x343 = 983U;
	uint32_t x344 = 18756895U;
	volatile uint32_t t74 = 61U;

	t74 = (x341+(x342<=(x343-x344)));

	if (t74 != 807U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x346 = -1;
	static int16_t x347 = INT16_MIN;
	int32_t t75 = INT32_MAX;

	t75 = (x345+(x346<=(x347-x348)));

	if (t75 != INT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x350 = INT16_MIN;
	uint32_t x352 = 497U;
	volatile int32_t t76 = -3452705;

	t76 = (x349+(x350<=(x351-x352)));

	if (t76 != 256) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x355 = UINT32_MAX;

	t77 = (x353+(x354<=(x355-x356)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x358 = UINT16_MAX;
	int64_t x359 = -1LL;
	int8_t x360 = -1;
	int32_t t78 = INT32_MIN;

	t78 = (x357+(x358<=(x359-x360)));

	if (t78 != INT32_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x365 = INT8_MIN;
	static int8_t x366 = -1;
	static volatile uint8_t x367 = 11U;
	int8_t x368 = -1;
	int32_t t79 = 461;

	t79 = (x365+(x366<=(x367-x368)));

	if (t79 != -127) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x369 = 415U;
	static uint64_t x370 = 290014348LLU;
	volatile int16_t x371 = -1;
	int64_t x372 = INT64_MAX;

	t80 = (x369+(x370<=(x371-x372)));

	if (t80 != 416U) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x373 = UINT8_MAX;
	volatile int64_t x374 = INT64_MIN;
	int8_t x375 = INT8_MIN;
	static uint64_t x376 = 534398LLU;
	volatile int32_t t81 = -753869852;

	t81 = (x373+(x374<=(x375-x376)));

	if (t81 != 256) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x377 = 60511U;
	uint8_t x378 = UINT8_MAX;
	static volatile uint8_t x379 = 23U;
	int8_t x380 = INT8_MAX;
	volatile uint32_t t82 = 6367U;

	t82 = (x377+(x378<=(x379-x380)));

	if (t82 != 60511U) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x381 = -1LL;
	int32_t x382 = INT32_MIN;
	int16_t x383 = 1382;
	uint8_t x384 = UINT8_MAX;
	int64_t t83 = 140LL;

	t83 = (x381+(x382<=(x383-x384)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x385 = UINT16_MAX;
	int8_t x386 = -1;
	uint16_t x388 = 5932U;
	int32_t t84 = -3727854;

	t84 = (x385+(x386<=(x387-x388)));

	if (t84 != 65536) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x389 = -1;
	static int32_t x391 = -1;
	static uint32_t x392 = UINT32_MAX;

	t85 = (x389+(x390<=(x391-x392)));

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x397 = 25853742;
	volatile uint16_t x398 = 10U;
	uint16_t x399 = UINT16_MAX;
	static uint16_t x400 = 20U;
	volatile int32_t t86 = -255051758;

	t86 = (x397+(x398<=(x399-x400)));

	if (t86 != 25853743) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x402 = INT32_MIN;
	static uint32_t x403 = 29192326U;
	int8_t x404 = -1;

	t87 = (x401+(x402<=(x403-x404)));

	if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x405 = 58U;
	static uint16_t x406 = 3714U;
	static int64_t x407 = -1LL;
	int64_t x408 = -2195801592530LL;
	static int32_t t88 = -7;

	t88 = (x405+(x406<=(x407-x408)));

	if (t88 != 59) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x409 = -1;
	volatile int64_t x410 = -281LL;
	int16_t x411 = -4;
	uint8_t x412 = 5U;
	volatile int32_t t89 = -164627;

	t89 = (x409+(x410<=(x411-x412)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x416 = UINT32_MAX;

	t90 = (x413+(x414<=(x415-x416)));

	if (t90 != 983731297U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x418 = 25780590LL;
	uint64_t x419 = 32330771742LLU;
	volatile int32_t x420 = 26;
	volatile int32_t t91 = 263;

	t91 = (x417+(x418<=(x419-x420)));

	if (t91 != 6) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x421 = -10;
	int32_t x422 = 1;
	int64_t x423 = -1LL;
	static int8_t x424 = -1;
	volatile int32_t t92 = -29977845;

	t92 = (x421+(x422<=(x423-x424)));

	if (t92 != -10) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x425 = 11U;
	int16_t x426 = -1;
	int8_t x427 = -21;
	static uint8_t x428 = 1U;
	volatile int32_t t93 = -480;

	t93 = (x425+(x426<=(x427-x428)));

	if (t93 != 11) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x429 = 544682482LL;
	uint8_t x431 = 49U;
	int16_t x432 = INT16_MAX;
	volatile int64_t t94 = 2063131342172LL;

	t94 = (x429+(x430<=(x431-x432)));

	if (t94 != 544682482LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x433 = -1LL;
	int16_t x435 = 0;
	int64_t t95 = -60349534LL;

	t95 = (x433+(x434<=(x435-x436)));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x437 = 3U;
	int64_t x439 = 14LL;
	static int8_t x440 = 0;
	volatile uint32_t t96 = 1069460U;

	t96 = (x437+(x438<=(x439-x440)));

	if (t96 != 3U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x441 = -1LL;
	static int64_t x442 = -3511013186744230LL;
	int32_t x443 = INT32_MIN;
	uint8_t x444 = 0U;
	int64_t t97 = 352245175384595787LL;

	t97 = (x441+(x442<=(x443-x444)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x445 = INT8_MIN;
	int32_t x446 = 3;
	int32_t x447 = INT32_MIN;
	int8_t x448 = INT8_MIN;
	int32_t t98 = 220147;

	t98 = (x445+(x446<=(x447-x448)));

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x449 = -1;
	uint64_t x450 = 6103450LLU;
	int32_t x451 = 1;
	uint32_t x452 = 86314U;
	int32_t t99 = -10;

	t99 = (x449+(x450<=(x451-x452)));

	if (t99 != 0) { NG(); } else { ; }
	
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

