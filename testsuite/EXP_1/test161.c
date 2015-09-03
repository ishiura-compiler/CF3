#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint64_t t0 = 31719LLU;
int32_t x12 = INT32_MIN;
int64_t t1 = 561918974LL;
static volatile uint32_t x16 = UINT32_MAX;
uint8_t x19 = 1U;
int64_t x21 = INT64_MIN;
static int64_t t4 = -284919234824218758LL;
volatile int32_t x25 = INT32_MIN;
volatile int32_t x26 = INT32_MAX;
static int64_t x28 = 334062894380745012LL;
static volatile int64_t x31 = 18467929810224815LL;
static int8_t x33 = INT8_MIN;
int16_t x40 = -1;
static uint32_t x50 = 11856268U;
int32_t x54 = INT32_MAX;
volatile uint32_t x63 = 98U;
int16_t x73 = 16020;
uint32_t x79 = 3U;
uint32_t t17 = 1U;
static int16_t x81 = INT16_MAX;
static uint16_t x87 = 23730U;
int64_t x88 = -1LL;
int16_t x90 = INT16_MIN;
uint64_t x93 = UINT64_MAX;
int64_t x99 = -1LL;
uint32_t x101 = UINT32_MAX;
static volatile int64_t t23 = -514043707715LL;
int8_t x109 = -9;
uint8_t x115 = 1U;
uint64_t x126 = 18696LLU;
static uint16_t x127 = 1025U;
static int64_t x129 = -16967735556LL;
int32_t x131 = -433823518;
uint8_t x133 = UINT8_MAX;
uint16_t x136 = 3614U;
int32_t t29 = 146;
static uint64_t t30 = 1181973LLU;
int32_t x146 = INT32_MAX;
uint16_t x147 = UINT16_MAX;
int32_t x148 = INT32_MIN;
volatile int64_t t33 = -56LL;
volatile int32_t x165 = INT32_MIN;
int8_t x170 = -9;
int16_t x175 = INT16_MAX;
int64_t x180 = INT64_MIN;
volatile int64_t t40 = -2228950685281488059LL;
uint32_t x182 = UINT32_MAX;
volatile int64_t x183 = 17249LL;
int16_t x188 = 479;
uint16_t x195 = 995U;
static int32_t x206 = -178;
int8_t x212 = INT8_MIN;
uint32_t x216 = UINT32_MAX;
int16_t x217 = 1;
int32_t x218 = INT32_MIN;
int64_t x219 = INT64_MIN;
uint64_t x225 = 6043144904933649LLU;
volatile int8_t x228 = 12;
uint64_t t51 = 16LLU;
static int16_t x236 = INT16_MIN;
uint64_t x240 = 242031186619048353LLU;
static volatile uint64_t t55 = 8LLU;
uint8_t x246 = UINT8_MAX;
volatile int32_t x258 = -3341;
static uint8_t x265 = 16U;
int64_t x271 = INT64_MIN;
int32_t x284 = -1;
static uint16_t x288 = 7091U;
static volatile uint16_t x293 = UINT16_MAX;
uint64_t x294 = UINT64_MAX;
volatile int16_t x296 = -253;
uint32_t x300 = 9765364U;
uint32_t x304 = 3U;
volatile int64_t t65 = 598600966661553818LL;
int16_t x311 = -1;
static int32_t x312 = INT32_MIN;
int32_t x314 = INT32_MAX;
int32_t x316 = INT32_MAX;
volatile int64_t x323 = -85673222818849123LL;
uint32_t x324 = 1121U;
static uint64_t x328 = 7504555702287288LLU;
int64_t x331 = 170380LL;
int32_t x332 = INT32_MIN;
int64_t x338 = INT64_MIN;
int16_t x343 = INT16_MIN;
int16_t x354 = INT16_MIN;
int64_t x356 = INT64_MIN;
int8_t x364 = INT8_MAX;
int32_t t79 = -4985;
uint32_t x367 = UINT32_MAX;
static uint8_t x369 = 19U;
int8_t x370 = 62;
static int32_t x376 = INT32_MIN;
int8_t x382 = -5;
volatile uint64_t x408 = UINT64_MAX;
int64_t x409 = -1LL;
static uint64_t x412 = 52543LLU;
volatile uint64_t t90 = 401538565767641804LLU;
int64_t x424 = -1LL;
volatile uint64_t t91 = 12293205LLU;
int8_t x427 = -1;
volatile uint64_t t92 = 2229859616921LLU;
uint8_t x429 = 4U;
uint64_t t94 = 5810418LLU;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	int64_t x2 = INT64_MAX;
	int32_t x3 = 99908347;
	uint64_t x4 = UINT64_MAX;

	t0 = (((x1+x2)^x3)%x4);

	if (t0 != 9223372034607383812LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = INT16_MAX;
	static volatile uint32_t x10 = 1396U;
	static int64_t x11 = INT64_MIN;

	t1 = (((x9+x10)^x11)%x12);

	if (t1 != -2147449485LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MAX;
	volatile int32_t x14 = -1;
	int32_t x15 = INT32_MAX;
	static uint32_t t2 = 62579U;

	t2 = (((x13+x14)^x15)%x16);

	if (t2 != 2147450881U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -1;
	int64_t x18 = -1097817040LL;
	uint64_t x20 = 23008587029805LLU;
	static uint64_t t3 = 6386707157624274905LLU;

	t3 = (((x17+x18)^x19)%x20);

	if (t3 != 567445082509LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x22 = 454U;
	static int8_t x23 = INT8_MAX;
	volatile int64_t x24 = INT64_MIN;

	t4 = (((x21+x22)^x23)%x24);

	if (t4 != -9223372036854775367LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x27 = INT8_MIN;
	int64_t t5 = 104887LL;

	t5 = (((x25+x26)^x27)%x28);

	if (t5 != 127LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x29 = UINT16_MAX;
	volatile uint32_t x30 = 71U;
	static volatile int64_t x32 = -1LL;
	static volatile int64_t t6 = 37886LL;

	t6 = (((x29+x30)^x31)%x32);

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint32_t x34 = UINT32_MAX;
	int64_t x35 = -320LL;
	uint64_t x36 = UINT64_MAX;
	static uint64_t t7 = 826410LLU;

	t7 = (((x33+x34)^x35)%x36);

	if (t7 != 18446744069414584767LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x37 = -3;
	volatile uint64_t x38 = 2LLU;
	int8_t x39 = INT8_MAX;
	uint64_t t8 = 31572327223LLU;

	t8 = (((x37+x38)^x39)%x40);

	if (t8 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = UINT16_MAX;
	int16_t x42 = INT16_MIN;
	static uint64_t x43 = 7564722795493296LLU;
	uint16_t x44 = 3721U;
	volatile uint64_t t9 = 20335LLU;

	t9 = (((x41+x42)^x43)%x44);

	if (t9 != 2698LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x49 = 4727493U;
	int32_t x51 = -6265313;
	static int64_t x52 = 26190LL;
	volatile int64_t t10 = 1184456511992LL;

	t10 = (((x49+x50)^x51)%x52);

	if (t10 != 20992LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x53 = INT64_MIN;
	int8_t x55 = 1;
	int16_t x56 = 147;
	int64_t t11 = -402398708702233838LL;

	t11 = (((x53+x54)^x55)%x56);

	if (t11 != -8LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = 0;
	int8_t x58 = INT8_MIN;
	static int64_t x59 = -1LL;
	int64_t x60 = -1LL;
	static volatile int64_t t12 = -16546134LL;

	t12 = (((x57+x58)^x59)%x60);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MIN;
	static int64_t x62 = -1LL;
	int64_t x64 = INT64_MIN;
	int64_t t13 = 1365185LL;

	t13 = (((x61+x62)^x63)%x64);

	if (t13 != -227LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x65 = 7930LLU;
	static int8_t x66 = INT8_MAX;
	int32_t x67 = INT32_MAX;
	volatile int16_t x68 = -1;
	volatile uint64_t t14 = 220236158LLU;

	t14 = (((x65+x66)^x67)%x68);

	if (t14 != 2147475590LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = 2U;
	volatile uint64_t x70 = UINT64_MAX;
	static int8_t x71 = -1;
	int64_t x72 = -14LL;
	volatile uint64_t t15 = 347453840886718397LLU;

	t15 = (((x69+x70)^x71)%x72);

	if (t15 != 12LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x74 = -1;
	int16_t x75 = INT16_MIN;
	static int8_t x76 = 5;
	int32_t t16 = -405279;

	t16 = (((x73+x74)^x75)%x76);

	if (t16 != -4) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x77 = 24U;
	int32_t x78 = 1169639;
	volatile int8_t x80 = -5;

	t17 = (((x77+x78)^x79)%x80);

	if (t17 != 1169660U) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x82 = -1;
	int32_t x83 = INT32_MIN;
	volatile int64_t x84 = INT64_MIN;
	static int64_t t18 = 7650189800LL;

	t18 = (((x81+x82)^x83)%x84);

	if (t18 != -2147450882LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x85 = 12422U;
	static volatile int8_t x86 = -1;
	volatile int64_t t19 = -3075026887736018LL;

	t19 = (((x85+x86)^x87)%x88);

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x89 = 30775U;
	volatile uint64_t x91 = 348135387246931614LLU;
	volatile uint16_t x92 = UINT16_MAX;
	static volatile uint64_t t20 = 200595LLU;

	t20 = (((x89+x90)^x91)%x92);

	if (t20 != 58415LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x94 = INT8_MAX;
	uint32_t x95 = 294U;
	static uint16_t x96 = 5964U;
	uint64_t t21 = 28719LLU;

	t21 = (((x93+x94)^x95)%x96);

	if (t21 != 344LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = 45;
	uint32_t x98 = 162U;
	volatile int16_t x100 = INT16_MIN;
	volatile int64_t t22 = 3195802990353435800LL;

	t22 = (((x97+x98)^x99)%x100);

	if (t22 != -208LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x102 = -1;
	static int64_t x103 = INT64_MIN;
	static int16_t x104 = -1;

	t23 = (((x101+x102)^x103)%x104);

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x105 = 4U;
	uint8_t x106 = 0U;
	volatile int32_t x107 = INT32_MAX;
	int16_t x108 = INT16_MAX;
	uint32_t t24 = 1U;

	t24 = (((x105+x106)^x107)%x108);

	if (t24 != 32764U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x110 = INT64_MAX;
	static int16_t x111 = -150;
	uint16_t x112 = UINT16_MAX;
	static int64_t t25 = 17LL;

	t25 = (((x109+x110)^x111)%x112);

	if (t25 != -32612LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x113 = -938;
	static volatile int32_t x114 = -1;
	int64_t x116 = INT64_MAX;
	volatile int64_t t26 = 3183851551012949LL;

	t26 = (((x113+x114)^x115)%x116);

	if (t26 != -940LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x125 = 0U;
	static int16_t x128 = INT16_MIN;
	volatile uint64_t t27 = 989494771996991635LLU;

	t27 = (((x125+x126)^x127)%x128);

	if (t27 != 19721LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x130 = 55152855LLU;
	uint8_t x132 = 11U;
	static uint64_t t28 = 5898LLU;

	t28 = (((x129+x130)^x131)%x132);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x134 = 10U;
	uint16_t x135 = 14147U;

	t29 = (((x133+x134)^x135)%x136);

	if (t29 != 3056) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = INT16_MIN;
	int16_t x138 = INT16_MIN;
	static uint32_t x139 = UINT32_MAX;
	static uint64_t x140 = 584LLU;

	t30 = (((x137+x138)^x139)%x140);

	if (t30 != 127LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x141 = INT32_MIN;
	int64_t x142 = -1LL;
	uint32_t x143 = 9898U;
	volatile uint64_t x144 = UINT64_MAX;
	static uint64_t t31 = 18375981346363LLU;

	t31 = (((x141+x142)^x143)%x144);

	if (t31 != 18446744071562058069LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = INT8_MIN;
	static volatile int32_t t32 = 180;

	t32 = (((x145+x146)^x147)%x148);

	if (t32 != 2147418240) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x149 = 10U;
	static volatile uint16_t x150 = 13U;
	static volatile int64_t x151 = -1867271041LL;
	static uint32_t x152 = 3221135U;

	t33 = (((x149+x150)^x151)%x152);

	if (t33 != -2233899LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = INT8_MIN;
	int32_t x154 = -6160;
	uint16_t x155 = 2111U;
	int8_t x156 = 1;
	volatile int32_t t34 = 4466;

	t34 = (((x153+x154)^x155)%x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x157 = -19336092253LL;
	uint8_t x158 = 7U;
	uint16_t x159 = 13183U;
	int16_t x160 = -1;
	static int64_t t35 = 11455643LL;

	t35 = (((x157+x158)^x159)%x160);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x161 = -1;
	volatile uint16_t x162 = 16546U;
	volatile int16_t x163 = -1;
	static uint16_t x164 = 5U;
	volatile int32_t t36 = -3659790;

	t36 = (((x161+x162)^x163)%x164);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x166 = UINT16_MAX;
	static int8_t x167 = INT8_MIN;
	static int64_t x168 = -1LL;
	volatile int64_t t37 = -1035543494153299144LL;

	t37 = (((x165+x166)^x167)%x168);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x169 = -1;
	int64_t x171 = INT64_MAX;
	uint64_t x172 = 29628522088685792LLU;
	uint64_t t38 = 527970417LLU;

	t38 = (((x169+x170)^x171)%x172);

	if (t38 != 8901667273494505LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x173 = INT16_MAX;
	uint8_t x174 = 115U;
	int32_t x176 = -1;
	volatile int32_t t39 = 38100138;

	t39 = (((x173+x174)^x175)%x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = INT8_MIN;
	int64_t x178 = -1LL;
	int16_t x179 = -1;

	t40 = (((x177+x178)^x179)%x180);

	if (t40 != 128LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = -1;
	volatile uint16_t x184 = 6U;
	volatile int64_t t41 = 832095694LL;

	t41 = (((x181+x182)^x183)%x184);

	if (t41 != 5LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = INT8_MIN;
	uint8_t x186 = 0U;
	uint32_t x187 = 51U;
	volatile uint32_t t42 = 110773U;

	t42 = (((x185+x186)^x187)%x188);

	if (t42 != 307U) { NG(); } else { ; }
	
}

void f43(void) {
	static uint16_t x193 = 22537U;
	int8_t x194 = -1;
	uint32_t x196 = UINT32_MAX;
	uint32_t t43 = 426461U;

	t43 = (((x193+x194)^x195)%x196);

	if (t43 != 23531U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x197 = 1U;
	uint64_t x198 = UINT64_MAX;
	uint32_t x199 = 258046U;
	static volatile int8_t x200 = INT8_MIN;
	volatile uint64_t t44 = 3800512303957555694LLU;

	t44 = (((x197+x198)^x199)%x200);

	if (t44 != 258046LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x201 = -1LL;
	uint64_t x202 = 3LLU;
	static int16_t x203 = INT16_MIN;
	uint32_t x204 = UINT32_MAX;
	volatile uint64_t t45 = 1669816LLU;

	t45 = (((x201+x202)^x203)%x204);

	if (t45 != 4294934530LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x205 = 127U;
	uint64_t x207 = 54211520LLU;
	int16_t x208 = -1;
	static uint64_t t46 = 641868LLU;

	t46 = (((x205+x206)^x207)%x208);

	if (t46 != 4240755725LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x209 = 660LLU;
	static volatile int16_t x210 = INT16_MIN;
	uint16_t x211 = 114U;
	volatile uint64_t t47 = 541122023362495LLU;

	t47 = (((x209+x210)^x211)%x212);

	if (t47 != 18446744073709519590LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x213 = 7710940460239LLU;
	int64_t x214 = -106941997902872LL;
	volatile int32_t x215 = INT32_MAX;
	volatile uint64_t t48 = 4179547192093LLU;

	t48 = (((x213+x214)^x215)%x216);

	if (t48 != 2280496392LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x220 = -18193443LL;
	volatile int64_t t49 = -298841050330LL;

	t49 = (((x217+x218)^x219)%x220);

	if (t49 != 984664LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x221 = INT16_MIN;
	uint32_t x222 = 1265U;
	volatile uint8_t x223 = UINT8_MAX;
	int64_t x224 = -1LL;
	int64_t t50 = 97748148LL;

	t50 = (((x221+x222)^x223)%x224);

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x226 = 18;
	static int16_t x227 = INT16_MAX;

	t51 = (((x225+x226)^x227)%x228);

	if (t51 != 4LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x229 = UINT32_MAX;
	int64_t x230 = INT64_MIN;
	uint16_t x231 = 66U;
	int16_t x232 = -1;
	static int64_t t52 = -694LL;

	t52 = (((x229+x230)^x231)%x232);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x233 = -1;
	int32_t x234 = INT32_MAX;
	int16_t x235 = 125;
	int32_t t53 = 19;

	t53 = (((x233+x234)^x235)%x236);

	if (t53 != 32643) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x237 = 81U;
	volatile int8_t x238 = -49;
	volatile uint16_t x239 = UINT16_MAX;
	uint64_t t54 = 24369364832005254LLU;

	t54 = (((x237+x238)^x239)%x240);

	if (t54 != 65503LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x241 = -165;
	uint8_t x242 = 1U;
	uint64_t x243 = UINT64_MAX;
	static int32_t x244 = INT32_MIN;

	t55 = (((x241+x242)^x243)%x244);

	if (t55 != 163LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x245 = 15U;
	uint32_t x247 = UINT32_MAX;
	int8_t x248 = -1;
	uint32_t t56 = 77606U;

	t56 = (((x245+x246)^x247)%x248);

	if (t56 != 4294967025U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x249 = -1;
	int64_t x250 = -5627927357170748LL;
	volatile int16_t x251 = INT16_MAX;
	uint32_t x252 = UINT32_MAX;
	int64_t t57 = -4707LL;

	t57 = (((x249+x250)^x251)%x252);

	if (t57 != -4077279829LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x257 = 0;
	volatile int16_t x259 = -5;
	volatile uint64_t x260 = 194790LLU;
	volatile uint64_t t58 = 246311086LLU;

	t58 = (((x257+x258)^x259)%x260);

	if (t58 != 3336LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x266 = 0LL;
	int8_t x267 = 0;
	static uint64_t x268 = 290766125028054LLU;
	uint64_t t59 = 81817586501146LLU;

	t59 = (((x265+x266)^x267)%x268);

	if (t59 != 16LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x269 = 3543LLU;
	int32_t x270 = INT32_MAX;
	int16_t x272 = -29;
	volatile uint64_t t60 = 1039LLU;

	t60 = (((x269+x270)^x271)%x272);

	if (t60 != 9223372039002262998LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x281 = -1;
	volatile uint64_t x282 = 684351734094202LLU;
	int32_t x283 = -635774;
	uint64_t t61 = 1728711265387480299LLU;

	t61 = (((x281+x282)^x283)%x284);

	if (t61 != 18446059721974961659LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x285 = -426;
	uint8_t x286 = UINT8_MAX;
	int8_t x287 = 1;
	int32_t t62 = 904813164;

	t62 = (((x285+x286)^x287)%x288);

	if (t62 != -172) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x295 = UINT64_MAX;
	volatile uint64_t t63 = 2LLU;

	t63 = (((x293+x294)^x295)%x296);

	if (t63 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x297 = 116603U;
	int64_t x298 = INT64_MIN;
	int16_t x299 = 1;
	int64_t t64 = 3160526409LL;

	t64 = (((x297+x298)^x299)%x300);

	if (t64 != -6702890LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x301 = -12508840LL;
	volatile int16_t x302 = INT16_MIN;
	volatile uint32_t x303 = UINT32_MAX;

	t65 = (((x301+x302)^x303)%x304);

	if (t65 != -2LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x305 = INT32_MAX;
	volatile int32_t x306 = INT32_MIN;
	static int8_t x307 = INT8_MIN;
	int8_t x308 = -1;
	volatile int32_t t66 = 4486446;

	t66 = (((x305+x306)^x307)%x308);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x309 = -1;
	int16_t x310 = INT16_MIN;
	int32_t t67 = -991047;

	t67 = (((x309+x310)^x311)%x312);

	if (t67 != 32768) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x313 = 451611933LLU;
	int64_t x315 = INT64_MIN;
	uint64_t t68 = 204482003LLU;

	t68 = (((x313+x314)^x315)%x316);

	if (t68 != 451611935LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x321 = INT64_MAX;
	int32_t x322 = -54108015;
	int64_t t69 = -26097445LL;

	t69 = (((x321+x322)^x323)%x324);

	if (t69 != -1065LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x325 = INT16_MAX;
	uint8_t x326 = 63U;
	int32_t x327 = -1;
	uint64_t t70 = 54290688493LLU;

	t70 = (((x325+x326)^x327)%x328);

	if (t70 != 546157487364881LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x329 = 1;
	static int64_t x330 = -1LL;
	int64_t t71 = -238007253925604195LL;

	t71 = (((x329+x330)^x331)%x332);

	if (t71 != 170380LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x333 = 6382LL;
	uint8_t x334 = UINT8_MAX;
	int64_t x335 = 209596903397LL;
	static volatile uint8_t x336 = 22U;
	int64_t t72 = -18443LL;

	t72 = (((x333+x334)^x335)%x336);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x337 = 3U;
	uint64_t x339 = 430570060097040002LLU;
	static volatile int16_t x340 = -60;
	static volatile uint64_t t73 = 2574459588334677LLU;

	t73 = (((x337+x338)^x339)%x340);

	if (t73 != 9653942096951815809LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x341 = INT32_MAX;
	volatile uint8_t x342 = 0U;
	static volatile uint64_t x344 = 182407942634LLU;
	volatile uint64_t t74 = 1488262196492405308LLU;

	t74 = (((x341+x342)^x343)%x344);

	if (t74 != 114043814061LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x345 = 11565;
	static volatile int32_t x346 = -1;
	int8_t x347 = INT8_MIN;
	volatile int32_t x348 = INT32_MIN;
	int32_t t75 = -77;

	t75 = (((x345+x346)^x347)%x348);

	if (t75 != -11604) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x349 = INT16_MIN;
	uint16_t x350 = 50U;
	int8_t x351 = INT8_MIN;
	int32_t x352 = 5;
	volatile int32_t t76 = 934537659;

	t76 = (((x349+x350)^x351)%x352);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x353 = -1;
	int32_t x355 = INT32_MAX;
	int64_t t77 = 97248191LL;

	t77 = (((x353+x354)^x355)%x356);

	if (t77 != -2147450880LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x357 = INT64_MIN;
	volatile uint16_t x358 = UINT16_MAX;
	static int16_t x359 = INT16_MAX;
	int8_t x360 = INT8_MIN;
	int64_t t78 = -22LL;

	t78 = (((x357+x358)^x359)%x360);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x361 = INT16_MAX;
	int16_t x362 = 317;
	uint16_t x363 = UINT16_MAX;

	t79 = (((x361+x362)^x363)%x364);

	if (t79 != 66) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x365 = UINT16_MAX;
	static int16_t x366 = -962;
	int32_t x368 = INT32_MAX;
	static uint32_t t80 = 21393U;

	t80 = (((x365+x366)^x367)%x368);

	if (t80 != 2147419075U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x371 = INT32_MIN;
	volatile int16_t x372 = INT16_MAX;
	volatile int32_t t81 = 761132587;

	t81 = (((x369+x370)^x371)%x372);

	if (t81 != -32688) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x373 = INT32_MAX;
	int64_t x374 = 919LL;
	int32_t x375 = INT32_MAX;
	volatile int64_t t82 = 24198431053798LL;

	t82 = (((x373+x374)^x375)%x376);

	if (t82 != 2147482729LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x377 = INT32_MAX;
	volatile int32_t x378 = -2056;
	static volatile int32_t x379 = INT32_MIN;
	int64_t x380 = 4557400262472779LL;
	static int64_t t83 = 212336515644555LL;

	t83 = (((x377+x378)^x379)%x380);

	if (t83 != -2057LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x381 = INT8_MIN;
	uint32_t x383 = 0U;
	static volatile uint32_t x384 = 29U;
	static volatile uint32_t t84 = 177U;

	t84 = (((x381+x382)^x383)%x384);

	if (t84 != 28U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x385 = INT8_MAX;
	volatile int8_t x386 = -1;
	int16_t x387 = -30;
	int16_t x388 = 1778;
	volatile int32_t t85 = 372875;

	t85 = (((x385+x386)^x387)%x388);

	if (t85 != -100) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x389 = -1184760913LL;
	uint64_t x390 = 1487450LLU;
	volatile uint8_t x391 = UINT8_MAX;
	volatile uint8_t x392 = 74U;
	static volatile uint64_t t86 = 645942470LLU;

	t86 = (((x389+x390)^x391)%x392);

	if (t86 != 32LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x397 = 281644052261336LLU;
	int16_t x398 = -1;
	int8_t x399 = INT8_MIN;
	uint32_t x400 = 79U;
	uint64_t t87 = 45LLU;

	t87 = (((x397+x398)^x399)%x400);

	if (t87 != 56LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x401 = -1;
	int32_t x402 = -1;
	int8_t x403 = INT8_MIN;
	volatile int8_t x404 = INT8_MIN;
	volatile int32_t t88 = -15651537;

	t88 = (((x401+x402)^x403)%x404);

	if (t88 != 126) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x405 = 15178U;
	static volatile int32_t x406 = 16797592;
	static int16_t x407 = INT16_MIN;
	static volatile uint64_t t89 = 6926320561231LLU;

	t89 = (((x405+x406)^x407)%x408);

	if (t89 != 18446744073692711650LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x410 = 431462054U;
	int32_t x411 = INT32_MIN;

	t90 = (((x409+x410)^x411)%x412);

	if (t90 != 14295LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x421 = 52479578LLU;
	volatile uint64_t x422 = 211021LLU;
	uint16_t x423 = 1429U;

	t91 = (((x421+x422)^x423)%x424);

	if (t91 != 52689714LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x425 = INT32_MIN;
	uint64_t x426 = 485365428351LLU;
	uint32_t x428 = 2U;

	t92 = (((x425+x426)^x427)%x428);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x430 = 48;
	static uint32_t x431 = 78826U;
	static volatile int16_t x432 = INT16_MIN;
	uint32_t t93 = 1U;

	t93 = (((x429+x430)^x431)%x432);

	if (t93 != 78814U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x433 = INT8_MIN;
	int32_t x434 = -1;
	static uint8_t x435 = 10U;
	static uint64_t x436 = 398420LLU;

	t94 = (((x433+x434)^x435)%x436);

	if (t94 != 92277LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x437 = 9518U;
	static int32_t x438 = INT32_MAX;
	int64_t x439 = INT64_MIN;
	int32_t x440 = -3335262;
	volatile int64_t t95 = 138837830215LL;

	t95 = (((x437+x438)^x439)%x440);

	if (t95 != -784877LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x441 = UINT16_MAX;
	int8_t x442 = -1;
	uint16_t x443 = 0U;
	uint16_t x444 = UINT16_MAX;
	volatile int32_t t96 = -6;

	t96 = (((x441+x442)^x443)%x444);

	if (t96 != 65534) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x445 = INT8_MIN;
	int16_t x446 = INT16_MIN;
	int8_t x447 = INT8_MAX;
	static int64_t x448 = INT64_MIN;
	static int64_t t97 = 505728322384993576LL;

	t97 = (((x445+x446)^x447)%x448);

	if (t97 != -32769LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x449 = INT16_MIN;
	int16_t x450 = -1;
	volatile int16_t x451 = -358;
	uint64_t x452 = 12953120750LLU;
	uint64_t t98 = 367605160715LLU;

	t98 = (((x449+x450)^x451)%x452);

	if (t98 != 33125LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x453 = INT16_MIN;
	static uint64_t x454 = UINT64_MAX;
	volatile int8_t x455 = INT8_MIN;
	int16_t x456 = -1;
	static volatile uint64_t t99 = 13338102974690LLU;

	t99 = (((x453+x454)^x455)%x456);

	if (t99 != 32895LLU) { NG(); } else { ; }
	
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

