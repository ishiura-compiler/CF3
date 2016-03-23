
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

static int32_t x4 = 1466;
uint16_t x5 = 2U;
int32_t x9 = -1;
uint64_t x10 = UINT64_MAX;
volatile int64_t x21 = INT64_MIN;
int64_t x25 = -1LL;
volatile uint32_t x26 = 0U;
int64_t x28 = 830758LL;
static volatile int16_t x29 = 2;
int16_t x34 = INT16_MIN;
int32_t x36 = INT32_MIN;
uint64_t x42 = 1945504980LLU;
volatile int64_t x49 = -1LL;
uint32_t x58 = 1745U;
static uint32_t t12 = 0U;
uint8_t x65 = UINT8_MAX;
static volatile int16_t x68 = -2915;
volatile int32_t t15 = -54;
uint32_t x75 = 12U;
uint32_t t16 = 192492U;
static volatile int8_t x81 = -1;
volatile int32_t t17 = -56400920;
volatile int8_t x87 = 0;
volatile uint32_t x93 = UINT32_MAX;
volatile uint8_t x106 = 1U;
int64_t t22 = 19067367082LL;
int64_t t23 = -492298162237LL;
volatile int64_t t25 = 387656024LL;
uint8_t x121 = 14U;
uint64_t x122 = 245312257771LLU;
static int64_t x126 = 6468LL;
static volatile int16_t x128 = INT16_MAX;
int32_t x133 = 32201;
static int64_t x138 = INT64_MIN;
int16_t x141 = -1;
uint64_t x149 = UINT64_MAX;
static int8_t x150 = 5;
static uint16_t x153 = 86U;
uint16_t x163 = UINT16_MAX;
volatile uint16_t x167 = UINT16_MAX;
static volatile int32_t t35 = -3946;
volatile uint8_t x171 = 2U;
int64_t t37 = -10295LL;
int32_t t39 = 2190598;
uint32_t x192 = UINT32_MAX;
static uint64_t t42 = 1433350780LLU;
volatile int64_t x211 = INT64_MIN;
int64_t t44 = -51267500309604157LL;
uint32_t x222 = 8208469U;
static volatile uint8_t x227 = UINT8_MAX;
static int32_t x228 = INT32_MAX;
static int8_t x232 = INT8_MAX;
static int8_t x233 = -11;
int8_t x234 = 55;
uint64_t t49 = 150073667428044LLU;
static int16_t x237 = -6;
uint64_t x238 = 58307029536644LLU;
volatile int64_t t53 = -681947LL;
int8_t x258 = INT8_MIN;
uint64_t x260 = 3703LLU;
static volatile uint64_t t55 = 8591033218990LLU;
int16_t x267 = 8190;
uint8_t x272 = 4U;
static int64_t x276 = -1LL;
volatile int64_t x282 = INT64_MIN;
static int8_t x285 = INT8_MIN;
volatile int32_t x287 = -1009;
static volatile int8_t x298 = INT8_MIN;
int16_t x300 = INT16_MIN;
uint64_t t65 = 21119635LLU;
int16_t x307 = -1;
static int8_t x319 = INT8_MAX;
static uint64_t t69 = 2888727668LLU;
int64_t x334 = INT64_MIN;
int8_t x336 = INT8_MIN;
static int64_t x341 = INT64_MIN;
static int8_t x342 = INT8_MAX;
int8_t x343 = 1;
int64_t t72 = -11604923LL;
int32_t x350 = 1959500;
int8_t x352 = INT8_MIN;
uint16_t x374 = UINT16_MAX;
static int32_t x378 = 2578;
int16_t x380 = INT16_MIN;
static int64_t x391 = INT64_MIN;
volatile int64_t t80 = 1864LL;
uint32_t x397 = 333U;
int32_t x398 = 5286;
volatile int32_t x400 = -484303;
uint32_t t81 = 225620860U;
static uint16_t x401 = UINT16_MAX;
volatile int32_t t82 = -1;
int32_t x422 = INT32_MAX;
int16_t x427 = INT16_MIN;
int8_t x433 = -1;
static int32_t x435 = 0;
uint8_t x436 = UINT8_MAX;
int64_t x440 = -1LL;
volatile int64_t t87 = 52487730126510LL;
volatile int64_t x446 = -1LL;
int32_t x447 = INT32_MAX;
int32_t x451 = INT32_MAX;
static uint32_t x452 = 2638U;
uint32_t t90 = 8U;
int32_t x456 = INT32_MIN;
int32_t t91 = -157;
static int8_t x461 = INT8_MIN;
int32_t t93 = -1;
int8_t x467 = -1;
static int32_t t94 = -945;
static int32_t x471 = -4751;
int16_t x477 = INT16_MIN;
int16_t x479 = INT16_MIN;
volatile int64_t t98 = 25564662LL;
static int8_t x491 = INT8_MIN;
volatile int32_t t100 = 370167638;
int32_t x514 = -31197086;
volatile int32_t t105 = -797;
static int16_t x518 = -72;
volatile int16_t x519 = INT16_MIN;
volatile int32_t t106 = -8;
int16_t x521 = INT16_MIN;
uint64_t x526 = 25991826250752LLU;
volatile int8_t x528 = INT8_MAX;
int64_t x529 = INT64_MIN;
int64_t t109 = -26358426980LL;
int32_t t110 = -1569;
int32_t t112 = -1;
int64_t x551 = -1LL;
static volatile uint64_t t113 = 12602625LLU;
static volatile uint64_t t114 = 13060LLU;
int64_t x557 = INT64_MIN;
int16_t x558 = -1;
int8_t x561 = -1;
volatile uint64_t t116 = 44358139684233LLU;
int32_t t117 = 39;
static int64_t x569 = -1LL;
static uint64_t x580 = 6201390579743188LLU;
volatile uint8_t x601 = 10U;
int64_t x604 = -1LL;
volatile int16_t x606 = INT16_MAX;
static int16_t x609 = INT16_MIN;
static int64_t x611 = -1LL;
uint64_t t130 = 34588140660906LLU;
int8_t x630 = -1;
uint32_t x637 = 124802026U;
static uint64_t x638 = UINT64_MAX;
int32_t t134 = -448;
uint32_t x659 = 891128175U;
volatile int16_t x660 = 0;
int8_t x661 = INT8_MIN;
volatile int8_t x675 = -1;
uint32_t x677 = UINT32_MAX;
int64_t x680 = INT64_MAX;
int64_t x685 = 4349743258973902LL;
int8_t x686 = INT8_MIN;
int16_t x688 = -34;
int64_t x690 = INT64_MAX;
static int8_t x694 = 8;
static volatile int32_t t146 = -1852310;
uint64_t x706 = 51536469214LLU;
uint32_t x713 = 48111U;
int16_t x715 = 1;
uint16_t x717 = UINT16_MAX;
static int64_t t151 = -1LL;
uint32_t x726 = 56282794U;
int8_t x731 = INT8_MIN;
static uint32_t t154 = 31567532U;
int8_t x737 = INT8_MAX;
volatile uint8_t x742 = 0U;
int8_t x751 = -1;
uint64_t t161 = 780LLU;
uint64_t t163 = 5068532891LLU;
static int64_t t164 = 30730564367906LL;
volatile uint32_t t165 = 628983U;
int64_t x782 = -1LL;
static volatile int8_t x784 = INT8_MIN;
uint64_t x785 = 906805LLU;
static volatile uint32_t x789 = 7U;
int8_t x790 = INT8_MAX;
uint64_t x794 = 3582404098518LLU;
uint64_t x799 = UINT64_MAX;
uint64_t t170 = 30525LLU;
static uint64_t x804 = UINT64_MAX;
static int64_t x806 = -290238858638247LL;
int64_t x807 = 2LL;
uint8_t x811 = UINT8_MAX;
int32_t t173 = 517949;
static int32_t x822 = -2787874;
int64_t t175 = -102185711516LL;
uint32_t x826 = 26U;
volatile uint64_t x828 = UINT64_MAX;
volatile int64_t x829 = -3574759367LL;
int64_t t177 = -147747013107436LL;
int64_t x836 = 979888270549LL;
int32_t x839 = 204;
uint32_t x840 = UINT32_MAX;
uint64_t x843 = UINT64_MAX;
int8_t x851 = 9;
volatile int64_t x852 = INT64_MIN;
static volatile int64_t t183 = 346LL;
volatile int32_t t185 = 7549927;
uint16_t x866 = 11U;
volatile int8_t x867 = INT8_MIN;
volatile uint32_t t187 = 72104747U;
uint64_t x878 = 632LLU;
static volatile int64_t x886 = INT64_MAX;
static volatile int16_t x888 = 626;
volatile int8_t x904 = INT8_MIN;
static volatile int64_t t191 = -31LL;
volatile uint8_t x905 = 0U;
int16_t x908 = -1;
volatile int64_t t192 = 213594042LL;
volatile int64_t x911 = -1LL;
int8_t x933 = -1;
static int32_t x945 = -1;
static int16_t x950 = -3;
static int64_t t198 = -45506911123959085LL;
int8_t x956 = 58;
static volatile uint64_t t199 = 3LLU;


void f0(void) {
    	uint8_t x1 = 3U;
	int16_t x2 = INT16_MIN;
	int16_t x3 = -1;
	int32_t t0 = -22470;

    t0 = (((x1^x2)+x3)+x4);

    if (t0 != -31300) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x6 = 2815U;
	volatile int64_t x7 = -449482345LL;
	volatile int32_t x8 = INT32_MIN;
	volatile int64_t t1 = -474304LL;

    t1 = (((x5^x6)+x7)+x8);

    if (t1 != -2596963180LL) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile int16_t x11 = -6;
	static int32_t x12 = -1;
	volatile uint64_t t2 = 51909914910992LLU;

    t2 = (((x9^x10)+x11)+x12);

    if (t2 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 391U;
	int64_t x14 = -1LL;
	int32_t x15 = -80082;
	static int64_t x16 = -2880269028876LL;
	volatile int64_t t3 = 8340058875987LL;

    t3 = (((x13^x14)+x15)+x16);

    if (t3 != -2880269109350LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static int32_t x17 = -1;
	volatile int64_t x18 = -3220LL;
	static uint16_t x19 = UINT16_MAX;
	volatile uint32_t x20 = 169076U;
	volatile int64_t t4 = 2101778148333683855LL;

    t4 = (((x17^x18)+x19)+x20);

    if (t4 != 237830LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x22 = 1;
	static uint32_t x23 = UINT32_MAX;
	int16_t x24 = INT16_MIN;
	volatile int64_t t5 = -27LL;

    t5 = (((x21^x22)+x23)+x24);

    if (t5 != -9223372032559841280LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile uint8_t x27 = 34U;
	static volatile int64_t t6 = -110LL;

    t6 = (((x25^x26)+x27)+x28);

    if (t6 != 830791LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint16_t x30 = 46U;
	static int8_t x31 = INT8_MAX;
	volatile int16_t x32 = INT16_MIN;
	volatile int32_t t7 = 20474135;

    t7 = (((x29^x30)+x31)+x32);

    if (t7 != -32597) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint32_t x33 = 82085U;
	static int32_t x35 = INT32_MIN;
	uint32_t t8 = 12907U;

    t8 = (((x33^x34)+x35)+x36);

    if (t8 != 4294885541U) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x41 = INT8_MIN;
	static int8_t x43 = -19;
	int8_t x44 = INT8_MIN;
	uint64_t t9 = 8162054681350886665LLU;

    t9 = (((x41^x42)+x43)+x44);

    if (t9 != 18446744071764046529LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = INT8_MIN;
	volatile int16_t x46 = 14309;
	int8_t x47 = INT8_MAX;
	int16_t x48 = -1;
	volatile int32_t t10 = 318691;

    t10 = (((x45^x46)+x47)+x48);

    if (t10 != -14109) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint64_t x50 = 99039124249LLU;
	static int16_t x51 = INT16_MIN;
	static int8_t x52 = -1;
	volatile uint64_t t11 = 674LLU;

    t11 = (((x49^x50)+x51)+x52);

    if (t11 != 18446743974670394597LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x57 = 0;
	volatile uint8_t x59 = 7U;
	int16_t x60 = INT16_MIN;

    t12 = (((x57^x58)+x59)+x60);

    if (t12 != 4294936280U) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x61 = INT32_MAX;
	uint8_t x62 = 26U;
	int16_t x63 = -1;
	volatile int64_t x64 = -1LL;
	int64_t t13 = -80LL;

    t13 = (((x61^x62)+x63)+x64);

    if (t13 != 2147483619LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x66 = INT32_MAX;
	int32_t x67 = -177716;
	int32_t t14 = 31;

    t14 = (((x65^x66)+x67)+x68);

    if (t14 != 2147302761) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x69 = INT32_MIN;
	static int32_t x70 = INT32_MIN;
	volatile int16_t x71 = 7;
	static uint16_t x72 = 14457U;

    t15 = (((x69^x70)+x71)+x72);

    if (t15 != 14464) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x73 = 1U;
	int8_t x74 = 53;
	uint16_t x76 = 121U;

    t16 = (((x73^x74)+x75)+x76);

    if (t16 != 185U) { NG(); } else { ; }
	
}

void f17(void) {
    	static int16_t x82 = 114;
	int16_t x83 = 17;
	uint16_t x84 = 76U;

    t17 = (((x81^x82)+x83)+x84);

    if (t17 != -22) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x85 = 9U;
	volatile int64_t x86 = -132851014448802839LL;
	uint32_t x88 = UINT32_MAX;
	int64_t t18 = -27934341768416LL;

    t18 = (((x85^x86)+x87)+x88);

    if (t18 != -132851010153835553LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x89 = 162326U;
	int16_t x90 = INT16_MIN;
	volatile uint16_t x91 = UINT16_MAX;
	int32_t x92 = -199307;
	static volatile uint32_t t19 = 1419U;

    t19 = (((x89^x90)+x91)+x92);

    if (t19 != 4294700938U) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x94 = -1;
	int8_t x95 = INT8_MIN;
	volatile int32_t x96 = INT32_MIN;
	uint32_t t20 = 21U;

    t20 = (((x93^x94)+x95)+x96);

    if (t20 != 2147483520U) { NG(); } else { ; }
	
}

void f21(void) {
    	uint16_t x97 = 462U;
	int16_t x98 = -3967;
	int32_t x99 = INT32_MAX;
	static int64_t x100 = INT64_MIN;
	int64_t t21 = -7416862947LL;

    t21 = (((x97^x98)+x99)+x100);

    if (t21 != -9223372034707295922LL) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int64_t x105 = -1LL;
	uint32_t x107 = 478672U;
	static int16_t x108 = -95;

    t22 = (((x105^x106)+x107)+x108);

    if (t22 != 478575LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x109 = -1LL;
	int32_t x110 = INT32_MAX;
	int16_t x111 = -1;
	int64_t x112 = -1LL;

    t23 = (((x109^x110)+x111)+x112);

    if (t23 != -2147483650LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x113 = INT16_MIN;
	static volatile int64_t x114 = 2283016572402372337LL;
	static uint32_t x115 = 270631980U;
	uint16_t x116 = 3677U;
	volatile int64_t t24 = -2673LL;

    t24 = (((x113^x114)+x115)+x116);

    if (t24 != -2283016572131761798LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int8_t x117 = -1;
	volatile int64_t x118 = -94751LL;
	volatile int16_t x119 = -1;
	int64_t x120 = 245058554149LL;

    t25 = (((x117^x118)+x119)+x120);

    if (t25 != 245058648898LL) { NG(); } else { ; }
	
}

void f26(void) {
    	static int32_t x123 = 672;
	volatile int8_t x124 = -1;
	static uint64_t t26 = 7665433742LLU;

    t26 = (((x121^x122)+x123)+x124);

    if (t26 != 245312258436LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x125 = INT64_MIN;
	int8_t x127 = INT8_MIN;
	int64_t t27 = 4310717912891568273LL;

    t27 = (((x125^x126)+x127)+x128);

    if (t27 != -9223372036854736701LL) { NG(); } else { ; }
	
}

void f28(void) {
    	uint32_t x134 = 189961215U;
	uint8_t x135 = 5U;
	volatile uint32_t x136 = 46511U;
	static volatile uint32_t t28 = 6192666U;

    t28 = (((x133^x134)+x135)+x136);

    if (t28 != 190030826U) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x137 = 5;
	static volatile uint8_t x139 = 2U;
	volatile int8_t x140 = -1;
	volatile int64_t t29 = 2144454LL;

    t29 = (((x137^x138)+x139)+x140);

    if (t29 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint16_t x142 = UINT16_MAX;
	int64_t x143 = INT64_MAX;
	static uint8_t x144 = UINT8_MAX;
	int64_t t30 = -252813709703633LL;

    t30 = (((x141^x142)+x143)+x144);

    if (t30 != 9223372036854710526LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x151 = 468131042LLU;
	static uint16_t x152 = 2619U;
	static uint64_t t31 = 13686300072LLU;

    t31 = (((x149^x150)+x151)+x152);

    if (t31 != 468133655LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x154 = 381LLU;
	volatile int8_t x155 = -12;
	uint32_t x156 = UINT32_MAX;
	volatile uint64_t t32 = 146523894446972LLU;

    t32 = (((x153^x154)+x155)+x156);

    if (t32 != 4294967582LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x157 = 2;
	int16_t x158 = INT16_MIN;
	int16_t x159 = INT16_MAX;
	volatile int16_t x160 = -1;
	int32_t t33 = -27225977;

    t33 = (((x157^x158)+x159)+x160);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	static uint16_t x161 = UINT16_MAX;
	int8_t x162 = 39;
	int32_t x164 = INT32_MIN;
	static volatile int32_t t34 = 132772359;

    t34 = (((x161^x162)+x163)+x164);

    if (t34 != -2147352617) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x165 = 9007;
	volatile int16_t x166 = -1;
	int32_t x168 = INT32_MIN;

    t35 = (((x165^x166)+x167)+x168);

    if (t35 != -2147427121) { NG(); } else { ; }
	
}

void f36(void) {
    	volatile uint64_t x169 = 2461927914LLU;
	int64_t x170 = INT64_MIN;
	int8_t x172 = INT8_MAX;
	uint64_t t36 = 50083LLU;

    t36 = (((x169^x170)+x171)+x172);

    if (t36 != 9223372039316703851LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	int32_t x173 = INT32_MIN;
	int64_t x174 = INT64_MIN;
	int64_t x175 = -77623028872143294LL;
	int64_t x176 = -1LL;

    t37 = (((x173^x174)+x175)+x176);

    if (t37 != 9145749005835148865LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x177 = -1852;
	volatile int64_t x178 = -23914056328592LL;
	int32_t x179 = INT32_MIN;
	int16_t x180 = -1;
	volatile int64_t t38 = -4LL;

    t38 = (((x177^x178)+x179)+x180);

    if (t38 != 23911908844211LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x185 = INT8_MIN;
	int16_t x186 = -1;
	int32_t x187 = -1;
	static volatile int16_t x188 = INT16_MIN;

    t39 = (((x185^x186)+x187)+x188);

    if (t39 != -32642) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint32_t x189 = 661122119U;
	uint16_t x190 = 1U;
	int8_t x191 = 0;
	volatile uint32_t t40 = 1316297U;

    t40 = (((x189^x190)+x191)+x192);

    if (t40 != 661122117U) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint8_t x197 = UINT8_MAX;
	static uint8_t x198 = 1U;
	int8_t x199 = INT8_MIN;
	volatile uint32_t x200 = UINT32_MAX;
	volatile uint32_t t41 = 11U;

    t41 = (((x197^x198)+x199)+x200);

    if (t41 != 125U) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x201 = -1;
	uint16_t x202 = 42U;
	uint64_t x203 = 22LLU;
	int8_t x204 = INT8_MAX;

    t42 = (((x201^x202)+x203)+x204);

    if (t42 != 106LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile uint64_t x205 = UINT64_MAX;
	volatile int16_t x206 = -49;
	volatile int8_t x207 = 1;
	int64_t x208 = INT64_MIN;
	static uint64_t t43 = 143313549169LLU;

    t43 = (((x205^x206)+x207)+x208);

    if (t43 != 9223372036854775857LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x209 = INT16_MIN;
	int64_t x210 = -1LL;
	uint32_t x212 = 8U;

    t44 = (((x209^x210)+x211)+x212);

    if (t44 != -9223372036854743033LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x217 = -16186129LL;
	int16_t x218 = INT16_MIN;
	int8_t x219 = -1;
	int32_t x220 = INT32_MIN;
	volatile int64_t t45 = -27612297LL;

    t45 = (((x217^x218)+x219)+x220);

    if (t45 != -2131327762LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x221 = 4235052U;
	uint64_t x223 = 200176LLU;
	int8_t x224 = INT8_MAX;
	static uint64_t t46 = 197419727590755385LLU;

    t46 = (((x221^x222)+x223)+x224);

    if (t46 != 4255208LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int16_t x225 = -14;
	static int64_t x226 = INT64_MAX;
	int64_t t47 = -41643490777LL;

    t47 = (((x225^x226)+x227)+x228);

    if (t47 != -9223372034707291893LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x229 = 30U;
	int64_t x230 = -1LL;
	volatile int32_t x231 = INT32_MIN;
	volatile int64_t t48 = -8912834089242LL;

    t48 = (((x229^x230)+x231)+x232);

    if (t48 != -2147483552LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x235 = UINT64_MAX;
	static int16_t x236 = 12;

    t49 = (((x233^x234)+x235)+x236);

    if (t49 != 18446744073709551565LLU) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x239 = 3075;
	int32_t x240 = -1;
	volatile uint64_t t50 = 6LLU;

    t50 = (((x237^x238)+x239)+x240);

    if (t50 != 18446685766680018048LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x245 = INT32_MIN;
	int8_t x246 = 0;
	uint16_t x247 = 10U;
	static int32_t x248 = -1;
	static int32_t t51 = -52134;

    t51 = (((x245^x246)+x247)+x248);

    if (t51 != -2147483639) { NG(); } else { ; }
	
}

void f52(void) {
    	int64_t x249 = 1030597035LL;
	static int16_t x250 = -1;
	int8_t x251 = 48;
	int64_t x252 = -1181107573LL;
	volatile int64_t t52 = -1881523977162504417LL;

    t52 = (((x249^x250)+x251)+x252);

    if (t52 != -2211704561LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int8_t x253 = -1;
	int64_t x254 = 1719116639LL;
	volatile int16_t x255 = INT16_MIN;
	uint16_t x256 = 13U;

    t53 = (((x253^x254)+x255)+x256);

    if (t53 != -1719149395LL) { NG(); } else { ; }
	
}

void f54(void) {
    	uint16_t x257 = 49U;
	volatile int8_t x259 = -1;
	volatile uint64_t t54 = 171LLU;

    t54 = (((x257^x258)+x259)+x260);

    if (t54 != 3623LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint64_t x261 = UINT64_MAX;
	int32_t x262 = INT32_MAX;
	int8_t x263 = -21;
	int8_t x264 = INT8_MAX;

    t55 = (((x261^x262)+x263)+x264);

    if (t55 != 18446744071562068074LLU) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile int32_t x265 = 277714;
	uint64_t x266 = 514815LLU;
	static volatile int8_t x268 = INT8_MAX;
	uint64_t t56 = 6720202929997919625LLU;

    t56 = (((x265^x266)+x267)+x268);

    if (t56 != 263850LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x269 = 129499563;
	uint32_t x270 = UINT32_MAX;
	uint32_t x271 = 38866528U;
	uint32_t t57 = 115542999U;

    t57 = (((x269^x270)+x271)+x272);

    if (t57 != 4204334264U) { NG(); } else { ; }
	
}

void f58(void) {
    	uint16_t x273 = UINT16_MAX;
	int32_t x274 = 0;
	int16_t x275 = -438;
	int64_t t58 = 0LL;

    t58 = (((x273^x274)+x275)+x276);

    if (t58 != 65096LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x277 = UINT8_MAX;
	int64_t x278 = INT64_MAX;
	static int64_t x279 = INT64_MIN;
	uint32_t x280 = 688721274U;
	volatile int64_t t59 = -3952291815793LL;

    t59 = (((x277^x278)+x279)+x280);

    if (t59 != 688721018LL) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile uint8_t x281 = UINT8_MAX;
	uint16_t x283 = UINT16_MAX;
	int64_t x284 = 430LL;
	int64_t t60 = 2102587082777LL;

    t60 = (((x281^x282)+x283)+x284);

    if (t60 != -9223372036854709588LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x286 = INT16_MAX;
	int32_t x288 = -1;
	volatile int32_t t61 = -58695;

    t61 = (((x285^x286)+x287)+x288);

    if (t61 != -33651) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x289 = 384230617LLU;
	volatile uint16_t x290 = 13U;
	int8_t x291 = -1;
	volatile uint64_t x292 = UINT64_MAX;
	static volatile uint64_t t62 = 33188640263LLU;

    t62 = (((x289^x290)+x291)+x292);

    if (t62 != 384230610LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x293 = 2123868LLU;
	volatile int32_t x294 = INT32_MIN;
	volatile uint64_t x295 = UINT64_MAX;
	int8_t x296 = 1;
	uint64_t t63 = 1996479339913417603LLU;

    t63 = (((x293^x294)+x295)+x296);

    if (t63 != 18446744071564191836LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint8_t x297 = UINT8_MAX;
	int16_t x299 = INT16_MIN;
	static int32_t t64 = -5278;

    t64 = (((x297^x298)+x299)+x300);

    if (t64 != -65665) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x301 = UINT64_MAX;
	int64_t x302 = INT64_MIN;
	int16_t x303 = INT16_MAX;
	int64_t x304 = -21470735212550LL;

    t65 = (((x301^x302)+x303)+x304);

    if (t65 != 9223350566119596024LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x305 = INT8_MAX;
	static int64_t x306 = 562LL;
	static volatile int8_t x308 = INT8_MIN;
	int64_t t66 = 471LL;

    t66 = (((x305^x306)+x307)+x308);

    if (t66 != 460LL) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x309 = 19723U;
	volatile int64_t x310 = 1267LL;
	static uint16_t x311 = UINT16_MAX;
	static volatile uint8_t x312 = 0U;
	volatile int64_t t67 = -770147102LL;

    t67 = (((x309^x310)+x311)+x312);

    if (t67 != 84471LL) { NG(); } else { ; }
	
}

void f68(void) {
    	uint32_t x317 = 183U;
	uint8_t x318 = 6U;
	volatile int64_t x320 = 1LL;
	int64_t t68 = 64000LL;

    t68 = (((x317^x318)+x319)+x320);

    if (t68 != 305LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x321 = 1893;
	uint64_t x322 = UINT64_MAX;
	int32_t x323 = INT32_MAX;
	int64_t x324 = INT64_MAX;

    t69 = (((x321^x322)+x323)+x324);

    if (t69 != 9223372039002257560LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint16_t x333 = 20U;
	static uint8_t x335 = UINT8_MAX;
	volatile int64_t t70 = -6318624140426LL;

    t70 = (((x333^x334)+x335)+x336);

    if (t70 != -9223372036854775661LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x337 = INT64_MIN;
	static int32_t x338 = INT32_MIN;
	int16_t x339 = 61;
	uint64_t x340 = 4788LLU;
	static volatile uint64_t t71 = 18126676274511733LLU;

    t71 = (((x337^x338)+x339)+x340);

    if (t71 != 9223372034707297009LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x344 = UINT8_MAX;

    t72 = (((x341^x342)+x343)+x344);

    if (t72 != -9223372036854775425LL) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x349 = 91315135LLU;
	int16_t x351 = INT16_MAX;
	volatile uint64_t t73 = 27302529344248025LLU;

    t73 = (((x349^x350)+x351)+x352);

    if (t73 != 91045234LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x353 = UINT16_MAX;
	int8_t x354 = INT8_MIN;
	volatile uint16_t x355 = 31U;
	uint32_t x356 = UINT32_MAX;
	static uint32_t t74 = 63978U;

    t74 = (((x353^x354)+x355)+x356);

    if (t74 != 4294901917U) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x361 = -1;
	volatile int16_t x362 = 1;
	static int16_t x363 = INT16_MAX;
	int16_t x364 = 2329;
	int32_t t75 = 936;

    t75 = (((x361^x362)+x363)+x364);

    if (t75 != 35094) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x365 = 89428LL;
	int64_t x366 = 307072LL;
	uint32_t x367 = 25U;
	static uint8_t x368 = 2U;
	volatile int64_t t76 = -66106262668LL;

    t76 = (((x365^x366)+x367)+x368);

    if (t76 != 389871LL) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x373 = UINT16_MAX;
	int64_t x375 = INT64_MIN;
	int32_t x376 = 115;
	static volatile int64_t t77 = 162333LL;

    t77 = (((x373^x374)+x375)+x376);

    if (t77 != -9223372036854775693LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int16_t x377 = -1;
	int8_t x379 = -2;
	int32_t t78 = -3263;

    t78 = (((x377^x378)+x379)+x380);

    if (t78 != -35349) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x385 = UINT32_MAX;
	uint64_t x386 = UINT64_MAX;
	volatile uint32_t x387 = 1331U;
	uint64_t x388 = 94497863837LLU;
	uint64_t t79 = 17886984335LLU;

    t79 = (((x385^x386)+x387)+x388);

    if (t79 != 90202897872LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x389 = 0U;
	int32_t x390 = INT32_MAX;
	int16_t x392 = INT16_MIN;

    t80 = (((x389^x390)+x391)+x392);

    if (t80 != -9223372034707324929LL) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x399 = INT8_MIN;

    t81 = (((x397^x398)+x399)+x400);

    if (t81 != 4294488476U) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint8_t x402 = UINT8_MAX;
	static int8_t x403 = -1;
	int8_t x404 = INT8_MIN;

    t82 = (((x401^x402)+x403)+x404);

    if (t82 != 65151) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x413 = 222;
	volatile int32_t x414 = INT32_MAX;
	volatile int32_t x415 = -355;
	int8_t x416 = -1;
	volatile int32_t t83 = 13;

    t83 = (((x413^x414)+x415)+x416);

    if (t83 != 2147483069) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x421 = INT64_MIN;
	uint8_t x423 = UINT8_MAX;
	int64_t x424 = -1LL;
	volatile int64_t t84 = -3257193LL;

    t84 = (((x421^x422)+x423)+x424);

    if (t84 != -9223372034707291907LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x425 = 41U;
	static volatile uint8_t x426 = 4U;
	static volatile int8_t x428 = INT8_MIN;
	volatile int32_t t85 = 7;

    t85 = (((x425^x426)+x427)+x428);

    if (t85 != -32851) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x434 = -1;
	static volatile int32_t t86 = -1;

    t86 = (((x433^x434)+x435)+x436);

    if (t86 != 255) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x437 = INT16_MIN;
	int32_t x438 = INT32_MIN;
	volatile int8_t x439 = -1;

    t87 = (((x437^x438)+x439)+x440);

    if (t87 != 2147450878LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x441 = INT32_MIN;
	uint64_t x442 = 483938462390521155LLU;
	static int64_t x443 = INT64_MIN;
	int64_t x444 = -1LL;
	volatile uint64_t t88 = 48533LLU;

    t88 = (((x441^x442)+x443)+x444);

    if (t88 != 8739433573925227842LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x445 = -3LL;
	volatile int8_t x448 = 1;
	volatile int64_t t89 = 7857143LL;

    t89 = (((x445^x446)+x447)+x448);

    if (t89 != 2147483650LL) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int32_t x449 = -1;
	int32_t x450 = -1;

    t90 = (((x449^x450)+x451)+x452);

    if (t90 != 2147486285U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x453 = -1;
	static int32_t x454 = -1;
	int32_t x455 = INT32_MAX;

    t91 = (((x453^x454)+x455)+x456);

    if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
    	int8_t x457 = 3;
	int64_t x458 = INT64_MAX;
	volatile int16_t x459 = INT16_MIN;
	static uint16_t x460 = 11U;
	int64_t t92 = 44LL;

    t92 = (((x457^x458)+x459)+x460);

    if (t92 != 9223372036854743047LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x462 = INT8_MIN;
	int8_t x463 = INT8_MIN;
	uint16_t x464 = UINT16_MAX;

    t93 = (((x461^x462)+x463)+x464);

    if (t93 != 65407) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x465 = 1;
	int16_t x466 = -1;
	uint8_t x468 = 52U;

    t94 = (((x465^x466)+x467)+x468);

    if (t94 != 49) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x469 = -98LL;
	int64_t x470 = INT64_MIN;
	int64_t x472 = 28LL;
	int64_t t95 = 4831751LL;

    t95 = (((x469^x470)+x471)+x472);

    if (t95 != 9223372036854770987LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x473 = 16205;
	int64_t x474 = -1LL;
	int16_t x475 = 952;
	uint32_t x476 = 7691188U;
	int64_t t96 = -217649252656744LL;

    t96 = (((x473^x474)+x475)+x476);

    if (t96 != 7675934LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int64_t x478 = INT64_MIN;
	int32_t x480 = INT32_MIN;
	volatile int64_t t97 = -6495259914864LL;

    t97 = (((x477^x478)+x479)+x480);

    if (t97 != 9223372034707226624LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int32_t x481 = -1;
	int8_t x482 = -1;
	int64_t x483 = -1369606LL;
	uint16_t x484 = 6U;

    t98 = (((x481^x482)+x483)+x484);

    if (t98 != -1369600LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static int32_t x485 = -1;
	volatile int16_t x486 = 69;
	int8_t x487 = -2;
	int8_t x488 = INT8_MAX;
	static int32_t t99 = 253291;

    t99 = (((x485^x486)+x487)+x488);

    if (t99 != 55) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x489 = INT32_MAX;
	static int8_t x490 = 1;
	volatile int8_t x492 = INT8_MAX;

    t100 = (((x489^x490)+x491)+x492);

    if (t100 != 2147483645) { NG(); } else { ; }
	
}

void f101(void) {
    	static int8_t x497 = -1;
	static uint8_t x498 = 43U;
	int16_t x499 = INT16_MIN;
	static int8_t x500 = -45;
	volatile int32_t t101 = 176274;

    t101 = (((x497^x498)+x499)+x500);

    if (t101 != -32857) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x501 = 2321594042361LLU;
	int16_t x502 = 526;
	int16_t x503 = 399;
	uint8_t x504 = 7U;
	static volatile uint64_t t102 = 1459169614701983365LLU;

    t102 = (((x501^x502)+x503)+x504);

    if (t102 != 2321594042253LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x505 = 30163U;
	int32_t x506 = 436;
	static int32_t x507 = INT32_MIN;
	uint64_t x508 = 2334783885654135LLU;
	volatile uint64_t t103 = 4924415362606LLU;

    t103 = (((x505^x506)+x507)+x508);

    if (t103 != 2334781738200286LLU) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x509 = 246322573U;
	int8_t x510 = INT8_MIN;
	volatile int16_t x511 = INT16_MAX;
	volatile int64_t x512 = -2376071LL;
	int64_t t104 = 20302925973698LL;

    t104 = (((x509^x510)+x511)+x512);

    if (t104 != 4046301317LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x513 = INT16_MIN;
	static volatile int16_t x515 = -1;
	int16_t x516 = INT16_MIN;

    t105 = (((x513^x514)+x515)+x516);

    if (t105 != 31193185) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x517 = INT16_MIN;
	int32_t x520 = -63248149;

    t106 = (((x517^x518)+x519)+x520);

    if (t106 != -63248221) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint64_t x522 = 5381391749822602LLU;
	int8_t x523 = -1;
	int8_t x524 = INT8_MIN;
	static uint64_t t107 = 248438414997707309LLU;

    t107 = (((x521^x522)+x523)+x524);

    if (t107 != 18441362681959725065LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x525 = -24597LL;
	int8_t x527 = -1;
	volatile uint64_t t108 = 11963565815LLU;

    t108 = (((x525^x526)+x527)+x528);

    if (t108 != 18446718081883276393LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x530 = INT8_MAX;
	uint16_t x531 = UINT16_MAX;
	volatile int64_t x532 = INT64_MAX;

    t109 = (((x529^x530)+x531)+x532);

    if (t109 != 65661LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x533 = INT16_MIN;
	int8_t x534 = INT8_MIN;
	static int8_t x535 = INT8_MIN;
	int16_t x536 = INT16_MIN;

    t110 = (((x533^x534)+x535)+x536);

    if (t110 != -256) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int32_t x537 = -1;
	uint16_t x538 = UINT16_MAX;
	int64_t x539 = -3802913430LL;
	uint64_t x540 = 14575092820584073LLU;
	static uint64_t t111 = 476641343366220987LLU;

    t111 = (((x537^x538)+x539)+x540);

    if (t111 != 14575089017605107LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x545 = INT32_MIN;
	volatile int32_t x546 = 5559622;
	int32_t x547 = 6;
	volatile int8_t x548 = -23;

    t112 = (((x545^x546)+x547)+x548);

    if (t112 != -2141924043) { NG(); } else { ; }
	
}

void f113(void) {
    	static int64_t x549 = -53698042761LL;
	static uint64_t x550 = 186769105LLU;
	static uint32_t x552 = UINT32_MAX;

    t113 = (((x549^x550)+x551)+x552);

    if (t113 != 18446744024124045988LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x553 = 15;
	uint64_t x554 = 1202746947841LLU;
	volatile int64_t x555 = -1LL;
	int64_t x556 = -20553979697082LL;

    t114 = (((x553^x554)+x555)+x556);

    if (t114 != 18446724722476802387LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile int32_t x559 = -1;
	uint64_t x560 = UINT64_MAX;
	volatile uint64_t t115 = 30340545442270LLU;

    t115 = (((x557^x558)+x559)+x560);

    if (t115 != 9223372036854775805LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x562 = 13295940717866LLU;
	int64_t x563 = -1LL;
	volatile int16_t x564 = INT16_MIN;

    t116 = (((x561^x562)+x563)+x564);

    if (t116 != 18446730777768800980LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x565 = -1;
	int8_t x566 = INT8_MIN;
	volatile int32_t x567 = 0;
	static uint8_t x568 = UINT8_MAX;

    t117 = (((x565^x566)+x567)+x568);

    if (t117 != 382) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x570 = 89840860LLU;
	int32_t x571 = 156775401;
	volatile int8_t x572 = INT8_MIN;
	static uint64_t t118 = 394707828LLU;

    t118 = (((x569^x570)+x571)+x572);

    if (t118 != 66934412LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x573 = 11146390069024LLU;
	volatile uint64_t x574 = 12LLU;
	uint8_t x575 = 60U;
	int16_t x576 = INT16_MAX;
	uint64_t t119 = 6208153389765112LLU;

    t119 = (((x573^x574)+x575)+x576);

    if (t119 != 11146390101863LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile uint32_t x577 = 1729107U;
	int32_t x578 = INT32_MAX;
	int64_t x579 = INT64_MIN;
	uint64_t t120 = 29150610756702619LLU;

    t120 = (((x577^x578)+x579)+x580);

    if (t120 != 9229573429580273536LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	static volatile uint16_t x581 = 13864U;
	static int32_t x582 = INT32_MAX;
	volatile int32_t x583 = -1;
	volatile uint32_t x584 = 16328U;
	static volatile uint32_t t121 = 251191U;

    t121 = (((x581^x582)+x583)+x584);

    if (t121 != 2147486110U) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x585 = 8U;
	uint64_t x586 = UINT64_MAX;
	uint16_t x587 = UINT16_MAX;
	static uint32_t x588 = 33076U;
	volatile uint64_t t122 = 242860256566367731LLU;

    t122 = (((x585^x586)+x587)+x588);

    if (t122 != 98602LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x589 = -1;
	volatile int16_t x590 = INT16_MIN;
	int8_t x591 = -1;
	volatile int64_t x592 = -28825LL;
	volatile int64_t t123 = -4LL;

    t123 = (((x589^x590)+x591)+x592);

    if (t123 != 3941LL) { NG(); } else { ; }
	
}

void f124(void) {
    	static int32_t x593 = -12129650;
	int32_t x594 = INT32_MIN;
	static volatile uint16_t x595 = 16U;
	uint64_t x596 = UINT64_MAX;
	uint64_t t124 = 934083574144898LLU;

    t124 = (((x593^x594)+x595)+x596);

    if (t124 != 2135354013LLU) { NG(); } else { ; }
	
}

void f125(void) {
    	int16_t x597 = INT16_MAX;
	int64_t x598 = -1LL;
	static int16_t x599 = -1422;
	uint64_t x600 = 62236LLU;
	static volatile uint64_t t125 = 1555LLU;

    t125 = (((x597^x598)+x599)+x600);

    if (t125 != 28046LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x602 = 2711;
	uint16_t x603 = UINT16_MAX;
	int64_t t126 = -669840465948648742LL;

    t126 = (((x601^x602)+x603)+x604);

    if (t126 != 68251LL) { NG(); } else { ; }
	
}

void f127(void) {
    	static int8_t x605 = INT8_MIN;
	uint32_t x607 = UINT32_MAX;
	int8_t x608 = 7;
	uint32_t t127 = 309U;

    t127 = (((x605^x606)+x607)+x608);

    if (t127 != 4294934661U) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x610 = INT8_MIN;
	int16_t x612 = -1;
	static int64_t t128 = -1257LL;

    t128 = (((x609^x610)+x611)+x612);

    if (t128 != 32638LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x613 = 5;
	static volatile int64_t x614 = INT64_MIN;
	uint16_t x615 = 25U;
	static volatile uint16_t x616 = 499U;
	static volatile int64_t t129 = 336083742684560325LL;

    t129 = (((x613^x614)+x615)+x616);

    if (t129 != -9223372036854775279LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x625 = 11540169LLU;
	volatile int32_t x626 = -24494;
	int16_t x627 = -1;
	int16_t x628 = -1;

    t130 = (((x625^x626)+x627)+x628);

    if (t130 != 18446744073697998489LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x629 = 6031LLU;
	int8_t x631 = 2;
	int64_t x632 = INT64_MIN;
	volatile uint64_t t131 = 821945199LLU;

    t131 = (((x629^x630)+x631)+x632);

    if (t131 != 9223372036854769778LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x633 = UINT32_MAX;
	volatile int64_t x634 = 43862400LL;
	int64_t x635 = INT64_MIN;
	uint32_t x636 = 3167359U;
	volatile int64_t t132 = 2142009499047733383LL;

    t132 = (((x633^x634)+x635)+x636);

    if (t132 != -9223372032600503554LL) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x639 = -18963967491284LL;
	uint16_t x640 = 6U;
	uint64_t t133 = 502699906305LLU;

    t133 = (((x637^x638)+x639)+x640);

    if (t133 != 18446725109617258311LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x641 = INT8_MIN;
	volatile int8_t x642 = -55;
	uint16_t x643 = UINT16_MAX;
	int16_t x644 = INT16_MAX;

    t134 = (((x641^x642)+x643)+x644);

    if (t134 != 98375) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int16_t x645 = INT16_MIN;
	int16_t x646 = -7232;
	uint32_t x647 = UINT32_MAX;
	int64_t x648 = -1LL;
	static int64_t t135 = -25749150056197744LL;

    t135 = (((x645^x646)+x647)+x648);

    if (t135 != 25534LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static int32_t x649 = -1;
	uint32_t x650 = 29025U;
	uint64_t x651 = UINT64_MAX;
	volatile uint16_t x652 = UINT16_MAX;
	uint64_t t136 = 20118965953LLU;

    t136 = (((x649^x650)+x651)+x652);

    if (t136 != 4295003804LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x653 = INT64_MIN;
	uint64_t x654 = 46157147626LLU;
	int16_t x655 = -1;
	volatile int32_t x656 = 257022;
	static uint64_t t137 = 5008128140LLU;

    t137 = (((x653^x654)+x655)+x656);

    if (t137 != 9223372083012180455LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	static int8_t x657 = INT8_MIN;
	int16_t x658 = -1;
	uint32_t t138 = 13U;

    t138 = (((x657^x658)+x659)+x660);

    if (t138 != 891128302U) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x662 = INT16_MIN;
	uint64_t x663 = UINT64_MAX;
	int64_t x664 = INT64_MIN;
	uint64_t t139 = 1407279948603717LLU;

    t139 = (((x661^x662)+x663)+x664);

    if (t139 != 9223372036854808447LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile uint8_t x673 = 1U;
	static volatile int32_t x674 = 32280252;
	int16_t x676 = -5;
	int32_t t140 = 7;

    t140 = (((x673^x674)+x675)+x676);

    if (t140 != 32280247) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x678 = UINT64_MAX;
	static int8_t x679 = INT8_MIN;
	volatile uint64_t t141 = 264478174821087967LLU;

    t141 = (((x677^x678)+x679)+x680);

    if (t141 != 9223372032559808383LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x681 = 33;
	int8_t x682 = INT8_MIN;
	int64_t x683 = -1LL;
	volatile int32_t x684 = -1;
	int64_t t142 = -837LL;

    t142 = (((x681^x682)+x683)+x684);

    if (t142 != -97LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x687 = 0;
	int64_t t143 = 109339236379LL;

    t143 = (((x685^x686)+x687)+x688);

    if (t143 != -4349743258973908LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int32_t x689 = INT32_MIN;
	uint8_t x691 = 15U;
	volatile uint16_t x692 = UINT16_MAX;
	int64_t t144 = -60800380884771920LL;

    t144 = (((x689^x690)+x691)+x692);

    if (t144 != -9223372034707226611LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static volatile uint32_t x693 = 13U;
	uint32_t x695 = 18U;
	static int64_t x696 = -449705LL;
	volatile int64_t t145 = 6516339001201166LL;

    t145 = (((x693^x694)+x695)+x696);

    if (t145 != -449682LL) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x701 = INT16_MIN;
	int32_t x702 = -1616;
	int8_t x703 = INT8_MIN;
	static volatile int32_t x704 = 603986742;

    t146 = (((x701^x702)+x703)+x704);

    if (t146 != 604017766) { NG(); } else { ; }
	
}

void f147(void) {
    	static int32_t x705 = INT32_MIN;
	int32_t x707 = 28;
	int32_t x708 = INT32_MIN;
	volatile uint64_t t147 = 619718060425LLU;

    t147 = (((x705^x706)+x707)+x708);

    if (t147 != 18446744022166805754LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x709 = 95U;
	int8_t x710 = -1;
	static int16_t x711 = INT16_MIN;
	int64_t x712 = INT64_MAX;
	volatile int64_t t148 = 2051524577354785LL;

    t148 = (((x709^x710)+x711)+x712);

    if (t148 != 9223372036854742943LL) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x714 = 1;
	int32_t x716 = 13283;
	static volatile uint32_t t149 = 2293417U;

    t149 = (((x713^x714)+x715)+x716);

    if (t149 != 61394U) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int32_t x718 = -1;
	static uint16_t x719 = 3970U;
	volatile int8_t x720 = INT8_MIN;
	volatile int32_t t150 = 18017;

    t150 = (((x717^x718)+x719)+x720);

    if (t150 != -61694) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x721 = UINT16_MAX;
	int64_t x722 = INT64_MAX;
	volatile uint32_t x723 = 5U;
	int16_t x724 = INT16_MAX;

    t151 = (((x721^x722)+x723)+x724);

    if (t151 != 9223372036854743044LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x725 = INT16_MIN;
	int16_t x727 = INT16_MIN;
	volatile uint32_t x728 = 26U;
	uint32_t t152 = 24U;

    t152 = (((x725^x726)+x727)+x728);

    if (t152 != 4238659268U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint32_t x729 = 1035668452U;
	int32_t x730 = -1;
	int8_t x732 = INT8_MIN;
	uint32_t t153 = 300946657U;

    t153 = (((x729^x730)+x731)+x732);

    if (t153 != 3259298587U) { NG(); } else { ; }
	
}

void f154(void) {
    	static int16_t x733 = INT16_MIN;
	int8_t x734 = 3;
	volatile uint32_t x735 = 1U;
	int16_t x736 = INT16_MIN;

    t154 = (((x733^x734)+x735)+x736);

    if (t154 != 4294901764U) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x738 = -1;
	uint32_t x739 = 1086798646U;
	static uint64_t x740 = 4209707949332485813LLU;
	volatile uint64_t t155 = 58529018343861LLU;

    t155 = (((x737^x738)+x739)+x740);

    if (t155 != 4209707950419284331LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x741 = UINT8_MAX;
	int32_t x743 = 520290668;
	static int64_t x744 = 791758579556543LL;
	volatile int64_t t156 = 107LL;

    t156 = (((x741^x742)+x743)+x744);

    if (t156 != 791759099847466LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x745 = INT32_MAX;
	uint32_t x746 = 2872U;
	int64_t x747 = 0LL;
	static uint16_t x748 = 42U;
	static volatile int64_t t157 = 28154LL;

    t157 = (((x745^x746)+x747)+x748);

    if (t157 != 2147480817LL) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int16_t x749 = INT16_MIN;
	volatile int64_t x750 = -1LL;
	int64_t x752 = -1LL;
	volatile int64_t t158 = 0LL;

    t158 = (((x749^x750)+x751)+x752);

    if (t158 != 32765LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int8_t x753 = 38;
	static int64_t x754 = INT64_MIN;
	static uint32_t x755 = UINT32_MAX;
	uint16_t x756 = UINT16_MAX;
	volatile int64_t t159 = -4603374493725024629LL;

    t159 = (((x753^x754)+x755)+x756);

    if (t159 != -9223372032559742940LL) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile uint64_t x757 = UINT64_MAX;
	uint64_t x758 = UINT64_MAX;
	uint64_t x759 = UINT64_MAX;
	volatile uint16_t x760 = 1U;
	volatile uint64_t t160 = 14679LLU;

    t160 = (((x757^x758)+x759)+x760);

    if (t160 != 0LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x761 = 25732777U;
	static int16_t x762 = 1;
	uint64_t x763 = 91LLU;
	static volatile uint8_t x764 = UINT8_MAX;

    t161 = (((x761^x762)+x763)+x764);

    if (t161 != 25733122LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	static volatile uint64_t x765 = 1LLU;
	int32_t x766 = INT32_MAX;
	static uint8_t x767 = 1U;
	static volatile uint64_t x768 = UINT64_MAX;
	uint64_t t162 = 4929LLU;

    t162 = (((x765^x766)+x767)+x768);

    if (t162 != 2147483646LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x769 = UINT64_MAX;
	int16_t x770 = 7;
	uint8_t x771 = UINT8_MAX;
	static int8_t x772 = 3;

    t163 = (((x769^x770)+x771)+x772);

    if (t163 != 250LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	int64_t x773 = INT64_MAX;
	static volatile int16_t x774 = -1;
	uint16_t x775 = UINT16_MAX;
	int16_t x776 = INT16_MAX;

    t164 = (((x773^x774)+x775)+x776);

    if (t164 != -9223372036854677506LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x777 = 6;
	int32_t x778 = -1;
	uint16_t x779 = UINT16_MAX;
	uint32_t x780 = UINT32_MAX;

    t165 = (((x777^x778)+x779)+x780);

    if (t165 != 65527U) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint64_t x781 = 961LLU;
	static volatile int32_t x783 = -1;
	uint64_t t166 = 325491343882249LLU;

    t166 = (((x781^x782)+x783)+x784);

    if (t166 != 18446744073709550525LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x786 = INT8_MIN;
	int32_t x787 = -262768393;
	static int64_t x788 = -44004373762967LL;
	static uint64_t t167 = 4116230215112854LLU;

    t167 = (((x785^x786)+x787)+x788);

    if (t167 != 18446700069072113429LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	static int8_t x791 = 7;
	uint64_t x792 = 11973LLU;
	static volatile uint64_t t168 = 45187644407780LLU;

    t168 = (((x789^x790)+x791)+x792);

    if (t168 != 12100LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x793 = -1;
	int32_t x795 = INT32_MAX;
	int16_t x796 = INT16_MIN;
	uint64_t t169 = 45312LLU;

    t169 = (((x793^x794)+x795)+x796);

    if (t169 != 18446740493452903976LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x797 = INT16_MAX;
	int32_t x798 = -1;
	uint16_t x800 = UINT16_MAX;

    t170 = (((x797^x798)+x799)+x800);

    if (t170 != 32766LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int16_t x801 = 9031;
	static int64_t x802 = INT64_MIN;
	volatile int32_t x803 = 11060864;
	volatile uint64_t t171 = 2808407745LLU;

    t171 = (((x801^x802)+x803)+x804);

    if (t171 != 9223372036865845702LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x805 = -1;
	uint32_t x808 = 3407314U;
	volatile int64_t t172 = 30919406488888LL;

    t172 = (((x805^x806)+x807)+x808);

    if (t172 != 290238862045562LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x809 = -1;
	int32_t x810 = 899044;
	int8_t x812 = INT8_MIN;

    t173 = (((x809^x810)+x811)+x812);

    if (t173 != -898918) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x817 = UINT8_MAX;
	volatile uint64_t x818 = UINT64_MAX;
	volatile int32_t x819 = 643;
	int32_t x820 = 291470;
	static volatile uint64_t t174 = 3579459995LLU;

    t174 = (((x817^x818)+x819)+x820);

    if (t174 != 291857LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x821 = -1;
	int64_t x823 = 119133182991000LL;
	uint8_t x824 = 1U;

    t175 = (((x821^x822)+x823)+x824);

    if (t175 != 119133185778874LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static int64_t x825 = -1LL;
	int16_t x827 = INT16_MAX;
	volatile uint64_t t176 = 267196263218770473LLU;

    t176 = (((x825^x826)+x827)+x828);

    if (t176 != 32739LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	static volatile int32_t x830 = -1;
	static int64_t x831 = 360836201LL;
	static volatile int16_t x832 = 11;

    t177 = (((x829^x830)+x831)+x832);

    if (t177 != 3935595578LL) { NG(); } else { ; }
	
}

void f178(void) {
    	static int32_t x833 = INT32_MIN;
	int8_t x834 = INT8_MAX;
	static uint16_t x835 = UINT16_MAX;
	int64_t t178 = -4LL;

    t178 = (((x833^x834)+x835)+x836);

    if (t178 != 977740852563LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x837 = INT64_MAX;
	int8_t x838 = INT8_MIN;
	static volatile int64_t t179 = 134LL;

    t179 = (((x837^x838)+x839)+x840);

    if (t179 != -9223372032559808182LL) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x841 = 101950085LL;
	static int16_t x842 = INT16_MIN;
	int16_t x844 = INT16_MIN;
	volatile uint64_t t180 = 4LLU;

    t180 = (((x841^x842)+x843)+x844);

    if (t180 != 18446744073607553668LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x845 = INT32_MIN;
	static uint64_t x846 = UINT64_MAX;
	uint64_t x847 = UINT64_MAX;
	volatile uint32_t x848 = 1250512062U;
	volatile uint64_t t181 = 13977314974911733LLU;

    t181 = (((x845^x846)+x847)+x848);

    if (t181 != 3397995708LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint32_t x849 = 11625069U;
	uint32_t x850 = 8018161U;
	static volatile int64_t t182 = 10256033LL;

    t182 = (((x849^x850)+x851)+x852);

    if (t182 != -9223372036841456987LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x853 = INT16_MIN;
	volatile uint16_t x854 = UINT16_MAX;
	int64_t x855 = INT64_MAX;
	uint16_t x856 = 26U;

    t183 = (((x853^x854)+x855)+x856);

    if (t183 != 9223372036854743064LL) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x857 = INT8_MIN;
	uint32_t x858 = 7397753U;
	static uint8_t x859 = UINT8_MAX;
	static int16_t x860 = -3356;
	static uint32_t t184 = 60852680U;

    t184 = (((x857^x858)+x859)+x860);

    if (t184 != 4287566556U) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint16_t x861 = UINT16_MAX;
	int16_t x862 = -124;
	int8_t x863 = 1;
	int16_t x864 = INT16_MIN;

    t185 = (((x861^x862)+x863)+x864);

    if (t185 != -98180) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile int32_t x865 = -1;
	uint8_t x868 = 41U;
	volatile int32_t t186 = 866;

    t186 = (((x865^x866)+x867)+x868);

    if (t186 != -99) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x873 = UINT8_MAX;
	volatile uint8_t x874 = UINT8_MAX;
	int8_t x875 = 0;
	uint32_t x876 = 1229042875U;

    t187 = (((x873^x874)+x875)+x876);

    if (t187 != 1229042875U) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int32_t x877 = -20;
	static uint32_t x879 = UINT32_MAX;
	volatile int8_t x880 = INT8_MIN;
	static uint64_t t188 = 812069816992986620LLU;

    t188 = (((x877^x878)+x879)+x880);

    if (t188 != 4294966547LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int8_t x885 = INT8_MAX;
	int32_t x887 = INT32_MIN;
	int64_t t189 = -742129622912LL;

    t189 = (((x885^x886)+x887)+x888);

    if (t189 != 9223372034707292658LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint32_t x889 = UINT32_MAX;
	static int8_t x890 = 12;
	int8_t x891 = -7;
	static uint8_t x892 = UINT8_MAX;
	volatile uint32_t t190 = 3U;

    t190 = (((x889^x890)+x891)+x892);

    if (t190 != 235U) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x901 = INT8_MIN;
	uint16_t x902 = UINT16_MAX;
	int64_t x903 = -1LL;

    t191 = (((x901^x902)+x903)+x904);

    if (t191 != -65538LL) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint32_t x906 = 458966U;
	int64_t x907 = 22785479322LL;

    t192 = (((x905^x906)+x907)+x908);

    if (t192 != 22785938287LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x909 = INT16_MIN;
	int16_t x910 = 2;
	static volatile uint32_t x912 = 12U;
	int64_t t193 = 6LL;

    t193 = (((x909^x910)+x911)+x912);

    if (t193 != -32755LL) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x913 = INT64_MIN;
	int64_t x914 = INT64_MIN;
	volatile int16_t x915 = INT16_MIN;
	uint8_t x916 = UINT8_MAX;
	volatile int64_t t194 = 318090879017746816LL;

    t194 = (((x913^x914)+x915)+x916);

    if (t194 != -32513LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x929 = INT32_MIN;
	uint16_t x930 = UINT16_MAX;
	volatile int64_t x931 = INT64_MAX;
	int64_t x932 = INT64_MIN;
	volatile int64_t t195 = 3303846699LL;

    t195 = (((x929^x930)+x931)+x932);

    if (t195 != -2147418114LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x934 = INT16_MIN;
	int32_t x935 = 331;
	static int8_t x936 = INT8_MIN;
	volatile int32_t t196 = 145;

    t196 = (((x933^x934)+x935)+x936);

    if (t196 != 32970) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x946 = 519193092LLU;
	uint64_t x947 = 48LLU;
	volatile int8_t x948 = INT8_MIN;
	volatile uint64_t t197 = 6395LLU;

    t197 = (((x945^x946)+x947)+x948);

    if (t197 != 18446744073190358443LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int64_t x949 = -1LL;
	static int64_t x951 = -25LL;
	int16_t x952 = INT16_MIN;

    t198 = (((x949^x950)+x951)+x952);

    if (t198 != -32791LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x953 = INT16_MAX;
	volatile int64_t x954 = INT64_MAX;
	volatile uint64_t x955 = UINT64_MAX;

    t199 = (((x953^x954)+x955)+x956);

    if (t199 != 9223372036854743097LLU) { NG(); } else { ; }
	
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

