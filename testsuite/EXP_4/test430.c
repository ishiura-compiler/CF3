#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 1337;
volatile int32_t t2 = 1;
uint64_t x26 = 4310911411890762LLU;
static int64_t x34 = INT64_MAX;
int8_t x36 = -4;
volatile int32_t t7 = 1;
static int32_t x84 = -1;
static int8_t x88 = INT8_MIN;
uint64_t x92 = UINT64_MAX;
int8_t x99 = INT8_MIN;
int16_t x103 = -1;
int64_t x106 = 2LL;
static int64_t x107 = -1LL;
static volatile int32_t t19 = -15208;
uint64_t x123 = 712034979444LLU;
static uint64_t x138 = UINT64_MAX;
int8_t x148 = INT8_MIN;
int8_t x156 = INT8_MIN;
uint32_t x165 = 5344789U;
int32_t x166 = INT32_MIN;
uint32_t t28 = 20876U;
uint16_t x169 = UINT16_MAX;
uint32_t x172 = UINT32_MAX;
static volatile int64_t x175 = -1LL;
int64_t x200 = -400667876109441509LL;
volatile int32_t t36 = -3779419;
uint16_t x213 = 0U;
static int16_t x218 = INT16_MAX;
uint8_t x220 = UINT8_MAX;
volatile int16_t x224 = -19;
int64_t x225 = -1043575372LL;
uint8_t x232 = UINT8_MAX;
uint16_t x236 = 35U;
uint32_t x242 = UINT32_MAX;
int16_t x248 = INT16_MIN;
int64_t x251 = 24LL;
uint64_t x253 = 67321814160LLU;
int64_t x261 = INT64_MIN;
volatile int64_t t47 = INT64_MIN;
int64_t x265 = -2461675264LL;
volatile int16_t x268 = -1;
volatile int16_t x274 = -336;
volatile uint64_t x275 = 274515050012LLU;
volatile int64_t x276 = INT64_MIN;
static int8_t x285 = -63;
volatile int32_t t52 = 21;
volatile uint8_t x298 = 1U;
uint64_t x315 = UINT64_MAX;
volatile int32_t t58 = 215;
static int64_t x337 = 26350284136357078LL;
uint64_t x339 = 4180906LLU;
volatile int16_t x340 = INT16_MAX;
volatile uint32_t x352 = UINT32_MAX;
static volatile uint32_t x353 = UINT32_MAX;
uint8_t x359 = 3U;
int64_t x360 = -1LL;
static int8_t x361 = 1;
static volatile int32_t x365 = -1;
int16_t x369 = -819;
int16_t x371 = INT16_MIN;
int16_t x375 = -542;
uint16_t x382 = UINT16_MAX;
volatile uint16_t x383 = 469U;
int8_t x388 = -1;
int16_t x396 = INT16_MIN;
int32_t t73 = 974106;
int16_t x399 = INT16_MIN;
static uint16_t x400 = 329U;
volatile uint32_t x403 = 12U;
int64_t x416 = 102525434804LL;
uint16_t x419 = 1U;
volatile int32_t t79 = 4601;
int8_t x432 = 30;
int8_t x436 = -4;
uint64_t x437 = UINT64_MAX;
int8_t x455 = INT8_MIN;
int16_t x460 = INT16_MAX;
static volatile uint16_t x464 = 3U;
int8_t x465 = -1;
static int8_t x472 = -21;
static volatile uint16_t x476 = 2643U;
uint32_t x477 = UINT32_MAX;
static volatile int64_t x479 = -1LL;
uint16_t x486 = 90U;
volatile int8_t x487 = 1;
uint64_t x488 = 437583312429LLU;
uint32_t x499 = 0U;
volatile int32_t t97 = 237294;
volatile int64_t x507 = -1LL;
int64_t t99 = -213722LL;


void f0(void) {
	int8_t x1 = 21;
	int64_t x2 = 1070393369LL;
	uint8_t x3 = 15U;
	static volatile int32_t x4 = -1;

	t0 = (x1+(x2==(x3*x4)));

	if (t0 != 21) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int16_t x6 = -759;
	int8_t x7 = -1;
	static int16_t x8 = -1;
	uint32_t t1 = UINT32_MAX;

	t1 = (x5+(x6==(x7*x8)));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x21 = 3;
	int32_t x22 = -26;
	int16_t x23 = -1;
	volatile uint8_t x24 = UINT8_MAX;

	t2 = (x21+(x22==(x23*x24)));

	if (t2 != 3) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = INT8_MIN;
	int64_t x27 = -13613700413414LL;
	static int8_t x28 = -1;
	volatile int32_t t3 = -3386;

	t3 = (x25+(x26==(x27*x28)));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x33 = 2;
	uint16_t x35 = 27461U;
	volatile int32_t t4 = -4933;

	t4 = (x33+(x34==(x35*x36)));

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x45 = INT32_MAX;
	int64_t x46 = 1569238664307LL;
	uint8_t x47 = 0U;
	static int32_t x48 = INT32_MAX;
	volatile int32_t t5 = INT32_MAX;

	t5 = (x45+(x46==(x47*x48)));

	if (t5 != INT32_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x53 = 2U;
	static int8_t x54 = INT8_MIN;
	uint64_t x55 = UINT64_MAX;
	int32_t x56 = -1;
	static volatile int32_t t6 = 2;

	t6 = (x53+(x54==(x55*x56)));

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x61 = 0U;
	int32_t x62 = INT32_MIN;
	int16_t x63 = 3917;
	static uint32_t x64 = 44436U;

	t7 = (x61+(x62==(x63*x64)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x65 = INT32_MIN;
	int16_t x66 = INT16_MIN;
	volatile int16_t x67 = -30;
	int8_t x68 = -7;
	volatile int32_t t8 = INT32_MIN;

	t8 = (x65+(x66==(x67*x68)));

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x69 = 7;
	uint64_t x70 = 89LLU;
	int8_t x71 = 27;
	int16_t x72 = -28;
	int32_t t9 = 0;

	t9 = (x69+(x70==(x71*x72)));

	if (t9 != 7) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x77 = 354LL;
	uint64_t x78 = 107089882LLU;
	volatile int16_t x79 = INT16_MIN;
	static int8_t x80 = 0;
	int64_t t10 = -7006LL;

	t10 = (x77+(x78==(x79*x80)));

	if (t10 != 354LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x81 = INT32_MIN;
	static int64_t x82 = -5976317590776LL;
	static volatile int64_t x83 = INT64_MAX;
	volatile int32_t t11 = INT32_MIN;

	t11 = (x81+(x82==(x83*x84)));

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x85 = INT8_MIN;
	int8_t x86 = 0;
	static volatile int16_t x87 = INT16_MAX;
	volatile int32_t t12 = 0;

	t12 = (x85+(x86==(x87*x88)));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x89 = 8402U;
	volatile int64_t x90 = -1LL;
	int64_t x91 = INT64_MIN;
	uint32_t t13 = 57U;

	t13 = (x89+(x90==(x91*x92)));

	if (t13 != 8402U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x93 = 1;
	int8_t x94 = -1;
	int8_t x95 = INT8_MIN;
	int8_t x96 = INT8_MIN;
	volatile int32_t t14 = 1806162;

	t14 = (x93+(x94==(x95*x96)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x97 = INT16_MAX;
	int16_t x98 = INT16_MAX;
	volatile int32_t x100 = -1;
	volatile int32_t t15 = 200797;

	t15 = (x97+(x98==(x99*x100)));

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x101 = 24;
	volatile int8_t x102 = -1;
	int64_t x104 = -1LL;
	volatile int32_t t16 = -368223734;

	t16 = (x101+(x102==(x103*x104)));

	if (t16 != 24) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x105 = 2889U;
	uint16_t x108 = UINT16_MAX;
	volatile int32_t t17 = -5588250;

	t17 = (x105+(x106==(x107*x108)));

	if (t17 != 2889) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x113 = UINT32_MAX;
	uint16_t x114 = 6U;
	uint32_t x115 = 1674734U;
	volatile int8_t x116 = INT8_MAX;
	uint32_t t18 = UINT32_MAX;

	t18 = (x113+(x114==(x115*x116)));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x117 = UINT8_MAX;
	int32_t x118 = -1;
	uint64_t x119 = 31522993476524206LLU;
	uint16_t x120 = 27719U;

	t19 = (x117+(x118==(x119*x120)));

	if (t19 != 255) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x121 = UINT8_MAX;
	static int64_t x122 = INT64_MIN;
	static int8_t x124 = -61;
	int32_t t20 = 440005;

	t20 = (x121+(x122==(x123*x124)));

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x125 = INT32_MIN;
	int8_t x126 = 25;
	volatile uint8_t x127 = 0U;
	uint64_t x128 = 0LLU;
	volatile int32_t t21 = INT32_MIN;

	t21 = (x125+(x126==(x127*x128)));

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x137 = -1;
	int16_t x139 = INT16_MIN;
	static int64_t x140 = -4LL;
	volatile int32_t t22 = -145;

	t22 = (x137+(x138==(x139*x140)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x145 = UINT64_MAX;
	static int16_t x146 = -1;
	uint16_t x147 = 34U;
	volatile uint64_t t23 = UINT64_MAX;

	t23 = (x145+(x146==(x147*x148)));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x149 = 14LLU;
	int32_t x150 = INT32_MAX;
	int32_t x151 = -1;
	int8_t x152 = -48;
	volatile uint64_t t24 = 3727823122780329LLU;

	t24 = (x149+(x150==(x151*x152)));

	if (t24 != 14LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int8_t x153 = INT8_MIN;
	uint64_t x154 = 1LLU;
	int8_t x155 = INT8_MIN;
	static volatile int32_t t25 = -10468106;

	t25 = (x153+(x154==(x155*x156)));

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x157 = INT8_MIN;
	uint64_t x158 = 255005787326013101LLU;
	int16_t x159 = INT16_MIN;
	int64_t x160 = -1LL;
	int32_t t26 = -114111;

	t26 = (x157+(x158==(x159*x160)));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x161 = -1;
	static volatile int16_t x162 = INT16_MIN;
	int16_t x163 = INT16_MIN;
	static volatile uint64_t x164 = 26058791178271157LLU;
	int32_t t27 = 2073261;

	t27 = (x161+(x162==(x163*x164)));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x167 = INT16_MAX;
	int16_t x168 = -182;

	t28 = (x165+(x166==(x167*x168)));

	if (t28 != 5344789U) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x170 = INT32_MIN;
	uint32_t x171 = 2013U;
	static int32_t t29 = -60939120;

	t29 = (x169+(x170==(x171*x172)));

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x173 = 0;
	static volatile int32_t x174 = -1937232;
	int8_t x176 = 0;
	volatile int32_t t30 = -333520;

	t30 = (x173+(x174==(x175*x176)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x177 = INT64_MAX;
	int32_t x178 = INT32_MIN;
	int16_t x179 = -1;
	volatile uint64_t x180 = 7420661LLU;
	int64_t t31 = INT64_MAX;

	t31 = (x177+(x178==(x179*x180)));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x181 = UINT8_MAX;
	int64_t x182 = INT64_MAX;
	volatile int16_t x183 = 61;
	int16_t x184 = 153;
	volatile int32_t t32 = 327621886;

	t32 = (x181+(x182==(x183*x184)));

	if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x193 = UINT64_MAX;
	uint8_t x194 = 9U;
	uint32_t x195 = 150U;
	int8_t x196 = 0;
	uint64_t t33 = UINT64_MAX;

	t33 = (x193+(x194==(x195*x196)));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x197 = UINT64_MAX;
	uint32_t x198 = 26442U;
	static uint64_t x199 = 1594833LLU;
	uint64_t t34 = UINT64_MAX;

	t34 = (x197+(x198==(x199*x200)));

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x201 = -1;
	int8_t x202 = INT8_MIN;
	int16_t x203 = 6817;
	int16_t x204 = 2559;
	static volatile int32_t t35 = -338404;

	t35 = (x201+(x202==(x203*x204)));

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x205 = -35;
	int64_t x206 = -249471160455LL;
	static int32_t x207 = -1;
	int8_t x208 = INT8_MAX;

	t36 = (x205+(x206==(x207*x208)));

	if (t36 != -35) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x214 = UINT8_MAX;
	volatile int32_t x215 = -1;
	int32_t x216 = -1;
	static int32_t t37 = -1;

	t37 = (x213+(x214==(x215*x216)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x217 = 2U;
	int8_t x219 = INT8_MIN;
	volatile uint32_t t38 = 1U;

	t38 = (x217+(x218==(x219*x220)));

	if (t38 != 2U) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x221 = -1LL;
	uint16_t x222 = UINT16_MAX;
	static uint16_t x223 = UINT16_MAX;
	static volatile int64_t t39 = -13879623919241LL;

	t39 = (x221+(x222==(x223*x224)));

	if (t39 != -1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x226 = INT64_MIN;
	int8_t x227 = INT8_MAX;
	uint8_t x228 = UINT8_MAX;
	int64_t t40 = 0LL;

	t40 = (x225+(x226==(x227*x228)));

	if (t40 != -1043575372LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x229 = UINT32_MAX;
	volatile int16_t x230 = -12234;
	int16_t x231 = INT16_MAX;
	uint32_t t41 = UINT32_MAX;

	t41 = (x229+(x230==(x231*x232)));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x233 = INT8_MIN;
	int64_t x234 = INT64_MIN;
	uint16_t x235 = 1153U;
	static volatile int32_t t42 = -1356;

	t42 = (x233+(x234==(x235*x236)));

	if (t42 != -128) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x241 = -1;
	int32_t x243 = 2;
	int32_t x244 = 7548784;
	int32_t t43 = 2526;

	t43 = (x241+(x242==(x243*x244)));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x245 = 866U;
	static uint32_t x246 = 359U;
	uint16_t x247 = 1448U;
	volatile uint32_t t44 = 2947U;

	t44 = (x245+(x246==(x247*x248)));

	if (t44 != 866U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x249 = INT32_MAX;
	uint32_t x250 = 29618174U;
	uint8_t x252 = 2U;
	volatile int32_t t45 = INT32_MAX;

	t45 = (x249+(x250==(x251*x252)));

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x254 = 2;
	static volatile int32_t x255 = 8133;
	uint64_t x256 = UINT64_MAX;
	uint64_t t46 = 132188LLU;

	t46 = (x253+(x254==(x255*x256)));

	if (t46 != 67321814160LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x262 = -1LL;
	volatile int8_t x263 = -1;
	uint64_t x264 = UINT64_MAX;

	t47 = (x261+(x262==(x263*x264)));

	if (t47 != INT64_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x266 = -1LL;
	int64_t x267 = INT64_MAX;
	static volatile int64_t t48 = -108103LL;

	t48 = (x265+(x266==(x267*x268)));

	if (t48 != -2461675264LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x273 = 6831718960LLU;
	static volatile uint64_t t49 = 161132LLU;

	t49 = (x273+(x274==(x275*x276)));

	if (t49 != 6831718960LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x281 = -1;
	uint32_t x282 = UINT32_MAX;
	int32_t x283 = -1;
	int64_t x284 = 6LL;
	static int32_t t50 = -940;

	t50 = (x281+(x282==(x283*x284)));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x286 = INT8_MAX;
	int8_t x287 = INT8_MIN;
	int8_t x288 = 0;
	volatile int32_t t51 = -70811;

	t51 = (x285+(x286==(x287*x288)));

	if (t51 != -63) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x293 = -1;
	static int64_t x294 = INT64_MAX;
	int16_t x295 = INT16_MIN;
	static uint16_t x296 = 394U;

	t52 = (x293+(x294==(x295*x296)));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x297 = INT64_MIN;
	int8_t x299 = INT8_MAX;
	uint16_t x300 = 33U;
	volatile int64_t t53 = INT64_MIN;

	t53 = (x297+(x298==(x299*x300)));

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x301 = 0;
	int16_t x302 = -1;
	volatile int8_t x303 = -26;
	int64_t x304 = -121206240110189013LL;
	int32_t t54 = -23192;

	t54 = (x301+(x302==(x303*x304)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x305 = 683U;
	int16_t x306 = INT16_MAX;
	uint64_t x307 = 168082100969100LLU;
	volatile int32_t x308 = -1;
	int32_t t55 = -12949;

	t55 = (x305+(x306==(x307*x308)));

	if (t55 != 683) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x309 = -1;
	volatile int64_t x310 = INT64_MIN;
	static uint32_t x311 = UINT32_MAX;
	uint64_t x312 = 184965041LLU;
	static volatile int32_t t56 = 6;

	t56 = (x309+(x310==(x311*x312)));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x313 = UINT64_MAX;
	uint16_t x314 = 205U;
	int16_t x316 = INT16_MIN;
	uint64_t t57 = UINT64_MAX;

	t57 = (x313+(x314==(x315*x316)));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x321 = -1;
	uint16_t x322 = 307U;
	static uint32_t x323 = UINT32_MAX;
	int16_t x324 = -2;

	t58 = (x321+(x322==(x323*x324)));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x325 = 1U;
	int64_t x326 = -1LL;
	int64_t x327 = 4LL;
	uint64_t x328 = UINT64_MAX;
	static int32_t t59 = -83;

	t59 = (x325+(x326==(x327*x328)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint64_t x338 = 182976102LLU;
	int64_t t60 = -109479LL;

	t60 = (x337+(x338==(x339*x340)));

	if (t60 != 26350284136357078LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x345 = -1LL;
	static int32_t x346 = -175183;
	static int32_t x347 = -117377;
	int8_t x348 = INT8_MIN;
	volatile int64_t t61 = 7388659197LL;

	t61 = (x345+(x346==(x347*x348)));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x349 = UINT8_MAX;
	int16_t x350 = -12894;
	uint32_t x351 = 99383454U;
	volatile int32_t t62 = -367;

	t62 = (x349+(x350==(x351*x352)));

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x354 = 256LLU;
	volatile uint32_t x355 = 655371893U;
	int8_t x356 = -1;
	uint32_t t63 = UINT32_MAX;

	t63 = (x353+(x354==(x355*x356)));

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x357 = UINT8_MAX;
	int8_t x358 = -1;
	static volatile int32_t t64 = 6932365;

	t64 = (x357+(x358==(x359*x360)));

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x362 = 48;
	uint8_t x363 = 1U;
	volatile int32_t x364 = -1;
	static volatile int32_t t65 = -26;

	t65 = (x361+(x362==(x363*x364)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x366 = -1LL;
	static volatile int32_t x367 = -1;
	int64_t x368 = 307LL;
	volatile int32_t t66 = -94263003;

	t66 = (x365+(x366==(x367*x368)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x370 = INT64_MAX;
	static volatile int8_t x372 = -1;
	static int32_t t67 = 408;

	t67 = (x369+(x370==(x371*x372)));

	if (t67 != -819) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x373 = 44U;
	static uint32_t x374 = 5458U;
	int32_t x376 = -3081631;
	static uint32_t t68 = 374U;

	t68 = (x373+(x374==(x375*x376)));

	if (t68 != 44U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x377 = 53;
	static uint64_t x378 = 2070067LLU;
	int8_t x379 = INT8_MIN;
	static volatile int16_t x380 = INT16_MIN;
	volatile int32_t t69 = 1;

	t69 = (x377+(x378==(x379*x380)));

	if (t69 != 53) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x381 = INT64_MIN;
	static int32_t x384 = 713;
	int64_t t70 = INT64_MIN;

	t70 = (x381+(x382==(x383*x384)));

	if (t70 != INT64_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x385 = 46U;
	uint64_t x386 = 244647LLU;
	int8_t x387 = -1;
	int32_t t71 = -18855939;

	t71 = (x385+(x386==(x387*x388)));

	if (t71 != 46) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x389 = UINT32_MAX;
	uint8_t x390 = 59U;
	int64_t x391 = INT64_MIN;
	volatile uint8_t x392 = 0U;
	volatile uint32_t t72 = UINT32_MAX;

	t72 = (x389+(x390==(x391*x392)));

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x393 = UINT8_MAX;
	static int64_t x394 = 9204818538809921LL;
	static int8_t x395 = INT8_MIN;

	t73 = (x393+(x394==(x395*x396)));

	if (t73 != 255) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x397 = 1;
	int64_t x398 = INT64_MAX;
	static int32_t t74 = -450936552;

	t74 = (x397+(x398==(x399*x400)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x401 = INT64_MIN;
	int32_t x402 = -10;
	volatile int64_t x404 = 15964258564LL;
	static volatile int64_t t75 = INT64_MIN;

	t75 = (x401+(x402==(x403*x404)));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x405 = -3352829765LL;
	static uint64_t x406 = 5363015420283235LLU;
	int16_t x407 = INT16_MIN;
	volatile int64_t x408 = -29047LL;
	volatile int64_t t76 = 0LL;

	t76 = (x405+(x406==(x407*x408)));

	if (t76 != -3352829765LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x409 = -414996666615616599LL;
	int32_t x410 = -1;
	volatile int32_t x411 = -1;
	int8_t x412 = -6;
	static int64_t t77 = -1369LL;

	t77 = (x409+(x410==(x411*x412)));

	if (t77 != -414996666615616599LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x413 = INT32_MAX;
	int8_t x414 = 0;
	volatile int64_t x415 = 1LL;
	volatile int32_t t78 = INT32_MAX;

	t78 = (x413+(x414==(x415*x416)));

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x417 = UINT16_MAX;
	static int8_t x418 = INT8_MIN;
	static int32_t x420 = INT32_MIN;

	t79 = (x417+(x418==(x419*x420)));

	if (t79 != 65535) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x421 = 1U;
	static int8_t x422 = -22;
	uint32_t x423 = 42558817U;
	static int8_t x424 = INT8_MAX;
	int32_t t80 = 3931375;

	t80 = (x421+(x422==(x423*x424)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x425 = INT32_MIN;
	int32_t x426 = INT32_MIN;
	volatile uint16_t x427 = 1U;
	int16_t x428 = INT16_MAX;
	static int32_t t81 = INT32_MIN;

	t81 = (x425+(x426==(x427*x428)));

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x429 = -1;
	int32_t x430 = INT32_MAX;
	int32_t x431 = -1;
	int32_t t82 = -569;

	t82 = (x429+(x430==(x431*x432)));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x433 = INT16_MIN;
	uint32_t x434 = 23U;
	static int8_t x435 = -1;
	volatile int32_t t83 = 845;

	t83 = (x433+(x434==(x435*x436)));

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x438 = -1;
	uint16_t x439 = 327U;
	uint16_t x440 = 17107U;
	static volatile uint64_t t84 = UINT64_MAX;

	t84 = (x437+(x438==(x439*x440)));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x445 = 1052093718613009251LLU;
	static int32_t x446 = INT32_MIN;
	static volatile uint64_t x447 = 6818136LLU;
	int32_t x448 = 10972;
	volatile uint64_t t85 = 1604259LLU;

	t85 = (x445+(x446==(x447*x448)));

	if (t85 != 1052093718613009251LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x449 = -9872;
	volatile int64_t x450 = -1LL;
	int8_t x451 = -1;
	uint8_t x452 = 21U;
	volatile int32_t t86 = -1;

	t86 = (x449+(x450==(x451*x452)));

	if (t86 != -9872) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x453 = INT16_MIN;
	int8_t x454 = INT8_MIN;
	uint8_t x456 = 32U;
	int32_t t87 = 8743;

	t87 = (x453+(x454==(x455*x456)));

	if (t87 != -32768) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x457 = INT16_MAX;
	uint32_t x458 = 679242U;
	uint16_t x459 = 4U;
	volatile int32_t t88 = -131972;

	t88 = (x457+(x458==(x459*x460)));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x461 = INT64_MIN;
	uint8_t x462 = 0U;
	uint64_t x463 = UINT64_MAX;
	volatile int64_t t89 = INT64_MIN;

	t89 = (x461+(x462==(x463*x464)));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x466 = 26U;
	volatile int8_t x467 = 1;
	uint32_t x468 = UINT32_MAX;
	volatile int32_t t90 = 450988126;

	t90 = (x465+(x466==(x467*x468)));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x469 = INT8_MIN;
	static volatile int16_t x470 = INT16_MIN;
	volatile int8_t x471 = -58;
	static int32_t t91 = 109757;

	t91 = (x469+(x470==(x471*x472)));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x473 = INT16_MAX;
	int16_t x474 = INT16_MIN;
	uint32_t x475 = 151660U;
	int32_t t92 = 8478290;

	t92 = (x473+(x474==(x475*x476)));

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x478 = INT64_MIN;
	int16_t x480 = -37;
	volatile uint32_t t93 = UINT32_MAX;

	t93 = (x477+(x478==(x479*x480)));

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x485 = -7674458982LL;
	int64_t t94 = 477665854229309LL;

	t94 = (x485+(x486==(x487*x488)));

	if (t94 != -7674458982LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x493 = 3545792U;
	uint32_t x494 = 1389U;
	static uint8_t x495 = UINT8_MAX;
	int16_t x496 = -1;
	uint32_t t95 = 0U;

	t95 = (x493+(x494==(x495*x496)));

	if (t95 != 3545792U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x497 = INT8_MAX;
	int16_t x498 = INT16_MAX;
	int16_t x500 = -13;
	int32_t t96 = -1713;

	t96 = (x497+(x498==(x499*x500)));

	if (t96 != 127) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x501 = INT8_MIN;
	int32_t x502 = -1;
	uint8_t x503 = UINT8_MAX;
	uint16_t x504 = UINT16_MAX;

	t97 = (x501+(x502==(x503*x504)));

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x505 = INT32_MAX;
	int32_t x506 = 132;
	volatile int16_t x508 = INT16_MIN;
	int32_t t98 = INT32_MAX;

	t98 = (x505+(x506==(x507*x508)));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x509 = -1LL;
	int32_t x510 = INT32_MIN;
	int32_t x511 = 8108;
	int8_t x512 = INT8_MAX;

	t99 = (x509+(x510==(x511*x512)));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

