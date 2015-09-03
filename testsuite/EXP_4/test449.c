#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 49823585U;
int32_t x4 = -249071;
uint32_t x18 = 10799840U;
volatile uint8_t x57 = 48U;
int8_t x66 = -1;
static uint16_t x99 = 3924U;
static uint8_t x100 = 0U;
volatile int32_t t9 = 277074465;
uint64_t x110 = 28LLU;
int16_t x112 = INT16_MIN;
volatile int16_t x113 = INT16_MAX;
volatile int32_t x114 = -1;
uint8_t x118 = 0U;
int32_t x120 = -1;
static int64_t t13 = INT64_MAX;
uint32_t x130 = 167U;
int32_t x131 = 327;
static uint32_t x157 = 17838311U;
static uint8_t x160 = UINT8_MAX;
volatile uint64_t t17 = 100105LLU;
int32_t x210 = INT32_MIN;
int16_t x211 = -1;
static int16_t x214 = INT16_MIN;
volatile uint32_t x215 = UINT32_MAX;
uint32_t x216 = UINT32_MAX;
int32_t t23 = -596193755;
volatile int32_t t24 = 79;
volatile int8_t x227 = 5;
int32_t t27 = 3823;
int32_t x254 = INT32_MIN;
uint16_t x255 = UINT16_MAX;
uint32_t x256 = UINT32_MAX;
static int64_t x262 = -1472189242870LL;
volatile int64_t x266 = INT64_MAX;
uint32_t x268 = 537273U;
static volatile int32_t t30 = -93;
volatile int16_t x284 = INT16_MAX;
volatile uint32_t t31 = 415000U;
volatile int64_t x285 = INT64_MAX;
static int16_t x286 = 30;
uint8_t x295 = 27U;
uint64_t x300 = 815817LLU;
int64_t x306 = INT64_MIN;
uint8_t x308 = 58U;
volatile int32_t t36 = 151462036;
uint64_t x319 = 129103725858109LLU;
volatile int32_t t37 = -2220783;
uint16_t x365 = UINT16_MAX;
static volatile int64_t t42 = -858LL;
volatile int16_t x386 = -1;
uint64_t x389 = 816373LLU;
uint16_t x409 = UINT16_MAX;
static uint8_t x410 = 28U;
volatile uint32_t x412 = 3737401U;
int32_t t45 = -4856576;
int16_t x415 = -1;
int32_t t46 = 376927767;
uint32_t x433 = UINT32_MAX;
volatile uint32_t t48 = UINT32_MAX;
uint8_t x439 = 6U;
uint16_t x461 = 6U;
static uint64_t x484 = 77082LLU;
int8_t x485 = 9;
int32_t t55 = -2137;
volatile int32_t t59 = 524980508;
uint64_t x563 = 2023077LLU;
int64_t x564 = -1LL;
volatile int32_t t63 = -254549543;
int8_t x573 = INT8_MAX;
int32_t x578 = 360556140;
uint8_t x579 = 1U;
int16_t x580 = -1;
static int64_t x584 = 10008740420926LL;
uint8_t x592 = 123U;
int64_t x601 = 563291294844268414LL;
volatile int16_t x603 = 22;
uint32_t x604 = UINT32_MAX;
int64_t t69 = -1144100100025LL;
uint32_t t71 = 10126U;
uint16_t x632 = UINT16_MAX;
uint8_t x633 = 28U;
uint8_t x661 = 1U;
static int32_t t75 = -216168;
static volatile int16_t x667 = INT16_MIN;
static volatile uint32_t x668 = 1405249083U;
uint64_t x683 = 6234854873LLU;
static int64_t x686 = -1LL;
uint8_t x711 = UINT8_MAX;
volatile uint32_t t83 = 0U;
static volatile int16_t x739 = INT16_MAX;
uint32_t x764 = UINT32_MAX;
int64_t x798 = INT64_MIN;
int16_t x799 = INT16_MIN;
uint64_t x800 = 117LLU;
int32_t t87 = 13560;
int32_t x830 = 258951;
uint32_t x870 = 14382142U;
static volatile uint32_t t91 = 1654U;
static int16_t x875 = 6398;
static uint16_t x876 = 3216U;
static int8_t x900 = -1;
int64_t x924 = -4LL;
volatile int32_t t96 = 65;
volatile uint32_t x935 = UINT32_MAX;
volatile int32_t t98 = 468304554;


void f0(void) {
	int8_t x2 = INT8_MIN;
	uint64_t x3 = 228345728128554LLU;
	uint32_t t0 = 43U;

	t0 = (x1>>(x2<(x3*x4)));

	if (t0 != 49823585U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = UINT16_MAX;
	static int16_t x10 = -1;
	static uint16_t x11 = 3868U;
	volatile int16_t x12 = INT16_MIN;
	volatile int32_t t1 = 1096836;

	t1 = (x9>>(x10<(x11*x12)));

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x17 = 1U;
	volatile int8_t x19 = INT8_MAX;
	uint32_t x20 = UINT32_MAX;
	static uint32_t t2 = 7483808U;

	t2 = (x17>>(x18<(x19*x20)));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x58 = UINT64_MAX;
	int32_t x59 = INT32_MAX;
	static volatile uint64_t x60 = UINT64_MAX;
	int32_t t3 = -10;

	t3 = (x57>>(x58<(x59*x60)));

	if (t3 != 48) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x61 = UINT16_MAX;
	int16_t x62 = -1;
	int8_t x63 = 1;
	uint64_t x64 = UINT64_MAX;
	int32_t t4 = -277270826;

	t4 = (x61>>(x62<(x63*x64)));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x65 = 57;
	uint32_t x67 = UINT32_MAX;
	uint64_t x68 = 13186356190213LLU;
	volatile int32_t t5 = -203;

	t5 = (x65>>(x66<(x67*x68)));

	if (t5 != 57) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x81 = 1;
	volatile int16_t x82 = 2172;
	volatile uint8_t x83 = 91U;
	volatile uint32_t x84 = 662U;
	int32_t t6 = -2445;

	t6 = (x81>>(x82<(x83*x84)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x85 = UINT16_MAX;
	static volatile int32_t x86 = -30;
	uint16_t x87 = UINT16_MAX;
	int64_t x88 = -1LL;
	static volatile int32_t t7 = -7099758;

	t7 = (x85>>(x86<(x87*x88)));

	if (t7 != 65535) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x93 = 2;
	int32_t x94 = -2;
	int16_t x95 = -4;
	int16_t x96 = INT16_MAX;
	static volatile int32_t t8 = -19;

	t8 = (x93>>(x94<(x95*x96)));

	if (t8 != 2) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x97 = INT16_MAX;
	uint64_t x98 = UINT64_MAX;

	t9 = (x97>>(x98<(x99*x100)));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x109 = UINT64_MAX;
	static uint16_t x111 = UINT16_MAX;
	volatile uint64_t t10 = 82488LLU;

	t10 = (x109>>(x110<(x111*x112)));

	if (t10 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x115 = 863493U;
	int8_t x116 = -3;
	static int32_t t11 = -7289603;

	t11 = (x113>>(x114<(x115*x116)));

	if (t11 != 32767) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x117 = INT16_MAX;
	int16_t x119 = INT16_MAX;
	int32_t t12 = 30421919;

	t12 = (x117>>(x118<(x119*x120)));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x125 = INT64_MAX;
	static volatile int8_t x126 = 18;
	int64_t x127 = -46498LL;
	volatile int8_t x128 = INT8_MAX;

	t13 = (x125>>(x126<(x127*x128)));

	if (t13 != INT64_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x129 = UINT16_MAX;
	uint8_t x132 = UINT8_MAX;
	volatile int32_t t14 = 13769;

	t14 = (x129>>(x130<(x131*x132)));

	if (t14 != 32767) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x158 = INT64_MIN;
	int8_t x159 = INT8_MIN;
	uint32_t t15 = 4614835U;

	t15 = (x157>>(x158<(x159*x160)));

	if (t15 != 8919155U) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x161 = 388U;
	volatile uint32_t x162 = 125407200U;
	int32_t x163 = 1;
	uint8_t x164 = 12U;
	int32_t t16 = 1;

	t16 = (x161>>(x162<(x163*x164)));

	if (t16 != 388) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x165 = 3354819329LLU;
	int64_t x166 = -472634099363LL;
	int64_t x167 = 250043LL;
	static int32_t x168 = 1591;

	t17 = (x165>>(x166<(x167*x168)));

	if (t17 != 1677409664LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x177 = 24878516682446LLU;
	volatile uint16_t x178 = 89U;
	static int8_t x179 = -15;
	uint16_t x180 = 1021U;
	static uint64_t t18 = 1134785606964LLU;

	t18 = (x177>>(x178<(x179*x180)));

	if (t18 != 24878516682446LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x181 = UINT16_MAX;
	int8_t x182 = 0;
	static int8_t x183 = INT8_MIN;
	int8_t x184 = INT8_MAX;
	int32_t t19 = 214;

	t19 = (x181>>(x182<(x183*x184)));

	if (t19 != 65535) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x185 = INT16_MAX;
	uint16_t x186 = UINT16_MAX;
	volatile uint16_t x187 = UINT16_MAX;
	int32_t x188 = -1;
	volatile int32_t t20 = -29204;

	t20 = (x185>>(x186<(x187*x188)));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x201 = UINT16_MAX;
	volatile int8_t x202 = INT8_MAX;
	uint32_t x203 = 219U;
	uint16_t x204 = UINT16_MAX;
	int32_t t21 = 356071317;

	t21 = (x201>>(x202<(x203*x204)));

	if (t21 != 32767) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x209 = 1LL;
	volatile uint8_t x212 = 12U;
	int64_t t22 = -2029569031391126LL;

	t22 = (x209>>(x210<(x211*x212)));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x213 = 3794;

	t23 = (x213>>(x214<(x215*x216)));

	if (t23 != 3794) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x221 = INT16_MAX;
	volatile int32_t x222 = 46;
	int16_t x223 = -1;
	volatile int32_t x224 = -352;

	t24 = (x221>>(x222<(x223*x224)));

	if (t24 != 16383) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x225 = UINT16_MAX;
	volatile int8_t x226 = INT8_MAX;
	uint16_t x228 = 23533U;
	int32_t t25 = 83;

	t25 = (x225>>(x226<(x227*x228)));

	if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x229 = 12U;
	int8_t x230 = INT8_MIN;
	uint16_t x231 = 0U;
	uint32_t x232 = 881255448U;
	volatile int32_t t26 = 27190;

	t26 = (x229>>(x230<(x231*x232)));

	if (t26 != 12) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x245 = 48;
	uint8_t x246 = 0U;
	volatile uint64_t x247 = UINT64_MAX;
	static int8_t x248 = 45;

	t27 = (x245>>(x246<(x247*x248)));

	if (t27 != 24) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x253 = 661061;
	int32_t t28 = 22;

	t28 = (x253>>(x254<(x255*x256)));

	if (t28 != 330530) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x261 = 321;
	uint32_t x263 = 232783325U;
	static uint64_t x264 = 125389647LLU;
	volatile int32_t t29 = 15;

	t29 = (x261>>(x262<(x263*x264)));

	if (t29 != 321) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x265 = UINT8_MAX;
	volatile int32_t x267 = 314169;

	t30 = (x265>>(x266<(x267*x268)));

	if (t30 != 255) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x281 = 580758U;
	volatile int64_t x282 = -263211366252254744LL;
	int8_t x283 = 0;

	t31 = (x281>>(x282<(x283*x284)));

	if (t31 != 290379U) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x287 = -1;
	int16_t x288 = INT16_MIN;
	volatile int64_t t32 = -1178730627LL;

	t32 = (x285>>(x286<(x287*x288)));

	if (t32 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x293 = INT8_MAX;
	static int8_t x294 = 0;
	static int16_t x296 = -1;
	volatile int32_t t33 = 60343253;

	t33 = (x293>>(x294<(x295*x296)));

	if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x297 = INT32_MAX;
	int32_t x298 = INT32_MIN;
	volatile int8_t x299 = INT8_MIN;
	static int32_t t34 = 60;

	t34 = (x297>>(x298<(x299*x300)));

	if (t34 != 1073741823) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x301 = 473305572754719028LL;
	static int8_t x302 = INT8_MIN;
	static volatile int16_t x303 = INT16_MIN;
	uint16_t x304 = 15U;
	volatile int64_t t35 = -109432244LL;

	t35 = (x301>>(x302<(x303*x304)));

	if (t35 != 473305572754719028LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x305 = INT32_MAX;
	static int16_t x307 = INT16_MIN;

	t36 = (x305>>(x306<(x307*x308)));

	if (t36 != 1073741823) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x317 = 1U;
	uint16_t x318 = UINT16_MAX;
	volatile uint32_t x320 = 404916079U;

	t37 = (x317>>(x318<(x319*x320)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x321 = UINT64_MAX;
	static int8_t x322 = INT8_MAX;
	uint64_t x323 = 76161248LLU;
	static int64_t x324 = INT64_MIN;
	volatile uint64_t t38 = UINT64_MAX;

	t38 = (x321>>(x322<(x323*x324)));

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x329 = 1U;
	static int64_t x330 = -359185786356887LL;
	static int16_t x331 = INT16_MIN;
	uint32_t x332 = 279307U;
	static volatile int32_t t39 = -232954;

	t39 = (x329>>(x330<(x331*x332)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x345 = UINT16_MAX;
	int8_t x346 = INT8_MIN;
	static uint8_t x347 = 54U;
	int16_t x348 = INT16_MIN;
	int32_t t40 = -2;

	t40 = (x345>>(x346<(x347*x348)));

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x366 = INT64_MIN;
	static int32_t x367 = -1;
	int8_t x368 = INT8_MIN;
	static volatile int32_t t41 = 80178937;

	t41 = (x365>>(x366<(x367*x368)));

	if (t41 != 32767) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x381 = 25LL;
	uint64_t x382 = 17134470367457LLU;
	int16_t x383 = 547;
	int64_t x384 = -1LL;

	t42 = (x381>>(x382<(x383*x384)));

	if (t42 != 12LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x385 = 1066U;
	uint16_t x387 = 24959U;
	uint64_t x388 = UINT64_MAX;
	volatile uint32_t t43 = 278U;

	t43 = (x385>>(x386<(x387*x388)));

	if (t43 != 1066U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x390 = 2341424147LLU;
	uint32_t x391 = 290468469U;
	volatile int8_t x392 = 5;
	static volatile uint64_t t44 = 178584255277LLU;

	t44 = (x389>>(x390<(x391*x392)));

	if (t44 != 816373LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x411 = 8670;

	t45 = (x409>>(x410<(x411*x412)));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x413 = 0U;
	volatile uint32_t x414 = 29921U;
	volatile int8_t x416 = INT8_MIN;

	t46 = (x413>>(x414<(x415*x416)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x429 = 18U;
	uint64_t x430 = 14LLU;
	int64_t x431 = -1LL;
	int8_t x432 = INT8_MIN;
	int32_t t47 = -5;

	t47 = (x429>>(x430<(x431*x432)));

	if (t47 != 9) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x434 = 13U;
	uint16_t x435 = UINT16_MAX;
	static volatile int64_t x436 = -86244608889LL;

	t48 = (x433>>(x434<(x435*x436)));

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x437 = 0;
	static int64_t x438 = INT64_MIN;
	uint8_t x440 = 1U;
	int32_t t49 = 24976482;

	t49 = (x437>>(x438<(x439*x440)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x462 = INT16_MIN;
	static uint16_t x463 = 31U;
	static int8_t x464 = INT8_MIN;
	volatile int32_t t50 = 3208;

	t50 = (x461>>(x462<(x463*x464)));

	if (t50 != 3) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x473 = UINT8_MAX;
	volatile int64_t x474 = INT64_MIN;
	int8_t x475 = INT8_MAX;
	uint16_t x476 = 2988U;
	int32_t t51 = -102460;

	t51 = (x473>>(x474<(x475*x476)));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x477 = INT16_MAX;
	volatile uint8_t x478 = 17U;
	static uint8_t x479 = 102U;
	int16_t x480 = -1;
	volatile int32_t t52 = -11967983;

	t52 = (x477>>(x478<(x479*x480)));

	if (t52 != 32767) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x481 = INT64_MAX;
	static int8_t x482 = 1;
	int16_t x483 = -1;
	int64_t t53 = 1428427697775531LL;

	t53 = (x481>>(x482<(x483*x484)));

	if (t53 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x486 = 41742667862699LLU;
	static uint8_t x487 = 35U;
	static uint64_t x488 = 3290602LLU;
	volatile int32_t t54 = -232716254;

	t54 = (x485>>(x486<(x487*x488)));

	if (t54 != 9) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x517 = 61U;
	int64_t x518 = -231971445748620484LL;
	int16_t x519 = INT16_MIN;
	uint8_t x520 = UINT8_MAX;

	t55 = (x517>>(x518<(x519*x520)));

	if (t55 != 30) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x521 = INT32_MAX;
	uint64_t x522 = UINT64_MAX;
	uint16_t x523 = 1886U;
	int64_t x524 = -1LL;
	int32_t t56 = INT32_MAX;

	t56 = (x521>>(x522<(x523*x524)));

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x529 = INT8_MAX;
	int64_t x530 = -1LL;
	volatile int64_t x531 = INT64_MAX;
	int16_t x532 = -1;
	static volatile int32_t t57 = -87423504;

	t57 = (x529>>(x530<(x531*x532)));

	if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x533 = 428893696326LL;
	int32_t x534 = INT32_MIN;
	uint8_t x535 = 2U;
	int16_t x536 = -1;
	volatile int64_t t58 = 1848307893883003LL;

	t58 = (x533>>(x534<(x535*x536)));

	if (t58 != 214446848163LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x545 = 12965U;
	static int32_t x546 = -1;
	volatile uint32_t x547 = 22251771U;
	int16_t x548 = -1;

	t59 = (x545>>(x546<(x547*x548)));

	if (t59 != 12965) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x549 = 367552152U;
	static int64_t x550 = INT64_MIN;
	uint32_t x551 = 25329U;
	static int32_t x552 = INT32_MAX;
	uint32_t t60 = 9151787U;

	t60 = (x549>>(x550<(x551*x552)));

	if (t60 != 183776076U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x553 = UINT8_MAX;
	uint32_t x554 = UINT32_MAX;
	int8_t x555 = 1;
	int16_t x556 = INT16_MAX;
	volatile int32_t t61 = -86;

	t61 = (x553>>(x554<(x555*x556)));

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x561 = INT64_MAX;
	int8_t x562 = INT8_MIN;
	int64_t t62 = INT64_MAX;

	t62 = (x561>>(x562<(x563*x564)));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x565 = UINT8_MAX;
	static int8_t x566 = -53;
	uint8_t x567 = 92U;
	int16_t x568 = -1;

	t63 = (x565>>(x566<(x567*x568)));

	if (t63 != 255) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x574 = 0;
	static int64_t x575 = 2167538087555757523LL;
	static uint64_t x576 = 83495281LLU;
	static volatile int32_t t64 = 1002269122;

	t64 = (x573>>(x574<(x575*x576)));

	if (t64 != 63) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x577 = UINT64_MAX;
	uint64_t t65 = UINT64_MAX;

	t65 = (x577>>(x578<(x579*x580)));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x581 = 2;
	int8_t x582 = -1;
	uint8_t x583 = UINT8_MAX;
	volatile int32_t t66 = 5249918;

	t66 = (x581>>(x582<(x583*x584)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x589 = 0;
	int64_t x590 = -1LL;
	volatile int16_t x591 = -906;
	static volatile int32_t t67 = -56;

	t67 = (x589>>(x590<(x591*x592)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x602 = INT8_MIN;
	int64_t t68 = 1230571603LL;

	t68 = (x601>>(x602<(x603*x604)));

	if (t68 != 281645647422134207LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x605 = 4461953LL;
	int8_t x606 = -1;
	static uint8_t x607 = 72U;
	uint16_t x608 = 2008U;

	t69 = (x605>>(x606<(x607*x608)));

	if (t69 != 2230976LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x621 = 35313LL;
	volatile int32_t x622 = 43619;
	uint32_t x623 = 313214400U;
	volatile int64_t x624 = -2646035LL;
	int64_t t70 = -60931729180968393LL;

	t70 = (x621>>(x622<(x623*x624)));

	if (t70 != 35313LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x625 = 401U;
	volatile int64_t x626 = INT64_MIN;
	static int32_t x627 = -1;
	int8_t x628 = INT8_MAX;

	t71 = (x625>>(x626<(x627*x628)));

	if (t71 != 200U) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x629 = INT32_MAX;
	volatile uint8_t x630 = UINT8_MAX;
	volatile uint16_t x631 = 2U;
	int32_t t72 = 47353;

	t72 = (x629>>(x630<(x631*x632)));

	if (t72 != 1073741823) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x634 = -1;
	uint8_t x635 = 12U;
	static int16_t x636 = -1;
	int32_t t73 = 926;

	t73 = (x633>>(x634<(x635*x636)));

	if (t73 != 28) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x653 = 0U;
	int16_t x654 = -1;
	uint8_t x655 = UINT8_MAX;
	uint8_t x656 = 7U;
	int32_t t74 = -64014;

	t74 = (x653>>(x654<(x655*x656)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x662 = 7U;
	int8_t x663 = 4;
	uint64_t x664 = 4029877449686769445LLU;

	t75 = (x661>>(x662<(x663*x664)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x665 = INT8_MAX;
	int16_t x666 = 1458;
	static int32_t t76 = -8;

	t76 = (x665>>(x666<(x667*x668)));

	if (t76 != 63) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x677 = UINT32_MAX;
	int32_t x678 = INT32_MIN;
	static int16_t x679 = INT16_MAX;
	uint16_t x680 = UINT16_MAX;
	uint32_t t77 = 18U;

	t77 = (x677>>(x678<(x679*x680)));

	if (t77 != 2147483647U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x681 = 1U;
	uint64_t x682 = 65381226033864LLU;
	int16_t x684 = INT16_MAX;
	static int32_t t78 = 43;

	t78 = (x681>>(x682<(x683*x684)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x685 = UINT64_MAX;
	static volatile uint16_t x687 = 3U;
	int64_t x688 = -1LL;
	uint64_t t79 = UINT64_MAX;

	t79 = (x685>>(x686<(x687*x688)));

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x709 = 196396161;
	static int32_t x710 = INT32_MAX;
	int16_t x712 = 9;
	int32_t t80 = 2242372;

	t80 = (x709>>(x710<(x711*x712)));

	if (t80 != 196396161) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint16_t x721 = UINT16_MAX;
	int8_t x722 = INT8_MIN;
	volatile uint16_t x723 = 18U;
	int16_t x724 = -1;
	static volatile int32_t t81 = 6356;

	t81 = (x721>>(x722<(x723*x724)));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x729 = 486U;
	uint8_t x730 = 9U;
	int64_t x731 = INT64_MIN;
	volatile uint64_t x732 = 119504934136447824LLU;
	volatile uint32_t t82 = 84190U;

	t82 = (x729>>(x730<(x731*x732)));

	if (t82 != 486U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x733 = 7835012U;
	int8_t x734 = INT8_MIN;
	int8_t x735 = INT8_MAX;
	volatile uint16_t x736 = 8021U;

	t83 = (x733>>(x734<(x735*x736)));

	if (t83 != 3917506U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x737 = 6U;
	int32_t x738 = -1;
	static uint64_t x740 = UINT64_MAX;
	int32_t t84 = -1;

	t84 = (x737>>(x738<(x739*x740)));

	if (t84 != 6) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x753 = 1U;
	static uint16_t x754 = 55U;
	uint8_t x755 = 85U;
	static int8_t x756 = 25;
	int32_t t85 = 115253087;

	t85 = (x753>>(x754<(x755*x756)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x761 = 1622721564LLU;
	int32_t x762 = INT32_MAX;
	uint32_t x763 = 4030U;
	volatile uint64_t t86 = 203415414126LLU;

	t86 = (x761>>(x762<(x763*x764)));

	if (t86 != 811360782LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x797 = 1505;

	t87 = (x797>>(x798<(x799*x800)));

	if (t87 != 752) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x801 = UINT8_MAX;
	uint64_t x802 = UINT64_MAX;
	uint64_t x803 = 508LLU;
	int16_t x804 = -9764;
	static volatile int32_t t88 = -1935;

	t88 = (x801>>(x802<(x803*x804)));

	if (t88 != 255) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x829 = INT8_MAX;
	static uint32_t x831 = 23880U;
	int64_t x832 = -1LL;
	static volatile int32_t t89 = -11176;

	t89 = (x829>>(x830<(x831*x832)));

	if (t89 != 127) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x853 = INT32_MAX;
	int32_t x854 = INT32_MIN;
	int64_t x855 = 2LL;
	volatile int32_t x856 = 5728;
	volatile int32_t t90 = -10863540;

	t90 = (x853>>(x854<(x855*x856)));

	if (t90 != 1073741823) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x869 = 990014145U;
	int32_t x871 = -31850;
	int8_t x872 = -1;

	t91 = (x869>>(x870<(x871*x872)));

	if (t91 != 990014145U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x873 = 15U;
	uint64_t x874 = 2028LLU;
	volatile int32_t t92 = -107736;

	t92 = (x873>>(x874<(x875*x876)));

	if (t92 != 7) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x889 = INT8_MAX;
	int8_t x890 = INT8_MIN;
	volatile uint64_t x891 = 7LLU;
	int16_t x892 = -7969;
	int32_t t93 = 59;

	t93 = (x889>>(x890<(x891*x892)));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x893 = INT8_MAX;
	volatile int8_t x894 = INT8_MIN;
	static int64_t x895 = -1LL;
	int16_t x896 = INT16_MAX;
	volatile int32_t t94 = -34;

	t94 = (x893>>(x894<(x895*x896)));

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x897 = UINT8_MAX;
	static volatile int8_t x898 = 3;
	int64_t x899 = 2481256021282502125LL;
	int32_t t95 = -14834;

	t95 = (x897>>(x898<(x899*x900)));

	if (t95 != 255) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x921 = 8U;
	int16_t x922 = -1107;
	int32_t x923 = INT32_MIN;

	t96 = (x921>>(x922<(x923*x924)));

	if (t96 != 4) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x933 = 4LL;
	int32_t x934 = -1;
	int64_t x936 = 1LL;
	volatile int64_t t97 = -1LL;

	t97 = (x933>>(x934<(x935*x936)));

	if (t97 != 2LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x941 = INT8_MAX;
	int16_t x942 = -1;
	volatile uint64_t x943 = UINT64_MAX;
	static int64_t x944 = -1LL;

	t98 = (x941>>(x942<(x943*x944)));

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x949 = 9429U;
	int16_t x950 = INT16_MIN;
	uint16_t x951 = 3474U;
	int8_t x952 = -1;
	uint32_t t99 = 0U;

	t99 = (x949>>(x950<(x951*x952)));

	if (t99 != 4714U) { NG(); } else { ; }
	
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

