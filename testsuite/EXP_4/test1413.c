#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = 154;
static int64_t x3 = -56640570688LL;
int32_t x5 = INT32_MIN;
volatile int16_t x6 = 205;
static int8_t x7 = 5;
volatile int32_t t2 = -3199342;
int16_t x54 = INT16_MAX;
volatile int32_t t5 = -110;
static volatile uint32_t x99 = 0U;
uint32_t x122 = 7767982U;
int64_t x123 = INT64_MIN;
int64_t x134 = INT64_MAX;
static uint32_t x136 = UINT32_MAX;
volatile int32_t t16 = -2098;
int32_t x168 = INT32_MIN;
int64_t x174 = 1894802LL;
int32_t t19 = 1978354;
volatile int32_t t20 = 2715;
int32_t x228 = INT32_MAX;
int64_t x230 = INT64_MAX;
int8_t x245 = INT8_MIN;
volatile uint16_t x248 = UINT16_MAX;
volatile int8_t x251 = INT8_MIN;
volatile uint64_t x254 = 314LLU;
int16_t x256 = -1;
int32_t t25 = -4;
volatile int8_t x278 = INT8_MAX;
uint32_t x280 = 2441U;
volatile uint64_t x283 = 1171554866LLU;
int64_t x293 = INT64_MIN;
int32_t x294 = INT32_MIN;
volatile int32_t t34 = 46549;
volatile uint64_t x313 = 282962689LLU;
volatile int32_t t35 = 6;
static int64_t x321 = -31672514880875LL;
int32_t t37 = 22;
uint64_t x337 = 243318LLU;
int64_t x338 = INT64_MIN;
int32_t x358 = INT32_MIN;
volatile int64_t x360 = INT64_MAX;
uint16_t x368 = 13459U;
static int32_t t43 = 481;
volatile int32_t x374 = 5332;
int32_t t46 = 1576213;
int16_t x387 = 1;
static volatile int32_t t47 = -14;
int32_t x393 = 2079;
int32_t x395 = INT32_MIN;
int16_t x403 = INT16_MIN;
volatile int32_t t49 = 9196685;
volatile int16_t x415 = INT16_MIN;
int64_t x425 = 947143LL;
int8_t x436 = -1;
static int64_t x445 = INT64_MIN;
uint32_t x446 = 1037U;
int64_t x448 = -1LL;
volatile int32_t t56 = 601;
int32_t x478 = -5329;
int32_t x485 = INT32_MAX;
uint64_t x486 = 144688175588LLU;
uint64_t x492 = 631507806135LLU;
volatile int32_t t61 = 1963249;
uint8_t x505 = 26U;
uint8_t x508 = 2U;
uint32_t x509 = 6817420U;
int16_t x511 = INT16_MIN;
int32_t x523 = INT32_MIN;
static int16_t x530 = -1;
uint64_t x531 = 902917246873318544LLU;
int64_t x542 = INT64_MAX;
volatile int8_t x543 = INT8_MIN;
static int8_t x555 = -1;
int8_t x560 = -3;
int32_t t68 = 4844095;
int32_t x563 = INT32_MIN;
static int64_t x569 = -1LL;
static int32_t t71 = 102198;
uint64_t x574 = 20675LLU;
uint8_t x575 = UINT8_MAX;
uint16_t x582 = UINT16_MAX;
int16_t x589 = -8;
uint32_t x591 = 479365U;
uint32_t x597 = UINT32_MAX;
uint16_t x599 = 0U;
int16_t x624 = -1;
volatile int64_t x634 = -2586020942077873712LL;
int8_t x658 = 4;
int64_t x675 = -1LL;
int32_t x678 = 418657658;
int16_t x680 = 1001;
volatile int8_t x685 = INT8_MAX;
uint16_t x720 = 266U;
static int32_t t89 = -851858;
uint16_t x721 = 2U;
volatile int64_t x723 = INT64_MIN;
volatile int16_t x724 = INT16_MAX;
static int16_t x738 = -930;
int8_t x745 = INT8_MAX;
int16_t x788 = 3;
uint8_t x819 = 3U;
int8_t x820 = INT8_MAX;
int32_t t99 = 566;


void f0(void) {
	int32_t x2 = -1;
	static int8_t x4 = INT8_MIN;
	int32_t t0 = -226864931;

	t0 = (x1<(x2%(x3<x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x8 = UINT64_MAX;
	int32_t t1 = -883255596;

	t1 = (x5<(x6%(x7<x8)));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x25 = -1LL;
	uint32_t x26 = 135U;
	static int32_t x27 = INT32_MIN;
	uint16_t x28 = 0U;

	t2 = (x25<(x26%(x27<x28)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x29 = INT64_MAX;
	uint32_t x30 = UINT32_MAX;
	int16_t x31 = -5618;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t3 = -1022442248;

	t3 = (x29<(x30%(x31<x32)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x53 = 1523;
	static uint8_t x55 = 7U;
	static uint32_t x56 = 40142U;
	volatile int32_t t4 = -262962808;

	t4 = (x53<(x54%(x55<x56)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x57 = INT8_MAX;
	int32_t x58 = INT32_MIN;
	int8_t x59 = -1;
	static uint8_t x60 = 49U;

	t5 = (x57<(x58%(x59<x60)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x65 = UINT64_MAX;
	uint32_t x66 = 4U;
	int64_t x67 = -1LL;
	static uint32_t x68 = UINT32_MAX;
	volatile int32_t t6 = 2969;

	t6 = (x65<(x66%(x67<x68)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x81 = -25;
	int64_t x82 = 392982LL;
	static int64_t x83 = -8825567LL;
	static volatile uint32_t x84 = UINT32_MAX;
	static int32_t t7 = 1;

	t7 = (x81<(x82%(x83<x84)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x85 = -1;
	int32_t x86 = 27473437;
	volatile int8_t x87 = INT8_MIN;
	static int8_t x88 = 1;
	volatile int32_t t8 = 0;

	t8 = (x85<(x86%(x87<x88)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x97 = 1U;
	static int32_t x98 = INT32_MAX;
	int32_t x100 = -1;
	int32_t t9 = -4198;

	t9 = (x97<(x98%(x99<x100)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x105 = UINT8_MAX;
	volatile int64_t x106 = -1LL;
	static int8_t x107 = -1;
	uint16_t x108 = 9680U;
	volatile int32_t t10 = -73325;

	t10 = (x105<(x106%(x107<x108)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x117 = UINT32_MAX;
	volatile int64_t x118 = INT64_MIN;
	int16_t x119 = -1;
	uint8_t x120 = UINT8_MAX;
	int32_t t11 = -933638;

	t11 = (x117<(x118%(x119<x120)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x121 = 2304763U;
	uint32_t x124 = 6131U;
	int32_t t12 = -1;

	t12 = (x121<(x122%(x123<x124)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint64_t x133 = 18557495212321LLU;
	volatile int16_t x135 = INT16_MAX;
	volatile int32_t t13 = -11780;

	t13 = (x133<(x134%(x135<x136)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x141 = INT16_MIN;
	uint32_t x142 = 132U;
	uint8_t x143 = 108U;
	uint64_t x144 = 7411LLU;
	int32_t t14 = -106;

	t14 = (x141<(x142%(x143<x144)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x145 = 13U;
	static int64_t x146 = INT64_MIN;
	int8_t x147 = 2;
	static int8_t x148 = INT8_MAX;
	int32_t t15 = -222;

	t15 = (x145<(x146%(x147<x148)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x153 = INT32_MAX;
	int32_t x154 = INT32_MAX;
	uint16_t x155 = 4U;
	volatile int16_t x156 = 1263;

	t16 = (x153<(x154%(x155<x156)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x161 = 1314987220U;
	int64_t x162 = 130691481640367LL;
	uint8_t x163 = 1U;
	uint8_t x164 = 2U;
	static int32_t t17 = -3;

	t17 = (x161<(x162%(x163<x164)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x165 = 23221U;
	int16_t x166 = INT16_MIN;
	int64_t x167 = INT64_MIN;
	volatile int32_t t18 = -1;

	t18 = (x165<(x166%(x167<x168)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x173 = 3724LLU;
	volatile int16_t x175 = -357;
	int8_t x176 = -14;

	t19 = (x173<(x174%(x175<x176)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x177 = INT16_MIN;
	int64_t x178 = 29LL;
	int8_t x179 = INT8_MIN;
	static volatile int16_t x180 = -1;

	t20 = (x177<(x178%(x179<x180)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x225 = 11;
	int8_t x226 = INT8_MIN;
	uint16_t x227 = UINT16_MAX;
	int32_t t21 = 24580115;

	t21 = (x225<(x226%(x227<x228)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x229 = UINT8_MAX;
	static int64_t x231 = INT64_MIN;
	int8_t x232 = INT8_MAX;
	volatile int32_t t22 = 6602;

	t22 = (x229<(x230%(x231<x232)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x246 = INT32_MIN;
	int16_t x247 = 1676;
	int32_t t23 = -2021181;

	t23 = (x245<(x246%(x247<x248)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x249 = INT32_MIN;
	static uint8_t x250 = 4U;
	static uint8_t x252 = 80U;
	volatile int32_t t24 = -2553;

	t24 = (x249<(x250%(x251<x252)));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x253 = 29;
	static int8_t x255 = INT8_MIN;

	t25 = (x253<(x254%(x255<x256)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x265 = 171505553051LL;
	int16_t x266 = INT16_MIN;
	volatile int64_t x267 = 118072LL;
	static uint64_t x268 = 490144694431441LLU;
	volatile int32_t t26 = -5;

	t26 = (x265<(x266%(x267<x268)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x273 = UINT32_MAX;
	static int32_t x274 = -1;
	int16_t x275 = INT16_MIN;
	volatile int8_t x276 = 12;
	int32_t t27 = -2210766;

	t27 = (x273<(x274%(x275<x276)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x277 = 733075785U;
	uint16_t x279 = 2U;
	volatile int32_t t28 = -96;

	t28 = (x277<(x278%(x279<x280)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x281 = INT8_MAX;
	int16_t x282 = -1;
	static int8_t x284 = INT8_MIN;
	volatile int32_t t29 = 0;

	t29 = (x281<(x282%(x283<x284)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x285 = -1LL;
	int16_t x286 = -289;
	volatile int64_t x287 = INT64_MIN;
	static uint8_t x288 = 3U;
	int32_t t30 = 1;

	t30 = (x285<(x286%(x287<x288)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x289 = -1LL;
	volatile int32_t x290 = INT32_MIN;
	int16_t x291 = INT16_MIN;
	int8_t x292 = INT8_MIN;
	static int32_t t31 = 78;

	t31 = (x289<(x290%(x291<x292)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x295 = INT16_MIN;
	uint64_t x296 = UINT64_MAX;
	int32_t t32 = -85476423;

	t32 = (x293<(x294%(x295<x296)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x301 = -1;
	int32_t x302 = -1;
	int32_t x303 = 1;
	static int8_t x304 = INT8_MAX;
	int32_t t33 = 2297;

	t33 = (x301<(x302%(x303<x304)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x305 = INT8_MIN;
	static int16_t x306 = INT16_MAX;
	int32_t x307 = -1;
	volatile int32_t x308 = INT32_MAX;

	t34 = (x305<(x306%(x307<x308)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x314 = 27U;
	uint16_t x315 = 7333U;
	uint64_t x316 = UINT64_MAX;

	t35 = (x313<(x314%(x315<x316)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x322 = 12U;
	int64_t x323 = -1LL;
	int16_t x324 = INT16_MAX;
	static int32_t t36 = 1;

	t36 = (x321<(x322%(x323<x324)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x329 = UINT16_MAX;
	static volatile uint64_t x330 = UINT64_MAX;
	static int32_t x331 = INT32_MIN;
	int16_t x332 = -1;

	t37 = (x329<(x330%(x331<x332)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x333 = UINT64_MAX;
	volatile int64_t x334 = 0LL;
	int32_t x335 = -1;
	volatile int16_t x336 = INT16_MAX;
	static volatile int32_t t38 = -4;

	t38 = (x333<(x334%(x335<x336)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x339 = INT16_MIN;
	int32_t x340 = INT32_MAX;
	int32_t t39 = 951393;

	t39 = (x337<(x338%(x339<x340)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x353 = UINT32_MAX;
	static volatile int8_t x354 = INT8_MIN;
	static int8_t x355 = INT8_MIN;
	int64_t x356 = -1LL;
	volatile int32_t t40 = -763738129;

	t40 = (x353<(x354%(x355<x356)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint64_t x357 = 304020LLU;
	volatile int64_t x359 = 11340873131655LL;
	static int32_t t41 = -637;

	t41 = (x357<(x358%(x359<x360)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x361 = 106U;
	uint32_t x362 = 1862474U;
	volatile int64_t x363 = INT64_MAX;
	volatile uint64_t x364 = UINT64_MAX;
	volatile int32_t t42 = -52628013;

	t42 = (x361<(x362%(x363<x364)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x365 = 545;
	uint16_t x366 = 3U;
	uint16_t x367 = 17U;

	t43 = (x365<(x366%(x367<x368)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x373 = INT16_MIN;
	int16_t x375 = -185;
	uint16_t x376 = UINT16_MAX;
	int32_t t44 = -54;

	t44 = (x373<(x374%(x375<x376)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x377 = INT64_MIN;
	int16_t x378 = -1;
	uint64_t x379 = 2LLU;
	static int32_t x380 = -1381051;
	int32_t t45 = 7;

	t45 = (x377<(x378%(x379<x380)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x381 = INT64_MIN;
	uint16_t x382 = UINT16_MAX;
	int8_t x383 = 23;
	volatile uint32_t x384 = 250123248U;

	t46 = (x381<(x382%(x383<x384)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x385 = 1008;
	volatile uint64_t x386 = 13LLU;
	uint16_t x388 = 7U;

	t47 = (x385<(x386%(x387<x388)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x394 = -9;
	int16_t x396 = 1;
	volatile int32_t t48 = 1864;

	t48 = (x393<(x394%(x395<x396)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x401 = 45U;
	uint32_t x402 = 3U;
	int32_t x404 = INT32_MAX;

	t49 = (x401<(x402%(x403<x404)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x409 = INT8_MAX;
	int32_t x410 = 3220;
	uint32_t x411 = 16222U;
	static volatile int32_t x412 = -1;
	int32_t t50 = -704;

	t50 = (x409<(x410%(x411<x412)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x413 = UINT8_MAX;
	volatile int8_t x414 = 48;
	int32_t x416 = INT32_MAX;
	volatile int32_t t51 = -26;

	t51 = (x413<(x414%(x415<x416)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x421 = 119223741U;
	volatile int16_t x422 = INT16_MAX;
	int64_t x423 = -472LL;
	uint32_t x424 = 3196903U;
	volatile int32_t t52 = 51286851;

	t52 = (x421<(x422%(x423<x424)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x426 = 13552LLU;
	int32_t x427 = -900;
	uint16_t x428 = 2687U;
	int32_t t53 = -21579;

	t53 = (x425<(x426%(x427<x428)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x433 = -1;
	int8_t x434 = -9;
	uint32_t x435 = 65351372U;
	volatile int32_t t54 = -11074;

	t54 = (x433<(x434%(x435<x436)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x437 = INT32_MAX;
	int16_t x438 = INT16_MIN;
	int16_t x439 = -2543;
	volatile int8_t x440 = INT8_MAX;
	volatile int32_t t55 = -225226;

	t55 = (x437<(x438%(x439<x440)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x447 = INT8_MIN;

	t56 = (x445<(x446%(x447<x448)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x453 = INT32_MAX;
	int8_t x454 = -1;
	int32_t x455 = INT32_MIN;
	int32_t x456 = INT32_MAX;
	int32_t t57 = 667760382;

	t57 = (x453<(x454%(x455<x456)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x461 = INT8_MIN;
	uint8_t x462 = UINT8_MAX;
	int8_t x463 = INT8_MIN;
	volatile int8_t x464 = INT8_MAX;
	int32_t t58 = 12;

	t58 = (x461<(x462%(x463<x464)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x477 = 75U;
	volatile uint32_t x479 = 19089U;
	int16_t x480 = INT16_MIN;
	volatile int32_t t59 = 386197;

	t59 = (x477<(x478%(x479<x480)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x487 = 2U;
	volatile int8_t x488 = INT8_MAX;
	volatile int32_t t60 = 5433;

	t60 = (x485<(x486%(x487<x488)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x489 = 5U;
	uint16_t x490 = 3U;
	volatile uint32_t x491 = UINT32_MAX;

	t61 = (x489<(x490%(x491<x492)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x506 = 5;
	int32_t x507 = 1;
	volatile int32_t t62 = 29179;

	t62 = (x505<(x506%(x507<x508)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x510 = INT64_MIN;
	int64_t x512 = -123LL;
	volatile int32_t t63 = 253059346;

	t63 = (x509<(x510%(x511<x512)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x521 = 19897176093LL;
	uint64_t x522 = 2140LLU;
	int16_t x524 = -1;
	int32_t t64 = 1058;

	t64 = (x521<(x522%(x523<x524)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x529 = UINT8_MAX;
	int32_t x532 = -204055843;
	int32_t t65 = 840357;

	t65 = (x529<(x530%(x531<x532)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x541 = 23703947648LLU;
	int8_t x544 = -1;
	int32_t t66 = 2047;

	t66 = (x541<(x542%(x543<x544)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x553 = INT8_MAX;
	int64_t x554 = -1LL;
	volatile uint16_t x556 = UINT16_MAX;
	static volatile int32_t t67 = -25949;

	t67 = (x553<(x554%(x555<x556)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x557 = -62295;
	uint32_t x558 = UINT32_MAX;
	int8_t x559 = -41;

	t68 = (x557<(x558%(x559<x560)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x561 = 1195U;
	uint64_t x562 = 163011887LLU;
	int16_t x564 = INT16_MIN;
	volatile int32_t t69 = -13;

	t69 = (x561<(x562%(x563<x564)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x565 = 69U;
	static volatile int16_t x566 = INT16_MAX;
	static int64_t x567 = -1LL;
	volatile int8_t x568 = INT8_MAX;
	volatile int32_t t70 = -74;

	t70 = (x565<(x566%(x567<x568)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x570 = UINT64_MAX;
	int16_t x571 = INT16_MAX;
	volatile uint32_t x572 = 692446U;

	t71 = (x569<(x570%(x571<x572)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x573 = UINT64_MAX;
	int16_t x576 = 377;
	int32_t t72 = 8422;

	t72 = (x573<(x574%(x575<x576)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x581 = 25U;
	int32_t x583 = 1;
	volatile int32_t x584 = 249444146;
	static volatile int32_t t73 = 11847482;

	t73 = (x581<(x582%(x583<x584)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x590 = -29;
	volatile int64_t x592 = INT64_MAX;
	volatile int32_t t74 = 69871;

	t74 = (x589<(x590%(x591<x592)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x598 = 0;
	int64_t x600 = 28736313713LL;
	int32_t t75 = 0;

	t75 = (x597<(x598%(x599<x600)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x605 = -25;
	volatile uint8_t x606 = 22U;
	uint16_t x607 = 13265U;
	volatile uint32_t x608 = 1780142U;
	int32_t t76 = 0;

	t76 = (x605<(x606%(x607<x608)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x613 = UINT16_MAX;
	int8_t x614 = INT8_MIN;
	uint64_t x615 = 30979577187LLU;
	int16_t x616 = INT16_MIN;
	volatile int32_t t77 = 1508;

	t77 = (x613<(x614%(x615<x616)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x621 = 711U;
	int32_t x622 = 91554675;
	int16_t x623 = INT16_MIN;
	int32_t t78 = 191;

	t78 = (x621<(x622%(x623<x624)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x625 = 4U;
	int16_t x626 = -12653;
	uint32_t x627 = 119U;
	volatile uint64_t x628 = 4242126357LLU;
	volatile int32_t t79 = 97045;

	t79 = (x625<(x626%(x627<x628)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x633 = INT64_MIN;
	static int16_t x635 = INT16_MIN;
	int8_t x636 = INT8_MAX;
	volatile int32_t t80 = -106;

	t80 = (x633<(x634%(x635<x636)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x657 = 21U;
	uint16_t x659 = 23690U;
	int64_t x660 = 19312907067077LL;
	static volatile int32_t t81 = 1277721;

	t81 = (x657<(x658%(x659<x660)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x669 = UINT64_MAX;
	int64_t x670 = -6242LL;
	int16_t x671 = INT16_MIN;
	int16_t x672 = 1;
	int32_t t82 = 268764;

	t82 = (x669<(x670%(x671<x672)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x673 = 34U;
	static int64_t x674 = INT64_MAX;
	uint16_t x676 = 15U;
	int32_t t83 = 155806;

	t83 = (x673<(x674%(x675<x676)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x677 = 29;
	int64_t x679 = -1LL;
	volatile int32_t t84 = 1;

	t84 = (x677<(x678%(x679<x680)));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x681 = 46185827970LLU;
	uint32_t x682 = 10195U;
	uint8_t x683 = 92U;
	static uint64_t x684 = 19494024847573LLU;
	int32_t t85 = 36596;

	t85 = (x681<(x682%(x683<x684)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x686 = 2LL;
	int16_t x687 = -1;
	static int8_t x688 = 0;
	volatile int32_t t86 = -8075;

	t86 = (x685<(x686%(x687<x688)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x705 = 21U;
	int16_t x706 = INT16_MIN;
	int32_t x707 = INT32_MIN;
	static int8_t x708 = -1;
	int32_t t87 = 11133;

	t87 = (x705<(x706%(x707<x708)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x709 = -1;
	int32_t x710 = -235631910;
	uint64_t x711 = 137LLU;
	static volatile int16_t x712 = -14475;
	volatile int32_t t88 = -20233824;

	t88 = (x709<(x710%(x711<x712)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x717 = UINT16_MAX;
	uint16_t x718 = 349U;
	static int16_t x719 = INT16_MIN;

	t89 = (x717<(x718%(x719<x720)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x722 = INT16_MIN;
	volatile int32_t t90 = 39946;

	t90 = (x721<(x722%(x723<x724)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x737 = -1LL;
	volatile int8_t x739 = -1;
	static int32_t x740 = 5807214;
	volatile int32_t t91 = 23000234;

	t91 = (x737<(x738%(x739<x740)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x741 = -1;
	int64_t x742 = INT64_MIN;
	static volatile int16_t x743 = -198;
	int8_t x744 = -1;
	int32_t t92 = 0;

	t92 = (x741<(x742%(x743<x744)));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x746 = 9054049608281292LLU;
	int32_t x747 = -747234;
	static int8_t x748 = -1;
	static volatile int32_t t93 = -1;

	t93 = (x745<(x746%(x747<x748)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x749 = INT8_MIN;
	int8_t x750 = -3;
	int64_t x751 = INT64_MIN;
	volatile int16_t x752 = 6558;
	static int32_t t94 = 7989749;

	t94 = (x749<(x750%(x751<x752)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x785 = 0;
	int64_t x786 = INT64_MIN;
	int16_t x787 = INT16_MIN;
	int32_t t95 = 360637034;

	t95 = (x785<(x786%(x787<x788)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x797 = 1;
	volatile int16_t x798 = INT16_MAX;
	uint64_t x799 = 1166LLU;
	int32_t x800 = INT32_MIN;
	int32_t t96 = -211;

	t96 = (x797<(x798%(x799<x800)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x817 = 2U;
	static uint32_t x818 = 11052U;
	static volatile int32_t t97 = 220804;

	t97 = (x817<(x818%(x819<x820)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x833 = UINT64_MAX;
	int32_t x834 = 303471;
	static int64_t x835 = INT64_MIN;
	uint16_t x836 = 28U;
	static volatile int32_t t98 = 14;

	t98 = (x833<(x834%(x835<x836)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x837 = INT8_MIN;
	int16_t x838 = INT16_MIN;
	int8_t x839 = INT8_MIN;
	int64_t x840 = -1LL;

	t99 = (x837<(x838%(x839<x840)));

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

