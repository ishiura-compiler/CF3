#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = INT32_MAX;
static uint64_t x6 = 943734911672584834LLU;
int16_t x9 = 119;
int64_t x14 = 55436297LL;
uint8_t x17 = UINT8_MAX;
int16_t x22 = -783;
uint64_t x42 = UINT64_MAX;
static uint64_t x50 = 49738446214242398LLU;
uint64_t x52 = 25564LLU;
uint16_t x57 = 0U;
uint64_t x65 = 2674083LLU;
volatile uint32_t x68 = 380658764U;
int32_t x71 = INT32_MIN;
int8_t x79 = -1;
volatile int32_t t19 = 6;
static uint32_t x81 = 125300U;
static int32_t x83 = INT32_MIN;
uint32_t x84 = 1194628U;
int64_t x92 = -1LL;
uint8_t x96 = UINT8_MAX;
volatile uint64_t x97 = 53833035022043615LLU;
volatile int32_t x104 = INT32_MIN;
uint32_t x106 = 548568853U;
uint64_t x111 = 129LLU;
int32_t t27 = 866;
volatile uint16_t x113 = 52U;
volatile int64_t x123 = INT64_MAX;
static uint16_t x124 = 111U;
int64_t x125 = INT64_MIN;
int16_t x127 = INT16_MIN;
int8_t x128 = -1;
uint16_t x129 = 3U;
int16_t x137 = 1;
int8_t x138 = 0;
static volatile int32_t t35 = -58712;
int16_t x150 = -796;
uint64_t x151 = 0LLU;
volatile uint32_t x160 = UINT32_MAX;
uint8_t x164 = 3U;
uint32_t x173 = 56844U;
uint32_t x187 = UINT32_MAX;
static uint16_t x191 = 213U;
int16_t x202 = -1;
int32_t x205 = INT32_MIN;
static volatile uint16_t x206 = 3U;
int16_t x207 = INT16_MAX;
int8_t x208 = 10;
volatile int8_t x209 = -3;
int32_t x220 = INT32_MIN;
static uint64_t x221 = UINT64_MAX;
int64_t x224 = -1LL;
static uint16_t x228 = 996U;
int16_t x243 = -1;
volatile int32_t t61 = 10;
static int16_t x254 = -1;
uint8_t x255 = UINT8_MAX;
int32_t x265 = -25620877;
static volatile int8_t x266 = INT8_MAX;
int32_t t66 = 1;
uint16_t x269 = 12U;
int8_t x276 = -1;
int16_t x278 = INT16_MIN;
volatile int32_t t70 = -15320469;
int32_t x286 = INT32_MIN;
int8_t x290 = 57;
int64_t x292 = -133627385167480LL;
int32_t t72 = -39588200;
int16_t x294 = 13062;
volatile int32_t x297 = 24166;
int32_t x301 = -1;
uint32_t x304 = 26U;
int8_t x305 = -4;
static int16_t x309 = -1;
int16_t x315 = INT16_MIN;
int16_t x322 = 22;
static int8_t x333 = INT8_MIN;
int32_t x341 = INT32_MIN;
volatile int32_t x343 = INT32_MIN;
uint64_t x345 = 2035769845788LLU;
uint64_t x350 = 1830LLU;
int8_t x353 = -1;
uint64_t x361 = 80562295139756LLU;
int64_t x366 = 1899LL;
int32_t x369 = 103217;
volatile int32_t t93 = 773;
static uint64_t x378 = 13575900182824729LLU;
int16_t x381 = INT16_MAX;
uint32_t x383 = UINT32_MAX;
uint8_t x390 = UINT8_MAX;
int16_t x395 = 225;
uint32_t x396 = UINT32_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int16_t x2 = INT16_MIN;
	uint64_t x3 = 26208615335LLU;
	volatile int16_t x4 = -1;
	int32_t t0 = 1;

	t0 = (x1<=((x2&x3)&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x7 = INT64_MAX;
	int64_t x8 = 118454026087681LL;
	static volatile int32_t t1 = 132928;

	t1 = (x5<=((x6&x7)&x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x10 = UINT32_MAX;
	int16_t x11 = -1306;
	volatile int8_t x12 = -1;
	volatile int32_t t2 = 20055057;

	t2 = (x9<=((x10&x11)&x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = -1LL;
	int16_t x15 = INT16_MIN;
	int32_t x16 = INT32_MIN;
	volatile int32_t t3 = 1851150;

	t3 = (x13<=((x14&x15)&x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x18 = INT16_MIN;
	volatile uint16_t x19 = UINT16_MAX;
	uint16_t x20 = 0U;
	static int32_t t4 = 1;

	t4 = (x17<=((x18&x19)&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	static int32_t x23 = INT32_MIN;
	int32_t x24 = INT32_MIN;
	volatile int32_t t5 = -327517;

	t5 = (x21<=((x22&x23)&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	static int64_t x26 = INT64_MAX;
	uint64_t x27 = 25057LLU;
	static volatile int16_t x28 = 15175;
	static volatile int32_t t6 = 1;

	t6 = (x25<=((x26&x27)&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 7775U;
	volatile int8_t x30 = -1;
	uint16_t x31 = 6U;
	static int32_t x32 = 1;
	static volatile int32_t t7 = 1809;

	t7 = (x29<=((x30&x31)&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = -1;
	int32_t x34 = -1;
	uint64_t x35 = UINT64_MAX;
	int64_t x36 = -755LL;
	int32_t t8 = 213;

	t8 = (x33<=((x34&x35)&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = -497077382;
	uint16_t x38 = 219U;
	static volatile uint16_t x39 = UINT16_MAX;
	uint64_t x40 = 66836057LLU;
	volatile int32_t t9 = -49;

	t9 = (x37<=((x38&x39)&x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x41 = INT64_MIN;
	uint8_t x43 = UINT8_MAX;
	int8_t x44 = 0;
	static int32_t t10 = 778;

	t10 = (x41<=((x42&x43)&x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = UINT8_MAX;
	static int8_t x46 = 0;
	int16_t x47 = INT16_MIN;
	uint8_t x48 = 13U;
	int32_t t11 = -4;

	t11 = (x45<=((x46&x47)&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	static int64_t x51 = -153541265542LL;
	volatile int32_t t12 = 1127864;

	t12 = (x49<=((x50&x51)&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	int64_t x54 = INT64_MAX;
	int8_t x55 = -1;
	int32_t x56 = -373;
	volatile int32_t t13 = 59;

	t13 = (x53<=((x54&x55)&x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = INT8_MAX;
	uint8_t x59 = UINT8_MAX;
	static int64_t x60 = -12681144909636LL;
	int32_t t14 = -4132362;

	t14 = (x57<=((x58&x59)&x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = 1;
	int16_t x62 = 436;
	volatile uint8_t x63 = UINT8_MAX;
	int32_t x64 = -29;
	int32_t t15 = -14;

	t15 = (x61<=((x62&x63)&x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = INT32_MAX;
	volatile int64_t x67 = INT64_MAX;
	static int32_t t16 = -193;

	t16 = (x65<=((x66&x67)&x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 1324U;
	uint64_t x70 = 22967LLU;
	int32_t x72 = INT32_MAX;
	volatile int32_t t17 = 5;

	t17 = (x69<=((x70&x71)&x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = 1;
	static int8_t x74 = 2;
	static int32_t x75 = 652;
	int32_t x76 = -1;
	int32_t t18 = -481819;

	t18 = (x73<=((x74&x75)&x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x77 = 209;
	int64_t x78 = INT64_MIN;
	int16_t x80 = INT16_MAX;

	t19 = (x77<=((x78&x79)&x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = -1LL;
	int32_t t20 = -267384533;

	t20 = (x81<=((x82&x83)&x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 950U;
	int32_t x86 = INT32_MIN;
	uint16_t x87 = 0U;
	int16_t x88 = INT16_MIN;
	int32_t t21 = -7602;

	t21 = (x85<=((x86&x87)&x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	static volatile int16_t x90 = INT16_MIN;
	volatile int32_t x91 = INT32_MIN;
	int32_t t22 = 0;

	t22 = (x89<=((x90&x91)&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 1U;
	int32_t x94 = INT32_MIN;
	uint64_t x95 = 1127337LLU;
	int32_t t23 = -34;

	t23 = (x93<=((x94&x95)&x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x98 = UINT8_MAX;
	int64_t x99 = INT64_MAX;
	int32_t x100 = INT32_MIN;
	int32_t t24 = -6028;

	t24 = (x97<=((x98&x99)&x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	uint8_t x102 = 98U;
	int16_t x103 = INT16_MIN;
	static int32_t t25 = -919197;

	t25 = (x101<=((x102&x103)&x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = INT16_MIN;
	volatile int8_t x107 = INT8_MIN;
	int64_t x108 = 2125LL;
	int32_t t26 = 403704535;

	t26 = (x105<=((x106&x107)&x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x109 = UINT32_MAX;
	uint64_t x110 = UINT64_MAX;
	volatile int64_t x112 = -105592095LL;

	t27 = (x109<=((x110&x111)&x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = -1;
	int8_t x115 = 1;
	int8_t x116 = 0;
	int32_t t28 = -1199;

	t28 = (x113<=((x114&x115)&x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = UINT8_MAX;
	volatile int16_t x118 = INT16_MIN;
	uint16_t x119 = 1U;
	volatile int64_t x120 = INT64_MIN;
	static volatile int32_t t29 = 2059415;

	t29 = (x117<=((x118&x119)&x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = 13184;
	int32_t x122 = -1;
	int32_t t30 = -28311221;

	t30 = (x121<=((x122&x123)&x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = INT32_MAX;
	int32_t t31 = 11145260;

	t31 = (x125<=((x126&x127)&x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = 157504508LL;
	uint32_t x131 = 6879365U;
	static int8_t x132 = -1;
	int32_t t32 = 497669505;

	t32 = (x129<=((x130&x131)&x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 4525591720878444029LLU;
	int8_t x134 = 60;
	volatile uint64_t x135 = 297073460368115LLU;
	volatile int16_t x136 = INT16_MIN;
	volatile int32_t t33 = 614459;

	t33 = (x133<=((x134&x135)&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x139 = 117430512U;
	static int8_t x140 = 0;
	int32_t t34 = -1;

	t34 = (x137<=((x138&x139)&x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -1;
	int8_t x142 = INT8_MIN;
	static uint16_t x143 = 32687U;
	int16_t x144 = INT16_MAX;

	t35 = (x141<=((x142&x143)&x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -8695;
	volatile int32_t x146 = -1953532;
	static int32_t x147 = 599;
	static int8_t x148 = INT8_MAX;
	static int32_t t36 = 71032;

	t36 = (x145<=((x146&x147)&x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	int16_t x152 = -4921;
	volatile int32_t t37 = -23157042;

	t37 = (x149<=((x150&x151)&x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = 470557LL;
	int64_t x154 = -1LL;
	static int32_t x155 = INT32_MIN;
	volatile int32_t x156 = -2581;
	int32_t t38 = -866;

	t38 = (x153<=((x154&x155)&x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	int32_t x158 = -15554;
	static int64_t x159 = INT64_MAX;
	volatile int32_t t39 = 5996816;

	t39 = (x157<=((x158&x159)&x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 12523042937496818LLU;
	uint64_t x162 = UINT64_MAX;
	int8_t x163 = -41;
	volatile int32_t t40 = -51230;

	t40 = (x161<=((x162&x163)&x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x165 = 40U;
	uint64_t x166 = 4567138737449594181LLU;
	int16_t x167 = 1;
	int16_t x168 = INT16_MIN;
	int32_t t41 = 1;

	t41 = (x165<=((x166&x167)&x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = 4;
	volatile int32_t x170 = INT32_MIN;
	uint32_t x171 = UINT32_MAX;
	volatile int32_t x172 = -1;
	volatile int32_t t42 = 0;

	t42 = (x169<=((x170&x171)&x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x174 = -552;
	volatile int32_t x175 = -1;
	uint64_t x176 = 470386412786010298LLU;
	int32_t t43 = 77;

	t43 = (x173<=((x174&x175)&x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = 3191U;
	uint8_t x178 = UINT8_MAX;
	int32_t x179 = INT32_MIN;
	static volatile int16_t x180 = -1;
	static volatile int32_t t44 = -55074;

	t44 = (x177<=((x178&x179)&x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = UINT16_MAX;
	static int64_t x182 = -453LL;
	volatile uint8_t x183 = 0U;
	static int32_t x184 = INT32_MIN;
	static volatile int32_t t45 = 506;

	t45 = (x181<=((x182&x183)&x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -1;
	int64_t x186 = -62LL;
	uint16_t x188 = 515U;
	int32_t t46 = 56631;

	t46 = (x185<=((x186&x187)&x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = UINT32_MAX;
	int32_t x190 = INT32_MIN;
	int8_t x192 = -1;
	volatile int32_t t47 = -58737;

	t47 = (x189<=((x190&x191)&x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 1U;
	int32_t x194 = INT32_MAX;
	int8_t x195 = 1;
	uint32_t x196 = UINT32_MAX;
	volatile int32_t t48 = -8267295;

	t48 = (x193<=((x194&x195)&x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x197 = INT64_MAX;
	int64_t x198 = -1045LL;
	uint8_t x199 = 1U;
	int8_t x200 = INT8_MIN;
	int32_t t49 = 113596;

	t49 = (x197<=((x198&x199)&x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = 0;
	int32_t x203 = INT32_MIN;
	uint32_t x204 = 219411U;
	int32_t t50 = 2035140;

	t50 = (x201<=((x202&x203)&x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t t51 = -22;

	t51 = (x205<=((x206&x207)&x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x210 = 29U;
	uint16_t x211 = UINT16_MAX;
	int32_t x212 = INT32_MIN;
	volatile int32_t t52 = 662;

	t52 = (x209<=((x210&x211)&x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 20122U;
	int8_t x214 = -1;
	int16_t x215 = INT16_MIN;
	uint8_t x216 = UINT8_MAX;
	int32_t t53 = 1889;

	t53 = (x213<=((x214&x215)&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MAX;
	int16_t x218 = 2215;
	volatile uint16_t x219 = UINT16_MAX;
	volatile int32_t t54 = -1072464439;

	t54 = (x217<=((x218&x219)&x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x222 = UINT64_MAX;
	int8_t x223 = -1;
	static volatile int32_t t55 = 453677498;

	t55 = (x221<=((x222&x223)&x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -1LL;
	volatile int64_t x226 = INT64_MIN;
	int32_t x227 = -1;
	int32_t t56 = 14;

	t56 = (x225<=((x226&x227)&x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 764U;
	volatile int16_t x230 = -1;
	static int32_t x231 = INT32_MAX;
	int8_t x232 = -1;
	int32_t t57 = -2461378;

	t57 = (x229<=((x230&x231)&x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x233 = 46886485028LLU;
	static uint64_t x234 = 481561844LLU;
	int16_t x235 = INT16_MIN;
	volatile int16_t x236 = 0;
	static int32_t t58 = 9;

	t58 = (x233<=((x234&x235)&x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MAX;
	int32_t x238 = -1;
	static uint16_t x239 = 37U;
	int16_t x240 = INT16_MIN;
	int32_t t59 = 0;

	t59 = (x237<=((x238&x239)&x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = 1;
	static int32_t x242 = -1;
	int16_t x244 = INT16_MIN;
	int32_t t60 = 91;

	t60 = (x241<=((x242&x243)&x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = -1;
	int8_t x246 = INT8_MAX;
	int32_t x247 = INT32_MAX;
	uint32_t x248 = 103U;

	t61 = (x245<=((x246&x247)&x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x249 = UINT16_MAX;
	int64_t x250 = -1LL;
	uint32_t x251 = 16072U;
	uint16_t x252 = UINT16_MAX;
	volatile int32_t t62 = 11608;

	t62 = (x249<=((x250&x251)&x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = UINT8_MAX;
	int8_t x256 = INT8_MIN;
	int32_t t63 = -9758;

	t63 = (x253<=((x254&x255)&x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x257 = UINT64_MAX;
	int32_t x258 = 0;
	volatile int32_t x259 = -2312;
	static int8_t x260 = 20;
	static volatile int32_t t64 = 1760150;

	t64 = (x257<=((x258&x259)&x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = 943638370;
	static volatile uint32_t x262 = 7281086U;
	volatile int64_t x263 = INT64_MAX;
	int64_t x264 = INT64_MIN;
	int32_t t65 = -70;

	t65 = (x261<=((x262&x263)&x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x267 = 0;
	int16_t x268 = 1;

	t66 = (x265<=((x266&x267)&x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x270 = INT64_MIN;
	int32_t x271 = INT32_MAX;
	volatile uint32_t x272 = UINT32_MAX;
	volatile int32_t t67 = -126407692;

	t67 = (x269<=((x270&x271)&x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 9U;
	uint8_t x274 = 92U;
	uint64_t x275 = 358LLU;
	int32_t t68 = 4054848;

	t68 = (x273<=((x274&x275)&x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x277 = 35U;
	int8_t x279 = 1;
	uint32_t x280 = 539357U;
	int32_t t69 = -3510;

	t69 = (x277<=((x278&x279)&x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = 29;
	uint16_t x282 = 1724U;
	static int8_t x283 = INT8_MIN;
	int16_t x284 = -1;

	t70 = (x281<=((x282&x283)&x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = UINT8_MAX;
	int8_t x287 = -1;
	int8_t x288 = INT8_MIN;
	int32_t t71 = 1;

	t71 = (x285<=((x286&x287)&x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = UINT64_MAX;
	int64_t x291 = INT64_MAX;

	t72 = (x289<=((x290&x291)&x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x293 = INT8_MIN;
	volatile int32_t x295 = INT32_MIN;
	uint8_t x296 = 23U;
	volatile int32_t t73 = 30;

	t73 = (x293<=((x294&x295)&x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = INT16_MIN;
	static volatile int64_t x299 = INT64_MIN;
	int8_t x300 = INT8_MIN;
	volatile int32_t t74 = -232;

	t74 = (x297<=((x298&x299)&x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x302 = UINT8_MAX;
	int64_t x303 = -3LL;
	volatile int32_t t75 = 6;

	t75 = (x301<=((x302&x303)&x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x306 = INT64_MIN;
	static uint32_t x307 = UINT32_MAX;
	int16_t x308 = INT16_MIN;
	static volatile int32_t t76 = -246088339;

	t76 = (x305<=((x306&x307)&x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x310 = 1269774721U;
	static int16_t x311 = -1;
	static volatile int8_t x312 = 16;
	int32_t t77 = -472735;

	t77 = (x309<=((x310&x311)&x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -1;
	static int32_t x314 = INT32_MAX;
	uint8_t x316 = UINT8_MAX;
	static volatile int32_t t78 = -499;

	t78 = (x313<=((x314&x315)&x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MAX;
	static uint32_t x318 = 62283U;
	volatile int8_t x319 = INT8_MIN;
	static int32_t x320 = INT32_MAX;
	static int32_t t79 = -289478;

	t79 = (x317<=((x318&x319)&x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x321 = INT32_MIN;
	int8_t x323 = 1;
	volatile uint8_t x324 = 8U;
	volatile int32_t t80 = 48355;

	t80 = (x321<=((x322&x323)&x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 14001LLU;
	int64_t x326 = -1LL;
	uint64_t x327 = 224607741LLU;
	int64_t x328 = 178508752046651LL;
	static volatile int32_t t81 = 904;

	t81 = (x325<=((x326&x327)&x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = 0;
	int64_t x330 = -251LL;
	int8_t x331 = INT8_MIN;
	volatile int8_t x332 = -1;
	volatile int32_t t82 = -221871542;

	t82 = (x329<=((x330&x331)&x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x334 = INT8_MIN;
	int32_t x335 = INT32_MIN;
	int8_t x336 = -1;
	static int32_t t83 = -186;

	t83 = (x333<=((x334&x335)&x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 4448LLU;
	static int8_t x338 = INT8_MIN;
	int16_t x339 = -1;
	int64_t x340 = 16080866398LL;
	int32_t t84 = -9282;

	t84 = (x337<=((x338&x339)&x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x342 = UINT32_MAX;
	int64_t x344 = 3344345LL;
	static volatile int32_t t85 = -755;

	t85 = (x341<=((x342&x343)&x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x346 = UINT16_MAX;
	static int64_t x347 = -317698720556243LL;
	static int32_t x348 = INT32_MAX;
	int32_t t86 = -201;

	t86 = (x345<=((x346&x347)&x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -1;
	int8_t x351 = INT8_MIN;
	static volatile uint8_t x352 = UINT8_MAX;
	static int32_t t87 = -31890;

	t87 = (x349<=((x350&x351)&x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x354 = INT64_MIN;
	static volatile uint8_t x355 = 30U;
	int16_t x356 = 1;
	int32_t t88 = -2159;

	t88 = (x353<=((x354&x355)&x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = INT32_MIN;
	int64_t x358 = INT64_MIN;
	uint16_t x359 = UINT16_MAX;
	volatile int16_t x360 = INT16_MIN;
	volatile int32_t t89 = -497536;

	t89 = (x357<=((x358&x359)&x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x362 = INT64_MAX;
	int8_t x363 = INT8_MIN;
	int8_t x364 = INT8_MAX;
	static volatile int32_t t90 = 71;

	t90 = (x361<=((x362&x363)&x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MIN;
	int16_t x367 = 5966;
	uint16_t x368 = 545U;
	volatile int32_t t91 = -15427;

	t91 = (x365<=((x366&x367)&x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x370 = INT64_MAX;
	int64_t x371 = -569126LL;
	int8_t x372 = 1;
	int32_t t92 = -11447663;

	t92 = (x369<=((x370&x371)&x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = 69049629U;
	static volatile int16_t x374 = -455;
	volatile uint8_t x375 = 1U;
	int8_t x376 = -1;

	t93 = (x373<=((x374&x375)&x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	static int32_t x379 = INT32_MAX;
	volatile int16_t x380 = INT16_MIN;
	volatile int32_t t94 = 258481027;

	t94 = (x377<=((x378&x379)&x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x382 = -1;
	static int16_t x384 = INT16_MAX;
	volatile int32_t t95 = 9229240;

	t95 = (x381<=((x382&x383)&x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x385 = 27U;
	static int32_t x386 = INT32_MIN;
	int64_t x387 = -1LL;
	static int32_t x388 = INT32_MIN;
	volatile int32_t t96 = -1797144;

	t96 = (x385<=((x386&x387)&x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint8_t x389 = 0U;
	static int64_t x391 = -2207LL;
	int8_t x392 = INT8_MIN;
	int32_t t97 = -7028125;

	t97 = (x389<=((x390&x391)&x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MIN;
	volatile int8_t x394 = 1;
	int32_t t98 = 362;

	t98 = (x393<=((x394&x395)&x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x397 = -336515955313278730LL;
	int64_t x398 = INT64_MIN;
	int8_t x399 = INT8_MAX;
	int64_t x400 = INT64_MAX;
	int32_t t99 = -1872;

	t99 = (x397<=((x398&x399)&x400));

	if (t99 != 1) { NG(); } else { ; }
	
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


    return 0;
}

