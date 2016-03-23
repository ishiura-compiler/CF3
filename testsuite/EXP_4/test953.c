
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

int16_t x2 = 55;
uint32_t x4 = 11862U;
int64_t t1 = 137474686737737LL;
int32_t x10 = INT32_MAX;
int64_t x12 = -1LL;
int8_t x16 = -1;
uint8_t x24 = UINT8_MAX;
int16_t x32 = -52;
volatile uint64_t t7 = 13774143547585818LLU;
int32_t x42 = 632924;
uint64_t t9 = 3169897712195LLU;
int64_t x52 = INT64_MAX;
static uint16_t x53 = 339U;
int64_t t12 = 275303LL;
volatile int16_t x65 = INT16_MIN;
static volatile uint32_t t15 = 90942886U;
int64_t x69 = -51636LL;
volatile int32_t t17 = -6544;
uint32_t x88 = UINT32_MAX;
int64_t t20 = 17678312370270LL;
int16_t x93 = INT16_MAX;
volatile int32_t x99 = 19490;
int16_t x104 = INT16_MAX;
volatile int8_t x111 = 5;
int32_t t27 = -48177948;
int16_t x117 = INT16_MAX;
int64_t x127 = INT64_MIN;
int16_t x133 = -1;
uint32_t x135 = UINT32_MAX;
static uint32_t x141 = 139U;
int64_t x142 = INT64_MIN;
static volatile int64_t t33 = -247479140930LL;
volatile int64_t x151 = INT64_MIN;
volatile uint64_t t36 = 1812777638537428041LLU;
int8_t x169 = 13;
volatile int64_t t39 = 41LL;
uint64_t t44 = 4708899LLU;
static uint16_t x208 = 5539U;
volatile uint8_t x212 = UINT8_MAX;
int8_t x213 = INT8_MIN;
int8_t x217 = -1;
volatile int16_t x219 = 3;
int32_t x237 = INT32_MIN;
volatile int64_t x240 = INT64_MIN;
int8_t x241 = 32;
int32_t x249 = INT32_MAX;
volatile int64_t x256 = 220210211851089218LL;
int32_t x260 = -1;
static volatile int32_t t58 = 2721371;
uint32_t x265 = 4123876U;
int64_t x266 = INT64_MIN;
static int8_t x284 = INT8_MIN;
int16_t x285 = INT16_MIN;
uint32_t t67 = 7539481U;
int64_t x299 = INT64_MAX;
int32_t x312 = INT32_MIN;
int64_t x316 = INT64_MAX;
uint32_t x319 = UINT32_MAX;
volatile int8_t x338 = 39;
int32_t x346 = INT32_MIN;
int64_t t80 = -13099463LL;
int16_t x355 = INT16_MIN;
int64_t x371 = INT64_MIN;
static int8_t x378 = INT8_MAX;
static int16_t x381 = INT16_MIN;
int16_t x387 = INT16_MAX;
volatile int16_t x389 = -704;
int32_t x391 = INT32_MAX;
uint16_t x392 = UINT16_MAX;
int32_t x397 = INT32_MAX;
int8_t x407 = INT8_MIN;
volatile int64_t t95 = 369620401185LL;
int16_t x410 = INT16_MIN;
volatile int64_t t96 = 53195LL;
uint16_t x414 = 5U;
volatile int16_t x416 = INT16_MIN;
uint32_t t98 = 48U;
static int64_t x425 = 14788551LL;
int64_t t99 = 964767592LL;
volatile int8_t x438 = INT8_MIN;
static int32_t x442 = INT32_MIN;
int64_t x443 = -4528835359871226622LL;
int32_t x444 = INT32_MIN;
int8_t x462 = -12;
int8_t x465 = INT8_MAX;
int8_t x479 = INT8_MIN;
int8_t x485 = INT8_MAX;
static int16_t x493 = -1;
static int16_t x498 = INT16_MAX;
int64_t t115 = -38LL;
uint32_t x504 = UINT32_MAX;
int8_t x522 = INT8_MIN;
int16_t x523 = -523;
int16_t x524 = -10705;
int32_t t120 = -633;
volatile uint64_t x529 = UINT64_MAX;
static int8_t x532 = -46;
int64_t x534 = 1LL;
uint32_t x545 = 16U;
volatile int64_t x546 = INT64_MIN;
int16_t x552 = INT16_MIN;
int32_t x556 = INT32_MIN;
int8_t x570 = INT8_MAX;
static int64_t x571 = -36957519549LL;
int8_t x572 = -1;
int32_t x577 = -1;
int32_t x584 = INT32_MIN;
int16_t x599 = -2157;
volatile int16_t x600 = -1987;
volatile uint64_t t136 = 2246267246812546LLU;
int32_t x607 = INT32_MIN;
int32_t x616 = INT32_MAX;
uint64_t x618 = 376730466484586594LLU;
volatile int64_t x619 = -1LL;
int64_t t146 = 123676062664118205LL;
static int8_t x662 = 1;
int64_t x663 = -1LL;
static volatile uint16_t x667 = 271U;
uint16_t x670 = UINT16_MAX;
int64_t x671 = -5LL;
volatile int64_t t152 = 431776LL;
volatile int32_t t153 = -1;
volatile int8_t x679 = 3;
int32_t t155 = -1045603003;
int64_t x685 = -1001117175LL;
volatile uint8_t x688 = UINT8_MAX;
volatile uint8_t x690 = 10U;
static volatile int16_t x692 = 398;
volatile uint32_t t157 = 112660U;
int64_t x696 = -1LL;
int16_t x702 = INT16_MAX;
volatile int64_t t159 = -7309586LL;
int32_t x705 = INT32_MIN;
volatile int8_t x712 = INT8_MIN;
int64_t x715 = INT64_MIN;
int8_t x720 = INT8_MIN;
int16_t x723 = INT16_MIN;
volatile uint64_t t164 = 257322LLU;
uint64_t t165 = 3531337029539252LLU;
static uint16_t x729 = 58U;
int16_t x730 = INT16_MIN;
static volatile int64_t x735 = INT64_MIN;
int64_t x739 = -1370457902118046638LL;
int8_t x740 = 59;
volatile int32_t x741 = INT32_MAX;
int8_t x742 = -2;
int32_t x745 = INT32_MIN;
static int8_t x746 = 52;
int8_t x759 = 21;
int32_t x762 = 17814490;
static volatile uint32_t t174 = 742106102U;
static volatile uint64_t t175 = 2376227993827LLU;
int64_t x772 = -54LL;
volatile int32_t x774 = -1;
uint16_t x775 = 18U;
uint8_t x778 = 1U;
int16_t x783 = -1356;
uint64_t x784 = 6612661531LLU;
uint64_t x787 = UINT64_MAX;
uint64_t t180 = 2569LLU;
int16_t x789 = 21;
uint64_t x791 = 4493855450800LLU;
uint8_t x794 = 21U;
volatile int64_t x797 = INT64_MAX;
uint32_t x800 = 686004145U;
uint16_t x801 = UINT16_MAX;
uint32_t t185 = 1789059U;
volatile uint8_t x823 = UINT8_MAX;
int16_t x825 = 15648;
static int8_t x835 = 2;
static int64_t x842 = -1164287438LL;
volatile int64_t x853 = INT64_MAX;
int8_t x856 = INT8_MIN;
static volatile int32_t x863 = -61049604;
int16_t x866 = INT16_MAX;
static int64_t x867 = INT64_MIN;


void f0(void) {
    	static int32_t x1 = INT32_MIN;
	static volatile int64_t x3 = INT64_MIN;
	static int64_t t0 = -75683800754LL;

    t0 = (x1+(x2|(x3%x4)));

    if (t0 != -2147491201LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x5 = INT8_MIN;
	static int8_t x6 = INT8_MIN;
	int16_t x7 = INT16_MIN;
	int64_t x8 = INT64_MIN;

    t1 = (x5+(x6|(x7%x8)));

    if (t1 != -256LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MIN;
	static uint64_t x11 = UINT64_MAX;
	uint64_t t2 = 27825786229450913LLU;

    t2 = (x9+(x10|(x11%x12)));

    if (t2 != 2147483519LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x13 = INT64_MIN;
	volatile uint64_t x14 = 146493890109LLU;
	int16_t x15 = INT16_MIN;
	static uint64_t t3 = 17480108311LLU;

    t3 = (x13+(x14|(x15%x16)));

    if (t3 != 9223372183348665917LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x21 = 20263210LLU;
	volatile uint8_t x22 = 5U;
	int8_t x23 = -1;
	uint64_t t4 = 44393LLU;

    t4 = (x21+(x22|(x23%x24)));

    if (t4 != 20263209LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = -1;
	int8_t x26 = INT8_MIN;
	static int32_t x27 = -480457;
	int32_t x28 = -1;
	volatile int32_t t5 = 7;

    t5 = (x25+(x26|(x27%x28)));

    if (t5 != -129) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x29 = -1LL;
	volatile int64_t x30 = 16561786LL;
	int64_t x31 = -1LL;
	static int64_t t6 = -1210605780373765327LL;

    t6 = (x29+(x30|(x31%x32)));

    if (t6 != -2LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = INT8_MIN;
	int64_t x34 = -1LL;
	static int16_t x35 = INT16_MIN;
	uint64_t x36 = UINT64_MAX;

    t7 = (x33+(x34|(x35%x36)));

    if (t7 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x37 = 492402894U;
	int16_t x38 = 1;
	volatile int8_t x39 = 15;
	int16_t x40 = INT16_MIN;
	uint32_t t8 = 1116U;

    t8 = (x37+(x38|(x39%x40)));

    if (t8 != 492402909U) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = INT8_MIN;
	static uint64_t x43 = 14503766145381LLU;
	uint64_t x44 = 41624870127817LLU;

    t9 = (x41+(x42|(x43%x44)));

    if (t9 != 14503766767869LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int16_t x45 = -1;
	int32_t x46 = -1;
	int16_t x47 = 6443;
	uint16_t x48 = UINT16_MAX;
	static int32_t t10 = -4100;

    t10 = (x45+(x46|(x47%x48)));

    if (t10 != -2) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x49 = 3785LLU;
	uint32_t x50 = 877625059U;
	uint16_t x51 = UINT16_MAX;
	uint64_t t11 = 2152184697287709LLU;

    t11 = (x49+(x50|(x51%x52)));

    if (t11 != 877661896LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x54 = -1LL;
	static volatile uint16_t x55 = UINT16_MAX;
	int64_t x56 = INT64_MAX;

    t12 = (x53+(x54|(x55%x56)));

    if (t12 != 338LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = 26;
	static int32_t x58 = INT32_MIN;
	int8_t x59 = INT8_MAX;
	volatile uint16_t x60 = 1U;
	volatile int32_t t13 = 1;

    t13 = (x57+(x58|(x59%x60)));

    if (t13 != -2147483622) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x61 = 4;
	uint64_t x62 = 770322149LLU;
	int32_t x63 = INT32_MIN;
	volatile int64_t x64 = 238155672829LL;
	uint64_t t14 = 88927335LLU;

    t14 = (x61+(x62|(x63%x64)));

    if (t14 != 18446744072332390121LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x66 = 6365461U;
	int16_t x67 = INT16_MIN;
	volatile int8_t x68 = INT8_MAX;

    t15 = (x65+(x66|(x67%x68)));

    if (t15 != 4294934527U) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x70 = INT64_MAX;
	volatile int64_t x71 = INT64_MIN;
	int32_t x72 = -134;
	int64_t t16 = 5044286LL;

    t16 = (x69+(x70|(x71%x72)));

    if (t16 != -51637LL) { NG(); } else { ; }
	
}

void f17(void) {
    	static int32_t x73 = INT32_MAX;
	static int8_t x74 = INT8_MIN;
	volatile int32_t x75 = INT32_MIN;
	static uint8_t x76 = UINT8_MAX;

    t17 = (x73+(x74|(x75%x76)));

    if (t17 != 2147483519) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x77 = INT64_MAX;
	uint64_t x78 = 5066364920199596688LLU;
	uint32_t x79 = 0U;
	static int16_t x80 = INT16_MAX;
	uint64_t t18 = 8816615451LLU;

    t18 = (x77+(x78|(x79%x80)));

    if (t18 != 14289736957054372495LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x81 = 1U;
	int32_t x82 = INT32_MIN;
	uint16_t x83 = 75U;
	int16_t x84 = -1;
	int32_t t19 = -24327483;

    t19 = (x81+(x82|(x83%x84)));

    if (t19 != -2147483647) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x85 = 3529741374731002723LL;
	static uint8_t x86 = 10U;
	int8_t x87 = -6;

    t20 = (x85+(x86|(x87%x88)));

    if (t20 != 3529741379025970013LL) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint16_t x89 = 1U;
	uint32_t x90 = UINT32_MAX;
	volatile int16_t x91 = INT16_MAX;
	volatile int8_t x92 = -1;
	uint32_t t21 = 808936918U;

    t21 = (x89+(x90|(x91%x92)));

    if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x94 = 100;
	volatile int64_t x95 = INT64_MAX;
	uint16_t x96 = 58U;
	static volatile int64_t t22 = -1832371407063LL;

    t22 = (x93+(x94|(x95%x96)));

    if (t22 != 32878LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x97 = -1;
	int32_t x98 = 1;
	static volatile int8_t x100 = INT8_MIN;
	int32_t t23 = -196094541;

    t23 = (x97+(x98|(x99%x100)));

    if (t23 != 34) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x101 = 452828LLU;
	volatile int32_t x102 = 0;
	static int16_t x103 = -1;
	static volatile uint64_t t24 = 127220204092LLU;

    t24 = (x101+(x102|(x103%x104)));

    if (t24 != 452827LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x105 = INT64_MIN;
	int32_t x106 = -11685780;
	uint32_t x107 = 13U;
	static volatile int32_t x108 = 1;
	volatile int64_t t25 = -2219LL;

    t25 = (x105+(x106|(x107%x108)));

    if (t25 != -9223372032571494292LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile uint64_t x109 = 28930723785LLU;
	static int64_t x110 = INT64_MIN;
	int16_t x112 = -24;
	static uint64_t t26 = 1138337343056LLU;

    t26 = (x109+(x110|(x111%x112)));

    if (t26 != 9223372065785499598LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x113 = INT8_MAX;
	static uint16_t x114 = UINT16_MAX;
	int16_t x115 = INT16_MIN;
	volatile int8_t x116 = -1;

    t27 = (x113+(x114|(x115%x116)));

    if (t27 != 65662) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x118 = 15090;
	static uint8_t x119 = 1U;
	int32_t x120 = 179799885;
	int32_t t28 = -2835;

    t28 = (x117+(x118|(x119%x120)));

    if (t28 != 47858) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x121 = -1;
	uint16_t x122 = 33U;
	int32_t x123 = -133759632;
	int32_t x124 = INT32_MAX;
	int32_t t29 = 0;

    t29 = (x121+(x122|(x123%x124)));

    if (t29 != -133759632) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x125 = UINT64_MAX;
	int16_t x126 = -14543;
	volatile int8_t x128 = INT8_MAX;
	uint64_t t30 = 0LLU;

    t30 = (x125+(x126|(x127%x128)));

    if (t30 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x129 = -1;
	volatile int32_t x130 = INT32_MAX;
	int16_t x131 = INT16_MAX;
	int16_t x132 = -1;
	volatile int32_t t31 = 505135113;

    t31 = (x129+(x130|(x131%x132)));

    if (t31 != 2147483646) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x134 = 3414U;
	volatile int16_t x136 = INT16_MIN;
	uint32_t t32 = 215839U;

    t32 = (x133+(x134|(x135%x136)));

    if (t32 != 32766U) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x143 = INT32_MIN;
	uint8_t x144 = 79U;

    t33 = (x141+(x142|(x143%x144)));

    if (t33 != 114LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x145 = INT16_MIN;
	int8_t x146 = INT8_MAX;
	volatile int64_t x147 = INT64_MIN;
	uint8_t x148 = UINT8_MAX;
	static int64_t t34 = -631343672LL;

    t34 = (x145+(x146|(x147%x148)));

    if (t34 != -32769LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x149 = 884317887286LLU;
	int16_t x150 = INT16_MAX;
	int16_t x152 = INT16_MAX;
	static uint64_t t35 = 7359873LLU;

    t35 = (x149+(x150|(x151%x152)));

    if (t35 != 884317887285LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x157 = INT8_MIN;
	volatile uint8_t x158 = 31U;
	uint64_t x159 = 301249693859717813LLU;
	int32_t x160 = 29;

    t36 = (x157+(x158|(x159%x160)));

    if (t36 != 18446744073709551519LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int16_t x161 = INT16_MIN;
	int64_t x162 = -1LL;
	int32_t x163 = INT32_MAX;
	int32_t x164 = 22402237;
	static volatile int64_t t37 = 12935611980095LL;

    t37 = (x161+(x162|(x163%x164)));

    if (t37 != -32769LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int16_t x170 = -1;
	int32_t x171 = INT32_MAX;
	uint16_t x172 = 3U;
	static volatile int32_t t38 = 27;

    t38 = (x169+(x170|(x171%x172)));

    if (t38 != 12) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x173 = -176248484LL;
	int32_t x174 = -1;
	volatile uint16_t x175 = UINT16_MAX;
	volatile uint32_t x176 = UINT32_MAX;

    t39 = (x173+(x174|(x175%x176)));

    if (t39 != 4118718811LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint8_t x177 = 13U;
	volatile uint64_t x178 = 2567877919LLU;
	int8_t x179 = INT8_MIN;
	volatile int32_t x180 = INT32_MIN;
	uint64_t t40 = 2599139946838028LLU;

    t40 = (x177+(x178|(x179%x180)));

    if (t40 != 18446744073709551532LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int16_t x181 = 4246;
	uint8_t x182 = 23U;
	volatile uint32_t x183 = UINT32_MAX;
	int8_t x184 = -7;
	volatile uint32_t t41 = 30U;

    t41 = (x181+(x182|(x183%x184)));

    if (t41 != 4269U) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x185 = INT32_MIN;
	static volatile uint64_t x186 = 458928355LLU;
	int16_t x187 = -1;
	static uint32_t x188 = 79284U;
	volatile uint64_t t42 = 33LLU;

    t42 = (x185+(x186|(x187%x188)));

    if (t42 != 18446744072021061859LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile int16_t x189 = -3367;
	static volatile uint16_t x190 = 5U;
	uint32_t x191 = 104068607U;
	int8_t x192 = -1;
	uint32_t t43 = 1002U;

    t43 = (x189+(x190|(x191%x192)));

    if (t43 != 104065240U) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x193 = -414926372LL;
	static int16_t x194 = INT16_MIN;
	uint64_t x195 = 320088636598LLU;
	int8_t x196 = INT8_MIN;

    t44 = (x193+(x194|(x195%x196)));

    if (t44 != 18446744073294624402LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x197 = 8U;
	static uint8_t x198 = UINT8_MAX;
	volatile int32_t x199 = -2;
	static volatile int8_t x200 = INT8_MIN;
	uint32_t t45 = 275862914U;

    t45 = (x197+(x198|(x199%x200)));

    if (t45 != 7U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int32_t x201 = INT32_MIN;
	uint64_t x202 = 24689189LLU;
	volatile int8_t x203 = INT8_MAX;
	uint32_t x204 = 48622101U;
	volatile uint64_t t46 = 1160566LLU;

    t46 = (x201+(x202|(x203%x204)));

    if (t46 != 18446744071586757247LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static int64_t x205 = INT64_MAX;
	volatile int32_t x206 = INT32_MIN;
	static int32_t x207 = INT32_MAX;
	int64_t t47 = 253342056373229134LL;

    t47 = (x205+(x206|(x207%x208)));

    if (t47 != 9223372034707294428LL) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x209 = INT16_MIN;
	int8_t x210 = INT8_MIN;
	int32_t x211 = INT32_MAX;
	int32_t t48 = -10039560;

    t48 = (x209+(x210|(x211%x212)));

    if (t48 != -32769) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x214 = -12;
	uint32_t x215 = UINT32_MAX;
	uint8_t x216 = 2U;
	uint32_t t49 = 913U;

    t49 = (x213+(x214|(x215%x216)));

    if (t49 != 4294967157U) { NG(); } else { ; }
	
}

void f50(void) {
    	static int16_t x218 = -1;
	static int64_t x220 = INT64_MIN;
	volatile int64_t t50 = -148LL;

    t50 = (x217+(x218|(x219%x220)));

    if (t50 != -2LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x221 = INT8_MIN;
	uint32_t x222 = UINT32_MAX;
	uint32_t x223 = UINT32_MAX;
	uint16_t x224 = 2U;
	volatile uint32_t t51 = 6816467U;

    t51 = (x221+(x222|(x223%x224)));

    if (t51 != 4294967167U) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x225 = 25588LLU;
	uint16_t x226 = UINT16_MAX;
	int8_t x227 = -1;
	uint16_t x228 = UINT16_MAX;
	uint64_t t52 = 1864361513964833LLU;

    t52 = (x225+(x226|(x227%x228)));

    if (t52 != 25587LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x233 = UINT16_MAX;
	uint8_t x234 = UINT8_MAX;
	static uint32_t x235 = 21188U;
	uint8_t x236 = 2U;
	volatile uint32_t t53 = 3980U;

    t53 = (x233+(x234|(x235%x236)));

    if (t53 != 65790U) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x238 = -1;
	uint16_t x239 = 50U;
	volatile int64_t t54 = -545401LL;

    t54 = (x237+(x238|(x239%x240)));

    if (t54 != -2147483649LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x242 = 125;
	int16_t x243 = 115;
	int16_t x244 = -1;
	static volatile int32_t t55 = 237578;

    t55 = (x241+(x242|(x243%x244)));

    if (t55 != 157) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x250 = -1;
	volatile uint8_t x251 = UINT8_MAX;
	volatile int32_t x252 = -105;
	int32_t t56 = 354;

    t56 = (x249+(x250|(x251%x252)));

    if (t56 != 2147483646) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x253 = UINT64_MAX;
	static int64_t x254 = -1LL;
	static uint32_t x255 = UINT32_MAX;
	uint64_t t57 = 825429648357LLU;

    t57 = (x253+(x254|(x255%x256)));

    if (t57 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile int8_t x257 = -1;
	int8_t x258 = -9;
	volatile uint16_t x259 = 335U;

    t58 = (x257+(x258|(x259%x260)));

    if (t58 != -10) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x261 = -1LL;
	int16_t x262 = -4486;
	static volatile uint64_t x263 = 22740479780LLU;
	int8_t x264 = -1;
	uint64_t t59 = 23751711310LLU;

    t59 = (x261+(x262|(x263%x264)));

    if (t59 != 18446744073709547389LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x267 = 11529092U;
	static uint32_t x268 = 3279U;
	static volatile int64_t t60 = 83LL;

    t60 = (x265+(x266|(x267%x268)));

    if (t60 != -9223372036850651804LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int64_t x269 = INT64_MAX;
	uint8_t x270 = 0U;
	int32_t x271 = INT32_MIN;
	static int64_t x272 = 216830068LL;
	int64_t t61 = -45LL;

    t61 = (x269+(x270|(x271%x272)));

    if (t61 != 9223372036658762771LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x273 = INT32_MIN;
	uint8_t x274 = 1U;
	uint8_t x275 = 76U;
	int8_t x276 = INT8_MAX;
	volatile int32_t t62 = 56;

    t62 = (x273+(x274|(x275%x276)));

    if (t62 != -2147483571) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x277 = 73013220920410028LLU;
	int64_t x278 = INT64_MIN;
	static volatile int32_t x279 = -3;
	int32_t x280 = INT32_MIN;
	volatile uint64_t t63 = 1LLU;

    t63 = (x277+(x278|(x279%x280)));

    if (t63 != 73013220920410025LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x281 = -1;
	int8_t x282 = INT8_MAX;
	uint16_t x283 = 231U;
	int32_t t64 = 2054;

    t64 = (x281+(x282|(x283%x284)));

    if (t64 != 126) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile uint16_t x286 = UINT16_MAX;
	uint8_t x287 = 2U;
	int8_t x288 = -1;
	int32_t t65 = -3;

    t65 = (x285+(x286|(x287%x288)));

    if (t65 != 32767) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint16_t x289 = UINT16_MAX;
	uint8_t x290 = 107U;
	volatile int16_t x291 = INT16_MIN;
	int32_t x292 = -1;
	int32_t t66 = 0;

    t66 = (x289+(x290|(x291%x292)));

    if (t66 != 65642) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x293 = INT16_MIN;
	uint32_t x294 = 427741U;
	volatile int16_t x295 = 40;
	int32_t x296 = INT32_MAX;

    t67 = (x293+(x294|(x295%x296)));

    if (t67 != 395005U) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x297 = INT16_MAX;
	int8_t x298 = INT8_MAX;
	uint64_t x300 = 835LLU;
	uint64_t t68 = 3431LLU;

    t68 = (x297+(x298|(x299%x300)));

    if (t68 != 32894LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x301 = UINT64_MAX;
	volatile int32_t x302 = 8;
	static uint16_t x303 = 775U;
	int16_t x304 = INT16_MIN;
	volatile uint64_t t69 = 612527789544702LLU;

    t69 = (x301+(x302|(x303%x304)));

    if (t69 != 782LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x305 = -1;
	volatile int32_t x306 = -874;
	volatile int32_t x307 = INT32_MAX;
	int64_t x308 = INT64_MIN;
	int64_t t70 = 5167LL;

    t70 = (x305+(x306|(x307%x308)));

    if (t70 != -2LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x309 = INT32_MAX;
	volatile uint64_t x310 = 158341388692LLU;
	uint8_t x311 = UINT8_MAX;
	volatile uint64_t t71 = 1194801059753856LLU;

    t71 = (x309+(x310|(x311%x312)));

    if (t71 != 160488872446LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x313 = 60;
	volatile int16_t x314 = INT16_MIN;
	volatile int64_t x315 = -1LL;
	volatile int64_t t72 = -677873939572028953LL;

    t72 = (x313+(x314|(x315%x316)));

    if (t72 != 59LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x317 = -492351446890609805LL;
	int16_t x318 = INT16_MAX;
	uint16_t x320 = 445U;
	int64_t t73 = 3763LL;

    t73 = (x317+(x318|(x319%x320)));

    if (t73 != -492351446890577038LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x321 = INT32_MIN;
	uint64_t x322 = 103054LLU;
	uint16_t x323 = 4U;
	int32_t x324 = INT32_MIN;
	volatile uint64_t t74 = 4295799479518109LLU;

    t74 = (x321+(x322|(x323%x324)));

    if (t74 != 18446744071562171022LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x325 = -27;
	int32_t x326 = -70;
	uint16_t x327 = 8369U;
	int64_t x328 = INT64_MIN;
	int64_t t75 = 50726168279LL;

    t75 = (x325+(x326|(x327%x328)));

    if (t75 != -96LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x329 = -1;
	uint8_t x330 = 5U;
	uint64_t x331 = UINT64_MAX;
	uint32_t x332 = 14U;
	uint64_t t76 = 642LLU;

    t76 = (x329+(x330|(x331%x332)));

    if (t76 != 4LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x333 = 30U;
	volatile int32_t x334 = INT32_MAX;
	static int64_t x335 = 1LL;
	static volatile int64_t x336 = 8276596LL;
	volatile int64_t t77 = -319597108866620LL;

    t77 = (x333+(x334|(x335%x336)));

    if (t77 != 2147483677LL) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x337 = 10373084U;
	static int16_t x339 = INT16_MAX;
	int64_t x340 = -568191796958LL;
	volatile int64_t t78 = 500125618719LL;

    t78 = (x337+(x338|(x339%x340)));

    if (t78 != 10405851LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x341 = -1;
	static int64_t x342 = 14LL;
	static uint8_t x343 = 28U;
	int32_t x344 = -1;
	static volatile int64_t t79 = -1125706608174537026LL;

    t79 = (x341+(x342|(x343%x344)));

    if (t79 != 13LL) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile int64_t x345 = INT64_MAX;
	int64_t x347 = -15LL;
	volatile int32_t x348 = INT32_MIN;

    t80 = (x345+(x346|(x347%x348)));

    if (t80 != 9223372036854775792LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x349 = -52;
	static uint32_t x350 = UINT32_MAX;
	uint64_t x351 = 124757LLU;
	int32_t x352 = INT32_MIN;
	volatile uint64_t t81 = 44732762LLU;

    t81 = (x349+(x350|(x351%x352)));

    if (t81 != 4294967243LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x353 = 5787945959LL;
	uint16_t x354 = UINT16_MAX;
	uint8_t x356 = 2U;
	volatile int64_t t82 = 826363LL;

    t82 = (x353+(x354|(x355%x356)));

    if (t82 != 5788011494LL) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x357 = UINT64_MAX;
	int16_t x358 = -2423;
	uint8_t x359 = UINT8_MAX;
	int8_t x360 = INT8_MIN;
	uint64_t t83 = 61347LLU;

    t83 = (x357+(x358|(x359%x360)));

    if (t83 != 18446744073709549310LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int8_t x361 = INT8_MAX;
	static volatile int8_t x362 = 0;
	volatile int8_t x363 = -1;
	static uint64_t x364 = UINT64_MAX;
	volatile uint64_t t84 = 31709LLU;

    t84 = (x361+(x362|(x363%x364)));

    if (t84 != 127LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x365 = INT16_MIN;
	volatile int32_t x366 = INT32_MIN;
	uint64_t x367 = UINT64_MAX;
	int64_t x368 = -121653682606007LL;
	volatile uint64_t t85 = 190LLU;

    t85 = (x365+(x366|(x367%x368)));

    if (t85 != 18446744072443465654LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x369 = -55562057;
	int32_t x370 = INT32_MIN;
	int8_t x372 = INT8_MIN;
	static volatile int64_t t86 = -92116433475983282LL;

    t86 = (x369+(x370|(x371%x372)));

    if (t86 != -2203045705LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x373 = -8139;
	static int8_t x374 = 1;
	int64_t x375 = INT64_MIN;
	uint8_t x376 = 16U;
	static int64_t t87 = -22712665LL;

    t87 = (x373+(x374|(x375%x376)));

    if (t87 != -8138LL) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x377 = 6U;
	static volatile uint8_t x379 = 1U;
	volatile uint32_t x380 = UINT32_MAX;
	volatile uint32_t t88 = 348443U;

    t88 = (x377+(x378|(x379%x380)));

    if (t88 != 133U) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x382 = -1;
	uint8_t x383 = 2U;
	static int64_t x384 = INT64_MIN;
	volatile int64_t t89 = 26LL;

    t89 = (x381+(x382|(x383%x384)));

    if (t89 != -32769LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile uint16_t x385 = 10341U;
	uint64_t x386 = 21327LLU;
	uint32_t x388 = 11761819U;
	uint64_t t90 = 1001578295861LLU;

    t90 = (x385+(x386|(x387%x388)));

    if (t90 != 43108LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x390 = -1;
	int32_t t91 = 17713;

    t91 = (x389+(x390|(x391%x392)));

    if (t91 != -705) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x393 = 7529LL;
	uint64_t x394 = 961283169644LLU;
	uint32_t x395 = 1301677772U;
	volatile int64_t x396 = INT64_MIN;
	volatile uint64_t t92 = 821265951684LLU;

    t92 = (x393+(x394|(x395%x396)));

    if (t92 != 961501674837LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x398 = -1;
	uint32_t x399 = 6U;
	uint32_t x400 = 644U;
	uint32_t t93 = 7372U;

    t93 = (x397+(x398|(x399%x400)));

    if (t93 != 2147483646U) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint64_t x401 = 39808057140304LLU;
	int64_t x402 = INT64_MAX;
	static uint8_t x403 = 2U;
	int64_t x404 = -2200200491352882LL;
	volatile uint64_t t94 = 5590735364137LLU;

    t94 = (x401+(x402|(x403%x404)));

    if (t94 != 9223411844911916111LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	volatile int8_t x405 = -1;
	int16_t x406 = INT16_MIN;
	int64_t x408 = INT64_MIN;

    t95 = (x405+(x406|(x407%x408)));

    if (t95 != -129LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int8_t x409 = INT8_MAX;
	static int64_t x411 = 2262824819059092LL;
	static int64_t x412 = 7402845LL;

    t96 = (x409+(x410|(x411%x412)));

    if (t96 != -25489LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x413 = INT8_MIN;
	int8_t x415 = INT8_MIN;
	volatile int32_t t97 = -2;

    t97 = (x413+(x414|(x415%x416)));

    if (t97 != -251) { NG(); } else { ; }
	
}

void f98(void) {
    	uint32_t x421 = 11U;
	int16_t x422 = -1;
	static volatile uint32_t x423 = UINT32_MAX;
	int16_t x424 = INT16_MAX;

    t98 = (x421+(x422|(x423%x424)));

    if (t98 != 10U) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int8_t x426 = -50;
	int8_t x427 = -1;
	volatile int16_t x428 = INT16_MAX;

    t99 = (x425+(x426|(x427%x428)));

    if (t99 != 14788550LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x429 = -1;
	int16_t x430 = -633;
	volatile uint32_t x431 = 1752U;
	static volatile int8_t x432 = -1;
	volatile uint32_t t100 = 99237U;

    t100 = (x429+(x430|(x431%x432)));

    if (t100 != 4294967262U) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x433 = 1784854U;
	uint8_t x434 = UINT8_MAX;
	static volatile int32_t x435 = -1;
	uint16_t x436 = UINT16_MAX;
	static uint32_t t101 = 4575157U;

    t101 = (x433+(x434|(x435%x436)));

    if (t101 != 1784853U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x437 = 50U;
	int32_t x439 = -526379;
	static int8_t x440 = INT8_MIN;
	int32_t t102 = -500091634;

    t102 = (x437+(x438|(x439%x440)));

    if (t102 != 7) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x441 = UINT8_MAX;
	volatile int64_t t103 = -169564589750184LL;

    t103 = (x441+(x442|(x443%x444)));

    if (t103 != -1465537023LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x449 = UINT8_MAX;
	static uint8_t x450 = UINT8_MAX;
	int16_t x451 = -643;
	int64_t x452 = INT64_MAX;
	int64_t t104 = 90720LL;

    t104 = (x449+(x450|(x451%x452)));

    if (t104 != -258LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x457 = -1LL;
	int64_t x458 = -1LL;
	uint32_t x459 = 3382U;
	int8_t x460 = -1;
	volatile int64_t t105 = -27041LL;

    t105 = (x457+(x458|(x459%x460)));

    if (t105 != -2LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x461 = -1;
	static int16_t x463 = INT16_MIN;
	static volatile int16_t x464 = 14;
	volatile int32_t t106 = -10;

    t106 = (x461+(x462|(x463%x464)));

    if (t106 != -5) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x466 = INT32_MAX;
	static int8_t x467 = -1;
	int16_t x468 = -1422;
	int32_t t107 = 3537390;

    t107 = (x465+(x466|(x467%x468)));

    if (t107 != 126) { NG(); } else { ; }
	
}

void f108(void) {
    	int32_t x469 = INT32_MIN;
	uint64_t x470 = 279LLU;
	int8_t x471 = INT8_MIN;
	static int16_t x472 = 55;
	volatile uint64_t t108 = 7LLU;

    t108 = (x469+(x470|(x471%x472)));

    if (t108 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x473 = UINT32_MAX;
	int64_t x474 = -1LL;
	int16_t x475 = -1;
	uint64_t x476 = UINT64_MAX;
	uint64_t t109 = 9LLU;

    t109 = (x473+(x474|(x475%x476)));

    if (t109 != 4294967294LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x477 = INT32_MIN;
	uint32_t x478 = 131051665U;
	static int32_t x480 = INT32_MIN;
	uint32_t t110 = 7312475U;

    t110 = (x477+(x478|(x479%x480)));

    if (t110 != 2147483537U) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x481 = 19LLU;
	int16_t x482 = -1;
	int8_t x483 = 1;
	int16_t x484 = INT16_MIN;
	static uint64_t t111 = 0LLU;

    t111 = (x481+(x482|(x483%x484)));

    if (t111 != 18LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x486 = INT8_MIN;
	int16_t x487 = -251;
	uint64_t x488 = 27180876LLU;
	volatile uint64_t t112 = 392LLU;

    t112 = (x485+(x486|(x487%x488)));

    if (t112 != 64LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x489 = UINT64_MAX;
	static volatile int64_t x490 = INT64_MIN;
	static int64_t x491 = INT64_MIN;
	int8_t x492 = INT8_MIN;
	uint64_t t113 = 1541000112733LLU;

    t113 = (x489+(x490|(x491%x492)));

    if (t113 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static volatile int8_t x494 = INT8_MAX;
	static int16_t x495 = INT16_MAX;
	uint8_t x496 = 3U;
	int32_t t114 = -1026437;

    t114 = (x493+(x494|(x495%x496)));

    if (t114 != 126) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x497 = INT16_MAX;
	volatile uint8_t x499 = 2U;
	int64_t x500 = INT64_MIN;

    t115 = (x497+(x498|(x499%x500)));

    if (t115 != 65534LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint8_t x501 = 11U;
	int32_t x502 = -3734;
	static uint8_t x503 = 1U;
	uint32_t t116 = 102568U;

    t116 = (x501+(x502|(x503%x504)));

    if (t116 != 4294963574U) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x509 = UINT32_MAX;
	int8_t x510 = -7;
	volatile int8_t x511 = INT8_MIN;
	int32_t x512 = -29552584;
	uint32_t t117 = 128820102U;

    t117 = (x509+(x510|(x511%x512)));

    if (t117 != 4294967288U) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x513 = 15LLU;
	int16_t x514 = -2726;
	static int64_t x515 = 29697732LL;
	uint8_t x516 = 115U;
	static uint64_t t118 = 1419515883733867076LLU;

    t118 = (x513+(x514|(x515%x516)));

    if (t118 != 18446744073709548906LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x521 = INT8_MAX;
	int32_t t119 = -26;

    t119 = (x521+(x522|(x523%x524)));

    if (t119 != 116) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x525 = 0;
	int32_t x526 = INT32_MIN;
	int16_t x527 = -1;
	volatile int8_t x528 = INT8_MIN;

    t120 = (x525+(x526|(x527%x528)));

    if (t120 != -1) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x530 = -1;
	int8_t x531 = INT8_MAX;
	volatile uint64_t t121 = 134035523036112LLU;

    t121 = (x529+(x530|(x531%x532)));

    if (t121 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x533 = UINT16_MAX;
	uint32_t x535 = UINT32_MAX;
	volatile int16_t x536 = -1;
	int64_t t122 = -8718728678LL;

    t122 = (x533+(x534|(x535%x536)));

    if (t122 != 65536LL) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint8_t x537 = 47U;
	volatile int64_t x538 = 247735386302LL;
	static int64_t x539 = -506346127LL;
	static int16_t x540 = -1;
	static int64_t t123 = 519LL;

    t123 = (x537+(x538|(x539%x540)));

    if (t123 != 247735386349LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x541 = -1;
	uint16_t x542 = 7566U;
	int16_t x543 = INT16_MAX;
	uint32_t x544 = 2112792289U;
	static uint32_t t124 = 199247622U;

    t124 = (x541+(x542|(x543%x544)));

    if (t124 != 32766U) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x547 = INT64_MIN;
	static uint16_t x548 = 310U;
	static volatile int64_t t125 = -18683047817978065LL;

    t125 = (x545+(x546|(x547%x548)));

    if (t125 != 8LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x549 = INT8_MIN;
	int8_t x550 = 0;
	static int8_t x551 = INT8_MIN;
	int32_t t126 = 43142;

    t126 = (x549+(x550|(x551%x552)));

    if (t126 != -256) { NG(); } else { ; }
	
}

void f127(void) {
    	uint16_t x553 = UINT16_MAX;
	volatile int32_t x554 = -2212;
	int64_t x555 = -1LL;
	int64_t t127 = -10272497058405LL;

    t127 = (x553+(x554|(x555%x556)));

    if (t127 != 65534LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x561 = INT64_MIN;
	int64_t x562 = 259870492478LL;
	uint32_t x563 = 2973U;
	volatile int64_t x564 = INT64_MIN;
	int64_t t128 = -981LL;

    t128 = (x561+(x562|(x563%x564)));

    if (t128 != -9223371776984281153LL) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x569 = 3U;
	volatile int64_t t129 = 0LL;

    t129 = (x569+(x570|(x571%x572)));

    if (t129 != 130LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x573 = INT16_MIN;
	int32_t x574 = 12;
	int16_t x575 = INT16_MIN;
	int64_t x576 = -13097794410262797LL;
	int64_t t130 = 113742169LL;

    t130 = (x573+(x574|(x575%x576)));

    if (t130 != -65524LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x578 = -3016;
	static int16_t x579 = INT16_MIN;
	static int16_t x580 = 10;
	int32_t t131 = -691385;

    t131 = (x577+(x578|(x579%x580)));

    if (t131 != -9) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint64_t x581 = 11LLU;
	int8_t x582 = 1;
	int16_t x583 = INT16_MIN;
	volatile uint64_t t132 = 59LLU;

    t132 = (x581+(x582|(x583%x584)));

    if (t132 != 18446744073709518860LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	static int32_t x585 = -1;
	volatile int8_t x586 = INT8_MIN;
	static int32_t x587 = -100338942;
	uint64_t x588 = 119LLU;
	static uint64_t t133 = 232169LLU;

    t133 = (x585+(x586|(x587%x588)));

    if (t133 != 18446744073709551527LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static int8_t x589 = INT8_MIN;
	int32_t x590 = INT32_MIN;
	volatile int32_t x591 = INT32_MAX;
	int64_t x592 = 1163927LL;
	volatile int64_t t134 = 6200054434LL;

    t134 = (x589+(x590|(x591%x592)));

    if (t134 != -2147445444LL) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint16_t x597 = 20192U;
	static int16_t x598 = -1;
	volatile int32_t t135 = 728;

    t135 = (x597+(x598|(x599%x600)));

    if (t135 != 20191) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile uint32_t x601 = 28157U;
	volatile int8_t x602 = 11;
	uint64_t x603 = 33374893328108315LLU;
	static volatile uint16_t x604 = 2841U;

    t136 = (x601+(x602|(x603%x604)));

    if (t136 != 28748LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x605 = 1852U;
	volatile int16_t x606 = INT16_MIN;
	int32_t x608 = -886;
	int32_t t137 = 1;

    t137 = (x605+(x606|(x607%x608)));

    if (t137 != 1460) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x609 = INT32_MIN;
	static volatile int64_t x610 = 12LL;
	int64_t x611 = -1679648848008886347LL;
	static int8_t x612 = 1;
	int64_t t138 = 407483517860LL;

    t138 = (x609+(x610|(x611%x612)));

    if (t138 != -2147483636LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x613 = 0;
	volatile int64_t x614 = -1LL;
	volatile uint16_t x615 = 19929U;
	volatile int64_t t139 = -10751398204LL;

    t139 = (x613+(x614|(x615%x616)));

    if (t139 != -1LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static int8_t x617 = 2;
	volatile int64_t x620 = INT64_MAX;
	static volatile uint64_t t140 = 4474486516725820275LLU;

    t140 = (x617+(x618|(x619%x620)));

    if (t140 != 1LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x621 = UINT32_MAX;
	int64_t x622 = 17946171405LL;
	int16_t x623 = -409;
	int16_t x624 = -55;
	int64_t t141 = 5LL;

    t141 = (x621+(x622|(x623%x624)));

    if (t141 != 4294967276LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x625 = UINT32_MAX;
	static uint8_t x626 = 3U;
	uint16_t x627 = UINT16_MAX;
	int32_t x628 = INT32_MIN;
	volatile uint32_t t142 = 5933U;

    t142 = (x625+(x626|(x627%x628)));

    if (t142 != 65534U) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x629 = -1LL;
	volatile int8_t x630 = INT8_MIN;
	static int32_t x631 = -1;
	volatile uint8_t x632 = UINT8_MAX;
	int64_t t143 = -33175035961501136LL;

    t143 = (x629+(x630|(x631%x632)));

    if (t143 != -2LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x633 = 869531746LLU;
	static uint32_t x634 = 289U;
	int64_t x635 = -1LL;
	int64_t x636 = -79145LL;
	volatile uint64_t t144 = 549LLU;

    t144 = (x633+(x634|(x635%x636)));

    if (t144 != 869531745LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x637 = -1LL;
	volatile int8_t x638 = -1;
	static uint64_t x639 = 1474491052916324LLU;
	volatile uint32_t x640 = 20823521U;
	static uint64_t t145 = 23602946842104LLU;

    t145 = (x637+(x638|(x639%x640)));

    if (t145 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x641 = INT32_MAX;
	int8_t x642 = -1;
	int16_t x643 = INT16_MIN;
	int64_t x644 = INT64_MIN;

    t146 = (x641+(x642|(x643%x644)));

    if (t146 != 2147483646LL) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x649 = INT64_MIN;
	volatile int32_t x650 = 32;
	uint16_t x651 = 7U;
	static int64_t x652 = -1LL;
	static volatile int64_t t147 = 4253770LL;

    t147 = (x649+(x650|(x651%x652)));

    if (t147 != -9223372036854775776LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x653 = UINT8_MAX;
	uint8_t x654 = UINT8_MAX;
	uint64_t x655 = 6831466607582LLU;
	int32_t x656 = 78061487;
	volatile uint64_t t148 = 13147LLU;

    t148 = (x653+(x654|(x655%x656)));

    if (t148 != 71696126LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x657 = INT8_MIN;
	int8_t x658 = 2;
	volatile int32_t x659 = INT32_MAX;
	int64_t x660 = -1LL;
	volatile int64_t t149 = -405712LL;

    t149 = (x657+(x658|(x659%x660)));

    if (t149 != -126LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x661 = 19864LLU;
	volatile uint16_t x664 = 1214U;
	uint64_t t150 = 20023LLU;

    t150 = (x661+(x662|(x663%x664)));

    if (t150 != 19863LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x665 = UINT32_MAX;
	uint16_t x666 = UINT16_MAX;
	int64_t x668 = INT64_MAX;
	volatile int64_t t151 = -242511LL;

    t151 = (x665+(x666|(x667%x668)));

    if (t151 != 4295032830LL) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x669 = 3U;
	volatile int32_t x672 = 1601668;

    t152 = (x669+(x670|(x671%x672)));

    if (t152 != 2LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int32_t x673 = 155753;
	uint8_t x674 = 4U;
	uint16_t x675 = 9070U;
	static int32_t x676 = INT32_MIN;

    t153 = (x673+(x674|(x675%x676)));

    if (t153 != 164823) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint8_t x677 = UINT8_MAX;
	uint32_t x678 = 10577288U;
	static int32_t x680 = 715;
	volatile uint32_t t154 = 105446537U;

    t154 = (x677+(x678|(x679%x680)));

    if (t154 != 10577546U) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x681 = INT16_MAX;
	int16_t x682 = INT16_MAX;
	static volatile int8_t x683 = INT8_MIN;
	volatile int8_t x684 = -14;

    t155 = (x681+(x682|(x683%x684)));

    if (t155 != 32766) { NG(); } else { ; }
	
}

void f156(void) {
    	static uint8_t x686 = UINT8_MAX;
	volatile uint32_t x687 = 43537305U;
	volatile int64_t t156 = -369LL;

    t156 = (x685+(x686|(x687%x688)));

    if (t156 != -1001116920LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x689 = 82374U;
	uint32_t x691 = UINT32_MAX;

    t157 = (x689+(x690|(x691%x692)));

    if (t157 != 82421U) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x693 = -23053LL;
	uint8_t x694 = 0U;
	uint64_t x695 = 22348161362LLU;
	uint64_t t158 = 199208055912300LLU;

    t158 = (x693+(x694|(x695%x696)));

    if (t158 != 22348138309LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	static int8_t x701 = 1;
	int16_t x703 = 19;
	int64_t x704 = INT64_MIN;

    t159 = (x701+(x702|(x703%x704)));

    if (t159 != 32768LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x706 = INT8_MAX;
	uint32_t x707 = 492U;
	volatile int8_t x708 = -63;
	volatile uint32_t t160 = 7U;

    t160 = (x705+(x706|(x707%x708)));

    if (t160 != 2147484159U) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint32_t x709 = UINT32_MAX;
	int8_t x710 = -1;
	int64_t x711 = INT64_MIN;
	int64_t t161 = -1LL;

    t161 = (x709+(x710|(x711%x712)));

    if (t161 != 4294967294LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x713 = 415U;
	int32_t x714 = -1;
	uint16_t x716 = 1U;
	int64_t t162 = 2902LL;

    t162 = (x713+(x714|(x715%x716)));

    if (t162 != 414LL) { NG(); } else { ; }
	
}

void f163(void) {
    	static int16_t x717 = -1;
	int32_t x718 = -3;
	int64_t x719 = INT64_MIN;
	static volatile int64_t t163 = -1192205838975423444LL;

    t163 = (x717+(x718|(x719%x720)));

    if (t163 != -4LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x721 = UINT64_MAX;
	uint16_t x722 = UINT16_MAX;
	int64_t x724 = INT64_MAX;

    t164 = (x721+(x722|(x723%x724)));

    if (t164 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	uint64_t x725 = 895811812934056446LLU;
	int32_t x726 = INT32_MAX;
	int16_t x727 = INT16_MIN;
	static int8_t x728 = 50;

    t165 = (x725+(x726|(x727%x728)));

    if (t165 != 895811812934056445LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x731 = 0;
	int8_t x732 = -1;
	volatile int32_t t166 = -2;

    t166 = (x729+(x730|(x731%x732)));

    if (t166 != -32710) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x733 = 1;
	uint64_t x734 = 6823LLU;
	int64_t x736 = INT64_MIN;
	volatile uint64_t t167 = 653675821633039509LLU;

    t167 = (x733+(x734|(x735%x736)));

    if (t167 != 6824LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint64_t x737 = UINT64_MAX;
	volatile int16_t x738 = -1;
	uint64_t t168 = 29302091384470LLU;

    t168 = (x737+(x738|(x739%x740)));

    if (t168 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x743 = 5109241LL;
	int16_t x744 = INT16_MIN;
	int64_t t169 = 2044677LL;

    t169 = (x741+(x742|(x743%x744)));

    if (t169 != 2147483646LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x747 = 1;
	volatile int64_t x748 = INT64_MAX;
	volatile int64_t t170 = -229577346LL;

    t170 = (x745+(x746|(x747%x748)));

    if (t170 != -2147483595LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x749 = INT8_MIN;
	int8_t x750 = 4;
	int16_t x751 = INT16_MIN;
	uint8_t x752 = 1U;
	volatile int32_t t171 = 101399322;

    t171 = (x749+(x750|(x751%x752)));

    if (t171 != -124) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x753 = INT64_MIN;
	volatile int64_t x754 = 1862975LL;
	uint64_t x755 = UINT64_MAX;
	int64_t x756 = -1LL;
	volatile uint64_t t172 = 2413LLU;

    t172 = (x753+(x754|(x755%x756)));

    if (t172 != 9223372036856638783LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x757 = 869318942075586944LLU;
	int16_t x758 = -1;
	uint8_t x760 = 6U;
	static uint64_t t173 = 7LLU;

    t173 = (x757+(x758|(x759%x760)));

    if (t173 != 869318942075586943LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x761 = INT16_MIN;
	volatile int8_t x763 = INT8_MIN;
	uint32_t x764 = 1622005712U;

    t174 = (x761+(x762|(x763%x764)));

    if (t174 != 1068457978U) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint16_t x765 = 378U;
	static volatile int64_t x766 = -1LL;
	static uint64_t x767 = UINT64_MAX;
	int64_t x768 = -1LL;

    t175 = (x765+(x766|(x767%x768)));

    if (t175 != 377LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	static volatile uint16_t x769 = 1U;
	int8_t x770 = -1;
	int64_t x771 = -70445982749405346LL;
	static volatile int64_t t176 = 76166001130058LL;

    t176 = (x769+(x770|(x771%x772)));

    if (t176 != 0LL) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x773 = 540341494321288130LLU;
	uint32_t x776 = UINT32_MAX;
	uint64_t t177 = 4757LLU;

    t177 = (x773+(x774|(x775%x776)));

    if (t177 != 540341498616255425LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x777 = INT8_MIN;
	int32_t x779 = INT32_MIN;
	volatile uint64_t x780 = 3031192LLU;
	static uint64_t t178 = 492475865890258LLU;

    t178 = (x777+(x778|(x779%x780)));

    if (t178 != 2283745LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x781 = 2169285218883445517LLU;
	int16_t x782 = -8935;
	uint64_t t179 = 8411001324137046010LLU;

    t179 = (x781+(x782|(x783%x784)));

    if (t179 != 2169285218883436714LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x785 = UINT16_MAX;
	uint8_t x786 = 26U;
	int8_t x788 = INT8_MIN;

    t180 = (x785+(x786|(x787%x788)));

    if (t180 != 65662LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x790 = INT16_MAX;
	int16_t x792 = -1;
	static uint64_t t181 = 21958791LLU;

    t181 = (x789+(x790|(x791%x792)));

    if (t181 != 4493855457300LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x793 = 4055U;
	int8_t x795 = -7;
	static uint8_t x796 = UINT8_MAX;
	volatile uint32_t t182 = 871U;

    t182 = (x793+(x794|(x795%x796)));

    if (t182 != 4052U) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x798 = 4036;
	int64_t x799 = INT64_MIN;
	volatile int64_t t183 = -5750658737LL;

    t183 = (x797+(x798|(x799%x800)));

    if (t183 != 9223372036176797645LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x802 = UINT8_MAX;
	int16_t x803 = INT16_MAX;
	int8_t x804 = INT8_MIN;
	volatile int32_t t184 = 1757;

    t184 = (x801+(x802|(x803%x804)));

    if (t184 != 65790) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint32_t x805 = 225948776U;
	static int16_t x806 = -1;
	int8_t x807 = INT8_MAX;
	int16_t x808 = INT16_MIN;

    t185 = (x805+(x806|(x807%x808)));

    if (t185 != 225948775U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint64_t x809 = 11099101244134LLU;
	int32_t x810 = INT32_MIN;
	volatile int64_t x811 = INT64_MAX;
	int16_t x812 = -655;
	uint64_t t186 = 250627657287187LLU;

    t186 = (x809+(x810|(x811%x812)));

    if (t186 != 11096953760583LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x813 = INT16_MIN;
	uint8_t x814 = UINT8_MAX;
	static int32_t x815 = INT32_MIN;
	volatile uint32_t x816 = UINT32_MAX;
	volatile uint32_t t187 = 14995U;

    t187 = (x813+(x814|(x815%x816)));

    if (t187 != 2147451135U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x817 = 11577U;
	static uint16_t x818 = UINT16_MAX;
	static int16_t x819 = INT16_MIN;
	volatile uint64_t x820 = 18LLU;
	static uint64_t t188 = 1LLU;

    t188 = (x817+(x818|(x819%x820)));

    if (t188 != 77112LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x821 = 581442490U;
	int64_t x822 = INT64_MIN;
	volatile uint64_t x824 = 2108321581075LLU;
	uint64_t t189 = 1373786LLU;

    t189 = (x821+(x822|(x823%x824)));

    if (t189 != 9223372037436218553LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x826 = INT8_MIN;
	static volatile int32_t x827 = INT32_MIN;
	volatile int16_t x828 = -1;
	volatile int32_t t190 = -294549;

    t190 = (x825+(x826|(x827%x828)));

    if (t190 != 15520) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x833 = -7;
	volatile int8_t x834 = 2;
	static uint8_t x836 = UINT8_MAX;
	int32_t t191 = 14766902;

    t191 = (x833+(x834|(x835%x836)));

    if (t191 != -5) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x841 = -1;
	int16_t x843 = INT16_MIN;
	uint8_t x844 = UINT8_MAX;
	volatile int64_t t192 = -203699LL;

    t192 = (x841+(x842|(x843%x844)));

    if (t192 != -79LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static int64_t x845 = INT64_MAX;
	static volatile int16_t x846 = -1;
	int8_t x847 = -1;
	static int64_t x848 = INT64_MIN;
	static volatile int64_t t193 = 44525346837LL;

    t193 = (x845+(x846|(x847%x848)));

    if (t193 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x849 = INT16_MIN;
	static int8_t x850 = INT8_MAX;
	volatile int64_t x851 = INT64_MIN;
	int32_t x852 = INT32_MIN;
	int64_t t194 = 27760963LL;

    t194 = (x849+(x850|(x851%x852)));

    if (t194 != -32641LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x854 = 979LL;
	int64_t x855 = -304059532311234340LL;
	volatile int64_t t195 = 203121609LL;

    t195 = (x853+(x854|(x855%x856)));

    if (t195 != 9223372036854775774LL) { NG(); } else { ; }
	
}

void f196(void) {
    	static uint16_t x857 = 551U;
	int16_t x858 = INT16_MIN;
	int32_t x859 = -1;
	int16_t x860 = -1;
	static volatile int32_t t196 = 0;

    t196 = (x857+(x858|(x859%x860)));

    if (t196 != -32217) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int8_t x861 = INT8_MIN;
	static int32_t x862 = 636151;
	int64_t x864 = -1LL;
	volatile int64_t t197 = -17LL;

    t197 = (x861+(x862|(x863%x864)));

    if (t197 != 636023LL) { NG(); } else { ; }
	
}

void f198(void) {
    	static int64_t x865 = -1LL;
	static int32_t x868 = INT32_MAX;
	int64_t t198 = -14096926886948LL;

    t198 = (x865+(x866|(x867%x868)));

    if (t198 != -2LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x869 = INT16_MAX;
	uint16_t x870 = 1U;
	volatile int8_t x871 = -1;
	uint32_t x872 = 4678950U;
	volatile uint32_t t199 = 1U;

    t199 = (x869+(x870|(x871%x872)));

    if (t199 != 4402912U) { NG(); } else { ; }
	
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

