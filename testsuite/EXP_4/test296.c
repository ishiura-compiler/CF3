
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

static int64_t x10 = -126614522032011LL;
int64_t x11 = INT64_MIN;
int32_t x16 = -1;
uint64_t x17 = 5868477503LLU;
volatile uint64_t t4 = 219092589LLU;
volatile int16_t x21 = -1;
static int8_t x25 = INT8_MIN;
int32_t x26 = -1;
volatile uint32_t x34 = UINT32_MAX;
uint16_t x44 = 97U;
uint64_t x49 = UINT64_MAX;
static uint64_t t12 = UINT64_MAX;
int32_t x53 = INT32_MIN;
int8_t x57 = INT8_MIN;
volatile uint16_t x59 = 14U;
int32_t x64 = -1;
int32_t t15 = -4091;
uint32_t x68 = 208655391U;
static uint64_t x69 = 712308702LLU;
volatile int8_t x71 = -1;
int16_t x73 = -30;
int64_t x74 = -1LL;
uint64_t x75 = UINT64_MAX;
uint8_t x84 = UINT8_MAX;
uint32_t x87 = UINT32_MAX;
static volatile int32_t t22 = -3;
volatile uint64_t x94 = 23657591932LLU;
int16_t x100 = -1;
static int16_t x101 = INT16_MAX;
uint32_t x104 = UINT32_MAX;
static int32_t x123 = INT32_MIN;
int8_t x124 = -1;
int64_t x126 = INT64_MAX;
int8_t x127 = -1;
volatile int32_t t31 = 1;
static uint8_t x142 = UINT8_MAX;
int8_t x144 = INT8_MIN;
int8_t x159 = INT8_MAX;
int32_t x173 = -5150;
static volatile uint64_t x176 = 3322314218458357LLU;
int32_t t38 = 261336;
int8_t x179 = -14;
int16_t x180 = INT16_MIN;
int8_t x184 = -1;
uint32_t x192 = 1U;
static int64_t x194 = INT64_MIN;
volatile uint64_t x195 = 230844462437842297LLU;
volatile int32_t t43 = -7536813;
int64_t x197 = INT64_MIN;
volatile uint16_t x198 = 17U;
int64_t t44 = INT64_MIN;
uint64_t x202 = 4997878495823LLU;
int32_t x204 = -1;
int32_t x214 = -1;
volatile int64_t t48 = 116LL;
static int64_t x220 = 16313489207LL;
int32_t t50 = -1;
static int32_t t53 = -751;
int32_t t54 = 115;
volatile int8_t x250 = -1;
int32_t t56 = 248185;
static int64_t x253 = INT64_MIN;
int64_t x260 = -1LL;
int32_t t58 = -32638;
volatile uint64_t x264 = UINT64_MAX;
static int64_t x270 = INT64_MIN;
volatile uint64_t x282 = 2734664341330194LLU;
volatile int8_t x283 = INT8_MIN;
static int16_t x284 = INT16_MIN;
static int8_t x287 = INT8_MAX;
int8_t x289 = INT8_MIN;
uint8_t x291 = 14U;
int32_t x296 = -4527437;
int64_t t67 = 481LL;
uint32_t x309 = 12246251U;
int16_t x311 = INT16_MIN;
int8_t x315 = 1;
static int64_t x316 = -1LL;
volatile int32_t t71 = 3811956;
uint8_t x324 = 15U;
uint64_t x325 = 527368205772428LLU;
volatile uint64_t t73 = 1447LLU;
int64_t x331 = -1LL;
uint64_t x338 = UINT64_MAX;
uint32_t x339 = 501186287U;
uint8_t x343 = UINT8_MAX;
volatile int32_t x346 = -1;
int32_t x353 = -950;
uint16_t x359 = 1441U;
uint64_t x362 = UINT64_MAX;
volatile uint32_t t82 = UINT32_MAX;
volatile int32_t t83 = -12;
int64_t x376 = 31747534700815038LL;
uint32_t x389 = 79808U;
static uint32_t x390 = UINT32_MAX;
int8_t x400 = -7;
int16_t x409 = -2;
static volatile int8_t x411 = -1;
int16_t x413 = INT16_MAX;
static int32_t x440 = INT32_MAX;
int32_t x443 = -1;
int64_t t98 = INT64_MIN;
uint32_t t99 = UINT32_MAX;
int8_t x450 = 7;
int8_t x466 = INT8_MIN;
int64_t x474 = 4173LL;
int32_t x485 = INT32_MIN;
static int32_t x486 = INT32_MIN;
volatile int32_t x488 = -21;
volatile int64_t t108 = INT64_MAX;
int8_t x515 = 1;
int8_t x522 = -1;
static int32_t t114 = 0;
static int8_t x535 = -1;
int32_t x548 = 26;
int8_t x553 = INT8_MIN;
static int16_t x555 = INT16_MAX;
uint64_t x569 = 4044250LLU;
int64_t x572 = 236979023847400209LL;
volatile int64_t x576 = INT64_MIN;
int64_t x578 = -2770400478523LL;
volatile int8_t x601 = INT8_MIN;
static uint64_t x607 = 227460069036LLU;
uint32_t x608 = 3879711U;
volatile uint64_t t131 = 6176847LLU;
int32_t x621 = INT32_MIN;
int32_t x622 = -148081;
int32_t t132 = INT32_MIN;
static int64_t x635 = -1583237814393062LL;
volatile int32_t t134 = 54429117;
uint64_t x638 = 100384LLU;
int32_t x639 = INT32_MAX;
uint8_t x641 = UINT8_MAX;
int16_t x644 = 25;
int16_t x647 = INT16_MIN;
int16_t x655 = -32;
volatile int32_t t138 = 1056088900;
static int8_t x657 = -13;
static int8_t x662 = -1;
int8_t x665 = -1;
static uint32_t x668 = 860U;
volatile int32_t t141 = 118992;
static volatile int32_t x675 = INT32_MAX;
static int32_t t143 = 1189;
int64_t x685 = INT64_MIN;
volatile int16_t x687 = -2154;
uint16_t x689 = UINT16_MAX;
volatile uint32_t x691 = 16232561U;
static int64_t x714 = INT64_MIN;
int32_t t150 = -49943;
volatile int64_t x720 = 61899089468307242LL;
volatile uint8_t x725 = UINT8_MAX;
int8_t x726 = -7;
static int8_t x730 = INT8_MIN;
uint16_t x733 = UINT16_MAX;
volatile int64_t x747 = -1LL;
static volatile int32_t t157 = -12705701;
static int32_t x751 = -1;
int8_t x763 = INT8_MIN;
volatile int64_t x765 = -1LL;
static uint8_t x766 = 25U;
int32_t x767 = -1;
volatile int64_t t162 = -3878305411776043LL;
int32_t x769 = INT32_MIN;
uint8_t x774 = 10U;
uint32_t x777 = 571U;
static uint64_t x779 = UINT64_MAX;
volatile uint32_t t165 = 421U;
int32_t x784 = INT32_MAX;
volatile uint16_t x786 = 15U;
static int32_t x792 = -63;
volatile int64_t t168 = -88LL;
volatile int64_t x796 = 0LL;
int32_t t170 = 2;
uint32_t x801 = 461199U;
int8_t x805 = 6;
static int32_t x817 = 34;
int32_t x821 = INT32_MAX;
int32_t t176 = INT32_MAX;
int64_t x826 = INT64_MIN;
int8_t x827 = -1;
volatile int32_t t177 = -739751675;
volatile int32_t x834 = INT32_MAX;
int8_t x838 = INT8_MIN;
volatile int8_t x863 = INT8_MIN;
int32_t x864 = -1;
int32_t t184 = 4284509;
int32_t x867 = 760072;
static int16_t x868 = -1;
int16_t x879 = 331;
int8_t x885 = INT8_MIN;
int64_t x887 = 0LL;
int64_t x902 = -1LL;
uint64_t x903 = UINT64_MAX;
int32_t t190 = 3;
int32_t x913 = INT32_MAX;
static int16_t x921 = -1763;
static int8_t x922 = 1;
static volatile int32_t t196 = 5615;
int32_t x929 = -16410;


void f0(void) {
    	int8_t x1 = INT8_MIN;
	int8_t x2 = 14;
	uint8_t x3 = UINT8_MAX;
	static uint32_t x4 = UINT32_MAX;
	static volatile int32_t t0 = -117556;

    t0 = (x1-(x2==(x3-x4)));

    if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x5 = INT64_MIN;
	int8_t x6 = -1;
	static uint8_t x7 = 1U;
	volatile int16_t x8 = -92;
	int64_t t1 = INT64_MIN;

    t1 = (x5-(x6==(x7-x8)));

    if (t1 != INT64_MIN) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 6299679414605LLU;
	int16_t x12 = INT16_MIN;
	volatile uint64_t t2 = 31990580LLU;

    t2 = (x9-(x10==(x11-x12)));

    if (t2 != 6299679414605LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = UINT32_MAX;
	int16_t x14 = INT16_MAX;
	volatile int8_t x15 = 48;
	uint32_t t3 = UINT32_MAX;

    t3 = (x13-(x14==(x15-x16)));

    if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
    	uint32_t x18 = 189U;
	int16_t x19 = INT16_MIN;
	int32_t x20 = 11636;

    t4 = (x17-(x18==(x19-x20)));

    if (t4 != 5868477503LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint64_t x22 = 7090LLU;
	int64_t x23 = INT64_MAX;
	int16_t x24 = 1;
	int32_t t5 = -1353264;

    t5 = (x21-(x22==(x23-x24)));

    if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x27 = -1;
	static int64_t x28 = 29LL;
	static volatile int32_t t6 = -5257872;

    t6 = (x25-(x26==(x27-x28)));

    if (t6 != -128) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x29 = UINT32_MAX;
	int32_t x30 = INT32_MIN;
	int32_t x31 = -1;
	int64_t x32 = -119978500695726621LL;
	volatile uint32_t t7 = UINT32_MAX;

    t7 = (x29-(x30==(x31-x32)));

    if (t7 != UINT32_MAX) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MAX;
	uint16_t x35 = 7U;
	uint64_t x36 = 549737498322253LLU;
	volatile int32_t t8 = 4;

    t8 = (x33-(x34==(x35-x36)));

    if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x37 = 15161826358987LLU;
	uint32_t x38 = 1U;
	int8_t x39 = -1;
	volatile int32_t x40 = INT32_MAX;
	uint64_t t9 = 444044039202088133LLU;

    t9 = (x37-(x38==(x39-x40)));

    if (t9 != 15161826358987LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MAX;
	uint8_t x42 = 23U;
	volatile int8_t x43 = 58;
	int64_t t10 = INT64_MAX;

    t10 = (x41-(x42==(x43-x44)));

    if (t10 != INT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x45 = 1073397526022061LLU;
	static uint8_t x46 = 1U;
	uint8_t x47 = 7U;
	uint16_t x48 = 7093U;
	uint64_t t11 = 1768708741982LLU;

    t11 = (x45-(x46==(x47-x48)));

    if (t11 != 1073397526022061LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	static int64_t x50 = -1LL;
	uint32_t x51 = UINT32_MAX;
	volatile uint8_t x52 = UINT8_MAX;

    t12 = (x49-(x50==(x51-x52)));

    if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x54 = 63U;
	int32_t x55 = INT32_MIN;
	int64_t x56 = 2484LL;
	int32_t t13 = INT32_MIN;

    t13 = (x53-(x54==(x55-x56)));

    if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int64_t x58 = 154LL;
	uint64_t x60 = UINT64_MAX;
	static int32_t t14 = 0;

    t14 = (x57-(x58==(x59-x60)));

    if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x61 = INT8_MAX;
	static uint64_t x62 = 132606367149539806LLU;
	static uint8_t x63 = UINT8_MAX;

    t15 = (x61-(x62==(x63-x64)));

    if (t15 != 127) { NG(); } else { ; }
	
}

void f16(void) {
    	uint16_t x65 = UINT16_MAX;
	int64_t x66 = 2759303854203617LL;
	int8_t x67 = 3;
	volatile int32_t t16 = 4391061;

    t16 = (x65-(x66==(x67-x68)));

    if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x70 = INT64_MIN;
	static int32_t x72 = INT32_MIN;
	uint64_t t17 = 1201351934512LLU;

    t17 = (x69-(x70==(x71-x72)));

    if (t17 != 712308702LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x76 = 159906LLU;
	volatile int32_t t18 = -37623;

    t18 = (x73-(x74==(x75-x76)));

    if (t18 != -30) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x77 = INT64_MIN;
	static int16_t x78 = 13785;
	static uint8_t x79 = 10U;
	int32_t x80 = -1;
	int64_t t19 = INT64_MIN;

    t19 = (x77-(x78==(x79-x80)));

    if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x81 = -1;
	static int32_t x82 = 326485;
	volatile uint8_t x83 = UINT8_MAX;
	static volatile int32_t t20 = -1;

    t20 = (x81-(x82==(x83-x84)));

    if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x85 = -1;
	uint16_t x86 = UINT16_MAX;
	uint8_t x88 = 2U;
	int32_t t21 = 2181746;

    t21 = (x85-(x86==(x87-x88)));

    if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MIN;
	static int16_t x90 = -1;
	uint16_t x91 = 0U;
	uint16_t x92 = 1U;

    t22 = (x89-(x90==(x91-x92)));

    if (t22 != -32769) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = INT32_MAX;
	uint32_t x95 = UINT32_MAX;
	uint16_t x96 = 2U;
	static int32_t t23 = INT32_MAX;

    t23 = (x93-(x94==(x95-x96)));

    if (t23 != INT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x97 = 36U;
	int64_t x98 = INT64_MIN;
	volatile uint32_t x99 = 39483810U;
	static volatile int32_t t24 = 26;

    t24 = (x97-(x98==(x99-x100)));

    if (t24 != 36) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x102 = 395145671073795LLU;
	volatile uint16_t x103 = UINT16_MAX;
	int32_t t25 = 6955134;

    t25 = (x101-(x102==(x103-x104)));

    if (t25 != 32767) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x113 = -1LL;
	int16_t x114 = INT16_MIN;
	static volatile int16_t x115 = INT16_MIN;
	static uint16_t x116 = 1U;
	volatile int64_t t26 = -4169202835LL;

    t26 = (x113-(x114==(x115-x116)));

    if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
    	static int32_t x117 = INT32_MIN;
	uint64_t x118 = 131943396638537942LLU;
	uint16_t x119 = UINT16_MAX;
	uint16_t x120 = 11044U;
	int32_t t27 = INT32_MIN;

    t27 = (x117-(x118==(x119-x120)));

    if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x121 = INT8_MIN;
	int64_t x122 = INT64_MIN;
	int32_t t28 = 14;

    t28 = (x121-(x122==(x123-x124)));

    if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x125 = INT64_MAX;
	uint32_t x128 = 7600U;
	int64_t t29 = INT64_MAX;

    t29 = (x125-(x126==(x127-x128)));

    if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
    	static int32_t x129 = INT32_MIN;
	int16_t x130 = INT16_MAX;
	static int16_t x131 = 9;
	volatile uint32_t x132 = 172U;
	volatile int32_t t30 = INT32_MIN;

    t30 = (x129-(x130==(x131-x132)));

    if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x133 = 7U;
	static int8_t x134 = INT8_MIN;
	int8_t x135 = INT8_MIN;
	static int8_t x136 = INT8_MIN;

    t31 = (x133-(x134==(x135-x136)));

    if (t31 != 7) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x141 = -1;
	int64_t x143 = INT64_MIN;
	static int32_t t32 = -121279593;

    t32 = (x141-(x142==(x143-x144)));

    if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x153 = 791906469747LL;
	volatile int16_t x154 = -1;
	uint32_t x155 = 6463330U;
	static uint8_t x156 = UINT8_MAX;
	volatile int64_t t33 = 28997LL;

    t33 = (x153-(x154==(x155-x156)));

    if (t33 != 791906469747LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x157 = INT16_MIN;
	volatile uint16_t x158 = 3U;
	uint16_t x160 = 169U;
	volatile int32_t t34 = 79544;

    t34 = (x157-(x158==(x159-x160)));

    if (t34 != -32768) { NG(); } else { ; }
	
}

void f35(void) {
    	uint16_t x161 = 17U;
	static volatile int32_t x162 = -1;
	int32_t x163 = -1;
	uint16_t x164 = UINT16_MAX;
	int32_t t35 = -30834;

    t35 = (x161-(x162==(x163-x164)));

    if (t35 != 17) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x165 = 0;
	uint32_t x166 = 636655883U;
	int32_t x167 = -12887;
	volatile uint16_t x168 = 5U;
	int32_t t36 = -44179;

    t36 = (x165-(x166==(x167-x168)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x169 = INT64_MIN;
	static volatile int16_t x170 = INT16_MIN;
	static uint16_t x171 = 891U;
	static int8_t x172 = INT8_MIN;
	volatile int64_t t37 = INT64_MIN;

    t37 = (x169-(x170==(x171-x172)));

    if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x174 = INT32_MIN;
	int64_t x175 = INT64_MIN;

    t38 = (x173-(x174==(x175-x176)));

    if (t38 != -5150) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int16_t x177 = -1;
	int64_t x178 = INT64_MIN;
	static volatile int32_t t39 = -233;

    t39 = (x177-(x178==(x179-x180)));

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int32_t x181 = -1;
	static int32_t x182 = 6677;
	uint64_t x183 = 65780290708LLU;
	int32_t t40 = -219;

    t40 = (x181-(x182==(x183-x184)));

    if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x185 = -1;
	int8_t x186 = INT8_MAX;
	int32_t x187 = INT32_MAX;
	uint64_t x188 = 7086045649108LLU;
	volatile int32_t t41 = -3207;

    t41 = (x185-(x186==(x187-x188)));

    if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint8_t x189 = 52U;
	uint32_t x190 = 82002457U;
	uint8_t x191 = 16U;
	volatile int32_t t42 = 1044847837;

    t42 = (x189-(x190==(x191-x192)));

    if (t42 != 52) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x193 = -1;
	uint16_t x196 = UINT16_MAX;

    t43 = (x193-(x194==(x195-x196)));

    if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x199 = 0U;
	int64_t x200 = -1LL;

    t44 = (x197-(x198==(x199-x200)));

    if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint8_t x201 = 3U;
	uint32_t x203 = 2625U;
	int32_t t45 = -1;

    t45 = (x201-(x202==(x203-x204)));

    if (t45 != 3) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint64_t x205 = 28516591LLU;
	int16_t x206 = INT16_MAX;
	int8_t x207 = INT8_MIN;
	int32_t x208 = -929;
	uint64_t t46 = 13141506918LLU;

    t46 = (x205-(x206==(x207-x208)));

    if (t46 != 28516591LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int16_t x209 = -1;
	int16_t x210 = INT16_MIN;
	int8_t x211 = -1;
	uint64_t x212 = UINT64_MAX;
	volatile int32_t t47 = -164459;

    t47 = (x209-(x210==(x211-x212)));

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int64_t x213 = 13892LL;
	static int8_t x215 = INT8_MIN;
	static int32_t x216 = -1;

    t48 = (x213-(x214==(x215-x216)));

    if (t48 != 13892LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x217 = -2;
	volatile uint32_t x218 = 2056U;
	volatile int32_t x219 = INT32_MIN;
	volatile int32_t t49 = 867855115;

    t49 = (x217-(x218==(x219-x220)));

    if (t49 != -2) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x221 = 3;
	int64_t x222 = -1LL;
	static int64_t x223 = -1LL;
	int16_t x224 = -14;

    t50 = (x221-(x222==(x223-x224)));

    if (t50 != 3) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x225 = -1LL;
	int32_t x226 = INT32_MIN;
	volatile int64_t x227 = -70466676LL;
	int16_t x228 = INT16_MIN;
	static int64_t t51 = -383388215265LL;

    t51 = (x225-(x226==(x227-x228)));

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint16_t x233 = 0U;
	uint8_t x234 = UINT8_MAX;
	uint32_t x235 = UINT32_MAX;
	static int8_t x236 = 25;
	volatile int32_t t52 = -2736;

    t52 = (x233-(x234==(x235-x236)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile uint8_t x237 = 7U;
	static int16_t x238 = INT16_MIN;
	int8_t x239 = 0;
	int16_t x240 = INT16_MIN;

    t53 = (x237-(x238==(x239-x240)));

    if (t53 != 7) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x241 = 11581U;
	int64_t x242 = 194061LL;
	int64_t x243 = INT64_MIN;
	int64_t x244 = -1LL;

    t54 = (x241-(x242==(x243-x244)));

    if (t54 != 11581) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int8_t x245 = INT8_MAX;
	uint8_t x246 = 6U;
	uint8_t x247 = 76U;
	static int8_t x248 = -1;
	int32_t t55 = 6;

    t55 = (x245-(x246==(x247-x248)));

    if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x249 = INT16_MIN;
	static int32_t x251 = -11;
	static volatile int64_t x252 = -1LL;

    t56 = (x249-(x250==(x251-x252)));

    if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x254 = INT8_MAX;
	int32_t x255 = INT32_MIN;
	int8_t x256 = 0;
	static int64_t t57 = INT64_MIN;

    t57 = (x253-(x254==(x255-x256)));

    if (t57 != INT64_MIN) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x257 = INT16_MAX;
	int16_t x258 = -1;
	static uint32_t x259 = 904037235U;

    t58 = (x257-(x258==(x259-x260)));

    if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x261 = 83187776LLU;
	static int8_t x262 = 1;
	int64_t x263 = 3LL;
	uint64_t t59 = 81077951511918LLU;

    t59 = (x261-(x262==(x263-x264)));

    if (t59 != 83187776LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile int16_t x265 = INT16_MIN;
	uint8_t x266 = UINT8_MAX;
	static int8_t x267 = -1;
	static volatile uint64_t x268 = 642LLU;
	int32_t t60 = -242;

    t60 = (x265-(x266==(x267-x268)));

    if (t60 != -32768) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x269 = -6;
	int32_t x271 = INT32_MAX;
	int64_t x272 = 610568LL;
	volatile int32_t t61 = 0;

    t61 = (x269-(x270==(x271-x272)));

    if (t61 != -6) { NG(); } else { ; }
	
}

void f62(void) {
    	uint32_t x277 = 1213U;
	volatile uint8_t x278 = UINT8_MAX;
	uint64_t x279 = 1199489LLU;
	uint32_t x280 = 533199U;
	uint32_t t62 = 8047187U;

    t62 = (x277-(x278==(x279-x280)));

    if (t62 != 1213U) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x281 = INT8_MIN;
	static int32_t t63 = -13;

    t63 = (x281-(x282==(x283-x284)));

    if (t63 != -128) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x285 = -1;
	static volatile int64_t x286 = INT64_MAX;
	static int16_t x288 = INT16_MAX;
	int32_t t64 = 197909096;

    t64 = (x285-(x286==(x287-x288)));

    if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x290 = INT64_MIN;
	uint8_t x292 = 23U;
	volatile int32_t t65 = -209817;

    t65 = (x289-(x290==(x291-x292)));

    if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x293 = INT32_MIN;
	static int8_t x294 = INT8_MAX;
	static uint16_t x295 = 1935U;
	volatile int32_t t66 = INT32_MIN;

    t66 = (x293-(x294==(x295-x296)));

    if (t66 != INT32_MIN) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x297 = 0LL;
	int64_t x298 = -6LL;
	static int32_t x299 = INT32_MIN;
	volatile int64_t x300 = 38828487727935539LL;

    t67 = (x297-(x298==(x299-x300)));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x305 = INT8_MIN;
	volatile uint16_t x306 = UINT16_MAX;
	int16_t x307 = -1;
	int64_t x308 = 314644042LL;
	static int32_t t68 = 69190;

    t68 = (x305-(x306==(x307-x308)));

    if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x310 = 30648U;
	int16_t x312 = -1;
	static uint32_t t69 = 453304522U;

    t69 = (x309-(x310==(x311-x312)));

    if (t69 != 12246251U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x313 = 772LLU;
	int16_t x314 = INT16_MAX;
	uint64_t t70 = 14059078LLU;

    t70 = (x313-(x314==(x315-x316)));

    if (t70 != 772LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint16_t x317 = UINT16_MAX;
	volatile uint16_t x318 = UINT16_MAX;
	volatile int16_t x319 = -35;
	static int16_t x320 = INT16_MIN;

    t71 = (x317-(x318==(x319-x320)));

    if (t71 != 65535) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x321 = -1;
	int32_t x322 = 206;
	int64_t x323 = INT64_MAX;
	int32_t t72 = -57;

    t72 = (x321-(x322==(x323-x324)));

    if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint16_t x326 = 39U;
	int16_t x327 = INT16_MAX;
	volatile int8_t x328 = INT8_MIN;

    t73 = (x325-(x326==(x327-x328)));

    if (t73 != 527368205772428LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x329 = INT32_MIN;
	int16_t x330 = INT16_MAX;
	int64_t x332 = -1LL;
	static volatile int32_t t74 = INT32_MIN;

    t74 = (x329-(x330==(x331-x332)));

    if (t74 != INT32_MIN) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x333 = -277LL;
	uint64_t x334 = 171LLU;
	int16_t x335 = -686;
	int8_t x336 = INT8_MIN;
	volatile int64_t t75 = -37143795180576921LL;

    t75 = (x333-(x334==(x335-x336)));

    if (t75 != -277LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x337 = INT32_MIN;
	int16_t x340 = -1;
	volatile int32_t t76 = INT32_MIN;

    t76 = (x337-(x338==(x339-x340)));

    if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x341 = -1;
	int64_t x342 = 829955318959945939LL;
	int8_t x344 = INT8_MIN;
	volatile int32_t t77 = -28531500;

    t77 = (x341-(x342==(x343-x344)));

    if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x345 = -3384256173454258LL;
	int8_t x347 = INT8_MIN;
	int32_t x348 = -1;
	static volatile int64_t t78 = -42007147439368LL;

    t78 = (x345-(x346==(x347-x348)));

    if (t78 != -3384256173454258LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int8_t x349 = -1;
	int64_t x350 = INT64_MIN;
	int32_t x351 = -1;
	int16_t x352 = -3399;
	static volatile int32_t t79 = 5;

    t79 = (x349-(x350==(x351-x352)));

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x354 = INT64_MIN;
	static uint16_t x355 = UINT16_MAX;
	static uint32_t x356 = 29779807U;
	int32_t t80 = -244;

    t80 = (x353-(x354==(x355-x356)));

    if (t80 != -950) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x357 = INT16_MIN;
	uint32_t x358 = 62259976U;
	int64_t x360 = -41847584868893LL;
	int32_t t81 = -28;

    t81 = (x357-(x358==(x359-x360)));

    if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x361 = UINT32_MAX;
	uint8_t x363 = 2U;
	static int16_t x364 = INT16_MIN;

    t82 = (x361-(x362==(x363-x364)));

    if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x365 = 221U;
	volatile int64_t x366 = -2655661986LL;
	volatile int32_t x367 = -1;
	int64_t x368 = -50327077LL;

    t83 = (x365-(x366==(x367-x368)));

    if (t83 != 221) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x369 = 16;
	volatile int16_t x370 = -3;
	uint8_t x371 = 3U;
	int64_t x372 = -811156777686957LL;
	int32_t t84 = -112;

    t84 = (x369-(x370==(x371-x372)));

    if (t84 != 16) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x373 = INT64_MAX;
	volatile uint16_t x374 = 1488U;
	static int16_t x375 = INT16_MIN;
	static int64_t t85 = INT64_MAX;

    t85 = (x373-(x374==(x375-x376)));

    if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x377 = -3;
	int32_t x378 = -14;
	volatile int16_t x379 = INT16_MIN;
	static uint8_t x380 = 0U;
	volatile int32_t t86 = -5;

    t86 = (x377-(x378==(x379-x380)));

    if (t86 != -3) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x381 = -188;
	int8_t x382 = INT8_MAX;
	int32_t x383 = INT32_MAX;
	static int64_t x384 = INT64_MAX;
	volatile int32_t t87 = 409870009;

    t87 = (x381-(x382==(x383-x384)));

    if (t87 != -188) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x385 = INT16_MAX;
	int32_t x386 = INT32_MAX;
	uint8_t x387 = 1U;
	uint8_t x388 = 0U;
	int32_t t88 = 0;

    t88 = (x385-(x386==(x387-x388)));

    if (t88 != 32767) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x391 = -49;
	int32_t x392 = -1915;
	volatile uint32_t t89 = 1U;

    t89 = (x389-(x390==(x391-x392)));

    if (t89 != 79808U) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint16_t x393 = 104U;
	int32_t x394 = INT32_MAX;
	int16_t x395 = INT16_MIN;
	volatile uint64_t x396 = 303850420746870747LLU;
	volatile int32_t t90 = -62250;

    t90 = (x393-(x394==(x395-x396)));

    if (t90 != 104) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x397 = INT32_MIN;
	uint64_t x398 = 18497LLU;
	uint32_t x399 = 440611U;
	volatile int32_t t91 = INT32_MIN;

    t91 = (x397-(x398==(x399-x400)));

    if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
    	int16_t x410 = INT16_MAX;
	volatile int64_t x412 = INT64_MIN;
	volatile int32_t t92 = 17775870;

    t92 = (x409-(x410==(x411-x412)));

    if (t92 != -2) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile uint64_t x414 = UINT64_MAX;
	int16_t x415 = -1;
	int8_t x416 = INT8_MIN;
	volatile int32_t t93 = 634855;

    t93 = (x413-(x414==(x415-x416)));

    if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x421 = -1;
	static int8_t x422 = 1;
	static int64_t x423 = INT64_MIN;
	int16_t x424 = -1;
	volatile int32_t t94 = 1876655;

    t94 = (x421-(x422==(x423-x424)));

    if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x425 = -1;
	volatile int8_t x426 = -1;
	int8_t x427 = 3;
	int8_t x428 = -7;
	int32_t t95 = 633;

    t95 = (x425-(x426==(x427-x428)));

    if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x433 = INT8_MIN;
	int32_t x434 = INT32_MIN;
	int64_t x435 = -529LL;
	int8_t x436 = -2;
	int32_t t96 = 2088122;

    t96 = (x433-(x434==(x435-x436)));

    if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint32_t x437 = 25U;
	int16_t x438 = INT16_MIN;
	int8_t x439 = 1;
	volatile uint32_t t97 = 1U;

    t97 = (x437-(x438==(x439-x440)));

    if (t97 != 25U) { NG(); } else { ; }
	
}

void f98(void) {
    	int64_t x441 = INT64_MIN;
	int16_t x442 = INT16_MIN;
	int64_t x444 = INT64_MAX;

    t98 = (x441-(x442==(x443-x444)));

    if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
    	uint32_t x445 = UINT32_MAX;
	int16_t x446 = 8;
	int64_t x447 = 3699208LL;
	int8_t x448 = -1;

    t99 = (x445-(x446==(x447-x448)));

    if (t99 != UINT32_MAX) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x449 = UINT16_MAX;
	uint64_t x451 = UINT64_MAX;
	int8_t x452 = -30;
	int32_t t100 = 27588102;

    t100 = (x449-(x450==(x451-x452)));

    if (t100 != 65535) { NG(); } else { ; }
	
}

void f101(void) {
    	int64_t x453 = INT64_MIN;
	int8_t x454 = INT8_MIN;
	int16_t x455 = 7;
	static int16_t x456 = INT16_MIN;
	volatile int64_t t101 = INT64_MIN;

    t101 = (x453-(x454==(x455-x456)));

    if (t101 != INT64_MIN) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x465 = UINT32_MAX;
	int32_t x467 = -1;
	int8_t x468 = -1;
	static uint32_t t102 = UINT32_MAX;

    t102 = (x465-(x466==(x467-x468)));

    if (t102 != UINT32_MAX) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x473 = INT64_MIN;
	volatile int8_t x475 = -5;
	uint16_t x476 = 3711U;
	int64_t t103 = INT64_MIN;

    t103 = (x473-(x474==(x475-x476)));

    if (t103 != INT64_MIN) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x481 = INT8_MAX;
	static int64_t x482 = INT64_MIN;
	int16_t x483 = -120;
	int32_t x484 = INT32_MIN;
	volatile int32_t t104 = 394;

    t104 = (x481-(x482==(x483-x484)));

    if (t104 != 127) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x487 = 95U;
	volatile int32_t t105 = INT32_MIN;

    t105 = (x485-(x486==(x487-x488)));

    if (t105 != INT32_MIN) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x489 = INT32_MIN;
	static int8_t x490 = -28;
	volatile int32_t x491 = INT32_MIN;
	uint64_t x492 = UINT64_MAX;
	static volatile int32_t t106 = INT32_MIN;

    t106 = (x489-(x490==(x491-x492)));

    if (t106 != INT32_MIN) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x493 = UINT64_MAX;
	int8_t x494 = -3;
	uint64_t x495 = 163633338LLU;
	int16_t x496 = INT16_MIN;
	uint64_t t107 = UINT64_MAX;

    t107 = (x493-(x494==(x495-x496)));

    if (t107 != UINT64_MAX) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x497 = INT64_MAX;
	static uint8_t x498 = UINT8_MAX;
	int64_t x499 = INT64_MIN;
	int8_t x500 = INT8_MIN;

    t108 = (x497-(x498==(x499-x500)));

    if (t108 != INT64_MAX) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x505 = INT16_MIN;
	uint64_t x506 = UINT64_MAX;
	int16_t x507 = -1;
	uint32_t x508 = 7706U;
	int32_t t109 = 8;

    t109 = (x505-(x506==(x507-x508)));

    if (t109 != -32768) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x509 = 25560338LLU;
	int16_t x510 = -1;
	int64_t x511 = -1LL;
	static volatile int64_t x512 = 752377117134LL;
	volatile uint64_t t110 = 803654LLU;

    t110 = (x509-(x510==(x511-x512)));

    if (t110 != 25560338LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x513 = INT32_MAX;
	int8_t x514 = 7;
	static int8_t x516 = -5;
	int32_t t111 = INT32_MAX;

    t111 = (x513-(x514==(x515-x516)));

    if (t111 != INT32_MAX) { NG(); } else { ; }
	
}

void f112(void) {
    	static int16_t x517 = INT16_MIN;
	int32_t x518 = -1;
	static int64_t x519 = INT64_MAX;
	static uint32_t x520 = UINT32_MAX;
	int32_t t112 = -117140;

    t112 = (x517-(x518==(x519-x520)));

    if (t112 != -32768) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x521 = INT16_MAX;
	uint32_t x523 = UINT32_MAX;
	static uint8_t x524 = 20U;
	int32_t t113 = -28;

    t113 = (x521-(x522==(x523-x524)));

    if (t113 != 32767) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x525 = INT16_MIN;
	static int16_t x526 = -164;
	static uint32_t x527 = 611U;
	int16_t x528 = INT16_MAX;

    t114 = (x525-(x526==(x527-x528)));

    if (t114 != -32768) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x529 = INT8_MIN;
	int16_t x530 = INT16_MIN;
	uint8_t x531 = 108U;
	int64_t x532 = -1LL;
	volatile int32_t t115 = -449580301;

    t115 = (x529-(x530==(x531-x532)));

    if (t115 != -128) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x533 = -1LL;
	static volatile int16_t x534 = INT16_MAX;
	int32_t x536 = INT32_MIN;
	static volatile int64_t t116 = 6799LL;

    t116 = (x533-(x534==(x535-x536)));

    if (t116 != -1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int64_t x537 = INT64_MAX;
	uint8_t x538 = 5U;
	uint64_t x539 = UINT64_MAX;
	static int8_t x540 = INT8_MIN;
	volatile int64_t t117 = INT64_MAX;

    t117 = (x537-(x538==(x539-x540)));

    if (t117 != INT64_MAX) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x541 = -1;
	int8_t x542 = INT8_MIN;
	volatile int8_t x543 = -1;
	volatile int64_t x544 = 202728827568LL;
	volatile int32_t t118 = -215663917;

    t118 = (x541-(x542==(x543-x544)));

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x545 = 4;
	uint8_t x546 = UINT8_MAX;
	int8_t x547 = 28;
	int32_t t119 = 890143141;

    t119 = (x545-(x546==(x547-x548)));

    if (t119 != 4) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x554 = -1;
	int32_t x556 = INT32_MAX;
	volatile int32_t t120 = 109;

    t120 = (x553-(x554==(x555-x556)));

    if (t120 != -128) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x570 = INT16_MIN;
	volatile int16_t x571 = INT16_MAX;
	uint64_t t121 = 43873757186LLU;

    t121 = (x569-(x570==(x571-x572)));

    if (t121 != 4044250LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x573 = INT32_MIN;
	static volatile int32_t x574 = -1;
	int16_t x575 = -1;
	volatile int32_t t122 = INT32_MIN;

    t122 = (x573-(x574==(x575-x576)));

    if (t122 != INT32_MIN) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x577 = -1;
	volatile uint32_t x579 = 141U;
	volatile int16_t x580 = -13;
	volatile int32_t t123 = -380094;

    t123 = (x577-(x578==(x579-x580)));

    if (t123 != -1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x581 = 13;
	volatile int8_t x582 = INT8_MAX;
	int32_t x583 = INT32_MIN;
	uint32_t x584 = 5843U;
	int32_t t124 = 0;

    t124 = (x581-(x582==(x583-x584)));

    if (t124 != 13) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x585 = 21494511;
	uint16_t x586 = UINT16_MAX;
	int32_t x587 = INT32_MIN;
	uint8_t x588 = 0U;
	volatile int32_t t125 = -1;

    t125 = (x585-(x586==(x587-x588)));

    if (t125 != 21494511) { NG(); } else { ; }
	
}

void f126(void) {
    	static volatile int16_t x589 = 882;
	static int64_t x590 = INT64_MIN;
	int64_t x591 = INT64_MIN;
	static int64_t x592 = INT64_MIN;
	int32_t t126 = -2005;

    t126 = (x589-(x590==(x591-x592)));

    if (t126 != 882) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint8_t x597 = 10U;
	int64_t x598 = INT64_MIN;
	static volatile int32_t x599 = INT32_MIN;
	uint32_t x600 = UINT32_MAX;
	int32_t t127 = -117424;

    t127 = (x597-(x598==(x599-x600)));

    if (t127 != 10) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x602 = 108U;
	int16_t x603 = INT16_MIN;
	int32_t x604 = INT32_MIN;
	volatile int32_t t128 = 7;

    t128 = (x601-(x602==(x603-x604)));

    if (t128 != -128) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x605 = UINT8_MAX;
	int32_t x606 = 0;
	int32_t t129 = -439466;

    t129 = (x605-(x606==(x607-x608)));

    if (t129 != 255) { NG(); } else { ; }
	
}

void f130(void) {
    	static volatile uint64_t x613 = 366921550LLU;
	int64_t x614 = INT64_MIN;
	uint32_t x615 = 27069401U;
	uint32_t x616 = 4215U;
	volatile uint64_t t130 = 110329827LLU;

    t130 = (x613-(x614==(x615-x616)));

    if (t130 != 366921550LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x617 = 475510314034213790LLU;
	uint8_t x618 = UINT8_MAX;
	int8_t x619 = INT8_MIN;
	volatile int32_t x620 = -1;

    t131 = (x617-(x618==(x619-x620)));

    if (t131 != 475510314034213790LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static int32_t x623 = INT32_MIN;
	int16_t x624 = INT16_MIN;

    t132 = (x621-(x622==(x623-x624)));

    if (t132 != INT32_MIN) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x625 = INT8_MIN;
	volatile uint16_t x626 = 616U;
	uint64_t x627 = UINT64_MAX;
	static int16_t x628 = 1;
	int32_t t133 = 127;

    t133 = (x625-(x626==(x627-x628)));

    if (t133 != -128) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x633 = UINT8_MAX;
	uint8_t x634 = 110U;
	int16_t x636 = INT16_MIN;

    t134 = (x633-(x634==(x635-x636)));

    if (t134 != 255) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x637 = UINT16_MAX;
	static uint32_t x640 = UINT32_MAX;
	int32_t t135 = -223;

    t135 = (x637-(x638==(x639-x640)));

    if (t135 != 65535) { NG(); } else { ; }
	
}

void f136(void) {
    	uint64_t x642 = UINT64_MAX;
	uint8_t x643 = 50U;
	volatile int32_t t136 = -27468039;

    t136 = (x641-(x642==(x643-x644)));

    if (t136 != 255) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x645 = 750397U;
	static int16_t x646 = INT16_MAX;
	int8_t x648 = -4;
	uint32_t t137 = 34375U;

    t137 = (x645-(x646==(x647-x648)));

    if (t137 != 750397U) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x653 = INT16_MAX;
	int32_t x654 = -587677873;
	volatile int8_t x656 = INT8_MIN;

    t138 = (x653-(x654==(x655-x656)));

    if (t138 != 32767) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x658 = 865325922339418LL;
	int64_t x659 = -125313177547LL;
	int32_t x660 = INT32_MAX;
	volatile int32_t t139 = -15;

    t139 = (x657-(x658==(x659-x660)));

    if (t139 != -13) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x661 = INT8_MIN;
	static uint16_t x663 = 1U;
	uint64_t x664 = UINT64_MAX;
	static int32_t t140 = 34250;

    t140 = (x661-(x662==(x663-x664)));

    if (t140 != -128) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x666 = INT64_MIN;
	int64_t x667 = 2797428310LL;

    t141 = (x665-(x666==(x667-x668)));

    if (t141 != -1) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x669 = INT32_MIN;
	uint16_t x670 = 27U;
	int16_t x671 = -2;
	int64_t x672 = INT64_MIN;
	volatile int32_t t142 = INT32_MIN;

    t142 = (x669-(x670==(x671-x672)));

    if (t142 != INT32_MIN) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x673 = 46897122;
	uint64_t x674 = 1106769255656LLU;
	uint64_t x676 = UINT64_MAX;

    t143 = (x673-(x674==(x675-x676)));

    if (t143 != 46897122) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x681 = INT8_MIN;
	volatile int8_t x682 = INT8_MIN;
	int64_t x683 = INT64_MAX;
	uint8_t x684 = 4U;
	volatile int32_t t144 = 38;

    t144 = (x681-(x682==(x683-x684)));

    if (t144 != -128) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x686 = 2515U;
	int16_t x688 = INT16_MIN;
	volatile int64_t t145 = INT64_MIN;

    t145 = (x685-(x686==(x687-x688)));

    if (t145 != INT64_MIN) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x690 = 1107U;
	static volatile uint64_t x692 = 7607554035980019443LLU;
	int32_t t146 = -104725;

    t146 = (x689-(x690==(x691-x692)));

    if (t146 != 65535) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x697 = INT8_MIN;
	int16_t x698 = INT16_MAX;
	int32_t x699 = -8931495;
	static volatile int32_t x700 = -1;
	static volatile int32_t t147 = -2245;

    t147 = (x697-(x698==(x699-x700)));

    if (t147 != -128) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x701 = 3347U;
	int64_t x702 = 588572737LL;
	int64_t x703 = INT64_MIN;
	static int16_t x704 = -1;
	static volatile int32_t t148 = 34;

    t148 = (x701-(x702==(x703-x704)));

    if (t148 != 3347) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x709 = 139903557077190LLU;
	static int32_t x710 = INT32_MAX;
	static int16_t x711 = INT16_MAX;
	int32_t x712 = -1;
	volatile uint64_t t149 = 80251LLU;

    t149 = (x709-(x710==(x711-x712)));

    if (t149 != 139903557077190LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x713 = 94U;
	int32_t x715 = INT32_MIN;
	volatile int16_t x716 = INT16_MIN;

    t150 = (x713-(x714==(x715-x716)));

    if (t150 != 94) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x717 = 113U;
	static volatile int64_t x718 = INT64_MIN;
	int16_t x719 = -989;
	volatile int32_t t151 = -80;

    t151 = (x717-(x718==(x719-x720)));

    if (t151 != 113) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x727 = -2;
	volatile int64_t x728 = -125LL;
	volatile int32_t t152 = 14;

    t152 = (x725-(x726==(x727-x728)));

    if (t152 != 255) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x729 = INT8_MAX;
	int32_t x731 = -1;
	int16_t x732 = INT16_MIN;
	volatile int32_t t153 = 1;

    t153 = (x729-(x730==(x731-x732)));

    if (t153 != 127) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x734 = 15958;
	static int16_t x735 = INT16_MIN;
	uint64_t x736 = UINT64_MAX;
	static int32_t t154 = 17;

    t154 = (x733-(x734==(x735-x736)));

    if (t154 != 65535) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x737 = -105638555866263014LL;
	uint64_t x738 = 3843588926254LLU;
	uint32_t x739 = UINT32_MAX;
	int8_t x740 = INT8_MIN;
	static volatile int64_t t155 = -1056061901LL;

    t155 = (x737-(x738==(x739-x740)));

    if (t155 != -105638555866263014LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int32_t x741 = INT32_MIN;
	int8_t x742 = INT8_MAX;
	uint16_t x743 = 30U;
	static int32_t x744 = INT32_MAX;
	static volatile int32_t t156 = INT32_MIN;

    t156 = (x741-(x742==(x743-x744)));

    if (t156 != INT32_MIN) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x745 = INT16_MIN;
	int16_t x746 = INT16_MIN;
	int32_t x748 = -1;

    t157 = (x745-(x746==(x747-x748)));

    if (t157 != -32768) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x749 = INT64_MIN;
	volatile int32_t x750 = -106;
	static volatile int8_t x752 = -2;
	volatile int64_t t158 = INT64_MIN;

    t158 = (x749-(x750==(x751-x752)));

    if (t158 != INT64_MIN) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x753 = -1089002;
	int16_t x754 = INT16_MIN;
	static uint16_t x755 = 3063U;
	uint64_t x756 = 14LLU;
	int32_t t159 = -29;

    t159 = (x753-(x754==(x755-x756)));

    if (t159 != -1089002) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x757 = 3441LLU;
	int16_t x758 = -1;
	int8_t x759 = INT8_MIN;
	uint32_t x760 = 5851348U;
	volatile uint64_t t160 = 3089991509085288770LLU;

    t160 = (x757-(x758==(x759-x760)));

    if (t160 != 3441LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint8_t x761 = UINT8_MAX;
	int64_t x762 = -9356753796703LL;
	uint16_t x764 = 3514U;
	static volatile int32_t t161 = -180836585;

    t161 = (x761-(x762==(x763-x764)));

    if (t161 != 255) { NG(); } else { ; }
	
}

void f162(void) {
    	static int64_t x768 = INT64_MIN;

    t162 = (x765-(x766==(x767-x768)));

    if (t162 != -1LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x770 = UINT32_MAX;
	int32_t x771 = INT32_MIN;
	int64_t x772 = -1LL;
	volatile int32_t t163 = INT32_MIN;

    t163 = (x769-(x770==(x771-x772)));

    if (t163 != INT32_MIN) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x773 = INT16_MIN;
	uint8_t x775 = 3U;
	volatile uint8_t x776 = UINT8_MAX;
	volatile int32_t t164 = 0;

    t164 = (x773-(x774==(x775-x776)));

    if (t164 != -32768) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint32_t x778 = 6928160U;
	uint64_t x780 = UINT64_MAX;

    t165 = (x777-(x778==(x779-x780)));

    if (t165 != 571U) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x781 = 308418089769535139LLU;
	int64_t x782 = 0LL;
	uint32_t x783 = UINT32_MAX;
	static uint64_t t166 = 732508076527LLU;

    t166 = (x781-(x782==(x783-x784)));

    if (t166 != 308418089769535139LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x785 = 244517;
	volatile uint8_t x787 = 19U;
	int16_t x788 = INT16_MIN;
	int32_t t167 = -18;

    t167 = (x785-(x786==(x787-x788)));

    if (t167 != 244517) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x789 = 395262187337LL;
	int8_t x790 = INT8_MIN;
	int32_t x791 = INT32_MIN;

    t168 = (x789-(x790==(x791-x792)));

    if (t168 != 395262187337LL) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x793 = INT64_MIN;
	int64_t x794 = 541656110436417LL;
	volatile int64_t x795 = INT64_MIN;
	int64_t t169 = INT64_MIN;

    t169 = (x793-(x794==(x795-x796)));

    if (t169 != INT64_MIN) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int8_t x797 = -1;
	uint64_t x798 = UINT64_MAX;
	volatile uint64_t x799 = 113406LLU;
	static volatile uint64_t x800 = 51273295LLU;

    t170 = (x797-(x798==(x799-x800)));

    if (t170 != -1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x802 = 2U;
	static uint16_t x803 = UINT16_MAX;
	int64_t x804 = -1LL;
	static uint32_t t171 = 624U;

    t171 = (x801-(x802==(x803-x804)));

    if (t171 != 461199U) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x806 = -1;
	int64_t x807 = -1LL;
	volatile int32_t x808 = INT32_MIN;
	static int32_t t172 = 16355697;

    t172 = (x805-(x806==(x807-x808)));

    if (t172 != 6) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x809 = -1LL;
	uint32_t x810 = UINT32_MAX;
	int64_t x811 = -60221706LL;
	int16_t x812 = 14342;
	static int64_t t173 = 1LL;

    t173 = (x809-(x810==(x811-x812)));

    if (t173 != -1LL) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile int32_t x813 = INT32_MIN;
	static int32_t x814 = -1;
	int32_t x815 = -1;
	uint32_t x816 = 15U;
	volatile int32_t t174 = INT32_MIN;

    t174 = (x813-(x814==(x815-x816)));

    if (t174 != INT32_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint8_t x818 = 26U;
	uint32_t x819 = UINT32_MAX;
	int64_t x820 = 1LL;
	int32_t t175 = 187243102;

    t175 = (x817-(x818==(x819-x820)));

    if (t175 != 34) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x822 = INT16_MIN;
	volatile int16_t x823 = -120;
	int16_t x824 = INT16_MIN;

    t176 = (x821-(x822==(x823-x824)));

    if (t176 != INT32_MAX) { NG(); } else { ; }
	
}

void f177(void) {
    	static int32_t x825 = -1;
	static volatile uint32_t x828 = UINT32_MAX;

    t177 = (x825-(x826==(x827-x828)));

    if (t177 != -1) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint64_t x833 = 201182614317702LLU;
	static volatile int32_t x835 = 1455713;
	static uint16_t x836 = UINT16_MAX;
	static uint64_t t178 = 661LLU;

    t178 = (x833-(x834==(x835-x836)));

    if (t178 != 201182614317702LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x837 = INT32_MIN;
	static int32_t x839 = INT32_MAX;
	uint64_t x840 = UINT64_MAX;
	volatile int32_t t179 = INT32_MIN;

    t179 = (x837-(x838==(x839-x840)));

    if (t179 != INT32_MIN) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint64_t x841 = 179395684871963321LLU;
	static int64_t x842 = INT64_MIN;
	int32_t x843 = -1;
	uint16_t x844 = UINT16_MAX;
	volatile uint64_t t180 = 115906675984LLU;

    t180 = (x841-(x842==(x843-x844)));

    if (t180 != 179395684871963321LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x849 = 3U;
	int16_t x850 = INT16_MAX;
	static int16_t x851 = -1;
	static uint32_t x852 = UINT32_MAX;
	static int32_t t181 = -115;

    t181 = (x849-(x850==(x851-x852)));

    if (t181 != 3) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x853 = -1;
	volatile uint64_t x854 = 61756775777177232LLU;
	static uint8_t x855 = 16U;
	int8_t x856 = INT8_MIN;
	int32_t t182 = 200;

    t182 = (x853-(x854==(x855-x856)));

    if (t182 != -1) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x857 = 30U;
	uint64_t x858 = UINT64_MAX;
	volatile int16_t x859 = INT16_MIN;
	int8_t x860 = INT8_MIN;
	static int32_t t183 = 19;

    t183 = (x857-(x858==(x859-x860)));

    if (t183 != 30) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x861 = 15;
	uint64_t x862 = UINT64_MAX;

    t184 = (x861-(x862==(x863-x864)));

    if (t184 != 15) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x865 = INT32_MIN;
	int64_t x866 = -14650856295635946LL;
	volatile int32_t t185 = INT32_MIN;

    t185 = (x865-(x866==(x867-x868)));

    if (t185 != INT32_MIN) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x869 = -570;
	int32_t x870 = INT32_MIN;
	int16_t x871 = -1;
	static uint32_t x872 = 913971U;
	static volatile int32_t t186 = 20326858;

    t186 = (x869-(x870==(x871-x872)));

    if (t186 != -570) { NG(); } else { ; }
	
}

void f187(void) {
    	static int32_t x877 = INT32_MIN;
	int64_t x878 = -1LL;
	static uint64_t x880 = UINT64_MAX;
	int32_t t187 = INT32_MIN;

    t187 = (x877-(x878==(x879-x880)));

    if (t187 != INT32_MIN) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x886 = 22U;
	int8_t x888 = 0;
	static int32_t t188 = 37184829;

    t188 = (x885-(x886==(x887-x888)));

    if (t188 != -128) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x897 = INT32_MIN;
	uint64_t x898 = 9651390484517136LLU;
	int8_t x899 = INT8_MAX;
	volatile uint64_t x900 = 7718286171651LLU;
	volatile int32_t t189 = INT32_MIN;

    t189 = (x897-(x898==(x899-x900)));

    if (t189 != INT32_MIN) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x901 = 1;
	volatile int64_t x904 = -912688236882138LL;

    t190 = (x901-(x902==(x903-x904)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x905 = INT16_MIN;
	int8_t x906 = -1;
	static int16_t x907 = INT16_MIN;
	uint16_t x908 = 327U;
	int32_t t191 = 583;

    t191 = (x905-(x906==(x907-x908)));

    if (t191 != -32768) { NG(); } else { ; }
	
}

void f192(void) {
    	uint64_t x909 = 6LLU;
	uint8_t x910 = UINT8_MAX;
	int8_t x911 = INT8_MIN;
	uint64_t x912 = 1LLU;
	volatile uint64_t t192 = 10435262719LLU;

    t192 = (x909-(x910==(x911-x912)));

    if (t192 != 6LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x914 = -3256;
	volatile uint16_t x915 = 268U;
	static uint16_t x916 = 117U;
	static int32_t t193 = INT32_MAX;

    t193 = (x913-(x914==(x915-x916)));

    if (t193 != INT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x917 = INT8_MIN;
	int32_t x918 = INT32_MAX;
	volatile int16_t x919 = -1;
	int16_t x920 = INT16_MIN;
	int32_t t194 = -235;

    t194 = (x917-(x918==(x919-x920)));

    if (t194 != -128) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x923 = 0;
	static int64_t x924 = -6603LL;
	volatile int32_t t195 = 20789;

    t195 = (x921-(x922==(x923-x924)));

    if (t195 != -1763) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x925 = 33U;
	static uint64_t x926 = 2273LLU;
	int16_t x927 = INT16_MIN;
	int64_t x928 = -1LL;

    t196 = (x925-(x926==(x927-x928)));

    if (t196 != 33) { NG(); } else { ; }
	
}

void f197(void) {
    	static int32_t x930 = INT32_MIN;
	int32_t x931 = 31650198;
	static volatile int32_t x932 = -1;
	int32_t t197 = -13;

    t197 = (x929-(x930==(x931-x932)));

    if (t197 != -16410) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x933 = 0;
	uint8_t x934 = 3U;
	static int64_t x935 = INT64_MIN;
	uint64_t x936 = UINT64_MAX;
	volatile int32_t t198 = 8719;

    t198 = (x933-(x934==(x935-x936)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x937 = INT8_MIN;
	int16_t x938 = INT16_MAX;
	int64_t x939 = INT64_MIN;
	uint64_t x940 = 17338499LLU;
	static int32_t t199 = -6026123;

    t199 = (x937-(x938==(x939-x940)));

    if (t199 != -128) { NG(); } else { ; }
	
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

