#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x6 = 6116547U;
volatile uint64_t x8 = 35943854461LLU;
int8_t x18 = INT8_MIN;
uint64_t t4 = 107273250266506277LLU;
int64_t x28 = 361115LL;
volatile int64_t t5 = -3925LL;
static volatile uint64_t t6 = 3581LLU;
uint16_t x33 = 152U;
int8_t x34 = 0;
int32_t x35 = -1;
int8_t x37 = INT8_MAX;
uint32_t x40 = 63U;
int64_t x45 = -1LL;
static volatile int64_t t11 = -6LL;
int8_t x80 = INT8_MIN;
int32_t x93 = INT32_MAX;
static uint32_t x113 = UINT32_MAX;
static uint64_t x114 = 6808778979280LLU;
volatile int64_t t21 = -27701479452440298LL;
volatile uint64_t x121 = 38955495540681035LLU;
static uint64_t x130 = 3LLU;
volatile int16_t x142 = INT16_MAX;
uint16_t x153 = UINT16_MAX;
static int64_t x154 = 441364LL;
static int32_t x164 = INT32_MAX;
uint64_t t33 = 34LLU;
int16_t x186 = INT16_MIN;
int32_t x187 = -360;
uint64_t x189 = 164795940997LLU;
volatile int64_t x192 = INT64_MAX;
int64_t x212 = INT64_MIN;
static int32_t x227 = -1;
volatile uint32_t t39 = 0U;
int8_t x230 = 1;
int32_t x232 = 48;
int16_t x234 = -1;
static int16_t x235 = INT16_MAX;
volatile int16_t x237 = INT16_MIN;
volatile int16_t x240 = INT16_MIN;
int32_t t43 = -1750716;
volatile uint16_t x259 = 123U;
int64_t x265 = INT64_MIN;
uint64_t t45 = 54087108516496LLU;
uint16_t x275 = 212U;
static int64_t t48 = 74162239236LL;
int16_t x287 = INT16_MIN;
volatile uint64_t t49 = 7594015074LLU;
static uint16_t x291 = 9461U;
static int64_t t50 = -8205LL;
static volatile int32_t t51 = 1;
uint8_t x298 = 1U;
int8_t x302 = -1;
static uint16_t x305 = UINT16_MAX;
int16_t x306 = 2898;
uint32_t x307 = UINT32_MAX;
int8_t x309 = 22;
static uint8_t x312 = 2U;
int32_t x332 = -1;
int32_t x335 = INT32_MAX;
static uint8_t x336 = UINT8_MAX;
int32_t x344 = INT32_MAX;
static int16_t x346 = -1;
volatile int64_t x348 = -249316LL;
uint64_t x351 = 115412732LLU;
uint16_t x358 = UINT16_MAX;
uint64_t t65 = 2593688756953587488LLU;
volatile uint32_t x370 = 127U;
static int64_t x381 = INT64_MAX;
uint32_t x383 = 6U;
volatile int64_t t68 = 17345LL;
int32_t x405 = INT32_MAX;
int64_t x407 = INT64_MIN;
int8_t x410 = INT8_MIN;
uint8_t x431 = UINT8_MAX;
static uint16_t x439 = 97U;
volatile int16_t x440 = INT16_MIN;
uint16_t x442 = 3316U;
static volatile int32_t t78 = -752120764;
static int8_t x446 = -7;
int64_t x460 = 33270155341935LL;
int32_t x461 = INT32_MIN;
static volatile int16_t x464 = INT16_MIN;
volatile int32_t t82 = -98;
uint32_t x474 = 1U;
uint64_t x476 = 10994149027538LLU;
uint64_t t85 = 30968253LLU;
int64_t x482 = -44LL;
int8_t x488 = INT8_MIN;
volatile int32_t x489 = INT32_MAX;
volatile uint8_t x494 = 23U;
int8_t x508 = INT8_MAX;
volatile uint16_t x517 = UINT16_MAX;
int64_t x527 = 101LL;
volatile uint16_t x547 = 63U;
int16_t x553 = -1;


void f0(void) {
	uint64_t x5 = UINT64_MAX;
	int8_t x7 = INT8_MIN;
	uint64_t t0 = 15607LLU;

	t0 = ((x5-(x6*x7))%x8);

	if (t0 != 31909579697LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = UINT32_MAX;
	uint8_t x10 = 6U;
	uint8_t x11 = 0U;
	int64_t x12 = -136LL;
	int64_t t1 = 6723397080436LL;

	t1 = ((x9-(x10*x11))%x12);

	if (t1 != 119LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MAX;
	static volatile int8_t x14 = INT8_MIN;
	volatile int64_t x15 = -7287159773LL;
	static int32_t x16 = -1;
	volatile int64_t t2 = 232931894123880015LL;

	t2 = ((x13-(x14*x15))%x16);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MIN;
	int32_t x19 = 45;
	volatile uint64_t x20 = UINT64_MAX;
	uint64_t t3 = 3151669483086370623LLU;

	t3 = ((x17-(x18*x19))%x20);

	if (t3 != 5632LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = INT32_MAX;
	int8_t x22 = INT8_MAX;
	volatile uint64_t x23 = 94LLU;
	int64_t x24 = INT64_MIN;

	t4 = ((x21-(x22*x23))%x24);

	if (t4 != 2147471709LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = 1LL;
	volatile int8_t x26 = INT8_MIN;
	int8_t x27 = INT8_MAX;

	t5 = ((x25-(x26*x27))%x28);

	if (t5 != 16257LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MIN;
	int16_t x30 = -225;
	uint64_t x31 = UINT64_MAX;
	int16_t x32 = INT16_MIN;

	t6 = ((x29-(x30*x31))%x32);

	if (t6 != 32415LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x36 = -1;
	volatile int32_t t7 = -83095;

	t7 = ((x33-(x34*x35))%x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x38 = -47929516992063LL;
	int8_t x39 = INT8_MAX;
	static volatile int64_t t8 = 3450080072280618LL;

	t8 = ((x37-(x38*x39))%x40);

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = 1U;
	uint64_t x42 = 2LLU;
	volatile int8_t x43 = -1;
	uint8_t x44 = 1U;
	uint64_t t9 = 215066966LLU;

	t9 = ((x41-(x42*x43))%x44);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x46 = INT8_MIN;
	int16_t x47 = INT16_MIN;
	uint16_t x48 = 2U;
	volatile int64_t t10 = 2126321862856LL;

	t10 = ((x45-(x46*x47))%x48);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = UINT16_MAX;
	static int32_t x54 = -256;
	uint16_t x55 = UINT16_MAX;
	static int64_t x56 = INT64_MAX;

	t11 = ((x53-(x54*x55))%x56);

	if (t11 != 16842495LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x69 = -6;
	volatile uint8_t x70 = 3U;
	int64_t x71 = -112879592LL;
	static int8_t x72 = -1;
	volatile int64_t t12 = -24211LL;

	t12 = ((x69-(x70*x71))%x72);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x73 = -2;
	uint16_t x74 = 1U;
	volatile int16_t x75 = INT16_MIN;
	uint64_t x76 = 413619962109088869LLU;
	static volatile uint64_t t13 = 788858008LLU;

	t13 = ((x73-(x74*x75))%x76);

	if (t13 != 32766LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x77 = -5706680105385209LL;
	static uint16_t x78 = 8769U;
	static uint8_t x79 = 0U;
	static int64_t t14 = 60448832676944LL;

	t14 = ((x77-(x78*x79))%x80);

	if (t14 != -121LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x85 = INT8_MAX;
	volatile int32_t x86 = -1;
	static uint32_t x87 = 1164131U;
	int64_t x88 = 59045608LL;
	volatile int64_t t15 = -474174651037358752LL;

	t15 = ((x85-(x86*x87))%x88);

	if (t15 != 1164258LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x89 = INT8_MAX;
	uint16_t x90 = 0U;
	int8_t x91 = -1;
	int16_t x92 = 507;
	int32_t t16 = -5;

	t16 = ((x89-(x90*x91))%x92);

	if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x94 = -727188561;
	static int8_t x95 = -1;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t17 = -9;

	t17 = ((x93-(x94*x95))%x96);

	if (t17 != 166) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x101 = INT16_MIN;
	static volatile uint64_t x102 = UINT64_MAX;
	uint16_t x103 = 11U;
	static volatile int64_t x104 = -1LL;
	volatile uint64_t t18 = 2145580633353572776LLU;

	t18 = ((x101-(x102*x103))%x104);

	if (t18 != 18446744073709518859LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x105 = -6654;
	volatile uint64_t x106 = 5762966013047091292LLU;
	int64_t x107 = INT64_MIN;
	int16_t x108 = INT16_MIN;
	uint64_t t19 = 801367664928290891LLU;

	t19 = ((x105-(x106*x107))%x108);

	if (t19 != 26114LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x115 = 25U;
	uint64_t x116 = UINT64_MAX;
	uint64_t t20 = 1978049178696LLU;

	t20 = ((x113-(x114*x115))%x116);

	if (t20 != 18446573858530036911LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x117 = INT8_MIN;
	int64_t x118 = -2298818LL;
	volatile int8_t x119 = -1;
	uint8_t x120 = 14U;

	t21 = ((x117-(x118*x119))%x120);

	if (t21 != -6LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint32_t x122 = UINT32_MAX;
	static int32_t x123 = -5717055;
	volatile int64_t x124 = 3659077017632099LL;
	volatile uint64_t t22 = 7681913111438LLU;

	t22 = ((x121-(x122*x123))%x124);

	if (t22 != 2364725358642990LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x125 = INT16_MIN;
	volatile uint64_t x126 = UINT64_MAX;
	uint8_t x127 = UINT8_MAX;
	int32_t x128 = -201125;
	volatile uint64_t t23 = 6911030924570LLU;

	t23 = ((x125-(x126*x127))%x128);

	if (t23 != 168612LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x129 = INT32_MIN;
	int64_t x131 = INT64_MAX;
	static int8_t x132 = INT8_MAX;
	uint64_t t24 = 2801966106LLU;

	t24 = ((x129-(x130*x131))%x132);

	if (t24 != 123LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x137 = 125U;
	volatile int64_t x138 = -1LL;
	int16_t x139 = INT16_MAX;
	uint64_t x140 = UINT64_MAX;
	uint64_t t25 = 9276773243714447LLU;

	t25 = ((x137-(x138*x139))%x140);

	if (t25 != 32892LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x141 = -387261476402621963LL;
	static uint64_t x143 = UINT64_MAX;
	int16_t x144 = -6;
	static volatile uint64_t t26 = 450386325968636LLU;

	t26 = ((x141-(x142*x143))%x144);

	if (t26 != 18059482597306962420LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x145 = -81;
	static int16_t x146 = INT16_MAX;
	uint16_t x147 = 188U;
	int16_t x148 = 452;
	int32_t t27 = -24567166;

	t27 = ((x145-(x146*x147))%x148);

	if (t27 != -421) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x149 = -1;
	volatile int8_t x150 = INT8_MIN;
	static volatile int16_t x151 = -28;
	volatile int64_t x152 = 1089325LL;
	int64_t t28 = -728045472648LL;

	t28 = ((x149-(x150*x151))%x152);

	if (t28 != -3585LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x155 = INT32_MAX;
	int16_t x156 = 222;
	int64_t t29 = 983199714869LL;

	t29 = ((x153-(x154*x155))%x156);

	if (t29 != -25LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x157 = 1278896582259LLU;
	int16_t x158 = INT16_MIN;
	static volatile int8_t x159 = INT8_MIN;
	int64_t x160 = INT64_MIN;
	volatile uint64_t t30 = 14803622LLU;

	t30 = ((x157-(x158*x159))%x160);

	if (t30 != 1278892387955LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x161 = INT8_MAX;
	int8_t x162 = -1;
	static int32_t x163 = -1;
	int32_t t31 = 0;

	t31 = ((x161-(x162*x163))%x164);

	if (t31 != 126) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x165 = INT16_MIN;
	int64_t x166 = 1594756016LL;
	volatile uint16_t x167 = 0U;
	volatile uint64_t x168 = 5LLU;
	uint64_t t32 = 3LLU;

	t32 = ((x165-(x166*x167))%x168);

	if (t32 != 3LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x173 = INT8_MIN;
	int32_t x174 = 776709498;
	uint8_t x175 = 1U;
	uint64_t x176 = UINT64_MAX;

	t33 = ((x173-(x174*x175))%x176);

	if (t33 != 18446744072932841990LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x185 = -33LL;
	int64_t x188 = 432514202751049064LL;
	int64_t t34 = -936153673LL;

	t34 = ((x185-(x186*x187))%x188);

	if (t34 != -11796513LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x190 = 3U;
	int64_t x191 = -1LL;
	static volatile uint64_t t35 = 185150865201204LLU;

	t35 = ((x189-(x190*x191))%x192);

	if (t35 != 164795941000LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint64_t x197 = 135367147689206LLU;
	int32_t x198 = INT32_MIN;
	uint64_t x199 = UINT64_MAX;
	int32_t x200 = INT32_MIN;
	volatile uint64_t t36 = 4819221462252LLU;

	t36 = ((x197-(x198*x199))%x200);

	if (t36 != 135365000205558LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x209 = 33U;
	volatile uint64_t x210 = 101724899LLU;
	static int8_t x211 = INT8_MIN;
	uint64_t t37 = 291014837LLU;

	t37 = ((x209-(x210*x211))%x212);

	if (t37 != 13020787105LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x221 = 14U;
	int16_t x222 = INT16_MAX;
	uint64_t x223 = 10346116LLU;
	static int16_t x224 = INT16_MIN;
	uint64_t t38 = 231LLU;

	t38 = ((x221-(x222*x223))%x224);

	if (t38 != 18446743734698368658LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x225 = 384U;
	int32_t x226 = -2101444;
	static int32_t x228 = INT32_MIN;

	t39 = ((x225-(x226*x227))%x228);

	if (t39 != 2145382588U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x229 = UINT8_MAX;
	int8_t x231 = -6;
	volatile int32_t t40 = -236846;

	t40 = ((x229-(x230*x231))%x232);

	if (t40 != 21) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x233 = 50;
	static int16_t x236 = INT16_MAX;
	int32_t t41 = 1;

	t41 = ((x233-(x234*x235))%x236);

	if (t41 != 50) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x238 = 23LLU;
	int16_t x239 = INT16_MIN;
	uint64_t t42 = 303313968132753LLU;

	t42 = ((x237-(x238*x239))%x240);

	if (t42 != 720896LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x245 = UINT16_MAX;
	static int8_t x246 = -1;
	uint8_t x247 = UINT8_MAX;
	static uint16_t x248 = 14457U;

	t43 = ((x245-(x246*x247))%x248);

	if (t43 != 7962) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x257 = 0;
	static int8_t x258 = INT8_MIN;
	volatile int64_t x260 = INT64_MAX;
	int64_t t44 = -329050LL;

	t44 = ((x257-(x258*x259))%x260);

	if (t44 != 15744LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x266 = UINT64_MAX;
	int8_t x267 = -2;
	int64_t x268 = 852508517300LL;

	t45 = ((x265-(x266*x267))%x268);

	if (t45 != 547368415006LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x273 = -1;
	int8_t x274 = INT8_MIN;
	int64_t x276 = INT64_MIN;
	int64_t t46 = -3038334LL;

	t46 = ((x273-(x274*x275))%x276);

	if (t46 != 27135LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x277 = 110436U;
	volatile uint8_t x278 = 0U;
	uint8_t x279 = UINT8_MAX;
	int8_t x280 = 50;
	volatile uint32_t t47 = 0U;

	t47 = ((x277-(x278*x279))%x280);

	if (t47 != 36U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x281 = 597444LL;
	int16_t x282 = -135;
	int32_t x283 = 423;
	int64_t x284 = 46673814LL;

	t48 = ((x281-(x282*x283))%x284);

	if (t48 != 654549LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x285 = INT8_MAX;
	int8_t x286 = 3;
	uint64_t x288 = 243966858960LLU;

	t49 = ((x285-(x286*x287))%x288);

	if (t49 != 98431LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x289 = 4261157LL;
	volatile int32_t x290 = -1;
	int16_t x292 = -1;

	t50 = ((x289-(x290*x291))%x292);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x293 = 6961289;
	static int16_t x294 = 49;
	volatile uint8_t x295 = 24U;
	volatile uint16_t x296 = 18U;

	t51 = ((x293-(x294*x295))%x296);

	if (t51 != 17) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x297 = 19860U;
	int16_t x299 = INT16_MAX;
	int32_t x300 = INT32_MIN;
	volatile int32_t t52 = -680626;

	t52 = ((x297-(x298*x299))%x300);

	if (t52 != -12907) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x301 = 30U;
	static uint8_t x303 = UINT8_MAX;
	uint16_t x304 = 1584U;
	uint32_t t53 = 472302072U;

	t53 = ((x301-(x302*x303))%x304);

	if (t53 != 285U) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x308 = 12693;
	uint32_t t54 = 336U;

	t54 = ((x305-(x306*x307))%x308);

	if (t54 != 4968U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x310 = UINT8_MAX;
	int16_t x311 = INT16_MAX;
	int32_t t55 = 0;

	t55 = ((x309-(x310*x311))%x312);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x317 = INT8_MIN;
	static uint32_t x318 = UINT32_MAX;
	uint32_t x319 = UINT32_MAX;
	uint64_t x320 = UINT64_MAX;
	volatile uint64_t t56 = 221085930070LLU;

	t56 = ((x317-(x318*x319))%x320);

	if (t56 != 4294967167LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x321 = INT16_MAX;
	static volatile int16_t x322 = INT16_MIN;
	uint32_t x323 = UINT32_MAX;
	int32_t x324 = INT32_MIN;
	uint32_t t57 = 2254668U;

	t57 = ((x321-(x322*x323))%x324);

	if (t57 != 2147483647U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x329 = 3LLU;
	static int32_t x330 = -232323;
	uint64_t x331 = 1246380385508298LLU;
	volatile uint64_t t58 = 11781LLU;

	t58 = ((x329-(x330*x331))%x332);

	if (t58 != 12861669196801042017LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x333 = -1LL;
	uint16_t x334 = 1U;
	static int64_t t59 = -4176387273927LL;

	t59 = ((x333-(x334*x335))%x336);

	if (t59 != -128LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x337 = INT64_MAX;
	uint8_t x338 = 30U;
	int64_t x339 = 1LL;
	int8_t x340 = INT8_MIN;
	static int64_t t60 = -4965344186014354LL;

	t60 = ((x337-(x338*x339))%x340);

	if (t60 != 97LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x341 = -4482425989822LL;
	int16_t x342 = -1;
	int8_t x343 = INT8_MAX;
	int64_t t61 = -5909719516106LL;

	t61 = ((x341-(x342*x343))%x344);

	if (t61 != -627618406LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x345 = -6;
	volatile uint16_t x347 = UINT16_MAX;
	int64_t t62 = -111093351517888LL;

	t62 = ((x345-(x346*x347))%x348);

	if (t62 != 65529LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x349 = 882U;
	volatile int64_t x350 = INT64_MIN;
	int8_t x352 = INT8_MIN;
	uint64_t t63 = 66705646377LLU;

	t63 = ((x349-(x350*x351))%x352);

	if (t63 != 882LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x357 = 1;
	volatile int32_t x359 = 22;
	uint16_t x360 = 112U;
	volatile int32_t t64 = 371046;

	t64 = ((x357-(x358*x359))%x360);

	if (t64 != -105) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x365 = -1LL;
	int8_t x366 = INT8_MIN;
	int8_t x367 = INT8_MIN;
	uint64_t x368 = UINT64_MAX;

	t65 = ((x365-(x366*x367))%x368);

	if (t65 != 18446744073709535231LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x369 = INT16_MIN;
	int8_t x371 = INT8_MAX;
	uint64_t x372 = 16028LLU;
	uint64_t t66 = 211435360682LLU;

	t66 = ((x369-(x370*x371))%x372);

	if (t66 != 7435LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x373 = 11U;
	int16_t x374 = INT16_MIN;
	uint16_t x375 = 18406U;
	volatile int16_t x376 = INT16_MAX;
	volatile int32_t t67 = -25654;

	t67 = ((x373-(x374*x375))%x376);

	if (t67 != 18417) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x382 = 956080815639288LL;
	int64_t x384 = -1LL;

	t68 = ((x381-(x382*x383))%x384);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x385 = UINT32_MAX;
	int8_t x386 = INT8_MIN;
	volatile uint16_t x387 = 3806U;
	int8_t x388 = INT8_MAX;
	volatile uint32_t t69 = 46751U;

	t69 = ((x385-(x386*x387))%x388);

	if (t69 != 122U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x393 = 26U;
	int8_t x394 = -62;
	int32_t x395 = -3446;
	uint16_t x396 = UINT16_MAX;
	uint32_t t70 = 22046U;

	t70 = ((x393-(x394*x395))%x396);

	if (t70 != 48515U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x397 = 2U;
	volatile int8_t x398 = INT8_MIN;
	static uint16_t x399 = UINT16_MAX;
	int32_t x400 = INT32_MIN;
	volatile int32_t t71 = 53245;

	t71 = ((x397-(x398*x399))%x400);

	if (t71 != 8388482) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x406 = UINT64_MAX;
	int32_t x408 = INT32_MAX;
	volatile uint64_t t72 = 21572790932LLU;

	t72 = ((x405-(x406*x407))%x408);

	if (t72 != 2LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x409 = INT64_MAX;
	int64_t x411 = -533260727696780LL;
	int16_t x412 = INT16_MIN;
	int64_t t73 = 210683LL;

	t73 = ((x409-(x410*x411))%x412);

	if (t73 != 14847LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x413 = 104U;
	int16_t x414 = INT16_MIN;
	uint8_t x415 = UINT8_MAX;
	int16_t x416 = -13;
	static uint32_t t74 = 158946998U;

	t74 = ((x413-(x414*x415))%x416);

	if (t74 != 8355944U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x417 = -13507;
	int32_t x418 = INT32_MIN;
	volatile uint32_t x419 = 10134U;
	int64_t x420 = -1LL;
	volatile int64_t t75 = -2472859936372381LL;

	t75 = ((x417-(x418*x419))%x420);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x429 = -1;
	uint8_t x430 = UINT8_MAX;
	int8_t x432 = INT8_MAX;
	int32_t t76 = -57703605;

	t76 = ((x429-(x430*x431))%x432);

	if (t76 != -2) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x437 = UINT8_MAX;
	uint8_t x438 = 21U;
	static int32_t t77 = 181;

	t77 = ((x437-(x438*x439))%x440);

	if (t77 != -1782) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x441 = INT16_MAX;
	int16_t x443 = INT16_MAX;
	static int32_t x444 = INT32_MAX;

	t78 = ((x441-(x442*x443))%x444);

	if (t78 != -108622605) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x445 = -4;
	int8_t x447 = INT8_MIN;
	int32_t x448 = -1;
	volatile int32_t t79 = 4396;

	t79 = ((x445-(x446*x447))%x448);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x449 = -788517LL;
	uint16_t x450 = 1119U;
	int16_t x451 = INT16_MIN;
	volatile uint32_t x452 = UINT32_MAX;
	static volatile int64_t t80 = 180027802735184891LL;

	t80 = ((x449-(x450*x451))%x452);

	if (t80 != 35878875LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x457 = 6114U;
	uint8_t x458 = 9U;
	volatile uint16_t x459 = UINT16_MAX;
	volatile int64_t t81 = 315LL;

	t81 = ((x457-(x458*x459))%x460);

	if (t81 != -583701LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x462 = INT8_MIN;
	uint16_t x463 = 7U;

	t82 = ((x461-(x462*x463))%x464);

	if (t82 != -31872) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x465 = 42;
	static volatile uint16_t x466 = 6589U;
	volatile uint32_t x467 = UINT32_MAX;
	static int64_t x468 = INT64_MIN;
	volatile int64_t t83 = 1LL;

	t83 = ((x465-(x466*x467))%x468);

	if (t83 != 6631LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x469 = -14;
	int16_t x470 = INT16_MIN;
	uint32_t x471 = UINT32_MAX;
	volatile uint8_t x472 = 4U;
	volatile uint32_t t84 = 0U;

	t84 = ((x469-(x470*x471))%x472);

	if (t84 != 2U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x473 = INT8_MIN;
	volatile int8_t x475 = 1;

	t85 = ((x473-(x474*x475))%x476);

	if (t85 != 4294967167LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x477 = 0U;
	uint64_t x478 = 97861246650880834LLU;
	int64_t x479 = -6243LL;
	int64_t x480 = INT64_MIN;
	static volatile uint64_t t86 = 227597LLU;

	t86 = ((x477-(x478*x479))%x480);

	if (t86 != 2205208409033843334LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x481 = 12242;
	uint8_t x483 = 107U;
	volatile int16_t x484 = INT16_MIN;
	static volatile int64_t t87 = 197720LL;

	t87 = ((x481-(x482*x483))%x484);

	if (t87 != 16950LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x485 = -1;
	int8_t x486 = INT8_MIN;
	uint64_t x487 = 33370LLU;
	static volatile uint64_t t88 = 19621390LLU;

	t88 = ((x485-(x486*x487))%x488);

	if (t88 != 4271359LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x490 = 1023895U;
	uint16_t x491 = 16936U;
	int16_t x492 = INT16_MIN;
	volatile uint32_t t89 = 2U;

	t89 = ((x489-(x490*x491))%x492);

	if (t89 != 1986667111U) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x493 = -1LL;
	int8_t x495 = INT8_MIN;
	uint64_t x496 = 249LLU;
	static uint64_t t90 = 3965613323LLU;

	t90 = ((x493-(x494*x495))%x496);

	if (t90 != 204LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x505 = 16376U;
	int16_t x506 = INT16_MIN;
	int16_t x507 = 6261;
	static volatile uint32_t t91 = 760432424U;

	t91 = ((x505-(x506*x507))%x508);

	if (t91 != 69U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x513 = INT8_MAX;
	volatile int64_t x514 = INT64_MIN;
	uint64_t x515 = 413080261770360372LLU;
	int32_t x516 = INT32_MIN;
	volatile uint64_t t92 = 488LLU;

	t92 = ((x513-(x514*x515))%x516);

	if (t92 != 127LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x518 = UINT64_MAX;
	volatile uint64_t x519 = UINT64_MAX;
	int8_t x520 = -1;
	volatile uint64_t t93 = 164948268697LLU;

	t93 = ((x517-(x518*x519))%x520);

	if (t93 != 65534LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x525 = -124025871288LL;
	int8_t x526 = -4;
	static volatile uint16_t x528 = 644U;
	static int64_t t94 = 15199LL;

	t94 = ((x525-(x526*x527))%x528);

	if (t94 != -20LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x533 = 3703443U;
	int64_t x534 = -1LL;
	uint64_t x535 = UINT64_MAX;
	volatile int8_t x536 = INT8_MIN;
	volatile uint64_t t95 = 265174623LLU;

	t95 = ((x533-(x534*x535))%x536);

	if (t95 != 3703442LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x541 = INT64_MIN;
	int64_t x542 = -1LL;
	volatile uint32_t x543 = 25497155U;
	int64_t x544 = -1LL;
	volatile int64_t t96 = -1547LL;

	t96 = ((x541-(x542*x543))%x544);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x545 = 1U;
	int64_t x546 = 57LL;
	static uint64_t x548 = UINT64_MAX;
	uint64_t t97 = 4330104801049530824LLU;

	t97 = ((x545-(x546*x547))%x548);

	if (t97 != 18446744073709548026LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x549 = 33;
	static uint8_t x550 = 127U;
	static int8_t x551 = INT8_MIN;
	static uint8_t x552 = 118U;
	volatile int32_t t98 = -81;

	t98 = ((x549-(x550*x551))%x552);

	if (t98 != 5) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x554 = -119;
	static int16_t x555 = INT16_MAX;
	uint64_t x556 = 425591594LLU;
	volatile uint64_t t99 = 1087802338749LLU;

	t99 = ((x553-(x554*x555))%x556);

	if (t99 != 3899272LLU) { NG(); } else { ; }
	
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

