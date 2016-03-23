
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

static int8_t x5 = -1;
int16_t x18 = 26;
int64_t t3 = -178604920835LL;
int32_t x22 = -1325741;
int8_t x24 = -25;
int8_t x25 = INT8_MIN;
int64_t x26 = INT64_MAX;
int64_t x34 = 8575679LL;
int16_t x35 = -1;
volatile int16_t x36 = INT16_MIN;
volatile int64_t t8 = -1004279LL;
int8_t x41 = INT8_MIN;
int8_t x42 = -1;
uint8_t x45 = 33U;
volatile int64_t t11 = 12252091LL;
int64_t x59 = -1LL;
int16_t x60 = -1;
int32_t t14 = 1;
uint16_t x77 = 23961U;
int32_t x82 = INT32_MIN;
int8_t x84 = -1;
volatile uint32_t x85 = UINT32_MAX;
uint64_t x87 = 5084805213246404LLU;
int16_t x89 = INT16_MAX;
int32_t x95 = INT32_MAX;
static int64_t x99 = -1LL;
int32_t x103 = INT32_MAX;
volatile uint64_t t23 = 138038138333040LLU;
int32_t x105 = -1;
int64_t x111 = -3923LL;
uint16_t x116 = 6427U;
int32_t t26 = 783304632;
int16_t x127 = 5342;
int32_t x128 = INT32_MIN;
volatile int8_t x133 = INT8_MIN;
int16_t x143 = INT16_MAX;
volatile int32_t t34 = -7;
uint64_t x151 = 1155309086LLU;
uint32_t x163 = UINT32_MAX;
volatile int32_t t39 = 7978223;
static volatile int32_t t41 = 122062993;
int64_t t42 = -805160775LL;
uint8_t x185 = 61U;
int8_t x187 = INT8_MIN;
uint8_t x194 = 1U;
static uint16_t x196 = 32462U;
int16_t x200 = INT16_MAX;
int16_t x204 = INT16_MIN;
volatile int64_t t50 = 1017706212766508LL;
uint8_t x221 = UINT8_MAX;
volatile int32_t t53 = 8422;
uint32_t x233 = 570000U;
int64_t x236 = -1LL;
static volatile int32_t t56 = -229201865;
int64_t x249 = -1046485764LL;
uint8_t x251 = 12U;
int32_t t57 = 59962;
static int16_t x257 = INT16_MAX;
uint8_t x258 = 7U;
uint16_t x261 = 31461U;
int16_t x273 = -12;
int32_t x277 = INT32_MAX;
uint16_t x281 = UINT16_MAX;
uint64_t x282 = UINT64_MAX;
int32_t t64 = -96512756;
static uint8_t x290 = 29U;
static volatile uint64_t x292 = UINT64_MAX;
static uint64_t t66 = UINT64_MAX;
uint32_t t68 = 228U;
volatile uint64_t x303 = 477709227702LLU;
int64_t x304 = -1LL;
volatile int64_t x310 = -391LL;
static int8_t x311 = 0;
int16_t x314 = INT16_MAX;
int32_t x316 = 319621;
static volatile int32_t t73 = 6077;
int16_t x321 = INT16_MIN;
uint8_t x323 = UINT8_MAX;
int64_t x326 = INT64_MIN;
int16_t x328 = -7947;
int64_t x334 = -1LL;
uint32_t t77 = 238U;
int8_t x338 = INT8_MAX;
static int16_t x350 = -1;
uint64_t x354 = UINT64_MAX;
int64_t x357 = INT64_MAX;
int16_t x361 = -1;
static int8_t x365 = -1;
static uint8_t x366 = UINT8_MAX;
int64_t x369 = -1LL;
volatile int16_t x381 = 51;
volatile uint64_t x395 = 104135LLU;
uint8_t x399 = 96U;
int8_t x414 = INT8_MIN;
static int64_t x415 = -1LL;
uint32_t x420 = 296U;
volatile int8_t x421 = INT8_MIN;
volatile int64_t x425 = INT64_MAX;
int8_t x427 = INT8_MIN;
int16_t x428 = -1;
volatile int16_t x429 = INT16_MIN;
volatile uint32_t t100 = 7U;
static volatile int64_t x434 = 1225883390013LL;
int8_t x440 = -1;
static uint32_t x445 = 2074U;
int64_t x447 = INT64_MIN;
int32_t t105 = 18243;
static int64_t x457 = 2178LL;
volatile uint32_t x461 = 1212329U;
uint8_t x462 = UINT8_MAX;
volatile int16_t x463 = 1;
int32_t t107 = -45;
int8_t x469 = 5;
int32_t x471 = INT32_MIN;
int32_t t109 = INT32_MIN;
int64_t x484 = -1LL;
static volatile int64_t x485 = INT64_MIN;
static volatile int32_t t116 = -789;
int16_t x505 = -162;
static volatile int64_t t117 = -1506LL;
int8_t x522 = 12;
int32_t t120 = 1805175;
volatile int16_t x527 = INT16_MAX;
int16_t x530 = INT16_MIN;
int64_t x540 = INT64_MIN;
static int64_t x542 = INT64_MAX;
int16_t x543 = -670;
int8_t x544 = -1;
int64_t x550 = -1LL;
static int32_t x551 = -31435;
static uint64_t x554 = 3150667096LLU;
static int16_t x557 = -1284;
int8_t x562 = INT8_MIN;
static int16_t x564 = -1;
int8_t x569 = INT8_MIN;
volatile int8_t x572 = INT8_MAX;
int8_t x573 = INT8_MAX;
static int32_t x578 = -1;
int32_t x584 = INT32_MAX;
int16_t x589 = -1;
volatile int8_t x591 = 12;
int32_t t135 = -166147;
uint8_t x605 = 54U;
int16_t x614 = 0;
volatile int32_t t139 = -75758;
static int16_t x625 = -10;
int32_t x626 = INT32_MIN;
int64_t x628 = 13891769303555LL;
static volatile int64_t t140 = 16353240399399LL;
int16_t x630 = INT16_MIN;
int16_t x635 = 6729;
volatile uint64_t x638 = UINT64_MAX;
int32_t t143 = -1519144;
int32_t x645 = INT32_MIN;
int32_t x646 = INT32_MAX;
int16_t x648 = INT16_MIN;
static volatile int64_t x652 = -1LL;
static int8_t x657 = INT8_MIN;
static volatile uint32_t t147 = 1345U;
int64_t x662 = INT64_MIN;
int64_t t148 = -182LL;
uint8_t x667 = 20U;
uint8_t x668 = 1U;
static volatile uint16_t x677 = 5374U;
int64_t x678 = INT64_MAX;
int16_t x683 = INT16_MAX;
volatile int16_t x685 = INT16_MAX;
int64_t x686 = 725394595394608LL;
static int8_t x697 = 21;
uint64_t x711 = 175840152328873LLU;
volatile int8_t x715 = 0;
int8_t x720 = INT8_MAX;
int32_t t162 = -262;
uint8_t x724 = 102U;
int64_t x741 = INT64_MAX;
uint32_t x744 = UINT32_MAX;
uint64_t x750 = 749832297632690694LLU;
volatile uint64_t x751 = UINT64_MAX;
static uint32_t x754 = UINT32_MAX;
static uint32_t x765 = 358571U;
static int16_t x770 = INT16_MIN;
uint32_t x771 = UINT32_MAX;
int8_t x782 = INT8_MIN;
volatile int64_t x788 = INT64_MIN;
static uint64_t t177 = 987449739LLU;
uint64_t t179 = 272LLU;
int32_t x802 = INT32_MIN;
uint64_t x804 = 20361497893372993LLU;
volatile int16_t x807 = INT16_MAX;
volatile int32_t t181 = 3;
int32_t x819 = INT32_MIN;
int16_t x831 = -6488;
static uint8_t x832 = 0U;
int64_t t188 = 213317LL;
static int32_t x842 = 2;
uint64_t t189 = 212229936LLU;
volatile int8_t x855 = INT8_MIN;
static volatile uint64_t x870 = 99786685716021347LLU;
static uint16_t x876 = 5U;
int32_t t196 = -252;
static volatile uint16_t x879 = 0U;
static uint32_t x880 = UINT32_MAX;
int64_t t199 = -23881495045LL;


void f0(void) {
    	int32_t x6 = -1;
	int32_t x7 = -242050;
	int64_t x8 = -11811171467298804LL;
	volatile int64_t t0 = 16883192944612870LL;

    t0 = (((x5>x6)+x7)+x8);

    if (t0 != -11811171467540854LL) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x9 = 10U;
	static int64_t x10 = 5524LL;
	int8_t x11 = INT8_MIN;
	int64_t x12 = INT64_MAX;
	volatile int64_t t1 = 342062359722LL;

    t1 = (((x9>x10)+x11)+x12);

    if (t1 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x13 = INT8_MIN;
	int8_t x14 = INT8_MIN;
	int16_t x15 = -1;
	uint8_t x16 = UINT8_MAX;
	volatile int32_t t2 = 1;

    t2 = (((x13>x14)+x15)+x16);

    if (t2 != 254) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x17 = 43841902U;
	volatile int8_t x19 = 1;
	int64_t x20 = INT64_MIN;

    t3 = (((x17>x18)+x19)+x20);

    if (t3 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x21 = INT64_MAX;
	uint16_t x23 = 358U;
	int32_t t4 = -2;

    t4 = (((x21>x22)+x23)+x24);

    if (t4 != 334) { NG(); } else { ; }
	
}

void f5(void) {
    	int32_t x27 = INT32_MIN;
	static int64_t x28 = -1LL;
	static int64_t t5 = -411678930162300998LL;

    t5 = (((x25>x26)+x27)+x28);

    if (t5 != -2147483649LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x29 = 0;
	static volatile int8_t x30 = INT8_MIN;
	int8_t x31 = INT8_MIN;
	int16_t x32 = 972;
	int32_t t6 = -156;

    t6 = (((x29>x30)+x31)+x32);

    if (t6 != 845) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile int8_t x33 = -4;
	int32_t t7 = -24202841;

    t7 = (((x33>x34)+x35)+x36);

    if (t7 != -32769) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x37 = 1551325014258432019LL;
	int8_t x38 = INT8_MAX;
	int64_t x39 = -30493026037885LL;
	uint16_t x40 = UINT16_MAX;

    t8 = (((x37>x38)+x39)+x40);

    if (t8 != -30493025972349LL) { NG(); } else { ; }
	
}

void f9(void) {
    	uint32_t x43 = UINT32_MAX;
	int32_t x44 = 384131;
	volatile uint32_t t9 = 17285U;

    t9 = (((x41>x42)+x43)+x44);

    if (t9 != 384130U) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x46 = 17917841101LLU;
	int32_t x47 = -2006451;
	volatile int64_t x48 = -1LL;
	int64_t t10 = -41LL;

    t10 = (((x45>x46)+x47)+x48);

    if (t10 != -2006452LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x49 = -1;
	static int8_t x50 = -1;
	volatile int64_t x51 = -1LL;
	static int16_t x52 = INT16_MIN;

    t11 = (((x49>x50)+x51)+x52);

    if (t11 != -32769LL) { NG(); } else { ; }
	
}

void f12(void) {
    	int64_t x53 = INT64_MIN;
	uint8_t x54 = 9U;
	int64_t x55 = INT64_MIN;
	uint16_t x56 = 1U;
	int64_t t12 = -1788LL;

    t12 = (((x53>x54)+x55)+x56);

    if (t12 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x57 = INT16_MIN;
	static int16_t x58 = -1;
	static volatile int64_t t13 = -1LL;

    t13 = (((x57>x58)+x59)+x60);

    if (t13 != -2LL) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint8_t x61 = UINT8_MAX;
	static int32_t x62 = INT32_MIN;
	int32_t x63 = 3;
	uint16_t x64 = UINT16_MAX;

    t14 = (((x61>x62)+x63)+x64);

    if (t14 != 65539) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x65 = INT32_MIN;
	volatile int32_t x66 = INT32_MIN;
	static int64_t x67 = INT64_MAX;
	int32_t x68 = -30601;
	static volatile int64_t t15 = -68607490665098LL;

    t15 = (((x65>x66)+x67)+x68);

    if (t15 != 9223372036854745206LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile int8_t x69 = 9;
	uint16_t x70 = UINT16_MAX;
	int32_t x71 = INT32_MIN;
	volatile int32_t x72 = 22088940;
	volatile int32_t t16 = 13;

    t16 = (((x69>x70)+x71)+x72);

    if (t16 != -2125394708) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x78 = 0;
	uint16_t x79 = 2U;
	static uint64_t x80 = UINT64_MAX;
	uint64_t t17 = 1469019842290951482LLU;

    t17 = (((x77>x78)+x79)+x80);

    if (t17 != 2LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x81 = UINT32_MAX;
	volatile uint16_t x83 = 52U;
	volatile int32_t t18 = 803573;

    t18 = (((x81>x82)+x83)+x84);

    if (t18 != 52) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint64_t x86 = 67724648439345LLU;
	static int8_t x88 = INT8_MIN;
	volatile uint64_t t19 = 901581839347348764LLU;

    t19 = (((x85>x86)+x87)+x88);

    if (t19 != 5084805213246276LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile int8_t x90 = INT8_MIN;
	int32_t x91 = 0;
	uint32_t x92 = 568963926U;
	static volatile uint32_t t20 = 28U;

    t20 = (((x89>x90)+x91)+x92);

    if (t20 != 568963927U) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x93 = -1;
	uint8_t x94 = 1U;
	int8_t x96 = INT8_MIN;
	volatile int32_t t21 = 0;

    t21 = (((x93>x94)+x95)+x96);

    if (t21 != 2147483519) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x97 = INT16_MAX;
	int64_t x98 = INT64_MIN;
	int16_t x100 = INT16_MIN;
	static volatile int64_t t22 = -62262LL;

    t22 = (((x97>x98)+x99)+x100);

    if (t22 != -32768LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int8_t x101 = INT8_MIN;
	int32_t x102 = INT32_MAX;
	uint64_t x104 = 10908780920LLU;

    t23 = (((x101>x102)+x103)+x104);

    if (t23 != 13056264567LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x106 = 10755068851LLU;
	uint8_t x107 = 40U;
	int16_t x108 = 153;
	volatile int32_t t24 = 11169;

    t24 = (((x105>x106)+x107)+x108);

    if (t24 != 194) { NG(); } else { ; }
	
}

void f25(void) {
    	uint8_t x109 = 2U;
	int32_t x110 = INT32_MAX;
	uint16_t x112 = 1830U;
	volatile int64_t t25 = 474476852239487036LL;

    t25 = (((x109>x110)+x111)+x112);

    if (t25 != -2093LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static volatile int8_t x113 = INT8_MIN;
	int8_t x114 = INT8_MAX;
	uint16_t x115 = 3U;

    t26 = (((x113>x114)+x115)+x116);

    if (t26 != 6430) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x117 = INT16_MIN;
	uint64_t x118 = UINT64_MAX;
	volatile int64_t x119 = INT64_MIN;
	static int16_t x120 = INT16_MAX;
	volatile int64_t t27 = -4243973642962LL;

    t27 = (((x117>x118)+x119)+x120);

    if (t27 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x121 = 7;
	volatile int32_t x122 = INT32_MIN;
	int64_t x123 = -1LL;
	int16_t x124 = INT16_MAX;
	int64_t t28 = 5536656339254015LL;

    t28 = (((x121>x122)+x123)+x124);

    if (t28 != 32767LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x125 = -138842LL;
	static int16_t x126 = -1;
	static volatile int32_t t29 = 5910;

    t29 = (((x125>x126)+x127)+x128);

    if (t29 != -2147478306) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x129 = INT32_MIN;
	volatile uint64_t x130 = UINT64_MAX;
	static volatile int16_t x131 = INT16_MAX;
	static uint64_t x132 = 99937LLU;
	volatile uint64_t t30 = 470429950LLU;

    t30 = (((x129>x130)+x131)+x132);

    if (t30 != 132704LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x134 = -1;
	volatile int8_t x135 = INT8_MIN;
	int8_t x136 = -1;
	volatile int32_t t31 = -2;

    t31 = (((x133>x134)+x135)+x136);

    if (t31 != -129) { NG(); } else { ; }
	
}

void f32(void) {
    	static int8_t x137 = INT8_MIN;
	uint32_t x138 = 11207U;
	int64_t x139 = -1LL;
	uint64_t x140 = UINT64_MAX;
	volatile uint64_t t32 = UINT64_MAX;

    t32 = (((x137>x138)+x139)+x140);

    if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int64_t x141 = INT64_MIN;
	static int16_t x142 = -1;
	static int64_t x144 = -1LL;
	static volatile int64_t t33 = 200584896208LL;

    t33 = (((x141>x142)+x143)+x144);

    if (t33 != 32766LL) { NG(); } else { ; }
	
}

void f34(void) {
    	uint32_t x145 = 516119257U;
	int16_t x146 = INT16_MAX;
	uint16_t x147 = 793U;
	volatile uint16_t x148 = 586U;

    t34 = (((x145>x146)+x147)+x148);

    if (t34 != 1380) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint8_t x149 = 41U;
	int64_t x150 = -166413LL;
	static int64_t x152 = INT64_MIN;
	volatile uint64_t t35 = 5955477946LLU;

    t35 = (((x149>x150)+x151)+x152);

    if (t35 != 9223372038010084895LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int32_t x153 = INT32_MIN;
	int32_t x154 = -1;
	volatile uint64_t x155 = UINT64_MAX;
	int8_t x156 = INT8_MAX;
	static volatile uint64_t t36 = 2885711LLU;

    t36 = (((x153>x154)+x155)+x156);

    if (t36 != 126LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x157 = INT64_MIN;
	uint64_t x158 = 126LLU;
	uint16_t x159 = 0U;
	int8_t x160 = -1;
	volatile int32_t t37 = 0;

    t37 = (((x157>x158)+x159)+x160);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int8_t x161 = -1;
	static int64_t x162 = INT64_MAX;
	uint8_t x164 = 1U;
	static uint32_t t38 = 38U;

    t38 = (((x161>x162)+x163)+x164);

    if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x165 = -1LL;
	static int16_t x166 = 2;
	int8_t x167 = -1;
	uint8_t x168 = 0U;

    t39 = (((x165>x166)+x167)+x168);

    if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x169 = 7760U;
	int32_t x170 = INT32_MAX;
	int64_t x171 = -1LL;
	int64_t x172 = INT64_MAX;
	volatile int64_t t40 = 3254213762536LL;

    t40 = (((x169>x170)+x171)+x172);

    if (t40 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint32_t x173 = 832289U;
	uint8_t x174 = 75U;
	static int32_t x175 = INT32_MIN;
	volatile uint16_t x176 = 6998U;

    t41 = (((x173>x174)+x175)+x176);

    if (t41 != -2147476649) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x177 = -1;
	volatile uint8_t x178 = UINT8_MAX;
	int64_t x179 = INT64_MAX;
	int64_t x180 = -297LL;

    t42 = (((x177>x178)+x179)+x180);

    if (t42 != 9223372036854775510LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x181 = INT32_MAX;
	static int64_t x182 = -1LL;
	static uint16_t x183 = 5U;
	int16_t x184 = INT16_MAX;
	volatile int32_t t43 = -52005;

    t43 = (((x181>x182)+x183)+x184);

    if (t43 != 32773) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x186 = 1;
	static int64_t x188 = -15066916LL;
	int64_t t44 = -72LL;

    t44 = (((x185>x186)+x187)+x188);

    if (t44 != -15067043LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int64_t x189 = INT64_MIN;
	uint64_t x190 = UINT64_MAX;
	int8_t x191 = INT8_MIN;
	static int16_t x192 = 1;
	volatile int32_t t45 = 1;

    t45 = (((x189>x190)+x191)+x192);

    if (t45 != -127) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x193 = INT32_MIN;
	uint32_t x195 = UINT32_MAX;
	static volatile uint32_t t46 = 8887083U;

    t46 = (((x193>x194)+x195)+x196);

    if (t46 != 32461U) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x197 = -1;
	volatile int16_t x198 = INT16_MIN;
	int16_t x199 = INT16_MAX;
	volatile int32_t t47 = -104561;

    t47 = (((x197>x198)+x199)+x200);

    if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x201 = 3U;
	static int64_t x202 = -2929873LL;
	int8_t x203 = INT8_MIN;
	volatile int32_t t48 = -21187;

    t48 = (((x201>x202)+x203)+x204);

    if (t48 != -32895) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x205 = 54828415318168LLU;
	int8_t x206 = 7;
	volatile int8_t x207 = -3;
	int16_t x208 = -1;
	volatile int32_t t49 = -462699;

    t49 = (((x205>x206)+x207)+x208);

    if (t49 != -3) { NG(); } else { ; }
	
}

void f50(void) {
    	static volatile int16_t x213 = INT16_MAX;
	uint8_t x214 = 1U;
	int64_t x215 = -101169591873680LL;
	int8_t x216 = INT8_MIN;

    t50 = (((x213>x214)+x215)+x216);

    if (t50 != -101169591873807LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x217 = 965139LLU;
	int16_t x218 = -1;
	int64_t x219 = 145690LL;
	uint32_t x220 = 31670804U;
	int64_t t51 = -26151296846LL;

    t51 = (((x217>x218)+x219)+x220);

    if (t51 != 31816494LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x222 = 14;
	uint16_t x223 = UINT16_MAX;
	uint8_t x224 = 24U;
	static volatile int32_t t52 = 0;

    t52 = (((x221>x222)+x223)+x224);

    if (t52 != 65560) { NG(); } else { ; }
	
}

void f53(void) {
    	static int16_t x225 = -1;
	int64_t x226 = INT64_MAX;
	static volatile int32_t x227 = 36755979;
	int8_t x228 = INT8_MAX;

    t53 = (((x225>x226)+x227)+x228);

    if (t53 != 36756106) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int32_t x229 = 285;
	static volatile int32_t x230 = -134;
	int64_t x231 = -1LL;
	uint32_t x232 = 5285U;
	volatile int64_t t54 = -471321LL;

    t54 = (((x229>x230)+x231)+x232);

    if (t54 != 5285LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x234 = -189124416;
	static int32_t x235 = INT32_MIN;
	int64_t t55 = -1LL;

    t55 = (((x233>x234)+x235)+x236);

    if (t55 != -2147483649LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x245 = INT16_MAX;
	volatile int32_t x246 = -1;
	static uint8_t x247 = 29U;
	uint8_t x248 = 3U;

    t56 = (((x245>x246)+x247)+x248);

    if (t56 != 33) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x250 = -1151;
	static volatile int32_t x252 = INT32_MIN;

    t57 = (((x249>x250)+x251)+x252);

    if (t57 != -2147483636) { NG(); } else { ; }
	
}

void f58(void) {
    	uint8_t x253 = 15U;
	static uint16_t x254 = UINT16_MAX;
	volatile int64_t x255 = -1LL;
	static int32_t x256 = 101;
	volatile int64_t t58 = -19702107668122LL;

    t58 = (((x253>x254)+x255)+x256);

    if (t58 != 100LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x259 = 0U;
	static uint32_t x260 = 22U;
	uint32_t t59 = 444U;

    t59 = (((x257>x258)+x259)+x260);

    if (t59 != 23U) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x262 = UINT32_MAX;
	uint32_t x263 = 0U;
	uint32_t x264 = 105932U;
	uint32_t t60 = 179U;

    t60 = (((x261>x262)+x263)+x264);

    if (t60 != 105932U) { NG(); } else { ; }
	
}

void f61(void) {
    	static int16_t x269 = -7;
	int64_t x270 = INT64_MIN;
	uint32_t x271 = 1U;
	int32_t x272 = INT32_MIN;
	volatile uint32_t t61 = 1735601U;

    t61 = (((x269>x270)+x271)+x272);

    if (t61 != 2147483650U) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x274 = 56249LL;
	static int16_t x275 = -1922;
	static uint8_t x276 = UINT8_MAX;
	int32_t t62 = 550565388;

    t62 = (((x273>x274)+x275)+x276);

    if (t62 != -1667) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x278 = 2214LLU;
	int8_t x279 = -13;
	int16_t x280 = -1;
	int32_t t63 = 150463;

    t63 = (((x277>x278)+x279)+x280);

    if (t63 != -13) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x283 = 2U;
	int8_t x284 = -42;

    t64 = (((x281>x282)+x283)+x284);

    if (t64 != -40) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x285 = 1;
	static int8_t x286 = INT8_MIN;
	uint32_t x287 = 1845U;
	volatile uint64_t x288 = UINT64_MAX;
	volatile uint64_t t65 = 4599831894778829558LLU;

    t65 = (((x285>x286)+x287)+x288);

    if (t65 != 1845LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint16_t x289 = 21706U;
	static int32_t x291 = -1;

    t66 = (((x289>x290)+x291)+x292);

    if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
    	int32_t x293 = INT32_MIN;
	static int8_t x294 = INT8_MAX;
	static volatile uint32_t x295 = UINT32_MAX;
	volatile uint64_t x296 = 458933882040616213LLU;
	uint64_t t67 = 1964LLU;

    t67 = (((x293>x294)+x295)+x296);

    if (t67 != 458933886335583508LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x297 = -1;
	int8_t x298 = INT8_MAX;
	int32_t x299 = INT32_MAX;
	uint32_t x300 = UINT32_MAX;

    t68 = (((x297>x298)+x299)+x300);

    if (t68 != 2147483646U) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x301 = INT8_MAX;
	int32_t x302 = 123633999;
	volatile uint64_t t69 = 99090349680087LLU;

    t69 = (((x301>x302)+x303)+x304);

    if (t69 != 477709227701LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x305 = INT32_MIN;
	static uint8_t x306 = 0U;
	uint16_t x307 = 2U;
	uint16_t x308 = UINT16_MAX;
	volatile int32_t t70 = -901;

    t70 = (((x305>x306)+x307)+x308);

    if (t70 != 65537) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int8_t x309 = -1;
	int16_t x312 = -2;
	static volatile int32_t t71 = -411;

    t71 = (((x309>x310)+x311)+x312);

    if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x313 = 1U;
	int8_t x315 = INT8_MIN;
	int32_t t72 = 255;

    t72 = (((x313>x314)+x315)+x316);

    if (t72 != 319493) { NG(); } else { ; }
	
}

void f73(void) {
    	static int32_t x317 = -1;
	volatile uint8_t x318 = 41U;
	int16_t x319 = INT16_MIN;
	int8_t x320 = INT8_MIN;

    t73 = (((x317>x318)+x319)+x320);

    if (t73 != -32896) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int16_t x322 = 123;
	uint32_t x324 = UINT32_MAX;
	uint32_t t74 = 4143U;

    t74 = (((x321>x322)+x323)+x324);

    if (t74 != 254U) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x325 = -1;
	volatile uint16_t x327 = 109U;
	int32_t t75 = 0;

    t75 = (((x325>x326)+x327)+x328);

    if (t75 != -7837) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x329 = INT32_MIN;
	static uint64_t x330 = 4LLU;
	static int16_t x331 = INT16_MAX;
	static volatile int8_t x332 = -1;
	volatile int32_t t76 = -11059;

    t76 = (((x329>x330)+x331)+x332);

    if (t76 != 32767) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x333 = 0;
	volatile int8_t x335 = INT8_MIN;
	uint32_t x336 = 225U;

    t77 = (((x333>x334)+x335)+x336);

    if (t77 != 98U) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x337 = INT16_MAX;
	int8_t x339 = INT8_MIN;
	static int8_t x340 = INT8_MIN;
	volatile int32_t t78 = 0;

    t78 = (((x337>x338)+x339)+x340);

    if (t78 != -255) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x341 = -1;
	static int16_t x342 = INT16_MAX;
	int64_t x343 = -44LL;
	int16_t x344 = INT16_MAX;
	volatile int64_t t79 = -225981188669333LL;

    t79 = (((x341>x342)+x343)+x344);

    if (t79 != 32723LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x345 = INT64_MIN;
	volatile int32_t x346 = -1;
	int32_t x347 = INT32_MIN;
	uint16_t x348 = 82U;
	int32_t t80 = 81629875;

    t80 = (((x345>x346)+x347)+x348);

    if (t80 != -2147483566) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int32_t x349 = INT32_MIN;
	uint64_t x351 = UINT64_MAX;
	static uint32_t x352 = 2070732U;
	volatile uint64_t t81 = 5067475475737746896LLU;

    t81 = (((x349>x350)+x351)+x352);

    if (t81 != 2070731LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x353 = -1;
	uint16_t x355 = 1U;
	int16_t x356 = INT16_MIN;
	volatile int32_t t82 = -28;

    t82 = (((x353>x354)+x355)+x356);

    if (t82 != -32767) { NG(); } else { ; }
	
}

void f83(void) {
    	uint64_t x358 = 22597525LLU;
	int8_t x359 = -3;
	uint64_t x360 = UINT64_MAX;
	volatile uint64_t t83 = 105463766LLU;

    t83 = (((x357>x358)+x359)+x360);

    if (t83 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	static int32_t x362 = INT32_MAX;
	volatile int16_t x363 = INT16_MAX;
	int16_t x364 = INT16_MIN;
	static int32_t t84 = 1;

    t84 = (((x361>x362)+x363)+x364);

    if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x367 = INT32_MAX;
	uint64_t x368 = UINT64_MAX;
	uint64_t t85 = 1LLU;

    t85 = (((x365>x366)+x367)+x368);

    if (t85 != 2147483646LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint32_t x370 = 405U;
	static int8_t x371 = -1;
	uint64_t x372 = 151LLU;
	uint64_t t86 = 1821369LLU;

    t86 = (((x369>x370)+x371)+x372);

    if (t86 != 150LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static volatile uint32_t x373 = 215565083U;
	static uint32_t x374 = 1734016U;
	int8_t x375 = 27;
	volatile int8_t x376 = 2;
	volatile int32_t t87 = 561686880;

    t87 = (((x373>x374)+x375)+x376);

    if (t87 != 30) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int8_t x377 = INT8_MIN;
	volatile int16_t x378 = INT16_MAX;
	int32_t x379 = INT32_MAX;
	uint64_t x380 = 660734LLU;
	uint64_t t88 = 267291430424LLU;

    t88 = (((x377>x378)+x379)+x380);

    if (t88 != 2148144381LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x382 = UINT32_MAX;
	static int64_t x383 = INT64_MAX;
	int32_t x384 = -1;
	volatile int64_t t89 = -7137LL;

    t89 = (((x381>x382)+x383)+x384);

    if (t89 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x385 = 0LLU;
	static int8_t x386 = INT8_MAX;
	int8_t x387 = 3;
	static int32_t x388 = -1;
	static int32_t t90 = 258229972;

    t90 = (((x385>x386)+x387)+x388);

    if (t90 != 2) { NG(); } else { ; }
	
}

void f91(void) {
    	uint16_t x393 = 31213U;
	static volatile int64_t x394 = -1LL;
	static uint16_t x396 = 2U;
	uint64_t t91 = 223824777908LLU;

    t91 = (((x393>x394)+x395)+x396);

    if (t91 != 104138LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x397 = 6;
	static int16_t x398 = INT16_MIN;
	uint32_t x400 = 153U;
	static uint32_t t92 = 65535U;

    t92 = (((x397>x398)+x399)+x400);

    if (t92 != 250U) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x401 = INT64_MAX;
	volatile int16_t x402 = INT16_MIN;
	int16_t x403 = INT16_MAX;
	int16_t x404 = -2;
	volatile int32_t t93 = 2636218;

    t93 = (((x401>x402)+x403)+x404);

    if (t93 != 32766) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint8_t x405 = UINT8_MAX;
	static int16_t x406 = INT16_MIN;
	static int16_t x407 = INT16_MAX;
	volatile int32_t x408 = INT32_MIN;
	int32_t t94 = -20660279;

    t94 = (((x405>x406)+x407)+x408);

    if (t94 != -2147450880) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x409 = -3;
	static int64_t x410 = 272538606510291LL;
	volatile int32_t x411 = 26938;
	int16_t x412 = 696;
	int32_t t95 = -1231;

    t95 = (((x409>x410)+x411)+x412);

    if (t95 != 27634) { NG(); } else { ; }
	
}

void f96(void) {
    	static uint16_t x413 = UINT16_MAX;
	static uint64_t x416 = 4995875326LLU;
	uint64_t t96 = 108845LLU;

    t96 = (((x413>x414)+x415)+x416);

    if (t96 != 4995875326LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int32_t x417 = INT32_MIN;
	volatile int64_t x418 = -187840202LL;
	uint64_t x419 = 25716385LLU;
	uint64_t t97 = 6568LLU;

    t97 = (((x417>x418)+x419)+x420);

    if (t97 != 25716681LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int8_t x422 = INT8_MIN;
	int32_t x423 = -1858076;
	uint64_t x424 = UINT64_MAX;
	volatile uint64_t t98 = 2080242258321LLU;

    t98 = (((x421>x422)+x423)+x424);

    if (t98 != 18446744073707693539LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile int16_t x426 = -5536;
	int32_t t99 = -3;

    t99 = (((x425>x426)+x427)+x428);

    if (t99 != -128) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x430 = INT32_MIN;
	static uint32_t x431 = 45063U;
	uint16_t x432 = 261U;

    t100 = (((x429>x430)+x431)+x432);

    if (t100 != 45325U) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x433 = INT32_MAX;
	uint8_t x435 = 2U;
	int64_t x436 = INT64_MIN;
	volatile int64_t t101 = 12508786195LL;

    t101 = (((x433>x434)+x435)+x436);

    if (t101 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x437 = 271;
	int16_t x438 = INT16_MIN;
	int8_t x439 = INT8_MIN;
	static volatile int32_t t102 = 6516;

    t102 = (((x437>x438)+x439)+x440);

    if (t102 != -128) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint8_t x441 = 0U;
	static volatile uint32_t x442 = 58712U;
	volatile uint8_t x443 = UINT8_MAX;
	volatile int16_t x444 = INT16_MIN;
	volatile int32_t t103 = -12;

    t103 = (((x441>x442)+x443)+x444);

    if (t103 != -32513) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x446 = INT16_MIN;
	volatile uint32_t x448 = UINT32_MAX;
	int64_t t104 = -109LL;

    t104 = (((x445>x446)+x447)+x448);

    if (t104 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x449 = -1LL;
	int16_t x450 = -1;
	int32_t x451 = 4109277;
	int16_t x452 = 0;

    t105 = (((x449>x450)+x451)+x452);

    if (t105 != 4109277) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x458 = INT16_MIN;
	volatile int16_t x459 = INT16_MAX;
	volatile int64_t x460 = 684LL;
	volatile int64_t t106 = 5187173LL;

    t106 = (((x457>x458)+x459)+x460);

    if (t106 != 33452LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile int32_t x464 = 222;

    t107 = (((x461>x462)+x463)+x464);

    if (t107 != 224) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x465 = -1LL;
	volatile int8_t x466 = 8;
	int16_t x467 = INT16_MAX;
	uint8_t x468 = 24U;
	int32_t t108 = 7;

    t108 = (((x465>x466)+x467)+x468);

    if (t108 != 32791) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x470 = INT16_MIN;
	int16_t x472 = -1;

    t109 = (((x469>x470)+x471)+x472);

    if (t109 != INT32_MIN) { NG(); } else { ; }
	
}

void f110(void) {
    	int64_t x473 = INT64_MIN;
	static int8_t x474 = INT8_MIN;
	static volatile int64_t x475 = -388895308175LL;
	static int16_t x476 = 1;
	volatile int64_t t110 = -447454567362463831LL;

    t110 = (((x473>x474)+x475)+x476);

    if (t110 != -388895308174LL) { NG(); } else { ; }
	
}

void f111(void) {
    	uint32_t x477 = 12248U;
	int32_t x478 = INT32_MAX;
	static int64_t x479 = INT64_MIN;
	static uint16_t x480 = 17654U;
	volatile int64_t t111 = -1343774779019611838LL;

    t111 = (((x477>x478)+x479)+x480);

    if (t111 != -9223372036854758154LL) { NG(); } else { ; }
	
}

void f112(void) {
    	uint8_t x481 = 23U;
	uint16_t x482 = 0U;
	int8_t x483 = INT8_MIN;
	int64_t t112 = -6LL;

    t112 = (((x481>x482)+x483)+x484);

    if (t112 != -128LL) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x486 = INT64_MIN;
	uint16_t x487 = 87U;
	static int16_t x488 = INT16_MAX;
	volatile int32_t t113 = -63;

    t113 = (((x485>x486)+x487)+x488);

    if (t113 != 32854) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x489 = -1LL;
	uint16_t x490 = UINT16_MAX;
	volatile uint16_t x491 = 12628U;
	int8_t x492 = 0;
	volatile int32_t t114 = 14;

    t114 = (((x489>x490)+x491)+x492);

    if (t114 != 12628) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x497 = -95558725236369LL;
	int16_t x498 = 335;
	int8_t x499 = 2;
	int16_t x500 = INT16_MAX;
	volatile int32_t t115 = 252;

    t115 = (((x497>x498)+x499)+x500);

    if (t115 != 32769) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x501 = -1;
	int64_t x502 = INT64_MIN;
	volatile uint16_t x503 = 1U;
	int16_t x504 = INT16_MIN;

    t116 = (((x501>x502)+x503)+x504);

    if (t116 != -32766) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int16_t x506 = 1;
	int64_t x507 = INT64_MIN;
	uint32_t x508 = 97297145U;

    t117 = (((x505>x506)+x507)+x508);

    if (t117 != -9223372036757478663LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x509 = -1LL;
	int8_t x510 = INT8_MIN;
	int8_t x511 = INT8_MAX;
	int32_t x512 = INT32_MIN;
	static volatile int32_t t118 = 220;

    t118 = (((x509>x510)+x511)+x512);

    if (t118 != -2147483520) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x513 = -130118;
	int16_t x514 = INT16_MIN;
	static uint64_t x515 = 7748462LLU;
	int64_t x516 = -1LL;
	uint64_t t119 = 6311581581680345LLU;

    t119 = (((x513>x514)+x515)+x516);

    if (t119 != 7748461LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	static int8_t x521 = INT8_MAX;
	volatile uint16_t x523 = 7U;
	static int8_t x524 = INT8_MIN;

    t120 = (((x521>x522)+x523)+x524);

    if (t120 != -120) { NG(); } else { ; }
	
}

void f121(void) {
    	static uint16_t x525 = 29U;
	static int64_t x526 = INT64_MIN;
	static uint16_t x528 = 6769U;
	int32_t t121 = 357;

    t121 = (((x525>x526)+x527)+x528);

    if (t121 != 39537) { NG(); } else { ; }
	
}

void f122(void) {
    	static volatile uint8_t x529 = 12U;
	int16_t x531 = 3575;
	static uint16_t x532 = UINT16_MAX;
	int32_t t122 = 56235878;

    t122 = (((x529>x530)+x531)+x532);

    if (t122 != 69111) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x537 = 29U;
	volatile int64_t x538 = INT64_MIN;
	int8_t x539 = 1;
	volatile int64_t t123 = -59776174LL;

    t123 = (((x537>x538)+x539)+x540);

    if (t123 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x541 = 119U;
	int32_t t124 = 22492880;

    t124 = (((x541>x542)+x543)+x544);

    if (t124 != -671) { NG(); } else { ; }
	
}

void f125(void) {
    	static int32_t x545 = 620;
	uint64_t x546 = UINT64_MAX;
	uint32_t x547 = 3175474U;
	volatile int64_t x548 = -494LL;
	volatile int64_t t125 = 4472893338959LL;

    t125 = (((x545>x546)+x547)+x548);

    if (t125 != 3174980LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x549 = 2219597356053051430LL;
	int64_t x552 = -40674440700851LL;
	static volatile int64_t t126 = -142711946260283LL;

    t126 = (((x549>x550)+x551)+x552);

    if (t126 != -40674440732285LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint64_t x553 = 3729852695906360LLU;
	uint32_t x555 = 2U;
	uint16_t x556 = UINT16_MAX;
	volatile uint32_t t127 = 815834637U;

    t127 = (((x553>x554)+x555)+x556);

    if (t127 != 65538U) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x558 = INT8_MAX;
	int64_t x559 = -1LL;
	uint32_t x560 = UINT32_MAX;
	static volatile int64_t t128 = 0LL;

    t128 = (((x557>x558)+x559)+x560);

    if (t128 != 4294967294LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x561 = -1;
	volatile int32_t x563 = INT32_MIN;
	int32_t t129 = INT32_MIN;

    t129 = (((x561>x562)+x563)+x564);

    if (t129 != INT32_MIN) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x570 = 11508U;
	uint64_t x571 = UINT64_MAX;
	uint64_t t130 = 45406158781LLU;

    t130 = (((x569>x570)+x571)+x572);

    if (t130 != 126LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint8_t x574 = 2U;
	uint16_t x575 = UINT16_MAX;
	uint8_t x576 = 1U;
	int32_t t131 = -101148;

    t131 = (((x573>x574)+x575)+x576);

    if (t131 != 65537) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x577 = INT32_MAX;
	int8_t x579 = INT8_MIN;
	uint16_t x580 = 15U;
	volatile int32_t t132 = 161455;

    t132 = (((x577>x578)+x579)+x580);

    if (t132 != -112) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x581 = 1152231U;
	uint16_t x582 = 29U;
	volatile int32_t x583 = INT32_MIN;
	static int32_t t133 = -74276;

    t133 = (((x581>x582)+x583)+x584);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	static volatile uint64_t x585 = 834219262611LLU;
	static uint16_t x586 = 306U;
	volatile int32_t x587 = INT32_MIN;
	int16_t x588 = -1;
	volatile int32_t t134 = INT32_MIN;

    t134 = (((x585>x586)+x587)+x588);

    if (t134 != INT32_MIN) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x590 = -2688LL;
	static int8_t x592 = 47;

    t135 = (((x589>x590)+x591)+x592);

    if (t135 != 60) { NG(); } else { ; }
	
}

void f136(void) {
    	int64_t x606 = -13696LL;
	static int16_t x607 = INT16_MAX;
	int16_t x608 = INT16_MIN;
	int32_t t136 = 24503;

    t136 = (((x605>x606)+x607)+x608);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x613 = INT16_MIN;
	volatile int64_t x615 = 1LL;
	int8_t x616 = INT8_MIN;
	int64_t t137 = -1404177710LL;

    t137 = (((x613>x614)+x615)+x616);

    if (t137 != -127LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x617 = -4;
	int8_t x618 = -1;
	int32_t x619 = -1;
	int32_t x620 = 975201;
	int32_t t138 = 18171;

    t138 = (((x617>x618)+x619)+x620);

    if (t138 != 975200) { NG(); } else { ; }
	
}

void f139(void) {
    	static int64_t x621 = 5547LL;
	uint16_t x622 = 22U;
	uint8_t x623 = 4U;
	uint8_t x624 = 0U;

    t139 = (((x621>x622)+x623)+x624);

    if (t139 != 5) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x627 = 14386895U;

    t140 = (((x625>x626)+x627)+x628);

    if (t140 != 13891783690451LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x629 = 2U;
	int16_t x631 = INT16_MIN;
	volatile int16_t x632 = 233;
	int32_t t141 = -30328;

    t141 = (((x629>x630)+x631)+x632);

    if (t141 != -32534) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int16_t x633 = -1;
	static uint8_t x634 = UINT8_MAX;
	static uint32_t x636 = 4198U;
	volatile uint32_t t142 = 379580U;

    t142 = (((x633>x634)+x635)+x636);

    if (t142 != 10927U) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int32_t x637 = 98429394;
	int32_t x639 = INT32_MIN;
	uint8_t x640 = UINT8_MAX;

    t143 = (((x637>x638)+x639)+x640);

    if (t143 != -2147483393) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x647 = INT8_MAX;
	static int32_t t144 = 445;

    t144 = (((x645>x646)+x647)+x648);

    if (t144 != -32641) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x649 = INT32_MIN;
	uint32_t x650 = UINT32_MAX;
	uint8_t x651 = UINT8_MAX;
	static int64_t t145 = -370958516LL;

    t145 = (((x649>x650)+x651)+x652);

    if (t145 != 254LL) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x653 = INT64_MAX;
	int16_t x654 = 12659;
	volatile int64_t x655 = INT64_MIN;
	uint8_t x656 = 6U;
	int64_t t146 = 7668LL;

    t146 = (((x653>x654)+x655)+x656);

    if (t146 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x658 = -38;
	static int16_t x659 = INT16_MIN;
	uint32_t x660 = UINT32_MAX;

    t147 = (((x657>x658)+x659)+x660);

    if (t147 != 4294934527U) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x661 = INT8_MIN;
	volatile uint32_t x663 = 1627450909U;
	static volatile int64_t x664 = INT64_MIN;

    t148 = (((x661>x662)+x663)+x664);

    if (t148 != -9223372035227324898LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x665 = INT32_MIN;
	volatile int32_t x666 = -5897;
	volatile int32_t t149 = 24209;

    t149 = (((x665>x666)+x667)+x668);

    if (t149 != 21) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x669 = -1;
	int32_t x670 = 37;
	uint32_t x671 = 80678U;
	static volatile int16_t x672 = 12869;
	uint32_t t150 = 23754740U;

    t150 = (((x669>x670)+x671)+x672);

    if (t150 != 93547U) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x673 = INT8_MAX;
	int16_t x674 = 9;
	volatile uint64_t x675 = UINT64_MAX;
	int64_t x676 = 329668229995375LL;
	volatile uint64_t t151 = 59810LLU;

    t151 = (((x673>x674)+x675)+x676);

    if (t151 != 329668229995375LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x679 = UINT64_MAX;
	volatile int16_t x680 = -1;
	volatile uint64_t t152 = 6610912351743LLU;

    t152 = (((x677>x678)+x679)+x680);

    if (t152 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int8_t x681 = -3;
	uint8_t x682 = UINT8_MAX;
	uint64_t x684 = 231LLU;
	volatile uint64_t t153 = 310LLU;

    t153 = (((x681>x682)+x683)+x684);

    if (t153 != 32998LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint64_t x687 = 1028789962310LLU;
	int8_t x688 = INT8_MAX;
	volatile uint64_t t154 = 39727129LLU;

    t154 = (((x685>x686)+x687)+x688);

    if (t154 != 1028789962437LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int64_t x689 = INT64_MAX;
	static int32_t x690 = INT32_MIN;
	uint8_t x691 = 0U;
	int32_t x692 = -1;
	volatile int32_t t155 = 0;

    t155 = (((x689>x690)+x691)+x692);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x693 = -159LL;
	int32_t x694 = -875;
	uint8_t x695 = 0U;
	static int16_t x696 = INT16_MIN;
	volatile int32_t t156 = -964;

    t156 = (((x693>x694)+x695)+x696);

    if (t156 != -32767) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x698 = UINT16_MAX;
	int8_t x699 = 2;
	static int64_t x700 = -1LL;
	int64_t t157 = -1044533388LL;

    t157 = (((x697>x698)+x699)+x700);

    if (t157 != 1LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint16_t x701 = 8U;
	int32_t x702 = INT32_MIN;
	volatile int64_t x703 = -13249LL;
	uint16_t x704 = 7U;
	static int64_t t158 = -54815LL;

    t158 = (((x701>x702)+x703)+x704);

    if (t158 != -13241LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x705 = INT8_MIN;
	volatile int32_t x706 = INT32_MIN;
	int64_t x707 = -117947013983607212LL;
	int64_t x708 = -2LL;
	volatile int64_t t159 = 7162475869252LL;

    t159 = (((x705>x706)+x707)+x708);

    if (t159 != -117947013983607213LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x709 = INT16_MAX;
	int32_t x710 = -1;
	uint32_t x712 = 127262U;
	volatile uint64_t t160 = 2235436447482748668LLU;

    t160 = (((x709>x710)+x711)+x712);

    if (t160 != 175840152456136LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int32_t x713 = -2;
	int64_t x714 = INT64_MIN;
	int32_t x716 = INT32_MIN;
	volatile int32_t t161 = -11;

    t161 = (((x713>x714)+x715)+x716);

    if (t161 != -2147483647) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x717 = INT8_MIN;
	int8_t x718 = INT8_MIN;
	volatile int32_t x719 = INT32_MIN;

    t162 = (((x717>x718)+x719)+x720);

    if (t162 != -2147483521) { NG(); } else { ; }
	
}

void f163(void) {
    	uint32_t x721 = 40955378U;
	int32_t x722 = INT32_MAX;
	uint64_t x723 = 1733228215329LLU;
	static volatile uint64_t t163 = 11LLU;

    t163 = (((x721>x722)+x723)+x724);

    if (t163 != 1733228215431LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x725 = -3LL;
	volatile int16_t x726 = INT16_MAX;
	static int8_t x727 = INT8_MIN;
	int8_t x728 = -27;
	int32_t t164 = -153297451;

    t164 = (((x725>x726)+x727)+x728);

    if (t164 != -155) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x729 = 7785757590647874LL;
	uint8_t x730 = UINT8_MAX;
	static int8_t x731 = -1;
	int32_t x732 = INT32_MIN;
	static volatile int32_t t165 = INT32_MIN;

    t165 = (((x729>x730)+x731)+x732);

    if (t165 != INT32_MIN) { NG(); } else { ; }
	
}

void f166(void) {
    	uint16_t x733 = UINT16_MAX;
	static int64_t x734 = -269444408876LL;
	static int32_t x735 = -123408;
	int32_t x736 = -1;
	int32_t t166 = -28606;

    t166 = (((x733>x734)+x735)+x736);

    if (t166 != -123408) { NG(); } else { ; }
	
}

void f167(void) {
    	volatile int16_t x737 = INT16_MIN;
	int8_t x738 = INT8_MAX;
	int16_t x739 = INT16_MIN;
	uint32_t x740 = UINT32_MAX;
	volatile uint32_t t167 = 163265211U;

    t167 = (((x737>x738)+x739)+x740);

    if (t167 != 4294934527U) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x742 = INT32_MAX;
	static int64_t x743 = 169828227LL;
	int64_t t168 = 1078962083677LL;

    t168 = (((x741>x742)+x743)+x744);

    if (t168 != 4464795523LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x749 = -1;
	volatile int32_t x752 = INT32_MAX;
	uint64_t t169 = 723285703571565LLU;

    t169 = (((x749>x750)+x751)+x752);

    if (t169 != 2147483647LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x753 = -236LL;
	static int32_t x755 = INT32_MIN;
	uint8_t x756 = 12U;
	int32_t t170 = 0;

    t170 = (((x753>x754)+x755)+x756);

    if (t170 != -2147483636) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x761 = INT64_MIN;
	uint64_t x762 = UINT64_MAX;
	int16_t x763 = INT16_MIN;
	volatile uint32_t x764 = 24940U;
	static volatile uint32_t t171 = 45265324U;

    t171 = (((x761>x762)+x763)+x764);

    if (t171 != 4294959468U) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x766 = 3;
	int64_t x767 = 816984473823LL;
	uint64_t x768 = 576807700651663307LLU;
	volatile uint64_t t172 = 4610494428695763LLU;

    t172 = (((x765>x766)+x767)+x768);

    if (t172 != 576808517636137131LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x769 = -5;
	volatile int8_t x772 = -13;
	volatile uint32_t t173 = 2615119U;

    t173 = (((x769>x770)+x771)+x772);

    if (t173 != 4294967283U) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x777 = INT64_MAX;
	volatile int16_t x778 = INT16_MIN;
	int32_t x779 = -1;
	int8_t x780 = INT8_MAX;
	int32_t t174 = -1;

    t174 = (((x777>x778)+x779)+x780);

    if (t174 != 127) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x781 = -7;
	uint16_t x783 = 3U;
	static int32_t x784 = -1647252;
	int32_t t175 = -28042903;

    t175 = (((x781>x782)+x783)+x784);

    if (t175 != -1647248) { NG(); } else { ; }
	
}

void f176(void) {
    	static int32_t x785 = INT32_MIN;
	int8_t x786 = 11;
	uint8_t x787 = UINT8_MAX;
	volatile int64_t t176 = 6LL;

    t176 = (((x785>x786)+x787)+x788);

    if (t176 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x789 = INT16_MAX;
	int16_t x790 = INT16_MIN;
	static uint64_t x791 = UINT64_MAX;
	volatile int32_t x792 = -467267471;

    t177 = (((x789>x790)+x791)+x792);

    if (t177 != 18446744073242284145LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x793 = 0LLU;
	int16_t x794 = INT16_MAX;
	int32_t x795 = 94702;
	static int8_t x796 = INT8_MIN;
	int32_t t178 = -182335;

    t178 = (((x793>x794)+x795)+x796);

    if (t178 != 94574) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int32_t x797 = 21;
	static int64_t x798 = INT64_MIN;
	int32_t x799 = -1;
	uint64_t x800 = 4040673640376447716LLU;

    t179 = (((x797>x798)+x799)+x800);

    if (t179 != 4040673640376447716LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x801 = 86088757469LL;
	volatile int16_t x803 = -1;
	volatile uint64_t t180 = 2320512016761LLU;

    t180 = (((x801>x802)+x803)+x804);

    if (t180 != 20361497893372993LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	static int16_t x805 = INT16_MIN;
	volatile int16_t x806 = INT16_MIN;
	volatile uint8_t x808 = 0U;

    t181 = (((x805>x806)+x807)+x808);

    if (t181 != 32767) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint32_t x809 = 0U;
	int16_t x810 = 6497;
	int32_t x811 = -126317327;
	int8_t x812 = INT8_MAX;
	int32_t t182 = 10;

    t182 = (((x809>x810)+x811)+x812);

    if (t182 != -126317200) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int16_t x817 = -1;
	uint8_t x818 = 0U;
	uint32_t x820 = 2U;
	volatile uint32_t t183 = 5U;

    t183 = (((x817>x818)+x819)+x820);

    if (t183 != 2147483650U) { NG(); } else { ; }
	
}

void f184(void) {
    	int32_t x821 = INT32_MIN;
	uint64_t x822 = 1394038LLU;
	static int16_t x823 = -1;
	uint8_t x824 = UINT8_MAX;
	int32_t t184 = 154;

    t184 = (((x821>x822)+x823)+x824);

    if (t184 != 255) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x825 = INT32_MIN;
	uint32_t x826 = 463299U;
	int16_t x827 = 3868;
	int64_t x828 = INT64_MIN;
	volatile int64_t t185 = 0LL;

    t185 = (((x825>x826)+x827)+x828);

    if (t185 != -9223372036854771939LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x829 = UINT32_MAX;
	uint8_t x830 = 11U;
	int32_t t186 = 1479070;

    t186 = (((x829>x830)+x831)+x832);

    if (t186 != -6487) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x833 = 2U;
	static volatile uint64_t x834 = 422322822702793LLU;
	int16_t x835 = INT16_MIN;
	uint8_t x836 = 58U;
	volatile int32_t t187 = -15;

    t187 = (((x833>x834)+x835)+x836);

    if (t187 != -32710) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint16_t x837 = 8095U;
	int8_t x838 = INT8_MIN;
	static int8_t x839 = -1;
	volatile int64_t x840 = 600574968938240626LL;

    t188 = (((x837>x838)+x839)+x840);

    if (t188 != 600574968938240626LL) { NG(); } else { ; }
	
}

void f189(void) {
    	static int8_t x841 = -1;
	static uint64_t x843 = 2352390334LLU;
	uint64_t x844 = 48760747934LLU;

    t189 = (((x841>x842)+x843)+x844);

    if (t189 != 51113138268LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x845 = UINT32_MAX;
	uint8_t x846 = 1U;
	int64_t x847 = INT64_MIN;
	volatile int64_t x848 = -1LL;
	volatile int64_t t190 = INT64_MIN;

    t190 = (((x845>x846)+x847)+x848);

    if (t190 != INT64_MIN) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x849 = 172621215776LLU;
	static int32_t x850 = INT32_MIN;
	uint64_t x851 = 3804919621LLU;
	int8_t x852 = INT8_MIN;
	volatile uint64_t t191 = 86758822286491LLU;

    t191 = (((x849>x850)+x851)+x852);

    if (t191 != 3804919493LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x853 = INT8_MIN;
	static volatile uint64_t x854 = 280982483832630LLU;
	static uint64_t x856 = 92308847782LLU;
	uint64_t t192 = 663635670687LLU;

    t192 = (((x853>x854)+x855)+x856);

    if (t192 != 92308847655LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x857 = 1036847925;
	int64_t x858 = 4LL;
	int8_t x859 = 0;
	int64_t x860 = INT64_MIN;
	int64_t t193 = 106900LL;

    t193 = (((x857>x858)+x859)+x860);

    if (t193 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x861 = INT16_MIN;
	int8_t x862 = -59;
	int32_t x863 = 8802832;
	static volatile int64_t x864 = 1282490763LL;
	int64_t t194 = -1056712631340LL;

    t194 = (((x861>x862)+x863)+x864);

    if (t194 != 1291293595LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x869 = 1018U;
	int16_t x871 = -26;
	int32_t x872 = -1;
	volatile int32_t t195 = 29495451;

    t195 = (((x869>x870)+x871)+x872);

    if (t195 != -27) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x873 = UINT32_MAX;
	volatile int64_t x874 = INT64_MIN;
	int8_t x875 = 12;

    t196 = (((x873>x874)+x875)+x876);

    if (t196 != 18) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x877 = 6LL;
	static uint32_t x878 = 5723330U;
	volatile uint32_t t197 = UINT32_MAX;

    t197 = (((x877>x878)+x879)+x880);

    if (t197 != UINT32_MAX) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x881 = 73777302;
	int32_t x882 = INT32_MIN;
	volatile int8_t x883 = -1;
	volatile int32_t x884 = INT32_MIN;
	static int32_t t198 = INT32_MIN;

    t198 = (((x881>x882)+x883)+x884);

    if (t198 != INT32_MIN) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x885 = INT32_MIN;
	static uint32_t x886 = 15269U;
	int64_t x887 = 10542262881LL;
	int8_t x888 = INT8_MIN;

    t199 = (((x885>x886)+x887)+x888);

    if (t199 != 10542262754LL) { NG(); } else { ; }
	
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

