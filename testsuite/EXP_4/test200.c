
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

static uint16_t x1 = 4254U;
int64_t x5 = INT64_MIN;
static volatile int64_t x6 = INT64_MIN;
int64_t x9 = 0LL;
int8_t x11 = INT8_MAX;
uint16_t x20 = UINT16_MAX;
uint32_t x21 = 505U;
int64_t x24 = -30621821772789LL;
static int32_t x25 = INT32_MAX;
static uint16_t x28 = 1U;
int16_t x50 = INT16_MIN;
uint64_t x58 = 6116LLU;
volatile int8_t x62 = 8;
int8_t x86 = INT8_MAX;
volatile int16_t x87 = INT16_MIN;
volatile uint64_t t17 = 1621962708072LLU;
static int16_t x96 = -1;
static volatile uint64_t t18 = 1034972069108548LLU;
int32_t x97 = 44;
static uint64_t t19 = 849902997496LLU;
static volatile int16_t x105 = -1;
int8_t x129 = -9;
int16_t x132 = 2;
static int32_t t24 = -186;
volatile int16_t x141 = INT16_MIN;
static uint16_t x142 = UINT16_MAX;
uint8_t x154 = 37U;
int8_t x158 = -1;
uint64_t x164 = 87993LLU;
static int32_t x170 = -1;
int16_t x172 = -1;
int32_t t31 = 117;
volatile int8_t x184 = INT8_MIN;
int16_t x198 = -951;
int8_t x199 = INT8_MAX;
static uint16_t x207 = 87U;
volatile int16_t x208 = -1;
uint32_t x211 = 31310465U;
volatile int32_t x212 = 19404;
static uint8_t x217 = 1U;
int32_t x222 = INT32_MIN;
int16_t x224 = -276;
int32_t x231 = -139;
static int64_t x235 = 4092138LL;
int64_t x241 = 1551460153132987066LL;
uint32_t x242 = 573105U;
static uint16_t x246 = 0U;
int16_t x249 = INT16_MIN;
volatile int8_t x264 = INT8_MIN;
int16_t x267 = INT16_MAX;
int32_t t50 = -26099761;
uint32_t x271 = 2823U;
uint32_t x274 = 0U;
uint16_t x281 = 2019U;
static int8_t x282 = INT8_MIN;
static uint64_t x289 = UINT64_MAX;
uint64_t x290 = 7593LLU;
uint64_t t58 = 8714620275662617913LLU;
int8_t x311 = INT8_MAX;
int64_t x317 = 380094736LL;
volatile uint64_t x319 = 146569704342LLU;
int16_t x320 = -1;
uint64_t t60 = 629724969LLU;
static int8_t x325 = INT8_MAX;
int16_t x337 = -1;
int32_t x340 = 12569;
int32_t t64 = 999;
int32_t x344 = -1;
uint8_t x348 = UINT8_MAX;
int16_t x349 = -1;
int32_t x353 = 1;
volatile uint32_t x356 = 142114638U;
volatile uint32_t t68 = 99U;
volatile int32_t x357 = INT32_MIN;
int8_t x359 = INT8_MIN;
volatile int32_t t69 = 64965557;
uint16_t x364 = 1145U;
int16_t x367 = 6;
int32_t x370 = INT32_MAX;
static volatile int8_t x379 = -1;
int8_t x380 = INT8_MIN;
volatile int8_t x386 = -6;
int64_t x389 = -1LL;
int8_t x390 = INT8_MIN;
int8_t x391 = INT8_MIN;
int16_t x393 = INT16_MIN;
volatile int64_t t77 = -366280841LL;
int16_t x403 = -1;
static int8_t x404 = INT8_MIN;
int8_t x406 = INT8_MIN;
int8_t x410 = INT8_MIN;
volatile int64_t t80 = -11945468898LL;
static int32_t x418 = -229;
uint8_t x420 = UINT8_MAX;
int64_t x423 = -1LL;
uint64_t t82 = 756707777668LLU;
volatile int8_t x436 = INT8_MIN;
volatile int16_t x447 = INT16_MIN;
uint8_t x448 = 16U;
volatile uint32_t t87 = 250362U;
volatile int64_t x457 = INT64_MIN;
uint32_t x468 = UINT32_MAX;
int16_t x476 = -1;
int32_t x478 = INT32_MAX;
static volatile int64_t x480 = INT64_MIN;
static int64_t x486 = 904971673737156201LL;
int16_t x488 = -1;
volatile int64_t t94 = 1719518LL;
static int16_t x492 = -16303;
int8_t x495 = 19;
static volatile uint64_t t96 = 875888708186095428LLU;
int32_t x497 = INT32_MIN;
int64_t t97 = 3739643169LL;
uint64_t x506 = 27318934164029LLU;
int32_t x508 = 6343;
volatile uint64_t t98 = 61101142LLU;
volatile int8_t x511 = INT8_MIN;
static volatile uint32_t t99 = 903U;
int8_t x513 = INT8_MIN;
int16_t x515 = 8476;
int32_t x516 = INT32_MAX;
int8_t x518 = 1;
uint64_t x520 = 41858022775828465LLU;
volatile int64_t x522 = 62127LL;
volatile int16_t x531 = INT16_MAX;
int8_t x537 = INT8_MIN;
uint64_t x538 = 89834LLU;
volatile uint32_t x540 = 3U;
int32_t x541 = INT32_MIN;
int32_t x550 = -11595346;
uint32_t x551 = UINT32_MAX;
static int16_t x552 = INT16_MIN;
static int32_t x557 = INT32_MIN;
uint32_t x559 = UINT32_MAX;
int8_t x560 = 0;
uint64_t x565 = 73LLU;
int16_t x568 = -704;
volatile uint64_t t113 = 3516697867199LLU;
int16_t x584 = INT16_MIN;
static uint16_t x605 = 7U;
static int16_t x606 = INT16_MIN;
uint64_t x608 = 322569380128549LLU;
volatile int64_t t122 = 39961281595LL;
int8_t x616 = 1;
int64_t x619 = 3431389010774LL;
int32_t x634 = 22631313;
volatile uint16_t x636 = 18319U;
int64_t x637 = INT64_MIN;
int8_t x657 = -2;
static int32_t x660 = 0;
int64_t x665 = INT64_MAX;
uint64_t x669 = UINT64_MAX;
uint8_t x672 = 3U;
uint64_t t135 = 1LLU;
int8_t x678 = 10;
int16_t x683 = -1;
int16_t x710 = -318;
int16_t x711 = INT16_MIN;
int8_t x712 = 61;
volatile uint16_t x720 = UINT16_MAX;
static volatile int16_t x736 = INT16_MIN;
volatile int8_t x738 = -2;
uint64_t x739 = UINT64_MAX;
volatile int32_t x757 = -1;
uint16_t x761 = UINT16_MAX;
int8_t x764 = -1;
volatile int16_t x778 = INT16_MIN;
volatile int32_t x781 = INT32_MIN;
static int16_t x786 = 14668;
static int32_t x793 = INT32_MAX;
int64_t x796 = 17650383950LL;
static volatile int16_t x798 = 0;
static volatile int64_t t158 = -370LL;
static int64_t x811 = -4LL;
int16_t x822 = INT16_MIN;
int64_t x823 = -53LL;
int64_t x824 = -26927914717543LL;
int32_t t166 = 236093;
uint32_t x842 = 33U;
int16_t x854 = -1;
volatile uint64_t x861 = 3243550200LLU;
uint64_t t170 = 151621374858LLU;
int16_t x866 = 5161;
static int32_t x870 = INT32_MAX;
uint32_t x879 = 444U;
static volatile int64_t t174 = 175333921404014LL;
int32_t x881 = INT32_MAX;
int64_t x882 = -133638334587422383LL;
int64_t t176 = 241110608684620750LL;
static uint64_t x893 = 2511359412328451104LLU;
uint8_t x896 = UINT8_MAX;
static int8_t x898 = -1;
int64_t x900 = 63297470LL;
volatile int64_t t178 = -8392026986LL;
int32_t x903 = 10692;
volatile uint32_t x904 = 3U;
int8_t x909 = 21;
int64_t x917 = INT64_MAX;
uint16_t x924 = 6U;
uint32_t x928 = 2U;
volatile int32_t x935 = INT32_MIN;
volatile int16_t x936 = -1;
uint32_t t185 = 244263482U;
int32_t x941 = -1;
static uint32_t x943 = 2U;
volatile int32_t t189 = -6231;
int32_t x962 = INT32_MIN;
volatile uint64_t t190 = 7258943867LLU;
volatile uint64_t t191 = 30LLU;
volatile int16_t x975 = 0;
int32_t t193 = -1;
volatile int64_t x978 = 71264503774692686LL;
uint16_t x982 = UINT16_MAX;
uint8_t x988 = 56U;
volatile uint64_t t196 = 8336185090LLU;
static int64_t x998 = -1LL;


void f0(void) {
    	int8_t x2 = -1;
	int32_t x3 = -1;
	uint16_t x4 = 144U;
	int32_t t0 = -172015;

    t0 = (x1/(x2+(x3-x4)));

    if (t0 != -29) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x7 = 13U;
	static int16_t x8 = -19;
	volatile int64_t t1 = 110373817LL;

    t1 = (x5/(x6+(x7-x8)));

    if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x10 = 1342645366LLU;
	uint16_t x12 = UINT16_MAX;
	uint64_t t2 = 96323LLU;

    t2 = (x9/(x10+(x11-x12)));

    if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = 0LL;
	volatile int32_t x18 = 808;
	int32_t x19 = 1;
	volatile int64_t t3 = -793518153LL;

    t3 = (x17/(x18+(x19-x20)));

    if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x22 = -1;
	static uint32_t x23 = 78835U;
	int64_t t4 = -21567451871LL;

    t4 = (x21/(x22+(x23-x24)));

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x26 = 10493LLU;
	volatile int8_t x27 = INT8_MIN;
	static volatile uint64_t t5 = 21519502LLU;

    t5 = (x25/(x26+(x27-x28)));

    if (t5 != 207206LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x33 = UINT32_MAX;
	int16_t x34 = INT16_MIN;
	volatile int8_t x35 = INT8_MIN;
	int8_t x36 = INT8_MAX;
	static uint32_t t6 = 1014149U;

    t6 = (x33/(x34+(x35-x36)));

    if (t6 != 1U) { NG(); } else { ; }
	
}

void f7(void) {
    	static int8_t x37 = 1;
	volatile int8_t x38 = INT8_MAX;
	int16_t x39 = 17;
	volatile int32_t x40 = INT32_MAX;
	int32_t t7 = -512;

    t7 = (x37/(x38+(x39-x40)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x41 = -2;
	int16_t x42 = 3971;
	volatile int32_t x43 = 1;
	int8_t x44 = 1;
	int32_t t8 = -1024346115;

    t8 = (x41/(x42+(x43-x44)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x45 = -1LL;
	uint8_t x46 = UINT8_MAX;
	int64_t x47 = -27567776LL;
	volatile uint64_t x48 = 9403264080859370LLU;
	volatile uint64_t t9 = 50LLU;

    t9 = (x45/(x46+(x47-x48)));

    if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x49 = 735;
	int16_t x51 = INT16_MAX;
	uint8_t x52 = 62U;
	volatile int32_t t10 = 3179170;

    t10 = (x49/(x50+(x51-x52)));

    if (t10 != -11) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x57 = 750LLU;
	int16_t x59 = 122;
	int16_t x60 = INT16_MAX;
	volatile uint64_t t11 = 40447297990LLU;

    t11 = (x57/(x58+(x59-x60)));

    if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x61 = UINT8_MAX;
	volatile int8_t x63 = 54;
	static int32_t x64 = 6;
	int32_t t12 = -12094118;

    t12 = (x61/(x62+(x63-x64)));

    if (t12 != 4) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x65 = 12LLU;
	volatile int8_t x66 = INT8_MIN;
	volatile int16_t x67 = 29;
	int64_t x68 = -28188918LL;
	static volatile uint64_t t13 = 187089248118252240LLU;

    t13 = (x65/(x66+(x67-x68)));

    if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static uint64_t x69 = UINT64_MAX;
	static volatile int64_t x70 = 58618052123231262LL;
	int8_t x71 = INT8_MIN;
	int64_t x72 = -1LL;
	volatile uint64_t t14 = 82510359LLU;

    t14 = (x69/(x70+(x71-x72)));

    if (t14 != 314LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x77 = INT8_MAX;
	int64_t x78 = -4889740159LL;
	int32_t x79 = -5;
	int32_t x80 = -1880;
	volatile int64_t t15 = 802473719923130LL;

    t15 = (x77/(x78+(x79-x80)));

    if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x81 = INT8_MAX;
	uint64_t x82 = UINT64_MAX;
	int64_t x83 = -1LL;
	uint16_t x84 = 2U;
	volatile uint64_t t16 = 1084514219324413LLU;

    t16 = (x81/(x82+(x83-x84)));

    if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x85 = UINT64_MAX;
	volatile int8_t x88 = 21;

    t17 = (x85/(x86+(x87-x88)));

    if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x93 = -3513;
	volatile uint64_t x94 = 43476112LLU;
	int32_t x95 = 186507453;

    t18 = (x93/(x94+(x95-x96)));

    if (t18 != 80208966208LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x98 = 4;
	uint16_t x99 = UINT16_MAX;
	uint64_t x100 = 2375607359128783LLU;

    t19 = (x97/(x98+(x99-x100)));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x106 = -18;
	int32_t x107 = -6;
	static int16_t x108 = -1;
	volatile int32_t t20 = 236;

    t20 = (x105/(x106+(x107-x108)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int64_t x109 = INT64_MAX;
	int16_t x110 = -1;
	int16_t x111 = 456;
	static volatile uint8_t x112 = UINT8_MAX;
	int64_t t21 = -2021137971261569364LL;

    t21 = (x109/(x110+(x111-x112)));

    if (t21 != 46116860184273879LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint64_t x117 = 1799185635LLU;
	uint32_t x118 = UINT32_MAX;
	int16_t x119 = 3016;
	int32_t x120 = -300350712;
	static uint64_t t22 = 7707819827091719LLU;

    t22 = (x117/(x118+(x119-x120)));

    if (t22 != 5LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x130 = 0;
	uint32_t x131 = 6U;
	static volatile uint32_t t23 = 6U;

    t23 = (x129/(x130+(x131-x132)));

    if (t23 != 1073741821U) { NG(); } else { ; }
	
}

void f24(void) {
    	static volatile int32_t x133 = INT32_MIN;
	uint8_t x134 = UINT8_MAX;
	volatile int16_t x135 = INT16_MIN;
	int32_t x136 = INT32_MIN;

    t24 = (x133/(x134+(x135-x136)));

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x137 = INT32_MAX;
	int16_t x138 = INT16_MAX;
	volatile int8_t x139 = INT8_MIN;
	static int32_t x140 = -1392776;
	int32_t t25 = 6587804;

    t25 = (x137/(x138+(x139-x140)));

    if (t25 != 1506) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x143 = INT16_MIN;
	int8_t x144 = INT8_MAX;
	int32_t t26 = 0;

    t26 = (x141/(x142+(x143-x144)));

    if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x153 = INT64_MAX;
	uint32_t x155 = UINT32_MAX;
	int8_t x156 = INT8_MIN;
	static volatile int64_t t27 = -1517004606070520534LL;

    t27 = (x153/(x154+(x155-x156)));

    if (t27 != 56240073395455950LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x157 = 4U;
	int32_t x159 = 236;
	int16_t x160 = -1;
	int32_t t28 = -620680;

    t28 = (x157/(x158+(x159-x160)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x161 = 417108202LLU;
	uint16_t x162 = UINT16_MAX;
	int8_t x163 = -17;
	uint64_t t29 = 10475LLU;

    t29 = (x161/(x162+(x163-x164)));

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x165 = UINT64_MAX;
	volatile int32_t x166 = INT32_MIN;
	int32_t x167 = INT32_MAX;
	uint32_t x168 = 0U;
	static volatile uint64_t t30 = 28120982771LLU;

    t30 = (x165/(x166+(x167-x168)));

    if (t30 != 4294967297LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static int8_t x169 = INT8_MAX;
	int16_t x171 = INT16_MIN;

    t31 = (x169/(x170+(x171-x172)));

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x173 = INT16_MIN;
	int16_t x174 = INT16_MIN;
	int16_t x175 = INT16_MAX;
	int8_t x176 = 0;
	volatile int32_t t32 = -998;

    t32 = (x173/(x174+(x175-x176)));

    if (t32 != 32768) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int8_t x177 = -24;
	int32_t x178 = INT32_MIN;
	int8_t x179 = INT8_MAX;
	volatile uint16_t x180 = 22U;
	static volatile int32_t t33 = -82423364;

    t33 = (x177/(x178+(x179-x180)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x181 = INT32_MIN;
	static int8_t x182 = -1;
	uint8_t x183 = UINT8_MAX;
	int32_t t34 = -231213;

    t34 = (x181/(x182+(x183-x184)));

    if (t34 != -5621684) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x197 = INT16_MIN;
	uint64_t x200 = 99LLU;
	uint64_t t35 = 0LLU;

    t35 = (x197/(x198+(x199-x200)));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x201 = INT32_MAX;
	uint8_t x202 = UINT8_MAX;
	int16_t x203 = INT16_MAX;
	uint16_t x204 = UINT16_MAX;
	int32_t t36 = 0;

    t36 = (x201/(x202+(x203-x204)));

    if (t36 != -66049) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x205 = UINT32_MAX;
	int64_t x206 = -1LL;
	int64_t t37 = -13690LL;

    t37 = (x205/(x206+(x207-x208)));

    if (t37 != 49367440LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x209 = 63541056873447706LLU;
	int8_t x210 = 1;
	volatile uint64_t t38 = 675217341LLU;

    t38 = (x209/(x210+(x211-x212)));

    if (t38 != 2030645584LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x218 = -952264;
	uint8_t x219 = 14U;
	uint8_t x220 = 7U;
	static volatile int32_t t39 = -1;

    t39 = (x217/(x218+(x219-x220)));

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x221 = -4;
	int16_t x223 = -1;
	int32_t t40 = -204710009;

    t40 = (x221/(x222+(x223-x224)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x229 = INT32_MIN;
	int32_t x230 = -15;
	static int8_t x232 = 0;
	volatile int32_t t41 = -226666;

    t41 = (x229/(x230+(x231-x232)));

    if (t41 != 13944699) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x233 = -122692;
	static volatile int64_t x234 = 3072365LL;
	uint64_t x236 = 32605983LLU;
	uint64_t t42 = 7LLU;

    t42 = (x233/(x234+(x235-x236)));

    if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int32_t x237 = -1;
	int8_t x238 = -28;
	int32_t x239 = INT32_MAX;
	uint16_t x240 = 0U;
	int32_t t43 = -2160;

    t43 = (x237/(x238+(x239-x240)));

    if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x243 = INT16_MIN;
	int32_t x244 = 825897542;
	volatile int64_t t44 = -902409610276LL;

    t44 = (x241/(x242+(x243-x244)));

    if (t44 != 447156917LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint64_t x245 = UINT64_MAX;
	int8_t x247 = INT8_MIN;
	uint16_t x248 = 163U;
	static volatile uint64_t t45 = 7827620821LLU;

    t45 = (x245/(x246+(x247-x248)));

    if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x250 = 430U;
	uint16_t x251 = 6U;
	int16_t x252 = 0;
	volatile int32_t t46 = -6571;

    t46 = (x249/(x250+(x251-x252)));

    if (t46 != -75) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x253 = -2;
	volatile uint16_t x254 = 23U;
	int16_t x255 = 1;
	static volatile int8_t x256 = -1;
	int32_t t47 = -5238;

    t47 = (x253/(x254+(x255-x256)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int32_t x257 = INT32_MIN;
	volatile uint8_t x258 = UINT8_MAX;
	int8_t x259 = 0;
	volatile int8_t x260 = 0;
	volatile int32_t t48 = 6;

    t48 = (x257/(x258+(x259-x260)));

    if (t48 != -8421504) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint64_t x261 = 11LLU;
	int64_t x262 = 371861546070797313LL;
	uint64_t x263 = 122208593548LLU;
	static uint64_t t49 = 46803990431LLU;

    t49 = (x261/(x262+(x263-x264)));

    if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint16_t x265 = 3917U;
	static uint8_t x266 = 21U;
	static uint16_t x268 = 211U;

    t50 = (x265/(x266+(x267-x268)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x269 = INT64_MIN;
	static int8_t x270 = -1;
	volatile int16_t x272 = INT16_MIN;
	volatile int64_t t51 = 1389593583852676458LL;

    t51 = (x269/(x270+(x271-x272)));

    if (t51 != -259156280889428LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint16_t x273 = 0U;
	uint32_t x275 = UINT32_MAX;
	uint16_t x276 = 12U;
	uint32_t t52 = 346029735U;

    t52 = (x273/(x274+(x275-x276)));

    if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x277 = 83U;
	int8_t x278 = INT8_MIN;
	static uint32_t x279 = 11U;
	uint32_t x280 = UINT32_MAX;
	static volatile uint32_t t53 = 1194276365U;

    t53 = (x277/(x278+(x279-x280)));

    if (t53 != 0U) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x283 = 1159;
	volatile int32_t x284 = 54978;
	volatile int32_t t54 = -41120;

    t54 = (x281/(x282+(x283-x284)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x291 = -64436959;
	int8_t x292 = INT8_MIN;
	volatile uint64_t t55 = 713832LLU;

    t55 = (x289/(x290+(x291-x292)));

    if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x293 = INT16_MIN;
	int16_t x294 = 91;
	uint8_t x295 = 3U;
	static int16_t x296 = INT16_MIN;
	volatile int32_t t56 = 199;

    t56 = (x293/(x294+(x295-x296)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x301 = UINT64_MAX;
	int64_t x302 = 10LL;
	volatile int8_t x303 = INT8_MIN;
	int32_t x304 = -495;
	uint64_t t57 = 90LLU;

    t57 = (x301/(x302+(x303-x304)));

    if (t57 != 48930355633181834LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x305 = INT8_MIN;
	int8_t x306 = -1;
	int32_t x307 = INT32_MIN;
	uint64_t x308 = UINT64_MAX;

    t58 = (x305/(x306+(x307-x308)));

    if (t58 != 1LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int16_t x309 = INT16_MIN;
	int64_t x310 = -1LL;
	int16_t x312 = INT16_MIN;
	volatile int64_t t59 = 1143639LL;

    t59 = (x309/(x310+(x311-x312)));

    if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x318 = INT8_MIN;

    t60 = (x317/(x318+(x319-x320)));

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x326 = INT8_MIN;
	volatile uint32_t x327 = 13725U;
	int32_t x328 = INT32_MAX;
	volatile uint32_t t61 = 356497U;

    t61 = (x325/(x326+(x327-x328)));

    if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int32_t x329 = INT32_MIN;
	uint16_t x330 = UINT16_MAX;
	int8_t x331 = -52;
	uint8_t x332 = UINT8_MAX;
	int32_t t62 = 706765;

    t62 = (x329/(x330+(x331-x332)));

    if (t62 != -32922) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x333 = -1;
	uint16_t x334 = UINT16_MAX;
	int32_t x335 = INT32_MIN;
	volatile int8_t x336 = INT8_MIN;
	volatile int32_t t63 = -226962;

    t63 = (x333/(x334+(x335-x336)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x338 = -1;
	int8_t x339 = INT8_MIN;

    t64 = (x337/(x338+(x339-x340)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int64_t x341 = -349394852621142LL;
	uint64_t x342 = 3826276595381753226LLU;
	static int8_t x343 = -1;
	volatile uint64_t t65 = 2838569226LLU;

    t65 = (x341/(x342+(x343-x344)));

    if (t65 != 4LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x345 = UINT16_MAX;
	int8_t x346 = 10;
	uint32_t x347 = UINT32_MAX;
	volatile uint32_t t66 = 7888172U;

    t66 = (x345/(x346+(x347-x348)));

    if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
    	int8_t x350 = 1;
	int16_t x351 = INT16_MIN;
	static volatile int64_t x352 = INT64_MIN;
	int64_t t67 = 1LL;

    t67 = (x349/(x350+(x351-x352)));

    if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x354 = INT32_MAX;
	int16_t x355 = 12;

    t68 = (x353/(x354+(x355-x356)));

    if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x358 = INT16_MAX;
	uint8_t x360 = 2U;

    t69 = (x357/(x358+(x359-x360)));

    if (t69 != -65799) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint32_t x361 = 71U;
	static int8_t x362 = INT8_MIN;
	static uint32_t x363 = UINT32_MAX;
	static volatile uint32_t t70 = 4066113U;

    t70 = (x361/(x362+(x363-x364)));

    if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x365 = INT32_MIN;
	static uint32_t x366 = UINT32_MAX;
	volatile int64_t x368 = -1LL;
	volatile int64_t t71 = 7970LL;

    t71 = (x365/(x366+(x367-x368)));

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint64_t x369 = 132492076786313LLU;
	int8_t x371 = INT8_MAX;
	static uint8_t x372 = UINT8_MAX;
	volatile uint64_t t72 = 81247LLU;

    t72 = (x369/(x370+(x371-x372)));

    if (t72 != 61696LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	uint32_t x373 = 15U;
	int32_t x374 = -1;
	int16_t x375 = 70;
	uint64_t x376 = UINT64_MAX;
	uint64_t t73 = 77270955LLU;

    t73 = (x373/(x374+(x375-x376)));

    if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x377 = UINT8_MAX;
	int32_t x378 = 4835;
	static volatile int32_t t74 = -35418;

    t74 = (x377/(x378+(x379-x380)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x385 = INT8_MIN;
	volatile int8_t x387 = INT8_MIN;
	static int16_t x388 = 9308;
	volatile int32_t t75 = 1319;

    t75 = (x385/(x386+(x387-x388)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int8_t x392 = -15;
	int64_t t76 = 12002541065LL;

    t76 = (x389/(x390+(x391-x392)));

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int16_t x394 = INT16_MAX;
	volatile int64_t x395 = 4LL;
	volatile int16_t x396 = INT16_MIN;

    t77 = (x393/(x394+(x395-x396)));

    if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x401 = 8U;
	static int32_t x402 = -1;
	int32_t t78 = -15969;

    t78 = (x401/(x402+(x403-x404)));

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x405 = INT16_MIN;
	int32_t x407 = -15588;
	uint64_t x408 = 89526LLU;
	static volatile uint64_t t79 = 768720851264184244LLU;

    t79 = (x405/(x406+(x407-x408)));

    if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x409 = -1LL;
	volatile uint16_t x411 = UINT16_MAX;
	volatile uint8_t x412 = UINT8_MAX;

    t80 = (x409/(x410+(x411-x412)));

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x417 = 116U;
	int16_t x419 = INT16_MIN;
	volatile uint32_t t81 = 4U;

    t81 = (x417/(x418+(x419-x420)));

    if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x421 = UINT64_MAX;
	static uint8_t x422 = UINT8_MAX;
	int16_t x424 = -30;

    t82 = (x421/(x422+(x423-x424)));

    if (t82 != 64953324203202646LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint32_t x433 = 31905U;
	static int8_t x434 = -1;
	uint64_t x435 = 1636374LLU;
	uint64_t t83 = 446749LLU;

    t83 = (x433/(x434+(x435-x436)));

    if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile uint32_t x437 = 2U;
	uint32_t x438 = 1830970009U;
	int8_t x439 = INT8_MIN;
	static uint64_t x440 = 187006LLU;
	static uint64_t t84 = 18906478LLU;

    t84 = (x437/(x438+(x439-x440)));

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int64_t x445 = -1LL;
	int16_t x446 = INT16_MIN;
	volatile int64_t t85 = -1LL;

    t85 = (x445/(x446+(x447-x448)));

    if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x449 = INT8_MAX;
	int8_t x450 = -1;
	int64_t x451 = -1LL;
	uint64_t x452 = 791539LLU;
	uint64_t t86 = 288185890793441099LLU;

    t86 = (x449/(x450+(x451-x452)));

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x453 = -1;
	uint32_t x454 = 714190742U;
	volatile int32_t x455 = INT32_MIN;
	uint32_t x456 = UINT32_MAX;

    t87 = (x453/(x454+(x455-x456)));

    if (t87 != 1U) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x458 = INT16_MIN;
	int32_t x459 = -1;
	uint32_t x460 = 28382701U;
	volatile int64_t t88 = 15582LL;

    t88 = (x457/(x458+(x459-x460)));

    if (t88 != -2161786007LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint16_t x461 = UINT16_MAX;
	uint64_t x462 = UINT64_MAX;
	uint16_t x463 = 394U;
	int32_t x464 = -334;
	volatile uint64_t t89 = 903436110190LLU;

    t89 = (x461/(x462+(x463-x464)));

    if (t89 != 90LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile uint32_t x465 = 1073230611U;
	uint8_t x466 = 0U;
	volatile uint16_t x467 = UINT16_MAX;
	uint32_t t90 = 432923165U;

    t90 = (x465/(x466+(x467-x468)));

    if (t90 != 16376U) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x469 = 2680062277526904438LL;
	int64_t x470 = 6698133LL;
	int64_t x471 = -821596413960LL;
	int64_t x472 = 1231LL;
	volatile int64_t t91 = 480840LL;

    t91 = (x469/(x470+(x471-x472)));

    if (t91 != -3262044LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile uint16_t x473 = 7973U;
	int32_t x474 = INT32_MIN;
	uint32_t x475 = 6067U;
	uint32_t t92 = 158765U;

    t92 = (x473/(x474+(x475-x476)));

    if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
    	static volatile int8_t x477 = INT8_MAX;
	int64_t x479 = INT64_MIN;
	int64_t t93 = -512088792847733273LL;

    t93 = (x477/(x478+(x479-x480)));

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x485 = INT8_MIN;
	volatile int8_t x487 = INT8_MIN;

    t94 = (x485/(x486+(x487-x488)));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile uint32_t x489 = 28U;
	int8_t x490 = INT8_MAX;
	uint8_t x491 = 27U;
	uint32_t t95 = 196U;

    t95 = (x489/(x490+(x491-x492)));

    if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x493 = 0U;
	volatile uint32_t x494 = 3U;
	uint64_t x496 = UINT64_MAX;

    t96 = (x493/(x494+(x495-x496)));

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static int64_t x498 = INT64_MIN;
	int32_t x499 = 4088473;
	int64_t x500 = -1LL;

    t97 = (x497/(x498+(x499-x500)));

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x505 = 54296171084962225LLU;
	static int16_t x507 = -1;

    t98 = (x505/(x506+(x507-x508)));

    if (t98 != 1987LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x509 = -1;
	static uint16_t x510 = 1U;
	uint32_t x512 = UINT32_MAX;

    t99 = (x509/(x510+(x511-x512)));

    if (t99 != 1U) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x514 = INT16_MAX;
	int32_t t100 = 59513888;

    t100 = (x513/(x514+(x515-x516)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	uint64_t x517 = 0LLU;
	static int32_t x519 = INT32_MIN;
	uint64_t t101 = 654375377LLU;

    t101 = (x517/(x518+(x519-x520)));

    if (t101 != 0LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static int64_t x521 = 12LL;
	int8_t x523 = -1;
	uint8_t x524 = 84U;
	volatile int64_t t102 = 215153LL;

    t102 = (x521/(x522+(x523-x524)));

    if (t102 != 0LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int32_t x525 = -89;
	static int16_t x526 = -1;
	static int16_t x527 = -1;
	int32_t x528 = -1;
	volatile int32_t t103 = 1067;

    t103 = (x525/(x526+(x527-x528)));

    if (t103 != 89) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int8_t x529 = INT8_MAX;
	uint16_t x530 = 2394U;
	uint16_t x532 = UINT16_MAX;
	volatile int32_t t104 = 198483;

    t104 = (x529/(x530+(x531-x532)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x533 = 1021691123LL;
	uint64_t x534 = UINT64_MAX;
	volatile int16_t x535 = INT16_MIN;
	static int8_t x536 = -2;
	volatile uint64_t t105 = 1LLU;

    t105 = (x533/(x534+(x535-x536)));

    if (t105 != 0LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x539 = -1;
	uint64_t t106 = 1LLU;

    t106 = (x537/(x538+(x539-x540)));

    if (t106 != 4294877467LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x542 = 492;
	static int32_t x543 = -1;
	static uint32_t x544 = 160U;
	volatile uint32_t t107 = 1744844854U;

    t107 = (x541/(x542+(x543-x544)));

    if (t107 != 6487866U) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x545 = 3044LL;
	uint64_t x546 = 2297574394541412LLU;
	static int32_t x547 = INT32_MIN;
	int16_t x548 = INT16_MIN;
	static uint64_t t108 = 1370292993159328895LLU;

    t108 = (x545/(x546+(x547-x548)));

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x549 = INT64_MAX;
	volatile int64_t t109 = -122568656521838LL;

    t109 = (x549/(x550+(x551-x552)));

    if (t109 != 2153280543LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x553 = 0U;
	static uint64_t x554 = UINT64_MAX;
	static uint32_t x555 = UINT32_MAX;
	int64_t x556 = -1LL;
	volatile uint64_t t110 = 639LLU;

    t110 = (x553/(x554+(x555-x556)));

    if (t110 != 0LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x558 = INT32_MIN;
	uint32_t t111 = 0U;

    t111 = (x557/(x558+(x559-x560)));

    if (t111 != 1U) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x561 = -87LL;
	uint8_t x562 = 117U;
	volatile int16_t x563 = -1902;
	uint16_t x564 = 2163U;
	static int64_t t112 = -117218545684LL;

    t112 = (x561/(x562+(x563-x564)));

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x566 = INT32_MIN;
	static int32_t x567 = -1;

    t113 = (x565/(x566+(x567-x568)));

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static int8_t x569 = 49;
	int64_t x570 = 2LL;
	static int64_t x571 = -36916948629935155LL;
	int64_t x572 = 13736834451793LL;
	int64_t t114 = -680706233915848577LL;

    t114 = (x569/(x570+(x571-x572)));

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint16_t x577 = UINT16_MAX;
	int16_t x578 = INT16_MAX;
	static int64_t x579 = 1269028LL;
	int32_t x580 = 0;
	int64_t t115 = -5037LL;

    t115 = (x577/(x578+(x579-x580)));

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x581 = 22U;
	int8_t x582 = INT8_MIN;
	static int32_t x583 = INT32_MIN;
	int32_t t116 = -276182;

    t116 = (x581/(x582+(x583-x584)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x589 = -8;
	int8_t x590 = -1;
	int32_t x591 = -1;
	volatile int8_t x592 = INT8_MIN;
	volatile int32_t t117 = -1772;

    t117 = (x589/(x590+(x591-x592)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x593 = INT16_MIN;
	int64_t x594 = INT64_MIN;
	uint16_t x595 = UINT16_MAX;
	int16_t x596 = 8101;
	volatile int64_t t118 = -4266516956365LL;

    t118 = (x593/(x594+(x595-x596)));

    if (t118 != 0LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int32_t x597 = INT32_MAX;
	uint32_t x598 = UINT32_MAX;
	uint16_t x599 = UINT16_MAX;
	int16_t x600 = INT16_MAX;
	uint32_t t119 = 30509280U;

    t119 = (x597/(x598+(x599-x600)));

    if (t119 != 65538U) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint64_t x601 = UINT64_MAX;
	uint64_t x602 = UINT64_MAX;
	int8_t x603 = INT8_MIN;
	int8_t x604 = INT8_MIN;
	volatile uint64_t t120 = 8163747LLU;

    t120 = (x601/(x602+(x603-x604)));

    if (t120 != 1LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x607 = 1;
	volatile uint64_t t121 = 609326700857625LLU;

    t121 = (x605/(x606+(x607-x608)));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x609 = INT64_MIN;
	int32_t x610 = INT32_MIN;
	volatile int64_t x611 = -4178738274785549LL;
	int8_t x612 = INT8_MAX;

    t122 = (x609/(x610+(x611-x612)));

    if (t122 != 2207LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x613 = INT8_MIN;
	static int64_t x614 = INT64_MAX;
	static int16_t x615 = INT16_MIN;
	volatile int64_t t123 = 6LL;

    t123 = (x613/(x614+(x615-x616)));

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile uint8_t x617 = 0U;
	int8_t x618 = INT8_MIN;
	int8_t x620 = INT8_MAX;
	static volatile int64_t t124 = -10228462502159LL;

    t124 = (x617/(x618+(x619-x620)));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile uint8_t x621 = UINT8_MAX;
	int64_t x622 = INT64_MIN;
	int8_t x623 = INT8_MIN;
	int64_t x624 = INT64_MIN;
	int64_t t125 = 202LL;

    t125 = (x621/(x622+(x623-x624)));

    if (t125 != -1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile int8_t x629 = INT8_MIN;
	int32_t x630 = -50;
	int8_t x631 = -59;
	volatile int32_t x632 = -3;
	int32_t t126 = 235;

    t126 = (x629/(x630+(x631-x632)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x633 = INT64_MIN;
	int32_t x635 = 428;
	int64_t t127 = 2827204217LL;

    t127 = (x633/(x634+(x635-x636)));

    if (t127 != -407871574538LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x638 = 21LL;
	static volatile uint8_t x639 = 72U;
	uint16_t x640 = 86U;
	volatile int64_t t128 = 43546500479LL;

    t128 = (x637/(x638+(x639-x640)));

    if (t128 != -1317624576693539401LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint64_t x641 = 3301246LLU;
	uint8_t x642 = UINT8_MAX;
	int16_t x643 = INT16_MIN;
	int32_t x644 = INT32_MIN;
	static uint64_t t129 = 79754924064761536LLU;

    t129 = (x641/(x642+(x643-x644)));

    if (t129 != 0LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x645 = INT64_MAX;
	uint32_t x646 = 14282457U;
	int32_t x647 = -1;
	int32_t x648 = -1;
	int64_t t130 = -3954117966436381LL;

    t130 = (x645/(x646+(x647-x648)));

    if (t130 != 645783287627LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static int16_t x649 = -43;
	int16_t x650 = -6331;
	static volatile uint16_t x651 = 242U;
	uint16_t x652 = 20U;
	volatile int32_t t131 = -5542885;

    t131 = (x649/(x650+(x651-x652)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	static uint16_t x658 = UINT16_MAX;
	static int16_t x659 = 0;
	int32_t t132 = -1;

    t132 = (x657/(x658+(x659-x660)));

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x661 = INT32_MIN;
	int64_t x662 = 6916494813550LL;
	int64_t x663 = -1LL;
	int8_t x664 = INT8_MIN;
	volatile int64_t t133 = -509661802485942412LL;

    t133 = (x661/(x662+(x663-x664)));

    if (t133 != 0LL) { NG(); } else { ; }
	
}

void f134(void) {
    	static int16_t x666 = 20;
	int32_t x667 = INT32_MIN;
	int16_t x668 = -1;
	static int64_t t134 = -55551086LL;

    t134 = (x665/(x666+(x667-x668)));

    if (t134 != -4294967338LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static int16_t x670 = INT16_MIN;
	int64_t x671 = INT64_MAX;

    t135 = (x669/(x670+(x671-x672)));

    if (t135 != 2LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x677 = INT32_MIN;
	uint16_t x679 = 63U;
	int32_t x680 = 229;
	volatile int32_t t136 = 1;

    t136 = (x677/(x678+(x679-x680)));

    if (t136 != 13765920) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x681 = 43U;
	int16_t x682 = -1;
	uint32_t x684 = 194255U;
	volatile uint32_t t137 = 20488U;

    t137 = (x681/(x682+(x683-x684)));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x685 = -4;
	int64_t x686 = -727720LL;
	static volatile int16_t x687 = INT16_MIN;
	volatile int16_t x688 = INT16_MIN;
	int64_t t138 = -7865LL;

    t138 = (x685/(x686+(x687-x688)));

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint16_t x689 = 0U;
	int16_t x690 = 34;
	int32_t x691 = -1;
	uint8_t x692 = 3U;
	static volatile int32_t t139 = -140;

    t139 = (x689/(x690+(x691-x692)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x705 = INT16_MIN;
	int8_t x706 = -31;
	int64_t x707 = -922LL;
	static volatile int8_t x708 = INT8_MIN;
	int64_t t140 = -6LL;

    t140 = (x705/(x706+(x707-x708)));

    if (t140 != 39LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x709 = 387U;
	volatile int32_t t141 = 78;

    t141 = (x709/(x710+(x711-x712)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x717 = INT32_MIN;
	int16_t x718 = 4;
	int64_t x719 = 3843598LL;
	int64_t t142 = -970197607032382LL;

    t142 = (x717/(x718+(x719-x720)));

    if (t142 != -568LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x721 = 49U;
	static uint8_t x722 = 24U;
	int16_t x723 = -60;
	volatile int64_t x724 = INT64_MIN;
	static int64_t t143 = -442815LL;

    t143 = (x721/(x722+(x723-x724)));

    if (t143 != 0LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int32_t x733 = -22493;
	int32_t x734 = 2453800;
	int64_t x735 = 24251976819LL;
	volatile int64_t t144 = -189203915554991LL;

    t144 = (x733/(x734+(x735-x736)));

    if (t144 != 0LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x737 = INT32_MAX;
	int8_t x740 = -2;
	static volatile uint64_t t145 = 643506195LLU;

    t145 = (x737/(x738+(x739-x740)));

    if (t145 != 0LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int8_t x749 = 43;
	volatile int32_t x750 = INT32_MIN;
	static int16_t x751 = INT16_MAX;
	int16_t x752 = INT16_MIN;
	int32_t t146 = -4641;

    t146 = (x749/(x750+(x751-x752)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x753 = INT64_MAX;
	static int8_t x754 = INT8_MAX;
	volatile int32_t x755 = INT32_MIN;
	int32_t x756 = INT32_MIN;
	volatile int64_t t147 = -90555LL;

    t147 = (x753/(x754+(x755-x756)));

    if (t147 != 72624976668147841LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x758 = 11611986579LLU;
	uint32_t x759 = 99842U;
	volatile uint8_t x760 = 0U;
	volatile uint64_t t148 = 2458672531517LLU;

    t148 = (x757/(x758+(x759-x760)));

    if (t148 != 1588581362LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x762 = 7U;
	int8_t x763 = INT8_MAX;
	static volatile int32_t t149 = -12;

    t149 = (x761/(x762+(x763-x764)));

    if (t149 != 485) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x769 = 1;
	uint8_t x770 = 120U;
	static int64_t x771 = 1LL;
	int64_t x772 = 524254326845373825LL;
	int64_t t150 = -3LL;

    t150 = (x769/(x770+(x771-x772)));

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x777 = INT8_MIN;
	int64_t x779 = -1LL;
	volatile int32_t x780 = 208749144;
	volatile int64_t t151 = -114699164548LL;

    t151 = (x777/(x778+(x779-x780)));

    if (t151 != 0LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static volatile int8_t x782 = -1;
	int32_t x783 = 15557206;
	static int32_t x784 = 3906;
	int32_t t152 = -6136832;

    t152 = (x781/(x782+(x783-x784)));

    if (t152 != -138) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x785 = -58;
	int16_t x787 = INT16_MIN;
	int32_t x788 = -1;
	int32_t t153 = 13568552;

    t153 = (x785/(x786+(x787-x788)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x789 = -1LL;
	uint16_t x790 = 840U;
	static uint8_t x791 = UINT8_MAX;
	static uint8_t x792 = UINT8_MAX;
	int64_t t154 = 68603878LL;

    t154 = (x789/(x790+(x791-x792)));

    if (t154 != 0LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int16_t x794 = 165;
	static int8_t x795 = INT8_MIN;
	static int64_t t155 = 68618LL;

    t155 = (x793/(x794+(x795-x796)));

    if (t155 != 0LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x797 = 1U;
	int32_t x799 = -256272;
	int16_t x800 = INT16_MIN;
	int32_t t156 = -1745323;

    t156 = (x797/(x798+(x799-x800)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x801 = 13665;
	volatile uint8_t x802 = 8U;
	static uint64_t x803 = 353135LLU;
	int16_t x804 = -2272;
	volatile uint64_t t157 = 3344466348LLU;

    t157 = (x801/(x802+(x803-x804)));

    if (t157 != 0LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x805 = INT64_MIN;
	volatile int8_t x806 = -1;
	uint8_t x807 = 13U;
	int16_t x808 = -1;

    t158 = (x805/(x806+(x807-x808)));

    if (t158 != -709490156681136600LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int16_t x809 = -2160;
	int64_t x810 = -26957272394352LL;
	uint8_t x812 = UINT8_MAX;
	int64_t t159 = -7103062LL;

    t159 = (x809/(x810+(x811-x812)));

    if (t159 != 0LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x813 = INT16_MIN;
	int8_t x814 = INT8_MIN;
	static int64_t x815 = -1LL;
	static int16_t x816 = -59;
	static int64_t t160 = 12LL;

    t160 = (x813/(x814+(x815-x816)));

    if (t160 != 468LL) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint32_t x817 = 3079U;
	uint16_t x818 = UINT16_MAX;
	static volatile uint32_t x819 = UINT32_MAX;
	uint16_t x820 = 7825U;
	volatile uint32_t t161 = 28468U;

    t161 = (x817/(x818+(x819-x820)));

    if (t161 != 0U) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x821 = 0U;
	int64_t t162 = -112573LL;

    t162 = (x821/(x822+(x823-x824)));

    if (t162 != 0LL) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int32_t x825 = INT32_MIN;
	int32_t x826 = -1;
	int64_t x827 = INT64_MAX;
	uint8_t x828 = 21U;
	volatile int64_t t163 = -3911747923522806590LL;

    t163 = (x825/(x826+(x827-x828)));

    if (t163 != 0LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x829 = INT16_MAX;
	int16_t x830 = INT16_MIN;
	volatile uint16_t x831 = 26811U;
	static int16_t x832 = -210;
	int32_t t164 = -12117468;

    t164 = (x829/(x830+(x831-x832)));

    if (t164 != -5) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x833 = -432LL;
	int64_t x834 = INT64_MIN;
	static int8_t x835 = INT8_MIN;
	int16_t x836 = INT16_MIN;
	int64_t t165 = -16LL;

    t165 = (x833/(x834+(x835-x836)));

    if (t165 != 0LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int8_t x837 = -1;
	uint16_t x838 = UINT16_MAX;
	volatile uint16_t x839 = 6U;
	int8_t x840 = INT8_MAX;

    t166 = (x837/(x838+(x839-x840)));

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x841 = INT64_MIN;
	uint16_t x843 = 473U;
	int8_t x844 = 1;
	static volatile int64_t t167 = 251642206LL;

    t167 = (x841/(x842+(x843-x844)));

    if (t167 != -18264103043276783LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile uint32_t x849 = UINT32_MAX;
	uint8_t x850 = UINT8_MAX;
	int32_t x851 = -1;
	static int8_t x852 = INT8_MAX;
	volatile uint32_t t168 = 15U;

    t168 = (x849/(x850+(x851-x852)));

    if (t168 != 33818640U) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x853 = -36;
	int64_t x855 = INT64_MAX;
	volatile int64_t x856 = INT64_MAX;
	int64_t t169 = -1298787420688486LL;

    t169 = (x853/(x854+(x855-x856)));

    if (t169 != 36LL) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x862 = UINT32_MAX;
	uint8_t x863 = 11U;
	int32_t x864 = -180;

    t170 = (x861/(x862+(x863-x864)));

    if (t170 != 17071316LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x865 = 5;
	uint16_t x867 = 7U;
	volatile uint64_t x868 = UINT64_MAX;
	volatile uint64_t t171 = 2686LLU;

    t171 = (x865/(x866+(x867-x868)));

    if (t171 != 0LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x869 = UINT8_MAX;
	static int8_t x871 = -1;
	static uint64_t x872 = 405050450167874484LLU;
	uint64_t t172 = 725620259LLU;

    t172 = (x869/(x870+(x871-x872)));

    if (t172 != 0LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x873 = INT16_MIN;
	static volatile int32_t x874 = 10042;
	uint16_t x875 = 13U;
	uint8_t x876 = 3U;
	volatile int32_t t173 = 673533;

    t173 = (x873/(x874+(x875-x876)));

    if (t173 != -3) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x877 = 0;
	int64_t x878 = INT64_MIN;
	int16_t x880 = INT16_MIN;

    t174 = (x877/(x878+(x879-x880)));

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x883 = INT8_MAX;
	int8_t x884 = -29;
	int64_t t175 = 0LL;

    t175 = (x881/(x882+(x883-x884)));

    if (t175 != 0LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x889 = -710384;
	int8_t x890 = -1;
	int32_t x891 = -1;
	int64_t x892 = -1LL;

    t176 = (x889/(x890+(x891-x892)));

    if (t176 != 710384LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x894 = INT8_MIN;
	volatile uint16_t x895 = UINT16_MAX;
	volatile uint64_t t177 = 45728LLU;

    t177 = (x893/(x894+(x895-x896)));

    if (t177 != 38546159938734LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x897 = -13484LL;
	static volatile int8_t x899 = INT8_MIN;

    t178 = (x897/(x898+(x899-x900)));

    if (t178 != 0LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int16_t x901 = INT16_MIN;
	static int32_t x902 = -1628;
	static volatile uint32_t t179 = 317138583U;

    t179 = (x901/(x902+(x903-x904)));

    if (t179 != 474002U) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x910 = 397U;
	volatile int32_t x911 = -1;
	static int16_t x912 = 9;
	volatile int32_t t180 = 0;

    t180 = (x909/(x910+(x911-x912)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x918 = 127236U;
	uint8_t x919 = UINT8_MAX;
	int16_t x920 = 835;
	static volatile int64_t t181 = -1433408405622LL;

    t181 = (x917/(x918+(x919-x920)));

    if (t181 != 72822227425899LL) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x921 = -1LL;
	uint16_t x922 = 95U;
	volatile uint8_t x923 = 5U;
	volatile int64_t t182 = -173599260LL;

    t182 = (x921/(x922+(x923-x924)));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x925 = -481;
	int16_t x926 = INT16_MAX;
	volatile int64_t x927 = -18421911121118LL;
	int64_t t183 = 24195740030LL;

    t183 = (x925/(x926+(x927-x928)));

    if (t183 != 0LL) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint32_t x929 = 9244U;
	uint32_t x930 = 99U;
	int32_t x931 = -615338845;
	int8_t x932 = -1;
	uint32_t t184 = 119852954U;

    t184 = (x929/(x930+(x931-x932)));

    if (t184 != 0U) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x933 = INT8_MIN;
	uint32_t x934 = 4U;

    t185 = (x933/(x934+(x935-x936)));

    if (t185 != 1U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x937 = 348352280774954LLU;
	int16_t x938 = INT16_MIN;
	static uint8_t x939 = 0U;
	static uint64_t x940 = 1LLU;
	volatile uint64_t t186 = 27853467511LLU;

    t186 = (x937/(x938+(x939-x940)));

    if (t186 != 0LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x942 = INT32_MIN;
	int8_t x944 = -1;
	volatile uint32_t t187 = 17988855U;

    t187 = (x941/(x942+(x943-x944)));

    if (t187 != 1U) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x945 = -1;
	uint32_t x946 = 116512969U;
	volatile int8_t x947 = INT8_MAX;
	static volatile uint16_t x948 = 15028U;
	static volatile uint32_t t188 = 15899U;

    t188 = (x945/(x946+(x947-x948)));

    if (t188 != 36U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint16_t x949 = UINT16_MAX;
	volatile uint16_t x950 = 2163U;
	static int8_t x951 = -1;
	int16_t x952 = INT16_MIN;

    t189 = (x949/(x950+(x951-x952)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint64_t x961 = 0LLU;
	int32_t x963 = INT32_MAX;
	static uint8_t x964 = UINT8_MAX;

    t190 = (x961/(x962+(x963-x964)));

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x965 = -122249;
	volatile uint64_t x966 = 4LLU;
	int32_t x967 = -18;
	int32_t x968 = 10550119;

    t191 = (x965/(x966+(x967-x968)));

    if (t191 != 1LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x969 = -1;
	uint32_t x970 = 26U;
	volatile int64_t x971 = -1LL;
	uint32_t x972 = UINT32_MAX;
	static int64_t t192 = -39703204984092537LL;

    t192 = (x969/(x970+(x971-x972)));

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint16_t x973 = 405U;
	int16_t x974 = INT16_MIN;
	int8_t x976 = INT8_MIN;

    t193 = (x973/(x974+(x975-x976)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x977 = UINT32_MAX;
	int8_t x979 = 0;
	static uint32_t x980 = 33428576U;
	int64_t t194 = 6955103991669667LL;

    t194 = (x977/(x978+(x979-x980)));

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x981 = INT8_MIN;
	int8_t x983 = INT8_MAX;
	int32_t x984 = INT32_MAX;
	int32_t t195 = -27357;

    t195 = (x981/(x982+(x983-x984)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x985 = 244147773278916LLU;
	int64_t x986 = -1LL;
	volatile int32_t x987 = -34488863;

    t196 = (x985/(x986+(x987-x988)));

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile uint8_t x989 = 5U;
	int64_t x990 = INT64_MAX;
	int32_t x991 = INT32_MIN;
	volatile int32_t x992 = INT32_MIN;
	volatile int64_t t197 = 13LL;

    t197 = (x989/(x990+(x991-x992)));

    if (t197 != 0LL) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x997 = 3704;
	volatile int32_t x999 = 2509;
	static int64_t x1000 = -1LL;
	static volatile int64_t t198 = 434087609280350LL;

    t198 = (x997/(x998+(x999-x1000)));

    if (t198 != 1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x1001 = 84308LLU;
	uint16_t x1002 = 29466U;
	uint64_t x1003 = UINT64_MAX;
	int64_t x1004 = INT64_MIN;
	volatile uint64_t t199 = 2837834049713804LLU;

    t199 = (x1001/(x1002+(x1003-x1004)));

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

