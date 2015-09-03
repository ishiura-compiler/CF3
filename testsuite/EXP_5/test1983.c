#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = -551933136LL;
static int32_t t1 = -1;
int64_t x10 = 350LL;
uint64_t x11 = 2118LLU;
int16_t x15 = -39;
int32_t t3 = INT32_MAX;
volatile int32_t t4 = -203199448;
int64_t x33 = INT64_MAX;
volatile int64_t t6 = 11LL;
int32_t x39 = -1;
static volatile int32_t t8 = 14205333;
static volatile uint8_t x55 = UINT8_MAX;
volatile int32_t t9 = -7;
static volatile int64_t x58 = 67184882657LL;
static volatile uint16_t x70 = UINT16_MAX;
uint16_t x75 = 15430U;
static uint32_t x78 = UINT32_MAX;
static int16_t x83 = INT16_MIN;
int32_t x84 = INT32_MAX;
uint64_t x87 = 499790331486359386LLU;
int8_t x88 = -1;
uint16_t x103 = UINT16_MAX;
int64_t x117 = 4245470749587LL;
uint8_t x120 = UINT8_MAX;
volatile int64_t t18 = 137710102606828LL;
uint8_t x122 = UINT8_MAX;
int32_t x123 = INT32_MIN;
int8_t x124 = 0;
int64_t x136 = INT64_MAX;
static int8_t x138 = 0;
volatile uint8_t x160 = 0U;
static int8_t x168 = 29;
volatile uint64_t t28 = 5881455LLU;
int8_t x171 = 21;
static int8_t x172 = INT8_MIN;
int64_t t29 = 57914023LL;
uint16_t x201 = 11527U;
volatile int8_t x202 = INT8_MIN;
uint16_t x214 = UINT16_MAX;
static volatile int32_t t33 = 49217;
int32_t x219 = -1;
static int16_t x243 = INT16_MIN;
volatile uint32_t t36 = 31102U;
volatile uint64_t t39 = 204082644708694LLU;
int16_t x277 = 0;
static volatile int32_t t41 = -14204;
volatile uint16_t x298 = 34U;
static int64_t x306 = INT64_MAX;
int8_t x308 = -1;
volatile uint64_t x317 = 107079LLU;
volatile int8_t x326 = INT8_MAX;
uint64_t x327 = 33898581498LLU;
int16_t x328 = -1;
static uint8_t x341 = 0U;
int32_t x361 = 77150479;
int16_t x368 = INT16_MIN;
int64_t x373 = INT64_MAX;
int16_t x374 = INT16_MIN;
volatile int64_t t52 = INT64_MAX;
int8_t x379 = -1;
int32_t t54 = 25;
uint64_t x385 = 6785978LLU;
static volatile uint64_t t55 = 672021065746947LLU;
static int8_t x393 = INT8_MAX;
static uint16_t x394 = 8U;
static int32_t t57 = 1;
static int64_t x423 = INT64_MIN;
int64_t x424 = 427143314632479LL;
int64_t t59 = 46LL;
uint32_t x427 = 2U;
uint8_t x428 = UINT8_MAX;
volatile int16_t x444 = -1;
int8_t x450 = INT8_MIN;
int32_t x456 = 489456;
uint32_t x467 = 16688542U;
uint8_t x473 = UINT8_MAX;
int64_t x474 = INT64_MAX;
static uint64_t x488 = 1430049LLU;
uint8_t x493 = UINT8_MAX;
int16_t x495 = INT16_MIN;
volatile int32_t t70 = 0;
volatile int32_t t72 = INT32_MAX;
int8_t x544 = INT8_MAX;
volatile int64_t x553 = 119LL;
int64_t t76 = 1319187LL;
uint32_t x565 = 55087U;
uint16_t x568 = 29U;
uint16_t x570 = 31475U;
int64_t x575 = INT64_MIN;
uint64_t x579 = 465LLU;
int64_t x582 = INT64_MIN;
int16_t x583 = INT16_MIN;
uint64_t x601 = UINT64_MAX;
static uint8_t x602 = UINT8_MAX;
volatile uint32_t x611 = UINT32_MAX;
static volatile int32_t t88 = 2051603;
static uint64_t x621 = 220032358LLU;
volatile uint64_t t89 = 21422LLU;
volatile uint64_t x627 = 3042855454707944967LLU;
volatile int16_t x628 = -24;
static volatile uint32_t t90 = 46530U;
int64_t x643 = 114540963LL;
static int32_t x678 = -1341;
int8_t x680 = -3;
uint64_t t96 = 3LLU;
uint64_t x701 = UINT64_MAX;
static int64_t x703 = 3036LL;
int32_t x707 = INT32_MIN;
uint16_t x708 = UINT16_MAX;


void f0(void) {
	uint32_t x1 = 4U;
	volatile int64_t x2 = INT64_MAX;
	static int8_t x3 = -1;
	static uint32_t t0 = 368600542U;

	t0 = (x1>>((x2|x3)<=x4));

	if (t0 != 4U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint8_t x5 = 58U;
	uint8_t x6 = 13U;
	uint16_t x7 = UINT16_MAX;
	int32_t x8 = INT32_MIN;

	t1 = (x5>>((x6|x7)<=x8));

	if (t1 != 58) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 1498999793660LLU;
	int8_t x12 = -1;
	volatile uint64_t t2 = 818LLU;

	t2 = (x9>>((x10|x11)<=x12));

	if (t2 != 749499896830LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	uint32_t x14 = UINT32_MAX;
	volatile uint8_t x16 = 39U;

	t3 = (x13>>((x14|x15)<=x16));

	if (t3 != INT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = UINT16_MAX;
	uint8_t x18 = 2U;
	uint16_t x19 = 2045U;
	int16_t x20 = INT16_MAX;

	t4 = (x17>>((x18|x19)<=x20));

	if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x29 = 827962LLU;
	volatile uint8_t x30 = 50U;
	volatile int8_t x31 = INT8_MIN;
	int8_t x32 = INT8_MIN;
	uint64_t t5 = 12321010772LLU;

	t5 = (x29>>((x30|x31)<=x32));

	if (t5 != 827962LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x34 = UINT16_MAX;
	static uint8_t x35 = 70U;
	static volatile uint64_t x36 = UINT64_MAX;

	t6 = (x33>>((x34|x35)<=x36));

	if (t6 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = 354065;
	int8_t x38 = INT8_MAX;
	volatile int64_t x40 = INT64_MAX;
	volatile int32_t t7 = 6037823;

	t7 = (x37>>((x38|x39)<=x40));

	if (t7 != 177032) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x45 = UINT16_MAX;
	uint32_t x46 = UINT32_MAX;
	static int32_t x47 = -1;
	static int64_t x48 = -1LL;

	t8 = (x45>>((x46|x47)<=x48));

	if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x53 = INT16_MAX;
	static uint32_t x54 = UINT32_MAX;
	int64_t x56 = INT64_MIN;

	t9 = (x53>>((x54|x55)<=x56));

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x57 = UINT8_MAX;
	int64_t x59 = INT64_MIN;
	uint32_t x60 = 11000436U;
	volatile int32_t t10 = -343950;

	t10 = (x57>>((x58|x59)<=x60));

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x69 = UINT64_MAX;
	volatile uint16_t x71 = UINT16_MAX;
	int8_t x72 = 9;
	volatile uint64_t t11 = UINT64_MAX;

	t11 = (x69>>((x70|x71)<=x72));

	if (t11 != UINT64_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x73 = 1261568338LLU;
	static int32_t x74 = INT32_MIN;
	int32_t x76 = -577;
	volatile uint64_t t12 = 670022284004504LLU;

	t12 = (x73>>((x74|x75)<=x76));

	if (t12 != 630784169LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x77 = INT8_MAX;
	static int8_t x79 = INT8_MIN;
	uint8_t x80 = UINT8_MAX;
	volatile int32_t t13 = 12506;

	t13 = (x77>>((x78|x79)<=x80));

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	static uint64_t x81 = 213419804209630185LLU;
	volatile int8_t x82 = INT8_MIN;
	uint64_t t14 = 6944818848258961LLU;

	t14 = (x81>>((x82|x83)<=x84));

	if (t14 != 106709902104815092LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x85 = UINT64_MAX;
	static int32_t x86 = INT32_MAX;
	uint64_t t15 = 605156LLU;

	t15 = (x85>>((x86|x87)<=x88));

	if (t15 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x101 = UINT64_MAX;
	int8_t x102 = -1;
	int16_t x104 = INT16_MIN;
	uint64_t t16 = UINT64_MAX;

	t16 = (x101>>((x102|x103)<=x104));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x109 = UINT8_MAX;
	uint32_t x110 = 92189602U;
	volatile int8_t x111 = -1;
	int64_t x112 = INT64_MAX;
	volatile int32_t t17 = -47832;

	t17 = (x109>>((x110|x111)<=x112));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x118 = INT16_MAX;
	static volatile uint64_t x119 = UINT64_MAX;

	t18 = (x117>>((x118|x119)<=x120));

	if (t18 != 4245470749587LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x121 = 12141829;
	int32_t t19 = 2945;

	t19 = (x121>>((x122|x123)<=x124));

	if (t19 != 6070914) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x125 = INT32_MAX;
	int8_t x126 = 8;
	int16_t x127 = -9;
	int32_t x128 = INT32_MIN;
	volatile int32_t t20 = INT32_MAX;

	t20 = (x125>>((x126|x127)<=x128));

	if (t20 != INT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x133 = UINT8_MAX;
	int16_t x134 = INT16_MIN;
	uint64_t x135 = 130417776292994478LLU;
	int32_t t21 = 3;

	t21 = (x133>>((x134|x135)<=x136));

	if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x137 = 112183U;
	volatile int8_t x139 = INT8_MAX;
	uint8_t x140 = 50U;
	uint32_t t22 = 24U;

	t22 = (x137>>((x138|x139)<=x140));

	if (t22 != 112183U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x141 = UINT8_MAX;
	static uint8_t x142 = UINT8_MAX;
	int64_t x143 = -1LL;
	int32_t x144 = INT32_MIN;
	volatile int32_t t23 = 29716;

	t23 = (x141>>((x142|x143)<=x144));

	if (t23 != 255) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x149 = INT32_MAX;
	volatile int32_t x150 = 2583;
	volatile uint64_t x151 = UINT64_MAX;
	uint8_t x152 = 1U;
	volatile int32_t t24 = INT32_MAX;

	t24 = (x149>>((x150|x151)<=x152));

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x153 = 74;
	int8_t x154 = -3;
	int32_t x155 = -1;
	int32_t x156 = -1;
	int32_t t25 = 13;

	t25 = (x153>>((x154|x155)<=x156));

	if (t25 != 37) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x157 = INT32_MAX;
	int32_t x158 = 73918671;
	uint16_t x159 = 56U;
	int32_t t26 = INT32_MAX;

	t26 = (x157>>((x158|x159)<=x160));

	if (t26 != INT32_MAX) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x161 = INT16_MAX;
	uint64_t x162 = 10859LLU;
	uint32_t x163 = UINT32_MAX;
	int8_t x164 = -1;
	static int32_t t27 = -1440106;

	t27 = (x161>>((x162|x163)<=x164));

	if (t27 != 16383) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint64_t x165 = 54LLU;
	uint16_t x166 = 185U;
	static int16_t x167 = 11;

	t28 = (x165>>((x166|x167)<=x168));

	if (t28 != 54LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x169 = INT64_MAX;
	volatile int32_t x170 = INT32_MIN;

	t29 = (x169>>((x170|x171)<=x172));

	if (t29 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint32_t x181 = 1U;
	uint64_t x182 = 33360758546LLU;
	int32_t x183 = 10;
	uint16_t x184 = 9450U;
	static uint32_t t30 = 1564745839U;

	t30 = (x181>>((x182|x183)<=x184));

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x197 = 19U;
	uint8_t x198 = 2U;
	volatile uint64_t x199 = 31488221928LLU;
	int16_t x200 = -35;
	int32_t t31 = 10313848;

	t31 = (x197>>((x198|x199)<=x200));

	if (t31 != 9) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x203 = INT64_MAX;
	static volatile int64_t x204 = INT64_MIN;
	int32_t t32 = -7;

	t32 = (x201>>((x202|x203)<=x204));

	if (t32 != 11527) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x213 = INT32_MAX;
	int16_t x215 = -1298;
	int16_t x216 = 3;

	t33 = (x213>>((x214|x215)<=x216));

	if (t33 != 1073741823) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x217 = 866540211LL;
	int32_t x218 = INT32_MIN;
	volatile int16_t x220 = INT16_MIN;
	volatile int64_t t34 = -151378835047164108LL;

	t34 = (x217>>((x218|x219)<=x220));

	if (t34 != 866540211LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint8_t x225 = UINT8_MAX;
	static uint32_t x226 = 59U;
	int32_t x227 = INT32_MAX;
	static int8_t x228 = -1;
	int32_t t35 = 8456247;

	t35 = (x225>>((x226|x227)<=x228));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x241 = UINT32_MAX;
	int64_t x242 = INT64_MIN;
	int8_t x244 = INT8_MIN;

	t36 = (x241>>((x242|x243)<=x244));

	if (t36 != 2147483647U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x253 = UINT32_MAX;
	uint16_t x254 = 4U;
	uint32_t x255 = 4U;
	uint8_t x256 = 25U;
	volatile uint32_t t37 = 1U;

	t37 = (x253>>((x254|x255)<=x256));

	if (t37 != 2147483647U) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x261 = 0;
	volatile int32_t x262 = INT32_MIN;
	uint8_t x263 = 4U;
	uint32_t x264 = 265176881U;
	volatile int32_t t38 = -15167;

	t38 = (x261>>((x262|x263)<=x264));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x265 = 12028LLU;
	int32_t x266 = INT32_MIN;
	volatile int64_t x267 = -1LL;
	static uint32_t x268 = 22U;

	t39 = (x265>>((x266|x267)<=x268));

	if (t39 != 6014LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x269 = 2245735552534985069LLU;
	int8_t x270 = -1;
	int64_t x271 = -1LL;
	volatile int64_t x272 = INT64_MIN;
	uint64_t t40 = 89LLU;

	t40 = (x269>>((x270|x271)<=x272));

	if (t40 != 2245735552534985069LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x278 = 248997594U;
	uint64_t x279 = 793642939000233LLU;
	int32_t x280 = -8;

	t41 = (x277>>((x278|x279)<=x280));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x293 = 4LLU;
	int8_t x294 = -1;
	int8_t x295 = INT8_MIN;
	static uint16_t x296 = 1U;
	volatile uint64_t t42 = 26372035LLU;

	t42 = (x293>>((x294|x295)<=x296));

	if (t42 != 2LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x297 = 815997261516321375LL;
	volatile uint16_t x299 = 973U;
	volatile int16_t x300 = -1;
	static volatile int64_t t43 = -97LL;

	t43 = (x297>>((x298|x299)<=x300));

	if (t43 != 815997261516321375LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x305 = 115076160;
	int8_t x307 = -3;
	volatile int32_t t44 = 2764829;

	t44 = (x305>>((x306|x307)<=x308));

	if (t44 != 57538080) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x313 = UINT32_MAX;
	int64_t x314 = 8791957738421992LL;
	int16_t x315 = INT16_MIN;
	int8_t x316 = INT8_MIN;
	uint32_t t45 = 254U;

	t45 = (x313>>((x314|x315)<=x316));

	if (t45 != 2147483647U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x318 = 0;
	uint64_t x319 = 239328951LLU;
	int16_t x320 = 1;
	volatile uint64_t t46 = 1639246686LLU;

	t46 = (x317>>((x318|x319)<=x320));

	if (t46 != 107079LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x325 = INT16_MAX;
	int32_t t47 = 2086281;

	t47 = (x325>>((x326|x327)<=x328));

	if (t47 != 16383) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x342 = 567;
	volatile uint32_t x343 = UINT32_MAX;
	static uint8_t x344 = UINT8_MAX;
	volatile int32_t t48 = 359;

	t48 = (x341>>((x342|x343)<=x344));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x357 = 1;
	uint16_t x358 = 39U;
	uint64_t x359 = UINT64_MAX;
	int32_t x360 = INT32_MIN;
	volatile int32_t t49 = -32714979;

	t49 = (x357>>((x358|x359)<=x360));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x362 = -1;
	uint64_t x363 = 366975LLU;
	static uint16_t x364 = 5U;
	int32_t t50 = -1217;

	t50 = (x361>>((x362|x363)<=x364));

	if (t50 != 77150479) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x365 = 44313;
	volatile int8_t x366 = INT8_MAX;
	static int64_t x367 = INT64_MIN;
	int32_t t51 = 8;

	t51 = (x365>>((x366|x367)<=x368));

	if (t51 != 22156) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x375 = 227412U;
	uint8_t x376 = UINT8_MAX;

	t52 = (x373>>((x374|x375)<=x376));

	if (t52 != INT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x377 = UINT64_MAX;
	int16_t x378 = -1;
	int16_t x380 = INT16_MIN;
	uint64_t t53 = UINT64_MAX;

	t53 = (x377>>((x378|x379)<=x380));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x381 = 3425U;
	uint32_t x382 = 12484U;
	uint8_t x383 = 27U;
	int32_t x384 = INT32_MIN;

	t54 = (x381>>((x382|x383)<=x384));

	if (t54 != 1712) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x386 = INT16_MAX;
	int32_t x387 = INT32_MAX;
	int16_t x388 = -929;

	t55 = (x385>>((x386|x387)<=x388));

	if (t55 != 6785978LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x395 = INT16_MIN;
	int32_t x396 = -65552266;
	int32_t t56 = -2973;

	t56 = (x393>>((x394|x395)<=x396));

	if (t56 != 127) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x397 = 14;
	uint8_t x398 = 2U;
	int64_t x399 = INT64_MAX;
	volatile uint32_t x400 = UINT32_MAX;

	t57 = (x397>>((x398|x399)<=x400));

	if (t57 != 14) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint16_t x417 = UINT16_MAX;
	int8_t x418 = 0;
	volatile int16_t x419 = -1;
	uint64_t x420 = 10016067821494711LLU;
	volatile int32_t t58 = -118;

	t58 = (x417>>((x418|x419)<=x420));

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x421 = INT64_MAX;
	volatile uint16_t x422 = 98U;

	t59 = (x421>>((x422|x423)<=x424));

	if (t59 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x425 = UINT32_MAX;
	static uint64_t x426 = 259026434709LLU;
	volatile uint32_t t60 = UINT32_MAX;

	t60 = (x425>>((x426|x427)<=x428));

	if (t60 != UINT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint16_t x441 = 137U;
	uint32_t x442 = 210278944U;
	int32_t x443 = INT32_MAX;
	int32_t t61 = -163;

	t61 = (x441>>((x442|x443)<=x444));

	if (t61 != 68) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x449 = INT64_MAX;
	int32_t x451 = 9793278;
	int64_t x452 = 264786208650869420LL;
	volatile int64_t t62 = -25270LL;

	t62 = (x449>>((x450|x451)<=x452));

	if (t62 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x453 = 8165U;
	volatile int32_t x454 = -1;
	int16_t x455 = INT16_MIN;
	volatile int32_t t63 = 692406;

	t63 = (x453>>((x454|x455)<=x456));

	if (t63 != 4082) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x461 = UINT32_MAX;
	static volatile int64_t x462 = -11909733908LL;
	int32_t x463 = INT32_MAX;
	uint64_t x464 = 1LLU;
	uint32_t t64 = UINT32_MAX;

	t64 = (x461>>((x462|x463)<=x464));

	if (t64 != UINT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x465 = INT32_MAX;
	int16_t x466 = -1;
	static volatile int8_t x468 = -1;
	volatile int32_t t65 = 23237458;

	t65 = (x465>>((x466|x467)<=x468));

	if (t65 != 1073741823) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x475 = -1;
	int32_t x476 = INT32_MIN;
	volatile int32_t t66 = 165448988;

	t66 = (x473>>((x474|x475)<=x476));

	if (t66 != 255) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x481 = 19840U;
	int8_t x482 = INT8_MAX;
	int16_t x483 = -1;
	volatile int64_t x484 = 21LL;
	int32_t t67 = 22895735;

	t67 = (x481>>((x482|x483)<=x484));

	if (t67 != 9920) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x485 = 29215843U;
	uint64_t x486 = 0LLU;
	uint16_t x487 = 1931U;
	uint32_t t68 = 4U;

	t68 = (x485>>((x486|x487)<=x488));

	if (t68 != 14607921U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x489 = 73141U;
	uint16_t x490 = 47U;
	volatile int8_t x491 = INT8_MIN;
	int16_t x492 = -1;
	volatile uint32_t t69 = 2086502301U;

	t69 = (x489>>((x490|x491)<=x492));

	if (t69 != 36570U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x494 = 27209U;
	int16_t x496 = INT16_MIN;

	t70 = (x493>>((x494|x495)<=x496));

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x509 = INT64_MAX;
	int64_t x510 = INT64_MIN;
	uint16_t x511 = 7451U;
	uint16_t x512 = UINT16_MAX;
	static int64_t t71 = 556LL;

	t71 = (x509>>((x510|x511)<=x512));

	if (t71 != 4611686018427387903LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x517 = INT32_MAX;
	uint64_t x518 = 1067LLU;
	int64_t x519 = INT64_MAX;
	int8_t x520 = INT8_MAX;

	t72 = (x517>>((x518|x519)<=x520));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x529 = 6652LLU;
	uint64_t x530 = UINT64_MAX;
	int16_t x531 = -758;
	volatile int16_t x532 = INT16_MIN;
	static uint64_t t73 = 786340632797228LLU;

	t73 = (x529>>((x530|x531)<=x532));

	if (t73 != 6652LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x537 = 58799548891356LL;
	volatile int16_t x538 = -28;
	int32_t x539 = INT32_MIN;
	uint8_t x540 = 0U;
	volatile int64_t t74 = -174562921822427561LL;

	t74 = (x537>>((x538|x539)<=x540));

	if (t74 != 29399774445678LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x541 = INT8_MAX;
	volatile uint8_t x542 = UINT8_MAX;
	volatile int8_t x543 = -6;
	volatile int32_t t75 = 706;

	t75 = (x541>>((x542|x543)<=x544));

	if (t75 != 63) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x554 = -1;
	volatile uint32_t x555 = 225833187U;
	static uint32_t x556 = 0U;

	t76 = (x553>>((x554|x555)<=x556));

	if (t76 != 119LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x561 = 34LLU;
	int16_t x562 = INT16_MIN;
	int64_t x563 = -212928597556LL;
	int64_t x564 = -1LL;
	uint64_t t77 = 368LLU;

	t77 = (x561>>((x562|x563)<=x564));

	if (t77 != 17LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x566 = 1;
	int16_t x567 = 23;
	uint32_t t78 = 455260U;

	t78 = (x565>>((x566|x567)<=x568));

	if (t78 != 27543U) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint8_t x569 = UINT8_MAX;
	int8_t x571 = 25;
	volatile int16_t x572 = INT16_MIN;
	int32_t t79 = 941546352;

	t79 = (x569>>((x570|x571)<=x572));

	if (t79 != 255) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x573 = 3435208289491LLU;
	int16_t x574 = INT16_MAX;
	volatile int16_t x576 = -1;
	volatile uint64_t t80 = 5980LLU;

	t80 = (x573>>((x574|x575)<=x576));

	if (t80 != 1717604144745LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x577 = 126U;
	int32_t x578 = INT32_MIN;
	int64_t x580 = -1LL;
	uint32_t t81 = 7U;

	t81 = (x577>>((x578|x579)<=x580));

	if (t81 != 63U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x581 = UINT32_MAX;
	uint16_t x584 = 9684U;
	uint32_t t82 = 47243U;

	t82 = (x581>>((x582|x583)<=x584));

	if (t82 != 2147483647U) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x589 = UINT32_MAX;
	uint64_t x590 = 2426800LLU;
	volatile uint32_t x591 = 54U;
	int16_t x592 = INT16_MAX;
	volatile uint32_t t83 = UINT32_MAX;

	t83 = (x589>>((x590|x591)<=x592));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x597 = 394044123U;
	int32_t x598 = INT32_MAX;
	int32_t x599 = INT32_MAX;
	uint16_t x600 = 3U;
	volatile uint32_t t84 = 1433U;

	t84 = (x597>>((x598|x599)<=x600));

	if (t84 != 394044123U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x603 = UINT64_MAX;
	int64_t x604 = -50LL;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = (x601>>((x602|x603)<=x604));

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x609 = UINT8_MAX;
	int32_t x610 = INT32_MAX;
	static int64_t x612 = -1LL;
	volatile int32_t t86 = -5;

	t86 = (x609>>((x610|x611)<=x612));

	if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x613 = UINT64_MAX;
	int64_t x614 = INT64_MIN;
	int32_t x615 = -1;
	int32_t x616 = 375936;
	uint64_t t87 = 148767556853214LLU;

	t87 = (x613>>((x614|x615)<=x616));

	if (t87 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x617 = UINT8_MAX;
	int16_t x618 = INT16_MIN;
	volatile int16_t x619 = -536;
	int32_t x620 = INT32_MAX;

	t88 = (x617>>((x618|x619)<=x620));

	if (t88 != 127) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x622 = INT8_MIN;
	static uint64_t x623 = UINT64_MAX;
	static int8_t x624 = -6;

	t89 = (x621>>((x622|x623)<=x624));

	if (t89 != 220032358LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x625 = 43621U;
	volatile uint32_t x626 = UINT32_MAX;

	t90 = (x625>>((x626|x627)<=x628));

	if (t90 != 21810U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x633 = 22;
	volatile int32_t x634 = -1;
	static int64_t x635 = INT64_MIN;
	int64_t x636 = INT64_MIN;
	int32_t t91 = -14376;

	t91 = (x633>>((x634|x635)<=x636));

	if (t91 != 22) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x641 = 10U;
	uint32_t x642 = UINT32_MAX;
	volatile int32_t x644 = INT32_MAX;
	int32_t t92 = -228;

	t92 = (x641>>((x642|x643)<=x644));

	if (t92 != 10) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x661 = 25915435178LL;
	int16_t x662 = -1;
	int32_t x663 = 1914010;
	volatile int64_t x664 = INT64_MAX;
	volatile int64_t t93 = -27212936333858368LL;

	t93 = (x661>>((x662|x663)<=x664));

	if (t93 != 12957717589LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x665 = INT16_MAX;
	static volatile uint8_t x666 = 38U;
	static uint64_t x667 = UINT64_MAX;
	int8_t x668 = INT8_MIN;
	int32_t t94 = -59;

	t94 = (x665>>((x666|x667)<=x668));

	if (t94 != 32767) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x677 = 669128865U;
	uint64_t x679 = UINT64_MAX;
	static volatile uint32_t t95 = 954U;

	t95 = (x677>>((x678|x679)<=x680));

	if (t95 != 669128865U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x685 = 6200798702482316079LLU;
	volatile uint8_t x686 = 7U;
	uint16_t x687 = 9U;
	volatile int16_t x688 = INT16_MAX;

	t96 = (x685>>((x686|x687)<=x688));

	if (t96 != 3100399351241158039LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x689 = 6;
	static int64_t x690 = 12714LL;
	int8_t x691 = -8;
	int16_t x692 = -1;
	int32_t t97 = 1001567659;

	t97 = (x689>>((x690|x691)<=x692));

	if (t97 != 3) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x702 = INT8_MAX;
	uint16_t x704 = 9U;
	volatile uint64_t t98 = UINT64_MAX;

	t98 = (x701>>((x702|x703)<=x704));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x705 = INT16_MAX;
	static int16_t x706 = INT16_MAX;
	static int32_t t99 = 26941790;

	t99 = (x705>>((x706|x707)<=x708));

	if (t99 != 16383) { NG(); } else { ; }
	
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

