#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x12 = 7;
int64_t t0 = -2098597251376730716LL;
int16_t x13 = INT16_MIN;
int8_t x15 = -1;
static int32_t x16 = INT32_MIN;
int32_t x20 = 118363151;
int16_t x24 = -124;
static volatile int16_t x26 = INT16_MIN;
int32_t x27 = INT32_MIN;
uint16_t x31 = 38U;
static volatile int64_t t7 = -10671252LL;
int32_t x44 = INT32_MIN;
volatile int16_t x45 = -6;
volatile int32_t x46 = INT32_MIN;
static int32_t x55 = 2968139;
uint32_t x63 = 791271U;
static volatile int64_t t14 = 37427281943608LL;
int32_t x75 = INT32_MAX;
int32_t x78 = INT32_MAX;
int64_t t17 = 33345205541LL;
uint16_t x91 = 22619U;
static int64_t x93 = -1LL;
int64_t x95 = INT64_MIN;
int16_t x97 = 7726;
volatile int8_t x98 = 1;
int16_t x101 = -89;
static int32_t t24 = 916955;
uint64_t x109 = 247LLU;
static int32_t x113 = 158913;
uint64_t t27 = 17660478016275288LLU;
int32_t x121 = INT32_MAX;
static uint16_t x124 = 30597U;
static uint32_t x129 = 164399526U;
volatile uint32_t t30 = 45208U;
uint32_t x135 = 2U;
static uint16_t x141 = UINT16_MAX;
volatile int32_t t32 = 2123;
static int16_t x146 = -37;
static volatile int32_t t33 = 2;
static uint64_t x149 = 116937739783LLU;
static int8_t x150 = 3;
static uint16_t x158 = UINT16_MAX;
static int16_t x162 = 2;
static volatile int8_t x164 = INT8_MIN;
uint32_t x179 = 11833U;
volatile int64_t t40 = 502541493186LL;
int32_t x181 = INT32_MIN;
int64_t x184 = -1LL;
int32_t x188 = INT32_MIN;
int16_t x199 = 8079;
volatile int64_t x208 = 551472LL;
uint64_t t47 = UINT64_MAX;
uint64_t x211 = UINT64_MAX;
uint64_t x223 = UINT64_MAX;
int8_t x224 = INT8_MIN;
int16_t x225 = INT16_MIN;
int32_t x243 = INT32_MAX;
uint32_t x246 = 48121U;
static uint64_t x249 = 2370085514711250LLU;
static int64_t x251 = INT64_MAX;
volatile uint64_t t57 = 921682494926LLU;
volatile int64_t t58 = 245552LL;
static volatile uint32_t t59 = UINT32_MAX;
volatile uint16_t x261 = 295U;
uint16_t x264 = 12894U;
volatile int16_t x269 = -1;
int32_t x275 = -1;
volatile uint64_t t63 = 10147528517412709LLU;
int64_t x277 = INT64_MAX;
uint8_t x283 = UINT8_MAX;
int16_t x285 = 1;
int32_t x287 = 310;
volatile int8_t x299 = -1;
int64_t x307 = INT64_MAX;
volatile uint64_t x308 = 4053600218220310640LLU;
static int64_t x313 = -1LL;
int32_t x319 = INT32_MIN;
static uint64_t t76 = 11592575LLU;
int32_t x338 = INT32_MIN;
uint32_t x341 = 58U;
volatile uint32_t x347 = 204U;
static int64_t x348 = INT64_MIN;
volatile int16_t x362 = -26;
uint32_t x363 = 185213984U;
int64_t x365 = 6784932703861663LL;
int32_t x369 = INT32_MIN;
uint64_t x370 = UINT64_MAX;
uint64_t x371 = UINT64_MAX;
static uint8_t x375 = 17U;
uint8_t x376 = 48U;
int32_t t86 = 108036030;
uint64_t t87 = 5191292002140233LLU;
int64_t t88 = INT64_MAX;
int8_t x402 = -13;
int32_t x403 = INT32_MAX;
volatile int16_t x404 = INT16_MIN;
volatile int16_t x408 = INT16_MIN;
int64_t x415 = -1LL;
static int64_t t93 = -16962LL;
static uint64_t t94 = 1406730201LLU;
uint8_t x430 = UINT8_MAX;
volatile int16_t x432 = INT16_MIN;
volatile int32_t t97 = -2358802;
int64_t x435 = INT64_MAX;
uint64_t t99 = UINT64_MAX;


void f0(void) {
	int32_t x9 = 2636364;
	volatile int32_t x10 = INT32_MIN;
	volatile int64_t x11 = -1286354572511008LL;

	t0 = (x9|(x10+(x11%x12)));

	if (t0 != -2144847284LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x14 = 746562193LLU;
	uint64_t t1 = 2LLU;

	t1 = (x13|(x14+(x15%x16)));

	if (t1 != 18446744073709527696LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x17 = -1;
	int8_t x18 = INT8_MIN;
	static uint64_t x19 = UINT64_MAX;
	static volatile uint64_t t2 = UINT64_MAX;

	t2 = (x17|(x18+(x19%x20)));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x21 = UINT8_MAX;
	int16_t x22 = INT16_MAX;
	uint64_t x23 = UINT64_MAX;
	volatile uint64_t t3 = 7LLU;

	t3 = (x21|(x22+(x23%x24)));

	if (t3 != 33023LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x25 = -1LL;
	static uint32_t x28 = UINT32_MAX;
	int64_t t4 = -135407870167051LL;

	t4 = (x25|(x26+(x27%x28)));

	if (t4 != -1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = INT32_MAX;
	uint16_t x30 = UINT16_MAX;
	volatile int32_t x32 = 325;
	int32_t t5 = INT32_MAX;

	t5 = (x29|(x30+(x31%x32)));

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x33 = UINT8_MAX;
	int64_t x34 = INT64_MIN;
	volatile uint64_t x35 = 6717064498684952LLU;
	int8_t x36 = INT8_MIN;
	static volatile uint64_t t6 = 58667852499368LLU;

	t6 = (x33|(x34+(x35%x36)));

	if (t6 != 9230089101353460991LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x37 = 3U;
	int64_t x38 = INT64_MIN;
	uint32_t x39 = 5803388U;
	uint8_t x40 = UINT8_MAX;

	t7 = (x37|(x38+(x39%x40)));

	if (t7 != -9223372036854775709LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x41 = UINT32_MAX;
	static uint64_t x42 = 1103570401819183468LLU;
	static int8_t x43 = -6;
	volatile uint64_t t8 = 4797022982537429606LLU;

	t8 = (x41|(x42+(x43%x44)));

	if (t8 != 1103570401935491071LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x47 = 3588U;
	static int64_t x48 = INT64_MIN;
	int64_t t9 = 0LL;

	t9 = (x45|(x46+(x47%x48)));

	if (t9 != -2LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x49 = 44262972U;
	uint16_t x50 = UINT16_MAX;
	int32_t x51 = 119192229;
	static volatile uint16_t x52 = 1944U;
	volatile uint32_t t10 = 2108505535U;

	t10 = (x49|(x50+(x51%x52)));

	if (t10 != 44263100U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x53 = 2U;
	uint32_t x54 = 3761618U;
	static uint64_t x56 = 6LLU;
	volatile uint64_t t11 = 329435280541759LLU;

	t11 = (x53|(x54+(x55%x56)));

	if (t11 != 3761623LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x57 = 9656U;
	int32_t x58 = -1;
	int16_t x59 = INT16_MIN;
	volatile int32_t x60 = -1;
	int32_t t12 = 3090;

	t12 = (x57|(x58+(x59%x60)));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint16_t x61 = 1U;
	int16_t x62 = 6;
	int8_t x64 = INT8_MIN;
	uint32_t t13 = 3380419U;

	t13 = (x61|(x62+(x63%x64)));

	if (t13 != 791277U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = -1LL;
	volatile int64_t x66 = 0LL;
	uint32_t x67 = UINT32_MAX;
	int32_t x68 = INT32_MAX;

	t14 = (x65|(x66+(x67%x68)));

	if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = INT64_MAX;
	static uint64_t x70 = UINT64_MAX;
	int32_t x71 = INT32_MIN;
	static volatile uint64_t x72 = 28757665725LLU;
	uint64_t t15 = 61837064847174300LLU;

	t15 = (x69|(x70+(x71%x72)));

	if (t15 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x73 = -1;
	uint8_t x74 = UINT8_MAX;
	static int16_t x76 = -2027;
	int32_t t16 = -13476891;

	t16 = (x73|(x74+(x75%x76)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x77 = -354177497325602400LL;
	int64_t x79 = INT64_MIN;
	int32_t x80 = INT32_MIN;

	t17 = (x77|(x78+(x79%x80)));

	if (t17 != -354177496595300353LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x81 = INT64_MAX;
	int8_t x82 = 1;
	volatile uint16_t x83 = UINT16_MAX;
	volatile int32_t x84 = 315266;
	int64_t t18 = INT64_MAX;

	t18 = (x81|(x82+(x83%x84)));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int16_t x85 = 2;
	static volatile uint32_t x86 = UINT32_MAX;
	int32_t x87 = -131347906;
	volatile uint16_t x88 = UINT16_MAX;
	static uint32_t t19 = 464U;

	t19 = (x85|(x86+(x87%x88)));

	if (t19 != 4294951531U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = 1121;
	int8_t x90 = INT8_MAX;
	int64_t x92 = -238189284LL;
	int64_t t20 = 0LL;

	t20 = (x89|(x90+(x91%x92)));

	if (t20 != 23803LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint64_t x94 = UINT64_MAX;
	int64_t x96 = -1LL;
	volatile uint64_t t21 = UINT64_MAX;

	t21 = (x93|(x94+(x95%x96)));

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x99 = INT32_MIN;
	volatile int64_t x100 = INT64_MIN;
	static int64_t t22 = 9219929839729049LL;

	t22 = (x97|(x98+(x99%x100)));

	if (t22 != -2147475921LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x102 = INT64_MIN;
	volatile int64_t x103 = INT64_MAX;
	int8_t x104 = 5;
	int64_t t23 = 1LL;

	t23 = (x101|(x102+(x103%x104)));

	if (t23 != -89LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x105 = 1;
	uint16_t x106 = UINT16_MAX;
	uint8_t x107 = UINT8_MAX;
	volatile int8_t x108 = INT8_MIN;

	t24 = (x105|(x106+(x107%x108)));

	if (t24 != 65663) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x110 = 74;
	uint16_t x111 = 29962U;
	int32_t x112 = 2765476;
	static volatile uint64_t t25 = 1076304087424022LLU;

	t25 = (x109|(x110+(x111%x112)));

	if (t25 != 30199LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x114 = -5;
	static int64_t x115 = -160565603LL;
	int16_t x116 = -7199;
	static volatile int64_t t26 = 10665919846031LL;

	t26 = (x113|(x114+(x115%x116)));

	if (t26 != -4135LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x117 = 313U;
	volatile uint32_t x118 = 116U;
	int8_t x119 = 62;
	uint64_t x120 = 47961577799367LLU;

	t27 = (x117|(x118+(x119%x120)));

	if (t27 != 443LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x122 = INT8_MAX;
	int64_t x123 = -1LL;
	volatile int64_t t28 = 1255145LL;

	t28 = (x121|(x122+(x123%x124)));

	if (t28 != 2147483647LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = INT64_MAX;
	int16_t x126 = -1;
	int32_t x127 = 148122;
	int16_t x128 = -1;
	static int64_t t29 = -7864LL;

	t29 = (x125|(x126+(x127%x128)));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x130 = UINT32_MAX;
	static int16_t x131 = INT16_MIN;
	uint8_t x132 = 5U;

	t30 = (x129|(x130+(x131%x132)));

	if (t30 != 4294967294U) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x133 = INT16_MAX;
	int16_t x134 = INT16_MIN;
	int16_t x136 = 460;
	static volatile uint32_t t31 = UINT32_MAX;

	t31 = (x133|(x134+(x135%x136)));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x142 = INT16_MIN;
	int8_t x143 = -11;
	static int16_t x144 = -98;

	t32 = (x141|(x142+(x143%x144)));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x145 = -1;
	static int8_t x147 = INT8_MIN;
	volatile uint8_t x148 = 6U;

	t33 = (x145|(x146+(x147%x148)));

	if (t33 != -1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x151 = INT16_MAX;
	static volatile uint8_t x152 = UINT8_MAX;
	static uint64_t t34 = 10598414693309LLU;

	t34 = (x149|(x150+(x151%x152)));

	if (t34 != 116937739911LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x153 = UINT64_MAX;
	int64_t x154 = -33823055262LL;
	static int16_t x155 = INT16_MAX;
	static int16_t x156 = 19;
	uint64_t t35 = UINT64_MAX;

	t35 = (x153|(x154+(x155%x156)));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x157 = -1;
	static int32_t x159 = 200;
	uint16_t x160 = 748U;
	int32_t t36 = 3162586;

	t36 = (x157|(x158+(x159%x160)));

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x161 = INT32_MAX;
	int64_t x163 = -2761150379420476515LL;
	volatile int64_t t37 = -3854787080529LL;

	t37 = (x161|(x162+(x163%x164)));

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x165 = UINT16_MAX;
	volatile int16_t x166 = INT16_MIN;
	static int8_t x167 = INT8_MAX;
	uint8_t x168 = UINT8_MAX;
	int32_t t38 = -1521;

	t38 = (x165|(x166+(x167%x168)));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x169 = -1;
	int64_t x170 = 521388154LL;
	uint64_t x171 = 36656882LLU;
	int64_t x172 = -1LL;
	volatile uint64_t t39 = UINT64_MAX;

	t39 = (x169|(x170+(x171%x172)));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = -1;
	int8_t x178 = -1;
	volatile int64_t x180 = INT64_MIN;

	t40 = (x177|(x178+(x179%x180)));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x182 = 13;
	int8_t x183 = -1;
	int64_t t41 = 23255914LL;

	t41 = (x181|(x182+(x183%x184)));

	if (t41 != -2147483635LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = -3;
	volatile uint64_t x186 = 0LLU;
	int64_t x187 = INT64_MIN;
	volatile uint64_t t42 = 10875LLU;

	t42 = (x185|(x186+(x187%x188)));

	if (t42 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x189 = 11368U;
	int8_t x190 = INT8_MIN;
	int16_t x191 = 935;
	volatile int64_t x192 = INT64_MIN;
	int64_t t43 = 1733852919491LL;

	t43 = (x189|(x190+(x191%x192)));

	if (t43 != 12143LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x193 = UINT64_MAX;
	static int8_t x194 = INT8_MIN;
	volatile int32_t x195 = -193983;
	volatile uint32_t x196 = 1748476186U;
	volatile uint64_t t44 = UINT64_MAX;

	t44 = (x193|(x194+(x195%x196)));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x197 = 12877U;
	int8_t x198 = 1;
	int16_t x200 = -6076;
	static volatile int32_t t45 = 1547;

	t45 = (x197|(x198+(x199%x200)));

	if (t45 != 14301) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x201 = INT8_MIN;
	static uint8_t x202 = UINT8_MAX;
	int8_t x203 = INT8_MIN;
	int16_t x204 = -1;
	volatile int32_t t46 = 77;

	t46 = (x201|(x202+(x203%x204)));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x205 = UINT64_MAX;
	int16_t x206 = INT16_MAX;
	int64_t x207 = -1LL;

	t47 = (x205|(x206+(x207%x208)));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x209 = INT32_MAX;
	static volatile int32_t x210 = -102;
	uint64_t x212 = 8932943406405949755LLU;
	volatile uint64_t t48 = 9976038573481510LLU;

	t48 = (x209|(x210+(x211%x212)));

	if (t48 != 580857261216235519LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = INT16_MIN;
	int64_t x214 = -422910808LL;
	static volatile int8_t x215 = -3;
	int16_t x216 = 35;
	int64_t t49 = 3355LL;

	t49 = (x213|(x214+(x215%x216)));

	if (t49 != -7003LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x217 = 21U;
	int32_t x218 = 11830;
	static int8_t x219 = INT8_MIN;
	static int16_t x220 = INT16_MIN;
	int32_t t50 = 25;

	t50 = (x217|(x218+(x219%x220)));

	if (t50 != 11703) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x221 = INT16_MIN;
	uint16_t x222 = 462U;
	volatile uint64_t t51 = 12086868584LLU;

	t51 = (x221|(x222+(x223%x224)));

	if (t51 != 18446744073709519437LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x226 = INT64_MIN;
	int64_t x227 = 2060993293519LL;
	int32_t x228 = -1;
	volatile int64_t t52 = -418546960010750LL;

	t52 = (x225|(x226+(x227%x228)));

	if (t52 != -32768LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x229 = -1;
	volatile int16_t x230 = INT16_MIN;
	uint8_t x231 = UINT8_MAX;
	uint32_t x232 = 358613U;
	uint32_t t53 = UINT32_MAX;

	t53 = (x229|(x230+(x231%x232)));

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x233 = 104199948LLU;
	static int8_t x234 = INT8_MIN;
	int32_t x235 = -1;
	uint32_t x236 = 161U;
	volatile uint64_t t54 = 107731661749209LLU;

	t54 = (x233|(x234+(x235%x236)));

	if (t54 != 4294967260LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x241 = 6786658LLU;
	int32_t x242 = INT32_MIN;
	int16_t x244 = INT16_MAX;
	uint64_t t55 = 164832606167288290LLU;

	t55 = (x241|(x242+(x243%x244)));

	if (t55 != 18446744071568854627LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x245 = 1574;
	volatile uint64_t x247 = 20LLU;
	volatile int32_t x248 = INT32_MIN;
	volatile uint64_t t56 = 2LLU;

	t56 = (x245|(x246+(x247%x248)));

	if (t56 != 48687LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x250 = 6276654LL;
	int32_t x252 = INT32_MIN;

	t57 = (x249|(x250+(x251%x252)));

	if (t57 != 2370085519873791LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x253 = INT64_MIN;
	int8_t x254 = INT8_MAX;
	static int32_t x255 = -254536251;
	uint16_t x256 = 5932U;

	t58 = (x253|(x254+(x255%x256)));

	if (t58 != -9223372036854775744LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x257 = UINT32_MAX;
	int8_t x258 = INT8_MAX;
	int16_t x259 = 1898;
	static volatile int32_t x260 = 816022424;

	t59 = (x257|(x258+(x259%x260)));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x262 = -53;
	int16_t x263 = INT16_MIN;
	int32_t t60 = 2094;

	t60 = (x261|(x262+(x263%x264)));

	if (t60 != -6745) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x265 = INT8_MIN;
	volatile uint16_t x266 = UINT16_MAX;
	volatile uint32_t x267 = UINT32_MAX;
	volatile uint64_t x268 = 8409701098317123LLU;
	static volatile uint64_t t61 = 2LLU;

	t61 = (x265|(x266+(x267%x268)));

	if (t61 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x270 = UINT16_MAX;
	static int64_t x271 = INT64_MIN;
	static int64_t x272 = 32954524568820LL;
	int64_t t62 = -1084829321011LL;

	t62 = (x269|(x270+(x271%x272)));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x273 = UINT8_MAX;
	uint16_t x274 = 237U;
	static uint64_t x276 = 29167684377LLU;

	t63 = (x273|(x274+(x275%x276)));

	if (t63 != 6130892031LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x278 = -255632816;
	volatile uint8_t x279 = UINT8_MAX;
	int16_t x280 = INT16_MIN;
	volatile int64_t t64 = 49291707LL;

	t64 = (x277|(x278+(x279%x280)));

	if (t64 != -1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x281 = INT32_MIN;
	volatile int32_t x282 = 1;
	uint32_t x284 = 505284U;
	static uint32_t t65 = 50952034U;

	t65 = (x281|(x282+(x283%x284)));

	if (t65 != 2147483904U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x286 = 4U;
	static int16_t x288 = -1;
	volatile uint32_t t66 = 94919087U;

	t66 = (x285|(x286+(x287%x288)));

	if (t66 != 5U) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x289 = INT8_MAX;
	static uint64_t x290 = 671997105958762252LLU;
	int8_t x291 = INT8_MAX;
	static int32_t x292 = INT32_MIN;
	volatile uint64_t t67 = 15247057615504LLU;

	t67 = (x289|(x290+(x291%x292)));

	if (t67 != 671997105958762495LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x293 = -1;
	static uint8_t x294 = UINT8_MAX;
	int32_t x295 = INT32_MIN;
	static int8_t x296 = 2;
	int32_t t68 = 1213188;

	t68 = (x293|(x294+(x295%x296)));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x297 = 49U;
	int64_t x298 = INT64_MAX;
	int64_t x300 = INT64_MAX;
	volatile int64_t t69 = INT64_MAX;

	t69 = (x297|(x298+(x299%x300)));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x301 = 121213902U;
	uint16_t x302 = 1U;
	volatile uint16_t x303 = 21U;
	static uint8_t x304 = UINT8_MAX;
	uint32_t t70 = 2434U;

	t70 = (x301|(x302+(x303%x304)));

	if (t70 != 121213918U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x305 = -17677496017110307LL;
	static volatile int32_t x306 = INT32_MIN;
	static volatile uint64_t t71 = 10044LLU;

	t71 = (x305|(x306+(x307%x308)));

	if (t71 != 18446025473058258911LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x309 = INT64_MIN;
	volatile int32_t x310 = -2;
	volatile int8_t x311 = INT8_MIN;
	uint16_t x312 = 287U;
	volatile int64_t t72 = 511LL;

	t72 = (x309|(x310+(x311%x312)));

	if (t72 != -130LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x314 = -1;
	int16_t x315 = INT16_MAX;
	static volatile int16_t x316 = INT16_MIN;
	static volatile int64_t t73 = -57019979873322790LL;

	t73 = (x313|(x314+(x315%x316)));

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x317 = 5U;
	uint32_t x318 = 32159U;
	int16_t x320 = -50;
	static volatile uint32_t t74 = 22U;

	t74 = (x317|(x318+(x319%x320)));

	if (t74 != 32111U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x321 = INT8_MIN;
	int8_t x322 = 0;
	int64_t x323 = -13346565LL;
	static int8_t x324 = INT8_MIN;
	int64_t t75 = 3714857292005366789LL;

	t75 = (x321|(x322+(x323%x324)));

	if (t75 != -5LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x325 = 2086746678LLU;
	int32_t x326 = INT32_MAX;
	int32_t x327 = -43361080;
	uint8_t x328 = UINT8_MAX;

	t76 = (x325|(x326+(x327%x328)));

	if (t76 != 2147483582LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x337 = -1;
	static uint16_t x339 = 26527U;
	static int8_t x340 = 3;
	int32_t t77 = 61;

	t77 = (x337|(x338+(x339%x340)));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x342 = INT8_MIN;
	int16_t x343 = INT16_MIN;
	int32_t x344 = INT32_MIN;
	static uint32_t t78 = 1577681831U;

	t78 = (x341|(x342+(x343%x344)));

	if (t78 != 4294934458U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x345 = 385138LLU;
	int8_t x346 = INT8_MIN;
	volatile uint64_t t79 = 500075313397LLU;

	t79 = (x345|(x346+(x347%x348)));

	if (t79 != 385150LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x349 = -1;
	static int32_t x350 = -1;
	int32_t x351 = INT32_MIN;
	static int64_t x352 = INT64_MAX;
	int64_t t80 = -65493455LL;

	t80 = (x349|(x350+(x351%x352)));

	if (t80 != -1LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x353 = 462LL;
	static int16_t x354 = 7;
	static int16_t x355 = INT16_MAX;
	int64_t x356 = INT64_MAX;
	static int64_t t81 = 15837LL;

	t81 = (x353|(x354+(x355%x356)));

	if (t81 != 33230LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x357 = INT32_MAX;
	static int64_t x358 = INT64_MAX;
	int64_t x359 = INT64_MIN;
	int8_t x360 = INT8_MIN;
	int64_t t82 = INT64_MAX;

	t82 = (x357|(x358+(x359%x360)));

	if (t82 != INT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x361 = -1;
	int16_t x364 = INT16_MIN;
	uint32_t t83 = UINT32_MAX;

	t83 = (x361|(x362+(x363%x364)));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x366 = INT32_MAX;
	volatile int16_t x367 = INT16_MIN;
	static uint16_t x368 = 3U;
	volatile int64_t t84 = -2LL;

	t84 = (x365|(x366+(x367%x368)));

	if (t84 != 6784933783666687LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x372 = INT64_MAX;
	static volatile uint64_t t85 = 169262584860560523LLU;

	t85 = (x369|(x370+(x371%x372)));

	if (t85 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x373 = INT8_MIN;
	int16_t x374 = -131;

	t86 = (x373|(x374+(x375%x376)));

	if (t86 != -114) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x377 = INT64_MAX;
	uint32_t x378 = UINT32_MAX;
	int8_t x379 = -1;
	uint64_t x380 = UINT64_MAX;

	t87 = (x377|(x378+(x379%x380)));

	if (t87 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x385 = UINT8_MAX;
	int64_t x386 = INT64_MAX;
	int64_t x387 = INT64_MIN;
	static int32_t x388 = INT32_MAX;

	t88 = (x385|(x386+(x387%x388)));

	if (t88 != INT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x389 = 232;
	uint16_t x390 = UINT16_MAX;
	int64_t x391 = INT64_MIN;
	volatile int32_t x392 = INT32_MIN;
	int64_t t89 = -61345LL;

	t89 = (x389|(x390+(x391%x392)));

	if (t89 != 65535LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x397 = -684246251666LL;
	volatile uint8_t x398 = 0U;
	static int16_t x399 = -121;
	int8_t x400 = 1;
	volatile int64_t t90 = 15740LL;

	t90 = (x397|(x398+(x399%x400)));

	if (t90 != -684246251666LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x401 = INT32_MAX;
	int32_t t91 = INT32_MAX;

	t91 = (x401|(x402+(x403%x404)));

	if (t91 != INT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x405 = 1017;
	volatile int16_t x406 = 56;
	int32_t x407 = 6265;
	volatile int32_t t92 = -1;

	t92 = (x405|(x406+(x407%x408)));

	if (t92 != 7161) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x413 = -23;
	int16_t x414 = INT16_MIN;
	int8_t x416 = INT8_MAX;

	t93 = (x413|(x414+(x415%x416)));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x417 = 124177530518691173LLU;
	int64_t x418 = 8953056542787LL;
	uint32_t x419 = 2U;
	int64_t x420 = INT64_MIN;

	t94 = (x417|(x418+(x419%x420)));

	if (t94 != 124177670109388133LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x421 = UINT8_MAX;
	int32_t x422 = -17945741;
	static int64_t x423 = INT64_MAX;
	uint16_t x424 = 3U;
	volatile int64_t t95 = -8536906LL;

	t95 = (x421|(x422+(x423%x424)));

	if (t95 != -17945601LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x425 = INT8_MIN;
	uint64_t x426 = UINT64_MAX;
	volatile int16_t x427 = -5896;
	int16_t x428 = INT16_MAX;
	volatile uint64_t t96 = 414439LLU;

	t96 = (x425|(x426+(x427%x428)));

	if (t96 != 18446744073709551607LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x429 = INT8_MIN;
	uint16_t x431 = 1U;

	t97 = (x429|(x430+(x431%x432)));

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x433 = INT8_MAX;
	static uint64_t x434 = 2LLU;
	static int64_t x436 = INT64_MAX;
	uint64_t t98 = 29LLU;

	t98 = (x433|(x434+(x435%x436)));

	if (t98 != 127LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x437 = -74;
	int32_t x438 = INT32_MIN;
	static uint32_t x439 = UINT32_MAX;
	uint64_t x440 = 51211391591LLU;

	t99 = (x437|(x438+(x439%x440)));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

