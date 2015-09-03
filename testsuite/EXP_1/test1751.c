#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 4899635;
int16_t x5 = -1;
volatile int32_t t1 = 132475604;
uint8_t x9 = 11U;
int64_t x11 = -1LL;
int16_t x12 = INT16_MIN;
int32_t t3 = 304262547;
int8_t x17 = -1;
uint32_t x19 = UINT32_MAX;
static int64_t x21 = 242LL;
volatile uint64_t x26 = 43565LLU;
uint16_t x28 = 3U;
int8_t x32 = INT8_MIN;
static volatile int32_t t8 = 617;
uint32_t x38 = 140706U;
int32_t t10 = -6185;
int16_t x57 = -1;
int32_t t14 = -242245;
static volatile uint32_t x61 = 60U;
static int64_t x64 = INT64_MAX;
static int32_t x68 = -1;
uint32_t x72 = UINT32_MAX;
int32_t x96 = INT32_MAX;
int64_t x100 = 712582127540197106LL;
int8_t x101 = -9;
int16_t x102 = -1;
volatile int16_t x104 = INT16_MIN;
uint32_t x108 = UINT32_MAX;
static int64_t x112 = -1LL;
static volatile int32_t t27 = 54;
static int64_t x117 = INT64_MIN;
volatile uint32_t x123 = UINT32_MAX;
volatile uint8_t x124 = 0U;
int64_t x128 = INT64_MIN;
volatile int32_t t31 = -108439;
uint32_t x130 = 23636U;
int16_t x134 = INT16_MIN;
int32_t x141 = INT32_MAX;
volatile int64_t x146 = INT64_MIN;
uint32_t x149 = 46U;
int32_t x150 = -1;
int32_t x156 = -124654010;
int8_t x168 = -1;
volatile int32_t t41 = -2;
static uint64_t x181 = UINT64_MAX;
int16_t x185 = -1;
int64_t x194 = INT64_MIN;
uint32_t x197 = 1678502736U;
int8_t x205 = 7;
int16_t x206 = 0;
int8_t x213 = INT8_MAX;
volatile int32_t t54 = -4692557;
uint32_t x224 = UINT32_MAX;
int32_t t59 = 15;
volatile uint32_t x244 = 28U;
static int32_t t61 = 459;
volatile int16_t x251 = -1;
volatile uint8_t x255 = UINT8_MAX;
uint32_t x256 = UINT32_MAX;
int64_t x269 = INT64_MAX;
volatile int32_t x274 = INT32_MAX;
static volatile uint16_t x281 = 20693U;
int8_t x284 = INT8_MIN;
static volatile int32_t t71 = -212063201;
int16_t x291 = INT16_MIN;
volatile uint8_t x294 = 31U;
static int32_t t75 = -7;
uint16_t x306 = UINT16_MAX;
static int16_t x308 = -3337;
uint32_t x311 = UINT32_MAX;
static uint16_t x312 = 1194U;
volatile int32_t t77 = -24;
volatile uint16_t x316 = 3U;
static uint16_t x322 = UINT16_MAX;
static int16_t x323 = INT16_MIN;
volatile int32_t t79 = 1283;
static int8_t x325 = -1;
int16_t x331 = INT16_MIN;
int32_t t81 = -31232742;
int32_t t82 = 15947;
volatile int32_t t83 = 0;
int8_t x349 = -1;
volatile int32_t t86 = 498084032;
volatile int32_t t87 = -486256;
int64_t x367 = -16485496063655997LL;
int32_t x379 = INT32_MAX;
int8_t x380 = -1;
int64_t x384 = INT64_MIN;
static volatile int32_t t94 = 8;
static int16_t x385 = 17;
int16_t x392 = INT16_MIN;
static uint64_t x396 = 430367249968582LLU;
uint32_t x397 = UINT32_MAX;
int64_t x403 = INT64_MIN;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	volatile int16_t x2 = INT16_MIN;
	static uint8_t x3 = 1U;
	int64_t x4 = INT64_MAX;

	t0 = (((x1&x2)%x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = INT64_MIN;
	int16_t x7 = INT16_MIN;
	int32_t x8 = -1;

	t1 = (((x5&x6)%x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MIN;
	static volatile int32_t t2 = 26922;

	t2 = (((x9&x10)%x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	static volatile uint16_t x14 = UINT16_MAX;
	uint32_t x15 = UINT32_MAX;
	static uint8_t x16 = UINT8_MAX;

	t3 = (((x13&x14)%x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x18 = -1;
	int16_t x20 = INT16_MIN;
	int32_t t4 = 158;

	t4 = (((x17&x18)%x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = UINT32_MAX;
	volatile int64_t x23 = 1755LL;
	static uint64_t x24 = 2984LLU;
	volatile int32_t t5 = -1288581;

	t5 = (((x21&x22)%x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 126351U;
	uint64_t x27 = UINT64_MAX;
	volatile int32_t t6 = 191;

	t6 = (((x25&x26)%x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int16_t x30 = 5;
	static uint8_t x31 = 67U;
	int32_t t7 = 17;

	t7 = (((x29&x30)%x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 10;
	static int8_t x34 = 59;
	uint8_t x35 = UINT8_MAX;
	static volatile int16_t x36 = INT16_MAX;

	t8 = (((x33&x34)%x35)<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	int16_t x39 = 694;
	uint64_t x40 = 25374774670LLU;
	int32_t t9 = -48;

	t9 = (((x37&x38)%x39)<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	int64_t x42 = -1LL;
	static volatile int8_t x43 = INT8_MIN;
	int32_t x44 = -1;

	t10 = (((x41&x42)%x43)<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MAX;
	uint8_t x46 = 2U;
	int32_t x47 = 990;
	int64_t x48 = INT64_MIN;
	int32_t t11 = -37;

	t11 = (((x45&x46)%x47)<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 52U;
	int8_t x50 = INT8_MIN;
	int64_t x51 = -4696013LL;
	int64_t x52 = 4370415202618571LL;
	volatile int32_t t12 = 22882;

	t12 = (((x49&x50)%x51)<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint64_t x53 = 4LLU;
	uint8_t x54 = 45U;
	uint16_t x55 = UINT16_MAX;
	uint8_t x56 = UINT8_MAX;
	volatile int32_t t13 = -125080170;

	t13 = (((x53&x54)%x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x58 = 3687522LLU;
	int8_t x59 = INT8_MAX;
	static uint64_t x60 = UINT64_MAX;

	t14 = (((x57&x58)%x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x62 = INT16_MAX;
	volatile int64_t x63 = 1089LL;
	static volatile int32_t t15 = 136320;

	t15 = (((x61&x62)%x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = -1;
	int64_t x66 = -7951LL;
	uint32_t x67 = 12012356U;
	int32_t t16 = 20139;

	t16 = (((x65&x66)%x67)<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	uint32_t x70 = 0U;
	volatile int64_t x71 = -2982973136LL;
	int32_t t17 = -48;

	t17 = (((x69&x70)%x71)<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 8202U;
	int16_t x74 = -1;
	uint16_t x75 = 9U;
	int8_t x76 = INT8_MIN;
	volatile int32_t t18 = 8158738;

	t18 = (((x73&x74)%x75)<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 1U;
	int64_t x78 = INT64_MIN;
	int8_t x79 = -26;
	uint64_t x80 = UINT64_MAX;
	int32_t t19 = 55988;

	t19 = (((x77&x78)%x79)<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	int64_t x82 = -170520475394170LL;
	int32_t x83 = 56606845;
	static int32_t x84 = -6166403;
	int32_t t20 = 510779917;

	t20 = (((x81&x82)%x83)<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = INT8_MIN;
	volatile uint32_t x86 = UINT32_MAX;
	int32_t x87 = INT32_MIN;
	static volatile uint64_t x88 = 14LLU;
	int32_t t21 = 301;

	t21 = (((x85&x86)%x87)<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	int8_t x90 = -43;
	int8_t x91 = 1;
	volatile int64_t x92 = INT64_MAX;
	volatile int32_t t22 = -252520;

	t22 = (((x89&x90)%x91)<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x93 = UINT16_MAX;
	int64_t x94 = INT64_MIN;
	int64_t x95 = INT64_MIN;
	volatile int32_t t23 = -351;

	t23 = (((x93&x94)%x95)<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint32_t x97 = 25161U;
	int8_t x98 = INT8_MAX;
	uint16_t x99 = UINT16_MAX;
	int32_t t24 = 17;

	t24 = (((x97&x98)%x99)<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x103 = UINT64_MAX;
	int32_t t25 = 116;

	t25 = (((x101&x102)%x103)<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = UINT8_MAX;
	static int16_t x106 = 442;
	int32_t x107 = INT32_MAX;
	volatile int32_t t26 = -29858548;

	t26 = (((x105&x106)%x107)<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = UINT16_MAX;
	static uint64_t x110 = UINT64_MAX;
	volatile int64_t x111 = INT64_MAX;

	t27 = (((x109&x110)%x111)<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x113 = INT16_MIN;
	volatile int16_t x114 = INT16_MIN;
	static int64_t x115 = INT64_MIN;
	int32_t x116 = INT32_MAX;
	int32_t t28 = -607;

	t28 = (((x113&x114)%x115)<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x118 = INT16_MIN;
	int16_t x119 = INT16_MAX;
	static int64_t x120 = INT64_MIN;
	volatile int32_t t29 = 7797;

	t29 = (((x117&x118)%x119)<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MAX;
	int32_t x122 = INT32_MIN;
	int32_t t30 = 471;

	t30 = (((x121&x122)%x123)<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = UINT16_MAX;
	int8_t x126 = -1;
	static int16_t x127 = INT16_MIN;

	t31 = (((x125&x126)%x127)<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = 18649U;
	uint64_t x131 = 8628225569LLU;
	volatile int64_t x132 = INT64_MIN;
	volatile int32_t t32 = 1;

	t32 = (((x129&x130)%x131)<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = INT16_MAX;
	int8_t x135 = INT8_MIN;
	int8_t x136 = -24;
	int32_t t33 = -82088;

	t33 = (((x133&x134)%x135)<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -1;
	uint64_t x138 = 5503339432LLU;
	int64_t x139 = INT64_MAX;
	uint32_t x140 = 6U;
	static volatile int32_t t34 = 1687;

	t34 = (((x137&x138)%x139)<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x142 = INT16_MIN;
	volatile int8_t x143 = INT8_MIN;
	uint32_t x144 = 58915397U;
	int32_t t35 = 0;

	t35 = (((x141&x142)%x143)<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = 2;
	int8_t x147 = INT8_MIN;
	int32_t x148 = INT32_MAX;
	int32_t t36 = -483711;

	t36 = (((x145&x146)%x147)<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x151 = INT32_MAX;
	static volatile uint32_t x152 = UINT32_MAX;
	static volatile int32_t t37 = 1030;

	t37 = (((x149&x150)%x151)<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = -12;
	uint16_t x154 = 0U;
	uint64_t x155 = UINT64_MAX;
	int32_t t38 = 125;

	t38 = (((x153&x154)%x155)<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = -77;
	uint32_t x158 = 8719U;
	volatile int64_t x159 = -2594087072465827988LL;
	int16_t x160 = INT16_MIN;
	int32_t t39 = 104767;

	t39 = (((x157&x158)%x159)<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = 977;
	int32_t x162 = 5;
	static int16_t x163 = -4;
	uint32_t x164 = 431701101U;
	int32_t t40 = -1120399;

	t40 = (((x161&x162)%x163)<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	static int64_t x166 = -60LL;
	int16_t x167 = INT16_MIN;

	t41 = (((x165&x166)%x167)<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MIN;
	uint32_t x170 = 645826U;
	uint64_t x171 = UINT64_MAX;
	uint8_t x172 = 37U;
	int32_t t42 = 1;

	t42 = (((x169&x170)%x171)<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MAX;
	uint8_t x174 = 18U;
	volatile uint16_t x175 = UINT16_MAX;
	uint64_t x176 = 43435713925LLU;
	int32_t t43 = -33;

	t43 = (((x173&x174)%x175)<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x177 = 7;
	volatile uint16_t x178 = UINT16_MAX;
	uint8_t x179 = 1U;
	volatile uint16_t x180 = 159U;
	int32_t t44 = 432668088;

	t44 = (((x177&x178)%x179)<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x182 = 3149;
	volatile uint16_t x183 = 3U;
	volatile int32_t x184 = -82013;
	volatile int32_t t45 = 1706700;

	t45 = (((x181&x182)%x183)<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x186 = UINT64_MAX;
	int8_t x187 = -9;
	int64_t x188 = INT64_MIN;
	int32_t t46 = -60;

	t46 = (((x185&x186)%x187)<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x189 = -1;
	int16_t x190 = INT16_MAX;
	int8_t x191 = INT8_MIN;
	uint16_t x192 = UINT16_MAX;
	volatile int32_t t47 = 0;

	t47 = (((x189&x190)%x191)<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = -1;
	volatile int8_t x195 = -1;
	volatile int8_t x196 = INT8_MIN;
	static volatile int32_t t48 = 9606220;

	t48 = (((x193&x194)%x195)<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x198 = -17;
	int32_t x199 = 4049563;
	int64_t x200 = INT64_MIN;
	int32_t t49 = 29789152;

	t49 = (((x197&x198)%x199)<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -8465LL;
	int16_t x202 = 965;
	int8_t x203 = INT8_MIN;
	int16_t x204 = -11;
	volatile int32_t t50 = 7561890;

	t50 = (((x201&x202)%x203)<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x207 = INT64_MAX;
	volatile int16_t x208 = -82;
	static int32_t t51 = -268;

	t51 = (((x205&x206)%x207)<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = UINT8_MAX;
	int64_t x210 = 33776836LL;
	uint32_t x211 = 1294583894U;
	static int32_t x212 = INT32_MIN;
	static volatile int32_t t52 = 7289115;

	t52 = (((x209&x210)%x211)<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x214 = UINT64_MAX;
	volatile int64_t x215 = 5210236873LL;
	static int64_t x216 = INT64_MIN;
	volatile int32_t t53 = 628;

	t53 = (((x213&x214)%x215)<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = UINT64_MAX;
	int8_t x218 = -34;
	int16_t x219 = -1;
	int16_t x220 = -16315;

	t54 = (((x217&x218)%x219)<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x221 = INT16_MIN;
	uint8_t x222 = UINT8_MAX;
	int16_t x223 = -262;
	static volatile int32_t t55 = 764;

	t55 = (((x221&x222)%x223)<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x225 = UINT64_MAX;
	uint16_t x226 = 10496U;
	int8_t x227 = -46;
	int64_t x228 = 6246869LL;
	int32_t t56 = 9617003;

	t56 = (((x225&x226)%x227)<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 98U;
	static uint32_t x230 = 1319U;
	int16_t x231 = -928;
	int8_t x232 = 40;
	int32_t t57 = -1;

	t57 = (((x229&x230)%x231)<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = INT8_MIN;
	uint8_t x234 = 4U;
	uint32_t x235 = UINT32_MAX;
	volatile int32_t x236 = INT32_MIN;
	volatile int32_t t58 = -794;

	t58 = (((x233&x234)%x235)<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	uint32_t x238 = 2U;
	uint64_t x239 = 10141249155626LLU;
	uint8_t x240 = 3U;

	t59 = (((x237&x238)%x239)<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = INT8_MAX;
	volatile uint64_t x242 = 18LLU;
	static int16_t x243 = -1;
	int32_t t60 = 12832760;

	t60 = (((x241&x242)%x243)<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = INT16_MIN;
	static int8_t x246 = INT8_MAX;
	uint32_t x247 = 431U;
	uint64_t x248 = 803487LLU;

	t61 = (((x245&x246)%x247)<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = UINT8_MAX;
	int64_t x250 = -1LL;
	int64_t x252 = INT64_MIN;
	static int32_t t62 = 627135;

	t62 = (((x249&x250)%x251)<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MIN;
	int16_t x254 = INT16_MIN;
	int32_t t63 = 1061276634;

	t63 = (((x253&x254)%x255)<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	uint8_t x258 = UINT8_MAX;
	volatile uint64_t x259 = UINT64_MAX;
	volatile int32_t x260 = INT32_MIN;
	volatile int32_t t64 = 2403;

	t64 = (((x257&x258)%x259)<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = 227334;
	int16_t x262 = 0;
	int32_t x263 = -1;
	static int32_t x264 = INT32_MIN;
	volatile int32_t t65 = 7798341;

	t65 = (((x261&x262)%x263)<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	int8_t x266 = INT8_MIN;
	int16_t x267 = INT16_MAX;
	int32_t x268 = -1;
	volatile int32_t t66 = 4090;

	t66 = (((x265&x266)%x267)<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x270 = -1LL;
	uint8_t x271 = 1U;
	volatile int8_t x272 = 1;
	int32_t t67 = -378278539;

	t67 = (((x269&x270)%x271)<x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x273 = 277U;
	uint64_t x275 = UINT64_MAX;
	static volatile int16_t x276 = INT16_MIN;
	static int32_t t68 = -391043499;

	t68 = (((x273&x274)%x275)<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x277 = UINT64_MAX;
	int8_t x278 = INT8_MIN;
	static int8_t x279 = INT8_MIN;
	static int32_t x280 = -901071;
	volatile int32_t t69 = 357;

	t69 = (((x277&x278)%x279)<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x282 = -1LL;
	static int64_t x283 = -1LL;
	int32_t t70 = -809808021;

	t70 = (((x281&x282)%x283)<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x285 = 207U;
	int8_t x286 = INT8_MIN;
	int8_t x287 = -1;
	int8_t x288 = INT8_MAX;

	t71 = (((x285&x286)%x287)<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 2429U;
	int32_t x290 = 1;
	int8_t x292 = -1;
	int32_t t72 = 7;

	t72 = (((x289&x290)%x291)<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -1;
	uint8_t x295 = 92U;
	int64_t x296 = -1511LL;
	int32_t t73 = 24;

	t73 = (((x293&x294)%x295)<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = UINT16_MAX;
	static volatile int32_t x298 = 1831;
	static uint32_t x299 = 8237U;
	uint32_t x300 = 37920303U;
	static volatile int32_t t74 = 1627710;

	t74 = (((x297&x298)%x299)<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 9U;
	volatile int64_t x302 = -1LL;
	uint32_t x303 = 363430328U;
	uint64_t x304 = 31LLU;

	t75 = (((x301&x302)%x303)<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x305 = -1;
	uint16_t x307 = 468U;
	int32_t t76 = -2;

	t76 = (((x305&x306)%x307)<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 7U;
	uint32_t x310 = 211372U;

	t77 = (((x309&x310)%x311)<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = 0;
	int64_t x314 = -1LL;
	int16_t x315 = INT16_MIN;
	int32_t t78 = 0;

	t78 = (((x313&x314)%x315)<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x321 = INT32_MIN;
	int16_t x324 = INT16_MIN;

	t79 = (((x321&x322)%x323)<x324);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x326 = INT8_MIN;
	int8_t x327 = INT8_MIN;
	static int64_t x328 = 7840011550454LL;
	int32_t t80 = 217295619;

	t80 = (((x325&x326)%x327)<x328);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x329 = -12963;
	int16_t x330 = 6;
	int16_t x332 = INT16_MAX;

	t81 = (((x329&x330)%x331)<x332);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x333 = 3210LLU;
	uint8_t x334 = 0U;
	static int32_t x335 = 228;
	int8_t x336 = INT8_MAX;

	t82 = (((x333&x334)%x335)<x336);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x337 = -11;
	uint64_t x338 = 1386610229676805812LLU;
	static int8_t x339 = INT8_MIN;
	static uint8_t x340 = 0U;

	t83 = (((x337&x338)%x339)<x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x341 = INT32_MIN;
	uint32_t x342 = UINT32_MAX;
	volatile uint16_t x343 = 29U;
	int64_t x344 = INT64_MIN;
	volatile int32_t t84 = 0;

	t84 = (((x341&x342)%x343)<x344);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x345 = 10;
	int16_t x346 = 5;
	int64_t x347 = INT64_MIN;
	int16_t x348 = INT16_MIN;
	static volatile int32_t t85 = 1615484;

	t85 = (((x345&x346)%x347)<x348);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x350 = INT8_MIN;
	volatile int32_t x351 = 31525173;
	uint32_t x352 = 168816U;

	t86 = (((x349&x350)%x351)<x352);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint16_t x353 = UINT16_MAX;
	int32_t x354 = INT32_MAX;
	static int64_t x355 = INT64_MIN;
	int32_t x356 = 1320334;

	t87 = (((x353&x354)%x355)<x356);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x357 = 2LLU;
	static volatile int16_t x358 = INT16_MIN;
	uint8_t x359 = 115U;
	static int16_t x360 = -1;
	int32_t t88 = -52052;

	t88 = (((x357&x358)%x359)<x360);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x361 = INT32_MIN;
	int64_t x362 = INT64_MIN;
	int8_t x363 = -1;
	int16_t x364 = 1884;
	static int32_t t89 = -1260038;

	t89 = (((x361&x362)%x363)<x364);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x365 = 97U;
	static int8_t x366 = INT8_MIN;
	static int32_t x368 = INT32_MAX;
	int32_t t90 = 74;

	t90 = (((x365&x366)%x367)<x368);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x369 = -3540283;
	static uint64_t x370 = 1LLU;
	static volatile int8_t x371 = INT8_MIN;
	static uint32_t x372 = 966083U;
	int32_t t91 = 47363203;

	t91 = (((x369&x370)%x371)<x372);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x373 = -1;
	volatile int32_t x374 = INT32_MIN;
	uint16_t x375 = 4106U;
	volatile int16_t x376 = -6640;
	int32_t t92 = 41628622;

	t92 = (((x373&x374)%x375)<x376);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x377 = 6U;
	int8_t x378 = INT8_MAX;
	volatile int32_t t93 = -1901968;

	t93 = (((x377&x378)%x379)<x380);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x381 = INT16_MIN;
	uint16_t x382 = UINT16_MAX;
	int16_t x383 = INT16_MAX;

	t94 = (((x381&x382)%x383)<x384);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x386 = INT32_MIN;
	int16_t x387 = INT16_MIN;
	static volatile int8_t x388 = INT8_MAX;
	int32_t t95 = -116986;

	t95 = (((x385&x386)%x387)<x388);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x389 = 1U;
	static int8_t x390 = INT8_MIN;
	volatile uint64_t x391 = 2481191LLU;
	int32_t t96 = 3;

	t96 = (((x389&x390)%x391)<x392);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x393 = -534046664;
	static int16_t x394 = INT16_MIN;
	int16_t x395 = INT16_MAX;
	volatile int32_t t97 = 14;

	t97 = (((x393&x394)%x395)<x396);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x398 = UINT16_MAX;
	uint16_t x399 = 46U;
	int16_t x400 = -448;
	int32_t t98 = 0;

	t98 = (((x397&x398)%x399)<x400);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x401 = INT32_MAX;
	int8_t x402 = INT8_MIN;
	int16_t x404 = INT16_MAX;
	volatile int32_t t99 = 61203;

	t99 = (((x401&x402)%x403)<x404);

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

