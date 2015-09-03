#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x2 = -7;
volatile int16_t x19 = -163;
int32_t t3 = 22;
int64_t x30 = INT64_MAX;
volatile uint64_t x33 = UINT64_MAX;
static uint64_t x35 = 9833631159904LLU;
int16_t x36 = 0;
uint64_t t5 = 3LLU;
uint8_t x37 = 12U;
static uint8_t x38 = UINT8_MAX;
int16_t x65 = INT16_MAX;
static volatile uint64_t x67 = 149024277181LLU;
static int8_t x76 = -1;
static int8_t x85 = 0;
int64_t x86 = 202963LL;
static int16_t x98 = -318;
volatile int16_t x100 = -4413;
static uint32_t t16 = 420954663U;
uint64_t x149 = 2146853180022221LLU;
int32_t x153 = 52618740;
uint64_t x155 = 28449388287172058LLU;
uint32_t t20 = 0U;
uint32_t x196 = UINT32_MAX;
int8_t x200 = -1;
uint64_t t24 = 1LLU;
uint32_t x220 = 661674370U;
static int32_t x237 = 765951;
uint16_t x238 = 13977U;
int32_t x246 = INT32_MIN;
uint64_t x261 = 50042841LLU;
int32_t x266 = INT32_MIN;
uint16_t x281 = 6U;
static int16_t x283 = INT16_MIN;
static int8_t x290 = -37;
static int16_t x291 = INT16_MIN;
uint64_t x293 = 1207LLU;
int64_t x299 = INT64_MIN;
volatile int32_t t34 = 7411;
int8_t x306 = INT8_MIN;
int8_t x309 = INT8_MAX;
volatile int32_t t37 = -5663;
uint32_t x340 = 217803U;
volatile uint32_t t38 = 22U;
volatile int32_t x342 = INT32_MIN;
uint32_t x349 = UINT32_MAX;
int64_t x352 = -517488524LL;
uint64_t x354 = UINT64_MAX;
volatile uint64_t t42 = 162229774758LLU;
static int16_t x371 = -1;
uint16_t x399 = UINT16_MAX;
int16_t x410 = -204;
uint8_t x415 = UINT8_MAX;
volatile int32_t t48 = 16;
uint32_t x420 = UINT32_MAX;
int64_t x422 = -1LL;
static uint8_t x425 = 15U;
volatile uint8_t x426 = UINT8_MAX;
int32_t t51 = -3272721;
volatile int32_t t52 = 3;
int8_t x448 = INT8_MIN;
volatile int8_t x459 = INT8_MAX;
int16_t x467 = INT16_MIN;
static int16_t x475 = -6;
int8_t x480 = INT8_MAX;
int32_t x486 = INT32_MIN;
static volatile int32_t t63 = 246073612;
uint32_t x510 = 15578U;
static int32_t x511 = -1;
uint32_t x518 = 2099339U;
uint32_t t67 = 7799298U;
volatile uint16_t x527 = 928U;
uint32_t t68 = 207049U;
volatile int32_t t69 = 6011;
static uint64_t x541 = 185296650650587613LLU;
int64_t x548 = 706LL;
int32_t t71 = -1;
volatile uint16_t x552 = 15U;
volatile uint64_t x565 = UINT64_MAX;
uint64_t t74 = UINT64_MAX;
int64_t x575 = INT64_MIN;
static volatile int64_t x576 = INT64_MAX;
int32_t t76 = 10822;
int32_t x583 = INT32_MIN;
int32_t x585 = 1;
volatile int32_t x593 = 1410;
static int16_t x595 = -1;
int32_t t80 = -192452445;
uint8_t x598 = 5U;
int16_t x601 = INT16_MAX;
volatile int64_t x602 = -161594LL;
uint8_t x612 = 7U;
static int32_t t84 = 64510521;
static int32_t t86 = -96;
int64_t x631 = 20164037089875LL;
int32_t t87 = -656;
static uint8_t x645 = UINT8_MAX;
volatile int32_t x647 = 4056132;
volatile uint16_t x648 = UINT16_MAX;
static uint16_t x649 = UINT16_MAX;
static volatile int64_t x650 = INT64_MAX;
volatile int64_t x652 = -22297590443891091LL;
volatile int32_t t91 = 354540;
int16_t x656 = -1;
int16_t x696 = INT16_MIN;
volatile uint64_t x718 = 4243385475375LLU;
static volatile uint32_t t99 = 180U;


void f0(void) {
	volatile int16_t x1 = INT16_MAX;
	int32_t x3 = -1;
	uint8_t x4 = 3U;
	int32_t t0 = -110135;

	t0 = (x1>>(x2<=(x3==x4)));

	if (t0 != 16383) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = 4U;
	uint64_t x10 = 95349988729765852LLU;
	int8_t x11 = -1;
	static uint8_t x12 = 12U;
	int32_t t1 = -132118427;

	t1 = (x9>>(x10<=(x11==x12)));

	if (t1 != 4) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x17 = 10U;
	uint32_t x18 = 2317U;
	int64_t x20 = INT64_MIN;
	int32_t t2 = 0;

	t2 = (x17>>(x18<=(x19==x20)));

	if (t2 != 10) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x25 = UINT16_MAX;
	volatile int8_t x26 = INT8_MAX;
	int64_t x27 = -23218936468415LL;
	uint16_t x28 = UINT16_MAX;

	t3 = (x25>>(x26<=(x27==x28)));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x29 = INT32_MAX;
	uint64_t x31 = 12119728260581387LLU;
	int8_t x32 = -1;
	volatile int32_t t4 = INT32_MAX;

	t4 = (x29>>(x30<=(x31==x32)));

	if (t4 != INT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x34 = INT8_MIN;

	t5 = (x33>>(x34<=(x35==x36)));

	if (t5 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x39 = 98U;
	uint16_t x40 = UINT16_MAX;
	int32_t t6 = 4401;

	t6 = (x37>>(x38<=(x39==x40)));

	if (t6 != 12) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x49 = UINT8_MAX;
	static uint8_t x50 = 40U;
	int64_t x51 = INT64_MAX;
	static int64_t x52 = 1080LL;
	static int32_t t7 = -237993;

	t7 = (x49>>(x50<=(x51==x52)));

	if (t7 != 255) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x66 = 3525157246537LLU;
	static uint16_t x68 = 84U;
	int32_t t8 = 28230949;

	t8 = (x65>>(x66<=(x67==x68)));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x73 = INT16_MAX;
	int32_t x74 = INT32_MAX;
	static int8_t x75 = INT8_MAX;
	int32_t t9 = 11763163;

	t9 = (x73>>(x74<=(x75==x76)));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x81 = INT16_MAX;
	int8_t x82 = 14;
	int64_t x83 = -1LL;
	uint32_t x84 = 868854U;
	int32_t t10 = -334497849;

	t10 = (x81>>(x82<=(x83==x84)));

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x87 = 0U;
	static uint64_t x88 = 10457330LLU;
	int32_t t11 = 1711603;

	t11 = (x85>>(x86<=(x87==x88)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x97 = 688538U;
	uint32_t x99 = UINT32_MAX;
	uint32_t t12 = 673177015U;

	t12 = (x97>>(x98<=(x99==x100)));

	if (t12 != 344269U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x113 = 99U;
	volatile int8_t x114 = 1;
	uint16_t x115 = 24546U;
	int64_t x116 = -1LL;
	volatile int32_t t13 = -274553;

	t13 = (x113>>(x114<=(x115==x116)));

	if (t13 != 99) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x117 = UINT16_MAX;
	int8_t x118 = INT8_MAX;
	uint32_t x119 = 725227811U;
	static int16_t x120 = 1212;
	static int32_t t14 = -389599198;

	t14 = (x117>>(x118<=(x119==x120)));

	if (t14 != 65535) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x133 = UINT16_MAX;
	uint32_t x134 = 31U;
	uint16_t x135 = 29678U;
	static uint32_t x136 = 31578532U;
	static volatile int32_t t15 = -124595044;

	t15 = (x133>>(x134<=(x135==x136)));

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x137 = UINT32_MAX;
	int64_t x138 = -9605LL;
	uint64_t x139 = 20655777LLU;
	int32_t x140 = INT32_MAX;

	t16 = (x137>>(x138<=(x139==x140)));

	if (t16 != 2147483647U) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x150 = INT64_MAX;
	uint32_t x151 = 177U;
	int8_t x152 = -1;
	uint64_t t17 = 15600361860LLU;

	t17 = (x149>>(x150<=(x151==x152)));

	if (t17 != 2146853180022221LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x154 = 3U;
	uint32_t x156 = 5U;
	volatile int32_t t18 = 787594;

	t18 = (x153>>(x154<=(x155==x156)));

	if (t18 != 52618740) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x157 = 2U;
	uint32_t x158 = UINT32_MAX;
	static int8_t x159 = INT8_MAX;
	int8_t x160 = 0;
	int32_t t19 = -15;

	t19 = (x157>>(x158<=(x159==x160)));

	if (t19 != 2) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint32_t x169 = 2513U;
	volatile int32_t x170 = INT32_MAX;
	static int8_t x171 = INT8_MIN;
	int32_t x172 = 993266;

	t20 = (x169>>(x170<=(x171==x172)));

	if (t20 != 2513U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x177 = 24U;
	static int32_t x178 = -1;
	uint16_t x179 = UINT16_MAX;
	static volatile uint16_t x180 = 340U;
	int32_t t21 = 1965;

	t21 = (x177>>(x178<=(x179==x180)));

	if (t21 != 12) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x193 = 2169;
	int8_t x194 = INT8_MIN;
	int32_t x195 = INT32_MAX;
	volatile int32_t t22 = 8999083;

	t22 = (x193>>(x194<=(x195==x196)));

	if (t22 != 1084) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x197 = UINT64_MAX;
	volatile int8_t x198 = -23;
	int64_t x199 = INT64_MIN;
	uint64_t t23 = 10262LLU;

	t23 = (x197>>(x198<=(x199==x200)));

	if (t23 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x209 = 11LLU;
	uint32_t x210 = UINT32_MAX;
	int64_t x211 = 152737952733440LL;
	int32_t x212 = -107621288;

	t24 = (x209>>(x210<=(x211==x212)));

	if (t24 != 11LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x217 = 4155U;
	static volatile int32_t x218 = INT32_MIN;
	volatile int16_t x219 = INT16_MIN;
	static uint32_t t25 = 32185U;

	t25 = (x217>>(x218<=(x219==x220)));

	if (t25 != 2077U) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x225 = INT16_MAX;
	int64_t x226 = INT64_MAX;
	int16_t x227 = 4163;
	uint64_t x228 = 1466268250828LLU;
	int32_t t26 = -36;

	t26 = (x225>>(x226<=(x227==x228)));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x239 = INT8_MIN;
	uint32_t x240 = UINT32_MAX;
	volatile int32_t t27 = 1026170793;

	t27 = (x237>>(x238<=(x239==x240)));

	if (t27 != 765951) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x245 = INT32_MAX;
	int8_t x247 = INT8_MAX;
	volatile uint32_t x248 = 74587U;
	volatile int32_t t28 = -906109;

	t28 = (x245>>(x246<=(x247==x248)));

	if (t28 != 1073741823) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x262 = INT32_MIN;
	uint8_t x263 = UINT8_MAX;
	uint16_t x264 = 595U;
	volatile uint64_t t29 = 34LLU;

	t29 = (x261>>(x262<=(x263==x264)));

	if (t29 != 25021420LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x265 = 75U;
	int8_t x267 = INT8_MIN;
	uint32_t x268 = UINT32_MAX;
	int32_t t30 = 28608;

	t30 = (x265>>(x266<=(x267==x268)));

	if (t30 != 37) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x282 = INT8_MIN;
	int64_t x284 = INT64_MIN;
	volatile int32_t t31 = -307691261;

	t31 = (x281>>(x282<=(x283==x284)));

	if (t31 != 3) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x289 = 7179U;
	int64_t x292 = 3704825630LL;
	volatile int32_t t32 = -8533426;

	t32 = (x289>>(x290<=(x291==x292)));

	if (t32 != 3589) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x294 = INT16_MIN;
	uint16_t x295 = 527U;
	int8_t x296 = 1;
	volatile uint64_t t33 = 8LLU;

	t33 = (x293>>(x294<=(x295==x296)));

	if (t33 != 603LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x297 = 806497835;
	volatile uint8_t x298 = UINT8_MAX;
	int64_t x300 = -3697207788585LL;

	t34 = (x297>>(x298<=(x299==x300)));

	if (t34 != 806497835) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x301 = 2U;
	int64_t x302 = INT64_MIN;
	static int32_t x303 = -1;
	volatile int32_t x304 = INT32_MIN;
	volatile uint32_t t35 = 143148U;

	t35 = (x301>>(x302<=(x303==x304)));

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x305 = INT8_MAX;
	uint16_t x307 = 4U;
	uint16_t x308 = 2U;
	int32_t t36 = 27290;

	t36 = (x305>>(x306<=(x307==x308)));

	if (t36 != 63) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x310 = 106032275682842LL;
	int32_t x311 = 6;
	int16_t x312 = -396;

	t37 = (x309>>(x310<=(x311==x312)));

	if (t37 != 127) { NG(); } else { ; }
	
}

void f38(void) {
	static uint32_t x337 = 71414209U;
	static int32_t x338 = -3;
	int8_t x339 = INT8_MIN;

	t38 = (x337>>(x338<=(x339==x340)));

	if (t38 != 35707104U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x341 = UINT64_MAX;
	int16_t x343 = -1;
	uint16_t x344 = 2U;
	uint64_t t39 = 1920128700943LLU;

	t39 = (x341>>(x342<=(x343==x344)));

	if (t39 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x350 = -1;
	uint16_t x351 = 7119U;
	volatile uint32_t t40 = 10U;

	t40 = (x349>>(x350<=(x351==x352)));

	if (t40 != 2147483647U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x353 = 0U;
	volatile int64_t x355 = -1LL;
	int16_t x356 = INT16_MAX;
	static int32_t t41 = 5943;

	t41 = (x353>>(x354<=(x355==x356)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x357 = 114979LLU;
	uint32_t x358 = 699U;
	int16_t x359 = -12150;
	uint8_t x360 = UINT8_MAX;

	t42 = (x357>>(x358<=(x359==x360)));

	if (t42 != 114979LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x361 = 0U;
	int32_t x362 = INT32_MAX;
	volatile uint64_t x363 = 282800165432LLU;
	int64_t x364 = INT64_MIN;
	static volatile int32_t t43 = 25;

	t43 = (x361>>(x362<=(x363==x364)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x369 = UINT64_MAX;
	uint64_t x370 = UINT64_MAX;
	volatile uint32_t x372 = UINT32_MAX;
	uint64_t t44 = UINT64_MAX;

	t44 = (x369>>(x370<=(x371==x372)));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x381 = UINT8_MAX;
	static volatile uint8_t x382 = 4U;
	int16_t x383 = INT16_MIN;
	int64_t x384 = INT64_MAX;
	static volatile int32_t t45 = 1;

	t45 = (x381>>(x382<=(x383==x384)));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x397 = 1871526721U;
	volatile uint32_t x398 = 2247U;
	int16_t x400 = -1;
	volatile uint32_t t46 = 920U;

	t46 = (x397>>(x398<=(x399==x400)));

	if (t46 != 1871526721U) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x409 = INT64_MAX;
	volatile uint16_t x411 = UINT16_MAX;
	volatile int64_t x412 = -1LL;
	volatile int64_t t47 = 5061957378382LL;

	t47 = (x409>>(x410<=(x411==x412)));

	if (t47 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x413 = INT16_MAX;
	int8_t x414 = -1;
	static int8_t x416 = -1;

	t48 = (x413>>(x414<=(x415==x416)));

	if (t48 != 16383) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x417 = INT8_MAX;
	int64_t x418 = -39919829840LL;
	static int8_t x419 = INT8_MIN;
	static volatile int32_t t49 = 5231150;

	t49 = (x417>>(x418<=(x419==x420)));

	if (t49 != 63) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x421 = UINT8_MAX;
	uint16_t x423 = 3U;
	int16_t x424 = INT16_MIN;
	static int32_t t50 = -1;

	t50 = (x421>>(x422<=(x423==x424)));

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x427 = INT8_MIN;
	uint32_t x428 = 26814637U;

	t51 = (x425>>(x426<=(x427==x428)));

	if (t51 != 15) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x433 = 35U;
	uint8_t x434 = UINT8_MAX;
	int8_t x435 = INT8_MIN;
	static int32_t x436 = 94597751;

	t52 = (x433>>(x434<=(x435==x436)));

	if (t52 != 35) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x445 = 119996LL;
	volatile int32_t x446 = INT32_MAX;
	int32_t x447 = -316;
	volatile int64_t t53 = -3983149LL;

	t53 = (x445>>(x446<=(x447==x448)));

	if (t53 != 119996LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x457 = 0LL;
	uint64_t x458 = 23LLU;
	volatile uint16_t x460 = 896U;
	volatile int64_t t54 = -70422017607LL;

	t54 = (x457>>(x458<=(x459==x460)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x461 = UINT32_MAX;
	uint8_t x462 = 0U;
	static uint32_t x463 = UINT32_MAX;
	static volatile int32_t x464 = -96;
	uint32_t t55 = 232U;

	t55 = (x461>>(x462<=(x463==x464)));

	if (t55 != 2147483647U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x465 = 13707386U;
	static int32_t x466 = INT32_MIN;
	int8_t x468 = INT8_MAX;
	volatile uint32_t t56 = 4028269U;

	t56 = (x465>>(x466<=(x467==x468)));

	if (t56 != 6853693U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x469 = INT32_MAX;
	int64_t x470 = -10401LL;
	int8_t x471 = INT8_MIN;
	uint32_t x472 = 128694U;
	static int32_t t57 = 204550071;

	t57 = (x469>>(x470<=(x471==x472)));

	if (t57 != 1073741823) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x473 = 36244257167LL;
	uint32_t x474 = 3U;
	static volatile int64_t x476 = INT64_MAX;
	volatile int64_t t58 = 466873736LL;

	t58 = (x473>>(x474<=(x475==x476)));

	if (t58 != 36244257167LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x477 = 15U;
	volatile int16_t x478 = -1;
	volatile uint8_t x479 = UINT8_MAX;
	static volatile int32_t t59 = 43650905;

	t59 = (x477>>(x478<=(x479==x480)));

	if (t59 != 7) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x481 = INT16_MAX;
	static int8_t x482 = INT8_MIN;
	int8_t x483 = -1;
	int8_t x484 = -1;
	volatile int32_t t60 = -1727;

	t60 = (x481>>(x482<=(x483==x484)));

	if (t60 != 16383) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x485 = UINT16_MAX;
	int64_t x487 = INT64_MIN;
	uint32_t x488 = 10993U;
	volatile int32_t t61 = -215483957;

	t61 = (x485>>(x486<=(x487==x488)));

	if (t61 != 32767) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x489 = 86573089;
	static volatile int8_t x490 = INT8_MIN;
	int32_t x491 = -421030;
	static uint32_t x492 = 28U;
	volatile int32_t t62 = -545;

	t62 = (x489>>(x490<=(x491==x492)));

	if (t62 != 43286544) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x493 = 1;
	int8_t x494 = -1;
	static uint8_t x495 = UINT8_MAX;
	volatile uint64_t x496 = 36631028619LLU;

	t63 = (x493>>(x494<=(x495==x496)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x497 = 42;
	uint32_t x498 = 122U;
	volatile int16_t x499 = INT16_MIN;
	int64_t x500 = INT64_MAX;
	static volatile int32_t t64 = -654185;

	t64 = (x497>>(x498<=(x499==x500)));

	if (t64 != 42) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x509 = 77U;
	uint64_t x512 = 111891350868LLU;
	int32_t t65 = 15;

	t65 = (x509>>(x510<=(x511==x512)));

	if (t65 != 77) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x517 = UINT32_MAX;
	static int16_t x519 = INT16_MAX;
	int64_t x520 = INT64_MAX;
	uint32_t t66 = UINT32_MAX;

	t66 = (x517>>(x518<=(x519==x520)));

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x521 = UINT32_MAX;
	static volatile int32_t x522 = -580925;
	static int32_t x523 = -1;
	uint8_t x524 = 10U;

	t67 = (x521>>(x522<=(x523==x524)));

	if (t67 != 2147483647U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x525 = 15896U;
	int64_t x526 = INT64_MIN;
	volatile uint8_t x528 = 13U;

	t68 = (x525>>(x526<=(x527==x528)));

	if (t68 != 7948U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x533 = UINT8_MAX;
	uint32_t x534 = 58U;
	int8_t x535 = 5;
	static int32_t x536 = INT32_MIN;

	t69 = (x533>>(x534<=(x535==x536)));

	if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x542 = 4670;
	int8_t x543 = INT8_MAX;
	static volatile uint16_t x544 = 6375U;
	volatile uint64_t t70 = 3876533000712046056LLU;

	t70 = (x541>>(x542<=(x543==x544)));

	if (t70 != 185296650650587613LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x545 = 24;
	uint64_t x546 = UINT64_MAX;
	int32_t x547 = INT32_MIN;

	t71 = (x545>>(x546<=(x547==x548)));

	if (t71 != 24) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x549 = 6U;
	volatile int32_t x550 = INT32_MIN;
	int16_t x551 = -1;
	static volatile int32_t t72 = 229013196;

	t72 = (x549>>(x550<=(x551==x552)));

	if (t72 != 3) { NG(); } else { ; }
	
}

void f73(void) {
	static uint32_t x557 = UINT32_MAX;
	int16_t x558 = -1;
	static uint8_t x559 = 20U;
	int64_t x560 = INT64_MIN;
	volatile uint32_t t73 = 21U;

	t73 = (x557>>(x558<=(x559==x560)));

	if (t73 != 2147483647U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x566 = UINT32_MAX;
	int16_t x567 = 61;
	int32_t x568 = -1565;

	t74 = (x565>>(x566<=(x567==x568)));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x569 = 16825;
	volatile uint64_t x570 = 1096453577480832015LLU;
	static uint8_t x571 = UINT8_MAX;
	int64_t x572 = -1LL;
	volatile int32_t t75 = -37;

	t75 = (x569>>(x570<=(x571==x572)));

	if (t75 != 16825) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x573 = 30746U;
	int16_t x574 = -3423;

	t76 = (x573>>(x574<=(x575==x576)));

	if (t76 != 15373) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x581 = 5924927;
	volatile int64_t x582 = INT64_MIN;
	int64_t x584 = INT64_MIN;
	static volatile int32_t t77 = -1565;

	t77 = (x581>>(x582<=(x583==x584)));

	if (t77 != 2962463) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x586 = 1U;
	static volatile int16_t x587 = INT16_MIN;
	int8_t x588 = -1;
	int32_t t78 = 114;

	t78 = (x585>>(x586<=(x587==x588)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x589 = INT32_MAX;
	static uint32_t x590 = UINT32_MAX;
	int32_t x591 = INT32_MIN;
	uint16_t x592 = 6U;
	volatile int32_t t79 = INT32_MAX;

	t79 = (x589>>(x590<=(x591==x592)));

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x594 = INT16_MAX;
	uint64_t x596 = 21882134LLU;

	t80 = (x593>>(x594<=(x595==x596)));

	if (t80 != 1410) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x597 = 1310074U;
	uint8_t x599 = 10U;
	static int32_t x600 = INT32_MAX;
	uint32_t t81 = 1451709U;

	t81 = (x597>>(x598<=(x599==x600)));

	if (t81 != 1310074U) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x603 = INT32_MIN;
	static int8_t x604 = 0;
	int32_t t82 = 0;

	t82 = (x601>>(x602<=(x603==x604)));

	if (t82 != 16383) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x609 = 13U;
	int16_t x610 = 0;
	int16_t x611 = -1;
	static volatile int32_t t83 = -9;

	t83 = (x609>>(x610<=(x611==x612)));

	if (t83 != 6) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x613 = INT32_MAX;
	volatile int64_t x614 = -30784066LL;
	int8_t x615 = 29;
	volatile uint16_t x616 = 1579U;

	t84 = (x613>>(x614<=(x615==x616)));

	if (t84 != 1073741823) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x617 = INT8_MAX;
	int16_t x618 = 5095;
	static int16_t x619 = INT16_MAX;
	int8_t x620 = -1;
	int32_t t85 = 275;

	t85 = (x617>>(x618<=(x619==x620)));

	if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x621 = 237635;
	volatile int32_t x622 = INT32_MAX;
	int64_t x623 = -114831555547LL;
	static int64_t x624 = INT64_MIN;

	t86 = (x621>>(x622<=(x623==x624)));

	if (t86 != 237635) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x629 = INT32_MAX;
	int8_t x630 = -1;
	volatile uint16_t x632 = 242U;

	t87 = (x629>>(x630<=(x631==x632)));

	if (t87 != 1073741823) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x633 = 259959LL;
	static uint32_t x634 = UINT32_MAX;
	static volatile int16_t x635 = -1;
	int32_t x636 = -8565;
	int64_t t88 = 13974337155LL;

	t88 = (x633>>(x634<=(x635==x636)));

	if (t88 != 259959LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x641 = INT16_MAX;
	int16_t x642 = INT16_MIN;
	uint64_t x643 = UINT64_MAX;
	int8_t x644 = INT8_MIN;
	static int32_t t89 = -1;

	t89 = (x641>>(x642<=(x643==x644)));

	if (t89 != 16383) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x646 = UINT32_MAX;
	volatile int32_t t90 = 1050836;

	t90 = (x645>>(x646<=(x647==x648)));

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x651 = INT16_MAX;

	t91 = (x649>>(x650<=(x651==x652)));

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x653 = UINT32_MAX;
	int32_t x654 = INT32_MIN;
	int64_t x655 = INT64_MIN;
	uint32_t t92 = 21620690U;

	t92 = (x653>>(x654<=(x655==x656)));

	if (t92 != 2147483647U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x661 = 2008479446745LLU;
	uint32_t x662 = 607U;
	volatile int16_t x663 = INT16_MAX;
	volatile int64_t x664 = INT64_MAX;
	uint64_t t93 = 721103805966827636LLU;

	t93 = (x661>>(x662<=(x663==x664)));

	if (t93 != 2008479446745LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x665 = UINT8_MAX;
	static volatile uint16_t x666 = 3U;
	int8_t x667 = 4;
	uint64_t x668 = 2347206LLU;
	int32_t t94 = 44386730;

	t94 = (x665>>(x666<=(x667==x668)));

	if (t94 != 255) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x669 = UINT16_MAX;
	uint16_t x670 = UINT16_MAX;
	volatile int64_t x671 = INT64_MIN;
	volatile int8_t x672 = INT8_MIN;
	volatile int32_t t95 = 11366;

	t95 = (x669>>(x670<=(x671==x672)));

	if (t95 != 65535) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x677 = 58U;
	int32_t x678 = INT32_MIN;
	uint64_t x679 = 30959919421LLU;
	uint64_t x680 = 115940509616677684LLU;
	int32_t t96 = 5;

	t96 = (x677>>(x678<=(x679==x680)));

	if (t96 != 29) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x685 = 5428918774375LLU;
	uint64_t x686 = UINT64_MAX;
	int16_t x687 = 15964;
	uint32_t x688 = 463258U;
	uint64_t t97 = 195819901587LLU;

	t97 = (x685>>(x686<=(x687==x688)));

	if (t97 != 5428918774375LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x693 = 0;
	int8_t x694 = INT8_MAX;
	volatile int64_t x695 = INT64_MIN;
	volatile int32_t t98 = -39827;

	t98 = (x693>>(x694<=(x695==x696)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x717 = 123U;
	int64_t x719 = INT64_MIN;
	int32_t x720 = INT32_MAX;

	t99 = (x717>>(x718<=(x719==x720)));

	if (t99 != 123U) { NG(); } else { ; }
	
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

