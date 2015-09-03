#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t t1 = -2997LL;
volatile int64_t x9 = 47839102695160300LL;
uint32_t x10 = UINT32_MAX;
volatile int64_t t2 = 355970043463561582LL;
int64_t x15 = -1536266016678936LL;
volatile uint8_t x18 = UINT8_MAX;
volatile uint8_t x21 = 1U;
volatile uint8_t x23 = UINT8_MAX;
static volatile int64_t x26 = -1LL;
int32_t x27 = INT32_MIN;
volatile uint8_t x32 = 42U;
int8_t x39 = 7;
volatile int64_t t11 = 1375085LL;
uint8_t x58 = UINT8_MAX;
volatile int8_t x66 = INT8_MIN;
volatile uint32_t t15 = 1281562382U;
static int16_t x73 = INT16_MIN;
int8_t x74 = INT8_MIN;
uint32_t x75 = 3963487U;
volatile int32_t t17 = -34147354;
int32_t t18 = -161519;
uint64_t x82 = 1068554873653985975LLU;
int32_t x97 = -1;
static int64_t x101 = -422664760583983659LL;
int8_t x102 = INT8_MAX;
uint32_t x104 = 1091062954U;
volatile uint32_t x106 = 292922601U;
static uint64_t x114 = UINT64_MAX;
uint8_t x125 = 13U;
int16_t x127 = INT16_MIN;
static volatile int16_t x129 = INT16_MIN;
volatile int8_t x130 = INT8_MIN;
int8_t x131 = INT8_MAX;
int32_t x132 = 20474291;
uint64_t t31 = 1LLU;
uint32_t x141 = 1321287407U;
int64_t x142 = INT64_MIN;
volatile int32_t t34 = 1045;
static int32_t x156 = -1;
volatile int64_t x170 = INT64_MIN;
uint16_t x187 = UINT16_MAX;
uint64_t x192 = 87503LLU;
int8_t x195 = -24;
volatile uint32_t x196 = UINT32_MAX;
uint64_t x198 = 92LLU;
volatile int16_t x199 = -1;
int32_t x207 = INT32_MIN;
int8_t x215 = INT8_MAX;
uint16_t x221 = 1310U;
volatile int64_t x222 = -4330175213282LL;
volatile int8_t x223 = INT8_MIN;
static int64_t t49 = 1361LL;
uint8_t x228 = 28U;
int64_t t50 = 1190501823374LL;
volatile int16_t x229 = 123;
int8_t x234 = -1;
int32_t x236 = INT32_MAX;
uint64_t x253 = UINT64_MAX;
uint32_t x262 = UINT32_MAX;
uint32_t t59 = 7678135U;
int16_t x279 = INT16_MIN;
volatile uint32_t t63 = 294602707U;
uint64_t x285 = 10LLU;
static uint32_t x303 = UINT32_MAX;
uint16_t x306 = 0U;
static int8_t x308 = 0;
volatile int32_t t68 = 0;
int16_t x311 = -1;
int8_t x333 = -2;
static volatile int16_t x337 = INT16_MIN;
static int64_t x343 = INT64_MIN;
uint32_t t77 = 1001889655U;
uint64_t x349 = UINT64_MAX;
volatile uint16_t x351 = 9174U;
uint8_t x353 = 27U;
static volatile uint8_t x354 = UINT8_MAX;
int64_t x364 = 2291808189695004169LL;
volatile uint16_t x371 = 48U;
static volatile int8_t x373 = -3;
int16_t x374 = INT16_MIN;
volatile int32_t x376 = -1;
int32_t x380 = INT32_MIN;
uint16_t x381 = 1007U;
volatile uint64_t x392 = 58152LLU;
int8_t x399 = INT8_MAX;
int64_t x413 = INT64_MIN;
static volatile int64_t x416 = INT64_MIN;
static int8_t x420 = INT8_MIN;
static int16_t x421 = 19;
int16_t x422 = INT16_MAX;
uint8_t x424 = 0U;
int16_t x426 = -340;
static volatile int32_t t98 = -3863517;
int64_t x437 = -515803638182LL;
static uint8_t x438 = 23U;
uint32_t x439 = UINT32_MAX;


void f0(void) {
	static volatile int8_t x1 = -6;
	static volatile int32_t x2 = -416844;
	int32_t x3 = -1309;
	uint32_t x4 = 120U;
	volatile int32_t t0 = 20725263;

	t0 = (x1+(x2^(x3<=x4)));

	if (t0 != -416850) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	static int64_t x6 = -5211620992LL;
	volatile int16_t x7 = -1;
	uint32_t x8 = UINT32_MAX;

	t1 = (x5+(x6^(x7<=x8)));

	if (t1 != -5211653759LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x11 = 3U;
	uint8_t x12 = 7U;

	t2 = (x9+(x10^(x11<=x12)));

	if (t2 != 47839106990127594LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 0U;
	static uint32_t x14 = 1009462U;
	volatile uint16_t x16 = 9U;
	uint32_t t3 = 412922060U;

	t3 = (x13+(x14^(x15<=x16)));

	if (t3 != 1009463U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -3;
	int8_t x19 = -1;
	uint32_t x20 = 713U;
	int32_t t4 = -120592;

	t4 = (x17+(x18^(x19<=x20)));

	if (t4 != 252) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = INT16_MAX;
	int32_t x24 = INT32_MAX;
	int32_t t5 = 10295;

	t5 = (x21+(x22^(x23<=x24)));

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int8_t x28 = INT8_MIN;
	static volatile int64_t t6 = 14250530405523LL;

	t6 = (x25+(x26^(x27<=x28)));

	if (t6 != -2147483650LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 0U;
	int32_t x30 = -12457;
	int8_t x31 = INT8_MIN;
	volatile int32_t t7 = 0;

	t7 = (x29+(x30^(x31<=x32)));

	if (t7 != -12458) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -4;
	uint64_t x34 = 8182267888099251LLU;
	int16_t x35 = 0;
	int8_t x36 = INT8_MIN;
	uint64_t t8 = 7607065LLU;

	t8 = (x33+(x34^(x35<=x36)));

	if (t8 != 8182267888099247LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 18371534256LLU;
	static int32_t x38 = INT32_MAX;
	static int32_t x40 = -1;
	volatile uint64_t t9 = 387063704LLU;

	t9 = (x37+(x38^(x39<=x40)));

	if (t9 != 20519017903LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x41 = 81710362U;
	int32_t x42 = INT32_MIN;
	uint8_t x43 = 3U;
	static int64_t x44 = INT64_MAX;
	static volatile uint32_t t10 = 11658U;

	t10 = (x41+(x42^(x43<=x44)));

	if (t10 != 2229194011U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	uint32_t x46 = 1517U;
	static volatile int32_t x47 = INT32_MIN;
	static int64_t x48 = INT64_MIN;

	t11 = (x45+(x46^(x47<=x48)));

	if (t11 != -9223372036854774291LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	uint64_t x50 = 85964619740809LLU;
	volatile uint32_t x51 = 337U;
	int8_t x52 = INT8_MAX;
	uint64_t t12 = 77292412489LLU;

	t12 = (x49+(x50^(x51<=x52)));

	if (t12 != 9223458001474516617LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	volatile int64_t x54 = INT64_MIN;
	int16_t x55 = -1;
	uint32_t x56 = UINT32_MAX;
	int64_t t13 = 6572970658409LL;

	t13 = (x53+(x54^(x55<=x56)));

	if (t13 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = 639U;
	static uint16_t x59 = UINT16_MAX;
	static uint8_t x60 = 3U;
	int32_t t14 = -59;

	t14 = (x57+(x58^(x59<=x60)));

	if (t14 != 894) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 66U;
	volatile int8_t x67 = -52;
	volatile int64_t x68 = -1LL;

	t15 = (x65+(x66^(x67<=x68)));

	if (t15 != 4294967235U) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -1;
	int32_t x70 = INT32_MIN;
	int8_t x71 = -1;
	uint8_t x72 = 15U;
	volatile int32_t t16 = INT32_MIN;

	t16 = (x69+(x70^(x71<=x72)));

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x76 = UINT64_MAX;

	t17 = (x73+(x74^(x75<=x76)));

	if (t17 != -32895) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint8_t x77 = UINT8_MAX;
	uint16_t x78 = 0U;
	int64_t x79 = INT64_MIN;
	volatile uint16_t x80 = 3380U;

	t18 = (x77+(x78^(x79<=x80)));

	if (t18 != 256) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = 2LL;
	int32_t x83 = INT32_MIN;
	static int16_t x84 = 2599;
	uint64_t t19 = 0LLU;

	t19 = (x81+(x82^(x83<=x84)));

	if (t19 != 1068554873653985976LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = 38U;
	uint64_t x86 = UINT64_MAX;
	static uint8_t x87 = 0U;
	volatile int8_t x88 = INT8_MIN;
	static uint64_t t20 = 4819691228089279437LLU;

	t20 = (x85+(x86^(x87<=x88)));

	if (t20 != 37LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = -1;
	volatile int32_t x90 = INT32_MIN;
	int32_t x91 = INT32_MIN;
	volatile uint16_t x92 = 24U;
	static volatile int32_t t21 = INT32_MIN;

	t21 = (x89+(x90^(x91<=x92)));

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = 22LL;
	int32_t x94 = INT32_MIN;
	uint32_t x95 = 881183U;
	int16_t x96 = -6;
	volatile int64_t t22 = -4043742216LL;

	t22 = (x93+(x94^(x95<=x96)));

	if (t22 != -2147483625LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x98 = 2U;
	static int16_t x99 = 455;
	static int16_t x100 = INT16_MIN;
	volatile int32_t t23 = -217;

	t23 = (x97+(x98^(x99<=x100)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x103 = 840U;
	volatile int64_t t24 = -467754LL;

	t24 = (x101+(x102^(x103<=x104)));

	if (t24 != -422664760583983533LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 1177409473047963432LLU;
	int16_t x107 = -1;
	volatile int32_t x108 = 1408781;
	volatile uint64_t t25 = 20304760048425636LLU;

	t25 = (x105+(x106^(x107<=x108)));

	if (t25 != 1177409473340886032LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = -1LL;
	int64_t x115 = INT64_MAX;
	int32_t x116 = INT32_MAX;
	uint64_t t26 = 1216143970086LLU;

	t26 = (x113+(x114^(x115<=x116)));

	if (t26 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x117 = 39;
	int16_t x118 = INT16_MIN;
	int8_t x119 = 50;
	int32_t x120 = INT32_MAX;
	volatile int32_t t27 = 0;

	t27 = (x117+(x118^(x119<=x120)));

	if (t27 != -32728) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x121 = 119297891LLU;
	volatile int16_t x122 = -7;
	static uint16_t x123 = 1521U;
	static int8_t x124 = 6;
	uint64_t t28 = 31645098LLU;

	t28 = (x121+(x122^(x123<=x124)));

	if (t28 != 119297884LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x126 = -201130152758931LL;
	int16_t x128 = -1;
	volatile int64_t t29 = 2517889132LL;

	t29 = (x125+(x126^(x127<=x128)));

	if (t29 != -201130152758919LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t t30 = -4740;

	t30 = (x129+(x130^(x131<=x132)));

	if (t30 != -32895) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x133 = 1594428457948950LLU;
	int8_t x134 = INT8_MIN;
	static volatile int64_t x135 = INT64_MIN;
	volatile uint8_t x136 = UINT8_MAX;

	t31 = (x133+(x134^(x135<=x136)));

	if (t31 != 1594428457948823LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = INT16_MAX;
	int64_t x138 = -1LL;
	static uint64_t x139 = 1LLU;
	static int8_t x140 = INT8_MIN;
	volatile int64_t t32 = -8733405543682LL;

	t32 = (x137+(x138^(x139<=x140)));

	if (t32 != 32765LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x143 = INT64_MIN;
	static volatile int32_t x144 = -5580636;
	volatile int64_t t33 = -579135671720LL;

	t33 = (x141+(x142^(x143<=x144)));

	if (t33 != -9223372035533488400LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x145 = INT32_MIN;
	static int16_t x146 = INT16_MAX;
	int64_t x147 = INT64_MAX;
	int32_t x148 = INT32_MAX;

	t34 = (x145+(x146^(x147<=x148)));

	if (t34 != -2147450881) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = INT8_MAX;
	uint8_t x154 = UINT8_MAX;
	volatile uint64_t x155 = 8403751120451386327LLU;
	int32_t t35 = -148758661;

	t35 = (x153+(x154^(x155<=x156)));

	if (t35 != 381) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x157 = 29U;
	int32_t x158 = -1;
	int64_t x159 = INT64_MIN;
	volatile int32_t x160 = -656408;
	int32_t t36 = 236554181;

	t36 = (x157+(x158^(x159<=x160)));

	if (t36 != 27) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x161 = INT16_MAX;
	int8_t x162 = INT8_MIN;
	static int16_t x163 = 1792;
	volatile uint8_t x164 = UINT8_MAX;
	int32_t t37 = 9698;

	t37 = (x161+(x162^(x163<=x164)));

	if (t37 != 32639) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = -1;
	static int64_t x171 = -1LL;
	static uint8_t x172 = 85U;
	int64_t t38 = INT64_MIN;

	t38 = (x169+(x170^(x171<=x172)));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = -1;
	int8_t x174 = -1;
	static uint32_t x175 = UINT32_MAX;
	int64_t x176 = -1LL;
	int32_t t39 = -6628;

	t39 = (x173+(x174^(x175<=x176)));

	if (t39 != -2) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = INT16_MIN;
	static int64_t x178 = INT64_MAX;
	volatile uint16_t x179 = 0U;
	static int32_t x180 = INT32_MIN;
	static volatile int64_t t40 = -111699594194885574LL;

	t40 = (x177+(x178^(x179<=x180)));

	if (t40 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x181 = 7515380LLU;
	int8_t x182 = INT8_MIN;
	int16_t x183 = INT16_MAX;
	static int64_t x184 = -1LL;
	volatile uint64_t t41 = 13627277638388LLU;

	t41 = (x181+(x182^(x183<=x184)));

	if (t41 != 7515252LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = INT8_MIN;
	static int32_t x186 = -1;
	int32_t x188 = INT32_MAX;
	int32_t t42 = -17076029;

	t42 = (x185+(x186^(x187<=x188)));

	if (t42 != -130) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x189 = 113U;
	volatile int32_t x190 = 126837359;
	int64_t x191 = -1LL;
	int32_t t43 = -234;

	t43 = (x189+(x190^(x191<=x192)));

	if (t43 != 126837472) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x193 = INT16_MAX;
	int8_t x194 = 1;
	volatile int32_t t44 = -2306;

	t44 = (x193+(x194^(x195<=x196)));

	if (t44 != 32767) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x197 = -1;
	int8_t x200 = -1;
	uint64_t t45 = 599566090LLU;

	t45 = (x197+(x198^(x199<=x200)));

	if (t45 != 92LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x205 = 3554U;
	uint64_t x206 = 1120190661935LLU;
	static int8_t x208 = INT8_MIN;
	uint64_t t46 = 8782872LLU;

	t46 = (x205+(x206^(x207<=x208)));

	if (t46 != 1120190665488LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x213 = 23324603034903505LL;
	static int32_t x214 = -375505331;
	static uint32_t x216 = UINT32_MAX;
	int64_t t47 = -20736401944238317LL;

	t47 = (x213+(x214^(x215<=x216)));

	if (t47 != 23324602659398173LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x217 = -1LL;
	int16_t x218 = -1;
	static int64_t x219 = INT64_MIN;
	volatile uint32_t x220 = 12737U;
	int64_t t48 = 42LL;

	t48 = (x217+(x218^(x219<=x220)));

	if (t48 != -3LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x224 = -94;

	t49 = (x221+(x222^(x223<=x224)));

	if (t49 != -4330175211971LL) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x225 = UINT16_MAX;
	static int64_t x226 = INT64_MIN;
	static int16_t x227 = INT16_MIN;

	t50 = (x225+(x226^(x227<=x228)));

	if (t50 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x230 = INT8_MAX;
	int8_t x231 = INT8_MIN;
	int16_t x232 = -1;
	int32_t t51 = 1;

	t51 = (x229+(x230^(x231<=x232)));

	if (t51 != 249) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x233 = INT16_MIN;
	int64_t x235 = 29162LL;
	static volatile int32_t t52 = 520326;

	t52 = (x233+(x234^(x235<=x236)));

	if (t52 != -32770) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x237 = -1;
	uint64_t x238 = 63995974540134LLU;
	int32_t x239 = -1;
	int8_t x240 = INT8_MIN;
	uint64_t t53 = 51024833737000LLU;

	t53 = (x237+(x238^(x239<=x240)));

	if (t53 != 63995974540133LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x241 = INT8_MAX;
	int64_t x242 = -1LL;
	static uint8_t x243 = 32U;
	int32_t x244 = -8;
	volatile int64_t t54 = 273LL;

	t54 = (x241+(x242^(x243<=x244)));

	if (t54 != 126LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x245 = INT8_MAX;
	int32_t x246 = INT32_MIN;
	uint32_t x247 = 0U;
	static uint32_t x248 = 266U;
	volatile int32_t t55 = 246165;

	t55 = (x245+(x246^(x247<=x248)));

	if (t55 != -2147483520) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x249 = -6LL;
	static int8_t x250 = INT8_MIN;
	int64_t x251 = 35807LL;
	static int8_t x252 = 0;
	int64_t t56 = 4076335489914808LL;

	t56 = (x249+(x250^(x251<=x252)));

	if (t56 != -134LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x254 = 20257082;
	uint16_t x255 = UINT16_MAX;
	int16_t x256 = INT16_MIN;
	volatile uint64_t t57 = 12077LLU;

	t57 = (x253+(x254^(x255<=x256)));

	if (t57 != 20257081LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x257 = 67U;
	int8_t x258 = INT8_MIN;
	int32_t x259 = INT32_MIN;
	int8_t x260 = 0;
	static volatile int32_t t58 = -2;

	t58 = (x257+(x258^(x259<=x260)));

	if (t58 != -60) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x261 = INT8_MIN;
	int32_t x263 = 4;
	static int64_t x264 = 111LL;

	t59 = (x261+(x262^(x263<=x264)));

	if (t59 != 4294967166U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x265 = INT64_MAX;
	uint64_t x266 = 70561702267379704LLU;
	int32_t x267 = INT32_MIN;
	uint8_t x268 = 32U;
	uint64_t t60 = 111LLU;

	t60 = (x265+(x266^(x267<=x268)));

	if (t60 != 9293933739122155512LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x269 = UINT32_MAX;
	int8_t x270 = 9;
	int32_t x271 = INT32_MIN;
	uint64_t x272 = 20643516715313008LLU;
	uint32_t t61 = 868594571U;

	t61 = (x269+(x270^(x271<=x272)));

	if (t61 != 8U) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x273 = UINT32_MAX;
	static int8_t x274 = INT8_MAX;
	uint8_t x275 = UINT8_MAX;
	static int32_t x276 = INT32_MIN;
	uint32_t t62 = 8672U;

	t62 = (x273+(x274^(x275<=x276)));

	if (t62 != 126U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x277 = INT32_MAX;
	static uint32_t x278 = 77U;
	uint64_t x280 = 1330306298026161139LLU;

	t63 = (x277+(x278^(x279<=x280)));

	if (t63 != 2147483724U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x286 = UINT32_MAX;
	uint16_t x287 = 4984U;
	volatile uint64_t x288 = UINT64_MAX;
	volatile uint64_t t64 = 262053914LLU;

	t64 = (x285+(x286^(x287<=x288)));

	if (t64 != 4294967304LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x293 = UINT8_MAX;
	int32_t x294 = -1;
	static int8_t x295 = INT8_MAX;
	int64_t x296 = -33897820530578862LL;
	volatile int32_t t65 = 88653878;

	t65 = (x293+(x294^(x295<=x296)));

	if (t65 != 254) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x297 = 715203718U;
	int64_t x298 = INT64_MIN;
	int8_t x299 = 0;
	int8_t x300 = -38;
	int64_t t66 = -4850788LL;

	t66 = (x297+(x298^(x299<=x300)));

	if (t66 != -9223372036139572090LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x301 = INT8_MAX;
	int16_t x302 = INT16_MAX;
	static int32_t x304 = INT32_MAX;
	static volatile int32_t t67 = 109909984;

	t67 = (x301+(x302^(x303<=x304)));

	if (t67 != 32894) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x305 = INT16_MIN;
	int16_t x307 = -22;

	t68 = (x305+(x306^(x307<=x308)));

	if (t68 != -32767) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x309 = -1;
	uint16_t x310 = 8U;
	int64_t x312 = 212075LL;
	volatile int32_t t69 = 54;

	t69 = (x309+(x310^(x311<=x312)));

	if (t69 != 8) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x313 = 0;
	int64_t x314 = 824222569506LL;
	uint64_t x315 = 1949677913041853LLU;
	int16_t x316 = INT16_MIN;
	volatile int64_t t70 = 48496012845286589LL;

	t70 = (x313+(x314^(x315<=x316)));

	if (t70 != 824222569507LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x317 = 1;
	int32_t x318 = -1;
	volatile int8_t x319 = -1;
	uint32_t x320 = UINT32_MAX;
	int32_t t71 = -17941;

	t71 = (x317+(x318^(x319<=x320)));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x321 = INT8_MAX;
	int64_t x322 = -145007353054786504LL;
	uint64_t x323 = 4LLU;
	uint16_t x324 = 31U;
	volatile int64_t t72 = 28LL;

	t72 = (x321+(x322^(x323<=x324)));

	if (t72 != -145007353054786376LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x325 = 737522U;
	static uint32_t x326 = UINT32_MAX;
	int64_t x327 = 4338843013127LL;
	static uint16_t x328 = UINT16_MAX;
	uint32_t t73 = 942U;

	t73 = (x325+(x326^(x327<=x328)));

	if (t73 != 737521U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x329 = -1;
	int64_t x330 = INT64_MIN;
	int16_t x331 = -6;
	uint16_t x332 = 1069U;
	volatile int64_t t74 = INT64_MIN;

	t74 = (x329+(x330^(x331<=x332)));

	if (t74 != INT64_MIN) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x334 = UINT16_MAX;
	int32_t x335 = -144;
	static int16_t x336 = -1;
	int32_t t75 = -1913479;

	t75 = (x333+(x334^(x335<=x336)));

	if (t75 != 65532) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x338 = INT16_MIN;
	uint64_t x339 = UINT64_MAX;
	int64_t x340 = INT64_MAX;
	static volatile int32_t t76 = -498;

	t76 = (x337+(x338^(x339<=x340)));

	if (t76 != -65536) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x341 = 4U;
	uint32_t x342 = UINT32_MAX;
	int16_t x344 = INT16_MIN;

	t77 = (x341+(x342^(x343<=x344)));

	if (t77 != 2U) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x345 = INT8_MAX;
	int32_t x346 = INT32_MIN;
	static uint8_t x347 = 3U;
	int32_t x348 = -24741911;
	volatile int32_t t78 = -151842659;

	t78 = (x345+(x346^(x347<=x348)));

	if (t78 != -2147483521) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x350 = INT32_MIN;
	int64_t x352 = INT64_MIN;
	static uint64_t t79 = 1568719912439862LLU;

	t79 = (x349+(x350^(x351<=x352)));

	if (t79 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x355 = INT16_MIN;
	uint8_t x356 = 0U;
	static int32_t t80 = -50694572;

	t80 = (x353+(x354^(x355<=x356)));

	if (t80 != 281) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x361 = INT8_MAX;
	int64_t x362 = -1LL;
	int64_t x363 = 30488LL;
	volatile int64_t t81 = -51840975LL;

	t81 = (x361+(x362^(x363<=x364)));

	if (t81 != 125LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x365 = UINT16_MAX;
	int16_t x366 = INT16_MIN;
	int32_t x367 = -1;
	static int32_t x368 = -1;
	int32_t t82 = 31981590;

	t82 = (x365+(x366^(x367<=x368)));

	if (t82 != 32768) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x369 = -105;
	static int16_t x370 = 86;
	int8_t x372 = INT8_MAX;
	static volatile int32_t t83 = 93;

	t83 = (x369+(x370^(x371<=x372)));

	if (t83 != -18) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x375 = INT8_MAX;
	int32_t t84 = 5751896;

	t84 = (x373+(x374^(x375<=x376)));

	if (t84 != -32771) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x377 = 6U;
	int16_t x378 = INT16_MAX;
	volatile int64_t x379 = -65LL;
	int32_t t85 = -1012;

	t85 = (x377+(x378^(x379<=x380)));

	if (t85 != 32773) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x382 = INT8_MIN;
	uint8_t x383 = 2U;
	int16_t x384 = 1;
	volatile int32_t t86 = -463;

	t86 = (x381+(x382^(x383<=x384)));

	if (t86 != 879) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x385 = 2;
	volatile int32_t x386 = 323714407;
	int8_t x387 = 51;
	volatile uint32_t x388 = UINT32_MAX;
	int32_t t87 = -16528;

	t87 = (x385+(x386^(x387<=x388)));

	if (t87 != 323714408) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x389 = -1;
	int64_t x390 = 105195010247181479LL;
	static int32_t x391 = -1;
	static volatile int64_t t88 = 1935376LL;

	t88 = (x389+(x390^(x391<=x392)));

	if (t88 != 105195010247181478LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x397 = UINT64_MAX;
	static int32_t x398 = -51127;
	uint16_t x400 = 3345U;
	uint64_t t89 = 412641LLU;

	t89 = (x397+(x398^(x399<=x400)));

	if (t89 != 18446744073709500487LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x401 = -1;
	static uint64_t x402 = 13LLU;
	static uint8_t x403 = UINT8_MAX;
	int16_t x404 = -702;
	static uint64_t t90 = 2334860994952969LLU;

	t90 = (x401+(x402^(x403<=x404)));

	if (t90 != 12LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x405 = -1;
	int16_t x406 = INT16_MIN;
	int16_t x407 = INT16_MAX;
	int16_t x408 = 1962;
	int32_t t91 = -90;

	t91 = (x405+(x406^(x407<=x408)));

	if (t91 != -32769) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x409 = -1;
	static int16_t x410 = INT16_MAX;
	volatile uint16_t x411 = 2U;
	int8_t x412 = -1;
	volatile int32_t t92 = 50726566;

	t92 = (x409+(x410^(x411<=x412)));

	if (t92 != 32766) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x414 = 1;
	static volatile uint16_t x415 = 1112U;
	int64_t t93 = -22517LL;

	t93 = (x413+(x414^(x415<=x416)));

	if (t93 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x417 = 2723554741LLU;
	static int16_t x418 = INT16_MIN;
	uint64_t x419 = 39917961LLU;
	uint64_t t94 = 27669490065439LLU;

	t94 = (x417+(x418^(x419<=x420)));

	if (t94 != 2723521974LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x423 = 1U;
	int32_t t95 = 903;

	t95 = (x421+(x422^(x423<=x424)));

	if (t95 != 32786) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x425 = -1;
	static uint32_t x427 = 28040U;
	int64_t x428 = INT64_MIN;
	volatile int32_t t96 = -21103076;

	t96 = (x425+(x426^(x427<=x428)));

	if (t96 != -341) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x429 = 257497380155437268LLU;
	int16_t x430 = INT16_MAX;
	static uint32_t x431 = 3U;
	int64_t x432 = -1LL;
	volatile uint64_t t97 = 26726LLU;

	t97 = (x429+(x430^(x431<=x432)));

	if (t97 != 257497380155470035LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x433 = 23;
	static volatile int8_t x434 = INT8_MAX;
	int16_t x435 = INT16_MAX;
	int32_t x436 = INT32_MAX;

	t98 = (x433+(x434^(x435<=x436)));

	if (t98 != 149) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x440 = 7;
	volatile int64_t t99 = -1802282402211LL;

	t99 = (x437+(x438^(x439<=x440)));

	if (t99 != -515803638159LL) { NG(); } else { ; }
	
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

