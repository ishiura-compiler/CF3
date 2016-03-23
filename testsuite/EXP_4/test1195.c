
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

volatile int16_t x1 = -1;
int8_t x6 = INT8_MAX;
int8_t x9 = INT8_MAX;
int8_t x15 = 2;
int32_t x20 = INT32_MIN;
uint32_t x40 = UINT32_MAX;
volatile int32_t x49 = -1;
uint16_t x61 = 0U;
int32_t t11 = 6;
uint32_t x69 = 66U;
static int8_t x74 = -3;
volatile uint64_t x88 = 928639660587787LLU;
int8_t x92 = INT8_MIN;
int32_t t21 = 170721;
static uint64_t x117 = 3303779LLU;
uint16_t x125 = 1621U;
static volatile int32_t x140 = 1479808;
int32_t x145 = -1;
volatile uint16_t x148 = UINT16_MAX;
static int16_t x157 = INT16_MAX;
static int32_t x161 = INT32_MAX;
int32_t x167 = INT32_MIN;
volatile int32_t t32 = -327124855;
volatile uint8_t x170 = UINT8_MAX;
int64_t t33 = 594LL;
static volatile int8_t x174 = INT8_MIN;
int32_t x179 = INT32_MIN;
int64_t x185 = INT64_MIN;
volatile int32_t x186 = INT32_MAX;
volatile int8_t x188 = 2;
int64_t x190 = 6878779LL;
int64_t t37 = -19360991985437448LL;
uint64_t x198 = UINT64_MAX;
uint32_t x202 = UINT32_MAX;
int16_t x203 = -1;
uint64_t x211 = UINT64_MAX;
int64_t x212 = INT64_MIN;
int32_t t42 = -31;
uint64_t x215 = 32552274LLU;
int64_t x218 = -1LL;
uint32_t x222 = 33143U;
int32_t x226 = -1;
uint16_t x230 = UINT16_MAX;
int32_t t47 = -28;
static uint32_t x244 = 6U;
int16_t x251 = INT16_MIN;
int64_t x253 = -1LL;
int16_t x255 = 8;
int32_t x256 = -1;
uint32_t t52 = 240040U;
static int64_t x261 = -3380199LL;
int8_t x282 = INT8_MIN;
int16_t x292 = INT16_MIN;
volatile uint32_t t58 = 1843U;
volatile int64_t t59 = 47493LL;
uint8_t x300 = 1U;
volatile uint32_t x303 = 62806U;
volatile uint16_t x304 = 1U;
int64_t x308 = INT64_MIN;
int32_t x312 = -1;
uint32_t t63 = 40U;
static volatile int64_t x320 = -1038800736974917328LL;
static int32_t x333 = INT32_MIN;
volatile int32_t t69 = -41;
int64_t x344 = INT64_MAX;
uint32_t x345 = 28965575U;
int64_t x347 = -3246638443LL;
int16_t x351 = 3;
int8_t x352 = INT8_MIN;
int64_t x353 = INT64_MAX;
int16_t x358 = INT16_MIN;
volatile int64_t t76 = -121658LL;
int8_t x378 = -3;
volatile int64_t x381 = INT64_MAX;
int64_t t79 = -576003834023174365LL;
volatile int64_t x386 = 7245134667LL;
static volatile int64_t t80 = 386701217791534061LL;
int16_t x397 = INT16_MIN;
int32_t x410 = INT32_MAX;
uint64_t x412 = 280005LLU;
static volatile int32_t t85 = 3080;
uint64_t t86 = 25299LLU;
int64_t x417 = -1LL;
int16_t x420 = INT16_MIN;
int8_t x439 = -7;
volatile int32_t x443 = -1;
uint8_t x463 = 16U;
volatile uint32_t t96 = 1814721U;
static volatile int16_t x470 = INT16_MIN;
static volatile int32_t t97 = -13791;
int32_t x487 = INT32_MIN;
int64_t x491 = -6881641417LL;
int32_t x494 = 86670;
int8_t x499 = INT8_MIN;
uint16_t x502 = 12U;
uint32_t x504 = 4648U;
uint64_t x510 = UINT64_MAX;
int32_t x513 = -72;
int8_t x515 = -1;
volatile int64_t t106 = 32LL;
volatile uint16_t x531 = UINT16_MAX;
uint16_t x542 = 4U;
int16_t x544 = INT16_MAX;
int64_t x548 = INT64_MAX;
static int16_t x556 = 117;
static volatile uint64_t x557 = 476835238LLU;
int16_t x559 = 7;
int8_t x560 = 29;
uint64_t t116 = 2549356886LLU;
volatile int16_t x578 = INT16_MAX;
int32_t x580 = -1;
int32_t x584 = INT32_MIN;
int32_t x590 = -1;
uint32_t t122 = 636U;
uint32_t x603 = 18165073U;
int16_t x609 = -1;
static volatile int64_t x610 = -1LL;
int16_t x613 = INT16_MIN;
uint16_t x617 = 6538U;
static int32_t x624 = INT32_MIN;
volatile int64_t x626 = -1LL;
int32_t x637 = INT32_MIN;
static uint16_t x642 = UINT16_MAX;
int16_t x654 = INT16_MIN;
int32_t x659 = INT32_MIN;
static uint64_t x660 = 109290760068548614LLU;
static volatile int64_t x664 = -128LL;
volatile int32_t t134 = 93074074;
uint32_t x683 = 288189U;
volatile int32_t x684 = -1;
static int16_t x687 = INT16_MAX;
volatile int32_t t139 = 464;
int8_t x698 = INT8_MAX;
int32_t t142 = 921427714;
int32_t x711 = INT32_MIN;
static volatile int32_t x719 = 1;
static int16_t x720 = INT16_MIN;
volatile int32_t x725 = INT32_MIN;
int8_t x726 = INT8_MIN;
int16_t x730 = -258;
static volatile int32_t t148 = -36;
uint64_t x740 = 379LLU;
int64_t x747 = INT64_MIN;
static int32_t t153 = 7;
int64_t x757 = INT64_MIN;
volatile int64_t x762 = 4108315241341LL;
uint64_t x766 = 178185871939786120LLU;
int64_t x767 = INT64_MIN;
volatile int16_t x770 = INT16_MIN;
static uint64_t x775 = 31412959LLU;
int64_t x778 = -7290637LL;
uint64_t x782 = 21412960540645163LLU;
uint64_t t160 = 972LLU;
static uint32_t x785 = 81137663U;
int8_t x787 = -1;
volatile uint32_t x801 = UINT32_MAX;
volatile uint64_t x802 = 0LLU;
uint64_t t164 = 1372LLU;
volatile int32_t t165 = 1;
volatile uint64_t x815 = 66462629LLU;
volatile int32_t x820 = 34022396;
static int64_t t168 = -2932LL;
int64_t x830 = -1LL;
int16_t x833 = 15;
uint16_t x839 = 234U;
static uint16_t x847 = UINT16_MAX;
volatile int64_t x850 = 514874473833770LL;
int64_t t176 = 55474670878593987LL;
int64_t x862 = -1LL;
static volatile uint16_t x871 = UINT16_MAX;
uint32_t x879 = 13U;
static volatile int32_t t180 = -45710346;
static int32_t x883 = INT32_MAX;
int8_t x892 = INT8_MIN;
uint32_t t183 = 19774188U;
static uint8_t x897 = UINT8_MAX;
int64_t x899 = INT64_MIN;
int8_t x900 = -1;
int32_t x907 = 3738;
uint64_t t189 = 940871LLU;
static int8_t x952 = -27;
int64_t x959 = -1LL;
uint16_t x960 = UINT16_MAX;
int8_t x970 = INT8_MAX;
static int64_t x975 = 11598LL;


void f0(void) {
    	int16_t x2 = INT16_MAX;
	uint32_t x3 = 0U;
	int32_t x4 = INT32_MIN;
	int32_t t0 = 175336781;

    t0 = (x1%(x2-(x3!=x4)));

    if (t0 != -1) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x5 = INT8_MIN;
	volatile int32_t x7 = -1;
	int8_t x8 = INT8_MIN;
	static volatile int32_t t1 = 12;

    t1 = (x5%(x6-(x7!=x8)));

    if (t1 != -2) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = INT16_MIN;
	uint32_t x11 = UINT32_MAX;
	int32_t x12 = INT32_MAX;
	int32_t t2 = 250471;

    t2 = (x9%(x10-(x11!=x12)));

    if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
    	uint8_t x13 = 8U;
	uint64_t x14 = UINT64_MAX;
	uint16_t x16 = 1U;
	volatile uint64_t t3 = 8271LLU;

    t3 = (x13%(x14-(x15!=x16)));

    if (t3 != 8LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x17 = 0U;
	static volatile uint32_t x18 = 1227452U;
	int8_t x19 = -6;
	uint32_t t4 = 3639U;

    t4 = (x17%(x18-(x19!=x20)));

    if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int8_t x25 = INT8_MAX;
	static int8_t x26 = INT8_MIN;
	static int16_t x27 = -307;
	int8_t x28 = -1;
	int32_t t5 = 501917;

    t5 = (x25%(x26-(x27!=x28)));

    if (t5 != 127) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int32_t x29 = -1367659;
	volatile int8_t x30 = -1;
	uint16_t x31 = 0U;
	static int64_t x32 = INT64_MAX;
	int32_t t6 = 743794;

    t6 = (x29%(x30-(x31!=x32)));

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x37 = 14230472LLU;
	volatile int8_t x38 = INT8_MAX;
	uint32_t x39 = UINT32_MAX;
	volatile uint64_t t7 = 1670048LLU;

    t7 = (x37%(x38-(x39!=x40)));

    if (t7 != 122LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x50 = 16U;
	static volatile int32_t x51 = -1;
	volatile uint8_t x52 = 3U;
	volatile int32_t t8 = 931107;

    t8 = (x49%(x50-(x51!=x52)));

    if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x53 = -1;
	volatile int8_t x54 = 4;
	int16_t x55 = -1;
	int32_t x56 = 114;
	int32_t t9 = 688378952;

    t9 = (x53%(x54-(x55!=x56)));

    if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x57 = -21647904;
	int32_t x58 = INT32_MAX;
	int64_t x59 = INT64_MAX;
	int64_t x60 = -1LL;
	int32_t t10 = -311730;

    t10 = (x57%(x58-(x59!=x60)));

    if (t10 != -21647904) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x62 = INT32_MAX;
	int8_t x63 = INT8_MIN;
	int32_t x64 = -4295215;

    t11 = (x61%(x62-(x63!=x64)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x65 = -20514126278635LL;
	int32_t x66 = INT32_MIN;
	int16_t x67 = INT16_MIN;
	int16_t x68 = INT16_MIN;
	int64_t t12 = 1006LL;

    t12 = (x65%(x66-(x67!=x68)));

    if (t12 != -1362472939LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x70 = 13385U;
	int64_t x71 = -1LL;
	uint8_t x72 = 0U;
	volatile uint32_t t13 = 75U;

    t13 = (x69%(x70-(x71!=x72)));

    if (t13 != 66U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x73 = 5U;
	uint64_t x75 = 138947992829724LLU;
	int32_t x76 = INT32_MAX;
	int32_t t14 = -3079;

    t14 = (x73%(x74-(x75!=x76)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x77 = 7U;
	uint8_t x78 = 14U;
	static uint64_t x79 = 17LLU;
	volatile int8_t x80 = -1;
	static int32_t t15 = -1109430;

    t15 = (x77%(x78-(x79!=x80)));

    if (t15 != 7) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint8_t x81 = 27U;
	int32_t x82 = 269341;
	volatile int16_t x83 = -1;
	int64_t x84 = -106652488LL;
	volatile int32_t t16 = -109;

    t16 = (x81%(x82-(x83!=x84)));

    if (t16 != 27) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x85 = -7;
	volatile int8_t x86 = INT8_MIN;
	volatile int16_t x87 = INT16_MAX;
	static int32_t t17 = -2611;

    t17 = (x85%(x86-(x87!=x88)));

    if (t17 != -7) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x89 = 13U;
	static uint16_t x90 = 3100U;
	int8_t x91 = INT8_MIN;
	static volatile int32_t t18 = 0;

    t18 = (x89%(x90-(x91!=x92)));

    if (t18 != 13) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x97 = -1;
	int32_t x98 = 15;
	int16_t x99 = INT16_MIN;
	volatile int16_t x100 = -10;
	volatile int32_t t19 = 0;

    t19 = (x97%(x98-(x99!=x100)));

    if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
    	static volatile uint16_t x105 = 6U;
	static int64_t x106 = 11LL;
	uint8_t x107 = UINT8_MAX;
	int32_t x108 = INT32_MIN;
	volatile int64_t t20 = 578771801LL;

    t20 = (x105%(x106-(x107!=x108)));

    if (t20 != 6LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x113 = 57U;
	int32_t x114 = -2439172;
	volatile uint64_t x115 = UINT64_MAX;
	int64_t x116 = INT64_MIN;

    t21 = (x113%(x114-(x115!=x116)));

    if (t21 != 57) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x118 = -560450;
	static int8_t x119 = -1;
	static int16_t x120 = -1;
	uint64_t t22 = 95394284LLU;

    t22 = (x117%(x118-(x119!=x120)));

    if (t22 != 3303779LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint8_t x126 = 2U;
	int8_t x127 = 1;
	int32_t x128 = INT32_MAX;
	int32_t t23 = -23683146;

    t23 = (x125%(x126-(x127!=x128)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint16_t x129 = UINT16_MAX;
	uint64_t x130 = 7322691053LLU;
	volatile uint64_t x131 = UINT64_MAX;
	uint64_t x132 = 110790LLU;
	static uint64_t t24 = 977869654347158LLU;

    t24 = (x129%(x130-(x131!=x132)));

    if (t24 != 65535LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x133 = UINT64_MAX;
	static int64_t x134 = -1LL;
	static int64_t x135 = -2080933LL;
	int64_t x136 = INT64_MAX;
	uint64_t t25 = 8116239090727LLU;

    t25 = (x133%(x134-(x135!=x136)));

    if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x137 = 0;
	int16_t x138 = INT16_MIN;
	int16_t x139 = INT16_MIN;
	int32_t t26 = 1;

    t26 = (x137%(x138-(x139!=x140)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x141 = INT16_MIN;
	int16_t x142 = 872;
	uint16_t x143 = 487U;
	uint64_t x144 = 1585652LLU;
	volatile int32_t t27 = -88;

    t27 = (x141%(x142-(x143!=x144)));

    if (t27 != -541) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint64_t x146 = 288623795263LLU;
	static int16_t x147 = 3;
	static volatile uint64_t t28 = 262391573LLU;

    t28 = (x145%(x146-(x147!=x148)));

    if (t28 != 139592617971LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static int8_t x153 = INT8_MIN;
	int32_t x154 = 76;
	volatile int8_t x155 = INT8_MIN;
	int8_t x156 = INT8_MIN;
	int32_t t29 = 499283;

    t29 = (x153%(x154-(x155!=x156)));

    if (t29 != -52) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint16_t x158 = 4U;
	static int16_t x159 = INT16_MAX;
	int64_t x160 = -1LL;
	volatile int32_t t30 = -3;

    t30 = (x157%(x158-(x159!=x160)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x162 = 904U;
	int32_t x163 = -4128;
	int64_t x164 = -1LL;
	volatile int32_t t31 = 117019221;

    t31 = (x161%(x162-(x163!=x164)));

    if (t31 != 652) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x165 = INT32_MAX;
	volatile int8_t x166 = INT8_MAX;
	volatile uint16_t x168 = 218U;

    t32 = (x165%(x166-(x167!=x168)));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x169 = -66162327766LL;
	int8_t x171 = INT8_MIN;
	volatile int16_t x172 = 301;

    t33 = (x169%(x170-(x171!=x172)));

    if (t33 != -96LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x173 = INT32_MAX;
	volatile int64_t x175 = INT64_MAX;
	int8_t x176 = INT8_MIN;
	volatile int32_t t34 = 13182;

    t34 = (x173%(x174-(x175!=x176)));

    if (t34 != 7) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int8_t x177 = INT8_MAX;
	uint16_t x178 = 1945U;
	static volatile uint32_t x180 = 1926294U;
	int32_t t35 = -915;

    t35 = (x177%(x178-(x179!=x180)));

    if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x187 = 51U;
	volatile int64_t t36 = -4319LL;

    t36 = (x185%(x186-(x187!=x188)));

    if (t36 != -8LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x189 = INT8_MAX;
	uint8_t x191 = 67U;
	int64_t x192 = INT64_MAX;

    t37 = (x189%(x190-(x191!=x192)));

    if (t37 != 127LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x193 = INT16_MIN;
	static uint64_t x194 = UINT64_MAX;
	volatile int16_t x195 = -990;
	uint8_t x196 = UINT8_MAX;
	uint64_t t38 = 1346121002LLU;

    t38 = (x193%(x194-(x195!=x196)));

    if (t38 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x197 = INT8_MIN;
	volatile int8_t x199 = INT8_MIN;
	volatile int16_t x200 = INT16_MIN;
	volatile uint64_t t39 = 207305326080358759LLU;

    t39 = (x197%(x198-(x199!=x200)));

    if (t39 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static volatile uint64_t x201 = 40273907402735481LLU;
	int32_t x204 = 652251;
	volatile uint64_t t40 = 5093943074LLU;

    t40 = (x201%(x202-(x203!=x204)));

    if (t40 != 3381864775LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x205 = UINT16_MAX;
	int64_t x206 = 2612046045166LL;
	volatile uint8_t x207 = UINT8_MAX;
	int16_t x208 = INT16_MIN;
	static volatile int64_t t41 = -278399871462324LL;

    t41 = (x205%(x206-(x207!=x208)));

    if (t41 != 65535LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x209 = INT16_MIN;
	static int16_t x210 = INT16_MAX;

    t42 = (x209%(x210-(x211!=x212)));

    if (t42 != -2) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x213 = INT8_MAX;
	volatile uint64_t x214 = 225497LLU;
	int8_t x216 = -1;
	volatile uint64_t t43 = 32620106LLU;

    t43 = (x213%(x214-(x215!=x216)));

    if (t43 != 127LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x217 = 14;
	static uint16_t x219 = 1421U;
	static int64_t x220 = INT64_MIN;
	volatile int64_t t44 = -300454971888LL;

    t44 = (x217%(x218-(x219!=x220)));

    if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x221 = -3;
	static volatile int16_t x223 = INT16_MIN;
	int16_t x224 = 379;
	uint32_t t45 = 30U;

    t45 = (x221%(x222-(x223!=x224)));

    if (t45 != 29229U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x225 = 15826U;
	int8_t x227 = INT8_MAX;
	static uint32_t x228 = 714350U;
	int32_t t46 = 1;

    t46 = (x225%(x226-(x227!=x228)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x229 = 40;
	volatile uint32_t x231 = 2U;
	int8_t x232 = -1;

    t47 = (x229%(x230-(x231!=x232)));

    if (t47 != 40) { NG(); } else { ; }
	
}

void f48(void) {
    	int64_t x237 = 131330715114483LL;
	int32_t x238 = INT32_MAX;
	static uint16_t x239 = 22U;
	volatile int16_t x240 = INT16_MIN;
	volatile int64_t t48 = 6570701061503084LL;

    t48 = (x237%(x238-(x239!=x240)));

    if (t48 != 1352743353LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x241 = 759LL;
	uint32_t x242 = 34034859U;
	volatile uint8_t x243 = 41U;
	int64_t t49 = 117784585517495LL;

    t49 = (x241%(x242-(x243!=x244)));

    if (t49 != 759LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x249 = UINT64_MAX;
	static uint16_t x250 = 170U;
	int64_t x252 = INT64_MIN;
	volatile uint64_t t50 = 786102053235LLU;

    t50 = (x249%(x250-(x251!=x252)));

    if (t50 != 93LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x254 = INT16_MIN;
	int64_t t51 = 1LL;

    t51 = (x253%(x254-(x255!=x256)));

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x257 = -1;
	uint32_t x258 = 222U;
	int16_t x259 = -3;
	int8_t x260 = INT8_MIN;

    t52 = (x257%(x258-(x259!=x260)));

    if (t52 != 34U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x262 = 384U;
	static int32_t x263 = -972;
	int8_t x264 = -1;
	int64_t t53 = -120LL;

    t53 = (x261%(x262-(x263!=x264)));

    if (t53 != -224LL) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile int8_t x269 = -1;
	uint16_t x270 = 313U;
	int16_t x271 = INT16_MAX;
	int8_t x272 = INT8_MAX;
	int32_t t54 = -6384;

    t54 = (x269%(x270-(x271!=x272)));

    if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int64_t x277 = INT64_MIN;
	int16_t x278 = INT16_MAX;
	static int64_t x279 = 16674269819249091LL;
	int64_t x280 = 512950190514683LL;
	int64_t t55 = 3433007630241LL;

    t55 = (x277%(x278-(x279!=x280)));

    if (t55 != -128LL) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint64_t x281 = 21160623267973451LLU;
	int8_t x283 = 0;
	int16_t x284 = -1;
	uint64_t t56 = 167143933141LLU;

    t56 = (x281%(x282-(x283!=x284)));

    if (t56 != 21160623267973451LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x285 = 64;
	int64_t x286 = -274931936141699LL;
	volatile int32_t x287 = INT32_MAX;
	uint64_t x288 = 955043243396988425LLU;
	int64_t t57 = -100713774595559LL;

    t57 = (x285%(x286-(x287!=x288)));

    if (t57 != 64LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x289 = -1;
	uint32_t x290 = 3U;
	volatile int8_t x291 = 0;

    t58 = (x289%(x290-(x291!=x292)));

    if (t58 != 1U) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x293 = INT64_MIN;
	volatile int64_t x294 = -1LL;
	int32_t x295 = -1;
	uint64_t x296 = 1027837589678536LLU;

    t59 = (x293%(x294-(x295!=x296)));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x297 = INT8_MIN;
	static uint32_t x298 = 8U;
	static int64_t x299 = INT64_MIN;
	volatile uint32_t t60 = 927409U;

    t60 = (x297%(x298-(x299!=x300)));

    if (t60 != 2U) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x301 = -1;
	volatile uint8_t x302 = 4U;
	static int32_t t61 = -109210275;

    t61 = (x301%(x302-(x303!=x304)));

    if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x305 = INT64_MIN;
	uint16_t x306 = 35U;
	int8_t x307 = 0;
	static volatile int64_t t62 = 181969570LL;

    t62 = (x305%(x306-(x307!=x308)));

    if (t62 != -26LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x309 = 28758U;
	int16_t x310 = INT16_MIN;
	static uint64_t x311 = UINT64_MAX;

    t63 = (x309%(x310-(x311!=x312)));

    if (t63 != 28758U) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x313 = -10;
	volatile int16_t x314 = -1;
	int32_t x315 = -1;
	uint64_t x316 = 64140LLU;
	int32_t t64 = -949344;

    t64 = (x313%(x314-(x315!=x316)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x317 = 83066727610885LLU;
	int16_t x318 = -1655;
	static int8_t x319 = 7;
	static uint64_t t65 = 3269093093879LLU;

    t65 = (x317%(x318-(x319!=x320)));

    if (t65 != 83066727610885LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x321 = 1;
	static int16_t x322 = INT16_MAX;
	int64_t x323 = 6828058LL;
	uint64_t x324 = 92782387498073408LLU;
	int32_t t66 = 90725;

    t66 = (x321%(x322-(x323!=x324)));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x329 = -18;
	volatile uint32_t x330 = 9908U;
	static int16_t x331 = INT16_MIN;
	uint32_t x332 = 37U;
	volatile uint32_t t67 = 6354994U;

    t67 = (x329%(x330-(x331!=x332)));

    if (t67 != 5382U) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x334 = 6U;
	uint8_t x335 = 3U;
	uint16_t x336 = 13577U;
	int32_t t68 = -1;

    t68 = (x333%(x334-(x335!=x336)));

    if (t68 != -3) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x337 = INT8_MAX;
	uint16_t x338 = 408U;
	volatile int64_t x339 = INT64_MAX;
	uint16_t x340 = 18U;

    t69 = (x337%(x338-(x339!=x340)));

    if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int32_t x341 = INT32_MIN;
	uint16_t x342 = 18U;
	static int8_t x343 = -1;
	volatile int32_t t70 = 120985;

    t70 = (x341%(x342-(x343!=x344)));

    if (t70 != -9) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x346 = -1LL;
	int64_t x348 = -1LL;
	volatile int64_t t71 = -19838291998504292LL;

    t71 = (x345%(x346-(x347!=x348)));

    if (t71 != 1LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x349 = -1;
	uint64_t x350 = UINT64_MAX;
	uint64_t t72 = 91716076790LLU;

    t72 = (x349%(x350-(x351!=x352)));

    if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static int64_t x354 = 65603666LL;
	static uint64_t x355 = 1966697LLU;
	int16_t x356 = INT16_MAX;
	int64_t t73 = 1LL;

    t73 = (x353%(x354-(x355!=x356)));

    if (t73 != 35510722LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x357 = INT64_MIN;
	int64_t x359 = 14936372660LL;
	int32_t x360 = INT32_MIN;
	int64_t t74 = 0LL;

    t74 = (x357%(x358-(x359!=x360)));

    if (t74 != -8LL) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x365 = 16182LL;
	volatile uint16_t x366 = UINT16_MAX;
	static int64_t x367 = INT64_MIN;
	uint16_t x368 = 2626U;
	volatile int64_t t75 = 916493342942889525LL;

    t75 = (x365%(x366-(x367!=x368)));

    if (t75 != 16182LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile int8_t x369 = 1;
	volatile int64_t x370 = -13876974704196LL;
	int8_t x371 = -4;
	static uint8_t x372 = 1U;

    t76 = (x369%(x370-(x371!=x372)));

    if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static int16_t x373 = -139;
	volatile int64_t x374 = INT64_MAX;
	int16_t x375 = -33;
	static int64_t x376 = -1LL;
	volatile int64_t t77 = 611176426308LL;

    t77 = (x373%(x374-(x375!=x376)));

    if (t77 != -139LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint16_t x377 = 1U;
	uint64_t x379 = 1775303441603208915LLU;
	int64_t x380 = -14544584837652LL;
	int32_t t78 = -83;

    t78 = (x377%(x378-(x379!=x380)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x382 = 43U;
	int64_t x383 = -1LL;
	static uint64_t x384 = UINT64_MAX;

    t79 = (x381%(x382-(x383!=x384)));

    if (t79 != 41LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x385 = INT16_MIN;
	int32_t x387 = -1;
	int16_t x388 = INT16_MIN;

    t80 = (x385%(x386-(x387!=x388)));

    if (t80 != -32768LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x389 = -1;
	volatile int32_t x390 = 32;
	uint32_t x391 = 1237176U;
	int64_t x392 = 1844545555646LL;
	int32_t t81 = -7;

    t81 = (x389%(x390-(x391!=x392)));

    if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x393 = 79197013LLU;
	int64_t x394 = 214597LL;
	int8_t x395 = INT8_MAX;
	uint32_t x396 = 59U;
	static uint64_t t82 = 2LLU;

    t82 = (x393%(x394-(x395!=x396)));

    if (t82 != 11089LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x398 = INT8_MIN;
	static volatile int32_t x399 = -5770;
	int64_t x400 = INT64_MIN;
	volatile int32_t t83 = 16384;

    t83 = (x397%(x398-(x399!=x400)));

    if (t83 != -2) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int32_t x405 = -53;
	volatile int32_t x406 = -216268911;
	int16_t x407 = INT16_MIN;
	uint32_t x408 = UINT32_MAX;
	volatile int32_t t84 = 820751908;

    t84 = (x405%(x406-(x407!=x408)));

    if (t84 != -53) { NG(); } else { ; }
	
}

void f85(void) {
    	static int8_t x409 = INT8_MAX;
	volatile int64_t x411 = INT64_MIN;

    t85 = (x409%(x410-(x411!=x412)));

    if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x413 = INT64_MIN;
	uint64_t x414 = 40304509212509890LLU;
	int64_t x415 = INT64_MAX;
	static int8_t x416 = INT8_MIN;

    t86 = (x413%(x414-(x415!=x416)));

    if (t86 != 33943936402521116LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x418 = 11U;
	volatile int64_t x419 = -8155LL;
	static volatile int64_t t87 = -2056LL;

    t87 = (x417%(x418-(x419!=x420)));

    if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x425 = 10;
	int32_t x426 = 211;
	int8_t x427 = 24;
	int64_t x428 = -1LL;
	static volatile int32_t t88 = -46972;

    t88 = (x425%(x426-(x427!=x428)));

    if (t88 != 10) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x437 = -1;
	int64_t x438 = INT64_MAX;
	static uint64_t x440 = 1884078159182576823LLU;
	static int64_t t89 = -1849751LL;

    t89 = (x437%(x438-(x439!=x440)));

    if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x441 = -55;
	static volatile uint64_t x442 = UINT64_MAX;
	volatile uint8_t x444 = 24U;
	static uint64_t t90 = 4070764LLU;

    t90 = (x441%(x442-(x443!=x444)));

    if (t90 != 18446744073709551561LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x445 = 258975057U;
	volatile int8_t x446 = -2;
	int16_t x447 = -13;
	volatile int64_t x448 = INT64_MIN;
	static volatile uint32_t t91 = 5144376U;

    t91 = (x445%(x446-(x447!=x448)));

    if (t91 != 258975057U) { NG(); } else { ; }
	
}

void f92(void) {
    	static volatile uint32_t x449 = 894U;
	int8_t x450 = INT8_MAX;
	uint16_t x451 = 60U;
	int64_t x452 = INT64_MIN;
	volatile uint32_t t92 = 532U;

    t92 = (x449%(x450-(x451!=x452)));

    if (t92 != 12U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x453 = UINT32_MAX;
	int64_t x454 = -1LL;
	uint64_t x455 = UINT64_MAX;
	uint32_t x456 = 3005103U;
	int64_t t93 = 7798598387168551LL;

    t93 = (x453%(x454-(x455!=x456)));

    if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x457 = 1697064061008472LL;
	int16_t x458 = 102;
	uint16_t x459 = UINT16_MAX;
	uint64_t x460 = 559206716882001224LLU;
	volatile int64_t t94 = 50420LL;

    t94 = (x457%(x458-(x459!=x460)));

    if (t94 != 42LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x461 = 12040;
	static int16_t x462 = INT16_MAX;
	uint64_t x464 = 40277605LLU;
	int32_t t95 = -100508;

    t95 = (x461%(x462-(x463!=x464)));

    if (t95 != 12040) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x465 = 66U;
	int16_t x466 = INT16_MAX;
	static int8_t x467 = INT8_MIN;
	uint32_t x468 = UINT32_MAX;

    t96 = (x465%(x466-(x467!=x468)));

    if (t96 != 66U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x469 = 1U;
	uint32_t x471 = 1847715069U;
	static volatile int32_t x472 = 163272608;

    t97 = (x469%(x470-(x471!=x472)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x477 = INT8_MIN;
	int32_t x478 = -98150;
	uint64_t x479 = 262264444LLU;
	static int8_t x480 = INT8_MIN;
	int32_t t98 = 96196;

    t98 = (x477%(x478-(x479!=x480)));

    if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x485 = -1LL;
	int32_t x486 = -1;
	volatile int8_t x488 = -1;
	volatile int64_t t99 = -2562533610LL;

    t99 = (x485%(x486-(x487!=x488)));

    if (t99 != -1LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x489 = 1U;
	volatile int16_t x490 = -1647;
	volatile uint64_t x492 = 963LLU;
	int32_t t100 = 5;

    t100 = (x489%(x490-(x491!=x492)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint8_t x493 = 1U;
	volatile int16_t x495 = INT16_MIN;
	uint64_t x496 = 176LLU;
	int32_t t101 = -52;

    t101 = (x493%(x494-(x495!=x496)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x497 = INT16_MAX;
	volatile uint32_t x498 = 13178U;
	int16_t x500 = INT16_MAX;
	volatile uint32_t t102 = 2U;

    t102 = (x497%(x498-(x499!=x500)));

    if (t102 != 6413U) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x501 = UINT32_MAX;
	static int16_t x503 = INT16_MAX;
	volatile uint32_t t103 = 795U;

    t103 = (x501%(x502-(x503!=x504)));

    if (t103 != 3U) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x505 = 294214397683018LLU;
	int32_t x506 = -2751;
	int32_t x507 = -54494;
	int16_t x508 = INT16_MIN;
	static uint64_t t104 = 10LLU;

    t104 = (x505%(x506-(x507!=x508)));

    if (t104 != 294214397683018LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int16_t x509 = INT16_MIN;
	int16_t x511 = 60;
	int32_t x512 = -1;
	uint64_t t105 = 173LLU;

    t105 = (x509%(x510-(x511!=x512)));

    if (t105 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x514 = 27106364442LL;
	int32_t x516 = INT32_MIN;

    t106 = (x513%(x514-(x515!=x516)));

    if (t106 != -72LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x517 = 739U;
	uint32_t x518 = 59191076U;
	static int32_t x519 = INT32_MIN;
	int32_t x520 = -1;
	static volatile uint32_t t107 = 772723497U;

    t107 = (x517%(x518-(x519!=x520)));

    if (t107 != 739U) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x521 = INT32_MAX;
	int8_t x522 = INT8_MAX;
	volatile uint32_t x523 = 10U;
	volatile uint8_t x524 = UINT8_MAX;
	volatile int32_t t108 = 59446025;

    t108 = (x521%(x522-(x523!=x524)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x525 = INT8_MIN;
	int32_t x526 = -13413;
	static int8_t x527 = INT8_MAX;
	int64_t x528 = -20168830865236745LL;
	static volatile int32_t t109 = -2366;

    t109 = (x525%(x526-(x527!=x528)));

    if (t109 != -128) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x529 = -5;
	static uint16_t x530 = 30U;
	volatile int64_t x532 = -1LL;
	static volatile int32_t t110 = 35;

    t110 = (x529%(x530-(x531!=x532)));

    if (t110 != -5) { NG(); } else { ; }
	
}

void f111(void) {
    	uint16_t x537 = 3542U;
	static int64_t x538 = -1LL;
	volatile int16_t x539 = INT16_MIN;
	static int8_t x540 = -2;
	volatile int64_t t111 = -98673777LL;

    t111 = (x537%(x538-(x539!=x540)));

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x541 = -11;
	uint32_t x543 = 43070U;
	volatile int32_t t112 = -2998;

    t112 = (x541%(x542-(x543!=x544)));

    if (t112 != -2) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x545 = -1340268LL;
	int8_t x546 = INT8_MIN;
	int32_t x547 = INT32_MIN;
	static volatile int64_t t113 = 6093125LL;

    t113 = (x545%(x546-(x547!=x548)));

    if (t113 != -87LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x553 = INT32_MAX;
	static volatile uint8_t x554 = 2U;
	volatile uint8_t x555 = 85U;
	static int32_t t114 = 3;

    t114 = (x553%(x554-(x555!=x556)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x558 = 30U;
	volatile uint64_t t115 = 952630067917LLU;

    t115 = (x557%(x558-(x559!=x560)));

    if (t115 != 12LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x565 = UINT64_MAX;
	static int16_t x566 = 24;
	int32_t x567 = INT32_MIN;
	int16_t x568 = -1;

    t116 = (x565%(x566-(x567!=x568)));

    if (t116 != 5LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x573 = 140339U;
	uint64_t x574 = 3048119778LLU;
	static int64_t x575 = INT64_MAX;
	static volatile int32_t x576 = -1;
	uint64_t t117 = 229LLU;

    t117 = (x573%(x574-(x575!=x576)));

    if (t117 != 140339LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x577 = -1;
	volatile int32_t x579 = -1;
	int32_t t118 = 115;

    t118 = (x577%(x578-(x579!=x580)));

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	static int64_t x581 = INT64_MIN;
	int32_t x582 = -5822478;
	int64_t x583 = -708622935478355065LL;
	volatile int64_t t119 = -903132196936LL;

    t119 = (x581%(x582-(x583!=x584)));

    if (t119 != -1892704LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x585 = 465067972538056810LLU;
	int16_t x586 = INT16_MIN;
	int64_t x587 = INT64_MIN;
	volatile uint32_t x588 = 19999U;
	volatile uint64_t t120 = 125705773467695LLU;

    t120 = (x585%(x586-(x587!=x588)));

    if (t120 != 465067972538056810LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int32_t x589 = INT32_MIN;
	static int32_t x591 = INT32_MIN;
	volatile int64_t x592 = INT64_MAX;
	int32_t t121 = 457620147;

    t121 = (x589%(x590-(x591!=x592)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x593 = 180832815;
	uint32_t x594 = UINT32_MAX;
	int16_t x595 = INT16_MIN;
	uint64_t x596 = UINT64_MAX;

    t122 = (x593%(x594-(x595!=x596)));

    if (t122 != 180832815U) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x601 = -1;
	int64_t x602 = 39549LL;
	uint16_t x604 = 246U;
	int64_t t123 = 1093428192LL;

    t123 = (x601%(x602-(x603!=x604)));

    if (t123 != -1LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x611 = 1090654U;
	int8_t x612 = INT8_MIN;
	int64_t t124 = -4LL;

    t124 = (x609%(x610-(x611!=x612)));

    if (t124 != -1LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x614 = INT16_MIN;
	static uint8_t x615 = UINT8_MAX;
	int32_t x616 = INT32_MIN;
	volatile int32_t t125 = 6;

    t125 = (x613%(x614-(x615!=x616)));

    if (t125 != -32768) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x618 = 32152U;
	int64_t x619 = -3327556LL;
	uint64_t x620 = 158462717821912768LLU;
	uint32_t t126 = 65U;

    t126 = (x617%(x618-(x619!=x620)));

    if (t126 != 6538U) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x621 = 27766145223017LL;
	uint8_t x622 = 4U;
	static uint16_t x623 = UINT16_MAX;
	int64_t t127 = -188737LL;

    t127 = (x621%(x622-(x623!=x624)));

    if (t127 != 2LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x625 = INT64_MIN;
	int64_t x627 = -211880825LL;
	int64_t x628 = INT64_MAX;
	int64_t t128 = 199832796110250725LL;

    t128 = (x625%(x626-(x627!=x628)));

    if (t128 != 0LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static int32_t x638 = -817;
	static uint64_t x639 = 23363432357562970LLU;
	static int16_t x640 = INT16_MIN;
	static int32_t t129 = 932;

    t129 = (x637%(x638-(x639!=x640)));

    if (t129 != -518) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x641 = 1;
	int16_t x643 = INT16_MAX;
	int8_t x644 = INT8_MIN;
	static volatile int32_t t130 = 246151;

    t130 = (x641%(x642-(x643!=x644)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x645 = 22;
	volatile int8_t x646 = -1;
	uint32_t x647 = UINT32_MAX;
	int64_t x648 = INT64_MIN;
	int32_t t131 = 1;

    t131 = (x645%(x646-(x647!=x648)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x653 = -136432080279747099LL;
	volatile uint16_t x655 = 13750U;
	volatile int8_t x656 = INT8_MIN;
	static volatile int64_t t132 = 505549616973LL;

    t132 = (x653%(x654-(x655!=x656)));

    if (t132 != -23013LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x657 = 18165U;
	int32_t x658 = -1310688;
	volatile uint32_t t133 = 92791U;

    t133 = (x657%(x658-(x659!=x660)));

    if (t133 != 18165U) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint16_t x661 = UINT16_MAX;
	int8_t x662 = INT8_MAX;
	uint64_t x663 = 8277841LLU;

    t134 = (x661%(x662-(x663!=x664)));

    if (t134 != 15) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x669 = -1LL;
	static volatile uint32_t x670 = 8U;
	uint64_t x671 = 106177770712806631LLU;
	volatile int64_t x672 = 312515941564452775LL;
	int64_t t135 = 93LL;

    t135 = (x669%(x670-(x671!=x672)));

    if (t135 != -1LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x673 = INT64_MIN;
	int8_t x674 = INT8_MIN;
	volatile int32_t x675 = 12564;
	int64_t x676 = -1LL;
	int64_t t136 = -366LL;

    t136 = (x673%(x674-(x675!=x676)));

    if (t136 != -128LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x677 = 69U;
	int32_t x678 = 9;
	volatile int8_t x679 = INT8_MIN;
	uint8_t x680 = UINT8_MAX;
	volatile int32_t t137 = -273;

    t137 = (x677%(x678-(x679!=x680)));

    if (t137 != 5) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x681 = INT32_MIN;
	int8_t x682 = INT8_MIN;
	static int32_t t138 = 88550353;

    t138 = (x681%(x682-(x683!=x684)));

    if (t138 != -8) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint16_t x685 = 2U;
	static int32_t x686 = INT32_MAX;
	int32_t x688 = -1;

    t139 = (x685%(x686-(x687!=x688)));

    if (t139 != 2) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x689 = 1320U;
	static uint16_t x690 = 0U;
	uint8_t x691 = 1U;
	volatile int64_t x692 = -992047308714668310LL;
	volatile int32_t t140 = 8411;

    t140 = (x689%(x690-(x691!=x692)));

    if (t140 != 0) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x697 = INT16_MIN;
	int32_t x699 = INT32_MAX;
	uint16_t x700 = 871U;
	static int32_t t141 = -1;

    t141 = (x697%(x698-(x699!=x700)));

    if (t141 != -8) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile int32_t x705 = INT32_MAX;
	uint16_t x706 = 1526U;
	int16_t x707 = 3387;
	static int32_t x708 = INT32_MAX;

    t142 = (x705%(x706-(x707!=x708)));

    if (t142 != 1522) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x709 = -1976;
	int16_t x710 = -1620;
	volatile int8_t x712 = INT8_MAX;
	int32_t t143 = -386451842;

    t143 = (x709%(x710-(x711!=x712)));

    if (t143 != -355) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint16_t x713 = UINT16_MAX;
	static int16_t x714 = INT16_MIN;
	int64_t x715 = 3402678406079068LL;
	int64_t x716 = INT64_MIN;
	volatile int32_t t144 = 38;

    t144 = (x713%(x714-(x715!=x716)));

    if (t144 != 32766) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile int8_t x717 = -1;
	volatile int64_t x718 = INT64_MAX;
	static int64_t t145 = -365096534532LL;

    t145 = (x717%(x718-(x719!=x720)));

    if (t145 != -1LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x721 = INT32_MAX;
	int8_t x722 = INT8_MIN;
	int64_t x723 = 239353704492LL;
	static uint32_t x724 = 1500762163U;
	int32_t t146 = -99;

    t146 = (x721%(x722-(x723!=x724)));

    if (t146 != 7) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile uint16_t x727 = UINT16_MAX;
	int32_t x728 = INT32_MIN;
	volatile int32_t t147 = 249432;

    t147 = (x725%(x726-(x727!=x728)));

    if (t147 != -8) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x729 = INT8_MAX;
	int32_t x731 = INT32_MAX;
	int16_t x732 = INT16_MAX;

    t148 = (x729%(x730-(x731!=x732)));

    if (t148 != 127) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x733 = 1;
	uint64_t x734 = 25288LLU;
	static int64_t x735 = 2006591578LL;
	static int8_t x736 = INT8_MIN;
	uint64_t t149 = 1LLU;

    t149 = (x733%(x734-(x735!=x736)));

    if (t149 != 1LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x737 = UINT64_MAX;
	static volatile int64_t x738 = INT64_MAX;
	volatile int8_t x739 = INT8_MIN;
	static volatile uint64_t t150 = 57671099289281LLU;

    t150 = (x737%(x738-(x739!=x740)));

    if (t150 != 3LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x745 = 1574884LL;
	int64_t x746 = INT64_MAX;
	static uint16_t x748 = UINT16_MAX;
	static int64_t t151 = -5LL;

    t151 = (x745%(x746-(x747!=x748)));

    if (t151 != 1574884LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x749 = INT16_MIN;
	int32_t x750 = 4640994;
	volatile int64_t x751 = INT64_MIN;
	volatile int8_t x752 = INT8_MIN;
	int32_t t152 = 459;

    t152 = (x749%(x750-(x751!=x752)));

    if (t152 != -32768) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x753 = -25014;
	int16_t x754 = -1;
	static int64_t x755 = 0LL;
	uint64_t x756 = UINT64_MAX;

    t153 = (x753%(x754-(x755!=x756)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int64_t x758 = 0LL;
	volatile int16_t x759 = 29;
	int64_t x760 = INT64_MAX;
	static volatile int64_t t154 = -12LL;

    t154 = (x757%(x758-(x759!=x760)));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x761 = INT8_MAX;
	int64_t x763 = INT64_MIN;
	volatile uint32_t x764 = 528U;
	int64_t t155 = -659048057221042LL;

    t155 = (x761%(x762-(x763!=x764)));

    if (t155 != 127LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint32_t x765 = 101510693U;
	volatile int64_t x768 = -15345674422621LL;
	volatile uint64_t t156 = 20728LLU;

    t156 = (x765%(x766-(x767!=x768)));

    if (t156 != 101510693LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x769 = 0;
	static uint16_t x771 = UINT16_MAX;
	int16_t x772 = -1;
	static int32_t t157 = 28188;

    t157 = (x769%(x770-(x771!=x772)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x773 = 25;
	uint8_t x774 = UINT8_MAX;
	uint8_t x776 = UINT8_MAX;
	volatile int32_t t158 = -473204661;

    t158 = (x773%(x774-(x775!=x776)));

    if (t158 != 25) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x777 = INT64_MAX;
	int8_t x779 = -1;
	int64_t x780 = INT64_MIN;
	int64_t t159 = -21002104721667LL;

    t159 = (x777%(x778-(x779!=x780)));

    if (t159 != 6402829LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x781 = 3;
	volatile int16_t x783 = -1;
	uint64_t x784 = 7211041302830103LLU;

    t160 = (x781%(x782-(x783!=x784)));

    if (t160 != 3LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int64_t x786 = -1LL;
	static int8_t x788 = -1;
	int64_t t161 = -378759757837LL;

    t161 = (x785%(x786-(x787!=x788)));

    if (t161 != 0LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x789 = UINT32_MAX;
	uint8_t x790 = 0U;
	volatile int16_t x791 = INT16_MIN;
	int32_t x792 = 1068264;
	uint32_t t162 = 5871732U;

    t162 = (x789%(x790-(x791!=x792)));

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x793 = INT64_MIN;
	int64_t x794 = 125386311628LL;
	int8_t x795 = 0;
	uint8_t x796 = UINT8_MAX;
	volatile int64_t t163 = 15546LL;

    t163 = (x793%(x794-(x795!=x796)));

    if (t163 != -92644841528LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x803 = -1;
	int8_t x804 = 35;

    t164 = (x801%(x802-(x803!=x804)));

    if (t164 != 4294967295LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x809 = 5;
	static volatile uint16_t x810 = UINT16_MAX;
	int32_t x811 = 41;
	int16_t x812 = 12962;

    t165 = (x809%(x810-(x811!=x812)));

    if (t165 != 5) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x813 = -1LL;
	int8_t x814 = INT8_MIN;
	uint32_t x816 = 20137U;
	int64_t t166 = 4245255889LL;

    t166 = (x813%(x814-(x815!=x816)));

    if (t166 != -1LL) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x817 = INT64_MIN;
	static uint16_t x818 = 4U;
	int32_t x819 = INT32_MIN;
	volatile int64_t t167 = -303560744298LL;

    t167 = (x817%(x818-(x819!=x820)));

    if (t167 != -2LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int64_t x821 = INT64_MAX;
	int8_t x822 = -1;
	static int64_t x823 = INT64_MIN;
	int32_t x824 = -734913;

    t168 = (x821%(x822-(x823!=x824)));

    if (t168 != 1LL) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x829 = UINT16_MAX;
	int16_t x831 = -1057;
	int64_t x832 = INT64_MIN;
	int64_t t169 = -4719168244LL;

    t169 = (x829%(x830-(x831!=x832)));

    if (t169 != 1LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int16_t x834 = INT16_MIN;
	uint64_t x835 = UINT64_MAX;
	static uint64_t x836 = UINT64_MAX;
	static volatile int32_t t170 = 21040573;

    t170 = (x833%(x834-(x835!=x836)));

    if (t170 != 15) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x837 = INT16_MIN;
	int32_t x838 = INT32_MAX;
	int16_t x840 = -1;
	int32_t t171 = -21776728;

    t171 = (x837%(x838-(x839!=x840)));

    if (t171 != -32768) { NG(); } else { ; }
	
}

void f172(void) {
    	static int64_t x841 = -1LL;
	int16_t x842 = INT16_MAX;
	static uint64_t x843 = 5770773522214LLU;
	uint16_t x844 = UINT16_MAX;
	static int64_t t172 = -5340202293862LL;

    t172 = (x841%(x842-(x843!=x844)));

    if (t172 != -1LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x845 = UINT32_MAX;
	static volatile int16_t x846 = -50;
	uint64_t x848 = 8319480749037693837LLU;
	uint32_t t173 = 5093988U;

    t173 = (x845%(x846-(x847!=x848)));

    if (t173 != 50U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x849 = 43300395U;
	static int16_t x851 = INT16_MIN;
	int16_t x852 = INT16_MAX;
	volatile int64_t t174 = 7571990661285771LL;

    t174 = (x849%(x850-(x851!=x852)));

    if (t174 != 43300395LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x853 = 5;
	uint16_t x854 = 15023U;
	static int32_t x855 = INT32_MIN;
	static volatile int64_t x856 = -1317961940073LL;
	volatile int32_t t175 = 56188;

    t175 = (x853%(x854-(x855!=x856)));

    if (t175 != 5) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x857 = INT64_MIN;
	uint16_t x858 = UINT16_MAX;
	int64_t x859 = 6LL;
	int32_t x860 = 212731617;

    t176 = (x857%(x858-(x859!=x860)));

    if (t176 != -8LL) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x861 = -3542682378555320249LL;
	volatile uint8_t x863 = 56U;
	uint16_t x864 = 248U;
	int64_t t177 = 161612455LL;

    t177 = (x861%(x862-(x863!=x864)));

    if (t177 != -1LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x869 = 229171073U;
	static int8_t x870 = 13;
	uint32_t x872 = 1818588645U;
	volatile uint32_t t178 = 10066434U;

    t178 = (x869%(x870-(x871!=x872)));

    if (t178 != 5U) { NG(); } else { ; }
	
}

void f179(void) {
    	uint64_t x873 = 183776290LLU;
	int32_t x874 = 138695;
	uint32_t x875 = UINT32_MAX;
	volatile int8_t x876 = 0;
	uint64_t t179 = 1294329227281514858LLU;

    t179 = (x873%(x874-(x875!=x876)));

    if (t179 != 6740LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x877 = 3330304;
	int16_t x878 = -3;
	int8_t x880 = 1;

    t180 = (x877%(x878-(x879!=x880)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x881 = -39964;
	int16_t x882 = INT16_MIN;
	int32_t x884 = 6938188;
	volatile int32_t t181 = 23;

    t181 = (x881%(x882-(x883!=x884)));

    if (t181 != -7195) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x889 = INT8_MIN;
	int16_t x890 = -340;
	int8_t x891 = INT8_MIN;
	static int32_t t182 = -869;

    t182 = (x889%(x890-(x891!=x892)));

    if (t182 != -128) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x893 = INT32_MAX;
	static volatile uint32_t x894 = 2441327U;
	int32_t x895 = -1;
	int8_t x896 = -1;

    t183 = (x893%(x894-(x895!=x896)));

    if (t183 != 1557214U) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x898 = 2U;
	volatile int32_t t184 = -13166285;

    t184 = (x897%(x898-(x899!=x900)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x901 = -3538;
	int32_t x902 = INT32_MAX;
	int8_t x903 = 1;
	uint8_t x904 = 37U;
	volatile int32_t t185 = 2;

    t185 = (x901%(x902-(x903!=x904)));

    if (t185 != -3538) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int64_t x905 = -1LL;
	uint16_t x906 = 14U;
	volatile uint16_t x908 = 4U;
	int64_t t186 = 8087067865974LL;

    t186 = (x905%(x906-(x907!=x908)));

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x909 = -1;
	int32_t x910 = -29172980;
	static int8_t x911 = INT8_MIN;
	volatile int16_t x912 = INT16_MAX;
	int32_t t187 = -50;

    t187 = (x909%(x910-(x911!=x912)));

    if (t187 != -1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x913 = UINT8_MAX;
	volatile uint8_t x914 = 81U;
	uint64_t x915 = 330220078LLU;
	int64_t x916 = -1023157804529109LL;
	volatile int32_t t188 = -15999576;

    t188 = (x913%(x914-(x915!=x916)));

    if (t188 != 15) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint64_t x917 = UINT64_MAX;
	int64_t x918 = -1811281801155666864LL;
	int8_t x919 = INT8_MIN;
	int16_t x920 = -150;

    t189 = (x917%(x918-(x919!=x920)));

    if (t189 != 1811281801155666864LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x925 = UINT16_MAX;
	static volatile int8_t x926 = INT8_MAX;
	uint8_t x927 = UINT8_MAX;
	uint64_t x928 = 4LLU;
	volatile int32_t t190 = -12862;

    t190 = (x925%(x926-(x927!=x928)));

    if (t190 != 15) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x929 = -1;
	uint16_t x930 = 20U;
	static volatile uint8_t x931 = 4U;
	int32_t x932 = INT32_MAX;
	volatile int32_t t191 = 6;

    t191 = (x929%(x930-(x931!=x932)));

    if (t191 != -1) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x933 = INT64_MIN;
	static int64_t x934 = -1LL;
	uint32_t x935 = 37U;
	uint32_t x936 = 470U;
	volatile int64_t t192 = -17504769091043LL;

    t192 = (x933%(x934-(x935!=x936)));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint16_t x937 = UINT16_MAX;
	static volatile int32_t x938 = -14119013;
	volatile uint32_t x939 = UINT32_MAX;
	uint8_t x940 = 0U;
	int32_t t193 = -2442;

    t193 = (x937%(x938-(x939!=x940)));

    if (t193 != 65535) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x949 = -7245724LL;
	volatile int8_t x950 = INT8_MIN;
	static volatile int8_t x951 = INT8_MAX;
	volatile int64_t t194 = 792904351LL;

    t194 = (x949%(x950-(x951!=x952)));

    if (t194 != -52LL) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x953 = INT8_MAX;
	static int64_t x954 = INT64_MAX;
	static volatile int8_t x955 = INT8_MAX;
	static int8_t x956 = -1;
	int64_t t195 = 556154246559179LL;

    t195 = (x953%(x954-(x955!=x956)));

    if (t195 != 127LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x957 = UINT64_MAX;
	static volatile int16_t x958 = INT16_MIN;
	static uint64_t t196 = 803331408066807380LLU;

    t196 = (x957%(x958-(x959!=x960)));

    if (t196 != 32768LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x961 = 440719093;
	volatile int8_t x962 = -1;
	int8_t x963 = INT8_MIN;
	volatile int8_t x964 = 1;
	volatile int32_t t197 = -945486776;

    t197 = (x961%(x962-(x963!=x964)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x969 = INT64_MAX;
	volatile int16_t x971 = 789;
	static uint8_t x972 = 24U;
	static int64_t t198 = 530708135798LL;

    t198 = (x969%(x970-(x971!=x972)));

    if (t198 != 7LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x973 = -1;
	int8_t x974 = INT8_MIN;
	int32_t x976 = INT32_MIN;
	static volatile int32_t t199 = 1009727;

    t199 = (x973%(x974-(x975!=x976)));

    if (t199 != -1) { NG(); } else { ; }
	
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

