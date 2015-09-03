#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MIN;
static uint64_t x4 = UINT64_MAX;
uint64_t t0 = 3867775LLU;
static int64_t x5 = INT64_MAX;
static int64_t x6 = INT64_MIN;
volatile int64_t x24 = -1LL;
volatile int32_t t5 = -70;
volatile int8_t x37 = INT8_MIN;
int64_t x39 = INT64_MAX;
uint32_t x41 = 254U;
static int64_t x55 = INT64_MIN;
volatile int32_t t9 = -5;
volatile int32_t t11 = -211;
static volatile uint32_t x69 = UINT32_MAX;
int64_t t12 = 12LL;
static uint16_t x83 = UINT16_MAX;
static int8_t x114 = -11;
uint32_t x116 = 3637319U;
uint64_t x121 = 60482497393608LLU;
volatile int8_t x122 = -8;
static uint64_t x124 = UINT64_MAX;
uint64_t x134 = 6110610LLU;
uint64_t x136 = 521288135956752LLU;
static volatile uint64_t t17 = 119413LLU;
static uint16_t x155 = 7U;
volatile int32_t t20 = 835;
uint64_t t21 = 7LLU;
int32_t x207 = INT32_MAX;
static volatile int64_t t22 = 62282LL;
static int8_t x213 = INT8_MIN;
volatile int64_t t23 = 11789LL;
int32_t t24 = 15530;
uint32_t t26 = 6U;
int64_t t27 = -347159273170727431LL;
int8_t x259 = INT8_MAX;
uint64_t t30 = 682783LLU;
uint8_t x269 = 1U;
volatile uint16_t x273 = 1U;
volatile int8_t x291 = INT8_MIN;
int64_t x293 = INT64_MIN;
volatile int8_t x301 = -1;
static volatile int64_t x304 = 28312LL;
int32_t x305 = INT32_MIN;
uint32_t x313 = 972U;
static int8_t x382 = INT8_MAX;
volatile uint32_t x388 = 247579399U;
volatile int32_t t46 = -3;
int64_t x414 = INT64_MIN;
int16_t x415 = INT16_MIN;
uint32_t x436 = 4U;
static int32_t t52 = 46099;
uint16_t x477 = 163U;
int32_t x479 = -1;
volatile int32_t t53 = -190640;
int16_t x483 = -1;
int64_t x497 = -1LL;
int8_t x498 = -1;
int8_t x499 = 1;
uint64_t t56 = 28528848LLU;
uint64_t x504 = UINT64_MAX;
int32_t t59 = 2688;
int64_t x520 = INT64_MIN;
volatile int32_t t62 = -292603175;
static uint32_t x571 = UINT32_MAX;
volatile int32_t t64 = -471913199;
volatile uint8_t x574 = 0U;
volatile int8_t x589 = 27;
int32_t x592 = INT32_MIN;
int32_t x602 = INT32_MIN;
int16_t x609 = -3978;
int16_t x617 = INT16_MIN;
static int8_t x619 = INT8_MIN;
uint8_t x646 = 1U;
int8_t x665 = -10;
int32_t x678 = INT32_MIN;
int16_t x679 = 0;
int64_t x683 = 571802206107393040LL;
int64_t t75 = -6091434993874LL;
uint32_t x687 = UINT32_MAX;
uint64_t x691 = 425111096LLU;
static uint64_t x699 = UINT64_MAX;
int64_t t79 = 751210LL;
int32_t x725 = INT32_MIN;
uint32_t x739 = UINT32_MAX;
uint64_t x740 = 6272546238292LLU;
static volatile uint16_t x753 = 303U;
int64_t x757 = 30089767755LL;
int64_t x758 = 772492220566LL;
int16_t x765 = INT16_MIN;
int64_t x766 = -46786499374101LL;
int32_t t86 = -16;
volatile int32_t x790 = -14742;
static volatile int32_t x792 = 238179529;
int32_t x801 = 2301275;
int8_t x803 = INT8_MIN;
static int32_t x819 = INT32_MAX;
uint32_t x825 = UINT32_MAX;
uint16_t x826 = 14431U;
uint64_t x827 = 1474787460734374182LLU;
int64_t x828 = INT64_MIN;
volatile int64_t t90 = 58384983667354317LL;
volatile int64_t x829 = -1LL;
int8_t x830 = -1;
uint8_t x831 = 15U;
int8_t x854 = INT8_MIN;
int64_t x877 = -1LL;
int8_t x879 = 1;
static volatile int64_t t94 = -24352417LL;
uint64_t t95 = 28900LLU;
uint32_t x889 = 45U;
int64_t x910 = INT64_MIN;
volatile int32_t x912 = INT32_MAX;
int8_t x914 = INT8_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int32_t x2 = INT32_MIN;

	t0 = (x1%((x2<x3)*x4));

	if (t0 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x7 = INT32_MIN;
	static uint16_t x8 = 5U;
	int64_t t1 = -2981234942949LL;

	t1 = (x5%((x6<x7)*x8));

	if (t1 != 2LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 0;
	uint64_t x10 = 12039514803LLU;
	int16_t x11 = -24;
	int64_t x12 = INT64_MAX;
	volatile int64_t t2 = -2804731471038236103LL;

	t2 = (x9%((x10<x11)*x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = INT8_MIN;
	uint8_t x22 = 26U;
	uint8_t x23 = 50U;
	static int64_t t3 = 9852LL;

	t3 = (x21%((x22<x23)*x24));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = 52;
	static uint16_t x26 = 726U;
	uint32_t x27 = UINT32_MAX;
	int64_t x28 = 3LL;
	int64_t t4 = -113416520LL;

	t4 = (x25%((x26<x27)*x28));

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x33 = UINT8_MAX;
	int8_t x34 = 3;
	static uint64_t x35 = UINT64_MAX;
	int16_t x36 = -1;

	t5 = (x33%((x34<x35)*x36));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x38 = -1;
	int32_t x40 = INT32_MIN;
	volatile int32_t t6 = -14;

	t6 = (x37%((x38<x39)*x40));

	if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x42 = 233673U;
	volatile int32_t x43 = INT32_MAX;
	volatile int16_t x44 = INT16_MAX;
	uint32_t t7 = 2362U;

	t7 = (x41%((x42<x43)*x44));

	if (t7 != 254U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x49 = INT8_MIN;
	int64_t x50 = INT64_MIN;
	int16_t x51 = INT16_MAX;
	static int32_t x52 = INT32_MIN;
	volatile int32_t t8 = -338;

	t8 = (x49%((x50<x51)*x52));

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x53 = INT16_MAX;
	volatile uint64_t x54 = 9813930864LLU;
	static volatile int32_t x56 = INT32_MAX;

	t9 = (x53%((x54<x55)*x56));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x57 = INT64_MAX;
	int64_t x58 = -479896760653843090LL;
	int64_t x59 = INT64_MAX;
	volatile int64_t x60 = INT64_MIN;
	static volatile int64_t t10 = INT64_MAX;

	t10 = (x57%((x58<x59)*x60));

	if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x65 = 2U;
	uint64_t x66 = 553969989322998LLU;
	volatile int64_t x67 = -1LL;
	static int32_t x68 = INT32_MIN;

	t11 = (x65%((x66<x67)*x68));

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x70 = 7LLU;
	static volatile int16_t x71 = 55;
	int64_t x72 = INT64_MIN;

	t12 = (x69%((x70<x71)*x72));

	if (t12 != 4294967295LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x81 = INT32_MAX;
	int32_t x82 = -1714;
	int16_t x84 = -1;
	int32_t t13 = -3;

	t13 = (x81%((x82<x83)*x84));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x101 = INT64_MIN;
	int64_t x102 = -1LL;
	int16_t x103 = INT16_MAX;
	int32_t x104 = INT32_MIN;
	int64_t t14 = -14477LL;

	t14 = (x101%((x102<x103)*x104));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x113 = 1174U;
	int32_t x115 = 25704492;
	uint32_t t15 = 9873967U;

	t15 = (x113%((x114<x115)*x116));

	if (t15 != 1174U) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x123 = -1LL;
	volatile uint64_t t16 = 2988975911936204LLU;

	t16 = (x121%((x122<x123)*x124));

	if (t16 != 60482497393608LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x133 = -1;
	int8_t x135 = -6;

	t17 = (x133%((x134<x135)*x136));

	if (t17 != 442094743925343LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x145 = 1034265LLU;
	volatile int16_t x146 = -109;
	uint32_t x147 = UINT32_MAX;
	volatile int64_t x148 = INT64_MIN;
	static volatile uint64_t t18 = 99357142240853LLU;

	t18 = (x145%((x146<x147)*x148));

	if (t18 != 1034265LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x153 = 3U;
	static volatile int32_t x154 = 1;
	int64_t x156 = INT64_MIN;
	int64_t t19 = -6950309LL;

	t19 = (x153%((x154<x155)*x156));

	if (t19 != 3LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x193 = INT16_MIN;
	volatile uint32_t x194 = 1339898U;
	int16_t x195 = INT16_MIN;
	int16_t x196 = INT16_MIN;

	t20 = (x193%((x194<x195)*x196));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x201 = UINT64_MAX;
	int8_t x202 = -29;
	int32_t x203 = INT32_MAX;
	static int64_t x204 = INT64_MAX;

	t21 = (x201%((x202<x203)*x204));

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x205 = INT64_MAX;
	int8_t x206 = INT8_MIN;
	int16_t x208 = INT16_MIN;

	t22 = (x205%((x206<x207)*x208));

	if (t22 != 32767LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x214 = INT16_MAX;
	uint64_t x215 = UINT64_MAX;
	static int64_t x216 = INT64_MIN;

	t23 = (x213%((x214<x215)*x216));

	if (t23 != -128LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x221 = INT16_MAX;
	int64_t x222 = INT64_MIN;
	uint32_t x223 = UINT32_MAX;
	uint16_t x224 = UINT16_MAX;

	t24 = (x221%((x222<x223)*x224));

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile uint64_t x225 = UINT64_MAX;
	int64_t x226 = INT64_MIN;
	int8_t x227 = INT8_MIN;
	int16_t x228 = INT16_MIN;
	volatile uint64_t t25 = 44718116LLU;

	t25 = (x225%((x226<x227)*x228));

	if (t25 != 32767LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x233 = UINT32_MAX;
	int64_t x234 = INT64_MIN;
	int64_t x235 = 37461172724008977LL;
	int16_t x236 = -3;

	t26 = (x233%((x234<x235)*x236));

	if (t26 != 2U) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint32_t x241 = 20U;
	volatile int64_t x242 = INT64_MIN;
	int16_t x243 = -1;
	int64_t x244 = INT64_MIN;

	t27 = (x241%((x242<x243)*x244));

	if (t27 != 20LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x249 = -1;
	int16_t x250 = -1;
	uint8_t x251 = UINT8_MAX;
	int8_t x252 = INT8_MIN;
	volatile int32_t t28 = 216535;

	t28 = (x249%((x250<x251)*x252));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x257 = -30;
	static int8_t x258 = -1;
	int8_t x260 = INT8_MAX;
	volatile int32_t t29 = -867;

	t29 = (x257%((x258<x259)*x260));

	if (t29 != -30) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x265 = 1832351LLU;
	int16_t x266 = 0;
	uint64_t x267 = 66228972LLU;
	volatile int64_t x268 = -1LL;

	t30 = (x265%((x266<x267)*x268));

	if (t30 != 1832351LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x270 = -1;
	volatile int64_t x271 = INT64_MAX;
	int32_t x272 = INT32_MAX;
	volatile int32_t t31 = 0;

	t31 = (x269%((x270<x271)*x272));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x274 = 99U;
	int32_t x275 = INT32_MAX;
	uint8_t x276 = 7U;
	int32_t t32 = 1037113896;

	t32 = (x273%((x274<x275)*x276));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x281 = 14;
	uint8_t x282 = 0U;
	int32_t x283 = 1054339816;
	uint32_t x284 = 12U;
	volatile uint32_t t33 = 10U;

	t33 = (x281%((x282<x283)*x284));

	if (t33 != 2U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x289 = UINT64_MAX;
	int32_t x290 = INT32_MIN;
	int32_t x292 = -34;
	volatile uint64_t t34 = 111LLU;

	t34 = (x289%((x290<x291)*x292));

	if (t34 != 33LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x294 = 0;
	int64_t x295 = INT64_MAX;
	int16_t x296 = INT16_MIN;
	volatile int64_t t35 = 11963190305LL;

	t35 = (x293%((x294<x295)*x296));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x302 = 32U;
	int8_t x303 = INT8_MAX;
	int64_t t36 = 4303907512519LL;

	t36 = (x301%((x302<x303)*x304));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x306 = -3;
	static uint8_t x307 = 29U;
	static int64_t x308 = INT64_MIN;
	int64_t t37 = -228933153LL;

	t37 = (x305%((x306<x307)*x308));

	if (t37 != -2147483648LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x314 = 1;
	volatile int8_t x315 = INT8_MAX;
	volatile int32_t x316 = 314;
	volatile uint32_t t38 = 3406U;

	t38 = (x313%((x314<x315)*x316));

	if (t38 != 30U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x325 = 8418580527354271LLU;
	int16_t x326 = -2676;
	static volatile uint16_t x327 = 2U;
	static uint16_t x328 = 54U;
	static volatile uint64_t t39 = 1772944354514024150LLU;

	t39 = (x325%((x326<x327)*x328));

	if (t39 != 25LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x329 = INT64_MAX;
	static volatile uint32_t x330 = 110U;
	int32_t x331 = 52510623;
	static uint64_t x332 = 11LLU;
	volatile uint64_t t40 = 40LLU;

	t40 = (x329%((x330<x331)*x332));

	if (t40 != 7LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x337 = 6U;
	int64_t x338 = INT64_MIN;
	uint8_t x339 = 14U;
	static volatile int8_t x340 = -1;
	volatile int32_t t41 = -1829139;

	t41 = (x337%((x338<x339)*x340));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x345 = 117U;
	uint32_t x346 = 26659341U;
	int16_t x347 = INT16_MIN;
	uint64_t x348 = UINT64_MAX;
	volatile uint64_t t42 = 80659912363699LLU;

	t42 = (x345%((x346<x347)*x348));

	if (t42 != 117LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x377 = -1767;
	int16_t x378 = INT16_MIN;
	volatile int8_t x379 = 0;
	int8_t x380 = INT8_MIN;
	static volatile int32_t t43 = 7;

	t43 = (x377%((x378<x379)*x380));

	if (t43 != -103) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x381 = 4U;
	uint64_t x383 = 1992423LLU;
	int8_t x384 = INT8_MIN;
	static volatile int32_t t44 = 0;

	t44 = (x381%((x382<x383)*x384));

	if (t44 != 4) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x385 = 15;
	int8_t x386 = 0;
	uint16_t x387 = UINT16_MAX;
	uint32_t t45 = 1103U;

	t45 = (x385%((x386<x387)*x388));

	if (t45 != 15U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x409 = UINT16_MAX;
	static int32_t x410 = -1;
	volatile uint16_t x411 = 22U;
	static volatile int8_t x412 = INT8_MIN;

	t46 = (x409%((x410<x411)*x412));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x413 = 1;
	static int16_t x416 = INT16_MIN;
	int32_t t47 = 242818691;

	t47 = (x413%((x414<x415)*x416));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x425 = UINT8_MAX;
	volatile uint8_t x426 = 14U;
	volatile uint32_t x427 = UINT32_MAX;
	int8_t x428 = -3;
	static int32_t t48 = -412142194;

	t48 = (x425%((x426<x427)*x428));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x429 = -4958;
	int8_t x430 = -1;
	uint16_t x431 = 1U;
	uint64_t x432 = 997436066380008990LLU;
	volatile uint64_t t49 = 21LLU;

	t49 = (x429%((x430<x431)*x432));

	if (t49 != 492894878869384838LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x433 = -1LL;
	volatile uint16_t x434 = UINT16_MAX;
	int32_t x435 = 699146976;
	volatile int64_t t50 = 4748903191311347LL;

	t50 = (x433%((x434<x435)*x436));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x441 = -1;
	static uint16_t x442 = 138U;
	static uint8_t x443 = UINT8_MAX;
	int8_t x444 = 32;
	static int32_t t51 = -6523;

	t51 = (x441%((x442<x443)*x444));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x445 = 1513;
	uint64_t x446 = 1137904258143855LLU;
	volatile int16_t x447 = -1;
	int8_t x448 = INT8_MAX;

	t52 = (x445%((x446<x447)*x448));

	if (t52 != 116) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x478 = INT32_MIN;
	int32_t x480 = INT32_MIN;

	t53 = (x477%((x478<x479)*x480));

	if (t53 != 163) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x481 = INT32_MIN;
	int8_t x482 = -25;
	uint32_t x484 = 1200406U;
	volatile uint32_t t54 = 16U;

	t54 = (x481%((x482<x483)*x484));

	if (t54 != 1157720U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x489 = 3U;
	int64_t x490 = INT64_MIN;
	volatile int16_t x491 = INT16_MIN;
	int32_t x492 = INT32_MAX;
	volatile int32_t t55 = 430350;

	t55 = (x489%((x490<x491)*x492));

	if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x500 = 1579333209236LLU;

	t56 = (x497%((x498<x499)*x500));

	if (t56 != 1105176705027LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x501 = 806U;
	uint64_t x502 = 4458886524911LLU;
	int8_t x503 = -25;
	uint64_t t57 = 4438313LLU;

	t57 = (x501%((x502<x503)*x504));

	if (t57 != 806LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint16_t x505 = 3U;
	static uint16_t x506 = UINT16_MAX;
	uint64_t x507 = 51171469551LLU;
	int32_t x508 = INT32_MIN;
	static int32_t t58 = 117;

	t58 = (x505%((x506<x507)*x508));

	if (t58 != 3) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x509 = INT32_MIN;
	int16_t x510 = 13359;
	uint32_t x511 = 28196453U;
	int32_t x512 = INT32_MAX;

	t59 = (x509%((x510<x511)*x512));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x513 = -1LL;
	static int64_t x514 = -44155LL;
	int32_t x515 = 1479;
	int64_t x516 = 1LL;
	volatile int64_t t60 = 2771677003589LL;

	t60 = (x513%((x514<x515)*x516));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x517 = 55;
	volatile int32_t x518 = INT32_MIN;
	int16_t x519 = INT16_MAX;
	int64_t t61 = 10380516778LL;

	t61 = (x517%((x518<x519)*x520));

	if (t61 != 55LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x521 = 1122;
	int16_t x522 = INT16_MIN;
	volatile int8_t x523 = 0;
	volatile uint16_t x524 = UINT16_MAX;

	t62 = (x521%((x522<x523)*x524));

	if (t62 != 1122) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x557 = INT32_MIN;
	int64_t x558 = INT64_MIN;
	uint16_t x559 = UINT16_MAX;
	volatile int8_t x560 = INT8_MAX;
	int32_t t63 = 363;

	t63 = (x557%((x558<x559)*x560));

	if (t63 != -8) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x569 = -13514953;
	int8_t x570 = INT8_MIN;
	int16_t x572 = INT16_MIN;

	t64 = (x569%((x570<x571)*x572));

	if (t64 != -14537) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x573 = -1LL;
	int16_t x575 = 628;
	static int16_t x576 = INT16_MIN;
	int64_t t65 = -156816195420516LL;

	t65 = (x573%((x574<x575)*x576));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint16_t x590 = 4U;
	int64_t x591 = 2580217777142LL;
	static volatile int32_t t66 = -40575;

	t66 = (x589%((x590<x591)*x592));

	if (t66 != 27) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x601 = UINT32_MAX;
	static int32_t x603 = -1;
	int8_t x604 = INT8_MIN;
	volatile uint32_t t67 = 3868984U;

	t67 = (x601%((x602<x603)*x604));

	if (t67 != 127U) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x610 = -1;
	static int8_t x611 = INT8_MAX;
	uint8_t x612 = 9U;
	int32_t t68 = 126;

	t68 = (x609%((x610<x611)*x612));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x613 = INT16_MAX;
	int32_t x614 = INT32_MAX;
	uint64_t x615 = UINT64_MAX;
	int8_t x616 = INT8_MAX;
	int32_t t69 = 0;

	t69 = (x613%((x614<x615)*x616));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x618 = -1065397;
	uint8_t x620 = UINT8_MAX;
	int32_t t70 = -23;

	t70 = (x617%((x618<x619)*x620));

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x629 = 71212U;
	int64_t x630 = -248241046632LL;
	uint8_t x631 = 34U;
	static int8_t x632 = INT8_MIN;
	volatile uint32_t t71 = 73855U;

	t71 = (x629%((x630<x631)*x632));

	if (t71 != 71212U) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint8_t x645 = 127U;
	int16_t x647 = 2;
	uint64_t x648 = UINT64_MAX;
	volatile uint64_t t72 = 19LLU;

	t72 = (x645%((x646<x647)*x648));

	if (t72 != 127LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x666 = -23;
	uint16_t x667 = UINT16_MAX;
	volatile uint16_t x668 = 6U;
	int32_t t73 = -6794746;

	t73 = (x665%((x666<x667)*x668));

	if (t73 != -4) { NG(); } else { ; }
	
}

void f74(void) {
	static uint16_t x677 = 7U;
	volatile int32_t x680 = INT32_MIN;
	static int32_t t74 = -188800812;

	t74 = (x677%((x678<x679)*x680));

	if (t74 != 7) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x681 = 29111589372015506LL;
	int16_t x682 = -1;
	uint16_t x684 = 279U;

	t75 = (x681%((x682<x683)*x684));

	if (t75 != 200LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x685 = UINT64_MAX;
	uint8_t x686 = 13U;
	static int8_t x688 = 1;
	static volatile uint64_t t76 = 1722590385197LLU;

	t76 = (x685%((x686<x687)*x688));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x689 = 1014821U;
	int8_t x690 = 1;
	uint16_t x692 = 460U;
	uint32_t t77 = 141508U;

	t77 = (x689%((x690<x691)*x692));

	if (t77 != 61U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x693 = -10;
	int32_t x694 = INT32_MIN;
	int16_t x695 = -1174;
	volatile int16_t x696 = INT16_MIN;
	volatile int32_t t78 = -1;

	t78 = (x693%((x694<x695)*x696));

	if (t78 != -10) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x697 = -702845833986013904LL;
	uint64_t x698 = 1945979663692LLU;
	static volatile int64_t x700 = INT64_MIN;

	t79 = (x697%((x698<x699)*x700));

	if (t79 != -702845833986013904LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x726 = INT64_MIN;
	int8_t x727 = -1;
	static volatile uint32_t x728 = UINT32_MAX;
	uint32_t t80 = 26U;

	t80 = (x725%((x726<x727)*x728));

	if (t80 != 2147483648U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x733 = UINT8_MAX;
	static int32_t x734 = -460849;
	int32_t x735 = -1;
	int32_t x736 = INT32_MIN;
	volatile int32_t t81 = 1201579;

	t81 = (x733%((x734<x735)*x736));

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x737 = 6U;
	int32_t x738 = INT32_MIN;
	static volatile uint64_t t82 = 23268461656LLU;

	t82 = (x737%((x738<x739)*x740));

	if (t82 != 6LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x754 = INT32_MIN;
	int8_t x755 = -1;
	uint8_t x756 = UINT8_MAX;
	int32_t t83 = 1400196;

	t83 = (x753%((x754<x755)*x756));

	if (t83 != 48) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x759 = UINT64_MAX;
	volatile uint8_t x760 = 42U;
	static volatile int64_t t84 = -21249LL;

	t84 = (x757%((x758<x759)*x760));

	if (t84 != 33LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x767 = -25602LL;
	int32_t x768 = 1;
	int32_t t85 = 3;

	t85 = (x765%((x766<x767)*x768));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x777 = -1;
	volatile int64_t x778 = INT64_MIN;
	int8_t x779 = -1;
	int8_t x780 = INT8_MAX;

	t86 = (x777%((x778<x779)*x780));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x789 = -1504952260757809LL;
	uint8_t x791 = UINT8_MAX;
	int64_t t87 = 6724LL;

	t87 = (x789%((x790<x791)*x792));

	if (t87 != -139640511LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x802 = INT64_MIN;
	static volatile int8_t x804 = 1;
	int32_t t88 = -864461544;

	t88 = (x801%((x802<x803)*x804));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x817 = INT32_MIN;
	static int32_t x818 = -1;
	volatile int16_t x820 = INT16_MIN;
	volatile int32_t t89 = -65103;

	t89 = (x817%((x818<x819)*x820));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {


	t90 = (x825%((x826<x827)*x828));

	if (t90 != 4294967295LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x832 = -1;
	static volatile int64_t t91 = 8158152LL;

	t91 = (x829%((x830<x831)*x832));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x853 = UINT8_MAX;
	static volatile int16_t x855 = -1;
	volatile uint32_t x856 = 3563U;
	volatile uint32_t t92 = 53374U;

	t92 = (x853%((x854<x855)*x856));

	if (t92 != 255U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x865 = -9;
	int8_t x866 = INT8_MIN;
	static int32_t x867 = 4151268;
	static int32_t x868 = 24163;
	static int32_t t93 = 25170;

	t93 = (x865%((x866<x867)*x868));

	if (t93 != -9) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x878 = INT16_MIN;
	static uint8_t x880 = 72U;

	t94 = (x877%((x878<x879)*x880));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x881 = 3666404073923872LLU;
	uint64_t x882 = 6502400155LLU;
	static int64_t x883 = -6085126LL;
	volatile int32_t x884 = INT32_MAX;

	t95 = (x881%((x882<x883)*x884));

	if (t95 != 948433478LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x890 = 748551182221LL;
	uint64_t x891 = 2499181815531098LLU;
	volatile int32_t x892 = INT32_MIN;
	volatile uint32_t t96 = 1690370515U;

	t96 = (x889%((x890<x891)*x892));

	if (t96 != 45U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x897 = INT8_MAX;
	static int8_t x898 = -8;
	int64_t x899 = INT64_MAX;
	int64_t x900 = 573187364LL;
	int64_t t97 = 1222LL;

	t97 = (x897%((x898<x899)*x900));

	if (t97 != 127LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x909 = -1LL;
	static uint16_t x911 = 5630U;
	int64_t t98 = -303661LL;

	t98 = (x909%((x910<x911)*x912));

	if (t98 != -1LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x913 = INT64_MIN;
	uint16_t x915 = 664U;
	int64_t x916 = INT64_MIN;
	static volatile int64_t t99 = 1997431592289006169LL;

	t99 = (x913%((x914<x915)*x916));

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

