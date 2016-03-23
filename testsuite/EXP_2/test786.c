
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

static int8_t x7 = INT8_MAX;
int16_t x23 = 7;
int16_t x39 = -1;
uint32_t t7 = 699U;
int8_t x48 = INT8_MIN;
static uint16_t x52 = 22432U;
uint16_t x60 = UINT16_MAX;
volatile int8_t x61 = INT8_MAX;
int64_t x64 = -1LL;
volatile int64_t t14 = 456LL;
static volatile uint64_t t15 = UINT64_MAX;
uint32_t x79 = UINT32_MAX;
static int32_t x80 = 667325061;
static int32_t x85 = INT32_MIN;
int64_t x100 = INT64_MIN;
int8_t x102 = 7;
volatile int64_t x105 = -264LL;
int64_t x114 = 55249001151715LL;
static uint8_t x117 = 0U;
volatile uint32_t t26 = 193089250U;
uint32_t x127 = UINT32_MAX;
static volatile int16_t x128 = 0;
static volatile int64_t t28 = 990765367931852475LL;
int16_t x133 = INT16_MIN;
int32_t t29 = 59765025;
int16_t x138 = INT16_MAX;
static int64_t x141 = INT64_MAX;
volatile int64_t t31 = -314669164812LL;
uint8_t x149 = 1U;
static uint16_t x153 = 211U;
uint32_t x155 = 443U;
static uint64_t x158 = 1332047407460767LLU;
uint64_t t34 = 796628LLU;
static int16_t x167 = -2532;
static volatile int32_t t37 = 911021094;
uint8_t x187 = UINT8_MAX;
int32_t x195 = INT32_MIN;
uint32_t x196 = 37907U;
uint64_t t41 = 83LLU;
int8_t x197 = INT8_MAX;
volatile int64_t t44 = -7163974068441702LL;
uint32_t x210 = 0U;
int8_t x213 = INT8_MIN;
uint32_t x219 = UINT32_MAX;
int32_t x222 = -611;
volatile uint32_t t48 = 22749154U;
volatile int64_t x227 = -12LL;
uint64_t t49 = 4377613LLU;
int64_t t50 = 0LL;
static volatile uint64_t x236 = 3608526346565316129LLU;
static volatile int32_t t53 = 27835300;
int32_t x245 = -1;
uint8_t x252 = 11U;
static uint64_t x258 = UINT64_MAX;
uint64_t x260 = 7244510280LLU;
volatile uint64_t x267 = UINT64_MAX;
int16_t x271 = INT16_MIN;
int64_t x279 = INT64_MAX;
uint64_t x290 = 41911818514921LLU;
uint64_t t62 = 745083853441678521LLU;
static uint32_t x304 = 1737838U;
static volatile uint32_t t65 = 45961207U;
int16_t x315 = 1;
static int8_t x324 = INT8_MIN;
int16_t x332 = INT16_MAX;
volatile int8_t x334 = -23;
int32_t x337 = 5811;
int8_t x340 = 0;
int8_t x344 = -1;
uint16_t x346 = 12U;
int8_t x351 = -44;
int8_t x353 = -19;
volatile uint64_t x354 = UINT64_MAX;
int8_t x364 = INT8_MIN;
static volatile int32_t t77 = -251025;
uint64_t x368 = 1182923311996LLU;
static int32_t x371 = INT32_MIN;
uint64_t x374 = UINT64_MAX;
int32_t x375 = INT32_MIN;
volatile uint64_t t80 = 329052214180074LLU;
volatile uint16_t x394 = 517U;
int64_t x395 = INT64_MAX;
static int16_t x410 = INT16_MAX;
int32_t x416 = 10924883;
static uint32_t x420 = UINT32_MAX;
static volatile int64_t x423 = 340970LL;
int64_t x434 = -337973501081LL;
uint16_t x439 = 14U;
int32_t t96 = -6;
uint64_t t97 = 16981998203080LLU;
int32_t x447 = INT32_MIN;
static uint8_t x449 = UINT8_MAX;
static int16_t x451 = 1;
uint8_t x468 = 6U;
volatile int32_t t103 = -1152;
int64_t x475 = 12884261801536414LL;
uint32_t x477 = 2185U;
volatile uint32_t t105 = 332U;
static volatile int16_t x481 = -1;
static int32_t x484 = INT32_MIN;
int16_t x489 = INT16_MIN;
uint64_t x492 = 633758LLU;
static uint32_t x498 = 1706808520U;
int32_t x500 = -1;
uint32_t t110 = 48392U;
volatile int16_t x501 = INT16_MIN;
int64_t t111 = -28LL;
static int8_t x505 = INT8_MIN;
volatile int32_t x515 = 21321;
int64_t t114 = 388692944868236LL;
int8_t x520 = 4;
volatile int16_t x522 = INT16_MIN;
static int32_t x525 = INT32_MIN;
int8_t x526 = -12;
int32_t x535 = -1;
uint8_t x536 = UINT8_MAX;
static volatile int32_t x539 = INT32_MIN;
volatile int8_t x549 = 0;
int64_t t123 = 5515945LL;
uint64_t x558 = 25168658381LLU;
int16_t x566 = 30;
int32_t t126 = -3775;
volatile int64_t t129 = -127LL;
static uint8_t x586 = 3U;
int64_t t131 = 109058764324404LL;
uint16_t x597 = 165U;
int64_t t134 = -8784187593168LL;
volatile int32_t t137 = -1776118;
int16_t x633 = INT16_MIN;
int16_t x643 = INT16_MAX;
int8_t x649 = INT8_MAX;
volatile int16_t x652 = 6439;
int8_t x653 = INT8_MAX;
int64_t x660 = INT64_MIN;
uint64_t x666 = 674234368340993453LLU;
int32_t x668 = INT32_MIN;
volatile int8_t x678 = 24;
uint8_t x684 = 0U;
int16_t x688 = -28;
int64_t t155 = 210860621LL;
int64_t x696 = INT64_MAX;
int64_t t156 = -17053439280271LL;
uint64_t t158 = 477LLU;
int32_t x707 = INT32_MIN;
static int8_t x714 = -1;
int16_t x716 = INT16_MIN;
static int8_t x725 = -18;
uint64_t x732 = 19514363LLU;
int32_t x733 = INT32_MIN;
uint64_t x735 = 2721693184194LLU;
int64_t t166 = -18547328563672LL;
uint64_t x746 = 97304227555LLU;
volatile uint64_t t167 = 104562456646LLU;
int16_t x749 = INT16_MIN;
uint16_t x755 = UINT16_MAX;
volatile int16_t x770 = -64;
volatile int32_t x773 = INT32_MAX;
int8_t x777 = INT8_MIN;
static volatile int64_t x778 = -13133187697LL;
volatile uint8_t x779 = UINT8_MAX;
static uint64_t x788 = 7453038400179LLU;
volatile int64_t x796 = -17783750658291009LL;
static uint64_t x798 = 29947LLU;
volatile uint8_t x801 = 18U;
int32_t x802 = INT32_MIN;
uint32_t t176 = 2703U;
int64_t x805 = INT64_MIN;
volatile int32_t x818 = INT32_MAX;
int32_t x820 = INT32_MIN;
int64_t t181 = 5211666235136LL;
int16_t x833 = INT16_MIN;
static int64_t x834 = -1LL;
int16_t x838 = INT16_MIN;
int64_t x842 = INT64_MIN;
uint16_t x853 = 9451U;
static int32_t t187 = 467;
uint64_t t188 = 67624271299LLU;
volatile uint16_t x861 = UINT16_MAX;
uint8_t x866 = 16U;
int32_t t190 = -9;
int8_t x869 = INT8_MIN;
static uint64_t x887 = UINT64_MAX;
uint8_t x892 = 0U;
static uint64_t x893 = UINT64_MAX;
volatile int64_t x894 = INT64_MIN;
static uint32_t x896 = UINT32_MAX;
int8_t x897 = -1;
int32_t x898 = 797573;
int32_t x900 = INT32_MAX;
int32_t t197 = 219215165;
int64_t x912 = INT64_MIN;
uint64_t x915 = UINT64_MAX;


void f0(void) {
    	static int64_t x1 = 23LL;
	int16_t x2 = INT16_MAX;
	volatile int64_t x3 = INT64_MAX;
	int8_t x4 = INT8_MAX;
	volatile int64_t t0 = 971205577471914026LL;

    t0 = ((x1+(x2%x3))-x4);

    if (t0 != 32663LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	uint64_t x6 = 177LLU;
	int32_t x8 = -1;
	volatile uint64_t t1 = 54176504308617LLU;

    t1 = ((x5+(x6%x7))-x8);

    if (t1 != 4294967346LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = 13;
	int16_t x10 = -1;
	int32_t x11 = INT32_MIN;
	int64_t x12 = INT64_MAX;
	int64_t t2 = -1LL;

    t2 = ((x9+(x10%x11))-x12);

    if (t2 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x17 = -579;
	static volatile int32_t x18 = -5421;
	uint64_t x19 = 34396085LLU;
	int8_t x20 = -2;
	static uint64_t t3 = 136489LLU;

    t3 = ((x17+(x18%x19))-x20);

    if (t3 != 25469958LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int32_t x21 = INT32_MAX;
	uint64_t x22 = 42901184912729243LLU;
	uint64_t x24 = 5LLU;
	uint64_t t4 = 124789LLU;

    t4 = ((x21+(x22%x23))-x24);

    if (t4 != 2147483644LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int16_t x29 = INT16_MIN;
	static volatile uint8_t x30 = 34U;
	uint16_t x31 = 443U;
	volatile int32_t x32 = 0;
	volatile int32_t t5 = -161335382;

    t5 = ((x29+(x30%x31))-x32);

    if (t5 != -32734) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint16_t x33 = 17523U;
	static int64_t x34 = INT64_MAX;
	int64_t x35 = INT64_MAX;
	int8_t x36 = -7;
	volatile int64_t t6 = -1754640LL;

    t6 = ((x33+(x34%x35))-x36);

    if (t6 != 17530LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x37 = INT16_MAX;
	int8_t x38 = -1;
	volatile uint32_t x40 = 10U;

    t7 = ((x37+(x38%x39))-x40);

    if (t7 != 32757U) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint16_t x41 = 357U;
	int32_t x42 = -1;
	static volatile int16_t x43 = INT16_MAX;
	static int16_t x44 = INT16_MIN;
	volatile int32_t t8 = -4243;

    t8 = ((x41+(x42%x43))-x44);

    if (t8 != 33124) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x45 = -5698;
	volatile int8_t x46 = -10;
	int8_t x47 = INT8_MAX;
	int32_t t9 = 734738085;

    t9 = ((x45+(x46%x47))-x48);

    if (t9 != -5580) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x49 = INT32_MIN;
	int16_t x50 = INT16_MIN;
	int64_t x51 = -79851839078LL;
	int64_t t10 = -36704701090188LL;

    t10 = ((x49+(x50%x51))-x52);

    if (t10 != -2147538848LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x57 = -818;
	volatile int16_t x58 = INT16_MAX;
	static int64_t x59 = 32910390528LL;
	int64_t t11 = -809114LL;

    t11 = ((x57+(x58%x59))-x60);

    if (t11 != -33586LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x62 = 937180656;
	static int8_t x63 = -1;
	int64_t t12 = 214407660705671LL;

    t12 = ((x61+(x62%x63))-x64);

    if (t12 != 128LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x65 = INT8_MIN;
	volatile int64_t x66 = INT64_MAX;
	int32_t x67 = -1;
	int32_t x68 = INT32_MIN;
	static int64_t t13 = -1703930907091LL;

    t13 = ((x65+(x66%x67))-x68);

    if (t13 != 2147483520LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x69 = INT16_MIN;
	static int64_t x70 = -1LL;
	int64_t x71 = INT64_MIN;
	int32_t x72 = 122491536;

    t14 = ((x69+(x70%x71))-x72);

    if (t14 != -122524305LL) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x73 = UINT64_MAX;
	int8_t x74 = -1;
	int32_t x75 = INT32_MIN;
	volatile int32_t x76 = -1;

    t15 = ((x73+(x74%x75))-x76);

    if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
    	static int16_t x77 = INT16_MAX;
	static int32_t x78 = INT32_MIN;
	uint32_t t16 = 101720574U;

    t16 = ((x77+(x78%x79))-x80);

    if (t16 != 1480191354U) { NG(); } else { ; }
	
}

void f17(void) {
    	static int8_t x81 = -3;
	static int32_t x82 = INT32_MAX;
	static int16_t x83 = 12597;
	int16_t x84 = -1;
	volatile int32_t t17 = 1;

    t17 = ((x81+(x82%x83))-x84);

    if (t17 != 10070) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x86 = INT16_MIN;
	uint64_t x87 = 154284588374805LLU;
	int8_t x88 = INT8_MIN;
	volatile uint64_t t18 = 420019738813178LLU;

    t18 = ((x85+(x86%x87))-x88);

    if (t18 != 15831705225113LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int32_t x89 = INT32_MIN;
	volatile int16_t x90 = 28;
	int32_t x91 = -2;
	uint64_t x92 = 513928LLU;
	uint64_t t19 = 19893697LLU;

    t19 = ((x89+(x90%x91))-x92);

    if (t19 != 18446744071561554040LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x93 = UINT16_MAX;
	int32_t x94 = INT32_MIN;
	volatile uint64_t x95 = 3584789134292932930LLU;
	int32_t x96 = INT32_MIN;
	uint64_t t20 = 144219052714LLU;

    t20 = ((x93+(x94%x95))-x96);

    if (t20 != 522798402244952501LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int32_t x97 = 82;
	volatile int8_t x98 = INT8_MIN;
	int64_t x99 = INT64_MIN;
	volatile int64_t t21 = 1813075626LL;

    t21 = ((x97+(x98%x99))-x100);

    if (t21 != 9223372036854775762LL) { NG(); } else { ; }
	
}

void f22(void) {
    	uint32_t x101 = UINT32_MAX;
	static int64_t x103 = -16055444004030LL;
	volatile int64_t x104 = INT64_MAX;
	int64_t t22 = -2949726780401101LL;

    t22 = ((x101+(x102%x103))-x104);

    if (t22 != -9223372032559808505LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x106 = INT32_MIN;
	volatile int8_t x107 = INT8_MAX;
	int8_t x108 = INT8_MAX;
	static int64_t t23 = 1638589478LL;

    t23 = ((x105+(x106%x107))-x108);

    if (t23 != -399LL) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x109 = 23776669591858LLU;
	int16_t x110 = 8489;
	int8_t x111 = INT8_MAX;
	int64_t x112 = INT64_MIN;
	volatile uint64_t t24 = 31955675LLU;

    t24 = ((x109+(x110%x111))-x112);

    if (t24 != 9223395813524367773LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int8_t x113 = INT8_MIN;
	static int8_t x115 = 3;
	int16_t x116 = -1;
	static int64_t t25 = 2LL;

    t25 = ((x113+(x114%x115))-x116);

    if (t25 != -126LL) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x118 = INT8_MIN;
	static uint32_t x119 = 209U;
	uint8_t x120 = 13U;

    t26 = ((x117+(x118%x119))-x120);

    if (t26 != 17U) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x125 = INT8_MIN;
	uint8_t x126 = UINT8_MAX;
	volatile uint32_t t27 = 1U;

    t27 = ((x125+(x126%x127))-x128);

    if (t27 != 127U) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x129 = 2LL;
	int16_t x130 = -5520;
	int64_t x131 = INT64_MAX;
	volatile uint32_t x132 = 241U;

    t28 = ((x129+(x130%x131))-x132);

    if (t28 != -5759LL) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile uint16_t x134 = 10U;
	volatile int8_t x135 = INT8_MIN;
	volatile int8_t x136 = -1;

    t29 = ((x133+(x134%x135))-x136);

    if (t29 != -32757) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x137 = INT16_MAX;
	int16_t x139 = 1037;
	uint8_t x140 = UINT8_MAX;
	volatile int32_t t30 = -1388;

    t30 = ((x137+(x138%x139))-x140);

    if (t30 != 33132) { NG(); } else { ; }
	
}

void f31(void) {
    	int16_t x142 = INT16_MIN;
	int8_t x143 = INT8_MIN;
	uint8_t x144 = 14U;

    t31 = ((x141+(x142%x143))-x144);

    if (t31 != 9223372036854775793LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static volatile int16_t x150 = INT16_MAX;
	int16_t x151 = 692;
	static int16_t x152 = -1228;
	static int32_t t32 = 1077014;

    t32 = ((x149+(x150%x151))-x152);

    if (t32 != 1472) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x154 = 0U;
	static uint8_t x156 = 0U;
	uint32_t t33 = 4257795U;

    t33 = ((x153+(x154%x155))-x156);

    if (t33 != 211U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x157 = 5U;
	volatile int16_t x159 = INT16_MAX;
	static uint64_t x160 = 673LLU;

    t34 = ((x157+(x158%x159))-x160);

    if (t34 != 1590LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x161 = 31286;
	int64_t x162 = INT64_MAX;
	uint8_t x163 = 3U;
	int16_t x164 = INT16_MIN;
	static volatile int64_t t35 = -1340765327583519LL;

    t35 = ((x161+(x162%x163))-x164);

    if (t35 != 64055LL) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile int16_t x165 = -31;
	uint8_t x166 = UINT8_MAX;
	volatile int64_t x168 = 137LL;
	volatile int64_t t36 = 28LL;

    t36 = ((x165+(x166%x167))-x168);

    if (t36 != 87LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int8_t x173 = INT8_MIN;
	int16_t x174 = INT16_MIN;
	int16_t x175 = -58;
	volatile uint16_t x176 = 1U;

    t37 = ((x173+(x174%x175))-x176);

    if (t37 != -185) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x181 = 49;
	uint32_t x182 = 127908U;
	int32_t x183 = -1;
	uint8_t x184 = 65U;
	static volatile uint32_t t38 = 177559038U;

    t38 = ((x181+(x182%x183))-x184);

    if (t38 != 127892U) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x185 = -6;
	uint64_t x186 = UINT64_MAX;
	int32_t x188 = INT32_MIN;
	static volatile uint64_t t39 = 39477485LLU;

    t39 = ((x185+(x186%x187))-x188);

    if (t39 != 2147483642LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x189 = 3653;
	uint16_t x190 = 1U;
	int64_t x191 = 2024919954385663211LL;
	uint8_t x192 = 35U;
	int64_t t40 = 45488176974055LL;

    t40 = ((x189+(x190%x191))-x192);

    if (t40 != 3619LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x193 = 104U;
	uint64_t x194 = 106991020764312LLU;

    t41 = ((x193+(x194%x195))-x196);

    if (t41 != 106991020726509LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x198 = 7642LLU;
	int32_t x199 = -10;
	int16_t x200 = INT16_MIN;
	uint64_t t42 = 178855LLU;

    t42 = ((x197+(x198%x199))-x200);

    if (t42 != 40537LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int16_t x201 = -16336;
	static int8_t x202 = -1;
	int16_t x203 = INT16_MAX;
	static int64_t x204 = INT64_MIN;
	volatile int64_t t43 = 75053321LL;

    t43 = ((x201+(x202%x203))-x204);

    if (t43 != 9223372036854759471LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int64_t x205 = -26182783499016LL;
	volatile int32_t x206 = -1;
	static int8_t x207 = INT8_MIN;
	int16_t x208 = -1;

    t44 = ((x205+(x206%x207))-x208);

    if (t44 != -26182783499016LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x209 = 495U;
	uint8_t x211 = 30U;
	static uint16_t x212 = UINT16_MAX;
	uint32_t t45 = 740826U;

    t45 = ((x209+(x210%x211))-x212);

    if (t45 != 4294902256U) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int64_t x214 = 243819448428352898LL;
	int64_t x215 = -4055738586576020LL;
	uint16_t x216 = 27U;
	static volatile int64_t t46 = -51626055827276902LL;

    t46 = ((x213+(x214%x215))-x216);

    if (t46 != 475133233791543LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x217 = -1;
	int8_t x218 = -1;
	uint8_t x220 = 9U;
	uint32_t t47 = 1315U;

    t47 = ((x217+(x218%x219))-x220);

    if (t47 != 4294967286U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint32_t x221 = UINT32_MAX;
	uint32_t x223 = 15313223U;
	volatile int32_t x224 = INT32_MAX;

    t48 = ((x221+(x222%x223))-x224);

    if (t48 != 2154747893U) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x225 = 108989777990804LL;
	volatile uint64_t x226 = 76095690853779LLU;
	int64_t x228 = 127607LL;

    t49 = ((x225+(x226%x227))-x228);

    if (t49 != 185085468716976LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x229 = -42554LL;
	volatile uint32_t x230 = UINT32_MAX;
	int16_t x231 = INT16_MIN;
	int64_t x232 = INT64_MIN;

    t50 = ((x229+(x230%x231))-x232);

    if (t50 != 9223372036854766021LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x233 = 67LL;
	uint8_t x234 = 11U;
	static int32_t x235 = INT32_MIN;
	static uint64_t t51 = 2024LLU;

    t51 = ((x233+(x234%x235))-x236);

    if (t51 != 14838217727144235565LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x237 = 2861;
	static uint32_t x238 = UINT32_MAX;
	static int64_t x239 = INT64_MIN;
	volatile int64_t x240 = 37488398847157LL;
	static volatile int64_t t52 = -4250205314898595860LL;

    t52 = ((x237+(x238%x239))-x240);

    if (t52 != -37484103877001LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x241 = 1U;
	static uint8_t x242 = UINT8_MAX;
	int32_t x243 = INT32_MIN;
	volatile int32_t x244 = 290963726;

    t53 = ((x241+(x242%x243))-x244);

    if (t53 != -290963470) { NG(); } else { ; }
	
}

void f54(void) {
    	int16_t x246 = -102;
	volatile int32_t x247 = -201053843;
	volatile int64_t x248 = -470222388419LL;
	int64_t t54 = 1012566516LL;

    t54 = ((x245+(x246%x247))-x248);

    if (t54 != 470222388316LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static int64_t x249 = INT64_MIN;
	int64_t x250 = 249184458424407LL;
	uint64_t x251 = 1031152LLU;
	volatile uint64_t t55 = 1790732478120067LLU;

    t55 = ((x249+(x250%x251))-x252);

    if (t55 != 9223372036855712748LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x253 = INT8_MAX;
	static volatile int64_t x254 = -1443610LL;
	static int8_t x255 = 5;
	int8_t x256 = INT8_MIN;
	static int64_t t56 = 135307197944LL;

    t56 = ((x253+(x254%x255))-x256);

    if (t56 != 255LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x257 = UINT32_MAX;
	int16_t x259 = 14;
	static volatile uint64_t t57 = 2LLU;

    t57 = ((x257+(x258%x259))-x260);

    if (t57 != 18446744070760008632LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int16_t x265 = -137;
	volatile int64_t x266 = -1386653385LL;
	uint32_t x268 = UINT32_MAX;
	uint64_t t58 = 2792LLU;

    t58 = ((x265+(x266%x267))-x268);

    if (t58 != 18446744068027930799LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int64_t x269 = INT64_MIN;
	uint8_t x270 = 1U;
	int64_t x272 = -6265898200145466LL;
	static volatile int64_t t59 = 60925392218315695LL;

    t59 = ((x269+(x270%x271))-x272);

    if (t59 != -9217106138654630341LL) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint32_t x277 = 0U;
	volatile int64_t x278 = -1LL;
	volatile int8_t x280 = INT8_MIN;
	volatile int64_t t60 = 133810959244754026LL;

    t60 = ((x277+(x278%x279))-x280);

    if (t60 != 127LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x285 = 3968339;
	volatile int8_t x286 = INT8_MIN;
	int32_t x287 = -1;
	int8_t x288 = INT8_MAX;
	static volatile int32_t t61 = 142777620;

    t61 = ((x285+(x286%x287))-x288);

    if (t61 != 3968212) { NG(); } else { ; }
	
}

void f62(void) {
    	static int64_t x289 = -134615075826785LL;
	static int16_t x291 = 579;
	uint16_t x292 = UINT16_MAX;

    t62 = ((x289+(x290%x291))-x292);

    if (t62 != 18446609458633659771LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x297 = INT32_MIN;
	int16_t x298 = 793;
	static uint8_t x299 = 12U;
	int64_t x300 = -1LL;
	static volatile int64_t t63 = 64040083092743LL;

    t63 = ((x297+(x298%x299))-x300);

    if (t63 != -2147483646LL) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x301 = 6;
	volatile int32_t x302 = -1;
	int8_t x303 = -1;
	volatile uint32_t t64 = 1850340676U;

    t64 = ((x301+(x302%x303))-x304);

    if (t64 != 4293229464U) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint16_t x309 = 13917U;
	int32_t x310 = INT32_MIN;
	static uint32_t x311 = UINT32_MAX;
	int8_t x312 = -1;

    t65 = ((x309+(x310%x311))-x312);

    if (t65 != 2147497566U) { NG(); } else { ; }
	
}

void f66(void) {
    	int16_t x313 = -1;
	int64_t x314 = INT64_MAX;
	volatile int64_t x316 = -1400290425130LL;
	volatile int64_t t66 = 136670859668493LL;

    t66 = ((x313+(x314%x315))-x316);

    if (t66 != 1400290425129LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint16_t x321 = UINT16_MAX;
	int8_t x322 = INT8_MIN;
	int32_t x323 = INT32_MIN;
	int32_t t67 = 219;

    t67 = ((x321+(x322%x323))-x324);

    if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
    	uint64_t x325 = 382056641105642LLU;
	int32_t x326 = INT32_MIN;
	volatile int8_t x327 = -1;
	static uint32_t x328 = 1936U;
	volatile uint64_t t68 = 78338554LLU;

    t68 = ((x325+(x326%x327))-x328);

    if (t68 != 382056641103706LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x329 = INT8_MIN;
	static uint16_t x330 = UINT16_MAX;
	uint64_t x331 = 3041796753477448LLU;
	volatile uint64_t t69 = 1056560575333117LLU;

    t69 = ((x329+(x330%x331))-x332);

    if (t69 != 32640LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x333 = 945;
	int64_t x335 = INT64_MIN;
	volatile uint64_t x336 = 288425126714649906LLU;
	volatile uint64_t t70 = 7371318895008395LLU;

    t70 = ((x333+(x334%x335))-x336);

    if (t70 != 18158318946994902632LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x338 = INT32_MIN;
	int16_t x339 = 7;
	volatile int32_t t71 = -335;

    t71 = ((x337+(x338%x339))-x340);

    if (t71 != 5809) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x341 = 34697;
	int32_t x342 = INT32_MIN;
	uint16_t x343 = 28757U;
	int32_t t72 = 875;

    t72 = ((x341+(x342%x343))-x344);

    if (t72 != 8782) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x345 = 4823016530LLU;
	static int64_t x347 = INT64_MIN;
	static int64_t x348 = INT64_MIN;
	volatile uint64_t t73 = 1659LLU;

    t73 = ((x345+(x346%x347))-x348);

    if (t73 != 9223372041677792350LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x349 = 48226;
	int16_t x350 = INT16_MAX;
	volatile int8_t x352 = INT8_MAX;
	volatile int32_t t74 = 1053;

    t74 = ((x349+(x350%x351))-x352);

    if (t74 != 48130) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x355 = INT32_MAX;
	int64_t x356 = 1635389761266LL;
	uint64_t t75 = 28559765859LLU;

    t75 = ((x353+(x354%x355))-x356);

    if (t75 != 18446742438319790334LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int64_t x357 = -1LL;
	int32_t x358 = 112401603;
	int32_t x359 = 896747;
	int32_t x360 = INT32_MAX;
	volatile int64_t t76 = -417662928247356LL;

    t76 = ((x357+(x358%x359))-x360);

    if (t76 != -2147175420LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x361 = 58;
	int32_t x362 = INT32_MIN;
	uint8_t x363 = 22U;

    t77 = ((x361+(x362%x363))-x364);

    if (t77 != 184) { NG(); } else { ; }
	
}

void f78(void) {
    	uint32_t x365 = UINT32_MAX;
	static int32_t x366 = -1;
	volatile int64_t x367 = -3LL;
	volatile uint64_t t78 = 26LLU;

    t78 = ((x365+(x366%x367))-x368);

    if (t78 != 18446742895081206914LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile int16_t x369 = INT16_MIN;
	int16_t x370 = INT16_MIN;
	static int32_t x372 = -119880;
	int32_t t79 = -13915;

    t79 = ((x369+(x370%x371))-x372);

    if (t79 != 54344) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int8_t x373 = INT8_MAX;
	uint64_t x376 = UINT64_MAX;

    t80 = ((x373+(x374%x375))-x376);

    if (t80 != 2147483775LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint64_t x377 = UINT64_MAX;
	int32_t x378 = INT32_MIN;
	volatile uint64_t x379 = UINT64_MAX;
	int64_t x380 = INT64_MIN;
	uint64_t t81 = 47510712451LLU;

    t81 = ((x377+(x378%x379))-x380);

    if (t81 != 9223372034707292159LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x381 = -43542;
	static int64_t x382 = 8LL;
	int64_t x383 = INT64_MIN;
	uint32_t x384 = 27U;
	volatile int64_t t82 = 483364624681LL;

    t82 = ((x381+(x382%x383))-x384);

    if (t82 != -43561LL) { NG(); } else { ; }
	
}

void f83(void) {
    	uint16_t x385 = UINT16_MAX;
	static int16_t x386 = INT16_MIN;
	int8_t x387 = 1;
	static uint32_t x388 = 5U;
	volatile uint32_t t83 = 19U;

    t83 = ((x385+(x386%x387))-x388);

    if (t83 != 65530U) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x389 = INT8_MIN;
	static int32_t x390 = -1;
	uint64_t x391 = 4104357326593770LLU;
	volatile int8_t x392 = -1;
	uint64_t t84 = 6289626348617742LLU;

    t84 = ((x389+(x390%x391))-x392);

    if (t84 != 1762247997149108LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x393 = 973U;
	volatile int16_t x396 = 103;
	int64_t t85 = -284081503214399325LL;

    t85 = ((x393+(x394%x395))-x396);

    if (t85 != 1387LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x397 = -18160009LL;
	volatile int8_t x398 = INT8_MIN;
	static volatile int8_t x399 = INT8_MIN;
	int32_t x400 = INT32_MIN;
	volatile int64_t t86 = -128875760LL;

    t86 = ((x397+(x398%x399))-x400);

    if (t86 != 2129323639LL) { NG(); } else { ; }
	
}

void f87(void) {
    	static int32_t x401 = -131849216;
	volatile uint8_t x402 = 3U;
	volatile int16_t x403 = INT16_MAX;
	static volatile uint32_t x404 = 4004U;
	uint32_t t87 = 4009U;

    t87 = ((x401+(x402%x403))-x404);

    if (t87 != 4163114079U) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x405 = -1LL;
	static int64_t x406 = -1LL;
	int64_t x407 = -24664LL;
	int64_t x408 = -97LL;
	static int64_t t88 = 93243LL;

    t88 = ((x405+(x406%x407))-x408);

    if (t88 != 95LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x409 = 3773271;
	int16_t x411 = INT16_MIN;
	int32_t x412 = -1;
	static volatile int32_t t89 = 705083954;

    t89 = ((x409+(x410%x411))-x412);

    if (t89 != 3806039) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x413 = INT8_MIN;
	uint16_t x414 = UINT16_MAX;
	volatile int64_t x415 = INT64_MAX;
	int64_t t90 = -484151814LL;

    t90 = ((x413+(x414%x415))-x416);

    if (t90 != -10859476LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint8_t x417 = 4U;
	int32_t x418 = INT32_MIN;
	int64_t x419 = -227358371822665LL;
	static int64_t t91 = 5754213872LL;

    t91 = ((x417+(x418%x419))-x420);

    if (t91 != -6442450939LL) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x421 = INT64_MAX;
	int32_t x422 = INT32_MIN;
	int16_t x424 = INT16_MIN;
	volatile int64_t t92 = 233445LL;

    t92 = ((x421+(x422%x423))-x424);

    if (t92 != 9223372036854753987LL) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint64_t x425 = 18463536256500LLU;
	uint16_t x426 = 2269U;
	int16_t x427 = -867;
	uint8_t x428 = 54U;
	static uint64_t t93 = 4525284032LLU;

    t93 = ((x425+(x426%x427))-x428);

    if (t93 != 18463536256981LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x429 = INT16_MIN;
	int32_t x430 = INT32_MIN;
	int64_t x431 = INT64_MIN;
	static uint16_t x432 = 85U;
	int64_t t94 = -1778LL;

    t94 = ((x429+(x430%x431))-x432);

    if (t94 != -2147516501LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x433 = INT32_MAX;
	int8_t x435 = INT8_MIN;
	int32_t x436 = INT32_MIN;
	volatile int64_t t95 = 215LL;

    t95 = ((x433+(x434%x435))-x436);

    if (t95 != 4294967270LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int16_t x437 = -1;
	int32_t x438 = INT32_MIN;
	int32_t x440 = -1;

    t96 = ((x437+(x438%x439))-x440);

    if (t96 != -2) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x441 = -8;
	int16_t x442 = -2494;
	uint64_t x443 = UINT64_MAX;
	int32_t x444 = -127521;

    t97 = ((x441+(x442%x443))-x444);

    if (t97 != 125019LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x445 = UINT8_MAX;
	int16_t x446 = 9610;
	static int8_t x448 = INT8_MAX;
	static int32_t t98 = -750564;

    t98 = ((x445+(x446%x447))-x448);

    if (t98 != 9738) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x450 = 1;
	int8_t x452 = INT8_MIN;
	static volatile int32_t t99 = -260562963;

    t99 = ((x449+(x450%x451))-x452);

    if (t99 != 383) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x453 = 1321349;
	uint16_t x454 = 3691U;
	uint32_t x455 = UINT32_MAX;
	uint32_t x456 = UINT32_MAX;
	static volatile uint32_t t100 = 0U;

    t100 = ((x453+(x454%x455))-x456);

    if (t100 != 1325041U) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x457 = -1;
	int64_t x458 = -1LL;
	int16_t x459 = -1;
	static int8_t x460 = -7;
	int64_t t101 = 15LL;

    t101 = ((x457+(x458%x459))-x460);

    if (t101 != 6LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x461 = 450988U;
	static volatile int16_t x462 = INT16_MAX;
	int32_t x463 = 15510;
	uint32_t x464 = 1U;
	uint32_t t102 = 2410U;

    t102 = ((x461+(x462%x463))-x464);

    if (t102 != 452734U) { NG(); } else { ; }
	
}

void f103(void) {
    	static int32_t x465 = INT32_MIN;
	static volatile int8_t x466 = INT8_MAX;
	uint8_t x467 = UINT8_MAX;

    t103 = ((x465+(x466%x467))-x468);

    if (t103 != -2147483527) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x473 = -1LL;
	static int32_t x474 = -531370005;
	int8_t x476 = INT8_MIN;
	int64_t t104 = 520957846LL;

    t104 = ((x473+(x474%x475))-x476);

    if (t104 != -531369878LL) { NG(); } else { ; }
	
}

void f105(void) {
    	uint32_t x478 = 78U;
	int16_t x479 = -1;
	static int16_t x480 = -1;

    t105 = ((x477+(x478%x479))-x480);

    if (t105 != 2264U) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile int32_t x482 = INT32_MIN;
	uint64_t x483 = UINT64_MAX;
	uint64_t t106 = UINT64_MAX;

    t106 = ((x481+(x482%x483))-x484);

    if (t106 != UINT64_MAX) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint16_t x485 = UINT16_MAX;
	static int8_t x486 = 0;
	volatile int32_t x487 = INT32_MIN;
	int16_t x488 = -1;
	int32_t t107 = -1;

    t107 = ((x485+(x486%x487))-x488);

    if (t107 != 65536) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x490 = 161647555812812LLU;
	static int16_t x491 = INT16_MIN;
	volatile uint64_t t108 = 1090465LLU;

    t108 = ((x489+(x490%x491))-x492);

    if (t108 != 161647555146286LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x493 = -1;
	volatile int64_t x494 = -1LL;
	int64_t x495 = INT64_MIN;
	volatile int8_t x496 = -1;
	int64_t t109 = 30541983291970LL;

    t109 = ((x493+(x494%x495))-x496);

    if (t109 != -1LL) { NG(); } else { ; }
	
}

void f110(void) {
    	static uint32_t x497 = 64082U;
	int16_t x499 = INT16_MAX;

    t110 = ((x497+(x498%x499))-x500);

    if (t110 != 72340U) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x502 = INT8_MIN;
	int64_t x503 = 74939782504812LL;
	static uint8_t x504 = 16U;

    t111 = ((x501+(x502%x503))-x504);

    if (t111 != -32912LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x506 = INT8_MAX;
	uint32_t x507 = 1770721790U;
	int64_t x508 = 4003215135085LL;
	int64_t t112 = -21441117LL;

    t112 = ((x505+(x506%x507))-x508);

    if (t112 != -3998920167790LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x509 = -1LL;
	uint64_t x510 = 89LLU;
	uint64_t x511 = 3469479LLU;
	static uint32_t x512 = UINT32_MAX;
	volatile uint64_t t113 = 6700008820434823LLU;

    t113 = ((x509+(x510%x511))-x512);

    if (t113 != 18446744069414584409LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x513 = INT32_MIN;
	int64_t x514 = -873343497494LL;
	static int8_t x516 = -1;

    t114 = ((x513+(x514%x515))-x516);

    if (t114 != -2147492244LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x517 = 0;
	volatile uint32_t x518 = UINT32_MAX;
	static int8_t x519 = 22;
	volatile uint32_t t115 = UINT32_MAX;

    t115 = ((x517+(x518%x519))-x520);

    if (t115 != UINT32_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x521 = 16515576638LLU;
	static uint16_t x523 = 61U;
	int64_t x524 = -1LL;
	static volatile uint64_t t116 = 71LLU;

    t116 = ((x521+(x522%x523))-x524);

    if (t116 != 16515576628LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	static int32_t x527 = -1;
	uint64_t x528 = 27412543LLU;
	static volatile uint64_t t117 = 8178674677954LLU;

    t117 = ((x525+(x526%x527))-x528);

    if (t117 != 18446744071534655425LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint32_t x529 = 447490000U;
	int64_t x530 = -8174702643148682LL;
	int16_t x531 = INT16_MIN;
	static int8_t x532 = INT8_MIN;
	volatile int64_t t118 = -868LL;

    t118 = ((x529+(x530%x531))-x532);

    if (t118 != 447459526LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x533 = INT64_MIN;
	uint32_t x534 = 2091127330U;
	int64_t t119 = -5079LL;

    t119 = ((x533+(x534%x535))-x536);

    if (t119 != -9223372034763648733LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x537 = -715;
	uint8_t x538 = 6U;
	int32_t x540 = INT32_MIN;
	static volatile int32_t t120 = 2985005;

    t120 = ((x537+(x538%x539))-x540);

    if (t120 != 2147482939) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x541 = -206424854LL;
	int64_t x542 = INT64_MIN;
	volatile int64_t x543 = INT64_MAX;
	int8_t x544 = 1;
	int64_t t121 = 555211249971696510LL;

    t121 = ((x541+(x542%x543))-x544);

    if (t121 != -206424856LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x545 = INT16_MIN;
	int8_t x546 = INT8_MIN;
	int32_t x547 = INT32_MIN;
	volatile uint64_t x548 = 511LLU;
	uint64_t t122 = 33284839886LLU;

    t122 = ((x545+(x546%x547))-x548);

    if (t122 != 18446744073709518209LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x550 = 29U;
	int8_t x551 = -1;
	int64_t x552 = -690350543360LL;

    t123 = ((x549+(x550%x551))-x552);

    if (t123 != 690350543360LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x553 = INT32_MIN;
	volatile int32_t x554 = INT32_MAX;
	uint64_t x555 = UINT64_MAX;
	int64_t x556 = INT64_MIN;
	volatile uint64_t t124 = 15LLU;

    t124 = ((x553+(x554%x555))-x556);

    if (t124 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x557 = UINT8_MAX;
	static uint32_t x559 = UINT32_MAX;
	uint16_t x560 = 125U;
	static uint64_t t125 = 132LLU;

    t125 = ((x557+(x558%x559))-x560);

    if (t125 != 3693822036LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x565 = INT16_MIN;
	int8_t x567 = INT8_MAX;
	int16_t x568 = 24;

    t126 = ((x565+(x566%x567))-x568);

    if (t126 != -32762) { NG(); } else { ; }
	
}

void f127(void) {
    	static int64_t x569 = 3225082755LL;
	static volatile int32_t x570 = 464;
	static int32_t x571 = 968373;
	volatile int64_t x572 = INT64_MAX;
	volatile int64_t t127 = -21870576LL;

    t127 = ((x569+(x570%x571))-x572);

    if (t127 != -9223372033629692588LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x573 = -1;
	int64_t x574 = INT64_MIN;
	volatile uint8_t x575 = UINT8_MAX;
	int64_t x576 = -1LL;
	int64_t t128 = 2130413638LL;

    t128 = ((x573+(x574%x575))-x576);

    if (t128 != -128LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x577 = INT32_MIN;
	int8_t x578 = INT8_MIN;
	int64_t x579 = INT64_MAX;
	uint16_t x580 = 124U;

    t129 = ((x577+(x578%x579))-x580);

    if (t129 != -2147483900LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x581 = 398U;
	int32_t x582 = 154809936;
	int8_t x583 = INT8_MIN;
	int16_t x584 = INT16_MAX;
	int32_t t130 = -40759;

    t130 = ((x581+(x582%x583))-x584);

    if (t130 != -32289) { NG(); } else { ; }
	
}

void f131(void) {
    	int32_t x585 = 0;
	int16_t x587 = INT16_MIN;
	volatile int64_t x588 = 139116119893967929LL;

    t131 = ((x585+(x586%x587))-x588);

    if (t131 != -139116119893967926LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x589 = INT32_MIN;
	uint16_t x590 = UINT16_MAX;
	uint32_t x591 = UINT32_MAX;
	volatile int64_t x592 = -1LL;
	static int64_t t132 = -32251842LL;

    t132 = ((x589+(x590%x591))-x592);

    if (t132 != 2147549184LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x593 = -1;
	int64_t x594 = INT64_MIN;
	volatile uint32_t x595 = 3306062U;
	int16_t x596 = -1;
	static volatile int64_t t133 = -144908917414015LL;

    t133 = ((x593+(x594%x595))-x596);

    if (t133 != -2302884LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x598 = 3LL;
	uint32_t x599 = 920984U;
	int16_t x600 = INT16_MAX;

    t134 = ((x597+(x598%x599))-x600);

    if (t134 != -32599LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x601 = -1;
	uint8_t x602 = 55U;
	static int64_t x603 = 27947370582322LL;
	static uint64_t x604 = 16608793653561616LLU;
	uint64_t t135 = 12199361188785173LLU;

    t135 = ((x601+(x602%x603))-x604);

    if (t135 != 18430135280055990054LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x605 = 3961U;
	static int16_t x606 = 6314;
	int8_t x607 = INT8_MAX;
	int32_t x608 = -1;
	static int32_t t136 = -457766743;

    t136 = ((x605+(x606%x607))-x608);

    if (t136 != 4053) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x609 = INT8_MIN;
	static int8_t x610 = INT8_MIN;
	int8_t x611 = -1;
	volatile uint8_t x612 = 110U;

    t137 = ((x609+(x610%x611))-x612);

    if (t137 != -238) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x613 = INT16_MAX;
	volatile int16_t x614 = 15;
	int32_t x615 = INT32_MAX;
	uint16_t x616 = UINT16_MAX;
	int32_t t138 = 957556;

    t138 = ((x613+(x614%x615))-x616);

    if (t138 != -32753) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x617 = UINT32_MAX;
	static int8_t x618 = -6;
	static int16_t x619 = 1;
	uint32_t x620 = 110580586U;
	uint32_t t139 = 166006U;

    t139 = ((x617+(x618%x619))-x620);

    if (t139 != 4184386709U) { NG(); } else { ; }
	
}

void f140(void) {
    	uint32_t x621 = 185291556U;
	int16_t x622 = -1;
	static int16_t x623 = INT16_MIN;
	static volatile int16_t x624 = INT16_MAX;
	static volatile uint32_t t140 = 67887333U;

    t140 = ((x621+(x622%x623))-x624);

    if (t140 != 185258788U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x625 = UINT8_MAX;
	static uint32_t x626 = 104U;
	int16_t x627 = INT16_MIN;
	int16_t x628 = -1;
	uint32_t t141 = 729110957U;

    t141 = ((x625+(x626%x627))-x628);

    if (t141 != 360U) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x629 = UINT16_MAX;
	uint8_t x630 = UINT8_MAX;
	uint8_t x631 = UINT8_MAX;
	int8_t x632 = 14;
	int32_t t142 = 38469;

    t142 = ((x629+(x630%x631))-x632);

    if (t142 != 65521) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint8_t x634 = 1U;
	int64_t x635 = INT64_MIN;
	int64_t x636 = INT64_MIN;
	int64_t t143 = -135230907137LL;

    t143 = ((x633+(x634%x635))-x636);

    if (t143 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f144(void) {
    	volatile int8_t x637 = INT8_MIN;
	int8_t x638 = -1;
	volatile uint32_t x639 = 133890544U;
	volatile int32_t x640 = -1;
	volatile uint32_t t144 = 1U;

    t144 = ((x637+(x638%x639))-x640);

    if (t144 != 10469760U) { NG(); } else { ; }
	
}

void f145(void) {
    	volatile uint64_t x641 = 512507LLU;
	volatile int8_t x642 = -1;
	volatile int32_t x644 = INT32_MIN;
	uint64_t t145 = 165011449LLU;

    t145 = ((x641+(x642%x643))-x644);

    if (t145 != 2147996154LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x650 = -365389673822371LL;
	static int8_t x651 = 1;
	volatile int64_t t146 = -130226734368LL;

    t146 = ((x649+(x650%x651))-x652);

    if (t146 != -6312LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x654 = -1;
	int8_t x655 = -1;
	int8_t x656 = -1;
	int32_t t147 = -13635709;

    t147 = ((x653+(x654%x655))-x656);

    if (t147 != 128) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x657 = -5662;
	int64_t x658 = -4803LL;
	int16_t x659 = 1;
	int64_t t148 = -110938LL;

    t148 = ((x657+(x658%x659))-x660);

    if (t148 != 9223372036854770146LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int32_t x665 = INT32_MIN;
	static volatile int32_t x667 = -1;
	static uint64_t t149 = 2835581419408LLU;

    t149 = ((x665+(x666%x667))-x668);

    if (t149 != 674234368340993453LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x669 = INT16_MIN;
	static uint32_t x670 = UINT32_MAX;
	volatile uint64_t x671 = UINT64_MAX;
	static int64_t x672 = INT64_MIN;
	uint64_t t150 = 441LLU;

    t150 = ((x669+(x670%x671))-x672);

    if (t150 != 9223372041149710335LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static volatile int64_t x673 = -1LL;
	uint16_t x674 = 17U;
	volatile int16_t x675 = 59;
	int16_t x676 = -1;
	volatile int64_t t151 = -2382264580606LL;

    t151 = ((x673+(x674%x675))-x676);

    if (t151 != 17LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint64_t x677 = 179965013059LLU;
	uint8_t x679 = 11U;
	uint8_t x680 = 1U;
	volatile uint64_t t152 = 60770738810755783LLU;

    t152 = ((x677+(x678%x679))-x680);

    if (t152 != 179965013060LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x681 = UINT16_MAX;
	uint64_t x682 = UINT64_MAX;
	int64_t x683 = INT64_MIN;
	uint64_t t153 = 950863428320042394LLU;

    t153 = ((x681+(x682%x683))-x684);

    if (t153 != 9223372036854841342LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x685 = 2973;
	uint32_t x686 = 378U;
	int64_t x687 = 61868239561720888LL;
	int64_t t154 = -1569385420800679LL;

    t154 = ((x685+(x686%x687))-x688);

    if (t154 != 3379LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x689 = -1;
	int64_t x690 = INT64_MIN;
	volatile int16_t x691 = INT16_MIN;
	static int16_t x692 = INT16_MIN;

    t155 = ((x689+(x690%x691))-x692);

    if (t155 != 32767LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x693 = -1;
	uint32_t x694 = 117230U;
	volatile int64_t x695 = INT64_MAX;

    t156 = ((x693+(x694%x695))-x696);

    if (t156 != -9223372036854658578LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x697 = INT16_MIN;
	static int64_t x698 = INT64_MIN;
	int16_t x699 = INT16_MAX;
	volatile int16_t x700 = 10;
	volatile int64_t t157 = -207758505095427LL;

    t157 = ((x697+(x698%x699))-x700);

    if (t157 != -32786LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x701 = -1;
	int32_t x702 = 1;
	static int8_t x703 = INT8_MAX;
	static uint64_t x704 = UINT64_MAX;

    t158 = ((x701+(x702%x703))-x704);

    if (t158 != 1LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x705 = INT8_MIN;
	volatile uint8_t x706 = 14U;
	int16_t x708 = -3484;
	volatile int32_t t159 = -16232;

    t159 = ((x705+(x706%x707))-x708);

    if (t159 != 3370) { NG(); } else { ; }
	
}

void f160(void) {
    	static volatile int16_t x709 = INT16_MAX;
	static volatile uint8_t x710 = 5U;
	int32_t x711 = 59;
	uint16_t x712 = 474U;
	int32_t t160 = -106529089;

    t160 = ((x709+(x710%x711))-x712);

    if (t160 != 32298) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile uint16_t x713 = UINT16_MAX;
	int32_t x715 = INT32_MAX;
	volatile int32_t t161 = -66575947;

    t161 = ((x713+(x714%x715))-x716);

    if (t161 != 98302) { NG(); } else { ; }
	
}

void f162(void) {
    	int32_t x717 = INT32_MIN;
	int8_t x718 = -1;
	uint32_t x719 = 2574875U;
	static int8_t x720 = INT8_MIN;
	uint32_t t162 = 840064449U;

    t162 = ((x717+(x718%x719))-x720);

    if (t162 != 2147559571U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x726 = UINT16_MAX;
	uint8_t x727 = UINT8_MAX;
	int64_t x728 = 104601480LL;
	int64_t t163 = 16079283517LL;

    t163 = ((x725+(x726%x727))-x728);

    if (t163 != -104601498LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x729 = INT16_MIN;
	uint8_t x730 = 1U;
	volatile int64_t x731 = INT64_MIN;
	volatile uint64_t t164 = 1LLU;

    t164 = ((x729+(x730%x731))-x732);

    if (t164 != 18446744073690004486LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int16_t x734 = 13;
	uint32_t x736 = 6237U;
	volatile uint64_t t165 = 43LLU;

    t165 = ((x733+(x734%x735))-x736);

    if (t165 != 18446744071562061744LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x737 = -504966090;
	volatile uint32_t x738 = UINT32_MAX;
	volatile int32_t x739 = INT32_MIN;
	static int64_t x740 = -1LL;

    t166 = ((x737+(x738%x739))-x740);

    if (t166 != 1642517558LL) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x745 = -1;
	volatile int32_t x747 = INT32_MIN;
	static int16_t x748 = 4;

    t167 = ((x745+(x746%x747))-x748);

    if (t167 != 97304227550LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static uint32_t x750 = 126459166U;
	volatile int16_t x751 = -23;
	int8_t x752 = INT8_MAX;
	uint32_t t168 = 620U;

    t168 = ((x749+(x750%x751))-x752);

    if (t168 != 126426271U) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile int64_t x753 = 577739LL;
	volatile uint16_t x754 = UINT16_MAX;
	uint8_t x756 = UINT8_MAX;
	volatile int64_t t169 = 9400563984083878LL;

    t169 = ((x753+(x754%x755))-x756);

    if (t169 != 577484LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static int16_t x769 = INT16_MIN;
	volatile int8_t x771 = INT8_MIN;
	int64_t x772 = -1LL;
	static int64_t t170 = -3796948335658409252LL;

    t170 = ((x769+(x770%x771))-x772);

    if (t170 != -32831LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x774 = INT16_MIN;
	static int16_t x775 = INT16_MIN;
	volatile int64_t x776 = -1050227886187457LL;
	volatile int64_t t171 = -13953612696LL;

    t171 = ((x773+(x774%x775))-x776);

    if (t171 != 1050230033671104LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x780 = 47U;
	volatile int64_t t172 = 5805244274LL;

    t172 = ((x777+(x778%x779))-x780);

    if (t172 != -392LL) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x785 = 1U;
	uint8_t x786 = UINT8_MAX;
	int32_t x787 = -1;
	volatile uint64_t t173 = 3960914170432LLU;

    t173 = ((x785+(x786%x787))-x788);

    if (t173 != 18446736620671151438LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x793 = INT16_MIN;
	uint64_t x794 = 213078409629LLU;
	int8_t x795 = -1;
	uint64_t t174 = 743585819125LLU;

    t174 = ((x793+(x794%x795))-x796);

    if (t174 != 17783963736667870LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x797 = 85U;
	static volatile int16_t x799 = -1;
	int16_t x800 = 1838;
	uint64_t t175 = 1955205425LLU;

    t175 = ((x797+(x798%x799))-x800);

    if (t175 != 28194LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x803 = 91683453U;
	int16_t x804 = -1;

    t176 = ((x801+(x802%x803))-x804);

    if (t176 != 38764248U) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x806 = -1;
	uint32_t x807 = 33958469U;
	int64_t x808 = INT64_MIN;
	int64_t t177 = -2209224322618705LL;

    t177 = ((x805+(x806%x807))-x808);

    if (t177 != 16200201LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int16_t x809 = -1;
	int8_t x810 = 7;
	int16_t x811 = -1972;
	int32_t x812 = INT32_MAX;
	static volatile int32_t t178 = -273386;

    t178 = ((x809+(x810%x811))-x812);

    if (t178 != -2147483641) { NG(); } else { ; }
	
}

void f179(void) {
    	static volatile int64_t x817 = -256453289055LL;
	int32_t x819 = INT32_MIN;
	static volatile int64_t t179 = 9927550064694831LL;

    t179 = ((x817+(x818%x819))-x820);

    if (t179 != -252158321760LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x821 = -1;
	volatile uint8_t x822 = 7U;
	static int16_t x823 = INT16_MIN;
	int32_t x824 = INT32_MAX;
	static int32_t t180 = -542;

    t180 = ((x821+(x822%x823))-x824);

    if (t180 != -2147483641) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile int8_t x825 = 16;
	static int16_t x826 = INT16_MAX;
	int64_t x827 = INT64_MAX;
	uint16_t x828 = UINT16_MAX;

    t181 = ((x825+(x826%x827))-x828);

    if (t181 != -32752LL) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x829 = UINT8_MAX;
	static uint16_t x830 = UINT16_MAX;
	volatile int32_t x831 = INT32_MIN;
	int64_t x832 = -1LL;
	int64_t t182 = 4553052292289LL;

    t182 = ((x829+(x830%x831))-x832);

    if (t182 != 65791LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x835 = 3858U;
	static uint8_t x836 = UINT8_MAX;
	static volatile int64_t t183 = -3077LL;

    t183 = ((x833+(x834%x835))-x836);

    if (t183 != -33024LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x837 = -27;
	uint16_t x839 = 14726U;
	int16_t x840 = 23;
	static int32_t t184 = 1;

    t184 = ((x837+(x838%x839))-x840);

    if (t184 != -3366) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x841 = 2519U;
	volatile int64_t x843 = 2717478LL;
	int8_t x844 = 53;
	volatile int64_t t185 = -4LL;

    t185 = ((x841+(x842%x843))-x844);

    if (t185 != -1268324LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int8_t x845 = -1;
	int32_t x846 = -1;
	int64_t x847 = INT64_MAX;
	int8_t x848 = -1;
	int64_t t186 = 27LL;

    t186 = ((x845+(x846%x847))-x848);

    if (t186 != -1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x854 = INT8_MIN;
	int32_t x855 = -198596;
	int8_t x856 = INT8_MIN;

    t187 = ((x853+(x854%x855))-x856);

    if (t187 != 9451) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x857 = INT64_MAX;
	static int8_t x858 = 24;
	uint8_t x859 = 3U;
	volatile uint64_t x860 = 246664722829222853LLU;

    t188 = ((x857+(x858%x859))-x860);

    if (t188 != 8976707314025552954LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x862 = 8LL;
	volatile uint32_t x863 = 4026681U;
	int16_t x864 = INT16_MAX;
	int64_t t189 = 851LL;

    t189 = ((x861+(x862%x863))-x864);

    if (t189 != 32776LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint8_t x865 = UINT8_MAX;
	volatile int32_t x867 = -3125449;
	int8_t x868 = -1;

    t190 = ((x865+(x866%x867))-x868);

    if (t190 != 272) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x870 = 7832U;
	uint64_t x871 = UINT64_MAX;
	static int32_t x872 = INT32_MIN;
	uint64_t t191 = 1177061796075630LLU;

    t191 = ((x869+(x870%x871))-x872);

    if (t191 != 2147491352LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x873 = INT32_MIN;
	uint16_t x874 = UINT16_MAX;
	int32_t x875 = INT32_MIN;
	volatile int64_t x876 = -1LL;
	int64_t t192 = -52799599LL;

    t192 = ((x873+(x874%x875))-x876);

    if (t192 != -2147418112LL) { NG(); } else { ; }
	
}

void f193(void) {
    	static volatile uint16_t x881 = UINT16_MAX;
	int8_t x882 = INT8_MIN;
	int16_t x883 = INT16_MAX;
	int8_t x884 = INT8_MIN;
	int32_t t193 = -27540;

    t193 = ((x881+(x882%x883))-x884);

    if (t193 != 65535) { NG(); } else { ; }
	
}

void f194(void) {
    	uint32_t x885 = UINT32_MAX;
	static int8_t x886 = 13;
	uint16_t x888 = 14969U;
	uint64_t t194 = 3LLU;

    t194 = ((x885+(x886%x887))-x888);

    if (t194 != 4294952339LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	static volatile uint16_t x889 = 235U;
	uint32_t x890 = UINT32_MAX;
	uint8_t x891 = 55U;
	volatile uint32_t t195 = 1911U;

    t195 = ((x889+(x890%x891))-x892);

    if (t195 != 260U) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x895 = -709094603LL;
	static volatile uint64_t t196 = 1667963894037219327LLU;

    t196 = ((x893+(x894%x895))-x896);

    if (t196 != 18446744068910857249LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int8_t x899 = INT8_MAX;

    t197 = ((x897+(x898%x899))-x900);

    if (t197 != -2147483635) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x909 = INT64_MIN;
	int32_t x910 = 239617;
	int16_t x911 = -4435;
	volatile int64_t t198 = 2672229362842409LL;

    t198 = ((x909+(x910%x911))-x912);

    if (t198 != 127LL) { NG(); } else { ; }
	
}

void f199(void) {
    	static int16_t x913 = -1;
	uint16_t x914 = 128U;
	uint8_t x916 = 4U;
	volatile uint64_t t199 = 74LLU;

    t199 = ((x913+(x914%x915))-x916);

    if (t199 != 123LLU) { NG(); } else { ; }
	
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

