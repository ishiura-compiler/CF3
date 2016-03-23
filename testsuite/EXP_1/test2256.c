
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

static int64_t x1 = -4811LL;
static uint16_t x10 = 2873U;
static int8_t x11 = -1;
uint8_t x16 = 31U;
int32_t t3 = -92951020;
int8_t x17 = INT8_MIN;
uint8_t x20 = UINT8_MAX;
static int32_t t4 = 13680317;
int32_t x33 = -4974117;
static int32_t t9 = -2;
static int8_t x46 = 0;
int32_t x47 = 2916;
int32_t t10 = 837;
int8_t x50 = INT8_MAX;
uint64_t x55 = 244LLU;
uint16_t x58 = 144U;
uint16_t x66 = 1U;
volatile uint64_t x67 = 358499666LLU;
static int32_t t15 = 4125;
int32_t x70 = INT32_MAX;
volatile int32_t x71 = INT32_MIN;
volatile uint8_t x74 = 2U;
volatile uint16_t x78 = UINT16_MAX;
static int32_t x89 = INT32_MAX;
uint8_t x91 = 9U;
int32_t t22 = 165153109;
volatile int32_t t24 = 143;
static uint16_t x107 = 86U;
uint64_t x109 = 242426802201LLU;
int32_t t33 = 246217545;
volatile int8_t x162 = INT8_MIN;
static int32_t x163 = INT32_MIN;
volatile int16_t x167 = INT16_MIN;
uint64_t t38 = 0LLU;
volatile uint16_t x173 = 373U;
int16_t x179 = -222;
int8_t x185 = -1;
volatile int64_t x188 = 69937226338045LL;
int64_t t42 = 40668LL;
uint64_t x197 = UINT64_MAX;
int64_t x198 = INT64_MIN;
int32_t x202 = INT32_MIN;
static int8_t x204 = -1;
uint8_t x206 = 1U;
int32_t t46 = 478642;
int8_t x212 = INT8_MAX;
int16_t x218 = INT16_MAX;
volatile uint64_t x225 = 6LLU;
volatile uint64_t x228 = 1347296892542475LLU;
int64_t x239 = INT64_MIN;
int32_t x250 = INT32_MIN;
volatile int32_t t56 = -26474;
uint8_t x263 = 7U;
volatile uint32_t x264 = 37U;
int32_t t59 = 1736;
volatile int8_t x276 = 21;
static volatile int32_t t60 = -41565423;
volatile uint32_t t62 = 0U;
uint8_t x289 = 125U;
volatile int16_t x292 = -211;
int32_t t64 = 19001;
volatile uint64_t x295 = 83790LLU;
uint64_t t65 = 793LLU;
int8_t x303 = -1;
static uint64_t x304 = 99866LLU;
static int16_t x305 = -1;
static int16_t x306 = -4;
volatile uint8_t x312 = 1U;
int32_t t69 = 612591;
static volatile uint64_t x324 = UINT64_MAX;
int8_t x325 = INT8_MIN;
int32_t x338 = -1;
static uint16_t x339 = UINT16_MAX;
int16_t x340 = INT16_MIN;
static int32_t x341 = -1;
static int32_t x342 = 4;
static uint64_t x343 = 140900963581346628LLU;
int8_t x345 = INT8_MIN;
volatile int32_t t77 = 0;
uint8_t x359 = 2U;
volatile int32_t x364 = INT32_MAX;
int8_t x367 = -1;
volatile int32_t t81 = 253791761;
static volatile int32_t x371 = INT32_MIN;
volatile int8_t x391 = -8;
uint8_t x394 = 64U;
int64_t x397 = INT64_MIN;
uint32_t t87 = 363504194U;
uint32_t x404 = 3819160U;
int8_t x406 = 0;
uint8_t x414 = 2U;
volatile int64_t x415 = INT64_MAX;
volatile uint64_t x416 = 136243681988LLU;
static uint64_t x417 = 368239752LLU;
uint32_t x420 = 3293U;
int16_t x422 = INT16_MIN;
int32_t x423 = -2;
static int8_t x425 = INT8_MIN;
uint16_t x436 = UINT16_MAX;
static volatile uint32_t x448 = 1274U;
int16_t x450 = INT16_MIN;
int32_t x456 = 19;
uint8_t x458 = UINT8_MAX;
static int32_t x465 = -24979;
int64_t x479 = INT64_MIN;
uint8_t x482 = 116U;
static int8_t x486 = INT8_MIN;
volatile int32_t t108 = -2;
volatile int64_t x491 = INT64_MIN;
int64_t x497 = INT64_MIN;
int32_t x502 = -14824114;
static volatile int16_t x507 = -1608;
volatile int16_t x520 = 3138;
static int32_t t115 = -6396074;
uint8_t x529 = 9U;
static volatile int16_t x530 = INT16_MAX;
volatile int32_t t118 = 1444;
int8_t x538 = -1;
volatile int32_t t121 = 154728;
static int8_t x546 = INT8_MIN;
int32_t t123 = -31;
int32_t x557 = -1931;
int32_t x560 = 13437;
uint16_t x580 = UINT16_MAX;
int64_t x589 = -1LL;
static volatile uint16_t x590 = 20564U;
int8_t x598 = INT8_MAX;
int8_t x606 = -1;
uint8_t x620 = 25U;
static int32_t x626 = INT32_MAX;
int8_t x636 = INT8_MIN;
int32_t x639 = -1;
uint8_t x648 = UINT8_MAX;
uint64_t x655 = 21339494558569LLU;
volatile int8_t x661 = INT8_MAX;
int8_t x662 = -5;
int32_t x667 = -1;
uint64_t x676 = 0LLU;
volatile uint64_t t150 = 174714LLU;
int16_t x677 = -1;
uint64_t x681 = 9756567199661220LLU;
int64_t x684 = INT64_MAX;
uint8_t x700 = 1U;
int16_t x702 = INT16_MAX;
volatile int32_t x708 = INT32_MAX;
volatile uint32_t x709 = 37112980U;
int64_t x710 = -1LL;
uint8_t x716 = 46U;
static int16_t x721 = INT16_MAX;
volatile int8_t x722 = -1;
int32_t t162 = -209355094;
int64_t t163 = 3028LL;
int32_t x738 = INT32_MIN;
static uint8_t x740 = 7U;
uint32_t x743 = 2601U;
volatile uint32_t x744 = 477845U;
static volatile int16_t x759 = INT16_MIN;
int16_t x770 = INT16_MAX;
uint64_t x771 = 2049379LLU;
int64_t x773 = INT64_MIN;
int16_t x774 = -1;
int64_t x777 = -1LL;
int64_t x778 = -132934124LL;
volatile int8_t x779 = 3;
volatile int32_t t174 = 30557;
static int16_t x784 = INT16_MIN;
uint8_t x787 = 25U;
uint16_t x791 = 6186U;
static uint8_t x792 = UINT8_MAX;
int8_t x793 = INT8_MIN;
int8_t x794 = INT8_MAX;
int16_t x802 = INT16_MIN;
static int8_t x804 = INT8_MAX;
int8_t x809 = INT8_MIN;
int8_t x814 = INT8_MIN;
static int8_t x821 = -1;
static int32_t t186 = -1;
uint64_t x831 = 85260391931561145LLU;
int8_t x832 = INT8_MIN;
volatile uint32_t x835 = 852802U;
static int16_t x841 = INT16_MAX;
static volatile int32_t t189 = 8433505;
static uint8_t x846 = 13U;
volatile uint64_t t190 = 247386592433LLU;
int32_t x850 = 223671813;
static volatile uint64_t x856 = UINT64_MAX;
volatile int64_t t193 = -6601052794825LL;
static int16_t x863 = INT16_MAX;
uint64_t x864 = 0LLU;
volatile int32_t t195 = -700;
static int32_t x870 = INT32_MIN;
static int8_t x887 = -23;


void f0(void) {
    	int8_t x2 = INT8_MAX;
	int64_t x3 = INT64_MIN;
	int8_t x4 = INT8_MIN;
	int32_t t0 = -8024;

    t0 = (((x1&x2)==x3)-x4);

    if (t0 != 128) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = UINT64_MAX;
	static int64_t x6 = INT64_MIN;
	int16_t x7 = -1;
	uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = -42845;

    t1 = (((x5&x6)==x7)-x8);

    if (t1 != -65535) { NG(); } else { ; }
	
}

void f2(void) {
    	uint8_t x9 = 25U;
	int32_t x12 = -1;
	volatile int32_t t2 = -178553266;

    t2 = (((x9&x10)==x11)-x12);

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 62U;
	volatile uint32_t x14 = UINT32_MAX;
	int16_t x15 = INT16_MAX;

    t3 = (((x13&x14)==x15)-x16);

    if (t3 != -31) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x18 = -1;
	int32_t x19 = INT32_MAX;

    t4 = (((x17&x18)==x19)-x20);

    if (t4 != -255) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = UINT16_MAX;
	int8_t x22 = 20;
	int64_t x23 = -1LL;
	static int64_t x24 = -15204035527300LL;
	int64_t t5 = -252801301606470LL;

    t5 = (((x21&x22)==x23)-x24);

    if (t5 != 15204035527300LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = -1;
	volatile uint16_t x26 = 139U;
	int64_t x27 = 1LL;
	volatile int32_t x28 = 17;
	int32_t t6 = 29334802;

    t6 = (((x25&x26)==x27)-x28);

    if (t6 != -17) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x34 = -33;
	int8_t x35 = INT8_MIN;
	int8_t x36 = 0;
	static volatile int32_t t7 = -2627904;

    t7 = (((x33&x34)==x35)-x36);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	static int8_t x37 = 0;
	int16_t x38 = INT16_MIN;
	static volatile int32_t x39 = INT32_MAX;
	int64_t x40 = -1515780647LL;
	int64_t t8 = 155434LL;

    t8 = (((x37&x38)==x39)-x40);

    if (t8 != 1515780647LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x41 = 34;
	volatile int16_t x42 = INT16_MIN;
	int16_t x43 = 48;
	static uint16_t x44 = 3345U;

    t9 = (((x41&x42)==x43)-x44);

    if (t9 != -3345) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x45 = 6435U;
	uint8_t x48 = UINT8_MAX;

    t10 = (((x45&x46)==x47)-x48);

    if (t10 != -255) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x49 = -236984997;
	int32_t x51 = -34;
	volatile int32_t x52 = -30304;
	volatile int32_t t11 = 142926495;

    t11 = (((x49&x50)==x51)-x52);

    if (t11 != 30304) { NG(); } else { ; }
	
}

void f12(void) {
    	static int32_t x53 = INT32_MAX;
	uint32_t x54 = 9U;
	int16_t x56 = INT16_MIN;
	int32_t t12 = -6;

    t12 = (((x53&x54)==x55)-x56);

    if (t12 != 32768) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x57 = -1;
	uint16_t x59 = UINT16_MAX;
	static volatile int8_t x60 = 1;
	volatile int32_t t13 = -16714;

    t13 = (((x57&x58)==x59)-x60);

    if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint16_t x61 = UINT16_MAX;
	uint16_t x62 = 1U;
	static volatile int32_t x63 = -1;
	volatile int64_t x64 = -777LL;
	int64_t t14 = 195950128886836213LL;

    t14 = (((x61&x62)==x63)-x64);

    if (t14 != 777LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x65 = 9544U;
	int16_t x68 = INT16_MIN;

    t15 = (((x65&x66)==x67)-x68);

    if (t15 != 32768) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x69 = INT64_MAX;
	static uint16_t x72 = 4U;
	static volatile int32_t t16 = 1056492;

    t16 = (((x69&x70)==x71)-x72);

    if (t16 != -4) { NG(); } else { ; }
	
}

void f17(void) {
    	static volatile int8_t x73 = -59;
	int8_t x75 = INT8_MIN;
	int16_t x76 = -459;
	volatile int32_t t17 = -2;

    t17 = (((x73&x74)==x75)-x76);

    if (t17 != 459) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint16_t x77 = UINT16_MAX;
	static int8_t x79 = INT8_MIN;
	uint64_t x80 = UINT64_MAX;
	static uint64_t t18 = 84711349110404LLU;

    t18 = (((x77&x78)==x79)-x80);

    if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static int32_t x81 = -1;
	uint32_t x82 = UINT32_MAX;
	volatile int64_t x83 = 10034845586614LL;
	int16_t x84 = INT16_MIN;
	volatile int32_t t19 = 27;

    t19 = (((x81&x82)==x83)-x84);

    if (t19 != 32768) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x85 = INT16_MAX;
	uint8_t x86 = 2U;
	static int8_t x87 = INT8_MAX;
	volatile int16_t x88 = -1;
	int32_t t20 = -24745836;

    t20 = (((x85&x86)==x87)-x88);

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x90 = 1;
	int16_t x92 = 143;
	int32_t t21 = -530152;

    t21 = (((x89&x90)==x91)-x92);

    if (t21 != -143) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x93 = INT32_MIN;
	static int32_t x94 = -77312296;
	int64_t x95 = -84770479LL;
	static uint16_t x96 = 433U;

    t22 = (((x93&x94)==x95)-x96);

    if (t22 != -433) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x97 = 810LL;
	volatile int8_t x98 = INT8_MIN;
	int16_t x99 = -8;
	volatile int32_t x100 = INT32_MAX;
	volatile int32_t t23 = 0;

    t23 = (((x97&x98)==x99)-x100);

    if (t23 != -2147483647) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int32_t x101 = -10674;
	static volatile uint64_t x102 = 48144510LLU;
	int32_t x103 = INT32_MAX;
	static int8_t x104 = -1;

    t24 = (((x101&x102)==x103)-x104);

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x105 = INT32_MAX;
	int64_t x106 = INT64_MIN;
	int16_t x108 = 0;
	volatile int32_t t25 = 258;

    t25 = (((x105&x106)==x107)-x108);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int64_t x110 = -473568LL;
	uint32_t x111 = UINT32_MAX;
	volatile int16_t x112 = INT16_MIN;
	volatile int32_t t26 = 0;

    t26 = (((x109&x110)==x111)-x112);

    if (t26 != 32768) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x113 = -93;
	volatile int8_t x114 = -17;
	volatile uint64_t x115 = UINT64_MAX;
	uint32_t x116 = 277U;
	volatile uint32_t t27 = 13456U;

    t27 = (((x113&x114)==x115)-x116);

    if (t27 != 4294967019U) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int8_t x121 = INT8_MAX;
	volatile int64_t x122 = INT64_MAX;
	int8_t x123 = INT8_MAX;
	static uint8_t x124 = 1U;
	int32_t t28 = -2734048;

    t28 = (((x121&x122)==x123)-x124);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int16_t x129 = -12;
	volatile int16_t x130 = INT16_MAX;
	volatile uint16_t x131 = 24U;
	int8_t x132 = -1;
	volatile int32_t t29 = -3457818;

    t29 = (((x129&x130)==x131)-x132);

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x133 = INT32_MIN;
	static volatile uint64_t x134 = 956686118LLU;
	uint64_t x135 = UINT64_MAX;
	int8_t x136 = 50;
	int32_t t30 = -106;

    t30 = (((x133&x134)==x135)-x136);

    if (t30 != -50) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x137 = 715;
	int64_t x138 = -1LL;
	int8_t x139 = -18;
	int16_t x140 = -1;
	static volatile int32_t t31 = -5176331;

    t31 = (((x137&x138)==x139)-x140);

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x141 = 32157937076280LL;
	static int64_t x142 = INT64_MIN;
	int64_t x143 = -1LL;
	volatile uint64_t x144 = UINT64_MAX;
	static volatile uint64_t t32 = 2389007LLU;

    t32 = (((x141&x142)==x143)-x144);

    if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x145 = -1LL;
	uint16_t x146 = 10U;
	volatile uint64_t x147 = 419119453885LLU;
	uint16_t x148 = 11U;

    t33 = (((x145&x146)==x147)-x148);

    if (t33 != -11) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x149 = 162;
	static uint32_t x150 = 2788U;
	int64_t x151 = -1LL;
	static uint32_t x152 = UINT32_MAX;
	uint32_t t34 = 254407U;

    t34 = (((x149&x150)==x151)-x152);

    if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x157 = -1;
	volatile int32_t x158 = INT32_MIN;
	static int16_t x159 = -1;
	volatile uint32_t x160 = UINT32_MAX;
	uint32_t t35 = 28319658U;

    t35 = (((x157&x158)==x159)-x160);

    if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x161 = 1633U;
	static volatile int8_t x164 = -1;
	int32_t t36 = -443653551;

    t36 = (((x161&x162)==x163)-x164);

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x165 = 21459802785897367LL;
	uint64_t x166 = 6037552386022796LLU;
	volatile uint64_t x168 = 34450738924699LLU;
	volatile uint64_t t37 = 1814403LLU;

    t37 = (((x165&x166)==x167)-x168);

    if (t37 != 18446709622970626917LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x169 = 6U;
	int64_t x170 = INT64_MIN;
	volatile int64_t x171 = -62LL;
	static uint64_t x172 = UINT64_MAX;

    t38 = (((x169&x170)==x171)-x172);

    if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x174 = UINT8_MAX;
	volatile int64_t x175 = -3489916101845497860LL;
	int8_t x176 = INT8_MIN;
	static int32_t t39 = -379;

    t39 = (((x173&x174)==x175)-x176);

    if (t39 != 128) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x177 = INT32_MIN;
	static volatile uint16_t x178 = 3U;
	uint16_t x180 = UINT16_MAX;
	volatile int32_t t40 = -1021748;

    t40 = (((x177&x178)==x179)-x180);

    if (t40 != -65535) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x181 = INT32_MIN;
	int8_t x182 = -1;
	int16_t x183 = -1;
	volatile uint16_t x184 = UINT16_MAX;
	int32_t t41 = -5;

    t41 = (((x181&x182)==x183)-x184);

    if (t41 != -65535) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x186 = 0U;
	static int16_t x187 = -1;

    t42 = (((x185&x186)==x187)-x188);

    if (t42 != -69937226338045LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x193 = -2;
	static volatile uint32_t x194 = 257804U;
	uint8_t x195 = 22U;
	uint8_t x196 = UINT8_MAX;
	volatile int32_t t43 = -59851;

    t43 = (((x193&x194)==x195)-x196);

    if (t43 != -255) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x199 = 1061201338;
	int32_t x200 = INT32_MAX;
	volatile int32_t t44 = 3848394;

    t44 = (((x197&x198)==x199)-x200);

    if (t44 != -2147483647) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x201 = INT64_MAX;
	uint64_t x203 = UINT64_MAX;
	static int32_t t45 = 0;

    t45 = (((x201&x202)==x203)-x204);

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x205 = 351230U;
	uint32_t x207 = UINT32_MAX;
	static int8_t x208 = 0;

    t46 = (((x205&x206)==x207)-x208);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x209 = INT32_MIN;
	int8_t x210 = 1;
	int32_t x211 = -1;
	volatile int32_t t47 = -1317690;

    t47 = (((x209&x210)==x211)-x212);

    if (t47 != -127) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x213 = INT8_MIN;
	int32_t x214 = -1054973917;
	volatile int64_t x215 = INT64_MIN;
	int32_t x216 = -327562643;
	int32_t t48 = -1220;

    t48 = (((x213&x214)==x215)-x216);

    if (t48 != 327562643) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile uint64_t x217 = 13860548624LLU;
	int8_t x219 = -1;
	static int64_t x220 = INT64_MAX;
	volatile int64_t t49 = 897696386686130571LL;

    t49 = (((x217&x218)==x219)-x220);

    if (t49 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x226 = 0U;
	int8_t x227 = INT8_MIN;
	uint64_t t50 = 249LLU;

    t50 = (((x225&x226)==x227)-x228);

    if (t50 != 18445396776817009141LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x229 = INT8_MAX;
	uint32_t x230 = 99125547U;
	static int32_t x231 = -1;
	int32_t x232 = INT32_MAX;
	volatile int32_t t51 = 609;

    t51 = (((x229&x230)==x231)-x232);

    if (t51 != -2147483647) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x233 = 7U;
	static int64_t x234 = 131773LL;
	uint64_t x235 = 32LLU;
	uint16_t x236 = 118U;
	int32_t t52 = 63031355;

    t52 = (((x233&x234)==x235)-x236);

    if (t52 != -118) { NG(); } else { ; }
	
}

void f53(void) {
    	static int32_t x237 = -7561469;
	volatile uint8_t x238 = 0U;
	int32_t x240 = -1;
	int32_t t53 = 1616;

    t53 = (((x237&x238)==x239)-x240);

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x249 = 66U;
	int64_t x251 = -984217LL;
	uint64_t x252 = UINT64_MAX;
	volatile uint64_t t54 = 1011805603221464096LLU;

    t54 = (((x249&x250)==x251)-x252);

    if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint16_t x253 = 108U;
	volatile int32_t x254 = INT32_MIN;
	uint32_t x255 = 34658646U;
	int32_t x256 = -4091067;
	volatile int32_t t55 = -428333;

    t55 = (((x253&x254)==x255)-x256);

    if (t55 != 4091067) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x257 = 818U;
	int16_t x258 = 87;
	uint16_t x259 = UINT16_MAX;
	volatile uint8_t x260 = UINT8_MAX;

    t56 = (((x257&x258)==x259)-x260);

    if (t56 != -255) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x261 = 38U;
	static volatile int8_t x262 = INT8_MIN;
	static volatile uint32_t t57 = 52450U;

    t57 = (((x261&x262)==x263)-x264);

    if (t57 != 4294967259U) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x265 = INT8_MAX;
	uint16_t x266 = 3U;
	int32_t x267 = INT32_MIN;
	volatile uint16_t x268 = 41U;
	int32_t t58 = 135217;

    t58 = (((x265&x266)==x267)-x268);

    if (t58 != -41) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint16_t x269 = 53U;
	static volatile int32_t x270 = -22;
	volatile int8_t x271 = INT8_MAX;
	int16_t x272 = INT16_MIN;

    t59 = (((x269&x270)==x271)-x272);

    if (t59 != 32768) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x273 = INT16_MIN;
	int64_t x274 = -1LL;
	uint8_t x275 = UINT8_MAX;

    t60 = (((x273&x274)==x275)-x276);

    if (t60 != -21) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x277 = INT8_MIN;
	volatile int8_t x278 = INT8_MIN;
	int8_t x279 = INT8_MIN;
	uint16_t x280 = 5U;
	int32_t t61 = 805443;

    t61 = (((x277&x278)==x279)-x280);

    if (t61 != -4) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x281 = UINT64_MAX;
	int16_t x282 = -1;
	static uint16_t x283 = 15U;
	uint32_t x284 = 438423U;

    t62 = (((x281&x282)==x283)-x284);

    if (t62 != 4294528873U) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int64_t x285 = INT64_MIN;
	int64_t x286 = INT64_MIN;
	volatile uint32_t x287 = 320778625U;
	int16_t x288 = INT16_MIN;
	volatile int32_t t63 = -83;

    t63 = (((x285&x286)==x287)-x288);

    if (t63 != 32768) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x290 = 141;
	static int8_t x291 = -1;

    t64 = (((x289&x290)==x291)-x292);

    if (t64 != 211) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x293 = -64663;
	int64_t x294 = INT64_MIN;
	static uint64_t x296 = UINT64_MAX;

    t65 = (((x293&x294)==x295)-x296);

    if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x297 = INT16_MIN;
	volatile int8_t x298 = -3;
	uint8_t x299 = 121U;
	uint8_t x300 = 22U;
	int32_t t66 = -66398;

    t66 = (((x297&x298)==x299)-x300);

    if (t66 != -22) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile uint64_t x301 = 946LLU;
	int16_t x302 = 4;
	static uint64_t t67 = 151672814199LLU;

    t67 = (((x301&x302)==x303)-x304);

    if (t67 != 18446744073709451750LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x307 = INT16_MIN;
	int8_t x308 = INT8_MIN;
	int32_t t68 = -100;

    t68 = (((x305&x306)==x307)-x308);

    if (t68 != 128) { NG(); } else { ; }
	
}

void f69(void) {
    	static int64_t x309 = INT64_MAX;
	int64_t x310 = 11897787LL;
	int8_t x311 = -1;

    t69 = (((x309&x310)==x311)-x312);

    if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
    	uint16_t x321 = 25764U;
	uint32_t x322 = 290U;
	int8_t x323 = -1;
	volatile uint64_t t70 = 3534451464268352LLU;

    t70 = (((x321&x322)==x323)-x324);

    if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x326 = INT64_MIN;
	volatile uint8_t x327 = 2U;
	int16_t x328 = -1;
	int32_t t71 = -324;

    t71 = (((x325&x326)==x327)-x328);

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x329 = INT16_MIN;
	int8_t x330 = INT8_MIN;
	int16_t x331 = 33;
	volatile uint32_t x332 = UINT32_MAX;
	volatile uint32_t t72 = 40581U;

    t72 = (((x329&x330)==x331)-x332);

    if (t72 != 1U) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x333 = 125292998LLU;
	int16_t x334 = 239;
	uint64_t x335 = 3299LLU;
	static int16_t x336 = -61;
	int32_t t73 = -7239;

    t73 = (((x333&x334)==x335)-x336);

    if (t73 != 61) { NG(); } else { ; }
	
}

void f74(void) {
    	int64_t x337 = INT64_MIN;
	volatile int32_t t74 = 6644764;

    t74 = (((x337&x338)==x339)-x340);

    if (t74 != 32768) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x344 = INT64_MAX;
	int64_t t75 = -717758741LL;

    t75 = (((x341&x342)==x343)-x344);

    if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x346 = INT8_MAX;
	uint32_t x347 = 191U;
	static uint32_t x348 = 54689888U;
	static volatile uint32_t t76 = 30U;

    t76 = (((x345&x346)==x347)-x348);

    if (t76 != 4240277408U) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x349 = INT64_MIN;
	uint32_t x350 = UINT32_MAX;
	static int8_t x351 = 1;
	static uint8_t x352 = UINT8_MAX;

    t77 = (((x349&x350)==x351)-x352);

    if (t77 != -255) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x353 = 1288514U;
	int8_t x354 = INT8_MIN;
	int32_t x355 = INT32_MAX;
	uint16_t x356 = 0U;
	int32_t t78 = -775;

    t78 = (((x353&x354)==x355)-x356);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int64_t x357 = -1LL;
	int16_t x358 = INT16_MAX;
	volatile uint32_t x360 = 25412U;
	uint32_t t79 = 431095U;

    t79 = (((x357&x358)==x359)-x360);

    if (t79 != 4294941884U) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x361 = 411954;
	int16_t x362 = INT16_MIN;
	uint8_t x363 = UINT8_MAX;
	int32_t t80 = -157475964;

    t80 = (((x361&x362)==x363)-x364);

    if (t80 != -2147483647) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x365 = INT16_MIN;
	uint32_t x366 = 8890905U;
	int8_t x368 = -34;

    t81 = (((x365&x366)==x367)-x368);

    if (t81 != 34) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x369 = UINT8_MAX;
	uint32_t x370 = 5U;
	int16_t x372 = -1;
	static int32_t t82 = 755013;

    t82 = (((x369&x370)==x371)-x372);

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int8_t x381 = -1;
	uint32_t x382 = 1808409U;
	int32_t x383 = -72887724;
	int16_t x384 = INT16_MIN;
	int32_t t83 = 44120077;

    t83 = (((x381&x382)==x383)-x384);

    if (t83 != 32768) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint64_t x385 = 211035763LLU;
	uint8_t x386 = UINT8_MAX;
	volatile int8_t x387 = -1;
	int8_t x388 = INT8_MAX;
	static int32_t t84 = 5;

    t84 = (((x385&x386)==x387)-x388);

    if (t84 != -127) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x389 = INT32_MIN;
	volatile uint8_t x390 = 10U;
	volatile int64_t x392 = -76624088LL;
	int64_t t85 = -1058886332639987LL;

    t85 = (((x389&x390)==x391)-x392);

    if (t85 != 76624088LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x393 = INT16_MAX;
	int64_t x395 = 62918384LL;
	uint16_t x396 = 1693U;
	volatile int32_t t86 = -132500;

    t86 = (((x393&x394)==x395)-x396);

    if (t86 != -1693) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int8_t x398 = -1;
	uint8_t x399 = 65U;
	uint32_t x400 = 76751U;

    t87 = (((x397&x398)==x399)-x400);

    if (t87 != 4294890545U) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x401 = -12;
	uint8_t x402 = 20U;
	int16_t x403 = INT16_MAX;
	volatile uint32_t t88 = 3474646U;

    t88 = (((x401&x402)==x403)-x404);

    if (t88 != 4291148136U) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x405 = 183;
	int16_t x407 = 12;
	int8_t x408 = INT8_MIN;
	int32_t t89 = 3;

    t89 = (((x405&x406)==x407)-x408);

    if (t89 != 128) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x409 = 859920LLU;
	static volatile int64_t x410 = INT64_MIN;
	int8_t x411 = INT8_MIN;
	int8_t x412 = -1;
	volatile int32_t t90 = -820;

    t90 = (((x409&x410)==x411)-x412);

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x413 = INT32_MAX;
	uint64_t t91 = 1559985306LLU;

    t91 = (((x413&x414)==x415)-x416);

    if (t91 != 18446743937465869628LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int16_t x418 = INT16_MIN;
	int64_t x419 = -1277LL;
	volatile uint32_t t92 = 28687U;

    t92 = (((x417&x418)==x419)-x420);

    if (t92 != 4294964003U) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x421 = -1;
	int16_t x424 = -1;
	int32_t t93 = -34266097;

    t93 = (((x421&x422)==x423)-x424);

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x426 = INT8_MAX;
	int64_t x427 = -1LL;
	int8_t x428 = -8;
	volatile int32_t t94 = -5369;

    t94 = (((x425&x426)==x427)-x428);

    if (t94 != 8) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint16_t x429 = 10584U;
	int16_t x430 = -1;
	int64_t x431 = 955975275712392LL;
	static uint8_t x432 = 5U;
	int32_t t95 = -1027701;

    t95 = (((x429&x430)==x431)-x432);

    if (t95 != -5) { NG(); } else { ; }
	
}

void f96(void) {
    	static int8_t x433 = INT8_MIN;
	uint16_t x434 = 569U;
	volatile uint16_t x435 = 0U;
	int32_t t96 = 4;

    t96 = (((x433&x434)==x435)-x436);

    if (t96 != -65535) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x437 = INT8_MAX;
	volatile int8_t x438 = 0;
	int64_t x439 = -632LL;
	uint64_t x440 = 105LLU;
	static volatile uint64_t t97 = 218868943845971250LLU;

    t97 = (((x437&x438)==x439)-x440);

    if (t97 != 18446744073709551511LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x445 = 2;
	volatile int64_t x446 = INT64_MAX;
	int8_t x447 = INT8_MAX;
	static uint32_t t98 = 13961969U;

    t98 = (((x445&x446)==x447)-x448);

    if (t98 != 4294966022U) { NG(); } else { ; }
	
}

void f99(void) {
    	static int64_t x449 = INT64_MAX;
	volatile uint8_t x451 = 36U;
	int8_t x452 = INT8_MIN;
	volatile int32_t t99 = 5;

    t99 = (((x449&x450)==x451)-x452);

    if (t99 != 128) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint32_t x453 = 6009738U;
	static uint8_t x454 = 2U;
	int8_t x455 = INT8_MIN;
	volatile int32_t t100 = -1;

    t100 = (((x453&x454)==x455)-x456);

    if (t100 != -19) { NG(); } else { ; }
	
}

void f101(void) {
    	static volatile int8_t x457 = 2;
	static int64_t x459 = -1LL;
	uint8_t x460 = 0U;
	volatile int32_t t101 = 3815;

    t101 = (((x457&x458)==x459)-x460);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x461 = INT64_MIN;
	int64_t x462 = -1LL;
	int16_t x463 = -7508;
	static int32_t x464 = INT32_MAX;
	volatile int32_t t102 = -595115;

    t102 = (((x461&x462)==x463)-x464);

    if (t102 != -2147483647) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile int32_t x466 = INT32_MAX;
	int64_t x467 = INT64_MAX;
	volatile int8_t x468 = 0;
	static int32_t t103 = -57068475;

    t103 = (((x465&x466)==x467)-x468);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x469 = INT16_MIN;
	int64_t x470 = INT64_MAX;
	int16_t x471 = INT16_MIN;
	int8_t x472 = -22;
	int32_t t104 = 25625;

    t104 = (((x469&x470)==x471)-x472);

    if (t104 != 22) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x473 = 402;
	int32_t x474 = INT32_MIN;
	int8_t x475 = INT8_MAX;
	int32_t x476 = -1;
	static volatile int32_t t105 = 12680;

    t105 = (((x473&x474)==x475)-x476);

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x477 = UINT32_MAX;
	uint16_t x478 = 226U;
	int64_t x480 = 1832833460099256577LL;
	static int64_t t106 = -3LL;

    t106 = (((x477&x478)==x479)-x480);

    if (t106 != -1832833460099256577LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x481 = 61062U;
	int64_t x483 = INT64_MAX;
	int8_t x484 = INT8_MIN;
	static volatile int32_t t107 = -188948;

    t107 = (((x481&x482)==x483)-x484);

    if (t107 != 128) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x485 = 77906923419687LLU;
	static uint64_t x487 = 328781689102493LLU;
	static int16_t x488 = INT16_MAX;

    t108 = (((x485&x486)==x487)-x488);

    if (t108 != -32767) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int8_t x489 = 2;
	int32_t x490 = INT32_MAX;
	int8_t x492 = -10;
	int32_t t109 = -15368;

    t109 = (((x489&x490)==x491)-x492);

    if (t109 != 10) { NG(); } else { ; }
	
}

void f110(void) {
    	uint8_t x498 = 2U;
	int8_t x499 = 3;
	volatile int8_t x500 = INT8_MAX;
	volatile int32_t t110 = 455191177;

    t110 = (((x497&x498)==x499)-x500);

    if (t110 != -127) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x501 = INT16_MIN;
	int64_t x503 = INT64_MIN;
	int64_t x504 = -1LL;
	static volatile int64_t t111 = -1791LL;

    t111 = (((x501&x502)==x503)-x504);

    if (t111 != 1LL) { NG(); } else { ; }
	
}

void f112(void) {
    	static volatile int64_t x505 = INT64_MAX;
	uint64_t x506 = 240464LLU;
	uint8_t x508 = 9U;
	static volatile int32_t t112 = 1102;

    t112 = (((x505&x506)==x507)-x508);

    if (t112 != -9) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x509 = 98U;
	volatile int64_t x510 = -2707905395510114LL;
	int64_t x511 = INT64_MIN;
	int64_t x512 = INT64_MAX;
	static int64_t t113 = -2528981849675764426LL;

    t113 = (((x509&x510)==x511)-x512);

    if (t113 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x513 = INT32_MIN;
	volatile int64_t x514 = 807853765241LL;
	int16_t x515 = INT16_MIN;
	static int32_t x516 = -3;
	int32_t t114 = 3;

    t114 = (((x513&x514)==x515)-x516);

    if (t114 != 3) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x517 = 1050055862LLU;
	uint16_t x518 = UINT16_MAX;
	static uint16_t x519 = 7U;

    t115 = (((x517&x518)==x519)-x520);

    if (t115 != -3138) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x521 = INT32_MIN;
	uint16_t x522 = UINT16_MAX;
	uint16_t x523 = UINT16_MAX;
	int8_t x524 = -11;
	static int32_t t116 = -1;

    t116 = (((x521&x522)==x523)-x524);

    if (t116 != 11) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x525 = INT8_MIN;
	volatile int32_t x526 = INT32_MIN;
	static int32_t x527 = -1535735;
	uint16_t x528 = 2U;
	volatile int32_t t117 = 577249;

    t117 = (((x525&x526)==x527)-x528);

    if (t117 != -2) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x531 = 1U;
	static uint16_t x532 = UINT16_MAX;

    t118 = (((x529&x530)==x531)-x532);

    if (t118 != -65535) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x533 = INT64_MIN;
	uint32_t x534 = 454826427U;
	volatile int8_t x535 = INT8_MIN;
	uint8_t x536 = UINT8_MAX;
	int32_t t119 = -12889;

    t119 = (((x533&x534)==x535)-x536);

    if (t119 != -255) { NG(); } else { ; }
	
}

void f120(void) {
    	static uint8_t x537 = UINT8_MAX;
	uint8_t x539 = 0U;
	int8_t x540 = INT8_MIN;
	static int32_t t120 = -3865105;

    t120 = (((x537&x538)==x539)-x540);

    if (t120 != 128) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x541 = UINT8_MAX;
	volatile uint64_t x542 = UINT64_MAX;
	int32_t x543 = INT32_MIN;
	int32_t x544 = 36755820;

    t121 = (((x541&x542)==x543)-x544);

    if (t121 != -36755820) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x545 = 902198996963557356LLU;
	int64_t x547 = -1048974448227695LL;
	int8_t x548 = 1;
	volatile int32_t t122 = -54377;

    t122 = (((x545&x546)==x547)-x548);

    if (t122 != -1) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x549 = 28168;
	static volatile uint8_t x550 = 72U;
	volatile int64_t x551 = 18333332393968853LL;
	int16_t x552 = INT16_MAX;

    t123 = (((x549&x550)==x551)-x552);

    if (t123 != -32767) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x553 = INT32_MIN;
	volatile int8_t x554 = INT8_MIN;
	int32_t x555 = INT32_MAX;
	int64_t x556 = 56623957640LL;
	int64_t t124 = -17LL;

    t124 = (((x553&x554)==x555)-x556);

    if (t124 != -56623957640LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x558 = INT8_MIN;
	int32_t x559 = 20;
	static int32_t t125 = -244;

    t125 = (((x557&x558)==x559)-x560);

    if (t125 != -13437) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint16_t x561 = UINT16_MAX;
	static volatile int64_t x562 = -13541411454LL;
	uint64_t x563 = 18368LLU;
	int8_t x564 = -20;
	int32_t t126 = -55;

    t126 = (((x561&x562)==x563)-x564);

    if (t126 != 20) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile int64_t x565 = INT64_MAX;
	static uint32_t x566 = 759U;
	static uint8_t x567 = 97U;
	uint32_t x568 = UINT32_MAX;
	uint32_t t127 = 6U;

    t127 = (((x565&x566)==x567)-x568);

    if (t127 != 1U) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x569 = INT64_MIN;
	uint64_t x570 = 121629273386428330LLU;
	uint32_t x571 = 2U;
	int16_t x572 = -1;
	static volatile int32_t t128 = 29897108;

    t128 = (((x569&x570)==x571)-x572);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile int16_t x573 = -309;
	uint32_t x574 = 9348767U;
	static volatile int16_t x575 = -1;
	uint64_t x576 = 1734500564531929LLU;
	volatile uint64_t t129 = 549682383060LLU;

    t129 = (((x573&x574)==x575)-x576);

    if (t129 != 18445009573145019687LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static int64_t x577 = -854LL;
	static int16_t x578 = -1491;
	uint16_t x579 = UINT16_MAX;
	volatile int32_t t130 = -204459;

    t130 = (((x577&x578)==x579)-x580);

    if (t130 != -65535) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x585 = UINT8_MAX;
	int64_t x586 = INT64_MAX;
	uint16_t x587 = 1258U;
	volatile int32_t x588 = 2;
	volatile int32_t t131 = 1140;

    t131 = (((x585&x586)==x587)-x588);

    if (t131 != -2) { NG(); } else { ; }
	
}

void f132(void) {
    	int64_t x591 = INT64_MIN;
	int16_t x592 = INT16_MAX;
	int32_t t132 = 244;

    t132 = (((x589&x590)==x591)-x592);

    if (t132 != -32767) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x597 = INT64_MIN;
	volatile int32_t x599 = 124178;
	volatile int8_t x600 = -1;
	int32_t t133 = -11;

    t133 = (((x597&x598)==x599)-x600);

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x601 = 1592U;
	int32_t x602 = -1;
	volatile uint16_t x603 = 678U;
	int16_t x604 = -1;
	int32_t t134 = 145;

    t134 = (((x601&x602)==x603)-x604);

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x605 = UINT32_MAX;
	int64_t x607 = -2144918946186LL;
	int16_t x608 = -1682;
	static int32_t t135 = -6;

    t135 = (((x605&x606)==x607)-x608);

    if (t135 != 1682) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x609 = INT64_MAX;
	uint8_t x610 = 101U;
	int8_t x611 = INT8_MIN;
	int64_t x612 = 12691LL;
	volatile int64_t t136 = 886459LL;

    t136 = (((x609&x610)==x611)-x612);

    if (t136 != -12691LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x613 = 0;
	int64_t x614 = INT64_MIN;
	uint64_t x615 = UINT64_MAX;
	volatile uint32_t x616 = 16631U;
	static uint32_t t137 = 1548U;

    t137 = (((x613&x614)==x615)-x616);

    if (t137 != 4294950665U) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int64_t x617 = INT64_MIN;
	uint8_t x618 = 2U;
	int8_t x619 = INT8_MAX;
	volatile int32_t t138 = 26693200;

    t138 = (((x617&x618)==x619)-x620);

    if (t138 != -25) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x625 = INT8_MIN;
	int64_t x627 = INT64_MIN;
	int64_t x628 = -1LL;
	static int64_t t139 = 3913017314882270LL;

    t139 = (((x625&x626)==x627)-x628);

    if (t139 != 1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x629 = INT8_MIN;
	int32_t x630 = INT32_MIN;
	static int64_t x631 = INT64_MAX;
	static int16_t x632 = 503;
	int32_t t140 = 45264992;

    t140 = (((x629&x630)==x631)-x632);

    if (t140 != -503) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x633 = -1;
	int32_t x634 = -1;
	int8_t x635 = INT8_MIN;
	int32_t t141 = 199;

    t141 = (((x633&x634)==x635)-x636);

    if (t141 != 128) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int32_t x637 = -9735;
	volatile uint16_t x638 = 0U;
	int8_t x640 = -1;
	int32_t t142 = 0;

    t142 = (((x637&x638)==x639)-x640);

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x641 = -30887;
	int32_t x642 = INT32_MIN;
	volatile int8_t x643 = 28;
	int8_t x644 = INT8_MIN;
	volatile int32_t t143 = 14027;

    t143 = (((x641&x642)==x643)-x644);

    if (t143 != 128) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x645 = 7U;
	static uint64_t x646 = 1552377LLU;
	volatile int16_t x647 = INT16_MIN;
	int32_t t144 = 70;

    t144 = (((x645&x646)==x647)-x648);

    if (t144 != -255) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x649 = -1;
	static volatile int32_t x650 = -1;
	volatile int32_t x651 = INT32_MIN;
	int16_t x652 = -1;
	int32_t t145 = 8784;

    t145 = (((x649&x650)==x651)-x652);

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x653 = INT32_MAX;
	uint8_t x654 = 3U;
	uint8_t x656 = 2U;
	static volatile int32_t t146 = -688725;

    t146 = (((x653&x654)==x655)-x656);

    if (t146 != -2) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x663 = UINT8_MAX;
	int64_t x664 = -1LL;
	int64_t t147 = -9159496LL;

    t147 = (((x661&x662)==x663)-x664);

    if (t147 != 1LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x665 = 454324158LLU;
	int32_t x666 = 94642391;
	uint16_t x668 = 76U;
	int32_t t148 = 22854622;

    t148 = (((x665&x666)==x667)-x668);

    if (t148 != -76) { NG(); } else { ; }
	
}

void f149(void) {
    	static volatile int32_t x669 = INT32_MIN;
	static int16_t x670 = INT16_MAX;
	int32_t x671 = INT32_MIN;
	int64_t x672 = -1LL;
	static volatile int64_t t149 = 71755863469LL;

    t149 = (((x669&x670)==x671)-x672);

    if (t149 != 1LL) { NG(); } else { ; }
	
}

void f150(void) {
    	static int64_t x673 = 0LL;
	volatile int32_t x674 = -1;
	static uint8_t x675 = 19U;

    t150 = (((x673&x674)==x675)-x676);

    if (t150 != 0LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint16_t x678 = UINT16_MAX;
	static int32_t x679 = -1;
	static volatile int32_t x680 = INT32_MAX;
	volatile int32_t t151 = -1062;

    t151 = (((x677&x678)==x679)-x680);

    if (t151 != -2147483647) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x682 = 26979U;
	uint16_t x683 = 26U;
	static volatile int64_t t152 = -470790108LL;

    t152 = (((x681&x682)==x683)-x684);

    if (t152 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x689 = 0U;
	uint16_t x690 = 11204U;
	int8_t x691 = INT8_MIN;
	int32_t x692 = INT32_MAX;
	volatile int32_t t153 = -18;

    t153 = (((x689&x690)==x691)-x692);

    if (t153 != -2147483647) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x697 = -53531941;
	int16_t x698 = -1;
	static uint8_t x699 = UINT8_MAX;
	int32_t t154 = -1432387;

    t154 = (((x697&x698)==x699)-x700);

    if (t154 != -1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x701 = INT32_MAX;
	int32_t x703 = INT32_MAX;
	static volatile int8_t x704 = -46;
	static int32_t t155 = -486330;

    t155 = (((x701&x702)==x703)-x704);

    if (t155 != 46) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x705 = 38733314722LL;
	volatile uint8_t x706 = UINT8_MAX;
	int32_t x707 = INT32_MIN;
	int32_t t156 = 507;

    t156 = (((x705&x706)==x707)-x708);

    if (t156 != -2147483647) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x711 = INT8_MIN;
	uint64_t x712 = UINT64_MAX;
	volatile uint64_t t157 = 183256667021333LLU;

    t157 = (((x709&x710)==x711)-x712);

    if (t157 != 1LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int32_t x713 = INT32_MAX;
	uint32_t x714 = UINT32_MAX;
	volatile int32_t x715 = INT32_MIN;
	static int32_t t158 = 333989689;

    t158 = (((x713&x714)==x715)-x716);

    if (t158 != -46) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x717 = 11144442004LLU;
	int16_t x718 = -1;
	volatile int16_t x719 = INT16_MIN;
	int8_t x720 = INT8_MIN;
	static volatile int32_t t159 = 7;

    t159 = (((x717&x718)==x719)-x720);

    if (t159 != 128) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x723 = -1;
	static int8_t x724 = -1;
	int32_t t160 = -126;

    t160 = (((x721&x722)==x723)-x724);

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x725 = INT16_MAX;
	volatile uint16_t x726 = 410U;
	int32_t x727 = -227;
	volatile uint16_t x728 = 5U;
	int32_t t161 = -168;

    t161 = (((x725&x726)==x727)-x728);

    if (t161 != -5) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x729 = 194U;
	uint16_t x730 = UINT16_MAX;
	static volatile int32_t x731 = 1;
	int16_t x732 = -1;

    t162 = (((x729&x730)==x731)-x732);

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x733 = INT64_MAX;
	int16_t x734 = INT16_MIN;
	int8_t x735 = INT8_MIN;
	int64_t x736 = -1LL;

    t163 = (((x733&x734)==x735)-x736);

    if (t163 != 1LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x737 = -1;
	int64_t x739 = -7LL;
	static volatile int32_t t164 = 17;

    t164 = (((x737&x738)==x739)-x740);

    if (t164 != -7) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x741 = -1;
	int64_t x742 = INT64_MIN;
	volatile uint32_t t165 = 7379437U;

    t165 = (((x741&x742)==x743)-x744);

    if (t165 != 4294489451U) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x745 = INT16_MIN;
	volatile int32_t x746 = 26124765;
	uint16_t x747 = UINT16_MAX;
	static uint64_t x748 = 49703473532LLU;
	static uint64_t t166 = 1661099LLU;

    t166 = (((x745&x746)==x747)-x748);

    if (t166 != 18446744024006078084LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x749 = UINT64_MAX;
	uint32_t x750 = 39U;
	static int32_t x751 = 31;
	uint32_t x752 = UINT32_MAX;
	static volatile uint32_t t167 = 178893896U;

    t167 = (((x749&x750)==x751)-x752);

    if (t167 != 1U) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x753 = 6858161U;
	int8_t x754 = INT8_MIN;
	uint32_t x755 = 4961U;
	uint8_t x756 = 2U;
	int32_t t168 = -41454394;

    t168 = (((x753&x754)==x755)-x756);

    if (t168 != -2) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x757 = 1;
	uint32_t x758 = 1716598U;
	volatile int16_t x760 = INT16_MIN;
	volatile int32_t t169 = 13608863;

    t169 = (((x757&x758)==x759)-x760);

    if (t169 != 32768) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x761 = 8451U;
	int32_t x762 = -1;
	int64_t x763 = 29379817521LL;
	int32_t x764 = INT32_MAX;
	int32_t t170 = 193548739;

    t170 = (((x761&x762)==x763)-x764);

    if (t170 != -2147483647) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x765 = 50U;
	uint32_t x766 = 910168U;
	volatile int64_t x767 = INT64_MIN;
	uint64_t x768 = 1219LLU;
	uint64_t t171 = 510932LLU;

    t171 = (((x765&x766)==x767)-x768);

    if (t171 != 18446744073709550397LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	static int32_t x769 = -1;
	uint8_t x772 = 98U;
	int32_t t172 = 358883;

    t172 = (((x769&x770)==x771)-x772);

    if (t172 != -98) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x775 = INT8_MIN;
	int8_t x776 = INT8_MIN;
	int32_t t173 = -49;

    t173 = (((x773&x774)==x775)-x776);

    if (t173 != 128) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x780 = INT8_MIN;

    t174 = (((x777&x778)==x779)-x780);

    if (t174 != 128) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x781 = INT64_MIN;
	int32_t x782 = -245667;
	static uint8_t x783 = 78U;
	int32_t t175 = 212237;

    t175 = (((x781&x782)==x783)-x784);

    if (t175 != 32768) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x785 = 0U;
	uint8_t x786 = 6U;
	volatile uint8_t x788 = 33U;
	int32_t t176 = -1;

    t176 = (((x785&x786)==x787)-x788);

    if (t176 != -33) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x789 = 166298737308LL;
	int8_t x790 = INT8_MIN;
	int32_t t177 = -4636363;

    t177 = (((x789&x790)==x791)-x792);

    if (t177 != -255) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x795 = 8960U;
	int16_t x796 = -14;
	volatile int32_t t178 = -731367;

    t178 = (((x793&x794)==x795)-x796);

    if (t178 != 14) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x797 = 5;
	int8_t x798 = INT8_MAX;
	int16_t x799 = INT16_MAX;
	volatile int64_t x800 = 166211574849LL;
	volatile int64_t t179 = 143776899870LL;

    t179 = (((x797&x798)==x799)-x800);

    if (t179 != -166211574849LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x801 = INT64_MIN;
	volatile int64_t x803 = -89618367173LL;
	volatile int32_t t180 = 2009;

    t180 = (((x801&x802)==x803)-x804);

    if (t180 != -127) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x805 = INT16_MIN;
	volatile int32_t x806 = INT32_MIN;
	volatile int64_t x807 = INT64_MIN;
	uint8_t x808 = UINT8_MAX;
	volatile int32_t t181 = 0;

    t181 = (((x805&x806)==x807)-x808);

    if (t181 != -255) { NG(); } else { ; }
	
}

void f182(void) {
    	static int32_t x810 = INT32_MAX;
	volatile int32_t x811 = -7;
	static int8_t x812 = INT8_MIN;
	int32_t t182 = -65521;

    t182 = (((x809&x810)==x811)-x812);

    if (t182 != 128) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x813 = 24;
	static int16_t x815 = -6;
	int8_t x816 = -16;
	static volatile int32_t t183 = 0;

    t183 = (((x813&x814)==x815)-x816);

    if (t183 != 16) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x817 = 18478852686444LLU;
	uint8_t x818 = 3U;
	int64_t x819 = INT64_MIN;
	volatile int8_t x820 = INT8_MIN;
	int32_t t184 = -104469;

    t184 = (((x817&x818)==x819)-x820);

    if (t184 != 128) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x822 = INT16_MIN;
	static int32_t x823 = INT32_MIN;
	int16_t x824 = 0;
	volatile int32_t t185 = 0;

    t185 = (((x821&x822)==x823)-x824);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x825 = 1LLU;
	static int16_t x826 = INT16_MAX;
	int16_t x827 = 5;
	int16_t x828 = INT16_MIN;

    t186 = (((x825&x826)==x827)-x828);

    if (t186 != 32768) { NG(); } else { ; }
	
}

void f187(void) {
    	static int64_t x829 = -1LL;
	int8_t x830 = INT8_MIN;
	volatile int32_t t187 = -1556;

    t187 = (((x829&x830)==x831)-x832);

    if (t187 != 128) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x833 = -1;
	static uint64_t x834 = 1588651883012986LLU;
	int16_t x836 = -1;
	static int32_t t188 = -850;

    t188 = (((x833&x834)==x835)-x836);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x842 = INT8_MAX;
	uint64_t x843 = 15LLU;
	int16_t x844 = INT16_MIN;

    t189 = (((x841&x842)==x843)-x844);

    if (t189 != 32768) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x845 = 4083LLU;
	int32_t x847 = -1;
	uint64_t x848 = UINT64_MAX;

    t190 = (((x845&x846)==x847)-x848);

    if (t190 != 1LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x849 = INT8_MIN;
	volatile int64_t x851 = -1LL;
	uint8_t x852 = UINT8_MAX;
	int32_t t191 = 1;

    t191 = (((x849&x850)==x851)-x852);

    if (t191 != -255) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x853 = INT16_MAX;
	uint16_t x854 = UINT16_MAX;
	int16_t x855 = -1;
	uint64_t t192 = 371423130498918LLU;

    t192 = (((x853&x854)==x855)-x856);

    if (t192 != 1LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x857 = -86354LL;
	int64_t x858 = -1LL;
	int8_t x859 = INT8_MAX;
	static int64_t x860 = -1615166026437849LL;

    t193 = (((x857&x858)==x859)-x860);

    if (t193 != 1615166026437849LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x861 = INT16_MIN;
	int32_t x862 = -1;
	uint64_t t194 = 7LLU;

    t194 = (((x861&x862)==x863)-x864);

    if (t194 != 0LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static int8_t x865 = INT8_MAX;
	volatile int8_t x866 = 0;
	int64_t x867 = INT64_MIN;
	static uint8_t x868 = UINT8_MAX;

    t195 = (((x865&x866)==x867)-x868);

    if (t195 != -255) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x869 = 2214U;
	int64_t x871 = -1LL;
	int8_t x872 = -3;
	volatile int32_t t196 = -1;

    t196 = (((x869&x870)==x871)-x872);

    if (t196 != 3) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x873 = INT32_MIN;
	int8_t x874 = -12;
	uint16_t x875 = UINT16_MAX;
	int16_t x876 = INT16_MIN;
	volatile int32_t t197 = -1;

    t197 = (((x873&x874)==x875)-x876);

    if (t197 != 32768) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x877 = INT8_MIN;
	uint8_t x878 = 3U;
	int32_t x879 = -639;
	int32_t x880 = INT32_MAX;
	volatile int32_t t198 = -81;

    t198 = (((x877&x878)==x879)-x880);

    if (t198 != -2147483647) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x885 = INT8_MIN;
	static int32_t x886 = 1892302;
	int16_t x888 = INT16_MAX;
	int32_t t199 = -7344772;

    t199 = (((x885&x886)==x887)-x888);

    if (t199 != -32767) { NG(); } else { ; }
	
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

