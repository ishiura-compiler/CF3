
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

int64_t x1 = INT64_MIN;
int64_t x6 = INT64_MAX;
int64_t t2 = 91725182657LL;
static volatile uint32_t t4 = 2U;
int16_t x21 = INT16_MAX;
uint8_t x24 = 1U;
int32_t x26 = INT32_MIN;
volatile int64_t t6 = 108420277LL;
static uint16_t x29 = 27783U;
int32_t x32 = 12;
int16_t x37 = INT16_MIN;
uint16_t x40 = 2001U;
int32_t x43 = INT32_MIN;
volatile int32_t t11 = 1966;
uint16_t x59 = 235U;
volatile uint8_t x74 = 13U;
int16_t x93 = INT16_MIN;
int32_t x94 = -1;
static volatile int8_t x95 = INT8_MAX;
static uint64_t x100 = UINT64_MAX;
volatile uint64_t t21 = 356721LLU;
uint32_t x107 = 13099781U;
int64_t x117 = INT64_MAX;
uint32_t x118 = 5U;
static uint8_t x124 = 7U;
uint64_t t25 = 493030191642234LLU;
uint32_t x128 = 12U;
uint32_t x132 = UINT32_MAX;
int32_t x136 = -1;
int64_t x140 = -1LL;
int8_t x145 = -1;
static uint16_t x149 = UINT16_MAX;
uint8_t x165 = 12U;
static int32_t x189 = INT32_MIN;
volatile uint32_t t38 = 896U;
volatile uint64_t t40 = 89LLU;
uint64_t x218 = UINT64_MAX;
uint64_t t42 = 411054LLU;
int8_t x221 = INT8_MIN;
static int16_t x222 = -1;
static int32_t x236 = 401982;
uint32_t t46 = 1885886U;
int64_t x256 = 70234487253745503LL;
int16_t x262 = INT16_MAX;
int8_t x264 = 6;
int32_t x267 = -1;
static int16_t x287 = INT16_MIN;
int16_t x289 = INT16_MIN;
static int32_t t57 = -6;
int16_t x298 = INT16_MIN;
uint16_t x300 = 232U;
int64_t x306 = -8403154726LL;
volatile uint16_t x307 = 15777U;
static volatile int64_t t60 = 7852LL;
static int16_t x310 = 1;
int16_t x315 = 528;
int8_t x317 = INT8_MIN;
int16_t x320 = 1;
volatile int32_t x323 = -1;
int16_t x324 = INT16_MAX;
int16_t x334 = INT16_MIN;
int8_t x343 = -1;
volatile int32_t x348 = 22385;
int16_t x356 = INT16_MAX;
uint16_t x357 = UINT16_MAX;
uint32_t x360 = UINT32_MAX;
volatile int16_t x378 = INT16_MIN;
volatile int8_t x385 = INT8_MAX;
int8_t x393 = 37;
int64_t x396 = -18246082769LL;
int8_t x398 = INT8_MIN;
volatile int16_t x405 = INT16_MIN;
uint64_t x413 = 509064LLU;
volatile uint16_t x414 = 1U;
uint64_t x422 = 205LLU;
int8_t x434 = INT8_MIN;
int8_t x437 = INT8_MAX;
volatile uint8_t x439 = 51U;
volatile int32_t x464 = INT32_MAX;
int64_t t88 = 9878144196018757LL;
static int32_t x480 = INT32_MAX;
int8_t x481 = -1;
int16_t x490 = 9;
static uint16_t x491 = 3U;
static uint64_t x497 = UINT64_MAX;
int16_t x500 = -10373;
int8_t x502 = INT8_MIN;
int8_t x504 = INT8_MIN;
static volatile int32_t t95 = -7;
uint32_t x508 = UINT32_MAX;
uint64_t x518 = 5877351LLU;
int16_t x528 = INT16_MIN;
int64_t x531 = -1256LL;
int32_t x534 = INT32_MAX;
volatile int16_t x536 = -1;
volatile int16_t x543 = -449;
uint32_t x544 = 118856305U;
static int8_t x545 = INT8_MIN;
int8_t x547 = 0;
volatile uint32_t x549 = 62U;
uint64_t t106 = 537649579333LLU;
int32_t x559 = -1;
volatile int32_t t109 = -3557321;
uint8_t x573 = 2U;
int16_t x591 = 987;
int32_t x604 = INT32_MIN;
int16_t x613 = INT16_MIN;
volatile uint64_t x615 = UINT64_MAX;
static int32_t x620 = INT32_MIN;
volatile uint64_t t120 = 410LLU;
uint8_t x625 = 92U;
int32_t x633 = -9322;
volatile int16_t x636 = -69;
uint16_t x640 = UINT16_MAX;
static int16_t x642 = 15;
volatile int32_t t125 = -117;
int8_t x646 = -1;
static volatile uint64_t x650 = 5364832783929LLU;
static uint16_t x654 = 6U;
uint32_t x655 = 16U;
volatile uint32_t t132 = 1U;
volatile int64_t x689 = -1LL;
int64_t t133 = 15LL;
int8_t x701 = -20;
int64_t x708 = -455679190LL;
volatile int64_t t136 = -1552311550064570LL;
int8_t x714 = 0;
int8_t x715 = 0;
volatile int64_t x720 = 7602581273LL;
volatile int64_t t138 = 203214LL;
uint64_t x731 = 52LLU;
int32_t x733 = INT32_MAX;
uint16_t x736 = 4285U;
static volatile uint64_t t143 = 1336240LLU;
volatile uint32_t x741 = 16520602U;
int16_t x745 = -1;
int16_t x748 = -1;
int32_t x751 = 51;
int64_t x772 = 7601090001LL;
int8_t x773 = INT8_MAX;
uint8_t x774 = 36U;
int8_t x776 = INT8_MIN;
static uint16_t x778 = 6750U;
static uint16_t x780 = 1911U;
volatile int8_t x785 = -5;
static volatile uint64_t x786 = 778463932027LLU;
uint64_t t154 = 219552LLU;
int8_t x793 = INT8_MIN;
int32_t t156 = -109;
int64_t x798 = 36800LL;
static volatile int16_t x800 = INT16_MIN;
static int64_t t158 = 3941LL;
uint16_t x805 = 1U;
uint64_t x815 = 1122789550929085LLU;
volatile uint64_t x826 = 753441022811LLU;
static int32_t x827 = 39726;
static volatile uint16_t x828 = 6178U;
int32_t t162 = -244703656;
int64_t x839 = INT64_MIN;
volatile uint16_t x846 = 7U;
int8_t x851 = 0;
int8_t x853 = INT8_MIN;
uint64_t x854 = 31082765800420184LLU;
uint8_t x868 = 3U;
static int32_t t169 = 0;
static int32_t x883 = -1;
static uint16_t x896 = UINT16_MAX;
static int8_t x902 = 0;
int16_t x904 = INT16_MAX;
static uint64_t x907 = 341789187709LLU;
uint64_t t174 = 16085LLU;
static int32_t x912 = 1046931044;
volatile uint64_t t175 = 229413240LLU;
int64_t x918 = -1LL;
uint32_t x920 = UINT32_MAX;
int16_t x922 = -1;
int16_t x924 = INT16_MIN;
uint64_t x929 = UINT64_MAX;
int64_t x933 = -528563552389719LL;
uint32_t x942 = UINT32_MAX;
volatile int64_t t182 = 48476567085LL;
static int16_t x951 = -1;
int32_t x961 = INT32_MIN;
static uint64_t t185 = 57818831LLU;
static uint32_t x970 = 22975U;
uint64_t x972 = UINT64_MAX;
uint64_t x974 = 8876107883317LLU;
uint16_t x984 = 20031U;
volatile uint32_t t189 = 20U;
static uint16_t x995 = 16034U;
volatile uint32_t t192 = 781U;
int64_t x997 = 22165358501568027LL;
volatile int8_t x1008 = INT8_MIN;
volatile int32_t t196 = 306;
int16_t x1026 = -1;
int16_t x1027 = -13102;


void f0(void) {
    	int8_t x2 = INT8_MIN;
	int8_t x3 = -19;
	int16_t x4 = INT16_MAX;
	volatile int64_t t0 = -13458530306241408LL;

    t0 = (x1%(x2+(x3-x4)));

    if (t0 != -18516LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -1;
	int32_t x7 = 186891;
	static int32_t x8 = INT32_MAX;
	int64_t t1 = -635LL;

    t1 = (x5%(x6+(x7-x8)));

    if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	int16_t x10 = INT16_MAX;
	volatile uint8_t x11 = 91U;
	int32_t x12 = INT32_MAX;

    t2 = (x9%(x10+(x11-x12)));

    if (t2 != -11976973LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int8_t x13 = INT8_MIN;
	static int64_t x14 = 3LL;
	int8_t x15 = -59;
	uint64_t x16 = UINT64_MAX;
	uint64_t t3 = 716LLU;

    t3 = (x13%(x14+(x15-x16)));

    if (t3 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x17 = INT8_MAX;
	uint16_t x18 = 1U;
	volatile uint32_t x19 = UINT32_MAX;
	uint32_t x20 = 48707029U;

    t4 = (x17%(x18+(x19-x20)));

    if (t4 != 127U) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = -4089;
	volatile int8_t x23 = -1;
	int32_t t5 = -6;

    t5 = (x21%(x22+(x23-x24)));

    if (t5 != 39) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x25 = INT16_MIN;
	static volatile int64_t x27 = 4536LL;
	uint8_t x28 = 50U;

    t6 = (x25%(x26+(x27-x28)));

    if (t6 != -32768LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x30 = INT16_MAX;
	volatile uint32_t x31 = 0U;
	uint32_t t7 = 185853U;

    t7 = (x29%(x30+(x31-x32)));

    if (t7 != 27783U) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x38 = -1;
	int16_t x39 = -1;
	volatile int32_t t8 = -24597382;

    t8 = (x37%(x38+(x39-x40)));

    if (t8 != -720) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x41 = 368716U;
	int16_t x42 = INT16_MIN;
	uint64_t x44 = 86458LLU;
	static volatile uint64_t t9 = 2LLU;

    t9 = (x41%(x42+(x43-x44)));

    if (t9 != 368716LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x45 = INT32_MIN;
	static uint32_t x46 = 3114U;
	int16_t x47 = INT16_MIN;
	static uint8_t x48 = UINT8_MAX;
	volatile uint32_t t10 = 169914U;

    t10 = (x45%(x46+(x47-x48)));

    if (t10 != 2147483648U) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x49 = INT32_MIN;
	int8_t x50 = INT8_MIN;
	static int8_t x51 = INT8_MIN;
	int16_t x52 = INT16_MAX;

    t11 = (x49%(x50+(x51-x52)));

    if (t11 != -30981) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x53 = -1LL;
	int64_t x54 = INT64_MIN;
	uint32_t x55 = 1933504U;
	int64_t x56 = -3085602558LL;
	int64_t t12 = -920LL;

    t12 = (x53%(x54+(x55-x56)));

    if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int32_t x57 = -29053994;
	int16_t x58 = -1;
	uint8_t x60 = UINT8_MAX;
	volatile int32_t t13 = 137763;

    t13 = (x57%(x58+(x59-x60)));

    if (t13 != -11) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x65 = 1;
	int64_t x66 = 22784460904250081LL;
	int8_t x67 = -1;
	uint32_t x68 = 6359960U;
	int64_t t14 = -11783256LL;

    t14 = (x65%(x66+(x67-x68)));

    if (t14 != 1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x73 = INT16_MAX;
	uint8_t x75 = 57U;
	int8_t x76 = INT8_MIN;
	volatile int32_t t15 = 171134497;

    t15 = (x73%(x74+(x75-x76)));

    if (t15 != 97) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int64_t x77 = INT64_MAX;
	static uint16_t x78 = 94U;
	uint16_t x79 = UINT16_MAX;
	static int16_t x80 = INT16_MIN;
	volatile int64_t t16 = 97650566LL;

    t16 = (x77%(x78+(x79-x80)));

    if (t16 != 41191LL) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x81 = 3283U;
	static int8_t x82 = INT8_MIN;
	int16_t x83 = INT16_MIN;
	int64_t x84 = INT64_MIN;
	static volatile int64_t t17 = 941388135420393171LL;

    t17 = (x81%(x82+(x83-x84)));

    if (t17 != 3283LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x85 = UINT8_MAX;
	uint32_t x86 = UINT32_MAX;
	uint64_t x87 = UINT64_MAX;
	int16_t x88 = -1;
	uint64_t t18 = 441LLU;

    t18 = (x85%(x86+(x87-x88)));

    if (t18 != 255LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x89 = -161524112;
	uint16_t x90 = 463U;
	uint32_t x91 = UINT32_MAX;
	int16_t x92 = INT16_MAX;
	volatile uint32_t t19 = 0U;

    t19 = (x89%(x90+(x91-x92)));

    if (t19 != 4133443184U) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint16_t x96 = 0U;
	int32_t t20 = -6473;

    t20 = (x93%(x94+(x95-x96)));

    if (t20 != -8) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x97 = INT64_MIN;
	int64_t x98 = -1LL;
	volatile int16_t x99 = -1;

    t21 = (x97%(x98+(x99-x100)));

    if (t21 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int32_t x105 = -26105;
	static int32_t x106 = INT32_MIN;
	static int16_t x108 = INT16_MIN;
	static uint32_t t22 = 1U;

    t22 = (x105%(x106+(x107-x108)));

    if (t22 != 2134324994U) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x109 = 10;
	volatile int64_t x110 = -44256680531882323LL;
	int64_t x111 = -1LL;
	int16_t x112 = 5;
	volatile int64_t t23 = 398211591198154624LL;

    t23 = (x109%(x110+(x111-x112)));

    if (t23 != 10LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x119 = 0;
	int16_t x120 = INT16_MAX;
	int64_t t24 = 2445835090751860160LL;

    t24 = (x117%(x118+(x119-x120)));

    if (t24 != 536674321LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x121 = INT64_MAX;
	static int64_t x122 = -1LL;
	uint64_t x123 = 276151LLU;

    t25 = (x121%(x122+(x123-x124)));

    if (t25 != 243467LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x125 = -3;
	static volatile int8_t x126 = INT8_MIN;
	int16_t x127 = INT16_MIN;
	volatile uint32_t t26 = 191U;

    t26 = (x125%(x126+(x127-x128)));

    if (t26 != 32905U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint8_t x129 = UINT8_MAX;
	uint64_t x130 = 12313463550163LLU;
	static uint8_t x131 = UINT8_MAX;
	volatile uint64_t t27 = 2599504LLU;

    t27 = (x129%(x130+(x131-x132)));

    if (t27 != 255LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x133 = INT64_MIN;
	int8_t x134 = INT8_MAX;
	uint16_t x135 = 10U;
	static int64_t t28 = -3087852179LL;

    t28 = (x133%(x134+(x135-x136)));

    if (t28 != -26LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x137 = INT32_MIN;
	volatile uint16_t x138 = 1141U;
	uint64_t x139 = UINT64_MAX;
	volatile uint64_t t29 = 7031747997LLU;

    t29 = (x137%(x138+(x139-x140)));

    if (t29 != 7LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x141 = -1;
	int8_t x142 = 39;
	static int8_t x143 = INT8_MIN;
	int64_t x144 = -25474100609403LL;
	static volatile int64_t t30 = 24421656322934LL;

    t30 = (x141%(x142+(x143-x144)));

    if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x146 = 6742U;
	int16_t x147 = -1;
	static uint64_t x148 = 140437446111409836LLU;
	volatile uint64_t t31 = 3291473131709LLU;

    t31 = (x145%(x146+(x147-x148)));

    if (t31 != 140437446111403094LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x150 = 699U;
	int8_t x151 = -10;
	uint16_t x152 = 250U;
	static volatile int32_t t32 = 1;

    t32 = (x149%(x150+(x151-x152)));

    if (t32 != 124) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x157 = INT32_MIN;
	static int64_t x158 = INT64_MIN;
	static int8_t x159 = INT8_MAX;
	static uint32_t x160 = UINT32_MAX;
	volatile int64_t t33 = -45593951637LL;

    t33 = (x157%(x158+(x159-x160)));

    if (t33 != -2147483648LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x161 = INT32_MIN;
	int32_t x162 = 1446;
	int8_t x163 = 0;
	int64_t x164 = 1554508LL;
	volatile int64_t t34 = -1LL;

    t34 = (x161%(x162+(x163-x164)));

    if (t34 != -1151964LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x166 = UINT64_MAX;
	static volatile uint8_t x167 = 26U;
	uint8_t x168 = 19U;
	static uint64_t t35 = 245729863241LLU;

    t35 = (x165%(x166+(x167-x168)));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x173 = 7222U;
	uint32_t x174 = UINT32_MAX;
	int8_t x175 = -43;
	volatile uint32_t x176 = UINT32_MAX;
	volatile uint32_t t36 = 169U;

    t36 = (x173%(x174+(x175-x176)));

    if (t36 != 7222U) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x181 = -1LL;
	volatile int64_t x182 = -1LL;
	int64_t x183 = 3715252LL;
	volatile uint16_t x184 = UINT16_MAX;
	volatile int64_t t37 = -209969481736277707LL;

    t37 = (x181%(x182+(x183-x184)));

    if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x190 = 259267U;
	volatile int8_t x191 = INT8_MIN;
	static int16_t x192 = INT16_MIN;

    t38 = (x189%(x190+(x191-x192)));

    if (t38 != 215756U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint16_t x193 = 139U;
	static uint8_t x194 = UINT8_MAX;
	int8_t x195 = 2;
	static int8_t x196 = INT8_MAX;
	int32_t t39 = 226349;

    t39 = (x193%(x194+(x195-x196)));

    if (t39 != 9) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x197 = 1382751LLU;
	volatile int32_t x198 = -23;
	int64_t x199 = INT64_MIN;
	static int64_t x200 = INT64_MIN;

    t40 = (x197%(x198+(x199-x200)));

    if (t40 != 1382751LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x201 = 10U;
	volatile int32_t x202 = -1;
	int8_t x203 = 7;
	volatile int8_t x204 = INT8_MAX;
	int32_t t41 = 18540;

    t41 = (x201%(x202+(x203-x204)));

    if (t41 != 10) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x217 = UINT64_MAX;
	int64_t x219 = INT64_MIN;
	int16_t x220 = INT16_MIN;

    t42 = (x217%(x218+(x219-x220)));

    if (t42 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int16_t x223 = 2570;
	volatile int8_t x224 = INT8_MAX;
	volatile int32_t t43 = 29542538;

    t43 = (x221%(x222+(x223-x224)));

    if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int32_t x225 = INT32_MIN;
	uint32_t x226 = 257448672U;
	volatile int8_t x227 = INT8_MIN;
	static int64_t x228 = -101LL;
	static volatile int64_t t44 = 1802561582352LL;

    t44 = (x225%(x226+(x227-x228)));

    if (t44 != -87894488LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int64_t x229 = 6270LL;
	int8_t x230 = 2;
	uint16_t x231 = UINT16_MAX;
	volatile uint8_t x232 = 10U;
	int64_t t45 = 12263138LL;

    t45 = (x229%(x230+(x231-x232)));

    if (t45 != 6270LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static uint32_t x233 = 7095116U;
	volatile int16_t x234 = INT16_MIN;
	volatile int16_t x235 = INT16_MAX;

    t46 = (x233%(x234+(x235-x236)));

    if (t46 != 7095116U) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x241 = -1;
	volatile int8_t x242 = INT8_MIN;
	int8_t x243 = INT8_MIN;
	static uint8_t x244 = 5U;
	static volatile int32_t t47 = -11;

    t47 = (x241%(x242+(x243-x244)));

    if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x245 = INT8_MIN;
	uint64_t x246 = UINT64_MAX;
	int16_t x247 = INT16_MIN;
	int16_t x248 = INT16_MAX;
	static volatile uint64_t t48 = 163LLU;

    t48 = (x245%(x246+(x247-x248)));

    if (t48 != 65408LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x249 = INT8_MAX;
	static int16_t x250 = INT16_MAX;
	static volatile int64_t x251 = 10190845170959071LL;
	int64_t x252 = -1LL;
	int64_t t49 = -2355350761726328907LL;

    t49 = (x249%(x250+(x251-x252)));

    if (t49 != 127LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x253 = -1;
	int16_t x254 = 1;
	int8_t x255 = -8;
	volatile int64_t t50 = 0LL;

    t50 = (x253%(x254+(x255-x256)));

    if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint16_t x261 = 1925U;
	static int16_t x263 = -1;
	static int32_t t51 = 15;

    t51 = (x261%(x262+(x263-x264)));

    if (t51 != 1925) { NG(); } else { ; }
	
}

void f52(void) {
    	uint16_t x265 = UINT16_MAX;
	int16_t x266 = INT16_MIN;
	uint8_t x268 = UINT8_MAX;
	volatile int32_t t52 = 1;

    t52 = (x265%(x266+(x267-x268)));

    if (t52 != 32511) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint16_t x273 = UINT16_MAX;
	int16_t x274 = INT16_MIN;
	volatile int8_t x275 = INT8_MAX;
	volatile int32_t x276 = -1;
	int32_t t53 = 479213;

    t53 = (x273%(x274+(x275-x276)));

    if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x281 = 56488620017195LL;
	int8_t x282 = 0;
	static uint16_t x283 = UINT16_MAX;
	static uint32_t x284 = 773U;
	static int64_t t54 = -97LL;

    t54 = (x281%(x282+(x283-x284)));

    if (t54 != 35341LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x285 = -143101481236945LL;
	int64_t x286 = -1LL;
	int32_t x288 = INT32_MIN;
	int64_t t55 = -49526136924LL;

    t55 = (x285%(x286+(x287-x288)));

    if (t55 != -1797013022LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x290 = UINT16_MAX;
	volatile int8_t x291 = -1;
	int64_t x292 = 60LL;
	int64_t t56 = 56221LL;

    t56 = (x289%(x290+(x291-x292)));

    if (t56 != -32768LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int16_t x293 = INT16_MAX;
	int16_t x294 = INT16_MIN;
	uint8_t x295 = UINT8_MAX;
	volatile int8_t x296 = INT8_MAX;

    t57 = (x293%(x294+(x295-x296)));

    if (t57 != 127) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x297 = -1LL;
	uint64_t x299 = UINT64_MAX;
	static volatile uint64_t t58 = 15745425637436411LLU;

    t58 = (x297%(x298+(x299-x300)));

    if (t58 != 33000LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint16_t x301 = 1224U;
	static int8_t x302 = -2;
	uint32_t x303 = UINT32_MAX;
	int16_t x304 = -299;
	uint32_t t59 = 76422881U;

    t59 = (x301%(x302+(x303-x304)));

    if (t59 != 40U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x305 = UINT8_MAX;
	int8_t x308 = -9;

    t60 = (x305%(x306+(x307-x308)));

    if (t60 != 255LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x309 = -1;
	uint64_t x311 = 13LLU;
	static int32_t x312 = -1;
	volatile uint64_t t61 = 0LLU;

    t61 = (x309%(x310+(x311-x312)));

    if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x313 = -3649;
	int16_t x314 = -1;
	uint64_t x316 = 6192883938LLU;
	static uint64_t t62 = 374847811997399848LLU;

    t62 = (x313%(x314+(x315-x316)));

    if (t62 != 6192879762LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x318 = INT8_MAX;
	uint32_t x319 = 0U;
	uint32_t t63 = 1U;

    t63 = (x317%(x318+(x319-x320)));

    if (t63 != 2U) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint32_t x321 = 54U;
	int8_t x322 = -1;
	volatile uint32_t t64 = 8U;

    t64 = (x321%(x322+(x323-x324)));

    if (t64 != 54U) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x325 = -3048;
	static volatile uint64_t x326 = 44481542121378LLU;
	static int64_t x327 = 1292939543874161LL;
	int64_t x328 = -8827LL;
	uint64_t t65 = 1111LLU;

    t65 = (x325%(x326+(x327-x328)));

    if (t65 != 1032455537332696LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x333 = 81166534163693LLU;
	int8_t x335 = -6;
	uint64_t x336 = UINT64_MAX;
	volatile uint64_t t66 = 21LLU;

    t66 = (x333%(x334+(x335-x336)));

    if (t66 != 81166534163693LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x341 = 2352396LL;
	volatile uint16_t x342 = UINT16_MAX;
	uint16_t x344 = 254U;
	int64_t t67 = 1041449812925LL;

    t67 = (x341%(x342+(x343-x344)));

    if (t67 != 2316LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x345 = 62041U;
	uint64_t x346 = 1134678478613LLU;
	int32_t x347 = -606;
	uint64_t t68 = 248228958LLU;

    t68 = (x345%(x346+(x347-x348)));

    if (t68 != 62041LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x353 = INT16_MAX;
	int8_t x354 = 0;
	int16_t x355 = INT16_MIN;
	static volatile int32_t t69 = 11125;

    t69 = (x353%(x354+(x355-x356)));

    if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
    	uint8_t x358 = 30U;
	int8_t x359 = INT8_MIN;
	volatile uint32_t t70 = 57U;

    t70 = (x357%(x358+(x359-x360)));

    if (t70 != 65535U) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x361 = UINT8_MAX;
	static uint64_t x362 = 530LLU;
	int32_t x363 = INT32_MIN;
	uint64_t x364 = 12334125LLU;
	uint64_t t71 = 9362659700LLU;

    t71 = (x361%(x362+(x363-x364)));

    if (t71 != 255LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x369 = INT8_MIN;
	int8_t x370 = INT8_MAX;
	uint8_t x371 = 14U;
	static int8_t x372 = 0;
	volatile int32_t t72 = -43;

    t72 = (x369%(x370+(x371-x372)));

    if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x377 = 1527631U;
	int16_t x379 = INT16_MAX;
	volatile int8_t x380 = 1;
	uint32_t t73 = 3964896U;

    t73 = (x377%(x378+(x379-x380)));

    if (t73 != 1527631U) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int64_t x381 = -208770LL;
	uint64_t x382 = 245181156LLU;
	uint8_t x383 = 40U;
	static uint32_t x384 = 5U;
	volatile uint64_t t74 = 17735LLU;

    t74 = (x381%(x382+(x383-x384)));

    if (t74 != 127074991LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x386 = -1;
	int8_t x387 = INT8_MIN;
	uint32_t x388 = 257470708U;
	uint32_t t75 = 413U;

    t75 = (x385%(x386+(x387-x388)));

    if (t75 != 127U) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int16_t x394 = INT16_MAX;
	int32_t x395 = -387826930;
	int64_t t76 = -1111273943677913LL;

    t76 = (x393%(x394+(x395-x396)));

    if (t76 != 37LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x397 = INT16_MIN;
	int64_t x399 = -1LL;
	int64_t x400 = INT64_MIN;
	static int64_t t77 = 78LL;

    t77 = (x397%(x398+(x399-x400)));

    if (t77 != -32768LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint8_t x401 = UINT8_MAX;
	static int8_t x402 = INT8_MIN;
	int8_t x403 = -41;
	int8_t x404 = INT8_MIN;
	int32_t t78 = -1;

    t78 = (x401%(x402+(x403-x404)));

    if (t78 != 9) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x406 = -28;
	uint8_t x407 = 1U;
	int64_t x408 = -1LL;
	volatile int64_t t79 = 3887347LL;

    t79 = (x405%(x406+(x407-x408)));

    if (t79 != -8LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x409 = -1;
	int32_t x410 = -1;
	int8_t x411 = -1;
	int8_t x412 = INT8_MIN;
	int32_t t80 = -47;

    t80 = (x409%(x410+(x411-x412)));

    if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x415 = INT8_MIN;
	int16_t x416 = -630;
	volatile uint64_t t81 = 3557LLU;

    t81 = (x413%(x414+(x415-x416)));

    if (t81 != 28LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x421 = INT32_MIN;
	volatile uint64_t x423 = UINT64_MAX;
	int8_t x424 = 3;
	volatile uint64_t t82 = 7276471974048547LLU;

    t82 = (x421%(x422+(x423-x424)));

    if (t82 != 101LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x429 = 1355U;
	static int32_t x430 = 52111;
	int64_t x431 = INT64_MIN;
	volatile int32_t x432 = -59520;
	volatile int64_t t83 = -512574895698LL;

    t83 = (x429%(x430+(x431-x432)));

    if (t83 != 1355LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x433 = -1;
	int8_t x435 = INT8_MIN;
	static volatile uint32_t x436 = 12193U;
	volatile uint32_t t84 = 14U;

    t84 = (x433%(x434+(x435-x436)));

    if (t84 != 12448U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x438 = UINT8_MAX;
	int32_t x440 = INT32_MAX;
	int32_t t85 = 11637;

    t85 = (x437%(x438+(x439-x440)));

    if (t85 != 127) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint16_t x445 = 27795U;
	int8_t x446 = 12;
	uint8_t x447 = 9U;
	volatile uint8_t x448 = 1U;
	int32_t t86 = 58590889;

    t86 = (x445%(x446+(x447-x448)));

    if (t86 != 15) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x457 = 1026737489368230471LL;
	int16_t x458 = INT16_MIN;
	volatile int32_t x459 = -1;
	volatile int64_t x460 = INT64_MIN;
	static int64_t t87 = 122LL;

    t87 = (x457%(x458+(x459-x460)));

    if (t87 != 1026737489368230471LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile uint32_t x461 = 6700005U;
	static uint16_t x462 = 2U;
	static int64_t x463 = 217LL;

    t88 = (x461%(x462+(x463-x464)));

    if (t88 != 6700005LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x465 = 1;
	int32_t x466 = -1;
	int64_t x467 = INT64_MIN;
	int16_t x468 = -1;
	static volatile int64_t t89 = -6817456622LL;

    t89 = (x465%(x466+(x467-x468)));

    if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x473 = -1;
	static uint16_t x474 = 220U;
	static int8_t x475 = 1;
	int32_t x476 = 0;
	int32_t t90 = 77785284;

    t90 = (x473%(x474+(x475-x476)));

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	int32_t x477 = INT32_MAX;
	volatile int32_t x478 = -91;
	int32_t x479 = INT32_MAX;
	static int32_t t91 = 343536954;

    t91 = (x477%(x478+(x479-x480)));

    if (t91 != 36) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x482 = 27LL;
	int32_t x483 = INT32_MIN;
	int16_t x484 = INT16_MIN;
	volatile int64_t t92 = 526LL;

    t92 = (x481%(x482+(x483-x484)));

    if (t92 != -1LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x489 = 22100;
	int32_t x492 = -1;
	volatile int32_t t93 = 9;

    t93 = (x489%(x490+(x491-x492)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int64_t x498 = -1LL;
	static int16_t x499 = INT16_MAX;
	volatile uint64_t t94 = 6LLU;

    t94 = (x497%(x498+(x499-x500)));

    if (t94 != 14443LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x501 = 0;
	int16_t x503 = -1;

    t95 = (x501%(x502+(x503-x504)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	static int64_t x505 = INT64_MIN;
	int32_t x506 = INT32_MIN;
	uint32_t x507 = 195U;
	int64_t t96 = -137041663343LL;

    t96 = (x505%(x506+(x507-x508)));

    if (t96 != -76832LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x509 = 2U;
	uint16_t x510 = 173U;
	int64_t x511 = -1LL;
	uint64_t x512 = UINT64_MAX;
	volatile uint64_t t97 = 52949LLU;

    t97 = (x509%(x510+(x511-x512)));

    if (t97 != 2LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint16_t x513 = UINT16_MAX;
	int8_t x514 = -44;
	static int16_t x515 = -702;
	uint32_t x516 = 14701U;
	uint32_t t98 = 182U;

    t98 = (x513%(x514+(x515-x516)));

    if (t98 != 65535U) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint64_t x517 = UINT64_MAX;
	uint64_t x519 = 6213LLU;
	uint16_t x520 = UINT16_MAX;
	uint64_t t99 = 236438641656627LLU;

    t99 = (x517%(x518+(x519-x520)));

    if (t99 != 5202051LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int8_t x525 = INT8_MIN;
	int16_t x526 = -1;
	int8_t x527 = INT8_MAX;
	volatile int32_t t100 = 2645626;

    t100 = (x525%(x526+(x527-x528)));

    if (t100 != -128) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x529 = INT32_MAX;
	uint64_t x530 = 300843122210LLU;
	uint8_t x532 = 52U;
	volatile uint64_t t101 = 468248LLU;

    t101 = (x529%(x530+(x531-x532)));

    if (t101 != 2147483647LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x533 = 1;
	int8_t x535 = INT8_MIN;
	volatile int32_t t102 = 438897;

    t102 = (x533%(x534+(x535-x536)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x537 = INT16_MAX;
	uint32_t x538 = 903U;
	uint8_t x539 = 14U;
	uint16_t x540 = UINT16_MAX;
	uint32_t t103 = 71819305U;

    t103 = (x537%(x538+(x539-x540)));

    if (t103 != 32767U) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint32_t x541 = UINT32_MAX;
	static int8_t x542 = 0;
	uint32_t t104 = 3900762U;

    t104 = (x541%(x542+(x543-x544)));

    if (t104 != 118856753U) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x546 = 2252189833421990499LLU;
	int64_t x548 = INT64_MAX;
	volatile uint64_t t105 = 39165179241723228LLU;

    t105 = (x545%(x546+(x547-x548)));

    if (t105 != 6971182203432785180LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x550 = INT64_MIN;
	uint64_t x551 = 2455942741754957370LLU;
	uint8_t x552 = UINT8_MAX;

    t106 = (x549%(x550+(x551-x552)));

    if (t106 != 62LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x557 = 144003;
	uint8_t x558 = 88U;
	uint64_t x560 = 2166928170184LLU;
	volatile uint64_t t107 = 6673981LLU;

    t107 = (x557%(x558+(x559-x560)));

    if (t107 != 144003LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x561 = UINT16_MAX;
	int8_t x562 = 1;
	uint64_t x563 = 1034LLU;
	volatile int8_t x564 = INT8_MAX;
	volatile uint64_t t108 = 24797167724374665LLU;

    t108 = (x561%(x562+(x563-x564)));

    if (t108 != 159LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x565 = 0;
	int8_t x566 = INT8_MIN;
	static volatile int8_t x567 = INT8_MIN;
	int16_t x568 = INT16_MIN;

    t109 = (x565%(x566+(x567-x568)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int16_t x569 = INT16_MAX;
	int8_t x570 = -1;
	int32_t x571 = INT32_MIN;
	uint64_t x572 = UINT64_MAX;
	volatile uint64_t t110 = 47781693030269614LLU;

    t110 = (x569%(x570+(x571-x572)));

    if (t110 != 32767LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x574 = INT8_MIN;
	int8_t x575 = INT8_MIN;
	static uint64_t x576 = 1312885LLU;
	volatile uint64_t t111 = 2LLU;

    t111 = (x573%(x574+(x575-x576)));

    if (t111 != 2LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	uint16_t x577 = 2960U;
	static int32_t x578 = -1;
	volatile uint64_t x579 = UINT64_MAX;
	uint32_t x580 = 412009985U;
	volatile uint64_t t112 = 6329998213333380LLU;

    t112 = (x577%(x578+(x579-x580)));

    if (t112 != 2960LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int8_t x581 = 0;
	int8_t x582 = INT8_MAX;
	uint64_t x583 = 966000750LLU;
	int16_t x584 = INT16_MIN;
	volatile uint64_t t113 = 8790479LLU;

    t113 = (x581%(x582+(x583-x584)));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	uint32_t x585 = UINT32_MAX;
	uint64_t x586 = 1101LLU;
	static int8_t x587 = -1;
	int64_t x588 = INT64_MIN;
	volatile uint64_t t114 = 5478862LLU;

    t114 = (x585%(x586+(x587-x588)));

    if (t114 != 4294967295LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x589 = 542136542;
	uint16_t x590 = 1U;
	int32_t x592 = 1;
	static int32_t t115 = -98770;

    t115 = (x589%(x590+(x591-x592)));

    if (t115 != 143) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x593 = -1;
	volatile int64_t x594 = 11626607LL;
	uint8_t x595 = 1U;
	uint8_t x596 = 13U;
	volatile int64_t t116 = 232531119049300LL;

    t116 = (x593%(x594+(x595-x596)));

    if (t116 != -1LL) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint32_t x601 = UINT32_MAX;
	int16_t x602 = 0;
	int8_t x603 = INT8_MIN;
	uint32_t t117 = 174838521U;

    t117 = (x601%(x602+(x603-x604)));

    if (t117 != 255U) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x609 = -1;
	static int16_t x610 = INT16_MAX;
	int8_t x611 = 1;
	int32_t x612 = -1;
	volatile int32_t t118 = -1828;

    t118 = (x609%(x610+(x611-x612)));

    if (t118 != -1) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x614 = -676552;
	static uint32_t x616 = UINT32_MAX;
	volatile uint64_t t119 = 244LLU;

    t119 = (x613%(x614+(x615-x616)));

    if (t119 != 4295611080LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x617 = INT32_MIN;
	uint64_t x618 = 82918374LLU;
	int32_t x619 = INT32_MIN;

    t120 = (x617%(x618+(x619-x620)));

    if (t120 != 15191960LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x626 = -1LL;
	int16_t x627 = 127;
	static int32_t x628 = INT32_MAX;
	static volatile int64_t t121 = 975219578136LL;

    t121 = (x625%(x626+(x627-x628)));

    if (t121 != 92LL) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile int32_t x629 = -1;
	int64_t x630 = INT64_MIN;
	uint32_t x631 = 260018U;
	volatile int32_t x632 = INT32_MIN;
	volatile int64_t t122 = -9LL;

    t122 = (x629%(x630+(x631-x632)));

    if (t122 != -1LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x634 = 20;
	int32_t x635 = -1;
	int32_t t123 = -7480;

    t123 = (x633%(x634+(x635-x636)));

    if (t123 != -82) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x637 = INT8_MIN;
	int8_t x638 = INT8_MAX;
	int8_t x639 = INT8_MIN;
	volatile int32_t t124 = -602;

    t124 = (x637%(x638+(x639-x640)));

    if (t124 != -128) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x641 = 2;
	volatile int16_t x643 = 2940;
	int8_t x644 = 22;

    t125 = (x641%(x642+(x643-x644)));

    if (t125 != 2) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x645 = INT64_MIN;
	static volatile int16_t x647 = -5297;
	uint32_t x648 = UINT32_MAX;
	volatile int64_t t126 = 472415717649961LL;

    t126 = (x645%(x646+(x647-x648)));

    if (t126 != -2161510104LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x649 = 1;
	int32_t x651 = -1;
	int16_t x652 = 113;
	uint64_t t127 = 346621LLU;

    t127 = (x649%(x650+(x651-x652)));

    if (t127 != 1LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x653 = INT64_MIN;
	uint8_t x656 = 48U;
	int64_t t128 = -1339LL;

    t128 = (x653%(x654+(x655-x656)));

    if (t128 != -338LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x657 = -1LL;
	int32_t x658 = -438;
	static int16_t x659 = INT16_MIN;
	static volatile uint64_t x660 = 195692510868LLU;
	uint64_t t129 = 187LLU;

    t129 = (x657%(x658+(x659-x660)));

    if (t129 != 195692544073LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint32_t x661 = 569U;
	int64_t x662 = 198LL;
	int8_t x663 = -1;
	int32_t x664 = -3279124;
	volatile int64_t t130 = 1581144921263149544LL;

    t130 = (x661%(x662+(x663-x664)));

    if (t130 != 569LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static uint8_t x677 = 5U;
	volatile uint64_t x678 = 10552697309LLU;
	uint8_t x679 = 20U;
	volatile int8_t x680 = -1;
	volatile uint64_t t131 = 3481869592636575LLU;

    t131 = (x677%(x678+(x679-x680)));

    if (t131 != 5LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint32_t x681 = UINT32_MAX;
	int8_t x682 = 3;
	static volatile int16_t x683 = INT16_MIN;
	int16_t x684 = -105;

    t132 = (x681%(x682+(x683-x684)));

    if (t132 != 32659U) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x690 = -78760832982683LL;
	int16_t x691 = INT16_MIN;
	int32_t x692 = 1648320;

    t133 = (x689%(x690+(x691-x692)));

    if (t133 != -1LL) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile uint8_t x697 = 2U;
	int8_t x698 = INT8_MAX;
	uint32_t x699 = 11616919U;
	int64_t x700 = INT64_MAX;
	static int64_t t134 = 0LL;

    t134 = (x697%(x698+(x699-x700)));

    if (t134 != 2LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x702 = -25986345932LL;
	int32_t x703 = INT32_MIN;
	uint64_t x704 = 375LLU;
	uint64_t t135 = 4260571285LLU;

    t135 = (x701%(x702+(x703-x704)));

    if (t135 != 28133829935LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x705 = INT32_MAX;
	static volatile int8_t x706 = -1;
	volatile int8_t x707 = 0;

    t136 = (x705%(x706+(x707-x708)));

    if (t136 != 324766891LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x713 = -1;
	uint64_t x716 = UINT64_MAX;
	uint64_t t137 = 9191561740LLU;

    t137 = (x713%(x714+(x715-x716)));

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile uint16_t x717 = 24U;
	uint8_t x718 = UINT8_MAX;
	int32_t x719 = 36506;

    t138 = (x717%(x718+(x719-x720)));

    if (t138 != 24LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x721 = -8433681183951LL;
	static uint8_t x722 = 58U;
	static int8_t x723 = -1;
	uint8_t x724 = 19U;
	volatile int64_t t139 = -1040065206535995606LL;

    t139 = (x721%(x722+(x723-x724)));

    if (t139 != -1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint16_t x725 = UINT16_MAX;
	static uint8_t x726 = 1U;
	int8_t x727 = INT8_MIN;
	uint16_t x728 = 185U;
	int32_t t140 = -135;

    t140 = (x725%(x726+(x727-x728)));

    if (t140 != 15) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x729 = 246;
	static int8_t x730 = 57;
	volatile uint8_t x732 = 9U;
	uint64_t t141 = 5059266741443LLU;

    t141 = (x729%(x730+(x731-x732)));

    if (t141 != 46LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x734 = 370576104947249LL;
	volatile uint32_t x735 = 11832U;
	volatile int64_t t142 = -1530494088483759LL;

    t142 = (x733%(x734+(x735-x736)));

    if (t142 != 2147483647LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x737 = -2;
	int16_t x738 = INT16_MAX;
	int64_t x739 = INT64_MIN;
	uint64_t x740 = 452LLU;

    t143 = (x737%(x738+(x739-x740)));

    if (t143 != 9223372036854743491LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x742 = INT8_MAX;
	static int32_t x743 = INT32_MIN;
	uint64_t x744 = 124LLU;
	volatile uint64_t t144 = 1869909LLU;

    t144 = (x741%(x742+(x743-x744)));

    if (t144 != 16520602LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x746 = UINT8_MAX;
	static int32_t x747 = INT32_MIN;
	int32_t t145 = 209116657;

    t145 = (x745%(x746+(x747-x748)));

    if (t145 != -1) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x749 = INT32_MIN;
	static uint64_t x750 = 1443524397936LLU;
	volatile uint64_t x752 = 6261383951978386LLU;
	uint64_t t146 = 27252648LLU;

    t146 = (x749%(x750+(x751-x752)));

    if (t146 != 6259938280096751LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint8_t x753 = 54U;
	int64_t x754 = 162LL;
	uint8_t x755 = 1U;
	uint16_t x756 = UINT16_MAX;
	static int64_t t147 = 49027581LL;

    t147 = (x753%(x754+(x755-x756)));

    if (t147 != 54LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x761 = INT32_MIN;
	int16_t x762 = -8140;
	int8_t x763 = 3;
	int64_t x764 = 67740084LL;
	int64_t t148 = 0LL;

    t148 = (x761%(x762+(x763-x764)));

    if (t148 != -47288797LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x765 = INT64_MAX;
	uint64_t x766 = 739303300984850489LLU;
	static uint64_t x767 = 1471LLU;
	int16_t x768 = 13665;
	uint64_t t149 = 2LLU;

    t149 = (x765%(x766+(x767-x768)));

    if (t149 != 351732425036716267LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x769 = 345247LL;
	static uint16_t x770 = 98U;
	uint64_t x771 = 7331681452917LLU;
	volatile uint64_t t150 = 2821344178621803LLU;

    t150 = (x769%(x770+(x771-x772)));

    if (t150 != 345247LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x775 = -5204;
	volatile int32_t t151 = -562930704;

    t151 = (x773%(x774+(x775-x776)));

    if (t151 != 127) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x777 = INT64_MIN;
	static volatile int16_t x779 = INT16_MIN;
	volatile int64_t t152 = -385LL;

    t152 = (x777%(x778+(x779-x780)));

    if (t152 != -338LL) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x781 = 53U;
	uint32_t x782 = 13U;
	int32_t x783 = 0;
	int8_t x784 = 2;
	uint32_t t153 = 1U;

    t153 = (x781%(x782+(x783-x784)));

    if (t153 != 9U) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x787 = 21U;
	volatile uint32_t x788 = 1U;

    t154 = (x785%(x786+(x787-x788)));

    if (t154 != 397578739772LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint16_t x789 = 505U;
	static int8_t x790 = INT8_MIN;
	int64_t x791 = 240LL;
	int8_t x792 = -1;
	volatile int64_t t155 = 94628693704282761LL;

    t155 = (x789%(x790+(x791-x792)));

    if (t155 != 53LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x794 = UINT16_MAX;
	int16_t x795 = INT16_MIN;
	int32_t x796 = 2573;

    t156 = (x793%(x794+(x795-x796)));

    if (t156 != -128) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x797 = 0U;
	uint16_t x799 = UINT16_MAX;
	volatile int64_t t157 = -1LL;

    t157 = (x797%(x798+(x799-x800)));

    if (t157 != 0LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int32_t x801 = INT32_MIN;
	volatile int64_t x802 = INT64_MAX;
	static int16_t x803 = -1;
	int32_t x804 = 0;

    t158 = (x801%(x802+(x803-x804)));

    if (t158 != -2147483648LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x806 = 299;
	int8_t x807 = 1;
	volatile uint32_t x808 = UINT32_MAX;
	static volatile uint32_t t159 = 877837U;

    t159 = (x805%(x806+(x807-x808)));

    if (t159 != 1U) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint16_t x813 = 1U;
	uint16_t x814 = 2807U;
	static volatile uint64_t x816 = 560136286617686LLU;
	uint64_t t160 = 2968676LLU;

    t160 = (x813%(x814+(x815-x816)));

    if (t160 != 1LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int16_t x825 = -6;
	uint64_t t161 = 2218LLU;

    t161 = (x825%(x826+(x827-x828)));

    if (t161 != 315646725217LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x833 = 1169;
	uint16_t x834 = 3569U;
	int32_t x835 = -24182;
	volatile int16_t x836 = INT16_MIN;

    t162 = (x833%(x834+(x835-x836)));

    if (t162 != 1169) { NG(); } else { ; }
	
}

void f163(void) {
    	static int64_t x837 = INT64_MIN;
	uint64_t x838 = 4LLU;
	uint64_t x840 = 4558179873LLU;
	volatile uint64_t t163 = 4282833006823093538LLU;

    t163 = (x837%(x838+(x839-x840)));

    if (t163 != 4558179869LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x841 = UINT64_MAX;
	uint8_t x842 = 14U;
	volatile int8_t x843 = INT8_MIN;
	int8_t x844 = INT8_MAX;
	uint64_t t164 = 355878LLU;

    t164 = (x841%(x842+(x843-x844)));

    if (t164 != 240LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x845 = 3;
	int16_t x847 = 61;
	int64_t x848 = -1LL;
	volatile int64_t t165 = 3479321250323LL;

    t165 = (x845%(x846+(x847-x848)));

    if (t165 != 3LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint32_t x849 = UINT32_MAX;
	int16_t x850 = -2;
	int8_t x852 = INT8_MIN;
	volatile uint32_t t166 = 978U;

    t166 = (x849%(x850+(x851-x852)));

    if (t166 != 3U) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x855 = 1U;
	volatile int16_t x856 = INT16_MIN;
	static volatile uint64_t t167 = 1LLU;

    t167 = (x853%(x854+(x855-x856)));

    if (t167 != 14663954040950359LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x861 = INT16_MAX;
	volatile int16_t x862 = INT16_MAX;
	uint32_t x863 = 3714711U;
	uint16_t x864 = 2013U;
	static uint32_t t168 = 5876809U;

    t168 = (x861%(x862+(x863-x864)));

    if (t168 != 32767U) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x865 = UINT16_MAX;
	int16_t x866 = INT16_MIN;
	int8_t x867 = INT8_MIN;

    t169 = (x865%(x866+(x867-x868)));

    if (t169 != 32636) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x869 = 230U;
	static int64_t x870 = INT64_MIN;
	int32_t x871 = -1;
	int32_t x872 = -95676;
	int64_t t170 = 1122210182LL;

    t170 = (x869%(x870+(x871-x872)));

    if (t170 != 230LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x881 = 2U;
	int64_t x882 = 6602827LL;
	int8_t x884 = 2;
	int64_t t171 = 838038243934505479LL;

    t171 = (x881%(x882+(x883-x884)));

    if (t171 != 2LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x893 = -1;
	uint8_t x894 = UINT8_MAX;
	int8_t x895 = INT8_MIN;
	int32_t t172 = -1412;

    t172 = (x893%(x894+(x895-x896)));

    if (t172 != -1) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x901 = 7684939568038075675LLU;
	static int8_t x903 = 7;
	static volatile uint64_t t173 = 25108439855957700LLU;

    t173 = (x901%(x902+(x903-x904)));

    if (t173 != 7684939568038075675LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x905 = INT16_MIN;
	int8_t x906 = INT8_MAX;
	int64_t x908 = -15807LL;

    t174 = (x905%(x906+(x907-x908)));

    if (t174 != 341713154189LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x909 = INT16_MIN;
	uint64_t x910 = 118474LLU;
	volatile int16_t x911 = INT16_MIN;

    t175 = (x909%(x910+(x911-x912)));

    if (t175 != 1046812570LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x917 = 253U;
	volatile uint8_t x919 = 52U;
	volatile int64_t t176 = -494LL;

    t176 = (x917%(x918+(x919-x920)));

    if (t176 != 45LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x921 = INT16_MIN;
	static int32_t x923 = INT32_MIN;
	int32_t t177 = -1035613817;

    t177 = (x921%(x922+(x923-x924)));

    if (t177 != -32768) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x925 = -1;
	uint32_t x926 = 1902U;
	uint64_t x927 = 1LLU;
	uint64_t x928 = UINT64_MAX;
	static uint64_t t178 = 3486195924023477800LLU;

    t178 = (x925%(x926+(x927-x928)));

    if (t178 != 799LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x930 = -1;
	int32_t x931 = INT32_MIN;
	int32_t x932 = INT32_MIN;
	volatile uint64_t t179 = 58357LLU;

    t179 = (x929%(x930+(x931-x932)));

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x934 = -23;
	int64_t x935 = INT64_MIN;
	volatile int8_t x936 = INT8_MIN;
	int64_t t180 = 3175732512342LL;

    t180 = (x933%(x934+(x935-x936)));

    if (t180 != -528563552389719LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x937 = -32;
	uint8_t x938 = 6U;
	int64_t x939 = 7165084969LL;
	uint32_t x940 = UINT32_MAX;
	volatile int64_t t181 = 2184966730914LL;

    t181 = (x937%(x938+(x939-x940)));

    if (t181 != -32LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x941 = INT64_MAX;
	static int32_t x943 = INT32_MIN;
	int8_t x944 = INT8_MIN;

    t182 = (x941%(x942+(x943-x944)));

    if (t182 != 32257LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x949 = INT32_MIN;
	int16_t x950 = -5;
	static int8_t x952 = INT8_MAX;
	volatile int32_t t183 = -202;

    t183 = (x949%(x950+(x951-x952)));

    if (t183 != -79) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x957 = -59528431906359964LL;
	static uint64_t x958 = UINT64_MAX;
	int64_t x959 = -1LL;
	int32_t x960 = INT32_MIN;
	static volatile uint64_t t184 = 184264664185765465LLU;

    t184 = (x957%(x958+(x959-x960)));

    if (t184 != 1591837254LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static volatile uint64_t x962 = 62191439LLU;
	int64_t x963 = -1LL;
	int16_t x964 = INT16_MAX;

    t185 = (x961%(x962+(x963-x964)));

    if (t185 != 41784890LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int16_t x969 = INT16_MAX;
	int16_t x971 = INT16_MIN;
	volatile uint64_t t186 = 26819LLU;

    t186 = (x969%(x970+(x971-x972)));

    if (t186 != 32767LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x973 = 6905U;
	uint8_t x975 = 29U;
	uint8_t x976 = UINT8_MAX;
	volatile uint64_t t187 = 33054516186063LLU;

    t187 = (x973%(x974+(x975-x976)));

    if (t187 != 6905LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x977 = INT8_MAX;
	uint32_t x978 = 1U;
	volatile uint32_t x979 = 17699U;
	static int32_t x980 = INT32_MIN;
	uint32_t t188 = 45375272U;

    t188 = (x977%(x978+(x979-x980)));

    if (t188 != 127U) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x981 = 62U;
	int8_t x982 = -1;
	uint32_t x983 = 36393U;

    t189 = (x981%(x982+(x983-x984)));

    if (t189 != 62U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x985 = INT16_MIN;
	volatile uint32_t x986 = UINT32_MAX;
	int32_t x987 = INT32_MIN;
	int32_t x988 = INT32_MIN;
	uint32_t t190 = 6U;

    t190 = (x985%(x986+(x987-x988)));

    if (t190 != 4294934528U) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile uint32_t x989 = 87181U;
	int16_t x990 = 7;
	uint16_t x991 = 4U;
	int8_t x992 = -1;
	uint32_t t191 = 885U;

    t191 = (x989%(x990+(x991-x992)));

    if (t191 != 1U) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x993 = UINT16_MAX;
	volatile uint32_t x994 = UINT32_MAX;
	uint8_t x996 = 2U;

    t192 = (x993%(x994+(x995-x996)));

    if (t192 != 1411U) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x998 = -1;
	static int8_t x999 = -1;
	volatile uint32_t x1000 = 122U;
	static int64_t t193 = -6272241648515LL;

    t193 = (x997%(x998+(x999-x1000)));

    if (t193 != 3589456899LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1005 = INT16_MAX;
	int8_t x1006 = -1;
	static uint16_t x1007 = 29063U;
	int32_t t194 = -1087163;

    t194 = (x1005%(x1006+(x1007-x1008)));

    if (t194 != 3577) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1013 = INT64_MIN;
	int16_t x1014 = -61;
	uint64_t x1015 = 70627LLU;
	int64_t x1016 = INT64_MIN;
	uint64_t t195 = 649638067LLU;

    t195 = (x1013%(x1014+(x1015-x1016)));

    if (t195 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int8_t x1021 = INT8_MIN;
	uint16_t x1022 = 13050U;
	uint8_t x1023 = UINT8_MAX;
	static int16_t x1024 = INT16_MIN;

    t196 = (x1021%(x1022+(x1023-x1024)));

    if (t196 != -128) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint8_t x1025 = UINT8_MAX;
	int64_t x1028 = -1LL;
	volatile int64_t t197 = -383LL;

    t197 = (x1025%(x1026+(x1027-x1028)));

    if (t197 != 255LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1029 = 50;
	static int8_t x1030 = -21;
	uint32_t x1031 = 3545U;
	uint64_t x1032 = 2873LLU;
	uint64_t t198 = 55LLU;

    t198 = (x1029%(x1030+(x1031-x1032)));

    if (t198 != 50LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x1037 = 49U;
	volatile int64_t x1038 = 576242175LL;
	uint16_t x1039 = 17090U;
	uint32_t x1040 = 1418000U;
	static int64_t t199 = 33219860LL;

    t199 = (x1037%(x1038+(x1039-x1040)));

    if (t199 != 49LL) { NG(); } else { ; }
	
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

