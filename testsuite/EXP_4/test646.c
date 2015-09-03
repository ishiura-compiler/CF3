#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MAX;
static int64_t x6 = -1LL;
int64_t x8 = 10122448384LL;
int8_t x12 = INT8_MIN;
uint32_t x14 = 3U;
int64_t x18 = INT64_MIN;
static uint16_t x22 = UINT16_MAX;
int8_t x29 = 56;
int8_t x32 = 7;
uint8_t x33 = 4U;
volatile int32_t x36 = -430822305;
volatile int32_t x52 = INT32_MIN;
int16_t x60 = INT16_MAX;
int64_t x63 = INT64_MIN;
volatile int32_t x64 = INT32_MIN;
uint64_t x65 = 10938926139LLU;
volatile int32_t t16 = 14;
int64_t x72 = INT64_MIN;
int8_t x73 = INT8_MIN;
static uint32_t x75 = UINT32_MAX;
uint8_t x79 = 94U;
int32_t x86 = -1;
int64_t x95 = -10465626LL;
int64_t x99 = -160364LL;
static volatile int32_t t24 = -23;
volatile uint8_t x107 = 88U;
int64_t x108 = INT64_MIN;
int32_t t26 = 747;
volatile int32_t t27 = -167;
int16_t x132 = -231;
volatile int32_t x136 = 63570017;
uint64_t x138 = 7253138183573784LLU;
int16_t x147 = INT16_MIN;
static int8_t x149 = 1;
uint8_t x153 = 2U;
int64_t x164 = INT64_MIN;
uint64_t x165 = 361846LLU;
int16_t x167 = INT16_MAX;
volatile int32_t t40 = -1;
static int8_t x171 = INT8_MIN;
static int16_t x174 = -1;
volatile int32_t t43 = 1499;
uint32_t x189 = 116638675U;
volatile int64_t x196 = 539410600604LL;
uint16_t x197 = 3200U;
int16_t x203 = INT16_MAX;
volatile int32_t t49 = 0;
int16_t x207 = -1;
int32_t x209 = INT32_MIN;
static int32_t t51 = 9;
volatile int32_t t52 = 110348;
int32_t x221 = 482699;
volatile int8_t x222 = -1;
int64_t x226 = INT64_MIN;
static volatile int32_t t55 = 121520305;
volatile uint8_t x230 = 2U;
static int64_t x233 = 627304034287724LL;
static uint64_t x234 = 5741874LLU;
uint64_t x235 = 58602894LLU;
int16_t x241 = INT16_MAX;
int8_t x244 = INT8_MIN;
static int32_t t60 = -10;
static int32_t x251 = INT32_MIN;
uint8_t x256 = UINT8_MAX;
int8_t x264 = -13;
static uint16_t x266 = 21U;
int32_t t65 = -1534017;
volatile int16_t x269 = -1;
uint16_t x283 = 8U;
uint16_t x294 = 3626U;
static uint32_t x295 = 1490U;
int32_t t73 = 42109422;
static int16_t x301 = INT16_MIN;
int64_t x302 = INT64_MIN;
int8_t x319 = INT8_MIN;
volatile uint8_t x322 = 28U;
volatile int32_t t78 = 97;
int32_t x334 = INT32_MAX;
volatile int32_t t81 = -1563;
volatile int32_t t83 = -291384086;
int32_t x353 = 15753774;
uint16_t x354 = 1U;
uint32_t x365 = UINT32_MAX;
int16_t x370 = 231;
volatile int32_t t90 = -136871590;
uint16_t x384 = UINT16_MAX;
uint16_t x385 = 516U;
uint64_t x391 = UINT64_MAX;
int32_t x392 = INT32_MAX;
static int16_t x394 = INT16_MIN;
uint8_t x395 = 3U;
int32_t x398 = 1;
int8_t x399 = 1;
int64_t x400 = -55194305004LL;
uint16_t x406 = 1U;
static uint32_t x408 = 29361U;
uint16_t x411 = 21U;
uint32_t x412 = 265473234U;
int32_t t99 = -910409972;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	uint16_t x3 = 32710U;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -103351;

	t0 = (x1<(x2&(x3/x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MAX;
	int16_t x7 = -255;
	volatile int32_t t1 = 55233079;

	t1 = (x5<(x6&(x7/x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = UINT16_MAX;
	uint32_t x10 = 74215162U;
	static volatile int32_t x11 = -1;
	static volatile int32_t t2 = -1;

	t2 = (x9<(x10&(x11/x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	uint64_t x15 = UINT64_MAX;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = 305;

	t3 = (x13<(x14&(x15/x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = -35027431;
	static volatile int64_t x19 = -40993612LL;
	volatile int16_t x20 = -6;
	volatile int32_t t4 = 864916816;

	t4 = (x17<(x18&(x19/x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x21 = UINT16_MAX;
	int16_t x23 = INT16_MIN;
	static uint64_t x24 = 384765842LLU;
	volatile int32_t t5 = 58960;

	t5 = (x21<(x22&(x23/x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 1;
	int16_t x26 = -1;
	int64_t x27 = -1LL;
	volatile int16_t x28 = 3;
	static volatile int32_t t6 = -25557677;

	t6 = (x25<(x26&(x27/x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x30 = INT8_MAX;
	int16_t x31 = INT16_MIN;
	static volatile int32_t t7 = -228481534;

	t7 = (x29<(x30&(x31/x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x34 = -1LL;
	uint32_t x35 = UINT32_MAX;
	static int32_t t8 = 105;

	t8 = (x33<(x34&(x35/x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	int64_t x38 = INT64_MAX;
	int64_t x39 = INT64_MIN;
	int8_t x40 = INT8_MIN;
	volatile int32_t t9 = 9886;

	t9 = (x37<(x38&(x39/x40)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x41 = 16U;
	static uint32_t x42 = UINT32_MAX;
	uint8_t x43 = UINT8_MAX;
	int64_t x44 = INT64_MIN;
	volatile int32_t t10 = 31159846;

	t10 = (x41<(x42&(x43/x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x45 = -1;
	int32_t x46 = INT32_MAX;
	static int8_t x47 = INT8_MIN;
	static int32_t x48 = INT32_MIN;
	static volatile int32_t t11 = -71450;

	t11 = (x45<(x46&(x47/x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MAX;
	int8_t x50 = -8;
	static uint64_t x51 = 63276169LLU;
	int32_t t12 = -1385;

	t12 = (x49<(x50&(x51/x52)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = INT16_MIN;
	int32_t x54 = -1;
	int32_t x55 = INT32_MIN;
	volatile uint32_t x56 = 69392463U;
	volatile int32_t t13 = -1681;

	t13 = (x53<(x54&(x55/x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -1;
	int32_t x58 = INT32_MAX;
	int32_t x59 = INT32_MIN;
	int32_t t14 = -947812;

	t14 = (x57<(x58&(x59/x60)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	static uint64_t x62 = 150LLU;
	static int32_t t15 = -2;

	t15 = (x61<(x62&(x63/x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = -2LL;
	volatile int32_t x67 = INT32_MAX;
	static int32_t x68 = -1;

	t16 = (x65<(x66&(x67/x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -133897510371736519LL;
	static uint64_t x70 = 1209486043034917LLU;
	uint32_t x71 = 17905U;
	volatile int32_t t17 = 12;

	t17 = (x69<(x70&(x71/x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x74 = -1LL;
	int8_t x76 = INT8_MIN;
	static volatile int32_t t18 = 9;

	t18 = (x73<(x74&(x75/x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 5U;
	static int8_t x78 = INT8_MIN;
	volatile int64_t x80 = -26182LL;
	volatile int32_t t19 = -3571262;

	t19 = (x77<(x78&(x79/x80)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = INT32_MAX;
	volatile int8_t x82 = INT8_MAX;
	volatile int64_t x83 = INT64_MIN;
	int8_t x84 = -8;
	int32_t t20 = 723;

	t20 = (x81<(x82&(x83/x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x85 = 51U;
	uint16_t x87 = UINT16_MAX;
	static int8_t x88 = INT8_MIN;
	int32_t t21 = 1;

	t21 = (x85<(x86&(x87/x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1;
	static uint8_t x90 = 4U;
	int32_t x91 = INT32_MAX;
	uint64_t x92 = UINT64_MAX;
	volatile int32_t t22 = 332971362;

	t22 = (x89<(x90&(x91/x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MIN;
	volatile int16_t x94 = INT16_MAX;
	volatile uint16_t x96 = 31U;
	int32_t t23 = 22;

	t23 = (x93<(x94&(x95/x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	int8_t x98 = INT8_MIN;
	static int16_t x100 = INT16_MIN;

	t24 = (x97<(x98&(x99/x100)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = 0;
	static int8_t x102 = -1;
	int32_t x103 = -26716481;
	int8_t x104 = INT8_MIN;
	int32_t t25 = -793535;

	t25 = (x101<(x102&(x103/x104)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = -31;
	static int16_t x106 = INT16_MIN;

	t26 = (x105<(x106&(x107/x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -5;
	int16_t x110 = INT16_MIN;
	int64_t x111 = INT64_MAX;
	static volatile uint64_t x112 = UINT64_MAX;

	t27 = (x109<(x110&(x111/x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = -44;
	int16_t x114 = INT16_MIN;
	volatile int32_t x115 = -1;
	int16_t x116 = -9792;
	static volatile int32_t t28 = -197661363;

	t28 = (x113<(x114&(x115/x116)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 2446800765LL;
	static int32_t x118 = INT32_MIN;
	uint32_t x119 = UINT32_MAX;
	int32_t x120 = INT32_MAX;
	int32_t t29 = 778899950;

	t29 = (x117<(x118&(x119/x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = UINT8_MAX;
	volatile uint16_t x122 = 585U;
	int64_t x123 = INT64_MIN;
	static volatile int16_t x124 = INT16_MAX;
	volatile int32_t t30 = -1591969;

	t30 = (x121<(x122&(x123/x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -161281851LL;
	static int16_t x126 = INT16_MIN;
	int16_t x127 = INT16_MAX;
	uint8_t x128 = 3U;
	volatile int32_t t31 = -1;

	t31 = (x125<(x126&(x127/x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = -24610135150881021LL;
	int32_t x130 = -1;
	uint16_t x131 = 1U;
	int32_t t32 = -7884;

	t32 = (x129<(x130&(x131/x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = 491419LL;
	static int8_t x134 = INT8_MIN;
	int32_t x135 = INT32_MIN;
	volatile int32_t t33 = 26064;

	t33 = (x133<(x134&(x135/x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = INT32_MAX;
	int64_t x139 = -5300877647846LL;
	static volatile int16_t x140 = INT16_MAX;
	int32_t t34 = 3104726;

	t34 = (x137<(x138&(x139/x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = 4171;
	int64_t x142 = INT64_MIN;
	int16_t x143 = INT16_MAX;
	volatile uint8_t x144 = 124U;
	static int32_t t35 = 46;

	t35 = (x141<(x142&(x143/x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x145 = -1192378;
	uint64_t x146 = 4725880LLU;
	int32_t x148 = 288723497;
	static volatile int32_t t36 = 1490379;

	t36 = (x145<(x146&(x147/x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x150 = 11U;
	int16_t x151 = INT16_MAX;
	static int16_t x152 = INT16_MIN;
	volatile int32_t t37 = -485;

	t37 = (x149<(x150&(x151/x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x154 = 14745782U;
	uint32_t x155 = UINT32_MAX;
	static int32_t x156 = INT32_MAX;
	volatile int32_t t38 = 961850770;

	t38 = (x153<(x154&(x155/x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = INT32_MIN;
	int16_t x162 = -1;
	static int32_t x163 = 476;
	int32_t t39 = -299;

	t39 = (x161<(x162&(x163/x164)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x166 = 28;
	volatile uint32_t x168 = UINT32_MAX;

	t40 = (x165<(x166&(x167/x168)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = INT8_MAX;
	uint8_t x170 = UINT8_MAX;
	static volatile int64_t x172 = INT64_MIN;
	int32_t t41 = -4099630;

	t41 = (x169<(x170&(x171/x172)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x173 = UINT32_MAX;
	int8_t x175 = INT8_MAX;
	static volatile uint32_t x176 = 39U;
	int32_t t42 = 7510782;

	t42 = (x173<(x174&(x175/x176)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = -1;
	int64_t x178 = INT64_MIN;
	uint64_t x179 = 5LLU;
	static int16_t x180 = -1;

	t43 = (x177<(x178&(x179/x180)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x181 = INT32_MIN;
	uint32_t x182 = UINT32_MAX;
	volatile int16_t x183 = 7423;
	uint64_t x184 = 484LLU;
	static int32_t t44 = -53487;

	t44 = (x181<(x182&(x183/x184)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x185 = 3013U;
	int64_t x186 = INT64_MIN;
	int32_t x187 = INT32_MIN;
	int32_t x188 = INT32_MAX;
	volatile int32_t t45 = 2;

	t45 = (x185<(x186&(x187/x188)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x190 = 0;
	static uint32_t x191 = 214971U;
	uint16_t x192 = UINT16_MAX;
	volatile int32_t t46 = 31;

	t46 = (x189<(x190&(x191/x192)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = INT32_MAX;
	volatile int16_t x194 = INT16_MIN;
	volatile uint8_t x195 = UINT8_MAX;
	static volatile int32_t t47 = 1745;

	t47 = (x193<(x194&(x195/x196)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x198 = UINT64_MAX;
	uint64_t x199 = 97LLU;
	static uint16_t x200 = UINT16_MAX;
	int32_t t48 = -768569;

	t48 = (x197<(x198&(x199/x200)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = INT64_MIN;
	static volatile uint8_t x202 = 1U;
	volatile int16_t x204 = 3767;

	t49 = (x201<(x202&(x203/x204)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = -1;
	int32_t x206 = INT32_MIN;
	uint16_t x208 = 6U;
	int32_t t50 = -12;

	t50 = (x205<(x206&(x207/x208)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x210 = INT16_MIN;
	uint8_t x211 = 8U;
	int64_t x212 = INT64_MIN;

	t51 = (x209<(x210&(x211/x212)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x213 = INT64_MIN;
	static int16_t x214 = 0;
	uint8_t x215 = 2U;
	int8_t x216 = INT8_MIN;

	t52 = (x213<(x214&(x215/x216)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x217 = -1;
	static int8_t x218 = INT8_MIN;
	int64_t x219 = -1LL;
	static int64_t x220 = 313884025LL;
	volatile int32_t t53 = -2;

	t53 = (x217<(x218&(x219/x220)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x223 = 1066322;
	volatile uint32_t x224 = 1309963992U;
	int32_t t54 = -4;

	t54 = (x221<(x222&(x223/x224)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = INT32_MAX;
	uint32_t x227 = 3206U;
	int64_t x228 = INT64_MIN;

	t55 = (x225<(x226&(x227/x228)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x229 = INT16_MIN;
	int64_t x231 = -21626336526LL;
	int16_t x232 = INT16_MIN;
	static volatile int32_t t56 = 917973274;

	t56 = (x229<(x230&(x231/x232)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x236 = INT32_MIN;
	volatile int32_t t57 = -357048012;

	t57 = (x233<(x234&(x235/x236)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = INT64_MIN;
	volatile int32_t x238 = 1026;
	volatile int32_t x239 = INT32_MIN;
	uint32_t x240 = UINT32_MAX;
	volatile int32_t t58 = -13794;

	t58 = (x237<(x238&(x239/x240)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x242 = 0U;
	int16_t x243 = -473;
	int32_t t59 = 6725714;

	t59 = (x241<(x242&(x243/x244)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int64_t x245 = INT64_MIN;
	int16_t x246 = INT16_MIN;
	int16_t x247 = -1;
	volatile int64_t x248 = -2117435682756861649LL;

	t60 = (x245<(x246&(x247/x248)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x249 = 1U;
	static int32_t x250 = -1;
	int16_t x252 = INT16_MAX;
	int32_t t61 = 6786622;

	t61 = (x249<(x250&(x251/x252)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x253 = INT32_MAX;
	uint16_t x254 = UINT16_MAX;
	volatile uint16_t x255 = 12U;
	int32_t t62 = 229085744;

	t62 = (x253<(x254&(x255/x256)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x257 = 62U;
	volatile uint8_t x258 = 0U;
	uint8_t x259 = UINT8_MAX;
	int64_t x260 = -1LL;
	int32_t t63 = -1;

	t63 = (x257<(x258&(x259/x260)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x261 = UINT64_MAX;
	int32_t x262 = INT32_MIN;
	int32_t x263 = 0;
	static int32_t t64 = -50901084;

	t64 = (x261<(x262&(x263/x264)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x265 = INT16_MAX;
	int64_t x267 = INT64_MAX;
	int32_t x268 = 8;

	t65 = (x265<(x266&(x267/x268)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x270 = 14U;
	int8_t x271 = INT8_MAX;
	int16_t x272 = INT16_MIN;
	volatile int32_t t66 = 12284;

	t66 = (x269<(x270&(x271/x272)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x273 = 670;
	int8_t x274 = INT8_MIN;
	uint32_t x275 = 16945507U;
	uint64_t x276 = 1437557LLU;
	int32_t t67 = -359171;

	t67 = (x273<(x274&(x275/x276)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x277 = 59671678U;
	uint8_t x278 = 0U;
	int8_t x279 = 7;
	int64_t x280 = INT64_MAX;
	int32_t t68 = 4061;

	t68 = (x277<(x278&(x279/x280)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int16_t x281 = INT16_MAX;
	int8_t x282 = 0;
	uint32_t x284 = 381871575U;
	volatile int32_t t69 = -108466547;

	t69 = (x281<(x282&(x283/x284)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x285 = UINT64_MAX;
	int32_t x286 = INT32_MAX;
	int64_t x287 = -1LL;
	static int64_t x288 = INT64_MAX;
	volatile int32_t t70 = 7;

	t70 = (x285<(x286&(x287/x288)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x289 = 39LL;
	static volatile uint32_t x290 = 0U;
	int8_t x291 = INT8_MIN;
	uint8_t x292 = UINT8_MAX;
	volatile int32_t t71 = -1;

	t71 = (x289<(x290&(x291/x292)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x293 = -1LL;
	uint8_t x296 = 10U;
	int32_t t72 = -26017478;

	t72 = (x293<(x294&(x295/x296)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x297 = -1374;
	uint32_t x298 = UINT32_MAX;
	uint16_t x299 = UINT16_MAX;
	int8_t x300 = -27;

	t73 = (x297<(x298&(x299/x300)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x303 = INT32_MIN;
	static int8_t x304 = INT8_MIN;
	int32_t t74 = -70;

	t74 = (x301<(x302&(x303/x304)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x305 = 3962U;
	int8_t x306 = INT8_MIN;
	volatile uint16_t x307 = UINT16_MAX;
	volatile int16_t x308 = INT16_MIN;
	volatile int32_t t75 = -1;

	t75 = (x305<(x306&(x307/x308)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x313 = 2U;
	int16_t x314 = INT16_MIN;
	int16_t x315 = 809;
	int32_t x316 = -201040;
	int32_t t76 = -11;

	t76 = (x313<(x314&(x315/x316)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x317 = 3255559064142158LL;
	int16_t x318 = INT16_MIN;
	int16_t x320 = INT16_MIN;
	int32_t t77 = 848;

	t77 = (x317<(x318&(x319/x320)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x321 = INT64_MIN;
	uint64_t x323 = 523565721272LLU;
	int64_t x324 = INT64_MIN;

	t78 = (x321<(x322&(x323/x324)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x325 = INT16_MIN;
	int8_t x326 = INT8_MIN;
	int32_t x327 = INT32_MAX;
	uint16_t x328 = UINT16_MAX;
	volatile int32_t t79 = 6888887;

	t79 = (x325<(x326&(x327/x328)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x333 = INT8_MIN;
	int32_t x335 = INT32_MIN;
	int8_t x336 = INT8_MAX;
	volatile int32_t t80 = -199;

	t80 = (x333<(x334&(x335/x336)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x337 = UINT16_MAX;
	uint32_t x338 = 1869U;
	int16_t x339 = -492;
	int32_t x340 = -96;

	t81 = (x337<(x338&(x339/x340)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x341 = INT16_MIN;
	static int64_t x342 = 477684LL;
	uint8_t x343 = 41U;
	volatile uint8_t x344 = UINT8_MAX;
	volatile int32_t t82 = -6440;

	t82 = (x341<(x342&(x343/x344)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x345 = INT32_MAX;
	int64_t x346 = INT64_MIN;
	uint16_t x347 = UINT16_MAX;
	int64_t x348 = INT64_MIN;

	t83 = (x345<(x346&(x347/x348)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x349 = UINT8_MAX;
	uint64_t x350 = 4571854518461LLU;
	int8_t x351 = INT8_MIN;
	uint16_t x352 = UINT16_MAX;
	static int32_t t84 = -45552;

	t84 = (x349<(x350&(x351/x352)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x355 = 35U;
	uint32_t x356 = 2416312U;
	static volatile int32_t t85 = 13122;

	t85 = (x353<(x354&(x355/x356)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x357 = INT32_MIN;
	int16_t x358 = -492;
	volatile uint16_t x359 = UINT16_MAX;
	volatile int32_t x360 = INT32_MIN;
	volatile int32_t t86 = 1;

	t86 = (x357<(x358&(x359/x360)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x361 = 85U;
	uint64_t x362 = 3767230417969312678LLU;
	uint64_t x363 = 2450359LLU;
	static uint8_t x364 = UINT8_MAX;
	volatile int32_t t87 = 21099253;

	t87 = (x361<(x362&(x363/x364)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x366 = INT32_MIN;
	int8_t x367 = INT8_MIN;
	int32_t x368 = 411;
	volatile int32_t t88 = -18;

	t88 = (x365<(x366&(x367/x368)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x369 = 1U;
	int16_t x371 = INT16_MIN;
	static int16_t x372 = -1;
	volatile int32_t t89 = 475134271;

	t89 = (x369<(x370&(x371/x372)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x373 = 14U;
	uint16_t x374 = 33U;
	uint32_t x375 = 29U;
	int32_t x376 = INT32_MAX;

	t90 = (x373<(x374&(x375/x376)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x377 = 14U;
	uint8_t x378 = 121U;
	int8_t x379 = -31;
	uint8_t x380 = UINT8_MAX;
	int32_t t91 = -1;

	t91 = (x377<(x378&(x379/x380)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x381 = 0U;
	int64_t x382 = -30438LL;
	uint16_t x383 = 14011U;
	static volatile int32_t t92 = 3846294;

	t92 = (x381<(x382&(x383/x384)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x386 = -1LL;
	uint8_t x387 = UINT8_MAX;
	uint64_t x388 = 80116264098LLU;
	volatile int32_t t93 = -59;

	t93 = (x385<(x386&(x387/x388)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x389 = UINT16_MAX;
	static int16_t x390 = -130;
	volatile int32_t t94 = 3707736;

	t94 = (x389<(x390&(x391/x392)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x393 = -1LL;
	uint8_t x396 = UINT8_MAX;
	int32_t t95 = 46331373;

	t95 = (x393<(x394&(x395/x396)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x397 = 6;
	volatile int32_t t96 = 456951614;

	t96 = (x397<(x398&(x399/x400)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x401 = 826181LLU;
	static volatile int16_t x402 = INT16_MAX;
	int16_t x403 = INT16_MIN;
	int64_t x404 = INT64_MIN;
	int32_t t97 = -24;

	t97 = (x401<(x402&(x403/x404)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x405 = 1;
	static int8_t x407 = 0;
	static int32_t t98 = 29;

	t98 = (x405<(x406&(x407/x408)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x409 = 194742U;
	static int8_t x410 = INT8_MAX;

	t99 = (x409<(x410&(x411/x412)));

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

