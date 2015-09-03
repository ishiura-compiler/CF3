#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x2 = INT64_MIN;
int32_t x11 = -1;
volatile int8_t x13 = 3;
volatile int32_t t3 = 14;
volatile uint64_t t4 = UINT64_MAX;
uint16_t x23 = 9034U;
int16_t x29 = 1358;
static int16_t x35 = -1;
int32_t x44 = 0;
int32_t t10 = -10;
int64_t x47 = INT64_MAX;
int8_t x53 = -1;
static int32_t x58 = INT32_MIN;
uint8_t x59 = 83U;
uint32_t x61 = 5210U;
volatile int32_t x62 = INT32_MIN;
volatile int8_t x64 = INT8_MIN;
uint64_t x68 = UINT64_MAX;
volatile int32_t t16 = -2;
int32_t x76 = 2;
volatile uint16_t x81 = 10772U;
int32_t x93 = INT32_MIN;
uint8_t x95 = 1U;
static volatile int32_t t23 = INT32_MIN;
uint16_t x102 = UINT16_MAX;
int64_t x103 = -1LL;
int32_t t26 = 24728250;
static int64_t x118 = INT64_MAX;
uint8_t x122 = 12U;
int64_t x124 = 120100143LL;
volatile uint32_t x132 = 20U;
volatile int8_t x135 = INT8_MAX;
static int16_t x136 = INT16_MIN;
int64_t x138 = -50652918LL;
volatile int32_t t34 = -2965624;
volatile int32_t x142 = 67293394;
int8_t x148 = INT8_MIN;
static volatile uint64_t t36 = 1474578LLU;
int32_t x156 = INT32_MAX;
static uint16_t x160 = 122U;
int32_t x163 = 1;
int32_t t40 = INT32_MIN;
int64_t x167 = INT64_MIN;
uint8_t x168 = 58U;
int64_t x174 = INT64_MIN;
int16_t x181 = -12326;
uint8_t x182 = 4U;
int8_t x183 = INT8_MAX;
static volatile int8_t x190 = -1;
volatile int16_t x192 = 14;
static int32_t x195 = -206;
int32_t t48 = 1;
int32_t x197 = 374212;
static int32_t x199 = INT32_MAX;
volatile int32_t t50 = INT32_MIN;
int64_t x210 = -1LL;
static int32_t x219 = INT32_MAX;
volatile uint32_t x232 = 1067757123U;
uint16_t x234 = UINT16_MAX;
volatile int16_t x235 = INT16_MIN;
static int16_t x239 = 1128;
uint32_t t61 = UINT32_MAX;
static uint16_t x252 = UINT16_MAX;
uint8_t x253 = 44U;
uint8_t x260 = 7U;
static volatile int32_t x261 = -1;
static int32_t t65 = 30873116;
int32_t t66 = -15595;
uint64_t x270 = 1070052195232LLU;
static uint8_t x272 = UINT8_MAX;
volatile int32_t t67 = 498;
int16_t x279 = 40;
static volatile uint32_t t70 = 22668U;
volatile int64_t x291 = INT64_MIN;
static uint32_t x294 = UINT32_MAX;
int32_t x300 = INT32_MIN;
volatile uint8_t x307 = 16U;
static int64_t x313 = -1LL;
int32_t t79 = -113;
volatile int32_t x321 = -1;
int8_t x324 = INT8_MAX;
int16_t x326 = 0;
uint64_t x335 = 314102LLU;
static int64_t x337 = INT64_MIN;
static int32_t x339 = 1794130;
int16_t x345 = 379;
int64_t x350 = -1LL;
uint32_t x351 = 0U;
volatile uint8_t x354 = 2U;
int16_t x355 = INT16_MAX;
volatile uint32_t t88 = 1918833U;
uint8_t x361 = 6U;
int32_t t90 = -40546027;
int32_t x366 = -1;
volatile int32_t x367 = INT32_MAX;
static volatile int64_t x369 = 239132493LL;
volatile int32_t x374 = INT32_MIN;
int32_t t94 = 29419;
int64_t x381 = INT64_MAX;
uint16_t x382 = 1U;
int16_t x387 = -1;
volatile int16_t x395 = 15026;
int32_t x398 = -11227;
int8_t x399 = 2;


void f0(void) {
	int64_t x1 = 3755LL;
	int8_t x3 = INT8_MIN;
	int16_t x4 = -2482;
	volatile int64_t t0 = 103979552LL;

	t0 = (x1|(x2==(x3==x4)));

	if (t0 != 3755LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 348253LLU;
	int8_t x6 = INT8_MIN;
	static int8_t x7 = 7;
	int8_t x8 = -1;
	uint64_t t1 = 7588430172526032LLU;

	t1 = (x5|(x6==(x7==x8)));

	if (t1 != 348253LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = UINT64_MAX;
	static volatile int64_t x10 = INT64_MIN;
	int64_t x12 = -1LL;
	volatile uint64_t t2 = UINT64_MAX;

	t2 = (x9|(x10==(x11==x12)));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x14 = -17LL;
	static volatile int8_t x15 = -1;
	volatile uint8_t x16 = 1U;

	t3 = (x13|(x14==(x15==x16)));

	if (t3 != 3) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	int8_t x18 = -2;
	volatile int64_t x19 = INT64_MIN;
	uint64_t x20 = 2099170LLU;

	t4 = (x17|(x18==(x19==x20)));

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	uint64_t x22 = UINT64_MAX;
	int32_t x24 = -6;
	static volatile int64_t t5 = 390733LL;

	t5 = (x21|(x22==(x23==x24)));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	uint64_t x26 = 450LLU;
	int16_t x27 = INT16_MAX;
	static int16_t x28 = -2619;
	volatile int64_t t6 = INT64_MIN;

	t6 = (x25|(x26==(x27==x28)));

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = -1;
	int16_t x31 = 168;
	static int16_t x32 = INT16_MIN;
	volatile int32_t t7 = 7099;

	t7 = (x29|(x30==(x31==x32)));

	if (t7 != 1358) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 54U;
	int32_t x34 = -1;
	uint8_t x36 = 2U;
	int32_t t8 = -446957449;

	t8 = (x33|(x34==(x35==x36)));

	if (t8 != 54) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	volatile int32_t x38 = 1;
	volatile uint32_t x39 = UINT32_MAX;
	static int64_t x40 = INT64_MIN;
	int32_t t9 = 9004;

	t9 = (x37|(x38==(x39==x40)));

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x41 = -46;
	volatile int32_t x42 = -1;
	int8_t x43 = INT8_MAX;

	t10 = (x41|(x42==(x43==x44)));

	if (t10 != -46) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MAX;
	uint64_t x46 = 9008LLU;
	uint32_t x48 = 419905U;
	static int32_t t11 = -564684663;

	t11 = (x45|(x46==(x47==x48)));

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = -1LL;
	int64_t x50 = -3092328743821LL;
	int8_t x51 = INT8_MIN;
	int32_t x52 = INT32_MIN;
	static volatile int64_t t12 = 482366LL;

	t12 = (x49|(x50==(x51==x52)));

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x54 = 30775U;
	static volatile int16_t x55 = INT16_MIN;
	int16_t x56 = 813;
	int32_t t13 = -25;

	t13 = (x53|(x54==(x55==x56)));

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -11455543961LL;
	int16_t x60 = 409;
	int64_t t14 = -1LL;

	t14 = (x57|(x58==(x59==x60)));

	if (t14 != -11455543961LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x63 = 211502706LLU;
	volatile uint32_t t15 = 17139373U;

	t15 = (x61|(x62==(x63==x64)));

	if (t15 != 5210U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = 9;
	int32_t x66 = INT32_MAX;
	uint16_t x67 = 31914U;

	t16 = (x65|(x66==(x67==x68)));

	if (t16 != 9) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = 52;
	int16_t x70 = -1;
	int64_t x71 = INT64_MIN;
	volatile int16_t x72 = INT16_MIN;
	volatile int32_t t17 = 200;

	t17 = (x69|(x70==(x71==x72)));

	if (t17 != 52) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	int64_t x74 = 176LL;
	uint64_t x75 = 3655476099746LLU;
	int64_t t18 = INT64_MIN;

	t18 = (x73|(x74==(x75==x76)));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MAX;
	int64_t x78 = INT64_MIN;
	uint8_t x79 = 23U;
	static int64_t x80 = 2012634LL;
	int32_t t19 = -2200895;

	t19 = (x77|(x78==(x79==x80)));

	if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x82 = INT64_MAX;
	uint32_t x83 = UINT32_MAX;
	static int8_t x84 = 59;
	static int32_t t20 = -23954760;

	t20 = (x81|(x82==(x83==x84)));

	if (t20 != 10772) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = -1;
	int8_t x86 = -1;
	int8_t x87 = 6;
	volatile uint8_t x88 = UINT8_MAX;
	int32_t t21 = -800727;

	t21 = (x85|(x86==(x87==x88)));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x89 = -1;
	static uint32_t x90 = 463U;
	int8_t x91 = INT8_MIN;
	int16_t x92 = INT16_MIN;
	static volatile int32_t t22 = 3806793;

	t22 = (x89|(x90==(x91==x92)));

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x94 = UINT8_MAX;
	uint16_t x96 = 18U;

	t23 = (x93|(x94==(x95==x96)));

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = -1;
	uint32_t x98 = 12318U;
	static uint64_t x99 = 1059737205092456LLU;
	int32_t x100 = INT32_MIN;
	volatile int32_t t24 = -127439496;

	t24 = (x97|(x98==(x99==x100)));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x101 = 258U;
	int16_t x104 = INT16_MIN;
	int32_t t25 = 219;

	t25 = (x101|(x102==(x103==x104)));

	if (t25 != 258) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -1;
	int16_t x106 = -1;
	volatile uint32_t x107 = 14430U;
	int8_t x108 = INT8_MIN;

	t26 = (x105|(x106==(x107==x108)));

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = 1862;
	uint32_t x110 = 1U;
	int32_t x111 = -1;
	uint8_t x112 = 2U;
	int32_t t27 = -213477619;

	t27 = (x109|(x110==(x111==x112)));

	if (t27 != 1862) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	int32_t x114 = -1206760;
	int16_t x115 = -1;
	int64_t x116 = INT64_MIN;
	volatile int32_t t28 = 169;

	t28 = (x113|(x114==(x115==x116)));

	if (t28 != -32768) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x117 = 1U;
	volatile uint64_t x119 = UINT64_MAX;
	static uint16_t x120 = UINT16_MAX;
	volatile int32_t t29 = -16906;

	t29 = (x117|(x118==(x119==x120)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = 1;
	int32_t x123 = INT32_MAX;
	volatile int32_t t30 = 1;

	t30 = (x121|(x122==(x123==x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	int8_t x126 = INT8_MIN;
	int32_t x127 = INT32_MIN;
	volatile uint32_t x128 = UINT32_MAX;
	int32_t t31 = 16;

	t31 = (x125|(x126==(x127==x128)));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	static uint8_t x130 = UINT8_MAX;
	uint16_t x131 = 456U;
	volatile int32_t t32 = -28275590;

	t32 = (x129|(x130==(x131==x132)));

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 45159U;
	static uint16_t x134 = UINT16_MAX;
	volatile uint32_t t33 = 1015029536U;

	t33 = (x133|(x134==(x135==x136)));

	if (t33 != 45159U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	uint64_t x139 = 518656752265LLU;
	static volatile uint8_t x140 = 14U;

	t34 = (x137|(x138==(x139==x140)));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	int32_t x143 = -1;
	int32_t x144 = -1;
	volatile int32_t t35 = -36967343;

	t35 = (x141|(x142==(x143==x144)));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x145 = 9LLU;
	int16_t x146 = INT16_MIN;
	volatile int16_t x147 = 1;

	t36 = (x145|(x146==(x147==x148)));

	if (t36 != 9LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x149 = 3U;
	int8_t x150 = 5;
	int64_t x151 = INT64_MIN;
	uint8_t x152 = 6U;
	static int32_t t37 = -51647954;

	t37 = (x149|(x150==(x151==x152)));

	if (t37 != 3) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x153 = 0;
	static int32_t x154 = INT32_MIN;
	volatile int32_t x155 = -1;
	int32_t t38 = -8921;

	t38 = (x153|(x154==(x155==x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 4080061794749LLU;
	int64_t x158 = 2895971LL;
	uint64_t x159 = 224486177215LLU;
	uint64_t t39 = 10276234658118749LLU;

	t39 = (x157|(x158==(x159==x160)));

	if (t39 != 4080061794749LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	volatile uint32_t x162 = 2U;
	static int32_t x164 = INT32_MIN;

	t40 = (x161|(x162==(x163==x164)));

	if (t40 != INT32_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	volatile int32_t x166 = 15363615;
	int32_t t41 = -21796;

	t41 = (x165|(x166==(x167==x168)));

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x169 = 242031363;
	int16_t x170 = INT16_MIN;
	int64_t x171 = -1LL;
	volatile uint16_t x172 = UINT16_MAX;
	int32_t t42 = 3207299;

	t42 = (x169|(x170==(x171==x172)));

	if (t42 != 242031363) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MAX;
	int8_t x175 = 10;
	volatile int16_t x176 = -1;
	int32_t t43 = -25351;

	t43 = (x173|(x174==(x175==x176)));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 16U;
	int16_t x178 = INT16_MIN;
	volatile int64_t x179 = INT64_MAX;
	static int64_t x180 = INT64_MIN;
	volatile int32_t t44 = -447;

	t44 = (x177|(x178==(x179==x180)));

	if (t44 != 16) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x184 = 11U;
	int32_t t45 = 76693;

	t45 = (x181|(x182==(x183==x184)));

	if (t45 != -12326) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MAX;
	int8_t x186 = -1;
	volatile uint32_t x187 = 953U;
	static int64_t x188 = INT64_MAX;
	volatile int32_t t46 = -1553;

	t46 = (x185|(x186==(x187==x188)));

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = -1;
	static int64_t x191 = -753LL;
	volatile int32_t t47 = 47791805;

	t47 = (x189|(x190==(x191==x192)));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = INT16_MAX;
	uint16_t x194 = 230U;
	int8_t x196 = -1;

	t48 = (x193|(x194==(x195==x196)));

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x198 = UINT64_MAX;
	int32_t x200 = 983583919;
	int32_t t49 = -1;

	t49 = (x197|(x198==(x199==x200)));

	if (t49 != 374212) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = INT32_MIN;
	int64_t x202 = 57094736191654768LL;
	static uint8_t x203 = 60U;
	uint32_t x204 = 1478437886U;

	t50 = (x201|(x202==(x203==x204)));

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x205 = 2LLU;
	uint16_t x206 = 11U;
	static volatile int16_t x207 = -488;
	int32_t x208 = INT32_MAX;
	uint64_t t51 = 74282085900LLU;

	t51 = (x205|(x206==(x207==x208)));

	if (t51 != 2LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = 0;
	uint8_t x211 = 109U;
	volatile int8_t x212 = INT8_MAX;
	volatile int32_t t52 = -910401816;

	t52 = (x209|(x210==(x211==x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = INT16_MIN;
	volatile int16_t x214 = INT16_MIN;
	static volatile int64_t x215 = 1LL;
	static volatile uint32_t x216 = 5U;
	volatile int32_t t53 = -2;

	t53 = (x213|(x214==(x215==x216)));

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x217 = UINT8_MAX;
	uint32_t x218 = 149U;
	int16_t x220 = INT16_MAX;
	volatile int32_t t54 = -727702989;

	t54 = (x217|(x218==(x219==x220)));

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = INT8_MIN;
	int64_t x222 = -508505215628833LL;
	int64_t x223 = 3159564807637LL;
	int16_t x224 = -1;
	static volatile int32_t t55 = -13;

	t55 = (x221|(x222==(x223==x224)));

	if (t55 != -128) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MAX;
	uint64_t x226 = 546LLU;
	int64_t x227 = 9298221234636105LL;
	int64_t x228 = INT64_MIN;
	volatile int32_t t56 = 2226;

	t56 = (x225|(x226==(x227==x228)));

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = 1716;
	static volatile uint64_t x230 = 123125741167531LLU;
	uint32_t x231 = 764787164U;
	int32_t t57 = -323066285;

	t57 = (x229|(x230==(x231==x232)));

	if (t57 != 1716) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = 77541685LL;
	uint8_t x236 = UINT8_MAX;
	volatile int64_t t58 = -4LL;

	t58 = (x233|(x234==(x235==x236)));

	if (t58 != 77541685LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = -2;
	int8_t x238 = -23;
	int64_t x240 = -214483610LL;
	int32_t t59 = 285;

	t59 = (x237|(x238==(x239==x240)));

	if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x241 = 4U;
	int64_t x242 = 20972LL;
	int64_t x243 = -1LL;
	static uint8_t x244 = 2U;
	static volatile int32_t t60 = -740438839;

	t60 = (x241|(x242==(x243==x244)));

	if (t60 != 4) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x245 = UINT32_MAX;
	int64_t x246 = INT64_MAX;
	int32_t x247 = INT32_MAX;
	volatile int32_t x248 = -17894781;

	t61 = (x245|(x246==(x247==x248)));

	if (t61 != UINT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1;
	int8_t x250 = -1;
	uint16_t x251 = 0U;
	volatile int32_t t62 = 68450;

	t62 = (x249|(x250==(x251==x252)));

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x254 = INT8_MAX;
	int8_t x255 = 1;
	volatile int64_t x256 = INT64_MIN;
	volatile int32_t t63 = -40867;

	t63 = (x253|(x254==(x255==x256)));

	if (t63 != 44) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = -1;
	uint16_t x258 = 7318U;
	uint8_t x259 = 78U;
	int32_t t64 = 3;

	t64 = (x257|(x258==(x259==x260)));

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x262 = INT64_MAX;
	int8_t x263 = -1;
	int64_t x264 = -1LL;

	t65 = (x261|(x262==(x263==x264)));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MAX;
	static volatile int16_t x266 = INT16_MAX;
	int32_t x267 = INT32_MIN;
	uint16_t x268 = 983U;

	t66 = (x265|(x266==(x267==x268)));

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x269 = -1;
	int32_t x271 = -15887860;

	t67 = (x269|(x270==(x271==x272)));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -1LL;
	int8_t x274 = INT8_MIN;
	int16_t x275 = INT16_MIN;
	static uint8_t x276 = 5U;
	int64_t t68 = 184LL;

	t68 = (x273|(x274==(x275==x276)));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -2;
	volatile int32_t x278 = 30;
	uint64_t x280 = UINT64_MAX;
	int32_t t69 = 10;

	t69 = (x277|(x278==(x279==x280)));

	if (t69 != -2) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 10243U;
	int8_t x282 = 1;
	volatile int64_t x283 = INT64_MIN;
	int8_t x284 = INT8_MIN;

	t70 = (x281|(x282==(x283==x284)));

	if (t70 != 10243U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	uint64_t x286 = UINT64_MAX;
	static volatile int16_t x287 = INT16_MAX;
	static int32_t x288 = INT32_MIN;
	volatile int32_t t71 = -39;

	t71 = (x285|(x286==(x287==x288)));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = INT32_MAX;
	int8_t x290 = INT8_MIN;
	static int16_t x292 = -6075;
	int32_t t72 = INT32_MAX;

	t72 = (x289|(x290==(x291==x292)));

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x293 = 237414LL;
	static uint16_t x295 = 120U;
	volatile int8_t x296 = INT8_MIN;
	int64_t t73 = -154012237LL;

	t73 = (x293|(x294==(x295==x296)));

	if (t73 != 237414LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = 2066U;
	int64_t x298 = -1LL;
	int16_t x299 = 221;
	uint32_t t74 = 21532473U;

	t74 = (x297|(x298==(x299==x300)));

	if (t74 != 2066U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	uint32_t x302 = 2795106U;
	int16_t x303 = INT16_MIN;
	volatile int8_t x304 = -13;
	volatile int32_t t75 = 1907753;

	t75 = (x301|(x302==(x303==x304)));

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	static int16_t x306 = -1;
	static int32_t x308 = 161083128;
	int32_t t76 = 409;

	t76 = (x305|(x306==(x307==x308)));

	if (t76 != -128) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	int8_t x310 = INT8_MAX;
	int32_t x311 = INT32_MIN;
	int16_t x312 = INT16_MIN;
	static int64_t t77 = INT64_MIN;

	t77 = (x309|(x310==(x311==x312)));

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x314 = 10699;
	static int32_t x315 = INT32_MIN;
	static int32_t x316 = 4701243;
	volatile int64_t t78 = -7480800413685LL;

	t78 = (x313|(x314==(x315==x316)));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x317 = 581946;
	int16_t x318 = INT16_MIN;
	int8_t x319 = -1;
	volatile int8_t x320 = -3;

	t79 = (x317|(x318==(x319==x320)));

	if (t79 != 581946) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x322 = INT8_MIN;
	uint8_t x323 = UINT8_MAX;
	int32_t t80 = -225;

	t80 = (x321|(x322==(x323==x324)));

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x325 = INT32_MAX;
	volatile int64_t x327 = INT64_MAX;
	uint16_t x328 = UINT16_MAX;
	volatile int32_t t81 = INT32_MAX;

	t81 = (x325|(x326==(x327==x328)));

	if (t81 != INT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = UINT8_MAX;
	volatile uint8_t x330 = 5U;
	int16_t x331 = -13331;
	int8_t x332 = -13;
	volatile int32_t t82 = 1;

	t82 = (x329|(x330==(x331==x332)));

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x333 = INT8_MAX;
	static int32_t x334 = INT32_MAX;
	uint8_t x336 = 69U;
	int32_t t83 = 268347656;

	t83 = (x333|(x334==(x335==x336)));

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x338 = INT16_MAX;
	uint32_t x340 = UINT32_MAX;
	static int64_t t84 = INT64_MIN;

	t84 = (x337|(x338==(x339==x340)));

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	uint8_t x342 = 3U;
	volatile int16_t x343 = INT16_MIN;
	int8_t x344 = INT8_MIN;
	volatile int32_t t85 = INT32_MIN;

	t85 = (x341|(x342==(x343==x344)));

	if (t85 != INT32_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x346 = 19U;
	uint8_t x347 = UINT8_MAX;
	uint8_t x348 = 1U;
	int32_t t86 = 120238852;

	t86 = (x345|(x346==(x347==x348)));

	if (t86 != 379) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = -3127377;
	uint64_t x352 = UINT64_MAX;
	static volatile int32_t t87 = -125;

	t87 = (x349|(x350==(x351==x352)));

	if (t87 != -3127377) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x353 = 21183U;
	uint64_t x356 = UINT64_MAX;

	t88 = (x353|(x354==(x355==x356)));

	if (t88 != 21183U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = INT8_MIN;
	volatile int64_t x358 = INT64_MIN;
	int32_t x359 = 16031665;
	int8_t x360 = INT8_MAX;
	volatile int32_t t89 = -1;

	t89 = (x357|(x358==(x359==x360)));

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x362 = 0U;
	volatile uint64_t x363 = 8142LLU;
	uint32_t x364 = 4610002U;

	t90 = (x361|(x362==(x363==x364)));

	if (t90 != 7) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x365 = INT32_MIN;
	volatile int8_t x368 = -1;
	volatile int32_t t91 = INT32_MIN;

	t91 = (x365|(x366==(x367==x368)));

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x370 = INT32_MAX;
	volatile int32_t x371 = INT32_MIN;
	int8_t x372 = -1;
	volatile int64_t t92 = -2951812838014410106LL;

	t92 = (x369|(x370==(x371==x372)));

	if (t92 != 239132493LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 16848U;
	static int8_t x375 = -31;
	int64_t x376 = 100449309621841915LL;
	volatile int32_t t93 = 2543;

	t93 = (x373|(x374==(x375==x376)));

	if (t93 != 16848) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = 60895480;
	static int8_t x378 = INT8_MIN;
	uint32_t x379 = 196U;
	static int64_t x380 = INT64_MAX;

	t94 = (x377|(x378==(x379==x380)));

	if (t94 != 60895480) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x383 = -1;
	uint64_t x384 = 24146470137395675LLU;
	int64_t t95 = INT64_MAX;

	t95 = (x381|(x382==(x383==x384)));

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	volatile uint64_t x386 = UINT64_MAX;
	volatile int64_t x388 = -1LL;
	volatile int32_t t96 = INT32_MIN;

	t96 = (x385|(x386==(x387==x388)));

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	int16_t x390 = -14118;
	int32_t x391 = -31798;
	static volatile int16_t x392 = 2;
	int64_t t97 = INT64_MIN;

	t97 = (x389|(x390==(x391==x392)));

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x393 = 364LLU;
	static uint32_t x394 = 59U;
	uint64_t x396 = UINT64_MAX;
	uint64_t t98 = 34001646662LLU;

	t98 = (x393|(x394==(x395==x396)));

	if (t98 != 364LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x397 = INT16_MIN;
	int16_t x400 = -1;
	volatile int32_t t99 = -237;

	t99 = (x397|(x398==(x399==x400)));

	if (t99 != -32768) { NG(); } else { ; }
	
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

