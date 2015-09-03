#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = UINT64_MAX;
uint32_t x4 = UINT32_MAX;
uint32_t x5 = 626U;
uint32_t x10 = UINT32_MAX;
static uint16_t x13 = 628U;
int64_t x14 = INT64_MIN;
volatile int64_t x16 = INT64_MIN;
uint16_t x23 = UINT16_MAX;
int16_t x26 = -10;
static int8_t x35 = INT8_MIN;
volatile int64_t x38 = INT64_MIN;
static int8_t x52 = INT8_MIN;
int32_t x62 = -1;
static int32_t t16 = 1280;
static volatile uint64_t x69 = 3419444246LLU;
uint64_t x82 = UINT64_MAX;
int16_t x89 = INT16_MIN;
int8_t x91 = INT8_MIN;
volatile int16_t x97 = INT16_MIN;
uint64_t x99 = 59LLU;
int32_t x104 = INT32_MIN;
int8_t x105 = -1;
int32_t t27 = -1;
int8_t x115 = -18;
int32_t t28 = 23971799;
volatile int64_t x117 = INT64_MAX;
static int64_t x120 = -28278787919413530LL;
int32_t x123 = 328877653;
int32_t t30 = 3049;
int8_t x129 = -1;
volatile int32_t x142 = -6979017;
volatile int16_t x145 = INT16_MIN;
int32_t t36 = 0;
int16_t x160 = -1;
static int8_t x162 = INT8_MIN;
volatile int16_t x174 = 0;
static int32_t x178 = INT32_MAX;
static volatile uint16_t x183 = UINT16_MAX;
volatile int64_t x189 = INT64_MIN;
int32_t x198 = -1;
uint8_t x202 = 15U;
static int64_t x205 = INT64_MIN;
uint32_t x210 = 41243183U;
static int32_t t53 = -2993450;
volatile uint16_t x219 = 1U;
static int8_t x220 = INT8_MIN;
volatile int32_t x230 = INT32_MIN;
int64_t x232 = INT64_MIN;
int32_t x238 = INT32_MIN;
int64_t x244 = -1LL;
static int64_t x250 = -36974319017049LL;
int64_t x252 = INT64_MAX;
int16_t x256 = INT16_MIN;
static int32_t x258 = INT32_MIN;
volatile int64_t x259 = INT64_MIN;
int8_t x261 = -8;
int32_t t66 = -1;
static int32_t x272 = -2;
uint64_t x273 = UINT64_MAX;
int64_t x277 = INT64_MAX;
int64_t x282 = 236445809713LL;
int16_t x295 = INT16_MAX;
static uint32_t x296 = 84571U;
volatile uint32_t x298 = UINT32_MAX;
int32_t t74 = 2;
int32_t x301 = INT32_MIN;
static volatile int32_t t75 = -15087;
static volatile int8_t x309 = -28;
static uint32_t x311 = UINT32_MAX;
static volatile int64_t x321 = INT64_MIN;
int16_t x323 = INT16_MIN;
volatile int64_t x325 = -1LL;
volatile uint32_t x327 = 64991U;
int32_t t81 = 454761;
volatile int64_t x330 = INT64_MIN;
volatile int64_t x331 = INT64_MIN;
int32_t t82 = 8;
volatile int16_t x336 = INT16_MIN;
int16_t x340 = -114;
int32_t t84 = -15265862;
int32_t x350 = -2827876;
static int32_t t87 = -23318725;
volatile uint32_t x362 = 287380U;
volatile int8_t x371 = INT8_MIN;
int32_t t92 = -8;
int8_t x374 = -1;
int8_t x377 = -31;
int8_t x384 = 18;
static int32_t t95 = 14812;
static int16_t x386 = 50;
uint64_t x399 = 12LLU;


void f0(void) {
	int16_t x1 = INT16_MAX;
	volatile int32_t x3 = INT32_MAX;
	int32_t t0 = 2558;

	t0 = ((x1<=x2)&(x3<=x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x6 = INT32_MAX;
	int64_t x7 = -1LL;
	int16_t x8 = 5029;
	volatile int32_t t1 = -158;

	t1 = ((x5<=x6)&(x7<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int16_t x11 = -1;
	static uint8_t x12 = 76U;
	int32_t t2 = -2787804;

	t2 = ((x9<=x10)&(x11<=x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x15 = INT16_MIN;
	int32_t t3 = -925;

	t3 = ((x13<=x14)&(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 57592300506927LLU;
	static int8_t x18 = INT8_MIN;
	int32_t x19 = -208759;
	uint64_t x20 = 57718263130994370LLU;
	volatile int32_t t4 = -33;

	t4 = ((x17<=x18)&(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	static uint64_t x22 = 788992624628LLU;
	int16_t x24 = 23;
	int32_t t5 = 107361865;

	t5 = ((x21<=x22)&(x23<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	static uint16_t x27 = 2994U;
	uint32_t x28 = 18U;
	volatile int32_t t6 = 50952107;

	t6 = ((x25<=x26)&(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 2;
	int32_t x30 = INT32_MIN;
	volatile int16_t x31 = INT16_MIN;
	volatile int32_t x32 = INT32_MAX;
	int32_t t7 = -313322070;

	t7 = ((x29<=x30)&(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MIN;
	static int16_t x34 = 3;
	uint16_t x36 = UINT16_MAX;
	int32_t t8 = 25;

	t8 = ((x33<=x34)&(x35<=x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MIN;
	int16_t x39 = 2;
	volatile int16_t x40 = 3;
	int32_t t9 = -12345;

	t9 = ((x37<=x38)&(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	volatile int32_t x42 = -294283385;
	static int64_t x43 = INT64_MAX;
	int32_t x44 = -1;
	static volatile int32_t t10 = 88;

	t10 = ((x41<=x42)&(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x45 = UINT16_MAX;
	int8_t x46 = 2;
	uint64_t x47 = 455791LLU;
	volatile int32_t x48 = INT32_MIN;
	int32_t t11 = 0;

	t11 = ((x45<=x46)&(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = UINT32_MAX;
	static uint64_t x50 = 201899660534420409LLU;
	uint64_t x51 = 1720268LLU;
	int32_t t12 = -413996099;

	t12 = ((x49<=x50)&(x51<=x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	int32_t x54 = 71;
	volatile int64_t x55 = INT64_MIN;
	uint16_t x56 = 6891U;
	volatile int32_t t13 = 29886186;

	t13 = ((x53<=x54)&(x55<=x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = 1;
	int32_t x58 = INT32_MIN;
	int32_t x59 = -1;
	int64_t x60 = INT64_MIN;
	volatile int32_t t14 = -2033690;

	t14 = ((x57<=x58)&(x59<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = INT32_MIN;
	int16_t x63 = -3;
	uint16_t x64 = UINT16_MAX;
	static int32_t t15 = -3461922;

	t15 = ((x61<=x62)&(x63<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = INT8_MIN;
	uint16_t x66 = UINT16_MAX;
	static volatile int16_t x67 = -823;
	uint16_t x68 = UINT16_MAX;

	t16 = ((x65<=x66)&(x67<=x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x70 = UINT16_MAX;
	static volatile int8_t x71 = 41;
	uint32_t x72 = UINT32_MAX;
	int32_t t17 = -7413;

	t17 = ((x69<=x70)&(x71<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	uint8_t x74 = 108U;
	int64_t x75 = INT64_MAX;
	volatile int8_t x76 = INT8_MAX;
	int32_t t18 = 4;

	t18 = ((x73<=x74)&(x75<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x77 = 15019364336299271LLU;
	uint8_t x78 = 0U;
	int64_t x79 = -861663305142LL;
	int32_t x80 = -476329652;
	static int32_t t19 = -136866798;

	t19 = ((x77<=x78)&(x79<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	int8_t x83 = -1;
	volatile int64_t x84 = INT64_MIN;
	int32_t t20 = -109;

	t20 = ((x81<=x82)&(x83<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 2526U;
	static uint64_t x86 = 45431252518188611LLU;
	int64_t x87 = INT64_MAX;
	int8_t x88 = INT8_MAX;
	int32_t t21 = -12889;

	t21 = ((x85<=x86)&(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x90 = INT64_MIN;
	uint32_t x92 = UINT32_MAX;
	static volatile int32_t t22 = -31943254;

	t22 = ((x89<=x90)&(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int64_t x93 = 44344LL;
	volatile int8_t x94 = 14;
	static int16_t x95 = -710;
	volatile int16_t x96 = -1;
	int32_t t23 = -77476;

	t23 = ((x93<=x94)&(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x98 = 1U;
	volatile int64_t x100 = 294559109458367220LL;
	volatile int32_t t24 = 20529;

	t24 = ((x97<=x98)&(x99<=x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x101 = UINT16_MAX;
	int16_t x102 = 1;
	static uint8_t x103 = 41U;
	static volatile int32_t t25 = 2;

	t25 = ((x101<=x102)&(x103<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x106 = -1;
	static int64_t x107 = INT64_MAX;
	int64_t x108 = -41094567026LL;
	int32_t t26 = -1;

	t26 = ((x105<=x106)&(x107<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = 2889LL;
	int64_t x110 = -252758648LL;
	int64_t x111 = INT64_MAX;
	uint8_t x112 = UINT8_MAX;

	t27 = ((x109<=x110)&(x111<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = -1;
	int32_t x114 = INT32_MAX;
	int64_t x116 = 1855980069503LL;

	t28 = ((x113<=x114)&(x115<=x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x118 = INT32_MIN;
	int16_t x119 = INT16_MIN;
	volatile int32_t t29 = -847;

	t29 = ((x117<=x118)&(x119<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 60101U;
	volatile uint16_t x122 = 0U;
	volatile int64_t x124 = INT64_MIN;

	t30 = ((x121<=x122)&(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = UINT16_MAX;
	int32_t x126 = -1;
	static uint8_t x127 = 0U;
	static int16_t x128 = INT16_MIN;
	int32_t t31 = -5643;

	t31 = ((x125<=x126)&(x127<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = -1LL;
	uint64_t x131 = 13042LLU;
	volatile int16_t x132 = -1;
	int32_t t32 = -3735;

	t32 = ((x129<=x130)&(x131<=x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x133 = 11;
	volatile int32_t x134 = -1;
	int64_t x135 = 11LL;
	int16_t x136 = 436;
	int32_t t33 = -26;

	t33 = ((x133<=x134)&(x135<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = UINT8_MAX;
	static volatile int8_t x138 = INT8_MIN;
	static volatile int8_t x139 = INT8_MIN;
	int16_t x140 = INT16_MIN;
	volatile int32_t t34 = 30314;

	t34 = ((x137<=x138)&(x139<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = INT16_MIN;
	uint8_t x143 = UINT8_MAX;
	uint16_t x144 = 10U;
	int32_t t35 = -19;

	t35 = ((x141<=x142)&(x143<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x146 = INT32_MIN;
	static int16_t x147 = 550;
	uint32_t x148 = 2365U;

	t36 = ((x145<=x146)&(x147<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 9U;
	static uint32_t x150 = UINT32_MAX;
	uint16_t x151 = UINT16_MAX;
	volatile int32_t x152 = -1;
	int32_t t37 = -26;

	t37 = ((x149<=x150)&(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	int8_t x154 = INT8_MIN;
	volatile uint8_t x155 = 8U;
	int16_t x156 = -1;
	int32_t t38 = 56;

	t38 = ((x153<=x154)&(x155<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x157 = UINT8_MAX;
	static int8_t x158 = -1;
	volatile int8_t x159 = INT8_MIN;
	int32_t t39 = 84;

	t39 = ((x157<=x158)&(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 5U;
	uint32_t x163 = 1U;
	uint16_t x164 = 43U;
	int32_t t40 = 127898;

	t40 = ((x161<=x162)&(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x165 = INT32_MAX;
	static uint32_t x166 = 2977840U;
	static volatile uint64_t x167 = 303114952922LLU;
	int64_t x168 = INT64_MAX;
	static int32_t t41 = -12;

	t41 = ((x165<=x166)&(x167<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x169 = 0;
	uint64_t x170 = 1182235721703406LLU;
	uint8_t x171 = UINT8_MAX;
	volatile uint16_t x172 = 36U;
	volatile int32_t t42 = -1681767;

	t42 = ((x169<=x170)&(x171<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MIN;
	static volatile int8_t x175 = INT8_MIN;
	uint64_t x176 = 951332530475781LLU;
	int32_t t43 = 2429285;

	t43 = ((x173<=x174)&(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MAX;
	int8_t x179 = 1;
	int16_t x180 = 31;
	volatile int32_t t44 = 188167138;

	t44 = ((x177<=x178)&(x179<=x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = INT16_MIN;
	int16_t x182 = INT16_MAX;
	static int8_t x184 = INT8_MAX;
	volatile int32_t t45 = 473;

	t45 = ((x181<=x182)&(x183<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = -1LL;
	uint16_t x186 = UINT16_MAX;
	int32_t x187 = -1;
	uint8_t x188 = UINT8_MAX;
	static volatile int32_t t46 = 6410;

	t46 = ((x185<=x186)&(x187<=x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x190 = INT64_MIN;
	uint8_t x191 = UINT8_MAX;
	static int8_t x192 = -1;
	volatile int32_t t47 = 301114185;

	t47 = ((x189<=x190)&(x191<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -7;
	int8_t x194 = INT8_MAX;
	volatile int32_t x195 = INT32_MIN;
	volatile int16_t x196 = 2581;
	static volatile int32_t t48 = -332;

	t48 = ((x193<=x194)&(x195<=x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	int8_t x199 = -1;
	volatile int64_t x200 = -1LL;
	volatile int32_t t49 = 236918793;

	t49 = ((x197<=x198)&(x199<=x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	int8_t x203 = 2;
	int64_t x204 = -1LL;
	static int32_t t50 = 861;

	t50 = ((x201<=x202)&(x203<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x206 = 6LLU;
	static volatile uint8_t x207 = 28U;
	volatile int32_t x208 = -1;
	int32_t t51 = 123;

	t51 = ((x205<=x206)&(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = -27;
	int16_t x211 = INT16_MIN;
	volatile int32_t x212 = INT32_MIN;
	static int32_t t52 = 224;

	t52 = ((x209<=x210)&(x211<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = UINT8_MAX;
	int16_t x214 = -1;
	uint32_t x215 = 726U;
	int16_t x216 = INT16_MIN;

	t53 = ((x213<=x214)&(x215<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = 270632988677814LLU;
	int8_t x218 = INT8_MIN;
	int32_t t54 = 18947515;

	t54 = ((x217<=x218)&(x219<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -1LL;
	static int8_t x222 = INT8_MIN;
	int32_t x223 = 8782;
	volatile uint8_t x224 = UINT8_MAX;
	int32_t t55 = -8308;

	t55 = ((x221<=x222)&(x223<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	volatile int64_t x226 = -1LL;
	int8_t x227 = -61;
	volatile uint32_t x228 = 108824007U;
	int32_t t56 = -7;

	t56 = ((x225<=x226)&(x227<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 2U;
	int32_t x231 = -2241;
	int32_t t57 = -3800664;

	t57 = ((x229<=x230)&(x231<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 68870698LLU;
	static int32_t x234 = INT32_MIN;
	int16_t x235 = INT16_MIN;
	uint8_t x236 = 2U;
	volatile int32_t t58 = 2;

	t58 = ((x233<=x234)&(x235<=x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = INT64_MAX;
	int64_t x239 = -1LL;
	static volatile int8_t x240 = INT8_MIN;
	static volatile int32_t t59 = 7;

	t59 = ((x237<=x238)&(x239<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x241 = 0;
	uint8_t x242 = 13U;
	int64_t x243 = -361055038433867LL;
	volatile int32_t t60 = -224039;

	t60 = ((x241<=x242)&(x243<=x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = -108141;
	static int16_t x246 = -1;
	int16_t x247 = INT16_MIN;
	int8_t x248 = INT8_MIN;
	static int32_t t61 = 7524139;

	t61 = ((x245<=x246)&(x247<=x248));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MAX;
	int16_t x251 = -35;
	static volatile int32_t t62 = -1;

	t62 = ((x249<=x250)&(x251<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = 2;
	int32_t x254 = INT32_MIN;
	uint8_t x255 = 14U;
	static int32_t t63 = 1;

	t63 = ((x253<=x254)&(x255<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x257 = 342810349LLU;
	volatile int32_t x260 = INT32_MAX;
	volatile int32_t t64 = 93;

	t64 = ((x257<=x258)&(x259<=x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x262 = INT32_MIN;
	uint8_t x263 = UINT8_MAX;
	uint64_t x264 = UINT64_MAX;
	int32_t t65 = -500;

	t65 = ((x261<=x262)&(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 13U;
	int16_t x266 = INT16_MIN;
	uint32_t x267 = UINT32_MAX;
	uint32_t x268 = 61670U;

	t66 = ((x265<=x266)&(x267<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = UINT8_MAX;
	int64_t x270 = 3617324412LL;
	int8_t x271 = INT8_MAX;
	volatile int32_t t67 = 400132;

	t67 = ((x269<=x270)&(x271<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x274 = UINT64_MAX;
	int64_t x275 = INT64_MAX;
	uint16_t x276 = 1U;
	static int32_t t68 = -427414635;

	t68 = ((x273<=x274)&(x275<=x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x278 = 31215440LL;
	int64_t x279 = -1839368734379460LL;
	uint8_t x280 = UINT8_MAX;
	int32_t t69 = -50372;

	t69 = ((x277<=x278)&(x279<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	uint8_t x283 = 6U;
	volatile uint8_t x284 = 112U;
	volatile int32_t t70 = -11652;

	t70 = ((x281<=x282)&(x283<=x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	volatile int16_t x286 = INT16_MIN;
	static uint8_t x287 = 118U;
	int32_t x288 = -1;
	volatile int32_t t71 = 53536895;

	t71 = ((x285<=x286)&(x287<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = -74LL;
	volatile uint8_t x290 = 23U;
	static uint8_t x291 = 1U;
	static uint8_t x292 = 3U;
	int32_t t72 = 3;

	t72 = ((x289<=x290)&(x291<=x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = 2;
	uint8_t x294 = 3U;
	int32_t t73 = -32746;

	t73 = ((x293<=x294)&(x295<=x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x297 = INT16_MAX;
	int16_t x299 = 13;
	uint16_t x300 = 24622U;

	t74 = ((x297<=x298)&(x299<=x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x302 = INT32_MAX;
	static uint64_t x303 = 7256985373136542LLU;
	int32_t x304 = INT32_MIN;

	t75 = ((x301<=x302)&(x303<=x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = INT8_MIN;
	static int16_t x306 = -1;
	volatile int32_t x307 = INT32_MAX;
	static uint64_t x308 = 12579536571725LLU;
	volatile int32_t t76 = 1;

	t76 = ((x305<=x306)&(x307<=x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x310 = INT64_MIN;
	int8_t x312 = INT8_MIN;
	int32_t t77 = -882;

	t77 = ((x309<=x310)&(x311<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -1;
	volatile uint8_t x314 = UINT8_MAX;
	int8_t x315 = -1;
	int32_t x316 = -28877;
	static volatile int32_t t78 = -2;

	t78 = ((x313<=x314)&(x315<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = UINT32_MAX;
	int16_t x318 = INT16_MIN;
	uint16_t x319 = 6934U;
	volatile uint16_t x320 = 3227U;
	int32_t t79 = 8158737;

	t79 = ((x317<=x318)&(x319<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x322 = UINT8_MAX;
	int64_t x324 = -1LL;
	int32_t t80 = -283952039;

	t80 = ((x321<=x322)&(x323<=x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x326 = INT32_MIN;
	uint16_t x328 = 121U;

	t81 = ((x325<=x326)&(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = UINT64_MAX;
	int64_t x332 = -6LL;

	t82 = ((x329<=x330)&(x331<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x333 = UINT32_MAX;
	int32_t x334 = INT32_MIN;
	static int16_t x335 = INT16_MAX;
	volatile int32_t t83 = 1700978;

	t83 = ((x333<=x334)&(x335<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -1;
	uint8_t x338 = 61U;
	static int16_t x339 = -1;

	t84 = ((x337<=x338)&(x339<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x341 = -1LL;
	uint32_t x342 = UINT32_MAX;
	int64_t x343 = -1LL;
	int16_t x344 = INT16_MIN;
	volatile int32_t t85 = -5150853;

	t85 = ((x341<=x342)&(x343<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x345 = 34173U;
	static int32_t x346 = INT32_MAX;
	int64_t x347 = INT64_MIN;
	static volatile int32_t x348 = 35;
	static int32_t t86 = 453;

	t86 = ((x345<=x346)&(x347<=x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x349 = INT64_MIN;
	static int32_t x351 = INT32_MIN;
	int32_t x352 = INT32_MIN;

	t87 = ((x349<=x350)&(x351<=x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x353 = INT8_MIN;
	volatile int16_t x354 = INT16_MIN;
	uint16_t x355 = 1628U;
	volatile int16_t x356 = INT16_MIN;
	volatile int32_t t88 = 0;

	t88 = ((x353<=x354)&(x355<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = UINT64_MAX;
	int32_t x358 = 2490;
	static int64_t x359 = INT64_MAX;
	int64_t x360 = 0LL;
	static int32_t t89 = -457;

	t89 = ((x357<=x358)&(x359<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x361 = INT32_MIN;
	int16_t x363 = INT16_MAX;
	static uint64_t x364 = UINT64_MAX;
	static int32_t t90 = 89;

	t90 = ((x361<=x362)&(x363<=x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = 2546LLU;
	static int32_t x366 = 125916120;
	volatile int8_t x367 = -1;
	uint8_t x368 = UINT8_MAX;
	volatile int32_t t91 = -13;

	t91 = ((x365<=x366)&(x367<=x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MIN;
	uint32_t x370 = 53346U;
	int8_t x372 = -12;

	t92 = ((x369<=x370)&(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 24U;
	int16_t x375 = INT16_MIN;
	int32_t x376 = INT32_MAX;
	int32_t t93 = 57229;

	t93 = ((x373<=x374)&(x375<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x378 = UINT16_MAX;
	volatile int8_t x379 = INT8_MIN;
	int16_t x380 = 1;
	volatile int32_t t94 = -724344;

	t94 = ((x377<=x378)&(x379<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	static uint8_t x382 = 8U;
	static uint64_t x383 = UINT64_MAX;

	t95 = ((x381<=x382)&(x383<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 3U;
	int32_t x387 = INT32_MIN;
	int16_t x388 = INT16_MIN;
	volatile int32_t t96 = 17;

	t96 = ((x385<=x386)&(x387<=x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	int8_t x390 = 55;
	static int64_t x391 = INT64_MIN;
	uint8_t x392 = 7U;
	static int32_t t97 = 1075416;

	t97 = ((x389<=x390)&(x391<=x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -1LL;
	uint32_t x394 = UINT32_MAX;
	uint32_t x395 = 172360U;
	uint32_t x396 = 334U;
	static int32_t t98 = -1;

	t98 = ((x393<=x394)&(x395<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x397 = UINT32_MAX;
	volatile int16_t x398 = INT16_MAX;
	static int16_t x400 = -1;
	volatile int32_t t99 = 3617191;

	t99 = ((x397<=x398)&(x399<=x400));

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

