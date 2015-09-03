#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = 0;
uint32_t x3 = 8564909U;
static volatile int32_t t0 = 13;
int32_t x5 = INT32_MIN;
volatile int64_t x17 = INT64_MIN;
static volatile uint16_t x18 = 1U;
uint16_t x25 = UINT16_MAX;
uint32_t x46 = 5501U;
int32_t x47 = 2786348;
int16_t x50 = INT16_MIN;
volatile int32_t x60 = INT32_MIN;
volatile uint8_t x70 = UINT8_MAX;
uint64_t x75 = UINT64_MAX;
int32_t t14 = -25595;
int16_t x84 = -1;
int64_t x87 = 4678777463540LL;
static int8_t x91 = -1;
int8_t x93 = INT8_MIN;
int8_t x98 = -4;
uint16_t x126 = 0U;
uint16_t x138 = 206U;
int16_t x145 = INT16_MAX;
int32_t x155 = INT32_MAX;
int64_t x168 = 4688763LL;
int32_t t32 = -150;
int64_t x191 = -1LL;
int64_t x198 = INT64_MIN;
int32_t x208 = 349712866;
uint64_t x209 = 52081LLU;
static uint16_t x210 = UINT16_MAX;
volatile uint16_t x213 = UINT16_MAX;
volatile int16_t x214 = -1;
volatile int64_t x217 = -1LL;
volatile int16_t x233 = INT16_MAX;
static int64_t x234 = -1LL;
uint8_t x236 = 14U;
static volatile int32_t t49 = 103868934;
static uint32_t x250 = UINT32_MAX;
static int8_t x266 = 27;
uint8_t x267 = 25U;
volatile int32_t t54 = -13402908;
uint16_t x276 = 38U;
uint8_t x281 = 7U;
volatile uint16_t x283 = 1577U;
uint16_t x290 = 2980U;
int16_t x291 = INT16_MIN;
int32_t t60 = 1;
int64_t x300 = 72576116258LL;
static int32_t x301 = -18421713;
int8_t x303 = INT8_MIN;
static int32_t t65 = -442;
static uint64_t x313 = UINT64_MAX;
volatile int8_t x314 = -1;
static int64_t x319 = INT64_MIN;
volatile int32_t t67 = -105614;
int16_t x331 = INT16_MAX;
int16_t x336 = 18;
static int32_t x337 = -1027461;
volatile int64_t x343 = 27LL;
volatile int32_t t72 = 1390973;
int16_t x351 = INT16_MIN;
uint64_t x361 = 6LLU;
int64_t x368 = INT64_MIN;
static int32_t t78 = 764739;
int16_t x373 = -699;
uint32_t x374 = UINT32_MAX;
uint16_t x380 = 1U;
uint8_t x381 = UINT8_MAX;
static int32_t t82 = -779355;
int32_t x386 = INT32_MIN;
uint64_t x390 = UINT64_MAX;
int16_t x393 = INT16_MIN;
int8_t x401 = -1;
static int32_t x404 = -1;
int32_t t87 = 38354;
uint16_t x418 = 1715U;
int16_t x424 = 190;
uint16_t x428 = 26854U;
volatile uint8_t x445 = 19U;
int16_t x450 = INT16_MIN;
uint8_t x456 = UINT8_MAX;
volatile int32_t t96 = -5;
uint64_t x459 = 570234156151509692LLU;
static volatile uint8_t x468 = UINT8_MAX;


void f0(void) {
	static volatile int32_t x1 = 70;
	static int8_t x4 = -1;

	t0 = ((x1|x2)<=(x3+x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x6 = 908U;
	int8_t x7 = -1;
	volatile uint8_t x8 = UINT8_MAX;
	int32_t t1 = -5957629;

	t1 = ((x5|x6)<=(x7+x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x9 = 17U;
	int16_t x10 = 5249;
	int16_t x11 = 127;
	static int8_t x12 = 3;
	static volatile int32_t t2 = 73693606;

	t2 = ((x9|x10)<=(x11+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x19 = 719U;
	int8_t x20 = INT8_MIN;
	int32_t t3 = -938;

	t3 = ((x17|x18)<=(x19+x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = UINT8_MAX;
	int8_t x22 = 0;
	uint64_t x23 = UINT64_MAX;
	uint16_t x24 = 3U;
	volatile int32_t t4 = 23958183;

	t4 = ((x21|x22)<=(x23+x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x26 = UINT64_MAX;
	static int64_t x27 = 1739013944LL;
	volatile int16_t x28 = INT16_MAX;
	volatile int32_t t5 = 0;

	t5 = ((x25|x26)<=(x27+x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = 837;
	volatile int16_t x30 = -63;
	int16_t x31 = -1;
	volatile int16_t x32 = INT16_MAX;
	volatile int32_t t6 = 119761;

	t6 = ((x29|x30)<=(x31+x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = INT64_MIN;
	static int32_t x38 = 25;
	static uint16_t x39 = 1976U;
	static volatile int32_t x40 = 1445;
	int32_t t7 = -995355122;

	t7 = ((x37|x38)<=(x39+x40));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x45 = INT8_MAX;
	int8_t x48 = INT8_MIN;
	int32_t t8 = -28587;

	t8 = ((x45|x46)<=(x47+x48));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x49 = INT64_MIN;
	uint8_t x51 = 5U;
	static int8_t x52 = -1;
	static int32_t t9 = -383044;

	t9 = ((x49|x50)<=(x51+x52));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x53 = 826U;
	volatile uint32_t x54 = UINT32_MAX;
	uint64_t x55 = UINT64_MAX;
	volatile int16_t x56 = INT16_MAX;
	static int32_t t10 = -261;

	t10 = ((x53|x54)<=(x55+x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = INT32_MIN;
	int8_t x58 = INT8_MAX;
	uint8_t x59 = UINT8_MAX;
	volatile int32_t t11 = -3757221;

	t11 = ((x57|x58)<=(x59+x60));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = INT8_MAX;
	uint32_t x62 = 232079U;
	static int32_t x63 = 6;
	volatile int8_t x64 = -1;
	volatile int32_t t12 = -1538889;

	t12 = ((x61|x62)<=(x63+x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x69 = -1;
	int16_t x71 = 0;
	volatile int32_t x72 = INT32_MIN;
	volatile int32_t t13 = 27711533;

	t13 = ((x69|x70)<=(x71+x72));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x73 = 11985371;
	int64_t x74 = -1LL;
	static uint8_t x76 = 0U;

	t14 = ((x73|x74)<=(x75+x76));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x77 = 31U;
	int32_t x78 = INT32_MAX;
	static int8_t x79 = INT8_MAX;
	int16_t x80 = 6043;
	int32_t t15 = 2;

	t15 = ((x77|x78)<=(x79+x80));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x81 = -1;
	static int16_t x82 = -1;
	volatile int64_t x83 = -1LL;
	static volatile int32_t t16 = 25572;

	t16 = ((x81|x82)<=(x83+x84));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x85 = -54;
	uint64_t x86 = UINT64_MAX;
	volatile int32_t x88 = INT32_MIN;
	int32_t t17 = -56;

	t17 = ((x85|x86)<=(x87+x88));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x89 = -398LL;
	static volatile uint32_t x90 = UINT32_MAX;
	int16_t x92 = 8578;
	int32_t t18 = -3;

	t18 = ((x89|x90)<=(x91+x92));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x94 = 1;
	int16_t x95 = INT16_MIN;
	int16_t x96 = INT16_MAX;
	int32_t t19 = -26539869;

	t19 = ((x93|x94)<=(x95+x96));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x97 = INT8_MAX;
	static volatile uint8_t x99 = 0U;
	uint32_t x100 = 4179U;
	volatile int32_t t20 = -69991010;

	t20 = ((x97|x98)<=(x99+x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x105 = UINT32_MAX;
	uint64_t x106 = 9814699064LLU;
	int8_t x107 = -17;
	volatile int32_t x108 = 491;
	static volatile int32_t t21 = -222078623;

	t21 = ((x105|x106)<=(x107+x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x109 = -1;
	volatile int64_t x110 = INT64_MIN;
	uint32_t x111 = 98754U;
	int16_t x112 = INT16_MIN;
	int32_t t22 = 84;

	t22 = ((x109|x110)<=(x111+x112));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = INT64_MAX;
	uint32_t x114 = UINT32_MAX;
	uint64_t x115 = UINT64_MAX;
	static int8_t x116 = -14;
	volatile int32_t t23 = -412;

	t23 = ((x113|x114)<=(x115+x116));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x125 = INT32_MIN;
	int16_t x127 = INT16_MAX;
	static volatile int16_t x128 = 1;
	int32_t t24 = -134415193;

	t24 = ((x125|x126)<=(x127+x128));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x133 = 1463U;
	uint8_t x134 = 5U;
	int64_t x135 = INT64_MAX;
	int32_t x136 = -33;
	volatile int32_t t25 = -19784;

	t25 = ((x133|x134)<=(x135+x136));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x137 = UINT32_MAX;
	uint16_t x139 = UINT16_MAX;
	int16_t x140 = -1;
	volatile int32_t t26 = 5108701;

	t26 = ((x137|x138)<=(x139+x140));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x146 = -1;
	uint64_t x147 = UINT64_MAX;
	int16_t x148 = 309;
	int32_t t27 = -306;

	t27 = ((x145|x146)<=(x147+x148));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x149 = INT16_MAX;
	static volatile uint32_t x150 = 420U;
	static volatile int64_t x151 = 3LL;
	volatile uint64_t x152 = 6LLU;
	static volatile int32_t t28 = -8006;

	t28 = ((x149|x150)<=(x151+x152));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x153 = 394288446583LL;
	uint16_t x154 = 1U;
	static int16_t x156 = -1;
	volatile int32_t t29 = 0;

	t29 = ((x153|x154)<=(x155+x156));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x157 = 13035U;
	uint16_t x158 = 299U;
	static volatile uint8_t x159 = UINT8_MAX;
	static uint16_t x160 = 3614U;
	volatile int32_t t30 = -1836;

	t30 = ((x157|x158)<=(x159+x160));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x161 = 10LL;
	int64_t x162 = INT64_MIN;
	int8_t x163 = INT8_MAX;
	int16_t x164 = INT16_MAX;
	static volatile int32_t t31 = -5904;

	t31 = ((x161|x162)<=(x163+x164));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x165 = -1726LL;
	int64_t x166 = INT64_MIN;
	volatile uint8_t x167 = 70U;

	t32 = ((x165|x166)<=(x167+x168));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x169 = INT16_MIN;
	volatile int64_t x170 = -1LL;
	static int32_t x171 = INT32_MIN;
	volatile int32_t x172 = 2885553;
	static int32_t t33 = -4661;

	t33 = ((x169|x170)<=(x171+x172));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x173 = INT32_MAX;
	uint8_t x174 = UINT8_MAX;
	int64_t x175 = INT64_MAX;
	int8_t x176 = -1;
	volatile int32_t t34 = -2083564;

	t34 = ((x173|x174)<=(x175+x176));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x177 = -1;
	uint32_t x178 = 184734U;
	uint16_t x179 = UINT16_MAX;
	volatile uint8_t x180 = UINT8_MAX;
	int32_t t35 = 68457103;

	t35 = ((x177|x178)<=(x179+x180));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x185 = INT64_MIN;
	int8_t x186 = INT8_MIN;
	volatile int8_t x187 = -21;
	volatile int8_t x188 = INT8_MIN;
	int32_t t36 = 10713362;

	t36 = ((x185|x186)<=(x187+x188));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x189 = 51260249U;
	int8_t x190 = INT8_MAX;
	uint16_t x192 = 23U;
	int32_t t37 = -800774332;

	t37 = ((x189|x190)<=(x191+x192));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int16_t x193 = 3;
	uint16_t x194 = UINT16_MAX;
	int16_t x195 = 404;
	int32_t x196 = -1;
	int32_t t38 = 1309647;

	t38 = ((x193|x194)<=(x195+x196));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x197 = -1;
	volatile uint32_t x199 = 112670U;
	static volatile int32_t x200 = 344;
	int32_t t39 = 0;

	t39 = ((x197|x198)<=(x199+x200));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x201 = 1903092346451LLU;
	int16_t x202 = -1;
	int8_t x203 = -1;
	int16_t x204 = -72;
	static volatile int32_t t40 = -1;

	t40 = ((x201|x202)<=(x203+x204));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x205 = 16751LL;
	volatile uint64_t x206 = 199908547911785112LLU;
	volatile int8_t x207 = INT8_MIN;
	volatile int32_t t41 = -885233294;

	t41 = ((x205|x206)<=(x207+x208));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x211 = 2U;
	int16_t x212 = INT16_MIN;
	int32_t t42 = 13115;

	t42 = ((x209|x210)<=(x211+x212));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x215 = INT16_MIN;
	int8_t x216 = 21;
	int32_t t43 = -3929;

	t43 = ((x213|x214)<=(x215+x216));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x218 = -7987;
	static int8_t x219 = INT8_MIN;
	static int64_t x220 = INT64_MAX;
	volatile int32_t t44 = 475765107;

	t44 = ((x217|x218)<=(x219+x220));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x221 = INT32_MIN;
	int8_t x222 = INT8_MAX;
	static volatile int8_t x223 = -1;
	volatile uint16_t x224 = 106U;
	static volatile int32_t t45 = -3181;

	t45 = ((x221|x222)<=(x223+x224));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x225 = -1LL;
	int64_t x226 = INT64_MAX;
	int32_t x227 = INT32_MIN;
	static int16_t x228 = 0;
	int32_t t46 = 3378104;

	t46 = ((x225|x226)<=(x227+x228));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x235 = 30U;
	volatile int32_t t47 = -1;

	t47 = ((x233|x234)<=(x235+x236));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x237 = INT16_MIN;
	volatile uint8_t x238 = 3U;
	static int16_t x239 = -59;
	int32_t x240 = INT32_MAX;
	int32_t t48 = -1;

	t48 = ((x237|x238)<=(x239+x240));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x241 = INT16_MIN;
	int32_t x242 = INT32_MIN;
	int16_t x243 = -1;
	int64_t x244 = -12304LL;

	t49 = ((x241|x242)<=(x243+x244));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x245 = INT8_MIN;
	uint8_t x246 = UINT8_MAX;
	uint32_t x247 = 40708U;
	static int16_t x248 = 2;
	int32_t t50 = 224873417;

	t50 = ((x245|x246)<=(x247+x248));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x249 = -2352108024LL;
	int32_t x251 = -1;
	volatile int32_t x252 = -1;
	volatile int32_t t51 = -1636245;

	t51 = ((x249|x250)<=(x251+x252));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x253 = INT16_MIN;
	int8_t x254 = INT8_MAX;
	uint8_t x255 = UINT8_MAX;
	int64_t x256 = INT64_MIN;
	int32_t t52 = 268;

	t52 = ((x253|x254)<=(x255+x256));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x257 = -1LL;
	volatile int32_t x258 = INT32_MIN;
	int64_t x259 = INT64_MIN;
	int8_t x260 = 22;
	int32_t t53 = -241;

	t53 = ((x257|x258)<=(x259+x260));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x265 = INT16_MAX;
	uint16_t x268 = 0U;

	t54 = ((x265|x266)<=(x267+x268));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x269 = 1700U;
	static int64_t x270 = -77622170871666844LL;
	int16_t x271 = INT16_MIN;
	int16_t x272 = INT16_MIN;
	volatile int32_t t55 = 3536;

	t55 = ((x269|x270)<=(x271+x272));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x273 = INT16_MIN;
	static int32_t x274 = 702256;
	static int32_t x275 = INT32_MIN;
	int32_t t56 = 0;

	t56 = ((x273|x274)<=(x275+x276));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x277 = 8440LLU;
	static int8_t x278 = 1;
	int16_t x279 = 2064;
	volatile int16_t x280 = 6;
	volatile int32_t t57 = 10147;

	t57 = ((x277|x278)<=(x279+x280));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x282 = 26U;
	volatile int8_t x284 = INT8_MIN;
	static volatile int32_t t58 = -4052;

	t58 = ((x281|x282)<=(x283+x284));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x285 = 10U;
	int32_t x286 = INT32_MIN;
	int32_t x287 = INT32_MIN;
	volatile int64_t x288 = -1LL;
	static volatile int32_t t59 = 1067905240;

	t59 = ((x285|x286)<=(x287+x288));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x289 = 7054;
	int32_t x292 = INT32_MAX;

	t60 = ((x289|x290)<=(x291+x292));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x293 = INT32_MIN;
	uint32_t x294 = 3U;
	int64_t x295 = INT64_MIN;
	volatile uint32_t x296 = UINT32_MAX;
	volatile int32_t t61 = 12446;

	t61 = ((x293|x294)<=(x295+x296));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x297 = INT32_MIN;
	static uint32_t x298 = UINT32_MAX;
	volatile int16_t x299 = -34;
	volatile int32_t t62 = 23258087;

	t62 = ((x297|x298)<=(x299+x300));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x302 = 5;
	int16_t x304 = 83;
	int32_t t63 = -1535155;

	t63 = ((x301|x302)<=(x303+x304));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x305 = 6843235275006007LLU;
	uint32_t x306 = UINT32_MAX;
	static int16_t x307 = -1;
	uint32_t x308 = 1191904U;
	volatile int32_t t64 = 3;

	t64 = ((x305|x306)<=(x307+x308));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x309 = INT64_MIN;
	int16_t x310 = -410;
	int32_t x311 = INT32_MAX;
	int16_t x312 = INT16_MIN;

	t65 = ((x309|x310)<=(x311+x312));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x315 = 0U;
	uint64_t x316 = UINT64_MAX;
	volatile int32_t t66 = 3119442;

	t66 = ((x313|x314)<=(x315+x316));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x317 = 1;
	uint16_t x318 = 58U;
	static int16_t x320 = INT16_MAX;

	t67 = ((x317|x318)<=(x319+x320));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x321 = INT32_MIN;
	uint64_t x322 = 213280483812749LLU;
	int16_t x323 = INT16_MIN;
	uint16_t x324 = 28361U;
	volatile int32_t t68 = 1385;

	t68 = ((x321|x322)<=(x323+x324));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x329 = -1LL;
	int8_t x330 = INT8_MIN;
	int16_t x332 = INT16_MIN;
	volatile int32_t t69 = -1373;

	t69 = ((x329|x330)<=(x331+x332));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x333 = -1;
	uint32_t x334 = UINT32_MAX;
	volatile int16_t x335 = INT16_MIN;
	static int32_t t70 = 52399555;

	t70 = ((x333|x334)<=(x335+x336));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x338 = INT16_MIN;
	static int32_t x339 = -4505514;
	volatile int32_t x340 = -1;
	int32_t t71 = -315862;

	t71 = ((x337|x338)<=(x339+x340));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x341 = INT8_MAX;
	int16_t x342 = -1;
	int16_t x344 = INT16_MAX;

	t72 = ((x341|x342)<=(x343+x344));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x345 = -135796;
	int8_t x346 = 1;
	static int64_t x347 = 485258566003LL;
	uint8_t x348 = 4U;
	volatile int32_t t73 = 226297332;

	t73 = ((x345|x346)<=(x347+x348));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x349 = 1320U;
	int64_t x350 = INT64_MIN;
	static volatile int16_t x352 = INT16_MAX;
	volatile int32_t t74 = -1650;

	t74 = ((x349|x350)<=(x351+x352));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x353 = 333843763U;
	int8_t x354 = -1;
	int32_t x355 = -1;
	static uint64_t x356 = 19121943LLU;
	static volatile int32_t t75 = -3581253;

	t75 = ((x353|x354)<=(x355+x356));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x357 = INT32_MIN;
	volatile uint16_t x358 = 224U;
	static volatile int8_t x359 = INT8_MAX;
	int16_t x360 = -3525;
	volatile int32_t t76 = -1;

	t76 = ((x357|x358)<=(x359+x360));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x362 = 109U;
	volatile int64_t x363 = INT64_MIN;
	int8_t x364 = 19;
	volatile int32_t t77 = 7004274;

	t77 = ((x361|x362)<=(x363+x364));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x365 = UINT32_MAX;
	volatile int32_t x366 = -32;
	static volatile uint64_t x367 = UINT64_MAX;

	t78 = ((x365|x366)<=(x367+x368));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int16_t x369 = 1;
	uint32_t x370 = 741280U;
	volatile int32_t x371 = 79741136;
	volatile int16_t x372 = INT16_MIN;
	int32_t t79 = -1643774;

	t79 = ((x369|x370)<=(x371+x372));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x375 = -1LL;
	int64_t x376 = INT64_MAX;
	static int32_t t80 = -1;

	t80 = ((x373|x374)<=(x375+x376));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x377 = INT32_MIN;
	uint64_t x378 = 60977848061LLU;
	volatile int16_t x379 = INT16_MIN;
	volatile int32_t t81 = -47;

	t81 = ((x377|x378)<=(x379+x380));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x382 = INT8_MAX;
	int64_t x383 = -6042745973LL;
	static volatile uint16_t x384 = 515U;

	t82 = ((x381|x382)<=(x383+x384));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x385 = 61;
	int8_t x387 = -1;
	int32_t x388 = INT32_MAX;
	volatile int32_t t83 = 4;

	t83 = ((x385|x386)<=(x387+x388));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x389 = INT8_MIN;
	int8_t x391 = -1;
	volatile int8_t x392 = INT8_MAX;
	static volatile int32_t t84 = 495360;

	t84 = ((x389|x390)<=(x391+x392));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x394 = 96379LLU;
	static int32_t x395 = 668150858;
	static int64_t x396 = INT64_MIN;
	volatile int32_t t85 = 57;

	t85 = ((x393|x394)<=(x395+x396));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x397 = -34514407468225LL;
	static volatile uint8_t x398 = 50U;
	int64_t x399 = INT64_MAX;
	int32_t x400 = INT32_MIN;
	int32_t t86 = -218097;

	t86 = ((x397|x398)<=(x399+x400));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x402 = -6;
	int16_t x403 = INT16_MIN;

	t87 = ((x401|x402)<=(x403+x404));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x405 = 6144;
	int8_t x406 = INT8_MAX;
	uint64_t x407 = UINT64_MAX;
	int16_t x408 = INT16_MIN;
	static int32_t t88 = 1856;

	t88 = ((x405|x406)<=(x407+x408));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x409 = -3;
	volatile uint8_t x410 = UINT8_MAX;
	volatile uint64_t x411 = 14468087507939LLU;
	int32_t x412 = -7054721;
	static int32_t t89 = 12;

	t89 = ((x409|x410)<=(x411+x412));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x413 = INT8_MIN;
	int8_t x414 = INT8_MIN;
	int16_t x415 = -27;
	static uint64_t x416 = 515LLU;
	volatile int32_t t90 = 239034497;

	t90 = ((x413|x414)<=(x415+x416));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x417 = 301997U;
	uint64_t x419 = UINT64_MAX;
	static uint16_t x420 = 69U;
	int32_t t91 = 255606;

	t91 = ((x417|x418)<=(x419+x420));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x421 = INT32_MAX;
	int64_t x422 = -1LL;
	uint64_t x423 = 136799LLU;
	static volatile int32_t t92 = 3095;

	t92 = ((x421|x422)<=(x423+x424));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x425 = UINT64_MAX;
	volatile int32_t x426 = -1;
	uint64_t x427 = UINT64_MAX;
	int32_t t93 = -18757726;

	t93 = ((x425|x426)<=(x427+x428));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x446 = 7283279843899LL;
	uint32_t x447 = 73175U;
	volatile uint64_t x448 = 263034LLU;
	volatile int32_t t94 = -2;

	t94 = ((x445|x446)<=(x447+x448));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x449 = 3461U;
	int8_t x451 = INT8_MAX;
	int8_t x452 = -5;
	int32_t t95 = 6911;

	t95 = ((x449|x450)<=(x451+x452));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x453 = INT32_MIN;
	int32_t x454 = -89;
	volatile int64_t x455 = -13241473LL;

	t96 = ((x453|x454)<=(x455+x456));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x457 = 5;
	int16_t x458 = INT16_MAX;
	int16_t x460 = -1;
	volatile int32_t t97 = 1896;

	t97 = ((x457|x458)<=(x459+x460));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x461 = UINT64_MAX;
	uint16_t x462 = 124U;
	static volatile uint32_t x463 = 502U;
	int64_t x464 = INT64_MIN;
	int32_t t98 = -361272;

	t98 = ((x461|x462)<=(x463+x464));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x465 = INT64_MIN;
	int8_t x466 = -5;
	static uint32_t x467 = 13U;
	int32_t t99 = 28;

	t99 = ((x465|x466)<=(x467+x468));

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

