#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = -1;
int16_t x10 = -1310;
int32_t x13 = INT32_MIN;
int8_t x15 = INT8_MIN;
int8_t x17 = INT8_MIN;
int64_t x18 = -745753351589LL;
static int32_t t4 = -394;
uint8_t x22 = 1U;
static uint32_t x23 = 660U;
int8_t x31 = -1;
int32_t x34 = -1;
int32_t x39 = -21979889;
static volatile int32_t t9 = 74402;
int8_t x42 = -2;
int32_t x60 = 64345;
int16_t x64 = -1;
volatile int32_t t14 = 52641291;
int16_t x65 = -1;
uint16_t x66 = UINT16_MAX;
uint64_t x91 = 107906LLU;
volatile int32_t x99 = INT32_MAX;
int16_t x119 = -1018;
int8_t x122 = -1;
volatile uint8_t x128 = 49U;
int8_t x133 = 0;
int64_t x135 = -1LL;
int32_t x138 = INT32_MIN;
int16_t x142 = INT16_MIN;
static int16_t x147 = INT16_MAX;
int64_t x148 = 840619855795LL;
static int32_t t37 = -24;
uint8_t x157 = 14U;
int32_t x167 = 21010;
int32_t t40 = 176233;
int16_t x188 = INT16_MAX;
int64_t x192 = -116LL;
uint64_t x196 = 2249LLU;
volatile int16_t x206 = -3;
volatile int8_t x209 = INT8_MIN;
static int32_t t51 = 1743;
static volatile int32_t t52 = 4;
int16_t x219 = INT16_MAX;
int32_t t53 = -111265615;
int16_t x231 = INT16_MAX;
volatile int32_t t55 = -357877767;
volatile uint32_t x235 = 3091U;
volatile uint32_t x255 = UINT32_MAX;
volatile int16_t x256 = INT16_MIN;
volatile int32_t t59 = -6643513;
int16_t x259 = INT16_MAX;
uint64_t x260 = UINT64_MAX;
volatile int32_t t60 = 74;
volatile int32_t t61 = -176;
uint64_t x268 = 10426LLU;
int64_t x271 = -14320LL;
volatile int32_t t63 = -728935480;
static int32_t t65 = 64778946;
volatile uint16_t x281 = 341U;
uint64_t x292 = 866590LLU;
uint8_t x304 = UINT8_MAX;
volatile int32_t t72 = 585866300;
static int32_t x313 = INT32_MAX;
int8_t x318 = INT8_MAX;
static int8_t x330 = INT8_MAX;
volatile int32_t t77 = -1055210;
volatile int16_t x341 = INT16_MAX;
static int8_t x347 = INT8_MIN;
volatile int8_t x352 = INT8_MIN;
int16_t x359 = INT16_MIN;
int8_t x366 = -7;
int8_t x369 = -24;
int8_t x370 = INT8_MIN;
volatile uint8_t x373 = 2U;
volatile uint32_t x378 = 3706731U;
static int8_t x384 = 7;
static uint32_t x385 = 2052U;
int32_t x390 = INT32_MAX;
static int32_t t92 = -87644;
static uint8_t x402 = UINT8_MAX;
volatile int8_t x410 = 1;
uint32_t x411 = 645196U;
uint16_t x412 = 11444U;
int32_t t95 = -67;
volatile int64_t x424 = -56LL;
static int32_t x425 = INT32_MIN;
uint16_t x428 = 429U;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static uint8_t x2 = UINT8_MAX;
	int16_t x4 = -1;
	volatile int32_t t0 = 4163794;

	t0 = (((x1+x2)%x3)<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	int8_t x6 = INT8_MAX;
	int8_t x7 = INT8_MIN;
	int8_t x8 = INT8_MIN;
	static volatile int32_t t1 = 146;

	t1 = (((x5+x6)%x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	int8_t x11 = INT8_MIN;
	static int16_t x12 = -1;
	int32_t t2 = 5;

	t2 = (((x9+x10)%x11)<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x14 = INT8_MAX;
	int64_t x16 = -1LL;
	volatile int32_t t3 = -7;

	t3 = (((x13+x14)%x15)<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x19 = 85;
	uint64_t x20 = 11LLU;

	t4 = (((x17+x18)%x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 2019533LLU;
	static volatile uint64_t x24 = 806LLU;
	int32_t t5 = 11;

	t5 = (((x21+x22)%x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -904LL;
	volatile uint32_t x26 = 10075762U;
	uint8_t x27 = 15U;
	uint32_t x28 = 396746U;
	volatile int32_t t6 = -27;

	t6 = (((x25+x26)%x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = 1152;
	static int8_t x30 = -4;
	uint32_t x32 = 1U;
	int32_t t7 = 39341;

	t7 = (((x29+x30)%x31)<=x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 14U;
	uint64_t x35 = 782LLU;
	uint8_t x36 = 1U;
	static volatile int32_t t8 = 226079085;

	t8 = (((x33+x34)%x35)<=x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x37 = 143U;
	uint16_t x38 = 1381U;
	volatile int16_t x40 = -5680;

	t9 = (((x37+x38)%x39)<=x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -1;
	int32_t x43 = -1;
	uint64_t x44 = 510904157LLU;
	static int32_t t10 = 0;

	t10 = (((x41+x42)%x43)<=x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 26442U;
	volatile int8_t x46 = -8;
	uint8_t x47 = 63U;
	int8_t x48 = 0;
	int32_t t11 = -1825228;

	t11 = (((x45+x46)%x47)<=x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = 252U;
	int64_t x54 = 22075841108841218LL;
	uint32_t x55 = 3U;
	uint32_t x56 = 59895U;
	int32_t t12 = -1;

	t12 = (((x53+x54)%x55)<=x56);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = -6;
	static volatile int32_t x58 = -2;
	uint64_t x59 = 3648973965905620LLU;
	static volatile int32_t t13 = 31599;

	t13 = (((x57+x58)%x59)<=x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	static uint32_t x62 = UINT32_MAX;
	static int64_t x63 = 517650377017LL;

	t14 = (((x61+x62)%x63)<=x64);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x67 = 170437408124LLU;
	static int64_t x68 = -1728768245LL;
	int32_t t15 = -2;

	t15 = (((x65+x66)%x67)<=x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = -1;
	int16_t x70 = INT16_MIN;
	volatile int16_t x71 = INT16_MIN;
	static int8_t x72 = INT8_MAX;
	static volatile int32_t t16 = 1057188528;

	t16 = (((x69+x70)%x71)<=x72);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = 1204160115U;
	int16_t x74 = -1;
	static int16_t x75 = INT16_MAX;
	int16_t x76 = INT16_MIN;
	static int32_t t17 = 7223;

	t17 = (((x73+x74)%x75)<=x76);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MIN;
	uint32_t x78 = UINT32_MAX;
	uint16_t x79 = 1421U;
	int32_t x80 = 43;
	volatile int32_t t18 = 910487271;

	t18 = (((x77+x78)%x79)<=x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = INT32_MIN;
	int32_t x82 = INT32_MAX;
	uint32_t x83 = 1091U;
	static volatile uint32_t x84 = 170792U;
	static volatile int32_t t19 = 1;

	t19 = (((x81+x82)%x83)<=x84);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = 4059871LL;
	int32_t x86 = -21066;
	uint32_t x87 = 222134229U;
	static uint64_t x88 = UINT64_MAX;
	static volatile int32_t t20 = -591;

	t20 = (((x85+x86)%x87)<=x88);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x89 = 1U;
	volatile int16_t x90 = INT16_MIN;
	uint16_t x92 = 15U;
	volatile int32_t t21 = -1103576;

	t21 = (((x89+x90)%x91)<=x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = 189442079744495012LL;
	int64_t x94 = -13690089277086454LL;
	static uint16_t x95 = 446U;
	int32_t x96 = -1;
	int32_t t22 = 260452;

	t22 = (((x93+x94)%x95)<=x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x97 = INT32_MAX;
	int64_t x98 = -1LL;
	int8_t x100 = INT8_MIN;
	volatile int32_t t23 = -14271;

	t23 = (((x97+x98)%x99)<=x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x101 = 5;
	volatile int64_t x102 = INT64_MIN;
	static uint16_t x103 = 5864U;
	int8_t x104 = 43;
	static int32_t t24 = -1;

	t24 = (((x101+x102)%x103)<=x104);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x105 = 1272;
	uint16_t x106 = 216U;
	uint8_t x107 = UINT8_MAX;
	int32_t x108 = INT32_MAX;
	static volatile int32_t t25 = -5052;

	t25 = (((x105+x106)%x107)<=x108);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = -1;
	uint16_t x110 = UINT16_MAX;
	volatile uint32_t x111 = UINT32_MAX;
	static int8_t x112 = -4;
	volatile int32_t t26 = -12601335;

	t26 = (((x109+x110)%x111)<=x112);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = INT32_MIN;
	int16_t x114 = 1;
	uint8_t x115 = 8U;
	int16_t x116 = -18;
	int32_t t27 = 1;

	t27 = (((x113+x114)%x115)<=x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile uint32_t x117 = UINT32_MAX;
	uint8_t x118 = 1U;
	uint16_t x120 = UINT16_MAX;
	volatile int32_t t28 = 871978524;

	t28 = (((x117+x118)%x119)<=x120);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x121 = 0U;
	uint8_t x123 = 91U;
	volatile int32_t x124 = INT32_MIN;
	static int32_t t29 = 5543;

	t29 = (((x121+x122)%x123)<=x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x125 = UINT16_MAX;
	int8_t x126 = INT8_MIN;
	volatile int16_t x127 = 2455;
	int32_t t30 = 40;

	t30 = (((x125+x126)%x127)<=x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = -2661664541657560446LL;
	volatile int16_t x130 = INT16_MAX;
	uint32_t x131 = UINT32_MAX;
	int32_t x132 = -98248277;
	volatile int32_t t31 = 414761017;

	t31 = (((x129+x130)%x131)<=x132);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x134 = UINT8_MAX;
	int16_t x136 = INT16_MIN;
	int32_t t32 = 20153;

	t32 = (((x133+x134)%x135)<=x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x137 = -10447806163127LL;
	int16_t x139 = INT16_MIN;
	int16_t x140 = INT16_MIN;
	volatile int32_t t33 = -51;

	t33 = (((x137+x138)%x139)<=x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x141 = INT8_MAX;
	int64_t x143 = -1LL;
	uint32_t x144 = 45314U;
	int32_t t34 = 451387873;

	t34 = (((x141+x142)%x143)<=x144);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = -1;
	uint32_t x146 = UINT32_MAX;
	volatile int32_t t35 = 16267398;

	t35 = (((x145+x146)%x147)<=x148);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = INT64_MAX;
	int64_t x150 = INT64_MIN;
	int64_t x151 = -1LL;
	int64_t x152 = -1LL;
	int32_t t36 = 591350341;

	t36 = (((x149+x150)%x151)<=x152);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x153 = UINT8_MAX;
	volatile int16_t x154 = INT16_MIN;
	volatile int64_t x155 = 237534104LL;
	int64_t x156 = INT64_MAX;

	t37 = (((x153+x154)%x155)<=x156);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x158 = 1LL;
	int8_t x159 = 14;
	int8_t x160 = INT8_MIN;
	int32_t t38 = -167;

	t38 = (((x157+x158)%x159)<=x160);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x161 = INT32_MAX;
	int64_t x162 = INT64_MIN;
	static int8_t x163 = INT8_MIN;
	int8_t x164 = 43;
	static int32_t t39 = 8;

	t39 = (((x161+x162)%x163)<=x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = 16095;
	uint8_t x166 = 10U;
	volatile int64_t x168 = -377748LL;

	t40 = (((x165+x166)%x167)<=x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x169 = 600U;
	volatile uint16_t x170 = 2943U;
	int64_t x171 = INT64_MIN;
	int8_t x172 = INT8_MIN;
	volatile int32_t t41 = 32;

	t41 = (((x169+x170)%x171)<=x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = INT32_MIN;
	volatile int32_t x174 = INT32_MAX;
	static uint64_t x175 = 917847119LLU;
	volatile int16_t x176 = 629;
	static volatile int32_t t42 = -29995191;

	t42 = (((x173+x174)%x175)<=x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x177 = 3;
	int32_t x178 = 1;
	int8_t x179 = INT8_MIN;
	int8_t x180 = INT8_MAX;
	volatile int32_t t43 = 3724936;

	t43 = (((x177+x178)%x179)<=x180);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x181 = INT16_MIN;
	int8_t x182 = INT8_MIN;
	uint64_t x183 = 2178722899841490LLU;
	int64_t x184 = 50LL;
	static volatile int32_t t44 = -96419;

	t44 = (((x181+x182)%x183)<=x184);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x185 = 1062133869608LLU;
	volatile int32_t x186 = INT32_MIN;
	uint16_t x187 = 7U;
	volatile int32_t t45 = 853;

	t45 = (((x185+x186)%x187)<=x188);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = INT8_MAX;
	static int16_t x190 = INT16_MAX;
	static int32_t x191 = -12;
	int32_t t46 = 6775916;

	t46 = (((x189+x190)%x191)<=x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x193 = 4U;
	uint16_t x194 = UINT16_MAX;
	int64_t x195 = 110027672466019LL;
	static volatile int32_t t47 = 856916;

	t47 = (((x193+x194)%x195)<=x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint8_t x197 = 2U;
	volatile int8_t x198 = INT8_MIN;
	int16_t x199 = INT16_MAX;
	static volatile int64_t x200 = 180251LL;
	int32_t t48 = -5632;

	t48 = (((x197+x198)%x199)<=x200);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x201 = -1LL;
	volatile int8_t x202 = -1;
	static int32_t x203 = INT32_MIN;
	static int16_t x204 = INT16_MAX;
	static volatile int32_t t49 = -1;

	t49 = (((x201+x202)%x203)<=x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x205 = 7982U;
	uint32_t x207 = UINT32_MAX;
	int16_t x208 = -20;
	int32_t t50 = -1;

	t50 = (((x205+x206)%x207)<=x208);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x210 = 709;
	int8_t x211 = INT8_MIN;
	int32_t x212 = INT32_MIN;

	t51 = (((x209+x210)%x211)<=x212);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = -78098558;
	uint16_t x214 = 2207U;
	static int8_t x215 = 10;
	uint64_t x216 = UINT64_MAX;

	t52 = (((x213+x214)%x215)<=x216);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x217 = 9U;
	volatile int8_t x218 = INT8_MIN;
	static int8_t x220 = INT8_MIN;

	t53 = (((x217+x218)%x219)<=x220);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x225 = 70098U;
	uint16_t x226 = 3725U;
	int8_t x227 = INT8_MIN;
	static int16_t x228 = INT16_MAX;
	int32_t t54 = -5;

	t54 = (((x225+x226)%x227)<=x228);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x229 = 6522717LLU;
	static uint16_t x230 = 2952U;
	int16_t x232 = -1;

	t55 = (((x229+x230)%x231)<=x232);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x233 = 76U;
	static volatile int16_t x234 = -1;
	uint16_t x236 = 3U;
	volatile int32_t t56 = -1;

	t56 = (((x233+x234)%x235)<=x236);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x237 = INT32_MIN;
	int32_t x238 = 4219501;
	int64_t x239 = INT64_MAX;
	int16_t x240 = -132;
	int32_t t57 = -49478275;

	t57 = (((x237+x238)%x239)<=x240);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x245 = UINT64_MAX;
	volatile int16_t x246 = INT16_MIN;
	uint8_t x247 = 1U;
	volatile int64_t x248 = -1LL;
	int32_t t58 = 1346;

	t58 = (((x245+x246)%x247)<=x248);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x253 = -1438296637LL;
	static int64_t x254 = -1LL;

	t59 = (((x253+x254)%x255)<=x256);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x257 = -1;
	int64_t x258 = 651516LL;

	t60 = (((x257+x258)%x259)<=x260);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x261 = INT64_MIN;
	uint8_t x262 = 15U;
	int8_t x263 = INT8_MIN;
	int32_t x264 = INT32_MAX;

	t61 = (((x261+x262)%x263)<=x264);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x265 = UINT8_MAX;
	uint16_t x266 = 16563U;
	uint8_t x267 = 88U;
	volatile int32_t t62 = 171537118;

	t62 = (((x265+x266)%x267)<=x268);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x269 = INT16_MIN;
	uint64_t x270 = UINT64_MAX;
	static uint64_t x272 = UINT64_MAX;

	t63 = (((x269+x270)%x271)<=x272);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x273 = 13U;
	int64_t x274 = INT64_MIN;
	int32_t x275 = INT32_MIN;
	int8_t x276 = 0;
	int32_t t64 = 7705019;

	t64 = (((x273+x274)%x275)<=x276);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x277 = -1;
	uint16_t x278 = UINT16_MAX;
	static int32_t x279 = -1;
	uint32_t x280 = 1374999U;

	t65 = (((x277+x278)%x279)<=x280);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x282 = INT16_MAX;
	int16_t x283 = -1;
	uint32_t x284 = 650796536U;
	int32_t t66 = 0;

	t66 = (((x281+x282)%x283)<=x284);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint64_t x285 = 14298LLU;
	int16_t x286 = INT16_MAX;
	int32_t x287 = INT32_MIN;
	int32_t x288 = INT32_MIN;
	volatile int32_t t67 = 31;

	t67 = (((x285+x286)%x287)<=x288);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x289 = INT64_MAX;
	int16_t x290 = INT16_MIN;
	int32_t x291 = 87;
	volatile int32_t t68 = 0;

	t68 = (((x289+x290)%x291)<=x292);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x293 = 2327;
	int64_t x294 = INT64_MIN;
	static int16_t x295 = 42;
	static uint32_t x296 = 52879574U;
	volatile int32_t t69 = 1;

	t69 = (((x293+x294)%x295)<=x296);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x297 = -28081948040127LL;
	uint64_t x298 = 878747645130428266LLU;
	uint8_t x299 = 1U;
	uint8_t x300 = UINT8_MAX;
	int32_t t70 = 2706467;

	t70 = (((x297+x298)%x299)<=x300);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x301 = 0U;
	int8_t x302 = INT8_MIN;
	int16_t x303 = INT16_MIN;
	int32_t t71 = -158;

	t71 = (((x301+x302)%x303)<=x304);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x305 = INT8_MIN;
	uint16_t x306 = 51U;
	int64_t x307 = -1462759737LL;
	int64_t x308 = INT64_MAX;

	t72 = (((x305+x306)%x307)<=x308);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x314 = INT64_MIN;
	volatile uint16_t x315 = 1435U;
	static uint64_t x316 = 158700LLU;
	static volatile int32_t t73 = 11851386;

	t73 = (((x313+x314)%x315)<=x316);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x317 = INT16_MAX;
	int16_t x319 = INT16_MIN;
	static uint8_t x320 = UINT8_MAX;
	volatile int32_t t74 = -42969;

	t74 = (((x317+x318)%x319)<=x320);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int64_t x321 = -31329564197507057LL;
	volatile uint32_t x322 = UINT32_MAX;
	volatile int64_t x323 = INT64_MAX;
	int32_t x324 = INT32_MIN;
	int32_t t75 = 2;

	t75 = (((x321+x322)%x323)<=x324);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x325 = INT64_MIN;
	volatile uint64_t x326 = 8002742752483752LLU;
	uint16_t x327 = UINT16_MAX;
	uint16_t x328 = UINT16_MAX;
	static int32_t t76 = 5133041;

	t76 = (((x325+x326)%x327)<=x328);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x329 = -1;
	static uint32_t x331 = 36865518U;
	int32_t x332 = -460624;

	t77 = (((x329+x330)%x331)<=x332);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x337 = 30616LLU;
	int64_t x338 = -250687559LL;
	int64_t x339 = 2034316LL;
	static int16_t x340 = -1;
	int32_t t78 = -12676935;

	t78 = (((x337+x338)%x339)<=x340);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x342 = 119LLU;
	int32_t x343 = INT32_MAX;
	uint16_t x344 = 71U;
	volatile int32_t t79 = 8326368;

	t79 = (((x341+x342)%x343)<=x344);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x345 = UINT16_MAX;
	int16_t x346 = INT16_MIN;
	static uint16_t x348 = UINT16_MAX;
	static int32_t t80 = 4;

	t80 = (((x345+x346)%x347)<=x348);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x349 = INT16_MIN;
	int16_t x350 = INT16_MAX;
	int8_t x351 = 10;
	volatile int32_t t81 = 2824;

	t81 = (((x349+x350)%x351)<=x352);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x353 = 182543720U;
	uint16_t x354 = UINT16_MAX;
	uint64_t x355 = 60288021884565348LLU;
	int16_t x356 = INT16_MIN;
	static volatile int32_t t82 = -43;

	t82 = (((x353+x354)%x355)<=x356);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x357 = INT32_MIN;
	int64_t x358 = -1LL;
	static volatile int16_t x360 = -1;
	int32_t t83 = -112;

	t83 = (((x357+x358)%x359)<=x360);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x361 = 1893321LLU;
	static uint16_t x362 = 461U;
	int16_t x363 = -1;
	volatile int64_t x364 = INT64_MIN;
	volatile int32_t t84 = 501708040;

	t84 = (((x361+x362)%x363)<=x364);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x365 = INT64_MAX;
	int64_t x367 = -540998280050LL;
	uint8_t x368 = 30U;
	int32_t t85 = 2656;

	t85 = (((x365+x366)%x367)<=x368);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x371 = -1;
	volatile uint32_t x372 = UINT32_MAX;
	int32_t t86 = 91445117;

	t86 = (((x369+x370)%x371)<=x372);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x374 = 9;
	int64_t x375 = -1LL;
	static int64_t x376 = INT64_MIN;
	volatile int32_t t87 = -237;

	t87 = (((x373+x374)%x375)<=x376);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x377 = -25778124LL;
	uint8_t x379 = UINT8_MAX;
	static int8_t x380 = -7;
	static int32_t t88 = -1882122;

	t88 = (((x377+x378)%x379)<=x380);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x381 = UINT16_MAX;
	int32_t x382 = 7;
	int16_t x383 = INT16_MIN;
	int32_t t89 = -812300;

	t89 = (((x381+x382)%x383)<=x384);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x386 = -114073006LL;
	int8_t x387 = -9;
	uint64_t x388 = 13285109441798016LLU;
	volatile int32_t t90 = -1072174;

	t90 = (((x385+x386)%x387)<=x388);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x389 = -1LL;
	int16_t x391 = 1;
	uint64_t x392 = 1757823537746122LLU;
	int32_t t91 = -271686;

	t91 = (((x389+x390)%x391)<=x392);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x397 = 13U;
	int8_t x398 = 43;
	uint32_t x399 = 1U;
	volatile int32_t x400 = INT32_MIN;

	t92 = (((x397+x398)%x399)<=x400);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x401 = INT64_MIN;
	int64_t x403 = -2185796LL;
	int32_t x404 = INT32_MIN;
	volatile int32_t t93 = 743397;

	t93 = (((x401+x402)%x403)<=x404);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x405 = INT8_MIN;
	uint32_t x406 = 5U;
	volatile int8_t x407 = 3;
	int32_t x408 = -1;
	static int32_t t94 = 7;

	t94 = (((x405+x406)%x407)<=x408);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x409 = INT8_MIN;

	t95 = (((x409+x410)%x411)<=x412);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x413 = -1;
	static int16_t x414 = INT16_MAX;
	static volatile int64_t x415 = -1LL;
	static volatile uint32_t x416 = UINT32_MAX;
	static int32_t t96 = -1360587;

	t96 = (((x413+x414)%x415)<=x416);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x417 = 245U;
	volatile int64_t x418 = INT64_MIN;
	uint32_t x419 = UINT32_MAX;
	uint16_t x420 = UINT16_MAX;
	volatile int32_t t97 = 25033;

	t97 = (((x417+x418)%x419)<=x420);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x421 = -1;
	uint16_t x422 = 3955U;
	static int64_t x423 = INT64_MIN;
	int32_t t98 = -14880916;

	t98 = (((x421+x422)%x423)<=x424);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x426 = 13301337LLU;
	int32_t x427 = INT32_MAX;
	volatile int32_t t99 = 7447;

	t99 = (((x425+x426)%x427)<=x428);

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

