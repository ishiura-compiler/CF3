
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

int16_t x23 = INT16_MIN;
volatile int64_t x32 = INT64_MIN;
int64_t x33 = -1LL;
volatile uint32_t x44 = 529U;
uint8_t x48 = UINT8_MAX;
uint16_t x53 = 2U;
uint64_t x54 = UINT64_MAX;
static volatile int8_t x60 = 22;
int8_t x61 = 2;
static volatile uint8_t x66 = 7U;
uint8_t x68 = UINT8_MAX;
uint16_t x71 = 1U;
uint32_t t15 = 139551U;
volatile uint64_t x73 = 119538LLU;
int16_t x79 = INT16_MIN;
int64_t x80 = INT64_MIN;
volatile int32_t x84 = INT32_MIN;
uint16_t x90 = 9U;
volatile int32_t t20 = 50352375;
int32_t x96 = INT32_MAX;
int32_t x112 = INT32_MIN;
uint8_t x114 = 15U;
volatile int64_t x121 = -1LL;
int16_t x122 = INT16_MIN;
volatile int8_t x124 = 3;
int8_t x129 = INT8_MAX;
int32_t x131 = INT32_MIN;
int64_t x134 = INT64_MAX;
int64_t x135 = -1LL;
volatile int64_t t31 = -754509LL;
uint16_t x151 = 204U;
volatile int64_t x154 = INT64_MAX;
int64_t x162 = -1LL;
uint64_t x164 = UINT64_MAX;
volatile uint64_t t34 = 311218126LLU;
int32_t x170 = 36399655;
static uint8_t x175 = UINT8_MAX;
int16_t x178 = INT16_MIN;
int32_t x180 = INT32_MIN;
volatile int32_t t38 = 68383;
int8_t x184 = 1;
int32_t x186 = INT32_MIN;
int16_t x188 = INT16_MIN;
volatile int32_t t41 = 0;
static int64_t x208 = INT64_MIN;
uint64_t t47 = 3376286LLU;
uint16_t x221 = 1U;
volatile int32_t x228 = INT32_MAX;
int32_t x230 = INT32_MIN;
uint16_t x231 = 3904U;
uint8_t x266 = UINT8_MAX;
static uint16_t x269 = 8U;
uint64_t t56 = 7LLU;
static uint16_t x276 = 6U;
uint8_t x277 = 1U;
int16_t x286 = -377;
uint64_t x296 = 2112461727050028336LLU;
static uint16_t x300 = 5857U;
static volatile uint8_t x303 = 1U;
int8_t x305 = 3;
volatile int32_t x306 = INT32_MIN;
int32_t x307 = INT32_MAX;
uint8_t x316 = 5U;
int32_t x319 = INT32_MIN;
int8_t x324 = 1;
int8_t x327 = INT8_MAX;
int16_t x330 = INT16_MIN;
uint32_t x341 = 89U;
int64_t x345 = 2556071141094LL;
int16_t x346 = -1;
int8_t x347 = 14;
uint8_t x349 = 1U;
int32_t x358 = -12;
int32_t t79 = -13503;
volatile int64_t x371 = 266200207LL;
uint16_t x374 = 768U;
uint32_t t84 = 16019U;
int64_t x385 = INT64_MIN;
int64_t t85 = 17623440LL;
uint8_t x396 = UINT8_MAX;
static volatile uint32_t t87 = 838U;
volatile int8_t x397 = INT8_MAX;
uint64_t x414 = UINT64_MAX;
int16_t x422 = INT16_MAX;
uint32_t t96 = 3U;
static uint64_t x441 = UINT64_MAX;
int16_t x445 = -111;
static volatile int32_t t99 = -3487833;
volatile int16_t x453 = 12763;
int8_t x455 = INT8_MAX;
int64_t x456 = INT64_MIN;
int64_t x465 = 9901788246559152LL;
int8_t x468 = -1;
volatile int64_t t104 = 17374806LL;
static int64_t t106 = 568385593199561LL;
int32_t x480 = INT32_MAX;
uint64_t x481 = 87756934750LLU;
int16_t x483 = INT16_MAX;
static int64_t x484 = INT64_MAX;
volatile int16_t x490 = INT16_MAX;
volatile uint32_t t111 = 64212U;
int32_t x512 = INT32_MIN;
int32_t x517 = -1;
volatile int16_t x522 = INT16_MAX;
static volatile int16_t x523 = -1;
int32_t x533 = 2194;
static uint64_t x538 = 20LLU;
int32_t t121 = -2;
volatile int32_t t122 = 0;
uint64_t x553 = 5468404358LLU;
int8_t x555 = INT8_MIN;
volatile uint64_t x560 = UINT64_MAX;
int8_t x574 = INT8_MIN;
static int64_t x577 = -1LL;
volatile int64_t t130 = 2557396835806LL;
int8_t x584 = INT8_MAX;
uint32_t x585 = 806980U;
int64_t x586 = -5680LL;
int8_t x588 = INT8_MIN;
volatile uint64_t t133 = 180325854256227LLU;
int16_t x597 = INT16_MIN;
uint8_t x598 = 5U;
int32_t x602 = INT32_MAX;
int8_t x621 = INT8_MAX;
int8_t x625 = INT8_MAX;
static int32_t x629 = 27850126;
static volatile int32_t x639 = 41198605;
uint8_t x660 = 12U;
static uint64_t x663 = UINT64_MAX;
int16_t x668 = INT16_MIN;
int64_t x672 = INT64_MAX;
static volatile int16_t x680 = INT16_MAX;
int64_t x687 = INT64_MIN;
uint64_t x688 = UINT64_MAX;
volatile int64_t t155 = -33851LL;
uint64_t x690 = UINT64_MAX;
static volatile int32_t x693 = -1;
int32_t x713 = -1;
uint16_t x728 = 0U;
uint64_t x729 = UINT64_MAX;
uint64_t x730 = 12555841948LLU;
volatile int8_t x731 = -23;
int8_t x735 = -63;
volatile int32_t x751 = INT32_MIN;
int16_t x757 = 0;
int32_t x769 = INT32_MIN;
volatile int64_t t175 = 489LL;
volatile int8_t x788 = INT8_MIN;
static uint32_t x803 = 3U;
int64_t x810 = 109830549689330LL;
uint64_t x812 = 12LLU;
uint32_t x813 = 16641U;
static volatile int32_t x823 = INT32_MAX;
volatile int16_t x825 = INT16_MIN;
int64_t t187 = 144806577LL;
int16_t x835 = -1;
int8_t x839 = -1;
uint32_t x841 = 975U;
int8_t x844 = INT8_MIN;
uint64_t x850 = UINT64_MAX;
volatile uint8_t x854 = UINT8_MAX;
volatile int16_t x855 = -1;
static volatile uint32_t t192 = 4U;
int8_t x868 = -24;
int64_t x871 = INT64_MIN;
int32_t t195 = 1;
int8_t x880 = INT8_MAX;
int16_t x882 = -1;


void f0(void) {
    	static int64_t x5 = -14LL;
	int16_t x6 = INT16_MAX;
	int8_t x7 = INT8_MIN;
	int16_t x8 = INT16_MIN;
	volatile int64_t t0 = 601786075606391LL;

    t0 = (x5+(x6|(x7>x8)));

    if (t0 != 32753LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x9 = -18;
	uint8_t x10 = UINT8_MAX;
	int64_t x11 = INT64_MAX;
	uint16_t x12 = UINT16_MAX;
	static int32_t t1 = -24582;

    t1 = (x9+(x10|(x11>x12)));

    if (t1 != 237) { NG(); } else { ; }
	
}

void f2(void) {
    	static volatile uint32_t x17 = 2914U;
	static int64_t x18 = INT64_MIN;
	static volatile uint64_t x19 = 47456172584926LLU;
	static int32_t x20 = INT32_MIN;
	int64_t t2 = 71732101769LL;

    t2 = (x17+(x18|(x19>x20)));

    if (t2 != -9223372036854772894LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x21 = INT32_MAX;
	volatile uint32_t x22 = UINT32_MAX;
	int64_t x24 = INT64_MAX;
	uint32_t t3 = 60708711U;

    t3 = (x21+(x22|(x23>x24)));

    if (t3 != 2147483646U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int64_t x25 = 9187452284LL;
	int16_t x26 = INT16_MIN;
	uint64_t x27 = UINT64_MAX;
	uint16_t x28 = 672U;
	volatile int64_t t4 = 1LL;

    t4 = (x25+(x26|(x27>x28)));

    if (t4 != 9187419517LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x29 = -222;
	static int64_t x30 = INT64_MAX;
	uint64_t x31 = UINT64_MAX;
	int64_t t5 = 34048013459972518LL;

    t5 = (x29+(x30|(x31>x32)));

    if (t5 != 9223372036854775585LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x34 = 10U;
	int64_t x35 = INT64_MIN;
	uint64_t x36 = 116197510950LLU;
	static volatile int64_t t6 = -391132LL;

    t6 = (x33+(x34|(x35>x36)));

    if (t6 != 10LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x37 = -1;
	int32_t x38 = -1;
	uint32_t x39 = 28213U;
	uint8_t x40 = UINT8_MAX;
	volatile int32_t t7 = 29;

    t7 = (x37+(x38|(x39>x40)));

    if (t7 != -2) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x41 = 0U;
	volatile int32_t x42 = INT32_MIN;
	static int8_t x43 = 13;
	int32_t t8 = INT32_MIN;

    t8 = (x41+(x42|(x43>x44)));

    if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint64_t x45 = 5642395985LLU;
	uint32_t x46 = 1003063820U;
	static int16_t x47 = -1;
	volatile uint64_t t9 = 7372488330563089LLU;

    t9 = (x45+(x46|(x47>x48)));

    if (t9 != 6645459805LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x49 = 1U;
	static int8_t x50 = INT8_MIN;
	int64_t x51 = INT64_MIN;
	static int8_t x52 = 29;
	static volatile int32_t t10 = -3383;

    t10 = (x49+(x50|(x51>x52)));

    if (t10 != -127) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int32_t x55 = INT32_MAX;
	volatile int64_t x56 = -1LL;
	uint64_t t11 = 623842318116015LLU;

    t11 = (x53+(x54|(x55>x56)));

    if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x57 = INT16_MAX;
	volatile uint64_t x58 = UINT64_MAX;
	int8_t x59 = -1;
	static uint64_t t12 = 610126176968LLU;

    t12 = (x57+(x58|(x59>x60)));

    if (t12 != 32766LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint32_t x62 = 1287826U;
	static uint8_t x63 = UINT8_MAX;
	int32_t x64 = -3;
	volatile uint32_t t13 = 176196U;

    t13 = (x61+(x62|(x63>x64)));

    if (t13 != 1287829U) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x65 = UINT8_MAX;
	int8_t x67 = -1;
	int32_t t14 = -180;

    t14 = (x65+(x66|(x67>x68)));

    if (t14 != 262) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x69 = 172584U;
	uint32_t x70 = 3927941U;
	volatile uint16_t x72 = UINT16_MAX;

    t15 = (x69+(x70|(x71>x72)));

    if (t15 != 4100525U) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x74 = INT64_MIN;
	static int32_t x75 = 2;
	int8_t x76 = 0;
	volatile uint64_t t16 = 1071281693610LLU;

    t16 = (x73+(x74|(x75>x76)));

    if (t16 != 9223372036854895347LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x77 = 357;
	static int16_t x78 = INT16_MIN;
	volatile int32_t t17 = -6545577;

    t17 = (x77+(x78|(x79>x80)));

    if (t17 != -32410) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x81 = 4U;
	int8_t x82 = -1;
	static int8_t x83 = INT8_MIN;
	volatile int32_t t18 = -3969;

    t18 = (x81+(x82|(x83>x84)));

    if (t18 != 3) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint8_t x85 = UINT8_MAX;
	volatile int64_t x86 = INT64_MIN;
	uint8_t x87 = 1U;
	volatile int16_t x88 = INT16_MAX;
	volatile int64_t t19 = 9473959LL;

    t19 = (x85+(x86|(x87>x88)));

    if (t19 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x89 = 14724U;
	int8_t x91 = -7;
	uint16_t x92 = UINT16_MAX;

    t20 = (x89+(x90|(x91>x92)));

    if (t20 != 14733) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x93 = 18U;
	static int32_t x94 = INT32_MIN;
	int8_t x95 = -1;
	int32_t t21 = 886;

    t21 = (x93+(x94|(x95>x96)));

    if (t21 != -2147483630) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x101 = INT16_MIN;
	volatile uint64_t x102 = 48LLU;
	static int64_t x103 = INT64_MIN;
	int32_t x104 = INT32_MIN;
	uint64_t t22 = 254957LLU;

    t22 = (x101+(x102|(x103>x104)));

    if (t22 != 18446744073709518896LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int16_t x105 = INT16_MIN;
	int8_t x106 = INT8_MAX;
	int64_t x107 = INT64_MAX;
	uint8_t x108 = 1U;
	int32_t t23 = 1;

    t23 = (x105+(x106|(x107>x108)));

    if (t23 != -32641) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x109 = INT8_MIN;
	volatile int16_t x110 = 11536;
	int8_t x111 = -1;
	volatile int32_t t24 = -101697;

    t24 = (x109+(x110|(x111>x112)));

    if (t24 != 11409) { NG(); } else { ; }
	
}

void f25(void) {
    	int8_t x113 = INT8_MIN;
	int64_t x115 = -13525857933794LL;
	int16_t x116 = 1460;
	int32_t t25 = -12841;

    t25 = (x113+(x114|(x115>x116)));

    if (t25 != -113) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile uint32_t x117 = 257543U;
	static uint64_t x118 = 528691354050365LLU;
	volatile uint8_t x119 = 10U;
	static int32_t x120 = 114741;
	static uint64_t t26 = 3755LLU;

    t26 = (x117+(x118|(x119>x120)));

    if (t26 != 528691354307908LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x123 = UINT32_MAX;
	static volatile int64_t t27 = -103137342761542035LL;

    t27 = (x121+(x122|(x123>x124)));

    if (t27 != -32768LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint16_t x125 = 52U;
	int8_t x126 = INT8_MAX;
	int64_t x127 = -1LL;
	volatile int64_t x128 = INT64_MAX;
	static volatile int32_t t28 = 1;

    t28 = (x125+(x126|(x127>x128)));

    if (t28 != 179) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x130 = 44U;
	int64_t x132 = INT64_MIN;
	volatile int32_t t29 = -3;

    t29 = (x129+(x130|(x131>x132)));

    if (t29 != 172) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x133 = INT8_MIN;
	static int8_t x136 = INT8_MAX;
	int64_t t30 = 822356349LL;

    t30 = (x133+(x134|(x135>x136)));

    if (t30 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x137 = INT8_MAX;
	int64_t x138 = INT64_MIN;
	int8_t x139 = -1;
	uint16_t x140 = 5330U;

    t31 = (x137+(x138|(x139>x140)));

    if (t31 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x149 = INT16_MIN;
	int8_t x150 = INT8_MIN;
	uint64_t x152 = 6675702725LLU;
	int32_t t32 = 3;

    t32 = (x149+(x150|(x151>x152)));

    if (t32 != -32896) { NG(); } else { ; }
	
}

void f33(void) {
    	static int32_t x153 = INT32_MIN;
	static volatile int16_t x155 = INT16_MAX;
	static uint16_t x156 = 1769U;
	static int64_t t33 = 314388566891060693LL;

    t33 = (x153+(x154|(x155>x156)));

    if (t33 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x161 = UINT64_MAX;
	int64_t x163 = INT64_MIN;

    t34 = (x161+(x162|(x163>x164)));

    if (t34 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x165 = 12974890525054703LLU;
	uint8_t x166 = 18U;
	volatile int32_t x167 = INT32_MIN;
	int8_t x168 = INT8_MIN;
	volatile uint64_t t35 = 7973184164LLU;

    t35 = (x165+(x166|(x167>x168)));

    if (t35 != 12974890525054721LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x169 = INT16_MIN;
	static uint64_t x171 = 584923204913051LLU;
	volatile int8_t x172 = 3;
	int32_t t36 = -764666;

    t36 = (x169+(x170|(x171>x172)));

    if (t36 != 36366887) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x173 = INT64_MAX;
	static int16_t x174 = INT16_MIN;
	static int16_t x176 = INT16_MIN;
	int64_t t37 = -62LL;

    t37 = (x173+(x174|(x175>x176)));

    if (t37 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int8_t x177 = 2;
	int64_t x179 = INT64_MAX;

    t38 = (x177+(x178|(x179>x180)));

    if (t38 != -32765) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x181 = INT64_MIN;
	static volatile uint64_t x182 = 1395342884180LLU;
	int8_t x183 = -1;
	uint64_t t39 = 26714LLU;

    t39 = (x181+(x182|(x183>x184)));

    if (t39 != 9223373432197659988LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint64_t x185 = UINT64_MAX;
	int32_t x187 = -186747;
	volatile uint64_t t40 = 8011064737512LLU;

    t40 = (x185+(x186|(x187>x188)));

    if (t40 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x189 = 0U;
	uint16_t x190 = 0U;
	uint8_t x191 = 113U;
	int16_t x192 = INT16_MIN;

    t41 = (x189+(x190|(x191>x192)));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x193 = 2436233545678371LL;
	static uint16_t x194 = 119U;
	int16_t x195 = INT16_MIN;
	volatile uint16_t x196 = 22209U;
	static int64_t t42 = -349084520071LL;

    t42 = (x193+(x194|(x195>x196)));

    if (t42 != 2436233545678490LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x197 = -1LL;
	volatile uint64_t x198 = 10875947810826809LLU;
	int64_t x199 = -27421336306560910LL;
	uint8_t x200 = UINT8_MAX;
	uint64_t t43 = 142814942778LLU;

    t43 = (x197+(x198|(x199>x200)));

    if (t43 != 10875947810826808LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint32_t x205 = UINT32_MAX;
	int32_t x206 = INT32_MIN;
	int64_t x207 = INT64_MAX;
	uint32_t t44 = 1589U;

    t44 = (x205+(x206|(x207>x208)));

    if (t44 != 2147483648U) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x209 = -1;
	uint16_t x210 = UINT16_MAX;
	static uint16_t x211 = UINT16_MAX;
	uint32_t x212 = 12U;
	int32_t t45 = -14613;

    t45 = (x209+(x210|(x211>x212)));

    if (t45 != 65534) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x213 = INT8_MIN;
	int16_t x214 = -1;
	static int64_t x215 = INT64_MIN;
	int16_t x216 = -252;
	volatile int32_t t46 = 1591675;

    t46 = (x213+(x214|(x215>x216)));

    if (t46 != -129) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x217 = UINT16_MAX;
	uint64_t x218 = 14301572915654258LLU;
	static volatile uint64_t x219 = UINT64_MAX;
	static volatile uint64_t x220 = UINT64_MAX;

    t47 = (x217+(x218|(x219>x220)));

    if (t47 != 14301572915719793LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x222 = UINT32_MAX;
	int8_t x223 = 1;
	uint64_t x224 = UINT64_MAX;
	static uint32_t t48 = 2U;

    t48 = (x221+(x222|(x223>x224)));

    if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
    	int32_t x225 = INT32_MIN;
	volatile uint64_t x226 = 7522LLU;
	uint32_t x227 = 343886560U;
	uint64_t t49 = 29483088287LLU;

    t49 = (x225+(x226|(x227>x228)));

    if (t49 != 18446744071562075490LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x229 = 6191;
	static int16_t x232 = 1854;
	volatile int32_t t50 = 26983259;

    t50 = (x229+(x230|(x231>x232)));

    if (t50 != -2147477456) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile uint32_t x245 = 1U;
	volatile int16_t x246 = 42;
	int32_t x247 = -1;
	static int16_t x248 = -1;
	static volatile uint32_t t51 = 596493572U;

    t51 = (x245+(x246|(x247>x248)));

    if (t51 != 43U) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x249 = -1;
	int16_t x250 = INT16_MIN;
	static int32_t x251 = INT32_MIN;
	static int64_t x252 = INT64_MIN;
	static int32_t t52 = 171;

    t52 = (x249+(x250|(x251>x252)));

    if (t52 != -32768) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x257 = INT8_MIN;
	uint8_t x258 = 1U;
	uint8_t x259 = 1U;
	static volatile int32_t x260 = 461;
	int32_t t53 = -1;

    t53 = (x257+(x258|(x259>x260)));

    if (t53 != -127) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x261 = 91U;
	int64_t x262 = INT64_MIN;
	int64_t x263 = INT64_MIN;
	int32_t x264 = INT32_MAX;
	volatile int64_t t54 = -1109450LL;

    t54 = (x261+(x262|(x263>x264)));

    if (t54 != -9223372036854775717LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x265 = INT32_MIN;
	static uint8_t x267 = UINT8_MAX;
	int16_t x268 = -497;
	volatile int32_t t55 = 0;

    t55 = (x265+(x266|(x267>x268)));

    if (t55 != -2147483393) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x270 = UINT64_MAX;
	uint32_t x271 = 45201959U;
	static int8_t x272 = -1;

    t56 = (x269+(x270|(x271>x272)));

    if (t56 != 7LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int16_t x273 = -1;
	static int32_t x274 = INT32_MAX;
	static uint16_t x275 = 28U;
	int32_t t57 = -1025443609;

    t57 = (x273+(x274|(x275>x276)));

    if (t57 != 2147483646) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x278 = INT8_MIN;
	int16_t x279 = 2823;
	int16_t x280 = INT16_MIN;
	static volatile int32_t t58 = 304;

    t58 = (x277+(x278|(x279>x280)));

    if (t58 != -126) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x281 = 0U;
	uint64_t x282 = 523904727614LLU;
	int32_t x283 = INT32_MIN;
	uint64_t x284 = 12568LLU;
	volatile uint64_t t59 = 0LLU;

    t59 = (x281+(x282|(x283>x284)));

    if (t59 != 523904727615LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint64_t x285 = UINT64_MAX;
	int32_t x287 = -1603;
	int8_t x288 = INT8_MIN;
	uint64_t t60 = 1651085913421051LLU;

    t60 = (x285+(x286|(x287>x288)));

    if (t60 != 18446744073709551238LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x289 = -113143;
	int64_t x290 = INT64_MAX;
	uint8_t x291 = 1U;
	volatile int8_t x292 = 18;
	volatile int64_t t61 = 625LL;

    t61 = (x289+(x290|(x291>x292)));

    if (t61 != 9223372036854662664LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x293 = INT8_MAX;
	static int64_t x294 = INT64_MIN;
	int32_t x295 = INT32_MIN;
	volatile int64_t t62 = -4LL;

    t62 = (x293+(x294|(x295>x296)));

    if (t62 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile uint64_t x297 = UINT64_MAX;
	uint16_t x298 = UINT16_MAX;
	int16_t x299 = -5;
	uint64_t t63 = 294961165LLU;

    t63 = (x297+(x298|(x299>x300)));

    if (t63 != 65534LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x301 = -1LL;
	uint16_t x302 = 6U;
	uint32_t x304 = UINT32_MAX;
	int64_t t64 = -3459523074196LL;

    t64 = (x301+(x302|(x303>x304)));

    if (t64 != 5LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x308 = 126376;
	int32_t t65 = -100151985;

    t65 = (x305+(x306|(x307>x308)));

    if (t65 != -2147483644) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x309 = 9U;
	static int16_t x310 = INT16_MIN;
	int32_t x311 = 828;
	int32_t x312 = INT32_MIN;
	volatile uint32_t t66 = 8059385U;

    t66 = (x309+(x310|(x311>x312)));

    if (t66 != 4294934538U) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint32_t x313 = 3U;
	int32_t x314 = -1089;
	int32_t x315 = -1;
	uint32_t t67 = 26474507U;

    t67 = (x313+(x314|(x315>x316)));

    if (t67 != 4294966210U) { NG(); } else { ; }
	
}

void f68(void) {
    	static int16_t x317 = -1;
	static uint64_t x318 = 22817436874764807LLU;
	static int32_t x320 = INT32_MIN;
	uint64_t t68 = 10833073LLU;

    t68 = (x317+(x318|(x319>x320)));

    if (t68 != 22817436874764806LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x321 = -1;
	int16_t x322 = INT16_MAX;
	uint16_t x323 = 6491U;
	volatile int32_t t69 = -2293;

    t69 = (x321+(x322|(x323>x324)));

    if (t69 != 32766) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x325 = -1;
	uint64_t x326 = 362192LLU;
	static uint64_t x328 = UINT64_MAX;
	volatile uint64_t t70 = 6707903LLU;

    t70 = (x325+(x326|(x327>x328)));

    if (t70 != 362191LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	uint64_t x329 = UINT64_MAX;
	int32_t x331 = INT32_MIN;
	volatile int64_t x332 = INT64_MIN;
	volatile uint64_t t71 = 1754916203636659LLU;

    t71 = (x329+(x330|(x331>x332)));

    if (t71 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x333 = UINT8_MAX;
	uint32_t x334 = UINT32_MAX;
	int64_t x335 = INT64_MAX;
	int64_t x336 = -191980111LL;
	volatile uint32_t t72 = 1334658388U;

    t72 = (x333+(x334|(x335>x336)));

    if (t72 != 254U) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x337 = 210;
	static uint64_t x338 = 399753LLU;
	int8_t x339 = -1;
	int32_t x340 = INT32_MIN;
	volatile uint64_t t73 = 23720095295149594LLU;

    t73 = (x337+(x338|(x339>x340)));

    if (t73 != 399963LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static int16_t x342 = -29;
	uint8_t x343 = UINT8_MAX;
	uint8_t x344 = 10U;
	static uint32_t t74 = 99232251U;

    t74 = (x341+(x342|(x343>x344)));

    if (t74 != 60U) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x348 = -1;
	static volatile int64_t t75 = 2347922LL;

    t75 = (x345+(x346|(x347>x348)));

    if (t75 != 2556071141093LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x350 = 41LLU;
	static uint8_t x351 = UINT8_MAX;
	uint8_t x352 = 63U;
	static volatile uint64_t t76 = 109LLU;

    t76 = (x349+(x350|(x351>x352)));

    if (t76 != 42LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x353 = -3830;
	uint16_t x354 = 19631U;
	static int16_t x355 = 7;
	uint8_t x356 = 3U;
	static int32_t t77 = -1768;

    t77 = (x353+(x354|(x355>x356)));

    if (t77 != 15801) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x357 = 0;
	uint32_t x359 = 90539612U;
	volatile int32_t x360 = -1;
	volatile int32_t t78 = -521329;

    t78 = (x357+(x358|(x359>x360)));

    if (t78 != -12) { NG(); } else { ; }
	
}

void f79(void) {
    	static int8_t x361 = -11;
	volatile int8_t x362 = INT8_MIN;
	uint64_t x363 = 6LLU;
	int8_t x364 = 46;

    t79 = (x361+(x362|(x363>x364)));

    if (t79 != -139) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x365 = 31;
	static int8_t x366 = -57;
	uint64_t x367 = 2145164601LLU;
	int32_t x368 = INT32_MIN;
	static int32_t t80 = -163810084;

    t80 = (x365+(x366|(x367>x368)));

    if (t80 != -26) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x369 = 0;
	int16_t x370 = 4;
	volatile int64_t x372 = INT64_MIN;
	volatile int32_t t81 = -56987256;

    t81 = (x369+(x370|(x371>x372)));

    if (t81 != 5) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x373 = 786951U;
	int8_t x375 = INT8_MAX;
	int64_t x376 = -197545866563761034LL;
	uint32_t t82 = 7056483U;

    t82 = (x373+(x374|(x375>x376)));

    if (t82 != 787720U) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int64_t x377 = -393LL;
	int16_t x378 = -1988;
	static int32_t x379 = 50;
	int32_t x380 = -1;
	static volatile int64_t t83 = 1LL;

    t83 = (x377+(x378|(x379>x380)));

    if (t83 != -2380LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static uint32_t x381 = 1U;
	volatile int32_t x382 = INT32_MAX;
	uint32_t x383 = UINT32_MAX;
	int8_t x384 = INT8_MAX;

    t84 = (x381+(x382|(x383>x384)));

    if (t84 != 2147483648U) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint32_t x386 = UINT32_MAX;
	int8_t x387 = INT8_MIN;
	static uint8_t x388 = 3U;

    t85 = (x385+(x386|(x387>x388)));

    if (t85 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x389 = INT16_MAX;
	uint64_t x390 = 6185956605425607931LLU;
	static int8_t x391 = INT8_MIN;
	int8_t x392 = -21;
	static uint64_t t86 = 1124731051594224382LLU;

    t86 = (x389+(x390|(x391>x392)));

    if (t86 != 6185956605425640698LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	uint32_t x393 = 214U;
	volatile int8_t x394 = 33;
	int32_t x395 = 182;

    t87 = (x393+(x394|(x395>x396)));

    if (t87 != 247U) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x398 = 9696;
	volatile uint32_t x399 = UINT32_MAX;
	volatile uint8_t x400 = UINT8_MAX;
	int32_t t88 = 3;

    t88 = (x397+(x398|(x399>x400)));

    if (t88 != 9824) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x401 = 181374959U;
	int16_t x402 = INT16_MIN;
	int16_t x403 = 0;
	volatile int16_t x404 = INT16_MIN;
	volatile uint32_t t89 = 240394U;

    t89 = (x401+(x402|(x403>x404)));

    if (t89 != 181342192U) { NG(); } else { ; }
	
}

void f90(void) {
    	static uint64_t x409 = 913161499445811LLU;
	static int64_t x410 = INT64_MAX;
	int64_t x411 = INT64_MIN;
	int32_t x412 = INT32_MIN;
	static uint64_t t90 = 103579LLU;

    t90 = (x409+(x410|(x411>x412)));

    if (t90 != 9224285198354221618LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint8_t x413 = UINT8_MAX;
	int64_t x415 = -1LL;
	int32_t x416 = INT32_MIN;
	uint64_t t91 = 44LLU;

    t91 = (x413+(x414|(x415>x416)));

    if (t91 != 254LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x417 = -1;
	int8_t x418 = 4;
	volatile int64_t x419 = -1LL;
	uint16_t x420 = 23958U;
	volatile int32_t t92 = 123020;

    t92 = (x417+(x418|(x419>x420)));

    if (t92 != 3) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x421 = 1U;
	int8_t x423 = 7;
	int64_t x424 = INT64_MIN;
	volatile int32_t t93 = 0;

    t93 = (x421+(x422|(x423>x424)));

    if (t93 != 32768) { NG(); } else { ; }
	
}

void f94(void) {
    	static int32_t x425 = INT32_MIN;
	uint8_t x426 = 125U;
	int64_t x427 = 2012994LL;
	volatile int32_t x428 = INT32_MIN;
	volatile int32_t t94 = -33403544;

    t94 = (x425+(x426|(x427>x428)));

    if (t94 != -2147483523) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x429 = 1569U;
	int32_t x430 = INT32_MIN;
	uint64_t x431 = UINT64_MAX;
	volatile int8_t x432 = 0;
	static uint32_t t95 = 0U;

    t95 = (x429+(x430|(x431>x432)));

    if (t95 != 2147485218U) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x433 = 9557U;
	volatile uint32_t x434 = 3U;
	int32_t x435 = INT32_MIN;
	static uint64_t x436 = UINT64_MAX;

    t96 = (x433+(x434|(x435>x436)));

    if (t96 != 9560U) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x437 = 1008075LLU;
	uint8_t x438 = UINT8_MAX;
	int64_t x439 = INT64_MAX;
	int16_t x440 = -1;
	uint64_t t97 = 1121126714745328783LLU;

    t97 = (x437+(x438|(x439>x440)));

    if (t97 != 1008330LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x442 = INT16_MIN;
	static uint32_t x443 = 50360769U;
	int32_t x444 = INT32_MAX;
	uint64_t t98 = 3950672001655LLU;

    t98 = (x441+(x442|(x443>x444)));

    if (t98 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint16_t x446 = 48U;
	volatile uint64_t x447 = UINT64_MAX;
	volatile uint8_t x448 = 15U;

    t99 = (x445+(x446|(x447>x448)));

    if (t99 != -62) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x449 = 525978502;
	volatile int16_t x450 = 3440;
	static int16_t x451 = INT16_MIN;
	int32_t x452 = -7461716;
	volatile int32_t t100 = 1668;

    t100 = (x449+(x450|(x451>x452)));

    if (t100 != 525981943) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x454 = INT16_MIN;
	int32_t t101 = -15;

    t101 = (x453+(x454|(x455>x456)));

    if (t101 != -20004) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x457 = 40LLU;
	volatile int16_t x458 = INT16_MAX;
	int16_t x459 = -1;
	int32_t x460 = 145059325;
	volatile uint64_t t102 = 160LLU;

    t102 = (x457+(x458|(x459>x460)));

    if (t102 != 32807LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x461 = -1;
	int16_t x462 = 620;
	volatile int16_t x463 = -871;
	uint64_t x464 = UINT64_MAX;
	volatile int32_t t103 = 607720088;

    t103 = (x461+(x462|(x463>x464)));

    if (t103 != 619) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x466 = INT32_MIN;
	static int64_t x467 = INT64_MAX;

    t104 = (x465+(x466|(x467>x468)));

    if (t104 != 9901786099075505LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x469 = INT32_MIN;
	int8_t x470 = INT8_MAX;
	static volatile int64_t x471 = INT64_MAX;
	volatile int8_t x472 = -1;
	int32_t t105 = -1182201;

    t105 = (x469+(x470|(x471>x472)));

    if (t105 != -2147483521) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint8_t x473 = 70U;
	static int64_t x474 = 41LL;
	int64_t x475 = INT64_MIN;
	int8_t x476 = 0;

    t106 = (x473+(x474|(x475>x476)));

    if (t106 != 111LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x477 = 1347468114337997LL;
	volatile uint8_t x478 = UINT8_MAX;
	int16_t x479 = INT16_MIN;
	volatile int64_t t107 = 4147LL;

    t107 = (x477+(x478|(x479>x480)));

    if (t107 != 1347468114338252LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x482 = UINT8_MAX;
	volatile uint64_t t108 = 1215LLU;

    t108 = (x481+(x482|(x483>x484)));

    if (t108 != 87756935005LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x489 = INT8_MIN;
	int16_t x491 = 281;
	int64_t x492 = -1LL;
	volatile int32_t t109 = -150988;

    t109 = (x489+(x490|(x491>x492)));

    if (t109 != 32639) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile uint16_t x497 = 2U;
	int32_t x498 = INT32_MIN;
	uint8_t x499 = 0U;
	int16_t x500 = INT16_MIN;
	static int32_t t110 = 12;

    t110 = (x497+(x498|(x499>x500)));

    if (t110 != -2147483645) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint16_t x501 = UINT16_MAX;
	uint32_t x502 = UINT32_MAX;
	uint64_t x503 = 5758275275482223LLU;
	int32_t x504 = INT32_MIN;

    t111 = (x501+(x502|(x503>x504)));

    if (t111 != 65534U) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x505 = INT8_MAX;
	static int8_t x506 = 10;
	static uint8_t x507 = 1U;
	uint16_t x508 = UINT16_MAX;
	static int32_t t112 = 2;

    t112 = (x505+(x506|(x507>x508)));

    if (t112 != 137) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x509 = -1LL;
	int32_t x510 = -1;
	volatile int16_t x511 = INT16_MAX;
	volatile int64_t t113 = -422210059384LL;

    t113 = (x509+(x510|(x511>x512)));

    if (t113 != -2LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x513 = INT8_MIN;
	volatile int8_t x514 = 0;
	int8_t x515 = INT8_MAX;
	volatile uint16_t x516 = UINT16_MAX;
	static int32_t t114 = -3127992;

    t114 = (x513+(x514|(x515>x516)));

    if (t114 != -128) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int8_t x518 = -2;
	int16_t x519 = INT16_MAX;
	volatile uint64_t x520 = UINT64_MAX;
	int32_t t115 = -473381;

    t115 = (x517+(x518|(x519>x520)));

    if (t115 != -3) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x521 = INT32_MIN;
	volatile int64_t x524 = 791414721828LL;
	volatile int32_t t116 = -140726;

    t116 = (x521+(x522|(x523>x524)));

    if (t116 != -2147450881) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint64_t x525 = 604240405LLU;
	int16_t x526 = 585;
	int16_t x527 = INT16_MIN;
	uint16_t x528 = UINT16_MAX;
	volatile uint64_t t117 = 675LLU;

    t117 = (x525+(x526|(x527>x528)));

    if (t117 != 604240990LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int8_t x529 = INT8_MAX;
	uint64_t x530 = 899117809231312LLU;
	static volatile uint16_t x531 = 21796U;
	uint32_t x532 = UINT32_MAX;
	volatile uint64_t t118 = 7634843519848562LLU;

    t118 = (x529+(x530|(x531>x532)));

    if (t118 != 899117809231439LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int32_t x534 = -90345;
	int16_t x535 = -1;
	uint64_t x536 = 6369LLU;
	static volatile int32_t t119 = -306;

    t119 = (x533+(x534|(x535>x536)));

    if (t119 != -88151) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x537 = INT64_MAX;
	int64_t x539 = INT64_MIN;
	int16_t x540 = 13020;
	volatile uint64_t t120 = 9167029045721502559LLU;

    t120 = (x537+(x538|(x539>x540)));

    if (t120 != 9223372036854775827LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x541 = -1;
	int8_t x542 = INT8_MIN;
	volatile int16_t x543 = 10;
	int64_t x544 = INT64_MIN;

    t121 = (x541+(x542|(x543>x544)));

    if (t121 != -128) { NG(); } else { ; }
	
}

void f122(void) {
    	int32_t x545 = -1;
	volatile uint8_t x546 = 46U;
	int64_t x547 = INT64_MIN;
	static int16_t x548 = -6;

    t122 = (x545+(x546|(x547>x548)));

    if (t122 != 45) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x549 = INT16_MIN;
	int16_t x550 = -1;
	volatile uint64_t x551 = 831722747335680626LLU;
	static int16_t x552 = INT16_MIN;
	volatile int32_t t123 = 6777677;

    t123 = (x549+(x550|(x551>x552)));

    if (t123 != -32769) { NG(); } else { ; }
	
}

void f124(void) {
    	int64_t x554 = INT64_MIN;
	volatile int32_t x556 = INT32_MIN;
	uint64_t t124 = 723LLU;

    t124 = (x553+(x554|(x555>x556)));

    if (t124 != 9223372042323180167LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x557 = 24;
	static volatile int64_t x558 = INT64_MIN;
	uint16_t x559 = 5U;
	volatile int64_t t125 = 107526805122962417LL;

    t125 = (x557+(x558|(x559>x560)));

    if (t125 != -9223372036854775784LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x561 = UINT64_MAX;
	uint64_t x562 = 29655056221LLU;
	int32_t x563 = INT32_MAX;
	int64_t x564 = INT64_MIN;
	uint64_t t126 = 1344178230332LLU;

    t126 = (x561+(x562|(x563>x564)));

    if (t126 != 29655056220LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x565 = INT32_MIN;
	volatile uint64_t x566 = 52LLU;
	int16_t x567 = INT16_MAX;
	uint16_t x568 = 217U;
	uint64_t t127 = 6250440186351848831LLU;

    t127 = (x565+(x566|(x567>x568)));

    if (t127 != 18446744071562068021LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x569 = INT64_MIN;
	int16_t x570 = INT16_MAX;
	volatile int64_t x571 = -1LL;
	int32_t x572 = 141172900;
	int64_t t128 = -531418LL;

    t128 = (x569+(x570|(x571>x572)));

    if (t128 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint64_t x573 = 462425729676LLU;
	int8_t x575 = -1;
	volatile uint32_t x576 = UINT32_MAX;
	static volatile uint64_t t129 = 428065LLU;

    t129 = (x573+(x574|(x575>x576)));

    if (t129 != 462425729548LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x578 = UINT8_MAX;
	uint32_t x579 = 0U;
	uint64_t x580 = 2496LLU;

    t130 = (x577+(x578|(x579>x580)));

    if (t130 != 254LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x581 = 824;
	uint32_t x582 = UINT32_MAX;
	static int8_t x583 = 3;
	volatile uint32_t t131 = 249993U;

    t131 = (x581+(x582|(x583>x584)));

    if (t131 != 823U) { NG(); } else { ; }
	
}

void f132(void) {
    	static int16_t x587 = 6012;
	int64_t t132 = -436062284906370002LL;

    t132 = (x585+(x586|(x587>x588)));

    if (t132 != 801301LL) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x593 = UINT64_MAX;
	int64_t x594 = INT64_MIN;
	uint32_t x595 = 50U;
	int16_t x596 = -70;

    t133 = (x593+(x594|(x595>x596)));

    if (t133 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x599 = UINT8_MAX;
	static int64_t x600 = INT64_MAX;
	volatile int32_t t134 = -3766664;

    t134 = (x597+(x598|(x599>x600)));

    if (t134 != -32763) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x601 = INT32_MIN;
	int8_t x603 = INT8_MAX;
	volatile int32_t x604 = INT32_MAX;
	int32_t t135 = 40846;

    t135 = (x601+(x602|(x603>x604)));

    if (t135 != -1) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x605 = 0;
	int64_t x606 = INT64_MIN;
	int32_t x607 = INT32_MAX;
	volatile uint16_t x608 = 3U;
	int64_t t136 = 0LL;

    t136 = (x605+(x606|(x607>x608)));

    if (t136 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f137(void) {
    	static int64_t x609 = INT64_MIN;
	static int32_t x610 = INT32_MAX;
	volatile int8_t x611 = -2;
	volatile uint8_t x612 = 1U;
	int64_t t137 = -3949151809980351LL;

    t137 = (x609+(x610|(x611>x612)));

    if (t137 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x613 = INT8_MIN;
	int8_t x614 = INT8_MIN;
	int64_t x615 = INT64_MIN;
	volatile int32_t x616 = INT32_MIN;
	volatile int32_t t138 = 134;

    t138 = (x613+(x614|(x615>x616)));

    if (t138 != -256) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x617 = -1;
	uint32_t x618 = 12163450U;
	int8_t x619 = 0;
	static int8_t x620 = -1;
	uint32_t t139 = 2U;

    t139 = (x617+(x618|(x619>x620)));

    if (t139 != 12163450U) { NG(); } else { ; }
	
}

void f140(void) {
    	int8_t x622 = 6;
	uint64_t x623 = 2701620758LLU;
	uint64_t x624 = 126908850384652669LLU;
	static volatile int32_t t140 = -343451359;

    t140 = (x621+(x622|(x623>x624)));

    if (t140 != 133) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x626 = INT8_MAX;
	int64_t x627 = -1LL;
	static int16_t x628 = INT16_MIN;
	volatile int32_t t141 = -269;

    t141 = (x625+(x626|(x627>x628)));

    if (t141 != 254) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x630 = -4850238648LL;
	static int64_t x631 = INT64_MIN;
	int64_t x632 = 0LL;
	volatile int64_t t142 = 28156684564907263LL;

    t142 = (x629+(x630|(x631>x632)));

    if (t142 != -4822388522LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint64_t x633 = 12321622574LLU;
	uint32_t x634 = 127U;
	uint32_t x635 = 844876626U;
	static int16_t x636 = INT16_MIN;
	volatile uint64_t t143 = 15205LLU;

    t143 = (x633+(x634|(x635>x636)));

    if (t143 != 12321622701LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x637 = UINT16_MAX;
	volatile int32_t x638 = INT32_MIN;
	int16_t x640 = INT16_MIN;
	volatile int32_t t144 = -7340575;

    t144 = (x637+(x638|(x639>x640)));

    if (t144 != -2147418112) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x641 = 3832U;
	int8_t x642 = -12;
	uint32_t x643 = 2U;
	uint16_t x644 = 1160U;
	int32_t t145 = 12;

    t145 = (x641+(x642|(x643>x644)));

    if (t145 != 3820) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x645 = -1;
	uint64_t x646 = UINT64_MAX;
	static int8_t x647 = -1;
	static uint16_t x648 = 0U;
	uint64_t t146 = 10485LLU;

    t146 = (x645+(x646|(x647>x648)));

    if (t146 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static uint8_t x649 = 7U;
	static int64_t x650 = -722415LL;
	int32_t x651 = INT32_MAX;
	int32_t x652 = -1;
	static int64_t t147 = -254401730983LL;

    t147 = (x649+(x650|(x651>x652)));

    if (t147 != -722408LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x657 = -1;
	static volatile int64_t x658 = INT64_MAX;
	uint32_t x659 = 289536U;
	volatile int64_t t148 = 579471788006867396LL;

    t148 = (x657+(x658|(x659>x660)));

    if (t148 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x661 = -1;
	int16_t x662 = INT16_MIN;
	static int64_t x664 = -2LL;
	int32_t t149 = 1;

    t149 = (x661+(x662|(x663>x664)));

    if (t149 != -32768) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x665 = -168;
	uint8_t x666 = 12U;
	uint32_t x667 = 1603907534U;
	volatile int32_t t150 = -621505;

    t150 = (x665+(x666|(x667>x668)));

    if (t150 != -156) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x669 = -1;
	int16_t x670 = -97;
	volatile uint16_t x671 = UINT16_MAX;
	volatile int32_t t151 = 23225260;

    t151 = (x669+(x670|(x671>x672)));

    if (t151 != -98) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x673 = INT32_MAX;
	int8_t x674 = -1;
	volatile int16_t x675 = -1;
	uint64_t x676 = UINT64_MAX;
	int32_t t152 = -76189402;

    t152 = (x673+(x674|(x675>x676)));

    if (t152 != 2147483646) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x677 = 3U;
	static uint16_t x678 = 42U;
	uint8_t x679 = 30U;
	volatile int32_t t153 = 47;

    t153 = (x677+(x678|(x679>x680)));

    if (t153 != 45) { NG(); } else { ; }
	
}

void f154(void) {
    	int16_t x681 = 1;
	int16_t x682 = -1;
	int64_t x683 = 510273659155LL;
	int8_t x684 = INT8_MIN;
	static volatile int32_t t154 = 1338;

    t154 = (x681+(x682|(x683>x684)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x685 = INT8_MIN;
	volatile int64_t x686 = -1606827133LL;

    t155 = (x685+(x686|(x687>x688)));

    if (t155 != -1606827261LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x689 = -1;
	int64_t x691 = -1LL;
	static uint64_t x692 = 7425339169737484727LLU;
	uint64_t t156 = 18697264LLU;

    t156 = (x689+(x690|(x691>x692)));

    if (t156 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x694 = -1;
	static volatile int32_t x695 = INT32_MIN;
	volatile int64_t x696 = 20320835028262759LL;
	int32_t t157 = -3;

    t157 = (x693+(x694|(x695>x696)));

    if (t157 != -2) { NG(); } else { ; }
	
}

void f158(void) {
    	static int64_t x697 = -85861213907LL;
	static volatile int32_t x698 = 8435821;
	int8_t x699 = -1;
	int8_t x700 = -17;
	volatile int64_t t158 = -5671871113LL;

    t158 = (x697+(x698|(x699>x700)));

    if (t158 != -85852778086LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint8_t x701 = 80U;
	int32_t x702 = INT32_MIN;
	static volatile int8_t x703 = INT8_MIN;
	uint64_t x704 = UINT64_MAX;
	int32_t t159 = 114;

    t159 = (x701+(x702|(x703>x704)));

    if (t159 != -2147483568) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x705 = 3LL;
	volatile uint16_t x706 = 289U;
	uint16_t x707 = 867U;
	uint8_t x708 = UINT8_MAX;
	volatile int64_t t160 = -409941920251LL;

    t160 = (x705+(x706|(x707>x708)));

    if (t160 != 292LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x709 = -141163739662LL;
	static volatile uint64_t x710 = 11844605093114LLU;
	uint16_t x711 = 1038U;
	volatile int32_t x712 = -1;
	uint64_t t161 = 533LLU;

    t161 = (x709+(x710|(x711>x712)));

    if (t161 != 11703441353453LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile int8_t x714 = INT8_MAX;
	int64_t x715 = INT64_MAX;
	int64_t x716 = -1LL;
	volatile int32_t t162 = 46254;

    t162 = (x713+(x714|(x715>x716)));

    if (t162 != 126) { NG(); } else { ; }
	
}

void f163(void) {
    	static volatile int16_t x717 = -16128;
	volatile uint16_t x718 = UINT16_MAX;
	volatile int32_t x719 = INT32_MIN;
	uint32_t x720 = 9711U;
	volatile int32_t t163 = -6624;

    t163 = (x717+(x718|(x719>x720)));

    if (t163 != 49407) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x721 = INT32_MIN;
	static uint64_t x722 = UINT64_MAX;
	int64_t x723 = -232893622LL;
	static int64_t x724 = -1LL;
	uint64_t t164 = 8819753713781LLU;

    t164 = (x721+(x722|(x723>x724)));

    if (t164 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x725 = INT8_MIN;
	int64_t x726 = INT64_MAX;
	int8_t x727 = INT8_MAX;
	volatile int64_t t165 = 29LL;

    t165 = (x725+(x726|(x727>x728)));

    if (t165 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x732 = -13236;
	uint64_t t166 = 492383458719948295LLU;

    t166 = (x729+(x730|(x731>x732)));

    if (t166 != 12555841948LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int8_t x733 = 0;
	volatile int8_t x734 = 9;
	int16_t x736 = 1;
	volatile int32_t t167 = -68743;

    t167 = (x733+(x734|(x735>x736)));

    if (t167 != 9) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int16_t x745 = -13;
	int8_t x746 = INT8_MIN;
	static uint64_t x747 = UINT64_MAX;
	int64_t x748 = INT64_MIN;
	static volatile int32_t t168 = 198;

    t168 = (x745+(x746|(x747>x748)));

    if (t168 != -140) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x749 = 874;
	int32_t x750 = 4030;
	int8_t x752 = -2;
	volatile int32_t t169 = 0;

    t169 = (x749+(x750|(x751>x752)));

    if (t169 != 4904) { NG(); } else { ; }
	
}

void f170(void) {
    	uint32_t x753 = 25366181U;
	volatile uint8_t x754 = 1U;
	uint8_t x755 = UINT8_MAX;
	static int64_t x756 = -1836571540624LL;
	uint32_t t170 = 1322514558U;

    t170 = (x753+(x754|(x755>x756)));

    if (t170 != 25366182U) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x758 = -1;
	uint16_t x759 = 3U;
	volatile int8_t x760 = 1;
	int32_t t171 = -370142709;

    t171 = (x757+(x758|(x759>x760)));

    if (t171 != -1) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x765 = INT16_MIN;
	static volatile int8_t x766 = -1;
	uint8_t x767 = 3U;
	static int16_t x768 = 46;
	int32_t t172 = 13;

    t172 = (x765+(x766|(x767>x768)));

    if (t172 != -32769) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint16_t x770 = 24U;
	int16_t x771 = -7;
	int16_t x772 = INT16_MIN;
	volatile int32_t t173 = -3169916;

    t173 = (x769+(x770|(x771>x772)));

    if (t173 != -2147483623) { NG(); } else { ; }
	
}

void f174(void) {
    	static volatile uint64_t x773 = UINT64_MAX;
	static uint16_t x774 = 16U;
	static volatile int16_t x775 = INT16_MIN;
	volatile int16_t x776 = -3;
	volatile uint64_t t174 = 1LLU;

    t174 = (x773+(x774|(x775>x776)));

    if (t174 != 15LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int64_t x777 = INT64_MIN;
	uint16_t x778 = 149U;
	uint16_t x779 = UINT16_MAX;
	static int64_t x780 = INT64_MAX;

    t175 = (x777+(x778|(x779>x780)));

    if (t175 != -9223372036854775659LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x781 = INT16_MIN;
	uint64_t x782 = 17992916301687LLU;
	uint16_t x783 = 70U;
	int64_t x784 = 26802268896222LL;
	volatile uint64_t t176 = 700241983481988LLU;

    t176 = (x781+(x782|(x783>x784)));

    if (t176 != 17992916268919LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x785 = 9359617U;
	uint8_t x786 = 19U;
	int64_t x787 = INT64_MIN;
	uint32_t t177 = 4U;

    t177 = (x785+(x786|(x787>x788)));

    if (t177 != 9359636U) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x789 = INT64_MAX;
	int64_t x790 = -1LL;
	int8_t x791 = INT8_MAX;
	int8_t x792 = -1;
	int64_t t178 = 48LL;

    t178 = (x789+(x790|(x791>x792)));

    if (t178 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int16_t x793 = INT16_MAX;
	int8_t x794 = INT8_MIN;
	uint8_t x795 = 5U;
	static int32_t x796 = -1;
	static volatile int32_t t179 = -212951;

    t179 = (x793+(x794|(x795>x796)));

    if (t179 != 32640) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x801 = -1;
	int8_t x802 = INT8_MAX;
	int8_t x804 = -29;
	volatile int32_t t180 = 30615906;

    t180 = (x801+(x802|(x803>x804)));

    if (t180 != 126) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x805 = 801U;
	int8_t x806 = -1;
	uint32_t x807 = 83U;
	uint64_t x808 = 4315904399694405294LLU;
	volatile int32_t t181 = -375268;

    t181 = (x805+(x806|(x807>x808)));

    if (t181 != 800) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x809 = -71467486534389LL;
	uint16_t x811 = 15U;
	int64_t t182 = -759751763LL;

    t182 = (x809+(x810|(x811>x812)));

    if (t182 != 38363063154942LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x814 = -1;
	volatile int64_t x815 = INT64_MIN;
	static int32_t x816 = INT32_MIN;
	volatile uint32_t t183 = 33432179U;

    t183 = (x813+(x814|(x815>x816)));

    if (t183 != 16640U) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int32_t x817 = INT32_MIN;
	static volatile uint16_t x818 = 148U;
	int8_t x819 = -1;
	uint8_t x820 = 0U;
	volatile int32_t t184 = -26014679;

    t184 = (x817+(x818|(x819>x820)));

    if (t184 != -2147483500) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x821 = 57347809U;
	volatile uint64_t x822 = 1394188LLU;
	volatile int32_t x824 = INT32_MIN;
	static uint64_t t185 = 465072LLU;

    t185 = (x821+(x822|(x823>x824)));

    if (t185 != 58741998LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x826 = 87858229;
	int8_t x827 = INT8_MIN;
	uint16_t x828 = 15U;
	volatile int32_t t186 = -7098;

    t186 = (x825+(x826|(x827>x828)));

    if (t186 != 87825461) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x829 = 4U;
	int64_t x830 = -1LL;
	static volatile uint64_t x831 = 60757739LLU;
	volatile int16_t x832 = INT16_MAX;

    t187 = (x829+(x830|(x831>x832)));

    if (t187 != 3LL) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x833 = INT16_MIN;
	int32_t x834 = -1;
	volatile int32_t x836 = 0;
	volatile int32_t t188 = 14120592;

    t188 = (x833+(x834|(x835>x836)));

    if (t188 != -32769) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x837 = 34305373698669534LLU;
	int32_t x838 = -2;
	uint16_t x840 = 1U;
	volatile uint64_t t189 = 1040572LLU;

    t189 = (x837+(x838|(x839>x840)));

    if (t189 != 34305373698669532LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x842 = 13074U;
	volatile int64_t x843 = INT64_MAX;
	volatile uint32_t t190 = 13402U;

    t190 = (x841+(x842|(x843>x844)));

    if (t190 != 14050U) { NG(); } else { ; }
	
}

void f191(void) {
    	static uint32_t x849 = 669U;
	static uint64_t x851 = UINT64_MAX;
	int64_t x852 = -111792LL;
	volatile uint64_t t191 = 13192705321405607LLU;

    t191 = (x849+(x850|(x851>x852)));

    if (t191 != 668LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x853 = 4164U;
	int32_t x856 = INT32_MIN;

    t192 = (x853+(x854|(x855>x856)));

    if (t192 != 4419U) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile uint32_t x861 = 533U;
	volatile uint64_t x862 = 66015628273987LLU;
	uint32_t x863 = UINT32_MAX;
	int32_t x864 = -622;
	static uint64_t t193 = 6416981039993792LLU;

    t193 = (x861+(x862|(x863>x864)));

    if (t193 != 66015628274520LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x865 = 44U;
	int64_t x866 = INT64_MIN;
	uint16_t x867 = UINT16_MAX;
	static int64_t t194 = -1LL;

    t194 = (x865+(x866|(x867>x868)));

    if (t194 != -9223372036854775763LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x869 = -1;
	int16_t x870 = -5397;
	uint16_t x872 = 6U;

    t195 = (x869+(x870|(x871>x872)));

    if (t195 != -5398) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x873 = 20;
	static int32_t x874 = INT32_MIN;
	static int16_t x875 = INT16_MAX;
	int16_t x876 = INT16_MAX;
	int32_t t196 = -75711129;

    t196 = (x873+(x874|(x875>x876)));

    if (t196 != -2147483628) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x877 = 5671084U;
	uint64_t x878 = 455574127662610LLU;
	int64_t x879 = 4LL;
	static uint64_t t197 = 354883882LLU;

    t197 = (x877+(x878|(x879>x880)));

    if (t197 != 455574133333694LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x881 = INT8_MIN;
	int64_t x883 = INT64_MIN;
	static volatile uint16_t x884 = 30U;
	int32_t t198 = -411518310;

    t198 = (x881+(x882|(x883>x884)));

    if (t198 != -129) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x889 = UINT8_MAX;
	int16_t x890 = 2;
	int8_t x891 = INT8_MIN;
	int8_t x892 = -1;
	int32_t t199 = -312659;

    t199 = (x889+(x890|(x891>x892)));

    if (t199 != 257) { NG(); } else { ; }
	
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

