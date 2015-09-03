#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x88 = -10881177;
volatile int32_t t1 = -13124;
volatile uint64_t x97 = 173207554106LLU;
volatile uint64_t x98 = 374979046710456179LLU;
uint16_t x115 = UINT16_MAX;
int64_t t3 = 1642270315398975LL;
int32_t x136 = INT32_MAX;
static int16_t x145 = INT16_MIN;
uint16_t x147 = 277U;
int32_t t6 = -79884;
int64_t x150 = INT64_MIN;
int8_t x151 = 13;
uint64_t x153 = 1000064600215324LLU;
volatile uint16_t x163 = 26U;
int32_t x175 = INT32_MAX;
uint64_t x182 = 0LLU;
volatile uint8_t x189 = 53U;
int8_t x190 = INT8_MAX;
int8_t x197 = -1;
uint16_t x200 = 2972U;
int32_t x201 = INT32_MIN;
uint8_t x211 = 1U;
int32_t t19 = 625315588;
volatile int32_t t22 = -2;
uint16_t x282 = UINT16_MAX;
static uint32_t x283 = 76425075U;
int32_t x293 = INT32_MIN;
int32_t t25 = INT32_MIN;
int32_t x353 = INT32_MIN;
int64_t x379 = INT64_MAX;
volatile uint64_t t30 = UINT64_MAX;
int32_t x382 = -1;
int64_t t31 = -2816954917LL;
volatile int32_t x385 = 16698;
volatile uint32_t t32 = 889U;
uint8_t x393 = 3U;
int32_t x399 = 222373618;
static int64_t x412 = INT64_MAX;
int32_t x427 = INT32_MAX;
static uint32_t x446 = UINT32_MAX;
static volatile int32_t t42 = -211524359;
int8_t x481 = -48;
int64_t x483 = INT64_MAX;
static volatile int64_t x498 = INT64_MIN;
volatile int64_t t47 = -1507216350LL;
uint64_t t48 = 173385821102036LLU;
int32_t x550 = INT32_MIN;
uint64_t x551 = UINT64_MAX;
volatile int32_t t51 = -104705;
static int64_t x565 = 0LL;
uint8_t x567 = UINT8_MAX;
static volatile uint32_t x572 = 13U;
volatile uint32_t x578 = 0U;
int32_t x580 = INT32_MIN;
int16_t x585 = INT16_MAX;
int8_t x610 = INT8_MIN;
volatile int32_t t62 = -12046984;
static uint8_t x622 = 66U;
int16_t x623 = INT16_MAX;
static uint32_t x625 = 5U;
int16_t x626 = -1;
int32_t x636 = INT32_MIN;
int32_t t65 = 1;
static volatile int64_t t66 = 30566114664LL;
static uint32_t x651 = 19840926U;
int16_t x663 = -1;
uint32_t x664 = 46819U;
uint64_t x671 = UINT64_MAX;
int64_t t69 = 1LL;
int32_t x688 = -8162901;
static uint64_t x691 = 507865772408602LLU;
int64_t x725 = 16371878639911781LL;
uint8_t x727 = 11U;
uint32_t x728 = UINT32_MAX;
int64_t t75 = 504LL;
volatile uint16_t x733 = UINT16_MAX;
int32_t x745 = 1;
uint16_t x749 = 1560U;
int16_t x751 = INT16_MAX;
static int16_t x765 = -1;
static int16_t x772 = INT16_MIN;
volatile int8_t x788 = INT8_MIN;
int32_t x790 = INT32_MIN;
volatile int32_t t84 = -445247;
int32_t x833 = -4166;
static uint64_t x847 = 569709762780333718LLU;
volatile int32_t t88 = 29406915;
uint16_t x861 = 701U;
int64_t x872 = INT64_MIN;
uint64_t t97 = 7307LLU;
int64_t x908 = 3520485710506469516LL;
uint16_t x939 = 221U;


void f0(void) {
	static uint32_t x25 = 14U;
	volatile int8_t x26 = INT8_MIN;
	static int8_t x27 = -1;
	int8_t x28 = -47;
	volatile uint32_t t0 = 369U;

	t0 = (x25/((x26<x27)%x28));

	if (t0 != 14U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x85 = -1032874045;
	int32_t x86 = -1;
	static uint16_t x87 = UINT16_MAX;

	t1 = (x85/((x86<x87)%x88));

	if (t1 != -1032874045) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x99 = INT16_MIN;
	volatile int32_t x100 = INT32_MIN;
	static volatile uint64_t t2 = 421357939LLU;

	t2 = (x97/((x98<x99)%x100));

	if (t2 != 173207554106LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x113 = INT32_MIN;
	int8_t x114 = -1;
	int64_t x116 = 521297527904551184LL;

	t3 = (x113/((x114<x115)%x116));

	if (t3 != -2147483648LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x121 = INT8_MIN;
	static int64_t x122 = -68675549913565262LL;
	int8_t x123 = INT8_MIN;
	uint64_t x124 = 2771464035LLU;
	uint64_t t4 = 25946512038LLU;

	t4 = (x121/((x122<x123)%x124));

	if (t4 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x133 = UINT64_MAX;
	static int8_t x134 = -1;
	uint8_t x135 = UINT8_MAX;
	volatile uint64_t t5 = UINT64_MAX;

	t5 = (x133/((x134<x135)%x136));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x146 = INT16_MIN;
	static int16_t x148 = -4044;

	t6 = (x145/((x146<x147)%x148));

	if (t6 != -32768) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x149 = INT32_MAX;
	uint16_t x152 = UINT16_MAX;
	static volatile int32_t t7 = INT32_MAX;

	t7 = (x149/((x150<x151)%x152));

	if (t7 != INT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x154 = 1216U;
	volatile int64_t x155 = 1394225634395098LL;
	uint32_t x156 = 25278743U;
	static volatile uint64_t t8 = 16677644842970LLU;

	t8 = (x153/((x154<x155)%x156));

	if (t8 != 1000064600215324LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x161 = INT32_MAX;
	int16_t x162 = INT16_MIN;
	static int8_t x164 = INT8_MIN;
	volatile int32_t t9 = INT32_MAX;

	t9 = (x161/((x162<x163)%x164));

	if (t9 != INT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x165 = -1;
	int32_t x166 = INT32_MIN;
	int64_t x167 = -1LL;
	int8_t x168 = -32;
	volatile int32_t t10 = -53;

	t10 = (x165/((x166<x167)%x168));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int64_t x173 = 31LL;
	int64_t x174 = INT64_MIN;
	uint16_t x176 = UINT16_MAX;
	int64_t t11 = 40845865470LL;

	t11 = (x173/((x174<x175)%x176));

	if (t11 != 31LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x181 = -59;
	static int64_t x183 = INT64_MIN;
	uint64_t x184 = UINT64_MAX;
	uint64_t t12 = 18971LLU;

	t12 = (x181/((x182<x183)%x184));

	if (t12 != 18446744073709551557LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x191 = 3532571LLU;
	volatile uint64_t x192 = 66091820334LLU;
	uint64_t t13 = 2082910979260355398LLU;

	t13 = (x189/((x190<x191)%x192));

	if (t13 != 53LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x198 = INT8_MIN;
	int32_t x199 = 29833374;
	int32_t t14 = 760894132;

	t14 = (x197/((x198<x199)%x200));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x202 = INT8_MIN;
	uint16_t x203 = 1U;
	volatile int64_t x204 = -1664349038LL;
	int64_t t15 = -62265751365290580LL;

	t15 = (x201/((x202<x203)%x204));

	if (t15 != -2147483648LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x209 = INT16_MIN;
	volatile int16_t x210 = -4493;
	int32_t x212 = 67088140;
	int32_t t16 = 0;

	t16 = (x209/((x210<x211)%x212));

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x221 = 3U;
	int64_t x222 = INT64_MIN;
	uint32_t x223 = 124809440U;
	static uint32_t x224 = 755078U;
	volatile uint32_t t17 = 82476U;

	t17 = (x221/((x222<x223)%x224));

	if (t17 != 3U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x225 = 4006197703LL;
	int64_t x226 = INT64_MIN;
	int8_t x227 = INT8_MIN;
	static uint16_t x228 = 3800U;
	int64_t t18 = 2091321LL;

	t18 = (x225/((x226<x227)%x228));

	if (t18 != 4006197703LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x237 = -1;
	uint16_t x238 = 1288U;
	volatile int64_t x239 = INT64_MAX;
	volatile uint16_t x240 = 47U;

	t19 = (x237/((x238<x239)%x240));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x265 = INT32_MIN;
	static int16_t x266 = INT16_MIN;
	int32_t x267 = -1;
	int16_t x268 = INT16_MIN;
	volatile int32_t t20 = INT32_MIN;

	t20 = (x265/((x266<x267)%x268));

	if (t20 != INT32_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x269 = 6U;
	uint32_t x270 = 59637U;
	int32_t x271 = INT32_MIN;
	int8_t x272 = 15;
	volatile int32_t t21 = 821;

	t21 = (x269/((x270<x271)%x272));

	if (t21 != 6) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x273 = 62;
	volatile uint32_t x274 = 1U;
	int8_t x275 = INT8_MIN;
	volatile int16_t x276 = INT16_MIN;

	t22 = (x273/((x274<x275)%x276));

	if (t22 != 62) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x281 = -3396890016LL;
	volatile int16_t x284 = INT16_MIN;
	static volatile int64_t t23 = -7385800471LL;

	t23 = (x281/((x282<x283)%x284));

	if (t23 != -3396890016LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x289 = -1;
	static int32_t x290 = -1;
	uint16_t x291 = UINT16_MAX;
	static int8_t x292 = INT8_MIN;
	volatile int32_t t24 = -270771;

	t24 = (x289/((x290<x291)%x292));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x294 = 2348743U;
	volatile int16_t x295 = -5;
	volatile uint16_t x296 = 23U;

	t25 = (x293/((x294<x295)%x296));

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x305 = INT8_MIN;
	volatile uint16_t x306 = 3U;
	uint32_t x307 = 407847625U;
	static uint16_t x308 = 338U;
	volatile int32_t t26 = 247476029;

	t26 = (x305/((x306<x307)%x308));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x313 = INT8_MIN;
	int64_t x314 = -1LL;
	int16_t x315 = 1802;
	int16_t x316 = INT16_MIN;
	int32_t t27 = -67162367;

	t27 = (x313/((x314<x315)%x316));

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x354 = -1;
	uint8_t x355 = UINT8_MAX;
	int32_t x356 = -8751834;
	volatile int32_t t28 = INT32_MIN;

	t28 = (x353/((x354<x355)%x356));

	if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x365 = INT8_MAX;
	volatile int64_t x366 = -966998212LL;
	int32_t x367 = 4662;
	int16_t x368 = INT16_MIN;
	volatile int32_t t29 = 2;

	t29 = (x365/((x366<x367)%x368));

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x377 = UINT64_MAX;
	int8_t x378 = INT8_MIN;
	int64_t x380 = 37577477LL;

	t30 = (x377/((x378<x379)%x380));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x381 = 4282896000LL;
	int8_t x383 = INT8_MAX;
	volatile uint8_t x384 = 6U;

	t31 = (x381/((x382<x383)%x384));

	if (t31 != 4282896000LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x386 = -1;
	int64_t x387 = INT64_MAX;
	uint32_t x388 = 8029U;

	t32 = (x385/((x386<x387)%x388));

	if (t32 != 16698U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x394 = -16210;
	static int8_t x395 = 1;
	volatile uint64_t x396 = 132942148819703LLU;
	volatile uint64_t t33 = 46565830655654357LLU;

	t33 = (x393/((x394<x395)%x396));

	if (t33 != 3LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x397 = INT16_MIN;
	static volatile int32_t x398 = 28112;
	uint8_t x400 = 5U;
	int32_t t34 = -112420;

	t34 = (x397/((x398<x399)%x400));

	if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x401 = INT32_MIN;
	int64_t x402 = INT64_MIN;
	int32_t x403 = 69558;
	volatile int32_t x404 = INT32_MAX;
	int32_t t35 = INT32_MIN;

	t35 = (x401/((x402<x403)%x404));

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x409 = UINT32_MAX;
	int8_t x410 = INT8_MIN;
	int8_t x411 = -1;
	int64_t t36 = 194154401741381LL;

	t36 = (x409/((x410<x411)%x412));

	if (t36 != 4294967295LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x417 = INT32_MIN;
	int64_t x418 = -1LL;
	int16_t x419 = 105;
	int16_t x420 = 91;
	int32_t t37 = INT32_MIN;

	t37 = (x417/((x418<x419)%x420));

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x421 = INT8_MIN;
	int32_t x422 = -1;
	int16_t x423 = INT16_MAX;
	volatile uint16_t x424 = 9U;
	int32_t t38 = -745376;

	t38 = (x421/((x422<x423)%x424));

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x425 = INT64_MIN;
	int16_t x426 = INT16_MAX;
	volatile int64_t x428 = INT64_MAX;
	int64_t t39 = INT64_MIN;

	t39 = (x425/((x426<x427)%x428));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x429 = -1;
	static int8_t x430 = -1;
	static int16_t x431 = 15;
	static uint8_t x432 = 4U;
	int32_t t40 = -7622;

	t40 = (x429/((x430<x431)%x432));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x437 = INT32_MIN;
	uint8_t x438 = 0U;
	uint16_t x439 = 3U;
	volatile int64_t x440 = 609732891LL;
	volatile int64_t t41 = -6LL;

	t41 = (x437/((x438<x439)%x440));

	if (t41 != -2147483648LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int16_t x445 = -4067;
	volatile uint64_t x447 = 23405885437859LLU;
	int16_t x448 = INT16_MAX;

	t42 = (x445/((x446<x447)%x448));

	if (t42 != -4067) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x457 = 3;
	int64_t x458 = INT64_MIN;
	uint16_t x459 = 2404U;
	uint16_t x460 = 63U;
	volatile int32_t t43 = -30;

	t43 = (x457/((x458<x459)%x460));

	if (t43 != 3) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x482 = 43768054LLU;
	volatile int64_t x484 = 211261119355591LL;
	volatile int64_t t44 = -3LL;

	t44 = (x481/((x482<x483)%x484));

	if (t44 != -48LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x497 = INT32_MIN;
	int32_t x499 = INT32_MIN;
	int64_t x500 = INT64_MAX;
	volatile int64_t t45 = -34435704578586872LL;

	t45 = (x497/((x498<x499)%x500));

	if (t45 != -2147483648LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x501 = INT8_MIN;
	int8_t x502 = -9;
	uint8_t x503 = 3U;
	uint16_t x504 = 3150U;
	static volatile int32_t t46 = -16510231;

	t46 = (x501/((x502<x503)%x504));

	if (t46 != -128) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x505 = 11U;
	volatile int16_t x506 = -105;
	uint8_t x507 = UINT8_MAX;
	int64_t x508 = INT64_MAX;

	t47 = (x505/((x506<x507)%x508));

	if (t47 != 11LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x521 = 66828273225LLU;
	static uint32_t x522 = 857110U;
	static volatile int16_t x523 = INT16_MIN;
	uint64_t x524 = 115178LLU;

	t48 = (x521/((x522<x523)%x524));

	if (t48 != 66828273225LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x533 = INT16_MAX;
	static int64_t x534 = INT64_MIN;
	volatile int64_t x535 = 1555078112LL;
	volatile int8_t x536 = INT8_MIN;
	int32_t t49 = 1854;

	t49 = (x533/((x534<x535)%x536));

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x545 = INT8_MIN;
	int16_t x546 = -19;
	int32_t x547 = INT32_MAX;
	volatile uint32_t x548 = UINT32_MAX;
	uint32_t t50 = 208623249U;

	t50 = (x545/((x546<x547)%x548));

	if (t50 != 4294967168U) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint8_t x549 = UINT8_MAX;
	static int32_t x552 = 185;

	t51 = (x549/((x550<x551)%x552));

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x557 = INT32_MAX;
	int32_t x558 = -79587;
	int64_t x559 = INT64_MAX;
	volatile int8_t x560 = INT8_MAX;
	int32_t t52 = INT32_MAX;

	t52 = (x557/((x558<x559)%x560));

	if (t52 != INT32_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x566 = INT64_MIN;
	int16_t x568 = INT16_MAX;
	int64_t t53 = 112524648920160806LL;

	t53 = (x565/((x566<x567)%x568));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x569 = 4U;
	int64_t x570 = INT64_MIN;
	static uint16_t x571 = UINT16_MAX;
	volatile uint32_t t54 = 1U;

	t54 = (x569/((x570<x571)%x572));

	if (t54 != 4U) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x573 = 44U;
	volatile int16_t x574 = INT16_MAX;
	uint64_t x575 = 2900834LLU;
	int16_t x576 = INT16_MAX;
	static volatile int32_t t55 = 178453;

	t55 = (x573/((x574<x575)%x576));

	if (t55 != 44) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x577 = UINT64_MAX;
	uint64_t x579 = UINT64_MAX;
	uint64_t t56 = UINT64_MAX;

	t56 = (x577/((x578<x579)%x580));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x581 = -1;
	volatile int32_t x582 = INT32_MIN;
	uint32_t x583 = UINT32_MAX;
	uint64_t x584 = UINT64_MAX;
	uint64_t t57 = UINT64_MAX;

	t57 = (x581/((x582<x583)%x584));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x586 = 1;
	static uint64_t x587 = UINT64_MAX;
	static uint16_t x588 = UINT16_MAX;
	volatile int32_t t58 = -7535;

	t58 = (x585/((x586<x587)%x588));

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x589 = INT8_MIN;
	uint64_t x590 = 1LLU;
	int32_t x591 = 65;
	static uint64_t x592 = 267507LLU;
	volatile uint64_t t59 = 43LLU;

	t59 = (x589/((x590<x591)%x592));

	if (t59 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x597 = INT8_MIN;
	int16_t x598 = INT16_MAX;
	static uint16_t x599 = UINT16_MAX;
	uint64_t x600 = 3671150749630156LLU;
	static uint64_t t60 = 180203LLU;

	t60 = (x597/((x598<x599)%x600));

	if (t60 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x609 = UINT64_MAX;
	int32_t x611 = 14287;
	int16_t x612 = -11269;
	uint64_t t61 = UINT64_MAX;

	t61 = (x609/((x610<x611)%x612));

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x613 = -1;
	int64_t x614 = -271LL;
	static uint32_t x615 = 7340251U;
	volatile uint16_t x616 = 889U;

	t62 = (x613/((x614<x615)%x616));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x621 = -1;
	int16_t x624 = INT16_MIN;
	static int32_t t63 = -2;

	t63 = (x621/((x622<x623)%x624));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x627 = 0;
	static int32_t x628 = 5182;
	uint32_t t64 = 1277343U;

	t64 = (x625/((x626<x627)%x628));

	if (t64 != 5U) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x633 = 35U;
	int8_t x634 = -1;
	uint16_t x635 = 176U;

	t65 = (x633/((x634<x635)%x636));

	if (t65 != 35) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x641 = -8523993549LL;
	uint32_t x642 = 454U;
	uint16_t x643 = 5743U;
	int32_t x644 = -5625214;

	t66 = (x641/((x642<x643)%x644));

	if (t66 != -8523993549LL) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x649 = 95962007U;
	uint8_t x650 = 0U;
	int16_t x652 = INT16_MIN;
	static volatile uint32_t t67 = 6155U;

	t67 = (x649/((x650<x651)%x652));

	if (t67 != 95962007U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x661 = 6U;
	int64_t x662 = INT64_MIN;
	static volatile uint32_t t68 = 1U;

	t68 = (x661/((x662<x663)%x664));

	if (t68 != 6U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x669 = 0U;
	volatile uint16_t x670 = 1U;
	static int64_t x672 = -62710LL;

	t69 = (x669/((x670<x671)%x672));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x685 = 19LLU;
	int32_t x686 = 1680;
	uint64_t x687 = 7386235319LLU;
	uint64_t t70 = 48251482986279LLU;

	t70 = (x685/((x686<x687)%x688));

	if (t70 != 19LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x689 = 718594938753394LLU;
	static uint32_t x690 = 3442026U;
	static uint16_t x692 = 4U;
	volatile uint64_t t71 = 68LLU;

	t71 = (x689/((x690<x691)%x692));

	if (t71 != 718594938753394LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x701 = -1;
	int8_t x702 = INT8_MIN;
	int8_t x703 = -10;
	volatile int64_t x704 = -258708LL;
	int64_t t72 = 171299605817106LL;

	t72 = (x701/((x702<x703)%x704));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x705 = 2U;
	uint32_t x706 = 523U;
	int64_t x707 = 44057196721LL;
	static int64_t x708 = INT64_MIN;
	int64_t t73 = 2703156084248439858LL;

	t73 = (x705/((x706<x707)%x708));

	if (t73 != 2LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x717 = INT32_MIN;
	volatile uint32_t x718 = 1026139U;
	int8_t x719 = -1;
	static int64_t x720 = INT64_MIN;
	volatile int64_t t74 = -1LL;

	t74 = (x717/((x718<x719)%x720));

	if (t74 != -2147483648LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x726 = 8;

	t75 = (x725/((x726<x727)%x728));

	if (t75 != 16371878639911781LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x734 = -32697379713LL;
	uint64_t x735 = UINT64_MAX;
	volatile int8_t x736 = INT8_MAX;
	int32_t t76 = 1;

	t76 = (x733/((x734<x735)%x736));

	if (t76 != 65535) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x746 = -54;
	uint16_t x747 = UINT16_MAX;
	volatile int8_t x748 = -26;
	int32_t t77 = 4;

	t77 = (x745/((x746<x747)%x748));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x750 = INT64_MIN;
	volatile int64_t x752 = INT64_MIN;
	volatile int64_t t78 = 30257199866558452LL;

	t78 = (x749/((x750<x751)%x752));

	if (t78 != 1560LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x766 = INT64_MIN;
	uint32_t x767 = UINT32_MAX;
	volatile int8_t x768 = INT8_MAX;
	int32_t t79 = -574;

	t79 = (x765/((x766<x767)%x768));

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x769 = 1U;
	int16_t x770 = -1;
	int64_t x771 = INT64_MAX;
	int32_t t80 = 261;

	t80 = (x769/((x770<x771)%x772));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x785 = 10U;
	volatile uint64_t x786 = 1137LLU;
	int32_t x787 = -14676;
	volatile int32_t t81 = -34339669;

	t81 = (x785/((x786<x787)%x788));

	if (t81 != 10) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x789 = -22895072601LL;
	uint16_t x791 = 103U;
	int8_t x792 = INT8_MAX;
	volatile int64_t t82 = -142171679476304719LL;

	t82 = (x789/((x790<x791)%x792));

	if (t82 != -22895072601LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x813 = UINT32_MAX;
	int8_t x814 = INT8_MAX;
	volatile int32_t x815 = INT32_MAX;
	int8_t x816 = INT8_MIN;
	uint32_t t83 = UINT32_MAX;

	t83 = (x813/((x814<x815)%x816));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x817 = -1;
	uint64_t x818 = 24956045LLU;
	int8_t x819 = -1;
	int16_t x820 = 5207;

	t84 = (x817/((x818<x819)%x820));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x825 = INT8_MAX;
	uint64_t x826 = 21LLU;
	uint16_t x827 = 3365U;
	int64_t x828 = 12368985348LL;
	int64_t t85 = 10229LL;

	t85 = (x825/((x826<x827)%x828));

	if (t85 != 127LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x829 = -26;
	volatile int8_t x830 = INT8_MIN;
	static int16_t x831 = INT16_MAX;
	volatile uint32_t x832 = 960283432U;
	uint32_t t86 = 11507781U;

	t86 = (x829/((x830<x831)%x832));

	if (t86 != 4294967270U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x834 = -1;
	uint16_t x835 = 19U;
	static volatile uint8_t x836 = 6U;
	int32_t t87 = -2;

	t87 = (x833/((x834<x835)%x836));

	if (t87 != -4166) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x845 = -4;
	volatile int8_t x846 = INT8_MAX;
	uint16_t x848 = 835U;

	t88 = (x845/((x846<x847)%x848));

	if (t88 != -4) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x849 = UINT64_MAX;
	int64_t x850 = INT64_MIN;
	static int16_t x851 = -52;
	int32_t x852 = INT32_MIN;
	volatile uint64_t t89 = UINT64_MAX;

	t89 = (x849/((x850<x851)%x852));

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x857 = INT8_MIN;
	int16_t x858 = 50;
	int8_t x859 = INT8_MAX;
	int32_t x860 = -207;
	int32_t t90 = 66795;

	t90 = (x857/((x858<x859)%x860));

	if (t90 != -128) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x862 = -1;
	volatile uint8_t x863 = UINT8_MAX;
	uint8_t x864 = UINT8_MAX;
	int32_t t91 = -2790;

	t91 = (x861/((x862<x863)%x864));

	if (t91 != 701) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x869 = INT64_MIN;
	static int8_t x870 = INT8_MAX;
	uint64_t x871 = 290563305275740LLU;
	int64_t t92 = INT64_MIN;

	t92 = (x869/((x870<x871)%x872));

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x873 = INT8_MIN;
	uint8_t x874 = 9U;
	uint32_t x875 = UINT32_MAX;
	static uint16_t x876 = 33U;
	int32_t t93 = 74;

	t93 = (x873/((x874<x875)%x876));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x877 = INT16_MIN;
	int16_t x878 = 0;
	int32_t x879 = INT32_MAX;
	uint64_t x880 = 190241799305587125LLU;
	uint64_t t94 = 464LLU;

	t94 = (x877/((x878<x879)%x880));

	if (t94 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x881 = 1;
	static int64_t x882 = INT64_MIN;
	int64_t x883 = INT64_MAX;
	volatile int32_t x884 = INT32_MAX;
	int32_t t95 = -43743366;

	t95 = (x881/((x882<x883)%x884));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int32_t x893 = -1;
	int8_t x894 = 15;
	volatile int32_t x895 = INT32_MAX;
	uint64_t x896 = 2273020LLU;
	volatile uint64_t t96 = UINT64_MAX;

	t96 = (x893/((x894<x895)%x896));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x897 = 11191206923596223LLU;
	static int32_t x898 = -2757;
	volatile int16_t x899 = -1;
	volatile uint16_t x900 = 5755U;

	t97 = (x897/((x898<x899)%x900));

	if (t97 != 11191206923596223LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x905 = 86U;
	static uint8_t x906 = 110U;
	uint64_t x907 = 3176294429910986LLU;
	static int64_t t98 = -4591LL;

	t98 = (x905/((x906<x907)%x908));

	if (t98 != 86LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x937 = INT64_MIN;
	volatile int16_t x938 = 108;
	int64_t x940 = 55163857976264LL;
	volatile int64_t t99 = INT64_MIN;

	t99 = (x937/((x938<x939)%x940));

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

