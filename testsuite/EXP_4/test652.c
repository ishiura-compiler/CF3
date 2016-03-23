
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

volatile uint8_t x1 = UINT8_MAX;
static uint16_t x3 = UINT16_MAX;
uint16_t x4 = 9488U;
int8_t x28 = -1;
int32_t t2 = -22217;
int64_t x55 = INT64_MAX;
static volatile int32_t t5 = -62502;
int32_t x71 = INT32_MAX;
int8_t x74 = -1;
int32_t t8 = 62725510;
static uint32_t x80 = 16579U;
volatile int32_t t10 = 77;
int32_t x106 = -1;
int64_t x107 = INT64_MIN;
int8_t x115 = INT8_MIN;
uint16_t x122 = 7616U;
static int16_t x132 = 17;
volatile int32_t x144 = 179395;
static uint8_t x177 = UINT8_MAX;
volatile uint16_t x178 = UINT16_MAX;
int32_t t21 = -96;
int8_t x196 = -1;
volatile uint64_t x202 = 82259432LLU;
volatile uint64_t x203 = 11202LLU;
uint32_t x225 = 1656U;
static int64_t x227 = INT64_MIN;
volatile int64_t x231 = -13658234879LL;
int32_t x235 = INT32_MIN;
int32_t t28 = 57226685;
static volatile int64_t x325 = INT64_MIN;
volatile int64_t x327 = INT64_MIN;
int16_t x328 = INT16_MIN;
volatile int32_t t34 = 7;
int32_t t36 = 949769898;
int32_t t37 = 14;
int32_t x365 = INT32_MIN;
static uint64_t x373 = 579028658791390LLU;
volatile uint32_t x374 = 160135U;
int32_t x379 = -1;
static int32_t x414 = 26016990;
volatile int32_t t44 = 866091856;
int32_t x458 = INT32_MAX;
uint64_t x459 = UINT64_MAX;
int64_t x472 = 757566273LL;
uint64_t x473 = UINT64_MAX;
static uint8_t x482 = 7U;
int8_t x487 = INT8_MAX;
uint64_t x492 = 49LLU;
volatile uint64_t x510 = UINT64_MAX;
int32_t x515 = INT32_MIN;
static int32_t t55 = 44647578;
uint8_t x530 = 89U;
static int32_t x543 = INT32_MIN;
int64_t x546 = INT64_MIN;
volatile uint64_t x549 = 262901LLU;
int8_t x551 = INT8_MIN;
uint64_t x554 = 2363669150LLU;
uint16_t x556 = 1U;
int32_t x571 = INT32_MIN;
uint8_t x585 = 2U;
static int8_t x587 = INT8_MIN;
int32_t t65 = 14154039;
int32_t x597 = INT32_MAX;
int8_t x617 = INT8_MIN;
int32_t x618 = INT32_MAX;
volatile int8_t x620 = -31;
uint32_t x626 = 2414U;
int32_t x633 = INT32_MIN;
int32_t x665 = -9939153;
static volatile uint64_t x667 = UINT64_MAX;
static int32_t x671 = INT32_MIN;
volatile int32_t t77 = 1379596;
volatile int64_t x699 = INT64_MIN;
uint32_t x705 = UINT32_MAX;
static int32_t x706 = 48;
int32_t t80 = -436;
int8_t x714 = 1;
int64_t x716 = INT64_MIN;
int32_t t82 = -244278;
static int64_t x723 = -1LL;
int32_t x724 = -1;
static int16_t x733 = INT16_MIN;
int16_t x734 = -697;
static volatile int64_t x749 = INT64_MAX;
uint32_t x750 = 0U;
uint8_t x765 = 0U;
static int8_t x772 = INT8_MAX;
uint16_t x789 = 59U;
int32_t x796 = INT32_MAX;
int16_t x798 = INT16_MAX;
int8_t x800 = -11;
uint32_t x801 = 109U;
volatile int32_t t96 = -8;
int32_t x809 = INT32_MIN;
int16_t x829 = INT16_MIN;
int8_t x831 = INT8_MIN;
volatile uint64_t x832 = 13051346039420LLU;
int32_t x842 = 272461;
int8_t x846 = -1;
int16_t x847 = INT16_MIN;
uint8_t x848 = UINT8_MAX;
int16_t x852 = INT16_MIN;
int8_t x856 = INT8_MAX;
static int32_t t103 = -25149790;
uint32_t x901 = 2U;
int16_t x913 = -1;
int8_t x917 = 13;
int64_t x918 = 644988247LL;
uint64_t x939 = UINT64_MAX;
int16_t x941 = INT16_MIN;
int16_t x942 = -1;
int32_t t112 = -7716544;
uint8_t x980 = 6U;
int32_t x1006 = -6;
int32_t t119 = -44076000;
int64_t x1046 = INT64_MIN;
uint32_t x1064 = 165622U;
int8_t x1084 = INT8_MIN;
static int32_t x1098 = 211937475;
int32_t t130 = -143;
int64_t x1113 = INT64_MAX;
static volatile int32_t t133 = 11;
int16_t x1146 = INT16_MAX;
int32_t t135 = -2410;
volatile int64_t x1151 = INT64_MIN;
int32_t x1156 = -1;
int32_t t138 = 2;
int8_t x1174 = INT8_MIN;
volatile uint16_t x1176 = 9235U;
volatile int32_t t139 = -7;
int16_t x1178 = INT16_MIN;
volatile int32_t t140 = -485460000;
int64_t x1181 = -1LL;
static volatile int8_t x1214 = INT8_MAX;
uint8_t x1244 = UINT8_MAX;
static int32_t x1260 = 55;
int16_t x1274 = -1;
int32_t x1275 = INT32_MIN;
int32_t x1276 = INT32_MAX;
uint8_t x1291 = 3U;
uint16_t x1295 = 821U;
static int8_t x1296 = -1;
int64_t x1316 = INT64_MIN;
volatile int32_t t156 = 2;
static uint8_t x1333 = 8U;
int32_t x1336 = INT32_MAX;
uint64_t x1379 = 29837317LLU;
int32_t x1409 = INT32_MIN;
volatile int16_t x1430 = INT16_MIN;
static uint8_t x1431 = 11U;
static int32_t x1435 = INT32_MIN;
volatile int32_t t170 = -48832;
static int8_t x1463 = INT8_MIN;
uint16_t x1465 = UINT16_MAX;
static int8_t x1476 = INT8_MAX;
uint16_t x1482 = UINT16_MAX;
uint8_t x1492 = 1U;
int64_t x1505 = INT64_MAX;
int64_t x1507 = -2090709528654942166LL;
static int16_t x1508 = 23;
uint16_t x1509 = UINT16_MAX;
static volatile int32_t t181 = -37724508;
int32_t t182 = -3859852;
static volatile uint32_t x1545 = 503U;
int64_t x1546 = -244LL;
static int32_t x1548 = -1;
volatile int8_t x1565 = INT8_MIN;
static int16_t x1582 = INT16_MIN;
volatile int16_t x1585 = -1;
static int64_t x1586 = -1LL;
static int32_t x1587 = INT32_MIN;
volatile int8_t x1600 = INT8_MIN;
int8_t x1614 = 15;
volatile int32_t x1637 = INT32_MIN;
static int16_t x1639 = 10;
static uint8_t x1653 = 45U;
int32_t x1654 = INT32_MIN;
volatile uint8_t x1657 = 22U;
volatile int8_t x1658 = INT8_MIN;
int8_t x1661 = -5;
volatile int32_t t197 = 12171791;
uint16_t x1684 = 3U;


void f0(void) {
    	static uint32_t x2 = UINT32_MAX;
	volatile int32_t t0 = -416;

    t0 = (x1==(x2%(x3/x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x21 = INT16_MIN;
	uint64_t x22 = 907016LLU;
	volatile int32_t x23 = INT32_MIN;
	int16_t x24 = INT16_MIN;
	int32_t t1 = -12316130;

    t1 = (x21==(x22%(x23/x24)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x25 = INT8_MIN;
	static uint64_t x26 = 1530LLU;
	int64_t x27 = INT64_MAX;

    t2 = (x25==(x26%(x27/x28)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x33 = INT8_MIN;
	int64_t x34 = INT64_MIN;
	static volatile uint16_t x35 = UINT16_MAX;
	uint16_t x36 = 1U;
	int32_t t3 = -217;

    t3 = (x33==(x34%(x35/x36)));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static int8_t x53 = 28;
	uint16_t x54 = 5503U;
	uint8_t x56 = UINT8_MAX;
	volatile int32_t t4 = 1;

    t4 = (x53==(x54%(x55/x56)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	static int64_t x57 = INT64_MIN;
	uint16_t x58 = 2U;
	volatile int32_t x59 = INT32_MAX;
	int16_t x60 = INT16_MAX;

    t5 = (x57==(x58%(x59/x60)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x61 = INT16_MIN;
	int8_t x62 = 19;
	int64_t x63 = 1519814989865562450LL;
	uint64_t x64 = 69184290LLU;
	int32_t t6 = -5027;

    t6 = (x61==(x62%(x63/x64)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x69 = UINT16_MAX;
	int16_t x70 = INT16_MAX;
	uint16_t x72 = 2076U;
	int32_t t7 = -3389;

    t7 = (x69==(x70%(x71/x72)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x73 = INT32_MAX;
	uint16_t x75 = 5999U;
	uint16_t x76 = 10U;

    t8 = (x73==(x74%(x75/x76)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x77 = INT16_MIN;
	int8_t x78 = INT8_MAX;
	int64_t x79 = INT64_MAX;
	volatile int32_t t9 = 50;

    t9 = (x77==(x78%(x79/x80)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	static int8_t x89 = -1;
	static uint32_t x90 = 78389595U;
	int64_t x91 = INT64_MIN;
	static volatile int64_t x92 = -106007853538257038LL;

    t10 = (x89==(x90%(x91/x92)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x101 = 53752219;
	volatile int64_t x102 = INT64_MIN;
	static volatile uint64_t x103 = UINT64_MAX;
	uint8_t x104 = 12U;
	int32_t t11 = -393444361;

    t11 = (x101==(x102%(x103/x104)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int8_t x105 = 1;
	uint64_t x108 = 69LLU;
	int32_t t12 = -1431;

    t12 = (x105==(x106%(x107/x108)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x109 = -1;
	int32_t x110 = INT32_MAX;
	uint8_t x111 = UINT8_MAX;
	int32_t x112 = -34;
	static volatile int32_t t13 = 2549155;

    t13 = (x109==(x110%(x111/x112)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x113 = INT16_MIN;
	static volatile int32_t x114 = INT32_MIN;
	volatile int32_t x116 = 4;
	volatile int32_t t14 = 1956;

    t14 = (x113==(x114%(x115/x116)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int8_t x117 = INT8_MIN;
	static int64_t x118 = -251670436LL;
	uint64_t x119 = UINT64_MAX;
	int16_t x120 = -1;
	static int32_t t15 = -72562514;

    t15 = (x117==(x118%(x119/x120)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x121 = -1;
	volatile uint32_t x123 = UINT32_MAX;
	int16_t x124 = 2;
	volatile int32_t t16 = 1258;

    t16 = (x121==(x122%(x123/x124)));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x129 = INT64_MIN;
	int16_t x130 = INT16_MIN;
	int8_t x131 = INT8_MIN;
	int32_t t17 = -1265;

    t17 = (x129==(x130%(x131/x132)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint8_t x133 = UINT8_MAX;
	int64_t x134 = -1LL;
	uint32_t x135 = UINT32_MAX;
	static int8_t x136 = -1;
	volatile int32_t t18 = -40696363;

    t18 = (x133==(x134%(x135/x136)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static int64_t x141 = INT64_MIN;
	int8_t x142 = -1;
	volatile int64_t x143 = INT64_MAX;
	int32_t t19 = -76;

    t19 = (x141==(x142%(x143/x144)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	static uint64_t x149 = 483510378241LLU;
	volatile int8_t x150 = -1;
	static int64_t x151 = INT64_MIN;
	int16_t x152 = INT16_MIN;
	int32_t t20 = 1200100;

    t20 = (x149==(x150%(x151/x152)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x179 = -130547;
	int16_t x180 = -1;

    t21 = (x177==(x178%(x179/x180)));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x185 = INT16_MAX;
	int8_t x186 = 3;
	static int64_t x187 = INT64_MIN;
	volatile int16_t x188 = INT16_MIN;
	static volatile int32_t t22 = -230129083;

    t22 = (x185==(x186%(x187/x188)));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint32_t x193 = 239993128U;
	int8_t x194 = -15;
	uint16_t x195 = 50U;
	volatile int32_t t23 = -667393;

    t23 = (x193==(x194%(x195/x196)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int16_t x201 = INT16_MIN;
	static uint16_t x204 = 1840U;
	volatile int32_t t24 = -590613;

    t24 = (x201==(x202%(x203/x204)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x221 = INT32_MAX;
	static int64_t x222 = -1466LL;
	volatile int64_t x223 = 2383775719LL;
	int16_t x224 = 4;
	int32_t t25 = -28009;

    t25 = (x221==(x222%(x223/x224)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x226 = 10248U;
	int8_t x228 = INT8_MIN;
	int32_t t26 = -2887900;

    t26 = (x225==(x226%(x227/x228)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int16_t x229 = -1;
	int16_t x230 = -1;
	int16_t x232 = 37;
	volatile int32_t t27 = 196;

    t27 = (x229==(x230%(x231/x232)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x233 = -1;
	int32_t x234 = -354237;
	volatile int16_t x236 = INT16_MAX;

    t28 = (x233==(x234%(x235/x236)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x237 = INT8_MAX;
	int8_t x238 = INT8_MAX;
	int16_t x239 = 6;
	int32_t x240 = -1;
	int32_t t29 = 15838;

    t29 = (x237==(x238%(x239/x240)));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x249 = INT8_MIN;
	uint64_t x250 = 118561286320539LLU;
	uint64_t x251 = UINT64_MAX;
	static int16_t x252 = -1;
	int32_t t30 = 9415586;

    t30 = (x249==(x250%(x251/x252)));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x261 = UINT16_MAX;
	int8_t x262 = -1;
	uint64_t x263 = 1939269561741335LLU;
	uint32_t x264 = 1714097U;
	volatile int32_t t31 = -510066089;

    t31 = (x261==(x262%(x263/x264)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile int64_t x277 = -1LL;
	uint32_t x278 = UINT32_MAX;
	volatile int32_t x279 = -133;
	static int8_t x280 = INT8_MIN;
	volatile int32_t t32 = 407615869;

    t32 = (x277==(x278%(x279/x280)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x281 = INT64_MAX;
	static volatile uint8_t x282 = UINT8_MAX;
	static uint16_t x283 = UINT16_MAX;
	int64_t x284 = -1LL;
	volatile int32_t t33 = 3737480;

    t33 = (x281==(x282%(x283/x284)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x326 = UINT32_MAX;

    t34 = (x325==(x326%(x327/x328)));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x341 = 0LL;
	int64_t x342 = INT64_MIN;
	int64_t x343 = INT64_MAX;
	int32_t x344 = INT32_MAX;
	volatile int32_t t35 = -98828453;

    t35 = (x341==(x342%(x343/x344)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x353 = UINT64_MAX;
	uint64_t x354 = 0LLU;
	static int64_t x355 = INT64_MIN;
	static int32_t x356 = -9;

    t36 = (x353==(x354%(x355/x356)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static uint32_t x361 = UINT32_MAX;
	uint16_t x362 = 2126U;
	int16_t x363 = INT16_MIN;
	static volatile uint64_t x364 = 56374632219LLU;

    t37 = (x361==(x362%(x363/x364)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x366 = 985;
	int32_t x367 = INT32_MIN;
	int32_t x368 = 7170;
	volatile int32_t t38 = -13;

    t38 = (x365==(x366%(x367/x368)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x375 = 54;
	int16_t x376 = 3;
	int32_t t39 = -41;

    t39 = (x373==(x374%(x375/x376)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x377 = 506;
	int64_t x378 = 3197256LL;
	static volatile uint64_t x380 = 13236LLU;
	int32_t t40 = 16401520;

    t40 = (x377==(x378%(x379/x380)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static int32_t x393 = INT32_MIN;
	uint64_t x394 = 284572764616088LLU;
	volatile uint16_t x395 = 135U;
	int8_t x396 = -1;
	volatile int32_t t41 = -8122621;

    t41 = (x393==(x394%(x395/x396)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x413 = -1LL;
	uint16_t x415 = UINT16_MAX;
	static volatile int16_t x416 = -1;
	int32_t t42 = -6453074;

    t42 = (x413==(x414%(x415/x416)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x417 = UINT8_MAX;
	int8_t x418 = -17;
	static int16_t x419 = -1;
	int64_t x420 = -1LL;
	volatile int32_t t43 = -7;

    t43 = (x417==(x418%(x419/x420)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x421 = 240U;
	uint32_t x422 = UINT32_MAX;
	uint32_t x423 = UINT32_MAX;
	int32_t x424 = -600;

    t44 = (x421==(x422%(x423/x424)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x449 = 6022U;
	static volatile int16_t x450 = -1;
	uint16_t x451 = UINT16_MAX;
	static volatile int16_t x452 = 21;
	int32_t t45 = -113023635;

    t45 = (x449==(x450%(x451/x452)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x457 = INT8_MIN;
	int32_t x460 = 14489;
	int32_t t46 = 28;

    t46 = (x457==(x458%(x459/x460)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x469 = INT64_MAX;
	int16_t x470 = INT16_MIN;
	volatile uint64_t x471 = UINT64_MAX;
	int32_t t47 = 45873;

    t47 = (x469==(x470%(x471/x472)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x474 = -51;
	int32_t x475 = INT32_MIN;
	int32_t x476 = INT32_MIN;
	int32_t t48 = -211517;

    t48 = (x473==(x474%(x475/x476)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x477 = -233LL;
	uint64_t x478 = 13187486482558LLU;
	volatile int16_t x479 = INT16_MIN;
	uint32_t x480 = 1497U;
	volatile int32_t t49 = -16;

    t49 = (x477==(x478%(x479/x480)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int32_t x481 = -4;
	int32_t x483 = -263900;
	uint16_t x484 = 51U;
	int32_t t50 = 230612857;

    t50 = (x481==(x482%(x483/x484)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x485 = INT8_MIN;
	int64_t x486 = 15860247553LL;
	volatile uint8_t x488 = 29U;
	volatile int32_t t51 = 372;

    t51 = (x485==(x486%(x487/x488)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x489 = -13;
	int64_t x490 = INT64_MAX;
	uint16_t x491 = 131U;
	volatile int32_t t52 = 2091753;

    t52 = (x489==(x490%(x491/x492)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x509 = INT32_MIN;
	volatile int32_t x511 = INT32_MIN;
	int16_t x512 = 7485;
	int32_t t53 = 1040889;

    t53 = (x509==(x510%(x511/x512)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint64_t x513 = 320931LLU;
	static uint8_t x514 = UINT8_MAX;
	int32_t x516 = INT32_MIN;
	volatile int32_t t54 = 16016817;

    t54 = (x513==(x514%(x515/x516)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x525 = 2U;
	volatile uint8_t x526 = 7U;
	int64_t x527 = 1798877955792602016LL;
	uint32_t x528 = 4732574U;

    t55 = (x525==(x526%(x527/x528)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x529 = INT16_MIN;
	uint64_t x531 = UINT64_MAX;
	volatile int64_t x532 = 29386018580781631LL;
	volatile int32_t t56 = -2;

    t56 = (x529==(x530%(x531/x532)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x533 = INT64_MAX;
	int8_t x534 = 0;
	int64_t x535 = -1LL;
	static uint64_t x536 = UINT64_MAX;
	volatile int32_t t57 = 254591;

    t57 = (x533==(x534%(x535/x536)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x537 = 1U;
	static uint32_t x538 = UINT32_MAX;
	int16_t x539 = INT16_MAX;
	static uint8_t x540 = 57U;
	int32_t t58 = 19086;

    t58 = (x537==(x538%(x539/x540)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x541 = INT64_MIN;
	uint64_t x542 = 61LLU;
	int64_t x544 = -1LL;
	static volatile int32_t t59 = -188;

    t59 = (x541==(x542%(x543/x544)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int8_t x545 = INT8_MIN;
	uint64_t x547 = UINT64_MAX;
	static int32_t x548 = INT32_MIN;
	int32_t t60 = 109262322;

    t60 = (x545==(x546%(x547/x548)));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint16_t x550 = UINT16_MAX;
	int8_t x552 = INT8_MIN;
	volatile int32_t t61 = -29040;

    t61 = (x549==(x550%(x551/x552)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int16_t x553 = -1;
	volatile int16_t x555 = -45;
	static int32_t t62 = -1;

    t62 = (x553==(x554%(x555/x556)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int64_t x569 = -1LL;
	static int16_t x570 = -1;
	volatile int32_t x572 = INT32_MIN;
	int32_t t63 = 59;

    t63 = (x569==(x570%(x571/x572)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x573 = INT8_MIN;
	static int32_t x574 = INT32_MIN;
	volatile int16_t x575 = INT16_MIN;
	uint32_t x576 = 107650300U;
	int32_t t64 = 1802;

    t64 = (x573==(x574%(x575/x576)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint8_t x586 = 39U;
	volatile uint64_t x588 = 2176555248653177LLU;

    t65 = (x585==(x586%(x587/x588)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x589 = -1;
	uint8_t x590 = 1U;
	static uint32_t x591 = 1514896U;
	int64_t x592 = 1509459LL;
	static volatile int32_t t66 = 1851;

    t66 = (x589==(x590%(x591/x592)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int32_t x593 = INT32_MIN;
	volatile int64_t x594 = INT64_MIN;
	int64_t x595 = -48543117043752170LL;
	volatile int32_t x596 = -1;
	volatile int32_t t67 = 822317;

    t67 = (x593==(x594%(x595/x596)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x598 = -1;
	uint8_t x599 = UINT8_MAX;
	int8_t x600 = -23;
	int32_t t68 = 1046030891;

    t68 = (x597==(x598%(x599/x600)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint64_t x613 = 375619451821470LLU;
	int32_t x614 = INT32_MIN;
	int8_t x615 = -1;
	static int32_t x616 = -1;
	volatile int32_t t69 = 22846427;

    t69 = (x613==(x614%(x615/x616)));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x619 = -403306553;
	static volatile int32_t t70 = 4493930;

    t70 = (x617==(x618%(x619/x620)));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x625 = UINT8_MAX;
	int64_t x627 = INT64_MIN;
	uint16_t x628 = 25155U;
	volatile int32_t t71 = -128181;

    t71 = (x625==(x626%(x627/x628)));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint32_t x634 = 1106953U;
	int16_t x635 = INT16_MIN;
	int16_t x636 = INT16_MIN;
	volatile int32_t t72 = -1863463;

    t72 = (x633==(x634%(x635/x636)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x637 = 1;
	static int16_t x638 = INT16_MIN;
	volatile int16_t x639 = INT16_MAX;
	int8_t x640 = -53;
	static int32_t t73 = 54374869;

    t73 = (x637==(x638%(x639/x640)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x645 = 5;
	static int16_t x646 = -1;
	int16_t x647 = INT16_MAX;
	uint16_t x648 = 1U;
	int32_t t74 = 82;

    t74 = (x645==(x646%(x647/x648)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x649 = INT16_MIN;
	int8_t x650 = -47;
	int16_t x651 = INT16_MIN;
	static uint32_t x652 = 13085074U;
	int32_t t75 = 249589;

    t75 = (x649==(x650%(x651/x652)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x666 = INT32_MAX;
	int64_t x668 = INT64_MAX;
	static int32_t t76 = -1;

    t76 = (x665==(x666%(x667/x668)));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x669 = INT32_MIN;
	static volatile int16_t x670 = -1;
	int64_t x672 = -773LL;

    t77 = (x669==(x670%(x671/x672)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x697 = UINT16_MAX;
	int8_t x698 = INT8_MIN;
	int8_t x700 = INT8_MIN;
	int32_t t78 = 1;

    t78 = (x697==(x698%(x699/x700)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x701 = -1;
	volatile int16_t x702 = INT16_MIN;
	uint32_t x703 = UINT32_MAX;
	uint8_t x704 = 11U;
	int32_t t79 = -264;

    t79 = (x701==(x702%(x703/x704)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static int32_t x707 = INT32_MIN;
	uint64_t x708 = 196LLU;

    t80 = (x705==(x706%(x707/x708)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x713 = -1;
	uint64_t x715 = UINT64_MAX;
	volatile int32_t t81 = -4749;

    t81 = (x713==(x714%(x715/x716)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x717 = INT32_MIN;
	uint16_t x718 = UINT16_MAX;
	static volatile int32_t x719 = INT32_MIN;
	static int8_t x720 = INT8_MIN;

    t82 = (x717==(x718%(x719/x720)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x721 = 155725U;
	static int64_t x722 = -8469608181052LL;
	volatile int32_t t83 = -172262739;

    t83 = (x721==(x722%(x723/x724)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int64_t x735 = -47229341LL;
	static int8_t x736 = INT8_MAX;
	int32_t t84 = 1896316;

    t84 = (x733==(x734%(x735/x736)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x737 = INT64_MIN;
	int32_t x738 = 2148;
	int64_t x739 = INT64_MIN;
	int8_t x740 = INT8_MIN;
	static int32_t t85 = -31699204;

    t85 = (x737==(x738%(x739/x740)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x745 = INT8_MAX;
	int64_t x746 = INT64_MIN;
	uint64_t x747 = UINT64_MAX;
	int16_t x748 = -235;
	volatile int32_t t86 = 242674734;

    t86 = (x745==(x746%(x747/x748)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x751 = INT8_MIN;
	uint16_t x752 = 18U;
	volatile int32_t t87 = -11;

    t87 = (x749==(x750%(x751/x752)));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x753 = INT64_MIN;
	uint16_t x754 = 4U;
	int64_t x755 = 231694285455823LL;
	uint32_t x756 = 50852U;
	volatile int32_t t88 = 397030281;

    t88 = (x753==(x754%(x755/x756)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x766 = INT32_MAX;
	static int8_t x767 = -1;
	int64_t x768 = -1LL;
	volatile int32_t t89 = -4903790;

    t89 = (x765==(x766%(x767/x768)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint8_t x769 = 0U;
	volatile uint32_t x770 = UINT32_MAX;
	int64_t x771 = INT64_MIN;
	static volatile int32_t t90 = -2;

    t90 = (x769==(x770%(x771/x772)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x773 = 2141U;
	uint8_t x774 = UINT8_MAX;
	uint32_t x775 = UINT32_MAX;
	int16_t x776 = INT16_MAX;
	volatile int32_t t91 = 924953876;

    t91 = (x773==(x774%(x775/x776)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x790 = 772;
	int16_t x791 = INT16_MIN;
	int8_t x792 = INT8_MAX;
	volatile int32_t t92 = 103;

    t92 = (x789==(x790%(x791/x792)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x793 = INT32_MAX;
	uint8_t x794 = UINT8_MAX;
	int32_t x795 = INT32_MIN;
	static int32_t t93 = -19;

    t93 = (x793==(x794%(x795/x796)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile int32_t x797 = INT32_MIN;
	static int8_t x799 = INT8_MAX;
	volatile int32_t t94 = 200500965;

    t94 = (x797==(x798%(x799/x800)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	uint8_t x802 = 3U;
	uint16_t x803 = UINT16_MAX;
	volatile int64_t x804 = -1LL;
	volatile int32_t t95 = -967688;

    t95 = (x801==(x802%(x803/x804)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x805 = -1;
	int16_t x806 = INT16_MIN;
	volatile int32_t x807 = -128869;
	int64_t x808 = 771LL;

    t96 = (x805==(x806%(x807/x808)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x810 = 23102U;
	static uint64_t x811 = UINT64_MAX;
	int8_t x812 = INT8_MIN;
	int32_t t97 = -2;

    t97 = (x809==(x810%(x811/x812)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x813 = UINT8_MAX;
	int32_t x814 = -1;
	static volatile int16_t x815 = INT16_MIN;
	int64_t x816 = -1LL;
	volatile int32_t t98 = -5475;

    t98 = (x813==(x814%(x815/x816)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x830 = 15U;
	int32_t t99 = -31457431;

    t99 = (x829==(x830%(x831/x832)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x841 = -1;
	uint32_t x843 = UINT32_MAX;
	int64_t x844 = 116671LL;
	static int32_t t100 = 92812;

    t100 = (x841==(x842%(x843/x844)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x845 = -1LL;
	volatile int32_t t101 = -5739195;

    t101 = (x845==(x846%(x847/x848)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x849 = -1LL;
	int64_t x850 = INT64_MIN;
	static uint16_t x851 = UINT16_MAX;
	static int32_t t102 = 7179;

    t102 = (x849==(x850%(x851/x852)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	uint64_t x853 = UINT64_MAX;
	static int16_t x854 = -1;
	int32_t x855 = INT32_MIN;

    t103 = (x853==(x854%(x855/x856)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x865 = 13;
	int64_t x866 = -26446141500562LL;
	uint8_t x867 = 39U;
	volatile int8_t x868 = 1;
	int32_t t104 = 855;

    t104 = (x865==(x866%(x867/x868)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x869 = INT8_MIN;
	int32_t x870 = INT32_MAX;
	volatile uint64_t x871 = 2439739578036940LLU;
	volatile uint32_t x872 = 3191U;
	static int32_t t105 = -54;

    t105 = (x869==(x870%(x871/x872)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x889 = INT32_MIN;
	uint64_t x890 = UINT64_MAX;
	volatile uint32_t x891 = 6302U;
	int8_t x892 = INT8_MAX;
	int32_t t106 = -270927525;

    t106 = (x889==(x890%(x891/x892)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x902 = -2608;
	static int32_t x903 = INT32_MAX;
	static int8_t x904 = INT8_MIN;
	volatile int32_t t107 = 121;

    t107 = (x901==(x902%(x903/x904)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x914 = 1;
	volatile int8_t x915 = INT8_MAX;
	static int16_t x916 = -1;
	volatile int32_t t108 = -13011;

    t108 = (x913==(x914%(x915/x916)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x919 = INT16_MIN;
	uint16_t x920 = 85U;
	volatile int32_t t109 = 13;

    t109 = (x917==(x918%(x919/x920)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x925 = INT16_MIN;
	int16_t x926 = 1;
	uint32_t x927 = 39727U;
	volatile uint64_t x928 = 439LLU;
	int32_t t110 = -11;

    t110 = (x925==(x926%(x927/x928)));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x937 = INT16_MAX;
	uint32_t x938 = 64990359U;
	static volatile int16_t x940 = -1;
	int32_t t111 = 19282;

    t111 = (x937==(x938%(x939/x940)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x943 = INT16_MIN;
	int16_t x944 = -1;

    t112 = (x941==(x942%(x943/x944)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x961 = 369U;
	uint16_t x962 = 652U;
	int32_t x963 = -1;
	int64_t x964 = -1LL;
	int32_t t113 = -1234829;

    t113 = (x961==(x962%(x963/x964)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x965 = 25439LL;
	int64_t x966 = -1LL;
	int32_t x967 = 125007035;
	int8_t x968 = INT8_MAX;
	int32_t t114 = 4376509;

    t114 = (x965==(x966%(x967/x968)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x969 = 1;
	int16_t x970 = INT16_MIN;
	static int32_t x971 = INT32_MAX;
	uint32_t x972 = 49650U;
	static volatile int32_t t115 = 296394;

    t115 = (x969==(x970%(x971/x972)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x977 = INT16_MIN;
	int64_t x978 = 344LL;
	uint16_t x979 = 33U;
	static volatile int32_t t116 = 791771350;

    t116 = (x977==(x978%(x979/x980)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	static int8_t x1005 = INT8_MAX;
	uint32_t x1007 = UINT32_MAX;
	int32_t x1008 = INT32_MIN;
	volatile int32_t t117 = 16691;

    t117 = (x1005==(x1006%(x1007/x1008)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x1013 = 3;
	static int16_t x1014 = -1;
	int32_t x1015 = -1;
	uint64_t x1016 = UINT64_MAX;
	volatile int32_t t118 = 19451;

    t118 = (x1013==(x1014%(x1015/x1016)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int8_t x1033 = 2;
	int32_t x1034 = -17;
	int32_t x1035 = -1;
	int16_t x1036 = -1;

    t119 = (x1033==(x1034%(x1035/x1036)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x1045 = 143U;
	int64_t x1047 = INT64_MIN;
	static uint64_t x1048 = 5477150380786LLU;
	volatile int32_t t120 = -839333296;

    t120 = (x1045==(x1046%(x1047/x1048)));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x1049 = 34U;
	int32_t x1050 = 14123;
	uint8_t x1051 = UINT8_MAX;
	uint16_t x1052 = 1U;
	static volatile int32_t t121 = -204089;

    t121 = (x1049==(x1050%(x1051/x1052)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x1057 = INT16_MIN;
	static volatile int32_t x1058 = -56995523;
	uint16_t x1059 = UINT16_MAX;
	uint8_t x1060 = 52U;
	volatile int32_t t122 = -34838879;

    t122 = (x1057==(x1058%(x1059/x1060)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x1061 = INT32_MIN;
	int64_t x1062 = INT64_MIN;
	int32_t x1063 = -1;
	volatile int32_t t123 = -491814;

    t123 = (x1061==(x1062%(x1063/x1064)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x1069 = UINT32_MAX;
	uint64_t x1070 = 254LLU;
	int64_t x1071 = INT64_MIN;
	int16_t x1072 = 1032;
	volatile int32_t t124 = 9067287;

    t124 = (x1069==(x1070%(x1071/x1072)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x1073 = UINT32_MAX;
	static int16_t x1074 = INT16_MIN;
	static int64_t x1075 = INT64_MIN;
	static volatile int32_t x1076 = -11887260;
	int32_t t125 = 3;

    t125 = (x1073==(x1074%(x1075/x1076)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x1077 = 193510422LLU;
	int8_t x1078 = 22;
	int64_t x1079 = INT64_MIN;
	static uint16_t x1080 = 1520U;
	static int32_t t126 = -1048286739;

    t126 = (x1077==(x1078%(x1079/x1080)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x1081 = 3828;
	int16_t x1082 = INT16_MIN;
	int32_t x1083 = INT32_MIN;
	volatile int32_t t127 = 1;

    t127 = (x1081==(x1082%(x1083/x1084)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int8_t x1093 = -5;
	int64_t x1094 = INT64_MIN;
	static volatile int64_t x1095 = -3073842709LL;
	int8_t x1096 = 23;
	int32_t t128 = -60;

    t128 = (x1093==(x1094%(x1095/x1096)));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x1097 = 37726;
	volatile uint32_t x1099 = UINT32_MAX;
	int64_t x1100 = -1LL;
	int32_t t129 = 2026745;

    t129 = (x1097==(x1098%(x1099/x1100)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x1101 = 16600;
	uint16_t x1102 = 7821U;
	uint32_t x1103 = UINT32_MAX;
	int32_t x1104 = INT32_MIN;

    t130 = (x1101==(x1102%(x1103/x1104)));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	static int64_t x1114 = INT64_MIN;
	static int32_t x1115 = INT32_MAX;
	volatile int8_t x1116 = -29;
	static int32_t t131 = 2;

    t131 = (x1113==(x1114%(x1115/x1116)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x1117 = INT32_MIN;
	int8_t x1118 = -53;
	uint16_t x1119 = UINT16_MAX;
	uint32_t x1120 = 60U;
	volatile int32_t t132 = 91210;

    t132 = (x1117==(x1118%(x1119/x1120)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x1121 = 121U;
	int16_t x1122 = -1;
	static int32_t x1123 = INT32_MIN;
	int16_t x1124 = 3;

    t133 = (x1121==(x1122%(x1123/x1124)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x1125 = INT16_MIN;
	static int16_t x1126 = INT16_MIN;
	int32_t x1127 = INT32_MAX;
	int8_t x1128 = INT8_MAX;
	int32_t t134 = 1719;

    t134 = (x1125==(x1126%(x1127/x1128)));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint32_t x1145 = 19296U;
	int32_t x1147 = 181235;
	int8_t x1148 = INT8_MIN;

    t135 = (x1145==(x1146%(x1147/x1148)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x1149 = INT16_MIN;
	volatile int32_t x1150 = INT32_MAX;
	static int32_t x1152 = INT32_MIN;
	volatile int32_t t136 = 2747;

    t136 = (x1149==(x1150%(x1151/x1152)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x1153 = -1;
	static int16_t x1154 = -57;
	int32_t x1155 = INT32_MAX;
	static volatile int32_t t137 = -426709187;

    t137 = (x1153==(x1154%(x1155/x1156)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x1157 = -1047497212;
	static int32_t x1158 = -1;
	volatile int64_t x1159 = INT64_MIN;
	static int16_t x1160 = INT16_MIN;

    t138 = (x1157==(x1158%(x1159/x1160)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x1173 = -1;
	static int64_t x1175 = 1862143616021LL;

    t139 = (x1173==(x1174%(x1175/x1176)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x1177 = 7;
	int8_t x1179 = INT8_MIN;
	static uint64_t x1180 = 231LLU;

    t140 = (x1177==(x1178%(x1179/x1180)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	static int32_t x1182 = INT32_MIN;
	static int16_t x1183 = -1;
	int64_t x1184 = -1LL;
	volatile int32_t t141 = -1;

    t141 = (x1181==(x1182%(x1183/x1184)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x1185 = INT16_MIN;
	volatile uint32_t x1186 = 0U;
	uint64_t x1187 = 153LLU;
	int8_t x1188 = 2;
	int32_t t142 = -835;

    t142 = (x1185==(x1186%(x1187/x1188)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x1193 = INT32_MIN;
	volatile int64_t x1194 = -1LL;
	volatile int16_t x1195 = INT16_MIN;
	uint16_t x1196 = 177U;
	int32_t t143 = -14221;

    t143 = (x1193==(x1194%(x1195/x1196)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint8_t x1213 = 1U;
	uint64_t x1215 = UINT64_MAX;
	int16_t x1216 = -84;
	int32_t t144 = 47666;

    t144 = (x1213==(x1214%(x1215/x1216)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint64_t x1221 = 436064LLU;
	static int64_t x1222 = INT64_MIN;
	static volatile uint16_t x1223 = 16582U;
	int8_t x1224 = -2;
	int32_t t145 = -998774260;

    t145 = (x1221==(x1222%(x1223/x1224)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x1229 = 3271068086530LLU;
	uint64_t x1230 = 25724LLU;
	static int8_t x1231 = INT8_MIN;
	uint32_t x1232 = 130100U;
	volatile int32_t t146 = -18247596;

    t146 = (x1229==(x1230%(x1231/x1232)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x1233 = -1;
	int64_t x1234 = -1LL;
	int8_t x1235 = INT8_MIN;
	volatile int8_t x1236 = 2;
	volatile int32_t t147 = 206;

    t147 = (x1233==(x1234%(x1235/x1236)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint32_t x1237 = 6272807U;
	uint64_t x1238 = 35LLU;
	int64_t x1239 = INT64_MIN;
	static int64_t x1240 = 1LL;
	volatile int32_t t148 = -1640009;

    t148 = (x1237==(x1238%(x1239/x1240)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x1241 = INT16_MIN;
	volatile int8_t x1242 = -1;
	int64_t x1243 = INT64_MIN;
	volatile int32_t t149 = 2936;

    t149 = (x1241==(x1242%(x1243/x1244)));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x1249 = INT64_MAX;
	volatile int32_t x1250 = -1;
	volatile int32_t x1251 = INT32_MAX;
	static int8_t x1252 = INT8_MIN;
	int32_t t150 = -30;

    t150 = (x1249==(x1250%(x1251/x1252)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x1257 = 4871761841142090407LLU;
	int32_t x1258 = -1;
	volatile int64_t x1259 = INT64_MIN;
	int32_t t151 = 0;

    t151 = (x1257==(x1258%(x1259/x1260)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x1269 = INT16_MIN;
	volatile int8_t x1270 = -1;
	uint16_t x1271 = 16231U;
	uint32_t x1272 = 2U;
	int32_t t152 = -15727;

    t152 = (x1269==(x1270%(x1271/x1272)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x1273 = 1U;
	volatile int32_t t153 = 7587;

    t153 = (x1273==(x1274%(x1275/x1276)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x1289 = INT32_MIN;
	uint32_t x1290 = 175440U;
	int64_t x1292 = -1LL;
	int32_t t154 = 43914;

    t154 = (x1289==(x1290%(x1291/x1292)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x1293 = -24;
	uint8_t x1294 = 60U;
	volatile int32_t t155 = 32;

    t155 = (x1293==(x1294%(x1295/x1296)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x1313 = 16116425665LLU;
	static int16_t x1314 = -1;
	static int64_t x1315 = INT64_MIN;

    t156 = (x1313==(x1314%(x1315/x1316)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static int64_t x1329 = 0LL;
	static uint16_t x1330 = 359U;
	uint64_t x1331 = UINT64_MAX;
	int8_t x1332 = INT8_MIN;
	int32_t t157 = 1;

    t157 = (x1329==(x1330%(x1331/x1332)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x1334 = 91295199126LL;
	int32_t x1335 = INT32_MAX;
	static volatile int32_t t158 = -17933;

    t158 = (x1333==(x1334%(x1335/x1336)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x1357 = 21271U;
	static uint16_t x1358 = 2U;
	static int32_t x1359 = INT32_MIN;
	int32_t x1360 = INT32_MAX;
	volatile int32_t t159 = -237072;

    t159 = (x1357==(x1358%(x1359/x1360)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x1361 = -8386967800LL;
	uint8_t x1362 = 2U;
	int16_t x1363 = -42;
	int32_t x1364 = -1;
	volatile int32_t t160 = -627;

    t160 = (x1361==(x1362%(x1363/x1364)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x1373 = INT16_MIN;
	volatile int16_t x1374 = INT16_MIN;
	int64_t x1375 = -1LL;
	int32_t x1376 = -1;
	int32_t t161 = -146627;

    t161 = (x1373==(x1374%(x1375/x1376)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x1377 = INT64_MIN;
	int64_t x1378 = INT64_MAX;
	uint8_t x1380 = 14U;
	int32_t t162 = 124015;

    t162 = (x1377==(x1378%(x1379/x1380)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x1389 = INT64_MIN;
	int64_t x1390 = INT64_MIN;
	volatile int64_t x1391 = 1289649658811582452LL;
	static int16_t x1392 = INT16_MIN;
	static volatile int32_t t163 = -10529;

    t163 = (x1389==(x1390%(x1391/x1392)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x1397 = UINT64_MAX;
	static int32_t x1398 = -216230;
	static int8_t x1399 = -1;
	int32_t x1400 = -1;
	volatile int32_t t164 = 470726389;

    t164 = (x1397==(x1398%(x1399/x1400)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x1410 = INT32_MAX;
	int64_t x1411 = 41LL;
	int8_t x1412 = -1;
	volatile int32_t t165 = -803348672;

    t165 = (x1409==(x1410%(x1411/x1412)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint64_t x1413 = UINT64_MAX;
	int32_t x1414 = INT32_MAX;
	uint32_t x1415 = UINT32_MAX;
	static int8_t x1416 = -1;
	int32_t t166 = 57667;

    t166 = (x1413==(x1414%(x1415/x1416)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int64_t x1421 = INT64_MIN;
	volatile int32_t x1422 = -7;
	uint32_t x1423 = UINT32_MAX;
	int64_t x1424 = -491139LL;
	volatile int32_t t167 = -3;

    t167 = (x1421==(x1422%(x1423/x1424)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	uint8_t x1425 = 83U;
	uint32_t x1426 = 19142U;
	int64_t x1427 = INT64_MAX;
	uint16_t x1428 = 2008U;
	static volatile int32_t t168 = 739;

    t168 = (x1425==(x1426%(x1427/x1428)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x1429 = INT32_MIN;
	int16_t x1432 = -1;
	volatile int32_t t169 = 8015;

    t169 = (x1429==(x1430%(x1431/x1432)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x1433 = 13111686LL;
	uint8_t x1434 = UINT8_MAX;
	int16_t x1436 = INT16_MIN;

    t170 = (x1433==(x1434%(x1435/x1436)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x1445 = 6U;
	int64_t x1446 = INT64_MIN;
	volatile int8_t x1447 = INT8_MIN;
	volatile uint8_t x1448 = 98U;
	int32_t t171 = 711643;

    t171 = (x1445==(x1446%(x1447/x1448)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int8_t x1461 = -2;
	int8_t x1462 = INT8_MIN;
	static int8_t x1464 = -1;
	volatile int32_t t172 = -1;

    t172 = (x1461==(x1462%(x1463/x1464)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x1466 = -586LL;
	int32_t x1467 = INT32_MAX;
	int8_t x1468 = INT8_MAX;
	volatile int32_t t173 = -8;

    t173 = (x1465==(x1466%(x1467/x1468)));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x1473 = -1;
	uint64_t x1474 = UINT64_MAX;
	volatile int32_t x1475 = 15887211;
	static int32_t t174 = -497472661;

    t174 = (x1473==(x1474%(x1475/x1476)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int32_t x1481 = 10;
	int32_t x1483 = INT32_MIN;
	uint64_t x1484 = 6383478814LLU;
	volatile int32_t t175 = 103116;

    t175 = (x1481==(x1482%(x1483/x1484)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x1489 = INT8_MIN;
	uint64_t x1490 = UINT64_MAX;
	static int32_t x1491 = INT32_MIN;
	static int32_t t176 = 10;

    t176 = (x1489==(x1490%(x1491/x1492)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x1506 = 1U;
	volatile int32_t t177 = -52390;

    t177 = (x1505==(x1506%(x1507/x1508)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1510 = INT16_MAX;
	int32_t x1511 = INT32_MIN;
	int64_t x1512 = -1LL;
	int32_t t178 = 0;

    t178 = (x1509==(x1510%(x1511/x1512)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x1517 = 5U;
	int16_t x1518 = INT16_MIN;
	uint16_t x1519 = 12200U;
	static int8_t x1520 = 6;
	int32_t t179 = -992;

    t179 = (x1517==(x1518%(x1519/x1520)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1525 = INT64_MIN;
	int16_t x1526 = INT16_MIN;
	static uint16_t x1527 = UINT16_MAX;
	int16_t x1528 = 302;
	volatile int32_t t180 = -358886621;

    t180 = (x1525==(x1526%(x1527/x1528)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1529 = INT8_MAX;
	static int32_t x1530 = -1;
	int16_t x1531 = INT16_MIN;
	uint32_t x1532 = 11U;

    t181 = (x1529==(x1530%(x1531/x1532)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x1537 = INT32_MIN;
	uint64_t x1538 = UINT64_MAX;
	static int32_t x1539 = -1;
	volatile uint32_t x1540 = 8607010U;

    t182 = (x1537==(x1538%(x1539/x1540)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x1541 = -1;
	int64_t x1542 = 23224659980LL;
	volatile uint8_t x1543 = 22U;
	int8_t x1544 = 2;
	volatile int32_t t183 = -305;

    t183 = (x1541==(x1542%(x1543/x1544)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1547 = -1;
	static volatile int32_t t184 = -184;

    t184 = (x1545==(x1546%(x1547/x1548)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1566 = INT64_MIN;
	int32_t x1567 = -1;
	static int64_t x1568 = -1LL;
	volatile int32_t t185 = 435013;

    t185 = (x1565==(x1566%(x1567/x1568)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x1577 = INT64_MAX;
	uint16_t x1578 = UINT16_MAX;
	volatile int64_t x1579 = -12069868546009290LL;
	static int32_t x1580 = INT32_MIN;
	static int32_t t186 = -1;

    t186 = (x1577==(x1578%(x1579/x1580)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x1581 = INT64_MAX;
	int16_t x1583 = INT16_MAX;
	int8_t x1584 = -1;
	volatile int32_t t187 = 60;

    t187 = (x1581==(x1582%(x1583/x1584)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x1588 = INT32_MIN;
	static volatile int32_t t188 = 0;

    t188 = (x1585==(x1586%(x1587/x1588)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1589 = -1;
	int32_t x1590 = -526382321;
	int32_t x1591 = -1027084197;
	int64_t x1592 = -1LL;
	int32_t t189 = 880137900;

    t189 = (x1589==(x1590%(x1591/x1592)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1597 = INT16_MIN;
	static volatile int16_t x1598 = INT16_MIN;
	volatile uint8_t x1599 = UINT8_MAX;
	volatile int32_t t190 = 30;

    t190 = (x1597==(x1598%(x1599/x1600)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x1609 = INT8_MIN;
	int8_t x1610 = -1;
	int64_t x1611 = INT64_MIN;
	int32_t x1612 = INT32_MIN;
	static int32_t t191 = -429129772;

    t191 = (x1609==(x1610%(x1611/x1612)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint8_t x1613 = 113U;
	volatile int64_t x1615 = INT64_MIN;
	int16_t x1616 = -3767;
	static volatile int32_t t192 = -299729570;

    t192 = (x1613==(x1614%(x1615/x1616)));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1629 = UINT32_MAX;
	static int64_t x1630 = INT64_MIN;
	int32_t x1631 = 120256;
	int8_t x1632 = INT8_MIN;
	int32_t t193 = 1269;

    t193 = (x1629==(x1630%(x1631/x1632)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x1638 = -3547683519838LL;
	static uint32_t x1640 = 1U;
	static int32_t t194 = -15;

    t194 = (x1637==(x1638%(x1639/x1640)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1655 = INT16_MAX;
	int32_t x1656 = -1;
	int32_t t195 = 1121;

    t195 = (x1653==(x1654%(x1655/x1656)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x1659 = UINT16_MAX;
	int16_t x1660 = 108;
	volatile int32_t t196 = 5;

    t196 = (x1657==(x1658%(x1659/x1660)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int8_t x1662 = INT8_MIN;
	int32_t x1663 = INT32_MIN;
	static uint16_t x1664 = 3U;

    t197 = (x1661==(x1662%(x1663/x1664)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x1669 = -1;
	volatile int32_t x1670 = 8788;
	int64_t x1671 = INT64_MAX;
	int16_t x1672 = INT16_MAX;
	int32_t t198 = -22712;

    t198 = (x1669==(x1670%(x1671/x1672)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1681 = -7;
	int32_t x1682 = INT32_MIN;
	uint32_t x1683 = 13207244U;
	static volatile int32_t t199 = -1;

    t199 = (x1681==(x1682%(x1683/x1684)));

    if (t199 != 0) { NG(); } else { ; }
	
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

