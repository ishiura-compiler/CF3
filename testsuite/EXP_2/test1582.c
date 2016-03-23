
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

uint32_t x1 = UINT32_MAX;
uint8_t x2 = 31U;
uint32_t t0 = 115938U;
int32_t t1 = -121042;
int8_t x15 = INT8_MIN;
int8_t x19 = 46;
volatile int64_t x20 = INT64_MIN;
volatile int64_t t4 = -34LL;
volatile int64_t t6 = 34890007723LL;
volatile uint64_t x29 = 17883046971269290LLU;
int64_t x30 = -44125828518574906LL;
static uint64_t x39 = UINT64_MAX;
volatile int64_t t9 = 5472266LL;
static int32_t x43 = INT32_MIN;
int32_t x45 = INT32_MIN;
uint8_t x47 = 2U;
int32_t x55 = -4650178;
int8_t x59 = 6;
uint8_t x62 = 118U;
static volatile int64_t x70 = INT64_MIN;
int8_t x73 = INT8_MIN;
uint64_t x76 = UINT64_MAX;
uint16_t x86 = 0U;
uint16_t x88 = 4U;
uint8_t x91 = UINT8_MAX;
static uint64_t t22 = 145990304903053488LLU;
volatile int32_t t24 = -41;
int32_t x101 = 620041330;
int64_t x104 = INT64_MIN;
static int16_t x106 = 481;
int64_t x109 = -8708LL;
int64_t t27 = 1121LL;
int8_t x121 = -9;
static uint16_t x126 = UINT16_MAX;
volatile int64_t t31 = -7135815113177LL;
int8_t x130 = INT8_MAX;
int64_t x131 = INT64_MIN;
volatile int64_t x137 = INT64_MIN;
int64_t t34 = 6608607583978LL;
static volatile int16_t x146 = INT16_MIN;
volatile int8_t x147 = INT8_MIN;
static uint32_t x150 = UINT32_MAX;
uint32_t x151 = 2454U;
uint64_t x155 = UINT64_MAX;
volatile uint8_t x158 = UINT8_MAX;
uint64_t t40 = 190876468705167865LLU;
static uint16_t x166 = 6U;
static uint64_t t41 = 6538134421150630460LLU;
int8_t x170 = INT8_MAX;
int8_t x186 = -1;
static uint64_t x189 = 2146LLU;
volatile int8_t x199 = -1;
int32_t t49 = -134340;
int64_t x201 = 289470LL;
int64_t x205 = INT64_MIN;
volatile uint64_t x208 = 23811860919041642LLU;
int64_t x209 = 524151602LL;
int16_t x217 = -1;
static volatile uint32_t x219 = 33023675U;
int8_t x228 = 1;
volatile int32_t t55 = 1;
int32_t x233 = INT32_MIN;
int16_t x235 = INT16_MIN;
volatile int8_t x245 = -1;
int32_t x250 = -1;
int32_t x253 = 7;
volatile int32_t t62 = -837189740;
int8_t x261 = INT8_MAX;
static uint64_t x265 = UINT64_MAX;
int16_t x269 = INT16_MIN;
int64_t x272 = -1LL;
uint16_t x282 = 104U;
int8_t x284 = -1;
volatile int64_t x286 = INT64_MAX;
int16_t x287 = -1;
int32_t x290 = 50508;
static int16_t x291 = 12995;
uint64_t x295 = UINT64_MAX;
static int8_t x299 = INT8_MIN;
uint8_t x302 = 17U;
static int64_t x303 = INT64_MIN;
uint8_t x309 = 0U;
int8_t x315 = INT8_MAX;
int8_t x316 = INT8_MIN;
volatile int64_t t77 = -32451967884534066LL;
volatile int16_t x332 = -1;
static int16_t x334 = INT16_MIN;
int32_t x335 = 55559071;
int16_t x336 = 0;
int32_t t81 = -32336828;
uint64_t x353 = UINT64_MAX;
volatile int64_t x354 = INT64_MAX;
uint16_t x364 = UINT16_MAX;
int16_t x369 = INT16_MIN;
int16_t x374 = 174;
static int16_t x382 = INT16_MIN;
uint32_t x389 = UINT32_MAX;
uint32_t t95 = 11U;
volatile int8_t x397 = -58;
int64_t t98 = -1316521579535724LL;
volatile int32_t t99 = -490321;
uint64_t x410 = 24788765674LLU;
static uint16_t x412 = 3U;
uint8_t x413 = 2U;
int32_t t103 = -341675345;
uint32_t x429 = 1U;
int32_t x430 = INT32_MAX;
uint8_t x433 = UINT8_MAX;
uint32_t x435 = 50U;
uint16_t x436 = UINT16_MAX;
int32_t x442 = -1;
static uint16_t x446 = 6904U;
volatile int32_t t109 = 5;
int8_t x449 = INT8_MAX;
volatile int64_t x469 = -1LL;
static volatile int32_t x473 = 117794554;
uint8_t x475 = UINT8_MAX;
uint8_t x476 = 1U;
static int32_t t116 = -1;
int32_t x482 = INT32_MIN;
uint64_t x486 = UINT64_MAX;
int32_t x490 = -1;
static volatile int64_t x496 = 6LL;
int16_t x497 = -1;
int64_t x499 = INT64_MAX;
volatile int32_t t124 = -62;
volatile int32_t t125 = -11304763;
int16_t x517 = 13;
int16_t x524 = 1519;
int32_t x528 = INT32_MAX;
int32_t x531 = INT32_MIN;
uint16_t x533 = 1580U;
int32_t x535 = -1;
volatile int32_t x539 = -1;
volatile uint32_t t133 = 17384028U;
int8_t x554 = INT8_MIN;
int16_t x555 = INT16_MIN;
int16_t x557 = INT16_MIN;
static int32_t x558 = INT32_MAX;
int32_t x566 = INT32_MAX;
int64_t x576 = 81432LL;
static volatile int8_t x584 = INT8_MIN;
uint16_t x590 = UINT16_MAX;
int8_t x592 = INT8_MIN;
uint32_t t147 = 859U;
static uint32_t t149 = 234290U;
uint64_t x615 = UINT64_MAX;
volatile int32_t x620 = INT32_MAX;
static volatile uint16_t x622 = 29U;
volatile uint32_t t152 = 784954U;
uint16_t x626 = UINT16_MAX;
static uint64_t x627 = UINT64_MAX;
volatile int16_t x630 = 10710;
int16_t x636 = -1;
static volatile int32_t t155 = 23041518;
static volatile int64_t t158 = 7LL;
uint64_t x649 = 570319910181832LLU;
uint32_t x653 = 647432U;
volatile uint32_t t160 = 159954U;
uint32_t x661 = 58U;
static int32_t t163 = 2;
int64_t x670 = -277LL;
int64_t t164 = 26742439503489837LL;
volatile int32_t x673 = INT32_MIN;
volatile int32_t t165 = 14586;
static volatile int64_t x678 = 12LL;
uint16_t x679 = 1U;
int32_t x681 = INT32_MIN;
int64_t x682 = INT64_MIN;
int32_t x688 = 0;
uint16_t x691 = UINT16_MAX;
volatile int32_t x694 = -612;
static uint8_t x699 = 75U;
volatile int32_t x700 = 239292148;
volatile int32_t t171 = -3459116;
volatile uint32_t t172 = 251U;
int32_t x724 = INT32_MAX;
int8_t x728 = 2;
static int32_t x734 = -905016073;
volatile uint32_t x750 = 13591902U;
int32_t x751 = INT32_MIN;
uint64_t x752 = UINT64_MAX;
uint32_t x754 = 42256246U;
uint8_t x758 = 123U;
volatile int8_t x762 = -1;
static uint16_t x765 = 10993U;
volatile uint64_t x766 = 9210310487LLU;
int32_t t190 = -1345448;
volatile int8_t x782 = -2;
int32_t t192 = 1941596;
static uint16_t x785 = 2158U;
int32_t x789 = INT32_MIN;
uint8_t x791 = UINT8_MAX;
int32_t x806 = 389;
uint16_t x809 = 170U;
int64_t x811 = -1LL;


void f0(void) {
    	static uint32_t x3 = 937381422U;
	int8_t x4 = INT8_MIN;

    t0 = ((x1+(x2>x3))^x4);

    if (t0 != 127U) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = 64;
	volatile int8_t x6 = 1;
	volatile int16_t x7 = 159;
	int8_t x8 = INT8_MIN;

    t1 = ((x5+(x6>x7))^x8);

    if (t1 != -64) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x9 = INT32_MIN;
	int64_t x10 = INT64_MAX;
	int8_t x11 = -1;
	int16_t x12 = -1;
	volatile int32_t t2 = 35735;

    t2 = ((x9+(x10>x11))^x12);

    if (t2 != 2147483646) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	static int64_t x14 = INT64_MAX;
	static int16_t x16 = INT16_MIN;
	static int32_t t3 = -2714254;

    t3 = ((x13+(x14>x15))^x16);

    if (t3 != 2147450881) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	int16_t x18 = INT16_MIN;

    t4 = ((x17+(x18>x19))^x20);

    if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -152840411495LL;
	uint8_t x22 = 35U;
	static uint8_t x23 = 0U;
	uint8_t x24 = UINT8_MAX;
	volatile int64_t t5 = 2189600923106LL;

    t5 = ((x21+(x22>x23))^x24);

    if (t5 != -152840411547LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x25 = -1LL;
	int32_t x26 = INT32_MIN;
	int64_t x27 = 11813436569LL;
	int8_t x28 = -63;

    t6 = ((x25+(x26>x27))^x28);

    if (t6 != 62LL) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int16_t x31 = -1;
	uint64_t x32 = 283536LLU;
	static uint64_t t7 = 237185843LLU;

    t7 = ((x29+(x30>x31))^x32);

    if (t7 != 17883046971519802LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint8_t x33 = 0U;
	int64_t x34 = INT64_MIN;
	int8_t x35 = -1;
	volatile int8_t x36 = INT8_MAX;
	static int32_t t8 = -113893;

    t8 = ((x33+(x34>x35))^x36);

    if (t8 != 127) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x37 = INT64_MIN;
	int32_t x38 = INT32_MIN;
	int16_t x40 = INT16_MAX;

    t9 = ((x37+(x38>x39))^x40);

    if (t9 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x41 = -141407157525LL;
	int16_t x42 = INT16_MAX;
	int16_t x44 = INT16_MIN;
	int64_t t10 = 19665733626490LL;

    t10 = ((x41+(x42>x43))^x44);

    if (t10 != 141407126252LL) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x46 = UINT8_MAX;
	int8_t x48 = INT8_MIN;
	volatile int32_t t11 = 234862728;

    t11 = ((x45+(x46>x47))^x48);

    if (t11 != 2147483521) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x49 = INT8_MAX;
	int16_t x50 = INT16_MIN;
	uint64_t x51 = UINT64_MAX;
	int8_t x52 = 1;
	volatile int32_t t12 = -1;

    t12 = ((x49+(x50>x51))^x52);

    if (t12 != 126) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x53 = INT32_MIN;
	int8_t x54 = INT8_MAX;
	static int8_t x56 = INT8_MIN;
	volatile int32_t t13 = -23;

    t13 = ((x53+(x54>x55))^x56);

    if (t13 != 2147483521) { NG(); } else { ; }
	
}

void f14(void) {
    	int8_t x57 = INT8_MAX;
	volatile uint64_t x58 = 46575077035LLU;
	volatile uint64_t x60 = UINT64_MAX;
	uint64_t t14 = 2LLU;

    t14 = ((x57+(x58>x59))^x60);

    if (t14 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint32_t x61 = 6U;
	int8_t x63 = -1;
	int8_t x64 = -25;
	static volatile uint32_t t15 = 5U;

    t15 = ((x61+(x62>x63))^x64);

    if (t15 != 4294967264U) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x65 = 7;
	int32_t x66 = INT32_MIN;
	int32_t x67 = INT32_MIN;
	int8_t x68 = INT8_MAX;
	static volatile int32_t t16 = -124427384;

    t16 = ((x65+(x66>x67))^x68);

    if (t16 != 120) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint64_t x69 = 3212939120510282LLU;
	volatile uint8_t x71 = 49U;
	uint16_t x72 = 1513U;
	volatile uint64_t t17 = 306114847711053644LLU;

    t17 = ((x69+(x70>x71))^x72);

    if (t17 != 3212939120509091LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x74 = INT16_MIN;
	int32_t x75 = INT32_MIN;
	uint64_t t18 = 725149856382373LLU;

    t18 = ((x73+(x74>x75))^x76);

    if (t18 != 126LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x77 = INT16_MIN;
	uint32_t x78 = 245973U;
	int32_t x79 = INT32_MIN;
	uint32_t x80 = UINT32_MAX;
	volatile uint32_t t19 = 3U;

    t19 = ((x77+(x78>x79))^x80);

    if (t19 != 32767U) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x81 = UINT32_MAX;
	int64_t x82 = 484443878LL;
	uint64_t x83 = UINT64_MAX;
	int64_t x84 = INT64_MIN;
	volatile int64_t t20 = -56440456919453689LL;

    t20 = ((x81+(x82>x83))^x84);

    if (t20 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x85 = 8151024;
	uint16_t x87 = 152U;
	int32_t t21 = 1;

    t21 = ((x85+(x86>x87))^x88);

    if (t21 != 8151028) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint8_t x89 = 1U;
	int16_t x90 = INT16_MIN;
	uint64_t x92 = UINT64_MAX;

    t22 = ((x89+(x90>x91))^x92);

    if (t22 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int32_t x93 = -678;
	int16_t x94 = -1910;
	uint16_t x95 = 8380U;
	int32_t x96 = 388120;
	int32_t t23 = 6523523;

    t23 = ((x93+(x94>x95))^x96);

    if (t23 != -388798) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x97 = UINT8_MAX;
	volatile uint32_t x98 = 13530U;
	int16_t x99 = -1;
	int16_t x100 = -1184;

    t24 = ((x97+(x98>x99))^x100);

    if (t24 != -1121) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x102 = INT64_MIN;
	int32_t x103 = -3;
	volatile int64_t t25 = -1LL;

    t25 = ((x101+(x102>x103))^x104);

    if (t25 != -9223372036234734478LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x105 = 7419843U;
	volatile int64_t x107 = -4214LL;
	volatile int8_t x108 = 26;
	volatile uint32_t t26 = 13836014U;

    t26 = ((x105+(x106>x107))^x108);

    if (t26 != 7419870U) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x110 = -1;
	uint64_t x111 = UINT64_MAX;
	int8_t x112 = -14;

    t27 = ((x109+(x110>x111))^x112);

    if (t27 != 8718LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x113 = 1435;
	int8_t x114 = INT8_MIN;
	int8_t x115 = 8;
	int8_t x116 = -1;
	volatile int32_t t28 = 12;

    t28 = ((x113+(x114>x115))^x116);

    if (t28 != -1436) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x117 = 119U;
	volatile int32_t x118 = 1236462;
	uint64_t x119 = 603762921821449LLU;
	int8_t x120 = 0;
	static volatile int32_t t29 = -9;

    t29 = ((x117+(x118>x119))^x120);

    if (t29 != 119) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x122 = -1LL;
	uint64_t x123 = UINT64_MAX;
	int8_t x124 = -46;
	volatile int32_t t30 = 714020910;

    t30 = ((x121+(x122>x123))^x124);

    if (t30 != 37) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x125 = 4055341LL;
	static volatile uint16_t x127 = UINT16_MAX;
	int8_t x128 = INT8_MIN;

    t31 = ((x125+(x126>x127))^x128);

    if (t31 != -4055379LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x129 = -1LL;
	static uint8_t x132 = 106U;
	volatile int64_t t32 = 20759LL;

    t32 = ((x129+(x130>x131))^x132);

    if (t32 != 106LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x133 = 102U;
	int64_t x134 = INT64_MAX;
	int32_t x135 = INT32_MAX;
	volatile uint16_t x136 = UINT16_MAX;
	volatile int32_t t33 = 1;

    t33 = ((x133+(x134>x135))^x136);

    if (t33 != 65432) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x138 = UINT8_MAX;
	volatile int16_t x139 = INT16_MIN;
	volatile int32_t x140 = -1;

    t34 = ((x137+(x138>x139))^x140);

    if (t34 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x141 = 665454422U;
	uint8_t x142 = UINT8_MAX;
	int64_t x143 = INT64_MIN;
	int16_t x144 = INT16_MIN;
	uint32_t t35 = 306765U;

    t35 = ((x141+(x142>x143))^x144);

    if (t35 != 3629483863U) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x145 = INT64_MAX;
	static int16_t x148 = -11395;
	volatile int64_t t36 = -20998744LL;

    t36 = ((x145+(x146>x147))^x148);

    if (t36 != -9223372036854764414LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x149 = INT16_MAX;
	int32_t x152 = INT32_MIN;
	int32_t t37 = 1;

    t37 = ((x149+(x150>x151))^x152);

    if (t37 != -2147450880) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile uint64_t x153 = 63085092619811216LLU;
	uint8_t x154 = 107U;
	int32_t x156 = INT32_MIN;
	uint64_t t38 = 5807439831LLU;

    t38 = ((x153+(x154>x155))^x156);

    if (t38 != 18383658980828903824LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int64_t x157 = INT64_MIN;
	static volatile uint8_t x159 = 6U;
	uint64_t x160 = 383968058124053828LLU;
	uint64_t t39 = 1908634263577769LLU;

    t39 = ((x157+(x158>x159))^x160);

    if (t39 != 9607340094978829637LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint64_t x161 = 617658LLU;
	int16_t x162 = 1989;
	static volatile uint64_t x163 = 3960788516359649742LLU;
	uint16_t x164 = UINT16_MAX;

    t40 = ((x161+(x162>x163))^x164);

    if (t40 != 627525LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x165 = -1;
	int8_t x167 = INT8_MAX;
	uint64_t x168 = 95989668466123LLU;

    t41 = ((x165+(x166>x167))^x168);

    if (t41 != 18446648084041085492LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x169 = INT64_MIN;
	static volatile int32_t x171 = -1;
	int16_t x172 = INT16_MIN;
	int64_t t42 = -123062LL;

    t42 = ((x169+(x170>x171))^x172);

    if (t42 != 9223372036854743041LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x173 = 6647833615LLU;
	uint64_t x174 = 27LLU;
	uint32_t x175 = UINT32_MAX;
	uint32_t x176 = UINT32_MAX;
	uint64_t t43 = 464LLU;

    t43 = ((x173+(x174>x175))^x176);

    if (t43 != 6237068272LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x177 = -1;
	static volatile uint64_t x178 = UINT64_MAX;
	uint32_t x179 = 0U;
	int8_t x180 = INT8_MIN;
	volatile int32_t t44 = -866315;

    t44 = ((x177+(x178>x179))^x180);

    if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile uint32_t x181 = UINT32_MAX;
	static uint64_t x182 = 13450070LLU;
	int32_t x183 = INT32_MIN;
	volatile int8_t x184 = -1;
	uint32_t t45 = 28U;

    t45 = ((x181+(x182>x183))^x184);

    if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
    	uint16_t x185 = 13416U;
	int64_t x187 = INT64_MIN;
	static int16_t x188 = INT16_MIN;
	int32_t t46 = 345;

    t46 = ((x185+(x186>x187))^x188);

    if (t46 != -19351) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint8_t x190 = 9U;
	static int64_t x191 = 11LL;
	int32_t x192 = INT32_MAX;
	volatile uint64_t t47 = 1161LLU;

    t47 = ((x189+(x190>x191))^x192);

    if (t47 != 2147481501LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x193 = INT8_MIN;
	int16_t x194 = -1;
	int32_t x195 = INT32_MIN;
	int8_t x196 = INT8_MIN;
	volatile int32_t t48 = 5943;

    t48 = ((x193+(x194>x195))^x196);

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x197 = INT8_MAX;
	static volatile int16_t x198 = INT16_MIN;
	volatile uint16_t x200 = UINT16_MAX;

    t49 = ((x197+(x198>x199))^x200);

    if (t49 != 65408) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x202 = INT64_MIN;
	static int32_t x203 = 10950027;
	volatile int8_t x204 = -6;
	int64_t t50 = -7145LL;

    t50 = ((x201+(x202>x203))^x204);

    if (t50 != -289468LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static int64_t x206 = INT64_MIN;
	int32_t x207 = INT32_MAX;
	uint64_t t51 = 178109364718LLU;

    t51 = ((x205+(x206>x207))^x208);

    if (t51 != 9247183897773817450LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x210 = 0;
	int64_t x211 = INT64_MAX;
	int16_t x212 = -5837;
	volatile int64_t t52 = 6LL;

    t52 = ((x209+(x210>x211))^x212);

    if (t52 != -524156415LL) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x218 = UINT32_MAX;
	int16_t x220 = -1;
	int32_t t53 = 230;

    t53 = ((x217+(x218>x219))^x220);

    if (t53 != -1) { NG(); } else { ; }
	
}

void f54(void) {
    	static int8_t x221 = INT8_MIN;
	static int16_t x222 = 1;
	int64_t x223 = 3863002390824670350LL;
	static volatile int32_t x224 = -364539;
	volatile int32_t t54 = -14;

    t54 = ((x221+(x222>x223))^x224);

    if (t54 != 364421) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile int32_t x225 = -678849716;
	int8_t x226 = 1;
	int32_t x227 = INT32_MAX;

    t55 = ((x225+(x226>x227))^x228);

    if (t55 != -678849715) { NG(); } else { ; }
	
}

void f56(void) {
    	uint16_t x229 = UINT16_MAX;
	static volatile int8_t x230 = 7;
	static volatile int8_t x231 = -1;
	uint64_t x232 = 4483753123LLU;
	uint64_t t56 = 31944750LLU;

    t56 = ((x229+(x230>x231))^x232);

    if (t56 != 4483818659LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint16_t x234 = UINT16_MAX;
	int64_t x236 = INT64_MIN;
	volatile int64_t t57 = -5521LL;

    t57 = ((x233+(x234>x235))^x236);

    if (t57 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x237 = INT8_MIN;
	int32_t x238 = -3;
	static volatile int64_t x239 = INT64_MIN;
	static int8_t x240 = INT8_MIN;
	volatile int32_t t58 = -373443;

    t58 = ((x237+(x238>x239))^x240);

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x241 = UINT32_MAX;
	volatile int16_t x242 = INT16_MIN;
	uint64_t x243 = 568653947109116146LLU;
	int32_t x244 = INT32_MIN;
	volatile uint32_t t59 = 14U;

    t59 = ((x241+(x242>x243))^x244);

    if (t59 != 2147483648U) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x246 = INT64_MAX;
	int16_t x247 = -1;
	int64_t x248 = -1596881206LL;
	static volatile int64_t t60 = 1216464LL;

    t60 = ((x245+(x246>x247))^x248);

    if (t60 != -1596881206LL) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile uint8_t x249 = 7U;
	static int8_t x251 = -1;
	uint8_t x252 = 3U;
	volatile int32_t t61 = 884837516;

    t61 = ((x249+(x250>x251))^x252);

    if (t61 != 4) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x254 = 74U;
	int32_t x255 = 3823410;
	int16_t x256 = -1;

    t62 = ((x253+(x254>x255))^x256);

    if (t62 != -8) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile int32_t x262 = INT32_MIN;
	uint32_t x263 = 236394388U;
	uint64_t x264 = 20LLU;
	static volatile uint64_t t63 = 131885254560LLU;

    t63 = ((x261+(x262>x263))^x264);

    if (t63 != 148LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x266 = INT64_MIN;
	uint8_t x267 = 0U;
	int64_t x268 = INT64_MAX;
	volatile uint64_t t64 = 7989247LLU;

    t64 = ((x265+(x266>x267))^x268);

    if (t64 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x270 = INT64_MIN;
	int32_t x271 = INT32_MIN;
	volatile int64_t t65 = -109127242937LL;

    t65 = ((x269+(x270>x271))^x272);

    if (t65 != 32767LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int8_t x273 = -7;
	static int8_t x274 = INT8_MIN;
	volatile uint8_t x275 = 46U;
	int16_t x276 = INT16_MAX;
	int32_t t66 = 282363;

    t66 = ((x273+(x274>x275))^x276);

    if (t66 != -32762) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile int8_t x277 = -41;
	uint8_t x278 = 6U;
	volatile int32_t x279 = INT32_MIN;
	uint16_t x280 = UINT16_MAX;
	int32_t t67 = -1077;

    t67 = ((x277+(x278>x279))^x280);

    if (t67 != -65497) { NG(); } else { ; }
	
}

void f68(void) {
    	int16_t x281 = 134;
	uint16_t x283 = 371U;
	volatile int32_t t68 = -14617;

    t68 = ((x281+(x282>x283))^x284);

    if (t68 != -135) { NG(); } else { ; }
	
}

void f69(void) {
    	uint16_t x285 = UINT16_MAX;
	uint8_t x288 = UINT8_MAX;
	volatile int32_t t69 = -1189414;

    t69 = ((x285+(x286>x287))^x288);

    if (t69 != 65791) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x289 = INT16_MIN;
	int16_t x292 = -1;
	volatile int32_t t70 = -508123246;

    t70 = ((x289+(x290>x291))^x292);

    if (t70 != 32766) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x293 = INT32_MIN;
	volatile int64_t x294 = INT64_MAX;
	int64_t x296 = 3LL;
	int64_t t71 = -145LL;

    t71 = ((x293+(x294>x295))^x296);

    if (t71 != -2147483645LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x297 = INT16_MIN;
	int64_t x298 = 130441041545294347LL;
	uint64_t x300 = UINT64_MAX;
	volatile uint64_t t72 = 403LLU;

    t72 = ((x297+(x298>x299))^x300);

    if (t72 != 32766LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static uint64_t x301 = 2236LLU;
	int32_t x304 = INT32_MIN;
	static volatile uint64_t t73 = 70536967564LLU;

    t73 = ((x301+(x302>x303))^x304);

    if (t73 != 18446744071562070205LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x305 = UINT8_MAX;
	int16_t x306 = -1;
	volatile int8_t x307 = -7;
	static uint64_t x308 = 1466LLU;
	static uint64_t t74 = 5679882LLU;

    t74 = ((x305+(x306>x307))^x308);

    if (t74 != 1210LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint8_t x310 = 5U;
	uint16_t x311 = 4U;
	int32_t x312 = -1;
	static int32_t t75 = 163359;

    t75 = ((x309+(x310>x311))^x312);

    if (t75 != -2) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x313 = 28U;
	uint32_t x314 = UINT32_MAX;
	int32_t t76 = 6204726;

    t76 = ((x313+(x314>x315))^x316);

    if (t76 != -99) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x317 = -1;
	uint8_t x318 = UINT8_MAX;
	int64_t x319 = 1LL;
	int64_t x320 = 2831925346LL;

    t77 = ((x317+(x318>x319))^x320);

    if (t77 != 2831925346LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x321 = INT16_MIN;
	static uint8_t x322 = 22U;
	uint8_t x323 = 15U;
	volatile uint32_t x324 = UINT32_MAX;
	volatile uint32_t t78 = 324U;

    t78 = ((x321+(x322>x323))^x324);

    if (t78 != 32766U) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x325 = INT32_MAX;
	uint32_t x326 = UINT32_MAX;
	int8_t x327 = -1;
	uint32_t x328 = UINT32_MAX;
	volatile uint32_t t79 = 221593U;

    t79 = ((x325+(x326>x327))^x328);

    if (t79 != 2147483648U) { NG(); } else { ; }
	
}

void f80(void) {
    	static int16_t x329 = INT16_MIN;
	volatile uint16_t x330 = 0U;
	int16_t x331 = INT16_MAX;
	int32_t t80 = -8364;

    t80 = ((x329+(x330>x331))^x332);

    if (t80 != 32767) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x333 = 15U;

    t81 = ((x333+(x334>x335))^x336);

    if (t81 != 15) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x337 = INT16_MAX;
	int16_t x338 = INT16_MIN;
	static int8_t x339 = INT8_MIN;
	uint64_t x340 = 6LLU;
	uint64_t t82 = 235515127495152734LLU;

    t82 = ((x337+(x338>x339))^x340);

    if (t82 != 32761LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static uint16_t x341 = UINT16_MAX;
	volatile int64_t x342 = INT64_MIN;
	int8_t x343 = -1;
	uint8_t x344 = 82U;
	volatile int32_t t83 = 495;

    t83 = ((x341+(x342>x343))^x344);

    if (t83 != 65453) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int8_t x345 = -57;
	static int8_t x346 = INT8_MAX;
	uint8_t x347 = 14U;
	int32_t x348 = 7;
	int32_t t84 = -1;

    t84 = ((x345+(x346>x347))^x348);

    if (t84 != -49) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x349 = INT32_MIN;
	int64_t x350 = INT64_MIN;
	int64_t x351 = INT64_MIN;
	uint64_t x352 = 57430LLU;
	volatile uint64_t t85 = 44825676312228870LLU;

    t85 = ((x349+(x350>x351))^x352);

    if (t85 != 18446744071562125398LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x355 = -1LL;
	uint8_t x356 = 0U;
	volatile uint64_t t86 = 54606209599696LLU;

    t86 = ((x353+(x354>x355))^x356);

    if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x357 = INT16_MIN;
	uint64_t x358 = 17561670405975286LLU;
	static int8_t x359 = INT8_MIN;
	int16_t x360 = INT16_MAX;
	static int32_t t87 = 5;

    t87 = ((x357+(x358>x359))^x360);

    if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x361 = -1LL;
	static int8_t x362 = 5;
	int16_t x363 = -82;
	volatile int64_t t88 = -101932735732LL;

    t88 = ((x361+(x362>x363))^x364);

    if (t88 != 65535LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x365 = INT64_MIN;
	int64_t x366 = INT64_MAX;
	int16_t x367 = -2;
	volatile uint8_t x368 = 44U;
	volatile int64_t t89 = 35631408LL;

    t89 = ((x365+(x366>x367))^x368);

    if (t89 != -9223372036854775763LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int32_t x370 = INT32_MIN;
	int16_t x371 = INT16_MIN;
	static int16_t x372 = INT16_MAX;
	int32_t t90 = 407;

    t90 = ((x369+(x370>x371))^x372);

    if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x373 = -1;
	int32_t x375 = INT32_MIN;
	uint16_t x376 = UINT16_MAX;
	volatile int32_t t91 = 631;

    t91 = ((x373+(x374>x375))^x376);

    if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x377 = -4;
	int64_t x378 = -124315903052LL;
	int32_t x379 = -816;
	uint32_t x380 = UINT32_MAX;
	uint32_t t92 = 5260922U;

    t92 = ((x377+(x378>x379))^x380);

    if (t92 != 3U) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x381 = -1;
	uint64_t x383 = UINT64_MAX;
	volatile int16_t x384 = 741;
	volatile int32_t t93 = 3;

    t93 = ((x381+(x382>x383))^x384);

    if (t93 != -742) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x385 = 46354527067082629LLU;
	volatile int16_t x386 = INT16_MAX;
	int32_t x387 = INT32_MIN;
	int8_t x388 = -1;
	volatile uint64_t t94 = 516421798LLU;

    t94 = ((x385+(x386>x387))^x388);

    if (t94 != 18400389546642468985LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x390 = INT16_MIN;
	int32_t x391 = -3;
	uint32_t x392 = 52771542U;

    t95 = ((x389+(x390>x391))^x392);

    if (t95 != 4242195753U) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x393 = INT64_MIN;
	int16_t x394 = INT16_MIN;
	int32_t x395 = INT32_MIN;
	static int64_t x396 = -1LL;
	volatile int64_t t96 = -1546LL;

    t96 = ((x393+(x394>x395))^x396);

    if (t96 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x398 = 31742U;
	int8_t x399 = INT8_MAX;
	int64_t x400 = -8702051472376655LL;
	int64_t t97 = 26LL;

    t97 = ((x397+(x398>x399))^x400);

    if (t97 != 8702051472376694LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x401 = 53;
	int32_t x402 = INT32_MAX;
	int64_t x403 = -3884552LL;
	int64_t x404 = -1LL;

    t98 = ((x401+(x402>x403))^x404);

    if (t98 != -55LL) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int32_t x405 = -1;
	uint32_t x406 = 1991620U;
	volatile int8_t x407 = 3;
	static int16_t x408 = -9265;

    t99 = ((x405+(x406>x407))^x408);

    if (t99 != -9265) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile int16_t x409 = INT16_MIN;
	int64_t x411 = -58081174988LL;
	volatile int32_t t100 = -17628999;

    t100 = ((x409+(x410>x411))^x412);

    if (t100 != -32765) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x414 = 6889U;
	int8_t x415 = -1;
	uint32_t x416 = 1267U;
	static uint32_t t101 = 13U;

    t101 = ((x413+(x414>x415))^x416);

    if (t101 != 1264U) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int8_t x417 = INT8_MIN;
	static uint8_t x418 = UINT8_MAX;
	int32_t x419 = INT32_MIN;
	volatile int8_t x420 = INT8_MAX;
	volatile int32_t t102 = 57484;

    t102 = ((x417+(x418>x419))^x420);

    if (t102 != -2) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x421 = 246952597;
	static uint32_t x422 = 121388U;
	static volatile uint8_t x423 = UINT8_MAX;
	static int32_t x424 = 718;

    t103 = ((x421+(x422>x423))^x424);

    if (t103 != 246952024) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x425 = 1;
	uint16_t x426 = 0U;
	int16_t x427 = 279;
	volatile int16_t x428 = -1;
	static int32_t t104 = 12145180;

    t104 = ((x425+(x426>x427))^x428);

    if (t104 != -2) { NG(); } else { ; }
	
}

void f105(void) {
    	static int16_t x431 = -7625;
	static volatile uint32_t x432 = 101595U;
	volatile uint32_t t105 = 618947152U;

    t105 = ((x429+(x430>x431))^x432);

    if (t105 != 101593U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x434 = 25U;
	int32_t t106 = 16192350;

    t106 = ((x433+(x434>x435))^x436);

    if (t106 != 65280) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int64_t x437 = INT64_MAX;
	int64_t x438 = -201065637LL;
	int64_t x439 = INT64_MAX;
	int8_t x440 = INT8_MIN;
	volatile int64_t t107 = 163196214LL;

    t107 = ((x437+(x438>x439))^x440);

    if (t107 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint16_t x441 = 5726U;
	int8_t x443 = INT8_MIN;
	uint64_t x444 = 1609238LLU;
	uint64_t t108 = 485473143175LLU;

    t108 = ((x441+(x442>x443))^x444);

    if (t108 != 1611849LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x445 = INT32_MAX;
	volatile int32_t x447 = INT32_MAX;
	static uint8_t x448 = 8U;

    t109 = ((x445+(x446>x447))^x448);

    if (t109 != 2147483639) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x450 = 63210LLU;
	static uint64_t x451 = 63762508LLU;
	uint16_t x452 = 198U;
	volatile int32_t t110 = -4713;

    t110 = ((x449+(x450>x451))^x452);

    if (t110 != 185) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x453 = INT32_MAX;
	volatile int16_t x454 = 0;
	uint32_t x455 = 0U;
	int64_t x456 = 1380616113792552LL;
	int64_t t111 = -230866625645030312LL;

    t111 = ((x453+(x454>x455))^x456);

    if (t111 != 1380616213322199LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x457 = INT8_MIN;
	int64_t x458 = INT64_MAX;
	uint16_t x459 = 4U;
	int32_t x460 = INT32_MIN;
	int32_t t112 = -378255924;

    t112 = ((x457+(x458>x459))^x460);

    if (t112 != 2147483521) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x461 = 206296216874421LLU;
	static volatile uint64_t x462 = 5200093LLU;
	static volatile uint16_t x463 = 66U;
	uint16_t x464 = 58U;
	uint64_t t113 = 12893378LLU;

    t113 = ((x461+(x462>x463))^x464);

    if (t113 != 206296216874380LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x465 = -1;
	static int32_t x466 = -96;
	int64_t x467 = -1LL;
	volatile uint16_t x468 = UINT16_MAX;
	int32_t t114 = 2388767;

    t114 = ((x465+(x466>x467))^x468);

    if (t114 != -65536) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x470 = INT8_MIN;
	int16_t x471 = 5;
	volatile int8_t x472 = -1;
	static volatile int64_t t115 = 315LL;

    t115 = ((x469+(x470>x471))^x472);

    if (t115 != 0LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x474 = -1;

    t116 = ((x473+(x474>x475))^x476);

    if (t116 != 117794555) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x477 = INT16_MIN;
	volatile uint8_t x478 = UINT8_MAX;
	uint64_t x479 = 59654794LLU;
	static int32_t x480 = INT32_MIN;
	static int32_t t117 = 48470516;

    t117 = ((x477+(x478>x479))^x480);

    if (t117 != 2147450880) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x481 = INT16_MIN;
	int16_t x483 = -1;
	static int8_t x484 = INT8_MIN;
	volatile int32_t t118 = 14221315;

    t118 = ((x481+(x482>x483))^x484);

    if (t118 != 32640) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x485 = -3313;
	int32_t x487 = INT32_MIN;
	volatile int64_t x488 = INT64_MAX;
	int64_t t119 = -450775059937176985LL;

    t119 = ((x485+(x486>x487))^x488);

    if (t119 != -9223372036854772497LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x489 = INT32_MIN;
	int8_t x491 = -1;
	int8_t x492 = 37;
	volatile int32_t t120 = -6596016;

    t120 = ((x489+(x490>x491))^x492);

    if (t120 != -2147483611) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x493 = INT32_MAX;
	uint16_t x494 = 11407U;
	uint64_t x495 = 2996242967916LLU;
	volatile int64_t t121 = 5LL;

    t121 = ((x493+(x494>x495))^x496);

    if (t121 != 2147483641LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x498 = -1;
	int64_t x500 = -1LL;
	volatile int64_t t122 = 4151910492060899359LL;

    t122 = ((x497+(x498>x499))^x500);

    if (t122 != 0LL) { NG(); } else { ; }
	
}

void f123(void) {
    	int64_t x501 = -1LL;
	int8_t x502 = INT8_MIN;
	int8_t x503 = INT8_MIN;
	int16_t x504 = 12911;
	int64_t t123 = 8894281LL;

    t123 = ((x501+(x502>x503))^x504);

    if (t123 != -12912LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x505 = INT16_MIN;
	int16_t x506 = INT16_MAX;
	int16_t x507 = 8;
	int8_t x508 = INT8_MAX;

    t124 = ((x505+(x506>x507))^x508);

    if (t124 != -32642) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x513 = INT8_MIN;
	int8_t x514 = 1;
	uint16_t x515 = 8U;
	uint16_t x516 = 8156U;

    t125 = ((x513+(x514>x515))^x516);

    if (t125 != -8100) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x518 = INT64_MAX;
	volatile int32_t x519 = 36714;
	int8_t x520 = 1;
	static volatile int32_t t126 = -528393823;

    t126 = ((x517+(x518>x519))^x520);

    if (t126 != 15) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x521 = INT32_MAX;
	uint32_t x522 = 284214525U;
	int32_t x523 = -1;
	int32_t t127 = -3;

    t127 = ((x521+(x522>x523))^x524);

    if (t127 != 2147482128) { NG(); } else { ; }
	
}

void f128(void) {
    	int16_t x525 = -9;
	volatile int32_t x526 = INT32_MIN;
	uint32_t x527 = 927U;
	static volatile int32_t t128 = 1971331;

    t128 = ((x525+(x526>x527))^x528);

    if (t128 != -2147483641) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x529 = INT32_MIN;
	uint16_t x530 = UINT16_MAX;
	int16_t x532 = INT16_MIN;
	volatile int32_t t129 = -62254;

    t129 = ((x529+(x530>x531))^x532);

    if (t129 != 2147450881) { NG(); } else { ; }
	
}

void f130(void) {
    	uint16_t x534 = 488U;
	int16_t x536 = INT16_MIN;
	static volatile int32_t t130 = -85;

    t130 = ((x533+(x534>x535))^x536);

    if (t130 != -31187) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x537 = UINT64_MAX;
	int64_t x538 = -2LL;
	int16_t x540 = INT16_MIN;
	uint64_t t131 = 372244LLU;

    t131 = ((x537+(x538>x539))^x540);

    if (t131 != 32767LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x541 = -1;
	int64_t x542 = INT64_MIN;
	int64_t x543 = INT64_MIN;
	int64_t x544 = -1LL;
	int64_t t132 = -5043540305LL;

    t132 = ((x541+(x542>x543))^x544);

    if (t132 != 0LL) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint32_t x545 = UINT32_MAX;
	volatile uint8_t x546 = 4U;
	uint32_t x547 = 105U;
	uint32_t x548 = 985U;

    t133 = ((x545+(x546>x547))^x548);

    if (t133 != 4294966310U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x549 = 3U;
	static int8_t x550 = INT8_MIN;
	uint32_t x551 = 51U;
	static int64_t x552 = -1LL;
	volatile int64_t t134 = 8887147LL;

    t134 = ((x549+(x550>x551))^x552);

    if (t134 != -5LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x553 = 7U;
	int64_t x556 = -360717426805790LL;
	volatile int64_t t135 = -248327282734100LL;

    t135 = ((x553+(x554>x555))^x556);

    if (t135 != -360717426805782LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x559 = 69921924714752315LL;
	static int8_t x560 = 1;
	volatile int32_t t136 = 32002;

    t136 = ((x557+(x558>x559))^x560);

    if (t136 != -32767) { NG(); } else { ; }
	
}

void f137(void) {
    	static int32_t x561 = INT32_MIN;
	volatile int8_t x562 = INT8_MAX;
	static uint64_t x563 = UINT64_MAX;
	static volatile uint16_t x564 = 9U;
	static volatile int32_t t137 = 1;

    t137 = ((x561+(x562>x563))^x564);

    if (t137 != -2147483639) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x565 = -15146899LL;
	static volatile int64_t x567 = -1LL;
	static int64_t x568 = 7493102785144559LL;
	volatile int64_t t138 = 910093261362627984LL;

    t138 = ((x565+(x566>x567))^x568);

    if (t138 != -7493102774335871LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint8_t x569 = 100U;
	int16_t x570 = INT16_MIN;
	static uint64_t x571 = UINT64_MAX;
	int32_t x572 = INT32_MIN;
	int32_t t139 = 2908;

    t139 = ((x569+(x570>x571))^x572);

    if (t139 != -2147483548) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x573 = -48476;
	int8_t x574 = 1;
	static volatile int16_t x575 = INT16_MIN;
	int64_t t140 = 305057883561LL;

    t140 = ((x573+(x574>x575))^x576);

    if (t140 != -99139LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x577 = 1179198053897LL;
	static int16_t x578 = INT16_MIN;
	int64_t x579 = INT64_MAX;
	int8_t x580 = INT8_MAX;
	static int64_t t141 = -148875642LL;

    t141 = ((x577+(x578>x579))^x580);

    if (t141 != 1179198054006LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x581 = UINT8_MAX;
	uint8_t x582 = UINT8_MAX;
	int64_t x583 = 1002198LL;
	volatile int32_t t142 = 2604846;

    t142 = ((x581+(x582>x583))^x584);

    if (t142 != -129) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x585 = -1;
	volatile uint16_t x586 = 455U;
	int32_t x587 = INT32_MAX;
	static int8_t x588 = INT8_MIN;
	static volatile int32_t t143 = -199;

    t143 = ((x585+(x586>x587))^x588);

    if (t143 != 127) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x589 = -1;
	int32_t x591 = INT32_MIN;
	int32_t t144 = 37822;

    t144 = ((x589+(x590>x591))^x592);

    if (t144 != -128) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x593 = 120502;
	uint8_t x594 = 1U;
	int8_t x595 = -1;
	int8_t x596 = -1;
	volatile int32_t t145 = 467;

    t145 = ((x593+(x594>x595))^x596);

    if (t145 != -120504) { NG(); } else { ; }
	
}

void f146(void) {
    	static volatile uint8_t x597 = 8U;
	uint8_t x598 = 31U;
	int8_t x599 = -1;
	static int16_t x600 = INT16_MIN;
	static int32_t t146 = -123905740;

    t146 = ((x597+(x598>x599))^x600);

    if (t146 != -32759) { NG(); } else { ; }
	
}

void f147(void) {
    	uint32_t x601 = 127U;
	static int64_t x602 = 4159452017576LL;
	int8_t x603 = 47;
	int32_t x604 = INT32_MAX;

    t147 = ((x601+(x602>x603))^x604);

    if (t147 != 2147483519U) { NG(); } else { ; }
	
}

void f148(void) {
    	int16_t x605 = INT16_MIN;
	static uint64_t x606 = 55156439621854552LLU;
	int64_t x607 = -1LL;
	int16_t x608 = -438;
	volatile int32_t t148 = -56;

    t148 = ((x605+(x606>x607))^x608);

    if (t148 != 32330) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x609 = 3U;
	int8_t x610 = -2;
	int32_t x611 = INT32_MIN;
	int32_t x612 = -1;

    t149 = ((x609+(x610>x611))^x612);

    if (t149 != 4294967291U) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x613 = 1;
	uint16_t x614 = 976U;
	static int8_t x616 = INT8_MIN;
	static volatile int32_t t150 = -266363260;

    t150 = ((x613+(x614>x615))^x616);

    if (t150 != -127) { NG(); } else { ; }
	
}

void f151(void) {
    	static int32_t x617 = -52738664;
	int16_t x618 = -1;
	static volatile int32_t x619 = INT32_MAX;
	volatile int32_t t151 = -1043476;

    t151 = ((x617+(x618>x619))^x620);

    if (t151 != -2094744985) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x621 = 810404463U;
	uint64_t x623 = UINT64_MAX;
	static int8_t x624 = INT8_MAX;

    t152 = ((x621+(x622>x623))^x624);

    if (t152 != 810404368U) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile uint16_t x625 = 19U;
	uint8_t x628 = UINT8_MAX;
	volatile int32_t t153 = 87980;

    t153 = ((x625+(x626>x627))^x628);

    if (t153 != 236) { NG(); } else { ; }
	
}

void f154(void) {
    	uint16_t x629 = UINT16_MAX;
	uint64_t x631 = 47534297089338LLU;
	int32_t x632 = -41811;
	volatile int32_t t154 = 31;

    t154 = ((x629+(x630>x631))^x632);

    if (t154 != -23726) { NG(); } else { ; }
	
}

void f155(void) {
    	static int8_t x633 = -1;
	uint64_t x634 = 2LLU;
	uint8_t x635 = 46U;

    t155 = ((x633+(x634>x635))^x636);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x637 = -15;
	int8_t x638 = -2;
	int16_t x639 = INT16_MAX;
	int32_t x640 = 68547372;
	int32_t t156 = -79;

    t156 = ((x637+(x638>x639))^x640);

    if (t156 != -68547363) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile uint32_t x641 = 6U;
	uint8_t x642 = UINT8_MAX;
	static volatile int16_t x643 = INT16_MIN;
	static volatile int64_t x644 = INT64_MAX;
	int64_t t157 = -468LL;

    t157 = ((x641+(x642>x643))^x644);

    if (t157 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f158(void) {
    	static int8_t x645 = INT8_MIN;
	int64_t x646 = -1LL;
	int16_t x647 = -1;
	int64_t x648 = INT64_MIN;

    t158 = ((x645+(x646>x647))^x648);

    if (t158 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint8_t x650 = 1U;
	int16_t x651 = -1;
	volatile int16_t x652 = 8;
	volatile uint64_t t159 = 1LLU;

    t159 = ((x649+(x650>x651))^x652);

    if (t159 != 570319910181825LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x654 = INT16_MAX;
	uint16_t x655 = UINT16_MAX;
	static volatile uint8_t x656 = 62U;

    t160 = ((x653+(x654>x655))^x656);

    if (t160 != 647478U) { NG(); } else { ; }
	
}

void f161(void) {
    	int64_t x657 = INT64_MIN;
	volatile uint64_t x658 = UINT64_MAX;
	volatile int16_t x659 = INT16_MIN;
	uint16_t x660 = UINT16_MAX;
	int64_t t161 = -268933705285654LL;

    t161 = ((x657+(x658>x659))^x660);

    if (t161 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint16_t x662 = 5104U;
	int16_t x663 = INT16_MAX;
	static int8_t x664 = -1;
	volatile uint32_t t162 = 4U;

    t162 = ((x661+(x662>x663))^x664);

    if (t162 != 4294967237U) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x665 = INT16_MIN;
	volatile int8_t x666 = INT8_MIN;
	static uint64_t x667 = 24323851LLU;
	volatile int8_t x668 = INT8_MAX;

    t163 = ((x665+(x666>x667))^x668);

    if (t163 != -32642) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x669 = INT16_MAX;
	int16_t x671 = -1;
	volatile int64_t x672 = INT64_MAX;

    t164 = ((x669+(x670>x671))^x672);

    if (t164 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int64_t x674 = -1LL;
	int16_t x675 = -47;
	static uint16_t x676 = UINT16_MAX;

    t165 = ((x673+(x674>x675))^x676);

    if (t165 != -2147418114) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int64_t x677 = -1LL;
	static int32_t x680 = INT32_MAX;
	volatile int64_t t166 = 7395618217477LL;

    t166 = ((x677+(x678>x679))^x680);

    if (t166 != 2147483647LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint64_t x683 = 17568LLU;
	int32_t x684 = -1;
	int32_t t167 = 1;

    t167 = ((x681+(x682>x683))^x684);

    if (t167 != 2147483646) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x685 = INT64_MIN;
	int8_t x686 = INT8_MIN;
	int64_t x687 = -119342677464204LL;
	static int64_t t168 = 148082320212952LL;

    t168 = ((x685+(x686>x687))^x688);

    if (t168 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static int32_t x689 = INT32_MIN;
	volatile uint16_t x690 = 38U;
	volatile int32_t x692 = -1;
	static volatile int32_t t169 = INT32_MAX;

    t169 = ((x689+(x690>x691))^x692);

    if (t169 != INT32_MAX) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x693 = -230434237683159187LL;
	int32_t x695 = -236641;
	volatile int32_t x696 = INT32_MAX;
	int64_t t170 = 250564309716749187LL;

    t170 = ((x693+(x694>x695))^x696);

    if (t170 != -230434236569399151LL) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint16_t x697 = 0U;
	static int8_t x698 = -2;

    t171 = ((x697+(x698>x699))^x700);

    if (t171 != 239292148) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint16_t x701 = 3240U;
	volatile int64_t x702 = -1LL;
	static volatile int64_t x703 = 4982214046324311LL;
	uint32_t x704 = 13013U;

    t172 = ((x701+(x702>x703))^x704);

    if (t172 != 15997U) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile int16_t x705 = -1;
	int32_t x706 = INT32_MAX;
	uint8_t x707 = 0U;
	volatile int32_t x708 = 7;
	volatile int32_t t173 = -9043876;

    t173 = ((x705+(x706>x707))^x708);

    if (t173 != 7) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x709 = UINT16_MAX;
	volatile int64_t x710 = -1LL;
	static int32_t x711 = 0;
	int8_t x712 = INT8_MIN;
	volatile int32_t t174 = 2215;

    t174 = ((x709+(x710>x711))^x712);

    if (t174 != -65409) { NG(); } else { ; }
	
}

void f175(void) {
    	static int64_t x713 = 24264739LL;
	uint16_t x714 = UINT16_MAX;
	static volatile int32_t x715 = -34;
	int64_t x716 = 67084797966134456LL;
	volatile int64_t t175 = -8619937593968LL;

    t175 = ((x713+(x714>x715))^x716);

    if (t175 != 67084797988301980LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x717 = -587712300534201LL;
	int16_t x718 = 20;
	volatile int16_t x719 = INT16_MIN;
	int8_t x720 = INT8_MIN;
	static int64_t t176 = -14LL;

    t176 = ((x717+(x718>x719))^x720);

    if (t176 != 587712300534216LL) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x721 = INT64_MIN;
	int64_t x722 = INT64_MIN;
	int64_t x723 = -1LL;
	volatile int64_t t177 = 949299219006LL;

    t177 = ((x721+(x722>x723))^x724);

    if (t177 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint16_t x725 = 9U;
	int32_t x726 = -1;
	static uint64_t x727 = 433046475002LLU;
	int32_t t178 = -32;

    t178 = ((x725+(x726>x727))^x728);

    if (t178 != 8) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint64_t x729 = 2463LLU;
	int32_t x730 = INT32_MIN;
	int16_t x731 = INT16_MAX;
	static int8_t x732 = 3;
	volatile uint64_t t179 = 2410496494740LLU;

    t179 = ((x729+(x730>x731))^x732);

    if (t179 != 2460LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x733 = -1;
	uint64_t x735 = 146450549LLU;
	int16_t x736 = INT16_MAX;
	volatile int32_t t180 = -108392123;

    t180 = ((x733+(x734>x735))^x736);

    if (t180 != 32767) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x737 = -1;
	static int32_t x738 = INT32_MIN;
	static int8_t x739 = INT8_MIN;
	int64_t x740 = INT64_MAX;
	volatile int64_t t181 = INT64_MIN;

    t181 = ((x737+(x738>x739))^x740);

    if (t181 != INT64_MIN) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x741 = 1;
	int16_t x742 = INT16_MIN;
	int64_t x743 = 8989227LL;
	static int16_t x744 = -1;
	volatile int32_t t182 = 1;

    t182 = ((x741+(x742>x743))^x744);

    if (t182 != -2) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x745 = 0;
	uint64_t x746 = UINT64_MAX;
	static volatile int32_t x747 = INT32_MIN;
	int16_t x748 = INT16_MAX;
	static volatile int32_t t183 = 21;

    t183 = ((x745+(x746>x747))^x748);

    if (t183 != 32766) { NG(); } else { ; }
	
}

void f184(void) {
    	static int64_t x749 = INT64_MIN;
	static volatile uint64_t t184 = 241008719LLU;

    t184 = ((x749+(x750>x751))^x752);

    if (t184 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x753 = 185;
	uint8_t x755 = 3U;
	uint32_t x756 = 38936U;
	volatile uint32_t t185 = 681520U;

    t185 = ((x753+(x754>x755))^x756);

    if (t185 != 39074U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x757 = -1;
	int64_t x759 = INT64_MIN;
	static uint64_t x760 = 225677LLU;
	uint64_t t186 = 965LLU;

    t186 = ((x757+(x758>x759))^x760);

    if (t186 != 225677LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x761 = INT16_MIN;
	int8_t x763 = -2;
	int16_t x764 = INT16_MIN;
	volatile int32_t t187 = 2888;

    t187 = ((x761+(x762>x763))^x764);

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int8_t x767 = INT8_MIN;
	int16_t x768 = 0;
	volatile int32_t t188 = -1;

    t188 = ((x765+(x766>x767))^x768);

    if (t188 != 10993) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x769 = 7U;
	int8_t x770 = -1;
	volatile uint32_t x771 = 48140356U;
	static int16_t x772 = -1;
	static volatile uint32_t t189 = 4U;

    t189 = ((x769+(x770>x771))^x772);

    if (t189 != 4294967287U) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x773 = -1;
	uint64_t x774 = UINT64_MAX;
	static int16_t x775 = -1;
	int8_t x776 = -1;

    t190 = ((x773+(x774>x775))^x776);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x777 = -1LL;
	static volatile uint16_t x778 = UINT16_MAX;
	int16_t x779 = -1;
	int16_t x780 = INT16_MIN;
	static volatile int64_t t191 = 31LL;

    t191 = ((x777+(x778>x779))^x780);

    if (t191 != -32768LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x781 = 12064U;
	static int32_t x783 = INT32_MAX;
	volatile uint16_t x784 = 0U;

    t192 = ((x781+(x782>x783))^x784);

    if (t192 != 12064) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile int64_t x786 = INT64_MIN;
	volatile uint32_t x787 = UINT32_MAX;
	int16_t x788 = INT16_MIN;
	volatile int32_t t193 = 165227895;

    t193 = ((x785+(x786>x787))^x788);

    if (t193 != -30610) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x790 = INT32_MIN;
	static uint32_t x792 = 1705962U;
	volatile uint32_t t194 = 884U;

    t194 = ((x789+(x790>x791))^x792);

    if (t194 != 2149189610U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x793 = UINT8_MAX;
	int32_t x794 = 11969;
	uint8_t x795 = UINT8_MAX;
	int8_t x796 = 0;
	volatile int32_t t195 = 1;

    t195 = ((x793+(x794>x795))^x796);

    if (t195 != 256) { NG(); } else { ; }
	
}

void f196(void) {
    	static int32_t x797 = -1;
	int64_t x798 = 8438862LL;
	static int64_t x799 = 42LL;
	static int8_t x800 = -1;
	volatile int32_t t196 = 830;

    t196 = ((x797+(x798>x799))^x800);

    if (t196 != -1) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x801 = 1388;
	int64_t x802 = -1833114660333462971LL;
	int16_t x803 = INT16_MIN;
	uint64_t x804 = 242005233903118LLU;
	volatile uint64_t t197 = 2099917045199LLU;

    t197 = ((x801+(x802>x803))^x804);

    if (t197 != 242005233902434LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	uint16_t x805 = UINT16_MAX;
	uint64_t x807 = UINT64_MAX;
	static int32_t x808 = -339433976;
	volatile int32_t t198 = -1820;

    t198 = ((x805+(x806>x807))^x808);

    if (t198 != -339453449) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int32_t x810 = INT32_MIN;
	int64_t x812 = INT64_MAX;
	volatile int64_t t199 = 565153655398049988LL;

    t199 = ((x809+(x810>x811))^x812);

    if (t199 != 9223372036854775637LL) { NG(); } else { ; }
	
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

