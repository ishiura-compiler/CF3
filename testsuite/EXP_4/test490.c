#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MIN;
static int64_t x8 = -1LL;
volatile int32_t t1 = -27984718;
int32_t x9 = INT32_MAX;
static int32_t t3 = 21;
static int32_t x21 = INT32_MAX;
int32_t x22 = INT32_MAX;
volatile int8_t x24 = 3;
uint32_t x40 = 3U;
volatile int32_t t10 = -1904958;
int32_t x58 = INT32_MAX;
int32_t t12 = 2002247;
uint32_t x75 = 1746U;
static volatile int8_t x77 = INT8_MIN;
int32_t x90 = INT32_MIN;
uint64_t x92 = 316947148349119LLU;
int8_t x94 = INT8_MAX;
static volatile int16_t x96 = -251;
int8_t x97 = 2;
uint32_t x99 = 26U;
uint64_t x100 = UINT64_MAX;
int8_t x107 = INT8_MAX;
int8_t x108 = INT8_MAX;
uint64_t x117 = 131086734LLU;
int32_t x118 = -1;
volatile int16_t x122 = -1;
volatile int32_t x123 = INT32_MIN;
volatile int64_t x125 = INT64_MIN;
volatile int16_t x126 = 1;
volatile int32_t t27 = -4163188;
uint8_t x150 = 5U;
uint32_t x153 = 511482718U;
uint16_t x166 = UINT16_MAX;
volatile int64_t x169 = INT64_MIN;
int32_t x171 = INT32_MIN;
uint8_t x176 = 27U;
uint64_t x182 = UINT64_MAX;
int64_t x183 = -86879188LL;
volatile int32_t t38 = -135;
static uint16_t x201 = 1885U;
static uint16_t x202 = 6U;
int8_t x204 = 1;
volatile int8_t x205 = -27;
static volatile int32_t x206 = INT32_MIN;
int16_t x212 = INT16_MIN;
uint64_t x214 = 12LLU;
static uint32_t x216 = 32852518U;
volatile uint32_t x220 = UINT32_MAX;
static int64_t x234 = -1LL;
static uint64_t x237 = UINT64_MAX;
uint8_t x239 = 2U;
int32_t x240 = -630;
uint64_t x243 = 757677292834990LLU;
uint32_t x244 = UINT32_MAX;
int64_t x254 = INT64_MIN;
uint32_t x255 = UINT32_MAX;
int8_t x258 = -1;
int8_t x263 = INT8_MIN;
int64_t x283 = -3804LL;
int32_t x292 = -1;
static int64_t x293 = 930177579914LL;
uint32_t x303 = 316071U;
int16_t x304 = 0;
int64_t x305 = -1LL;
uint8_t x311 = 2U;
int8_t x339 = INT8_MIN;
uint32_t x340 = 677U;
volatile int16_t x341 = 12;
uint64_t x348 = 780249782820713838LLU;
uint8_t x349 = UINT8_MAX;
uint16_t x351 = 120U;
static int8_t x352 = -14;
volatile int32_t t65 = 51217332;
volatile int16_t x355 = -8;
static int32_t t66 = -16;
int64_t x366 = INT64_MIN;
static int8_t x373 = INT8_MIN;
static int64_t x374 = -801068LL;
static volatile int32_t t73 = 203147756;
volatile int8_t x402 = INT8_MIN;
volatile int32_t t74 = -4345929;
volatile int8_t x405 = -18;
int32_t t75 = 780625;
static int64_t x410 = 77962LL;
int32_t t76 = -1;
int32_t x417 = INT32_MIN;
int32_t x421 = -1;
volatile int32_t t78 = -13;
int32_t t79 = -4055189;
int8_t x432 = INT8_MIN;
int16_t x436 = INT16_MAX;
int16_t x446 = INT16_MIN;
volatile int16_t x451 = -6;
static int32_t t83 = 34423746;
uint8_t x470 = UINT8_MAX;
static int64_t x483 = -3LL;
int32_t t87 = -73462410;
uint32_t x490 = 9224123U;
uint16_t x493 = 19874U;
int64_t x499 = 22928221431908281LL;
uint64_t x502 = UINT64_MAX;
int32_t t91 = -13772;
static volatile uint16_t x511 = 0U;
int32_t x512 = INT32_MIN;
static int32_t x514 = 449383;
uint16_t x527 = 1U;
int16_t x528 = -3;
int32_t t96 = 32298215;
int64_t x529 = INT64_MIN;
int16_t x533 = -1;
volatile int64_t x534 = INT64_MAX;
int16_t x538 = -8;


void f0(void) {
	int32_t x1 = -1;
	int16_t x2 = INT16_MIN;
	uint64_t x3 = UINT64_MAX;
	static uint32_t x4 = 1641378U;
	int32_t t0 = -532406325;

	t0 = (x1<(x2|(x3*x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x6 = -1;
	uint8_t x7 = UINT8_MAX;

	t1 = (x5<(x6|(x7*x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MIN;
	static uint8_t x11 = 5U;
	volatile int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -3065;

	t2 = (x9<(x10|(x11*x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -13172;
	uint16_t x14 = 56U;
	int32_t x15 = -1;
	static int16_t x16 = INT16_MIN;

	t3 = (x13<(x14|(x15*x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MIN;
	uint8_t x18 = UINT8_MAX;
	int16_t x19 = INT16_MIN;
	int16_t x20 = INT16_MIN;
	int32_t t4 = -3295969;

	t4 = (x17<(x18|(x19*x20)));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x23 = 7U;
	int32_t t5 = -582104;

	t5 = (x21<(x22|(x23*x24)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	int16_t x30 = -1;
	volatile uint64_t x31 = 54750473280865LLU;
	int16_t x32 = 1;
	static volatile int32_t t6 = 8;

	t6 = (x29<(x30|(x31*x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = 6U;
	static int16_t x38 = 12453;
	static int16_t x39 = INT16_MIN;
	volatile int32_t t7 = -945;

	t7 = (x37<(x38|(x39*x40)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x41 = UINT16_MAX;
	int32_t x42 = 12523419;
	int8_t x43 = -4;
	uint8_t x44 = 67U;
	int32_t t8 = 1;

	t8 = (x41<(x42|(x43*x44)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x45 = INT64_MAX;
	int8_t x46 = INT8_MIN;
	uint32_t x47 = 61931248U;
	uint64_t x48 = 5337905502156LLU;
	static int32_t t9 = -8351061;

	t9 = (x45<(x46|(x47*x48)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = UINT64_MAX;
	volatile int8_t x50 = 0;
	int16_t x51 = -1;
	int16_t x52 = -105;

	t10 = (x49<(x50|(x51*x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x53 = -1;
	uint16_t x54 = UINT16_MAX;
	int8_t x55 = INT8_MIN;
	volatile uint16_t x56 = 24376U;
	int32_t t11 = 8311387;

	t11 = (x53<(x54|(x55*x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = INT16_MAX;
	static uint16_t x59 = UINT16_MAX;
	volatile uint16_t x60 = 8U;

	t12 = (x57<(x58|(x59*x60)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x69 = -1;
	int8_t x70 = INT8_MIN;
	uint8_t x71 = 1U;
	int8_t x72 = INT8_MIN;
	volatile int32_t t13 = -6;

	t13 = (x69<(x70|(x71*x72)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile uint16_t x73 = 0U;
	int64_t x74 = -1LL;
	int8_t x76 = -3;
	volatile int32_t t14 = 57;

	t14 = (x73<(x74|(x75*x76)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x78 = INT16_MAX;
	int8_t x79 = INT8_MIN;
	int64_t x80 = -1LL;
	volatile int32_t t15 = 507;

	t15 = (x77<(x78|(x79*x80)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x81 = INT16_MIN;
	static volatile int16_t x82 = INT16_MAX;
	uint16_t x83 = 26U;
	uint16_t x84 = 167U;
	int32_t t16 = 186;

	t16 = (x81<(x82|(x83*x84)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x89 = INT8_MIN;
	int16_t x91 = INT16_MIN;
	volatile int32_t t17 = -12741700;

	t17 = (x89<(x90|(x91*x92)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x93 = -1LL;
	static int8_t x95 = 16;
	static int32_t t18 = -1;

	t18 = (x93<(x94|(x95*x96)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x98 = INT8_MIN;
	int32_t t19 = -1103;

	t19 = (x97<(x98|(x99*x100)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x105 = INT64_MAX;
	int16_t x106 = -18;
	int32_t t20 = -674298;

	t20 = (x105<(x106|(x107*x108)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x113 = INT8_MIN;
	int64_t x114 = -1583672886066919LL;
	int32_t x115 = -1;
	int32_t x116 = -1657;
	int32_t t21 = -198069178;

	t21 = (x113<(x114|(x115*x116)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x119 = INT32_MAX;
	volatile uint64_t x120 = UINT64_MAX;
	int32_t t22 = 76;

	t22 = (x117<(x118|(x119*x120)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x121 = INT8_MIN;
	static uint64_t x124 = 184307098156LLU;
	int32_t t23 = -656;

	t23 = (x121<(x122|(x123*x124)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x127 = 75U;
	int8_t x128 = INT8_MIN;
	int32_t t24 = 422333;

	t24 = (x125<(x126|(x127*x128)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x133 = -3;
	volatile int16_t x134 = INT16_MIN;
	int64_t x135 = -254518LL;
	volatile int16_t x136 = INT16_MAX;
	volatile int32_t t25 = -60;

	t25 = (x133<(x134|(x135*x136)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x137 = -1583;
	int32_t x138 = -1;
	uint64_t x139 = UINT64_MAX;
	int8_t x140 = 24;
	int32_t t26 = -2;

	t26 = (x137<(x138|(x139*x140)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x141 = UINT64_MAX;
	volatile int8_t x142 = INT8_MAX;
	int64_t x143 = -1LL;
	int16_t x144 = INT16_MAX;

	t27 = (x141<(x142|(x143*x144)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x149 = -1;
	uint64_t x151 = UINT64_MAX;
	volatile int32_t x152 = INT32_MAX;
	int32_t t28 = 1;

	t28 = (x149<(x150|(x151*x152)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x154 = INT64_MAX;
	int8_t x155 = -1;
	volatile int8_t x156 = INT8_MAX;
	volatile int32_t t29 = -64024952;

	t29 = (x153<(x154|(x155*x156)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x161 = -1;
	static int8_t x162 = -1;
	int8_t x163 = INT8_MAX;
	uint32_t x164 = UINT32_MAX;
	volatile int32_t t30 = -2;

	t30 = (x161<(x162|(x163*x164)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x165 = -1LL;
	int8_t x167 = INT8_MAX;
	volatile uint8_t x168 = 1U;
	volatile int32_t t31 = -6670;

	t31 = (x165<(x166|(x167*x168)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint8_t x170 = 103U;
	int64_t x172 = -1LL;
	volatile int32_t t32 = -3101;

	t32 = (x169<(x170|(x171*x172)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x173 = INT16_MIN;
	static int64_t x174 = -1LL;
	static uint16_t x175 = 2U;
	volatile int32_t t33 = 0;

	t33 = (x173<(x174|(x175*x176)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x181 = -1LL;
	int16_t x184 = 332;
	int32_t t34 = -3;

	t34 = (x181<(x182|(x183*x184)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x185 = 99U;
	int64_t x186 = INT64_MAX;
	int8_t x187 = 3;
	volatile int16_t x188 = INT16_MIN;
	volatile int32_t t35 = -25368;

	t35 = (x185<(x186|(x187*x188)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x189 = UINT64_MAX;
	uint8_t x190 = UINT8_MAX;
	int32_t x191 = INT32_MAX;
	volatile int16_t x192 = 0;
	int32_t t36 = -1009;

	t36 = (x189<(x190|(x191*x192)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x193 = -1LL;
	static int16_t x194 = 3729;
	uint32_t x195 = 7U;
	int64_t x196 = -1LL;
	static volatile int32_t t37 = 555467264;

	t37 = (x193<(x194|(x195*x196)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x197 = UINT32_MAX;
	uint64_t x198 = 100LLU;
	uint64_t x199 = UINT64_MAX;
	volatile uint32_t x200 = 3U;

	t38 = (x197<(x198|(x199*x200)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x203 = 358U;
	int32_t t39 = 96;

	t39 = (x201<(x202|(x203*x204)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x207 = INT8_MIN;
	volatile uint16_t x208 = 87U;
	volatile int32_t t40 = -1;

	t40 = (x205<(x206|(x207*x208)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x209 = -7;
	int8_t x210 = -1;
	volatile int8_t x211 = INT8_MIN;
	static int32_t t41 = 30842;

	t41 = (x209<(x210|(x211*x212)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x213 = 73U;
	int16_t x215 = INT16_MIN;
	int32_t t42 = 59940;

	t42 = (x213<(x214|(x215*x216)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x217 = 219604U;
	uint16_t x218 = UINT16_MAX;
	int32_t x219 = INT32_MIN;
	static int32_t t43 = 4;

	t43 = (x217<(x218|(x219*x220)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x221 = INT16_MIN;
	int16_t x222 = INT16_MIN;
	int16_t x223 = -1;
	static int64_t x224 = -63796935236917LL;
	int32_t t44 = -62449424;

	t44 = (x221<(x222|(x223*x224)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x233 = INT8_MIN;
	int16_t x235 = INT16_MAX;
	static uint8_t x236 = 101U;
	int32_t t45 = -125329718;

	t45 = (x233<(x234|(x235*x236)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x238 = -1LL;
	int32_t t46 = 401626920;

	t46 = (x237<(x238|(x239*x240)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x241 = INT64_MIN;
	static volatile int32_t x242 = INT32_MIN;
	volatile int32_t t47 = -1211584;

	t47 = (x241<(x242|(x243*x244)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint32_t x249 = 1473451046U;
	static uint8_t x250 = 62U;
	static int32_t x251 = -1;
	int8_t x252 = INT8_MIN;
	static int32_t t48 = 2;

	t48 = (x249<(x250|(x251*x252)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x253 = INT16_MIN;
	int64_t x256 = 238909LL;
	int32_t t49 = 3594114;

	t49 = (x253<(x254|(x255*x256)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x257 = 1;
	uint64_t x259 = 54958940879078LLU;
	int64_t x260 = INT64_MIN;
	static volatile int32_t t50 = -14774;

	t50 = (x257<(x258|(x259*x260)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x261 = INT16_MAX;
	int64_t x262 = INT64_MIN;
	uint16_t x264 = 1U;
	volatile int32_t t51 = 1411;

	t51 = (x261<(x262|(x263*x264)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x273 = UINT16_MAX;
	static int32_t x274 = -1;
	static int16_t x275 = 6590;
	volatile uint32_t x276 = 25919743U;
	volatile int32_t t52 = 7872071;

	t52 = (x273<(x274|(x275*x276)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x281 = -1;
	int16_t x282 = INT16_MIN;
	int32_t x284 = -14;
	int32_t t53 = 48;

	t53 = (x281<(x282|(x283*x284)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x285 = 0;
	int8_t x286 = -1;
	int32_t x287 = 24206;
	uint8_t x288 = 54U;
	volatile int32_t t54 = -533248546;

	t54 = (x285<(x286|(x287*x288)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x289 = 26U;
	volatile uint64_t x290 = UINT64_MAX;
	volatile int64_t x291 = INT64_MAX;
	volatile int32_t t55 = 59;

	t55 = (x289<(x290|(x291*x292)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x294 = 6;
	static int32_t x295 = 0;
	volatile uint64_t x296 = UINT64_MAX;
	int32_t t56 = 5929;

	t56 = (x293<(x294|(x295*x296)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x301 = -1;
	uint64_t x302 = 360751859479312LLU;
	int32_t t57 = -57;

	t57 = (x301<(x302|(x303*x304)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x306 = INT16_MIN;
	volatile uint64_t x307 = 116570385215276740LLU;
	volatile int32_t x308 = -1;
	volatile int32_t t58 = -23;

	t58 = (x305<(x306|(x307*x308)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint16_t x309 = 0U;
	int8_t x310 = INT8_MAX;
	int32_t x312 = -420;
	static volatile int32_t t59 = -143;

	t59 = (x309<(x310|(x311*x312)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x313 = -1;
	int8_t x314 = INT8_MAX;
	static int16_t x315 = INT16_MIN;
	uint32_t x316 = UINT32_MAX;
	volatile int32_t t60 = -95048;

	t60 = (x313<(x314|(x315*x316)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x317 = -1;
	int16_t x318 = -42;
	int64_t x319 = INT64_MIN;
	uint64_t x320 = 14268665046LLU;
	volatile int32_t t61 = -404178910;

	t61 = (x317<(x318|(x319*x320)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x337 = INT32_MIN;
	int64_t x338 = -1LL;
	volatile int32_t t62 = 101612815;

	t62 = (x337<(x338|(x339*x340)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x342 = INT32_MIN;
	volatile int32_t x343 = -20;
	static int8_t x344 = INT8_MAX;
	int32_t t63 = -41;

	t63 = (x341<(x342|(x343*x344)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x345 = 73173110LLU;
	int32_t x346 = -1;
	static int8_t x347 = INT8_MAX;
	volatile int32_t t64 = 45;

	t64 = (x345<(x346|(x347*x348)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x350 = -974LL;

	t65 = (x349<(x350|(x351*x352)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x353 = -705599436937LL;
	static int16_t x354 = -1;
	int16_t x356 = -767;

	t66 = (x353<(x354|(x355*x356)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x361 = INT64_MAX;
	static volatile int16_t x362 = INT16_MIN;
	uint64_t x363 = UINT64_MAX;
	int8_t x364 = -1;
	static volatile int32_t t67 = -6;

	t67 = (x361<(x362|(x363*x364)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x365 = 3359U;
	int8_t x367 = INT8_MAX;
	volatile int32_t x368 = -1;
	volatile int32_t t68 = 1690926;

	t68 = (x365<(x366|(x367*x368)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x375 = 431883888232357835LL;
	uint64_t x376 = 214LLU;
	int32_t t69 = 31761;

	t69 = (x373<(x374|(x375*x376)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x377 = -72;
	uint8_t x378 = UINT8_MAX;
	static int8_t x379 = 1;
	static int32_t x380 = 5437575;
	volatile int32_t t70 = 1;

	t70 = (x377<(x378|(x379*x380)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x385 = UINT32_MAX;
	int32_t x386 = 238167308;
	volatile uint32_t x387 = UINT32_MAX;
	int32_t x388 = 12969056;
	volatile int32_t t71 = 116577;

	t71 = (x385<(x386|(x387*x388)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x389 = 23;
	static uint16_t x390 = UINT16_MAX;
	static int16_t x391 = -1;
	int32_t x392 = INT32_MAX;
	volatile int32_t t72 = 15;

	t72 = (x389<(x390|(x391*x392)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x397 = INT64_MIN;
	int32_t x398 = INT32_MIN;
	int8_t x399 = 49;
	int8_t x400 = 1;

	t73 = (x397<(x398|(x399*x400)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x401 = 7808;
	int16_t x403 = INT16_MIN;
	static uint32_t x404 = UINT32_MAX;

	t74 = (x401<(x402|(x403*x404)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x406 = UINT8_MAX;
	static int32_t x407 = INT32_MAX;
	int64_t x408 = -1LL;

	t75 = (x405<(x406|(x407*x408)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x409 = INT8_MAX;
	static int16_t x411 = INT16_MIN;
	static volatile uint32_t x412 = 791274U;

	t76 = (x409<(x410|(x411*x412)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x418 = 443;
	uint32_t x419 = UINT32_MAX;
	int8_t x420 = INT8_MIN;
	volatile int32_t t77 = 5089;

	t77 = (x417<(x418|(x419*x420)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x422 = 106496186LL;
	int64_t x423 = 85663588978LL;
	int8_t x424 = INT8_MIN;

	t78 = (x421<(x422|(x423*x424)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x425 = UINT64_MAX;
	static volatile uint32_t x426 = 25731434U;
	int16_t x427 = -1;
	int16_t x428 = -1;

	t79 = (x425<(x426|(x427*x428)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x429 = -1;
	int16_t x430 = INT16_MIN;
	static int8_t x431 = INT8_MIN;
	int32_t t80 = -88;

	t80 = (x429<(x430|(x431*x432)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x433 = INT64_MAX;
	volatile int16_t x434 = INT16_MIN;
	uint16_t x435 = 2U;
	static volatile int32_t t81 = 6;

	t81 = (x433<(x434|(x435*x436)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x445 = 88319302361944LLU;
	static uint16_t x447 = 16055U;
	int32_t x448 = 31824;
	static volatile int32_t t82 = -43;

	t82 = (x445<(x446|(x447*x448)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x449 = 1U;
	int32_t x450 = -1;
	uint64_t x452 = 298855667LLU;

	t83 = (x449<(x450|(x451*x452)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x461 = -1;
	static int32_t x462 = INT32_MIN;
	static int64_t x463 = 46314778660LL;
	static uint64_t x464 = UINT64_MAX;
	int32_t t84 = -30109;

	t84 = (x461<(x462|(x463*x464)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x469 = INT8_MIN;
	uint8_t x471 = 16U;
	static int8_t x472 = -1;
	int32_t t85 = 44662971;

	t85 = (x469<(x470|(x471*x472)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x473 = -1;
	int16_t x474 = -816;
	volatile int8_t x475 = 31;
	volatile int8_t x476 = -1;
	volatile int32_t t86 = -12006;

	t86 = (x473<(x474|(x475*x476)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x481 = INT64_MIN;
	int64_t x482 = 0LL;
	volatile int16_t x484 = -184;

	t87 = (x481<(x482|(x483*x484)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x489 = -6;
	int8_t x491 = 3;
	volatile int16_t x492 = -21;
	volatile int32_t t88 = -333842093;

	t88 = (x489<(x490|(x491*x492)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x494 = 9901U;
	uint8_t x495 = 1U;
	int16_t x496 = -7;
	volatile int32_t t89 = 2661;

	t89 = (x493<(x494|(x495*x496)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x497 = INT8_MIN;
	volatile int32_t x498 = INT32_MAX;
	int8_t x500 = INT8_MIN;
	int32_t t90 = 23826580;

	t90 = (x497<(x498|(x499*x500)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x501 = -10348163LL;
	static uint32_t x503 = UINT32_MAX;
	volatile uint64_t x504 = UINT64_MAX;

	t91 = (x501<(x502|(x503*x504)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x509 = 13U;
	uint64_t x510 = 1LLU;
	volatile int32_t t92 = -61742;

	t92 = (x509<(x510|(x511*x512)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x513 = INT8_MIN;
	static uint64_t x515 = 656604499253180417LLU;
	int8_t x516 = -1;
	volatile int32_t t93 = 5553;

	t93 = (x513<(x514|(x515*x516)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x517 = -122379LL;
	int32_t x518 = 1;
	int32_t x519 = -1;
	int16_t x520 = -1;
	static volatile int32_t t94 = 1478;

	t94 = (x517<(x518|(x519*x520)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x521 = INT64_MIN;
	int8_t x522 = INT8_MIN;
	static volatile int8_t x523 = 0;
	static uint8_t x524 = UINT8_MAX;
	static int32_t t95 = 3;

	t95 = (x521<(x522|(x523*x524)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x525 = -1;
	int16_t x526 = INT16_MIN;

	t96 = (x525<(x526|(x527*x528)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x530 = 140U;
	int16_t x531 = INT16_MAX;
	int16_t x532 = INT16_MIN;
	int32_t t97 = 842727;

	t97 = (x529<(x530|(x531*x532)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x535 = 885;
	uint64_t x536 = 29352602LLU;
	int32_t t98 = 1;

	t98 = (x533<(x534|(x535*x536)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x537 = 78U;
	uint32_t x539 = 212049785U;
	int8_t x540 = 1;
	static int32_t t99 = 4;

	t99 = (x537<(x538|(x539*x540)));

	if (t99 != 1) { NG(); } else { ; }
	
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

