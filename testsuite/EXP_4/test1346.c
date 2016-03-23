
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

int8_t x8 = -1;
volatile uint16_t x20 = 26U;
volatile uint64_t x28 = UINT64_MAX;
int8_t x33 = 60;
uint32_t x37 = UINT32_MAX;
int8_t x40 = 0;
volatile int8_t x42 = INT8_MAX;
static int16_t x47 = INT16_MIN;
volatile int16_t x51 = INT16_MAX;
int32_t x53 = -1;
int32_t x56 = INT32_MIN;
int32_t x57 = 9;
int64_t x58 = -44442149803LL;
int8_t x63 = INT8_MAX;
int32_t x65 = -1;
volatile int32_t x67 = INT32_MIN;
int64_t t15 = 2888453LL;
int64_t x85 = INT64_MIN;
int8_t x90 = INT8_MAX;
volatile int8_t x102 = -1;
volatile int32_t x103 = INT32_MIN;
int32_t t21 = 5;
uint64_t x115 = 159470296LLU;
volatile int32_t t23 = 139;
static int64_t x123 = -13449LL;
int32_t t24 = -391;
volatile int16_t x127 = INT16_MAX;
static uint16_t x129 = 687U;
uint64_t x132 = 59LLU;
volatile int32_t t29 = -1;
static int16_t x167 = 1;
int64_t t35 = -1283131340490LL;
uint64_t x180 = 83698LLU;
static int32_t t38 = 1109898;
uint8_t x185 = 0U;
int64_t x187 = 41238018676LL;
static int16_t x203 = 41;
int16_t x218 = INT16_MIN;
static uint64_t x233 = 985839719LLU;
uint32_t x239 = 1U;
uint8_t x243 = UINT8_MAX;
volatile int32_t t47 = 1;
volatile int64_t x246 = -1LL;
int16_t x260 = -1;
volatile int32_t t52 = -358;
uint16_t x268 = 137U;
int32_t x269 = -4456319;
int64_t x273 = -1LL;
int16_t x275 = -1;
int32_t x276 = INT32_MIN;
int8_t x282 = 1;
int16_t x287 = INT16_MIN;
static uint16_t x289 = 4U;
uint16_t x292 = 3661U;
static int16_t x298 = 123;
int64_t t64 = 26747LL;
volatile int64_t x315 = INT64_MIN;
volatile int32_t t65 = -479139;
uint16_t x317 = 191U;
uint8_t x322 = UINT8_MAX;
int16_t x327 = INT16_MIN;
int64_t t68 = 763491LL;
uint64_t x331 = 89500026977218LLU;
int8_t x334 = -38;
int64_t x337 = 34678LL;
volatile int32_t x350 = INT32_MAX;
int32_t x359 = INT32_MIN;
int32_t x361 = 117597;
volatile int16_t x363 = 12;
static volatile uint8_t x375 = UINT8_MAX;
uint64_t x396 = 1LLU;
int8_t x401 = -1;
int32_t t83 = -79;
int64_t t84 = 32256174885LL;
int16_t x415 = -1;
int8_t x422 = -1;
int64_t x423 = 0LL;
int32_t x427 = -293177;
int32_t x431 = 451;
int32_t t90 = -183536220;
uint64_t x435 = UINT64_MAX;
uint64_t x440 = 48LLU;
volatile uint64_t t92 = 205524LLU;
int64_t x457 = -22835401583223LL;
int8_t x458 = INT8_MIN;
volatile int64_t t96 = 13815LL;
int32_t x464 = 1010;
volatile uint32_t t97 = 1993U;
volatile uint16_t x465 = 176U;
static int32_t t98 = -187;
uint8_t x472 = 6U;
volatile uint16_t x475 = UINT16_MAX;
volatile uint64_t x477 = 2202889303424002LLU;
uint64_t x478 = 50890491054LLU;
int32_t t103 = INT32_MAX;
int32_t x491 = INT32_MAX;
int64_t x494 = -29544504150LL;
static int64_t x496 = INT64_MIN;
int32_t x497 = INT32_MAX;
int16_t x509 = -3;
int64_t x513 = -119LL;
int32_t t110 = 9124474;
int32_t x521 = INT32_MIN;
int8_t x522 = INT8_MIN;
uint8_t x526 = 15U;
uint16_t x531 = UINT16_MAX;
int64_t x534 = -1LL;
int8_t x536 = INT8_MIN;
uint32_t x538 = 10138U;
int16_t x543 = -1;
uint64_t t116 = 1LLU;
int32_t x549 = -1;
int16_t x554 = 23;
volatile uint64_t t119 = 45405489135LLU;
int8_t x567 = INT8_MIN;
volatile int32_t t123 = 1658586;
static int64_t t125 = -7LL;
volatile int32_t x588 = INT32_MAX;
volatile int8_t x605 = INT8_MAX;
static int32_t t130 = -1;
uint64_t x615 = 73920945245LLU;
volatile int32_t t133 = 24590242;
int32_t x626 = 2;
uint64_t x631 = 1088748096LLU;
int64_t x634 = INT64_MIN;
static int8_t x637 = 0;
int64_t x639 = 1LL;
volatile int8_t x645 = -1;
static uint64_t x647 = 19343LLU;
int8_t x648 = 0;
uint32_t x655 = 923229507U;
volatile int32_t t140 = -331;
int16_t x657 = INT16_MAX;
uint64_t x670 = UINT64_MAX;
int32_t x671 = -1;
static int32_t x682 = -1;
int32_t t148 = 61;
int64_t t149 = -7955175432045LL;
static uint64_t t153 = 2345983230LLU;
static int64_t x723 = INT64_MAX;
int32_t x725 = -1;
static volatile int8_t x727 = INT8_MIN;
volatile int32_t t155 = -2;
uint16_t x732 = UINT16_MAX;
volatile int16_t x734 = INT16_MIN;
int16_t x738 = 3;
int16_t x740 = INT16_MIN;
uint64_t x742 = 82641LLU;
int8_t x752 = INT8_MAX;
int32_t t161 = -2898393;
uint16_t x753 = 1U;
static volatile int32_t x756 = INT32_MIN;
volatile int32_t x759 = 73697102;
int32_t t163 = 3596;
static int16_t x763 = INT16_MIN;
volatile uint32_t t164 = 81711U;
static int32_t x771 = INT32_MIN;
uint32_t x776 = 303U;
volatile uint16_t x779 = 2751U;
volatile int8_t x789 = -1;
volatile int16_t x799 = INT16_MIN;
int32_t t173 = 473179;
static int64_t x804 = INT64_MAX;
int32_t x820 = INT32_MIN;
uint8_t x824 = 1U;
int16_t x834 = -5;
int64_t x835 = -1LL;
int32_t x836 = INT32_MIN;
int32_t x838 = -1;
int64_t t182 = 91975802787LL;
int32_t x858 = INT32_MIN;
static int8_t x862 = INT8_MAX;
uint64_t x864 = UINT64_MAX;
uint64_t t185 = 7LLU;
uint8_t x868 = 119U;
volatile int8_t x872 = INT8_MIN;
int16_t x876 = -1;
int32_t t188 = -389;
volatile int16_t x878 = -1;
int16_t x881 = -1;
uint16_t x882 = 114U;
volatile int32_t x891 = INT32_MIN;
int32_t x893 = -1;
int32_t x894 = INT32_MAX;
static uint32_t x899 = UINT32_MAX;
int8_t x904 = 0;
static int64_t x906 = 1956000LL;
int16_t x908 = INT16_MAX;
uint8_t x911 = UINT8_MAX;
static int16_t x912 = INT16_MIN;
uint16_t x916 = 5523U;
volatile int32_t t198 = -41;
volatile int32_t x920 = INT32_MIN;


void f0(void) {
    	uint32_t x1 = UINT32_MAX;
	uint32_t x2 = 761282573U;
	int16_t x3 = -11;
	uint8_t x4 = UINT8_MAX;
	uint32_t t0 = 974603680U;

    t0 = (x1-(x2|(x3!=x4)));

    if (t0 != 3533684722U) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -75926148;
	volatile uint64_t x6 = 99LLU;
	volatile int64_t x7 = INT64_MIN;
	volatile uint64_t t1 = 187037354846LLU;

    t1 = (x5-(x6|(x7!=x8)));

    if (t1 != 18446744073633625369LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint64_t x9 = 6615463037603838159LLU;
	int8_t x10 = 0;
	static volatile int16_t x11 = -1;
	static int32_t x12 = INT32_MIN;
	uint64_t t2 = 1643348195045513LLU;

    t2 = (x9-(x10|(x11!=x12)));

    if (t2 != 6615463037603838158LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x17 = -10528;
	static uint8_t x18 = 91U;
	int32_t x19 = 13539;
	volatile int32_t t3 = 858;

    t3 = (x17-(x18|(x19!=x20)));

    if (t3 != -10619) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x21 = 22;
	uint16_t x22 = 30684U;
	static int64_t x23 = -1675776736191LL;
	static uint8_t x24 = UINT8_MAX;
	static volatile int32_t t4 = 25128;

    t4 = (x21-(x22|(x23!=x24)));

    if (t4 != -30663) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x25 = -1;
	static volatile uint16_t x26 = 0U;
	volatile uint16_t x27 = UINT16_MAX;
	volatile int32_t t5 = 603584086;

    t5 = (x25-(x26|(x27!=x28)));

    if (t5 != -2) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint64_t x34 = 11637822761LLU;
	static volatile int16_t x35 = INT16_MAX;
	int32_t x36 = 9;
	static volatile uint64_t t6 = 30773418887507437LLU;

    t6 = (x33-(x34|(x35!=x36)));

    if (t6 != 18446744062071728915LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x38 = INT64_MAX;
	int64_t x39 = INT64_MAX;
	volatile int64_t t7 = -377706LL;

    t7 = (x37-(x38|(x39!=x40)));

    if (t7 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f8(void) {
    	static uint32_t x41 = 159719U;
	int32_t x43 = -114;
	static volatile int16_t x44 = INT16_MIN;
	uint32_t t8 = 16268U;

    t8 = (x41-(x42|(x43!=x44)));

    if (t8 != 159592U) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile uint64_t x45 = 59LLU;
	int8_t x46 = -1;
	static volatile int16_t x48 = INT16_MIN;
	volatile uint64_t t9 = 4814669885751008LLU;

    t9 = (x45-(x46|(x47!=x48)));

    if (t9 != 60LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint64_t x49 = 3143LLU;
	int16_t x50 = -1;
	int8_t x52 = INT8_MIN;
	static uint64_t t10 = 68957209180110657LLU;

    t10 = (x49-(x50|(x51!=x52)));

    if (t10 != 3144LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x54 = -1;
	int16_t x55 = 3;
	static int32_t t11 = -2387;

    t11 = (x53-(x54|(x55!=x56)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x59 = 3400LLU;
	static volatile uint64_t x60 = 27LLU;
	volatile int64_t t12 = 4705510LL;

    t12 = (x57-(x58|(x59!=x60)));

    if (t12 != 44442149812LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int16_t x61 = INT16_MIN;
	int16_t x62 = 2249;
	uint16_t x64 = 7593U;
	volatile int32_t t13 = 5552709;

    t13 = (x61-(x62|(x63!=x64)));

    if (t13 != -35017) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int8_t x66 = INT8_MIN;
	uint32_t x68 = 4U;
	volatile int32_t t14 = -1698;

    t14 = (x65-(x66|(x67!=x68)));

    if (t14 != 126) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x69 = -2LL;
	static int64_t x70 = -3LL;
	volatile int8_t x71 = INT8_MIN;
	int64_t x72 = INT64_MAX;

    t15 = (x69-(x70|(x71!=x72)));

    if (t15 != 1LL) { NG(); } else { ; }
	
}

void f16(void) {
    	volatile uint16_t x73 = 1098U;
	uint32_t x74 = 828904U;
	int8_t x75 = -1;
	uint16_t x76 = 6U;
	uint32_t t16 = 1914239U;

    t16 = (x73-(x74|(x75!=x76)));

    if (t16 != 4294139489U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x81 = 13U;
	int16_t x82 = INT16_MIN;
	int32_t x83 = INT32_MAX;
	int16_t x84 = -485;
	volatile int32_t t17 = -83255466;

    t17 = (x81-(x82|(x83!=x84)));

    if (t17 != 32780) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint64_t x86 = UINT64_MAX;
	int32_t x87 = -1;
	int16_t x88 = INT16_MIN;
	volatile uint64_t t18 = 16122637251568LLU;

    t18 = (x85-(x86|(x87!=x88)));

    if (t18 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	static volatile int8_t x89 = -6;
	static int8_t x91 = INT8_MIN;
	int8_t x92 = 2;
	int32_t t19 = -64598;

    t19 = (x89-(x90|(x91!=x92)));

    if (t19 != -133) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x97 = INT8_MAX;
	int32_t x98 = INT32_MAX;
	static int16_t x99 = -1;
	volatile uint64_t x100 = 1300848956090LLU;
	int32_t t20 = 1;

    t20 = (x97-(x98|(x99!=x100)));

    if (t20 != -2147483520) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x101 = -96646;
	int64_t x104 = INT64_MIN;

    t21 = (x101-(x102|(x103!=x104)));

    if (t21 != -96645) { NG(); } else { ; }
	
}

void f22(void) {
    	uint64_t x105 = 1221793629473751LLU;
	int16_t x106 = INT16_MIN;
	uint16_t x107 = UINT16_MAX;
	int32_t x108 = -1;
	volatile uint64_t t22 = 196385069387122LLU;

    t22 = (x105-(x106|(x107!=x108)));

    if (t22 != 1221793629506518LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x113 = 733U;
	int8_t x114 = -7;
	uint64_t x116 = UINT64_MAX;

    t23 = (x113-(x114|(x115!=x116)));

    if (t23 != 740) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x121 = 0U;
	volatile int16_t x122 = INT16_MIN;
	uint64_t x124 = 153948271953092LLU;

    t24 = (x121-(x122|(x123!=x124)));

    if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x125 = -1;
	int64_t x126 = INT64_MAX;
	int8_t x128 = -11;
	volatile int64_t t25 = INT64_MIN;

    t25 = (x125-(x126|(x127!=x128)));

    if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x130 = 1;
	static uint32_t x131 = 861178136U;
	int32_t t26 = 1;

    t26 = (x129-(x130|(x131!=x132)));

    if (t26 != 686) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile uint32_t x137 = 1533373093U;
	static int32_t x138 = 14103512;
	volatile uint32_t x139 = 12957562U;
	uint64_t x140 = UINT64_MAX;
	uint32_t t27 = 2U;

    t27 = (x137-(x138|(x139!=x140)));

    if (t27 != 1519269580U) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x141 = -1;
	static int32_t x142 = -1;
	int32_t x143 = INT32_MAX;
	static int32_t x144 = -1;
	static int32_t t28 = 1;

    t28 = (x141-(x142|(x143!=x144)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	static int32_t x145 = INT32_MAX;
	int8_t x146 = INT8_MAX;
	volatile int64_t x147 = -210LL;
	int64_t x148 = INT64_MIN;

    t29 = (x145-(x146|(x147!=x148)));

    if (t29 != 2147483520) { NG(); } else { ; }
	
}

void f30(void) {
    	int16_t x149 = INT16_MIN;
	int64_t x150 = INT64_MIN;
	static int64_t x151 = -1LL;
	int8_t x152 = -1;
	int64_t t30 = -19700558380273LL;

    t30 = (x149-(x150|(x151!=x152)));

    if (t30 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f31(void) {
    	uint64_t x153 = UINT64_MAX;
	volatile int64_t x154 = INT64_MAX;
	int16_t x155 = INT16_MAX;
	int16_t x156 = INT16_MAX;
	uint64_t t31 = 1801LLU;

    t31 = (x153-(x154|(x155!=x156)));

    if (t31 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint16_t x157 = 2U;
	int64_t x158 = -1LL;
	volatile int64_t x159 = INT64_MAX;
	int64_t x160 = -448154LL;
	volatile int64_t t32 = 39294775653LL;

    t32 = (x157-(x158|(x159!=x160)));

    if (t32 != 3LL) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int16_t x161 = -2;
	int16_t x162 = INT16_MAX;
	volatile int8_t x163 = INT8_MIN;
	volatile int8_t x164 = INT8_MIN;
	int32_t t33 = -1233964;

    t33 = (x161-(x162|(x163!=x164)));

    if (t33 != -32769) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x165 = -572;
	int32_t x166 = INT32_MIN;
	static int8_t x168 = -18;
	int32_t t34 = -851940;

    t34 = (x165-(x166|(x167!=x168)));

    if (t34 != 2147483075) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x169 = INT16_MIN;
	static int64_t x170 = INT64_MIN;
	int16_t x171 = -1;
	static volatile int8_t x172 = INT8_MIN;

    t35 = (x169-(x170|(x171!=x172)));

    if (t35 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x173 = 140070LLU;
	uint64_t x174 = UINT64_MAX;
	int32_t x175 = INT32_MIN;
	int64_t x176 = INT64_MAX;
	static uint64_t t36 = 3919487LLU;

    t36 = (x173-(x174|(x175!=x176)));

    if (t36 != 140071LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int32_t x177 = INT32_MIN;
	int64_t x178 = INT64_MIN;
	int16_t x179 = 1;
	volatile int64_t t37 = -7853997565149472LL;

    t37 = (x177-(x178|(x179!=x180)));

    if (t37 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f38(void) {
    	static int32_t x181 = 2;
	uint8_t x182 = 61U;
	uint8_t x183 = 23U;
	static int16_t x184 = INT16_MIN;

    t38 = (x181-(x182|(x183!=x184)));

    if (t38 != -59) { NG(); } else { ; }
	
}

void f39(void) {
    	static volatile int16_t x186 = INT16_MAX;
	int64_t x188 = -7639803544LL;
	volatile int32_t t39 = 10411;

    t39 = (x185-(x186|(x187!=x188)));

    if (t39 != -32767) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int64_t x197 = 1589LL;
	uint32_t x198 = 1686U;
	int8_t x199 = -3;
	int32_t x200 = 2;
	static volatile int64_t t40 = -58681955931138LL;

    t40 = (x197-(x198|(x199!=x200)));

    if (t40 != -98LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x201 = INT16_MAX;
	static int16_t x202 = -851;
	uint32_t x204 = UINT32_MAX;
	volatile int32_t t41 = 176874;

    t41 = (x201-(x202|(x203!=x204)));

    if (t41 != 33618) { NG(); } else { ; }
	
}

void f42(void) {
    	static int64_t x213 = -1LL;
	uint8_t x214 = 15U;
	uint64_t x215 = 66777254485LLU;
	int32_t x216 = -1;
	static volatile int64_t t42 = -1721221334569LL;

    t42 = (x213-(x214|(x215!=x216)));

    if (t42 != -16LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x217 = 1U;
	int32_t x219 = INT32_MIN;
	static int8_t x220 = -1;
	int32_t t43 = -921;

    t43 = (x217-(x218|(x219!=x220)));

    if (t43 != 32768) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x225 = -1;
	int64_t x226 = INT64_MIN;
	int16_t x227 = INT16_MAX;
	volatile int8_t x228 = -63;
	static volatile int64_t t44 = -78870666029636LL;

    t44 = (x225-(x226|(x227!=x228)));

    if (t44 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x234 = 61U;
	static uint64_t x235 = UINT64_MAX;
	int32_t x236 = 1;
	volatile uint64_t t45 = 1812635120LLU;

    t45 = (x233-(x234|(x235!=x236)));

    if (t45 != 985839658LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x237 = -1;
	int32_t x238 = 1;
	uint64_t x240 = UINT64_MAX;
	int32_t t46 = 7;

    t46 = (x237-(x238|(x239!=x240)));

    if (t46 != -2) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x241 = -1;
	int8_t x242 = -1;
	uint64_t x244 = 378LLU;

    t47 = (x241-(x242|(x243!=x244)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	uint64_t x245 = 2LLU;
	volatile int32_t x247 = INT32_MIN;
	volatile int32_t x248 = -29837;
	volatile uint64_t t48 = 1855680549LLU;

    t48 = (x245-(x246|(x247!=x248)));

    if (t48 != 3LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	int16_t x249 = -1;
	int8_t x250 = INT8_MAX;
	uint64_t x251 = 4135549114644LLU;
	int8_t x252 = INT8_MIN;
	volatile int32_t t49 = 179614;

    t49 = (x249-(x250|(x251!=x252)));

    if (t49 != -128) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x253 = -1;
	volatile int64_t x254 = -123885264LL;
	uint16_t x255 = UINT16_MAX;
	uint16_t x256 = 2U;
	volatile int64_t t50 = 1077792747043241LL;

    t50 = (x253-(x254|(x255!=x256)));

    if (t50 != 123885262LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x257 = 19;
	int16_t x258 = INT16_MIN;
	volatile uint64_t x259 = 2895425277034LLU;
	static volatile int32_t t51 = -128067;

    t51 = (x257-(x258|(x259!=x260)));

    if (t51 != 32786) { NG(); } else { ; }
	
}

void f52(void) {
    	static int32_t x261 = -1;
	static volatile int32_t x262 = -7108;
	int64_t x263 = 6551323LL;
	int16_t x264 = 4;

    t52 = (x261-(x262|(x263!=x264)));

    if (t52 != 7106) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x265 = INT32_MIN;
	int64_t x266 = -1LL;
	uint32_t x267 = 105U;
	volatile int64_t t53 = 56318050519LL;

    t53 = (x265-(x266|(x267!=x268)));

    if (t53 != -2147483647LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x270 = -4;
	volatile int64_t x271 = 2LL;
	volatile uint16_t x272 = 190U;
	volatile int32_t t54 = 1;

    t54 = (x269-(x270|(x271!=x272)));

    if (t54 != -4456316) { NG(); } else { ; }
	
}

void f55(void) {
    	uint32_t x274 = 14572320U;
	int64_t t55 = -299183808295199LL;

    t55 = (x273-(x274|(x275!=x276)));

    if (t55 != -14572322LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x277 = -1505785251812LL;
	static uint64_t x278 = UINT64_MAX;
	int8_t x279 = -1;
	int64_t x280 = 6LL;
	static volatile uint64_t t56 = 53447022105682349LLU;

    t56 = (x277-(x278|(x279!=x280)));

    if (t56 != 18446742567924299805LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile uint32_t x281 = 1U;
	int16_t x283 = -1;
	static uint16_t x284 = UINT16_MAX;
	uint32_t t57 = 1U;

    t57 = (x281-(x282|(x283!=x284)));

    if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x285 = INT8_MIN;
	static int64_t x286 = -2379596LL;
	int32_t x288 = -48;
	volatile int64_t t58 = 43658158040099659LL;

    t58 = (x285-(x286|(x287!=x288)));

    if (t58 != 2379467LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile int32_t x290 = INT32_MAX;
	volatile int32_t x291 = -13;
	int32_t t59 = 3;

    t59 = (x289-(x290|(x291!=x292)));

    if (t59 != -2147483643) { NG(); } else { ; }
	
}

void f60(void) {
    	static volatile uint16_t x293 = 15U;
	volatile int8_t x294 = 1;
	uint64_t x295 = UINT64_MAX;
	volatile int64_t x296 = INT64_MAX;
	volatile int32_t t60 = 1605;

    t60 = (x293-(x294|(x295!=x296)));

    if (t60 != 14) { NG(); } else { ; }
	
}

void f61(void) {
    	static uint16_t x297 = 6605U;
	volatile int8_t x299 = INT8_MIN;
	static int16_t x300 = -55;
	int32_t t61 = -12025;

    t61 = (x297-(x298|(x299!=x300)));

    if (t61 != 6482) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x301 = INT16_MAX;
	static int32_t x302 = -14280;
	uint64_t x303 = UINT64_MAX;
	static volatile uint32_t x304 = UINT32_MAX;
	volatile int32_t t62 = -38182;

    t62 = (x301-(x302|(x303!=x304)));

    if (t62 != 47046) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x305 = -1;
	uint32_t x306 = 38163823U;
	int64_t x307 = 446123559933LL;
	volatile int32_t x308 = INT32_MIN;
	volatile uint32_t t63 = 2280258U;

    t63 = (x305-(x306|(x307!=x308)));

    if (t63 != 4256803472U) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x309 = 30526834U;
	int64_t x310 = 15583576840LL;
	int16_t x311 = 56;
	static uint32_t x312 = 890420U;

    t64 = (x309-(x310|(x311!=x312)));

    if (t64 != -15553050007LL) { NG(); } else { ; }
	
}

void f65(void) {
    	int16_t x313 = INT16_MAX;
	int32_t x314 = 23510;
	int32_t x316 = -108;

    t65 = (x313-(x314|(x315!=x316)));

    if (t65 != 9256) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint32_t x318 = 95832U;
	static int64_t x319 = INT64_MIN;
	int64_t x320 = INT64_MIN;
	uint32_t t66 = 61U;

    t66 = (x317-(x318|(x319!=x320)));

    if (t66 != 4294871655U) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x321 = INT16_MAX;
	uint32_t x323 = 12143580U;
	uint64_t x324 = 85205177734171313LLU;
	volatile int32_t t67 = 490495;

    t67 = (x321-(x322|(x323!=x324)));

    if (t67 != 32512) { NG(); } else { ; }
	
}

void f68(void) {
    	int32_t x325 = -1;
	static volatile int64_t x326 = INT64_MIN;
	int64_t x328 = -1099866936267057LL;

    t68 = (x325-(x326|(x327!=x328)));

    if (t68 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x329 = INT32_MIN;
	uint32_t x330 = 108611U;
	int8_t x332 = INT8_MIN;
	volatile uint32_t t69 = 26U;

    t69 = (x329-(x330|(x331!=x332)));

    if (t69 != 2147375037U) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int16_t x333 = INT16_MIN;
	int8_t x335 = INT8_MIN;
	static int16_t x336 = -34;
	volatile int32_t t70 = -176939861;

    t70 = (x333-(x334|(x335!=x336)));

    if (t70 != -32731) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile uint64_t x338 = 76871796437345048LLU;
	int64_t x339 = INT64_MAX;
	static uint32_t x340 = 19845U;
	uint64_t t71 = 7455113372LLU;

    t71 = (x337-(x338|(x339!=x340)));

    if (t71 != 18369872277272241245LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x345 = -905;
	int64_t x346 = 50350LL;
	int64_t x347 = 3920713631LL;
	static int32_t x348 = -3313;
	volatile int64_t t72 = -2332660935932LL;

    t72 = (x345-(x346|(x347!=x348)));

    if (t72 != -51256LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int8_t x349 = INT8_MAX;
	uint32_t x351 = 242163037U;
	uint16_t x352 = 2367U;
	volatile int32_t t73 = 1556235;

    t73 = (x349-(x350|(x351!=x352)));

    if (t73 != -2147483520) { NG(); } else { ; }
	
}

void f74(void) {
    	uint16_t x357 = UINT16_MAX;
	static int16_t x358 = INT16_MIN;
	volatile int8_t x360 = -1;
	volatile int32_t t74 = 15;

    t74 = (x357-(x358|(x359!=x360)));

    if (t74 != 98302) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x362 = 19U;
	int64_t x364 = INT64_MAX;
	static uint32_t t75 = 0U;

    t75 = (x361-(x362|(x363!=x364)));

    if (t75 != 117578U) { NG(); } else { ; }
	
}

void f76(void) {
    	int8_t x365 = INT8_MAX;
	uint32_t x366 = 117593U;
	int16_t x367 = -1;
	uint32_t x368 = 120U;
	volatile uint32_t t76 = 3994U;

    t76 = (x365-(x366|(x367!=x368)));

    if (t76 != 4294849830U) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x369 = -1;
	volatile uint64_t x370 = 321105267580LLU;
	static int32_t x371 = -6557268;
	volatile uint64_t x372 = UINT64_MAX;
	volatile uint64_t t77 = 9494088699599257LLU;

    t77 = (x369-(x370|(x371!=x372)));

    if (t77 != 18446743752604284034LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x373 = UINT8_MAX;
	int16_t x374 = -1;
	volatile uint16_t x376 = 6996U;
	int32_t t78 = -3985145;

    t78 = (x373-(x374|(x375!=x376)));

    if (t78 != 256) { NG(); } else { ; }
	
}

void f79(void) {
    	int8_t x377 = INT8_MIN;
	static uint8_t x378 = 1U;
	int8_t x379 = INT8_MIN;
	int32_t x380 = -1;
	int32_t t79 = -1;

    t79 = (x377-(x378|(x379!=x380)));

    if (t79 != -129) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint16_t x381 = 101U;
	uint8_t x382 = 0U;
	static uint16_t x383 = UINT16_MAX;
	volatile int32_t x384 = INT32_MIN;
	int32_t t80 = 54;

    t80 = (x381-(x382|(x383!=x384)));

    if (t80 != 100) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int16_t x393 = INT16_MIN;
	uint64_t x394 = 7176820771LLU;
	volatile uint64_t x395 = UINT64_MAX;
	volatile uint64_t t81 = 1364925LLU;

    t81 = (x393-(x394|(x395!=x396)));

    if (t81 != 18446744066532698077LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x397 = INT16_MAX;
	int64_t x398 = INT64_MAX;
	volatile uint32_t x399 = 838U;
	int32_t x400 = INT32_MIN;
	int64_t t82 = 97504500047LL;

    t82 = (x397-(x398|(x399!=x400)));

    if (t82 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x402 = -1;
	static uint16_t x403 = 1U;
	uint32_t x404 = 12404U;

    t83 = (x401-(x402|(x403!=x404)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int64_t x405 = -1LL;
	int16_t x406 = -1;
	volatile int32_t x407 = -1;
	static uint16_t x408 = 11U;

    t84 = (x405-(x406|(x407!=x408)));

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x409 = 3052013U;
	uint32_t x410 = 143167730U;
	uint32_t x411 = UINT32_MAX;
	uint32_t x412 = 1U;
	static volatile uint32_t t85 = 14039862U;

    t85 = (x409-(x410|(x411!=x412)));

    if (t85 != 4154851578U) { NG(); } else { ; }
	
}

void f86(void) {
    	static int64_t x413 = 69LL;
	uint16_t x414 = 1619U;
	int32_t x416 = INT32_MIN;
	volatile int64_t t86 = -8LL;

    t86 = (x413-(x414|(x415!=x416)));

    if (t86 != -1550LL) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint32_t x417 = 829U;
	int16_t x418 = INT16_MIN;
	static int8_t x419 = INT8_MIN;
	int64_t x420 = -27937155467950LL;
	volatile uint32_t t87 = 918U;

    t87 = (x417-(x418|(x419!=x420)));

    if (t87 != 33596U) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int64_t x421 = INT64_MIN;
	uint32_t x424 = UINT32_MAX;
	int64_t t88 = 1055210LL;

    t88 = (x421-(x422|(x423!=x424)));

    if (t88 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f89(void) {
    	static int32_t x425 = INT32_MAX;
	volatile int16_t x426 = 29;
	static int8_t x428 = INT8_MIN;
	volatile int32_t t89 = 117;

    t89 = (x425-(x426|(x427!=x428)));

    if (t89 != 2147483618) { NG(); } else { ; }
	
}

void f90(void) {
    	static int16_t x429 = INT16_MIN;
	int8_t x430 = -1;
	int32_t x432 = INT32_MAX;

    t90 = (x429-(x430|(x431!=x432)));

    if (t90 != -32767) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x433 = -32099895LL;
	int16_t x434 = -1;
	int64_t x436 = INT64_MIN;
	int64_t t91 = 25580538057732742LL;

    t91 = (x433-(x434|(x435!=x436)));

    if (t91 != -32099894LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x437 = 28U;
	static uint64_t x438 = 758998066LLU;
	int32_t x439 = INT32_MIN;

    t92 = (x437-(x438|(x439!=x440)));

    if (t92 != 18446744072950553577LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	volatile uint16_t x441 = UINT16_MAX;
	volatile uint8_t x442 = 15U;
	uint8_t x443 = 60U;
	static volatile int16_t x444 = INT16_MAX;
	volatile int32_t t93 = -382591;

    t93 = (x441-(x442|(x443!=x444)));

    if (t93 != 65520) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x445 = -1;
	int16_t x446 = INT16_MIN;
	int8_t x447 = 1;
	volatile int64_t x448 = INT64_MIN;
	volatile int32_t t94 = -23107698;

    t94 = (x445-(x446|(x447!=x448)));

    if (t94 != 32766) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x453 = INT16_MIN;
	int32_t x454 = -6602724;
	static volatile int32_t x455 = -1;
	static int64_t x456 = -1LL;
	volatile int32_t t95 = 685943;

    t95 = (x453-(x454|(x455!=x456)));

    if (t95 != 6569956) { NG(); } else { ; }
	
}

void f96(void) {
    	uint16_t x459 = UINT16_MAX;
	volatile int16_t x460 = INT16_MIN;

    t96 = (x457-(x458|(x459!=x460)));

    if (t96 != -22835401583096LL) { NG(); } else { ; }
	
}

void f97(void) {
    	uint32_t x461 = UINT32_MAX;
	volatile int16_t x462 = INT16_MIN;
	static uint32_t x463 = UINT32_MAX;

    t97 = (x461-(x462|(x463!=x464)));

    if (t97 != 32766U) { NG(); } else { ; }
	
}

void f98(void) {
    	int8_t x466 = -1;
	volatile int64_t x467 = INT64_MIN;
	uint32_t x468 = 58349U;

    t98 = (x465-(x466|(x467!=x468)));

    if (t98 != 177) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x469 = INT16_MIN;
	volatile int16_t x470 = 194;
	int32_t x471 = -1;
	int32_t t99 = -13598;

    t99 = (x469-(x470|(x471!=x472)));

    if (t99 != -32963) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x473 = INT64_MIN;
	static int32_t x474 = -1;
	int16_t x476 = INT16_MIN;
	volatile int64_t t100 = -27065LL;

    t100 = (x473-(x474|(x475!=x476)));

    if (t100 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int8_t x479 = INT8_MAX;
	static int16_t x480 = -90;
	volatile uint64_t t101 = 414269940857LLU;

    t101 = (x477-(x478|(x479!=x480)));

    if (t101 != 2202838412932947LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x481 = 0;
	int64_t x482 = 437LL;
	int8_t x483 = INT8_MIN;
	static int8_t x484 = -1;
	volatile int64_t t102 = 178LL;

    t102 = (x481-(x482|(x483!=x484)));

    if (t102 != -437LL) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x485 = 0U;
	int32_t x486 = INT32_MIN;
	static uint8_t x487 = 20U;
	uint64_t x488 = 3388680LLU;

    t103 = (x485-(x486|(x487!=x488)));

    if (t103 != INT32_MAX) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x489 = UINT64_MAX;
	int64_t x490 = INT64_MAX;
	static int64_t x492 = INT64_MAX;
	uint64_t t104 = 27470LLU;

    t104 = (x489-(x490|(x491!=x492)));

    if (t104 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	volatile int32_t x493 = INT32_MIN;
	int32_t x495 = 860;
	int64_t t105 = -253LL;

    t105 = (x493-(x494|(x495!=x496)));

    if (t105 != 27397020501LL) { NG(); } else { ; }
	
}

void f106(void) {
    	static uint16_t x498 = 10U;
	volatile uint32_t x499 = 884458975U;
	int8_t x500 = INT8_MIN;
	int32_t t106 = -1;

    t106 = (x497-(x498|(x499!=x500)));

    if (t106 != 2147483636) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x505 = -1067;
	uint32_t x506 = 349584U;
	static volatile int64_t x507 = INT64_MAX;
	int64_t x508 = 60745991955743232LL;
	uint32_t t107 = 2636197U;

    t107 = (x505-(x506|(x507!=x508)));

    if (t107 != 4294616644U) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x510 = 0;
	uint16_t x511 = 6305U;
	int64_t x512 = INT64_MAX;
	int32_t t108 = -12;

    t108 = (x509-(x510|(x511!=x512)));

    if (t108 != -4) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x514 = -1;
	int16_t x515 = INT16_MIN;
	int64_t x516 = -1LL;
	int64_t t109 = 1LL;

    t109 = (x513-(x514|(x515!=x516)));

    if (t109 != -118LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x517 = INT32_MIN;
	volatile int32_t x518 = INT32_MIN;
	int64_t x519 = 15LL;
	int64_t x520 = -1LL;

    t110 = (x517-(x518|(x519!=x520)));

    if (t110 != -1) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x523 = -157641LL;
	static uint16_t x524 = 6324U;
	int32_t t111 = 235;

    t111 = (x521-(x522|(x523!=x524)));

    if (t111 != -2147483521) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x525 = 67416985505LLU;
	int64_t x527 = -261LL;
	static uint8_t x528 = 28U;
	uint64_t t112 = 82420LLU;

    t112 = (x525-(x526|(x527!=x528)));

    if (t112 != 67416985490LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x529 = INT16_MIN;
	int32_t x530 = INT32_MIN;
	volatile int16_t x532 = INT16_MIN;
	volatile int32_t t113 = 249;

    t113 = (x529-(x530|(x531!=x532)));

    if (t113 != 2147450879) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile uint8_t x533 = 1U;
	int32_t x535 = INT32_MIN;
	static int64_t t114 = 38936565155074LL;

    t114 = (x533-(x534|(x535!=x536)));

    if (t114 != 2LL) { NG(); } else { ; }
	
}

void f115(void) {
    	uint8_t x537 = 61U;
	int16_t x539 = 7;
	int32_t x540 = INT32_MAX;
	volatile uint32_t t115 = 2U;

    t115 = (x537-(x538|(x539!=x540)));

    if (t115 != 4294957218U) { NG(); } else { ; }
	
}

void f116(void) {
    	static int16_t x541 = INT16_MIN;
	uint64_t x542 = 25971081551816574LLU;
	int16_t x544 = 498;

    t116 = (x541-(x542|(x543!=x544)));

    if (t116 != 18420772992157702273LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x545 = INT32_MIN;
	static int32_t x546 = -502589478;
	int32_t x547 = INT32_MAX;
	int64_t x548 = INT64_MAX;
	static volatile int32_t t117 = 145720;

    t117 = (x545-(x546|(x547!=x548)));

    if (t117 != -1644894171) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x550 = INT32_MAX;
	uint16_t x551 = 4029U;
	int16_t x552 = -1;
	volatile int32_t t118 = INT32_MIN;

    t118 = (x549-(x550|(x551!=x552)));

    if (t118 != INT32_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	uint64_t x553 = 12431296150996LLU;
	int16_t x555 = INT16_MIN;
	int64_t x556 = -1LL;

    t119 = (x553-(x554|(x555!=x556)));

    if (t119 != 12431296150973LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x557 = 1U;
	static volatile int8_t x558 = -1;
	int64_t x559 = INT64_MIN;
	int32_t x560 = -1;
	int32_t t120 = 5600641;

    t120 = (x557-(x558|(x559!=x560)));

    if (t120 != 2) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint32_t x561 = 45U;
	volatile uint8_t x562 = 64U;
	static uint16_t x563 = 3893U;
	volatile int64_t x564 = INT64_MIN;
	static volatile uint32_t t121 = 6115103U;

    t121 = (x561-(x562|(x563!=x564)));

    if (t121 != 4294967276U) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x565 = -1;
	int64_t x566 = INT64_MAX;
	int64_t x568 = -4LL;
	int64_t t122 = INT64_MIN;

    t122 = (x565-(x566|(x567!=x568)));

    if (t122 != INT64_MIN) { NG(); } else { ; }
	
}

void f123(void) {
    	uint16_t x569 = 1511U;
	static volatile int8_t x570 = 1;
	int32_t x571 = INT32_MAX;
	uint32_t x572 = 675521752U;

    t123 = (x569-(x570|(x571!=x572)));

    if (t123 != 1510) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int64_t x573 = -1LL;
	int16_t x574 = -1;
	uint16_t x575 = 13511U;
	uint8_t x576 = 1U;
	volatile int64_t t124 = -3090170606578LL;

    t124 = (x573-(x574|(x575!=x576)));

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile int16_t x577 = -1;
	static volatile int64_t x578 = INT64_MIN;
	uint16_t x579 = 41U;
	int16_t x580 = -1;

    t125 = (x577-(x578|(x579!=x580)));

    if (t125 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x585 = 203356246U;
	uint64_t x586 = 2355783LLU;
	static volatile int16_t x587 = 14;
	static volatile uint64_t t126 = 56678698107LLU;

    t126 = (x585-(x586|(x587!=x588)));

    if (t126 != 201000463LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x589 = INT16_MIN;
	uint64_t x590 = UINT64_MAX;
	int32_t x591 = 28;
	int64_t x592 = INT64_MIN;
	volatile uint64_t t127 = 15319552LLU;

    t127 = (x589-(x590|(x591!=x592)));

    if (t127 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	static int16_t x593 = -1;
	static volatile int64_t x594 = 1569063LL;
	int8_t x595 = INT8_MIN;
	static int8_t x596 = 6;
	int64_t t128 = -424129695976216LL;

    t128 = (x593-(x594|(x595!=x596)));

    if (t128 != -1569064LL) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x597 = 0;
	volatile int16_t x598 = INT16_MIN;
	static uint16_t x599 = 12U;
	static int8_t x600 = INT8_MIN;
	int32_t t129 = -1697833;

    t129 = (x597-(x598|(x599!=x600)));

    if (t129 != 32767) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x606 = -19;
	int16_t x607 = -1;
	static int8_t x608 = INT8_MAX;

    t130 = (x605-(x606|(x607!=x608)));

    if (t130 != 146) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x613 = UINT32_MAX;
	static int64_t x614 = 38LL;
	volatile int32_t x616 = -360464887;
	int64_t t131 = 2288382LL;

    t131 = (x613-(x614|(x615!=x616)));

    if (t131 != 4294967256LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint8_t x617 = 7U;
	volatile int32_t x618 = -1;
	int32_t x619 = INT32_MIN;
	volatile int64_t x620 = INT64_MAX;
	int32_t t132 = 1523;

    t132 = (x617-(x618|(x619!=x620)));

    if (t132 != 8) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x621 = -55;
	volatile int8_t x622 = -1;
	int16_t x623 = -407;
	int64_t x624 = INT64_MIN;

    t133 = (x621-(x622|(x623!=x624)));

    if (t133 != -54) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x625 = INT8_MIN;
	uint32_t x627 = 11U;
	int64_t x628 = INT64_MAX;
	static int32_t t134 = 2;

    t134 = (x625-(x626|(x627!=x628)));

    if (t134 != -131) { NG(); } else { ; }
	
}

void f135(void) {
    	volatile int32_t x629 = -1833443;
	int64_t x630 = -122536892973942924LL;
	uint8_t x632 = UINT8_MAX;
	static volatile int64_t t135 = -8990LL;

    t135 = (x629-(x630|(x631!=x632)));

    if (t135 != 122536892972109480LL) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x633 = INT32_MIN;
	int16_t x635 = 0;
	uint64_t x636 = 519662005LLU;
	int64_t t136 = 3475270393LL;

    t136 = (x633-(x634|(x635!=x636)));

    if (t136 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f137(void) {
    	int8_t x638 = INT8_MIN;
	uint16_t x640 = 22596U;
	volatile int32_t t137 = -12290972;

    t137 = (x637-(x638|(x639!=x640)));

    if (t137 != 127) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x641 = INT16_MAX;
	uint32_t x642 = UINT32_MAX;
	volatile int8_t x643 = -13;
	static uint8_t x644 = 7U;
	uint32_t t138 = 198128U;

    t138 = (x641-(x642|(x643!=x644)));

    if (t138 != 32768U) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile uint32_t x646 = 81449786U;
	volatile uint32_t t139 = 16690519U;

    t139 = (x645-(x646|(x647!=x648)));

    if (t139 != 4213517508U) { NG(); } else { ; }
	
}

void f140(void) {
    	static int32_t x653 = -789;
	int8_t x654 = INT8_MIN;
	int32_t x656 = INT32_MAX;

    t140 = (x653-(x654|(x655!=x656)));

    if (t140 != -662) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x658 = -127;
	int64_t x659 = 80933831500522013LL;
	static int32_t x660 = -1;
	volatile int32_t t141 = 44256678;

    t141 = (x657-(x658|(x659!=x660)));

    if (t141 != 32894) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x661 = INT8_MIN;
	volatile uint16_t x662 = UINT16_MAX;
	uint16_t x663 = UINT16_MAX;
	int64_t x664 = 912140LL;
	static volatile int32_t t142 = -48863;

    t142 = (x661-(x662|(x663!=x664)));

    if (t142 != -65663) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int64_t x665 = -1LL;
	volatile uint64_t x666 = UINT64_MAX;
	int64_t x667 = -1LL;
	volatile uint8_t x668 = UINT8_MAX;
	volatile uint64_t t143 = 1444103327487236LLU;

    t143 = (x665-(x666|(x667!=x668)));

    if (t143 != 0LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x669 = INT16_MIN;
	int64_t x672 = INT64_MAX;
	uint64_t t144 = 201510797945177569LLU;

    t144 = (x669-(x670|(x671!=x672)));

    if (t144 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x673 = INT8_MIN;
	static int64_t x674 = INT64_MIN;
	int16_t x675 = -103;
	int32_t x676 = 12956;
	volatile int64_t t145 = 77500LL;

    t145 = (x673-(x674|(x675!=x676)));

    if (t145 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x677 = -1;
	int16_t x678 = 220;
	int16_t x679 = INT16_MIN;
	uint16_t x680 = 2U;
	int32_t t146 = -2208;

    t146 = (x677-(x678|(x679!=x680)));

    if (t146 != -222) { NG(); } else { ; }
	
}

void f147(void) {
    	static volatile uint64_t x681 = UINT64_MAX;
	int8_t x683 = -12;
	int32_t x684 = 15;
	volatile uint64_t t147 = 1969066LLU;

    t147 = (x681-(x682|(x683!=x684)));

    if (t147 != 0LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x685 = -1;
	static volatile int16_t x686 = INT16_MIN;
	int32_t x687 = INT32_MIN;
	int8_t x688 = INT8_MIN;

    t148 = (x685-(x686|(x687!=x688)));

    if (t148 != 32766) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x689 = -1;
	volatile int64_t x690 = -1LL;
	volatile uint16_t x691 = 8U;
	int8_t x692 = -1;

    t149 = (x689-(x690|(x691!=x692)));

    if (t149 != 0LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x697 = UINT32_MAX;
	int16_t x698 = INT16_MAX;
	int32_t x699 = INT32_MIN;
	uint32_t x700 = 725U;
	uint32_t t150 = 2U;

    t150 = (x697-(x698|(x699!=x700)));

    if (t150 != 4294934528U) { NG(); } else { ; }
	
}

void f151(void) {
    	uint8_t x701 = UINT8_MAX;
	int8_t x702 = INT8_MIN;
	uint64_t x703 = 6014569815379LLU;
	uint64_t x704 = UINT64_MAX;
	volatile int32_t t151 = -8;

    t151 = (x701-(x702|(x703!=x704)));

    if (t151 != 382) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile uint16_t x705 = 213U;
	static int32_t x706 = -202;
	uint16_t x707 = UINT16_MAX;
	uint16_t x708 = UINT16_MAX;
	static volatile int32_t t152 = 17;

    t152 = (x705-(x706|(x707!=x708)));

    if (t152 != 415) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x717 = UINT16_MAX;
	static uint64_t x718 = 10487288576964639LLU;
	uint64_t x719 = UINT64_MAX;
	uint32_t x720 = UINT32_MAX;

    t153 = (x717-(x718|(x719!=x720)));

    if (t153 != 18436256785132652512LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int32_t x721 = 214787;
	int64_t x722 = INT64_MAX;
	static int64_t x724 = INT64_MIN;
	static volatile int64_t t154 = 7806LL;

    t154 = (x721-(x722|(x723!=x724)));

    if (t154 != -9223372036854561020LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x726 = -1;
	int8_t x728 = -56;

    t155 = (x725-(x726|(x727!=x728)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x729 = 0U;
	int64_t x730 = -1LL;
	int32_t x731 = INT32_MIN;
	int64_t t156 = -96237631626900055LL;

    t156 = (x729-(x730|(x731!=x732)));

    if (t156 != 1LL) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x733 = INT64_MIN;
	volatile int32_t x735 = INT32_MAX;
	uint8_t x736 = 2U;
	volatile int64_t t157 = 3635100143527716784LL;

    t157 = (x733-(x734|(x735!=x736)));

    if (t157 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x737 = UINT8_MAX;
	int16_t x739 = -728;
	int32_t t158 = -4794;

    t158 = (x737-(x738|(x739!=x740)));

    if (t158 != 252) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x741 = -20094LL;
	static uint16_t x743 = 32309U;
	uint16_t x744 = UINT16_MAX;
	uint64_t t159 = 24470920864910764LLU;

    t159 = (x741-(x742|(x743!=x744)));

    if (t159 != 18446744073709448881LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	int8_t x745 = 63;
	static uint16_t x746 = 14U;
	uint8_t x747 = 2U;
	static int8_t x748 = INT8_MIN;
	int32_t t160 = -81241799;

    t160 = (x745-(x746|(x747!=x748)));

    if (t160 != 48) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile uint16_t x749 = 59U;
	volatile int16_t x750 = INT16_MAX;
	int16_t x751 = -14993;

    t161 = (x749-(x750|(x751!=x752)));

    if (t161 != -32708) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x754 = -71843598209LL;
	uint64_t x755 = 51371212231499LLU;
	int64_t t162 = -1625LL;

    t162 = (x753-(x754|(x755!=x756)));

    if (t162 != 71843598210LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x757 = INT8_MIN;
	uint8_t x758 = 10U;
	int16_t x760 = INT16_MIN;

    t163 = (x757-(x758|(x759!=x760)));

    if (t163 != -139) { NG(); } else { ; }
	
}

void f164(void) {
    	uint32_t x761 = 15683U;
	int8_t x762 = INT8_MIN;
	static volatile uint16_t x764 = 5U;

    t164 = (x761-(x762|(x763!=x764)));

    if (t164 != 15810U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int8_t x765 = INT8_MIN;
	static volatile int8_t x766 = -1;
	int8_t x767 = 0;
	int8_t x768 = INT8_MIN;
	volatile int32_t t165 = -194001102;

    t165 = (x765-(x766|(x767!=x768)));

    if (t165 != -127) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x769 = INT8_MIN;
	uint64_t x770 = 55424625070366LLU;
	static uint64_t x772 = UINT64_MAX;
	static uint64_t t166 = 18LLU;

    t166 = (x769-(x770|(x771!=x772)));

    if (t166 != 18446688649084481121LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x773 = UINT32_MAX;
	uint8_t x774 = 17U;
	volatile int16_t x775 = -1;
	volatile uint32_t t167 = 43085505U;

    t167 = (x773-(x774|(x775!=x776)));

    if (t167 != 4294967278U) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int8_t x777 = -1;
	volatile uint32_t x778 = 3872U;
	uint32_t x780 = UINT32_MAX;
	volatile uint32_t t168 = 114856904U;

    t168 = (x777-(x778|(x779!=x780)));

    if (t168 != 4294963422U) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x781 = INT64_MAX;
	uint8_t x782 = 40U;
	static volatile int32_t x783 = INT32_MIN;
	int64_t x784 = -1LL;
	static int64_t t169 = 476353LL;

    t169 = (x781-(x782|(x783!=x784)));

    if (t169 != 9223372036854775766LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x785 = -494;
	int32_t x786 = 1191365;
	static int64_t x787 = -1LL;
	volatile int32_t x788 = INT32_MAX;
	volatile int32_t t170 = -3937;

    t170 = (x785-(x786|(x787!=x788)));

    if (t170 != -1191859) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x790 = INT32_MAX;
	volatile int16_t x791 = -117;
	static uint64_t x792 = 12530583183619LLU;
	int32_t t171 = INT32_MIN;

    t171 = (x789-(x790|(x791!=x792)));

    if (t171 != INT32_MIN) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x793 = 43U;
	int8_t x794 = 51;
	int16_t x795 = -9830;
	static int8_t x796 = -1;
	static int32_t t172 = 1;

    t172 = (x793-(x794|(x795!=x796)));

    if (t172 != -8) { NG(); } else { ; }
	
}

void f173(void) {
    	static int8_t x797 = INT8_MIN;
	uint16_t x798 = UINT16_MAX;
	static uint8_t x800 = UINT8_MAX;

    t173 = (x797-(x798|(x799!=x800)));

    if (t173 != -65663) { NG(); } else { ; }
	
}

void f174(void) {
    	int64_t x801 = -1LL;
	uint32_t x802 = 1U;
	int16_t x803 = -85;
	volatile int64_t t174 = -20003525LL;

    t174 = (x801-(x802|(x803!=x804)));

    if (t174 != -2LL) { NG(); } else { ; }
	
}

void f175(void) {
    	uint16_t x805 = UINT16_MAX;
	volatile int16_t x806 = -182;
	volatile uint8_t x807 = UINT8_MAX;
	uint8_t x808 = UINT8_MAX;
	volatile int32_t t175 = -238;

    t175 = (x805-(x806|(x807!=x808)));

    if (t175 != 65717) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint8_t x813 = UINT8_MAX;
	uint16_t x814 = 977U;
	int32_t x815 = INT32_MAX;
	uint8_t x816 = 115U;
	volatile int32_t t176 = 957572153;

    t176 = (x813-(x814|(x815!=x816)));

    if (t176 != -722) { NG(); } else { ; }
	
}

void f177(void) {
    	int8_t x817 = -3;
	uint64_t x818 = 2790031511LLU;
	int16_t x819 = 672;
	volatile uint64_t t177 = 51595LLU;

    t177 = (x817-(x818|(x819!=x820)));

    if (t177 != 18446744070919520102LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint8_t x821 = UINT8_MAX;
	int8_t x822 = 5;
	int32_t x823 = 252058;
	int32_t t178 = 505;

    t178 = (x821-(x822|(x823!=x824)));

    if (t178 != 250) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x833 = -1;
	int32_t t179 = -264349385;

    t179 = (x833-(x834|(x835!=x836)));

    if (t179 != 4) { NG(); } else { ; }
	
}

void f180(void) {
    	static int16_t x837 = INT16_MIN;
	static int8_t x839 = INT8_MIN;
	int32_t x840 = 11672928;
	static int32_t t180 = -905;

    t180 = (x837-(x838|(x839!=x840)));

    if (t180 != -32767) { NG(); } else { ; }
	
}

void f181(void) {
    	static volatile int8_t x841 = INT8_MIN;
	static int16_t x842 = INT16_MIN;
	int8_t x843 = 0;
	int32_t x844 = 37;
	int32_t t181 = -80;

    t181 = (x841-(x842|(x843!=x844)));

    if (t181 != 32639) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x849 = 219774795LL;
	static uint16_t x850 = 650U;
	int16_t x851 = INT16_MAX;
	volatile uint32_t x852 = 717804912U;

    t182 = (x849-(x850|(x851!=x852)));

    if (t182 != 219774144LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint32_t x853 = 30307U;
	volatile int16_t x854 = -1;
	volatile uint32_t x855 = 535101976U;
	int16_t x856 = 16;
	volatile uint32_t t183 = 13929U;

    t183 = (x853-(x854|(x855!=x856)));

    if (t183 != 30308U) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint64_t x857 = UINT64_MAX;
	volatile int32_t x859 = -339554974;
	int8_t x860 = INT8_MIN;
	volatile uint64_t t184 = 8305282LLU;

    t184 = (x857-(x858|(x859!=x860)));

    if (t184 != 2147483646LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile uint64_t x861 = 1LLU;
	static uint64_t x863 = 12LLU;

    t185 = (x861-(x862|(x863!=x864)));

    if (t185 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x865 = 8;
	int32_t x866 = 94942201;
	int16_t x867 = INT16_MIN;
	static int32_t t186 = -7031837;

    t186 = (x865-(x866|(x867!=x868)));

    if (t186 != -94942193) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x869 = UINT8_MAX;
	volatile int16_t x870 = -1;
	static volatile int16_t x871 = -1;
	int32_t t187 = -16;

    t187 = (x869-(x870|(x871!=x872)));

    if (t187 != 256) { NG(); } else { ; }
	
}

void f188(void) {
    	int32_t x873 = 226;
	int32_t x874 = 12081;
	static uint64_t x875 = 90LLU;

    t188 = (x873-(x874|(x875!=x876)));

    if (t188 != -11855) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint32_t x877 = 376U;
	uint8_t x879 = UINT8_MAX;
	volatile uint32_t x880 = 19867116U;
	uint32_t t189 = 1960686U;

    t189 = (x877-(x878|(x879!=x880)));

    if (t189 != 377U) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int64_t x883 = INT64_MIN;
	int32_t x884 = INT32_MAX;
	int32_t t190 = 559;

    t190 = (x881-(x882|(x883!=x884)));

    if (t190 != -116) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x885 = INT8_MAX;
	volatile int8_t x886 = 0;
	static int16_t x887 = -1;
	int8_t x888 = -3;
	volatile int32_t t191 = -214367;

    t191 = (x885-(x886|(x887!=x888)));

    if (t191 != 126) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x889 = 740;
	volatile int8_t x890 = 0;
	static int32_t x892 = -7842311;
	static volatile int32_t t192 = -571548415;

    t192 = (x889-(x890|(x891!=x892)));

    if (t192 != 739) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x895 = 105;
	volatile uint32_t x896 = 37526741U;
	int32_t t193 = INT32_MIN;

    t193 = (x893-(x894|(x895!=x896)));

    if (t193 != INT32_MIN) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x897 = -34LL;
	volatile int32_t x898 = 0;
	int8_t x900 = INT8_MIN;
	volatile int64_t t194 = 26293649651859617LL;

    t194 = (x897-(x898|(x899!=x900)));

    if (t194 != -35LL) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x901 = 78U;
	int8_t x902 = -1;
	static uint8_t x903 = 1U;
	int32_t t195 = -18;

    t195 = (x901-(x902|(x903!=x904)));

    if (t195 != 79) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x905 = -28308491451LL;
	uint32_t x907 = 263810U;
	int64_t t196 = -430LL;

    t196 = (x905-(x906|(x907!=x908)));

    if (t196 != -28310447452LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint16_t x909 = 6877U;
	static uint32_t x910 = 2U;
	static uint32_t t197 = 33418148U;

    t197 = (x909-(x910|(x911!=x912)));

    if (t197 != 6874U) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int16_t x913 = INT16_MIN;
	volatile int16_t x914 = INT16_MIN;
	int16_t x915 = INT16_MIN;

    t198 = (x913-(x914|(x915!=x916)));

    if (t198 != -1) { NG(); } else { ; }
	
}

void f199(void) {
    	uint8_t x917 = 0U;
	int32_t x918 = INT32_MIN;
	int64_t x919 = INT64_MIN;
	static volatile int32_t t199 = INT32_MAX;

    t199 = (x917-(x918|(x919!=x920)));

    if (t199 != INT32_MAX) { NG(); } else { ; }
	
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

