#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x7 = -1;
volatile int32_t t1 = -4118;
uint16_t x13 = UINT16_MAX;
uint64_t x17 = UINT64_MAX;
int16_t x37 = INT16_MAX;
int32_t x39 = INT32_MIN;
volatile uint32_t x41 = 68857449U;
int8_t x43 = 39;
int32_t x49 = INT32_MAX;
uint64_t x51 = 26103LLU;
int64_t x54 = -1LL;
uint64_t x61 = UINT64_MAX;
uint8_t x62 = UINT8_MAX;
int64_t x66 = INT64_MAX;
uint16_t x67 = 76U;
uint8_t x75 = 2U;
volatile uint16_t x82 = 9461U;
uint32_t x85 = 7011U;
uint16_t x92 = 2509U;
int32_t x97 = 45;
volatile int16_t x99 = INT16_MIN;
volatile int32_t t16 = 13424590;
static int8_t x106 = INT8_MAX;
volatile int16_t x120 = 18;
uint64_t x122 = 413209039LLU;
volatile int32_t t19 = -4295443;
int16_t x135 = INT16_MIN;
volatile int32_t t20 = 167683;
uint8_t x143 = 1U;
static volatile int16_t x148 = 124;
int8_t x178 = -25;
int8_t x192 = -1;
int16_t x216 = INT16_MIN;
volatile uint64_t t27 = 2036850248325444LLU;
static volatile uint8_t x237 = 32U;
int32_t t29 = 0;
int64_t x247 = -51918281LL;
uint32_t t31 = UINT32_MAX;
uint64_t x250 = 1867335103LLU;
int8_t x257 = 54;
uint64_t x278 = 4928LLU;
int8_t x279 = -1;
static uint16_t x280 = 44U;
uint16_t x284 = 63U;
int64_t x311 = -1LL;
int8_t x317 = 0;
int32_t x332 = INT32_MIN;
volatile int32_t t41 = 29264984;
uint16_t x333 = UINT16_MAX;
int8_t x361 = INT8_MAX;
int32_t x363 = -1;
volatile uint32_t t45 = 884U;
uint32_t x378 = 82769799U;
volatile int16_t x379 = -1;
int32_t x396 = INT32_MIN;
static volatile int64_t t48 = -87405015789967LL;
int16_t x401 = 20;
int32_t x404 = -3909941;
int8_t x419 = INT8_MAX;
static uint64_t x423 = 3327953696475689LLU;
uint32_t x441 = 3077U;
uint16_t x444 = 11027U;
volatile uint32_t t57 = 15U;
int16_t x453 = INT16_MAX;
volatile uint64_t t60 = 14565057LLU;
static uint32_t x474 = 4627552U;
int32_t x475 = INT32_MIN;
int16_t x506 = INT16_MIN;
int16_t x511 = INT16_MIN;
uint8_t x513 = UINT8_MAX;
int16_t x518 = INT16_MIN;
int64_t t69 = INT64_MAX;
uint64_t x521 = UINT64_MAX;
static int64_t x524 = -3366034787LL;
int8_t x536 = INT8_MAX;
static volatile uint32_t t71 = 88159U;
int64_t x540 = -37LL;
static uint64_t t72 = UINT64_MAX;
volatile uint64_t t73 = 296039LLU;
static int8_t x553 = 0;
static volatile int32_t x564 = 5;
uint8_t x625 = 0U;
uint8_t x637 = 126U;
int32_t t84 = 3312630;
volatile uint16_t x646 = 27982U;
uint32_t x647 = 4543092U;
static uint32_t x648 = 51605U;
int64_t x652 = 3381688745703547008LL;
int32_t t87 = -6670;
uint16_t x655 = 0U;
uint32_t t88 = 225781585U;
uint16_t x662 = 10U;
volatile int32_t t90 = -3;
static volatile int8_t x671 = 0;
int32_t x672 = INT32_MAX;
int32_t x696 = INT32_MIN;
int32_t x710 = INT32_MAX;
uint32_t x749 = 7394U;
int32_t x751 = INT32_MAX;
static int8_t x752 = -1;
uint64_t x755 = 5406236LLU;
uint16_t x756 = 3U;


void f0(void) {
	volatile uint64_t x1 = 3LLU;
	static int8_t x2 = -1;
	static uint64_t x3 = 1924533612LLU;
	int32_t x4 = -9816;
	uint64_t t0 = 1974958718268346LLU;

	t0 = (x1>>((x2-x3)<x4));

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 112U;
	int8_t x6 = INT8_MIN;
	int32_t x8 = 432;

	t1 = (x5>>((x6-x7)<x8));

	if (t1 != 56) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = 2;
	int16_t x10 = INT16_MIN;
	static int32_t x11 = INT32_MIN;
	static uint32_t x12 = 10739686U;
	int32_t t2 = 0;

	t2 = (x9>>((x10-x11)<x12));

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = 1;
	int16_t x15 = INT16_MIN;
	uint32_t x16 = UINT32_MAX;
	volatile int32_t t3 = 465;

	t3 = (x13>>((x14-x15)<x16));

	if (t3 != 32767) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x18 = 551919U;
	int16_t x19 = 236;
	uint16_t x20 = 225U;
	volatile uint64_t t4 = UINT64_MAX;

	t4 = (x17>>((x18-x19)<x20));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = 20025U;
	uint64_t x26 = 7398LLU;
	int16_t x27 = INT16_MIN;
	int16_t x28 = INT16_MIN;
	int32_t t5 = 1;

	t5 = (x25>>((x26-x27)<x28));

	if (t5 != 10012) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x38 = 490347371U;
	volatile uint64_t x40 = 82438320LLU;
	volatile int32_t t6 = -1;

	t6 = (x37>>((x38-x39)<x40));

	if (t6 != 32767) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x42 = 48U;
	int64_t x44 = INT64_MAX;
	static uint32_t t7 = 161U;

	t7 = (x41>>((x42-x43)<x44));

	if (t7 != 34428724U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x50 = 0U;
	volatile int32_t x52 = INT32_MIN;
	static volatile int32_t t8 = INT32_MAX;

	t8 = (x49>>((x50-x51)<x52));

	if (t8 != INT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x53 = 468U;
	uint8_t x55 = 2U;
	volatile uint32_t x56 = 161U;
	volatile int32_t t9 = 3;

	t9 = (x53>>((x54-x55)<x56));

	if (t9 != 234) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x63 = INT64_MAX;
	int32_t x64 = INT32_MIN;
	uint64_t t10 = 155LLU;

	t10 = (x61>>((x62-x63)<x64));

	if (t10 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x65 = 27U;
	volatile int32_t x68 = INT32_MIN;
	volatile uint32_t t11 = 273934U;

	t11 = (x65>>((x66-x67)<x68));

	if (t11 != 27U) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x73 = 24U;
	uint16_t x74 = 63U;
	volatile uint64_t x76 = UINT64_MAX;
	volatile int32_t t12 = 34;

	t12 = (x73>>((x74-x75)<x76));

	if (t12 != 12) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x81 = INT8_MAX;
	uint8_t x83 = 88U;
	int16_t x84 = -1;
	int32_t t13 = -779993134;

	t13 = (x81>>((x82-x83)<x84));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x86 = 29933831LL;
	static uint64_t x87 = UINT64_MAX;
	uint32_t x88 = 475U;
	volatile uint32_t t14 = 7148922U;

	t14 = (x85>>((x86-x87)<x88));

	if (t14 != 7011U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x89 = INT16_MAX;
	uint32_t x90 = UINT32_MAX;
	static int64_t x91 = -406975279965970LL;
	volatile int32_t t15 = -880;

	t15 = (x89>>((x90-x91)<x92));

	if (t15 != 32767) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x98 = INT64_MIN;
	int64_t x100 = INT64_MIN;

	t16 = (x97>>((x98-x99)<x100));

	if (t16 != 45) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x105 = 209412680LL;
	volatile uint8_t x107 = 112U;
	static uint8_t x108 = 58U;
	int64_t t17 = -2208627826131283057LL;

	t17 = (x105>>((x106-x107)<x108));

	if (t17 != 104706340LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x117 = UINT64_MAX;
	uint16_t x118 = 881U;
	uint32_t x119 = UINT32_MAX;
	uint64_t t18 = UINT64_MAX;

	t18 = (x117>>((x118-x119)<x120));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x121 = 6;
	int16_t x123 = 1;
	static uint64_t x124 = UINT64_MAX;

	t19 = (x121>>((x122-x123)<x124));

	if (t19 != 3) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x133 = INT16_MAX;
	int16_t x134 = -53;
	int8_t x136 = INT8_MIN;

	t20 = (x133>>((x134-x135)<x136));

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x141 = INT64_MAX;
	static int8_t x142 = -1;
	int16_t x144 = 247;
	static volatile int64_t t21 = 2410011674151LL;

	t21 = (x141>>((x142-x143)<x144));

	if (t21 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x145 = 73644;
	int8_t x146 = INT8_MIN;
	int16_t x147 = INT16_MIN;
	int32_t t22 = 0;

	t22 = (x145>>((x146-x147)<x148));

	if (t22 != 73644) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x161 = 164214276U;
	uint32_t x162 = 0U;
	volatile int32_t x163 = INT32_MIN;
	uint8_t x164 = UINT8_MAX;
	uint32_t t23 = 136452176U;

	t23 = (x161>>((x162-x163)<x164));

	if (t23 != 164214276U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x177 = UINT32_MAX;
	volatile int8_t x179 = INT8_MAX;
	int16_t x180 = 125;
	volatile uint32_t t24 = 19U;

	t24 = (x177>>((x178-x179)<x180));

	if (t24 != 2147483647U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x189 = INT32_MAX;
	int32_t x190 = INT32_MIN;
	volatile int16_t x191 = -1;
	volatile int32_t t25 = -509309410;

	t25 = (x189>>((x190-x191)<x192));

	if (t25 != 1073741823) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x213 = UINT16_MAX;
	volatile uint32_t x214 = 328710U;
	uint32_t x215 = 27986U;
	volatile int32_t t26 = 2405;

	t26 = (x213>>((x214-x215)<x216));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x229 = 2651897077433LLU;
	static int16_t x230 = -2;
	uint16_t x231 = 4440U;
	int64_t x232 = INT64_MAX;

	t27 = (x229>>((x230-x231)<x232));

	if (t27 != 1325948538716LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x233 = 1;
	volatile int64_t x234 = -1LL;
	int8_t x235 = INT8_MAX;
	int8_t x236 = INT8_MIN;
	volatile int32_t t28 = -340;

	t28 = (x233>>((x234-x235)<x236));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x238 = UINT64_MAX;
	int64_t x239 = INT64_MIN;
	int64_t x240 = INT64_MIN;

	t29 = (x237>>((x238-x239)<x240));

	if (t29 != 16) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x241 = UINT64_MAX;
	int16_t x242 = INT16_MIN;
	int64_t x243 = -1LL;
	uint32_t x244 = UINT32_MAX;
	volatile uint64_t t30 = 20715092LLU;

	t30 = (x241>>((x242-x243)<x244));

	if (t30 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x245 = UINT32_MAX;
	int64_t x246 = -1LL;
	static int32_t x248 = -1;

	t31 = (x245>>((x246-x247)<x248));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x249 = INT8_MAX;
	uint64_t x251 = UINT64_MAX;
	int64_t x252 = INT64_MIN;
	int32_t t32 = 7;

	t32 = (x249>>((x250-x251)<x252));

	if (t32 != 63) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x258 = INT16_MAX;
	int64_t x259 = -34386043110221660LL;
	static uint8_t x260 = UINT8_MAX;
	volatile int32_t t33 = -116;

	t33 = (x257>>((x258-x259)<x260));

	if (t33 != 54) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x277 = INT16_MAX;
	volatile int32_t t34 = -47090;

	t34 = (x277>>((x278-x279)<x280));

	if (t34 != 32767) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x281 = 1398LLU;
	static int64_t x282 = -1LL;
	static int32_t x283 = INT32_MIN;
	uint64_t t35 = 1180409579622843LLU;

	t35 = (x281>>((x282-x283)<x284));

	if (t35 != 1398LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x285 = UINT32_MAX;
	int16_t x286 = -21;
	int64_t x287 = -29957409662LL;
	uint64_t x288 = UINT64_MAX;
	volatile uint32_t t36 = 5U;

	t36 = (x285>>((x286-x287)<x288));

	if (t36 != 2147483647U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x309 = UINT32_MAX;
	uint8_t x310 = 3U;
	int32_t x312 = INT32_MAX;
	static volatile uint32_t t37 = 15274065U;

	t37 = (x309>>((x310-x311)<x312));

	if (t37 != 2147483647U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x313 = 4LLU;
	int16_t x314 = -348;
	int16_t x315 = 22;
	static uint64_t x316 = UINT64_MAX;
	volatile uint64_t t38 = 1473241996255119730LLU;

	t38 = (x313>>((x314-x315)<x316));

	if (t38 != 2LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x318 = -277;
	uint8_t x319 = 40U;
	uint8_t x320 = UINT8_MAX;
	int32_t t39 = -12299;

	t39 = (x317>>((x318-x319)<x320));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x325 = INT64_MAX;
	volatile int32_t x326 = -1;
	uint32_t x327 = UINT32_MAX;
	static uint64_t x328 = 12LLU;
	static volatile int64_t t40 = 1438LL;

	t40 = (x325>>((x326-x327)<x328));

	if (t40 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x329 = 22;
	int32_t x330 = INT32_MIN;
	uint16_t x331 = 0U;

	t41 = (x329>>((x330-x331)<x332));

	if (t41 != 22) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x334 = -1;
	int16_t x335 = INT16_MIN;
	int16_t x336 = -1;
	int32_t t42 = -36682693;

	t42 = (x333>>((x334-x335)<x336));

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x353 = 21U;
	static volatile uint8_t x354 = 47U;
	uint8_t x355 = UINT8_MAX;
	int32_t x356 = INT32_MAX;
	int32_t t43 = 868725585;

	t43 = (x353>>((x354-x355)<x356));

	if (t43 != 10) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x362 = INT8_MIN;
	uint32_t x364 = 970U;
	volatile int32_t t44 = 16;

	t44 = (x361>>((x362-x363)<x364));

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x373 = 86U;
	int8_t x374 = INT8_MIN;
	int16_t x375 = INT16_MIN;
	static uint64_t x376 = 154202052318LLU;

	t45 = (x373>>((x374-x375)<x376));

	if (t45 != 43U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x377 = 1549U;
	static volatile uint32_t x380 = 1313U;
	static volatile int32_t t46 = 4424;

	t46 = (x377>>((x378-x379)<x380));

	if (t46 != 1549) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x389 = UINT8_MAX;
	int32_t x390 = INT32_MIN;
	static int64_t x391 = -1LL;
	int16_t x392 = INT16_MAX;
	int32_t t47 = -1;

	t47 = (x389>>((x390-x391)<x392));

	if (t47 != 127) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x393 = INT64_MAX;
	static uint64_t x394 = 6555075016262549609LLU;
	volatile uint8_t x395 = 3U;

	t48 = (x393>>((x394-x395)<x396));

	if (t48 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x402 = 1;
	uint8_t x403 = 17U;
	int32_t t49 = -1;

	t49 = (x401>>((x402-x403)<x404));

	if (t49 != 20) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x405 = 0;
	int64_t x406 = INT64_MIN;
	int64_t x407 = -91811705571544659LL;
	static volatile uint8_t x408 = UINT8_MAX;
	int32_t t50 = -55866944;

	t50 = (x405>>((x406-x407)<x408));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x409 = 4026385LLU;
	uint16_t x410 = 31716U;
	int16_t x411 = INT16_MIN;
	int64_t x412 = INT64_MIN;
	uint64_t t51 = 2LLU;

	t51 = (x409>>((x410-x411)<x412));

	if (t51 != 4026385LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x417 = 1461U;
	uint16_t x418 = 0U;
	int64_t x420 = 2LL;
	volatile int32_t t52 = 436037766;

	t52 = (x417>>((x418-x419)<x420));

	if (t52 != 730) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x421 = 5U;
	int16_t x422 = INT16_MAX;
	static volatile int16_t x424 = 1753;
	volatile int32_t t53 = 15;

	t53 = (x421>>((x422-x423)<x424));

	if (t53 != 5) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x425 = 6U;
	uint8_t x426 = 75U;
	volatile int8_t x427 = -1;
	int32_t x428 = INT32_MIN;
	static volatile int32_t t54 = 2588;

	t54 = (x425>>((x426-x427)<x428));

	if (t54 != 6) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x429 = 134U;
	static uint16_t x430 = 2U;
	uint32_t x431 = 61U;
	volatile int8_t x432 = INT8_MIN;
	int32_t t55 = 2864;

	t55 = (x429>>((x430-x431)<x432));

	if (t55 != 134) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x437 = 438143U;
	int8_t x438 = -1;
	int8_t x439 = -1;
	volatile int64_t x440 = INT64_MIN;
	uint32_t t56 = 61U;

	t56 = (x437>>((x438-x439)<x440));

	if (t56 != 438143U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x442 = INT8_MAX;
	uint16_t x443 = 26013U;

	t57 = (x441>>((x442-x443)<x444));

	if (t57 != 1538U) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x454 = INT16_MIN;
	int64_t x455 = 339001719192LL;
	int32_t x456 = INT32_MAX;
	volatile int32_t t58 = 173734278;

	t58 = (x453>>((x454-x455)<x456));

	if (t58 != 16383) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x457 = 146;
	int8_t x458 = INT8_MIN;
	static uint32_t x459 = UINT32_MAX;
	static volatile int8_t x460 = -1;
	volatile int32_t t59 = 40115;

	t59 = (x457>>((x458-x459)<x460));

	if (t59 != 73) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x461 = 51355LLU;
	int32_t x462 = INT32_MAX;
	static int8_t x463 = INT8_MAX;
	int8_t x464 = -1;

	t60 = (x461>>((x462-x463)<x464));

	if (t60 != 51355LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x469 = 0U;
	static int16_t x470 = INT16_MAX;
	int32_t x471 = -3257704;
	int64_t x472 = 15192415414LL;
	static int32_t t61 = -9284;

	t61 = (x469>>((x470-x471)<x472));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x473 = 2U;
	volatile int16_t x476 = INT16_MIN;
	int32_t t62 = 0;

	t62 = (x473>>((x474-x475)<x476));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x481 = 93LLU;
	int16_t x482 = INT16_MIN;
	int32_t x483 = -353294;
	volatile uint8_t x484 = UINT8_MAX;
	volatile uint64_t t63 = 2898883054732LLU;

	t63 = (x481>>((x482-x483)<x484));

	if (t63 != 93LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x489 = UINT32_MAX;
	uint16_t x490 = 16U;
	static uint16_t x491 = UINT16_MAX;
	int16_t x492 = 542;
	volatile uint32_t t64 = 333284U;

	t64 = (x489>>((x490-x491)<x492));

	if (t64 != 2147483647U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x497 = 210U;
	volatile int8_t x498 = INT8_MAX;
	uint64_t x499 = UINT64_MAX;
	uint64_t x500 = UINT64_MAX;
	int32_t t65 = 14;

	t65 = (x497>>((x498-x499)<x500));

	if (t65 != 105) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x505 = 23;
	volatile uint64_t x507 = UINT64_MAX;
	int32_t x508 = 350513947;
	int32_t t66 = -187;

	t66 = (x505>>((x506-x507)<x508));

	if (t66 != 23) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x509 = 100157322;
	volatile int32_t x510 = INT32_MIN;
	int64_t x512 = INT64_MAX;
	int32_t t67 = -17120;

	t67 = (x509>>((x510-x511)<x512));

	if (t67 != 50078661) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x514 = -1;
	uint16_t x515 = 2359U;
	int32_t x516 = INT32_MIN;
	static int32_t t68 = -22097778;

	t68 = (x513>>((x514-x515)<x516));

	if (t68 != 255) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x517 = INT64_MAX;
	static uint64_t x519 = UINT64_MAX;
	uint32_t x520 = 495798U;

	t69 = (x517>>((x518-x519)<x520));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x522 = UINT16_MAX;
	uint8_t x523 = UINT8_MAX;
	uint64_t t70 = UINT64_MAX;

	t70 = (x521>>((x522-x523)<x524));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x533 = 25868U;
	uint16_t x534 = 26092U;
	uint8_t x535 = 14U;

	t71 = (x533>>((x534-x535)<x536));

	if (t71 != 25868U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x537 = UINT64_MAX;
	volatile int32_t x538 = INT32_MAX;
	int16_t x539 = 16376;

	t72 = (x537>>((x538-x539)<x540));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x541 = 2877466LLU;
	int32_t x542 = INT32_MAX;
	uint8_t x543 = 108U;
	static uint64_t x544 = 360LLU;

	t73 = (x541>>((x542-x543)<x544));

	if (t73 != 2877466LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x554 = -3408558875LL;
	static uint16_t x555 = 24U;
	uint32_t x556 = 49U;
	int32_t t74 = -294281;

	t74 = (x553>>((x554-x555)<x556));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x561 = INT8_MAX;
	uint32_t x562 = 2911U;
	uint32_t x563 = 9206501U;
	static int32_t t75 = 57608270;

	t75 = (x561>>((x562-x563)<x564));

	if (t75 != 127) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x565 = 3164704584918325637LL;
	int16_t x566 = -7;
	uint8_t x567 = UINT8_MAX;
	volatile int8_t x568 = INT8_MIN;
	static volatile int64_t t76 = -4155461642LL;

	t76 = (x565>>((x566-x567)<x568));

	if (t76 != 1582352292459162818LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x569 = UINT16_MAX;
	volatile uint64_t x570 = 694000641165908LLU;
	int8_t x571 = INT8_MIN;
	static int32_t x572 = INT32_MIN;
	static int32_t t77 = -22;

	t77 = (x569>>((x570-x571)<x572));

	if (t77 != 32767) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x581 = UINT64_MAX;
	int64_t x582 = -1LL;
	static uint64_t x583 = 864LLU;
	int64_t x584 = -45676122LL;
	static uint64_t t78 = UINT64_MAX;

	t78 = (x581>>((x582-x583)<x584));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x585 = 14U;
	uint16_t x586 = UINT16_MAX;
	int64_t x587 = -547700020888748329LL;
	uint32_t x588 = 1829452441U;
	int32_t t79 = 6051847;

	t79 = (x585>>((x586-x587)<x588));

	if (t79 != 14) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x593 = INT8_MAX;
	int64_t x594 = INT64_MAX;
	volatile uint16_t x595 = 0U;
	int16_t x596 = INT16_MIN;
	static int32_t t80 = -127;

	t80 = (x593>>((x594-x595)<x596));

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x597 = 0U;
	volatile int64_t x598 = 1590233531163LL;
	int32_t x599 = 9410500;
	int16_t x600 = INT16_MIN;
	volatile int32_t t81 = 1516674;

	t81 = (x597>>((x598-x599)<x600));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x605 = 120632;
	int32_t x606 = INT32_MAX;
	static volatile int8_t x607 = INT8_MAX;
	uint8_t x608 = UINT8_MAX;
	volatile int32_t t82 = 4629;

	t82 = (x605>>((x606-x607)<x608));

	if (t82 != 120632) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x626 = INT16_MAX;
	volatile int16_t x627 = INT16_MAX;
	int16_t x628 = 4;
	volatile int32_t t83 = -9753409;

	t83 = (x625>>((x626-x627)<x628));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x638 = -3205;
	int8_t x639 = INT8_MIN;
	int8_t x640 = INT8_MAX;

	t84 = (x637>>((x638-x639)<x640));

	if (t84 != 63) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x641 = UINT64_MAX;
	int16_t x642 = -8;
	uint64_t x643 = 640889688592369229LLU;
	int64_t x644 = INT64_MIN;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = (x641>>((x642-x643)<x644));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x645 = INT64_MAX;
	static volatile int64_t t86 = INT64_MAX;

	t86 = (x645>>((x646-x647)<x648));

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x649 = INT16_MAX;
	static int64_t x650 = 168711914LL;
	int8_t x651 = 2;

	t87 = (x649>>((x650-x651)<x652));

	if (t87 != 16383) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x653 = 161153161U;
	volatile uint32_t x654 = 13U;
	int16_t x656 = INT16_MAX;

	t88 = (x653>>((x654-x655)<x656));

	if (t88 != 80576580U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x657 = 42U;
	volatile int8_t x658 = INT8_MIN;
	uint16_t x659 = 11U;
	int8_t x660 = 28;
	uint32_t t89 = 253523897U;

	t89 = (x657>>((x658-x659)<x660));

	if (t89 != 21U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x661 = 15914;
	int16_t x663 = -103;
	int32_t x664 = -1;

	t90 = (x661>>((x662-x663)<x664));

	if (t90 != 15914) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x665 = 6LL;
	int32_t x666 = 4;
	static int32_t x667 = -1;
	static int64_t x668 = INT64_MIN;
	int64_t t91 = 7172LL;

	t91 = (x665>>((x666-x667)<x668));

	if (t91 != 6LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x669 = 3227U;
	volatile uint8_t x670 = UINT8_MAX;
	volatile uint32_t t92 = 15329218U;

	t92 = (x669>>((x670-x671)<x672));

	if (t92 != 1613U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x689 = 23021;
	static int32_t x690 = -1;
	static uint16_t x691 = 461U;
	int32_t x692 = 62242;
	volatile int32_t t93 = 2;

	t93 = (x689>>((x690-x691)<x692));

	if (t93 != 11510) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x693 = INT64_MAX;
	int64_t x694 = INT64_MIN;
	static volatile int64_t x695 = INT64_MIN;
	volatile int64_t t94 = INT64_MAX;

	t94 = (x693>>((x694-x695)<x696));

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x709 = 19316U;
	int32_t x711 = 339648;
	int8_t x712 = -16;
	uint32_t t95 = 43831U;

	t95 = (x709>>((x710-x711)<x712));

	if (t95 != 19316U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x745 = 23U;
	uint16_t x746 = 1650U;
	volatile int32_t x747 = -1;
	int32_t x748 = 5;
	int32_t t96 = -1932;

	t96 = (x745>>((x746-x747)<x748));

	if (t96 != 23) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x750 = 40U;
	volatile uint32_t t97 = 205U;

	t97 = (x749>>((x750-x751)<x752));

	if (t97 != 3697U) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x753 = INT32_MAX;
	static int8_t x754 = -1;
	int32_t t98 = INT32_MAX;

	t98 = (x753>>((x754-x755)<x756));

	if (t98 != INT32_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x757 = INT64_MAX;
	int16_t x758 = INT16_MIN;
	int8_t x759 = INT8_MIN;
	volatile int64_t x760 = INT64_MIN;
	volatile int64_t t99 = INT64_MAX;

	t99 = (x757>>((x758-x759)<x760));

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

