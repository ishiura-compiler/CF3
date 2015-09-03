#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = -1;
volatile int32_t t1 = 152;
uint16_t x13 = 401U;
static volatile int32_t t3 = 1;
static int16_t x33 = INT16_MAX;
int32_t t5 = -7678099;
volatile uint32_t t6 = 427U;
int64_t x65 = INT64_MAX;
static uint16_t x73 = UINT16_MAX;
volatile uint32_t x75 = 220729U;
int8_t x77 = INT8_MIN;
int32_t t9 = 6056;
static volatile uint64_t t10 = 1391779485954LLU;
int8_t x93 = 1;
int16_t x96 = INT16_MIN;
static int16_t x127 = 960;
volatile int64_t x129 = INT64_MAX;
int8_t x130 = INT8_MAX;
static uint16_t x131 = UINT16_MAX;
int16_t x132 = 19;
volatile uint64_t t17 = 394203031699172704LLU;
static uint8_t x157 = UINT8_MAX;
int8_t x167 = INT8_MIN;
uint32_t x194 = 568U;
static volatile int32_t x195 = -1;
volatile uint16_t x196 = 957U;
int8_t x223 = INT8_MAX;
int32_t t24 = -197974;
int64_t x265 = -1LL;
uint64_t x278 = 1953509528626538449LLU;
volatile uint8_t x282 = UINT8_MAX;
static int64_t x305 = INT64_MAX;
volatile uint16_t x312 = UINT16_MAX;
volatile int32_t t33 = -26;
volatile int16_t x329 = -1;
volatile int64_t x338 = 1906804577930272LL;
volatile int64_t t36 = 265752405LL;
int64_t x361 = INT64_MAX;
int8_t x367 = INT8_MIN;
int8_t x368 = INT8_MIN;
static int32_t x383 = 442;
uint32_t x391 = 23959U;
static volatile uint64_t x392 = 327136607330LLU;
static uint32_t x401 = UINT32_MAX;
int8_t x405 = -1;
int32_t x413 = 30;
int32_t t45 = 6;
int32_t x425 = -110;
uint64_t x426 = UINT64_MAX;
int16_t x430 = INT16_MAX;
volatile uint32_t t47 = 1196763U;
uint32_t x437 = UINT32_MAX;
static volatile uint8_t x439 = UINT8_MAX;
uint16_t x446 = 1041U;
int32_t t49 = 6286;
int64_t t50 = -5565328925LL;
int16_t x462 = INT16_MAX;
volatile int16_t x479 = 3375;
static uint32_t t55 = 123290942U;
static int64_t x500 = -961LL;
uint32_t x554 = UINT32_MAX;
volatile uint64_t t63 = 6580522LLU;
int8_t x591 = INT8_MAX;
volatile uint64_t t64 = 1258793510514336871LLU;
int64_t x632 = -1LL;
uint16_t x660 = UINT16_MAX;
int8_t x666 = 0;
uint32_t x667 = UINT32_MAX;
int32_t x679 = 9097168;
int16_t x680 = INT16_MIN;
int64_t x699 = -1LL;
int16_t x703 = -1046;
volatile uint64_t t76 = 37869835831246234LLU;
volatile int8_t x709 = INT8_MIN;
volatile int8_t x714 = INT8_MAX;
static uint32_t x715 = UINT32_MAX;
int64_t x719 = 2358LL;
uint8_t x720 = UINT8_MAX;
uint16_t x736 = UINT16_MAX;
volatile uint32_t x740 = 97452U;
uint64_t t82 = 9212212439673861439LLU;
int64_t x751 = -1148039542528851838LL;
static volatile uint32_t t84 = 2446U;
static int32_t x768 = INT32_MIN;
uint32_t x793 = UINT32_MAX;
uint8_t x794 = 1U;
int16_t x795 = INT16_MIN;
int32_t x796 = -219271;
int16_t x801 = INT16_MIN;
int32_t x804 = INT32_MIN;
static int32_t x820 = INT32_MIN;
volatile uint32_t x829 = 47106U;
volatile uint8_t x831 = UINT8_MAX;
uint16_t x834 = 166U;


void f0(void) {
	int8_t x1 = INT8_MIN;
	uint16_t x2 = UINT16_MAX;
	static volatile int16_t x3 = INT16_MIN;
	uint16_t x4 = 28279U;
	volatile int32_t t0 = -217;

	t0 = (x1-(x2<<(x3<=x4)));

	if (t0 != -131198) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MAX;
	int8_t x7 = INT8_MIN;
	static int8_t x8 = INT8_MIN;

	t1 = (x5-(x6<<(x7<=x8)));

	if (t1 != -65535) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int64_t x10 = 11138138LL;
	volatile int8_t x11 = 7;
	int64_t x12 = INT64_MIN;
	static volatile int64_t t2 = -52581368048442894LL;

	t2 = (x9-(x10<<(x11<=x12)));

	if (t2 != -11170906LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x14 = INT8_MAX;
	uint8_t x15 = 37U;
	int64_t x16 = 0LL;

	t3 = (x13-(x14<<(x15<=x16)));

	if (t3 != 274) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	uint64_t x22 = UINT64_MAX;
	uint16_t x23 = 867U;
	volatile uint64_t x24 = 2023338099892LLU;
	uint64_t t4 = 1480940424460951475LLU;

	t4 = (x21-(x22<<(x23<=x24)));

	if (t4 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x34 = 1;
	uint16_t x35 = UINT16_MAX;
	int8_t x36 = INT8_MIN;

	t5 = (x33-(x34<<(x35<=x36)));

	if (t5 != 32766) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x41 = 220U;
	uint32_t x42 = 118U;
	int32_t x43 = INT32_MIN;
	uint8_t x44 = UINT8_MAX;

	t6 = (x41-(x42<<(x43<=x44)));

	if (t6 != 4294967280U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x66 = 6U;
	static volatile int16_t x67 = 0;
	int64_t x68 = INT64_MIN;
	int64_t t7 = -15892900577160266LL;

	t7 = (x65-(x66<<(x67<=x68)));

	if (t7 != 9223372036854775801LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x74 = 4554;
	int16_t x76 = 63;
	static int32_t t8 = 2732;

	t8 = (x73-(x74<<(x75<=x76)));

	if (t8 != 60981) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x78 = INT8_MAX;
	uint64_t x79 = UINT64_MAX;
	static int64_t x80 = INT64_MIN;

	t9 = (x77-(x78<<(x79<=x80)));

	if (t9 != -255) { NG(); } else { ; }
	
}

void f10(void) {
	static uint64_t x81 = 32LLU;
	static volatile uint64_t x82 = 16521519836LLU;
	static uint8_t x83 = 8U;
	uint16_t x84 = 455U;

	t10 = (x81-(x82<<(x83<=x84)));

	if (t10 != 18446744040666511976LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x85 = UINT64_MAX;
	volatile uint16_t x86 = 12996U;
	uint16_t x87 = 63U;
	int8_t x88 = -1;
	volatile uint64_t t11 = 8288476LLU;

	t11 = (x85-(x86<<(x87<=x88)));

	if (t11 != 18446744073709538619LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x94 = 1U;
	static uint8_t x95 = 1U;
	volatile int32_t t12 = 4;

	t12 = (x93-(x94<<(x95<=x96)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x101 = 1980065LLU;
	static uint16_t x102 = UINT16_MAX;
	uint32_t x103 = 105U;
	int16_t x104 = INT16_MIN;
	uint64_t t13 = 1097930076LLU;

	t13 = (x101-(x102<<(x103<=x104)));

	if (t13 != 1848995LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x121 = INT64_MIN;
	volatile uint64_t x122 = 213962259903458344LLU;
	static int8_t x123 = INT8_MAX;
	volatile int16_t x124 = -1;
	uint64_t t14 = 452967719308LLU;

	t14 = (x121-(x122<<(x123<=x124)));

	if (t14 != 9009409776951317464LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x125 = UINT16_MAX;
	volatile uint32_t x126 = 30644522U;
	static int16_t x128 = INT16_MIN;
	uint32_t t15 = 1163299U;

	t15 = (x125-(x126<<(x127<=x128)));

	if (t15 != 4264388309U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t t16 = 1455364LL;

	t16 = (x129-(x130<<(x131<=x132)));

	if (t16 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x149 = UINT8_MAX;
	uint64_t x150 = 3324233839328LLU;
	static int64_t x151 = INT64_MAX;
	uint16_t x152 = 3U;

	t17 = (x149-(x150<<(x151<=x152)));

	if (t17 != 18446740749475712543LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x153 = INT32_MAX;
	static uint8_t x154 = 90U;
	int16_t x155 = 69;
	volatile int64_t x156 = 15404951653LL;
	int32_t t18 = 323;

	t18 = (x153-(x154<<(x155<=x156)));

	if (t18 != 2147483467) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x158 = INT16_MAX;
	int16_t x159 = INT16_MIN;
	int8_t x160 = INT8_MIN;
	static volatile int32_t t19 = -1;

	t19 = (x157-(x158<<(x159<=x160)));

	if (t19 != -65279) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x165 = UINT16_MAX;
	uint64_t x166 = UINT64_MAX;
	uint32_t x168 = 25010U;
	uint64_t t20 = 268299785498512LLU;

	t20 = (x165-(x166<<(x167<=x168)));

	if (t20 != 65536LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x185 = -1;
	uint8_t x186 = 8U;
	int16_t x187 = 1260;
	int64_t x188 = -7852572176764723LL;
	int32_t t21 = 31276;

	t21 = (x185-(x186<<(x187<=x188)));

	if (t21 != -9) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x193 = -10;
	uint32_t t22 = 1049769519U;

	t22 = (x193-(x194<<(x195<=x196)));

	if (t22 != 4294966150U) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x205 = 3;
	static volatile int16_t x206 = 37;
	static volatile int64_t x207 = INT64_MAX;
	uint8_t x208 = 0U;
	volatile int32_t t23 = -998;

	t23 = (x205-(x206<<(x207<=x208)));

	if (t23 != -34) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x221 = INT16_MIN;
	uint16_t x222 = 89U;
	int32_t x224 = INT32_MIN;

	t24 = (x221-(x222<<(x223<=x224)));

	if (t24 != -32857) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x233 = 214U;
	int64_t x234 = 14004LL;
	int64_t x235 = -1LL;
	uint8_t x236 = 105U;
	static volatile int64_t t25 = -123554123163LL;

	t25 = (x233-(x234<<(x235<=x236)));

	if (t25 != -27794LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x257 = 7U;
	volatile uint8_t x258 = 13U;
	int8_t x259 = 19;
	static int64_t x260 = -68171269LL;
	volatile int32_t t26 = 1;

	t26 = (x257-(x258<<(x259<=x260)));

	if (t26 != -6) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x266 = UINT8_MAX;
	volatile int32_t x267 = INT32_MIN;
	uint16_t x268 = UINT16_MAX;
	int64_t t27 = -2079071LL;

	t27 = (x265-(x266<<(x267<=x268)));

	if (t27 != -511LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x277 = -1;
	volatile int8_t x279 = 7;
	volatile uint16_t x280 = 24351U;
	volatile uint64_t t28 = 1438083871340LLU;

	t28 = (x277-(x278<<(x279<=x280)));

	if (t28 != 14539725016456474717LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x281 = INT8_MIN;
	int16_t x283 = 11;
	int8_t x284 = -29;
	static int32_t t29 = -56;

	t29 = (x281-(x282<<(x283<=x284)));

	if (t29 != -383) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x293 = 27429222LLU;
	int8_t x294 = 8;
	int8_t x295 = -1;
	int32_t x296 = INT32_MAX;
	static volatile uint64_t t30 = 96621466329LLU;

	t30 = (x293-(x294<<(x295<=x296)));

	if (t30 != 27429206LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x306 = 202535012126345LLU;
	uint64_t x307 = UINT64_MAX;
	int8_t x308 = INT8_MIN;
	volatile uint64_t t31 = 1LLU;

	t31 = (x305-(x306<<(x307<=x308)));

	if (t31 != 9223169501842649462LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x309 = UINT32_MAX;
	uint32_t x310 = 1231711313U;
	static volatile uint16_t x311 = 26U;
	uint32_t t32 = 203649U;

	t32 = (x309-(x310<<(x311<=x312)));

	if (t32 != 1831544669U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x313 = 5;
	volatile int8_t x314 = 19;
	static int16_t x315 = INT16_MIN;
	volatile uint32_t x316 = UINT32_MAX;

	t33 = (x313-(x314<<(x315<=x316)));

	if (t33 != -33) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x321 = 18U;
	volatile int64_t x322 = 348356LL;
	int8_t x323 = INT8_MIN;
	int32_t x324 = INT32_MAX;
	int64_t t34 = 2797499LL;

	t34 = (x321-(x322<<(x323<=x324)));

	if (t34 != -696694LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x330 = 61923948961LLU;
	int8_t x331 = 3;
	static int32_t x332 = -1;
	static uint64_t t35 = 4LLU;

	t35 = (x329-(x330<<(x331<=x332)));

	if (t35 != 18446744011785602654LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x337 = INT8_MAX;
	int32_t x339 = -1;
	volatile int32_t x340 = INT32_MIN;

	t36 = (x337-(x338<<(x339<=x340)));

	if (t36 != -1906804577930145LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x341 = INT16_MIN;
	static uint8_t x342 = 1U;
	static int16_t x343 = INT16_MIN;
	int64_t x344 = -899456402282226364LL;
	volatile int32_t t37 = -18123550;

	t37 = (x341-(x342<<(x343<=x344)));

	if (t37 != -32769) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x345 = 8;
	uint32_t x346 = UINT32_MAX;
	uint16_t x347 = 6373U;
	static int64_t x348 = INT64_MIN;
	volatile uint32_t t38 = 459U;

	t38 = (x345-(x346<<(x347<=x348)));

	if (t38 != 9U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x362 = UINT8_MAX;
	volatile int64_t x363 = -1LL;
	int32_t x364 = INT32_MAX;
	int64_t t39 = -16086409513LL;

	t39 = (x361-(x362<<(x363<=x364)));

	if (t39 != 9223372036854775297LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x365 = 107U;
	static uint16_t x366 = UINT16_MAX;
	int32_t t40 = 14875;

	t40 = (x365-(x366<<(x367<=x368)));

	if (t40 != -130963) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x381 = 1111437494862751LLU;
	int32_t x382 = 318410849;
	static uint32_t x384 = 15U;
	uint64_t t41 = 257128780169939LLU;

	t41 = (x381-(x382<<(x383<=x384)));

	if (t41 != 1111437176451902LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x389 = INT32_MIN;
	int8_t x390 = 0;
	static volatile int32_t t42 = INT32_MIN;

	t42 = (x389-(x390<<(x391<=x392)));

	if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x402 = 574813163U;
	int64_t x403 = -1LL;
	int64_t x404 = INT64_MAX;
	static volatile uint32_t t43 = 15493U;

	t43 = (x401-(x402<<(x403<=x404)));

	if (t43 != 3145340969U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x406 = 112U;
	int64_t x407 = INT64_MIN;
	uint64_t x408 = 0LLU;
	volatile int32_t t44 = 21;

	t44 = (x405-(x406<<(x407<=x408)));

	if (t44 != -113) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x414 = INT8_MAX;
	int64_t x415 = INT64_MIN;
	uint32_t x416 = 541U;

	t45 = (x413-(x414<<(x415<=x416)));

	if (t45 != -224) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x427 = 2102443LLU;
	volatile int32_t x428 = -1;
	uint64_t t46 = 51179511713LLU;

	t46 = (x425-(x426<<(x427<=x428)));

	if (t46 != 18446744073709551508LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x429 = 941917793U;
	uint32_t x431 = 6U;
	static int8_t x432 = INT8_MIN;

	t47 = (x429-(x430<<(x431<=x432)));

	if (t47 != 941852259U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x438 = UINT16_MAX;
	static volatile int32_t x440 = INT32_MAX;
	volatile uint32_t t48 = 121899898U;

	t48 = (x437-(x438<<(x439<=x440)));

	if (t48 != 4294836225U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x445 = 3U;
	int16_t x447 = INT16_MIN;
	static uint8_t x448 = UINT8_MAX;

	t49 = (x445-(x446<<(x447<=x448)));

	if (t49 != -2079) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x449 = 7;
	int64_t x450 = INT64_MAX;
	int8_t x451 = INT8_MIN;
	static int16_t x452 = INT16_MIN;

	t50 = (x449-(x450<<(x451<=x452)));

	if (t50 != -9223372036854775800LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x453 = 685U;
	uint64_t x454 = 368617LLU;
	static uint8_t x455 = 98U;
	uint64_t x456 = 5229634LLU;
	volatile uint64_t t51 = 57760LLU;

	t51 = (x453-(x454<<(x455<=x456)));

	if (t51 != 18446744073708815067LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x461 = INT16_MIN;
	uint8_t x463 = UINT8_MAX;
	static int8_t x464 = 15;
	int32_t t52 = -1;

	t52 = (x461-(x462<<(x463<=x464)));

	if (t52 != -65535) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x473 = INT8_MIN;
	static uint16_t x474 = 944U;
	uint8_t x475 = 9U;
	int8_t x476 = INT8_MIN;
	static volatile int32_t t53 = 3;

	t53 = (x473-(x474<<(x475<=x476)));

	if (t53 != -1072) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x477 = INT8_MIN;
	uint64_t x478 = UINT64_MAX;
	volatile uint32_t x480 = 8329485U;
	uint64_t t54 = 7262721028867304LLU;

	t54 = (x477-(x478<<(x479<=x480)));

	if (t54 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x489 = -505;
	uint32_t x490 = 64471664U;
	uint16_t x491 = 975U;
	static int16_t x492 = -52;

	t55 = (x489-(x490<<(x491<=x492)));

	if (t55 != 4230495127U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x493 = 1;
	uint64_t x494 = 8332576041LLU;
	volatile uint32_t x495 = 2U;
	uint32_t x496 = 100067073U;
	uint64_t t56 = 138830334LLU;

	t56 = (x493-(x494<<(x495<=x496)));

	if (t56 != 18446744057044399535LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x497 = UINT64_MAX;
	volatile int8_t x498 = 15;
	uint8_t x499 = 5U;
	static volatile uint64_t t57 = 496291358322074LLU;

	t57 = (x497-(x498<<(x499<=x500)));

	if (t57 != 18446744073709551600LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x521 = 1039685LLU;
	uint16_t x522 = 32U;
	int16_t x523 = -4465;
	static volatile int16_t x524 = -1;
	uint64_t t58 = 13529427365272LLU;

	t58 = (x521-(x522<<(x523<=x524)));

	if (t58 != 1039621LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x525 = 1;
	uint64_t x526 = UINT64_MAX;
	int64_t x527 = -1LL;
	int64_t x528 = INT64_MIN;
	uint64_t t59 = 1829530LLU;

	t59 = (x525-(x526<<(x527<=x528)));

	if (t59 != 2LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x553 = -124;
	int16_t x555 = -1;
	static int8_t x556 = INT8_MAX;
	uint32_t t60 = 14117910U;

	t60 = (x553-(x554<<(x555<=x556)));

	if (t60 != 4294967174U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x557 = 1428546770LL;
	volatile uint64_t x558 = 1692338468LLU;
	int64_t x559 = INT64_MIN;
	uint64_t x560 = UINT64_MAX;
	volatile uint64_t t61 = 410LLU;

	t61 = (x557-(x558<<(x559<=x560)));

	if (t61 != 18446744071753421450LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x581 = 16304U;
	uint8_t x582 = 0U;
	int64_t x583 = -1LL;
	int64_t x584 = INT64_MIN;
	int32_t t62 = -1030539;

	t62 = (x581-(x582<<(x583<=x584)));

	if (t62 != 16304) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x585 = INT8_MAX;
	uint64_t x586 = 277466188830LLU;
	uint64_t x587 = UINT64_MAX;
	int64_t x588 = INT64_MIN;

	t63 = (x585-(x586<<(x587<=x588)));

	if (t63 != 18446743796243362913LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x589 = INT32_MIN;
	volatile uint64_t x590 = 12924509262316187LLU;
	static uint32_t x592 = UINT32_MAX;

	t64 = (x589-(x590<<(x591<=x592)));

	if (t64 != 18420895053037435594LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x617 = INT64_MAX;
	uint8_t x618 = 15U;
	int16_t x619 = INT16_MIN;
	int64_t x620 = INT64_MIN;
	int64_t t65 = -338963398LL;

	t65 = (x617-(x618<<(x619<=x620)));

	if (t65 != 9223372036854775792LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int16_t x621 = INT16_MIN;
	volatile uint32_t x622 = 210251585U;
	int16_t x623 = -1;
	int64_t x624 = 186882342LL;
	volatile uint32_t t66 = 0U;

	t66 = (x621-(x622<<(x623<=x624)));

	if (t66 != 3874431358U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x629 = 492;
	int16_t x630 = INT16_MAX;
	uint16_t x631 = 431U;
	volatile int32_t t67 = 86082252;

	t67 = (x629-(x630<<(x631<=x632)));

	if (t67 != -32275) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x641 = UINT32_MAX;
	uint16_t x642 = UINT16_MAX;
	uint8_t x643 = 11U;
	uint64_t x644 = UINT64_MAX;
	uint32_t t68 = 1568U;

	t68 = (x641-(x642<<(x643<=x644)));

	if (t68 != 4294836225U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x645 = UINT64_MAX;
	uint64_t x646 = 898LLU;
	int64_t x647 = INT64_MIN;
	uint32_t x648 = 2U;
	volatile uint64_t t69 = 5061LLU;

	t69 = (x645-(x646<<(x647<=x648)));

	if (t69 != 18446744073709549819LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x653 = INT8_MAX;
	int32_t x654 = 137906464;
	int16_t x655 = 3669;
	volatile int32_t x656 = -1;
	int32_t t70 = -1257209;

	t70 = (x653-(x654<<(x655<=x656)));

	if (t70 != -137906337) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x657 = -1;
	static int8_t x658 = 3;
	static volatile int32_t x659 = INT32_MAX;
	volatile int32_t t71 = -4085;

	t71 = (x657-(x658<<(x659<=x660)));

	if (t71 != -4) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x665 = -1613;
	int32_t x668 = INT32_MIN;
	static volatile int32_t t72 = 183;

	t72 = (x665-(x666<<(x667<=x668)));

	if (t72 != -1613) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x673 = -123;
	uint8_t x674 = UINT8_MAX;
	int16_t x675 = INT16_MIN;
	static int64_t x676 = -1LL;
	int32_t t73 = 357645;

	t73 = (x673-(x674<<(x675<=x676)));

	if (t73 != -633) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint32_t x677 = 200U;
	uint64_t x678 = UINT64_MAX;
	static uint64_t t74 = 93082174LLU;

	t74 = (x677-(x678<<(x679<=x680)));

	if (t74 != 201LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x697 = INT8_MIN;
	uint32_t x698 = 3628263U;
	int64_t x700 = INT64_MIN;
	uint32_t t75 = 130989U;

	t75 = (x697-(x698<<(x699<=x700)));

	if (t75 != 4291338905U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x701 = INT16_MAX;
	uint64_t x702 = 2148934865926094LLU;
	int64_t x704 = -1LL;

	t76 = (x701-(x702<<(x703<=x704)));

	if (t76 != 18442446203977732195LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x710 = 109787U;
	volatile int64_t x711 = INT64_MAX;
	uint64_t x712 = 724505151317255LLU;
	uint32_t t77 = 0U;

	t77 = (x709-(x710<<(x711<=x712)));

	if (t77 != 4294857381U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x713 = 1U;
	int16_t x716 = -6;
	static volatile int32_t t78 = -424;

	t78 = (x713-(x714<<(x715<=x716)));

	if (t78 != -126) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x717 = UINT32_MAX;
	int16_t x718 = 3;
	uint32_t t79 = 68975942U;

	t79 = (x717-(x718<<(x719<=x720)));

	if (t79 != 4294967292U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x729 = -2;
	int8_t x730 = INT8_MAX;
	volatile uint32_t x731 = 47438U;
	int8_t x732 = INT8_MIN;
	volatile int32_t t80 = 35363;

	t80 = (x729-(x730<<(x731<=x732)));

	if (t80 != -256) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x733 = -1;
	uint16_t x734 = UINT16_MAX;
	static int16_t x735 = INT16_MIN;
	volatile int32_t t81 = -15422267;

	t81 = (x733-(x734<<(x735<=x736)));

	if (t81 != -131071) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x737 = INT32_MIN;
	uint64_t x738 = UINT64_MAX;
	static int8_t x739 = -1;

	t82 = (x737-(x738<<(x739<=x740)));

	if (t82 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x749 = INT16_MIN;
	static uint16_t x750 = 307U;
	static int8_t x752 = 19;
	int32_t t83 = 11640;

	t83 = (x749-(x750<<(x751<=x752)));

	if (t83 != -33382) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x761 = INT8_MAX;
	uint32_t x762 = UINT32_MAX;
	volatile int8_t x763 = -1;
	uint64_t x764 = 830957107LLU;

	t84 = (x761-(x762<<(x763<=x764)));

	if (t84 != 128U) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x765 = 1U;
	volatile int32_t x766 = INT32_MAX;
	static volatile int8_t x767 = INT8_MIN;
	int32_t t85 = 247;

	t85 = (x765-(x766<<(x767<=x768)));

	if (t85 != -2147483646) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x769 = 0U;
	int16_t x770 = INT16_MAX;
	static int64_t x771 = INT64_MIN;
	uint16_t x772 = UINT16_MAX;
	volatile int32_t t86 = -1;

	t86 = (x769-(x770<<(x771<=x772)));

	if (t86 != -65534) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x777 = -1;
	int8_t x778 = 0;
	int64_t x779 = -664628081484406125LL;
	uint64_t x780 = 1979LLU;
	volatile int32_t t87 = -80836;

	t87 = (x777-(x778<<(x779<=x780)));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x781 = 0U;
	int8_t x782 = INT8_MAX;
	volatile uint64_t x783 = 209691916LLU;
	uint16_t x784 = UINT16_MAX;
	int32_t t88 = 720478370;

	t88 = (x781-(x782<<(x783<=x784)));

	if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t t89 = 1478798U;

	t89 = (x793-(x794<<(x795<=x796)));

	if (t89 != 4294967294U) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x802 = 14414U;
	static volatile int64_t x803 = INT64_MAX;
	int32_t t90 = -160;

	t90 = (x801-(x802<<(x803<=x804)));

	if (t90 != -47182) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x809 = 3517754;
	uint8_t x810 = 116U;
	uint8_t x811 = 15U;
	int64_t x812 = -4433LL;
	volatile int32_t t91 = -114;

	t91 = (x809-(x810<<(x811<=x812)));

	if (t91 != 3517638) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x817 = 4U;
	uint64_t x818 = 3941779823903406075LLU;
	static uint64_t x819 = 15620615LLU;
	uint64_t t92 = 1241074LLU;

	t92 = (x817-(x818<<(x819<=x820)));

	if (t92 != 10563184425902739470LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x821 = 645927860U;
	static int32_t x822 = INT32_MAX;
	uint8_t x823 = 1U;
	static volatile int32_t x824 = INT32_MIN;
	static volatile uint32_t t93 = 86057U;

	t93 = (x821-(x822<<(x823<=x824)));

	if (t93 != 2793411509U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x825 = INT64_MAX;
	uint16_t x826 = 3U;
	volatile int16_t x827 = -12;
	int16_t x828 = INT16_MIN;
	int64_t t94 = -1917131463579245379LL;

	t94 = (x825-(x826<<(x827<=x828)));

	if (t94 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x830 = 14402U;
	static uint8_t x832 = 3U;
	uint32_t t95 = 12274U;

	t95 = (x829-(x830<<(x831<=x832)));

	if (t95 != 32704U) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x833 = 939U;
	uint8_t x835 = 2U;
	uint64_t x836 = 11376863871639362LLU;
	uint32_t t96 = 455U;

	t96 = (x833-(x834<<(x835<=x836)));

	if (t96 != 607U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x845 = INT8_MIN;
	volatile int16_t x846 = 3754;
	static int64_t x847 = INT64_MAX;
	static uint32_t x848 = UINT32_MAX;
	volatile int32_t t97 = -32209;

	t97 = (x845-(x846<<(x847<=x848)));

	if (t97 != -3882) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x853 = 2U;
	static uint64_t x854 = 48106728551LLU;
	uint32_t x855 = 6089352U;
	int8_t x856 = INT8_MIN;
	static uint64_t t98 = 4286065018LLU;

	t98 = (x853-(x854<<(x855<=x856)));

	if (t98 != 18446743977496094516LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x857 = 1U;
	uint32_t x858 = 4652U;
	volatile int8_t x859 = -1;
	int32_t x860 = INT32_MIN;
	volatile uint32_t t99 = 45U;

	t99 = (x857-(x858<<(x859<=x860)));

	if (t99 != 4294962645U) { NG(); } else { ; }
	
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

