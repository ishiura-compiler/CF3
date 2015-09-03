#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x22 = INT16_MIN;
volatile int64_t t1 = -83851745343037LL;
int64_t x40 = -2053192368235964LL;
int64_t x49 = -48600337591LL;
static int8_t x54 = -1;
static uint64_t x56 = 2474974220803972851LLU;
static uint16_t x65 = 0U;
uint8_t x68 = 1U;
volatile int64_t t10 = 1LL;
uint8_t x94 = UINT8_MAX;
uint32_t x96 = 6U;
int64_t t13 = -1973LL;
int32_t x182 = -365;
volatile int32_t t16 = -29974626;
int64_t x185 = -9049423LL;
int8_t x189 = -1;
volatile int64_t t18 = 36861LL;
static volatile int64_t x197 = -14041924LL;
static int64_t x224 = -3784394438967812LL;
static int64_t x225 = INT64_MAX;
int8_t x227 = -29;
int64_t t23 = -46LL;
volatile int32_t t25 = -20568219;
static uint32_t x253 = 421U;
volatile int64_t x274 = -1LL;
volatile int64_t t30 = 281400763LL;
int8_t x280 = -1;
volatile uint16_t x286 = UINT16_MAX;
volatile int64_t t33 = -252370506134168333LL;
int32_t x311 = INT32_MAX;
int32_t x312 = INT32_MAX;
uint8_t x321 = 17U;
volatile int32_t x323 = 50778691;
static volatile int32_t t35 = 29;
static int64_t t36 = -133495LL;
static uint64_t t37 = 87039515692525LLU;
uint8_t x380 = UINT8_MAX;
static int16_t x409 = INT16_MIN;
volatile int8_t x411 = INT8_MIN;
volatile uint64_t t41 = 1597LLU;
uint8_t x421 = UINT8_MAX;
int64_t x424 = 82707024355078696LL;
static uint8_t x425 = 1U;
uint32_t x426 = UINT32_MAX;
volatile uint8_t x428 = 8U;
volatile int64_t t44 = -693285867LL;
int64_t x468 = 48482583LL;
volatile uint64_t t45 = 2063019316093LLU;
int32_t x484 = 56098;
int16_t x489 = INT16_MIN;
uint32_t x495 = 229320334U;
int64_t x496 = -1LL;
int64_t t49 = 1192573846832050379LL;
int8_t x514 = 6;
static int8_t x516 = -1;
int32_t x535 = -1;
int64_t x544 = INT64_MAX;
uint16_t x570 = 13215U;
volatile int16_t x572 = INT16_MIN;
static int8_t x579 = -1;
volatile int64_t t59 = -57LL;
int64_t t60 = -1763692910LL;
int8_t x606 = 17;
int32_t t61 = 50456468;
int16_t x609 = -1;
static volatile int32_t t63 = -101488101;
int8_t x633 = INT8_MAX;
uint8_t x634 = 10U;
volatile int32_t x636 = -14561764;
static int16_t x640 = INT16_MIN;
uint32_t t68 = 3941U;
static volatile int16_t x681 = INT16_MAX;
int64_t x694 = INT64_MIN;
uint16_t x695 = 283U;
volatile int64_t x701 = 432294LL;
static int8_t x702 = INT8_MAX;
volatile int16_t x713 = -41;
int16_t x721 = INT16_MIN;
int32_t x742 = -1;
int8_t x749 = -7;
int64_t x761 = INT64_MIN;
static int64_t t76 = -118971245170161742LL;
int32_t x875 = 4231;
static volatile int32_t x888 = INT32_MIN;
int16_t x893 = INT16_MIN;
volatile uint64_t x900 = 1111493740891LLU;
volatile uint64_t x921 = 59558LLU;
static volatile uint64_t t90 = 3989612308234255LLU;
static int64_t x929 = -626916687358636LL;
uint8_t x937 = 2U;
uint64_t x1006 = 19416864834839901LLU;
volatile int16_t x1008 = INT16_MAX;
int64_t x1015 = INT64_MAX;
volatile int64_t t99 = 37426929597602LL;


void f0(void) {
	uint32_t x13 = UINT32_MAX;
	int32_t x14 = 6971;
	int32_t x15 = INT32_MIN;
	uint32_t x16 = 20513U;
	uint32_t t0 = 323U;

	t0 = (x13/(x14&(x15/x16)));

	if (t0 != 693631U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x21 = INT8_MAX;
	int64_t x23 = INT64_MIN;
	volatile uint16_t x24 = 6U;

	t1 = (x21/(x22&(x23/x24)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x29 = INT8_MIN;
	volatile int64_t x30 = INT64_MAX;
	uint8_t x31 = 20U;
	int16_t x32 = -1;
	volatile int64_t t2 = -139263499000534LL;

	t2 = (x29/(x30&(x31/x32)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x37 = -8;
	uint8_t x38 = UINT8_MAX;
	int64_t x39 = INT64_MIN;
	volatile int64_t t3 = 18009756260974246LL;

	t3 = (x37/(x38&(x39/x40)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x45 = INT64_MAX;
	int32_t x46 = -139006;
	static volatile int32_t x47 = INT32_MIN;
	volatile int16_t x48 = INT16_MAX;
	volatile int64_t t4 = 26831676965510070LL;

	t4 = (x45/(x46&(x47/x48)));

	if (t4 != -45092802636401LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x50 = -1;
	uint16_t x51 = UINT16_MAX;
	uint8_t x52 = 3U;
	volatile int64_t t5 = -9581321184736LL;

	t5 = (x49/(x50&(x51/x52)));

	if (t5 != -2224780LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x53 = INT16_MIN;
	uint64_t x55 = UINT64_MAX;
	static volatile uint64_t t6 = 1066729LLU;

	t6 = (x53/(x54&(x55/x56)));

	if (t6 != 2635249153387074121LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x66 = 16;
	int16_t x67 = -9060;
	int32_t t7 = 155867568;

	t7 = (x65/(x66&(x67/x68)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x77 = 26220132332022025LL;
	int32_t x78 = -1;
	uint16_t x79 = UINT16_MAX;
	uint16_t x80 = 2145U;
	volatile int64_t t8 = -104438399LL;

	t8 = (x77/(x78&(x79/x80)));

	if (t8 != 874004411067400LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x81 = UINT32_MAX;
	int16_t x82 = 52;
	int64_t x83 = -1092188607703348LL;
	int32_t x84 = -1;
	volatile int64_t t9 = -248812LL;

	t9 = (x81/(x82&(x83/x84)));

	if (t9 != 82595524LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x89 = INT64_MIN;
	int8_t x90 = INT8_MIN;
	static volatile int16_t x91 = -716;
	int64_t x92 = -1LL;

	t10 = (x89/(x90&(x91/x92)));

	if (t10 != -14411518807585587LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x93 = -1;
	static volatile int16_t x95 = INT16_MAX;
	uint32_t t11 = 3U;

	t11 = (x93/(x94&(x95/x96)));

	if (t11 != 50529027U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x97 = -9;
	int64_t x98 = INT64_MIN;
	volatile int32_t x99 = -205970;
	static int8_t x100 = 1;
	int64_t t12 = 1998LL;

	t12 = (x97/(x98&(x99/x100)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x101 = INT32_MIN;
	int8_t x102 = INT8_MIN;
	int64_t x103 = -25537489449012893LL;
	volatile uint32_t x104 = 15023211U;

	t13 = (x101/(x102&(x103/x104)));

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x149 = 369;
	int16_t x150 = -1;
	uint32_t x151 = UINT32_MAX;
	int32_t x152 = -1;
	static uint32_t t14 = 22104U;

	t14 = (x149/(x150&(x151/x152)));

	if (t14 != 369U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x153 = INT64_MAX;
	volatile int32_t x154 = INT32_MAX;
	int32_t x155 = INT32_MAX;
	int8_t x156 = -1;
	static int64_t t15 = INT64_MAX;

	t15 = (x153/(x154&(x155/x156)));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x181 = INT32_MIN;
	volatile int32_t x183 = -37944647;
	int8_t x184 = 60;

	t16 = (x181/(x182&(x183/x184)));

	if (t16 != 3394) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x186 = -1554070191117345LL;
	uint64_t x187 = UINT64_MAX;
	static int16_t x188 = 5;
	uint64_t t17 = 54914461LLU;

	t17 = (x185/(x186&(x187/x188)));

	if (t17 != 5LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x190 = -7;
	int64_t x191 = INT64_MIN;
	uint32_t x192 = 3U;

	t18 = (x189/(x190&(x191/x192)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x198 = 220946209U;
	static int8_t x199 = -1;
	uint64_t x200 = 52LLU;
	static uint64_t t19 = 55681LLU;

	t19 = (x197/(x198&(x199/x200)));

	if (t19 != 91320790082LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x209 = 309682882351179LL;
	uint32_t x210 = 281539U;
	int8_t x211 = INT8_MIN;
	volatile uint8_t x212 = 3U;
	static int64_t t20 = -180575456237163395LL;

	t20 = (x209/(x210&(x211/x212)));

	if (t20 != 1099968325LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x213 = UINT64_MAX;
	int16_t x214 = -1;
	static volatile int64_t x215 = INT64_MIN;
	static uint32_t x216 = UINT32_MAX;
	volatile uint64_t t21 = 1875702243671LLU;

	t21 = (x213/(x214&(x215/x216)));

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x221 = INT8_MIN;
	volatile int32_t x222 = INT32_MAX;
	int64_t x223 = INT64_MIN;
	static int64_t t22 = -5883LL;

	t22 = (x221/(x222&(x223/x224)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x226 = -1LL;
	volatile int8_t x228 = -1;

	t23 = (x225/(x226&(x227/x228)));

	if (t23 != 318047311615681924LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x229 = INT8_MIN;
	int64_t x230 = 28002003LL;
	int8_t x231 = INT8_MIN;
	uint16_t x232 = 21U;
	static volatile int64_t t24 = 60849030205LL;

	t24 = (x229/(x230&(x231/x232)));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x237 = INT8_MAX;
	uint16_t x238 = 10498U;
	int16_t x239 = INT16_MIN;
	uint8_t x240 = UINT8_MAX;

	t25 = (x237/(x238&(x239/x240)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x245 = 853U;
	static uint32_t x246 = 272U;
	int64_t x247 = 3935043845LL;
	int8_t x248 = 45;
	volatile int64_t t26 = -142273603LL;

	t26 = (x245/(x246&(x247/x248)));

	if (t26 != 3LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x249 = UINT16_MAX;
	int64_t x250 = -1LL;
	int64_t x251 = INT64_MAX;
	volatile int16_t x252 = INT16_MIN;
	volatile int64_t t27 = -1LL;

	t27 = (x249/(x250&(x251/x252)));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x254 = 40;
	int64_t x255 = -757173123042LL;
	int64_t x256 = -1LL;
	volatile int64_t t28 = 232167717423484LL;

	t28 = (x253/(x254&(x255/x256)));

	if (t28 != 13LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x265 = 5U;
	int64_t x266 = INT64_MAX;
	int16_t x267 = -1;
	uint64_t x268 = 102467LLU;
	volatile uint64_t t29 = 3673025829LLU;

	t29 = (x265/(x266&(x267/x268)));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x273 = 30U;
	int32_t x275 = INT32_MAX;
	static uint8_t x276 = 23U;

	t30 = (x273/(x274&(x275/x276)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x277 = INT16_MIN;
	int16_t x278 = INT16_MAX;
	int64_t x279 = -1LL;
	volatile int64_t t31 = 194476413LL;

	t31 = (x277/(x278&(x279/x280)));

	if (t31 != -32768LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x281 = -1;
	volatile uint8_t x282 = 52U;
	uint8_t x283 = UINT8_MAX;
	int16_t x284 = 9;
	int32_t t32 = 77110;

	t32 = (x281/(x282&(x283/x284)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x285 = -1LL;
	int8_t x287 = -1;
	volatile int32_t x288 = -1;

	t33 = (x285/(x286&(x287/x288)));

	if (t33 != -1LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x309 = -3928348480517805LL;
	int32_t x310 = -1;
	int64_t t34 = 3183645513679897LL;

	t34 = (x309/(x310&(x311/x312)));

	if (t34 != -3928348480517805LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x322 = INT8_MIN;
	volatile uint16_t x324 = UINT16_MAX;

	t35 = (x321/(x322&(x323/x324)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x325 = 21614517810LL;
	int8_t x326 = INT8_MAX;
	int64_t x327 = INT64_MIN;
	uint8_t x328 = 6U;

	t36 = (x325/(x326&(x327/x328)));

	if (t36 != 502663204LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x329 = 481386068178754140LL;
	volatile uint64_t x330 = UINT64_MAX;
	int16_t x331 = INT16_MIN;
	uint16_t x332 = 24U;

	t37 = (x329/(x330&(x331/x332)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x361 = 5U;
	static uint16_t x362 = UINT16_MAX;
	uint64_t x363 = 44666LLU;
	static uint8_t x364 = UINT8_MAX;
	uint64_t t38 = 2755377LLU;

	t38 = (x361/(x362&(x363/x364)));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x377 = INT8_MAX;
	volatile int16_t x378 = 360;
	int32_t x379 = 25712;
	volatile int32_t t39 = 54;

	t39 = (x377/(x378&(x379/x380)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x397 = INT8_MAX;
	static int8_t x398 = -1;
	uint64_t x399 = UINT64_MAX;
	uint8_t x400 = UINT8_MAX;
	static uint64_t t40 = 204LLU;

	t40 = (x397/(x398&(x399/x400)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x410 = UINT32_MAX;
	volatile uint64_t x412 = 20343751424369452LLU;

	t41 = (x409/(x410&(x411/x412)));

	if (t41 != 20360644672968563LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x422 = UINT16_MAX;
	int64_t x423 = INT64_MAX;
	volatile int64_t t42 = 18709801211548320LL;

	t42 = (x421/(x422&(x423/x424)));

	if (t42 != 2LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int32_t x427 = -6867;
	static uint32_t t43 = 65991U;

	t43 = (x425/(x426&(x427/x428)));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x429 = 7605258U;
	volatile int32_t x430 = INT32_MIN;
	int64_t x431 = INT64_MIN;
	uint16_t x432 = 5U;

	t44 = (x429/(x430&(x431/x432)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x465 = INT8_MIN;
	int64_t x466 = -1LL;
	static uint64_t x467 = 1138093437LLU;

	t45 = (x465/(x466&(x467/x468)));

	if (t45 != 802032351030850064LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x473 = 84287794346LLU;
	static volatile int64_t x474 = INT64_MIN;
	static int32_t x475 = INT32_MIN;
	static volatile uint16_t x476 = 9254U;
	static volatile uint64_t t46 = 577781667LLU;

	t46 = (x473/(x474&(x475/x476)));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x481 = 22U;
	volatile int8_t x482 = INT8_MIN;
	uint64_t x483 = UINT64_MAX;
	uint64_t t47 = 15LLU;

	t47 = (x481/(x482&(x483/x484)));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x490 = 396523646;
	uint32_t x491 = UINT32_MAX;
	int32_t x492 = INT32_MAX;
	volatile uint32_t t48 = 1277U;

	t48 = (x489/(x490&(x491/x492)));

	if (t48 != 2147467264U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x493 = 9;
	int16_t x494 = INT16_MIN;

	t49 = (x493/(x494&(x495/x496)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x513 = INT8_MIN;
	uint8_t x515 = 30U;
	static int32_t t50 = 447265;

	t50 = (x513/(x514&(x515/x516)));

	if (t50 != -64) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x517 = 9U;
	int8_t x518 = INT8_MIN;
	uint32_t x519 = 1761216840U;
	static uint16_t x520 = 151U;
	volatile uint32_t t51 = 25481U;

	t51 = (x517/(x518&(x519/x520)));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x525 = -77915529129LL;
	volatile int16_t x526 = INT16_MIN;
	volatile int64_t x527 = INT64_MAX;
	volatile uint32_t x528 = 2542553U;
	volatile int64_t t52 = -1069409246523LL;

	t52 = (x525/(x526&(x527/x528)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x533 = 69LL;
	static uint8_t x534 = 17U;
	volatile int8_t x536 = -1;
	int64_t t53 = 34085354206LL;

	t53 = (x533/(x534&(x535/x536)));

	if (t53 != 69LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x541 = INT64_MIN;
	int64_t x542 = -159LL;
	volatile int64_t x543 = INT64_MIN;
	static volatile int64_t t54 = 12822950512018LL;

	t54 = (x541/(x542&(x543/x544)));

	if (t54 != 58008629162608652LL) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x549 = -7305321332LL;
	static int32_t x550 = -45801;
	int64_t x551 = -3554LL;
	int8_t x552 = INT8_MAX;
	static volatile int64_t t55 = 1LL;

	t55 = (x549/(x550&(x551/x552)));

	if (t55 != 159438LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x557 = UINT64_MAX;
	uint8_t x558 = UINT8_MAX;
	int8_t x559 = -59;
	uint8_t x560 = 1U;
	uint64_t t56 = 2LLU;

	t56 = (x557/(x558&(x559/x560)));

	if (t56 != 93638294790403815LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x561 = INT8_MIN;
	static int16_t x562 = INT16_MAX;
	uint16_t x563 = 218U;
	static int8_t x564 = INT8_MAX;
	int32_t t57 = -16140794;

	t57 = (x561/(x562&(x563/x564)));

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x569 = 28U;
	uint32_t x571 = UINT32_MAX;
	volatile uint32_t t58 = 49818U;

	t58 = (x569/(x570&(x571/x572)));

	if (t58 != 28U) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x577 = INT32_MIN;
	int64_t x578 = INT64_MAX;
	int16_t x580 = -1;

	t59 = (x577/(x578&(x579/x580)));

	if (t59 != -2147483648LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x581 = -1;
	static uint8_t x582 = UINT8_MAX;
	int64_t x583 = INT64_MIN;
	uint8_t x584 = 3U;

	t60 = (x581/(x582&(x583/x584)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x605 = -1;
	int32_t x607 = -1;
	int32_t x608 = -1;

	t61 = (x605/(x606&(x607/x608)));

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x610 = 5051U;
	int16_t x611 = -21;
	uint64_t x612 = 122LLU;
	volatile uint64_t t62 = 17358430418453LLU;

	t62 = (x609/(x610&(x611/x612)));

	if (t62 != 23439319026314550LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x617 = INT8_MAX;
	int32_t x618 = INT32_MAX;
	uint16_t x619 = UINT16_MAX;
	int16_t x620 = INT16_MAX;

	t63 = (x617/(x618&(x619/x620)));

	if (t63 != 63) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x629 = INT32_MAX;
	int8_t x630 = INT8_MIN;
	int64_t x631 = -130833LL;
	uint8_t x632 = 12U;
	int64_t t64 = 1147066270906159LL;

	t64 = (x629/(x630&(x631/x632)));

	if (t64 != -195083LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x635 = -298980409223415LL;
	static int64_t t65 = 4486090347076030652LL;

	t65 = (x633/(x634&(x635/x636)));

	if (t65 != 15LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x637 = INT64_MIN;
	int16_t x638 = 17;
	uint16_t x639 = UINT16_MAX;
	volatile int64_t t66 = -59343498LL;

	t66 = (x637/(x638&(x639/x640)));

	if (t66 != -542551296285575047LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x641 = INT32_MIN;
	int8_t x642 = -1;
	uint64_t x643 = UINT64_MAX;
	static volatile int8_t x644 = INT8_MIN;
	uint64_t t67 = 84151224737LLU;

	t67 = (x641/(x642&(x643/x644)));

	if (t67 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x669 = 73786U;
	volatile int16_t x670 = INT16_MIN;
	volatile int16_t x671 = INT16_MIN;
	int8_t x672 = INT8_MAX;

	t68 = (x669/(x670&(x671/x672)));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x682 = -1;
	int16_t x683 = INT16_MIN;
	uint64_t x684 = 431637380163851321LLU;
	volatile uint64_t t69 = 297523335644LLU;

	t69 = (x681/(x682&(x683/x684)));

	if (t69 != 780LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x693 = 2234;
	int8_t x696 = INT8_MIN;
	int64_t t70 = -2535593334132498915LL;

	t70 = (x693/(x694&(x695/x696)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x703 = 24800477LLU;
	uint16_t x704 = 3U;
	static uint64_t t71 = 183573926569LLU;

	t71 = (x701/(x702&(x703/x704)));

	if (t71 != 5921LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x714 = INT16_MIN;
	static int8_t x715 = INT8_MAX;
	int16_t x716 = -1;
	int32_t t72 = -4622;

	t72 = (x713/(x714&(x715/x716)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x722 = -1;
	int64_t x723 = INT64_MAX;
	int16_t x724 = INT16_MIN;
	int64_t t73 = -16530536119LL;

	t73 = (x721/(x722&(x723/x724)));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x741 = INT8_MAX;
	uint8_t x743 = UINT8_MAX;
	int8_t x744 = -10;
	int32_t t74 = -1;

	t74 = (x741/(x742&(x743/x744)));

	if (t74 != -5) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x750 = INT64_MIN;
	int8_t x751 = 56;
	int16_t x752 = -1;
	int64_t t75 = 11LL;

	t75 = (x749/(x750&(x751/x752)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x762 = 112042302;
	static uint32_t x763 = 1533085U;
	static volatile int16_t x764 = 1;

	t76 = (x761/(x762&(x763/x764)));

	if (t76 != -27458684241901LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x769 = 180U;
	uint16_t x770 = 2U;
	int16_t x771 = INT16_MIN;
	uint64_t x772 = 1938LLU;
	volatile uint64_t t77 = 380309542LLU;

	t77 = (x769/(x770&(x771/x772)));

	if (t77 != 90LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x777 = INT32_MAX;
	int8_t x778 = -1;
	volatile int8_t x779 = 4;
	int8_t x780 = 2;
	volatile int32_t t78 = 970551245;

	t78 = (x777/(x778&(x779/x780)));

	if (t78 != 1073741823) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x781 = INT64_MIN;
	volatile int8_t x782 = 60;
	int16_t x783 = INT16_MAX;
	uint32_t x784 = 1U;
	static volatile int64_t t79 = -450645602LL;

	t79 = (x781/(x782&(x783/x784)));

	if (t79 != -153722867280912930LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x821 = -1;
	int16_t x822 = INT16_MIN;
	int8_t x823 = INT8_MIN;
	int16_t x824 = 34;
	volatile int32_t t80 = 1;

	t80 = (x821/(x822&(x823/x824)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint64_t x841 = 7877536LLU;
	int64_t x842 = 35376225988378798LL;
	uint16_t x843 = 24U;
	int16_t x844 = -20;
	volatile uint64_t t81 = 0LLU;

	t81 = (x841/(x842&(x843/x844)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint8_t x845 = UINT8_MAX;
	static uint32_t x846 = UINT32_MAX;
	static volatile int8_t x847 = INT8_MIN;
	volatile uint64_t x848 = 77LLU;
	uint64_t t82 = 184001026LLU;

	t82 = (x845/(x846&(x847/x848)));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x849 = INT16_MAX;
	static uint32_t x850 = 72004182U;
	int64_t x851 = INT64_MIN;
	uint64_t x852 = 1536961642LLU;
	volatile uint64_t t83 = 2410378249LLU;

	t83 = (x849/(x850&(x851/x852)));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x853 = UINT64_MAX;
	uint8_t x854 = UINT8_MAX;
	static volatile int8_t x855 = INT8_MAX;
	int8_t x856 = -1;
	uint64_t t84 = 58398541LLU;

	t84 = (x853/(x854&(x855/x856)));

	if (t84 != 142998016075267841LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x873 = INT64_MIN;
	int8_t x874 = 61;
	int8_t x876 = INT8_MIN;
	int64_t t85 = 3511314875968869610LL;

	t85 = (x873/(x874&(x875/x876)));

	if (t85 != -318047311615681924LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x885 = -1;
	static volatile uint16_t x886 = 31U;
	static int32_t x887 = INT32_MIN;
	int32_t t86 = 2;

	t86 = (x885/(x886&(x887/x888)));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x894 = INT16_MIN;
	static int64_t x895 = INT64_MAX;
	static int8_t x896 = INT8_MAX;
	volatile int64_t t87 = -20237388567677LL;

	t87 = (x893/(x894&(x895/x896)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x897 = INT16_MIN;
	int16_t x898 = INT16_MIN;
	int64_t x899 = -1LL;
	uint64_t t88 = 727860LLU;

	t88 = (x897/(x898&(x899/x900)));

	if (t88 != 1112549315061LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x913 = -1;
	int64_t x914 = -1LL;
	uint16_t x915 = UINT16_MAX;
	static int8_t x916 = INT8_MAX;
	volatile int64_t t89 = 10048LL;

	t89 = (x913/(x914&(x915/x916)));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint32_t x922 = UINT32_MAX;
	static uint16_t x923 = UINT16_MAX;
	static int32_t x924 = -59;

	t90 = (x921/(x922&(x923/x924)));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x930 = 21U;
	static int64_t x931 = -1LL;
	uint64_t x932 = UINT64_MAX;
	static volatile uint64_t t91 = 24239502607685LLU;

	t91 = (x929/(x930&(x931/x932)));

	if (t91 != 18446117157022192980LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x938 = INT64_MIN;
	int64_t x939 = INT64_MAX;
	int16_t x940 = -1;
	volatile int64_t t92 = 7241LL;

	t92 = (x937/(x938&(x939/x940)));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x945 = -1LL;
	volatile int8_t x946 = -1;
	static int64_t x947 = INT64_MIN;
	int64_t x948 = INT64_MIN;
	int64_t t93 = 13LL;

	t93 = (x945/(x946&(x947/x948)));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x957 = 170392570LL;
	uint32_t x958 = UINT32_MAX;
	static uint32_t x959 = UINT32_MAX;
	static int32_t x960 = 1768;
	int64_t t94 = -844LL;

	t94 = (x957/(x958&(x959/x960)));

	if (t94 != 70LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x973 = -1;
	uint8_t x974 = UINT8_MAX;
	int16_t x975 = INT16_MIN;
	volatile uint64_t x976 = 5699681385LLU;
	volatile uint64_t t95 = 2608458099250928743LLU;

	t95 = (x973/(x974&(x975/x976)));

	if (t95 != 85798809645160705LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x1005 = -1LL;
	int32_t x1007 = INT32_MIN;
	volatile uint64_t t96 = 5LLU;

	t96 = (x1005/(x1006&(x1007/x1008)));

	if (t96 != 950LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x1013 = -43;
	uint64_t x1014 = 250000LLU;
	uint8_t x1016 = 1U;
	uint64_t t97 = 799400LLU;

	t97 = (x1013/(x1014&(x1015/x1016)));

	if (t97 != 73786976294838LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x1017 = INT32_MIN;
	static int8_t x1018 = INT8_MAX;
	int32_t x1019 = INT32_MAX;
	int32_t x1020 = 453;
	volatile int32_t t98 = -2311401;

	t98 = (x1017/(x1018&(x1019/x1020)));

	if (t98 != -21053761) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x1041 = -7180;
	static int32_t x1042 = -9;
	int64_t x1043 = -2017120325950298164LL;
	volatile int16_t x1044 = INT16_MIN;

	t99 = (x1041/(x1042&(x1043/x1044)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

