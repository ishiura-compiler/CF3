#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x8 = INT8_MIN;
volatile int32_t t2 = -3524;
int16_t x15 = -1;
int64_t x21 = -1LL;
static int8_t x23 = 2;
int8_t x27 = -1;
int32_t t6 = -36033;
int16_t x29 = 953;
volatile uint16_t x35 = 0U;
int32_t x36 = INT32_MAX;
int32_t t10 = 6;
static volatile uint16_t x47 = 1U;
int64_t x51 = INT64_MIN;
int16_t x53 = 0;
static uint8_t x62 = 4U;
int32_t t15 = -370;
static uint8_t x65 = UINT8_MAX;
volatile uint8_t x69 = 115U;
int8_t x73 = INT8_MIN;
int64_t x75 = INT64_MIN;
int32_t t19 = 7527;
int16_t x95 = 661;
static int8_t x98 = 1;
volatile int32_t t24 = 2828;
volatile int64_t x101 = -1LL;
int64_t x106 = INT64_MIN;
volatile int16_t x108 = -15302;
int64_t x111 = INT64_MAX;
int32_t x114 = 11578;
int32_t t29 = 19145;
static uint64_t x127 = 744590542862LLU;
int32_t t31 = 11;
uint16_t x132 = 0U;
int32_t x137 = INT32_MIN;
static int32_t x144 = 897224354;
volatile int64_t x148 = INT64_MIN;
volatile int32_t t37 = 8363;
int32_t t38 = 77112437;
uint16_t x159 = UINT16_MAX;
volatile int32_t t39 = 0;
int64_t x168 = -1LL;
volatile int8_t x169 = INT8_MIN;
static int32_t x170 = INT32_MAX;
static volatile int8_t x172 = -1;
uint32_t x178 = UINT32_MAX;
static int16_t x180 = INT16_MIN;
int8_t x183 = -1;
volatile int32_t t45 = 21223414;
int64_t x191 = -1LL;
int32_t x210 = INT32_MAX;
int32_t x217 = 3852;
volatile int32_t t54 = 18182059;
uint32_t x226 = 413776325U;
int64_t x227 = -55LL;
int32_t x237 = INT32_MAX;
uint8_t x238 = UINT8_MAX;
int32_t t59 = 2317919;
static volatile int32_t x241 = 248386563;
uint32_t x242 = UINT32_MAX;
int32_t t61 = 259409238;
int32_t x249 = -2362;
static uint64_t x252 = 0LLU;
static int32_t t62 = -8369;
volatile uint32_t x256 = UINT32_MAX;
int32_t x260 = INT32_MIN;
static uint16_t x263 = UINT16_MAX;
volatile int64_t x268 = INT64_MIN;
int8_t x270 = 1;
int32_t x281 = 295983585;
int64_t x283 = 2940085LL;
uint32_t x285 = UINT32_MAX;
int8_t x292 = 40;
volatile int32_t t72 = 6195491;
int8_t x293 = INT8_MIN;
static int16_t x297 = -1;
int32_t t74 = -55;
int64_t x310 = INT64_MAX;
volatile int32_t x317 = INT32_MAX;
static volatile int32_t x318 = INT32_MAX;
int32_t x319 = -158;
volatile int64_t x326 = -1622249313LL;
int32_t x333 = -1;
int32_t x334 = INT32_MAX;
int32_t t83 = 425624;
int8_t x346 = INT8_MIN;
volatile uint64_t x349 = UINT64_MAX;
int32_t t87 = -1825661;
uint8_t x354 = 0U;
volatile int64_t x372 = -14LL;
int32_t t93 = 3999;
static int8_t x377 = INT8_MIN;
int64_t x379 = -1LL;
int64_t x384 = -97204010455110LL;
uint16_t x386 = 7U;
uint8_t x389 = UINT8_MAX;
int16_t x391 = -20;
volatile int32_t x395 = 43669316;
uint16_t x396 = 1033U;
int32_t t98 = -25656951;


void f0(void) {
	static int64_t x1 = 0LL;
	int64_t x2 = -1639208179754549LL;
	int32_t x3 = -1;
	int32_t x4 = 6766519;
	static volatile int32_t t0 = -50977077;

	t0 = (((x1^x2)&x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint8_t x5 = 2U;
	int64_t x6 = INT64_MAX;
	int8_t x7 = -27;
	static int32_t t1 = 50682910;

	t1 = (((x5^x6)&x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 43U;
	volatile int8_t x10 = INT8_MIN;
	int64_t x11 = INT64_MIN;
	int64_t x12 = INT64_MIN;

	t2 = (((x9^x10)&x11)==x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 7U;
	int32_t x14 = INT32_MIN;
	int16_t x16 = -1;
	int32_t t3 = -29657764;

	t3 = (((x13^x14)&x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int16_t x18 = -1;
	volatile int8_t x19 = -23;
	int64_t x20 = INT64_MIN;
	volatile int32_t t4 = -11927;

	t4 = (((x17^x18)&x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = INT16_MIN;
	uint16_t x24 = 2055U;
	int32_t t5 = 6552801;

	t5 = (((x21^x22)&x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x25 = INT64_MAX;
	int64_t x26 = INT64_MIN;
	uint8_t x28 = 4U;

	t6 = (((x25^x26)&x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x30 = 0U;
	static int64_t x31 = -401283310LL;
	int8_t x32 = -1;
	static volatile int32_t t7 = 41426044;

	t7 = (((x29^x30)&x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MAX;
	uint16_t x34 = UINT16_MAX;
	volatile int32_t t8 = 212;

	t8 = (((x33^x34)&x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -240LL;
	int16_t x38 = INT16_MIN;
	uint32_t x39 = 17495U;
	static int8_t x40 = INT8_MAX;
	static volatile int32_t t9 = -3;

	t9 = (((x37^x38)&x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 2U;
	uint8_t x42 = UINT8_MAX;
	volatile uint32_t x43 = UINT32_MAX;
	volatile uint8_t x44 = UINT8_MAX;

	t10 = (((x41^x42)&x43)==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 59U;
	int16_t x46 = INT16_MIN;
	volatile int8_t x48 = INT8_MIN;
	volatile int32_t t11 = -3497256;

	t11 = (((x45^x46)&x47)==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1678;
	int64_t x50 = INT64_MAX;
	uint16_t x52 = 7U;
	volatile int32_t t12 = 38534;

	t12 = (((x49^x50)&x51)==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x54 = 4;
	volatile int16_t x55 = INT16_MIN;
	int8_t x56 = -48;
	volatile int32_t t13 = -25868899;

	t13 = (((x53^x54)&x55)==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x57 = 217U;
	static volatile uint8_t x58 = 0U;
	static volatile int64_t x59 = 8629146435621LL;
	static volatile int32_t x60 = -1;
	int32_t t14 = -983670277;

	t14 = (((x57^x58)&x59)==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = -1LL;
	uint64_t x63 = 17LLU;
	static uint8_t x64 = 1U;

	t15 = (((x61^x62)&x63)==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x66 = 1LL;
	volatile int64_t x67 = 129460307105LL;
	volatile int8_t x68 = INT8_MAX;
	volatile int32_t t16 = 0;

	t16 = (((x65^x66)&x67)==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x70 = INT8_MAX;
	volatile int16_t x71 = -7;
	volatile uint8_t x72 = 0U;
	int32_t t17 = 12;

	t17 = (((x69^x70)&x71)==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = -3;
	uint32_t x76 = 515147125U;
	volatile int32_t t18 = -1;

	t18 = (((x73^x74)&x75)==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = -1;
	uint32_t x78 = UINT32_MAX;
	uint64_t x79 = UINT64_MAX;
	static int16_t x80 = INT16_MAX;

	t19 = (((x77^x78)&x79)==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint64_t x81 = 13523660290659LLU;
	int8_t x82 = -1;
	static uint16_t x83 = 14U;
	uint16_t x84 = 21U;
	int32_t t20 = 0;

	t20 = (((x81^x82)&x83)==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	int16_t x86 = -51;
	uint16_t x87 = 6445U;
	int8_t x88 = 0;
	int32_t t21 = 1863;

	t21 = (((x85^x86)&x87)==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = 0;
	static uint64_t x90 = 3886041497LLU;
	int64_t x91 = -1LL;
	static volatile int8_t x92 = INT8_MIN;
	int32_t t22 = 145;

	t22 = (((x89^x90)&x91)==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	int8_t x94 = -1;
	uint16_t x96 = 642U;
	int32_t t23 = -59;

	t23 = (((x93^x94)&x95)==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = 42U;
	volatile uint64_t x99 = UINT64_MAX;
	int8_t x100 = INT8_MIN;

	t24 = (((x97^x98)&x99)==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x102 = -486853261;
	int16_t x103 = INT16_MAX;
	int8_t x104 = INT8_MIN;
	volatile int32_t t25 = -441522;

	t25 = (((x101^x102)&x103)==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MAX;
	uint8_t x107 = 21U;
	int32_t t26 = 60868;

	t26 = (((x105^x106)&x107)==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 987263946U;
	int64_t x110 = -975305377LL;
	volatile int8_t x112 = -1;
	int32_t t27 = -2364;

	t27 = (((x109^x110)&x111)==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = 3;
	int16_t x115 = -15415;
	int64_t x116 = INT64_MAX;
	int32_t t28 = 1675466;

	t28 = (((x113^x114)&x115)==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 538107089U;
	int16_t x118 = INT16_MIN;
	int32_t x119 = -1;
	volatile uint32_t x120 = UINT32_MAX;

	t29 = (((x117^x118)&x119)==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = INT64_MAX;
	int8_t x122 = INT8_MIN;
	volatile uint64_t x123 = 3747685LLU;
	int64_t x124 = 58133431915LL;
	volatile int32_t t30 = -48076911;

	t30 = (((x121^x122)&x123)==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -1;
	volatile uint32_t x126 = 453863706U;
	int8_t x128 = INT8_MIN;

	t31 = (((x125^x126)&x127)==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x129 = INT16_MIN;
	int64_t x130 = INT64_MIN;
	volatile int32_t x131 = -1;
	int32_t t32 = 46997;

	t32 = (((x129^x130)&x131)==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = 125U;
	uint32_t x134 = 1U;
	int64_t x135 = 1LL;
	uint64_t x136 = 259LLU;
	volatile int32_t t33 = 45;

	t33 = (((x133^x134)&x135)==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x138 = UINT32_MAX;
	volatile uint64_t x139 = UINT64_MAX;
	uint64_t x140 = 40LLU;
	int32_t t34 = 70139938;

	t34 = (((x137^x138)&x139)==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	int16_t x142 = INT16_MIN;
	int64_t x143 = -641286939LL;
	volatile int32_t t35 = 45500596;

	t35 = (((x141^x142)&x143)==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = UINT64_MAX;
	int32_t x146 = INT32_MAX;
	int8_t x147 = -4;
	int32_t t36 = -32930780;

	t36 = (((x145^x146)&x147)==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = 538409384335559LL;
	int16_t x150 = INT16_MAX;
	volatile int64_t x151 = INT64_MIN;
	static int32_t x152 = INT32_MIN;

	t37 = (((x149^x150)&x151)==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 62347936735178966LLU;
	int16_t x154 = INT16_MAX;
	static int64_t x155 = 106370125928120LL;
	int8_t x156 = -6;

	t38 = (((x153^x154)&x155)==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 24853653437850LLU;
	int64_t x158 = INT64_MAX;
	int64_t x160 = 114794LL;

	t39 = (((x157^x158)&x159)==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x161 = INT32_MAX;
	static volatile int8_t x162 = INT8_MAX;
	int16_t x163 = -1;
	volatile uint32_t x164 = UINT32_MAX;
	volatile int32_t t40 = -376;

	t40 = (((x161^x162)&x163)==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	uint16_t x166 = UINT16_MAX;
	int16_t x167 = INT16_MAX;
	volatile int32_t t41 = 3548778;

	t41 = (((x165^x166)&x167)==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x171 = INT32_MIN;
	static volatile int32_t t42 = -191114;

	t42 = (((x169^x170)&x171)==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = 15469951350399198LL;
	uint64_t x174 = UINT64_MAX;
	int8_t x175 = 0;
	int32_t x176 = -588396140;
	volatile int32_t t43 = -602991;

	t43 = (((x173^x174)&x175)==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -1499LL;
	int8_t x179 = -1;
	volatile int32_t t44 = 1191971;

	t44 = (((x177^x178)&x179)==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = 1;
	int8_t x182 = -56;
	int16_t x184 = INT16_MIN;

	t45 = (((x181^x182)&x183)==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	volatile uint16_t x186 = 2U;
	volatile int8_t x187 = -1;
	int16_t x188 = 92;
	static volatile int32_t t46 = 119081262;

	t46 = (((x185^x186)&x187)==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 25U;
	volatile int32_t x190 = -503275;
	uint16_t x192 = 608U;
	volatile int32_t t47 = 14097;

	t47 = (((x189^x190)&x191)==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MIN;
	volatile uint16_t x194 = UINT16_MAX;
	int32_t x195 = -1;
	int16_t x196 = 1307;
	static int32_t t48 = 114747249;

	t48 = (((x193^x194)&x195)==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x197 = UINT64_MAX;
	int16_t x198 = INT16_MIN;
	static volatile int16_t x199 = INT16_MIN;
	static int64_t x200 = -5LL;
	volatile int32_t t49 = -41769992;

	t49 = (((x197^x198)&x199)==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	volatile int16_t x202 = INT16_MIN;
	volatile int32_t x203 = INT32_MIN;
	uint8_t x204 = UINT8_MAX;
	volatile int32_t t50 = 731;

	t50 = (((x201^x202)&x203)==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x205 = UINT8_MAX;
	int64_t x206 = 1087247LL;
	static uint32_t x207 = 351069711U;
	volatile int16_t x208 = -76;
	volatile int32_t t51 = 1748;

	t51 = (((x205^x206)&x207)==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = UINT32_MAX;
	volatile int32_t x211 = -1;
	int32_t x212 = INT32_MAX;
	int32_t t52 = -43;

	t52 = (((x209^x210)&x211)==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	uint8_t x214 = UINT8_MAX;
	volatile uint64_t x215 = 3758039893235920387LLU;
	int8_t x216 = -1;
	int32_t t53 = 31813273;

	t53 = (((x213^x214)&x215)==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x218 = -1;
	uint16_t x219 = 13116U;
	uint8_t x220 = 15U;

	t54 = (((x217^x218)&x219)==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MAX;
	int16_t x222 = INT16_MAX;
	int8_t x223 = INT8_MIN;
	int64_t x224 = -219495505806466LL;
	volatile int32_t t55 = -3327;

	t55 = (((x221^x222)&x223)==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	int32_t x228 = -4;
	int32_t t56 = -5;

	t56 = (((x225^x226)&x227)==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	volatile int64_t x230 = INT64_MIN;
	int64_t x231 = -1LL;
	uint8_t x232 = 16U;
	static volatile int32_t t57 = 6;

	t57 = (((x229^x230)&x231)==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x233 = UINT8_MAX;
	static int8_t x234 = INT8_MIN;
	volatile int16_t x235 = INT16_MAX;
	static int8_t x236 = INT8_MIN;
	int32_t t58 = 1;

	t58 = (((x233^x234)&x235)==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x239 = -1LL;
	static int16_t x240 = -17;

	t59 = (((x237^x238)&x239)==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x243 = INT8_MIN;
	static uint64_t x244 = 106445LLU;
	volatile int32_t t60 = 16542;

	t60 = (((x241^x242)&x243)==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = 448764;
	int32_t x246 = INT32_MAX;
	uint64_t x247 = 833064LLU;
	int32_t x248 = -1;

	t61 = (((x245^x246)&x247)==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x250 = -3539;
	int16_t x251 = -1727;

	t62 = (((x249^x250)&x251)==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = 38181290;
	uint64_t x254 = 118563909LLU;
	int8_t x255 = INT8_MIN;
	volatile int32_t t63 = 11243;

	t63 = (((x253^x254)&x255)==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -1;
	uint16_t x258 = 2U;
	static volatile uint32_t x259 = 78245330U;
	volatile int32_t t64 = 17904;

	t64 = (((x257^x258)&x259)==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 29U;
	volatile uint16_t x262 = 1760U;
	int8_t x264 = INT8_MAX;
	int32_t t65 = -1764869;

	t65 = (((x261^x262)&x263)==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x265 = INT32_MIN;
	int16_t x266 = -1;
	int16_t x267 = 484;
	static int32_t t66 = 19177;

	t66 = (((x265^x266)&x267)==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MAX;
	uint64_t x271 = 3LLU;
	volatile int16_t x272 = 107;
	int32_t t67 = 1448;

	t67 = (((x269^x270)&x271)==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x273 = INT8_MIN;
	int64_t x274 = INT64_MIN;
	volatile uint32_t x275 = UINT32_MAX;
	volatile int32_t x276 = 66;
	int32_t t68 = 28389;

	t68 = (((x273^x274)&x275)==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -139552742647846487LL;
	int64_t x278 = -54171666LL;
	volatile int32_t x279 = -1;
	uint64_t x280 = 808470LLU;
	int32_t t69 = 0;

	t69 = (((x277^x278)&x279)==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x282 = INT32_MIN;
	int64_t x284 = INT64_MIN;
	volatile int32_t t70 = -939347;

	t70 = (((x281^x282)&x283)==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x286 = INT32_MIN;
	volatile uint32_t x287 = UINT32_MAX;
	static int8_t x288 = 52;
	volatile int32_t t71 = -7918;

	t71 = (((x285^x286)&x287)==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -1;
	uint32_t x290 = 23038724U;
	static int8_t x291 = 1;

	t72 = (((x289^x290)&x291)==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x294 = INT8_MIN;
	uint32_t x295 = UINT32_MAX;
	int32_t x296 = -614;
	int32_t t73 = 315694843;

	t73 = (((x293^x294)&x295)==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x298 = 515U;
	uint8_t x299 = 54U;
	volatile int16_t x300 = -1;

	t74 = (((x297^x298)&x299)==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = INT8_MIN;
	uint64_t x302 = 829053999929372LLU;
	int32_t x303 = -5197807;
	int32_t x304 = INT32_MAX;
	static int32_t t75 = -47481241;

	t75 = (((x301^x302)&x303)==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x305 = -823;
	int32_t x306 = INT32_MAX;
	static int8_t x307 = INT8_MIN;
	uint16_t x308 = UINT16_MAX;
	int32_t t76 = -13360623;

	t76 = (((x305^x306)&x307)==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -1LL;
	static uint8_t x311 = UINT8_MAX;
	volatile int8_t x312 = INT8_MIN;
	int32_t t77 = 1639145;

	t77 = (((x309^x310)&x311)==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x313 = -1;
	static int8_t x314 = INT8_MIN;
	volatile int64_t x315 = 10896064839676LL;
	uint16_t x316 = 103U;
	volatile int32_t t78 = -94099;

	t78 = (((x313^x314)&x315)==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x320 = -1;
	static int32_t t79 = -62698;

	t79 = (((x317^x318)&x319)==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x321 = -36;
	volatile uint32_t x322 = 46127518U;
	uint8_t x323 = 6U;
	static int8_t x324 = -1;
	volatile int32_t t80 = -1216343;

	t80 = (((x321^x322)&x323)==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 75918LLU;
	volatile uint32_t x327 = UINT32_MAX;
	int8_t x328 = -1;
	static int32_t t81 = -1968172;

	t81 = (((x325^x326)&x327)==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 9U;
	int8_t x330 = 2;
	static uint64_t x331 = 33434303481LLU;
	uint32_t x332 = 27009U;
	int32_t t82 = 987479;

	t82 = (((x329^x330)&x331)==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x335 = INT64_MAX;
	uint8_t x336 = 7U;

	t83 = (((x333^x334)&x335)==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = INT32_MAX;
	uint32_t x338 = 305186U;
	uint8_t x339 = UINT8_MAX;
	int8_t x340 = -1;
	volatile int32_t t84 = -191;

	t84 = (((x337^x338)&x339)==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MAX;
	volatile int64_t x342 = INT64_MIN;
	volatile int32_t x343 = -2070948;
	int64_t x344 = INT64_MIN;
	volatile int32_t t85 = -488;

	t85 = (((x341^x342)&x343)==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x345 = INT8_MIN;
	int32_t x347 = -1;
	int16_t x348 = -2;
	volatile int32_t t86 = -1623;

	t86 = (((x345^x346)&x347)==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x350 = INT64_MIN;
	uint32_t x351 = 25U;
	uint64_t x352 = 10752341220910133LLU;

	t87 = (((x349^x350)&x351)==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	volatile int16_t x355 = -981;
	int16_t x356 = INT16_MAX;
	volatile int32_t t88 = -120;

	t88 = (((x353^x354)&x355)==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MAX;
	uint8_t x358 = 75U;
	int32_t x359 = -118055;
	volatile int8_t x360 = INT8_MIN;
	int32_t t89 = -174661750;

	t89 = (((x357^x358)&x359)==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = -1055;
	int16_t x362 = INT16_MAX;
	uint64_t x363 = 97LLU;
	int8_t x364 = INT8_MIN;
	volatile int32_t t90 = 1;

	t90 = (((x361^x362)&x363)==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = -48;
	static uint16_t x366 = 155U;
	int16_t x367 = -710;
	static int32_t x368 = 45166115;
	static int32_t t91 = 169688;

	t91 = (((x365^x366)&x367)==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x369 = INT16_MIN;
	volatile int64_t x370 = -262925234795648LL;
	uint64_t x371 = 5040986289745161LLU;
	volatile int32_t t92 = 358025286;

	t92 = (((x369^x370)&x371)==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x373 = 247044U;
	static volatile int64_t x374 = -1LL;
	int64_t x375 = -5888739768LL;
	uint64_t x376 = 183472589891LLU;

	t93 = (((x373^x374)&x375)==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x378 = 1U;
	int16_t x380 = -1;
	int32_t t94 = -1;

	t94 = (((x377^x378)&x379)==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = -1;
	int32_t x382 = INT32_MIN;
	uint8_t x383 = UINT8_MAX;
	volatile int32_t t95 = -12;

	t95 = (((x381^x382)&x383)==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = INT16_MAX;
	static volatile int16_t x387 = INT16_MIN;
	int64_t x388 = -1LL;
	int32_t t96 = 2483124;

	t96 = (((x385^x386)&x387)==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x390 = -1;
	static int16_t x392 = INT16_MIN;
	static int32_t t97 = -9577;

	t97 = (((x389^x390)&x391)==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	uint32_t x394 = 103006U;

	t98 = (((x393^x394)&x395)==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -31620;
	static uint32_t x398 = UINT32_MAX;
	int16_t x399 = INT16_MIN;
	volatile int64_t x400 = INT64_MIN;
	int32_t t99 = -109998;

	t99 = (((x397^x398)&x399)==x400);

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

