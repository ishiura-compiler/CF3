#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = INT64_MIN;
static volatile uint64_t x7 = UINT64_MAX;
int16_t x16 = -1;
static volatile int16_t x24 = -1;
static uint64_t x25 = 82384LLU;
volatile int8_t x29 = 6;
static int8_t x33 = 3;
uint32_t x35 = 359139U;
int8_t x36 = INT8_MAX;
volatile uint64_t x38 = 194926856862041LLU;
int8_t x40 = 31;
uint16_t x43 = 3655U;
static int32_t x48 = 25356350;
volatile uint64_t x51 = 31LLU;
static volatile int32_t x53 = INT32_MIN;
int16_t x56 = -127;
int32_t x60 = -1;
int16_t x68 = 21;
volatile int32_t t16 = 272008;
int64_t x73 = INT64_MIN;
static int64_t x76 = -1LL;
int16_t x81 = 2706;
int8_t x89 = INT8_MIN;
uint32_t x100 = 24U;
volatile uint16_t x101 = 479U;
static int64_t x102 = INT64_MIN;
static volatile int32_t t25 = -196757;
static int16_t x111 = INT16_MIN;
uint64_t x116 = UINT64_MAX;
static int32_t t28 = -93435;
int8_t x119 = 1;
int32_t t32 = -13;
int16_t x142 = 381;
int16_t x143 = -55;
volatile int32_t x148 = INT32_MIN;
static uint32_t x149 = UINT32_MAX;
static volatile uint32_t x167 = 672630469U;
int32_t t40 = -707645189;
int64_t x171 = INT64_MIN;
static uint64_t x174 = 16199LLU;
uint8_t x176 = 10U;
int8_t x189 = 15;
uint32_t x196 = UINT32_MAX;
volatile int64_t x201 = 12939LL;
volatile uint8_t x205 = UINT8_MAX;
int32_t x207 = INT32_MIN;
int32_t x208 = -1;
int32_t x211 = INT32_MIN;
int8_t x218 = -1;
volatile int8_t x219 = 21;
uint64_t x222 = 610523585LLU;
volatile int32_t t54 = 12793514;
static volatile uint8_t x230 = 52U;
int8_t x232 = -12;
volatile uint8_t x234 = UINT8_MAX;
int64_t x238 = -1LL;
volatile int32_t t57 = 112516075;
static volatile int32_t t58 = 374282;
uint32_t x267 = UINT32_MAX;
int32_t t61 = -470;
static volatile int16_t x270 = INT16_MAX;
int32_t x274 = -1;
uint16_t x276 = 49U;
int8_t x285 = -1;
uint32_t x290 = 62U;
int8_t x295 = -3;
uint16_t x305 = 14U;
int8_t x306 = INT8_MAX;
int8_t x308 = 46;
volatile int32_t t73 = 17;
static uint64_t x325 = UINT64_MAX;
static uint32_t x341 = 216582U;
static int16_t x349 = INT16_MIN;
volatile uint8_t x356 = UINT8_MAX;
int32_t x358 = INT32_MIN;
uint32_t x363 = 94126U;
volatile int32_t t82 = -226;
int32_t x367 = INT32_MIN;
int32_t t85 = -104428;
static int16_t x389 = INT16_MIN;
static volatile int32_t x390 = INT32_MIN;
int64_t x393 = -1LL;
volatile uint8_t x395 = 3U;
uint64_t x403 = 4023290777428101LLU;
volatile int32_t x405 = INT32_MAX;
volatile int8_t x411 = INT8_MAX;
int32_t x413 = INT32_MIN;
volatile int32_t t95 = -423;
volatile uint64_t x426 = 100874LLU;
volatile int32_t t98 = -30539502;
uint64_t x429 = UINT64_MAX;
int16_t x430 = INT16_MIN;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static int32_t x2 = INT32_MIN;
	uint32_t x3 = 30U;
	int16_t x4 = -59;
	int32_t t0 = 25920747;

	t0 = (x1<((x2&x3)+x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -92421629678LL;
	static int32_t x8 = INT32_MAX;
	volatile int32_t t1 = -724889514;

	t1 = (x5<((x6&x7)+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -1;
	int16_t x10 = INT16_MIN;
	uint8_t x11 = 54U;
	volatile int16_t x12 = 6;
	int32_t t2 = 70;

	t2 = (x9<((x10&x11)+x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	int64_t x14 = INT64_MAX;
	uint32_t x15 = 885702U;
	int32_t t3 = 211;

	t3 = (x13<((x14&x15)+x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 544U;
	int32_t x18 = INT32_MIN;
	uint8_t x19 = 46U;
	int64_t x20 = INT64_MIN;
	volatile int32_t t4 = -1;

	t4 = (x17<((x18&x19)+x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x21 = INT32_MIN;
	int16_t x22 = 369;
	int32_t x23 = -1;
	static volatile int32_t t5 = -16216353;

	t5 = (x21<((x22&x23)+x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = 30936710343LL;
	int8_t x27 = INT8_MIN;
	uint32_t x28 = 797301311U;
	volatile int32_t t6 = -200;

	t6 = (x25<((x26&x27)+x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x30 = 62U;
	int64_t x31 = INT64_MIN;
	int16_t x32 = INT16_MIN;
	int32_t t7 = -1;

	t7 = (x29<((x30&x31)+x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = 17;
	static volatile int32_t t8 = 12893083;

	t8 = (x33<((x34&x35)+x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int8_t x39 = INT8_MAX;
	int32_t t9 = 12303;

	t9 = (x37<((x38&x39)+x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -366731489385900538LL;
	uint32_t x42 = UINT32_MAX;
	static int32_t x44 = 2436210;
	static int32_t t10 = -8165785;

	t10 = (x41<((x42&x43)+x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 51064638788LLU;
	uint8_t x46 = UINT8_MAX;
	int64_t x47 = INT64_MIN;
	static int32_t t11 = 7;

	t11 = (x45<((x46&x47)+x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = 5215702;
	int16_t x50 = INT16_MAX;
	int64_t x52 = 66709114244LL;
	volatile int32_t t12 = 250765;

	t12 = (x49<((x50&x51)+x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x54 = 0;
	int16_t x55 = INT16_MAX;
	volatile int32_t t13 = 519547;

	t13 = (x53<((x54&x55)+x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	static uint16_t x58 = 3U;
	static int16_t x59 = -1;
	static int32_t t14 = -11;

	t14 = (x57<((x58&x59)+x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	uint16_t x62 = 356U;
	uint32_t x63 = 1159U;
	uint16_t x64 = 5172U;
	static volatile int32_t t15 = -13998609;

	t15 = (x61<((x62&x63)+x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 51U;
	static int8_t x66 = INT8_MIN;
	volatile int32_t x67 = -50;

	t16 = (x65<((x66&x67)+x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x69 = UINT8_MAX;
	uint32_t x70 = 4318U;
	int64_t x71 = 2722LL;
	static int32_t x72 = 85;
	int32_t t17 = -162177016;

	t17 = (x69<((x70&x71)+x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x74 = 6U;
	int8_t x75 = INT8_MIN;
	static int32_t t18 = -231;

	t18 = (x73<((x74&x75)+x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -824950532LL;
	static int8_t x78 = -8;
	int16_t x79 = INT16_MIN;
	static int8_t x80 = -52;
	static volatile int32_t t19 = 192451;

	t19 = (x77<((x78&x79)+x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x82 = -1;
	volatile uint32_t x83 = 9234430U;
	static uint16_t x84 = 1107U;
	int32_t t20 = 239821220;

	t20 = (x81<((x82&x83)+x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = INT32_MIN;
	static int64_t x86 = INT64_MAX;
	uint64_t x87 = 1713414LLU;
	uint64_t x88 = 2063831LLU;
	volatile int32_t t21 = 6504;

	t21 = (x85<((x86&x87)+x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x90 = 43U;
	volatile uint16_t x91 = UINT16_MAX;
	int32_t x92 = -1;
	int32_t t22 = -6166227;

	t22 = (x89<((x90&x91)+x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = INT16_MAX;
	volatile int16_t x94 = 2;
	int16_t x95 = INT16_MIN;
	int64_t x96 = INT64_MIN;
	volatile int32_t t23 = 1762;

	t23 = (x93<((x94&x95)+x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = INT32_MIN;
	int8_t x98 = -1;
	uint16_t x99 = 3U;
	volatile int32_t t24 = 811028271;

	t24 = (x97<((x98&x99)+x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x103 = UINT16_MAX;
	static int8_t x104 = INT8_MAX;

	t25 = (x101<((x102&x103)+x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x105 = 0U;
	static volatile int16_t x106 = 1;
	static volatile uint16_t x107 = 22949U;
	static int8_t x108 = INT8_MAX;
	volatile int32_t t26 = 8499;

	t26 = (x105<((x106&x107)+x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -241895175;
	static volatile uint16_t x110 = 0U;
	int64_t x112 = -1LL;
	volatile int32_t t27 = -1483;

	t27 = (x109<((x110&x111)+x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -2929027625LL;
	uint64_t x114 = 142046614174405206LLU;
	int32_t x115 = INT32_MIN;

	t28 = (x113<((x114&x115)+x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static uint64_t x117 = 19756755595981149LLU;
	uint16_t x118 = UINT16_MAX;
	volatile uint32_t x120 = 13299U;
	volatile int32_t t29 = -7;

	t29 = (x117<((x118&x119)+x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x125 = 519LLU;
	uint16_t x126 = 4U;
	int64_t x127 = INT64_MIN;
	volatile uint16_t x128 = 311U;
	volatile int32_t t30 = -32;

	t30 = (x125<((x126&x127)+x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x129 = 895869967LLU;
	uint16_t x130 = 15U;
	int8_t x131 = INT8_MIN;
	int32_t x132 = INT32_MIN;
	int32_t t31 = -1497;

	t31 = (x129<((x130&x131)+x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = 4;
	int16_t x134 = INT16_MIN;
	int8_t x135 = 3;
	int8_t x136 = -1;

	t32 = (x133<((x134&x135)+x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x137 = UINT8_MAX;
	static uint16_t x138 = UINT16_MAX;
	int8_t x139 = 1;
	int8_t x140 = INT8_MAX;
	volatile int32_t t33 = 2665633;

	t33 = (x137<((x138&x139)+x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x141 = UINT32_MAX;
	int16_t x144 = -4755;
	volatile int32_t t34 = 1;

	t34 = (x141<((x142&x143)+x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x145 = INT16_MIN;
	int16_t x146 = INT16_MAX;
	int8_t x147 = INT8_MAX;
	volatile int32_t t35 = 1;

	t35 = (x145<((x146&x147)+x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x150 = -1;
	volatile uint16_t x151 = 19352U;
	uint16_t x152 = 295U;
	int32_t t36 = 15832;

	t36 = (x149<((x150&x151)+x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x153 = -5664;
	int16_t x154 = INT16_MAX;
	static int8_t x155 = INT8_MAX;
	volatile uint8_t x156 = 13U;
	static int32_t t37 = 19236573;

	t37 = (x153<((x154&x155)+x156));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x157 = INT64_MAX;
	static volatile uint32_t x158 = 1U;
	volatile int32_t x159 = INT32_MIN;
	static volatile uint8_t x160 = UINT8_MAX;
	static volatile int32_t t38 = 2;

	t38 = (x157<((x158&x159)+x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x161 = -3;
	static volatile uint64_t x162 = 647052016418395939LLU;
	int64_t x163 = -682372LL;
	uint8_t x164 = 6U;
	int32_t t39 = 892694049;

	t39 = (x161<((x162&x163)+x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x165 = INT16_MIN;
	volatile uint64_t x166 = 797119LLU;
	uint64_t x168 = 3130835498978LLU;

	t40 = (x165<((x166&x167)+x168));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = INT8_MIN;
	uint8_t x170 = 8U;
	volatile int16_t x172 = INT16_MIN;
	static volatile int32_t t41 = -3573;

	t41 = (x169<((x170&x171)+x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x173 = 0U;
	static int16_t x175 = 264;
	int32_t t42 = 3642;

	t42 = (x173<((x174&x175)+x176));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x177 = -734038LL;
	int32_t x178 = INT32_MIN;
	static int32_t x179 = -1;
	static uint8_t x180 = 2U;
	static int32_t t43 = -40380;

	t43 = (x177<((x178&x179)+x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = INT64_MAX;
	static volatile int64_t x182 = INT64_MIN;
	int64_t x183 = INT64_MIN;
	int64_t x184 = 7196LL;
	static int32_t t44 = -25597;

	t44 = (x181<((x182&x183)+x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x185 = 2;
	int8_t x186 = INT8_MIN;
	volatile uint32_t x187 = 1U;
	volatile uint16_t x188 = UINT16_MAX;
	volatile int32_t t45 = -1;

	t45 = (x185<((x186&x187)+x188));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint64_t x190 = 24951LLU;
	int16_t x191 = INT16_MAX;
	static volatile int16_t x192 = 0;
	static volatile int32_t t46 = -30;

	t46 = (x189<((x190&x191)+x192));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x193 = -10;
	uint64_t x194 = 190605528205232LLU;
	int8_t x195 = INT8_MIN;
	int32_t t47 = 33;

	t47 = (x193<((x194&x195)+x196));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = INT64_MAX;
	uint16_t x198 = UINT16_MAX;
	uint32_t x199 = 40094U;
	uint8_t x200 = UINT8_MAX;
	static int32_t t48 = -686847;

	t48 = (x197<((x198&x199)+x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x202 = 2U;
	int64_t x203 = INT64_MIN;
	volatile int8_t x204 = -1;
	volatile int32_t t49 = 1969;

	t49 = (x201<((x202&x203)+x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x206 = 4564016U;
	int32_t t50 = 1045299;

	t50 = (x205<((x206&x207)+x208));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = INT16_MIN;
	int64_t x210 = INT64_MAX;
	static volatile int32_t x212 = 260922250;
	volatile int32_t t51 = -58391;

	t51 = (x209<((x210&x211)+x212));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x213 = -1;
	static uint64_t x214 = 929068LLU;
	uint16_t x215 = 2U;
	static int16_t x216 = -1;
	volatile int32_t t52 = -38015;

	t52 = (x213<((x214&x215)+x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x217 = INT64_MIN;
	static int8_t x220 = 1;
	int32_t t53 = 0;

	t53 = (x217<((x218&x219)+x220));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x221 = INT32_MIN;
	int8_t x223 = -1;
	volatile uint64_t x224 = 5746374239993LLU;

	t54 = (x221<((x222&x223)+x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x229 = -26;
	int8_t x231 = -1;
	static int32_t t55 = -502446;

	t55 = (x229<((x230&x231)+x232));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = INT8_MAX;
	int8_t x235 = -28;
	static int16_t x236 = INT16_MIN;
	int32_t t56 = 171;

	t56 = (x233<((x234&x235)+x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = INT64_MAX;
	uint8_t x239 = 22U;
	uint16_t x240 = 1U;

	t57 = (x237<((x238&x239)+x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x241 = 528705271370LLU;
	volatile int32_t x242 = -1;
	uint16_t x243 = 218U;
	int32_t x244 = -218;

	t58 = (x241<((x242&x243)+x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = INT16_MIN;
	static int16_t x246 = INT16_MIN;
	static int8_t x247 = 1;
	uint64_t x248 = 49957917246725LLU;
	int32_t t59 = 277;

	t59 = (x245<((x246&x247)+x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x253 = INT32_MAX;
	volatile int64_t x254 = -1LL;
	static volatile uint8_t x255 = 46U;
	int32_t x256 = 1;
	static int32_t t60 = -47796730;

	t60 = (x253<((x254&x255)+x256));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x265 = -12050193LL;
	int64_t x266 = INT64_MIN;
	int16_t x268 = -1;

	t61 = (x265<((x266&x267)+x268));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x269 = 343LLU;
	int8_t x271 = 0;
	int64_t x272 = -1983257LL;
	volatile int32_t t62 = -929;

	t62 = (x269<((x270&x271)+x272));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x273 = INT8_MAX;
	static uint16_t x275 = 156U;
	volatile int32_t t63 = -219;

	t63 = (x273<((x274&x275)+x276));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x277 = INT8_MIN;
	int64_t x278 = INT64_MAX;
	uint32_t x279 = 42554365U;
	int16_t x280 = INT16_MIN;
	static volatile int32_t t64 = -9144;

	t64 = (x277<((x278&x279)+x280));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x281 = 3;
	int64_t x282 = -1217804273738LL;
	uint16_t x283 = 14268U;
	int64_t x284 = -3855LL;
	int32_t t65 = 823380146;

	t65 = (x281<((x282&x283)+x284));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x286 = INT8_MAX;
	volatile int32_t x287 = 589653837;
	static uint32_t x288 = 46U;
	volatile int32_t t66 = 372387;

	t66 = (x285<((x286&x287)+x288));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x289 = -1;
	uint64_t x291 = UINT64_MAX;
	static uint16_t x292 = 1U;
	static volatile int32_t t67 = -9966;

	t67 = (x289<((x290&x291)+x292));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x293 = -1;
	int64_t x294 = 1LL;
	int32_t x296 = INT32_MIN;
	static volatile int32_t t68 = 3408339;

	t68 = (x293<((x294&x295)+x296));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x301 = UINT64_MAX;
	uint16_t x302 = UINT16_MAX;
	static uint16_t x303 = 4961U;
	int16_t x304 = 113;
	volatile int32_t t69 = 5980684;

	t69 = (x301<((x302&x303)+x304));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x307 = 0U;
	int32_t t70 = -1264831;

	t70 = (x305<((x306&x307)+x308));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x309 = 1U;
	static volatile int32_t x310 = -81853;
	int16_t x311 = 1;
	static int64_t x312 = INT64_MIN;
	int32_t t71 = 11660936;

	t71 = (x309<((x310&x311)+x312));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x313 = 2389907781LL;
	uint8_t x314 = 2U;
	int64_t x315 = INT64_MAX;
	int8_t x316 = -1;
	volatile int32_t t72 = 223737635;

	t72 = (x313<((x314&x315)+x316));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x317 = -1;
	uint8_t x318 = 8U;
	uint16_t x319 = 25601U;
	static int8_t x320 = -4;

	t73 = (x317<((x318&x319)+x320));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x321 = 973453LLU;
	int8_t x322 = -3;
	int8_t x323 = INT8_MAX;
	volatile int32_t x324 = INT32_MIN;
	int32_t t74 = -1007550;

	t74 = (x321<((x322&x323)+x324));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x326 = 226063468539200LL;
	uint8_t x327 = 49U;
	uint64_t x328 = UINT64_MAX;
	int32_t t75 = 0;

	t75 = (x325<((x326&x327)+x328));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x329 = 7;
	uint32_t x330 = 97287458U;
	int16_t x331 = -221;
	static int16_t x332 = 83;
	volatile int32_t t76 = -162848;

	t76 = (x329<((x330&x331)+x332));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x333 = -457151503LL;
	uint64_t x334 = 7774131390369LLU;
	static uint32_t x335 = UINT32_MAX;
	int8_t x336 = -1;
	int32_t t77 = -11294;

	t77 = (x333<((x334&x335)+x336));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x342 = -1;
	int64_t x343 = INT64_MAX;
	int16_t x344 = -7812;
	int32_t t78 = 683681;

	t78 = (x341<((x342&x343)+x344));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x350 = INT32_MIN;
	int32_t x351 = -1;
	int32_t x352 = INT32_MAX;
	int32_t t79 = 2;

	t79 = (x349<((x350&x351)+x352));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x353 = 2163306LLU;
	static volatile int8_t x354 = INT8_MAX;
	int16_t x355 = INT16_MIN;
	volatile int32_t t80 = 181;

	t80 = (x353<((x354&x355)+x356));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x357 = -62;
	static int64_t x359 = INT64_MIN;
	int32_t x360 = 13482;
	volatile int32_t t81 = -18917;

	t81 = (x357<((x358&x359)+x360));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x361 = INT16_MAX;
	int8_t x362 = -11;
	uint32_t x364 = UINT32_MAX;

	t82 = (x361<((x362&x363)+x364));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint16_t x365 = 0U;
	static volatile int16_t x366 = 0;
	int32_t x368 = INT32_MAX;
	int32_t t83 = 1256006;

	t83 = (x365<((x366&x367)+x368));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x369 = INT32_MIN;
	int8_t x370 = INT8_MIN;
	int16_t x371 = -21;
	int8_t x372 = 1;
	int32_t t84 = -13;

	t84 = (x369<((x370&x371)+x372));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x373 = -22;
	int32_t x374 = INT32_MIN;
	uint16_t x375 = 252U;
	int8_t x376 = -1;

	t85 = (x373<((x374&x375)+x376));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x377 = 158U;
	volatile int64_t x378 = -3506990LL;
	volatile uint16_t x379 = 1479U;
	static uint64_t x380 = 21LLU;
	int32_t t86 = -9;

	t86 = (x377<((x378&x379)+x380));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x381 = -1;
	volatile uint64_t x382 = 114376162106LLU;
	uint64_t x383 = UINT64_MAX;
	volatile int16_t x384 = INT16_MIN;
	volatile int32_t t87 = 24;

	t87 = (x381<((x382&x383)+x384));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x385 = INT16_MAX;
	int64_t x386 = -1LL;
	int64_t x387 = INT64_MIN;
	int16_t x388 = INT16_MAX;
	int32_t t88 = -163;

	t88 = (x385<((x386&x387)+x388));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x391 = -1;
	uint16_t x392 = UINT16_MAX;
	volatile int32_t t89 = -8;

	t89 = (x389<((x390&x391)+x392));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x394 = INT64_MAX;
	uint64_t x396 = UINT64_MAX;
	volatile int32_t t90 = 119336;

	t90 = (x393<((x394&x395)+x396));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x397 = 205648LLU;
	static int16_t x398 = -283;
	int16_t x399 = INT16_MIN;
	int8_t x400 = INT8_MIN;
	volatile int32_t t91 = -10332;

	t91 = (x397<((x398&x399)+x400));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x401 = INT64_MAX;
	uint32_t x402 = UINT32_MAX;
	static int64_t x404 = -38447LL;
	int32_t t92 = -3830;

	t92 = (x401<((x402&x403)+x404));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x406 = -1;
	int8_t x407 = INT8_MAX;
	uint64_t x408 = 27422551LLU;
	static int32_t t93 = 4;

	t93 = (x405<((x406&x407)+x408));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x409 = INT32_MIN;
	int64_t x410 = INT64_MIN;
	static volatile uint64_t x412 = UINT64_MAX;
	volatile int32_t t94 = -648265733;

	t94 = (x409<((x410&x411)+x412));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x414 = 13703U;
	int32_t x415 = INT32_MIN;
	volatile int8_t x416 = INT8_MIN;

	t95 = (x413<((x414&x415)+x416));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x417 = 40042730LL;
	volatile uint8_t x418 = 48U;
	int64_t x419 = INT64_MIN;
	volatile int16_t x420 = INT16_MIN;
	int32_t t96 = -44;

	t96 = (x417<((x418&x419)+x420));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x421 = 1;
	volatile int64_t x422 = -1LL;
	uint16_t x423 = 1U;
	static uint64_t x424 = 180500152LLU;
	static volatile int32_t t97 = 209025;

	t97 = (x421<((x422&x423)+x424));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x425 = INT64_MIN;
	int16_t x427 = 54;
	static int8_t x428 = -6;

	t98 = (x425<((x426&x427)+x428));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x431 = 450;
	static int16_t x432 = INT16_MAX;
	static int32_t t99 = 207;

	t99 = (x429<((x430&x431)+x432));

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

