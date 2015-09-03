#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = -31;
uint8_t x10 = UINT8_MAX;
int8_t x11 = 2;
uint32_t x18 = 1980448944U;
uint64_t x19 = 21LLU;
static volatile int64_t t5 = INT64_MIN;
static volatile uint64_t x25 = UINT64_MAX;
uint64_t x26 = 103873807461504183LLU;
volatile int32_t t6 = -296785;
int32_t x39 = 236529;
static int64_t x41 = INT64_MAX;
uint64_t x42 = 584LLU;
uint8_t x46 = UINT8_MAX;
int64_t x47 = INT64_MIN;
volatile int8_t x49 = 1;
int64_t x51 = -347487942LL;
static int64_t x54 = INT64_MAX;
int16_t x57 = -1;
int32_t t14 = 0;
volatile int8_t x61 = -1;
int32_t x72 = INT32_MIN;
volatile int32_t t19 = 93;
int16_t x83 = INT16_MIN;
static int8_t x84 = -1;
int32_t t20 = 152654;
uint8_t x86 = 71U;
volatile int16_t x89 = -10;
volatile int32_t x90 = INT32_MAX;
int8_t x97 = 32;
volatile int16_t x98 = -1;
static uint64_t x100 = 0LLU;
volatile uint64_t t23 = 13458671457024126LLU;
int8_t x101 = -1;
int16_t x102 = 6;
int8_t x104 = INT8_MAX;
int32_t t24 = 1;
int32_t x106 = 394064202;
volatile int8_t x107 = INT8_MAX;
uint64_t x113 = UINT64_MAX;
uint32_t x114 = 79U;
int64_t x117 = INT64_MIN;
int32_t x119 = -1;
int32_t t30 = INT32_MIN;
volatile uint32_t x130 = 5715U;
static volatile int8_t x138 = 1;
int32_t x139 = -184;
int64_t x144 = INT64_MIN;
uint64_t x158 = UINT64_MAX;
int32_t x161 = INT32_MAX;
int8_t x167 = INT8_MIN;
int32_t x168 = INT32_MAX;
uint16_t x175 = UINT16_MAX;
volatile uint16_t x176 = 3956U;
static int32_t t42 = -284923;
volatile int64_t t43 = 7084091019967842LL;
uint16_t x191 = 200U;
uint64_t x198 = 103478443546821337LLU;
int64_t x199 = INT64_MIN;
static int8_t x200 = INT8_MIN;
static volatile uint32_t t50 = UINT32_MAX;
volatile uint64_t x210 = 465892409747030730LLU;
static int16_t x214 = INT16_MAX;
int8_t x217 = -1;
static uint64_t t53 = 76502LLU;
volatile int32_t t55 = 2374;
uint8_t x230 = UINT8_MAX;
static int16_t x232 = INT16_MIN;
volatile int32_t t57 = 313;
int32_t x246 = -198107622;
uint16_t x266 = UINT16_MAX;
int32_t t64 = 4799;
static volatile int8_t x271 = INT8_MIN;
int64_t x273 = 411472LL;
uint32_t x274 = 4493U;
int32_t x276 = INT32_MAX;
uint8_t x287 = UINT8_MAX;
int64_t x291 = -1LL;
static uint32_t x294 = 123851U;
static int32_t t71 = -13790089;
uint32_t x303 = UINT32_MAX;
int32_t t73 = 22731534;
static volatile int32_t x305 = -1262812;
uint8_t x307 = 3U;
int32_t x308 = -15507538;
volatile int32_t t74 = 1332334;
uint64_t x326 = UINT64_MAX;
int32_t x332 = -1;
int32_t t80 = 1027262201;
int8_t x333 = INT8_MIN;
uint64_t x336 = 13LLU;
volatile uint64_t t81 = 1347LLU;
uint32_t x338 = UINT32_MAX;
int64_t t82 = -4LL;
static int16_t x346 = -193;
int8_t x360 = INT8_MIN;
volatile int16_t x369 = 20;
volatile int16_t x371 = INT16_MAX;
int32_t x374 = -1513741;
int32_t x380 = -1;
int64_t x381 = -3347551278440230LL;
volatile int32_t x395 = 1388;
int16_t x398 = -575;
int32_t t96 = 5;
int64_t x402 = INT64_MAX;
int16_t x403 = -7629;
uint64_t x405 = UINT64_MAX;
int8_t x407 = INT8_MIN;
volatile int8_t x408 = INT8_MIN;
uint8_t x409 = UINT8_MAX;
int32_t t99 = 0;


void f0(void) {
	volatile int16_t x1 = -7952;
	static int32_t x2 = -1;
	int32_t x4 = INT32_MIN;
	int32_t t0 = -7528;

	t0 = (((x1%x2)<=x3)*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -1;
	int32_t x6 = -116;
	static int8_t x7 = -1;
	int32_t x8 = 1;
	static int32_t t1 = -475512;

	t1 = (((x5%x6)<=x7)*x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 15682U;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = 15;

	t2 = (((x9%x10)<=x11)*x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -30325LL;
	uint32_t x14 = UINT32_MAX;
	uint16_t x15 = UINT16_MAX;
	int8_t x16 = -18;
	volatile int32_t t3 = -332871;

	t3 = (((x13%x14)<=x15)*x16);

	if (t3 != -18) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	static int64_t x20 = 718216097441608LL;
	int64_t t4 = 382343824LL;

	t4 = (((x17%x18)<=x19)*x20);

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -51;
	static uint16_t x22 = 8117U;
	int64_t x23 = INT64_MAX;
	int64_t x24 = INT64_MIN;

	t5 = (((x21%x22)<=x23)*x24);

	if (t5 != INT64_MIN) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x27 = INT16_MIN;
	uint8_t x28 = 11U;

	t6 = (((x25%x26)<=x27)*x28);

	if (t6 != 11) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	volatile uint32_t x30 = 2012980U;
	int64_t x31 = INT64_MIN;
	volatile int16_t x32 = INT16_MAX;
	volatile int32_t t7 = -99;

	t7 = (((x29%x30)<=x31)*x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	uint32_t x34 = 9233167U;
	uint32_t x35 = 0U;
	int16_t x36 = -4095;
	static int32_t t8 = 22442455;

	t8 = (((x33%x34)<=x35)*x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	int8_t x38 = INT8_MIN;
	uint64_t x40 = 251LLU;
	static uint64_t t9 = 688465LLU;

	t9 = (((x37%x38)<=x39)*x40);

	if (t9 != 251LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x43 = UINT64_MAX;
	static int16_t x44 = INT16_MIN;
	volatile int32_t t10 = -523205837;

	t10 = (((x41%x42)<=x43)*x44);

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MAX;
	int32_t x48 = 13546;
	volatile int32_t t11 = -23470;

	t11 = (((x45%x46)<=x47)*x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = -1LL;
	int8_t x52 = -1;
	int32_t t12 = 0;

	t12 = (((x49%x50)<=x51)*x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int64_t x55 = INT64_MIN;
	int32_t x56 = INT32_MAX;
	volatile int32_t t13 = -117;

	t13 = (((x53%x54)<=x55)*x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = INT32_MIN;
	static int8_t x59 = INT8_MIN;
	int32_t x60 = INT32_MIN;

	t14 = (((x57%x58)<=x59)*x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x62 = -10839535181006LL;
	int64_t x63 = 32804006LL;
	int32_t x64 = 8154818;
	int32_t t15 = 110459389;

	t15 = (((x61%x62)<=x63)*x64);

	if (t15 != 8154818) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	uint32_t x66 = UINT32_MAX;
	int16_t x67 = INT16_MAX;
	int64_t x68 = 78474547LL;
	static volatile int64_t t16 = -14930LL;

	t16 = (((x65%x66)<=x67)*x68);

	if (t16 != 78474547LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = 1066;
	uint32_t x70 = UINT32_MAX;
	int32_t x71 = 65260740;
	int32_t t17 = INT32_MIN;

	t17 = (((x69%x70)<=x71)*x72);

	if (t17 != INT32_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 17039142691815303LLU;
	int64_t x74 = INT64_MAX;
	uint64_t x75 = 6457922192824767LLU;
	static volatile uint8_t x76 = 1U;
	volatile int32_t t18 = -16496217;

	t18 = (((x73%x74)<=x75)*x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x77 = -9015512;
	uint16_t x78 = 18U;
	static uint64_t x79 = UINT64_MAX;
	static volatile uint8_t x80 = 39U;

	t19 = (((x77%x78)<=x79)*x80);

	if (t19 != 39) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MAX;
	int64_t x82 = -1LL;

	t20 = (((x81%x82)<=x83)*x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = -1;
	uint8_t x87 = 107U;
	static int16_t x88 = INT16_MIN;
	int32_t t21 = 49;

	t21 = (((x85%x86)<=x87)*x88);

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x91 = INT8_MIN;
	int64_t x92 = 3352471674117257694LL;
	int64_t t22 = 14250LL;

	t22 = (((x89%x90)<=x91)*x92);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x99 = INT8_MIN;

	t23 = (((x97%x98)<=x99)*x100);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x103 = INT8_MIN;

	t24 = (((x101%x102)<=x103)*x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x105 = -1;
	volatile int8_t x108 = -7;
	volatile int32_t t25 = 662779;

	t25 = (((x105%x106)<=x107)*x108);

	if (t25 != -7) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = -1;
	uint32_t x110 = 829212949U;
	uint8_t x111 = 114U;
	uint32_t x112 = UINT32_MAX;
	volatile uint32_t t26 = 1156377U;

	t26 = (((x109%x110)<=x111)*x112);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x115 = INT8_MAX;
	uint64_t x116 = 67LLU;
	uint64_t t27 = 460203LLU;

	t27 = (((x113%x114)<=x115)*x116);

	if (t27 != 67LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x118 = UINT32_MAX;
	int32_t x120 = INT32_MIN;
	static int32_t t28 = INT32_MIN;

	t28 = (((x117%x118)<=x119)*x120);

	if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x121 = INT8_MAX;
	int32_t x122 = INT32_MIN;
	int32_t x123 = INT32_MIN;
	int64_t x124 = INT64_MIN;
	int64_t t29 = -58201LL;

	t29 = (((x121%x122)<=x123)*x124);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = -7410904049LL;
	static uint64_t x126 = UINT64_MAX;
	int8_t x127 = INT8_MIN;
	int32_t x128 = INT32_MIN;

	t30 = (((x125%x126)<=x127)*x128);

	if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = INT8_MAX;
	int16_t x131 = INT16_MIN;
	static uint64_t x132 = UINT64_MAX;
	uint64_t t31 = UINT64_MAX;

	t31 = (((x129%x130)<=x131)*x132);

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = 60;
	int64_t x134 = INT64_MAX;
	static int64_t x135 = -7286LL;
	int8_t x136 = INT8_MIN;
	volatile int32_t t32 = -675309;

	t32 = (((x133%x134)<=x135)*x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x137 = 330U;
	uint32_t x140 = 844187U;
	uint32_t t33 = 125U;

	t33 = (((x137%x138)<=x139)*x140);

	if (t33 != 844187U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x141 = UINT32_MAX;
	int8_t x142 = -1;
	static uint64_t x143 = UINT64_MAX;
	int64_t t34 = INT64_MIN;

	t34 = (((x141%x142)<=x143)*x144);

	if (t34 != INT64_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = -1956723;
	int64_t x146 = INT64_MAX;
	uint32_t x147 = 100493U;
	int32_t x148 = 5213;
	volatile int32_t t35 = -551;

	t35 = (((x145%x146)<=x147)*x148);

	if (t35 != 5213) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x149 = INT64_MIN;
	volatile int64_t x150 = -1LL;
	static uint64_t x151 = 26000103LLU;
	uint32_t x152 = UINT32_MAX;
	static uint32_t t36 = UINT32_MAX;

	t36 = (((x149%x150)<=x151)*x152);

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = INT64_MAX;
	int8_t x154 = INT8_MIN;
	static uint16_t x155 = 3U;
	volatile int64_t x156 = -1LL;
	volatile int64_t t37 = -12718000LL;

	t37 = (((x153%x154)<=x155)*x156);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x157 = -1LL;
	uint32_t x159 = 10179606U;
	int16_t x160 = INT16_MAX;
	volatile int32_t t38 = -8009;

	t38 = (((x157%x158)<=x159)*x160);

	if (t38 != 32767) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x162 = 666U;
	volatile int64_t x163 = -83140LL;
	int32_t x164 = INT32_MIN;
	volatile int32_t t39 = 969087209;

	t39 = (((x161%x162)<=x163)*x164);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x165 = -1;
	volatile int16_t x166 = -248;
	int32_t t40 = -95627;

	t40 = (((x165%x166)<=x167)*x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x169 = INT32_MIN;
	int32_t x170 = INT32_MAX;
	int32_t x171 = INT32_MIN;
	uint16_t x172 = 10U;
	volatile int32_t t41 = 3472;

	t41 = (((x169%x170)<=x171)*x172);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x173 = -1;
	uint32_t x174 = UINT32_MAX;

	t42 = (((x173%x174)<=x175)*x176);

	if (t42 != 3956) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = -1669454408742631LL;
	uint8_t x178 = 2U;
	static int16_t x179 = INT16_MAX;
	int64_t x180 = -1LL;

	t43 = (((x177%x178)<=x179)*x180);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = INT16_MIN;
	static volatile uint64_t x182 = 75176303LLU;
	int8_t x183 = INT8_MIN;
	int16_t x184 = -1;
	volatile int32_t t44 = 143;

	t44 = (((x181%x182)<=x183)*x184);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x185 = UINT8_MAX;
	int16_t x186 = INT16_MIN;
	static int64_t x187 = -2712847006208450234LL;
	static int16_t x188 = INT16_MAX;
	volatile int32_t t45 = -435768886;

	t45 = (((x185%x186)<=x187)*x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int16_t x189 = INT16_MIN;
	volatile int32_t x190 = INT32_MAX;
	static volatile uint32_t x192 = 482U;
	uint32_t t46 = 95493247U;

	t46 = (((x189%x190)<=x191)*x192);

	if (t46 != 482U) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x193 = -1LL;
	int64_t x194 = INT64_MIN;
	uint32_t x195 = 1264U;
	int8_t x196 = -1;
	int32_t t47 = 55073948;

	t47 = (((x193%x194)<=x195)*x196);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x197 = 30U;
	volatile int32_t t48 = 0;

	t48 = (((x197%x198)<=x199)*x200);

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = INT16_MIN;
	volatile uint8_t x202 = 2U;
	int8_t x203 = 0;
	uint32_t x204 = 641U;
	static uint32_t t49 = 120U;

	t49 = (((x201%x202)<=x203)*x204);

	if (t49 != 641U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x205 = UINT8_MAX;
	uint8_t x206 = UINT8_MAX;
	volatile uint16_t x207 = 16235U;
	uint32_t x208 = UINT32_MAX;

	t50 = (((x205%x206)<=x207)*x208);

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = 0;
	int32_t x211 = INT32_MIN;
	static uint8_t x212 = UINT8_MAX;
	volatile int32_t t51 = -69680308;

	t51 = (((x209%x210)<=x211)*x212);

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x213 = INT16_MIN;
	int16_t x215 = INT16_MIN;
	int8_t x216 = INT8_MAX;
	int32_t t52 = -1;

	t52 = (((x213%x214)<=x215)*x216);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x218 = 8222534503108948380LLU;
	int16_t x219 = -1;
	uint64_t x220 = 11LLU;

	t53 = (((x217%x218)<=x219)*x220);

	if (t53 != 11LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint8_t x221 = 0U;
	int32_t x222 = -651202683;
	static int64_t x223 = -1LL;
	int16_t x224 = 1;
	int32_t t54 = -3051466;

	t54 = (((x221%x222)<=x223)*x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = INT16_MIN;
	int8_t x226 = INT8_MAX;
	volatile int32_t x227 = -120260879;
	int32_t x228 = -29271;

	t55 = (((x225%x226)<=x227)*x228);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = INT64_MIN;
	uint32_t x231 = 20948328U;
	volatile int32_t t56 = 145822431;

	t56 = (((x229%x230)<=x231)*x232);

	if (t56 != -32768) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x233 = INT8_MAX;
	static int16_t x234 = INT16_MIN;
	int8_t x235 = 10;
	int8_t x236 = -1;

	t57 = (((x233%x234)<=x235)*x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = INT64_MIN;
	int64_t x238 = -1LL;
	uint32_t x239 = 47U;
	int8_t x240 = INT8_MIN;
	static volatile int32_t t58 = -3;

	t58 = (((x237%x238)<=x239)*x240);

	if (t58 != -128) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x241 = 199355474U;
	static volatile int32_t x242 = 2;
	static uint32_t x243 = UINT32_MAX;
	int8_t x244 = INT8_MIN;
	static volatile int32_t t59 = 30;

	t59 = (((x241%x242)<=x243)*x244);

	if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x245 = 2U;
	int32_t x247 = 448879298;
	uint64_t x248 = 1855656560617742345LLU;
	volatile uint64_t t60 = 22052594728985LLU;

	t60 = (((x245%x246)<=x247)*x248);

	if (t60 != 1855656560617742345LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x249 = 24U;
	int64_t x250 = 27723034LL;
	int16_t x251 = INT16_MIN;
	static uint32_t x252 = UINT32_MAX;
	static volatile uint32_t t61 = 126527U;

	t61 = (((x249%x250)<=x251)*x252);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int16_t x257 = 755;
	static uint16_t x258 = 7U;
	volatile uint64_t x259 = 49029165957494252LLU;
	uint16_t x260 = UINT16_MAX;
	int32_t t62 = -27077365;

	t62 = (((x257%x258)<=x259)*x260);

	if (t62 != 65535) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x261 = INT16_MAX;
	int64_t x262 = INT64_MIN;
	uint8_t x263 = UINT8_MAX;
	static int64_t x264 = -1LL;
	int64_t t63 = -6289601506LL;

	t63 = (((x261%x262)<=x263)*x264);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x265 = INT8_MIN;
	volatile int32_t x267 = INT32_MIN;
	uint8_t x268 = UINT8_MAX;

	t64 = (((x265%x266)<=x267)*x268);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x269 = INT64_MIN;
	static int8_t x270 = 9;
	static int32_t x272 = -1;
	int32_t t65 = -15361;

	t65 = (((x269%x270)<=x271)*x272);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x275 = INT16_MAX;
	static volatile int32_t t66 = INT32_MAX;

	t66 = (((x273%x274)<=x275)*x276);

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x277 = 4U;
	static int16_t x278 = INT16_MIN;
	uint8_t x279 = UINT8_MAX;
	volatile uint32_t x280 = 18903474U;
	volatile uint32_t t67 = 1U;

	t67 = (((x277%x278)<=x279)*x280);

	if (t67 != 18903474U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x281 = -678;
	int8_t x282 = INT8_MAX;
	static int8_t x283 = -1;
	static int32_t x284 = INT32_MAX;
	static int32_t t68 = INT32_MAX;

	t68 = (((x281%x282)<=x283)*x284);

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x285 = INT32_MIN;
	int16_t x286 = -1;
	int8_t x288 = INT8_MIN;
	int32_t t69 = 4757668;

	t69 = (((x285%x286)<=x287)*x288);

	if (t69 != -128) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x289 = INT8_MIN;
	volatile uint64_t x290 = 67441479073216132LLU;
	static int32_t x292 = INT32_MIN;
	int32_t t70 = INT32_MIN;

	t70 = (((x289%x290)<=x291)*x292);

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x293 = INT8_MIN;
	int16_t x295 = 1;
	uint16_t x296 = 56U;

	t71 = (((x293%x294)<=x295)*x296);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x297 = UINT16_MAX;
	uint64_t x298 = UINT64_MAX;
	uint8_t x299 = 1U;
	volatile int64_t x300 = -20209237LL;
	volatile int64_t t72 = -10472LL;

	t72 = (((x297%x298)<=x299)*x300);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x301 = 0;
	uint8_t x302 = UINT8_MAX;
	int16_t x304 = 15825;

	t73 = (((x301%x302)<=x303)*x304);

	if (t73 != 15825) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x306 = -2;

	t74 = (((x305%x306)<=x307)*x308);

	if (t74 != -15507538) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x309 = INT16_MIN;
	volatile int32_t x310 = 1;
	volatile int64_t x311 = 1277LL;
	static volatile uint32_t x312 = 154563U;
	uint32_t t75 = 606546U;

	t75 = (((x309%x310)<=x311)*x312);

	if (t75 != 154563U) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x313 = -1LL;
	static int16_t x314 = INT16_MIN;
	static int32_t x315 = INT32_MIN;
	static int64_t x316 = INT64_MAX;
	int64_t t76 = 20847749LL;

	t76 = (((x313%x314)<=x315)*x316);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = INT32_MIN;
	uint32_t x318 = 1U;
	uint32_t x319 = 7601U;
	volatile uint32_t x320 = 42040377U;
	uint32_t t77 = 24786U;

	t77 = (((x317%x318)<=x319)*x320);

	if (t77 != 42040377U) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x321 = -1;
	static uint8_t x322 = UINT8_MAX;
	uint16_t x323 = UINT16_MAX;
	int8_t x324 = INT8_MIN;
	static volatile int32_t t78 = -1;

	t78 = (((x321%x322)<=x323)*x324);

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x325 = -1;
	int8_t x327 = INT8_MAX;
	static int32_t x328 = INT32_MIN;
	int32_t t79 = INT32_MIN;

	t79 = (((x325%x326)<=x327)*x328);

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x329 = INT8_MIN;
	int16_t x330 = INT16_MAX;
	volatile int16_t x331 = 7516;

	t80 = (((x329%x330)<=x331)*x332);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x334 = 165LL;
	volatile uint32_t x335 = 15661934U;

	t81 = (((x333%x334)<=x335)*x336);

	if (t81 != 13LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x337 = -317;
	uint64_t x339 = UINT64_MAX;
	volatile int64_t x340 = 8040407952LL;

	t82 = (((x337%x338)<=x339)*x340);

	if (t82 != 8040407952LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x345 = 30450LLU;
	static int32_t x347 = INT32_MIN;
	int32_t x348 = -1;
	volatile int32_t t83 = 1;

	t83 = (((x345%x346)<=x347)*x348);

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x349 = 6;
	int32_t x350 = -3066462;
	static int32_t x351 = INT32_MIN;
	int64_t x352 = -2499462800020855614LL;
	int64_t t84 = 1LL;

	t84 = (((x349%x350)<=x351)*x352);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x353 = 4U;
	uint32_t x354 = 7961021U;
	volatile uint8_t x355 = 4U;
	uint64_t x356 = UINT64_MAX;
	uint64_t t85 = UINT64_MAX;

	t85 = (((x353%x354)<=x355)*x356);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x357 = INT64_MIN;
	volatile int8_t x358 = INT8_MAX;
	static int64_t x359 = -1LL;
	volatile int32_t t86 = -16069;

	t86 = (((x357%x358)<=x359)*x360);

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x361 = INT16_MIN;
	volatile uint32_t x362 = 1043969883U;
	static uint8_t x363 = 58U;
	uint16_t x364 = UINT16_MAX;
	volatile int32_t t87 = 1;

	t87 = (((x361%x362)<=x363)*x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x365 = INT8_MAX;
	int16_t x366 = INT16_MIN;
	uint16_t x367 = UINT16_MAX;
	int16_t x368 = -51;
	volatile int32_t t88 = 1;

	t88 = (((x365%x366)<=x367)*x368);

	if (t88 != -51) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x370 = 410844968U;
	volatile uint32_t x372 = UINT32_MAX;
	uint32_t t89 = UINT32_MAX;

	t89 = (((x369%x370)<=x371)*x372);

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x373 = 0;
	int32_t x375 = -1;
	uint8_t x376 = 3U;
	int32_t t90 = 11121545;

	t90 = (((x373%x374)<=x375)*x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x377 = -1;
	uint32_t x378 = 521U;
	int32_t x379 = INT32_MIN;
	volatile int32_t t91 = 26034;

	t91 = (((x377%x378)<=x379)*x380);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x382 = -1;
	int64_t x383 = INT64_MIN;
	volatile int64_t x384 = INT64_MAX;
	volatile int64_t t92 = 75683192LL;

	t92 = (((x381%x382)<=x383)*x384);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x385 = INT16_MIN;
	int64_t x386 = INT64_MIN;
	int32_t x387 = -63154143;
	static int32_t x388 = 16085441;
	int32_t t93 = 47701648;

	t93 = (((x385%x386)<=x387)*x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x389 = INT8_MAX;
	int8_t x390 = INT8_MIN;
	int64_t x391 = INT64_MAX;
	int16_t x392 = 8;
	int32_t t94 = -12332839;

	t94 = (((x389%x390)<=x391)*x392);

	if (t94 != 8) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x393 = 17U;
	int32_t x394 = -1;
	volatile int16_t x396 = 7585;
	static volatile int32_t t95 = 34;

	t95 = (((x393%x394)<=x395)*x396);

	if (t95 != 7585) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x397 = INT64_MIN;
	uint16_t x399 = 421U;
	uint8_t x400 = 1U;

	t96 = (((x397%x398)<=x399)*x400);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x401 = -6717;
	int16_t x404 = 1;
	static int32_t t97 = 5015;

	t97 = (((x401%x402)<=x403)*x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x406 = -3;
	volatile int32_t t98 = -25829;

	t98 = (((x405%x406)<=x407)*x408);

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x410 = INT8_MIN;
	volatile int32_t x411 = -1;
	int8_t x412 = INT8_MIN;

	t99 = (((x409%x410)<=x411)*x412);

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

