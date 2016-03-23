
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

int64_t x25 = INT64_MAX;
static int64_t x38 = INT64_MIN;
static uint32_t x42 = UINT32_MAX;
uint8_t x49 = 13U;
static uint16_t x51 = UINT16_MAX;
uint64_t x74 = UINT64_MAX;
int32_t t6 = -2;
static uint8_t x81 = UINT8_MAX;
static int32_t t7 = 1;
uint32_t x95 = 92041U;
volatile int16_t x96 = INT16_MAX;
static int32_t x110 = 4050889;
int16_t x120 = INT16_MIN;
volatile uint16_t x131 = UINT16_MAX;
uint8_t x133 = 1U;
static volatile int8_t x134 = 1;
volatile int32_t t16 = 0;
static uint32_t x145 = 33384089U;
uint8_t x147 = 0U;
int32_t t18 = -1;
int64_t x162 = -23325LL;
uint64_t x163 = UINT64_MAX;
int32_t t20 = 9417;
int8_t x199 = INT8_MIN;
int16_t x207 = INT16_MAX;
volatile int32_t t23 = -275467;
volatile uint32_t x226 = 1887751424U;
volatile int32_t t25 = -59;
static int16_t x254 = -1;
int8_t x321 = -1;
uint64_t x322 = 1LLU;
int32_t t33 = 26628145;
static volatile int16_t x348 = -2;
int32_t x354 = -1;
volatile int8_t x356 = INT8_MIN;
static int64_t x369 = INT64_MIN;
int32_t t38 = -47144;
int16_t x413 = INT16_MIN;
uint16_t x422 = 11686U;
uint8_t x426 = UINT8_MAX;
uint32_t x428 = 4359972U;
int32_t t43 = -3177327;
static uint8_t x434 = 14U;
int16_t x448 = -116;
volatile uint64_t x455 = 155225910017LLU;
volatile int32_t t48 = -144941484;
static int16_t x459 = INT16_MIN;
static uint64_t x460 = 42145262LLU;
uint64_t x463 = 2080151702459967911LLU;
uint32_t x464 = 796U;
int32_t t50 = -956269;
static int64_t x490 = -7598755444976351LL;
uint64_t x495 = UINT64_MAX;
static int32_t x507 = -4649;
static int64_t x508 = INT64_MIN;
volatile uint32_t x513 = UINT32_MAX;
int32_t t57 = -12187017;
uint32_t x545 = 15U;
int64_t x546 = -1495515024072832190LL;
uint8_t x555 = UINT8_MAX;
uint8_t x556 = 60U;
uint64_t x565 = 29338456LLU;
int16_t x593 = INT16_MIN;
volatile int16_t x604 = INT16_MAX;
volatile int32_t t65 = 13347;
static int32_t x615 = INT32_MIN;
static int16_t x621 = INT16_MAX;
uint64_t x624 = 3348961413LLU;
int32_t t68 = -53;
uint16_t x628 = 16U;
int64_t x638 = INT64_MAX;
volatile int16_t x640 = INT16_MIN;
int32_t x649 = INT32_MIN;
volatile int8_t x652 = INT8_MIN;
int32_t x680 = INT32_MIN;
int16_t x711 = INT16_MIN;
volatile int32_t t82 = -13922713;
int64_t x718 = 832389029216726173LL;
int32_t x719 = INT32_MIN;
volatile uint8_t x722 = 68U;
int16_t x730 = -20;
int32_t x731 = -1;
int32_t x734 = INT32_MIN;
int32_t x735 = INT32_MAX;
volatile int32_t t87 = -21882;
volatile int32_t t88 = 1;
static uint8_t x767 = 0U;
volatile int32_t t90 = 74259;
int64_t x782 = INT64_MIN;
int64_t x791 = 9296443LL;
uint8_t x811 = UINT8_MAX;
volatile int64_t x812 = INT64_MIN;
int16_t x844 = INT16_MIN;
int16_t x861 = INT16_MIN;
uint16_t x907 = UINT16_MAX;
uint16_t x925 = 1408U;
int8_t x939 = -1;
int32_t t111 = 96647;
int8_t x976 = 1;
int16_t x985 = 1;
int32_t x1001 = INT32_MAX;
static volatile int64_t x1002 = INT64_MIN;
static volatile int32_t x1022 = -10;
static volatile uint16_t x1024 = UINT16_MAX;
int64_t x1033 = -1LL;
static volatile int32_t t118 = -100;
int16_t x1049 = INT16_MIN;
int32_t t119 = -7070050;
int8_t x1065 = -1;
int8_t x1067 = 0;
static int32_t t122 = -102;
uint32_t x1076 = 133U;
int16_t x1078 = -1;
volatile int16_t x1079 = -1;
uint8_t x1081 = 6U;
int32_t t125 = 65125736;
volatile int32_t t127 = -29488495;
volatile int32_t t128 = 163;
uint64_t x1107 = UINT64_MAX;
int32_t t129 = -2471;
int32_t t131 = -31;
volatile uint64_t x1130 = 19026804LLU;
static int8_t x1131 = INT8_MIN;
static int8_t x1142 = -1;
static int8_t x1144 = INT8_MIN;
volatile uint8_t x1145 = 3U;
uint16_t x1146 = 6U;
volatile int64_t x1153 = INT64_MIN;
volatile int16_t x1161 = INT16_MIN;
uint8_t x1173 = UINT8_MAX;
static volatile int32_t t140 = -5;
uint16_t x1203 = 1965U;
static int64_t x1209 = -904655813459940LL;
int8_t x1235 = -6;
volatile int32_t t143 = 4943717;
int64_t x1257 = INT64_MAX;
int32_t t145 = 60777116;
static volatile int8_t x1282 = INT8_MIN;
uint64_t x1284 = 1LLU;
int32_t x1290 = -1;
volatile uint8_t x1308 = 1U;
int64_t x1329 = INT64_MIN;
int16_t x1334 = INT16_MAX;
int32_t t156 = -2;
static int32_t x1357 = INT32_MAX;
uint32_t x1361 = 198194877U;
int32_t x1390 = -1;
int32_t t162 = -101270;
static uint8_t x1414 = UINT8_MAX;
volatile int32_t t165 = 2;
uint64_t x1417 = UINT64_MAX;
int16_t x1419 = -1;
volatile int32_t t167 = 38534;
volatile uint32_t x1451 = UINT32_MAX;
int32_t x1452 = INT32_MIN;
int64_t x1456 = INT64_MIN;
static volatile int32_t t170 = -671;
static uint16_t x1463 = 114U;
volatile int32_t t172 = 4307567;
volatile int8_t x1473 = INT8_MAX;
static uint32_t x1482 = 0U;
static volatile int32_t t176 = -239221418;
int8_t x1493 = INT8_MAX;
int8_t x1495 = -1;
int16_t x1519 = -147;
uint16_t x1528 = 1U;
static int16_t x1565 = INT16_MIN;
static volatile int16_t x1587 = INT16_MAX;
static int16_t x1588 = -3869;
int32_t t183 = 12767;
int32_t t185 = -29;
uint8_t x1607 = UINT8_MAX;
volatile int32_t t186 = 49930;
volatile int32_t t187 = -5357;
volatile int32_t t188 = 35143199;
static uint64_t x1627 = UINT64_MAX;
volatile int8_t x1631 = INT8_MAX;
volatile int16_t x1659 = -41;
int32_t t193 = 66640;
int8_t x1662 = INT8_MIN;
int16_t x1672 = INT16_MIN;
int32_t t196 = 14;
uint8_t x1689 = UINT8_MAX;
uint8_t x1690 = 9U;
int8_t x1692 = -1;
int32_t t197 = 177720;
static volatile int64_t x1697 = INT64_MAX;


void f0(void) {
    	uint64_t x5 = 9737LLU;
	static int16_t x6 = 0;
	static int8_t x7 = 2;
	static int32_t x8 = INT32_MIN;
	int32_t t0 = 0;

    t0 = ((x5<=x6)%(x7>x8));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x26 = -1;
	static int32_t x27 = INT32_MIN;
	static volatile int64_t x28 = INT64_MIN;
	volatile int32_t t1 = -356;

    t1 = ((x25<=x26)%(x27>x28));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x37 = INT16_MAX;
	uint32_t x39 = 21691673U;
	int64_t x40 = -1LL;
	int32_t t2 = 18;

    t2 = ((x37<=x38)%(x39>x40));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x41 = INT32_MIN;
	static uint8_t x43 = UINT8_MAX;
	int32_t x44 = -283554;
	static int32_t t3 = 5334;

    t3 = ((x41<=x42)%(x43>x44));

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x50 = INT8_MIN;
	static int32_t x52 = -1;
	int32_t t4 = 55419;

    t4 = ((x49<=x50)%(x51>x52));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x53 = INT16_MIN;
	int64_t x54 = INT64_MIN;
	static uint8_t x55 = UINT8_MAX;
	int8_t x56 = 0;
	volatile int32_t t5 = 127877354;

    t5 = ((x53<=x54)%(x55>x56));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int32_t x73 = INT32_MAX;
	uint64_t x75 = 1433822551775284806LLU;
	uint8_t x76 = UINT8_MAX;

    t6 = ((x73<=x74)%(x75>x76));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x82 = INT64_MAX;
	int16_t x83 = INT16_MIN;
	int64_t x84 = -3993030496687640122LL;

    t7 = ((x81<=x82)%(x83>x84));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint64_t x85 = 26LLU;
	int16_t x86 = -1;
	int32_t x87 = -1;
	static int64_t x88 = INT64_MIN;
	volatile int32_t t8 = -813979403;

    t8 = ((x85<=x86)%(x87>x88));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x93 = -43;
	uint64_t x94 = 261419606439371LLU;
	int32_t t9 = -3;

    t9 = ((x93<=x94)%(x95>x96));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x109 = INT16_MIN;
	uint8_t x111 = 118U;
	static int32_t x112 = INT32_MIN;
	int32_t t10 = -8075;

    t10 = ((x109<=x110)%(x111>x112));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x117 = -28123585LL;
	int16_t x118 = INT16_MAX;
	uint32_t x119 = UINT32_MAX;
	volatile int32_t t11 = 559;

    t11 = ((x117<=x118)%(x119>x120));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x121 = -1LL;
	int16_t x122 = -22;
	static uint32_t x123 = 113680532U;
	uint8_t x124 = UINT8_MAX;
	volatile int32_t t12 = -6;

    t12 = ((x121<=x122)%(x123>x124));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x129 = -18;
	uint8_t x130 = 45U;
	int64_t x132 = INT64_MIN;
	int32_t t13 = 119343166;

    t13 = ((x129<=x130)%(x131>x132));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x135 = UINT8_MAX;
	int16_t x136 = INT16_MIN;
	int32_t t14 = -23;

    t14 = ((x133<=x134)%(x135>x136));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile uint16_t x137 = UINT16_MAX;
	int64_t x138 = INT64_MIN;
	static int64_t x139 = INT64_MAX;
	static uint16_t x140 = 18U;
	int32_t t15 = -57;

    t15 = ((x137<=x138)%(x139>x140));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x141 = 156LL;
	static uint8_t x142 = UINT8_MAX;
	int64_t x143 = 8LL;
	static uint8_t x144 = 2U;

    t16 = ((x141<=x142)%(x143>x144));

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x146 = INT16_MAX;
	int32_t x148 = -4089421;
	volatile int32_t t17 = 11526;

    t17 = ((x145<=x146)%(x147>x148));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x153 = INT16_MIN;
	static int32_t x154 = INT32_MIN;
	uint64_t x155 = 325692980284LLU;
	uint8_t x156 = 42U;

    t18 = ((x153<=x154)%(x155>x156));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x161 = -33219788;
	int16_t x164 = -25;
	volatile int32_t t19 = 7;

    t19 = ((x161<=x162)%(x163>x164));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x185 = INT16_MAX;
	uint8_t x186 = 1U;
	volatile int32_t x187 = -157411;
	uint32_t x188 = 978979545U;

    t20 = ((x185<=x186)%(x187>x188));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint32_t x193 = 52354970U;
	uint64_t x194 = 861554917248LLU;
	volatile int8_t x195 = -17;
	int8_t x196 = INT8_MIN;
	int32_t t21 = 11523274;

    t21 = ((x193<=x194)%(x195>x196));

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x197 = UINT16_MAX;
	int64_t x198 = -1LL;
	uint64_t x200 = 1071459603624512LLU;
	int32_t t22 = 12;

    t22 = ((x197<=x198)%(x199>x200));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x205 = -5;
	uint16_t x206 = 15U;
	static int8_t x208 = 0;

    t23 = ((x205<=x206)%(x207>x208));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x221 = 20;
	uint16_t x222 = UINT16_MAX;
	volatile int32_t x223 = -1;
	int64_t x224 = -886745693285LL;
	int32_t t24 = -21;

    t24 = ((x221<=x222)%(x223>x224));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x225 = UINT8_MAX;
	volatile int64_t x227 = INT64_MIN;
	uint64_t x228 = 6724755765629881838LLU;

    t25 = ((x225<=x226)%(x227>x228));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x233 = INT64_MIN;
	static volatile int64_t x234 = -1LL;
	volatile int32_t x235 = INT32_MIN;
	static uint64_t x236 = 1071LLU;
	static int32_t t26 = -65705;

    t26 = ((x233<=x234)%(x235>x236));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x253 = 28U;
	int8_t x255 = INT8_MAX;
	volatile uint32_t x256 = 74U;
	volatile int32_t t27 = 1128122;

    t27 = ((x253<=x254)%(x255>x256));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	static int32_t x257 = INT32_MIN;
	volatile uint8_t x258 = UINT8_MAX;
	int16_t x259 = 14932;
	uint8_t x260 = UINT8_MAX;
	static int32_t t28 = 0;

    t28 = ((x257<=x258)%(x259>x260));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint32_t x265 = 175098U;
	int64_t x266 = -1LL;
	volatile int8_t x267 = -1;
	volatile int32_t x268 = -353;
	static int32_t t29 = 11291;

    t29 = ((x265<=x266)%(x267>x268));

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x289 = 2577402660954659LLU;
	int8_t x290 = INT8_MIN;
	int8_t x291 = INT8_MAX;
	static int32_t x292 = INT32_MIN;
	int32_t t30 = 0;

    t30 = ((x289<=x290)%(x291>x292));

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x301 = 1;
	static int32_t x302 = -118342210;
	int8_t x303 = 4;
	int16_t x304 = INT16_MIN;
	volatile int32_t t31 = 76631649;

    t31 = ((x301<=x302)%(x303>x304));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x323 = 762715260628517004LL;
	volatile int16_t x324 = 4824;
	static volatile int32_t t32 = 17161;

    t32 = ((x321<=x322)%(x323>x324));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x325 = INT16_MIN;
	int8_t x326 = -1;
	int8_t x327 = 9;
	volatile int8_t x328 = INT8_MIN;

    t33 = ((x325<=x326)%(x327>x328));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x345 = 0U;
	int64_t x346 = -1LL;
	static uint32_t x347 = UINT32_MAX;
	volatile int32_t t34 = 50407;

    t34 = ((x345<=x346)%(x347>x348));

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x353 = INT64_MIN;
	volatile int8_t x355 = -44;
	static int32_t t35 = 31029;

    t35 = ((x353<=x354)%(x355>x356));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint64_t x370 = 4544LLU;
	uint64_t x371 = UINT64_MAX;
	uint64_t x372 = 232929878LLU;
	static int32_t t36 = 480759945;

    t36 = ((x369<=x370)%(x371>x372));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x377 = INT64_MIN;
	static int64_t x378 = -703273745678704877LL;
	volatile int16_t x379 = -9411;
	uint64_t x380 = 32945458038236LLU;
	int32_t t37 = 16212495;

    t37 = ((x377<=x378)%(x379>x380));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x397 = -633622;
	int8_t x398 = INT8_MIN;
	uint16_t x399 = 14953U;
	uint8_t x400 = 20U;

    t38 = ((x397<=x398)%(x399>x400));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x401 = 93U;
	uint64_t x402 = 35206204218LLU;
	static int8_t x403 = INT8_MIN;
	static uint64_t x404 = 4633402LLU;
	int32_t t39 = 1;

    t39 = ((x401<=x402)%(x403>x404));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x409 = 4;
	uint8_t x410 = 31U;
	int64_t x411 = INT64_MAX;
	int16_t x412 = INT16_MAX;
	int32_t t40 = -3272391;

    t40 = ((x409<=x410)%(x411>x412));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint16_t x414 = UINT16_MAX;
	volatile int8_t x415 = 34;
	int64_t x416 = INT64_MIN;
	int32_t t41 = -3852051;

    t41 = ((x413<=x414)%(x415>x416));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x421 = 45653LLU;
	int32_t x423 = -1;
	int8_t x424 = INT8_MIN;
	int32_t t42 = -154456321;

    t42 = ((x421<=x422)%(x423>x424));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x425 = 360U;
	int32_t x427 = INT32_MIN;

    t43 = ((x425<=x426)%(x427>x428));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x433 = -29;
	int16_t x435 = -1;
	volatile int32_t x436 = -1055729708;
	int32_t t44 = 24311420;

    t44 = ((x433<=x434)%(x435>x436));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x441 = -55320228441LL;
	static int16_t x442 = INT16_MIN;
	uint32_t x443 = 1338946029U;
	uint16_t x444 = UINT16_MAX;
	volatile int32_t t45 = 472097;

    t45 = ((x441<=x442)%(x443>x444));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint8_t x445 = 1U;
	static int8_t x446 = 27;
	uint16_t x447 = UINT16_MAX;
	volatile int32_t t46 = 107422;

    t46 = ((x445<=x446)%(x447>x448));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x449 = -32;
	int32_t x450 = INT32_MAX;
	int8_t x451 = INT8_MIN;
	volatile uint64_t x452 = 7823330529352147LLU;
	static int32_t t47 = 587643;

    t47 = ((x449<=x450)%(x451>x452));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x453 = INT32_MIN;
	int64_t x454 = 40LL;
	uint32_t x456 = 1945606132U;

    t48 = ((x453<=x454)%(x455>x456));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint16_t x457 = 3733U;
	int8_t x458 = -1;
	int32_t t49 = 3789;

    t49 = ((x457<=x458)%(x459>x460));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x461 = -1LL;
	int8_t x462 = 3;

    t50 = ((x461<=x462)%(x463>x464));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x473 = -11;
	static int64_t x474 = INT64_MIN;
	int16_t x475 = INT16_MIN;
	uint32_t x476 = 0U;
	int32_t t51 = 6020;

    t51 = ((x473<=x474)%(x475>x476));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x481 = -1LL;
	static int64_t x482 = INT64_MAX;
	int64_t x483 = -1LL;
	int32_t x484 = INT32_MIN;
	static volatile int32_t t52 = -4;

    t52 = ((x481<=x482)%(x483>x484));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x489 = UINT32_MAX;
	volatile uint16_t x491 = UINT16_MAX;
	int16_t x492 = 6592;
	volatile int32_t t53 = 1;

    t53 = ((x489<=x490)%(x491>x492));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x493 = INT8_MIN;
	int16_t x494 = INT16_MIN;
	int32_t x496 = INT32_MIN;
	volatile int32_t t54 = -3585;

    t54 = ((x493<=x494)%(x495>x496));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int16_t x505 = -1;
	int16_t x506 = INT16_MIN;
	volatile int32_t t55 = 105;

    t55 = ((x505<=x506)%(x507>x508));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x514 = INT8_MAX;
	static uint16_t x515 = 270U;
	int8_t x516 = 3;
	volatile int32_t t56 = 931;

    t56 = ((x513<=x514)%(x515>x516));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x533 = -19;
	int16_t x534 = -12746;
	static int32_t x535 = 509;
	uint8_t x536 = 15U;

    t57 = ((x533<=x534)%(x535>x536));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x537 = 16838U;
	int32_t x538 = INT32_MAX;
	uint64_t x539 = 2049103005172104LLU;
	volatile int64_t x540 = 133612029667925LL;
	int32_t t58 = -7885;

    t58 = ((x537<=x538)%(x539>x540));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x547 = INT16_MAX;
	uint32_t x548 = 0U;
	int32_t t59 = 979407603;

    t59 = ((x545<=x546)%(x547>x548));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x553 = 28U;
	volatile int32_t x554 = INT32_MIN;
	static int32_t t60 = 79398;

    t60 = ((x553<=x554)%(x555>x556));

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int8_t x557 = INT8_MIN;
	static int64_t x558 = INT64_MIN;
	uint8_t x559 = UINT8_MAX;
	static volatile int16_t x560 = INT16_MIN;
	int32_t t61 = 2;

    t61 = ((x557<=x558)%(x559>x560));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x566 = -50;
	int64_t x567 = 56276131672563LL;
	volatile int16_t x568 = INT16_MIN;
	static volatile int32_t t62 = 52;

    t62 = ((x565<=x566)%(x567>x568));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x594 = -3275LL;
	volatile int16_t x595 = -15;
	int64_t x596 = -20LL;
	static volatile int32_t t63 = -4271;

    t63 = ((x593<=x594)%(x595>x596));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x601 = INT64_MIN;
	volatile int16_t x602 = INT16_MAX;
	volatile int64_t x603 = INT64_MAX;
	volatile int32_t t64 = -511360;

    t64 = ((x601<=x602)%(x603>x604));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x605 = 66U;
	static int32_t x606 = INT32_MAX;
	int64_t x607 = INT64_MAX;
	static int64_t x608 = -72737976956674361LL;

    t65 = ((x605<=x606)%(x607>x608));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x609 = INT8_MIN;
	int32_t x610 = -1;
	uint64_t x611 = UINT64_MAX;
	uint32_t x612 = 192U;
	int32_t t66 = 3889540;

    t66 = ((x609<=x610)%(x611>x612));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint16_t x613 = UINT16_MAX;
	uint8_t x614 = 0U;
	uint64_t x616 = 27911LLU;
	volatile int32_t t67 = -446;

    t67 = ((x613<=x614)%(x615>x616));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint16_t x622 = 1024U;
	int8_t x623 = -1;

    t68 = ((x621<=x622)%(x623>x624));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x625 = -1LL;
	volatile int32_t x626 = INT32_MAX;
	static uint16_t x627 = UINT16_MAX;
	volatile int32_t t69 = 0;

    t69 = ((x625<=x626)%(x627>x628));

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x633 = -1;
	static volatile int64_t x634 = INT64_MIN;
	static int64_t x635 = 554568953LL;
	int64_t x636 = INT64_MIN;
	volatile int32_t t70 = -657983;

    t70 = ((x633<=x634)%(x635>x636));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x637 = 889;
	int16_t x639 = INT16_MAX;
	volatile int32_t t71 = -44894;

    t71 = ((x637<=x638)%(x639>x640));

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	static volatile int32_t x641 = INT32_MIN;
	int64_t x642 = 9LL;
	int64_t x643 = INT64_MAX;
	int32_t x644 = INT32_MIN;
	int32_t t72 = 22919;

    t72 = ((x641<=x642)%(x643>x644));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x650 = INT16_MIN;
	int8_t x651 = 0;
	volatile int32_t t73 = 465;

    t73 = ((x649<=x650)%(x651>x652));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x653 = 6280835LLU;
	uint64_t x654 = UINT64_MAX;
	int8_t x655 = 1;
	int64_t x656 = INT64_MIN;
	static int32_t t74 = -80838;

    t74 = ((x653<=x654)%(x655>x656));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint16_t x657 = 10U;
	int64_t x658 = INT64_MIN;
	static uint64_t x659 = UINT64_MAX;
	int32_t x660 = INT32_MAX;
	volatile int32_t t75 = 523407;

    t75 = ((x657<=x658)%(x659>x660));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x673 = INT64_MIN;
	uint8_t x674 = 3U;
	int8_t x675 = -1;
	uint64_t x676 = 7821LLU;
	static volatile int32_t t76 = -266512726;

    t76 = ((x673<=x674)%(x675>x676));

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	static int8_t x677 = INT8_MIN;
	volatile int8_t x678 = INT8_MIN;
	static int8_t x679 = INT8_MIN;
	int32_t t77 = 16;

    t77 = ((x677<=x678)%(x679>x680));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	static volatile uint16_t x681 = UINT16_MAX;
	int8_t x682 = INT8_MIN;
	int64_t x683 = 9171180LL;
	int8_t x684 = -19;
	int32_t t78 = 108096;

    t78 = ((x681<=x682)%(x683>x684));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x685 = UINT8_MAX;
	uint16_t x686 = 1994U;
	volatile int8_t x687 = -49;
	int16_t x688 = INT16_MIN;
	static volatile int32_t t79 = -84;

    t79 = ((x685<=x686)%(x687>x688));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x701 = -1;
	uint8_t x702 = 25U;
	static uint16_t x703 = UINT16_MAX;
	int8_t x704 = INT8_MAX;
	static volatile int32_t t80 = -12;

    t80 = ((x701<=x702)%(x703>x704));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x709 = -1;
	uint8_t x710 = 1U;
	int64_t x712 = INT64_MIN;
	volatile int32_t t81 = -120474;

    t81 = ((x709<=x710)%(x711>x712));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x713 = -1;
	int32_t x714 = INT32_MIN;
	volatile int64_t x715 = 591303945571174LL;
	int8_t x716 = -3;

    t82 = ((x713<=x714)%(x715>x716));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int16_t x717 = INT16_MAX;
	uint32_t x720 = 382349U;
	int32_t t83 = -2499;

    t83 = ((x717<=x718)%(x719>x720));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x721 = 17U;
	uint64_t x723 = 65119099071LLU;
	static uint16_t x724 = 1U;
	volatile int32_t t84 = 1;

    t84 = ((x721<=x722)%(x723>x724));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x729 = UINT64_MAX;
	int16_t x732 = INT16_MIN;
	static volatile int32_t t85 = 3389;

    t85 = ((x729<=x730)%(x731>x732));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	static int8_t x733 = INT8_MAX;
	int8_t x736 = -1;
	volatile int32_t t86 = 8;

    t86 = ((x733<=x734)%(x735>x736));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x753 = UINT32_MAX;
	int32_t x754 = -4133075;
	static int64_t x755 = INT64_MAX;
	uint32_t x756 = UINT32_MAX;

    t87 = ((x753<=x754)%(x755>x756));

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x761 = -1LL;
	static int8_t x762 = -1;
	int64_t x763 = INT64_MAX;
	uint16_t x764 = 481U;

    t88 = ((x761<=x762)%(x763>x764));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x765 = -1LL;
	volatile int8_t x766 = INT8_MIN;
	int64_t x768 = INT64_MIN;
	static volatile int32_t t89 = 8226260;

    t89 = ((x765<=x766)%(x767>x768));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x773 = INT16_MIN;
	uint16_t x774 = 1065U;
	int8_t x775 = -7;
	static int32_t x776 = INT32_MIN;

    t90 = ((x773<=x774)%(x775>x776));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x781 = 1135U;
	int8_t x783 = 1;
	static int64_t x784 = INT64_MIN;
	int32_t t91 = 1183;

    t91 = ((x781<=x782)%(x783>x784));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint8_t x789 = UINT8_MAX;
	volatile int64_t x790 = INT64_MAX;
	int8_t x792 = INT8_MIN;
	int32_t t92 = 27226;

    t92 = ((x789<=x790)%(x791>x792));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x801 = -1;
	uint16_t x802 = UINT16_MAX;
	static int16_t x803 = INT16_MAX;
	int32_t x804 = INT32_MIN;
	int32_t t93 = 957390;

    t93 = ((x801<=x802)%(x803>x804));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int32_t x809 = -6;
	uint64_t x810 = 167101LLU;
	int32_t t94 = -598569;

    t94 = ((x809<=x810)%(x811>x812));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x829 = -775036LL;
	static int64_t x830 = -1LL;
	int8_t x831 = -1;
	int64_t x832 = INT64_MIN;
	int32_t t95 = 1697;

    t95 = ((x829<=x830)%(x831>x832));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint32_t x833 = UINT32_MAX;
	volatile int8_t x834 = -1;
	int32_t x835 = 13316166;
	volatile uint8_t x836 = UINT8_MAX;
	static volatile int32_t t96 = 1856680;

    t96 = ((x833<=x834)%(x835>x836));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x841 = -1;
	volatile uint32_t x842 = 1072567298U;
	uint32_t x843 = UINT32_MAX;
	volatile int32_t t97 = -250;

    t97 = ((x841<=x842)%(x843>x844));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x862 = -1LL;
	int16_t x863 = -2887;
	int64_t x864 = INT64_MIN;
	volatile int32_t t98 = -62220;

    t98 = ((x861<=x862)%(x863>x864));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x873 = -1;
	int64_t x874 = 3LL;
	int32_t x875 = INT32_MAX;
	volatile int64_t x876 = -100773895990353784LL;
	volatile int32_t t99 = 1643;

    t99 = ((x873<=x874)%(x875>x876));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x877 = -5;
	int32_t x878 = INT32_MAX;
	volatile int8_t x879 = INT8_MIN;
	uint64_t x880 = 2LLU;
	int32_t t100 = 241150791;

    t100 = ((x877<=x878)%(x879>x880));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x881 = 7U;
	static int16_t x882 = -1;
	static uint64_t x883 = UINT64_MAX;
	uint8_t x884 = 13U;
	int32_t t101 = -1097592;

    t101 = ((x881<=x882)%(x883>x884));

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile uint32_t x889 = 6U;
	static int8_t x890 = -1;
	uint64_t x891 = 81926009780739972LLU;
	volatile int16_t x892 = INT16_MAX;
	volatile int32_t t102 = 18;

    t102 = ((x889<=x890)%(x891>x892));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint32_t x901 = 5569U;
	uint8_t x902 = 46U;
	int64_t x903 = INT64_MAX;
	int64_t x904 = -1LL;
	static int32_t t103 = -37091;

    t103 = ((x901<=x902)%(x903>x904));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x905 = 1;
	volatile int16_t x906 = INT16_MIN;
	int64_t x908 = -1LL;
	volatile int32_t t104 = -31;

    t104 = ((x905<=x906)%(x907>x908));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x909 = INT16_MIN;
	int16_t x910 = INT16_MIN;
	uint32_t x911 = UINT32_MAX;
	int16_t x912 = 17;
	volatile int32_t t105 = 10057400;

    t105 = ((x909<=x910)%(x911>x912));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x913 = INT16_MAX;
	volatile int8_t x914 = -1;
	uint16_t x915 = UINT16_MAX;
	int64_t x916 = INT64_MIN;
	volatile int32_t t106 = 31102;

    t106 = ((x913<=x914)%(x915>x916));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int8_t x921 = -1;
	uint8_t x922 = UINT8_MAX;
	static uint16_t x923 = UINT16_MAX;
	volatile uint32_t x924 = 6U;
	volatile int32_t t107 = -334387574;

    t107 = ((x921<=x922)%(x923>x924));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x926 = 22U;
	static int8_t x927 = INT8_MAX;
	int8_t x928 = 31;
	volatile int32_t t108 = -449856748;

    t108 = ((x925<=x926)%(x927>x928));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x937 = INT16_MIN;
	static int8_t x938 = 0;
	int16_t x940 = INT16_MIN;
	int32_t t109 = -53949;

    t109 = ((x937<=x938)%(x939>x940));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x949 = INT8_MIN;
	static uint64_t x950 = UINT64_MAX;
	static uint8_t x951 = UINT8_MAX;
	static uint8_t x952 = 90U;
	int32_t t110 = 2685714;

    t110 = ((x949<=x950)%(x951>x952));

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static uint32_t x961 = UINT32_MAX;
	uint16_t x962 = 229U;
	volatile uint8_t x963 = UINT8_MAX;
	volatile int32_t x964 = -1;

    t111 = ((x961<=x962)%(x963>x964));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x973 = INT32_MAX;
	int8_t x974 = INT8_MAX;
	int8_t x975 = INT8_MAX;
	volatile int32_t t112 = -5532833;

    t112 = ((x973<=x974)%(x975>x976));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x986 = INT16_MIN;
	uint64_t x987 = 1232692873174032415LLU;
	int32_t x988 = INT32_MAX;
	volatile int32_t t113 = -408157358;

    t113 = ((x985<=x986)%(x987>x988));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x993 = INT64_MIN;
	static int16_t x994 = INT16_MAX;
	uint32_t x995 = 1549320375U;
	static int16_t x996 = INT16_MAX;
	volatile int32_t t114 = -99468;

    t114 = ((x993<=x994)%(x995>x996));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int32_t x1003 = 715101895;
	uint64_t x1004 = 109LLU;
	volatile int32_t t115 = -126205225;

    t115 = ((x1001<=x1002)%(x1003>x1004));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x1021 = 1U;
	int32_t x1023 = INT32_MAX;
	volatile int32_t t116 = 62;

    t116 = ((x1021<=x1022)%(x1023>x1024));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x1034 = INT16_MIN;
	int32_t x1035 = -1;
	volatile int8_t x1036 = INT8_MIN;
	int32_t t117 = -102;

    t117 = ((x1033<=x1034)%(x1035>x1036));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x1041 = -1;
	static uint16_t x1042 = UINT16_MAX;
	uint64_t x1043 = UINT64_MAX;
	int32_t x1044 = INT32_MIN;

    t118 = ((x1041<=x1042)%(x1043>x1044));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x1050 = UINT32_MAX;
	volatile uint8_t x1051 = 44U;
	int32_t x1052 = INT32_MIN;

    t119 = ((x1049<=x1050)%(x1051>x1052));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x1057 = -4948106;
	uint8_t x1058 = UINT8_MAX;
	static uint16_t x1059 = UINT16_MAX;
	uint64_t x1060 = 73LLU;
	int32_t t120 = 31756;

    t120 = ((x1057<=x1058)%(x1059>x1060));

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	static int32_t x1061 = INT32_MIN;
	static uint64_t x1062 = UINT64_MAX;
	volatile int32_t x1063 = INT32_MAX;
	static int32_t x1064 = -26982581;
	int32_t t121 = -137;

    t121 = ((x1061<=x1062)%(x1063>x1064));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x1066 = 173106U;
	static int8_t x1068 = INT8_MIN;

    t122 = ((x1065<=x1066)%(x1067>x1068));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int32_t x1073 = 319266;
	volatile int8_t x1074 = 0;
	volatile uint16_t x1075 = UINT16_MAX;
	volatile int32_t t123 = 20189639;

    t123 = ((x1073<=x1074)%(x1075>x1076));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x1077 = INT16_MIN;
	int32_t x1080 = -1958374;
	int32_t t124 = -1034522771;

    t124 = ((x1077<=x1078)%(x1079>x1080));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x1082 = -1;
	volatile int32_t x1083 = INT32_MAX;
	volatile uint16_t x1084 = UINT16_MAX;

    t125 = ((x1081<=x1082)%(x1083>x1084));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint64_t x1089 = UINT64_MAX;
	uint8_t x1090 = 3U;
	uint64_t x1091 = UINT64_MAX;
	int8_t x1092 = 0;
	volatile int32_t t126 = -10445;

    t126 = ((x1089<=x1090)%(x1091>x1092));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x1093 = 99689081172054225LL;
	volatile int8_t x1094 = 3;
	int32_t x1095 = -1;
	int64_t x1096 = INT64_MIN;

    t127 = ((x1093<=x1094)%(x1095>x1096));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint8_t x1101 = 18U;
	uint32_t x1102 = 30U;
	volatile int64_t x1103 = -1LL;
	int32_t x1104 = -10948;

    t128 = ((x1101<=x1102)%(x1103>x1104));

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x1105 = UINT32_MAX;
	int8_t x1106 = INT8_MAX;
	int16_t x1108 = 164;

    t129 = ((x1105<=x1106)%(x1107>x1108));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x1109 = 3746;
	int32_t x1110 = INT32_MIN;
	uint32_t x1111 = UINT32_MAX;
	uint16_t x1112 = 13673U;
	volatile int32_t t130 = 483096120;

    t130 = ((x1109<=x1110)%(x1111>x1112));

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x1117 = 3880490439711LLU;
	uint32_t x1118 = UINT32_MAX;
	int32_t x1119 = -1;
	static int8_t x1120 = INT8_MIN;

    t131 = ((x1117<=x1118)%(x1119>x1120));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x1129 = -46;
	int32_t x1132 = INT32_MIN;
	int32_t t132 = -113;

    t132 = ((x1129<=x1130)%(x1131>x1132));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x1141 = -1;
	static uint16_t x1143 = 1824U;
	int32_t t133 = 940766;

    t133 = ((x1141<=x1142)%(x1143>x1144));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x1147 = -1;
	int64_t x1148 = -13195650804913LL;
	int32_t t134 = -7047823;

    t134 = ((x1145<=x1146)%(x1147>x1148));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x1154 = 1942916451685LL;
	int32_t x1155 = -1;
	int16_t x1156 = INT16_MIN;
	volatile int32_t t135 = 24732903;

    t135 = ((x1153<=x1154)%(x1155>x1156));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x1162 = 73LL;
	int64_t x1163 = 2340458397072068475LL;
	int8_t x1164 = 21;
	int32_t t136 = -8056493;

    t136 = ((x1161<=x1162)%(x1163>x1164));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x1165 = INT8_MAX;
	int8_t x1166 = INT8_MIN;
	int64_t x1167 = INT64_MAX;
	static int16_t x1168 = INT16_MAX;
	int32_t t137 = 1806873;

    t137 = ((x1165<=x1166)%(x1167>x1168));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x1169 = -53;
	int16_t x1170 = -1;
	uint64_t x1171 = UINT64_MAX;
	uint32_t x1172 = UINT32_MAX;
	int32_t t138 = -169294843;

    t138 = ((x1169<=x1170)%(x1171>x1172));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x1174 = 533U;
	volatile uint8_t x1175 = UINT8_MAX;
	int16_t x1176 = 2;
	static volatile int32_t t139 = -12557762;

    t139 = ((x1173<=x1174)%(x1175>x1176));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x1185 = INT16_MIN;
	int8_t x1186 = INT8_MIN;
	int32_t x1187 = -1;
	int8_t x1188 = INT8_MIN;

    t140 = ((x1185<=x1186)%(x1187>x1188));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x1201 = INT32_MIN;
	static int32_t x1202 = INT32_MIN;
	int32_t x1204 = INT32_MIN;
	static volatile int32_t t141 = -53423;

    t141 = ((x1201<=x1202)%(x1203>x1204));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x1210 = -1;
	int16_t x1211 = -1;
	int32_t x1212 = -9038;
	static int32_t t142 = 82;

    t142 = ((x1209<=x1210)%(x1211>x1212));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint64_t x1233 = 2740566015020654LLU;
	volatile uint16_t x1234 = 10U;
	static int16_t x1236 = INT16_MIN;

    t143 = ((x1233<=x1234)%(x1235>x1236));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x1237 = INT16_MIN;
	int16_t x1238 = -11071;
	int64_t x1239 = -1LL;
	int16_t x1240 = INT16_MIN;
	static int32_t t144 = -41;

    t144 = ((x1237<=x1238)%(x1239>x1240));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int32_t x1258 = INT32_MIN;
	int32_t x1259 = -1;
	int16_t x1260 = -781;

    t145 = ((x1257<=x1258)%(x1259>x1260));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x1261 = INT64_MIN;
	volatile uint16_t x1262 = 28U;
	uint32_t x1263 = UINT32_MAX;
	int16_t x1264 = INT16_MIN;
	volatile int32_t t146 = 1059389228;

    t146 = ((x1261<=x1262)%(x1263>x1264));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint32_t x1265 = UINT32_MAX;
	static int64_t x1266 = -15566246910LL;
	int32_t x1267 = 430340;
	int8_t x1268 = 0;
	static volatile int32_t t147 = -122;

    t147 = ((x1265<=x1266)%(x1267>x1268));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x1277 = 2U;
	uint16_t x1278 = 493U;
	volatile uint64_t x1279 = UINT64_MAX;
	int32_t x1280 = 11;
	int32_t t148 = 100078479;

    t148 = ((x1277<=x1278)%(x1279>x1280));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x1281 = INT16_MIN;
	volatile uint8_t x1283 = 20U;
	static volatile int32_t t149 = 56872361;

    t149 = ((x1281<=x1282)%(x1283>x1284));

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint8_t x1285 = 0U;
	static int8_t x1286 = INT8_MIN;
	int8_t x1287 = 2;
	int16_t x1288 = -44;
	volatile int32_t t150 = 815;

    t150 = ((x1285<=x1286)%(x1287>x1288));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint64_t x1289 = 10911LLU;
	int64_t x1291 = INT64_MAX;
	volatile int8_t x1292 = INT8_MAX;
	static int32_t t151 = -1058058086;

    t151 = ((x1289<=x1290)%(x1291>x1292));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x1301 = 85U;
	static int8_t x1302 = 47;
	uint16_t x1303 = 3151U;
	static uint8_t x1304 = 4U;
	volatile int32_t t152 = -4401;

    t152 = ((x1301<=x1302)%(x1303>x1304));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint16_t x1305 = UINT16_MAX;
	static uint32_t x1306 = 5875U;
	uint8_t x1307 = 59U;
	volatile int32_t t153 = -78;

    t153 = ((x1305<=x1306)%(x1307>x1308));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int8_t x1325 = INT8_MIN;
	static int16_t x1326 = INT16_MAX;
	int64_t x1327 = 12432LL;
	int16_t x1328 = -2887;
	static volatile int32_t t154 = 5739;

    t154 = ((x1325<=x1326)%(x1327>x1328));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x1330 = 319U;
	uint8_t x1331 = UINT8_MAX;
	uint16_t x1332 = 83U;
	volatile int32_t t155 = -720383878;

    t155 = ((x1329<=x1330)%(x1331>x1332));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x1333 = INT8_MIN;
	int64_t x1335 = 1727314206LL;
	int32_t x1336 = -9009827;

    t156 = ((x1333<=x1334)%(x1335>x1336));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x1349 = 6;
	int8_t x1350 = INT8_MIN;
	static int64_t x1351 = 25794254654LL;
	uint8_t x1352 = 1U;
	volatile int32_t t157 = -471873;

    t157 = ((x1349<=x1350)%(x1351>x1352));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x1353 = -708;
	uint8_t x1354 = UINT8_MAX;
	uint16_t x1355 = 818U;
	static uint16_t x1356 = 12U;
	volatile int32_t t158 = 487;

    t158 = ((x1353<=x1354)%(x1355>x1356));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x1358 = -1;
	static int32_t x1359 = INT32_MIN;
	int64_t x1360 = -247445716480LL;
	int32_t t159 = -45569079;

    t159 = ((x1357<=x1358)%(x1359>x1360));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x1362 = 3387U;
	int8_t x1363 = INT8_MAX;
	int32_t x1364 = 24;
	static volatile int32_t t160 = -863867;

    t160 = ((x1361<=x1362)%(x1363>x1364));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x1385 = INT8_MAX;
	uint32_t x1386 = 129594U;
	volatile int32_t x1387 = INT32_MAX;
	int32_t x1388 = -1;
	static volatile int32_t t161 = -150753269;

    t161 = ((x1385<=x1386)%(x1387>x1388));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x1389 = -14LL;
	uint32_t x1391 = 7468U;
	uint8_t x1392 = 0U;

    t162 = ((x1389<=x1390)%(x1391>x1392));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x1393 = UINT32_MAX;
	int8_t x1394 = -1;
	int8_t x1395 = -6;
	uint32_t x1396 = 150859462U;
	static volatile int32_t t163 = 2;

    t163 = ((x1393<=x1394)%(x1395>x1396));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	static int64_t x1409 = -47020508LL;
	static uint64_t x1410 = 95154729131729556LLU;
	uint8_t x1411 = 0U;
	int8_t x1412 = -1;
	static volatile int32_t t164 = 0;

    t164 = ((x1409<=x1410)%(x1411>x1412));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x1413 = INT64_MAX;
	int16_t x1415 = INT16_MIN;
	int64_t x1416 = INT64_MIN;

    t165 = ((x1413<=x1414)%(x1415>x1416));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	uint64_t x1418 = 26144749658011LLU;
	uint32_t x1420 = 516061U;
	volatile int32_t t166 = -11967463;

    t166 = ((x1417<=x1418)%(x1419>x1420));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x1421 = 1159U;
	int32_t x1422 = INT32_MIN;
	int16_t x1423 = INT16_MAX;
	volatile int16_t x1424 = -8;

    t167 = ((x1421<=x1422)%(x1423>x1424));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x1429 = 13292722LLU;
	volatile uint64_t x1430 = UINT64_MAX;
	uint64_t x1431 = UINT64_MAX;
	volatile int64_t x1432 = INT64_MIN;
	int32_t t168 = -221;

    t168 = ((x1429<=x1430)%(x1431>x1432));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x1449 = INT16_MIN;
	static int8_t x1450 = INT8_MAX;
	int32_t t169 = 29912436;

    t169 = ((x1449<=x1450)%(x1451>x1452));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x1453 = INT32_MIN;
	static int64_t x1454 = INT64_MIN;
	static int8_t x1455 = INT8_MIN;

    t170 = ((x1453<=x1454)%(x1455>x1456));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x1457 = 62U;
	int64_t x1458 = INT64_MIN;
	volatile uint32_t x1459 = 6U;
	volatile int64_t x1460 = INT64_MIN;
	static volatile int32_t t171 = -90794;

    t171 = ((x1457<=x1458)%(x1459>x1460));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x1461 = UINT8_MAX;
	int64_t x1462 = -1018LL;
	uint8_t x1464 = 2U;

    t172 = ((x1461<=x1462)%(x1463>x1464));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int32_t x1465 = INT32_MAX;
	int64_t x1466 = -54242969250LL;
	int64_t x1467 = INT64_MAX;
	uint64_t x1468 = 57755772LLU;
	volatile int32_t t173 = 749346972;

    t173 = ((x1465<=x1466)%(x1467>x1468));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x1474 = INT8_MIN;
	int64_t x1475 = INT64_MAX;
	int16_t x1476 = INT16_MAX;
	volatile int32_t t174 = 12;

    t174 = ((x1473<=x1474)%(x1475>x1476));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x1481 = UINT16_MAX;
	uint32_t x1483 = 256766347U;
	uint8_t x1484 = 83U;
	int32_t t175 = 1;

    t175 = ((x1481<=x1482)%(x1483>x1484));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile uint16_t x1489 = UINT16_MAX;
	static uint8_t x1490 = 0U;
	int16_t x1491 = 459;
	static int8_t x1492 = INT8_MAX;

    t176 = ((x1489<=x1490)%(x1491>x1492));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1494 = INT32_MAX;
	int32_t x1496 = INT32_MIN;
	int32_t t177 = 7594950;

    t177 = ((x1493<=x1494)%(x1495>x1496));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x1509 = INT8_MIN;
	volatile int8_t x1510 = INT8_MIN;
	int64_t x1511 = INT64_MAX;
	static volatile int64_t x1512 = -4289439803853LL;
	volatile int32_t t178 = 465938182;

    t178 = ((x1509<=x1510)%(x1511>x1512));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1517 = INT8_MIN;
	int16_t x1518 = INT16_MAX;
	volatile uint64_t x1520 = 11044544752395261LLU;
	int32_t t179 = 110;

    t179 = ((x1517<=x1518)%(x1519>x1520));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x1525 = 0;
	volatile int64_t x1526 = 14256921529LL;
	uint32_t x1527 = UINT32_MAX;
	volatile int32_t t180 = 121720;

    t180 = ((x1525<=x1526)%(x1527>x1528));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1566 = INT32_MIN;
	static uint64_t x1567 = 31003545LLU;
	int8_t x1568 = 39;
	static volatile int32_t t181 = -223806396;

    t181 = ((x1565<=x1566)%(x1567>x1568));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int8_t x1585 = -13;
	volatile int32_t x1586 = 16;
	int32_t t182 = -48602;

    t182 = ((x1585<=x1586)%(x1587>x1588));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1589 = -10628;
	uint16_t x1590 = UINT16_MAX;
	uint32_t x1591 = 5041332U;
	volatile int64_t x1592 = -107LL;

    t183 = ((x1589<=x1590)%(x1591>x1592));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static volatile uint8_t x1593 = 2U;
	uint8_t x1594 = 36U;
	int64_t x1595 = INT64_MAX;
	int32_t x1596 = 134;
	volatile int32_t t184 = 7351;

    t184 = ((x1593<=x1594)%(x1595>x1596));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x1601 = -1;
	uint16_t x1602 = 1867U;
	int8_t x1603 = -4;
	volatile int16_t x1604 = -405;

    t185 = ((x1601<=x1602)%(x1603>x1604));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1605 = INT16_MIN;
	volatile uint64_t x1606 = 3522551340220546355LLU;
	int64_t x1608 = -1LL;

    t186 = ((x1605<=x1606)%(x1607>x1608));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	static int16_t x1609 = INT16_MIN;
	volatile uint32_t x1610 = 1523930U;
	uint8_t x1611 = 114U;
	volatile int32_t x1612 = 1;

    t187 = ((x1609<=x1610)%(x1611>x1612));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x1617 = INT16_MAX;
	static int32_t x1618 = -1;
	int32_t x1619 = -1;
	volatile int8_t x1620 = -9;

    t188 = ((x1617<=x1618)%(x1619>x1620));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint16_t x1625 = 0U;
	int8_t x1626 = 0;
	int16_t x1628 = 2314;
	static int32_t t189 = 611;

    t189 = ((x1625<=x1626)%(x1627>x1628));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x1629 = 1968256;
	int64_t x1630 = -57331618687884910LL;
	int8_t x1632 = 57;
	volatile int32_t t190 = 23660;

    t190 = ((x1629<=x1630)%(x1631>x1632));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x1637 = -60;
	uint8_t x1638 = 2U;
	int32_t x1639 = 62651751;
	int16_t x1640 = -1;
	static volatile int32_t t191 = 444;

    t191 = ((x1637<=x1638)%(x1639>x1640));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	static int64_t x1641 = -27409862158988773LL;
	uint8_t x1642 = 13U;
	uint16_t x1643 = 5U;
	int64_t x1644 = INT64_MIN;
	static volatile int32_t t192 = 29;

    t192 = ((x1641<=x1642)%(x1643>x1644));

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x1657 = UINT32_MAX;
	uint32_t x1658 = UINT32_MAX;
	volatile int16_t x1660 = INT16_MIN;

    t193 = ((x1657<=x1658)%(x1659>x1660));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x1661 = 1;
	int16_t x1663 = -1;
	int32_t x1664 = INT32_MIN;
	static volatile int32_t t194 = -4957;

    t194 = ((x1661<=x1662)%(x1663>x1664));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1669 = INT8_MIN;
	volatile int8_t x1670 = INT8_MAX;
	int16_t x1671 = -1;
	volatile int32_t t195 = -7453;

    t195 = ((x1669<=x1670)%(x1671>x1672));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int32_t x1685 = INT32_MIN;
	int32_t x1686 = INT32_MAX;
	uint32_t x1687 = UINT32_MAX;
	int32_t x1688 = 1343161;

    t196 = ((x1685<=x1686)%(x1687>x1688));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	static int16_t x1691 = 104;

    t197 = ((x1689<=x1690)%(x1691>x1692));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x1698 = -9304LL;
	static int64_t x1699 = 10566330557080354LL;
	int32_t x1700 = INT32_MIN;
	volatile int32_t t198 = 3672489;

    t198 = ((x1697<=x1698)%(x1699>x1700));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1701 = INT16_MAX;
	int64_t x1702 = 4151277139865570799LL;
	volatile uint16_t x1703 = 28U;
	uint16_t x1704 = 0U;
	static int32_t t199 = -4;

    t199 = ((x1701<=x1702)%(x1703>x1704));

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

