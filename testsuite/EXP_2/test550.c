#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x18 = -1;
static uint16_t x20 = UINT16_MAX;
volatile uint32_t x27 = 1210701439U;
int16_t x31 = -106;
volatile int64_t t4 = 3LL;
static volatile int32_t t6 = -14;
int8_t x61 = -1;
int16_t x63 = -72;
int32_t x64 = -14;
uint64_t x75 = 44954769265830LLU;
int64_t x86 = INT64_MAX;
int16_t x87 = INT16_MIN;
static uint64_t x112 = 106298061004LLU;
volatile int64_t x115 = 180184LL;
volatile int64_t t15 = 1003LL;
int16_t x135 = -1;
volatile uint32_t x138 = UINT32_MAX;
int16_t x153 = INT16_MAX;
int8_t x159 = -1;
int64_t t22 = -10LL;
int8_t x173 = INT8_MIN;
int32_t x190 = INT32_MIN;
volatile int64_t t26 = 15199883LL;
int64_t x193 = INT64_MIN;
int32_t x206 = INT32_MAX;
int8_t x207 = INT8_MAX;
uint8_t x210 = UINT8_MAX;
volatile int32_t t29 = 11934;
volatile int16_t x215 = INT16_MIN;
volatile int64_t t30 = -8762LL;
static volatile int64_t t31 = 2LL;
static int64_t x257 = -63LL;
int8_t x258 = INT8_MIN;
static int64_t x259 = -1LL;
int64_t t33 = 6114LL;
int64_t x262 = INT64_MAX;
uint16_t x273 = UINT16_MAX;
uint64_t x275 = 12438302945854168LLU;
int16_t x280 = INT16_MAX;
volatile int64_t t36 = 56112723605LL;
static volatile int8_t x285 = 2;
uint16_t x288 = UINT16_MAX;
int8_t x309 = INT8_MIN;
int8_t x312 = INT8_MIN;
int16_t x320 = INT16_MIN;
int64_t x325 = 20403837LL;
int16_t x326 = 11499;
int64_t t43 = 15560606663LL;
int32_t x395 = 5;
static volatile uint64_t x409 = UINT64_MAX;
static int32_t x414 = 9;
int32_t x417 = 60992102;
volatile uint8_t x420 = 108U;
uint8_t x423 = 3U;
uint32_t t52 = 104U;
int16_t x429 = -1616;
int64_t x430 = 3311LL;
int8_t x431 = INT8_MIN;
int16_t x439 = -1;
int32_t x441 = -1;
int32_t x443 = -1;
int32_t x454 = INT32_MAX;
int16_t x456 = INT16_MAX;
int8_t x467 = INT8_MIN;
int32_t t58 = -7538;
uint32_t x489 = UINT32_MAX;
volatile int32_t t61 = 63936997;
static uint64_t x512 = 981966712LLU;
uint64_t t62 = 32329LLU;
int16_t x525 = INT16_MAX;
int16_t x526 = INT16_MIN;
volatile uint64_t x527 = 49646963LLU;
volatile int64_t t67 = -6013621092LL;
int64_t x557 = 1061890LL;
int64_t t68 = -5881578300792LL;
uint64_t x568 = UINT64_MAX;
uint8_t x572 = UINT8_MAX;
uint64_t x580 = 60426163017465782LLU;
volatile uint64_t t72 = 0LLU;
int64_t x587 = -1LL;
int64_t t76 = -231LL;
volatile int64_t t78 = 2754119574527LL;
uint64_t x617 = UINT64_MAX;
uint64_t t79 = 24567809LLU;
int8_t x630 = INT8_MIN;
static int8_t x632 = INT8_MIN;
volatile int32_t t80 = 23;
static int32_t t82 = 0;
int8_t x674 = 45;
int8_t x678 = 26;
uint32_t t85 = 260877U;
static uint16_t x685 = 0U;
volatile int64_t x686 = -2074298980926305LL;
uint32_t t88 = 2188277U;
int64_t x700 = -6628763LL;
static int32_t x701 = -1;
uint8_t x706 = 127U;
uint32_t x707 = 31U;
volatile int32_t t93 = -22608500;
static int32_t x741 = INT32_MIN;
int32_t x751 = -1;
uint16_t x752 = 172U;
volatile int32_t t97 = -25;
static int16_t x756 = INT16_MIN;
static uint32_t x758 = UINT32_MAX;
volatile int64_t t99 = 1341812695944LL;


void f0(void) {
	uint8_t x1 = 1U;
	int16_t x2 = INT16_MIN;
	uint8_t x3 = 2U;
	static int8_t x4 = -1;
	volatile int32_t t0 = -48958739;

	t0 = ((x1/(x2/x3))/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x13 = INT64_MIN;
	uint16_t x14 = 176U;
	int16_t x15 = -1;
	int16_t x16 = INT16_MAX;
	int64_t t1 = -4052038980578LL;

	t1 = ((x13/(x14/x15))/x16);

	if (t1 != 1599338448337LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x17 = UINT8_MAX;
	uint32_t x19 = UINT32_MAX;
	uint32_t t2 = 60226965U;

	t2 = ((x17/(x18/x19))/x20);

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x25 = INT8_MAX;
	int16_t x26 = INT16_MIN;
	uint16_t x28 = UINT16_MAX;
	static volatile uint32_t t3 = 2644431U;

	t3 = ((x25/(x26/x27))/x28);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x29 = INT64_MIN;
	int32_t x30 = INT32_MIN;
	uint8_t x32 = 68U;

	t4 = ((x29/(x30/x31))/x32);

	if (t4 != -6695096309LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x41 = 7;
	int32_t x42 = 574069170;
	int16_t x43 = 4858;
	int16_t x44 = 392;
	volatile int32_t t5 = 44;

	t5 = ((x41/(x42/x43))/x44);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x57 = INT32_MIN;
	uint16_t x58 = 193U;
	volatile uint8_t x59 = 14U;
	static int8_t x60 = 16;

	t6 = ((x57/(x58/x59))/x60);

	if (t6 != -10324440) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x62 = INT64_MIN;
	int64_t t7 = -1093456643818655LL;

	t7 = ((x61/(x62/x63))/x64);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x73 = 285U;
	int32_t x74 = INT32_MIN;
	static int32_t x76 = INT32_MIN;
	static volatile uint64_t t8 = 178111386868LLU;

	t8 = ((x73/(x74/x75))/x76);

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x81 = INT8_MIN;
	volatile int64_t x82 = INT64_MAX;
	int16_t x83 = INT16_MIN;
	uint16_t x84 = 879U;
	int64_t t9 = 895686088LL;

	t9 = ((x81/(x82/x83))/x84);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x85 = INT16_MAX;
	volatile uint64_t x88 = UINT64_MAX;
	volatile uint64_t t10 = 28LLU;

	t10 = ((x85/(x86/x87))/x88);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x89 = 267848LLU;
	int16_t x90 = -2;
	static int64_t x91 = -1LL;
	uint64_t x92 = 20775729839406LLU;
	static uint64_t t11 = 4176012486256LLU;

	t11 = ((x89/(x90/x91))/x92);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x97 = INT32_MAX;
	int64_t x98 = INT64_MIN;
	uint32_t x99 = 4763U;
	uint32_t x100 = 2704U;
	volatile int64_t t12 = -17LL;

	t12 = ((x97/(x98/x99))/x100);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x105 = -9139339;
	uint32_t x106 = UINT32_MAX;
	int8_t x107 = INT8_MAX;
	int16_t x108 = -3;
	volatile uint32_t t13 = 409356U;

	t13 = ((x105/(x106/x107))/x108);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x109 = 22445U;
	int64_t x110 = INT64_MIN;
	static int16_t x111 = INT16_MIN;
	volatile uint64_t t14 = 462042LLU;

	t14 = ((x109/(x110/x111))/x112);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x113 = INT64_MIN;
	int64_t x114 = INT64_MIN;
	int32_t x116 = -29290788;

	t15 = ((x113/(x114/x115))/x116);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x133 = INT8_MAX;
	static uint32_t x134 = UINT32_MAX;
	uint16_t x136 = 14842U;
	static volatile uint32_t t16 = 47U;

	t16 = ((x133/(x134/x135))/x136);

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x137 = INT8_MIN;
	int32_t x139 = 2;
	uint16_t x140 = 114U;
	volatile uint32_t t17 = 959U;

	t17 = ((x137/(x138/x139))/x140);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x141 = 106U;
	int8_t x142 = INT8_MIN;
	int8_t x143 = -2;
	int8_t x144 = 1;
	volatile int32_t t18 = -49172;

	t18 = ((x141/(x142/x143))/x144);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x154 = INT16_MIN;
	uint32_t x155 = 620U;
	volatile int64_t x156 = 7LL;
	static volatile int64_t t19 = 798659688132610LL;

	t19 = ((x153/(x154/x155))/x156);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x157 = 5025LL;
	int16_t x158 = INT16_MAX;
	static int16_t x160 = 3;
	static int64_t t20 = 2430246028842551LL;

	t20 = ((x157/(x158/x159))/x160);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint64_t x165 = 26446373LLU;
	static volatile int8_t x166 = INT8_MIN;
	uint64_t x167 = 1013905012875LLU;
	int64_t x168 = -1714LL;
	uint64_t t21 = 45496242807LLU;

	t21 = ((x165/(x166/x167))/x168);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x169 = UINT32_MAX;
	static int64_t x170 = INT64_MAX;
	volatile int8_t x171 = INT8_MIN;
	int16_t x172 = INT16_MAX;

	t22 = ((x169/(x170/x171))/x172);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x174 = INT32_MAX;
	volatile int16_t x175 = INT16_MIN;
	int32_t x176 = INT32_MIN;
	volatile int32_t t23 = 1644195;

	t23 = ((x173/(x174/x175))/x176);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x177 = INT16_MAX;
	volatile int32_t x178 = INT32_MIN;
	uint16_t x179 = UINT16_MAX;
	uint16_t x180 = 54U;
	volatile int32_t t24 = 43559;

	t24 = ((x177/(x178/x179))/x180);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x185 = INT64_MIN;
	int64_t x186 = -1LL;
	uint64_t x187 = 3881780419040LLU;
	int32_t x188 = -29;
	uint64_t t25 = 2046042102754780054LLU;

	t25 = ((x185/(x186/x187))/x188);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x189 = -1LL;
	uint16_t x191 = 1U;
	int64_t x192 = INT64_MIN;

	t26 = ((x189/(x190/x191))/x192);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x194 = INT32_MIN;
	volatile int8_t x195 = INT8_MIN;
	int64_t x196 = 981062LL;
	volatile int64_t t27 = -2554006LL;

	t27 = ((x193/(x194/x195))/x196);

	if (t27 != -560368LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x205 = -1;
	static int16_t x208 = INT16_MIN;
	volatile int32_t t28 = -90928;

	t28 = ((x205/(x206/x207))/x208);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x209 = -1;
	uint8_t x211 = 121U;
	int8_t x212 = -1;

	t29 = ((x209/(x210/x211))/x212);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x213 = UINT16_MAX;
	static int64_t x214 = INT64_MIN;
	static int16_t x216 = -1;

	t30 = ((x213/(x214/x215))/x216);

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x221 = UINT32_MAX;
	volatile int64_t x222 = -1012944684666LL;
	int8_t x223 = INT8_MAX;
	uint32_t x224 = 369007U;

	t31 = ((x221/(x222/x223))/x224);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x233 = 11U;
	uint16_t x234 = 42U;
	volatile int16_t x235 = -1;
	int32_t x236 = -1;
	volatile uint32_t t32 = 1433209731U;

	t32 = ((x233/(x234/x235))/x236);

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x260 = INT32_MIN;

	t33 = ((x257/(x258/x259))/x260);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x261 = 268U;
	int8_t x263 = -1;
	int8_t x264 = INT8_MIN;
	int64_t t34 = -441652730LL;

	t34 = ((x261/(x262/x263))/x264);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x274 = INT64_MAX;
	int8_t x276 = INT8_MIN;
	volatile uint64_t t35 = 102012628185138508LLU;

	t35 = ((x273/(x274/x275))/x276);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x277 = INT8_MIN;
	int64_t x278 = INT64_MIN;
	int32_t x279 = INT32_MAX;

	t36 = ((x277/(x278/x279))/x280);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x286 = -7577;
	int8_t x287 = INT8_MIN;
	volatile int32_t t37 = -4030;

	t37 = ((x285/(x286/x287))/x288);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x289 = -1LL;
	volatile int32_t x290 = -1;
	int16_t x291 = -1;
	uint64_t x292 = UINT64_MAX;
	volatile uint64_t t38 = 2436LLU;

	t38 = ((x289/(x290/x291))/x292);

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x297 = 20571011;
	int32_t x298 = -1;
	int64_t x299 = -1LL;
	uint64_t x300 = 147396713619508LLU;
	static uint64_t t39 = 1166LLU;

	t39 = ((x297/(x298/x299))/x300);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x310 = 466702946040982907LL;
	int32_t x311 = INT32_MIN;
	int64_t t40 = -1LL;

	t40 = ((x309/(x310/x311))/x312);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x317 = -1;
	static int64_t x318 = INT64_MAX;
	int8_t x319 = -1;
	static int64_t t41 = 1591207754174318LL;

	t41 = ((x317/(x318/x319))/x320);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x327 = INT8_MIN;
	int32_t x328 = 135933;
	static volatile int64_t t42 = 0LL;

	t42 = ((x325/(x326/x327))/x328);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x337 = INT64_MIN;
	static int16_t x338 = -62;
	int64_t x339 = -1LL;
	volatile uint32_t x340 = 106925988U;

	t43 = ((x337/(x338/x339))/x340);

	if (t43 != -1391280715LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x353 = INT8_MIN;
	volatile int16_t x354 = INT16_MIN;
	static uint8_t x355 = 47U;
	int8_t x356 = 15;
	volatile int32_t t44 = -30156932;

	t44 = ((x353/(x354/x355))/x356);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x357 = INT8_MIN;
	int32_t x358 = 1035807;
	uint8_t x359 = 20U;
	int64_t x360 = -1LL;
	volatile int64_t t45 = 28434642969745675LL;

	t45 = ((x357/(x358/x359))/x360);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x373 = UINT32_MAX;
	int32_t x374 = INT32_MIN;
	volatile int8_t x375 = 3;
	int8_t x376 = INT8_MIN;
	uint32_t t46 = 193246462U;

	t46 = ((x373/(x374/x375))/x376);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int64_t x381 = -7705LL;
	uint64_t x382 = UINT64_MAX;
	int8_t x383 = -1;
	volatile uint64_t x384 = 4752935390296LLU;
	volatile uint64_t t47 = 1026239553090LLU;

	t47 = ((x381/(x382/x383))/x384);

	if (t47 != 3881126LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x393 = UINT64_MAX;
	volatile int32_t x394 = INT32_MIN;
	static volatile int32_t x396 = INT32_MIN;
	volatile uint64_t t48 = 948180046438980954LLU;

	t48 = ((x393/(x394/x395))/x396);

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x410 = INT16_MIN;
	static int16_t x411 = INT16_MIN;
	uint32_t x412 = 20638U;
	uint64_t t49 = 96795164577LLU;

	t49 = ((x409/(x410/x411))/x412);

	if (t49 != 893824211343616LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x413 = -1;
	int8_t x415 = 7;
	int32_t x416 = INT32_MIN;
	volatile int32_t t50 = -6;

	t50 = ((x413/(x414/x415))/x416);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x418 = INT64_MIN;
	volatile int16_t x419 = INT16_MIN;
	volatile int64_t t51 = -43429LL;

	t51 = ((x417/(x418/x419))/x420);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x421 = 266U;
	uint32_t x422 = UINT32_MAX;
	static volatile int8_t x424 = INT8_MIN;

	t52 = ((x421/(x422/x423))/x424);

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x432 = INT64_MIN;
	volatile int64_t t53 = -21841925996LL;

	t53 = ((x429/(x430/x431))/x432);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x437 = INT8_MIN;
	static volatile int32_t x438 = -1;
	static uint32_t x440 = 4021U;
	uint32_t t54 = 575752U;

	t54 = ((x437/(x438/x439))/x440);

	if (t54 != 1068134U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x442 = INT8_MIN;
	int64_t x444 = -722306684283062789LL;
	int64_t t55 = 40093LL;

	t55 = ((x441/(x442/x443))/x444);

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x449 = INT8_MAX;
	int16_t x450 = INT16_MIN;
	static int8_t x451 = INT8_MIN;
	static volatile uint32_t x452 = 1U;
	volatile uint32_t t56 = 83862625U;

	t56 = ((x449/(x450/x451))/x452);

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x453 = 13U;
	volatile int8_t x455 = INT8_MIN;
	int32_t t57 = -18;

	t57 = ((x453/(x454/x455))/x456);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x465 = INT32_MIN;
	int16_t x466 = INT16_MIN;
	int32_t x468 = INT32_MIN;

	t58 = ((x465/(x466/x467))/x468);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x490 = INT16_MAX;
	volatile uint8_t x491 = 1U;
	int8_t x492 = -1;
	static uint32_t t59 = 17U;

	t59 = ((x489/(x490/x491))/x492);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint32_t x501 = 1U;
	volatile int16_t x502 = 1;
	static int32_t x503 = -1;
	volatile uint16_t x504 = UINT16_MAX;
	uint32_t t60 = 3950U;

	t60 = ((x501/(x502/x503))/x504);

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x505 = INT32_MAX;
	int32_t x506 = 362714014;
	int16_t x507 = INT16_MIN;
	int16_t x508 = 2551;

	t61 = ((x505/(x506/x507))/x508);

	if (t61 != -76) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x509 = INT64_MIN;
	uint64_t x510 = UINT64_MAX;
	static int8_t x511 = INT8_MIN;

	t62 = ((x509/(x510/x511))/x512);

	if (t62 != 9392754279LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x513 = -1;
	uint64_t x514 = 3329035509LLU;
	int8_t x515 = 23;
	int16_t x516 = -1;
	static volatile uint64_t t63 = 2791362258723LLU;

	t63 = ((x513/(x514/x515))/x516);

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x528 = 30211639208LLU;
	uint64_t t64 = 154LLU;

	t64 = ((x525/(x526/x527))/x528);

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x537 = -204719951797222LL;
	int64_t x538 = -8139425671406842LL;
	int8_t x539 = -2;
	volatile int32_t x540 = -1;
	volatile int64_t t65 = -1205LL;

	t65 = ((x537/(x538/x539))/x540);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x549 = INT32_MIN;
	uint32_t x550 = UINT32_MAX;
	int32_t x551 = INT32_MIN;
	static volatile int8_t x552 = -1;
	uint32_t t66 = 4623459U;

	t66 = ((x549/(x550/x551))/x552);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x553 = -1;
	int64_t x554 = INT64_MIN;
	static int16_t x555 = INT16_MIN;
	volatile int32_t x556 = INT32_MIN;

	t67 = ((x553/(x554/x555))/x556);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x558 = 25953U;
	volatile int8_t x559 = INT8_MIN;
	static volatile uint32_t x560 = UINT32_MAX;

	t68 = ((x557/(x558/x559))/x560);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x565 = -30;
	int32_t x566 = INT32_MIN;
	int32_t x567 = INT32_MAX;
	static uint64_t t69 = 53232593460435272LLU;

	t69 = ((x565/(x566/x567))/x568);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x569 = 2LL;
	volatile uint32_t x570 = UINT32_MAX;
	uint16_t x571 = 9846U;
	static int64_t t70 = 1939604656749300115LL;

	t70 = ((x569/(x570/x571))/x572);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x573 = -2;
	int64_t x574 = INT64_MIN;
	int16_t x575 = -570;
	int32_t x576 = 1;
	volatile int64_t t71 = -6923LL;

	t71 = ((x573/(x574/x575))/x576);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x577 = -1LL;
	volatile int64_t x578 = -1LL;
	volatile uint8_t x579 = 1U;

	t72 = ((x577/(x578/x579))/x580);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x581 = INT16_MIN;
	int64_t x582 = INT64_MAX;
	volatile int32_t x583 = INT32_MIN;
	int8_t x584 = 7;
	static int64_t t73 = -13522131208719026LL;

	t73 = ((x581/(x582/x583))/x584);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x585 = -1;
	int8_t x586 = INT8_MAX;
	static int8_t x588 = -1;
	volatile int64_t t74 = 1805835LL;

	t74 = ((x585/(x586/x587))/x588);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x597 = 1978985U;
	int64_t x598 = INT64_MIN;
	static uint8_t x599 = UINT8_MAX;
	static int8_t x600 = -7;
	int64_t t75 = 14773215LL;

	t75 = ((x597/(x598/x599))/x600);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int8_t x601 = 0;
	uint16_t x602 = 14861U;
	uint16_t x603 = 5U;
	int64_t x604 = INT64_MAX;

	t76 = ((x601/(x602/x603))/x604);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x605 = INT64_MAX;
	uint16_t x606 = 29689U;
	int8_t x607 = INT8_MAX;
	int8_t x608 = -10;
	static int64_t t77 = 16326165462LL;

	t77 = ((x605/(x606/x607))/x608);

	if (t77 != -3958528771182307LL) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x609 = 1142U;
	int32_t x610 = INT32_MIN;
	int64_t x611 = 17493173LL;
	int8_t x612 = -1;

	t78 = ((x609/(x610/x611))/x612);

	if (t78 != 9LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x618 = -1;
	uint32_t x619 = 217810139U;
	uint16_t x620 = UINT16_MAX;

	t79 = ((x617/(x618/x619))/x620);

	if (t79 != 14814698512815LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x629 = INT8_MIN;
	int16_t x631 = -1;

	t80 = ((x629/(x630/x631))/x632);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x641 = 7U;
	int32_t x642 = 199546;
	volatile int16_t x643 = INT16_MIN;
	int32_t x644 = INT32_MIN;
	volatile int32_t t81 = 9152667;

	t81 = ((x641/(x642/x643))/x644);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x653 = -16061;
	int32_t x654 = -1;
	int16_t x655 = -1;
	static volatile int16_t x656 = INT16_MIN;

	t82 = ((x653/(x654/x655))/x656);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x669 = UINT64_MAX;
	int64_t x670 = INT64_MAX;
	uint8_t x671 = UINT8_MAX;
	volatile int32_t x672 = 47894;
	uint64_t t83 = 6LLU;

	t83 = ((x669/(x670/x671))/x672);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x673 = INT64_MIN;
	volatile int8_t x675 = -1;
	int8_t x676 = -39;
	static int64_t t84 = -14613351654LL;

	t84 = ((x673/(x674/x675))/x676);

	if (t84 != -5255482642082493LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x677 = 488227U;
	volatile int32_t x679 = -1;
	int16_t x680 = -30;

	t85 = ((x677/(x678/x679))/x680);

	if (t85 != 0U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x687 = UINT16_MAX;
	uint64_t x688 = UINT64_MAX;
	volatile uint64_t t86 = 120LLU;

	t86 = ((x685/(x686/x687))/x688);

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x689 = 8U;
	volatile uint8_t x690 = UINT8_MAX;
	uint16_t x691 = 11U;
	volatile int32_t x692 = INT32_MIN;
	volatile uint32_t t87 = 18248376U;

	t87 = ((x689/(x690/x691))/x692);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x693 = -2;
	static int8_t x694 = -1;
	static uint32_t x695 = UINT32_MAX;
	int8_t x696 = INT8_MIN;

	t88 = ((x693/(x694/x695))/x696);

	if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x697 = 22U;
	int16_t x698 = -1;
	int32_t x699 = -1;
	static int64_t t89 = 20059316990LL;

	t89 = ((x697/(x698/x699))/x700);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x702 = INT8_MIN;
	volatile int8_t x703 = INT8_MIN;
	uint32_t x704 = 90978U;
	volatile uint32_t t90 = 15U;

	t90 = ((x701/(x702/x703))/x704);

	if (t90 != 47208U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int16_t x705 = 0;
	uint64_t x708 = UINT64_MAX;
	uint64_t t91 = 5837238857623LLU;

	t91 = ((x705/(x706/x707))/x708);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x717 = 15260U;
	static volatile uint8_t x718 = UINT8_MAX;
	int8_t x719 = INT8_MAX;
	int8_t x720 = 6;
	volatile int32_t t92 = 0;

	t92 = ((x717/(x718/x719))/x720);

	if (t92 != 1271) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x729 = INT32_MAX;
	int8_t x730 = INT8_MIN;
	int8_t x731 = -1;
	int32_t x732 = 1;

	t93 = ((x729/(x730/x731))/x732);

	if (t93 != 16777215) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x733 = 3981U;
	int64_t x734 = -3301043LL;
	int8_t x735 = INT8_MIN;
	int64_t x736 = INT64_MIN;
	volatile int64_t t94 = 3813297399415384LL;

	t94 = ((x733/(x734/x735))/x736);

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x737 = 891253LL;
	int64_t x738 = INT64_MIN;
	uint16_t x739 = UINT16_MAX;
	uint32_t x740 = 31243U;
	volatile int64_t t95 = -1751431LL;

	t95 = ((x737/(x738/x739))/x740);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x742 = 12359460;
	int8_t x743 = INT8_MIN;
	uint64_t x744 = 27606117063LLU;
	uint64_t t96 = 221667786LLU;

	t96 = ((x741/(x742/x743))/x744);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x749 = INT16_MAX;
	uint8_t x750 = 49U;

	t97 = ((x749/(x750/x751))/x752);

	if (t97 != -3) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x753 = INT8_MAX;
	uint64_t x754 = 40286341861417LLU;
	uint16_t x755 = UINT16_MAX;
	uint64_t t98 = 25557LLU;

	t98 = ((x753/(x754/x755))/x756);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x757 = INT64_MAX;
	int32_t x759 = -683658;
	int64_t x760 = -133909113286199LL;

	t99 = ((x757/(x758/x759))/x760);

	if (t99 != -68877LL) { NG(); } else { ; }
	
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

