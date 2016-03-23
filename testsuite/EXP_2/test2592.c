
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

volatile int16_t x1 = INT16_MAX;
int8_t x3 = -1;
int64_t x7 = -1LL;
int64_t x8 = INT64_MAX;
volatile int64_t t1 = 250775341LL;
uint64_t x11 = 33323618186887438LLU;
int32_t x20 = INT32_MAX;
volatile int64_t t4 = 28LL;
int16_t x23 = 10265;
int64_t t5 = -2423746579071493272LL;
int64_t x37 = INT64_MAX;
uint32_t x49 = 1983813U;
uint32_t x54 = 43054085U;
volatile int16_t x56 = -1;
int64_t x60 = INT64_MIN;
int8_t x62 = 3;
uint8_t x66 = 116U;
volatile uint16_t x79 = UINT16_MAX;
volatile int64_t x84 = 54804598LL;
int8_t x87 = INT8_MIN;
int64_t x97 = INT64_MIN;
volatile int16_t x98 = 6;
volatile int8_t x102 = INT8_MIN;
int32_t x104 = INT32_MIN;
static int64_t x108 = INT64_MAX;
uint16_t x112 = 1U;
static uint64_t x121 = 57585506964319495LLU;
static int16_t x123 = INT16_MIN;
volatile uint32_t x129 = UINT32_MAX;
static volatile uint32_t t28 = 14425U;
int32_t x141 = INT32_MIN;
int16_t x145 = INT16_MAX;
static volatile int32_t x162 = INT32_MIN;
uint32_t x163 = 2030U;
uint32_t t35 = 31U;
int64_t x171 = INT64_MIN;
volatile int64_t t37 = -22073LL;
int64_t x176 = 1066877464762869854LL;
int64_t t38 = -523917LL;
int64_t x179 = -1410532095920180LL;
static volatile uint64_t x180 = 102002575LLU;
volatile int32_t x192 = INT32_MIN;
int64_t t42 = 34805037487572104LL;
static int8_t x195 = INT8_MIN;
int64_t t43 = -217150LL;
volatile int8_t x205 = -1;
volatile int32_t x212 = 10963;
int16_t x214 = -1;
int64_t t47 = -61711718383LL;
volatile int32_t t48 = 26299;
volatile int8_t x223 = 1;
uint16_t x224 = 58U;
uint16_t x229 = UINT16_MAX;
volatile uint64_t t50 = 214LLU;
int8_t x234 = -1;
int16_t x240 = INT16_MIN;
int8_t x243 = 21;
uint64_t t53 = 2799LLU;
volatile uint64_t t54 = 22LLU;
int32_t x249 = -503;
int8_t x258 = 15;
uint64_t x260 = 508909556323LLU;
volatile int64_t t58 = 1970644LL;
int32_t x265 = 558740;
int8_t x272 = -1;
volatile int64_t t60 = -73339657403528LL;
int32_t t61 = -6;
uint16_t x283 = 9U;
int32_t x284 = 287062;
uint8_t x286 = 0U;
volatile uint64_t x303 = 4409335683149LLU;
volatile int16_t x305 = 2;
volatile int16_t x310 = -59;
volatile int64_t x311 = 4086LL;
int64_t t69 = 1401277943802602LL;
static volatile uint16_t x320 = 2644U;
volatile uint8_t x323 = 4U;
static uint16_t x324 = 19240U;
int8_t x325 = 2;
volatile int64_t t73 = 2LL;
int64_t x335 = INT64_MIN;
volatile int8_t x339 = INT8_MIN;
static int64_t x341 = 274617889738279987LL;
volatile int64_t t77 = 867816077431096311LL;
int16_t x349 = -1;
int64_t t78 = -29398424111LL;
volatile int32_t x359 = -148192598;
uint32_t x365 = 12U;
int8_t x374 = 5;
uint8_t x375 = 51U;
int8_t x384 = INT8_MAX;
int32_t t87 = -7;
static volatile int16_t x399 = -1;
int16_t x405 = 2;
volatile int8_t x408 = -1;
volatile int32_t x420 = -1;
volatile int64_t t94 = -5769LL;
uint64_t x427 = 3LLU;
uint16_t x428 = 15U;
int8_t x434 = INT8_MAX;
static int64_t x438 = INT64_MIN;
volatile int8_t x446 = INT8_MAX;
volatile int64_t x447 = -752628LL;
static int64_t t100 = -4LL;
int16_t x459 = -1;
int32_t x470 = INT32_MIN;
volatile int32_t x474 = -2518;
static volatile uint16_t x486 = UINT16_MAX;
int16_t x498 = -1;
uint8_t x500 = 86U;
volatile uint64_t t112 = 65218119LLU;
int8_t x501 = -1;
uint64_t x513 = 282746LLU;
static int16_t x516 = INT16_MAX;
static uint32_t x533 = 3285966U;
int64_t x538 = 13284758LL;
int32_t x539 = -2004;
uint64_t t122 = 468549LLU;
volatile int64_t t124 = 3LL;
uint8_t x570 = UINT8_MAX;
uint16_t x578 = UINT16_MAX;
int32_t x579 = INT32_MAX;
uint32_t x583 = 358U;
volatile uint32_t x587 = 149U;
int8_t x588 = 0;
int16_t x592 = INT16_MAX;
uint64_t x593 = 1325575310LLU;
int16_t x595 = INT16_MAX;
volatile int8_t x602 = -3;
int16_t x605 = -1;
static uint32_t x608 = 424U;
static uint32_t t137 = 631525116U;
static volatile uint32_t t139 = 9U;
static int32_t x624 = 12;
int32_t x629 = INT32_MIN;
int16_t x637 = 14;
uint8_t x640 = 9U;
volatile int64_t x642 = -1LL;
volatile uint32_t t146 = 614U;
uint32_t x654 = 61411U;
int64_t x660 = INT64_MAX;
static uint64_t t150 = 7311076LLU;
static int32_t x666 = INT32_MAX;
static int16_t x670 = -1;
uint64_t x683 = 123661056413142234LLU;
uint32_t x690 = 5U;
int64_t t156 = -15289750823574LL;
int32_t x696 = INT32_MAX;
int32_t t157 = -114504;
volatile int8_t x705 = INT8_MAX;
int64_t x718 = INT64_MAX;
static volatile uint8_t x724 = 14U;
int32_t x727 = INT32_MIN;
volatile int32_t x730 = -179149;
uint8_t x732 = UINT8_MAX;
int64_t t167 = -978423LL;
static int8_t x744 = INT8_MIN;
volatile uint64_t t168 = 63067660674667319LLU;
uint32_t x754 = 19U;
int32_t x755 = INT32_MIN;
uint16_t x760 = 0U;
volatile uint32_t t172 = 256948U;
uint8_t x764 = 12U;
int8_t x769 = -1;
int8_t x771 = -1;
static int64_t t175 = 21LL;
volatile uint32_t t176 = 31411U;
volatile int8_t x787 = -1;
uint8_t x791 = UINT8_MAX;
int8_t x792 = INT8_MAX;
volatile int8_t x796 = INT8_MIN;
uint32_t x798 = 1U;
int32_t x801 = -1;
uint64_t x814 = 274276978734113067LLU;
int64_t t186 = 87967LL;
volatile int8_t x833 = INT8_MIN;
int8_t x843 = INT8_MIN;
static uint8_t x844 = UINT8_MAX;
uint16_t x845 = 19U;
uint32_t x847 = 34879591U;
static uint32_t x848 = UINT32_MAX;
uint64_t x857 = 5927815LLU;
static uint64_t x860 = 1339224429873LLU;
volatile int8_t x865 = -1;
int32_t x867 = 7376773;
uint8_t x868 = 5U;
static uint8_t x871 = 1U;
static int32_t t197 = -583334;


void f0(void) {
    	volatile int32_t x2 = INT32_MAX;
	volatile uint8_t x4 = UINT8_MAX;
	int32_t t0 = -413;

    t0 = ((x1/(x2^x3))-x4);

    if (t0 != -255) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x5 = -74037;
	int64_t x6 = -6283827819LL;

    t1 = ((x5/(x6^x7))-x8);

    if (t1 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	volatile int16_t x10 = INT16_MAX;
	volatile uint16_t x12 = UINT16_MAX;
	volatile uint64_t t2 = 2026136LLU;

    t2 = ((x9/(x10^x11))-x12);

    if (t2 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x13 = INT32_MIN;
	uint32_t x14 = 171528U;
	volatile uint16_t x15 = 1605U;
	static int64_t x16 = -1LL;
	volatile int64_t t3 = 181351LL;

    t3 = ((x13/(x14^x15))-x16);

    if (t3 != 12628LL) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint8_t x17 = 6U;
	static int64_t x18 = INT64_MIN;
	uint16_t x19 = UINT16_MAX;

    t4 = ((x17/(x18^x19))-x20);

    if (t4 != -2147483647LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static int16_t x21 = INT16_MAX;
	int8_t x22 = INT8_MIN;
	volatile int64_t x24 = -944LL;

    t5 = ((x21/(x22^x23))-x24);

    if (t5 != 941LL) { NG(); } else { ; }
	
}

void f6(void) {
    	static uint32_t x25 = 2820338U;
	int16_t x26 = 242;
	uint32_t x27 = UINT32_MAX;
	uint64_t x28 = 4842834LLU;
	static volatile uint64_t t6 = 6905083778007396LLU;

    t6 = ((x25/(x26^x27))-x28);

    if (t6 != 18446744073704708782LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint64_t x33 = 57838LLU;
	volatile int64_t x34 = INT64_MIN;
	uint16_t x35 = 1U;
	static uint32_t x36 = 182999U;
	static uint64_t t7 = 14LLU;

    t7 = ((x33/(x34^x35))-x36);

    if (t7 != 18446744073709368617LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int32_t x38 = 1;
	int32_t x39 = INT32_MIN;
	int32_t x40 = INT32_MIN;
	static int64_t t8 = -41938457072401437LL;

    t8 = ((x37/(x38^x39))-x40);

    if (t8 != -2147483650LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x41 = -1;
	static uint16_t x42 = 0U;
	int16_t x43 = -1;
	volatile uint16_t x44 = 150U;
	volatile int32_t t9 = -7;

    t9 = ((x41/(x42^x43))-x44);

    if (t9 != -149) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x45 = -16954142;
	int64_t x46 = -231240LL;
	volatile int16_t x47 = -3;
	int64_t x48 = INT64_MIN;
	static int64_t t10 = 334162494013151LL;

    t10 = ((x45/(x46^x47))-x48);

    if (t10 != 9223372036854775735LL) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x50 = -90;
	int8_t x51 = INT8_MAX;
	static uint32_t x52 = UINT32_MAX;
	uint32_t t11 = 1513U;

    t11 = ((x49/(x50^x51))-x52);

    if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
    	uint16_t x53 = 210U;
	uint32_t x55 = UINT32_MAX;
	static uint32_t t12 = 121U;

    t12 = ((x53/(x54^x55))-x56);

    if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x57 = INT64_MIN;
	int16_t x58 = INT16_MAX;
	uint32_t x59 = 12U;
	static volatile int64_t t13 = 83156326284024LL;

    t13 = ((x57/(x58^x59))-x60);

    if (t13 != 9223090450164595538LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = INT64_MIN;
	int32_t x63 = INT32_MIN;
	int64_t x64 = INT64_MAX;
	int64_t t14 = -179825623059LL;

    t14 = ((x61/(x62^x63))-x64);

    if (t14 != -9223372032559808505LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static volatile int64_t x65 = 3768339436017LL;
	static volatile int64_t x67 = -1LL;
	int8_t x68 = INT8_MIN;
	volatile int64_t t15 = 18LL;

    t15 = ((x65/(x66^x67))-x68);

    if (t15 != -32208029239LL) { NG(); } else { ; }
	
}

void f16(void) {
    	uint64_t x69 = 77379941665528466LLU;
	int16_t x70 = INT16_MIN;
	int64_t x71 = 99673779133616036LL;
	int8_t x72 = INT8_MAX;
	uint64_t t16 = 1616771LLU;

    t16 = ((x69/(x70^x71))-x72);

    if (t16 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x73 = -251204;
	int8_t x74 = INT8_MIN;
	int32_t x75 = INT32_MAX;
	int64_t x76 = INT64_MAX;
	volatile int64_t t17 = -8841394590202LL;

    t17 = ((x73/(x74^x75))-x76);

    if (t17 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f18(void) {
    	uint8_t x77 = UINT8_MAX;
	static uint32_t x78 = 2U;
	int16_t x80 = -3;
	uint32_t t18 = 62578U;

    t18 = ((x77/(x78^x79))-x80);

    if (t18 != 3U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x81 = UINT32_MAX;
	volatile uint16_t x82 = 3387U;
	int16_t x83 = 1;
	int64_t t19 = -15827203153131424LL;

    t19 = ((x81/(x82^x83))-x84);

    if (t19 != -53536150LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int32_t x85 = INT32_MAX;
	int64_t x86 = -1LL;
	int16_t x88 = -1;
	volatile int64_t t20 = 12758335LL;

    t20 = ((x85/(x86^x87))-x88);

    if (t20 != 16909321LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x99 = 28033U;
	int32_t x100 = INT32_MIN;
	int64_t t21 = -2745208127LL;

    t21 = ((x97/(x98^x99))-x100);

    if (t21 != -328945819164762LL) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint32_t x101 = UINT32_MAX;
	int64_t x103 = INT64_MIN;
	int64_t t22 = -14881437557898LL;

    t22 = ((x101/(x102^x103))-x104);

    if (t22 != 2147483648LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int32_t x105 = -1;
	static volatile uint16_t x106 = 20505U;
	int64_t x107 = INT64_MIN;
	static int64_t t23 = -1LL;

    t23 = ((x105/(x106^x107))-x108);

    if (t23 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int8_t x109 = INT8_MIN;
	uint16_t x110 = UINT16_MAX;
	int8_t x111 = 9;
	static int32_t t24 = 1;

    t24 = ((x109/(x110^x111))-x112);

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x113 = INT32_MIN;
	int8_t x114 = -1;
	int16_t x115 = INT16_MIN;
	int16_t x116 = -4048;
	volatile int32_t t25 = 892154;

    t25 = ((x113/(x114^x115))-x116);

    if (t25 != -61490) { NG(); } else { ; }
	
}

void f26(void) {
    	int8_t x117 = 2;
	uint64_t x118 = 1516483049LLU;
	int64_t x119 = INT64_MIN;
	int8_t x120 = INT8_MAX;
	volatile uint64_t t26 = 33930104646LLU;

    t26 = ((x117/(x118^x119))-x120);

    if (t26 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int16_t x122 = 7;
	static uint8_t x124 = 17U;
	static uint64_t t27 = 20974812035164LLU;

    t27 = ((x121/(x122^x123))-x124);

    if (t27 != 18446744073709551599LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x130 = INT32_MIN;
	int8_t x131 = INT8_MIN;
	int8_t x132 = 1;

    t28 = ((x129/(x130^x131))-x132);

    if (t28 != 1U) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x133 = INT8_MIN;
	static int32_t x134 = INT32_MAX;
	int16_t x135 = INT16_MIN;
	uint64_t x136 = UINT64_MAX;
	uint64_t t29 = 19938793LLU;

    t29 = ((x133/(x134^x135))-x136);

    if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x137 = 36U;
	int32_t x138 = INT32_MIN;
	int32_t x139 = -41;
	volatile uint16_t x140 = UINT16_MAX;
	int32_t t30 = 60;

    t30 = ((x137/(x138^x139))-x140);

    if (t30 != -65535) { NG(); } else { ; }
	
}

void f31(void) {
    	int32_t x142 = -1;
	volatile int32_t x143 = INT32_MIN;
	int16_t x144 = -61;
	int32_t t31 = -10;

    t31 = ((x141/(x142^x143))-x144);

    if (t31 != 60) { NG(); } else { ; }
	
}

void f32(void) {
    	int32_t x146 = INT32_MIN;
	int16_t x147 = 973;
	static uint32_t x148 = 5U;
	static uint32_t t32 = 146895U;

    t32 = ((x145/(x146^x147))-x148);

    if (t32 != 4294967291U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x149 = 2647U;
	int16_t x150 = -1;
	uint8_t x151 = UINT8_MAX;
	int16_t x152 = -1;
	uint32_t t33 = 1828U;

    t33 = ((x149/(x150^x151))-x152);

    if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint16_t x157 = 1868U;
	int16_t x158 = 7;
	uint64_t x159 = UINT64_MAX;
	int8_t x160 = INT8_MIN;
	uint64_t t34 = 31228029020829979LLU;

    t34 = ((x157/(x158^x159))-x160);

    if (t34 != 128LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x161 = 126U;
	uint8_t x164 = 5U;

    t35 = ((x161/(x162^x163))-x164);

    if (t35 != 4294967291U) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x165 = 23;
	uint32_t x166 = 210033U;
	int16_t x167 = -1;
	static uint64_t x168 = UINT64_MAX;
	volatile uint64_t t36 = 12LLU;

    t36 = ((x165/(x166^x167))-x168);

    if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int64_t x169 = -7074246LL;
	uint16_t x170 = 4615U;
	static uint16_t x172 = 26U;

    t37 = ((x169/(x170^x171))-x172);

    if (t37 != -26LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x173 = -3;
	volatile uint8_t x174 = 26U;
	int32_t x175 = INT32_MAX;

    t38 = ((x173/(x174^x175))-x176);

    if (t38 != -1066877464762869854LL) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x177 = 268LLU;
	uint64_t x178 = 916LLU;
	static volatile uint64_t t39 = 499452348729018344LLU;

    t39 = ((x177/(x178^x179))-x180);

    if (t39 != 18446744073607549041LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile uint16_t x181 = 1485U;
	static int32_t x182 = -4258921;
	int16_t x183 = INT16_MIN;
	int32_t x184 = 4;
	volatile int32_t t40 = -436440;

    t40 = ((x181/(x182^x183))-x184);

    if (t40 != -4) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x185 = -1;
	static uint32_t x186 = 0U;
	uint64_t x187 = 2292684LLU;
	int32_t x188 = INT32_MIN;
	uint64_t t41 = 552159088044143LLU;

    t41 = ((x185/(x186^x187))-x188);

    if (t41 != 8048064004943LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int32_t x189 = -19;
	static int8_t x190 = -1;
	static int64_t x191 = 2152294778957386962LL;

    t42 = ((x189/(x190^x191))-x192);

    if (t42 != 2147483648LL) { NG(); } else { ; }
	
}

void f43(void) {
    	static uint32_t x193 = UINT32_MAX;
	static int64_t x194 = INT64_MAX;
	volatile uint32_t x196 = 2U;

    t43 = ((x193/(x194^x195))-x196);

    if (t43 != -2LL) { NG(); } else { ; }
	
}

void f44(void) {
    	uint8_t x201 = 54U;
	int64_t x202 = INT64_MIN;
	int8_t x203 = INT8_MAX;
	uint16_t x204 = UINT16_MAX;
	volatile int64_t t44 = 116073168061463899LL;

    t44 = ((x201/(x202^x203))-x204);

    if (t44 != -65535LL) { NG(); } else { ; }
	
}

void f45(void) {
    	int16_t x206 = INT16_MIN;
	static int8_t x207 = INT8_MIN;
	volatile int16_t x208 = INT16_MIN;
	volatile int32_t t45 = 916;

    t45 = ((x205/(x206^x207))-x208);

    if (t45 != 32768) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x209 = INT8_MAX;
	int8_t x210 = INT8_MIN;
	int32_t x211 = -30814;
	static volatile int32_t t46 = -3371399;

    t46 = ((x209/(x210^x211))-x212);

    if (t46 != -10963) { NG(); } else { ; }
	
}

void f47(void) {
    	static int16_t x213 = INT16_MIN;
	int64_t x215 = INT64_MAX;
	static int16_t x216 = INT16_MIN;

    t47 = ((x213/(x214^x215))-x216);

    if (t47 != 32768LL) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x217 = 738825;
	static int32_t x218 = INT32_MIN;
	volatile uint16_t x219 = 299U;
	uint8_t x220 = UINT8_MAX;

    t48 = ((x217/(x218^x219))-x220);

    if (t48 != -255) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x221 = INT8_MIN;
	static int8_t x222 = 0;
	int32_t t49 = -9;

    t49 = ((x221/(x222^x223))-x224);

    if (t49 != -186) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x230 = INT32_MIN;
	uint64_t x231 = 147666560273889034LLU;
	uint64_t x232 = UINT64_MAX;

    t50 = ((x229/(x230^x231))-x232);

    if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	uint64_t x233 = UINT64_MAX;
	int64_t x235 = -51152256665680LL;
	int16_t x236 = -1;
	uint64_t t51 = 3197308829532386LLU;

    t51 = ((x233/(x234^x235))-x236);

    if (t51 != 360625LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x237 = -1;
	int64_t x238 = -1LL;
	int32_t x239 = INT32_MAX;
	volatile int64_t t52 = -164814LL;

    t52 = ((x237/(x238^x239))-x240);

    if (t52 != 32768LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int32_t x241 = INT32_MAX;
	static uint64_t x242 = 54424227040LLU;
	static int32_t x244 = INT32_MIN;

    t53 = ((x241/(x242^x243))-x244);

    if (t53 != 2147483648LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static volatile uint64_t x245 = UINT64_MAX;
	uint16_t x246 = 17250U;
	static uint8_t x247 = UINT8_MAX;
	uint64_t x248 = 10LLU;

    t54 = ((x245/(x246^x247))-x248);

    if (t54 != 1065731357889501LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x250 = UINT8_MAX;
	uint32_t x251 = 847193U;
	int8_t x252 = INT8_MIN;
	uint32_t t55 = 2974759U;

    t55 = ((x249/(x250^x251))-x252);

    if (t55 != 5197U) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x253 = -1;
	int64_t x254 = INT64_MAX;
	static int32_t x255 = -1;
	static uint16_t x256 = 608U;
	int64_t t56 = -1115026902157LL;

    t56 = ((x253/(x254^x255))-x256);

    if (t56 != -608LL) { NG(); } else { ; }
	
}

void f57(void) {
    	uint16_t x257 = 749U;
	volatile int8_t x259 = 0;
	uint64_t t57 = 783190145822527351LLU;

    t57 = ((x257/(x258^x259))-x260);

    if (t57 != 18446743564799995342LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x261 = -3678620LL;
	uint16_t x262 = 0U;
	int8_t x263 = INT8_MIN;
	int32_t x264 = 1262;

    t58 = ((x261/(x262^x263))-x264);

    if (t58 != 27477LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x266 = UINT8_MAX;
	volatile int16_t x267 = INT16_MIN;
	int32_t x268 = 15230331;
	int32_t t59 = -3;

    t59 = ((x265/(x266^x267))-x268);

    if (t59 != -15230348) { NG(); } else { ; }
	
}

void f60(void) {
    	static int8_t x269 = -1;
	int32_t x270 = INT32_MIN;
	volatile int64_t x271 = -1216864LL;

    t60 = ((x269/(x270^x271))-x272);

    if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int16_t x273 = INT16_MAX;
	int8_t x274 = 1;
	uint16_t x275 = UINT16_MAX;
	static int16_t x276 = INT16_MIN;

    t61 = ((x273/(x274^x275))-x276);

    if (t61 != 32768) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x277 = -233;
	volatile int64_t x278 = INT64_MIN;
	volatile uint16_t x279 = 9U;
	static uint32_t x280 = 271U;
	int64_t t62 = 27LL;

    t62 = ((x277/(x278^x279))-x280);

    if (t62 != -271LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x281 = INT8_MIN;
	volatile int32_t x282 = -367238735;
	volatile int32_t t63 = 4578265;

    t63 = ((x281/(x282^x283))-x284);

    if (t63 != -287062) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x285 = 2U;
	static int32_t x287 = INT32_MIN;
	static int32_t x288 = 24447;
	int32_t t64 = 92290137;

    t64 = ((x285/(x286^x287))-x288);

    if (t64 != -24447) { NG(); } else { ; }
	
}

void f65(void) {
    	int64_t x289 = INT64_MIN;
	uint16_t x290 = 3024U;
	static int64_t x291 = -1LL;
	int16_t x292 = -214;
	volatile int64_t t65 = -33503LL;

    t65 = ((x289/(x290^x291))-x292);

    if (t65 != 3049048607224933LL) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile uint64_t x297 = 61831164LLU;
	uint64_t x298 = UINT64_MAX;
	volatile int32_t x299 = -2;
	int32_t x300 = INT32_MIN;
	volatile uint64_t t66 = 42LLU;

    t66 = ((x297/(x298^x299))-x300);

    if (t66 != 2209314812LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int16_t x301 = INT16_MAX;
	volatile int16_t x302 = -1;
	uint32_t x304 = 153169U;
	static volatile uint64_t t67 = 12491528160510LLU;

    t67 = ((x301/(x302^x303))-x304);

    if (t67 != 18446744073709398447LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x306 = INT8_MIN;
	uint64_t x307 = UINT64_MAX;
	int32_t x308 = INT32_MIN;
	volatile uint64_t t68 = 748673782422LLU;

    t68 = ((x305/(x306^x307))-x308);

    if (t68 != 2147483648LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x309 = 2U;
	int16_t x312 = 82;

    t69 = ((x309/(x310^x311))-x312);

    if (t69 != -82LL) { NG(); } else { ; }
	
}

void f70(void) {
    	uint64_t x313 = UINT64_MAX;
	uint32_t x314 = UINT32_MAX;
	int64_t x315 = INT64_MIN;
	uint64_t x316 = 29LLU;
	static uint64_t t70 = 145927LLU;

    t70 = ((x313/(x314^x315))-x316);

    if (t70 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x317 = -1;
	uint16_t x318 = 9731U;
	int64_t x319 = INT64_MIN;
	volatile int64_t t71 = -16910824271621263LL;

    t71 = ((x317/(x318^x319))-x320);

    if (t71 != -2644LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x321 = 275U;
	int8_t x322 = INT8_MIN;
	static int32_t t72 = 356270;

    t72 = ((x321/(x322^x323))-x324);

    if (t72 != -19242) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x326 = -120911;
	static volatile int64_t x327 = INT64_MIN;
	int64_t x328 = -1LL;

    t73 = ((x325/(x326^x327))-x328);

    if (t73 != 1LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x329 = -1;
	uint8_t x330 = UINT8_MAX;
	uint16_t x331 = 100U;
	int8_t x332 = -1;
	volatile int32_t t74 = -251030096;

    t74 = ((x329/(x330^x331))-x332);

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint8_t x333 = 7U;
	int64_t x334 = -1096707035LL;
	static int8_t x336 = INT8_MAX;
	volatile int64_t t75 = -824LL;

    t75 = ((x333/(x334^x335))-x336);

    if (t75 != -127LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x337 = INT32_MIN;
	uint32_t x338 = 175701U;
	static volatile uint16_t x340 = UINT16_MAX;
	volatile uint32_t t76 = 1916891U;

    t76 = ((x337/(x338^x339))-x340);

    if (t76 != 4294901761U) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x342 = -1LL;
	uint16_t x343 = UINT16_MAX;
	uint8_t x344 = UINT8_MAX;

    t77 = ((x341/(x342^x343))-x344);

    if (t77 != -4190336452560LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x350 = -1;
	int64_t x351 = INT64_MIN;
	int32_t x352 = -1;

    t78 = ((x349/(x350^x351))-x352);

    if (t78 != 1LL) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile int32_t x357 = INT32_MAX;
	uint64_t x358 = UINT64_MAX;
	int16_t x360 = -1;
	volatile uint64_t t79 = 10425980389225LLU;

    t79 = ((x357/(x358^x359))-x360);

    if (t79 != 15LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint64_t x361 = 492617771LLU;
	int64_t x362 = INT64_MIN;
	int64_t x363 = 13035160458741928LL;
	int32_t x364 = 33;
	uint64_t t80 = 54082545976909348LLU;

    t80 = ((x361/(x362^x363))-x364);

    if (t80 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int64_t x366 = INT64_MAX;
	volatile uint64_t x367 = UINT64_MAX;
	int16_t x368 = INT16_MIN;
	volatile uint64_t t81 = 11661287931LLU;

    t81 = ((x365/(x366^x367))-x368);

    if (t81 != 32768LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	static int64_t x369 = INT64_MIN;
	volatile int32_t x370 = 13;
	volatile uint64_t x371 = 936708042601033LLU;
	uint16_t x372 = 59U;
	volatile uint64_t t82 = 672681907623495LLU;

    t82 = ((x369/(x370^x371))-x372);

    if (t82 != 9787LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x373 = INT64_MAX;
	int8_t x376 = -57;
	volatile int64_t t83 = 1564821735804113312LL;

    t83 = ((x373/(x374^x375))-x376);

    if (t83 != 170803185867681090LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static volatile int16_t x377 = INT16_MIN;
	int64_t x378 = 313245832852483332LL;
	int8_t x379 = INT8_MIN;
	int16_t x380 = -1;
	static int64_t t84 = -4112467130821447LL;

    t84 = ((x377/(x378^x379))-x380);

    if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x381 = INT32_MIN;
	volatile int64_t x382 = INT64_MIN;
	int32_t x383 = -1;
	int64_t t85 = 4246917592131810066LL;

    t85 = ((x381/(x382^x383))-x384);

    if (t85 != -127LL) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x385 = INT8_MAX;
	uint64_t x386 = 112920620LLU;
	uint32_t x387 = 2356U;
	int32_t x388 = INT32_MIN;
	static uint64_t t86 = 6266324776277LLU;

    t86 = ((x385/(x386^x387))-x388);

    if (t86 != 2147483648LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	static int8_t x389 = INT8_MIN;
	uint8_t x390 = 13U;
	volatile int8_t x391 = INT8_MIN;
	int8_t x392 = 35;

    t87 = ((x389/(x390^x391))-x392);

    if (t87 != -34) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile int32_t x393 = INT32_MIN;
	static int16_t x394 = -365;
	int16_t x395 = 0;
	int32_t x396 = 10224948;
	volatile int32_t t88 = 5613;

    t88 = ((x393/(x394^x395))-x396);

    if (t88 != -4341432) { NG(); } else { ; }
	
}

void f89(void) {
    	static volatile int16_t x397 = 214;
	uint8_t x398 = 53U;
	int8_t x400 = -1;
	volatile int32_t t89 = 179162;

    t89 = ((x397/(x398^x399))-x400);

    if (t89 != -2) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x401 = -1;
	volatile int8_t x402 = INT8_MIN;
	uint64_t x403 = 22LLU;
	int16_t x404 = INT16_MIN;
	volatile uint64_t t90 = 420960037LLU;

    t90 = ((x401/(x402^x403))-x404);

    if (t90 != 32769LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x406 = INT64_MAX;
	uint64_t x407 = 174607223284641LLU;
	uint64_t t91 = 32094002LLU;

    t91 = ((x405/(x406^x407))-x408);

    if (t91 != 1LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x409 = 15681U;
	static int16_t x410 = INT16_MAX;
	static int64_t x411 = -17833539687641657LL;
	volatile uint32_t x412 = UINT32_MAX;
	int64_t t92 = -6423070289LL;

    t92 = ((x409/(x410^x411))-x412);

    if (t92 != -4294967295LL) { NG(); } else { ; }
	
}

void f93(void) {
    	int16_t x413 = INT16_MAX;
	int64_t x414 = -1LL;
	uint32_t x415 = 1922690491U;
	volatile int16_t x416 = INT16_MIN;
	int64_t t93 = -50346301297556LL;

    t93 = ((x413/(x414^x415))-x416);

    if (t93 != 32768LL) { NG(); } else { ; }
	
}

void f94(void) {
    	uint32_t x417 = 1276705412U;
	int32_t x418 = INT32_MIN;
	volatile int64_t x419 = 960454354718562485LL;

    t94 = ((x417/(x418^x419))-x420);

    if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x425 = INT16_MIN;
	int64_t x426 = -8503078883860LL;
	uint64_t t95 = 128LLU;

    t95 = ((x425/(x426^x427))-x428);

    if (t95 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint8_t x429 = UINT8_MAX;
	int32_t x430 = INT32_MIN;
	static int16_t x431 = 10;
	static volatile int8_t x432 = INT8_MIN;
	int32_t t96 = 5;

    t96 = ((x429/(x430^x431))-x432);

    if (t96 != 128) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x433 = 5938U;
	int32_t x435 = 11;
	uint16_t x436 = 1903U;
	static volatile int32_t t97 = -6710;

    t97 = ((x433/(x434^x435))-x436);

    if (t97 != -1852) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x437 = INT16_MAX;
	static uint16_t x439 = 86U;
	static int8_t x440 = 37;
	volatile int64_t t98 = 10999LL;

    t98 = ((x437/(x438^x439))-x440);

    if (t98 != -37LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int8_t x441 = -57;
	volatile int16_t x442 = INT16_MIN;
	uint8_t x443 = 84U;
	uint16_t x444 = 3057U;
	int32_t t99 = -149;

    t99 = ((x441/(x442^x443))-x444);

    if (t99 != -3057) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x445 = 4154535;
	static uint32_t x448 = 312911142U;

    t100 = ((x445/(x446^x447))-x448);

    if (t100 != -312911147LL) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x453 = 1U;
	volatile int32_t x454 = INT32_MAX;
	volatile uint64_t x455 = UINT64_MAX;
	volatile int16_t x456 = INT16_MAX;
	uint64_t t101 = 1224358411875527876LLU;

    t101 = ((x453/(x454^x455))-x456);

    if (t101 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x457 = -5;
	int8_t x458 = 25;
	uint8_t x460 = 5U;
	int32_t t102 = 17732590;

    t102 = ((x457/(x458^x459))-x460);

    if (t102 != -5) { NG(); } else { ; }
	
}

void f103(void) {
    	uint8_t x461 = 1U;
	int32_t x462 = INT32_MIN;
	volatile uint8_t x463 = 22U;
	volatile int16_t x464 = -1;
	volatile int32_t t103 = 1081;

    t103 = ((x461/(x462^x463))-x464);

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x465 = 722372;
	static uint64_t x466 = 316235970679017310LLU;
	int16_t x467 = INT16_MAX;
	volatile uint32_t x468 = UINT32_MAX;
	uint64_t t104 = 3782146573945LLU;

    t104 = ((x465/(x466^x467))-x468);

    if (t104 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x469 = INT32_MAX;
	int16_t x471 = INT16_MIN;
	uint64_t x472 = UINT64_MAX;
	volatile uint64_t t105 = 11397328440LLU;

    t105 = ((x469/(x470^x471))-x472);

    if (t105 != 2LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x473 = INT16_MIN;
	int32_t x475 = INT32_MIN;
	int32_t x476 = 170;
	int32_t t106 = -106446921;

    t106 = ((x473/(x474^x475))-x476);

    if (t106 != -170) { NG(); } else { ; }
	
}

void f107(void) {
    	uint8_t x477 = 6U;
	static volatile int8_t x478 = INT8_MAX;
	int32_t x479 = 4774;
	int32_t x480 = INT32_MAX;
	volatile int32_t t107 = 1024;

    t107 = ((x477/(x478^x479))-x480);

    if (t107 != -2147483647) { NG(); } else { ; }
	
}

void f108(void) {
    	int16_t x481 = INT16_MIN;
	uint64_t x482 = 231888807LLU;
	uint32_t x483 = 49U;
	int64_t x484 = 501690LL;
	volatile uint64_t t108 = 273266437933603256LLU;

    t108 = ((x481/(x482^x483))-x484);

    if (t108 != 79549458761LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x485 = 23U;
	int8_t x487 = 0;
	volatile uint8_t x488 = 42U;
	volatile uint32_t t109 = 178U;

    t109 = ((x485/(x486^x487))-x488);

    if (t109 != 4294967254U) { NG(); } else { ; }
	
}

void f110(void) {
    	static int32_t x489 = -1;
	int32_t x490 = -157206;
	static int64_t x491 = INT64_MIN;
	int16_t x492 = -1;
	volatile int64_t t110 = -499929232628614728LL;

    t110 = ((x489/(x490^x491))-x492);

    if (t110 != 1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x493 = INT32_MAX;
	int64_t x494 = -26898LL;
	uint32_t x495 = 414U;
	int8_t x496 = 0;
	volatile int64_t t111 = -1705112LL;

    t111 = ((x493/(x494^x495))-x496);

    if (t111 != -80225LL) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x497 = 1496698031136LL;
	uint64_t x499 = 14965LLU;

    t112 = ((x497/(x498^x499))-x500);

    if (t112 != 18446744073709551530LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x502 = -1;
	static int32_t x503 = INT32_MAX;
	int16_t x504 = INT16_MIN;
	int32_t t113 = 1;

    t113 = ((x501/(x502^x503))-x504);

    if (t113 != 32768) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x505 = 6289;
	uint32_t x506 = 124510U;
	int16_t x507 = INT16_MAX;
	volatile int32_t x508 = -1;
	volatile uint32_t t114 = 26967848U;

    t114 = ((x505/(x506^x507))-x508);

    if (t114 != 1U) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x509 = INT64_MIN;
	int64_t x510 = -1LL;
	int64_t x511 = INT64_MIN;
	int64_t x512 = INT64_MIN;
	volatile int64_t t115 = INT64_MAX;

    t115 = ((x509/(x510^x511))-x512);

    if (t115 != INT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	static int32_t x514 = INT32_MIN;
	int8_t x515 = -6;
	static uint64_t t116 = 232LLU;

    t116 = ((x513/(x514^x515))-x516);

    if (t116 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x517 = 0U;
	static volatile uint64_t x518 = UINT64_MAX;
	int32_t x519 = INT32_MIN;
	uint64_t x520 = UINT64_MAX;
	volatile uint64_t t117 = 1404504352LLU;

    t117 = ((x517/(x518^x519))-x520);

    if (t117 != 1LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	uint8_t x521 = 3U;
	static uint32_t x522 = 200U;
	int32_t x523 = INT32_MIN;
	int64_t x524 = -1LL;
	static volatile int64_t t118 = -16474992428303428LL;

    t118 = ((x521/(x522^x523))-x524);

    if (t118 != 1LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int16_t x534 = INT16_MIN;
	int64_t x535 = INT64_MAX;
	int64_t x536 = 6117691736264LL;
	int64_t t119 = -91665086941LL;

    t119 = ((x533/(x534^x535))-x536);

    if (t119 != -6117691736264LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x537 = INT8_MAX;
	uint32_t x540 = UINT32_MAX;
	int64_t t120 = 1399088623562034LL;

    t120 = ((x537/(x538^x539))-x540);

    if (t120 != -4294967295LL) { NG(); } else { ; }
	
}

void f121(void) {
    	static int8_t x541 = INT8_MIN;
	static volatile uint16_t x542 = 1U;
	volatile int64_t x543 = 978LL;
	int32_t x544 = INT32_MAX;
	volatile int64_t t121 = 1243930342737LL;

    t121 = ((x541/(x542^x543))-x544);

    if (t121 != -2147483647LL) { NG(); } else { ; }
	
}

void f122(void) {
    	int16_t x545 = -1;
	uint64_t x546 = 15513324LLU;
	int8_t x547 = -1;
	volatile int64_t x548 = INT64_MIN;

    t122 = ((x545/(x546^x547))-x548);

    if (t122 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x549 = INT32_MIN;
	int32_t x550 = INT32_MAX;
	volatile uint16_t x551 = 996U;
	static int32_t x552 = INT32_MAX;
	int32_t t123 = INT32_MIN;

    t123 = ((x549/(x550^x551))-x552);

    if (t123 != INT32_MIN) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x553 = -231;
	static int32_t x554 = -1;
	int16_t x555 = 25;
	volatile int64_t x556 = -1LL;

    t124 = ((x553/(x554^x555))-x556);

    if (t124 != 9LL) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x557 = UINT16_MAX;
	int8_t x558 = INT8_MAX;
	int32_t x559 = INT32_MIN;
	static int64_t x560 = -1LL;
	int64_t t125 = 12LL;

    t125 = ((x557/(x558^x559))-x560);

    if (t125 != 1LL) { NG(); } else { ; }
	
}

void f126(void) {
    	uint64_t x561 = 221265LLU;
	int32_t x562 = -81498223;
	int32_t x563 = INT32_MIN;
	volatile int64_t x564 = INT64_MIN;
	uint64_t t126 = 3385LLU;

    t126 = ((x561/(x562^x563))-x564);

    if (t126 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x565 = 15;
	uint64_t x566 = 140027619963LLU;
	int32_t x567 = INT32_MAX;
	static int64_t x568 = INT64_MAX;
	uint64_t t127 = 65185LLU;

    t127 = ((x565/(x566^x567))-x568);

    if (t127 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	int32_t x569 = INT32_MIN;
	volatile int64_t x571 = 561391774748009LL;
	uint32_t x572 = 352772882U;
	static int64_t t128 = 146997LL;

    t128 = ((x569/(x570^x571))-x572);

    if (t128 != -352772882LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int32_t x573 = INT32_MIN;
	uint32_t x574 = 1984U;
	int8_t x575 = INT8_MAX;
	uint8_t x576 = UINT8_MAX;
	uint32_t t129 = 2354U;

    t129 = ((x573/(x574^x575))-x576);

    if (t129 != 1082691U) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x577 = INT64_MAX;
	static int64_t x580 = INT64_MAX;
	volatile int64_t t130 = 1771808312223582LL;

    t130 = ((x577/(x578^x579))-x580);

    if (t130 != -9223372032559677435LL) { NG(); } else { ; }
	
}

void f131(void) {
    	static volatile int8_t x581 = INT8_MIN;
	uint8_t x582 = 29U;
	int16_t x584 = 325;
	volatile uint32_t t131 = 251443205U;

    t131 = ((x581/(x582^x583))-x584);

    if (t131 != 11332042U) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x585 = INT16_MIN;
	static uint64_t x586 = 1947196346953017LLU;
	volatile uint64_t t132 = 142974764740LLU;

    t132 = ((x585/(x586^x587))-x588);

    if (t132 != 9473LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x589 = -1;
	static uint64_t x590 = UINT64_MAX;
	static int8_t x591 = INT8_MAX;
	volatile uint64_t t133 = 21961393LLU;

    t133 = ((x589/(x590^x591))-x592);

    if (t133 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x594 = INT8_MIN;
	int64_t x596 = -3102162549LL;
	uint64_t t134 = 263175988LLU;

    t134 = ((x593/(x594^x595))-x596);

    if (t134 != 3102162549LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int64_t x597 = -66642072199LL;
	volatile int64_t x598 = INT64_MAX;
	int32_t x599 = INT32_MAX;
	static int8_t x600 = INT8_MIN;
	volatile int64_t t135 = 422185496188LL;

    t135 = ((x597/(x598^x599))-x600);

    if (t135 != 128LL) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x601 = 1U;
	int32_t x603 = INT32_MIN;
	int16_t x604 = INT16_MIN;
	int32_t t136 = -7;

    t136 = ((x601/(x602^x603))-x604);

    if (t136 != 32768) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x606 = INT16_MAX;
	volatile int16_t x607 = -1;

    t137 = ((x605/(x606^x607))-x608);

    if (t137 != 4294966872U) { NG(); } else { ; }
	
}

void f138(void) {
    	uint64_t x609 = UINT64_MAX;
	int32_t x610 = 9175565;
	int32_t x611 = INT32_MIN;
	int8_t x612 = INT8_MIN;
	static uint64_t t138 = 59LLU;

    t138 = ((x609/(x610^x611))-x612);

    if (t138 != 129LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	static int32_t x613 = 346157643;
	volatile uint8_t x614 = UINT8_MAX;
	uint16_t x615 = 448U;
	uint32_t x616 = UINT32_MAX;

    t139 = ((x613/(x614^x615))-x616);

    if (t139 != 1085134U) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x617 = INT32_MIN;
	uint16_t x618 = UINT16_MAX;
	uint8_t x619 = 12U;
	static volatile int8_t x620 = -15;
	static volatile int32_t t140 = -5528;

    t140 = ((x617/(x618^x619))-x620);

    if (t140 != -32759) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x621 = INT64_MIN;
	static uint64_t x622 = UINT64_MAX;
	static int8_t x623 = INT8_MIN;
	volatile uint64_t t141 = 22534LLU;

    t141 = ((x621/(x622^x623))-x624);

    if (t141 != 72624976668147829LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x625 = INT64_MIN;
	int16_t x626 = INT16_MAX;
	int32_t x627 = 0;
	volatile int8_t x628 = INT8_MAX;
	int64_t t142 = 99479854997479LL;

    t142 = ((x625/(x626^x627))-x628);

    if (t142 != -281483566907527LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x630 = -1;
	int8_t x631 = INT8_MIN;
	static int16_t x632 = INT16_MIN;
	volatile int32_t t143 = 4583064;

    t143 = ((x629/(x630^x631))-x632);

    if (t143 != -16876552) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x638 = INT16_MIN;
	int64_t x639 = -1LL;
	int64_t t144 = -2642887LL;

    t144 = ((x637/(x638^x639))-x640);

    if (t144 != -9LL) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x641 = INT8_MIN;
	uint64_t x643 = 1530464LLU;
	uint8_t x644 = UINT8_MAX;
	volatile uint64_t t145 = 19158274840023LLU;

    t145 = ((x641/(x642^x643))-x644);

    if (t145 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x645 = -1;
	uint8_t x646 = 0U;
	uint32_t x647 = 11344U;
	int16_t x648 = INT16_MIN;

    t146 = ((x645/(x646^x647))-x648);

    if (t146 != 411379U) { NG(); } else { ; }
	
}

void f147(void) {
    	int64_t x649 = INT64_MIN;
	uint32_t x650 = 29450U;
	int32_t x651 = -1;
	volatile uint16_t x652 = 24742U;
	int64_t t147 = 2LL;

    t147 = ((x649/(x650^x651))-x652);

    if (t147 != -2147523115LL) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x653 = -81952027099LL;
	int8_t x655 = INT8_MIN;
	uint64_t x656 = 4317139183432138LLU;
	uint64_t t148 = 59027LLU;

    t148 = ((x653/(x654^x655))-x656);

    if (t148 != 18442426934526119459LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint32_t x657 = 1476105825U;
	static volatile int8_t x658 = INT8_MIN;
	static uint16_t x659 = 123U;
	int64_t t149 = -99291871184LL;

    t149 = ((x657/(x658^x659))-x660);

    if (t149 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x661 = 628553571266380LLU;
	int32_t x662 = 0;
	volatile uint16_t x663 = 145U;
	int8_t x664 = -3;

    t150 = ((x661/(x662^x663))-x664);

    if (t150 != 4334852215633LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint16_t x665 = 1U;
	volatile int32_t x667 = -253415;
	static volatile uint64_t x668 = 161079LLU;
	uint64_t t151 = 94969101493LLU;

    t151 = ((x665/(x666^x667))-x668);

    if (t151 != 18446744073709390537LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	uint32_t x669 = 2U;
	int16_t x671 = INT16_MIN;
	uint16_t x672 = 5U;
	volatile uint32_t t152 = 8115U;

    t152 = ((x669/(x670^x671))-x672);

    if (t152 != 4294967291U) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x677 = 11;
	uint32_t x678 = 1307189U;
	static int8_t x679 = INT8_MIN;
	uint64_t x680 = UINT64_MAX;
	volatile uint64_t t153 = 93803581886146LLU;

    t153 = ((x677/(x678^x679))-x680);

    if (t153 != 1LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x681 = 98U;
	static uint16_t x682 = 6U;
	static uint32_t x684 = 583U;
	uint64_t t154 = 7377LLU;

    t154 = ((x681/(x682^x683))-x684);

    if (t154 != 18446744073709551033LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x685 = INT16_MIN;
	uint64_t x686 = UINT64_MAX;
	int8_t x687 = 1;
	int64_t x688 = -1LL;
	static uint64_t t155 = 13389432111379890LLU;

    t155 = ((x685/(x686^x687))-x688);

    if (t155 != 1LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	uint32_t x689 = 8941U;
	int64_t x691 = -112120120LL;
	volatile int16_t x692 = 3807;

    t156 = ((x689/(x690^x691))-x692);

    if (t156 != -3807LL) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int16_t x693 = INT16_MIN;
	int8_t x694 = 46;
	int16_t x695 = -13362;

    t157 = ((x693/(x694^x695))-x696);

    if (t157 != -2147483645) { NG(); } else { ; }
	
}

void f158(void) {
    	int8_t x701 = 30;
	int32_t x702 = 88018;
	static int16_t x703 = 204;
	volatile int32_t x704 = -25763;
	static volatile int32_t t158 = -22948;

    t158 = ((x701/(x702^x703))-x704);

    if (t158 != 25763) { NG(); } else { ; }
	
}

void f159(void) {
    	static int16_t x706 = -966;
	volatile int8_t x707 = -30;
	static int32_t x708 = INT32_MAX;
	volatile int32_t t159 = 470;

    t159 = ((x705/(x706^x707))-x708);

    if (t159 != -2147483647) { NG(); } else { ; }
	
}

void f160(void) {
    	int64_t x709 = -1LL;
	static uint64_t x710 = 225LLU;
	int32_t x711 = -44482;
	static int64_t x712 = -3066974742642000744LL;
	volatile uint64_t t160 = 254456LLU;

    t160 = ((x709/(x710^x711))-x712);

    if (t160 != 3066974742642000745LLU) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x713 = INT8_MIN;
	volatile int32_t x714 = INT32_MIN;
	volatile uint8_t x715 = 9U;
	uint8_t x716 = 7U;
	static int32_t t161 = -206197029;

    t161 = ((x713/(x714^x715))-x716);

    if (t161 != -7) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x717 = UINT16_MAX;
	int64_t x719 = INT64_MIN;
	volatile uint64_t x720 = UINT64_MAX;
	volatile uint64_t t162 = 216628523063324LLU;

    t162 = ((x717/(x718^x719))-x720);

    if (t162 != 18446744073709486082LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	volatile int8_t x721 = 19;
	uint8_t x722 = UINT8_MAX;
	static volatile int16_t x723 = INT16_MAX;
	int32_t t163 = 182;

    t163 = ((x721/(x722^x723))-x724);

    if (t163 != -14) { NG(); } else { ; }
	
}

void f164(void) {
    	int32_t x725 = -1;
	int8_t x726 = INT8_MIN;
	volatile int64_t x728 = -613234433791LL;
	int64_t t164 = 7088795LL;

    t164 = ((x725/(x726^x727))-x728);

    if (t164 != 613234433791LL) { NG(); } else { ; }
	
}

void f165(void) {
    	uint32_t x729 = UINT32_MAX;
	uint8_t x731 = 4U;
	uint32_t t165 = 11U;

    t165 = ((x729/(x730^x731))-x732);

    if (t165 != 4294967042U) { NG(); } else { ; }
	
}

void f166(void) {
    	static int8_t x733 = -1;
	volatile int32_t x734 = 4;
	int32_t x735 = 24023;
	uint32_t x736 = 13093524U;
	static uint32_t t166 = 12U;

    t166 = ((x733/(x734^x735))-x736);

    if (t166 != 4281873772U) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x737 = -1;
	int16_t x738 = -1;
	static int8_t x739 = 23;
	int64_t x740 = -2621908722744300LL;

    t167 = ((x737/(x738^x739))-x740);

    if (t167 != 2621908722744300LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint16_t x741 = 1U;
	static volatile uint64_t x742 = 132005221565LLU;
	uint32_t x743 = 850036U;

    t168 = ((x741/(x742^x743))-x744);

    if (t168 != 128LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x745 = -7;
	static int16_t x746 = INT16_MIN;
	int8_t x747 = INT8_MAX;
	volatile uint8_t x748 = 1U;
	volatile int32_t t169 = 96;

    t169 = ((x745/(x746^x747))-x748);

    if (t169 != -1) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x749 = UINT8_MAX;
	uint8_t x750 = 3U;
	uint32_t x751 = 0U;
	int8_t x752 = INT8_MIN;
	static uint32_t t170 = 4080365U;

    t170 = ((x749/(x750^x751))-x752);

    if (t170 != 213U) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x753 = UINT8_MAX;
	uint32_t x756 = UINT32_MAX;
	uint32_t t171 = 7334U;

    t171 = ((x753/(x754^x755))-x756);

    if (t171 != 1U) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile uint8_t x757 = UINT8_MAX;
	static int32_t x758 = 3552;
	uint32_t x759 = UINT32_MAX;

    t172 = ((x757/(x758^x759))-x760);

    if (t172 != 0U) { NG(); } else { ; }
	
}

void f173(void) {
    	static volatile int8_t x761 = 12;
	int8_t x762 = 57;
	static int8_t x763 = -1;
	volatile int32_t t173 = -2;

    t173 = ((x761/(x762^x763))-x764);

    if (t173 != -12) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x770 = INT16_MIN;
	uint8_t x772 = 86U;
	static volatile int32_t t174 = 343050;

    t174 = ((x769/(x770^x771))-x772);

    if (t174 != -86) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x777 = -14LL;
	uint8_t x778 = UINT8_MAX;
	uint32_t x779 = 3795U;
	static uint32_t x780 = 3355U;

    t175 = ((x777/(x778^x779))-x780);

    if (t175 != -3355LL) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int16_t x781 = INT16_MIN;
	int8_t x782 = INT8_MIN;
	static uint32_t x783 = 1U;
	static int16_t x784 = 15;

    t176 = ((x781/(x782^x783))-x784);

    if (t176 != 4294967281U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x785 = 178U;
	int64_t x786 = INT64_MIN;
	int16_t x788 = INT16_MIN;
	volatile int64_t t177 = -12540727592816LL;

    t177 = ((x785/(x786^x787))-x788);

    if (t177 != 32768LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x789 = INT64_MIN;
	static int32_t x790 = -1;
	int64_t t178 = 0LL;

    t178 = ((x789/(x790^x791))-x792);

    if (t178 != 36028797018963841LL) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x793 = UINT16_MAX;
	uint16_t x794 = 237U;
	uint8_t x795 = UINT8_MAX;
	int32_t t179 = -490352449;

    t179 = ((x793/(x794^x795))-x796);

    if (t179 != 3768) { NG(); } else { ; }
	
}

void f180(void) {
    	uint16_t x797 = UINT16_MAX;
	int8_t x799 = -1;
	int64_t x800 = 1533897591540333LL;
	int64_t t180 = -3LL;

    t180 = ((x797/(x798^x799))-x800);

    if (t180 != -1533897591540333LL) { NG(); } else { ; }
	
}

void f181(void) {
    	uint32_t x802 = 1370201830U;
	int64_t x803 = -1LL;
	static int32_t x804 = INT32_MIN;
	static int64_t t181 = -1LL;

    t181 = ((x801/(x802^x803))-x804);

    if (t181 != 2147483648LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int64_t x809 = INT64_MIN;
	uint16_t x810 = UINT16_MAX;
	int32_t x811 = INT32_MIN;
	int8_t x812 = INT8_MIN;
	int64_t t182 = -21859899635098LL;

    t182 = ((x809/(x810^x811))-x812);

    if (t182 != 4295098497LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int32_t x813 = -1;
	static int16_t x815 = -1;
	uint16_t x816 = 13000U;
	volatile uint64_t t183 = 4555LLU;

    t183 = ((x813/(x814^x815))-x816);

    if (t183 != 18446744073709538617LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x817 = 1;
	uint32_t x818 = UINT32_MAX;
	int64_t x819 = INT64_MIN;
	int32_t x820 = -1;
	int64_t t184 = 63289116370LL;

    t184 = ((x817/(x818^x819))-x820);

    if (t184 != 1LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x821 = -1LL;
	uint64_t x822 = 22996066085LLU;
	int16_t x823 = -1;
	volatile uint64_t x824 = 11848872705655166LLU;
	volatile uint64_t t185 = 39212235LLU;

    t185 = ((x821/(x822^x823))-x824);

    if (t185 != 18434895201003896451LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x825 = INT32_MIN;
	static int64_t x826 = INT64_MAX;
	int32_t x827 = -28;
	int16_t x828 = -1;

    t186 = ((x825/(x826^x827))-x828);

    if (t186 != 1LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint8_t x829 = 5U;
	uint64_t x830 = 2731LLU;
	uint64_t x831 = UINT64_MAX;
	static int8_t x832 = INT8_MIN;
	uint64_t t187 = 208580805432407LLU;

    t187 = ((x829/(x830^x831))-x832);

    if (t187 != 128LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile int16_t x834 = -1102;
	volatile uint32_t x835 = 29971U;
	static uint32_t x836 = UINT32_MAX;
	uint32_t t188 = 31903U;

    t188 = ((x833/(x834^x835))-x836);

    if (t188 != 2U) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x837 = INT32_MIN;
	int32_t x838 = -134;
	int64_t x839 = INT64_MIN;
	volatile uint64_t x840 = 8917454386944LLU;
	volatile uint64_t t189 = 13699700594144LLU;

    t189 = ((x837/(x838^x839))-x840);

    if (t189 != 18446735156255164672LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x841 = INT8_MIN;
	uint32_t x842 = UINT32_MAX;
	uint32_t t190 = 9837989U;

    t190 = ((x841/(x842^x843))-x844);

    if (t190 != 33818384U) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x846 = INT8_MAX;
	volatile uint32_t t191 = 13409048U;

    t191 = ((x845/(x846^x847))-x848);

    if (t191 != 1U) { NG(); } else { ; }
	
}

void f192(void) {
    	int64_t x849 = 4202705866227LL;
	int8_t x850 = INT8_MIN;
	static int32_t x851 = INT32_MIN;
	static volatile uint16_t x852 = 1U;
	static int64_t t192 = -14415090408417382LL;

    t192 = ((x849/(x850^x851))-x852);

    if (t192 != 1956LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint64_t x853 = 339079153485674781LLU;
	int8_t x854 = 26;
	volatile int64_t x855 = -1LL;
	uint8_t x856 = 10U;
	static uint64_t t193 = 10814494342847LLU;

    t193 = ((x853/(x854^x855))-x856);

    if (t193 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x858 = INT8_MAX;
	int64_t x859 = -1LL;
	uint64_t t194 = 5310069677994LLU;

    t194 = ((x857/(x858^x859))-x860);

    if (t194 != 18446742734485121743LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x861 = INT64_MIN;
	uint8_t x862 = UINT8_MAX;
	int64_t x863 = 2612939983LL;
	uint8_t x864 = 52U;
	volatile int64_t t195 = -387493327LL;

    t195 = ((x861/(x862^x863))-x864);

    if (t195 != -3529883117LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x866 = INT8_MIN;
	volatile int32_t t196 = 241676284;

    t196 = ((x865/(x866^x867))-x868);

    if (t196 != -5) { NG(); } else { ; }
	
}

void f197(void) {
    	static volatile int8_t x869 = 0;
	int16_t x870 = INT16_MIN;
	volatile uint16_t x872 = UINT16_MAX;

    t197 = ((x869/(x870^x871))-x872);

    if (t197 != -65535) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x873 = INT8_MIN;
	static int16_t x874 = -1;
	int64_t x875 = INT64_MIN;
	static int64_t x876 = -1LL;
	volatile int64_t t198 = -243653343LL;

    t198 = ((x873/(x874^x875))-x876);

    if (t198 != 1LL) { NG(); } else { ; }
	
}

void f199(void) {
    	uint64_t x877 = 6692247869751838562LLU;
	int16_t x878 = 4778;
	uint32_t x879 = UINT32_MAX;
	volatile int64_t x880 = INT64_MIN;
	static uint64_t t199 = 477243889365520974LLU;

    t199 = ((x877/(x878^x879))-x880);

    if (t199 != 9223372038412937920LLU) { NG(); } else { ; }
	
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

