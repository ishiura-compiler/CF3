
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

volatile int64_t x7 = -14LL;
uint8_t x10 = 29U;
int16_t x21 = -1;
int64_t x27 = -1LL;
static uint64_t x28 = UINT64_MAX;
int64_t x32 = INT64_MAX;
uint16_t x33 = UINT16_MAX;
int32_t t8 = -142345;
volatile int16_t x43 = INT16_MIN;
static volatile int64_t x48 = INT64_MIN;
static uint16_t x49 = UINT16_MAX;
static int32_t x53 = INT32_MAX;
int8_t x56 = INT8_MIN;
volatile uint16_t x59 = UINT16_MAX;
volatile int64_t t16 = INT64_MIN;
uint32_t x73 = 3U;
int16_t x74 = -1;
volatile int64_t x77 = INT64_MIN;
int32_t x78 = -2;
static int8_t x80 = INT8_MIN;
uint64_t x90 = UINT64_MAX;
int64_t x91 = INT64_MIN;
int32_t x99 = -1;
int8_t x103 = INT8_MIN;
int8_t x105 = -15;
uint64_t x115 = 11LLU;
int64_t x116 = 56581LL;
int32_t x117 = 1;
int8_t x123 = -6;
static int64_t t30 = 21LL;
int16_t x129 = -3;
int64_t x130 = -1LL;
int64_t t32 = 1055967825386LL;
int64_t x136 = INT64_MIN;
volatile int32_t t33 = 767;
uint64_t x137 = UINT64_MAX;
static int32_t x139 = INT32_MIN;
uint64_t t34 = 39LLU;
volatile int64_t t35 = INT64_MAX;
uint16_t x145 = UINT16_MAX;
int64_t x148 = INT64_MAX;
static int64_t x153 = INT64_MAX;
int64_t x156 = INT64_MIN;
int16_t x158 = -2451;
int32_t x163 = INT32_MIN;
volatile uint8_t x165 = 7U;
int16_t x167 = -8;
int32_t x169 = INT32_MIN;
uint64_t x176 = UINT64_MAX;
static int8_t x184 = -27;
int64_t x187 = INT64_MIN;
static uint16_t x191 = 2U;
static int32_t t48 = 1750;
int32_t x197 = INT32_MIN;
int32_t x198 = -1;
static uint16_t x199 = 4035U;
int64_t t50 = -48455LL;
int32_t x214 = -1482;
static int32_t x216 = -15;
int8_t x217 = 1;
uint8_t x226 = 8U;
int8_t x227 = -1;
int64_t x231 = INT64_MIN;
int16_t x235 = INT16_MIN;
int64_t x236 = INT64_MIN;
static volatile int32_t x239 = INT32_MIN;
volatile uint32_t x242 = UINT32_MAX;
volatile uint32_t t58 = 0U;
static int8_t x248 = INT8_MIN;
volatile int64_t x250 = INT64_MIN;
uint16_t x253 = 936U;
volatile int8_t x254 = INT8_MIN;
static int16_t x256 = INT16_MIN;
uint32_t x257 = 7232U;
volatile int8_t x258 = INT8_MAX;
static volatile uint16_t x265 = UINT16_MAX;
static int32_t x271 = 240745;
volatile int32_t t66 = 358;
int16_t x281 = 8;
static volatile uint64_t x285 = 774416171798665LLU;
volatile int32_t t70 = -15192394;
volatile int32_t x304 = -16;
int32_t x314 = 6789;
int16_t x328 = 2749;
int32_t x333 = -215;
int64_t x338 = 48742232LL;
static int32_t x356 = INT32_MAX;
int8_t x358 = INT8_MAX;
uint8_t x361 = 2U;
int32_t x363 = -36668;
uint64_t x364 = 124915652835678977LLU;
static uint16_t x374 = 1U;
int64_t x376 = -1LL;
static volatile int8_t x377 = INT8_MIN;
int8_t x381 = 1;
uint64_t x382 = 950349LLU;
static uint32_t x393 = 169456828U;
static int32_t x398 = INT32_MIN;
volatile int32_t t94 = INT32_MAX;
volatile int64_t x405 = -265241463LL;
int32_t x407 = INT32_MIN;
int16_t x409 = INT16_MIN;
int16_t x412 = INT16_MIN;
static uint64_t t97 = 227129517071111LLU;
int32_t x414 = 270514;
int64_t x424 = -11LL;
int16_t x425 = -1;
int32_t t102 = 12937820;
static volatile int8_t x441 = -1;
static int16_t x442 = 5;
int8_t x445 = -1;
volatile int16_t x447 = 7;
volatile int8_t x448 = -1;
int32_t x451 = INT32_MIN;
uint8_t x454 = 3U;
static int32_t x456 = -1;
static int32_t t109 = 119844325;
volatile int64_t t110 = INT64_MIN;
uint32_t x466 = 3U;
uint8_t x469 = 11U;
volatile int32_t x471 = INT32_MAX;
volatile int32_t x476 = INT32_MAX;
volatile int64_t x477 = -1LL;
uint8_t x482 = 19U;
static uint64_t t116 = 155564453598428LLU;
int64_t x503 = -1LL;
int64_t x513 = 2810061LL;
int64_t x519 = 6336785127446752LL;
int32_t x529 = 23412464;
static int16_t x530 = 0;
int64_t x531 = INT64_MIN;
uint16_t x535 = 67U;
int64_t t126 = 5771771059LL;
static int64_t x539 = -1LL;
uint32_t x542 = UINT32_MAX;
uint16_t x547 = UINT16_MAX;
uint64_t x562 = 1896081065053LLU;
static int16_t x570 = -3127;
int32_t x572 = INT32_MIN;
volatile int32_t t135 = -437036;
int16_t x584 = -1;
static int16_t x588 = 1;
int64_t t137 = 15103LL;
uint16_t x593 = 11841U;
uint64_t x613 = UINT64_MAX;
int32_t x614 = 245;
volatile int64_t x616 = 1444895830LL;
uint32_t x618 = UINT32_MAX;
int8_t x622 = 39;
uint32_t x629 = 560233763U;
static int16_t x630 = INT16_MAX;
volatile int32_t x631 = 236307;
uint32_t t148 = 102633223U;
uint16_t x643 = 29U;
int32_t t150 = 683660;
int64_t x645 = INT64_MIN;
volatile int8_t x646 = -1;
volatile int64_t x649 = INT64_MAX;
uint8_t x652 = 0U;
int32_t x665 = -187524271;
uint32_t x668 = 14654125U;
volatile uint64_t t156 = 59743729934482LLU;
int32_t t157 = 189326;
int8_t x683 = INT8_MIN;
uint64_t x687 = UINT64_MAX;
int8_t x688 = 2;
volatile int32_t t161 = -29460151;
int64_t x691 = -2974767929648LL;
static uint8_t x693 = 1U;
static int32_t x694 = INT32_MIN;
uint32_t x700 = UINT32_MAX;
uint16_t x702 = 123U;
volatile int16_t x703 = INT16_MAX;
int64_t x706 = 0LL;
static int32_t x709 = 61;
uint32_t x713 = 1U;
int16_t x714 = INT16_MAX;
volatile uint32_t t168 = 192U;
int64_t x724 = INT64_MIN;
uint64_t x727 = 30LLU;
volatile int32_t t171 = -170527;
static int32_t x731 = -1;
int32_t x736 = INT32_MIN;
int16_t x740 = -1;
volatile uint32_t t176 = 9670U;
int8_t x759 = INT8_MIN;
volatile uint32_t x768 = 850159402U;
static int64_t x775 = INT64_MIN;
static volatile uint32_t x780 = 1U;
int64_t x782 = 10383427390LL;
static int16_t x789 = INT16_MIN;
uint32_t x792 = 350531829U;
uint32_t x796 = UINT32_MAX;
volatile int32_t t186 = 51;
volatile uint8_t x801 = 5U;
uint16_t x803 = 400U;
volatile uint32_t t189 = 22805579U;
int16_t x816 = INT16_MIN;
uint16_t x823 = 23U;
volatile int32_t x829 = 30;
uint32_t x834 = 64683018U;
int64_t x839 = INT64_MIN;


void f0(void) {
    	int16_t x1 = -1;
	uint64_t x2 = 2668478954LLU;
	static volatile uint8_t x3 = 6U;
	uint64_t x4 = 16LLU;
	volatile uint64_t t0 = 2LLU;

    t0 = (x1-(x2*(x3<=x4)));

    if (t0 != 18446744071041072661LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = 27U;
	volatile int32_t x6 = -3444;
	int64_t x8 = INT64_MAX;
	volatile uint32_t t1 = 14471U;

    t1 = (x5-(x6*(x7<=x8)));

    if (t1 != 3471U) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = INT8_MAX;
	int64_t x11 = INT64_MIN;
	uint16_t x12 = UINT16_MAX;
	int32_t t2 = 2923862;

    t2 = (x9-(x10*(x11<=x12)));

    if (t2 != 98) { NG(); } else { ; }
	
}

void f3(void) {
    	static int32_t x13 = -1;
	uint16_t x14 = UINT16_MAX;
	static int8_t x15 = INT8_MIN;
	volatile uint32_t x16 = UINT32_MAX;
	int32_t t3 = -119;

    t3 = (x13-(x14*(x15<=x16)));

    if (t3 != -65536) { NG(); } else { ; }
	
}

void f4(void) {
    	static volatile uint64_t x17 = UINT64_MAX;
	static int32_t x18 = INT32_MIN;
	volatile int64_t x19 = 29930LL;
	static volatile int8_t x20 = -1;
	volatile uint64_t t4 = UINT64_MAX;

    t4 = (x17-(x18*(x19<=x20)));

    if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x22 = 3315131559044LLU;
	static int16_t x23 = -1;
	int16_t x24 = -61;
	uint64_t t5 = UINT64_MAX;

    t5 = (x21-(x22*(x23<=x24)));

    if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	volatile uint32_t x26 = UINT32_MAX;
	volatile uint32_t t6 = 1174764203U;

    t6 = (x25-(x26*(x27<=x28)));

    if (t6 != 4294934529U) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x29 = -1;
	uint16_t x30 = UINT16_MAX;
	uint32_t x31 = UINT32_MAX;
	volatile int32_t t7 = -190160175;

    t7 = (x29-(x30*(x31<=x32)));

    if (t7 != -65536) { NG(); } else { ; }
	
}

void f8(void) {
    	uint8_t x34 = 35U;
	int32_t x35 = INT32_MIN;
	int64_t x36 = -1LL;

    t8 = (x33-(x34*(x35<=x36)));

    if (t8 != 65500) { NG(); } else { ; }
	
}

void f9(void) {
    	int16_t x37 = 4;
	int8_t x38 = -2;
	int32_t x39 = 168;
	static uint8_t x40 = UINT8_MAX;
	volatile int32_t t9 = 560965387;

    t9 = (x37-(x38*(x39<=x40)));

    if (t9 != 6) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x41 = INT8_MIN;
	volatile uint32_t x42 = 368548U;
	static int64_t x44 = -17LL;
	volatile uint32_t t10 = 185491589U;

    t10 = (x41-(x42*(x43<=x44)));

    if (t10 != 4294598620U) { NG(); } else { ; }
	
}

void f11(void) {
    	static int64_t x45 = -1LL;
	uint8_t x46 = 7U;
	int64_t x47 = -1LL;
	static int64_t t11 = -1695444LL;

    t11 = (x45-(x46*(x47<=x48)));

    if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x50 = 727870214314838592LLU;
	volatile int64_t x51 = INT64_MIN;
	static int32_t x52 = -1;
	static volatile uint64_t t12 = 1LLU;

    t12 = (x49-(x50*(x51<=x52)));

    if (t12 != 17718873859394778559LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	static int64_t x54 = INT64_MIN;
	static int32_t x55 = -1;
	static int64_t t13 = 1LL;

    t13 = (x53-(x54*(x55<=x56)));

    if (t13 != 2147483647LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x57 = -1LL;
	uint16_t x58 = 1891U;
	int64_t x60 = INT64_MIN;
	volatile int64_t t14 = 2675464LL;

    t14 = (x57-(x58*(x59<=x60)));

    if (t14 != -1LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x61 = 42U;
	static int8_t x62 = 12;
	int8_t x63 = 0;
	uint32_t x64 = 1314500U;
	volatile int32_t t15 = 2;

    t15 = (x61-(x62*(x63<=x64)));

    if (t15 != 30) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int64_t x65 = INT64_MIN;
	static int8_t x66 = 1;
	int16_t x67 = 1014;
	int16_t x68 = INT16_MIN;

    t16 = (x65-(x66*(x67<=x68)));

    if (t16 != INT64_MIN) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint16_t x69 = 16U;
	uint64_t x70 = 378864919LLU;
	int8_t x71 = 9;
	uint32_t x72 = 36U;
	volatile uint64_t t17 = 396019382084246LLU;

    t17 = (x69-(x70*(x71<=x72)));

    if (t17 != 18446744073330686713LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x75 = INT16_MIN;
	uint32_t x76 = UINT32_MAX;
	uint32_t t18 = 18218U;

    t18 = (x73-(x74*(x75<=x76)));

    if (t18 != 4U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x79 = UINT32_MAX;
	int64_t t19 = INT64_MIN;

    t19 = (x77-(x78*(x79<=x80)));

    if (t19 != INT64_MIN) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x81 = UINT64_MAX;
	uint32_t x82 = 30U;
	static int64_t x83 = INT64_MIN;
	int32_t x84 = INT32_MIN;
	uint64_t t20 = 5LLU;

    t20 = (x81-(x82*(x83<=x84)));

    if (t20 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x85 = 53U;
	int16_t x86 = INT16_MIN;
	uint16_t x87 = UINT16_MAX;
	int8_t x88 = INT8_MIN;
	uint32_t t21 = 2795679U;

    t21 = (x85-(x86*(x87<=x88)));

    if (t21 != 53U) { NG(); } else { ; }
	
}

void f22(void) {
    	static int64_t x89 = INT64_MAX;
	int16_t x92 = INT16_MIN;
	static volatile uint64_t t22 = 6368079009123146840LLU;

    t22 = (x89-(x90*(x91<=x92)));

    if (t22 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x93 = -1;
	static volatile uint8_t x94 = 6U;
	static uint16_t x95 = UINT16_MAX;
	static volatile int64_t x96 = -1766147LL;
	int32_t t23 = 1;

    t23 = (x93-(x94*(x95<=x96)));

    if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x97 = 43574874LL;
	int16_t x98 = 59;
	static int16_t x100 = INT16_MIN;
	volatile int64_t t24 = 832629613774LL;

    t24 = (x97-(x98*(x99<=x100)));

    if (t24 != 43574874LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x101 = -1;
	uint8_t x102 = 24U;
	int64_t x104 = -22434LL;
	int32_t t25 = -5184614;

    t25 = (x101-(x102*(x103<=x104)));

    if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x106 = 8968U;
	volatile int32_t x107 = INT32_MIN;
	static uint8_t x108 = UINT8_MAX;
	volatile uint32_t t26 = 22U;

    t26 = (x105-(x106*(x107<=x108)));

    if (t26 != 4294958313U) { NG(); } else { ; }
	
}

void f27(void) {
    	static volatile int8_t x109 = -1;
	int16_t x110 = INT16_MIN;
	static int64_t x111 = 3812LL;
	int32_t x112 = INT32_MIN;
	volatile int32_t t27 = -13;

    t27 = (x109-(x110*(x111<=x112)));

    if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x113 = -1;
	int16_t x114 = INT16_MIN;
	static int32_t t28 = 3963580;

    t28 = (x113-(x114*(x115<=x116)));

    if (t28 != 32767) { NG(); } else { ; }
	
}

void f29(void) {
    	static uint8_t x118 = 0U;
	int64_t x119 = INT64_MIN;
	int16_t x120 = -1;
	volatile int32_t t29 = 223973551;

    t29 = (x117-(x118*(x119<=x120)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int64_t x121 = -491062LL;
	int64_t x122 = 30921622LL;
	int32_t x124 = -10079;

    t30 = (x121-(x122*(x123<=x124)));

    if (t30 != -491062LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x125 = 0;
	volatile int64_t x126 = -424000083041LL;
	int64_t x127 = INT64_MIN;
	volatile uint32_t x128 = 1U;
	volatile int64_t t31 = -13856542867LL;

    t31 = (x125-(x126*(x127<=x128)));

    if (t31 != 424000083041LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x131 = INT16_MIN;
	int8_t x132 = -1;

    t32 = (x129-(x130*(x131<=x132)));

    if (t32 != -2LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x133 = 22027982;
	int8_t x134 = -1;
	int32_t x135 = INT32_MAX;

    t33 = (x133-(x134*(x135<=x136)));

    if (t33 != 22027982) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x138 = INT16_MIN;
	uint8_t x140 = 29U;

    t34 = (x137-(x138*(x139<=x140)));

    if (t34 != 32767LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x141 = -1;
	int64_t x142 = INT64_MIN;
	static int16_t x143 = 108;
	volatile uint32_t x144 = 22174190U;

    t35 = (x141-(x142*(x143<=x144)));

    if (t35 != INT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint16_t x146 = UINT16_MAX;
	int64_t x147 = -1LL;
	int32_t t36 = -1;

    t36 = (x145-(x146*(x147<=x148)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MAX;
	uint32_t x150 = 2180953U;
	static int8_t x151 = INT8_MIN;
	volatile uint32_t x152 = UINT32_MAX;
	static uint32_t t37 = 61305433U;

    t37 = (x149-(x150*(x151<=x152)));

    if (t37 != 4292819110U) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint64_t x154 = UINT64_MAX;
	int64_t x155 = INT64_MIN;
	uint64_t t38 = 55LLU;

    t38 = (x153-(x154*(x155<=x156)));

    if (t38 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x157 = 339153519LL;
	uint16_t x159 = 399U;
	static uint8_t x160 = UINT8_MAX;
	volatile int64_t t39 = -2079502432LL;

    t39 = (x157-(x158*(x159<=x160)));

    if (t39 != 339153519LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x161 = 8413234U;
	static uint32_t x162 = 186484U;
	int64_t x164 = -1LL;
	uint32_t t40 = 299530406U;

    t40 = (x161-(x162*(x163<=x164)));

    if (t40 != 8226750U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x166 = 0U;
	uint32_t x168 = UINT32_MAX;
	static volatile int32_t t41 = -152;

    t41 = (x165-(x166*(x167<=x168)));

    if (t41 != 7) { NG(); } else { ; }
	
}

void f42(void) {
    	static int8_t x170 = -1;
	volatile uint32_t x171 = 561511360U;
	uint64_t x172 = 276381006LLU;
	int32_t t42 = INT32_MIN;

    t42 = (x169-(x170*(x171<=x172)));

    if (t42 != INT32_MIN) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x173 = 2793U;
	int64_t x174 = 759647298397456290LL;
	volatile int8_t x175 = INT8_MIN;
	volatile int64_t t43 = -157497677942LL;

    t43 = (x173-(x174*(x175<=x176)));

    if (t43 != -759647298397453497LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x177 = -1;
	int32_t x178 = INT32_MIN;
	volatile int32_t x179 = -1;
	volatile int16_t x180 = -1;
	static volatile int32_t t44 = INT32_MAX;

    t44 = (x177-(x178*(x179<=x180)));

    if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x181 = 48;
	uint64_t x182 = 105144154LLU;
	int8_t x183 = -1;
	volatile uint64_t t45 = 10618824979LLU;

    t45 = (x181-(x182*(x183<=x184)));

    if (t45 != 48LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x185 = INT8_MIN;
	int32_t x186 = -65725;
	static int16_t x188 = 285;
	volatile int32_t t46 = -18296;

    t46 = (x185-(x186*(x187<=x188)));

    if (t46 != 65597) { NG(); } else { ; }
	
}

void f47(void) {
    	uint16_t x189 = UINT16_MAX;
	static volatile int16_t x190 = INT16_MIN;
	uint16_t x192 = UINT16_MAX;
	volatile int32_t t47 = 112210530;

    t47 = (x189-(x190*(x191<=x192)));

    if (t47 != 98303) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x193 = INT16_MIN;
	int32_t x194 = INT32_MIN;
	static int64_t x195 = -74574LL;
	static int8_t x196 = INT8_MIN;

    t48 = (x193-(x194*(x195<=x196)));

    if (t48 != 2147450880) { NG(); } else { ; }
	
}

void f49(void) {
    	static uint8_t x200 = 4U;
	volatile int32_t t49 = INT32_MIN;

    t49 = (x197-(x198*(x199<=x200)));

    if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x209 = INT64_MAX;
	uint32_t x210 = UINT32_MAX;
	int16_t x211 = INT16_MIN;
	int16_t x212 = -2345;

    t50 = (x209-(x210*(x211<=x212)));

    if (t50 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x213 = INT64_MIN;
	uint16_t x215 = 126U;
	volatile int64_t t51 = INT64_MIN;

    t51 = (x213-(x214*(x215<=x216)));

    if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x218 = 199U;
	uint8_t x219 = 2U;
	int8_t x220 = INT8_MAX;
	static volatile uint32_t t52 = 11628U;

    t52 = (x217-(x218*(x219<=x220)));

    if (t52 != 4294967098U) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x221 = 328400;
	int64_t x222 = INT64_MIN;
	volatile uint16_t x223 = UINT16_MAX;
	volatile int8_t x224 = -10;
	static volatile int64_t t53 = 11240LL;

    t53 = (x221-(x222*(x223<=x224)));

    if (t53 != 328400LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x225 = 1625521140029447LL;
	int8_t x228 = INT8_MIN;
	volatile int64_t t54 = 4LL;

    t54 = (x225-(x226*(x227<=x228)));

    if (t54 != 1625521140029447LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x229 = -1LL;
	int32_t x230 = INT32_MAX;
	int32_t x232 = -1;
	volatile int64_t t55 = -3980009LL;

    t55 = (x229-(x230*(x231<=x232)));

    if (t55 != -2147483648LL) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x233 = UINT32_MAX;
	uint32_t x234 = 1U;
	volatile uint32_t t56 = UINT32_MAX;

    t56 = (x233-(x234*(x235<=x236)));

    if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x237 = INT8_MIN;
	static int8_t x238 = INT8_MIN;
	int16_t x240 = -5;
	int32_t t57 = 370;

    t57 = (x237-(x238*(x239<=x240)));

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x241 = 190U;
	int8_t x243 = INT8_MAX;
	static uint32_t x244 = 90237U;

    t58 = (x241-(x242*(x243<=x244)));

    if (t58 != 191U) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x245 = 28;
	volatile uint16_t x246 = 211U;
	int8_t x247 = -1;
	int32_t t59 = 121382511;

    t59 = (x245-(x246*(x247<=x248)));

    if (t59 != 28) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x249 = INT8_MIN;
	static int16_t x251 = INT16_MIN;
	int32_t x252 = INT32_MAX;
	static int64_t t60 = 29LL;

    t60 = (x249-(x250*(x251<=x252)));

    if (t60 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x255 = UINT8_MAX;
	volatile int32_t t61 = -14854;

    t61 = (x253-(x254*(x255<=x256)));

    if (t61 != 936) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x259 = UINT64_MAX;
	uint32_t x260 = 5U;
	uint32_t t62 = 1U;

    t62 = (x257-(x258*(x259<=x260)));

    if (t62 != 7232U) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x261 = -1;
	uint64_t x262 = UINT64_MAX;
	volatile uint64_t x263 = 407159228910829LLU;
	uint8_t x264 = UINT8_MAX;
	uint64_t t63 = UINT64_MAX;

    t63 = (x261-(x262*(x263<=x264)));

    if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x266 = 3;
	int8_t x267 = INT8_MAX;
	int64_t x268 = INT64_MIN;
	int32_t t64 = -26;

    t64 = (x265-(x266*(x267<=x268)));

    if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
    	static int64_t x269 = INT64_MAX;
	int32_t x270 = INT32_MIN;
	int32_t x272 = -1;
	int64_t t65 = INT64_MAX;

    t65 = (x269-(x270*(x271<=x272)));

    if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
    	uint16_t x273 = 2771U;
	int32_t x274 = INT32_MAX;
	int32_t x275 = 2593;
	int32_t x276 = -966688;

    t66 = (x273-(x274*(x275<=x276)));

    if (t66 != 2771) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x277 = -1LL;
	int8_t x278 = INT8_MAX;
	volatile uint8_t x279 = 5U;
	int32_t x280 = -30;
	volatile int64_t t67 = -224219LL;

    t67 = (x277-(x278*(x279<=x280)));

    if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x282 = 3;
	int8_t x283 = 0;
	uint16_t x284 = UINT16_MAX;
	static volatile int32_t t68 = 886;

    t68 = (x281-(x282*(x283<=x284)));

    if (t68 != 5) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x286 = UINT8_MAX;
	uint32_t x287 = 1794U;
	static int32_t x288 = -41;
	static volatile uint64_t t69 = 6963620760LLU;

    t69 = (x285-(x286*(x287<=x288)));

    if (t69 != 774416171798410LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x289 = -1;
	volatile int8_t x290 = INT8_MAX;
	volatile int8_t x291 = -3;
	int8_t x292 = 36;

    t70 = (x289-(x290*(x291<=x292)));

    if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int16_t x293 = -1;
	uint32_t x294 = UINT32_MAX;
	uint8_t x295 = 30U;
	volatile uint64_t x296 = 257011733LLU;
	uint32_t t71 = 471124791U;

    t71 = (x293-(x294*(x295<=x296)));

    if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x297 = INT8_MIN;
	uint32_t x298 = 1984U;
	int16_t x299 = -2125;
	int8_t x300 = INT8_MAX;
	volatile uint32_t t72 = 1U;

    t72 = (x297-(x298*(x299<=x300)));

    if (t72 != 4294965184U) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int16_t x301 = -119;
	int8_t x302 = 28;
	uint64_t x303 = 59883010942413358LLU;
	static int32_t t73 = -1013;

    t73 = (x301-(x302*(x303<=x304)));

    if (t73 != -147) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x305 = -191;
	int8_t x306 = -1;
	int32_t x307 = 53246;
	static uint8_t x308 = 70U;
	volatile int32_t t74 = -2;

    t74 = (x305-(x306*(x307<=x308)));

    if (t74 != -191) { NG(); } else { ; }
	
}

void f75(void) {
    	int64_t x309 = -784934673597911LL;
	static uint8_t x310 = UINT8_MAX;
	static int32_t x311 = INT32_MAX;
	uint32_t x312 = UINT32_MAX;
	static int64_t t75 = 235857477874800LL;

    t75 = (x309-(x310*(x311<=x312)));

    if (t75 != -784934673598166LL) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x313 = -1LL;
	volatile int64_t x315 = INT64_MAX;
	uint16_t x316 = 5558U;
	static volatile int64_t t76 = 5970714197049LL;

    t76 = (x313-(x314*(x315<=x316)));

    if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
    	static uint8_t x321 = 1U;
	uint16_t x322 = 166U;
	static int32_t x323 = INT32_MIN;
	static volatile int16_t x324 = INT16_MIN;
	int32_t t77 = 71284727;

    t77 = (x321-(x322*(x323<=x324)));

    if (t77 != -165) { NG(); } else { ; }
	
}

void f78(void) {
    	int32_t x325 = 1;
	int8_t x326 = INT8_MIN;
	uint64_t x327 = 98297294LLU;
	int32_t t78 = 45918;

    t78 = (x325-(x326*(x327<=x328)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int16_t x329 = -1;
	int8_t x330 = INT8_MIN;
	uint16_t x331 = 272U;
	int64_t x332 = -1LL;
	int32_t t79 = -6774;

    t79 = (x329-(x330*(x331<=x332)));

    if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x334 = -467;
	static uint16_t x335 = 851U;
	int64_t x336 = INT64_MAX;
	volatile int32_t t80 = 49474102;

    t80 = (x333-(x334*(x335<=x336)));

    if (t80 != 252) { NG(); } else { ; }
	
}

void f81(void) {
    	int16_t x337 = INT16_MAX;
	static int16_t x339 = 101;
	int16_t x340 = INT16_MIN;
	int64_t t81 = 9816251LL;

    t81 = (x337-(x338*(x339<=x340)));

    if (t81 != 32767LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x345 = 1;
	uint16_t x346 = 1U;
	static uint8_t x347 = UINT8_MAX;
	int8_t x348 = INT8_MIN;
	static volatile int32_t t82 = 612647891;

    t82 = (x345-(x346*(x347<=x348)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x353 = -1LL;
	static int32_t x354 = INT32_MIN;
	uint16_t x355 = 1970U;
	volatile int64_t t83 = -60349LL;

    t83 = (x353-(x354*(x355<=x356)));

    if (t83 != 2147483647LL) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x357 = INT8_MAX;
	int16_t x359 = 144;
	int16_t x360 = INT16_MAX;
	int32_t t84 = -2428846;

    t84 = (x357-(x358*(x359<=x360)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x362 = 18U;
	int32_t t85 = -1;

    t85 = (x361-(x362*(x363<=x364)));

    if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x365 = -1LL;
	uint64_t x366 = 125LLU;
	int16_t x367 = 0;
	int16_t x368 = INT16_MAX;
	uint64_t t86 = 320LLU;

    t86 = (x365-(x366*(x367<=x368)));

    if (t86 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x369 = INT8_MIN;
	int16_t x370 = INT16_MIN;
	uint32_t x371 = 2U;
	uint16_t x372 = UINT16_MAX;
	volatile int32_t t87 = 3600;

    t87 = (x369-(x370*(x371<=x372)));

    if (t87 != 32640) { NG(); } else { ; }
	
}

void f88(void) {
    	int8_t x373 = -11;
	volatile uint64_t x375 = 10LLU;
	int32_t t88 = -54609;

    t88 = (x373-(x374*(x375<=x376)));

    if (t88 != -12) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile uint64_t x378 = UINT64_MAX;
	volatile uint32_t x379 = 2016690045U;
	uint32_t x380 = 90U;
	volatile uint64_t t89 = 11446390LLU;

    t89 = (x377-(x378*(x379<=x380)));

    if (t89 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x383 = -1675772922745735954LL;
	static uint16_t x384 = UINT16_MAX;
	uint64_t t90 = 829381789378071LLU;

    t90 = (x381-(x382*(x383<=x384)));

    if (t90 != 18446744073708601268LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x385 = 24LLU;
	uint64_t x386 = 35LLU;
	int64_t x387 = -1LL;
	int32_t x388 = -1;
	volatile uint64_t t91 = 1057936689240LLU;

    t91 = (x385-(x386*(x387<=x388)));

    if (t91 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int16_t x389 = -5391;
	int16_t x390 = -1;
	uint8_t x391 = 6U;
	int16_t x392 = -1;
	volatile int32_t t92 = 9;

    t92 = (x389-(x390*(x391<=x392)));

    if (t92 != -5391) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x394 = 36;
	volatile int32_t x395 = 761353;
	uint64_t x396 = 8053460719LLU;
	volatile uint32_t t93 = 413976U;

    t93 = (x393-(x394*(x395<=x396)));

    if (t93 != 169456792U) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x397 = -1;
	static int32_t x399 = INT32_MIN;
	volatile int16_t x400 = INT16_MIN;

    t94 = (x397-(x398*(x399<=x400)));

    if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x401 = INT8_MAX;
	int32_t x402 = 9679030;
	static int8_t x403 = INT8_MIN;
	uint16_t x404 = 367U;
	volatile int32_t t95 = -7;

    t95 = (x401-(x402*(x403<=x404)));

    if (t95 != -9678903) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x406 = INT8_MAX;
	int8_t x408 = -2;
	int64_t t96 = 492672039488LL;

    t96 = (x405-(x406*(x407<=x408)));

    if (t96 != -265241590LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x410 = 965LLU;
	int32_t x411 = INT32_MIN;

    t97 = (x409-(x410*(x411<=x412)));

    if (t97 != 18446744073709517883LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x413 = 8775423342836LL;
	volatile int8_t x415 = -1;
	int16_t x416 = INT16_MIN;
	volatile int64_t t98 = 10213475936026202LL;

    t98 = (x413-(x414*(x415<=x416)));

    if (t98 != 8775423342836LL) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x417 = 25U;
	int16_t x418 = INT16_MIN;
	static volatile int32_t x419 = 114389;
	uint64_t x420 = UINT64_MAX;
	static int32_t t99 = 1807;

    t99 = (x417-(x418*(x419<=x420)));

    if (t99 != 32793) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x421 = 1;
	int16_t x422 = 2563;
	int8_t x423 = -1;
	static volatile int32_t t100 = -3732566;

    t100 = (x421-(x422*(x423<=x424)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x426 = INT16_MIN;
	static uint8_t x427 = 6U;
	volatile int16_t x428 = -1;
	int32_t t101 = 511439;

    t101 = (x425-(x426*(x427<=x428)));

    if (t101 != -1) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x429 = -1;
	uint8_t x430 = UINT8_MAX;
	static volatile uint8_t x431 = 0U;
	uint64_t x432 = UINT64_MAX;

    t102 = (x429-(x430*(x431<=x432)));

    if (t102 != -256) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x433 = 1195U;
	int16_t x434 = INT16_MAX;
	int32_t x435 = 80285;
	static int64_t x436 = INT64_MIN;
	static int32_t t103 = -274448959;

    t103 = (x433-(x434*(x435<=x436)));

    if (t103 != 1195) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x437 = UINT64_MAX;
	uint16_t x438 = 54U;
	static uint32_t x439 = 14271U;
	uint64_t x440 = 315681006725208391LLU;
	static volatile uint64_t t104 = 804LLU;

    t104 = (x437-(x438*(x439<=x440)));

    if (t104 != 18446744073709551561LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static volatile int64_t x443 = INT64_MAX;
	uint8_t x444 = 5U;
	int32_t t105 = 495947292;

    t105 = (x441-(x442*(x443<=x444)));

    if (t105 != -1) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x446 = -316;
	static int32_t t106 = 1404904;

    t106 = (x445-(x446*(x447<=x448)));

    if (t106 != -1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x449 = 26;
	int32_t x450 = INT32_MIN;
	static int64_t x452 = INT64_MIN;
	int32_t t107 = 43;

    t107 = (x449-(x450*(x451<=x452)));

    if (t107 != 26) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x453 = -46;
	int32_t x455 = -1;
	int32_t t108 = 4071;

    t108 = (x453-(x454*(x455<=x456)));

    if (t108 != -49) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x457 = -1;
	uint8_t x458 = 126U;
	static int8_t x459 = 7;
	int8_t x460 = 3;

    t109 = (x457-(x458*(x459<=x460)));

    if (t109 != -1) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x461 = INT64_MIN;
	static int64_t x462 = -927456112LL;
	int32_t x463 = INT32_MAX;
	uint8_t x464 = 7U;

    t110 = (x461-(x462*(x463<=x464)));

    if (t110 != INT64_MIN) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x465 = INT32_MIN;
	volatile uint8_t x467 = 39U;
	volatile uint32_t x468 = 2099702U;
	volatile uint32_t t111 = 9433U;

    t111 = (x465-(x466*(x467<=x468)));

    if (t111 != 2147483645U) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x470 = INT8_MIN;
	volatile uint16_t x472 = 1U;
	int32_t t112 = -1017;

    t112 = (x469-(x470*(x471<=x472)));

    if (t112 != 11) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x473 = -3619264756645034756LL;
	uint8_t x474 = 6U;
	int16_t x475 = INT16_MIN;
	volatile int64_t t113 = -122845109788858937LL;

    t113 = (x473-(x474*(x475<=x476)));

    if (t113 != -3619264756645034762LL) { NG(); } else { ; }
	
}

void f114(void) {
    	uint8_t x478 = 10U;
	volatile int32_t x479 = INT32_MAX;
	int16_t x480 = -2770;
	int64_t t114 = -8787602554410LL;

    t114 = (x477-(x478*(x479<=x480)));

    if (t114 != -1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x481 = 1U;
	int16_t x483 = -1;
	static volatile uint32_t x484 = UINT32_MAX;
	static volatile int32_t t115 = 22206685;

    t115 = (x481-(x482*(x483<=x484)));

    if (t115 != -18) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint64_t x485 = 1LLU;
	volatile uint32_t x486 = UINT32_MAX;
	int8_t x487 = -1;
	uint64_t x488 = UINT64_MAX;

    t116 = (x485-(x486*(x487<=x488)));

    if (t116 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x489 = -1;
	uint16_t x490 = 3U;
	uint32_t x491 = 936431920U;
	int16_t x492 = 2;
	int32_t t117 = -5855831;

    t117 = (x489-(x490*(x491<=x492)));

    if (t117 != -1) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x497 = 4LL;
	uint8_t x498 = 0U;
	static int8_t x499 = 1;
	uint64_t x500 = UINT64_MAX;
	int64_t t118 = 166458117373LL;

    t118 = (x497-(x498*(x499<=x500)));

    if (t118 != 4LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x501 = 0;
	int32_t x502 = INT32_MAX;
	uint32_t x504 = 202U;
	volatile int32_t t119 = -51387;

    t119 = (x501-(x502*(x503<=x504)));

    if (t119 != -2147483647) { NG(); } else { ; }
	
}

void f120(void) {
    	static volatile uint16_t x505 = 43U;
	int32_t x506 = -10125;
	uint16_t x507 = UINT16_MAX;
	uint8_t x508 = 1U;
	int32_t t120 = 421;

    t120 = (x505-(x506*(x507<=x508)));

    if (t120 != 43) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x509 = UINT64_MAX;
	uint64_t x510 = UINT64_MAX;
	static int16_t x511 = INT16_MIN;
	int8_t x512 = -1;
	volatile uint64_t t121 = 149270486804172477LLU;

    t121 = (x509-(x510*(x511<=x512)));

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x514 = 30U;
	static uint16_t x515 = UINT16_MAX;
	volatile int32_t x516 = INT32_MIN;
	static volatile int64_t t122 = 2286937191598362996LL;

    t122 = (x513-(x514*(x515<=x516)));

    if (t122 != 2810061LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x517 = INT16_MIN;
	int32_t x518 = -1;
	int16_t x520 = INT16_MIN;
	volatile int32_t t123 = 322649;

    t123 = (x517-(x518*(x519<=x520)));

    if (t123 != -32768) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x521 = INT8_MIN;
	volatile int16_t x522 = 70;
	uint32_t x523 = 2U;
	uint32_t x524 = 1U;
	volatile int32_t t124 = 654397;

    t124 = (x521-(x522*(x523<=x524)));

    if (t124 != -128) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x532 = 0;
	static int32_t t125 = -1;

    t125 = (x529-(x530*(x531<=x532)));

    if (t125 != 23412464) { NG(); } else { ; }
	
}

void f126(void) {
    	int32_t x533 = INT32_MAX;
	volatile int64_t x534 = -33157075321840LL;
	static volatile int8_t x536 = 1;

    t126 = (x533-(x534*(x535<=x536)));

    if (t126 != 2147483647LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint16_t x537 = 0U;
	int16_t x538 = INT16_MIN;
	int16_t x540 = -1;
	volatile int32_t t127 = -116;

    t127 = (x537-(x538*(x539<=x540)));

    if (t127 != 32768) { NG(); } else { ; }
	
}

void f128(void) {
    	uint64_t x541 = 55548803655LLU;
	int16_t x543 = 0;
	int64_t x544 = INT64_MIN;
	static uint64_t t128 = 3946681048764504906LLU;

    t128 = (x541-(x542*(x543<=x544)));

    if (t128 != 55548803655LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint64_t x545 = 366991984687345LLU;
	int8_t x546 = INT8_MIN;
	uint32_t x548 = 28378707U;
	volatile uint64_t t129 = 4029LLU;

    t129 = (x545-(x546*(x547<=x548)));

    if (t129 != 366991984687473LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x549 = INT32_MIN;
	int64_t x550 = INT64_MIN;
	int32_t x551 = 98620992;
	static int16_t x552 = INT16_MIN;
	volatile int64_t t130 = -10652472168440LL;

    t130 = (x549-(x550*(x551<=x552)));

    if (t130 != -2147483648LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x561 = 14LLU;
	uint8_t x563 = 5U;
	int16_t x564 = -1;
	volatile uint64_t t131 = 28339632813819LLU;

    t131 = (x561-(x562*(x563<=x564)));

    if (t131 != 14LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x565 = INT32_MIN;
	uint16_t x566 = 5U;
	int8_t x567 = 22;
	int64_t x568 = -24771142LL;
	int32_t t132 = INT32_MIN;

    t132 = (x565-(x566*(x567<=x568)));

    if (t132 != INT32_MIN) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x569 = -323943078712407056LL;
	uint64_t x571 = UINT64_MAX;
	volatile int64_t t133 = -216LL;

    t133 = (x569-(x570*(x571<=x572)));

    if (t133 != -323943078712407056LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x573 = 13;
	int32_t x574 = INT32_MIN;
	uint8_t x575 = 66U;
	volatile int32_t x576 = -1978;
	volatile int32_t t134 = -301490877;

    t134 = (x573-(x574*(x575<=x576)));

    if (t134 != 13) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x577 = 185;
	uint8_t x578 = UINT8_MAX;
	uint8_t x579 = UINT8_MAX;
	static volatile int64_t x580 = -75883860207945LL;

    t135 = (x577-(x578*(x579<=x580)));

    if (t135 != 185) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x581 = 1U;
	int32_t x582 = INT32_MAX;
	uint64_t x583 = 163189758393076831LLU;
	volatile int32_t t136 = 193464090;

    t136 = (x581-(x582*(x583<=x584)));

    if (t136 != -2147483646) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int64_t x585 = INT64_MAX;
	uint32_t x586 = 62505U;
	int32_t x587 = -1;

    t137 = (x585-(x586*(x587<=x588)));

    if (t137 != 9223372036854713302LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x589 = -11;
	int32_t x590 = 309497142;
	int16_t x591 = 603;
	int32_t x592 = INT32_MAX;
	int32_t t138 = -1779359;

    t138 = (x589-(x590*(x591<=x592)));

    if (t138 != -309497153) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x594 = INT64_MAX;
	static int16_t x595 = INT16_MIN;
	static uint32_t x596 = 1780829U;
	volatile int64_t t139 = 1LL;

    t139 = (x593-(x594*(x595<=x596)));

    if (t139 != 11841LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x597 = -1;
	static volatile uint16_t x598 = 370U;
	uint32_t x599 = 595505410U;
	static volatile int16_t x600 = INT16_MAX;
	int32_t t140 = 53;

    t140 = (x597-(x598*(x599<=x600)));

    if (t140 != -1) { NG(); } else { ; }
	
}

void f141(void) {
    	uint16_t x601 = 1U;
	volatile uint8_t x602 = 0U;
	int64_t x603 = INT64_MIN;
	uint16_t x604 = 2U;
	int32_t t141 = 3460897;

    t141 = (x601-(x602*(x603<=x604)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x605 = 0U;
	int8_t x606 = 8;
	static volatile uint32_t x607 = UINT32_MAX;
	int64_t x608 = -2891LL;
	volatile int32_t t142 = -1258714;

    t142 = (x605-(x606*(x607<=x608)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	uint8_t x609 = UINT8_MAX;
	int8_t x610 = -1;
	volatile int16_t x611 = 141;
	int8_t x612 = INT8_MIN;
	int32_t t143 = -24;

    t143 = (x609-(x610*(x611<=x612)));

    if (t143 != 255) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x615 = INT32_MIN;
	volatile uint64_t t144 = 217LLU;

    t144 = (x613-(x614*(x615<=x616)));

    if (t144 != 18446744073709551370LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int16_t x617 = INT16_MAX;
	volatile uint64_t x619 = 19534831650387997LLU;
	int32_t x620 = INT32_MIN;
	volatile uint32_t t145 = 118728U;

    t145 = (x617-(x618*(x619<=x620)));

    if (t145 != 32768U) { NG(); } else { ; }
	
}

void f146(void) {
    	static uint64_t x621 = 405853249LLU;
	int64_t x623 = 3LL;
	int16_t x624 = 102;
	volatile uint64_t t146 = 553707016078548LLU;

    t146 = (x621-(x622*(x623<=x624)));

    if (t146 != 405853210LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int64_t x625 = -71LL;
	static int32_t x626 = INT32_MIN;
	uint16_t x627 = 5283U;
	int8_t x628 = -1;
	static volatile int64_t t147 = 67445LL;

    t147 = (x625-(x626*(x627<=x628)));

    if (t147 != -71LL) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int64_t x632 = -1LL;

    t148 = (x629-(x630*(x631<=x632)));

    if (t148 != 560233763U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x633 = UINT32_MAX;
	uint8_t x634 = UINT8_MAX;
	int8_t x635 = -1;
	volatile int64_t x636 = 2873593LL;
	uint32_t t149 = 31452U;

    t149 = (x633-(x634*(x635<=x636)));

    if (t149 != 4294967040U) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x641 = 188U;
	int16_t x642 = INT16_MIN;
	int8_t x644 = -1;

    t150 = (x641-(x642*(x643<=x644)));

    if (t150 != 188) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile uint8_t x647 = 103U;
	int32_t x648 = -31;
	volatile int64_t t151 = INT64_MIN;

    t151 = (x645-(x646*(x647<=x648)));

    if (t151 != INT64_MIN) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x650 = INT64_MAX;
	volatile int32_t x651 = -15;
	int64_t t152 = 4748727LL;

    t152 = (x649-(x650*(x651<=x652)));

    if (t152 != 0LL) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x653 = INT16_MIN;
	volatile int32_t x654 = INT32_MIN;
	static int64_t x655 = INT64_MAX;
	uint64_t x656 = 1993810547731514LLU;
	int32_t t153 = -766335;

    t153 = (x653-(x654*(x655<=x656)));

    if (t153 != -32768) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x657 = -1LL;
	uint32_t x658 = 1312457U;
	volatile int8_t x659 = 11;
	uint32_t x660 = 97U;
	int64_t t154 = 7LL;

    t154 = (x657-(x658*(x659<=x660)));

    if (t154 != -1312458LL) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x661 = INT16_MIN;
	int64_t x662 = -818009579224746LL;
	int64_t x663 = INT64_MAX;
	volatile int64_t x664 = INT64_MIN;
	volatile int64_t t155 = -19496743127132LL;

    t155 = (x661-(x662*(x663<=x664)));

    if (t155 != -32768LL) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x666 = UINT64_MAX;
	static volatile int32_t x667 = INT32_MIN;

    t156 = (x665-(x666*(x667<=x668)));

    if (t156 != 18446744073522027345LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x669 = UINT16_MAX;
	volatile int16_t x670 = INT16_MAX;
	volatile int8_t x671 = INT8_MAX;
	uint32_t x672 = 2320718U;

    t157 = (x669-(x670*(x671<=x672)));

    if (t157 != 32768) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x673 = -1LL;
	int64_t x674 = INT64_MIN;
	uint16_t x675 = 1U;
	volatile int16_t x676 = -1;
	int64_t t158 = 30125286981857LL;

    t158 = (x673-(x674*(x675<=x676)));

    if (t158 != -1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x677 = UINT32_MAX;
	int16_t x678 = INT16_MAX;
	int32_t x679 = -1;
	static volatile uint8_t x680 = UINT8_MAX;
	uint32_t t159 = 329262U;

    t159 = (x677-(x678*(x679<=x680)));

    if (t159 != 4294934528U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x681 = UINT64_MAX;
	uint32_t x682 = 72642U;
	uint32_t x684 = 1620911U;
	uint64_t t160 = UINT64_MAX;

    t160 = (x681-(x682*(x683<=x684)));

    if (t160 != UINT64_MAX) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x685 = UINT16_MAX;
	uint8_t x686 = UINT8_MAX;

    t161 = (x685-(x686*(x687<=x688)));

    if (t161 != 65535) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint8_t x689 = 13U;
	int64_t x690 = INT64_MAX;
	volatile int8_t x692 = 60;
	int64_t t162 = -839451624218LL;

    t162 = (x689-(x690*(x691<=x692)));

    if (t162 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x695 = 0U;
	int8_t x696 = -1;
	int32_t t163 = 1;

    t163 = (x693-(x694*(x695<=x696)));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int32_t x697 = INT32_MIN;
	static int64_t x698 = 1904214448LL;
	int8_t x699 = INT8_MIN;
	int64_t t164 = -31199742571566LL;

    t164 = (x697-(x698*(x699<=x700)));

    if (t164 != -4051698096LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x701 = 28269U;
	int64_t x704 = INT64_MAX;
	int32_t t165 = 956091;

    t165 = (x701-(x702*(x703<=x704)));

    if (t165 != 28146) { NG(); } else { ; }
	
}

void f166(void) {
    	static int32_t x705 = 9672;
	int16_t x707 = INT16_MIN;
	int8_t x708 = -4;
	int64_t t166 = 9027299446LL;

    t166 = (x705-(x706*(x707<=x708)));

    if (t166 != 9672LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int32_t x710 = INT32_MIN;
	uint8_t x711 = UINT8_MAX;
	int16_t x712 = INT16_MIN;
	int32_t t167 = 218;

    t167 = (x709-(x710*(x711<=x712)));

    if (t167 != 61) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x715 = 1;
	int32_t x716 = INT32_MIN;

    t168 = (x713-(x714*(x715<=x716)));

    if (t168 != 1U) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x717 = 70567709510991LLU;
	int32_t x718 = 182;
	volatile int8_t x719 = -1;
	static uint8_t x720 = 1U;
	static volatile uint64_t t169 = 32524047LLU;

    t169 = (x717-(x718*(x719<=x720)));

    if (t169 != 70567709510809LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int64_t x721 = INT64_MIN;
	static uint8_t x722 = UINT8_MAX;
	int64_t x723 = -1LL;
	int64_t t170 = INT64_MIN;

    t170 = (x721-(x722*(x723<=x724)));

    if (t170 != INT64_MIN) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x725 = INT8_MAX;
	static int8_t x726 = INT8_MAX;
	static uint32_t x728 = 735517170U;

    t171 = (x725-(x726*(x727<=x728)));

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint32_t x729 = 97853002U;
	int16_t x730 = -1;
	int64_t x732 = INT64_MAX;
	static uint32_t t172 = 50635U;

    t172 = (x729-(x730*(x731<=x732)));

    if (t172 != 97853003U) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int64_t x733 = INT64_MAX;
	static volatile uint32_t x734 = UINT32_MAX;
	static int64_t x735 = -1LL;
	volatile int64_t t173 = INT64_MAX;

    t173 = (x733-(x734*(x735<=x736)));

    if (t173 != INT64_MAX) { NG(); } else { ; }
	
}

void f174(void) {
    	static int16_t x737 = -1;
	static int64_t x738 = INT64_MAX;
	volatile uint32_t x739 = UINT32_MAX;
	volatile int64_t t174 = INT64_MIN;

    t174 = (x737-(x738*(x739<=x740)));

    if (t174 != INT64_MIN) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile uint64_t x741 = 100LLU;
	uint32_t x742 = 301U;
	uint16_t x743 = 1100U;
	volatile int32_t x744 = -114242;
	volatile uint64_t t175 = 947283LLU;

    t175 = (x741-(x742*(x743<=x744)));

    if (t175 != 100LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x745 = -1;
	volatile uint32_t x746 = 4186613U;
	int8_t x747 = INT8_MIN;
	uint16_t x748 = 1U;

    t176 = (x745-(x746*(x747<=x748)));

    if (t176 != 4290780682U) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int8_t x749 = 1;
	int32_t x750 = INT32_MAX;
	volatile int8_t x751 = INT8_MIN;
	uint8_t x752 = 6U;
	static int32_t t177 = 81263;

    t177 = (x749-(x750*(x751<=x752)));

    if (t177 != -2147483646) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint8_t x757 = 18U;
	int64_t x758 = INT64_MAX;
	volatile int16_t x760 = -3;
	static int64_t t178 = 2681592LL;

    t178 = (x757-(x758*(x759<=x760)));

    if (t178 != -9223372036854775789LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x761 = INT8_MIN;
	int16_t x762 = INT16_MIN;
	uint8_t x763 = 104U;
	static int64_t x764 = 4198258148LL;
	volatile int32_t t179 = -3;

    t179 = (x761-(x762*(x763<=x764)));

    if (t179 != 32640) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x765 = INT16_MIN;
	static uint16_t x766 = 5636U;
	volatile int16_t x767 = 1;
	static volatile int32_t t180 = 31038;

    t180 = (x765-(x766*(x767<=x768)));

    if (t180 != -38404) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x769 = -80324239;
	static uint8_t x770 = 3U;
	int32_t x771 = 56548;
	int64_t x772 = INT64_MIN;
	volatile int32_t t181 = -217631630;

    t181 = (x769-(x770*(x771<=x772)));

    if (t181 != -80324239) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x773 = -1;
	int16_t x774 = INT16_MIN;
	int32_t x776 = -270458813;
	int32_t t182 = 0;

    t182 = (x773-(x774*(x775<=x776)));

    if (t182 != 32767) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x777 = INT16_MAX;
	volatile int8_t x778 = INT8_MIN;
	int8_t x779 = INT8_MIN;
	volatile int32_t t183 = 238205382;

    t183 = (x777-(x778*(x779<=x780)));

    if (t183 != 32767) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x781 = -2994;
	static int16_t x783 = 0;
	int8_t x784 = -60;
	int64_t t184 = -32532LL;

    t184 = (x781-(x782*(x783<=x784)));

    if (t184 != -2994LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x790 = -385;
	int32_t x791 = INT32_MIN;
	volatile int32_t t185 = 9;

    t185 = (x789-(x790*(x791<=x792)));

    if (t185 != -32768) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x793 = 3;
	uint8_t x794 = 26U;
	uint32_t x795 = 1U;

    t186 = (x793-(x794*(x795<=x796)));

    if (t186 != -23) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x797 = UINT16_MAX;
	int16_t x798 = INT16_MIN;
	int8_t x799 = -1;
	volatile int64_t x800 = INT64_MAX;
	int32_t t187 = 126;

    t187 = (x797-(x798*(x799<=x800)));

    if (t187 != 98303) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x802 = -1LL;
	uint8_t x804 = UINT8_MAX;
	int64_t t188 = -56785LL;

    t188 = (x801-(x802*(x803<=x804)));

    if (t188 != 5LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x805 = 4130166U;
	uint32_t x806 = 112335U;
	uint16_t x807 = UINT16_MAX;
	static int64_t x808 = -4855393396LL;

    t189 = (x805-(x806*(x807<=x808)));

    if (t189 != 4130166U) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x809 = -1;
	volatile int16_t x810 = -1;
	uint16_t x811 = 2491U;
	int16_t x812 = INT16_MIN;
	volatile int32_t t190 = 4;

    t190 = (x809-(x810*(x811<=x812)));

    if (t190 != -1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x813 = 215805U;
	int64_t x814 = INT64_MIN;
	int16_t x815 = -1;
	volatile int64_t t191 = -1255966954LL;

    t191 = (x813-(x814*(x815<=x816)));

    if (t191 != 215805LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x817 = 2LL;
	volatile int16_t x818 = INT16_MIN;
	static uint64_t x819 = 724205525833652LLU;
	static volatile int32_t x820 = -9798591;
	volatile int64_t t192 = -603597LL;

    t192 = (x817-(x818*(x819<=x820)));

    if (t192 != 32770LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x821 = 28U;
	volatile uint8_t x822 = 1U;
	uint8_t x824 = 3U;
	static int32_t t193 = 16053124;

    t193 = (x821-(x822*(x823<=x824)));

    if (t193 != 28) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x825 = INT16_MIN;
	int16_t x826 = INT16_MIN;
	static int32_t x827 = INT32_MIN;
	int16_t x828 = INT16_MIN;
	volatile int32_t t194 = -200622586;

    t194 = (x825-(x826*(x827<=x828)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	uint32_t x830 = 13259912U;
	volatile int8_t x831 = INT8_MAX;
	volatile int64_t x832 = INT64_MIN;
	uint32_t t195 = 1013U;

    t195 = (x829-(x830*(x831<=x832)));

    if (t195 != 30U) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x833 = 3645U;
	static volatile int8_t x835 = INT8_MAX;
	int32_t x836 = -50359;
	uint32_t t196 = 1U;

    t196 = (x833-(x834*(x835<=x836)));

    if (t196 != 3645U) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x837 = INT8_MIN;
	uint64_t x838 = 28LLU;
	static int8_t x840 = INT8_MIN;
	volatile uint64_t t197 = 70149152362145991LLU;

    t197 = (x837-(x838*(x839<=x840)));

    if (t197 != 18446744073709551460LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x841 = INT8_MIN;
	uint16_t x842 = UINT16_MAX;
	int32_t x843 = -1;
	int8_t x844 = INT8_MIN;
	int32_t t198 = 43018;

    t198 = (x841-(x842*(x843<=x844)));

    if (t198 != -128) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x845 = INT8_MIN;
	int16_t x846 = 1;
	static uint16_t x847 = UINT16_MAX;
	int64_t x848 = -1LL;
	volatile int32_t t199 = -1731567;

    t199 = (x845-(x846*(x847<=x848)));

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

