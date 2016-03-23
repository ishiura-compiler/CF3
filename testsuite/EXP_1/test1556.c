
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
int8_t x5 = -1;
static uint32_t x12 = UINT32_MAX;
volatile uint64_t x13 = 2337513064029566296LLU;
static int64_t t4 = -148489975LL;
static int8_t x26 = -1;
uint32_t t5 = 3150U;
int64_t x30 = INT64_MIN;
int64_t x31 = 613LL;
int64_t x35 = INT64_MIN;
volatile int32_t t8 = 68356065;
volatile int16_t x42 = -1;
int32_t x43 = -1;
volatile int32_t t9 = -2;
uint64_t x46 = 37975062544396039LLU;
volatile int8_t x49 = 2;
volatile int64_t t12 = INT64_MAX;
static int32_t x57 = -1;
int16_t x58 = 1039;
int16_t x63 = -14;
uint8_t x66 = UINT8_MAX;
static uint64_t x68 = 8309LLU;
volatile int8_t x69 = -54;
int32_t x70 = 224651;
int64_t x74 = -1LL;
static volatile int64_t x85 = INT64_MIN;
static uint16_t x88 = 3U;
volatile int32_t t19 = 0;
volatile uint64_t x92 = 112725LLU;
static uint16_t x93 = UINT16_MAX;
uint32_t x98 = UINT32_MAX;
int16_t x99 = -497;
int64_t x102 = INT64_MAX;
uint32_t x106 = 107U;
int16_t x121 = 1;
uint64_t x127 = 2016248357LLU;
int8_t x128 = INT8_MIN;
int64_t x139 = 222863107LL;
int64_t t30 = -1LL;
uint32_t x141 = 2738U;
int8_t x146 = 39;
static volatile int32_t t32 = -523024;
uint16_t x150 = 0U;
volatile uint16_t x151 = 5U;
static volatile int8_t x160 = 12;
int16_t x167 = -1;
volatile int64_t x169 = INT64_MIN;
int32_t t37 = 213;
uint16_t x192 = UINT16_MAX;
int16_t x195 = INT16_MIN;
int32_t x196 = 2883008;
int32_t x200 = -1;
volatile int64_t t43 = -532589460LL;
int64_t x202 = INT64_MIN;
int8_t x204 = INT8_MIN;
int16_t x207 = INT16_MIN;
int32_t x218 = -1;
int8_t x219 = INT8_MIN;
static uint64_t x226 = 1635520829824LLU;
volatile int8_t x227 = INT8_MIN;
uint64_t x230 = 562816853LLU;
static int16_t x233 = INT16_MIN;
uint8_t x235 = 70U;
uint8_t x243 = UINT8_MAX;
uint8_t x256 = 24U;
int32_t x259 = INT32_MIN;
int32_t x261 = INT32_MAX;
static volatile int64_t t57 = 2674914910LL;
static int32_t t59 = -19;
volatile int32_t x277 = 152838;
uint16_t x282 = 17125U;
static uint32_t x289 = UINT32_MAX;
int16_t x291 = INT16_MIN;
uint64_t x298 = UINT64_MAX;
static uint32_t x299 = 7758104U;
int16_t x307 = INT16_MIN;
volatile int32_t x314 = INT32_MIN;
volatile int16_t x316 = INT16_MAX;
volatile uint32_t t68 = 157099U;
static int16_t x318 = -79;
static volatile uint32_t t69 = 116432857U;
uint64_t x326 = UINT64_MAX;
int32_t t72 = -125409;
volatile int32_t x340 = -1;
uint16_t x343 = 217U;
int16_t x348 = 24;
volatile int16_t x349 = -1;
static uint8_t x352 = 6U;
volatile uint64_t t76 = 3084232237LLU;
static uint64_t x353 = 2LLU;
int16_t x357 = INT16_MIN;
int16_t x362 = -3;
static int32_t x366 = -202879;
static int32_t t80 = 26;
static int64_t t81 = 285510572LL;
int16_t x379 = INT16_MIN;
uint16_t x380 = UINT16_MAX;
volatile int32_t t83 = 557631302;
static volatile int16_t x382 = INT16_MAX;
volatile int32_t x383 = INT32_MIN;
uint64_t x392 = 22835051373497632LLU;
int64_t x393 = -1LL;
uint64_t x399 = 9562333LLU;
int32_t x400 = -339;
int64_t x408 = -1LL;
uint32_t x415 = 3U;
static uint16_t x423 = 2154U;
static volatile int16_t x428 = INT16_MAX;
static int8_t x430 = 1;
uint16_t x432 = 24U;
static int64_t x439 = INT64_MAX;
int64_t x443 = -26LL;
uint32_t t96 = 1824219U;
uint64_t t97 = 4980933023LLU;
uint32_t x455 = 218U;
static volatile uint64_t x461 = 843295733353682LLU;
uint32_t x476 = 14U;
static int64_t x482 = -1LL;
int64_t x484 = -1LL;
int8_t x496 = 1;
volatile int64_t t107 = -20470014LL;
volatile uint64_t x502 = 43648LLU;
int64_t t108 = 8621746LL;
static int32_t x506 = -1;
int32_t x509 = -1;
volatile uint16_t x510 = 1006U;
static int8_t x512 = -1;
static volatile int32_t t110 = 99220;
uint32_t x513 = 2348093U;
static int32_t x516 = INT32_MIN;
static volatile int32_t t111 = -9044581;
int16_t x517 = INT16_MAX;
uint64_t x521 = 10242716923LLU;
uint64_t x531 = UINT64_MAX;
volatile int8_t x538 = INT8_MIN;
int16_t x539 = INT16_MIN;
uint64_t t116 = 58717934216552190LLU;
uint64_t x544 = 24043791179444LLU;
static int8_t x546 = INT8_MIN;
uint16_t x547 = UINT16_MAX;
volatile int32_t t118 = -9858;
uint64_t x550 = 3746385019LLU;
int32_t x551 = -587068551;
int16_t x554 = INT16_MIN;
static volatile int64_t x556 = INT64_MIN;
static int32_t x559 = -6;
static volatile uint64_t t122 = 62056555562996437LLU;
static volatile int8_t x566 = INT8_MIN;
int8_t x568 = INT8_MIN;
uint32_t t123 = 8932U;
int16_t x571 = -2;
uint8_t x588 = 98U;
static int64_t x603 = -1LL;
int16_t x609 = 154;
int8_t x615 = -1;
uint8_t x623 = UINT8_MAX;
volatile int32_t t135 = 21;
int16_t x625 = INT16_MAX;
int8_t x629 = -1;
int8_t x633 = -3;
volatile uint8_t x636 = 22U;
volatile int32_t t138 = -7;
uint8_t x639 = UINT8_MAX;
uint64_t x648 = 4509990224169LLU;
uint8_t x651 = 8U;
int8_t x652 = INT8_MIN;
int64_t x656 = -17155160892495LL;
static int32_t x662 = 2;
int32_t x667 = -1665;
static int32_t x668 = INT32_MIN;
volatile int32_t t146 = -679562920;
int32_t x676 = INT32_MAX;
int32_t x680 = -51518;
int16_t x688 = INT16_MIN;
volatile int32_t x689 = -6093542;
int8_t x690 = INT8_MIN;
int32_t x691 = -10829245;
volatile int32_t x708 = -1;
uint16_t x711 = 166U;
static int16_t x713 = -1;
int16_t x716 = INT16_MAX;
static volatile int32_t t155 = 4;
static uint8_t x721 = 10U;
int64_t x725 = INT64_MIN;
static int8_t x730 = -1;
uint32_t t159 = 42836U;
uint16_t x733 = UINT16_MAX;
static volatile uint8_t x739 = 3U;
int16_t x743 = INT16_MAX;
int64_t x744 = 2665LL;
int32_t x748 = INT32_MAX;
int16_t x749 = -1;
int16_t x753 = -1;
uint64_t x761 = UINT64_MAX;
volatile int32_t t166 = 0;
uint64_t x765 = 84234882342LLU;
uint32_t x766 = 285U;
int32_t t167 = -1406;
static uint64_t x777 = UINT64_MAX;
int16_t x780 = 4481;
static uint32_t x782 = 5U;
volatile int64_t x784 = 244019639LL;
uint8_t x785 = 10U;
int8_t x787 = 14;
volatile uint32_t x788 = UINT32_MAX;
int8_t x789 = 3;
volatile int16_t x796 = -1;
int32_t x800 = -11818;
volatile uint64_t t176 = 11989441421011429LLU;
int16_t x805 = -1;
int32_t t178 = 56;
int8_t x813 = INT8_MIN;
volatile uint32_t t179 = 31919453U;
int16_t x825 = INT16_MIN;
volatile uint16_t x826 = 8U;
volatile int32_t x829 = INT32_MIN;
volatile uint8_t x830 = UINT8_MAX;
int32_t x836 = INT32_MIN;
static volatile uint64_t x842 = 164963LLU;
int16_t x844 = -2;
uint64_t x852 = UINT64_MAX;
uint64_t t187 = 4031236LLU;
volatile int8_t x862 = 7;
volatile int32_t t191 = -1;
static volatile int64_t x873 = INT64_MAX;
static uint16_t x876 = 30U;
volatile int32_t t193 = INT32_MAX;
uint16_t x881 = UINT16_MAX;
int64_t x883 = INT64_MAX;
volatile int64_t t194 = -612846359490320LL;
uint16_t x885 = 31105U;
static uint64_t t195 = 4149609LLU;
volatile int64_t x891 = -1LL;
uint8_t x898 = UINT8_MAX;
int64_t x902 = -1LL;
int16_t x904 = INT16_MIN;


void f0(void) {
    	static int8_t x1 = -46;
	int64_t x2 = -3844887LL;
	uint64_t x4 = 181700356504111LLU;
	uint64_t t0 = 12919034755922300LLU;

    t0 = (((x1==x2)^x3)-x4);

    if (t0 != 18446562373353047632LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int8_t x6 = -1;
	uint64_t x7 = UINT64_MAX;
	volatile uint32_t x8 = 189689U;
	volatile uint64_t t1 = 8255374142939795225LLU;

    t1 = (((x5==x6)^x7)-x8);

    if (t1 != 18446744073709361925LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint64_t x9 = UINT64_MAX;
	uint64_t x10 = 574831011432713220LLU;
	int16_t x11 = 0;
	uint32_t t2 = 3U;

    t2 = (((x9==x10)^x11)-x12);

    if (t2 != 1U) { NG(); } else { ; }
	
}

void f3(void) {
    	static uint32_t x14 = UINT32_MAX;
	int8_t x15 = INT8_MAX;
	volatile uint8_t x16 = 42U;
	int32_t t3 = -416593;

    t3 = (((x13==x14)^x15)-x16);

    if (t3 != 85) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = -27292LL;
	int64_t x18 = -1LL;
	int64_t x19 = 1050491023344309923LL;
	volatile int16_t x20 = -732;

    t4 = (((x17==x18)^x19)-x20);

    if (t4 != 1050491023344310655LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static uint16_t x25 = 7276U;
	static int16_t x27 = -1;
	static uint32_t x28 = 6U;

    t5 = (((x25==x26)^x27)-x28);

    if (t5 != 4294967289U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x29 = 3483U;
	int8_t x32 = INT8_MIN;
	static volatile int64_t t6 = 13127153051LL;

    t6 = (((x29==x30)^x31)-x32);

    if (t6 != 741LL) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x33 = INT8_MIN;
	int8_t x34 = 0;
	static int8_t x36 = -1;
	int64_t t7 = 403589473LL;

    t7 = (((x33==x34)^x35)-x36);

    if (t7 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x37 = -1;
	static volatile int64_t x38 = -7060LL;
	int16_t x39 = INT16_MAX;
	int16_t x40 = -1;

    t8 = (((x37==x38)^x39)-x40);

    if (t8 != 32768) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = -1;
	int16_t x44 = INT16_MIN;

    t9 = (((x41==x42)^x43)-x44);

    if (t9 != 32766) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x45 = INT8_MIN;
	static int16_t x47 = -24;
	int64_t x48 = -1LL;
	static int64_t t10 = -476776159LL;

    t10 = (((x45==x46)^x47)-x48);

    if (t10 != -23LL) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int8_t x50 = INT8_MIN;
	int8_t x51 = INT8_MIN;
	static int32_t x52 = INT32_MIN;
	volatile int32_t t11 = 959257676;

    t11 = (((x49==x50)^x51)-x52);

    if (t11 != 2147483520) { NG(); } else { ; }
	
}

void f12(void) {
    	uint8_t x53 = UINT8_MAX;
	int32_t x54 = INT32_MIN;
	int64_t x55 = -1LL;
	int64_t x56 = INT64_MIN;

    t12 = (((x53==x54)^x55)-x56);

    if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
    	volatile uint64_t x59 = UINT64_MAX;
	int64_t x60 = 450733LL;
	uint64_t t13 = 4221291330824LLU;

    t13 = (((x57==x58)^x59)-x60);

    if (t13 != 18446744073709100882LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x61 = UINT16_MAX;
	static int32_t x62 = -915699;
	int16_t x64 = -3913;
	volatile int32_t t14 = 1298222;

    t14 = (((x61==x62)^x63)-x64);

    if (t14 != 3899) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = INT32_MIN;
	volatile int32_t x67 = INT32_MIN;
	volatile uint64_t t15 = 113978LLU;

    t15 = (((x65==x66)^x67)-x68);

    if (t15 != 18446744071562059659LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x71 = 3;
	volatile uint32_t x72 = UINT32_MAX;
	static uint32_t t16 = 968281490U;

    t16 = (((x69==x70)^x71)-x72);

    if (t16 != 4U) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x73 = -1LL;
	int32_t x75 = INT32_MAX;
	uint16_t x76 = 2958U;
	volatile int32_t t17 = -481130062;

    t17 = (((x73==x74)^x75)-x76);

    if (t17 != 2147480688) { NG(); } else { ; }
	
}

void f18(void) {
    	static uint8_t x77 = 48U;
	static int64_t x78 = INT64_MIN;
	int32_t x79 = INT32_MIN;
	int8_t x80 = INT8_MIN;
	int32_t t18 = -7246;

    t18 = (((x77==x78)^x79)-x80);

    if (t18 != -2147483520) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x86 = UINT32_MAX;
	int8_t x87 = -16;

    t19 = (((x85==x86)^x87)-x88);

    if (t19 != -19) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x89 = INT16_MIN;
	int64_t x90 = INT64_MAX;
	int8_t x91 = INT8_MIN;
	volatile uint64_t t20 = 310033836645687387LLU;

    t20 = (((x89==x90)^x91)-x92);

    if (t20 != 18446744073709438763LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x94 = -1;
	int16_t x95 = -1;
	uint8_t x96 = 7U;
	volatile int32_t t21 = -5343402;

    t21 = (((x93==x94)^x95)-x96);

    if (t21 != -8) { NG(); } else { ; }
	
}

void f22(void) {
    	uint8_t x97 = 1U;
	int8_t x100 = -1;
	int32_t t22 = -8185010;

    t22 = (((x97==x98)^x99)-x100);

    if (t22 != -496) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x101 = INT32_MIN;
	uint8_t x103 = 3U;
	uint16_t x104 = 1255U;
	volatile int32_t t23 = 11;

    t23 = (((x101==x102)^x103)-x104);

    if (t23 != -1252) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x105 = -1;
	uint64_t x107 = UINT64_MAX;
	uint8_t x108 = 61U;
	volatile uint64_t t24 = 2041LLU;

    t24 = (((x105==x106)^x107)-x108);

    if (t24 != 18446744073709551554LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int64_t x113 = INT64_MAX;
	volatile int16_t x114 = -4;
	int8_t x115 = INT8_MIN;
	volatile uint8_t x116 = UINT8_MAX;
	volatile int32_t t25 = -134153177;

    t25 = (((x113==x114)^x115)-x116);

    if (t25 != -383) { NG(); } else { ; }
	
}

void f26(void) {
    	int64_t x117 = -1LL;
	int64_t x118 = 4921937LL;
	static uint64_t x119 = 4343806796170LLU;
	volatile int16_t x120 = 1728;
	uint64_t t26 = 195019838LLU;

    t26 = (((x117==x118)^x119)-x120);

    if (t26 != 4343806794442LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint16_t x122 = 412U;
	int8_t x123 = -1;
	int8_t x124 = INT8_MIN;
	static volatile int32_t t27 = -1;

    t27 = (((x121==x122)^x123)-x124);

    if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x125 = 17LLU;
	volatile uint8_t x126 = 2U;
	volatile uint64_t t28 = 0LLU;

    t28 = (((x125==x126)^x127)-x128);

    if (t28 != 2016248485LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x133 = -1;
	int64_t x134 = INT64_MAX;
	int8_t x135 = INT8_MIN;
	static volatile int64_t x136 = INT64_MIN;
	volatile int64_t t29 = 394183544LL;

    t29 = (((x133==x134)^x135)-x136);

    if (t29 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f30(void) {
    	static volatile int64_t x137 = -1LL;
	int16_t x138 = INT16_MIN;
	int16_t x140 = INT16_MIN;

    t30 = (((x137==x138)^x139)-x140);

    if (t30 != 222895875LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int64_t x142 = -1LL;
	static int8_t x143 = INT8_MAX;
	int8_t x144 = -9;
	volatile int32_t t31 = 3760995;

    t31 = (((x141==x142)^x143)-x144);

    if (t31 != 136) { NG(); } else { ; }
	
}

void f32(void) {
    	uint8_t x145 = 5U;
	static int16_t x147 = -654;
	int8_t x148 = INT8_MIN;

    t32 = (((x145==x146)^x147)-x148);

    if (t32 != -526) { NG(); } else { ; }
	
}

void f33(void) {
    	int16_t x149 = INT16_MIN;
	int32_t x152 = INT32_MAX;
	volatile int32_t t33 = -5913521;

    t33 = (((x149==x150)^x151)-x152);

    if (t33 != -2147483642) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x153 = -2;
	int8_t x154 = 1;
	static uint8_t x155 = 0U;
	uint64_t x156 = 25LLU;
	uint64_t t34 = 346753LLU;

    t34 = (((x153==x154)^x155)-x156);

    if (t34 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x157 = -1;
	int16_t x158 = INT16_MIN;
	uint32_t x159 = UINT32_MAX;
	uint32_t t35 = 29686U;

    t35 = (((x157==x158)^x159)-x160);

    if (t35 != 4294967283U) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x165 = -1;
	int32_t x166 = INT32_MIN;
	int64_t x168 = INT64_MIN;
	volatile int64_t t36 = INT64_MAX;

    t36 = (((x165==x166)^x167)-x168);

    if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
    	uint64_t x170 = 14896741026590LLU;
	static int8_t x171 = INT8_MIN;
	static int32_t x172 = INT32_MIN;

    t37 = (((x169==x170)^x171)-x172);

    if (t37 != 2147483520) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int16_t x173 = INT16_MAX;
	static int16_t x174 = INT16_MAX;
	int64_t x175 = -1LL;
	volatile int8_t x176 = -1;
	volatile int64_t t38 = 7604LL;

    t38 = (((x173==x174)^x175)-x176);

    if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
    	static int32_t x181 = INT32_MAX;
	uint16_t x182 = 34U;
	static int8_t x183 = INT8_MIN;
	uint32_t x184 = UINT32_MAX;
	uint32_t t39 = 1U;

    t39 = (((x181==x182)^x183)-x184);

    if (t39 != 4294967169U) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x185 = 19;
	int8_t x186 = 61;
	int32_t x187 = -103771;
	int16_t x188 = -1;
	int32_t t40 = -716;

    t40 = (((x185==x186)^x187)-x188);

    if (t40 != -103770) { NG(); } else { ; }
	
}

void f41(void) {
    	int16_t x189 = INT16_MIN;
	volatile int8_t x190 = -63;
	uint16_t x191 = UINT16_MAX;
	volatile int32_t t41 = -12;

    t41 = (((x189==x190)^x191)-x192);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x193 = INT16_MIN;
	int8_t x194 = INT8_MIN;
	int32_t t42 = 607;

    t42 = (((x193==x194)^x195)-x196);

    if (t42 != -2915776) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint64_t x197 = UINT64_MAX;
	int64_t x198 = -3396324LL;
	volatile int64_t x199 = INT64_MIN;

    t43 = (((x197==x198)^x199)-x200);

    if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static int16_t x201 = INT16_MIN;
	int64_t x203 = -5128962210531LL;
	int64_t t44 = 21721LL;

    t44 = (((x201==x202)^x203)-x204);

    if (t44 != -5128962210403LL) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x205 = UINT32_MAX;
	int32_t x206 = INT32_MIN;
	uint64_t x208 = 1524581872336468LLU;
	static volatile uint64_t t45 = 243LLU;

    t45 = (((x205==x206)^x207)-x208);

    if (t45 != 18445219491837182380LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x209 = 39621362472LLU;
	int64_t x210 = 1218230755830LL;
	int16_t x211 = INT16_MAX;
	volatile int8_t x212 = INT8_MIN;
	volatile int32_t t46 = 31990;

    t46 = (((x209==x210)^x211)-x212);

    if (t46 != 32895) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x217 = -1;
	static int8_t x220 = -23;
	int32_t t47 = -37;

    t47 = (((x217==x218)^x219)-x220);

    if (t47 != -104) { NG(); } else { ; }
	
}

void f48(void) {
    	int8_t x221 = INT8_MIN;
	uint16_t x222 = 63U;
	int64_t x223 = 133LL;
	int32_t x224 = INT32_MIN;
	int64_t t48 = 1LL;

    t48 = (((x221==x222)^x223)-x224);

    if (t48 != 2147483781LL) { NG(); } else { ; }
	
}

void f49(void) {
    	int64_t x225 = INT64_MIN;
	uint8_t x228 = 53U;
	int32_t t49 = -2137143;

    t49 = (((x225==x226)^x227)-x228);

    if (t49 != -181) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x229 = -5523LL;
	static int64_t x231 = -1LL;
	static volatile uint64_t x232 = 7645450753LLU;
	volatile uint64_t t50 = 5846615LLU;

    t50 = (((x229==x230)^x231)-x232);

    if (t50 != 18446744066064100862LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x234 = INT8_MIN;
	static volatile int64_t x236 = -4519251641LL;
	volatile int64_t t51 = -6827044379709080LL;

    t51 = (((x233==x234)^x235)-x236);

    if (t51 != 4519251711LL) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x237 = INT32_MIN;
	uint64_t x238 = 5786284LLU;
	int32_t x239 = INT32_MAX;
	static uint8_t x240 = 1U;
	volatile int32_t t52 = 14;

    t52 = (((x237==x238)^x239)-x240);

    if (t52 != 2147483646) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x241 = INT32_MAX;
	int16_t x242 = INT16_MAX;
	int16_t x244 = INT16_MIN;
	volatile int32_t t53 = 739592;

    t53 = (((x241==x242)^x243)-x244);

    if (t53 != 33023) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x245 = 196U;
	int8_t x246 = INT8_MIN;
	int16_t x247 = INT16_MIN;
	uint16_t x248 = 55U;
	volatile int32_t t54 = 1;

    t54 = (((x245==x246)^x247)-x248);

    if (t54 != -32823) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x253 = 77U;
	int32_t x254 = 200748;
	int16_t x255 = -7;
	volatile int32_t t55 = 693489;

    t55 = (((x253==x254)^x255)-x256);

    if (t55 != -31) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x257 = -296;
	static int64_t x258 = INT64_MIN;
	int16_t x260 = INT16_MIN;
	static int32_t t56 = -48777;

    t56 = (((x257==x258)^x259)-x260);

    if (t56 != -2147450880) { NG(); } else { ; }
	
}

void f57(void) {
    	static uint16_t x262 = 2921U;
	static int64_t x263 = 8100929654LL;
	int8_t x264 = INT8_MAX;

    t57 = (((x261==x262)^x263)-x264);

    if (t57 != 8100929527LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint8_t x269 = 28U;
	int16_t x270 = 14;
	int16_t x271 = -1;
	int16_t x272 = -1314;
	int32_t t58 = 1;

    t58 = (((x269==x270)^x271)-x272);

    if (t58 != 1313) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x273 = INT64_MIN;
	uint8_t x274 = 3U;
	int32_t x275 = -1;
	int8_t x276 = 1;

    t59 = (((x273==x274)^x275)-x276);

    if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
    	static uint8_t x278 = 0U;
	uint8_t x279 = 2U;
	static int64_t x280 = INT64_MAX;
	int64_t t60 = 8788665017LL;

    t60 = (((x277==x278)^x279)-x280);

    if (t60 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x281 = -41237;
	volatile int16_t x283 = INT16_MIN;
	static int16_t x284 = 118;
	int32_t t61 = 0;

    t61 = (((x281==x282)^x283)-x284);

    if (t61 != -32886) { NG(); } else { ; }
	
}

void f62(void) {
    	uint64_t x285 = UINT64_MAX;
	uint64_t x286 = 165LLU;
	uint8_t x287 = 31U;
	int16_t x288 = INT16_MIN;
	static volatile int32_t t62 = 6739;

    t62 = (((x285==x286)^x287)-x288);

    if (t62 != 32799) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x290 = INT32_MIN;
	int8_t x292 = -7;
	volatile int32_t t63 = -170636072;

    t63 = (((x289==x290)^x291)-x292);

    if (t63 != -32761) { NG(); } else { ; }
	
}

void f64(void) {
    	int16_t x293 = 6825;
	uint32_t x294 = 40500355U;
	int32_t x295 = INT32_MIN;
	int32_t x296 = INT32_MIN;
	int32_t t64 = 356;

    t64 = (((x293==x294)^x295)-x296);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint16_t x297 = 19U;
	int32_t x300 = -1;
	uint32_t t65 = 863840471U;

    t65 = (((x297==x298)^x299)-x300);

    if (t65 != 7758105U) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x305 = -13;
	uint64_t x306 = 13191LLU;
	volatile int16_t x308 = INT16_MAX;
	int32_t t66 = -15256925;

    t66 = (((x305==x306)^x307)-x308);

    if (t66 != -65535) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x309 = 1362;
	int64_t x310 = -1LL;
	uint8_t x311 = 20U;
	uint64_t x312 = 7760769504323LLU;
	uint64_t t67 = 73221326LLU;

    t67 = (((x309==x310)^x311)-x312);

    if (t67 != 18446736312940047313LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x313 = INT8_MIN;
	volatile uint32_t x315 = 1U;

    t68 = (((x313==x314)^x315)-x316);

    if (t68 != 4294934530U) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x317 = 33475026074945LLU;
	int32_t x319 = INT32_MIN;
	volatile uint32_t x320 = 4904509U;

    t69 = (((x317==x318)^x319)-x320);

    if (t69 != 2142579139U) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x321 = 7279LLU;
	int16_t x322 = 1;
	uint16_t x323 = 44U;
	int16_t x324 = INT16_MIN;
	static volatile int32_t t70 = 0;

    t70 = (((x321==x322)^x323)-x324);

    if (t70 != 32812) { NG(); } else { ; }
	
}

void f71(void) {
    	uint16_t x325 = 13621U;
	int32_t x327 = 4129;
	int16_t x328 = 663;
	volatile int32_t t71 = 0;

    t71 = (((x325==x326)^x327)-x328);

    if (t71 != 3466) { NG(); } else { ; }
	
}

void f72(void) {
    	int8_t x333 = INT8_MIN;
	static volatile int16_t x334 = -1;
	static int8_t x335 = INT8_MAX;
	int32_t x336 = -28293495;

    t72 = (((x333==x334)^x335)-x336);

    if (t72 != 28293622) { NG(); } else { ; }
	
}

void f73(void) {
    	int8_t x337 = INT8_MAX;
	uint16_t x338 = 2U;
	uint16_t x339 = 3U;
	static volatile int32_t t73 = 13501;

    t73 = (((x337==x338)^x339)-x340);

    if (t73 != 4) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x341 = -5;
	int32_t x342 = INT32_MIN;
	volatile int16_t x344 = 0;
	volatile int32_t t74 = -1505362;

    t74 = (((x341==x342)^x343)-x344);

    if (t74 != 217) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int64_t x345 = INT64_MAX;
	int32_t x346 = INT32_MIN;
	int8_t x347 = INT8_MIN;
	int32_t t75 = 41;

    t75 = (((x345==x346)^x347)-x348);

    if (t75 != -152) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x350 = 287099433811788LLU;
	volatile uint64_t x351 = 3087149LLU;

    t76 = (((x349==x350)^x351)-x352);

    if (t76 != 3087143LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x354 = -1;
	volatile int64_t x355 = 1LL;
	int8_t x356 = -1;
	static int64_t t77 = -1007LL;

    t77 = (((x353==x354)^x355)-x356);

    if (t77 != 2LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x358 = INT16_MIN;
	int32_t x359 = INT32_MAX;
	int8_t x360 = INT8_MAX;
	static int32_t t78 = -3262;

    t78 = (((x357==x358)^x359)-x360);

    if (t78 != 2147483519) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x361 = INT32_MAX;
	int32_t x363 = 838193;
	int64_t x364 = INT64_MAX;
	volatile int64_t t79 = 466849514198LL;

    t79 = (((x361==x362)^x363)-x364);

    if (t79 != -9223372036853937614LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x365 = INT8_MIN;
	volatile int32_t x367 = -886;
	int32_t x368 = INT32_MIN;

    t80 = (((x365==x366)^x367)-x368);

    if (t80 != 2147482762) { NG(); } else { ; }
	
}

void f81(void) {
    	int8_t x369 = 1;
	int16_t x370 = -1;
	int64_t x371 = 3103LL;
	int8_t x372 = 0;

    t81 = (((x369==x370)^x371)-x372);

    if (t81 != 3103LL) { NG(); } else { ; }
	
}

void f82(void) {
    	int16_t x373 = -1;
	int64_t x374 = -4048LL;
	int16_t x375 = INT16_MIN;
	volatile uint32_t x376 = 8871593U;
	uint32_t t82 = 3778148U;

    t82 = (((x373==x374)^x375)-x376);

    if (t82 != 4286062935U) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x377 = INT8_MIN;
	int8_t x378 = -1;

    t83 = (((x377==x378)^x379)-x380);

    if (t83 != -98303) { NG(); } else { ; }
	
}

void f84(void) {
    	static int16_t x381 = INT16_MIN;
	int64_t x384 = -1LL;
	int64_t t84 = -512400728654143146LL;

    t84 = (((x381==x382)^x383)-x384);

    if (t84 != -2147483647LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x385 = 38U;
	int16_t x386 = -46;
	int8_t x387 = INT8_MAX;
	static volatile int16_t x388 = INT16_MIN;
	volatile int32_t t85 = 80339;

    t85 = (((x385==x386)^x387)-x388);

    if (t85 != 32895) { NG(); } else { ; }
	
}

void f86(void) {
    	int32_t x389 = INT32_MAX;
	static int32_t x390 = INT32_MAX;
	int16_t x391 = INT16_MIN;
	static volatile uint64_t t86 = 3LLU;

    t86 = (((x389==x390)^x391)-x392);

    if (t86 != 18423909022336021217LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x394 = 14;
	uint8_t x395 = 5U;
	int8_t x396 = -1;
	volatile int32_t t87 = -14;

    t87 = (((x393==x394)^x395)-x396);

    if (t87 != 6) { NG(); } else { ; }
	
}

void f88(void) {
    	uint8_t x397 = UINT8_MAX;
	int64_t x398 = INT64_MIN;
	volatile uint64_t t88 = 639372441564985730LLU;

    t88 = (((x397==x398)^x399)-x400);

    if (t88 != 9562672LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	static uint64_t x405 = UINT64_MAX;
	int32_t x406 = INT32_MAX;
	volatile int8_t x407 = INT8_MIN;
	static int64_t t89 = 10591LL;

    t89 = (((x405==x406)^x407)-x408);

    if (t89 != -127LL) { NG(); } else { ; }
	
}

void f90(void) {
    	static int64_t x413 = INT64_MIN;
	int8_t x414 = -1;
	uint16_t x416 = 1U;
	uint32_t t90 = 1382U;

    t90 = (((x413==x414)^x415)-x416);

    if (t90 != 2U) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x421 = INT8_MAX;
	static volatile uint64_t x422 = 2449409152790LLU;
	uint64_t x424 = UINT64_MAX;
	uint64_t t91 = 492648332971LLU;

    t91 = (((x421==x422)^x423)-x424);

    if (t91 != 2155LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int32_t x425 = -1;
	int64_t x426 = -41163785LL;
	uint8_t x427 = 0U;
	int32_t t92 = -1;

    t92 = (((x425==x426)^x427)-x428);

    if (t92 != -32767) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x429 = INT64_MIN;
	volatile int16_t x431 = INT16_MIN;
	int32_t t93 = -2;

    t93 = (((x429==x430)^x431)-x432);

    if (t93 != -32792) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x437 = INT16_MAX;
	uint64_t x438 = UINT64_MAX;
	int64_t x440 = 8127970LL;
	volatile int64_t t94 = 3209090443LL;

    t94 = (((x437==x438)^x439)-x440);

    if (t94 != 9223372036846647837LL) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x441 = 17323182870303472LLU;
	static int8_t x442 = INT8_MIN;
	static int32_t x444 = INT32_MAX;
	int64_t t95 = -5736LL;

    t95 = (((x441==x442)^x443)-x444);

    if (t95 != -2147483673LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint8_t x445 = 78U;
	static int8_t x446 = -55;
	uint32_t x447 = 3828U;
	int8_t x448 = INT8_MAX;

    t96 = (((x445==x446)^x447)-x448);

    if (t96 != 3701U) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x449 = INT32_MIN;
	static uint32_t x450 = 191U;
	static uint64_t x451 = 1192509698224207206LLU;
	static uint32_t x452 = 2U;

    t97 = (((x449==x450)^x451)-x452);

    if (t97 != 1192509698224207204LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x453 = -1;
	volatile int8_t x454 = -1;
	int16_t x456 = -3;
	volatile uint32_t t98 = 252189579U;

    t98 = (((x453==x454)^x455)-x456);

    if (t98 != 222U) { NG(); } else { ; }
	
}

void f99(void) {
    	volatile uint8_t x457 = 55U;
	volatile uint16_t x458 = 30476U;
	int16_t x459 = 2;
	uint64_t x460 = UINT64_MAX;
	volatile uint64_t t99 = 24543723LLU;

    t99 = (((x457==x458)^x459)-x460);

    if (t99 != 3LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint16_t x462 = 30U;
	static volatile int8_t x463 = INT8_MIN;
	int16_t x464 = 0;
	static int32_t t100 = -332;

    t100 = (((x461==x462)^x463)-x464);

    if (t100 != -128) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x469 = 1U;
	uint64_t x470 = 15LLU;
	int64_t x471 = INT64_MAX;
	uint8_t x472 = 57U;
	static int64_t t101 = -513944206952LL;

    t101 = (((x469==x470)^x471)-x472);

    if (t101 != 9223372036854775750LL) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x473 = 15;
	int32_t x474 = INT32_MIN;
	int32_t x475 = -1;
	volatile uint32_t t102 = 31060355U;

    t102 = (((x473==x474)^x475)-x476);

    if (t102 != 4294967281U) { NG(); } else { ; }
	
}

void f103(void) {
    	static int8_t x477 = -2;
	volatile int16_t x478 = INT16_MIN;
	int16_t x479 = INT16_MIN;
	volatile int16_t x480 = -195;
	static volatile int32_t t103 = -125;

    t103 = (((x477==x478)^x479)-x480);

    if (t103 != -32573) { NG(); } else { ; }
	
}

void f104(void) {
    	int64_t x481 = INT64_MIN;
	volatile int64_t x483 = INT64_MIN;
	int64_t t104 = 11043995LL;

    t104 = (((x481==x482)^x483)-x484);

    if (t104 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x485 = INT16_MAX;
	int8_t x486 = -1;
	int16_t x487 = INT16_MAX;
	volatile int64_t x488 = INT64_MAX;
	int64_t t105 = -2138357418LL;

    t105 = (((x485==x486)^x487)-x488);

    if (t105 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x489 = -1;
	volatile int32_t x490 = INT32_MAX;
	uint64_t x491 = 33LLU;
	static int8_t x492 = INT8_MAX;
	static uint64_t t106 = 4135354776372796LLU;

    t106 = (((x489==x490)^x491)-x492);

    if (t106 != 18446744073709551522LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	int32_t x493 = INT32_MAX;
	volatile int16_t x494 = -1;
	static volatile int64_t x495 = INT64_MAX;

    t107 = (((x493==x494)^x495)-x496);

    if (t107 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x501 = -1;
	int32_t x503 = -128554;
	volatile int64_t x504 = 864LL;

    t108 = (((x501==x502)^x503)-x504);

    if (t108 != -129418LL) { NG(); } else { ; }
	
}

void f109(void) {
    	uint16_t x505 = 8U;
	uint64_t x507 = 107318257LLU;
	int8_t x508 = 2;
	uint64_t t109 = 303LLU;

    t109 = (((x505==x506)^x507)-x508);

    if (t109 != 107318255LLU) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x511 = 342U;

    t110 = (((x509==x510)^x511)-x512);

    if (t110 != 343) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x514 = INT64_MIN;
	static int32_t x515 = INT32_MIN;

    t111 = (((x513==x514)^x515)-x516);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint32_t x518 = UINT32_MAX;
	int32_t x519 = INT32_MAX;
	static int64_t x520 = INT64_MAX;
	int64_t t112 = -1323657516545LL;

    t112 = (((x517==x518)^x519)-x520);

    if (t112 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x522 = 6204180926LL;
	static uint64_t x523 = UINT64_MAX;
	int16_t x524 = INT16_MAX;
	static uint64_t t113 = 1235102236504LLU;

    t113 = (((x521==x522)^x523)-x524);

    if (t113 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x525 = -7885047605066LL;
	static uint32_t x526 = UINT32_MAX;
	static volatile uint8_t x527 = 35U;
	int16_t x528 = 5;
	volatile int32_t t114 = -7;

    t114 = (((x525==x526)^x527)-x528);

    if (t114 != 30) { NG(); } else { ; }
	
}

void f115(void) {
    	uint64_t x529 = 4255LLU;
	uint16_t x530 = 2389U;
	int32_t x532 = -618;
	uint64_t t115 = 71407LLU;

    t115 = (((x529==x530)^x531)-x532);

    if (t115 != 617LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int16_t x537 = 1;
	uint64_t x540 = 493759760LLU;

    t116 = (((x537==x538)^x539)-x540);

    if (t116 != 18446744073215759088LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x541 = 0;
	int64_t x542 = -667254115421LL;
	volatile int64_t x543 = INT64_MIN;
	uint64_t t117 = 119740572646385158LLU;

    t117 = (((x541==x542)^x543)-x544);

    if (t117 != 9223347993063596364LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int32_t x545 = INT32_MIN;
	int16_t x548 = INT16_MIN;

    t118 = (((x545==x546)^x547)-x548);

    if (t118 != 98303) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint64_t x549 = 805635077LLU;
	int16_t x552 = INT16_MIN;
	volatile int32_t t119 = -588787;

    t119 = (((x549==x550)^x551)-x552);

    if (t119 != -587035783) { NG(); } else { ; }
	
}

void f120(void) {
    	uint16_t x553 = 7908U;
	volatile int64_t x555 = INT64_MIN;
	int64_t t120 = 18261827LL;

    t120 = (((x553==x554)^x555)-x556);

    if (t120 != 0LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x557 = 938;
	int8_t x558 = 0;
	static uint64_t x560 = UINT64_MAX;
	volatile uint64_t t121 = 354786LLU;

    t121 = (((x557==x558)^x559)-x560);

    if (t121 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x561 = 15;
	volatile int8_t x562 = INT8_MIN;
	uint32_t x563 = 53931U;
	static uint64_t x564 = 0LLU;

    t122 = (((x561==x562)^x563)-x564);

    if (t122 != 53931LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x565 = 33962;
	uint32_t x567 = 86303U;

    t123 = (((x565==x566)^x567)-x568);

    if (t123 != 86431U) { NG(); } else { ; }
	
}

void f124(void) {
    	static volatile int32_t x569 = INT32_MIN;
	int64_t x570 = INT64_MIN;
	static int8_t x572 = INT8_MAX;
	int32_t t124 = 1;

    t124 = (((x569==x570)^x571)-x572);

    if (t124 != -129) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x577 = UINT8_MAX;
	int64_t x578 = INT64_MIN;
	volatile uint32_t x579 = 3763123U;
	int16_t x580 = -26;
	volatile uint32_t t125 = 236038305U;

    t125 = (((x577==x578)^x579)-x580);

    if (t125 != 3763149U) { NG(); } else { ; }
	
}

void f126(void) {
    	uint32_t x581 = 1U;
	uint16_t x582 = 2342U;
	int32_t x583 = INT32_MIN;
	int64_t x584 = INT64_MIN;
	int64_t t126 = 5478779LL;

    t126 = (((x581==x582)^x583)-x584);

    if (t126 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int8_t x585 = INT8_MIN;
	volatile uint64_t x586 = 3344735630767LLU;
	static int8_t x587 = -1;
	volatile int32_t t127 = -1344595;

    t127 = (((x585==x586)^x587)-x588);

    if (t127 != -99) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x589 = 2U;
	int32_t x590 = INT32_MIN;
	static volatile uint32_t x591 = 127U;
	uint16_t x592 = 1688U;
	uint32_t t128 = 0U;

    t128 = (((x589==x590)^x591)-x592);

    if (t128 != 4294965735U) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x597 = 118;
	uint8_t x598 = 21U;
	volatile int64_t x599 = -86913196LL;
	volatile int8_t x600 = 36;
	int64_t t129 = 914031773039251743LL;

    t129 = (((x597==x598)^x599)-x600);

    if (t129 != -86913232LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int32_t x601 = INT32_MIN;
	uint32_t x602 = 13767U;
	uint64_t x604 = 9213261408816170LLU;
	volatile uint64_t t130 = 227LLU;

    t130 = (((x601==x602)^x603)-x604);

    if (t130 != 18437530812300735445LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x605 = 8059LLU;
	uint16_t x606 = 255U;
	static uint8_t x607 = UINT8_MAX;
	int64_t x608 = -1LL;
	volatile int64_t t131 = 77219LL;

    t131 = (((x605==x606)^x607)-x608);

    if (t131 != 256LL) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x610 = 35414372566LLU;
	int8_t x611 = -2;
	int32_t x612 = INT32_MIN;
	static volatile int32_t t132 = -353;

    t132 = (((x609==x610)^x611)-x612);

    if (t132 != 2147483646) { NG(); } else { ; }
	
}

void f133(void) {
    	static volatile int8_t x613 = INT8_MIN;
	static int8_t x614 = INT8_MAX;
	static int8_t x616 = INT8_MAX;
	int32_t t133 = -1736;

    t133 = (((x613==x614)^x615)-x616);

    if (t133 != -128) { NG(); } else { ; }
	
}

void f134(void) {
    	static int64_t x617 = INT64_MAX;
	int64_t x618 = -1599606498275LL;
	uint32_t x619 = UINT32_MAX;
	volatile uint16_t x620 = 0U;
	static uint32_t t134 = UINT32_MAX;

    t134 = (((x617==x618)^x619)-x620);

    if (t134 != UINT32_MAX) { NG(); } else { ; }
	
}

void f135(void) {
    	uint8_t x621 = 1U;
	static uint64_t x622 = UINT64_MAX;
	int16_t x624 = -62;

    t135 = (((x621==x622)^x623)-x624);

    if (t135 != 317) { NG(); } else { ; }
	
}

void f136(void) {
    	static int16_t x626 = -1;
	uint16_t x627 = UINT16_MAX;
	int8_t x628 = INT8_MIN;
	int32_t t136 = 7;

    t136 = (((x625==x626)^x627)-x628);

    if (t136 != 65663) { NG(); } else { ; }
	
}

void f137(void) {
    	static uint16_t x630 = 1U;
	int16_t x631 = INT16_MIN;
	int32_t x632 = -1;
	int32_t t137 = -973355;

    t137 = (((x629==x630)^x631)-x632);

    if (t137 != -32767) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x634 = -6903914728230LL;
	int8_t x635 = INT8_MIN;

    t138 = (((x633==x634)^x635)-x636);

    if (t138 != -150) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int16_t x637 = -1;
	uint32_t x638 = UINT32_MAX;
	static int16_t x640 = 1;
	volatile int32_t t139 = -10843;

    t139 = (((x637==x638)^x639)-x640);

    if (t139 != 253) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint32_t x641 = 899991126U;
	uint8_t x642 = 7U;
	uint64_t x643 = UINT64_MAX;
	int32_t x644 = INT32_MAX;
	uint64_t t140 = 28LLU;

    t140 = (((x641==x642)^x643)-x644);

    if (t140 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint32_t x645 = UINT32_MAX;
	uint32_t x646 = 7209U;
	volatile int32_t x647 = INT32_MIN;
	uint64_t t141 = 104006186LLU;

    t141 = (((x645==x646)^x647)-x648);

    if (t141 != 18446739561571843799LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x649 = INT16_MAX;
	static int32_t x650 = -15;
	static volatile int32_t t142 = 757;

    t142 = (((x649==x650)^x651)-x652);

    if (t142 != 136) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x653 = INT16_MAX;
	int32_t x654 = INT32_MIN;
	uint32_t x655 = UINT32_MAX;
	volatile int64_t t143 = 165113842750113LL;

    t143 = (((x653==x654)^x655)-x656);

    if (t143 != 17159455859790LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x657 = -1;
	uint8_t x658 = 6U;
	static uint64_t x659 = UINT64_MAX;
	uint64_t x660 = 269491306LLU;
	volatile uint64_t t144 = 508186566487110849LLU;

    t144 = (((x657==x658)^x659)-x660);

    if (t144 != 18446744073440060309LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static int32_t x661 = -1;
	uint16_t x663 = UINT16_MAX;
	int8_t x664 = INT8_MIN;
	int32_t t145 = -18957;

    t145 = (((x661==x662)^x663)-x664);

    if (t145 != 65663) { NG(); } else { ; }
	
}

void f146(void) {
    	static int16_t x665 = 0;
	static int64_t x666 = INT64_MAX;

    t146 = (((x665==x666)^x667)-x668);

    if (t146 != 2147481983) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x673 = -1LL;
	int16_t x674 = INT16_MIN;
	static int32_t x675 = INT32_MAX;
	int32_t t147 = -202829228;

    t147 = (((x673==x674)^x675)-x676);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x677 = 64367LLU;
	volatile int32_t x678 = -212;
	int8_t x679 = -1;
	int32_t t148 = -12545;

    t148 = (((x677==x678)^x679)-x680);

    if (t148 != 51517) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x685 = -1;
	volatile int16_t x686 = INT16_MIN;
	int16_t x687 = -98;
	volatile int32_t t149 = 555;

    t149 = (((x685==x686)^x687)-x688);

    if (t149 != 32670) { NG(); } else { ; }
	
}

void f150(void) {
    	static volatile int8_t x692 = INT8_MIN;
	int32_t t150 = -6997;

    t150 = (((x689==x690)^x691)-x692);

    if (t150 != -10829117) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x697 = 8580286U;
	volatile uint16_t x698 = 1694U;
	static uint8_t x699 = UINT8_MAX;
	static int64_t x700 = 271602702792534LL;
	static int64_t t151 = 6234605356210868LL;

    t151 = (((x697==x698)^x699)-x700);

    if (t151 != -271602702792279LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x701 = INT32_MIN;
	volatile uint32_t x702 = 1129978U;
	int8_t x703 = -1;
	volatile int16_t x704 = INT16_MIN;
	static int32_t t152 = -4605;

    t152 = (((x701==x702)^x703)-x704);

    if (t152 != 32767) { NG(); } else { ; }
	
}

void f153(void) {
    	static int8_t x705 = -4;
	uint8_t x706 = UINT8_MAX;
	volatile int8_t x707 = 22;
	int32_t t153 = 39;

    t153 = (((x705==x706)^x707)-x708);

    if (t153 != 23) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x709 = -1;
	int64_t x710 = INT64_MAX;
	static int64_t x712 = 232793248960212895LL;
	static volatile int64_t t154 = -27346984482310851LL;

    t154 = (((x709==x710)^x711)-x712);

    if (t154 != -232793248960212729LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x714 = -1;
	uint16_t x715 = 29U;

    t155 = (((x713==x714)^x715)-x716);

    if (t155 != -32739) { NG(); } else { ; }
	
}

void f156(void) {
    	static volatile int32_t x717 = -329;
	static int64_t x718 = INT64_MAX;
	int64_t x719 = -1LL;
	int8_t x720 = -1;
	static int64_t t156 = 15399111662426LL;

    t156 = (((x717==x718)^x719)-x720);

    if (t156 != 0LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int8_t x722 = INT8_MIN;
	static uint64_t x723 = 123927316187730LLU;
	int64_t x724 = INT64_MAX;
	volatile uint64_t t157 = 9563LLU;

    t157 = (((x721==x722)^x723)-x724);

    if (t157 != 9223495964170963539LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x726 = -1;
	int8_t x727 = 30;
	uint16_t x728 = UINT16_MAX;
	int32_t t158 = -13;

    t158 = (((x725==x726)^x727)-x728);

    if (t158 != -65505) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int8_t x729 = 0;
	uint32_t x731 = 57935U;
	volatile int16_t x732 = INT16_MIN;

    t159 = (((x729==x730)^x731)-x732);

    if (t159 != 90703U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x734 = UINT16_MAX;
	uint64_t x735 = 73LLU;
	uint16_t x736 = UINT16_MAX;
	static uint64_t t160 = 2LLU;

    t160 = (((x733==x734)^x735)-x736);

    if (t160 != 18446744073709486153LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x737 = INT8_MAX;
	static uint64_t x738 = 1LLU;
	int64_t x740 = -338999216380LL;
	volatile int64_t t161 = -97057839LL;

    t161 = (((x737==x738)^x739)-x740);

    if (t161 != 338999216383LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int16_t x741 = INT16_MAX;
	int64_t x742 = 1070861953LL;
	static volatile int64_t t162 = 2539307113891321LL;

    t162 = (((x741==x742)^x743)-x744);

    if (t162 != 30102LL) { NG(); } else { ; }
	
}

void f163(void) {
    	uint16_t x745 = UINT16_MAX;
	int16_t x746 = INT16_MIN;
	volatile int64_t x747 = -1LL;
	volatile int64_t t163 = -265739129279416857LL;

    t163 = (((x745==x746)^x747)-x748);

    if (t163 != -2147483648LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static int32_t x750 = INT32_MAX;
	volatile int16_t x751 = -1;
	int8_t x752 = INT8_MIN;
	int32_t t164 = 1;

    t164 = (((x749==x750)^x751)-x752);

    if (t164 != 127) { NG(); } else { ; }
	
}

void f165(void) {
    	int32_t x754 = -545;
	uint32_t x755 = UINT32_MAX;
	static int8_t x756 = -1;
	static volatile uint32_t t165 = 111184631U;

    t165 = (((x753==x754)^x755)-x756);

    if (t165 != 0U) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x762 = 3888479;
	int32_t x763 = INT32_MIN;
	int8_t x764 = -2;

    t166 = (((x761==x762)^x763)-x764);

    if (t166 != -2147483646) { NG(); } else { ; }
	
}

void f167(void) {
    	int8_t x767 = 40;
	uint16_t x768 = UINT16_MAX;

    t167 = (((x765==x766)^x767)-x768);

    if (t167 != -65495) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile int32_t x769 = -1;
	static int8_t x770 = -1;
	static uint8_t x771 = 31U;
	volatile uint16_t x772 = UINT16_MAX;
	int32_t t168 = 525;

    t168 = (((x769==x770)^x771)-x772);

    if (t168 != -65505) { NG(); } else { ; }
	
}

void f169(void) {
    	volatile uint16_t x773 = 846U;
	int64_t x774 = INT64_MIN;
	volatile int8_t x775 = INT8_MIN;
	static int8_t x776 = -1;
	int32_t t169 = -4;

    t169 = (((x773==x774)^x775)-x776);

    if (t169 != -127) { NG(); } else { ; }
	
}

void f170(void) {
    	uint16_t x778 = 203U;
	static int8_t x779 = -1;
	volatile int32_t t170 = 0;

    t170 = (((x777==x778)^x779)-x780);

    if (t170 != -4482) { NG(); } else { ; }
	
}

void f171(void) {
    	static int32_t x781 = INT32_MIN;
	int16_t x783 = INT16_MIN;
	int64_t t171 = -6225854618603954LL;

    t171 = (((x781==x782)^x783)-x784);

    if (t171 != -244052407LL) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x786 = -1;
	volatile uint32_t t172 = 41745011U;

    t172 = (((x785==x786)^x787)-x788);

    if (t172 != 15U) { NG(); } else { ; }
	
}

void f173(void) {
    	static int32_t x790 = 0;
	static uint64_t x791 = 23034036974LLU;
	static int8_t x792 = -1;
	volatile uint64_t t173 = 3669506503LLU;

    t173 = (((x789==x790)^x791)-x792);

    if (t173 != 23034036975LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int8_t x793 = INT8_MIN;
	int64_t x794 = -147006563203617LL;
	static int32_t x795 = INT32_MIN;
	volatile int32_t t174 = -14421650;

    t174 = (((x793==x794)^x795)-x796);

    if (t174 != -2147483647) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x797 = INT8_MIN;
	volatile int8_t x798 = -1;
	volatile uint32_t x799 = UINT32_MAX;
	volatile uint32_t t175 = 2043083U;

    t175 = (((x797==x798)^x799)-x800);

    if (t175 != 11817U) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x801 = -1;
	uint16_t x802 = 258U;
	uint64_t x803 = 3LLU;
	int8_t x804 = INT8_MIN;

    t176 = (((x801==x802)^x803)-x804);

    if (t176 != 131LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x806 = UINT16_MAX;
	int8_t x807 = INT8_MAX;
	int32_t x808 = -52168430;
	static int32_t t177 = 5249;

    t177 = (((x805==x806)^x807)-x808);

    if (t177 != 52168557) { NG(); } else { ; }
	
}

void f178(void) {
    	uint32_t x809 = UINT32_MAX;
	volatile int8_t x810 = -1;
	int16_t x811 = -1;
	volatile int8_t x812 = INT8_MAX;

    t178 = (((x809==x810)^x811)-x812);

    if (t178 != -129) { NG(); } else { ; }
	
}

void f179(void) {
    	static int32_t x814 = 19;
	static uint32_t x815 = 417959531U;
	static int8_t x816 = -1;

    t179 = (((x813==x814)^x815)-x816);

    if (t179 != 417959532U) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x821 = -186601232;
	static volatile int32_t x822 = INT32_MAX;
	static int8_t x823 = INT8_MIN;
	static int64_t x824 = 64134194LL;
	volatile int64_t t180 = 1811198LL;

    t180 = (((x821==x822)^x823)-x824);

    if (t180 != -64134322LL) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint16_t x827 = 44U;
	int32_t x828 = 2;
	int32_t t181 = 241821;

    t181 = (((x825==x826)^x827)-x828);

    if (t181 != 42) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x831 = -312488607LL;
	int32_t x832 = INT32_MIN;
	volatile int64_t t182 = -22217772612LL;

    t182 = (((x829==x830)^x831)-x832);

    if (t182 != 1834995041LL) { NG(); } else { ; }
	
}

void f183(void) {
    	static int32_t x833 = -1;
	int16_t x834 = -1;
	static int32_t x835 = INT32_MIN;
	int32_t t183 = -34302;

    t183 = (((x833==x834)^x835)-x836);

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint64_t x837 = UINT64_MAX;
	static uint64_t x838 = 2530500LLU;
	int16_t x839 = 15444;
	static int16_t x840 = INT16_MIN;
	volatile int32_t t184 = -1436925;

    t184 = (((x837==x838)^x839)-x840);

    if (t184 != 48212) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x841 = 1491253LL;
	int16_t x843 = -1;
	volatile int32_t t185 = -3;

    t185 = (((x841==x842)^x843)-x844);

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	static int64_t x845 = 54706015LL;
	int8_t x846 = -1;
	uint32_t x847 = UINT32_MAX;
	uint8_t x848 = 26U;
	uint32_t t186 = 1869424U;

    t186 = (((x845==x846)^x847)-x848);

    if (t186 != 4294967269U) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x849 = INT16_MIN;
	int8_t x850 = -1;
	int64_t x851 = 3677447668LL;

    t187 = (((x849==x850)^x851)-x852);

    if (t187 != 3677447669LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x853 = INT64_MIN;
	uint8_t x854 = 6U;
	int8_t x855 = 34;
	volatile int8_t x856 = INT8_MAX;
	int32_t t188 = 2984;

    t188 = (((x853==x854)^x855)-x856);

    if (t188 != -93) { NG(); } else { ; }
	
}

void f189(void) {
    	static uint64_t x857 = 226LLU;
	int8_t x858 = -1;
	static volatile int8_t x859 = -1;
	int32_t x860 = -1;
	int32_t t189 = 864;

    t189 = (((x857==x858)^x859)-x860);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile uint32_t x861 = UINT32_MAX;
	int16_t x863 = INT16_MAX;
	int16_t x864 = -9610;
	int32_t t190 = 9733;

    t190 = (((x861==x862)^x863)-x864);

    if (t190 != 42377) { NG(); } else { ; }
	
}

void f191(void) {
    	static volatile int32_t x865 = INT32_MAX;
	int64_t x866 = 40066218LL;
	int16_t x867 = -16;
	int32_t x868 = INT32_MIN;

    t191 = (((x865==x866)^x867)-x868);

    if (t191 != 2147483632) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int32_t x874 = INT32_MAX;
	uint32_t x875 = UINT32_MAX;
	uint32_t t192 = 384100U;

    t192 = (((x873==x874)^x875)-x876);

    if (t192 != 4294967265U) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x877 = INT64_MIN;
	static uint16_t x878 = UINT16_MAX;
	static int32_t x879 = -1;
	int32_t x880 = INT32_MIN;

    t193 = (((x877==x878)^x879)-x880);

    if (t193 != INT32_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	static int16_t x882 = 13336;
	int16_t x884 = INT16_MAX;

    t194 = (((x881==x882)^x883)-x884);

    if (t194 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x886 = -1;
	uint64_t x887 = 32389LLU;
	int64_t x888 = INT64_MIN;

    t195 = (((x885==x886)^x887)-x888);

    if (t195 != 9223372036854808197LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static volatile int8_t x889 = -1;
	int16_t x890 = 2439;
	uint64_t x892 = 635408033616LLU;
	uint64_t t196 = 1080LLU;

    t196 = (((x889==x890)^x891)-x892);

    if (t196 != 18446743438301517999LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int16_t x893 = INT16_MAX;
	static int32_t x894 = INT32_MIN;
	int32_t x895 = -1;
	uint16_t x896 = UINT16_MAX;
	int32_t t197 = -290645566;

    t197 = (((x893==x894)^x895)-x896);

    if (t197 != -65536) { NG(); } else { ; }
	
}

void f198(void) {
    	uint8_t x897 = 10U;
	static int16_t x899 = INT16_MAX;
	volatile uint64_t x900 = UINT64_MAX;
	volatile uint64_t t198 = 31334169424185LLU;

    t198 = (((x897==x898)^x899)-x900);

    if (t198 != 32768LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x901 = INT8_MIN;
	static int8_t x903 = -3;
	volatile int32_t t199 = 3;

    t199 = (((x901==x902)^x903)-x904);

    if (t199 != 32765) { NG(); } else { ; }
	
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

