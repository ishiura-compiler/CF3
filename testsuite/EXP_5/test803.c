#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x1 = 1922U;
static int16_t x7 = INT16_MIN;
volatile uint16_t x8 = 174U;
uint8_t x10 = UINT8_MAX;
volatile uint64_t x15 = UINT64_MAX;
volatile uint16_t x21 = 1U;
int32_t x26 = 4133;
static volatile uint8_t x34 = 21U;
int32_t x38 = INT32_MIN;
volatile uint16_t x39 = 726U;
int32_t t10 = 111;
static uint8_t x63 = UINT8_MAX;
volatile int32_t x64 = -1;
volatile uint32_t x71 = 14289U;
int32_t x72 = INT32_MIN;
int64_t x76 = INT64_MIN;
int16_t x85 = -1;
int16_t x88 = INT16_MIN;
static int32_t t20 = 317;
volatile int32_t t21 = 145327;
uint16_t x96 = 1U;
int32_t t22 = -52374731;
uint8_t x99 = UINT8_MAX;
static int32_t t23 = 1835;
uint8_t x101 = UINT8_MAX;
uint32_t x108 = UINT32_MAX;
volatile int32_t x109 = 1;
uint64_t x116 = 472756696652734248LLU;
int8_t x121 = 0;
volatile int32_t t29 = 2644;
int64_t x125 = INT64_MAX;
int8_t x126 = INT8_MIN;
int8_t x127 = -1;
volatile int64_t x130 = INT64_MIN;
int32_t x131 = INT32_MIN;
int32_t t32 = -10;
int8_t x141 = 0;
uint32_t x143 = UINT32_MAX;
uint8_t x145 = UINT8_MAX;
static volatile int64_t x148 = INT64_MIN;
uint8_t x153 = 100U;
int32_t x154 = INT32_MIN;
int32_t x158 = 2785;
uint64_t x166 = 80141LLU;
int32_t x171 = INT32_MIN;
int8_t x174 = INT8_MIN;
int64_t x181 = INT64_MIN;
int32_t x194 = -1;
int16_t x196 = INT16_MIN;
uint64_t x197 = 28338470155764748LLU;
static int16_t x198 = -12;
int64_t x200 = -6LL;
int16_t x205 = -1;
int8_t x208 = -1;
static int8_t x210 = INT8_MIN;
uint8_t x213 = UINT8_MAX;
static volatile uint32_t x217 = 974102972U;
int16_t x218 = -1;
uint16_t x220 = 0U;
volatile int32_t t53 = -60;
int32_t x229 = -1;
volatile int16_t x231 = 4386;
volatile int16_t x233 = INT16_MAX;
static int8_t x237 = -8;
int64_t x246 = INT64_MAX;
volatile int8_t x247 = -1;
int8_t x248 = INT8_MAX;
uint64_t x254 = 15880178596995306LLU;
volatile int16_t x258 = -1;
uint16_t x259 = 42U;
int64_t x267 = 9LL;
int32_t t63 = -592088;
volatile uint8_t x275 = UINT8_MAX;
int32_t t64 = 10248985;
volatile uint64_t x290 = 869420090225870865LLU;
int64_t x301 = INT64_MAX;
static volatile int32_t x307 = -106399747;
int64_t x310 = INT64_MIN;
int32_t x313 = 12109603;
volatile int32_t t75 = 15;
uint64_t x322 = 207174550LLU;
int16_t x325 = -8963;
volatile uint8_t x331 = 30U;
static uint32_t x335 = 14388U;
int32_t x336 = -1;
static int64_t x338 = -6885LL;
uint32_t x344 = 14434U;
static uint16_t x347 = 2U;
static int32_t t82 = 6196;
int64_t x349 = INT64_MIN;
int8_t x366 = 11;
volatile uint8_t x373 = 14U;
volatile uint8_t x376 = 3U;
static volatile uint32_t x389 = UINT32_MAX;
int32_t t93 = 14802479;
uint16_t x400 = 65U;
int32_t t95 = 10406;
uint64_t x401 = 1575816LLU;
static volatile int32_t x404 = 6;
static int64_t x408 = -1LL;
volatile int64_t x415 = INT64_MIN;


void f0(void) {
	int8_t x2 = INT8_MAX;
	volatile int64_t x3 = INT64_MIN;
	uint64_t x4 = 164171LLU;
	volatile int32_t t0 = -466;

	t0 = (x1<=((x2%x3)<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MAX;
	volatile int32_t x6 = -1;
	int32_t t1 = -6002649;

	t1 = (x5<=((x6%x7)<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int16_t x11 = 1;
	uint8_t x12 = 96U;
	int32_t t2 = 7289524;

	t2 = (x9<=((x10%x11)<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int16_t x14 = -13683;
	int8_t x16 = INT8_MIN;
	int32_t t3 = 61;

	t3 = (x13<=((x14%x15)<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 1357858413347LL;
	static int16_t x18 = -1;
	int16_t x19 = INT16_MIN;
	uint16_t x20 = 239U;
	int32_t t4 = 3;

	t4 = (x17<=((x18%x19)<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x22 = UINT64_MAX;
	int16_t x23 = INT16_MAX;
	static int32_t x24 = INT32_MIN;
	volatile int32_t t5 = 307794153;

	t5 = (x21<=((x22%x23)<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	uint64_t x27 = 87949365941851649LLU;
	int32_t x28 = INT32_MIN;
	int32_t t6 = -921692421;

	t6 = (x25<=((x26%x27)<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint8_t x29 = 10U;
	uint16_t x30 = UINT16_MAX;
	static volatile uint64_t x31 = 176768014LLU;
	static int8_t x32 = -5;
	int32_t t7 = -37207829;

	t7 = (x29<=((x30%x31)<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MAX;
	int64_t x35 = INT64_MIN;
	int16_t x36 = -1;
	static volatile int32_t t8 = 60860748;

	t8 = (x33<=((x34%x35)<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -181788622;
	static uint16_t x40 = 981U;
	int32_t t9 = 43403617;

	t9 = (x37<=((x38%x39)<=x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	static int8_t x42 = INT8_MIN;
	uint32_t x43 = 1504252U;
	volatile uint16_t x44 = UINT16_MAX;

	t10 = (x41<=((x42%x43)<=x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint64_t x45 = UINT64_MAX;
	uint8_t x46 = UINT8_MAX;
	volatile int64_t x47 = INT64_MAX;
	static int8_t x48 = INT8_MIN;
	volatile int32_t t11 = -1;

	t11 = (x45<=((x46%x47)<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 3U;
	int64_t x50 = -119376448028940870LL;
	int16_t x51 = -994;
	int64_t x52 = INT64_MIN;
	int32_t t12 = -246;

	t12 = (x49<=((x50%x51)<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = -1;
	int8_t x58 = -1;
	int8_t x59 = INT8_MIN;
	int32_t x60 = 5473230;
	static volatile int32_t t13 = -788;

	t13 = (x57<=((x58%x59)<=x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = 8;
	static int8_t x62 = INT8_MIN;
	static int32_t t14 = 965219;

	t14 = (x61<=((x62%x63)<=x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 3270U;
	volatile uint32_t x66 = 332919U;
	static int64_t x67 = INT64_MIN;
	static volatile uint8_t x68 = 109U;
	volatile int32_t t15 = -172;

	t15 = (x65<=((x66%x67)<=x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x69 = -1;
	volatile int32_t x70 = -1;
	int32_t t16 = 124192410;

	t16 = (x69<=((x70%x71)<=x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x73 = -2;
	uint32_t x74 = UINT32_MAX;
	static int32_t x75 = -1;
	volatile int32_t t17 = -288259428;

	t17 = (x73<=((x74%x75)<=x76));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = 13U;
	uint8_t x78 = 2U;
	volatile uint16_t x79 = 4964U;
	int32_t x80 = INT32_MIN;
	int32_t t18 = 997063;

	t18 = (x77<=((x78%x79)<=x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = -1;
	int8_t x82 = 61;
	uint32_t x83 = UINT32_MAX;
	int32_t x84 = INT32_MIN;
	int32_t t19 = -266787081;

	t19 = (x81<=((x82%x83)<=x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x86 = INT64_MIN;
	uint8_t x87 = 1U;

	t20 = (x85<=((x86%x87)<=x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = 4;
	int8_t x90 = INT8_MIN;
	static int8_t x91 = INT8_MAX;
	static int32_t x92 = INT32_MIN;

	t21 = (x89<=((x90%x91)<=x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = INT32_MIN;
	int64_t x94 = INT64_MIN;
	uint16_t x95 = 475U;

	t22 = (x93<=((x94%x95)<=x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x97 = 28U;
	uint32_t x98 = 129785U;
	int32_t x100 = INT32_MIN;

	t23 = (x97<=((x98%x99)<=x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x102 = UINT64_MAX;
	int8_t x103 = -1;
	uint32_t x104 = 354969587U;
	static int32_t t24 = 622;

	t24 = (x101<=((x102%x103)<=x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MIN;
	uint32_t x106 = 1U;
	int8_t x107 = INT8_MAX;
	volatile int32_t t25 = -4;

	t25 = (x105<=((x106%x107)<=x108));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x110 = -1;
	static int64_t x111 = INT64_MIN;
	int8_t x112 = INT8_MAX;
	int32_t t26 = 10692;

	t26 = (x109<=((x110%x111)<=x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x113 = 840274700801LLU;
	int64_t x114 = INT64_MIN;
	int64_t x115 = -1LL;
	int32_t t27 = -14873;

	t27 = (x113<=((x114%x115)<=x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = 30U;
	int32_t x118 = 0;
	static uint32_t x119 = UINT32_MAX;
	int64_t x120 = -51783569LL;
	volatile int32_t t28 = -374;

	t28 = (x117<=((x118%x119)<=x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x122 = 0U;
	uint8_t x123 = 118U;
	int8_t x124 = INT8_MIN;

	t29 = (x121<=((x122%x123)<=x124));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x128 = -397;
	volatile int32_t t30 = -92919171;

	t30 = (x125<=((x126%x127)<=x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x129 = 1517245U;
	volatile int64_t x132 = -197420LL;
	volatile int32_t t31 = 20;

	t31 = (x129<=((x130%x131)<=x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x133 = 109188460U;
	int16_t x134 = INT16_MIN;
	static int8_t x135 = -52;
	int8_t x136 = INT8_MAX;

	t32 = (x133<=((x134%x135)<=x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = INT32_MIN;
	int64_t x138 = 220077548LL;
	uint32_t x139 = 348875134U;
	int32_t x140 = -1;
	volatile int32_t t33 = -4165047;

	t33 = (x137<=((x138%x139)<=x140));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x142 = INT16_MAX;
	uint32_t x144 = 0U;
	volatile int32_t t34 = -489334154;

	t34 = (x141<=((x142%x143)<=x144));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x146 = 3391U;
	int8_t x147 = INT8_MIN;
	volatile int32_t t35 = -148032;

	t35 = (x145<=((x146%x147)<=x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x149 = 53069;
	int16_t x150 = 0;
	int16_t x151 = -1;
	volatile int16_t x152 = INT16_MIN;
	volatile int32_t t36 = 48330;

	t36 = (x149<=((x150%x151)<=x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x155 = UINT16_MAX;
	static int16_t x156 = INT16_MAX;
	static int32_t t37 = -1984;

	t37 = (x153<=((x154%x155)<=x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x157 = INT32_MAX;
	volatile int8_t x159 = INT8_MAX;
	volatile uint16_t x160 = UINT16_MAX;
	int32_t t38 = -1;

	t38 = (x157<=((x158%x159)<=x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = INT8_MIN;
	uint16_t x167 = UINT16_MAX;
	volatile int32_t x168 = 462;
	int32_t t39 = 543;

	t39 = (x165<=((x166%x167)<=x168));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x169 = 0;
	volatile int32_t x170 = INT32_MAX;
	volatile uint64_t x172 = 227130880092LLU;
	int32_t t40 = -14;

	t40 = (x169<=((x170%x171)<=x172));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x173 = 2604U;
	static uint8_t x175 = UINT8_MAX;
	uint32_t x176 = 20745U;
	int32_t t41 = 3;

	t41 = (x173<=((x174%x175)<=x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x177 = 4U;
	uint16_t x178 = UINT16_MAX;
	int16_t x179 = -1;
	int32_t x180 = INT32_MAX;
	int32_t t42 = 10;

	t42 = (x177<=((x178%x179)<=x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x182 = 15059U;
	int64_t x183 = INT64_MIN;
	int64_t x184 = -252960610910LL;
	int32_t t43 = -1134335;

	t43 = (x181<=((x182%x183)<=x184));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x185 = INT64_MIN;
	int8_t x186 = 20;
	static uint16_t x187 = 20U;
	int16_t x188 = 17;
	int32_t t44 = 170670;

	t44 = (x185<=((x186%x187)<=x188));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x189 = 9807U;
	int8_t x190 = INT8_MAX;
	uint64_t x191 = UINT64_MAX;
	int8_t x192 = -1;
	volatile int32_t t45 = -35;

	t45 = (x189<=((x190%x191)<=x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x193 = -1;
	uint64_t x195 = UINT64_MAX;
	volatile int32_t t46 = -6;

	t46 = (x193<=((x194%x195)<=x196));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x199 = INT8_MAX;
	volatile int32_t t47 = 4162603;

	t47 = (x197<=((x198%x199)<=x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x201 = -1;
	int16_t x202 = -1;
	uint8_t x203 = 5U;
	int64_t x204 = INT64_MAX;
	int32_t t48 = 385595;

	t48 = (x201<=((x202%x203)<=x204));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x206 = UINT8_MAX;
	static uint16_t x207 = 118U;
	static volatile int32_t t49 = -52571;

	t49 = (x205<=((x206%x207)<=x208));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x209 = INT16_MIN;
	static int32_t x211 = INT32_MIN;
	volatile int8_t x212 = 27;
	volatile int32_t t50 = -4207402;

	t50 = (x209<=((x210%x211)<=x212));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x214 = 116;
	int16_t x215 = INT16_MIN;
	static int16_t x216 = INT16_MIN;
	static volatile int32_t t51 = -3;

	t51 = (x213<=((x214%x215)<=x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x219 = INT64_MIN;
	volatile int32_t t52 = 537;

	t52 = (x217<=((x218%x219)<=x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x221 = INT64_MIN;
	int32_t x222 = -1;
	int64_t x223 = INT64_MIN;
	uint64_t x224 = UINT64_MAX;

	t53 = (x221<=((x222%x223)<=x224));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = INT32_MIN;
	volatile int16_t x226 = INT16_MAX;
	static int64_t x227 = 751651288980770934LL;
	int64_t x228 = INT64_MAX;
	int32_t t54 = -1897374;

	t54 = (x225<=((x226%x227)<=x228));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x230 = UINT64_MAX;
	uint8_t x232 = 19U;
	static int32_t t55 = -10755028;

	t55 = (x229<=((x230%x231)<=x232));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x234 = 2;
	uint8_t x235 = 12U;
	int64_t x236 = INT64_MAX;
	static int32_t t56 = -1096;

	t56 = (x233<=((x234%x235)<=x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x238 = -1;
	uint32_t x239 = 244628U;
	int64_t x240 = INT64_MIN;
	static int32_t t57 = -32236819;

	t57 = (x237<=((x238%x239)<=x240));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = 5;
	int32_t t58 = 483095;

	t58 = (x245<=((x246%x247)<=x248));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x253 = INT8_MIN;
	static int16_t x255 = INT16_MIN;
	int64_t x256 = INT64_MIN;
	static int32_t t59 = -1;

	t59 = (x253<=((x254%x255)<=x256));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x257 = 51U;
	static uint8_t x260 = 27U;
	int32_t t60 = -5720;

	t60 = (x257<=((x258%x259)<=x260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x261 = INT8_MIN;
	volatile int16_t x262 = INT16_MIN;
	int16_t x263 = INT16_MIN;
	int16_t x264 = INT16_MAX;
	volatile int32_t t61 = -2055578;

	t61 = (x261<=((x262%x263)<=x264));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x265 = INT64_MIN;
	volatile int16_t x266 = 22;
	volatile int16_t x268 = INT16_MIN;
	int32_t t62 = 18269867;

	t62 = (x265<=((x266%x267)<=x268));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x269 = -1;
	uint64_t x270 = 93171523LLU;
	static int64_t x271 = -1147338265860LL;
	uint16_t x272 = UINT16_MAX;

	t63 = (x269<=((x270%x271)<=x272));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint32_t x273 = UINT32_MAX;
	int64_t x274 = INT64_MIN;
	int8_t x276 = INT8_MIN;

	t64 = (x273<=((x274%x275)<=x276));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x277 = 1U;
	static uint32_t x278 = 26793849U;
	int64_t x279 = INT64_MIN;
	int8_t x280 = INT8_MAX;
	int32_t t65 = 5559003;

	t65 = (x277<=((x278%x279)<=x280));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int32_t x281 = 0;
	static uint32_t x282 = 71344U;
	int64_t x283 = INT64_MAX;
	static volatile uint16_t x284 = UINT16_MAX;
	static int32_t t66 = -57606558;

	t66 = (x281<=((x282%x283)<=x284));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x285 = 0U;
	int8_t x286 = -1;
	int64_t x287 = -1LL;
	volatile uint8_t x288 = 1U;
	int32_t t67 = 856;

	t67 = (x285<=((x286%x287)<=x288));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x289 = INT16_MAX;
	static int16_t x291 = INT16_MIN;
	int8_t x292 = -1;
	volatile int32_t t68 = -328753;

	t68 = (x289<=((x290%x291)<=x292));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x293 = 617129U;
	volatile int16_t x294 = INT16_MIN;
	int64_t x295 = 1797252795LL;
	int32_t x296 = INT32_MIN;
	int32_t t69 = -24328451;

	t69 = (x293<=((x294%x295)<=x296));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x297 = 399252053499973201LL;
	static volatile uint8_t x298 = 0U;
	uint8_t x299 = 98U;
	int16_t x300 = INT16_MIN;
	static volatile int32_t t70 = 120300;

	t70 = (x297<=((x298%x299)<=x300));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x302 = 7234U;
	int64_t x303 = 58566070179LL;
	int8_t x304 = INT8_MIN;
	int32_t t71 = 930248226;

	t71 = (x301<=((x302%x303)<=x304));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint32_t x305 = 3236291U;
	int8_t x306 = INT8_MIN;
	int16_t x308 = INT16_MIN;
	volatile int32_t t72 = 6623598;

	t72 = (x305<=((x306%x307)<=x308));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x309 = 18U;
	uint16_t x311 = 384U;
	int16_t x312 = INT16_MIN;
	volatile int32_t t73 = 6837327;

	t73 = (x309<=((x310%x311)<=x312));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x314 = INT16_MAX;
	int64_t x315 = -1LL;
	uint64_t x316 = 873681642561LLU;
	int32_t t74 = -1235;

	t74 = (x313<=((x314%x315)<=x316));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x317 = UINT8_MAX;
	int16_t x318 = 8054;
	int16_t x319 = -502;
	volatile int32_t x320 = INT32_MIN;

	t75 = (x317<=((x318%x319)<=x320));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x321 = 2355;
	int64_t x323 = INT64_MIN;
	int32_t x324 = 0;
	volatile int32_t t76 = -30890;

	t76 = (x321<=((x322%x323)<=x324));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x326 = -1;
	int16_t x327 = -1;
	int8_t x328 = -1;
	int32_t t77 = 11885047;

	t77 = (x325<=((x326%x327)<=x328));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x329 = 7U;
	uint16_t x330 = 0U;
	int32_t x332 = INT32_MAX;
	int32_t t78 = 2;

	t78 = (x329<=((x330%x331)<=x332));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x333 = 42310720600672LLU;
	volatile uint16_t x334 = 6427U;
	volatile int32_t t79 = -714371393;

	t79 = (x333<=((x334%x335)<=x336));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x337 = 15072U;
	int64_t x339 = 61623096492LL;
	uint32_t x340 = 56992U;
	volatile int32_t t80 = 913;

	t80 = (x337<=((x338%x339)<=x340));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile uint8_t x341 = 0U;
	static int16_t x342 = INT16_MIN;
	int16_t x343 = -1;
	int32_t t81 = -27631732;

	t81 = (x341<=((x342%x343)<=x344));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x345 = -1;
	int8_t x346 = 5;
	uint16_t x348 = 423U;

	t82 = (x345<=((x346%x347)<=x348));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x350 = INT64_MAX;
	static uint8_t x351 = 50U;
	static uint16_t x352 = UINT16_MAX;
	volatile int32_t t83 = 63;

	t83 = (x349<=((x350%x351)<=x352));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x353 = -1;
	int16_t x354 = INT16_MAX;
	volatile int16_t x355 = 101;
	int64_t x356 = INT64_MIN;
	static volatile int32_t t84 = -5680;

	t84 = (x353<=((x354%x355)<=x356));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x357 = INT32_MAX;
	int16_t x358 = INT16_MAX;
	uint32_t x359 = 368293975U;
	uint64_t x360 = 409638850457999LLU;
	int32_t t85 = -120;

	t85 = (x357<=((x358%x359)<=x360));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x361 = UINT16_MAX;
	volatile uint16_t x362 = UINT16_MAX;
	int32_t x363 = 151201;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t86 = 99600;

	t86 = (x361<=((x362%x363)<=x364));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x365 = INT16_MAX;
	static volatile uint32_t x367 = 1341U;
	static int32_t x368 = INT32_MIN;
	int32_t t87 = 48;

	t87 = (x365<=((x366%x367)<=x368));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x369 = 96486U;
	volatile uint16_t x370 = UINT16_MAX;
	static int64_t x371 = INT64_MIN;
	uint32_t x372 = 57U;
	volatile int32_t t88 = -28;

	t88 = (x369<=((x370%x371)<=x372));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x374 = INT8_MIN;
	static int64_t x375 = INT64_MIN;
	static int32_t t89 = 5244847;

	t89 = (x373<=((x374%x375)<=x376));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x377 = INT16_MAX;
	int8_t x378 = INT8_MIN;
	int16_t x379 = INT16_MIN;
	int64_t x380 = -101357925LL;
	int32_t t90 = 464687965;

	t90 = (x377<=((x378%x379)<=x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x381 = 799040LL;
	uint16_t x382 = UINT16_MAX;
	int8_t x383 = 1;
	static volatile int32_t x384 = 441781191;
	static volatile int32_t t91 = 23;

	t91 = (x381<=((x382%x383)<=x384));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x385 = -5981024;
	uint8_t x386 = 10U;
	static int16_t x387 = INT16_MIN;
	uint8_t x388 = UINT8_MAX;
	int32_t t92 = 0;

	t92 = (x385<=((x386%x387)<=x388));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x390 = UINT8_MAX;
	uint8_t x391 = 45U;
	int32_t x392 = INT32_MAX;

	t93 = (x389<=((x390%x391)<=x392));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x393 = -1;
	static uint32_t x394 = 104824U;
	uint16_t x395 = UINT16_MAX;
	uint64_t x396 = UINT64_MAX;
	int32_t t94 = -953670399;

	t94 = (x393<=((x394%x395)<=x396));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x397 = INT64_MIN;
	static volatile int32_t x398 = 11601073;
	int32_t x399 = -4021648;

	t95 = (x397<=((x398%x399)<=x400));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x402 = -1;
	uint64_t x403 = 1858LLU;
	volatile int32_t t96 = -1786980;

	t96 = (x401<=((x402%x403)<=x404));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x405 = 24882U;
	int64_t x406 = 9410051LL;
	int8_t x407 = 1;
	volatile int32_t t97 = -8265208;

	t97 = (x405<=((x406%x407)<=x408));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x409 = -1LL;
	volatile int32_t x410 = INT32_MAX;
	int32_t x411 = INT32_MIN;
	int16_t x412 = INT16_MAX;
	volatile int32_t t98 = -87;

	t98 = (x409<=((x410%x411)<=x412));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x413 = 2320309;
	static int16_t x414 = INT16_MIN;
	static uint8_t x416 = 10U;
	int32_t t99 = -1;

	t99 = (x413<=((x414%x415)<=x416));

	if (t99 != 0) { NG(); } else { ; }
	
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

