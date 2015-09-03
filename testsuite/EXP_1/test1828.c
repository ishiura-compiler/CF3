#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = 133U;
uint32_t x9 = 5884U;
volatile int16_t x12 = INT16_MIN;
static int64_t x15 = -1LL;
uint32_t x17 = UINT32_MAX;
int8_t x19 = INT8_MAX;
static int16_t x21 = -46;
static int16_t x23 = INT16_MIN;
uint16_t x36 = 2237U;
volatile int8_t x39 = INT8_MAX;
volatile int32_t t9 = -1;
static int64_t x41 = -1LL;
int32_t x44 = INT32_MAX;
int16_t x48 = INT16_MIN;
uint32_t x52 = UINT32_MAX;
static int32_t x55 = 1;
static uint32_t x58 = 40268865U;
static uint64_t x61 = UINT64_MAX;
uint32_t x62 = 0U;
static int32_t t15 = 1;
static volatile int64_t x71 = INT64_MAX;
uint64_t x79 = 36LLU;
volatile int32_t t21 = -12358757;
uint32_t x91 = 7U;
int16_t x96 = -5;
volatile int64_t x101 = INT64_MAX;
int32_t t25 = 188;
int32_t t27 = -1;
static uint8_t x114 = 0U;
uint32_t x116 = UINT32_MAX;
static int16_t x127 = INT16_MIN;
static volatile int32_t t32 = 11156;
uint8_t x137 = 7U;
int8_t x138 = -1;
uint32_t x148 = 39892U;
uint16_t x156 = UINT16_MAX;
static int64_t x160 = INT64_MAX;
uint16_t x161 = 9877U;
int16_t x162 = 2672;
int64_t x164 = -1LL;
int32_t x165 = INT32_MAX;
int32_t t46 = -147699;
int8_t x196 = INT8_MAX;
int32_t x199 = INT32_MAX;
volatile int8_t x209 = INT8_MAX;
int8_t x215 = -7;
int8_t x221 = INT8_MAX;
volatile int16_t x239 = INT16_MAX;
int8_t x241 = INT8_MIN;
static int32_t t60 = -2;
uint32_t x246 = 85263U;
int16_t x251 = -1;
volatile int32_t x256 = -1;
int32_t x262 = -1;
int32_t x264 = -31517635;
static volatile int64_t x276 = -1701407LL;
uint8_t x277 = 27U;
static uint32_t x281 = 13805471U;
static volatile int32_t t70 = 376010;
uint32_t x285 = 2120802879U;
int8_t x290 = -1;
int32_t x291 = INT32_MIN;
volatile int32_t t72 = -373145;
int64_t x293 = 549LL;
uint8_t x295 = 27U;
uint16_t x299 = UINT16_MAX;
volatile int32_t t74 = -3;
volatile uint64_t x305 = 6062LLU;
volatile int32_t t76 = 701854;
uint32_t x312 = 30103671U;
volatile int32_t x317 = -4638;
volatile int32_t t80 = 51;
volatile uint16_t x327 = 10U;
uint32_t x331 = UINT32_MAX;
int8_t x333 = -58;
uint32_t x345 = 1U;
int32_t t87 = 8837;
int32_t t88 = -446693115;
volatile uint8_t x359 = UINT8_MAX;
static int32_t x361 = -1;
int32_t t90 = -937;
int8_t x366 = -1;
static int8_t x367 = INT8_MIN;
int16_t x369 = 14;
volatile uint64_t x370 = UINT64_MAX;
static uint8_t x375 = 0U;
volatile int32_t x376 = INT32_MIN;
int32_t t95 = -22317616;
int16_t x385 = 0;
static volatile uint8_t x388 = UINT8_MAX;
volatile int32_t t96 = 790864194;
int16_t x390 = 3800;
int8_t x393 = INT8_MAX;
int32_t x399 = -1;
volatile int64_t x400 = INT64_MIN;


void f0(void) {
	volatile int8_t x1 = -11;
	int32_t x2 = INT32_MIN;
	int8_t x3 = -1;
	int32_t x4 = 238061824;
	int32_t t0 = -20144328;

	t0 = (((x1&x2)&x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = UINT8_MAX;
	int64_t x7 = INT64_MIN;
	uint16_t x8 = 30U;
	int32_t t1 = 426839;

	t1 = (((x5&x6)&x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MAX;
	int8_t x11 = INT8_MIN;
	int32_t t2 = 3145;

	t2 = (((x9&x10)&x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 1U;
	int8_t x14 = INT8_MAX;
	int32_t x16 = INT32_MIN;
	int32_t t3 = -463;

	t3 = (((x13&x14)&x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x18 = UINT64_MAX;
	static int64_t x20 = INT64_MIN;
	volatile int32_t t4 = 39993;

	t4 = (((x17&x18)&x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x22 = 14U;
	uint16_t x24 = 2116U;
	int32_t t5 = -72569098;

	t5 = (((x21&x22)&x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = -6;
	static volatile int64_t x26 = INT64_MAX;
	int32_t x27 = INT32_MIN;
	volatile uint16_t x28 = UINT16_MAX;
	volatile int32_t t6 = 211154;

	t6 = (((x25&x26)&x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t x29 = 161624781835LLU;
	volatile int64_t x30 = INT64_MAX;
	static uint8_t x31 = 1U;
	uint32_t x32 = 23826U;
	static volatile int32_t t7 = -157400;

	t7 = (((x29&x30)&x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = -16;
	int32_t x34 = INT32_MAX;
	volatile int32_t x35 = INT32_MIN;
	static int32_t t8 = -404959;

	t8 = (((x33&x34)&x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	uint32_t x38 = 89062U;
	volatile int32_t x40 = INT32_MIN;

	t9 = (((x37&x38)&x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = INT8_MAX;
	int32_t x43 = -1;
	static int32_t t10 = 394687929;

	t10 = (((x41&x42)&x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = INT64_MIN;
	int32_t x46 = INT32_MIN;
	uint64_t x47 = UINT64_MAX;
	volatile int32_t t11 = -6134;

	t11 = (((x45&x46)&x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x49 = 57U;
	int8_t x50 = -1;
	int64_t x51 = -1LL;
	int32_t t12 = -11933;

	t12 = (((x49&x50)&x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	int16_t x54 = INT16_MAX;
	int8_t x56 = INT8_MIN;
	int32_t t13 = -8099;

	t13 = (((x53&x54)&x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -53;
	int8_t x59 = 0;
	int64_t x60 = INT64_MIN;
	volatile int32_t t14 = 9064;

	t14 = (((x57&x58)&x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x63 = INT8_MIN;
	static volatile int8_t x64 = -1;

	t15 = (((x61&x62)&x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 1793U;
	int32_t x66 = INT32_MIN;
	int64_t x67 = INT64_MAX;
	static volatile int8_t x68 = INT8_MIN;
	volatile int32_t t16 = -12723629;

	t16 = (((x65&x66)&x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int64_t x69 = -1LL;
	static int16_t x70 = INT16_MAX;
	uint64_t x72 = 6297306770LLU;
	int32_t t17 = -31137;

	t17 = (((x69&x70)&x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = UINT8_MAX;
	volatile uint32_t x74 = UINT32_MAX;
	int16_t x75 = INT16_MIN;
	int64_t x76 = INT64_MAX;
	volatile int32_t t18 = -27780514;

	t18 = (((x73&x74)&x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = INT8_MAX;
	int32_t x78 = -1;
	uint64_t x80 = 1531379247LLU;
	int32_t t19 = -1782;

	t19 = (((x77&x78)&x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MIN;
	uint16_t x82 = 11U;
	volatile int16_t x83 = -2389;
	int32_t x84 = -219;
	volatile int32_t t20 = -1303897;

	t20 = (((x81&x82)&x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x85 = 45LLU;
	uint64_t x86 = 2LLU;
	int64_t x87 = INT64_MIN;
	int32_t x88 = INT32_MAX;

	t21 = (((x85&x86)&x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x89 = 414U;
	int8_t x90 = INT8_MIN;
	uint8_t x92 = 14U;
	static volatile int32_t t22 = -409;

	t22 = (((x89&x90)&x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MAX;
	uint16_t x94 = 29U;
	volatile int8_t x95 = INT8_MIN;
	int32_t t23 = 1;

	t23 = (((x93&x94)&x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 16U;
	int32_t x98 = -1;
	uint8_t x99 = UINT8_MAX;
	int8_t x100 = INT8_MIN;
	volatile int32_t t24 = 1;

	t24 = (((x97&x98)&x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x102 = INT16_MIN;
	int8_t x103 = 0;
	int64_t x104 = -1LL;

	t25 = (((x101&x102)&x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -571;
	int32_t x106 = INT32_MIN;
	int64_t x107 = INT64_MAX;
	uint32_t x108 = 40U;
	static volatile int32_t t26 = -1;

	t26 = (((x105&x106)&x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MAX;
	int8_t x110 = -1;
	uint8_t x111 = UINT8_MAX;
	volatile int32_t x112 = 2;

	t27 = (((x109&x110)&x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = 1781312157616202473LL;
	static volatile uint64_t x115 = UINT64_MAX;
	volatile int32_t t28 = 2992740;

	t28 = (((x113&x114)&x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -133542121;
	int8_t x118 = -1;
	int8_t x119 = 1;
	static int16_t x120 = INT16_MIN;
	volatile int32_t t29 = -2299916;

	t29 = (((x117&x118)&x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -3;
	static volatile int64_t x122 = -45914278219114LL;
	uint32_t x123 = UINT32_MAX;
	volatile uint8_t x124 = UINT8_MAX;
	int32_t t30 = 206000;

	t30 = (((x121&x122)&x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x125 = 6832193U;
	int32_t x126 = -556;
	static uint64_t x128 = UINT64_MAX;
	int32_t t31 = 314283;

	t31 = (((x125&x126)&x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	int16_t x130 = 13;
	static int64_t x131 = -1LL;
	uint8_t x132 = UINT8_MAX;

	t32 = (((x129&x130)&x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x133 = UINT8_MAX;
	static uint8_t x134 = 3U;
	volatile uint8_t x135 = 39U;
	static uint8_t x136 = 6U;
	int32_t t33 = 2433;

	t33 = (((x133&x134)&x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x139 = UINT32_MAX;
	uint32_t x140 = UINT32_MAX;
	volatile int32_t t34 = 3030;

	t34 = (((x137&x138)&x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	uint8_t x142 = UINT8_MAX;
	uint32_t x143 = UINT32_MAX;
	volatile uint64_t x144 = 24578929267655518LLU;
	volatile int32_t t35 = -2047071;

	t35 = (((x141&x142)&x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = 0U;
	volatile uint16_t x146 = 10U;
	int32_t x147 = INT32_MIN;
	int32_t t36 = 85727380;

	t36 = (((x145&x146)&x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x149 = 378303853726LLU;
	uint32_t x150 = 128334U;
	volatile uint8_t x151 = 54U;
	int32_t x152 = 12590;
	volatile int32_t t37 = -1683;

	t37 = (((x149&x150)&x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x153 = 52778;
	int64_t x154 = INT64_MAX;
	int64_t x155 = INT64_MIN;
	volatile int32_t t38 = 121145;

	t38 = (((x153&x154)&x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x157 = UINT16_MAX;
	volatile uint16_t x158 = 5675U;
	static int64_t x159 = -1LL;
	int32_t t39 = 3730;

	t39 = (((x157&x158)&x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x163 = INT8_MIN;
	volatile int32_t t40 = 4;

	t40 = (((x161&x162)&x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x166 = -1;
	volatile int16_t x167 = 2562;
	static int32_t x168 = -1;
	volatile int32_t t41 = 8083;

	t41 = (((x165&x166)&x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x169 = 96U;
	int64_t x170 = INT64_MAX;
	static volatile uint8_t x171 = 53U;
	int8_t x172 = INT8_MIN;
	int32_t t42 = -48;

	t42 = (((x169&x170)&x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x173 = UINT32_MAX;
	uint8_t x174 = 5U;
	int16_t x175 = -6;
	int32_t x176 = 13417;
	int32_t t43 = 463;

	t43 = (((x173&x174)&x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = UINT8_MAX;
	uint32_t x178 = 26U;
	int64_t x179 = INT64_MAX;
	int64_t x180 = INT64_MAX;
	int32_t t44 = -1;

	t44 = (((x177&x178)&x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = UINT16_MAX;
	uint32_t x182 = UINT32_MAX;
	int64_t x183 = INT64_MAX;
	int8_t x184 = INT8_MAX;
	static volatile int32_t t45 = -57485665;

	t45 = (((x181&x182)&x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x185 = UINT64_MAX;
	static int32_t x186 = 478;
	uint32_t x187 = 1U;
	volatile int64_t x188 = -1LL;

	t46 = (((x185&x186)&x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 1;
	uint8_t x190 = 47U;
	int8_t x191 = INT8_MIN;
	uint64_t x192 = 1320930789628LLU;
	int32_t t47 = 81398;

	t47 = (((x189&x190)&x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -1;
	uint16_t x194 = UINT16_MAX;
	static int32_t x195 = -1;
	int32_t t48 = -3880;

	t48 = (((x193&x194)&x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = 0;
	uint64_t x198 = 1LLU;
	uint16_t x200 = 4U;
	static int32_t t49 = 2664;

	t49 = (((x197&x198)&x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = 124;
	uint64_t x202 = 32053551462LLU;
	volatile int32_t x203 = INT32_MIN;
	int8_t x204 = INT8_MAX;
	static int32_t t50 = -713;

	t50 = (((x201&x202)&x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MAX;
	static uint16_t x206 = 7U;
	static int64_t x207 = INT64_MIN;
	int8_t x208 = INT8_MAX;
	int32_t t51 = -4343;

	t51 = (((x205&x206)&x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x210 = -47;
	static uint8_t x211 = 9U;
	volatile int16_t x212 = INT16_MIN;
	int32_t t52 = 2;

	t52 = (((x209&x210)&x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	uint8_t x214 = UINT8_MAX;
	int16_t x216 = 2;
	int32_t t53 = -1;

	t53 = (((x213&x214)&x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	int8_t x218 = INT8_MIN;
	int16_t x219 = INT16_MAX;
	int64_t x220 = 291813811LL;
	int32_t t54 = -2727250;

	t54 = (((x217&x218)&x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x222 = -17597583779679049LL;
	uint16_t x223 = 4U;
	int64_t x224 = INT64_MIN;
	volatile int32_t t55 = 38;

	t55 = (((x221&x222)&x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = UINT8_MAX;
	static int8_t x226 = -1;
	uint16_t x227 = UINT16_MAX;
	volatile int64_t x228 = -4218LL;
	static int32_t t56 = 25683;

	t56 = (((x225&x226)&x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MIN;
	int8_t x230 = INT8_MIN;
	static volatile int16_t x231 = INT16_MAX;
	static uint16_t x232 = 21779U;
	int32_t t57 = 1327;

	t57 = (((x229&x230)&x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -26733;
	static uint8_t x234 = 6U;
	uint8_t x235 = 88U;
	int16_t x236 = -27;
	static int32_t t58 = 94;

	t58 = (((x233&x234)&x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = 13568U;
	int8_t x238 = INT8_MIN;
	static int64_t x240 = 3856LL;
	int32_t t59 = 145929783;

	t59 = (((x237&x238)&x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x242 = INT32_MAX;
	uint8_t x243 = UINT8_MAX;
	uint16_t x244 = 1203U;

	t60 = (((x241&x242)&x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x245 = -41LL;
	int16_t x247 = -10979;
	int16_t x248 = -1;
	volatile int32_t t61 = 36;

	t61 = (((x245&x246)&x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 70U;
	int16_t x250 = INT16_MIN;
	volatile uint8_t x252 = UINT8_MAX;
	volatile int32_t t62 = 48;

	t62 = (((x249&x250)&x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x253 = -59432814151LL;
	static volatile int16_t x254 = -885;
	uint32_t x255 = 607513U;
	int32_t t63 = 339022547;

	t63 = (((x253&x254)&x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	int16_t x258 = INT16_MIN;
	volatile uint16_t x259 = 4961U;
	static uint16_t x260 = 24U;
	volatile int32_t t64 = -507;

	t64 = (((x257&x258)&x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 3930804199994LLU;
	uint64_t x263 = UINT64_MAX;
	static int32_t t65 = -26113;

	t65 = (((x261&x262)&x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -3;
	static uint8_t x266 = 15U;
	uint8_t x267 = UINT8_MAX;
	uint32_t x268 = UINT32_MAX;
	static int32_t t66 = 103362704;

	t66 = (((x265&x266)&x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MIN;
	int64_t x270 = INT64_MIN;
	int8_t x271 = INT8_MIN;
	int32_t x272 = -7;
	static volatile int32_t t67 = 2;

	t67 = (((x269&x270)&x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x273 = 110U;
	volatile int32_t x274 = -1;
	uint8_t x275 = 2U;
	static volatile int32_t t68 = 13770;

	t68 = (((x273&x274)&x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x278 = 124U;
	int8_t x279 = INT8_MIN;
	static uint8_t x280 = 26U;
	static int32_t t69 = -2178;

	t69 = (((x277&x278)&x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x282 = INT16_MIN;
	static int8_t x283 = INT8_MAX;
	static uint64_t x284 = 180995810983853399LLU;

	t70 = (((x281&x282)&x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x286 = INT16_MAX;
	static int64_t x287 = 570654642949739843LL;
	volatile uint8_t x288 = 1U;
	int32_t t71 = 6708439;

	t71 = (((x285&x286)&x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = INT32_MAX;
	int16_t x292 = INT16_MIN;

	t72 = (((x289&x290)&x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x294 = INT32_MIN;
	volatile uint32_t x296 = 191772443U;
	volatile int32_t t73 = 451982;

	t73 = (((x293&x294)&x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x297 = -1;
	volatile int16_t x298 = -1;
	static uint16_t x300 = UINT16_MAX;

	t74 = (((x297&x298)&x299)==x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 12121058LLU;
	uint8_t x302 = UINT8_MAX;
	int32_t x303 = -1;
	static int64_t x304 = INT64_MAX;
	int32_t t75 = 267;

	t75 = (((x301&x302)&x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x306 = -1;
	int8_t x307 = INT8_MIN;
	int16_t x308 = -1;

	t76 = (((x305&x306)&x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x309 = INT8_MAX;
	int32_t x310 = -1172;
	int32_t x311 = 25916;
	static int32_t t77 = 1282706;

	t77 = (((x309&x310)&x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = INT64_MIN;
	int8_t x314 = -1;
	int16_t x315 = INT16_MIN;
	static int32_t x316 = INT32_MIN;
	volatile int32_t t78 = -27008416;

	t78 = (((x313&x314)&x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x318 = -1;
	int8_t x319 = INT8_MIN;
	static int64_t x320 = -194703915160LL;
	int32_t t79 = 2;

	t79 = (((x317&x318)&x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x321 = -1821025248476LL;
	volatile uint32_t x322 = 943320U;
	static int16_t x323 = INT16_MIN;
	int16_t x324 = 733;

	t80 = (((x321&x322)&x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	uint32_t x326 = 30132602U;
	volatile uint64_t x328 = 9027206466035LLU;
	int32_t t81 = -5733;

	t81 = (((x325&x326)&x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -9236;
	int32_t x330 = INT32_MAX;
	int16_t x332 = INT16_MIN;
	volatile int32_t t82 = 785;

	t82 = (((x329&x330)&x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x334 = 0U;
	uint64_t x335 = UINT64_MAX;
	volatile uint8_t x336 = UINT8_MAX;
	volatile int32_t t83 = -87799523;

	t83 = (((x333&x334)&x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -1;
	int8_t x338 = INT8_MIN;
	uint32_t x339 = 10U;
	int32_t x340 = INT32_MIN;
	volatile int32_t t84 = -5;

	t84 = (((x337&x338)&x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = 30651423467102891LL;
	static uint32_t x342 = UINT32_MAX;
	volatile int32_t x343 = -1;
	uint64_t x344 = UINT64_MAX;
	int32_t t85 = 31751491;

	t85 = (((x341&x342)&x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x346 = 28;
	uint16_t x347 = 7U;
	int8_t x348 = -1;
	volatile int32_t t86 = 127748;

	t86 = (((x345&x346)&x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	int32_t x350 = INT32_MAX;
	uint64_t x351 = UINT64_MAX;
	uint8_t x352 = UINT8_MAX;

	t87 = (((x349&x350)&x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint16_t x353 = 3282U;
	int64_t x354 = -1LL;
	int32_t x355 = 335940;
	volatile int64_t x356 = 986437953LL;

	t88 = (((x353&x354)&x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = -367593527972LL;
	static int64_t x358 = INT64_MIN;
	static volatile int8_t x360 = -12;
	int32_t t89 = -226;

	t89 = (((x357&x358)&x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x362 = -1263;
	static int8_t x363 = 2;
	volatile int16_t x364 = 4638;

	t90 = (((x361&x362)&x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = UINT32_MAX;
	volatile int64_t x368 = 0LL;
	int32_t t91 = 4784959;

	t91 = (((x365&x366)&x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x371 = -1;
	static volatile uint16_t x372 = 9770U;
	int32_t t92 = 0;

	t92 = (((x369&x370)&x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x373 = 171U;
	static int16_t x374 = INT16_MIN;
	int32_t t93 = -53262;

	t93 = (((x373&x374)&x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x377 = INT8_MAX;
	uint64_t x378 = 4688282LLU;
	uint16_t x379 = UINT16_MAX;
	uint16_t x380 = 1902U;
	int32_t t94 = 2445373;

	t94 = (((x377&x378)&x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 8613045864LLU;
	static int8_t x382 = -1;
	volatile int32_t x383 = INT32_MAX;
	static volatile int16_t x384 = INT16_MIN;

	t95 = (((x381&x382)&x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x386 = INT16_MIN;
	int32_t x387 = INT32_MIN;

	t96 = (((x385&x386)&x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = 59U;
	volatile int32_t x391 = INT32_MAX;
	int16_t x392 = -1;
	int32_t t97 = 1;

	t97 = (((x389&x390)&x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x394 = -165;
	int64_t x395 = -1LL;
	volatile int8_t x396 = -1;
	volatile int32_t t98 = -14198188;

	t98 = (((x393&x394)&x395)==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	int8_t x398 = -5;
	int32_t t99 = 254334;

	t99 = (((x397&x398)&x399)==x400);

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

