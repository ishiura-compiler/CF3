
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

int32_t x2 = -1;
uint8_t x6 = 89U;
static int16_t x8 = INT16_MIN;
volatile int32_t t1 = 0;
int8_t x10 = INT8_MIN;
int16_t x23 = INT16_MAX;
int64_t x32 = -211710699LL;
static int8_t x47 = 7;
volatile int64_t x55 = -2434225LL;
uint8_t x65 = 13U;
int16_t x66 = INT16_MIN;
uint8_t x78 = UINT8_MAX;
int64_t t14 = 248LL;
static uint8_t x86 = UINT8_MAX;
int64_t x89 = -1LL;
int8_t x97 = -1;
uint8_t x103 = 3U;
int32_t x110 = 119225;
int64_t x112 = INT64_MIN;
volatile int64_t t21 = -33408092657LL;
int8_t x113 = 1;
uint64_t x129 = 254126848811828146LLU;
int8_t x132 = INT8_MIN;
int32_t x133 = INT32_MIN;
uint16_t x141 = 1472U;
int32_t x144 = -393;
uint32_t x151 = 435408U;
volatile int8_t x153 = 4;
uint8_t x157 = 2U;
volatile int8_t x159 = INT8_MAX;
uint64_t x160 = 231768362899LLU;
int8_t x166 = INT8_MIN;
static uint32_t x173 = UINT32_MAX;
volatile int32_t x179 = -1;
volatile int64_t x181 = INT64_MAX;
static int64_t x192 = INT64_MAX;
static volatile int32_t t37 = 1318963;
int32_t x223 = INT32_MIN;
int64_t t38 = 5429252298LL;
int16_t x233 = INT16_MAX;
uint32_t x239 = UINT32_MAX;
static volatile uint8_t x253 = 5U;
uint32_t t44 = 14909205U;
int16_t x265 = INT16_MIN;
uint32_t x266 = 300U;
uint16_t x269 = 1264U;
int16_t x272 = -842;
static volatile int16_t x279 = INT16_MAX;
uint32_t t48 = 1307703U;
int32_t x291 = 1887816;
int8_t x292 = INT8_MIN;
uint64_t x299 = 4557LLU;
int32_t x308 = INT32_MAX;
int16_t x318 = INT16_MIN;
int32_t t53 = -1127502;
int8_t x325 = INT8_MIN;
static int16_t x326 = INT16_MAX;
static uint32_t x347 = 100227U;
int8_t x365 = 4;
static int8_t x374 = 2;
static int32_t t63 = 192;
static volatile int64_t x377 = 55LL;
int32_t x378 = -1;
int8_t x379 = INT8_MIN;
int64_t x385 = -1LL;
int16_t x389 = INT16_MAX;
static int64_t x392 = INT64_MIN;
int64_t x399 = -170502663850144771LL;
uint64_t x402 = 27676333LLU;
int8_t x413 = INT8_MIN;
volatile int64_t t72 = -19LL;
int8_t x428 = INT8_MAX;
uint64_t x431 = UINT64_MAX;
static uint32_t x433 = 0U;
int16_t x435 = INT16_MAX;
static volatile int64_t t77 = -874524761LL;
int8_t x454 = INT8_MIN;
uint32_t x455 = 2845U;
static int8_t x459 = INT8_MIN;
static int64_t x473 = -1LL;
uint8_t x477 = 1U;
int32_t x478 = -1;
volatile uint64_t x483 = 70902566LLU;
uint16_t x489 = 1U;
static volatile int32_t t88 = -104;
int8_t x501 = -5;
uint32_t t90 = 159190779U;
static uint16_t x511 = UINT16_MAX;
static int64_t t92 = -82210382268750093LL;
static int64_t x513 = -1LL;
static uint32_t x517 = 62913439U;
volatile uint32_t x519 = 22U;
uint32_t x520 = 4U;
uint32_t x524 = UINT32_MAX;
int32_t x527 = INT32_MIN;
static volatile int64_t t96 = -32462857LL;
int8_t x530 = 17;
uint16_t x545 = UINT16_MAX;
static uint8_t x546 = UINT8_MAX;
int32_t x547 = -1;
volatile uint32_t t100 = 415U;
static int32_t x556 = INT32_MIN;
uint64_t t103 = 323487LLU;
volatile int64_t t105 = -165323LL;
int32_t x573 = 6277569;
int16_t x574 = INT16_MAX;
int32_t x576 = -284;
static volatile int32_t t106 = -673;
static volatile int64_t t108 = 185829LL;
volatile int16_t x597 = 19;
int64_t x609 = -26232607959384LL;
int16_t x613 = -143;
static uint32_t x619 = 2618623U;
uint32_t x620 = UINT32_MAX;
int16_t x629 = INT16_MIN;
static int32_t x637 = 15074989;
static uint16_t x643 = 258U;
volatile int64_t x648 = -55810LL;
uint64_t t117 = 14751LLU;
uint16_t x649 = 0U;
int32_t x655 = -1;
volatile uint32_t t119 = 36191778U;
int64_t x683 = INT64_MAX;
int16_t x686 = -1;
uint8_t x687 = UINT8_MAX;
static int16_t x690 = INT16_MAX;
int32_t x697 = 407;
int32_t x712 = 3;
int32_t t126 = 314010;
int8_t x722 = INT8_MIN;
int64_t x729 = -2397548221996501159LL;
int64_t x730 = INT64_MIN;
static int16_t x745 = 1;
static uint32_t x751 = UINT32_MAX;
static int32_t x753 = INT32_MAX;
uint32_t t134 = 247371367U;
uint64_t x794 = UINT64_MAX;
int32_t x797 = -1053272938;
volatile uint32_t t137 = 682342U;
volatile int16_t x801 = 2;
int32_t x803 = INT32_MAX;
uint32_t t138 = 1071U;
int64_t x826 = -1LL;
int8_t x827 = INT8_MIN;
uint64_t t143 = 7LLU;
volatile int64_t x840 = -211137918LL;
static volatile int32_t x859 = 3224;
static volatile uint64_t t148 = 1002188LLU;
volatile int64_t x866 = INT64_MIN;
static uint64_t x880 = 11945870918174738LLU;
uint64_t x884 = 36666456LLU;
volatile uint64_t x891 = 2015455602257256LLU;
volatile uint64_t x896 = 37267094LLU;
volatile uint32_t x899 = 274U;
volatile int16_t x918 = INT16_MAX;
int64_t x919 = -1LL;
int16_t x936 = INT16_MIN;
int64_t t159 = -70183175416313596LL;
int32_t x943 = -178032;
volatile int8_t x946 = INT8_MIN;
static volatile uint32_t t161 = 3033125U;
uint8_t x953 = 16U;
static int16_t x956 = -3;
int16_t x964 = INT16_MAX;
uint32_t t165 = 0U;
int8_t x983 = -1;
uint32_t x984 = 48U;
int16_t x1000 = INT16_MAX;
int32_t t169 = 65100;
static int32_t x1015 = INT32_MIN;
int32_t x1032 = INT32_MIN;
volatile int8_t x1043 = -1;
uint32_t t174 = 415557U;
uint32_t x1045 = UINT32_MAX;
int16_t x1048 = 7;
int64_t t175 = -63520127050794LL;
volatile int64_t t176 = -7818761383LL;
int16_t x1060 = 49;
int32_t x1066 = INT32_MIN;
static int16_t x1080 = 4472;
uint32_t x1081 = 3972857U;
static uint16_t x1083 = UINT16_MAX;
uint16_t x1105 = UINT16_MAX;
uint64_t x1114 = 107349803LLU;
int16_t x1118 = INT16_MAX;
uint64_t t187 = 6079633299LLU;
int32_t x1137 = -1;
int64_t x1138 = INT64_MIN;
int64_t x1140 = -762907791335992LL;
volatile int64_t t188 = -52240801932LL;
int16_t x1145 = INT16_MIN;
uint64_t t190 = 577627971801LLU;
static uint32_t x1167 = 26U;
volatile int64_t t193 = -8453698LL;
int32_t x1181 = INT32_MAX;
static uint64_t x1183 = 59LLU;
int32_t t197 = 1;
int8_t x1193 = INT8_MIN;
volatile int64_t t198 = -21467033280696LL;
int64_t x1199 = INT64_MIN;
static volatile int64_t x1200 = 1836851580LL;


void f0(void) {
    	volatile int8_t x1 = -1;
	uint32_t x3 = 844290U;
	uint16_t x4 = UINT16_MAX;
	static uint32_t t0 = 27U;

    t0 = ((x1-x2)/(x3%x4));

    if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MAX;
	static int8_t x7 = INT8_MAX;

    t1 = ((x5-x6)/(x7%x8));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	volatile int64_t x11 = -1528901626622958516LL;
	static int8_t x12 = -24;
	static volatile int64_t t2 = -5806LL;

    t2 = ((x9-x10)/(x11%x12));

    if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x17 = INT8_MAX;
	uint8_t x18 = 0U;
	int64_t x19 = INT64_MIN;
	uint32_t x20 = UINT32_MAX;
	int64_t t3 = 6910LL;

    t3 = ((x17-x18)/(x19%x20));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x21 = 631110903446LLU;
	volatile int16_t x22 = 370;
	volatile int64_t x24 = INT64_MIN;
	volatile uint64_t t4 = 23024422085LLU;

    t4 = ((x21-x22)/(x23%x24));

    if (t4 != 19260564LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x25 = INT32_MIN;
	static int64_t x26 = -1720630LL;
	volatile int32_t x27 = -1;
	uint16_t x28 = 1746U;
	int64_t t5 = -54779181LL;

    t5 = ((x25-x26)/(x27%x28));

    if (t5 != 2145763018LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static int8_t x29 = INT8_MIN;
	int16_t x30 = -1;
	uint16_t x31 = 5U;
	static volatile int64_t t6 = 9974325LL;

    t6 = ((x29-x30)/(x31%x32));

    if (t6 != -25LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x33 = 1458;
	static uint64_t x34 = 70316547319763LLU;
	uint64_t x35 = 107642526113496109LLU;
	int32_t x36 = INT32_MIN;
	volatile uint64_t t7 = 555LLU;

    t7 = ((x33-x34)/(x35%x36));

    if (t7 != 171LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x37 = -1;
	static int16_t x38 = 1340;
	uint8_t x39 = UINT8_MAX;
	uint64_t x40 = UINT64_MAX;
	uint64_t t8 = 20520621068404LLU;

    t8 = ((x37-x38)/(x39%x40));

    if (t8 != 72340172838076667LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x45 = INT16_MAX;
	uint16_t x46 = 7434U;
	int16_t x48 = -1195;
	static int32_t t9 = 108981;

    t9 = ((x45-x46)/(x47%x48));

    if (t9 != 3619) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int16_t x49 = -75;
	volatile int8_t x50 = 7;
	int64_t x51 = -1LL;
	static int32_t x52 = INT32_MAX;
	volatile int64_t t10 = 1956642162055301893LL;

    t10 = ((x49-x50)/(x51%x52));

    if (t10 != 82LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x53 = INT32_MAX;
	uint8_t x54 = 2U;
	int8_t x56 = 47;
	static volatile int64_t t11 = -31886612519257LL;

    t11 = ((x53-x54)/(x55%x56));

    if (t11 != -2147483645LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x67 = INT16_MIN;
	uint16_t x68 = 94U;
	static volatile int32_t t12 = 80;

    t12 = ((x65-x66)/(x67%x68));

    if (t12 != -585) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x69 = -1;
	static int16_t x70 = INT16_MIN;
	uint64_t x71 = 47793753LLU;
	uint32_t x72 = 289495U;
	volatile uint64_t t13 = 7128656LLU;

    t13 = ((x69-x70)/(x71%x72));

    if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x77 = INT32_MAX;
	int64_t x79 = -1LL;
	static volatile int64_t x80 = INT64_MAX;

    t14 = ((x77-x78)/(x79%x80));

    if (t14 != -2147483392LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x81 = -114812191;
	int8_t x82 = INT8_MAX;
	uint64_t x83 = UINT64_MAX;
	static int16_t x84 = INT16_MIN;
	static uint64_t t15 = 113096926LLU;

    t15 = ((x81-x82)/(x83%x84));

    if (t15 != 562967133811296LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x85 = UINT32_MAX;
	uint16_t x87 = 81U;
	int16_t x88 = INT16_MIN;
	volatile uint32_t t16 = 195645U;

    t16 = ((x85-x86)/(x87%x88));

    if (t16 != 53024284U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x90 = -837;
	int8_t x91 = INT8_MIN;
	uint8_t x92 = 9U;
	static int64_t t17 = -152859231390009LL;

    t17 = ((x89-x90)/(x91%x92));

    if (t17 != -418LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x93 = INT32_MIN;
	static volatile int16_t x94 = 0;
	uint16_t x95 = 528U;
	int32_t x96 = -38578;
	int32_t t18 = 3563;

    t18 = ((x93-x94)/(x95%x96));

    if (t18 != -4067203) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x98 = 922190581833LLU;
	int64_t x99 = INT64_MIN;
	uint8_t x100 = UINT8_MAX;
	uint64_t t19 = 1570814508LLU;

    t19 = ((x97-x98)/(x99%x100));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x101 = -1;
	uint8_t x102 = UINT8_MAX;
	int64_t x104 = INT64_MAX;
	static volatile int64_t t20 = 627586369122LL;

    t20 = ((x101-x102)/(x103%x104));

    if (t20 != -85LL) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x109 = INT16_MIN;
	static uint32_t x111 = 1598972U;

    t21 = ((x109-x110)/(x111%x112));

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static int32_t x114 = -1;
	static int8_t x115 = -1;
	int32_t x116 = -4285;
	int32_t t22 = 0;

    t22 = ((x113-x114)/(x115%x116));

    if (t22 != -2) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x117 = 46973234528782057LLU;
	int8_t x118 = -1;
	volatile int16_t x119 = INT16_MIN;
	uint64_t x120 = 849665372617476429LLU;
	uint64_t t23 = 7LLU;

    t23 = ((x117-x118)/(x119%x120));

    if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int32_t x121 = INT32_MIN;
	int8_t x122 = -1;
	uint32_t x123 = UINT32_MAX;
	int8_t x124 = INT8_MIN;
	uint32_t t24 = 16805U;

    t24 = ((x121-x122)/(x123%x124));

    if (t24 != 16909320U) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x130 = 2403313797LL;
	static int32_t x131 = INT32_MAX;
	volatile uint64_t t25 = 157LLU;

    t25 = ((x129-x130)/(x131%x132));

    if (t25 != 2000998790618223LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x134 = 1493967747613LLU;
	uint16_t x135 = 6U;
	static int32_t x136 = INT32_MAX;
	uint64_t t26 = 13LLU;

    t26 = ((x133-x134)/(x135%x136));

    if (t26 != 3074457096265720059LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x142 = INT64_MAX;
	int8_t x143 = -2;
	volatile int64_t t27 = 44742LL;

    t27 = ((x141-x142)/(x143%x144));

    if (t27 != 4611686018427387167LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x149 = 74955;
	int32_t x150 = -1;
	int64_t x152 = INT64_MIN;
	int64_t t28 = 17LL;

    t28 = ((x149-x150)/(x151%x152));

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x154 = -1LL;
	uint64_t x155 = 2543850439228574LLU;
	volatile int16_t x156 = INT16_MAX;
	volatile uint64_t t29 = 66337234238782549LLU;

    t29 = ((x153-x154)/(x155%x156));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x158 = -1;
	uint64_t t30 = 433619LLU;

    t30 = ((x157-x158)/(x159%x160));

    if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint16_t x165 = UINT16_MAX;
	int8_t x167 = INT8_MAX;
	int8_t x168 = INT8_MIN;
	volatile int32_t t31 = -8101;

    t31 = ((x165-x166)/(x167%x168));

    if (t31 != 517) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x174 = 15;
	volatile int16_t x175 = -1;
	static int16_t x176 = INT16_MIN;
	volatile uint32_t t32 = 2051U;

    t32 = ((x173-x174)/(x175%x176));

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x177 = -1LL;
	uint32_t x178 = UINT32_MAX;
	int32_t x180 = INT32_MIN;
	volatile int64_t t33 = -61426011LL;

    t33 = ((x177-x178)/(x179%x180));

    if (t33 != 4294967296LL) { NG(); } else { ; }
	
}

void f34(void) {
    	volatile uint8_t x182 = 78U;
	static int64_t x183 = INT64_MIN;
	volatile int32_t x184 = -15568102;
	volatile int64_t t34 = -1825LL;

    t34 = ((x181-x182)/(x183%x184));

    if (t34 != -19162501842531LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x189 = -665;
	volatile int16_t x190 = INT16_MAX;
	static int32_t x191 = -166;
	int64_t t35 = 5265251066LL;

    t35 = ((x189-x190)/(x191%x192));

    if (t35 != 201LL) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x197 = 1286U;
	static int16_t x198 = 1;
	static volatile uint16_t x199 = 17872U;
	int32_t x200 = INT32_MIN;
	int32_t t36 = -437361340;

    t36 = ((x197-x198)/(x199%x200));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x217 = 2;
	uint8_t x218 = 3U;
	int8_t x219 = -40;
	uint16_t x220 = 17U;

    t37 = ((x217-x218)/(x219%x220));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x221 = -2;
	int64_t x222 = -26899LL;
	int64_t x224 = INT64_MIN;

    t38 = ((x221-x222)/(x223%x224));

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x234 = -5634;
	int64_t x235 = 3173LL;
	int32_t x236 = INT32_MIN;
	static volatile int64_t t39 = 76169811604LL;

    t39 = ((x233-x234)/(x235%x236));

    if (t39 != 12LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x237 = UINT8_MAX;
	static int64_t x238 = -1LL;
	volatile int32_t x240 = INT32_MIN;
	volatile int64_t t40 = 5646745555LL;

    t40 = ((x237-x238)/(x239%x240));

    if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x241 = INT16_MIN;
	int8_t x242 = -8;
	int8_t x243 = -1;
	volatile int64_t x244 = INT64_MIN;
	int64_t t41 = 800502994703011LL;

    t41 = ((x241-x242)/(x243%x244));

    if (t41 != 32760LL) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x249 = UINT32_MAX;
	int64_t x250 = 447111560LL;
	volatile int8_t x251 = INT8_MAX;
	int64_t x252 = -4883LL;
	volatile int64_t t42 = -472175013002839281LL;

    t42 = ((x249-x250)/(x251%x252));

    if (t42 != 30298076LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x254 = 39U;
	uint16_t x255 = 208U;
	int32_t x256 = -101275523;
	static volatile uint32_t t43 = 1059261U;

    t43 = ((x253-x254)/(x255%x256));

    if (t43 != 20648881U) { NG(); } else { ; }
	
}

void f44(void) {
    	static uint32_t x257 = UINT32_MAX;
	volatile int8_t x258 = INT8_MAX;
	uint32_t x259 = 1052231395U;
	int32_t x260 = -8005109;

    t44 = ((x257-x258)/(x259%x260));

    if (t44 != 4U) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x261 = INT32_MIN;
	int8_t x262 = INT8_MIN;
	int16_t x263 = -1;
	uint32_t x264 = 2516U;
	volatile uint32_t t45 = 3U;

    t45 = ((x261-x262)/(x263%x264));

    if (t45 != 1180584U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x267 = UINT64_MAX;
	int16_t x268 = 2;
	static uint64_t t46 = 960169244355739093LLU;

    t46 = ((x265-x266)/(x267%x268));

    if (t46 != 4294934228LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x270 = UINT64_MAX;
	int8_t x271 = INT8_MAX;
	uint64_t t47 = 1359LLU;

    t47 = ((x269-x270)/(x271%x272));

    if (t47 != 9LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x277 = 1688616U;
	uint8_t x278 = 5U;
	uint32_t x280 = 215625U;

    t48 = ((x277-x278)/(x279%x280));

    if (t48 != 51U) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x289 = UINT8_MAX;
	static volatile uint16_t x290 = UINT16_MAX;
	int32_t t49 = 62;

    t49 = ((x289-x290)/(x291%x292));

    if (t49 != -906) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x297 = INT16_MIN;
	int8_t x298 = -1;
	int64_t x300 = -1LL;
	uint64_t t50 = 1607010092LLU;

    t50 = ((x297-x298)/(x299%x300));

    if (t50 != 4048001771715935LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x301 = INT64_MAX;
	static uint64_t x302 = 172317729564867969LLU;
	static volatile int16_t x303 = INT16_MAX;
	volatile int16_t x304 = INT16_MIN;
	volatile uint64_t t51 = 2LLU;

    t51 = ((x301-x302)/(x303%x304));

    if (t51 != 276224686644792LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x305 = INT16_MIN;
	static int64_t x306 = INT64_MIN;
	uint8_t x307 = UINT8_MAX;
	int64_t t52 = -675688LL;

    t52 = ((x305-x306)/(x307%x308));

    if (t52 != 36170086419038208LL) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x317 = -5;
	volatile int8_t x319 = 1;
	int16_t x320 = INT16_MAX;

    t53 = ((x317-x318)/(x319%x320));

    if (t53 != 32763) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x327 = 266;
	static volatile int64_t x328 = INT64_MIN;
	int64_t t54 = 15406230LL;

    t54 = ((x325-x326)/(x327%x328));

    if (t54 != -123LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int64_t x337 = -1LL;
	int16_t x338 = -1;
	int16_t x339 = INT16_MAX;
	static int16_t x340 = 857;
	static int64_t t55 = 1154LL;

    t55 = ((x337-x338)/(x339%x340));

    if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x341 = INT32_MIN;
	uint32_t x342 = 10713U;
	volatile int8_t x343 = INT8_MIN;
	uint32_t x344 = 5512540U;
	uint32_t t56 = 147259080U;

    t56 = ((x341-x342)/(x343%x344));

    if (t56 != 3074U) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x345 = 6U;
	int16_t x346 = -1;
	int16_t x348 = INT16_MIN;
	volatile uint32_t t57 = 25216U;

    t57 = ((x345-x346)/(x347%x348));

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x349 = INT8_MIN;
	int32_t x350 = -1;
	uint64_t x351 = 6134LLU;
	int16_t x352 = INT16_MAX;
	volatile uint64_t t58 = 6333904657117860LLU;

    t58 = ((x349-x350)/(x351%x352));

    if (t58 != 3007294436535629LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int64_t x353 = INT64_MIN;
	static int64_t x354 = -1LL;
	int32_t x355 = -1;
	volatile int8_t x356 = -2;
	int64_t t59 = INT64_MAX;

    t59 = ((x353-x354)/(x355%x356));

    if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x361 = 391U;
	uint64_t x362 = 211641LLU;
	static int32_t x363 = 3702648;
	volatile int16_t x364 = -31;
	volatile uint64_t t60 = 29607LLU;

    t60 = ((x361-x362)/(x363%x364));

    if (t60 != 2305843009213667545LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x366 = -532382LL;
	int16_t x367 = INT16_MAX;
	int64_t x368 = INT64_MIN;
	int64_t t61 = 17233053709905881LL;

    t61 = ((x365-x366)/(x367%x368));

    if (t61 != 16LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int16_t x369 = 4071;
	volatile int32_t x370 = -445;
	static volatile uint16_t x371 = 2U;
	volatile uint64_t x372 = 1126448275110908213LLU;
	uint64_t t62 = 73982LLU;

    t62 = ((x369-x370)/(x371%x372));

    if (t62 != 2258LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x373 = 3370U;
	uint8_t x375 = UINT8_MAX;
	uint16_t x376 = UINT16_MAX;

    t63 = ((x373-x374)/(x375%x376));

    if (t63 != 13) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x380 = -256041927;
	volatile int64_t t64 = 1LL;

    t64 = ((x377-x378)/(x379%x380));

    if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint8_t x386 = 3U;
	int64_t x387 = INT64_MIN;
	uint8_t x388 = 3U;
	volatile int64_t t65 = 1645870LL;

    t65 = ((x385-x386)/(x387%x388));

    if (t65 != 2LL) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x390 = 236597421337LLU;
	uint32_t x391 = 195U;
	static uint64_t t66 = 159637315073950LLU;

    t66 = ((x389-x390)/(x391%x392));

    if (t66 != 94598686344164938LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint16_t x393 = 20U;
	int32_t x394 = 2;
	int64_t x395 = INT64_MIN;
	int64_t x396 = 758723076LL;
	static volatile int64_t t67 = 9602LL;

    t67 = ((x393-x394)/(x395%x396));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x397 = 32910903;
	volatile int8_t x398 = 4;
	int8_t x400 = -48;
	volatile int64_t t68 = -476328LL;

    t68 = ((x397-x398)/(x399%x400));

    if (t68 != -1732152LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x401 = 352LLU;
	uint8_t x403 = 12U;
	int8_t x404 = INT8_MIN;
	volatile uint64_t t69 = 31454735138377LLU;

    t69 = ((x401-x402)/(x403%x404));

    if (t69 != 1537228672806822969LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static int32_t x405 = -1;
	static volatile int32_t x406 = -86;
	int32_t x407 = INT32_MIN;
	int32_t x408 = 59296887;
	int32_t t70 = 42943;

    t70 = ((x405-x406)/(x407%x408));

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x414 = 150;
	volatile uint8_t x415 = 53U;
	static int32_t x416 = 14;
	volatile int32_t t71 = -547;

    t71 = ((x413-x414)/(x415%x416));

    if (t71 != -25) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint32_t x417 = 58822U;
	static volatile int64_t x418 = INT64_MAX;
	int32_t x419 = INT32_MIN;
	int16_t x420 = INT16_MAX;

    t72 = ((x417-x418)/(x419%x420));

    if (t72 != 4611686018427358492LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int16_t x421 = INT16_MIN;
	uint8_t x422 = 7U;
	int8_t x423 = INT8_MAX;
	uint8_t x424 = 7U;
	volatile int32_t t73 = -77968799;

    t73 = ((x421-x422)/(x423%x424));

    if (t73 != -32775) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x425 = UINT64_MAX;
	uint64_t x426 = 0LLU;
	static volatile int16_t x427 = -1;
	uint64_t t74 = 154488LLU;

    t74 = ((x425-x426)/(x427%x428));

    if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x429 = INT32_MAX;
	uint16_t x430 = 7U;
	int8_t x432 = INT8_MIN;
	static volatile uint64_t t75 = 829856558413079119LLU;

    t75 = ((x429-x430)/(x431%x432));

    if (t75 != 16909320LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x434 = INT16_MIN;
	int8_t x436 = INT8_MIN;
	uint32_t t76 = 2614071U;

    t76 = ((x433-x434)/(x435%x436));

    if (t76 != 258U) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int8_t x437 = 0;
	uint32_t x438 = 217753U;
	uint32_t x439 = UINT32_MAX;
	int64_t x440 = INT64_MAX;

    t77 = ((x437-x438)/(x439%x440));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int64_t x441 = 574183LL;
	uint64_t x442 = 610154133900217LLU;
	static volatile uint32_t x443 = 4779499U;
	static int16_t x444 = -1;
	volatile uint64_t t78 = 0LLU;

    t78 = ((x441-x442)/(x443%x444));

    if (t78 != 3859428345853LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x449 = -1LL;
	int64_t x450 = INT64_MIN;
	int8_t x451 = INT8_MAX;
	uint32_t x452 = UINT32_MAX;
	int64_t t79 = -1LL;

    t79 = ((x449-x450)/(x451%x452));

    if (t79 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x453 = 24U;
	int16_t x456 = INT16_MIN;
	volatile uint32_t t80 = 24774U;

    t80 = ((x453-x454)/(x455%x456));

    if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x457 = -1LL;
	int8_t x458 = -1;
	static uint64_t x460 = 1878652789514442LLU;
	volatile uint64_t t81 = 679997566155541LLU;

    t81 = ((x457-x458)/(x459%x460));

    if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x461 = -1LL;
	int32_t x462 = INT32_MIN;
	volatile int16_t x463 = -1;
	volatile int16_t x464 = INT16_MIN;
	volatile int64_t t82 = 1865440LL;

    t82 = ((x461-x462)/(x463%x464));

    if (t82 != -2147483647LL) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x465 = UINT16_MAX;
	uint32_t x466 = UINT32_MAX;
	int32_t x467 = 1811216;
	int16_t x468 = INT16_MAX;
	volatile uint32_t t83 = 5580532U;

    t83 = ((x465-x466)/(x467%x468));

    if (t83 != 7U) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x474 = 1;
	volatile uint64_t x475 = 65302228358719301LLU;
	int32_t x476 = 26;
	volatile uint64_t t84 = 123015LLU;

    t84 = ((x473-x474)/(x475%x476));

    if (t84 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x479 = INT32_MIN;
	volatile int32_t x480 = INT32_MAX;
	volatile int32_t t85 = 2;

    t85 = ((x477-x478)/(x479%x480));

    if (t85 != -2) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int8_t x481 = -1;
	int8_t x482 = INT8_MIN;
	int64_t x484 = 2279465474112944709LL;
	uint64_t t86 = 1609278394LLU;

    t86 = ((x481-x482)/(x483%x484));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int16_t x485 = INT16_MIN;
	volatile int8_t x486 = INT8_MIN;
	static uint64_t x487 = UINT64_MAX;
	static int64_t x488 = INT64_MAX;
	volatile uint64_t t87 = 242272427765009084LLU;

    t87 = ((x485-x486)/(x487%x488));

    if (t87 != 18446744073709518976LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x490 = -1;
	int32_t x491 = INT32_MIN;
	int16_t x492 = INT16_MAX;

    t88 = ((x489-x490)/(x491%x492));

    if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint16_t x493 = 0U;
	static int8_t x494 = INT8_MIN;
	uint16_t x495 = UINT16_MAX;
	int16_t x496 = INT16_MAX;
	int32_t t89 = 92634637;

    t89 = ((x493-x494)/(x495%x496));

    if (t89 != 128) { NG(); } else { ; }
	
}

void f90(void) {
    	uint32_t x502 = UINT32_MAX;
	uint32_t x503 = 643963U;
	int8_t x504 = INT8_MAX;

    t90 = ((x501-x502)/(x503%x504));

    if (t90 != 58835168U) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x505 = -1;
	int16_t x506 = INT16_MIN;
	int16_t x507 = -1;
	uint16_t x508 = UINT16_MAX;
	volatile int32_t t91 = 0;

    t91 = ((x505-x506)/(x507%x508));

    if (t91 != -32767) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x509 = 52677;
	volatile int64_t x510 = -1LL;
	int16_t x512 = INT16_MIN;

    t92 = ((x509-x510)/(x511%x512));

    if (t92 != 1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x514 = 383380283LLU;
	uint8_t x515 = 6U;
	volatile int8_t x516 = -4;
	uint64_t t93 = 422291717712561LLU;

    t93 = ((x513-x514)/(x515%x516));

    if (t93 != 9223372036663085666LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x518 = 1;
	volatile uint32_t t94 = 5281U;

    t94 = ((x517-x518)/(x519%x520));

    if (t94 != 31456719U) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x521 = INT32_MIN;
	uint64_t x522 = UINT64_MAX;
	static uint64_t x523 = 3112898LLU;
	volatile uint64_t t95 = 6530100687173LLU;

    t95 = ((x521-x522)/(x523%x524));

    if (t95 != 5925907007413LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x525 = INT8_MAX;
	static int8_t x526 = INT8_MIN;
	static int64_t x528 = -1653LL;

    t96 = ((x525-x526)/(x527%x528));

    if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x529 = -239;
	static volatile uint32_t x531 = 94324044U;
	static volatile int32_t x532 = 1962721;
	uint32_t t97 = 30651U;

    t97 = ((x529-x530)/(x531%x532));

    if (t97 != 37862U) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x537 = 926908001647LL;
	uint8_t x538 = 6U;
	uint16_t x539 = 2386U;
	static int64_t x540 = INT64_MIN;
	static int64_t t98 = 1LL;

    t98 = ((x537-x538)/(x539%x540));

    if (t98 != 388477787LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x548 = INT64_MIN;
	volatile int64_t t99 = 307201189230658LL;

    t99 = ((x545-x546)/(x547%x548));

    if (t99 != -65280LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x549 = -1375;
	uint32_t x550 = 201604U;
	int32_t x551 = INT32_MAX;
	volatile uint32_t x552 = 62898U;

    t100 = ((x549-x550)/(x551%x552));

    if (t100 != 213340U) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x553 = -1;
	static int8_t x554 = INT8_MIN;
	volatile int64_t x555 = INT64_MAX;
	static volatile int64_t t101 = 39553748028914LL;

    t101 = ((x553-x554)/(x555%x556));

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile uint8_t x557 = UINT8_MAX;
	uint8_t x558 = UINT8_MAX;
	int16_t x559 = -1;
	uint16_t x560 = UINT16_MAX;
	volatile int32_t t102 = 2;

    t102 = ((x557-x558)/(x559%x560));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int16_t x561 = 3;
	volatile int32_t x562 = INT32_MAX;
	volatile uint64_t x563 = UINT64_MAX;
	int16_t x564 = INT16_MIN;

    t103 = ((x561-x562)/(x563%x564));

    if (t103 != 562967133749262LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x565 = INT8_MIN;
	int8_t x566 = -1;
	static uint16_t x567 = 249U;
	static int32_t x568 = -2951;
	int32_t t104 = -1;

    t104 = ((x565-x566)/(x567%x568));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x569 = -23897606338497859LL;
	uint16_t x570 = UINT16_MAX;
	uint16_t x571 = UINT16_MAX;
	uint8_t x572 = 7U;

    t105 = ((x569-x570)/(x571%x572));

    if (t105 != -23897606338563394LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x575 = INT8_MAX;

    t106 = ((x573-x574)/(x575%x576));

    if (t106 != 49171) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint32_t x585 = UINT32_MAX;
	int64_t x586 = 1LL;
	int8_t x587 = 5;
	volatile uint32_t x588 = 189872947U;
	int64_t t107 = -5513LL;

    t107 = ((x585-x586)/(x587%x588));

    if (t107 != 858993458LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x589 = 70U;
	int64_t x590 = -208962023319655383LL;
	uint8_t x591 = UINT8_MAX;
	int64_t x592 = INT64_MAX;

    t108 = ((x589-x590)/(x591%x592));

    if (t108 != 819458914979040LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x598 = 45;
	volatile int64_t x599 = -1LL;
	int16_t x600 = INT16_MAX;
	volatile int64_t t109 = -1221541484629LL;

    t109 = ((x597-x598)/(x599%x600));

    if (t109 != 26LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x610 = -84;
	int64_t x611 = -1LL;
	static uint8_t x612 = 92U;
	int64_t t110 = 369LL;

    t110 = ((x609-x610)/(x611%x612));

    if (t110 != 26232607959300LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x614 = -1;
	static int32_t x615 = INT32_MIN;
	int32_t x616 = -10;
	volatile int32_t t111 = 7291;

    t111 = ((x613-x614)/(x615%x616));

    if (t111 != 17) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x617 = -8387158;
	int64_t x618 = -37715609LL;
	volatile int64_t t112 = 4413649644233LL;

    t112 = ((x617-x618)/(x619%x620));

    if (t112 != 11LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x625 = INT16_MIN;
	volatile uint32_t x626 = UINT32_MAX;
	int16_t x627 = -567;
	int16_t x628 = -12310;
	uint32_t t113 = 51913261U;

    t113 = ((x625-x626)/(x627%x628));

    if (t113 != 0U) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x630 = INT64_MIN;
	int64_t x631 = INT64_MIN;
	uint64_t x632 = UINT64_MAX;
	volatile uint64_t t114 = 1005301LLU;

    t114 = ((x629-x630)/(x631%x632));

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x638 = 0;
	volatile uint64_t x639 = 15804LLU;
	int8_t x640 = INT8_MIN;
	static volatile uint64_t t115 = 42272658LLU;

    t115 = ((x637-x638)/(x639%x640));

    if (t115 != 953LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile uint32_t x641 = 44747U;
	int8_t x642 = -4;
	static uint16_t x644 = 32U;
	uint32_t t116 = 1760801619U;

    t116 = ((x641-x642)/(x643%x644));

    if (t116 != 22375U) { NG(); } else { ; }
	
}

void f117(void) {
    	static int16_t x645 = INT16_MIN;
	static uint64_t x646 = UINT64_MAX;
	uint16_t x647 = 292U;

    t117 = ((x645-x646)/(x647%x648));

    if (t117 != 63173781074347667LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int16_t x650 = -54;
	int8_t x651 = -4;
	uint32_t x652 = 129175U;
	volatile uint32_t t118 = 2913043U;

    t118 = ((x649-x650)/(x651%x652));

    if (t118 != 0U) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x653 = -64;
	int32_t x654 = INT32_MIN;
	uint32_t x656 = 1045622U;

    t119 = ((x653-x654)/(x655%x656));

    if (t119 != 3592U) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x681 = -10341033515LL;
	uint64_t x682 = 200618819040LLU;
	volatile int32_t x684 = INT32_MAX;
	uint64_t t120 = 7934520602973LLU;

    t120 = ((x681-x682)/(x683%x684));

    if (t120 != 18446743862749699061LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x685 = -1LL;
	static int16_t x688 = INT16_MIN;
	int64_t t121 = -1007284641738332108LL;

    t121 = ((x685-x686)/(x687%x688));

    if (t121 != 0LL) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x689 = 30969U;
	uint32_t x691 = 3U;
	static int8_t x692 = INT8_MIN;
	uint32_t t122 = 1108U;

    t122 = ((x689-x690)/(x691%x692));

    if (t122 != 1431655166U) { NG(); } else { ; }
	
}

void f123(void) {
    	static int8_t x698 = -1;
	int16_t x699 = INT16_MIN;
	int64_t x700 = 152701879LL;
	volatile int64_t t123 = -8103486270018968LL;

    t123 = ((x697-x698)/(x699%x700));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x701 = INT64_MAX;
	volatile int8_t x702 = INT8_MAX;
	uint64_t x703 = 68823580015910843LLU;
	int64_t x704 = -1LL;
	static volatile uint64_t t124 = 343LLU;

    t124 = ((x701-x702)/(x703%x704));

    if (t124 != 134LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x705 = -1LL;
	uint16_t x706 = 9U;
	int8_t x707 = INT8_MIN;
	int32_t x708 = -1229024;
	static int64_t t125 = 64058931302LL;

    t125 = ((x705-x706)/(x707%x708));

    if (t125 != 0LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x709 = -1;
	uint16_t x710 = 2516U;
	static volatile int16_t x711 = INT16_MIN;

    t126 = ((x709-x710)/(x711%x712));

    if (t126 != 1258) { NG(); } else { ; }
	
}

void f127(void) {
    	static int32_t x713 = 1;
	uint32_t x714 = 1006658386U;
	int16_t x715 = -3;
	volatile uint16_t x716 = UINT16_MAX;
	volatile uint32_t t127 = 165U;

    t127 = ((x713-x714)/(x715%x716));

    if (t127 != 0U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x721 = 28U;
	static int16_t x723 = -5611;
	static int64_t x724 = -224777224471085351LL;
	int64_t t128 = -1115LL;

    t128 = ((x721-x722)/(x723%x724));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x731 = -12172272;
	int16_t x732 = INT16_MAX;
	volatile int64_t t129 = -1LL;

    t129 = ((x729-x730)/(x731%x732));

    if (t129 != -434350863179018LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x746 = 4010326447000779LLU;
	volatile int16_t x747 = -1;
	int32_t x748 = INT32_MIN;
	uint64_t t130 = 127030LLU;

    t130 = ((x745-x746)/(x747%x748));

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x749 = INT64_MIN;
	uint64_t x750 = UINT64_MAX;
	volatile uint64_t x752 = 395794881057327753LLU;
	uint64_t t131 = 10967642738LLU;

    t131 = ((x749-x750)/(x751%x752));

    if (t131 != 2147483648LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int8_t x754 = INT8_MAX;
	int32_t x755 = INT32_MIN;
	uint32_t x756 = 27250U;
	static uint32_t t132 = 0U;

    t132 = ((x753-x754)/(x755%x756));

    if (t132 != 106585U) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x757 = -1;
	int64_t x758 = -162268LL;
	int16_t x759 = 445;
	int16_t x760 = INT16_MAX;
	static int64_t t133 = -59974LL;

    t133 = ((x757-x758)/(x759%x760));

    if (t133 != 364LL) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x761 = UINT32_MAX;
	uint16_t x762 = 664U;
	uint8_t x763 = 14U;
	volatile int8_t x764 = -18;

    t134 = ((x761-x762)/(x763%x764));

    if (t134 != 306783330U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x773 = 91U;
	uint8_t x774 = 26U;
	int64_t x775 = -439270313568456LL;
	static volatile uint32_t x776 = 54215843U;
	static volatile int64_t t135 = 32746LL;

    t135 = ((x773-x774)/(x775%x776));

    if (t135 != 0LL) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int16_t x793 = INT16_MIN;
	int64_t x795 = 8165376LL;
	int16_t x796 = -702;
	uint64_t t136 = 5LLU;

    t136 = ((x793-x794)/(x795%x796));

    if (t136 != 44557352835047146LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x798 = INT8_MIN;
	uint32_t x799 = UINT32_MAX;
	static uint8_t x800 = 6U;

    t137 = ((x797-x798)/(x799%x800));

    if (t137 != 1080564828U) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x802 = INT8_MAX;
	static uint32_t x804 = 95U;

    t138 = ((x801-x802)/(x803%x804));

    if (t138 != 2147483585U) { NG(); } else { ; }
	
}

void f139(void) {
    	uint64_t x805 = UINT64_MAX;
	int64_t x806 = INT64_MIN;
	uint32_t x807 = 564378U;
	int8_t x808 = -1;
	volatile uint64_t t139 = 167051554LLU;

    t139 = ((x805-x806)/(x807%x808));

    if (t139 != 16342543537938LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	uint8_t x809 = 90U;
	uint16_t x810 = 3364U;
	int8_t x811 = -1;
	uint64_t x812 = 436177314763656985LLU;
	volatile uint64_t t140 = 4934408LLU;

    t140 = ((x809-x810)/(x811%x812));

    if (t140 != 144LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x813 = 13159;
	volatile int8_t x814 = INT8_MAX;
	volatile int8_t x815 = -29;
	int8_t x816 = INT8_MIN;
	volatile int32_t t141 = -108;

    t141 = ((x813-x814)/(x815%x816));

    if (t141 != -449) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x817 = -1;
	int64_t x818 = INT64_MAX;
	static int64_t x819 = INT64_MIN;
	volatile int64_t x820 = -1785961092903727876LL;
	static volatile int64_t t142 = -193411097LL;

    t142 = ((x817-x818)/(x819%x820));

    if (t142 != 31LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int64_t x825 = -12350095LL;
	static uint64_t x828 = UINT64_MAX;

    t143 = ((x825-x826)/(x827%x828));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int64_t x837 = -1LL;
	static int8_t x838 = INT8_MIN;
	volatile int8_t x839 = INT8_MIN;
	int64_t t144 = -8LL;

    t144 = ((x837-x838)/(x839%x840));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x841 = 1U;
	int8_t x842 = INT8_MAX;
	volatile int32_t x843 = INT32_MIN;
	static volatile int32_t x844 = INT32_MAX;
	int32_t t145 = 1017900758;

    t145 = ((x841-x842)/(x843%x844));

    if (t145 != 126) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x853 = INT32_MAX;
	volatile int16_t x854 = INT16_MAX;
	uint32_t x855 = 114146U;
	uint16_t x856 = UINT16_MAX;
	uint32_t t146 = 92U;

    t146 = ((x853-x854)/(x855%x856));

    if (t146 != 44176U) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x857 = 122458U;
	volatile int32_t x858 = -1;
	uint8_t x860 = UINT8_MAX;
	uint32_t t147 = 14814U;

    t147 = ((x857-x858)/(x859%x860));

    if (t147 != 746U) { NG(); } else { ; }
	
}

void f148(void) {
    	static uint64_t x861 = 10705LLU;
	int32_t x862 = INT32_MIN;
	static int8_t x863 = 6;
	static int32_t x864 = -1877894;

    t148 = ((x861-x862)/(x863%x864));

    if (t148 != 357915725LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int16_t x865 = INT16_MIN;
	uint16_t x867 = 144U;
	static uint32_t x868 = UINT32_MAX;
	int64_t t149 = 2608170LL;

    t149 = ((x865-x866)/(x867%x868));

    if (t149 != 64051194700380160LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x877 = -1;
	uint64_t x878 = UINT64_MAX;
	int32_t x879 = INT32_MIN;
	volatile uint64_t t150 = 1064306LLU;

    t150 = ((x877-x878)/(x879%x880));

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x881 = 57;
	int64_t x882 = -1LL;
	int64_t x883 = INT64_MIN;
	uint64_t t151 = 111188854LLU;

    t151 = ((x881-x882)/(x883%x884));

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x885 = 7044U;
	static int8_t x886 = INT8_MIN;
	int8_t x887 = INT8_MAX;
	int64_t x888 = 914791514257039353LL;
	int64_t t152 = -23403246059730LL;

    t152 = ((x885-x886)/(x887%x888));

    if (t152 != 56LL) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint64_t x889 = 751013363334983834LLU;
	int16_t x890 = INT16_MIN;
	volatile int8_t x892 = INT8_MIN;
	static volatile uint64_t t153 = 260625LLU;

    t153 = ((x889-x890)/(x891%x892));

    if (t153 != 372LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x893 = -1;
	int64_t x894 = -1LL;
	static int64_t x895 = -1736016068231LL;
	volatile uint64_t t154 = 2LLU;

    t154 = ((x893-x894)/(x895%x896));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x897 = INT32_MIN;
	static int64_t x898 = 63873995985LL;
	int64_t x900 = INT64_MIN;
	int64_t t155 = 6LL;

    t155 = ((x897-x898)/(x899%x900));

    if (t155 != -240954305LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x905 = -1;
	static int64_t x906 = -4859LL;
	uint32_t x907 = 1U;
	uint8_t x908 = 22U;
	int64_t t156 = -13658551LL;

    t156 = ((x905-x906)/(x907%x908));

    if (t156 != 4858LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int32_t x917 = -1;
	uint16_t x920 = UINT16_MAX;
	int64_t t157 = 181378LL;

    t157 = ((x917-x918)/(x919%x920));

    if (t157 != 32768LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x925 = INT16_MIN;
	uint8_t x926 = UINT8_MAX;
	int8_t x927 = INT8_MIN;
	uint16_t x928 = 6956U;
	int32_t t158 = -87072;

    t158 = ((x925-x926)/(x927%x928));

    if (t158 != 257) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x933 = INT64_MAX;
	volatile uint8_t x934 = 20U;
	static int64_t x935 = 4341LL;

    t159 = ((x933-x934)/(x935%x936));

    if (t159 != 2124711365320151LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x941 = INT8_MIN;
	int64_t x942 = -1LL;
	uint32_t x944 = UINT32_MAX;
	int64_t t160 = 1010010737244719LL;

    t160 = ((x941-x942)/(x943%x944));

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x945 = INT16_MAX;
	uint32_t x947 = 206042186U;
	int16_t x948 = INT16_MIN;

    t161 = ((x945-x946)/(x947%x948));

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x954 = UINT32_MAX;
	int64_t x955 = INT64_MIN;
	static int64_t t162 = 8242245672LL;

    t162 = ((x953-x954)/(x955%x956));

    if (t162 != -8LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x961 = -359430LL;
	uint16_t x962 = 9U;
	int8_t x963 = INT8_MIN;
	int64_t t163 = -56LL;

    t163 = ((x961-x962)/(x963%x964));

    if (t163 != 2808LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile uint64_t x965 = 8118000191134033756LLU;
	int32_t x966 = INT32_MIN;
	static int32_t x967 = 4047104;
	static volatile int32_t x968 = INT32_MIN;
	static uint64_t t164 = 1442110668227LLU;

    t164 = ((x965-x966)/(x967%x968));

    if (t164 != 2005878819343LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x973 = -83;
	static int16_t x974 = -7768;
	int32_t x975 = INT32_MIN;
	uint32_t x976 = 1964172517U;

    t165 = ((x973-x974)/(x975%x976));

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x977 = -1;
	int8_t x978 = -39;
	volatile int64_t x979 = INT64_MAX;
	int64_t x980 = 14828371418LL;
	static int64_t t166 = 157098145477LL;

    t166 = ((x977-x978)/(x979%x980));

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x981 = INT32_MIN;
	int64_t x982 = -2762322251515278LL;
	int64_t t167 = 564166929591860446LL;

    t167 = ((x981-x982)/(x983%x984));

    if (t167 != 184154673602108LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int16_t x997 = -1;
	static int16_t x998 = 6;
	int64_t x999 = INT64_MIN;
	volatile int64_t t168 = -8226418191377LL;

    t168 = ((x997-x998)/(x999%x1000));

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int8_t x1005 = INT8_MIN;
	int16_t x1006 = -3;
	uint16_t x1007 = 1U;
	uint16_t x1008 = 34U;

    t169 = ((x1005-x1006)/(x1007%x1008));

    if (t169 != -125) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x1009 = INT32_MAX;
	uint8_t x1010 = 1U;
	static int8_t x1011 = INT8_MIN;
	uint16_t x1012 = 23U;
	static int32_t t170 = 28223;

    t170 = ((x1009-x1010)/(x1011%x1012));

    if (t170 != -165191049) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x1013 = 2315122622202838LLU;
	int32_t x1014 = INT32_MIN;
	uint16_t x1016 = 24508U;
	volatile uint64_t t171 = 5686509789746429LLU;

    t171 = ((x1013-x1014)/(x1015%x1016));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x1017 = INT32_MIN;
	uint32_t x1018 = 12582200U;
	uint32_t x1019 = 4620031U;
	uint32_t x1020 = 47U;
	static volatile uint32_t t172 = 47058161U;

    t172 = ((x1017-x1018)/(x1019%x1020));

    if (t172 != 85396057U) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x1029 = 5;
	int64_t x1030 = -1LL;
	int64_t x1031 = 20399864326997LL;
	static int64_t t173 = 4839043636208LL;

    t173 = ((x1029-x1030)/(x1031%x1032));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x1041 = 2U;
	volatile uint8_t x1042 = UINT8_MAX;
	int16_t x1044 = -4816;

    t174 = ((x1041-x1042)/(x1043%x1044));

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1046 = -9513103146779LL;
	static int16_t x1047 = INT16_MIN;

    t175 = ((x1045-x1046)/(x1047%x1048));

    if (t175 != -9517398114074LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1049 = INT8_MIN;
	int64_t x1050 = -915LL;
	static int8_t x1051 = INT8_MIN;
	static int16_t x1052 = -5888;

    t176 = ((x1049-x1050)/(x1051%x1052));

    if (t176 != -6LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x1057 = 2348591LLU;
	static uint16_t x1058 = UINT16_MAX;
	int32_t x1059 = INT32_MIN;
	uint64_t t177 = 1351444509479811LLU;

    t177 = ((x1057-x1058)/(x1059%x1060));

    if (t177 != 0LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x1065 = -1LL;
	uint16_t x1067 = 3857U;
	uint32_t x1068 = UINT32_MAX;
	int64_t t178 = -3663043092LL;

    t178 = ((x1065-x1066)/(x1067%x1068));

    if (t178 != 556775LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint8_t x1069 = 114U;
	int8_t x1070 = INT8_MAX;
	uint8_t x1071 = 1U;
	int64_t x1072 = INT64_MIN;
	volatile int64_t t179 = 63183725128LL;

    t179 = ((x1069-x1070)/(x1071%x1072));

    if (t179 != -13LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x1073 = 6629U;
	uint16_t x1074 = UINT16_MAX;
	volatile int32_t x1075 = INT32_MIN;
	int64_t x1076 = INT64_MIN;
	int64_t t180 = 106447LL;

    t180 = ((x1073-x1074)/(x1075%x1076));

    if (t180 != 0LL) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile uint16_t x1077 = 8041U;
	uint32_t x1078 = 325U;
	uint8_t x1079 = UINT8_MAX;
	volatile uint32_t t181 = 3854U;

    t181 = ((x1077-x1078)/(x1079%x1080));

    if (t181 != 30U) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x1082 = 550U;
	uint64_t x1084 = 89169559087LLU;
	uint64_t t182 = 6512555LLU;

    t182 = ((x1081-x1082)/(x1083%x1084));

    if (t182 != 60LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x1089 = 327197;
	static int32_t x1090 = INT32_MAX;
	static int64_t x1091 = INT64_MAX;
	volatile uint32_t x1092 = UINT32_MAX;
	int64_t t183 = 0LL;

    t183 = ((x1089-x1090)/(x1091%x1092));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x1097 = -1LL;
	int16_t x1098 = -230;
	int8_t x1099 = -1;
	uint16_t x1100 = 3627U;
	int64_t t184 = 1685480385552830660LL;

    t184 = ((x1097-x1098)/(x1099%x1100));

    if (t184 != -229LL) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint8_t x1106 = 1U;
	uint64_t x1107 = UINT64_MAX;
	static int16_t x1108 = INT16_MAX;
	uint64_t t185 = 1671LLU;

    t185 = ((x1105-x1106)/(x1107%x1108));

    if (t185 != 4368LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x1113 = -917553920619048LL;
	uint64_t x1115 = UINT64_MAX;
	int64_t x1116 = 14859684LL;
	volatile uint64_t t186 = 39LLU;

    t186 = ((x1113-x1114)/(x1115%x1116));

    if (t186 != 2871393118162LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1117 = UINT64_MAX;
	int8_t x1119 = INT8_MIN;
	int64_t x1120 = 24266971652125LL;

    t187 = ((x1117-x1118)/(x1119%x1120));

    if (t187 != 0LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x1139 = INT8_MIN;

    t188 = ((x1137-x1138)/(x1139%x1140));

    if (t188 != -72057594037927935LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x1146 = 1;
	uint32_t x1147 = 92914694U;
	static uint16_t x1148 = 19U;
	uint32_t t189 = 485036U;

    t189 = ((x1145-x1146)/(x1147%x1148));

    if (t189 != 4294934527U) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x1149 = 10021177U;
	int8_t x1150 = INT8_MAX;
	volatile int16_t x1151 = INT16_MIN;
	volatile uint64_t x1152 = 136312435LLU;

    t190 = ((x1149-x1150)/(x1151%x1152));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x1161 = 46269020888510LLU;
	int64_t x1162 = 15LL;
	static int32_t x1163 = -44459;
	uint64_t x1164 = UINT64_MAX;
	volatile uint64_t t191 = 799972997363210306LLU;

    t191 = ((x1161-x1162)/(x1163%x1164));

    if (t191 != 0LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x1165 = 77534209226098334LL;
	uint16_t x1166 = 8U;
	uint8_t x1168 = UINT8_MAX;
	int64_t t192 = -2LL;

    t192 = ((x1165-x1166)/(x1167%x1168));

    if (t192 != 2982084970234551LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1169 = -26116782283398LL;
	volatile int16_t x1170 = INT16_MIN;
	int16_t x1171 = -448;
	int64_t x1172 = -8096431937485706LL;

    t193 = ((x1169-x1170)/(x1171%x1172));

    if (t193 != 58296388952LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int8_t x1173 = INT8_MAX;
	uint16_t x1174 = 336U;
	int64_t x1175 = INT64_MAX;
	volatile uint64_t x1176 = UINT64_MAX;
	uint64_t t194 = 62453LLU;

    t194 = ((x1173-x1174)/(x1175%x1176));

    if (t194 != 1LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile int32_t x1177 = INT32_MAX;
	volatile int16_t x1178 = INT16_MAX;
	int8_t x1179 = INT8_MIN;
	int64_t x1180 = -172951LL;
	int64_t t195 = 29293LL;

    t195 = ((x1177-x1178)/(x1179%x1180));

    if (t195 != -16776960LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x1182 = 27U;
	static int16_t x1184 = -1;
	uint64_t t196 = 165594439380LLU;

    t196 = ((x1181-x1182)/(x1183%x1184));

    if (t196 != 36398027LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x1185 = INT32_MIN;
	static int8_t x1186 = INT8_MIN;
	volatile int8_t x1187 = 1;
	volatile int16_t x1188 = -8;

    t197 = ((x1185-x1186)/(x1187%x1188));

    if (t197 != -2147483520) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1194 = INT16_MAX;
	int16_t x1195 = -37;
	int64_t x1196 = INT64_MAX;

    t198 = ((x1193-x1194)/(x1195%x1196));

    if (t198 != 889LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1197 = -1;
	volatile uint8_t x1198 = UINT8_MAX;
	int64_t t199 = 657869LL;

    t199 = ((x1197-x1198)/(x1199%x1200));

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

