#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x21 = UINT8_MAX;
volatile int32_t t4 = -6020;
volatile int64_t x50 = -1LL;
static int8_t x60 = INT8_MIN;
int8_t x61 = INT8_MAX;
volatile uint32_t x72 = 3819024U;
int16_t x73 = 177;
int64_t x152 = 28311469830696042LL;
uint64_t x158 = UINT64_MAX;
uint64_t x174 = UINT64_MAX;
int32_t x187 = INT32_MIN;
volatile int32_t t19 = -52820668;
uint64_t x191 = 187191LLU;
uint64_t x200 = UINT64_MAX;
int8_t x212 = INT8_MIN;
uint16_t x213 = UINT16_MAX;
int8_t x230 = 1;
uint16_t x246 = 284U;
static volatile uint16_t x249 = 95U;
int16_t x262 = INT16_MIN;
int64_t x271 = INT64_MAX;
int16_t x275 = 100;
uint16_t x285 = 956U;
uint64_t x287 = 643392588LLU;
static int8_t x291 = -27;
uint64_t x301 = UINT64_MAX;
volatile int32_t x310 = INT32_MAX;
int32_t x328 = INT32_MIN;
uint16_t x337 = 322U;
uint32_t x338 = UINT32_MAX;
static uint32_t x339 = 233U;
uint64_t t39 = 1LLU;
int64_t x366 = INT64_MAX;
int32_t x394 = INT32_MIN;
int8_t x396 = INT8_MIN;
static uint64_t x413 = 114382660LLU;
volatile int64_t x426 = -16069168LL;
int64_t x435 = 302643LL;
uint32_t x436 = 122118U;
volatile int32_t t53 = 351657;
volatile int8_t x482 = 14;
int16_t x487 = 5;
uint32_t x501 = UINT32_MAX;
volatile uint32_t t58 = UINT32_MAX;
uint8_t x513 = UINT8_MAX;
int64_t x527 = -1LL;
int64_t x540 = -1LL;
int16_t x562 = INT16_MAX;
volatile int16_t x565 = 1;
uint8_t x568 = 51U;
static uint64_t x574 = 143710272608706001LLU;
int64_t x575 = -1LL;
uint8_t x589 = 3U;
int16_t x590 = INT16_MIN;
uint32_t t70 = UINT32_MAX;
uint32_t x598 = 505408U;
int64_t x603 = INT64_MIN;
uint64_t x604 = UINT64_MAX;
int32_t x605 = 599834;
int32_t x606 = -126118;
uint8_t x625 = 21U;
volatile int32_t x631 = INT32_MIN;
volatile int64_t x632 = INT64_MIN;
int16_t x638 = INT16_MIN;
int32_t x649 = INT32_MAX;
int32_t t81 = 1045306138;
int32_t t83 = 2;
int16_t x727 = INT16_MAX;
volatile int32_t t85 = -514069022;
int16_t x737 = INT16_MAX;
uint16_t x740 = 921U;
static int32_t x742 = -1;
volatile int32_t x770 = INT32_MIN;
volatile int32_t t88 = -749093175;
int8_t x799 = INT8_MAX;
int32_t t93 = 158;
int64_t x810 = -1LL;
volatile int32_t t97 = -668636766;
int64_t x849 = INT64_MAX;
int8_t x852 = INT8_MIN;


void f0(void) {
	uint16_t x9 = 809U;
	int64_t x10 = -50475LL;
	uint16_t x11 = 1416U;
	volatile int32_t x12 = INT32_MIN;
	volatile int32_t t0 = -2001091;

	t0 = (x9>>(x10==(x11/x12)));

	if (t0 != 809) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x17 = 194U;
	volatile uint8_t x18 = 61U;
	uint64_t x19 = 66162645LLU;
	int64_t x20 = -1LL;
	static volatile int32_t t1 = -653113937;

	t1 = (x17>>(x18==(x19/x20)));

	if (t1 != 194) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x22 = 117684469;
	static int8_t x23 = -1;
	int64_t x24 = -3LL;
	static int32_t t2 = 6;

	t2 = (x21>>(x22==(x23/x24)));

	if (t2 != 255) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x25 = INT8_MAX;
	int8_t x26 = INT8_MIN;
	int16_t x27 = -6;
	int16_t x28 = INT16_MIN;
	static int32_t t3 = -38495;

	t3 = (x25>>(x26==(x27/x28)));

	if (t3 != 127) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x33 = UINT16_MAX;
	uint8_t x34 = 31U;
	volatile int16_t x35 = -1;
	int16_t x36 = INT16_MIN;

	t4 = (x33>>(x34==(x35/x36)));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x45 = 34901474LL;
	int32_t x46 = INT32_MIN;
	volatile int32_t x47 = 1960865;
	uint32_t x48 = UINT32_MAX;
	int64_t t5 = -875459LL;

	t5 = (x45>>(x46==(x47/x48)));

	if (t5 != 34901474LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x49 = INT64_MAX;
	int64_t x51 = -13689034LL;
	static uint8_t x52 = 5U;
	int64_t t6 = INT64_MAX;

	t6 = (x49>>(x50==(x51/x52)));

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x57 = 1844866LLU;
	volatile int16_t x58 = 680;
	int16_t x59 = 63;
	volatile uint64_t t7 = 2065524091716612LLU;

	t7 = (x57>>(x58==(x59/x60)));

	if (t7 != 1844866LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x62 = -63;
	volatile int64_t x63 = INT64_MAX;
	int64_t x64 = INT64_MIN;
	int32_t t8 = -22240;

	t8 = (x61>>(x62==(x63/x64)));

	if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x69 = UINT32_MAX;
	int8_t x70 = 4;
	int8_t x71 = INT8_MIN;
	uint32_t t9 = UINT32_MAX;

	t9 = (x69>>(x70==(x71/x72)));

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x74 = INT32_MIN;
	int64_t x75 = -31677143391665LL;
	int8_t x76 = -9;
	volatile int32_t t10 = 236811;

	t10 = (x73>>(x74==(x75/x76)));

	if (t10 != 177) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x81 = 0U;
	uint64_t x82 = 902336LLU;
	int16_t x83 = 406;
	uint16_t x84 = 3388U;
	int32_t t11 = -3702;

	t11 = (x81>>(x82==(x83/x84)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x105 = 928U;
	static int64_t x106 = INT64_MAX;
	int8_t x107 = -1;
	static uint64_t x108 = UINT64_MAX;
	int32_t t12 = 9355436;

	t12 = (x105>>(x106==(x107/x108)));

	if (t12 != 928) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x129 = 2841959U;
	volatile uint16_t x130 = 3337U;
	int64_t x131 = -1LL;
	static volatile int16_t x132 = INT16_MIN;
	uint32_t t13 = 803U;

	t13 = (x129>>(x130==(x131/x132)));

	if (t13 != 2841959U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x145 = UINT32_MAX;
	uint16_t x146 = UINT16_MAX;
	static uint16_t x147 = 0U;
	uint8_t x148 = 2U;
	static uint32_t t14 = UINT32_MAX;

	t14 = (x145>>(x146==(x147/x148)));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x149 = 100572019LL;
	static int16_t x150 = INT16_MAX;
	int16_t x151 = INT16_MIN;
	volatile int64_t t15 = -23771343692702LL;

	t15 = (x149>>(x150==(x151/x152)));

	if (t15 != 100572019LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x153 = INT64_MAX;
	int16_t x154 = -3722;
	int64_t x155 = -1LL;
	static uint32_t x156 = UINT32_MAX;
	static volatile int64_t t16 = INT64_MAX;

	t16 = (x153>>(x154==(x155/x156)));

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x157 = INT64_MAX;
	uint64_t x159 = 441059LLU;
	int16_t x160 = INT16_MAX;
	int64_t t17 = INT64_MAX;

	t17 = (x157>>(x158==(x159/x160)));

	if (t17 != INT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x173 = INT8_MAX;
	static int16_t x175 = INT16_MAX;
	uint16_t x176 = UINT16_MAX;
	volatile int32_t t18 = -41157692;

	t18 = (x173>>(x174==(x175/x176)));

	if (t18 != 127) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x185 = 628U;
	int16_t x186 = INT16_MIN;
	static int32_t x188 = INT32_MIN;

	t19 = (x185>>(x186==(x187/x188)));

	if (t19 != 628) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x189 = 11;
	int32_t x190 = INT32_MIN;
	volatile int16_t x192 = INT16_MIN;
	volatile int32_t t20 = 11;

	t20 = (x189>>(x190==(x191/x192)));

	if (t20 != 11) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x197 = 2500941877428347LL;
	int8_t x198 = INT8_MAX;
	int8_t x199 = INT8_MAX;
	static int64_t t21 = -1453637174008866653LL;

	t21 = (x197>>(x198==(x199/x200)));

	if (t21 != 2500941877428347LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x209 = 0;
	int16_t x210 = 0;
	int8_t x211 = 1;
	volatile int32_t t22 = -1;

	t22 = (x209>>(x210==(x211/x212)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x214 = INT64_MIN;
	volatile int8_t x215 = -1;
	static volatile int32_t x216 = 127069377;
	int32_t t23 = 11786;

	t23 = (x213>>(x214==(x215/x216)));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x229 = 0;
	int64_t x231 = -1LL;
	int64_t x232 = INT64_MAX;
	int32_t t24 = 172417029;

	t24 = (x229>>(x230==(x231/x232)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x245 = UINT64_MAX;
	uint16_t x247 = 2U;
	uint16_t x248 = 12U;
	volatile uint64_t t25 = UINT64_MAX;

	t25 = (x245>>(x246==(x247/x248)));

	if (t25 != UINT64_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x250 = INT8_MIN;
	static volatile int64_t x251 = INT64_MIN;
	volatile uint32_t x252 = 704U;
	volatile int32_t t26 = 64;

	t26 = (x249>>(x250==(x251/x252)));

	if (t26 != 95) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x261 = 98U;
	int16_t x263 = -891;
	static int64_t x264 = -46966LL;
	int32_t t27 = -15163069;

	t27 = (x261>>(x262==(x263/x264)));

	if (t27 != 98) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x269 = 0;
	static volatile uint64_t x270 = UINT64_MAX;
	int8_t x272 = INT8_MIN;
	int32_t t28 = -44010;

	t28 = (x269>>(x270==(x271/x272)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x273 = UINT32_MAX;
	static uint32_t x274 = 25945455U;
	int64_t x276 = INT64_MIN;
	static uint32_t t29 = UINT32_MAX;

	t29 = (x273>>(x274==(x275/x276)));

	if (t29 != UINT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x281 = 2095242856U;
	int8_t x282 = INT8_MIN;
	int8_t x283 = INT8_MIN;
	volatile int8_t x284 = 35;
	static volatile uint32_t t30 = 0U;

	t30 = (x281>>(x282==(x283/x284)));

	if (t30 != 2095242856U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x286 = INT64_MIN;
	volatile int8_t x288 = INT8_MIN;
	int32_t t31 = 2198;

	t31 = (x285>>(x286==(x287/x288)));

	if (t31 != 956) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x289 = 468944275U;
	volatile uint8_t x290 = 13U;
	uint8_t x292 = UINT8_MAX;
	volatile uint32_t t32 = 875U;

	t32 = (x289>>(x290==(x291/x292)));

	if (t32 != 468944275U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x302 = -1;
	static int64_t x303 = 41398LL;
	static int8_t x304 = INT8_MIN;
	uint64_t t33 = UINT64_MAX;

	t33 = (x301>>(x302==(x303/x304)));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x309 = 0;
	static int32_t x311 = INT32_MIN;
	volatile int64_t x312 = 317648LL;
	int32_t t34 = 26064;

	t34 = (x309>>(x310==(x311/x312)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x313 = 798557217U;
	int32_t x314 = INT32_MAX;
	uint32_t x315 = UINT32_MAX;
	int16_t x316 = 1;
	volatile uint32_t t35 = 544866U;

	t35 = (x313>>(x314==(x315/x316)));

	if (t35 != 798557217U) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x317 = 11U;
	int8_t x318 = INT8_MIN;
	static int64_t x319 = INT64_MIN;
	int64_t x320 = INT64_MIN;
	volatile int32_t t36 = -215726537;

	t36 = (x317>>(x318==(x319/x320)));

	if (t36 != 11) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x325 = 4361LLU;
	static int8_t x326 = INT8_MAX;
	int32_t x327 = INT32_MIN;
	static volatile uint64_t t37 = 528836613126593776LLU;

	t37 = (x325>>(x326==(x327/x328)));

	if (t37 != 4361LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x340 = -1LL;
	volatile int32_t t38 = 163;

	t38 = (x337>>(x338==(x339/x340)));

	if (t38 != 322) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x357 = 7926402119609010867LLU;
	static int8_t x358 = INT8_MIN;
	static uint8_t x359 = 0U;
	int8_t x360 = -3;

	t39 = (x357>>(x358==(x359/x360)));

	if (t39 != 7926402119609010867LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x365 = 215947U;
	uint32_t x367 = UINT32_MAX;
	volatile uint8_t x368 = 46U;
	uint32_t t40 = 531U;

	t40 = (x365>>(x366==(x367/x368)));

	if (t40 != 215947U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x377 = 1U;
	volatile uint16_t x378 = UINT16_MAX;
	static uint8_t x379 = UINT8_MAX;
	int16_t x380 = INT16_MIN;
	int32_t t41 = 609834149;

	t41 = (x377>>(x378==(x379/x380)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x385 = 1U;
	int64_t x386 = -1LL;
	int8_t x387 = 0;
	int16_t x388 = INT16_MAX;
	int32_t t42 = 1;

	t42 = (x385>>(x386==(x387/x388)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x393 = 0;
	volatile uint32_t x395 = 982U;
	int32_t t43 = 474;

	t43 = (x393>>(x394==(x395/x396)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x397 = 0U;
	int16_t x398 = -11377;
	int32_t x399 = INT32_MAX;
	int64_t x400 = 95580905LL;
	uint32_t t44 = 1459077580U;

	t44 = (x397>>(x398==(x399/x400)));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x401 = INT16_MAX;
	int16_t x402 = INT16_MIN;
	int64_t x403 = INT64_MIN;
	static uint32_t x404 = 25917U;
	volatile int32_t t45 = -1923983;

	t45 = (x401>>(x402==(x403/x404)));

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x409 = UINT8_MAX;
	uint16_t x410 = 8U;
	static uint8_t x411 = 7U;
	uint64_t x412 = 6222LLU;
	volatile int32_t t46 = -32021381;

	t46 = (x409>>(x410==(x411/x412)));

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x414 = -1;
	int8_t x415 = INT8_MIN;
	static int64_t x416 = INT64_MIN;
	uint64_t t47 = 4016480418LLU;

	t47 = (x413>>(x414==(x415/x416)));

	if (t47 != 114382660LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x425 = 128LLU;
	uint64_t x427 = UINT64_MAX;
	uint32_t x428 = UINT32_MAX;
	volatile uint64_t t48 = 5LLU;

	t48 = (x425>>(x426==(x427/x428)));

	if (t48 != 128LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x429 = UINT64_MAX;
	static uint16_t x430 = UINT16_MAX;
	volatile int8_t x431 = INT8_MIN;
	uint8_t x432 = 35U;
	volatile uint64_t t49 = UINT64_MAX;

	t49 = (x429>>(x430==(x431/x432)));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x433 = UINT8_MAX;
	int32_t x434 = -1;
	int32_t t50 = 49879;

	t50 = (x433>>(x434==(x435/x436)));

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x441 = INT64_MAX;
	uint8_t x442 = 2U;
	int64_t x443 = -207771LL;
	uint32_t x444 = UINT32_MAX;
	volatile int64_t t51 = INT64_MAX;

	t51 = (x441>>(x442==(x443/x444)));

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x453 = 251U;
	int32_t x454 = -1;
	int16_t x455 = -5941;
	int64_t x456 = INT64_MIN;
	uint32_t t52 = 42851U;

	t52 = (x453>>(x454==(x455/x456)));

	if (t52 != 251U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x457 = UINT16_MAX;
	uint8_t x458 = UINT8_MAX;
	int32_t x459 = INT32_MAX;
	int32_t x460 = INT32_MIN;

	t53 = (x457>>(x458==(x459/x460)));

	if (t53 != 65535) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x461 = INT32_MAX;
	int64_t x462 = 427602076378LL;
	static int8_t x463 = INT8_MIN;
	int32_t x464 = 28702;
	volatile int32_t t54 = INT32_MAX;

	t54 = (x461>>(x462==(x463/x464)));

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x465 = UINT16_MAX;
	uint16_t x466 = 121U;
	uint64_t x467 = 250137063426910LLU;
	static uint32_t x468 = 281393112U;
	static volatile int32_t t55 = 1;

	t55 = (x465>>(x466==(x467/x468)));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x481 = INT64_MAX;
	volatile int8_t x483 = INT8_MIN;
	uint8_t x484 = UINT8_MAX;
	volatile int64_t t56 = INT64_MAX;

	t56 = (x481>>(x482==(x483/x484)));

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x485 = UINT64_MAX;
	uint8_t x486 = UINT8_MAX;
	int64_t x488 = INT64_MIN;
	uint64_t t57 = UINT64_MAX;

	t57 = (x485>>(x486==(x487/x488)));

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x502 = 10U;
	int64_t x503 = INT64_MAX;
	int16_t x504 = INT16_MIN;

	t58 = (x501>>(x502==(x503/x504)));

	if (t58 != UINT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x505 = 478U;
	int32_t x506 = -1;
	int32_t x507 = -1;
	static int8_t x508 = INT8_MIN;
	static volatile int32_t t59 = 0;

	t59 = (x505>>(x506==(x507/x508)));

	if (t59 != 478) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x509 = UINT16_MAX;
	uint8_t x510 = UINT8_MAX;
	int16_t x511 = 0;
	int32_t x512 = INT32_MIN;
	volatile int32_t t60 = -6;

	t60 = (x509>>(x510==(x511/x512)));

	if (t60 != 65535) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x514 = -796645350675454065LL;
	int8_t x515 = 1;
	uint64_t x516 = UINT64_MAX;
	static volatile int32_t t61 = -3679;

	t61 = (x513>>(x514==(x515/x516)));

	if (t61 != 255) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x525 = UINT32_MAX;
	int64_t x526 = 9590996948LL;
	int32_t x528 = INT32_MAX;
	volatile uint32_t t62 = UINT32_MAX;

	t62 = (x525>>(x526==(x527/x528)));

	if (t62 != UINT32_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x537 = 26452231491823685LL;
	static int32_t x538 = INT32_MIN;
	volatile int32_t x539 = INT32_MIN;
	int64_t t63 = -28LL;

	t63 = (x537>>(x538==(x539/x540)));

	if (t63 != 26452231491823685LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x561 = 948482397560LLU;
	int8_t x563 = INT8_MAX;
	int32_t x564 = -158509;
	static volatile uint64_t t64 = 260790320LLU;

	t64 = (x561>>(x562==(x563/x564)));

	if (t64 != 948482397560LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x566 = INT64_MIN;
	static uint64_t x567 = UINT64_MAX;
	static int32_t t65 = -2;

	t65 = (x565>>(x566==(x567/x568)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x569 = UINT8_MAX;
	int32_t x570 = 1072;
	static uint16_t x571 = UINT16_MAX;
	int16_t x572 = INT16_MIN;
	volatile int32_t t66 = 407;

	t66 = (x569>>(x570==(x571/x572)));

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x573 = UINT32_MAX;
	int16_t x576 = -27;
	static volatile uint32_t t67 = UINT32_MAX;

	t67 = (x573>>(x574==(x575/x576)));

	if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x577 = UINT32_MAX;
	uint32_t x578 = 10053U;
	int8_t x579 = -1;
	volatile uint8_t x580 = UINT8_MAX;
	volatile uint32_t t68 = UINT32_MAX;

	t68 = (x577>>(x578==(x579/x580)));

	if (t68 != UINT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x591 = 1LLU;
	int64_t x592 = INT64_MIN;
	int32_t t69 = -654;

	t69 = (x589>>(x590==(x591/x592)));

	if (t69 != 3) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x593 = UINT32_MAX;
	int64_t x594 = -1LL;
	int32_t x595 = 54;
	volatile int16_t x596 = INT16_MIN;

	t70 = (x593>>(x594==(x595/x596)));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x597 = 5640U;
	int8_t x599 = INT8_MIN;
	uint64_t x600 = 554936343996675147LLU;
	volatile uint32_t t71 = 4U;

	t71 = (x597>>(x598==(x599/x600)));

	if (t71 != 5640U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x601 = 303386654728373LLU;
	uint16_t x602 = 0U;
	uint64_t t72 = 7LLU;

	t72 = (x601>>(x602==(x603/x604)));

	if (t72 != 151693327364186LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x607 = INT64_MIN;
	volatile int64_t x608 = INT64_MIN;
	volatile int32_t t73 = 3125;

	t73 = (x605>>(x606==(x607/x608)));

	if (t73 != 599834) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x626 = -1;
	volatile int32_t x627 = -1;
	int32_t x628 = INT32_MAX;
	int32_t t74 = 5;

	t74 = (x625>>(x626==(x627/x628)));

	if (t74 != 21) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x629 = 5U;
	int16_t x630 = -1;
	volatile int32_t t75 = -293361;

	t75 = (x629>>(x630==(x631/x632)));

	if (t75 != 5) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint16_t x637 = 10U;
	uint16_t x639 = 4U;
	int16_t x640 = INT16_MIN;
	volatile int32_t t76 = -71491;

	t76 = (x637>>(x638==(x639/x640)));

	if (t76 != 10) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x645 = INT8_MAX;
	volatile uint8_t x646 = 0U;
	volatile int64_t x647 = -1LL;
	volatile int64_t x648 = INT64_MAX;
	int32_t t77 = -2169;

	t77 = (x645>>(x646==(x647/x648)));

	if (t77 != 63) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x650 = INT32_MIN;
	uint32_t x651 = 276599705U;
	uint32_t x652 = 144U;
	volatile int32_t t78 = INT32_MAX;

	t78 = (x649>>(x650==(x651/x652)));

	if (t78 != INT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x653 = INT64_MAX;
	volatile uint64_t x654 = 121LLU;
	uint16_t x655 = UINT16_MAX;
	int32_t x656 = INT32_MIN;
	volatile int64_t t79 = INT64_MAX;

	t79 = (x653>>(x654==(x655/x656)));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x665 = 1;
	int32_t x666 = -1;
	int64_t x667 = -1LL;
	uint64_t x668 = 6820577203LLU;
	static int32_t t80 = 1294;

	t80 = (x665>>(x666==(x667/x668)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x677 = 1774U;
	uint16_t x678 = UINT16_MAX;
	static int64_t x679 = INT64_MIN;
	int8_t x680 = 3;

	t81 = (x677>>(x678==(x679/x680)));

	if (t81 != 1774) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x685 = 0;
	int16_t x686 = -1;
	int8_t x687 = -3;
	int16_t x688 = INT16_MIN;
	int32_t t82 = -387;

	t82 = (x685>>(x686==(x687/x688)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x693 = INT32_MAX;
	uint8_t x694 = 0U;
	uint64_t x695 = 1LLU;
	static int64_t x696 = -91231803380LL;

	t83 = (x693>>(x694==(x695/x696)));

	if (t83 != 1073741823) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x713 = INT64_MAX;
	uint64_t x714 = 21936411360LLU;
	int32_t x715 = -1;
	int16_t x716 = -2705;
	volatile int64_t t84 = INT64_MAX;

	t84 = (x713>>(x714==(x715/x716)));

	if (t84 != INT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x725 = UINT16_MAX;
	volatile uint64_t x726 = 0LLU;
	int64_t x728 = -1LL;

	t85 = (x725>>(x726==(x727/x728)));

	if (t85 != 65535) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x738 = -140;
	int64_t x739 = -195LL;
	volatile int32_t t86 = -3849510;

	t86 = (x737>>(x738==(x739/x740)));

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x741 = 1;
	volatile int64_t x743 = -1392895240242LL;
	static uint32_t x744 = 104234U;
	volatile int32_t t87 = -23948607;

	t87 = (x741>>(x742==(x743/x744)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x769 = 3195;
	static int64_t x771 = -163030503977567LL;
	static int16_t x772 = INT16_MIN;

	t88 = (x769>>(x770==(x771/x772)));

	if (t88 != 3195) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x773 = UINT8_MAX;
	volatile uint16_t x774 = 11U;
	int32_t x775 = -5348392;
	int32_t x776 = INT32_MIN;
	static int32_t t89 = -2452;

	t89 = (x773>>(x774==(x775/x776)));

	if (t89 != 255) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x777 = 324211U;
	volatile uint64_t x778 = 39266LLU;
	uint8_t x779 = 61U;
	uint64_t x780 = 213009380581LLU;
	static uint32_t t90 = 278971876U;

	t90 = (x777>>(x778==(x779/x780)));

	if (t90 != 324211U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x789 = 1463393425089677799LLU;
	uint32_t x790 = UINT32_MAX;
	static int16_t x791 = INT16_MIN;
	static int16_t x792 = -2;
	volatile uint64_t t91 = 15967200264LLU;

	t91 = (x789>>(x790==(x791/x792)));

	if (t91 != 1463393425089677799LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x797 = 636235U;
	uint32_t x798 = UINT32_MAX;
	int16_t x800 = -1;
	volatile uint32_t t92 = 15518U;

	t92 = (x797>>(x798==(x799/x800)));

	if (t92 != 636235U) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x801 = UINT8_MAX;
	uint8_t x802 = 7U;
	int32_t x803 = -1;
	int16_t x804 = INT16_MIN;

	t93 = (x801>>(x802==(x803/x804)));

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x805 = 563002780U;
	static int32_t x806 = 0;
	static int16_t x807 = INT16_MIN;
	int16_t x808 = 1;
	volatile uint32_t t94 = 12962U;

	t94 = (x805>>(x806==(x807/x808)));

	if (t94 != 563002780U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x809 = 3U;
	uint16_t x811 = UINT16_MAX;
	int32_t x812 = INT32_MIN;
	volatile int32_t t95 = 473;

	t95 = (x809>>(x810==(x811/x812)));

	if (t95 != 3) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x813 = 474971111154094006LLU;
	int64_t x814 = -1LL;
	int64_t x815 = INT64_MAX;
	volatile uint32_t x816 = UINT32_MAX;
	static volatile uint64_t t96 = 1685LLU;

	t96 = (x813>>(x814==(x815/x816)));

	if (t96 != 474971111154094006LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x841 = UINT16_MAX;
	int8_t x842 = 4;
	int16_t x843 = INT16_MIN;
	int16_t x844 = INT16_MAX;

	t97 = (x841>>(x842==(x843/x844)));

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x850 = UINT64_MAX;
	uint8_t x851 = 25U;
	volatile int64_t t98 = INT64_MAX;

	t98 = (x849>>(x850==(x851/x852)));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x865 = 277898995;
	static uint64_t x866 = UINT64_MAX;
	static int32_t x867 = INT32_MIN;
	int16_t x868 = 1;
	volatile int32_t t99 = 1001113816;

	t99 = (x865>>(x866==(x867/x868)));

	if (t99 != 277898995) { NG(); } else { ; }
	
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

