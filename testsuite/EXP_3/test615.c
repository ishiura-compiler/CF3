#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x14 = 5892548U;
int16_t x15 = INT16_MIN;
volatile uint32_t x17 = 1366084U;
volatile int16_t x19 = -3675;
int64_t t2 = 5906523787018462LL;
static int32_t x30 = INT32_MIN;
volatile int16_t x35 = INT16_MAX;
int32_t t6 = 0;
static int64_t x55 = INT64_MAX;
uint8_t x64 = UINT8_MAX;
int16_t x74 = 0;
int8_t x79 = -1;
int8_t x80 = -1;
volatile uint64_t t12 = 1087631392900876307LLU;
static uint64_t x100 = 12448759LLU;
volatile uint64_t t13 = 31595LLU;
volatile int64_t x103 = 3240493370793493LL;
volatile int16_t x104 = -165;
uint8_t x105 = UINT8_MAX;
uint64_t x129 = 872327496364LLU;
int64_t x130 = 114LL;
volatile uint16_t x131 = 3818U;
volatile int32_t t16 = -2;
int16_t x133 = 6;
static uint8_t x148 = 1U;
int32_t x152 = -1;
volatile int32_t t20 = 677845411;
int8_t x155 = -1;
int64_t x161 = -64924LL;
uint32_t x164 = 829U;
uint8_t x169 = 127U;
int16_t x195 = INT16_MIN;
volatile int32_t t27 = 62803;
uint8_t x201 = 2U;
int64_t x204 = -1LL;
volatile int32_t t30 = 42;
uint8_t x237 = 3U;
uint8_t x240 = UINT8_MAX;
int64_t t32 = 68364745199337LL;
int8_t x245 = 1;
int8_t x260 = INT8_MAX;
int32_t x273 = 1665013;
int32_t x275 = INT32_MIN;
int32_t x286 = -14;
int16_t x301 = 238;
int8_t x329 = INT8_MIN;
int64_t x331 = INT64_MAX;
static volatile int64_t t43 = -458239862850128347LL;
int8_t x347 = -1;
static volatile uint8_t x352 = 40U;
volatile int32_t t45 = -192;
volatile int64_t x353 = INT64_MAX;
volatile int8_t x375 = INT8_MAX;
int32_t x379 = INT32_MIN;
uint16_t x382 = UINT16_MAX;
int64_t x383 = INT64_MAX;
uint64_t x412 = 27946111LLU;
volatile uint64_t x427 = UINT64_MAX;
volatile int32_t x440 = 24826739;
int32_t x474 = -1;
volatile int32_t t58 = -19;
volatile uint64_t x487 = 804LLU;
volatile int64_t x503 = -1LL;
static volatile int32_t x504 = -1;
volatile int64_t t61 = -49518590769827LL;
static int8_t x513 = -1;
volatile int32_t t65 = -659;
volatile int32_t x531 = INT32_MIN;
static uint8_t x558 = 6U;
volatile int32_t t69 = 62206036;
int16_t x564 = INT16_MIN;
static int64_t x577 = -1LL;
uint64_t t72 = 223205773243LLU;
int32_t x621 = -2336364;
static int32_t x623 = INT32_MIN;
int16_t x628 = 2;
int64_t x632 = -1LL;
static volatile int32_t x637 = INT32_MIN;
volatile int16_t x638 = -10;
uint8_t x640 = 4U;
volatile int8_t x649 = -3;
static int32_t x650 = INT32_MIN;
static int32_t x683 = -157560;
int64_t t82 = -2417276871336556LL;
static int16_t x711 = INT16_MIN;
int32_t x712 = -6;
int32_t t83 = -4;
volatile int32_t t85 = -551908;
uint8_t x721 = 46U;
static volatile int64_t x722 = INT64_MIN;
int8_t x725 = INT8_MIN;
static int32_t x727 = INT32_MIN;
volatile uint8_t x728 = 1U;
int32_t t87 = 472535561;
int32_t x732 = -12;
volatile int16_t x766 = -1;
uint64_t x781 = 691188227055LLU;
int64_t x783 = INT64_MIN;
uint64_t t93 = 5756339641536LLU;
volatile int8_t x798 = -19;
volatile int16_t x802 = INT16_MIN;
uint16_t x804 = 13U;
volatile int64_t x817 = INT64_MAX;
int32_t x820 = -1;
int32_t x827 = INT32_MAX;
uint8_t x828 = 51U;
int16_t x852 = -2;


void f0(void) {
	static uint32_t x13 = UINT32_MAX;
	static int8_t x16 = INT8_MIN;
	int32_t t0 = -196538213;

	t0 = ((x13<x14)/(x15/x16));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x18 = INT8_MIN;
	static uint8_t x20 = 51U;
	static int32_t t1 = -135;

	t1 = ((x17<x18)/(x19/x20));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x21 = 168215417;
	int32_t x22 = 1;
	uint16_t x23 = 8091U;
	static int64_t x24 = -1LL;

	t2 = ((x21<x22)/(x23/x24));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x25 = INT8_MAX;
	volatile int16_t x26 = INT16_MIN;
	volatile int32_t x27 = INT32_MIN;
	static int8_t x28 = INT8_MIN;
	int32_t t3 = -17457;

	t3 = ((x25<x26)/(x27/x28));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x29 = -6333588;
	static int32_t x31 = -1;
	uint64_t x32 = UINT64_MAX;
	static uint64_t t4 = 33536020LLU;

	t4 = ((x29<x30)/(x31/x32));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x33 = -1;
	uint16_t x34 = 198U;
	int32_t x36 = -1;
	volatile int32_t t5 = 15705;

	t5 = ((x33<x34)/(x35/x36));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x49 = INT32_MIN;
	volatile int64_t x50 = 1453LL;
	int32_t x51 = INT32_MAX;
	static int32_t x52 = 4200;

	t6 = ((x49<x50)/(x51/x52));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x53 = 569U;
	uint32_t x54 = 15217U;
	int32_t x56 = 1;
	volatile int64_t t7 = -3982656494LL;

	t7 = ((x53<x54)/(x55/x56));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x61 = -1;
	static int32_t x62 = -657626876;
	uint32_t x63 = 27213U;
	volatile uint32_t t8 = 20904878U;

	t8 = ((x61<x62)/(x63/x64));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x73 = 1101743818567561365LL;
	int16_t x75 = -1;
	static uint32_t x76 = 1849885736U;
	volatile uint32_t t9 = 27313153U;

	t9 = ((x73<x74)/(x75/x76));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x77 = 6650188U;
	volatile int32_t x78 = INT32_MAX;
	static volatile int32_t t10 = 7;

	t10 = ((x77<x78)/(x79/x80));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x85 = INT16_MIN;
	int8_t x86 = INT8_MIN;
	static volatile int8_t x87 = INT8_MIN;
	int32_t x88 = -1;
	int32_t t11 = 13;

	t11 = ((x85<x86)/(x87/x88));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x89 = INT32_MAX;
	static int8_t x90 = 2;
	int64_t x91 = INT64_MAX;
	static uint64_t x92 = 7110066LLU;

	t12 = ((x89<x90)/(x91/x92));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x97 = 2U;
	static int64_t x98 = INT64_MIN;
	volatile int32_t x99 = INT32_MIN;

	t13 = ((x97<x98)/(x99/x100));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x101 = -922;
	uint64_t x102 = 10LLU;
	volatile int64_t t14 = 48657LL;

	t14 = ((x101<x102)/(x103/x104));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x106 = 222U;
	int32_t x107 = -1;
	uint32_t x108 = UINT32_MAX;
	uint32_t t15 = 856682U;

	t15 = ((x105<x106)/(x107/x108));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x132 = -1;

	t16 = ((x129<x130)/(x131/x132));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x134 = INT8_MIN;
	int64_t x135 = -4745879374413LL;
	volatile uint32_t x136 = 827U;
	volatile int64_t t17 = 920LL;

	t17 = ((x133<x134)/(x135/x136));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x141 = INT64_MIN;
	int8_t x142 = -1;
	static int32_t x143 = INT32_MIN;
	static uint32_t x144 = 29217585U;
	uint32_t t18 = 111264U;

	t18 = ((x141<x142)/(x143/x144));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x145 = INT32_MIN;
	int32_t x146 = INT32_MIN;
	int64_t x147 = -850575101LL;
	volatile int64_t t19 = -3559198971357373306LL;

	t19 = ((x145<x146)/(x147/x148));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x149 = INT64_MAX;
	static uint16_t x150 = UINT16_MAX;
	int32_t x151 = -1;

	t20 = ((x149<x150)/(x151/x152));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x153 = -4147237;
	static int32_t x154 = -446;
	static volatile uint32_t x156 = UINT32_MAX;
	volatile uint32_t t21 = 453970543U;

	t21 = ((x153<x154)/(x155/x156));

	if (t21 != 1U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x157 = UINT16_MAX;
	uint64_t x158 = 24597883LLU;
	int64_t x159 = INT64_MIN;
	uint8_t x160 = 4U;
	volatile int64_t t22 = -945254509LL;

	t22 = ((x157<x158)/(x159/x160));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x162 = INT32_MAX;
	int16_t x163 = INT16_MIN;
	uint32_t t23 = 207U;

	t23 = ((x161<x162)/(x163/x164));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x170 = UINT16_MAX;
	uint16_t x171 = 6U;
	int16_t x172 = -1;
	static int32_t t24 = -13382;

	t24 = ((x169<x170)/(x171/x172));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x181 = INT8_MIN;
	int64_t x182 = INT64_MAX;
	uint16_t x183 = 9832U;
	static int16_t x184 = -1;
	int32_t t25 = -162885;

	t25 = ((x181<x182)/(x183/x184));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x189 = 794214429;
	int16_t x190 = INT16_MAX;
	static uint32_t x191 = UINT32_MAX;
	int32_t x192 = 6215;
	static volatile uint32_t t26 = 4478U;

	t26 = ((x189<x190)/(x191/x192));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int16_t x193 = INT16_MAX;
	int8_t x194 = INT8_MAX;
	static uint16_t x196 = 12U;

	t27 = ((x193<x194)/(x195/x196));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x197 = INT16_MAX;
	uint16_t x198 = UINT16_MAX;
	uint8_t x199 = UINT8_MAX;
	volatile int8_t x200 = INT8_MIN;
	volatile int32_t t28 = -25949;

	t28 = ((x197<x198)/(x199/x200));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x202 = INT16_MIN;
	int8_t x203 = INT8_MIN;
	int64_t t29 = 53280799LL;

	t29 = ((x201<x202)/(x203/x204));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x221 = INT8_MIN;
	volatile uint64_t x222 = UINT64_MAX;
	int32_t x223 = INT32_MAX;
	int8_t x224 = 55;

	t30 = ((x221<x222)/(x223/x224));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x229 = INT32_MIN;
	uint64_t x230 = 9005900007LLU;
	volatile int8_t x231 = 23;
	uint8_t x232 = 5U;
	volatile int32_t t31 = -236436;

	t31 = ((x229<x230)/(x231/x232));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x238 = INT8_MIN;
	int64_t x239 = INT64_MIN;

	t32 = ((x237<x238)/(x239/x240));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x241 = 5357;
	int8_t x242 = -1;
	static int64_t x243 = -1217LL;
	int8_t x244 = INT8_MIN;
	volatile int64_t t33 = -4321962LL;

	t33 = ((x241<x242)/(x243/x244));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x246 = 1U;
	volatile uint64_t x247 = 19440560808249LLU;
	volatile uint32_t x248 = 158U;
	volatile uint64_t t34 = 3400LLU;

	t34 = ((x245<x246)/(x247/x248));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x257 = UINT8_MAX;
	int8_t x258 = INT8_MIN;
	static int16_t x259 = INT16_MIN;
	int32_t t35 = -331;

	t35 = ((x257<x258)/(x259/x260));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x261 = INT64_MIN;
	static volatile uint32_t x262 = 70178273U;
	int64_t x263 = INT64_MIN;
	uint32_t x264 = UINT32_MAX;
	int64_t t36 = 0LL;

	t36 = ((x261<x262)/(x263/x264));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x274 = -3;
	uint16_t x276 = UINT16_MAX;
	volatile int32_t t37 = 797;

	t37 = ((x273<x274)/(x275/x276));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x277 = -1;
	static int32_t x278 = INT32_MIN;
	int16_t x279 = -5012;
	uint16_t x280 = 4U;
	static int32_t t38 = 479;

	t38 = ((x277<x278)/(x279/x280));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x285 = INT32_MIN;
	uint16_t x287 = 118U;
	int16_t x288 = 3;
	static volatile int32_t t39 = -44;

	t39 = ((x285<x286)/(x287/x288));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x289 = INT64_MAX;
	static int32_t x290 = INT32_MIN;
	int32_t x291 = INT32_MAX;
	int16_t x292 = -24;
	int32_t t40 = -229156;

	t40 = ((x289<x290)/(x291/x292));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x302 = -1;
	static volatile int32_t x303 = -8;
	int32_t x304 = -1;
	volatile int32_t t41 = -10218;

	t41 = ((x301<x302)/(x303/x304));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x325 = INT16_MIN;
	int16_t x326 = 15081;
	int8_t x327 = -1;
	static uint64_t x328 = UINT64_MAX;
	uint64_t t42 = 3540130806419LLU;

	t42 = ((x325<x326)/(x327/x328));

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x330 = -447030754LL;
	int16_t x332 = -103;

	t43 = ((x329<x330)/(x331/x332));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x345 = INT32_MAX;
	uint64_t x346 = 138544LLU;
	uint64_t x348 = UINT64_MAX;
	static uint64_t t44 = 14624564874402LLU;

	t44 = ((x345<x346)/(x347/x348));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x349 = INT8_MIN;
	int32_t x350 = -1;
	int32_t x351 = 55809498;

	t45 = ((x349<x350)/(x351/x352));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile uint32_t x354 = UINT32_MAX;
	int16_t x355 = -1;
	uint32_t x356 = 210U;
	uint32_t t46 = 5220252U;

	t46 = ((x353<x354)/(x355/x356));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x357 = UINT8_MAX;
	uint8_t x358 = 53U;
	uint64_t x359 = 94458LLU;
	static volatile int16_t x360 = 4951;
	volatile uint64_t t47 = 16943LLU;

	t47 = ((x357<x358)/(x359/x360));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x373 = -1;
	uint64_t x374 = 38585280431857238LLU;
	static int32_t x376 = -1;
	volatile int32_t t48 = -6716;

	t48 = ((x373<x374)/(x375/x376));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x377 = INT8_MIN;
	volatile int32_t x378 = -1;
	static uint16_t x380 = 5526U;
	volatile int32_t t49 = -37;

	t49 = ((x377<x378)/(x379/x380));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x381 = -52;
	int16_t x384 = INT16_MIN;
	int64_t t50 = -18430269473548194LL;

	t50 = ((x381<x382)/(x383/x384));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x409 = 6018U;
	int32_t x410 = 15102;
	int32_t x411 = -7;
	volatile uint64_t t51 = 0LLU;

	t51 = ((x409<x410)/(x411/x412));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x413 = INT8_MIN;
	volatile int32_t x414 = -1;
	static int8_t x415 = INT8_MIN;
	uint32_t x416 = 2U;
	static volatile uint32_t t52 = 43976U;

	t52 = ((x413<x414)/(x415/x416));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x425 = -1;
	static int32_t x426 = 341352;
	int64_t x428 = 239LL;
	static uint64_t t53 = 815756691124323LLU;

	t53 = ((x425<x426)/(x427/x428));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x437 = -1;
	uint32_t x438 = 285897U;
	int64_t x439 = INT64_MIN;
	int64_t t54 = 16LL;

	t54 = ((x437<x438)/(x439/x440));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x445 = INT8_MIN;
	static volatile int8_t x446 = -18;
	int32_t x447 = INT32_MIN;
	int16_t x448 = INT16_MAX;
	volatile int32_t t55 = 1785473;

	t55 = ((x445<x446)/(x447/x448));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x465 = -1;
	int64_t x466 = 7LL;
	int8_t x467 = INT8_MIN;
	static int8_t x468 = INT8_MAX;
	volatile int32_t t56 = 1924493;

	t56 = ((x465<x466)/(x467/x468));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x469 = 7234U;
	static int8_t x470 = -1;
	int16_t x471 = 1624;
	int64_t x472 = -1LL;
	int64_t t57 = -3514LL;

	t57 = ((x469<x470)/(x471/x472));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x473 = 443U;
	static int16_t x475 = INT16_MIN;
	volatile int32_t x476 = 8821;

	t58 = ((x473<x474)/(x475/x476));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x481 = INT8_MAX;
	volatile uint8_t x482 = 82U;
	volatile int64_t x483 = INT64_MAX;
	int32_t x484 = INT32_MIN;
	int64_t t59 = -238877487883LL;

	t59 = ((x481<x482)/(x483/x484));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x485 = UINT64_MAX;
	uint16_t x486 = 978U;
	uint8_t x488 = UINT8_MAX;
	volatile uint64_t t60 = 277821411998849550LLU;

	t60 = ((x485<x486)/(x487/x488));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x501 = -1;
	static int64_t x502 = 2073LL;

	t61 = ((x501<x502)/(x503/x504));

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x505 = 2U;
	static volatile uint32_t x506 = 200U;
	volatile int8_t x507 = INT8_MIN;
	static volatile int8_t x508 = INT8_MIN;
	static int32_t t62 = 28;

	t62 = ((x505<x506)/(x507/x508));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x514 = 481005997U;
	int64_t x515 = INT64_MIN;
	static int64_t x516 = 22884366540LL;
	volatile int64_t t63 = -5LL;

	t63 = ((x513<x514)/(x515/x516));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x517 = INT64_MIN;
	int8_t x518 = INT8_MIN;
	int64_t x519 = 295161LL;
	int16_t x520 = -4328;
	volatile int64_t t64 = -7280LL;

	t64 = ((x517<x518)/(x519/x520));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x525 = 6222778179LLU;
	int32_t x526 = INT32_MIN;
	int16_t x527 = INT16_MAX;
	int8_t x528 = 1;

	t65 = ((x525<x526)/(x527/x528));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x529 = INT32_MIN;
	static uint64_t x530 = 2000LLU;
	volatile int8_t x532 = INT8_MIN;
	volatile int32_t t66 = -2;

	t66 = ((x529<x530)/(x531/x532));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x537 = -1174;
	static int8_t x538 = INT8_MAX;
	uint64_t x539 = 38277398109546LLU;
	uint32_t x540 = 716532332U;
	volatile uint64_t t67 = 47082LLU;

	t67 = ((x537<x538)/(x539/x540));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x541 = INT8_MIN;
	uint32_t x542 = 115U;
	volatile uint64_t x543 = 510534444032710LLU;
	uint8_t x544 = UINT8_MAX;
	static uint64_t t68 = 2826LLU;

	t68 = ((x541<x542)/(x543/x544));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x557 = -1;
	int32_t x559 = INT32_MIN;
	volatile int8_t x560 = 7;

	t69 = ((x557<x558)/(x559/x560));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x561 = -1;
	int32_t x562 = 1;
	volatile int32_t x563 = INT32_MAX;
	volatile int32_t t70 = -312;

	t70 = ((x561<x562)/(x563/x564));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x578 = INT32_MIN;
	uint64_t x579 = 222111872626456LLU;
	uint16_t x580 = UINT16_MAX;
	static volatile uint64_t t71 = 2800794671773694LLU;

	t71 = ((x577<x578)/(x579/x580));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x609 = -396632;
	int32_t x610 = INT32_MIN;
	int16_t x611 = -353;
	uint64_t x612 = 5813545722559LLU;

	t72 = ((x609<x610)/(x611/x612));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x617 = 5358LL;
	int32_t x618 = 461;
	static int8_t x619 = INT8_MIN;
	uint64_t x620 = 809024852936958LLU;
	uint64_t t73 = 699222LLU;

	t73 = ((x617<x618)/(x619/x620));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x622 = 5U;
	volatile uint64_t x624 = 435702725905561392LLU;
	static volatile uint64_t t74 = 5LLU;

	t74 = ((x621<x622)/(x623/x624));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x625 = UINT64_MAX;
	static uint64_t x626 = 928469LLU;
	volatile int64_t x627 = -107002LL;
	static int64_t t75 = -1243113048445LL;

	t75 = ((x625<x626)/(x627/x628));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x629 = 881;
	int16_t x630 = INT16_MIN;
	uint32_t x631 = UINT32_MAX;
	int64_t t76 = 8274193265261LL;

	t76 = ((x629<x630)/(x631/x632));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x633 = INT64_MAX;
	volatile uint64_t x634 = 2038969318LLU;
	static int8_t x635 = INT8_MAX;
	int16_t x636 = -1;
	volatile int32_t t77 = -495560543;

	t77 = ((x633<x634)/(x635/x636));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x639 = -10644864LL;
	int64_t t78 = 2LL;

	t78 = ((x637<x638)/(x639/x640));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x651 = INT16_MIN;
	int32_t x652 = 1271;
	volatile int32_t t79 = -350;

	t79 = ((x649<x650)/(x651/x652));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x669 = INT32_MIN;
	static volatile int64_t x670 = INT64_MIN;
	int64_t x671 = INT64_MIN;
	volatile int16_t x672 = INT16_MIN;
	int64_t t80 = -51651LL;

	t80 = ((x669<x670)/(x671/x672));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x681 = 27LL;
	int64_t x682 = -1LL;
	static int8_t x684 = -1;
	volatile int32_t t81 = 1;

	t81 = ((x681<x682)/(x683/x684));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x697 = INT8_MIN;
	static uint64_t x698 = 132LLU;
	static int64_t x699 = 477165036335LL;
	uint32_t x700 = 3480U;

	t82 = ((x697<x698)/(x699/x700));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x709 = UINT16_MAX;
	int8_t x710 = 3;

	t83 = ((x709<x710)/(x711/x712));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x713 = UINT8_MAX;
	static int8_t x714 = INT8_MIN;
	int32_t x715 = INT32_MIN;
	int8_t x716 = -58;
	volatile int32_t t84 = -130815;

	t84 = ((x713<x714)/(x715/x716));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x717 = UINT64_MAX;
	int16_t x718 = INT16_MIN;
	static int16_t x719 = INT16_MIN;
	static int32_t x720 = -1;

	t85 = ((x717<x718)/(x719/x720));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x723 = -1;
	int16_t x724 = -1;
	static volatile int32_t t86 = 5;

	t86 = ((x721<x722)/(x723/x724));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x726 = -1;

	t87 = ((x725<x726)/(x727/x728));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x729 = INT64_MAX;
	int16_t x730 = INT16_MIN;
	static volatile int8_t x731 = INT8_MIN;
	volatile int32_t t88 = -6364834;

	t88 = ((x729<x730)/(x731/x732));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x753 = 0;
	int16_t x754 = 2159;
	static volatile int16_t x755 = -4160;
	uint8_t x756 = 117U;
	int32_t t89 = 443004644;

	t89 = ((x753<x754)/(x755/x756));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x765 = INT16_MIN;
	static uint64_t x767 = UINT64_MAX;
	uint8_t x768 = 3U;
	volatile uint64_t t90 = 229169LLU;

	t90 = ((x765<x766)/(x767/x768));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x769 = INT8_MIN;
	static int16_t x770 = -1;
	uint64_t x771 = UINT64_MAX;
	uint32_t x772 = 211U;
	volatile uint64_t t91 = 3250034555896LLU;

	t91 = ((x769<x770)/(x771/x772));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x782 = 23U;
	uint64_t x784 = 380976565LLU;
	volatile uint64_t t92 = 14LLU;

	t92 = ((x781<x782)/(x783/x784));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x785 = INT64_MAX;
	volatile int16_t x786 = INT16_MIN;
	uint64_t x787 = 10374634089LLU;
	uint64_t x788 = 949LLU;

	t93 = ((x785<x786)/(x787/x788));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int16_t x797 = -1;
	int16_t x799 = -1;
	uint64_t x800 = 388100139579LLU;
	volatile uint64_t t94 = 22375957684962834LLU;

	t94 = ((x797<x798)/(x799/x800));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x801 = 44390316778106691LLU;
	static uint64_t x803 = UINT64_MAX;
	uint64_t t95 = 74957932647077437LLU;

	t95 = ((x801<x802)/(x803/x804));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x818 = -6398;
	int64_t x819 = INT64_MAX;
	int64_t t96 = 2777747389606769960LL;

	t96 = ((x817<x818)/(x819/x820));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x821 = INT32_MAX;
	uint32_t x822 = 2961U;
	int64_t x823 = INT64_MIN;
	int32_t x824 = INT32_MAX;
	int64_t t97 = -654217LL;

	t97 = ((x821<x822)/(x823/x824));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x825 = UINT8_MAX;
	volatile uint8_t x826 = 59U;
	volatile int32_t t98 = 490972;

	t98 = ((x825<x826)/(x827/x828));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x849 = 9256119;
	int64_t x850 = -6037835200663LL;
	static uint8_t x851 = UINT8_MAX;
	static int32_t t99 = 42555427;

	t99 = ((x849<x850)/(x851/x852));

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

