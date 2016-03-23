
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x2 = INT64_MIN;
uint8_t x31 = 60U;
int32_t x49 = -1;
int8_t x53 = -1;
uint16_t x56 = 343U;
static int64_t x110 = -45LL;
int64_t x112 = -1LL;
static uint16_t x126 = UINT16_MAX;
static int64_t x134 = -1LL;
volatile int64_t t12 = 0LL;
int64_t x141 = -1LL;
volatile int32_t x170 = INT32_MIN;
int8_t x211 = -2;
uint16_t x214 = 19U;
static int32_t x219 = -526;
int16_t x230 = INT16_MIN;
int8_t x239 = INT8_MIN;
int8_t x244 = -1;
int64_t x250 = INT64_MIN;
volatile int64_t x252 = INT64_MAX;
int64_t t27 = 359213919385579LL;
static uint32_t x258 = UINT32_MAX;
int64_t x266 = INT64_MIN;
int32_t x271 = INT32_MIN;
volatile int64_t x272 = INT64_MAX;
volatile int32_t t30 = 10;
int8_t x274 = -1;
volatile uint16_t x289 = UINT16_MAX;
uint8_t x290 = UINT8_MAX;
static int64_t x321 = 12694885794509LL;
static int16_t x325 = INT16_MIN;
static int64_t x334 = INT64_MIN;
uint16_t x335 = 11924U;
static int16_t x360 = -1;
int8_t x386 = INT8_MIN;
uint8_t x387 = UINT8_MAX;
uint32_t x388 = 139708U;
static int8_t x397 = -1;
static volatile int16_t x400 = INT16_MAX;
static int32_t t44 = -12561617;
static int8_t x404 = INT8_MIN;
int8_t x413 = INT8_MIN;
volatile int8_t x416 = -1;
volatile int32_t t47 = 75424;
int8_t x469 = 0;
volatile uint8_t x473 = UINT8_MAX;
int8_t x474 = -1;
int32_t x475 = INT32_MAX;
static int32_t t51 = -27599;
int8_t x491 = -1;
volatile uint64_t t53 = 3333344750881126LLU;
static int64_t x501 = INT64_MIN;
int64_t t54 = -25128104531002LL;
int64_t x514 = 465336921581402674LL;
volatile int64_t x540 = -1LL;
int64_t x551 = INT64_MIN;
static volatile int32_t x552 = INT32_MIN;
volatile uint64_t x576 = UINT64_MAX;
static volatile int64_t x586 = 123273789470LL;
volatile int8_t x589 = INT8_MIN;
uint64_t x591 = 7687313764539LLU;
uint64_t x626 = UINT64_MAX;
uint16_t x643 = 389U;
uint64_t x651 = 156LLU;
int32_t x673 = INT32_MIN;
int8_t x674 = INT8_MIN;
volatile int64_t x684 = INT64_MAX;
uint64_t x692 = 294326224LLU;
static int32_t x708 = -1;
volatile int64_t t75 = -85672332146LL;
uint64_t t78 = 100072180LLU;
uint16_t x740 = 911U;
static uint8_t x749 = UINT8_MAX;
int8_t x751 = INT8_MIN;
volatile int8_t x752 = INT8_MAX;
volatile int64_t t80 = 207813790LL;
int32_t x753 = INT32_MIN;
uint16_t x755 = 2U;
volatile int32_t t81 = 167736450;
int64_t x763 = INT64_MIN;
int32_t x773 = INT32_MIN;
int8_t x774 = INT8_MAX;
static int8_t x792 = INT8_MAX;
volatile uint64_t t85 = 6692707019170613LLU;
static int32_t x805 = INT32_MAX;
int64_t x807 = INT64_MIN;
volatile int16_t x819 = INT16_MAX;
uint32_t x820 = UINT32_MAX;
volatile uint64_t t87 = 1240811981124876LLU;
int32_t x824 = INT32_MAX;
uint32_t x830 = UINT32_MAX;
static uint64_t x849 = 12675103262998LLU;
static volatile int32_t x852 = INT32_MIN;
volatile uint64_t t91 = 437550539933558430LLU;
static int64_t x861 = INT64_MIN;
volatile int32_t x866 = INT32_MIN;
volatile int64_t x882 = INT64_MAX;
volatile uint16_t x897 = UINT16_MAX;
static int16_t x907 = INT16_MIN;
int8_t x909 = INT8_MIN;
int32_t x918 = INT32_MIN;
int16_t x919 = -1;
int64_t x937 = -1LL;
int64_t t103 = 2175LL;
int32_t x958 = INT32_MIN;
volatile uint64_t t106 = 23927663819323909LLU;
int8_t x973 = INT8_MAX;
static int32_t x986 = -1;
volatile uint64_t x991 = 0LLU;
static uint64_t x995 = 2034419LLU;
int32_t x996 = INT32_MIN;
volatile uint64_t t112 = 3367488652349406480LLU;
int16_t x1037 = INT16_MIN;
uint32_t x1068 = UINT32_MAX;
static uint16_t x1071 = 346U;
uint64_t x1084 = 446661133LLU;
int64_t x1085 = INT64_MIN;
int8_t x1095 = INT8_MAX;
volatile uint32_t x1118 = UINT32_MAX;
volatile int32_t x1122 = -1;
static volatile int16_t x1130 = INT16_MIN;
int32_t x1140 = INT32_MIN;
volatile uint32_t t131 = 25632U;
int16_t x1145 = INT16_MIN;
uint8_t x1146 = 41U;
volatile int32_t t132 = 1400894;
volatile int8_t x1163 = INT8_MIN;
uint32_t x1184 = UINT32_MAX;
volatile uint64_t t138 = 1230583933337567428LLU;
static int16_t x1205 = 0;
volatile int64_t t139 = -4LL;
int8_t x1211 = -47;
volatile uint32_t t140 = 189490056U;
uint64_t x1253 = 639046174081LLU;
int8_t x1256 = INT8_MIN;
uint64_t t145 = 4LLU;
volatile int32_t t146 = 59;
volatile int16_t x1289 = -111;
static int16_t x1293 = -1;
int64_t x1294 = INT64_MAX;
volatile int8_t x1295 = INT8_MIN;
static volatile int64_t t149 = 5LL;
volatile int16_t x1307 = INT16_MIN;
uint8_t x1310 = 46U;
int32_t x1316 = INT32_MAX;
static int16_t x1327 = INT16_MIN;
volatile int64_t x1357 = INT64_MIN;
volatile uint32_t x1360 = 36805U;
volatile int64_t x1393 = INT64_MIN;
uint64_t x1398 = UINT64_MAX;
int16_t x1403 = INT16_MIN;
int16_t x1404 = 0;
int64_t x1408 = INT64_MAX;
static int64_t x1428 = INT64_MAX;
static int64_t x1430 = INT64_MIN;
uint16_t x1431 = 3U;
int16_t x1434 = INT16_MIN;
int8_t x1435 = INT8_MIN;
static int32_t x1445 = -1;
int16_t x1446 = INT16_MAX;
int32_t x1454 = INT32_MIN;
static volatile int64_t x1465 = INT64_MAX;
uint64_t t173 = 929561768589298LLU;
uint8_t x1530 = 110U;
int8_t x1541 = INT8_MIN;
static volatile uint32_t x1544 = 843061U;
int32_t x1547 = INT32_MIN;
static int64_t x1574 = 14913962444831364LL;
static int8_t x1597 = -3;
int16_t x1598 = INT16_MIN;
int64_t x1611 = -4014553946823LL;
static int32_t x1613 = 28177792;
static volatile int32_t x1615 = -17;
static volatile uint16_t x1617 = 3705U;
int32_t t185 = -568;
volatile uint16_t x1621 = UINT16_MAX;
volatile int32_t t186 = -321660567;
int8_t x1631 = -1;
volatile int8_t x1641 = -1;
static int64_t x1643 = -1LL;
volatile int8_t x1659 = -1;
int64_t x1670 = -1LL;
uint8_t x1672 = 18U;
int8_t x1681 = 1;
volatile int32_t t195 = -31555;
static int32_t x1695 = INT32_MIN;
volatile uint64_t t197 = 53711190262LLU;
int64_t x1719 = -1LL;


void f0(void) {
    	int8_t x1 = -1;
	int8_t x3 = INT8_MIN;
	int32_t x4 = 125011;
	int64_t t0 = -519738442661LL;

    t0 = (x1/(x2*(x3<=x4)));

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x17 = -1057031371827395701LL;
	int16_t x18 = -13883;
	int16_t x19 = INT16_MIN;
	static int64_t x20 = INT64_MAX;
	volatile int64_t t1 = -3998LL;

    t1 = (x17/(x18*(x19<=x20)));

    if (t1 != 76138541513174LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x25 = -1LL;
	int32_t x26 = -1;
	static volatile int32_t x27 = INT32_MIN;
	uint32_t x28 = UINT32_MAX;
	static volatile int64_t t2 = 917164LL;

    t2 = (x25/(x26*(x27<=x28)));

    if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x29 = INT32_MIN;
	int32_t x30 = INT32_MAX;
	uint32_t x32 = 7541126U;
	int32_t t3 = -1812431;

    t3 = (x29/(x30*(x31<=x32)));

    if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x41 = -14;
	uint32_t x42 = 541915U;
	int8_t x43 = INT8_MIN;
	static uint8_t x44 = 63U;
	volatile uint32_t t4 = 93325241U;

    t4 = (x41/(x42*(x43<=x44)));

    if (t4 != 7925U) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x50 = 56230062U;
	int16_t x51 = -1;
	volatile int8_t x52 = -1;
	volatile uint32_t t5 = 41620U;

    t5 = (x49/(x50*(x51<=x52)));

    if (t5 != 76U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x54 = -13760;
	int64_t x55 = INT64_MIN;
	static int32_t t6 = -167;

    t6 = (x53/(x54*(x55<=x56)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x65 = 195708282U;
	uint64_t x66 = 482283LLU;
	static int32_t x67 = INT32_MIN;
	int16_t x68 = INT16_MIN;
	uint64_t t7 = 9282LLU;

    t7 = (x65/(x66*(x67<=x68)));

    if (t7 != 405LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x89 = INT16_MIN;
	volatile int8_t x90 = -1;
	int32_t x91 = INT32_MIN;
	int8_t x92 = INT8_MIN;
	volatile int32_t t8 = 110;

    t8 = (x89/(x90*(x91<=x92)));

    if (t8 != 32768) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x109 = INT32_MIN;
	int16_t x111 = -244;
	static int64_t t9 = 823628967551124301LL;

    t9 = (x109/(x110*(x111<=x112)));

    if (t9 != 47721858LL) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x121 = INT16_MIN;
	static int64_t x122 = INT64_MAX;
	int16_t x123 = INT16_MAX;
	uint64_t x124 = 17775698LLU;
	int64_t t10 = 13393LL;

    t10 = (x121/(x122*(x123<=x124)));

    if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int16_t x125 = -2;
	uint64_t x127 = 1495LLU;
	volatile int8_t x128 = INT8_MIN;
	int32_t t11 = 1938;

    t11 = (x125/(x126*(x127<=x128)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x133 = -1;
	int16_t x135 = INT16_MIN;
	volatile int8_t x136 = INT8_MIN;

    t12 = (x133/(x134*(x135<=x136)));

    if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x142 = 18U;
	int64_t x143 = -126605645652LL;
	int8_t x144 = INT8_MAX;
	volatile int64_t t13 = 664602325LL;

    t13 = (x141/(x142*(x143<=x144)));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x149 = 8554;
	uint16_t x150 = 403U;
	int16_t x151 = INT16_MIN;
	static int32_t x152 = -1;
	static volatile int32_t t14 = 602587;

    t14 = (x149/(x150*(x151<=x152)));

    if (t14 != 21) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x169 = INT64_MIN;
	volatile int32_t x171 = -1;
	int64_t x172 = 3875051127161248978LL;
	volatile int64_t t15 = 1202822619LL;

    t15 = (x169/(x170*(x171<=x172)));

    if (t15 != 4294967296LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x173 = -507133203;
	static volatile int32_t x174 = 170700259;
	int64_t x175 = INT64_MIN;
	volatile uint64_t x176 = UINT64_MAX;
	volatile int32_t t16 = -11;

    t16 = (x173/(x174*(x175<=x176)));

    if (t16 != -2) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x177 = INT8_MIN;
	volatile int8_t x178 = INT8_MAX;
	volatile int8_t x179 = INT8_MAX;
	uint64_t x180 = 25947226666LLU;
	volatile int32_t t17 = -3500223;

    t17 = (x177/(x178*(x179<=x180)));

    if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x193 = INT16_MAX;
	uint64_t x194 = UINT64_MAX;
	int32_t x195 = INT32_MIN;
	static int16_t x196 = 133;
	volatile uint64_t t18 = 6LLU;

    t18 = (x193/(x194*(x195<=x196)));

    if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x197 = -1;
	static int32_t x198 = INT32_MIN;
	int16_t x199 = INT16_MIN;
	int64_t x200 = -229LL;
	volatile int32_t t19 = -27898679;

    t19 = (x197/(x198*(x199<=x200)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint32_t x209 = UINT32_MAX;
	int32_t x210 = INT32_MIN;
	volatile int32_t x212 = INT32_MAX;
	static uint32_t t20 = 8039U;

    t20 = (x209/(x210*(x211<=x212)));

    if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x213 = 310661;
	int8_t x215 = INT8_MIN;
	volatile int64_t x216 = 1LL;
	int32_t t21 = -2;

    t21 = (x213/(x214*(x215<=x216)));

    if (t21 != 16350) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x217 = 109160683387LLU;
	uint32_t x218 = 323U;
	static volatile int16_t x220 = 4428;
	uint64_t t22 = 804242LLU;

    t22 = (x217/(x218*(x219<=x220)));

    if (t22 != 337958772LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint16_t x229 = 22912U;
	int8_t x231 = -4;
	uint16_t x232 = 234U;
	int32_t t23 = -40727;

    t23 = (x229/(x230*(x231<=x232)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x237 = INT8_MIN;
	uint64_t x238 = 20875612636835800LLU;
	int16_t x240 = 13;
	volatile uint64_t t24 = 2LLU;

    t24 = (x237/(x238*(x239<=x240)));

    if (t24 != 883LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x241 = INT64_MAX;
	uint64_t x242 = 4506802915338161442LLU;
	int32_t x243 = -1;
	volatile uint64_t t25 = 446632225229878LLU;

    t25 = (x241/(x242*(x243<=x244)));

    if (t25 != 2LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x245 = INT16_MAX;
	int8_t x246 = INT8_MIN;
	int8_t x247 = INT8_MIN;
	static int8_t x248 = 4;
	volatile int32_t t26 = -335326;

    t26 = (x245/(x246*(x247<=x248)));

    if (t26 != -255) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x249 = 2201067511LL;
	uint16_t x251 = 82U;

    t27 = (x249/(x250*(x251<=x252)));

    if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x257 = -1;
	int32_t x259 = INT32_MIN;
	int32_t x260 = INT32_MAX;
	static uint32_t t28 = 1622614124U;

    t28 = (x257/(x258*(x259<=x260)));

    if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x265 = 5U;
	int32_t x267 = -1;
	static volatile int16_t x268 = 63;
	volatile int64_t t29 = -210039LL;

    t29 = (x265/(x266*(x267<=x268)));

    if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x269 = INT32_MIN;
	uint16_t x270 = 6U;

    t30 = (x269/(x270*(x271<=x272)));

    if (t30 != -357913941) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x273 = -37;
	int16_t x275 = -1;
	volatile int8_t x276 = -1;
	volatile int32_t t31 = -622705515;

    t31 = (x273/(x274*(x275<=x276)));

    if (t31 != 37) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x291 = -1;
	uint64_t x292 = UINT64_MAX;
	static volatile int32_t t32 = 597716383;

    t32 = (x289/(x290*(x291<=x292)));

    if (t32 != 257) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x301 = INT64_MIN;
	uint8_t x302 = 1U;
	static int64_t x303 = -324141729665401LL;
	int64_t x304 = -648417279677LL;
	volatile int64_t t33 = INT64_MIN;

    t33 = (x301/(x302*(x303<=x304)));

    if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
    	static int8_t x322 = INT8_MIN;
	int32_t x323 = 72037676;
	static volatile int64_t x324 = 3093764496485713035LL;
	volatile int64_t t34 = 471295010LL;

    t34 = (x321/(x322*(x323<=x324)));

    if (t34 != -99178795269LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x326 = INT64_MIN;
	static int16_t x327 = INT16_MAX;
	uint64_t x328 = 11045457814208LLU;
	int64_t t35 = -2924021068LL;

    t35 = (x325/(x326*(x327<=x328)));

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x333 = -1;
	static int32_t x336 = INT32_MAX;
	int64_t t36 = -1022661LL;

    t36 = (x333/(x334*(x335<=x336)));

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x341 = 60U;
	int32_t x342 = INT32_MIN;
	static int32_t x343 = -233295695;
	int32_t x344 = -1;
	uint32_t t37 = 56251U;

    t37 = (x341/(x342*(x343<=x344)));

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	static uint16_t x353 = 3U;
	uint8_t x354 = UINT8_MAX;
	volatile int64_t x355 = INT64_MIN;
	int8_t x356 = INT8_MIN;
	static volatile int32_t t38 = 0;

    t38 = (x353/(x354*(x355<=x356)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x357 = 2;
	static uint16_t x358 = 127U;
	uint32_t x359 = 3569365U;
	static volatile int32_t t39 = 135481734;

    t39 = (x357/(x358*(x359<=x360)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x365 = INT32_MIN;
	static uint16_t x366 = 63U;
	int16_t x367 = INT16_MIN;
	int64_t x368 = 135594110319LL;
	volatile int32_t t40 = 888602496;

    t40 = (x365/(x366*(x367<=x368)));

    if (t40 != -34087042) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x373 = INT32_MIN;
	int32_t x374 = -215;
	int32_t x375 = INT32_MIN;
	int8_t x376 = -1;
	int32_t t41 = -57863096;

    t41 = (x373/(x374*(x375<=x376)));

    if (t41 != 9988296) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint64_t x385 = UINT64_MAX;
	static uint64_t t42 = 10962119301171LLU;

    t42 = (x385/(x386*(x387<=x388)));

    if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x389 = INT8_MIN;
	volatile uint64_t x390 = 16263902210LLU;
	int64_t x391 = 4012183568985LL;
	volatile uint64_t x392 = 186255151156350718LLU;
	static volatile uint64_t t43 = 6777161LLU;

    t43 = (x389/(x390*(x391<=x392)));

    if (t43 != 1134213907LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile uint8_t x398 = UINT8_MAX;
	int8_t x399 = 0;

    t44 = (x397/(x398*(x399<=x400)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x401 = -1;
	static int8_t x402 = INT8_MIN;
	uint64_t x403 = 2434400LLU;
	volatile int32_t t45 = -12;

    t45 = (x401/(x402*(x403<=x404)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int64_t x414 = 1825340LL;
	uint32_t x415 = 37U;
	int64_t t46 = 3LL;

    t46 = (x413/(x414*(x415<=x416)));

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	static int8_t x425 = INT8_MIN;
	volatile uint16_t x426 = 145U;
	int16_t x427 = INT16_MIN;
	volatile uint8_t x428 = 4U;

    t47 = (x425/(x426*(x427<=x428)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x441 = 59678240U;
	volatile int16_t x442 = INT16_MIN;
	int32_t x443 = INT32_MIN;
	int8_t x444 = INT8_MIN;
	volatile uint32_t t48 = 24U;

    t48 = (x441/(x442*(x443<=x444)));

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x461 = INT8_MIN;
	uint64_t x462 = 1326513501932LLU;
	uint8_t x463 = 17U;
	uint8_t x464 = UINT8_MAX;
	static volatile uint64_t t49 = 1007LLU;

    t49 = (x461/(x462*(x463<=x464)));

    if (t49 != 13906186LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint8_t x470 = 1U;
	static uint64_t x471 = 688433950LLU;
	int8_t x472 = -28;
	volatile int32_t t50 = -93;

    t50 = (x469/(x470*(x471<=x472)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x476 = 1459941323168758LL;

    t51 = (x473/(x474*(x475<=x476)));

    if (t51 != -255) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int32_t x489 = INT32_MIN;
	static uint16_t x490 = UINT16_MAX;
	uint16_t x492 = UINT16_MAX;
	volatile int32_t t52 = 243;

    t52 = (x489/(x490*(x491<=x492)));

    if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x497 = 15LLU;
	volatile int8_t x498 = INT8_MIN;
	int64_t x499 = INT64_MIN;
	int64_t x500 = -8052878LL;

    t53 = (x497/(x498*(x499<=x500)));

    if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x502 = INT32_MIN;
	volatile int16_t x503 = INT16_MAX;
	uint64_t x504 = 51557416LLU;

    t54 = (x501/(x502*(x503<=x504)));

    if (t54 != 4294967296LL) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x505 = UINT8_MAX;
	int64_t x506 = INT64_MIN;
	volatile int64_t x507 = INT64_MIN;
	int16_t x508 = INT16_MAX;
	volatile int64_t t55 = -827292022542LL;

    t55 = (x505/(x506*(x507<=x508)));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int64_t x513 = -1LL;
	int8_t x515 = -43;
	int64_t x516 = -1LL;
	volatile int64_t t56 = 31923171975395609LL;

    t56 = (x513/(x514*(x515<=x516)));

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x521 = 4U;
	static uint64_t x522 = 913990726945LLU;
	static uint32_t x523 = 649U;
	int64_t x524 = 4243919985216454LL;
	uint64_t t57 = 87236LLU;

    t57 = (x521/(x522*(x523<=x524)));

    if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint64_t x533 = 413LLU;
	int16_t x534 = 104;
	volatile int16_t x535 = -3017;
	int16_t x536 = -217;
	static volatile uint64_t t58 = 3LLU;

    t58 = (x533/(x534*(x535<=x536)));

    if (t58 != 3LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x537 = INT64_MIN;
	int8_t x538 = 5;
	volatile int16_t x539 = INT16_MIN;
	static int64_t t59 = 14214589175LL;

    t59 = (x537/(x538*(x539<=x540)));

    if (t59 != -1844674407370955161LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int8_t x549 = -1;
	volatile uint8_t x550 = 1U;
	static int32_t t60 = -3417;

    t60 = (x549/(x550*(x551<=x552)));

    if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x561 = 3U;
	int8_t x562 = INT8_MIN;
	int32_t x563 = INT32_MAX;
	uint32_t x564 = UINT32_MAX;
	volatile int32_t t61 = -16930056;

    t61 = (x561/(x562*(x563<=x564)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x573 = -2;
	uint16_t x574 = 1358U;
	int64_t x575 = INT64_MIN;
	volatile int32_t t62 = -11205153;

    t62 = (x573/(x574*(x575<=x576)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x585 = 101U;
	int8_t x587 = INT8_MIN;
	uint8_t x588 = 51U;
	volatile int64_t t63 = 1231172613LL;

    t63 = (x585/(x586*(x587<=x588)));

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	static int32_t x590 = -13873588;
	static int32_t x592 = INT32_MIN;
	int32_t t64 = -1;

    t64 = (x589/(x590*(x591<=x592)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x625 = 97960;
	int32_t x627 = INT32_MIN;
	int64_t x628 = 13259760670LL;
	volatile uint64_t t65 = 1LLU;

    t65 = (x625/(x626*(x627<=x628)));

    if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x633 = INT32_MIN;
	uint32_t x634 = 4U;
	uint16_t x635 = 15U;
	int16_t x636 = INT16_MAX;
	uint32_t t66 = 279565U;

    t66 = (x633/(x634*(x635<=x636)));

    if (t66 != 536870912U) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x637 = 0;
	int64_t x638 = INT64_MAX;
	int8_t x639 = INT8_MIN;
	int8_t x640 = INT8_MIN;
	volatile int64_t t67 = 64528230564512145LL;

    t67 = (x637/(x638*(x639<=x640)));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x641 = -1;
	static volatile int64_t x642 = -1LL;
	uint32_t x644 = 19527206U;
	int64_t t68 = -51144381100353LL;

    t68 = (x641/(x642*(x643<=x644)));

    if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x649 = INT32_MIN;
	int64_t x650 = INT64_MAX;
	uint32_t x652 = UINT32_MAX;
	volatile int64_t t69 = 54262036860651LL;

    t69 = (x649/(x650*(x651<=x652)));

    if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x657 = 2;
	static volatile int64_t x658 = INT64_MAX;
	int16_t x659 = INT16_MIN;
	int64_t x660 = 120803452297750364LL;
	int64_t t70 = 107428317LL;

    t70 = (x657/(x658*(x659<=x660)));

    if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
    	uint32_t x675 = 0U;
	uint32_t x676 = UINT32_MAX;
	static volatile int32_t t71 = 45;

    t71 = (x673/(x674*(x675<=x676)));

    if (t71 != 16777216) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint32_t x681 = 1637380U;
	volatile int64_t x682 = -1LL;
	int32_t x683 = INT32_MAX;
	int64_t t72 = -673199087592868LL;

    t72 = (x681/(x682*(x683<=x684)));

    if (t72 != -1637380LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x689 = 0;
	static volatile int8_t x690 = -5;
	uint8_t x691 = 108U;
	int32_t t73 = -5915647;

    t73 = (x689/(x690*(x691<=x692)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x705 = 23608U;
	uint32_t x706 = UINT32_MAX;
	static int16_t x707 = INT16_MIN;
	static volatile uint32_t t74 = 2166670U;

    t74 = (x705/(x706*(x707<=x708)));

    if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int32_t x713 = INT32_MIN;
	int64_t x714 = -1LL;
	uint32_t x715 = 966032U;
	static int16_t x716 = -1;

    t75 = (x713/(x714*(x715<=x716)));

    if (t75 != 2147483648LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x717 = UINT16_MAX;
	static int8_t x718 = INT8_MIN;
	int32_t x719 = -1;
	uint16_t x720 = UINT16_MAX;
	volatile int32_t t76 = 230;

    t76 = (x717/(x718*(x719<=x720)));

    if (t76 != -511) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x721 = 24U;
	volatile int64_t x722 = INT64_MIN;
	volatile uint64_t x723 = 2056657511528623LLU;
	static int16_t x724 = -1;
	static volatile int64_t t77 = -2526719698166LL;

    t77 = (x721/(x722*(x723<=x724)));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x733 = INT32_MIN;
	volatile uint64_t x734 = UINT64_MAX;
	uint64_t x735 = 11LLU;
	int32_t x736 = 2594;

    t78 = (x733/(x734*(x735<=x736)));

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x737 = INT64_MIN;
	volatile int8_t x738 = INT8_MIN;
	int8_t x739 = -4;
	int64_t t79 = -1LL;

    t79 = (x737/(x738*(x739<=x740)));

    if (t79 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int64_t x750 = INT64_MAX;

    t80 = (x749/(x750*(x751<=x752)));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x754 = INT32_MIN;
	volatile uint8_t x756 = 86U;

    t81 = (x753/(x754*(x755<=x756)));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x761 = UINT16_MAX;
	uint8_t x762 = 59U;
	volatile int8_t x764 = -6;
	volatile int32_t t82 = 43;

    t82 = (x761/(x762*(x763<=x764)));

    if (t82 != 1110) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x775 = INT16_MIN;
	int16_t x776 = 1;
	volatile int32_t t83 = -214002845;

    t83 = (x773/(x774*(x775<=x776)));

    if (t83 != -16909320) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x789 = 32U;
	int16_t x790 = -1;
	int16_t x791 = -1;
	volatile int32_t t84 = 395;

    t84 = (x789/(x790*(x791<=x792)));

    if (t84 != -32) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x797 = INT64_MAX;
	uint64_t x798 = 2LLU;
	volatile int32_t x799 = -1;
	int32_t x800 = INT32_MAX;

    t85 = (x797/(x798*(x799<=x800)));

    if (t85 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x806 = INT8_MIN;
	int32_t x808 = -1;
	int32_t t86 = -1;

    t86 = (x805/(x806*(x807<=x808)));

    if (t86 != -16777215) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x817 = 60;
	uint64_t x818 = 19898862657870641LLU;

    t87 = (x817/(x818*(x819<=x820)));

    if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x821 = -15165;
	volatile int64_t x822 = INT64_MIN;
	static int16_t x823 = -1;
	static int64_t t88 = 2138361LL;

    t88 = (x821/(x822*(x823<=x824)));

    if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x825 = -1;
	volatile uint32_t x826 = 1232460U;
	int64_t x827 = -1LL;
	int8_t x828 = INT8_MAX;
	uint32_t t89 = 36491U;

    t89 = (x825/(x826*(x827<=x828)));

    if (t89 != 3484U) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x829 = INT16_MIN;
	uint8_t x831 = 0U;
	uint16_t x832 = UINT16_MAX;
	volatile uint32_t t90 = 5788U;

    t90 = (x829/(x830*(x831<=x832)));

    if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x850 = INT16_MIN;
	uint64_t x851 = 28LLU;

    t91 = (x849/(x850*(x851<=x852)));

    if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int64_t x857 = INT64_MIN;
	volatile int32_t x858 = 1;
	volatile int16_t x859 = -1;
	int8_t x860 = 15;
	volatile int64_t t92 = INT64_MIN;

    t92 = (x857/(x858*(x859<=x860)));

    if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x862 = INT32_MIN;
	uint32_t x863 = 201676U;
	int64_t x864 = INT64_MAX;
	static int64_t t93 = -1047481012262706LL;

    t93 = (x861/(x862*(x863<=x864)));

    if (t93 != 4294967296LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x865 = 389;
	uint8_t x867 = UINT8_MAX;
	uint8_t x868 = UINT8_MAX;
	int32_t t94 = 3960;

    t94 = (x865/(x866*(x867<=x868)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x881 = 8U;
	int32_t x883 = -1;
	uint64_t x884 = UINT64_MAX;
	int64_t t95 = 64510922004773LL;

    t95 = (x881/(x882*(x883<=x884)));

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int64_t x889 = INT64_MAX;
	int32_t x890 = 126043;
	int32_t x891 = INT32_MIN;
	int8_t x892 = 0;
	int64_t t96 = 4327457663926LL;

    t96 = (x889/(x890*(x891<=x892)));

    if (t96 != 73176392476018LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x898 = INT64_MAX;
	int8_t x899 = INT8_MIN;
	static volatile int64_t x900 = -1LL;
	volatile int64_t t97 = 2343991777LL;

    t97 = (x897/(x898*(x899<=x900)));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint8_t x905 = 0U;
	int16_t x906 = 99;
	static int8_t x908 = -1;
	volatile int32_t t98 = -3;

    t98 = (x905/(x906*(x907<=x908)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x910 = INT8_MIN;
	int64_t x911 = 21LL;
	volatile uint8_t x912 = UINT8_MAX;
	int32_t t99 = 38336412;

    t99 = (x909/(x910*(x911<=x912)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static uint64_t x917 = 6627007LLU;
	static int32_t x920 = 218529133;
	volatile uint64_t t100 = 2LLU;

    t100 = (x917/(x918*(x919<=x920)));

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x925 = 48U;
	int16_t x926 = -14;
	int64_t x927 = -1784167631514LL;
	int16_t x928 = -1;
	int32_t t101 = 1735343;

    t101 = (x925/(x926*(x927<=x928)));

    if (t101 != -3) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x929 = INT16_MIN;
	uint64_t x930 = 6LLU;
	volatile int16_t x931 = -1;
	volatile int32_t x932 = INT32_MAX;
	static volatile uint64_t t102 = 1506228700215241LLU;

    t102 = (x929/(x930*(x931<=x932)));

    if (t102 != 3074457345618253141LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint8_t x938 = 7U;
	volatile uint32_t x939 = 1U;
	uint32_t x940 = 56710U;

    t103 = (x937/(x938*(x939<=x940)));

    if (t103 != 0LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x945 = -1;
	static uint16_t x946 = 10U;
	uint32_t x947 = 2389U;
	volatile uint32_t x948 = 254170U;
	int32_t t104 = 1;

    t104 = (x945/(x946*(x947<=x948)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint16_t x957 = 411U;
	static int8_t x959 = INT8_MIN;
	int32_t x960 = -1;
	volatile int32_t t105 = 46677;

    t105 = (x957/(x958*(x959<=x960)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	uint8_t x969 = 0U;
	uint64_t x970 = 5752786504930845LLU;
	uint64_t x971 = 92864423807144047LLU;
	static int64_t x972 = INT64_MAX;

    t106 = (x969/(x970*(x971<=x972)));

    if (t106 != 0LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x974 = -1;
	int16_t x975 = -1;
	uint16_t x976 = UINT16_MAX;
	int32_t t107 = -11;

    t107 = (x973/(x974*(x975<=x976)));

    if (t107 != -127) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x977 = 1444LL;
	int64_t x978 = INT64_MAX;
	volatile int32_t x979 = -1;
	static volatile int16_t x980 = 750;
	static volatile int64_t t108 = -20575108999LL;

    t108 = (x977/(x978*(x979<=x980)));

    if (t108 != 0LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x981 = 1;
	volatile int8_t x982 = INT8_MIN;
	int64_t x983 = -1LL;
	int16_t x984 = -1;
	int32_t t109 = 1;

    t109 = (x981/(x982*(x983<=x984)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static volatile int64_t x985 = INT64_MAX;
	static int64_t x987 = INT64_MIN;
	static int64_t x988 = INT64_MIN;
	volatile int64_t t110 = 248LL;

    t110 = (x985/(x986*(x987<=x988)));

    if (t110 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x989 = 63156468290LLU;
	uint32_t x990 = UINT32_MAX;
	uint16_t x992 = UINT16_MAX;
	volatile uint64_t t111 = 494328896186634266LLU;

    t111 = (x989/(x990*(x991<=x992)));

    if (t111 != 14LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x993 = 98385232255LLU;
	volatile int16_t x994 = INT16_MIN;

    t112 = (x993/(x994*(x995<=x996)));

    if (t112 != 0LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x1009 = UINT16_MAX;
	int16_t x1010 = INT16_MIN;
	volatile int8_t x1011 = INT8_MIN;
	uint16_t x1012 = 2U;
	int32_t t113 = -40727783;

    t113 = (x1009/(x1010*(x1011<=x1012)));

    if (t113 != -1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x1013 = 0U;
	int32_t x1014 = INT32_MAX;
	volatile int8_t x1015 = -1;
	uint16_t x1016 = 125U;
	volatile int32_t t114 = -27;

    t114 = (x1013/(x1014*(x1015<=x1016)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x1017 = UINT32_MAX;
	uint32_t x1018 = 836499402U;
	int64_t x1019 = -30901030731075553LL;
	int16_t x1020 = 1;
	uint32_t t115 = 45077U;

    t115 = (x1017/(x1018*(x1019<=x1020)));

    if (t115 != 5U) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x1038 = 7166418774099777LL;
	uint64_t x1039 = 2408846930433240972LLU;
	volatile int8_t x1040 = -1;
	volatile int64_t t116 = -185470855439721550LL;

    t116 = (x1037/(x1038*(x1039<=x1040)));

    if (t116 != 0LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x1041 = -1;
	uint8_t x1042 = 123U;
	int16_t x1043 = INT16_MAX;
	uint64_t x1044 = 15416307404843312LLU;
	int32_t t117 = 2;

    t117 = (x1041/(x1042*(x1043<=x1044)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x1049 = UINT32_MAX;
	static uint16_t x1050 = 1U;
	uint16_t x1051 = UINT16_MAX;
	uint32_t x1052 = 369832U;
	uint32_t t118 = UINT32_MAX;

    t118 = (x1049/(x1050*(x1051<=x1052)));

    if (t118 != UINT32_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x1057 = -2336730LL;
	int64_t x1058 = -1LL;
	volatile int16_t x1059 = 0;
	uint64_t x1060 = 1152927LLU;
	volatile int64_t t119 = 11927957414406019LL;

    t119 = (x1057/(x1058*(x1059<=x1060)));

    if (t119 != 2336730LL) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint64_t x1065 = UINT64_MAX;
	uint8_t x1066 = 4U;
	uint8_t x1067 = UINT8_MAX;
	volatile uint64_t t120 = 4069105769551LLU;

    t120 = (x1065/(x1066*(x1067<=x1068)));

    if (t120 != 4611686018427387903LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x1069 = UINT32_MAX;
	int64_t x1070 = 113227308LL;
	static uint32_t x1072 = UINT32_MAX;
	static int64_t t121 = -15559359712LL;

    t121 = (x1069/(x1070*(x1071<=x1072)));

    if (t121 != 37LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int16_t x1081 = -4;
	int64_t x1082 = INT64_MAX;
	volatile uint8_t x1083 = 3U;
	int64_t t122 = 18190575LL;

    t122 = (x1081/(x1082*(x1083<=x1084)));

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x1086 = 535928769396234973LLU;
	volatile int32_t x1087 = INT32_MIN;
	volatile int64_t x1088 = -1LL;
	uint64_t t123 = 573061415738771431LLU;

    t123 = (x1085/(x1086*(x1087<=x1088)));

    if (t123 != 17LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x1089 = INT32_MIN;
	uint16_t x1090 = UINT16_MAX;
	volatile uint64_t x1091 = 1196899769039LLU;
	int8_t x1092 = INT8_MIN;
	int32_t t124 = -925026;

    t124 = (x1089/(x1090*(x1091<=x1092)));

    if (t124 != -32768) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x1093 = INT64_MAX;
	int8_t x1094 = -1;
	static volatile uint16_t x1096 = UINT16_MAX;
	int64_t t125 = 1123196LL;

    t125 = (x1093/(x1094*(x1095<=x1096)));

    if (t125 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x1117 = INT64_MAX;
	int32_t x1119 = -1;
	int8_t x1120 = INT8_MAX;
	volatile int64_t t126 = -776290983644564953LL;

    t126 = (x1117/(x1118*(x1119<=x1120)));

    if (t126 != 2147483648LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x1121 = UINT16_MAX;
	volatile int16_t x1123 = -1;
	int16_t x1124 = -1;
	static volatile int32_t t127 = -763631;

    t127 = (x1121/(x1122*(x1123<=x1124)));

    if (t127 != -65535) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x1125 = -3;
	static int32_t x1126 = INT32_MAX;
	volatile int8_t x1127 = -5;
	static int32_t x1128 = INT32_MAX;
	int32_t t128 = -1967301;

    t128 = (x1125/(x1126*(x1127<=x1128)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x1129 = -9;
	uint64_t x1131 = 8813274LLU;
	volatile int32_t x1132 = INT32_MIN;
	static volatile int32_t t129 = -2583806;

    t129 = (x1129/(x1130*(x1131<=x1132)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x1133 = INT32_MAX;
	volatile uint16_t x1134 = UINT16_MAX;
	int64_t x1135 = INT64_MIN;
	static int8_t x1136 = 2;
	int32_t t130 = 1062395218;

    t130 = (x1133/(x1134*(x1135<=x1136)));

    if (t130 != 32768) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x1137 = UINT32_MAX;
	volatile int16_t x1138 = -2;
	volatile uint32_t x1139 = 1638406U;

    t131 = (x1137/(x1138*(x1139<=x1140)));

    if (t131 != 1U) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x1147 = INT32_MIN;
	uint16_t x1148 = 458U;

    t132 = (x1145/(x1146*(x1147<=x1148)));

    if (t132 != -799) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x1149 = -1;
	int32_t x1150 = -243;
	int16_t x1151 = INT16_MIN;
	volatile uint16_t x1152 = UINT16_MAX;
	static volatile int32_t t133 = -323533464;

    t133 = (x1149/(x1150*(x1151<=x1152)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x1153 = -134066905;
	static int8_t x1154 = -1;
	volatile int16_t x1155 = 19;
	int32_t x1156 = INT32_MAX;
	int32_t t134 = -1152698;

    t134 = (x1153/(x1154*(x1155<=x1156)));

    if (t134 != 134066905) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x1157 = -1;
	int16_t x1158 = INT16_MIN;
	int64_t x1159 = -1LL;
	static uint8_t x1160 = 1U;
	static int32_t t135 = -45;

    t135 = (x1157/(x1158*(x1159<=x1160)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x1161 = -1LL;
	int8_t x1162 = INT8_MIN;
	int32_t x1164 = 53693389;
	volatile int64_t t136 = -142092394LL;

    t136 = (x1161/(x1162*(x1163<=x1164)));

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x1181 = -1;
	uint16_t x1182 = UINT16_MAX;
	int32_t x1183 = INT32_MIN;
	int32_t t137 = 479442070;

    t137 = (x1181/(x1182*(x1183<=x1184)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x1197 = 265545412744611417LLU;
	volatile int32_t x1198 = INT32_MIN;
	uint16_t x1199 = 0U;
	uint16_t x1200 = UINT16_MAX;

    t138 = (x1197/(x1198*(x1199<=x1200)));

    if (t138 != 0LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x1206 = -1LL;
	int32_t x1207 = INT32_MIN;
	int16_t x1208 = INT16_MIN;

    t139 = (x1205/(x1206*(x1207<=x1208)));

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x1209 = UINT32_MAX;
	volatile int16_t x1210 = INT16_MIN;
	uint16_t x1212 = 0U;

    t140 = (x1209/(x1210*(x1211<=x1212)));

    if (t140 != 1U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x1213 = -1;
	int32_t x1214 = INT32_MIN;
	static int16_t x1215 = 6559;
	uint16_t x1216 = UINT16_MAX;
	volatile int32_t t141 = -924537345;

    t141 = (x1213/(x1214*(x1215<=x1216)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint16_t x1225 = 208U;
	int16_t x1226 = INT16_MAX;
	static int64_t x1227 = -1LL;
	int8_t x1228 = 0;
	int32_t t142 = -179078;

    t142 = (x1225/(x1226*(x1227<=x1228)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	static int32_t x1233 = -1;
	uint16_t x1234 = 22902U;
	static uint16_t x1235 = 90U;
	int32_t x1236 = INT32_MAX;
	int32_t t143 = 2;

    t143 = (x1233/(x1234*(x1235<=x1236)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x1241 = INT8_MIN;
	volatile uint32_t x1242 = 5864U;
	int32_t x1243 = INT32_MIN;
	static uint8_t x1244 = UINT8_MAX;
	uint32_t t144 = 211U;

    t144 = (x1241/(x1242*(x1243<=x1244)));

    if (t144 != 732429U) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x1254 = 1;
	int32_t x1255 = -10656312;

    t145 = (x1253/(x1254*(x1255<=x1256)));

    if (t145 != 639046174081LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint8_t x1265 = 0U;
	int8_t x1266 = -1;
	volatile uint8_t x1267 = 1U;
	uint32_t x1268 = UINT32_MAX;

    t146 = (x1265/(x1266*(x1267<=x1268)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x1285 = INT64_MIN;
	int8_t x1286 = INT8_MIN;
	int32_t x1287 = 956600;
	volatile uint64_t x1288 = 65199098845304LLU;
	volatile int64_t t147 = -1LL;

    t147 = (x1285/(x1286*(x1287<=x1288)));

    if (t147 != 72057594037927936LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x1290 = UINT64_MAX;
	int8_t x1291 = INT8_MIN;
	static volatile int8_t x1292 = -1;
	volatile uint64_t t148 = 146LLU;

    t148 = (x1289/(x1290*(x1291<=x1292)));

    if (t148 != 0LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x1296 = -1;

    t149 = (x1293/(x1294*(x1295<=x1296)));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x1305 = -1LL;
	volatile int16_t x1306 = 20;
	int8_t x1308 = -1;
	volatile int64_t t150 = -27476911718257LL;

    t150 = (x1305/(x1306*(x1307<=x1308)));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x1309 = 221082LL;
	uint8_t x1311 = 28U;
	int64_t x1312 = 96768652999212LL;
	int64_t t151 = 540162LL;

    t151 = (x1309/(x1310*(x1311<=x1312)));

    if (t151 != 4806LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x1313 = 301302LLU;
	static volatile int32_t x1314 = INT32_MIN;
	uint16_t x1315 = 9036U;
	volatile uint64_t t152 = 654LLU;

    t152 = (x1313/(x1314*(x1315<=x1316)));

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint32_t x1325 = 218333387U;
	static int8_t x1326 = INT8_MIN;
	static int32_t x1328 = -1;
	uint32_t t153 = 62445144U;

    t153 = (x1325/(x1326*(x1327<=x1328)));

    if (t153 != 0U) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x1337 = INT8_MIN;
	int64_t x1338 = INT64_MIN;
	int16_t x1339 = -19;
	uint16_t x1340 = UINT16_MAX;
	int64_t t154 = 349295495264LL;

    t154 = (x1337/(x1338*(x1339<=x1340)));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x1341 = INT32_MIN;
	int64_t x1342 = INT64_MIN;
	int32_t x1343 = -1;
	int8_t x1344 = -1;
	int64_t t155 = 11952148LL;

    t155 = (x1341/(x1342*(x1343<=x1344)));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x1358 = UINT32_MAX;
	int8_t x1359 = 0;
	int64_t t156 = 194LL;

    t156 = (x1357/(x1358*(x1359<=x1360)));

    if (t156 != -2147483648LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x1365 = 36U;
	int16_t x1366 = 1;
	uint32_t x1367 = 28325619U;
	int32_t x1368 = INT32_MIN;
	volatile uint32_t t157 = 2842U;

    t157 = (x1365/(x1366*(x1367<=x1368)));

    if (t157 != 36U) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x1373 = INT16_MAX;
	volatile int16_t x1374 = INT16_MIN;
	int32_t x1375 = INT32_MIN;
	int16_t x1376 = INT16_MIN;
	volatile int32_t t158 = -59147;

    t158 = (x1373/(x1374*(x1375<=x1376)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x1385 = 8918;
	static uint16_t x1386 = UINT16_MAX;
	int16_t x1387 = 0;
	uint16_t x1388 = UINT16_MAX;
	volatile int32_t t159 = 199911;

    t159 = (x1385/(x1386*(x1387<=x1388)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x1394 = UINT8_MAX;
	int64_t x1395 = -1LL;
	volatile uint16_t x1396 = 4037U;
	static int64_t t160 = 415012LL;

    t160 = (x1393/(x1394*(x1395<=x1396)));

    if (t160 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x1397 = -1;
	volatile int64_t x1399 = -133890468607LL;
	uint16_t x1400 = UINT16_MAX;
	uint64_t t161 = 470984993052468LLU;

    t161 = (x1397/(x1398*(x1399<=x1400)));

    if (t161 != 1LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x1401 = -5;
	int8_t x1402 = -40;
	int32_t t162 = 124970915;

    t162 = (x1401/(x1402*(x1403<=x1404)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static uint8_t x1405 = UINT8_MAX;
	volatile int16_t x1406 = -1;
	static int16_t x1407 = INT16_MIN;
	volatile int32_t t163 = 7769;

    t163 = (x1405/(x1406*(x1407<=x1408)));

    if (t163 != -255) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x1417 = 2;
	int16_t x1418 = 30;
	uint64_t x1419 = 2LLU;
	int64_t x1420 = INT64_MIN;
	int32_t t164 = -22;

    t164 = (x1417/(x1418*(x1419<=x1420)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x1425 = INT16_MIN;
	static int32_t x1426 = INT32_MAX;
	int16_t x1427 = 76;
	volatile int32_t t165 = -6;

    t165 = (x1425/(x1426*(x1427<=x1428)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static int64_t x1429 = -2LL;
	uint32_t x1432 = 7618U;
	int64_t t166 = -19146220LL;

    t166 = (x1429/(x1430*(x1431<=x1432)));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x1433 = INT32_MIN;
	static int16_t x1436 = -1;
	volatile int32_t t167 = 244003364;

    t167 = (x1433/(x1434*(x1435<=x1436)));

    if (t167 != 65536) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x1441 = -1;
	int64_t x1442 = 2955256683598194LL;
	volatile int64_t x1443 = INT64_MIN;
	int8_t x1444 = INT8_MIN;
	static volatile int64_t t168 = 62490735303LL;

    t168 = (x1441/(x1442*(x1443<=x1444)));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1447 = -8318;
	volatile int32_t x1448 = -1;
	static volatile int32_t t169 = 89911;

    t169 = (x1445/(x1446*(x1447<=x1448)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint64_t x1453 = UINT64_MAX;
	int64_t x1455 = 239LL;
	uint64_t x1456 = 118342729495135LLU;
	uint64_t t170 = 952935067863916685LLU;

    t170 = (x1453/(x1454*(x1455<=x1456)));

    if (t170 != 1LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x1466 = -3;
	uint16_t x1467 = 484U;
	uint64_t x1468 = 92086257315LLU;
	int64_t t171 = -31982LL;

    t171 = (x1465/(x1466*(x1467<=x1468)));

    if (t171 != -3074457345618258602LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x1469 = 36;
	uint32_t x1470 = UINT32_MAX;
	static int8_t x1471 = 15;
	int16_t x1472 = 1340;
	volatile uint32_t t172 = 842577U;

    t172 = (x1469/(x1470*(x1471<=x1472)));

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x1477 = 1198203766LLU;
	uint8_t x1478 = 8U;
	int8_t x1479 = INT8_MIN;
	int64_t x1480 = -1LL;

    t173 = (x1477/(x1478*(x1479<=x1480)));

    if (t173 != 149775470LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x1497 = 11969530LL;
	int64_t x1498 = -1LL;
	uint32_t x1499 = 3693053U;
	int32_t x1500 = INT32_MAX;
	volatile int64_t t174 = -393069552570644LL;

    t174 = (x1497/(x1498*(x1499<=x1500)));

    if (t174 != -11969530LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint64_t x1501 = UINT64_MAX;
	static uint64_t x1502 = 3925602281690LLU;
	uint32_t x1503 = 1277U;
	volatile uint64_t x1504 = UINT64_MAX;
	static uint64_t t175 = 40065LLU;

    t175 = (x1501/(x1502*(x1503<=x1504)));

    if (t175 != 4699086LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x1513 = 465724924683652945LLU;
	int64_t x1514 = -23LL;
	static int16_t x1515 = -1;
	int32_t x1516 = -1;
	uint64_t t176 = 13097LLU;

    t176 = (x1513/(x1514*(x1515<=x1516)));

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1525 = INT32_MIN;
	uint32_t x1526 = 6U;
	static int64_t x1527 = INT64_MIN;
	volatile int64_t x1528 = -1LL;
	uint32_t t177 = 43U;

    t177 = (x1525/(x1526*(x1527<=x1528)));

    if (t177 != 357913941U) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x1529 = -164618;
	int32_t x1531 = -1;
	volatile int32_t x1532 = INT32_MAX;
	int32_t t178 = 72303249;

    t178 = (x1529/(x1530*(x1531<=x1532)));

    if (t178 != -1496) { NG(); } else { ; }
	
}

void f179(void) {
    	uint8_t x1542 = UINT8_MAX;
	int64_t x1543 = 0LL;
	static int32_t t179 = -41428753;

    t179 = (x1541/(x1542*(x1543<=x1544)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile int16_t x1545 = INT16_MIN;
	static int8_t x1546 = INT8_MAX;
	int64_t x1548 = -1LL;
	volatile int32_t t180 = -14;

    t180 = (x1545/(x1546*(x1547<=x1548)));

    if (t180 != -258) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x1573 = UINT16_MAX;
	static volatile uint64_t x1575 = 4091342842000539887LLU;
	int32_t x1576 = -1;
	volatile int64_t t181 = -58LL;

    t181 = (x1573/(x1574*(x1575<=x1576)));

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x1599 = INT16_MIN;
	volatile int8_t x1600 = INT8_MAX;
	static int32_t t182 = 2620137;

    t182 = (x1597/(x1598*(x1599<=x1600)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1609 = INT64_MAX;
	uint64_t x1610 = 645123LLU;
	int8_t x1612 = 27;
	static volatile uint64_t t183 = 1882166432472100565LLU;

    t183 = (x1609/(x1610*(x1611<=x1612)));

    if (t183 != 14297075188537LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x1614 = 313597178U;
	volatile int16_t x1616 = -5;
	static uint32_t t184 = 148186863U;

    t184 = (x1613/(x1614*(x1615<=x1616)));

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x1618 = 476U;
	uint64_t x1619 = 36642425489LLU;
	int8_t x1620 = -1;

    t185 = (x1617/(x1618*(x1619<=x1620)));

    if (t185 != 7) { NG(); } else { ; }
	
}

void f186(void) {
    	static int32_t x1622 = INT32_MAX;
	uint64_t x1623 = 6LLU;
	static int8_t x1624 = INT8_MIN;

    t186 = (x1621/(x1622*(x1623<=x1624)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1625 = -1;
	static int8_t x1626 = -1;
	int16_t x1627 = -1;
	static uint16_t x1628 = 10U;
	int32_t t187 = 92309420;

    t187 = (x1625/(x1626*(x1627<=x1628)));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1629 = INT8_MAX;
	int32_t x1630 = INT32_MAX;
	int8_t x1632 = -1;
	static int32_t t188 = 7;

    t188 = (x1629/(x1630*(x1631<=x1632)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1633 = 10;
	int16_t x1634 = INT16_MAX;
	uint64_t x1635 = 2LLU;
	static volatile uint8_t x1636 = 7U;
	volatile int32_t t189 = 20628;

    t189 = (x1633/(x1634*(x1635<=x1636)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x1642 = -39;
	static int16_t x1644 = INT16_MAX;
	static int32_t t190 = 2456;

    t190 = (x1641/(x1642*(x1643<=x1644)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x1657 = 4215251993971LLU;
	static int32_t x1658 = INT32_MAX;
	int8_t x1660 = 7;
	uint64_t t191 = 200645LLU;

    t191 = (x1657/(x1658*(x1659<=x1660)));

    if (t191 != 1962LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x1665 = UINT16_MAX;
	static int8_t x1666 = 35;
	static int16_t x1667 = INT16_MIN;
	int8_t x1668 = 38;
	static int32_t t192 = 308675023;

    t192 = (x1665/(x1666*(x1667<=x1668)));

    if (t192 != 1872) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x1669 = -141430;
	volatile int32_t x1671 = INT32_MIN;
	static volatile int64_t t193 = 7944748866640LL;

    t193 = (x1669/(x1670*(x1671<=x1672)));

    if (t193 != 141430LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int64_t x1677 = INT64_MAX;
	uint64_t x1678 = 173419LLU;
	volatile int8_t x1679 = INT8_MAX;
	uint32_t x1680 = 250514947U;
	volatile uint64_t t194 = 18630666953172155LLU;

    t194 = (x1677/(x1678*(x1679<=x1680)));

    if (t194 != 53185475852442LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1682 = INT8_MIN;
	static int32_t x1683 = INT32_MIN;
	int8_t x1684 = -1;

    t195 = (x1681/(x1682*(x1683<=x1684)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1693 = INT32_MIN;
	int32_t x1694 = 12130;
	uint32_t x1696 = UINT32_MAX;
	int32_t t196 = -197977268;

    t196 = (x1693/(x1694*(x1695<=x1696)));

    if (t196 != -177039) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x1709 = UINT64_MAX;
	int8_t x1710 = INT8_MIN;
	int64_t x1711 = INT64_MIN;
	volatile int16_t x1712 = -1;

    t197 = (x1709/(x1710*(x1711<=x1712)));

    if (t197 != 1LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1717 = INT64_MIN;
	int64_t x1718 = INT64_MAX;
	uint8_t x1720 = 88U;
	volatile int64_t t198 = -57804999LL;

    t198 = (x1717/(x1718*(x1719<=x1720)));

    if (t198 != -1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x1721 = 487;
	int64_t x1722 = -187652814391369267LL;
	volatile int16_t x1723 = INT16_MIN;
	volatile int32_t x1724 = -1;
	volatile int64_t t199 = 111538013LL;

    t199 = (x1721/(x1722*(x1723<=x1724)));

    if (t199 != 0LL) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

