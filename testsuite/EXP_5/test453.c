#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x5 = UINT16_MAX;
volatile int64_t t3 = -20978160704880441LL;
volatile uint64_t x41 = 73346725493401842LLU;
uint64_t x42 = 7274855926LLU;
int16_t x43 = 2;
int16_t x48 = -1;
int8_t x52 = INT8_MAX;
static uint8_t x58 = UINT8_MAX;
static int64_t x69 = INT64_MIN;
int32_t t12 = -2;
volatile uint64_t x81 = 4601170934LLU;
int8_t x82 = INT8_MIN;
int16_t x83 = INT16_MIN;
volatile int32_t t15 = -60847;
static uint8_t x95 = 2U;
volatile int32_t t16 = 4797287;
uint8_t x97 = UINT8_MAX;
uint32_t x102 = 669U;
int32_t t18 = 1920133;
int64_t x109 = -14130655008733LL;
volatile int64_t x125 = INT64_MIN;
static volatile int16_t x126 = INT16_MAX;
static volatile int16_t x130 = 0;
int8_t x134 = -57;
volatile uint8_t x135 = UINT8_MAX;
static int32_t t24 = -1;
int16_t x142 = INT16_MIN;
volatile int16_t x151 = -1;
int8_t x152 = -1;
int8_t x153 = INT8_MIN;
int64_t x154 = -14746879879935LL;
uint64_t x155 = 17061098798476553LLU;
int16_t x161 = INT16_MIN;
int32_t x163 = -3;
uint64_t t29 = 441701187383666LLU;
volatile uint64_t x172 = UINT64_MAX;
static volatile int8_t x180 = INT8_MIN;
uint64_t t31 = 276LLU;
volatile int32_t x194 = 116693;
int16_t x195 = 34;
int64_t x196 = INT64_MIN;
volatile int32_t t33 = 5;
int16_t x200 = -14;
int64_t x201 = 562940769LL;
static uint64_t x206 = 3559264571435229791LLU;
volatile uint16_t x207 = 1U;
uint64_t x208 = 104662LLU;
int8_t x215 = INT8_MIN;
volatile int8_t x229 = INT8_MAX;
volatile int8_t x231 = 53;
int16_t x236 = INT16_MIN;
volatile int32_t t42 = 16;
volatile int8_t x242 = INT8_MAX;
volatile uint32_t t43 = 61442U;
int32_t x266 = INT32_MIN;
static int16_t x272 = -1;
int32_t x282 = -4145675;
static uint16_t x284 = UINT16_MAX;
int64_t t51 = 190081849988820LL;
int16_t x291 = INT16_MIN;
volatile int32_t t54 = 55400012;
volatile int32_t x309 = INT32_MIN;
int8_t x320 = INT8_MAX;
static volatile int32_t t56 = -15;
int8_t x321 = INT8_MIN;
volatile int32_t x324 = -464090;
volatile int32_t t57 = 305858;
volatile int8_t x326 = INT8_MIN;
int8_t x329 = -1;
volatile int8_t x333 = INT8_MIN;
uint16_t x335 = 11655U;
static int16_t x339 = INT16_MIN;
int16_t x345 = INT16_MAX;
volatile int32_t t62 = 9;
static volatile int16_t x351 = INT16_MIN;
int16_t x352 = -1;
int16_t x359 = 1;
int32_t x361 = -505492153;
int32_t x386 = 42;
uint32_t x388 = UINT32_MAX;
uint16_t x406 = UINT16_MAX;
int32_t t71 = 12876;
int8_t x413 = INT8_MIN;
uint64_t x415 = 4504440773807294804LLU;
int32_t x416 = INT32_MIN;
volatile int32_t x420 = INT32_MAX;
int32_t x425 = INT32_MIN;
volatile int32_t t75 = 0;
uint16_t x435 = 7409U;
volatile int8_t x447 = -1;
int16_t x448 = 3;
static int64_t x449 = INT64_MAX;
volatile int64_t t79 = 816944602856884LL;
volatile int32_t x469 = -6568;
static uint32_t x475 = 738182U;
uint8_t x479 = 17U;
int64_t x483 = 2413LL;
volatile int64_t t88 = -110069419LL;
int64_t x497 = INT64_MIN;
uint8_t x505 = 35U;
uint32_t x516 = UINT32_MAX;
volatile int32_t t93 = 169044;
int8_t x522 = 1;
uint64_t x531 = UINT64_MAX;
static int32_t t97 = -9;
volatile int8_t x545 = -19;
int8_t x547 = INT8_MAX;
volatile int8_t x551 = INT8_MAX;
uint64_t t99 = 6LLU;


void f0(void) {
	volatile int8_t x1 = -1;
	int8_t x2 = 27;
	volatile uint32_t x3 = 31457U;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = -777320;

	t0 = (x1&((x2*x3)<x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = UINT8_MAX;
	int16_t x7 = INT16_MIN;
	int8_t x8 = INT8_MAX;
	volatile int32_t t1 = -106394561;

	t1 = (x5&((x6*x7)<x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = 0LL;
	int64_t x10 = 10803026226679LL;
	int16_t x11 = INT16_MIN;
	static volatile uint16_t x12 = 4U;
	volatile int64_t t2 = -1383841062088450LL;

	t2 = (x9&((x10*x11)<x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x21 = 479598469LL;
	uint8_t x22 = 6U;
	volatile uint16_t x23 = 7U;
	volatile uint64_t x24 = 53305362737LLU;

	t3 = (x21&((x22*x23)<x24));

	if (t3 != 1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x33 = -1;
	uint64_t x34 = 492341771LLU;
	uint32_t x35 = 2U;
	int32_t x36 = -1;
	int32_t t4 = -3000;

	t4 = (x33&((x34*x35)<x36));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x37 = -1;
	static volatile uint8_t x38 = 7U;
	int8_t x39 = INT8_MAX;
	volatile int8_t x40 = INT8_MIN;
	int32_t t5 = 503313;

	t5 = (x37&((x38*x39)<x40));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x44 = 1;
	uint64_t t6 = 1492LLU;

	t6 = (x41&((x42*x43)<x44));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x45 = INT64_MIN;
	static volatile uint32_t x46 = UINT32_MAX;
	int16_t x47 = 1;
	static int64_t t7 = 7259669952237070LL;

	t7 = (x45&((x46*x47)<x48));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = INT8_MIN;
	int32_t x50 = 2;
	static uint8_t x51 = 26U;
	int32_t t8 = -8690;

	t8 = (x49&((x50*x51)<x52));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x53 = INT16_MAX;
	uint64_t x54 = UINT64_MAX;
	static int16_t x55 = -145;
	static int32_t x56 = INT32_MIN;
	volatile int32_t t9 = 7861;

	t9 = (x53&((x54*x55)<x56));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x57 = 14U;
	volatile uint16_t x59 = 1U;
	uint64_t x60 = 161762553556LLU;
	volatile int32_t t10 = -3429;

	t10 = (x57&((x58*x59)<x60));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x70 = 1;
	int8_t x71 = INT8_MIN;
	int16_t x72 = INT16_MIN;
	static volatile int64_t t11 = 46489144LL;

	t11 = (x69&((x70*x71)<x72));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x73 = INT32_MAX;
	volatile uint16_t x74 = 1U;
	int8_t x75 = 25;
	int64_t x76 = -894272LL;

	t12 = (x73&((x74*x75)<x76));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x84 = -1;
	volatile uint64_t t13 = 177454583LLU;

	t13 = (x81&((x82*x83)<x84));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x85 = 1697LLU;
	int8_t x86 = INT8_MAX;
	uint64_t x87 = 4497342674302LLU;
	int16_t x88 = INT16_MIN;
	uint64_t t14 = 9453649006829831LLU;

	t14 = (x85&((x86*x87)<x88));

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x89 = INT32_MIN;
	uint8_t x90 = 47U;
	static volatile uint8_t x91 = UINT8_MAX;
	int32_t x92 = -428706726;

	t15 = (x89&((x90*x91)<x92));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x93 = 246343;
	uint8_t x94 = UINT8_MAX;
	static int16_t x96 = -1;

	t16 = (x93&((x94*x95)<x96));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x98 = 1;
	volatile uint16_t x99 = 5U;
	volatile uint32_t x100 = 3U;
	volatile int32_t t17 = 1;

	t17 = (x97&((x98*x99)<x100));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x101 = INT16_MAX;
	int8_t x103 = INT8_MIN;
	int32_t x104 = INT32_MAX;

	t18 = (x101&((x102*x103)<x104));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x110 = INT16_MIN;
	int8_t x111 = -1;
	uint64_t x112 = 184402LLU;
	int64_t t19 = -1161880857114LL;

	t19 = (x109&((x110*x111)<x112));

	if (t19 != 1LL) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x113 = UINT64_MAX;
	static volatile uint64_t x114 = 453006240134835801LLU;
	int64_t x115 = 7943171LL;
	int16_t x116 = -1;
	uint64_t t20 = 87LLU;

	t20 = (x113&((x114*x115)<x116));

	if (t20 != 1LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x117 = INT16_MIN;
	uint64_t x118 = UINT64_MAX;
	uint8_t x119 = 5U;
	int64_t x120 = 149238164LL;
	volatile int32_t t21 = 56562166;

	t21 = (x117&((x118*x119)<x120));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x127 = 1876873U;
	static volatile int64_t x128 = INT64_MAX;
	static volatile int64_t t22 = 9LL;

	t22 = (x125&((x126*x127)<x128));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x129 = 82U;
	int64_t x131 = 537629553778167361LL;
	int16_t x132 = 1;
	static int32_t t23 = 865237;

	t23 = (x129&((x130*x131)<x132));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x133 = UINT16_MAX;
	int8_t x136 = INT8_MAX;

	t24 = (x133&((x134*x135)<x136));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x141 = INT32_MIN;
	uint64_t x143 = 191817440207814802LLU;
	uint32_t x144 = 0U;
	int32_t t25 = 19;

	t25 = (x141&((x142*x143)<x144));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x149 = 1303446441U;
	uint8_t x150 = 1U;
	volatile uint32_t t26 = 1U;

	t26 = (x149&((x150*x151)<x152));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x156 = -1;
	int32_t t27 = -9959101;

	t27 = (x153&((x154*x155)<x156));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint32_t x162 = UINT32_MAX;
	static int8_t x164 = 1;
	volatile int32_t t28 = 6;

	t28 = (x161&((x162*x163)<x164));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x165 = UINT64_MAX;
	volatile int16_t x166 = INT16_MIN;
	volatile uint16_t x167 = 1U;
	volatile int8_t x168 = INT8_MIN;

	t29 = (x165&((x166*x167)<x168));

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x169 = -18;
	uint64_t x170 = 5357466165223846LLU;
	int16_t x171 = 1407;
	int32_t t30 = -421;

	t30 = (x169&((x170*x171)<x172));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x177 = 8893861181737LLU;
	static int16_t x178 = INT16_MIN;
	static int32_t x179 = 328;

	t31 = (x177&((x178*x179)<x180));

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x189 = 11043U;
	int8_t x190 = -1;
	static volatile int8_t x191 = 27;
	static int8_t x192 = 3;
	volatile int32_t t32 = -4949188;

	t32 = (x189&((x190*x191)<x192));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x193 = -1;

	t33 = (x193&((x194*x195)<x196));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x197 = -1;
	int32_t x198 = INT32_MIN;
	volatile int32_t x199 = 0;
	int32_t t34 = 0;

	t34 = (x197&((x198*x199)<x200));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x202 = 15;
	volatile int16_t x203 = INT16_MIN;
	int16_t x204 = 1;
	volatile int64_t t35 = -621LL;

	t35 = (x201&((x202*x203)<x204));

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x205 = 13U;
	int32_t t36 = -1769271;

	t36 = (x205&((x206*x207)<x208));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x213 = 53U;
	uint32_t x214 = UINT32_MAX;
	int16_t x216 = INT16_MIN;
	volatile int32_t t37 = 925;

	t37 = (x213&((x214*x215)<x216));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x217 = 58U;
	uint8_t x218 = UINT8_MAX;
	volatile uint32_t x219 = 6U;
	int8_t x220 = INT8_MIN;
	int32_t t38 = 261120;

	t38 = (x217&((x218*x219)<x220));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x225 = 104U;
	int8_t x226 = -1;
	int32_t x227 = INT32_MAX;
	int8_t x228 = 6;
	int32_t t39 = 19152036;

	t39 = (x225&((x226*x227)<x228));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x230 = INT16_MIN;
	int16_t x232 = INT16_MIN;
	int32_t t40 = -58556;

	t40 = (x229&((x230*x231)<x232));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x233 = 0U;
	int16_t x234 = -1;
	int16_t x235 = INT16_MIN;
	volatile int32_t t41 = -350044;

	t41 = (x233&((x234*x235)<x236));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x237 = -1;
	uint16_t x238 = 43U;
	static int16_t x239 = -12;
	static int8_t x240 = -32;

	t42 = (x237&((x238*x239)<x240));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x241 = 185669383U;
	uint16_t x243 = 2U;
	volatile uint8_t x244 = UINT8_MAX;

	t43 = (x241&((x242*x243)<x244));

	if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x245 = INT16_MIN;
	static int64_t x246 = -5787666669584849LL;
	int16_t x247 = 15;
	volatile int8_t x248 = INT8_MAX;
	static int32_t t44 = 3;

	t44 = (x245&((x246*x247)<x248));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x253 = INT8_MIN;
	uint32_t x254 = 19638030U;
	int8_t x255 = INT8_MIN;
	volatile int64_t x256 = -30LL;
	static int32_t t45 = 0;

	t45 = (x253&((x254*x255)<x256));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x257 = INT16_MIN;
	static int8_t x258 = 3;
	static int16_t x259 = INT16_MAX;
	uint16_t x260 = UINT16_MAX;
	volatile int32_t t46 = 1;

	t46 = (x257&((x258*x259)<x260));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x265 = INT8_MIN;
	uint32_t x267 = 62U;
	uint8_t x268 = UINT8_MAX;
	volatile int32_t t47 = 169742742;

	t47 = (x265&((x266*x267)<x268));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x269 = UINT32_MAX;
	volatile int16_t x270 = -1;
	int32_t x271 = -1;
	uint32_t t48 = 1099521U;

	t48 = (x269&((x270*x271)<x272));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x273 = -1;
	static int64_t x274 = 31554136LL;
	volatile uint64_t x275 = UINT64_MAX;
	int16_t x276 = -1;
	int32_t t49 = -3279526;

	t49 = (x273&((x274*x275)<x276));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x277 = 30;
	int8_t x278 = INT8_MAX;
	uint32_t x279 = UINT32_MAX;
	static uint16_t x280 = 5781U;
	int32_t t50 = -409498442;

	t50 = (x277&((x278*x279)<x280));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x281 = 32401052908906LL;
	int32_t x283 = -1;

	t51 = (x281&((x282*x283)<x284));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x289 = -1123;
	static int16_t x290 = 538;
	volatile int32_t x292 = -1;
	int32_t t52 = 350560041;

	t52 = (x289&((x290*x291)<x292));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x297 = -4;
	int16_t x298 = 85;
	int64_t x299 = -1LL;
	int16_t x300 = -1;
	int32_t t53 = 43189009;

	t53 = (x297&((x298*x299)<x300));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x305 = 3;
	static uint16_t x306 = 2198U;
	int16_t x307 = -1;
	int32_t x308 = 21844869;

	t54 = (x305&((x306*x307)<x308));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x310 = 402LL;
	uint64_t x311 = 3640048104722LLU;
	int32_t x312 = INT32_MAX;
	int32_t t55 = -232552;

	t55 = (x309&((x310*x311)<x312));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x317 = INT8_MAX;
	static int8_t x318 = 1;
	int64_t x319 = 18701109598LL;

	t56 = (x317&((x318*x319)<x320));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x322 = INT8_MAX;
	volatile int8_t x323 = INT8_MAX;

	t57 = (x321&((x322*x323)<x324));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x325 = INT64_MIN;
	uint16_t x327 = UINT16_MAX;
	int16_t x328 = INT16_MIN;
	int64_t t58 = -81656598161LL;

	t58 = (x325&((x326*x327)<x328));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x330 = 1LL;
	int8_t x331 = -1;
	int8_t x332 = INT8_MIN;
	volatile int32_t t59 = 22;

	t59 = (x329&((x330*x331)<x332));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x334 = 0;
	int16_t x336 = -58;
	volatile int32_t t60 = 122127;

	t60 = (x333&((x334*x335)<x336));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x337 = 2U;
	int64_t x338 = 149479287LL;
	volatile uint64_t x340 = 9417042618LLU;
	static volatile int32_t t61 = 110310;

	t61 = (x337&((x338*x339)<x340));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x346 = 42944U;
	int32_t x347 = 16353674;
	int64_t x348 = 61807180044356414LL;

	t62 = (x345&((x346*x347)<x348));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x349 = 0;
	uint8_t x350 = UINT8_MAX;
	int32_t t63 = -1322;

	t63 = (x349&((x350*x351)<x352));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x353 = -1;
	int8_t x354 = 0;
	int64_t x355 = 1LL;
	static int16_t x356 = INT16_MAX;
	int32_t t64 = 637089097;

	t64 = (x353&((x354*x355)<x356));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x357 = -684304053310LL;
	int16_t x358 = INT16_MAX;
	static int8_t x360 = INT8_MIN;
	static volatile int64_t t65 = 303565713104254LL;

	t65 = (x357&((x358*x359)<x360));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x362 = 0;
	static uint64_t x363 = 2408810LLU;
	uint64_t x364 = UINT64_MAX;
	int32_t t66 = -1024715;

	t66 = (x361&((x362*x363)<x364));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x373 = 4076674863913570386LL;
	volatile int16_t x374 = 44;
	uint32_t x375 = 6428U;
	int64_t x376 = INT64_MIN;
	int64_t t67 = -445058873554180117LL;

	t67 = (x373&((x374*x375)<x376));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x385 = INT32_MAX;
	uint32_t x387 = UINT32_MAX;
	volatile int32_t t68 = -14;

	t68 = (x385&((x386*x387)<x388));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x389 = -1LL;
	uint64_t x390 = 5968372141293290LLU;
	int64_t x391 = INT64_MAX;
	int16_t x392 = INT16_MAX;
	volatile int64_t t69 = -2432538973455791LL;

	t69 = (x389&((x390*x391)<x392));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x393 = INT32_MAX;
	uint32_t x394 = 1012204U;
	int32_t x395 = -784;
	uint64_t x396 = UINT64_MAX;
	static volatile int32_t t70 = 1;

	t70 = (x393&((x394*x395)<x396));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x405 = INT8_MAX;
	int32_t x407 = 1024;
	int64_t x408 = INT64_MIN;

	t71 = (x405&((x406*x407)<x408));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x414 = INT64_MAX;
	volatile int32_t t72 = -428;

	t72 = (x413&((x414*x415)<x416));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x417 = UINT32_MAX;
	uint64_t x418 = 130016507007LLU;
	int16_t x419 = INT16_MIN;
	volatile uint32_t t73 = 64782768U;

	t73 = (x417&((x418*x419)<x420));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x426 = 24221068U;
	static int8_t x427 = INT8_MIN;
	int64_t x428 = -579878624362789042LL;
	volatile int32_t t74 = 5880544;

	t74 = (x425&((x426*x427)<x428));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x429 = 0U;
	volatile int16_t x430 = INT16_MIN;
	static int16_t x431 = -1;
	volatile int64_t x432 = -2620334887947313LL;

	t75 = (x429&((x430*x431)<x432));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x433 = INT8_MIN;
	uint8_t x434 = UINT8_MAX;
	int32_t x436 = INT32_MIN;
	int32_t t76 = -3;

	t76 = (x433&((x434*x435)<x436));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x445 = 4052393U;
	int32_t x446 = -60856255;
	volatile uint32_t t77 = 115213U;

	t77 = (x445&((x446*x447)<x448));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x450 = INT8_MIN;
	uint32_t x451 = 2097146247U;
	int64_t x452 = INT64_MIN;
	int64_t t78 = 3826340902755964503LL;

	t78 = (x449&((x450*x451)<x452));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x453 = INT64_MIN;
	int8_t x454 = INT8_MIN;
	uint32_t x455 = 2196503U;
	int8_t x456 = -1;

	t79 = (x453&((x454*x455)<x456));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x457 = 2;
	uint64_t x458 = 34LLU;
	uint64_t x459 = UINT64_MAX;
	int16_t x460 = INT16_MIN;
	int32_t t80 = -7085;

	t80 = (x457&((x458*x459)<x460));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x461 = INT64_MIN;
	uint32_t x462 = 122U;
	uint64_t x463 = 139573509LLU;
	uint32_t x464 = UINT32_MAX;
	int64_t t81 = -144LL;

	t81 = (x461&((x462*x463)<x464));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x465 = INT8_MIN;
	int16_t x466 = -1;
	uint8_t x467 = 13U;
	static int64_t x468 = INT64_MIN;
	int32_t t82 = 63640103;

	t82 = (x465&((x466*x467)<x468));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x470 = -1LL;
	uint8_t x471 = 24U;
	uint32_t x472 = 284U;
	volatile int32_t t83 = 5190;

	t83 = (x469&((x470*x471)<x472));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x473 = INT16_MIN;
	uint8_t x474 = UINT8_MAX;
	uint16_t x476 = 843U;
	volatile int32_t t84 = 639770716;

	t84 = (x473&((x474*x475)<x476));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x477 = 48119585559LLU;
	uint16_t x478 = 3607U;
	static volatile uint16_t x480 = UINT16_MAX;
	volatile uint64_t t85 = 9427442415316539LLU;

	t85 = (x477&((x478*x479)<x480));

	if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x481 = -1;
	int8_t x482 = 3;
	uint64_t x484 = UINT64_MAX;
	volatile int32_t t86 = -158647849;

	t86 = (x481&((x482*x483)<x484));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x485 = 407U;
	static int64_t x486 = -588182243009870754LL;
	uint16_t x487 = 1U;
	uint32_t x488 = 4572258U;
	int32_t t87 = 7;

	t87 = (x485&((x486*x487)<x488));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x489 = 6580329LL;
	uint8_t x490 = UINT8_MAX;
	uint16_t x491 = UINT16_MAX;
	volatile uint64_t x492 = UINT64_MAX;

	t88 = (x489&((x490*x491)<x492));

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x498 = 3009LLU;
	int16_t x499 = -228;
	volatile int8_t x500 = 2;
	volatile int64_t t89 = -2478609148LL;

	t89 = (x497&((x498*x499)<x500));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x501 = 3U;
	int8_t x502 = -1;
	static volatile uint16_t x503 = UINT16_MAX;
	volatile int32_t x504 = INT32_MIN;
	static volatile int32_t t90 = 38692;

	t90 = (x501&((x502*x503)<x504));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x506 = 6U;
	volatile uint64_t x507 = 453217284333260LLU;
	volatile int32_t x508 = -1;
	int32_t t91 = 5627;

	t91 = (x505&((x506*x507)<x508));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x513 = INT8_MAX;
	uint32_t x514 = 0U;
	static int16_t x515 = INT16_MAX;
	int32_t t92 = 28736;

	t92 = (x513&((x514*x515)<x516));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int8_t x517 = -1;
	uint8_t x518 = 15U;
	static int64_t x519 = -1LL;
	uint8_t x520 = 98U;

	t93 = (x517&((x518*x519)<x520));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x521 = 2U;
	int32_t x523 = INT32_MAX;
	static uint16_t x524 = 0U;
	int32_t t94 = -2;

	t94 = (x521&((x522*x523)<x524));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x525 = -15360138LL;
	int32_t x526 = INT32_MAX;
	volatile int8_t x527 = -1;
	int8_t x528 = INT8_MIN;
	volatile int64_t t95 = -10744442148665048LL;

	t95 = (x525&((x526*x527)<x528));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x529 = UINT32_MAX;
	uint32_t x530 = 1519U;
	volatile int16_t x532 = -1567;
	volatile uint32_t t96 = 12256817U;

	t96 = (x529&((x530*x531)<x532));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x541 = 83U;
	volatile uint8_t x542 = 2U;
	int64_t x543 = -24113825203142LL;
	int64_t x544 = INT64_MIN;

	t97 = (x541&((x542*x543)<x544));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x546 = INT16_MIN;
	static uint16_t x548 = 10310U;
	volatile int32_t t98 = 26;

	t98 = (x545&((x546*x547)<x548));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x549 = 19329LLU;
	uint64_t x550 = 87750142LLU;
	int8_t x552 = INT8_MIN;

	t99 = (x549&((x550*x551)<x552));

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

