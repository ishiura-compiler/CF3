#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x14 = INT8_MIN;
volatile uint32_t t2 = 4842U;
static volatile uint16_t x53 = 11894U;
int64_t x55 = -943345598243LL;
uint8_t x59 = 29U;
static uint64_t x150 = 1758875143LLU;
int16_t x152 = INT16_MIN;
int16_t x183 = INT16_MAX;
static int32_t t11 = 5;
volatile int32_t t12 = 3390;
static int16_t x196 = -1;
volatile int16_t x223 = -10;
uint32_t x224 = 997U;
volatile uint32_t t15 = 3U;
uint64_t t17 = 0LLU;
volatile uint64_t x285 = UINT64_MAX;
int16_t x287 = INT16_MIN;
volatile uint8_t x288 = 6U;
int64_t x297 = INT64_MIN;
int8_t x301 = -1;
volatile int16_t x313 = -746;
int16_t x316 = -1;
volatile int32_t x361 = 4832;
volatile int32_t x362 = INT32_MIN;
volatile int64_t x390 = 235671LL;
static uint64_t t30 = 16963593654087631LLU;
volatile int32_t t31 = -25466;
static volatile int16_t x402 = INT16_MAX;
uint64_t t32 = 212146514381809236LLU;
int16_t x420 = -1;
uint8_t x424 = UINT8_MAX;
int8_t x435 = -1;
uint64_t t37 = 133977LLU;
int64_t x450 = INT64_MIN;
volatile int32_t x487 = INT32_MIN;
volatile int64_t x488 = -332LL;
static int16_t x490 = 18;
static int8_t x495 = INT8_MIN;
uint16_t x496 = 34U;
uint8_t x506 = 22U;
static int16_t x517 = -1;
volatile uint16_t x518 = 7954U;
volatile int64_t t48 = 378846198742134328LL;
int16_t x526 = -1;
int32_t t51 = 0;
int16_t x573 = INT16_MIN;
static volatile int16_t x575 = 125;
volatile int64_t x576 = -1LL;
volatile int64_t t55 = -654187LL;
volatile uint8_t x581 = UINT8_MAX;
volatile int64_t x590 = -1LL;
volatile uint64_t x591 = UINT64_MAX;
uint8_t x592 = 29U;
volatile int32_t x605 = INT32_MIN;
volatile int32_t t58 = 67309;
uint32_t x610 = UINT32_MAX;
static int8_t x611 = -3;
static volatile int32_t t62 = 2115;
int32_t x670 = 3330686;
uint8_t x706 = UINT8_MAX;
volatile uint16_t x716 = 1273U;
uint16_t x734 = UINT16_MAX;
volatile uint8_t x735 = UINT8_MAX;
volatile int64_t t67 = -1LL;
static volatile uint64_t t71 = 1580LLU;
int64_t x763 = INT64_MIN;
int32_t x769 = INT32_MIN;
int8_t x772 = INT8_MIN;
int8_t x776 = INT8_MAX;
uint8_t x801 = 3U;
int64_t x803 = -120435577729674844LL;
int64_t x804 = 9471863310LL;
int16_t x851 = -644;
volatile int64_t t78 = 78LL;
static int32_t x857 = INT32_MIN;
int64_t x859 = INT64_MIN;
int16_t x861 = -1;
volatile uint32_t x871 = 2064054U;
uint32_t x877 = UINT32_MAX;
int8_t x880 = INT8_MAX;
volatile uint64_t t85 = 9118914163344628LLU;
uint16_t x909 = 1U;
uint64_t x926 = UINT64_MAX;
int16_t x928 = -1;
uint64_t t88 = 30706881522827108LLU;
static int64_t x930 = INT64_MAX;
int16_t x931 = -1;
int8_t x945 = 10;
static int64_t x1002 = 372279828108241LL;
static volatile int64_t t94 = 31565467990883LL;
static uint64_t x1034 = 323012LLU;
int16_t x1053 = INT16_MIN;
static uint32_t x1055 = UINT32_MAX;
static int16_t x1056 = INT16_MIN;
static volatile uint32_t t98 = 88852938U;
int64_t x1065 = INT64_MIN;
int8_t x1066 = -15;
int16_t x1067 = INT16_MIN;
int64_t t99 = -16520019224LL;


void f0(void) {
	int32_t x1 = 4820398;
	int16_t x2 = INT16_MIN;
	int32_t x3 = 5991791;
	int64_t x4 = -1LL;
	int64_t t0 = -24LL;

	t0 = (x1%(x2*(x3/x4)));

	if (t0 != 4820398LL) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x13 = INT32_MIN;
	static int16_t x15 = INT16_MAX;
	int16_t x16 = -11674;
	volatile int32_t t1 = -6;

	t1 = (x13%(x14*(x15/x16)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x21 = INT32_MIN;
	int16_t x22 = INT16_MIN;
	uint32_t x23 = 59153U;
	int16_t x24 = INT16_MAX;

	t2 = (x21%(x22*(x23/x24)));

	if (t2 != 2147483648U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x37 = -90;
	volatile int8_t x38 = -10;
	int16_t x39 = -160;
	volatile int8_t x40 = -1;
	volatile int32_t t3 = 110;

	t3 = (x37%(x38*(x39/x40)));

	if (t3 != -90) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x54 = -19;
	int8_t x56 = 29;
	int64_t t4 = 137251540LL;

	t4 = (x53%(x54*(x55/x56)));

	if (t4 != 11894LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x57 = INT32_MIN;
	int16_t x58 = INT16_MIN;
	int8_t x60 = -1;
	int32_t t5 = -7;

	t5 = (x57%(x58*(x59/x60)));

	if (t5 != -819200) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x65 = INT32_MAX;
	int8_t x66 = -6;
	int32_t x67 = 340943;
	int32_t x68 = 310;
	int32_t t6 = -97;

	t6 = (x65%(x66*(x67/x68)));

	if (t6 != 2479) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x89 = -85847020;
	static uint16_t x90 = 211U;
	volatile int64_t x91 = INT64_MIN;
	int32_t x92 = INT32_MIN;
	int64_t t7 = -202664LL;

	t7 = (x89%(x90*(x91/x92)));

	if (t7 != -85847020LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x125 = UINT8_MAX;
	int16_t x126 = INT16_MAX;
	uint32_t x127 = UINT32_MAX;
	volatile uint16_t x128 = UINT16_MAX;
	volatile uint32_t t8 = 50862U;

	t8 = (x125%(x126*(x127/x128)));

	if (t8 != 255U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x149 = 644005U;
	int64_t x151 = INT64_MIN;
	volatile uint64_t t9 = 11796LLU;

	t9 = (x149%(x150*(x151/x152)));

	if (t9 != 644005LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x173 = 3345;
	int32_t x174 = 27674033;
	uint8_t x175 = 99U;
	uint32_t x176 = 6U;
	uint32_t t10 = 0U;

	t10 = (x173%(x174*(x175/x176)));

	if (t10 != 3345U) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x181 = UINT16_MAX;
	uint8_t x182 = 13U;
	uint16_t x184 = 17U;

	t11 = (x181%(x182*(x183/x184)));

	if (t11 != 15433) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x189 = 112U;
	static int8_t x190 = INT8_MIN;
	int8_t x191 = INT8_MAX;
	static int32_t x192 = -1;

	t12 = (x189%(x190*(x191/x192)));

	if (t12 != 112) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x193 = -1;
	int8_t x194 = -43;
	uint32_t x195 = UINT32_MAX;
	static volatile uint32_t t13 = 32233801U;

	t13 = (x193%(x194*(x195/x196)));

	if (t13 != 42U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x221 = UINT32_MAX;
	int8_t x222 = INT8_MIN;
	uint32_t t14 = 42952U;

	t14 = (x221%(x222*(x223/x224)));

	if (t14 != 551409919U) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x237 = 114263358U;
	volatile int16_t x238 = -1;
	int16_t x239 = INT16_MAX;
	int8_t x240 = 1;

	t15 = (x237%(x238*(x239/x240)));

	if (t15 != 114263358U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x241 = UINT8_MAX;
	uint16_t x242 = 1679U;
	volatile int64_t x243 = -3661683557LL;
	static uint16_t x244 = 16250U;
	volatile int64_t t16 = -225LL;

	t16 = (x241%(x242*(x243/x244)));

	if (t16 != 255LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x249 = INT16_MAX;
	uint64_t x250 = UINT64_MAX;
	uint64_t x251 = UINT64_MAX;
	uint64_t x252 = 3320656164019LLU;

	t17 = (x249%(x250*(x251/x252)));

	if (t17 != 32767LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x277 = INT64_MAX;
	volatile uint8_t x278 = UINT8_MAX;
	int16_t x279 = INT16_MIN;
	uint64_t x280 = 64072187220269LLU;
	volatile uint64_t t18 = 1112LLU;

	t18 = (x277%(x278*(x279/x280)));

	if (t18 != 18266032LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x286 = UINT16_MAX;
	volatile uint64_t t19 = 415156LLU;

	t19 = (x285%(x286*(x287/x288)));

	if (t19 != 357886634LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x298 = -1;
	static volatile int32_t x299 = -11;
	static volatile uint16_t x300 = 3U;
	volatile int64_t t20 = -474LL;

	t20 = (x297%(x298*(x299/x300)));

	if (t20 != -2LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x302 = -3165;
	int16_t x303 = INT16_MIN;
	volatile int32_t x304 = -1;
	int32_t t21 = -556753858;

	t21 = (x301%(x302*(x303/x304)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x314 = -1;
	static int64_t x315 = INT64_MAX;
	int64_t t22 = -14166402LL;

	t22 = (x313%(x314*(x315/x316)));

	if (t22 != -746LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x321 = INT64_MIN;
	uint64_t x322 = 27873585307863225LLU;
	uint32_t x323 = UINT32_MAX;
	static volatile int16_t x324 = INT16_MAX;
	uint64_t t23 = 30887364573857LLU;

	t23 = (x321%(x322*(x323/x324)));

	if (t23 != 401442284943894752LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x325 = -16;
	volatile uint32_t x326 = UINT32_MAX;
	volatile int32_t x327 = INT32_MIN;
	int32_t x328 = INT32_MAX;
	uint32_t t24 = 47U;

	t24 = (x325%(x326*(x327/x328)));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x337 = 5;
	volatile uint64_t x338 = 56626157226411429LLU;
	static volatile int16_t x339 = INT16_MIN;
	static int64_t x340 = -1LL;
	volatile uint64_t t25 = 546553541184181LLU;

	t25 = (x337%(x338*(x339/x340)));

	if (t25 != 5LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x353 = INT32_MAX;
	volatile int32_t x354 = 45588;
	static int64_t x355 = -534LL;
	int32_t x356 = -8;
	int64_t t26 = -9397949LL;

	t26 = (x353%(x354*(x355/x356)));

	if (t26 != 2203543LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x363 = 38;
	uint32_t x364 = 7U;
	volatile uint32_t t27 = 1851419U;

	t27 = (x361%(x362*(x363/x364)));

	if (t27 != 4832U) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x377 = -58;
	int32_t x378 = INT32_MIN;
	volatile uint16_t x379 = UINT16_MAX;
	int64_t x380 = -1LL;
	static volatile int64_t t28 = 39690LL;

	t28 = (x377%(x378*(x379/x380)));

	if (t28 != -58LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x381 = 15U;
	static volatile int8_t x382 = INT8_MAX;
	volatile int32_t x383 = INT32_MIN;
	uint8_t x384 = UINT8_MAX;
	static int32_t t29 = -417756;

	t29 = (x381%(x382*(x383/x384)));

	if (t29 != 15) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x389 = 1875U;
	int32_t x391 = INT32_MIN;
	volatile uint64_t x392 = 11279LLU;

	t30 = (x389%(x390*(x391/x392)));

	if (t30 != 1875LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x393 = 47990020;
	int16_t x394 = 1;
	static int32_t x395 = INT32_MAX;
	int8_t x396 = INT8_MIN;

	t31 = (x393%(x394*(x395/x396)));

	if (t31 != 14435590) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x401 = -37247621;
	uint64_t x403 = UINT64_MAX;
	int64_t x404 = INT64_MIN;

	t32 = (x401%(x402*(x403/x404)));

	if (t32 != 8474LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x417 = INT8_MIN;
	volatile int64_t x418 = -1LL;
	static int64_t x419 = -1LL;
	volatile int64_t t33 = 21829185287692LL;

	t33 = (x417%(x418*(x419/x420)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x421 = 7982722386375363LLU;
	uint8_t x422 = 5U;
	uint16_t x423 = 435U;
	static volatile uint64_t t34 = 8954246355026LLU;

	t34 = (x421%(x422*(x423/x424)));

	if (t34 != 3LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x429 = -15611488960LL;
	uint64_t x430 = 487794420446LLU;
	uint16_t x431 = UINT16_MAX;
	int8_t x432 = 1;
	volatile uint64_t t35 = 27037LLU;

	t35 = (x429%(x430*(x431/x432)));

	if (t35 != 1434620651254686LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x433 = INT32_MIN;
	static volatile uint64_t x434 = UINT64_MAX;
	int16_t x436 = -1;
	uint64_t t36 = 2LLU;

	t36 = (x433%(x434*(x435/x436)));

	if (t36 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x437 = UINT64_MAX;
	uint64_t x438 = 225LLU;
	int16_t x439 = INT16_MIN;
	int32_t x440 = 7980;

	t37 = (x437%(x438*(x439/x440)));

	if (t37 != 899LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x449 = -384340LL;
	static uint64_t x451 = UINT64_MAX;
	volatile int16_t x452 = INT16_MIN;
	volatile uint64_t t38 = 1453344844507691LLU;

	t38 = (x449%(x450*(x451/x452)));

	if (t38 != 9223372036854391468LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x453 = -1LL;
	int32_t x454 = INT32_MAX;
	volatile uint64_t x455 = UINT64_MAX;
	volatile int64_t x456 = -1LL;
	uint64_t t39 = 131604193227595LLU;

	t39 = (x453%(x454*(x455/x456)));

	if (t39 != 3LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x461 = 968050911573448LLU;
	uint32_t x462 = UINT32_MAX;
	volatile int32_t x463 = -64195;
	volatile uint8_t x464 = UINT8_MAX;
	volatile uint64_t t40 = 1713953244101LLU;

	t40 = (x461%(x462*(x463/x464)));

	if (t40 != 65LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x465 = 2;
	int16_t x466 = 157;
	int16_t x467 = -99;
	uint32_t x468 = 904U;
	volatile uint32_t t41 = 442U;

	t41 = (x465%(x466*(x467/x468)));

	if (t41 != 2U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x469 = -28578436LL;
	int8_t x470 = INT8_MIN;
	volatile uint32_t x471 = UINT32_MAX;
	static int16_t x472 = -7997;
	int64_t t42 = 1922060677600341929LL;

	t42 = (x469%(x470*(x471/x472)));

	if (t42 != -28578436LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x473 = 7375LL;
	int16_t x474 = INT16_MAX;
	static volatile int16_t x475 = INT16_MAX;
	int16_t x476 = -1;
	volatile int64_t t43 = -530LL;

	t43 = (x473%(x474*(x475/x476)));

	if (t43 != 7375LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x485 = 7U;
	int32_t x486 = -2;
	volatile int64_t t44 = -2542577385LL;

	t44 = (x485%(x486*(x487/x488)));

	if (t44 != 7LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x489 = -1;
	uint8_t x491 = UINT8_MAX;
	static int64_t x492 = 24LL;
	int64_t t45 = -47412579228640692LL;

	t45 = (x489%(x490*(x491/x492)));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x493 = 21;
	int64_t x494 = -703075LL;
	int64_t t46 = 97181369LL;

	t46 = (x493%(x494*(x495/x496)));

	if (t46 != 21LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x505 = 2U;
	static uint16_t x507 = UINT16_MAX;
	int8_t x508 = INT8_MIN;
	int32_t t47 = -15638207;

	t47 = (x505%(x506*(x507/x508)));

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x519 = INT64_MIN;
	int64_t x520 = -530397447218LL;

	t48 = (x517%(x518*(x519/x520)));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x525 = 950U;
	int8_t x527 = -1;
	uint64_t x528 = UINT64_MAX;
	uint64_t t49 = 6854048LLU;

	t49 = (x525%(x526*(x527/x528)));

	if (t49 != 950LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x537 = INT64_MIN;
	uint16_t x538 = 49U;
	static int64_t x539 = 3199986899674LL;
	uint8_t x540 = 2U;
	int64_t t50 = 33867266642759LL;

	t50 = (x537%(x538*(x539/x540)));

	if (t50 != -41795957156423LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x541 = 5U;
	int16_t x542 = -6;
	int32_t x543 = INT32_MIN;
	uint8_t x544 = UINT8_MAX;

	t51 = (x541%(x542*(x543/x544)));

	if (t51 != 5) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x545 = INT32_MAX;
	int64_t x546 = -7978903337LL;
	uint64_t x547 = UINT64_MAX;
	uint8_t x548 = 3U;
	static uint64_t t52 = 247547861941413155LLU;

	t52 = (x545%(x546*(x547/x548)));

	if (t52 != 2147483647LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x565 = 17U;
	volatile int8_t x566 = 1;
	uint64_t x567 = UINT64_MAX;
	int8_t x568 = 27;
	volatile uint64_t t53 = 122910959185023456LLU;

	t53 = (x565%(x566*(x567/x568)));

	if (t53 != 17LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x569 = INT16_MIN;
	static uint16_t x570 = 57U;
	static uint64_t x571 = UINT64_MAX;
	int8_t x572 = INT8_MIN;
	volatile uint64_t t54 = 438285886442LLU;

	t54 = (x569%(x570*(x571/x572)));

	if (t54 != 5LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x574 = INT32_MIN;

	t55 = (x573%(x574*(x575/x576)));

	if (t55 != -32768LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x582 = -1;
	int32_t x583 = INT32_MIN;
	volatile int8_t x584 = 14;
	volatile int32_t t56 = -1558;

	t56 = (x581%(x582*(x583/x584)));

	if (t56 != 255) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x589 = INT64_MAX;
	volatile uint64_t t57 = 13123287LLU;

	t57 = (x589%(x590*(x591/x592)));

	if (t57 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x606 = 13;
	static int16_t x607 = -14429;
	int8_t x608 = INT8_MIN;

	t58 = (x605%(x606*(x607/x608)));

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x609 = INT8_MIN;
	static int8_t x612 = -1;
	uint32_t t59 = 16U;

	t59 = (x609%(x610*(x611/x612)));

	if (t59 != 4294967168U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x621 = 13;
	uint32_t x622 = 555U;
	int64_t x623 = 600942LL;
	int16_t x624 = -24;
	int64_t t60 = -1893854LL;

	t60 = (x621%(x622*(x623/x624)));

	if (t60 != 13LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x625 = -1;
	volatile uint16_t x626 = 15731U;
	int64_t x627 = -1LL;
	int64_t x628 = -1LL;
	int64_t t61 = -568352741166969LL;

	t61 = (x625%(x626*(x627/x628)));

	if (t61 != -1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x661 = INT8_MIN;
	int16_t x662 = INT16_MAX;
	int16_t x663 = -1;
	int32_t x664 = -1;

	t62 = (x661%(x662*(x663/x664)));

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x669 = 1U;
	uint16_t x671 = UINT16_MAX;
	int16_t x672 = INT16_MIN;
	int32_t t63 = -7494386;

	t63 = (x669%(x670*(x671/x672)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x705 = 88U;
	int8_t x707 = INT8_MIN;
	int8_t x708 = -1;
	static volatile int32_t t64 = -155;

	t64 = (x705%(x706*(x707/x708)));

	if (t64 != 88) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x713 = UINT64_MAX;
	static uint8_t x714 = UINT8_MAX;
	static int16_t x715 = INT16_MAX;
	uint64_t t65 = 1872803LLU;

	t65 = (x713%(x714*(x715/x716)));

	if (t65 != 5865LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x721 = INT64_MAX;
	static int16_t x722 = INT16_MIN;
	uint8_t x723 = 7U;
	volatile int8_t x724 = 1;
	int64_t t66 = 32693775879LL;

	t66 = (x721%(x722*(x723/x724)));

	if (t66 != 32767LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x733 = INT64_MIN;
	static uint8_t x736 = UINT8_MAX;

	t67 = (x733%(x734*(x735/x736)));

	if (t67 != -32768LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x741 = INT32_MAX;
	int16_t x742 = 1;
	static int16_t x743 = INT16_MAX;
	static uint8_t x744 = 1U;
	volatile int32_t t68 = -104226;

	t68 = (x741%(x742*(x743/x744)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x745 = -81LL;
	static volatile uint64_t x746 = 78LLU;
	int64_t x747 = 175202LL;
	volatile int8_t x748 = -4;
	uint64_t t69 = 496LLU;

	t69 = (x745%(x746*(x747/x748)));

	if (t69 != 3416319LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x749 = INT64_MIN;
	uint64_t x750 = UINT64_MAX;
	int8_t x751 = INT8_MIN;
	int8_t x752 = INT8_MIN;
	volatile uint64_t t70 = 54LLU;

	t70 = (x749%(x750*(x751/x752)));

	if (t70 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x753 = 1;
	static uint64_t x754 = UINT64_MAX;
	int32_t x755 = INT32_MIN;
	uint8_t x756 = UINT8_MAX;

	t71 = (x753%(x754*(x755/x756)));

	if (t71 != 1LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint64_t x761 = 860765240LLU;
	uint16_t x762 = 4874U;
	uint32_t x764 = 116428693U;
	volatile uint64_t t72 = 40371094LLU;

	t72 = (x761%(x762*(x763/x764)));

	if (t72 != 860765240LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x770 = 6U;
	volatile int16_t x771 = INT16_MAX;
	static volatile uint32_t t73 = 17024758U;

	t73 = (x769%(x770*(x771/x772)));

	if (t73 != 2147483648U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int8_t x773 = INT8_MIN;
	int64_t x774 = -441LL;
	static int16_t x775 = INT16_MIN;
	int64_t t74 = 773712156153370LL;

	t74 = (x773%(x774*(x775/x776)));

	if (t74 != -128LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x802 = UINT32_MAX;
	int64_t t75 = 541761665227LL;

	t75 = (x801%(x802*(x803/x804)));

	if (t75 != 3LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x821 = -1;
	volatile uint64_t x822 = 2500369929406267LLU;
	volatile int8_t x823 = INT8_MIN;
	int16_t x824 = -1;
	volatile uint64_t t76 = 1810LLU;

	t76 = (x821%(x822*(x823/x824)));

	if (t76 != 204045068761427583LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x829 = -580527515203565LL;
	int16_t x830 = INT16_MAX;
	int32_t x831 = INT32_MIN;
	int32_t x832 = 3549878;
	volatile int64_t t77 = 11240LL;

	t77 = (x829%(x830*(x831/x832)));

	if (t77 != -8054689LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x849 = 1;
	uint8_t x850 = 40U;
	static int64_t x852 = -25LL;

	t78 = (x849%(x850*(x851/x852)));

	if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x853 = INT16_MIN;
	int32_t x854 = INT32_MAX;
	static int16_t x855 = INT16_MAX;
	int64_t x856 = -1LL;
	int64_t t79 = 1053001909272169009LL;

	t79 = (x853%(x854*(x855/x856)));

	if (t79 != -32768LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x858 = -1;
	int16_t x860 = INT16_MIN;
	int64_t t80 = -7093259998715LL;

	t80 = (x857%(x858*(x859/x860)));

	if (t80 != -2147483648LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x862 = INT16_MAX;
	uint16_t x863 = UINT16_MAX;
	int16_t x864 = -1;
	volatile int32_t t81 = -9;

	t81 = (x861%(x862*(x863/x864)));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x869 = INT64_MIN;
	int32_t x870 = INT32_MAX;
	uint8_t x872 = 63U;
	volatile int64_t t82 = -59LL;

	t82 = (x869%(x870*(x871/x872)));

	if (t82 != -536674322LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x878 = INT32_MAX;
	uint64_t x879 = 31955320114981163LLU;
	uint64_t t83 = 5216LLU;

	t83 = (x877%(x878*(x879/x880)));

	if (t83 != 4294967295LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x881 = 4283576575LL;
	static int64_t x882 = -88974180837LL;
	int16_t x883 = INT16_MIN;
	int16_t x884 = INT16_MIN;
	volatile int64_t t84 = -148045LL;

	t84 = (x881%(x882*(x883/x884)));

	if (t84 != 4283576575LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x897 = UINT64_MAX;
	int8_t x898 = INT8_MAX;
	int16_t x899 = -2473;
	uint64_t x900 = 17322864LLU;

	t85 = (x897%(x898*(x899/x900)));

	if (t85 != 68152224945215LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x905 = UINT8_MAX;
	volatile uint8_t x906 = 19U;
	int32_t x907 = -1;
	uint64_t x908 = 147539268LLU;
	static uint64_t t86 = 21935255LLU;

	t86 = (x905%(x906*(x907/x908)));

	if (t86 != 255LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x910 = INT8_MIN;
	int32_t x911 = INT32_MIN;
	uint32_t x912 = 1407022111U;
	volatile uint32_t t87 = 2U;

	t87 = (x909%(x910*(x911/x912)));

	if (t87 != 1U) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x925 = 27795198907LL;
	static volatile int16_t x927 = -1;

	t88 = (x925%(x926*(x927/x928)));

	if (t88 != 27795198907LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x929 = INT64_MAX;
	uint64_t x932 = 517717848129142LLU;
	volatile uint64_t t89 = 120770254933LLU;

	t89 = (x929%(x930*(x931/x932)));

	if (t89 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x946 = -107617207838356523LL;
	int8_t x947 = -5;
	uint64_t x948 = 127LLU;
	static uint64_t t90 = 2986LLU;

	t90 = (x945%(x946*(x947/x948)));

	if (t90 != 10LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x949 = 7LL;
	uint16_t x950 = 110U;
	int64_t x951 = INT64_MIN;
	static int32_t x952 = INT32_MIN;
	int64_t t91 = 275013933189831LL;

	t91 = (x949%(x950*(x951/x952)));

	if (t91 != 7LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x977 = 15322299838LL;
	int8_t x978 = INT8_MIN;
	volatile int64_t x979 = INT64_MAX;
	volatile int16_t x980 = INT16_MIN;
	volatile int64_t t92 = 1982LL;

	t92 = (x977%(x978*(x979/x980)));

	if (t92 != 15322299838LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x997 = 489U;
	int32_t x998 = -96;
	uint8_t x999 = 3U;
	int8_t x1000 = 2;
	static uint32_t t93 = 521U;

	t93 = (x997%(x998*(x999/x1000)));

	if (t93 != 489U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x1001 = INT64_MAX;
	volatile uint16_t x1003 = 74U;
	uint8_t x1004 = 16U;

	t94 = (x1001%(x1002*(x1003/x1004)));

	if (t94 != 1256134957429755LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x1013 = -1LL;
	int16_t x1014 = INT16_MAX;
	int32_t x1015 = 3757;
	int8_t x1016 = INT8_MIN;
	volatile int64_t t95 = -1690639607LL;

	t95 = (x1013%(x1014*(x1015/x1016)));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x1029 = INT16_MAX;
	int64_t x1030 = -969033LL;
	uint8_t x1031 = UINT8_MAX;
	static int32_t x1032 = -97;
	volatile int64_t t96 = -1144362860531LL;

	t96 = (x1029%(x1030*(x1031/x1032)));

	if (t96 != 32767LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x1033 = -4;
	int32_t x1035 = INT32_MIN;
	uint16_t x1036 = 100U;
	volatile uint64_t t97 = 922653662282496LLU;

	t97 = (x1033%(x1034*(x1035/x1036)));

	if (t97 != 6936629726028LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x1054 = -1;

	t98 = (x1053%(x1054*(x1055/x1056)));

	if (t98 != 4294934528U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x1068 = 10120;

	t99 = (x1065%(x1066*(x1067/x1068)));

	if (t99 != -8LL) { NG(); } else { ; }
	
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

