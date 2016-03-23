
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

int32_t x2 = INT32_MAX;
int32_t x3 = -1;
int8_t x8 = 1;
volatile uint32_t x10 = 47U;
int64_t x15 = INT64_MAX;
volatile int8_t x29 = 0;
int32_t t9 = -6033;
static int32_t t11 = 1822472;
uint64_t x78 = UINT64_MAX;
uint16_t x84 = UINT16_MAX;
int16_t x85 = INT16_MIN;
volatile int64_t x87 = -1LL;
int32_t x88 = INT32_MIN;
static uint64_t x99 = UINT64_MAX;
static int64_t x103 = -39196623LL;
int8_t x104 = -1;
int8_t x116 = INT8_MIN;
volatile int32_t t17 = 17074021;
volatile int8_t x119 = INT8_MAX;
uint8_t x125 = 2U;
int32_t t21 = -47;
static int32_t x148 = -1;
int32_t t22 = 266;
volatile uint64_t x151 = 15058721559630460LLU;
uint16_t x152 = 41U;
int16_t x155 = INT16_MIN;
int32_t x170 = 0;
int32_t x178 = -1;
volatile int32_t t31 = -131025;
volatile uint32_t x198 = UINT32_MAX;
uint64_t x200 = 1047545LLU;
int64_t x209 = INT64_MIN;
int32_t x216 = -30205;
static int8_t x220 = -12;
static int16_t x221 = INT16_MAX;
volatile uint16_t x224 = UINT16_MAX;
volatile int64_t x236 = -248LL;
static int8_t x240 = INT8_MIN;
int16_t x248 = INT16_MIN;
static volatile int32_t t41 = -778900215;
uint16_t x250 = 6687U;
uint8_t x251 = UINT8_MAX;
static int64_t x260 = -2311LL;
uint8_t x264 = 1U;
int32_t t45 = 36102416;
volatile int32_t t47 = -19954760;
static int16_t x273 = -17;
uint32_t x286 = 1756642161U;
int32_t t50 = -1043;
int64_t x289 = INT64_MIN;
int32_t t51 = -122933;
static int32_t x298 = -6065669;
volatile int32_t t53 = -744567;
uint32_t x314 = 1952025U;
uint32_t x319 = UINT32_MAX;
uint8_t x326 = UINT8_MAX;
int32_t x330 = INT32_MIN;
int32_t t57 = -902253;
uint64_t x360 = 1375632085133LLU;
int32_t x361 = INT32_MIN;
int32_t t63 = -29564;
uint16_t x376 = UINT16_MAX;
int16_t x383 = 16383;
uint32_t x384 = 2U;
int32_t t66 = -7263;
int64_t x393 = -6335463288844LL;
uint64_t x394 = 31LLU;
int32_t x407 = INT32_MAX;
static int64_t x409 = -1LL;
int64_t x411 = 127071731382150LL;
uint8_t x414 = 27U;
int16_t x415 = 14714;
uint32_t x429 = 2093653U;
volatile int32_t t74 = -126;
static uint16_t x445 = UINT16_MAX;
static volatile uint8_t x472 = 14U;
int64_t x476 = -1LL;
int32_t x478 = 508370451;
int8_t x481 = -1;
int16_t x497 = INT16_MAX;
volatile int8_t x500 = -7;
int32_t x504 = -1;
static volatile int32_t t89 = 1;
int16_t x513 = 1229;
int32_t x516 = -1;
static volatile int32_t x524 = -1;
static int32_t x526 = INT32_MIN;
static volatile int32_t x527 = -12329;
int64_t x529 = -14LL;
uint64_t x531 = 31900454195883989LLU;
static int8_t x534 = INT8_MIN;
uint8_t x535 = 0U;
volatile uint8_t x550 = 1U;
static uint16_t x554 = 96U;
volatile int64_t x565 = 31773266LL;
int64_t x573 = INT64_MAX;
volatile uint64_t x580 = UINT64_MAX;
int16_t x584 = INT16_MIN;
int32_t t104 = 60;
uint64_t x593 = UINT64_MAX;
uint16_t x594 = 816U;
int16_t x597 = -1;
int32_t t107 = 418;
int8_t x601 = INT8_MIN;
volatile int32_t t109 = 390823204;
volatile int16_t x618 = -35;
volatile int32_t t111 = -50701;
static int8_t x631 = -1;
static uint64_t x635 = 59408453LLU;
volatile int16_t x636 = -1;
volatile uint8_t x637 = 72U;
static int32_t t115 = -44420;
static int8_t x655 = 0;
uint16_t x657 = UINT16_MAX;
uint64_t x659 = UINT64_MAX;
static uint32_t x660 = UINT32_MAX;
volatile int16_t x661 = INT16_MAX;
int32_t t120 = 561;
uint16_t x693 = 1U;
int8_t x698 = INT8_MIN;
int64_t x707 = 4287198LL;
static volatile int32_t t125 = -939450;
volatile uint8_t x715 = 1U;
int32_t x729 = -11017;
int32_t x732 = -1;
static volatile uint16_t x734 = 1U;
uint16_t x738 = 234U;
volatile int32_t t131 = 6062160;
static int64_t x746 = INT64_MAX;
uint8_t x752 = 25U;
uint8_t x762 = UINT8_MAX;
uint32_t x763 = UINT32_MAX;
int16_t x764 = -1;
int32_t x770 = INT32_MIN;
uint8_t x774 = 25U;
volatile int32_t x777 = -1;
uint8_t x778 = 42U;
int64_t x780 = -1318LL;
static int64_t x784 = -1LL;
int64_t x786 = 104139044320LL;
int32_t t140 = 3046;
static int8_t x794 = INT8_MAX;
static uint64_t x796 = 551568173261067LLU;
int32_t t142 = 1;
volatile int32_t t143 = 2896753;
volatile uint16_t x817 = 88U;
uint16_t x818 = 0U;
volatile int32_t t145 = -1006866;
static int32_t x842 = INT32_MIN;
int32_t x843 = INT32_MIN;
uint32_t x848 = 119991U;
static uint8_t x856 = 4U;
int32_t t152 = -2007502;
int64_t x865 = INT64_MAX;
uint64_t x868 = UINT64_MAX;
volatile int32_t t155 = -61107284;
volatile int16_t x878 = 18;
uint16_t x885 = 3754U;
int8_t x906 = INT8_MIN;
int8_t x907 = INT8_MIN;
static volatile int32_t x909 = INT32_MIN;
int32_t x910 = INT32_MIN;
static volatile int32_t x911 = INT32_MIN;
static volatile int16_t x915 = 583;
uint64_t x917 = UINT64_MAX;
volatile int8_t x922 = INT8_MIN;
volatile int32_t x938 = -1;
int32_t t167 = 8;
int64_t x961 = 442420590274680LL;
int8_t x963 = INT8_MIN;
int32_t t170 = 207050;
int16_t x973 = INT16_MAX;
static int32_t x981 = INT32_MAX;
int64_t x989 = -6621LL;
int32_t x991 = -1;
volatile int32_t x993 = 21;
uint16_t x996 = 723U;
volatile uint8_t x1005 = 1U;
int64_t x1018 = INT64_MIN;
uint8_t x1032 = UINT8_MAX;
int16_t x1038 = INT16_MIN;
volatile int32_t t184 = 14093913;
volatile int32_t t185 = -402;
int8_t x1046 = -48;
int32_t x1053 = -1;
int16_t x1055 = -66;
static uint8_t x1062 = 0U;
static volatile int32_t t189 = -2530;
volatile int8_t x1066 = -26;
volatile int32_t t190 = 3901;
static int64_t x1077 = INT64_MAX;
volatile int32_t x1095 = -403479;
uint64_t x1097 = 192051LLU;
uint16_t x1100 = UINT16_MAX;
int8_t x1104 = -13;
volatile int32_t t195 = 2700;
volatile int64_t x1106 = INT64_MIN;
int64_t x1110 = INT64_MAX;
volatile int32_t t197 = -136272;
int8_t x1122 = 35;
static volatile int32_t t199 = 200;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	int64_t x4 = -1LL;
	int32_t t0 = 147;

    t0 = (x1<=(x2&(x3*x4)));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x5 = 52U;
	static int8_t x6 = 1;
	int32_t x7 = INT32_MAX;
	volatile int32_t t1 = 2229;

    t1 = (x5<=(x6&(x7*x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	int64_t x11 = INT64_MIN;
	static uint16_t x12 = 1U;
	int32_t t2 = -1;

    t2 = (x9<=(x10&(x11*x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	static uint32_t x14 = 1453454U;
	int16_t x16 = -1;
	volatile int32_t t3 = -6;

    t3 = (x13<=(x14&(x15*x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	int16_t x17 = INT16_MIN;
	uint64_t x18 = UINT64_MAX;
	int32_t x19 = -1;
	int16_t x20 = INT16_MIN;
	int32_t t4 = 2029530;

    t4 = (x17<=(x18&(x19*x20)));

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x21 = 120;
	static int16_t x22 = INT16_MIN;
	uint32_t x23 = 9004U;
	volatile uint64_t x24 = UINT64_MAX;
	static int32_t t5 = -2;

    t5 = (x21<=(x22&(x23*x24)));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = -1;
	int32_t x26 = -1;
	uint16_t x27 = UINT16_MAX;
	uint16_t x28 = 49U;
	int32_t t6 = -1;

    t6 = (x25<=(x26&(x27*x28)));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	static volatile uint64_t x30 = 343638823LLU;
	uint32_t x31 = 42096348U;
	int64_t x32 = -10300LL;
	int32_t t7 = -1043808936;

    t7 = (x29<=(x30&(x31*x32)));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	static volatile int16_t x45 = INT16_MIN;
	static uint16_t x46 = UINT16_MAX;
	uint32_t x47 = 57485019U;
	int8_t x48 = INT8_MAX;
	volatile int32_t t8 = -2129030;

    t8 = (x45<=(x46&(x47*x48)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x57 = 7371795587749549LLU;
	uint16_t x58 = UINT16_MAX;
	static int16_t x59 = INT16_MIN;
	uint32_t x60 = 122371U;

    t9 = (x57<=(x58&(x59*x60)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile int32_t x65 = -1;
	int32_t x66 = INT32_MIN;
	uint64_t x67 = UINT64_MAX;
	int8_t x68 = 0;
	static volatile int32_t t10 = 3;

    t10 = (x65<=(x66&(x67*x68)));

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x69 = -1;
	int64_t x70 = INT64_MAX;
	uint16_t x71 = UINT16_MAX;
	uint64_t x72 = UINT64_MAX;

    t11 = (x69<=(x70&(x71*x72)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int8_t x77 = INT8_MIN;
	int16_t x79 = INT16_MIN;
	int8_t x80 = -13;
	volatile int32_t t12 = -14;

    t12 = (x77<=(x78&(x79*x80)));

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	uint16_t x81 = UINT16_MAX;
	int32_t x82 = -12473;
	static int64_t x83 = -1LL;
	static volatile int32_t t13 = -5656;

    t13 = (x81<=(x82&(x83*x84)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	int16_t x86 = -1;
	volatile int32_t t14 = -185;

    t14 = (x85<=(x86&(x87*x88)));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int8_t x97 = INT8_MIN;
	uint8_t x98 = 0U;
	int8_t x100 = INT8_MAX;
	int32_t t15 = -5;

    t15 = (x97<=(x98&(x99*x100)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x101 = 34U;
	volatile int16_t x102 = -1559;
	int32_t t16 = 30733590;

    t16 = (x101<=(x102&(x103*x104)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x113 = -78820253359942LL;
	int8_t x114 = -14;
	int32_t x115 = 10759518;

    t17 = (x113<=(x114&(x115*x116)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int64_t x117 = 394261051131LL;
	volatile uint64_t x118 = 55734518418221LLU;
	int8_t x120 = 3;
	volatile int32_t t18 = 9;

    t18 = (x117<=(x118&(x119*x120)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int16_t x121 = -1;
	int64_t x122 = INT64_MIN;
	static int8_t x123 = INT8_MAX;
	static int8_t x124 = INT8_MIN;
	int32_t t19 = 3792;

    t19 = (x121<=(x122&(x123*x124)));

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	int64_t x126 = -1LL;
	int8_t x127 = 21;
	volatile uint64_t x128 = 5442788565880376LLU;
	int32_t t20 = -27554;

    t20 = (x125<=(x126&(x127*x128)));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x137 = 1207335992U;
	static uint32_t x138 = UINT32_MAX;
	volatile uint16_t x139 = 48U;
	int8_t x140 = -1;

    t21 = (x137<=(x138&(x139*x140)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x145 = -112;
	volatile int64_t x146 = INT64_MAX;
	static volatile uint16_t x147 = 198U;

    t22 = (x145<=(x146&(x147*x148)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x149 = -6LL;
	int16_t x150 = -1;
	volatile int32_t t23 = 2360940;

    t23 = (x149<=(x150&(x151*x152)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x153 = INT16_MAX;
	uint32_t x154 = 32862U;
	volatile uint32_t x156 = UINT32_MAX;
	volatile int32_t t24 = 5601;

    t24 = (x153<=(x154&(x155*x156)));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint16_t x157 = 44U;
	int64_t x158 = -7664673266071452LL;
	static int32_t x159 = -1;
	int16_t x160 = INT16_MIN;
	int32_t t25 = -23;

    t25 = (x157<=(x158&(x159*x160)));

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x165 = 18399186U;
	static int16_t x166 = -1;
	int32_t x167 = -1;
	int8_t x168 = -1;
	int32_t t26 = 0;

    t26 = (x165<=(x166&(x167*x168)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x169 = INT16_MAX;
	int32_t x171 = INT32_MIN;
	volatile uint32_t x172 = 3092110U;
	int32_t t27 = -189;

    t27 = (x169<=(x170&(x171*x172)));

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x173 = INT16_MIN;
	int16_t x174 = 0;
	int8_t x175 = -1;
	volatile uint64_t x176 = UINT64_MAX;
	int32_t t28 = 33331631;

    t28 = (x173<=(x174&(x175*x176)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x177 = INT32_MIN;
	int64_t x179 = -1LL;
	uint8_t x180 = UINT8_MAX;
	int32_t t29 = 2;

    t29 = (x177<=(x178&(x179*x180)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x181 = INT32_MAX;
	static volatile uint64_t x182 = 643961446665332604LLU;
	int16_t x183 = INT16_MIN;
	uint16_t x184 = 33U;
	int32_t t30 = -1124803;

    t30 = (x181<=(x182&(x183*x184)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x189 = 16;
	int8_t x190 = INT8_MIN;
	uint8_t x191 = UINT8_MAX;
	uint32_t x192 = 9551U;

    t31 = (x189<=(x190&(x191*x192)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x197 = INT16_MIN;
	volatile int16_t x199 = 3;
	int32_t t32 = 1;

    t32 = (x197<=(x198&(x199*x200)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	int64_t x205 = 9191LL;
	uint8_t x206 = 96U;
	volatile int8_t x207 = INT8_MAX;
	int8_t x208 = INT8_MIN;
	int32_t t33 = 25;

    t33 = (x205<=(x206&(x207*x208)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x210 = 6291;
	int8_t x211 = -5;
	static uint16_t x212 = 4U;
	volatile int32_t t34 = 983608;

    t34 = (x209<=(x210&(x211*x212)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	static int16_t x213 = -1;
	int16_t x214 = INT16_MIN;
	volatile uint64_t x215 = 126413880343LLU;
	static int32_t t35 = -464;

    t35 = (x213<=(x214&(x215*x216)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	static int64_t x217 = INT64_MIN;
	int32_t x218 = -947809;
	uint16_t x219 = 2073U;
	static volatile int32_t t36 = -44;

    t36 = (x217<=(x218&(x219*x220)));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	static int8_t x222 = -1;
	int64_t x223 = 272023433LL;
	volatile int32_t t37 = -29723904;

    t37 = (x221<=(x222&(x223*x224)));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	static volatile int16_t x229 = -4798;
	static volatile uint32_t x230 = 1U;
	volatile uint16_t x231 = 14U;
	int8_t x232 = -1;
	volatile int32_t t38 = 479048729;

    t38 = (x229<=(x230&(x231*x232)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	uint64_t x233 = 2661653855505569LLU;
	int64_t x234 = -49708491LL;
	uint8_t x235 = 9U;
	int32_t t39 = 0;

    t39 = (x233<=(x234&(x235*x236)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x237 = 106U;
	uint32_t x238 = 50U;
	volatile uint16_t x239 = 5691U;
	int32_t t40 = 106;

    t40 = (x237<=(x238&(x239*x240)));

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile int32_t x245 = INT32_MIN;
	uint8_t x246 = UINT8_MAX;
	uint32_t x247 = 7686U;

    t41 = (x245<=(x246&(x247*x248)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x249 = -1;
	volatile int16_t x252 = -1;
	static int32_t t42 = 58;

    t42 = (x249<=(x250&(x251*x252)));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	static int64_t x253 = -183LL;
	static int16_t x254 = 5767;
	static int8_t x255 = 0;
	static int32_t x256 = -1;
	volatile int32_t t43 = 247684;

    t43 = (x253<=(x254&(x255*x256)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int32_t x257 = INT32_MIN;
	int16_t x258 = INT16_MIN;
	uint32_t x259 = 8868615U;
	int32_t t44 = -48049;

    t44 = (x257<=(x258&(x259*x260)));

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	uint8_t x261 = 10U;
	uint32_t x262 = 443735160U;
	int16_t x263 = INT16_MAX;

    t45 = (x261<=(x262&(x263*x264)));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	static int32_t x265 = 14478;
	static int16_t x266 = INT16_MIN;
	static uint16_t x267 = 39U;
	int8_t x268 = INT8_MIN;
	volatile int32_t t46 = -980;

    t46 = (x265<=(x266&(x267*x268)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	uint32_t x269 = UINT32_MAX;
	static volatile int64_t x270 = -395162768LL;
	uint8_t x271 = 0U;
	volatile int8_t x272 = INT8_MIN;

    t47 = (x269<=(x270&(x271*x272)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int32_t x274 = INT32_MIN;
	uint64_t x275 = 3107086LLU;
	int64_t x276 = -107LL;
	volatile int32_t t48 = 3;

    t48 = (x273<=(x274&(x275*x276)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x281 = INT8_MIN;
	int64_t x282 = INT64_MIN;
	static int16_t x283 = -275;
	uint64_t x284 = UINT64_MAX;
	static volatile int32_t t49 = 0;

    t49 = (x281<=(x282&(x283*x284)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint32_t x285 = 72203138U;
	int8_t x287 = -1;
	static int16_t x288 = -433;

    t50 = (x285<=(x286&(x287*x288)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x290 = INT16_MIN;
	uint8_t x291 = 29U;
	static int32_t x292 = -1;

    t51 = (x289<=(x290&(x291*x292)));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int16_t x297 = INT16_MAX;
	int16_t x299 = -1264;
	volatile int32_t x300 = -8407;
	int32_t t52 = -110;

    t52 = (x297<=(x298&(x299*x300)));

    if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
    	int16_t x305 = 19;
	volatile int32_t x306 = -1;
	int16_t x307 = INT16_MIN;
	int64_t x308 = 126252916LL;

    t53 = (x305<=(x306&(x307*x308)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x313 = INT64_MIN;
	static uint64_t x315 = 222157430LLU;
	int32_t x316 = -28443647;
	int32_t t54 = 805703781;

    t54 = (x313<=(x314&(x315*x316)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	static int32_t x317 = -1;
	int16_t x318 = -1;
	uint16_t x320 = 7829U;
	int32_t t55 = -420;

    t55 = (x317<=(x318&(x319*x320)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	static volatile int16_t x325 = -7586;
	int8_t x327 = INT8_MIN;
	int8_t x328 = -25;
	int32_t t56 = -7095;

    t56 = (x325<=(x326&(x327*x328)));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	uint32_t x329 = UINT32_MAX;
	uint32_t x331 = UINT32_MAX;
	uint64_t x332 = UINT64_MAX;

    t57 = (x329<=(x330&(x331*x332)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int64_t x341 = -1LL;
	uint64_t x342 = UINT64_MAX;
	int16_t x343 = -1;
	uint16_t x344 = UINT16_MAX;
	volatile int32_t t58 = 1980;

    t58 = (x341<=(x342&(x343*x344)));

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x349 = 24;
	uint32_t x350 = 1000U;
	uint32_t x351 = 3672U;
	static uint64_t x352 = 18706558850LLU;
	volatile int32_t t59 = -21876997;

    t59 = (x349<=(x350&(x351*x352)));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x353 = -165;
	uint16_t x354 = 71U;
	volatile int8_t x355 = 0;
	static int64_t x356 = -1LL;
	int32_t t60 = -1;

    t60 = (x353<=(x354&(x355*x356)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x357 = 11682;
	uint8_t x358 = 8U;
	uint8_t x359 = 1U;
	volatile int32_t t61 = -3737;

    t61 = (x357<=(x358&(x359*x360)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	int8_t x362 = INT8_MIN;
	uint32_t x363 = 6119U;
	volatile int16_t x364 = -2981;
	volatile int32_t t62 = -126163;

    t62 = (x361<=(x362&(x363*x364)));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint32_t x369 = UINT32_MAX;
	int8_t x370 = 1;
	static int8_t x371 = INT8_MIN;
	uint32_t x372 = UINT32_MAX;

    t63 = (x369<=(x370&(x371*x372)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	static int64_t x373 = INT64_MIN;
	int8_t x374 = INT8_MIN;
	static int8_t x375 = 3;
	volatile int32_t t64 = 1024844;

    t64 = (x373<=(x374&(x375*x376)));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x381 = UINT8_MAX;
	static volatile uint16_t x382 = UINT16_MAX;
	volatile int32_t t65 = -461;

    t65 = (x381<=(x382&(x383*x384)));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	static int64_t x385 = -94232LL;
	int64_t x386 = INT64_MIN;
	static uint64_t x387 = 22865278239LLU;
	static int64_t x388 = -876LL;

    t66 = (x385<=(x386&(x387*x388)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint64_t x395 = UINT64_MAX;
	static uint8_t x396 = UINT8_MAX;
	volatile int32_t t67 = 986;

    t67 = (x393<=(x394&(x395*x396)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x397 = 310608574255117595LL;
	static volatile int8_t x398 = 0;
	static int16_t x399 = 382;
	uint8_t x400 = 23U;
	static volatile int32_t t68 = 394386746;

    t68 = (x397<=(x398&(x399*x400)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	volatile int16_t x405 = INT16_MAX;
	static int16_t x406 = INT16_MIN;
	uint32_t x408 = UINT32_MAX;
	volatile int32_t t69 = -3096;

    t69 = (x405<=(x406&(x407*x408)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	static int64_t x410 = INT64_MAX;
	volatile uint16_t x412 = UINT16_MAX;
	volatile int32_t t70 = 10747;

    t70 = (x409<=(x410&(x411*x412)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int32_t x413 = -576728;
	volatile int8_t x416 = INT8_MIN;
	volatile int32_t t71 = 5781047;

    t71 = (x413<=(x414&(x415*x416)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	static uint8_t x421 = UINT8_MAX;
	int32_t x422 = INT32_MAX;
	static uint64_t x423 = 11650672730LLU;
	int8_t x424 = -1;
	volatile int32_t t72 = 201672214;

    t72 = (x421<=(x422&(x423*x424)));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x430 = INT32_MIN;
	uint64_t x431 = UINT64_MAX;
	uint16_t x432 = 0U;
	int32_t t73 = -1010919001;

    t73 = (x429<=(x430&(x431*x432)));

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint32_t x433 = UINT32_MAX;
	int16_t x434 = -1;
	uint8_t x435 = 20U;
	uint32_t x436 = UINT32_MAX;

    t74 = (x433<=(x434&(x435*x436)));

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x437 = 303683436U;
	int32_t x438 = -1;
	int64_t x439 = -497762910LL;
	volatile int16_t x440 = 4794;
	volatile int32_t t75 = -26207388;

    t75 = (x437<=(x438&(x439*x440)));

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	volatile int32_t x446 = INT32_MAX;
	static volatile uint8_t x447 = 21U;
	static int16_t x448 = -1;
	volatile int32_t t76 = 6194018;

    t76 = (x445<=(x446&(x447*x448)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x449 = INT32_MIN;
	static uint64_t x450 = 618928983043LLU;
	volatile int16_t x451 = -1;
	uint8_t x452 = UINT8_MAX;
	volatile int32_t t77 = -1;

    t77 = (x449<=(x450&(x451*x452)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint64_t x453 = 412681849509LLU;
	int32_t x454 = INT32_MIN;
	volatile uint16_t x455 = UINT16_MAX;
	volatile uint64_t x456 = 586696411919LLU;
	volatile int32_t t78 = 0;

    t78 = (x453<=(x454&(x455*x456)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x457 = 462U;
	uint16_t x458 = UINT16_MAX;
	uint16_t x459 = 5922U;
	int64_t x460 = -1LL;
	int32_t t79 = -5;

    t79 = (x457<=(x458&(x459*x460)));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	int32_t x461 = INT32_MIN;
	int8_t x462 = -29;
	int8_t x463 = -1;
	int8_t x464 = INT8_MAX;
	volatile int32_t t80 = 286746;

    t80 = (x461<=(x462&(x463*x464)));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x469 = INT32_MIN;
	static uint32_t x470 = 4015U;
	uint32_t x471 = 20275U;
	volatile int32_t t81 = 47626699;

    t81 = (x469<=(x470&(x471*x472)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x473 = -246848829;
	int64_t x474 = INT64_MIN;
	int8_t x475 = 1;
	static volatile int32_t t82 = -335336003;

    t82 = (x473<=(x474&(x475*x476)));

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x477 = 4296LL;
	static uint64_t x479 = 3701721LLU;
	static int8_t x480 = 25;
	int32_t t83 = 26;

    t83 = (x477<=(x478&(x479*x480)));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x482 = UINT8_MAX;
	int8_t x483 = -1;
	int16_t x484 = -1;
	int32_t t84 = 1;

    t84 = (x481<=(x482&(x483*x484)));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x489 = 1783980U;
	volatile int8_t x490 = INT8_MAX;
	uint8_t x491 = UINT8_MAX;
	volatile int32_t x492 = 1246665;
	int32_t t85 = 507326282;

    t85 = (x489<=(x490&(x491*x492)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x493 = -1;
	uint64_t x494 = UINT64_MAX;
	static int16_t x495 = 12;
	uint8_t x496 = 3U;
	volatile int32_t t86 = 241731;

    t86 = (x493<=(x494&(x495*x496)));

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x498 = 860645;
	int16_t x499 = INT16_MAX;
	int32_t t87 = -128543615;

    t87 = (x497<=(x498&(x499*x500)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int32_t x501 = INT32_MIN;
	int16_t x502 = 437;
	static uint32_t x503 = UINT32_MAX;
	int32_t t88 = 0;

    t88 = (x501<=(x502&(x503*x504)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x505 = -1LL;
	int16_t x506 = -1;
	uint8_t x507 = UINT8_MAX;
	uint16_t x508 = 5823U;

    t89 = (x505<=(x506&(x507*x508)));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x509 = -2;
	int64_t x510 = -12345987638369014LL;
	uint32_t x511 = UINT32_MAX;
	int32_t x512 = 65735278;
	volatile int32_t t90 = 1396;

    t90 = (x509<=(x510&(x511*x512)));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	int8_t x514 = INT8_MIN;
	int32_t x515 = INT32_MAX;
	volatile int32_t t91 = -77721101;

    t91 = (x513<=(x514&(x515*x516)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x517 = 4558U;
	volatile int16_t x518 = -204;
	volatile uint8_t x519 = 120U;
	uint32_t x520 = 1U;
	static int32_t t92 = -59;

    t92 = (x517<=(x518&(x519*x520)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int32_t x521 = -3731;
	static uint16_t x522 = UINT16_MAX;
	int16_t x523 = INT16_MIN;
	volatile int32_t t93 = -117305745;

    t93 = (x521<=(x522&(x523*x524)));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x525 = UINT16_MAX;
	static volatile int32_t x528 = 696;
	int32_t t94 = 28123238;

    t94 = (x525<=(x526&(x527*x528)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int64_t x530 = 568834LL;
	static volatile int64_t x532 = -1LL;
	int32_t t95 = 1;

    t95 = (x529<=(x530&(x531*x532)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint16_t x533 = UINT16_MAX;
	volatile uint16_t x536 = 20U;
	int32_t t96 = 588185567;

    t96 = (x533<=(x534&(x535*x536)));

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	int16_t x549 = -1;
	int32_t x551 = -1;
	volatile int32_t x552 = -1;
	int32_t t97 = -201089;

    t97 = (x549<=(x550&(x551*x552)));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	uint64_t x553 = UINT64_MAX;
	int32_t x555 = 3;
	uint32_t x556 = UINT32_MAX;
	int32_t t98 = 1948;

    t98 = (x553<=(x554&(x555*x556)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int64_t x561 = INT64_MIN;
	int8_t x562 = -27;
	int16_t x563 = -1;
	int64_t x564 = -1LL;
	volatile int32_t t99 = -942;

    t99 = (x561<=(x562&(x563*x564)));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	uint16_t x566 = 475U;
	int32_t x567 = INT32_MAX;
	static volatile uint64_t x568 = 652384284835658LLU;
	int32_t t100 = -581528;

    t100 = (x565<=(x566&(x567*x568)));

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x574 = INT32_MIN;
	uint64_t x575 = UINT64_MAX;
	int16_t x576 = 3;
	int32_t t101 = -87;

    t101 = (x573<=(x574&(x575*x576)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x577 = -1;
	int16_t x578 = 1865;
	int8_t x579 = INT8_MAX;
	static int32_t t102 = 62346;

    t102 = (x577<=(x578&(x579*x580)));

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x581 = INT32_MIN;
	static uint32_t x582 = 0U;
	int32_t x583 = 7;
	volatile int32_t t103 = -3701075;

    t103 = (x581<=(x582&(x583*x584)));

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x585 = 172607;
	int16_t x586 = INT16_MIN;
	int16_t x587 = -1;
	int32_t x588 = 19;

    t104 = (x585<=(x586&(x587*x588)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint8_t x589 = UINT8_MAX;
	uint8_t x590 = UINT8_MAX;
	int32_t x591 = -1;
	int16_t x592 = 113;
	int32_t t105 = -2681803;

    t105 = (x589<=(x590&(x591*x592)));

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	static volatile uint32_t x595 = 345843782U;
	static int64_t x596 = 12LL;
	static int32_t t106 = 4746904;

    t106 = (x593<=(x594&(x595*x596)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x598 = UINT64_MAX;
	static int32_t x599 = INT32_MIN;
	int8_t x600 = 1;

    t107 = (x597<=(x598&(x599*x600)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x602 = -1;
	static uint8_t x603 = 1U;
	int32_t x604 = -125;
	int32_t t108 = 12552;

    t108 = (x601<=(x602&(x603*x604)));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int16_t x605 = -1;
	int16_t x606 = INT16_MIN;
	volatile uint16_t x607 = UINT16_MAX;
	volatile int32_t x608 = -27;

    t109 = (x605<=(x606&(x607*x608)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x617 = -60;
	volatile uint16_t x619 = 443U;
	int32_t x620 = 7;
	volatile int32_t t110 = 1452553;

    t110 = (x617<=(x618&(x619*x620)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	int16_t x621 = INT16_MIN;
	int8_t x622 = -19;
	int64_t x623 = INT64_MAX;
	volatile int8_t x624 = -1;

    t111 = (x621<=(x622&(x623*x624)));

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x625 = 149482LLU;
	volatile int8_t x626 = 42;
	int32_t x627 = -1;
	int16_t x628 = INT16_MIN;
	int32_t t112 = -129292;

    t112 = (x625<=(x626&(x627*x628)));

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x629 = -4;
	volatile int16_t x630 = 3652;
	int8_t x632 = INT8_MIN;
	int32_t t113 = 116989;

    t113 = (x629<=(x630&(x631*x632)));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	static int64_t x633 = INT64_MAX;
	static volatile int32_t x634 = 0;
	volatile int32_t t114 = 6;

    t114 = (x633<=(x634&(x635*x636)));

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile int16_t x638 = INT16_MIN;
	volatile int64_t x639 = -6366678LL;
	int8_t x640 = 2;

    t115 = (x637<=(x638&(x639*x640)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile int64_t x645 = -195820259LL;
	uint16_t x646 = 1U;
	static int16_t x647 = INT16_MAX;
	int8_t x648 = INT8_MAX;
	volatile int32_t t116 = -337369217;

    t116 = (x645<=(x646&(x647*x648)));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x653 = -15;
	int32_t x654 = -163155;
	int16_t x656 = INT16_MIN;
	int32_t t117 = 113529;

    t117 = (x653<=(x654&(x655*x656)));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	static uint16_t x658 = UINT16_MAX;
	int32_t t118 = 984019262;

    t118 = (x657<=(x658&(x659*x660)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static uint16_t x662 = UINT16_MAX;
	int16_t x663 = 429;
	volatile int8_t x664 = INT8_MIN;
	int32_t t119 = 3452;

    t119 = (x661<=(x662&(x663*x664)));

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	int8_t x673 = INT8_MIN;
	int32_t x674 = -9;
	uint64_t x675 = UINT64_MAX;
	static uint16_t x676 = 109U;

    t120 = (x673<=(x674&(x675*x676)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x681 = UINT16_MAX;
	int64_t x682 = INT64_MIN;
	static int64_t x683 = -1LL;
	int64_t x684 = 199398949581172LL;
	static int32_t t121 = -54825982;

    t121 = (x681<=(x682&(x683*x684)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x694 = INT8_MIN;
	static int32_t x695 = -1;
	int16_t x696 = -7351;
	static volatile int32_t t122 = 18;

    t122 = (x693<=(x694&(x695*x696)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x697 = INT16_MIN;
	static volatile int8_t x699 = INT8_MIN;
	int8_t x700 = INT8_MIN;
	volatile int32_t t123 = 88435;

    t123 = (x697<=(x698&(x699*x700)));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x705 = -125;
	int16_t x706 = INT16_MAX;
	int16_t x708 = -1;
	volatile int32_t t124 = -2;

    t124 = (x705<=(x706&(x707*x708)));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	uint64_t x709 = UINT64_MAX;
	int32_t x710 = 5684;
	int8_t x711 = INT8_MAX;
	volatile uint64_t x712 = UINT64_MAX;

    t125 = (x709<=(x710&(x711*x712)));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x713 = INT64_MIN;
	int16_t x714 = -3465;
	int64_t x716 = -7507013009758LL;
	int32_t t126 = 3510;

    t126 = (x713<=(x714&(x715*x716)));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int64_t x717 = 14340LL;
	static uint64_t x718 = 8590975477817LLU;
	int8_t x719 = INT8_MAX;
	int16_t x720 = -4280;
	volatile int32_t t127 = -47587355;

    t127 = (x717<=(x718&(x719*x720)));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x730 = INT64_MIN;
	static uint32_t x731 = 194U;
	static volatile int32_t t128 = -326038277;

    t128 = (x729<=(x730&(x731*x732)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x733 = INT64_MIN;
	volatile uint64_t x735 = UINT64_MAX;
	volatile int8_t x736 = -1;
	static int32_t t129 = -960859265;

    t129 = (x733<=(x734&(x735*x736)));

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	static int8_t x737 = 0;
	volatile int64_t x739 = 26559130480LL;
	static volatile uint64_t x740 = UINT64_MAX;
	static volatile int32_t t130 = -6923564;

    t130 = (x737<=(x738&(x739*x740)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int8_t x741 = -21;
	int64_t x742 = INT64_MIN;
	volatile uint64_t x743 = 13725050781605LLU;
	uint16_t x744 = 20U;

    t131 = (x741<=(x742&(x743*x744)));

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x745 = -1;
	int32_t x747 = -1;
	static volatile uint8_t x748 = 10U;
	volatile int32_t t132 = -217892;

    t132 = (x745<=(x746&(x747*x748)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x749 = UINT64_MAX;
	int16_t x750 = INT16_MIN;
	int16_t x751 = INT16_MIN;
	int32_t t133 = 5566;

    t133 = (x749<=(x750&(x751*x752)));

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x753 = INT8_MIN;
	volatile uint8_t x754 = UINT8_MAX;
	uint64_t x755 = UINT64_MAX;
	volatile uint64_t x756 = 90119530948943696LLU;
	volatile int32_t t134 = -15;

    t134 = (x753<=(x754&(x755*x756)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x761 = 13;
	int32_t t135 = -13516431;

    t135 = (x761<=(x762&(x763*x764)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	uint16_t x769 = 9167U;
	volatile int64_t x771 = -1LL;
	uint64_t x772 = 558791549528297735LLU;
	int32_t t136 = -13443369;

    t136 = (x769<=(x770&(x771*x772)));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x773 = UINT32_MAX;
	volatile int64_t x775 = 1410282306LL;
	int32_t x776 = -1;
	volatile int32_t t137 = 33283752;

    t137 = (x773<=(x774&(x775*x776)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int16_t x779 = 7;
	int32_t t138 = 259645225;

    t138 = (x777<=(x778&(x779*x780)));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x781 = 926;
	int64_t x782 = -1LL;
	int16_t x783 = -1;
	volatile int32_t t139 = -23014774;

    t139 = (x781<=(x782&(x783*x784)));

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile uint64_t x785 = 149LLU;
	int8_t x787 = INT8_MAX;
	static int32_t x788 = -1;

    t140 = (x785<=(x786&(x787*x788)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x793 = 58LLU;
	static volatile int32_t x795 = -280;
	volatile int32_t t141 = 15025665;

    t141 = (x793<=(x794&(x795*x796)));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint64_t x797 = 29163384810213933LLU;
	volatile uint32_t x798 = UINT32_MAX;
	int64_t x799 = INT64_MAX;
	static uint64_t x800 = 1276378LLU;

    t142 = (x797<=(x798&(x799*x800)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x809 = 2;
	int64_t x810 = INT64_MIN;
	static uint8_t x811 = 18U;
	volatile uint32_t x812 = 180081680U;

    t143 = (x809<=(x810&(x811*x812)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint64_t x813 = UINT64_MAX;
	uint8_t x814 = UINT8_MAX;
	volatile int32_t x815 = INT32_MIN;
	static uint64_t x816 = 1242711234467219LLU;
	volatile int32_t t144 = -324472;

    t144 = (x813<=(x814&(x815*x816)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x819 = 5679LLU;
	uint16_t x820 = 9266U;

    t145 = (x817<=(x818&(x819*x820)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int32_t x825 = INT32_MAX;
	static uint64_t x826 = 7LLU;
	uint64_t x827 = UINT64_MAX;
	int32_t x828 = 230028967;
	int32_t t146 = -118115034;

    t146 = (x825<=(x826&(x827*x828)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	static int64_t x833 = INT64_MIN;
	int8_t x834 = -1;
	static uint8_t x835 = UINT8_MAX;
	int8_t x836 = INT8_MAX;
	volatile int32_t t147 = -1589;

    t147 = (x833<=(x834&(x835*x836)));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x837 = 3272997LLU;
	volatile int64_t x838 = -1LL;
	static volatile uint16_t x839 = 0U;
	volatile int32_t x840 = INT32_MIN;
	volatile int32_t t148 = -14;

    t148 = (x837<=(x838&(x839*x840)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	uint16_t x841 = UINT16_MAX;
	volatile uint32_t x844 = 44411293U;
	int32_t t149 = -14;

    t149 = (x841<=(x842&(x843*x844)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x845 = UINT32_MAX;
	volatile int32_t x846 = INT32_MIN;
	int8_t x847 = INT8_MAX;
	volatile int32_t t150 = 5;

    t150 = (x845<=(x846&(x847*x848)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint32_t x853 = 11880U;
	volatile int64_t x854 = INT64_MIN;
	uint64_t x855 = 13219LLU;
	int32_t t151 = -37;

    t151 = (x853<=(x854&(x855*x856)));

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	int64_t x861 = -778623125LL;
	int64_t x862 = -60355174LL;
	int32_t x863 = 2702;
	uint64_t x864 = UINT64_MAX;

    t152 = (x861<=(x862&(x863*x864)));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x866 = INT64_MIN;
	int32_t x867 = INT32_MIN;
	volatile int32_t t153 = 56376;

    t153 = (x865<=(x866&(x867*x868)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	static volatile int32_t x869 = -1;
	int32_t x870 = INT32_MAX;
	static int8_t x871 = INT8_MIN;
	uint8_t x872 = 13U;
	int32_t t154 = -544658;

    t154 = (x869<=(x870&(x871*x872)));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x873 = 62U;
	volatile int8_t x874 = INT8_MAX;
	static volatile int8_t x875 = -1;
	uint16_t x876 = 103U;

    t155 = (x873<=(x874&(x875*x876)));

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint64_t x877 = 426LLU;
	int16_t x879 = INT16_MIN;
	int16_t x880 = INT16_MIN;
	volatile int32_t t156 = -1632;

    t156 = (x877<=(x878&(x879*x880)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	static volatile int8_t x886 = INT8_MIN;
	static int16_t x887 = -13;
	static volatile int32_t x888 = -10333949;
	volatile int32_t t157 = 29079;

    t157 = (x885<=(x886&(x887*x888)));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x901 = -1LL;
	volatile uint64_t x902 = 2LLU;
	int16_t x903 = -4831;
	uint16_t x904 = UINT16_MAX;
	volatile int32_t t158 = -13;

    t158 = (x901<=(x902&(x903*x904)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint32_t x905 = UINT32_MAX;
	static volatile uint16_t x908 = 526U;
	static int32_t t159 = 71;

    t159 = (x905<=(x906&(x907*x908)));

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x912 = 21753U;
	volatile int32_t t160 = -81584;

    t160 = (x909<=(x910&(x911*x912)));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x913 = INT16_MIN;
	static int16_t x914 = -10;
	volatile int8_t x916 = -1;
	volatile int32_t t161 = -120;

    t161 = (x913<=(x914&(x915*x916)));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	uint8_t x918 = 6U;
	int8_t x919 = INT8_MIN;
	static int64_t x920 = -1LL;
	static volatile int32_t t162 = -4477919;

    t162 = (x917<=(x918&(x919*x920)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	static int8_t x921 = -1;
	volatile int32_t x923 = 493662;
	int16_t x924 = -1;
	int32_t t163 = 201896906;

    t163 = (x921<=(x922&(x923*x924)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	uint8_t x929 = 7U;
	static volatile uint64_t x930 = 243LLU;
	int16_t x931 = -7348;
	static int8_t x932 = INT8_MIN;
	volatile int32_t t164 = 15;

    t164 = (x929<=(x930&(x931*x932)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint8_t x937 = UINT8_MAX;
	int8_t x939 = 4;
	int32_t x940 = -1;
	static int32_t t165 = 6174837;

    t165 = (x937<=(x938&(x939*x940)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x941 = INT16_MIN;
	volatile int64_t x942 = INT64_MIN;
	int8_t x943 = INT8_MIN;
	int8_t x944 = 0;
	volatile int32_t t166 = 7136021;

    t166 = (x941<=(x942&(x943*x944)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static uint64_t x953 = 7419344355644LLU;
	int32_t x954 = -556949;
	int64_t x955 = -1LL;
	volatile int32_t x956 = -32657657;

    t167 = (x953<=(x954&(x955*x956)));

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x957 = INT32_MIN;
	int32_t x958 = INT32_MIN;
	int64_t x959 = 1642LL;
	uint8_t x960 = 77U;
	static int32_t t168 = -132573753;

    t168 = (x957<=(x958&(x959*x960)));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static volatile uint32_t x962 = 7418499U;
	uint16_t x964 = UINT16_MAX;
	static int32_t t169 = -8;

    t169 = (x961<=(x962&(x963*x964)));

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	int16_t x965 = INT16_MAX;
	uint64_t x966 = 2469276230107858LLU;
	int8_t x967 = 1;
	int16_t x968 = INT16_MAX;

    t170 = (x965<=(x966&(x967*x968)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint64_t x974 = 294055826LLU;
	static volatile int16_t x975 = INT16_MAX;
	static volatile int8_t x976 = -1;
	volatile int32_t t171 = 5353;

    t171 = (x973<=(x974&(x975*x976)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static uint8_t x982 = UINT8_MAX;
	volatile int8_t x983 = INT8_MIN;
	static int64_t x984 = -1LL;
	volatile int32_t t172 = 491;

    t172 = (x981<=(x982&(x983*x984)));

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x990 = 1;
	uint32_t x992 = 611413U;
	volatile int32_t t173 = 1971811;

    t173 = (x989<=(x990&(x991*x992)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int16_t x994 = -9080;
	uint64_t x995 = UINT64_MAX;
	int32_t t174 = 2;

    t174 = (x993<=(x994&(x995*x996)));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x997 = -1;
	int32_t x998 = INT32_MIN;
	uint32_t x999 = UINT32_MAX;
	int16_t x1000 = 2455;
	volatile int32_t t175 = -115621;

    t175 = (x997<=(x998&(x999*x1000)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	uint8_t x1001 = 1U;
	volatile uint64_t x1002 = UINT64_MAX;
	uint64_t x1003 = 172772638379927247LLU;
	static int16_t x1004 = -482;
	volatile int32_t t176 = 1242733;

    t176 = (x1001<=(x1002&(x1003*x1004)));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x1006 = 3LLU;
	uint8_t x1007 = 0U;
	uint32_t x1008 = 7U;
	int32_t t177 = 54;

    t177 = (x1005<=(x1006&(x1007*x1008)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x1009 = INT32_MIN;
	volatile uint32_t x1010 = 2346118U;
	int64_t x1011 = 31LL;
	uint16_t x1012 = UINT16_MAX;
	volatile int32_t t178 = -538292;

    t178 = (x1009<=(x1010&(x1011*x1012)));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x1017 = INT64_MIN;
	static volatile uint8_t x1019 = 3U;
	int8_t x1020 = INT8_MAX;
	volatile int32_t t179 = -751159897;

    t179 = (x1017<=(x1018&(x1019*x1020)));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int64_t x1021 = -1LL;
	int64_t x1022 = -1LL;
	static int16_t x1023 = INT16_MIN;
	static uint32_t x1024 = 50U;
	int32_t t180 = -45;

    t180 = (x1021<=(x1022&(x1023*x1024)));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x1025 = 64099264854LLU;
	volatile uint64_t x1026 = 1492488695LLU;
	int8_t x1027 = -1;
	uint16_t x1028 = 6826U;
	static int32_t t181 = -18;

    t181 = (x1025<=(x1026&(x1027*x1028)));

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	uint8_t x1029 = 1U;
	uint8_t x1030 = 14U;
	int16_t x1031 = INT16_MAX;
	volatile int32_t t182 = 127786603;

    t182 = (x1029<=(x1030&(x1031*x1032)));

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x1033 = 13823;
	static volatile int8_t x1034 = 1;
	int16_t x1035 = INT16_MAX;
	int16_t x1036 = INT16_MAX;
	int32_t t183 = 5131275;

    t183 = (x1033<=(x1034&(x1035*x1036)));

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint8_t x1037 = 1U;
	int16_t x1039 = INT16_MAX;
	volatile int16_t x1040 = INT16_MIN;

    t184 = (x1037<=(x1038&(x1039*x1040)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1041 = INT64_MAX;
	volatile int8_t x1042 = 0;
	int8_t x1043 = INT8_MAX;
	int8_t x1044 = 1;

    t185 = (x1041<=(x1042&(x1043*x1044)));

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	static uint16_t x1045 = 372U;
	int64_t x1047 = 129LL;
	int8_t x1048 = -1;
	int32_t t186 = -9;

    t186 = (x1045<=(x1046&(x1047*x1048)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1054 = 61246615288175LLU;
	uint16_t x1056 = 16704U;
	volatile int32_t t187 = 960325585;

    t187 = (x1053<=(x1054&(x1055*x1056)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1057 = INT8_MIN;
	int64_t x1058 = 777531640561457LL;
	int8_t x1059 = INT8_MAX;
	static int16_t x1060 = 325;
	volatile int32_t t188 = -606128366;

    t188 = (x1057<=(x1058&(x1059*x1060)));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1061 = 221464253LLU;
	volatile int16_t x1063 = INT16_MIN;
	uint8_t x1064 = UINT8_MAX;

    t189 = (x1061<=(x1062&(x1063*x1064)));

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	volatile int16_t x1065 = INT16_MIN;
	int16_t x1067 = INT16_MIN;
	int8_t x1068 = 53;

    t190 = (x1065<=(x1066&(x1067*x1068)));

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	static int32_t x1078 = 1;
	static uint64_t x1079 = 2669023LLU;
	static int8_t x1080 = 1;
	int32_t t191 = -470;

    t191 = (x1077<=(x1078&(x1079*x1080)));

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x1081 = 400965321U;
	int32_t x1082 = -46871;
	int16_t x1083 = 4;
	uint64_t x1084 = 4600903451766725841LLU;
	volatile int32_t t192 = -7965;

    t192 = (x1081<=(x1082&(x1083*x1084)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x1093 = UINT64_MAX;
	int8_t x1094 = INT8_MIN;
	int8_t x1096 = INT8_MIN;
	int32_t t193 = 511288;

    t193 = (x1093<=(x1094&(x1095*x1096)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x1098 = -11803;
	int8_t x1099 = -3;
	volatile int32_t t194 = 1;

    t194 = (x1097<=(x1098&(x1099*x1100)));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x1101 = -1LL;
	int16_t x1102 = 7;
	static int16_t x1103 = INT16_MAX;

    t195 = (x1101<=(x1102&(x1103*x1104)));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile uint16_t x1105 = 1188U;
	volatile int8_t x1107 = INT8_MIN;
	volatile int8_t x1108 = 31;
	volatile int32_t t196 = -462470;

    t196 = (x1105<=(x1106&(x1107*x1108)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x1109 = UINT32_MAX;
	uint64_t x1111 = 5669LLU;
	static int16_t x1112 = -4;

    t197 = (x1109<=(x1110&(x1111*x1112)));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint64_t x1113 = 121182260932602192LLU;
	uint64_t x1114 = 0LLU;
	static int64_t x1115 = INT64_MAX;
	static int8_t x1116 = -1;
	int32_t t198 = -10;

    t198 = (x1113<=(x1114&(x1115*x1116)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	static volatile int64_t x1121 = INT64_MAX;
	static int16_t x1123 = INT16_MIN;
	volatile int8_t x1124 = -25;

    t199 = (x1121<=(x1122&(x1123*x1124)));

    if (t199 != 0) { NG(); } else { ; }
	
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

