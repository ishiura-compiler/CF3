#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x10 = INT8_MIN;
volatile int32_t x16 = -1;
uint8_t x19 = UINT8_MAX;
uint32_t x20 = 1741U;
int32_t t3 = 33225;
static int64_t x37 = INT64_MIN;
int32_t x44 = INT32_MIN;
int8_t x53 = INT8_MIN;
uint8_t x55 = 27U;
uint16_t x61 = 159U;
static int32_t x67 = INT32_MIN;
uint64_t x68 = UINT64_MAX;
volatile int32_t t11 = -481116100;
int8_t x96 = 0;
volatile int32_t x105 = -302419716;
static int8_t x107 = INT8_MIN;
uint8_t x120 = 3U;
int32_t t22 = 14378329;
volatile int32_t t23 = -32609;
volatile int32_t t27 = 14713;
uint64_t x189 = UINT64_MAX;
int32_t x190 = INT32_MAX;
uint8_t x191 = UINT8_MAX;
volatile uint64_t x197 = UINT64_MAX;
int16_t x200 = -1;
int32_t t31 = -165575956;
int64_t x201 = -1LL;
int32_t x204 = -146798;
static volatile int32_t t33 = 730792921;
uint8_t x209 = UINT8_MAX;
static uint16_t x210 = 202U;
volatile uint16_t x218 = 6U;
uint32_t x222 = 432291U;
uint32_t x224 = 0U;
volatile int64_t x226 = -182212646941LL;
int8_t x241 = -2;
volatile int32_t t40 = 4;
volatile int32_t x246 = -485842016;
uint64_t x253 = 2372713374185931LLU;
volatile uint64_t x255 = UINT64_MAX;
int8_t x257 = INT8_MAX;
int32_t t44 = 1171749;
static int32_t x270 = INT32_MIN;
int16_t x271 = 1;
uint64_t x277 = UINT64_MAX;
volatile int8_t x281 = 24;
uint8_t x293 = UINT8_MAX;
static int16_t x298 = INT16_MIN;
volatile int32_t t52 = 26298;
int8_t x309 = 0;
volatile int16_t x315 = INT16_MIN;
static int32_t x318 = INT32_MAX;
int8_t x321 = -1;
uint32_t x340 = 996235075U;
int32_t t60 = 14124483;
static uint32_t x347 = UINT32_MAX;
int32_t t61 = 197837565;
int16_t x357 = -1;
int64_t x359 = 291701441LL;
volatile uint8_t x361 = 28U;
volatile int64_t x364 = -54LL;
int32_t x365 = -229;
volatile int32_t t65 = 968982;
uint32_t x371 = UINT32_MAX;
volatile uint8_t x375 = 2U;
static volatile int32_t t67 = 113;
static int16_t x380 = INT16_MIN;
volatile int32_t t69 = 2;
uint64_t x415 = 12824763LLU;
uint16_t x420 = 798U;
static int8_t x427 = -1;
volatile uint16_t x430 = 438U;
int64_t x434 = -1LL;
uint8_t x436 = 0U;
volatile int32_t t80 = -2;
static int8_t x449 = INT8_MIN;
volatile int32_t x451 = 3968326;
uint8_t x452 = 29U;
int8_t x456 = INT8_MAX;
volatile uint8_t x461 = 10U;
static int16_t x482 = INT16_MAX;
int8_t x484 = -1;
int32_t x500 = INT32_MIN;
int64_t x508 = INT64_MAX;
int32_t x519 = 26239;
uint32_t x520 = 1U;
volatile int32_t t95 = 554716;


void f0(void) {
	uint64_t x9 = UINT64_MAX;
	static int16_t x11 = -17;
	volatile int8_t x12 = -1;
	static volatile int32_t t0 = 1019605;

	t0 = (x9<(x10&(x11*x12)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = -1;
	int32_t x14 = INT32_MIN;
	uint8_t x15 = UINT8_MAX;
	volatile int32_t t1 = 226;

	t1 = (x13<(x14&(x15*x16)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x17 = INT32_MIN;
	volatile int8_t x18 = -1;
	volatile int32_t t2 = 1714;

	t2 = (x17<(x18&(x19*x20)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x25 = 12190U;
	uint8_t x26 = UINT8_MAX;
	volatile int32_t x27 = INT32_MAX;
	static int64_t x28 = -111046412LL;

	t3 = (x25<(x26&(x27*x28)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x33 = -1;
	uint32_t x34 = 19U;
	uint64_t x35 = 3LLU;
	int8_t x36 = -1;
	int32_t t4 = 19060809;

	t4 = (x33<(x34&(x35*x36)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x38 = 15713604;
	static uint8_t x39 = 1U;
	static int64_t x40 = INT64_MAX;
	int32_t t5 = 636;

	t5 = (x37<(x38&(x39*x40)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x41 = -7;
	uint64_t x42 = UINT64_MAX;
	int32_t x43 = 0;
	volatile int32_t t6 = -3;

	t6 = (x41<(x42&(x43*x44)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x54 = INT32_MAX;
	uint64_t x56 = 5164522911915380966LLU;
	volatile int32_t t7 = 1;

	t7 = (x53<(x54&(x55*x56)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x57 = 1159871237952LL;
	static uint16_t x58 = 27U;
	volatile int32_t x59 = -1;
	int32_t x60 = INT32_MAX;
	volatile int32_t t8 = -4462;

	t8 = (x57<(x58&(x59*x60)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x62 = -1LL;
	int16_t x63 = 5844;
	int8_t x64 = -1;
	int32_t t9 = -3;

	t9 = (x61<(x62&(x63*x64)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x65 = INT64_MAX;
	int64_t x66 = INT64_MIN;
	volatile int32_t t10 = -904922;

	t10 = (x65<(x66&(x67*x68)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x73 = 1854U;
	volatile uint64_t x74 = 5546061LLU;
	int8_t x75 = INT8_MIN;
	static int16_t x76 = INT16_MIN;

	t11 = (x73<(x74&(x75*x76)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x77 = UINT64_MAX;
	int32_t x78 = 5411449;
	static uint32_t x79 = UINT32_MAX;
	int32_t x80 = INT32_MAX;
	static int32_t t12 = 0;

	t12 = (x77<(x78&(x79*x80)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x85 = -1LL;
	int8_t x86 = -1;
	int16_t x87 = -28;
	uint8_t x88 = UINT8_MAX;
	static int32_t t13 = -6587;

	t13 = (x85<(x86&(x87*x88)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x89 = UINT16_MAX;
	int16_t x90 = 7;
	uint32_t x91 = UINT32_MAX;
	int32_t x92 = INT32_MAX;
	volatile int32_t t14 = -263485;

	t14 = (x89<(x90&(x91*x92)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x93 = UINT32_MAX;
	uint8_t x94 = UINT8_MAX;
	int32_t x95 = INT32_MIN;
	int32_t t15 = -311594;

	t15 = (x93<(x94&(x95*x96)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x101 = INT32_MIN;
	volatile int16_t x102 = -2907;
	volatile uint8_t x103 = 6U;
	static volatile int16_t x104 = 12668;
	int32_t t16 = -194108;

	t16 = (x101<(x102&(x103*x104)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x106 = -1;
	int8_t x108 = INT8_MIN;
	int32_t t17 = -721;

	t17 = (x105<(x106&(x107*x108)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x109 = 763946878U;
	int16_t x110 = INT16_MIN;
	int8_t x111 = INT8_MIN;
	uint16_t x112 = 1609U;
	int32_t t18 = 62965;

	t18 = (x109<(x110&(x111*x112)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x113 = 10565;
	volatile uint16_t x114 = 11U;
	volatile uint64_t x115 = 256158999856455886LLU;
	static uint32_t x116 = 42158214U;
	static volatile int32_t t19 = -1200372;

	t19 = (x113<(x114&(x115*x116)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x117 = INT32_MIN;
	volatile uint16_t x118 = 85U;
	static volatile uint64_t x119 = UINT64_MAX;
	volatile int32_t t20 = -392610692;

	t20 = (x117<(x118&(x119*x120)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x121 = INT8_MIN;
	int16_t x122 = 1;
	uint8_t x123 = 5U;
	int64_t x124 = -30139057681LL;
	volatile int32_t t21 = 104471;

	t21 = (x121<(x122&(x123*x124)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x129 = INT16_MAX;
	uint8_t x130 = 22U;
	volatile int32_t x131 = -1;
	volatile int8_t x132 = INT8_MIN;

	t22 = (x129<(x130&(x131*x132)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x133 = -13;
	volatile uint16_t x134 = 27U;
	int32_t x135 = 0;
	int16_t x136 = INT16_MIN;

	t23 = (x133<(x134&(x135*x136)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x141 = 1674;
	uint64_t x142 = 11823144181LLU;
	int16_t x143 = INT16_MIN;
	volatile uint64_t x144 = UINT64_MAX;
	int32_t t24 = -3;

	t24 = (x141<(x142&(x143*x144)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x157 = INT32_MIN;
	volatile uint8_t x158 = 9U;
	int8_t x159 = INT8_MAX;
	int16_t x160 = INT16_MIN;
	volatile int32_t t25 = 1682;

	t25 = (x157<(x158&(x159*x160)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x161 = INT8_MIN;
	int16_t x162 = -1;
	int32_t x163 = 0;
	int8_t x164 = INT8_MIN;
	volatile int32_t t26 = -1;

	t26 = (x161<(x162&(x163*x164)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x169 = 90U;
	uint32_t x170 = 2U;
	static volatile uint16_t x171 = UINT16_MAX;
	int16_t x172 = INT16_MAX;

	t27 = (x169<(x170&(x171*x172)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x185 = 241682691U;
	int32_t x186 = INT32_MIN;
	uint64_t x187 = 812027723638LLU;
	static int16_t x188 = -3770;
	volatile int32_t t28 = -3733846;

	t28 = (x185<(x186&(x187*x188)));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x192 = 4942;
	int32_t t29 = 944759816;

	t29 = (x189<(x190&(x191*x192)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x193 = UINT64_MAX;
	volatile int16_t x194 = -1;
	int16_t x195 = INT16_MIN;
	uint64_t x196 = 66564187711516104LLU;
	int32_t t30 = -933;

	t30 = (x193<(x194&(x195*x196)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x198 = -87000583;
	int16_t x199 = -1;

	t31 = (x197<(x198&(x199*x200)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x202 = -1;
	int16_t x203 = -1;
	int32_t t32 = -42560;

	t32 = (x201<(x202&(x203*x204)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x205 = 114845779U;
	int8_t x206 = -2;
	int8_t x207 = -15;
	uint8_t x208 = UINT8_MAX;

	t33 = (x205<(x206&(x207*x208)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x211 = INT16_MAX;
	uint64_t x212 = UINT64_MAX;
	int32_t t34 = 9;

	t34 = (x209<(x210&(x211*x212)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x213 = UINT64_MAX;
	static uint32_t x214 = 13881U;
	int32_t x215 = -1;
	volatile uint16_t x216 = UINT16_MAX;
	int32_t t35 = -2707365;

	t35 = (x213<(x214&(x215*x216)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x217 = INT8_MIN;
	static int16_t x219 = INT16_MIN;
	int16_t x220 = INT16_MAX;
	volatile int32_t t36 = 5397759;

	t36 = (x217<(x218&(x219*x220)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x221 = UINT8_MAX;
	int8_t x223 = INT8_MIN;
	int32_t t37 = 20984279;

	t37 = (x221<(x222&(x223*x224)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x225 = 221U;
	static int16_t x227 = INT16_MAX;
	uint32_t x228 = UINT32_MAX;
	int32_t t38 = -1;

	t38 = (x225<(x226&(x227*x228)));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x229 = -55843627268711LL;
	static int8_t x230 = 11;
	int8_t x231 = INT8_MAX;
	static uint64_t x232 = 3403LLU;
	static int32_t t39 = 962;

	t39 = (x229<(x230&(x231*x232)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x242 = -1;
	uint64_t x243 = 2088666189LLU;
	uint8_t x244 = UINT8_MAX;

	t40 = (x241<(x242&(x243*x244)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x245 = INT64_MIN;
	uint8_t x247 = UINT8_MAX;
	uint8_t x248 = 6U;
	int32_t t41 = 0;

	t41 = (x245<(x246&(x247*x248)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x254 = 13U;
	uint8_t x256 = UINT8_MAX;
	volatile int32_t t42 = -13333125;

	t42 = (x253<(x254&(x255*x256)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x258 = 0U;
	static int8_t x259 = INT8_MAX;
	static uint8_t x260 = 43U;
	int32_t t43 = 12;

	t43 = (x257<(x258&(x259*x260)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x261 = 2593689694604LL;
	static uint32_t x262 = UINT32_MAX;
	int8_t x263 = 1;
	int8_t x264 = INT8_MAX;

	t44 = (x261<(x262&(x263*x264)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x265 = INT16_MAX;
	int8_t x266 = INT8_MIN;
	int16_t x267 = -1;
	int64_t x268 = 71746935LL;
	static volatile int32_t t45 = 56986;

	t45 = (x265<(x266&(x267*x268)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x269 = 15;
	int64_t x272 = 459046091047LL;
	volatile int32_t t46 = -37182;

	t46 = (x269<(x270&(x271*x272)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x278 = 13U;
	volatile uint64_t x279 = 13013499LLU;
	int32_t x280 = -164641;
	volatile int32_t t47 = 85254563;

	t47 = (x277<(x278&(x279*x280)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x282 = -1;
	static int16_t x283 = -1;
	int32_t x284 = INT32_MAX;
	volatile int32_t t48 = 655504259;

	t48 = (x281<(x282&(x283*x284)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x289 = -120546961;
	volatile uint32_t x290 = 2972U;
	static int8_t x291 = INT8_MIN;
	int64_t x292 = 5576242223LL;
	int32_t t49 = 43012;

	t49 = (x289<(x290&(x291*x292)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x294 = -1;
	uint64_t x295 = 227035489LLU;
	volatile int32_t x296 = 1;
	int32_t t50 = 110693231;

	t50 = (x293<(x294&(x295*x296)));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x297 = -1LL;
	static int64_t x299 = 1368353154512LL;
	int16_t x300 = INT16_MAX;
	int32_t t51 = -4;

	t51 = (x297<(x298&(x299*x300)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x305 = 122;
	int16_t x306 = -1;
	int16_t x307 = -95;
	volatile uint32_t x308 = UINT32_MAX;

	t52 = (x305<(x306&(x307*x308)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x310 = 220U;
	uint64_t x311 = 24LLU;
	uint32_t x312 = 9790U;
	int32_t t53 = 1287;

	t53 = (x309<(x310&(x311*x312)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x313 = 592713183588240LLU;
	uint32_t x314 = 117189899U;
	int64_t x316 = 4264LL;
	int32_t t54 = 1;

	t54 = (x313<(x314&(x315*x316)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x317 = INT8_MIN;
	static uint16_t x319 = 2U;
	uint16_t x320 = 23973U;
	int32_t t55 = -122740592;

	t55 = (x317<(x318&(x319*x320)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x322 = 3251;
	uint16_t x323 = UINT16_MAX;
	int8_t x324 = INT8_MIN;
	int32_t t56 = 1;

	t56 = (x321<(x322&(x323*x324)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x325 = INT32_MIN;
	volatile int32_t x326 = 262613;
	int64_t x327 = INT64_MIN;
	uint64_t x328 = 433619406LLU;
	volatile int32_t t57 = -3;

	t57 = (x325<(x326&(x327*x328)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x333 = 10U;
	static int8_t x334 = -1;
	int8_t x335 = INT8_MAX;
	static uint64_t x336 = 800433839647237LLU;
	int32_t t58 = -1;

	t58 = (x333<(x334&(x335*x336)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x337 = 1U;
	static int32_t x338 = INT32_MIN;
	uint32_t x339 = 1U;
	int32_t t59 = 3899645;

	t59 = (x337<(x338&(x339*x340)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x341 = UINT8_MAX;
	int32_t x342 = INT32_MIN;
	int16_t x343 = INT16_MAX;
	uint16_t x344 = 30264U;

	t60 = (x341<(x342&(x343*x344)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x345 = 1;
	uint8_t x346 = 25U;
	int64_t x348 = -1LL;

	t61 = (x345<(x346&(x347*x348)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x349 = 2548706354421LL;
	int32_t x350 = -5933;
	int8_t x351 = 4;
	uint8_t x352 = UINT8_MAX;
	volatile int32_t t62 = 148;

	t62 = (x349<(x350&(x351*x352)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x358 = UINT64_MAX;
	uint64_t x360 = 749652661742LLU;
	static int32_t t63 = 840855;

	t63 = (x357<(x358&(x359*x360)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x362 = 6324;
	volatile int64_t x363 = -1LL;
	int32_t t64 = 3;

	t64 = (x361<(x362&(x363*x364)));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x366 = -1LL;
	volatile int16_t x367 = INT16_MAX;
	int16_t x368 = -3336;

	t65 = (x365<(x366&(x367*x368)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x369 = 160U;
	static int64_t x370 = INT64_MAX;
	int32_t x372 = 1980971;
	volatile int32_t t66 = 373259;

	t66 = (x369<(x370&(x371*x372)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x373 = -37988;
	static volatile int8_t x374 = INT8_MIN;
	uint32_t x376 = 1249428U;

	t67 = (x373<(x374&(x375*x376)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x377 = INT32_MAX;
	int32_t x378 = -1;
	int32_t x379 = -1;
	int32_t t68 = -1462;

	t68 = (x377<(x378&(x379*x380)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x385 = 123171479908LL;
	int32_t x386 = -1;
	int8_t x387 = INT8_MAX;
	static uint16_t x388 = 2178U;

	t69 = (x385<(x386&(x387*x388)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x389 = UINT32_MAX;
	static int16_t x390 = 4960;
	int64_t x391 = INT64_MIN;
	volatile uint64_t x392 = 7LLU;
	int32_t t70 = -64540618;

	t70 = (x389<(x390&(x391*x392)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x393 = UINT16_MAX;
	static int16_t x394 = 0;
	int8_t x395 = -1;
	int32_t x396 = -355201;
	volatile int32_t t71 = -31743;

	t71 = (x393<(x394&(x395*x396)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x397 = INT8_MAX;
	static uint32_t x398 = 3006005U;
	static uint8_t x399 = UINT8_MAX;
	int16_t x400 = INT16_MAX;
	int32_t t72 = -11956024;

	t72 = (x397<(x398&(x399*x400)));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x405 = UINT32_MAX;
	volatile uint8_t x406 = 124U;
	volatile uint16_t x407 = UINT16_MAX;
	uint8_t x408 = UINT8_MAX;
	volatile int32_t t73 = 195;

	t73 = (x405<(x406&(x407*x408)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x413 = INT8_MAX;
	static int8_t x414 = -1;
	static int32_t x416 = INT32_MIN;
	static int32_t t74 = -21405;

	t74 = (x413<(x414&(x415*x416)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x417 = 524459431LLU;
	int64_t x418 = -851376415589461LL;
	static uint16_t x419 = 207U;
	int32_t t75 = 29492;

	t75 = (x417<(x418&(x419*x420)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x421 = INT32_MIN;
	int8_t x422 = 2;
	volatile int16_t x423 = INT16_MIN;
	int32_t x424 = -1;
	static volatile int32_t t76 = -5746774;

	t76 = (x421<(x422&(x423*x424)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x425 = INT64_MAX;
	volatile uint64_t x426 = 30082318984420298LLU;
	int16_t x428 = INT16_MAX;
	int32_t t77 = -1054;

	t77 = (x425<(x426&(x427*x428)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x429 = INT32_MIN;
	int64_t x431 = -1842LL;
	int8_t x432 = -1;
	int32_t t78 = -818872;

	t78 = (x429<(x430&(x431*x432)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x433 = -1;
	int64_t x435 = 4496656800268273LL;
	volatile int32_t t79 = 429968;

	t79 = (x433<(x434&(x435*x436)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x437 = 1;
	volatile int16_t x438 = 130;
	uint8_t x439 = 4U;
	volatile int8_t x440 = -1;

	t80 = (x437<(x438&(x439*x440)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x450 = 0;
	int32_t t81 = 5201;

	t81 = (x449<(x450&(x451*x452)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x453 = INT64_MIN;
	int8_t x454 = 2;
	volatile uint16_t x455 = UINT16_MAX;
	volatile int32_t t82 = -135376;

	t82 = (x453<(x454&(x455*x456)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x457 = INT16_MIN;
	static int8_t x458 = -1;
	int8_t x459 = -1;
	uint8_t x460 = 12U;
	volatile int32_t t83 = 85353909;

	t83 = (x457<(x458&(x459*x460)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x462 = 1874U;
	volatile int16_t x463 = 2227;
	uint16_t x464 = UINT16_MAX;
	int32_t t84 = 11120;

	t84 = (x461<(x462&(x463*x464)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x469 = UINT8_MAX;
	int64_t x470 = 37956958LL;
	int32_t x471 = INT32_MIN;
	uint64_t x472 = 144329244110238LLU;
	volatile int32_t t85 = -15;

	t85 = (x469<(x470&(x471*x472)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x473 = INT64_MIN;
	int8_t x474 = -4;
	volatile int8_t x475 = -1;
	volatile uint8_t x476 = 30U;
	int32_t t86 = -535787887;

	t86 = (x473<(x474&(x475*x476)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x477 = -10789;
	volatile int64_t x478 = -1LL;
	volatile int32_t x479 = -4836051;
	uint64_t x480 = 261205972517019LLU;
	static volatile int32_t t87 = 27;

	t87 = (x477<(x478&(x479*x480)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x481 = UINT16_MAX;
	static int8_t x483 = INT8_MIN;
	volatile int32_t t88 = 25488531;

	t88 = (x481<(x482&(x483*x484)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x485 = 64U;
	int16_t x486 = INT16_MIN;
	uint8_t x487 = 15U;
	uint8_t x488 = 7U;
	volatile int32_t t89 = 70498;

	t89 = (x485<(x486&(x487*x488)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x493 = 587865170888548329LLU;
	volatile int64_t x494 = 507959901LL;
	int64_t x495 = INT64_MIN;
	uint8_t x496 = 1U;
	volatile int32_t t90 = -826152863;

	t90 = (x493<(x494&(x495*x496)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x497 = -873;
	static volatile int16_t x498 = INT16_MIN;
	static uint32_t x499 = 14U;
	volatile int32_t t91 = 7520172;

	t91 = (x497<(x498&(x499*x500)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x505 = INT64_MIN;
	uint8_t x506 = UINT8_MAX;
	int32_t x507 = -1;
	volatile int32_t t92 = -15973;

	t92 = (x505<(x506&(x507*x508)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x509 = 26LLU;
	int32_t x510 = INT32_MIN;
	static volatile int8_t x511 = INT8_MIN;
	int8_t x512 = INT8_MAX;
	volatile int32_t t93 = 57035;

	t93 = (x509<(x510&(x511*x512)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x517 = 120156964U;
	int16_t x518 = -1;
	volatile int32_t t94 = -1942120;

	t94 = (x517<(x518&(x519*x520)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x525 = INT8_MIN;
	int32_t x526 = INT32_MIN;
	int16_t x527 = -1;
	int16_t x528 = INT16_MIN;

	t95 = (x525<(x526&(x527*x528)));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x529 = 0;
	volatile uint32_t x530 = 31435U;
	volatile uint32_t x531 = 191754U;
	uint32_t x532 = 1402363U;
	static volatile int32_t t96 = 136740353;

	t96 = (x529<(x530&(x531*x532)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x533 = INT32_MAX;
	static int64_t x534 = INT64_MIN;
	static int16_t x535 = INT16_MIN;
	int64_t x536 = -1147221LL;
	volatile int32_t t97 = 59;

	t97 = (x533<(x534&(x535*x536)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x541 = 4U;
	static int64_t x542 = INT64_MAX;
	int8_t x543 = INT8_MAX;
	volatile int8_t x544 = INT8_MAX;
	volatile int32_t t98 = -2;

	t98 = (x541<(x542&(x543*x544)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x545 = 14;
	uint16_t x546 = UINT16_MAX;
	uint64_t x547 = 33948904266LLU;
	int64_t x548 = INT64_MIN;
	int32_t t99 = 522955635;

	t99 = (x545<(x546&(x547*x548)));

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

