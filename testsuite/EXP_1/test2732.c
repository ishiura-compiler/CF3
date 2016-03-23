
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

int32_t x1 = 0;
int32_t x2 = INT32_MIN;
uint8_t x8 = 0U;
int16_t x9 = INT16_MAX;
int64_t x11 = INT64_MAX;
volatile int64_t t3 = -3LL;
int16_t x17 = INT16_MAX;
int64_t x20 = INT64_MAX;
int32_t x21 = 104230;
volatile uint32_t t5 = 0U;
static volatile uint64_t x26 = UINT64_MAX;
static uint16_t x29 = 123U;
volatile int64_t x30 = 2179762573LL;
int8_t x34 = -2;
uint16_t x44 = 51U;
volatile int64_t x48 = INT64_MIN;
int64_t x54 = INT64_MIN;
int32_t x58 = -581182;
volatile int8_t x62 = -1;
volatile int32_t t16 = -28;
static uint8_t x82 = UINT8_MAX;
int32_t t21 = 64581;
static int32_t x91 = -1;
volatile uint64_t t23 = 4681419410LLU;
int32_t x102 = INT32_MAX;
int64_t t25 = -420976LL;
static uint8_t x108 = 4U;
uint64_t t26 = 1LLU;
int16_t x110 = INT16_MIN;
int64_t x111 = -1707938005LL;
int16_t x113 = INT16_MAX;
uint64_t x116 = 835879945258609LLU;
uint64_t t28 = 2146391998997088LLU;
uint64_t x118 = 3312785023285364136LLU;
int64_t x121 = 6839LL;
int64_t x129 = INT64_MIN;
volatile uint64_t t31 = 3606LLU;
int64_t x134 = 7290453LL;
uint8_t x139 = 118U;
volatile int8_t x140 = 2;
int16_t x141 = INT16_MIN;
int8_t x143 = -1;
int64_t t35 = 672908304259LL;
volatile uint32_t t36 = 0U;
int32_t x153 = -1;
int8_t x159 = INT8_MAX;
int16_t x167 = INT16_MIN;
volatile int8_t x172 = INT8_MIN;
int64_t t41 = -574814LL;
uint64_t t43 = 4283LLU;
uint16_t x182 = 116U;
volatile int64_t x185 = -54448096316406070LL;
static uint8_t x187 = 3U;
uint16_t x188 = 24U;
uint64_t t47 = 25459833761679837LLU;
uint64_t x197 = 5928263057669467LLU;
uint16_t x199 = UINT16_MAX;
static int32_t x203 = 722;
int64_t x207 = INT64_MIN;
int32_t x210 = -1;
static volatile uint16_t x214 = 7U;
static int64_t t53 = 414730LL;
int8_t x226 = -58;
int64_t x227 = INT64_MAX;
static int16_t x237 = INT16_MIN;
int32_t x238 = -636565;
static volatile int64_t t60 = 1048601520129LL;
int64_t t61 = -107971677723LL;
static int16_t x253 = 0;
static int64_t x260 = INT64_MIN;
int16_t x271 = -1;
int16_t x274 = INT16_MIN;
volatile uint64_t t67 = 953007838836171LLU;
uint64_t x282 = 1583035708688231530LLU;
volatile int32_t x283 = INT32_MIN;
uint64_t x284 = UINT64_MAX;
int32_t x286 = -2185;
uint8_t x287 = UINT8_MAX;
uint16_t x289 = 950U;
uint16_t x290 = UINT16_MAX;
static int64_t x292 = -1LL;
static int64_t t70 = 64447648725786782LL;
uint64_t x295 = UINT64_MAX;
int8_t x296 = -2;
uint64_t x308 = UINT64_MAX;
uint64_t t74 = 1562LLU;
uint32_t x324 = 7547848U;
volatile uint32_t t78 = 209U;
int16_t x328 = 1;
volatile int32_t x332 = INT32_MAX;
int32_t t80 = -69269939;
int8_t x334 = INT8_MIN;
volatile uint32_t x336 = 348U;
uint8_t x338 = 6U;
int16_t x352 = -1;
static volatile int64_t t84 = -526295886409181226LL;
uint32_t x353 = 25797209U;
int32_t x355 = INT32_MIN;
volatile uint64_t t87 = 1661943503715891LLU;
volatile int64_t x375 = INT64_MAX;
static int16_t x390 = 1938;
int64_t x393 = 82412879544420LL;
int32_t x397 = -1;
volatile int64_t x403 = INT64_MIN;
uint16_t x419 = UINT16_MAX;
static int64_t t100 = -1056656423236711577LL;
uint8_t x425 = 0U;
uint64_t x426 = UINT64_MAX;
int64_t x428 = INT64_MAX;
int32_t x429 = 20;
static int32_t x434 = -1;
static volatile uint64_t t103 = 1003193LLU;
static int16_t x437 = INT16_MIN;
static volatile uint64_t t106 = 6491946430LLU;
volatile uint64_t x455 = 7LLU;
int32_t x473 = -1;
volatile int8_t x476 = -5;
int32_t t113 = -414436289;
volatile int64_t x499 = -1LL;
int64_t x501 = INT64_MIN;
int64_t x502 = INT64_MAX;
int32_t x504 = -1;
volatile int64_t t120 = -9556LL;
int8_t x510 = INT8_MIN;
volatile int64_t t122 = -5721LL;
volatile uint32_t t123 = 1658725U;
uint8_t x526 = UINT8_MAX;
volatile uint8_t x530 = 14U;
int32_t x535 = 0;
uint64_t x538 = 7934388522487LLU;
uint64_t x546 = UINT64_MAX;
uint16_t x550 = 32098U;
int32_t x554 = INT32_MAX;
int16_t x564 = -31;
volatile uint64_t x565 = 970LLU;
int8_t x566 = -39;
int8_t x570 = -1;
volatile uint16_t x571 = 4U;
int32_t t138 = 291235;
static int64_t t139 = -13865974886827497LL;
int64_t x585 = INT64_MIN;
static int64_t x600 = 18552376879476LL;
uint8_t x601 = 0U;
int32_t x603 = INT32_MIN;
uint8_t x613 = 1U;
volatile int32_t x615 = INT32_MAX;
uint16_t x616 = 2U;
volatile uint32_t t147 = 1968U;
volatile int8_t x628 = -1;
int16_t x633 = INT16_MIN;
int64_t x635 = -1LL;
int32_t x636 = INT32_MAX;
volatile int64_t t151 = 177459440837725LL;
int8_t x637 = -1;
static int8_t x641 = INT8_MIN;
static int64_t x644 = -1LL;
static int8_t x648 = -1;
int64_t x651 = -1300953259LL;
static uint64_t t156 = 16736028086032830LLU;
volatile int32_t x661 = -2521817;
int64_t x666 = 53718LL;
int64_t t161 = -4281131622707321LL;
volatile int32_t x679 = INT32_MIN;
volatile uint8_t x680 = UINT8_MAX;
int32_t t165 = -3;
uint64_t x693 = UINT64_MAX;
int16_t x697 = -1;
int16_t x698 = INT16_MIN;
uint16_t x699 = 3956U;
uint8_t x703 = UINT8_MAX;
int8_t x706 = -1;
volatile int64_t t169 = 2985530LL;
int64_t t173 = 160798634927LL;
volatile int8_t x727 = INT8_MIN;
int64_t x735 = -1LL;
int8_t x741 = -10;
static uint32_t x745 = 2005U;
static uint32_t x748 = 4050U;
int64_t x756 = INT64_MAX;
static int64_t x759 = -87175855573162964LL;
uint64_t x760 = UINT64_MAX;
static int32_t x762 = -1454439;
volatile uint64_t x764 = 22LLU;
uint32_t x767 = 6238082U;
int8_t x771 = INT8_MIN;
static uint16_t x773 = 1201U;
int32_t x774 = INT32_MIN;
volatile int64_t x775 = -1LL;
int64_t t185 = 150390LL;
int32_t x778 = INT32_MIN;
uint16_t x779 = UINT16_MAX;
uint8_t x780 = UINT8_MAX;
static volatile uint32_t x793 = 33445006U;
int32_t x806 = 2;
uint64_t x807 = 34036389LLU;
int32_t x818 = INT32_MAX;
static int16_t x820 = -2;
volatile uint16_t x826 = 5U;
uint16_t x827 = 2U;
static int8_t x832 = INT8_MIN;


void f0(void) {
    	static int64_t x3 = 540573429221LL;
	static int32_t x4 = -587470;
	volatile int64_t t0 = 5466797838LL;

    t0 = (((x1^x2)^x3)-x4);

    if (t0 != -539610258253LL) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x5 = -1LL;
	static uint8_t x6 = UINT8_MAX;
	uint64_t x7 = UINT64_MAX;
	uint64_t t1 = 1224894LLU;

    t1 = (((x5^x6)^x7)-x8);

    if (t1 != 255LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x10 = 628936240LL;
	int32_t x12 = 133;
	int64_t t2 = 22688LL;

    t2 = (((x9^x10)^x11)-x12);

    if (t2 != 9223372036225846699LL) { NG(); } else { ; }
	
}

void f3(void) {
    	static int16_t x13 = INT16_MAX;
	volatile int8_t x14 = INT8_MIN;
	static int64_t x15 = -1LL;
	static int8_t x16 = -1;

    t3 = (((x13^x14)^x15)-x16);

    if (t3 != 32641LL) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x18 = 2U;
	uint64_t x19 = 3090443284LLU;
	volatile uint64_t t4 = 63415617726687LLU;

    t4 = (((x17^x18)^x19)-x20);

    if (t4 != 9223372039945196522LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x22 = 225;
	uint32_t x23 = 2634U;
	uint16_t x24 = 1721U;

    t5 = (((x21^x22)^x23)-x24);

    if (t5 != 104148U) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x25 = UINT8_MAX;
	uint64_t x27 = 5087995LLU;
	int8_t x28 = -3;
	volatile uint64_t t6 = 197147272LLU;

    t6 = (((x25^x26)^x27)-x28);

    if (t6 != 18446744073704463870LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x31 = 0;
	int32_t x32 = 0;
	int64_t t7 = -1LL;

    t7 = (((x29^x30)^x31)-x32);

    if (t7 != 2179762678LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = 1892;
	volatile uint64_t x35 = 9LLU;
	int32_t x36 = INT32_MAX;
	uint64_t t8 = 8220141854603303038LLU;

    t8 = (((x33^x34)^x35)-x36);

    if (t8 != 18446744071562066068LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x37 = INT32_MAX;
	uint32_t x38 = UINT32_MAX;
	static uint64_t x39 = 733660962LLU;
	int16_t x40 = 31;
	static volatile uint64_t t9 = 54360959LLU;

    t9 = (((x37^x38)^x39)-x40);

    if (t9 != 2881144579LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x41 = UINT8_MAX;
	int16_t x42 = INT16_MIN;
	uint8_t x43 = UINT8_MAX;
	int32_t t10 = 23323;

    t10 = (((x41^x42)^x43)-x44);

    if (t10 != -32819) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x45 = UINT32_MAX;
	int64_t x46 = INT64_MAX;
	int16_t x47 = -1;
	volatile int64_t t11 = -38278308615LL;

    t11 = (((x45^x46)^x47)-x48);

    if (t11 != 4294967295LL) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x49 = INT8_MIN;
	uint64_t x50 = UINT64_MAX;
	int64_t x51 = INT64_MIN;
	uint64_t x52 = 2794634LLU;
	uint64_t t12 = 3149239201053989290LLU;

    t12 = (((x49^x50)^x51)-x52);

    if (t12 != 9223372036851981301LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int8_t x53 = INT8_MIN;
	int16_t x55 = 464;
	uint16_t x56 = 127U;
	volatile int64_t t13 = 49355580746530LL;

    t13 = (((x53^x54)^x55)-x56);

    if (t13 != 9223372036854775249LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x57 = 0U;
	int32_t x59 = 305;
	int8_t x60 = INT8_MIN;
	static volatile int32_t t14 = 2937584;

    t14 = (((x57^x58)^x59)-x60);

    if (t14 != -581261) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile uint64_t x61 = UINT64_MAX;
	int8_t x63 = INT8_MAX;
	static volatile uint16_t x64 = UINT16_MAX;
	uint64_t t15 = 106794364745812LLU;

    t15 = (((x61^x62)^x63)-x64);

    if (t15 != 18446744073709486208LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x65 = 52U;
	int32_t x66 = INT32_MAX;
	int16_t x67 = 0;
	uint16_t x68 = 0U;

    t16 = (((x65^x66)^x67)-x68);

    if (t16 != 2147483595) { NG(); } else { ; }
	
}

void f17(void) {
    	uint32_t x69 = 39U;
	volatile int8_t x70 = INT8_MIN;
	static int16_t x71 = 0;
	uint8_t x72 = 110U;
	static volatile uint32_t t17 = 1392567865U;

    t17 = (((x69^x70)^x71)-x72);

    if (t17 != 4294967097U) { NG(); } else { ; }
	
}

void f18(void) {
    	uint64_t x73 = 884304935099332LLU;
	uint32_t x74 = UINT32_MAX;
	int32_t x75 = INT32_MIN;
	int64_t x76 = INT64_MIN;
	static uint64_t t18 = 277781320287018LLU;

    t18 = (((x73^x74)^x75)-x76);

    if (t18 != 9222487729772192827LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	int16_t x77 = INT16_MIN;
	int64_t x78 = -178285747781LL;
	uint16_t x79 = 14806U;
	int16_t x80 = 6433;
	volatile int64_t t19 = -9278827150LL;

    t19 = (((x77^x78)^x79)-x80);

    if (t19 != 178285756236LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x81 = INT32_MIN;
	int32_t x83 = INT32_MIN;
	uint64_t x84 = 157LLU;
	uint64_t t20 = 28752374LLU;

    t20 = (((x81^x82)^x83)-x84);

    if (t20 != 98LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile uint8_t x85 = 47U;
	uint8_t x86 = 15U;
	volatile int8_t x87 = 47;
	int16_t x88 = INT16_MIN;

    t21 = (((x85^x86)^x87)-x88);

    if (t21 != 32783) { NG(); } else { ; }
	
}

void f22(void) {
    	static int16_t x89 = -89;
	int16_t x90 = INT16_MIN;
	int64_t x92 = INT64_MIN;
	static volatile int64_t t22 = -13132891581919LL;

    t22 = (((x89^x90)^x91)-x92);

    if (t22 != 9223372036854743128LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int16_t x93 = INT16_MIN;
	volatile uint64_t x94 = 306856LLU;
	int16_t x95 = 12900;
	uint32_t x96 = 36U;

    t23 = (((x93^x94)^x95)-x96);

    if (t23 != 18446744073709231272LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x97 = 360706U;
	int16_t x98 = INT16_MIN;
	int16_t x99 = -4382;
	int16_t x100 = -3309;
	uint32_t t24 = 312U;

    t24 = (((x97^x98)^x99)-x100);

    if (t24 != 392397U) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x101 = INT8_MAX;
	volatile int64_t x103 = -4099385443205025LL;
	int32_t x104 = INT32_MIN;

    t25 = (((x101^x102)^x103)-x104);

    if (t25 != -4099385002311713LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x105 = -1;
	uint64_t x106 = 10846068109358LLU;
	int8_t x107 = 0;

    t26 = (((x105^x106)^x107)-x108);

    if (t26 != 18446733227641442253LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x109 = 11;
	volatile int32_t x112 = INT32_MAX;
	static int64_t t27 = 1396226576563647LL;

    t27 = (((x109^x110)^x111)-x112);

    if (t27 != -439521503LL) { NG(); } else { ; }
	
}

void f28(void) {
    	static uint16_t x114 = 359U;
	uint16_t x115 = 57U;

    t28 = (((x113^x114)^x115)-x116);

    if (t28 != 18445908193764325424LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int8_t x117 = INT8_MIN;
	static int16_t x119 = INT16_MAX;
	uint16_t x120 = 2851U;
	volatile uint64_t t29 = 121800512LLU;

    t29 = (((x117^x118)^x119)-x120);

    if (t29 != 15133959050424154804LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile uint16_t x122 = UINT16_MAX;
	int32_t x123 = INT32_MAX;
	uint8_t x124 = UINT8_MAX;
	volatile int64_t t30 = 7569952059342922LL;

    t30 = (((x121^x122)^x123)-x124);

    if (t30 != 2147424696LL) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x130 = -97;
	int8_t x131 = INT8_MAX;
	static uint64_t x132 = 61007LLU;

    t31 = (((x129^x130)^x131)-x132);

    if (t31 != 9223372036854714769LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x133 = 5U;
	uint32_t x135 = 3U;
	int8_t x136 = 17;
	volatile int64_t t32 = -280805LL;

    t32 = (((x133^x134)^x135)-x136);

    if (t32 != 7290434LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x137 = 5U;
	static uint32_t x138 = 1U;
	uint32_t t33 = 36U;

    t33 = (((x137^x138)^x139)-x140);

    if (t33 != 112U) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x142 = INT16_MIN;
	int8_t x144 = -28;
	int32_t t34 = -36;

    t34 = (((x141^x142)^x143)-x144);

    if (t34 != 27) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x145 = 30457U;
	static volatile int64_t x146 = INT64_MIN;
	volatile int16_t x147 = -3;
	int32_t x148 = INT32_MAX;

    t35 = (((x145^x146)^x147)-x148);

    if (t35 != 9223372034707261701LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int32_t x149 = INT32_MIN;
	uint32_t x150 = 25760U;
	uint16_t x151 = 106U;
	volatile int16_t x152 = INT16_MIN;

    t36 = (((x149^x150)^x151)-x152);

    if (t36 != 2147542218U) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x154 = -1;
	uint8_t x155 = UINT8_MAX;
	int32_t x156 = INT32_MAX;
	int32_t t37 = 56628;

    t37 = (((x153^x154)^x155)-x156);

    if (t37 != -2147483392) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x157 = -1;
	uint16_t x158 = UINT16_MAX;
	int16_t x160 = INT16_MAX;
	static int32_t t38 = 469795;

    t38 = (((x157^x158)^x159)-x160);

    if (t38 != -98176) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x161 = -42781808871110883LL;
	volatile int64_t x162 = 539110204075731479LL;
	int32_t x163 = -1;
	uint8_t x164 = 0U;
	int64_t t39 = -9LL;

    t39 = (((x161^x162)^x163)-x164);

    if (t39 != 571024817418179317LL) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int8_t x165 = 1;
	static int64_t x166 = -50032293LL;
	volatile uint8_t x168 = 22U;
	volatile int64_t t40 = -61649181LL;

    t40 = (((x165^x166)^x167)-x168);

    if (t40 != 50008388LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x169 = INT16_MIN;
	int64_t x170 = -25067770LL;
	uint32_t x171 = 4U;

    t41 = (((x169^x170)^x171)-x172);

    if (t41 != 25100162LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x173 = -1;
	uint16_t x174 = 4U;
	static int64_t x175 = INT64_MIN;
	int32_t x176 = 137;
	int64_t t42 = 22234LL;

    t42 = (((x173^x174)^x175)-x176);

    if (t42 != 9223372036854775666LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x177 = -1;
	uint32_t x178 = 121019413U;
	int64_t x179 = INT64_MIN;
	uint64_t x180 = 33693280197LLU;

    t43 = (((x177^x178)^x179)-x180);

    if (t43 != 9223372007335443493LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	uint64_t x181 = UINT64_MAX;
	int32_t x183 = -1;
	uint16_t x184 = 305U;
	volatile uint64_t t44 = 11855804942482612LLU;

    t44 = (((x181^x182)^x183)-x184);

    if (t44 != 18446744073709551427LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x186 = INT64_MIN;
	volatile int64_t t45 = 1765427937596LL;

    t45 = (((x185^x186)^x187)-x188);

    if (t45 != 9168923940538369713LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x189 = 19362545815LLU;
	volatile uint32_t x190 = 1U;
	int8_t x191 = INT8_MIN;
	uint8_t x192 = 0U;
	static volatile uint64_t t46 = 3170822753547LLU;

    t46 = (((x189^x190)^x191)-x192);

    if (t46 != 18446744054347005718LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x193 = UINT64_MAX;
	int64_t x194 = INT64_MIN;
	int32_t x195 = 500;
	uint8_t x196 = 1U;

    t47 = (((x193^x194)^x195)-x196);

    if (t47 != 9223372036854775306LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x198 = 75LLU;
	int64_t x200 = -11971707511861LL;
	uint64_t t48 = 7992LLU;

    t48 = (((x197^x198)^x199)-x200);

    if (t48 != 5940234765117220LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int32_t x201 = -1;
	int8_t x202 = -1;
	uint8_t x204 = 8U;
	int32_t t49 = 205400;

    t49 = (((x201^x202)^x203)-x204);

    if (t49 != 714) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x205 = INT32_MIN;
	volatile int64_t x206 = INT64_MIN;
	int64_t x208 = INT64_MIN;
	volatile int64_t t50 = 118691LL;

    t50 = (((x205^x206)^x207)-x208);

    if (t50 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x209 = 1U;
	int64_t x211 = -1LL;
	volatile int64_t x212 = 2LL;
	volatile int64_t t51 = 173370115960LL;

    t51 = (((x209^x210)^x211)-x212);

    if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int32_t x213 = -1;
	uint64_t x215 = 71973LLU;
	volatile uint32_t x216 = 33U;
	volatile uint64_t t52 = 3564LLU;

    t52 = (((x213^x214)^x215)-x216);

    if (t52 != 18446744073709479612LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x217 = -138149508LL;
	int64_t x218 = -1LL;
	int32_t x219 = INT32_MAX;
	int8_t x220 = INT8_MIN;

    t53 = (((x217^x218)^x219)-x220);

    if (t53 != 2009334268LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x221 = 5U;
	volatile int32_t x222 = INT32_MIN;
	uint32_t x223 = UINT32_MAX;
	int8_t x224 = INT8_MIN;
	uint32_t t54 = 258875637U;

    t54 = (((x221^x222)^x223)-x224);

    if (t54 != 2147483770U) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x225 = UINT32_MAX;
	int32_t x228 = INT32_MAX;
	static volatile int64_t t55 = 109935578939LL;

    t55 = (((x225^x226)^x227)-x228);

    if (t55 != 9223372034707292103LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint16_t x229 = UINT16_MAX;
	uint8_t x230 = 42U;
	int16_t x231 = -1;
	int32_t x232 = INT32_MIN;
	int32_t t56 = -1756;

    t56 = (((x229^x230)^x231)-x232);

    if (t56 != 2147418154) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x233 = -1;
	uint8_t x234 = 5U;
	int16_t x235 = INT16_MIN;
	volatile int8_t x236 = INT8_MIN;
	int32_t t57 = -95;

    t57 = (((x233^x234)^x235)-x236);

    if (t57 != 32890) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x239 = -1LL;
	uint32_t x240 = 1966031U;
	volatile int64_t t58 = -2063627LL;

    t58 = (((x237^x238)^x239)-x240);

    if (t58 != -2607419LL) { NG(); } else { ; }
	
}

void f59(void) {
    	static uint32_t x241 = 18U;
	volatile int8_t x242 = INT8_MIN;
	int64_t x243 = -1LL;
	uint16_t x244 = UINT16_MAX;
	static int64_t t59 = -1420001501LL;

    t59 = (((x241^x242)^x243)-x244);

    if (t59 != -4295032722LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x245 = 1151221LL;
	uint32_t x246 = 5025U;
	int8_t x247 = 1;
	int16_t x248 = 207;

    t60 = (((x245^x246)^x247)-x248);

    if (t60 != 1147526LL) { NG(); } else { ; }
	
}

void f61(void) {
    	static int64_t x249 = INT64_MIN;
	int8_t x250 = 1;
	volatile int64_t x251 = -5LL;
	static uint32_t x252 = 284339734U;

    t61 = (((x249^x250)^x251)-x252);

    if (t61 != 9223372036570436068LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x254 = 0LL;
	int32_t x255 = -1;
	volatile uint16_t x256 = UINT16_MAX;
	volatile int64_t t62 = -1568184602112788LL;

    t62 = (((x253^x254)^x255)-x256);

    if (t62 != -65536LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x257 = INT8_MAX;
	volatile uint16_t x258 = 1613U;
	int8_t x259 = INT8_MIN;
	volatile int64_t t63 = -881910LL;

    t63 = (((x257^x258)^x259)-x260);

    if (t63 != 9223372036854774194LL) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x265 = INT8_MIN;
	int64_t x266 = -1LL;
	static int8_t x267 = INT8_MAX;
	int8_t x268 = INT8_MAX;
	volatile int64_t t64 = -70208LL;

    t64 = (((x265^x266)^x267)-x268);

    if (t64 != -127LL) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x269 = UINT16_MAX;
	int8_t x270 = 1;
	int16_t x272 = -1;
	volatile int32_t t65 = -186;

    t65 = (((x269^x270)^x271)-x272);

    if (t65 != -65534) { NG(); } else { ; }
	
}

void f66(void) {
    	static int8_t x273 = INT8_MIN;
	volatile int64_t x275 = 3564150181491648760LL;
	int64_t x276 = -1LL;
	static volatile int64_t t66 = 98555330562LL;

    t66 = (((x273^x274)^x275)-x276);

    if (t66 != 3564150181491660665LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int8_t x277 = 8;
	int64_t x278 = INT64_MAX;
	static int16_t x279 = INT16_MAX;
	volatile uint64_t x280 = 1530423417832021744LLU;

    t67 = (((x277^x278)^x279)-x280);

    if (t67 != 7692948619022721304LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	uint8_t x281 = 96U;
	volatile uint64_t t68 = 178140201925LLU;

    t68 = (((x281^x282)^x283)-x284);

    if (t68 != 16863708367005084683LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int8_t x285 = -1;
	uint16_t x288 = UINT16_MAX;
	int32_t t69 = -2583153;

    t69 = (((x285^x286)^x287)-x288);

    if (t69 != -63368) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x291 = -1;

    t70 = (((x289^x290)^x291)-x292);

    if (t70 != -64585LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x293 = UINT64_MAX;
	static uint16_t x294 = 2U;
	uint64_t t71 = 3706LLU;

    t71 = (((x293^x294)^x295)-x296);

    if (t71 != 4LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile uint8_t x297 = 26U;
	int64_t x298 = 57154179LL;
	int32_t x299 = INT32_MAX;
	int8_t x300 = INT8_MAX;
	static int64_t t72 = 13181481588LL;

    t72 = (((x297^x298)^x299)-x300);

    if (t72 != 2090329319LL) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint64_t x301 = 38190753LLU;
	int16_t x302 = -1;
	int8_t x303 = INT8_MIN;
	uint16_t x304 = 191U;
	volatile uint64_t t73 = 0LLU;

    t73 = (((x301^x302)^x303)-x304);

    if (t73 != 38190623LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int32_t x305 = INT32_MAX;
	uint32_t x306 = 1350309236U;
	int64_t x307 = INT64_MAX;

    t74 = (((x305^x306)^x307)-x308);

    if (t74 != 9223372036057601397LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x309 = 323546817U;
	int16_t x310 = -1;
	static volatile uint32_t x311 = UINT32_MAX;
	volatile int64_t x312 = INT64_MAX;
	static volatile int64_t t75 = -524957491877146269LL;

    t75 = (((x309^x310)^x311)-x312);

    if (t75 != -9223372036531228990LL) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x313 = -332;
	uint32_t x314 = 3184U;
	static int32_t x315 = -1;
	uint64_t x316 = UINT64_MAX;
	volatile uint64_t t76 = 48594682071052670LLU;

    t76 = (((x313^x314)^x315)-x316);

    if (t76 != 3388LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x317 = INT64_MIN;
	int64_t x318 = -1LL;
	volatile int32_t x319 = -1;
	int8_t x320 = INT8_MIN;
	int64_t t77 = 23308567551LL;

    t77 = (((x317^x318)^x319)-x320);

    if (t77 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int32_t x321 = -1;
	uint16_t x322 = 848U;
	int32_t x323 = -1;

    t78 = (((x321^x322)^x323)-x324);

    if (t78 != 4287420296U) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x325 = -414;
	uint8_t x326 = 26U;
	int16_t x327 = INT16_MIN;
	int32_t t79 = -1;

    t79 = (((x325^x326)^x327)-x328);

    if (t79 != 32375) { NG(); } else { ; }
	
}

void f80(void) {
    	uint16_t x329 = UINT16_MAX;
	int8_t x330 = INT8_MIN;
	int8_t x331 = INT8_MIN;

    t80 = (((x329^x330)^x331)-x332);

    if (t80 != -2147418112) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x333 = UINT8_MAX;
	int8_t x335 = INT8_MAX;
	static volatile uint32_t t81 = 34552U;

    t81 = (((x333^x334)^x335)-x336);

    if (t81 != 4294966692U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x337 = 2U;
	static int16_t x339 = 4157;
	uint8_t x340 = UINT8_MAX;
	int32_t t82 = 0;

    t82 = (((x337^x338)^x339)-x340);

    if (t82 != 3898) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x345 = 7966111982477194LL;
	int16_t x346 = INT16_MIN;
	static int64_t x347 = 16946969LL;
	int64_t x348 = -1LL;
	static volatile int64_t t83 = 228440868067946257LL;

    t83 = (((x345^x346)^x347)-x348);

    if (t83 != -7966111999342444LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int32_t x349 = INT32_MAX;
	int8_t x350 = -28;
	int64_t x351 = INT64_MAX;

    t84 = (((x349^x350)^x351)-x352);

    if (t84 != -9223372034707292187LL) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x354 = 1U;
	int16_t x356 = -1;
	uint32_t t85 = 16077724U;

    t85 = (((x353^x354)^x355)-x356);

    if (t85 != 2173280857U) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x357 = 7U;
	volatile int64_t x358 = INT64_MIN;
	static int8_t x359 = 5;
	volatile int64_t x360 = INT64_MIN;
	int64_t t86 = 182169048131LL;

    t86 = (((x357^x358)^x359)-x360);

    if (t86 != 2LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x361 = INT32_MIN;
	uint64_t x362 = UINT64_MAX;
	volatile int32_t x363 = -1;
	static uint8_t x364 = 3U;

    t87 = (((x361^x362)^x363)-x364);

    if (t87 != 18446744071562067965LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x365 = INT64_MIN;
	uint64_t x366 = 37782447310802234LLU;
	static volatile int64_t x367 = -1LL;
	static int64_t x368 = INT64_MIN;
	static uint64_t t88 = 14157968996LLU;

    t88 = (((x365^x366)^x367)-x368);

    if (t88 != 18408961626398749381LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x369 = -1;
	volatile int8_t x370 = -1;
	int32_t x371 = INT32_MIN;
	static int8_t x372 = -5;
	volatile int32_t t89 = -1;

    t89 = (((x369^x370)^x371)-x372);

    if (t89 != -2147483643) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x373 = INT8_MIN;
	int32_t x374 = INT32_MIN;
	int8_t x376 = INT8_MAX;
	volatile int64_t t90 = 1717082943577231LL;

    t90 = (((x373^x374)^x375)-x376);

    if (t90 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x377 = 171856;
	volatile int16_t x378 = INT16_MIN;
	volatile uint16_t x379 = 11U;
	volatile int64_t x380 = -16162342344294LL;
	int64_t t91 = -2686375899699822LL;

    t91 = (((x377^x378)^x379)-x380);

    if (t91 != 16162342155713LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int64_t x389 = INT64_MIN;
	int16_t x391 = 3;
	static volatile int16_t x392 = INT16_MIN;
	int64_t t92 = -4804LL;

    t92 = (((x389^x390)^x391)-x392);

    if (t92 != -9223372036854741103LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile int16_t x394 = -1;
	uint8_t x395 = 34U;
	int32_t x396 = INT32_MIN;
	volatile int64_t t93 = -3266LL;

    t93 = (((x393^x394)^x395)-x396);

    if (t93 != -82410732060743LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x398 = 3240;
	int8_t x399 = INT8_MAX;
	int32_t x400 = INT32_MIN;
	int32_t t94 = 1;

    t94 = (((x397^x398)^x399)-x400);

    if (t94 != 2147480360) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x401 = -1LL;
	int16_t x402 = -1;
	uint64_t x404 = UINT64_MAX;
	uint64_t t95 = 5LLU;

    t95 = (((x401^x402)^x403)-x404);

    if (t95 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x405 = 12U;
	static int32_t x406 = -7934;
	static uint16_t x407 = 0U;
	int64_t x408 = -100953317444LL;
	volatile int64_t t96 = 32959624LL;

    t96 = (((x405^x406)^x407)-x408);

    if (t96 != 105248276818LL) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x409 = 761119986646LLU;
	int64_t x410 = -1LL;
	static int64_t x411 = INT64_MAX;
	int64_t x412 = INT64_MIN;
	uint64_t t97 = 4048706667765830412LLU;

    t97 = (((x409^x410)^x411)-x412);

    if (t97 != 761119986646LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x413 = UINT64_MAX;
	volatile uint16_t x414 = 29U;
	int32_t x415 = INT32_MIN;
	volatile int8_t x416 = INT8_MIN;
	volatile uint64_t t98 = 13634922177358076LLU;

    t98 = (((x413^x414)^x415)-x416);

    if (t98 != 2147483746LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x417 = UINT64_MAX;
	int64_t x418 = 799000826356425LL;
	uint8_t x420 = 0U;
	volatile uint64_t t99 = 2843125152501192921LLU;

    t99 = (((x417^x418)^x419)-x420);

    if (t99 != 18445945072883147465LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x421 = INT16_MIN;
	static volatile int8_t x422 = -1;
	static int64_t x423 = -1LL;
	uint32_t x424 = 2U;

    t100 = (((x421^x422)^x423)-x424);

    if (t100 != -32770LL) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x427 = 526502269U;
	uint64_t t101 = 230475335784071LLU;

    t101 = (((x425^x426)^x427)-x428);

    if (t101 != 9223372036328273539LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	static uint64_t x430 = UINT64_MAX;
	int64_t x431 = 9254723137994LL;
	volatile uint64_t x432 = 1268321792153LLU;
	uint64_t t102 = 4037671868LLU;

    t102 = (((x429^x430)^x431)-x432);

    if (t102 != 18446733550664621448LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x433 = INT16_MIN;
	volatile int32_t x435 = INT32_MIN;
	uint64_t x436 = UINT64_MAX;

    t103 = (((x433^x434)^x435)-x436);

    if (t103 != 18446744071562100736LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x438 = 8U;
	uint8_t x439 = 17U;
	static int16_t x440 = INT16_MAX;
	int32_t t104 = -1372;

    t104 = (((x437^x438)^x439)-x440);

    if (t104 != -65510) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x441 = 8U;
	static int64_t x442 = 105102LL;
	int8_t x443 = INT8_MIN;
	volatile int8_t x444 = 0;
	int64_t t105 = 21021092857704LL;

    t105 = (((x441^x442)^x443)-x444);

    if (t105 != -105210LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x445 = INT32_MIN;
	static int16_t x446 = INT16_MIN;
	uint64_t x447 = 69LLU;
	volatile int64_t x448 = INT64_MIN;

    t106 = (((x445^x446)^x447)-x448);

    if (t106 != 9223372039002226757LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x449 = UINT32_MAX;
	uint32_t x450 = 2U;
	int64_t x451 = -3912060LL;
	int64_t x452 = INT64_MIN;
	int64_t t107 = -4LL;

    t107 = (((x449^x450)^x451)-x452);

    if (t107 != 9223372032563720569LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x453 = 1;
	int64_t x454 = -1LL;
	int64_t x456 = INT64_MIN;
	uint64_t t108 = 16198608LLU;

    t108 = (((x453^x454)^x455)-x456);

    if (t108 != 9223372036854775801LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int64_t x457 = INT64_MIN;
	int32_t x458 = INT32_MIN;
	static int64_t x459 = INT64_MAX;
	int8_t x460 = INT8_MIN;
	static volatile int64_t t109 = 60965977659LL;

    t109 = (((x457^x458)^x459)-x460);

    if (t109 != 2147483775LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x461 = INT32_MIN;
	static uint16_t x462 = 1U;
	int64_t x463 = INT64_MIN;
	int32_t x464 = INT32_MAX;
	int64_t t110 = -15672LL;

    t110 = (((x461^x462)^x463)-x464);

    if (t110 != 9223372032559808514LL) { NG(); } else { ; }
	
}

void f111(void) {
    	static int64_t x465 = INT64_MAX;
	int16_t x466 = -21;
	int64_t x467 = INT64_MAX;
	int32_t x468 = 32990240;
	int64_t t111 = 34910861454298376LL;

    t111 = (((x465^x466)^x467)-x468);

    if (t111 != -32990261LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x469 = UINT32_MAX;
	uint32_t x470 = UINT32_MAX;
	uint8_t x471 = UINT8_MAX;
	int8_t x472 = INT8_MIN;
	static volatile uint32_t t112 = 99883327U;

    t112 = (((x469^x470)^x471)-x472);

    if (t112 != 383U) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x474 = INT16_MIN;
	uint8_t x475 = 108U;

    t113 = (((x473^x474)^x475)-x476);

    if (t113 != 32664) { NG(); } else { ; }
	
}

void f114(void) {
    	uint16_t x477 = 1673U;
	uint64_t x478 = 8818127059790284929LLU;
	static int32_t x479 = INT32_MIN;
	int8_t x480 = -1;
	uint64_t t114 = 4209896813292LLU;

    t114 = (((x477^x478)^x479)-x480);

    if (t114 != 9628617013082410505LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x485 = INT64_MAX;
	static uint16_t x486 = 641U;
	int64_t x487 = INT64_MAX;
	uint16_t x488 = 0U;
	int64_t t115 = 717180093800LL;

    t115 = (((x485^x486)^x487)-x488);

    if (t115 != 641LL) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x489 = UINT8_MAX;
	static int16_t x490 = INT16_MAX;
	int32_t x491 = -1;
	uint8_t x492 = 1U;
	volatile int32_t t116 = -74924235;

    t116 = (((x489^x490)^x491)-x492);

    if (t116 != -32514) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x493 = INT32_MIN;
	int8_t x494 = INT8_MIN;
	volatile int64_t x495 = INT64_MAX;
	uint32_t x496 = 236U;
	volatile int64_t t117 = 40179604463369LL;

    t117 = (((x493^x494)^x495)-x496);

    if (t117 != 9223372034707292051LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int32_t x497 = INT32_MIN;
	static volatile int8_t x498 = INT8_MIN;
	int16_t x500 = INT16_MAX;
	static int64_t t118 = -53185173549309092LL;

    t118 = (((x497^x498)^x499)-x500);

    if (t118 != -2147516288LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint8_t x503 = UINT8_MAX;
	int64_t t119 = 306207872LL;

    t119 = (((x501^x502)^x503)-x504);

    if (t119 != -255LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x505 = -18LL;
	static int8_t x506 = -1;
	volatile int8_t x507 = -1;
	static int32_t x508 = INT32_MIN;

    t120 = (((x505^x506)^x507)-x508);

    if (t120 != 2147483630LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int16_t x509 = INT16_MAX;
	static int16_t x511 = INT16_MAX;
	uint32_t x512 = UINT32_MAX;
	volatile uint32_t t121 = 7800U;

    t121 = (((x509^x510)^x511)-x512);

    if (t121 != 4294967169U) { NG(); } else { ; }
	
}

void f122(void) {
    	int64_t x513 = INT64_MIN;
	volatile uint16_t x514 = 783U;
	uint32_t x515 = 503U;
	int16_t x516 = INT16_MIN;

    t122 = (((x513^x514)^x515)-x516);

    if (t122 != -9223372036854742280LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile uint32_t x517 = 7725U;
	static int32_t x518 = 1547;
	int16_t x519 = INT16_MAX;
	int32_t x520 = -14248;

    t123 = (((x517^x518)^x519)-x520);

    if (t123 != 40833U) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x521 = -1;
	static uint32_t x522 = 3415U;
	uint32_t x523 = UINT32_MAX;
	static uint16_t x524 = 23U;
	uint32_t t124 = 178648U;

    t124 = (((x521^x522)^x523)-x524);

    if (t124 != 3392U) { NG(); } else { ; }
	
}

void f125(void) {
    	static uint64_t x525 = 96005324907LLU;
	static volatile int64_t x527 = INT64_MIN;
	int64_t x528 = INT64_MIN;
	volatile uint64_t t125 = 6186504020568119LLU;

    t125 = (((x525^x526)^x527)-x528);

    if (t125 != 96005324948LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static uint32_t x529 = 1U;
	int32_t x531 = INT32_MIN;
	static int16_t x532 = INT16_MIN;
	uint32_t t126 = 68152627U;

    t126 = (((x529^x530)^x531)-x532);

    if (t126 != 2147516431U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint32_t x533 = UINT32_MAX;
	uint32_t x534 = 866996U;
	uint8_t x536 = 1U;
	uint32_t t127 = 14U;

    t127 = (((x533^x534)^x535)-x536);

    if (t127 != 4294100298U) { NG(); } else { ; }
	
}

void f128(void) {
    	static volatile uint64_t x537 = UINT64_MAX;
	int8_t x539 = INT8_MIN;
	uint64_t x540 = 27505106975374176LLU;
	uint64_t t128 = 628864034288LLU;

    t128 = (((x537^x538)^x539)-x540);

    if (t128 != 18419246901122699816LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint8_t x541 = UINT8_MAX;
	static int64_t x542 = INT64_MIN;
	uint64_t x543 = UINT64_MAX;
	volatile int64_t x544 = 194704LL;
	volatile uint64_t t129 = 3903464331093265653LLU;

    t129 = (((x541^x542)^x543)-x544);

    if (t129 != 9223372036854580848LLU) { NG(); } else { ; }
	
}

void f130(void) {
    	static uint64_t x545 = UINT64_MAX;
	int8_t x547 = INT8_MIN;
	int64_t x548 = -4716669919836737LL;
	uint64_t t130 = 501782588385LLU;

    t130 = (((x545^x546)^x547)-x548);

    if (t130 != 4716669919836609LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x549 = 1;
	static volatile int8_t x551 = INT8_MIN;
	static int8_t x552 = INT8_MIN;
	int32_t t131 = -59;

    t131 = (((x549^x550)^x551)-x552);

    if (t131 != -31901) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x553 = INT16_MIN;
	uint32_t x555 = 7339171U;
	static volatile int16_t x556 = INT16_MIN;
	uint32_t t132 = 55940093U;

    t132 = (((x553^x554)^x555)-x556);

    if (t132 != 2154824540U) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int16_t x557 = INT16_MIN;
	int64_t x558 = INT64_MIN;
	int8_t x559 = INT8_MIN;
	int8_t x560 = -1;
	static int64_t t133 = -252823725114298667LL;

    t133 = (((x557^x558)^x559)-x560);

    if (t133 != -9223372036854743167LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x561 = -1;
	int64_t x562 = -1LL;
	int64_t x563 = INT64_MIN;
	static int64_t t134 = 353901979278269LL;

    t134 = (((x561^x562)^x563)-x564);

    if (t134 != -9223372036854775777LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x567 = -46;
	static int64_t x568 = INT64_MIN;
	volatile uint64_t t135 = 517283LLU;

    t135 = (((x565^x566)^x567)-x568);

    if (t135 != 9223372036854776769LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x569 = INT8_MIN;
	int32_t x572 = -1;
	static int32_t t136 = 806617;

    t136 = (((x569^x570)^x571)-x572);

    if (t136 != 124) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x573 = 820217194041LLU;
	int32_t x574 = INT32_MIN;
	volatile int16_t x575 = INT16_MIN;
	static int64_t x576 = -1LL;
	uint64_t t137 = 798175499771LLU;

    t137 = (((x573^x574)^x575)-x576);

    if (t137 != 818312816186LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x577 = INT8_MAX;
	static uint16_t x578 = UINT16_MAX;
	int8_t x579 = 3;
	static int8_t x580 = 0;

    t138 = (((x577^x578)^x579)-x580);

    if (t138 != 65411) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint32_t x581 = UINT32_MAX;
	int32_t x582 = INT32_MAX;
	int64_t x583 = -35917197530LL;
	int8_t x584 = INT8_MAX;

    t139 = (((x581^x582)^x583)-x584);

    if (t139 != -38064681305LL) { NG(); } else { ; }
	
}

void f140(void) {
    	static uint32_t x586 = 84U;
	int64_t x587 = INT64_MAX;
	volatile int32_t x588 = -1;
	int64_t t140 = -10335767LL;

    t140 = (((x585^x586)^x587)-x588);

    if (t140 != -84LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint8_t x589 = UINT8_MAX;
	int64_t x590 = -4117358220405690918LL;
	uint32_t x591 = 227675676U;
	static uint64_t x592 = 14241LLU;
	volatile uint64_t t141 = 288LLU;

    t141 = (((x589^x590)^x591)-x592);

    if (t141 != 14329385853480922008LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x593 = -14;
	static int32_t x594 = INT32_MIN;
	int32_t x595 = -16038535;
	volatile int16_t x596 = 0;
	volatile int32_t t142 = 75594190;

    t142 = (((x593^x594)^x595)-x596);

    if (t142 != -2131445109) { NG(); } else { ; }
	
}

void f143(void) {
    	static volatile int8_t x597 = INT8_MIN;
	uint8_t x598 = 65U;
	uint8_t x599 = 22U;
	volatile int64_t t143 = 90002LL;

    t143 = (((x597^x598)^x599)-x600);

    if (t143 != -18552376879517LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static volatile int32_t x602 = INT32_MIN;
	uint16_t x604 = 2888U;
	volatile int32_t t144 = 9586856;

    t144 = (((x601^x602)^x603)-x604);

    if (t144 != -2888) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x605 = 67U;
	volatile uint64_t x606 = 0LLU;
	static int32_t x607 = INT32_MIN;
	volatile int8_t x608 = -19;
	static volatile uint64_t t145 = 1LLU;

    t145 = (((x605^x606)^x607)-x608);

    if (t145 != 18446744071562068054LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x614 = 7509LL;
	int64_t t146 = -709LL;

    t146 = (((x613^x614)^x615)-x616);

    if (t146 != 2147476137LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x617 = INT8_MIN;
	uint32_t x618 = 11577U;
	int16_t x619 = INT16_MAX;
	int16_t x620 = INT16_MIN;

    t147 = (((x617^x618)^x619)-x620);

    if (t147 != 11590U) { NG(); } else { ; }
	
}

void f148(void) {
    	static int64_t x621 = INT64_MAX;
	int64_t x622 = INT64_MAX;
	int8_t x623 = -3;
	int16_t x624 = -31;
	volatile int64_t t148 = 14487LL;

    t148 = (((x621^x622)^x623)-x624);

    if (t148 != 28LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x625 = UINT16_MAX;
	uint8_t x626 = UINT8_MAX;
	volatile int64_t x627 = -1LL;
	volatile int64_t t149 = 858423318685574LL;

    t149 = (((x625^x626)^x627)-x628);

    if (t149 != -65280LL) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile uint16_t x629 = 14U;
	static volatile uint64_t x630 = 1561610LLU;
	static int8_t x631 = -1;
	static volatile uint64_t x632 = UINT64_MAX;
	uint64_t t150 = 2123901244LLU;

    t150 = (((x629^x630)^x631)-x632);

    if (t150 != 18446744073707990012LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile uint8_t x634 = 39U;

    t151 = (((x633^x634)^x635)-x636);

    if (t151 != -2147450919LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x638 = -9;
	static int8_t x639 = INT8_MIN;
	static int8_t x640 = INT8_MIN;
	int32_t t152 = 49;

    t152 = (((x637^x638)^x639)-x640);

    if (t152 != 8) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int64_t x642 = INT64_MAX;
	int16_t x643 = -1;
	volatile int64_t t153 = -159LL;

    t153 = (((x641^x642)^x643)-x644);

    if (t153 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x645 = UINT16_MAX;
	uint32_t x646 = 10618U;
	uint64_t x647 = 245183052058389LLU;
	static uint64_t t154 = 33552329112602553LLU;

    t154 = (((x645^x646)^x647)-x648);

    if (t154 != 245183052110225LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x649 = -34425788835LL;
	static uint8_t x650 = UINT8_MAX;
	int64_t x652 = -133591594089214736LL;
	volatile int64_t t155 = -14LL;

    t155 = (((x649^x650)^x651)-x652);

    if (t155 != 133591629764203783LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x653 = INT16_MAX;
	uint64_t x654 = 6344786437789364461LLU;
	uint32_t x655 = UINT32_MAX;
	int32_t x656 = -1;

    t156 = (((x653^x654)^x655)-x656);

    if (t156 != 6344786440737075438LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int16_t x657 = 0;
	static int16_t x658 = INT16_MIN;
	int8_t x659 = INT8_MAX;
	volatile int64_t x660 = INT64_MIN;
	int64_t t157 = 10156092899629145LL;

    t157 = (((x657^x658)^x659)-x660);

    if (t157 != 9223372036854743167LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x662 = 0U;
	volatile int32_t x663 = INT32_MIN;
	static uint16_t x664 = 6557U;
	volatile int32_t t158 = -78;

    t158 = (((x661^x662)^x663)-x664);

    if (t158 != 2144955274) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x665 = -1;
	int8_t x667 = INT8_MIN;
	volatile int8_t x668 = INT8_MAX;
	volatile int64_t t159 = 1020727449LL;

    t159 = (((x665^x666)^x667)-x668);

    if (t159 != 53546LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x669 = INT16_MIN;
	int16_t x670 = 0;
	int16_t x671 = INT16_MIN;
	int64_t x672 = 1LL;
	int64_t t160 = -12673752LL;

    t160 = (((x669^x670)^x671)-x672);

    if (t160 != -1LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x673 = INT8_MIN;
	volatile int16_t x674 = -1;
	volatile int16_t x675 = -1;
	int64_t x676 = 1222144688699441LL;

    t161 = (((x673^x674)^x675)-x676);

    if (t161 != -1222144688699569LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x677 = 6U;
	uint64_t x678 = UINT64_MAX;
	uint64_t t162 = 15LLU;

    t162 = (((x677^x678)^x679)-x680);

    if (t162 != 2147483386LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x681 = UINT8_MAX;
	uint16_t x682 = 0U;
	int32_t x683 = INT32_MIN;
	volatile uint16_t x684 = 1U;
	static volatile int32_t t163 = 170;

    t163 = (((x681^x682)^x683)-x684);

    if (t163 != -2147483394) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint64_t x685 = 569753052289LLU;
	int8_t x686 = INT8_MAX;
	uint16_t x687 = UINT16_MAX;
	volatile int16_t x688 = INT16_MIN;
	volatile uint64_t t164 = 66LLU;

    t164 = (((x685^x686)^x687)-x688);

    if (t164 != 569753066241LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x689 = INT8_MIN;
	static uint8_t x690 = UINT8_MAX;
	int32_t x691 = -1;
	static volatile int16_t x692 = INT16_MAX;

    t165 = (((x689^x690)^x691)-x692);

    if (t165 != -32639) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x694 = INT16_MIN;
	uint64_t x695 = 61088351134285838LLU;
	int16_t x696 = INT16_MIN;
	volatile uint64_t t166 = 37LLU;

    t166 = (((x693^x694)^x695)-x696);

    if (t166 != 61088351134351345LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile uint64_t x700 = 20431LLU;
	uint64_t t167 = 29752113038549711LLU;

    t167 = (((x697^x698)^x699)-x700);

    if (t167 != 8380LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x701 = INT32_MIN;
	int64_t x702 = -1LL;
	uint32_t x704 = 1146U;
	volatile int64_t t168 = -975904361LL;

    t168 = (((x701^x702)^x703)-x704);

    if (t168 != 2147482246LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x705 = 864233044534770LL;
	volatile int8_t x707 = INT8_MAX;
	int64_t x708 = -1778048LL;

    t169 = (((x705^x706)^x707)-x708);

    if (t169 != -864233042756622LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x709 = 75;
	uint8_t x710 = UINT8_MAX;
	int16_t x711 = -1;
	static int32_t x712 = -903;
	volatile int32_t t170 = 69855263;

    t170 = (((x709^x710)^x711)-x712);

    if (t170 != 722) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint32_t x713 = UINT32_MAX;
	int16_t x714 = -1;
	int32_t x715 = -1;
	int32_t x716 = -15;
	uint32_t t171 = 107865U;

    t171 = (((x713^x714)^x715)-x716);

    if (t171 != 14U) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x717 = INT16_MIN;
	int32_t x718 = INT32_MIN;
	int32_t x719 = -1;
	uint8_t x720 = UINT8_MAX;
	static int32_t t172 = 872945;

    t172 = (((x717^x718)^x719)-x720);

    if (t172 != -2147451136) { NG(); } else { ; }
	
}

void f173(void) {
    	int32_t x721 = INT32_MIN;
	static int64_t x722 = INT64_MIN;
	volatile int16_t x723 = INT16_MAX;
	int8_t x724 = -3;

    t173 = (((x721^x722)^x723)-x724);

    if (t173 != 9223372034707324930LL) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x725 = INT16_MIN;
	int16_t x726 = INT16_MIN;
	uint64_t x728 = UINT64_MAX;
	volatile uint64_t t174 = 23LLU;

    t174 = (((x725^x726)^x727)-x728);

    if (t174 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x729 = -101867766;
	int8_t x730 = -4;
	int64_t x731 = -1LL;
	int64_t x732 = INT64_MIN;
	int64_t t175 = -1LL;

    t175 = (((x729^x730)^x731)-x732);

    if (t175 != 9223372036752908041LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int64_t x733 = INT64_MAX;
	uint8_t x734 = 25U;
	static int64_t x736 = INT64_MIN;
	volatile int64_t t176 = 0LL;

    t176 = (((x733^x734)^x735)-x736);

    if (t176 != 25LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x742 = 1900;
	volatile uint64_t x743 = 9720LLU;
	static int32_t x744 = -1;
	volatile uint64_t t177 = 2469914199447313LLU;

    t177 = (((x741^x742)^x743)-x744);

    if (t177 != 18446744073709542755LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x746 = 14408;
	volatile int16_t x747 = INT16_MAX;
	static volatile uint32_t t178 = 182U;

    t178 = (((x745^x746)^x747)-x748);

    if (t178 != 12432U) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x749 = INT64_MIN;
	int8_t x750 = -1;
	volatile int8_t x751 = INT8_MIN;
	int8_t x752 = -1;
	int64_t t179 = -31LL;

    t179 = (((x749^x750)^x751)-x752);

    if (t179 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x753 = INT16_MIN;
	int8_t x754 = -32;
	int64_t x755 = 30515351194LL;
	volatile int64_t t180 = 4064479548572507LL;

    t180 = (((x753^x754)^x755)-x756);

    if (t180 != -9223372006339432069LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int16_t x757 = INT16_MIN;
	int8_t x758 = -1;
	uint64_t t181 = 534LLU;

    t181 = (((x757^x758)^x759)-x760);

    if (t181 != 18359568218136402900LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x761 = INT16_MAX;
	static int64_t x763 = -1LL;
	volatile uint64_t t182 = 76LLU;

    t182 = (((x761^x762)^x763)-x764);

    if (t182 != 1461891LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x765 = INT16_MAX;
	volatile int64_t x766 = -379318779696441LL;
	static int8_t x768 = -1;
	volatile int64_t t183 = -1LL;

    t183 = (((x765^x766)^x767)-x768);

    if (t183 != -379318781969733LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x769 = UINT64_MAX;
	volatile int32_t x770 = INT32_MIN;
	uint16_t x772 = 0U;
	uint64_t t184 = 1LLU;

    t184 = (((x769^x770)^x771)-x772);

    if (t184 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x776 = INT64_MAX;

    t185 = (((x773^x774)^x775)-x776);

    if (t185 != -9223372034707293361LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x777 = 695284653U;
	uint32_t t186 = 1579U;

    t186 = (((x777^x778)^x779)-x780);

    if (t186 != 2842807123U) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x781 = 1;
	int8_t x782 = INT8_MAX;
	uint32_t x783 = UINT32_MAX;
	uint16_t x784 = 2U;
	volatile uint32_t t187 = 63469689U;

    t187 = (((x781^x782)^x783)-x784);

    if (t187 != 4294967167U) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x785 = 17108LL;
	volatile int64_t x786 = INT64_MIN;
	int8_t x787 = INT8_MIN;
	uint8_t x788 = 3U;
	volatile int64_t t188 = -71LL;

    t188 = (((x785^x786)^x787)-x788);

    if (t188 != 9223372036854758737LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x789 = INT8_MIN;
	volatile int32_t x790 = -5;
	uint64_t x791 = UINT64_MAX;
	static uint16_t x792 = 1U;
	uint64_t t189 = 1301579LLU;

    t189 = (((x789^x790)^x791)-x792);

    if (t189 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint16_t x794 = 314U;
	static int8_t x795 = INT8_MAX;
	int32_t x796 = -1;
	volatile uint32_t t190 = 679U;

    t190 = (((x793^x794)^x795)-x796);

    if (t190 != 33445324U) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x797 = 30U;
	int16_t x798 = 12;
	int8_t x799 = 0;
	int16_t x800 = 102;
	uint32_t t191 = 15508964U;

    t191 = (((x797^x798)^x799)-x800);

    if (t191 != 4294967212U) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x801 = 28378893LL;
	static uint8_t x802 = UINT8_MAX;
	static int16_t x803 = -1;
	static int32_t x804 = -239467;
	int64_t t192 = -1926505251328LL;

    t192 = (((x801^x802)^x803)-x804);

    if (t192 != -28139656LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint32_t x805 = UINT32_MAX;
	int8_t x808 = 28;
	volatile uint64_t t193 = 1847351247541LLU;

    t193 = (((x805^x806)^x807)-x808);

    if (t193 != 4260930876LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x809 = INT64_MAX;
	uint32_t x810 = 6019673U;
	volatile int32_t x811 = -1;
	int64_t x812 = -1LL;
	int64_t t194 = -1LL;

    t194 = (((x809^x810)^x811)-x812);

    if (t194 != -9223372036848756134LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int32_t x813 = 0;
	int16_t x814 = INT16_MIN;
	int64_t x815 = INT64_MIN;
	uint32_t x816 = UINT32_MAX;
	int64_t t195 = 20868383291LL;

    t195 = (((x813^x814)^x815)-x816);

    if (t195 != 9223372032559775745LL) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x817 = 5;
	uint8_t x819 = 1U;
	static int32_t t196 = 0;

    t196 = (((x817^x818)^x819)-x820);

    if (t196 != 2147483645) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x821 = UINT64_MAX;
	uint64_t x822 = UINT64_MAX;
	uint64_t x823 = 92LLU;
	uint16_t x824 = 0U;
	volatile uint64_t t197 = 141677LLU;

    t197 = (((x821^x822)^x823)-x824);

    if (t197 != 92LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x825 = -230483506;
	volatile int32_t x828 = -1;
	volatile int32_t t198 = -12399501;

    t198 = (((x825^x826)^x827)-x828);

    if (t198 != -230483510) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int64_t x829 = INT64_MIN;
	uint16_t x830 = 239U;
	int32_t x831 = INT32_MAX;
	volatile int64_t t199 = 0LL;

    t199 = (((x829^x830)^x831)-x832);

    if (t199 != -9223372034707292272LL) { NG(); } else { ; }
	
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

