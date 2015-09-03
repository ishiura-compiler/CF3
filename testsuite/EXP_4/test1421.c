#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x11 = 126578LLU;
int8_t x12 = INT8_MAX;
int64_t x16 = -1952750LL;
int64_t x39 = INT64_MAX;
volatile int32_t t2 = -33067990;
volatile uint32_t x48 = 167602U;
volatile int32_t t3 = 1;
volatile uint8_t x53 = 0U;
int32_t x67 = 25324;
int64_t x91 = 8254109846631LL;
int64_t t7 = 293188271634334856LL;
uint32_t x109 = 6U;
int32_t x111 = -1099;
static volatile uint64_t x116 = 9LLU;
int8_t x123 = INT8_MAX;
int8_t x130 = 5;
static uint8_t x153 = UINT8_MAX;
int16_t x154 = INT16_MAX;
uint32_t x156 = 104414U;
static int8_t x160 = 11;
static int32_t x164 = -2;
int8_t x168 = 0;
int64_t t21 = 87968LL;
uint32_t x181 = UINT32_MAX;
uint64_t x200 = UINT64_MAX;
static uint8_t x222 = 8U;
uint64_t x223 = 182385LLU;
static int8_t x224 = INT8_MIN;
static volatile int32_t t28 = -322;
static int8_t x231 = INT8_MAX;
int16_t x237 = -1;
uint64_t t31 = 820738LLU;
int32_t x249 = INT32_MIN;
uint16_t x250 = 7U;
int32_t t32 = -116892865;
uint16_t x263 = 17283U;
volatile uint32_t t34 = 4U;
volatile int32_t t35 = -229575259;
uint8_t x287 = UINT8_MAX;
uint64_t x290 = 21402264296827LLU;
uint8_t x291 = 62U;
volatile int32_t x296 = INT32_MIN;
uint16_t x301 = 3U;
int32_t x307 = -25677;
uint16_t x325 = UINT16_MAX;
volatile int8_t x326 = INT8_MAX;
static volatile uint8_t x327 = 0U;
int8_t x339 = INT8_MIN;
volatile uint32_t x350 = UINT32_MAX;
static volatile int8_t x364 = -1;
int64_t t46 = -890155767785306LL;
static uint64_t x378 = 138408614151LLU;
uint32_t x379 = 21U;
uint32_t x383 = 31041U;
uint64_t t49 = 2347079994951LLU;
volatile int64_t t50 = 283LL;
uint32_t x393 = 263U;
uint16_t x394 = 898U;
int8_t x411 = INT8_MIN;
int64_t t54 = 5216332682458351LL;
volatile uint64_t t56 = 1LLU;
int32_t x438 = 1;
static int32_t t57 = -43;
volatile int64_t t58 = 26915492579LL;
int32_t x455 = 0;
static int32_t x456 = -1;
int32_t x458 = 1;
int32_t t60 = -18;
int16_t x471 = INT16_MIN;
int64_t x509 = -1LL;
static int64_t t65 = 1856LL;
int64_t x521 = -159933LL;
int8_t x524 = INT8_MIN;
volatile int64_t x536 = 144459342085475054LL;
uint8_t x542 = 50U;
int32_t x543 = 31900;
int32_t x545 = INT32_MIN;
volatile uint32_t t70 = 27U;
int16_t x567 = INT16_MIN;
int64_t x568 = INT64_MIN;
volatile uint64_t t72 = 1920326LLU;
volatile uint32_t x583 = 1891U;
uint64_t t74 = 5310976700164409LLU;
uint64_t x588 = 13719127333LLU;
int8_t x592 = INT8_MAX;
uint64_t x614 = 43LLU;
int64_t x615 = INT64_MIN;
int32_t x617 = 190;
static uint16_t x625 = 500U;
int32_t x653 = 403861556;
volatile int64_t x660 = -1LL;
uint64_t t84 = 5999525931270255155LLU;
static uint8_t x665 = UINT8_MAX;
volatile uint32_t x668 = 10563U;
volatile int8_t x680 = -50;
volatile uint32_t x685 = UINT32_MAX;
int8_t x688 = INT8_MIN;
int64_t x695 = INT64_MAX;
int32_t x701 = -705;
volatile uint32_t t93 = 87U;
static int8_t x717 = 2;
static uint16_t x722 = 11656U;
volatile uint16_t x723 = 106U;
static uint64_t x724 = 768531LLU;
int32_t t95 = 386;
int32_t x728 = INT32_MIN;
uint64_t x746 = 12388LLU;
int8_t x748 = -14;
uint64_t t99 = 87LLU;


void f0(void) {
	volatile uint16_t x9 = UINT16_MAX;
	uint16_t x10 = 1U;
	int32_t t0 = -180062;

	t0 = (x9/(x10<<(x11<x12)));

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x13 = INT8_MIN;
	volatile int8_t x14 = INT8_MAX;
	int32_t x15 = INT32_MIN;
	int32_t t1 = 27589;

	t1 = (x13/(x14<<(x15<x16)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x37 = -349323;
	volatile uint16_t x38 = UINT16_MAX;
	static int16_t x40 = 1;

	t2 = (x37/(x38<<(x39<x40)));

	if (t2 != -5) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x45 = -1;
	int16_t x46 = 671;
	int64_t x47 = 3079LL;

	t3 = (x45/(x46<<(x47<x48)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x54 = INT32_MAX;
	static volatile int64_t x55 = -1LL;
	int32_t x56 = -14;
	volatile int32_t t4 = 0;

	t4 = (x53/(x54<<(x55<x56)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x57 = 217210;
	static int32_t x58 = 384693020;
	uint8_t x59 = 91U;
	static uint32_t x60 = UINT32_MAX;
	static int32_t t5 = 1;

	t5 = (x57/(x58<<(x59<x60)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x65 = UINT16_MAX;
	uint8_t x66 = UINT8_MAX;
	int8_t x68 = -51;
	int32_t t6 = -36138;

	t6 = (x65/(x66<<(x67<x68)));

	if (t6 != 257) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x89 = 221040866552511LL;
	static int16_t x90 = INT16_MAX;
	uint16_t x92 = 2U;

	t7 = (x89/(x90<<(x91<x92)));

	if (t7 != 6745837780LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x97 = INT32_MIN;
	volatile int64_t x98 = 15652737144LL;
	static volatile int64_t x99 = INT64_MIN;
	static int64_t x100 = INT64_MAX;
	volatile int64_t t8 = 1LL;

	t8 = (x97/(x98<<(x99<x100)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x110 = 72398648987LLU;
	uint16_t x112 = 22597U;
	static uint64_t t9 = 1839LLU;

	t9 = (x109/(x110<<(x111<x112)));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x113 = 24;
	volatile uint8_t x114 = UINT8_MAX;
	int8_t x115 = INT8_MIN;
	volatile int32_t t10 = -18;

	t10 = (x113/(x114<<(x115<x116)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x117 = INT64_MAX;
	volatile uint16_t x118 = UINT16_MAX;
	int8_t x119 = INT8_MIN;
	uint8_t x120 = 8U;
	int64_t t11 = -1746214LL;

	t11 = (x117/(x118<<(x119<x120)));

	if (t11 != 70369817935872LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x121 = 41U;
	static int64_t x122 = 1264187939LL;
	uint16_t x124 = 4U;
	int64_t t12 = -7934459845LL;

	t12 = (x121/(x122<<(x123<x124)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x129 = UINT8_MAX;
	volatile uint64_t x131 = 18617847294605LLU;
	static int64_t x132 = -15724989652889145LL;
	static int32_t t13 = 219388;

	t13 = (x129/(x130<<(x131<x132)));

	if (t13 != 25) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x141 = INT32_MIN;
	int16_t x142 = 70;
	int8_t x143 = INT8_MAX;
	static int16_t x144 = INT16_MAX;
	int32_t t14 = -3206640;

	t14 = (x141/(x142<<(x143<x144)));

	if (t14 != -15339168) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x145 = INT32_MAX;
	volatile uint32_t x146 = 10378787U;
	int64_t x147 = INT64_MIN;
	static uint64_t x148 = 220622988LLU;
	uint32_t t15 = 9U;

	t15 = (x145/(x146<<(x147<x148)));

	if (t15 != 206U) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x149 = INT64_MIN;
	uint16_t x150 = 16281U;
	int64_t x151 = INT64_MIN;
	int64_t x152 = 43LL;
	int64_t t16 = -1239486037807457618LL;

	t16 = (x149/(x150<<(x151<x152)));

	if (t16 != -283255697956353LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x155 = UINT64_MAX;
	volatile int32_t t17 = 27180253;

	t17 = (x153/(x154<<(x155<x156)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x157 = -1;
	int64_t x158 = 475LL;
	int64_t x159 = -62321542135LL;
	static int64_t t18 = -65409659LL;

	t18 = (x157/(x158<<(x159<x160)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x161 = -1;
	uint8_t x162 = 12U;
	int8_t x163 = 43;
	int32_t t19 = 1354;

	t19 = (x161/(x162<<(x163<x164)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x165 = -1;
	static int16_t x166 = INT16_MAX;
	volatile int64_t x167 = INT64_MIN;
	int32_t t20 = 12;

	t20 = (x165/(x166<<(x167<x168)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x169 = -1LL;
	int32_t x170 = INT32_MAX;
	static volatile int16_t x171 = -1;
	uint64_t x172 = UINT64_MAX;

	t21 = (x169/(x170<<(x171<x172)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x177 = INT64_MIN;
	static int64_t x178 = 14253179344360688LL;
	int8_t x179 = -1;
	int64_t x180 = -1LL;
	volatile int64_t t22 = 26226LL;

	t22 = (x177/(x178<<(x179<x180)));

	if (t22 != -647LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x182 = UINT16_MAX;
	uint32_t x183 = UINT32_MAX;
	int16_t x184 = 13;
	static uint32_t t23 = 2008511U;

	t23 = (x181/(x182<<(x183<x184)));

	if (t23 != 65537U) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x193 = INT8_MAX;
	static int16_t x194 = 10;
	uint64_t x195 = 9364744LLU;
	static uint8_t x196 = 85U;
	int32_t t24 = 4147898;

	t24 = (x193/(x194<<(x195<x196)));

	if (t24 != 12) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x197 = -3542;
	int16_t x198 = 44;
	static int8_t x199 = -1;
	volatile int32_t t25 = 92012;

	t25 = (x197/(x198<<(x199<x200)));

	if (t25 != -80) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x205 = INT64_MIN;
	uint16_t x206 = 13U;
	volatile uint16_t x207 = UINT16_MAX;
	uint64_t x208 = 54673LLU;
	volatile int64_t t26 = 991177274138092886LL;

	t26 = (x205/(x206<<(x207<x208)));

	if (t26 != -709490156681136600LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x213 = INT16_MAX;
	int16_t x214 = 21;
	int8_t x215 = INT8_MIN;
	static volatile uint8_t x216 = 13U;
	volatile int32_t t27 = 6926206;

	t27 = (x213/(x214<<(x215<x216)));

	if (t27 != 780) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x221 = -1;

	t28 = (x221/(x222<<(x223<x224)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x229 = INT64_MAX;
	int32_t x230 = INT32_MAX;
	uint64_t x232 = 74LLU;
	static int64_t t29 = -27LL;

	t29 = (x229/(x230<<(x231<x232)));

	if (t29 != 4294967298LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x238 = 682;
	int16_t x239 = INT16_MIN;
	uint8_t x240 = 68U;
	int32_t t30 = -7567;

	t30 = (x237/(x238<<(x239<x240)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x245 = INT32_MIN;
	static uint64_t x246 = 12LLU;
	uint32_t x247 = 524U;
	uint16_t x248 = 3U;

	t31 = (x245/(x246<<(x247<x248)));

	if (t31 != 1537228672630172330LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x251 = INT16_MIN;
	int16_t x252 = -7570;

	t32 = (x249/(x250<<(x251<x252)));

	if (t32 != -153391689) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x261 = 1525LLU;
	int16_t x262 = INT16_MAX;
	static uint16_t x264 = UINT16_MAX;
	static volatile uint64_t t33 = 310977503596255853LLU;

	t33 = (x261/(x262<<(x263<x264)));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int16_t x269 = INT16_MIN;
	uint32_t x270 = 1U;
	uint32_t x271 = 472831U;
	static int64_t x272 = -99166799LL;

	t34 = (x269/(x270<<(x271<x272)));

	if (t34 != 4294934528U) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x281 = -57;
	static int32_t x282 = 31940;
	int64_t x283 = INT64_MAX;
	int8_t x284 = -1;

	t35 = (x281/(x282<<(x283<x284)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x285 = UINT32_MAX;
	uint8_t x286 = UINT8_MAX;
	static int8_t x288 = -1;
	volatile uint32_t t36 = 28909135U;

	t36 = (x285/(x286<<(x287<x288)));

	if (t36 != 16843009U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x289 = INT16_MAX;
	int8_t x292 = -27;
	volatile uint64_t t37 = 24795661236779LLU;

	t37 = (x289/(x290<<(x291<x292)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x293 = INT16_MIN;
	int32_t x294 = 446080061;
	int64_t x295 = INT64_MIN;
	volatile int32_t t38 = 101163;

	t38 = (x293/(x294<<(x295<x296)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x302 = 22;
	volatile int64_t x303 = INT64_MIN;
	static int8_t x304 = -1;
	static int32_t t39 = 37544;

	t39 = (x301/(x302<<(x303<x304)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x305 = 73LLU;
	volatile int8_t x306 = 37;
	uint8_t x308 = 0U;
	static volatile uint64_t t40 = 759985641105862843LLU;

	t40 = (x305/(x306<<(x307<x308)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x313 = 1911U;
	uint32_t x314 = 6947612U;
	uint64_t x315 = 3532623LLU;
	volatile int32_t x316 = INT32_MAX;
	uint32_t t41 = 508789644U;

	t41 = (x313/(x314<<(x315<x316)));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x321 = -2;
	static int8_t x322 = INT8_MAX;
	static int32_t x323 = INT32_MIN;
	int8_t x324 = 1;
	volatile int32_t t42 = -501;

	t42 = (x321/(x322<<(x323<x324)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x328 = 3425318LLU;
	int32_t t43 = -12371045;

	t43 = (x325/(x326<<(x327<x328)));

	if (t43 != 258) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x337 = UINT8_MAX;
	uint16_t x338 = UINT16_MAX;
	int8_t x340 = -1;
	int32_t t44 = 247;

	t44 = (x337/(x338<<(x339<x340)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x349 = -1LL;
	uint32_t x351 = UINT32_MAX;
	uint8_t x352 = 5U;
	volatile int64_t t45 = 47632701145781LL;

	t45 = (x349/(x350<<(x351<x352)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x361 = -1;
	static int64_t x362 = 5536LL;
	int16_t x363 = INT16_MIN;

	t46 = (x361/(x362<<(x363<x364)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x365 = 1U;
	uint32_t x366 = 27U;
	uint16_t x367 = 0U;
	uint32_t x368 = UINT32_MAX;
	volatile uint32_t t47 = 375U;

	t47 = (x365/(x366<<(x367<x368)));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x377 = -5445299089LL;
	int32_t x380 = INT32_MIN;
	volatile uint64_t t48 = 15636390097388332LLU;

	t48 = (x377/(x378<<(x379<x380)));

	if (t48 != 66638713LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x381 = INT16_MIN;
	uint64_t x382 = 16589LLU;
	uint64_t x384 = 2389948LLU;

	t49 = (x381/(x382<<(x383<x384)));

	if (t49 != 555993250759826LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x389 = INT64_MAX;
	int16_t x390 = 248;
	volatile int8_t x391 = INT8_MIN;
	int8_t x392 = INT8_MIN;

	t50 = (x389/(x390<<(x391<x392)));

	if (t50 != 37191016277640225LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x395 = INT32_MIN;
	static uint8_t x396 = 3U;
	uint32_t t51 = 138U;

	t51 = (x393/(x394<<(x395<x396)));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x397 = -1;
	uint32_t x398 = 692936U;
	volatile uint32_t x399 = 56404U;
	volatile int64_t x400 = -1945609233LL;
	volatile uint32_t t52 = 20769U;

	t52 = (x397/(x398<<(x399<x400)));

	if (t52 != 6198U) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x401 = UINT32_MAX;
	volatile uint64_t x402 = 90261599LLU;
	volatile int64_t x403 = INT64_MIN;
	volatile int16_t x404 = -9810;
	uint64_t t53 = 111589310768LLU;

	t53 = (x401/(x402<<(x403<x404)));

	if (t53 != 23LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x409 = -1;
	int64_t x410 = 2026416566044620488LL;
	static int64_t x412 = -35756087LL;

	t54 = (x409/(x410<<(x411<x412)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x421 = -1LL;
	volatile uint16_t x422 = 1U;
	int32_t x423 = -1;
	volatile uint8_t x424 = UINT8_MAX;
	static int64_t t55 = -211457023LL;

	t55 = (x421/(x422<<(x423<x424)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x433 = -1;
	volatile uint64_t x434 = 12395747831225667LLU;
	volatile int64_t x435 = INT64_MAX;
	int32_t x436 = INT32_MAX;

	t56 = (x433/(x434<<(x435<x436)));

	if (t56 != 1488LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x437 = 435770;
	uint8_t x439 = 92U;
	int64_t x440 = -150683LL;

	t57 = (x437/(x438<<(x439<x440)));

	if (t57 != 435770) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x449 = -25LL;
	volatile uint16_t x450 = 887U;
	static int64_t x451 = -1LL;
	int16_t x452 = -8577;

	t58 = (x449/(x450<<(x451<x452)));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x453 = 452U;
	int32_t x454 = 1;
	volatile uint32_t t59 = 25878U;

	t59 = (x453/(x454<<(x455<x456)));

	if (t59 != 452U) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x457 = 2;
	int8_t x459 = INT8_MIN;
	int64_t x460 = INT64_MAX;

	t60 = (x457/(x458<<(x459<x460)));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x469 = -1041444LL;
	uint16_t x470 = UINT16_MAX;
	static volatile uint16_t x472 = UINT16_MAX;
	volatile int64_t t61 = 119033463395792872LL;

	t61 = (x469/(x470<<(x471<x472)));

	if (t61 != -7LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x473 = INT64_MIN;
	uint32_t x474 = 2997U;
	uint32_t x475 = 3992215U;
	int8_t x476 = INT8_MIN;
	volatile int64_t t62 = 49922LL;

	t62 = (x473/(x474<<(x475<x476)));

	if (t62 != -1538767440249378LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x481 = INT16_MIN;
	static volatile uint16_t x482 = 11U;
	int32_t x483 = INT32_MIN;
	volatile uint8_t x484 = 38U;
	volatile int32_t t63 = -3611;

	t63 = (x481/(x482<<(x483<x484)));

	if (t63 != -1489) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x497 = 141731958188LLU;
	int8_t x498 = 1;
	int8_t x499 = -3;
	uint32_t x500 = 113992012U;
	volatile uint64_t t64 = 13LLU;

	t64 = (x497/(x498<<(x499<x500)));

	if (t64 != 141731958188LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x510 = 7560;
	static uint64_t x511 = 4054285795634363LLU;
	static int64_t x512 = -1LL;

	t65 = (x509/(x510<<(x511<x512)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x522 = UINT8_MAX;
	int8_t x523 = 15;
	int64_t t66 = -6LL;

	t66 = (x521/(x522<<(x523<x524)));

	if (t66 != -627LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x533 = 12381;
	static volatile uint8_t x534 = 30U;
	volatile int8_t x535 = INT8_MIN;
	int32_t t67 = 25784;

	t67 = (x533/(x534<<(x535<x536)));

	if (t67 != 206) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x541 = -1;
	static volatile int32_t x544 = INT32_MAX;
	volatile int32_t t68 = 1;

	t68 = (x541/(x542<<(x543<x544)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x546 = UINT32_MAX;
	static volatile int16_t x547 = INT16_MAX;
	int16_t x548 = -262;
	volatile uint32_t t69 = 4688U;

	t69 = (x545/(x546<<(x547<x548)));

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x549 = UINT32_MAX;
	int32_t x550 = 71;
	int64_t x551 = -3047405521951LL;
	static volatile uint64_t x552 = 95LLU;

	t70 = (x549/(x550<<(x551<x552)));

	if (t70 != 60492497U) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x557 = 0U;
	uint8_t x558 = UINT8_MAX;
	static int32_t x559 = INT32_MAX;
	volatile int16_t x560 = INT16_MIN;
	int32_t t71 = 3277950;

	t71 = (x557/(x558<<(x559<x560)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int32_t x565 = INT32_MIN;
	static uint64_t x566 = 10LLU;

	t72 = (x565/(x566<<(x567<x568)));

	if (t72 != 1844674407156206796LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x577 = 7;
	uint32_t x578 = UINT32_MAX;
	static int16_t x579 = INT16_MIN;
	int16_t x580 = INT16_MIN;
	volatile uint32_t t73 = 8082U;

	t73 = (x577/(x578<<(x579<x580)));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x581 = 526642LLU;
	static int16_t x582 = 20;
	int16_t x584 = INT16_MIN;

	t74 = (x581/(x582<<(x583<x584)));

	if (t74 != 13166LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x585 = INT8_MIN;
	static uint8_t x586 = 2U;
	int64_t x587 = INT64_MIN;
	volatile int32_t t75 = 6058049;

	t75 = (x585/(x586<<(x587<x588)));

	if (t75 != -64) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x589 = UINT64_MAX;
	uint32_t x590 = UINT32_MAX;
	volatile int16_t x591 = INT16_MIN;
	volatile uint64_t t76 = 47532375LLU;

	t76 = (x589/(x590<<(x591<x592)));

	if (t76 != 4294967298LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x613 = 1;
	int16_t x616 = INT16_MIN;
	volatile uint64_t t77 = 1955LLU;

	t77 = (x613/(x614<<(x615<x616)));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x618 = INT32_MAX;
	static uint16_t x619 = UINT16_MAX;
	static volatile uint8_t x620 = UINT8_MAX;
	static volatile int32_t t78 = 32;

	t78 = (x617/(x618<<(x619<x620)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x626 = INT8_MAX;
	int32_t x627 = 756777;
	uint64_t x628 = 3408737LLU;
	volatile int32_t t79 = 112768523;

	t79 = (x625/(x626<<(x627<x628)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x629 = 0U;
	int8_t x630 = INT8_MAX;
	volatile int8_t x631 = -16;
	uint32_t x632 = UINT32_MAX;
	int32_t t80 = 0;

	t80 = (x629/(x630<<(x631<x632)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x633 = 53487;
	static uint64_t x634 = 56LLU;
	int8_t x635 = INT8_MIN;
	volatile uint64_t x636 = 524844902895LLU;
	volatile uint64_t t81 = 5649535532458790398LLU;

	t81 = (x633/(x634<<(x635<x636)));

	if (t81 != 955LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x645 = -851;
	volatile int16_t x646 = INT16_MAX;
	static int16_t x647 = 7;
	static volatile int64_t x648 = -1LL;
	int32_t t82 = 1584986;

	t82 = (x645/(x646<<(x647<x648)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x654 = 10857708U;
	int32_t x655 = -1;
	int32_t x656 = -1;
	uint32_t t83 = 19U;

	t83 = (x653/(x654<<(x655<x656)));

	if (t83 != 37U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x657 = UINT32_MAX;
	static uint64_t x658 = 80187061905132944LLU;
	int32_t x659 = -219905;

	t84 = (x657/(x658<<(x659<x660)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x666 = UINT16_MAX;
	int32_t x667 = 232;
	volatile int32_t t85 = 585555567;

	t85 = (x665/(x666<<(x667<x668)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int8_t x673 = INT8_MIN;
	uint8_t x674 = UINT8_MAX;
	volatile int32_t x675 = INT32_MIN;
	uint32_t x676 = 14932675U;
	volatile int32_t t86 = -1;

	t86 = (x673/(x674<<(x675<x676)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x677 = UINT8_MAX;
	uint8_t x678 = 124U;
	int64_t x679 = INT64_MIN;
	int32_t t87 = -6602525;

	t87 = (x677/(x678<<(x679<x680)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x681 = INT32_MIN;
	uint32_t x682 = 62528127U;
	uint16_t x683 = 51U;
	int32_t x684 = INT32_MIN;
	volatile uint32_t t88 = 34U;

	t88 = (x681/(x682<<(x683<x684)));

	if (t88 != 34U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x686 = 9;
	int64_t x687 = 173815702LL;
	static uint32_t t89 = 748505438U;

	t89 = (x685/(x686<<(x687<x688)));

	if (t89 != 477218588U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x693 = 96U;
	volatile int64_t x694 = INT64_MAX;
	int16_t x696 = INT16_MAX;
	int64_t t90 = -90706491LL;

	t90 = (x693/(x694<<(x695<x696)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x702 = 608591U;
	int64_t x703 = 1079626726637289277LL;
	int16_t x704 = INT16_MIN;
	uint32_t t91 = 38115U;

	t91 = (x701/(x702<<(x703<x704)));

	if (t91 != 7057U) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x705 = INT16_MAX;
	int32_t x706 = 2773;
	uint16_t x707 = 2998U;
	uint64_t x708 = 133420824LLU;
	volatile int32_t t92 = -69;

	t92 = (x705/(x706<<(x707<x708)));

	if (t92 != 5) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x709 = 147U;
	volatile int32_t x710 = 15;
	uint16_t x711 = 353U;
	static uint8_t x712 = 102U;

	t93 = (x709/(x710<<(x711<x712)));

	if (t93 != 9U) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x718 = 31789438460703LLU;
	uint8_t x719 = UINT8_MAX;
	volatile uint8_t x720 = UINT8_MAX;
	uint64_t t94 = 158158680LLU;

	t94 = (x717/(x718<<(x719<x720)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x721 = UINT8_MAX;

	t95 = (x721/(x722<<(x723<x724)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x725 = INT16_MIN;
	uint64_t x726 = 339LLU;
	int32_t x727 = INT32_MIN;
	static volatile uint64_t t96 = 761440LLU;

	t96 = (x725/(x726<<(x727<x728)));

	if (t96 != 54415174258730144LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x729 = -1LL;
	uint64_t x730 = UINT64_MAX;
	int16_t x731 = 0;
	uint64_t x732 = UINT64_MAX;
	uint64_t t97 = 7725090131004LLU;

	t97 = (x729/(x730<<(x731<x732)));

	if (t97 != 1LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x737 = INT64_MAX;
	static int64_t x738 = INT64_MAX;
	int16_t x739 = INT16_MAX;
	int16_t x740 = INT16_MIN;
	int64_t t98 = -33331690966LL;

	t98 = (x737/(x738<<(x739<x740)));

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x745 = 368772557U;
	uint16_t x747 = 14U;

	t99 = (x745/(x746<<(x747<x748)));

	if (t99 != 29768LLU) { NG(); } else { ; }
	
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

