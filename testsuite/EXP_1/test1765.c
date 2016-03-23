
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

static int8_t x3 = INT8_MAX;
volatile int32_t x14 = 1;
uint16_t x15 = UINT16_MAX;
int64_t x21 = INT64_MAX;
volatile int16_t x22 = -1;
volatile uint32_t x35 = 490541391U;
uint32_t x45 = 10454060U;
static uint64_t x46 = UINT64_MAX;
uint16_t x52 = UINT16_MAX;
volatile int64_t t10 = -375497829391318758LL;
int64_t x53 = -2147261152641LL;
int32_t x55 = INT32_MIN;
uint16_t x59 = 0U;
uint16_t x71 = 23243U;
uint16_t x72 = UINT16_MAX;
static int32_t x74 = -1;
uint32_t t16 = 9U;
int16_t x77 = 1;
uint16_t x78 = UINT16_MAX;
volatile uint16_t x90 = 2U;
uint8_t x91 = 23U;
uint8_t x96 = UINT8_MAX;
uint32_t x98 = 34U;
uint32_t t22 = 0U;
int16_t x105 = -21;
volatile int64_t x106 = INT64_MIN;
static int64_t t24 = 199864104LL;
uint32_t x120 = 432315U;
static int32_t x126 = 209055;
int16_t x129 = INT16_MIN;
volatile int16_t x130 = INT16_MAX;
int16_t x138 = INT16_MIN;
uint64_t t32 = 41195996538451LLU;
int64_t x149 = 4013434LL;
uint64_t x158 = UINT64_MAX;
volatile uint8_t x161 = 1U;
int32_t t37 = -201;
int32_t t38 = -3;
volatile int16_t x172 = INT16_MAX;
static int32_t t39 = -5302;
static int8_t x176 = 1;
uint16_t x179 = 6U;
uint8_t x182 = UINT8_MAX;
uint32_t t42 = 3118426U;
volatile int32_t x189 = INT32_MIN;
int8_t x191 = INT8_MAX;
int8_t x194 = INT8_MIN;
uint16_t x201 = 3U;
volatile uint64_t t48 = 93LLU;
int64_t x213 = 8634323760804LL;
int32_t x214 = -1;
volatile int32_t t49 = -4630;
uint16_t x225 = 31U;
uint64_t x241 = UINT64_MAX;
static int8_t x245 = -1;
int64_t x249 = INT64_MAX;
int32_t x252 = -1;
uint64_t x266 = 6817605284537259LLU;
int16_t x267 = INT16_MIN;
uint32_t t59 = 4048U;
volatile uint32_t x269 = 26U;
int8_t x280 = -10;
static uint16_t x289 = UINT16_MAX;
int16_t x298 = INT16_MIN;
uint8_t x299 = UINT8_MAX;
static volatile uint32_t t66 = 340378843U;
uint8_t x305 = UINT8_MAX;
int64_t x306 = INT64_MIN;
volatile int8_t x311 = 1;
uint8_t x312 = 111U;
int16_t x316 = 0;
int16_t x318 = -1;
int32_t x319 = 1;
int32_t t71 = 7;
int16_t x321 = INT16_MIN;
volatile uint8_t x326 = UINT8_MAX;
volatile uint32_t x339 = 707121295U;
volatile int64_t x346 = INT64_MIN;
static volatile uint16_t x347 = 0U;
uint8_t x356 = 15U;
volatile int32_t t79 = 52692388;
int16_t x369 = INT16_MIN;
volatile uint32_t t83 = 709389089U;
int8_t x374 = -1;
static int16_t x381 = -1;
volatile uint16_t x382 = 2470U;
static volatile uint64_t t87 = 635856303793208LLU;
uint32_t x401 = 234239919U;
int32_t t89 = 14;
int16_t x406 = -1;
int32_t x410 = INT32_MIN;
static uint16_t x416 = UINT16_MAX;
static uint8_t x421 = UINT8_MAX;
int32_t x422 = -1688;
static uint8_t x423 = 3U;
volatile int8_t x426 = 5;
int32_t t94 = -3424636;
int8_t x430 = INT8_MAX;
int32_t x434 = INT32_MIN;
uint64_t x436 = UINT64_MAX;
static uint64_t t96 = 2LLU;
uint32_t x445 = 65783209U;
int8_t x454 = INT8_MIN;
int64_t x457 = INT64_MAX;
int16_t x466 = -181;
uint8_t x472 = 94U;
int64_t x473 = 670212293037227260LL;
int8_t x476 = -60;
uint64_t x478 = 12173960003928262LLU;
static volatile int64_t x479 = 58966LL;
volatile int32_t t108 = 7;
static volatile int64_t x497 = INT64_MIN;
static volatile uint32_t x501 = 0U;
volatile int64_t x504 = -1LL;
uint32_t x506 = UINT32_MAX;
int32_t x529 = INT32_MIN;
int64_t x536 = 15636882030LL;
uint64_t x537 = 7966113494598LLU;
int16_t x545 = 42;
int64_t x548 = -109657772LL;
int32_t x552 = 2;
volatile int16_t x557 = INT16_MAX;
int32_t t125 = -1;
int8_t x575 = -7;
static int32_t t127 = 117894327;
volatile uint8_t x577 = 117U;
volatile int8_t x583 = INT8_MIN;
static int32_t x589 = -5;
static uint8_t x593 = 30U;
int64_t t131 = 539898769698436LL;
static int64_t x597 = INT64_MAX;
int16_t x603 = INT16_MIN;
int64_t x604 = -295636184354487LL;
int64_t t133 = 72304380768LL;
int16_t x605 = INT16_MIN;
static uint16_t x613 = UINT16_MAX;
uint64_t t137 = 3934LLU;
int64_t x626 = 28LL;
uint8_t x632 = 25U;
static int16_t x639 = INT16_MIN;
int64_t x641 = INT64_MIN;
int8_t x642 = INT8_MAX;
int64_t x643 = -48992178892819LL;
int16_t x644 = INT16_MIN;
static volatile uint8_t x645 = 0U;
int64_t x646 = INT64_MIN;
int16_t x649 = INT16_MAX;
static volatile int64_t t144 = -4150267122644LL;
uint8_t x654 = 2U;
static uint32_t x657 = 728233730U;
volatile int64_t t146 = -56397600669687LL;
int64_t x662 = INT64_MIN;
uint8_t x663 = UINT8_MAX;
int64_t x666 = -1819LL;
int64_t x669 = 921005211464377LL;
static volatile int16_t x676 = -2151;
static volatile int32_t t151 = 0;
int16_t x697 = INT16_MAX;
uint16_t x703 = UINT16_MAX;
int32_t x704 = 8;
int16_t x710 = INT16_MIN;
int64_t x712 = INT64_MAX;
volatile uint64_t t160 = 84LLU;
volatile uint64_t t161 = 70045017699033917LLU;
volatile uint16_t x731 = UINT16_MAX;
int64_t x732 = -31LL;
static int64_t t163 = 3651786125LL;
int64_t x742 = -1LL;
int64_t x746 = 5LL;
uint32_t t167 = UINT32_MAX;
volatile uint8_t x754 = 0U;
volatile uint64_t x759 = 10028030LLU;
uint64_t x761 = 17LLU;
int32_t x762 = INT32_MAX;
int16_t x763 = -1;
int16_t x766 = -1;
int16_t x783 = INT16_MIN;
static uint16_t x795 = 4U;
static int8_t x796 = INT8_MIN;
volatile int32_t t177 = 130;
int32_t t178 = 1073903;
static uint16_t x801 = 6482U;
int32_t x807 = -327522;
int32_t x809 = -1;
uint16_t x811 = UINT16_MAX;
int32_t x813 = INT32_MIN;
int64_t x818 = -1LL;
uint32_t x820 = 10U;
int64_t x821 = INT64_MIN;
int16_t x824 = -1;
uint16_t x829 = 795U;
volatile int64_t x831 = 715665822LL;
uint8_t x836 = UINT8_MAX;
int32_t t187 = 83;
static volatile uint32_t x844 = 79U;
uint32_t t188 = 76U;
uint64_t x851 = UINT64_MAX;
volatile int16_t x857 = 1;
volatile int32_t x868 = INT32_MAX;
int32_t t194 = 7;
int32_t t195 = 25254706;
int8_t x876 = 2;
int8_t x892 = INT8_MIN;
int32_t t199 = 1702103;


void f0(void) {
    	volatile int8_t x1 = INT8_MIN;
	static volatile uint8_t x2 = 107U;
	uint64_t x4 = 2194663785496547020LLU;
	volatile uint64_t t0 = 9LLU;

    t0 = (((x1<=x2)+x3)+x4);

    if (t0 != 2194663785496547148LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int64_t x9 = INT64_MAX;
	volatile uint32_t x10 = 1235655067U;
	uint8_t x11 = 23U;
	volatile int16_t x12 = 268;
	volatile int32_t t1 = -11441;

    t1 = (((x9<=x10)+x11)+x12);

    if (t1 != 291) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x13 = UINT64_MAX;
	static int64_t x16 = INT64_MIN;
	int64_t t2 = -210LL;

    t2 = (((x13<=x14)+x15)+x16);

    if (t2 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x17 = -12812779773961LL;
	int8_t x18 = INT8_MAX;
	static int8_t x19 = INT8_MIN;
	volatile int8_t x20 = INT8_MIN;
	int32_t t3 = 0;

    t3 = (((x17<=x18)+x19)+x20);

    if (t3 != -255) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x23 = -1;
	int32_t x24 = INT32_MAX;
	int32_t t4 = 2336837;

    t4 = (((x21<=x22)+x23)+x24);

    if (t4 != 2147483646) { NG(); } else { ; }
	
}

void f5(void) {
    	int64_t x29 = -1699622104LL;
	static int32_t x30 = 0;
	int8_t x31 = INT8_MIN;
	uint8_t x32 = 0U;
	int32_t t5 = 1;

    t5 = (((x29<=x30)+x31)+x32);

    if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x33 = 1U;
	uint16_t x34 = UINT16_MAX;
	int32_t x36 = 74521838;
	volatile uint32_t t6 = 14341U;

    t6 = (((x33<=x34)+x35)+x36);

    if (t6 != 565063230U) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x37 = INT64_MAX;
	int16_t x38 = -1;
	int8_t x39 = INT8_MIN;
	uint16_t x40 = 868U;
	int32_t t7 = -188;

    t7 = (((x37<=x38)+x39)+x40);

    if (t7 != 740) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x41 = UINT16_MAX;
	int16_t x42 = INT16_MAX;
	static int64_t x43 = -1736LL;
	uint32_t x44 = 450768945U;
	int64_t t8 = 23LL;

    t8 = (((x41<=x42)+x43)+x44);

    if (t8 != 450767209LL) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int32_t x47 = -121089;
	int16_t x48 = -1;
	volatile int32_t t9 = -97;

    t9 = (((x45<=x46)+x47)+x48);

    if (t9 != -121089) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x49 = UINT64_MAX;
	static int64_t x50 = 720895872803LL;
	int64_t x51 = -74222063LL;

    t10 = (((x49<=x50)+x51)+x52);

    if (t10 != -74156528LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x54 = -1;
	uint64_t x56 = 1756LLU;
	volatile uint64_t t11 = 519557242922027452LLU;

    t11 = (((x53<=x54)+x55)+x56);

    if (t11 != 18446744071562069725LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x57 = INT16_MIN;
	int32_t x58 = 4632;
	int8_t x60 = 40;
	int32_t t12 = 1467;

    t12 = (((x57<=x58)+x59)+x60);

    if (t12 != 41) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint8_t x61 = UINT8_MAX;
	int32_t x62 = INT32_MIN;
	static int8_t x63 = INT8_MIN;
	int16_t x64 = INT16_MAX;
	static int32_t t13 = -526993857;

    t13 = (((x61<=x62)+x63)+x64);

    if (t13 != 32639) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x65 = INT32_MAX;
	volatile int64_t x66 = -607277244571309820LL;
	int16_t x67 = INT16_MAX;
	uint32_t x68 = 15U;
	uint32_t t14 = 6882161U;

    t14 = (((x65<=x66)+x67)+x68);

    if (t14 != 32782U) { NG(); } else { ; }
	
}

void f15(void) {
    	static int64_t x69 = -6182615953293122LL;
	volatile int8_t x70 = INT8_MIN;
	static volatile int32_t t15 = 9056;

    t15 = (((x69<=x70)+x71)+x72);

    if (t15 != 88779) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x73 = 10378504LL;
	volatile int32_t x75 = INT32_MIN;
	uint32_t x76 = UINT32_MAX;

    t16 = (((x73<=x74)+x75)+x76);

    if (t16 != 2147483647U) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x79 = 2095278;
	int32_t x80 = INT32_MIN;
	volatile int32_t t17 = -964;

    t17 = (((x77<=x78)+x79)+x80);

    if (t17 != -2145388369) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x81 = INT16_MIN;
	int8_t x82 = INT8_MIN;
	int64_t x83 = -1839331903080893LL;
	static volatile int32_t x84 = 1;
	int64_t t18 = -13106328LL;

    t18 = (((x81<=x82)+x83)+x84);

    if (t18 != -1839331903080891LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x85 = 16;
	int32_t x86 = INT32_MIN;
	static int32_t x87 = -1;
	int16_t x88 = INT16_MIN;
	int32_t t19 = -19708;

    t19 = (((x85<=x86)+x87)+x88);

    if (t19 != -32769) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x89 = INT16_MIN;
	static int8_t x92 = 2;
	volatile int32_t t20 = -1025;

    t20 = (((x89<=x90)+x91)+x92);

    if (t20 != 26) { NG(); } else { ; }
	
}

void f21(void) {
    	static int64_t x93 = 489393349939138099LL;
	int16_t x94 = INT16_MIN;
	int16_t x95 = INT16_MIN;
	static int32_t t21 = -3;

    t21 = (((x93<=x94)+x95)+x96);

    if (t21 != -32513) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint8_t x97 = 56U;
	static int32_t x99 = -1;
	volatile uint32_t x100 = 11U;

    t22 = (((x97<=x98)+x99)+x100);

    if (t22 != 10U) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x101 = INT32_MAX;
	static uint16_t x102 = UINT16_MAX;
	uint16_t x103 = 2U;
	int8_t x104 = -1;
	int32_t t23 = -2;

    t23 = (((x101<=x102)+x103)+x104);

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x107 = -3086014LL;
	int8_t x108 = INT8_MIN;

    t24 = (((x105<=x106)+x107)+x108);

    if (t24 != -3086142LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int64_t x109 = INT64_MAX;
	int16_t x110 = -1;
	static volatile int16_t x111 = -1;
	volatile uint32_t x112 = 53949U;
	uint32_t t25 = 18U;

    t25 = (((x109<=x110)+x111)+x112);

    if (t25 != 53948U) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x113 = -28593316981102892LL;
	static int16_t x114 = INT16_MIN;
	int16_t x115 = -43;
	static uint64_t x116 = 15775737789LLU;
	volatile uint64_t t26 = 13LLU;

    t26 = (((x113<=x114)+x115)+x116);

    if (t26 != 15775737747LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int32_t x117 = INT32_MIN;
	int64_t x118 = -1LL;
	static uint8_t x119 = 4U;
	volatile uint32_t t27 = 142U;

    t27 = (((x117<=x118)+x119)+x120);

    if (t27 != 432320U) { NG(); } else { ; }
	
}

void f28(void) {
    	int8_t x121 = INT8_MIN;
	volatile int64_t x122 = INT64_MIN;
	volatile int8_t x123 = 50;
	uint32_t x124 = UINT32_MAX;
	static uint32_t t28 = 7106359U;

    t28 = (((x121<=x122)+x123)+x124);

    if (t28 != 49U) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x125 = 0;
	uint8_t x127 = 1U;
	int8_t x128 = INT8_MIN;
	int32_t t29 = 54;

    t29 = (((x125<=x126)+x127)+x128);

    if (t29 != -126) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x131 = -1;
	static int16_t x132 = INT16_MAX;
	int32_t t30 = 3;

    t30 = (((x129<=x130)+x131)+x132);

    if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x133 = -56871248LL;
	static uint16_t x134 = 9U;
	uint8_t x135 = UINT8_MAX;
	uint16_t x136 = UINT16_MAX;
	int32_t t31 = -39181852;

    t31 = (((x133<=x134)+x135)+x136);

    if (t31 != 65791) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x137 = 1266U;
	uint64_t x139 = 38113005529977LLU;
	volatile int64_t x140 = -16697621LL;

    t32 = (((x137<=x138)+x139)+x140);

    if (t32 != 38112988832357LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x141 = INT8_MIN;
	int8_t x142 = -1;
	int16_t x143 = -1702;
	volatile int8_t x144 = INT8_MIN;
	volatile int32_t t33 = -108;

    t33 = (((x141<=x142)+x143)+x144);

    if (t33 != -1829) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x145 = 145595017084LLU;
	uint32_t x146 = 209094U;
	static int64_t x147 = -119600015954LL;
	int64_t x148 = INT64_MAX;
	int64_t t34 = 98959108716428LL;

    t34 = (((x145<=x146)+x147)+x148);

    if (t34 != 9223371917254759853LL) { NG(); } else { ; }
	
}

void f35(void) {
    	int64_t x150 = -20947931371283LL;
	uint8_t x151 = UINT8_MAX;
	int8_t x152 = INT8_MIN;
	volatile int32_t t35 = -6535146;

    t35 = (((x149<=x150)+x151)+x152);

    if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
    	uint8_t x157 = 1U;
	static uint8_t x159 = UINT8_MAX;
	int16_t x160 = INT16_MIN;
	volatile int32_t t36 = -7;

    t36 = (((x157<=x158)+x159)+x160);

    if (t36 != -32512) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x162 = INT64_MAX;
	static int8_t x163 = INT8_MIN;
	static int8_t x164 = -2;

    t37 = (((x161<=x162)+x163)+x164);

    if (t37 != -129) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x165 = INT32_MIN;
	int32_t x166 = -177765687;
	volatile int32_t x167 = INT32_MIN;
	volatile uint16_t x168 = UINT16_MAX;

    t38 = (((x165<=x166)+x167)+x168);

    if (t38 != -2147418112) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x169 = 174327511784409LLU;
	volatile uint8_t x170 = 24U;
	int32_t x171 = 6781738;

    t39 = (((x169<=x170)+x171)+x172);

    if (t39 != 6814505) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x173 = -1;
	uint32_t x174 = 567251U;
	int8_t x175 = INT8_MIN;
	volatile int32_t t40 = -768;

    t40 = (((x173<=x174)+x175)+x176);

    if (t40 != -127) { NG(); } else { ; }
	
}

void f41(void) {
    	static int16_t x177 = 9;
	volatile int8_t x178 = INT8_MAX;
	static int32_t x180 = -11;
	int32_t t41 = -63;

    t41 = (((x177<=x178)+x179)+x180);

    if (t41 != -4) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x181 = INT16_MAX;
	static volatile uint32_t x183 = 1469891U;
	static int16_t x184 = -1;

    t42 = (((x181<=x182)+x183)+x184);

    if (t42 != 1469890U) { NG(); } else { ; }
	
}

void f43(void) {
    	int16_t x185 = 0;
	int32_t x186 = -9;
	int32_t x187 = -15221586;
	volatile int8_t x188 = INT8_MIN;
	volatile int32_t t43 = 5458086;

    t43 = (((x185<=x186)+x187)+x188);

    if (t43 != -15221714) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x190 = 2441;
	volatile uint32_t x192 = UINT32_MAX;
	volatile uint32_t t44 = 1839U;

    t44 = (((x189<=x190)+x191)+x192);

    if (t44 != 127U) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x193 = INT8_MAX;
	volatile uint16_t x195 = 286U;
	int16_t x196 = INT16_MIN;
	int32_t t45 = 71175046;

    t45 = (((x193<=x194)+x195)+x196);

    if (t45 != -32482) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile int8_t x197 = 8;
	int16_t x198 = 1;
	volatile uint64_t x199 = 46412664995LLU;
	int8_t x200 = INT8_MAX;
	volatile uint64_t t46 = 1766577208111LLU;

    t46 = (((x197<=x198)+x199)+x200);

    if (t46 != 46412665122LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x202 = 901714U;
	uint8_t x203 = UINT8_MAX;
	uint8_t x204 = 0U;
	volatile int32_t t47 = -219306;

    t47 = (((x201<=x202)+x203)+x204);

    if (t47 != 256) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x209 = INT16_MIN;
	static int64_t x210 = -1LL;
	uint64_t x211 = 115971772712983LLU;
	int16_t x212 = INT16_MIN;

    t48 = (((x209<=x210)+x211)+x212);

    if (t48 != 115971772680216LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x215 = INT16_MIN;
	int32_t x216 = 1767;

    t49 = (((x213<=x214)+x215)+x216);

    if (t49 != -31001) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x226 = -142399;
	int64_t x227 = -1LL;
	static volatile int8_t x228 = INT8_MIN;
	static volatile int64_t t50 = 246686LL;

    t50 = (((x225<=x226)+x227)+x228);

    if (t50 != -129LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x229 = -750457573LL;
	static volatile int8_t x230 = -1;
	static int16_t x231 = 47;
	static int64_t x232 = INT64_MIN;
	volatile int64_t t51 = 400466307542LL;

    t51 = (((x229<=x230)+x231)+x232);

    if (t51 != -9223372036854775760LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x233 = INT64_MIN;
	uint16_t x234 = 15U;
	volatile uint8_t x235 = 2U;
	uint64_t x236 = 2176540808340LLU;
	volatile uint64_t t52 = 539785912466783985LLU;

    t52 = (((x233<=x234)+x235)+x236);

    if (t52 != 2176540808343LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x237 = 16579878356LLU;
	int8_t x238 = -1;
	static int64_t x239 = -1LL;
	volatile uint64_t x240 = UINT64_MAX;
	volatile uint64_t t53 = UINT64_MAX;

    t53 = (((x237<=x238)+x239)+x240);

    if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x242 = 3U;
	static int8_t x243 = INT8_MIN;
	volatile int16_t x244 = -1;
	int32_t t54 = 192998396;

    t54 = (((x241<=x242)+x243)+x244);

    if (t54 != -129) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x246 = 878447433626147LLU;
	uint32_t x247 = 308U;
	uint16_t x248 = UINT16_MAX;
	static volatile uint32_t t55 = 3926U;

    t55 = (((x245<=x246)+x247)+x248);

    if (t55 != 65843U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint16_t x250 = 565U;
	volatile int64_t x251 = -4324954715524709537LL;
	int64_t t56 = -1LL;

    t56 = (((x249<=x250)+x251)+x252);

    if (t56 != -4324954715524709538LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x253 = 386U;
	int64_t x254 = INT64_MIN;
	uint32_t x255 = 93U;
	int32_t x256 = INT32_MIN;
	static uint32_t t57 = 185U;

    t57 = (((x253<=x254)+x255)+x256);

    if (t57 != 2147483741U) { NG(); } else { ; }
	
}

void f58(void) {
    	int32_t x261 = INT32_MIN;
	volatile int64_t x262 = INT64_MAX;
	volatile int64_t x263 = -243636631300412921LL;
	int16_t x264 = INT16_MIN;
	volatile int64_t t58 = 4065321214541LL;

    t58 = (((x261<=x262)+x263)+x264);

    if (t58 != -243636631300445688LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint32_t x265 = 9416891U;
	uint32_t x268 = 1976714U;

    t59 = (((x265<=x266)+x267)+x268);

    if (t59 != 1943947U) { NG(); } else { ; }
	
}

void f60(void) {
    	static int16_t x270 = -72;
	volatile int32_t x271 = INT32_MIN;
	static uint64_t x272 = 5282079835009213LLU;
	volatile uint64_t t60 = 520LLU;

    t60 = (((x269<=x270)+x271)+x272);

    if (t60 != 5282077687525566LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	uint32_t x273 = 316727189U;
	static int16_t x274 = INT16_MIN;
	static uint32_t x275 = UINT32_MAX;
	int64_t x276 = -371878973LL;
	volatile int64_t t61 = -11831014965LL;

    t61 = (((x273<=x274)+x275)+x276);

    if (t61 != -371878973LL) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint16_t x277 = 2191U;
	int8_t x278 = -1;
	int8_t x279 = INT8_MIN;
	int32_t t62 = 9;

    t62 = (((x277<=x278)+x279)+x280);

    if (t62 != -138) { NG(); } else { ; }
	
}

void f63(void) {
    	static int32_t x281 = INT32_MIN;
	static int16_t x282 = -49;
	int16_t x283 = 57;
	int64_t x284 = -14946759LL;
	volatile int64_t t63 = 23067LL;

    t63 = (((x281<=x282)+x283)+x284);

    if (t63 != -14946701LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x290 = 16593929U;
	uint16_t x291 = UINT16_MAX;
	static int32_t x292 = 215598399;
	int32_t t64 = 776;

    t64 = (((x289<=x290)+x291)+x292);

    if (t64 != 215663935) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint32_t x293 = 31004467U;
	int32_t x294 = -2116;
	static int32_t x295 = INT32_MIN;
	static int8_t x296 = 0;
	volatile int32_t t65 = -18;

    t65 = (((x293<=x294)+x295)+x296);

    if (t65 != -2147483647) { NG(); } else { ; }
	
}

void f66(void) {
    	int64_t x297 = 0LL;
	uint32_t x300 = 3U;

    t66 = (((x297<=x298)+x299)+x300);

    if (t66 != 258U) { NG(); } else { ; }
	
}

void f67(void) {
    	static volatile int32_t x301 = 0;
	int32_t x302 = 84928928;
	int16_t x303 = INT16_MIN;
	uint8_t x304 = 9U;
	volatile int32_t t67 = -5927;

    t67 = (((x301<=x302)+x303)+x304);

    if (t67 != -32758) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x307 = INT32_MIN;
	uint64_t x308 = 1666412510LLU;
	uint64_t t68 = 91649863814078923LLU;

    t68 = (((x305<=x306)+x307)+x308);

    if (t68 != 18446744073228480478LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x309 = INT8_MAX;
	volatile uint16_t x310 = 13U;
	static volatile int32_t t69 = -535125;

    t69 = (((x309<=x310)+x311)+x312);

    if (t69 != 112) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x313 = -1LL;
	int64_t x314 = -1LL;
	uint8_t x315 = 124U;
	volatile int32_t t70 = -145;

    t70 = (((x313<=x314)+x315)+x316);

    if (t70 != 125) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x317 = 37U;
	uint16_t x320 = 1U;

    t71 = (((x317<=x318)+x319)+x320);

    if (t71 != 2) { NG(); } else { ; }
	
}

void f72(void) {
    	int32_t x322 = -6;
	static uint8_t x323 = 0U;
	int16_t x324 = -65;
	volatile int32_t t72 = 0;

    t72 = (((x321<=x322)+x323)+x324);

    if (t72 != -64) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x325 = UINT8_MAX;
	uint16_t x327 = 10U;
	int32_t x328 = -1;
	volatile int32_t t73 = 20617700;

    t73 = (((x325<=x326)+x327)+x328);

    if (t73 != 10) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile int32_t x329 = 29707;
	int16_t x330 = INT16_MIN;
	int8_t x331 = INT8_MIN;
	uint32_t x332 = UINT32_MAX;
	volatile uint32_t t74 = 3478476U;

    t74 = (((x329<=x330)+x331)+x332);

    if (t74 != 4294967167U) { NG(); } else { ; }
	
}

void f75(void) {
    	uint16_t x333 = 452U;
	int64_t x334 = INT64_MIN;
	int32_t x335 = -24986176;
	int16_t x336 = 7225;
	int32_t t75 = 70;

    t75 = (((x333<=x334)+x335)+x336);

    if (t75 != -24978951) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x337 = UINT64_MAX;
	static int8_t x338 = 7;
	int64_t x340 = INT64_MIN;
	volatile int64_t t76 = 1677520546484539LL;

    t76 = (((x337<=x338)+x339)+x340);

    if (t76 != -9223372036147654513LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x341 = 42LLU;
	static int32_t x342 = 873;
	uint32_t x343 = 541036489U;
	uint32_t x344 = 1U;
	uint32_t t77 = 0U;

    t77 = (((x341<=x342)+x343)+x344);

    if (t77 != 541036491U) { NG(); } else { ; }
	
}

void f78(void) {
    	static int64_t x345 = INT64_MIN;
	volatile uint32_t x348 = 8259462U;
	uint32_t t78 = 435806U;

    t78 = (((x345<=x346)+x347)+x348);

    if (t78 != 8259463U) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x353 = 7U;
	int8_t x354 = -1;
	uint16_t x355 = 1943U;

    t79 = (((x353<=x354)+x355)+x356);

    if (t79 != 1958) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x357 = INT32_MIN;
	int64_t x358 = 368LL;
	uint16_t x359 = 25U;
	int8_t x360 = 38;
	int32_t t80 = 5774775;

    t80 = (((x357<=x358)+x359)+x360);

    if (t80 != 64) { NG(); } else { ; }
	
}

void f81(void) {
    	uint16_t x361 = UINT16_MAX;
	volatile int32_t x362 = INT32_MIN;
	uint16_t x363 = 3572U;
	uint8_t x364 = 26U;
	int32_t t81 = -319750523;

    t81 = (((x361<=x362)+x363)+x364);

    if (t81 != 3598) { NG(); } else { ; }
	
}

void f82(void) {
    	static int8_t x365 = INT8_MIN;
	int64_t x366 = INT64_MAX;
	volatile int8_t x367 = 1;
	int8_t x368 = INT8_MAX;
	volatile int32_t t82 = 0;

    t82 = (((x365<=x366)+x367)+x368);

    if (t82 != 129) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x370 = INT16_MIN;
	int16_t x371 = -1;
	uint32_t x372 = 1807960U;

    t83 = (((x369<=x370)+x371)+x372);

    if (t83 != 1807960U) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x373 = -11;
	int16_t x375 = 0;
	uint8_t x376 = 6U;
	int32_t t84 = -16;

    t84 = (((x373<=x374)+x375)+x376);

    if (t84 != 7) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x377 = INT32_MAX;
	uint16_t x378 = 108U;
	uint16_t x379 = UINT16_MAX;
	int16_t x380 = 546;
	int32_t t85 = -16713747;

    t85 = (((x377<=x378)+x379)+x380);

    if (t85 != 66081) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x383 = INT64_MIN;
	volatile int16_t x384 = -1;
	volatile int64_t t86 = INT64_MIN;

    t86 = (((x381<=x382)+x383)+x384);

    if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint64_t x389 = 1684849986545017740LLU;
	int16_t x390 = 43;
	static int64_t x391 = 73951333212LL;
	uint64_t x392 = 1253518416070489871LLU;

    t87 = (((x389<=x390)+x391)+x392);

    if (t87 != 1253518490021823083LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x397 = INT64_MIN;
	int64_t x398 = -481352LL;
	int32_t x399 = 508;
	int64_t x400 = -3252976240697673167LL;
	volatile int64_t t88 = -97019488791005724LL;

    t88 = (((x397<=x398)+x399)+x400);

    if (t88 != -3252976240697672658LL) { NG(); } else { ; }
	
}

void f89(void) {
    	uint8_t x402 = 6U;
	volatile int16_t x403 = INT16_MAX;
	static int16_t x404 = -1;

    t89 = (((x401<=x402)+x403)+x404);

    if (t89 != 32766) { NG(); } else { ; }
	
}

void f90(void) {
    	static int8_t x405 = INT8_MIN;
	static uint8_t x407 = 5U;
	int64_t x408 = -819550LL;
	int64_t t90 = -366LL;

    t90 = (((x405<=x406)+x407)+x408);

    if (t90 != -819544LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int64_t x409 = -1LL;
	int64_t x411 = -1LL;
	int64_t x412 = -1LL;
	int64_t t91 = -253595487708932442LL;

    t91 = (((x409<=x410)+x411)+x412);

    if (t91 != -2LL) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int8_t x413 = INT8_MAX;
	static volatile uint8_t x414 = UINT8_MAX;
	uint16_t x415 = 206U;
	volatile int32_t t92 = 252;

    t92 = (((x413<=x414)+x415)+x416);

    if (t92 != 65742) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint32_t x424 = 7166U;
	uint32_t t93 = 0U;

    t93 = (((x421<=x422)+x423)+x424);

    if (t93 != 7169U) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x425 = INT8_MAX;
	static uint8_t x427 = UINT8_MAX;
	int32_t x428 = 228;

    t94 = (((x425<=x426)+x427)+x428);

    if (t94 != 483) { NG(); } else { ; }
	
}

void f95(void) {
    	static int64_t x429 = -418928766LL;
	uint8_t x431 = 3U;
	int8_t x432 = INT8_MAX;
	volatile int32_t t95 = 77871500;

    t95 = (((x429<=x430)+x431)+x432);

    if (t95 != 131) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x433 = UINT32_MAX;
	volatile uint32_t x435 = 100U;

    t96 = (((x433<=x434)+x435)+x436);

    if (t96 != 99LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x437 = INT8_MIN;
	int32_t x438 = 122;
	uint8_t x439 = 42U;
	static uint8_t x440 = 1U;
	int32_t t97 = 1375;

    t97 = (((x437<=x438)+x439)+x440);

    if (t97 != 44) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x446 = INT32_MIN;
	static volatile uint8_t x447 = UINT8_MAX;
	int64_t x448 = -6620714LL;
	int64_t t98 = 61345LL;

    t98 = (((x445<=x446)+x447)+x448);

    if (t98 != -6620458LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x453 = 14331185389LL;
	volatile uint16_t x455 = UINT16_MAX;
	uint64_t x456 = 1479320986765565269LLU;
	static volatile uint64_t t99 = 27957LLU;

    t99 = (((x453<=x454)+x455)+x456);

    if (t99 != 1479320986765630804LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x458 = INT32_MIN;
	static int8_t x459 = -1;
	int16_t x460 = 278;
	int32_t t100 = 745;

    t100 = (((x457<=x458)+x459)+x460);

    if (t100 != 277) { NG(); } else { ; }
	
}

void f101(void) {
    	static int64_t x461 = -1LL;
	int8_t x462 = INT8_MIN;
	static int8_t x463 = INT8_MIN;
	static volatile int16_t x464 = 1;
	int32_t t101 = 4473589;

    t101 = (((x461<=x462)+x463)+x464);

    if (t101 != -127) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x465 = INT8_MIN;
	int16_t x467 = -1;
	int32_t x468 = 1876;
	static int32_t t102 = -1;

    t102 = (((x465<=x466)+x467)+x468);

    if (t102 != 1875) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x469 = UINT32_MAX;
	static int64_t x470 = 609LL;
	static int32_t x471 = INT32_MIN;
	volatile int32_t t103 = 4075;

    t103 = (((x469<=x470)+x471)+x472);

    if (t103 != -2147483554) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x474 = -1;
	uint32_t x475 = 41056U;
	static uint32_t t104 = 188229583U;

    t104 = (((x473<=x474)+x475)+x476);

    if (t104 != 40996U) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x477 = INT16_MIN;
	volatile int64_t x480 = 305LL;
	int64_t t105 = 3581809309207LL;

    t105 = (((x477<=x478)+x479)+x480);

    if (t105 != 59271LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x481 = 3532600838LL;
	int16_t x482 = INT16_MIN;
	uint32_t x483 = 119U;
	volatile int16_t x484 = -1;
	volatile uint32_t t106 = 4072U;

    t106 = (((x481<=x482)+x483)+x484);

    if (t106 != 118U) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x485 = INT64_MAX;
	static uint16_t x486 = 316U;
	int8_t x487 = 1;
	static int32_t x488 = INT32_MIN;
	static int32_t t107 = 10;

    t107 = (((x485<=x486)+x487)+x488);

    if (t107 != -2147483647) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x493 = -1;
	int16_t x494 = 2362;
	int8_t x495 = INT8_MAX;
	int32_t x496 = INT32_MIN;

    t108 = (((x493<=x494)+x495)+x496);

    if (t108 != -2147483520) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x498 = 29;
	int32_t x499 = -272;
	int64_t x500 = INT64_MAX;
	int64_t t109 = -972LL;

    t109 = (((x497<=x498)+x499)+x500);

    if (t109 != 9223372036854775536LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint32_t x502 = UINT32_MAX;
	int64_t x503 = INT64_MIN;
	int64_t t110 = INT64_MIN;

    t110 = (((x501<=x502)+x503)+x504);

    if (t110 != INT64_MIN) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x505 = -1LL;
	volatile uint32_t x507 = UINT32_MAX;
	int32_t x508 = 765;
	volatile uint32_t t111 = 754004U;

    t111 = (((x505<=x506)+x507)+x508);

    if (t111 != 765U) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint8_t x509 = UINT8_MAX;
	static int32_t x510 = INT32_MAX;
	uint32_t x511 = 210037U;
	volatile uint64_t x512 = 1758168798LLU;
	volatile uint64_t t112 = 3700338898LLU;

    t112 = (((x509<=x510)+x511)+x512);

    if (t112 != 1758378836LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x513 = 10208;
	static volatile uint32_t x514 = UINT32_MAX;
	static int8_t x515 = INT8_MIN;
	uint64_t x516 = 600398481102172LLU;
	uint64_t t113 = 413731082411182007LLU;

    t113 = (((x513<=x514)+x515)+x516);

    if (t113 != 600398481102045LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint16_t x517 = 21U;
	static volatile int16_t x518 = INT16_MAX;
	volatile uint64_t x519 = UINT64_MAX;
	int8_t x520 = INT8_MAX;
	static uint64_t t114 = 272332738LLU;

    t114 = (((x517<=x518)+x519)+x520);

    if (t114 != 127LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x525 = 9976328;
	volatile int64_t x526 = -1LL;
	int32_t x527 = -1;
	int16_t x528 = INT16_MIN;
	int32_t t115 = 39417078;

    t115 = (((x525<=x526)+x527)+x528);

    if (t115 != -32769) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x530 = INT64_MIN;
	int16_t x531 = INT16_MIN;
	static int32_t x532 = -31853749;
	static volatile int32_t t116 = 8825098;

    t116 = (((x529<=x530)+x531)+x532);

    if (t116 != -31886517) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x533 = -1;
	uint32_t x534 = 0U;
	volatile int64_t x535 = INT64_MIN;
	static volatile int64_t t117 = 388893943LL;

    t117 = (((x533<=x534)+x535)+x536);

    if (t117 != -9223372021217893778LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int8_t x538 = 1;
	int64_t x539 = -52LL;
	volatile uint64_t x540 = 297610316886LLU;
	static volatile uint64_t t118 = 6084LLU;

    t118 = (((x537<=x538)+x539)+x540);

    if (t118 != 297610316834LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x541 = 123U;
	uint32_t x542 = UINT32_MAX;
	volatile int16_t x543 = -1;
	static int64_t x544 = 2858125786LL;
	volatile int64_t t119 = -15183LL;

    t119 = (((x541<=x542)+x543)+x544);

    if (t119 != 2858125786LL) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int8_t x546 = 8;
	int16_t x547 = -12;
	int64_t t120 = 112086270LL;

    t120 = (((x545<=x546)+x547)+x548);

    if (t120 != -109657784LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int64_t x549 = INT64_MAX;
	static int8_t x550 = -1;
	uint32_t x551 = 2152081U;
	uint32_t t121 = 21929U;

    t121 = (((x549<=x550)+x551)+x552);

    if (t121 != 2152083U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x553 = UINT64_MAX;
	int16_t x554 = INT16_MAX;
	uint16_t x555 = 10584U;
	int16_t x556 = -1;
	int32_t t122 = -3883;

    t122 = (((x553<=x554)+x555)+x556);

    if (t122 != 10583) { NG(); } else { ; }
	
}

void f123(void) {
    	uint32_t x558 = 9211025U;
	static uint64_t x559 = 24369232LLU;
	static int64_t x560 = INT64_MIN;
	volatile uint64_t t123 = 15583030707346LLU;

    t123 = (((x557<=x558)+x559)+x560);

    if (t123 != 9223372036879145041LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x561 = 0U;
	uint64_t x562 = UINT64_MAX;
	int16_t x563 = INT16_MIN;
	int16_t x564 = INT16_MIN;
	static volatile int32_t t124 = -10942816;

    t124 = (((x561<=x562)+x563)+x564);

    if (t124 != -65535) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x565 = 0U;
	int64_t x566 = -1LL;
	int16_t x567 = 7;
	static int16_t x568 = 121;

    t125 = (((x565<=x566)+x567)+x568);

    if (t125 != 128) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x569 = INT32_MAX;
	static volatile int8_t x570 = INT8_MAX;
	static int16_t x571 = 4;
	int16_t x572 = 12;
	int32_t t126 = -3320401;

    t126 = (((x569<=x570)+x571)+x572);

    if (t126 != 16) { NG(); } else { ; }
	
}

void f127(void) {
    	static int16_t x573 = INT16_MAX;
	int8_t x574 = 38;
	static int8_t x576 = INT8_MIN;

    t127 = (((x573<=x574)+x575)+x576);

    if (t127 != -135) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x578 = UINT16_MAX;
	uint8_t x579 = 1U;
	static int16_t x580 = -1;
	static int32_t t128 = 434453;

    t128 = (((x577<=x578)+x579)+x580);

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	static volatile uint16_t x581 = UINT16_MAX;
	uint8_t x582 = 4U;
	int8_t x584 = -1;
	volatile int32_t t129 = 3;

    t129 = (((x581<=x582)+x583)+x584);

    if (t129 != -129) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x590 = -1;
	int32_t x591 = -4366;
	volatile uint64_t x592 = 1640LLU;
	static uint64_t t130 = 97715732111843LLU;

    t130 = (((x589<=x590)+x591)+x592);

    if (t130 != 18446744073709548891LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x594 = 107663034;
	static int16_t x595 = INT16_MAX;
	int64_t x596 = -1LL;

    t131 = (((x593<=x594)+x595)+x596);

    if (t131 != 32767LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint32_t x598 = 1539118U;
	uint16_t x599 = 93U;
	uint64_t x600 = 117LLU;
	volatile uint64_t t132 = 241774822218LLU;

    t132 = (((x597<=x598)+x599)+x600);

    if (t132 != 210LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile uint16_t x601 = 1U;
	volatile int8_t x602 = INT8_MIN;

    t133 = (((x601<=x602)+x603)+x604);

    if (t133 != -295636184387255LL) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x606 = INT8_MIN;
	int64_t x607 = 79482204430846LL;
	uint8_t x608 = UINT8_MAX;
	static int64_t t134 = 562467376821664LL;

    t134 = (((x605<=x606)+x607)+x608);

    if (t134 != 79482204431102LL) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int64_t x614 = INT64_MIN;
	uint8_t x615 = UINT8_MAX;
	int16_t x616 = INT16_MAX;
	int32_t t135 = 203;

    t135 = (((x613<=x614)+x615)+x616);

    if (t135 != 33022) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x617 = 11U;
	volatile uint32_t x618 = UINT32_MAX;
	uint64_t x619 = 3838952LLU;
	int64_t x620 = 2461665825322267LL;
	volatile uint64_t t136 = 326818439280836LLU;

    t136 = (((x617<=x618)+x619)+x620);

    if (t136 != 2461665829161220LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	static int8_t x621 = INT8_MAX;
	int64_t x622 = INT64_MIN;
	volatile uint64_t x623 = 48878275629471LLU;
	static int64_t x624 = INT64_MAX;

    t137 = (((x621<=x622)+x623)+x624);

    if (t137 != 9223420915130405278LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x625 = -1;
	uint64_t x627 = 1207101140004LLU;
	uint16_t x628 = UINT16_MAX;
	volatile uint64_t t138 = 238893819449287LLU;

    t138 = (((x625<=x626)+x627)+x628);

    if (t138 != 1207101205540LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x629 = -1;
	uint16_t x630 = 3U;
	volatile int8_t x631 = INT8_MAX;
	int32_t t139 = 8;

    t139 = (((x629<=x630)+x631)+x632);

    if (t139 != 153) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x633 = -3812;
	uint32_t x634 = 3572608U;
	volatile int64_t x635 = INT64_MIN;
	uint16_t x636 = 42U;
	int64_t t140 = 15884LL;

    t140 = (((x633<=x634)+x635)+x636);

    if (t140 != -9223372036854775766LL) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile uint64_t x637 = 1402LLU;
	static uint64_t x638 = UINT64_MAX;
	int64_t x640 = -1LL;
	volatile int64_t t141 = 1LL;

    t141 = (((x637<=x638)+x639)+x640);

    if (t141 != -32768LL) { NG(); } else { ; }
	
}

void f142(void) {
    	volatile int64_t t142 = -1LL;

    t142 = (((x641<=x642)+x643)+x644);

    if (t142 != -48992178925586LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x647 = -230331795LL;
	int64_t x648 = 2535374195044586LL;
	static int64_t t143 = -3300489427154332LL;

    t143 = (((x645<=x646)+x647)+x648);

    if (t143 != 2535373964712791LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x650 = 1941U;
	int64_t x651 = INT64_MIN;
	int8_t x652 = INT8_MAX;

    t144 = (((x649<=x650)+x651)+x652);

    if (t144 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x653 = INT32_MIN;
	int64_t x655 = -1LL;
	uint64_t x656 = UINT64_MAX;
	static volatile uint64_t t145 = UINT64_MAX;

    t145 = (((x653<=x654)+x655)+x656);

    if (t145 != UINT64_MAX) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x658 = INT8_MIN;
	uint16_t x659 = UINT16_MAX;
	int64_t x660 = -1LL;

    t146 = (((x657<=x658)+x659)+x660);

    if (t146 != 65535LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int8_t x661 = INT8_MIN;
	int32_t x664 = 30269695;
	int32_t t147 = 492759941;

    t147 = (((x661<=x662)+x663)+x664);

    if (t147 != 30269950) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x665 = INT64_MAX;
	int16_t x667 = -7;
	uint16_t x668 = UINT16_MAX;
	int32_t t148 = -1572126;

    t148 = (((x665<=x666)+x667)+x668);

    if (t148 != 65528) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x670 = UINT64_MAX;
	static int8_t x671 = 0;
	static volatile int16_t x672 = INT16_MIN;
	int32_t t149 = 0;

    t149 = (((x669<=x670)+x671)+x672);

    if (t149 != -32767) { NG(); } else { ; }
	
}

void f150(void) {
    	int64_t x673 = INT64_MAX;
	int16_t x674 = -1;
	volatile int8_t x675 = INT8_MIN;
	volatile int32_t t150 = 881;

    t150 = (((x673<=x674)+x675)+x676);

    if (t150 != -2279) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x677 = UINT16_MAX;
	int8_t x678 = INT8_MAX;
	int8_t x679 = INT8_MIN;
	int32_t x680 = -1;

    t151 = (((x677<=x678)+x679)+x680);

    if (t151 != -129) { NG(); } else { ; }
	
}

void f152(void) {
    	static int32_t x681 = INT32_MIN;
	int32_t x682 = -411;
	int8_t x683 = INT8_MAX;
	static int64_t x684 = -46672648505561LL;
	int64_t t152 = 14161615757049LL;

    t152 = (((x681<=x682)+x683)+x684);

    if (t152 != -46672648505433LL) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x685 = -1LL;
	static uint16_t x686 = 139U;
	static volatile int8_t x687 = INT8_MAX;
	int16_t x688 = INT16_MIN;
	volatile int32_t t153 = -1915639;

    t153 = (((x685<=x686)+x687)+x688);

    if (t153 != -32640) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x689 = -1;
	volatile uint16_t x690 = 5884U;
	int32_t x691 = INT32_MIN;
	int32_t x692 = INT32_MAX;
	volatile int32_t t154 = -223470054;

    t154 = (((x689<=x690)+x691)+x692);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	static int16_t x698 = -32;
	static int8_t x699 = INT8_MIN;
	int8_t x700 = -7;
	int32_t t155 = -306613140;

    t155 = (((x697<=x698)+x699)+x700);

    if (t155 != -135) { NG(); } else { ; }
	
}

void f156(void) {
    	int8_t x701 = -28;
	int32_t x702 = 13205;
	int32_t t156 = 4260;

    t156 = (((x701<=x702)+x703)+x704);

    if (t156 != 65544) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x705 = 63963892618LL;
	volatile uint64_t x706 = UINT64_MAX;
	volatile uint32_t x707 = 65U;
	static uint64_t x708 = 3353694LLU;
	uint64_t t157 = 7LLU;

    t157 = (((x705<=x706)+x707)+x708);

    if (t157 != 3353760LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint8_t x709 = UINT8_MAX;
	int8_t x711 = -32;
	int64_t t158 = 2123001668LL;

    t158 = (((x709<=x710)+x711)+x712);

    if (t158 != 9223372036854775775LL) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint64_t x713 = 34457748364683LLU;
	uint8_t x714 = UINT8_MAX;
	int16_t x715 = 557;
	int64_t x716 = INT64_MIN;
	int64_t t159 = 1778789LL;

    t159 = (((x713<=x714)+x715)+x716);

    if (t159 != -9223372036854775251LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x717 = -1LL;
	static uint32_t x718 = 173U;
	int64_t x719 = 14LL;
	static uint64_t x720 = 252449246959LLU;

    t160 = (((x717<=x718)+x719)+x720);

    if (t160 != 252449246974LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x721 = 1U;
	int16_t x722 = INT16_MAX;
	uint64_t x723 = 156920467314831036LLU;
	int64_t x724 = 35660563799457577LL;

    t161 = (((x721<=x722)+x723)+x724);

    if (t161 != 192581031114288614LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x725 = 5U;
	int64_t x726 = INT64_MIN;
	volatile int16_t x727 = 326;
	static int16_t x728 = 113;
	int32_t t162 = 0;

    t162 = (((x725<=x726)+x727)+x728);

    if (t162 != 439) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x729 = INT8_MAX;
	int16_t x730 = -1;

    t163 = (((x729<=x730)+x731)+x732);

    if (t163 != 65504LL) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x733 = 50U;
	static int64_t x734 = -1332530309356LL;
	static int16_t x735 = 1;
	volatile int32_t x736 = INT32_MIN;
	volatile int32_t t164 = 209916196;

    t164 = (((x733<=x734)+x735)+x736);

    if (t164 != -2147483647) { NG(); } else { ; }
	
}

void f165(void) {
    	static int64_t x737 = INT64_MAX;
	int8_t x738 = INT8_MIN;
	uint64_t x739 = 65611558249975783LLU;
	uint8_t x740 = 14U;
	uint64_t t165 = 186105900439LLU;

    t165 = (((x737<=x738)+x739)+x740);

    if (t165 != 65611558249975797LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile uint64_t x741 = 235158868LLU;
	uint32_t x743 = UINT32_MAX;
	int8_t x744 = INT8_MAX;
	volatile uint32_t t166 = 1474U;

    t166 = (((x741<=x742)+x743)+x744);

    if (t166 != 127U) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x745 = -1;
	static volatile uint32_t x747 = UINT32_MAX;
	volatile int8_t x748 = -1;

    t167 = (((x745<=x746)+x747)+x748);

    if (t167 != UINT32_MAX) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x753 = -1;
	static int8_t x755 = -1;
	volatile int8_t x756 = -61;
	static int32_t t168 = -122;

    t168 = (((x753<=x754)+x755)+x756);

    if (t168 != -61) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x757 = -1;
	uint32_t x758 = UINT32_MAX;
	uint8_t x760 = 4U;
	uint64_t t169 = 89081517023792147LLU;

    t169 = (((x757<=x758)+x759)+x760);

    if (t169 != 10028035LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x764 = INT64_MIN;
	int64_t t170 = INT64_MIN;

    t170 = (((x761<=x762)+x763)+x764);

    if (t170 != INT64_MIN) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile uint64_t x765 = 1093018294644859LLU;
	int64_t x767 = -1LL;
	uint32_t x768 = 462131125U;
	volatile int64_t t171 = 2LL;

    t171 = (((x765<=x766)+x767)+x768);

    if (t171 != 462131125LL) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x769 = UINT64_MAX;
	int16_t x770 = INT16_MIN;
	volatile uint8_t x771 = 25U;
	int64_t x772 = -189140408856976802LL;
	volatile int64_t t172 = 79541287042809LL;

    t172 = (((x769<=x770)+x771)+x772);

    if (t172 != -189140408856976777LL) { NG(); } else { ; }
	
}

void f173(void) {
    	static int64_t x773 = INT64_MAX;
	int64_t x774 = INT64_MIN;
	volatile uint64_t x775 = UINT64_MAX;
	int16_t x776 = INT16_MIN;
	volatile uint64_t t173 = 137482941045405LLU;

    t173 = (((x773<=x774)+x775)+x776);

    if (t173 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile uint32_t x777 = 60U;
	int64_t x778 = -1LL;
	static int32_t x779 = 1246;
	static int32_t x780 = INT32_MIN;
	int32_t t174 = 5775896;

    t174 = (((x777<=x778)+x779)+x780);

    if (t174 != -2147482402) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile uint8_t x781 = UINT8_MAX;
	int32_t x782 = INT32_MIN;
	int16_t x784 = INT16_MIN;
	int32_t t175 = -62109;

    t175 = (((x781<=x782)+x783)+x784);

    if (t175 != -65536) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x785 = -268;
	volatile int8_t x786 = -7;
	uint32_t x787 = 128471U;
	static uint32_t x788 = 1175U;
	static uint32_t t176 = 164759337U;

    t176 = (((x785<=x786)+x787)+x788);

    if (t176 != 129647U) { NG(); } else { ; }
	
}

void f177(void) {
    	int32_t x793 = 26173955;
	static volatile uint32_t x794 = UINT32_MAX;

    t177 = (((x793<=x794)+x795)+x796);

    if (t177 != -123) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x797 = INT8_MIN;
	int64_t x798 = INT64_MIN;
	uint8_t x799 = 1U;
	int16_t x800 = INT16_MIN;

    t178 = (((x797<=x798)+x799)+x800);

    if (t178 != -32767) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x802 = INT32_MAX;
	int64_t x803 = 325075592LL;
	int8_t x804 = -1;
	volatile int64_t t179 = -31LL;

    t179 = (((x801<=x802)+x803)+x804);

    if (t179 != 325075592LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int32_t x805 = INT32_MAX;
	volatile int16_t x806 = -1;
	uint16_t x808 = 480U;
	static volatile int32_t t180 = 1;

    t180 = (((x805<=x806)+x807)+x808);

    if (t180 != -327042) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint8_t x810 = 47U;
	int32_t x812 = -5455;
	int32_t t181 = -954691309;

    t181 = (((x809<=x810)+x811)+x812);

    if (t181 != 60081) { NG(); } else { ; }
	
}

void f182(void) {
    	volatile uint64_t x814 = 195389671119304LLU;
	int16_t x815 = INT16_MIN;
	static int8_t x816 = INT8_MIN;
	volatile int32_t t182 = 3895;

    t182 = (((x813<=x814)+x815)+x816);

    if (t182 != -32896) { NG(); } else { ; }
	
}

void f183(void) {
    	static uint32_t x817 = 4682616U;
	uint8_t x819 = 20U;
	volatile uint32_t t183 = 7525U;

    t183 = (((x817<=x818)+x819)+x820);

    if (t183 != 30U) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x822 = INT8_MIN;
	int16_t x823 = 2836;
	volatile int32_t t184 = -106416;

    t184 = (((x821<=x822)+x823)+x824);

    if (t184 != 2836) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x825 = 28U;
	uint16_t x826 = 3791U;
	uint64_t x827 = UINT64_MAX;
	uint32_t x828 = 13573625U;
	volatile uint64_t t185 = 20LLU;

    t185 = (((x825<=x826)+x827)+x828);

    if (t185 != 13573625LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x830 = INT64_MIN;
	volatile int32_t x832 = 703202559;
	int64_t t186 = 16363233212787LL;

    t186 = (((x829<=x830)+x831)+x832);

    if (t186 != 1418868381LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int64_t x833 = INT64_MIN;
	static uint32_t x834 = UINT32_MAX;
	static int8_t x835 = INT8_MAX;

    t187 = (((x833<=x834)+x835)+x836);

    if (t187 != 383) { NG(); } else { ; }
	
}

void f188(void) {
    	static volatile int64_t x841 = -1LL;
	static int64_t x842 = -14974LL;
	int32_t x843 = 1;

    t188 = (((x841<=x842)+x843)+x844);

    if (t188 != 80U) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x845 = 142U;
	int8_t x846 = INT8_MIN;
	static int8_t x847 = -1;
	uint32_t x848 = 151U;
	uint32_t t189 = 31U;

    t189 = (((x845<=x846)+x847)+x848);

    if (t189 != 151U) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x849 = -1199671707161039LL;
	int64_t x850 = 225212784158LL;
	int8_t x852 = INT8_MIN;
	static volatile uint64_t t190 = 23153248339829LLU;

    t190 = (((x849<=x850)+x851)+x852);

    if (t190 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x853 = INT32_MIN;
	uint64_t x854 = UINT64_MAX;
	int64_t x855 = INT64_MIN;
	static uint16_t x856 = 294U;
	volatile int64_t t191 = 103LL;

    t191 = (((x853<=x854)+x855)+x856);

    if (t191 != -9223372036854775513LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x858 = INT64_MAX;
	int16_t x859 = INT16_MAX;
	uint32_t x860 = 1833U;
	volatile uint32_t t192 = 2686214U;

    t192 = (((x857<=x858)+x859)+x860);

    if (t192 != 34601U) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x861 = -18;
	static volatile uint64_t x862 = 1952368489978LLU;
	uint32_t x863 = UINT32_MAX;
	static volatile uint16_t x864 = 47U;
	volatile uint32_t t193 = 245141938U;

    t193 = (((x861<=x862)+x863)+x864);

    if (t193 != 46U) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x865 = INT32_MAX;
	int16_t x866 = -6486;
	int8_t x867 = INT8_MIN;

    t194 = (((x865<=x866)+x867)+x868);

    if (t194 != 2147483519) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x869 = INT32_MAX;
	uint16_t x870 = UINT16_MAX;
	int32_t x871 = 333484;
	int16_t x872 = 0;

    t195 = (((x869<=x870)+x871)+x872);

    if (t195 != 333484) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x873 = -1;
	static uint8_t x874 = 46U;
	int32_t x875 = 120040;
	volatile int32_t t196 = -5298;

    t196 = (((x873<=x874)+x875)+x876);

    if (t196 != 120043) { NG(); } else { ; }
	
}

void f197(void) {
    	int32_t x881 = INT32_MIN;
	volatile int32_t x882 = -1;
	uint16_t x883 = 51U;
	volatile uint32_t x884 = 14744455U;
	uint32_t t197 = 85383287U;

    t197 = (((x881<=x882)+x883)+x884);

    if (t197 != 14744507U) { NG(); } else { ; }
	
}

void f198(void) {
    	int64_t x885 = 22668565608LL;
	volatile int8_t x886 = INT8_MIN;
	uint16_t x887 = 12U;
	int32_t x888 = INT32_MIN;
	static int32_t t198 = -48778544;

    t198 = (((x885<=x886)+x887)+x888);

    if (t198 != -2147483636) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x889 = INT64_MAX;
	int16_t x890 = -1;
	uint8_t x891 = 13U;

    t199 = (((x889<=x890)+x891)+x892);

    if (t199 != -115) { NG(); } else { ; }
	
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

