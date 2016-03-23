
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

uint32_t x9 = 0U;
int64_t x12 = INT64_MIN;
int64_t x27 = -2377938LL;
volatile int32_t x31 = INT32_MIN;
volatile int16_t x57 = INT16_MAX;
volatile int8_t x59 = INT8_MAX;
int32_t t12 = -64555;
volatile int16_t x85 = 240;
int32_t x88 = 581692898;
int32_t t15 = -1000379;
uint64_t x112 = 8638847239272705LLU;
int8_t x118 = -1;
int64_t x121 = INT64_MIN;
volatile int8_t x126 = -2;
uint32_t x132 = UINT32_MAX;
int32_t x136 = INT32_MIN;
static volatile int32_t t22 = -24167;
volatile uint32_t x144 = UINT32_MAX;
int64_t x150 = -2074106239344239823LL;
int64_t x152 = -691754861LL;
int8_t x162 = INT8_MIN;
uint32_t x180 = 6840226U;
static uint16_t x196 = 1620U;
static int32_t t31 = 84;
int32_t t32 = 1022205;
int16_t x205 = INT16_MAX;
static uint64_t x206 = 11202918476238LLU;
uint32_t x207 = 46U;
int64_t x208 = INT64_MAX;
int32_t t33 = -27349;
uint64_t x220 = 17012991937LLU;
int16_t x221 = -1;
volatile uint32_t x222 = UINT32_MAX;
int8_t x226 = INT8_MIN;
int64_t x245 = -273156433225814747LL;
int64_t x248 = -8LL;
volatile int64_t x254 = INT64_MIN;
static int32_t x256 = 2166239;
static int32_t x268 = 791187;
volatile int8_t x282 = INT8_MIN;
uint16_t x286 = 489U;
int32_t x298 = -1;
static uint64_t x299 = 4202622170322LLU;
uint64_t x300 = 112610187LLU;
int32_t t49 = -67;
static int16_t x302 = INT16_MIN;
static int32_t x307 = INT32_MIN;
int32_t t51 = -293;
uint32_t x318 = 13U;
volatile int32_t t55 = -21;
static int64_t x334 = INT64_MIN;
uint64_t x336 = UINT64_MAX;
static int64_t x344 = INT64_MIN;
int16_t x352 = INT16_MIN;
volatile int32_t t60 = 0;
uint8_t x357 = UINT8_MAX;
int32_t x359 = -1;
volatile uint8_t x378 = UINT8_MAX;
uint64_t x383 = 2LLU;
int8_t x385 = INT8_MAX;
uint32_t x407 = 46842U;
int8_t x408 = -32;
int8_t x411 = -59;
volatile uint64_t x415 = 20005060LLU;
int16_t x416 = INT16_MIN;
static int16_t x417 = 6;
volatile int64_t x421 = -4053014311424LL;
uint16_t x427 = 3319U;
int16_t x433 = INT16_MIN;
int16_t x434 = -1;
int64_t x435 = 95488998LL;
static volatile int64_t x436 = INT64_MIN;
uint8_t x441 = 0U;
int8_t x443 = INT8_MAX;
int8_t x463 = INT8_MAX;
int64_t x464 = -2306648LL;
uint64_t x468 = UINT64_MAX;
static int32_t t81 = 14;
int64_t x477 = 245LL;
int32_t t83 = 6;
volatile int32_t x481 = 46417;
volatile uint32_t x486 = UINT32_MAX;
volatile int32_t t86 = -15520520;
static uint16_t x495 = 73U;
volatile int32_t t87 = -375;
int32_t x497 = INT32_MAX;
volatile int32_t t88 = 1085;
int8_t x501 = INT8_MAX;
volatile int8_t x503 = INT8_MIN;
uint32_t x517 = 1250942611U;
volatile int16_t x518 = -1;
int32_t t94 = 41;
volatile int64_t x531 = INT64_MIN;
int8_t x532 = INT8_MAX;
int64_t x557 = INT64_MIN;
static int8_t x558 = 1;
int64_t x559 = INT64_MIN;
uint16_t x570 = UINT16_MAX;
volatile int32_t x572 = -25111454;
volatile int8_t x574 = INT8_MIN;
volatile uint16_t x576 = UINT16_MAX;
volatile int32_t t105 = 38;
uint8_t x589 = UINT8_MAX;
volatile int64_t x604 = INT64_MAX;
int32_t x610 = INT32_MIN;
int64_t x614 = -564552541857768669LL;
static int32_t x622 = INT32_MIN;
int32_t x628 = -77153248;
volatile int64_t x629 = -15LL;
int16_t x630 = 2005;
int64_t x642 = INT64_MIN;
int32_t t116 = 2;
int64_t x648 = INT64_MIN;
int64_t x650 = INT64_MIN;
int32_t x652 = INT32_MAX;
int32_t t118 = -33;
uint8_t x654 = UINT8_MAX;
volatile int32_t t119 = -1;
static int32_t x663 = INT32_MIN;
volatile uint32_t x673 = 401835684U;
int16_t x678 = INT16_MAX;
uint32_t x682 = 1191585408U;
static uint64_t x686 = 4901811672501071LLU;
int32_t x687 = -115381;
volatile int32_t t124 = 1;
int8_t x690 = INT8_MAX;
volatile int64_t x693 = INT64_MAX;
int64_t x694 = INT64_MIN;
static int8_t x699 = INT8_MIN;
int32_t x706 = 15251101;
uint64_t x713 = 1318036LLU;
int16_t x716 = INT16_MIN;
int32_t t135 = -412008435;
int8_t x737 = -5;
static volatile uint32_t x744 = 116535685U;
volatile int32_t t137 = 73346;
static int8_t x746 = INT8_MAX;
int32_t t138 = 1671;
int64_t x760 = -2083619958607LL;
int64_t x761 = INT64_MAX;
int32_t x763 = 3300;
int32_t x766 = INT32_MAX;
static int8_t x767 = 6;
uint32_t x768 = 1294056U;
int16_t x779 = INT16_MAX;
uint64_t x780 = UINT64_MAX;
int64_t x790 = INT64_MAX;
static int8_t x791 = -1;
static volatile int8_t x795 = INT8_MIN;
static int64_t x797 = -1LL;
int16_t x798 = INT16_MIN;
volatile uint64_t x802 = 12550067269583LLU;
uint32_t x803 = 88840719U;
static int32_t x819 = 381435920;
int8_t x820 = INT8_MIN;
int16_t x821 = INT16_MIN;
int16_t x822 = INT16_MIN;
int64_t x829 = INT64_MIN;
uint32_t x856 = 615746212U;
static int8_t x860 = -9;
static volatile uint8_t x882 = UINT8_MAX;
int32_t t160 = -1982;
int64_t x885 = INT64_MAX;
int32_t t161 = 65610649;
int8_t x891 = INT8_MIN;
int64_t x895 = INT64_MAX;
int64_t x898 = INT64_MIN;
uint16_t x900 = 220U;
int32_t t165 = 6;
int64_t x907 = 5973282944153923LL;
int16_t x923 = INT16_MIN;
int32_t x924 = -17;
static uint16_t x928 = 935U;
int16_t x932 = 3;
int32_t x942 = INT32_MIN;
static int16_t x943 = INT16_MAX;
uint16_t x944 = 3U;
static uint8_t x946 = 58U;
int32_t x958 = INT32_MAX;
int32_t x978 = INT32_MIN;
static volatile int32_t t179 = -3;
int32_t x982 = INT32_MIN;
int32_t t180 = 4;
static int8_t x991 = -1;
volatile uint8_t x992 = 52U;
int64_t x994 = 963831681120979LL;
volatile int32_t t183 = -62;
int8_t x1005 = -1;
uint32_t x1009 = 126539U;
volatile int32_t t186 = -479851;
volatile int32_t x1017 = 28342473;
static uint32_t x1030 = UINT32_MAX;
int8_t x1033 = INT8_MIN;
static int32_t t190 = -155913;
uint16_t x1052 = 73U;
int64_t x1053 = INT64_MAX;
int16_t x1055 = -13811;
int32_t t193 = 386739;
int32_t x1071 = 8454051;
uint64_t x1086 = UINT64_MAX;
uint16_t x1089 = UINT16_MAX;
static int8_t x1091 = -1;
int32_t x1096 = INT32_MIN;
int8_t x1098 = -1;
uint8_t x1100 = 53U;
int16_t x1103 = INT16_MAX;
int32_t t199 = 474299212;


void f0(void) {
    	int16_t x1 = -1;
	int32_t x2 = INT32_MIN;
	uint64_t x3 = UINT64_MAX;
	int8_t x4 = INT8_MAX;
	static volatile int32_t t0 = 604777392;

    t0 = (x1<=(x2%(x3%x4)));

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = INT16_MAX;
	int8_t x6 = INT8_MAX;
	static int32_t x7 = INT32_MAX;
	static uint16_t x8 = UINT16_MAX;
	static int32_t t1 = 20;

    t1 = (x5<=(x6%(x7%x8)));

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x10 = INT16_MIN;
	int8_t x11 = -1;
	volatile int32_t t2 = -6257;

    t2 = (x9<=(x10%(x11%x12)));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x13 = INT16_MIN;
	uint16_t x14 = 523U;
	int64_t x15 = -1002241LL;
	int8_t x16 = INT8_MAX;
	volatile int32_t t3 = 6371;

    t3 = (x13<=(x14%(x15%x16)));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x25 = 38U;
	int32_t x26 = INT32_MAX;
	int16_t x28 = INT16_MAX;
	static int32_t t4 = -79800;

    t4 = (x25<=(x26%(x27%x28)));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint64_t x29 = 175061844326LLU;
	uint64_t x30 = UINT64_MAX;
	volatile int64_t x32 = INT64_MIN;
	static volatile int32_t t5 = 16;

    t5 = (x29<=(x30%(x31%x32)));

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	static int16_t x37 = 260;
	int8_t x38 = INT8_MIN;
	static int64_t x39 = -1LL;
	uint16_t x40 = UINT16_MAX;
	volatile int32_t t6 = -76;

    t6 = (x37<=(x38%(x39%x40)));

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	uint8_t x45 = 1U;
	uint8_t x46 = 20U;
	uint8_t x47 = 4U;
	uint64_t x48 = UINT64_MAX;
	int32_t t7 = 13122656;

    t7 = (x45<=(x46%(x47%x48)));

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x53 = INT32_MIN;
	int16_t x54 = -1;
	static volatile uint64_t x55 = 372LLU;
	static volatile int16_t x56 = INT16_MIN;
	volatile int32_t t8 = 1348;

    t8 = (x53<=(x54%(x55%x56)));

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x58 = INT8_MIN;
	int32_t x60 = -6;
	int32_t t9 = -1;

    t9 = (x57<=(x58%(x59%x60)));

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x61 = INT32_MIN;
	static uint8_t x62 = UINT8_MAX;
	int8_t x63 = INT8_MAX;
	volatile int32_t x64 = -63;
	static volatile int32_t t10 = 578760449;

    t10 = (x61<=(x62%(x63%x64)));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	uint64_t x65 = UINT64_MAX;
	uint64_t x66 = UINT64_MAX;
	volatile uint64_t x67 = UINT64_MAX;
	int16_t x68 = -4450;
	volatile int32_t t11 = 886292483;

    t11 = (x65<=(x66%(x67%x68)));

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x73 = INT32_MIN;
	int16_t x74 = INT16_MIN;
	int16_t x75 = INT16_MIN;
	uint8_t x76 = UINT8_MAX;

    t12 = (x73<=(x74%(x75%x76)));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	uint8_t x86 = 5U;
	int64_t x87 = INT64_MIN;
	volatile int32_t t13 = -21363083;

    t13 = (x85<=(x86%(x87%x88)));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile uint64_t x89 = 3208208189390495LLU;
	uint16_t x90 = 429U;
	uint8_t x91 = 50U;
	int8_t x92 = 43;
	int32_t t14 = 126931;

    t14 = (x89<=(x90%(x91%x92)));

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	uint64_t x93 = 8615971573523LLU;
	int8_t x94 = INT8_MAX;
	static int32_t x95 = 129;
	int16_t x96 = -3060;

    t15 = (x93<=(x94%(x95%x96)));

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	int16_t x97 = INT16_MIN;
	uint32_t x98 = 0U;
	int64_t x99 = INT64_MIN;
	int16_t x100 = 27;
	static int32_t t16 = -50;

    t16 = (x97<=(x98%(x99%x100)));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int8_t x109 = 1;
	volatile int8_t x110 = INT8_MIN;
	int32_t x111 = INT32_MAX;
	int32_t t17 = -136015;

    t17 = (x109<=(x110%(x111%x112)));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	int64_t x117 = -1LL;
	static int32_t x119 = -15;
	uint32_t x120 = UINT32_MAX;
	int32_t t18 = -56351;

    t18 = (x117<=(x118%(x119%x120)));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x122 = 13U;
	static int64_t x123 = INT64_MAX;
	int32_t x124 = INT32_MIN;
	volatile int32_t t19 = 7195146;

    t19 = (x121<=(x122%(x123%x124)));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x125 = 1;
	static int32_t x127 = INT32_MIN;
	int64_t x128 = INT64_MIN;
	int32_t t20 = 132355847;

    t20 = (x125<=(x126%(x127%x128)));

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x129 = 1991LLU;
	int64_t x130 = -25954793030630LL;
	static uint32_t x131 = 8238103U;
	int32_t t21 = 41324270;

    t21 = (x129<=(x130%(x131%x132)));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x133 = -1;
	uint16_t x134 = UINT16_MAX;
	static volatile uint8_t x135 = UINT8_MAX;

    t22 = (x133<=(x134%(x135%x136)));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x137 = 904U;
	int64_t x138 = INT64_MIN;
	int64_t x139 = -1LL;
	static volatile int8_t x140 = INT8_MAX;
	volatile int32_t t23 = 196;

    t23 = (x137<=(x138%(x139%x140)));

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	uint16_t x141 = 255U;
	static uint32_t x142 = 7061376U;
	int8_t x143 = INT8_MAX;
	static volatile int32_t t24 = -109314040;

    t24 = (x141<=(x142%(x143%x144)));

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x149 = INT16_MIN;
	volatile int16_t x151 = INT16_MAX;
	volatile int32_t t25 = -65061;

    t25 = (x149<=(x150%(x151%x152)));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	uint32_t x161 = 237283615U;
	int8_t x163 = INT8_MAX;
	int64_t x164 = 1907LL;
	int32_t t26 = -1;

    t26 = (x161<=(x162%(x163%x164)));

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int16_t x169 = -1;
	volatile int16_t x170 = -690;
	static int32_t x171 = -1;
	int32_t x172 = 105;
	int32_t t27 = 30;

    t27 = (x169<=(x170%(x171%x172)));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x177 = -1;
	uint8_t x178 = 28U;
	uint16_t x179 = UINT16_MAX;
	int32_t t28 = -28556055;

    t28 = (x177<=(x178%(x179%x180)));

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int64_t x181 = INT64_MIN;
	static volatile int8_t x182 = -13;
	uint16_t x183 = 1U;
	static uint16_t x184 = 10U;
	static volatile int32_t t29 = 711;

    t29 = (x181<=(x182%(x183%x184)));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x185 = INT8_MAX;
	int32_t x186 = 1773955;
	int64_t x187 = 69351586333731LL;
	int32_t x188 = 400782249;
	int32_t t30 = 107124;

    t30 = (x185<=(x186%(x187%x188)));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x193 = 0;
	uint64_t x194 = 527399756037303347LLU;
	int16_t x195 = 901;

    t31 = (x193<=(x194%(x195%x196)));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	uint64_t x201 = 1607260198LLU;
	static volatile int32_t x202 = 4;
	static volatile int16_t x203 = INT16_MIN;
	int64_t x204 = INT64_MAX;

    t32 = (x201<=(x202%(x203%x204)));

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    

    t33 = (x205<=(x206%(x207%x208)));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x209 = -1LL;
	uint8_t x210 = 3U;
	int32_t x211 = -1495107;
	uint32_t x212 = UINT32_MAX;
	volatile int32_t t34 = 299;

    t34 = (x209<=(x210%(x211%x212)));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int32_t x217 = INT32_MIN;
	uint64_t x218 = 42522351849083LLU;
	static uint32_t x219 = 2676056U;
	int32_t t35 = -81618409;

    t35 = (x217<=(x218%(x219%x220)));

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	uint32_t x223 = 230247U;
	uint8_t x224 = UINT8_MAX;
	int32_t t36 = 7;

    t36 = (x221<=(x222%(x223%x224)));

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	static int64_t x225 = INT64_MAX;
	uint64_t x227 = 56543LLU;
	int8_t x228 = INT8_MIN;
	int32_t t37 = -1;

    t37 = (x225<=(x226%(x227%x228)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x229 = INT32_MAX;
	uint16_t x230 = UINT16_MAX;
	static volatile int16_t x231 = -1;
	volatile int64_t x232 = -107694222145553LL;
	int32_t t38 = 27;

    t38 = (x229<=(x230%(x231%x232)));

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	static int64_t x233 = -174919833456472LL;
	static volatile int8_t x234 = INT8_MIN;
	volatile uint32_t x235 = 41U;
	int32_t x236 = -1;
	static volatile int32_t t39 = 433399;

    t39 = (x233<=(x234%(x235%x236)));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	volatile int16_t x246 = 7;
	int16_t x247 = -1;
	int32_t t40 = 2105951;

    t40 = (x245<=(x246%(x247%x248)));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x249 = INT32_MIN;
	uint16_t x250 = 11U;
	static int16_t x251 = INT16_MIN;
	uint32_t x252 = UINT32_MAX;
	static volatile int32_t t41 = -17;

    t41 = (x249<=(x250%(x251%x252)));

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	uint64_t x253 = UINT64_MAX;
	uint8_t x255 = UINT8_MAX;
	int32_t t42 = -430;

    t42 = (x253<=(x254%(x255%x256)));

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint16_t x257 = 12203U;
	static volatile int16_t x258 = -1;
	volatile int64_t x259 = INT64_MIN;
	uint64_t x260 = UINT64_MAX;
	volatile int32_t t43 = -357324146;

    t43 = (x257<=(x258%(x259%x260)));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static int32_t x261 = -1;
	uint8_t x262 = 3U;
	volatile int8_t x263 = -1;
	int32_t x264 = 1014681685;
	static volatile int32_t t44 = 6900584;

    t44 = (x261<=(x262%(x263%x264)));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int8_t x265 = -1;
	int8_t x266 = INT8_MIN;
	uint32_t x267 = 19U;
	int32_t t45 = -184960893;

    t45 = (x265<=(x266%(x267%x268)));

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x281 = INT16_MIN;
	uint64_t x283 = 523354850265638LLU;
	volatile int8_t x284 = -1;
	volatile int32_t t46 = 6014;

    t46 = (x281<=(x282%(x283%x284)));

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	static int32_t x285 = INT32_MIN;
	volatile uint64_t x287 = 15659526848118029LLU;
	volatile uint64_t x288 = 4974702731LLU;
	volatile int32_t t47 = 7;

    t47 = (x285<=(x286%(x287%x288)));

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static int8_t x289 = -26;
	int8_t x290 = INT8_MIN;
	uint16_t x291 = UINT16_MAX;
	int32_t x292 = INT32_MIN;
	static int32_t t48 = -17;

    t48 = (x289<=(x290%(x291%x292)));

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x297 = 8LLU;

    t49 = (x297<=(x298%(x299%x300)));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	uint16_t x301 = 46U;
	int8_t x303 = -1;
	volatile int8_t x304 = INT8_MAX;
	volatile int32_t t50 = -89;

    t50 = (x301<=(x302%(x303%x304)));

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int16_t x305 = INT16_MIN;
	uint64_t x306 = 568586279220650912LLU;
	int64_t x308 = INT64_MAX;

    t51 = (x305<=(x306%(x307%x308)));

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int8_t x309 = 2;
	int64_t x310 = -6576523LL;
	static int32_t x311 = INT32_MAX;
	uint16_t x312 = 10289U;
	volatile int32_t t52 = -3039109;

    t52 = (x309<=(x310%(x311%x312)));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x317 = UINT64_MAX;
	static volatile int8_t x319 = INT8_MIN;
	uint64_t x320 = UINT64_MAX;
	volatile int32_t t53 = -56140;

    t53 = (x317<=(x318%(x319%x320)));

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	uint32_t x321 = 3032U;
	static int32_t x322 = -118322193;
	uint8_t x323 = 1U;
	int16_t x324 = -7;
	volatile int32_t t54 = 1;

    t54 = (x321<=(x322%(x323%x324)));

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	volatile uint32_t x329 = 1257U;
	uint16_t x330 = UINT16_MAX;
	int8_t x331 = INT8_MIN;
	volatile int8_t x332 = -37;

    t55 = (x329<=(x330%(x331%x332)));

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	int32_t x333 = 41901;
	volatile int32_t x335 = INT32_MAX;
	int32_t t56 = -21196314;

    t56 = (x333<=(x334%(x335%x336)));

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	int8_t x337 = -13;
	uint8_t x338 = 0U;
	int64_t x339 = -158LL;
	uint8_t x340 = UINT8_MAX;
	volatile int32_t t57 = 1222;

    t57 = (x337<=(x338%(x339%x340)));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	static int8_t x341 = -1;
	uint8_t x342 = 7U;
	int32_t x343 = INT32_MIN;
	static int32_t t58 = -2209829;

    t58 = (x341<=(x342%(x343%x344)));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x345 = INT16_MIN;
	volatile uint64_t x346 = 3207820866762955LLU;
	static volatile uint64_t x347 = 251888LLU;
	volatile uint64_t x348 = UINT64_MAX;
	volatile int32_t t59 = -1122181;

    t59 = (x345<=(x346%(x347%x348)));

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x349 = INT16_MIN;
	static int8_t x350 = INT8_MIN;
	static int64_t x351 = -1LL;

    t60 = (x349<=(x350%(x351%x352)));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x358 = UINT16_MAX;
	int32_t x360 = INT32_MAX;
	static int32_t t61 = -35;

    t61 = (x357<=(x358%(x359%x360)));

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x361 = 28U;
	int64_t x362 = -1LL;
	static int64_t x363 = -131LL;
	volatile uint64_t x364 = 2LLU;
	static volatile int32_t t62 = 4140;

    t62 = (x361<=(x362%(x363%x364)));

    if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
    	volatile uint64_t x365 = 19LLU;
	static uint32_t x366 = 13260U;
	int8_t x367 = -17;
	int64_t x368 = 123627593456LL;
	volatile int32_t t63 = 113;

    t63 = (x365<=(x366%(x367%x368)));

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x373 = -1;
	static volatile int64_t x374 = 15855118LL;
	uint64_t x375 = 3707LLU;
	int16_t x376 = -1;
	int32_t t64 = -1583;

    t64 = (x373<=(x374%(x375%x376)));

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	int8_t x377 = 15;
	int32_t x379 = -1;
	int16_t x380 = INT16_MAX;
	int32_t t65 = -1044540;

    t65 = (x377<=(x378%(x379%x380)));

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int64_t x381 = -1LL;
	int16_t x382 = INT16_MIN;
	static uint16_t x384 = 1020U;
	int32_t t66 = 235;

    t66 = (x381<=(x382%(x383%x384)));

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x386 = 7727137LL;
	static int64_t x387 = INT64_MIN;
	static int16_t x388 = 318;
	static int32_t t67 = -1;

    t67 = (x385<=(x386%(x387%x388)));

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x389 = -1LL;
	int32_t x390 = INT32_MIN;
	static uint16_t x391 = 28U;
	static int32_t x392 = INT32_MIN;
	volatile int32_t t68 = -1450566;

    t68 = (x389<=(x390%(x391%x392)));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int16_t x401 = -17;
	uint16_t x402 = UINT16_MAX;
	static uint8_t x403 = 34U;
	int64_t x404 = INT64_MIN;
	volatile int32_t t69 = -3331;

    t69 = (x401<=(x402%(x403%x404)));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile uint16_t x405 = 171U;
	static int16_t x406 = INT16_MAX;
	int32_t t70 = -20085664;

    t70 = (x405<=(x406%(x407%x408)));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int8_t x409 = INT8_MIN;
	int64_t x410 = INT64_MIN;
	uint16_t x412 = 2539U;
	volatile int32_t t71 = -483;

    t71 = (x409<=(x410%(x411%x412)));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int32_t x413 = INT32_MAX;
	int64_t x414 = INT64_MIN;
	int32_t t72 = -367427;

    t72 = (x413<=(x414%(x415%x416)));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	uint64_t x418 = UINT64_MAX;
	int32_t x419 = -20925253;
	volatile int64_t x420 = -438053883519836LL;
	int32_t t73 = -247463;

    t73 = (x417<=(x418%(x419%x420)));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x422 = INT32_MIN;
	int64_t x423 = INT64_MIN;
	int64_t x424 = INT64_MAX;
	volatile int32_t t74 = 8111;

    t74 = (x421<=(x422%(x423%x424)));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile int64_t x425 = -1LL;
	int8_t x426 = INT8_MIN;
	volatile uint8_t x428 = UINT8_MAX;
	static int32_t t75 = 569;

    t75 = (x425<=(x426%(x427%x428)));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t t76 = 318438643;

    t76 = (x433<=(x434%(x435%x436)));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x442 = -1LL;
	int32_t x444 = -293890;
	int32_t t77 = 0;

    t77 = (x441<=(x442%(x443%x444)));

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x445 = INT8_MAX;
	volatile uint64_t x446 = 1756972631835605005LLU;
	int16_t x447 = INT16_MIN;
	int64_t x448 = INT64_MAX;
	static volatile int32_t t78 = -47822107;

    t78 = (x445<=(x446%(x447%x448)));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x453 = 827U;
	static uint16_t x454 = 0U;
	static int8_t x455 = INT8_MIN;
	volatile uint32_t x456 = 9933216U;
	static int32_t t79 = -28963288;

    t79 = (x453<=(x454%(x455%x456)));

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	int8_t x461 = INT8_MAX;
	uint16_t x462 = UINT16_MAX;
	int32_t t80 = 1160;

    t80 = (x461<=(x462%(x463%x464)));

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile int8_t x465 = INT8_MIN;
	uint16_t x466 = 3U;
	volatile uint64_t x467 = 43261414LLU;

    t81 = (x465<=(x466%(x467%x468)));

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x473 = -38;
	uint8_t x474 = UINT8_MAX;
	int32_t x475 = INT32_MIN;
	volatile int32_t x476 = -66640;
	int32_t t82 = -77;

    t82 = (x473<=(x474%(x475%x476)));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x478 = INT64_MIN;
	uint8_t x479 = 1U;
	int8_t x480 = INT8_MIN;

    t83 = (x477<=(x478%(x479%x480)));

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x482 = INT16_MIN;
	uint16_t x483 = UINT16_MAX;
	uint8_t x484 = 2U;
	volatile int32_t t84 = -944795;

    t84 = (x481<=(x482%(x483%x484)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	uint16_t x485 = 2U;
	static int8_t x487 = -1;
	int64_t x488 = -164671510LL;
	int32_t t85 = 211863502;

    t85 = (x485<=(x486%(x487%x488)));

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x489 = -1LL;
	static int32_t x490 = INT32_MIN;
	static int64_t x491 = -1LL;
	volatile int64_t x492 = INT64_MAX;

    t86 = (x489<=(x490%(x491%x492)));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x493 = 0U;
	static int64_t x494 = INT64_MAX;
	uint8_t x496 = 4U;

    t87 = (x493<=(x494%(x495%x496)));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int32_t x498 = INT32_MIN;
	int32_t x499 = INT32_MAX;
	int16_t x500 = INT16_MIN;

    t88 = (x497<=(x498%(x499%x500)));

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	static int64_t x502 = INT64_MIN;
	volatile int64_t x504 = INT64_MIN;
	int32_t t89 = -11199340;

    t89 = (x501<=(x502%(x503%x504)));

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x505 = -1;
	int8_t x506 = INT8_MIN;
	int16_t x507 = -2553;
	int64_t x508 = INT64_MIN;
	static volatile int32_t t90 = 109734;

    t90 = (x505<=(x506%(x507%x508)));

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	uint32_t x509 = 13926309U;
	uint8_t x510 = UINT8_MAX;
	uint8_t x511 = UINT8_MAX;
	volatile uint8_t x512 = 32U;
	volatile int32_t t91 = 0;

    t91 = (x509<=(x510%(x511%x512)));

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x513 = 5;
	uint8_t x514 = 15U;
	int16_t x515 = INT16_MIN;
	int8_t x516 = INT8_MAX;
	volatile int32_t t92 = -44976007;

    t92 = (x513<=(x514%(x515%x516)));

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x519 = UINT8_MAX;
	uint64_t x520 = 1576LLU;
	int32_t t93 = -73887758;

    t93 = (x517<=(x518%(x519%x520)));

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x521 = 80630441203956LLU;
	uint32_t x522 = UINT32_MAX;
	int8_t x523 = 59;
	int32_t x524 = INT32_MAX;

    t94 = (x521<=(x522%(x523%x524)));

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x525 = INT16_MAX;
	uint32_t x526 = UINT32_MAX;
	int8_t x527 = INT8_MIN;
	uint8_t x528 = UINT8_MAX;
	int32_t t95 = -16688;

    t95 = (x525<=(x526%(x527%x528)));

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x529 = -1;
	volatile int8_t x530 = -1;
	int32_t t96 = 256439;

    t96 = (x529<=(x530%(x531%x532)));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	uint64_t x537 = 482620LLU;
	static int16_t x538 = INT16_MAX;
	uint16_t x539 = 1890U;
	uint32_t x540 = 58843619U;
	int32_t t97 = 4;

    t97 = (x537<=(x538%(x539%x540)));

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint64_t x541 = 2120566LLU;
	static uint16_t x542 = 0U;
	int64_t x543 = INT64_MAX;
	int64_t x544 = INT64_MIN;
	int32_t t98 = -8;

    t98 = (x541<=(x542%(x543%x544)));

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	int8_t x549 = INT8_MIN;
	int32_t x550 = 13579047;
	static int64_t x551 = -482755290LL;
	uint64_t x552 = 166062023052250060LLU;
	volatile int32_t t99 = 41;

    t99 = (x549<=(x550%(x551%x552)));

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int64_t x553 = -1LL;
	static int16_t x554 = INT16_MAX;
	int32_t x555 = 97;
	int32_t x556 = INT32_MIN;
	int32_t t100 = 18090750;

    t100 = (x553<=(x554%(x555%x556)));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint32_t x560 = 1449773U;
	volatile int32_t t101 = -963;

    t101 = (x557<=(x558%(x559%x560)));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	static volatile int32_t x561 = 45;
	int16_t x562 = -1;
	int8_t x563 = -4;
	uint32_t x564 = 192849U;
	static volatile int32_t t102 = 3;

    t102 = (x561<=(x562%(x563%x564)));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x569 = INT16_MIN;
	int16_t x571 = INT16_MIN;
	static volatile int32_t t103 = 0;

    t103 = (x569<=(x570%(x571%x572)));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	volatile int16_t x573 = INT16_MIN;
	uint64_t x575 = 859LLU;
	static int32_t t104 = 1839;

    t104 = (x573<=(x574%(x575%x576)));

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x577 = INT8_MIN;
	static uint16_t x578 = 15962U;
	int8_t x579 = INT8_MAX;
	int16_t x580 = -62;

    t105 = (x577<=(x578%(x579%x580)));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint32_t x581 = UINT32_MAX;
	volatile uint32_t x582 = 975511U;
	volatile uint32_t x583 = UINT32_MAX;
	int64_t x584 = INT64_MIN;
	static int32_t t106 = -48;

    t106 = (x581<=(x582%(x583%x584)));

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	static uint8_t x590 = UINT8_MAX;
	int8_t x591 = INT8_MIN;
	int32_t x592 = INT32_MIN;
	int32_t t107 = 22176684;

    t107 = (x589<=(x590%(x591%x592)));

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile uint64_t x601 = 510LLU;
	uint8_t x602 = UINT8_MAX;
	int32_t x603 = INT32_MAX;
	int32_t t108 = -251355218;

    t108 = (x601<=(x602%(x603%x604)));

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x609 = INT32_MAX;
	static uint32_t x611 = 408569357U;
	uint64_t x612 = 283261995718LLU;
	int32_t t109 = -6;

    t109 = (x609<=(x610%(x611%x612)));

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x613 = INT16_MIN;
	static int8_t x615 = INT8_MAX;
	int64_t x616 = -9231LL;
	volatile int32_t t110 = -482677;

    t110 = (x613<=(x614%(x615%x616)));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	static int16_t x617 = INT16_MIN;
	int64_t x618 = -12171985678971119LL;
	uint8_t x619 = UINT8_MAX;
	int8_t x620 = INT8_MAX;
	int32_t t111 = -1041431;

    t111 = (x617<=(x618%(x619%x620)));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x621 = INT64_MIN;
	int64_t x623 = -217212390757087LL;
	int8_t x624 = INT8_MAX;
	static int32_t t112 = -37615;

    t112 = (x621<=(x622%(x623%x624)));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x625 = 5U;
	uint8_t x626 = 3U;
	uint32_t x627 = UINT32_MAX;
	volatile int32_t t113 = -2392;

    t113 = (x625<=(x626%(x627%x628)));

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x631 = INT32_MAX;
	volatile uint16_t x632 = 525U;
	volatile int32_t t114 = -1142;

    t114 = (x629<=(x630%(x631%x632)));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x637 = 591858213620718867LL;
	int32_t x638 = -413;
	int32_t x639 = -1;
	uint8_t x640 = 3U;
	int32_t t115 = 1788060;

    t115 = (x637<=(x638%(x639%x640)));

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int32_t x641 = 3518;
	static int64_t x643 = INT64_MAX;
	static uint64_t x644 = UINT64_MAX;

    t116 = (x641<=(x642%(x643%x644)));

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile uint8_t x645 = UINT8_MAX;
	volatile int16_t x646 = 0;
	volatile int64_t x647 = 939672142LL;
	int32_t t117 = -3354;

    t117 = (x645<=(x646%(x647%x648)));

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	static volatile int16_t x649 = 39;
	int16_t x651 = INT16_MIN;

    t118 = (x649<=(x650%(x651%x652)));

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	static int8_t x653 = -3;
	uint8_t x655 = 97U;
	uint16_t x656 = 1702U;

    t119 = (x653<=(x654%(x655%x656)));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	uint64_t x661 = 859632015338811150LLU;
	int64_t x662 = -1LL;
	int16_t x664 = INT16_MAX;
	int32_t t120 = -964;

    t120 = (x661<=(x662%(x663%x664)));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x674 = -4;
	int8_t x675 = -1;
	static volatile uint32_t x676 = 443261U;
	int32_t t121 = 3;

    t121 = (x673<=(x674%(x675%x676)));

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x677 = 3LLU;
	int32_t x679 = INT32_MIN;
	uint16_t x680 = 12280U;
	volatile int32_t t122 = 32944773;

    t122 = (x677<=(x678%(x679%x680)));

    if (t122 != 1) { NG(); } else { ; }
	
}

void f123(void) {
    	int16_t x681 = -1;
	int16_t x683 = -6;
	volatile int32_t x684 = 1177;
	int32_t t123 = 11;

    t123 = (x681<=(x682%(x683%x684)));

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int8_t x685 = INT8_MIN;
	int64_t x688 = INT64_MAX;

    t124 = (x685<=(x686%(x687%x688)));

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x689 = INT8_MIN;
	int32_t x691 = -3;
	int32_t x692 = -13;
	volatile int32_t t125 = 61;

    t125 = (x689<=(x690%(x691%x692)));

    if (t125 != 1) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x695 = 219U;
	static int8_t x696 = INT8_MIN;
	volatile int32_t t126 = 1;

    t126 = (x693<=(x694%(x695%x696)));

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	static uint32_t x697 = 2019297511U;
	static int8_t x698 = INT8_MIN;
	int16_t x700 = INT16_MIN;
	volatile int32_t t127 = -5129973;

    t127 = (x697<=(x698%(x699%x700)));

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int32_t x701 = INT32_MIN;
	static uint8_t x702 = 45U;
	volatile int64_t x703 = INT64_MAX;
	int32_t x704 = INT32_MIN;
	volatile int32_t t128 = -171;

    t128 = (x701<=(x702%(x703%x704)));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int16_t x705 = INT16_MIN;
	int64_t x707 = -13142LL;
	int32_t x708 = INT32_MIN;
	int32_t t129 = 46474;

    t129 = (x705<=(x706%(x707%x708)));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	int16_t x709 = INT16_MIN;
	int8_t x710 = INT8_MIN;
	static volatile int32_t x711 = INT32_MIN;
	static int16_t x712 = -904;
	int32_t t130 = -478;

    t130 = (x709<=(x710%(x711%x712)));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	int8_t x714 = -7;
	static volatile int64_t x715 = -235357494857LL;
	static volatile int32_t t131 = -5388909;

    t131 = (x713<=(x714%(x715%x716)));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int32_t x717 = -1;
	volatile uint16_t x718 = 8984U;
	int32_t x719 = INT32_MIN;
	int64_t x720 = -23348730LL;
	int32_t t132 = 23343;

    t132 = (x717<=(x718%(x719%x720)));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x721 = 1;
	int32_t x722 = INT32_MAX;
	uint8_t x723 = 5U;
	static uint32_t x724 = 62250860U;
	static volatile int32_t t133 = 645;

    t133 = (x721<=(x722%(x723%x724)));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	uint16_t x725 = 2435U;
	int8_t x726 = INT8_MIN;
	static int32_t x727 = -154;
	int8_t x728 = 27;
	int32_t t134 = -3082963;

    t134 = (x725<=(x726%(x727%x728)));

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x729 = -1;
	int8_t x730 = -1;
	static int16_t x731 = INT16_MIN;
	uint32_t x732 = 36576096U;

    t135 = (x729<=(x730%(x731%x732)));

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int32_t x738 = -62010363;
	static uint32_t x739 = 113762031U;
	static volatile int32_t x740 = INT32_MIN;
	static int32_t t136 = 158;

    t136 = (x737<=(x738%(x739%x740)));

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x741 = 40U;
	int8_t x742 = 7;
	int64_t x743 = INT64_MIN;

    t137 = (x741<=(x742%(x743%x744)));

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x745 = -1;
	int32_t x747 = 474696;
	uint64_t x748 = 13575975LLU;

    t138 = (x745<=(x746%(x747%x748)));

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x749 = 31709U;
	volatile uint64_t x750 = 240244459721436LLU;
	uint64_t x751 = 41682LLU;
	uint32_t x752 = UINT32_MAX;
	volatile int32_t t139 = -2;

    t139 = (x749<=(x750%(x751%x752)));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x757 = -2170001401545LL;
	int16_t x758 = -1;
	static int16_t x759 = INT16_MIN;
	volatile int32_t t140 = -20;

    t140 = (x757<=(x758%(x759%x760)));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x762 = INT16_MAX;
	uint64_t x764 = UINT64_MAX;
	volatile int32_t t141 = -9;

    t141 = (x761<=(x762%(x763%x764)));

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x765 = -1;
	volatile int32_t t142 = -103727924;

    t142 = (x765<=(x766%(x767%x768)));

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int8_t x769 = INT8_MIN;
	static int64_t x770 = -1LL;
	uint64_t x771 = UINT64_MAX;
	static int32_t x772 = INT32_MIN;
	int32_t t143 = 9356;

    t143 = (x769<=(x770%(x771%x772)));

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	uint8_t x773 = UINT8_MAX;
	int32_t x774 = -931;
	int16_t x775 = -1;
	static volatile uint8_t x776 = UINT8_MAX;
	static int32_t t144 = 17003614;

    t144 = (x773<=(x774%(x775%x776)));

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x777 = -2939;
	int8_t x778 = INT8_MIN;
	int32_t t145 = 85;

    t145 = (x777<=(x778%(x779%x780)));

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	int64_t x789 = -2LL;
	uint64_t x792 = 3472468586294LLU;
	volatile int32_t t146 = 4764970;

    t146 = (x789<=(x790%(x791%x792)));

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x793 = UINT64_MAX;
	int32_t x794 = -3767;
	uint64_t x796 = 489405163531280365LLU;
	volatile int32_t t147 = 92;

    t147 = (x793<=(x794%(x795%x796)));

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	static volatile int16_t x799 = 200;
	int32_t x800 = INT32_MIN;
	int32_t t148 = 0;

    t148 = (x797<=(x798%(x799%x800)));

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x801 = 1;
	int8_t x804 = INT8_MIN;
	volatile int32_t t149 = -50;

    t149 = (x801<=(x802%(x803%x804)));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	volatile int16_t x813 = INT16_MAX;
	uint8_t x814 = 0U;
	uint32_t x815 = 7U;
	int64_t x816 = -410881279934787331LL;
	int32_t t150 = 160118746;

    t150 = (x813<=(x814%(x815%x816)));

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	int16_t x817 = INT16_MIN;
	static int16_t x818 = INT16_MAX;
	volatile int32_t t151 = -357184;

    t151 = (x817<=(x818%(x819%x820)));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	uint64_t x823 = 628265702267LLU;
	static uint64_t x824 = UINT64_MAX;
	volatile int32_t t152 = -32083887;

    t152 = (x821<=(x822%(x823%x824)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static int64_t x830 = -12207940439436LL;
	static int64_t x831 = -33067950676982598LL;
	uint8_t x832 = 4U;
	volatile int32_t t153 = -23;

    t153 = (x829<=(x830%(x831%x832)));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	static int32_t x849 = -38;
	uint64_t x850 = 144283692LLU;
	int8_t x851 = INT8_MAX;
	int32_t x852 = 145135853;
	volatile int32_t t154 = -186861477;

    t154 = (x849<=(x850%(x851%x852)));

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	uint16_t x853 = 208U;
	int64_t x854 = INT64_MIN;
	static uint64_t x855 = 719052553593786416LLU;
	volatile int32_t t155 = -3;

    t155 = (x853<=(x854%(x855%x856)));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x857 = 42U;
	int64_t x858 = INT64_MIN;
	volatile int32_t x859 = 53459;
	volatile int32_t t156 = -108;

    t156 = (x857<=(x858%(x859%x860)));

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	volatile int64_t x865 = INT64_MIN;
	int16_t x866 = -1;
	static uint64_t x867 = UINT64_MAX;
	int64_t x868 = INT64_MIN;
	volatile int32_t t157 = 0;

    t157 = (x865<=(x866%(x867%x868)));

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	uint32_t x873 = 14122U;
	uint8_t x874 = UINT8_MAX;
	int64_t x875 = -496LL;
	int16_t x876 = INT16_MIN;
	volatile int32_t t158 = -11319756;

    t158 = (x873<=(x874%(x875%x876)));

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile uint16_t x877 = 13U;
	uint16_t x878 = UINT16_MAX;
	int64_t x879 = INT64_MAX;
	uint64_t x880 = 4628343280515620460LLU;
	int32_t t159 = -375506090;

    t159 = (x877<=(x878%(x879%x880)));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int64_t x881 = INT64_MAX;
	static volatile int16_t x883 = INT16_MIN;
	uint16_t x884 = 579U;

    t160 = (x881<=(x882%(x883%x884)));

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	int32_t x886 = INT32_MAX;
	int32_t x887 = -1;
	int16_t x888 = INT16_MAX;

    t161 = (x885<=(x886%(x887%x888)));

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x889 = -1;
	static volatile int32_t x890 = INT32_MIN;
	int16_t x892 = 23;
	int32_t t162 = 1;

    t162 = (x889<=(x890%(x891%x892)));

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x893 = -14;
	int8_t x894 = INT8_MIN;
	volatile int32_t x896 = INT32_MIN;
	static int32_t t163 = -852616;

    t163 = (x893<=(x894%(x895%x896)));

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile int16_t x897 = -1289;
	uint64_t x899 = UINT64_MAX;
	int32_t t164 = -997286;

    t164 = (x897<=(x898%(x899%x900)));

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x901 = 28243U;
	uint64_t x902 = 50750868921698350LLU;
	uint32_t x903 = UINT32_MAX;
	uint32_t x904 = 6464U;

    t165 = (x901<=(x902%(x903%x904)));

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x905 = -12720321122LL;
	int64_t x906 = INT64_MIN;
	static volatile int32_t x908 = INT32_MIN;
	int32_t t166 = -979901;

    t166 = (x905<=(x906%(x907%x908)));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x917 = -15;
	int32_t x918 = -3;
	int64_t x919 = -81671148442327533LL;
	int32_t x920 = INT32_MAX;
	volatile int32_t t167 = 544;

    t167 = (x917<=(x918%(x919%x920)));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x921 = 3;
	int32_t x922 = INT32_MIN;
	int32_t t168 = -58;

    t168 = (x921<=(x922%(x923%x924)));

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	int32_t x925 = 4895077;
	uint64_t x926 = 6204437812585LLU;
	int16_t x927 = -1;
	static int32_t t169 = -6889820;

    t169 = (x925<=(x926%(x927%x928)));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile uint32_t x929 = 1456841722U;
	volatile int32_t x930 = -1;
	int64_t x931 = INT64_MIN;
	int32_t t170 = -926259;

    t170 = (x929<=(x930%(x931%x932)));

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x937 = INT32_MIN;
	int64_t x938 = INT64_MAX;
	int32_t x939 = INT32_MIN;
	int64_t x940 = INT64_MIN;
	static volatile int32_t t171 = 10963989;

    t171 = (x937<=(x938%(x939%x940)));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	static int8_t x941 = INT8_MIN;
	volatile int32_t t172 = 36445067;

    t172 = (x941<=(x942%(x943%x944)));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x945 = INT64_MIN;
	volatile uint8_t x947 = 75U;
	volatile uint8_t x948 = UINT8_MAX;
	int32_t t173 = 234375742;

    t173 = (x945<=(x946%(x947%x948)));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	uint16_t x949 = 1U;
	static int16_t x950 = INT16_MIN;
	int8_t x951 = -7;
	volatile int64_t x952 = INT64_MIN;
	volatile int32_t t174 = 92608045;

    t174 = (x949<=(x950%(x951%x952)));

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	int8_t x953 = 21;
	volatile int16_t x954 = INT16_MIN;
	int16_t x955 = INT16_MAX;
	volatile int32_t x956 = INT32_MAX;
	int32_t t175 = 0;

    t175 = (x953<=(x954%(x955%x956)));

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int32_t x957 = -1;
	static volatile uint32_t x959 = 37157U;
	static int32_t x960 = INT32_MAX;
	int32_t t176 = -522356917;

    t176 = (x957<=(x958%(x959%x960)));

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	int16_t x965 = INT16_MIN;
	static volatile uint32_t x966 = 352U;
	uint32_t x967 = 46119965U;
	uint32_t x968 = 98812849U;
	int32_t t177 = -12711369;

    t177 = (x965<=(x966%(x967%x968)));

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int64_t x973 = 1791LL;
	static int64_t x974 = 326388915852LL;
	volatile int32_t x975 = -111;
	volatile int32_t x976 = INT32_MIN;
	int32_t t178 = 935;

    t178 = (x973<=(x974%(x975%x976)));

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x977 = INT8_MAX;
	uint16_t x979 = 1511U;
	int32_t x980 = INT32_MIN;

    t179 = (x977<=(x978%(x979%x980)));

    if (t179 != 0) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int8_t x981 = INT8_MAX;
	int64_t x983 = -45LL;
	int32_t x984 = -3752;

    t180 = (x981<=(x982%(x983%x984)));

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x989 = -367954685LL;
	int32_t x990 = 492173;
	int32_t t181 = 15408;

    t181 = (x989<=(x990%(x991%x992)));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x993 = -1;
	uint16_t x995 = 24U;
	static int32_t x996 = INT32_MIN;
	static volatile int32_t t182 = -12;

    t182 = (x993<=(x994%(x995%x996)));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	static int64_t x1001 = INT64_MIN;
	volatile int32_t x1002 = 42;
	uint16_t x1003 = 42U;
	static uint8_t x1004 = UINT8_MAX;

    t183 = (x1001<=(x1002%(x1003%x1004)));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int16_t x1006 = INT16_MAX;
	static uint64_t x1007 = UINT64_MAX;
	int16_t x1008 = -11692;
	int32_t t184 = -6;

    t184 = (x1005<=(x1006%(x1007%x1008)));

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x1010 = INT8_MIN;
	int32_t x1011 = INT32_MIN;
	volatile uint32_t x1012 = UINT32_MAX;
	volatile int32_t t185 = 315;

    t185 = (x1009<=(x1010%(x1011%x1012)));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x1013 = 111U;
	volatile int64_t x1014 = INT64_MIN;
	int8_t x1015 = INT8_MIN;
	static int32_t x1016 = INT32_MIN;

    t186 = (x1013<=(x1014%(x1015%x1016)));

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	uint32_t x1018 = UINT32_MAX;
	volatile uint8_t x1019 = UINT8_MAX;
	static int16_t x1020 = INT16_MIN;
	int32_t t187 = 236107489;

    t187 = (x1017<=(x1018%(x1019%x1020)));

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	volatile uint32_t x1029 = 330344358U;
	volatile int8_t x1031 = 1;
	volatile int16_t x1032 = INT16_MIN;
	volatile int32_t t188 = 68920;

    t188 = (x1029<=(x1030%(x1031%x1032)));

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	volatile int16_t x1034 = INT16_MAX;
	int64_t x1035 = -1LL;
	uint8_t x1036 = 105U;
	static volatile int32_t t189 = 6;

    t189 = (x1033<=(x1034%(x1035%x1036)));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	static int16_t x1037 = INT16_MIN;
	volatile int64_t x1038 = -1LL;
	uint8_t x1039 = 80U;
	uint16_t x1040 = 7U;

    t190 = (x1037<=(x1038%(x1039%x1040)));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1045 = -1LL;
	int8_t x1046 = -1;
	uint16_t x1047 = 1U;
	static volatile uint16_t x1048 = 2U;
	int32_t t191 = 954198081;

    t191 = (x1045<=(x1046%(x1047%x1048)));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	int32_t x1049 = INT32_MIN;
	int32_t x1050 = INT32_MAX;
	int8_t x1051 = INT8_MAX;
	volatile int32_t t192 = -4657448;

    t192 = (x1049<=(x1050%(x1051%x1052)));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	uint64_t x1054 = 5LLU;
	volatile int32_t x1056 = 8635574;

    t193 = (x1053<=(x1054%(x1055%x1056)));

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int8_t x1069 = INT8_MAX;
	int64_t x1070 = INT64_MIN;
	static int64_t x1072 = -451259395LL;
	int32_t t194 = -1037093;

    t194 = (x1069<=(x1070%(x1071%x1072)));

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int32_t x1085 = -1;
	uint32_t x1087 = 213023U;
	static uint32_t x1088 = UINT32_MAX;
	volatile int32_t t195 = -762286872;

    t195 = (x1085<=(x1086%(x1087%x1088)));

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x1090 = INT8_MIN;
	int8_t x1092 = INT8_MIN;
	int32_t t196 = 1046;

    t196 = (x1089<=(x1090%(x1091%x1092)));

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	volatile uint16_t x1093 = 1278U;
	static uint32_t x1094 = 2739U;
	static uint32_t x1095 = 788U;
	int32_t t197 = 1960965;

    t197 = (x1093<=(x1094%(x1095%x1096)));

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x1097 = -25;
	volatile uint64_t x1099 = 32065651LLU;
	static int32_t t198 = -766248524;

    t198 = (x1097<=(x1098%(x1099%x1100)));

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x1101 = INT8_MIN;
	int16_t x1102 = INT16_MAX;
	volatile uint32_t x1104 = 2U;

    t199 = (x1101<=(x1102%(x1103%x1104)));

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

