
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

static uint32_t x3 = 1664511002U;
static uint32_t x5 = 146731412U;
uint8_t x6 = 9U;
int32_t x8 = -1;
static volatile uint32_t t1 = 2921U;
int16_t x10 = INT16_MIN;
int8_t x14 = 1;
static int16_t x18 = INT16_MAX;
int32_t x24 = INT32_MAX;
int8_t x26 = -1;
int8_t x27 = INT8_MAX;
volatile int32_t t6 = 247544071;
int32_t x30 = -1;
int8_t x32 = -42;
int16_t x35 = -1;
uint32_t x37 = 878752U;
int32_t x43 = -5;
uint16_t x44 = 46U;
static volatile int16_t x45 = INT16_MIN;
uint8_t x47 = 15U;
volatile int16_t x49 = -2844;
int16_t x52 = -1;
int32_t x58 = 2051798;
int16_t x59 = -1;
int64_t x61 = -1LL;
volatile int64_t x62 = -1LL;
int32_t x64 = INT32_MIN;
volatile int32_t x73 = INT32_MAX;
int32_t x79 = -1;
volatile uint32_t t18 = 62877U;
int8_t x84 = -1;
static int32_t x90 = -1;
int16_t x91 = INT16_MIN;
volatile uint64_t x92 = UINT64_MAX;
uint64_t t21 = 511108LLU;
int16_t x96 = INT16_MIN;
static int8_t x107 = -3;
int16_t x108 = INT16_MIN;
int32_t t24 = 1447761;
int16_t x113 = 320;
uint64_t t25 = 2501097941LLU;
static int8_t x118 = -28;
volatile int32_t t27 = -96522;
int32_t t28 = -743;
int16_t x129 = INT16_MIN;
int32_t x140 = INT32_MIN;
volatile uint16_t x142 = UINT16_MAX;
static int64_t x148 = INT64_MIN;
volatile int32_t t33 = -186;
static volatile uint32_t t35 = 82U;
int16_t x168 = INT16_MIN;
static int16_t x171 = -1;
uint64_t t38 = 2348944822507582011LLU;
int16_t x182 = INT16_MIN;
uint8_t x184 = 59U;
volatile int64_t t39 = 3321LL;
volatile uint64_t x186 = 1505LLU;
uint8_t x190 = 113U;
volatile int64_t x200 = 433262229LL;
uint32_t x202 = 854271264U;
int32_t x212 = INT32_MIN;
static uint64_t x213 = 28393LLU;
int8_t x214 = INT8_MIN;
int8_t x220 = INT8_MIN;
int64_t t48 = -26580525750LL;
int64_t x236 = 112199428LL;
int32_t x265 = 61618464;
uint64_t x270 = 560LLU;
volatile uint32_t x272 = 9U;
int32_t x273 = -1;
static volatile int32_t t58 = -1866;
int64_t x277 = -1594748257LL;
int64_t x280 = -1LL;
volatile int64_t x289 = INT64_MIN;
static volatile uint64_t x290 = 187054456278LLU;
volatile uint8_t x291 = UINT8_MAX;
int16_t x295 = 15;
volatile int16_t x300 = -1;
int32_t x303 = INT32_MIN;
volatile int64_t t65 = 492481417416093LL;
uint64_t x315 = 2007430763970LLU;
int8_t x319 = INT8_MIN;
static volatile int32_t x329 = INT32_MAX;
uint64_t x331 = 16191003LLU;
int32_t x335 = INT32_MIN;
uint64_t x336 = 2782827LLU;
int16_t x337 = -2;
uint8_t x342 = UINT8_MAX;
volatile int8_t x344 = 0;
static volatile uint64_t x352 = UINT64_MAX;
int16_t x358 = -5;
uint64_t t77 = 32700173LLU;
volatile uint64_t t79 = 3581893961190LLU;
uint16_t x370 = 13U;
int32_t x384 = INT32_MIN;
static int32_t x386 = 13;
int16_t x393 = INT16_MAX;
static uint64_t t88 = 119LLU;
int64_t x405 = -1LL;
int16_t x409 = INT16_MIN;
int8_t x411 = INT8_MAX;
static int16_t x412 = 1;
uint64_t x415 = UINT64_MAX;
uint64_t t91 = 42LLU;
uint16_t x421 = UINT16_MAX;
uint32_t x422 = 8798U;
int32_t x424 = INT32_MIN;
int32_t x431 = INT32_MIN;
int32_t x438 = -1;
uint16_t x439 = 100U;
static int32_t x443 = 15613;
uint64_t x447 = 8839LLU;
uint64_t t98 = 7812LLU;
int64_t x451 = 3475305LL;
int16_t x452 = INT16_MIN;
uint32_t x467 = UINT32_MAX;
static uint16_t x477 = 21U;
uint8_t x479 = UINT8_MAX;
volatile uint64_t t104 = 151413025800LLU;
static uint16_t x483 = UINT16_MAX;
int16_t x492 = -1;
volatile int16_t x495 = 0;
volatile int8_t x502 = INT8_MAX;
volatile uint32_t x503 = 5674U;
int8_t x512 = 0;
volatile uint64_t t111 = 79379719312LLU;
uint64_t t112 = 21LLU;
uint8_t x527 = 19U;
int64_t x534 = INT64_MIN;
int32_t t116 = 346388260;
uint16_t x541 = 1788U;
uint32_t x543 = 3179U;
static int16_t x544 = -1;
int64_t x545 = -1170123892LL;
uint32_t x546 = 223140449U;
int8_t x550 = INT8_MIN;
volatile uint64_t x558 = UINT64_MAX;
uint8_t x560 = 6U;
int16_t x562 = INT16_MAX;
int32_t t122 = 0;
static volatile int32_t x566 = INT32_MAX;
static volatile uint16_t x567 = 96U;
uint64_t x568 = 3232815266551034175LLU;
int16_t x570 = INT16_MIN;
static int32_t x578 = INT32_MAX;
static uint64_t t125 = 0LLU;
volatile int64_t t126 = -4928938200LL;
static volatile int32_t x587 = 2;
static volatile uint16_t x588 = 3630U;
int64_t t127 = -1787739292092850LL;
volatile uint16_t x589 = UINT16_MAX;
volatile int64_t x594 = -1LL;
int64_t x602 = -399333LL;
volatile uint64_t t132 = 31172LLU;
int64_t t133 = -5578168LL;
uint64_t x621 = 43346LLU;
int8_t x626 = INT8_MIN;
static uint16_t x629 = UINT16_MAX;
static int16_t x634 = INT16_MAX;
int64_t x635 = -1LL;
volatile int8_t x636 = INT8_MIN;
static int32_t x645 = -1;
static volatile int64_t t140 = -1LL;
int16_t x653 = INT16_MIN;
int16_t x656 = INT16_MIN;
static int8_t x662 = INT8_MIN;
uint64_t x671 = 106496298937952640LLU;
volatile uint64_t t145 = 214LLU;
uint64_t t147 = 3623055857LLU;
uint32_t x684 = 6514776U;
uint8_t x686 = 9U;
uint8_t x689 = 1U;
static int32_t t150 = 23432786;
int16_t x695 = INT16_MIN;
static int16_t x699 = -1;
uint32_t x700 = UINT32_MAX;
uint32_t x701 = UINT32_MAX;
int8_t x702 = INT8_MIN;
static int8_t x705 = -1;
int32_t x707 = -26;
volatile int8_t x710 = INT8_MIN;
static int16_t x711 = -35;
int32_t t155 = -1;
volatile int8_t x715 = -5;
volatile uint16_t x718 = UINT16_MAX;
static uint32_t x730 = 83008U;
static uint64_t x731 = 1159283LLU;
uint16_t x737 = 28740U;
static uint16_t x743 = 19U;
uint64_t x745 = UINT64_MAX;
int32_t x747 = INT32_MIN;
int32_t x750 = INT32_MIN;
int16_t x756 = -1;
uint32_t t165 = 3358U;
uint64_t t166 = 164297852331LLU;
volatile int64_t t167 = -1449847157303872700LL;
volatile uint8_t x769 = UINT8_MAX;
int32_t x771 = INT32_MIN;
int8_t x773 = -1;
uint32_t x778 = 5641U;
static int64_t x799 = INT64_MIN;
volatile int64_t t177 = -122882116LL;
uint16_t x809 = 16786U;
int8_t x811 = INT8_MIN;
static uint8_t x827 = UINT8_MAX;
volatile int64_t x837 = INT64_MAX;
volatile int8_t x841 = INT8_MIN;
int64_t x846 = INT64_MAX;
volatile int64_t x862 = INT64_MIN;
int64_t x868 = 120LL;
int64_t x870 = INT64_MAX;
uint8_t x874 = 108U;
int16_t x883 = INT16_MAX;
int64_t x886 = -3989165217727406912LL;
uint32_t x891 = 12U;
int64_t x893 = -1LL;
int64_t x896 = 0LL;
static int64_t t193 = -17701700716357521LL;
int8_t x899 = 23;
int8_t x904 = 1;
uint16_t x905 = 9U;
volatile int32_t x908 = INT32_MIN;
uint64_t x914 = 567595047024216969LLU;
uint64_t x915 = 6LLU;
uint64_t t198 = 847946861157106LLU;
int16_t x924 = 4621;


void f0(void) {
    	static volatile uint32_t x1 = UINT32_MAX;
	int32_t x2 = INT32_MIN;
	volatile int8_t x4 = INT8_MIN;
	uint32_t t0 = 16618U;

    t0 = ((x1+(x2|x3))+x4);

    if (t0 != 3811994521U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x7 = 1417U;

    t1 = ((x5+(x6|x7))+x8);

    if (t1 != 146732828U) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = UINT16_MAX;
	int8_t x11 = INT8_MAX;
	int8_t x12 = 0;
	int32_t t2 = 1;

    t2 = ((x9+(x10|x11))+x12);

    if (t2 != 32894) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = -1;
	static volatile int32_t x15 = 51046;
	volatile uint32_t x16 = 1U;
	volatile uint32_t t3 = 45U;

    t3 = ((x13+(x14|x15))+x16);

    if (t3 != 51047U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint64_t x17 = UINT64_MAX;
	int64_t x19 = -1LL;
	uint8_t x20 = 6U;
	volatile uint64_t t4 = 58385642943LLU;

    t4 = ((x17+(x18|x19))+x20);

    if (t4 != 4LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x21 = -5763089309038732LL;
	volatile int8_t x22 = -1;
	int16_t x23 = INT16_MIN;
	int64_t t5 = -79401054190182LL;

    t5 = ((x21+(x22|x23))+x24);

    if (t5 != -5763087161555086LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	static int8_t x28 = -1;

    t6 = ((x25+(x26|x27))+x28);

    if (t6 != -32770) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x29 = -1;
	volatile int32_t x31 = -82410;
	static int32_t t7 = -197091;

    t7 = ((x29+(x30|x31))+x32);

    if (t7 != -44) { NG(); } else { ; }
	
}

void f8(void) {
    	int8_t x33 = INT8_MAX;
	static int64_t x34 = INT64_MAX;
	volatile int64_t x36 = INT64_MIN;
	int64_t t8 = 5LL;

    t8 = ((x33+(x34|x35))+x36);

    if (t8 != -9223372036854775682LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint16_t x38 = 26048U;
	volatile int32_t x39 = INT32_MAX;
	volatile uint32_t x40 = UINT32_MAX;
	volatile uint32_t t9 = 195U;

    t9 = ((x37+(x38|x39))+x40);

    if (t9 != 2148362398U) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int8_t x41 = INT8_MIN;
	int8_t x42 = INT8_MIN;
	volatile int32_t t10 = 40430;

    t10 = ((x41+(x42|x43))+x44);

    if (t10 != -87) { NG(); } else { ; }
	
}

void f11(void) {
    	uint8_t x46 = UINT8_MAX;
	volatile int8_t x48 = 2;
	volatile int32_t t11 = -4043752;

    t11 = ((x45+(x46|x47))+x48);

    if (t11 != -32511) { NG(); } else { ; }
	
}

void f12(void) {
    	static int16_t x50 = INT16_MAX;
	int8_t x51 = -14;
	volatile int32_t t12 = 1982;

    t12 = ((x49+(x50|x51))+x52);

    if (t12 != -2846) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x53 = 1;
	uint8_t x54 = UINT8_MAX;
	volatile uint32_t x55 = 323U;
	int32_t x56 = INT32_MIN;
	volatile uint32_t t13 = 49079445U;

    t13 = ((x53+(x54|x55))+x56);

    if (t13 != 2147484160U) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x57 = INT16_MAX;
	volatile int16_t x60 = 84;
	int32_t t14 = -1;

    t14 = ((x57+(x58|x59))+x60);

    if (t14 != 32850) { NG(); } else { ; }
	
}

void f15(void) {
    	uint8_t x63 = 1U;
	volatile int64_t t15 = -2015144LL;

    t15 = ((x61+(x62|x63))+x64);

    if (t15 != -2147483650LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint64_t x65 = UINT64_MAX;
	static uint16_t x66 = 29U;
	static int8_t x67 = -1;
	static int8_t x68 = INT8_MIN;
	volatile uint64_t t16 = 3325094LLU;

    t16 = ((x65+(x66|x67))+x68);

    if (t16 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x74 = INT32_MIN;
	uint32_t x75 = UINT32_MAX;
	int16_t x76 = 11573;
	volatile uint32_t t17 = 2U;

    t17 = ((x73+(x74|x75))+x76);

    if (t17 != 2147495219U) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = INT32_MIN;
	uint32_t x78 = 3986U;
	volatile int32_t x80 = -1;

    t18 = ((x77+(x78|x79))+x80);

    if (t18 != 2147483646U) { NG(); } else { ; }
	
}

void f19(void) {
    	int64_t x81 = INT64_MAX;
	int64_t x82 = INT64_MAX;
	int8_t x83 = INT8_MIN;
	volatile int64_t t19 = -454978679410793LL;

    t19 = ((x81+(x82|x83))+x84);

    if (t19 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x85 = 76U;
	int32_t x86 = -1;
	uint32_t x87 = 387U;
	static int64_t x88 = INT64_MIN;
	int64_t t20 = 11368LL;

    t20 = ((x85+(x86|x87))+x88);

    if (t20 != -9223372036854775733LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint8_t x89 = 5U;

    t21 = ((x89+(x90|x91))+x92);

    if (t21 != 3LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x93 = UINT64_MAX;
	int16_t x94 = INT16_MIN;
	uint16_t x95 = UINT16_MAX;
	uint64_t t22 = 4242667834LLU;

    t22 = ((x93+(x94|x95))+x96);

    if (t22 != 18446744073709518846LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	static int8_t x105 = INT8_MAX;
	int16_t x106 = INT16_MIN;
	int32_t t23 = -7133385;

    t23 = ((x105+(x106|x107))+x108);

    if (t23 != -32644) { NG(); } else { ; }
	
}

void f24(void) {
    	int8_t x109 = INT8_MAX;
	static volatile uint8_t x110 = UINT8_MAX;
	int16_t x111 = INT16_MAX;
	static int16_t x112 = -1;

    t24 = ((x109+(x110|x111))+x112);

    if (t24 != 32893) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x114 = 2;
	uint64_t x115 = 88622499756LLU;
	static int64_t x116 = -11817LL;

    t25 = ((x113+(x114|x115))+x116);

    if (t25 != 88622488261LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x117 = UINT64_MAX;
	uint64_t x119 = 435861363100929LLU;
	int32_t x120 = 185669;
	volatile uint64_t t26 = 28585675736202LLU;

    t26 = ((x117+(x118|x119))+x120);

    if (t26 != 185641LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x121 = INT8_MIN;
	int8_t x122 = 0;
	uint8_t x123 = UINT8_MAX;
	int16_t x124 = -1;

    t27 = ((x121+(x122|x123))+x124);

    if (t27 != 126) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x125 = 42;
	uint16_t x126 = 16130U;
	uint8_t x127 = UINT8_MAX;
	int32_t x128 = INT32_MIN;

    t28 = ((x125+(x126|x127))+x128);

    if (t28 != -2147467223) { NG(); } else { ; }
	
}

void f29(void) {
    	static volatile int8_t x130 = INT8_MAX;
	int32_t x131 = -269412085;
	uint32_t x132 = 332711658U;
	volatile uint32_t t29 = 5207U;

    t29 = ((x129+(x130|x131))+x132);

    if (t29 != 63266921U) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x137 = 9153U;
	int8_t x138 = -6;
	volatile uint32_t x139 = UINT32_MAX;
	uint32_t t30 = 61643U;

    t30 = ((x137+(x138|x139))+x140);

    if (t30 != 2147492800U) { NG(); } else { ; }
	
}

void f31(void) {
    	uint16_t x141 = 18U;
	uint16_t x143 = 6U;
	static uint8_t x144 = 1U;
	static int32_t t31 = 176;

    t31 = ((x141+(x142|x143))+x144);

    if (t31 != 65554) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x145 = UINT32_MAX;
	int16_t x146 = 3919;
	int32_t x147 = -1;
	static int64_t t32 = 0LL;

    t32 = ((x145+(x146|x147))+x148);

    if (t32 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f33(void) {
    	int32_t x149 = 28;
	uint8_t x150 = UINT8_MAX;
	uint16_t x151 = 15220U;
	uint8_t x152 = 50U;

    t33 = ((x149+(x150|x151))+x152);

    if (t33 != 15437) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x153 = INT32_MIN;
	uint8_t x154 = 2U;
	int64_t x155 = INT64_MAX;
	volatile int32_t x156 = -12069;
	volatile int64_t t34 = 255877702405039412LL;

    t34 = ((x153+(x154|x155))+x156);

    if (t34 != 9223372034707280090LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x161 = 73308170;
	int32_t x162 = -32813;
	uint32_t x163 = 129584117U;
	int8_t x164 = INT8_MAX;

    t35 = ((x161+(x162|x163))+x164);

    if (t35 != 73275520U) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile uint8_t x165 = UINT8_MAX;
	int8_t x166 = 4;
	int16_t x167 = -1;
	volatile int32_t t36 = 1007;

    t36 = ((x165+(x166|x167))+x168);

    if (t36 != -32514) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x169 = UINT8_MAX;
	int32_t x170 = -1;
	static int8_t x172 = 0;
	volatile int32_t t37 = -41;

    t37 = ((x169+(x170|x171))+x172);

    if (t37 != 254) { NG(); } else { ; }
	
}

void f38(void) {
    	uint64_t x177 = 63278LLU;
	int16_t x178 = INT16_MAX;
	int64_t x179 = -829LL;
	volatile int16_t x180 = 1;

    t38 = ((x177+(x178|x179))+x180);

    if (t38 != 63278LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int8_t x181 = INT8_MIN;
	int64_t x183 = 1165307209511496LL;

    t39 = ((x181+(x182|x183))+x184);

    if (t39 != -3581LL) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x185 = 2U;
	int8_t x187 = INT8_MIN;
	int8_t x188 = INT8_MIN;
	uint64_t t40 = 790529LLU;

    t40 = ((x185+(x186|x187))+x188);

    if (t40 != 18446744073709551459LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x189 = INT8_MIN;
	uint64_t x191 = UINT64_MAX;
	int16_t x192 = 16;
	uint64_t t41 = 775347667290647748LLU;

    t41 = ((x189+(x190|x191))+x192);

    if (t41 != 18446744073709551503LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x197 = 17LL;
	volatile uint64_t x198 = 247795685656434LLU;
	int8_t x199 = INT8_MIN;
	static volatile uint64_t t42 = 105815074LLU;

    t42 = ((x197+(x198|x199))+x200);

    if (t42 != 433262232LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x201 = -4085;
	int16_t x203 = -1;
	int8_t x204 = INT8_MAX;
	uint32_t t43 = 11U;

    t43 = ((x201+(x202|x203))+x204);

    if (t43 != 4294963337U) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x209 = INT32_MAX;
	int8_t x210 = INT8_MIN;
	uint32_t x211 = 1U;
	static volatile uint32_t t44 = 2830090U;

    t44 = ((x209+(x210|x211))+x212);

    if (t44 != 4294967168U) { NG(); } else { ; }
	
}

void f45(void) {
    	int32_t x215 = INT32_MIN;
	int32_t x216 = INT32_MIN;
	uint64_t t45 = 1054740LLU;

    t45 = ((x213+(x214|x215))+x216);

    if (t45 != 18446744071562096233LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x217 = UINT64_MAX;
	volatile uint16_t x218 = 29088U;
	uint64_t x219 = 10270LLU;
	volatile uint64_t t46 = 66201872230391531LLU;

    t46 = ((x217+(x218|x219))+x220);

    if (t46 != 31037LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int64_t x221 = INT64_MIN;
	int8_t x222 = 41;
	static uint16_t x223 = UINT16_MAX;
	static int32_t x224 = -1;
	int64_t t47 = 7605259LL;

    t47 = ((x221+(x222|x223))+x224);

    if (t47 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f48(void) {
    	int32_t x225 = INT32_MAX;
	int8_t x226 = INT8_MIN;
	uint16_t x227 = UINT16_MAX;
	int64_t x228 = 14939LL;

    t48 = ((x225+(x226|x227))+x228);

    if (t48 != 2147498585LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x229 = 13518212U;
	static volatile uint32_t x230 = 24061U;
	static int32_t x231 = INT32_MAX;
	int64_t x232 = INT64_MIN;
	int64_t t49 = 455222832908424105LL;

    t49 = ((x229+(x230|x231))+x232);

    if (t49 != -9223372034693773949LL) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int32_t x233 = INT32_MIN;
	volatile uint32_t x234 = UINT32_MAX;
	static int64_t x235 = -1LL;
	int64_t t50 = -95099588883860LL;

    t50 = ((x233+(x234|x235))+x236);

    if (t50 != -2035284221LL) { NG(); } else { ; }
	
}

void f51(void) {
    	static volatile int16_t x241 = -1;
	int32_t x242 = 240512;
	volatile int8_t x243 = -1;
	int8_t x244 = INT8_MIN;
	int32_t t51 = 265;

    t51 = ((x241+(x242|x243))+x244);

    if (t51 != -130) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x245 = 35827582305618475LLU;
	static volatile uint8_t x246 = UINT8_MAX;
	int8_t x247 = 0;
	volatile uint32_t x248 = 12972U;
	uint64_t t52 = 6842912293971LLU;

    t52 = ((x245+(x246|x247))+x248);

    if (t52 != 35827582305631702LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x249 = 78U;
	volatile int8_t x250 = -49;
	int32_t x251 = -1;
	static uint32_t x252 = 3097967U;
	static uint32_t t53 = 57U;

    t53 = ((x249+(x250|x251))+x252);

    if (t53 != 3098044U) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x253 = 16770322LL;
	static uint16_t x254 = 21U;
	uint8_t x255 = 3U;
	int8_t x256 = INT8_MIN;
	int64_t t54 = -209341137622858414LL;

    t54 = ((x253+(x254|x255))+x256);

    if (t54 != 16770217LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x261 = -54;
	static int32_t x262 = -1;
	int64_t x263 = 45LL;
	int8_t x264 = -1;
	volatile int64_t t55 = -14609737LL;

    t55 = ((x261+(x262|x263))+x264);

    if (t55 != -56LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static uint8_t x266 = 73U;
	volatile int16_t x267 = -1;
	volatile int8_t x268 = 1;
	int32_t t56 = 5;

    t56 = ((x265+(x266|x267))+x268);

    if (t56 != 61618464) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint16_t x269 = 122U;
	int64_t x271 = INT64_MIN;
	uint64_t t57 = 25833LLU;

    t57 = ((x269+(x270|x271))+x272);

    if (t57 != 9223372036854776499LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	static int16_t x274 = 27;
	int32_t x275 = INT32_MIN;
	static uint8_t x276 = 29U;

    t58 = ((x273+(x274|x275))+x276);

    if (t58 != -2147483593) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x278 = 0;
	uint64_t x279 = UINT64_MAX;
	static uint64_t t59 = 910146201558709LLU;

    t59 = ((x277+(x278|x279))+x280);

    if (t59 != 18446744072114803357LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int32_t x281 = INT32_MAX;
	int8_t x282 = -1;
	volatile int32_t x283 = INT32_MIN;
	static int16_t x284 = -1;
	int32_t t60 = -2151;

    t60 = ((x281+(x282|x283))+x284);

    if (t60 != 2147483645) { NG(); } else { ; }
	
}

void f61(void) {
    	uint64_t x285 = 172792152LLU;
	int32_t x286 = 44;
	uint64_t x287 = UINT64_MAX;
	volatile uint8_t x288 = 23U;
	volatile uint64_t t61 = 206545358LLU;

    t61 = ((x285+(x286|x287))+x288);

    if (t61 != 172792174LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x292 = -1;
	uint64_t t62 = 300LLU;

    t62 = ((x289+(x290|x291))+x292);

    if (t62 != 9223372223909232126LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x293 = -1;
	static uint16_t x294 = UINT16_MAX;
	int32_t x296 = INT32_MIN;
	volatile int32_t t63 = -304;

    t63 = ((x293+(x294|x295))+x296);

    if (t63 != -2147418114) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x297 = INT16_MAX;
	int8_t x298 = INT8_MIN;
	static volatile int64_t x299 = 2054922128088LL;
	volatile int64_t t64 = 12234164414515LL;

    t64 = ((x297+(x298|x299))+x300);

    if (t64 != 32726LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static volatile int64_t x301 = INT64_MAX;
	int32_t x302 = 136;
	int64_t x304 = -1LL;

    t65 = ((x301+(x302|x303))+x304);

    if (t65 != 9223372034707292294LL) { NG(); } else { ; }
	
}

void f66(void) {
    	int32_t x305 = -1;
	uint8_t x306 = 0U;
	int16_t x307 = -1;
	int32_t x308 = -1;
	volatile int32_t t66 = -12;

    t66 = ((x305+(x306|x307))+x308);

    if (t66 != -3) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint8_t x313 = UINT8_MAX;
	uint32_t x314 = 8U;
	int16_t x316 = -1;
	uint64_t t67 = 2429017427828064LLU;

    t67 = ((x313+(x314|x315))+x316);

    if (t67 != 2007430764232LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x317 = -1;
	uint8_t x318 = UINT8_MAX;
	volatile uint64_t x320 = 220508392366884430LLU;
	volatile uint64_t t68 = 100754230443107056LLU;

    t68 = ((x317+(x318|x319))+x320);

    if (t68 != 220508392366884428LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x325 = INT16_MAX;
	uint16_t x326 = 56U;
	int32_t x327 = -1;
	uint8_t x328 = 10U;
	int32_t t69 = -2831;

    t69 = ((x325+(x326|x327))+x328);

    if (t69 != 32776) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x330 = UINT32_MAX;
	volatile int8_t x332 = -1;
	volatile uint64_t t70 = 7517058960160824LLU;

    t70 = ((x329+(x330|x331))+x332);

    if (t70 != 6442450941LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint16_t x333 = UINT16_MAX;
	int8_t x334 = -27;
	uint64_t t71 = 2371994483LLU;

    t71 = ((x333+(x334|x335))+x336);

    if (t71 != 2848335LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x338 = -105;
	volatile int16_t x339 = INT16_MIN;
	int64_t x340 = -63LL;
	static int64_t t72 = -214LL;

    t72 = ((x337+(x338|x339))+x340);

    if (t72 != -170LL) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x341 = INT8_MAX;
	static volatile uint8_t x343 = 1U;
	volatile int32_t t73 = 1;

    t73 = ((x341+(x342|x343))+x344);

    if (t73 != 382) { NG(); } else { ; }
	
}

void f74(void) {
    	static uint64_t x345 = 84997908LLU;
	int32_t x346 = INT32_MIN;
	volatile int16_t x347 = INT16_MIN;
	int16_t x348 = INT16_MIN;
	uint64_t t74 = 6LLU;

    t74 = ((x345+(x346|x347))+x348);

    if (t74 != 84932372LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x349 = -8293478;
	int64_t x350 = -1LL;
	volatile int8_t x351 = INT8_MIN;
	uint64_t t75 = 33994777756LLU;

    t75 = ((x349+(x350|x351))+x352);

    if (t75 != 18446744073701258136LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile uint16_t x353 = 0U;
	int64_t x354 = -4247194619676180121LL;
	static uint32_t x355 = UINT32_MAX;
	static int64_t x356 = INT64_MAX;
	int64_t t76 = -10241288720711LL;

    t76 = ((x353+(x354|x355))+x356);

    if (t76 != 4976177417275047934LL) { NG(); } else { ; }
	
}

void f77(void) {
    	volatile int32_t x357 = -6776;
	uint64_t x359 = UINT64_MAX;
	int32_t x360 = -1400;

    t77 = ((x357+(x358|x359))+x360);

    if (t77 != 18446744073709543439LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	int64_t x361 = -1LL;
	int8_t x362 = -1;
	static int32_t x363 = INT32_MIN;
	int32_t x364 = 1;
	static volatile int64_t t78 = 201LL;

    t78 = ((x361+(x362|x363))+x364);

    if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x365 = 4U;
	int16_t x366 = INT16_MAX;
	uint64_t x367 = 1730919926337849LLU;
	int32_t x368 = -38;

    t79 = ((x365+(x366|x367))+x368);

    if (t79 != 1730919926366173LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x369 = 19862;
	int8_t x371 = -50;
	int64_t x372 = 98529940LL;
	volatile int64_t t80 = 353874LL;

    t80 = ((x369+(x370|x371))+x372);

    if (t80 != 98549753LL) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x373 = 12U;
	uint64_t x374 = 68696773LLU;
	volatile int8_t x375 = -1;
	volatile uint8_t x376 = UINT8_MAX;
	static uint64_t t81 = 7948084639649209LLU;

    t81 = ((x373+(x374|x375))+x376);

    if (t81 != 266LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile int8_t x377 = -8;
	volatile int64_t x378 = INT64_MAX;
	volatile int8_t x379 = 19;
	static uint64_t x380 = UINT64_MAX;
	volatile uint64_t t82 = 202379048363094LLU;

    t82 = ((x377+(x378|x379))+x380);

    if (t82 != 9223372036854775798LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile uint64_t x381 = 2274380909978950LLU;
	int64_t x382 = -1LL;
	int8_t x383 = -1;
	volatile uint64_t t83 = 131772408650LLU;

    t83 = ((x381+(x382|x383))+x384);

    if (t83 != 2274378762495301LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	uint64_t x385 = 1LLU;
	volatile int16_t x387 = INT16_MAX;
	int64_t x388 = INT64_MIN;
	uint64_t t84 = 109506LLU;

    t84 = ((x385+(x386|x387))+x388);

    if (t84 != 9223372036854808576LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	int16_t x389 = 1;
	uint32_t x390 = 2U;
	static volatile uint64_t x391 = 262411061440771466LLU;
	static int16_t x392 = -6451;
	volatile uint64_t t85 = 10022471438LLU;

    t85 = ((x389+(x390|x391))+x392);

    if (t85 != 262411061440765016LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x394 = 32689U;
	int8_t x395 = INT8_MAX;
	uint32_t x396 = 15153274U;
	static uint32_t t86 = 15645U;

    t86 = ((x393+(x394|x395))+x396);

    if (t86 != 15218808U) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int16_t x397 = 1063;
	uint16_t x398 = 366U;
	int8_t x399 = -1;
	volatile uint8_t x400 = UINT8_MAX;
	volatile int32_t t87 = 2017;

    t87 = ((x397+(x398|x399))+x400);

    if (t87 != 1317) { NG(); } else { ; }
	
}

void f88(void) {
    	static uint64_t x401 = 33178503767LLU;
	int16_t x402 = INT16_MIN;
	uint32_t x403 = UINT32_MAX;
	uint16_t x404 = 31472U;

    t88 = ((x401+(x402|x403))+x404);

    if (t88 != 37473502534LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint8_t x406 = 0U;
	int8_t x407 = -1;
	int16_t x408 = -1;
	static int64_t t89 = 141655036616LL;

    t89 = ((x405+(x406|x407))+x408);

    if (t89 != -3LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int64_t x410 = -1LL;
	static volatile int64_t t90 = 1337885353449LL;

    t90 = ((x409+(x410|x411))+x412);

    if (t90 != -32768LL) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x413 = 578265023U;
	static uint16_t x414 = UINT16_MAX;
	int16_t x416 = INT16_MIN;

    t91 = ((x413+(x414|x415))+x416);

    if (t91 != 578232254LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x423 = INT8_MAX;
	volatile uint32_t t92 = 1093698383U;

    t92 = ((x421+(x422|x423))+x424);

    if (t92 != 2147558014U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x425 = 3497U;
	static int8_t x426 = INT8_MIN;
	int16_t x427 = INT16_MAX;
	int32_t x428 = 25547784;
	volatile int32_t t93 = 349826193;

    t93 = ((x425+(x426|x427))+x428);

    if (t93 != 25551280) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x429 = 71LLU;
	int64_t x430 = INT64_MIN;
	uint16_t x432 = UINT16_MAX;
	static uint64_t t94 = 243198745LLU;

    t94 = ((x429+(x430|x431))+x432);

    if (t94 != 18446744071562133574LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint8_t x433 = 9U;
	volatile uint16_t x434 = UINT16_MAX;
	uint16_t x435 = 1310U;
	int16_t x436 = 0;
	int32_t t95 = -17589;

    t95 = ((x433+(x434|x435))+x436);

    if (t95 != 65544) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x437 = 7645U;
	int32_t x440 = -3957782;
	volatile int32_t t96 = 145092;

    t96 = ((x437+(x438|x439))+x440);

    if (t96 != -3950138) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x441 = 672872;
	int64_t x442 = INT64_MIN;
	uint64_t x444 = 220LLU;
	static volatile uint64_t t97 = 127393300938683LLU;

    t97 = ((x441+(x442|x443))+x444);

    if (t97 != 9223372036855464513LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint16_t x445 = UINT16_MAX;
	uint8_t x446 = 1U;
	int32_t x448 = INT32_MAX;

    t98 = ((x445+(x446|x447))+x448);

    if (t98 != 2147558021LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x449 = 4U;
	int8_t x450 = 0;
	int64_t t99 = 1665434559881763285LL;

    t99 = ((x449+(x450|x451))+x452);

    if (t99 != 3442541LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int16_t x453 = INT16_MAX;
	volatile uint64_t x454 = 13858066257412723LLU;
	volatile int16_t x455 = -1;
	int32_t x456 = -1;
	uint64_t t100 = 3312936LLU;

    t100 = ((x453+(x454|x455))+x456);

    if (t100 != 32765LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int16_t x461 = INT16_MAX;
	int32_t x462 = INT32_MAX;
	int64_t x463 = 394517291253LL;
	uint8_t x464 = 0U;
	int64_t t101 = 102819447LL;

    t101 = ((x461+(x462|x463))+x464);

    if (t101 != 395137023998LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x465 = -1;
	int64_t x466 = -4045269616LL;
	int32_t x468 = 0;
	volatile int64_t t102 = 2033949316LL;

    t102 = ((x465+(x466|x467))+x468);

    if (t102 != -2LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static volatile uint64_t x473 = 2LLU;
	static int8_t x474 = INT8_MIN;
	static int16_t x475 = 0;
	int8_t x476 = 2;
	static uint64_t t103 = 14629717161LLU;

    t103 = ((x473+(x474|x475))+x476);

    if (t103 != 18446744073709551492LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x478 = -1;
	uint64_t x480 = 649093734823073LLU;

    t104 = ((x477+(x478|x479))+x480);

    if (t104 != 649093734823093LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint64_t x481 = 1391199068920455731LLU;
	int16_t x482 = INT16_MAX;
	static uint32_t x484 = UINT32_MAX;
	volatile uint64_t t105 = 1238930902566516LLU;

    t105 = ((x481+(x482|x483))+x484);

    if (t105 != 1391199073215488561LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int8_t x485 = -2;
	volatile int8_t x486 = -23;
	int16_t x487 = 8154;
	volatile int8_t x488 = 1;
	volatile int32_t t106 = 116;

    t106 = ((x485+(x486|x487))+x488);

    if (t106 != -6) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x489 = 7U;
	static int16_t x490 = INT16_MIN;
	int64_t x491 = INT64_MIN;
	int64_t t107 = -5905623LL;

    t107 = ((x489+(x490|x491))+x492);

    if (t107 != -32762LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x493 = 4402390507575243468LLU;
	static int8_t x494 = INT8_MIN;
	int16_t x496 = 344;
	volatile uint64_t t108 = 3240LLU;

    t108 = ((x493+(x494|x495))+x496);

    if (t108 != 4402390507575243684LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x497 = 3U;
	int16_t x498 = INT16_MAX;
	uint64_t x499 = 286597008LLU;
	int32_t x500 = -1;
	uint64_t t109 = 231162786791LLU;

    t109 = ((x497+(x498|x499))+x500);

    if (t109 != 286621697LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	static int8_t x501 = INT8_MIN;
	int8_t x504 = -1;
	volatile uint32_t t110 = 1183324U;

    t110 = ((x501+(x502|x503))+x504);

    if (t110 != 5630U) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int8_t x509 = -1;
	uint64_t x510 = 404340694LLU;
	uint64_t x511 = 6801532388807559899LLU;

    t111 = ((x509+(x510|x511))+x512);

    if (t111 != 6801532389076631518LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x517 = -1LL;
	uint32_t x518 = 21693U;
	static uint64_t x519 = 6548002017778LLU;
	uint16_t x520 = 31U;

    t112 = ((x517+(x518|x519))+x520);

    if (t112 != 6548002035229LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint32_t x525 = 41342604U;
	uint64_t x526 = 22491529781143LLU;
	int16_t x528 = INT16_MIN;
	uint64_t t113 = 180177LLU;

    t113 = ((x525+(x526|x527))+x528);

    if (t113 != 22491571090979LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x529 = INT8_MAX;
	static int8_t x530 = INT8_MIN;
	int64_t x531 = 11LL;
	int8_t x532 = INT8_MIN;
	volatile int64_t t114 = 179706766LL;

    t114 = ((x529+(x530|x531))+x532);

    if (t114 != -118LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint32_t x533 = 104247329U;
	int8_t x535 = -1;
	int8_t x536 = -15;
	static volatile int64_t t115 = 1853167211148019LL;

    t115 = ((x533+(x534|x535))+x536);

    if (t115 != 104247313LL) { NG(); } else { ; }
	
}

void f116(void) {
    	static uint16_t x537 = 2U;
	static uint8_t x538 = 2U;
	static volatile int8_t x539 = 63;
	int32_t x540 = INT32_MIN;

    t116 = ((x537+(x538|x539))+x540);

    if (t116 != -2147483583) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int64_t x542 = 808226LL;
	volatile int64_t t117 = 54225020934593606LL;

    t117 = ((x541+(x542|x543))+x544);

    if (t117 != 812134LL) { NG(); } else { ; }
	
}

void f118(void) {
    	static int64_t x547 = -1LL;
	int64_t x548 = 750172277603712352LL;
	volatile int64_t t118 = 1LL;

    t118 = ((x545+(x546|x547))+x548);

    if (t118 != 750172276433588459LL) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x549 = UINT16_MAX;
	int8_t x551 = 9;
	volatile uint8_t x552 = 1U;
	int32_t t119 = -3677;

    t119 = ((x549+(x550|x551))+x552);

    if (t119 != 65417) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x553 = -60;
	int8_t x554 = INT8_MAX;
	static int32_t x555 = -2586;
	int8_t x556 = INT8_MIN;
	int32_t t120 = 760637;

    t120 = ((x553+(x554|x555))+x556);

    if (t120 != -2749) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int16_t x557 = 1;
	int8_t x559 = -31;
	volatile uint64_t t121 = 0LLU;

    t121 = ((x557+(x558|x559))+x560);

    if (t121 != 6LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint8_t x561 = UINT8_MAX;
	int16_t x563 = INT16_MIN;
	int8_t x564 = INT8_MIN;

    t122 = ((x561+(x562|x563))+x564);

    if (t122 != 126) { NG(); } else { ; }
	
}

void f123(void) {
    	static int64_t x565 = 23026635LL;
	static volatile uint64_t t123 = 23501340607063LLU;

    t123 = ((x565+(x566|x567))+x568);

    if (t123 != 3232815268721544457LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x569 = 3U;
	int32_t x571 = 150;
	volatile uint8_t x572 = UINT8_MAX;
	static volatile int32_t t124 = -116;

    t124 = ((x569+(x570|x571))+x572);

    if (t124 != -32360) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x577 = INT8_MIN;
	volatile int32_t x579 = -226332;
	static uint64_t x580 = 104LLU;

    t125 = ((x577+(x578|x579))+x580);

    if (t125 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x581 = -1LL;
	int8_t x582 = INT8_MIN;
	int64_t x583 = -1LL;
	static int64_t x584 = INT64_MAX;

    t126 = ((x581+(x582|x583))+x584);

    if (t126 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f127(void) {
    	uint32_t x585 = UINT32_MAX;
	int64_t x586 = -1LL;

    t127 = ((x585+(x586|x587))+x588);

    if (t127 != 4294970924LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x590 = -1;
	static uint32_t x591 = 1080676954U;
	int16_t x592 = -1;
	volatile uint32_t t128 = 32420U;

    t128 = ((x589+(x590|x591))+x592);

    if (t128 != 65533U) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x593 = UINT32_MAX;
	volatile uint8_t x595 = 5U;
	int64_t x596 = INT64_MIN;
	int64_t t129 = -240526952306LL;

    t129 = ((x593+(x594|x595))+x596);

    if (t129 != -9223372032559808514LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x597 = INT32_MIN;
	static int16_t x598 = INT16_MIN;
	int64_t x599 = INT64_MIN;
	uint8_t x600 = 30U;
	int64_t t130 = 105LL;

    t130 = ((x597+(x598|x599))+x600);

    if (t130 != -2147516386LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x601 = -1LL;
	int32_t x603 = INT32_MIN;
	static int8_t x604 = -1;
	volatile int64_t t131 = -4LL;

    t131 = ((x601+(x602|x603))+x604);

    if (t131 != -399335LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x605 = INT8_MIN;
	static int8_t x606 = INT8_MIN;
	static uint64_t x607 = 34302355668LLU;
	uint8_t x608 = 31U;

    t132 = ((x605+(x606|x607))+x608);

    if (t132 != 18446744073709551475LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int16_t x613 = INT16_MIN;
	volatile int32_t x614 = INT32_MIN;
	volatile int64_t x615 = -909LL;
	uint8_t x616 = UINT8_MAX;

    t133 = ((x613+(x614|x615))+x616);

    if (t133 != -33422LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x617 = -424;
	static int64_t x618 = -156408988LL;
	static int32_t x619 = -2068138;
	uint64_t x620 = UINT64_MAX;
	static uint64_t t134 = 1936653447618LLU;

    t134 = ((x617+(x618|x619))+x620);

    if (t134 != 18446744073708335565LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint16_t x622 = 53U;
	int32_t x623 = -1;
	uint8_t x624 = 25U;
	volatile uint64_t t135 = 327034LLU;

    t135 = ((x621+(x622|x623))+x624);

    if (t135 != 43370LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x625 = 21U;
	static uint8_t x627 = 11U;
	uint8_t x628 = 3U;
	volatile int32_t t136 = 29628705;

    t136 = ((x625+(x626|x627))+x628);

    if (t136 != -93) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x630 = UINT16_MAX;
	uint16_t x631 = 18529U;
	int16_t x632 = INT16_MAX;
	volatile int32_t t137 = -198;

    t137 = ((x629+(x630|x631))+x632);

    if (t137 != 163837) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x633 = INT16_MIN;
	int64_t t138 = -2973171179832724LL;

    t138 = ((x633+(x634|x635))+x636);

    if (t138 != -32897LL) { NG(); } else { ; }
	
}

void f139(void) {
    	static int8_t x641 = 3;
	int16_t x642 = -1;
	static int64_t x643 = INT64_MIN;
	int64_t x644 = INT64_MIN;
	int64_t t139 = 130944631227465055LL;

    t139 = ((x641+(x642|x643))+x644);

    if (t139 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x646 = -1LL;
	int8_t x647 = INT8_MAX;
	int8_t x648 = -29;

    t140 = ((x645+(x646|x647))+x648);

    if (t140 != -31LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int16_t x649 = INT16_MAX;
	static int32_t x650 = -1;
	int32_t x651 = -1;
	static int16_t x652 = -1;
	int32_t t141 = -243;

    t141 = ((x649+(x650|x651))+x652);

    if (t141 != 32765) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x654 = UINT32_MAX;
	int64_t x655 = -1LL;
	int64_t t142 = 4044913985910023285LL;

    t142 = ((x653+(x654|x655))+x656);

    if (t142 != -65537LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x661 = INT32_MIN;
	uint64_t x663 = UINT64_MAX;
	static volatile int8_t x664 = INT8_MAX;
	volatile uint64_t t143 = 186163339738LLU;

    t143 = ((x661+(x662|x663))+x664);

    if (t143 != 18446744071562068094LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x665 = -1;
	uint64_t x666 = UINT64_MAX;
	static int32_t x667 = INT32_MIN;
	uint64_t x668 = UINT64_MAX;
	uint64_t t144 = 733LLU;

    t144 = ((x665+(x666|x667))+x668);

    if (t144 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint16_t x669 = UINT16_MAX;
	int8_t x670 = -1;
	int32_t x672 = 4423961;

    t145 = ((x669+(x670|x671))+x672);

    if (t145 != 4489495LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x673 = INT8_MIN;
	int32_t x674 = 5460146;
	uint8_t x675 = 1U;
	int8_t x676 = INT8_MIN;
	volatile int32_t t146 = 170;

    t146 = ((x673+(x674|x675))+x676);

    if (t146 != 5459891) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x677 = 5;
	uint64_t x678 = 9754818LLU;
	static int32_t x679 = 91495;
	uint8_t x680 = 54U;

    t147 = ((x677+(x678|x679))+x680);

    if (t147 != 9829922LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint16_t x681 = 15670U;
	static int16_t x682 = INT16_MAX;
	int16_t x683 = INT16_MIN;
	uint32_t t148 = 243189987U;

    t148 = ((x681+(x682|x683))+x684);

    if (t148 != 6530445U) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x685 = 1620U;
	uint16_t x687 = UINT16_MAX;
	uint32_t x688 = 0U;
	uint32_t t149 = 1844966157U;

    t149 = ((x685+(x686|x687))+x688);

    if (t149 != 67155U) { NG(); } else { ; }
	
}

void f150(void) {
    	int32_t x690 = -1;
	volatile int32_t x691 = INT32_MIN;
	uint16_t x692 = UINT16_MAX;

    t150 = ((x689+(x690|x691))+x692);

    if (t150 != 65535) { NG(); } else { ; }
	
}

void f151(void) {
    	int32_t x693 = INT32_MAX;
	volatile int8_t x694 = 18;
	static uint32_t x696 = 391U;
	uint32_t t151 = 3U;

    t151 = ((x693+(x694|x695))+x696);

    if (t151 != 2147451288U) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x697 = UINT64_MAX;
	volatile int8_t x698 = INT8_MIN;
	volatile uint64_t t152 = 1221806LLU;

    t152 = ((x697+(x698|x699))+x700);

    if (t152 != 4294967293LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static int32_t x703 = 4;
	volatile int32_t x704 = INT32_MIN;
	uint32_t t153 = 14288765U;

    t153 = ((x701+(x702|x703))+x704);

    if (t153 != 2147483523U) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int16_t x706 = 133;
	int16_t x708 = INT16_MAX;
	static volatile int32_t t154 = 87;

    t154 = ((x705+(x706|x707))+x708);

    if (t154 != 32741) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x709 = INT8_MIN;
	volatile uint8_t x712 = 8U;

    t155 = ((x709+(x710|x711))+x712);

    if (t155 != -155) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x713 = 11996236;
	volatile int32_t x714 = 15310686;
	static uint32_t x716 = UINT32_MAX;
	static uint32_t t156 = 10681576U;

    t156 = ((x713+(x714|x715))+x716);

    if (t156 != 11996234U) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x717 = 3;
	static volatile uint64_t x719 = UINT64_MAX;
	int32_t x720 = -101324;
	volatile uint64_t t157 = 431LLU;

    t157 = ((x717+(x718|x719))+x720);

    if (t157 != 18446744073709450294LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x721 = INT16_MIN;
	uint64_t x722 = 10959064LLU;
	int16_t x723 = -1;
	volatile int64_t x724 = -244677LL;
	volatile uint64_t t158 = 363976620715LLU;

    t158 = ((x721+(x722|x723))+x724);

    if (t158 != 18446744073709274170LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x725 = INT8_MIN;
	uint16_t x726 = 1695U;
	int16_t x727 = -546;
	volatile int32_t x728 = -1;
	int32_t t159 = -3730;

    t159 = ((x725+(x726|x727))+x728);

    if (t159 != -162) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int32_t x729 = -3456790;
	volatile int16_t x732 = -1;
	volatile uint64_t t160 = 6079881688232LLU;

    t160 = ((x729+(x730|x731))+x732);

    if (t160 != 18446744073707271516LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x738 = -1;
	int8_t x739 = INT8_MAX;
	uint8_t x740 = 0U;
	static volatile int32_t t161 = -7749;

    t161 = ((x737+(x738|x739))+x740);

    if (t161 != 28739) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint64_t x741 = UINT64_MAX;
	volatile uint8_t x742 = UINT8_MAX;
	int32_t x744 = INT32_MIN;
	static volatile uint64_t t162 = 3243354LLU;

    t162 = ((x741+(x742|x743))+x744);

    if (t162 != 18446744071562068222LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int64_t x746 = 1014748788311127792LL;
	uint16_t x748 = UINT16_MAX;
	uint64_t t163 = 69116379776703LLU;

    t163 = ((x745+(x746|x747))+x748);

    if (t163 != 18446744071688681198LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x749 = UINT32_MAX;
	int32_t x751 = INT32_MAX;
	int16_t x752 = INT16_MIN;
	uint32_t t164 = 2U;

    t164 = ((x749+(x750|x751))+x752);

    if (t164 != 4294934526U) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x753 = INT32_MAX;
	uint32_t x754 = 838540302U;
	volatile uint16_t x755 = 397U;

    t165 = ((x753+(x754|x755))+x756);

    if (t165 != 2986024333U) { NG(); } else { ; }
	
}

void f166(void) {
    	uint32_t x757 = 2032825115U;
	uint64_t x758 = 42551LLU;
	int16_t x759 = 1251;
	uint16_t x760 = 491U;

    t166 = ((x757+(x758|x759))+x760);

    if (t166 != 2032868349LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x761 = INT64_MAX;
	static int64_t x762 = -63838LL;
	int16_t x763 = -1;
	volatile int32_t x764 = -1;

    t167 = ((x761+(x762|x763))+x764);

    if (t167 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static volatile int32_t x765 = -1;
	uint8_t x766 = 7U;
	int32_t x767 = -2027;
	int32_t x768 = -1;
	int32_t t168 = -159522671;

    t168 = ((x765+(x766|x767))+x768);

    if (t168 != -2027) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x770 = INT8_MIN;
	uint64_t x772 = 17639990LLU;
	uint64_t t169 = 7274910LLU;

    t169 = ((x769+(x770|x771))+x772);

    if (t169 != 17640117LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x774 = -43;
	uint8_t x775 = 24U;
	volatile uint16_t x776 = 3810U;
	volatile int32_t t170 = -1046162;

    t170 = ((x773+(x774|x775))+x776);

    if (t170 != 3774) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x777 = INT8_MAX;
	int8_t x779 = INT8_MIN;
	uint32_t x780 = 702311U;
	uint32_t t171 = 234552313U;

    t171 = ((x777+(x778|x779))+x780);

    if (t171 != 702319U) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x781 = INT8_MIN;
	uint8_t x782 = UINT8_MAX;
	volatile int16_t x783 = -1;
	int16_t x784 = INT16_MIN;
	static int32_t t172 = 294096231;

    t172 = ((x781+(x782|x783))+x784);

    if (t172 != -32897) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x785 = -105;
	uint32_t x786 = 15204U;
	volatile uint64_t x787 = 1327843814LLU;
	static int16_t x788 = INT16_MIN;
	volatile uint64_t t173 = 17217730LLU;

    t173 = ((x785+(x786|x787))+x788);

    if (t173 != 1327823741LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x789 = -1LL;
	uint16_t x790 = 11U;
	volatile int16_t x791 = -880;
	int64_t x792 = -1LL;
	volatile int64_t t174 = -947LL;

    t174 = ((x789+(x790|x791))+x792);

    if (t174 != -871LL) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x793 = UINT8_MAX;
	uint32_t x794 = 1U;
	static uint32_t x795 = 3836306U;
	int16_t x796 = INT16_MAX;
	uint32_t t175 = 16584U;

    t175 = ((x793+(x794|x795))+x796);

    if (t175 != 3869329U) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x797 = 8U;
	uint64_t x798 = 21006672LLU;
	static int16_t x800 = -130;
	static volatile uint64_t t176 = 3377685882LLU;

    t176 = ((x797+(x798|x799))+x800);

    if (t176 != 9223372036875782358LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x801 = INT32_MIN;
	int8_t x802 = -1;
	int64_t x803 = -567554941560LL;
	int64_t x804 = INT64_MAX;

    t177 = ((x801+(x802|x803))+x804);

    if (t177 != 9223372034707292158LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x810 = 1U;
	int16_t x812 = -2015;
	volatile int32_t t178 = 6;

    t178 = ((x809+(x810|x811))+x812);

    if (t178 != 14644) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x825 = INT8_MIN;
	int64_t x826 = -1LL;
	uint8_t x828 = UINT8_MAX;
	int64_t t179 = 2049665449LL;

    t179 = ((x825+(x826|x827))+x828);

    if (t179 != 126LL) { NG(); } else { ; }
	
}

void f180(void) {
    	uint8_t x833 = 114U;
	static uint32_t x834 = 4039U;
	int64_t x835 = -925594677813LL;
	int16_t x836 = INT16_MAX;
	int64_t t180 = -124302LL;

    t180 = ((x833+(x834|x835))+x836);

    if (t180 != -925594644416LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x838 = INT32_MIN;
	uint64_t x839 = UINT64_MAX;
	uint16_t x840 = UINT16_MAX;
	uint64_t t181 = 17714565610LLU;

    t181 = ((x837+(x838|x839))+x840);

    if (t181 != 9223372036854841341LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int16_t x842 = INT16_MIN;
	int16_t x843 = -3142;
	int8_t x844 = -1;
	volatile int32_t t182 = -1;

    t182 = ((x841+(x842|x843))+x844);

    if (t182 != -3271) { NG(); } else { ; }
	
}

void f183(void) {
    	volatile int64_t x845 = INT64_MAX;
	volatile int64_t x847 = INT64_MIN;
	volatile int16_t x848 = INT16_MIN;
	volatile int64_t t183 = -13352382660254LL;

    t183 = ((x845+(x846|x847))+x848);

    if (t183 != 9223372036854743038LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x849 = INT64_MAX;
	int32_t x850 = -1;
	int32_t x851 = INT32_MIN;
	int32_t x852 = INT32_MIN;
	volatile int64_t t184 = -5415782LL;

    t184 = ((x849+(x850|x851))+x852);

    if (t184 != 9223372034707292158LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x861 = INT16_MIN;
	volatile int64_t x863 = -74754479911LL;
	int16_t x864 = INT16_MAX;
	int64_t t185 = 2LL;

    t185 = ((x861+(x862|x863))+x864);

    if (t185 != -74754479912LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x865 = UINT32_MAX;
	uint8_t x866 = UINT8_MAX;
	int16_t x867 = INT16_MIN;
	volatile int64_t t186 = -20011808LL;

    t186 = ((x865+(x866|x867))+x868);

    if (t186 != 4294934902LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x869 = -1;
	int32_t x871 = INT32_MAX;
	int8_t x872 = INT8_MIN;
	int64_t t187 = -238422723651106LL;

    t187 = ((x869+(x870|x871))+x872);

    if (t187 != 9223372036854775678LL) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x873 = 11U;
	uint64_t x875 = 289700LLU;
	uint32_t x876 = 1578155U;
	volatile uint64_t t188 = 61196378025236017LLU;

    t188 = ((x873+(x874|x875))+x876);

    if (t188 != 1867938LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x877 = 708365;
	volatile int32_t x878 = INT32_MIN;
	int64_t x879 = -1LL;
	static int32_t x880 = INT32_MIN;
	volatile int64_t t189 = 172036503271654975LL;

    t189 = ((x877+(x878|x879))+x880);

    if (t189 != -2146775284LL) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint8_t x881 = UINT8_MAX;
	int64_t x882 = -1LL;
	int64_t x884 = -1LL;
	int64_t t190 = 1674184572754962LL;

    t190 = ((x881+(x882|x883))+x884);

    if (t190 != 253LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x885 = INT32_MIN;
	static volatile int16_t x887 = 10;
	int64_t x888 = -1LL;
	static int64_t t191 = -71993951469LL;

    t191 = ((x885+(x886|x887))+x888);

    if (t191 != -3989165219874890551LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x889 = INT32_MAX;
	uint32_t x890 = 1657U;
	int16_t x892 = -228;
	uint32_t t192 = 115083U;

    t192 = ((x889+(x890|x891))+x892);

    if (t192 != 2147485080U) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x894 = INT8_MIN;
	static volatile int32_t x895 = INT32_MAX;

    t193 = ((x893+(x894|x895))+x896);

    if (t193 != -2LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint64_t x897 = 358LLU;
	int32_t x898 = INT32_MIN;
	int8_t x900 = -1;
	volatile uint64_t t194 = 469352LLU;

    t194 = ((x897+(x898|x899))+x900);

    if (t194 != 18446744071562068348LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x901 = INT64_MAX;
	int32_t x902 = INT32_MIN;
	int16_t x903 = INT16_MIN;
	int64_t t195 = 689960877874398LL;

    t195 = ((x901+(x902|x903))+x904);

    if (t195 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x906 = 30U;
	int16_t x907 = 1544;
	volatile int32_t t196 = 0;

    t196 = ((x905+(x906|x907))+x908);

    if (t196 != -2147482073) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x909 = 4113U;
	int8_t x910 = INT8_MIN;
	int16_t x911 = INT16_MAX;
	static int8_t x912 = 0;
	volatile int32_t t197 = -38;

    t197 = ((x909+(x910|x911))+x912);

    if (t197 != 4112) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int32_t x913 = -179828040;
	static uint32_t x916 = 2820U;

    t198 = ((x913+(x914|x915))+x916);

    if (t198 != 567595046844391755LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x921 = INT16_MAX;
	uint8_t x922 = UINT8_MAX;
	int64_t x923 = -1LL;
	int64_t t199 = 1LL;

    t199 = ((x921+(x922|x923))+x924);

    if (t199 != 37387LL) { NG(); } else { ; }
	
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

