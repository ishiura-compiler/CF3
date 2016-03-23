
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

int8_t x5 = -1;
int8_t x19 = INT8_MAX;
int64_t t4 = -3026223LL;
int16_t x30 = INT16_MIN;
int64_t x36 = 72818LL;
static int16_t x47 = INT16_MIN;
static int8_t x49 = INT8_MIN;
int32_t t9 = -7022;
int8_t x56 = 21;
uint32_t x61 = 53432687U;
int32_t t15 = -86;
int64_t t16 = 119LL;
int16_t x102 = INT16_MIN;
volatile uint8_t x121 = UINT8_MAX;
volatile int64_t t23 = 0LL;
volatile int64_t x133 = INT64_MAX;
uint64_t x135 = 123425002401LLU;
static int64_t x147 = -1LL;
static uint64_t x151 = 2731LLU;
int32_t x153 = -39;
uint32_t x154 = 3795294U;
int8_t x162 = INT8_MIN;
static int64_t x173 = -1LL;
int16_t x202 = INT16_MAX;
volatile uint64_t t35 = 14901288LLU;
volatile int8_t x217 = INT8_MIN;
volatile int8_t x220 = INT8_MAX;
static int8_t x222 = INT8_MAX;
static uint16_t x223 = UINT16_MAX;
int32_t t39 = -505;
int16_t x225 = -1;
volatile int16_t x230 = 0;
int32_t x231 = -1;
int8_t x242 = INT8_MIN;
int16_t x247 = -1;
uint8_t x248 = 26U;
static int32_t x250 = -76;
volatile uint64_t t45 = 16844337178530980LLU;
uint64_t t48 = 67729584341193LLU;
int8_t x269 = INT8_MIN;
volatile int64_t x272 = INT64_MIN;
static int64_t t49 = 62711LL;
volatile uint16_t x284 = 78U;
int64_t x337 = -1LL;
int32_t x350 = -1;
int16_t x357 = -821;
int64_t x358 = -1LL;
int16_t x361 = 0;
int8_t x363 = INT8_MAX;
static int32_t t61 = 3871;
volatile uint8_t x365 = 1U;
static int8_t x371 = 60;
volatile uint8_t x381 = 95U;
int64_t x383 = -468978LL;
int16_t x384 = INT16_MAX;
static int8_t x385 = INT8_MAX;
int8_t x394 = INT8_MAX;
int32_t x399 = INT32_MIN;
uint64_t x404 = UINT64_MAX;
volatile int16_t x416 = 253;
static uint64_t x433 = 467996171392231320LLU;
int8_t x438 = INT8_MIN;
int64_t t75 = -3LL;
volatile uint16_t x446 = 288U;
volatile int16_t x449 = -137;
static volatile int32_t x457 = INT32_MAX;
int16_t x470 = INT16_MIN;
uint64_t x473 = UINT64_MAX;
int64_t x476 = -28LL;
static int8_t x477 = -1;
uint16_t x483 = UINT16_MAX;
int8_t x487 = INT8_MIN;
static volatile int8_t x488 = INT8_MIN;
volatile uint32_t x492 = 15U;
static int64_t x493 = 896LL;
int16_t x495 = INT16_MAX;
int64_t x496 = INT64_MIN;
int64_t t87 = -253LL;
int64_t x500 = INT64_MAX;
volatile int64_t t88 = -15696005708185417LL;
static volatile int32_t x508 = INT32_MIN;
volatile int64_t t91 = 1591LL;
static uint8_t x526 = UINT8_MAX;
uint64_t x528 = UINT64_MAX;
uint32_t x531 = 1535558U;
uint8_t x532 = UINT8_MAX;
int64_t x534 = -1LL;
uint64_t t97 = 20790579664LLU;
volatile int32_t x555 = -2846220;
int32_t t98 = -1440;
static uint8_t x578 = UINT8_MAX;
static uint32_t x579 = 1U;
volatile uint32_t t100 = 25871U;
volatile uint32_t t101 = 10856U;
static uint16_t x588 = 7U;
static int64_t x590 = -423881395811LL;
uint64_t x601 = UINT64_MAX;
volatile int64_t t107 = 55228622884666202LL;
static int32_t x628 = -1;
int16_t x639 = INT16_MIN;
int16_t x653 = 33;
uint16_t x655 = 2981U;
uint64_t t113 = 8LLU;
volatile uint16_t x663 = UINT16_MAX;
uint16_t x664 = 14U;
uint16_t x665 = 685U;
int32_t x668 = INT32_MAX;
uint16_t x673 = 5U;
static volatile uint8_t x676 = 7U;
uint64_t x709 = 10896LLU;
uint8_t x711 = UINT8_MAX;
static volatile uint64_t t119 = 1521285382308960LLU;
static uint64_t t120 = 18407026083273213LLU;
int8_t x728 = 1;
static int8_t x735 = INT8_MIN;
uint8_t x743 = 26U;
volatile int32_t x744 = -10085639;
int64_t x750 = -1LL;
int32_t x758 = -1;
int16_t x765 = 91;
uint16_t x780 = 29096U;
volatile int32_t t129 = 11567;
volatile uint16_t x786 = UINT16_MAX;
static int8_t x787 = INT8_MIN;
volatile uint64_t x794 = UINT64_MAX;
uint32_t t133 = 368U;
int8_t x812 = INT8_MIN;
int8_t x826 = -15;
static uint64_t x834 = 256LLU;
uint16_t x836 = UINT16_MAX;
int64_t t140 = -29868603491LL;
int64_t x857 = 41243848226329641LL;
static volatile int8_t x858 = 0;
uint16_t x860 = UINT16_MAX;
volatile uint32_t t142 = 4605996U;
int64_t x881 = 223938740387LL;
volatile uint64_t x884 = 590138183937770412LLU;
uint16_t x896 = 122U;
volatile uint64_t t146 = 1075LLU;
int32_t t147 = -651081099;
volatile int8_t x905 = 0;
static int64_t x907 = INT64_MAX;
int16_t x908 = 5;
int32_t x917 = 0;
int16_t x926 = INT16_MAX;
volatile int16_t x927 = -15;
int16_t x928 = 0;
volatile int32_t t150 = -159524;
int32_t x942 = -1;
int8_t x959 = 34;
int32_t x960 = -1;
int8_t x986 = INT8_MAX;
int16_t x999 = INT16_MAX;
int32_t t163 = 8298136;
int8_t x1002 = -1;
int16_t x1019 = 3987;
static uint64_t x1021 = 3179650579742LLU;
volatile uint64_t t166 = 131LLU;
int32_t t168 = -85;
volatile int64_t x1039 = -7836LL;
volatile uint8_t x1040 = 0U;
uint32_t x1050 = 487369102U;
uint32_t x1051 = UINT32_MAX;
int8_t x1071 = INT8_MIN;
volatile uint64_t t173 = 4764185LLU;
static int32_t x1099 = INT32_MIN;
static int64_t x1102 = 58LL;
uint64_t x1108 = UINT64_MAX;
uint32_t x1110 = 436395U;
int16_t x1111 = INT16_MAX;
int16_t x1119 = INT16_MAX;
uint8_t x1125 = 3U;
uint64_t x1128 = UINT64_MAX;
uint32_t x1143 = UINT32_MAX;
uint64_t t184 = 762380318857LLU;
volatile uint64_t t187 = 1784617LLU;
static volatile uint16_t x1169 = UINT16_MAX;
uint8_t x1173 = 6U;
uint64_t t189 = 167974016LLU;
uint16_t x1177 = 1U;
static uint8_t x1193 = UINT8_MAX;
int16_t x1194 = INT16_MIN;
int32_t x1195 = -161161;
uint16_t x1212 = 20U;
int8_t x1213 = -1;
static volatile int64_t t199 = -45606LL;


void f0(void) {
    	int16_t x1 = INT16_MIN;
	uint64_t x2 = 18510502LLU;
	int32_t x3 = -1;
	int16_t x4 = -1;
	volatile uint64_t t0 = 1582687LLU;

    t0 = ((x1*(x2+x3))^x4);

    if (t0 != 606552096767LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int64_t x6 = -63236509159LL;
	volatile int32_t x7 = INT32_MAX;
	int8_t x8 = INT8_MIN;
	int64_t t1 = -1883923567146945LL;

    t1 = ((x5*(x6+x7))^x8);

    if (t1 != -61089025432LL) { NG(); } else { ; }
	
}

void f2(void) {
    	static uint8_t x17 = 76U;
	static volatile int32_t x18 = 17540768;
	uint32_t x20 = 259U;
	uint32_t t2 = 10293U;

    t2 = ((x17*(x18+x19))^x20);

    if (t2 != 1333107767U) { NG(); } else { ; }
	
}

void f3(void) {
    	int16_t x21 = INT16_MIN;
	uint64_t x22 = 220351824LLU;
	int16_t x23 = 3;
	int32_t x24 = INT32_MIN;
	uint64_t t3 = 253LLU;

    t3 = ((x21*(x22+x23))^x24);

    if (t3 != 7221338865664LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x25 = -3301733805908020LL;
	int8_t x26 = -1;
	int16_t x27 = -3;
	static int16_t x28 = INT16_MIN;

    t4 = ((x25*(x26+x27))^x28);

    if (t4 != -13206935223664432LL) { NG(); } else { ; }
	
}

void f5(void) {
    	uint64_t x29 = 10081751467LLU;
	int32_t x31 = -1;
	static volatile int8_t x32 = -1;
	volatile uint64_t t5 = 23408071465031LLU;

    t5 = ((x29*(x30+x31))^x32);

    if (t5 != 330368913822122LLU) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x33 = 34;
	static int16_t x34 = INT16_MIN;
	uint8_t x35 = UINT8_MAX;
	int64_t t6 = -83791654LL;

    t6 = ((x33*(x34+x35))^x36);

    if (t6 != -1163860LL) { NG(); } else { ; }
	
}

void f7(void) {
    	uint32_t x37 = 141U;
	volatile uint16_t x38 = UINT16_MAX;
	static int64_t x39 = 114648211055335LL;
	static volatile int64_t x40 = INT64_MIN;
	volatile int64_t t7 = -2687734169035LL;

    t7 = ((x37*(x38+x39))^x40);

    if (t7 != -9207206639086733138LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int16_t x45 = INT16_MIN;
	uint16_t x46 = 3018U;
	int16_t x48 = -1;
	int32_t t8 = 62;

    t8 = ((x45*(x46+x47))^x48);

    if (t8 != -974848001) { NG(); } else { ; }
	
}

void f9(void) {
    	int32_t x50 = 1063025;
	int8_t x51 = INT8_MIN;
	static int16_t x52 = -1;

    t9 = ((x49*(x50+x51))^x52);

    if (t9 != 136050815) { NG(); } else { ; }
	
}

void f10(void) {
    	uint8_t x53 = UINT8_MAX;
	volatile int8_t x54 = INT8_MIN;
	int8_t x55 = 1;
	volatile int32_t t10 = 1;

    t10 = ((x53*(x54+x55))^x56);

    if (t10 != -32406) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x57 = 10U;
	volatile int16_t x58 = INT16_MIN;
	uint32_t x59 = 9779752U;
	uint8_t x60 = 27U;
	uint32_t t11 = 1350169U;

    t11 = ((x57*(x58+x59))^x60);

    if (t11 != 97469835U) { NG(); } else { ; }
	
}

void f12(void) {
    	static int8_t x62 = INT8_MIN;
	volatile uint16_t x63 = 1825U;
	static int8_t x64 = INT8_MAX;
	volatile uint32_t t12 = 1U;

    t12 = ((x61*(x62+x63))^x64);

    if (t12 != 480956592U) { NG(); } else { ; }
	
}

void f13(void) {
    	uint64_t x65 = UINT64_MAX;
	volatile int8_t x66 = INT8_MIN;
	static uint16_t x67 = UINT16_MAX;
	static int16_t x68 = 7;
	uint64_t t13 = 74LLU;

    t13 = ((x65*(x66+x67))^x68);

    if (t13 != 18446744073709486214LLU) { NG(); } else { ; }
	
}

void f14(void) {
    	static volatile int16_t x69 = -388;
	int16_t x70 = -3;
	static int64_t x71 = -1LL;
	static uint64_t x72 = UINT64_MAX;
	volatile uint64_t t14 = 7LLU;

    t14 = ((x69*(x70+x71))^x72);

    if (t14 != 18446744073709550063LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	uint16_t x77 = 3948U;
	static uint8_t x78 = 1U;
	int8_t x79 = INT8_MAX;
	int32_t x80 = INT32_MAX;

    t15 = ((x77*(x78+x79))^x80);

    if (t15 != 2146978303) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x81 = -1;
	int64_t x82 = INT64_MAX;
	volatile int8_t x83 = INT8_MIN;
	int32_t x84 = -1;

    t16 = ((x81*(x82+x83))^x84);

    if (t16 != 9223372036854775678LL) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x85 = INT32_MIN;
	uint32_t x86 = 312577U;
	static int16_t x87 = INT16_MIN;
	volatile uint64_t x88 = 3LLU;
	static uint64_t t17 = 834321762764825663LLU;

    t17 = ((x85*(x86+x87))^x88);

    if (t17 != 2147483651LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	int8_t x93 = 3;
	uint64_t x94 = 6119LLU;
	uint8_t x95 = UINT8_MAX;
	volatile uint16_t x96 = 4U;
	uint64_t t18 = 21429585902372LLU;

    t18 = ((x93*(x94+x95))^x96);

    if (t18 != 19126LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile int8_t x101 = INT8_MAX;
	int16_t x103 = INT16_MIN;
	uint32_t x104 = UINT32_MAX;
	static volatile uint32_t t19 = 1333995653U;

    t19 = ((x101*(x102+x103))^x104);

    if (t19 != 8323071U) { NG(); } else { ; }
	
}

void f20(void) {
    	static int64_t x113 = INT64_MIN;
	uint64_t x114 = UINT64_MAX;
	int8_t x115 = -12;
	int8_t x116 = 14;
	uint64_t t20 = 1223164172189905LLU;

    t20 = ((x113*(x114+x115))^x116);

    if (t20 != 9223372036854775822LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int32_t x117 = 0;
	uint16_t x118 = 1U;
	int16_t x119 = -42;
	uint32_t x120 = UINT32_MAX;
	uint32_t t21 = UINT32_MAX;

    t21 = ((x117*(x118+x119))^x120);

    if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint64_t x122 = 845443367669LLU;
	uint16_t x123 = 9U;
	int16_t x124 = -193;
	uint64_t t22 = 89395062861LLU;

    t22 = ((x121*(x122+x123))^x124);

    if (t22 != 18446528485650793533LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile uint8_t x125 = UINT8_MAX;
	int32_t x126 = INT32_MIN;
	int64_t x127 = -1LL;
	int32_t x128 = -2749867;

    t23 = ((x125*(x126+x127))^x128);

    if (t23 != 547611080020LL) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile int64_t x129 = 12482079514558LL;
	int16_t x130 = INT16_MAX;
	uint8_t x131 = UINT8_MAX;
	int8_t x132 = INT8_MIN;
	static int64_t t24 = -1277401618392LL;

    t24 = ((x129*(x130+x131))^x132);

    if (t24 != -412183229729734396LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint16_t x134 = 460U;
	uint32_t x136 = 1356476U;
	uint64_t t25 = 89LLU;

    t25 = ((x133*(x134+x135))^x136);

    if (t25 != 9223371913431046191LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x145 = INT16_MAX;
	uint32_t x146 = UINT32_MAX;
	int16_t x148 = INT16_MIN;
	volatile int64_t t26 = 60LL;

    t26 = ((x145*(x146+x147))^x148);

    if (t26 != -140733193355262LL) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x149 = 25562578669885LL;
	int16_t x150 = -1;
	uint16_t x152 = UINT16_MAX;
	uint64_t t27 = 162968757LLU;

    t27 = ((x149*(x150+x151))^x152);

    if (t27 != 69785839768808317LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	volatile int16_t x155 = INT16_MIN;
	int32_t x156 = -7904;
	volatile uint32_t t28 = 19805058U;

    t28 = ((x153*(x154+x155))^x156);

    if (t28 != 146740110U) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x161 = 26472373;
	static uint64_t x163 = 2LLU;
	int64_t x164 = INT64_MIN;
	static volatile uint64_t t29 = 21430278LLU;

    t29 = ((x161*(x162+x163))^x164);

    if (t29 != 9223372033519256810LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint64_t x165 = UINT64_MAX;
	int32_t x166 = -969;
	static uint64_t x167 = 1204159864409LLU;
	int8_t x168 = INT8_MIN;
	uint64_t t30 = 85455050583609LLU;

    t30 = ((x165*(x166+x167))^x168);

    if (t30 != 1204159863536LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x174 = 32554;
	uint32_t x175 = 35213187U;
	int8_t x176 = INT8_MIN;
	static volatile int64_t t31 = 119350573250094LL;

    t31 = ((x173*(x174+x175))^x176);

    if (t31 != 35245779LL) { NG(); } else { ; }
	
}

void f32(void) {
    	static uint16_t x181 = 904U;
	int8_t x182 = 16;
	int8_t x183 = INT8_MAX;
	volatile int32_t x184 = -1;
	int32_t t32 = 325156;

    t32 = ((x181*(x182+x183))^x184);

    if (t32 != -129273) { NG(); } else { ; }
	
}

void f33(void) {
    	int8_t x185 = INT8_MIN;
	static int16_t x186 = INT16_MIN;
	volatile int8_t x187 = -1;
	int8_t x188 = 1;
	int32_t t33 = 0;

    t33 = ((x185*(x186+x187))^x188);

    if (t33 != 4194433) { NG(); } else { ; }
	
}

void f34(void) {
    	int8_t x197 = -4;
	int8_t x198 = -1;
	int16_t x199 = -102;
	static uint16_t x200 = 1U;
	volatile int32_t t34 = -1;

    t34 = ((x197*(x198+x199))^x200);

    if (t34 != 413) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile uint64_t x201 = 36LLU;
	int8_t x203 = -7;
	volatile int64_t x204 = -1LL;

    t35 = ((x201*(x202+x203))^x204);

    if (t35 != 18446744073708372255LLU) { NG(); } else { ; }
	
}

void f36(void) {
    	static int8_t x209 = INT8_MAX;
	static uint32_t x210 = 350U;
	uint16_t x211 = UINT16_MAX;
	int8_t x212 = INT8_MIN;
	uint32_t t36 = 9989237U;

    t36 = ((x209*(x210+x211))^x212);

    if (t36 != 4286599843U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int8_t x213 = 21;
	uint32_t x214 = 5138704U;
	static int8_t x215 = 11;
	uint64_t x216 = 70965562166647LLU;
	volatile uint64_t t37 = 3946210884248LLU;

    t37 = ((x213*(x214+x215))^x216);

    if (t37 != 70965533954624LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int32_t x218 = INT32_MAX;
	int32_t x219 = INT32_MIN;
	int32_t t38 = 21453;

    t38 = ((x217*(x218+x219))^x220);

    if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile int32_t x221 = -8991;
	static int8_t x224 = 0;

    t39 = ((x221*(x222+x223))^x224);

    if (t39 != -590367042) { NG(); } else { ; }
	
}

void f40(void) {
    	uint32_t x226 = 3U;
	volatile uint32_t x227 = 99492U;
	uint8_t x228 = 56U;
	volatile uint32_t t40 = 1025179001U;

    t40 = ((x225*(x226+x227))^x228);

    if (t40 != 4294867809U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint8_t x229 = UINT8_MAX;
	uint64_t x232 = 17023698LLU;
	static volatile uint64_t t41 = 22LLU;

    t41 = ((x229*(x230+x231))^x232);

    if (t41 != 18446744073692528083LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	static int16_t x237 = INT16_MIN;
	uint16_t x238 = 172U;
	int64_t x239 = -1LL;
	uint8_t x240 = UINT8_MAX;
	volatile int64_t t42 = 982029535790488077LL;

    t42 = ((x237*(x238+x239))^x240);

    if (t42 != -5603073LL) { NG(); } else { ; }
	
}

void f43(void) {
    	volatile int8_t x241 = INT8_MIN;
	static volatile int64_t x243 = -8984035412162LL;
	int8_t x244 = INT8_MIN;
	volatile int64_t t43 = 34LL;

    t43 = ((x241*(x242+x243))^x244);

    if (t43 != -1149956532773248LL) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int64_t x245 = -1LL;
	int8_t x246 = INT8_MIN;
	volatile int64_t t44 = 423164LL;

    t44 = ((x245*(x246+x247))^x248);

    if (t44 != 155LL) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x249 = INT16_MIN;
	uint64_t x251 = 136112333250393LLU;
	int64_t x252 = 2LL;

    t45 = ((x249*(x250+x251))^x252);

    if (t45 != 13986615137763164162LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x253 = INT8_MIN;
	int16_t x254 = INT16_MIN;
	int16_t x255 = 0;
	volatile int64_t x256 = INT64_MIN;
	volatile int64_t t46 = 454869740294LL;

    t46 = ((x253*(x254+x255))^x256);

    if (t46 != -9223372036850581504LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x257 = -39;
	static volatile uint16_t x258 = 25453U;
	uint64_t x259 = 952701000641LLU;
	int16_t x260 = INT16_MIN;
	static volatile uint64_t t47 = 98LLU;

    t47 = ((x257*(x258+x259))^x260);

    if (t47 != 37155340001278LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	int16_t x265 = -17;
	static volatile int64_t x266 = 8223522280907802LL;
	static int64_t x267 = -1LL;
	uint64_t x268 = 201820LLU;

    t48 = ((x265*(x266+x267))^x268);

    if (t48 != 18306944194934050315LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	uint32_t x270 = 87336493U;
	volatile uint8_t x271 = 64U;

    t49 = ((x269*(x270+x271))^x272);

    if (t49 != -9223372035148953216LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int32_t x273 = -131;
	static volatile int64_t x274 = -148498557LL;
	volatile uint8_t x275 = 1U;
	uint8_t x276 = UINT8_MAX;
	volatile int64_t t50 = -58LL;

    t50 = ((x273*(x274+x275))^x276);

    if (t50 != 19453310859LL) { NG(); } else { ; }
	
}

void f51(void) {
    	uint16_t x277 = 284U;
	int8_t x278 = INT8_MIN;
	uint64_t x279 = UINT64_MAX;
	int16_t x280 = INT16_MIN;
	volatile uint64_t t51 = 5485962763869LLU;

    t51 = ((x277*(x278+x279))^x280);

    if (t51 != 61668LLU) { NG(); } else { ; }
	
}

void f52(void) {
    	int8_t x281 = INT8_MIN;
	int8_t x282 = -1;
	uint8_t x283 = 7U;
	volatile int32_t t52 = -3624;

    t52 = ((x281*(x282+x283))^x284);

    if (t52 != -690) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x285 = 13545847929047600LLU;
	volatile int64_t x286 = INT64_MIN;
	uint16_t x287 = UINT16_MAX;
	volatile int8_t x288 = INT8_MIN;
	uint64_t t53 = 3LLU;

    t53 = ((x285*(x286+x287))^x288);

    if (t53 != 16163315581633563216LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint32_t x329 = UINT32_MAX;
	uint8_t x330 = UINT8_MAX;
	static uint64_t x331 = UINT64_MAX;
	uint64_t x332 = 9040382LLU;
	uint64_t t54 = 18919LLU;

    t54 = ((x329*(x330+x331))^x332);

    if (t54 != 1090912653052LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint32_t x333 = UINT32_MAX;
	uint16_t x334 = 71U;
	volatile uint8_t x335 = 0U;
	static uint8_t x336 = UINT8_MAX;
	volatile uint32_t t55 = 0U;

    t55 = ((x333*(x334+x335))^x336);

    if (t55 != 4294967110U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint8_t x338 = 4U;
	volatile int64_t x339 = INT64_MIN;
	uint64_t x340 = 13166888753039LLU;
	uint64_t t56 = 6LLU;

    t56 = ((x337*(x338+x339))^x340);

    if (t56 != 9223358869966022771LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	uint64_t x341 = UINT64_MAX;
	static int64_t x342 = -16229308687LL;
	uint16_t x343 = 3U;
	volatile int16_t x344 = 117;
	volatile uint64_t t57 = 0LLU;

    t57 = ((x341*(x342+x343))^x344);

    if (t57 != 16229308793LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int8_t x349 = 1;
	int8_t x351 = INT8_MIN;
	volatile uint64_t x352 = UINT64_MAX;
	uint64_t t58 = 160784715877222LLU;

    t58 = ((x349*(x350+x351))^x352);

    if (t58 != 128LLU) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x353 = 6U;
	int64_t x354 = -1123329LL;
	volatile int64_t x355 = -1LL;
	int8_t x356 = INT8_MIN;
	static volatile int64_t t59 = 3057550708300LL;

    t59 = ((x353*(x354+x355))^x356);

    if (t59 != 6740084LL) { NG(); } else { ; }
	
}

void f60(void) {
    	int16_t x359 = INT16_MAX;
	volatile int8_t x360 = INT8_MIN;
	volatile int64_t t60 = 75498572272325LL;

    t60 = ((x357*(x358+x359))^x360);

    if (t60 != 26900970LL) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x362 = INT32_MIN;
	int16_t x364 = 148;

    t61 = ((x361*(x362+x363))^x364);

    if (t61 != 148) { NG(); } else { ; }
	
}

void f62(void) {
    	volatile int64_t x366 = INT64_MIN;
	volatile int32_t x367 = 1770;
	static uint8_t x368 = 0U;
	static int64_t t62 = 678840148LL;

    t62 = ((x365*(x366+x367))^x368);

    if (t62 != -9223372036854774038LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint64_t x369 = UINT64_MAX;
	static int8_t x370 = INT8_MIN;
	int64_t x372 = -325189674013354726LL;
	volatile uint64_t t63 = 1933LLU;

    t63 = ((x369*(x370+x371))^x372);

    if (t63 != 18121554399696196958LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	static int16_t x382 = INT16_MIN;
	int64_t t64 = 578053114933LL;

    t64 = ((x381*(x382+x383))^x384);

    if (t64 != -47656243LL) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x386 = INT16_MAX;
	uint32_t x387 = 16084546U;
	volatile int8_t x388 = -28;
	volatile uint32_t t65 = 90U;

    t65 = ((x385*(x386+x387))^x388);

    if (t65 != 2248068571U) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x389 = INT8_MAX;
	int32_t x390 = -226;
	int16_t x391 = INT16_MIN;
	int16_t x392 = INT16_MAX;
	static volatile int32_t t66 = 9;

    t66 = ((x389*(x390+x391))^x392);

    if (t66 != -4165603) { NG(); } else { ; }
	
}

void f67(void) {
    	uint8_t x393 = 10U;
	uint8_t x395 = 15U;
	volatile int32_t x396 = INT32_MIN;
	static int32_t t67 = 55032164;

    t67 = ((x393*(x394+x395))^x396);

    if (t67 != -2147482228) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint32_t x397 = 1U;
	volatile uint64_t x398 = 49519053687LLU;
	uint64_t x400 = UINT64_MAX;
	uint64_t t68 = 335083680032379219LLU;

    t68 = ((x397*(x398+x399))^x400);

    if (t68 != 18446744026337981576LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x401 = 1613580773841LL;
	int32_t x402 = 1;
	int32_t x403 = -2;
	static volatile uint64_t t69 = 27480122LLU;

    t69 = ((x401*(x402+x403))^x404);

    if (t69 != 1613580773840LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x413 = 113U;
	int8_t x414 = 62;
	uint16_t x415 = 6U;
	static uint32_t t70 = 542327756U;

    t70 = ((x413*(x414+x415))^x416);

    if (t70 != 7929U) { NG(); } else { ; }
	
}

void f71(void) {
    	static int16_t x421 = INT16_MAX;
	int32_t x422 = INT32_MAX;
	int64_t x423 = -1LL;
	int16_t x424 = INT16_MIN;
	static int64_t t71 = -2073961590635LL;

    t71 = ((x421*(x422+x423))^x424);

    if (t71 != -70366596661246LL) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x425 = 98;
	uint64_t x426 = UINT64_MAX;
	uint16_t x427 = 11U;
	int8_t x428 = -1;
	static uint64_t t72 = 3LLU;

    t72 = ((x425*(x426+x427))^x428);

    if (t72 != 18446744073709550635LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int32_t x429 = 0;
	volatile int32_t x430 = INT32_MIN;
	uint16_t x431 = 25U;
	int64_t x432 = INT64_MIN;
	int64_t t73 = INT64_MIN;

    t73 = ((x429*(x430+x431))^x432);

    if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x434 = INT8_MAX;
	volatile uint16_t x435 = 5U;
	uint8_t x436 = 13U;
	volatile uint64_t t74 = 168730677568150601LLU;

    t74 = ((x433*(x434+x435))^x436);

    if (t74 != 6435262402645879405LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static int16_t x437 = -1;
	volatile uint32_t x439 = UINT32_MAX;
	int64_t x440 = INT64_MAX;

    t75 = ((x437*(x438+x439))^x440);

    if (t75 != 9223372036854775678LL) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x445 = UINT32_MAX;
	static volatile uint8_t x447 = 122U;
	uint32_t x448 = 328767U;
	uint32_t t76 = 1125837099U;

    t76 = ((x445*(x446+x447))^x448);

    if (t76 != 4294638169U) { NG(); } else { ; }
	
}

void f77(void) {
    	uint8_t x450 = UINT8_MAX;
	int64_t x451 = -3470LL;
	static int8_t x452 = -7;
	static int64_t t77 = -55195117LL;

    t77 = ((x449*(x450+x451))^x452);

    if (t77 != -440450LL) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile int8_t x453 = 16;
	uint16_t x454 = 0U;
	int64_t x455 = -1LL;
	int8_t x456 = INT8_MIN;
	static int64_t t78 = -228191223LL;

    t78 = ((x453*(x454+x455))^x456);

    if (t78 != 112LL) { NG(); } else { ; }
	
}

void f79(void) {
    	static int32_t x458 = INT32_MIN;
	static int64_t x459 = 11190LL;
	static int64_t x460 = -24898379955LL;
	volatile int64_t t79 = -232840846510LL;

    t79 = ((x457*(x458+x459))^x460);

    if (t79 != 4611661972181551879LL) { NG(); } else { ; }
	
}

void f80(void) {
    	int64_t x465 = -610LL;
	int8_t x466 = INT8_MIN;
	uint64_t x467 = 5LLU;
	volatile int32_t x468 = INT32_MIN;
	static uint64_t t80 = 71745018759LLU;

    t80 = ((x465*(x466+x467))^x468);

    if (t80 != 18446744071562142998LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	static volatile int16_t x469 = INT16_MAX;
	int8_t x471 = INT8_MIN;
	uint32_t x472 = UINT32_MAX;
	volatile uint32_t t81 = 5U;

    t81 = ((x469*(x470+x471))^x472);

    if (t81 != 1077903231U) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint64_t x474 = 186873LLU;
	int16_t x475 = 179;
	volatile uint64_t t82 = 1159138356326LLU;

    t82 = ((x473*(x474+x475))^x476);

    if (t82 != 187056LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x478 = INT8_MAX;
	int8_t x479 = 2;
	static uint64_t x480 = UINT64_MAX;
	volatile uint64_t t83 = 42586700836443LLU;

    t83 = ((x477*(x478+x479))^x480);

    if (t83 != 128LLU) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x481 = INT8_MAX;
	uint32_t x482 = 5011573U;
	volatile uint16_t x484 = 458U;
	uint32_t t84 = 48U;

    t84 = ((x481*(x482+x483))^x484);

    if (t84 != 644792390U) { NG(); } else { ; }
	
}

void f85(void) {
    	uint32_t x485 = UINT32_MAX;
	static uint16_t x486 = 1U;
	uint32_t t85 = UINT32_MAX;

    t85 = ((x485*(x486+x487))^x488);

    if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile int64_t x489 = -1489439164LL;
	int8_t x490 = INT8_MAX;
	volatile uint16_t x491 = 262U;
	static int64_t t86 = 194510173306LL;

    t86 = ((x489*(x490+x491))^x492);

    if (t86 != -579391834789LL) { NG(); } else { ; }
	
}

void f87(void) {
    	uint16_t x494 = 1U;

    t87 = ((x493*(x494+x495))^x496);

    if (t87 != -9223372036825415680LL) { NG(); } else { ; }
	
}

void f88(void) {
    	volatile int16_t x497 = INT16_MIN;
	volatile int8_t x498 = 0;
	uint16_t x499 = UINT16_MAX;

    t88 = ((x497*(x498+x499))^x500);

    if (t88 != -9223372034707324929LL) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x505 = INT32_MIN;
	static int8_t x506 = INT8_MAX;
	uint32_t x507 = 2561U;
	static volatile uint32_t t89 = 2009897910U;

    t89 = ((x505*(x506+x507))^x508);

    if (t89 != 2147483648U) { NG(); } else { ; }
	
}

void f90(void) {
    	static volatile int32_t x517 = -1;
	uint64_t x518 = 128667610113LLU;
	int64_t x519 = 1048490175092008568LL;
	uint32_t x520 = UINT32_MAX;
	volatile uint64_t t90 = 29748336LLU;

    t90 = ((x517*(x518+x519))^x520);

    if (t90 != 17398253768139117176LLU) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x521 = -677LL;
	static int32_t x522 = 76040;
	static uint8_t x523 = 105U;
	int32_t x524 = INT32_MIN;

    t91 = ((x521*(x522+x523))^x524);

    if (t91 != 2095933483LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x525 = UINT64_MAX;
	int16_t x527 = INT16_MAX;
	uint64_t t92 = 42933673LLU;

    t92 = ((x525*(x526+x527))^x528);

    if (t92 != 33021LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	static int16_t x529 = -1;
	int8_t x530 = -1;
	uint32_t t93 = 1428U;

    t93 = ((x529*(x530+x531))^x532);

    if (t93 != 4293431620U) { NG(); } else { ; }
	
}

void f94(void) {
    	int32_t x533 = -1;
	volatile int32_t x535 = INT32_MAX;
	int64_t x536 = -13754498112318LL;
	volatile int64_t t94 = 454084851943082579LL;

    t94 = ((x533*(x534+x535))^x536);

    if (t94 != 13752619934912LL) { NG(); } else { ; }
	
}

void f95(void) {
    	int8_t x541 = 1;
	int16_t x542 = -7;
	static uint64_t x543 = UINT64_MAX;
	volatile uint16_t x544 = 154U;
	uint64_t t95 = 11392895812199744LLU;

    t95 = ((x541*(x542+x543))^x544);

    if (t95 != 18446744073709551458LLU) { NG(); } else { ; }
	
}

void f96(void) {
    	int8_t x545 = INT8_MIN;
	int64_t x546 = -2720LL;
	int32_t x547 = -1700;
	uint8_t x548 = 1U;
	int64_t t96 = -3884215003599LL;

    t96 = ((x545*(x546+x547))^x548);

    if (t96 != 565761LL) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x549 = 4532680;
	volatile uint64_t x550 = UINT64_MAX;
	int32_t x551 = -396930130;
	volatile int16_t x552 = INT16_MAX;

    t97 = ((x549*(x550+x551))^x552);

    if (t97 != 18444944916443392983LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static uint8_t x553 = UINT8_MAX;
	volatile int8_t x554 = 0;
	uint8_t x556 = 1U;

    t98 = ((x553*(x554+x555))^x556);

    if (t98 != -725786099) { NG(); } else { ; }
	
}

void f99(void) {
    	uint64_t x573 = 2298971LLU;
	uint64_t x574 = 685067590LLU;
	int8_t x575 = -1;
	int32_t x576 = INT32_MIN;
	volatile uint64_t t99 = 233106642343895LLU;

    t99 = ((x573*(x574+x575))^x576);

    if (t99 != 18445169123132103559LLU) { NG(); } else { ; }
	
}

void f100(void) {
    	static int16_t x577 = -1;
	int32_t x580 = -1;

    t100 = ((x577*(x578+x579))^x580);

    if (t100 != 255U) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint16_t x581 = 30U;
	uint8_t x582 = 5U;
	uint32_t x583 = UINT32_MAX;
	volatile int16_t x584 = INT16_MIN;

    t101 = ((x581*(x582+x583))^x584);

    if (t101 != 4294934648U) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x585 = 3U;
	int32_t x586 = INT32_MAX;
	volatile uint32_t x587 = 881402270U;
	volatile uint32_t t102 = 218U;

    t102 = ((x585*(x586+x587))^x588);

    if (t102 != 496723152U) { NG(); } else { ; }
	
}

void f103(void) {
    	int16_t x589 = INT16_MAX;
	static int8_t x591 = INT8_MAX;
	int64_t x592 = -1873282LL;
	volatile int64_t t103 = -4885721515LL;

    t103 = ((x589*(x590+x591))^x592);

    if (t103 != 13889321693718426LL) { NG(); } else { ; }
	
}

void f104(void) {
    	int16_t x602 = INT16_MIN;
	volatile int16_t x603 = -560;
	static int16_t x604 = -1;
	volatile uint64_t t104 = 2520074LLU;

    t104 = ((x601*(x602+x603))^x604);

    if (t104 != 18446744073709518287LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x613 = INT16_MIN;
	uint16_t x614 = 1226U;
	volatile int64_t x615 = -1LL;
	static uint16_t x616 = UINT16_MAX;
	volatile int64_t t105 = 44770284538532348LL;

    t105 = ((x613*(x614+x615))^x616);

    if (t105 != -40140801LL) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int16_t x617 = -3795;
	volatile uint64_t x618 = UINT64_MAX;
	int64_t x619 = -1LL;
	int8_t x620 = 43;
	static uint64_t t106 = 1602350LLU;

    t106 = ((x617*(x618+x619))^x620);

    if (t106 != 7565LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile int32_t x621 = 12777;
	static volatile int64_t x622 = 46295729LL;
	int64_t x623 = 40951LL;
	uint8_t x624 = UINT8_MAX;

    t107 = ((x621*(x622+x623))^x624);

    if (t107 != 592043760151LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint64_t x625 = 803701417755LLU;
	static int8_t x626 = INT8_MIN;
	volatile int8_t x627 = -1;
	volatile uint64_t t108 = 452111436780041LLU;

    t108 = ((x625*(x626+x627))^x628);

    if (t108 != 103677482890394LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	int32_t x629 = -25;
	int32_t x630 = INT32_MAX;
	static volatile uint32_t x631 = 812730U;
	int64_t x632 = 2285203003LL;
	volatile int64_t t109 = 1838218033400LL;

    t109 = ((x629*(x630+x631))^x632);

    if (t109 != 4143749588LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x633 = UINT16_MAX;
	int16_t x634 = 1;
	uint32_t x635 = 344711U;
	static int32_t x636 = -1;
	volatile uint32_t t110 = 12U;

    t110 = ((x633*(x634+x635))^x636);

    if (t110 != 3179102855U) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x637 = -1;
	uint32_t x638 = UINT32_MAX;
	uint16_t x640 = 1U;
	uint32_t t111 = 6190U;

    t111 = ((x637*(x638+x639))^x640);

    if (t111 != 32768U) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x654 = 9254LLU;
	int8_t x656 = INT8_MIN;
	static volatile uint64_t t112 = 60LLU;

    t112 = ((x653*(x654+x655))^x656);

    if (t112 != 18446744073709147819LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint64_t x657 = 10LLU;
	volatile int16_t x658 = INT16_MIN;
	volatile int32_t x659 = 4;
	static int32_t x660 = 1;

    t113 = ((x657*(x658+x659))^x660);

    if (t113 != 18446744073709223977LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int16_t x661 = -1;
	volatile int16_t x662 = INT16_MAX;
	static volatile int32_t t114 = 134888188;

    t114 = ((x661*(x662+x663))^x664);

    if (t114 != -98292) { NG(); } else { ; }
	
}

void f115(void) {
    	int64_t x666 = 14LL;
	int8_t x667 = 0;
	int64_t t115 = 86LL;

    t115 = ((x665*(x666+x667))^x668);

    if (t115 != 2147474057LL) { NG(); } else { ; }
	
}

void f116(void) {
    	int16_t x674 = INT16_MIN;
	int16_t x675 = INT16_MIN;
	int32_t t116 = 1;

    t116 = ((x673*(x674+x675))^x676);

    if (t116 != -327673) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x689 = -4;
	int16_t x690 = -1;
	static volatile int8_t x691 = 8;
	int32_t x692 = INT32_MIN;
	int32_t t117 = -13;

    t117 = ((x689*(x690+x691))^x692);

    if (t117 != 2147483620) { NG(); } else { ; }
	
}

void f118(void) {
    	uint64_t x693 = UINT64_MAX;
	static uint32_t x694 = 333U;
	int8_t x695 = INT8_MIN;
	static int64_t x696 = 7841318091138LL;
	volatile uint64_t t118 = 155558652LLU;

    t118 = ((x693*(x694+x695))^x696);

    if (t118 != 18446736232391460529LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x710 = -8059;
	uint32_t x712 = UINT32_MAX;

    t119 = ((x709*(x710+x711))^x712);

    if (t119 != 18446744069499616703LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x713 = -763;
	int32_t x714 = 8239578;
	uint64_t x715 = 439617410140LLU;
	uint32_t x716 = 9650027U;

    t120 = ((x713*(x714+x715))^x716);

    if (t120 != 18446408639346350693LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x717 = INT16_MAX;
	uint64_t x718 = 1767929570689839LLU;
	uint32_t x719 = 4012893U;
	int16_t x720 = INT16_MAX;
	volatile uint64_t t121 = 32899LLU;

    t121 = ((x717*(x718+x719))^x720);

    if (t121 != 2589516153155763851LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	uint16_t x725 = 13U;
	uint64_t x726 = 4151590142596958LLU;
	static volatile int16_t x727 = INT16_MIN;
	static uint64_t t122 = 55256079899LLU;

    t122 = ((x725*(x726+x727))^x728);

    if (t122 != 53970671853334471LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x733 = 1;
	int8_t x734 = -3;
	int64_t x736 = INT64_MIN;
	volatile int64_t t123 = -17826LL;

    t123 = ((x733*(x734+x735))^x736);

    if (t123 != 9223372036854775677LL) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x741 = 7281U;
	int32_t x742 = -1;
	uint32_t t124 = 31U;

    t124 = ((x741*(x742+x743))^x744);

    if (t124 != 4284800496U) { NG(); } else { ; }
	
}

void f125(void) {
    	static int8_t x749 = -1;
	volatile int32_t x751 = -1;
	volatile uint16_t x752 = 5527U;
	static int64_t t125 = 610850914065174LL;

    t125 = ((x749*(x750+x751))^x752);

    if (t125 != 5525LL) { NG(); } else { ; }
	
}

void f126(void) {
    	int16_t x757 = INT16_MIN;
	volatile uint32_t x759 = UINT32_MAX;
	uint32_t x760 = 49U;
	uint32_t t126 = 3514U;

    t126 = ((x757*(x758+x759))^x760);

    if (t126 != 65585U) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x761 = INT16_MAX;
	volatile uint64_t x762 = 1638136218717531LLU;
	uint16_t x763 = UINT16_MAX;
	int64_t x764 = -1LL;
	uint64_t t127 = 1076753266218016897LLU;

    t127 = ((x761*(x762+x763))^x764);

    if (t127 != 1663422740263931225LLU) { NG(); } else { ; }
	
}

void f128(void) {
    	uint32_t x766 = UINT32_MAX;
	int32_t x767 = INT32_MAX;
	volatile uint32_t x768 = 22118U;
	uint32_t t128 = 117U;

    t128 = ((x765*(x766+x767))^x768);

    if (t128 != 2147461420U) { NG(); } else { ; }
	
}

void f129(void) {
    	int8_t x777 = INT8_MAX;
	int8_t x778 = 0;
	volatile int16_t x779 = -800;

    t129 = ((x777*(x778+x779))^x780);

    if (t129 != -130424) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x781 = 0;
	int32_t x782 = 34679984;
	volatile int32_t x783 = INT32_MIN;
	int64_t x784 = -1097075LL;
	volatile int64_t t130 = 113860963318LL;

    t130 = ((x781*(x782+x783))^x784);

    if (t130 != -1097075LL) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x785 = INT16_MIN;
	static volatile uint8_t x788 = 6U;
	volatile int32_t t131 = 6;

    t131 = ((x785*(x786+x787))^x788);

    if (t131 != -2143256570) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile uint32_t x793 = UINT32_MAX;
	volatile int8_t x795 = INT8_MAX;
	static uint16_t x796 = UINT16_MAX;
	static uint64_t t132 = 99LLU;

    t132 = ((x793*(x794+x795))^x796);

    if (t132 != 541165813885LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x801 = 40U;
	int16_t x802 = -1;
	uint32_t x803 = UINT32_MAX;
	int8_t x804 = -1;

    t133 = ((x801*(x802+x803))^x804);

    if (t133 != 79U) { NG(); } else { ; }
	
}

void f134(void) {
    	uint8_t x805 = UINT8_MAX;
	static volatile uint16_t x806 = 1931U;
	int64_t x807 = -1LL;
	volatile uint8_t x808 = UINT8_MAX;
	volatile int64_t t134 = -10422458LL;

    t134 = ((x805*(x806+x807))^x808);

    if (t134 != 492169LL) { NG(); } else { ; }
	
}

void f135(void) {
    	int16_t x809 = -1;
	int8_t x810 = 3;
	uint8_t x811 = 0U;
	volatile int32_t t135 = 4039115;

    t135 = ((x809*(x810+x811))^x812);

    if (t135 != 125) { NG(); } else { ; }
	
}

void f136(void) {
    	uint32_t x817 = UINT32_MAX;
	uint32_t x818 = 395088137U;
	int64_t x819 = 1481096LL;
	int64_t x820 = INT64_MAX;
	int64_t t136 = -3392043LL;

    t136 = ((x817*(x818+x819))^x820);

    if (t136 != 7520120150916541072LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint64_t x825 = UINT64_MAX;
	uint32_t x827 = 172U;
	uint16_t x828 = 10U;
	uint64_t t137 = 203298144LLU;

    t137 = ((x825*(x826+x827))^x828);

    if (t137 != 18446744073709551465LLU) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x829 = INT64_MIN;
	int32_t x830 = 1;
	volatile int32_t x831 = -1;
	int64_t x832 = INT64_MIN;
	static int64_t t138 = INT64_MIN;

    t138 = ((x829*(x830+x831))^x832);

    if (t138 != INT64_MIN) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x833 = -1;
	static int64_t x835 = INT64_MAX;
	volatile uint64_t t139 = 6114389LLU;

    t139 = ((x833*(x834+x835))^x836);

    if (t139 != 9223372036854710526LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	static int16_t x849 = 47;
	uint8_t x850 = 26U;
	int8_t x851 = INT8_MAX;
	static int64_t x852 = INT64_MIN;

    t140 = ((x849*(x850+x851))^x852);

    if (t140 != -9223372036854768617LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int32_t x859 = -1;
	int64_t t141 = -1LL;

    t141 = ((x857*(x858+x859))^x860);

    if (t141 != -41243848226352088LL) { NG(); } else { ; }
	
}

void f142(void) {
    	uint16_t x865 = 10676U;
	int8_t x866 = 1;
	volatile uint32_t x867 = 16703110U;
	static volatile int32_t x868 = INT32_MIN;

    t142 = ((x865*(x866+x867))^x868);

    if (t142 != 81270252U) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x873 = -1LL;
	volatile int64_t x874 = 1935835LL;
	static int16_t x875 = 1422;
	int16_t x876 = -1013;
	int64_t t143 = 144337749444LL;

    t143 = ((x873*(x874+x875))^x876);

    if (t143 != 1936540LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x877 = 1;
	uint16_t x878 = 46U;
	volatile int8_t x879 = -1;
	static uint8_t x880 = 0U;
	static volatile int32_t t144 = 109;

    t144 = ((x877*(x878+x879))^x880);

    if (t144 != 45) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x882 = UINT64_MAX;
	int16_t x883 = -1;
	uint64_t t145 = 6519004233LLU;

    t145 = ((x881*(x882+x883))^x884);

    if (t145 != 17856605510815104278LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x893 = 14633828;
	uint64_t x894 = UINT64_MAX;
	volatile uint16_t x895 = UINT16_MAX;

    t146 = ((x893*(x894+x895))^x896);

    if (t146 != 959013284162LLU) { NG(); } else { ; }
	
}

void f147(void) {
    	static int8_t x897 = -11;
	static int32_t x898 = -1498;
	int16_t x899 = INT16_MIN;
	static int32_t x900 = -27197;

    t147 = ((x897*(x898+x899))^x900);

    if (t147 != -371299) { NG(); } else { ; }
	
}

void f148(void) {
    	volatile uint64_t x906 = 24240968234LLU;
	volatile uint64_t t148 = 2504LLU;

    t148 = ((x905*(x906+x907))^x908);

    if (t148 != 5LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	static int8_t x918 = -1;
	static uint16_t x919 = 12176U;
	uint8_t x920 = 1U;
	int32_t t149 = -7603;

    t149 = ((x917*(x918+x919))^x920);

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	int8_t x925 = INT8_MIN;

    t150 = ((x925*(x926+x927))^x928);

    if (t150 != -4192256) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x929 = 948U;
	static int8_t x930 = -1;
	int16_t x931 = 1;
	int8_t x932 = -1;
	volatile int32_t t151 = -861;

    t151 = ((x929*(x930+x931))^x932);

    if (t151 != -1) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint32_t x941 = UINT32_MAX;
	static volatile int32_t x943 = -26884;
	uint64_t x944 = 0LLU;
	uint64_t t152 = 70677LLU;

    t152 = ((x941*(x942+x943))^x944);

    if (t152 != 26885LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	int8_t x945 = 1;
	uint16_t x946 = 139U;
	uint16_t x947 = 8013U;
	uint8_t x948 = 0U;
	static int32_t t153 = -1257273;

    t153 = ((x945*(x946+x947))^x948);

    if (t153 != 8152) { NG(); } else { ; }
	
}

void f154(void) {
    	int8_t x957 = -56;
	int16_t x958 = 2;
	static volatile int32_t t154 = -24;

    t154 = ((x957*(x958+x959))^x960);

    if (t154 != 2015) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x961 = -23;
	int8_t x962 = INT8_MAX;
	static uint32_t x963 = UINT32_MAX;
	int16_t x964 = INT16_MIN;
	uint32_t t155 = 12284941U;

    t155 = ((x961*(x962+x963))^x964);

    if (t155 != 29870U) { NG(); } else { ; }
	
}

void f156(void) {
    	int32_t x965 = -1;
	volatile int8_t x966 = 33;
	int32_t x967 = INT32_MIN;
	int64_t x968 = 126959251879LL;
	int64_t t156 = -317004851348641LL;

    t156 = ((x965*(x966+x967))^x968);

    if (t156 != 128591302264LL) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x969 = INT16_MIN;
	volatile uint64_t x970 = UINT64_MAX;
	uint16_t x971 = 858U;
	uint32_t x972 = UINT32_MAX;
	volatile uint64_t t157 = 14183468LLU;

    t157 = ((x969*(x970+x971))^x972);

    if (t157 != 18446744069442666495LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	uint8_t x977 = 48U;
	static int64_t x978 = -1LL;
	static int32_t x979 = 276700176;
	volatile uint16_t x980 = 1U;
	static int64_t t158 = -546785953LL;

    t158 = ((x977*(x978+x979))^x980);

    if (t158 != 13281608401LL) { NG(); } else { ; }
	
}

void f159(void) {
    	static uint8_t x981 = UINT8_MAX;
	static volatile int32_t x982 = INT32_MAX;
	static uint64_t x983 = 116586803052460750LLU;
	volatile uint64_t x984 = UINT64_MAX;
	uint64_t t159 = 43LLU;

    t159 = ((x981*(x982+x983))^x984);

    if (t159 != 7163852821433281996LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int16_t x985 = -5;
	static uint16_t x987 = 11036U;
	static int8_t x988 = 32;
	static int32_t t160 = -1956;

    t160 = ((x985*(x986+x987))^x988);

    if (t160 != -55847) { NG(); } else { ; }
	
}

void f161(void) {
    	static uint8_t x989 = UINT8_MAX;
	int64_t x990 = -1LL;
	int16_t x991 = 4178;
	uint8_t x992 = UINT8_MAX;
	volatile int64_t t161 = -169LL;

    t161 = ((x989*(x990+x991))^x992);

    if (t161 != 1065040LL) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint32_t x993 = 0U;
	static uint16_t x994 = 415U;
	int16_t x995 = 29;
	int8_t x996 = -10;
	volatile uint32_t t162 = 8118537U;

    t162 = ((x993*(x994+x995))^x996);

    if (t162 != 4294967286U) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x997 = -1;
	int8_t x998 = -5;
	int8_t x1000 = -1;

    t163 = ((x997*(x998+x999))^x1000);

    if (t163 != 32761) { NG(); } else { ; }
	
}

void f164(void) {
    	volatile uint32_t x1001 = UINT32_MAX;
	int16_t x1003 = INT16_MIN;
	uint8_t x1004 = 16U;
	uint32_t t164 = 70456745U;

    t164 = ((x1001*(x1002+x1003))^x1004);

    if (t164 != 32785U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x1017 = -15940451;
	uint64_t x1018 = UINT64_MAX;
	volatile uint16_t x1020 = UINT16_MAX;
	uint64_t t165 = 25689057114196093LLU;

    t165 = ((x1017*(x1018+x1019))^x1020);

    if (t165 != 18446744010170936181LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	int64_t x1022 = 17828636932LL;
	int32_t x1023 = INT32_MIN;
	int32_t x1024 = -1;

    t166 = ((x1021*(x1022+x1023))^x1024);

    if (t166 != 961100743150845319LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x1025 = 1918698U;
	volatile int16_t x1026 = INT16_MAX;
	int64_t x1027 = -1501398LL;
	static int64_t x1028 = INT64_MAX;
	volatile int64_t t167 = 5718333LL;

    t167 = ((x1025*(x1026+x1027))^x1028);

    if (t167 != -9223369218995413371LL) { NG(); } else { ; }
	
}

void f168(void) {
    	volatile uint8_t x1029 = UINT8_MAX;
	volatile uint8_t x1030 = UINT8_MAX;
	int16_t x1031 = INT16_MIN;
	volatile uint8_t x1032 = 49U;

    t168 = ((x1029*(x1030+x1031))^x1032);

    if (t168 != -8290768) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x1037 = INT8_MIN;
	int8_t x1038 = -1;
	static int64_t t169 = 315591656978LL;

    t169 = ((x1037*(x1038+x1039))^x1040);

    if (t169 != 1003136LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x1045 = -1;
	int16_t x1046 = INT16_MAX;
	uint8_t x1047 = UINT8_MAX;
	volatile int16_t x1048 = INT16_MAX;
	int32_t t170 = 387411;

    t170 = ((x1045*(x1046+x1047))^x1048);

    if (t170 != -65283) { NG(); } else { ; }
	
}

void f171(void) {
    	volatile int64_t x1049 = 15820318LL;
	static int64_t x1052 = INT64_MIN;
	volatile int64_t t171 = 345447333LL;

    t171 = ((x1049*(x1050+x1051))^x1052);

    if (t171 != -9215661702693581690LL) { NG(); } else { ; }
	
}

void f172(void) {
    	static int16_t x1069 = -1;
	uint8_t x1070 = 4U;
	uint16_t x1072 = 43U;
	int32_t t172 = -5094755;

    t172 = ((x1069*(x1070+x1071))^x1072);

    if (t172 != 87) { NG(); } else { ; }
	
}

void f173(void) {
    	uint64_t x1077 = 37777882LLU;
	static int32_t x1078 = INT32_MIN;
	static int64_t x1079 = INT64_MAX;
	static volatile uint16_t x1080 = 619U;

    t173 = ((x1077*(x1078+x1079))^x1080);

    if (t173 != 18365616689820699725LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint8_t x1081 = UINT8_MAX;
	int16_t x1082 = INT16_MIN;
	uint8_t x1083 = 1U;
	uint8_t x1084 = UINT8_MAX;
	int32_t t174 = 1839865;

    t174 = ((x1081*(x1082+x1083))^x1084);

    if (t174 != -8355840) { NG(); } else { ; }
	
}

void f175(void) {
    	int64_t x1085 = -2110LL;
	static uint8_t x1086 = 2U;
	uint32_t x1087 = 1272876301U;
	int8_t x1088 = INT8_MAX;
	int64_t t175 = 68032017LL;

    t175 = ((x1085*(x1086+x1087))^x1088);

    if (t175 != -2685768999391LL) { NG(); } else { ; }
	
}

void f176(void) {
    	uint32_t x1093 = 59U;
	int64_t x1094 = 1LL;
	volatile int16_t x1095 = INT16_MIN;
	volatile int64_t x1096 = INT64_MIN;
	volatile int64_t t176 = 328095607274161945LL;

    t176 = ((x1093*(x1094+x1095))^x1096);

    if (t176 != 9223372036852842555LL) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x1097 = -1;
	int64_t x1098 = 16687401LL;
	static uint32_t x1100 = 7021U;
	volatile int64_t t177 = 25588228268LL;

    t177 = ((x1097*(x1098+x1099))^x1100);

    if (t177 != 2130789818LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int8_t x1101 = -1;
	volatile int64_t x1103 = INT64_MIN;
	int32_t x1104 = INT32_MIN;
	volatile int64_t t178 = 133492305340LL;

    t178 = ((x1101*(x1102+x1103))^x1104);

    if (t178 != -9223372034707292218LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x1105 = INT8_MIN;
	volatile uint64_t x1106 = 12733929614LLU;
	static int32_t x1107 = -4339169;
	volatile uint64_t t179 = 247631LLU;

    t179 = ((x1105*(x1106+x1107))^x1108);

    if (t179 != 1629387576959LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	int16_t x1109 = INT16_MIN;
	static int16_t x1112 = INT16_MIN;
	volatile uint32_t t180 = 4U;

    t180 = ((x1109*(x1110+x1111))^x1112);

    if (t180 != 2488565760U) { NG(); } else { ; }
	
}

void f181(void) {
    	int8_t x1117 = 6;
	static uint8_t x1118 = UINT8_MAX;
	volatile int32_t x1120 = -1;
	int32_t t181 = -11198402;

    t181 = ((x1117*(x1118+x1119))^x1120);

    if (t181 != -198133) { NG(); } else { ; }
	
}

void f182(void) {
    	uint64_t x1121 = 8LLU;
	uint8_t x1122 = UINT8_MAX;
	static volatile uint64_t x1123 = 369363337137LLU;
	int16_t x1124 = INT16_MAX;
	volatile uint64_t t182 = 201098837825882151LLU;

    t182 = ((x1121*(x1122+x1123))^x1124);

    if (t182 != 2954906729087LLU) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x1126 = INT8_MIN;
	int16_t x1127 = -11026;
	static uint64_t t183 = 761LLU;

    t183 = ((x1125*(x1126+x1127))^x1128);

    if (t183 != 33461LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int8_t x1141 = -1;
	uint64_t x1142 = 21481232287LLU;
	uint64_t x1144 = 0LLU;

    t184 = ((x1141*(x1142+x1143))^x1144);

    if (t184 != 18446744047933352034LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static int32_t x1153 = 2909;
	uint8_t x1154 = 3U;
	int8_t x1155 = INT8_MIN;
	uint64_t x1156 = 947111599LLU;
	uint64_t t185 = 3733428323863LLU;

    t185 = ((x1153*(x1154+x1155))^x1156);

    if (t185 != 18446744072762275128LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint32_t x1157 = UINT32_MAX;
	static int64_t x1158 = -19325454LL;
	int32_t x1159 = INT32_MAX;
	int32_t x1160 = INT32_MIN;
	static int64_t t186 = 311171LL;

    t186 = ((x1157*(x1158+x1159))^x1160);

    if (t186 != -9140369839630130673LL) { NG(); } else { ; }
	
}

void f187(void) {
    	uint16_t x1165 = 9176U;
	int64_t x1166 = -1LL;
	volatile uint64_t x1167 = 2408754776590428LLU;
	int16_t x1168 = INT16_MIN;

    t187 = ((x1165*(x1166+x1167))^x1168);

    if (t187 != 14790754317425376712LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint8_t x1170 = 0U;
	volatile int16_t x1171 = INT16_MIN;
	int32_t x1172 = INT32_MIN;
	static volatile int32_t t188 = -17698;

    t188 = ((x1169*(x1170+x1171))^x1172);

    if (t188 != 32768) { NG(); } else { ; }
	
}

void f189(void) {
    	static volatile int16_t x1174 = 0;
	int8_t x1175 = 39;
	uint64_t x1176 = 272420373908LLU;

    t189 = ((x1173*(x1174+x1175))^x1176);

    if (t189 != 272420373886LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	int16_t x1178 = INT16_MIN;
	static int16_t x1179 = -1;
	int16_t x1180 = -1;
	volatile int32_t t190 = -440;

    t190 = ((x1177*(x1178+x1179))^x1180);

    if (t190 != 32768) { NG(); } else { ; }
	
}

void f191(void) {
    	uint32_t x1181 = 48U;
	int16_t x1182 = INT16_MIN;
	int8_t x1183 = -3;
	static int16_t x1184 = INT16_MIN;
	uint32_t t191 = 111562U;

    t191 = ((x1181*(x1182+x1183))^x1184);

    if (t191 != 1605488U) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile uint64_t x1189 = 15530772753LLU;
	static volatile int8_t x1190 = -47;
	uint8_t x1191 = 48U;
	int8_t x1192 = -3;
	uint64_t t192 = 17046373580LLU;

    t192 = ((x1189*(x1190+x1191))^x1192);

    if (t192 != 18446744058178778860LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1196 = INT16_MIN;
	volatile int32_t t193 = 470275;

    t193 = ((x1193*(x1194+x1195))^x1196);

    if (t193 != 49474697) { NG(); } else { ; }
	
}

void f194(void) {
    	static uint16_t x1197 = 9048U;
	uint64_t x1198 = UINT64_MAX;
	uint64_t x1199 = 259LLU;
	static int64_t x1200 = INT64_MAX;
	volatile uint64_t t194 = 23919568411242601LLU;

    t194 = ((x1197*(x1198+x1199))^x1200);

    if (t194 != 9223372036852441423LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1201 = INT16_MIN;
	int32_t x1202 = INT32_MIN;
	int32_t x1203 = INT32_MAX;
	uint16_t x1204 = 49U;
	volatile int32_t t195 = 6211821;

    t195 = ((x1201*(x1202+x1203))^x1204);

    if (t195 != 32817) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1209 = INT16_MAX;
	volatile int16_t x1210 = 2;
	uint32_t x1211 = 1224U;
	volatile uint32_t t196 = 70029U;

    t196 = ((x1209*(x1210+x1211))^x1212);

    if (t196 != 40172322U) { NG(); } else { ; }
	
}

void f197(void) {
    	static int8_t x1214 = 34;
	static volatile uint16_t x1215 = UINT16_MAX;
	static volatile int32_t x1216 = -1;
	int32_t t197 = 591;

    t197 = ((x1213*(x1214+x1215))^x1216);

    if (t197 != 65568) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x1217 = INT8_MIN;
	uint8_t x1218 = UINT8_MAX;
	static volatile uint8_t x1219 = UINT8_MAX;
	volatile int32_t x1220 = 372;
	int32_t t198 = -1;

    t198 = ((x1217*(x1218+x1219))^x1220);

    if (t198 != -65420) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int8_t x1221 = INT8_MIN;
	static int64_t x1222 = -209592636722099LL;
	int16_t x1223 = -1;
	int8_t x1224 = 33;

    t199 = ((x1221*(x1222+x1223))^x1224);

    if (t199 != 26827857500428833LL) { NG(); } else { ; }
	
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

