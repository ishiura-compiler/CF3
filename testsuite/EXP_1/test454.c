#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t t0 = -447654;
uint8_t x10 = UINT8_MAX;
int64_t x12 = INT64_MAX;
volatile int64_t t1 = INT64_MAX;
volatile int32_t t3 = -207782913;
int8_t x25 = -29;
static volatile int32_t x34 = INT32_MIN;
volatile int16_t x35 = INT16_MIN;
volatile int32_t t5 = -542;
volatile uint64_t x46 = 3187008LLU;
static int8_t x62 = INT8_MIN;
uint32_t t10 = 1U;
uint64_t x69 = 189980671698461290LLU;
static int16_t x70 = -1;
int32_t t12 = -33113211;
volatile uint16_t x82 = 1692U;
uint16_t x87 = 51U;
static volatile int32_t t15 = 0;
volatile uint32_t x91 = 726112103U;
uint32_t x102 = UINT32_MAX;
uint32_t x117 = 1563447U;
int8_t x128 = INT8_MIN;
int8_t x129 = INT8_MIN;
int16_t x130 = INT16_MIN;
int64_t x132 = INT64_MAX;
volatile int32_t t25 = -76;
volatile int32_t x145 = INT32_MAX;
uint32_t x150 = 48674245U;
volatile int32_t t27 = -183;
int16_t x157 = -849;
volatile uint64_t x160 = UINT64_MAX;
volatile int16_t x171 = INT16_MIN;
int8_t x180 = INT8_MAX;
int64_t x182 = 653489519LL;
volatile uint32_t t33 = 397700083U;
int32_t t34 = -112376383;
static volatile uint16_t x206 = 2690U;
uint32_t x221 = 31029011U;
int32_t x226 = 8185;
int8_t x227 = 1;
int32_t x231 = INT32_MAX;
int64_t t43 = INT64_MAX;
int64_t x240 = INT64_MAX;
uint8_t x241 = 49U;
static int64_t x244 = INT64_MIN;
volatile uint8_t x248 = UINT8_MAX;
volatile int16_t x249 = -1;
int16_t x254 = -1;
int8_t x255 = INT8_MIN;
int16_t x257 = INT16_MAX;
int8_t x260 = INT8_MIN;
volatile int32_t t50 = -25068;
static int32_t x264 = INT32_MIN;
int16_t x266 = -5;
static int64_t x267 = INT64_MIN;
uint64_t x276 = 27240975491741383LLU;
int64_t x284 = -221713175852680260LL;
int64_t t55 = -2902650092773447873LL;
int8_t x285 = 1;
static int8_t x291 = -27;
int16_t x298 = INT16_MIN;
uint32_t x300 = UINT32_MAX;
int64_t x304 = -250LL;
int32_t x315 = 16300748;
static uint64_t t61 = UINT64_MAX;
uint32_t x319 = 18U;
uint32_t x321 = UINT32_MAX;
static int32_t x328 = -1;
uint64_t x342 = 3605511LLU;
static int64_t x343 = INT64_MAX;
uint64_t x346 = 1324813LLU;
int64_t t67 = INT64_MAX;
int8_t x350 = -1;
int64_t x351 = INT64_MIN;
int8_t x356 = INT8_MIN;
int32_t x357 = -1;
int16_t x358 = INT16_MIN;
int16_t x368 = INT16_MIN;
int64_t x375 = -1LL;
int64_t x376 = 0LL;
volatile uint32_t t74 = 6U;
uint64_t x381 = 21569979LLU;
int32_t x387 = -1;
volatile int32_t t76 = 42317;
int16_t x389 = INT16_MIN;
uint32_t x391 = UINT32_MAX;
int64_t x394 = -1018894653LL;
int8_t x396 = -13;
volatile int16_t x399 = INT16_MAX;
volatile int32_t t80 = -353044068;
uint32_t x410 = UINT32_MAX;
static uint8_t x415 = UINT8_MAX;
static int16_t x416 = -53;
static int16_t x441 = -5;
int32_t t88 = -13219;
int8_t x455 = 7;
int64_t t91 = INT64_MAX;
int8_t x466 = -1;
int8_t x467 = -23;
int32_t t94 = 6;
int32_t t95 = -12170;
int8_t x484 = -1;
volatile uint8_t x485 = 3U;
int32_t x490 = -1;
int32_t x491 = INT32_MIN;
int8_t x496 = 61;


void f0(void) {
	int32_t x5 = -1;
	int64_t x6 = INT64_MAX;
	uint16_t x7 = 0U;
	int32_t x8 = INT32_MIN;

	t0 = (((x5*x6)<x7)|x8);

	if (t0 != -2147483647) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x9 = 1LLU;
	int64_t x11 = INT64_MAX;

	t1 = (((x9*x10)<x11)|x12);

	if (t1 != INT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 32146776710LLU;
	int32_t x14 = INT32_MAX;
	volatile int64_t x15 = INT64_MAX;
	int8_t x16 = 13;
	static int32_t t2 = 51347498;

	t2 = (((x13*x14)<x15)|x16);

	if (t2 != 13) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x21 = 1023582906535092207LLU;
	uint16_t x22 = 3U;
	uint32_t x23 = 6U;
	int32_t x24 = 14;

	t3 = (((x21*x22)<x23)|x24);

	if (t3 != 14) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x26 = 11U;
	int8_t x27 = 2;
	uint16_t x28 = UINT16_MAX;
	int32_t t4 = 3527641;

	t4 = (((x25*x26)<x27)|x28);

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x33 = UINT64_MAX;
	int16_t x36 = INT16_MIN;

	t5 = (((x33*x34)<x35)|x36);

	if (t5 != -32767) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x37 = UINT64_MAX;
	int16_t x38 = -1;
	int8_t x39 = -17;
	int16_t x40 = INT16_MIN;
	int32_t t6 = -11398;

	t6 = (((x37*x38)<x39)|x40);

	if (t6 != -32767) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x41 = UINT64_MAX;
	static volatile uint8_t x42 = 45U;
	uint16_t x43 = UINT16_MAX;
	static int8_t x44 = 13;
	volatile int32_t t7 = -16007;

	t7 = (((x41*x42)<x43)|x44);

	if (t7 != 13) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = INT16_MAX;
	static uint16_t x47 = UINT16_MAX;
	static int64_t x48 = -122641417985749LL;
	volatile int64_t t8 = -1LL;

	t8 = (((x45*x46)<x47)|x48);

	if (t8 != -122641417985749LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x57 = 2U;
	uint8_t x58 = 1U;
	static int64_t x59 = 1LL;
	int8_t x60 = -1;
	volatile int32_t t9 = -904743689;

	t9 = (((x57*x58)<x59)|x60);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x61 = 34U;
	volatile int64_t x63 = INT64_MIN;
	uint32_t x64 = 458555853U;

	t10 = (((x61*x62)<x63)|x64);

	if (t10 != 458555853U) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint32_t x65 = 15U;
	uint32_t x66 = 7U;
	volatile uint32_t x67 = 0U;
	uint16_t x68 = UINT16_MAX;
	volatile int32_t t11 = 3474;

	t11 = (((x65*x66)<x67)|x68);

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x71 = 3522109801LLU;
	int32_t x72 = 6792769;

	t12 = (((x69*x70)<x71)|x72);

	if (t12 != 6792769) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x77 = 64917636047364893LL;
	volatile int8_t x78 = INT8_MAX;
	static int16_t x79 = INT16_MIN;
	uint16_t x80 = 12565U;
	volatile int32_t t13 = -3527619;

	t13 = (((x77*x78)<x79)|x80);

	if (t13 != 12565) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x81 = 53525U;
	int64_t x83 = -11237LL;
	int64_t x84 = INT64_MIN;
	volatile int64_t t14 = INT64_MIN;

	t14 = (((x81*x82)<x83)|x84);

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x85 = 82;
	uint32_t x86 = 150U;
	uint8_t x88 = 18U;

	t15 = (((x85*x86)<x87)|x88);

	if (t15 != 18) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x89 = 2U;
	uint64_t x90 = UINT64_MAX;
	int16_t x92 = -1;
	int32_t t16 = 0;

	t16 = (((x89*x90)<x91)|x92);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x97 = UINT32_MAX;
	volatile int32_t x98 = -14;
	static int16_t x99 = INT16_MIN;
	static int16_t x100 = INT16_MIN;
	volatile int32_t t17 = 308913150;

	t17 = (((x97*x98)<x99)|x100);

	if (t17 != -32767) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x101 = UINT64_MAX;
	uint64_t x103 = 256569579284LLU;
	uint32_t x104 = 14491U;
	uint32_t t18 = 3231383U;

	t18 = (((x101*x102)<x103)|x104);

	if (t18 != 14491U) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x105 = UINT32_MAX;
	static int32_t x106 = INT32_MIN;
	int64_t x107 = -3LL;
	volatile int32_t x108 = 5681361;
	volatile int32_t t19 = 38;

	t19 = (((x105*x106)<x107)|x108);

	if (t19 != 5681361) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x118 = -1;
	int16_t x119 = -1;
	int16_t x120 = 1;
	volatile int32_t t20 = -322031513;

	t20 = (((x117*x118)<x119)|x120);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x125 = UINT16_MAX;
	volatile uint8_t x126 = UINT8_MAX;
	int16_t x127 = INT16_MAX;
	int32_t t21 = -663;

	t21 = (((x125*x126)<x127)|x128);

	if (t21 != -128) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x131 = -3707;
	int64_t t22 = INT64_MAX;

	t22 = (((x129*x130)<x131)|x132);

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x133 = INT8_MIN;
	uint64_t x134 = UINT64_MAX;
	static volatile int64_t x135 = -1LL;
	static int32_t x136 = -13;
	volatile int32_t t23 = 5143828;

	t23 = (((x133*x134)<x135)|x136);

	if (t23 != -13) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x137 = -1;
	static int32_t x138 = INT32_MAX;
	uint16_t x139 = UINT16_MAX;
	int32_t x140 = -2;
	volatile int32_t t24 = 539011577;

	t24 = (((x137*x138)<x139)|x140);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x141 = UINT64_MAX;
	int64_t x142 = 191093LL;
	int16_t x143 = 7844;
	int8_t x144 = -15;

	t25 = (((x141*x142)<x143)|x144);

	if (t25 != -15) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x146 = -1;
	int8_t x147 = INT8_MIN;
	int8_t x148 = 1;
	int32_t t26 = 13860;

	t26 = (((x145*x146)<x147)|x148);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x149 = 33146042LL;
	uint8_t x151 = 1U;
	static uint8_t x152 = UINT8_MAX;

	t27 = (((x149*x150)<x151)|x152);

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x158 = UINT16_MAX;
	volatile int64_t x159 = 84568280672684LL;
	volatile uint64_t t28 = UINT64_MAX;

	t28 = (((x157*x158)<x159)|x160);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x161 = INT8_MAX;
	volatile int16_t x162 = INT16_MIN;
	int16_t x163 = INT16_MAX;
	uint64_t x164 = 14274462LLU;
	uint64_t t29 = 701635898866LLU;

	t29 = (((x161*x162)<x163)|x164);

	if (t29 != 14274463LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x169 = UINT16_MAX;
	int16_t x170 = -1;
	volatile int8_t x172 = INT8_MIN;
	static int32_t t30 = 1749311;

	t30 = (((x169*x170)<x171)|x172);

	if (t30 != -127) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x177 = 23773113U;
	int8_t x178 = -1;
	static int32_t x179 = INT32_MAX;
	volatile int32_t t31 = 0;

	t31 = (((x177*x178)<x179)|x180);

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x181 = INT16_MAX;
	uint8_t x183 = 15U;
	int32_t x184 = -1;
	int32_t t32 = 71;

	t32 = (((x181*x182)<x183)|x184);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x185 = 100307LL;
	int64_t x186 = -1LL;
	volatile uint16_t x187 = 746U;
	uint32_t x188 = 352549U;

	t33 = (((x185*x186)<x187)|x188);

	if (t33 != 352549U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x193 = -931359976620266221LL;
	int32_t x194 = -2;
	int32_t x195 = 198283;
	volatile int16_t x196 = INT16_MIN;

	t34 = (((x193*x194)<x195)|x196);

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x197 = INT16_MIN;
	static volatile int32_t x198 = -92;
	int32_t x199 = 1;
	static uint8_t x200 = 71U;
	static volatile int32_t t35 = 0;

	t35 = (((x197*x198)<x199)|x200);

	if (t35 != 71) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x201 = 2059446953LL;
	static int8_t x202 = -1;
	uint16_t x203 = UINT16_MAX;
	uint8_t x204 = 2U;
	volatile int32_t t36 = 436089;

	t36 = (((x201*x202)<x203)|x204);

	if (t36 != 3) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x205 = 62;
	uint32_t x207 = 32U;
	int32_t x208 = INT32_MIN;
	static volatile int32_t t37 = INT32_MIN;

	t37 = (((x205*x206)<x207)|x208);

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x209 = INT8_MAX;
	volatile uint64_t x210 = UINT64_MAX;
	volatile int32_t x211 = INT32_MIN;
	int32_t x212 = INT32_MAX;
	volatile int32_t t38 = INT32_MAX;

	t38 = (((x209*x210)<x211)|x212);

	if (t38 != INT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x213 = -1;
	int16_t x214 = INT16_MIN;
	volatile int8_t x215 = -33;
	uint32_t x216 = 1025849107U;
	volatile uint32_t t39 = 1789650U;

	t39 = (((x213*x214)<x215)|x216);

	if (t39 != 1025849107U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x217 = 0U;
	uint64_t x218 = UINT64_MAX;
	int16_t x219 = 5751;
	static volatile int32_t x220 = -2071;
	int32_t t40 = 0;

	t40 = (((x217*x218)<x219)|x220);

	if (t40 != -2071) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x222 = INT8_MIN;
	int16_t x223 = -1;
	volatile int32_t x224 = 60;
	volatile int32_t t41 = 908;

	t41 = (((x221*x222)<x223)|x224);

	if (t41 != 61) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x225 = -1;
	int16_t x228 = -65;
	volatile int32_t t42 = 1520928;

	t42 = (((x225*x226)<x227)|x228);

	if (t42 != -65) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x229 = -1;
	volatile int16_t x230 = -1;
	volatile int64_t x232 = INT64_MAX;

	t43 = (((x229*x230)<x231)|x232);

	if (t43 != INT64_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x233 = UINT16_MAX;
	int16_t x234 = INT16_MIN;
	uint8_t x235 = UINT8_MAX;
	int16_t x236 = INT16_MIN;
	volatile int32_t t44 = 22;

	t44 = (((x233*x234)<x235)|x236);

	if (t44 != -32767) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x237 = INT8_MAX;
	uint8_t x238 = 0U;
	static int8_t x239 = INT8_MIN;
	volatile int64_t t45 = INT64_MAX;

	t45 = (((x237*x238)<x239)|x240);

	if (t45 != INT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x242 = INT8_MIN;
	uint16_t x243 = 7U;
	volatile int64_t t46 = 114692576107LL;

	t46 = (((x241*x242)<x243)|x244);

	if (t46 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x245 = -1;
	int32_t x246 = -1;
	static uint16_t x247 = UINT16_MAX;
	volatile int32_t t47 = 4806429;

	t47 = (((x245*x246)<x247)|x248);

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x250 = UINT8_MAX;
	volatile int8_t x251 = -1;
	volatile int32_t x252 = INT32_MAX;
	int32_t t48 = INT32_MAX;

	t48 = (((x249*x250)<x251)|x252);

	if (t48 != INT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x253 = INT8_MAX;
	uint8_t x256 = 10U;
	volatile int32_t t49 = -31172;

	t49 = (((x253*x254)<x255)|x256);

	if (t49 != 10) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x258 = INT8_MIN;
	static int16_t x259 = INT16_MIN;

	t50 = (((x257*x258)<x259)|x260);

	if (t50 != -127) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x261 = INT64_MIN;
	static uint64_t x262 = 78936899LLU;
	int8_t x263 = INT8_MIN;
	int32_t t51 = 0;

	t51 = (((x261*x262)<x263)|x264);

	if (t51 != -2147483647) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x265 = UINT16_MAX;
	volatile int8_t x268 = INT8_MAX;
	volatile int32_t t52 = -603909400;

	t52 = (((x265*x266)<x267)|x268);

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x273 = INT8_MIN;
	int8_t x274 = -4;
	volatile int64_t x275 = INT64_MAX;
	volatile uint64_t t53 = 957380LLU;

	t53 = (((x273*x274)<x275)|x276);

	if (t53 != 27240975491741383LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x277 = -1;
	static int32_t x278 = 2;
	uint64_t x279 = UINT64_MAX;
	uint8_t x280 = 0U;
	static volatile int32_t t54 = -76;

	t54 = (((x277*x278)<x279)|x280);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x281 = 14;
	static int16_t x282 = INT16_MAX;
	volatile int16_t x283 = INT16_MIN;

	t55 = (((x281*x282)<x283)|x284);

	if (t55 != -221713175852680260LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x286 = INT64_MIN;
	int32_t x287 = INT32_MIN;
	volatile int8_t x288 = 10;
	int32_t t56 = 1481370;

	t56 = (((x285*x286)<x287)|x288);

	if (t56 != 11) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x289 = 0;
	static int64_t x290 = -973090480957LL;
	int8_t x292 = INT8_MIN;
	volatile int32_t t57 = 2411;

	t57 = (((x289*x290)<x291)|x292);

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x297 = INT16_MIN;
	int16_t x299 = INT16_MIN;
	uint32_t t58 = UINT32_MAX;

	t58 = (((x297*x298)<x299)|x300);

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x301 = INT8_MIN;
	volatile uint16_t x302 = 0U;
	uint8_t x303 = UINT8_MAX;
	volatile int64_t t59 = -1LL;

	t59 = (((x301*x302)<x303)|x304);

	if (t59 != -249LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x305 = 0;
	int64_t x306 = INT64_MAX;
	int64_t x307 = INT64_MIN;
	volatile int16_t x308 = 59;
	volatile int32_t t60 = 18984;

	t60 = (((x305*x306)<x307)|x308);

	if (t60 != 59) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x313 = UINT8_MAX;
	uint64_t x314 = 1937724733765215421LLU;
	uint64_t x316 = UINT64_MAX;

	t61 = (((x313*x314)<x315)|x316);

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x317 = INT8_MIN;
	int32_t x318 = -484829;
	uint32_t x320 = 37746U;
	uint32_t t62 = 2U;

	t62 = (((x317*x318)<x319)|x320);

	if (t62 != 37746U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x322 = 50U;
	volatile int16_t x323 = INT16_MIN;
	volatile int16_t x324 = INT16_MAX;
	static volatile int32_t t63 = 1899297;

	t63 = (((x321*x322)<x323)|x324);

	if (t63 != 32767) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x325 = 2U;
	int16_t x326 = INT16_MAX;
	int16_t x327 = -1;
	volatile int32_t t64 = -632448705;

	t64 = (((x325*x326)<x327)|x328);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x337 = INT8_MIN;
	uint8_t x338 = 13U;
	volatile int32_t x339 = INT32_MAX;
	int32_t x340 = INT32_MIN;
	volatile int32_t t65 = 183508;

	t65 = (((x337*x338)<x339)|x340);

	if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x341 = INT8_MAX;
	int8_t x344 = INT8_MAX;
	volatile int32_t t66 = -325728374;

	t66 = (((x341*x342)<x343)|x344);

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x345 = -17;
	static uint64_t x347 = UINT64_MAX;
	int64_t x348 = INT64_MAX;

	t67 = (((x345*x346)<x347)|x348);

	if (t67 != INT64_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x349 = 0;
	static int32_t x352 = INT32_MIN;
	int32_t t68 = INT32_MIN;

	t68 = (((x349*x350)<x351)|x352);

	if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x353 = -119629;
	uint16_t x354 = 0U;
	int64_t x355 = INT64_MIN;
	volatile int32_t t69 = -1;

	t69 = (((x353*x354)<x355)|x356);

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x359 = INT64_MIN;
	uint16_t x360 = UINT16_MAX;
	int32_t t70 = -11;

	t70 = (((x357*x358)<x359)|x360);

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x361 = 5;
	uint16_t x362 = 7U;
	static int8_t x363 = INT8_MIN;
	static int32_t x364 = INT32_MIN;
	int32_t t71 = INT32_MIN;

	t71 = (((x361*x362)<x363)|x364);

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x365 = 213879;
	uint64_t x366 = 10142LLU;
	volatile int32_t x367 = 48;
	int32_t t72 = 612413860;

	t72 = (((x365*x366)<x367)|x368);

	if (t72 != -32768) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x373 = 1205797634U;
	static int64_t x374 = -1LL;
	volatile int64_t t73 = -476474352LL;

	t73 = (((x373*x374)<x375)|x376);

	if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x377 = 2705;
	uint64_t x378 = 1795145LLU;
	int8_t x379 = INT8_MIN;
	uint32_t x380 = 4U;

	t74 = (((x377*x378)<x379)|x380);

	if (t74 != 5U) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x382 = INT8_MAX;
	int32_t x383 = -1;
	int32_t x384 = -1;
	volatile int32_t t75 = 6322;

	t75 = (((x381*x382)<x383)|x384);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x385 = 5U;
	uint8_t x386 = UINT8_MAX;
	int8_t x388 = 3;

	t76 = (((x385*x386)<x387)|x388);

	if (t76 != 3) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x390 = 12228U;
	uint16_t x392 = 0U;
	int32_t t77 = -31532455;

	t77 = (((x389*x390)<x391)|x392);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x393 = 78LLU;
	int64_t x395 = INT64_MIN;
	static int32_t t78 = 65404;

	t78 = (((x393*x394)<x395)|x396);

	if (t78 != -13) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x397 = INT16_MAX;
	int8_t x398 = INT8_MIN;
	int64_t x400 = -7218LL;
	volatile int64_t t79 = 109640586688846LL;

	t79 = (((x397*x398)<x399)|x400);

	if (t79 != -7217LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x401 = INT16_MIN;
	uint16_t x402 = 52U;
	int64_t x403 = INT64_MIN;
	int32_t x404 = -1;

	t80 = (((x401*x402)<x403)|x404);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x405 = -1;
	uint16_t x406 = 1U;
	uint16_t x407 = 58U;
	uint64_t x408 = UINT64_MAX;
	uint64_t t81 = UINT64_MAX;

	t81 = (((x405*x406)<x407)|x408);

	if (t81 != UINT64_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x409 = -1;
	int64_t x411 = INT64_MIN;
	int8_t x412 = -22;
	int32_t t82 = 384188;

	t82 = (((x409*x410)<x411)|x412);

	if (t82 != -22) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x413 = -53893564;
	uint8_t x414 = 15U;
	volatile int32_t t83 = -104;

	t83 = (((x413*x414)<x415)|x416);

	if (t83 != -53) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x417 = UINT32_MAX;
	uint64_t x418 = UINT64_MAX;
	int8_t x419 = INT8_MIN;
	static int16_t x420 = INT16_MIN;
	int32_t t84 = -86;

	t84 = (((x417*x418)<x419)|x420);

	if (t84 != -32767) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x421 = -885466807;
	uint32_t x422 = UINT32_MAX;
	int64_t x423 = 256807LL;
	int16_t x424 = INT16_MIN;
	volatile int32_t t85 = 2;

	t85 = (((x421*x422)<x423)|x424);

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x437 = INT16_MAX;
	uint32_t x438 = 45512U;
	uint64_t x439 = 27243664598LLU;
	uint32_t x440 = 172760779U;
	static uint32_t t86 = 64020263U;

	t86 = (((x437*x438)<x439)|x440);

	if (t86 != 172760779U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x442 = INT16_MIN;
	uint16_t x443 = 885U;
	volatile int32_t x444 = -1;
	static int32_t t87 = 12298277;

	t87 = (((x441*x442)<x443)|x444);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x445 = 1;
	volatile uint8_t x446 = 113U;
	volatile uint8_t x447 = 121U;
	volatile int16_t x448 = INT16_MAX;

	t88 = (((x445*x446)<x447)|x448);

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x449 = INT8_MIN;
	volatile int32_t x450 = 3126775;
	volatile int16_t x451 = INT16_MAX;
	static int16_t x452 = 1354;
	static int32_t t89 = -161038789;

	t89 = (((x449*x450)<x451)|x452);

	if (t89 != 1355) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x453 = -14005970;
	int8_t x454 = INT8_MAX;
	uint16_t x456 = 30284U;
	int32_t t90 = -359730;

	t90 = (((x453*x454)<x455)|x456);

	if (t90 != 30285) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x457 = INT8_MIN;
	uint16_t x458 = 1U;
	volatile int64_t x459 = -1LL;
	int64_t x460 = INT64_MAX;

	t91 = (((x457*x458)<x459)|x460);

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x461 = 47U;
	int16_t x462 = -1;
	static int16_t x463 = -7187;
	volatile int8_t x464 = 1;
	volatile int32_t t92 = 40;

	t92 = (((x461*x462)<x463)|x464);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x465 = -1;
	int16_t x468 = INT16_MAX;
	volatile int32_t t93 = -2107528;

	t93 = (((x465*x466)<x467)|x468);

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x473 = -1;
	uint8_t x474 = UINT8_MAX;
	uint64_t x475 = 6LLU;
	int16_t x476 = -1;

	t94 = (((x473*x474)<x475)|x476);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x477 = -1LL;
	volatile uint8_t x478 = 1U;
	int64_t x479 = -1LL;
	static int16_t x480 = 8701;

	t95 = (((x477*x478)<x479)|x480);

	if (t95 != 8701) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x481 = INT8_MIN;
	int16_t x482 = -2994;
	static uint16_t x483 = 23246U;
	static int32_t t96 = 14;

	t96 = (((x481*x482)<x483)|x484);

	if (t96 != -1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x486 = 29762U;
	uint8_t x487 = 43U;
	static int32_t x488 = INT32_MIN;
	static int32_t t97 = INT32_MIN;

	t97 = (((x485*x486)<x487)|x488);

	if (t97 != INT32_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x489 = INT64_MAX;
	int16_t x492 = -1;
	volatile int32_t t98 = -1;

	t98 = (((x489*x490)<x491)|x492);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x493 = 944700U;
	int32_t x494 = INT32_MIN;
	static int16_t x495 = INT16_MAX;
	volatile int32_t t99 = -500;

	t99 = (((x493*x494)<x495)|x496);

	if (t99 != 61) { NG(); } else { ; }
	
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

