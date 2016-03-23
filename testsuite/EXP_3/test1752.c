
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

static int16_t x4 = INT16_MAX;
static volatile int8_t x6 = -1;
uint32_t x10 = 1894097079U;
uint64_t x14 = 525360146293501LLU;
static int32_t x16 = 1129022;
volatile int8_t x17 = INT8_MIN;
uint64_t t4 = 3460926632LLU;
int32_t x23 = INT32_MIN;
volatile int32_t t5 = 16;
volatile uint64_t x34 = UINT64_MAX;
volatile uint64_t x35 = 482549832922080509LLU;
uint64_t t8 = 66920043LLU;
int32_t x37 = INT32_MIN;
int32_t t9 = 7;
int32_t x57 = INT32_MIN;
uint32_t x60 = UINT32_MAX;
volatile int32_t x62 = -1;
volatile uint16_t x71 = 1151U;
int64_t t17 = INT64_MIN;
int8_t x73 = 1;
uint8_t x77 = 38U;
int64_t x78 = INT64_MAX;
static int16_t x84 = 1;
uint64_t t20 = 1LLU;
uint16_t x87 = 2U;
volatile int32_t t22 = -367;
int32_t t23 = 3;
static int8_t x99 = 0;
int64_t x100 = -1LL;
int16_t x112 = INT16_MAX;
int8_t x113 = 34;
int8_t x115 = INT8_MIN;
static int8_t x118 = INT8_MAX;
uint16_t x138 = 14U;
volatile int32_t x141 = INT32_MAX;
volatile int64_t t36 = 31LL;
int32_t x160 = 87425;
int32_t x163 = 132464362;
static volatile int32_t t39 = 9;
static uint8_t x167 = 5U;
uint16_t x168 = 11U;
int32_t x174 = 11697;
int8_t x177 = -46;
int32_t x190 = INT32_MIN;
int8_t x192 = -1;
int64_t x219 = INT64_MIN;
int32_t x224 = INT32_MAX;
static int32_t x227 = INT32_MIN;
uint64_t x230 = UINT64_MAX;
uint64_t t56 = 231506074LLU;
volatile int16_t x234 = INT16_MIN;
static int16_t x236 = -1;
volatile uint32_t x247 = 1650615672U;
volatile int32_t t60 = INT32_MAX;
static volatile int32_t x249 = 13;
int8_t x259 = -1;
volatile int32_t x273 = 125632079;
uint32_t x277 = 42888U;
volatile int16_t x278 = INT16_MAX;
uint32_t t68 = 6165221U;
int16_t x284 = -1;
int16_t x288 = 1;
volatile int32_t x289 = 4092307;
volatile uint32_t x293 = UINT32_MAX;
static int32_t x296 = 24;
volatile uint64_t t73 = 550407555261046104LLU;
volatile uint64_t x304 = 6299807LLU;
int64_t x308 = INT64_MAX;
uint32_t x309 = 253U;
int32_t x312 = INT32_MIN;
uint64_t t76 = 21097392781787780LLU;
static uint16_t x315 = 1730U;
volatile uint8_t x317 = 3U;
uint16_t x318 = 3244U;
int16_t x319 = 8832;
uint32_t x336 = 25U;
uint64_t t82 = 1353830635066853LLU;
int32_t t84 = 3953368;
int16_t x347 = INT16_MIN;
volatile int64_t x358 = INT64_MAX;
uint8_t x359 = UINT8_MAX;
int16_t x361 = INT16_MIN;
int32_t x368 = INT32_MIN;
int16_t x371 = -1;
int64_t x373 = -1LL;
uint64_t x374 = UINT64_MAX;
int64_t x376 = INT64_MIN;
volatile int16_t x383 = INT16_MIN;
volatile int8_t x388 = -7;
static volatile int8_t x389 = INT8_MIN;
int16_t x396 = INT16_MIN;
int64_t x397 = 5681287LL;
static int8_t x400 = INT8_MAX;
volatile int64_t t99 = -5890528839557796LL;
static uint64_t t100 = 1878601LLU;
uint16_t x409 = 25U;
static uint16_t x410 = 4365U;
volatile int8_t x413 = -1;
int32_t x415 = INT32_MIN;
int16_t x417 = INT16_MAX;
int32_t x419 = INT32_MIN;
int16_t x424 = -1;
static int64_t x430 = 1831724634785565LL;
volatile int32_t x440 = INT32_MIN;
int64_t x441 = INT64_MIN;
int64_t x445 = -55670LL;
volatile int16_t x447 = -6093;
volatile uint16_t x451 = UINT16_MAX;
static volatile uint64_t x453 = UINT64_MAX;
uint32_t x454 = 255U;
int16_t x455 = -6;
static int64_t x458 = INT64_MAX;
int64_t x464 = INT64_MIN;
int64_t t114 = -7735370262309163LL;
static volatile uint64_t x465 = 106986821LLU;
int8_t x466 = INT8_MIN;
int16_t x482 = INT16_MIN;
int32_t x492 = -1;
uint64_t x494 = UINT64_MAX;
volatile int16_t x496 = INT16_MIN;
volatile int16_t x499 = INT16_MAX;
volatile int32_t x502 = INT32_MIN;
volatile int32_t t124 = -60;
int64_t x506 = INT64_MIN;
volatile int32_t x514 = INT32_MAX;
int16_t x530 = INT16_MIN;
volatile int32_t t133 = -320;
int64_t x544 = -509LL;
static uint32_t x549 = UINT32_MAX;
int32_t t138 = -2;
static uint16_t x561 = 1108U;
static uint16_t x567 = 35U;
static volatile int32_t t140 = 113110;
int64_t x569 = INT64_MIN;
static int8_t x573 = INT8_MAX;
static volatile uint8_t x574 = 1U;
uint8_t x579 = UINT8_MAX;
uint64_t x588 = 68369342485373921LLU;
volatile int64_t t146 = 67336932951285262LL;
uint8_t x593 = UINT8_MAX;
volatile int64_t x596 = INT64_MIN;
int8_t x601 = INT8_MAX;
int8_t x605 = INT8_MIN;
int32_t x606 = INT32_MAX;
volatile uint32_t x614 = UINT32_MAX;
int8_t x615 = -1;
static uint32_t t151 = 7171304U;
volatile uint64_t x618 = 3960653537LLU;
volatile int16_t x619 = -1;
volatile uint16_t x621 = UINT16_MAX;
int32_t t153 = 7173739;
int64_t x628 = INT64_MAX;
volatile int64_t t155 = 9402318LL;
int8_t x633 = -7;
static volatile uint64_t x634 = 1036735LLU;
volatile int32_t x636 = 6442413;
int16_t x640 = INT16_MIN;
uint64_t t157 = 1118542978LLU;
static int16_t x644 = -7;
uint64_t x648 = 673708365806505LLU;
uint16_t x649 = 6425U;
int16_t x650 = 2;
volatile int32_t x661 = -7777388;
volatile uint64_t t163 = 48LLU;
int32_t x668 = -1;
int8_t x677 = INT8_MAX;
static int8_t x680 = INT8_MIN;
static uint64_t t168 = 12307624129886LLU;
static int32_t x685 = INT32_MIN;
int16_t x688 = -10505;
static uint16_t x690 = UINT16_MAX;
uint16_t x692 = 77U;
volatile int32_t t170 = -366052;
int8_t x700 = INT8_MIN;
static int32_t x701 = -1;
static volatile int32_t t174 = 11904613;
volatile int8_t x712 = INT8_MIN;
int64_t x722 = INT64_MAX;
uint8_t x743 = 1U;
static int32_t x751 = -1;
uint64_t t184 = 13444640450076982LLU;
int32_t x755 = -1;
static uint16_t x757 = UINT16_MAX;
int64_t x763 = 6673873LL;
static uint8_t x765 = 3U;
static int32_t x768 = -1;
int32_t x778 = INT32_MIN;
int64_t x781 = -1LL;
static uint64_t x791 = 258339451812699193LLU;
uint16_t x794 = 13352U;
volatile int64_t x796 = INT64_MAX;
volatile uint16_t x797 = 24115U;
int32_t x800 = 1;
volatile int64_t t196 = -3690650392548597LL;
volatile int64_t x801 = 559198853357961813LL;
static volatile uint32_t t198 = 100898U;


void f0(void) {
    	static int32_t x1 = 4273673;
	int8_t x2 = 13;
	int32_t x3 = INT32_MIN;
	volatile int32_t t0 = -1;

    t0 = ((x1^x2)-(x3>x4));

    if (t0 != 4273668) { NG(); } else { ; }
	
}

void f1(void) {
    	uint64_t x5 = 3145267LLU;
	uint16_t x7 = UINT16_MAX;
	volatile int8_t x8 = INT8_MIN;
	static volatile uint64_t t1 = 7LLU;

    t1 = ((x5^x6)-(x7>x8));

    if (t1 != 18446744073706406347LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = 7975511770880LLU;
	int64_t x11 = INT64_MAX;
	uint32_t x12 = 219U;
	uint64_t t2 = 831232787LLU;

    t2 = ((x9^x10)-(x11>x12));

    if (t2 != 7973630797750LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint64_t x13 = 12480137127053609LLU;
	int16_t x15 = INT16_MAX;
	volatile uint64_t t3 = 913LLU;

    t3 = ((x13^x14)-(x15>x16));

    if (t3 != 12819556860095444LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint64_t x18 = 44835010LLU;
	int8_t x19 = -23;
	int64_t x20 = -29772169877LL;

    t4 = ((x17^x18)-(x19>x20));

    if (t4 != 18446744073664716609LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	uint16_t x21 = 334U;
	volatile int8_t x22 = INT8_MIN;
	static int16_t x24 = INT16_MIN;

    t5 = ((x21^x22)-(x23>x24));

    if (t5 != -306) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int8_t x25 = INT8_MAX;
	volatile int8_t x26 = INT8_MIN;
	int64_t x27 = -1LL;
	int16_t x28 = -1;
	volatile int32_t t6 = 13189;

    t6 = ((x25^x26)-(x27>x28));

    if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
    	static int32_t x29 = 42;
	int8_t x30 = INT8_MAX;
	uint64_t x31 = UINT64_MAX;
	volatile uint64_t x32 = UINT64_MAX;
	int32_t t7 = 6191894;

    t7 = ((x29^x30)-(x31>x32));

    if (t7 != 85) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x33 = -310285LL;
	int16_t x36 = 124;

    t8 = ((x33^x34)-(x35>x36));

    if (t8 != 310283LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x38 = -14;
	static uint32_t x39 = 570U;
	int32_t x40 = INT32_MIN;

    t9 = ((x37^x38)-(x39>x40));

    if (t9 != 2147483634) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = INT64_MIN;
	uint64_t x42 = 17019047LLU;
	int16_t x43 = 14315;
	int32_t x44 = -1;
	uint64_t t10 = 1853119756910LLU;

    t10 = ((x41^x42)-(x43>x44));

    if (t10 != 9223372036871794854LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x45 = 5037888016LL;
	static int8_t x46 = -1;
	uint32_t x47 = UINT32_MAX;
	static int32_t x48 = 21;
	volatile int64_t t11 = -106LL;

    t11 = ((x45^x46)-(x47>x48));

    if (t11 != -5037888018LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x49 = 358413410LL;
	volatile int32_t x50 = INT32_MIN;
	volatile int8_t x51 = INT8_MAX;
	int8_t x52 = -1;
	int64_t t12 = 22792983LL;

    t12 = ((x49^x50)-(x51>x52));

    if (t12 != -1789070239LL) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x53 = UINT8_MAX;
	int8_t x54 = INT8_MIN;
	volatile int32_t x55 = 131294395;
	uint16_t x56 = UINT16_MAX;
	int32_t t13 = -77;

    t13 = ((x53^x54)-(x55>x56));

    if (t13 != -130) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x58 = 17332291464172LL;
	int16_t x59 = INT16_MIN;
	static volatile int64_t t14 = 179688LL;

    t14 = ((x57^x58)-(x59>x60));

    if (t14 != -17330242098196LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x61 = 1678397447129LL;
	volatile int64_t x63 = INT64_MIN;
	int32_t x64 = 28;
	int64_t t15 = -32185480LL;

    t15 = ((x61^x62)-(x63>x64));

    if (t15 != -1678397447130LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = -1;
	uint64_t x66 = 678LLU;
	uint32_t x67 = 5786U;
	static uint16_t x68 = 217U;
	uint64_t t16 = 1303949486LLU;

    t16 = ((x65^x66)-(x67>x68));

    if (t16 != 18446744073709550936LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	static int64_t x69 = INT64_MIN;
	uint8_t x70 = 0U;
	uint64_t x72 = UINT64_MAX;

    t17 = ((x69^x70)-(x71>x72));

    if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x74 = 7U;
	uint16_t x75 = UINT16_MAX;
	uint8_t x76 = 55U;
	int32_t t18 = -125858076;

    t18 = ((x73^x74)-(x75>x76));

    if (t18 != 5) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x79 = 13U;
	int16_t x80 = -206;
	static int64_t t19 = 298047327170410602LL;

    t19 = ((x77^x78)-(x79>x80));

    if (t19 != 9223372036854775768LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x81 = 11970LL;
	uint64_t x82 = 133138187141LLU;
	volatile int64_t x83 = INT64_MIN;

    t20 = ((x81^x82)-(x83>x84));

    if (t20 != 133138197831LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint8_t x85 = UINT8_MAX;
	static int32_t x86 = 1;
	int16_t x88 = INT16_MIN;
	int32_t t21 = 21522284;

    t21 = ((x85^x86)-(x87>x88));

    if (t21 != 253) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x89 = INT16_MAX;
	int16_t x90 = INT16_MAX;
	static int16_t x91 = 16174;
	int16_t x92 = INT16_MAX;

    t22 = ((x89^x90)-(x91>x92));

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	uint8_t x93 = 2U;
	int32_t x94 = -3069;
	int64_t x95 = INT64_MAX;
	int16_t x96 = INT16_MIN;

    t23 = ((x93^x94)-(x95>x96));

    if (t23 != -3072) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x97 = 1373403474LLU;
	volatile int8_t x98 = -60;
	uint64_t t24 = 23037741LLU;

    t24 = ((x97^x98)-(x99>x100));

    if (t24 != 18446744072336148117LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x101 = UINT8_MAX;
	int8_t x102 = INT8_MIN;
	int32_t x103 = INT32_MIN;
	int64_t x104 = INT64_MAX;
	int32_t t25 = -7750;

    t25 = ((x101^x102)-(x103>x104));

    if (t25 != -129) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x109 = 902U;
	uint8_t x110 = 3U;
	uint32_t x111 = 1204008818U;
	volatile uint32_t t26 = 11856U;

    t26 = ((x109^x110)-(x111>x112));

    if (t26 != 900U) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x114 = 6;
	int8_t x116 = -6;
	int32_t t27 = -5590482;

    t27 = ((x113^x114)-(x115>x116));

    if (t27 != 36) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint8_t x117 = UINT8_MAX;
	volatile uint16_t x119 = 2014U;
	int16_t x120 = -1;
	int32_t t28 = -675366283;

    t28 = ((x117^x118)-(x119>x120));

    if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x121 = 3U;
	uint8_t x122 = 28U;
	uint32_t x123 = UINT32_MAX;
	int64_t x124 = -1LL;
	static int32_t t29 = -1237;

    t29 = ((x121^x122)-(x123>x124));

    if (t29 != 30) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint64_t x125 = UINT64_MAX;
	uint32_t x126 = UINT32_MAX;
	static int16_t x127 = INT16_MAX;
	int16_t x128 = INT16_MIN;
	volatile uint64_t t30 = 218786212749158LLU;

    t30 = ((x125^x126)-(x127>x128));

    if (t30 != 18446744069414584319LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x129 = INT64_MAX;
	volatile int8_t x130 = -1;
	int16_t x131 = INT16_MIN;
	int16_t x132 = INT16_MAX;
	int64_t t31 = INT64_MIN;

    t31 = ((x129^x130)-(x131>x132));

    if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x133 = INT32_MAX;
	volatile int8_t x134 = INT8_MIN;
	int32_t x135 = INT32_MAX;
	int8_t x136 = INT8_MIN;
	int32_t t32 = 21225;

    t32 = ((x133^x134)-(x135>x136));

    if (t32 != -2147483522) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x137 = 903U;
	static int16_t x139 = -1;
	static int8_t x140 = INT8_MIN;
	volatile uint32_t t33 = 74U;

    t33 = ((x137^x138)-(x139>x140));

    if (t33 != 904U) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x142 = -4;
	int8_t x143 = INT8_MAX;
	volatile int8_t x144 = INT8_MAX;
	volatile int32_t t34 = 0;

    t34 = ((x141^x142)-(x143>x144));

    if (t34 != -2147483645) { NG(); } else { ; }
	
}

void f35(void) {
    	uint64_t x145 = UINT64_MAX;
	static volatile int8_t x146 = -1;
	volatile uint64_t x147 = 488101129LLU;
	int64_t x148 = -1LL;
	volatile uint64_t t35 = 911746220753847491LLU;

    t35 = ((x145^x146)-(x147>x148));

    if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x149 = -96490039LL;
	int32_t x150 = INT32_MAX;
	volatile uint64_t x151 = 142827320227106011LLU;
	volatile uint64_t x152 = UINT64_MAX;

    t36 = ((x149^x150)-(x151>x152));

    if (t36 != -2050993610LL) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x153 = INT64_MAX;
	static uint32_t x154 = UINT32_MAX;
	uint64_t x155 = 0LLU;
	uint8_t x156 = UINT8_MAX;
	volatile int64_t t37 = -7794730535312LL;

    t37 = ((x153^x154)-(x155>x156));

    if (t37 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x157 = UINT64_MAX;
	int8_t x158 = INT8_MIN;
	static int64_t x159 = 2339231784LL;
	uint64_t t38 = 208802373762935638LLU;

    t38 = ((x157^x158)-(x159>x160));

    if (t38 != 126LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x161 = 21;
	int16_t x162 = INT16_MAX;
	int16_t x164 = -12073;

    t39 = ((x161^x162)-(x163>x164));

    if (t39 != 32745) { NG(); } else { ; }
	
}

void f40(void) {
    	static int64_t x165 = INT64_MIN;
	int64_t x166 = 5226640992LL;
	int64_t t40 = -4013160LL;

    t40 = ((x165^x166)-(x167>x168));

    if (t40 != -9223372031628134816LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x169 = INT32_MAX;
	uint64_t x170 = 42LLU;
	int64_t x171 = INT64_MAX;
	volatile int8_t x172 = INT8_MAX;
	uint64_t t41 = 182885612237LLU;

    t41 = ((x169^x170)-(x171>x172));

    if (t41 != 2147483604LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int8_t x173 = 0;
	int16_t x175 = INT16_MIN;
	int8_t x176 = INT8_MAX;
	int32_t t42 = -246044582;

    t42 = ((x173^x174)-(x175>x176));

    if (t42 != 11697) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x178 = -1;
	int16_t x179 = INT16_MIN;
	int8_t x180 = INT8_MIN;
	volatile int32_t t43 = 1;

    t43 = ((x177^x178)-(x179>x180));

    if (t43 != 45) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x181 = 30LLU;
	static int32_t x182 = INT32_MAX;
	static uint16_t x183 = 12U;
	uint64_t x184 = UINT64_MAX;
	uint64_t t44 = 9LLU;

    t44 = ((x181^x182)-(x183>x184));

    if (t44 != 2147483617LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x185 = INT8_MIN;
	static int16_t x186 = 42;
	uint64_t x187 = UINT64_MAX;
	static uint16_t x188 = 5U;
	volatile int32_t t45 = 1335;

    t45 = ((x185^x186)-(x187>x188));

    if (t45 != -87) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x189 = UINT16_MAX;
	uint16_t x191 = 9965U;
	int32_t t46 = 20588;

    t46 = ((x189^x190)-(x191>x192));

    if (t46 != -2147418114) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x193 = INT16_MAX;
	int32_t x194 = INT32_MAX;
	int64_t x195 = INT64_MAX;
	volatile int8_t x196 = INT8_MIN;
	int32_t t47 = -232;

    t47 = ((x193^x194)-(x195>x196));

    if (t47 != 2147450879) { NG(); } else { ; }
	
}

void f48(void) {
    	static uint16_t x197 = 4U;
	int16_t x198 = INT16_MIN;
	static uint16_t x199 = 28588U;
	uint16_t x200 = UINT16_MAX;
	int32_t t48 = 214489952;

    t48 = ((x197^x198)-(x199>x200));

    if (t48 != -32764) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x201 = 9180;
	int16_t x202 = -1731;
	uint64_t x203 = 134281751907860LLU;
	volatile uint32_t x204 = UINT32_MAX;
	int32_t t49 = -56248;

    t49 = ((x201^x202)-(x203>x204));

    if (t49 != -9504) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x205 = 11LL;
	volatile int16_t x206 = -1290;
	int32_t x207 = 8058;
	int32_t x208 = INT32_MIN;
	static int64_t t50 = -1750LL;

    t50 = ((x205^x206)-(x207>x208));

    if (t50 != -1284LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile uint8_t x209 = 23U;
	int64_t x210 = INT64_MIN;
	int32_t x211 = INT32_MIN;
	static int16_t x212 = INT16_MAX;
	volatile int64_t t51 = 494LL;

    t51 = ((x209^x210)-(x211>x212));

    if (t51 != -9223372036854775785LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x213 = 5U;
	volatile uint64_t x214 = UINT64_MAX;
	int16_t x215 = -1;
	volatile uint32_t x216 = 48512611U;
	static uint64_t t52 = 30004LLU;

    t52 = ((x213^x214)-(x215>x216));

    if (t52 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x217 = -1;
	static uint8_t x218 = 67U;
	int8_t x220 = INT8_MAX;
	volatile int32_t t53 = -35894761;

    t53 = ((x217^x218)-(x219>x220));

    if (t53 != -68) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x221 = -1;
	volatile int64_t x222 = 475848811LL;
	static uint64_t x223 = 60843445623471LLU;
	static volatile int64_t t54 = 11675178397323LL;

    t54 = ((x221^x222)-(x223>x224));

    if (t54 != -475848813LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x225 = -1;
	int32_t x226 = -1;
	static uint32_t x228 = 3U;
	static int32_t t55 = 47;

    t55 = ((x225^x226)-(x227>x228));

    if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x229 = -1257;
	int8_t x231 = -1;
	uint8_t x232 = UINT8_MAX;

    t56 = ((x229^x230)-(x231>x232));

    if (t56 != 1256LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static volatile uint32_t x233 = 2589U;
	volatile int32_t x235 = INT32_MIN;
	static uint32_t t57 = 7487024U;

    t57 = ((x233^x234)-(x235>x236));

    if (t57 != 4294937117U) { NG(); } else { ; }
	
}

void f58(void) {
    	static volatile uint16_t x237 = UINT16_MAX;
	static int64_t x238 = INT64_MIN;
	static volatile int64_t x239 = -1844687664999509LL;
	uint32_t x240 = 1087076181U;
	volatile int64_t t58 = -119266000926LL;

    t58 = ((x237^x238)-(x239>x240));

    if (t58 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x241 = 87079510U;
	volatile int16_t x242 = 3;
	int16_t x243 = -85;
	int16_t x244 = 145;
	volatile uint32_t t59 = 1278U;

    t59 = ((x241^x242)-(x243>x244));

    if (t59 != 87079509U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x245 = 0U;
	int32_t x246 = INT32_MAX;
	static int8_t x248 = -35;

    t60 = ((x245^x246)-(x247>x248));

    if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
    	uint8_t x250 = UINT8_MAX;
	uint8_t x251 = 10U;
	volatile int32_t x252 = INT32_MIN;
	volatile int32_t t61 = -32740;

    t61 = ((x249^x250)-(x251>x252));

    if (t61 != 241) { NG(); } else { ; }
	
}

void f62(void) {
    	static int8_t x253 = -1;
	uint8_t x254 = 11U;
	uint16_t x255 = UINT16_MAX;
	int64_t x256 = -1LL;
	int32_t t62 = -29722123;

    t62 = ((x253^x254)-(x255>x256));

    if (t62 != -13) { NG(); } else { ; }
	
}

void f63(void) {
    	int16_t x257 = INT16_MIN;
	int8_t x258 = INT8_MIN;
	volatile uint32_t x260 = 1U;
	volatile int32_t t63 = -256343;

    t63 = ((x257^x258)-(x259>x260));

    if (t63 != 32639) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int32_t x261 = -1;
	int16_t x262 = INT16_MAX;
	static uint16_t x263 = 919U;
	int16_t x264 = 8742;
	static volatile int32_t t64 = -8667;

    t64 = ((x261^x262)-(x263>x264));

    if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x265 = UINT8_MAX;
	int32_t x266 = -1;
	int8_t x267 = INT8_MIN;
	uint32_t x268 = 225464565U;
	volatile int32_t t65 = 17;

    t65 = ((x265^x266)-(x267>x268));

    if (t65 != -257) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x269 = -1;
	volatile int8_t x270 = INT8_MAX;
	static uint8_t x271 = 21U;
	static int8_t x272 = 0;
	int32_t t66 = 439037;

    t66 = ((x269^x270)-(x271>x272));

    if (t66 != -129) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x274 = -1;
	static uint16_t x275 = 1U;
	int64_t x276 = -3411663262447880663LL;
	volatile int32_t t67 = -346063750;

    t67 = ((x273^x274)-(x275>x276));

    if (t67 != -125632081) { NG(); } else { ; }
	
}

void f68(void) {
    	static int8_t x279 = INT8_MIN;
	volatile int16_t x280 = 1;

    t68 = ((x277^x278)-(x279>x280));

    if (t68 != 55415U) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint16_t x281 = 7U;
	volatile int32_t x282 = -1;
	static uint16_t x283 = 474U;
	static int32_t t69 = 73;

    t69 = ((x281^x282)-(x283>x284));

    if (t69 != -9) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int64_t x285 = -1LL;
	int8_t x286 = INT8_MAX;
	volatile int8_t x287 = INT8_MAX;
	volatile int64_t t70 = -218348191086154350LL;

    t70 = ((x285^x286)-(x287>x288));

    if (t70 != -129LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x290 = INT64_MIN;
	int16_t x291 = 15;
	int64_t x292 = -4178834434LL;
	volatile int64_t t71 = 106444574006602603LL;

    t71 = ((x289^x290)-(x291>x292));

    if (t71 != -9223372036850683502LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x294 = 27153U;
	int32_t x295 = INT32_MIN;
	uint32_t t72 = 1U;

    t72 = ((x293^x294)-(x295>x296));

    if (t72 != 4294940142U) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x297 = INT64_MIN;
	uint64_t x298 = 3291048719793LLU;
	int32_t x299 = -1;
	int8_t x300 = 0;

    t73 = ((x297^x298)-(x299>x300));

    if (t73 != 9223375327903495601LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x301 = 19312326107764944LLU;
	volatile uint64_t x302 = 234LLU;
	static int16_t x303 = 58;
	volatile uint64_t t74 = 2379746209LLU;

    t74 = ((x301^x302)-(x303>x304));

    if (t74 != 19312326107764794LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x305 = INT64_MIN;
	int32_t x306 = INT32_MIN;
	int32_t x307 = INT32_MAX;
	volatile int64_t t75 = -5209663LL;

    t75 = ((x305^x306)-(x307>x308));

    if (t75 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint64_t x310 = UINT64_MAX;
	int64_t x311 = INT64_MIN;

    t76 = ((x309^x310)-(x311>x312));

    if (t76 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint64_t x313 = 38265817LLU;
	int64_t x314 = -1LL;
	uint8_t x316 = UINT8_MAX;
	uint64_t t77 = 10130833779LLU;

    t77 = ((x313^x314)-(x315>x316));

    if (t77 != 18446744073671285797LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x320 = 2946831326LL;
	volatile int32_t t78 = -208255555;

    t78 = ((x317^x318)-(x319>x320));

    if (t78 != 3247) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x321 = 746236U;
	static int32_t x322 = INT32_MAX;
	int8_t x323 = -1;
	int64_t x324 = INT64_MAX;
	uint32_t t79 = 2107U;

    t79 = ((x321^x322)-(x323>x324));

    if (t79 != 2146737411U) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x325 = 37;
	int64_t x326 = INT64_MIN;
	static int64_t x327 = INT64_MAX;
	volatile uint8_t x328 = 3U;
	volatile int64_t t80 = -271846814774445802LL;

    t80 = ((x325^x326)-(x327>x328));

    if (t80 != -9223372036854775772LL) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x329 = INT64_MIN;
	uint32_t x330 = 20404U;
	int64_t x331 = INT64_MIN;
	int8_t x332 = -39;
	int64_t t81 = 14815263795LL;

    t81 = ((x329^x330)-(x331>x332));

    if (t81 != -9223372036854755404LL) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint32_t x333 = UINT32_MAX;
	uint64_t x334 = 2788412747463LLU;
	static int8_t x335 = -1;

    t82 = ((x333^x334)-(x335>x336));

    if (t82 != 2790749770039LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x337 = 7;
	volatile int32_t x338 = INT32_MIN;
	volatile int64_t x339 = -1LL;
	static uint64_t x340 = 19219411561268LLU;
	volatile int32_t t83 = 484049;

    t83 = ((x337^x338)-(x339>x340));

    if (t83 != -2147483642) { NG(); } else { ; }
	
}

void f84(void) {
    	int32_t x341 = INT32_MIN;
	int32_t x342 = INT32_MIN;
	uint16_t x343 = UINT16_MAX;
	volatile int8_t x344 = INT8_MIN;

    t84 = ((x341^x342)-(x343>x344));

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x345 = 0;
	uint16_t x346 = 1U;
	int16_t x348 = -1;
	volatile int32_t t85 = -82177994;

    t85 = ((x345^x346)-(x347>x348));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x349 = INT16_MIN;
	static int32_t x350 = -27042833;
	int32_t x351 = INT32_MIN;
	int16_t x352 = 3;
	static int32_t t86 = 21;

    t86 = ((x349^x350)-(x351>x352));

    if (t86 != 27057135) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int64_t x353 = 55441729411179LL;
	static uint16_t x354 = 201U;
	static volatile uint64_t x355 = UINT64_MAX;
	uint16_t x356 = UINT16_MAX;
	static int64_t t87 = -3LL;

    t87 = ((x353^x354)-(x355>x356));

    if (t87 != 55441729411233LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x357 = INT32_MAX;
	volatile int64_t x360 = INT64_MIN;
	volatile int64_t t88 = 59003962619357256LL;

    t88 = ((x357^x358)-(x359>x360));

    if (t88 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x362 = -6106;
	static volatile uint16_t x363 = 13U;
	int8_t x364 = INT8_MIN;
	int32_t t89 = 6354;

    t89 = ((x361^x362)-(x363>x364));

    if (t89 != 26661) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x365 = 27849LL;
	volatile int64_t x366 = 68648589487458891LL;
	static uint64_t x367 = 127458LLU;
	int64_t t90 = 105LL;

    t90 = ((x365^x366)-(x367>x368));

    if (t90 != 68648589487449730LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x369 = UINT16_MAX;
	uint64_t x370 = 871LLU;
	int8_t x372 = INT8_MIN;
	uint64_t t91 = 1014100386LLU;

    t91 = ((x369^x370)-(x371>x372));

    if (t91 != 64663LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x375 = 1724LLU;
	volatile uint64_t t92 = 2377792921567LLU;

    t92 = ((x373^x374)-(x375>x376));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static uint16_t x377 = 22342U;
	static int16_t x378 = -5;
	uint64_t x379 = 479402LLU;
	static int16_t x380 = INT16_MIN;
	int32_t t93 = -10;

    t93 = ((x377^x378)-(x379>x380));

    if (t93 != -22339) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x381 = 5163629LLU;
	static int8_t x382 = -1;
	static int64_t x384 = INT64_MAX;
	uint64_t t94 = 72206996911037657LLU;

    t94 = ((x381^x382)-(x383>x384));

    if (t94 != 18446744073704387986LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x385 = 5722329;
	uint64_t x386 = 1737771LLU;
	volatile int64_t x387 = 2305819016098LL;
	uint64_t t95 = 7LLU;

    t95 = ((x385^x386)-(x387>x388));

    if (t95 != 5100785LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x390 = INT16_MIN;
	int64_t x391 = INT64_MIN;
	uint32_t x392 = UINT32_MAX;
	volatile int32_t t96 = 1;

    t96 = ((x389^x390)-(x391>x392));

    if (t96 != 32640) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x393 = -1192;
	int16_t x394 = INT16_MIN;
	static int64_t x395 = -335696066LL;
	static volatile int32_t t97 = 383;

    t97 = ((x393^x394)-(x395>x396));

    if (t97 != 31576) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int16_t x398 = -1;
	int64_t x399 = -1LL;
	volatile int64_t t98 = 504290332763973687LL;

    t98 = ((x397^x398)-(x399>x400));

    if (t98 != -5681288LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x401 = -1;
	int64_t x402 = INT64_MIN;
	volatile uint8_t x403 = UINT8_MAX;
	static int64_t x404 = -215627497957751LL;

    t99 = ((x401^x402)-(x403>x404));

    if (t99 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x405 = 1127023224674LLU;
	static volatile uint32_t x406 = 374774986U;
	static int64_t x407 = -1LL;
	uint8_t x408 = 3U;

    t100 = ((x405^x406)-(x407>x408));

    if (t100 != 1127186119592LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x411 = INT64_MIN;
	int16_t x412 = 669;
	volatile int32_t t101 = 3335415;

    t101 = ((x409^x410)-(x411>x412));

    if (t101 != 4372) { NG(); } else { ; }
	
}

void f102(void) {
    	int64_t x414 = INT64_MIN;
	static int64_t x416 = -4234651304300LL;
	int64_t t102 = -39840294LL;

    t102 = ((x413^x414)-(x415>x416));

    if (t102 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x418 = UINT8_MAX;
	int8_t x420 = INT8_MAX;
	volatile int32_t t103 = -2;

    t103 = ((x417^x418)-(x419>x420));

    if (t103 != 32512) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x421 = -383;
	int64_t x422 = INT64_MIN;
	uint8_t x423 = 104U;
	int64_t t104 = -29391464591291222LL;

    t104 = ((x421^x422)-(x423>x424));

    if (t104 != 9223372036854775424LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int8_t x425 = INT8_MIN;
	uint64_t x426 = 21LLU;
	int32_t x427 = INT32_MIN;
	uint8_t x428 = 10U;
	static uint64_t t105 = 128593791294278LLU;

    t105 = ((x425^x426)-(x427>x428));

    if (t105 != 18446744073709551509LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int64_t x429 = 1LL;
	uint32_t x431 = 25730832U;
	static volatile int64_t x432 = INT64_MAX;
	int64_t t106 = 3907180LL;

    t106 = ((x429^x430)-(x431>x432));

    if (t106 != 1831724634785564LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x433 = 764515407847932LLU;
	int32_t x434 = -1;
	int8_t x435 = INT8_MAX;
	static uint16_t x436 = UINT16_MAX;
	volatile uint64_t t107 = 0LLU;

    t107 = ((x433^x434)-(x435>x436));

    if (t107 != 18445979558301703683LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int8_t x437 = INT8_MIN;
	volatile int16_t x438 = -13651;
	volatile uint32_t x439 = 375U;
	volatile int32_t t108 = -2309095;

    t108 = ((x437^x438)-(x439>x440));

    if (t108 != 13613) { NG(); } else { ; }
	
}

void f109(void) {
    	static volatile int32_t x442 = -896287;
	int16_t x443 = INT16_MIN;
	uint32_t x444 = UINT32_MAX;
	volatile int64_t t109 = 1994437979434857092LL;

    t109 = ((x441^x442)-(x443>x444));

    if (t109 != 9223372036853879521LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x446 = UINT32_MAX;
	static int16_t x448 = -1;
	int64_t t110 = -716881216504LL;

    t110 = ((x445^x446)-(x447>x448));

    if (t110 != -4294911627LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int64_t x449 = INT64_MAX;
	int16_t x450 = -4;
	int32_t x452 = INT32_MIN;
	static volatile int64_t t111 = 86896176LL;

    t111 = ((x449^x450)-(x451>x452));

    if (t111 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x456 = -1;
	uint64_t t112 = 61LLU;

    t112 = ((x453^x454)-(x455>x456));

    if (t112 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x457 = INT16_MIN;
	static int16_t x459 = -4;
	int64_t x460 = 102LL;
	int64_t t113 = -2185413988948292325LL;

    t113 = ((x457^x458)-(x459>x460));

    if (t113 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x461 = 28U;
	int64_t x462 = INT64_MIN;
	static volatile int64_t x463 = 198865761255695LL;

    t114 = ((x461^x462)-(x463>x464));

    if (t114 != -9223372036854775781LL) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint16_t x467 = UINT16_MAX;
	volatile int8_t x468 = INT8_MIN;
	volatile uint64_t t115 = 33014634129157LLU;

    t115 = ((x465^x466)-(x467>x468));

    if (t115 != 18446744073602564804LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x469 = 24759817881436404LL;
	int64_t x470 = 7514LL;
	int8_t x471 = INT8_MIN;
	int8_t x472 = 6;
	int64_t t116 = -98912222LL;

    t116 = ((x469^x470)-(x471>x472));

    if (t116 != 24759817881443758LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x473 = INT32_MIN;
	static uint64_t x474 = 297540LLU;
	int8_t x475 = INT8_MIN;
	uint8_t x476 = UINT8_MAX;
	volatile uint64_t t117 = 1401LLU;

    t117 = ((x473^x474)-(x475>x476));

    if (t117 != 18446744071562365508LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x477 = 1;
	uint8_t x478 = 2U;
	int64_t x479 = INT64_MIN;
	int8_t x480 = INT8_MIN;
	volatile int32_t t118 = 960019659;

    t118 = ((x477^x478)-(x479>x480));

    if (t118 != 3) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x481 = INT8_MIN;
	int16_t x483 = INT16_MAX;
	int64_t x484 = 129878703170LL;
	static int32_t t119 = 1629;

    t119 = ((x481^x482)-(x483>x484));

    if (t119 != 32640) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x485 = INT32_MIN;
	volatile int8_t x486 = 0;
	volatile uint32_t x487 = 93U;
	int32_t x488 = -1;
	volatile int32_t t120 = INT32_MIN;

    t120 = ((x485^x486)-(x487>x488));

    if (t120 != INT32_MIN) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x489 = -16;
	static int8_t x490 = -1;
	static uint8_t x491 = 32U;
	int32_t t121 = -14;

    t121 = ((x489^x490)-(x491>x492));

    if (t121 != 14) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile int8_t x493 = INT8_MAX;
	uint8_t x495 = 77U;
	uint64_t t122 = 3624LLU;

    t122 = ((x493^x494)-(x495>x496));

    if (t122 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x497 = -1;
	volatile int16_t x498 = 0;
	int16_t x500 = INT16_MIN;
	int32_t t123 = -507;

    t123 = ((x497^x498)-(x499>x500));

    if (t123 != -2) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int16_t x501 = -10;
	uint32_t x503 = 331276343U;
	int64_t x504 = INT64_MIN;

    t124 = ((x501^x502)-(x503>x504));

    if (t124 != 2147483637) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x505 = -442;
	volatile uint64_t x507 = 25LLU;
	uint8_t x508 = 1U;
	int64_t t125 = -49LL;

    t125 = ((x505^x506)-(x507>x508));

    if (t125 != 9223372036854775365LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x509 = UINT32_MAX;
	volatile int64_t x510 = INT64_MAX;
	int32_t x511 = -17248557;
	static int64_t x512 = -1LL;
	static volatile int64_t t126 = -26LL;

    t126 = ((x509^x510)-(x511>x512));

    if (t126 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint8_t x513 = 8U;
	uint16_t x515 = 54U;
	static uint64_t x516 = 32727LLU;
	volatile int32_t t127 = -24;

    t127 = ((x513^x514)-(x515>x516));

    if (t127 != 2147483639) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x517 = UINT16_MAX;
	int16_t x518 = 122;
	int64_t x519 = -34552LL;
	uint8_t x520 = 0U;
	int32_t t128 = 13800086;

    t128 = ((x517^x518)-(x519>x520));

    if (t128 != 65413) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x521 = UINT8_MAX;
	uint64_t x522 = UINT64_MAX;
	int64_t x523 = -4028LL;
	volatile int8_t x524 = 0;
	volatile uint64_t t129 = 257LLU;

    t129 = ((x521^x522)-(x523>x524));

    if (t129 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x525 = 11825U;
	static int16_t x526 = INT16_MIN;
	int16_t x527 = INT16_MIN;
	uint16_t x528 = 41U;
	static int32_t t130 = -132951;

    t130 = ((x525^x526)-(x527>x528));

    if (t130 != -20943) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x529 = -1;
	uint8_t x531 = 47U;
	uint64_t x532 = UINT64_MAX;
	static volatile int32_t t131 = -13610434;

    t131 = ((x529^x530)-(x531>x532));

    if (t131 != 32767) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int16_t x533 = INT16_MIN;
	static int16_t x534 = 3;
	static int16_t x535 = INT16_MIN;
	int64_t x536 = 2130005315065LL;
	volatile int32_t t132 = -16876967;

    t132 = ((x533^x534)-(x535>x536));

    if (t132 != -32765) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x537 = INT16_MIN;
	int8_t x538 = INT8_MAX;
	volatile int32_t x539 = INT32_MIN;
	int8_t x540 = INT8_MAX;

    t133 = ((x537^x538)-(x539>x540));

    if (t133 != -32641) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x541 = -1;
	int16_t x542 = -31;
	int16_t x543 = INT16_MIN;
	int32_t t134 = -49662029;

    t134 = ((x541^x542)-(x543>x544));

    if (t134 != 30) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x545 = -1;
	int8_t x546 = -10;
	volatile int8_t x547 = -23;
	int32_t x548 = 564800423;
	volatile int32_t t135 = 379;

    t135 = ((x545^x546)-(x547>x548));

    if (t135 != 9) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x550 = INT8_MIN;
	int32_t x551 = 163304559;
	uint16_t x552 = UINT16_MAX;
	volatile uint32_t t136 = 1851723U;

    t136 = ((x549^x550)-(x551>x552));

    if (t136 != 126U) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x553 = 48;
	static volatile uint64_t x554 = 1588776481LLU;
	static int32_t x555 = INT32_MAX;
	int8_t x556 = INT8_MIN;
	volatile uint64_t t137 = 1941309LLU;

    t137 = ((x553^x554)-(x555>x556));

    if (t137 != 1588776464LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x557 = INT32_MIN;
	static int32_t x558 = -29788;
	static int64_t x559 = INT64_MIN;
	int32_t x560 = 1386411;

    t138 = ((x557^x558)-(x559>x560));

    if (t138 != 2147453860) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint8_t x562 = 123U;
	int16_t x563 = INT16_MAX;
	int8_t x564 = INT8_MIN;
	static volatile int32_t t139 = 425;

    t139 = ((x561^x562)-(x563>x564));

    if (t139 != 1070) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x565 = INT16_MIN;
	int32_t x566 = INT32_MIN;
	int8_t x568 = -6;

    t140 = ((x565^x566)-(x567>x568));

    if (t140 != 2147450879) { NG(); } else { ; }
	
}

void f141(void) {
    	static int8_t x570 = 1;
	int16_t x571 = INT16_MIN;
	int64_t x572 = -5LL;
	int64_t t141 = 145835740LL;

    t141 = ((x569^x570)-(x571>x572));

    if (t141 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f142(void) {
    	int32_t x575 = INT32_MIN;
	int16_t x576 = 326;
	int32_t t142 = -9945;

    t142 = ((x573^x574)-(x575>x576));

    if (t142 != 126) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x577 = 1U;
	int32_t x578 = 1;
	volatile int16_t x580 = -761;
	volatile int32_t t143 = -1404;

    t143 = ((x577^x578)-(x579>x580));

    if (t143 != -1) { NG(); } else { ; }
	
}

void f144(void) {
    	static uint32_t x581 = 5U;
	uint64_t x582 = 1801303834716LLU;
	int16_t x583 = -1;
	volatile int16_t x584 = 63;
	uint64_t t144 = 306LLU;

    t144 = ((x581^x582)-(x583>x584));

    if (t144 != 1801303834713LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x585 = INT16_MIN;
	volatile uint8_t x586 = UINT8_MAX;
	int8_t x587 = INT8_MIN;
	static int32_t t145 = 428;

    t145 = ((x585^x586)-(x587>x588));

    if (t145 != -32514) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x589 = INT32_MAX;
	int64_t x590 = INT64_MIN;
	static volatile int8_t x591 = -1;
	uint32_t x592 = UINT32_MAX;

    t146 = ((x589^x590)-(x591>x592));

    if (t146 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x594 = INT64_MIN;
	static int32_t x595 = -1;
	volatile int64_t t147 = -521985094070LL;

    t147 = ((x593^x594)-(x595>x596));

    if (t147 != -9223372036854775554LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x597 = INT32_MIN;
	volatile int64_t x598 = 1858567155096258LL;
	static int16_t x599 = 0;
	static int16_t x600 = -1;
	static int64_t t148 = 11087383289929LL;

    t148 = ((x597^x598)-(x599>x600));

    if (t148 != -1858565978318143LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x602 = -17;
	volatile int32_t x603 = -1;
	uint8_t x604 = UINT8_MAX;
	static volatile int32_t t149 = 556;

    t149 = ((x601^x602)-(x603>x604));

    if (t149 != -112) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x607 = UINT16_MAX;
	uint32_t x608 = UINT32_MAX;
	int32_t t150 = 293348;

    t150 = ((x605^x606)-(x607>x608));

    if (t150 != -2147483521) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x613 = 90898587U;
	int16_t x616 = 2;

    t151 = ((x613^x614)-(x615>x616));

    if (t151 != 4204068708U) { NG(); } else { ; }
	
}

void f152(void) {
    	static int16_t x617 = -1;
	volatile int64_t x620 = INT64_MIN;
	volatile uint64_t t152 = 1465604092523257632LLU;

    t152 = ((x617^x618)-(x619>x620));

    if (t152 != 18446744069748898077LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x622 = UINT16_MAX;
	static volatile int64_t x623 = INT64_MIN;
	uint16_t x624 = UINT16_MAX;

    t153 = ((x621^x622)-(x623>x624));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x625 = -1;
	int64_t x626 = -35671160LL;
	int64_t x627 = INT64_MIN;
	int64_t t154 = -3543578LL;

    t154 = ((x625^x626)-(x627>x628));

    if (t154 != 35671159LL) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x629 = -1;
	static int64_t x630 = 914819150LL;
	int64_t x631 = INT64_MIN;
	uint32_t x632 = 947667090U;

    t155 = ((x629^x630)-(x631>x632));

    if (t155 != -914819151LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x635 = 72U;
	volatile uint64_t t156 = 349LLU;

    t156 = ((x633^x634)-(x635>x636));

    if (t156 != 18446744073708514886LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x637 = 547474637568687526LLU;
	uint8_t x638 = UINT8_MAX;
	uint32_t x639 = 3U;

    t157 = ((x637^x638)-(x639>x640));

    if (t157 != 547474637568687449LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x641 = -1;
	uint64_t x642 = UINT64_MAX;
	int8_t x643 = INT8_MAX;
	uint64_t t158 = UINT64_MAX;

    t158 = ((x641^x642)-(x643>x644));

    if (t158 != UINT64_MAX) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint32_t x645 = UINT32_MAX;
	static int64_t x646 = 4LL;
	static int64_t x647 = INT64_MIN;
	int64_t t159 = 393157184570959LL;

    t159 = ((x645^x646)-(x647>x648));

    if (t159 != 4294967290LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x651 = UINT64_MAX;
	int64_t x652 = -200597394144LL;
	volatile int32_t t160 = -6873495;

    t160 = ((x649^x650)-(x651>x652));

    if (t160 != 6426) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x653 = INT8_MIN;
	uint8_t x654 = 1U;
	uint32_t x655 = UINT32_MAX;
	static int8_t x656 = INT8_MIN;
	volatile int32_t t161 = -15937;

    t161 = ((x653^x654)-(x655>x656));

    if (t161 != -128) { NG(); } else { ; }
	
}

void f162(void) {
    	uint32_t x657 = 5U;
	int16_t x658 = 143;
	int16_t x659 = INT16_MIN;
	uint32_t x660 = 22583U;
	uint32_t t162 = 225U;

    t162 = ((x657^x658)-(x659>x660));

    if (t162 != 137U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x662 = UINT64_MAX;
	static int16_t x663 = INT16_MAX;
	int8_t x664 = 1;

    t163 = ((x661^x662)-(x663>x664));

    if (t163 != 7777386LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x665 = INT8_MAX;
	int8_t x666 = -14;
	volatile uint32_t x667 = UINT32_MAX;
	int32_t t164 = 125382;

    t164 = ((x665^x666)-(x667>x668));

    if (t164 != -115) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x669 = UINT16_MAX;
	int64_t x670 = INT64_MIN;
	int16_t x671 = -7350;
	volatile int32_t x672 = 10;
	int64_t t165 = 207446LL;

    t165 = ((x669^x670)-(x671>x672));

    if (t165 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x673 = INT16_MIN;
	uint16_t x674 = 3701U;
	static int8_t x675 = -10;
	int8_t x676 = -1;
	int32_t t166 = 2;

    t166 = ((x673^x674)-(x675>x676));

    if (t166 != -29067) { NG(); } else { ; }
	
}

void f167(void) {
    	uint8_t x678 = UINT8_MAX;
	static uint16_t x679 = UINT16_MAX;
	static int32_t t167 = 0;

    t167 = ((x677^x678)-(x679>x680));

    if (t167 != 127) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint64_t x681 = 7816372LLU;
	static int8_t x682 = INT8_MAX;
	int8_t x683 = 2;
	int16_t x684 = -6693;

    t168 = ((x681^x682)-(x683>x684));

    if (t168 != 7816394LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	uint32_t x686 = 4791628U;
	volatile uint8_t x687 = UINT8_MAX;
	uint32_t t169 = 1481117686U;

    t169 = ((x685^x686)-(x687>x688));

    if (t169 != 2152275275U) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int16_t x689 = INT16_MIN;
	int32_t x691 = INT32_MIN;

    t170 = ((x689^x690)-(x691>x692));

    if (t170 != -32769) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint32_t x693 = 1U;
	int8_t x694 = INT8_MIN;
	volatile int32_t x695 = INT32_MIN;
	static uint8_t x696 = 66U;
	static volatile uint32_t t171 = 1539089421U;

    t171 = ((x693^x694)-(x695>x696));

    if (t171 != 4294967169U) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x697 = 4;
	static int64_t x698 = INT64_MAX;
	volatile uint16_t x699 = 270U;
	int64_t t172 = 416161622LL;

    t172 = ((x697^x698)-(x699>x700));

    if (t172 != 9223372036854775802LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x702 = -1;
	static uint8_t x703 = 2U;
	volatile uint32_t x704 = UINT32_MAX;
	volatile int32_t t173 = -221;

    t173 = ((x701^x702)-(x703>x704));

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x705 = INT8_MIN;
	int16_t x706 = INT16_MIN;
	int8_t x707 = INT8_MIN;
	uint32_t x708 = UINT32_MAX;

    t174 = ((x705^x706)-(x707>x708));

    if (t174 != 32640) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x709 = 5U;
	int16_t x710 = INT16_MIN;
	int16_t x711 = -1;
	volatile int32_t t175 = 133880;

    t175 = ((x709^x710)-(x711>x712));

    if (t175 != -32764) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x717 = 2463429;
	int32_t x718 = INT32_MIN;
	uint32_t x719 = UINT32_MAX;
	static uint64_t x720 = 412172118740436869LLU;
	int32_t t176 = 0;

    t176 = ((x717^x718)-(x719>x720));

    if (t176 != -2145020219) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x721 = INT16_MIN;
	volatile int8_t x723 = INT8_MIN;
	volatile int16_t x724 = INT16_MAX;
	static volatile int64_t t177 = -274843331131LL;

    t177 = ((x721^x722)-(x723>x724));

    if (t177 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint16_t x725 = UINT16_MAX;
	static uint32_t x726 = UINT32_MAX;
	int64_t x727 = 38453LL;
	static uint64_t x728 = 98280854858834LLU;
	uint32_t t178 = 354U;

    t178 = ((x725^x726)-(x727>x728));

    if (t178 != 4294901760U) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile uint16_t x729 = 49U;
	uint64_t x730 = 2159513LLU;
	int16_t x731 = INT16_MIN;
	static uint8_t x732 = 13U;
	uint64_t t179 = 28961988029LLU;

    t179 = ((x729^x730)-(x731>x732));

    if (t179 != 2159528LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x733 = 2U;
	int8_t x734 = INT8_MIN;
	static int32_t x735 = 0;
	volatile int8_t x736 = 7;
	volatile int32_t t180 = 2522;

    t180 = ((x733^x734)-(x735>x736));

    if (t180 != -126) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x737 = INT16_MIN;
	volatile int16_t x738 = -5;
	uint16_t x739 = UINT16_MAX;
	int64_t x740 = 39037423706693894LL;
	int32_t t181 = -7738;

    t181 = ((x737^x738)-(x739>x740));

    if (t181 != 32763) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile int32_t x741 = -37;
	int32_t x742 = -799649164;
	int16_t x744 = INT16_MIN;
	volatile int32_t t182 = 2;

    t182 = ((x741^x742)-(x743>x744));

    if (t182 != 799649198) { NG(); } else { ; }
	
}

void f183(void) {
    	static int8_t x745 = -1;
	volatile int32_t x746 = INT32_MIN;
	int16_t x747 = 9962;
	volatile uint8_t x748 = 26U;
	volatile int32_t t183 = 0;

    t183 = ((x745^x746)-(x747>x748));

    if (t183 != 2147483646) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x749 = UINT64_MAX;
	int16_t x750 = INT16_MAX;
	static uint32_t x752 = 397207059U;

    t184 = ((x749^x750)-(x751>x752));

    if (t184 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x753 = INT8_MIN;
	int32_t x754 = INT32_MAX;
	int16_t x756 = -1;
	int32_t t185 = 908560974;

    t185 = ((x753^x754)-(x755>x756));

    if (t185 != -2147483521) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x758 = 15U;
	uint32_t x759 = 174U;
	int64_t x760 = -305349504030LL;
	volatile int32_t t186 = 7847;

    t186 = ((x757^x758)-(x759>x760));

    if (t186 != 65519) { NG(); } else { ; }
	
}

void f187(void) {
    	static volatile int64_t x761 = -1LL;
	int32_t x762 = INT32_MIN;
	volatile int8_t x764 = INT8_MIN;
	volatile int64_t t187 = 223100036605400LL;

    t187 = ((x761^x762)-(x763>x764));

    if (t187 != 2147483646LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint64_t x766 = 109212117900772142LLU;
	static int8_t x767 = INT8_MAX;
	volatile uint64_t t188 = 15386896LLU;

    t188 = ((x765^x766)-(x767>x768));

    if (t188 != 109212117900772140LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x769 = INT16_MAX;
	int64_t x770 = INT64_MIN;
	uint8_t x771 = 0U;
	int64_t x772 = INT64_MIN;
	volatile int64_t t189 = -9958187LL;

    t189 = ((x769^x770)-(x771>x772));

    if (t189 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static int32_t x773 = 431;
	uint8_t x774 = UINT8_MAX;
	static volatile int16_t x775 = 0;
	uint64_t x776 = UINT64_MAX;
	volatile int32_t t190 = 49;

    t190 = ((x773^x774)-(x775>x776));

    if (t190 != 336) { NG(); } else { ; }
	
}

void f191(void) {
    	static int8_t x777 = INT8_MIN;
	static int16_t x779 = INT16_MAX;
	int8_t x780 = INT8_MIN;
	int32_t t191 = 2;

    t191 = ((x777^x778)-(x779>x780));

    if (t191 != 2147483519) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x782 = UINT64_MAX;
	int8_t x783 = 27;
	static uint32_t x784 = UINT32_MAX;
	uint64_t t192 = 7760620LLU;

    t192 = ((x781^x782)-(x783>x784));

    if (t192 != 0LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int32_t x785 = 22665;
	int64_t x786 = -1LL;
	uint8_t x787 = UINT8_MAX;
	volatile int16_t x788 = 1;
	volatile int64_t t193 = 172682073093961258LL;

    t193 = ((x785^x786)-(x787>x788));

    if (t193 != -22667LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x789 = -29871LL;
	uint16_t x790 = 11069U;
	int64_t x792 = 13205937500LL;
	volatile int64_t t194 = -175687773LL;

    t194 = ((x789^x790)-(x791>x792));

    if (t194 != -24469LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile uint64_t x793 = 2555433LLU;
	int8_t x795 = -1;
	volatile uint64_t t195 = 598LLU;

    t195 = ((x793^x794)-(x795>x796));

    if (t195 != 2542081LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x798 = INT64_MAX;
	volatile int16_t x799 = INT16_MAX;

    t196 = ((x797^x798)-(x799>x800));

    if (t196 != 9223372036854751691LL) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint64_t x802 = 0LLU;
	int16_t x803 = INT16_MAX;
	int64_t x804 = -1LL;
	uint64_t t197 = 8987943934727580LLU;

    t197 = ((x801^x802)-(x803>x804));

    if (t197 != 559198853357961812LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x805 = INT16_MIN;
	volatile uint32_t x806 = UINT32_MAX;
	uint16_t x807 = UINT16_MAX;
	uint8_t x808 = 92U;

    t198 = ((x805^x806)-(x807>x808));

    if (t198 != 32766U) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x809 = -1;
	static int64_t x810 = -77014792020LL;
	int8_t x811 = 7;
	static int16_t x812 = INT16_MIN;
	volatile int64_t t199 = -26844246373LL;

    t199 = ((x809^x810)-(x811>x812));

    if (t199 != 77014792018LL) { NG(); } else { ; }
	
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

