#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x10 = 64059;
uint32_t x11 = UINT32_MAX;
int64_t x14 = INT64_MIN;
static int32_t x15 = INT32_MIN;
volatile int64_t x16 = INT64_MIN;
static int32_t x30 = INT32_MIN;
static int32_t x32 = 811259;
int32_t x41 = INT32_MIN;
int8_t x43 = -50;
volatile uint64_t t5 = 2346303934LLU;
uint32_t x45 = 38U;
int16_t x47 = -1;
int8_t x61 = -2;
volatile int8_t x62 = -5;
int32_t x70 = -85832957;
int64_t x97 = INT64_MIN;
uint64_t x99 = UINT64_MAX;
volatile uint32_t x101 = UINT32_MAX;
uint8_t x108 = 28U;
static volatile int8_t x113 = 14;
uint64_t x116 = UINT64_MAX;
static int8_t x121 = INT8_MIN;
uint64_t x134 = 1LLU;
static int64_t x136 = INT64_MAX;
int16_t x150 = INT16_MAX;
volatile int64_t x165 = 458826890398924LL;
int8_t x170 = INT8_MAX;
int32_t x172 = INT32_MIN;
static uint32_t x181 = 92507872U;
static uint8_t x183 = 0U;
uint64_t x184 = UINT64_MAX;
static volatile uint64_t t19 = 2902LLU;
volatile int64_t x186 = -195868930902369LL;
static uint64_t x203 = UINT64_MAX;
volatile uint64_t t22 = 1116097793818779LLU;
volatile int8_t x217 = INT8_MIN;
static int8_t x261 = INT8_MIN;
int32_t x269 = INT32_MAX;
volatile int32_t x271 = INT32_MAX;
static int32_t t29 = 735;
int8_t x289 = INT8_MIN;
volatile uint16_t x291 = 6005U;
int64_t x294 = INT64_MIN;
int32_t t31 = -3883;
volatile int8_t x298 = INT8_MAX;
int32_t x305 = -39623;
int16_t x311 = -1;
uint16_t x355 = UINT16_MAX;
int64_t x393 = 2927957262027494LL;
int64_t x413 = -57LL;
uint32_t x414 = 2903U;
int16_t x415 = INT16_MAX;
static uint64_t x423 = 63238261215365990LLU;
int32_t x443 = -1;
static int64_t x448 = INT64_MIN;
int16_t x458 = INT16_MIN;
static volatile uint64_t t48 = 19189458448989LLU;
int32_t x496 = -1;
volatile int32_t t50 = 11981;
static volatile int64_t x520 = INT64_MAX;
volatile int64_t t52 = 5540037LL;
int8_t x541 = INT8_MAX;
int32_t x558 = -1;
int64_t x560 = 3LL;
volatile int64_t t57 = 2191954525777LL;
static uint16_t x571 = UINT16_MAX;
uint16_t x579 = 5U;
int64_t t64 = -141713LL;
static uint32_t x608 = 8643255U;
static volatile int32_t t66 = -10702771;
static volatile int64_t x618 = INT64_MIN;
uint16_t x632 = UINT16_MAX;
static uint16_t x641 = UINT16_MAX;
static volatile int32_t t71 = 1315;
uint32_t x648 = 2117U;
static volatile uint16_t x657 = 34U;
static volatile int8_t x659 = 3;
static int8_t x674 = INT8_MIN;
static int8_t x675 = INT8_MAX;
static int32_t x697 = -1;
uint32_t x729 = 19609380U;
static int8_t x733 = INT8_MAX;
int16_t x743 = 8821;
static uint8_t x744 = 7U;
uint8_t x766 = 1U;
static uint16_t x768 = UINT16_MAX;
int32_t x782 = INT32_MIN;
uint16_t x793 = 212U;
volatile int32_t x806 = INT32_MIN;
int16_t x822 = 413;
static uint64_t t97 = 151023270051544324LLU;
volatile uint64_t x834 = 87395LLU;
int32_t t99 = -93531018;


void f0(void) {
	int32_t x9 = INT32_MIN;
	uint64_t x12 = UINT64_MAX;
	uint64_t t0 = 315265LLU;

	t0 = (x9%((x10<=x11)*x12));

	if (t0 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x13 = -296;
	volatile int64_t t1 = 61335902607092956LL;

	t1 = (x13%((x14<=x15)*x16));

	if (t1 != -296LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x17 = UINT32_MAX;
	static int64_t x18 = INT64_MIN;
	volatile uint32_t x19 = 41U;
	int8_t x20 = -1;
	volatile uint32_t t2 = 104318U;

	t2 = (x17%((x18<=x19)*x20));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x29 = INT64_MAX;
	int16_t x31 = INT16_MIN;
	volatile int64_t t3 = -1849995LL;

	t3 = (x29%((x30<=x31)*x32));

	if (t3 != 670413LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x37 = 2648244293132093620LLU;
	int8_t x38 = INT8_MIN;
	int16_t x39 = INT16_MAX;
	int8_t x40 = INT8_MIN;
	uint64_t t4 = 2097884345LLU;

	t4 = (x37%((x38<=x39)*x40));

	if (t4 != 2648244293132093620LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x42 = INT32_MIN;
	uint64_t x44 = 282674697609733387LLU;

	t5 = (x41%((x42<=x43)*x44));

	if (t5 != 72888726929397813LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x46 = 1530659725U;
	int64_t x48 = INT64_MIN;
	int64_t t6 = -429132913000949702LL;

	t6 = (x45%((x46<=x47)*x48));

	if (t6 != 38LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x63 = UINT32_MAX;
	int8_t x64 = INT8_MAX;
	volatile int32_t t7 = 2926;

	t7 = (x61%((x62<=x63)*x64));

	if (t7 != -2) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x69 = INT32_MAX;
	volatile int16_t x71 = -1;
	uint8_t x72 = 122U;
	volatile int32_t t8 = -2010;

	t8 = (x69%((x70<=x71)*x72));

	if (t8 != 119) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x98 = INT64_MIN;
	int64_t x100 = INT64_MIN;
	int64_t t9 = 10342050LL;

	t9 = (x97%((x98<=x99)*x100));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x102 = 42179U;
	int16_t x103 = INT16_MIN;
	int8_t x104 = INT8_MIN;
	static uint32_t t10 = 100365U;

	t10 = (x101%((x102<=x103)*x104));

	if (t10 != 127U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x105 = 0LLU;
	uint8_t x106 = 4U;
	int32_t x107 = 64214213;
	volatile uint64_t t11 = 29211428421LLU;

	t11 = (x105%((x106<=x107)*x108));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x114 = -9LL;
	uint8_t x115 = 17U;
	static volatile uint64_t t12 = 16717220228LLU;

	t12 = (x113%((x114<=x115)*x116));

	if (t12 != 14LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x122 = INT8_MIN;
	int16_t x123 = -1;
	int64_t x124 = INT64_MIN;
	volatile int64_t t13 = 229LL;

	t13 = (x121%((x122<=x123)*x124));

	if (t13 != -128LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x133 = INT32_MIN;
	int32_t x135 = 29463;
	volatile int64_t t14 = 366060380LL;

	t14 = (x133%((x134<=x135)*x136));

	if (t14 != -2147483648LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x141 = 662331128U;
	static int64_t x142 = INT64_MIN;
	static int32_t x143 = -1;
	uint8_t x144 = 2U;
	static uint32_t t15 = 5004818U;

	t15 = (x141%((x142<=x143)*x144));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x149 = 28U;
	int64_t x151 = INT64_MAX;
	static int8_t x152 = -1;
	int32_t t16 = 7308700;

	t16 = (x149%((x150<=x151)*x152));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x166 = 2703;
	static int64_t x167 = INT64_MAX;
	static uint16_t x168 = 259U;
	int64_t t17 = 51040807LL;

	t17 = (x165%((x166<=x167)*x168));

	if (t17 != 166LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x169 = -302781007395149LL;
	int8_t x171 = INT8_MAX;
	static volatile int64_t t18 = 31345LL;

	t18 = (x169%((x170<=x171)*x172));

	if (t18 != -845412685LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x182 = -10;

	t19 = (x181%((x182<=x183)*x184));

	if (t19 != 92507872LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x185 = INT64_MAX;
	int8_t x187 = 0;
	volatile int32_t x188 = -170;
	int64_t t20 = 117335065920782568LL;

	t20 = (x185%((x186<=x187)*x188));

	if (t20 != 127LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x189 = INT32_MIN;
	static int32_t x190 = -1;
	static uint16_t x191 = UINT16_MAX;
	volatile int32_t x192 = -1;
	volatile int32_t t21 = 972938;

	t21 = (x189%((x190<=x191)*x192));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x201 = INT32_MAX;
	uint32_t x202 = 30036146U;
	uint64_t x204 = 69564504394840LLU;

	t22 = (x201%((x202<=x203)*x204));

	if (t22 != 2147483647LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x205 = INT8_MAX;
	volatile uint32_t x206 = UINT32_MAX;
	volatile int8_t x207 = -1;
	static int16_t x208 = INT16_MIN;
	volatile int32_t t23 = -98;

	t23 = (x205%((x206<=x207)*x208));

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x218 = INT32_MIN;
	static volatile int8_t x219 = INT8_MAX;
	int16_t x220 = INT16_MIN;
	int32_t t24 = 117817622;

	t24 = (x217%((x218<=x219)*x220));

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x233 = INT16_MIN;
	static uint8_t x234 = 28U;
	uint32_t x235 = 881418U;
	uint16_t x236 = UINT16_MAX;
	volatile int32_t t25 = -69801373;

	t25 = (x233%((x234<=x235)*x236));

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x245 = INT8_MIN;
	int16_t x246 = INT16_MIN;
	static int16_t x247 = -6045;
	int16_t x248 = -1;
	static volatile int32_t t26 = -74586366;

	t26 = (x245%((x246<=x247)*x248));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x249 = INT16_MIN;
	uint32_t x250 = 78285U;
	int8_t x251 = INT8_MIN;
	static uint16_t x252 = 28833U;
	int32_t t27 = -361899;

	t27 = (x249%((x250<=x251)*x252));

	if (t27 != -3935) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x262 = INT32_MIN;
	volatile int16_t x263 = INT16_MIN;
	uint64_t x264 = UINT64_MAX;
	static uint64_t t28 = 1439219948279470772LLU;

	t28 = (x261%((x262<=x263)*x264));

	if (t28 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x270 = 183248U;
	uint8_t x272 = UINT8_MAX;

	t29 = (x269%((x270<=x271)*x272));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x290 = 2;
	int64_t x292 = INT64_MIN;
	static volatile int64_t t30 = 6LL;

	t30 = (x289%((x290<=x291)*x292));

	if (t30 != -128LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x293 = INT32_MAX;
	volatile int8_t x295 = 7;
	int16_t x296 = INT16_MAX;

	t31 = (x293%((x294<=x295)*x296));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x297 = INT16_MAX;
	uint64_t x299 = 242972LLU;
	int32_t x300 = INT32_MAX;
	int32_t t32 = -9010050;

	t32 = (x297%((x298<=x299)*x300));

	if (t32 != 32767) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x301 = UINT32_MAX;
	int64_t x302 = 1LL;
	uint8_t x303 = UINT8_MAX;
	volatile int64_t x304 = INT64_MAX;
	volatile int64_t t33 = 3820694964363104LL;

	t33 = (x301%((x302<=x303)*x304));

	if (t33 != 4294967295LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x306 = -1;
	int16_t x307 = -1;
	uint64_t x308 = UINT64_MAX;
	uint64_t t34 = 9829484LLU;

	t34 = (x305%((x306<=x307)*x308));

	if (t34 != 18446744073709511993LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x309 = 379;
	int64_t x310 = -1LL;
	uint64_t x312 = 2256086LLU;
	static volatile uint64_t t35 = 1999872625692114140LLU;

	t35 = (x309%((x310<=x311)*x312));

	if (t35 != 379LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x329 = INT16_MIN;
	static uint16_t x330 = UINT16_MAX;
	int64_t x331 = INT64_MAX;
	int16_t x332 = -1;
	int32_t t36 = -3;

	t36 = (x329%((x330<=x331)*x332));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x353 = INT16_MIN;
	int16_t x354 = INT16_MIN;
	static int8_t x356 = INT8_MIN;
	static volatile int32_t t37 = -43972;

	t37 = (x353%((x354<=x355)*x356));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x357 = 386658758;
	uint8_t x358 = UINT8_MAX;
	uint16_t x359 = 2348U;
	static int64_t x360 = INT64_MAX;
	int64_t t38 = -592832278LL;

	t38 = (x357%((x358<=x359)*x360));

	if (t38 != 386658758LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x361 = 1LL;
	int32_t x362 = INT32_MIN;
	uint8_t x363 = 3U;
	int64_t x364 = INT64_MIN;
	volatile int64_t t39 = 51730483010414510LL;

	t39 = (x361%((x362<=x363)*x364));

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x381 = INT8_MIN;
	int32_t x382 = INT32_MIN;
	uint32_t x383 = UINT32_MAX;
	static int32_t x384 = INT32_MAX;
	volatile int32_t t40 = 262226;

	t40 = (x381%((x382<=x383)*x384));

	if (t40 != -128) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x394 = 5958697LL;
	static uint64_t x395 = 13438313496LLU;
	volatile int16_t x396 = -1;
	int64_t t41 = 1LL;

	t41 = (x393%((x394<=x395)*x396));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x416 = 1;
	static volatile int64_t t42 = -26158LL;

	t42 = (x413%((x414<=x415)*x416));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x421 = 1541967U;
	int16_t x422 = INT16_MAX;
	int16_t x424 = -1;
	volatile uint32_t t43 = 414094U;

	t43 = (x421%((x422<=x423)*x424));

	if (t43 != 1541967U) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x425 = INT8_MIN;
	int32_t x426 = INT32_MIN;
	static volatile int32_t x427 = -1;
	int8_t x428 = INT8_MIN;
	volatile int32_t t44 = 36808681;

	t44 = (x425%((x426<=x427)*x428));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x441 = 587LL;
	int32_t x442 = -33455336;
	volatile int64_t x444 = INT64_MAX;
	volatile int64_t t45 = -9179798LL;

	t45 = (x441%((x442<=x443)*x444));

	if (t45 != 587LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x445 = INT16_MAX;
	uint32_t x446 = UINT32_MAX;
	uint32_t x447 = UINT32_MAX;
	int64_t t46 = 760843634062176670LL;

	t46 = (x445%((x446<=x447)*x448));

	if (t46 != 32767LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x457 = 2;
	int8_t x459 = INT8_MIN;
	int16_t x460 = INT16_MAX;
	int32_t t47 = 16;

	t47 = (x457%((x458<=x459)*x460));

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x465 = INT16_MIN;
	volatile int64_t x466 = INT64_MIN;
	uint8_t x467 = 0U;
	static uint64_t x468 = 230LLU;

	t48 = (x465%((x466<=x467)*x468));

	if (t48 != 128LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x485 = -13534277;
	uint16_t x486 = 405U;
	static uint64_t x487 = 449760LLU;
	volatile uint64_t x488 = UINT64_MAX;
	volatile uint64_t t49 = 48484774420389LLU;

	t49 = (x485%((x486<=x487)*x488));

	if (t49 != 18446744073696017339LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x493 = 116U;
	int16_t x494 = -112;
	int32_t x495 = -1;

	t50 = (x493%((x494<=x495)*x496));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x513 = UINT64_MAX;
	static int64_t x514 = -6535485257114LL;
	volatile int16_t x515 = INT16_MIN;
	uint64_t x516 = 18LLU;
	static volatile uint64_t t51 = 1881101009LLU;

	t51 = (x513%((x514<=x515)*x516));

	if (t51 != 15LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x517 = 7454;
	int32_t x518 = -1;
	static volatile uint64_t x519 = UINT64_MAX;

	t52 = (x517%((x518<=x519)*x520));

	if (t52 != 7454LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x525 = 6U;
	static int64_t x526 = -54003725849609495LL;
	int32_t x527 = INT32_MIN;
	int32_t x528 = INT32_MAX;
	int32_t t53 = 0;

	t53 = (x525%((x526<=x527)*x528));

	if (t53 != 6) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x529 = INT8_MAX;
	int16_t x530 = INT16_MIN;
	uint8_t x531 = 24U;
	volatile int32_t x532 = 1285;
	static int32_t t54 = 5030314;

	t54 = (x529%((x530<=x531)*x532));

	if (t54 != 127) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x537 = UINT64_MAX;
	static int16_t x538 = INT16_MIN;
	int16_t x539 = INT16_MIN;
	uint16_t x540 = UINT16_MAX;
	uint64_t t55 = 62LLU;

	t55 = (x537%((x538<=x539)*x540));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x542 = INT16_MIN;
	static uint32_t x543 = UINT32_MAX;
	int32_t x544 = INT32_MIN;
	static int32_t t56 = 51;

	t56 = (x541%((x542<=x543)*x544));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x557 = INT8_MAX;
	volatile int64_t x559 = INT64_MAX;

	t57 = (x557%((x558<=x559)*x560));

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x569 = 0LL;
	static int64_t x570 = INT64_MIN;
	int16_t x572 = INT16_MIN;
	int64_t t58 = 3791433470LL;

	t58 = (x569%((x570<=x571)*x572));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x577 = INT8_MIN;
	int64_t x578 = -112998680363849LL;
	int64_t x580 = 8634355621703LL;
	int64_t t59 = -11704LL;

	t59 = (x577%((x578<=x579)*x580));

	if (t59 != -128LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x581 = 78;
	uint64_t x582 = 15230285053LLU;
	int64_t x583 = -1LL;
	int32_t x584 = -1190;
	static int32_t t60 = 29;

	t60 = (x581%((x582<=x583)*x584));

	if (t60 != 78) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x585 = INT64_MAX;
	uint8_t x586 = 16U;
	uint32_t x587 = 3333246U;
	int16_t x588 = 31;
	int64_t t61 = -118779818520410LL;

	t61 = (x585%((x586<=x587)*x588));

	if (t61 != 7LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x589 = -1;
	uint16_t x590 = 996U;
	uint64_t x591 = UINT64_MAX;
	static uint8_t x592 = 59U;
	static volatile int32_t t62 = 27;

	t62 = (x589%((x590<=x591)*x592));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x597 = -152693;
	uint8_t x598 = UINT8_MAX;
	static int32_t x599 = 38686;
	int64_t x600 = INT64_MIN;
	volatile int64_t t63 = 5989130LL;

	t63 = (x597%((x598<=x599)*x600));

	if (t63 != -152693LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x601 = 64U;
	int8_t x602 = -1;
	int64_t x603 = INT64_MAX;
	int64_t x604 = -87378LL;

	t64 = (x601%((x602<=x603)*x604));

	if (t64 != 64LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x605 = -75;
	uint16_t x606 = UINT16_MAX;
	uint32_t x607 = UINT32_MAX;
	volatile uint32_t t65 = 2130974U;

	t65 = (x605%((x606<=x607)*x608));

	if (t65 != 7912741U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x613 = INT16_MIN;
	uint64_t x614 = 3925053LLU;
	int64_t x615 = INT64_MIN;
	uint16_t x616 = 2946U;

	t66 = (x613%((x614<=x615)*x616));

	if (t66 != -362) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x617 = INT16_MIN;
	int8_t x619 = INT8_MIN;
	int8_t x620 = INT8_MIN;
	static volatile int32_t t67 = 3;

	t67 = (x617%((x618<=x619)*x620));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x625 = -1;
	int32_t x626 = 503;
	volatile uint32_t x627 = 1475U;
	static int32_t x628 = 56985;
	int32_t t68 = 1429813;

	t68 = (x625%((x626<=x627)*x628));

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x629 = 145324U;
	static int32_t x630 = -272543196;
	uint16_t x631 = UINT16_MAX;
	static volatile uint32_t t69 = 45U;

	t69 = (x629%((x630<=x631)*x632));

	if (t69 != 14254U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x633 = UINT8_MAX;
	int64_t x634 = INT64_MIN;
	uint32_t x635 = 31U;
	int32_t x636 = -1;
	int32_t t70 = -206;

	t70 = (x633%((x634<=x635)*x636));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x642 = INT8_MAX;
	volatile uint64_t x643 = 659206883644LLU;
	int16_t x644 = INT16_MIN;

	t71 = (x641%((x642<=x643)*x644));

	if (t71 != 32767) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x645 = -1;
	int16_t x646 = INT16_MIN;
	uint8_t x647 = 0U;
	uint32_t t72 = 1877901772U;

	t72 = (x645%((x646<=x647)*x648));

	if (t72 != 1929U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x658 = INT64_MIN;
	uint64_t x660 = 13789231LLU;
	uint64_t t73 = 3161020339502LLU;

	t73 = (x657%((x658<=x659)*x660));

	if (t73 != 34LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x673 = -3;
	volatile int8_t x676 = INT8_MAX;
	int32_t t74 = 498461985;

	t74 = (x673%((x674<=x675)*x676));

	if (t74 != -3) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x681 = 319204742U;
	volatile int8_t x682 = INT8_MIN;
	volatile int8_t x683 = 12;
	int8_t x684 = -1;
	static volatile uint32_t t75 = 414U;

	t75 = (x681%((x682<=x683)*x684));

	if (t75 != 319204742U) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x685 = INT8_MAX;
	int64_t x686 = -19411723560777493LL;
	int16_t x687 = INT16_MIN;
	int16_t x688 = -1;
	int32_t t76 = -27874;

	t76 = (x685%((x686<=x687)*x688));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x689 = INT16_MIN;
	uint64_t x690 = UINT64_MAX;
	volatile uint64_t x691 = UINT64_MAX;
	int8_t x692 = 4;
	int32_t t77 = 912;

	t77 = (x689%((x690<=x691)*x692));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x698 = 67U;
	volatile uint16_t x699 = 473U;
	int8_t x700 = INT8_MAX;
	int32_t t78 = 2417;

	t78 = (x697%((x698<=x699)*x700));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x705 = UINT8_MAX;
	int16_t x706 = -1;
	volatile uint16_t x707 = 1110U;
	int64_t x708 = INT64_MAX;
	int64_t t79 = 0LL;

	t79 = (x705%((x706<=x707)*x708));

	if (t79 != 255LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x709 = 561LLU;
	int64_t x710 = INT64_MIN;
	int32_t x711 = INT32_MIN;
	int8_t x712 = INT8_MAX;
	volatile uint64_t t80 = 59LLU;

	t80 = (x709%((x710<=x711)*x712));

	if (t80 != 53LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x717 = -1;
	int32_t x718 = INT32_MIN;
	int8_t x719 = -1;
	uint32_t x720 = 11391429U;
	uint32_t t81 = 486031U;

	t81 = (x717%((x718<=x719)*x720));

	if (t81 != 398562U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x721 = -9446;
	int64_t x722 = INT64_MIN;
	int8_t x723 = -1;
	int32_t x724 = INT32_MIN;
	volatile int32_t t82 = -750848;

	t82 = (x721%((x722<=x723)*x724));

	if (t82 != -9446) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x725 = UINT64_MAX;
	static uint16_t x726 = 22395U;
	volatile int32_t x727 = 5049856;
	int8_t x728 = -12;
	volatile uint64_t t83 = 319143LLU;

	t83 = (x725%((x726<=x727)*x728));

	if (t83 != 11LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x730 = INT16_MIN;
	static volatile int16_t x731 = -14;
	int64_t x732 = 188806111022470561LL;
	volatile int64_t t84 = 202306LL;

	t84 = (x729%((x730<=x731)*x732));

	if (t84 != 19609380LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x734 = INT64_MIN;
	volatile int64_t x735 = -135083451232LL;
	int64_t x736 = -216836292665LL;
	volatile int64_t t85 = -377LL;

	t85 = (x733%((x734<=x735)*x736));

	if (t85 != 127LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x737 = -435;
	uint32_t x738 = 943071U;
	static int16_t x739 = INT16_MIN;
	int16_t x740 = INT16_MIN;
	int32_t t86 = -596468;

	t86 = (x737%((x738<=x739)*x740));

	if (t86 != -435) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x741 = 1937;
	static int16_t x742 = INT16_MIN;
	int32_t t87 = 1200052;

	t87 = (x741%((x742<=x743)*x744));

	if (t87 != 5) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x745 = INT16_MAX;
	int64_t x746 = -440474273LL;
	int8_t x747 = INT8_MIN;
	static int16_t x748 = INT16_MIN;
	static int32_t t88 = 0;

	t88 = (x745%((x746<=x747)*x748));

	if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x765 = 1810946;
	static int8_t x767 = INT8_MAX;
	int32_t t89 = 4;

	t89 = (x765%((x766<=x767)*x768));

	if (t89 != 41501) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x769 = 14606378U;
	static int8_t x770 = INT8_MIN;
	uint32_t x771 = UINT32_MAX;
	volatile uint16_t x772 = UINT16_MAX;
	volatile uint32_t t90 = 60610U;

	t90 = (x769%((x770<=x771)*x772));

	if (t90 != 57608U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x777 = -4;
	int64_t x778 = INT64_MIN;
	uint32_t x779 = 256535U;
	static volatile uint16_t x780 = 192U;
	volatile int32_t t91 = -3348;

	t91 = (x777%((x778<=x779)*x780));

	if (t91 != -4) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x781 = 60;
	int32_t x783 = INT32_MAX;
	int8_t x784 = INT8_MIN;
	volatile int32_t t92 = 0;

	t92 = (x781%((x782<=x783)*x784));

	if (t92 != 60) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x794 = -1;
	uint64_t x795 = UINT64_MAX;
	volatile uint16_t x796 = UINT16_MAX;
	volatile int32_t t93 = 44611;

	t93 = (x793%((x794<=x795)*x796));

	if (t93 != 212) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint64_t x805 = 2LLU;
	int64_t x807 = -1LL;
	uint64_t x808 = UINT64_MAX;
	volatile uint64_t t94 = 12960134005LLU;

	t94 = (x805%((x806<=x807)*x808));

	if (t94 != 2LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x813 = UINT64_MAX;
	int16_t x814 = -1;
	static uint64_t x815 = UINT64_MAX;
	static uint8_t x816 = UINT8_MAX;
	volatile uint64_t t95 = 264262974613228891LLU;

	t95 = (x813%((x814<=x815)*x816));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x821 = UINT16_MAX;
	static uint64_t x823 = 146934183696855LLU;
	uint32_t x824 = UINT32_MAX;
	volatile uint32_t t96 = 96479U;

	t96 = (x821%((x822<=x823)*x824));

	if (t96 != 65535U) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x825 = 1615611232769LLU;
	volatile uint64_t x826 = UINT64_MAX;
	int16_t x827 = -1;
	volatile int32_t x828 = -1;

	t97 = (x825%((x826<=x827)*x828));

	if (t97 != 1615611232769LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x829 = 22215;
	int8_t x830 = -1;
	volatile int64_t x831 = INT64_MAX;
	uint64_t x832 = 119070568239LLU;
	static uint64_t t98 = 1LLU;

	t98 = (x829%((x830<=x831)*x832));

	if (t98 != 22215LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x833 = INT8_MIN;
	int32_t x835 = INT32_MIN;
	int32_t x836 = INT32_MIN;

	t99 = (x833%((x834<=x835)*x836));

	if (t99 != -128) { NG(); } else { ; }
	
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

