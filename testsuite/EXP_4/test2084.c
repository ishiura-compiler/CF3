#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = INT8_MAX;
static volatile int64_t t1 = 490709002332LL;
int16_t x12 = -1;
uint64_t x17 = UINT64_MAX;
volatile uint64_t t4 = 42LLU;
static volatile int8_t x33 = INT8_MAX;
int16_t x47 = 25;
int64_t x63 = INT64_MAX;
uint8_t x64 = 1U;
volatile int64_t t13 = 75LL;
uint8_t x72 = 1U;
int64_t t15 = -842480972120856129LL;
volatile int64_t x73 = INT64_MAX;
static int16_t x77 = -1;
volatile int32_t x79 = INT32_MIN;
volatile int16_t x81 = INT16_MIN;
volatile uint32_t t18 = 3U;
volatile int32_t x86 = -1;
uint64_t x92 = 20386835138LLU;
int8_t x96 = INT8_MIN;
int8_t x109 = INT8_MAX;
uint8_t x110 = 110U;
static int8_t x116 = INT8_MIN;
int32_t x119 = INT32_MIN;
int64_t x128 = INT64_MAX;
volatile int64_t t27 = 5259747945066813LL;
uint16_t x129 = UINT16_MAX;
int32_t t28 = 30;
static int64_t x133 = INT64_MAX;
uint8_t x134 = 7U;
int32_t x136 = -1;
int32_t x145 = -3898499;
volatile int16_t x146 = INT16_MAX;
volatile int32_t t32 = -76;
uint8_t x149 = 0U;
uint8_t x151 = 59U;
static volatile int32_t t37 = 73086;
int16_t x171 = -1;
static volatile int64_t t39 = 289038872972455LL;
static int64_t x177 = 34LL;
static int16_t x180 = INT16_MIN;
int8_t x186 = -1;
volatile int8_t x187 = INT8_MAX;
volatile int32_t x188 = 49450;
int16_t x195 = INT16_MIN;
int64_t x204 = INT64_MIN;
static volatile int32_t x205 = -21171;
uint16_t x211 = 0U;
static int64_t t49 = -1691LL;
uint64_t x218 = 517276859667036LLU;
volatile int64_t t51 = 2143LL;
static uint32_t t53 = 2494U;
volatile int64_t x234 = -4015068236LL;
static uint32_t x239 = UINT32_MAX;
int16_t x243 = 4;
int32_t x254 = -329695534;
static volatile int32_t t58 = -41910;
static uint64_t x274 = 8632692367097190377LLU;
int16_t x275 = INT16_MIN;
static uint64_t x279 = UINT64_MAX;
volatile uint64_t t62 = 951543816283925167LLU;
volatile int64_t x281 = INT64_MIN;
int32_t x297 = INT32_MIN;
int8_t x300 = -1;
int32_t t67 = INT32_MIN;
uint16_t x302 = 485U;
int8_t x309 = -1;
int8_t x310 = -1;
volatile int16_t x311 = -323;
static volatile uint8_t x316 = UINT8_MAX;
volatile int64_t t71 = -99814345763641LL;
static int8_t x317 = INT8_MIN;
int64_t x320 = 8LL;
int64_t x340 = -1LL;
volatile int64_t t76 = 411324667752217LL;
int64_t x343 = -807720995433777LL;
volatile int64_t x345 = -31772191005802737LL;
uint64_t x351 = 60971408682052LLU;
uint8_t x354 = 9U;
int16_t x359 = -1;
static int8_t x365 = INT8_MIN;
int16_t x369 = -14212;
uint64_t x371 = 217500962401706LLU;
static int32_t x386 = 15933344;
int32_t t88 = 868581022;
static int64_t t89 = 4106956769867368223LL;
int32_t t90 = -1373507;
int32_t x409 = INT32_MAX;
int32_t t92 = 1893595;
static uint16_t x415 = 23U;
static uint8_t x416 = UINT8_MAX;
int64_t t94 = 1938281LL;
uint8_t x423 = 21U;
static volatile int16_t x424 = 2008;
int32_t x431 = 0;
int32_t x436 = INT32_MAX;


void f0(void) {
	uint64_t x1 = 67427655834029598LLU;
	static int16_t x2 = INT16_MIN;
	static int32_t x3 = -1;
	int64_t x4 = -1266488184418982LL;
	volatile uint64_t t0 = 75975646953LLU;

	t0 = (x1/(x2%(x3^x4)));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	static int64_t x7 = INT64_MIN;
	uint8_t x8 = 1U;

	t1 = (x5/(x6%(x7^x8)));

	if (t1 != 16909320LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t x9 = UINT32_MAX;
	static volatile uint8_t x10 = 1U;
	uint16_t x11 = UINT16_MAX;
	static uint32_t t2 = UINT32_MAX;

	t2 = (x9/(x10%(x11^x12)));

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	static uint64_t x14 = UINT64_MAX;
	int32_t x15 = -719;
	uint8_t x16 = 122U;
	uint64_t t3 = 751LLU;

	t3 = (x13/(x14%(x15^x16)));

	if (t3 != 26657144615187165LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x18 = INT8_MIN;
	uint8_t x19 = 15U;
	static int16_t x20 = INT16_MAX;

	t4 = (x17/(x18%(x19^x20)));

	if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x25 = -1;
	volatile int8_t x26 = INT8_MAX;
	uint16_t x27 = 253U;
	volatile int16_t x28 = -1;
	static volatile int32_t t5 = 0;

	t5 = (x25/(x26%(x27^x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	uint32_t x30 = UINT32_MAX;
	static int64_t x31 = -410312626LL;
	uint32_t x32 = 2U;
	int64_t t6 = 39195LL;

	t6 = (x29/(x30%(x31^x32)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x34 = 226U;
	uint16_t x35 = 429U;
	static uint16_t x36 = UINT16_MAX;
	volatile int32_t t7 = 88713;

	t7 = (x33/(x34%(x35^x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = 15831;
	int64_t x38 = INT64_MAX;
	int16_t x39 = INT16_MAX;
	int16_t x40 = -1;
	volatile int64_t t8 = 1511187384099580026LL;

	t8 = (x37/(x38%(x39^x40)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = 0;
	int16_t x42 = -1;
	static int32_t x43 = INT32_MIN;
	int8_t x44 = INT8_MAX;
	static volatile int32_t t9 = -2281;

	t9 = (x41/(x42%(x43^x44)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -1;
	volatile int16_t x46 = INT16_MIN;
	volatile uint8_t x48 = 1U;
	volatile int32_t t10 = 4463141;

	t10 = (x45/(x46%(x47^x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = 1;
	int64_t x50 = INT64_MAX;
	uint32_t x51 = 1594370983U;
	int8_t x52 = 39;
	volatile int64_t t11 = -116413793LL;

	t11 = (x49/(x50%(x51^x52)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x57 = UINT64_MAX;
	static volatile int16_t x58 = 2851;
	volatile int64_t x59 = INT64_MAX;
	int32_t x60 = INT32_MIN;
	volatile uint64_t t12 = 279730639610LLU;

	t12 = (x57/(x58%(x59^x60)));

	if (t12 != 6470271509543862LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x61 = 88336U;
	int32_t x62 = -1;

	t13 = (x61/(x62%(x63^x64)));

	if (t13 != -88336LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x65 = UINT8_MAX;
	static int64_t x66 = INT64_MIN;
	static int32_t x67 = -1;
	int64_t x68 = INT64_MIN;
	volatile int64_t t14 = -223010317LL;

	t14 = (x65/(x66%(x67^x68)));

	if (t14 != -255LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x69 = INT16_MAX;
	static int64_t x70 = 15LL;
	uint8_t x71 = 10U;

	t15 = (x69/(x70%(x71^x72)));

	if (t15 != 8191LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x74 = -1;
	int64_t x75 = INT64_MIN;
	volatile int16_t x76 = 1795;
	int64_t t16 = -5951134076348488LL;

	t16 = (x73/(x74%(x75^x76)));

	if (t16 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x78 = INT16_MAX;
	uint8_t x80 = 17U;
	int32_t t17 = 846;

	t17 = (x77/(x78%(x79^x80)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x82 = 12U;
	int16_t x83 = -749;
	volatile uint32_t x84 = 125662950U;

	t18 = (x81/(x82%(x83^x84)));

	if (t18 != 357911210U) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x85 = UINT64_MAX;
	int32_t x87 = INT32_MAX;
	int8_t x88 = INT8_MIN;
	volatile uint64_t t19 = 14LLU;

	t19 = (x85/(x86%(x87^x88)));

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x89 = 9998790367395872LLU;
	static int32_t x90 = -18;
	uint8_t x91 = 2U;
	uint64_t t20 = 99LLU;

	t20 = (x89/(x90%(x91^x92)));

	if (t20 != 2440095LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x93 = -1;
	volatile uint32_t x94 = 5U;
	int32_t x95 = 84707024;
	uint32_t t21 = 271605122U;

	t21 = (x93/(x94%(x95^x96)));

	if (t21 != 858993459U) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x97 = UINT8_MAX;
	int8_t x98 = INT8_MAX;
	volatile int8_t x99 = 0;
	uint64_t x100 = 116LLU;
	static uint64_t t22 = 163726694451760782LLU;

	t22 = (x97/(x98%(x99^x100)));

	if (t22 != 23LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x111 = INT8_MAX;
	volatile uint8_t x112 = 79U;
	volatile int32_t t23 = 15714813;

	t23 = (x109/(x110%(x111^x112)));

	if (t23 != 9) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x113 = -1574;
	static uint64_t x114 = 480387911444LLU;
	int8_t x115 = 0;
	volatile uint64_t t24 = 108641LLU;

	t24 = (x113/(x114%(x115^x116)));

	if (t24 != 38399684LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x117 = INT64_MIN;
	int16_t x118 = INT16_MIN;
	volatile uint32_t x120 = UINT32_MAX;
	volatile int64_t t25 = -4899612027722LL;

	t25 = (x117/(x118%(x119^x120)));

	if (t25 != -4295032830LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = INT64_MAX;
	uint16_t x122 = 6218U;
	static uint8_t x123 = UINT8_MAX;
	volatile int16_t x124 = -26;
	volatile int64_t t26 = -2209721LL;

	t26 = (x121/(x122%(x123^x124)));

	if (t26 != 43506471871956489LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x125 = INT32_MAX;
	volatile int64_t x126 = INT64_MIN;
	static uint16_t x127 = UINT16_MAX;

	t27 = (x125/(x126%(x127^x128)));

	if (t27 != -32767LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x130 = -1;
	volatile int16_t x131 = -1;
	int16_t x132 = INT16_MIN;

	t28 = (x129/(x130%(x131^x132)));

	if (t28 != -65535) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x135 = 1;
	int64_t t29 = INT64_MAX;

	t29 = (x133/(x134%(x135^x136)));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x137 = INT8_MIN;
	uint16_t x138 = UINT16_MAX;
	volatile int64_t x139 = -1LL;
	int16_t x140 = INT16_MAX;
	int64_t t30 = 9954LL;

	t30 = (x137/(x138%(x139^x140)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x141 = 18U;
	int16_t x142 = -1;
	int32_t x143 = INT32_MAX;
	int64_t x144 = INT64_MIN;
	volatile int64_t t31 = -7304LL;

	t31 = (x141/(x142%(x143^x144)));

	if (t31 != -18LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x147 = 71U;
	uint16_t x148 = UINT16_MAX;

	t32 = (x145/(x146%(x147^x148)));

	if (t32 != -118) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x150 = 9112U;
	volatile uint16_t x152 = UINT16_MAX;
	int32_t t33 = 2972;

	t33 = (x149/(x150%(x151^x152)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x153 = -2923;
	int64_t x154 = INT64_MIN;
	uint32_t x155 = UINT32_MAX;
	uint16_t x156 = 151U;
	int64_t t34 = 2449LL;

	t34 = (x153/(x154%(x155^x156)));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x157 = -1LL;
	static volatile int16_t x158 = INT16_MIN;
	int64_t x159 = INT64_MIN;
	int64_t x160 = 14942934LL;
	int64_t t35 = -268376270819494LL;

	t35 = (x157/(x158%(x159^x160)));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x161 = 336921757786137LL;
	int8_t x162 = 16;
	static int64_t x163 = INT64_MIN;
	int32_t x164 = INT32_MAX;
	static volatile int64_t t36 = 61061368151005936LL;

	t36 = (x161/(x162%(x163^x164)));

	if (t36 != 21057609861633LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = INT16_MAX;
	int8_t x166 = INT8_MAX;
	static int32_t x167 = INT32_MIN;
	static volatile int8_t x168 = INT8_MIN;

	t37 = (x165/(x166%(x167^x168)));

	if (t37 != 258) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = -2546590;
	uint16_t x170 = 2553U;
	int8_t x172 = INT8_MIN;
	int32_t t38 = 4;

	t38 = (x169/(x170%(x171^x172)));

	if (t38 != -195891) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x173 = 23;
	static int64_t x174 = INT64_MIN;
	volatile uint8_t x175 = 56U;
	int16_t x176 = -1;

	t39 = (x173/(x174%(x175^x176)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x178 = 26U;
	static int32_t x179 = -1;
	int64_t t40 = -65110342203390LL;

	t40 = (x177/(x178%(x179^x180)));

	if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x181 = 36073U;
	int8_t x182 = INT8_MAX;
	volatile uint16_t x183 = UINT16_MAX;
	uint16_t x184 = 3072U;
	volatile uint32_t t41 = 280112748U;

	t41 = (x181/(x182%(x183^x184)));

	if (t41 != 284U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = INT8_MIN;
	int32_t t42 = 193938292;

	t42 = (x185/(x186%(x187^x188)));

	if (t42 != 128) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x189 = 779LLU;
	static uint16_t x190 = 19U;
	volatile uint64_t x191 = 5LLU;
	int8_t x192 = -1;
	volatile uint64_t t43 = 666673843LLU;

	t43 = (x189/(x190%(x191^x192)));

	if (t43 != 41LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x193 = INT16_MIN;
	uint64_t x194 = 407460274815451828LLU;
	uint8_t x196 = 21U;
	volatile uint64_t t44 = 39LLU;

	t44 = (x193/(x194%(x195^x196)));

	if (t44 != 45LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x197 = 10U;
	int8_t x198 = 2;
	static uint16_t x199 = UINT16_MAX;
	uint64_t x200 = 187085876691090LLU;
	volatile uint64_t t45 = 238697638772LLU;

	t45 = (x197/(x198%(x199^x200)));

	if (t45 != 5LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x201 = -3;
	volatile int64_t x202 = INT64_MAX;
	int8_t x203 = INT8_MAX;
	volatile int64_t t46 = 855554LL;

	t46 = (x201/(x202%(x203^x204)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x206 = INT32_MIN;
	int16_t x207 = INT16_MIN;
	int32_t x208 = INT32_MIN;
	int32_t t47 = 3;

	t47 = (x205/(x206%(x207^x208)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x209 = INT8_MAX;
	uint16_t x210 = 5963U;
	volatile int64_t x212 = INT64_MIN;
	int64_t t48 = -1792642LL;

	t48 = (x209/(x210%(x211^x212)));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x213 = INT8_MIN;
	volatile int64_t x214 = INT64_MIN;
	static int16_t x215 = -1;
	int64_t x216 = 22180577LL;

	t49 = (x213/(x214%(x215^x216)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x217 = -1;
	int16_t x219 = 87;
	uint64_t x220 = 1149LLU;
	static uint64_t t50 = 7940953387473499589LLU;

	t50 = (x217/(x218%(x219^x220)));

	if (t50 != 24019198012642645LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x221 = INT32_MIN;
	int8_t x222 = INT8_MIN;
	uint16_t x223 = UINT16_MAX;
	int64_t x224 = INT64_MAX;

	t51 = (x221/(x222%(x223^x224)));

	if (t51 != 16777216LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x225 = -84;
	static int32_t x226 = INT32_MIN;
	volatile int64_t x227 = INT64_MAX;
	uint8_t x228 = UINT8_MAX;
	volatile int64_t t52 = -7LL;

	t52 = (x225/(x226%(x227^x228)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x229 = UINT32_MAX;
	int8_t x230 = INT8_MIN;
	int8_t x231 = INT8_MIN;
	int16_t x232 = INT16_MIN;

	t53 = (x229/(x230%(x231^x232)));

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x233 = 1U;
	volatile int32_t x235 = INT32_MAX;
	static int8_t x236 = INT8_MAX;
	int64_t t54 = -504576876839LL;

	t54 = (x233/(x234%(x235^x236)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x237 = 437U;
	static uint32_t x238 = 2128226991U;
	static int32_t x240 = INT32_MIN;
	static volatile uint32_t t55 = 385146U;

	t55 = (x237/(x238%(x239^x240)));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x241 = 300U;
	uint8_t x242 = 66U;
	int8_t x244 = -8;
	int32_t t56 = 207161279;

	t56 = (x241/(x242%(x243^x244)));

	if (t56 != 150) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x249 = UINT32_MAX;
	uint32_t x250 = UINT32_MAX;
	int8_t x251 = INT8_MIN;
	uint16_t x252 = 11U;
	uint32_t t57 = 15391U;

	t57 = (x249/(x250%(x251^x252)));

	if (t57 != 37025580U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x253 = INT32_MAX;
	int8_t x255 = -44;
	static volatile int16_t x256 = -63;

	t58 = (x253/(x254%(x255^x256)));

	if (t58 != -306783378) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x257 = 3LL;
	uint32_t x258 = 6U;
	int64_t x259 = INT64_MIN;
	static int32_t x260 = -1;
	int64_t t59 = 5531468775LL;

	t59 = (x257/(x258%(x259^x260)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x265 = 244454LLU;
	volatile int16_t x266 = INT16_MIN;
	uint16_t x267 = UINT16_MAX;
	static int32_t x268 = INT32_MIN;
	uint64_t t60 = 63482533333209LLU;

	t60 = (x265/(x266%(x267^x268)));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x273 = 26;
	int64_t x276 = INT64_MIN;
	volatile uint64_t t61 = 23325945LLU;

	t61 = (x273/(x274%(x275^x276)));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x277 = -6571;
	static volatile uint16_t x278 = 1U;
	static int64_t x280 = INT64_MAX;

	t62 = (x277/(x278%(x279^x280)));

	if (t62 != 18446744073709545045LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x282 = -98252586;
	volatile uint32_t x283 = 916U;
	int32_t x284 = INT32_MAX;
	int64_t t63 = -2LL;

	t63 = (x281/(x282%(x283^x284)));

	if (t63 != -4500892105LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x285 = INT16_MIN;
	volatile int32_t x286 = 554036;
	volatile uint8_t x287 = 28U;
	int32_t x288 = -814269;
	int32_t t64 = 3242;

	t64 = (x285/(x286%(x287^x288)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x289 = -13205;
	int64_t x290 = -1LL;
	volatile int16_t x291 = -1;
	volatile int32_t x292 = INT32_MIN;
	int64_t t65 = -10601036343048576LL;

	t65 = (x289/(x290%(x291^x292)));

	if (t65 != 13205LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x293 = 25834U;
	uint8_t x294 = 27U;
	int16_t x295 = 54;
	static int32_t x296 = INT32_MIN;
	int32_t t66 = 69778;

	t66 = (x293/(x294%(x295^x296)));

	if (t66 != 956) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x298 = 1U;
	volatile uint16_t x299 = 1177U;

	t67 = (x297/(x298%(x299^x300)));

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x301 = 6U;
	int8_t x303 = INT8_MIN;
	int32_t x304 = -1;
	int32_t t68 = 16479727;

	t68 = (x301/(x302%(x303^x304)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x305 = -1;
	uint32_t x306 = 43U;
	int64_t x307 = -1LL;
	int8_t x308 = 3;
	int64_t t69 = 423LL;

	t69 = (x305/(x306%(x307^x308)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x312 = INT64_MIN;
	static volatile int64_t t70 = 582546386567LL;

	t70 = (x309/(x310%(x311^x312)));

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x313 = INT64_MIN;
	int32_t x314 = 6239;
	int16_t x315 = -1;

	t71 = (x313/(x314%(x315^x316)));

	if (t71 != -97088126703734482LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x318 = -1;
	int8_t x319 = INT8_MAX;
	static volatile int64_t t72 = 4LL;

	t72 = (x317/(x318%(x319^x320)));

	if (t72 != 128LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x321 = 1;
	static uint16_t x322 = 1U;
	int64_t x323 = 1837173433400474LL;
	uint16_t x324 = 1951U;
	volatile int64_t t73 = 176488059LL;

	t73 = (x321/(x322%(x323^x324)));

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x325 = 824881576U;
	int32_t x326 = -23840271;
	int64_t x327 = -21109809LL;
	volatile uint32_t x328 = 237408U;
	volatile int64_t t74 = -70172029391LL;

	t74 = (x325/(x326%(x327^x328)));

	if (t74 != -297LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x333 = INT64_MIN;
	uint8_t x334 = 65U;
	uint32_t x335 = UINT32_MAX;
	int16_t x336 = INT16_MIN;
	int64_t t75 = 2650479LL;

	t75 = (x333/(x334%(x335^x336)));

	if (t75 != -141898031336227320LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x337 = 35U;
	static int64_t x338 = -1LL;
	uint16_t x339 = UINT16_MAX;

	t76 = (x337/(x338%(x339^x340)));

	if (t76 != -35LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x341 = 1;
	uint16_t x342 = 4099U;
	int64_t x344 = 0LL;
	int64_t t77 = -202984254780LL;

	t77 = (x341/(x342%(x343^x344)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x346 = INT32_MAX;
	int16_t x347 = INT16_MIN;
	uint64_t x348 = UINT64_MAX;
	volatile uint64_t t78 = 15999635255358664LLU;

	t78 = (x345/(x346%(x347^x348)));

	if (t78 != 18414971882703748879LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x349 = INT64_MIN;
	int8_t x350 = INT8_MIN;
	static volatile int32_t x352 = INT32_MAX;
	uint64_t t79 = 1047266LLU;

	t79 = (x349/(x350%(x351^x352)));

	if (t79 != 476672LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x353 = -382838052391711LL;
	int8_t x355 = INT8_MIN;
	uint16_t x356 = 1U;
	int64_t t80 = -20LL;

	t80 = (x353/(x354%(x355^x356)));

	if (t80 != -42537561376856LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x357 = -45286017372LL;
	static int32_t x358 = INT32_MAX;
	int16_t x360 = 1;
	volatile int64_t t81 = 136028231218LL;

	t81 = (x357/(x358%(x359^x360)));

	if (t81 != -45286017372LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x361 = 19;
	int32_t x362 = -35;
	uint32_t x363 = 646U;
	int32_t x364 = INT32_MIN;
	uint32_t t82 = 7784354U;

	t82 = (x361/(x362%(x363^x364)));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x366 = 12U;
	uint32_t x367 = 848374873U;
	static uint64_t x368 = 11477740161600LLU;
	uint64_t t83 = 577890011LLU;

	t83 = (x365/(x366%(x367^x368)));

	if (t83 != 1537228672809129290LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x370 = INT8_MIN;
	int8_t x372 = -1;
	static volatile uint64_t t84 = 65LLU;

	t84 = (x369/(x370%(x371^x372)));

	if (t84 != 84812LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x377 = INT32_MIN;
	int32_t x378 = -1;
	int32_t x379 = -233549798;
	static int64_t x380 = INT64_MIN;
	volatile int64_t t85 = 14LL;

	t85 = (x377/(x378%(x379^x380)));

	if (t85 != 2147483648LL) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x385 = -1;
	volatile int64_t x387 = INT64_MIN;
	volatile uint8_t x388 = 70U;
	volatile int64_t t86 = 10632785355803166LL;

	t86 = (x385/(x386%(x387^x388)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x389 = INT32_MIN;
	uint64_t x390 = UINT64_MAX;
	int64_t x391 = 2165065949228539LL;
	int16_t x392 = INT16_MIN;
	volatile uint64_t t87 = 3784843261011374847LLU;

	t87 = (x389/(x390%(x391^x392)));

	if (t87 != 8520LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x393 = 27U;
	volatile int32_t x394 = INT32_MIN;
	int32_t x395 = -1;
	int32_t x396 = 2031970;

	t88 = (x393/(x394%(x395^x396)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x397 = 475857U;
	int64_t x398 = INT64_MIN;
	static int16_t x399 = -527;
	uint16_t x400 = UINT16_MAX;

	t89 = (x397/(x398%(x399^x400)));

	if (t89 != -12LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x401 = INT16_MAX;
	volatile uint8_t x402 = 3U;
	volatile int32_t x403 = INT32_MAX;
	int32_t x404 = -1;

	t90 = (x401/(x402%(x403^x404)));

	if (t90 != 10922) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x405 = 2287095U;
	uint32_t x406 = UINT32_MAX;
	int32_t x407 = -1;
	uint64_t x408 = 11LLU;
	uint64_t t91 = 2204814666962128496LLU;

	t91 = (x405/(x406%(x407^x408)));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x410 = -12;
	int16_t x411 = INT16_MIN;
	volatile int32_t x412 = INT32_MIN;

	t92 = (x409/(x410%(x411^x412)));

	if (t92 != -178956970) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x413 = 3847U;
	volatile int16_t x414 = 6;
	int32_t t93 = -204063;

	t93 = (x413/(x414%(x415^x416)));

	if (t93 != 641) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x417 = 6U;
	int64_t x418 = INT64_MIN;
	int16_t x419 = -1;
	static int32_t x420 = -123170;

	t94 = (x417/(x418%(x419^x420)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x421 = -1078399051607105902LL;
	int8_t x422 = -5;
	int64_t t95 = -144675272LL;

	t95 = (x421/(x422%(x423^x424)));

	if (t95 != 215679810321421180LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x425 = UINT32_MAX;
	int64_t x426 = INT64_MIN;
	static uint32_t x427 = UINT32_MAX;
	int32_t x428 = 232;
	volatile int64_t t96 = 30190749LL;

	t96 = (x425/(x426%(x427^x428)));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x429 = UINT8_MAX;
	volatile int64_t x430 = INT64_MAX;
	uint64_t x432 = 35LLU;
	static volatile uint64_t t97 = 88456LLU;

	t97 = (x429/(x430%(x431^x432)));

	if (t97 != 36LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x433 = -1LL;
	uint8_t x434 = UINT8_MAX;
	static int8_t x435 = INT8_MAX;
	int64_t t98 = 64016LL;

	t98 = (x433/(x434%(x435^x436)));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x437 = 60886159828694183LLU;
	int32_t x438 = INT32_MIN;
	volatile int8_t x439 = INT8_MAX;
	volatile int64_t x440 = INT64_MAX;
	volatile uint64_t t99 = 2381132316397LLU;

	t99 = (x437/(x438%(x439^x440)));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

