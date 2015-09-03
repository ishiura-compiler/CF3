#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = 26;
volatile int32_t x2 = INT32_MAX;
int32_t x15 = INT32_MIN;
volatile int32_t t2 = -234266;
static volatile int32_t x19 = INT32_MAX;
uint8_t x21 = 13U;
static int64_t x22 = -1LL;
uint32_t x41 = UINT32_MAX;
static volatile int64_t x43 = INT64_MIN;
int32_t x50 = INT32_MIN;
volatile int64_t t8 = 11304288433029LL;
int32_t x89 = INT32_MIN;
int8_t x109 = INT8_MIN;
static uint16_t x112 = UINT16_MAX;
uint64_t x121 = UINT64_MAX;
static int32_t x127 = INT32_MAX;
uint16_t x129 = 26U;
int32_t x138 = INT32_MIN;
uint8_t x155 = UINT8_MAX;
static volatile uint64_t x160 = 1349499553636LLU;
volatile uint64_t t23 = UINT64_MAX;
int32_t x203 = -1;
static int64_t x204 = 3LL;
int32_t x205 = -1;
static int8_t x233 = INT8_MIN;
int64_t x235 = -1LL;
static volatile int32_t t29 = 7487951;
static int32_t x237 = INT32_MIN;
int16_t x259 = INT16_MIN;
int32_t t32 = -3434432;
int32_t x282 = -2865787;
uint64_t x308 = 1004746488720099LLU;
int32_t x318 = INT32_MIN;
volatile int8_t x321 = 0;
int32_t x324 = INT32_MAX;
int32_t t41 = -41200;
static int64_t x325 = 20LL;
uint8_t x329 = 93U;
int8_t x334 = -1;
int16_t x336 = 6856;
int8_t x355 = -1;
volatile int8_t x369 = INT8_MIN;
int32_t x374 = INT32_MIN;
int64_t x375 = -1565791818LL;
uint32_t x381 = 399U;
uint32_t x384 = 731U;
static uint32_t x394 = 55214985U;
volatile uint16_t x397 = 1U;
static volatile int32_t t54 = -11;
int32_t x423 = INT32_MAX;
volatile uint32_t t56 = 24039866U;
volatile int8_t x432 = INT8_MAX;
int8_t x434 = INT8_MIN;
static volatile int32_t t58 = -62368929;
static int32_t x438 = -129;
int32_t x439 = 1904261;
static volatile int32_t x446 = INT32_MIN;
int32_t t60 = 2314789;
int32_t x449 = -1097;
volatile int8_t x450 = INT8_MAX;
volatile int32_t t61 = -70;
static uint16_t x458 = 8U;
static int64_t x465 = INT64_MAX;
int32_t x467 = INT32_MIN;
uint32_t x473 = 330U;
int8_t x474 = INT8_MAX;
uint16_t x480 = 441U;
int32_t x498 = INT32_MAX;
int8_t x499 = INT8_MIN;
int32_t t70 = INT32_MIN;
static volatile uint16_t x521 = 30315U;
uint32_t x522 = 896353U;
int32_t x526 = -27736;
static int32_t t73 = 290747985;
static int8_t x544 = 2;
uint8_t x547 = 34U;
int8_t x551 = -39;
static volatile uint64_t x558 = 2LLU;
static volatile uint16_t x560 = UINT16_MAX;
static uint64_t x582 = 493717569LLU;
volatile int32_t t82 = INT32_MIN;
int64_t x594 = 629501LL;
static volatile uint32_t x606 = 60486410U;
static uint32_t x620 = 80268407U;
volatile int32_t x621 = INT32_MIN;
volatile int16_t x634 = 14585;
uint8_t x651 = UINT8_MAX;
volatile int32_t x653 = INT32_MAX;
static int8_t x654 = -1;
volatile int32_t t92 = INT32_MAX;
uint8_t x668 = 1U;
int64_t x674 = INT64_MAX;
volatile uint16_t x675 = 247U;
volatile int32_t t95 = 18020739;
uint32_t x695 = UINT32_MAX;
volatile uint32_t t98 = 3912816U;
uint8_t x704 = 20U;
static int64_t t99 = -249382LL;


void f0(void) {
	int32_t x3 = INT32_MAX;
	static volatile uint64_t x4 = UINT64_MAX;
	static volatile int32_t t0 = 179308;

	t0 = (x1/((x2==x3)<x4));

	if (t0 != 26) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	static uint8_t x6 = 121U;
	volatile int32_t x7 = -417;
	int8_t x8 = INT8_MAX;
	int32_t t1 = -12643;

	t1 = (x5/((x6==x7)<x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = UINT16_MAX;
	int8_t x14 = -1;
	int16_t x16 = 858;

	t2 = (x13/((x14==x15)<x16));

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 24849U;
	int64_t x18 = -1LL;
	uint64_t x20 = UINT64_MAX;
	volatile uint32_t t3 = 17165532U;

	t3 = (x17/((x18==x19)<x20));

	if (t3 != 24849U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x23 = INT8_MIN;
	uint32_t x24 = 3518U;
	int32_t t4 = -58;

	t4 = (x21/((x22==x23)<x24));

	if (t4 != 13) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = UINT64_MAX;
	volatile uint32_t x26 = UINT32_MAX;
	int64_t x27 = INT64_MIN;
	static volatile int16_t x28 = 201;
	static uint64_t t5 = UINT64_MAX;

	t5 = (x25/((x26==x27)<x28));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x33 = 2U;
	int8_t x34 = -1;
	volatile uint8_t x35 = 2U;
	int32_t x36 = 34;
	int32_t t6 = -263565706;

	t6 = (x33/((x34==x35)<x36));

	if (t6 != 2) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x42 = INT32_MAX;
	static int8_t x44 = INT8_MAX;
	uint32_t t7 = UINT32_MAX;

	t7 = (x41/((x42==x43)<x44));

	if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x49 = -1LL;
	static int16_t x51 = INT16_MIN;
	static volatile int8_t x52 = 2;

	t8 = (x49/((x50==x51)<x52));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x53 = INT16_MIN;
	int8_t x54 = -22;
	int64_t x55 = INT64_MAX;
	uint32_t x56 = 31333696U;
	volatile int32_t t9 = 10499;

	t9 = (x53/((x54==x55)<x56));

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x90 = UINT32_MAX;
	int16_t x91 = INT16_MIN;
	int16_t x92 = INT16_MAX;
	volatile int32_t t10 = INT32_MIN;

	t10 = (x89/((x90==x91)<x92));

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x110 = -1;
	int64_t x111 = INT64_MIN;
	volatile int32_t t11 = 0;

	t11 = (x109/((x110==x111)<x112));

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x122 = UINT8_MAX;
	int8_t x123 = INT8_MIN;
	static uint16_t x124 = UINT16_MAX;
	static volatile uint64_t t12 = UINT64_MAX;

	t12 = (x121/((x122==x123)<x124));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x125 = INT8_MIN;
	uint16_t x126 = 2U;
	static volatile int64_t x128 = INT64_MAX;
	volatile int32_t t13 = 1;

	t13 = (x125/((x126==x127)<x128));

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int32_t x130 = INT32_MAX;
	static volatile int64_t x131 = -1LL;
	int16_t x132 = INT16_MAX;
	volatile int32_t t14 = -3831155;

	t14 = (x129/((x130==x131)<x132));

	if (t14 != 26) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x137 = -1;
	int16_t x139 = 3415;
	int64_t x140 = INT64_MAX;
	int32_t t15 = 14;

	t15 = (x137/((x138==x139)<x140));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x145 = -1;
	int64_t x146 = INT64_MIN;
	int8_t x147 = -1;
	int32_t x148 = INT32_MAX;
	int32_t t16 = 1;

	t16 = (x145/((x146==x147)<x148));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x149 = INT8_MAX;
	static int8_t x150 = INT8_MAX;
	uint64_t x151 = UINT64_MAX;
	uint32_t x152 = 118504964U;
	volatile int32_t t17 = 0;

	t17 = (x149/((x150==x151)<x152));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x153 = -1LL;
	int64_t x154 = INT64_MIN;
	volatile int64_t x156 = 3057150LL;
	int64_t t18 = 41430125LL;

	t18 = (x153/((x154==x155)<x156));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x157 = 0;
	uint64_t x158 = 9028099102LLU;
	int32_t x159 = 55048398;
	int32_t t19 = -51036;

	t19 = (x157/((x158==x159)<x160));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x161 = INT32_MIN;
	static volatile int16_t x162 = INT16_MIN;
	uint32_t x163 = 7993U;
	uint16_t x164 = UINT16_MAX;
	volatile int32_t t20 = INT32_MIN;

	t20 = (x161/((x162==x163)<x164));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x165 = 1102233;
	int16_t x166 = -1;
	int64_t x167 = INT64_MIN;
	static uint64_t x168 = 5550301036734810LLU;
	volatile int32_t t21 = 26019;

	t21 = (x165/((x166==x167)<x168));

	if (t21 != 1102233) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x173 = UINT8_MAX;
	volatile uint64_t x174 = 1370712LLU;
	int8_t x175 = -1;
	uint64_t x176 = 9915237523LLU;
	static volatile int32_t t22 = -182284878;

	t22 = (x173/((x174==x175)<x176));

	if (t22 != 255) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x185 = UINT64_MAX;
	volatile uint32_t x186 = 31860208U;
	static int64_t x187 = -8579542094313899LL;
	static uint32_t x188 = 10U;

	t23 = (x185/((x186==x187)<x188));

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x193 = UINT16_MAX;
	static volatile uint64_t x194 = UINT64_MAX;
	static uint8_t x195 = 19U;
	uint32_t x196 = 4342U;
	int32_t t24 = 93;

	t24 = (x193/((x194==x195)<x196));

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x201 = UINT8_MAX;
	int32_t x202 = 3216276;
	volatile int32_t t25 = -1;

	t25 = (x201/((x202==x203)<x204));

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x206 = 716828066U;
	int16_t x207 = -59;
	uint32_t x208 = 3575043U;
	volatile int32_t t26 = 63088339;

	t26 = (x205/((x206==x207)<x208));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x213 = INT8_MIN;
	static int16_t x214 = -1;
	int32_t x215 = -46;
	uint64_t x216 = 31135184LLU;
	volatile int32_t t27 = 788513513;

	t27 = (x213/((x214==x215)<x216));

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x229 = INT8_MAX;
	volatile int64_t x230 = -1LL;
	uint16_t x231 = UINT16_MAX;
	uint32_t x232 = 292717600U;
	volatile int32_t t28 = 552798702;

	t28 = (x229/((x230==x231)<x232));

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x234 = -8;
	volatile int16_t x236 = 6;

	t29 = (x233/((x234==x235)<x236));

	if (t29 != -128) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x238 = UINT32_MAX;
	static int32_t x239 = INT32_MIN;
	static uint16_t x240 = 92U;
	int32_t t30 = INT32_MIN;

	t30 = (x237/((x238==x239)<x240));

	if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x245 = INT64_MAX;
	uint32_t x246 = 3425890U;
	uint32_t x247 = 128458U;
	uint32_t x248 = 543448703U;
	int64_t t31 = INT64_MAX;

	t31 = (x245/((x246==x247)<x248));

	if (t31 != INT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x257 = INT16_MAX;
	static volatile int16_t x258 = INT16_MIN;
	int64_t x260 = INT64_MAX;

	t32 = (x257/((x258==x259)<x260));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x269 = INT8_MIN;
	int8_t x270 = -1;
	int16_t x271 = INT16_MIN;
	volatile uint8_t x272 = 9U;
	static int32_t t33 = 112613;

	t33 = (x269/((x270==x271)<x272));

	if (t33 != -128) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x281 = -1;
	int8_t x283 = 0;
	int16_t x284 = 290;
	volatile int32_t t34 = -2;

	t34 = (x281/((x282==x283)<x284));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x293 = 4;
	int8_t x294 = INT8_MIN;
	static int64_t x295 = -1LL;
	volatile uint64_t x296 = 1LLU;
	static volatile int32_t t35 = 65;

	t35 = (x293/((x294==x295)<x296));

	if (t35 != 4) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x297 = 130610U;
	int8_t x298 = INT8_MIN;
	int16_t x299 = INT16_MAX;
	uint32_t x300 = 362232778U;
	uint32_t t36 = 4439462U;

	t36 = (x297/((x298==x299)<x300));

	if (t36 != 130610U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x301 = 1;
	uint16_t x302 = 1U;
	int16_t x303 = INT16_MAX;
	uint16_t x304 = 565U;
	volatile int32_t t37 = 56264493;

	t37 = (x301/((x302==x303)<x304));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x305 = INT64_MAX;
	int64_t x306 = -3839996349000188081LL;
	uint32_t x307 = UINT32_MAX;
	volatile int64_t t38 = INT64_MAX;

	t38 = (x305/((x306==x307)<x308));

	if (t38 != INT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x309 = 25434U;
	int8_t x310 = -1;
	uint64_t x311 = UINT64_MAX;
	static uint64_t x312 = 26996810451LLU;
	volatile int32_t t39 = 62;

	t39 = (x309/((x310==x311)<x312));

	if (t39 != 25434) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x317 = -1;
	int16_t x319 = INT16_MAX;
	volatile uint8_t x320 = 17U;
	int32_t t40 = -267417600;

	t40 = (x317/((x318==x319)<x320));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x322 = UINT16_MAX;
	int32_t x323 = INT32_MIN;

	t41 = (x321/((x322==x323)<x324));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x326 = -1;
	volatile uint8_t x327 = 38U;
	static uint64_t x328 = 11044286461LLU;
	int64_t t42 = 15LL;

	t42 = (x325/((x326==x327)<x328));

	if (t42 != 20LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x330 = UINT16_MAX;
	static int32_t x331 = -1;
	uint32_t x332 = UINT32_MAX;
	static volatile int32_t t43 = 176254;

	t43 = (x329/((x330==x331)<x332));

	if (t43 != 93) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x333 = INT16_MIN;
	uint16_t x335 = 10529U;
	int32_t t44 = -1;

	t44 = (x333/((x334==x335)<x336));

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x353 = 855792;
	int64_t x354 = INT64_MAX;
	uint32_t x356 = 16563U;
	volatile int32_t t45 = -28264916;

	t45 = (x353/((x354==x355)<x356));

	if (t45 != 855792) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x361 = 3U;
	uint16_t x362 = 42U;
	uint16_t x363 = UINT16_MAX;
	static uint32_t x364 = 9589U;
	static volatile uint32_t t46 = 1119979U;

	t46 = (x361/((x362==x363)<x364));

	if (t46 != 3U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int16_t x370 = -1;
	volatile int32_t x371 = 4020060;
	uint16_t x372 = 167U;
	static volatile int32_t t47 = -2;

	t47 = (x369/((x370==x371)<x372));

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x373 = -1LL;
	static int64_t x376 = INT64_MAX;
	volatile int64_t t48 = -58375752101LL;

	t48 = (x373/((x374==x375)<x376));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x377 = -3408473;
	int8_t x378 = INT8_MAX;
	int64_t x379 = INT64_MIN;
	uint8_t x380 = UINT8_MAX;
	volatile int32_t t49 = -874483387;

	t49 = (x377/((x378==x379)<x380));

	if (t49 != -3408473) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x382 = -132;
	static int32_t x383 = -4371439;
	volatile uint32_t t50 = 536252554U;

	t50 = (x381/((x382==x383)<x384));

	if (t50 != 399U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x389 = INT64_MIN;
	volatile int8_t x390 = -1;
	volatile int8_t x391 = INT8_MIN;
	uint16_t x392 = UINT16_MAX;
	volatile int64_t t51 = INT64_MIN;

	t51 = (x389/((x390==x391)<x392));

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x393 = UINT16_MAX;
	volatile int16_t x395 = INT16_MIN;
	volatile int16_t x396 = INT16_MAX;
	volatile int32_t t52 = 35816533;

	t52 = (x393/((x394==x395)<x396));

	if (t52 != 65535) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x398 = UINT64_MAX;
	static uint32_t x399 = UINT32_MAX;
	volatile int64_t x400 = INT64_MAX;
	volatile int32_t t53 = -145;

	t53 = (x397/((x398==x399)<x400));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x401 = 202U;
	uint64_t x402 = 0LLU;
	static uint8_t x403 = 5U;
	int32_t x404 = 65;

	t54 = (x401/((x402==x403)<x404));

	if (t54 != 202) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x409 = INT64_MIN;
	int8_t x410 = -12;
	int16_t x411 = INT16_MIN;
	int8_t x412 = INT8_MAX;
	volatile int64_t t55 = INT64_MIN;

	t55 = (x409/((x410==x411)<x412));

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x421 = 37775U;
	static uint64_t x422 = 11242LLU;
	static int64_t x424 = 14247825121504760LL;

	t56 = (x421/((x422==x423)<x424));

	if (t56 != 37775U) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x429 = 9U;
	uint64_t x430 = 3824LLU;
	int8_t x431 = INT8_MIN;
	uint32_t t57 = 9U;

	t57 = (x429/((x430==x431)<x432));

	if (t57 != 9U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x433 = INT8_MIN;
	int32_t x435 = 6674;
	uint32_t x436 = 3U;

	t58 = (x433/((x434==x435)<x436));

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int8_t x437 = INT8_MIN;
	uint16_t x440 = UINT16_MAX;
	volatile int32_t t59 = -204785109;

	t59 = (x437/((x438==x439)<x440));

	if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x445 = -1;
	int16_t x447 = 1;
	uint16_t x448 = 1U;

	t60 = (x445/((x446==x447)<x448));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x451 = INT64_MIN;
	volatile uint32_t x452 = 11892U;

	t61 = (x449/((x450==x451)<x452));

	if (t61 != -1097) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x457 = INT32_MIN;
	int64_t x459 = -1LL;
	int8_t x460 = 14;
	int32_t t62 = INT32_MIN;

	t62 = (x457/((x458==x459)<x460));

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x461 = 80845U;
	int32_t x462 = -45389699;
	uint16_t x463 = 10263U;
	uint16_t x464 = 52U;
	static uint32_t t63 = 1413089U;

	t63 = (x461/((x462==x463)<x464));

	if (t63 != 80845U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x466 = INT64_MAX;
	static uint8_t x468 = 60U;
	volatile int64_t t64 = INT64_MAX;

	t64 = (x465/((x466==x467)<x468));

	if (t64 != INT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x475 = UINT32_MAX;
	uint8_t x476 = UINT8_MAX;
	volatile uint32_t t65 = 0U;

	t65 = (x473/((x474==x475)<x476));

	if (t65 != 330U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x477 = 324;
	int32_t x478 = INT32_MAX;
	uint32_t x479 = 179U;
	int32_t t66 = -433;

	t66 = (x477/((x478==x479)<x480));

	if (t66 != 324) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x481 = 0U;
	int32_t x482 = INT32_MIN;
	static uint32_t x483 = UINT32_MAX;
	uint8_t x484 = UINT8_MAX;
	volatile int32_t t67 = 40;

	t67 = (x481/((x482==x483)<x484));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x493 = 363LLU;
	uint32_t x494 = UINT32_MAX;
	volatile int64_t x495 = INT64_MIN;
	int32_t x496 = INT32_MAX;
	static volatile uint64_t t68 = 256613782LLU;

	t68 = (x493/((x494==x495)<x496));

	if (t68 != 363LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x497 = 53U;
	int8_t x500 = INT8_MAX;
	volatile int32_t t69 = -855954716;

	t69 = (x497/((x498==x499)<x500));

	if (t69 != 53) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x505 = INT32_MIN;
	int8_t x506 = 7;
	int32_t x507 = 663912;
	int64_t x508 = INT64_MAX;

	t70 = (x505/((x506==x507)<x508));

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x523 = 207;
	volatile uint8_t x524 = 12U;
	static int32_t t71 = -1511676;

	t71 = (x521/((x522==x523)<x524));

	if (t71 != 30315) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x525 = 942498720;
	int32_t x527 = INT32_MIN;
	uint64_t x528 = UINT64_MAX;
	volatile int32_t t72 = 271051879;

	t72 = (x525/((x526==x527)<x528));

	if (t72 != 942498720) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x529 = -1;
	volatile uint16_t x530 = 1823U;
	volatile int16_t x531 = INT16_MIN;
	uint8_t x532 = 1U;

	t73 = (x529/((x530==x531)<x532));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x533 = INT16_MIN;
	int64_t x534 = INT64_MIN;
	uint8_t x535 = 0U;
	int64_t x536 = INT64_MAX;
	volatile int32_t t74 = -19057;

	t74 = (x533/((x534==x535)<x536));

	if (t74 != -32768) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x537 = -1;
	int64_t x538 = INT64_MIN;
	static int8_t x539 = INT8_MIN;
	uint32_t x540 = UINT32_MAX;
	static volatile int32_t t75 = -1036;

	t75 = (x537/((x538==x539)<x540));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x541 = UINT32_MAX;
	volatile uint16_t x542 = 1731U;
	static int8_t x543 = -1;
	uint32_t t76 = UINT32_MAX;

	t76 = (x541/((x542==x543)<x544));

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x545 = -303;
	static volatile int64_t x546 = -1LL;
	int32_t x548 = 283;
	int32_t t77 = 939517828;

	t77 = (x545/((x546==x547)<x548));

	if (t77 != -303) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x549 = 51LL;
	int32_t x550 = 6271;
	volatile int16_t x552 = 72;
	volatile int64_t t78 = -2133937602710352525LL;

	t78 = (x549/((x550==x551)<x552));

	if (t78 != 51LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x553 = INT16_MIN;
	static volatile int8_t x554 = INT8_MAX;
	uint64_t x555 = UINT64_MAX;
	volatile uint64_t x556 = UINT64_MAX;
	volatile int32_t t79 = 1;

	t79 = (x553/((x554==x555)<x556));

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x557 = UINT16_MAX;
	int8_t x559 = 0;
	volatile int32_t t80 = 18917;

	t80 = (x557/((x558==x559)<x560));

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x561 = INT16_MAX;
	int64_t x562 = -1LL;
	int64_t x563 = -6328925862414108LL;
	volatile uint32_t x564 = UINT32_MAX;
	int32_t t81 = -17;

	t81 = (x561/((x562==x563)<x564));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x581 = INT32_MIN;
	int32_t x583 = 0;
	volatile uint8_t x584 = 92U;

	t82 = (x581/((x582==x583)<x584));

	if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x589 = 19796066303843902LL;
	uint16_t x590 = 1474U;
	volatile int8_t x591 = 1;
	int64_t x592 = INT64_MAX;
	volatile int64_t t83 = 709623232327939714LL;

	t83 = (x589/((x590==x591)<x592));

	if (t83 != 19796066303843902LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x593 = UINT32_MAX;
	static uint32_t x595 = 562039U;
	uint16_t x596 = UINT16_MAX;
	uint32_t t84 = UINT32_MAX;

	t84 = (x593/((x594==x595)<x596));

	if (t84 != UINT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x601 = 28231258393670LLU;
	int8_t x602 = INT8_MIN;
	int64_t x603 = INT64_MIN;
	uint8_t x604 = 15U;
	uint64_t t85 = 264892720598895LLU;

	t85 = (x601/((x602==x603)<x604));

	if (t85 != 28231258393670LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x605 = -1;
	int32_t x607 = INT32_MIN;
	uint8_t x608 = 1U;
	int32_t t86 = -84261;

	t86 = (x605/((x606==x607)<x608));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x617 = UINT32_MAX;
	uint16_t x618 = UINT16_MAX;
	int32_t x619 = -670387080;
	volatile uint32_t t87 = UINT32_MAX;

	t87 = (x617/((x618==x619)<x620));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x622 = 1U;
	int16_t x623 = -1;
	uint16_t x624 = UINT16_MAX;
	int32_t t88 = INT32_MIN;

	t88 = (x621/((x622==x623)<x624));

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x633 = -254892;
	volatile int16_t x635 = -514;
	int64_t x636 = 42819633LL;
	int32_t t89 = 18236223;

	t89 = (x633/((x634==x635)<x636));

	if (t89 != -254892) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x645 = -1LL;
	static int32_t x646 = INT32_MIN;
	int32_t x647 = -5269;
	uint32_t x648 = 1426821U;
	int64_t t90 = 7150237026159728LL;

	t90 = (x645/((x646==x647)<x648));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x649 = INT8_MIN;
	static int64_t x650 = INT64_MIN;
	volatile uint16_t x652 = 2309U;
	int32_t t91 = 5007;

	t91 = (x649/((x650==x651)<x652));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x655 = 68U;
	uint64_t x656 = 1095LLU;

	t92 = (x653/((x654==x655)<x656));

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x665 = 1LLU;
	volatile int16_t x666 = -78;
	int64_t x667 = INT64_MIN;
	volatile uint64_t t93 = 26649671LLU;

	t93 = (x665/((x666==x667)<x668));

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x673 = INT32_MIN;
	uint64_t x676 = 896537696614LLU;
	int32_t t94 = INT32_MIN;

	t94 = (x673/((x674==x675)<x676));

	if (t94 != INT32_MIN) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x677 = -55;
	static int8_t x678 = -1;
	static volatile int8_t x679 = INT8_MAX;
	uint64_t x680 = UINT64_MAX;

	t95 = (x677/((x678==x679)<x680));

	if (t95 != -55) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x681 = -45398871;
	uint16_t x682 = UINT16_MAX;
	volatile int16_t x683 = INT16_MAX;
	uint64_t x684 = 1646420935083955LLU;
	int32_t t96 = -81108;

	t96 = (x681/((x682==x683)<x684));

	if (t96 != -45398871) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x685 = 175282789;
	int16_t x686 = INT16_MIN;
	static volatile int8_t x687 = INT8_MIN;
	static uint32_t x688 = 9U;
	volatile int32_t t97 = 837;

	t97 = (x685/((x686==x687)<x688));

	if (t97 != 175282789) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x693 = 102718831U;
	volatile uint8_t x694 = 2U;
	volatile uint16_t x696 = UINT16_MAX;

	t98 = (x693/((x694==x695)<x696));

	if (t98 != 102718831U) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x701 = -88976359210336LL;
	int32_t x702 = -57510;
	volatile int8_t x703 = INT8_MIN;

	t99 = (x701/((x702==x703)<x704));

	if (t99 != -88976359210336LL) { NG(); } else { ; }
	
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

