#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x26 = INT16_MIN;
uint8_t x49 = 0U;
static volatile int32_t t2 = -94;
static int64_t x72 = -460LL;
int32_t x101 = INT32_MIN;
int64_t x127 = 1LL;
int16_t x135 = INT16_MIN;
volatile uint8_t x146 = 0U;
int16_t x149 = -10608;
static volatile uint8_t x179 = 14U;
int16_t x184 = INT16_MAX;
int16_t x192 = -1;
int32_t t18 = 268133;
volatile int32_t t19 = 987552;
int32_t x218 = -1;
int8_t x220 = 57;
int32_t x228 = INT32_MIN;
uint32_t x231 = UINT32_MAX;
volatile int8_t x256 = INT8_MIN;
volatile int64_t x259 = -483791368LL;
volatile uint32_t t28 = 3250U;
uint16_t x271 = 63U;
int64_t t29 = 260040470623135780LL;
int8_t x286 = INT8_MIN;
int64_t x288 = 735493343677795875LL;
volatile int32_t x306 = INT32_MIN;
uint64_t x313 = 9024549662LLU;
volatile int64_t x332 = -6LL;
int32_t t34 = 1586;
int8_t x338 = 14;
static uint32_t x340 = 59642U;
static uint16_t x345 = UINT16_MAX;
static int64_t x347 = INT64_MAX;
int32_t x348 = -1;
uint32_t x361 = UINT32_MAX;
int16_t x365 = INT16_MAX;
static int64_t x379 = -1LL;
uint16_t x407 = UINT16_MAX;
uint16_t x411 = 19617U;
int32_t x412 = -1;
int8_t x413 = INT8_MIN;
volatile int16_t x421 = 0;
int16_t x422 = -1;
uint8_t x423 = 1U;
static int64_t x425 = INT64_MIN;
static int16_t x458 = INT16_MIN;
volatile int32_t x468 = INT32_MAX;
int32_t t54 = -1493346;
uint8_t x469 = UINT8_MAX;
uint64_t x471 = UINT64_MAX;
static int32_t t55 = 1;
static int64_t x488 = INT64_MAX;
volatile uint64_t x497 = 73LLU;
static int64_t x513 = -1LL;
int64_t t59 = 127067LL;
int8_t x518 = 15;
int64_t x535 = INT64_MAX;
int32_t x551 = INT32_MIN;
uint8_t x575 = 33U;
volatile int8_t x577 = INT8_MIN;
int16_t x587 = INT16_MIN;
int16_t x601 = INT16_MAX;
volatile uint64_t x603 = 42805LLU;
volatile int64_t x604 = -1LL;
int16_t x626 = INT16_MIN;
int32_t x668 = 1236;
int8_t x678 = INT8_MIN;
int32_t t78 = -38684061;
int8_t x686 = INT8_MIN;
int16_t x694 = INT16_MAX;
static volatile uint32_t x695 = UINT32_MAX;
volatile uint8_t x700 = UINT8_MAX;
static volatile int32_t x717 = INT32_MAX;
int8_t x719 = 1;
int64_t x728 = INT64_MIN;
int8_t x733 = INT8_MIN;
volatile int64_t x738 = INT64_MIN;
static int16_t x740 = 0;
uint32_t x743 = 22560580U;
uint16_t x748 = UINT16_MAX;
int32_t x753 = -68857458;
volatile int32_t t90 = 22;
int32_t t93 = -1353;
static volatile int32_t x796 = 1990;
volatile int32_t t94 = 822553;
static uint16_t x804 = UINT16_MAX;
int8_t x810 = -1;
int32_t x837 = INT32_MIN;
int32_t x838 = 6048;


void f0(void) {
	static int64_t x25 = INT64_MIN;
	int16_t x27 = 3;
	int8_t x28 = INT8_MIN;
	int64_t t0 = 0LL;

	t0 = (x25%((x26-x27)<=x28));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x50 = INT32_MAX;
	uint32_t x51 = 3U;
	volatile int16_t x52 = INT16_MIN;
	volatile int32_t t1 = -2;

	t1 = (x49%((x50-x51)<=x52));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x57 = INT8_MIN;
	int8_t x58 = -1;
	volatile uint16_t x59 = 14314U;
	int64_t x60 = 0LL;

	t2 = (x57%((x58-x59)<=x60));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x65 = -993775LL;
	static int8_t x66 = INT8_MIN;
	static int16_t x67 = -1;
	static uint8_t x68 = UINT8_MAX;
	int64_t t3 = 4282652920LL;

	t3 = (x65%((x66-x67)<=x68));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x69 = -1LL;
	volatile uint32_t x70 = 13843U;
	volatile uint64_t x71 = 4303833675861LLU;
	int64_t t4 = -274870865392LL;

	t4 = (x69%((x70-x71)<=x72));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x102 = INT8_MIN;
	static uint8_t x103 = 2U;
	int8_t x104 = INT8_MIN;
	int32_t t5 = -57;

	t5 = (x101%((x102-x103)<=x104));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x109 = INT8_MIN;
	volatile int64_t x110 = -1LL;
	static volatile int8_t x111 = INT8_MIN;
	uint32_t x112 = 373U;
	int32_t t6 = -29489604;

	t6 = (x109%((x110-x111)<=x112));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x117 = -1;
	int32_t x118 = -1;
	uint32_t x119 = 8962894U;
	int16_t x120 = INT16_MIN;
	int32_t t7 = -4;

	t7 = (x117%((x118-x119)<=x120));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x121 = 22;
	uint16_t x122 = 66U;
	uint32_t x123 = 962769U;
	uint64_t x124 = 195709710816LLU;
	int32_t t8 = -40537627;

	t8 = (x121%((x122-x123)<=x124));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x125 = INT32_MAX;
	int16_t x126 = INT16_MIN;
	volatile int32_t x128 = -309;
	int32_t t9 = -250418864;

	t9 = (x125%((x126-x127)<=x128));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x133 = 638307;
	int64_t x134 = INT64_MIN;
	volatile uint8_t x136 = 55U;
	int32_t t10 = -12184490;

	t10 = (x133%((x134-x135)<=x136));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x137 = 0;
	static int64_t x138 = -1LL;
	int8_t x139 = INT8_MAX;
	uint32_t x140 = UINT32_MAX;
	int32_t t11 = -185115;

	t11 = (x137%((x138-x139)<=x140));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x141 = 159U;
	int64_t x142 = -10291748500930421LL;
	int32_t x143 = INT32_MIN;
	int32_t x144 = -1;
	volatile int32_t t12 = -275420361;

	t12 = (x141%((x142-x143)<=x144));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x145 = 160169U;
	int8_t x147 = INT8_MAX;
	int8_t x148 = 5;
	volatile uint32_t t13 = 6U;

	t13 = (x145%((x146-x147)<=x148));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x150 = 55460336944LL;
	int16_t x151 = INT16_MIN;
	uint64_t x152 = UINT64_MAX;
	volatile int32_t t14 = -945;

	t14 = (x149%((x150-x151)<=x152));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x157 = -135;
	volatile int8_t x158 = -1;
	int32_t x159 = -24595;
	int32_t x160 = INT32_MAX;
	volatile int32_t t15 = 0;

	t15 = (x157%((x158-x159)<=x160));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x177 = 146735U;
	volatile uint64_t x178 = 121598388445119420LLU;
	int64_t x180 = INT64_MIN;
	uint32_t t16 = 3U;

	t16 = (x177%((x178-x179)<=x180));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x181 = -53;
	volatile uint8_t x182 = UINT8_MAX;
	uint8_t x183 = UINT8_MAX;
	static int32_t t17 = -3202;

	t17 = (x181%((x182-x183)<=x184));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x189 = 1U;
	uint64_t x190 = UINT64_MAX;
	volatile int16_t x191 = -1;

	t18 = (x189%((x190-x191)<=x192));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x193 = -1;
	volatile uint64_t x194 = UINT64_MAX;
	uint8_t x195 = 1U;
	uint64_t x196 = UINT64_MAX;

	t19 = (x193%((x194-x195)<=x196));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x201 = INT16_MAX;
	uint16_t x202 = 23684U;
	int8_t x203 = 13;
	uint64_t x204 = 11075710569689338LLU;
	int32_t t20 = 1;

	t20 = (x201%((x202-x203)<=x204));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x209 = 1036632U;
	int32_t x210 = INT32_MAX;
	static uint32_t x211 = UINT32_MAX;
	int16_t x212 = -1;
	uint32_t t21 = 236980796U;

	t21 = (x209%((x210-x211)<=x212));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x217 = 1879016543U;
	volatile int64_t x219 = INT64_MAX;
	static uint32_t t22 = 30894864U;

	t22 = (x217%((x218-x219)<=x220));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x225 = UINT8_MAX;
	int64_t x226 = INT64_MAX;
	static uint64_t x227 = 1010513LLU;
	int32_t t23 = -3661081;

	t23 = (x225%((x226-x227)<=x228));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint32_t x229 = UINT32_MAX;
	uint32_t x230 = 44021909U;
	static int8_t x232 = INT8_MIN;
	volatile uint32_t t24 = 3300150U;

	t24 = (x229%((x230-x231)<=x232));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x237 = INT64_MIN;
	int8_t x238 = INT8_MIN;
	int16_t x239 = 107;
	int16_t x240 = 8;
	volatile int64_t t25 = -1011772220LL;

	t25 = (x237%((x238-x239)<=x240));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x249 = INT64_MAX;
	volatile uint32_t x250 = UINT32_MAX;
	int32_t x251 = INT32_MIN;
	volatile uint32_t x252 = UINT32_MAX;
	static int64_t t26 = -161LL;

	t26 = (x249%((x250-x251)<=x252));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x253 = -5636649;
	volatile int16_t x254 = INT16_MIN;
	uint64_t x255 = 49131288LLU;
	static int32_t t27 = 51578;

	t27 = (x253%((x254-x255)<=x256));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x257 = 1005530969U;
	static int8_t x258 = -1;
	volatile uint64_t x260 = 129661516631LLU;

	t28 = (x257%((x258-x259)<=x260));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x269 = INT64_MIN;
	static uint8_t x270 = 0U;
	int8_t x272 = -1;

	t29 = (x269%((x270-x271)<=x272));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x285 = -240;
	uint8_t x287 = 1U;
	int32_t t30 = -1896;

	t30 = (x285%((x286-x287)<=x288));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x293 = -1;
	static volatile int16_t x294 = INT16_MIN;
	static int8_t x295 = -23;
	static int16_t x296 = -1491;
	int32_t t31 = -438;

	t31 = (x293%((x294-x295)<=x296));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x305 = 515522940442597227LL;
	int8_t x307 = INT8_MIN;
	int32_t x308 = INT32_MAX;
	int64_t t32 = -13905LL;

	t32 = (x305%((x306-x307)<=x308));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x314 = 35;
	int8_t x315 = 0;
	static volatile int8_t x316 = INT8_MAX;
	uint64_t t33 = 1088647085465504207LLU;

	t33 = (x313%((x314-x315)<=x316));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x329 = INT8_MIN;
	uint64_t x330 = UINT64_MAX;
	uint8_t x331 = UINT8_MAX;

	t34 = (x329%((x330-x331)<=x332));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x333 = -74LL;
	volatile int64_t x334 = INT64_MIN;
	static int32_t x335 = -1;
	int16_t x336 = INT16_MIN;
	volatile int64_t t35 = -129448011129LL;

	t35 = (x333%((x334-x335)<=x336));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x337 = INT32_MIN;
	uint64_t x339 = UINT64_MAX;
	volatile int32_t t36 = 29;

	t36 = (x337%((x338-x339)<=x340));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x346 = UINT64_MAX;
	int32_t t37 = -521856;

	t37 = (x345%((x346-x347)<=x348));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x353 = 48722745980629LL;
	volatile uint32_t x354 = UINT32_MAX;
	int64_t x355 = 1565680902587906067LL;
	int8_t x356 = INT8_MAX;
	int64_t t38 = -907871199231190019LL;

	t38 = (x353%((x354-x355)<=x356));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x357 = INT32_MIN;
	int8_t x358 = INT8_MIN;
	int8_t x359 = INT8_MAX;
	int8_t x360 = -1;
	int32_t t39 = 1;

	t39 = (x357%((x358-x359)<=x360));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x362 = INT8_MIN;
	static int8_t x363 = INT8_MIN;
	static uint8_t x364 = UINT8_MAX;
	volatile uint32_t t40 = 770U;

	t40 = (x361%((x362-x363)<=x364));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x366 = -1;
	static int64_t x367 = 5LL;
	uint8_t x368 = 8U;
	volatile int32_t t41 = -95;

	t41 = (x365%((x366-x367)<=x368));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x377 = UINT8_MAX;
	volatile int16_t x378 = -1747;
	int8_t x380 = 3;
	volatile int32_t t42 = 540680;

	t42 = (x377%((x378-x379)<=x380));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x393 = UINT16_MAX;
	uint8_t x394 = 5U;
	static uint8_t x395 = 75U;
	uint64_t x396 = UINT64_MAX;
	static volatile int32_t t43 = 9;

	t43 = (x393%((x394-x395)<=x396));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x397 = 0U;
	volatile int16_t x398 = -1;
	int16_t x399 = -1;
	static uint16_t x400 = UINT16_MAX;
	static int32_t t44 = -3803;

	t44 = (x397%((x398-x399)<=x400));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x405 = UINT16_MAX;
	volatile int64_t x406 = -1LL;
	int16_t x408 = INT16_MIN;
	volatile int32_t t45 = -828473;

	t45 = (x405%((x406-x407)<=x408));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x409 = -3;
	uint64_t x410 = 120242133945875LLU;
	volatile int32_t t46 = 387;

	t46 = (x409%((x410-x411)<=x412));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x414 = INT16_MIN;
	static int16_t x415 = INT16_MAX;
	int8_t x416 = INT8_MIN;
	int32_t t47 = 712948;

	t47 = (x413%((x414-x415)<=x416));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x417 = UINT32_MAX;
	uint32_t x418 = UINT32_MAX;
	uint64_t x419 = 3909003267729792LLU;
	int32_t x420 = -1;
	volatile uint32_t t48 = 24371U;

	t48 = (x417%((x418-x419)<=x420));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x424 = -1LL;
	int32_t t49 = -1;

	t49 = (x421%((x422-x423)<=x424));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x426 = INT64_MIN;
	int16_t x427 = -1;
	volatile int8_t x428 = -1;
	int64_t t50 = -358015719516102LL;

	t50 = (x425%((x426-x427)<=x428));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x441 = UINT32_MAX;
	static int16_t x442 = -1;
	uint32_t x443 = UINT32_MAX;
	int8_t x444 = INT8_MAX;
	static volatile uint32_t t51 = 2U;

	t51 = (x441%((x442-x443)<=x444));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x449 = INT16_MIN;
	static int16_t x450 = 0;
	uint8_t x451 = 47U;
	static volatile int8_t x452 = 63;
	volatile int32_t t52 = -42199359;

	t52 = (x449%((x450-x451)<=x452));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x457 = INT8_MIN;
	volatile int8_t x459 = INT8_MAX;
	int8_t x460 = 30;
	int32_t t53 = 1;

	t53 = (x457%((x458-x459)<=x460));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x465 = -1;
	uint32_t x466 = 1160896U;
	int64_t x467 = 404007800772617LL;

	t54 = (x465%((x466-x467)<=x468));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x470 = UINT64_MAX;
	int32_t x472 = INT32_MIN;

	t55 = (x469%((x470-x471)<=x472));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x481 = INT32_MAX;
	static uint16_t x482 = 2269U;
	static uint32_t x483 = 160U;
	static int64_t x484 = 687361LL;
	int32_t t56 = 3;

	t56 = (x481%((x482-x483)<=x484));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x485 = -1;
	int32_t x486 = -1;
	static volatile uint8_t x487 = 5U;
	int32_t t57 = 0;

	t57 = (x485%((x486-x487)<=x488));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x498 = -2577;
	static int64_t x499 = -7383LL;
	static uint16_t x500 = UINT16_MAX;
	volatile uint64_t t58 = 50640342059LLU;

	t58 = (x497%((x498-x499)<=x500));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x514 = 58;
	uint64_t x515 = UINT64_MAX;
	volatile int16_t x516 = INT16_MIN;

	t59 = (x513%((x514-x515)<=x516));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x517 = -1;
	static volatile int64_t x519 = 6999559926LL;
	int16_t x520 = INT16_MAX;
	int32_t t60 = -986673;

	t60 = (x517%((x518-x519)<=x520));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x533 = 733358652U;
	int32_t x534 = INT32_MAX;
	static int8_t x536 = INT8_MIN;
	volatile uint32_t t61 = 13898600U;

	t61 = (x533%((x534-x535)<=x536));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x549 = INT16_MIN;
	int32_t x550 = INT32_MIN;
	uint64_t x552 = 5827374898444LLU;
	int32_t t62 = 26;

	t62 = (x549%((x550-x551)<=x552));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x573 = 211;
	uint8_t x574 = UINT8_MAX;
	volatile uint32_t x576 = UINT32_MAX;
	volatile int32_t t63 = -3902;

	t63 = (x573%((x574-x575)<=x576));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x578 = 3U;
	int16_t x579 = 9878;
	int64_t x580 = 1LL;
	static int32_t t64 = 31170090;

	t64 = (x577%((x578-x579)<=x580));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x581 = UINT64_MAX;
	int64_t x582 = INT64_MIN;
	volatile uint64_t x583 = 1760356LLU;
	static volatile int16_t x584 = -3;
	volatile uint64_t t65 = 160LLU;

	t65 = (x581%((x582-x583)<=x584));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x585 = 21;
	int64_t x586 = INT64_MIN;
	int32_t x588 = INT32_MIN;
	volatile int32_t t66 = 0;

	t66 = (x585%((x586-x587)<=x588));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x597 = -1;
	int16_t x598 = -29;
	uint64_t x599 = 28673LLU;
	uint64_t x600 = UINT64_MAX;
	int32_t t67 = -981;

	t67 = (x597%((x598-x599)<=x600));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x602 = INT32_MIN;
	int32_t t68 = 20238;

	t68 = (x601%((x602-x603)<=x604));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x617 = -20712013LL;
	volatile uint64_t x618 = UINT64_MAX;
	int8_t x619 = -61;
	volatile int64_t x620 = -1273LL;
	int64_t t69 = -2656696168368762314LL;

	t69 = (x617%((x618-x619)<=x620));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x625 = 22511U;
	volatile uint8_t x627 = 76U;
	uint16_t x628 = 45U;
	volatile int32_t t70 = -154832;

	t70 = (x625%((x626-x627)<=x628));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x629 = 0U;
	uint16_t x630 = 47U;
	volatile uint8_t x631 = UINT8_MAX;
	static int64_t x632 = 949129LL;
	static int32_t t71 = 22316;

	t71 = (x629%((x630-x631)<=x632));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x641 = INT32_MAX;
	int8_t x642 = INT8_MIN;
	uint8_t x643 = 61U;
	volatile int64_t x644 = -1LL;
	static int32_t t72 = 153;

	t72 = (x641%((x642-x643)<=x644));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x649 = -1;
	int8_t x650 = INT8_MAX;
	uint16_t x651 = 1U;
	uint16_t x652 = 5763U;
	static volatile int32_t t73 = 110470605;

	t73 = (x649%((x650-x651)<=x652));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x653 = 9993676154LLU;
	static uint64_t x654 = 131945003LLU;
	uint32_t x655 = UINT32_MAX;
	int8_t x656 = -1;
	uint64_t t74 = 8088250116LLU;

	t74 = (x653%((x654-x655)<=x656));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x661 = INT64_MIN;
	static volatile int8_t x662 = -1;
	static int8_t x663 = -30;
	uint8_t x664 = UINT8_MAX;
	volatile int64_t t75 = 58564438978153947LL;

	t75 = (x661%((x662-x663)<=x664));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x665 = 1;
	int8_t x666 = 5;
	static int64_t x667 = 185629627LL;
	volatile int32_t t76 = -218;

	t76 = (x665%((x666-x667)<=x668));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x669 = UINT8_MAX;
	int64_t x670 = INT64_MIN;
	volatile int16_t x671 = INT16_MIN;
	int32_t x672 = INT32_MIN;
	int32_t t77 = -30799;

	t77 = (x669%((x670-x671)<=x672));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x677 = INT32_MIN;
	int8_t x679 = -1;
	int32_t x680 = 3419659;

	t78 = (x677%((x678-x679)<=x680));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x685 = INT8_MIN;
	uint8_t x687 = UINT8_MAX;
	uint16_t x688 = 5002U;
	int32_t t79 = 3;

	t79 = (x685%((x686-x687)<=x688));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x693 = 37LLU;
	int64_t x696 = 16580277056LL;
	volatile uint64_t t80 = 60LLU;

	t80 = (x693%((x694-x695)<=x696));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x697 = 230;
	static uint32_t x698 = UINT32_MAX;
	volatile int8_t x699 = INT8_MIN;
	int32_t t81 = 179000398;

	t81 = (x697%((x698-x699)<=x700));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x701 = 9104106320215596176LLU;
	int32_t x702 = -48;
	uint8_t x703 = 1U;
	uint16_t x704 = 15289U;
	volatile uint64_t t82 = 10385382404173LLU;

	t82 = (x701%((x702-x703)<=x704));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x709 = INT64_MAX;
	uint8_t x710 = UINT8_MAX;
	volatile uint16_t x711 = 2215U;
	int8_t x712 = -4;
	int64_t t83 = 1LL;

	t83 = (x709%((x710-x711)<=x712));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x718 = INT8_MAX;
	int16_t x720 = 1778;
	int32_t t84 = 41;

	t84 = (x717%((x718-x719)<=x720));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x725 = UINT16_MAX;
	uint64_t x726 = UINT64_MAX;
	int16_t x727 = INT16_MIN;
	int32_t t85 = 19570832;

	t85 = (x725%((x726-x727)<=x728));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x734 = UINT16_MAX;
	int32_t x735 = INT32_MAX;
	static volatile int16_t x736 = -1;
	volatile int32_t t86 = -4719221;

	t86 = (x733%((x734-x735)<=x736));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x737 = 10U;
	volatile int8_t x739 = -1;
	volatile int32_t t87 = -8429666;

	t87 = (x737%((x738-x739)<=x740));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x741 = 8046LLU;
	static uint16_t x742 = 3120U;
	int16_t x744 = INT16_MIN;
	static uint64_t t88 = 899038LLU;

	t88 = (x741%((x742-x743)<=x744));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x745 = 11U;
	uint16_t x746 = 53U;
	int32_t x747 = -1;
	uint32_t t89 = 260U;

	t89 = (x745%((x746-x747)<=x748));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x754 = 47;
	int64_t x755 = INT64_MAX;
	int16_t x756 = 2037;

	t90 = (x753%((x754-x755)<=x756));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x757 = -743;
	uint8_t x758 = 1U;
	static volatile int32_t x759 = 439;
	static int32_t x760 = INT32_MAX;
	static volatile int32_t t91 = -4;

	t91 = (x757%((x758-x759)<=x760));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x773 = -29914260747434LL;
	int64_t x774 = -444395LL;
	uint16_t x775 = 6U;
	int8_t x776 = 0;
	int64_t t92 = -6740829200687LL;

	t92 = (x773%((x774-x775)<=x776));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x789 = -1;
	volatile int32_t x790 = INT32_MIN;
	static volatile int64_t x791 = 8917LL;
	int16_t x792 = 4836;

	t93 = (x789%((x790-x791)<=x792));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x793 = -1;
	volatile uint16_t x794 = 1759U;
	int16_t x795 = -1;

	t94 = (x793%((x794-x795)<=x796));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x797 = INT32_MIN;
	static uint64_t x798 = 132237445346357658LLU;
	uint64_t x799 = 5664LLU;
	int8_t x800 = -1;
	volatile int32_t t95 = 300165341;

	t95 = (x797%((x798-x799)<=x800));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x801 = UINT64_MAX;
	int8_t x802 = INT8_MAX;
	static volatile int8_t x803 = INT8_MIN;
	volatile uint64_t t96 = 69915177342LLU;

	t96 = (x801%((x802-x803)<=x804));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x809 = UINT32_MAX;
	int16_t x811 = -3;
	uint16_t x812 = UINT16_MAX;
	static volatile uint32_t t97 = 8371644U;

	t97 = (x809%((x810-x811)<=x812));

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x833 = 16405465615956LLU;
	static volatile uint64_t x834 = UINT64_MAX;
	static int32_t x835 = INT32_MIN;
	static int32_t x836 = INT32_MIN;
	uint64_t t98 = 44943224171266LLU;

	t98 = (x833%((x834-x835)<=x836));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x839 = -1;
	uint32_t x840 = UINT32_MAX;
	int32_t t99 = -3669806;

	t99 = (x837%((x838-x839)<=x840));

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

