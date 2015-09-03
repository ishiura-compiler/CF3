#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = 963;
int32_t x11 = 27343256;
volatile int32_t t3 = 303377;
volatile int16_t x33 = -1;
volatile uint32_t x38 = 995840489U;
static volatile int32_t t5 = 136556;
int32_t t6 = -3117491;
volatile int32_t x75 = INT32_MIN;
volatile int32_t t9 = 42542411;
volatile uint8_t x88 = 18U;
int64_t x90 = 1656157802LL;
uint16_t x92 = 1U;
static int32_t x103 = -7368;
int16_t x136 = 569;
volatile int32_t t16 = -48403;
int16_t x145 = -80;
int64_t x150 = INT64_MIN;
static int16_t x156 = INT16_MIN;
int16_t x158 = INT16_MIN;
volatile int32_t x185 = 6994127;
uint16_t x188 = 20U;
int16_t x197 = INT16_MAX;
int8_t x204 = INT8_MAX;
uint8_t x222 = 30U;
int64_t x224 = INT64_MIN;
volatile int32_t t24 = -955074843;
static uint8_t x277 = 2U;
static int16_t x289 = -14;
volatile int32_t x290 = INT32_MAX;
int16_t x292 = 10;
int8_t x296 = 11;
static uint64_t x305 = 19401LLU;
static int16_t x306 = 2043;
int32_t x317 = INT32_MIN;
static uint64_t x342 = UINT64_MAX;
uint8_t x344 = 27U;
uint8_t x366 = 43U;
static int32_t x367 = 444692473;
int8_t x368 = 12;
static volatile int32_t t38 = -752;
volatile int32_t t39 = 5;
static int16_t x399 = INT16_MAX;
int32_t t41 = -192305;
int16_t x412 = 5;
static int16_t x423 = 26;
static volatile int32_t t43 = -1471;
int8_t x429 = INT8_MIN;
uint8_t x438 = UINT8_MAX;
static int32_t t46 = 964;
int32_t t47 = -28;
uint64_t x466 = 74539625751683038LLU;
int32_t t48 = -2076340;
int16_t x491 = 2748;
int32_t t50 = -7;
volatile int32_t t51 = 4;
int8_t x518 = -1;
int8_t x538 = 0;
volatile int64_t x543 = INT64_MIN;
volatile int32_t t57 = 3;
volatile int16_t x569 = INT16_MAX;
static int16_t x570 = -1;
int64_t x571 = INT64_MIN;
uint16_t x576 = 12784U;
volatile int8_t x583 = 24;
int32_t t61 = 0;
volatile int8_t x594 = -14;
static volatile int32_t t63 = -134244;
volatile int32_t t64 = -4;
volatile uint8_t x631 = 8U;
uint32_t x649 = 151U;
int16_t x650 = INT16_MIN;
int8_t x657 = 2;
int64_t x659 = INT64_MIN;
int64_t x667 = INT64_MIN;
int32_t x670 = 24279;
uint16_t x702 = 3U;
static int64_t x709 = -1LL;
int64_t x711 = INT64_MIN;
int32_t t79 = -83182;
static int16_t x749 = INT16_MIN;
uint64_t x750 = 11740855917561LLU;
volatile int16_t x752 = INT16_MAX;
int64_t x755 = INT64_MIN;
static int8_t x765 = INT8_MAX;
static int16_t x768 = INT16_MAX;
volatile int32_t t82 = -1987;
uint8_t x776 = 2U;
int32_t t83 = 18073997;
volatile int32_t t84 = 184;
volatile int32_t t86 = -171880662;
uint8_t x814 = 29U;
uint32_t x829 = UINT32_MAX;
int8_t x833 = -13;
volatile int32_t x835 = INT32_MIN;
volatile uint32_t x836 = 15148271U;
int32_t t89 = -45242403;
int64_t x855 = INT64_MIN;
uint32_t x856 = 21U;
volatile int32_t t91 = 0;
int32_t x858 = INT32_MIN;
int16_t x898 = 1;
int32_t x899 = INT32_MAX;
volatile int32_t t98 = 349;


void f0(void) {
	static int8_t x2 = 10;
	static volatile int32_t x3 = 15882;
	uint64_t x4 = 23LLU;
	int32_t t0 = -2612;

	t0 = ((x1<=x2)>>(x3&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 52540U;
	volatile int8_t x6 = INT8_MAX;
	uint8_t x7 = 3U;
	volatile uint8_t x8 = 2U;
	int32_t t1 = 804551;

	t1 = ((x5<=x6)>>(x7&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	static uint8_t x10 = 1U;
	uint8_t x12 = 24U;
	static volatile int32_t t2 = 751637;

	t2 = ((x9<=x10)>>(x11&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x29 = INT32_MIN;
	int16_t x30 = INT16_MAX;
	uint8_t x31 = 24U;
	int64_t x32 = INT64_MAX;

	t3 = ((x29<=x30)>>(x31&x32));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x34 = -9;
	static int32_t x35 = INT32_MIN;
	int32_t x36 = 223182;
	volatile int32_t t4 = -45743;

	t4 = ((x33<=x34)>>(x35&x36));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x37 = -1LL;
	uint16_t x39 = 0U;
	int64_t x40 = INT64_MIN;

	t5 = ((x37<=x38)>>(x39&x40));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x41 = 4363638LL;
	uint32_t x42 = UINT32_MAX;
	int8_t x43 = 5;
	int16_t x44 = -1;

	t6 = ((x41<=x42)>>(x43&x44));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x57 = INT64_MAX;
	static int8_t x58 = 38;
	volatile int32_t x59 = INT32_MAX;
	uint8_t x60 = 1U;
	volatile int32_t t7 = -871;

	t7 = ((x57<=x58)>>(x59&x60));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x65 = -7671;
	int16_t x66 = INT16_MAX;
	int32_t x67 = INT32_MIN;
	uint32_t x68 = 59113U;
	int32_t t8 = 7;

	t8 = ((x65<=x66)>>(x67&x68));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x73 = INT8_MIN;
	uint32_t x74 = 368247U;
	uint8_t x76 = UINT8_MAX;

	t9 = ((x73<=x74)>>(x75&x76));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x77 = 14U;
	uint32_t x78 = 505355U;
	int64_t x79 = INT64_MAX;
	uint16_t x80 = 5U;
	volatile int32_t t10 = 105937;

	t10 = ((x77<=x78)>>(x79&x80));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x85 = INT16_MAX;
	uint16_t x86 = 1473U;
	int8_t x87 = -4;
	static volatile int32_t t11 = -2098261;

	t11 = ((x85<=x86)>>(x87&x88));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x89 = 0;
	static int64_t x91 = -1LL;
	int32_t t12 = -262707351;

	t12 = ((x89<=x90)>>(x91&x92));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x101 = 9U;
	static int32_t x102 = INT32_MIN;
	int8_t x104 = 8;
	volatile int32_t t13 = -171216;

	t13 = ((x101<=x102)>>(x103&x104));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x105 = INT16_MIN;
	int64_t x106 = INT64_MIN;
	int64_t x107 = INT64_MIN;
	int8_t x108 = INT8_MAX;
	static int32_t t14 = 11475;

	t14 = ((x105<=x106)>>(x107&x108));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x117 = 83U;
	int8_t x118 = -1;
	uint8_t x119 = 5U;
	volatile int16_t x120 = -1;
	int32_t t15 = 382509;

	t15 = ((x117<=x118)>>(x119&x120));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x133 = 3144;
	uint16_t x134 = 3282U;
	int64_t x135 = 0LL;

	t16 = ((x133<=x134)>>(x135&x136));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x146 = -52511331196495LL;
	uint16_t x147 = 48U;
	volatile int64_t x148 = INT64_MIN;
	volatile int32_t t17 = -1;

	t17 = ((x145<=x146)>>(x147&x148));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x149 = UINT8_MAX;
	int8_t x151 = INT8_MAX;
	static uint8_t x152 = 24U;
	volatile int32_t t18 = -3;

	t18 = ((x149<=x150)>>(x151&x152));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x153 = UINT32_MAX;
	uint8_t x154 = UINT8_MAX;
	static int32_t x155 = 175;
	int32_t t19 = 101;

	t19 = ((x153<=x154)>>(x155&x156));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x157 = UINT32_MAX;
	volatile uint8_t x159 = 0U;
	uint16_t x160 = UINT16_MAX;
	static int32_t t20 = -14573320;

	t20 = ((x157<=x158)>>(x159&x160));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x186 = INT32_MIN;
	volatile uint16_t x187 = 1608U;
	int32_t t21 = 611037;

	t21 = ((x185<=x186)>>(x187&x188));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x198 = INT16_MIN;
	int16_t x199 = 19;
	uint16_t x200 = 2887U;
	int32_t t22 = 87301433;

	t22 = ((x197<=x198)>>(x199&x200));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x201 = INT16_MAX;
	static uint32_t x202 = 424U;
	volatile int32_t x203 = INT32_MIN;
	volatile int32_t t23 = 5461353;

	t23 = ((x201<=x202)>>(x203&x204));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x221 = -1LL;
	volatile uint16_t x223 = 149U;

	t24 = ((x221<=x222)>>(x223&x224));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x233 = 9149444064658110LL;
	static int8_t x234 = 1;
	volatile int64_t x235 = INT64_MIN;
	volatile uint64_t x236 = 29100599918438561LLU;
	volatile int32_t t25 = 90;

	t25 = ((x233<=x234)>>(x235&x236));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x245 = -1;
	int32_t x246 = INT32_MAX;
	int64_t x247 = INT64_MIN;
	int32_t x248 = 1;
	volatile int32_t t26 = -34413;

	t26 = ((x245<=x246)>>(x247&x248));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x257 = INT16_MIN;
	static uint16_t x258 = UINT16_MAX;
	static int16_t x259 = 1;
	int64_t x260 = INT64_MAX;
	volatile int32_t t27 = -332052396;

	t27 = ((x257<=x258)>>(x259&x260));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x265 = -1;
	uint16_t x266 = 21467U;
	int32_t x267 = INT32_MAX;
	uint8_t x268 = 0U;
	volatile int32_t t28 = -4399612;

	t28 = ((x265<=x266)>>(x267&x268));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x269 = 15938;
	uint8_t x270 = 0U;
	static volatile int64_t x271 = INT64_MIN;
	uint32_t x272 = 42937835U;
	static int32_t t29 = 863529;

	t29 = ((x269<=x270)>>(x271&x272));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x278 = 0U;
	int16_t x279 = INT16_MIN;
	uint8_t x280 = 4U;
	int32_t t30 = -23560842;

	t30 = ((x277<=x278)>>(x279&x280));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x291 = UINT8_MAX;
	volatile int32_t t31 = -29792364;

	t31 = ((x289<=x290)>>(x291&x292));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x293 = -1;
	volatile int64_t x294 = -53LL;
	uint32_t x295 = 408U;
	int32_t t32 = -1;

	t32 = ((x293<=x294)>>(x295&x296));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x307 = INT32_MIN;
	uint8_t x308 = UINT8_MAX;
	int32_t t33 = 531266;

	t33 = ((x305<=x306)>>(x307&x308));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x309 = -15216041LL;
	static int32_t x310 = INT32_MIN;
	volatile uint16_t x311 = 2U;
	int16_t x312 = INT16_MIN;
	volatile int32_t t34 = 3712880;

	t34 = ((x309<=x310)>>(x311&x312));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint32_t x318 = 3U;
	uint8_t x319 = 25U;
	volatile int16_t x320 = -3617;
	volatile int32_t t35 = 1;

	t35 = ((x317<=x318)>>(x319&x320));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x341 = -1;
	int16_t x343 = INT16_MAX;
	volatile int32_t t36 = 6650049;

	t36 = ((x341<=x342)>>(x343&x344));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x349 = -161343;
	int32_t x350 = -392822;
	int16_t x351 = 0;
	static int64_t x352 = -1LL;
	volatile int32_t t37 = 29550;

	t37 = ((x349<=x350)>>(x351&x352));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x365 = -917;

	t38 = ((x365<=x366)>>(x367&x368));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x385 = -31;
	int16_t x386 = -1;
	uint64_t x387 = 15LLU;
	uint8_t x388 = UINT8_MAX;

	t39 = ((x385<=x386)>>(x387&x388));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x389 = -1;
	int16_t x390 = -1;
	uint16_t x391 = 280U;
	uint32_t x392 = 15U;
	volatile int32_t t40 = -36;

	t40 = ((x389<=x390)>>(x391&x392));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x397 = INT16_MIN;
	volatile uint64_t x398 = 2132933504236LLU;
	uint8_t x400 = 18U;

	t41 = ((x397<=x398)>>(x399&x400));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x409 = INT8_MIN;
	uint64_t x410 = 410971115196LLU;
	static int64_t x411 = 1878778267704LL;
	int32_t t42 = -2631574;

	t42 = ((x409<=x410)>>(x411&x412));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x421 = -89416;
	int8_t x422 = 1;
	volatile uint64_t x424 = 306066443218388LLU;

	t43 = ((x421<=x422)>>(x423&x424));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x425 = INT64_MIN;
	uint64_t x426 = 197925657189676676LLU;
	int64_t x427 = 19289LL;
	int16_t x428 = INT16_MIN;
	int32_t t44 = -60;

	t44 = ((x425<=x426)>>(x427&x428));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint8_t x430 = 4U;
	static uint8_t x431 = 2U;
	uint32_t x432 = UINT32_MAX;
	int32_t t45 = 129607;

	t45 = ((x429<=x430)>>(x431&x432));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x437 = -1;
	int32_t x439 = 148;
	uint32_t x440 = 1U;

	t46 = ((x437<=x438)>>(x439&x440));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x441 = INT64_MAX;
	uint64_t x442 = UINT64_MAX;
	int32_t x443 = INT32_MIN;
	uint8_t x444 = 1U;

	t47 = ((x441<=x442)>>(x443&x444));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x465 = 15U;
	int8_t x467 = INT8_MAX;
	int8_t x468 = INT8_MIN;

	t48 = ((x465<=x466)>>(x467&x468));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint16_t x473 = 2244U;
	volatile int64_t x474 = INT64_MIN;
	static uint16_t x475 = 0U;
	int32_t x476 = 11624;
	static int32_t t49 = -2;

	t49 = ((x473<=x474)>>(x475&x476));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x489 = 152U;
	volatile uint32_t x490 = 1301294U;
	uint32_t x492 = 0U;

	t50 = ((x489<=x490)>>(x491&x492));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x497 = -11055;
	int32_t x498 = -1;
	int32_t x499 = -117837;
	static uint8_t x500 = 91U;

	t51 = ((x497<=x498)>>(x499&x500));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x517 = INT16_MIN;
	static int32_t x519 = 5;
	uint8_t x520 = 1U;
	int32_t t52 = 103508;

	t52 = ((x517<=x518)>>(x519&x520));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x521 = UINT16_MAX;
	static volatile int64_t x522 = -4376079LL;
	volatile uint32_t x523 = 1U;
	int8_t x524 = -27;
	volatile int32_t t53 = -85142853;

	t53 = ((x521<=x522)>>(x523&x524));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x537 = UINT64_MAX;
	int8_t x539 = 60;
	volatile int32_t x540 = INT32_MIN;
	static int32_t t54 = 70879118;

	t54 = ((x537<=x538)>>(x539&x540));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x541 = 429;
	int16_t x542 = 477;
	int64_t x544 = INT64_MAX;
	volatile int32_t t55 = 143486;

	t55 = ((x541<=x542)>>(x543&x544));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x549 = -57960321184LL;
	int64_t x550 = -884599473839LL;
	static int32_t x551 = INT32_MIN;
	uint64_t x552 = 16LLU;
	volatile int32_t t56 = -10807744;

	t56 = ((x549<=x550)>>(x551&x552));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x553 = INT8_MAX;
	uint32_t x554 = 88398750U;
	int32_t x555 = INT32_MAX;
	static int16_t x556 = 2;

	t57 = ((x553<=x554)>>(x555&x556));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x561 = INT8_MAX;
	int32_t x562 = -15743;
	int64_t x563 = INT64_MIN;
	volatile uint32_t x564 = 62343U;
	volatile int32_t t58 = 3715397;

	t58 = ((x561<=x562)>>(x563&x564));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x572 = INT32_MAX;
	int32_t t59 = 2;

	t59 = ((x569<=x570)>>(x571&x572));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x573 = UINT32_MAX;
	int32_t x574 = 211901723;
	int64_t x575 = INT64_MIN;
	int32_t t60 = 882224000;

	t60 = ((x573<=x574)>>(x575&x576));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x581 = UINT32_MAX;
	int32_t x582 = INT32_MAX;
	int32_t x584 = INT32_MIN;

	t61 = ((x581<=x582)>>(x583&x584));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x593 = -152485712LL;
	uint32_t x595 = UINT32_MAX;
	uint8_t x596 = 1U;
	int32_t t62 = -2885301;

	t62 = ((x593<=x594)>>(x595&x596));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x597 = 1478519;
	uint16_t x598 = 1U;
	volatile uint32_t x599 = 1U;
	int8_t x600 = -1;

	t63 = ((x597<=x598)>>(x599&x600));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x601 = 101U;
	int16_t x602 = INT16_MIN;
	static uint8_t x603 = 0U;
	static int8_t x604 = -3;

	t64 = ((x601<=x602)>>(x603&x604));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x625 = UINT32_MAX;
	volatile int64_t x626 = -1749LL;
	static uint64_t x627 = 128015LLU;
	static uint32_t x628 = 6U;
	int32_t t65 = -4318;

	t65 = ((x625<=x626)>>(x627&x628));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x629 = -1;
	int64_t x630 = -1LL;
	static int32_t x632 = -1;
	static int32_t t66 = -7871608;

	t66 = ((x629<=x630)>>(x631&x632));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x633 = INT8_MAX;
	static volatile uint8_t x634 = 29U;
	uint8_t x635 = UINT8_MAX;
	static uint8_t x636 = 2U;
	volatile int32_t t67 = -1;

	t67 = ((x633<=x634)>>(x635&x636));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x645 = INT32_MIN;
	int8_t x646 = -1;
	int8_t x647 = 7;
	volatile uint64_t x648 = 400951LLU;
	int32_t t68 = 260;

	t68 = ((x645<=x646)>>(x647&x648));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x651 = 25U;
	static uint16_t x652 = UINT16_MAX;
	volatile int32_t t69 = -16000684;

	t69 = ((x649<=x650)>>(x651&x652));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x658 = INT8_MAX;
	int64_t x660 = INT64_MAX;
	int32_t t70 = 3;

	t70 = ((x657<=x658)>>(x659&x660));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x665 = -89;
	uint16_t x666 = 30437U;
	volatile int16_t x668 = 1743;
	int32_t t71 = -129159;

	t71 = ((x665<=x666)>>(x667&x668));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x669 = 77284912;
	uint64_t x671 = 270LLU;
	volatile uint8_t x672 = UINT8_MAX;
	static volatile int32_t t72 = -1845;

	t72 = ((x669<=x670)>>(x671&x672));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x681 = 418LLU;
	int32_t x682 = -1;
	int16_t x683 = INT16_MIN;
	static uint16_t x684 = 270U;
	int32_t t73 = 0;

	t73 = ((x681<=x682)>>(x683&x684));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x689 = INT64_MIN;
	int8_t x690 = INT8_MIN;
	int64_t x691 = INT64_MIN;
	int64_t x692 = INT64_MAX;
	volatile int32_t t74 = -10;

	t74 = ((x689<=x690)>>(x691&x692));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x693 = 61337927;
	uint8_t x694 = UINT8_MAX;
	static int64_t x695 = -29191394162LL;
	int8_t x696 = 0;
	int32_t t75 = 6767;

	t75 = ((x693<=x694)>>(x695&x696));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x701 = INT64_MIN;
	uint8_t x703 = 6U;
	int32_t x704 = INT32_MIN;
	int32_t t76 = 13906;

	t76 = ((x701<=x702)>>(x703&x704));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x710 = UINT32_MAX;
	int32_t x712 = INT32_MAX;
	static volatile int32_t t77 = -5702;

	t77 = ((x709<=x710)>>(x711&x712));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x713 = INT64_MIN;
	static volatile int16_t x714 = INT16_MAX;
	uint64_t x715 = 340464199833309LLU;
	int16_t x716 = 0;
	volatile int32_t t78 = -12914;

	t78 = ((x713<=x714)>>(x715&x716));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x729 = -1LL;
	uint64_t x730 = 15076516108681LLU;
	int8_t x731 = 7;
	uint32_t x732 = 59448505U;

	t79 = ((x729<=x730)>>(x731&x732));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x751 = 0U;
	volatile int32_t t80 = 962824874;

	t80 = ((x749<=x750)>>(x751&x752));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x753 = 61U;
	int32_t x754 = INT32_MAX;
	uint8_t x756 = 70U;
	static volatile int32_t t81 = -35370;

	t81 = ((x753<=x754)>>(x755&x756));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x766 = 37U;
	uint16_t x767 = 14U;

	t82 = ((x765<=x766)>>(x767&x768));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x773 = INT64_MIN;
	int16_t x774 = 5;
	uint8_t x775 = 22U;

	t83 = ((x773<=x774)>>(x775&x776));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x781 = UINT16_MAX;
	int64_t x782 = -111945LL;
	volatile int8_t x783 = INT8_MAX;
	volatile int8_t x784 = INT8_MIN;

	t84 = ((x781<=x782)>>(x783&x784));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x793 = INT32_MAX;
	int8_t x794 = INT8_MAX;
	volatile uint32_t x795 = 5296U;
	static int16_t x796 = INT16_MIN;
	int32_t t85 = 7917;

	t85 = ((x793<=x794)>>(x795&x796));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x809 = 19014LL;
	volatile uint8_t x810 = 2U;
	volatile int64_t x811 = INT64_MIN;
	static int64_t x812 = 4083697804LL;

	t86 = ((x809<=x810)>>(x811&x812));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x813 = INT64_MIN;
	static uint16_t x815 = 1U;
	int8_t x816 = 0;
	static int32_t t87 = -624298781;

	t87 = ((x813<=x814)>>(x815&x816));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x830 = UINT64_MAX;
	int8_t x831 = -1;
	int8_t x832 = 0;
	volatile int32_t t88 = 0;

	t88 = ((x829<=x830)>>(x831&x832));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x834 = INT64_MIN;

	t89 = ((x833<=x834)>>(x835&x836));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint64_t x845 = 1134738005LLU;
	volatile uint32_t x846 = UINT32_MAX;
	uint16_t x847 = 961U;
	uint8_t x848 = 33U;
	int32_t t90 = -576;

	t90 = ((x845<=x846)>>(x847&x848));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x853 = INT8_MIN;
	static volatile uint8_t x854 = 1U;

	t91 = ((x853<=x854)>>(x855&x856));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x857 = -1;
	static int32_t x859 = -1;
	uint16_t x860 = 0U;
	volatile int32_t t92 = -6311891;

	t92 = ((x857<=x858)>>(x859&x860));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x869 = 54329782000LLU;
	int64_t x870 = -1LL;
	static int64_t x871 = INT64_MIN;
	uint16_t x872 = UINT16_MAX;
	static int32_t t93 = 27;

	t93 = ((x869<=x870)>>(x871&x872));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x873 = INT16_MIN;
	uint16_t x874 = 21U;
	uint32_t x875 = 860516959U;
	volatile int64_t x876 = INT64_MIN;
	int32_t t94 = -22848286;

	t94 = ((x873<=x874)>>(x875&x876));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x877 = 5926;
	int32_t x878 = INT32_MAX;
	int16_t x879 = INT16_MIN;
	int16_t x880 = 7309;
	volatile int32_t t95 = 1;

	t95 = ((x877<=x878)>>(x879&x880));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x881 = INT16_MAX;
	volatile int16_t x882 = INT16_MIN;
	static int16_t x883 = 1709;
	static volatile int16_t x884 = 1;
	volatile int32_t t96 = -30692227;

	t96 = ((x881<=x882)>>(x883&x884));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x893 = INT32_MIN;
	static int16_t x894 = INT16_MAX;
	volatile uint8_t x895 = 5U;
	uint16_t x896 = 269U;
	int32_t t97 = -15822;

	t97 = ((x893<=x894)>>(x895&x896));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x897 = 1U;
	volatile int32_t x900 = INT32_MIN;

	t98 = ((x897<=x898)>>(x899&x900));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x901 = 6;
	int8_t x902 = 7;
	int64_t x903 = INT64_MIN;
	uint8_t x904 = 2U;
	int32_t t99 = 60207;

	t99 = ((x901<=x902)>>(x903&x904));

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

