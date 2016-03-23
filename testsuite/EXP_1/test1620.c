
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

int8_t x1 = INT8_MIN;
uint8_t x7 = 7U;
int16_t x10 = INT16_MIN;
int8_t x14 = -1;
volatile int16_t x16 = INT16_MAX;
int32_t t4 = 889888320;
int64_t x24 = INT64_MAX;
volatile int64_t x33 = INT64_MIN;
volatile int32_t t8 = -912222;
int32_t x37 = INT32_MIN;
int32_t x39 = INT32_MAX;
static int32_t t11 = 933219;
int8_t x51 = -1;
int32_t x52 = INT32_MAX;
int32_t t12 = 17867;
uint64_t x66 = UINT64_MAX;
uint32_t x69 = 220U;
uint32_t x71 = 2407U;
uint32_t x83 = 26419828U;
static volatile int32_t x103 = -1;
int16_t x104 = INT16_MIN;
int8_t x107 = INT8_MIN;
uint8_t x108 = UINT8_MAX;
int32_t t26 = -153383;
int8_t x116 = 23;
volatile int32_t t29 = -18030529;
int8_t x129 = 0;
int16_t x131 = 218;
int32_t t31 = -966;
int8_t x135 = -1;
int64_t x136 = -1LL;
volatile int64_t x139 = INT64_MIN;
int32_t t33 = -553528393;
uint32_t x143 = UINT32_MAX;
int64_t x145 = INT64_MIN;
volatile int8_t x146 = INT8_MIN;
int32_t x153 = -1;
int8_t x154 = INT8_MIN;
static int64_t x155 = -1LL;
static volatile int64_t x159 = -1LL;
static int16_t x162 = -43;
int32_t t39 = -77570;
int8_t x173 = -22;
static int32_t x175 = -1;
uint32_t x188 = 1798022U;
static volatile int32_t t45 = 678;
int16_t x201 = INT16_MIN;
volatile int32_t t49 = 213;
int64_t x210 = INT64_MIN;
volatile int16_t x214 = INT16_MAX;
int8_t x220 = -1;
volatile int32_t t54 = 78;
volatile int32_t t56 = 77831451;
static volatile int32_t t58 = 1;
uint16_t x249 = 22135U;
volatile int32_t t61 = 4182;
uint32_t x264 = 7629U;
static int32_t x272 = 30694075;
volatile int8_t x273 = INT8_MIN;
int64_t x274 = 11LL;
volatile uint16_t x275 = 2788U;
int32_t t66 = -58242250;
static int16_t x278 = INT16_MIN;
int8_t x280 = INT8_MAX;
int64_t x283 = -3391186569LL;
int32_t x284 = -1;
uint32_t x286 = 1071418369U;
uint16_t x288 = 4276U;
int32_t t69 = -1;
int8_t x289 = INT8_MAX;
int32_t x290 = -1;
int8_t x291 = INT8_MIN;
static int16_t x292 = INT16_MAX;
static int16_t x294 = -10931;
static uint64_t x302 = 191618516267325LLU;
static volatile int16_t x306 = INT16_MAX;
static volatile int32_t t74 = -194;
int32_t x309 = 4892;
volatile int32_t x314 = -1;
int16_t x318 = INT16_MIN;
int16_t x319 = INT16_MAX;
int64_t x321 = INT64_MIN;
static uint64_t x329 = 3428378887335190733LLU;
volatile uint32_t x338 = 134458U;
int16_t x344 = 152;
static volatile int32_t x354 = 54945142;
volatile uint8_t x358 = UINT8_MAX;
uint32_t x364 = 24312U;
volatile int32_t t88 = 1207;
int32_t x374 = -53053286;
uint8_t x375 = UINT8_MAX;
uint16_t x376 = UINT16_MAX;
int32_t t91 = 183;
volatile int16_t x380 = INT16_MAX;
int16_t x381 = INT16_MIN;
volatile uint64_t x382 = UINT64_MAX;
int16_t x385 = INT16_MIN;
volatile int16_t x387 = -1;
int64_t x394 = -1LL;
static volatile int32_t t97 = -11574356;
volatile int32_t t98 = -5241;
static int32_t x414 = INT32_MIN;
int8_t x417 = -1;
int8_t x420 = INT8_MIN;
int64_t x424 = INT64_MIN;
volatile int32_t t103 = 71116;
static volatile int32_t t104 = -24;
volatile int64_t x440 = INT64_MIN;
uint32_t x444 = 119U;
int32_t t108 = 0;
uint32_t x446 = UINT32_MAX;
uint16_t x448 = 25503U;
int8_t x454 = INT8_MAX;
int64_t x462 = -1LL;
int32_t t113 = -115962;
int16_t x475 = INT16_MAX;
int64_t x480 = 54070253LL;
int8_t x484 = INT8_MAX;
int32_t x485 = INT32_MIN;
static uint64_t x489 = 33LLU;
volatile uint32_t x500 = UINT32_MAX;
static uint32_t x502 = 1U;
int32_t x505 = INT32_MAX;
int16_t x509 = INT16_MIN;
int64_t x510 = 987894451984320939LL;
int16_t x513 = -5;
volatile int8_t x519 = -1;
volatile int32_t t129 = -4248;
static int8_t x531 = INT8_MIN;
static int32_t t132 = 111841;
int16_t x542 = INT16_MAX;
volatile uint32_t x544 = UINT32_MAX;
static int32_t t133 = -42701848;
int32_t x547 = -2119801;
uint8_t x548 = 7U;
volatile int32_t x550 = -1;
static volatile int32_t t135 = -1382175;
int16_t x553 = -107;
static int32_t t136 = -12191854;
uint64_t x565 = 415312571297856908LLU;
static volatile int32_t t139 = 697339;
int16_t x573 = INT16_MAX;
volatile int16_t x577 = INT16_MIN;
volatile int32_t x585 = INT32_MIN;
static volatile int16_t x586 = 0;
int8_t x588 = INT8_MIN;
volatile int32_t t146 = 3570794;
static int64_t x599 = -1LL;
uint64_t x602 = 257244964884443LLU;
int64_t x607 = INT64_MIN;
uint8_t x609 = 8U;
uint16_t x612 = UINT16_MAX;
uint64_t x614 = 12881150762066LLU;
uint32_t x615 = 15765412U;
static int32_t x618 = INT32_MAX;
static int64_t x619 = 179203994959LL;
uint32_t x620 = 490520U;
static int32_t x621 = INT32_MIN;
int32_t x625 = INT32_MIN;
static volatile uint32_t x630 = UINT32_MAX;
uint8_t x631 = UINT8_MAX;
volatile uint16_t x632 = 1729U;
int8_t x635 = INT8_MAX;
int8_t x636 = INT8_MAX;
int32_t t157 = -4333;
static volatile int32_t t161 = 253864;
uint64_t x659 = UINT64_MAX;
int64_t x662 = -1LL;
uint64_t x664 = UINT64_MAX;
uint16_t x666 = 3649U;
uint8_t x672 = 0U;
int32_t x677 = -337;
volatile int64_t x680 = INT64_MIN;
volatile int64_t x691 = INT64_MIN;
uint8_t x695 = UINT8_MAX;
int32_t x696 = INT32_MIN;
volatile int32_t t171 = -32275;
int64_t x698 = INT64_MIN;
volatile int64_t x709 = INT64_MAX;
uint32_t x712 = UINT32_MAX;
int16_t x713 = INT16_MAX;
volatile int32_t t176 = -78315;
uint32_t x719 = UINT32_MAX;
int32_t x725 = INT32_MAX;
uint16_t x739 = UINT16_MAX;
int32_t t181 = -411;
static uint64_t x745 = 4460983147LLU;
uint8_t x746 = UINT8_MAX;
volatile int8_t x758 = -8;
int32_t x759 = -6852683;
volatile int64_t x761 = INT64_MIN;
static volatile int16_t x766 = INT16_MIN;
int32_t x771 = INT32_MIN;
int16_t x772 = -1;
static int32_t t189 = -5811608;
int8_t x788 = INT8_MAX;
int32_t x793 = INT32_MIN;
uint16_t x808 = UINT16_MAX;
volatile int16_t x814 = -43;
int32_t x818 = -1;


void f0(void) {
    	uint32_t x2 = 920029U;
	int16_t x3 = INT16_MIN;
	static uint64_t x4 = 266881346090224867LLU;
	volatile int32_t t0 = -211195093;

    t0 = (((x1>x2)/x3)<=x4);

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	uint32_t x6 = UINT32_MAX;
	uint8_t x8 = UINT8_MAX;
	volatile int32_t t1 = 129770;

    t1 = (((x5>x6)/x7)<=x8);

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile int32_t x9 = INT32_MIN;
	int32_t x11 = 359494;
	static uint8_t x12 = 3U;
	static int32_t t2 = 76869;

    t2 = (((x9>x10)/x11)<=x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = -1LL;
	int64_t x15 = INT64_MIN;
	int32_t t3 = 45505;

    t3 = (((x13>x14)/x15)<=x16);

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x17 = 26U;
	int16_t x18 = INT16_MAX;
	int16_t x19 = 221;
	static int16_t x20 = 0;

    t4 = (((x17>x18)/x19)<=x20);

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint32_t x21 = 7593U;
	volatile uint32_t x22 = 1087U;
	int8_t x23 = INT8_MAX;
	volatile int32_t t5 = 85011598;

    t5 = (((x21>x22)/x23)<=x24);

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x25 = -483373LL;
	int32_t x26 = INT32_MIN;
	int8_t x27 = INT8_MIN;
	int16_t x28 = INT16_MIN;
	static int32_t t6 = -1533;

    t6 = (((x25>x26)/x27)<=x28);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x29 = UINT16_MAX;
	volatile int32_t x30 = INT32_MAX;
	int8_t x31 = INT8_MAX;
	int32_t x32 = INT32_MIN;
	int32_t t7 = -102784766;

    t7 = (((x29>x30)/x31)<=x32);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x34 = UINT8_MAX;
	int32_t x35 = -1;
	uint8_t x36 = 85U;

    t8 = (((x33>x34)/x35)<=x36);

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x38 = INT8_MIN;
	uint64_t x40 = 605858LLU;
	int32_t t9 = -1;

    t9 = (((x37>x38)/x39)<=x40);

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x41 = -1;
	int64_t x42 = 62748964LL;
	int16_t x43 = 3;
	uint16_t x44 = UINT16_MAX;
	int32_t t10 = 3527645;

    t10 = (((x41>x42)/x43)<=x44);

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint16_t x45 = 0U;
	uint16_t x46 = 0U;
	int8_t x47 = INT8_MAX;
	uint64_t x48 = 59685458888431787LLU;

    t11 = (((x45>x46)/x47)<=x48);

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x49 = INT32_MIN;
	int16_t x50 = INT16_MIN;

    t12 = (((x49>x50)/x51)<=x52);

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = INT8_MIN;
	static int16_t x54 = INT16_MIN;
	static int64_t x55 = INT64_MIN;
	static volatile uint8_t x56 = 0U;
	int32_t t13 = 0;

    t13 = (((x53>x54)/x55)<=x56);

    if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = 3;
	int16_t x58 = -1;
	int16_t x59 = INT16_MIN;
	int16_t x60 = INT16_MIN;
	static volatile int32_t t14 = -2909;

    t14 = (((x57>x58)/x59)<=x60);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x61 = INT16_MAX;
	int16_t x62 = 76;
	volatile int32_t x63 = -137;
	static volatile int64_t x64 = INT64_MAX;
	int32_t t15 = 4;

    t15 = (((x61>x62)/x63)<=x64);

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x65 = INT8_MAX;
	int16_t x67 = INT16_MIN;
	volatile int16_t x68 = -210;
	int32_t t16 = -1317;

    t16 = (((x65>x66)/x67)<=x68);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x70 = 3;
	int16_t x72 = INT16_MIN;
	static volatile int32_t t17 = 667436314;

    t17 = (((x69>x70)/x71)<=x72);

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x73 = -1;
	int64_t x74 = -123697LL;
	volatile int8_t x75 = -1;
	int32_t x76 = -1;
	volatile int32_t t18 = 0;

    t18 = (((x73>x74)/x75)<=x76);

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static int16_t x77 = -7;
	int16_t x78 = INT16_MIN;
	static volatile int64_t x79 = -1LL;
	int16_t x80 = INT16_MAX;
	static volatile int32_t t19 = 55244;

    t19 = (((x77>x78)/x79)<=x80);

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int64_t x81 = -66611410652610260LL;
	int8_t x82 = 1;
	int32_t x84 = 8;
	static volatile int32_t t20 = 413;

    t20 = (((x81>x82)/x83)<=x84);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = 12U;
	static int8_t x86 = INT8_MIN;
	int16_t x87 = INT16_MIN;
	uint8_t x88 = UINT8_MAX;
	volatile int32_t t21 = 335117;

    t21 = (((x85>x86)/x87)<=x88);

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = -6269;
	int64_t x90 = 7826843LL;
	int64_t x91 = INT64_MIN;
	static int8_t x92 = 6;
	int32_t t22 = 93896110;

    t22 = (((x89>x90)/x91)<=x92);

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	static volatile int16_t x93 = -1;
	int16_t x94 = INT16_MIN;
	int64_t x95 = -1LL;
	uint32_t x96 = 16611U;
	int32_t t23 = -11;

    t23 = (((x93>x94)/x95)<=x96);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x101 = INT32_MAX;
	int8_t x102 = INT8_MAX;
	volatile int32_t t24 = -188850;

    t24 = (((x101>x102)/x103)<=x104);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	uint32_t x105 = 152U;
	uint32_t x106 = UINT32_MAX;
	volatile int32_t t25 = 504491834;

    t25 = (((x105>x106)/x107)<=x108);

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x109 = 1LLU;
	int16_t x110 = INT16_MAX;
	uint8_t x111 = 2U;
	int8_t x112 = INT8_MIN;

    t26 = (((x109>x110)/x111)<=x112);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x113 = INT8_MIN;
	uint64_t x114 = UINT64_MAX;
	int8_t x115 = -1;
	int32_t t27 = -11147;

    t27 = (((x113>x114)/x115)<=x116);

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint8_t x117 = 3U;
	int8_t x118 = 9;
	int64_t x119 = INT64_MIN;
	static int64_t x120 = 3LL;
	volatile int32_t t28 = 8017;

    t28 = (((x117>x118)/x119)<=x120);

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x121 = 14356U;
	static int16_t x122 = 19;
	uint8_t x123 = 101U;
	uint8_t x124 = 1U;

    t29 = (((x121>x122)/x123)<=x124);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x125 = UINT32_MAX;
	int16_t x126 = -3;
	int8_t x127 = -19;
	static uint16_t x128 = 448U;
	static volatile int32_t t30 = 138194;

    t30 = (((x125>x126)/x127)<=x128);

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x130 = 4029U;
	uint8_t x132 = 3U;

    t31 = (((x129>x130)/x131)<=x132);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x133 = -1;
	uint64_t x134 = 257371942124LLU;
	int32_t t32 = -12286;

    t32 = (((x133>x134)/x135)<=x136);

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint64_t x137 = 5719593936812468LLU;
	uint32_t x138 = UINT32_MAX;
	uint8_t x140 = UINT8_MAX;

    t33 = (((x137>x138)/x139)<=x140);

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x141 = INT64_MAX;
	volatile int16_t x142 = INT16_MIN;
	int16_t x144 = -1;
	volatile int32_t t34 = -4;

    t34 = (((x141>x142)/x143)<=x144);

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x147 = -1;
	static int8_t x148 = INT8_MAX;
	int32_t t35 = 0;

    t35 = (((x145>x146)/x147)<=x148);

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint8_t x149 = 4U;
	int8_t x150 = -53;
	static int64_t x151 = INT64_MIN;
	static volatile uint8_t x152 = 5U;
	static int32_t t36 = -35591251;

    t36 = (((x149>x150)/x151)<=x152);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x156 = UINT32_MAX;
	int32_t t37 = 36016;

    t37 = (((x153>x154)/x155)<=x156);

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x157 = INT8_MIN;
	uint8_t x158 = 1U;
	volatile int32_t x160 = -86007;
	volatile int32_t t38 = -9760271;

    t38 = (((x157>x158)/x159)<=x160);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint32_t x161 = 15U;
	uint8_t x163 = UINT8_MAX;
	uint32_t x164 = 0U;

    t39 = (((x161>x162)/x163)<=x164);

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x165 = INT16_MIN;
	static int32_t x166 = INT32_MAX;
	int16_t x167 = -1;
	int32_t x168 = -1325225;
	volatile int32_t t40 = -1;

    t40 = (((x165>x166)/x167)<=x168);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x169 = INT32_MIN;
	int64_t x170 = 30452665939277LL;
	volatile int8_t x171 = INT8_MIN;
	volatile int64_t x172 = 118793LL;
	static volatile int32_t t41 = 7151466;

    t41 = (((x169>x170)/x171)<=x172);

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	static volatile uint16_t x174 = 0U;
	static int64_t x176 = INT64_MAX;
	volatile int32_t t42 = 0;

    t42 = (((x173>x174)/x175)<=x176);

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x177 = 2984225LLU;
	static uint8_t x178 = 3U;
	int64_t x179 = 8613257633093039LL;
	int16_t x180 = INT16_MAX;
	int32_t t43 = -589656824;

    t43 = (((x177>x178)/x179)<=x180);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int64_t x181 = INT64_MAX;
	static int16_t x182 = -1;
	volatile int16_t x183 = -1;
	uint32_t x184 = 260934664U;
	static int32_t t44 = -211498;

    t44 = (((x181>x182)/x183)<=x184);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint64_t x185 = 12867425521LLU;
	int16_t x186 = INT16_MIN;
	static volatile uint8_t x187 = 10U;

    t45 = (((x185>x186)/x187)<=x188);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x189 = INT32_MIN;
	int16_t x190 = INT16_MAX;
	volatile int8_t x191 = INT8_MAX;
	uint16_t x192 = UINT16_MAX;
	int32_t t46 = 62628;

    t46 = (((x189>x190)/x191)<=x192);

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x193 = INT64_MIN;
	int16_t x194 = INT16_MAX;
	int64_t x195 = INT64_MAX;
	static int64_t x196 = INT64_MAX;
	int32_t t47 = 86;

    t47 = (((x193>x194)/x195)<=x196);

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x197 = 5103U;
	int32_t x198 = -1796;
	int32_t x199 = -1;
	volatile uint32_t x200 = 49619U;
	volatile int32_t t48 = -41264465;

    t48 = (((x197>x198)/x199)<=x200);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x202 = -3LL;
	static volatile int64_t x203 = INT64_MAX;
	int64_t x204 = -2876198227872242161LL;

    t49 = (((x201>x202)/x203)<=x204);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	static int64_t x205 = INT64_MIN;
	int8_t x206 = -26;
	int16_t x207 = -1;
	volatile int64_t x208 = INT64_MAX;
	volatile int32_t t50 = -238;

    t50 = (((x205>x206)/x207)<=x208);

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x209 = UINT8_MAX;
	uint32_t x211 = UINT32_MAX;
	volatile uint32_t x212 = 1452285U;
	int32_t t51 = -1497;

    t51 = (((x209>x210)/x211)<=x212);

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x213 = 1304708LLU;
	int8_t x215 = INT8_MIN;
	int32_t x216 = INT32_MIN;
	int32_t t52 = 1932921;

    t52 = (((x213>x214)/x215)<=x216);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint64_t x217 = 60173256LLU;
	uint16_t x218 = 61U;
	int64_t x219 = -188670006228482801LL;
	volatile int32_t t53 = -6246;

    t53 = (((x217>x218)/x219)<=x220);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int16_t x221 = INT16_MIN;
	volatile uint32_t x222 = 6U;
	static volatile int64_t x223 = -153093481666094624LL;
	uint16_t x224 = UINT16_MAX;

    t54 = (((x221>x222)/x223)<=x224);

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int16_t x229 = INT16_MIN;
	int16_t x230 = 1229;
	volatile int64_t x231 = INT64_MIN;
	volatile int64_t x232 = -182969419583966LL;
	volatile int32_t t55 = 0;

    t55 = (((x229>x230)/x231)<=x232);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x233 = INT32_MAX;
	int16_t x234 = INT16_MIN;
	int64_t x235 = 284083358358868915LL;
	int64_t x236 = INT64_MAX;

    t56 = (((x233>x234)/x235)<=x236);

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x237 = INT8_MIN;
	uint16_t x238 = 5503U;
	static int64_t x239 = INT64_MIN;
	volatile uint8_t x240 = 13U;
	volatile int32_t t57 = -29384;

    t57 = (((x237>x238)/x239)<=x240);

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x241 = 0U;
	static volatile int16_t x242 = INT16_MAX;
	uint64_t x243 = 1091LLU;
	int32_t x244 = -1;

    t58 = (((x241>x242)/x243)<=x244);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x245 = INT16_MIN;
	int64_t x246 = INT64_MIN;
	static uint16_t x247 = UINT16_MAX;
	int8_t x248 = -1;
	int32_t t59 = -53670;

    t59 = (((x245>x246)/x247)<=x248);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x250 = -1;
	uint8_t x251 = UINT8_MAX;
	uint64_t x252 = 8282530184230979LLU;
	volatile int32_t t60 = 46969;

    t60 = (((x249>x250)/x251)<=x252);

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x253 = 26U;
	volatile int8_t x254 = INT8_MIN;
	static uint32_t x255 = 196829U;
	int8_t x256 = -4;

    t61 = (((x253>x254)/x255)<=x256);

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int8_t x257 = INT8_MAX;
	uint8_t x258 = 16U;
	volatile int32_t x259 = -1;
	int64_t x260 = INT64_MIN;
	int32_t t62 = -11980;

    t62 = (((x257>x258)/x259)<=x260);

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint8_t x261 = 68U;
	volatile int64_t x262 = 13947LL;
	int8_t x263 = INT8_MIN;
	int32_t t63 = 163052;

    t63 = (((x261>x262)/x263)<=x264);

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int16_t x265 = 735;
	static int32_t x266 = -1;
	uint32_t x267 = 121576134U;
	int16_t x268 = INT16_MIN;
	static volatile int32_t t64 = 22079243;

    t64 = (((x265>x266)/x267)<=x268);

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x269 = INT64_MAX;
	volatile int32_t x270 = -33468424;
	volatile uint16_t x271 = 79U;
	static volatile int32_t t65 = -60;

    t65 = (((x269>x270)/x271)<=x272);

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x276 = INT8_MAX;

    t66 = (((x273>x274)/x275)<=x276);

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x277 = UINT32_MAX;
	static volatile int8_t x279 = INT8_MAX;
	volatile int32_t t67 = 253635;

    t67 = (((x277>x278)/x279)<=x280);

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x281 = 16381899227266LL;
	uint16_t x282 = UINT16_MAX;
	int32_t t68 = 377385176;

    t68 = (((x281>x282)/x283)<=x284);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x285 = INT32_MAX;
	uint16_t x287 = 7U;

    t69 = (((x285>x286)/x287)<=x288);

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t t70 = 7422;

    t70 = (((x289>x290)/x291)<=x292);

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x293 = 3U;
	uint64_t x295 = 63801591LLU;
	volatile int64_t x296 = INT64_MAX;
	static int32_t t71 = -10;

    t71 = (((x293>x294)/x295)<=x296);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x297 = 1702083403U;
	uint32_t x298 = 1101U;
	int16_t x299 = INT16_MAX;
	uint16_t x300 = 30U;
	static volatile int32_t t72 = 19441;

    t72 = (((x297>x298)/x299)<=x300);

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int8_t x301 = -1;
	int8_t x303 = 1;
	uint8_t x304 = 1U;
	static int32_t t73 = -1;

    t73 = (((x301>x302)/x303)<=x304);

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint16_t x305 = UINT16_MAX;
	int32_t x307 = 2717380;
	uint64_t x308 = UINT64_MAX;

    t74 = (((x305>x306)/x307)<=x308);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x310 = INT32_MAX;
	static int32_t x311 = -1;
	int32_t x312 = INT32_MIN;
	int32_t t75 = 702826;

    t75 = (((x309>x310)/x311)<=x312);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x313 = INT16_MIN;
	static int64_t x315 = INT64_MIN;
	int32_t x316 = INT32_MIN;
	int32_t t76 = 256785;

    t76 = (((x313>x314)/x315)<=x316);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile uint64_t x317 = 2709718218LLU;
	int32_t x320 = -1184564;
	static int32_t t77 = -7433970;

    t77 = (((x317>x318)/x319)<=x320);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x322 = UINT64_MAX;
	int16_t x323 = INT16_MIN;
	volatile int8_t x324 = -1;
	int32_t t78 = 16044399;

    t78 = (((x321>x322)/x323)<=x324);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x325 = 424765LLU;
	static int64_t x326 = -1LL;
	int16_t x327 = INT16_MAX;
	uint64_t x328 = 4097957494046864172LLU;
	int32_t t79 = 50;

    t79 = (((x325>x326)/x327)<=x328);

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile uint32_t x330 = 88U;
	static volatile int64_t x331 = INT64_MIN;
	uint16_t x332 = 3311U;
	int32_t t80 = -256;

    t80 = (((x329>x330)/x331)<=x332);

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x333 = -1LL;
	static int64_t x334 = INT64_MIN;
	int8_t x335 = -26;
	int16_t x336 = -471;
	int32_t t81 = 6937;

    t81 = (((x333>x334)/x335)<=x336);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x337 = UINT32_MAX;
	int64_t x339 = -180462519287052123LL;
	int8_t x340 = INT8_MIN;
	volatile int32_t t82 = 2;

    t82 = (((x337>x338)/x339)<=x340);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint8_t x341 = 0U;
	int64_t x342 = INT64_MAX;
	static volatile uint64_t x343 = 761LLU;
	int32_t t83 = -29260;

    t83 = (((x341>x342)/x343)<=x344);

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x345 = INT8_MIN;
	static uint16_t x346 = 1U;
	static int16_t x347 = -1;
	uint32_t x348 = 921336087U;
	int32_t t84 = -101;

    t84 = (((x345>x346)/x347)<=x348);

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x349 = INT16_MIN;
	uint64_t x350 = 55428747615LLU;
	static uint64_t x351 = UINT64_MAX;
	static int32_t x352 = INT32_MIN;
	int32_t t85 = 38507;

    t85 = (((x349>x350)/x351)<=x352);

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x353 = 44U;
	int32_t x355 = INT32_MAX;
	volatile uint16_t x356 = UINT16_MAX;
	volatile int32_t t86 = -2;

    t86 = (((x353>x354)/x355)<=x356);

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x357 = INT64_MIN;
	volatile int16_t x359 = INT16_MIN;
	int32_t x360 = 238;
	static volatile int32_t t87 = 5656532;

    t87 = (((x357>x358)/x359)<=x360);

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x361 = 1318758LLU;
	int8_t x362 = 61;
	static volatile uint8_t x363 = UINT8_MAX;

    t88 = (((x361>x362)/x363)<=x364);

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x365 = -1623;
	int16_t x366 = INT16_MIN;
	static int16_t x367 = -1;
	volatile int16_t x368 = -6;
	volatile int32_t t89 = -3777;

    t89 = (((x365>x366)/x367)<=x368);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x369 = -84219741LL;
	volatile int8_t x370 = INT8_MAX;
	uint32_t x371 = 64130012U;
	int8_t x372 = INT8_MIN;
	static volatile int32_t t90 = -4718658;

    t90 = (((x369>x370)/x371)<=x372);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int64_t x373 = 49733756825287339LL;

    t91 = (((x373>x374)/x375)<=x376);

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint8_t x377 = 84U;
	int8_t x378 = INT8_MIN;
	volatile int32_t x379 = 99000;
	volatile int32_t t92 = -20;

    t92 = (((x377>x378)/x379)<=x380);

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	uint32_t x383 = 141956U;
	volatile int16_t x384 = INT16_MIN;
	volatile int32_t t93 = -1956;

    t93 = (((x381>x382)/x383)<=x384);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x386 = -1;
	uint64_t x388 = 208580628058LLU;
	int32_t t94 = 11;

    t94 = (((x385>x386)/x387)<=x388);

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x389 = UINT32_MAX;
	int16_t x390 = 101;
	int32_t x391 = INT32_MIN;
	uint16_t x392 = 1U;
	int32_t t95 = -392808547;

    t95 = (((x389>x390)/x391)<=x392);

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x393 = 1;
	uint16_t x395 = UINT16_MAX;
	static uint64_t x396 = UINT64_MAX;
	volatile int32_t t96 = 153;

    t96 = (((x393>x394)/x395)<=x396);

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x397 = -3877531407888LL;
	int64_t x398 = 536311531487452876LL;
	int64_t x399 = -604060427235748LL;
	uint64_t x400 = UINT64_MAX;

    t97 = (((x397>x398)/x399)<=x400);

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x401 = -1;
	int8_t x402 = -1;
	volatile int32_t x403 = INT32_MAX;
	int64_t x404 = INT64_MIN;

    t98 = (((x401>x402)/x403)<=x404);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x405 = INT64_MIN;
	int8_t x406 = -5;
	static volatile int32_t x407 = INT32_MIN;
	volatile uint32_t x408 = 31613U;
	int32_t t99 = 6;

    t99 = (((x405>x406)/x407)<=x408);

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x409 = -1;
	int16_t x410 = 0;
	volatile int64_t x411 = INT64_MIN;
	int64_t x412 = -1LL;
	volatile int32_t t100 = -7897;

    t100 = (((x409>x410)/x411)<=x412);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x413 = -49575LL;
	int8_t x415 = INT8_MIN;
	int64_t x416 = INT64_MIN;
	int32_t t101 = -23;

    t101 = (((x413>x414)/x415)<=x416);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x418 = UINT64_MAX;
	uint64_t x419 = 13568105LLU;
	int32_t t102 = 93;

    t102 = (((x417>x418)/x419)<=x420);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x421 = INT64_MAX;
	volatile uint32_t x422 = 2997U;
	static volatile uint16_t x423 = UINT16_MAX;

    t103 = (((x421>x422)/x423)<=x424);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x425 = INT32_MAX;
	uint64_t x426 = UINT64_MAX;
	uint32_t x427 = 13U;
	int8_t x428 = INT8_MIN;

    t104 = (((x425>x426)/x427)<=x428);

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x429 = INT64_MIN;
	int64_t x430 = 1868506LL;
	volatile uint16_t x431 = 2U;
	volatile int16_t x432 = INT16_MAX;
	int32_t t105 = 193377590;

    t105 = (((x429>x430)/x431)<=x432);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x433 = -556916LL;
	int64_t x434 = INT64_MIN;
	uint8_t x435 = 17U;
	static int64_t x436 = 2LL;
	int32_t t106 = 0;

    t106 = (((x433>x434)/x435)<=x436);

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x437 = INT8_MIN;
	static int32_t x438 = 3;
	uint8_t x439 = 6U;
	int32_t t107 = -21880426;

    t107 = (((x437>x438)/x439)<=x440);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x441 = INT64_MAX;
	uint32_t x442 = 42U;
	int64_t x443 = -2728358LL;

    t108 = (((x441>x442)/x443)<=x444);

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x445 = INT8_MIN;
	uint8_t x447 = 2U;
	volatile int32_t t109 = 25750;

    t109 = (((x445>x446)/x447)<=x448);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x449 = INT32_MIN;
	uint8_t x450 = 35U;
	volatile uint32_t x451 = UINT32_MAX;
	static uint16_t x452 = 135U;
	int32_t t110 = -1687;

    t110 = (((x449>x450)/x451)<=x452);

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int8_t x453 = -19;
	static int64_t x455 = 342589529177695LL;
	int64_t x456 = -70702781801892903LL;
	int32_t t111 = 8;

    t111 = (((x453>x454)/x455)<=x456);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int32_t x457 = -1;
	uint64_t x458 = 791LLU;
	int8_t x459 = -1;
	int8_t x460 = 3;
	int32_t t112 = -13778433;

    t112 = (((x457>x458)/x459)<=x460);

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint32_t x461 = 4U;
	static int8_t x463 = -47;
	int8_t x464 = INT8_MIN;

    t113 = (((x461>x462)/x463)<=x464);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	uint64_t x465 = 2675LLU;
	uint8_t x466 = 3U;
	int32_t x467 = -48441093;
	volatile int32_t x468 = INT32_MIN;
	int32_t t114 = 13;

    t114 = (((x465>x466)/x467)<=x468);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint16_t x469 = 102U;
	static volatile int32_t x470 = INT32_MAX;
	int8_t x471 = INT8_MIN;
	int32_t x472 = 4807;
	int32_t t115 = -23151;

    t115 = (((x469>x470)/x471)<=x472);

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x473 = -79445739155LL;
	volatile int32_t x474 = INT32_MIN;
	int64_t x476 = 47299637255630693LL;
	int32_t t116 = -1621957;

    t116 = (((x473>x474)/x475)<=x476);

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x477 = -1;
	int64_t x478 = INT64_MAX;
	uint8_t x479 = 8U;
	int32_t t117 = 33;

    t117 = (((x477>x478)/x479)<=x480);

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x481 = INT16_MIN;
	int32_t x482 = 823;
	static int32_t x483 = INT32_MAX;
	int32_t t118 = -573439465;

    t118 = (((x481>x482)/x483)<=x484);

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x486 = INT8_MAX;
	int64_t x487 = -1LL;
	static volatile int8_t x488 = 0;
	volatile int32_t t119 = -13348;

    t119 = (((x485>x486)/x487)<=x488);

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint32_t x490 = 41665005U;
	uint8_t x491 = UINT8_MAX;
	static int8_t x492 = 0;
	static int32_t t120 = 0;

    t120 = (((x489>x490)/x491)<=x492);

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x493 = INT8_MIN;
	uint8_t x494 = 6U;
	int32_t x495 = INT32_MIN;
	volatile int64_t x496 = -4364696267LL;
	static int32_t t121 = 1;

    t121 = (((x493>x494)/x495)<=x496);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x497 = INT64_MAX;
	int64_t x498 = -245LL;
	static int8_t x499 = -1;
	static int32_t t122 = -405;

    t122 = (((x497>x498)/x499)<=x500);

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint16_t x501 = 313U;
	static volatile int8_t x503 = 12;
	int16_t x504 = INT16_MIN;
	volatile int32_t t123 = -212180;

    t123 = (((x501>x502)/x503)<=x504);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x506 = INT16_MIN;
	int32_t x507 = 14274;
	uint16_t x508 = 15245U;
	volatile int32_t t124 = -9;

    t124 = (((x505>x506)/x507)<=x508);

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x511 = -1LL;
	static volatile uint8_t x512 = 1U;
	static int32_t t125 = -372221;

    t125 = (((x509>x510)/x511)<=x512);

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x514 = 138944LLU;
	int16_t x515 = -1;
	uint64_t x516 = 268406LLU;
	volatile int32_t t126 = 47804;

    t126 = (((x513>x514)/x515)<=x516);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x517 = INT32_MAX;
	uint32_t x518 = 1645283U;
	uint16_t x520 = 27U;
	volatile int32_t t127 = -86789526;

    t127 = (((x517>x518)/x519)<=x520);

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x521 = UINT16_MAX;
	int64_t x522 = INT64_MIN;
	int64_t x523 = INT64_MIN;
	uint8_t x524 = 43U;
	volatile int32_t t128 = 86;

    t128 = (((x521>x522)/x523)<=x524);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x525 = -7699LL;
	volatile int8_t x526 = 0;
	static int32_t x527 = INT32_MIN;
	uint16_t x528 = 1U;

    t129 = (((x525>x526)/x527)<=x528);

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x529 = INT16_MIN;
	uint64_t x530 = UINT64_MAX;
	volatile uint16_t x532 = 44U;
	static int32_t t130 = -7374930;

    t130 = (((x529>x530)/x531)<=x532);

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x533 = INT64_MIN;
	static int32_t x534 = -27887748;
	static int32_t x535 = -1;
	int32_t x536 = INT32_MAX;
	static int32_t t131 = 12785127;

    t131 = (((x533>x534)/x535)<=x536);

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x537 = UINT16_MAX;
	static int8_t x538 = INT8_MIN;
	int16_t x539 = -250;
	int64_t x540 = INT64_MIN;

    t132 = (((x537>x538)/x539)<=x540);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	uint16_t x541 = 493U;
	int16_t x543 = INT16_MIN;

    t133 = (((x541>x542)/x543)<=x544);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x545 = -1;
	volatile uint16_t x546 = 458U;
	static volatile int32_t t134 = 1;

    t134 = (((x545>x546)/x547)<=x548);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x549 = INT64_MIN;
	int8_t x551 = INT8_MIN;
	uint16_t x552 = 11556U;

    t135 = (((x549>x550)/x551)<=x552);

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x554 = -126873476671LL;
	int64_t x555 = -3636449244491935339LL;
	int16_t x556 = INT16_MAX;

    t136 = (((x553>x554)/x555)<=x556);

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x557 = 22;
	volatile int8_t x558 = 1;
	volatile uint64_t x559 = 262937980LLU;
	int16_t x560 = INT16_MAX;
	int32_t t137 = 59;

    t137 = (((x557>x558)/x559)<=x560);

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	static int16_t x561 = 534;
	int32_t x562 = 3068;
	static int32_t x563 = -1;
	uint16_t x564 = UINT16_MAX;
	int32_t t138 = -36051;

    t138 = (((x561>x562)/x563)<=x564);

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x566 = INT8_MIN;
	int32_t x567 = -1;
	volatile uint16_t x568 = 5U;

    t139 = (((x565>x566)/x567)<=x568);

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x569 = -1;
	uint32_t x570 = 1407U;
	volatile uint32_t x571 = 20U;
	uint32_t x572 = UINT32_MAX;
	int32_t t140 = 273;

    t140 = (((x569>x570)/x571)<=x572);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x574 = INT32_MIN;
	static int64_t x575 = INT64_MAX;
	uint16_t x576 = UINT16_MAX;
	volatile int32_t t141 = -2;

    t141 = (((x573>x574)/x575)<=x576);

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x578 = UINT8_MAX;
	int32_t x579 = 1221;
	int8_t x580 = INT8_MIN;
	int32_t t142 = 4890;

    t142 = (((x577>x578)/x579)<=x580);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x581 = UINT64_MAX;
	volatile int64_t x582 = -1LL;
	int32_t x583 = INT32_MAX;
	int64_t x584 = INT64_MIN;
	volatile int32_t t143 = 10356414;

    t143 = (((x581>x582)/x583)<=x584);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile uint32_t x587 = UINT32_MAX;
	int32_t t144 = 531;

    t144 = (((x585>x586)/x587)<=x588);

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x589 = -140;
	int64_t x590 = -1LL;
	static uint8_t x591 = 1U;
	uint8_t x592 = 1U;
	int32_t t145 = -1198;

    t145 = (((x589>x590)/x591)<=x592);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x593 = INT8_MIN;
	int64_t x594 = -1LL;
	static int64_t x595 = -128707585218446LL;
	int8_t x596 = INT8_MIN;

    t146 = (((x593>x594)/x595)<=x596);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x597 = -1LL;
	int32_t x598 = INT32_MIN;
	int64_t x600 = INT64_MIN;
	int32_t t147 = -31237;

    t147 = (((x597>x598)/x599)<=x600);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x601 = INT64_MIN;
	static uint64_t x603 = UINT64_MAX;
	uint8_t x604 = 5U;
	static int32_t t148 = -84926;

    t148 = (((x601>x602)/x603)<=x604);

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint64_t x605 = 6LLU;
	static int8_t x606 = -1;
	volatile uint32_t x608 = 1387617U;
	int32_t t149 = 261623203;

    t149 = (((x605>x606)/x607)<=x608);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x610 = -5399660LL;
	int16_t x611 = INT16_MIN;
	static int32_t t150 = 5739882;

    t150 = (((x609>x610)/x611)<=x612);

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint8_t x613 = UINT8_MAX;
	static volatile uint8_t x616 = 20U;
	volatile int32_t t151 = -4;

    t151 = (((x613>x614)/x615)<=x616);

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x617 = 34U;
	int32_t t152 = 49288;

    t152 = (((x617>x618)/x619)<=x620);

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x622 = -56097387368299685LL;
	uint8_t x623 = UINT8_MAX;
	uint32_t x624 = 27658211U;
	int32_t t153 = -8;

    t153 = (((x621>x622)/x623)<=x624);

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x626 = 110U;
	int64_t x627 = 20707747349749154LL;
	int32_t x628 = INT32_MIN;
	int32_t t154 = 171;

    t154 = (((x625>x626)/x627)<=x628);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int64_t x629 = -1LL;
	int32_t t155 = 375398052;

    t155 = (((x629>x630)/x631)<=x632);

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint32_t x633 = UINT32_MAX;
	uint16_t x634 = UINT16_MAX;
	int32_t t156 = 746630476;

    t156 = (((x633>x634)/x635)<=x636);

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x637 = 0U;
	volatile int8_t x638 = INT8_MIN;
	static uint32_t x639 = 284005540U;
	volatile int8_t x640 = INT8_MIN;

    t157 = (((x637>x638)/x639)<=x640);

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x641 = -16;
	uint8_t x642 = 0U;
	uint16_t x643 = 14988U;
	uint8_t x644 = 1U;
	static int32_t t158 = -3858;

    t158 = (((x641>x642)/x643)<=x644);

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x645 = UINT64_MAX;
	static int64_t x646 = 1059445647726347LL;
	int8_t x647 = -1;
	int8_t x648 = INT8_MIN;
	volatile int32_t t159 = -21657;

    t159 = (((x645>x646)/x647)<=x648);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x649 = -1;
	uint32_t x650 = 494U;
	int16_t x651 = INT16_MIN;
	static int8_t x652 = -7;
	static int32_t t160 = -2819;

    t160 = (((x649>x650)/x651)<=x652);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint8_t x653 = 2U;
	int32_t x654 = -374;
	int16_t x655 = -1;
	uint8_t x656 = 1U;

    t161 = (((x653>x654)/x655)<=x656);

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x657 = INT16_MIN;
	static uint8_t x658 = 2U;
	static int64_t x660 = -620632217412275957LL;
	int32_t t162 = -61;

    t162 = (((x657>x658)/x659)<=x660);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x661 = -1;
	int64_t x663 = -1LL;
	static volatile int32_t t163 = -54799015;

    t163 = (((x661>x662)/x663)<=x664);

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x665 = -533LL;
	volatile uint32_t x667 = 31049U;
	int32_t x668 = -1;
	int32_t t164 = 466906149;

    t164 = (((x665>x666)/x667)<=x668);

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x669 = 1591552686U;
	uint16_t x670 = UINT16_MAX;
	int16_t x671 = -1;
	volatile int32_t t165 = -32775833;

    t165 = (((x669>x670)/x671)<=x672);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x673 = INT64_MIN;
	volatile int32_t x674 = INT32_MIN;
	volatile int64_t x675 = INT64_MIN;
	static uint64_t x676 = 3927166548LLU;
	int32_t t166 = 18;

    t166 = (((x673>x674)/x675)<=x676);

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x678 = -53;
	volatile uint64_t x679 = 7362LLU;
	int32_t t167 = 55352;

    t167 = (((x677>x678)/x679)<=x680);

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int16_t x681 = INT16_MAX;
	int64_t x682 = -1LL;
	int8_t x683 = INT8_MIN;
	uint32_t x684 = 53U;
	volatile int32_t t168 = 75;

    t168 = (((x681>x682)/x683)<=x684);

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x685 = 2178852983LLU;
	uint16_t x686 = 174U;
	int32_t x687 = -1199;
	uint32_t x688 = UINT32_MAX;
	static volatile int32_t t169 = 150581201;

    t169 = (((x685>x686)/x687)<=x688);

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x689 = 38LL;
	int8_t x690 = 6;
	int8_t x692 = INT8_MAX;
	int32_t t170 = 18083;

    t170 = (((x689>x690)/x691)<=x692);

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x693 = 0U;
	int8_t x694 = -1;

    t171 = (((x693>x694)/x695)<=x696);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x697 = 1598LL;
	uint8_t x699 = 14U;
	uint16_t x700 = 6785U;
	int32_t t172 = -72215965;

    t172 = (((x697>x698)/x699)<=x700);

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint16_t x701 = 6U;
	volatile int64_t x702 = -22379625801056LL;
	uint64_t x703 = UINT64_MAX;
	static int8_t x704 = INT8_MAX;
	int32_t t173 = 132406939;

    t173 = (((x701>x702)/x703)<=x704);

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x705 = -1;
	int32_t x706 = INT32_MIN;
	int8_t x707 = -1;
	uint32_t x708 = UINT32_MAX;
	volatile int32_t t174 = -429931682;

    t174 = (((x705>x706)/x707)<=x708);

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x710 = 6U;
	int64_t x711 = INT64_MIN;
	volatile int32_t t175 = -35213;

    t175 = (((x709>x710)/x711)<=x712);

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint8_t x714 = 1U;
	static uint64_t x715 = 40802733026777LLU;
	static uint8_t x716 = UINT8_MAX;

    t176 = (((x713>x714)/x715)<=x716);

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x717 = -609266;
	uint32_t x718 = 11U;
	static int8_t x720 = INT8_MIN;
	volatile int32_t t177 = 2;

    t177 = (((x717>x718)/x719)<=x720);

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	static volatile uint16_t x726 = 5U;
	int64_t x727 = INT64_MAX;
	int64_t x728 = -758240803LL;
	static int32_t t178 = -9182;

    t178 = (((x725>x726)/x727)<=x728);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x729 = 0U;
	int8_t x730 = 0;
	static uint8_t x731 = UINT8_MAX;
	uint16_t x732 = 179U;
	volatile int32_t t179 = 1754157;

    t179 = (((x729>x730)/x731)<=x732);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x733 = INT8_MIN;
	volatile int8_t x734 = INT8_MIN;
	int32_t x735 = 432930;
	volatile int64_t x736 = -1LL;
	int32_t t180 = 2962056;

    t180 = (((x733>x734)/x735)<=x736);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int16_t x737 = INT16_MIN;
	uint8_t x738 = UINT8_MAX;
	uint32_t x740 = 39099U;

    t181 = (((x737>x738)/x739)<=x740);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	static uint64_t x741 = 26891728582694LLU;
	uint32_t x742 = 248U;
	int32_t x743 = INT32_MIN;
	int64_t x744 = INT64_MIN;
	static int32_t t182 = -308;

    t182 = (((x741>x742)/x743)<=x744);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	uint64_t x747 = 11LLU;
	static volatile int8_t x748 = INT8_MIN;
	int32_t t183 = -1007261;

    t183 = (((x745>x746)/x747)<=x748);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x749 = -11227586652455LL;
	volatile int16_t x750 = -1;
	static int16_t x751 = INT16_MIN;
	uint32_t x752 = 1354033745U;
	int32_t t184 = 14346;

    t184 = (((x749>x750)/x751)<=x752);

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x753 = -1;
	uint32_t x754 = 376492235U;
	int16_t x755 = INT16_MIN;
	int8_t x756 = INT8_MIN;
	int32_t t185 = 245328156;

    t185 = (((x753>x754)/x755)<=x756);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x757 = -1;
	int8_t x760 = INT8_MAX;
	static volatile int32_t t186 = -65691913;

    t186 = (((x757>x758)/x759)<=x760);

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x762 = -30;
	int16_t x763 = INT16_MAX;
	static uint32_t x764 = UINT32_MAX;
	int32_t t187 = 0;

    t187 = (((x761>x762)/x763)<=x764);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint8_t x765 = 1U;
	int8_t x767 = INT8_MIN;
	uint64_t x768 = UINT64_MAX;
	volatile int32_t t188 = 1;

    t188 = (((x765>x766)/x767)<=x768);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x769 = INT32_MIN;
	static int64_t x770 = -13LL;

    t189 = (((x769>x770)/x771)<=x772);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x773 = -384033125;
	int16_t x774 = -1;
	volatile int32_t x775 = INT32_MIN;
	int8_t x776 = -15;
	int32_t t190 = 83;

    t190 = (((x773>x774)/x775)<=x776);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x777 = 3964591400LLU;
	volatile uint8_t x778 = UINT8_MAX;
	int8_t x779 = 1;
	uint16_t x780 = 88U;
	volatile int32_t t191 = -10339;

    t191 = (((x777>x778)/x779)<=x780);

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x785 = 15;
	volatile int16_t x786 = INT16_MAX;
	int8_t x787 = INT8_MIN;
	static volatile int32_t t192 = -114;

    t192 = (((x785>x786)/x787)<=x788);

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x789 = INT16_MIN;
	static uint64_t x790 = 6180397502333365347LLU;
	static uint8_t x791 = 1U;
	uint16_t x792 = 3U;
	volatile int32_t t193 = 52;

    t193 = (((x789>x790)/x791)<=x792);

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint8_t x794 = 84U;
	uint8_t x795 = 10U;
	volatile int32_t x796 = INT32_MAX;
	static int32_t t194 = 2869;

    t194 = (((x793>x794)/x795)<=x796);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x797 = -1;
	static uint64_t x798 = 136025688439728193LLU;
	int32_t x799 = -1;
	uint64_t x800 = UINT64_MAX;
	static int32_t t195 = -118059937;

    t195 = (((x797>x798)/x799)<=x800);

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x801 = UINT16_MAX;
	static uint32_t x802 = 660720535U;
	uint8_t x803 = UINT8_MAX;
	int64_t x804 = INT64_MIN;
	volatile int32_t t196 = 6804953;

    t196 = (((x801>x802)/x803)<=x804);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int32_t x805 = -1;
	int8_t x806 = -1;
	volatile int16_t x807 = INT16_MIN;
	volatile int32_t t197 = 1066729158;

    t197 = (((x805>x806)/x807)<=x808);

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x813 = 87975257;
	int64_t x815 = -291772115LL;
	int8_t x816 = INT8_MIN;
	static volatile int32_t t198 = 39108;

    t198 = (((x813>x814)/x815)<=x816);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x817 = INT32_MIN;
	uint8_t x819 = 1U;
	static int32_t x820 = INT32_MIN;
	volatile int32_t t199 = -1256;

    t199 = (((x817>x818)/x819)<=x820);

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

