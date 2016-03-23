
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

uint8_t x5 = UINT8_MAX;
int16_t x7 = INT16_MIN;
uint32_t t1 = 65602542U;
static uint16_t x13 = UINT16_MAX;
static int16_t x14 = 1;
volatile int32_t x21 = INT32_MAX;
int8_t x30 = -1;
uint64_t t6 = UINT64_MAX;
volatile uint64_t t7 = 1205880196LLU;
volatile int64_t x37 = INT64_MAX;
uint32_t x39 = 7U;
int32_t x48 = INT32_MAX;
uint32_t x49 = 466U;
static int8_t x52 = INT8_MIN;
volatile uint32_t t11 = 59414551U;
int64_t x54 = -1LL;
volatile int64_t t12 = 284348288439825LL;
uint8_t x57 = 45U;
int8_t x62 = 5;
int8_t x65 = INT8_MIN;
int16_t x67 = -4446;
int16_t x68 = 16;
int8_t x70 = INT8_MIN;
static int16_t x74 = -1634;
static int64_t x75 = -855582LL;
int64_t x79 = INT64_MIN;
volatile int32_t t19 = 1;
int32_t x91 = INT32_MAX;
int16_t x94 = -31;
uint8_t x95 = UINT8_MAX;
volatile int64_t t22 = -2049556LL;
int64_t t23 = 4356LL;
static int64_t x109 = INT64_MAX;
int8_t x110 = -1;
volatile int8_t x111 = INT8_MIN;
int8_t x112 = INT8_MIN;
volatile int32_t t25 = 1598;
int16_t x118 = -1;
uint8_t x124 = 1U;
int16_t x132 = INT16_MIN;
int64_t x133 = -1LL;
volatile uint64_t x135 = 110587190045LLU;
int8_t x140 = INT8_MIN;
volatile int32_t x144 = INT32_MIN;
static int16_t x150 = 1;
int8_t x151 = INT8_MIN;
int8_t x154 = INT8_MIN;
static uint32_t x166 = 21167284U;
volatile int64_t x170 = INT64_MIN;
int64_t x175 = -18682847LL;
int64_t t38 = 9704148LL;
int16_t x180 = 1;
int32_t x183 = -1;
int16_t x184 = INT16_MIN;
volatile int64_t t40 = -452087202685LL;
uint8_t x188 = 0U;
uint8_t x189 = 6U;
volatile int8_t x190 = INT8_MIN;
uint8_t x195 = UINT8_MAX;
static int8_t x196 = -12;
uint64_t x197 = 7866330773138LLU;
uint64_t t44 = 294LLU;
static volatile int64_t x201 = 50428587473654LL;
int32_t x205 = -1;
int16_t x208 = 475;
uint32_t x209 = 475861U;
uint16_t x216 = UINT16_MAX;
uint64_t t48 = 255LLU;
static volatile uint64_t t50 = 7529842735888LLU;
volatile uint64_t x227 = UINT64_MAX;
int64_t x239 = INT64_MIN;
int32_t x241 = 36397305;
int16_t x243 = 9;
volatile int64_t x249 = -357733186551LL;
static int64_t x252 = -1LL;
static int8_t x257 = -1;
static volatile uint16_t x258 = 31675U;
int16_t x259 = INT16_MIN;
static int8_t x260 = INT8_MIN;
int16_t x266 = 0;
static uint32_t x270 = 24472U;
int64_t x271 = INT64_MIN;
static int32_t x275 = INT32_MIN;
static volatile uint16_t x279 = UINT16_MAX;
static int64_t x283 = -1LL;
uint64_t t64 = 333361254388154LLU;
uint64_t x291 = 5038LLU;
int8_t x296 = -9;
uint64_t x303 = 3430101500087798830LLU;
int32_t t69 = 390;
static int16_t x310 = 637;
int64_t x313 = INT64_MAX;
int8_t x315 = INT8_MIN;
static volatile uint16_t x322 = 14U;
volatile int32_t t75 = -20430;
int8_t x333 = 20;
int32_t t77 = -5335;
uint8_t x342 = 0U;
uint8_t x357 = 24U;
int64_t x367 = -1LL;
int32_t x377 = -5;
static volatile uint64_t t87 = UINT64_MAX;
volatile uint64_t x384 = UINT64_MAX;
static uint64_t t88 = 143537971778318129LLU;
int8_t x389 = INT8_MAX;
int64_t x392 = -1LL;
uint16_t x397 = UINT16_MAX;
int16_t x405 = INT16_MIN;
int16_t x407 = INT16_MIN;
static int64_t x408 = -976485934467887478LL;
static int8_t x411 = INT8_MIN;
uint64_t x417 = UINT64_MAX;
int64_t x419 = INT64_MAX;
volatile uint64_t t98 = 0LLU;
int16_t x441 = -1;
static int8_t x448 = INT8_MAX;
int64_t x455 = -12665394352LL;
int16_t x459 = INT16_MIN;
volatile int64_t x461 = INT64_MIN;
volatile int32_t x464 = INT32_MAX;
uint32_t x465 = UINT32_MAX;
uint16_t x466 = 1U;
volatile uint64_t x468 = 3LLU;
int32_t x477 = INT32_MIN;
uint64_t x480 = UINT64_MAX;
static uint64_t t110 = 152066096LLU;
volatile int64_t t111 = 44883210673398418LL;
volatile int8_t x485 = -1;
uint16_t x490 = UINT16_MAX;
static int64_t x492 = 35568657500800698LL;
volatile uint64_t x500 = 19LLU;
static int32_t x503 = 232583293;
uint64_t t118 = 13516675LLU;
int16_t x521 = INT16_MIN;
int64_t x533 = 5198790785065LL;
int16_t x536 = INT16_MIN;
int8_t x537 = INT8_MAX;
static int64_t x544 = -1LL;
volatile int64_t t123 = 191452825633LL;
int8_t x549 = INT8_MAX;
volatile int32_t x551 = 15289144;
int32_t x552 = INT32_MIN;
volatile int32_t t125 = -448;
uint16_t x555 = UINT16_MAX;
volatile int64_t x557 = 17979046LL;
static volatile int32_t x559 = INT32_MIN;
volatile int64_t t127 = -217455629LL;
static int32_t x562 = -1;
uint32_t x565 = UINT32_MAX;
uint8_t x568 = UINT8_MAX;
int16_t x570 = -1;
uint8_t x572 = 24U;
uint64_t t132 = 1350LLU;
int8_t x585 = 21;
volatile int32_t x587 = -1;
static int32_t t135 = -2613228;
static int64_t x597 = -1LL;
int32_t x600 = 144274710;
volatile uint64_t t137 = 304359LLU;
volatile int64_t x611 = INT64_MAX;
volatile int16_t x612 = -1;
static uint32_t x615 = UINT32_MAX;
volatile uint16_t x617 = UINT16_MAX;
int32_t x625 = INT32_MAX;
volatile int32_t x626 = INT32_MAX;
int16_t x629 = INT16_MIN;
int32_t x630 = INT32_MAX;
int64_t x631 = 30LL;
int16_t x636 = INT16_MIN;
int32_t x640 = INT32_MAX;
volatile int16_t x646 = -1;
volatile int64_t t150 = -816432062834LL;
static uint64_t t151 = 2688575688025167985LLU;
uint32_t x681 = 2023U;
volatile int64_t t160 = 5443LL;
static uint32_t x711 = 1898841478U;
uint64_t t161 = 28250533037385LLU;
volatile int64_t t163 = -355588645LL;
volatile int8_t x722 = 0;
int32_t x723 = 61090;
uint64_t t164 = 53504LLU;
static int16_t x731 = INT16_MAX;
int64_t x733 = INT64_MIN;
int32_t x737 = -1;
int16_t x740 = INT16_MAX;
int32_t x760 = -6456260;
uint16_t x767 = 74U;
int8_t x789 = INT8_MIN;
int64_t x791 = 1658458198285003LL;
int64_t x796 = 81527716781337208LL;
uint16_t x798 = UINT16_MAX;
static int8_t x807 = 1;
volatile int8_t x809 = INT8_MIN;
int64_t t181 = -89539709LL;
uint32_t x817 = 1199341156U;
int8_t x818 = -2;
uint64_t x823 = 98606LLU;
int64_t x830 = -1LL;
static volatile int64_t t185 = 351234LL;
volatile int64_t t186 = -1316948565318LL;
static int16_t x838 = 681;
volatile int16_t x843 = -12;
uint16_t x844 = 596U;
int64_t x846 = 4342961465080LL;
static volatile int32_t x849 = 6;
static int16_t x855 = INT16_MIN;
int64_t t191 = 1932731011LL;
volatile int16_t x862 = -1;
static volatile int32_t x863 = 8641740;
int16_t x864 = INT16_MIN;
static uint8_t x873 = 21U;
volatile int64_t x875 = 55115541LL;
volatile int8_t x879 = INT8_MAX;
uint32_t x885 = UINT32_MAX;
int8_t x887 = INT8_MIN;
volatile int64_t t198 = -1816204551730185555LL;
uint16_t x889 = 43U;
volatile uint32_t t199 = 147U;


void f0(void) {
    	uint32_t x6 = 597U;
	volatile int64_t x8 = -11152547097631LL;
	static volatile int64_t t0 = 1LL;

    t0 = ((x5&(x6/x7))*x8);

    if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int8_t x9 = 0;
	static int16_t x10 = INT16_MAX;
	uint16_t x11 = 2U;
	uint32_t x12 = 3U;

    t1 = ((x9&(x10/x11))*x12);

    if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x15 = -1;
	static volatile uint32_t x16 = 21694638U;
	volatile uint32_t t2 = 55679U;

    t2 = ((x13&(x14/x15))*x16);

    if (t2 != 123926354U) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x17 = INT16_MIN;
	volatile int32_t x18 = INT32_MIN;
	int16_t x19 = INT16_MIN;
	volatile uint64_t x20 = 8950014995555709490LLU;
	uint64_t t3 = 1454LLU;

    t3 = ((x17&(x18/x19))*x20);

    if (t3 != 15508181070073954304LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int8_t x22 = -1;
	volatile int64_t x23 = 1521730727387LL;
	uint16_t x24 = 2108U;
	volatile int64_t t4 = 3518921351LL;

    t4 = ((x21&(x22/x23))*x24);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x25 = UINT16_MAX;
	static int8_t x26 = -1;
	static uint8_t x27 = 3U;
	int16_t x28 = -1;
	static int32_t t5 = 1018;

    t5 = ((x25&(x26/x27))*x28);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x29 = 1188373LLU;
	static uint64_t x31 = UINT64_MAX;
	int16_t x32 = -1;

    t6 = ((x29&(x30/x31))*x32);

    if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
    	static uint64_t x33 = 2134990159577904LLU;
	int32_t x34 = -1;
	int16_t x35 = 77;
	int64_t x36 = INT64_MIN;

    t7 = ((x33&(x34/x35))*x36);

    if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x38 = -1;
	int16_t x40 = INT16_MIN;
	int64_t t8 = -3LL;

    t8 = ((x37&(x38/x39))*x40);

    if (t8 != -20105355460608LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static int64_t x41 = 78273299264495LL;
	uint8_t x42 = 35U;
	uint64_t x43 = UINT64_MAX;
	int64_t x44 = -10283025LL;
	volatile uint64_t t9 = 85340095LLU;

    t9 = ((x41&(x42/x43))*x44);

    if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x45 = INT32_MAX;
	uint32_t x46 = 172895U;
	int32_t x47 = INT32_MAX;
	volatile uint32_t t10 = 174U;

    t10 = ((x45&(x46/x47))*x48);

    if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
    	static uint16_t x50 = 952U;
	int8_t x51 = INT8_MIN;

    t11 = ((x49&(x50/x51))*x52);

    if (t11 != 4294907904U) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x53 = INT8_MIN;
	int64_t x55 = INT64_MIN;
	volatile int64_t x56 = 2214541LL;

    t12 = ((x53&(x54/x55))*x56);

    if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
    	static int8_t x58 = -22;
	volatile int32_t x59 = INT32_MIN;
	uint32_t x60 = 1818660021U;
	static volatile uint32_t t13 = 359U;

    t13 = ((x57&(x58/x59))*x60);

    if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x61 = 1;
	uint8_t x63 = 8U;
	int8_t x64 = INT8_MAX;
	static volatile int32_t t14 = -1;

    t14 = ((x61&(x62/x63))*x64);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	int16_t x66 = INT16_MIN;
	volatile int32_t t15 = -1952;

    t15 = ((x65&(x66/x67))*x68);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x69 = INT16_MIN;
	uint32_t x71 = 120U;
	volatile int16_t x72 = -1;
	uint32_t t16 = 2265U;

    t16 = ((x69&(x70/x71))*x72);

    if (t16 != 4259184640U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int16_t x73 = -1;
	int64_t x76 = INT64_MIN;
	int64_t t17 = 490573756207LL;

    t17 = ((x73&(x74/x75))*x76);

    if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int8_t x77 = INT8_MIN;
	static int8_t x78 = -1;
	uint32_t x80 = 2019642496U;
	volatile int64_t t18 = -26535843293LL;

    t18 = ((x77&(x78/x79))*x80);

    if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int8_t x85 = -7;
	int16_t x86 = -1;
	int8_t x87 = INT8_MIN;
	int32_t x88 = INT32_MAX;

    t19 = ((x85&(x86/x87))*x88);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x89 = 0U;
	volatile int16_t x90 = -1;
	uint32_t x92 = 1864203889U;
	uint32_t t20 = 850U;

    t20 = ((x89&(x90/x91))*x92);

    if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x93 = 13740LL;
	int64_t x96 = -11LL;
	volatile int64_t t21 = 16419140144LL;

    t21 = ((x93&(x94/x95))*x96);

    if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x97 = 41;
	volatile int64_t x98 = INT64_MIN;
	volatile int32_t x99 = -755932;
	int32_t x100 = 43467;

    t22 = ((x97&(x98/x99))*x100);

    if (t22 != 391203LL) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x101 = 21U;
	int32_t x102 = INT32_MAX;
	volatile int64_t x103 = INT64_MIN;
	int32_t x104 = 2410;

    t23 = ((x101&(x102/x103))*x104);

    if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t t24 = -6511062464966565LL;

    t24 = ((x109&(x110/x111))*x112);

    if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x113 = 47U;
	int16_t x114 = INT16_MAX;
	static int32_t x115 = INT32_MAX;
	int8_t x116 = INT8_MIN;

    t25 = ((x113&(x114/x115))*x116);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x117 = -1;
	uint32_t x119 = 357U;
	int8_t x120 = -3;
	uint32_t t26 = 1012912216U;

    t26 = ((x117&(x118/x119))*x120);

    if (t26 != 4258875136U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x121 = -1;
	int8_t x122 = 0;
	uint16_t x123 = UINT16_MAX;
	int32_t t27 = 798698;

    t27 = ((x121&(x122/x123))*x124);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x129 = INT64_MIN;
	uint32_t x130 = 1385U;
	static uint32_t x131 = 2U;
	int64_t t28 = -461384LL;

    t28 = ((x129&(x130/x131))*x132);

    if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x134 = UINT64_MAX;
	volatile int64_t x136 = INT64_MIN;
	volatile uint64_t t29 = 6643LLU;

    t29 = ((x133&(x134/x135))*x136);

    if (t29 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x137 = 160141212;
	uint8_t x138 = 0U;
	int64_t x139 = 8013951772968LL;
	static volatile int64_t t30 = 139850779002732LL;

    t30 = ((x137&(x138/x139))*x140);

    if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x141 = INT64_MIN;
	volatile int32_t x142 = INT32_MAX;
	static int64_t x143 = 2920LL;
	int64_t t31 = 4378227014358LL;

    t31 = ((x141&(x142/x143))*x144);

    if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x145 = INT8_MIN;
	uint32_t x146 = 7U;
	uint8_t x147 = 1U;
	int8_t x148 = INT8_MAX;
	uint32_t t32 = 214145760U;

    t32 = ((x145&(x146/x147))*x148);

    if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x149 = 2U;
	static int8_t x152 = INT8_MAX;
	volatile int32_t t33 = 37;

    t33 = ((x149&(x150/x151))*x152);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x153 = 11U;
	uint8_t x155 = 72U;
	int64_t x156 = 68039430300366LL;
	static int64_t t34 = -153LL;

    t34 = ((x153&(x154/x155))*x156);

    if (t34 != 748433733304026LL) { NG(); } else { ; }
	
}

void f35(void) {
    	static int32_t x161 = -1;
	volatile int8_t x162 = 0;
	static int64_t x163 = INT64_MIN;
	static uint16_t x164 = UINT16_MAX;
	volatile int64_t t35 = -4905210LL;

    t35 = ((x161&(x162/x163))*x164);

    if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x165 = INT64_MIN;
	int16_t x167 = -64;
	static volatile int16_t x168 = -82;
	int64_t t36 = -3282054944476750962LL;

    t36 = ((x165&(x166/x167))*x168);

    if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x169 = -1;
	static volatile int32_t x171 = INT32_MIN;
	int8_t x172 = 12;
	static volatile int64_t t37 = -2682618825443705909LL;

    t37 = ((x169&(x170/x171))*x172);

    if (t37 != 51539607552LL) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x173 = INT32_MIN;
	int32_t x174 = -1;
	int8_t x176 = -1;

    t38 = ((x173&(x174/x175))*x176);

    if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x177 = 6;
	volatile int16_t x178 = 197;
	uint16_t x179 = 298U;
	volatile int32_t t39 = 586065260;

    t39 = ((x177&(x178/x179))*x180);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x181 = INT16_MAX;
	volatile int64_t x182 = 555034130860260LL;

    t40 = ((x181&(x182/x183))*x184);

    if (t40 != -462290944LL) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x185 = INT64_MIN;
	int16_t x186 = -1;
	volatile uint64_t x187 = UINT64_MAX;
	uint64_t t41 = 19LLU;

    t41 = ((x185&(x186/x187))*x188);

    if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x191 = UINT64_MAX;
	volatile uint64_t x192 = UINT64_MAX;
	uint64_t t42 = 62284389LLU;

    t42 = ((x189&(x190/x191))*x192);

    if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int8_t x193 = 0;
	uint64_t x194 = UINT64_MAX;
	uint64_t t43 = 16551886LLU;

    t43 = ((x193&(x194/x195))*x196);

    if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int16_t x198 = INT16_MIN;
	static uint8_t x199 = UINT8_MAX;
	uint16_t x200 = 1U;

    t44 = ((x197&(x198/x199))*x200);

    if (t44 != 7866330773120LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x202 = 300616212000354683LL;
	int64_t x203 = 14546LL;
	int32_t x204 = -1;
	static int64_t t45 = 241723847LL;

    t45 = ((x201&(x202/x203))*x204);

    if (t45 != -864631259826LL) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x206 = INT8_MIN;
	volatile int64_t x207 = -252879003600321482LL;
	volatile int64_t t46 = -159338585LL;

    t46 = ((x205&(x206/x207))*x208);

    if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x210 = INT8_MAX;
	volatile int8_t x211 = INT8_MAX;
	int32_t x212 = INT32_MIN;
	volatile uint32_t t47 = 5280780U;

    t47 = ((x209&(x210/x211))*x212);

    if (t47 != 2147483648U) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x213 = 6U;
	uint64_t x214 = 286887032525LLU;
	uint32_t x215 = 18207050U;

    t48 = ((x213&(x214/x215))*x216);

    if (t48 != 262140LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x217 = 0U;
	int8_t x218 = INT8_MIN;
	int8_t x219 = 3;
	uint32_t x220 = UINT32_MAX;
	volatile uint32_t t49 = 307304U;

    t49 = ((x217&(x218/x219))*x220);

    if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x221 = 1338U;
	volatile int32_t x222 = INT32_MIN;
	static volatile int16_t x223 = INT16_MIN;
	static uint64_t x224 = 12776270132LLU;

    t50 = ((x221&(x222/x223))*x224);

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint8_t x225 = UINT8_MAX;
	uint16_t x226 = UINT16_MAX;
	volatile int8_t x228 = INT8_MIN;
	volatile uint64_t t51 = 1LLU;

    t51 = ((x225&(x226/x227))*x228);

    if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x229 = 9;
	static uint32_t x230 = UINT32_MAX;
	uint64_t x231 = UINT64_MAX;
	int64_t x232 = INT64_MAX;
	volatile uint64_t t52 = 0LLU;

    t52 = ((x229&(x230/x231))*x232);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x233 = INT32_MIN;
	int32_t x234 = 97;
	int32_t x235 = INT32_MAX;
	static volatile int64_t x236 = -849033LL;
	int64_t t53 = 12952486LL;

    t53 = ((x233&(x234/x235))*x236);

    if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x237 = -1;
	volatile int16_t x238 = -1;
	int32_t x240 = INT32_MIN;
	int64_t t54 = 12844688LL;

    t54 = ((x237&(x238/x239))*x240);

    if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x242 = 72;
	int16_t x244 = INT16_MIN;
	static volatile int32_t t55 = -87213256;

    t55 = ((x241&(x242/x243))*x244);

    if (t55 != -262144) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x245 = INT16_MAX;
	int64_t x246 = 63274428321899LL;
	volatile int64_t x247 = INT64_MIN;
	int16_t x248 = -2836;
	volatile int64_t t56 = -11658LL;

    t56 = ((x245&(x246/x247))*x248);

    if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x250 = -1LL;
	uint16_t x251 = 89U;
	int64_t t57 = 12630207605427538LL;

    t57 = ((x249&(x250/x251))*x252);

    if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x253 = 2020807770LLU;
	int32_t x254 = INT32_MIN;
	int64_t x255 = 12466630LL;
	static uint16_t x256 = 286U;
	volatile uint64_t t58 = 470180511LLU;

    t58 = ((x253&(x254/x255))*x256);

    if (t58 != 577951019360LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	static int32_t t59 = -253008187;

    t59 = ((x257&(x258/x259))*x260);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x265 = 2;
	uint32_t x267 = UINT32_MAX;
	volatile uint8_t x268 = 71U;
	static volatile uint32_t t60 = 209733U;

    t60 = ((x265&(x266/x267))*x268);

    if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint8_t x269 = UINT8_MAX;
	int16_t x272 = INT16_MIN;
	static int64_t t61 = 1129LL;

    t61 = ((x269&(x270/x271))*x272);

    if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static uint64_t x273 = UINT64_MAX;
	uint64_t x274 = 9266LLU;
	volatile int64_t x276 = INT64_MIN;
	volatile uint64_t t62 = 124850694136917294LLU;

    t62 = ((x273&(x274/x275))*x276);

    if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x277 = 1U;
	uint8_t x278 = 4U;
	int16_t x280 = -1;
	volatile int32_t t63 = 335;

    t63 = ((x277&(x278/x279))*x280);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile uint64_t x281 = 68226921259639332LLU;
	static volatile uint16_t x282 = UINT16_MAX;
	static int64_t x284 = INT64_MAX;

    t64 = ((x281&(x282/x283))*x284);

    if (t64 != 18378517152449953792LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int32_t x289 = 114507;
	static int32_t x290 = -2202;
	int64_t x292 = INT64_MIN;
	uint64_t t65 = 195770712528265555LLU;

    t65 = ((x289&(x290/x291))*x292);

    if (t65 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x293 = INT64_MAX;
	uint16_t x294 = 111U;
	int32_t x295 = 367130516;
	volatile int64_t t66 = 158655299008040LL;

    t66 = ((x293&(x294/x295))*x296);

    if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
    	static int16_t x297 = INT16_MIN;
	static int32_t x298 = -1;
	static int64_t x299 = INT64_MIN;
	volatile uint64_t x300 = 655826616LLU;
	volatile uint64_t t67 = 247LLU;

    t67 = ((x297&(x298/x299))*x300);

    if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x301 = 153322847;
	static int16_t x302 = INT16_MIN;
	static volatile uint32_t x304 = UINT32_MAX;
	uint64_t t68 = 770468324078449LLU;

    t68 = ((x301&(x302/x303))*x304);

    if (t68 != 21474836475LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	static uint8_t x305 = UINT8_MAX;
	int8_t x306 = -1;
	int16_t x307 = INT16_MIN;
	int16_t x308 = 7;

    t69 = ((x305&(x306/x307))*x308);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x309 = UINT32_MAX;
	int32_t x311 = -1;
	volatile int8_t x312 = INT8_MIN;
	static volatile uint32_t t70 = 13875636U;

    t70 = ((x309&(x310/x311))*x312);

    if (t70 != 81536U) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x314 = INT8_MAX;
	int32_t x316 = INT32_MAX;
	volatile int64_t t71 = 750332611249691027LL;

    t71 = ((x313&(x314/x315))*x316);

    if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x317 = -1;
	uint64_t x318 = 242577875LLU;
	int16_t x319 = 1292;
	static int32_t x320 = 67981746;
	static volatile uint64_t t72 = 43521685221616015LLU;

    t72 = ((x317&(x318/x319))*x320);

    if (t72 != 12763776756738LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x321 = -1;
	static int64_t x323 = 32615046LL;
	int64_t x324 = INT64_MAX;
	static int64_t t73 = -8628764LL;

    t73 = ((x321&(x322/x323))*x324);

    if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x325 = 34174114U;
	uint32_t x326 = UINT32_MAX;
	int8_t x327 = 1;
	uint32_t x328 = 274693U;
	volatile uint32_t t74 = 1473422993U;

    t74 = ((x325&(x326/x327))*x328);

    if (t74 != 2886355242U) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int16_t x329 = -1;
	int8_t x330 = INT8_MIN;
	int32_t x331 = -1;
	static int16_t x332 = INT16_MAX;

    t75 = ((x329&(x330/x331))*x332);

    if (t75 != 4194176) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x334 = INT32_MIN;
	volatile int64_t x335 = -1LL;
	volatile int64_t x336 = INT64_MIN;
	volatile int64_t t76 = 32722LL;

    t76 = ((x333&(x334/x335))*x336);

    if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x337 = INT8_MAX;
	int32_t x338 = INT32_MAX;
	int32_t x339 = INT32_MIN;
	static int8_t x340 = INT8_MAX;

    t77 = ((x337&(x338/x339))*x340);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x341 = 1483289637925151LL;
	uint64_t x343 = UINT64_MAX;
	int32_t x344 = 0;
	uint64_t t78 = 65112LLU;

    t78 = ((x341&(x342/x343))*x344);

    if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x345 = -4075;
	uint16_t x346 = 13217U;
	static int8_t x347 = -6;
	static int16_t x348 = -116;
	int32_t t79 = -6156;

    t79 = ((x345&(x346/x347))*x348);

    if (t79 != 474672) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x349 = UINT8_MAX;
	uint8_t x350 = 2U;
	int16_t x351 = INT16_MAX;
	int64_t x352 = INT64_MIN;
	static int64_t t80 = 722575688014076701LL;

    t80 = ((x349&(x350/x351))*x352);

    if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x353 = INT32_MIN;
	int8_t x354 = 26;
	int16_t x355 = -2700;
	static int64_t x356 = -492539054LL;
	static volatile int64_t t81 = 4425961535LL;

    t81 = ((x353&(x354/x355))*x356);

    if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint16_t x358 = 839U;
	static int64_t x359 = 76615761774378950LL;
	static int8_t x360 = -1;
	int64_t t82 = -4200857732LL;

    t82 = ((x357&(x358/x359))*x360);

    if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x361 = -5;
	int8_t x362 = INT8_MIN;
	static int64_t x363 = INT64_MIN;
	int16_t x364 = INT16_MIN;
	volatile int64_t t83 = 49813314295280125LL;

    t83 = ((x361&(x362/x363))*x364);

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x365 = INT64_MIN;
	uint64_t x366 = 233LLU;
	uint8_t x368 = 0U;
	volatile uint64_t t84 = 1840553LLU;

    t84 = ((x365&(x366/x367))*x368);

    if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x369 = INT32_MIN;
	int16_t x370 = 163;
	int8_t x371 = -1;
	volatile int64_t x372 = -1LL;
	static int64_t t85 = 7787874909520241LL;

    t85 = ((x369&(x370/x371))*x372);

    if (t85 != 2147483648LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint32_t x373 = 177784U;
	static volatile int64_t x374 = INT64_MIN;
	static int64_t x375 = INT64_MAX;
	volatile int32_t x376 = INT32_MAX;
	volatile int64_t t86 = -84966LL;

    t86 = ((x373&(x374/x375))*x376);

    if (t86 != 381788232698248LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x378 = -1LL;
	volatile int8_t x379 = -1;
	uint64_t x380 = UINT64_MAX;

    t87 = ((x377&(x378/x379))*x380);

    if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x381 = -351;
	static uint64_t x382 = 1026569LLU;
	int32_t x383 = INT32_MIN;

    t88 = ((x381&(x382/x383))*x384);

    if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x390 = 2;
	uint16_t x391 = 786U;
	static int64_t t89 = -977682327LL;

    t89 = ((x389&(x390/x391))*x392);

    if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x393 = INT16_MIN;
	uint8_t x394 = 14U;
	int8_t x395 = -1;
	volatile uint16_t x396 = UINT16_MAX;
	int32_t t90 = 85422396;

    t90 = ((x393&(x394/x395))*x396);

    if (t90 != -2147450880) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x398 = 5469U;
	int32_t x399 = INT32_MAX;
	uint8_t x400 = 7U;
	volatile uint32_t t91 = 6174058U;

    t91 = ((x397&(x398/x399))*x400);

    if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x401 = INT64_MIN;
	uint64_t x402 = 896949LLU;
	volatile uint8_t x403 = UINT8_MAX;
	int32_t x404 = INT32_MIN;
	uint64_t t92 = 352534960LLU;

    t92 = ((x401&(x402/x403))*x404);

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x406 = 93U;
	static volatile int64_t t93 = 16411711656489852LL;

    t93 = ((x405&(x406/x407))*x408);

    if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x409 = -1;
	int64_t x410 = 385104LL;
	volatile uint64_t x412 = 567049187LLU;
	uint64_t t94 = 32287LLU;

    t94 = ((x409&(x410/x411))*x412);

    if (t94 != 18446742368025597120LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x413 = -1;
	volatile uint64_t x414 = UINT64_MAX;
	static int8_t x415 = INT8_MIN;
	int16_t x416 = -1;
	volatile uint64_t t95 = UINT64_MAX;

    t95 = ((x413&(x414/x415))*x416);

    if (t95 != UINT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x418 = INT16_MIN;
	uint16_t x420 = 20591U;
	volatile uint64_t t96 = 1754137987791271877LLU;

    t96 = ((x417&(x418/x419))*x420);

    if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x421 = INT8_MAX;
	int16_t x422 = INT16_MIN;
	volatile int32_t x423 = -1;
	uint32_t x424 = 2314U;
	volatile uint32_t t97 = 1570U;

    t97 = ((x421&(x422/x423))*x424);

    if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int64_t x425 = -3824919583661736176LL;
	uint64_t x426 = 2533573212LLU;
	int8_t x427 = INT8_MAX;
	int64_t x428 = 2064LL;

    t98 = ((x425&(x426/x427))*x428);

    if (t98 != 38977335552LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static uint32_t x429 = 2887U;
	volatile uint16_t x430 = UINT16_MAX;
	volatile int64_t x431 = INT64_MIN;
	int8_t x432 = INT8_MIN;
	int64_t t99 = -5217LL;

    t99 = ((x429&(x430/x431))*x432);

    if (t99 != 0LL) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int32_t x433 = -1;
	int64_t x434 = INT64_MAX;
	static uint64_t x435 = UINT64_MAX;
	int64_t x436 = 428829LL;
	volatile uint64_t t100 = 594509648LLU;

    t100 = ((x433&(x434/x435))*x436);

    if (t100 != 0LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x437 = INT16_MAX;
	int16_t x438 = -51;
	static int64_t x439 = -84165891443407LL;
	int16_t x440 = -5055;
	int64_t t101 = -32268760521981LL;

    t101 = ((x437&(x438/x439))*x440);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x442 = UINT8_MAX;
	uint16_t x443 = 54U;
	int8_t x444 = INT8_MAX;
	int32_t t102 = 14387194;

    t102 = ((x441&(x442/x443))*x444);

    if (t102 != 508) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int64_t x445 = 24488LL;
	uint16_t x446 = 2U;
	static uint64_t x447 = 29LLU;
	static volatile uint64_t t103 = 824045151297350LLU;

    t103 = ((x445&(x446/x447))*x448);

    if (t103 != 0LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x449 = INT16_MIN;
	int8_t x450 = -1;
	uint16_t x451 = 3U;
	uint64_t x452 = 167264LLU;
	uint64_t t104 = 490743259120984485LLU;

    t104 = ((x449&(x450/x451))*x452);

    if (t104 != 0LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x453 = INT32_MIN;
	uint32_t x454 = 2U;
	int8_t x456 = -1;
	volatile int64_t t105 = -405027232426LL;

    t105 = ((x453&(x454/x455))*x456);

    if (t105 != 0LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x457 = INT16_MIN;
	int8_t x458 = -13;
	uint32_t x460 = 548781U;
	volatile uint32_t t106 = 7U;

    t106 = ((x457&(x458/x459))*x460);

    if (t106 != 0U) { NG(); } else { ; }
	
}

void f107(void) {
    	int8_t x462 = INT8_MAX;
	int64_t x463 = INT64_MIN;
	static volatile int64_t t107 = 6LL;

    t107 = ((x461&(x462/x463))*x464);

    if (t107 != 0LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x467 = INT8_MAX;
	volatile uint64_t t108 = 10926202443LLU;

    t108 = ((x465&(x466/x467))*x468);

    if (t108 != 0LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x469 = INT16_MIN;
	static int32_t x470 = INT32_MAX;
	uint16_t x471 = 2936U;
	static int8_t x472 = INT8_MIN;
	volatile int32_t t109 = -155;

    t109 = ((x469&(x470/x471))*x472);

    if (t109 != -92274688) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x478 = INT32_MAX;
	int8_t x479 = INT8_MIN;

    t110 = ((x477&(x478/x479))*x480);

    if (t110 != 2147483648LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x481 = -55415;
	static int8_t x482 = 5;
	int64_t x483 = INT64_MIN;
	int8_t x484 = INT8_MAX;

    t111 = ((x481&(x482/x483))*x484);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int8_t x486 = 22;
	int64_t x487 = -1499520764173750LL;
	volatile int8_t x488 = INT8_MAX;
	volatile int64_t t112 = 139709025050LL;

    t112 = ((x485&(x486/x487))*x488);

    if (t112 != 0LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x489 = INT16_MIN;
	uint64_t x491 = 10256LLU;
	uint64_t t113 = 60453821795979357LLU;

    t113 = ((x489&(x490/x491))*x492);

    if (t113 != 0LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x497 = 51600LL;
	uint16_t x498 = 2U;
	int32_t x499 = -279406;
	uint64_t t114 = 4173477LLU;

    t114 = ((x497&(x498/x499))*x500);

    if (t114 != 0LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static int8_t x501 = 1;
	uint64_t x502 = 277908390LLU;
	int16_t x504 = -1;
	uint64_t t115 = UINT64_MAX;

    t115 = ((x501&(x502/x503))*x504);

    if (t115 != UINT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x505 = 0LLU;
	uint64_t x506 = UINT64_MAX;
	volatile uint8_t x507 = 14U;
	int8_t x508 = -24;
	uint64_t t116 = 1815709701509347809LLU;

    t116 = ((x505&(x506/x507))*x508);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x509 = INT8_MIN;
	int32_t x510 = -54570;
	int32_t x511 = INT32_MIN;
	int64_t x512 = INT64_MIN;
	int64_t t117 = -5330250LL;

    t117 = ((x509&(x510/x511))*x512);

    if (t117 != 0LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x513 = -36444654795160LL;
	int8_t x514 = INT8_MIN;
	volatile uint64_t x515 = UINT64_MAX;
	volatile int16_t x516 = 1;

    t118 = ((x513&(x514/x515))*x516);

    if (t118 != 0LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	static volatile int64_t x517 = INT64_MAX;
	static int8_t x518 = -1;
	volatile int8_t x519 = -1;
	volatile uint64_t x520 = UINT64_MAX;
	volatile uint64_t t119 = UINT64_MAX;

    t119 = ((x517&(x518/x519))*x520);

    if (t119 != UINT64_MAX) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x522 = INT16_MAX;
	volatile int8_t x523 = -1;
	static uint32_t x524 = 1084U;
	uint32_t t120 = 896U;

    t120 = ((x521&(x522/x523))*x524);

    if (t120 != 4259446784U) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x534 = 10LLU;
	static uint16_t x535 = 12708U;
	volatile uint64_t t121 = 1448969014LLU;

    t121 = ((x533&(x534/x535))*x536);

    if (t121 != 0LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x538 = INT8_MIN;
	int8_t x539 = -1;
	volatile int16_t x540 = INT16_MIN;
	volatile int32_t t122 = -121;

    t122 = ((x537&(x538/x539))*x540);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int32_t x541 = -62;
	int16_t x542 = INT16_MAX;
	static volatile uint32_t x543 = 9884235U;

    t123 = ((x541&(x542/x543))*x544);

    if (t123 != 0LL) { NG(); } else { ; }
	
}

void f124(void) {
    	volatile int32_t x545 = INT32_MAX;
	int64_t x546 = -1LL;
	uint16_t x547 = 1236U;
	uint8_t x548 = UINT8_MAX;
	int64_t t124 = 229LL;

    t124 = ((x545&(x546/x547))*x548);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x550 = 10;

    t125 = ((x549&(x550/x551))*x552);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x553 = INT8_MIN;
	volatile int32_t x554 = INT32_MIN;
	static int16_t x556 = 160;
	int32_t t126 = -521975;

    t126 = ((x553&(x554/x555))*x556);

    if (t126 != -5242880) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x558 = -1;
	int32_t x560 = INT32_MAX;

    t127 = ((x557&(x558/x559))*x560);

    if (t127 != 0LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x561 = -1;
	volatile int16_t x563 = 333;
	volatile int8_t x564 = -25;
	volatile int32_t t128 = 26993254;

    t128 = ((x561&(x562/x563))*x564);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x566 = 15;
	int16_t x567 = 56;
	static uint32_t t129 = 21U;

    t129 = ((x565&(x566/x567))*x568);

    if (t129 != 0U) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x569 = UINT64_MAX;
	uint16_t x571 = 5120U;
	uint64_t t130 = 5959939LLU;

    t130 = ((x569&(x570/x571))*x572);

    if (t130 != 0LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x577 = 18552029;
	int16_t x578 = 272;
	static int16_t x579 = INT16_MIN;
	uint8_t x580 = 2U;
	static int32_t t131 = -2;

    t131 = ((x577&(x578/x579))*x580);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x581 = 0U;
	int8_t x582 = -1;
	static uint64_t x583 = UINT64_MAX;
	static uint32_t x584 = 203U;

    t132 = ((x581&(x582/x583))*x584);

    if (t132 != 0LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x586 = 0U;
	uint32_t x588 = 858U;
	uint32_t t133 = 211030831U;

    t133 = ((x585&(x586/x587))*x588);

    if (t133 != 0U) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x589 = INT16_MIN;
	static int32_t x590 = -1;
	volatile int32_t x591 = -505;
	int32_t x592 = -1;
	volatile int32_t t134 = -20137;

    t134 = ((x589&(x590/x591))*x592);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x593 = INT32_MIN;
	volatile int16_t x594 = INT16_MIN;
	int8_t x595 = -5;
	uint8_t x596 = 19U;

    t135 = ((x593&(x594/x595))*x596);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	static volatile int64_t x598 = 46516104715888LL;
	int64_t x599 = INT64_MAX;
	static volatile int64_t t136 = 0LL;

    t136 = ((x597&(x598/x599))*x600);

    if (t136 != 0LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint64_t x601 = 664183LLU;
	volatile int32_t x602 = 17;
	uint32_t x603 = 32176U;
	int32_t x604 = -170176504;

    t137 = ((x601&(x602/x603))*x604);

    if (t137 != 0LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x605 = 110400;
	int8_t x606 = INT8_MIN;
	static int8_t x607 = -3;
	int64_t x608 = -8880LL;
	volatile int64_t t138 = 403405379114360318LL;

    t138 = ((x605&(x606/x607))*x608);

    if (t138 != 0LL) { NG(); } else { ; }
	
}

void f139(void) {
    	int64_t x609 = INT64_MAX;
	int32_t x610 = -1;
	volatile int64_t t139 = 37675036025454LL;

    t139 = ((x609&(x610/x611))*x612);

    if (t139 != 0LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x613 = INT32_MAX;
	int16_t x614 = 460;
	uint32_t x616 = 36U;
	static uint32_t t140 = 3381448U;

    t140 = ((x613&(x614/x615))*x616);

    if (t140 != 0U) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x618 = INT16_MIN;
	static int8_t x619 = INT8_MAX;
	uint32_t x620 = 1223U;
	uint32_t t141 = 996U;

    t141 = ((x617&(x618/x619))*x620);

    if (t141 != 79834994U) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x621 = INT64_MIN;
	int64_t x622 = -1881500960044748380LL;
	static volatile int32_t x623 = -1;
	int32_t x624 = 3849751;
	static int64_t t142 = 0LL;

    t142 = ((x621&(x622/x623))*x624);

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	static uint64_t x627 = 11657709836LLU;
	volatile int32_t x628 = 14264;
	uint64_t t143 = 443952759LLU;

    t143 = ((x625&(x626/x627))*x628);

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x632 = INT16_MIN;
	static int64_t t144 = -1376LL;

    t144 = ((x629&(x630/x631))*x632);

    if (t144 != -2345052143616LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x633 = 8520894LL;
	int8_t x634 = INT8_MAX;
	static volatile uint16_t x635 = UINT16_MAX;
	volatile int64_t t145 = 16043423212LL;

    t145 = ((x633&(x634/x635))*x636);

    if (t145 != 0LL) { NG(); } else { ; }
	
}

void f146(void) {
    	uint64_t x637 = UINT64_MAX;
	volatile int8_t x638 = 1;
	uint16_t x639 = 132U;
	volatile uint64_t t146 = 2621477716LLU;

    t146 = ((x637&(x638/x639))*x640);

    if (t146 != 0LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x645 = INT16_MIN;
	uint8_t x647 = UINT8_MAX;
	volatile uint64_t x648 = UINT64_MAX;
	volatile uint64_t t147 = 30366489467503884LLU;

    t147 = ((x645&(x646/x647))*x648);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x649 = 0U;
	volatile int64_t x650 = 0LL;
	uint32_t x651 = 477814497U;
	int16_t x652 = 496;
	volatile int64_t t148 = 92704063650398014LL;

    t148 = ((x649&(x650/x651))*x652);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int64_t x653 = INT64_MIN;
	static uint64_t x654 = 243360899LLU;
	uint16_t x655 = 1U;
	int8_t x656 = 0;
	volatile uint64_t t149 = 11266686079554LLU;

    t149 = ((x653&(x654/x655))*x656);

    if (t149 != 0LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x657 = INT16_MAX;
	uint32_t x658 = 327U;
	int64_t x659 = -1267873280895122LL;
	static volatile int64_t x660 = INT64_MAX;

    t150 = ((x657&(x658/x659))*x660);

    if (t150 != 0LL) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint64_t x661 = 15181579LLU;
	int16_t x662 = -1;
	static uint16_t x663 = UINT16_MAX;
	volatile int8_t x664 = INT8_MAX;

    t151 = ((x661&(x662/x663))*x664);

    if (t151 != 0LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint64_t x665 = UINT64_MAX;
	int8_t x666 = INT8_MIN;
	int32_t x667 = 53519;
	int16_t x668 = INT16_MIN;
	uint64_t t152 = 7374657486276695LLU;

    t152 = ((x665&(x666/x667))*x668);

    if (t152 != 0LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x669 = -1LL;
	volatile uint32_t x670 = 11U;
	int64_t x671 = -232900491929LL;
	int16_t x672 = -1;
	int64_t t153 = -20156665LL;

    t153 = ((x669&(x670/x671))*x672);

    if (t153 != 0LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int32_t x673 = INT32_MIN;
	int16_t x674 = INT16_MIN;
	int16_t x675 = INT16_MIN;
	int32_t x676 = -8327797;
	int32_t t154 = 3355;

    t154 = ((x673&(x674/x675))*x676);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x677 = 51859LLU;
	static volatile uint16_t x678 = 48U;
	int64_t x679 = INT64_MIN;
	uint16_t x680 = 3U;
	uint64_t t155 = 14568008598863LLU;

    t155 = ((x677&(x678/x679))*x680);

    if (t155 != 0LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	static int16_t x682 = INT16_MIN;
	static int32_t x683 = INT32_MAX;
	volatile int32_t x684 = INT32_MIN;
	volatile uint32_t t156 = 981U;

    t156 = ((x681&(x682/x683))*x684);

    if (t156 != 0U) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x689 = INT32_MAX;
	int64_t x690 = INT64_MIN;
	int32_t x691 = INT32_MAX;
	static int32_t x692 = INT32_MIN;
	int64_t t157 = -258636703972LL;

    t157 = ((x689&(x690/x691))*x692);

    if (t157 != -4611686014132420608LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x693 = INT64_MAX;
	int16_t x694 = INT16_MIN;
	static int16_t x695 = INT16_MIN;
	int32_t x696 = INT32_MIN;
	static volatile int64_t t158 = 38737333LL;

    t158 = ((x693&(x694/x695))*x696);

    if (t158 != -2147483648LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x701 = 24;
	uint8_t x702 = UINT8_MAX;
	uint64_t x703 = 6594600545401842LLU;
	volatile int64_t x704 = -144628012LL;
	volatile uint64_t t159 = 389LLU;

    t159 = ((x701&(x702/x703))*x704);

    if (t159 != 0LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x705 = 38U;
	int8_t x706 = -1;
	volatile int32_t x707 = INT32_MIN;
	int64_t x708 = 1LL;

    t160 = ((x705&(x706/x707))*x708);

    if (t160 != 0LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x709 = 16213U;
	uint32_t x710 = 3206U;
	uint64_t x712 = 250676573865548LLU;

    t161 = ((x709&(x710/x711))*x712);

    if (t161 != 0LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int32_t x713 = INT32_MIN;
	static int8_t x714 = -8;
	uint32_t x715 = 13181U;
	volatile int8_t x716 = 2;
	uint32_t t162 = 957093U;

    t162 = ((x713&(x714/x715))*x716);

    if (t162 != 0U) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x717 = 13U;
	volatile int64_t x718 = INT64_MAX;
	static int32_t x719 = -1;
	static int64_t x720 = -5747LL;

    t163 = ((x717&(x718/x719))*x720);

    if (t163 != -5747LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint64_t x721 = UINT64_MAX;
	volatile int16_t x724 = -1;

    t164 = ((x721&(x722/x723))*x724);

    if (t164 != 0LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x725 = INT8_MAX;
	int32_t x726 = -2464;
	int16_t x727 = INT16_MIN;
	static int32_t x728 = 2548;
	volatile int32_t t165 = -3867611;

    t165 = ((x725&(x726/x727))*x728);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x729 = 1345768791185020LL;
	uint16_t x730 = 0U;
	volatile int32_t x732 = 5;
	volatile int64_t t166 = -1848287LL;

    t166 = ((x729&(x730/x731))*x732);

    if (t166 != 0LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint16_t x734 = UINT16_MAX;
	int64_t x735 = INT64_MIN;
	int16_t x736 = -1;
	volatile int64_t t167 = 245192552LL;

    t167 = ((x733&(x734/x735))*x736);

    if (t167 != 0LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x738 = 101230105U;
	int16_t x739 = INT16_MIN;
	uint32_t t168 = 2795731U;

    t168 = ((x737&(x738/x739))*x740);

    if (t168 != 0U) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x741 = INT8_MIN;
	int16_t x742 = INT16_MIN;
	int16_t x743 = INT16_MIN;
	int16_t x744 = -1;
	int32_t t169 = -244989790;

    t169 = ((x741&(x742/x743))*x744);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x745 = 58U;
	int32_t x746 = INT32_MIN;
	static uint64_t x747 = 2773347LLU;
	static int32_t x748 = INT32_MAX;
	static uint64_t t170 = 89484252644120138LLU;

    t170 = ((x745&(x746/x747))*x748);

    if (t170 != 38654705646LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint64_t x757 = 5630630529469697LLU;
	int64_t x758 = INT64_MAX;
	uint64_t x759 = 176LLU;
	uint64_t t171 = 1LLU;

    t171 = ((x757&(x758/x759))*x760);

    if (t171 != 14022031584004268032LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x765 = 1;
	int8_t x766 = INT8_MIN;
	int16_t x768 = INT16_MAX;
	volatile int32_t t172 = 5207;

    t172 = ((x765&(x766/x767))*x768);

    if (t172 != 32767) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int64_t x769 = INT64_MAX;
	int16_t x770 = -1;
	int16_t x771 = -1;
	volatile int64_t x772 = INT64_MIN;
	int64_t t173 = INT64_MIN;

    t173 = ((x769&(x770/x771))*x772);

    if (t173 != INT64_MIN) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x773 = -1;
	uint32_t x774 = 2U;
	int64_t x775 = 1814574302LL;
	static int64_t x776 = INT64_MIN;
	int64_t t174 = 55901045755LL;

    t174 = ((x773&(x774/x775))*x776);

    if (t174 != 0LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int32_t x777 = 143339;
	int16_t x778 = -3129;
	uint64_t x779 = 84025226689LLU;
	static int8_t x780 = -1;
	volatile uint64_t t175 = 48310384533LLU;

    t175 = ((x777&(x778/x779))*x780);

    if (t175 != 18446744073709542688LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x790 = 0U;
	volatile uint64_t x792 = 73514412297LLU;
	uint64_t t176 = 42448667159475118LLU;

    t176 = ((x789&(x790/x791))*x792);

    if (t176 != 0LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static int16_t x793 = INT16_MIN;
	volatile int8_t x794 = INT8_MAX;
	int64_t x795 = -13667LL;
	int64_t t177 = -3960872140170173LL;

    t177 = ((x793&(x794/x795))*x796);

    if (t177 != 0LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static uint32_t x797 = 11U;
	int32_t x799 = INT32_MAX;
	int32_t x800 = 24;
	uint32_t t178 = 3795U;

    t178 = ((x797&(x798/x799))*x800);

    if (t178 != 0U) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x801 = 7998459;
	static uint32_t x802 = 5842U;
	volatile uint64_t x803 = 60641360LLU;
	uint64_t x804 = 24752LLU;
	volatile uint64_t t179 = 411864230219498LLU;

    t179 = ((x801&(x802/x803))*x804);

    if (t179 != 0LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x805 = 267615938352012LLU;
	uint8_t x806 = 26U;
	int8_t x808 = -1;
	uint64_t t180 = 221LLU;

    t180 = ((x805&(x806/x807))*x808);

    if (t180 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static int32_t x810 = 6827;
	volatile int64_t x811 = -1LL;
	uint32_t x812 = 108U;

    t181 = ((x809&(x810/x811))*x812);

    if (t181 != -746496LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x813 = INT8_MIN;
	int8_t x814 = -1;
	int16_t x815 = INT16_MAX;
	int16_t x816 = 10;
	int32_t t182 = 0;

    t182 = ((x813&(x814/x815))*x816);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint16_t x819 = UINT16_MAX;
	uint8_t x820 = UINT8_MAX;
	uint32_t t183 = 670201U;

    t183 = ((x817&(x818/x819))*x820);

    if (t183 != 0U) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint8_t x821 = 93U;
	volatile int32_t x822 = INT32_MIN;
	int32_t x824 = 856216779;
	uint64_t t184 = 967328649LLU;

    t184 = ((x821&(x822/x823))*x824);

    if (t184 != 76203293331LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x829 = -3334;
	int16_t x831 = INT16_MIN;
	int8_t x832 = INT8_MIN;

    t185 = ((x829&(x830/x831))*x832);

    if (t185 != 0LL) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x833 = -1LL;
	uint16_t x834 = 62U;
	uint8_t x835 = 12U;
	int8_t x836 = INT8_MIN;

    t186 = ((x833&(x834/x835))*x836);

    if (t186 != -640LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x837 = INT8_MAX;
	volatile int16_t x839 = -4351;
	volatile int32_t x840 = 237444;
	int32_t t187 = 97;

    t187 = ((x837&(x838/x839))*x840);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x841 = 9;
	static int64_t x842 = INT64_MIN;
	static volatile int64_t t188 = -4261LL;

    t188 = ((x841&(x842/x843))*x844);

    if (t188 != 4768LL) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x845 = 2041LLU;
	int16_t x847 = INT16_MIN;
	static int64_t x848 = -56786182328526LL;
	static uint64_t t189 = 52675554572361345LLU;

    t189 = ((x845&(x846/x847))*x848);

    if (t189 != 18350377922298042994LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x850 = 1575046U;
	int16_t x851 = -10;
	int16_t x852 = 1998;
	volatile uint32_t t190 = 4050U;

    t190 = ((x849&(x850/x851))*x852);

    if (t190 != 0U) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x853 = INT64_MAX;
	int16_t x854 = 863;
	static int8_t x856 = INT8_MIN;

    t191 = ((x853&(x854/x855))*x856);

    if (t191 != 0LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x861 = 52241LL;
	volatile int64_t t192 = 855834644LL;

    t192 = ((x861&(x862/x863))*x864);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x865 = INT16_MIN;
	int16_t x866 = 0;
	volatile int64_t x867 = INT64_MIN;
	static uint64_t x868 = UINT64_MAX;
	uint64_t t193 = 90LLU;

    t193 = ((x865&(x866/x867))*x868);

    if (t193 != 0LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x869 = 137837204164884397LL;
	uint8_t x870 = 9U;
	volatile uint32_t x871 = UINT32_MAX;
	static int16_t x872 = -1;
	volatile int64_t t194 = 1267573444613LL;

    t194 = ((x869&(x870/x871))*x872);

    if (t194 != 0LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x874 = -1LL;
	int64_t x876 = -1LL;
	int64_t t195 = -1089336420946493534LL;

    t195 = ((x873&(x874/x875))*x876);

    if (t195 != 0LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x877 = INT8_MAX;
	volatile uint8_t x878 = 7U;
	int32_t x880 = -1;
	static volatile int32_t t196 = -1429;

    t196 = ((x877&(x878/x879))*x880);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile int16_t x881 = -57;
	int16_t x882 = INT16_MAX;
	uint32_t x883 = UINT32_MAX;
	static uint8_t x884 = UINT8_MAX;
	volatile uint32_t t197 = 20322418U;

    t197 = ((x881&(x882/x883))*x884);

    if (t197 != 0U) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x886 = INT8_MIN;
	int64_t x888 = -1LL;

    t198 = ((x885&(x886/x887))*x888);

    if (t198 != -1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint32_t x890 = UINT32_MAX;
	static int32_t x891 = -1;
	static uint16_t x892 = UINT16_MAX;

    t199 = ((x889&(x890/x891))*x892);

    if (t199 != 65535U) { NG(); } else { ; }
	
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

