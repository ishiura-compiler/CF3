#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x11 = UINT16_MAX;
int32_t x23 = INT32_MIN;
volatile int16_t x24 = INT16_MIN;
volatile int32_t t5 = -1111640;
volatile int16_t x47 = INT16_MAX;
uint64_t x57 = UINT64_MAX;
int64_t x88 = INT64_MAX;
static int8_t x94 = INT8_MAX;
static uint32_t x104 = 801052880U;
uint16_t x109 = 31676U;
int32_t t13 = -6;
int32_t t15 = -255;
uint64_t x149 = UINT64_MAX;
int8_t x152 = INT8_MAX;
static int64_t x191 = INT64_MIN;
volatile int64_t t19 = -176461106996326153LL;
volatile uint8_t x196 = UINT8_MAX;
static uint64_t x197 = UINT64_MAX;
int64_t x212 = INT64_MAX;
int8_t x221 = INT8_MIN;
int16_t x223 = -4;
int16_t x239 = -1;
int8_t x255 = -1;
int32_t x263 = -1;
volatile uint32_t x274 = 6576422U;
volatile uint32_t t29 = 0U;
int64_t x280 = INT64_MAX;
int32_t x281 = INT32_MIN;
volatile int32_t t31 = -596492;
static volatile uint64_t x298 = 33LLU;
static int16_t x303 = -1;
uint16_t x326 = 122U;
volatile uint8_t x328 = UINT8_MAX;
int8_t x345 = -11;
static int8_t x358 = -1;
int32_t t39 = 1516;
int16_t x361 = 1;
int16_t x377 = INT16_MIN;
static int8_t x387 = 30;
static int16_t x389 = INT16_MIN;
int32_t t44 = 14323;
uint16_t x397 = 103U;
int8_t x400 = -1;
static volatile int32_t t45 = 21;
static volatile int32_t t46 = 138603;
int32_t x413 = INT32_MIN;
static volatile int64_t x416 = 5487LL;
int32_t x422 = INT32_MIN;
volatile int32_t t49 = 55;
int32_t t50 = -3542720;
static int16_t x437 = INT16_MIN;
int32_t x441 = INT32_MIN;
static int32_t t52 = 11;
int16_t x457 = INT16_MIN;
volatile int32_t t53 = 2;
static int8_t x476 = 1;
volatile int32_t t54 = 1;
int32_t t55 = 57;
static int32_t x488 = -236392971;
static int32_t t56 = 220878;
int8_t x498 = INT8_MIN;
int32_t x502 = INT32_MIN;
static int64_t x553 = 131699442018665279LL;
int16_t x554 = INT16_MIN;
static int8_t x561 = 6;
int64_t x576 = INT64_MAX;
uint64_t x583 = 33LLU;
volatile int64_t x584 = INT64_MAX;
int32_t t66 = 391671512;
uint32_t x607 = 28819470U;
volatile uint32_t t68 = 90122U;
int32_t x626 = INT32_MIN;
int64_t x627 = INT64_MIN;
static volatile int16_t x630 = INT16_MIN;
int16_t x643 = 8;
int64_t x650 = INT64_MIN;
int32_t x656 = -1;
int16_t x668 = INT16_MAX;
int32_t x680 = -1;
volatile uint64_t t79 = 161647245846004LLU;
int32_t x682 = INT32_MIN;
int16_t x683 = INT16_MAX;
static uint8_t x699 = UINT8_MAX;
int32_t x705 = -89;
static volatile int32_t t82 = 3231331;
int32_t x737 = INT32_MIN;
volatile int16_t x738 = INT16_MIN;
static uint8_t x739 = 21U;
int16_t x741 = 0;
int16_t x751 = 0;
static int8_t x756 = -1;
int64_t t87 = 5164702LL;
int32_t x757 = INT32_MIN;
uint32_t t89 = 29339U;
static uint64_t x768 = UINT64_MAX;
volatile int32_t t90 = 937849363;
uint8_t x783 = UINT8_MAX;
int32_t x788 = INT32_MIN;
int32_t t94 = 135625;
static volatile int32_t t95 = 617866843;
uint32_t x821 = 152U;
volatile int32_t t97 = 0;
int16_t x831 = INT16_MIN;
static int8_t x832 = INT8_MIN;
volatile int32_t t98 = -94898;
volatile uint32_t x834 = 262920U;
int16_t x836 = -1;


void f0(void) {
	int64_t x1 = -8200629LL;
	volatile uint8_t x2 = 66U;
	int16_t x3 = INT16_MIN;
	static int32_t x4 = -1;
	int64_t t0 = -6LL;

	t0 = (x1%((x2|x3)<x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x9 = 19;
	int8_t x10 = -1;
	static volatile int16_t x12 = 3;
	static volatile int32_t t1 = 1388;

	t1 = (x9%((x10|x11)<x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = 4;
	volatile int16_t x14 = INT16_MIN;
	volatile int64_t x15 = INT64_MIN;
	volatile int8_t x16 = -1;
	int32_t t2 = 114294;

	t2 = (x13%((x14|x15)<x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -1;
	uint8_t x18 = 0U;
	int32_t x19 = 0;
	uint32_t x20 = UINT32_MAX;
	static int32_t t3 = -24781813;

	t3 = (x17%((x18|x19)<x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x21 = INT16_MIN;
	volatile uint32_t x22 = 1083614255U;
	static volatile int32_t t4 = 0;

	t4 = (x21%((x22|x23)<x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x29 = 15U;
	int64_t x30 = 14998LL;
	int16_t x31 = INT16_MAX;
	uint64_t x32 = 1462284LLU;

	t5 = (x29%((x30|x31)<x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x45 = INT16_MIN;
	int64_t x46 = 283411187100LL;
	int64_t x48 = 17159822538214642LL;
	int32_t t6 = -13890;

	t6 = (x45%((x46|x47)<x48));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x58 = 7U;
	static uint32_t x59 = 37942128U;
	int16_t x60 = INT16_MIN;
	uint64_t t7 = 592187010882LLU;

	t7 = (x57%((x58|x59)<x60));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x65 = -2264862;
	uint16_t x66 = 6U;
	volatile int16_t x67 = INT16_MIN;
	volatile uint64_t x68 = UINT64_MAX;
	int32_t t8 = -98;

	t8 = (x65%((x66|x67)<x68));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x85 = INT64_MIN;
	uint64_t x86 = 63493528989481206LLU;
	int8_t x87 = INT8_MAX;
	volatile int64_t t9 = -961568LL;

	t9 = (x85%((x86|x87)<x88));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x89 = -1LL;
	volatile int8_t x90 = INT8_MAX;
	static int16_t x91 = -61;
	int8_t x92 = 6;
	volatile int64_t t10 = -55760257475304LL;

	t10 = (x89%((x90|x91)<x92));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x93 = -84896LL;
	static uint8_t x95 = UINT8_MAX;
	int16_t x96 = INT16_MAX;
	volatile int64_t t11 = -1108004647609009364LL;

	t11 = (x93%((x94|x95)<x96));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x101 = UINT16_MAX;
	volatile uint32_t x102 = 18U;
	volatile int16_t x103 = INT16_MAX;
	int32_t t12 = -432159;

	t12 = (x101%((x102|x103)<x104));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x110 = INT16_MIN;
	volatile uint8_t x111 = UINT8_MAX;
	volatile uint32_t x112 = UINT32_MAX;

	t13 = (x109%((x110|x111)<x112));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x133 = UINT32_MAX;
	int64_t x134 = 2948989927318LL;
	int32_t x135 = INT32_MIN;
	static int64_t x136 = -1LL;
	static volatile uint32_t t14 = 0U;

	t14 = (x133%((x134|x135)<x136));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x141 = -1;
	volatile int32_t x142 = -1;
	int8_t x143 = INT8_MAX;
	volatile int8_t x144 = 0;

	t15 = (x141%((x142|x143)<x144));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x150 = 54;
	uint16_t x151 = 3U;
	uint64_t t16 = 1LLU;

	t16 = (x149%((x150|x151)<x152));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x165 = INT32_MIN;
	static int32_t x166 = INT32_MIN;
	uint32_t x167 = 988949U;
	int32_t x168 = -1;
	static volatile int32_t t17 = 1;

	t17 = (x165%((x166|x167)<x168));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x177 = UINT64_MAX;
	volatile uint8_t x178 = UINT8_MAX;
	volatile int16_t x179 = -765;
	static int32_t x180 = 11;
	volatile uint64_t t18 = 43755853645198LLU;

	t18 = (x177%((x178|x179)<x180));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x189 = -1LL;
	volatile int64_t x190 = 316LL;
	static volatile int8_t x192 = 1;

	t19 = (x189%((x190|x191)<x192));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x193 = UINT64_MAX;
	int32_t x194 = INT32_MAX;
	int64_t x195 = -487190556990063LL;
	uint64_t t20 = 15048011534128LLU;

	t20 = (x193%((x194|x195)<x196));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x198 = 0;
	int32_t x199 = -1;
	int64_t x200 = 28804958789859644LL;
	volatile uint64_t t21 = 162756908802LLU;

	t21 = (x197%((x198|x199)<x200));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x209 = INT64_MIN;
	int64_t x210 = -517180237866874LL;
	int32_t x211 = INT32_MAX;
	volatile int64_t t22 = 5323188275738120LL;

	t22 = (x209%((x210|x211)<x212));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x222 = 3770089LLU;
	volatile int16_t x224 = -1;
	int32_t t23 = 1;

	t23 = (x221%((x222|x223)<x224));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x229 = 291646069190438897LLU;
	static int16_t x230 = 1178;
	int8_t x231 = -1;
	uint8_t x232 = 1U;
	volatile uint64_t t24 = 1066LLU;

	t24 = (x229%((x230|x231)<x232));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x237 = 30;
	volatile int64_t x238 = INT64_MIN;
	int8_t x240 = 0;
	volatile int32_t t25 = -51704844;

	t25 = (x237%((x238|x239)<x240));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x249 = 88479U;
	int64_t x250 = 10432622008356959LL;
	int64_t x251 = INT64_MIN;
	int64_t x252 = -1942LL;
	uint32_t t26 = 25U;

	t26 = (x249%((x250|x251)<x252));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x253 = 17U;
	int8_t x254 = INT8_MAX;
	volatile int64_t x256 = 1LL;
	static volatile int32_t t27 = -122103;

	t27 = (x253%((x254|x255)<x256));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x261 = -1LL;
	int64_t x262 = INT64_MAX;
	static int32_t x264 = INT32_MAX;
	int64_t t28 = 3997307687234LL;

	t28 = (x261%((x262|x263)<x264));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x273 = 206950U;
	static int32_t x275 = 15991;
	volatile int32_t x276 = INT32_MAX;

	t29 = (x273%((x274|x275)<x276));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x277 = 79;
	int32_t x278 = -1;
	int64_t x279 = -1LL;
	volatile int32_t t30 = -49;

	t30 = (x277%((x278|x279)<x280));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x282 = -1;
	int16_t x283 = INT16_MAX;
	static uint16_t x284 = 9U;

	t31 = (x281%((x282|x283)<x284));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x293 = -1;
	uint16_t x294 = UINT16_MAX;
	int64_t x295 = -27LL;
	uint16_t x296 = 1996U;
	static int32_t t32 = 192434573;

	t32 = (x293%((x294|x295)<x296));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x297 = 43370830U;
	static int16_t x299 = INT16_MAX;
	int64_t x300 = 161262305LL;
	volatile uint32_t t33 = 1012U;

	t33 = (x297%((x298|x299)<x300));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x301 = INT8_MIN;
	uint8_t x302 = 0U;
	int8_t x304 = 0;
	int32_t t34 = -2432;

	t34 = (x301%((x302|x303)<x304));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x317 = INT64_MIN;
	uint16_t x318 = UINT16_MAX;
	int16_t x319 = 0;
	static uint64_t x320 = UINT64_MAX;
	int64_t t35 = 52428815773042LL;

	t35 = (x317%((x318|x319)<x320));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x325 = 250;
	uint8_t x327 = 3U;
	int32_t t36 = 9377317;

	t36 = (x325%((x326|x327)<x328));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x346 = -23;
	int64_t x347 = INT64_MAX;
	static uint32_t x348 = 1774533513U;
	int32_t t37 = -63;

	t37 = (x345%((x346|x347)<x348));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x353 = -1LL;
	static int32_t x354 = INT32_MAX;
	int64_t x355 = -1LL;
	uint32_t x356 = 5592950U;
	int64_t t38 = 355046354684558LL;

	t38 = (x353%((x354|x355)<x356));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x357 = -36;
	int16_t x359 = 0;
	int8_t x360 = 1;

	t39 = (x357%((x358|x359)<x360));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint32_t x362 = 30U;
	static int8_t x363 = INT8_MAX;
	uint64_t x364 = 464461LLU;
	volatile int32_t t40 = -775521695;

	t40 = (x361%((x362|x363)<x364));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x365 = 202026697U;
	static volatile int64_t x366 = 5494490LL;
	int64_t x367 = INT64_MIN;
	static uint16_t x368 = 7U;
	static uint32_t t41 = 0U;

	t41 = (x365%((x366|x367)<x368));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x378 = -3254;
	volatile int16_t x379 = 2;
	uint64_t x380 = UINT64_MAX;
	volatile int32_t t42 = -396191;

	t42 = (x377%((x378|x379)<x380));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x385 = 24U;
	int16_t x386 = -33;
	static int32_t x388 = INT32_MAX;
	volatile int32_t t43 = 833;

	t43 = (x385%((x386|x387)<x388));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x390 = INT8_MAX;
	int32_t x391 = INT32_MIN;
	uint16_t x392 = 1442U;

	t44 = (x389%((x390|x391)<x392));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x398 = -36408526928LL;
	int64_t x399 = -261601333595720370LL;

	t45 = (x397%((x398|x399)<x400));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int8_t x401 = INT8_MAX;
	static volatile int32_t x402 = INT32_MAX;
	int32_t x403 = INT32_MIN;
	int8_t x404 = INT8_MAX;

	t46 = (x401%((x402|x403)<x404));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x405 = 45;
	uint16_t x406 = UINT16_MAX;
	int32_t x407 = INT32_MIN;
	volatile uint16_t x408 = 499U;
	volatile int32_t t47 = 48191556;

	t47 = (x405%((x406|x407)<x408));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x414 = INT8_MIN;
	int8_t x415 = -1;
	static int32_t t48 = -486631552;

	t48 = (x413%((x414|x415)<x416));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x421 = INT16_MAX;
	int16_t x423 = INT16_MAX;
	static uint64_t x424 = UINT64_MAX;

	t49 = (x421%((x422|x423)<x424));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x425 = 0;
	uint8_t x426 = 4U;
	volatile int64_t x427 = -33038641894780675LL;
	int64_t x428 = 5080579242LL;

	t50 = (x425%((x426|x427)<x428));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x438 = INT64_MIN;
	static int64_t x439 = INT64_MIN;
	static int16_t x440 = INT16_MIN;
	static volatile int32_t t51 = -1;

	t51 = (x437%((x438|x439)<x440));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x442 = INT64_MIN;
	uint16_t x443 = UINT16_MAX;
	volatile uint16_t x444 = 1U;

	t52 = (x441%((x442|x443)<x444));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x458 = 3LLU;
	static volatile int64_t x459 = 1LL;
	int8_t x460 = -53;

	t53 = (x457%((x458|x459)<x460));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x473 = INT32_MIN;
	volatile int32_t x474 = -1;
	uint8_t x475 = UINT8_MAX;

	t54 = (x473%((x474|x475)<x476));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x481 = INT16_MIN;
	uint16_t x482 = 837U;
	static int8_t x483 = INT8_MIN;
	volatile int16_t x484 = -1;

	t55 = (x481%((x482|x483)<x484));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x485 = INT16_MIN;
	uint32_t x486 = UINT32_MAX;
	volatile uint64_t x487 = 17LLU;

	t56 = (x485%((x486|x487)<x488));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x497 = UINT8_MAX;
	int32_t x499 = -121548;
	uint32_t x500 = UINT32_MAX;
	volatile int32_t t57 = -24;

	t57 = (x497%((x498|x499)<x500));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x501 = -1271;
	int32_t x503 = -277795;
	static int16_t x504 = -256;
	volatile int32_t t58 = 0;

	t58 = (x501%((x502|x503)<x504));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x509 = 0U;
	int16_t x510 = 508;
	int32_t x511 = -1;
	int16_t x512 = 11;
	static int32_t t59 = 171799;

	t59 = (x509%((x510|x511)<x512));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x513 = -1;
	int32_t x514 = INT32_MIN;
	uint16_t x515 = 1563U;
	static uint8_t x516 = 100U;
	volatile int32_t t60 = 657053950;

	t60 = (x513%((x514|x515)<x516));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x525 = 0U;
	uint8_t x526 = UINT8_MAX;
	uint64_t x527 = 535039455215401LLU;
	volatile int64_t x528 = INT64_MIN;
	int32_t t61 = 1437;

	t61 = (x525%((x526|x527)<x528));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x555 = INT32_MIN;
	static uint32_t x556 = UINT32_MAX;
	static int64_t t62 = 869433LL;

	t62 = (x553%((x554|x555)<x556));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x562 = 1772075U;
	int32_t x563 = INT32_MAX;
	int16_t x564 = INT16_MIN;
	int32_t t63 = 91;

	t63 = (x561%((x562|x563)<x564));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x573 = INT64_MIN;
	int64_t x574 = 887626921732121957LL;
	int16_t x575 = INT16_MIN;
	volatile int64_t t64 = 38499511868LL;

	t64 = (x573%((x574|x575)<x576));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x581 = INT32_MAX;
	int32_t x582 = INT32_MAX;
	volatile int32_t t65 = -17;

	t65 = (x581%((x582|x583)<x584));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x589 = INT16_MIN;
	static int64_t x590 = 38712828223LL;
	int8_t x591 = INT8_MIN;
	int16_t x592 = 2487;

	t66 = (x589%((x590|x591)<x592));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x605 = 6500U;
	uint8_t x606 = UINT8_MAX;
	int64_t x608 = 20335815424LL;
	static uint32_t t67 = 46593595U;

	t67 = (x605%((x606|x607)<x608));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x617 = 80176443U;
	int64_t x618 = -1LL;
	volatile int32_t x619 = -1;
	static uint32_t x620 = 3U;

	t68 = (x617%((x618|x619)<x620));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x625 = 12U;
	int8_t x628 = INT8_MAX;
	volatile int32_t t69 = 32402;

	t69 = (x625%((x626|x627)<x628));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x629 = 1LL;
	int16_t x631 = -1;
	volatile int32_t x632 = INT32_MAX;
	int64_t t70 = -14744500049LL;

	t70 = (x629%((x630|x631)<x632));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x637 = INT64_MIN;
	uint8_t x638 = 6U;
	int32_t x639 = 33;
	uint32_t x640 = 9953212U;
	int64_t t71 = -135192233780869LL;

	t71 = (x637%((x638|x639)<x640));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x641 = INT16_MIN;
	static int32_t x642 = -461429710;
	static int16_t x644 = 2468;
	int32_t t72 = -163702;

	t72 = (x641%((x642|x643)<x644));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x649 = INT8_MIN;
	uint8_t x651 = UINT8_MAX;
	volatile uint32_t x652 = 2493U;
	int32_t t73 = 28965991;

	t73 = (x649%((x650|x651)<x652));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x653 = -1;
	int32_t x654 = -96082;
	static volatile uint32_t x655 = 1U;
	volatile int32_t t74 = -2;

	t74 = (x653%((x654|x655)<x656));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x657 = 172149807684LLU;
	uint64_t x658 = 112LLU;
	uint8_t x659 = UINT8_MAX;
	static int64_t x660 = INT64_MIN;
	uint64_t t75 = 2260017182383LLU;

	t75 = (x657%((x658|x659)<x660));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x661 = 1208U;
	int8_t x662 = INT8_MIN;
	static int8_t x663 = 0;
	volatile uint32_t x664 = UINT32_MAX;
	volatile uint32_t t76 = 937184114U;

	t76 = (x661%((x662|x663)<x664));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x665 = 1913;
	int64_t x666 = INT64_MAX;
	int64_t x667 = INT64_MIN;
	static volatile int32_t t77 = 1;

	t77 = (x665%((x666|x667)<x668));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x673 = INT32_MIN;
	volatile uint64_t x674 = 112842LLU;
	uint8_t x675 = UINT8_MAX;
	int8_t x676 = -1;
	int32_t t78 = -812829;

	t78 = (x673%((x674|x675)<x676));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x677 = 249103320LLU;
	int64_t x678 = INT64_MIN;
	int64_t x679 = -36706001855451372LL;

	t79 = (x677%((x678|x679)<x680));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x681 = UINT16_MAX;
	static volatile int16_t x684 = INT16_MIN;
	volatile int32_t t80 = 259979;

	t80 = (x681%((x682|x683)<x684));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x697 = INT64_MIN;
	static uint16_t x698 = UINT16_MAX;
	int64_t x700 = 449016170973LL;
	static volatile int64_t t81 = -10LL;

	t81 = (x697%((x698|x699)<x700));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x706 = INT64_MIN;
	uint8_t x707 = 5U;
	int64_t x708 = 384870749658600440LL;

	t82 = (x705%((x706|x707)<x708));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x709 = 15U;
	uint8_t x710 = 7U;
	uint32_t x711 = 22203828U;
	volatile int8_t x712 = -14;
	static volatile int32_t t83 = -7524255;

	t83 = (x709%((x710|x711)<x712));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x740 = -1;
	volatile int32_t t84 = -470205;

	t84 = (x737%((x738|x739)<x740));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x742 = -1LL;
	static uint8_t x743 = UINT8_MAX;
	volatile int8_t x744 = 1;
	volatile int32_t t85 = -1678594;

	t85 = (x741%((x742|x743)<x744));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x749 = INT32_MIN;
	int32_t x750 = -54193684;
	int8_t x752 = 1;
	static volatile int32_t t86 = -1226;

	t86 = (x749%((x750|x751)<x752));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x753 = -63002LL;
	uint64_t x754 = 64835416680LLU;
	static int16_t x755 = INT16_MAX;

	t87 = (x753%((x754|x755)<x756));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x758 = 18561716656915LLU;
	int32_t x759 = INT32_MIN;
	int16_t x760 = -5;
	static volatile int32_t t88 = 52368;

	t88 = (x757%((x758|x759)<x760));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x761 = UINT32_MAX;
	static int16_t x762 = INT16_MAX;
	int64_t x763 = INT64_MIN;
	volatile int64_t x764 = -1LL;

	t89 = (x761%((x762|x763)<x764));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x765 = -1;
	int64_t x766 = INT64_MAX;
	static int64_t x767 = 254239084856909862LL;

	t90 = (x765%((x766|x767)<x768));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x781 = UINT64_MAX;
	int16_t x782 = -9;
	uint16_t x784 = 0U;
	uint64_t t91 = 37991630384LLU;

	t91 = (x781%((x782|x783)<x784));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x785 = UINT8_MAX;
	static uint64_t x786 = 1627413180056643LLU;
	uint8_t x787 = UINT8_MAX;
	int32_t t92 = 13067;

	t92 = (x785%((x786|x787)<x788));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x793 = 21972U;
	static int8_t x794 = 6;
	int16_t x795 = INT16_MIN;
	static int32_t x796 = INT32_MAX;
	volatile uint32_t t93 = 8423U;

	t93 = (x793%((x794|x795)<x796));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x797 = 0U;
	uint64_t x798 = 26765907054LLU;
	volatile int16_t x799 = INT16_MIN;
	static int8_t x800 = -5;

	t94 = (x797%((x798|x799)<x800));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x801 = -127533000;
	volatile int32_t x802 = INT32_MAX;
	volatile uint8_t x803 = 0U;
	uint32_t x804 = UINT32_MAX;

	t95 = (x801%((x802|x803)<x804));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x822 = INT8_MAX;
	static uint8_t x823 = UINT8_MAX;
	uint32_t x824 = 9696U;
	uint32_t t96 = 98U;

	t96 = (x821%((x822|x823)<x824));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x825 = 4U;
	static volatile int16_t x826 = -1;
	int32_t x827 = INT32_MIN;
	uint8_t x828 = UINT8_MAX;

	t97 = (x825%((x826|x827)<x828));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x829 = INT32_MIN;
	int16_t x830 = INT16_MIN;

	t98 = (x829%((x830|x831)<x832));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x833 = UINT8_MAX;
	int8_t x835 = INT8_MIN;
	volatile int32_t t99 = 14975;

	t99 = (x833%((x834|x835)<x836));

	if (t99 != 0) { NG(); } else { ; }
	
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

