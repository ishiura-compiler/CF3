
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

int8_t x2 = INT8_MIN;
volatile int32_t x3 = INT32_MIN;
uint64_t x15 = 171LLU;
uint16_t x35 = 0U;
uint8_t x36 = 120U;
int8_t x37 = INT8_MAX;
int16_t x40 = -1;
int8_t x52 = INT8_MIN;
static uint32_t x55 = 15600U;
static uint16_t x65 = UINT16_MAX;
int32_t x69 = INT32_MAX;
uint32_t x89 = UINT32_MAX;
int32_t x91 = 67280096;
static int8_t x95 = -1;
uint32_t x103 = 129640708U;
uint32_t x104 = 185960U;
uint16_t x110 = 470U;
int32_t t14 = -311;
int16_t x130 = 119;
int32_t t19 = 268598;
volatile uint64_t x154 = 8528526LLU;
uint8_t x156 = 2U;
uint32_t t22 = 2131308U;
int8_t x180 = INT8_MIN;
int32_t t23 = 697521567;
static volatile int32_t t24 = -243;
static uint16_t x185 = 21U;
int8_t x191 = INT8_MIN;
volatile int32_t t26 = -13754;
int16_t x200 = 2;
volatile uint32_t x205 = 44167835U;
static volatile uint32_t t28 = 1241777207U;
volatile uint64_t x221 = 11011LLU;
static volatile int16_t x229 = 165;
int64_t x232 = 109LL;
uint32_t t32 = 1788671437U;
uint8_t x241 = 16U;
int16_t x242 = INT16_MIN;
int32_t x260 = -99969;
static volatile int32_t t40 = 56914;
volatile int16_t x337 = 8134;
uint8_t x339 = 2U;
uint64_t x349 = 489867928109613509LLU;
int32_t t44 = 1827;
volatile uint64_t t45 = 590079LLU;
volatile int16_t x370 = INT16_MIN;
int8_t x387 = INT8_MIN;
uint8_t x405 = UINT8_MAX;
static volatile uint8_t x417 = 1U;
int32_t x418 = 1117672;
static uint16_t x420 = UINT16_MAX;
int32_t t51 = 306787989;
uint16_t x422 = 1792U;
uint32_t x424 = 19111U;
uint32_t t52 = 9U;
int8_t x428 = -1;
int8_t x433 = INT8_MAX;
static int32_t t54 = 89252875;
volatile int32_t x460 = -5;
int64_t x464 = INT64_MIN;
volatile uint16_t x475 = UINT16_MAX;
static uint32_t x476 = 2020933965U;
int16_t x486 = -1;
static uint64_t x497 = UINT64_MAX;
int16_t x537 = INT16_MAX;
int32_t x546 = INT32_MIN;
volatile int32_t t66 = -2;
uint16_t x585 = UINT16_MAX;
static int16_t x588 = 128;
int32_t t69 = -1;
int32_t t70 = 83;
static volatile int16_t x604 = INT16_MIN;
int8_t x616 = -3;
volatile int32_t x619 = -1;
int32_t t75 = -1;
int32_t t76 = -4870803;
uint32_t x642 = UINT32_MAX;
static int64_t x643 = INT64_MIN;
uint32_t x644 = UINT32_MAX;
static uint64_t t78 = 10LLU;
int8_t x665 = 1;
static int64_t x682 = -212827657064585863LL;
static uint32_t t83 = 37686583U;
static int16_t x687 = -25;
static uint64_t x688 = 436LLU;
volatile uint64_t t84 = 904754LLU;
int64_t x702 = INT64_MIN;
volatile uint8_t x746 = 5U;
uint16_t x751 = UINT16_MAX;
uint64_t x761 = 128525251724083LLU;
volatile int16_t x764 = INT16_MAX;
uint64_t x773 = UINT64_MAX;
int16_t x776 = INT16_MAX;
volatile int64_t x785 = 66179397226LL;
int16_t x786 = 0;
static int64_t t95 = 190369LL;
volatile uint64_t t98 = 438618213423806LLU;
int32_t x809 = 0;
uint8_t x817 = 7U;
uint32_t x842 = 40592212U;
int32_t x850 = -1;
volatile int16_t x851 = INT16_MIN;
static int8_t x865 = INT8_MAX;
int64_t x868 = 8299009342162092LL;
uint8_t x892 = 1U;
volatile int16_t x900 = 30;
uint16_t x902 = 8U;
int8_t x907 = -1;
int32_t x908 = INT32_MIN;
int16_t x913 = INT16_MAX;
int8_t x921 = INT8_MAX;
int16_t x957 = 467;
int8_t x959 = -1;
int8_t x970 = INT8_MIN;
uint32_t x985 = UINT32_MAX;
static uint64_t t123 = 536131804LLU;
uint16_t x1057 = 27U;
uint32_t x1075 = UINT32_MAX;
static uint8_t x1078 = UINT8_MAX;
volatile int64_t x1088 = -1LL;
static int16_t x1089 = INT16_MAX;
volatile int32_t t133 = -526649;
int32_t x1093 = INT32_MAX;
uint16_t x1095 = 16168U;
int32_t t134 = -463477;
volatile uint8_t x1097 = 1U;
uint8_t x1105 = 12U;
static int16_t x1106 = -1;
int64_t x1110 = -1LL;
int8_t x1122 = INT8_MAX;
static volatile uint64_t t139 = 50LLU;
int32_t x1132 = -1;
int8_t x1136 = -1;
uint64_t t142 = 8506082209199190886LLU;
volatile int32_t t143 = 68;
uint32_t x1141 = 1995781U;
uint32_t x1143 = 456515U;
int16_t x1150 = -716;
static uint32_t x1151 = 11461513U;
int32_t x1163 = INT32_MIN;
static int32_t t147 = -1309;
volatile int64_t x1176 = INT64_MAX;
int64_t x1178 = INT64_MIN;
int32_t x1180 = -1;
static int32_t x1181 = INT32_MAX;
uint64_t t150 = 2282106141LLU;
int8_t x1211 = INT8_MAX;
volatile uint64_t x1212 = 2424684931LLU;
static volatile uint64_t t153 = 2LLU;
int64_t x1213 = 156429288326148980LL;
int64_t x1225 = 56LL;
static int32_t x1248 = INT32_MAX;
static int64_t x1257 = INT64_MAX;
int32_t x1262 = INT32_MIN;
static volatile uint64_t t161 = 214095853087LLU;
volatile int64_t x1297 = 1936180118LL;
uint32_t x1321 = UINT32_MAX;
int8_t x1327 = 17;
uint16_t x1329 = 122U;
int16_t x1332 = INT16_MIN;
volatile int32_t t168 = 2357186;
uint16_t x1357 = UINT16_MAX;
uint16_t x1362 = UINT16_MAX;
volatile int8_t x1363 = INT8_MAX;
uint8_t x1366 = UINT8_MAX;
static int16_t x1372 = 29;
volatile int8_t x1391 = INT8_MAX;
int16_t x1402 = INT16_MIN;
uint32_t x1403 = 634U;
uint8_t x1404 = 1U;
static int16_t x1417 = 119;
int32_t t182 = INT32_MAX;
int64_t x1431 = -21477087128126LL;
int64_t x1435 = INT64_MIN;
int32_t x1452 = INT32_MIN;
static uint32_t x1461 = UINT32_MAX;
static uint16_t x1463 = UINT16_MAX;
static uint8_t x1482 = UINT8_MAX;
volatile int16_t x1484 = -17;
volatile int32_t t188 = 1239;
volatile uint32_t x1486 = 10426187U;
int32_t x1489 = INT32_MAX;
int8_t x1519 = 7;
static int32_t x1525 = 389193;
volatile int8_t x1526 = -1;
uint8_t x1527 = UINT8_MAX;
uint32_t x1537 = UINT32_MAX;
int8_t x1538 = INT8_MIN;
uint8_t x1539 = UINT8_MAX;
int16_t x1540 = 75;
volatile int64_t x1545 = INT64_MAX;
int16_t x1548 = INT16_MAX;


void f0(void) {
    	uint8_t x1 = UINT8_MAX;
	uint32_t x4 = 3U;
	volatile uint32_t t0 = 1U;

    t0 = ((x1>>(x2==x3))%x4);

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	static int16_t x13 = INT16_MAX;
	int64_t x14 = INT64_MIN;
	uint16_t x16 = 234U;
	static int32_t t1 = -11766753;

    t1 = ((x13>>(x14==x15))%x16);

    if (t1 != 7) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x33 = 12U;
	int32_t x34 = INT32_MIN;
	int32_t t2 = 46861300;

    t2 = ((x33>>(x34==x35))%x36);

    if (t2 != 12) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x38 = 4;
	int16_t x39 = INT16_MIN;
	volatile int32_t t3 = -267;

    t3 = ((x37>>(x38==x39))%x40);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint32_t x49 = UINT32_MAX;
	static volatile int16_t x50 = -1;
	int8_t x51 = INT8_MAX;
	static volatile uint32_t t4 = 99U;

    t4 = ((x49>>(x50==x51))%x52);

    if (t4 != 127U) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x53 = INT16_MAX;
	volatile uint64_t x54 = 8997971189478036265LLU;
	int16_t x56 = INT16_MAX;
	int32_t t5 = -397650401;

    t5 = ((x53>>(x54==x55))%x56);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x57 = 0;
	volatile int16_t x58 = 0;
	uint8_t x59 = UINT8_MAX;
	uint8_t x60 = UINT8_MAX;
	int32_t t6 = 259715738;

    t6 = ((x57>>(x58==x59))%x60);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x66 = 709655;
	volatile uint32_t x67 = 478979U;
	static int64_t x68 = 657382LL;
	int64_t t7 = 51723975125596LL;

    t7 = ((x65>>(x66==x67))%x68);

    if (t7 != 65535LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x70 = UINT8_MAX;
	static uint64_t x71 = UINT64_MAX;
	int16_t x72 = -1;
	volatile int32_t t8 = -1389;

    t8 = ((x69>>(x70==x71))%x72);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x73 = INT8_MAX;
	int32_t x74 = -846;
	static int16_t x75 = INT16_MAX;
	uint64_t x76 = 5788264996894461156LLU;
	volatile uint64_t t9 = 4570917152696259809LLU;

    t9 = ((x73>>(x74==x75))%x76);

    if (t9 != 127LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x77 = 1;
	static volatile uint64_t x78 = 1201437212174673LLU;
	uint8_t x79 = UINT8_MAX;
	int64_t x80 = INT64_MIN;
	int64_t t10 = 18LL;

    t10 = ((x77>>(x78==x79))%x80);

    if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x90 = INT32_MIN;
	int8_t x92 = INT8_MIN;
	volatile uint32_t t11 = 3108421U;

    t11 = ((x89>>(x90==x91))%x92);

    if (t11 != 127U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x93 = 32U;
	uint32_t x94 = UINT32_MAX;
	int64_t x96 = -297440421LL;
	int64_t t12 = 2393836152LL;

    t12 = ((x93>>(x94==x95))%x96);

    if (t12 != 16LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x101 = INT16_MAX;
	volatile int64_t x102 = -20LL;
	volatile uint32_t t13 = 46305033U;

    t13 = ((x101>>(x102==x103))%x104);

    if (t13 != 32767U) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x109 = 22;
	static int64_t x111 = -1306038927995616886LL;
	static int16_t x112 = -6468;

    t14 = ((x109>>(x110==x111))%x112);

    if (t14 != 22) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x117 = UINT32_MAX;
	volatile uint8_t x118 = 90U;
	int32_t x119 = -1;
	static int64_t x120 = 89622367242898991LL;
	int64_t t15 = 652805643LL;

    t15 = ((x117>>(x118==x119))%x120);

    if (t15 != 4294967295LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint16_t x121 = 13992U;
	static volatile int8_t x122 = INT8_MAX;
	int16_t x123 = INT16_MAX;
	volatile uint16_t x124 = UINT16_MAX;
	static int32_t t16 = 166954;

    t16 = ((x121>>(x122==x123))%x124);

    if (t16 != 13992) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x125 = UINT16_MAX;
	int16_t x126 = INT16_MAX;
	int64_t x127 = 11365197874LL;
	static int32_t x128 = INT32_MIN;
	volatile int32_t t17 = -3640;

    t17 = ((x125>>(x126==x127))%x128);

    if (t17 != 65535) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x129 = 0;
	int64_t x131 = 2390948839279LL;
	uint8_t x132 = 14U;
	int32_t t18 = 253045068;

    t18 = ((x129>>(x130==x131))%x132);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x137 = 6U;
	static int16_t x138 = INT16_MIN;
	int32_t x139 = -1;
	int8_t x140 = -1;

    t19 = ((x137>>(x138==x139))%x140);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x145 = UINT32_MAX;
	static volatile int8_t x146 = INT8_MIN;
	uint32_t x147 = 424896234U;
	int8_t x148 = INT8_MIN;
	uint32_t t20 = 24888U;

    t20 = ((x145>>(x146==x147))%x148);

    if (t20 != 127U) { NG(); } else { ; }
	
}

void f21(void) {
    	static volatile uint64_t x153 = UINT64_MAX;
	int32_t x155 = -13790;
	uint64_t t21 = 9789221127LLU;

    t21 = ((x153>>(x154==x155))%x156);

    if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x161 = 560;
	int8_t x162 = 24;
	int32_t x163 = INT32_MAX;
	uint32_t x164 = UINT32_MAX;

    t22 = ((x161>>(x162==x163))%x164);

    if (t22 != 560U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x177 = UINT8_MAX;
	int8_t x178 = -1;
	int16_t x179 = INT16_MIN;

    t23 = ((x177>>(x178==x179))%x180);

    if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x181 = 479098;
	int16_t x182 = INT16_MAX;
	volatile uint64_t x183 = UINT64_MAX;
	int32_t x184 = -16;

    t24 = ((x181>>(x182==x183))%x184);

    if (t24 != 10) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x186 = INT32_MIN;
	int16_t x187 = -1;
	int16_t x188 = INT16_MAX;
	int32_t t25 = -4853;

    t25 = ((x185>>(x186==x187))%x188);

    if (t25 != 21) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x189 = 0;
	static uint16_t x190 = UINT16_MAX;
	int8_t x192 = 30;

    t26 = ((x189>>(x190==x191))%x192);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x197 = INT8_MAX;
	int32_t x198 = INT32_MAX;
	int32_t x199 = INT32_MIN;
	static volatile int32_t t27 = 5;

    t27 = ((x197>>(x198==x199))%x200);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x206 = INT8_MIN;
	uint16_t x207 = 148U;
	static int16_t x208 = INT16_MIN;

    t28 = ((x205>>(x206==x207))%x208);

    if (t28 != 44167835U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint32_t x217 = 31U;
	int64_t x218 = -1LL;
	uint32_t x219 = UINT32_MAX;
	int32_t x220 = INT32_MIN;
	volatile uint32_t t29 = 74U;

    t29 = ((x217>>(x218==x219))%x220);

    if (t29 != 31U) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x222 = 26158445365LL;
	uint8_t x223 = 63U;
	int64_t x224 = INT64_MIN;
	uint64_t t30 = 30250825601058768LLU;

    t30 = ((x221>>(x222==x223))%x224);

    if (t30 != 11011LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x230 = UINT32_MAX;
	int64_t x231 = INT64_MIN;
	volatile int64_t t31 = 3743453801LL;

    t31 = ((x229>>(x230==x231))%x232);

    if (t31 != 56LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile uint32_t x233 = 7226034U;
	static int16_t x234 = -1;
	static volatile int16_t x235 = -1;
	uint8_t x236 = 14U;

    t32 = ((x233>>(x234==x235))%x236);

    if (t32 != 9U) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x237 = 687735;
	volatile int64_t x238 = -2218937728255LL;
	volatile uint32_t x239 = UINT32_MAX;
	int8_t x240 = -1;
	int32_t t33 = -66949507;

    t33 = ((x237>>(x238==x239))%x240);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x243 = 12;
	volatile int16_t x244 = INT16_MIN;
	int32_t t34 = -660;

    t34 = ((x241>>(x242==x243))%x244);

    if (t34 != 16) { NG(); } else { ; }
	
}

void f35(void) {
    	static uint64_t x245 = 5104LLU;
	volatile int64_t x246 = INT64_MIN;
	int32_t x247 = INT32_MIN;
	volatile int64_t x248 = -31LL;
	static uint64_t t35 = 3259442439380161LLU;

    t35 = ((x245>>(x246==x247))%x248);

    if (t35 != 5104LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint16_t x249 = UINT16_MAX;
	uint64_t x250 = UINT64_MAX;
	int8_t x251 = 32;
	int16_t x252 = INT16_MAX;
	int32_t t36 = 29094342;

    t36 = ((x249>>(x250==x251))%x252);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x257 = 3164U;
	volatile uint8_t x258 = UINT8_MAX;
	int32_t x259 = INT32_MAX;
	int32_t t37 = -218018936;

    t37 = ((x257>>(x258==x259))%x260);

    if (t37 != 3164) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x269 = INT32_MAX;
	int8_t x270 = INT8_MIN;
	volatile uint32_t x271 = 31970U;
	volatile int32_t x272 = INT32_MAX;
	static volatile int32_t t38 = -3018055;

    t38 = ((x269>>(x270==x271))%x272);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x305 = UINT16_MAX;
	int32_t x306 = INT32_MIN;
	int64_t x307 = INT64_MAX;
	uint8_t x308 = 31U;
	volatile int32_t t39 = -948707;

    t39 = ((x305>>(x306==x307))%x308);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x321 = 5U;
	static int32_t x322 = INT32_MAX;
	int64_t x323 = INT64_MIN;
	int32_t x324 = -719775262;

    t40 = ((x321>>(x322==x323))%x324);

    if (t40 != 5) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x325 = INT64_MAX;
	static int64_t x326 = INT64_MAX;
	static uint64_t x327 = 7545826550457820LLU;
	static int16_t x328 = INT16_MIN;
	int64_t t41 = 123316040490LL;

    t41 = ((x325>>(x326==x327))%x328);

    if (t41 != 32767LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x338 = INT8_MIN;
	int8_t x340 = 4;
	static int32_t t42 = 64120;

    t42 = ((x337>>(x338==x339))%x340);

    if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x350 = 105LLU;
	int16_t x351 = INT16_MIN;
	static uint64_t x352 = 476605078111840156LLU;
	volatile uint64_t t43 = 24LLU;

    t43 = ((x349>>(x350==x351))%x352);

    if (t43 != 13262849997773353LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint16_t x361 = UINT16_MAX;
	int32_t x362 = -126909119;
	volatile int16_t x363 = -923;
	static int8_t x364 = INT8_MIN;

    t44 = ((x361>>(x362==x363))%x364);

    if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x365 = UINT32_MAX;
	int32_t x366 = -48823085;
	uint8_t x367 = UINT8_MAX;
	uint64_t x368 = 1455863430LLU;

    t45 = ((x365>>(x366==x367))%x368);

    if (t45 != 1383240435LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint16_t x369 = 49U;
	int32_t x371 = -11404;
	int32_t x372 = INT32_MIN;
	volatile int32_t t46 = -1;

    t46 = ((x369>>(x370==x371))%x372);

    if (t46 != 49) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x381 = 1;
	int32_t x382 = 31;
	uint16_t x383 = UINT16_MAX;
	static volatile int64_t x384 = INT64_MIN;
	static int64_t t47 = 13LL;

    t47 = ((x381>>(x382==x383))%x384);

    if (t47 != 1LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x385 = INT16_MAX;
	uint8_t x386 = 0U;
	int64_t x388 = -2535161LL;
	volatile int64_t t48 = -37509885LL;

    t48 = ((x385>>(x386==x387))%x388);

    if (t48 != 32767LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint16_t x406 = UINT16_MAX;
	int16_t x407 = INT16_MIN;
	uint8_t x408 = 3U;
	static volatile int32_t t49 = -2902;

    t49 = ((x405>>(x406==x407))%x408);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int64_t x409 = 22335451737LL;
	uint8_t x410 = 0U;
	int8_t x411 = 0;
	int32_t x412 = INT32_MIN;
	int64_t t50 = -15815307789272LL;

    t50 = ((x409>>(x410==x411))%x412);

    if (t50 != 430307628LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x419 = -12;

    t51 = ((x417>>(x418==x419))%x420);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x421 = 23158U;
	static volatile int16_t x423 = INT16_MIN;

    t52 = ((x421>>(x422==x423))%x424);

    if (t52 != 4047U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x425 = UINT8_MAX;
	int8_t x426 = INT8_MIN;
	int64_t x427 = INT64_MIN;
	int32_t t53 = -101168362;

    t53 = ((x425>>(x426==x427))%x428);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	static int32_t x434 = INT32_MIN;
	static uint8_t x435 = 127U;
	static uint16_t x436 = 44U;

    t54 = ((x433>>(x434==x435))%x436);

    if (t54 != 39) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x453 = 1277U;
	int8_t x454 = -6;
	int32_t x455 = INT32_MAX;
	uint8_t x456 = 25U;
	volatile uint32_t t55 = 686U;

    t55 = ((x453>>(x454==x455))%x456);

    if (t55 != 2U) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile uint32_t x457 = 94388U;
	int8_t x458 = -2;
	int64_t x459 = INT64_MIN;
	uint32_t t56 = 2623U;

    t56 = ((x457>>(x458==x459))%x460);

    if (t56 != 94388U) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint8_t x461 = 91U;
	int64_t x462 = -1LL;
	int64_t x463 = 27404113647589LL;
	int64_t t57 = 16099382132932683LL;

    t57 = ((x461>>(x462==x463))%x464);

    if (t57 != 91LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x465 = 11U;
	uint64_t x466 = 35019453977LLU;
	int8_t x467 = INT8_MIN;
	volatile int8_t x468 = INT8_MAX;
	int32_t t58 = -1365;

    t58 = ((x465>>(x466==x467))%x468);

    if (t58 != 11) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x473 = UINT32_MAX;
	int8_t x474 = INT8_MIN;
	volatile uint32_t t59 = 828U;

    t59 = ((x473>>(x474==x475))%x476);

    if (t59 != 253099365U) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x485 = 1;
	int32_t x487 = INT32_MIN;
	int64_t x488 = INT64_MIN;
	volatile int64_t t60 = -25LL;

    t60 = ((x485>>(x486==x487))%x488);

    if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x498 = INT16_MIN;
	int8_t x499 = INT8_MIN;
	static int16_t x500 = INT16_MIN;
	volatile uint64_t t61 = 429LLU;

    t61 = ((x497>>(x498==x499))%x500);

    if (t61 != 32767LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x501 = INT32_MAX;
	int8_t x502 = 2;
	int8_t x503 = INT8_MIN;
	static uint16_t x504 = 3056U;
	volatile int32_t t62 = -1046;

    t62 = ((x501>>(x502==x503))%x504);

    if (t62 != 1887) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x513 = UINT8_MAX;
	static uint16_t x514 = UINT16_MAX;
	int8_t x515 = INT8_MIN;
	uint16_t x516 = 35U;
	static int32_t t63 = 107800;

    t63 = ((x513>>(x514==x515))%x516);

    if (t63 != 10) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x538 = -1LL;
	uint8_t x539 = 27U;
	int64_t x540 = -1LL;
	volatile int64_t t64 = 1177744309576LL;

    t64 = ((x537>>(x538==x539))%x540);

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x545 = 20309970U;
	static volatile uint16_t x547 = 24U;
	uint64_t x548 = 25167263LLU;
	uint64_t t65 = 426LLU;

    t65 = ((x545>>(x546==x547))%x548);

    if (t65 != 20309970LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x553 = INT16_MAX;
	static int32_t x554 = INT32_MIN;
	int8_t x555 = INT8_MIN;
	static int16_t x556 = -29;

    t66 = ((x553>>(x554==x555))%x556);

    if (t66 != 26) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x569 = INT8_MAX;
	uint64_t x570 = UINT64_MAX;
	volatile int16_t x571 = INT16_MIN;
	uint32_t x572 = 15U;
	uint32_t t67 = 28U;

    t67 = ((x569>>(x570==x571))%x572);

    if (t67 != 7U) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x581 = 247U;
	int8_t x582 = INT8_MIN;
	int64_t x583 = -203LL;
	volatile uint32_t x584 = 1U;
	volatile uint32_t t68 = 49U;

    t68 = ((x581>>(x582==x583))%x584);

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x586 = INT32_MIN;
	uint32_t x587 = 7252U;

    t69 = ((x585>>(x586==x587))%x588);

    if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
    	static int16_t x593 = INT16_MAX;
	volatile int32_t x594 = 6;
	int32_t x595 = INT32_MIN;
	int8_t x596 = -12;

    t70 = ((x593>>(x594==x595))%x596);

    if (t70 != 7) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x597 = 9LLU;
	uint64_t x598 = 7110529902989922LLU;
	uint16_t x599 = UINT16_MAX;
	volatile int32_t x600 = -1;
	uint64_t t71 = 29810794813155LLU;

    t71 = ((x597>>(x598==x599))%x600);

    if (t71 != 9LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x601 = 11U;
	uint16_t x602 = 13899U;
	static volatile uint32_t x603 = 825665U;
	volatile int32_t t72 = 13;

    t72 = ((x601>>(x602==x603))%x604);

    if (t72 != 11) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint32_t x613 = 283U;
	int16_t x614 = INT16_MAX;
	uint8_t x615 = 0U;
	volatile uint32_t t73 = 24U;

    t73 = ((x613>>(x614==x615))%x616);

    if (t73 != 283U) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint32_t x617 = UINT32_MAX;
	volatile int8_t x618 = 1;
	int32_t x620 = -3;
	volatile uint32_t t74 = 24403U;

    t74 = ((x617>>(x618==x619))%x620);

    if (t74 != 2U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x621 = 8U;
	int16_t x622 = -1;
	int8_t x623 = INT8_MAX;
	int16_t x624 = -6;

    t75 = ((x621>>(x622==x623))%x624);

    if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x629 = 52U;
	uint8_t x630 = 0U;
	int8_t x631 = INT8_MIN;
	int16_t x632 = 14498;

    t76 = ((x629>>(x630==x631))%x632);

    if (t76 != 52) { NG(); } else { ; }
	
}

void f77(void) {
    	static volatile uint16_t x641 = UINT16_MAX;
	static volatile uint32_t t77 = 483748995U;

    t77 = ((x641>>(x642==x643))%x644);

    if (t77 != 65535U) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x649 = 3566LLU;
	int8_t x650 = 1;
	int16_t x651 = INT16_MIN;
	int32_t x652 = INT32_MIN;

    t78 = ((x649>>(x650==x651))%x652);

    if (t78 != 3566LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x653 = INT8_MAX;
	int64_t x654 = INT64_MIN;
	int8_t x655 = 33;
	int32_t x656 = INT32_MIN;
	static int32_t t79 = 2673231;

    t79 = ((x653>>(x654==x655))%x656);

    if (t79 != 127) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x657 = UINT8_MAX;
	volatile uint32_t x658 = 1955U;
	volatile int32_t x659 = 12;
	static uint8_t x660 = 32U;
	int32_t t80 = -208275441;

    t80 = ((x657>>(x658==x659))%x660);

    if (t80 != 31) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x666 = INT8_MIN;
	int16_t x667 = INT16_MIN;
	volatile int16_t x668 = -1;
	int32_t t81 = -170335341;

    t81 = ((x665>>(x666==x667))%x668);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x673 = 33U;
	int32_t x674 = -1;
	int16_t x675 = 0;
	int8_t x676 = INT8_MIN;
	volatile int32_t t82 = 499;

    t82 = ((x673>>(x674==x675))%x676);

    if (t82 != 33) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint32_t x681 = UINT32_MAX;
	int64_t x683 = -5429925LL;
	static volatile int16_t x684 = -1;

    t83 = ((x681>>(x682==x683))%x684);

    if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x685 = INT16_MAX;
	static int8_t x686 = INT8_MIN;

    t84 = ((x685>>(x686==x687))%x688);

    if (t84 != 67LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x697 = 14914;
	static int16_t x698 = INT16_MIN;
	static int16_t x699 = -13271;
	volatile uint64_t x700 = 280770LLU;
	uint64_t t85 = 15003027LLU;

    t85 = ((x697>>(x698==x699))%x700);

    if (t85 != 14914LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x701 = 1;
	volatile uint8_t x703 = UINT8_MAX;
	int16_t x704 = INT16_MIN;
	volatile int32_t t86 = 6027;

    t86 = ((x701>>(x702==x703))%x704);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x721 = 8LLU;
	volatile int16_t x722 = INT16_MIN;
	volatile int32_t x723 = -1;
	volatile int8_t x724 = INT8_MAX;
	uint64_t t87 = 0LLU;

    t87 = ((x721>>(x722==x723))%x724);

    if (t87 != 8LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x741 = 1U;
	int16_t x742 = -10;
	volatile int16_t x743 = INT16_MIN;
	int16_t x744 = INT16_MIN;
	int32_t t88 = 31266405;

    t88 = ((x741>>(x742==x743))%x744);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x745 = 1797254918845105LL;
	int32_t x747 = INT32_MAX;
	int32_t x748 = INT32_MAX;
	int64_t t89 = 137806314523113423LL;

    t89 = ((x745>>(x746==x747))%x748);

    if (t89 != 84867041LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x749 = INT32_MAX;
	uint16_t x750 = 23U;
	int32_t x752 = INT32_MAX;
	int32_t t90 = -135322;

    t90 = ((x749>>(x750==x751))%x752);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x757 = 7841355LLU;
	static uint64_t x758 = 59693LLU;
	int8_t x759 = INT8_MIN;
	volatile int16_t x760 = INT16_MIN;
	static volatile uint64_t t91 = 1800274991660LLU;

    t91 = ((x757>>(x758==x759))%x760);

    if (t91 != 7841355LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x762 = INT32_MIN;
	int8_t x763 = INT8_MAX;
	uint64_t t92 = 6008276144513202LLU;

    t92 = ((x761>>(x762==x763))%x764);

    if (t92 != 21179LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x774 = INT32_MIN;
	int64_t x775 = INT64_MAX;
	uint64_t t93 = 5312358851021326LLU;

    t93 = ((x773>>(x774==x775))%x776);

    if (t93 != 15LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x777 = UINT16_MAX;
	volatile int8_t x778 = 1;
	static int8_t x779 = INT8_MIN;
	int32_t x780 = 16194062;
	volatile int32_t t94 = 382680;

    t94 = ((x777>>(x778==x779))%x780);

    if (t94 != 65535) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x787 = 12LL;
	static uint16_t x788 = UINT16_MAX;

    t95 = ((x785>>(x786==x787))%x788);

    if (t95 != 57106LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x789 = 13U;
	volatile int64_t x790 = INT64_MIN;
	static volatile uint16_t x791 = 58U;
	volatile int32_t x792 = -10;
	static volatile int32_t t96 = 17;

    t96 = ((x789>>(x790==x791))%x792);

    if (t96 != 3) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x793 = 1U;
	int32_t x794 = 1176;
	uint32_t x795 = 884552U;
	int16_t x796 = -1;
	volatile int32_t t97 = -363423;

    t97 = ((x793>>(x794==x795))%x796);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x801 = UINT64_MAX;
	int8_t x802 = INT8_MAX;
	static int32_t x803 = 229;
	int64_t x804 = 769908407194LL;

    t98 = ((x801>>(x802==x803))%x804);

    if (t98 != 406199757575LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x805 = 2842LL;
	int32_t x806 = INT32_MIN;
	int64_t x807 = 2886387698LL;
	static int64_t x808 = -12696854029LL;
	int64_t t99 = -64728999495732599LL;

    t99 = ((x805>>(x806==x807))%x808);

    if (t99 != 2842LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int64_t x810 = -65496327LL;
	int8_t x811 = -5;
	int16_t x812 = INT16_MAX;
	volatile int32_t t100 = -1;

    t100 = ((x809>>(x810==x811))%x812);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile uint8_t x818 = 106U;
	int64_t x819 = INT64_MIN;
	volatile uint32_t x820 = UINT32_MAX;
	volatile uint32_t t101 = 748U;

    t101 = ((x817>>(x818==x819))%x820);

    if (t101 != 7U) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x821 = INT64_MAX;
	int32_t x822 = -1;
	int8_t x823 = -1;
	int32_t x824 = -9520;
	volatile int64_t t102 = -9163380286LL;

    t102 = ((x821>>(x822==x823))%x824);

    if (t102 != 6863LL) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x825 = INT32_MAX;
	int8_t x826 = -1;
	int8_t x827 = INT8_MIN;
	int32_t x828 = -1;
	int32_t t103 = 810073959;

    t103 = ((x825>>(x826==x827))%x828);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x841 = UINT16_MAX;
	volatile int8_t x843 = 0;
	static uint32_t x844 = 14U;
	uint32_t t104 = 542426U;

    t104 = ((x841>>(x842==x843))%x844);

    if (t104 != 1U) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x849 = 1U;
	static int32_t x852 = INT32_MIN;
	int32_t t105 = -4;

    t105 = ((x849>>(x850==x851))%x852);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x857 = 5939U;
	static int32_t x858 = -1;
	static volatile uint8_t x859 = 14U;
	int32_t x860 = 8401551;
	volatile uint32_t t106 = 1510U;

    t106 = ((x857>>(x858==x859))%x860);

    if (t106 != 5939U) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x866 = -1;
	int64_t x867 = INT64_MIN;
	static volatile int64_t t107 = 3540168165890LL;

    t107 = ((x865>>(x866==x867))%x868);

    if (t107 != 127LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x877 = INT32_MAX;
	int32_t x878 = 31;
	volatile int32_t x879 = INT32_MIN;
	uint64_t x880 = 6049161758626LLU;
	static volatile uint64_t t108 = 708981LLU;

    t108 = ((x877>>(x878==x879))%x880);

    if (t108 != 2147483647LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x881 = INT16_MAX;
	int8_t x882 = INT8_MAX;
	static int32_t x883 = INT32_MIN;
	uint16_t x884 = 12376U;
	volatile int32_t t109 = -300230;

    t109 = ((x881>>(x882==x883))%x884);

    if (t109 != 8015) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x889 = 6U;
	volatile int16_t x890 = 46;
	static int16_t x891 = INT16_MIN;
	int32_t t110 = -726356586;

    t110 = ((x889>>(x890==x891))%x892);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x897 = 24U;
	static uint32_t x898 = 237U;
	volatile int64_t x899 = INT64_MIN;
	static volatile int32_t t111 = 19;

    t111 = ((x897>>(x898==x899))%x900);

    if (t111 != 24) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x901 = UINT16_MAX;
	uint64_t x903 = UINT64_MAX;
	static int16_t x904 = INT16_MAX;
	int32_t t112 = 756470539;

    t112 = ((x901>>(x902==x903))%x904);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x905 = 9;
	uint16_t x906 = UINT16_MAX;
	volatile int32_t t113 = -157345410;

    t113 = ((x905>>(x906==x907))%x908);

    if (t113 != 9) { NG(); } else { ; }
	
}

void f114(void) {
    	static uint32_t x914 = 27609801U;
	int32_t x915 = -935;
	int8_t x916 = -1;
	static int32_t t114 = 218737;

    t114 = ((x913>>(x914==x915))%x916);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x917 = 3U;
	static int8_t x918 = -11;
	uint8_t x919 = 0U;
	static volatile uint8_t x920 = 26U;
	uint32_t t115 = 60560U;

    t115 = ((x917>>(x918==x919))%x920);

    if (t115 != 3U) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x922 = INT64_MIN;
	int64_t x923 = INT64_MIN;
	uint64_t x924 = 27220LLU;
	volatile uint64_t t116 = 728482LLU;

    t116 = ((x921>>(x922==x923))%x924);

    if (t116 != 63LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint16_t x937 = UINT16_MAX;
	uint64_t x938 = 554946373666563631LLU;
	volatile int8_t x939 = 1;
	static int16_t x940 = INT16_MIN;
	int32_t t117 = -7849445;

    t117 = ((x937>>(x938==x939))%x940);

    if (t117 != 32767) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x945 = INT8_MAX;
	uint16_t x946 = UINT16_MAX;
	int32_t x947 = INT32_MIN;
	int16_t x948 = -1;
	int32_t t118 = -470294;

    t118 = ((x945>>(x946==x947))%x948);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint32_t x953 = UINT32_MAX;
	uint16_t x954 = UINT16_MAX;
	uint64_t x955 = 991902824917LLU;
	volatile uint8_t x956 = 26U;
	volatile uint32_t t119 = 186566U;

    t119 = ((x953>>(x954==x955))%x956);

    if (t119 != 21U) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x958 = INT32_MAX;
	volatile int32_t x960 = INT32_MIN;
	static int32_t t120 = 730443491;

    t120 = ((x957>>(x958==x959))%x960);

    if (t120 != 467) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x969 = 24U;
	uint8_t x971 = 119U;
	volatile int64_t x972 = -30170920572465LL;
	int64_t t121 = 7618570093LL;

    t121 = ((x969>>(x970==x971))%x972);

    if (t121 != 24LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint16_t x986 = 12U;
	int32_t x987 = 629977688;
	static int64_t x988 = -1LL;
	static volatile int64_t t122 = -4756030606171LL;

    t122 = ((x985>>(x986==x987))%x988);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x989 = 6362388670557LLU;
	int32_t x990 = 1;
	uint8_t x991 = UINT8_MAX;
	int64_t x992 = INT64_MIN;

    t123 = ((x989>>(x990==x991))%x992);

    if (t123 != 6362388670557LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x1001 = UINT16_MAX;
	uint16_t x1002 = 95U;
	int64_t x1003 = -1LL;
	uint16_t x1004 = 5U;
	volatile int32_t t124 = -510;

    t124 = ((x1001>>(x1002==x1003))%x1004);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x1009 = 25U;
	int8_t x1010 = 6;
	static int8_t x1011 = 23;
	int8_t x1012 = INT8_MIN;
	int32_t t125 = -207040;

    t125 = ((x1009>>(x1010==x1011))%x1012);

    if (t125 != 25) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x1033 = 8969;
	int16_t x1034 = INT16_MAX;
	static volatile int32_t x1035 = -1;
	int8_t x1036 = 1;
	volatile int32_t t126 = 5679100;

    t126 = ((x1033>>(x1034==x1035))%x1036);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x1041 = UINT64_MAX;
	int8_t x1042 = 1;
	int32_t x1043 = INT32_MAX;
	int64_t x1044 = INT64_MAX;
	volatile uint64_t t127 = 7549034LLU;

    t127 = ((x1041>>(x1042==x1043))%x1044);

    if (t127 != 1LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint32_t x1058 = 26U;
	volatile uint64_t x1059 = 1059304086LLU;
	volatile int32_t x1060 = INT32_MAX;
	int32_t t128 = -47907;

    t128 = ((x1057>>(x1058==x1059))%x1060);

    if (t128 != 27) { NG(); } else { ; }
	
}

void f129(void) {
    	uint16_t x1061 = UINT16_MAX;
	int64_t x1062 = INT64_MAX;
	static volatile int32_t x1063 = INT32_MAX;
	static uint32_t x1064 = 3884U;
	uint32_t t129 = 8186U;

    t129 = ((x1061>>(x1062==x1063))%x1064);

    if (t129 != 3391U) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x1073 = 2LLU;
	int64_t x1074 = -1LL;
	int8_t x1076 = -9;
	volatile uint64_t t130 = 198515305165766LLU;

    t130 = ((x1073>>(x1074==x1075))%x1076);

    if (t130 != 2LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x1077 = 138U;
	uint32_t x1079 = UINT32_MAX;
	int8_t x1080 = INT8_MIN;
	uint32_t t131 = 117717604U;

    t131 = ((x1077>>(x1078==x1079))%x1080);

    if (t131 != 138U) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x1085 = 468783804;
	int32_t x1086 = INT32_MIN;
	volatile uint16_t x1087 = UINT16_MAX;
	int64_t t132 = -81692125LL;

    t132 = ((x1085>>(x1086==x1087))%x1088);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int64_t x1090 = -2608515197952055LL;
	uint16_t x1091 = 3560U;
	static uint8_t x1092 = UINT8_MAX;

    t133 = ((x1089>>(x1090==x1091))%x1092);

    if (t133 != 127) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x1094 = 0;
	int16_t x1096 = INT16_MIN;

    t134 = ((x1093>>(x1094==x1095))%x1096);

    if (t134 != 32767) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x1098 = 27LL;
	uint64_t x1099 = 3908073600654LLU;
	static volatile int16_t x1100 = INT16_MAX;
	int32_t t135 = -32317064;

    t135 = ((x1097>>(x1098==x1099))%x1100);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint32_t x1101 = UINT32_MAX;
	volatile uint64_t x1102 = 92476557514296LLU;
	int32_t x1103 = 166;
	static uint16_t x1104 = 3U;
	volatile uint32_t t136 = 486U;

    t136 = ((x1101>>(x1102==x1103))%x1104);

    if (t136 != 0U) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int32_t x1107 = INT32_MAX;
	int32_t x1108 = INT32_MAX;
	volatile int32_t t137 = -31422982;

    t137 = ((x1105>>(x1106==x1107))%x1108);

    if (t137 != 12) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x1109 = 0;
	volatile int32_t x1111 = INT32_MIN;
	uint32_t x1112 = 46670199U;
	uint32_t t138 = 100U;

    t138 = ((x1109>>(x1110==x1111))%x1112);

    if (t138 != 0U) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x1121 = 0;
	static volatile int8_t x1123 = INT8_MIN;
	uint64_t x1124 = 9129900855LLU;

    t139 = ((x1121>>(x1122==x1123))%x1124);

    if (t139 != 0LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x1125 = INT64_MAX;
	int32_t x1126 = INT32_MIN;
	static int16_t x1127 = -8;
	int64_t x1128 = INT64_MAX;
	static volatile int64_t t140 = 2012780LL;

    t140 = ((x1125>>(x1126==x1127))%x1128);

    if (t140 != 0LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint16_t x1129 = 1814U;
	volatile int64_t x1130 = -16491158411LL;
	uint16_t x1131 = 75U;
	volatile int32_t t141 = -464951;

    t141 = ((x1129>>(x1130==x1131))%x1132);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint64_t x1133 = 44294814828110219LLU;
	int32_t x1134 = INT32_MIN;
	int32_t x1135 = INT32_MIN;

    t142 = ((x1133>>(x1134==x1135))%x1136);

    if (t142 != 22147407414055109LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x1137 = 35U;
	uint16_t x1138 = UINT16_MAX;
	static int16_t x1139 = INT16_MIN;
	uint8_t x1140 = 1U;

    t143 = ((x1137>>(x1138==x1139))%x1140);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x1142 = 166;
	volatile uint32_t x1144 = UINT32_MAX;
	volatile uint32_t t144 = 7615U;

    t144 = ((x1141>>(x1142==x1143))%x1144);

    if (t144 != 1995781U) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x1149 = 0;
	int64_t x1152 = INT64_MIN;
	int64_t t145 = 235448LL;

    t145 = ((x1149>>(x1150==x1151))%x1152);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x1157 = 1;
	int64_t x1158 = 230316178652LL;
	int32_t x1159 = INT32_MIN;
	int64_t x1160 = INT64_MIN;
	int64_t t146 = -1LL;

    t146 = ((x1157>>(x1158==x1159))%x1160);

    if (t146 != 1LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x1161 = 1;
	uint32_t x1162 = 52115U;
	static int16_t x1164 = INT16_MIN;

    t147 = ((x1161>>(x1162==x1163))%x1164);

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x1173 = 13U;
	volatile int32_t x1174 = 93229;
	static int8_t x1175 = INT8_MIN;
	static int64_t t148 = 9LL;

    t148 = ((x1173>>(x1174==x1175))%x1176);

    if (t148 != 13LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint16_t x1177 = 18U;
	static int16_t x1179 = 3;
	volatile int32_t t149 = 4;

    t149 = ((x1177>>(x1178==x1179))%x1180);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	static int16_t x1182 = -1357;
	static uint16_t x1183 = 172U;
	volatile uint64_t x1184 = UINT64_MAX;

    t150 = ((x1181>>(x1182==x1183))%x1184);

    if (t150 != 2147483647LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x1185 = UINT32_MAX;
	int32_t x1186 = -3;
	int16_t x1187 = INT16_MIN;
	static volatile int16_t x1188 = INT16_MIN;
	uint32_t t151 = 97U;

    t151 = ((x1185>>(x1186==x1187))%x1188);

    if (t151 != 32767U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint8_t x1193 = UINT8_MAX;
	int8_t x1194 = INT8_MIN;
	int64_t x1195 = -1LL;
	static int64_t x1196 = -60271021LL;
	int64_t t152 = -252LL;

    t152 = ((x1193>>(x1194==x1195))%x1196);

    if (t152 != 255LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x1209 = 40568255516LLU;
	volatile int64_t x1210 = -12LL;

    t153 = ((x1209>>(x1210==x1211))%x1212);

    if (t153 != 1773296620LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x1214 = INT32_MIN;
	uint64_t x1215 = UINT64_MAX;
	int32_t x1216 = INT32_MIN;
	int64_t t154 = -108207292LL;

    t154 = ((x1213>>(x1214==x1215))%x1216);

    if (t154 != 1663415156LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x1226 = 30978LLU;
	int8_t x1227 = -4;
	volatile int16_t x1228 = INT16_MAX;
	volatile int64_t t155 = 14690380155LL;

    t155 = ((x1225>>(x1226==x1227))%x1228);

    if (t155 != 56LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x1229 = 7U;
	uint64_t x1230 = 8037289318725260LLU;
	int16_t x1231 = 15947;
	int64_t x1232 = -1LL;
	volatile int64_t t156 = -116373526798121LL;

    t156 = ((x1229>>(x1230==x1231))%x1232);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x1233 = UINT16_MAX;
	volatile int64_t x1234 = INT64_MAX;
	int64_t x1235 = INT64_MIN;
	static int32_t x1236 = -1;
	volatile int32_t t157 = -2529572;

    t157 = ((x1233>>(x1234==x1235))%x1236);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint32_t x1245 = 657961U;
	int8_t x1246 = INT8_MIN;
	static int64_t x1247 = INT64_MIN;
	volatile uint32_t t158 = 34597U;

    t158 = ((x1245>>(x1246==x1247))%x1248);

    if (t158 != 657961U) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x1258 = 2LL;
	int64_t x1259 = -1510238341448LL;
	static int16_t x1260 = INT16_MAX;
	static volatile int64_t t159 = 286322796008228662LL;

    t159 = ((x1257>>(x1258==x1259))%x1260);

    if (t159 != 7LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x1261 = 1;
	volatile int32_t x1263 = INT32_MAX;
	uint64_t x1264 = UINT64_MAX;
	uint64_t t160 = 889257663341602LLU;

    t160 = ((x1261>>(x1262==x1263))%x1264);

    if (t160 != 1LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint64_t x1265 = UINT64_MAX;
	static int32_t x1266 = INT32_MIN;
	static volatile uint8_t x1267 = 1U;
	uint16_t x1268 = UINT16_MAX;

    t161 = ((x1265>>(x1266==x1267))%x1268);

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x1277 = 1517U;
	int8_t x1278 = INT8_MAX;
	int64_t x1279 = INT64_MIN;
	static int16_t x1280 = -1;
	int32_t t162 = -688319449;

    t162 = ((x1277>>(x1278==x1279))%x1280);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x1281 = 2415057;
	int64_t x1282 = INT64_MAX;
	int16_t x1283 = 0;
	uint64_t x1284 = 2673994268774897059LLU;
	static uint64_t t163 = 1667574LLU;

    t163 = ((x1281>>(x1282==x1283))%x1284);

    if (t163 != 2415057LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x1285 = 658U;
	int8_t x1286 = INT8_MIN;
	uint32_t x1287 = 8U;
	int8_t x1288 = -1;
	volatile int32_t t164 = 7544222;

    t164 = ((x1285>>(x1286==x1287))%x1288);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x1298 = -1LL;
	volatile int64_t x1299 = INT64_MIN;
	static int32_t x1300 = 31;
	static int64_t t165 = -1LL;

    t165 = ((x1297>>(x1298==x1299))%x1300);

    if (t165 != 5LL) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x1322 = 1U;
	int16_t x1323 = -1;
	uint64_t x1324 = 8928658243LLU;
	uint64_t t166 = 6227182LLU;

    t166 = ((x1321>>(x1322==x1323))%x1324);

    if (t166 != 4294967295LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x1325 = INT64_MAX;
	int8_t x1326 = INT8_MIN;
	int32_t x1328 = INT32_MAX;
	static int64_t t167 = 406202484760108LL;

    t167 = ((x1325>>(x1326==x1327))%x1328);

    if (t167 != 1LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint32_t x1330 = UINT32_MAX;
	int8_t x1331 = INT8_MIN;

    t168 = ((x1329>>(x1330==x1331))%x1332);

    if (t168 != 122) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x1333 = 11;
	volatile uint8_t x1334 = UINT8_MAX;
	int8_t x1335 = INT8_MAX;
	static int8_t x1336 = 3;
	static volatile int32_t t169 = -509080;

    t169 = ((x1333>>(x1334==x1335))%x1336);

    if (t169 != 2) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x1337 = 184951LL;
	volatile int32_t x1338 = INT32_MIN;
	uint8_t x1339 = 35U;
	uint8_t x1340 = 6U;
	int64_t t170 = -4039595067921LL;

    t170 = ((x1337>>(x1338==x1339))%x1340);

    if (t170 != 1LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x1341 = UINT64_MAX;
	int16_t x1342 = INT16_MIN;
	int64_t x1343 = 215324LL;
	static volatile int16_t x1344 = 12655;
	volatile uint64_t t171 = 6LLU;

    t171 = ((x1341>>(x1342==x1343))%x1344);

    if (t171 != 8555LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1345 = 4043;
	int16_t x1346 = -1898;
	int64_t x1347 = 1126014019128964687LL;
	volatile int8_t x1348 = INT8_MIN;
	int32_t t172 = 606;

    t172 = ((x1345>>(x1346==x1347))%x1348);

    if (t172 != 75) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint32_t x1349 = UINT32_MAX;
	uint8_t x1350 = UINT8_MAX;
	static int16_t x1351 = INT16_MAX;
	volatile int64_t x1352 = -4LL;
	int64_t t173 = 1290995785LL;

    t173 = ((x1349>>(x1350==x1351))%x1352);

    if (t173 != 3LL) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x1358 = INT64_MAX;
	uint64_t x1359 = UINT64_MAX;
	static int32_t x1360 = -186;
	volatile int32_t t174 = 1;

    t174 = ((x1357>>(x1358==x1359))%x1360);

    if (t174 != 63) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x1361 = UINT8_MAX;
	int64_t x1364 = INT64_MIN;
	int64_t t175 = -1467737459774293LL;

    t175 = ((x1361>>(x1362==x1363))%x1364);

    if (t175 != 255LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x1365 = UINT64_MAX;
	uint64_t x1367 = 7029868661075819789LLU;
	int64_t x1368 = 18066388549LL;
	uint64_t t176 = 20744980222416LLU;

    t176 = ((x1365>>(x1366==x1367))%x1368);

    if (t176 != 16513082227LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x1369 = INT32_MAX;
	volatile int32_t x1370 = -1;
	uint32_t x1371 = 669258U;
	static int32_t t177 = -1869;

    t177 = ((x1369>>(x1370==x1371))%x1372);

    if (t177 != 7) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x1389 = 14838U;
	volatile int16_t x1390 = 257;
	static int16_t x1392 = -1;
	static int32_t t178 = -3840398;

    t178 = ((x1389>>(x1390==x1391))%x1392);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x1393 = 31U;
	int64_t x1394 = INT64_MIN;
	uint64_t x1395 = 726618446456742982LLU;
	int32_t x1396 = 8;
	uint32_t t179 = 1U;

    t179 = ((x1393>>(x1394==x1395))%x1396);

    if (t179 != 7U) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x1401 = INT16_MAX;
	static int32_t t180 = 12070849;

    t180 = ((x1401>>(x1402==x1403))%x1404);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x1418 = -344382377LL;
	int16_t x1419 = INT16_MIN;
	uint64_t x1420 = 142192562746339LLU;
	volatile uint64_t t181 = 2LLU;

    t181 = ((x1417>>(x1418==x1419))%x1420);

    if (t181 != 119LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x1425 = INT32_MAX;
	uint8_t x1426 = 1U;
	int32_t x1427 = 116620;
	int32_t x1428 = INT32_MIN;

    t182 = ((x1425>>(x1426==x1427))%x1428);

    if (t182 != INT32_MAX) { NG(); } else { ; }
	
}

void f183(void) {
    	static volatile int8_t x1429 = 53;
	volatile int32_t x1430 = INT32_MIN;
	int16_t x1432 = INT16_MAX;
	int32_t t183 = -29654814;

    t183 = ((x1429>>(x1430==x1431))%x1432);

    if (t183 != 53) { NG(); } else { ; }
	
}

void f184(void) {
    	uint32_t x1433 = 9800179U;
	static int8_t x1434 = -1;
	int16_t x1436 = -2472;
	uint32_t t184 = 3145616U;

    t184 = ((x1433>>(x1434==x1435))%x1436);

    if (t184 != 9800179U) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint16_t x1449 = 57U;
	static int8_t x1450 = -3;
	volatile uint32_t x1451 = 94U;
	int32_t t185 = -981784461;

    t185 = ((x1449>>(x1450==x1451))%x1452);

    if (t185 != 57) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x1453 = 167;
	int16_t x1454 = INT16_MIN;
	static int16_t x1455 = INT16_MIN;
	int16_t x1456 = INT16_MIN;
	static int32_t t186 = 250;

    t186 = ((x1453>>(x1454==x1455))%x1456);

    if (t186 != 83) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x1462 = -1;
	int16_t x1464 = -7;
	static uint32_t t187 = 49002106U;

    t187 = ((x1461>>(x1462==x1463))%x1464);

    if (t187 != 6U) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1481 = INT8_MAX;
	volatile int8_t x1483 = INT8_MIN;

    t188 = ((x1481>>(x1482==x1483))%x1484);

    if (t188 != 8) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x1485 = 12862U;
	int32_t x1487 = INT32_MIN;
	static uint16_t x1488 = 2389U;
	int32_t t189 = 17446;

    t189 = ((x1485>>(x1486==x1487))%x1488);

    if (t189 != 917) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1490 = -1LL;
	int16_t x1491 = INT16_MIN;
	static uint32_t x1492 = UINT32_MAX;
	uint32_t t190 = 527467109U;

    t190 = ((x1489>>(x1490==x1491))%x1492);

    if (t190 != 2147483647U) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint8_t x1497 = 72U;
	int16_t x1498 = -537;
	uint16_t x1499 = UINT16_MAX;
	static uint16_t x1500 = 1U;
	volatile int32_t t191 = 31183;

    t191 = ((x1497>>(x1498==x1499))%x1500);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint8_t x1513 = 18U;
	static volatile int8_t x1514 = -1;
	volatile uint16_t x1515 = 1U;
	static volatile int64_t x1516 = -10323LL;
	static volatile int64_t t192 = 247574544315623LL;

    t192 = ((x1513>>(x1514==x1515))%x1516);

    if (t192 != 18LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint32_t x1517 = 20666537U;
	int16_t x1518 = INT16_MIN;
	int16_t x1520 = INT16_MAX;
	uint32_t t193 = 205U;

    t193 = ((x1517>>(x1518==x1519))%x1520);

    if (t193 != 23327U) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x1521 = 4U;
	int32_t x1522 = INT32_MIN;
	static volatile int8_t x1523 = 0;
	static volatile int16_t x1524 = INT16_MIN;
	int32_t t194 = 80292832;

    t194 = ((x1521>>(x1522==x1523))%x1524);

    if (t194 != 4) { NG(); } else { ; }
	
}

void f195(void) {
    	static uint32_t x1528 = UINT32_MAX;
	uint32_t t195 = 58U;

    t195 = ((x1525>>(x1526==x1527))%x1528);

    if (t195 != 389193U) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x1529 = 860;
	int32_t x1530 = INT32_MIN;
	uint64_t x1531 = 16160893LLU;
	uint64_t x1532 = 14674303411988998LLU;
	uint64_t t196 = 1760035752112965990LLU;

    t196 = ((x1529>>(x1530==x1531))%x1532);

    if (t196 != 860LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint32_t t197 = 1138533795U;

    t197 = ((x1537>>(x1538==x1539))%x1540);

    if (t197 != 45U) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x1541 = UINT64_MAX;
	uint16_t x1542 = 381U;
	int64_t x1543 = -1LL;
	int32_t x1544 = INT32_MAX;
	volatile uint64_t t198 = 2205263726683018LLU;

    t198 = ((x1541>>(x1542==x1543))%x1544);

    if (t198 != 3LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	static int64_t x1546 = -216230767196942LL;
	uint32_t x1547 = UINT32_MAX;
	volatile int64_t t199 = 103867201721165LL;

    t199 = ((x1545>>(x1546==x1547))%x1548);

    if (t199 != 7LL) { NG(); } else { ; }
	
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

