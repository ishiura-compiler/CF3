#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x1 = UINT16_MAX;
uint8_t x18 = UINT8_MAX;
static uint64_t x36 = UINT64_MAX;
uint16_t x46 = UINT16_MAX;
static uint64_t t8 = 4458763631216763860LLU;
uint32_t t9 = 1911U;
int64_t x82 = INT64_MIN;
static int32_t x86 = INT32_MIN;
int64_t t11 = -4102646337592142642LL;
int8_t x132 = 28;
static volatile int16_t x138 = INT16_MAX;
static int32_t x139 = INT32_MIN;
volatile uint64_t t18 = 35284717670134LLU;
static int16_t x166 = INT16_MIN;
int8_t x168 = INT8_MAX;
int8_t x174 = 60;
int8_t x175 = -1;
uint16_t x176 = 6U;
volatile uint8_t x177 = 26U;
int64_t t22 = -951532615LL;
volatile int8_t x196 = INT8_MAX;
int16_t x199 = INT16_MIN;
int16_t x249 = -1;
uint8_t x278 = UINT8_MAX;
uint8_t x279 = 3U;
int16_t x288 = 1385;
uint64_t x291 = 127205148681337LLU;
int64_t x348 = INT64_MAX;
int64_t x356 = INT64_MIN;
volatile int64_t x375 = -132LL;
int8_t x394 = INT8_MIN;
uint8_t x414 = UINT8_MAX;
int32_t x421 = -567510;
int64_t t42 = -20508685LL;
int64_t x425 = 20725189969LL;
int64_t t43 = 1731200618024LL;
uint32_t x458 = 19343U;
uint32_t x474 = 7374U;
static uint32_t x523 = 0U;
volatile int8_t x524 = INT8_MIN;
uint8_t x527 = 2U;
uint32_t x528 = 252U;
uint64_t x541 = UINT64_MAX;
int8_t x544 = INT8_MAX;
volatile uint64_t t53 = 29446118LLU;
int16_t x553 = -1;
int32_t x561 = -26321;
int64_t x562 = -1LL;
static int32_t x566 = INT32_MIN;
volatile uint8_t x567 = 22U;
int64_t x570 = -1399LL;
int64_t x571 = INT64_MIN;
volatile int64_t t58 = -376339510821826LL;
int16_t x609 = INT16_MIN;
volatile int16_t x615 = 6;
volatile int32_t t63 = -407;
uint32_t x642 = 57424U;
uint32_t x646 = 440U;
uint32_t t69 = 473299U;
int8_t x657 = INT8_MIN;
volatile int64_t x659 = -7LL;
volatile int32_t x661 = -144530;
volatile int16_t x662 = 778;
uint8_t x667 = 5U;
int16_t x673 = INT16_MIN;
static uint32_t x675 = 1954U;
volatile int32_t t74 = -10;
volatile uint32_t x700 = UINT32_MAX;
int32_t x718 = INT32_MIN;
volatile int16_t x719 = -176;
int32_t t77 = 1948;
int8_t x757 = 7;
int32_t x760 = INT32_MAX;
int32_t x765 = INT32_MAX;
static uint32_t x768 = 141U;
static volatile uint64_t x769 = 947456674828408LLU;
volatile uint16_t x771 = UINT16_MAX;
static volatile int16_t x778 = 120;
static uint64_t x786 = 68440341984567880LLU;
int32_t x822 = -29;
volatile int64_t x840 = INT64_MIN;
int64_t x908 = INT64_MAX;
volatile uint32_t t91 = 33023770U;
int32_t t93 = 285599149;
int8_t x949 = 0;
int64_t x950 = INT64_MAX;
uint16_t x965 = UINT16_MAX;
int32_t x967 = INT32_MIN;
int64_t x978 = INT64_MIN;


void f0(void) {
	uint32_t x2 = 11U;
	int16_t x3 = INT16_MIN;
	int32_t x4 = -1;
	uint32_t t0 = 49U;

	t0 = (x1+(x2/(x3<x4)));

	if (t0 != 65546U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int8_t x6 = -1;
	static int64_t x7 = INT64_MIN;
	int16_t x8 = -1;
	volatile int32_t t1 = 215;

	t1 = (x5+(x6/(x7<x8)));

	if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x13 = 344U;
	int8_t x14 = -1;
	int8_t x15 = INT8_MIN;
	int16_t x16 = -1;
	volatile int32_t t2 = -262992799;

	t2 = (x13+(x14/(x15<x16)));

	if (t2 != 343) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = 0LL;
	volatile int64_t x19 = 11LL;
	static volatile uint16_t x20 = 186U;
	int64_t t3 = -106051672148290LL;

	t3 = (x17+(x18/(x19<x20)));

	if (t3 != 255LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x25 = -1;
	static int64_t x26 = INT64_MAX;
	int16_t x27 = -1;
	uint8_t x28 = UINT8_MAX;
	static int64_t t4 = 252262249703782LL;

	t4 = (x25+(x26/(x27<x28)));

	if (t4 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x33 = 30U;
	static int8_t x34 = INT8_MAX;
	static volatile uint32_t x35 = 7U;
	volatile int32_t t5 = -162569557;

	t5 = (x33+(x34/(x35<x36)));

	if (t5 != 157) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x45 = -22448145360596LL;
	uint64_t x47 = 216526797LLU;
	int64_t x48 = INT64_MIN;
	volatile int64_t t6 = 9LL;

	t6 = (x45+(x46/(x47<x48)));

	if (t6 != -22448145295061LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x53 = UINT64_MAX;
	int32_t x54 = INT32_MAX;
	int32_t x55 = INT32_MIN;
	volatile int64_t x56 = 107236551094327687LL;
	volatile uint64_t t7 = 777262LLU;

	t7 = (x53+(x54/(x55<x56)));

	if (t7 != 2147483646LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x61 = 24474543LLU;
	static int16_t x62 = INT16_MAX;
	int64_t x63 = INT64_MIN;
	int16_t x64 = INT16_MIN;

	t8 = (x61+(x62/(x63<x64)));

	if (t8 != 24507310LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x69 = 682489U;
	static int8_t x70 = INT8_MIN;
	int32_t x71 = -1;
	int32_t x72 = 755189954;

	t9 = (x69+(x70/(x71<x72)));

	if (t9 != 682361U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x81 = 1746U;
	int16_t x83 = INT16_MIN;
	static volatile int16_t x84 = -146;
	int64_t t10 = -57031194888924LL;

	t10 = (x81+(x82/(x83<x84)));

	if (t10 != -9223372036854774062LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x85 = 1062149850219LL;
	int64_t x87 = INT64_MIN;
	volatile int8_t x88 = 3;

	t11 = (x85+(x86/(x87<x88)));

	if (t11 != 1060002366571LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x93 = -1;
	uint32_t x94 = UINT32_MAX;
	int64_t x95 = INT64_MIN;
	uint64_t x96 = UINT64_MAX;
	uint32_t t12 = 99965359U;

	t12 = (x93+(x94/(x95<x96)));

	if (t12 != 4294967294U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x97 = INT8_MIN;
	static uint32_t x98 = UINT32_MAX;
	volatile uint32_t x99 = 4314U;
	volatile uint16_t x100 = 5123U;
	volatile uint32_t t13 = 153939580U;

	t13 = (x97+(x98/(x99<x100)));

	if (t13 != 4294967167U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x101 = -1LL;
	int32_t x102 = -12388;
	int16_t x103 = INT16_MIN;
	int32_t x104 = INT32_MAX;
	volatile int64_t t14 = 0LL;

	t14 = (x101+(x102/(x103<x104)));

	if (t14 != -12389LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x113 = 27U;
	int64_t x114 = INT64_MIN;
	uint16_t x115 = 441U;
	static uint32_t x116 = 977534U;
	static int64_t t15 = 96216868275089826LL;

	t15 = (x113+(x114/(x115<x116)));

	if (t15 != -9223372036854775781LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x129 = 200425911962422115LL;
	static uint16_t x130 = UINT16_MAX;
	int32_t x131 = INT32_MIN;
	int64_t t16 = -4181513LL;

	t16 = (x129+(x130/(x131<x132)));

	if (t16 != 200425911962487650LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x137 = 203885139U;
	uint8_t x140 = UINT8_MAX;
	uint32_t t17 = 1928132976U;

	t17 = (x137+(x138/(x139<x140)));

	if (t17 != 203917906U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x157 = 36096LLU;
	static int8_t x158 = -57;
	int8_t x159 = INT8_MIN;
	uint8_t x160 = 0U;

	t18 = (x157+(x158/(x159<x160)));

	if (t18 != 36039LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x165 = 4326U;
	int64_t x167 = INT64_MIN;
	volatile int32_t t19 = 9115317;

	t19 = (x165+(x166/(x167<x168)));

	if (t19 != -28442) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x173 = -1;
	int32_t t20 = -7273;

	t20 = (x173+(x174/(x175<x176)));

	if (t20 != 59) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x178 = INT8_MIN;
	volatile int32_t x179 = -1;
	volatile int16_t x180 = INT16_MAX;
	int32_t t21 = -16707871;

	t21 = (x177+(x178/(x179<x180)));

	if (t21 != -102) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x185 = 424U;
	int64_t x186 = -19527906688340869LL;
	int32_t x187 = -447287;
	int32_t x188 = -206;

	t22 = (x185+(x186/(x187<x188)));

	if (t22 != -19527906688340445LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x193 = -3;
	static int8_t x194 = -1;
	int32_t x195 = INT32_MIN;
	volatile int32_t t23 = 0;

	t23 = (x193+(x194/(x195<x196)));

	if (t23 != -4) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x197 = INT8_MAX;
	volatile uint8_t x198 = 5U;
	volatile int64_t x200 = 1453834819600835LL;
	int32_t t24 = 1;

	t24 = (x197+(x198/(x199<x200)));

	if (t24 != 132) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x201 = INT64_MIN;
	volatile uint16_t x202 = 15U;
	int64_t x203 = 28913358LL;
	int64_t x204 = INT64_MAX;
	int64_t t25 = -1LL;

	t25 = (x201+(x202/(x203<x204)));

	if (t25 != -9223372036854775793LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x250 = INT16_MIN;
	static int16_t x251 = INT16_MIN;
	int8_t x252 = -1;
	static volatile int32_t t26 = 513562248;

	t26 = (x249+(x250/(x251<x252)));

	if (t26 != -32769) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x265 = 113U;
	static uint16_t x266 = UINT16_MAX;
	static int64_t x267 = INT64_MIN;
	uint32_t x268 = 6U;
	int32_t t27 = 256;

	t27 = (x265+(x266/(x267<x268)));

	if (t27 != 65648) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x277 = UINT16_MAX;
	uint16_t x280 = UINT16_MAX;
	static volatile int32_t t28 = -289036;

	t28 = (x277+(x278/(x279<x280)));

	if (t28 != 65790) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x285 = -3773077;
	uint8_t x286 = 5U;
	volatile int64_t x287 = -1LL;
	volatile int32_t t29 = -487050740;

	t29 = (x285+(x286/(x287<x288)));

	if (t29 != -3773072) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x289 = 27;
	int8_t x290 = 21;
	int32_t x292 = -1;
	volatile int32_t t30 = -12;

	t30 = (x289+(x290/(x291<x292)));

	if (t30 != 48) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x317 = INT8_MAX;
	static uint8_t x318 = 0U;
	uint32_t x319 = 7U;
	int16_t x320 = INT16_MIN;
	volatile int32_t t31 = 169;

	t31 = (x317+(x318/(x319<x320)));

	if (t31 != 127) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x325 = 7985147663141LLU;
	uint32_t x326 = UINT32_MAX;
	int16_t x327 = 1;
	int8_t x328 = INT8_MAX;
	uint64_t t32 = 1732112LLU;

	t32 = (x325+(x326/(x327<x328)));

	if (t32 != 7989442630436LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x329 = -1;
	uint64_t x330 = UINT64_MAX;
	int32_t x331 = -1800;
	volatile uint8_t x332 = UINT8_MAX;
	uint64_t t33 = 33899018531773684LLU;

	t33 = (x329+(x330/(x331<x332)));

	if (t33 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x337 = INT32_MAX;
	static int32_t x338 = INT32_MIN;
	int16_t x339 = -1;
	int64_t x340 = 1741801419140LL;
	int32_t t34 = 1;

	t34 = (x337+(x338/(x339<x340)));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x345 = UINT16_MAX;
	int32_t x346 = 1694;
	int32_t x347 = INT32_MIN;
	int32_t t35 = 1335;

	t35 = (x345+(x346/(x347<x348)));

	if (t35 != 67229) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x353 = INT16_MAX;
	uint16_t x354 = UINT16_MAX;
	uint64_t x355 = 19429839395400LLU;
	volatile int32_t t36 = -870360;

	t36 = (x353+(x354/(x355<x356)));

	if (t36 != 98302) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x373 = -6053546;
	int16_t x374 = INT16_MAX;
	static int32_t x376 = 49873445;
	volatile int32_t t37 = -1022430;

	t37 = (x373+(x374/(x375<x376)));

	if (t37 != -6020779) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x381 = 12;
	int8_t x382 = INT8_MIN;
	int16_t x383 = 937;
	static uint64_t x384 = UINT64_MAX;
	int32_t t38 = 4;

	t38 = (x381+(x382/(x383<x384)));

	if (t38 != -116) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x393 = 53U;
	static int32_t x395 = INT32_MAX;
	uint64_t x396 = UINT64_MAX;
	volatile int32_t t39 = 8;

	t39 = (x393+(x394/(x395<x396)));

	if (t39 != -75) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x409 = UINT64_MAX;
	static int16_t x410 = INT16_MIN;
	static int8_t x411 = -1;
	int16_t x412 = 9;
	static volatile uint64_t t40 = 2241584852137LLU;

	t40 = (x409+(x410/(x411<x412)));

	if (t40 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x413 = UINT8_MAX;
	int8_t x415 = INT8_MIN;
	static int16_t x416 = INT16_MAX;
	volatile int32_t t41 = -21655;

	t41 = (x413+(x414/(x415<x416)));

	if (t41 != 510) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x422 = 67721598250482LL;
	uint8_t x423 = 2U;
	static uint32_t x424 = 382U;

	t42 = (x421+(x422/(x423<x424)));

	if (t42 != 67721597682972LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x426 = 1;
	int8_t x427 = -48;
	static uint8_t x428 = 1U;

	t43 = (x425+(x426/(x427<x428)));

	if (t43 != 20725189970LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x453 = UINT32_MAX;
	int16_t x454 = INT16_MIN;
	static int32_t x455 = -1;
	volatile int16_t x456 = 0;
	volatile uint32_t t44 = 2U;

	t44 = (x453+(x454/(x455<x456)));

	if (t44 != 4294934527U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x457 = INT32_MIN;
	uint32_t x459 = 341058994U;
	int32_t x460 = -1;
	uint32_t t45 = 6U;

	t45 = (x457+(x458/(x459<x460)));

	if (t45 != 2147502991U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x461 = INT8_MIN;
	uint8_t x462 = UINT8_MAX;
	volatile int64_t x463 = INT64_MIN;
	int16_t x464 = INT16_MAX;
	int32_t t46 = 497;

	t46 = (x461+(x462/(x463<x464)));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x473 = INT64_MIN;
	int32_t x475 = -868403084;
	volatile int8_t x476 = 13;
	volatile int64_t t47 = 1211439170937767592LL;

	t47 = (x473+(x474/(x475<x476)));

	if (t47 != -9223372036854768434LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x481 = -1;
	uint64_t x482 = 24576877LLU;
	static int32_t x483 = INT32_MIN;
	int32_t x484 = 3;
	uint64_t t48 = 22502LLU;

	t48 = (x481+(x482/(x483<x484)));

	if (t48 != 24576876LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x505 = INT8_MIN;
	int8_t x506 = INT8_MIN;
	int8_t x507 = INT8_MAX;
	uint16_t x508 = UINT16_MAX;
	volatile int32_t t49 = 11;

	t49 = (x505+(x506/(x507<x508)));

	if (t49 != -256) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x521 = INT64_MIN;
	static uint64_t x522 = 390380546871178LLU;
	volatile uint64_t t50 = 1097129928330104LLU;

	t50 = (x521+(x522/(x523<x524)));

	if (t50 != 9223762417401646986LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x525 = INT32_MIN;
	int64_t x526 = -1692LL;
	static volatile int64_t t51 = -2063512208335748448LL;

	t51 = (x525+(x526/(x527<x528)));

	if (t51 != -2147485340LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x533 = INT16_MAX;
	int8_t x534 = INT8_MIN;
	uint32_t x535 = 2U;
	volatile uint64_t x536 = UINT64_MAX;
	volatile int32_t t52 = -2075;

	t52 = (x533+(x534/(x535<x536)));

	if (t52 != 32639) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x542 = -1;
	int32_t x543 = -1;

	t53 = (x541+(x542/(x543<x544)));

	if (t53 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x554 = 490857;
	int32_t x555 = INT32_MIN;
	volatile uint32_t x556 = UINT32_MAX;
	volatile int32_t t54 = 0;

	t54 = (x553+(x554/(x555<x556)));

	if (t54 != 490856) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x557 = -1;
	uint64_t x558 = 11567283474150LLU;
	uint8_t x559 = 6U;
	int64_t x560 = 8252237992657LL;
	static volatile uint64_t t55 = 40565951328LLU;

	t55 = (x557+(x558/(x559<x560)));

	if (t55 != 11567283474149LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x563 = 1;
	volatile int64_t x564 = 1147LL;
	volatile int64_t t56 = -132534760LL;

	t56 = (x561+(x562/(x563<x564)));

	if (t56 != -26322LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x565 = 24U;
	uint64_t x568 = 4587564014573218LLU;
	static volatile int32_t t57 = 436655;

	t57 = (x565+(x566/(x567<x568)));

	if (t57 != -2147483624) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x569 = 802;
	int16_t x572 = INT16_MIN;

	t58 = (x569+(x570/(x571<x572)));

	if (t58 != -597LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x577 = INT32_MAX;
	volatile int16_t x578 = -1;
	int32_t x579 = INT32_MIN;
	static int16_t x580 = INT16_MIN;
	volatile int32_t t59 = 30954114;

	t59 = (x577+(x578/(x579<x580)));

	if (t59 != 2147483646) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x589 = 37860653502577104LLU;
	uint16_t x590 = 10U;
	volatile int8_t x591 = INT8_MIN;
	volatile int64_t x592 = 226675878LL;
	uint64_t t60 = 59047LLU;

	t60 = (x589+(x590/(x591<x592)));

	if (t60 != 37860653502577114LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x597 = -1LL;
	int64_t x598 = INT64_MAX;
	uint8_t x599 = 54U;
	uint64_t x600 = 2257979343875LLU;
	static int64_t t61 = -973191392125722LL;

	t61 = (x597+(x598/(x599<x600)));

	if (t61 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x610 = 3700;
	volatile int8_t x611 = -10;
	int64_t x612 = -1LL;
	volatile int32_t t62 = 30062;

	t62 = (x609+(x610/(x611<x612)));

	if (t62 != -29068) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x613 = -1;
	uint8_t x614 = 63U;
	volatile int16_t x616 = INT16_MAX;

	t63 = (x613+(x614/(x615<x616)));

	if (t63 != 62) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x617 = 171;
	int16_t x618 = 1;
	volatile int16_t x619 = -1163;
	static int64_t x620 = 617158718854LL;
	int32_t t64 = -404278;

	t64 = (x617+(x618/(x619<x620)));

	if (t64 != 172) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x621 = 3342U;
	int64_t x622 = INT64_MIN;
	uint32_t x623 = 65U;
	int64_t x624 = 34037120484757LL;
	int64_t t65 = 833LL;

	t65 = (x621+(x622/(x623<x624)));

	if (t65 != -9223372036854772466LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x625 = 44808LLU;
	int64_t x626 = INT64_MIN;
	int64_t x627 = -1LL;
	uint32_t x628 = UINT32_MAX;
	uint64_t t66 = 16882843500LLU;

	t66 = (x625+(x626/(x627<x628)));

	if (t66 != 9223372036854820616LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x637 = 274296717U;
	int32_t x638 = -545275354;
	int16_t x639 = 2;
	int16_t x640 = INT16_MAX;
	uint32_t t67 = 38026412U;

	t67 = (x637+(x638/(x639<x640)));

	if (t67 != 4023988659U) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x641 = -1;
	static int64_t x643 = INT64_MIN;
	static int32_t x644 = INT32_MIN;
	static uint32_t t68 = 47915U;

	t68 = (x641+(x642/(x643<x644)));

	if (t68 != 57423U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x645 = 129469603U;
	int16_t x647 = 194;
	volatile uint64_t x648 = 457806LLU;

	t69 = (x645+(x646/(x647<x648)));

	if (t69 != 129470043U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x658 = INT8_MIN;
	static uint16_t x660 = 24U;
	volatile int32_t t70 = 660344;

	t70 = (x657+(x658/(x659<x660)));

	if (t70 != -256) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x663 = -1LL;
	uint32_t x664 = UINT32_MAX;
	static volatile int32_t t71 = 31;

	t71 = (x661+(x662/(x663<x664)));

	if (t71 != -143752) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x665 = UINT32_MAX;
	uint32_t x666 = 90600U;
	uint8_t x668 = 110U;
	static uint32_t t72 = 5355U;

	t72 = (x665+(x666/(x667<x668)));

	if (t72 != 90599U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x674 = 0U;
	int16_t x676 = INT16_MIN;
	volatile int32_t t73 = 13082776;

	t73 = (x673+(x674/(x675<x676)));

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x681 = INT8_MIN;
	static int16_t x682 = -1;
	int8_t x683 = INT8_MIN;
	uint8_t x684 = 1U;

	t74 = (x681+(x682/(x683<x684)));

	if (t74 != -129) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x697 = INT16_MAX;
	static uint64_t x698 = 14343669779845LLU;
	uint16_t x699 = UINT16_MAX;
	volatile uint64_t t75 = 774867749515243572LLU;

	t75 = (x697+(x698/(x699<x700)));

	if (t75 != 14343669812612LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x717 = UINT32_MAX;
	uint8_t x720 = UINT8_MAX;
	uint32_t t76 = 221U;

	t76 = (x717+(x718/(x719<x720)));

	if (t76 != 2147483647U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x725 = UINT8_MAX;
	static int16_t x726 = INT16_MIN;
	uint8_t x727 = UINT8_MAX;
	uint64_t x728 = 836LLU;

	t77 = (x725+(x726/(x727<x728)));

	if (t77 != -32513) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x758 = INT64_MIN;
	uint8_t x759 = UINT8_MAX;
	static int64_t t78 = 10326LL;

	t78 = (x757+(x758/(x759<x760)));

	if (t78 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x761 = 17092LLU;
	uint32_t x762 = 29U;
	int8_t x763 = INT8_MIN;
	static volatile uint16_t x764 = UINT16_MAX;
	static uint64_t t79 = 341231LLU;

	t79 = (x761+(x762/(x763<x764)));

	if (t79 != 17121LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int8_t x766 = -10;
	volatile int64_t x767 = -1LL;
	int32_t t80 = 11998206;

	t80 = (x765+(x766/(x767<x768)));

	if (t80 != 2147483637) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x770 = 220LL;
	static uint64_t x772 = UINT64_MAX;
	uint64_t t81 = 533552162625648947LLU;

	t81 = (x769+(x770/(x771<x772)));

	if (t81 != 947456674828628LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x777 = 2854502322393275LL;
	uint16_t x779 = 116U;
	volatile uint64_t x780 = 123573349LLU;
	volatile int64_t t82 = 754LL;

	t82 = (x777+(x778/(x779<x780)));

	if (t82 != 2854502322393395LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x785 = UINT8_MAX;
	static volatile int32_t x787 = INT32_MIN;
	int32_t x788 = -16;
	uint64_t t83 = 379LLU;

	t83 = (x785+(x786/(x787<x788)));

	if (t83 != 68440341984568135LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x789 = INT32_MAX;
	int64_t x790 = -1LL;
	int64_t x791 = 2337LL;
	int16_t x792 = INT16_MAX;
	volatile int64_t t84 = -235723358052931LL;

	t84 = (x789+(x790/(x791<x792)));

	if (t84 != 2147483646LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x793 = 15513U;
	int8_t x794 = 1;
	int8_t x795 = INT8_MIN;
	int16_t x796 = 221;
	int32_t t85 = 9822;

	t85 = (x793+(x794/(x795<x796)));

	if (t85 != 15514) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x809 = -1LL;
	int32_t x810 = 160;
	int64_t x811 = -1LL;
	uint16_t x812 = 3U;
	static volatile int64_t t86 = 72758038998052052LL;

	t86 = (x809+(x810/(x811<x812)));

	if (t86 != 159LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x813 = INT8_MIN;
	uint64_t x814 = UINT64_MAX;
	uint64_t x815 = 4125137033854543LLU;
	int8_t x816 = -1;
	static volatile uint64_t t87 = 37286566999LLU;

	t87 = (x813+(x814/(x815<x816)));

	if (t87 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x821 = UINT32_MAX;
	int8_t x823 = INT8_MIN;
	int32_t x824 = INT32_MAX;
	volatile uint32_t t88 = 495468860U;

	t88 = (x821+(x822/(x823<x824)));

	if (t88 != 4294967266U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x837 = UINT64_MAX;
	static int16_t x838 = INT16_MIN;
	uint64_t x839 = 132882123124LLU;
	volatile uint64_t t89 = 2028680463073294142LLU;

	t89 = (x837+(x838/(x839<x840)));

	if (t89 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x905 = INT8_MIN;
	int8_t x906 = INT8_MIN;
	uint8_t x907 = UINT8_MAX;
	int32_t t90 = 931486161;

	t90 = (x905+(x906/(x907<x908)));

	if (t90 != -256) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x917 = 622986U;
	volatile uint16_t x918 = 1787U;
	int16_t x919 = 17;
	uint16_t x920 = 9872U;

	t91 = (x917+(x918/(x919<x920)));

	if (t91 != 624773U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x921 = INT32_MAX;
	static volatile int64_t x922 = INT64_MIN;
	static uint8_t x923 = UINT8_MAX;
	uint32_t x924 = UINT32_MAX;
	volatile int64_t t92 = 522949654657562300LL;

	t92 = (x921+(x922/(x923<x924)));

	if (t92 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x925 = 16237;
	volatile int8_t x926 = -1;
	int16_t x927 = INT16_MIN;
	uint16_t x928 = 3U;

	t93 = (x925+(x926/(x927<x928)));

	if (t93 != 16236) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x929 = 20588956189951LL;
	int64_t x930 = INT64_MIN;
	int16_t x931 = -43;
	int8_t x932 = 7;
	static volatile int64_t t94 = 21698534301187LL;

	t94 = (x929+(x930/(x931<x932)));

	if (t94 != -9223351447898585857LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x937 = -1LL;
	int64_t x938 = INT64_MAX;
	int16_t x939 = INT16_MIN;
	int8_t x940 = -1;
	static volatile int64_t t95 = 178LL;

	t95 = (x937+(x938/(x939<x940)));

	if (t95 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x945 = INT16_MIN;
	volatile int64_t x946 = INT64_MAX;
	volatile int64_t x947 = INT64_MIN;
	uint16_t x948 = 22U;
	int64_t t96 = -9LL;

	t96 = (x945+(x946/(x947<x948)));

	if (t96 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x951 = INT64_MIN;
	static volatile int8_t x952 = -1;
	int64_t t97 = INT64_MAX;

	t97 = (x949+(x950/(x951<x952)));

	if (t97 != INT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x966 = UINT8_MAX;
	volatile int64_t x968 = INT64_MAX;
	int32_t t98 = 94421;

	t98 = (x965+(x966/(x967<x968)));

	if (t98 != 65790) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint8_t x977 = 0U;
	static int32_t x979 = INT32_MIN;
	static uint64_t x980 = UINT64_MAX;
	int64_t t99 = INT64_MIN;

	t99 = (x977+(x978/(x979<x980)));

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

