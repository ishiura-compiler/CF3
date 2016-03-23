
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

volatile int16_t x5 = INT16_MAX;
static int16_t x7 = -1;
volatile int16_t x10 = INT16_MIN;
static int8_t x11 = INT8_MIN;
int32_t x21 = INT32_MIN;
volatile int16_t x39 = INT16_MAX;
volatile int16_t x48 = -1;
static uint64_t x54 = 669LLU;
static uint16_t x55 = UINT16_MAX;
volatile int64_t x61 = -294516960158772LL;
int64_t t11 = 6LL;
int8_t x65 = -1;
int8_t x68 = -3;
uint32_t x74 = 257807728U;
int16_t x78 = INT16_MAX;
uint32_t x79 = 75088855U;
uint64_t x80 = UINT64_MAX;
uint64_t t15 = 37LLU;
volatile int64_t x82 = INT64_MIN;
int8_t x87 = 1;
volatile uint64_t x88 = UINT64_MAX;
int8_t x89 = -9;
int64_t x97 = INT64_MAX;
uint32_t x102 = UINT32_MAX;
volatile uint64_t t20 = 8117664198074418LLU;
static uint64_t x105 = 3858401486785270LLU;
int8_t x108 = 0;
static uint64_t t21 = 501613794LLU;
int16_t x109 = INT16_MIN;
volatile int64_t t22 = 15641263175211LL;
int16_t x116 = INT16_MIN;
static uint8_t x120 = 6U;
static uint64_t t25 = 470404LLU;
volatile uint32_t x128 = UINT32_MAX;
volatile uint64_t t26 = 493155714447108748LLU;
int32_t x133 = -1;
int32_t x134 = INT32_MIN;
uint16_t x142 = 61U;
int64_t x144 = -1LL;
static int8_t x152 = INT8_MIN;
volatile int32_t t30 = 0;
int32_t x157 = INT32_MIN;
uint8_t x161 = UINT8_MAX;
int16_t x162 = 433;
uint8_t x164 = UINT8_MAX;
int32_t x167 = -1448013;
int64_t t37 = -15218LL;
volatile uint32_t x194 = 1U;
uint64_t x199 = 5032858564LLU;
int64_t x200 = INT64_MIN;
static uint16_t x205 = UINT16_MAX;
volatile int32_t t41 = -672261;
uint32_t x209 = 2565U;
volatile int64_t x218 = -31742780491LL;
static uint8_t x222 = 30U;
volatile uint16_t x223 = 0U;
static int8_t x224 = INT8_MIN;
uint16_t x228 = UINT16_MAX;
volatile int8_t x244 = INT8_MIN;
int64_t x245 = -1LL;
int16_t x247 = 474;
int8_t x262 = INT8_MIN;
int16_t x264 = -196;
volatile int32_t t52 = 188004;
int16_t x272 = -432;
int64_t x284 = -46796451LL;
int16_t x297 = INT16_MIN;
volatile int32_t t60 = 468675367;
uint16_t x310 = 1U;
volatile int64_t x314 = INT64_MIN;
uint64_t x316 = 8781074026983372576LLU;
int32_t t64 = 338;
volatile int16_t x322 = INT16_MAX;
static int32_t t65 = 98620;
uint64_t x327 = 89LLU;
int32_t x328 = INT32_MIN;
static int16_t x332 = 0;
volatile int32_t t67 = 1;
static int8_t x340 = INT8_MIN;
static volatile uint32_t x367 = 297340829U;
static int8_t x371 = -1;
int16_t x380 = -1;
volatile int32_t x382 = INT32_MIN;
volatile int8_t x383 = INT8_MIN;
static volatile int64_t t75 = 3213225LL;
int16_t x396 = -60;
uint16_t x401 = 22127U;
static uint16_t x404 = UINT16_MAX;
volatile int32_t t78 = 7;
static uint64_t x407 = 497202254146384LLU;
int64_t x409 = -1LL;
uint64_t t80 = 1599LLU;
static int32_t x415 = 2730136;
uint32_t x427 = 637940U;
volatile uint16_t x429 = 1U;
int64_t x434 = INT64_MIN;
static int32_t x439 = -3;
int32_t t86 = 4;
static int8_t x442 = INT8_MIN;
int8_t x446 = INT8_MIN;
volatile int32_t x448 = INT32_MAX;
int16_t x459 = INT16_MAX;
int8_t x467 = INT8_MIN;
int64_t t93 = 2067444699301LL;
int32_t x475 = -1;
int16_t x477 = -21;
int32_t x478 = INT32_MAX;
static int16_t x482 = INT16_MIN;
int64_t x490 = INT64_MIN;
uint64_t x493 = 18612985155LLU;
static uint32_t x494 = 5220212U;
uint32_t x503 = 51640U;
int32_t x506 = -1;
uint32_t t103 = 512234U;
uint64_t x520 = 36LLU;
int8_t x527 = -1;
int16_t x529 = -1;
static uint16_t x531 = UINT16_MAX;
uint32_t x532 = UINT32_MAX;
int64_t t113 = 3925LL;
uint8_t x558 = UINT8_MAX;
int64_t x559 = 4707022639LL;
static int64_t x568 = -1LL;
volatile int64_t t117 = -1173LL;
volatile uint64_t x570 = 57314LLU;
int32_t x571 = 10;
int64_t x583 = 767467238966LL;
static uint32_t t122 = 6893732U;
volatile int8_t x596 = INT8_MAX;
static uint16_t x613 = UINT16_MAX;
uint32_t x615 = 9U;
volatile uint16_t x621 = 6U;
uint8_t x626 = 15U;
volatile int64_t t129 = 47974373542211LL;
volatile uint8_t x636 = 43U;
volatile int64_t t132 = 1204768653156LL;
int32_t t133 = 486475;
int16_t x652 = INT16_MIN;
static uint16_t x658 = 5469U;
uint32_t t136 = 60U;
int64_t x668 = -1LL;
int8_t x669 = -1;
uint32_t x672 = 72U;
uint32_t t139 = 1607079U;
int16_t x677 = 307;
volatile uint64_t x678 = UINT64_MAX;
static uint32_t x679 = UINT32_MAX;
int8_t x684 = -1;
int16_t x694 = -1;
static uint32_t x699 = 1955U;
int32_t x700 = INT32_MAX;
int32_t x703 = 3541052;
int32_t t146 = 17;
int16_t x710 = INT16_MIN;
int8_t x712 = 0;
static int64_t x721 = -1LL;
int64_t x725 = INT64_MAX;
uint64_t x726 = 18714LLU;
volatile uint64_t t152 = 5105907LLU;
int32_t x735 = -1;
uint32_t x739 = UINT32_MAX;
volatile int8_t x740 = INT8_MIN;
int32_t x747 = INT32_MIN;
int8_t x748 = INT8_MIN;
volatile uint64_t t156 = 507717389806980LLU;
static uint16_t x749 = UINT16_MAX;
int64_t x758 = -1LL;
static uint16_t x770 = UINT16_MAX;
int16_t x775 = INT16_MAX;
volatile int8_t x780 = 0;
static uint32_t x784 = 85600U;
uint8_t x792 = UINT8_MAX;
uint32_t x802 = 29223U;
volatile uint32_t x804 = UINT32_MAX;
static volatile int64_t t167 = 26524668246LL;
volatile uint16_t x824 = 3165U;
volatile int8_t x828 = INT8_MIN;
int32_t t170 = 176511741;
int16_t x830 = -6871;
uint32_t x836 = UINT32_MAX;
static uint16_t x838 = 170U;
volatile uint8_t x840 = 31U;
int64_t x849 = -25LL;
int64_t t175 = 1LL;
uint32_t x857 = UINT32_MAX;
static uint16_t x860 = 2U;
uint64_t x873 = 901154LLU;
uint64_t t179 = 419499836LLU;
int64_t x890 = INT64_MAX;
static int64_t x898 = INT64_MIN;
volatile int64_t t183 = 14073LL;
volatile int32_t x901 = INT32_MIN;
volatile int32_t x908 = -125060049;
uint16_t x911 = 25U;
static int32_t x917 = INT32_MIN;
int16_t x919 = 33;
int32_t x923 = -1;
uint32_t t189 = 109185589U;
uint16_t x928 = 185U;
volatile uint64_t t191 = 20149LLU;
volatile uint16_t x935 = UINT16_MAX;
volatile int64_t t192 = -7134LL;
uint16_t x940 = 2U;
static int32_t t193 = 12;
uint32_t x944 = UINT32_MAX;
uint8_t x950 = 69U;
int8_t x952 = INT8_MIN;
static int32_t x956 = -1;
int32_t x959 = -25;
int64_t t197 = -7123507931103149LL;
volatile uint64_t t198 = 499027176867394324LLU;
int16_t x969 = INT16_MAX;
static int32_t x972 = INT32_MIN;


void f0(void) {
    	uint64_t x1 = 1LLU;
	static int32_t x2 = INT32_MIN;
	int8_t x3 = INT8_MIN;
	static int32_t x4 = -1;
	uint64_t t0 = 4266276817LLU;

    t0 = (((x1&x2)*x3)-x4);

    if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int32_t x6 = INT32_MIN;
	volatile int16_t x8 = -2;
	volatile int32_t t1 = 1617708;

    t1 = (((x5&x6)*x7)-x8);

    if (t1 != 2) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x9 = -1;
	int8_t x12 = INT8_MAX;
	volatile int32_t t2 = -37336001;

    t2 = (((x9&x10)*x11)-x12);

    if (t2 != 4194177) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = 1952556U;
	int8_t x14 = INT8_MAX;
	uint64_t x15 = 1013201873LLU;
	int16_t x16 = 1;
	uint64_t t3 = 4851402829LLU;

    t3 = (((x13&x14)*x15)-x16);

    if (t3 != 44580882411LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint64_t x22 = 2025442LLU;
	int32_t x23 = -4309195;
	uint64_t x24 = 957467634LLU;
	volatile uint64_t t4 = 18460451509378LLU;

    t4 = (((x21&x22)*x23)-x24);

    if (t4 != 18446744072752083982LLU) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int32_t x29 = INT32_MIN;
	static int16_t x30 = INT16_MIN;
	uint64_t x31 = UINT64_MAX;
	int16_t x32 = INT16_MIN;
	volatile uint64_t t5 = 3728758537199LLU;

    t5 = (((x29&x30)*x31)-x32);

    if (t5 != 2147516416LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	volatile int64_t x33 = INT64_MAX;
	uint32_t x34 = UINT32_MAX;
	int32_t x35 = -2086044;
	uint8_t x36 = 26U;
	volatile int64_t t6 = 6828LL;

    t6 = (((x33&x34)*x35)-x36);

    if (t6 != -8959490755931006LL) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint16_t x37 = 1U;
	uint32_t x38 = 10U;
	int32_t x40 = -1;
	volatile uint32_t t7 = 73496718U;

    t7 = (((x37&x38)*x39)-x40);

    if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
    	int16_t x41 = INT16_MAX;
	int32_t x42 = INT32_MIN;
	uint8_t x43 = 7U;
	static uint32_t x44 = 35U;
	volatile uint32_t t8 = 300684U;

    t8 = (((x41&x42)*x43)-x44);

    if (t8 != 4294967261U) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x45 = INT64_MAX;
	int8_t x46 = 6;
	uint8_t x47 = 1U;
	volatile int64_t t9 = -2400LL;

    t9 = (((x45&x46)*x47)-x48);

    if (t9 != 7LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint32_t x53 = UINT32_MAX;
	uint64_t x56 = 58662102015LLU;
	static uint64_t t10 = 95LLU;

    t10 = (((x53&x54)*x55)-x56);

    if (t10 != 18446744015091292516LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x62 = 4;
	int64_t x63 = -1609059183LL;
	int16_t x64 = 969;

    t11 = (((x61&x62)*x63)-x64);

    if (t11 != -6436237701LL) { NG(); } else { ; }
	
}

void f12(void) {
    	uint64_t x66 = 98793906418311LLU;
	static volatile int32_t x67 = -1;
	volatile uint64_t t12 = 66774078LLU;

    t12 = (((x65&x66)*x67)-x68);

    if (t12 != 18446645279803133308LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x69 = 13232LLU;
	int32_t x70 = INT32_MIN;
	static uint16_t x71 = UINT16_MAX;
	int16_t x72 = -3;
	uint64_t t13 = 14LLU;

    t13 = (((x69&x70)*x71)-x72);

    if (t13 != 3LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x73 = UINT8_MAX;
	int32_t x75 = -1;
	uint64_t x76 = UINT64_MAX;
	volatile uint64_t t14 = 7457858165LLU;

    t14 = (((x73&x74)*x75)-x76);

    if (t14 != 4294967185LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x77 = INT32_MIN;

    t15 = (((x77&x78)*x79)-x80);

    if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x81 = INT64_MIN;
	uint64_t x83 = 1049LLU;
	int64_t x84 = INT64_MAX;
	uint64_t t16 = 20308454254LLU;

    t16 = (((x81&x82)*x83)-x84);

    if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	int64_t x85 = INT64_MAX;
	int32_t x86 = -216;
	volatile uint64_t t17 = 2LLU;

    t17 = (((x85&x86)*x87)-x88);

    if (t17 != 9223372036854775593LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x90 = -1;
	static volatile int8_t x91 = 0;
	volatile int8_t x92 = INT8_MIN;
	volatile int32_t t18 = 1;

    t18 = (((x89&x90)*x91)-x92);

    if (t18 != 128) { NG(); } else { ; }
	
}

void f19(void) {
    	uint32_t x98 = 3549U;
	uint16_t x99 = 385U;
	volatile int32_t x100 = INT32_MIN;
	int64_t t19 = 313310LL;

    t19 = (((x97&x98)*x99)-x100);

    if (t19 != 2148850013LL) { NG(); } else { ; }
	
}

void f20(void) {
    	static int16_t x101 = INT16_MAX;
	uint64_t x103 = UINT64_MAX;
	static int64_t x104 = INT64_MIN;

    t20 = (((x101&x102)*x103)-x104);

    if (t20 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x106 = -1;
	volatile int64_t x107 = -799147183747LL;

    t21 = (((x105&x106)*x107)-x108);

    if (t21 != 14705166853425573918LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile uint16_t x110 = UINT16_MAX;
	int64_t x111 = 5519137LL;
	int64_t x112 = 220127927LL;

    t22 = (((x109&x110)*x111)-x112);

    if (t22 != 180630953289LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int64_t x113 = -130938999879296455LL;
	int8_t x114 = INT8_MIN;
	volatile uint8_t x115 = 6U;
	volatile int64_t t23 = -2325LL;

    t23 = (((x113&x114)*x115)-x116);

    if (t23 != -785633999275746304LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint32_t x117 = 7U;
	static uint64_t x118 = 313427485054561556LLU;
	uint32_t x119 = 48737U;
	uint64_t t24 = 3036LLU;

    t24 = (((x117&x118)*x119)-x120);

    if (t24 != 194942LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static uint64_t x121 = UINT64_MAX;
	uint16_t x122 = UINT16_MAX;
	int32_t x123 = -1;
	uint64_t x124 = UINT64_MAX;

    t25 = (((x121&x122)*x123)-x124);

    if (t25 != 18446744073709486082LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int32_t x125 = -1;
	uint64_t x126 = 4435802865539632250LLU;
	int32_t x127 = -1;

    t26 = (((x125&x126)*x127)-x128);

    if (t26 != 14010941203874952071LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x129 = 464U;
	int8_t x130 = -1;
	int16_t x131 = -15;
	static int32_t x132 = -19835993;
	volatile int32_t t27 = 129979034;

    t27 = (((x129&x130)*x131)-x132);

    if (t27 != 19829033) { NG(); } else { ; }
	
}

void f28(void) {
    	uint64_t x135 = UINT64_MAX;
	uint32_t x136 = 3U;
	uint64_t t28 = 416LLU;

    t28 = (((x133&x134)*x135)-x136);

    if (t28 != 2147483645LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int64_t x141 = INT64_MIN;
	volatile int16_t x143 = INT16_MAX;
	static int64_t t29 = -138355412LL;

    t29 = (((x141&x142)*x143)-x144);

    if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
    	uint8_t x149 = 7U;
	int16_t x150 = INT16_MIN;
	int8_t x151 = -1;

    t30 = (((x149&x150)*x151)-x152);

    if (t30 != 128) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int16_t x158 = 1;
	static int64_t x159 = INT64_MAX;
	static volatile int32_t x160 = 196254132;
	int64_t t31 = -21062601379LL;

    t31 = (((x157&x158)*x159)-x160);

    if (t31 != -196254132LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int16_t x163 = -721;
	volatile int32_t t32 = 1;

    t32 = (((x161&x162)*x163)-x164);

    if (t32 != -127872) { NG(); } else { ; }
	
}

void f33(void) {
    	volatile int32_t x165 = INT32_MAX;
	int64_t x166 = INT64_MIN;
	volatile uint16_t x168 = UINT16_MAX;
	static volatile int64_t t33 = 53LL;

    t33 = (((x165&x166)*x167)-x168);

    if (t33 != -65535LL) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x169 = -672075555809140LL;
	int8_t x170 = INT8_MAX;
	uint64_t x171 = UINT64_MAX;
	uint64_t x172 = 1027926359786134LLU;
	static volatile uint64_t t34 = 2015372769605073344LLU;

    t34 = (((x169&x170)*x171)-x172);

    if (t34 != 18445716147349765470LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	static volatile uint16_t x173 = UINT16_MAX;
	uint16_t x174 = 486U;
	int8_t x175 = 55;
	int8_t x176 = INT8_MIN;
	volatile int32_t t35 = -8;

    t35 = (((x173&x174)*x175)-x176);

    if (t35 != 26858) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x181 = INT64_MIN;
	int64_t x182 = INT64_MAX;
	static uint32_t x183 = 3892U;
	static int64_t x184 = 3391958951LL;
	volatile int64_t t36 = -622047839449220857LL;

    t36 = (((x181&x182)*x183)-x184);

    if (t36 != -3391958951LL) { NG(); } else { ; }
	
}

void f37(void) {
    	int64_t x189 = 43259762132330LL;
	volatile uint16_t x190 = 388U;
	uint8_t x191 = 51U;
	uint8_t x192 = 22U;

    t37 = (((x189&x190)*x191)-x192);

    if (t37 != 13034LL) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x193 = 5U;
	int64_t x195 = 12932040739841LL;
	volatile int16_t x196 = 218;
	volatile int64_t t38 = -833LL;

    t38 = (((x193&x194)*x195)-x196);

    if (t38 != 12932040739623LL) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x197 = INT64_MIN;
	uint64_t x198 = 117508000185050129LLU;
	volatile uint64_t t39 = 4697LLU;

    t39 = (((x197&x198)*x199)-x200);

    if (t39 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x201 = -1;
	uint32_t x202 = 64172U;
	int32_t x203 = INT32_MIN;
	int64_t x204 = 1194210692554435944LL;
	static volatile int64_t t40 = 486772899933199168LL;

    t40 = (((x201&x202)*x203)-x204);

    if (t40 != -1194210692554435944LL) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x206 = UINT8_MAX;
	int16_t x207 = -1;
	static int16_t x208 = -1;

    t41 = (((x205&x206)*x207)-x208);

    if (t41 != -254) { NG(); } else { ; }
	
}

void f42(void) {
    	static uint16_t x210 = 23524U;
	volatile int16_t x211 = INT16_MAX;
	uint64_t x212 = 308262146696959LLU;
	uint64_t t42 = 1664521178947777LLU;

    t42 = (((x209&x210)*x211)-x212);

    if (t42 != 18446435811646869245LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x217 = INT8_MAX;
	uint32_t x219 = 2U;
	int16_t x220 = 82;
	volatile int64_t t43 = -14556870965945LL;

    t43 = (((x217&x218)*x219)-x220);

    if (t43 != 24LL) { NG(); } else { ; }
	
}

void f44(void) {
    	int8_t x221 = -1;
	int32_t t44 = -172033464;

    t44 = (((x221&x222)*x223)-x224);

    if (t44 != 128) { NG(); } else { ; }
	
}

void f45(void) {
    	int64_t x225 = INT64_MAX;
	int8_t x226 = INT8_MAX;
	static uint16_t x227 = 4502U;
	volatile int64_t t45 = -183929725104LL;

    t45 = (((x225&x226)*x227)-x228);

    if (t45 != 506219LL) { NG(); } else { ; }
	
}

void f46(void) {
    	static int8_t x229 = INT8_MIN;
	uint64_t x230 = 30630939704790745LLU;
	uint16_t x231 = UINT16_MAX;
	uint64_t x232 = 8380346LLU;
	static volatile uint64_t t46 = 124482472847LLU;

    t46 = (((x229&x230)*x231)-x232);

    if (t46 != 15150273592815686086LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x233 = INT32_MIN;
	int16_t x234 = 118;
	static uint8_t x235 = 105U;
	static uint32_t x236 = 44617U;
	static volatile uint32_t t47 = 6U;

    t47 = (((x233&x234)*x235)-x236);

    if (t47 != 4294922679U) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x237 = -3237;
	int32_t x238 = -1;
	volatile int8_t x239 = 8;
	int64_t x240 = -1LL;
	int64_t t48 = 26758092414819758LL;

    t48 = (((x237&x238)*x239)-x240);

    if (t48 != -25895LL) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x241 = UINT8_MAX;
	uint8_t x242 = UINT8_MAX;
	int64_t x243 = -1LL;
	volatile int64_t t49 = -690214055840LL;

    t49 = (((x241&x242)*x243)-x244);

    if (t49 != -127LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int8_t x246 = INT8_MAX;
	int64_t x248 = 1LL;
	static volatile int64_t t50 = -18302927511LL;

    t50 = (((x245&x246)*x247)-x248);

    if (t50 != 60197LL) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x249 = 1;
	volatile int32_t x250 = 204;
	volatile int8_t x251 = -1;
	uint8_t x252 = 6U;
	int32_t t51 = -506;

    t51 = (((x249&x250)*x251)-x252);

    if (t51 != -6) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x261 = -19;
	int8_t x263 = -7;

    t52 = (((x261&x262)*x263)-x264);

    if (t52 != 1092) { NG(); } else { ; }
	
}

void f53(void) {
    	uint8_t x265 = 3U;
	uint64_t x266 = UINT64_MAX;
	int16_t x267 = INT16_MIN;
	uint64_t x268 = 0LLU;
	volatile uint64_t t53 = 807168764983LLU;

    t53 = (((x265&x266)*x267)-x268);

    if (t53 != 18446744073709453312LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x269 = 17866172U;
	static uint16_t x270 = 4U;
	volatile int8_t x271 = 1;
	volatile uint32_t t54 = 348U;

    t54 = (((x269&x270)*x271)-x272);

    if (t54 != 436U) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x273 = 4U;
	static int32_t x274 = 3387690;
	static uint16_t x275 = 1U;
	static int64_t x276 = -1LL;
	volatile int64_t t55 = -6LL;

    t55 = (((x273&x274)*x275)-x276);

    if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int64_t x281 = -92LL;
	int8_t x282 = 33;
	static uint8_t x283 = 29U;
	int64_t t56 = -10963412451706465LL;

    t56 = (((x281&x282)*x283)-x284);

    if (t56 != 46797379LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x285 = INT64_MIN;
	uint8_t x286 = 7U;
	uint64_t x287 = UINT64_MAX;
	int8_t x288 = -1;
	volatile uint64_t t57 = 527441595156114LLU;

    t57 = (((x285&x286)*x287)-x288);

    if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	int64_t x289 = -1LL;
	int16_t x290 = -1;
	int64_t x291 = -1LL;
	int64_t x292 = INT64_MAX;
	static volatile int64_t t58 = 175020231700323081LL;

    t58 = (((x289&x290)*x291)-x292);

    if (t58 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x298 = INT8_MIN;
	uint8_t x299 = UINT8_MAX;
	int32_t x300 = -1;
	int32_t t59 = -1;

    t59 = (((x297&x298)*x299)-x300);

    if (t59 != -8355839) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x301 = 88U;
	static int8_t x302 = INT8_MIN;
	uint16_t x303 = 7U;
	int32_t x304 = 36014;

    t60 = (((x301&x302)*x303)-x304);

    if (t60 != -36014) { NG(); } else { ; }
	
}

void f61(void) {
    	static volatile uint8_t x305 = 0U;
	volatile uint32_t x306 = 33U;
	static int16_t x307 = INT16_MIN;
	volatile uint64_t x308 = 430761168899654LLU;
	static volatile uint64_t t61 = 1432645LLU;

    t61 = (((x305&x306)*x307)-x308);

    if (t61 != 18446313312540651962LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile uint32_t x309 = 20U;
	uint16_t x311 = UINT16_MAX;
	uint32_t x312 = UINT32_MAX;
	volatile uint32_t t62 = 32643U;

    t62 = (((x309&x310)*x311)-x312);

    if (t62 != 1U) { NG(); } else { ; }
	
}

void f63(void) {
    	static uint64_t x313 = 5858667486969207199LLU;
	int32_t x315 = -1;
	volatile uint64_t t63 = 2475890132593989LLU;

    t63 = (((x313&x314)*x315)-x316);

    if (t63 != 9665670046726179040LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static uint16_t x317 = 1845U;
	int16_t x318 = 91;
	static int32_t x319 = 33283;
	volatile int8_t x320 = INT8_MIN;

    t64 = (((x317&x318)*x319)-x320);

    if (t64 != 565939) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x321 = UINT8_MAX;
	volatile int32_t x323 = 398007;
	int32_t x324 = -2;

    t65 = (((x321&x322)*x323)-x324);

    if (t65 != 101491787) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x325 = INT8_MIN;
	int8_t x326 = INT8_MIN;
	static uint64_t t66 = 82547187462048658LLU;

    t66 = (((x325&x326)*x327)-x328);

    if (t66 != 2147472256LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	volatile uint8_t x329 = 1U;
	static volatile int32_t x330 = INT32_MIN;
	uint8_t x331 = 1U;

    t67 = (((x329&x330)*x331)-x332);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	uint16_t x337 = 19910U;
	int64_t x338 = -416551799420LL;
	volatile int32_t x339 = INT32_MIN;
	int64_t t68 = -7613423LL;

    t68 = (((x337&x338)*x339)-x340);

    if (t68 != -38216618999680LL) { NG(); } else { ; }
	
}

void f69(void) {
    	uint64_t x341 = UINT64_MAX;
	volatile int64_t x342 = INT64_MIN;
	int8_t x343 = INT8_MAX;
	volatile int32_t x344 = -3161345;
	uint64_t t69 = 0LLU;

    t69 = (((x341&x342)*x343)-x344);

    if (t69 != 9223372036857937153LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x357 = INT32_MAX;
	static uint8_t x358 = 40U;
	volatile uint64_t x359 = 183998LLU;
	int8_t x360 = INT8_MAX;
	uint64_t t70 = 178507638768086LLU;

    t70 = (((x357&x358)*x359)-x360);

    if (t70 != 7359793LLU) { NG(); } else { ; }
	
}

void f71(void) {
    	static volatile int8_t x365 = -1;
	volatile int32_t x366 = INT32_MAX;
	static volatile uint16_t x368 = 1011U;
	static volatile uint32_t t71 = 3U;

    t71 = (((x365&x366)*x367)-x368);

    if (t71 != 1850141808U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint32_t x369 = 546173U;
	static int8_t x370 = -1;
	volatile uint16_t x372 = 1064U;
	static uint32_t t72 = 890545048U;

    t72 = (((x369&x370)*x371)-x372);

    if (t72 != 4294420059U) { NG(); } else { ; }
	
}

void f73(void) {
    	int32_t x377 = -1;
	int32_t x378 = 123;
	static uint8_t x379 = 35U;
	volatile int32_t t73 = -78377;

    t73 = (((x377&x378)*x379)-x380);

    if (t73 != 4306) { NG(); } else { ; }
	
}

void f74(void) {
    	volatile uint64_t x381 = UINT64_MAX;
	int8_t x384 = INT8_MIN;
	static uint64_t t74 = 93LLU;

    t74 = (((x381&x382)*x383)-x384);

    if (t74 != 274877907072LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int32_t x385 = -1;
	volatile int64_t x386 = -1LL;
	int32_t x387 = -5236880;
	int8_t x388 = -1;

    t75 = (((x385&x386)*x387)-x388);

    if (t75 != 5236881LL) { NG(); } else { ; }
	
}

void f76(void) {
    	int16_t x393 = 5673;
	volatile uint32_t x394 = UINT32_MAX;
	static volatile uint16_t x395 = UINT16_MAX;
	uint32_t t76 = 967U;

    t76 = (((x393&x394)*x395)-x396);

    if (t76 != 371780115U) { NG(); } else { ; }
	
}

void f77(void) {
    	static int64_t x397 = -1LL;
	uint16_t x398 = 83U;
	volatile int32_t x399 = INT32_MIN;
	uint8_t x400 = 24U;
	static volatile int64_t t77 = 501409932559741LL;

    t77 = (((x397&x398)*x399)-x400);

    if (t77 != -178241142808LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x402 = 17;
	static volatile int8_t x403 = INT8_MIN;

    t78 = (((x401&x402)*x403)-x404);

    if (t78 != -65663) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint8_t x405 = UINT8_MAX;
	int32_t x406 = INT32_MIN;
	static int32_t x408 = INT32_MIN;
	uint64_t t79 = 11LLU;

    t79 = (((x405&x406)*x407)-x408);

    if (t79 != 2147483648LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x410 = UINT8_MAX;
	int64_t x411 = -43015832820639LL;
	uint64_t x412 = UINT64_MAX;

    t80 = (((x409&x410)*x411)-x412);

    if (t80 != 18435775036340288672LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x413 = 6U;
	int64_t x414 = 3237198737008071981LL;
	int16_t x416 = INT16_MIN;
	int64_t t81 = -2173576023630851LL;

    t81 = (((x413&x414)*x415)-x416);

    if (t81 != 10953312LL) { NG(); } else { ; }
	
}

void f82(void) {
    	uint32_t x421 = 13394U;
	uint64_t x422 = UINT64_MAX;
	static int16_t x423 = INT16_MIN;
	uint32_t x424 = UINT32_MAX;
	static uint64_t t82 = 10410922013LLU;

    t82 = (((x421&x422)*x423)-x424);

    if (t82 != 18446744068975689729LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x425 = INT32_MIN;
	static volatile int16_t x426 = INT16_MAX;
	static volatile uint16_t x428 = 31343U;
	static volatile uint32_t t83 = 3290953U;

    t83 = (((x425&x426)*x427)-x428);

    if (t83 != 4294935953U) { NG(); } else { ; }
	
}

void f84(void) {
    	volatile int64_t x430 = INT64_MIN;
	volatile int16_t x431 = -760;
	static int32_t x432 = INT32_MIN;
	int64_t t84 = 387684292362LL;

    t84 = (((x429&x430)*x431)-x432);

    if (t84 != 2147483648LL) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x433 = UINT8_MAX;
	volatile int16_t x435 = -1;
	int8_t x436 = -2;
	static volatile int64_t t85 = 4196913831LL;

    t85 = (((x433&x434)*x435)-x436);

    if (t85 != 2LL) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int16_t x437 = INT16_MIN;
	int16_t x438 = 391;
	static int32_t x440 = -937;

    t86 = (((x437&x438)*x439)-x440);

    if (t86 != 937) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x441 = 19590U;
	static volatile uint8_t x443 = UINT8_MAX;
	int32_t x444 = -3890;
	volatile int32_t t87 = 2850377;

    t87 = (((x441&x442)*x443)-x444);

    if (t87 != 4997810) { NG(); } else { ; }
	
}

void f88(void) {
    	static volatile uint16_t x445 = 16290U;
	int64_t x447 = -1LL;
	int64_t t88 = 76390762LL;

    t88 = (((x445&x446)*x447)-x448);

    if (t88 != -2147499903LL) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile uint64_t x453 = UINT64_MAX;
	static int8_t x454 = 7;
	volatile int8_t x455 = -6;
	uint8_t x456 = 0U;
	uint64_t t89 = 674877842174381578LLU;

    t89 = (((x453&x454)*x455)-x456);

    if (t89 != 18446744073709551574LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x457 = 16;
	int16_t x458 = 0;
	int8_t x460 = INT8_MIN;
	static int32_t t90 = -1991;

    t90 = (((x457&x458)*x459)-x460);

    if (t90 != 128) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x461 = UINT64_MAX;
	static int32_t x462 = -31309;
	uint32_t x463 = 6847335U;
	volatile int64_t x464 = INT64_MAX;
	uint64_t t91 = 7989LLU;

    t91 = (((x461&x462)*x463)-x464);

    if (t91 != 9223371822471564294LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static int8_t x465 = INT8_MIN;
	int16_t x466 = INT16_MIN;
	uint16_t x468 = 0U;
	int32_t t92 = 4;

    t92 = (((x465&x466)*x467)-x468);

    if (t92 != 4194304) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x469 = INT32_MIN;
	static volatile int32_t x470 = INT32_MAX;
	int64_t x471 = -1LL;
	int32_t x472 = -1817;

    t93 = (((x469&x470)*x471)-x472);

    if (t93 != 1817LL) { NG(); } else { ; }
	
}

void f94(void) {
    	volatile uint8_t x473 = 29U;
	volatile int32_t x474 = 99277;
	int16_t x476 = -637;
	volatile int32_t t94 = 525262;

    t94 = (((x473&x474)*x475)-x476);

    if (t94 != 624) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint64_t x479 = 11851657LLU;
	int8_t x480 = 0;
	static uint64_t t95 = 525198143205654LLU;

    t95 = (((x477&x478)*x479)-x480);

    if (t95 != 25451239360319939LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int16_t x481 = -1;
	int32_t x483 = -1;
	static volatile uint16_t x484 = UINT16_MAX;
	volatile int32_t t96 = -775;

    t96 = (((x481&x482)*x483)-x484);

    if (t96 != -32767) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int16_t x485 = 5639;
	int16_t x486 = INT16_MAX;
	int8_t x487 = -25;
	int8_t x488 = INT8_MIN;
	int32_t t97 = -13633079;

    t97 = (((x485&x486)*x487)-x488);

    if (t97 != -140847) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint32_t x489 = 33U;
	uint32_t x491 = 23573951U;
	int32_t x492 = -1;
	volatile int64_t t98 = -14660017236LL;

    t98 = (((x489&x490)*x491)-x492);

    if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x495 = -117;
	int32_t x496 = -1;
	uint64_t t99 = 1902839166238155904LLU;

    t99 = (((x493&x494)*x495)-x496);

    if (t99 != 18446744073130482113LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x497 = INT64_MIN;
	int8_t x498 = INT8_MAX;
	static int64_t x499 = INT64_MAX;
	int16_t x500 = INT16_MAX;
	volatile int64_t t100 = 1LL;

    t100 = (((x497&x498)*x499)-x500);

    if (t100 != -32767LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x501 = INT32_MIN;
	uint64_t x502 = 802734149905283LLU;
	int64_t x504 = 130360206745LL;
	uint64_t t101 = 29502159LLU;

    t101 = (((x501&x502)*x503)-x504);

    if (t101 != 4559679091152591463LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x505 = 1;
	static uint8_t x507 = 117U;
	int64_t x508 = 388879047LL;
	static int64_t t102 = 1730112570515LL;

    t102 = (((x505&x506)*x507)-x508);

    if (t102 != -388878930LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile uint16_t x509 = UINT16_MAX;
	uint8_t x510 = UINT8_MAX;
	uint32_t x511 = UINT32_MAX;
	static int16_t x512 = 0;

    t103 = (((x509&x510)*x511)-x512);

    if (t103 != 4294967041U) { NG(); } else { ; }
	
}

void f104(void) {
    	static uint64_t x513 = 23827813LLU;
	volatile uint64_t x514 = 13LLU;
	int64_t x515 = INT64_MIN;
	uint32_t x516 = 2473296U;
	volatile uint64_t t104 = 76LLU;

    t104 = (((x513&x514)*x515)-x516);

    if (t104 != 9223372036852302512LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int64_t x517 = -1LL;
	volatile uint8_t x518 = UINT8_MAX;
	volatile int32_t x519 = -1;
	volatile uint64_t t105 = 122223922086LLU;

    t105 = (((x517&x518)*x519)-x520);

    if (t105 != 18446744073709551325LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile uint16_t x521 = 100U;
	static volatile uint16_t x522 = 370U;
	int16_t x523 = INT16_MIN;
	int16_t x524 = -1;
	volatile int32_t t106 = -13563663;

    t106 = (((x521&x522)*x523)-x524);

    if (t106 != -3145727) { NG(); } else { ; }
	
}

void f107(void) {
    	uint64_t x525 = 2LLU;
	uint8_t x526 = UINT8_MAX;
	int64_t x528 = INT64_MAX;
	uint64_t t107 = 3202862331268859LLU;

    t107 = (((x525&x526)*x527)-x528);

    if (t107 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int16_t x530 = INT16_MIN;
	uint32_t t108 = 50447831U;

    t108 = (((x529&x530)*x531)-x532);

    if (t108 != 2147516417U) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x533 = INT32_MIN;
	int16_t x534 = 244;
	int32_t x535 = -1;
	int64_t x536 = 413988441057175139LL;
	volatile int64_t t109 = -253677957LL;

    t109 = (((x533&x534)*x535)-x536);

    if (t109 != -413988441057175139LL) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x537 = INT8_MAX;
	uint16_t x538 = 2991U;
	static int8_t x539 = INT8_MAX;
	int8_t x540 = INT8_MIN;
	static volatile int32_t t110 = 9;

    t110 = (((x537&x538)*x539)-x540);

    if (t110 != 6097) { NG(); } else { ; }
	
}

void f111(void) {
    	static int32_t x541 = 591170800;
	int16_t x542 = INT16_MAX;
	int16_t x543 = -10;
	int16_t x544 = -5;
	static volatile int32_t t111 = 31665;

    t111 = (((x541&x542)*x543)-x544);

    if (t111 != -33115) { NG(); } else { ; }
	
}

void f112(void) {
    	static uint16_t x545 = 28496U;
	volatile int16_t x546 = INT16_MAX;
	uint64_t x547 = UINT64_MAX;
	uint64_t x548 = 3661829293121075041LLU;
	uint64_t t112 = 4202045388663517771LLU;

    t112 = (((x545&x546)*x547)-x548);

    if (t112 != 14784914780588448079LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile int64_t x549 = INT64_MAX;
	uint8_t x550 = UINT8_MAX;
	static int8_t x551 = INT8_MAX;
	int32_t x552 = 14478392;

    t113 = (((x549&x550)*x551)-x552);

    if (t113 != -14446007LL) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int64_t x553 = INT64_MIN;
	static int64_t x554 = -24212345470555LL;
	uint64_t x555 = 3235254763LLU;
	int16_t x556 = 1;
	uint64_t t114 = 292926LLU;

    t114 = (((x553&x554)*x555)-x556);

    if (t114 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint32_t x557 = UINT32_MAX;
	static int64_t x560 = INT64_MAX;
	volatile int64_t t115 = -39697640818LL;

    t115 = (((x557&x558)*x559)-x560);

    if (t115 != -9223370836564002862LL) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x561 = 537;
	uint8_t x562 = 7U;
	static int8_t x563 = -1;
	int8_t x564 = -1;
	static int32_t t116 = 36151875;

    t116 = (((x561&x562)*x563)-x564);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	uint32_t x565 = 117305U;
	static int16_t x566 = INT16_MAX;
	uint8_t x567 = UINT8_MAX;

    t117 = (((x565&x566)*x567)-x568);

    if (t117 != 4845256LL) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile int64_t x569 = -1LL;
	static volatile int32_t x572 = 16138;
	uint64_t t118 = 5877297779109737LLU;

    t118 = (((x569&x570)*x571)-x572);

    if (t118 != 557002LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile int64_t x573 = -1LL;
	int64_t x574 = -35808090510718LL;
	int8_t x575 = 0;
	int32_t x576 = INT32_MIN;
	volatile int64_t t119 = -224271485LL;

    t119 = (((x573&x574)*x575)-x576);

    if (t119 != 2147483648LL) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x577 = 21U;
	int16_t x578 = INT16_MIN;
	volatile int16_t x579 = INT16_MAX;
	static int64_t x580 = -1LL;
	static int64_t t120 = -13154032645028281LL;

    t120 = (((x577&x578)*x579)-x580);

    if (t120 != 1LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x581 = -1883370;
	uint16_t x582 = UINT16_MAX;
	static uint64_t x584 = 13791519969LLU;
	volatile uint64_t t121 = 1075746180250232102LLU;

    t121 = (((x581&x582)*x583)-x584);

    if (t121 != 13180468570482115LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static int8_t x585 = INT8_MIN;
	int8_t x586 = 47;
	int16_t x587 = -1;
	uint32_t x588 = UINT32_MAX;

    t122 = (((x585&x586)*x587)-x588);

    if (t122 != 1U) { NG(); } else { ; }
	
}

void f123(void) {
    	static volatile int8_t x593 = INT8_MIN;
	int32_t x594 = -20;
	uint8_t x595 = 93U;
	volatile int32_t t123 = -7;

    t123 = (((x593&x594)*x595)-x596);

    if (t123 != -12031) { NG(); } else { ; }
	
}

void f124(void) {
    	static uint32_t x597 = 1669649U;
	int16_t x598 = 12;
	int16_t x599 = INT16_MIN;
	volatile int32_t x600 = INT32_MIN;
	volatile uint32_t t124 = 0U;

    t124 = (((x597&x598)*x599)-x600);

    if (t124 != 2147483648U) { NG(); } else { ; }
	
}

void f125(void) {
    	uint8_t x605 = UINT8_MAX;
	static int64_t x606 = INT64_MAX;
	static int32_t x607 = INT32_MIN;
	int8_t x608 = -1;
	volatile int64_t t125 = -295023LL;

    t125 = (((x605&x606)*x607)-x608);

    if (t125 != -547608330239LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x614 = INT64_MAX;
	int8_t x616 = INT8_MAX;
	int64_t t126 = 431302726194192425LL;

    t126 = (((x613&x614)*x615)-x616);

    if (t126 != 589688LL) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint16_t x617 = 0U;
	uint32_t x618 = UINT32_MAX;
	int16_t x619 = -1;
	int32_t x620 = -305929990;
	volatile uint32_t t127 = 60U;

    t127 = (((x617&x618)*x619)-x620);

    if (t127 != 305929990U) { NG(); } else { ; }
	
}

void f128(void) {
    	uint16_t x622 = 50U;
	uint8_t x623 = 121U;
	int64_t x624 = -1LL;
	volatile int64_t t128 = 1634121788LL;

    t128 = (((x621&x622)*x623)-x624);

    if (t128 != 243LL) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint8_t x625 = UINT8_MAX;
	int64_t x627 = 8052291LL;
	static uint8_t x628 = 2U;

    t129 = (((x625&x626)*x627)-x628);

    if (t129 != 120784363LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x633 = INT8_MAX;
	static uint8_t x634 = UINT8_MAX;
	volatile int32_t x635 = -1;
	int32_t t130 = -125661996;

    t130 = (((x633&x634)*x635)-x636);

    if (t130 != -170) { NG(); } else { ; }
	
}

void f131(void) {
    	static int32_t x637 = -1;
	uint32_t x638 = UINT32_MAX;
	static volatile int8_t x639 = 1;
	int8_t x640 = INT8_MIN;
	static volatile uint32_t t131 = 124U;

    t131 = (((x637&x638)*x639)-x640);

    if (t131 != 127U) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x641 = INT16_MIN;
	int16_t x642 = INT16_MAX;
	static int16_t x643 = 0;
	int64_t x644 = INT64_MAX;

    t132 = (((x641&x642)*x643)-x644);

    if (t132 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f133(void) {
    	static int8_t x645 = -1;
	int16_t x646 = INT16_MIN;
	int8_t x647 = -7;
	int32_t x648 = 174208245;

    t133 = (((x645&x646)*x647)-x648);

    if (t133 != -173978869) { NG(); } else { ; }
	
}

void f134(void) {
    	uint32_t x649 = UINT32_MAX;
	uint8_t x650 = 0U;
	int32_t x651 = -1;
	uint32_t t134 = 361548448U;

    t134 = (((x649&x650)*x651)-x652);

    if (t134 != 32768U) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x653 = 51U;
	uint16_t x654 = 160U;
	int8_t x655 = INT8_MAX;
	static volatile int64_t x656 = INT64_MAX;
	volatile int64_t t135 = 56318514LL;

    t135 = (((x653&x654)*x655)-x656);

    if (t135 != -9223372036854771743LL) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint16_t x657 = 8549U;
	int32_t x659 = -1;
	volatile uint32_t x660 = 5000U;

    t136 = (((x657&x658)*x659)-x660);

    if (t136 != 4294961971U) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x661 = INT64_MIN;
	int64_t x662 = INT64_MAX;
	int16_t x663 = -1;
	int32_t x664 = 386;
	static volatile int64_t t137 = 20552357LL;

    t137 = (((x661&x662)*x663)-x664);

    if (t137 != -386LL) { NG(); } else { ; }
	
}

void f138(void) {
    	static uint16_t x665 = 1U;
	static int8_t x666 = -1;
	int8_t x667 = 4;
	static volatile int64_t t138 = -95511210LL;

    t138 = (((x665&x666)*x667)-x668);

    if (t138 != 5LL) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x670 = 407526199U;
	int32_t x671 = INT32_MAX;

    t139 = (((x669&x670)*x671)-x672);

    if (t139 != 1739957377U) { NG(); } else { ; }
	
}

void f140(void) {
    	int32_t x680 = -1;
	volatile uint64_t t140 = 815LLU;

    t140 = (((x677&x678)*x679)-x680);

    if (t140 != 1318554959566LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	uint8_t x681 = 74U;
	int64_t x682 = INT64_MAX;
	uint8_t x683 = UINT8_MAX;
	static volatile int64_t t141 = -228298380LL;

    t141 = (((x681&x682)*x683)-x684);

    if (t141 != 18871LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x685 = UINT16_MAX;
	uint64_t x686 = 13881696579684LLU;
	int64_t x687 = -1LL;
	static int64_t x688 = INT64_MAX;
	uint64_t t142 = 4LLU;

    t142 = (((x685&x686)*x687)-x688);

    if (t142 != 9223372036854714269LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	int32_t x689 = INT32_MIN;
	uint64_t x690 = UINT64_MAX;
	int64_t x691 = 30565604591499736LL;
	volatile uint64_t x692 = UINT64_MAX;
	volatile uint64_t t143 = 5109595011LLU;

    t143 = (((x689&x690)*x691)-x692);

    if (t143 != 5619721663206653953LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int64_t x693 = INT64_MIN;
	uint64_t x695 = UINT64_MAX;
	static int64_t x696 = INT64_MAX;
	static volatile uint64_t t144 = 166008137768084LLU;

    t144 = (((x693&x694)*x695)-x696);

    if (t144 != 1LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x697 = 98360909395220LLU;
	int16_t x698 = INT16_MAX;
	uint64_t t145 = 307575372213LLU;

    t145 = (((x697&x698)*x699)-x700);

    if (t145 != 18446744071620663229LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static int32_t x701 = INT32_MAX;
	int8_t x702 = INT8_MAX;
	int8_t x704 = INT8_MIN;

    t146 = (((x701&x702)*x703)-x704);

    if (t146 != 449713732) { NG(); } else { ; }
	
}

void f147(void) {
    	static int16_t x705 = -1;
	int16_t x706 = -3198;
	uint64_t x707 = 1567503452918812LLU;
	uint32_t x708 = 450U;
	volatile uint64_t t147 = 10058364299079098LLU;

    t147 = (((x705&x706)*x707)-x708);

    if (t147 != 13433868031275190390LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile int16_t x709 = INT16_MAX;
	static int64_t x711 = INT64_MIN;
	volatile int64_t t148 = 3367LL;

    t148 = (((x709&x710)*x711)-x712);

    if (t148 != 0LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static uint8_t x713 = 29U;
	static int32_t x714 = INT32_MIN;
	int8_t x715 = INT8_MIN;
	uint16_t x716 = 364U;
	int32_t t149 = -26864;

    t149 = (((x713&x714)*x715)-x716);

    if (t149 != -364) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int32_t x717 = INT32_MIN;
	int16_t x718 = INT16_MAX;
	uint8_t x719 = 3U;
	volatile uint8_t x720 = 111U;
	volatile int32_t t150 = 175;

    t150 = (((x717&x718)*x719)-x720);

    if (t150 != -111) { NG(); } else { ; }
	
}

void f151(void) {
    	static uint32_t x722 = 578498422U;
	static int32_t x723 = -1;
	int8_t x724 = 1;
	static volatile int64_t t151 = -369641934325502054LL;

    t151 = (((x721&x722)*x723)-x724);

    if (t151 != -578498423LL) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x727 = -1;
	volatile int8_t x728 = 29;

    t152 = (((x725&x726)*x727)-x728);

    if (t152 != 18446744073709532873LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint8_t x729 = 13U;
	static int64_t x730 = INT64_MIN;
	int64_t x731 = INT64_MAX;
	volatile int8_t x732 = -7;
	static volatile int64_t t153 = 48479772LL;

    t153 = (((x729&x730)*x731)-x732);

    if (t153 != 7LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x733 = -1;
	volatile uint16_t x734 = UINT16_MAX;
	int32_t x736 = -355;
	volatile int32_t t154 = -7766;

    t154 = (((x733&x734)*x735)-x736);

    if (t154 != -65180) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x737 = -1026403;
	int16_t x738 = INT16_MAX;
	static uint32_t t155 = 3952U;

    t155 = (((x737&x738)*x739)-x740);

    if (t155 != 4294945251U) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x745 = 2LLU;
	uint64_t x746 = UINT64_MAX;

    t156 = (((x745&x746)*x747)-x748);

    if (t156 != 18446744069414584448LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x750 = 31U;
	uint32_t x751 = UINT32_MAX;
	int64_t x752 = 76318438654574558LL;
	static volatile int64_t t157 = 53519194918LL;

    t157 = (((x749&x750)*x751)-x752);

    if (t157 != -76318434359607293LL) { NG(); } else { ; }
	
}

void f158(void) {
    	int64_t x753 = INT64_MIN;
	volatile uint32_t x754 = UINT32_MAX;
	int16_t x755 = INT16_MIN;
	volatile int8_t x756 = 1;
	volatile int64_t t158 = 282617014833441008LL;

    t158 = (((x753&x754)*x755)-x756);

    if (t158 != -1LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile int16_t x757 = -1;
	uint8_t x759 = 4U;
	int8_t x760 = INT8_MIN;
	static volatile int64_t t159 = 4730501834838LL;

    t159 = (((x757&x758)*x759)-x760);

    if (t159 != 124LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int32_t x765 = 3;
	int64_t x766 = INT64_MAX;
	int32_t x767 = INT32_MIN;
	int32_t x768 = INT32_MAX;
	int64_t t160 = 68393869252635LL;

    t160 = (((x765&x766)*x767)-x768);

    if (t160 != -8589934591LL) { NG(); } else { ; }
	
}

void f161(void) {
    	uint16_t x769 = 6U;
	static int16_t x771 = 10;
	int32_t x772 = -1;
	int32_t t161 = -13128762;

    t161 = (((x769&x770)*x771)-x772);

    if (t161 != 61) { NG(); } else { ; }
	
}

void f162(void) {
    	uint16_t x773 = 0U;
	static int32_t x774 = 14;
	int64_t x776 = -146280296865444LL;
	volatile int64_t t162 = -76446114055029214LL;

    t162 = (((x773&x774)*x775)-x776);

    if (t162 != 146280296865444LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x777 = INT8_MIN;
	uint32_t x778 = 265305224U;
	static int8_t x779 = INT8_MIN;
	static volatile uint32_t t163 = 16U;

    t163 = (((x777&x778)*x779)-x780);

    if (t163 != 400670720U) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint16_t x781 = 6U;
	static int64_t x782 = INT64_MIN;
	volatile int16_t x783 = INT16_MIN;
	int64_t t164 = -132793326612LL;

    t164 = (((x781&x782)*x783)-x784);

    if (t164 != -85600LL) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x785 = -32;
	int32_t x786 = -1;
	uint8_t x787 = 14U;
	uint32_t x788 = UINT32_MAX;
	static uint32_t t165 = 15694185U;

    t165 = (((x785&x786)*x787)-x788);

    if (t165 != 4294966849U) { NG(); } else { ; }
	
}

void f166(void) {
    	int8_t x789 = 1;
	int8_t x790 = INT8_MAX;
	uint16_t x791 = 467U;
	volatile int32_t t166 = 1417;

    t166 = (((x789&x790)*x791)-x792);

    if (t166 != 212) { NG(); } else { ; }
	
}

void f167(void) {
    	int64_t x801 = 1185640470466432LL;
	uint16_t x803 = 1537U;

    t167 = (((x801&x802)*x803)-x804);

    if (t167 != -4268998143LL) { NG(); } else { ; }
	
}

void f168(void) {
    	uint32_t x813 = 1650187855U;
	uint8_t x814 = 21U;
	volatile int32_t x815 = -1;
	int8_t x816 = INT8_MIN;
	volatile uint32_t t168 = 26815281U;

    t168 = (((x813&x814)*x815)-x816);

    if (t168 != 123U) { NG(); } else { ; }
	
}

void f169(void) {
    	uint64_t x821 = UINT64_MAX;
	volatile uint8_t x822 = UINT8_MAX;
	int32_t x823 = INT32_MAX;
	uint64_t t169 = 0LLU;

    t169 = (((x821&x822)*x823)-x824);

    if (t169 != 547608326820LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	static int8_t x825 = INT8_MIN;
	uint8_t x826 = UINT8_MAX;
	int8_t x827 = INT8_MAX;

    t170 = (((x825&x826)*x827)-x828);

    if (t170 != 16384) { NG(); } else { ; }
	
}

void f171(void) {
    	static uint16_t x829 = 52U;
	volatile uint16_t x831 = 28717U;
	int8_t x832 = INT8_MIN;
	volatile int32_t t171 = 367;

    t171 = (((x829&x830)*x831)-x832);

    if (t171 != 919072) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x833 = 14U;
	volatile uint64_t x834 = 518734526LLU;
	int16_t x835 = 9255;
	static uint64_t t172 = 32290242328340LLU;

    t172 = (((x833&x834)*x835)-x836);

    if (t172 != 18446744069414713891LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x837 = 0;
	volatile uint64_t x839 = 127571104246195LLU;
	volatile uint64_t t173 = 62251LLU;

    t173 = (((x837&x838)*x839)-x840);

    if (t173 != 18446744073709551585LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	static int8_t x841 = INT8_MIN;
	static int64_t x842 = -1LL;
	static int32_t x843 = INT32_MIN;
	uint64_t x844 = 1LLU;
	uint64_t t174 = 1904847023731LLU;

    t174 = (((x841&x842)*x843)-x844);

    if (t174 != 274877906943LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x850 = 134913565U;
	int32_t x851 = INT32_MIN;
	volatile int16_t x852 = 5964;

    t175 = (((x849&x850)*x851)-x852);

    if (t175 != -289724623191283532LL) { NG(); } else { ; }
	
}

void f176(void) {
    	static uint32_t x853 = 23U;
	int32_t x854 = INT32_MIN;
	static int32_t x855 = -1;
	int8_t x856 = INT8_MAX;
	static uint32_t t176 = 60U;

    t176 = (((x853&x854)*x855)-x856);

    if (t176 != 4294967169U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint16_t x858 = 33U;
	volatile uint16_t x859 = 0U;
	volatile uint32_t t177 = 2U;

    t177 = (((x857&x858)*x859)-x860);

    if (t177 != 4294967294U) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x865 = INT32_MAX;
	static uint8_t x866 = UINT8_MAX;
	volatile int32_t x867 = 6413;
	volatile int16_t x868 = INT16_MIN;
	volatile int32_t t178 = 237;

    t178 = (((x865&x866)*x867)-x868);

    if (t178 != 1668083) { NG(); } else { ; }
	
}

void f179(void) {
    	volatile int8_t x874 = -1;
	uint32_t x875 = 43190U;
	volatile uint32_t x876 = 0U;

    t179 = (((x873&x874)*x875)-x876);

    if (t179 != 38920841260LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static int32_t x877 = 94;
	int16_t x878 = INT16_MIN;
	uint32_t x879 = 146223210U;
	static uint8_t x880 = UINT8_MAX;
	volatile uint32_t t180 = 4352U;

    t180 = (((x877&x878)*x879)-x880);

    if (t180 != 4294967041U) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x889 = 35U;
	static uint8_t x891 = 69U;
	int32_t x892 = -1;
	int64_t t181 = -125280LL;

    t181 = (((x889&x890)*x891)-x892);

    if (t181 != 2416LL) { NG(); } else { ; }
	
}

void f182(void) {
    	static int8_t x893 = INT8_MIN;
	uint32_t x894 = 2112697671U;
	uint64_t x895 = UINT64_MAX;
	int8_t x896 = -1;
	volatile uint64_t t182 = 994278174028203089LLU;

    t182 = (((x893&x894)*x895)-x896);

    if (t182 != 18446744071596854017LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x897 = 3U;
	int16_t x899 = INT16_MAX;
	static int8_t x900 = 5;

    t183 = (((x897&x898)*x899)-x900);

    if (t183 != -5LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint64_t x902 = 8644717484933LLU;
	volatile uint32_t x903 = UINT32_MAX;
	static uint8_t x904 = 8U;
	uint64_t t184 = 62475LLU;

    t184 = (((x901&x902)*x903)-x904);

    if (t184 != 9223363393233092600LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x905 = 21562U;
	int8_t x906 = 14;
	uint32_t x907 = 283812U;
	static volatile uint32_t t185 = 6871U;

    t185 = (((x905&x906)*x907)-x908);

    if (t185 != 127898169U) { NG(); } else { ; }
	
}

void f186(void) {
    	int32_t x909 = 117;
	static int64_t x910 = INT64_MAX;
	volatile int16_t x912 = INT16_MIN;
	static int64_t t186 = -3764LL;

    t186 = (((x909&x910)*x911)-x912);

    if (t186 != 35693LL) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x913 = 8;
	uint32_t x914 = 96U;
	uint64_t x915 = 73983034737597749LLU;
	static uint64_t x916 = 3897626616635660LLU;
	volatile uint64_t t187 = 1223492973422226445LLU;

    t187 = (((x913&x914)*x915)-x916);

    if (t187 != 18442846447092915956LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x918 = INT16_MAX;
	static uint8_t x920 = 6U;
	volatile int32_t t188 = -460415393;

    t188 = (((x917&x918)*x919)-x920);

    if (t188 != -6) { NG(); } else { ; }
	
}

void f189(void) {
    	uint32_t x921 = 4085U;
	int16_t x922 = 4;
	int32_t x924 = INT32_MIN;

    t189 = (((x921&x922)*x923)-x924);

    if (t189 != 2147483644U) { NG(); } else { ; }
	
}

void f190(void) {
    	int8_t x925 = INT8_MIN;
	int8_t x926 = INT8_MIN;
	int8_t x927 = INT8_MIN;
	int32_t t190 = -3327420;

    t190 = (((x925&x926)*x927)-x928);

    if (t190 != 16199) { NG(); } else { ; }
	
}

void f191(void) {
    	uint64_t x929 = 3LLU;
	uint64_t x930 = 217LLU;
	int16_t x931 = INT16_MAX;
	int16_t x932 = -345;

    t191 = (((x929&x930)*x931)-x932);

    if (t191 != 33112LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	uint32_t x933 = 825U;
	static volatile int64_t x934 = INT64_MIN;
	int32_t x936 = -305;

    t192 = (((x933&x934)*x935)-x936);

    if (t192 != 305LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x937 = INT8_MAX;
	uint8_t x938 = 50U;
	uint16_t x939 = 4668U;

    t193 = (((x937&x938)*x939)-x940);

    if (t193 != 233398) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x941 = -1;
	int8_t x942 = -18;
	uint8_t x943 = UINT8_MAX;
	uint32_t t194 = 58648990U;

    t194 = (((x941&x942)*x943)-x944);

    if (t194 != 4294962707U) { NG(); } else { ; }
	
}

void f195(void) {
    	uint64_t x949 = UINT64_MAX;
	uint32_t x951 = 488934236U;
	uint64_t t195 = 238015771827125LLU;

    t195 = (((x949&x950)*x951)-x952);

    if (t195 != 33736462412LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	int64_t x953 = -667262LL;
	int16_t x954 = -17;
	uint16_t x955 = 1554U;
	static int64_t t196 = 668739712953LL;

    t196 = (((x953&x954)*x955)-x956);

    if (t196 != -1036925147LL) { NG(); } else { ; }
	
}

void f197(void) {
    	uint32_t x957 = 507751U;
	int64_t x958 = 223LL;
	int32_t x960 = INT32_MAX;

    t197 = (((x957&x958)*x959)-x960);

    if (t197 != -2147485422LL) { NG(); } else { ; }
	
}

void f198(void) {
    	uint64_t x965 = UINT64_MAX;
	static int32_t x966 = INT32_MAX;
	static int16_t x967 = 9;
	uint8_t x968 = 1U;

    t198 = (((x965&x966)*x967)-x968);

    if (t198 != 19327352822LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	int32_t x970 = INT32_MAX;
	static uint32_t x971 = UINT32_MAX;
	volatile uint32_t t199 = 10U;

    t199 = (((x969&x970)*x971)-x972);

    if (t199 != 2147450881U) { NG(); } else { ; }
	
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

