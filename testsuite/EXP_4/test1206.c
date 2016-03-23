
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

int64_t x5 = INT64_MIN;
int8_t x6 = INT8_MIN;
int16_t x10 = INT16_MIN;
int8_t x27 = -1;
volatile int64_t t6 = 26878020541831922LL;
static int64_t t7 = -492377357LL;
int64_t x33 = 74873514LL;
int8_t x36 = -1;
int64_t t8 = 104849676764LL;
uint8_t x37 = UINT8_MAX;
static volatile int16_t x38 = INT16_MIN;
uint8_t x41 = UINT8_MAX;
int32_t x42 = -4281611;
volatile int16_t x43 = INT16_MIN;
static volatile int32_t x46 = 184337;
volatile int32_t t11 = 2;
volatile int64_t x52 = -8315808LL;
volatile int32_t x53 = INT32_MAX;
static uint64_t x55 = 290794895787791LLU;
static int8_t x77 = INT8_MIN;
volatile int32_t t20 = -177765;
int32_t t23 = 27;
uint16_t x108 = 10U;
int32_t x115 = -1;
int8_t x116 = -1;
uint8_t x120 = UINT8_MAX;
uint8_t x128 = 59U;
int8_t x130 = 17;
uint16_t x151 = 755U;
int8_t x154 = 1;
int32_t x164 = -17220003;
int32_t x177 = -8776;
int64_t x180 = -1LL;
int32_t x188 = INT32_MIN;
volatile int8_t x189 = INT8_MIN;
static uint64_t x192 = UINT64_MAX;
int8_t x194 = INT8_MIN;
uint64_t x203 = 125520518LLU;
static int32_t t46 = -4082316;
int8_t x214 = INT8_MIN;
int64_t x216 = -7665LL;
int8_t x222 = INT8_MIN;
volatile uint64_t t52 = 121199869LLU;
volatile int64_t x238 = 20253857885684LL;
static int16_t x243 = INT16_MIN;
uint64_t x244 = 692491LLU;
int32_t t54 = -210852369;
uint32_t x251 = 1951930076U;
static int64_t x253 = INT64_MIN;
volatile uint64_t x256 = UINT64_MAX;
uint64_t x263 = 126LLU;
static volatile uint64_t x264 = 10605486LLU;
volatile int64_t x280 = -44LL;
volatile uint32_t x289 = 278447U;
static int32_t x291 = INT32_MIN;
uint8_t x292 = 36U;
int8_t x293 = INT8_MIN;
int32_t x294 = -1;
volatile uint16_t x295 = UINT16_MAX;
int32_t t66 = -10208;
int32_t x297 = -153238676;
volatile uint64_t x299 = 0LLU;
volatile uint16_t x306 = UINT16_MAX;
static volatile uint16_t x308 = UINT16_MAX;
volatile int32_t x312 = INT32_MAX;
int64_t t71 = -88914442847408LL;
int32_t t73 = 1;
uint64_t x328 = UINT64_MAX;
static int8_t x331 = 0;
volatile int32_t t75 = 1255;
uint64_t x341 = UINT64_MAX;
static uint8_t x345 = 34U;
int8_t x352 = -1;
uint32_t x363 = 1U;
static int32_t t81 = 35619280;
int16_t x378 = INT16_MIN;
static uint32_t t84 = 11523U;
uint8_t x394 = 41U;
static int16_t x404 = 4;
volatile uint64_t t89 = 7153196186479715770LLU;
volatile int16_t x405 = 549;
uint8_t x406 = 7U;
int16_t x410 = INT16_MAX;
volatile uint8_t x418 = 39U;
int32_t t92 = 215305;
volatile int16_t x438 = INT16_MIN;
volatile int32_t t94 = 538891;
uint8_t x441 = 1U;
volatile int64_t t98 = -834829453555274LL;
volatile uint32_t x458 = UINT32_MAX;
uint8_t x462 = 64U;
volatile int32_t t102 = 9;
volatile uint32_t x478 = 391U;
int32_t x479 = INT32_MIN;
volatile uint64_t t103 = 35650462623698732LLU;
int16_t x481 = 0;
uint16_t x489 = 5U;
volatile int64_t x495 = INT64_MIN;
uint16_t x498 = 20U;
int32_t x499 = INT32_MIN;
uint32_t x513 = UINT32_MAX;
volatile uint32_t t111 = 879534U;
static int32_t x519 = INT32_MAX;
volatile int32_t t112 = 164349803;
volatile uint32_t x526 = UINT32_MAX;
uint8_t x530 = 1U;
int32_t x538 = -1;
int8_t x540 = -1;
int64_t x554 = INT64_MIN;
int32_t x557 = INT32_MIN;
int64_t x563 = INT64_MAX;
volatile uint32_t t120 = 431589U;
uint16_t x568 = UINT16_MAX;
int32_t t122 = 1544;
static int8_t x575 = 17;
int16_t x587 = -1;
volatile int32_t t126 = 371;
static volatile uint64_t t127 = 1856968LLU;
volatile int32_t x598 = -587;
volatile uint64_t t130 = 993061LLU;
volatile int64_t x609 = INT64_MIN;
int8_t x611 = -53;
int8_t x616 = INT8_MAX;
uint64_t x620 = UINT64_MAX;
uint32_t t133 = 3905892U;
int16_t x622 = 2;
static volatile uint64_t t135 = 8931392794315408973LLU;
int8_t x644 = 50;
volatile int32_t t136 = -352198;
int32_t x649 = INT32_MIN;
uint32_t x651 = 2036566099U;
int32_t x653 = INT32_MIN;
int8_t x661 = 1;
int16_t x662 = -1;
int32_t t141 = 0;
int16_t x666 = 14764;
volatile int64_t t144 = 57272768453LL;
static int8_t x689 = 51;
uint32_t x691 = UINT32_MAX;
volatile int64_t t148 = 497678504848LL;
int8_t x705 = INT8_MIN;
static int16_t x709 = 12;
int32_t t152 = 16118248;
int16_t x717 = -1;
int32_t t153 = 0;
volatile uint64_t t154 = 13331746432792LLU;
int8_t x725 = -1;
int32_t x727 = -647876;
int8_t x737 = -3;
static uint32_t x740 = 544U;
int64_t t157 = -2846604301575LL;
uint8_t x760 = 0U;
static int64_t x763 = INT64_MAX;
uint64_t x764 = 24LLU;
int32_t t162 = -33508228;
int8_t x770 = 1;
int8_t x771 = -1;
uint8_t x779 = UINT8_MAX;
int8_t x784 = INT8_MIN;
volatile int32_t x789 = -1;
static int32_t t168 = -3428763;
volatile uint8_t x795 = UINT8_MAX;
volatile int64_t t169 = 125719116LL;
int64_t t171 = 837065966636083LL;
uint64_t x807 = 1940753LLU;
uint16_t x820 = 0U;
uint8_t x832 = UINT8_MAX;
static int64_t x835 = -1LL;
int32_t x838 = 230304;
static volatile int8_t x840 = 8;
volatile int32_t t179 = -39;
int64_t t181 = 25LL;
uint16_t x851 = 317U;
static int16_t x852 = -1;
int32_t t182 = 431915821;
int8_t x879 = INT8_MIN;
static volatile uint64_t t189 = 8LLU;
uint32_t x895 = UINT32_MAX;
int32_t x900 = -1;
uint8_t x908 = UINT8_MAX;
int64_t t194 = INT64_MIN;
uint8_t x927 = UINT8_MAX;


void f0(void) {
    	uint32_t x1 = 2841U;
	int32_t x2 = 54;
	int64_t x3 = 39418254LL;
	volatile int8_t x4 = INT8_MAX;
	static volatile uint32_t t0 = 375485U;

    t0 = (x1-(x2*(x3!=x4)));

    if (t0 != 2787U) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x7 = INT64_MIN;
	volatile uint32_t x8 = UINT32_MAX;
	volatile int64_t t1 = 8388330LL;

    t1 = (x5-(x6*(x7!=x8)));

    if (t1 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint8_t x9 = UINT8_MAX;
	static uint16_t x11 = 298U;
	static uint8_t x12 = 15U;
	volatile int32_t t2 = 22;

    t2 = (x9-(x10*(x11!=x12)));

    if (t2 != 33023) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	static int64_t x14 = -1LL;
	static volatile int64_t x15 = INT64_MAX;
	static uint8_t x16 = 27U;
	volatile int64_t t3 = -1137371798872729653LL;

    t3 = (x13-(x14*(x15!=x16)));

    if (t3 != -32767LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = 0;
	uint16_t x18 = 38U;
	uint64_t x19 = 56963761561953493LLU;
	int32_t x20 = INT32_MIN;
	static volatile int32_t t4 = 0;

    t4 = (x17-(x18*(x19!=x20)));

    if (t4 != -38) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -1;
	int16_t x22 = -2551;
	int8_t x23 = INT8_MIN;
	int16_t x24 = -4066;
	int32_t t5 = 5;

    t5 = (x21-(x22*(x23!=x24)));

    if (t5 != 2550) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MAX;
	int64_t x26 = -40573756LL;
	volatile int16_t x28 = INT16_MIN;

    t6 = (x25-(x26*(x27!=x28)));

    if (t6 != 40606523LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x29 = INT64_MAX;
	volatile uint8_t x30 = UINT8_MAX;
	int64_t x31 = INT64_MAX;
	static int64_t x32 = INT64_MIN;

    t7 = (x29-(x30*(x31!=x32)));

    if (t7 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x34 = 61U;
	int8_t x35 = INT8_MIN;

    t8 = (x33-(x34*(x35!=x36)));

    if (t8 != 74873453LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x39 = INT64_MIN;
	int8_t x40 = -1;
	int32_t t9 = -5;

    t9 = (x37-(x38*(x39!=x40)));

    if (t9 != 33023) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int16_t x44 = INT16_MIN;
	int32_t t10 = 15197;

    t10 = (x41-(x42*(x43!=x44)));

    if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x45 = 11U;
	uint32_t x47 = 199221U;
	uint32_t x48 = UINT32_MAX;

    t11 = (x45-(x46*(x47!=x48)));

    if (t11 != -184326) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MAX;
	int64_t x50 = 3028824196LL;
	volatile int64_t x51 = INT64_MAX;
	volatile int64_t t12 = 439191455995LL;

    t12 = (x49-(x50*(x51!=x52)));

    if (t12 != -3028824069LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x54 = -1LL;
	uint8_t x56 = 5U;
	int64_t t13 = -1LL;

    t13 = (x53-(x54*(x55!=x56)));

    if (t13 != 2147483648LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x57 = INT32_MIN;
	volatile int16_t x58 = INT16_MIN;
	volatile int16_t x59 = INT16_MAX;
	static int8_t x60 = 0;
	volatile int32_t t14 = -563344;

    t14 = (x57-(x58*(x59!=x60)));

    if (t14 != -2147450880) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x61 = -1;
	int8_t x62 = INT8_MIN;
	volatile int64_t x63 = -1LL;
	static int8_t x64 = INT8_MIN;
	volatile int32_t t15 = -664237;

    t15 = (x61-(x62*(x63!=x64)));

    if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int32_t x69 = -1;
	static int8_t x70 = INT8_MIN;
	uint32_t x71 = 13174U;
	uint64_t x72 = UINT64_MAX;
	volatile int32_t t16 = -339496;

    t16 = (x69-(x70*(x71!=x72)));

    if (t16 != 127) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x78 = -5;
	uint16_t x79 = UINT16_MAX;
	int16_t x80 = -1;
	static volatile int32_t t17 = 743369;

    t17 = (x77-(x78*(x79!=x80)));

    if (t17 != -123) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x81 = INT16_MIN;
	int16_t x82 = INT16_MAX;
	int64_t x83 = 27929238845365314LL;
	int64_t x84 = INT64_MIN;
	int32_t t18 = 78928329;

    t18 = (x81-(x82*(x83!=x84)));

    if (t18 != -65535) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x85 = -217;
	int64_t x86 = -16590849LL;
	int64_t x87 = -5680891799LL;
	int8_t x88 = 4;
	volatile int64_t t19 = -367981516LL;

    t19 = (x85-(x86*(x87!=x88)));

    if (t19 != 16590632LL) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x89 = INT8_MIN;
	int16_t x90 = INT16_MIN;
	volatile int32_t x91 = -1;
	volatile int32_t x92 = -54;

    t20 = (x89-(x90*(x91!=x92)));

    if (t20 != 32640) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x93 = INT64_MAX;
	int32_t x94 = -24151;
	volatile int8_t x95 = INT8_MIN;
	int8_t x96 = INT8_MIN;
	volatile int64_t t21 = INT64_MAX;

    t21 = (x93-(x94*(x95!=x96)));

    if (t21 != INT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x97 = 33909938857502034LL;
	static int32_t x98 = INT32_MIN;
	int32_t x99 = 934087722;
	uint8_t x100 = 0U;
	int64_t t22 = 4338606890257LL;

    t22 = (x97-(x98*(x99!=x100)));

    if (t22 != 33909941004985682LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x101 = UINT8_MAX;
	int16_t x102 = 11129;
	static int8_t x103 = -1;
	static int8_t x104 = INT8_MAX;

    t23 = (x101-(x102*(x103!=x104)));

    if (t23 != -10874) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x105 = INT16_MIN;
	int8_t x106 = INT8_MIN;
	int8_t x107 = INT8_MIN;
	volatile int32_t t24 = -5926;

    t24 = (x105-(x106*(x107!=x108)));

    if (t24 != -32640) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x109 = 1U;
	static int8_t x110 = INT8_MIN;
	volatile int64_t x111 = INT64_MIN;
	volatile int32_t x112 = 275552;
	volatile int32_t t25 = -1;

    t25 = (x109-(x110*(x111!=x112)));

    if (t25 != 129) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int64_t x113 = -1LL;
	static uint32_t x114 = 197172U;
	volatile int64_t t26 = 153LL;

    t26 = (x113-(x114*(x115!=x116)));

    if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x117 = 21;
	int64_t x118 = 61LL;
	uint8_t x119 = UINT8_MAX;
	volatile int64_t t27 = 8382LL;

    t27 = (x117-(x118*(x119!=x120)));

    if (t27 != 21LL) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint16_t x121 = 3894U;
	uint8_t x122 = 58U;
	int32_t x123 = -80;
	int8_t x124 = INT8_MIN;
	int32_t t28 = -2;

    t28 = (x121-(x122*(x123!=x124)));

    if (t28 != 3836) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x125 = 0LL;
	static int8_t x126 = INT8_MIN;
	volatile int32_t x127 = -210429;
	static int64_t t29 = -58454649567LL;

    t29 = (x125-(x126*(x127!=x128)));

    if (t29 != 128LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x129 = 1;
	int8_t x131 = -1;
	uint16_t x132 = 480U;
	volatile int32_t t30 = 1635030;

    t30 = (x129-(x130*(x131!=x132)));

    if (t30 != -16) { NG(); } else { ; }
	
}

void f31(void) {
    	static int32_t x133 = 5899;
	static uint32_t x134 = 286234503U;
	int16_t x135 = -173;
	volatile int64_t x136 = INT64_MAX;
	volatile uint32_t t31 = 2802320U;

    t31 = (x133-(x134*(x135!=x136)));

    if (t31 != 4008738692U) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x141 = -26;
	int32_t x142 = -1;
	volatile int8_t x143 = INT8_MIN;
	int16_t x144 = -1;
	int32_t t32 = 0;

    t32 = (x141-(x142*(x143!=x144)));

    if (t32 != -25) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x145 = UINT64_MAX;
	volatile int16_t x146 = INT16_MIN;
	static int32_t x147 = INT32_MIN;
	static uint64_t x148 = 1LLU;
	volatile uint64_t t33 = 10739321054LLU;

    t33 = (x145-(x146*(x147!=x148)));

    if (t33 != 32767LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x149 = -1;
	volatile int32_t x150 = 353;
	int16_t x152 = INT16_MIN;
	volatile int32_t t34 = -2019;

    t34 = (x149-(x150*(x151!=x152)));

    if (t34 != -354) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x153 = 2U;
	static int8_t x155 = 15;
	int32_t x156 = -3;
	int32_t t35 = -2869;

    t35 = (x153-(x154*(x155!=x156)));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x157 = -50280920133668406LL;
	int16_t x158 = 37;
	static int16_t x159 = -1177;
	uint16_t x160 = UINT16_MAX;
	int64_t t36 = 3030192LL;

    t36 = (x157-(x158*(x159!=x160)));

    if (t36 != -50280920133668443LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x161 = INT64_MIN;
	int8_t x162 = -25;
	volatile int8_t x163 = INT8_MIN;
	volatile int64_t t37 = 478119496060234910LL;

    t37 = (x161-(x162*(x163!=x164)));

    if (t37 != -9223372036854775783LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int16_t x169 = -1;
	volatile int16_t x170 = -127;
	uint64_t x171 = 3LLU;
	volatile uint32_t x172 = UINT32_MAX;
	volatile int32_t t38 = 38731;

    t38 = (x169-(x170*(x171!=x172)));

    if (t38 != 126) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x178 = UINT8_MAX;
	int8_t x179 = 44;
	int32_t t39 = 857;

    t39 = (x177-(x178*(x179!=x180)));

    if (t39 != -9031) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x181 = 11765U;
	int32_t x182 = INT32_MAX;
	static int8_t x183 = INT8_MIN;
	static volatile uint16_t x184 = 2353U;
	int32_t t40 = 13141844;

    t40 = (x181-(x182*(x183!=x184)));

    if (t40 != -2147471882) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x185 = INT32_MAX;
	uint64_t x186 = 317541275862426814LLU;
	int64_t x187 = INT64_MIN;
	uint64_t t41 = 51610193LLU;

    t41 = (x185-(x186*(x187!=x188)));

    if (t41 != 18129202799994608449LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x190 = INT64_MIN;
	int8_t x191 = INT8_MIN;
	int64_t t42 = -48119985LL;

    t42 = (x189-(x190*(x191!=x192)));

    if (t42 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x193 = 0U;
	int8_t x195 = -1;
	int8_t x196 = INT8_MIN;
	static volatile uint32_t t43 = 1U;

    t43 = (x193-(x194*(x195!=x196)));

    if (t43 != 128U) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x201 = INT16_MIN;
	int8_t x202 = -1;
	uint16_t x204 = 13726U;
	static volatile int32_t t44 = 45;

    t44 = (x201-(x202*(x203!=x204)));

    if (t44 != -32767) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x205 = INT8_MIN;
	volatile uint64_t x206 = 48436LLU;
	int16_t x207 = -905;
	int64_t x208 = INT64_MIN;
	volatile uint64_t t45 = 66845893532204LLU;

    t45 = (x205-(x206*(x207!=x208)));

    if (t45 != 18446744073709503052LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x209 = UINT8_MAX;
	volatile int16_t x210 = -1;
	static int8_t x211 = INT8_MIN;
	uint32_t x212 = UINT32_MAX;

    t46 = (x209-(x210*(x211!=x212)));

    if (t46 != 256) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x213 = 541;
	uint32_t x215 = 54186186U;
	static int32_t t47 = -2864653;

    t47 = (x213-(x214*(x215!=x216)));

    if (t47 != 669) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x217 = UINT32_MAX;
	static uint64_t x218 = UINT64_MAX;
	volatile int16_t x219 = INT16_MIN;
	int16_t x220 = INT16_MAX;
	static uint64_t t48 = 135074LLU;

    t48 = (x217-(x218*(x219!=x220)));

    if (t48 != 4294967296LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x221 = INT16_MAX;
	volatile int32_t x223 = -1768;
	int32_t x224 = -244;
	int32_t t49 = -2;

    t49 = (x221-(x222*(x223!=x224)));

    if (t49 != 32895) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int16_t x225 = INT16_MIN;
	int16_t x226 = 20;
	uint8_t x227 = UINT8_MAX;
	int8_t x228 = INT8_MAX;
	volatile int32_t t50 = 106337;

    t50 = (x225-(x226*(x227!=x228)));

    if (t50 != -32788) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint8_t x229 = 25U;
	static volatile int64_t x230 = INT64_MAX;
	int16_t x231 = INT16_MIN;
	uint8_t x232 = UINT8_MAX;
	volatile int64_t t51 = -194663969427545640LL;

    t51 = (x229-(x230*(x231!=x232)));

    if (t51 != -9223372036854775782LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile uint64_t x233 = 83707LLU;
	int64_t x234 = INT64_MIN;
	uint8_t x235 = 16U;
	int32_t x236 = -2;

    t52 = (x233-(x234*(x235!=x236)));

    if (t52 != 9223372036854859515LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x237 = INT32_MIN;
	volatile int16_t x239 = 693;
	uint64_t x240 = 1LLU;
	volatile int64_t t53 = 1891791327594136LL;

    t53 = (x237-(x238*(x239!=x240)));

    if (t53 != -20256005369332LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x241 = 252;
	int16_t x242 = -1;

    t54 = (x241-(x242*(x243!=x244)));

    if (t54 != 253) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int64_t x249 = INT64_MAX;
	uint64_t x250 = 13907LLU;
	uint64_t x252 = UINT64_MAX;
	static volatile uint64_t t55 = 11073394795LLU;

    t55 = (x249-(x250*(x251!=x252)));

    if (t55 != 9223372036854761900LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x254 = INT32_MIN;
	uint64_t x255 = 32362743LLU;
	volatile int64_t t56 = 2572LL;

    t56 = (x253-(x254*(x255!=x256)));

    if (t56 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int8_t x257 = INT8_MIN;
	static int16_t x258 = INT16_MIN;
	uint8_t x259 = 11U;
	int32_t x260 = -1;
	int32_t t57 = 0;

    t57 = (x257-(x258*(x259!=x260)));

    if (t57 != 32640) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int32_t x261 = INT32_MIN;
	int64_t x262 = -1LL;
	int64_t t58 = 3337073LL;

    t58 = (x261-(x262*(x263!=x264)));

    if (t58 != -2147483647LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x265 = 1;
	int32_t x266 = INT32_MAX;
	static int8_t x267 = INT8_MAX;
	static int64_t x268 = INT64_MAX;
	volatile int32_t t59 = -698300;

    t59 = (x265-(x266*(x267!=x268)));

    if (t59 != -2147483646) { NG(); } else { ; }
	
}

void f60(void) {
    	static int32_t x269 = INT32_MIN;
	volatile uint64_t x270 = 88685434208LLU;
	uint16_t x271 = 475U;
	uint32_t x272 = 76927U;
	uint64_t t60 = 862769697486519LLU;

    t60 = (x269-(x270*(x271!=x272)));

    if (t60 != 18446743982876633760LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x273 = UINT64_MAX;
	uint32_t x274 = 36U;
	uint32_t x275 = 89745841U;
	int8_t x276 = INT8_MIN;
	uint64_t t61 = 7919LLU;

    t61 = (x273-(x274*(x275!=x276)));

    if (t61 != 18446744073709551579LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x277 = INT8_MAX;
	uint64_t x278 = UINT64_MAX;
	int64_t x279 = INT64_MIN;
	uint64_t t62 = 794177221963592718LLU;

    t62 = (x277-(x278*(x279!=x280)));

    if (t62 != 128LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x281 = -43;
	static volatile int16_t x282 = INT16_MAX;
	int64_t x283 = 196398397808LL;
	static uint16_t x284 = 3403U;
	volatile int32_t t63 = -4513;

    t63 = (x281-(x282*(x283!=x284)));

    if (t63 != -32810) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x285 = UINT64_MAX;
	int8_t x286 = INT8_MIN;
	uint8_t x287 = UINT8_MAX;
	volatile uint16_t x288 = UINT16_MAX;
	static uint64_t t64 = 255181681520LLU;

    t64 = (x285-(x286*(x287!=x288)));

    if (t64 != 127LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x290 = -3553;
	static uint32_t t65 = 8297410U;

    t65 = (x289-(x290*(x291!=x292)));

    if (t65 != 282000U) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x296 = 82LLU;

    t66 = (x293-(x294*(x295!=x296)));

    if (t66 != -127) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x298 = 3U;
	volatile int8_t x300 = INT8_MAX;
	int32_t t67 = -27971929;

    t67 = (x297-(x298*(x299!=x300)));

    if (t67 != -153238679) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint16_t x301 = 10U;
	volatile int8_t x302 = 37;
	int64_t x303 = 541415292900073LL;
	static int64_t x304 = -10948338LL;
	int32_t t68 = -8171137;

    t68 = (x301-(x302*(x303!=x304)));

    if (t68 != -27) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x305 = 5U;
	int16_t x307 = INT16_MIN;
	int32_t t69 = 432727660;

    t69 = (x305-(x306*(x307!=x308)));

    if (t69 != -65530) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x309 = 1;
	uint8_t x310 = 12U;
	int16_t x311 = -1;
	volatile int32_t t70 = 86;

    t70 = (x309-(x310*(x311!=x312)));

    if (t70 != -11) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x313 = -68319898709284LL;
	int32_t x314 = INT32_MIN;
	static uint64_t x315 = UINT64_MAX;
	int64_t x316 = INT64_MIN;

    t71 = (x313-(x314*(x315!=x316)));

    if (t71 != -68317751225636LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static int64_t x317 = -18751370580LL;
	int32_t x318 = INT32_MAX;
	int16_t x319 = INT16_MIN;
	volatile uint16_t x320 = 0U;
	int64_t t72 = 15660083222673LL;

    t72 = (x317-(x318*(x319!=x320)));

    if (t72 != -20898854227LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x321 = INT16_MAX;
	static volatile uint8_t x322 = 7U;
	uint16_t x323 = 15246U;
	int16_t x324 = INT16_MIN;

    t73 = (x321-(x322*(x323!=x324)));

    if (t73 != 32760) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x325 = UINT8_MAX;
	int64_t x326 = -2148077688840551160LL;
	int8_t x327 = INT8_MAX;
	int64_t t74 = -7576435359LL;

    t74 = (x325-(x326*(x327!=x328)));

    if (t74 != 2148077688840551415LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int16_t x329 = INT16_MIN;
	static uint8_t x330 = 88U;
	uint32_t x332 = UINT32_MAX;

    t75 = (x329-(x330*(x331!=x332)));

    if (t75 != -32856) { NG(); } else { ; }
	
}

void f76(void) {
    	int64_t x342 = -110533017094812862LL;
	int8_t x343 = INT8_MIN;
	static uint8_t x344 = 2U;
	static uint64_t t76 = 81LLU;

    t76 = (x341-(x342*(x343!=x344)));

    if (t76 != 110533017094812861LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	uint32_t x346 = 40465536U;
	int32_t x347 = -3;
	int16_t x348 = 19;
	volatile uint32_t t77 = 1395U;

    t77 = (x345-(x346*(x347!=x348)));

    if (t77 != 4254501794U) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x349 = INT8_MAX;
	int8_t x350 = INT8_MIN;
	int32_t x351 = -33254249;
	static volatile int32_t t78 = 8;

    t78 = (x349-(x350*(x351!=x352)));

    if (t78 != 255) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x353 = INT8_MIN;
	static int32_t x354 = -1;
	volatile int16_t x355 = INT16_MAX;
	static volatile int32_t x356 = INT32_MAX;
	volatile int32_t t79 = 6853978;

    t79 = (x353-(x354*(x355!=x356)));

    if (t79 != -127) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x357 = 74;
	static int64_t x358 = -1LL;
	uint64_t x359 = 5340001382694437LLU;
	uint32_t x360 = 4243U;
	int64_t t80 = 332053603798439459LL;

    t80 = (x357-(x358*(x359!=x360)));

    if (t80 != 75LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x361 = -1;
	int8_t x362 = INT8_MIN;
	int64_t x364 = INT64_MAX;

    t81 = (x361-(x362*(x363!=x364)));

    if (t81 != 127) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x365 = 334143904556LL;
	uint16_t x366 = UINT16_MAX;
	static volatile uint32_t x367 = 3690141U;
	static uint64_t x368 = UINT64_MAX;
	volatile int64_t t82 = -8341666LL;

    t82 = (x365-(x366*(x367!=x368)));

    if (t82 != 334143839021LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x369 = 524738339151396LL;
	int16_t x370 = -5938;
	static uint32_t x371 = 0U;
	uint8_t x372 = UINT8_MAX;
	int64_t t83 = -13412912261LL;

    t83 = (x369-(x370*(x371!=x372)));

    if (t83 != 524738339157334LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x377 = UINT32_MAX;
	int8_t x379 = INT8_MIN;
	int32_t x380 = 3740;

    t84 = (x377-(x378*(x379!=x380)));

    if (t84 != 32767U) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x381 = UINT64_MAX;
	static int8_t x382 = -51;
	uint16_t x383 = UINT16_MAX;
	volatile int64_t x384 = 1062717432525436826LL;
	uint64_t t85 = 79945355526660976LLU;

    t85 = (x381-(x382*(x383!=x384)));

    if (t85 != 50LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int32_t x389 = -1;
	int8_t x390 = INT8_MIN;
	volatile uint64_t x391 = UINT64_MAX;
	int16_t x392 = -10167;
	volatile int32_t t86 = -14;

    t86 = (x389-(x390*(x391!=x392)));

    if (t86 != 127) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x393 = INT8_MIN;
	uint64_t x395 = UINT64_MAX;
	int8_t x396 = -1;
	static volatile int32_t t87 = 144583;

    t87 = (x393-(x394*(x395!=x396)));

    if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int64_t x397 = INT64_MIN;
	int64_t x398 = -1376914405721588LL;
	volatile int64_t x399 = -3609075873470416702LL;
	static int64_t x400 = -19232846202LL;
	volatile int64_t t88 = 24864265LL;

    t88 = (x397-(x398*(x399!=x400)));

    if (t88 != -9221995122449054220LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x401 = UINT64_MAX;
	static int32_t x402 = -1;
	static int32_t x403 = INT32_MIN;

    t89 = (x401-(x402*(x403!=x404)));

    if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x407 = INT16_MIN;
	int16_t x408 = -3908;
	int32_t t90 = -13970925;

    t90 = (x405-(x406*(x407!=x408)));

    if (t90 != 542) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x409 = UINT8_MAX;
	uint8_t x411 = 29U;
	uint64_t x412 = 1329861614204829194LLU;
	static int32_t t91 = 0;

    t91 = (x409-(x410*(x411!=x412)));

    if (t91 != -32512) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x417 = INT16_MIN;
	static uint32_t x419 = UINT32_MAX;
	uint16_t x420 = 101U;

    t92 = (x417-(x418*(x419!=x420)));

    if (t92 != -32807) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x425 = INT8_MAX;
	int32_t x426 = -1;
	int64_t x427 = INT64_MIN;
	static int64_t x428 = 323344258LL;
	volatile int32_t t93 = -7525630;

    t93 = (x425-(x426*(x427!=x428)));

    if (t93 != 128) { NG(); } else { ; }
	
}

void f94(void) {
    	static volatile int16_t x437 = -116;
	int64_t x439 = INT64_MIN;
	volatile uint8_t x440 = UINT8_MAX;

    t94 = (x437-(x438*(x439!=x440)));

    if (t94 != 32652) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x442 = INT64_MAX;
	static uint32_t x443 = 20939U;
	volatile int32_t x444 = -1;
	volatile int64_t t95 = 446834457LL;

    t95 = (x441-(x442*(x443!=x444)));

    if (t95 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x445 = UINT16_MAX;
	volatile uint32_t x446 = 235903031U;
	uint8_t x447 = 23U;
	int64_t x448 = -282807542793LL;
	uint32_t t96 = 703U;

    t96 = (x445-(x446*(x447!=x448)));

    if (t96 != 4059129800U) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint16_t x449 = 4U;
	static volatile int16_t x450 = 323;
	static volatile uint8_t x451 = 2U;
	volatile int8_t x452 = INT8_MIN;
	static int32_t t97 = 1167734;

    t97 = (x449-(x450*(x451!=x452)));

    if (t97 != -319) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x453 = -1LL;
	volatile uint8_t x454 = UINT8_MAX;
	int8_t x455 = 7;
	int16_t x456 = -5;

    t98 = (x453-(x454*(x455!=x456)));

    if (t98 != -256LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint8_t x457 = 74U;
	static int32_t x459 = 693875;
	volatile int8_t x460 = -63;
	volatile uint32_t t99 = 3414013U;

    t99 = (x457-(x458*(x459!=x460)));

    if (t99 != 75U) { NG(); } else { ; }
	
}

void f100(void) {
    	static volatile uint16_t x461 = 353U;
	volatile int32_t x463 = 704;
	int32_t x464 = INT32_MIN;
	static int32_t t100 = -23835282;

    t100 = (x461-(x462*(x463!=x464)));

    if (t100 != 289) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x469 = -1;
	int16_t x470 = 1012;
	int8_t x471 = INT8_MIN;
	volatile int16_t x472 = INT16_MAX;
	int32_t t101 = 335799421;

    t101 = (x469-(x470*(x471!=x472)));

    if (t101 != -1013) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x473 = INT16_MIN;
	int32_t x474 = INT32_MIN;
	uint16_t x475 = 247U;
	static int32_t x476 = INT32_MIN;

    t102 = (x473-(x474*(x475!=x476)));

    if (t102 != 2147450880) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint64_t x477 = 80121LLU;
	int64_t x480 = 26926383664995LL;

    t103 = (x477-(x478*(x479!=x480)));

    if (t103 != 79730LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x482 = INT8_MIN;
	static int64_t x483 = INT64_MAX;
	int64_t x484 = -3884LL;
	int32_t t104 = -1;

    t104 = (x481-(x482*(x483!=x484)));

    if (t104 != 128) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x485 = -1;
	volatile uint32_t x486 = 111874U;
	int8_t x487 = INT8_MAX;
	int32_t x488 = -1;
	static volatile uint32_t t105 = 5314U;

    t105 = (x485-(x486*(x487!=x488)));

    if (t105 != 4294855421U) { NG(); } else { ; }
	
}

void f106(void) {
    	static int64_t x490 = 60243720299944433LL;
	volatile int8_t x491 = INT8_MIN;
	int16_t x492 = INT16_MIN;
	volatile int64_t t106 = -14069LL;

    t106 = (x489-(x490*(x491!=x492)));

    if (t106 != -60243720299944428LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x493 = 20;
	uint8_t x494 = UINT8_MAX;
	int32_t x496 = -834086452;
	int32_t t107 = -41783641;

    t107 = (x493-(x494*(x495!=x496)));

    if (t107 != -235) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint16_t x497 = 214U;
	int8_t x500 = -8;
	static volatile int32_t t108 = -146;

    t108 = (x497-(x498*(x499!=x500)));

    if (t108 != 194) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x501 = 0;
	volatile uint8_t x502 = UINT8_MAX;
	static int16_t x503 = INT16_MAX;
	uint16_t x504 = UINT16_MAX;
	volatile int32_t t109 = -173929;

    t109 = (x501-(x502*(x503!=x504)));

    if (t109 != -255) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x505 = 20366U;
	uint64_t x506 = 2799156529386006LLU;
	int16_t x507 = INT16_MIN;
	int16_t x508 = 16180;
	uint64_t t110 = 1041715637675634509LLU;

    t110 = (x505-(x506*(x507!=x508)));

    if (t110 != 18443944917180185976LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x514 = INT32_MIN;
	volatile int64_t x515 = -66423693LL;
	uint8_t x516 = 0U;

    t111 = (x513-(x514*(x515!=x516)));

    if (t111 != 2147483647U) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x517 = -1;
	static int32_t x518 = -1;
	volatile int64_t x520 = -1LL;

    t112 = (x517-(x518*(x519!=x520)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	static int16_t x521 = -1;
	int64_t x522 = -1LL;
	volatile int32_t x523 = -1;
	static uint32_t x524 = UINT32_MAX;
	static int64_t t113 = 1121254451721459267LL;

    t113 = (x521-(x522*(x523!=x524)));

    if (t113 != -1LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int32_t x525 = 1121;
	uint64_t x527 = 17383134577146LLU;
	int16_t x528 = INT16_MIN;
	volatile uint32_t t114 = 432481U;

    t114 = (x525-(x526*(x527!=x528)));

    if (t114 != 1122U) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x529 = INT64_MAX;
	uint64_t x531 = UINT64_MAX;
	int64_t x532 = INT64_MIN;
	int64_t t115 = -60260LL;

    t115 = (x529-(x530*(x531!=x532)));

    if (t115 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x537 = -1;
	volatile uint64_t x539 = 32349LLU;
	static volatile int32_t t116 = 87;

    t116 = (x537-(x538*(x539!=x540)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x549 = -2;
	int16_t x550 = INT16_MIN;
	static uint64_t x551 = UINT64_MAX;
	uint32_t x552 = 29492447U;
	int32_t t117 = -821339;

    t117 = (x549-(x550*(x551!=x552)));

    if (t117 != 32766) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x553 = -1;
	volatile int64_t x555 = INT64_MIN;
	int16_t x556 = 366;
	int64_t t118 = INT64_MAX;

    t118 = (x553-(x554*(x555!=x556)));

    if (t118 != INT64_MAX) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x558 = -20496262053LL;
	int32_t x559 = INT32_MAX;
	volatile uint16_t x560 = 28563U;
	static int64_t t119 = -1517073250567LL;

    t119 = (x557-(x558*(x559!=x560)));

    if (t119 != 18348778405LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x561 = -1;
	uint32_t x562 = 3U;
	int64_t x564 = -3653535336221LL;

    t120 = (x561-(x562*(x563!=x564)));

    if (t120 != 4294967292U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint8_t x565 = 43U;
	static int16_t x566 = 95;
	static int64_t x567 = 17253305827LL;
	int32_t t121 = 209573319;

    t121 = (x565-(x566*(x567!=x568)));

    if (t121 != -52) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x569 = -1;
	volatile int8_t x570 = -1;
	int8_t x571 = INT8_MIN;
	volatile int64_t x572 = INT64_MIN;

    t122 = (x569-(x570*(x571!=x572)));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x573 = -1;
	static uint32_t x574 = 1U;
	uint16_t x576 = 206U;
	uint32_t t123 = 152800U;

    t123 = (x573-(x574*(x575!=x576)));

    if (t123 != 4294967294U) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int8_t x577 = -3;
	int32_t x578 = INT32_MIN;
	int32_t x579 = INT32_MIN;
	static int16_t x580 = INT16_MAX;
	int32_t t124 = 1810;

    t124 = (x577-(x578*(x579!=x580)));

    if (t124 != 2147483645) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint32_t x581 = 3U;
	int64_t x582 = INT64_MAX;
	int32_t x583 = INT32_MIN;
	uint32_t x584 = UINT32_MAX;
	int64_t t125 = 62521606LL;

    t125 = (x581-(x582*(x583!=x584)));

    if (t125 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x585 = UINT16_MAX;
	int8_t x586 = 0;
	uint8_t x588 = UINT8_MAX;

    t126 = (x585-(x586*(x587!=x588)));

    if (t126 != 65535) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x589 = UINT64_MAX;
	int8_t x590 = 6;
	uint32_t x591 = 468693U;
	int8_t x592 = INT8_MAX;

    t127 = (x589-(x590*(x591!=x592)));

    if (t127 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x593 = 1430U;
	static int32_t x594 = -9723;
	int8_t x595 = INT8_MIN;
	int32_t x596 = INT32_MIN;
	int32_t t128 = -16538805;

    t128 = (x593-(x594*(x595!=x596)));

    if (t128 != 11153) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int64_t x597 = -540622544LL;
	uint8_t x599 = UINT8_MAX;
	int64_t x600 = -1LL;
	volatile int64_t t129 = -371567LL;

    t129 = (x597-(x598*(x599!=x600)));

    if (t129 != -540621957LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x601 = 694U;
	static uint64_t x602 = UINT64_MAX;
	int16_t x603 = 1;
	int32_t x604 = INT32_MIN;

    t130 = (x601-(x602*(x603!=x604)));

    if (t130 != 695LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x610 = INT32_MIN;
	int64_t x612 = INT64_MIN;
	int64_t t131 = -270950315322LL;

    t131 = (x609-(x610*(x611!=x612)));

    if (t131 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x613 = 1011;
	int8_t x614 = INT8_MIN;
	int32_t x615 = INT32_MIN;
	int32_t t132 = -168;

    t132 = (x613-(x614*(x615!=x616)));

    if (t132 != 1139) { NG(); } else { ; }
	
}

void f133(void) {
    	static int16_t x617 = -1;
	uint32_t x618 = 7U;
	static uint64_t x619 = 127311442984LLU;

    t133 = (x617-(x618*(x619!=x620)));

    if (t133 != 4294967288U) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x621 = INT16_MIN;
	static int16_t x623 = INT16_MAX;
	static int64_t x624 = -1LL;
	int32_t t134 = 824;

    t134 = (x621-(x622*(x623!=x624)));

    if (t134 != -32770) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile uint64_t x633 = 59050998325411061LLU;
	int64_t x634 = -1LL;
	uint8_t x635 = 11U;
	uint8_t x636 = UINT8_MAX;

    t135 = (x633-(x634*(x635!=x636)));

    if (t135 != 59050998325411062LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x641 = INT8_MIN;
	volatile uint8_t x642 = UINT8_MAX;
	uint64_t x643 = UINT64_MAX;

    t136 = (x641-(x642*(x643!=x644)));

    if (t136 != -383) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x645 = 26476411283LLU;
	int16_t x646 = -4974;
	static uint8_t x647 = 27U;
	static uint64_t x648 = 21222042533511351LLU;
	uint64_t t137 = 3165335LLU;

    t137 = (x645-(x646*(x647!=x648)));

    if (t137 != 26476416257LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x650 = UINT64_MAX;
	uint64_t x652 = 11LLU;
	uint64_t t138 = 18897LLU;

    t138 = (x649-(x650*(x651!=x652)));

    if (t138 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x654 = INT16_MIN;
	int16_t x655 = INT16_MIN;
	int8_t x656 = INT8_MAX;
	int32_t t139 = -22;

    t139 = (x653-(x654*(x655!=x656)));

    if (t139 != -2147450880) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x657 = -8193559785668807LL;
	static uint32_t x658 = 77343U;
	int8_t x659 = INT8_MAX;
	volatile uint16_t x660 = UINT16_MAX;
	volatile int64_t t140 = 0LL;

    t140 = (x657-(x658*(x659!=x660)));

    if (t140 != -8193559785746150LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x663 = 5;
	volatile int16_t x664 = INT16_MIN;

    t141 = (x661-(x662*(x663!=x664)));

    if (t141 != 2) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x665 = -1;
	static int8_t x667 = INT8_MIN;
	static volatile int64_t x668 = -1LL;
	int32_t t142 = 1;

    t142 = (x665-(x666*(x667!=x668)));

    if (t142 != -14765) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x673 = INT8_MIN;
	uint32_t x674 = UINT32_MAX;
	int32_t x675 = INT32_MIN;
	int16_t x676 = 3;
	volatile uint32_t t143 = 111847U;

    t143 = (x673-(x674*(x675!=x676)));

    if (t143 != 4294967169U) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x677 = 1;
	int64_t x678 = INT64_MIN;
	int32_t x679 = -1;
	int32_t x680 = -1;

    t144 = (x677-(x678*(x679!=x680)));

    if (t144 != 1LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint32_t x685 = UINT32_MAX;
	uint32_t x686 = UINT32_MAX;
	volatile int16_t x687 = 5;
	int64_t x688 = -50265707LL;
	volatile uint32_t t145 = 7U;

    t145 = (x685-(x686*(x687!=x688)));

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x690 = -1;
	volatile uint32_t x692 = UINT32_MAX;
	int32_t t146 = 31918;

    t146 = (x689-(x690*(x691!=x692)));

    if (t146 != 51) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x693 = 0U;
	int8_t x694 = -1;
	int32_t x695 = -890740524;
	int16_t x696 = INT16_MIN;
	static int32_t t147 = 413;

    t147 = (x693-(x694*(x695!=x696)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x697 = 37563018365LL;
	int8_t x698 = -1;
	int64_t x699 = -712914930860LL;
	int8_t x700 = INT8_MIN;

    t148 = (x697-(x698*(x699!=x700)));

    if (t148 != 37563018366LL) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x701 = UINT16_MAX;
	int16_t x702 = -254;
	uint8_t x703 = 29U;
	uint32_t x704 = 200U;
	int32_t t149 = -6675536;

    t149 = (x701-(x702*(x703!=x704)));

    if (t149 != 65789) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x706 = 1U;
	uint8_t x707 = UINT8_MAX;
	int8_t x708 = 1;
	static uint32_t t150 = 598U;

    t150 = (x705-(x706*(x707!=x708)));

    if (t150 != 4294967167U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x710 = -22;
	static int8_t x711 = -1;
	static volatile uint64_t x712 = 104LLU;
	int32_t t151 = 267825;

    t151 = (x709-(x710*(x711!=x712)));

    if (t151 != 34) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int8_t x713 = INT8_MIN;
	int16_t x714 = -614;
	uint16_t x715 = 82U;
	static uint32_t x716 = 566997424U;

    t152 = (x713-(x714*(x715!=x716)));

    if (t152 != 486) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x718 = INT8_MAX;
	uint8_t x719 = 80U;
	int64_t x720 = INT64_MIN;

    t153 = (x717-(x718*(x719!=x720)));

    if (t153 != -128) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x721 = INT16_MAX;
	uint64_t x722 = 352361984041732LLU;
	uint64_t x723 = UINT64_MAX;
	int8_t x724 = INT8_MIN;

    t154 = (x721-(x722*(x723!=x724)));

    if (t154 != 18446391711725542651LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x726 = 3219035352232563902LLU;
	uint32_t x728 = 172U;
	volatile uint64_t t155 = 1280359026588947598LLU;

    t155 = (x725-(x726*(x727!=x728)));

    if (t155 != 15227708721476987713LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x729 = INT8_MIN;
	int32_t x730 = INT32_MIN;
	volatile int8_t x731 = 1;
	int64_t x732 = 1232603514448LL;
	volatile int32_t t156 = 55417754;

    t156 = (x729-(x730*(x731!=x732)));

    if (t156 != 2147483520) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x738 = INT64_MIN;
	static int32_t x739 = 191;

    t157 = (x737-(x738*(x739!=x740)));

    if (t157 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x745 = 28U;
	uint32_t x746 = 1767U;
	uint32_t x747 = UINT32_MAX;
	volatile int16_t x748 = INT16_MIN;
	volatile uint32_t t158 = 248708U;

    t158 = (x745-(x746*(x747!=x748)));

    if (t158 != 4294965557U) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x749 = INT32_MIN;
	static volatile uint16_t x750 = 3U;
	uint64_t x751 = UINT64_MAX;
	uint64_t x752 = UINT64_MAX;
	int32_t t159 = INT32_MIN;

    t159 = (x749-(x750*(x751!=x752)));

    if (t159 != INT32_MIN) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x753 = 4U;
	uint16_t x754 = UINT16_MAX;
	int64_t x755 = INT64_MIN;
	int8_t x756 = INT8_MIN;
	int32_t t160 = -841681312;

    t160 = (x753-(x754*(x755!=x756)));

    if (t160 != -65531) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int16_t x757 = INT16_MIN;
	int16_t x758 = 4;
	uint64_t x759 = UINT64_MAX;
	int32_t t161 = 46652867;

    t161 = (x757-(x758*(x759!=x760)));

    if (t161 != -32772) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x761 = UINT16_MAX;
	uint8_t x762 = UINT8_MAX;

    t162 = (x761-(x762*(x763!=x764)));

    if (t162 != 65280) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x765 = UINT32_MAX;
	int16_t x766 = -1;
	int8_t x767 = -30;
	int32_t x768 = INT32_MAX;
	uint32_t t163 = 2139U;

    t163 = (x765-(x766*(x767!=x768)));

    if (t163 != 0U) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x769 = INT32_MAX;
	int64_t x772 = INT64_MAX;
	int32_t t164 = 124356756;

    t164 = (x769-(x770*(x771!=x772)));

    if (t164 != 2147483646) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x777 = 111U;
	uint32_t x778 = 230U;
	int8_t x780 = -1;
	static volatile uint32_t t165 = 1356926115U;

    t165 = (x777-(x778*(x779!=x780)));

    if (t165 != 4294967177U) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x781 = -1;
	volatile int8_t x782 = -33;
	static volatile int64_t x783 = INT64_MIN;
	volatile int32_t t166 = 304934139;

    t166 = (x781-(x782*(x783!=x784)));

    if (t166 != 32) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x785 = UINT16_MAX;
	int32_t x786 = INT32_MAX;
	int16_t x787 = INT16_MAX;
	int8_t x788 = INT8_MIN;
	int32_t t167 = 6454;

    t167 = (x785-(x786*(x787!=x788)));

    if (t167 != -2147418112) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int32_t x790 = 456905;
	static int64_t x791 = -14297761430921LL;
	volatile int8_t x792 = -30;

    t168 = (x789-(x790*(x791!=x792)));

    if (t168 != -456906) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x793 = 69066579579664LL;
	int8_t x794 = -14;
	volatile uint64_t x796 = 1808363708971451LLU;

    t169 = (x793-(x794*(x795!=x796)));

    if (t169 != 69066579579678LL) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x797 = INT16_MAX;
	int64_t x798 = -1LL;
	uint32_t x799 = 260414U;
	int16_t x800 = -1;
	int64_t t170 = -1407098725499LL;

    t170 = (x797-(x798*(x799!=x800)));

    if (t170 != 32768LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x801 = INT64_MIN;
	int16_t x802 = INT16_MIN;
	int16_t x803 = INT16_MAX;
	uint32_t x804 = UINT32_MAX;

    t171 = (x801-(x802*(x803!=x804)));

    if (t171 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static volatile int8_t x805 = -1;
	int16_t x806 = 206;
	volatile int8_t x808 = INT8_MIN;
	static volatile int32_t t172 = -1;

    t172 = (x805-(x806*(x807!=x808)));

    if (t172 != -207) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x813 = INT8_MIN;
	int64_t x814 = -1LL;
	int16_t x815 = INT16_MIN;
	int16_t x816 = -1;
	int64_t t173 = -3690567LL;

    t173 = (x813-(x814*(x815!=x816)));

    if (t173 != -127LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x817 = INT16_MIN;
	volatile uint8_t x818 = 53U;
	static volatile int8_t x819 = INT8_MIN;
	static volatile int32_t t174 = 3343;

    t174 = (x817-(x818*(x819!=x820)));

    if (t174 != -32821) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x821 = INT8_MIN;
	volatile uint32_t x822 = UINT32_MAX;
	uint16_t x823 = 4U;
	int32_t x824 = INT32_MIN;
	volatile uint32_t t175 = 325301092U;

    t175 = (x821-(x822*(x823!=x824)));

    if (t175 != 4294967169U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x825 = 6915404166LLU;
	uint16_t x826 = UINT16_MAX;
	static uint16_t x827 = 1U;
	int8_t x828 = INT8_MIN;
	uint64_t t176 = 30665884993958401LLU;

    t176 = (x825-(x826*(x827!=x828)));

    if (t176 != 6915338631LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int32_t x829 = -113374749;
	int8_t x830 = INT8_MAX;
	int8_t x831 = -7;
	static volatile int32_t t177 = 11636;

    t177 = (x829-(x830*(x831!=x832)));

    if (t177 != -113374876) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x833 = 4033U;
	static volatile int64_t x834 = 137354LL;
	int8_t x836 = INT8_MIN;
	volatile int64_t t178 = -383277LL;

    t178 = (x833-(x834*(x835!=x836)));

    if (t178 != -133321LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x837 = INT16_MIN;
	int8_t x839 = INT8_MAX;

    t179 = (x837-(x838*(x839!=x840)));

    if (t179 != -263072) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x841 = -1;
	int16_t x842 = INT16_MIN;
	uint32_t x843 = 1U;
	int64_t x844 = -1LL;
	int32_t t180 = 20621121;

    t180 = (x841-(x842*(x843!=x844)));

    if (t180 != 32767) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x845 = -12949497;
	volatile int64_t x846 = -1065LL;
	uint32_t x847 = 32U;
	volatile int64_t x848 = -1LL;

    t181 = (x845-(x846*(x847!=x848)));

    if (t181 != -12948432LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x849 = INT8_MIN;
	volatile int16_t x850 = INT16_MIN;

    t182 = (x849-(x850*(x851!=x852)));

    if (t182 != 32640) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x853 = INT64_MIN;
	volatile int32_t x854 = -3999073;
	volatile uint64_t x855 = UINT64_MAX;
	static uint32_t x856 = UINT32_MAX;
	volatile int64_t t183 = 132771613879364880LL;

    t183 = (x853-(x854*(x855!=x856)));

    if (t183 != -9223372036850776735LL) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x857 = -1;
	int16_t x858 = -24;
	uint16_t x859 = 18324U;
	volatile int16_t x860 = 2464;
	int32_t t184 = 162;

    t184 = (x857-(x858*(x859!=x860)));

    if (t184 != 23) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x861 = INT32_MAX;
	int64_t x862 = -1LL;
	uint64_t x863 = UINT64_MAX;
	volatile int16_t x864 = INT16_MIN;
	volatile int64_t t185 = -4274LL;

    t185 = (x861-(x862*(x863!=x864)));

    if (t185 != 2147483648LL) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint64_t x865 = 7135126814968LLU;
	static int32_t x866 = -12072687;
	static volatile uint16_t x867 = 4U;
	uint32_t x868 = 1193224U;
	static uint64_t t186 = 1659LLU;

    t186 = (x865-(x866*(x867!=x868)));

    if (t186 != 7135138887655LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x869 = INT8_MIN;
	volatile int32_t x870 = INT32_MIN;
	uint16_t x871 = UINT16_MAX;
	int16_t x872 = INT16_MIN;
	volatile int32_t t187 = 433265439;

    t187 = (x869-(x870*(x871!=x872)));

    if (t187 != 2147483520) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x873 = INT8_MIN;
	int16_t x874 = -19;
	static uint64_t x875 = UINT64_MAX;
	static uint32_t x876 = 10542598U;
	int32_t t188 = -3249308;

    t188 = (x873-(x874*(x875!=x876)));

    if (t188 != -109) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x877 = 6673586871LLU;
	int8_t x878 = -3;
	uint8_t x880 = 5U;

    t189 = (x877-(x878*(x879!=x880)));

    if (t189 != 6673586874LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x885 = 678U;
	int32_t x886 = INT32_MIN;
	int8_t x887 = INT8_MIN;
	volatile int64_t x888 = INT64_MAX;
	static volatile uint32_t t190 = 5U;

    t190 = (x885-(x886*(x887!=x888)));

    if (t190 != 2147484326U) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x893 = INT8_MIN;
	int32_t x894 = INT32_MIN;
	int8_t x896 = INT8_MIN;
	volatile int32_t t191 = -30;

    t191 = (x893-(x894*(x895!=x896)));

    if (t191 != 2147483520) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x897 = -3;
	uint64_t x898 = 260LLU;
	int32_t x899 = INT32_MIN;
	uint64_t t192 = 62057138LLU;

    t192 = (x897-(x898*(x899!=x900)));

    if (t192 != 18446744073709551353LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x905 = 15919125557337LLU;
	static uint64_t x906 = UINT64_MAX;
	static uint8_t x907 = 0U;
	uint64_t t193 = 1729584483651LLU;

    t193 = (x905-(x906*(x907!=x908)));

    if (t193 != 15919125557338LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x909 = INT64_MIN;
	int64_t x910 = -1LL;
	int64_t x911 = -1LL;
	int8_t x912 = -1;

    t194 = (x909-(x910*(x911!=x912)));

    if (t194 != INT64_MIN) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x917 = -40993;
	volatile uint32_t x918 = 63742U;
	static int16_t x919 = INT16_MIN;
	volatile int64_t x920 = -1LL;
	static uint32_t t195 = 799U;

    t195 = (x917-(x918*(x919!=x920)));

    if (t195 != 4294862561U) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint64_t x921 = UINT64_MAX;
	int32_t x922 = INT32_MAX;
	int32_t x923 = INT32_MIN;
	volatile int32_t x924 = -93019598;
	uint64_t t196 = 121930102152LLU;

    t196 = (x921-(x922*(x923!=x924)));

    if (t196 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x925 = 222818;
	static uint32_t x926 = 4U;
	static uint8_t x928 = 7U;
	uint32_t t197 = 774U;

    t197 = (x925-(x926*(x927!=x928)));

    if (t197 != 222814U) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x929 = -1;
	static int64_t x930 = 0LL;
	int32_t x931 = INT32_MIN;
	int16_t x932 = INT16_MIN;
	volatile int64_t t198 = -16596649289557LL;

    t198 = (x929-(x930*(x931!=x932)));

    if (t198 != -1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x933 = INT8_MIN;
	static uint64_t x934 = 1146286LLU;
	int64_t x935 = INT64_MIN;
	int8_t x936 = -1;
	uint64_t t199 = 79569LLU;

    t199 = (x933-(x934*(x935!=x936)));

    if (t199 != 18446744073708405202LLU) { NG(); } else { ; }
	
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

