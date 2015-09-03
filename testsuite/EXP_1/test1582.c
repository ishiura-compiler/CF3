#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x7 = 1U;
int16_t x12 = INT16_MAX;
int32_t t2 = -6003278;
int16_t x14 = -1;
uint16_t x16 = 61U;
volatile int16_t x17 = 12;
uint16_t x18 = 3U;
uint16_t x24 = 128U;
int32_t x33 = INT32_MAX;
uint16_t x34 = 22646U;
static int64_t x35 = INT64_MAX;
int8_t x38 = INT8_MAX;
static int8_t x40 = INT8_MIN;
static volatile int32_t t9 = 1025;
int16_t x43 = INT16_MIN;
static volatile int32_t x46 = -1821694;
static uint64_t x49 = 170645747620LLU;
volatile int32_t x53 = -1;
uint16_t x56 = UINT16_MAX;
uint64_t x58 = UINT64_MAX;
uint32_t x65 = 160U;
volatile int16_t x68 = INT16_MAX;
int64_t x70 = INT64_MIN;
int16_t x71 = -42;
volatile int32_t t19 = -522691386;
int64_t x84 = INT64_MAX;
static volatile uint16_t x89 = UINT16_MAX;
uint64_t x96 = 263100908887LLU;
int64_t x98 = INT64_MIN;
int64_t x100 = 781LL;
static volatile uint16_t x108 = UINT16_MAX;
static volatile int64_t x114 = INT64_MAX;
int64_t x122 = -10427824492592LL;
int64_t x125 = 252080199038LL;
int64_t x151 = INT64_MAX;
volatile uint16_t x152 = 959U;
uint32_t x156 = 20U;
int32_t x165 = -1;
static uint8_t x166 = 11U;
int32_t x169 = INT32_MIN;
uint8_t x184 = 98U;
uint32_t x188 = UINT32_MAX;
static int16_t x192 = INT16_MIN;
volatile uint16_t x193 = UINT16_MAX;
volatile int32_t x200 = INT32_MIN;
int32_t t46 = -1208596;
int8_t x203 = -1;
volatile int8_t x211 = -1;
int64_t x212 = -1LL;
int8_t x213 = INT8_MIN;
static int16_t x218 = INT16_MIN;
uint32_t x220 = 2U;
volatile int64_t x223 = -1LL;
int16_t x224 = INT16_MAX;
static uint16_t x225 = UINT16_MAX;
int16_t x226 = 96;
volatile int32_t t53 = 368579211;
uint8_t x235 = 2U;
int32_t x239 = INT32_MAX;
int64_t x245 = -1LL;
int32_t x246 = INT32_MIN;
volatile int16_t x250 = INT16_MIN;
int32_t x252 = 2;
static int32_t t59 = 6865;
int32_t x253 = INT32_MAX;
static int32_t t61 = -1384;
volatile int8_t x264 = 3;
volatile int32_t t62 = -1021;
int8_t x272 = -1;
volatile int16_t x275 = INT16_MIN;
static uint32_t x276 = UINT32_MAX;
int8_t x279 = INT8_MIN;
volatile int32_t x280 = 552430441;
static int32_t x281 = INT32_MIN;
int32_t t67 = 7521;
uint64_t x288 = UINT64_MAX;
volatile int32_t x298 = 27220;
volatile int32_t t71 = 504;
uint16_t x304 = 0U;
volatile int8_t x305 = INT8_MIN;
volatile int16_t x309 = -1;
int64_t x317 = INT64_MIN;
static volatile int64_t x321 = INT64_MIN;
int16_t x325 = INT16_MIN;
volatile int16_t x328 = -1;
int32_t x330 = -1;
int32_t x332 = INT32_MIN;
static int16_t x336 = INT16_MIN;
static int64_t x338 = 6474625273283725LL;
int32_t x342 = -8388;
static volatile int16_t x344 = -3;
int8_t x346 = INT8_MIN;
int32_t t83 = 6375;
uint64_t x364 = 6538422469239741LLU;
int32_t t89 = -987139;
uint16_t x373 = UINT16_MAX;
volatile int32_t x375 = INT32_MAX;
static uint32_t x379 = 1003738U;
int64_t x385 = INT64_MIN;
int16_t x389 = INT16_MIN;
static int16_t x391 = INT16_MAX;
volatile int32_t x398 = INT32_MAX;
static volatile int64_t x399 = -3222982263LL;
static uint8_t x403 = 1U;
int32_t t98 = 0;


void f0(void) {
	int64_t x1 = INT64_MIN;
	volatile int64_t x2 = 665333LL;
	uint8_t x3 = 8U;
	static volatile uint32_t x4 = 508101673U;
	int32_t t0 = -2368100;

	t0 = (((x1<=x2)%x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	uint64_t x6 = 1LLU;
	volatile int8_t x8 = INT8_MAX;
	int32_t t1 = 546;

	t1 = (((x5<=x6)%x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 134U;
	static int16_t x10 = 66;
	static int16_t x11 = 2;

	t2 = (((x9<=x10)%x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	volatile int64_t x15 = INT64_MIN;
	static int32_t t3 = 41727509;

	t3 = (((x13<=x14)%x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x19 = INT8_MAX;
	int32_t x20 = -4;
	volatile int32_t t4 = 1029439349;

	t4 = (((x17<=x18)%x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int16_t x22 = -1;
	uint64_t x23 = 487414LLU;
	volatile int32_t t5 = -5767485;

	t5 = (((x21<=x22)%x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	int64_t x26 = -1082835366430074LL;
	volatile uint8_t x27 = 102U;
	volatile int64_t x28 = INT64_MAX;
	volatile int32_t t6 = 227447701;

	t6 = (((x25<=x26)%x27)<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MAX;
	int8_t x30 = INT8_MAX;
	int32_t x31 = 6375;
	uint32_t x32 = 139372133U;
	int32_t t7 = 1507161;

	t7 = (((x29<=x30)%x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x36 = 2;
	volatile int32_t t8 = 195;

	t8 = (((x33<=x34)%x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = 713U;
	int8_t x39 = INT8_MIN;

	t9 = (((x37<=x38)%x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = 274638234;
	volatile uint16_t x42 = UINT16_MAX;
	static int16_t x44 = INT16_MIN;
	static int32_t t10 = -2;

	t10 = (((x41<=x42)%x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x45 = UINT32_MAX;
	uint32_t x47 = UINT32_MAX;
	int32_t x48 = -1;
	volatile int32_t t11 = 68;

	t11 = (((x45<=x46)%x47)<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x50 = -3775;
	volatile int32_t x51 = -8099;
	int64_t x52 = -2LL;
	static int32_t t12 = 599297777;

	t12 = (((x49<=x50)%x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x54 = INT32_MIN;
	static int64_t x55 = -2LL;
	volatile int32_t t13 = -1471996;

	t13 = (((x53<=x54)%x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = 0;
	static int16_t x59 = 60;
	int32_t x60 = -141835426;
	static int32_t t14 = -58390411;

	t14 = (((x57<=x58)%x59)<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = INT32_MAX;
	uint16_t x62 = 57U;
	int64_t x63 = -12LL;
	int16_t x64 = -1;
	int32_t t15 = 39;

	t15 = (((x61<=x62)%x63)<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = -2516;
	volatile int16_t x67 = -1;
	static int32_t t16 = 11888;

	t16 = (((x65<=x66)%x67)<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -13;
	int64_t x72 = INT64_MIN;
	volatile int32_t t17 = -123891;

	t17 = (((x69<=x70)%x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 10U;
	static volatile int64_t x74 = INT64_MAX;
	volatile uint64_t x75 = UINT64_MAX;
	int32_t x76 = INT32_MIN;
	int32_t t18 = 527306161;

	t18 = (((x73<=x74)%x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = INT64_MIN;
	int8_t x78 = INT8_MAX;
	uint16_t x79 = 28U;
	uint16_t x80 = 2U;

	t19 = (((x77<=x78)%x79)<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = INT64_MIN;
	static volatile uint16_t x82 = UINT16_MAX;
	uint16_t x83 = 54U;
	volatile int32_t t20 = -6750;

	t20 = (((x81<=x82)%x83)<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = 0;
	uint64_t x86 = 210566935LLU;
	volatile int32_t x87 = INT32_MAX;
	int16_t x88 = -195;
	volatile int32_t t21 = 35;

	t21 = (((x85<=x86)%x87)<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x90 = INT8_MIN;
	int8_t x91 = INT8_MIN;
	int32_t x92 = INT32_MIN;
	volatile int32_t t22 = 1;

	t22 = (((x89<=x90)%x91)<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x93 = 3690U;
	int64_t x94 = -1LL;
	static volatile int16_t x95 = INT16_MIN;
	volatile int32_t t23 = -40;

	t23 = (((x93<=x94)%x95)<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 6U;
	static volatile int8_t x99 = -1;
	int32_t t24 = -27;

	t24 = (((x97<=x98)%x99)<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 0U;
	uint32_t x102 = UINT32_MAX;
	int64_t x103 = 5635719190512LL;
	static int8_t x104 = -34;
	volatile int32_t t25 = 21;

	t25 = (((x101<=x102)%x103)<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = INT16_MIN;
	int16_t x106 = INT16_MAX;
	uint32_t x107 = UINT32_MAX;
	static volatile int32_t t26 = -1;

	t26 = (((x105<=x106)%x107)<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	int8_t x110 = -53;
	int32_t x111 = -1;
	uint32_t x112 = UINT32_MAX;
	static volatile int32_t t27 = -27021176;

	t27 = (((x109<=x110)%x111)<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = UINT64_MAX;
	int32_t x115 = INT32_MIN;
	int64_t x116 = INT64_MIN;
	volatile int32_t t28 = -504;

	t28 = (((x113<=x114)%x115)<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	int64_t x118 = INT64_MIN;
	uint8_t x119 = UINT8_MAX;
	int64_t x120 = INT64_MIN;
	volatile int32_t t29 = -1055650;

	t29 = (((x117<=x118)%x119)<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MAX;
	volatile uint8_t x123 = UINT8_MAX;
	static uint16_t x124 = UINT16_MAX;
	int32_t t30 = -192460;

	t30 = (((x121<=x122)%x123)<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x126 = 217414114LLU;
	volatile uint16_t x127 = UINT16_MAX;
	uint8_t x128 = 6U;
	volatile int32_t t31 = -233;

	t31 = (((x125<=x126)%x127)<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x133 = INT32_MIN;
	static int32_t x134 = -17;
	uint8_t x135 = UINT8_MAX;
	int8_t x136 = INT8_MIN;
	volatile int32_t t32 = -217;

	t32 = (((x133<=x134)%x135)<x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x141 = -1;
	uint64_t x142 = 205368LLU;
	int64_t x143 = 203826955739990LL;
	int32_t x144 = 1188298;
	int32_t t33 = 54;

	t33 = (((x141<=x142)%x143)<x144);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x145 = 3U;
	uint32_t x146 = UINT32_MAX;
	static int16_t x147 = -1;
	volatile int32_t x148 = INT32_MAX;
	int32_t t34 = 11234;

	t34 = (((x145<=x146)%x147)<x148);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x149 = 542946425205LLU;
	uint8_t x150 = UINT8_MAX;
	int32_t t35 = 54828903;

	t35 = (((x149<=x150)%x151)<x152);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x153 = INT32_MAX;
	static int64_t x154 = INT64_MAX;
	uint32_t x155 = UINT32_MAX;
	static int32_t t36 = 15988;

	t36 = (((x153<=x154)%x155)<x156);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x157 = -1LL;
	uint32_t x158 = UINT32_MAX;
	int32_t x159 = INT32_MAX;
	int32_t x160 = -1;
	volatile int32_t t37 = -746;

	t37 = (((x157<=x158)%x159)<x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = -860;
	int32_t x162 = INT32_MIN;
	uint32_t x163 = UINT32_MAX;
	int16_t x164 = 76;
	int32_t t38 = 25135214;

	t38 = (((x161<=x162)%x163)<x164);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x167 = UINT16_MAX;
	int32_t x168 = INT32_MIN;
	volatile int32_t t39 = 39417878;

	t39 = (((x165<=x166)%x167)<x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x170 = 1;
	uint8_t x171 = 1U;
	static int64_t x172 = INT64_MIN;
	int32_t t40 = -47738011;

	t40 = (((x169<=x170)%x171)<x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x173 = -212LL;
	static int64_t x174 = INT64_MAX;
	int64_t x175 = INT64_MIN;
	volatile uint8_t x176 = 15U;
	static int32_t t41 = -12364;

	t41 = (((x173<=x174)%x175)<x176);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x181 = 349U;
	int16_t x182 = -1;
	int16_t x183 = -1;
	volatile int32_t t42 = 424952;

	t42 = (((x181<=x182)%x183)<x184);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x185 = INT64_MIN;
	int8_t x186 = INT8_MAX;
	uint32_t x187 = 17U;
	int32_t t43 = 8965;

	t43 = (((x185<=x186)%x187)<x188);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x189 = 2235LLU;
	static uint64_t x190 = UINT64_MAX;
	uint64_t x191 = UINT64_MAX;
	volatile int32_t t44 = 739239;

	t44 = (((x189<=x190)%x191)<x192);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x194 = INT8_MAX;
	volatile int16_t x195 = -2283;
	int32_t x196 = INT32_MIN;
	int32_t t45 = -1;

	t45 = (((x193<=x194)%x195)<x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x197 = INT64_MAX;
	uint64_t x198 = 4LLU;
	volatile uint8_t x199 = 6U;

	t46 = (((x197<=x198)%x199)<x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = INT64_MAX;
	int8_t x202 = -1;
	uint8_t x204 = UINT8_MAX;
	int32_t t47 = 522;

	t47 = (((x201<=x202)%x203)<x204);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x205 = 348U;
	volatile uint32_t x206 = 86223720U;
	uint64_t x207 = UINT64_MAX;
	uint64_t x208 = 2LLU;
	int32_t t48 = -889004791;

	t48 = (((x205<=x206)%x207)<x208);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x209 = INT64_MAX;
	uint16_t x210 = UINT16_MAX;
	int32_t t49 = 8301;

	t49 = (((x209<=x210)%x211)<x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x214 = 803U;
	volatile uint64_t x215 = 67921124LLU;
	int8_t x216 = -1;
	volatile int32_t t50 = 335;

	t50 = (((x213<=x214)%x215)<x216);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = 230;
	volatile int16_t x219 = INT16_MIN;
	int32_t t51 = -11941780;

	t51 = (((x217<=x218)%x219)<x220);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x221 = INT8_MIN;
	volatile uint32_t x222 = 21U;
	volatile int32_t t52 = 131449787;

	t52 = (((x221<=x222)%x223)<x224);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x227 = INT8_MIN;
	int32_t x228 = -1;

	t53 = (((x225<=x226)%x227)<x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x229 = INT64_MIN;
	int32_t x230 = 5;
	static int16_t x231 = INT16_MIN;
	int32_t x232 = INT32_MAX;
	volatile int32_t t54 = 13;

	t54 = (((x229<=x230)%x231)<x232);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x233 = 127;
	int32_t x234 = INT32_MIN;
	static uint32_t x236 = UINT32_MAX;
	volatile int32_t t55 = -43766;

	t55 = (((x233<=x234)%x235)<x236);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x237 = UINT16_MAX;
	int16_t x238 = INT16_MIN;
	static volatile int16_t x240 = 60;
	volatile int32_t t56 = 1;

	t56 = (((x237<=x238)%x239)<x240);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x241 = 19192LLU;
	int32_t x242 = -1;
	int64_t x243 = -1LL;
	volatile int8_t x244 = INT8_MIN;
	int32_t t57 = -5;

	t57 = (((x241<=x242)%x243)<x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x247 = 206186917LLU;
	static volatile uint64_t x248 = 5498881632871888623LLU;
	static int32_t t58 = 5525096;

	t58 = (((x245<=x246)%x247)<x248);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x249 = INT64_MIN;
	int16_t x251 = INT16_MIN;

	t59 = (((x249<=x250)%x251)<x252);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x254 = -3807666;
	uint64_t x255 = UINT64_MAX;
	int16_t x256 = 3240;
	volatile int32_t t60 = -197437258;

	t60 = (((x253<=x254)%x255)<x256);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x257 = UINT32_MAX;
	int16_t x258 = -244;
	static uint8_t x259 = 10U;
	int32_t x260 = INT32_MIN;

	t61 = (((x257<=x258)%x259)<x260);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x261 = INT16_MIN;
	volatile int8_t x262 = INT8_MAX;
	volatile uint64_t x263 = 461405829LLU;

	t62 = (((x261<=x262)%x263)<x264);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x265 = 670933170LL;
	int64_t x266 = INT64_MAX;
	int8_t x267 = INT8_MAX;
	static volatile uint8_t x268 = 1U;
	volatile int32_t t63 = 1328992;

	t63 = (((x265<=x266)%x267)<x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x269 = -7146804113LL;
	volatile uint64_t x270 = 10287LLU;
	int16_t x271 = -1;
	static volatile int32_t t64 = -51;

	t64 = (((x269<=x270)%x271)<x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x273 = 1;
	volatile int32_t x274 = -2;
	int32_t t65 = -277324;

	t65 = (((x273<=x274)%x275)<x276);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x277 = INT32_MAX;
	uint16_t x278 = 22U;
	volatile int32_t t66 = 526761;

	t66 = (((x277<=x278)%x279)<x280);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x282 = -7;
	volatile int16_t x283 = -2158;
	volatile int16_t x284 = -217;

	t67 = (((x281<=x282)%x283)<x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x285 = 8U;
	int8_t x286 = INT8_MAX;
	static int32_t x287 = -1;
	static int32_t t68 = -24458944;

	t68 = (((x285<=x286)%x287)<x288);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x289 = INT16_MIN;
	static uint32_t x290 = 791U;
	uint32_t x291 = 2558U;
	int64_t x292 = -112189LL;
	volatile int32_t t69 = -11;

	t69 = (((x289<=x290)%x291)<x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x293 = INT64_MAX;
	static int64_t x294 = 185949881LL;
	uint16_t x295 = 4445U;
	volatile int16_t x296 = -1;
	volatile int32_t t70 = 69;

	t70 = (((x293<=x294)%x295)<x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x297 = UINT16_MAX;
	static int16_t x299 = INT16_MIN;
	uint8_t x300 = 0U;

	t71 = (((x297<=x298)%x299)<x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x301 = INT8_MIN;
	uint64_t x302 = 1035135660741644293LLU;
	int64_t x303 = -6338906125LL;
	int32_t t72 = -119;

	t72 = (((x301<=x302)%x303)<x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x306 = UINT8_MAX;
	static int8_t x307 = 3;
	volatile int64_t x308 = 5280795732277LL;
	int32_t t73 = 2978;

	t73 = (((x305<=x306)%x307)<x308);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x310 = -2;
	volatile int32_t x311 = 122390708;
	static uint32_t x312 = UINT32_MAX;
	volatile int32_t t74 = -1;

	t74 = (((x309<=x310)%x311)<x312);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x313 = -1;
	static int16_t x314 = INT16_MAX;
	int8_t x315 = -1;
	static int64_t x316 = INT64_MIN;
	volatile int32_t t75 = 24234281;

	t75 = (((x313<=x314)%x315)<x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x318 = -15570348;
	volatile int32_t x319 = -1;
	int64_t x320 = INT64_MAX;
	int32_t t76 = 0;

	t76 = (((x317<=x318)%x319)<x320);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x322 = UINT32_MAX;
	static int8_t x323 = INT8_MIN;
	static int8_t x324 = INT8_MIN;
	static volatile int32_t t77 = -12;

	t77 = (((x321<=x322)%x323)<x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x326 = 173782LLU;
	uint64_t x327 = UINT64_MAX;
	int32_t t78 = 4974;

	t78 = (((x325<=x326)%x327)<x328);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x329 = -1;
	int16_t x331 = INT16_MAX;
	int32_t t79 = 1;

	t79 = (((x329<=x330)%x331)<x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x333 = 3526446LLU;
	volatile int64_t x334 = INT64_MAX;
	int32_t x335 = 354;
	int32_t t80 = 590335;

	t80 = (((x333<=x334)%x335)<x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x337 = INT8_MIN;
	volatile int8_t x339 = INT8_MAX;
	uint32_t x340 = UINT32_MAX;
	volatile int32_t t81 = 36;

	t81 = (((x337<=x338)%x339)<x340);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x341 = UINT32_MAX;
	volatile uint32_t x343 = UINT32_MAX;
	int32_t t82 = 3;

	t82 = (((x341<=x342)%x343)<x344);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x345 = UINT64_MAX;
	uint64_t x347 = 222788LLU;
	static int16_t x348 = -1;

	t83 = (((x345<=x346)%x347)<x348);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x349 = 2876LLU;
	uint8_t x350 = UINT8_MAX;
	static int64_t x351 = INT64_MIN;
	int32_t x352 = -1;
	volatile int32_t t84 = 204;

	t84 = (((x349<=x350)%x351)<x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x353 = -48174LL;
	static int32_t x354 = -1;
	static volatile uint64_t x355 = 250575LLU;
	int32_t x356 = -1891545;
	int32_t t85 = 44;

	t85 = (((x353<=x354)%x355)<x356);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x357 = -1LL;
	int64_t x358 = -2619LL;
	int32_t x359 = INT32_MIN;
	int8_t x360 = 0;
	static int32_t t86 = -57;

	t86 = (((x357<=x358)%x359)<x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x361 = INT8_MIN;
	int32_t x362 = INT32_MIN;
	int64_t x363 = 2900258355984912LL;
	int32_t t87 = 534174126;

	t87 = (((x361<=x362)%x363)<x364);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint32_t x365 = 7905371U;
	int16_t x366 = -1;
	int16_t x367 = 1;
	static int8_t x368 = INT8_MIN;
	volatile int32_t t88 = 1;

	t88 = (((x365<=x366)%x367)<x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x369 = 3;
	int8_t x370 = INT8_MIN;
	int16_t x371 = INT16_MIN;
	int16_t x372 = INT16_MAX;

	t89 = (((x369<=x370)%x371)<x372);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x374 = -1843759;
	int16_t x376 = INT16_MIN;
	volatile int32_t t90 = 318;

	t90 = (((x373<=x374)%x375)<x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x377 = -10;
	int64_t x378 = -61760916221LL;
	static int32_t x380 = -1;
	volatile int32_t t91 = -16403;

	t91 = (((x377<=x378)%x379)<x380);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x381 = 2;
	uint32_t x382 = UINT32_MAX;
	volatile uint64_t x383 = UINT64_MAX;
	static uint16_t x384 = 3U;
	int32_t t92 = 97;

	t92 = (((x381<=x382)%x383)<x384);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x386 = 1;
	static int64_t x387 = INT64_MAX;
	int32_t x388 = INT32_MIN;
	static volatile int32_t t93 = 47174274;

	t93 = (((x385<=x386)%x387)<x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x390 = INT32_MAX;
	static int32_t x392 = INT32_MAX;
	int32_t t94 = 699662704;

	t94 = (((x389<=x390)%x391)<x392);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x393 = 316U;
	int64_t x394 = -1LL;
	int32_t x395 = 102973548;
	int64_t x396 = INT64_MIN;
	volatile int32_t t95 = 681523;

	t95 = (((x393<=x394)%x395)<x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x397 = INT16_MAX;
	static volatile int64_t x400 = INT64_MAX;
	volatile int32_t t96 = -7334897;

	t96 = (((x397<=x398)%x399)<x400);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x401 = -1LL;
	int8_t x402 = -18;
	int8_t x404 = -1;
	static int32_t t97 = 27;

	t97 = (((x401<=x402)%x403)<x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x405 = INT8_MIN;
	volatile uint8_t x406 = 3U;
	int32_t x407 = -1;
	static int16_t x408 = -1;

	t98 = (((x405<=x406)%x407)<x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x409 = INT64_MIN;
	int16_t x410 = -1;
	volatile int32_t x411 = INT32_MIN;
	uint32_t x412 = 157U;
	volatile int32_t t99 = -693619086;

	t99 = (((x409<=x410)%x411)<x412);

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

