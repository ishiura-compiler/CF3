
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

static uint64_t t0 = 3868562477LLU;
static int32_t x8 = 6;
int8_t x10 = INT8_MIN;
volatile int8_t x25 = INT8_MIN;
volatile int8_t x27 = 1;
static int16_t x34 = 4;
static uint8_t x35 = 1U;
uint32_t x36 = 3U;
static uint32_t x41 = UINT32_MAX;
int64_t t9 = -474514LL;
int8_t x49 = INT8_MIN;
int32_t x52 = -1;
uint64_t t14 = 592836201013515981LLU;
static int16_t x77 = INT16_MIN;
volatile int8_t x87 = 2;
static uint64_t t17 = 1847698LLU;
int8_t x105 = INT8_MAX;
volatile uint64_t t23 = 7823687575119690LLU;
volatile uint32_t x117 = UINT32_MAX;
int64_t t25 = 1286LL;
uint8_t x129 = 5U;
volatile int32_t x138 = INT32_MIN;
static volatile uint32_t t28 = 360U;
int64_t x142 = INT64_MIN;
int16_t x143 = INT16_MIN;
volatile int64_t x151 = 1449591600700193695LL;
uint32_t x153 = 486799U;
volatile uint16_t x160 = UINT16_MAX;
volatile int8_t x163 = -12;
int16_t x167 = INT16_MIN;
uint64_t x168 = 697LLU;
static int16_t x169 = INT16_MAX;
static int8_t x172 = 27;
static volatile int32_t t36 = -971960;
static int64_t x175 = INT64_MAX;
static volatile uint32_t x176 = 104991593U;
int8_t x179 = -1;
uint64_t x180 = 8126661504294438LLU;
volatile uint8_t x186 = UINT8_MAX;
volatile int64_t x194 = INT64_MIN;
int64_t t41 = -991218391088008LL;
uint32_t x199 = 236U;
uint32_t x221 = 9867U;
int16_t x223 = -1;
volatile uint16_t x230 = 1348U;
int64_t x231 = -1LL;
volatile int64_t t49 = -18877761577LL;
static volatile int64_t x243 = INT64_MIN;
uint16_t x248 = UINT16_MAX;
static int32_t x250 = INT32_MAX;
int16_t x259 = INT16_MIN;
uint32_t t55 = 165324U;
int32_t x269 = INT32_MIN;
int8_t x272 = -6;
volatile uint32_t t56 = 32109U;
uint64_t x273 = 2431LLU;
static int8_t x276 = 3;
int32_t x278 = INT32_MIN;
volatile uint8_t x287 = UINT8_MAX;
volatile uint32_t t64 = 311U;
int32_t x311 = INT32_MIN;
uint32_t x317 = UINT32_MAX;
int32_t x329 = INT32_MIN;
uint64_t x332 = 1820081984093LLU;
uint8_t x334 = 84U;
uint16_t x342 = 7118U;
static int32_t x347 = -1;
static int8_t x348 = INT8_MIN;
int64_t t77 = 707424672LL;
int32_t x374 = 7171456;
int8_t x379 = 9;
int32_t x380 = INT32_MIN;
volatile int8_t x396 = -1;
uint64_t t82 = 76458595879315LLU;
volatile int32_t x400 = INT32_MIN;
uint64_t x409 = 2LLU;
int16_t x417 = INT16_MAX;
volatile int16_t x419 = INT16_MIN;
int32_t x428 = -1;
static uint64_t x439 = 2036LLU;
uint64_t t91 = 29347053137591227LLU;
int32_t x441 = INT32_MAX;
static int32_t x442 = 93159180;
volatile uint32_t x446 = 12U;
int32_t x449 = INT32_MIN;
uint32_t x450 = 1775467U;
volatile int32_t x452 = 1201267;
int32_t x454 = INT32_MIN;
volatile uint16_t x455 = UINT16_MAX;
uint64_t t96 = 1265LLU;
uint64_t t97 = 521484LLU;
int16_t x472 = -1;
static int16_t x478 = INT16_MIN;
uint8_t x482 = UINT8_MAX;
volatile int32_t x487 = INT32_MIN;
int32_t x489 = 95385;
static uint8_t x491 = 3U;
int64_t x492 = -573LL;
int64_t x493 = -4625979LL;
int16_t x499 = -1;
static uint32_t x503 = UINT32_MAX;
int64_t x504 = 16532443922275LL;
static volatile int8_t x506 = INT8_MAX;
static uint8_t x514 = UINT8_MAX;
uint16_t x519 = 1829U;
volatile int64_t t110 = 26671391719LL;
volatile uint32_t x522 = 32432355U;
int16_t x524 = INT16_MIN;
uint32_t t111 = 20185941U;
volatile int8_t x525 = INT8_MIN;
volatile int16_t x541 = -1;
int64_t x542 = -1LL;
int64_t x547 = -50333LL;
uint32_t x549 = 853642U;
uint32_t x551 = UINT32_MAX;
uint8_t x552 = UINT8_MAX;
static int16_t x559 = INT16_MIN;
static uint8_t x561 = UINT8_MAX;
static int8_t x563 = INT8_MIN;
volatile int32_t t119 = -17467641;
int32_t x565 = -1;
volatile uint16_t x569 = 2U;
int8_t x575 = INT8_MIN;
uint32_t x580 = 534357U;
static volatile uint64_t t123 = 5673998941265LLU;
volatile int32_t x598 = INT32_MAX;
uint32_t x606 = 257299256U;
int8_t x607 = -1;
volatile uint32_t x608 = UINT32_MAX;
int64_t x613 = -1834224032192104LL;
uint16_t x614 = 2U;
volatile int16_t x615 = INT16_MIN;
int16_t x616 = -1;
uint32_t x634 = 38728963U;
int8_t x640 = INT8_MAX;
static int8_t x647 = INT8_MAX;
volatile int32_t t137 = 6;
volatile int64_t x671 = INT64_MAX;
int8_t x672 = -5;
uint64_t x677 = 132992738794740206LLU;
volatile uint32_t x679 = UINT32_MAX;
volatile uint64_t t141 = 200553073639LLU;
volatile uint8_t x682 = UINT8_MAX;
static volatile int64_t t142 = -201845444750178LL;
int64_t x688 = 1LL;
uint8_t x705 = 0U;
volatile uint64_t t147 = 8548038644711432LLU;
uint32_t x709 = 123093991U;
int16_t x711 = INT16_MIN;
uint64_t x712 = 2771906378389LLU;
int16_t x717 = -1;
int16_t x718 = -1;
int32_t t150 = 39822;
int16_t x727 = -1;
volatile int32_t t152 = -98033659;
int8_t x730 = INT8_MIN;
int32_t x742 = INT32_MIN;
volatile int64_t x743 = -1LL;
volatile int64_t t155 = 216LL;
uint8_t x746 = UINT8_MAX;
int8_t x749 = -12;
int32_t x759 = INT32_MIN;
volatile int16_t x761 = 3528;
volatile uint16_t x763 = UINT16_MAX;
static volatile uint64_t t161 = 77799810172667LLU;
int64_t x770 = INT64_MIN;
int16_t x771 = -11196;
volatile int64_t x777 = INT64_MIN;
int16_t x778 = -1;
int32_t t165 = -736793841;
static volatile int32_t x794 = INT32_MAX;
uint64_t x796 = 63008759LLU;
int16_t x800 = 213;
uint16_t x807 = 123U;
int16_t x814 = 0;
int64_t x817 = INT64_MIN;
int32_t x819 = INT32_MAX;
uint64_t x820 = 17181866566LLU;
int64_t x821 = -4625LL;
uint16_t x826 = 101U;
static uint16_t x829 = 14U;
uint32_t x831 = 376U;
int32_t x834 = 613794;
volatile uint64_t t174 = 19864LLU;
uint16_t x839 = 776U;
int64_t x840 = 7LL;
static int8_t x843 = 1;
uint32_t t177 = 90U;
volatile uint64_t t178 = 453806758770785LLU;
uint64_t t179 = 198430LLU;
int8_t x875 = INT8_MAX;
static int64_t t180 = -804133LL;
static uint8_t x879 = UINT8_MAX;
uint64_t x883 = 687637388912LLU;
int8_t x890 = -1;
int16_t x894 = -1;
static int8_t x903 = INT8_MAX;
volatile int16_t x910 = -1;
int64_t x911 = INT64_MIN;
static uint16_t x912 = 1U;
uint8_t x918 = 52U;
volatile uint64_t x920 = 6540647708LLU;
int64_t x925 = -126988810LL;
static int32_t x928 = -190642498;
int16_t x936 = INT16_MIN;
int64_t x956 = INT64_MAX;
volatile int32_t t199 = 104920;


void f0(void) {
    	int16_t x1 = 3756;
	int64_t x2 = -27030953001LL;
	uint64_t x3 = 3881LLU;
	static int64_t x4 = INT64_MIN;

    t0 = ((x1^(x2%x3))*x4);

    if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = UINT16_MAX;
	volatile int16_t x6 = -23;
	static volatile int32_t x7 = -197014;
	int32_t t1 = -7995675;

    t1 = ((x5^(x6%x7))*x8);

    if (t1 != -393084) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x9 = UINT16_MAX;
	int8_t x11 = INT8_MIN;
	int8_t x12 = -2;
	int32_t t2 = 319446;

    t2 = ((x9^(x10%x11))*x12);

    if (t2 != -131070) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x17 = INT32_MIN;
	uint64_t x18 = 334788772501LLU;
	uint32_t x19 = UINT32_MAX;
	static int8_t x20 = -1;
	static uint64_t t3 = 9507583030196LLU;

    t3 = ((x17^(x18%x19))*x20);

    if (t3 != 2366160158LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint16_t x26 = UINT16_MAX;
	static uint16_t x28 = UINT16_MAX;
	static volatile int32_t t4 = -128482;

    t4 = ((x25^(x26%x27))*x28);

    if (t4 != -8388480) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x29 = 0U;
	int64_t x30 = 14200065960315LL;
	int32_t x31 = INT32_MIN;
	int32_t x32 = INT32_MAX;
	volatile int64_t t5 = 38827935LL;

    t5 = ((x29^(x30%x31))*x32);

    if (t5 != 1941496455086528133LL) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int16_t x33 = 3990;
	volatile uint32_t t6 = 7U;

    t6 = ((x33^(x34%x35))*x36);

    if (t6 != 11970U) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x37 = -1;
	uint8_t x38 = UINT8_MAX;
	int8_t x39 = -1;
	int32_t x40 = -1;
	static volatile int32_t t7 = -1;

    t7 = ((x37^(x38%x39))*x40);

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x42 = -1;
	int32_t x43 = -23;
	uint16_t x44 = 2U;
	volatile uint32_t t8 = 230739U;

    t8 = ((x41^(x42%x43))*x44);

    if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
    	volatile uint8_t x45 = 62U;
	volatile int64_t x46 = INT64_MIN;
	volatile int16_t x47 = 1;
	static int64_t x48 = -2072419481578882LL;

    t9 = ((x45^(x46%x47))*x48);

    if (t9 != -128490007857890684LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint64_t x50 = 2LLU;
	int8_t x51 = INT8_MIN;
	volatile uint64_t t10 = 1577LLU;

    t10 = ((x49^(x50%x51))*x52);

    if (t10 != 126LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int32_t x53 = INT32_MAX;
	static uint64_t x54 = 3274920783109LLU;
	int8_t x55 = 31;
	uint64_t x56 = 97086736044567850LLU;
	volatile uint64_t t11 = 4059853LLU;

    t11 = ((x53^(x54%x55))*x56);

    if (t11 != 9139274408909587472LLU) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x57 = 4U;
	static int8_t x58 = -57;
	int16_t x59 = 7910;
	volatile uint8_t x60 = 3U;
	static int32_t t12 = -1;

    t12 = ((x57^(x58%x59))*x60);

    if (t12 != -183) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile int16_t x69 = -1;
	static uint16_t x70 = UINT16_MAX;
	int32_t x71 = INT32_MIN;
	static int32_t x72 = 0;
	int32_t t13 = 24331;

    t13 = ((x69^(x70%x71))*x72);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	static int8_t x73 = INT8_MAX;
	uint64_t x74 = 7219309638LLU;
	int32_t x75 = INT32_MAX;
	volatile uint64_t x76 = UINT64_MAX;

    t14 = ((x73^(x74%x75))*x76);

    if (t14 != 18446744072932692938LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int8_t x78 = INT8_MIN;
	int32_t x79 = INT32_MIN;
	int8_t x80 = INT8_MIN;
	int32_t t15 = 3578370;

    t15 = ((x77^(x78%x79))*x80);

    if (t15 != -4177920) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int16_t x81 = INT16_MAX;
	uint16_t x82 = 2U;
	uint32_t x83 = 16963U;
	int8_t x84 = -1;
	volatile uint32_t t16 = 3U;

    t16 = ((x81^(x82%x83))*x84);

    if (t16 != 4294934531U) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x85 = -61;
	static uint64_t x86 = UINT64_MAX;
	int64_t x88 = INT64_MIN;

    t17 = ((x85^(x86%x87))*x88);

    if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	uint32_t x89 = 383568045U;
	int8_t x90 = INT8_MAX;
	int64_t x91 = INT64_MIN;
	int32_t x92 = 377;
	static int64_t t18 = 211905454434057977LL;

    t18 = ((x89^(x90%x91))*x92);

    if (t18 != 144605166914LL) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile uint8_t x93 = 88U;
	uint64_t x94 = 20525LLU;
	static int16_t x95 = INT16_MIN;
	static int64_t x96 = 70188854399656LL;
	static uint64_t t19 = 251123543229537561LLU;

    t19 = ((x93^(x94%x95))*x96);

    if (t19 != 1445679834069714632LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x97 = 1409U;
	int16_t x98 = INT16_MAX;
	int8_t x99 = INT8_MAX;
	static int32_t x100 = -1;
	volatile int32_t t20 = -101;

    t20 = ((x97^(x98%x99))*x100);

    if (t20 != -1408) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x101 = -1;
	int32_t x102 = INT32_MAX;
	int32_t x103 = 78829;
	int8_t x104 = -1;
	int32_t t21 = 375048;

    t21 = ((x101^(x102%x103))*x104);

    if (t21 != 24030) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x106 = INT8_MAX;
	static uint8_t x107 = UINT8_MAX;
	volatile uint32_t x108 = 132U;
	static volatile uint32_t t22 = 1U;

    t22 = ((x105^(x106%x107))*x108);

    if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
    	static uint64_t x113 = 18846915LLU;
	static volatile int32_t x114 = INT32_MIN;
	uint32_t x115 = UINT32_MAX;
	uint16_t x116 = UINT16_MAX;

    t23 = ((x113^(x114%x115))*x116);

    if (t23 != 141970473446205LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	uint64_t x118 = 2677LLU;
	uint64_t x119 = 23227301905LLU;
	volatile int8_t x120 = INT8_MAX;
	static volatile uint64_t t24 = 206721302101763LLU;

    t24 = ((x117^(x118%x119))*x120);

    if (t24 != 545460506486LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint8_t x121 = UINT8_MAX;
	int64_t x122 = -1LL;
	int8_t x123 = INT8_MIN;
	uint32_t x124 = UINT32_MAX;

    t25 = ((x121^(x122%x123))*x124);

    if (t25 != -1099511627520LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x125 = 2846083LLU;
	int32_t x126 = 4;
	int8_t x127 = INT8_MIN;
	static volatile int64_t x128 = -1LL;
	uint64_t t26 = 7445756376847078LLU;

    t26 = ((x125^(x126%x127))*x128);

    if (t26 != 18446744073706705529LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x130 = 6089;
	int32_t x131 = 21;
	uint32_t x132 = 975441U;
	static uint32_t t27 = 71392U;

    t27 = ((x129^(x130%x131))*x132);

    if (t27 != 16582497U) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile uint32_t x137 = UINT32_MAX;
	volatile uint32_t x139 = UINT32_MAX;
	volatile int32_t x140 = INT32_MAX;

    t28 = ((x137^(x138%x139))*x140);

    if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
    	uint16_t x141 = 868U;
	int32_t x144 = INT32_MIN;
	static volatile int64_t t29 = -11090473790807718LL;

    t29 = ((x141^(x142%x143))*x144);

    if (t29 != -1864015806464LL) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x145 = 4;
	volatile uint64_t x146 = UINT64_MAX;
	uint64_t x147 = 3384257LLU;
	volatile int32_t x148 = INT32_MIN;
	volatile uint64_t t30 = 219827308956LLU;

    t30 = ((x145^(x146%x147))*x148);

    if (t30 != 18443528446727421952LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	static uint64_t x149 = 2585028LLU;
	volatile int8_t x150 = INT8_MAX;
	uint32_t x152 = 0U;
	uint64_t t31 = 2896393LLU;

    t31 = ((x149^(x150%x151))*x152);

    if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x154 = INT8_MIN;
	int16_t x155 = INT16_MAX;
	int32_t x156 = INT32_MIN;
	static volatile uint32_t t32 = 779U;

    t32 = ((x153^(x154%x155))*x156);

    if (t32 != 2147483648U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint64_t x157 = 22697LLU;
	uint32_t x158 = 24U;
	uint8_t x159 = 21U;
	volatile uint64_t t33 = 852LLU;

    t33 = ((x157^(x158%x159))*x160);

    if (t33 != 1487513430LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x161 = INT16_MIN;
	volatile int8_t x162 = INT8_MAX;
	uint32_t x164 = UINT32_MAX;
	volatile uint32_t t34 = 84048651U;

    t34 = ((x161^(x162%x163))*x164);

    if (t34 != 32761U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint32_t x165 = 62U;
	int64_t x166 = INT64_MIN;
	uint64_t t35 = 3LLU;

    t35 = ((x165^(x166%x167))*x168);

    if (t35 != 43214LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x170 = INT8_MIN;
	uint8_t x171 = 2U;

    t36 = ((x169^(x170%x171))*x172);

    if (t36 != 884709) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x173 = 1U;
	int64_t x174 = INT64_MIN;
	static int64_t t37 = 1578961520231386994LL;

    t37 = ((x173^(x174%x175))*x176);

    if (t37 != -209983186LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint16_t x177 = UINT16_MAX;
	uint32_t x178 = UINT32_MAX;
	uint64_t t38 = 14945666075427214LLU;

    t38 = ((x177^(x178%x179))*x180);

    if (t38 != 16071927620068549082LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int8_t x181 = -1;
	int8_t x182 = INT8_MIN;
	int64_t x183 = INT64_MIN;
	int16_t x184 = -5;
	volatile int64_t t39 = 658002188154719LL;

    t39 = ((x181^(x182%x183))*x184);

    if (t39 != -635LL) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x185 = INT16_MIN;
	volatile int8_t x187 = -10;
	uint64_t x188 = 118893LLU;
	uint64_t t40 = 49564LLU;

    t40 = ((x185^(x186%x187))*x188);

    if (t40 != 18446744069814260257LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x193 = INT16_MIN;
	int64_t x195 = INT64_MAX;
	uint32_t x196 = UINT32_MAX;

    t41 = ((x193^(x194%x195))*x196);

    if (t41 != 140733193355265LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x197 = INT32_MAX;
	static uint32_t x198 = 1445300441U;
	static int16_t x200 = 1;
	volatile uint32_t t42 = 3867420U;

    t42 = ((x197^(x198%x199))*x200);

    if (t42 != 2147483550U) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x201 = INT8_MAX;
	volatile int8_t x202 = -1;
	static int8_t x203 = INT8_MIN;
	static int32_t x204 = -1;
	int32_t t43 = 973;

    t43 = ((x201^(x202%x203))*x204);

    if (t43 != 128) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x205 = INT32_MIN;
	uint64_t x206 = 1017423496760LLU;
	int8_t x207 = -17;
	uint32_t x208 = 24029095U;
	uint64_t t44 = 116LLU;

    t44 = ((x205^(x206%x207))*x208);

    if (t44 != 12474076112761919112LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x209 = 872367277U;
	int16_t x210 = 1;
	int32_t x211 = -524;
	volatile uint64_t x212 = 6967434271LLU;
	uint64_t t45 = 333533967283LLU;

    t45 = ((x209^(x210%x211))*x212);

    if (t45 != 6078161655701315796LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x213 = -1;
	uint32_t x214 = UINT32_MAX;
	static uint64_t x215 = UINT64_MAX;
	static uint64_t x216 = 59133701LLU;
	uint64_t t46 = 451758612218536LLU;

    t46 = ((x213^(x214%x215))*x216);

    if (t46 != 18192766761823109120LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	uint64_t x222 = UINT64_MAX;
	int16_t x224 = 1734;
	uint64_t t47 = 204LLU;

    t47 = ((x221^(x222%x223))*x224);

    if (t47 != 17109378LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x229 = INT16_MAX;
	int32_t x232 = INT32_MAX;
	volatile int64_t t48 = 168369612138468LL;

    t48 = ((x229^(x230%x231))*x232);

    if (t48 != 70366596661249LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x237 = INT64_MIN;
	uint16_t x238 = UINT16_MAX;
	volatile uint16_t x239 = 31U;
	int8_t x240 = 1;

    t49 = ((x237^(x238%x239))*x240);

    if (t49 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint64_t x241 = 2000839058LLU;
	static uint32_t x242 = 0U;
	int16_t x244 = -1;
	volatile uint64_t t50 = 62666LLU;

    t50 = ((x241^(x242%x243))*x244);

    if (t50 != 18446744071708712558LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x245 = 19;
	int32_t x246 = 72;
	int32_t x247 = -217;
	int32_t t51 = -7414;

    t51 = ((x245^(x246%x247))*x248);

    if (t51 != 5963685) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x249 = 1050368LLU;
	int64_t x251 = INT64_MIN;
	static int64_t x252 = -99LL;
	volatile uint64_t t52 = 15176948180390LLU;

    t52 = ((x249^(x250%x251))*x252);

    if (t52 != 18446743861212656995LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x253 = INT16_MIN;
	int8_t x254 = -2;
	static int8_t x255 = -38;
	volatile int8_t x256 = -1;
	static volatile int32_t t53 = 15042162;

    t53 = ((x253^(x254%x255))*x256);

    if (t53 != -32766) { NG(); } else { ; }
	
}

void f54(void) {
    	uint8_t x257 = UINT8_MAX;
	int8_t x258 = -1;
	int8_t x260 = INT8_MAX;
	volatile int32_t t54 = 25932448;

    t54 = ((x257^(x258%x259))*x260);

    if (t54 != -32512) { NG(); } else { ; }
	
}

void f55(void) {
    	int32_t x265 = -522004;
	int8_t x266 = -12;
	volatile uint32_t x267 = 423U;
	static int8_t x268 = INT8_MIN;

    t55 = ((x265^(x266%x267))*x268);

    if (t55 != 66798336U) { NG(); } else { ; }
	
}

void f56(void) {
    	volatile uint32_t x270 = 4293980U;
	static int8_t x271 = INT8_MAX;

    t56 = ((x269^(x270%x271))*x272);

    if (t56 != 4294966636U) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int8_t x274 = INT8_MAX;
	static int32_t x275 = 6;
	uint64_t t57 = 5376710919235157912LLU;

    t57 = ((x273^(x274%x275))*x276);

    if (t57 != 7290LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x277 = 56U;
	int16_t x279 = INT16_MIN;
	uint16_t x280 = 48U;
	volatile int32_t t58 = -2004;

    t58 = ((x277^(x278%x279))*x280);

    if (t58 != 2688) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x281 = INT16_MIN;
	int8_t x282 = INT8_MIN;
	int16_t x283 = -1;
	uint64_t x284 = 7061231344189862LLU;
	uint64_t t59 = 2376432LLU;

    t59 = ((x281^(x282%x283))*x284);

    if (t59 != 8425244271810772992LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int32_t x285 = INT32_MIN;
	int64_t x286 = INT64_MIN;
	int32_t x288 = 10280;
	int64_t t60 = 5684847181993LL;

    t60 = ((x285^(x286%x287))*x288);

    if (t60 != 22076130585600LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x289 = INT8_MIN;
	int32_t x290 = -1;
	volatile uint16_t x291 = UINT16_MAX;
	uint8_t x292 = UINT8_MAX;
	volatile int32_t t61 = -54135;

    t61 = ((x289^(x290%x291))*x292);

    if (t61 != 32385) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x293 = INT16_MIN;
	static int8_t x294 = INT8_MAX;
	int64_t x295 = -1LL;
	int16_t x296 = INT16_MIN;
	int64_t t62 = 594LL;

    t62 = ((x293^(x294%x295))*x296);

    if (t62 != 1073741824LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x301 = UINT8_MAX;
	int16_t x302 = INT16_MIN;
	int16_t x303 = INT16_MIN;
	uint64_t x304 = 658576513212439318LLU;
	static volatile uint64_t t63 = 232LLU;

    t63 = ((x301^(x302%x303))*x304);

    if (t63 != 1916314205786061546LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int32_t x305 = INT32_MIN;
	int32_t x306 = INT32_MIN;
	uint32_t x307 = UINT32_MAX;
	int8_t x308 = -17;

    t64 = ((x305^(x306%x307))*x308);

    if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
    	static uint64_t x309 = UINT64_MAX;
	uint16_t x310 = 490U;
	volatile int8_t x312 = -45;
	volatile uint64_t t65 = 46579673072805LLU;

    t65 = ((x309^(x310%x311))*x312);

    if (t65 != 22095LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int32_t x313 = INT32_MIN;
	static uint32_t x314 = UINT32_MAX;
	static int16_t x315 = -1;
	volatile int32_t x316 = 30764713;
	volatile uint32_t t66 = 110U;

    t66 = ((x313^(x314%x315))*x316);

    if (t66 != 2147483648U) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x318 = INT64_MAX;
	static int64_t x319 = -1LL;
	uint32_t x320 = 150467U;
	volatile int64_t t67 = -149359540468331LL;

    t67 = ((x317^(x318%x319))*x320);

    if (t67 != 646250843976765LL) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint8_t x325 = UINT8_MAX;
	uint8_t x326 = 3U;
	static volatile int32_t x327 = INT32_MIN;
	static int16_t x328 = 616;
	int32_t t68 = -8;

    t68 = ((x325^(x326%x327))*x328);

    if (t68 != 155232) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile uint32_t x330 = 1U;
	int64_t x331 = INT64_MIN;
	volatile uint64_t t69 = 0LLU;

    t69 = ((x329^(x330%x331))*x332);

    if (t69 != 2113446587393315421LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x333 = INT16_MIN;
	int32_t x335 = 386;
	int16_t x336 = -1;
	int32_t t70 = 4168570;

    t70 = ((x333^(x334%x335))*x336);

    if (t70 != 32684) { NG(); } else { ; }
	
}

void f71(void) {
    	int64_t x337 = -26LL;
	static uint64_t x338 = UINT64_MAX;
	static int16_t x339 = 12752;
	int64_t x340 = INT64_MIN;
	static uint64_t t71 = 1LLU;

    t71 = ((x337^(x338%x339))*x340);

    if (t71 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x341 = 7646U;
	int8_t x343 = -1;
	int16_t x344 = 12542;
	int32_t t72 = 2;

    t72 = ((x341^(x342%x343))*x344);

    if (t72 != 95896132) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x345 = 121U;
	uint32_t x346 = UINT32_MAX;
	volatile uint32_t t73 = 311U;

    t73 = ((x345^(x346%x347))*x348);

    if (t73 != 4294951808U) { NG(); } else { ; }
	
}

void f74(void) {
    	uint8_t x349 = 0U;
	int16_t x350 = -1;
	int8_t x351 = -5;
	static int32_t x352 = 1058083;
	int32_t t74 = -802497;

    t74 = ((x349^(x350%x351))*x352);

    if (t74 != -1058083) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x353 = 38345;
	int32_t x354 = -1;
	int16_t x355 = INT16_MIN;
	int8_t x356 = -1;
	int32_t t75 = -545943;

    t75 = ((x353^(x354%x355))*x356);

    if (t75 != 38346) { NG(); } else { ; }
	
}

void f76(void) {
    	static uint16_t x357 = 26U;
	uint16_t x358 = UINT16_MAX;
	uint16_t x359 = UINT16_MAX;
	static uint8_t x360 = UINT8_MAX;
	int32_t t76 = 279;

    t76 = ((x357^(x358%x359))*x360);

    if (t76 != 6630) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x365 = INT32_MIN;
	volatile int8_t x366 = -1;
	int8_t x367 = INT8_MIN;
	static volatile int64_t x368 = -1LL;

    t77 = ((x365^(x366%x367))*x368);

    if (t77 != -2147483647LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint8_t x369 = 0U;
	int64_t x370 = INT64_MAX;
	volatile int32_t x371 = 2;
	volatile int32_t x372 = -124628;
	volatile int64_t t78 = 4279718967811621897LL;

    t78 = ((x369^(x370%x371))*x372);

    if (t78 != -124628LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int64_t x373 = -1LL;
	static int8_t x375 = INT8_MIN;
	static volatile int32_t x376 = -1;
	int64_t t79 = -1706815737348486LL;

    t79 = ((x373^(x374%x375))*x376);

    if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int32_t x377 = INT32_MIN;
	uint64_t x378 = UINT64_MAX;
	volatile uint64_t t80 = 1676667526513769681LLU;

    t80 = ((x377^(x378%x379))*x380);

    if (t80 != 4611686005542486016LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static uint32_t x381 = UINT32_MAX;
	volatile int8_t x382 = INT8_MIN;
	volatile int32_t x383 = -1;
	uint8_t x384 = UINT8_MAX;
	uint32_t t81 = 941528U;

    t81 = ((x381^(x382%x383))*x384);

    if (t81 != 4294967041U) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x393 = -1;
	uint64_t x394 = 252944073818054753LLU;
	uint64_t x395 = UINT64_MAX;

    t82 = ((x393^(x394%x395))*x396);

    if (t82 != 252944073818054754LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint32_t x397 = 27U;
	static int32_t x398 = INT32_MAX;
	int16_t x399 = -1;
	uint32_t t83 = 397730755U;

    t83 = ((x397^(x398%x399))*x400);

    if (t83 != 2147483648U) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x405 = INT8_MIN;
	int8_t x406 = -1;
	int64_t x407 = INT64_MIN;
	static volatile uint16_t x408 = 9341U;
	static volatile int64_t t84 = -2465273099078617468LL;

    t84 = ((x405^(x406%x407))*x408);

    if (t84 != 1186307LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static uint64_t x410 = UINT64_MAX;
	int16_t x411 = -1;
	volatile int8_t x412 = 31;
	static volatile uint64_t t85 = 3468508051613LLU;

    t85 = ((x409^(x410%x411))*x412);

    if (t85 != 62LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x413 = 62601257442340LLU;
	uint8_t x414 = 20U;
	static int8_t x415 = INT8_MIN;
	int32_t x416 = -1;
	volatile uint64_t t86 = 1026038LLU;

    t86 = ((x413^(x414%x415))*x416);

    if (t86 != 18446681472452109264LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static uint8_t x418 = 7U;
	uint32_t x420 = 1901911U;
	static volatile uint32_t t87 = 663027608U;

    t87 = ((x417^(x418%x419))*x420);

    if (t87 != 2177062216U) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x421 = UINT64_MAX;
	int8_t x422 = INT8_MIN;
	volatile int32_t x423 = INT32_MIN;
	uint16_t x424 = 2U;
	static volatile uint64_t t88 = 583234034066912LLU;

    t88 = ((x421^(x422%x423))*x424);

    if (t88 != 254LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	uint32_t x425 = UINT32_MAX;
	int32_t x426 = -169083643;
	int64_t x427 = -275216LL;
	int64_t t89 = 1810265319997LL;

    t89 = ((x425^(x426%x427))*x428);

    if (t89 != 4294866278LL) { NG(); } else { ; }
	
}

void f90(void) {
    	uint64_t x433 = UINT64_MAX;
	uint16_t x434 = 3U;
	int64_t x435 = INT64_MIN;
	int16_t x436 = INT16_MIN;
	volatile uint64_t t90 = 115304186798730605LLU;

    t90 = ((x433^(x434%x435))*x436);

    if (t90 != 131072LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	static int8_t x437 = INT8_MAX;
	int64_t x438 = -1LL;
	int8_t x440 = INT8_MAX;

    t91 = ((x437^(x438%x439))*x440);

    if (t91 != 173736LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	int64_t x443 = INT64_MIN;
	int8_t x444 = -1;
	int64_t t92 = -570498935054898889LL;

    t92 = ((x441^(x442%x443))*x444);

    if (t92 != -2054324467LL) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x445 = INT32_MIN;
	static volatile int8_t x447 = -1;
	int32_t x448 = INT32_MAX;
	static volatile uint32_t t93 = 83726U;

    t93 = ((x445^(x446%x447))*x448);

    if (t93 != 2147483636U) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x451 = UINT16_MAX;
	uint32_t t94 = 3366U;

    t94 = ((x449^(x450%x451))*x452);

    if (t94 != 791578930U) { NG(); } else { ; }
	
}

void f95(void) {
    	static int8_t x453 = INT8_MIN;
	static uint64_t x456 = 2LLU;
	volatile uint64_t t95 = 473573757042162499LLU;

    t95 = ((x453^(x454%x455))*x456);

    if (t95 != 65280LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint64_t x457 = UINT64_MAX;
	int64_t x458 = INT64_MAX;
	uint16_t x459 = 114U;
	int8_t x460 = 13;

    t96 = ((x457^(x458%x459))*x460);

    if (t96 != 18446744073709550888LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static volatile uint64_t x461 = 5LLU;
	int8_t x462 = INT8_MIN;
	static int32_t x463 = INT32_MAX;
	volatile int16_t x464 = -3;

    t97 = ((x461^(x462%x463))*x464);

    if (t97 != 369LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static int16_t x469 = INT16_MIN;
	int64_t x470 = -1LL;
	int16_t x471 = -1;
	volatile int64_t t98 = -140LL;

    t98 = ((x469^(x470%x471))*x472);

    if (t98 != 32768LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x473 = INT16_MIN;
	volatile int8_t x474 = -1;
	static volatile uint8_t x475 = 1U;
	static int32_t x476 = 7539;
	static volatile int32_t t99 = -88;

    t99 = ((x473^(x474%x475))*x476);

    if (t99 != -247037952) { NG(); } else { ; }
	
}

void f100(void) {
    	uint32_t x477 = 2522062U;
	int16_t x479 = -1;
	int64_t x480 = -1LL;
	int64_t t100 = -31512550151LL;

    t100 = ((x477^(x478%x479))*x480);

    if (t100 != -2522062LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x481 = -1;
	uint64_t x483 = UINT64_MAX;
	static int8_t x484 = -1;
	uint64_t t101 = 3005LLU;

    t101 = ((x481^(x482%x483))*x484);

    if (t101 != 256LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint32_t x485 = UINT32_MAX;
	int16_t x486 = -1;
	int32_t x488 = INT32_MIN;
	uint32_t t102 = 207588U;

    t102 = ((x485^(x486%x487))*x488);

    if (t102 != 0U) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x490 = 13;
	volatile int64_t t103 = 90562LL;

    t103 = ((x489^(x490%x491))*x492);

    if (t103 != -54655032LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x494 = -85;
	uint64_t x495 = 65951204868115772LLU;
	int16_t x496 = -1;
	uint64_t t104 = 4658462431762LLU;

    t104 = ((x493^(x494%x495))*x496);

    if (t104 != 46357915509015934LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	static int64_t x497 = 23LL;
	static volatile uint8_t x498 = 16U;
	int32_t x500 = INT32_MAX;
	int64_t t105 = -505466579114LL;

    t105 = ((x497^(x498%x499))*x500);

    if (t105 != 49392123881LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int64_t x501 = -1LL;
	int16_t x502 = 1;
	int64_t t106 = 129455882618LL;

    t106 = ((x501^(x502%x503))*x504);

    if (t106 != -33064887844550LL) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x505 = UINT16_MAX;
	int8_t x507 = INT8_MIN;
	volatile int64_t x508 = 1LL;
	volatile int64_t t107 = 3639567117LL;

    t107 = ((x505^(x506%x507))*x508);

    if (t107 != 65408LL) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int32_t x509 = -617128662;
	int64_t x510 = INT64_MAX;
	int64_t x511 = INT64_MIN;
	static int8_t x512 = 1;
	static int64_t t108 = -5349257137LL;

    t108 = ((x509^(x510%x511))*x512);

    if (t108 != -9223372036237647147LL) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x513 = 403;
	int32_t x515 = INT32_MAX;
	int16_t x516 = -1;
	static int32_t t109 = 10576;

    t109 = ((x513^(x514%x515))*x516);

    if (t109 != -364) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x517 = INT32_MIN;
	int64_t x518 = -1LL;
	static uint8_t x520 = 20U;

    t110 = ((x517^(x518%x519))*x520);

    if (t110 != 42949672940LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x521 = INT32_MIN;
	int16_t x523 = INT16_MIN;

    t111 = ((x521^(x522%x523))*x524);

    if (t111 != 2408480768U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x526 = UINT64_MAX;
	uint64_t x527 = 88176645498805LLU;
	int16_t x528 = 6;
	uint64_t t112 = 29031022556648LLU;

    t112 = ((x525^(x526%x527))*x528);

    if (t112 != 18446663181298263262LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x533 = INT8_MAX;
	uint8_t x534 = 17U;
	int16_t x535 = -1;
	int8_t x536 = INT8_MAX;
	int32_t t113 = -4673;

    t113 = ((x533^(x534%x535))*x536);

    if (t113 != 16129) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x543 = -8144567LL;
	uint32_t x544 = 818099U;
	volatile int64_t t114 = -1LL;

    t114 = ((x541^(x542%x543))*x544);

    if (t114 != 0LL) { NG(); } else { ; }
	
}

void f115(void) {
    	static volatile uint64_t x545 = 1959896460353330LLU;
	volatile uint16_t x546 = 24U;
	static volatile int32_t x548 = -747496;
	volatile uint64_t t115 = 136535787928098LLU;

    t115 = ((x545^(x546%x547))*x548);

    if (t115 != 10724761368497347568LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int32_t x550 = -1;
	uint32_t t116 = 664765U;

    t116 = ((x549^(x550%x551))*x552);

    if (t116 != 217678710U) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x553 = INT8_MIN;
	volatile uint32_t x554 = UINT32_MAX;
	static int64_t x555 = 26931695485777LL;
	uint8_t x556 = UINT8_MAX;
	volatile int64_t t117 = -19912841LL;

    t117 = ((x553^(x554%x555))*x556);

    if (t117 != -1095216628095LL) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x557 = 53802;
	int32_t x558 = -19385;
	uint64_t x560 = 449544302714067LLU;
	static volatile uint64_t t118 = 10428241356579LLU;

    t118 = ((x557^(x558%x559))*x560);

    if (t118 != 772909812506007511LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x562 = INT8_MIN;
	int8_t x564 = INT8_MIN;

    t119 = ((x561^(x562%x563))*x564);

    if (t119 != -32640) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x566 = 53150LL;
	volatile int32_t x567 = INT32_MIN;
	uint16_t x568 = 15U;
	int64_t t120 = 26487669364521LL;

    t120 = ((x565^(x566%x567))*x568);

    if (t120 != -797265LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int64_t x570 = INT64_MIN;
	volatile int8_t x571 = INT8_MIN;
	uint32_t x572 = 4U;
	int64_t t121 = -622706405114144LL;

    t121 = ((x569^(x570%x571))*x572);

    if (t121 != 8LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint8_t x573 = 30U;
	int8_t x574 = -2;
	int8_t x576 = -46;
	int32_t t122 = -195820082;

    t122 = ((x573^(x574%x575))*x576);

    if (t122 != 1472) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x577 = 687;
	uint64_t x578 = UINT64_MAX;
	volatile uint64_t x579 = UINT64_MAX;

    t123 = ((x577^(x578%x579))*x580);

    if (t123 != 367103259LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x581 = 55855249;
	volatile int8_t x582 = INT8_MIN;
	uint32_t x583 = UINT32_MAX;
	uint16_t x584 = 16048U;
	volatile uint32_t t124 = 2U;

    t124 = ((x581^(x582%x583))*x584);

    if (t124 != 1281620400U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x585 = 12470027070313525LLU;
	int8_t x586 = INT8_MAX;
	volatile int16_t x587 = -14981;
	uint32_t x588 = UINT32_MAX;
	static uint64_t t125 = 510589861164221LLU;

    t125 = ((x585^(x586%x587))*x588);

    if (t125 != 7904176738465377206LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x589 = -1;
	uint8_t x590 = UINT8_MAX;
	int8_t x591 = -1;
	int8_t x592 = -1;
	static int32_t t126 = 0;

    t126 = ((x589^(x590%x591))*x592);

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int32_t x597 = -1;
	int8_t x599 = 1;
	static int16_t x600 = INT16_MAX;
	volatile int32_t t127 = -3072;

    t127 = ((x597^(x598%x599))*x600);

    if (t127 != -32767) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x605 = 0U;
	uint32_t t128 = 8308096U;

    t128 = ((x605^(x606%x607))*x608);

    if (t128 != 4037668040U) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x609 = INT8_MIN;
	static volatile int64_t x610 = -1LL;
	int8_t x611 = INT8_MIN;
	int8_t x612 = INT8_MIN;
	int64_t t129 = 112765LL;

    t129 = ((x609^(x610%x611))*x612);

    if (t129 != -16256LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t t130 = 16523188077LL;

    t130 = ((x613^(x614%x615))*x616);

    if (t130 != 1834224032192102LL) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x617 = 0;
	volatile int8_t x618 = -1;
	int8_t x619 = INT8_MIN;
	int64_t x620 = 19570LL;
	volatile int64_t t131 = -11440LL;

    t131 = ((x617^(x618%x619))*x620);

    if (t131 != -19570LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x625 = INT32_MIN;
	static uint32_t x626 = 4U;
	int8_t x627 = INT8_MAX;
	static volatile uint16_t x628 = 0U;
	uint32_t t132 = 18486U;

    t132 = ((x625^(x626%x627))*x628);

    if (t132 != 0U) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x629 = 337741LLU;
	uint8_t x630 = 0U;
	volatile uint16_t x631 = 13462U;
	uint8_t x632 = 0U;
	static volatile uint64_t t133 = 112934574485442204LLU;

    t133 = ((x629^(x630%x631))*x632);

    if (t133 != 0LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	static uint16_t x633 = UINT16_MAX;
	static uint64_t x635 = UINT64_MAX;
	volatile int8_t x636 = INT8_MAX;
	volatile uint64_t t134 = 739904LLU;

    t134 = ((x633^(x634%x635))*x636);

    if (t134 != 4910969604LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x637 = -28;
	static volatile uint32_t x638 = 99423238U;
	static int64_t x639 = INT64_MIN;
	static int64_t t135 = -76373098182LL;

    t135 = ((x637^(x638%x639))*x640);

    if (t135 != -12626754274LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x645 = -1;
	uint8_t x646 = 1U;
	volatile uint32_t x648 = UINT32_MAX;
	volatile uint32_t t136 = 875304364U;

    t136 = ((x645^(x646%x647))*x648);

    if (t136 != 2U) { NG(); } else { ; }
	
}

void f137(void) {
    	uint16_t x653 = 207U;
	static uint16_t x654 = 1260U;
	static int8_t x655 = INT8_MIN;
	volatile int32_t x656 = -777;

    t137 = ((x653^(x654%x655))*x656);

    if (t137 != -126651) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x661 = 0U;
	static int8_t x662 = INT8_MIN;
	int32_t x663 = 961896868;
	uint64_t x664 = UINT64_MAX;
	volatile uint64_t t138 = 77155592271822235LLU;

    t138 = ((x661^(x662%x663))*x664);

    if (t138 != 128LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static uint64_t x669 = 1842864744577LLU;
	int16_t x670 = 1811;
	static volatile uint64_t t139 = 1607LLU;

    t139 = ((x669^(x670%x671))*x672);

    if (t139 != 18446734859385819686LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x673 = INT16_MIN;
	uint64_t x674 = UINT64_MAX;
	static int64_t x675 = -1LL;
	int64_t x676 = -446503358LL;
	volatile uint64_t t140 = 133466489557133848LLU;

    t140 = ((x673^(x674%x675))*x676);

    if (t140 != 14631022034944LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x678 = UINT8_MAX;
	volatile uint64_t x680 = 1LLU;

    t141 = ((x677^(x678%x679))*x680);

    if (t141 != 132992738794739985LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x681 = -665;
	uint16_t x683 = 59U;
	static int64_t x684 = -871LL;

    t142 = ((x681^(x682%x683))*x684);

    if (t142 != 567892LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x685 = -1;
	int32_t x686 = -438171;
	int8_t x687 = 14;
	volatile int64_t t143 = 243388630LL;

    t143 = ((x685^(x686%x687))*x688);

    if (t143 != 12LL) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x689 = 86998527LLU;
	uint8_t x690 = UINT8_MAX;
	static int64_t x691 = INT64_MIN;
	static int64_t x692 = 298251LL;
	volatile uint64_t t144 = 5038869489LLU;

    t144 = ((x689^(x690%x691))*x692);

    if (t144 != 25947321622272LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint32_t x697 = UINT32_MAX;
	volatile uint64_t x698 = 335LLU;
	volatile int16_t x699 = INT16_MAX;
	int16_t x700 = INT16_MIN;
	volatile uint64_t t145 = 107939054LLU;

    t145 = ((x697^(x698%x699))*x700);

    if (t145 != 18446603336232206336LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile uint64_t x701 = UINT64_MAX;
	uint64_t x702 = UINT64_MAX;
	volatile int64_t x703 = 115855LL;
	uint64_t x704 = 1LLU;
	volatile uint64_t t146 = 1141748LLU;

    t146 = ((x701^(x702%x703))*x704);

    if (t146 != 18446744073709462620LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x706 = UINT64_MAX;
	uint8_t x707 = UINT8_MAX;
	volatile int8_t x708 = INT8_MIN;

    t147 = ((x705^(x706%x707))*x708);

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	uint16_t x710 = 3169U;
	static volatile uint64_t t148 = 971124195845178LLU;

    t148 = ((x709^(x710%x711))*x712);

    if (t148 != 9171871888961938686LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint8_t x713 = UINT8_MAX;
	uint64_t x714 = 4048361LLU;
	int16_t x715 = INT16_MAX;
	static int16_t x716 = INT16_MAX;
	uint64_t t149 = 43589016LLU;

    t149 = ((x713^(x714%x715))*x716);

    if (t149 != 592263525LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x719 = INT16_MAX;
	static uint16_t x720 = UINT16_MAX;

    t150 = ((x717^(x718%x719))*x720);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int16_t x721 = -315;
	int64_t x722 = -1LL;
	int64_t x723 = -1LL;
	volatile int16_t x724 = -1;
	int64_t t151 = 117037139848698499LL;

    t151 = ((x721^(x722%x723))*x724);

    if (t151 != 315LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x725 = -57;
	static int32_t x726 = INT32_MIN;
	static int8_t x728 = INT8_MIN;

    t152 = ((x725^(x726%x727))*x728);

    if (t152 != 7296) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x729 = 0U;
	int16_t x731 = -1;
	int16_t x732 = INT16_MAX;
	int32_t t153 = -1639;

    t153 = ((x729^(x730%x731))*x732);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x733 = -1LL;
	uint8_t x734 = 22U;
	volatile int8_t x735 = INT8_MIN;
	uint8_t x736 = 11U;
	volatile int64_t t154 = 2LL;

    t154 = ((x733^(x734%x735))*x736);

    if (t154 != -253LL) { NG(); } else { ; }
	
}

void f155(void) {
    	uint32_t x741 = 1966160124U;
	uint32_t x744 = UINT32_MAX;

    t155 = ((x741^(x742%x743))*x744);

    if (t155 != 8444593429313144580LL) { NG(); } else { ; }
	
}

void f156(void) {
    	int16_t x745 = INT16_MIN;
	int32_t x747 = -44759;
	volatile uint16_t x748 = UINT16_MAX;
	int32_t t156 = -1158820;

    t156 = ((x745^(x746%x747))*x748);

    if (t156 != -2130739455) { NG(); } else { ; }
	
}

void f157(void) {
    	uint64_t x750 = 4017LLU;
	static uint64_t x751 = UINT64_MAX;
	int64_t x752 = INT64_MIN;
	uint64_t t157 = 560LLU;

    t157 = ((x749^(x750%x751))*x752);

    if (t157 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint8_t x753 = 9U;
	int32_t x754 = 0;
	static int16_t x755 = INT16_MAX;
	static volatile int16_t x756 = INT16_MIN;
	volatile int32_t t158 = 1;

    t158 = ((x753^(x754%x755))*x756);

    if (t158 != -294912) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint16_t x757 = 35U;
	uint64_t x758 = 211870440580343915LLU;
	static int32_t x760 = 872386;
	volatile uint64_t t159 = 433490608LLU;

    t159 = ((x757^(x758%x759))*x760);

    if (t159 != 14877301627878456976LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint64_t x762 = 8297565416707048LLU;
	int16_t x764 = INT16_MAX;
	static volatile uint64_t t160 = 18093425LLU;

    t160 = ((x761^(x762%x763))*x764);

    if (t160 != 1611022322LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x765 = 196618520278025941LLU;
	static volatile int8_t x766 = 1;
	int16_t x767 = INT16_MAX;
	static volatile int8_t x768 = INT8_MIN;

    t161 = ((x765^(x766%x767))*x768);

    if (t161 != 11726317551831782912LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x769 = 8U;
	int32_t x772 = -1;
	static int64_t t162 = 3544085557740LL;

    t162 = ((x769^(x770%x771))*x772);

    if (t162 != 7560LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x779 = -67;
	static int16_t x780 = -1;
	int64_t t163 = -189315831480932LL;

    t163 = ((x777^(x778%x779))*x780);

    if (t163 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x781 = INT16_MAX;
	int16_t x782 = INT16_MIN;
	uint32_t x783 = UINT32_MAX;
	int8_t x784 = 1;
	volatile uint32_t t164 = UINT32_MAX;

    t164 = ((x781^(x782%x783))*x784);

    if (t164 != UINT32_MAX) { NG(); } else { ; }
	
}

void f165(void) {
    	static int32_t x789 = -297434;
	static volatile uint8_t x790 = 1U;
	int16_t x791 = INT16_MIN;
	int8_t x792 = INT8_MAX;

    t165 = ((x789^(x790%x791))*x792);

    if (t165 != -37773991) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x793 = -1;
	int8_t x795 = INT8_MAX;
	volatile uint64_t t166 = 25LLU;

    t166 = ((x793^(x794%x795))*x796);

    if (t166 != 18446744073205481544LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x797 = 387;
	volatile uint32_t x798 = 16U;
	int64_t x799 = INT64_MAX;
	int64_t t167 = -41641923599747LL;

    t167 = ((x797^(x798%x799))*x800);

    if (t167 != 85839LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int64_t x805 = -1LL;
	int32_t x806 = INT32_MIN;
	static uint8_t x808 = 0U;
	static volatile int64_t t168 = -38LL;

    t168 = ((x805^(x806%x807))*x808);

    if (t168 != 0LL) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x813 = 77263U;
	int8_t x815 = INT8_MIN;
	int8_t x816 = INT8_MAX;
	volatile uint32_t t169 = 9627U;

    t169 = ((x813^(x814%x815))*x816);

    if (t169 != 9812401U) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x818 = INT16_MIN;
	static uint64_t t170 = 34100LLU;

    t170 = ((x817^(x818%x819))*x820);

    if (t170 != 18446181058305916928LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x822 = 112248LLU;
	volatile uint64_t x823 = UINT64_MAX;
	int16_t x824 = INT16_MIN;
	static volatile uint64_t t171 = 1689LLU;

    t171 = ((x821^(x822%x823))*x824);

    if (t171 != 3526656000LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x825 = 114330647868882LLU;
	int64_t x827 = 113749557LL;
	int8_t x828 = INT8_MIN;
	static volatile uint64_t t172 = 104087213108LLU;

    t172 = ((x825^(x826%x827))*x828);

    if (t172 != 18432109750782338176LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile uint32_t x830 = 6067U;
	volatile int32_t x832 = -1;
	volatile uint32_t t173 = 23U;

    t173 = ((x829^(x830%x831))*x832);

    if (t173 != 4294967235U) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x833 = INT8_MIN;
	uint64_t x835 = 290375390823079LLU;
	volatile uint32_t x836 = UINT32_MAX;

    t174 = ((x833^(x834%x835))*x836);

    if (t174 != 18444107590855646686LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x837 = -4;
	uint8_t x838 = UINT8_MAX;
	volatile int64_t t175 = -115788753LL;

    t175 = ((x837^(x838%x839))*x840);

    if (t175 != -1771LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint16_t x841 = 0U;
	int16_t x842 = INT16_MIN;
	uint8_t x844 = 19U;
	volatile int32_t t176 = 3180791;

    t176 = ((x841^(x842%x843))*x844);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x849 = -1;
	int16_t x850 = -1;
	int32_t x851 = -82;
	uint32_t x852 = UINT32_MAX;

    t177 = ((x849^(x850%x851))*x852);

    if (t177 != 0U) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x857 = -1LL;
	int16_t x858 = -112;
	uint64_t x859 = 4974934054LLU;
	uint16_t x860 = UINT16_MAX;

    t178 = ((x857^(x858%x859))*x860);

    if (t178 != 18446580254062530781LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int64_t x861 = INT64_MAX;
	uint8_t x862 = 1U;
	uint64_t x863 = 548LLU;
	int8_t x864 = INT8_MIN;

    t179 = ((x861^(x862%x863))*x864);

    if (t179 != 256LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x873 = 42U;
	int64_t x874 = 86483LL;
	int8_t x876 = INT8_MIN;

    t180 = ((x873^(x874%x875))*x876);

    if (t180 != -10368LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x877 = INT8_MAX;
	uint64_t x878 = UINT64_MAX;
	int32_t x880 = INT32_MAX;
	uint64_t t181 = 961540060LLU;

    t181 = ((x877^(x878%x879))*x880);

    if (t181 != 272730423169LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x881 = UINT64_MAX;
	int16_t x882 = -404;
	int8_t x884 = 0;
	volatile uint64_t t182 = 21LLU;

    t182 = ((x881^(x882%x883))*x884);

    if (t182 != 0LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x889 = 39U;
	uint64_t x891 = 1634LLU;
	volatile uint64_t x892 = UINT64_MAX;
	uint64_t t183 = 333828748808754192LLU;

    t183 = ((x889^(x890%x891))*x892);

    if (t183 != 18446744073709549960LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x893 = UINT8_MAX;
	int8_t x895 = INT8_MIN;
	volatile int16_t x896 = -1;
	volatile int32_t t184 = -1;

    t184 = ((x893^(x894%x895))*x896);

    if (t184 != 256) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x901 = UINT32_MAX;
	int8_t x902 = INT8_MIN;
	int8_t x904 = INT8_MIN;
	uint32_t t185 = 117U;

    t185 = ((x901^(x902%x903))*x904);

    if (t185 != 0U) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x905 = INT32_MIN;
	uint32_t x906 = 45U;
	static int32_t x907 = INT32_MIN;
	int32_t x908 = INT32_MAX;
	static volatile uint32_t t186 = 3U;

    t186 = ((x905^(x906%x907))*x908);

    if (t186 != 4294967251U) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x909 = UINT32_MAX;
	volatile int64_t t187 = -34348LL;

    t187 = ((x909^(x910%x911))*x912);

    if (t187 != -4294967296LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static uint32_t x913 = UINT32_MAX;
	uint16_t x914 = UINT16_MAX;
	int32_t x915 = INT32_MIN;
	uint32_t x916 = 476871U;
	uint32_t t188 = 1331U;

    t188 = ((x913^(x914%x915))*x916);

    if (t188 != 3107520512U) { NG(); } else { ; }
	
}

void f189(void) {
    	int64_t x917 = INT64_MIN;
	static uint64_t x919 = UINT64_MAX;
	volatile uint64_t t189 = 3196LLU;

    t189 = ((x917^(x918%x919))*x920);

    if (t189 != 340113680816LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	static uint32_t x921 = UINT32_MAX;
	volatile int64_t x922 = INT64_MIN;
	int64_t x923 = 2068914133409LL;
	volatile uint64_t x924 = 35077898698017LLU;
	uint64_t t190 = 528LLU;

    t190 = ((x921^(x922%x923))*x924);

    if (t190 != 7415419006272937926LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x926 = INT32_MIN;
	static int32_t x927 = -1;
	volatile int64_t t191 = -817701874LL;

    t191 = ((x925^(x926%x927))*x928);

    if (t191 != 24209463956447380LL) { NG(); } else { ; }
	
}

void f192(void) {
    	uint16_t x933 = UINT16_MAX;
	volatile int16_t x934 = -30;
	int8_t x935 = -1;
	int32_t t192 = 195057752;

    t192 = ((x933^(x934%x935))*x936);

    if (t192 != -2147450880) { NG(); } else { ; }
	
}

void f193(void) {
    	static int8_t x937 = INT8_MAX;
	volatile uint8_t x938 = 1U;
	int64_t x939 = INT64_MAX;
	int32_t x940 = INT32_MIN;
	int64_t t193 = -394514734LL;

    t193 = ((x937^(x938%x939))*x940);

    if (t193 != -270582939648LL) { NG(); } else { ; }
	
}

void f194(void) {
    	static int32_t x941 = 37;
	volatile int8_t x942 = INT8_MIN;
	static int16_t x943 = -1;
	uint16_t x944 = 8891U;
	volatile int32_t t194 = 3;

    t194 = ((x941^(x942%x943))*x944);

    if (t194 != 328967) { NG(); } else { ; }
	
}

void f195(void) {
    	uint16_t x945 = 9U;
	uint8_t x946 = UINT8_MAX;
	static int16_t x947 = INT16_MAX;
	int16_t x948 = INT16_MIN;
	int32_t t195 = -36099;

    t195 = ((x945^(x946%x947))*x948);

    if (t195 != -8060928) { NG(); } else { ; }
	
}

void f196(void) {
    	uint16_t x949 = UINT16_MAX;
	uint32_t x950 = UINT32_MAX;
	int8_t x951 = -5;
	uint8_t x952 = UINT8_MAX;
	volatile uint32_t t196 = 239795454U;

    t196 = ((x949^(x950%x951))*x952);

    if (t196 != 16710405U) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x953 = UINT64_MAX;
	int32_t x954 = -1;
	uint16_t x955 = UINT16_MAX;
	volatile uint64_t t197 = 3264016101956489632LLU;

    t197 = ((x953^(x954%x955))*x956);

    if (t197 != 0LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	static int16_t x957 = INT16_MIN;
	volatile int64_t x958 = INT64_MIN;
	static uint32_t x959 = 161273715U;
	volatile int16_t x960 = INT16_MAX;
	int64_t t198 = 0LL;

    t198 = ((x957^(x958%x959))*x960);

    if (t198 != 681611892493LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x961 = 11U;
	int8_t x962 = INT8_MAX;
	int32_t x963 = -1;
	uint8_t x964 = UINT8_MAX;

    t199 = ((x961^(x962%x963))*x964);

    if (t199 != 2805) { NG(); } else { ; }
	
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

