
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

int16_t x1 = INT16_MIN;
int32_t x36 = INT32_MIN;
int8_t x43 = INT8_MAX;
static volatile int32_t x49 = -1;
int8_t x52 = -1;
uint16_t x60 = UINT16_MAX;
static int16_t x69 = 1762;
static int32_t x82 = INT32_MIN;
volatile uint8_t x83 = 9U;
volatile int32_t t13 = -6265076;
int32_t x99 = INT32_MIN;
static int32_t t14 = 2743844;
static int64_t x103 = -775970198LL;
static volatile uint64_t x105 = 0LLU;
static int32_t x115 = -1;
uint16_t x116 = UINT16_MAX;
uint8_t x121 = 0U;
int32_t x130 = INT32_MIN;
volatile int32_t t20 = -377478;
static int8_t x134 = 1;
static int8_t x141 = INT8_MIN;
int16_t x144 = INT16_MAX;
int16_t x146 = INT16_MIN;
int16_t x147 = 507;
static volatile int32_t t25 = 46648408;
static uint16_t x165 = 31U;
int32_t t28 = -46306;
uint8_t x173 = UINT8_MAX;
int32_t t29 = 7859426;
static int16_t x177 = INT16_MIN;
int32_t t30 = 6715;
int32_t x182 = -555;
uint32_t x191 = UINT32_MAX;
int32_t x192 = -1;
uint8_t x199 = 38U;
uint32_t x202 = 3961440U;
int32_t x209 = 832;
static int64_t x211 = -1436127211745LL;
int32_t x214 = 8029899;
static volatile int64_t x217 = INT64_MAX;
volatile uint64_t x225 = 2LLU;
uint8_t x231 = UINT8_MAX;
int8_t x232 = -1;
int16_t x239 = INT16_MIN;
static int32_t t44 = 98104599;
int32_t x241 = -1;
int16_t x242 = 6547;
static int64_t x244 = 335811735245483LL;
int32_t t45 = 181;
int8_t x255 = INT8_MIN;
uint8_t x258 = UINT8_MAX;
int16_t x265 = INT16_MIN;
int32_t x267 = -1;
static int16_t x276 = -1;
volatile int64_t x281 = INT64_MIN;
uint16_t x287 = 81U;
uint16_t x295 = UINT16_MAX;
volatile int32_t t55 = -102412;
int64_t x300 = -1LL;
static volatile int32_t t57 = 2;
int8_t x308 = INT8_MIN;
uint16_t x309 = 1498U;
static int64_t x319 = 15179311LL;
static int32_t x326 = -39871;
int16_t x331 = INT16_MAX;
volatile int32_t t63 = 248546689;
static uint16_t x333 = UINT16_MAX;
int16_t x336 = INT16_MAX;
volatile uint8_t x357 = 27U;
volatile uint64_t x358 = UINT64_MAX;
int32_t x362 = -57;
volatile uint64_t x365 = 203282LLU;
int8_t x369 = INT8_MIN;
int32_t x378 = -1;
static int32_t x380 = INT32_MIN;
volatile int64_t x381 = -1LL;
static volatile int32_t t74 = -3316152;
volatile int32_t t75 = 473377;
uint8_t x393 = 54U;
int64_t x397 = INT64_MAX;
int16_t x401 = -1;
volatile int32_t t79 = -851;
volatile uint16_t x414 = 21U;
volatile uint32_t x430 = UINT32_MAX;
int64_t x432 = 1498176238218958149LL;
static uint16_t x433 = 12U;
int64_t x438 = INT64_MAX;
volatile int32_t t85 = -3542;
int32_t x445 = -1346855;
int16_t x448 = -1;
int64_t x452 = 34LL;
volatile uint16_t x469 = 1643U;
static int8_t x470 = 10;
int32_t x471 = -20;
static int16_t x481 = 1;
static int64_t x482 = 79270586281LL;
uint32_t x499 = 251541150U;
static volatile int8_t x502 = INT8_MAX;
int16_t x506 = -1;
int16_t x521 = INT16_MAX;
int16_t x528 = -220;
uint64_t x535 = UINT64_MAX;
static int32_t t104 = -209645;
static volatile int32_t x543 = -1;
static int8_t x544 = INT8_MAX;
volatile int32_t t106 = 85293457;
uint32_t x545 = 1261360604U;
int8_t x548 = INT8_MAX;
static volatile int32_t t108 = -9089;
int8_t x556 = INT8_MIN;
static uint64_t x558 = 3208790200281709LLU;
int64_t x561 = -1LL;
int32_t x567 = -30;
uint8_t x574 = 24U;
int8_t x575 = INT8_MAX;
static int16_t x576 = INT16_MIN;
int16_t x578 = 1;
uint8_t x579 = UINT8_MAX;
int32_t x584 = INT32_MIN;
volatile int32_t t115 = -7467656;
int64_t x587 = -227532193887176LL;
int32_t x588 = -49;
static int16_t x594 = INT16_MIN;
uint64_t x612 = 22LLU;
int32_t t122 = 4031;
volatile int32_t t124 = 91968494;
int8_t x640 = INT8_MAX;
int64_t x641 = INT64_MAX;
int32_t t127 = 197944716;
volatile uint64_t x645 = 32017112502704LLU;
volatile int32_t t128 = 18612;
volatile uint16_t x651 = 1U;
volatile uint32_t x652 = UINT32_MAX;
uint32_t x663 = 7702365U;
volatile int32_t t132 = -139974239;
int8_t x671 = -1;
int32_t t133 = 16;
int32_t x678 = INT32_MIN;
volatile int32_t t135 = -330773;
static int16_t x691 = -1;
static volatile int32_t t136 = 303917156;
int8_t x694 = INT8_MIN;
volatile uint32_t x696 = 423U;
int16_t x701 = INT16_MIN;
static int8_t x711 = 7;
static uint16_t x715 = 38U;
int32_t x721 = -1;
uint64_t x723 = 318244LLU;
int32_t t142 = 159104;
volatile int8_t x725 = -1;
int16_t x726 = INT16_MAX;
int16_t x730 = INT16_MAX;
volatile int32_t t144 = -2513295;
static volatile int32_t t146 = -39589;
volatile uint8_t x742 = UINT8_MAX;
volatile int16_t x750 = -1;
int32_t t148 = -1;
static int64_t x765 = 197582LL;
int32_t x771 = 380350346;
static int8_t x772 = INT8_MAX;
int32_t t153 = -6574;
volatile int64_t x789 = INT64_MIN;
static uint16_t x793 = 3152U;
int32_t x796 = 14260859;
uint32_t x799 = UINT32_MAX;
static int32_t x804 = INT32_MIN;
uint32_t x812 = 873188302U;
volatile int32_t t162 = 238556;
int64_t x825 = -828796645422250LL;
int64_t x826 = 3784792230685LL;
int32_t t164 = 123510;
static uint32_t x833 = 48013U;
int8_t x835 = INT8_MIN;
volatile int32_t x837 = INT32_MAX;
int8_t x839 = INT8_MIN;
static volatile int64_t x849 = -1LL;
volatile uint8_t x851 = 12U;
static uint16_t x852 = 0U;
volatile int32_t x862 = INT32_MIN;
int32_t t172 = -1358;
int32_t x865 = INT32_MIN;
uint64_t x871 = UINT64_MAX;
static int64_t x873 = INT64_MAX;
int8_t x882 = INT8_MAX;
static uint16_t x883 = UINT16_MAX;
volatile int32_t x885 = -29037829;
int16_t x904 = INT16_MIN;
int16_t x911 = 22;
int16_t x926 = INT16_MIN;
volatile uint8_t x930 = 3U;
int16_t x931 = INT16_MIN;
int32_t t184 = 283982807;
int64_t x934 = INT64_MIN;
volatile uint16_t x937 = UINT16_MAX;
int8_t x938 = INT8_MIN;
int16_t x944 = INT16_MAX;
int64_t x945 = 885760088LL;
static uint64_t x948 = UINT64_MAX;
volatile uint32_t x973 = 2U;
uint8_t x975 = 5U;
static int8_t x979 = INT8_MAX;
static volatile uint8_t x983 = 64U;


void f0(void) {
    	uint32_t x2 = 3792U;
	int16_t x3 = INT16_MIN;
	int8_t x4 = INT8_MAX;
	static volatile int32_t t0 = 138;

    t0 = ((x1-x2)!=(x3+x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile uint8_t x9 = 3U;
	uint64_t x10 = UINT64_MAX;
	static uint16_t x11 = 373U;
	int16_t x12 = -210;
	volatile int32_t t1 = -2833658;

    t1 = ((x9-x10)!=(x11+x12));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint16_t x13 = UINT16_MAX;
	static int8_t x14 = INT8_MAX;
	static int64_t x15 = -1LL;
	static uint8_t x16 = UINT8_MAX;
	volatile int32_t t2 = -146712;

    t2 = ((x13-x14)!=(x15+x16));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x17 = INT16_MIN;
	uint32_t x18 = 2U;
	int8_t x19 = INT8_MAX;
	int32_t x20 = -1;
	int32_t t3 = 270;

    t3 = ((x17-x18)!=(x19+x20));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint16_t x21 = 1U;
	int8_t x22 = -1;
	static volatile uint16_t x23 = 475U;
	volatile uint64_t x24 = 339079033968LLU;
	int32_t t4 = 8783623;

    t4 = ((x21-x22)!=(x23+x24));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x33 = 4U;
	uint32_t x34 = 1003U;
	static int16_t x35 = 0;
	volatile int32_t t5 = 1586;

    t5 = ((x33-x34)!=(x35+x36));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	uint8_t x41 = UINT8_MAX;
	volatile int16_t x42 = INT16_MIN;
	int64_t x44 = -2078789633891304814LL;
	volatile int32_t t6 = 218132734;

    t6 = ((x41-x42)!=(x43+x44));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x45 = INT8_MIN;
	uint64_t x46 = 110729137993LLU;
	uint64_t x47 = UINT64_MAX;
	uint16_t x48 = 2U;
	static int32_t t7 = -1;

    t7 = ((x45-x46)!=(x47+x48));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	uint32_t x50 = 2760359U;
	int16_t x51 = INT16_MAX;
	volatile int32_t t8 = 132756;

    t8 = ((x49-x50)!=(x51+x52));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile int32_t x53 = INT32_MIN;
	volatile int32_t x54 = INT32_MIN;
	uint16_t x55 = UINT16_MAX;
	static int16_t x56 = 1;
	int32_t t9 = 8;

    t9 = ((x53-x54)!=(x55+x56));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x57 = -1;
	uint32_t x58 = 116U;
	uint8_t x59 = 12U;
	int32_t t10 = -7803722;

    t10 = ((x57-x58)!=(x59+x60));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x70 = INT8_MIN;
	int64_t x71 = -1LL;
	int64_t x72 = -1LL;
	volatile int32_t t11 = -7665;

    t11 = ((x69-x70)!=(x71+x72));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x81 = UINT64_MAX;
	static int16_t x84 = -1;
	volatile int32_t t12 = -40068;

    t12 = ((x81-x82)!=(x83+x84));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x93 = -3;
	static uint32_t x94 = 1441915U;
	int8_t x95 = INT8_MIN;
	int8_t x96 = INT8_MAX;

    t13 = ((x93-x94)!=(x95+x96));

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile uint64_t x97 = 9363377941206LLU;
	volatile int16_t x98 = -2;
	uint8_t x100 = 31U;

    t14 = ((x97-x98)!=(x99+x100));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x101 = UINT16_MAX;
	uint32_t x102 = 36U;
	int16_t x104 = INT16_MAX;
	int32_t t15 = -64546;

    t15 = ((x101-x102)!=(x103+x104));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x106 = INT8_MIN;
	static int64_t x107 = 17721382406LL;
	int64_t x108 = -1LL;
	int32_t t16 = -145;

    t16 = ((x105-x106)!=(x107+x108));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x113 = 1;
	uint32_t x114 = UINT32_MAX;
	int32_t t17 = -1;

    t17 = ((x113-x114)!=(x115+x116));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int32_t x117 = -1;
	int8_t x118 = -1;
	int16_t x119 = INT16_MIN;
	int8_t x120 = 5;
	volatile int32_t t18 = -27537143;

    t18 = ((x117-x118)!=(x119+x120));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int16_t x122 = -3267;
	int16_t x123 = INT16_MIN;
	static int8_t x124 = 50;
	int32_t t19 = 3;

    t19 = ((x121-x122)!=(x123+x124));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x129 = INT64_MIN;
	static volatile int32_t x131 = INT32_MIN;
	uint32_t x132 = UINT32_MAX;

    t20 = ((x129-x130)!=(x131+x132));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	static int16_t x133 = 3324;
	volatile int8_t x135 = INT8_MAX;
	volatile uint32_t x136 = 0U;
	volatile int32_t t21 = 6482;

    t21 = ((x133-x134)!=(x135+x136));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x137 = 89U;
	uint8_t x138 = UINT8_MAX;
	volatile uint16_t x139 = UINT16_MAX;
	uint64_t x140 = 40487867658858LLU;
	int32_t t22 = -39180234;

    t22 = ((x137-x138)!=(x139+x140));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x142 = -9284;
	int32_t x143 = INT32_MIN;
	int32_t t23 = 61682;

    t23 = ((x141-x142)!=(x143+x144));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x145 = 127493164653349LLU;
	volatile uint32_t x148 = UINT32_MAX;
	int32_t t24 = -29613;

    t24 = ((x145-x146)!=(x147+x148));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x149 = INT32_MIN;
	int8_t x150 = -55;
	uint32_t x151 = UINT32_MAX;
	static int8_t x152 = INT8_MIN;

    t25 = ((x149-x150)!=(x151+x152));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int8_t x153 = INT8_MIN;
	uint32_t x154 = UINT32_MAX;
	int16_t x155 = INT16_MAX;
	int8_t x156 = INT8_MAX;
	volatile int32_t t26 = 159;

    t26 = ((x153-x154)!=(x155+x156));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int32_t x157 = -724691150;
	int32_t x158 = -1;
	int16_t x159 = INT16_MIN;
	volatile uint16_t x160 = 114U;
	int32_t t27 = 13892430;

    t27 = ((x157-x158)!=(x159+x160));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint32_t x166 = 1777U;
	static int8_t x167 = -32;
	int16_t x168 = INT16_MIN;

    t28 = ((x165-x166)!=(x167+x168));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x174 = UINT64_MAX;
	int8_t x175 = 29;
	uint32_t x176 = UINT32_MAX;

    t29 = ((x173-x174)!=(x175+x176));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x178 = INT16_MIN;
	int16_t x179 = -293;
	volatile uint8_t x180 = 3U;

    t30 = ((x177-x178)!=(x179+x180));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x181 = -44;
	uint64_t x183 = 129324LLU;
	uint8_t x184 = 17U;
	volatile int32_t t31 = -3491;

    t31 = ((x181-x182)!=(x183+x184));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x185 = 22;
	volatile int16_t x186 = -1;
	uint32_t x187 = 22044U;
	static uint8_t x188 = 61U;
	volatile int32_t t32 = -3629805;

    t32 = ((x185-x186)!=(x187+x188));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	static int16_t x189 = -1;
	int32_t x190 = -31;
	volatile int32_t t33 = -11;

    t33 = ((x189-x190)!=(x191+x192));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x193 = 1826LLU;
	volatile int32_t x194 = -1;
	static int16_t x195 = 7616;
	volatile int64_t x196 = INT64_MIN;
	volatile int32_t t34 = -11;

    t34 = ((x193-x194)!=(x195+x196));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int64_t x197 = 208LL;
	static int16_t x198 = -1;
	uint32_t x200 = 4808U;
	volatile int32_t t35 = -1735;

    t35 = ((x197-x198)!=(x199+x200));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int64_t x201 = 1LL;
	uint8_t x203 = 5U;
	static int16_t x204 = INT16_MIN;
	volatile int32_t t36 = -1;

    t36 = ((x201-x202)!=(x203+x204));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x210 = -1;
	uint64_t x212 = 64LLU;
	int32_t t37 = -9;

    t37 = ((x209-x210)!=(x211+x212));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int64_t x213 = INT64_MAX;
	static int8_t x215 = INT8_MIN;
	int8_t x216 = INT8_MAX;
	static volatile int32_t t38 = -100178;

    t38 = ((x213-x214)!=(x215+x216));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int32_t x218 = 15917;
	int64_t x219 = -32792117544LL;
	int16_t x220 = INT16_MAX;
	static int32_t t39 = 2023353;

    t39 = ((x217-x218)!=(x219+x220));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x221 = INT64_MIN;
	uint64_t x222 = 15357761817931LLU;
	int32_t x223 = INT32_MIN;
	static int8_t x224 = INT8_MAX;
	int32_t t40 = -3;

    t40 = ((x221-x222)!=(x223+x224));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x226 = UINT32_MAX;
	int8_t x227 = 0;
	uint64_t x228 = 12LLU;
	static int32_t t41 = -7;

    t41 = ((x225-x226)!=(x227+x228));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x229 = 43U;
	int16_t x230 = INT16_MIN;
	int32_t t42 = -1896060;

    t42 = ((x229-x230)!=(x231+x232));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x233 = INT16_MIN;
	uint16_t x234 = UINT16_MAX;
	volatile int8_t x235 = -2;
	static int32_t x236 = -1;
	volatile int32_t t43 = 256;

    t43 = ((x233-x234)!=(x235+x236));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint16_t x237 = 26U;
	uint8_t x238 = 12U;
	int64_t x240 = INT64_MAX;

    t44 = ((x237-x238)!=(x239+x240));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x243 = INT32_MAX;

    t45 = ((x241-x242)!=(x243+x244));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x245 = 26;
	int16_t x246 = INT16_MAX;
	int8_t x247 = INT8_MAX;
	static int32_t x248 = INT32_MIN;
	int32_t t46 = 24542173;

    t46 = ((x245-x246)!=(x247+x248));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x249 = INT8_MIN;
	int8_t x250 = INT8_MAX;
	int64_t x251 = INT64_MIN;
	uint8_t x252 = 1U;
	int32_t t47 = 43025;

    t47 = ((x249-x250)!=(x251+x252));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x253 = UINT16_MAX;
	volatile uint32_t x254 = UINT32_MAX;
	uint16_t x256 = 0U;
	volatile int32_t t48 = -22367375;

    t48 = ((x253-x254)!=(x255+x256));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x257 = 22203;
	int64_t x259 = INT64_MAX;
	volatile int32_t x260 = INT32_MIN;
	int32_t t49 = 983;

    t49 = ((x257-x258)!=(x259+x260));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint32_t x261 = 0U;
	int32_t x262 = 85;
	int8_t x263 = INT8_MIN;
	volatile int32_t x264 = 209345;
	volatile int32_t t50 = -32075664;

    t50 = ((x261-x262)!=(x263+x264));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x266 = 188;
	uint32_t x268 = UINT32_MAX;
	int32_t t51 = -21834552;

    t51 = ((x265-x266)!=(x267+x268));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x273 = INT16_MIN;
	uint16_t x274 = 8U;
	int8_t x275 = INT8_MIN;
	static int32_t t52 = -927760;

    t52 = ((x273-x274)!=(x275+x276));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	static int64_t x282 = INT64_MIN;
	int32_t x283 = INT32_MAX;
	uint32_t x284 = 3U;
	int32_t t53 = -28648422;

    t53 = ((x281-x282)!=(x283+x284));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x285 = INT16_MAX;
	int8_t x286 = -5;
	uint16_t x288 = 78U;
	volatile int32_t t54 = 261336;

    t54 = ((x285-x286)!=(x287+x288));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x293 = 1;
	static volatile int64_t x294 = INT64_MAX;
	int16_t x296 = -1;

    t55 = ((x293-x294)!=(x295+x296));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x297 = INT64_MAX;
	uint64_t x298 = 5205LLU;
	static int8_t x299 = 0;
	int32_t t56 = -24450894;

    t56 = ((x297-x298)!=(x299+x300));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x301 = -1;
	uint64_t x302 = 29176785860741LLU;
	int8_t x303 = INT8_MAX;
	int16_t x304 = -14852;

    t57 = ((x301-x302)!=(x303+x304));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x305 = UINT16_MAX;
	uint8_t x306 = 3U;
	int8_t x307 = INT8_MAX;
	int32_t t58 = 18;

    t58 = ((x305-x306)!=(x307+x308));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x310 = INT16_MIN;
	uint8_t x311 = 1U;
	static uint64_t x312 = UINT64_MAX;
	volatile int32_t t59 = -132582644;

    t59 = ((x309-x310)!=(x311+x312));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x317 = -321;
	int16_t x318 = 69;
	uint32_t x320 = 25U;
	int32_t t60 = 871;

    t60 = ((x317-x318)!=(x319+x320));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x321 = UINT16_MAX;
	int64_t x322 = -11777618518059LL;
	int32_t x323 = INT32_MIN;
	int64_t x324 = 3795970658419LL;
	static int32_t t61 = -14662042;

    t61 = ((x321-x322)!=(x323+x324));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x325 = UINT32_MAX;
	uint8_t x327 = 76U;
	static uint16_t x328 = 2U;
	volatile int32_t t62 = 747591820;

    t62 = ((x325-x326)!=(x327+x328));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x329 = INT64_MIN;
	static uint64_t x330 = 782091671LLU;
	int16_t x332 = -57;

    t63 = ((x329-x330)!=(x331+x332));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x334 = -35;
	volatile int16_t x335 = INT16_MIN;
	static volatile int32_t t64 = -558785271;

    t64 = ((x333-x334)!=(x335+x336));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x341 = 3249768929544453936LLU;
	uint64_t x342 = 62315415590LLU;
	uint8_t x343 = 110U;
	int64_t x344 = INT64_MIN;
	int32_t t65 = 1;

    t65 = ((x341-x342)!=(x343+x344));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x353 = -1LL;
	volatile int64_t x354 = 86082283158326LL;
	int8_t x355 = INT8_MIN;
	int64_t x356 = -1LL;
	volatile int32_t t66 = 122;

    t66 = ((x353-x354)!=(x355+x356));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x359 = 0;
	uint64_t x360 = 496658113472299550LLU;
	volatile int32_t t67 = -14345;

    t67 = ((x357-x358)!=(x359+x360));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int16_t x361 = INT16_MIN;
	volatile int8_t x363 = INT8_MIN;
	uint32_t x364 = UINT32_MAX;
	static int32_t t68 = 75341;

    t68 = ((x361-x362)!=(x363+x364));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x366 = INT16_MAX;
	int32_t x367 = INT32_MIN;
	static volatile uint32_t x368 = 737U;
	int32_t t69 = -2031;

    t69 = ((x365-x366)!=(x367+x368));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x370 = 491U;
	int64_t x371 = 148669436177379495LL;
	static uint16_t x372 = UINT16_MAX;
	int32_t t70 = -11;

    t70 = ((x369-x370)!=(x371+x372));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x373 = INT32_MIN;
	uint64_t x374 = UINT64_MAX;
	int64_t x375 = -7LL;
	int16_t x376 = -1;
	volatile int32_t t71 = 38726;

    t71 = ((x373-x374)!=(x375+x376));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x377 = 395;
	static uint32_t x379 = 202929U;
	int32_t t72 = -12;

    t72 = ((x377-x378)!=(x379+x380));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x382 = INT16_MIN;
	volatile int32_t x383 = -1;
	volatile uint64_t x384 = 1968450907LLU;
	int32_t t73 = -33536728;

    t73 = ((x381-x382)!=(x383+x384));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int8_t x385 = INT8_MAX;
	uint16_t x386 = 3200U;
	static int32_t x387 = INT32_MIN;
	static int16_t x388 = 5558;

    t74 = ((x385-x386)!=(x387+x388));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x389 = 1;
	int64_t x390 = -4675393753986363LL;
	uint32_t x391 = 63789U;
	int32_t x392 = INT32_MIN;

    t75 = ((x389-x390)!=(x391+x392));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x394 = -845;
	static uint64_t x395 = UINT64_MAX;
	int64_t x396 = INT64_MIN;
	volatile int32_t t76 = 53;

    t76 = ((x393-x394)!=(x395+x396));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int64_t x398 = 12141LL;
	int8_t x399 = -1;
	int8_t x400 = 1;
	volatile int32_t t77 = 729932672;

    t77 = ((x397-x398)!=(x399+x400));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x402 = INT32_MIN;
	uint32_t x403 = 1412U;
	volatile uint32_t x404 = 2U;
	static volatile int32_t t78 = 7;

    t78 = ((x401-x402)!=(x403+x404));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x409 = -1;
	int32_t x410 = 3613;
	static volatile uint16_t x411 = 0U;
	int64_t x412 = -1LL;

    t79 = ((x409-x410)!=(x411+x412));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	static int64_t x413 = INT64_MAX;
	int16_t x415 = INT16_MAX;
	int16_t x416 = INT16_MAX;
	volatile int32_t t80 = -16019999;

    t80 = ((x413-x414)!=(x415+x416));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x421 = INT32_MIN;
	int64_t x422 = INT64_MIN;
	int16_t x423 = INT16_MAX;
	uint8_t x424 = 1U;
	volatile int32_t t81 = 299128091;

    t81 = ((x421-x422)!=(x423+x424));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x425 = 12192075;
	int32_t x426 = -1;
	uint64_t x427 = 212799LLU;
	int64_t x428 = -63LL;
	volatile int32_t t82 = -781;

    t82 = ((x425-x426)!=(x427+x428));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int32_t x429 = INT32_MIN;
	int64_t x431 = INT64_MIN;
	int32_t t83 = 16335583;

    t83 = ((x429-x430)!=(x431+x432));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint64_t x434 = UINT64_MAX;
	int8_t x435 = INT8_MAX;
	int32_t x436 = -1;
	volatile int32_t t84 = 3068;

    t84 = ((x433-x434)!=(x435+x436));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint64_t x437 = 2344455661411LLU;
	int32_t x439 = -4;
	volatile uint64_t x440 = 16LLU;

    t85 = ((x437-x438)!=(x439+x440));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x441 = -25763873930589714LL;
	volatile uint64_t x442 = 1403233267LLU;
	int16_t x443 = INT16_MIN;
	int16_t x444 = INT16_MIN;
	volatile int32_t t86 = 3;

    t86 = ((x441-x442)!=(x443+x444));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint64_t x446 = 272075293807165LLU;
	int8_t x447 = INT8_MIN;
	int32_t t87 = 228993190;

    t87 = ((x445-x446)!=(x447+x448));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x449 = UINT64_MAX;
	volatile uint16_t x450 = 1U;
	static int64_t x451 = INT64_MIN;
	volatile int32_t t88 = -11;

    t88 = ((x449-x450)!=(x451+x452));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x453 = 1U;
	static volatile int64_t x454 = -2305412LL;
	volatile int8_t x455 = -28;
	int16_t x456 = INT16_MAX;
	int32_t t89 = 151168;

    t89 = ((x453-x454)!=(x455+x456));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x457 = INT16_MIN;
	volatile int8_t x458 = INT8_MIN;
	int64_t x459 = -1LL;
	int16_t x460 = 2293;
	volatile int32_t t90 = 603;

    t90 = ((x457-x458)!=(x459+x460));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x461 = -1;
	int64_t x462 = -230646LL;
	int64_t x463 = INT64_MIN;
	int16_t x464 = INT16_MAX;
	static int32_t t91 = 266307291;

    t91 = ((x461-x462)!=(x463+x464));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x465 = 1U;
	volatile int16_t x466 = 84;
	static int16_t x467 = INT16_MIN;
	uint64_t x468 = 892711298LLU;
	int32_t t92 = -62;

    t92 = ((x465-x466)!=(x467+x468));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x472 = -2537;
	volatile int32_t t93 = -3683;

    t93 = ((x469-x470)!=(x471+x472));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x477 = INT64_MIN;
	int64_t x478 = -55223LL;
	volatile uint32_t x479 = 24989961U;
	int8_t x480 = INT8_MIN;
	volatile int32_t t94 = -157197;

    t94 = ((x477-x478)!=(x479+x480));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x483 = INT32_MAX;
	uint64_t x484 = UINT64_MAX;
	int32_t t95 = 3017;

    t95 = ((x481-x482)!=(x483+x484));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x489 = INT8_MAX;
	int32_t x490 = -584;
	volatile uint64_t x491 = 39626999LLU;
	static int32_t x492 = -7867;
	volatile int32_t t96 = 4425;

    t96 = ((x489-x490)!=(x491+x492));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	static int8_t x497 = -1;
	static uint64_t x498 = 14389206LLU;
	static uint64_t x500 = 2132297423425033LLU;
	int32_t t97 = 51;

    t97 = ((x497-x498)!=(x499+x500));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x501 = INT16_MAX;
	int16_t x503 = INT16_MIN;
	int16_t x504 = -1;
	int32_t t98 = 1135;

    t98 = ((x501-x502)!=(x503+x504));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int64_t x505 = -1LL;
	int64_t x507 = -1LL;
	uint32_t x508 = 1980288U;
	volatile int32_t t99 = -6803;

    t99 = ((x505-x506)!=(x507+x508));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x513 = 686LLU;
	uint16_t x514 = UINT16_MAX;
	uint8_t x515 = 1U;
	int16_t x516 = 63;
	volatile int32_t t100 = -228987673;

    t100 = ((x513-x514)!=(x515+x516));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x517 = UINT32_MAX;
	int32_t x518 = 22798;
	volatile uint8_t x519 = UINT8_MAX;
	int32_t x520 = -1;
	int32_t t101 = 135931;

    t101 = ((x517-x518)!=(x519+x520));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x522 = 2499878056549LLU;
	uint64_t x523 = 108901LLU;
	static uint32_t x524 = 12524272U;
	volatile int32_t t102 = 154;

    t102 = ((x521-x522)!=(x523+x524));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x525 = -18;
	static int8_t x526 = INT8_MIN;
	static volatile int64_t x527 = 10325980LL;
	static int32_t t103 = 1829;

    t103 = ((x525-x526)!=(x527+x528));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	uint16_t x533 = UINT16_MAX;
	static int32_t x534 = INT32_MAX;
	int16_t x536 = INT16_MAX;

    t104 = ((x533-x534)!=(x535+x536));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint16_t x537 = 547U;
	static int32_t x538 = -28;
	static volatile int8_t x539 = 2;
	int16_t x540 = INT16_MIN;
	int32_t t105 = 20343;

    t105 = ((x537-x538)!=(x539+x540));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	static int32_t x541 = INT32_MAX;
	uint64_t x542 = 7182526796457LLU;

    t106 = ((x541-x542)!=(x543+x544));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x546 = INT16_MIN;
	static volatile uint16_t x547 = UINT16_MAX;
	static volatile int32_t t107 = -17991668;

    t107 = ((x545-x546)!=(x547+x548));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint8_t x549 = 1U;
	uint16_t x550 = 15518U;
	uint64_t x551 = 4468LLU;
	static int8_t x552 = -28;

    t108 = ((x549-x550)!=(x551+x552));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x553 = -33;
	int64_t x554 = -1LL;
	int32_t x555 = 2053833;
	int32_t t109 = 57;

    t109 = ((x553-x554)!=(x555+x556));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x557 = -1;
	static int64_t x559 = 126643501875569LL;
	uint64_t x560 = 2LLU;
	static volatile int32_t t110 = -1210;

    t110 = ((x557-x558)!=(x559+x560));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x562 = INT32_MAX;
	int64_t x563 = INT64_MIN;
	int8_t x564 = INT8_MAX;
	static int32_t t111 = -29235;

    t111 = ((x561-x562)!=(x563+x564));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint32_t x565 = UINT32_MAX;
	int16_t x566 = -1;
	static uint64_t x568 = 10221558LLU;
	volatile int32_t t112 = 1581;

    t112 = ((x565-x566)!=(x567+x568));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	static int8_t x573 = INT8_MAX;
	int32_t t113 = 17987979;

    t113 = ((x573-x574)!=(x575+x576));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x577 = 3U;
	static int32_t x580 = INT32_MIN;
	volatile int32_t t114 = -62001838;

    t114 = ((x577-x578)!=(x579+x580));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x581 = INT16_MAX;
	int8_t x582 = INT8_MAX;
	uint32_t x583 = UINT32_MAX;

    t115 = ((x581-x582)!=(x583+x584));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x585 = INT16_MIN;
	int16_t x586 = 6;
	volatile int32_t t116 = 2221;

    t116 = ((x585-x586)!=(x587+x588));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x593 = INT8_MIN;
	int8_t x595 = INT8_MAX;
	int8_t x596 = INT8_MIN;
	volatile int32_t t117 = 24133248;

    t117 = ((x593-x594)!=(x595+x596));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x597 = -1LL;
	uint32_t x598 = 5229U;
	volatile int64_t x599 = -101829LL;
	int32_t x600 = -2176426;
	int32_t t118 = 37286;

    t118 = ((x597-x598)!=(x599+x600));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x601 = 72U;
	int8_t x602 = INT8_MIN;
	int32_t x603 = -1;
	int64_t x604 = -2619LL;
	volatile int32_t t119 = 403909902;

    t119 = ((x601-x602)!=(x603+x604));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x609 = 1U;
	volatile uint32_t x610 = 1415885U;
	volatile uint16_t x611 = 5483U;
	int32_t t120 = -7;

    t120 = ((x609-x610)!=(x611+x612));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x613 = 3183;
	int32_t x614 = 1;
	int16_t x615 = -1;
	static int64_t x616 = INT64_MAX;
	volatile int32_t t121 = 1575;

    t121 = ((x613-x614)!=(x615+x616));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile uint8_t x617 = UINT8_MAX;
	static int8_t x618 = INT8_MAX;
	uint32_t x619 = 1877178U;
	volatile int8_t x620 = INT8_MAX;

    t122 = ((x617-x618)!=(x619+x620));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x625 = 1U;
	static int16_t x626 = INT16_MAX;
	uint64_t x627 = 3842275600561LLU;
	int16_t x628 = INT16_MIN;
	volatile int32_t t123 = -250271435;

    t123 = ((x625-x626)!=(x627+x628));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x629 = 31844U;
	int8_t x630 = 5;
	uint8_t x631 = UINT8_MAX;
	int64_t x632 = -1LL;

    t124 = ((x629-x630)!=(x631+x632));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x633 = 118729LLU;
	int32_t x634 = INT32_MIN;
	volatile uint16_t x635 = 0U;
	static uint64_t x636 = 24LLU;
	volatile int32_t t125 = -1497333;

    t125 = ((x633-x634)!=(x635+x636));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	static int64_t x637 = 230995456499LL;
	int16_t x638 = INT16_MIN;
	uint32_t x639 = UINT32_MAX;
	volatile int32_t t126 = -67;

    t126 = ((x637-x638)!=(x639+x640));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x642 = INT64_MAX;
	uint32_t x643 = UINT32_MAX;
	int64_t x644 = 0LL;

    t127 = ((x641-x642)!=(x643+x644));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint16_t x646 = 946U;
	uint64_t x647 = UINT64_MAX;
	int64_t x648 = -1LL;

    t128 = ((x645-x646)!=(x647+x648));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x649 = -1678;
	uint16_t x650 = 0U;
	volatile int32_t t129 = -656240;

    t129 = ((x649-x650)!=(x651+x652));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	static int16_t x653 = 5864;
	int8_t x654 = INT8_MIN;
	int16_t x655 = -1;
	int8_t x656 = INT8_MAX;
	int32_t t130 = -710140;

    t130 = ((x653-x654)!=(x655+x656));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x657 = -1LL;
	int32_t x658 = INT32_MIN;
	static uint64_t x659 = 126277320532LLU;
	static uint32_t x660 = 5536U;
	volatile int32_t t131 = -52447;

    t131 = ((x657-x658)!=(x659+x660));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x661 = 10637U;
	static uint8_t x662 = 13U;
	int64_t x664 = INT64_MIN;

    t132 = ((x661-x662)!=(x663+x664));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x669 = UINT16_MAX;
	int32_t x670 = -1;
	static int64_t x672 = INT64_MAX;

    t133 = ((x669-x670)!=(x671+x672));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x673 = -122LL;
	static int32_t x674 = INT32_MIN;
	int16_t x675 = INT16_MIN;
	static uint8_t x676 = UINT8_MAX;
	int32_t t134 = 43182;

    t134 = ((x673-x674)!=(x675+x676));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x677 = INT8_MIN;
	volatile uint64_t x679 = 22398LLU;
	int16_t x680 = 2;

    t135 = ((x677-x678)!=(x679+x680));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x689 = INT16_MIN;
	uint8_t x690 = 8U;
	int64_t x692 = 4305855778248LL;

    t136 = ((x689-x690)!=(x691+x692));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x693 = INT64_MIN;
	static int8_t x695 = INT8_MAX;
	int32_t t137 = 593262782;

    t137 = ((x693-x694)!=(x695+x696));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x697 = -944073400185LL;
	int32_t x698 = 96594;
	volatile int32_t x699 = 2;
	volatile int8_t x700 = INT8_MIN;
	volatile int32_t t138 = 231664;

    t138 = ((x697-x698)!=(x699+x700));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x702 = -18513073;
	int64_t x703 = INT64_MIN;
	uint16_t x704 = UINT16_MAX;
	int32_t t139 = 133567884;

    t139 = ((x701-x702)!=(x703+x704));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x709 = UINT16_MAX;
	static uint16_t x710 = UINT16_MAX;
	int64_t x712 = -1137309LL;
	volatile int32_t t140 = -1;

    t140 = ((x709-x710)!=(x711+x712));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x713 = 1U;
	static volatile int64_t x714 = -1LL;
	uint16_t x716 = 6U;
	volatile int32_t t141 = -216738510;

    t141 = ((x713-x714)!=(x715+x716));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x722 = INT64_MIN;
	int16_t x724 = 37;

    t142 = ((x721-x722)!=(x723+x724));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x727 = INT64_MIN;
	uint64_t x728 = UINT64_MAX;
	volatile int32_t t143 = 812826;

    t143 = ((x725-x726)!=(x727+x728));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x729 = 3LLU;
	int16_t x731 = -1;
	int8_t x732 = INT8_MAX;

    t144 = ((x729-x730)!=(x731+x732));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x733 = INT32_MIN;
	int64_t x734 = -4112LL;
	int16_t x735 = -4260;
	volatile uint32_t x736 = 128U;
	volatile int32_t t145 = -8;

    t145 = ((x733-x734)!=(x735+x736));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x737 = -522801;
	uint8_t x738 = 1U;
	static int64_t x739 = -1LL;
	static uint32_t x740 = 220593887U;

    t146 = ((x737-x738)!=(x739+x740));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x741 = INT16_MIN;
	static int16_t x743 = 115;
	static int16_t x744 = -251;
	int32_t t147 = 75731896;

    t147 = ((x741-x742)!=(x743+x744));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x749 = INT64_MIN;
	int64_t x751 = -355258166563363LL;
	int32_t x752 = INT32_MAX;

    t148 = ((x749-x750)!=(x751+x752));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x753 = 12U;
	uint64_t x754 = 385923696299751488LLU;
	int32_t x755 = -11;
	int16_t x756 = -170;
	volatile int32_t t149 = -150603133;

    t149 = ((x753-x754)!=(x755+x756));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	static int8_t x757 = -1;
	int64_t x758 = INT64_MIN;
	int8_t x759 = INT8_MIN;
	volatile uint8_t x760 = UINT8_MAX;
	volatile int32_t t150 = -94;

    t150 = ((x757-x758)!=(x759+x760));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x761 = -1;
	volatile int32_t x762 = -65;
	volatile int16_t x763 = INT16_MIN;
	uint64_t x764 = 3288719727453556523LLU;
	volatile int32_t t151 = 104661178;

    t151 = ((x761-x762)!=(x763+x764));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x766 = UINT32_MAX;
	volatile int64_t x767 = INT64_MIN;
	static uint16_t x768 = 390U;
	volatile int32_t t152 = 2152761;

    t152 = ((x765-x766)!=(x767+x768));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x769 = 3U;
	static int8_t x770 = INT8_MIN;

    t153 = ((x769-x770)!=(x771+x772));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x773 = UINT8_MAX;
	int8_t x774 = INT8_MIN;
	uint64_t x775 = UINT64_MAX;
	volatile uint8_t x776 = 51U;
	int32_t t154 = 0;

    t154 = ((x773-x774)!=(x775+x776));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x790 = -1;
	volatile int8_t x791 = INT8_MIN;
	uint16_t x792 = 2559U;
	static volatile int32_t t155 = 277151;

    t155 = ((x789-x790)!=(x791+x792));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint8_t x794 = 27U;
	int64_t x795 = -67944931357LL;
	volatile int32_t t156 = 27675;

    t156 = ((x793-x794)!=(x795+x796));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x797 = -13;
	uint64_t x798 = 0LLU;
	static int8_t x800 = INT8_MIN;
	static int32_t t157 = -312112;

    t157 = ((x797-x798)!=(x799+x800));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x801 = INT64_MIN;
	int32_t x802 = -1;
	int32_t x803 = INT32_MAX;
	int32_t t158 = 23246721;

    t158 = ((x801-x802)!=(x803+x804));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x805 = INT64_MAX;
	int16_t x806 = INT16_MAX;
	volatile uint32_t x807 = 829U;
	int16_t x808 = INT16_MIN;
	int32_t t159 = 3367158;

    t159 = ((x805-x806)!=(x807+x808));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int64_t x809 = -93LL;
	volatile uint16_t x810 = 0U;
	uint8_t x811 = UINT8_MAX;
	static volatile int32_t t160 = -55347810;

    t160 = ((x809-x810)!=(x811+x812));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x813 = INT8_MIN;
	static int32_t x814 = INT32_MIN;
	uint8_t x815 = 85U;
	uint8_t x816 = 57U;
	static volatile int32_t t161 = 133590999;

    t161 = ((x813-x814)!=(x815+x816));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x817 = INT8_MIN;
	static int16_t x818 = INT16_MAX;
	uint64_t x819 = UINT64_MAX;
	int16_t x820 = INT16_MIN;

    t162 = ((x817-x818)!=(x819+x820));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x821 = INT8_MIN;
	uint16_t x822 = UINT16_MAX;
	uint16_t x823 = 2303U;
	int8_t x824 = -30;
	int32_t t163 = 196292;

    t163 = ((x821-x822)!=(x823+x824));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static uint16_t x827 = 0U;
	volatile uint32_t x828 = 435U;

    t164 = ((x825-x826)!=(x827+x828));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x834 = -1;
	uint32_t x836 = UINT32_MAX;
	int32_t t165 = 7;

    t165 = ((x833-x834)!=(x835+x836));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x838 = INT16_MAX;
	uint32_t x840 = 15718294U;
	int32_t t166 = 28291346;

    t166 = ((x837-x838)!=(x839+x840));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int64_t x841 = 35448710LL;
	static uint16_t x842 = 0U;
	volatile uint64_t x843 = 9807LLU;
	int64_t x844 = INT64_MAX;
	volatile int32_t t167 = -26267;

    t167 = ((x841-x842)!=(x843+x844));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x845 = 18;
	static volatile int16_t x846 = INT16_MAX;
	int16_t x847 = -11;
	int16_t x848 = INT16_MAX;
	volatile int32_t t168 = -358360;

    t168 = ((x845-x846)!=(x847+x848));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int32_t x850 = -1;
	static volatile int32_t t169 = -969763396;

    t169 = ((x849-x850)!=(x851+x852));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static int32_t x853 = INT32_MIN;
	int8_t x854 = -1;
	static uint8_t x855 = UINT8_MAX;
	int32_t x856 = -1;
	static int32_t t170 = 1;

    t170 = ((x853-x854)!=(x855+x856));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	static volatile int16_t x857 = INT16_MIN;
	static int64_t x858 = 16556600226LL;
	static uint64_t x859 = UINT64_MAX;
	uint16_t x860 = UINT16_MAX;
	int32_t t171 = 571;

    t171 = ((x857-x858)!=(x859+x860));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x861 = INT8_MIN;
	uint16_t x863 = 6U;
	int32_t x864 = 226723;

    t172 = ((x861-x862)!=(x863+x864));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x866 = -1LL;
	int16_t x867 = INT16_MIN;
	int64_t x868 = -1LL;
	int32_t t173 = -748;

    t173 = ((x865-x866)!=(x867+x868));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x869 = 1;
	volatile int8_t x870 = 14;
	uint64_t x872 = 8878437LLU;
	int32_t t174 = -40215;

    t174 = ((x869-x870)!=(x871+x872));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x874 = 32;
	int32_t x875 = INT32_MIN;
	int32_t x876 = 7;
	volatile int32_t t175 = 1;

    t175 = ((x873-x874)!=(x875+x876));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x877 = INT8_MIN;
	int8_t x878 = -1;
	uint64_t x879 = UINT64_MAX;
	int32_t x880 = INT32_MIN;
	static volatile int32_t t176 = 92;

    t176 = ((x877-x878)!=(x879+x880));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x881 = INT32_MAX;
	int64_t x884 = -1LL;
	int32_t t177 = 363;

    t177 = ((x881-x882)!=(x883+x884));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x886 = INT32_MIN;
	int8_t x887 = 0;
	uint64_t x888 = 48842527105194LLU;
	int32_t t178 = 0;

    t178 = ((x885-x886)!=(x887+x888));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x893 = INT64_MAX;
	uint16_t x894 = 22U;
	int64_t x895 = 414527664LL;
	static int8_t x896 = 15;
	volatile int32_t t179 = 45;

    t179 = ((x893-x894)!=(x895+x896));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x897 = INT32_MAX;
	static volatile int64_t x898 = INT64_MAX;
	static uint32_t x899 = 3718U;
	uint16_t x900 = 4U;
	volatile int32_t t180 = 1;

    t180 = ((x897-x898)!=(x899+x900));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x901 = INT16_MIN;
	int16_t x902 = -1;
	volatile uint8_t x903 = 48U;
	volatile int32_t t181 = 0;

    t181 = ((x901-x902)!=(x903+x904));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x909 = 2440192953845554771LLU;
	uint32_t x910 = 35272U;
	static int32_t x912 = -1;
	volatile int32_t t182 = 1;

    t182 = ((x909-x910)!=(x911+x912));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x925 = 42941156237449640LL;
	static int8_t x927 = INT8_MAX;
	int64_t x928 = INT64_MIN;
	int32_t t183 = -88;

    t183 = ((x925-x926)!=(x927+x928));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x929 = INT8_MIN;
	static int8_t x932 = -1;

    t184 = ((x929-x930)!=(x931+x932));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x933 = -928LL;
	volatile int8_t x935 = INT8_MIN;
	uint32_t x936 = 9U;
	static volatile int32_t t185 = 5;

    t185 = ((x933-x934)!=(x935+x936));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint32_t x939 = 4885U;
	volatile int32_t x940 = 113342035;
	volatile int32_t t186 = 28404;

    t186 = ((x937-x938)!=(x939+x940));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x941 = UINT8_MAX;
	static int64_t x942 = 11813249LL;
	volatile uint16_t x943 = 12U;
	int32_t t187 = 6070;

    t187 = ((x941-x942)!=(x943+x944));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x946 = INT16_MAX;
	static volatile uint16_t x947 = UINT16_MAX;
	int32_t t188 = 1042420;

    t188 = ((x945-x946)!=(x947+x948));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x953 = -1;
	int16_t x954 = INT16_MIN;
	uint32_t x955 = 99312831U;
	volatile int8_t x956 = -1;
	int32_t t189 = 27;

    t189 = ((x953-x954)!=(x955+x956));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x957 = 22U;
	static uint64_t x958 = 3985194953174363358LLU;
	volatile int16_t x959 = INT16_MIN;
	int16_t x960 = INT16_MAX;
	volatile int32_t t190 = -25;

    t190 = ((x957-x958)!=(x959+x960));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x961 = -1LL;
	uint8_t x962 = 30U;
	uint64_t x963 = 1681007366812463837LLU;
	int32_t x964 = INT32_MIN;
	static volatile int32_t t191 = 136038983;

    t191 = ((x961-x962)!=(x963+x964));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x969 = INT8_MIN;
	uint64_t x970 = 1792247571120794039LLU;
	uint32_t x971 = 2781739U;
	int64_t x972 = -160884188607LL;
	int32_t t192 = 9115;

    t192 = ((x969-x970)!=(x971+x972));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x974 = 2U;
	uint8_t x976 = UINT8_MAX;
	volatile int32_t t193 = 0;

    t193 = ((x973-x974)!=(x975+x976));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	static int8_t x977 = INT8_MAX;
	int8_t x978 = -7;
	volatile int64_t x980 = INT64_MIN;
	volatile int32_t t194 = -22553775;

    t194 = ((x977-x978)!=(x979+x980));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x981 = UINT64_MAX;
	int16_t x982 = 392;
	int16_t x984 = 29;
	int32_t t195 = 20896;

    t195 = ((x981-x982)!=(x983+x984));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint8_t x985 = 4U;
	volatile int16_t x986 = -1;
	uint32_t x987 = 2698U;
	int16_t x988 = -2;
	volatile int32_t t196 = -52638;

    t196 = ((x985-x986)!=(x987+x988));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x989 = INT8_MAX;
	int64_t x990 = 24925LL;
	uint8_t x991 = UINT8_MAX;
	volatile int8_t x992 = -1;
	volatile int32_t t197 = 1167337;

    t197 = ((x989-x990)!=(x991+x992));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x993 = -4647195582039LL;
	static int16_t x994 = 2;
	int8_t x995 = -1;
	volatile int32_t x996 = INT32_MAX;
	volatile int32_t t198 = -390;

    t198 = ((x993-x994)!=(x995+x996));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	static int32_t x997 = -1;
	int8_t x998 = INT8_MIN;
	uint32_t x999 = UINT32_MAX;
	static uint64_t x1000 = UINT64_MAX;
	int32_t t199 = 254335832;

    t199 = ((x997-x998)!=(x999+x1000));

    if (t199 != 1) { NG(); } else { ; }
	
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

