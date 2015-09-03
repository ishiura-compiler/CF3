#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = -905445842;
volatile int8_t x12 = INT8_MIN;
int8_t x16 = INT8_MIN;
uint32_t x17 = 1820U;
int64_t x23 = INT64_MIN;
int32_t t5 = INT32_MIN;
int32_t t7 = -2275;
uint32_t x35 = 18289U;
static int8_t x38 = 31;
int64_t x43 = 7764LL;
uint8_t x46 = 1U;
volatile int16_t x50 = -1;
volatile int64_t x54 = INT64_MAX;
int16_t x58 = INT16_MIN;
static int8_t x59 = 3;
uint32_t x62 = 0U;
int32_t t17 = 43374;
int32_t x80 = -1;
static uint16_t x92 = 7063U;
int8_t x105 = INT8_MIN;
static int16_t x112 = -5972;
int8_t x121 = INT8_MIN;
volatile int32_t x122 = INT32_MIN;
int32_t x130 = INT32_MIN;
static uint16_t x132 = 23U;
int8_t x143 = INT8_MIN;
uint16_t x146 = UINT16_MAX;
uint8_t x147 = 9U;
static volatile int64_t x156 = INT64_MIN;
volatile int8_t x162 = 2;
uint64_t x165 = UINT64_MAX;
uint8_t x169 = UINT8_MAX;
volatile int64_t x176 = INT64_MIN;
volatile uint64_t t43 = 454813LLU;
static int16_t x179 = INT16_MIN;
uint64_t x180 = 5759LLU;
uint8_t x188 = UINT8_MAX;
int16_t x192 = -1;
static volatile int32_t t47 = -1;
int64_t x193 = -1LL;
static volatile uint8_t x195 = 80U;
volatile uint64_t x196 = UINT64_MAX;
static volatile int64_t t48 = 714059090915LL;
static int64_t x199 = 3901604LL;
static int8_t x200 = -1;
int16_t x208 = -1999;
int16_t x209 = 2969;
int64_t x213 = INT64_MIN;
int16_t x215 = 1;
int32_t x223 = INT32_MAX;
volatile int8_t x229 = -1;
int32_t x235 = INT32_MIN;
int16_t x237 = INT16_MIN;
static uint16_t x241 = 8167U;
volatile int16_t x263 = -1;
int8_t x264 = INT8_MIN;
int32_t t66 = -4504;
static int64_t x270 = 2007363671LL;
uint64_t x275 = 8781297332LLU;
volatile int32_t t69 = 65256;
int16_t x284 = -1;
int16_t x291 = INT16_MIN;
int8_t x292 = INT8_MAX;
int8_t x293 = -1;
int32_t x296 = INT32_MAX;
static uint8_t x297 = 26U;
uint32_t t75 = 1530280416U;
int32_t x307 = -656;
volatile int32_t t76 = 328967;
uint32_t x311 = 254U;
int64_t x315 = INT64_MIN;
int32_t x331 = INT32_MIN;
int64_t x335 = -1LL;
volatile int32_t t83 = 30440916;
volatile int64_t x339 = -1LL;
uint32_t x341 = UINT32_MAX;
volatile int8_t x345 = 0;
int64_t x348 = -1LL;
volatile int8_t x349 = INT8_MIN;
volatile int32_t t87 = -156848437;
volatile int8_t x358 = INT8_MAX;
static int8_t x361 = -1;
static volatile uint64_t t92 = UINT64_MAX;
uint64_t x373 = 16520447057LLU;
volatile int16_t x377 = 1;
int32_t x378 = INT32_MIN;
int64_t x382 = 2095663822LL;
int32_t x384 = -87683576;
static int16_t x392 = -1;
int64_t t97 = -19579308025094896LL;
uint16_t x393 = 102U;
int8_t x395 = -1;
static uint16_t x397 = UINT16_MAX;
static uint8_t x399 = 1U;


void f0(void) {
	static int8_t x1 = -3;
	int32_t x2 = -1728892;
	static uint64_t x3 = 8286181621551945LLU;
	uint8_t x4 = 5U;
	static volatile int32_t t0 = 250997000;

	t0 = (x1|(x2==(x3%x4)));

	if (t0 != -3) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -9;
	uint64_t x6 = 1LLU;
	volatile int32_t x7 = -1;
	int32_t x8 = INT32_MIN;

	t1 = (x5|(x6==(x7%x8)));

	if (t1 != -9) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	volatile int8_t x10 = INT8_MIN;
	volatile int64_t x11 = -1LL;
	static volatile int32_t t2 = -1533;

	t2 = (x9|(x10==(x11%x12)));

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = -1;
	volatile int64_t x14 = 88728166493481LL;
	int16_t x15 = 0;
	volatile int32_t t3 = -568207;

	t3 = (x13|(x14==(x15%x16)));

	if (t3 != -1) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x18 = -1;
	volatile int16_t x19 = INT16_MIN;
	uint16_t x20 = 36U;
	uint32_t t4 = 4068U;

	t4 = (x17|(x18==(x19%x20)));

	if (t4 != 1820U) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MIN;
	int64_t x22 = INT64_MIN;
	int8_t x24 = INT8_MAX;

	t5 = (x21|(x22==(x23%x24)));

	if (t5 != INT32_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = -1;
	int16_t x26 = INT16_MAX;
	int16_t x27 = INT16_MAX;
	int64_t x28 = 56761371377633633LL;
	static int32_t t6 = 7;

	t6 = (x25|(x26==(x27%x28)));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int16_t x30 = -17;
	volatile int8_t x31 = 1;
	uint16_t x32 = 27U;

	t7 = (x29|(x30==(x31%x32)));

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MIN;
	static int64_t x34 = INT64_MIN;
	int16_t x36 = INT16_MIN;
	static int32_t t8 = 66583903;

	t8 = (x33|(x34==(x35%x36)));

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = 8649U;
	int64_t x39 = INT64_MIN;
	int32_t x40 = INT32_MIN;
	int32_t t9 = 6;

	t9 = (x37|(x38==(x39%x40)));

	if (t9 != 8649) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	int64_t x42 = INT64_MIN;
	int16_t x44 = -1;
	static int64_t t10 = INT64_MIN;

	t10 = (x41|(x42==(x43%x44)));

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 63U;
	volatile int64_t x47 = INT64_MIN;
	static int32_t x48 = INT32_MAX;
	int32_t t11 = 13;

	t11 = (x45|(x46==(x47%x48)));

	if (t11 != 63) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 782352U;
	static uint16_t x51 = UINT16_MAX;
	int64_t x52 = INT64_MIN;
	volatile uint32_t t12 = 1U;

	t12 = (x49|(x50==(x51%x52)));

	if (t12 != 782352U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = 16288;
	volatile int32_t x55 = -339517;
	int16_t x56 = -116;
	static int32_t t13 = 16231;

	t13 = (x53|(x54==(x55%x56)));

	if (t13 != 16288) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 940427265LLU;
	int64_t x60 = INT64_MIN;
	uint64_t t14 = 115931483LLU;

	t14 = (x57|(x58==(x59%x60)));

	if (t14 != 940427265LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x61 = 0U;
	volatile uint64_t x63 = 23LLU;
	uint64_t x64 = 908564697292LLU;
	volatile int32_t t15 = -40;

	t15 = (x61|(x62==(x63%x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x65 = 22;
	int64_t x66 = INT64_MIN;
	int32_t x67 = INT32_MAX;
	int8_t x68 = INT8_MIN;
	static volatile int32_t t16 = -305852;

	t16 = (x65|(x66==(x67%x68)));

	if (t16 != 22) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MIN;
	int16_t x70 = INT16_MIN;
	uint8_t x71 = UINT8_MAX;
	volatile int16_t x72 = INT16_MIN;

	t17 = (x69|(x70==(x71%x72)));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 28U;
	int64_t x74 = INT64_MIN;
	volatile int32_t x75 = -1;
	static int64_t x76 = -1LL;
	static int32_t t18 = -15668;

	t18 = (x73|(x74==(x75%x76)));

	if (t18 != 28) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = INT32_MAX;
	int32_t x78 = -57173;
	static int32_t x79 = INT32_MIN;
	volatile int32_t t19 = INT32_MAX;

	t19 = (x77|(x78==(x79%x80)));

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = 2467;
	int8_t x82 = INT8_MIN;
	int64_t x83 = INT64_MIN;
	int8_t x84 = INT8_MAX;
	volatile int32_t t20 = -23721143;

	t20 = (x81|(x82==(x83%x84)));

	if (t20 != 2467) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x85 = 446024065989LLU;
	uint8_t x86 = UINT8_MAX;
	static volatile int64_t x87 = INT64_MIN;
	volatile uint16_t x88 = 4972U;
	uint64_t t21 = 707LLU;

	t21 = (x85|(x86==(x87%x88)));

	if (t21 != 446024065989LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = UINT32_MAX;
	uint8_t x90 = UINT8_MAX;
	volatile int16_t x91 = -52;
	uint32_t t22 = UINT32_MAX;

	t22 = (x89|(x90==(x91%x92)));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x93 = UINT32_MAX;
	int16_t x94 = 1;
	int8_t x95 = INT8_MAX;
	int32_t x96 = -1;
	uint32_t t23 = UINT32_MAX;

	t23 = (x93|(x94==(x95%x96)));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	int8_t x98 = INT8_MIN;
	volatile uint32_t x99 = 31122670U;
	int8_t x100 = INT8_MIN;
	volatile int32_t t24 = -38408;

	t24 = (x97|(x98==(x99%x100)));

	if (t24 != 255) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -1;
	uint64_t x102 = 238LLU;
	int16_t x103 = -1;
	volatile int64_t x104 = INT64_MAX;
	volatile int32_t t25 = -1888;

	t25 = (x101|(x102==(x103%x104)));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x106 = 7LLU;
	volatile int8_t x107 = 48;
	volatile uint64_t x108 = 1602471122693517LLU;
	volatile int32_t t26 = 5629;

	t26 = (x105|(x106==(x107%x108)));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = 2834;
	uint16_t x110 = UINT16_MAX;
	uint64_t x111 = 27101758350266000LLU;
	static volatile int32_t t27 = -13;

	t27 = (x109|(x110==(x111%x112)));

	if (t27 != 2834) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x113 = 15U;
	static int32_t x114 = INT32_MIN;
	int8_t x115 = -3;
	volatile uint32_t x116 = 2280U;
	volatile int32_t t28 = 472008;

	t28 = (x113|(x114==(x115%x116)));

	if (t28 != 15) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -26;
	static int16_t x118 = -39;
	int32_t x119 = 788105;
	static volatile uint16_t x120 = 1U;
	int32_t t29 = 0;

	t29 = (x117|(x118==(x119%x120)));

	if (t29 != -26) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x123 = 13U;
	uint16_t x124 = UINT16_MAX;
	volatile int32_t t30 = 1319411;

	t30 = (x121|(x122==(x123%x124)));

	if (t30 != -128) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = -1LL;
	uint16_t x126 = 17018U;
	static uint16_t x127 = 173U;
	volatile uint32_t x128 = 504614609U;
	int64_t t31 = -2431403058LL;

	t31 = (x125|(x126==(x127%x128)));

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	volatile int64_t x131 = 6LL;
	volatile int32_t t32 = INT32_MIN;

	t32 = (x129|(x130==(x131%x132)));

	if (t32 != INT32_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MAX;
	static int32_t x134 = -6314;
	int8_t x135 = INT8_MAX;
	static int16_t x136 = -1;
	volatile int32_t t33 = 34555;

	t33 = (x133|(x134==(x135%x136)));

	if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 49U;
	int32_t x138 = INT32_MIN;
	uint64_t x139 = 16680692510LLU;
	uint8_t x140 = 3U;
	volatile int32_t t34 = -65;

	t34 = (x137|(x138==(x139%x140)));

	if (t34 != 49) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = UINT16_MAX;
	int32_t x142 = INT32_MIN;
	int32_t x144 = INT32_MIN;
	volatile int32_t t35 = -2898239;

	t35 = (x141|(x142==(x143%x144)));

	if (t35 != 65535) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = UINT64_MAX;
	int32_t x148 = INT32_MAX;
	uint64_t t36 = UINT64_MAX;

	t36 = (x145|(x146==(x147%x148)));

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MAX;
	volatile int8_t x150 = -3;
	int8_t x151 = -1;
	static int32_t x152 = -1;
	int32_t t37 = INT32_MAX;

	t37 = (x149|(x150==(x151%x152)));

	if (t37 != INT32_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = -1;
	volatile int8_t x154 = -1;
	volatile int16_t x155 = INT16_MAX;
	int32_t t38 = 15175;

	t38 = (x153|(x154==(x155%x156)));

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x157 = INT16_MIN;
	int32_t x158 = -1;
	static volatile int8_t x159 = INT8_MIN;
	static int8_t x160 = INT8_MIN;
	int32_t t39 = 0;

	t39 = (x157|(x158==(x159%x160)));

	if (t39 != -32768) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 29064U;
	volatile int8_t x163 = -4;
	uint8_t x164 = UINT8_MAX;
	int32_t t40 = -3293292;

	t40 = (x161|(x162==(x163%x164)));

	if (t40 != 29064) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x166 = -1;
	int8_t x167 = 19;
	static volatile int16_t x168 = INT16_MIN;
	uint64_t t41 = UINT64_MAX;

	t41 = (x165|(x166==(x167%x168)));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x170 = INT8_MAX;
	uint32_t x171 = UINT32_MAX;
	static int16_t x172 = -2;
	int32_t t42 = 13579957;

	t42 = (x169|(x170==(x171%x172)));

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 6076767376LLU;
	static int32_t x174 = INT32_MIN;
	int32_t x175 = INT32_MIN;

	t43 = (x173|(x174==(x175%x176)));

	if (t43 != 6076767377LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -1LL;
	uint32_t x178 = 12704380U;
	int64_t t44 = 483965320720LL;

	t44 = (x177|(x178==(x179%x180)));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x181 = UINT8_MAX;
	int64_t x182 = 87597921990841LL;
	volatile int16_t x183 = INT16_MIN;
	volatile int8_t x184 = -1;
	static volatile int32_t t45 = 116189;

	t45 = (x181|(x182==(x183%x184)));

	if (t45 != 255) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x185 = 0LLU;
	static int8_t x186 = 20;
	uint64_t x187 = 5469LLU;
	static uint64_t t46 = 85721222151LLU;

	t46 = (x185|(x186==(x187%x188)));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x189 = -2;
	int32_t x190 = -1;
	int16_t x191 = -7808;

	t47 = (x189|(x190==(x191%x192)));

	if (t47 != -2) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x194 = UINT32_MAX;

	t48 = (x193|(x194==(x195%x196)));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MIN;
	static volatile uint8_t x198 = 1U;
	volatile int32_t t49 = -271228785;

	t49 = (x197|(x198==(x199%x200)));

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x201 = INT16_MIN;
	int64_t x202 = INT64_MIN;
	uint64_t x203 = UINT64_MAX;
	int64_t x204 = -1LL;
	static int32_t t50 = 1011;

	t50 = (x201|(x202==(x203%x204)));

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -398966;
	volatile int32_t x206 = INT32_MIN;
	int16_t x207 = INT16_MIN;
	int32_t t51 = -1;

	t51 = (x205|(x206==(x207%x208)));

	if (t51 != -398966) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x210 = 609416LL;
	int8_t x211 = INT8_MAX;
	int8_t x212 = INT8_MAX;
	int32_t t52 = -488643957;

	t52 = (x209|(x210==(x211%x212)));

	if (t52 != 2969) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x214 = 41;
	volatile int32_t x216 = 626;
	int64_t t53 = INT64_MIN;

	t53 = (x213|(x214==(x215%x216)));

	if (t53 != INT64_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint32_t x217 = 4690695U;
	int16_t x218 = INT16_MIN;
	static int16_t x219 = INT16_MAX;
	int8_t x220 = -3;
	volatile uint32_t t54 = 55871929U;

	t54 = (x217|(x218==(x219%x220)));

	if (t54 != 4690695U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MIN;
	int64_t x222 = 3053423966LL;
	uint8_t x224 = UINT8_MAX;
	volatile int32_t t55 = INT32_MIN;

	t55 = (x221|(x222==(x223%x224)));

	if (t55 != INT32_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint8_t x225 = 0U;
	int32_t x226 = 16;
	volatile int32_t x227 = INT32_MAX;
	int32_t x228 = 692;
	volatile int32_t t56 = 37147;

	t56 = (x225|(x226==(x227%x228)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x230 = UINT16_MAX;
	int16_t x231 = 26;
	int64_t x232 = INT64_MAX;
	static volatile int32_t t57 = 216611;

	t57 = (x229|(x230==(x231%x232)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -1LL;
	int16_t x234 = INT16_MAX;
	int8_t x236 = INT8_MIN;
	static int64_t t58 = 253560405641LL;

	t58 = (x233|(x234==(x235%x236)));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x238 = 73;
	static int8_t x239 = -1;
	uint8_t x240 = 3U;
	volatile int32_t t59 = -2579025;

	t59 = (x237|(x238==(x239%x240)));

	if (t59 != -32768) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x242 = UINT16_MAX;
	volatile int64_t x243 = INT64_MIN;
	int32_t x244 = -64827910;
	int32_t t60 = -483950615;

	t60 = (x241|(x242==(x243%x244)));

	if (t60 != 8167) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x245 = 2U;
	uint16_t x246 = UINT16_MAX;
	int16_t x247 = INT16_MAX;
	static uint64_t x248 = 358844867846380LLU;
	int32_t t61 = 1231732;

	t61 = (x245|(x246==(x247%x248)));

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x249 = 184LLU;
	int16_t x250 = INT16_MIN;
	volatile uint16_t x251 = UINT16_MAX;
	int32_t x252 = INT32_MIN;
	uint64_t t62 = 2468848634349347LLU;

	t62 = (x249|(x250==(x251%x252)));

	if (t62 != 184LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = 25826871820LL;
	static volatile int16_t x254 = -1;
	int8_t x255 = INT8_MIN;
	int8_t x256 = -1;
	int64_t t63 = -75LL;

	t63 = (x253|(x254==(x255%x256)));

	if (t63 != 25826871820LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = INT16_MIN;
	int8_t x258 = -4;
	int8_t x259 = INT8_MIN;
	volatile int32_t x260 = INT32_MIN;
	volatile int32_t t64 = -32;

	t64 = (x257|(x258==(x259%x260)));

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x261 = -1;
	uint8_t x262 = 2U;
	volatile int32_t t65 = -33715;

	t65 = (x261|(x262==(x263%x264)));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = -13;
	int32_t x266 = INT32_MIN;
	int32_t x267 = INT32_MIN;
	static int32_t x268 = INT32_MIN;

	t66 = (x265|(x266==(x267%x268)));

	if (t66 != -13) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = 472945099413282139LL;
	int32_t x271 = INT32_MIN;
	int32_t x272 = INT32_MAX;
	int64_t t67 = -156LL;

	t67 = (x269|(x270==(x271%x272)));

	if (t67 != 472945099413282139LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 3U;
	int8_t x274 = -1;
	volatile int8_t x276 = -1;
	int32_t t68 = -36606;

	t68 = (x273|(x274==(x275%x276)));

	if (t68 != 3) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MAX;
	int16_t x278 = -3311;
	static int64_t x279 = INT64_MIN;
	int32_t x280 = 509812730;

	t69 = (x277|(x278==(x279%x280)));

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = UINT16_MAX;
	volatile int16_t x282 = 1;
	int64_t x283 = -383049469LL;
	static volatile int32_t t70 = 1897468;

	t70 = (x281|(x282==(x283%x284)));

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	int16_t x286 = INT16_MAX;
	static volatile uint16_t x287 = 6U;
	int64_t x288 = -1LL;
	volatile int32_t t71 = 388421187;

	t71 = (x285|(x286==(x287%x288)));

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x289 = -1;
	uint64_t x290 = 7954863871LLU;
	volatile int32_t t72 = -467416131;

	t72 = (x289|(x290==(x291%x292)));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x294 = INT32_MIN;
	uint8_t x295 = UINT8_MAX;
	volatile int32_t t73 = 2;

	t73 = (x293|(x294==(x295%x296)));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x298 = -333476307829439304LL;
	int8_t x299 = INT8_MIN;
	uint16_t x300 = UINT16_MAX;
	static volatile int32_t t74 = -205960;

	t74 = (x297|(x298==(x299%x300)));

	if (t74 != 26) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 5552060U;
	int64_t x302 = -1LL;
	uint32_t x303 = 1019U;
	volatile int8_t x304 = INT8_MIN;

	t75 = (x301|(x302==(x303%x304)));

	if (t75 != 5552060U) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x305 = 124U;
	uint8_t x306 = 5U;
	int64_t x308 = -350831LL;

	t76 = (x305|(x306==(x307%x308)));

	if (t76 != 124) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -24;
	uint16_t x310 = 528U;
	int64_t x312 = INT64_MIN;
	static int32_t t77 = 10861586;

	t77 = (x309|(x310==(x311%x312)));

	if (t77 != -24) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = UINT16_MAX;
	int32_t x314 = INT32_MIN;
	volatile int16_t x316 = INT16_MIN;
	volatile int32_t t78 = -58404;

	t78 = (x313|(x314==(x315%x316)));

	if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = 592862809720LL;
	int16_t x318 = -1;
	int8_t x319 = INT8_MAX;
	int64_t x320 = -1LL;
	static int64_t t79 = 8LL;

	t79 = (x317|(x318==(x319%x320)));

	if (t79 != 592862809720LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = -1;
	volatile int64_t x322 = -15675645851693LL;
	uint16_t x323 = UINT16_MAX;
	int32_t x324 = INT32_MIN;
	volatile int32_t t80 = 3353;

	t80 = (x321|(x322==(x323%x324)));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x325 = -1LL;
	static int64_t x326 = -1LL;
	volatile uint16_t x327 = 17U;
	volatile int8_t x328 = INT8_MIN;
	int64_t t81 = 3306279LL;

	t81 = (x325|(x326==(x327%x328)));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 1U;
	static int8_t x330 = INT8_MIN;
	int32_t x332 = INT32_MIN;
	static volatile int32_t t82 = -328;

	t82 = (x329|(x330==(x331%x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x333 = INT16_MAX;
	uint32_t x334 = UINT32_MAX;
	int32_t x336 = INT32_MAX;

	t83 = (x333|(x334==(x335%x336)));

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x337 = UINT8_MAX;
	static uint8_t x338 = UINT8_MAX;
	volatile int8_t x340 = INT8_MIN;
	int32_t t84 = -7160187;

	t84 = (x337|(x338==(x339%x340)));

	if (t84 != 255) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x342 = UINT16_MAX;
	uint32_t x343 = 438739175U;
	uint8_t x344 = 85U;
	static uint32_t t85 = UINT32_MAX;

	t85 = (x341|(x342==(x343%x344)));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = INT8_MIN;
	static int32_t x347 = INT32_MIN;
	int32_t t86 = -114;

	t86 = (x345|(x346==(x347%x348)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x350 = INT32_MIN;
	int8_t x351 = INT8_MIN;
	volatile uint64_t x352 = 9193999678686626LLU;

	t87 = (x349|(x350==(x351%x352)));

	if (t87 != -128) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x353 = -1;
	int8_t x354 = 1;
	int32_t x355 = -97253990;
	static int32_t x356 = -1;
	volatile int32_t t88 = -33;

	t88 = (x353|(x354==(x355%x356)));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	static int8_t x359 = -8;
	uint64_t x360 = 8LLU;
	int64_t t89 = INT64_MIN;

	t89 = (x357|(x358==(x359%x360)));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x362 = 475145LL;
	volatile int64_t x363 = -1LL;
	int32_t x364 = INT32_MIN;
	int32_t t90 = -7436;

	t90 = (x361|(x362==(x363%x364)));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MIN;
	int32_t x366 = 24660482;
	int8_t x367 = -5;
	uint32_t x368 = 70692U;
	volatile int64_t t91 = INT64_MIN;

	t91 = (x365|(x366==(x367%x368)));

	if (t91 != INT64_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x369 = UINT64_MAX;
	int64_t x370 = -4066691933496665797LL;
	volatile int32_t x371 = -1;
	int32_t x372 = 96;

	t92 = (x369|(x370==(x371%x372)));

	if (t92 != UINT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x374 = -7152;
	int32_t x375 = 933294;
	int8_t x376 = INT8_MAX;
	uint64_t t93 = 2024455LLU;

	t93 = (x373|(x374==(x375%x376)));

	if (t93 != 16520447057LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x379 = INT64_MIN;
	volatile int64_t x380 = INT64_MIN;
	volatile int32_t t94 = 17596984;

	t94 = (x377|(x378==(x379%x380)));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x381 = INT64_MIN;
	uint8_t x383 = 16U;
	static int64_t t95 = INT64_MIN;

	t95 = (x381|(x382==(x383%x384)));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x385 = 1;
	int16_t x386 = INT16_MIN;
	static volatile int32_t x387 = -232098575;
	volatile uint32_t x388 = UINT32_MAX;
	int32_t t96 = 3;

	t96 = (x385|(x386==(x387%x388)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = -45855102711098LL;
	int32_t x390 = -1;
	int64_t x391 = INT64_MIN;

	t97 = (x389|(x390==(x391%x392)));

	if (t97 != -45855102711098LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x394 = 108;
	static int64_t x396 = 151016474LL;
	static int32_t t98 = -28867013;

	t98 = (x393|(x394==(x395%x396)));

	if (t98 != 102) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x398 = 497U;
	int64_t x400 = -1LL;
	volatile int32_t t99 = -49979;

	t99 = (x397|(x398==(x399%x400)));

	if (t99 != 65535) { NG(); } else { ; }
	
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

