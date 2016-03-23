
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

int8_t x3 = INT8_MIN;
int32_t x6 = 11944;
uint8_t x7 = 70U;
static int16_t x11 = INT16_MIN;
uint64_t t2 = 6LLU;
volatile uint8_t x13 = UINT8_MAX;
uint64_t x15 = 7138LLU;
int8_t x16 = INT8_MAX;
uint64_t x18 = 3LLU;
static volatile uint64_t t4 = 93247416680383644LLU;
uint32_t x23 = UINT32_MAX;
uint64_t x41 = UINT64_MAX;
volatile int8_t x42 = INT8_MAX;
uint32_t x43 = UINT32_MAX;
int32_t x50 = INT32_MIN;
int32_t x55 = INT32_MAX;
int64_t x60 = INT64_MIN;
int64_t t14 = -96LL;
int16_t x68 = INT16_MIN;
volatile int64_t x70 = -9373309854LL;
int32_t t18 = -876881;
int32_t x92 = INT32_MAX;
int32_t x96 = INT32_MAX;
volatile int32_t t22 = 3;
static int64_t x103 = INT64_MIN;
volatile int32_t x114 = 10133;
volatile int64_t t24 = 2LL;
volatile int64_t x124 = -880LL;
static uint8_t x139 = 8U;
uint64_t x140 = 7913715553596042816LLU;
int32_t x147 = -1;
static volatile uint32_t t34 = 36709916U;
uint32_t x161 = UINT32_MAX;
int16_t x176 = 877;
int8_t x177 = INT8_MIN;
int64_t t37 = 1806087342665LL;
int32_t x188 = INT32_MAX;
int64_t t39 = 237064481802604LL;
uint8_t x203 = UINT8_MAX;
uint64_t x208 = UINT64_MAX;
static int8_t x210 = INT8_MIN;
static int32_t x212 = 704113244;
uint32_t x214 = 0U;
int64_t x216 = 1523909930LL;
int16_t x220 = INT16_MIN;
volatile uint16_t x240 = UINT16_MAX;
volatile int16_t x249 = INT16_MAX;
int8_t x250 = INT8_MAX;
static int8_t x255 = -1;
int8_t x258 = INT8_MAX;
int64_t t56 = -1594332146217199LL;
int8_t x272 = 21;
int64_t x282 = 197794LL;
int32_t t61 = 112;
volatile int64_t t62 = 217639070169533585LL;
uint32_t t66 = 2761711U;
uint8_t x317 = UINT8_MAX;
int64_t x329 = INT64_MAX;
int64_t x336 = 6LL;
int16_t x343 = -974;
int32_t x345 = -1;
int32_t t73 = 223824;
int64_t x355 = INT64_MAX;
static uint8_t x356 = 61U;
static int64_t t75 = INT64_MIN;
uint32_t x372 = 2U;
int32_t x373 = -1;
uint32_t x375 = 24U;
uint16_t x379 = 467U;
volatile int64_t x380 = -1LL;
uint8_t x384 = 2U;
static int8_t x385 = INT8_MIN;
volatile int64_t t83 = 301151LL;
int8_t x411 = 1;
uint64_t x417 = 1317064LLU;
int16_t x418 = 11122;
static volatile uint64_t t87 = 193223442945749LLU;
static volatile int8_t x430 = -1;
int16_t x435 = -1712;
volatile uint64_t t92 = 192262LLU;
static uint8_t x441 = UINT8_MAX;
volatile int64_t x445 = INT64_MAX;
int64_t x452 = INT64_MIN;
int64_t x459 = 1065611586092631963LL;
int64_t t97 = 486LL;
uint64_t x473 = UINT64_MAX;
volatile int8_t x481 = -1;
uint16_t x482 = 18963U;
uint32_t x483 = UINT32_MAX;
uint64_t t100 = 7451LLU;
volatile int64_t t101 = -14LL;
int16_t x493 = 3;
int16_t x507 = 320;
int8_t x522 = -2;
volatile int64_t x523 = INT64_MIN;
volatile int64_t t111 = -120196837LL;
int16_t x545 = INT16_MAX;
int16_t x546 = 116;
int16_t x547 = 1686;
volatile int64_t x550 = INT64_MIN;
static int32_t x555 = -321533;
uint64_t x561 = UINT64_MAX;
volatile int32_t x564 = INT32_MIN;
int64_t x567 = INT64_MIN;
int16_t x578 = INT16_MAX;
volatile uint64_t x591 = 27246984462094LLU;
int8_t x606 = 1;
uint32_t x608 = 24240276U;
uint32_t t126 = 198U;
static volatile int8_t x614 = 2;
int8_t x615 = INT8_MIN;
static int8_t x616 = 22;
static uint8_t x621 = UINT8_MAX;
volatile uint16_t x626 = 2U;
static volatile int32_t t129 = -388960727;
volatile uint8_t x636 = 4U;
int8_t x641 = -1;
int16_t x642 = 1;
int32_t x649 = -83535012;
int32_t x650 = INT32_MIN;
volatile uint16_t x654 = UINT16_MAX;
int64_t x660 = INT64_MIN;
static int8_t x664 = 13;
volatile uint64_t t138 = 6LLU;
int32_t t139 = 10924915;
int8_t x679 = INT8_MIN;
int8_t x683 = INT8_MAX;
int32_t x712 = -2090;
volatile uint8_t x725 = 11U;
volatile int64_t x728 = 81369888820737025LL;
volatile int16_t x729 = INT16_MIN;
int64_t x737 = 264403655644864LL;
uint8_t x742 = 37U;
volatile int32_t x745 = -1;
uint32_t x746 = 877U;
static volatile uint32_t x747 = 761U;
int8_t x757 = INT8_MIN;
volatile int64_t x770 = -1LL;
int32_t x772 = 10114207;
volatile uint32_t x775 = UINT32_MAX;
int16_t x778 = INT16_MIN;
volatile int16_t x782 = INT16_MAX;
uint16_t x784 = 824U;
static volatile uint16_t x794 = 7U;
static int16_t x795 = -1;
int32_t x800 = INT32_MIN;
int64_t x804 = 6LL;
uint32_t x809 = 341390966U;
volatile uint64_t x816 = 56500164200LLU;
volatile uint64_t t173 = 3191LLU;
static int8_t x819 = -1;
volatile int64_t x825 = INT64_MAX;
static volatile int32_t x827 = -1;
int32_t x831 = INT32_MIN;
uint32_t t183 = 5670U;
int16_t x858 = INT16_MIN;
int8_t x860 = INT8_MAX;
static volatile int64_t t184 = 1055406778243608LL;
volatile int8_t x877 = 6;
int64_t t186 = -32542103180264LL;
int32_t x881 = -1;
int64_t x882 = -21376410680LL;
volatile int64_t t187 = 18778291LL;
static int8_t x895 = -1;
int16_t x896 = 1;
static volatile int64_t t189 = 14772168277120952LL;
int8_t x908 = INT8_MAX;
int16_t x913 = -269;
uint16_t x915 = 250U;
volatile int32_t x916 = -1;
volatile int8_t x917 = 19;
int32_t x919 = INT32_MIN;
int64_t x926 = -1605571485254LL;
static int16_t x928 = 1;


void f0(void) {
    	static int64_t x1 = -1LL;
	volatile int8_t x2 = -25;
	int32_t x4 = -1;
	volatile int64_t t0 = 3693184813762852271LL;

    t0 = (((x1-x2)^x3)&x4);

    if (t0 != -104LL) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = 64;
	static uint64_t x8 = 100LLU;
	uint64_t t1 = 6081712885875889LLU;

    t1 = (((x5-x6)^x7)&x8);

    if (t1 != 68LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	volatile uint64_t x9 = UINT64_MAX;
	volatile int64_t x10 = -86617403479065035LL;
	static int64_t x12 = -1LL;

    t2 = (((x9-x10)^x11)&x12);

    if (t2 != 18360126670230454730LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	int32_t x14 = -14513471;
	uint64_t t3 = 17249976263543209LLU;

    t3 = (((x13-x14)^x15)&x16);

    if (t3 != 92LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	volatile int8_t x19 = INT8_MIN;
	int64_t x20 = -1LL;

    t4 = (((x17-x18)^x19)&x20);

    if (t4 != 9223372036854775933LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x21 = -1;
	static int32_t x22 = 170915;
	static uint8_t x24 = 8U;
	uint32_t t5 = 8210562U;

    t5 = (((x21-x22)^x23)&x24);

    if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x25 = INT32_MIN;
	uint64_t x26 = 7545757057442848LLU;
	int16_t x27 = -1;
	uint32_t x28 = 4U;
	uint64_t t6 = 1LLU;

    t6 = (((x25-x26)^x27)&x28);

    if (t6 != 4LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	int8_t x29 = -1;
	uint64_t x30 = 36488231870LLU;
	static int64_t x31 = INT64_MIN;
	static volatile int32_t x32 = -1;
	volatile uint64_t t7 = 6768814601408968720LLU;

    t7 = (((x29-x30)^x31)&x32);

    if (t7 != 9223372000366543937LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x33 = 0;
	int16_t x34 = INT16_MIN;
	static uint8_t x35 = UINT8_MAX;
	uint8_t x36 = 39U;
	volatile int32_t t8 = -36;

    t8 = (((x33-x34)^x35)&x36);

    if (t8 != 39) { NG(); } else { ; }
	
}

void f9(void) {
    	static int32_t x37 = -431634;
	int64_t x38 = INT64_MIN;
	uint8_t x39 = 39U;
	int16_t x40 = INT16_MAX;
	static volatile int64_t t9 = 81052996179240051LL;

    t9 = (((x37-x38)^x39)&x40);

    if (t9 != 27081LL) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile uint64_t x44 = 701664LLU;
	volatile uint64_t t10 = 335091993LLU;

    t10 = (((x41-x42)^x43)&x44);

    if (t10 != 96LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int64_t x49 = -1LL;
	volatile int16_t x51 = -4368;
	int8_t x52 = -1;
	volatile int64_t t11 = 3311885LL;

    t11 = (((x49-x50)^x51)&x52);

    if (t11 != -2147479281LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint32_t x53 = 1010U;
	uint16_t x54 = 18932U;
	uint64_t x56 = UINT64_MAX;
	uint64_t t12 = 1080623957901LLU;

    t12 = (((x53-x54)^x55)&x56);

    if (t12 != 2147501569LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x57 = 1LLU;
	int8_t x58 = INT8_MAX;
	volatile int16_t x59 = 34;
	uint64_t t13 = 3024924006323LLU;

    t13 = (((x57-x58)^x59)&x60);

    if (t13 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x61 = -973252LL;
	uint32_t x62 = 6U;
	static uint32_t x63 = 12101U;
	uint8_t x64 = 0U;

    t14 = (((x61-x62)^x63)&x64);

    if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = 80522130;
	int32_t x66 = -1;
	static int32_t x67 = 38142925;
	int32_t t15 = 57643996;

    t15 = (((x65-x66)^x67)&x68);

    if (t15 != 109740032) { NG(); } else { ; }
	
}

void f16(void) {
    	int8_t x69 = 0;
	volatile int32_t x71 = INT32_MAX;
	int16_t x72 = -1;
	static int64_t t16 = 44618115873LL;

    t16 = (((x69-x70)^x71)&x72);

    if (t16 != 9954042977LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x73 = INT64_MIN;
	volatile int32_t x74 = INT32_MIN;
	int32_t x75 = INT32_MIN;
	int8_t x76 = INT8_MIN;
	static int64_t t17 = -186275106813263011LL;

    t17 = (((x73-x74)^x75)&x76);

    if (t17 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f18(void) {
    	int16_t x77 = INT16_MIN;
	int32_t x78 = 88;
	volatile int32_t x79 = 1;
	uint16_t x80 = 12U;

    t18 = (((x77-x78)^x79)&x80);

    if (t18 != 8) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x81 = 107167842U;
	int64_t x82 = 1LL;
	int32_t x83 = 39359;
	uint32_t x84 = 950087169U;
	volatile int64_t t19 = 63443LL;

    t19 = (((x81-x82)^x83)&x84);

    if (t19 != 2164736LL) { NG(); } else { ; }
	
}

void f20(void) {
    	int16_t x85 = 40;
	int16_t x86 = -1;
	int8_t x87 = -1;
	static volatile uint64_t x88 = 162197626859158436LLU;
	uint64_t t20 = 215871758LLU;

    t20 = (((x85-x86)^x87)&x88);

    if (t20 != 162197626859158404LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	int8_t x89 = -17;
	uint64_t x90 = UINT64_MAX;
	int16_t x91 = INT16_MAX;
	uint64_t t21 = 1185884332LLU;

    t21 = (((x89-x90)^x91)&x92);

    if (t21 != 2147450895LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int32_t x93 = -1;
	volatile int16_t x94 = 33;
	int32_t x95 = -1;

    t22 = (((x93-x94)^x95)&x96);

    if (t22 != 33) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x101 = INT16_MIN;
	uint32_t x102 = UINT32_MAX;
	int16_t x104 = INT16_MIN;
	int64_t t23 = 3044085739LL;

    t23 = (((x101-x102)^x103)&x104);

    if (t23 != -9223372032559841280LL) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x113 = 13308LL;
	int16_t x115 = 15194;
	int64_t x116 = -1LL;

    t24 = (((x113-x114)^x115)&x116);

    if (t24 != 14141LL) { NG(); } else { ; }
	
}

void f25(void) {
    	static int32_t x117 = INT32_MIN;
	uint32_t x118 = 2075882253U;
	int8_t x119 = INT8_MIN;
	int8_t x120 = -1;
	uint32_t t25 = 1U;

    t25 = (((x117-x118)^x119)&x120);

    if (t25 != 4223366003U) { NG(); } else { ; }
	
}

void f26(void) {
    	uint64_t x121 = UINT64_MAX;
	volatile int8_t x122 = INT8_MIN;
	int64_t x123 = -204731705842544LL;
	uint64_t t26 = 867911218LLU;

    t26 = (((x121-x122)^x123)&x124);

    if (t26 != 18446539342003709056LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static uint8_t x129 = 76U;
	uint16_t x130 = UINT16_MAX;
	static uint32_t x131 = 2U;
	uint32_t x132 = 1464377U;
	uint32_t t27 = 75U;

    t27 = (((x129-x130)^x131)&x132);

    if (t27 != 1441801U) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x133 = UINT8_MAX;
	static volatile uint8_t x134 = 0U;
	int64_t x135 = INT64_MAX;
	uint32_t x136 = UINT32_MAX;
	int64_t t28 = 14067LL;

    t28 = (((x133-x134)^x135)&x136);

    if (t28 != 4294967040LL) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x137 = 10;
	int16_t x138 = INT16_MIN;
	uint64_t t29 = 68178195LLU;

    t29 = (((x137-x138)^x139)&x140);

    if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int32_t x141 = -15;
	int32_t x142 = -4206;
	static volatile uint8_t x143 = UINT8_MAX;
	int8_t x144 = INT8_MIN;
	int32_t t30 = 66;

    t30 = (((x141-x142)^x143)&x144);

    if (t30 != 4224) { NG(); } else { ; }
	
}

void f31(void) {
    	uint8_t x145 = UINT8_MAX;
	volatile int32_t x146 = INT32_MAX;
	volatile uint32_t x148 = 7835U;
	volatile uint32_t t31 = 2U;

    t31 = (((x145-x146)^x147)&x148);

    if (t31 != 7835U) { NG(); } else { ; }
	
}

void f32(void) {
    	volatile uint64_t x149 = 90767370442894LLU;
	int64_t x150 = INT64_MIN;
	int16_t x151 = INT16_MIN;
	uint32_t x152 = 4315U;
	volatile uint64_t t32 = 14LLU;

    t32 = (((x149-x150)^x151)&x152);

    if (t32 != 4234LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile uint32_t x153 = UINT32_MAX;
	int16_t x154 = INT16_MIN;
	static volatile int32_t x155 = 3;
	uint64_t x156 = 1513917LLU;
	volatile uint64_t t33 = 370108858260334196LLU;

    t33 = (((x153-x154)^x155)&x156);

    if (t33 != 6588LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int32_t x157 = INT32_MAX;
	volatile uint32_t x158 = 190787588U;
	int16_t x159 = INT16_MIN;
	static volatile uint16_t x160 = 152U;

    t34 = (((x157-x158)^x159)&x160);

    if (t34 != 152U) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x162 = UINT8_MAX;
	int16_t x163 = 154;
	int16_t x164 = INT16_MIN;
	static volatile uint32_t t35 = 0U;

    t35 = (((x161-x162)^x163)&x164);

    if (t35 != 4294934528U) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x173 = INT16_MAX;
	static int64_t x174 = -1LL;
	static uint8_t x175 = UINT8_MAX;
	int64_t t36 = -1LL;

    t36 = (((x173-x174)^x175)&x176);

    if (t36 != 109LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x178 = INT64_MIN;
	int16_t x179 = INT16_MIN;
	uint8_t x180 = 2U;

    t37 = (((x177-x178)^x179)&x180);

    if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint32_t x185 = UINT32_MAX;
	uint32_t x186 = UINT32_MAX;
	int8_t x187 = INT8_MIN;
	static volatile uint32_t t38 = 14U;

    t38 = (((x185-x186)^x187)&x188);

    if (t38 != 2147483520U) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x193 = -1LL;
	static int64_t x194 = -1LL;
	static int8_t x195 = INT8_MIN;
	uint16_t x196 = 2U;

    t39 = (((x193-x194)^x195)&x196);

    if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x197 = 9U;
	static uint8_t x198 = 23U;
	static int64_t x199 = INT64_MIN;
	int8_t x200 = 6;
	int64_t t40 = 667978603415LL;

    t40 = (((x197-x198)^x199)&x200);

    if (t40 != 2LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int8_t x201 = -1;
	int8_t x202 = -1;
	volatile uint8_t x204 = UINT8_MAX;
	volatile int32_t t41 = -342951341;

    t41 = (((x201-x202)^x203)&x204);

    if (t41 != 255) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x205 = 39230LLU;
	int16_t x206 = 0;
	int8_t x207 = -1;
	static volatile uint64_t t42 = 1050398948661215384LLU;

    t42 = (((x205-x206)^x207)&x208);

    if (t42 != 18446744073709512385LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	static int32_t x209 = INT32_MIN;
	uint64_t x211 = 31LLU;
	static uint64_t t43 = 5064403LLU;

    t43 = (((x209-x210)^x211)&x212);

    if (t43 != 28LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x213 = INT16_MAX;
	volatile int32_t x215 = INT32_MIN;
	volatile int64_t t44 = -54LL;

    t44 = (((x213-x214)^x215)&x216);

    if (t44 != 1322LL) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x217 = -1176;
	int8_t x218 = INT8_MAX;
	uint8_t x219 = 2U;
	volatile int32_t t45 = 32717868;

    t45 = (((x217-x218)^x219)&x220);

    if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x221 = INT16_MIN;
	static uint16_t x222 = 14808U;
	volatile int64_t x223 = INT64_MIN;
	int8_t x224 = 45;
	int64_t t46 = -29857377959280LL;

    t46 = (((x221-x222)^x223)&x224);

    if (t46 != 40LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int8_t x225 = INT8_MIN;
	int16_t x226 = INT16_MIN;
	int8_t x227 = INT8_MIN;
	int16_t x228 = -1;
	int32_t t47 = -11680;

    t47 = (((x225-x226)^x227)&x228);

    if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
    	static int16_t x229 = -1;
	uint16_t x230 = 13U;
	uint32_t x231 = 31085U;
	volatile uint64_t x232 = 223466614064586219LLU;
	uint64_t t48 = 42LLU;

    t48 = (((x229-x230)^x231)&x232);

    if (t48 != 2524611723LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x233 = -510;
	volatile int16_t x234 = INT16_MAX;
	volatile int32_t x235 = 3448;
	static int64_t x236 = -1LL;
	volatile int64_t t49 = -55LL;

    t49 = (((x233-x234)^x235)&x236);

    if (t49 != -35973LL) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x237 = 7275U;
	int32_t x238 = -1;
	int64_t x239 = INT64_MIN;
	static volatile int64_t t50 = 407LL;

    t50 = (((x237-x238)^x239)&x240);

    if (t50 != 7276LL) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int32_t x245 = INT32_MIN;
	int64_t x246 = INT64_MIN;
	int64_t x247 = INT64_MAX;
	uint32_t x248 = 215745U;
	volatile int64_t t51 = -11LL;

    t51 = (((x245-x246)^x247)&x248);

    if (t51 != 215745LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static uint64_t x251 = 1LLU;
	uint16_t x252 = 44U;
	uint64_t t52 = 35718347LLU;

    t52 = (((x249-x250)^x251)&x252);

    if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x253 = 22035432119LLU;
	int8_t x254 = INT8_MIN;
	int8_t x256 = INT8_MIN;
	uint64_t t53 = 13917527033242LLU;

    t53 = (((x253-x254)^x255)&x256);

    if (t53 != 18446744051674119296LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int64_t x257 = 4LL;
	int16_t x259 = 584;
	static uint32_t x260 = 13237666U;
	static int64_t t54 = 3585463592453LL;

    t54 = (((x257-x258)^x259)&x260);

    if (t54 != 13237632LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static volatile int32_t x261 = -12853;
	int16_t x262 = INT16_MIN;
	int32_t x263 = -1;
	int64_t x264 = -1LL;
	int64_t t55 = -2087177419065405LL;

    t55 = (((x261-x262)^x263)&x264);

    if (t55 != -19916LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int8_t x265 = INT8_MIN;
	int8_t x266 = INT8_MIN;
	int64_t x267 = INT64_MAX;
	int8_t x268 = INT8_MIN;

    t56 = (((x265-x266)^x267)&x268);

    if (t56 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x269 = INT8_MAX;
	uint16_t x270 = 6U;
	static int64_t x271 = -1LL;
	int64_t t57 = -630694736060739386LL;

    t57 = (((x269-x270)^x271)&x272);

    if (t57 != 4LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint16_t x273 = 465U;
	volatile int32_t x274 = -1;
	uint32_t x275 = 2U;
	int64_t x276 = -1LL;
	volatile int64_t t58 = -45881473808097LL;

    t58 = (((x273-x274)^x275)&x276);

    if (t58 != 464LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x277 = UINT64_MAX;
	int16_t x278 = 409;
	uint64_t x279 = 46106086LLU;
	int32_t x280 = INT32_MIN;
	uint64_t t59 = 188201577719670685LLU;

    t59 = (((x277-x278)^x279)&x280);

    if (t59 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x281 = INT16_MIN;
	uint64_t x283 = UINT64_MAX;
	volatile int32_t x284 = INT32_MIN;
	volatile uint64_t t60 = 54LLU;

    t60 = (((x281-x282)^x283)&x284);

    if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x289 = INT32_MAX;
	static uint8_t x290 = 6U;
	uint8_t x291 = 7U;
	int16_t x292 = INT16_MIN;

    t61 = (((x289-x290)^x291)&x292);

    if (t61 != 2147450880) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x293 = -1;
	int32_t x294 = -1;
	int64_t x295 = 219575LL;
	uint8_t x296 = UINT8_MAX;

    t62 = (((x293-x294)^x295)&x296);

    if (t62 != 183LL) { NG(); } else { ; }
	
}

void f63(void) {
    	int8_t x297 = -1;
	volatile int16_t x298 = INT16_MIN;
	int64_t x299 = INT64_MIN;
	int16_t x300 = 0;
	int64_t t63 = -65638056761231862LL;

    t63 = (((x297-x298)^x299)&x300);

    if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
    	uint16_t x301 = 456U;
	int16_t x302 = 2;
	int8_t x303 = INT8_MIN;
	uint64_t x304 = 144LLU;
	volatile uint64_t t64 = 428418956281846LLU;

    t64 = (((x301-x302)^x303)&x304);

    if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile int32_t x309 = -1;
	int32_t x310 = INT32_MIN;
	int8_t x311 = INT8_MAX;
	uint64_t x312 = 501823959LLU;
	volatile uint64_t t65 = 87857945816LLU;

    t65 = (((x309-x310)^x311)&x312);

    if (t65 != 501823872LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	static uint32_t x313 = 222U;
	static int8_t x314 = -12;
	uint8_t x315 = UINT8_MAX;
	uint16_t x316 = 157U;

    t66 = (((x313-x314)^x315)&x316);

    if (t66 != 21U) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x318 = 1034369341692482303LL;
	volatile uint64_t x319 = UINT64_MAX;
	int16_t x320 = INT16_MAX;
	volatile uint64_t t67 = 8549826406LLU;

    t67 = (((x317-x318)^x319)&x320);

    if (t67 != 4607LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int8_t x330 = INT8_MAX;
	static int16_t x331 = INT16_MAX;
	uint32_t x332 = 3793U;
	volatile int64_t t68 = 178LL;

    t68 = (((x329-x330)^x331)&x332);

    if (t68 != 81LL) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x333 = INT8_MIN;
	int8_t x334 = INT8_MAX;
	uint32_t x335 = 647U;
	int64_t t69 = -1033196533445357LL;

    t69 = (((x333-x334)^x335)&x336);

    if (t69 != 6LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static uint8_t x337 = UINT8_MAX;
	static int16_t x338 = INT16_MIN;
	static int8_t x339 = INT8_MAX;
	int64_t x340 = INT64_MAX;
	volatile int64_t t70 = 180LL;

    t70 = (((x337-x338)^x339)&x340);

    if (t70 != 32896LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x341 = 2;
	static int16_t x342 = INT16_MIN;
	uint16_t x344 = 5U;
	int32_t t71 = 6;

    t71 = (((x341-x342)^x343)&x344);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x346 = UINT8_MAX;
	int64_t x347 = 65LL;
	volatile int8_t x348 = -1;
	volatile int64_t t72 = 52029617643LL;

    t72 = (((x345-x346)^x347)&x348);

    if (t72 != -191LL) { NG(); } else { ; }
	
}

void f73(void) {
    	static int8_t x349 = 5;
	static volatile int8_t x350 = INT8_MAX;
	uint16_t x351 = 38U;
	volatile int16_t x352 = INT16_MAX;

    t73 = (((x349-x350)^x351)&x352);

    if (t73 != 32672) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x353 = INT16_MAX;
	uint64_t x354 = UINT64_MAX;
	uint64_t t74 = 669994061883705472LLU;

    t74 = (((x353-x354)^x355)&x356);

    if (t74 != 61LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int64_t x357 = INT64_MIN;
	int8_t x358 = INT8_MIN;
	static uint8_t x359 = UINT8_MAX;
	int16_t x360 = INT16_MIN;

    t75 = (((x357-x358)^x359)&x360);

    if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x369 = INT16_MAX;
	static int16_t x370 = -1;
	volatile int32_t x371 = INT32_MIN;
	volatile uint32_t t76 = 244U;

    t76 = (((x369-x370)^x371)&x372);

    if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x374 = UINT16_MAX;
	int32_t x376 = -5175730;
	uint32_t t77 = 2751818U;

    t77 = (((x373-x374)^x375)&x376);

    if (t77 != 4289789960U) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint64_t x377 = UINT64_MAX;
	static int64_t x378 = INT64_MIN;
	static uint64_t t78 = 512873139816983LLU;

    t78 = (((x377-x378)^x379)&x380);

    if (t78 != 9223372036854775340LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	uint32_t x381 = UINT32_MAX;
	int8_t x382 = INT8_MIN;
	volatile uint64_t x383 = 670198417593LLU;
	volatile uint64_t t79 = 425437LLU;

    t79 = (((x381-x382)^x383)&x384);

    if (t79 != 2LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint8_t x386 = 1U;
	static uint8_t x387 = 1U;
	int8_t x388 = INT8_MIN;
	int32_t t80 = 65895;

    t80 = (((x385-x386)^x387)&x388);

    if (t80 != -256) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint64_t x389 = 208262051401LLU;
	uint32_t x390 = 4799U;
	int64_t x391 = -1LL;
	volatile int8_t x392 = INT8_MAX;
	volatile uint64_t t81 = 2337LLU;

    t81 = (((x389-x390)^x391)&x392);

    if (t81 != 117LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	uint8_t x393 = 1U;
	int32_t x394 = -1;
	uint64_t x395 = 961797246320LLU;
	int64_t x396 = INT64_MIN;
	uint64_t t82 = 5128LLU;

    t82 = (((x393-x394)^x395)&x396);

    if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	uint8_t x397 = 10U;
	int16_t x398 = INT16_MIN;
	int64_t x399 = 1823797LL;
	int8_t x400 = 1;

    t83 = (((x397-x398)^x399)&x400);

    if (t83 != 1LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x401 = UINT16_MAX;
	int8_t x402 = 0;
	uint16_t x403 = 0U;
	static int64_t x404 = INT64_MIN;
	int64_t t84 = 127827LL;

    t84 = (((x401-x402)^x403)&x404);

    if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x409 = 31130U;
	static volatile uint64_t x410 = 1033259900549106LLU;
	volatile int8_t x412 = 7;
	volatile uint64_t t85 = 2849LLU;

    t85 = (((x409-x410)^x411)&x412);

    if (t85 != 1LLU) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x413 = 2113LLU;
	uint32_t x414 = 11841893U;
	int8_t x415 = INT8_MAX;
	static int8_t x416 = 1;
	uint64_t t86 = 2234196206010006LLU;

    t86 = (((x413-x414)^x415)&x416);

    if (t86 != 1LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x419 = INT16_MAX;
	int16_t x420 = INT16_MIN;

    t87 = (((x417-x418)^x419)&x420);

    if (t87 != 1277952LLU) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x421 = 373171697U;
	volatile int32_t x422 = -162724358;
	uint16_t x423 = 39U;
	static int64_t x424 = 440200LL;
	static volatile int64_t t88 = 110929824086011LL;

    t88 = (((x421-x422)^x423)&x424);

    if (t88 != 6016LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int16_t x425 = INT16_MIN;
	volatile int32_t x426 = 0;
	static int16_t x427 = 0;
	uint64_t x428 = 178088226366141LLU;
	uint64_t t89 = 34314135LLU;

    t89 = (((x425-x426)^x427)&x428);

    if (t89 != 178088226357248LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x429 = -1;
	uint16_t x431 = 4605U;
	int16_t x432 = -1;
	int32_t t90 = -441472757;

    t90 = (((x429-x430)^x431)&x432);

    if (t90 != 4605) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile uint8_t x433 = 104U;
	int32_t x434 = -1;
	int64_t x436 = -1LL;
	volatile int64_t t91 = -578220039387124LL;

    t91 = (((x433-x434)^x435)&x436);

    if (t91 != -1735LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint32_t x437 = UINT32_MAX;
	int8_t x438 = -2;
	uint64_t x439 = 54589551LLU;
	static uint32_t x440 = 125U;

    t92 = (((x437-x438)^x439)&x440);

    if (t92 != 108LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x442 = INT16_MIN;
	volatile int64_t x443 = 4337139LL;
	int8_t x444 = INT8_MIN;
	volatile int64_t t93 = -31026059904LL;

    t93 = (((x441-x442)^x443)&x444);

    if (t93 != 4369664LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint32_t x446 = 20U;
	static volatile uint32_t x447 = 3U;
	int16_t x448 = 1;
	int64_t t94 = -25480038LL;

    t94 = (((x445-x446)^x447)&x448);

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x449 = 808;
	uint32_t x450 = UINT32_MAX;
	int32_t x451 = INT32_MAX;
	static volatile int64_t t95 = -1LL;

    t95 = (((x449-x450)^x451)&x452);

    if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
    	static int32_t x453 = -95809184;
	uint32_t x454 = 483U;
	int8_t x455 = INT8_MIN;
	static uint64_t x456 = UINT64_MAX;
	volatile uint64_t t96 = 13489LLU;

    t96 = (((x453-x454)^x455)&x456);

    if (t96 != 95809789LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x457 = INT32_MIN;
	int32_t x458 = INT32_MIN;
	static int64_t x460 = INT64_MIN;

    t97 = (((x457-x458)^x459)&x460);

    if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x474 = -1LL;
	int64_t x475 = -1LL;
	volatile uint16_t x476 = 7573U;
	uint64_t t98 = 7372553472LLU;

    t98 = (((x473-x474)^x475)&x476);

    if (t98 != 7573LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	uint8_t x477 = 7U;
	int16_t x478 = INT16_MIN;
	int32_t x479 = INT32_MAX;
	int32_t x480 = -1;
	volatile int32_t t99 = 13546425;

    t99 = (((x477-x478)^x479)&x480);

    if (t99 != 2147450872) { NG(); } else { ; }
	
}

void f100(void) {
    	volatile uint64_t x484 = UINT64_MAX;

    t100 = (((x481-x482)^x483)&x484);

    if (t100 != 18963LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x485 = INT16_MIN;
	static int8_t x486 = INT8_MIN;
	volatile int64_t x487 = INT64_MIN;
	uint16_t x488 = 15444U;

    t101 = (((x485-x486)^x487)&x488);

    if (t101 != 0LL) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x494 = 1152U;
	int64_t x495 = -1LL;
	int64_t x496 = 13509751LL;
	int64_t t102 = 3960982167LL;

    t102 = (((x493-x494)^x495)&x496);

    if (t102 != 1140LL) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x497 = 8U;
	uint8_t x498 = 97U;
	volatile uint32_t x499 = 26U;
	int64_t x500 = INT64_MAX;
	int64_t t103 = -30LL;

    t103 = (((x497-x498)^x499)&x500);

    if (t103 != 4294967229LL) { NG(); } else { ; }
	
}

void f104(void) {
    	static int32_t x501 = 24;
	int32_t x502 = INT32_MAX;
	static uint8_t x503 = 19U;
	int16_t x504 = INT16_MIN;
	static volatile int32_t t104 = INT32_MIN;

    t104 = (((x501-x502)^x503)&x504);

    if (t104 != INT32_MIN) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x505 = 323241;
	int16_t x506 = -1;
	static int8_t x508 = -1;
	static int32_t t105 = 152945463;

    t105 = (((x505-x506)^x507)&x508);

    if (t105 != 323562) { NG(); } else { ; }
	
}

void f106(void) {
    	static int16_t x513 = -465;
	uint8_t x514 = 61U;
	static int8_t x515 = -27;
	volatile int8_t x516 = -2;
	int32_t t106 = 187008078;

    t106 = (((x513-x514)^x515)&x516);

    if (t106 != 534) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint16_t x517 = 0U;
	volatile uint8_t x518 = 8U;
	volatile int32_t x519 = 6734071;
	uint64_t x520 = 1643LLU;
	static volatile uint64_t t107 = 19632679167333155LLU;

    t107 = (((x517-x518)^x519)&x520);

    if (t107 != 1547LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x521 = 8U;
	int8_t x524 = -21;
	volatile int64_t t108 = -2983813406LL;

    t108 = (((x521-x522)^x523)&x524);

    if (t108 != -9223372036854775798LL) { NG(); } else { ; }
	
}

void f109(void) {
    	static int16_t x525 = -1;
	int32_t x526 = -181;
	static int32_t x527 = INT32_MAX;
	int16_t x528 = INT16_MIN;
	int32_t t109 = 3497412;

    t109 = (((x525-x526)^x527)&x528);

    if (t109 != 2147450880) { NG(); } else { ; }
	
}

void f110(void) {
    	uint64_t x529 = UINT64_MAX;
	uint8_t x530 = UINT8_MAX;
	static uint16_t x531 = UINT16_MAX;
	static int64_t x532 = -1LL;
	volatile uint64_t t110 = 239977061248805LLU;

    t110 = (((x529-x530)^x531)&x532);

    if (t110 != 18446744073709486335LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int64_t x537 = INT64_MAX;
	static volatile int32_t x538 = 713342642;
	int16_t x539 = INT16_MIN;
	static int16_t x540 = 0;

    t111 = (((x537-x538)^x539)&x540);

    if (t111 != 0LL) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint32_t x541 = 2U;
	int8_t x542 = INT8_MIN;
	static int8_t x543 = -1;
	volatile int16_t x544 = -53;
	uint32_t t112 = 30403882U;

    t112 = (((x541-x542)^x543)&x544);

    if (t112 != 4294967113U) { NG(); } else { ; }
	
}

void f113(void) {
    	int8_t x548 = -1;
	int32_t t113 = 37498;

    t113 = (((x545-x546)^x547)&x548);

    if (t113 != 31005) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x549 = -1;
	int64_t x551 = INT64_MIN;
	int8_t x552 = -1;
	volatile int64_t t114 = 553868009705LL;

    t114 = (((x549-x550)^x551)&x552);

    if (t114 != -1LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x553 = INT8_MIN;
	int64_t x554 = INT64_MIN;
	volatile uint16_t x556 = UINT16_MAX;
	volatile int64_t t115 = 270596343940756643LL;

    t115 = (((x553-x554)^x555)&x556);

    if (t115 != 59267LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x557 = -1;
	volatile int16_t x558 = INT16_MIN;
	int8_t x559 = 0;
	volatile int16_t x560 = INT16_MIN;
	int32_t t116 = -14;

    t116 = (((x557-x558)^x559)&x560);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x562 = INT16_MIN;
	uint8_t x563 = UINT8_MAX;
	uint64_t t117 = 826LLU;

    t117 = (((x561-x562)^x563)&x564);

    if (t117 != 0LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x565 = INT16_MIN;
	int16_t x566 = INT16_MIN;
	int16_t x568 = INT16_MIN;
	static int64_t t118 = INT64_MIN;

    t118 = (((x565-x566)^x567)&x568);

    if (t118 != INT64_MIN) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x573 = INT8_MAX;
	uint32_t x574 = 2U;
	int32_t x575 = -1;
	volatile int32_t x576 = INT32_MIN;
	volatile uint32_t t119 = 258457U;

    t119 = (((x573-x574)^x575)&x576);

    if (t119 != 2147483648U) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x577 = -28LL;
	uint8_t x579 = 0U;
	static volatile uint64_t x580 = 30001357624503102LLU;
	static uint64_t t120 = 26878708725197LLU;

    t120 = (((x577-x578)^x579)&x580);

    if (t120 != 30001357624470308LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile uint64_t x585 = UINT64_MAX;
	static uint32_t x586 = 5799948U;
	uint32_t x587 = 1174U;
	volatile int64_t x588 = -2358119LL;
	uint64_t t121 = 4560LLU;

    t121 = (((x585-x586)^x587)&x588);

    if (t121 != 18446744073701425153LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x589 = 100LLU;
	volatile uint64_t x590 = 11LLU;
	int16_t x592 = 6;
	static uint64_t t122 = 11673931845LLU;

    t122 = (((x589-x590)^x591)&x592);

    if (t122 != 6LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int32_t x593 = INT32_MAX;
	int32_t x594 = INT32_MAX;
	int64_t x595 = INT64_MIN;
	static int16_t x596 = INT16_MIN;
	static int64_t t123 = INT64_MIN;

    t123 = (((x593-x594)^x595)&x596);

    if (t123 != INT64_MIN) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint8_t x597 = UINT8_MAX;
	int8_t x598 = 14;
	int32_t x599 = INT32_MAX;
	int64_t x600 = INT64_MIN;
	volatile int64_t t124 = -569893597784670LL;

    t124 = (((x597-x598)^x599)&x600);

    if (t124 != 0LL) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x601 = INT8_MAX;
	int32_t x602 = INT32_MAX;
	static uint16_t x603 = 310U;
	static uint16_t x604 = UINT16_MAX;
	static int32_t t125 = 44416;

    t125 = (((x601-x602)^x603)&x604);

    if (t125 != 438) { NG(); } else { ; }
	
}

void f126(void) {
    	static int16_t x605 = INT16_MIN;
	static volatile int8_t x607 = INT8_MIN;

    t126 = (((x605-x606)^x607)&x608);

    if (t126 != 32788U) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x613 = 7283135U;
	static uint32_t t127 = 66328U;

    t127 = (((x613-x614)^x615)&x616);

    if (t127 != 20U) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x622 = 2;
	uint32_t x623 = 13U;
	int8_t x624 = 5;
	uint32_t t128 = 4709U;

    t128 = (((x621-x622)^x623)&x624);

    if (t128 != 0U) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int8_t x625 = INT8_MAX;
	int32_t x627 = -1;
	volatile int32_t x628 = INT32_MAX;

    t129 = (((x625-x626)^x627)&x628);

    if (t129 != 2147483522) { NG(); } else { ; }
	
}

void f130(void) {
    	uint8_t x629 = 18U;
	static volatile uint16_t x630 = 1194U;
	int16_t x631 = INT16_MAX;
	int64_t x632 = -1619335620LL;
	volatile int64_t t130 = 7308178926838LL;

    t130 = (((x629-x630)^x631)&x632);

    if (t130 != -1619360748LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x633 = INT64_MIN;
	int8_t x634 = -1;
	int32_t x635 = 84;
	volatile int64_t t131 = -378319076230LL;

    t131 = (((x633-x634)^x635)&x636);

    if (t131 != 4LL) { NG(); } else { ; }
	
}

void f132(void) {
    	int8_t x637 = 17;
	uint64_t x638 = UINT64_MAX;
	volatile int64_t x639 = INT64_MIN;
	int8_t x640 = INT8_MIN;
	uint64_t t132 = 14298LLU;

    t132 = (((x637-x638)^x639)&x640);

    if (t132 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x643 = INT8_MIN;
	int32_t x644 = -13128;
	volatile int32_t t133 = 1;

    t133 = (((x641-x642)^x643)&x644);

    if (t133 != 56) { NG(); } else { ; }
	
}

void f134(void) {
    	int16_t x645 = INT16_MIN;
	int16_t x646 = INT16_MAX;
	uint8_t x647 = UINT8_MAX;
	uint32_t x648 = 8813460U;
	volatile uint32_t t134 = 33057417U;

    t134 = (((x645-x646)^x647)&x648);

    if (t134 != 8781972U) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x651 = INT16_MIN;
	int8_t x652 = INT8_MIN;
	int32_t t135 = -1435;

    t135 = (((x649-x650)^x651)&x652);

    if (t135 != -2063934720) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int8_t x653 = 12;
	static int64_t x655 = 793723LL;
	int64_t x656 = -1LL;
	static int64_t t136 = 2968125089LL;

    t136 = (((x653-x654)^x655)&x656);

    if (t136 != -844682LL) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile uint32_t x657 = 7557942U;
	uint32_t x658 = UINT32_MAX;
	volatile int32_t x659 = 107;
	int64_t t137 = 5847883221135909LL;

    t137 = (((x657-x658)^x659)&x660);

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static volatile int32_t x661 = -1;
	int64_t x662 = -1LL;
	volatile uint64_t x663 = 308538063768409016LLU;

    t138 = (((x661-x662)^x663)&x664);

    if (t138 != 8LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x665 = -871;
	volatile uint8_t x666 = UINT8_MAX;
	int16_t x667 = INT16_MIN;
	uint8_t x668 = 2U;

    t139 = (((x665-x666)^x667)&x668);

    if (t139 != 2) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x669 = -113;
	int16_t x670 = INT16_MIN;
	volatile int16_t x671 = INT16_MIN;
	volatile int8_t x672 = INT8_MAX;
	int32_t t140 = 1;

    t140 = (((x669-x670)^x671)&x672);

    if (t140 != 15) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x673 = -1;
	volatile uint32_t x674 = UINT32_MAX;
	int64_t x675 = INT64_MAX;
	int32_t x676 = -61223145;
	int64_t t141 = 92496020605029LL;

    t141 = (((x673-x674)^x675)&x676);

    if (t141 != 9223372036793552663LL) { NG(); } else { ; }
	
}

void f142(void) {
    	static volatile uint16_t x677 = UINT16_MAX;
	static uint16_t x678 = UINT16_MAX;
	uint8_t x680 = 118U;
	int32_t t142 = 49682631;

    t142 = (((x677-x678)^x679)&x680);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x681 = -1;
	int8_t x682 = INT8_MAX;
	uint8_t x684 = UINT8_MAX;
	int32_t t143 = 44273198;

    t143 = (((x681-x682)^x683)&x684);

    if (t143 != 255) { NG(); } else { ; }
	
}

void f144(void) {
    	uint16_t x685 = 7667U;
	static uint16_t x686 = 34U;
	static int64_t x687 = INT64_MIN;
	uint16_t x688 = UINT16_MAX;
	int64_t t144 = -36993LL;

    t144 = (((x685-x686)^x687)&x688);

    if (t144 != 7633LL) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x689 = -1;
	int16_t x690 = INT16_MIN;
	volatile uint32_t x691 = UINT32_MAX;
	volatile uint8_t x692 = UINT8_MAX;
	uint32_t t145 = 7026843U;

    t145 = (((x689-x690)^x691)&x692);

    if (t145 != 0U) { NG(); } else { ; }
	
}

void f146(void) {
    	int8_t x693 = -1;
	int32_t x694 = INT32_MIN;
	static uint32_t x695 = UINT32_MAX;
	static uint16_t x696 = 3U;
	volatile uint32_t t146 = 116216U;

    t146 = (((x693-x694)^x695)&x696);

    if (t146 != 0U) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x697 = INT8_MIN;
	volatile int32_t x698 = 760184;
	static uint8_t x699 = UINT8_MAX;
	static int16_t x700 = INT16_MIN;
	static volatile int32_t t147 = -13;

    t147 = (((x697-x698)^x699)&x700);

    if (t147 != -786432) { NG(); } else { ; }
	
}

void f148(void) {
    	uint32_t x701 = 4967U;
	volatile int64_t x702 = -1021LL;
	static int16_t x703 = -2894;
	volatile int8_t x704 = -56;
	int64_t t148 = 1766527LL;

    t148 = (((x701-x702)^x703)&x704);

    if (t148 != -7232LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint16_t x705 = 138U;
	int16_t x706 = -1;
	static uint32_t x707 = 8U;
	uint16_t x708 = 906U;
	uint32_t t149 = 16U;

    t149 = (((x705-x706)^x707)&x708);

    if (t149 != 130U) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x709 = UINT32_MAX;
	int8_t x710 = 14;
	volatile int16_t x711 = 333;
	uint32_t t150 = 5430U;

    t150 = (((x709-x710)^x711)&x712);

    if (t150 != 4294964884U) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x713 = INT8_MIN;
	static int64_t x714 = 7829599491598889LL;
	uint32_t x715 = 8U;
	int8_t x716 = -1;
	int64_t t151 = -299LL;

    t151 = (((x713-x714)^x715)&x716);

    if (t151 != -7829599491599009LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int8_t x717 = 27;
	static volatile int64_t x718 = -745907380LL;
	int32_t x719 = INT32_MIN;
	uint64_t x720 = UINT64_MAX;
	volatile uint64_t t152 = 32151800589333931LLU;

    t152 = (((x717-x718)^x719)&x720);

    if (t152 != 18446744072307975375LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	volatile int64_t x721 = 1LL;
	uint16_t x722 = 2600U;
	volatile uint32_t x723 = 34U;
	int32_t x724 = -1;
	int64_t t153 = 978625LL;

    t153 = (((x721-x722)^x723)&x724);

    if (t153 != -2565LL) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x726 = 1U;
	int64_t x727 = 10564325525100LL;
	int64_t t154 = 0LL;

    t154 = (((x725-x726)^x727)&x728);

    if (t154 != 1217934820352LL) { NG(); } else { ; }
	
}

void f155(void) {
    	int16_t x730 = INT16_MIN;
	uint32_t x731 = 102848376U;
	static uint32_t x732 = 3775568U;
	uint32_t t155 = 1239560052U;

    t155 = (((x729-x730)^x731)&x732);

    if (t155 != 2167888U) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile int8_t x733 = INT8_MAX;
	uint64_t x734 = 31224138719317LLU;
	static int64_t x735 = INT64_MIN;
	uint8_t x736 = UINT8_MAX;
	volatile uint64_t t156 = 2204641116935711231LLU;

    t156 = (((x733-x734)^x735)&x736);

    if (t156 != 42LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	static uint32_t x738 = 241653490U;
	static int16_t x739 = -1;
	int64_t x740 = INT64_MIN;
	int64_t t157 = INT64_MIN;

    t157 = (((x737-x738)^x739)&x740);

    if (t157 != INT64_MIN) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x741 = INT16_MAX;
	static volatile int64_t x743 = 228735307941512LL;
	int64_t x744 = INT64_MAX;
	volatile int64_t t158 = -248860073927LL;

    t158 = (((x741-x742)^x743)&x744);

    if (t158 != 228735307970898LL) { NG(); } else { ; }
	
}

void f159(void) {
    	int32_t x748 = -50;
	volatile uint32_t t159 = 351U;

    t159 = (((x745-x746)^x747)&x748);

    if (t159 != 4294966858U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x749 = 54829U;
	uint32_t x750 = UINT32_MAX;
	int64_t x751 = INT64_MAX;
	int8_t x752 = INT8_MIN;
	volatile int64_t t160 = -1091333212509481999LL;

    t160 = (((x749-x750)^x751)&x752);

    if (t160 != 9223372036854720896LL) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x753 = -16097;
	int32_t x754 = INT32_MIN;
	int32_t x755 = INT32_MIN;
	volatile int64_t x756 = -1LL;
	volatile int64_t t161 = 2351135156398LL;

    t161 = (((x753-x754)^x755)&x756);

    if (t161 != -16097LL) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x758 = 2U;
	static uint8_t x759 = 3U;
	int16_t x760 = INT16_MIN;
	volatile int32_t t162 = 1491;

    t162 = (((x757-x758)^x759)&x760);

    if (t162 != -32768) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x769 = -1LL;
	int8_t x771 = INT8_MAX;
	int64_t t163 = 1682551586LL;

    t163 = (((x769-x770)^x771)&x772);

    if (t163 != 31LL) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int32_t x773 = INT32_MIN;
	volatile int64_t x774 = INT64_MIN;
	int8_t x776 = -1;
	int64_t t164 = -265192626939276882LL;

    t164 = (((x773-x774)^x775)&x776);

    if (t164 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int64_t x777 = INT64_MIN;
	int8_t x779 = -6;
	int32_t x780 = -40099;
	int64_t t165 = -65862539793LL;

    t165 = (((x777-x778)^x779)&x780);

    if (t165 != 9223372036854735704LL) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint32_t x781 = 133303829U;
	uint16_t x783 = 5U;
	static volatile uint32_t t166 = 8U;

    t166 = (((x781-x782)^x783)&x784);

    if (t166 != 528U) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x789 = -1;
	int32_t x790 = -1;
	volatile int16_t x791 = INT16_MIN;
	uint8_t x792 = 4U;
	static int32_t t167 = -514253825;

    t167 = (((x789-x790)^x791)&x792);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x793 = INT8_MIN;
	volatile int8_t x796 = INT8_MIN;
	static int32_t t168 = -1;

    t168 = (((x793-x794)^x795)&x796);

    if (t168 != 128) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x797 = 224LLU;
	int64_t x798 = INT64_MIN;
	uint32_t x799 = 172941025U;
	uint64_t t169 = 3018525238189LLU;

    t169 = (((x797-x798)^x799)&x800);

    if (t169 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x801 = -1;
	static volatile int16_t x802 = INT16_MAX;
	uint8_t x803 = 3U;
	int64_t t170 = 378321744742LL;

    t170 = (((x801-x802)^x803)&x804);

    if (t170 != 2LL) { NG(); } else { ; }
	
}

void f171(void) {
    	static int8_t x805 = INT8_MIN;
	int8_t x806 = -1;
	static uint8_t x807 = 1U;
	int32_t x808 = INT32_MAX;
	static int32_t t171 = -474048;

    t171 = (((x805-x806)^x807)&x808);

    if (t171 != 2147483520) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x810 = -1;
	int64_t x811 = INT64_MAX;
	uint64_t x812 = 713633936972792927LLU;
	static volatile uint64_t t172 = 51293382LLU;

    t172 = (((x809-x810)^x811)&x812);

    if (t172 != 713633936968007688LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x813 = 563LL;
	int16_t x814 = -522;
	int32_t x815 = -968197743;

    t173 = (((x813-x814)^x815)&x816);

    if (t173 != 55935767592LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint64_t x817 = UINT64_MAX;
	int16_t x818 = INT16_MIN;
	int64_t x820 = 61961387960994388LL;
	static uint64_t t174 = 1LLU;

    t174 = (((x817-x818)^x819)&x820);

    if (t174 != 61961387960991744LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x821 = -1;
	static int64_t x822 = INT64_MAX;
	volatile int8_t x823 = 0;
	volatile int16_t x824 = -8742;
	volatile int64_t t175 = INT64_MIN;

    t175 = (((x821-x822)^x823)&x824);

    if (t175 != INT64_MIN) { NG(); } else { ; }
	
}

void f176(void) {
    	uint64_t x826 = 3874143249858651LLU;
	int32_t x828 = 1;
	uint64_t t176 = 28711LLU;

    t176 = (((x825-x826)^x827)&x828);

    if (t176 != 1LLU) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x829 = INT16_MIN;
	static int32_t x830 = INT32_MIN;
	uint16_t x832 = UINT16_MAX;
	int32_t t177 = -12770166;

    t177 = (((x829-x830)^x831)&x832);

    if (t177 != 32768) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile int64_t x833 = 8141078509416LL;
	int64_t x834 = INT64_MAX;
	static uint8_t x835 = 79U;
	uint8_t x836 = 79U;
	int64_t t178 = 34496571LL;

    t178 = (((x833-x834)^x835)&x836);

    if (t178 != 6LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x837 = 2;
	int8_t x838 = INT8_MAX;
	int8_t x839 = -1;
	volatile uint16_t x840 = 625U;
	volatile int32_t t179 = 150420292;

    t179 = (((x837-x838)^x839)&x840);

    if (t179 != 112) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile uint32_t x841 = 95996205U;
	static int32_t x842 = -1;
	uint16_t x843 = UINT16_MAX;
	static uint64_t x844 = 1LLU;
	uint64_t t180 = 695LLU;

    t180 = (((x841-x842)^x843)&x844);

    if (t180 != 1LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x845 = -1LL;
	int64_t x846 = INT64_MIN;
	static volatile int64_t x847 = -1LL;
	uint16_t x848 = UINT16_MAX;
	int64_t t181 = 11680LL;

    t181 = (((x845-x846)^x847)&x848);

    if (t181 != 0LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static volatile int64_t x849 = 61612829169LL;
	int16_t x850 = -16168;
	int8_t x851 = INT8_MIN;
	int16_t x852 = -10;
	volatile int64_t t182 = -853656308437LL;

    t182 = (((x849-x850)^x851)&x852);

    if (t182 != -61612845424LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x853 = UINT8_MAX;
	int16_t x854 = 16;
	int16_t x855 = 1;
	static uint32_t x856 = 120517362U;

    t183 = (((x853-x854)^x855)&x856);

    if (t183 != 226U) { NG(); } else { ; }
	
}

void f184(void) {
    	uint16_t x857 = 237U;
	int64_t x859 = -187258LL;

    t184 = (((x857-x858)^x859)&x860);

    if (t184 != 107LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int32_t x861 = -1;
	int64_t x862 = 64780261018233246LL;
	static int8_t x863 = -1;
	int32_t x864 = INT32_MIN;
	int64_t t185 = 2495678697493204199LL;

    t185 = (((x861-x862)^x863)&x864);

    if (t185 != 64780259433644032LL) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x878 = UINT32_MAX;
	volatile int64_t x879 = INT64_MIN;
	uint32_t x880 = UINT32_MAX;

    t186 = (((x877-x878)^x879)&x880);

    if (t186 != 7LL) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x883 = -25730530192314201LL;
	int64_t x884 = -1LL;

    t187 = (((x881-x882)^x883)&x884);

    if (t187 != -25730509621226352LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int16_t x893 = -1;
	int16_t x894 = 2559;
	int32_t t188 = 12551;

    t188 = (((x893-x894)^x895)&x896);

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int8_t x897 = INT8_MAX;
	static volatile int64_t x898 = 468863094425LL;
	int32_t x899 = 180;
	volatile int32_t x900 = INT32_MIN;

    t189 = (((x897-x898)^x899)&x900);

    if (t189 != -470298918912LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x901 = INT16_MIN;
	int32_t x902 = INT32_MIN;
	int8_t x903 = INT8_MAX;
	int8_t x904 = 1;
	int32_t t190 = 1;

    t190 = (((x901-x902)^x903)&x904);

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	uint16_t x905 = UINT16_MAX;
	int64_t x906 = -2LL;
	int16_t x907 = -1;
	int64_t t191 = -3049150300565796852LL;

    t191 = (((x905-x906)^x907)&x908);

    if (t191 != 126LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x909 = INT8_MAX;
	int16_t x910 = INT16_MIN;
	int64_t x911 = -1LL;
	uint8_t x912 = 0U;
	int64_t t192 = 101832579024327LL;

    t192 = (((x909-x910)^x911)&x912);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	uint8_t x914 = 0U;
	static int32_t t193 = -476348;

    t193 = (((x913-x914)^x915)&x916);

    if (t193 != -503) { NG(); } else { ; }
	
}

void f194(void) {
    	int64_t x918 = -1LL;
	int32_t x920 = INT32_MIN;
	int64_t t194 = 1LL;

    t194 = (((x917-x918)^x919)&x920);

    if (t194 != -2147483648LL) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x921 = INT16_MIN;
	volatile int16_t x922 = INT16_MIN;
	volatile int8_t x923 = -1;
	volatile int32_t x924 = INT32_MIN;
	volatile int32_t t195 = INT32_MIN;

    t195 = (((x921-x922)^x923)&x924);

    if (t195 != INT32_MIN) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x925 = 14708719126472444LLU;
	int64_t x927 = INT64_MIN;
	volatile uint64_t t196 = 21431LLU;

    t196 = (((x925-x926)^x927)&x928);

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x929 = UINT32_MAX;
	int8_t x930 = -1;
	int8_t x931 = INT8_MIN;
	static int8_t x932 = -3;
	static volatile uint32_t t197 = 44U;

    t197 = (((x929-x930)^x931)&x932);

    if (t197 != 4294967168U) { NG(); } else { ; }
	
}

void f198(void) {
    	static int32_t x933 = 0;
	int8_t x934 = -1;
	volatile uint16_t x935 = 4983U;
	volatile uint8_t x936 = 0U;
	volatile int32_t t198 = -1302;

    t198 = (((x933-x934)^x935)&x936);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	uint16_t x937 = UINT16_MAX;
	static uint64_t x938 = 464932488LLU;
	uint16_t x939 = 9267U;
	uint16_t x940 = 0U;
	uint64_t t199 = 787435803436284LLU;

    t199 = (((x937-x938)^x939)&x940);

    if (t199 != 0LLU) { NG(); } else { ; }
	
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

