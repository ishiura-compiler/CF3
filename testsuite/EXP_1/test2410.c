
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

static uint16_t x3 = UINT16_MAX;
int8_t x8 = INT8_MIN;
int64_t t1 = -4019LL;
int64_t x12 = -21523541326LL;
int64_t x14 = INT64_MIN;
static volatile int64_t t3 = -389163LL;
int8_t x18 = INT8_MIN;
int64_t x21 = INT64_MIN;
uint64_t t5 = 1284531067LLU;
static int8_t x28 = INT8_MIN;
volatile uint32_t x30 = UINT32_MAX;
uint8_t x38 = UINT8_MAX;
int8_t x40 = -1;
uint8_t x43 = 124U;
volatile int64_t x44 = INT64_MIN;
volatile uint64_t x47 = 482414257530362264LLU;
static int8_t x51 = INT8_MIN;
uint64_t x58 = UINT64_MAX;
int16_t x62 = INT16_MIN;
static volatile int64_t t15 = -64747536087906845LL;
static volatile int8_t x71 = INT8_MIN;
int64_t x89 = -1LL;
volatile int64_t t27 = -4167817LL;
uint16_t x121 = 0U;
uint8_t x122 = 4U;
uint32_t x128 = UINT32_MAX;
uint64_t t31 = 349864218244LLU;
int8_t x142 = INT8_MIN;
int16_t x145 = -1;
uint32_t x147 = 94747932U;
int8_t x149 = -1;
int32_t x154 = INT32_MIN;
int32_t t35 = -178506;
int8_t x160 = -1;
int16_t x171 = INT16_MAX;
volatile int32_t x172 = INT32_MIN;
int16_t x176 = -1;
int8_t x183 = -27;
int8_t x185 = INT8_MIN;
int32_t x186 = INT32_MIN;
int64_t x193 = INT64_MIN;
static int32_t x194 = INT32_MIN;
int64_t x195 = INT64_MAX;
int8_t x196 = INT8_MIN;
static volatile uint8_t x197 = 0U;
int16_t x205 = 10293;
volatile uint8_t x211 = 15U;
int8_t x212 = -1;
volatile int64_t t49 = 232937370511854LL;
volatile int32_t t50 = 159;
int64_t x228 = INT64_MAX;
volatile uint64_t t53 = 1615769296895502281LLU;
volatile uint64_t x233 = 9LLU;
uint64_t t54 = 951087965588201591LLU;
static int64_t x240 = INT64_MIN;
int32_t x246 = INT32_MAX;
uint32_t x247 = UINT32_MAX;
volatile uint64_t t57 = 313372286LLU;
static volatile uint32_t x251 = 898573884U;
int16_t x252 = INT16_MIN;
volatile uint32_t t59 = 366103U;
volatile int32_t x257 = -1;
volatile int32_t x258 = 90;
volatile uint32_t t61 = 902514U;
int64_t t63 = -76299665144391LL;
volatile uint8_t x281 = 1U;
volatile int32_t t66 = -32464;
uint64_t x286 = 341984151754406898LLU;
int8_t x287 = -49;
volatile uint32_t x289 = UINT32_MAX;
static uint64_t t68 = 364699445LLU;
int64_t t69 = -1LL;
int32_t x297 = 0;
volatile int32_t t71 = -902;
volatile uint16_t x311 = 14629U;
uint64_t x324 = UINT64_MAX;
uint32_t x327 = UINT32_MAX;
uint64_t x328 = 836435031077LLU;
uint64_t t76 = 251508LLU;
volatile int8_t x329 = -1;
int8_t x331 = INT8_MAX;
uint16_t x335 = 1567U;
static volatile uint64_t t84 = 1345653818787LLU;
volatile int64_t x371 = -1LL;
static volatile int64_t t85 = -2837356944855134091LL;
int16_t x375 = -465;
uint64_t x379 = 61LLU;
uint8_t x390 = 2U;
volatile uint8_t x391 = 2U;
int64_t x393 = -69552LL;
int64_t t92 = -91505549400LL;
int16_t x407 = INT16_MIN;
uint32_t x408 = 7585282U;
int16_t x410 = -1;
int32_t x414 = 40;
int8_t x417 = INT8_MAX;
uint32_t x419 = UINT32_MAX;
int64_t x423 = INT64_MIN;
static int16_t x424 = -2701;
int8_t x425 = INT8_MAX;
uint32_t x426 = UINT32_MAX;
static uint32_t t98 = 0U;
int64_t t101 = -1596LL;
static int32_t x446 = 1;
int16_t x456 = 4071;
volatile int8_t x457 = 3;
volatile int64_t t107 = -46251582530099169LL;
static int32_t x470 = 95129;
static volatile int16_t x473 = INT16_MIN;
volatile uint8_t x478 = 8U;
static int64_t x479 = INT64_MAX;
uint8_t x480 = UINT8_MAX;
volatile int64_t t112 = INT64_MAX;
volatile int16_t x497 = INT16_MIN;
int8_t x500 = 54;
int8_t x503 = INT8_MIN;
volatile uint64_t t116 = 987553LLU;
uint64_t x505 = 2473641857849LLU;
uint64_t x512 = UINT64_MAX;
volatile int64_t t120 = -3275748164323084027LL;
static int8_t x521 = -1;
volatile int32_t t122 = 93923;
int8_t x531 = INT8_MAX;
int32_t x532 = 1014;
uint16_t x535 = UINT16_MAX;
volatile int32_t t124 = 42;
int32_t x537 = INT32_MAX;
static int32_t x539 = -942122389;
int8_t x547 = 41;
int64_t x548 = -1LL;
static volatile int64_t t127 = 718058434LL;
int8_t x551 = INT8_MAX;
uint16_t x555 = 38U;
uint8_t x567 = UINT8_MAX;
static uint64_t t132 = 3739LLU;
volatile uint8_t x577 = UINT8_MAX;
int8_t x578 = -1;
int64_t x580 = INT64_MIN;
int16_t x581 = INT16_MIN;
uint64_t t135 = 3951853270271LLU;
int16_t x600 = INT16_MIN;
volatile int32_t t138 = -419359178;
int32_t x608 = INT32_MAX;
static volatile uint64_t t140 = 1LLU;
int8_t x611 = INT8_MAX;
uint64_t t141 = 0LLU;
uint64_t t142 = 7050LLU;
int32_t x618 = INT32_MIN;
static int8_t x626 = -1;
uint64_t x630 = 7301930987944LLU;
uint16_t x632 = 6U;
static uint16_t x644 = 107U;
int32_t t150 = 620667;
int16_t x649 = -225;
int32_t x660 = INT32_MIN;
volatile uint64_t t153 = 243594565LLU;
uint16_t x661 = 14829U;
int8_t x670 = -1;
uint16_t x672 = 1206U;
uint32_t x676 = 13995090U;
uint8_t x682 = 106U;
int64_t x684 = -62667848670851074LL;
int32_t x686 = INT32_MIN;
volatile int64_t t159 = INT64_MAX;
uint32_t x691 = UINT32_MAX;
int8_t x696 = INT8_MAX;
int32_t t161 = 1707829;
int16_t x701 = 2572;
uint16_t x702 = 1U;
int16_t x705 = -1;
int16_t x708 = -1;
volatile int32_t x711 = -1;
volatile uint64_t t165 = 860683617755LLU;
static int32_t x715 = INT32_MAX;
uint8_t x719 = 1U;
int32_t t168 = 763334633;
static int32_t x729 = -424157688;
int64_t x734 = -1LL;
uint64_t x736 = 591874706827759LLU;
static volatile uint32_t t171 = 10698228U;
int8_t x743 = -26;
int16_t x752 = INT16_MIN;
int8_t x756 = INT8_MIN;
static int8_t x769 = INT8_MIN;
uint64_t x775 = UINT64_MAX;
int8_t x776 = -1;
int64_t x783 = -1LL;
uint64_t x784 = UINT64_MAX;
int16_t x790 = -28;
volatile int64_t x794 = -23619248LL;
int64_t x795 = INT64_MAX;
int64_t x798 = 537771102054884692LL;
static volatile int64_t t185 = 132877483287LL;
int16_t x805 = INT16_MIN;
static int8_t x815 = INT8_MIN;
uint64_t x820 = 6533237LLU;
static volatile uint64_t t190 = 2LLU;
int8_t x824 = -1;
uint16_t x827 = 842U;
uint64_t x829 = 31LLU;
int8_t x832 = INT8_MIN;
volatile int32_t t195 = 1933;
int64_t x845 = 1055897LL;
int64_t x849 = -1LL;
uint32_t x850 = 10814080U;
int32_t x853 = INT32_MAX;
static volatile int64_t t198 = -6664020525645LL;
int16_t x858 = INT16_MIN;


void f0(void) {
    	volatile int32_t x1 = INT32_MIN;
	static int32_t x2 = INT32_MIN;
	int8_t x4 = -12;
	volatile int32_t t0 = 1089005;

    t0 = (((x1|x2)%x3)-x4);

    if (t0 != -32756) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = -1;
	int16_t x6 = 246;
	static int64_t x7 = INT64_MAX;

    t1 = (((x5|x6)%x7)-x8);

    if (t1 != 127LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = -1LL;
	int8_t x10 = -17;
	int64_t x11 = -1LL;
	int64_t t2 = 6377829LL;

    t2 = (((x9|x10)%x11)-x12);

    if (t2 != 21523541326LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = 0;
	int16_t x15 = INT16_MAX;
	int16_t x16 = -1;

    t3 = (((x13|x14)%x15)-x16);

    if (t3 != -7LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	static volatile uint32_t x19 = UINT32_MAX;
	int32_t x20 = INT32_MAX;
	int64_t t4 = 6436271833471LL;

    t4 = (((x17|x18)%x19)-x20);

    if (t4 != -2147483775LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x22 = UINT64_MAX;
	static volatile uint64_t x23 = 6LLU;
	volatile int8_t x24 = INT8_MIN;

    t5 = (((x21|x22)%x23)-x24);

    if (t5 != 131LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = 172208306;
	int8_t x26 = 0;
	uint32_t x27 = 5011468U;
	volatile uint32_t t6 = 183U;

    t6 = (((x25|x26)%x27)-x28);

    if (t6 != 1818522U) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = 0;
	volatile uint64_t x31 = UINT64_MAX;
	int32_t x32 = -1;
	static uint64_t t7 = 2074993126167256225LLU;

    t7 = (((x29|x30)%x31)-x32);

    if (t7 != 4294967296LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int16_t x33 = INT16_MIN;
	int32_t x34 = INT32_MAX;
	int16_t x35 = INT16_MAX;
	uint32_t x36 = 95872U;
	uint32_t t8 = 97082611U;

    t8 = (((x33|x34)%x35)-x36);

    if (t8 != 4294871423U) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = -1;
	int64_t x39 = INT64_MIN;
	static int64_t t9 = -2342310983LL;

    t9 = (((x37|x38)%x39)-x40);

    if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -1LL;
	uint8_t x42 = 54U;
	volatile int64_t t10 = INT64_MAX;

    t10 = (((x41|x42)%x43)-x44);

    if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x45 = INT8_MIN;
	int8_t x46 = 2;
	int64_t x48 = INT64_MAX;
	uint64_t t11 = 5030763LLU;

    t11 = (((x45|x46)%x47)-x48);

    if (t11 != 9338374324410561267LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x49 = UINT64_MAX;
	volatile uint8_t x50 = 120U;
	volatile int32_t x52 = 11;
	volatile uint64_t t12 = 757317036098LLU;

    t12 = (((x49|x50)%x51)-x52);

    if (t12 != 116LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x53 = INT16_MIN;
	volatile int16_t x54 = -22;
	volatile int32_t x55 = INT32_MAX;
	uint16_t x56 = 40U;
	volatile int32_t t13 = -1060236709;

    t13 = (((x53|x54)%x55)-x56);

    if (t13 != -62) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MIN;
	static int32_t x59 = INT32_MAX;
	volatile int8_t x60 = INT8_MIN;
	uint64_t t14 = 452LLU;

    t14 = (((x57|x58)%x59)-x60);

    if (t14 != 131LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x61 = INT32_MIN;
	int8_t x63 = INT8_MIN;
	volatile int64_t x64 = -46LL;

    t15 = (((x61|x62)%x63)-x64);

    if (t15 != 46LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint32_t x65 = 8081918U;
	static volatile int16_t x66 = -1;
	int64_t x67 = -217554LL;
	int16_t x68 = INT16_MIN;
	volatile int64_t t16 = -40439666385272536LL;

    t16 = (((x65|x66)%x67)-x68);

    if (t16 != 48995LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x69 = INT64_MIN;
	uint64_t x70 = UINT64_MAX;
	int32_t x72 = -1;
	volatile uint64_t t17 = 321LLU;

    t17 = (((x69|x70)%x71)-x72);

    if (t17 != 128LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x73 = 1453;
	static uint16_t x74 = UINT16_MAX;
	int64_t x75 = -12568376512387988LL;
	static volatile int8_t x76 = 0;
	int64_t t18 = -3805701631204LL;

    t18 = (((x73|x74)%x75)-x76);

    if (t18 != 65535LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x77 = INT8_MIN;
	static volatile uint32_t x78 = 56298710U;
	static volatile uint16_t x79 = 211U;
	int8_t x80 = -30;
	volatile uint32_t t19 = 161156605U;

    t19 = (((x77|x78)%x79)-x80);

    if (t19 != 39U) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x81 = INT8_MAX;
	int8_t x82 = INT8_MIN;
	uint8_t x83 = 91U;
	int8_t x84 = INT8_MIN;
	volatile int32_t t20 = -6702656;

    t20 = (((x81|x82)%x83)-x84);

    if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x90 = 2495171635131251095LLU;
	int32_t x91 = -269;
	int64_t x92 = -169317398916LL;
	volatile uint64_t t21 = 541583744470370LLU;

    t21 = (((x89|x90)%x91)-x92);

    if (t21 != 169317399184LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x97 = INT64_MIN;
	int8_t x98 = 61;
	int64_t x99 = INT64_MAX;
	int64_t x100 = INT64_MIN;
	volatile int64_t t22 = -8017LL;

    t22 = (((x97|x98)%x99)-x100);

    if (t22 != 61LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x101 = INT16_MIN;
	int16_t x102 = 0;
	uint64_t x103 = 1130381144875810600LLU;
	uint32_t x104 = 5U;
	volatile uint64_t t23 = 826569LLU;

    t23 = (((x101|x102)%x103)-x104);

    if (t23 != 360645755696549243LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x105 = INT8_MIN;
	static int16_t x106 = -1;
	int8_t x107 = INT8_MIN;
	static int32_t x108 = INT32_MAX;
	volatile int32_t t24 = INT32_MIN;

    t24 = (((x105|x106)%x107)-x108);

    if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x109 = INT64_MAX;
	uint16_t x110 = UINT16_MAX;
	static uint64_t x111 = 2LLU;
	static int16_t x112 = 4091;
	volatile uint64_t t25 = 25348493336754LLU;

    t25 = (((x109|x110)%x111)-x112);

    if (t25 != 18446744073709547526LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint8_t x113 = UINT8_MAX;
	uint16_t x114 = 5U;
	static int16_t x115 = INT16_MIN;
	volatile int16_t x116 = INT16_MIN;
	volatile int32_t t26 = 3182;

    t26 = (((x113|x114)%x115)-x116);

    if (t26 != 33023) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint32_t x117 = 185894205U;
	uint32_t x118 = 261282553U;
	int8_t x119 = -4;
	int64_t x120 = -1LL;

    t27 = (((x117|x118)%x119)-x120);

    if (t27 != 261545982LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x123 = 44;
	uint16_t x124 = UINT16_MAX;
	int32_t t28 = -24623398;

    t28 = (((x121|x122)%x123)-x124);

    if (t28 != -65531) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x125 = -1;
	int16_t x126 = INT16_MIN;
	uint64_t x127 = 4049LLU;
	uint64_t t29 = 1111094950273475157LLU;

    t29 = (((x125|x126)%x127)-x128);

    if (t29 != 18446744069414584810LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	static int8_t x129 = INT8_MIN;
	int16_t x130 = INT16_MAX;
	volatile uint32_t x131 = UINT32_MAX;
	uint8_t x132 = UINT8_MAX;
	uint32_t t30 = 16U;

    t30 = (((x129|x130)%x131)-x132);

    if (t30 != 4294967041U) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x137 = INT16_MAX;
	int16_t x138 = 0;
	uint64_t x139 = 46306782998370468LLU;
	uint8_t x140 = UINT8_MAX;

    t31 = (((x137|x138)%x139)-x140);

    if (t31 != 32512LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x141 = INT32_MIN;
	static int8_t x143 = -1;
	volatile uint16_t x144 = 5U;
	volatile int32_t t32 = 9563;

    t32 = (((x141|x142)%x143)-x144);

    if (t32 != -5) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x146 = 0;
	volatile int64_t x148 = 1LL;
	int64_t t33 = 6246718LL;

    t33 = (((x145|x146)%x147)-x148);

    if (t33 != 31310354LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x150 = 1893U;
	volatile int64_t x151 = INT64_MIN;
	int16_t x152 = 176;
	volatile int64_t t34 = 144989LL;

    t34 = (((x149|x150)%x151)-x152);

    if (t34 != -177LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x153 = 56;
	int8_t x155 = -1;
	static uint16_t x156 = UINT16_MAX;

    t35 = (((x153|x154)%x155)-x156);

    if (t35 != -65535) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint32_t x157 = 3949U;
	volatile int8_t x158 = -31;
	static uint16_t x159 = 280U;
	uint32_t t36 = 13707079U;

    t36 = (((x157|x158)%x159)-x160);

    if (t36 != 238U) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x161 = 52U;
	static uint8_t x162 = 19U;
	static uint64_t x163 = 2688139LLU;
	int16_t x164 = INT16_MAX;
	uint64_t t37 = 69983108031255LLU;

    t37 = (((x161|x162)%x163)-x164);

    if (t37 != 18446744073709518904LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x165 = 86U;
	uint32_t x166 = 44024690U;
	uint32_t x167 = UINT32_MAX;
	int16_t x168 = -1;
	uint32_t t38 = 1078888539U;

    t38 = (((x165|x166)%x167)-x168);

    if (t38 != 44024695U) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x169 = 508;
	volatile int8_t x170 = -1;
	int32_t t39 = INT32_MAX;

    t39 = (((x169|x170)%x171)-x172);

    if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x173 = 12678U;
	int64_t x174 = INT64_MIN;
	int8_t x175 = 19;
	int64_t t40 = 3518LL;

    t40 = (((x173|x174)%x175)-x176);

    if (t40 != -12LL) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x177 = INT16_MIN;
	volatile int16_t x178 = INT16_MIN;
	uint32_t x179 = UINT32_MAX;
	int16_t x180 = INT16_MIN;
	uint32_t t41 = 108U;

    t41 = (((x177|x178)%x179)-x180);

    if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
    	uint32_t x181 = 29U;
	volatile int8_t x182 = INT8_MIN;
	uint16_t x184 = 0U;
	volatile uint32_t t42 = 9847U;

    t42 = (((x181|x182)%x183)-x184);

    if (t42 != 4294967197U) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x187 = UINT64_MAX;
	static volatile uint16_t x188 = 26932U;
	uint64_t t43 = 111930246959526LLU;

    t43 = (((x185|x186)%x187)-x188);

    if (t43 != 18446744073709524556LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int64_t t44 = -822657447759832492LL;

    t44 = (((x193|x194)%x195)-x196);

    if (t44 != -2147483520LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x198 = INT8_MIN;
	uint64_t x199 = UINT64_MAX;
	int8_t x200 = INT8_MIN;
	volatile uint64_t t45 = 21679601491LLU;

    t45 = (((x197|x198)%x199)-x200);

    if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x201 = -1;
	uint16_t x202 = UINT16_MAX;
	static uint32_t x203 = UINT32_MAX;
	uint32_t x204 = 5267U;
	volatile uint32_t t46 = 119598254U;

    t46 = (((x201|x202)%x203)-x204);

    if (t46 != 4294962029U) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x206 = UINT64_MAX;
	uint16_t x207 = 42U;
	uint64_t x208 = 53502605LLU;
	uint64_t t47 = 83309LLU;

    t47 = (((x205|x206)%x207)-x208);

    if (t47 != 18446744073656049026LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x209 = INT32_MIN;
	volatile int16_t x210 = -5335;
	int32_t t48 = 10;

    t48 = (((x209|x210)%x211)-x212);

    if (t48 != -9) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x213 = UINT32_MAX;
	int64_t x214 = 945LL;
	int16_t x215 = 352;
	int16_t x216 = INT16_MAX;

    t49 = (((x213|x214)%x215)-x216);

    if (t49 != -32544LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x217 = 7;
	int8_t x218 = -3;
	int8_t x219 = -1;
	uint8_t x220 = 56U;

    t50 = (((x217|x218)%x219)-x220);

    if (t50 != -56) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int32_t x221 = INT32_MIN;
	static uint64_t x222 = UINT64_MAX;
	int16_t x223 = -1;
	volatile int8_t x224 = INT8_MIN;
	volatile uint64_t t51 = 179647036LLU;

    t51 = (((x221|x222)%x223)-x224);

    if (t51 != 128LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x225 = -3880;
	uint8_t x226 = UINT8_MAX;
	uint64_t x227 = 4463452157989512LLU;
	volatile uint64_t t52 = 3547425653179583LLU;

    t52 = (((x225|x226)%x227)-x228);

    if (t52 != 9227131793751660000LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x229 = 11U;
	int32_t x230 = INT32_MAX;
	int8_t x231 = INT8_MIN;
	uint64_t x232 = UINT64_MAX;

    t53 = (((x229|x230)%x231)-x232);

    if (t53 != 128LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x234 = 767973U;
	int32_t x235 = -1;
	uint64_t x236 = 63503520LLU;

    t54 = (((x233|x234)%x235)-x236);

    if (t54 != 18446744073646816077LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x237 = 0;
	uint64_t x238 = 731682254202LLU;
	int16_t x239 = -10;
	uint64_t t55 = 2179651213476494LLU;

    t55 = (((x237|x238)%x239)-x240);

    if (t55 != 9223372768537030010LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x241 = INT8_MIN;
	uint64_t x242 = 15924342045LLU;
	int32_t x243 = 123;
	int32_t x244 = -4416;
	uint64_t t56 = 43LLU;

    t56 = (((x241|x242)%x243)-x244);

    if (t56 != 4456LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x245 = 12409251003413547LLU;
	volatile uint16_t x248 = 53U;

    t57 = (((x245|x246)%x247)-x248);

    if (t57 != 2889200LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x249 = INT16_MIN;
	volatile uint8_t x250 = 29U;
	volatile uint32_t t58 = 126377210U;

    t58 = (((x249|x250)%x251)-x252);

    if (t58 != 700671789U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x253 = 34U;
	static uint32_t x254 = UINT32_MAX;
	int8_t x255 = INT8_MAX;
	uint16_t x256 = 6294U;

    t59 = (((x253|x254)%x255)-x256);

    if (t59 != 4294961017U) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x259 = INT8_MIN;
	volatile int64_t x260 = INT64_MIN;
	int64_t t60 = INT64_MAX;

    t60 = (((x257|x258)%x259)-x260);

    if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x261 = -1;
	uint16_t x262 = 226U;
	int16_t x263 = INT16_MIN;
	volatile uint32_t x264 = 5667U;

    t61 = (((x261|x262)%x263)-x264);

    if (t61 != 4294961628U) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x265 = INT8_MIN;
	static int16_t x266 = 63;
	int8_t x267 = INT8_MIN;
	int64_t x268 = INT64_MIN;
	int64_t t62 = -311680104085448167LL;

    t62 = (((x265|x266)%x267)-x268);

    if (t62 != 9223372036854775743LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x269 = 3012140LL;
	int32_t x270 = INT32_MIN;
	int16_t x271 = -1;
	int16_t x272 = INT16_MAX;

    t63 = (((x269|x270)%x271)-x272);

    if (t63 != -32767LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x273 = 214436LLU;
	static uint64_t x274 = UINT64_MAX;
	int8_t x275 = -1;
	int8_t x276 = -42;
	volatile uint64_t t64 = 1LLU;

    t64 = (((x273|x274)%x275)-x276);

    if (t64 != 42LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x277 = INT32_MIN;
	uint64_t x278 = UINT64_MAX;
	int32_t x279 = INT32_MIN;
	int16_t x280 = -1;
	volatile uint64_t t65 = 94LLU;

    t65 = (((x277|x278)%x279)-x280);

    if (t65 != 2147483648LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static int16_t x282 = INT16_MIN;
	uint8_t x283 = 2U;
	int32_t x284 = 2675200;

    t66 = (((x281|x282)%x283)-x284);

    if (t66 != -2675201) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x285 = 512939U;
	int16_t x288 = INT16_MIN;
	volatile uint64_t t67 = 5LLU;

    t67 = (((x285|x286)%x287)-x288);

    if (t67 != 341984151754800123LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x290 = 11;
	uint64_t x291 = 1442269239LLU;
	static uint8_t x292 = 1U;

    t68 = (((x289|x290)%x291)-x292);

    if (t68 != 1410428816LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x293 = 13U;
	int32_t x294 = INT32_MIN;
	static int64_t x295 = INT64_MIN;
	int64_t x296 = -25069997652007LL;

    t69 = (((x293|x294)%x295)-x296);

    if (t69 != 25067850168372LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x298 = INT16_MAX;
	int16_t x299 = INT16_MAX;
	int16_t x300 = INT16_MAX;
	int32_t t70 = 1;

    t70 = (((x297|x298)%x299)-x300);

    if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint16_t x301 = 19695U;
	int16_t x302 = 24;
	int8_t x303 = -1;
	int16_t x304 = INT16_MAX;

    t71 = (((x301|x302)%x303)-x304);

    if (t71 != -32767) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x305 = -35;
	int32_t x306 = INT32_MIN;
	static uint64_t x307 = 882120862226353LLU;
	volatile int16_t x308 = INT16_MIN;
	static uint64_t t72 = 754554372LLU;

    t72 = (((x305|x306)%x307)-x308);

    if (t72 != 714723694316766LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x309 = INT16_MIN;
	int16_t x310 = INT16_MIN;
	static uint32_t x312 = 14112932U;
	uint32_t t73 = 4502024U;

    t73 = (((x309|x310)%x311)-x312);

    if (t73 != 4280850854U) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x313 = INT8_MIN;
	static volatile uint16_t x314 = UINT16_MAX;
	int16_t x315 = INT16_MIN;
	int32_t x316 = INT32_MIN;
	int32_t t74 = INT32_MAX;

    t74 = (((x313|x314)%x315)-x316);

    if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
    	uint64_t x321 = UINT64_MAX;
	int16_t x322 = INT16_MIN;
	static int64_t x323 = -593830LL;
	volatile uint64_t t75 = 7084693208078453LLU;

    t75 = (((x321|x322)%x323)-x324);

    if (t75 != 593830LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x325 = 10336429212673663LLU;
	volatile int16_t x326 = 0;

    t76 = (((x325|x326)%x327)-x328);

    if (t76 != 18446743239281257287LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x330 = INT64_MAX;
	int16_t x332 = -39;
	int64_t t77 = -17LL;

    t77 = (((x329|x330)%x331)-x332);

    if (t77 != 38LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x333 = -1;
	static int32_t x334 = -1;
	uint64_t x336 = UINT64_MAX;
	volatile uint64_t t78 = 422587LLU;

    t78 = (((x333|x334)%x335)-x336);

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint64_t x337 = UINT64_MAX;
	int32_t x338 = -367327;
	volatile uint64_t x339 = UINT64_MAX;
	int64_t x340 = INT64_MIN;
	volatile uint64_t t79 = 861585474LLU;

    t79 = (((x337|x338)%x339)-x340);

    if (t79 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x341 = INT16_MIN;
	int32_t x342 = INT32_MIN;
	int64_t x343 = INT64_MIN;
	volatile int64_t x344 = INT64_MIN;
	volatile int64_t t80 = 3403910624144607800LL;

    t80 = (((x341|x342)%x343)-x344);

    if (t80 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint64_t x345 = UINT64_MAX;
	uint32_t x346 = 810987U;
	int8_t x347 = 1;
	uint64_t x348 = 3037472LLU;
	uint64_t t81 = 13103122995420LLU;

    t81 = (((x345|x346)%x347)-x348);

    if (t81 != 18446744073706514144LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x349 = -1;
	uint16_t x350 = 867U;
	int8_t x351 = 1;
	static int16_t x352 = INT16_MIN;
	static volatile int32_t t82 = -1897095;

    t82 = (((x349|x350)%x351)-x352);

    if (t82 != 32768) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x357 = INT16_MIN;
	int32_t x358 = 173;
	static int64_t x359 = 33283428LL;
	static int8_t x360 = INT8_MIN;
	volatile int64_t t83 = -1LL;

    t83 = (((x357|x358)%x359)-x360);

    if (t83 != -32467LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x361 = INT8_MAX;
	uint64_t x362 = 18290529634409LLU;
	int16_t x363 = 5;
	static int8_t x364 = INT8_MIN;

    t84 = (((x361|x362)%x363)-x364);

    if (t84 != 129LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x369 = INT16_MIN;
	int32_t x370 = INT32_MAX;
	int8_t x372 = INT8_MIN;

    t85 = (((x369|x370)%x371)-x372);

    if (t85 != 128LL) { NG(); } else { ; }
	
}

void f86(void) {
    	static int16_t x373 = 75;
	static int64_t x374 = INT64_MAX;
	static int32_t x376 = -1;
	volatile int64_t t86 = -1546LL;

    t86 = (((x373|x374)%x375)-x376);

    if (t86 != 8LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile int16_t x377 = INT16_MIN;
	static int16_t x378 = INT16_MIN;
	int8_t x380 = -1;
	volatile uint64_t t87 = 73407905680LLU;

    t87 = (((x377|x378)%x379)-x380);

    if (t87 != 6LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	static int8_t x381 = -1;
	uint64_t x382 = 5295817840LLU;
	int64_t x383 = INT64_MAX;
	uint32_t x384 = 1074U;
	volatile uint64_t t88 = 6LLU;

    t88 = (((x381|x382)%x383)-x384);

    if (t88 != 18446744073709550543LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint32_t x389 = UINT32_MAX;
	volatile int64_t x392 = INT64_MAX;
	volatile int64_t t89 = -32424546840LL;

    t89 = (((x389|x390)%x391)-x392);

    if (t89 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x394 = 29U;
	int32_t x395 = INT32_MIN;
	static int32_t x396 = -1;
	volatile int64_t t90 = 0LL;

    t90 = (((x393|x394)%x395)-x396);

    if (t90 != -69538LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint16_t x397 = 19U;
	volatile uint8_t x398 = UINT8_MAX;
	static int64_t x399 = INT64_MIN;
	int8_t x400 = -1;
	int64_t t91 = -43376LL;

    t91 = (((x397|x398)%x399)-x400);

    if (t91 != 256LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x401 = 13494U;
	int8_t x402 = INT8_MIN;
	int16_t x403 = INT16_MIN;
	volatile int64_t x404 = -7103010476429LL;

    t92 = (((x401|x402)%x403)-x404);

    if (t92 != 7103010476355LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int8_t x405 = -1;
	static uint64_t x406 = 6LLU;
	volatile uint64_t t93 = 0LLU;

    t93 = (((x405|x406)%x407)-x408);

    if (t93 != 18446744073701999101LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x409 = INT8_MAX;
	volatile int64_t x411 = -829502919393614574LL;
	static int32_t x412 = -1;
	int64_t t94 = -1526373184639760LL;

    t94 = (((x409|x410)%x411)-x412);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x413 = INT16_MIN;
	static volatile int32_t x415 = INT32_MAX;
	int32_t x416 = INT32_MIN;
	volatile int32_t t95 = 729286;

    t95 = (((x413|x414)%x415)-x416);

    if (t95 != 2147450920) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x418 = INT16_MAX;
	int16_t x420 = INT16_MAX;
	uint32_t t96 = 253873806U;

    t96 = (((x417|x418)%x419)-x420);

    if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x421 = INT16_MAX;
	volatile int16_t x422 = INT16_MAX;
	int64_t t97 = -13629253591LL;

    t97 = (((x421|x422)%x423)-x424);

    if (t97 != 35468LL) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x427 = 40U;
	int8_t x428 = 0;

    t98 = (((x425|x426)%x427)-x428);

    if (t98 != 15U) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x433 = INT32_MIN;
	int32_t x434 = -1;
	volatile uint32_t x435 = 1451785U;
	uint64_t x436 = 194482541LLU;
	volatile uint64_t t99 = 3913122LLU;

    t99 = (((x433|x434)%x435)-x436);

    if (t99 != 18446744073515656340LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	uint8_t x437 = 6U;
	int64_t x438 = 789549881969LL;
	uint32_t x439 = UINT32_MAX;
	static int64_t x440 = 3938148LL;
	static volatile int64_t t100 = 4807146571LL;

    t100 = (((x437|x438)%x439)-x440);

    if (t100 != 3566928842LL) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x441 = -1LL;
	int64_t x442 = INT64_MIN;
	int64_t x443 = INT64_MIN;
	uint32_t x444 = 1U;

    t101 = (((x441|x442)%x443)-x444);

    if (t101 != -2LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x445 = 118U;
	static int32_t x447 = INT32_MAX;
	int8_t x448 = INT8_MAX;
	int32_t t102 = 91984;

    t102 = (((x445|x446)%x447)-x448);

    if (t102 != -8) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x449 = 30461390702LLU;
	static int32_t x450 = 226838091;
	int8_t x451 = INT8_MIN;
	uint16_t x452 = UINT16_MAX;
	uint64_t t103 = 3634443LLU;

    t103 = (((x449|x450)%x451)-x452);

    if (t103 != 30595805040LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint16_t x453 = 3U;
	int64_t x454 = -2LL;
	uint16_t x455 = 423U;
	int64_t t104 = 9407022100477LL;

    t104 = (((x453|x454)%x455)-x456);

    if (t104 != -4072LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x458 = UINT64_MAX;
	int8_t x459 = -1;
	int16_t x460 = -535;
	volatile uint64_t t105 = 56586958475LLU;

    t105 = (((x457|x458)%x459)-x460);

    if (t105 != 535LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint32_t x461 = 31427U;
	static int64_t x462 = INT64_MIN;
	static int8_t x463 = INT8_MAX;
	volatile uint64_t x464 = 204022134652LLU;
	uint64_t t106 = 10860583LLU;

    t106 = (((x461|x462)%x463)-x464);

    if (t106 != 18446743869687416894LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x465 = INT8_MIN;
	int64_t x466 = INT64_MAX;
	volatile int64_t x467 = INT64_MAX;
	static int32_t x468 = 57804;

    t107 = (((x465|x466)%x467)-x468);

    if (t107 != -57805LL) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x469 = -1;
	uint8_t x471 = 108U;
	volatile int32_t x472 = INT32_MIN;
	static volatile int32_t t108 = INT32_MAX;

    t108 = (((x469|x470)%x471)-x472);

    if (t108 != INT32_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x474 = UINT16_MAX;
	int16_t x475 = 1;
	int32_t x476 = -1;
	int32_t t109 = 1;

    t109 = (((x473|x474)%x475)-x476);

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int64_t x477 = 1396512864237786LL;
	static int64_t t110 = -11321601829610LL;

    t110 = (((x477|x478)%x479)-x480);

    if (t110 != 1396512864237531LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x481 = UINT32_MAX;
	int32_t x482 = -859;
	int64_t x483 = -1LL;
	static int32_t x484 = -4;
	volatile int64_t t111 = -43407160582145LL;

    t111 = (((x481|x482)%x483)-x484);

    if (t111 != 4LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static int32_t x485 = -106;
	static int32_t x486 = INT32_MAX;
	int8_t x487 = INT8_MAX;
	int64_t x488 = INT64_MIN;

    t112 = (((x485|x486)%x487)-x488);

    if (t112 != INT64_MAX) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x489 = INT32_MIN;
	volatile int32_t x490 = -3085679;
	int8_t x491 = -22;
	volatile int32_t x492 = INT32_MIN;
	int32_t t113 = 200052;

    t113 = (((x489|x490)%x491)-x492);

    if (t113 != 2147483645) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x493 = INT8_MIN;
	int32_t x494 = -956;
	int64_t x495 = 21447691LL;
	int16_t x496 = INT16_MIN;
	volatile int64_t t114 = 3985416993610583LL;

    t114 = (((x493|x494)%x495)-x496);

    if (t114 != 32708LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int32_t x498 = -12984870;
	uint64_t x499 = UINT64_MAX;
	uint64_t t115 = 3064407888517111LLU;

    t115 = (((x497|x498)%x499)-x500);

    if (t115 != 18446744073709542820LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	static int64_t x501 = -1LL;
	int32_t x502 = INT32_MIN;
	uint64_t x504 = 21844362678542LLU;

    t116 = (((x501|x502)%x503)-x504);

    if (t116 != 18446722229346873073LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x506 = UINT8_MAX;
	static int64_t x507 = 475807529LL;
	int8_t x508 = -1;
	volatile uint64_t t117 = 92482433283936LLU;

    t117 = (((x505|x506)%x507)-x508);

    if (t117 != 394322306LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x509 = 272U;
	volatile uint16_t x510 = 12U;
	int32_t x511 = -14065;
	uint64_t t118 = 16987850418905056LLU;

    t118 = (((x509|x510)%x511)-x512);

    if (t118 != 285LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint32_t x513 = UINT32_MAX;
	int32_t x514 = INT32_MAX;
	volatile uint32_t x515 = 5538U;
	uint16_t x516 = UINT16_MAX;
	volatile uint32_t t119 = 161137U;

    t119 = (((x513|x514)%x515)-x516);

    if (t119 != 4294906384U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x517 = 74U;
	static int32_t x518 = INT32_MIN;
	volatile int64_t x519 = -118787445968LL;
	static uint32_t x520 = 91830687U;

    t120 = (((x517|x518)%x519)-x520);

    if (t120 != -2239314261LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint64_t x522 = 3433025603LLU;
	static int16_t x523 = -1;
	int64_t x524 = -1LL;
	uint64_t t121 = 841217927LLU;

    t121 = (((x521|x522)%x523)-x524);

    if (t121 != 1LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x525 = INT16_MAX;
	int8_t x526 = INT8_MIN;
	static int32_t x527 = INT32_MAX;
	static volatile uint16_t x528 = 1755U;

    t122 = (((x525|x526)%x527)-x528);

    if (t122 != -1756) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x529 = INT64_MIN;
	int32_t x530 = -654153;
	volatile int64_t t123 = -5LL;

    t123 = (((x529|x530)%x531)-x532);

    if (t123 != -1117LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x533 = INT32_MIN;
	uint16_t x534 = UINT16_MAX;
	int8_t x536 = INT8_MAX;

    t124 = (((x533|x534)%x535)-x536);

    if (t124 != -32895) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint16_t x538 = 6U;
	int8_t x540 = INT8_MIN;
	volatile int32_t t125 = 764;

    t125 = (((x537|x538)%x539)-x540);

    if (t125 != 263238997) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x541 = INT64_MIN;
	uint32_t x542 = UINT32_MAX;
	static int64_t x543 = INT64_MIN;
	static int64_t x544 = INT64_MIN;
	volatile int64_t t126 = -2108364026199990LL;

    t126 = (((x541|x542)%x543)-x544);

    if (t126 != 4294967295LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x545 = INT32_MIN;
	volatile uint8_t x546 = 3U;

    t127 = (((x545|x546)%x547)-x548);

    if (t127 != -35LL) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x549 = UINT16_MAX;
	volatile int32_t x550 = INT32_MAX;
	uint64_t x552 = UINT64_MAX;
	volatile uint64_t t128 = 225709LLU;

    t128 = (((x549|x550)%x551)-x552);

    if (t128 != 8LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint16_t x553 = 19U;
	uint8_t x554 = UINT8_MAX;
	int32_t x556 = INT32_MAX;
	int32_t t129 = 10942;

    t129 = (((x553|x554)%x555)-x556);

    if (t129 != -2147483620) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x561 = INT32_MAX;
	int32_t x562 = INT32_MIN;
	int64_t x563 = -1LL;
	int32_t x564 = INT32_MAX;
	volatile int64_t t130 = -12016619LL;

    t130 = (((x561|x562)%x563)-x564);

    if (t130 != -2147483647LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint16_t x565 = 1U;
	int64_t x566 = INT64_MAX;
	int32_t x568 = -1;
	volatile int64_t t131 = 1377739332549023080LL;

    t131 = (((x565|x566)%x567)-x568);

    if (t131 != 128LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x569 = 19;
	volatile int64_t x570 = -1LL;
	volatile int16_t x571 = INT16_MIN;
	static uint64_t x572 = 444377883607818LLU;

    t132 = (((x569|x570)%x571)-x572);

    if (t132 != 18446299695825943797LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static uint16_t x573 = UINT16_MAX;
	int32_t x574 = INT32_MIN;
	int32_t x575 = -14469474;
	int16_t x576 = INT16_MIN;
	volatile int32_t t133 = -91;

    t133 = (((x573|x574)%x575)-x576);

    if (t133 != -5903193) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x579 = UINT8_MAX;
	static int64_t t134 = INT64_MAX;

    t134 = (((x577|x578)%x579)-x580);

    if (t134 != INT64_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x582 = INT8_MAX;
	uint64_t x583 = 7254LLU;
	int16_t x584 = 2848;

    t135 = (((x581|x582)%x583)-x584);

    if (t135 != 797LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x585 = -15;
	static volatile uint16_t x586 = UINT16_MAX;
	int64_t x587 = INT64_MIN;
	int64_t x588 = INT64_MAX;
	static volatile int64_t t136 = INT64_MIN;

    t136 = (((x585|x586)%x587)-x588);

    if (t136 != INT64_MIN) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x593 = UINT16_MAX;
	static int32_t x594 = INT32_MIN;
	static int32_t x595 = 46;
	uint8_t x596 = UINT8_MAX;
	volatile int32_t t137 = 1013392723;

    t137 = (((x593|x594)%x595)-x596);

    if (t137 != -276) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x597 = 7U;
	static volatile uint16_t x598 = UINT16_MAX;
	volatile uint8_t x599 = UINT8_MAX;

    t138 = (((x597|x598)%x599)-x600);

    if (t138 != 32768) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x601 = INT8_MIN;
	int16_t x602 = INT16_MIN;
	uint16_t x603 = 99U;
	volatile int8_t x604 = 1;
	int32_t t139 = -57;

    t139 = (((x601|x602)%x603)-x604);

    if (t139 != -30) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint64_t x605 = 40LLU;
	int16_t x606 = 1052;
	int32_t x607 = -1;

    t140 = (((x605|x606)%x607)-x608);

    if (t140 != 18446744071562069053LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x609 = INT64_MIN;
	uint8_t x610 = 5U;
	uint64_t x612 = 509148426563LLU;

    t141 = (((x609|x610)%x611)-x612);

    if (t141 != 18446743564561124930LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	uint64_t x613 = UINT64_MAX;
	int16_t x614 = INT16_MIN;
	int8_t x615 = -3;
	volatile int32_t x616 = -16;

    t142 = (((x613|x614)%x615)-x616);

    if (t142 != 18LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x617 = INT32_MIN;
	int16_t x619 = 2677;
	static int8_t x620 = 1;
	volatile int32_t t143 = 3;

    t143 = (((x617|x618)%x619)-x620);

    if (t143 != -2280) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x621 = -1;
	int64_t x622 = 30LL;
	static volatile int32_t x623 = -102;
	int16_t x624 = INT16_MIN;
	volatile int64_t t144 = -12031665LL;

    t144 = (((x621|x622)%x623)-x624);

    if (t144 != 32767LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint16_t x625 = 23784U;
	static volatile uint16_t x627 = 135U;
	int16_t x628 = INT16_MIN;
	static int32_t t145 = -3454;

    t145 = (((x625|x626)%x627)-x628);

    if (t145 != 32767) { NG(); } else { ; }
	
}

void f146(void) {
    	uint32_t x629 = UINT32_MAX;
	static uint16_t x631 = 789U;
	static uint64_t t146 = 95576516790417LLU;

    t146 = (((x629|x630)%x631)-x632);

    if (t146 != 230LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x633 = INT64_MAX;
	int8_t x634 = -1;
	uint16_t x635 = UINT16_MAX;
	volatile int16_t x636 = -1;
	static volatile int64_t t147 = -6948837380LL;

    t147 = (((x633|x634)%x635)-x636);

    if (t147 != 0LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x637 = 204582023LL;
	int16_t x638 = 7;
	static int8_t x639 = -1;
	uint16_t x640 = 4032U;
	static volatile int64_t t148 = 149354786843LL;

    t148 = (((x637|x638)%x639)-x640);

    if (t148 != -4032LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x641 = INT16_MIN;
	int8_t x642 = INT8_MAX;
	int64_t x643 = -1LL;
	int64_t t149 = 2037171LL;

    t149 = (((x641|x642)%x643)-x644);

    if (t149 != -107LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x645 = -15521;
	int32_t x646 = 2541;
	static int16_t x647 = INT16_MIN;
	volatile int32_t x648 = -166318;

    t150 = (((x645|x646)%x647)-x648);

    if (t150 != 153005) { NG(); } else { ; }
	
}

void f151(void) {
    	static int64_t x650 = -1LL;
	int32_t x651 = -30627;
	uint64_t x652 = UINT64_MAX;
	volatile uint64_t t151 = 2096405235422525LLU;

    t151 = (((x649|x650)%x651)-x652);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x653 = -337141975;
	int8_t x654 = -1;
	volatile uint16_t x655 = 118U;
	int8_t x656 = -1;
	static int32_t t152 = -186;

    t152 = (((x653|x654)%x655)-x656);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	uint64_t x657 = 83247243LLU;
	uint64_t x658 = 498LLU;
	uint64_t x659 = UINT64_MAX;

    t153 = (((x657|x658)%x659)-x660);

    if (t153 != 2230731259LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x662 = 35U;
	int64_t x663 = -593004442738LL;
	int32_t x664 = INT32_MIN;
	int64_t t154 = 88435564828027LL;

    t154 = (((x661|x662)%x663)-x664);

    if (t154 != 2147498479LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x665 = INT64_MAX;
	static int16_t x666 = INT16_MIN;
	uint64_t x667 = UINT64_MAX;
	uint8_t x668 = 10U;
	uint64_t t155 = 8116LLU;

    t155 = (((x665|x666)%x667)-x668);

    if (t155 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x669 = UINT32_MAX;
	static uint8_t x671 = 94U;
	volatile uint32_t t156 = 117U;

    t156 = (((x669|x670)%x671)-x672);

    if (t156 != 4294966131U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x673 = UINT32_MAX;
	volatile int8_t x674 = INT8_MIN;
	volatile int8_t x675 = -24;
	uint32_t t157 = 1488996U;

    t157 = (((x673|x674)%x675)-x676);

    if (t157 != 4280972229U) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x681 = INT16_MIN;
	int32_t x683 = INT32_MIN;
	static int64_t t158 = 277875LL;

    t158 = (((x681|x682)%x683)-x684);

    if (t158 != 62667848670818412LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static int64_t x685 = INT64_MAX;
	volatile int8_t x687 = INT8_MIN;
	int64_t x688 = INT64_MIN;

    t159 = (((x685|x686)%x687)-x688);

    if (t159 != INT64_MAX) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x689 = 6U;
	uint32_t x690 = UINT32_MAX;
	int64_t x692 = 1790LL;
	volatile int64_t t160 = 277610847194LL;

    t160 = (((x689|x690)%x691)-x692);

    if (t160 != -1790LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x693 = INT32_MAX;
	static int16_t x694 = 366;
	int32_t x695 = INT32_MIN;

    t161 = (((x693|x694)%x695)-x696);

    if (t161 != 2147483520) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint32_t x697 = 19224030U;
	int64_t x698 = -209125296484LL;
	int64_t x699 = -1864410605356848447LL;
	static int16_t x700 = -10;
	int64_t t162 = -960920648921844816LL;

    t162 = (((x697|x698)%x699)-x700);

    if (t162 != -209125017624LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x703 = -1;
	volatile int16_t x704 = INT16_MAX;
	int32_t t163 = -1920;

    t163 = (((x701|x702)%x703)-x704);

    if (t163 != -32767) { NG(); } else { ; }
	
}

void f164(void) {
    	static int16_t x706 = -1;
	static volatile int16_t x707 = INT16_MIN;
	volatile int32_t t164 = -8008;

    t164 = (((x705|x706)%x707)-x708);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	static uint64_t x709 = 7937137145683533330LLU;
	int16_t x710 = 2;
	int32_t x712 = INT32_MIN;

    t165 = (((x709|x710)%x711)-x712);

    if (t165 != 7937137147831016978LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x713 = -1;
	int16_t x714 = INT16_MIN;
	int64_t x716 = -409718430373LL;
	static int64_t t166 = -2737856273395415LL;

    t166 = (((x713|x714)%x715)-x716);

    if (t166 != 409718430372LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x717 = 4519U;
	int64_t x718 = 679409LL;
	volatile uint16_t x720 = 61U;
	static volatile int64_t t167 = -1LL;

    t167 = (((x717|x718)%x719)-x720);

    if (t167 != -61LL) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x721 = INT8_MAX;
	volatile uint8_t x722 = 17U;
	int8_t x723 = INT8_MIN;
	static int16_t x724 = -1;

    t168 = (((x721|x722)%x723)-x724);

    if (t168 != 128) { NG(); } else { ; }
	
}

void f169(void) {
    	uint16_t x730 = 15471U;
	int32_t x731 = -1;
	int16_t x732 = INT16_MIN;
	volatile int32_t t169 = 85;

    t169 = (((x729|x730)%x731)-x732);

    if (t169 != 32768) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x733 = -2140704218LL;
	static volatile uint32_t x735 = 7U;
	uint64_t t170 = 4235507901LLU;

    t170 = (((x733|x734)%x735)-x736);

    if (t170 != 18446152199002723856LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	static int16_t x737 = 14;
	int8_t x738 = -1;
	static uint32_t x739 = 1027183758U;
	static uint16_t x740 = 1U;

    t171 = (((x737|x738)%x739)-x740);

    if (t171 != 186232262U) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x741 = INT8_MAX;
	volatile int8_t x742 = INT8_MIN;
	int32_t x744 = INT32_MIN;
	static int32_t t172 = INT32_MAX;

    t172 = (((x741|x742)%x743)-x744);

    if (t172 != INT32_MAX) { NG(); } else { ; }
	
}

void f173(void) {
    	uint32_t x745 = 55044350U;
	int32_t x746 = 4312;
	int16_t x747 = -1;
	int32_t x748 = -1;
	uint32_t t173 = 1U;

    t173 = (((x745|x746)%x747)-x748);

    if (t173 != 55048447U) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x749 = 689905611032606LLU;
	int16_t x750 = -4;
	volatile uint16_t x751 = 1U;
	volatile uint64_t t174 = 3LLU;

    t174 = (((x749|x750)%x751)-x752);

    if (t174 != 32768LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	static uint16_t x753 = UINT16_MAX;
	static volatile uint16_t x754 = 0U;
	volatile int64_t x755 = 377LL;
	int64_t t175 = -16086985566LL;

    t175 = (((x753|x754)%x755)-x756);

    if (t175 != 442LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x757 = INT16_MAX;
	uint32_t x758 = UINT32_MAX;
	int32_t x759 = INT32_MIN;
	int32_t x760 = -3;
	volatile uint32_t t176 = 858388U;

    t176 = (((x757|x758)%x759)-x760);

    if (t176 != 2147483650U) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x765 = 5619347715874LL;
	int16_t x766 = INT16_MAX;
	int16_t x767 = INT16_MIN;
	int8_t x768 = INT8_MIN;
	volatile int64_t t177 = -493LL;

    t177 = (((x765|x766)%x767)-x768);

    if (t177 != 32895LL) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int32_t x770 = -1;
	volatile int8_t x771 = -7;
	uint64_t x772 = UINT64_MAX;
	volatile uint64_t t178 = 386080959538LLU;

    t178 = (((x769|x770)%x771)-x772);

    if (t178 != 0LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x773 = INT16_MIN;
	int16_t x774 = -1;
	uint64_t t179 = 15505LLU;

    t179 = (((x773|x774)%x775)-x776);

    if (t179 != 1LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x777 = INT32_MIN;
	int16_t x778 = INT16_MIN;
	uint8_t x779 = 24U;
	static uint16_t x780 = UINT16_MAX;
	volatile int32_t t180 = -365;

    t180 = (((x777|x778)%x779)-x780);

    if (t180 != -65543) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x781 = -1;
	static uint32_t x782 = 8089025U;
	static volatile uint64_t t181 = 2655659LLU;

    t181 = (((x781|x782)%x783)-x784);

    if (t181 != 1LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x785 = -4378167827363164LL;
	int32_t x786 = 281708;
	static int16_t x787 = INT16_MIN;
	int8_t x788 = INT8_MIN;
	volatile int64_t t182 = 418LL;

    t182 = (((x785|x786)%x787)-x788);

    if (t182 != -12436LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x789 = INT8_MIN;
	int16_t x791 = INT16_MAX;
	static volatile int64_t x792 = -1564844942LL;
	static int64_t t183 = -4960176758LL;

    t183 = (((x789|x790)%x791)-x792);

    if (t183 != 1564844914LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x793 = 16U;
	static int32_t x796 = INT32_MIN;
	volatile int64_t t184 = 104224806646695633LL;

    t184 = (((x793|x794)%x795)-x796);

    if (t184 != 2123864400LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x797 = INT8_MIN;
	int16_t x799 = INT16_MIN;
	uint16_t x800 = UINT16_MAX;

    t185 = (((x797|x798)%x799)-x800);

    if (t185 != -65579LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x801 = UINT8_MAX;
	int32_t x802 = -1;
	volatile uint64_t x803 = UINT64_MAX;
	uint32_t x804 = 17U;
	volatile uint64_t t186 = 1830844810240428713LLU;

    t186 = (((x801|x802)%x803)-x804);

    if (t186 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x806 = INT64_MAX;
	static int32_t x807 = INT32_MAX;
	uint8_t x808 = UINT8_MAX;
	int64_t t187 = 35LL;

    t187 = (((x805|x806)%x807)-x808);

    if (t187 != -256LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x809 = INT64_MIN;
	uint32_t x810 = UINT32_MAX;
	int32_t x811 = INT32_MIN;
	static int32_t x812 = 192174012;
	int64_t t188 = 3815458685LL;

    t188 = (((x809|x810)%x811)-x812);

    if (t188 != -192174013LL) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile uint32_t x813 = 1434466U;
	uint16_t x814 = 0U;
	volatile int8_t x816 = 0;
	volatile uint32_t t189 = 16U;

    t189 = (((x813|x814)%x815)-x816);

    if (t189 != 1434466U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x817 = INT64_MAX;
	int16_t x818 = -1;
	int16_t x819 = INT16_MIN;

    t190 = (((x817|x818)%x819)-x820);

    if (t190 != 18446744073703018378LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x821 = 8U;
	volatile int64_t x822 = -1200LL;
	volatile int16_t x823 = INT16_MAX;
	int64_t t191 = -4LL;

    t191 = (((x821|x822)%x823)-x824);

    if (t191 != -1191LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x825 = 408U;
	uint32_t x826 = 311U;
	volatile int16_t x828 = 19;
	uint32_t t192 = 2365U;

    t192 = (((x825|x826)%x827)-x828);

    if (t192 != 428U) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x830 = -1LL;
	volatile int8_t x831 = INT8_MAX;
	volatile uint64_t t193 = 8108913325612158LLU;

    t193 = (((x829|x830)%x831)-x832);

    if (t193 != 129LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint16_t x833 = 0U;
	uint8_t x834 = 10U;
	int8_t x835 = 2;
	int32_t x836 = -1;
	volatile int32_t t194 = 7833517;

    t194 = (((x833|x834)%x835)-x836);

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x837 = INT8_MAX;
	uint8_t x838 = 12U;
	int8_t x839 = -1;
	int16_t x840 = 0;

    t195 = (((x837|x838)%x839)-x840);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x846 = UINT16_MAX;
	static int32_t x847 = -1;
	volatile int16_t x848 = INT16_MIN;
	int64_t t196 = -3712697LL;

    t196 = (((x845|x846)%x847)-x848);

    if (t196 != 32768LL) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint8_t x851 = 69U;
	int16_t x852 = INT16_MIN;
	volatile int64_t t197 = -3076281538485673LL;

    t197 = (((x849|x850)%x851)-x852);

    if (t197 != 32767LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x854 = INT32_MIN;
	uint16_t x855 = 856U;
	static int64_t x856 = -1LL;

    t198 = (((x853|x854)%x855)-x856);

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x857 = INT8_MAX;
	int8_t x859 = INT8_MAX;
	int16_t x860 = -500;
	volatile int32_t t199 = 394597;

    t199 = (((x857|x858)%x859)-x860);

    if (t199 != 498) { NG(); } else { ; }
	
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

