#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x1 = -1LL;
int8_t x12 = 6;
static uint32_t x18 = UINT32_MAX;
uint8_t x19 = 13U;
uint8_t x20 = 2U;
int16_t x30 = INT16_MIN;
int32_t x32 = INT32_MIN;
volatile int32_t t8 = 653362;
static volatile int32_t x40 = INT32_MAX;
int32_t t10 = -60;
int32_t x46 = INT32_MIN;
uint64_t x52 = 0LLU;
int8_t x55 = INT8_MIN;
static int64_t x56 = INT64_MIN;
int8_t x60 = INT8_MIN;
int32_t x69 = 3;
volatile uint16_t x70 = 1U;
uint32_t x75 = UINT32_MAX;
uint8_t x79 = 9U;
int16_t x89 = -30;
volatile uint8_t x90 = 1U;
volatile int32_t x93 = 49;
static int16_t x95 = INT16_MAX;
int32_t t23 = -60762745;
uint64_t x100 = 15LLU;
static uint16_t x101 = 18822U;
int32_t t25 = 680196;
int32_t x108 = -1;
static int32_t x111 = 0;
int8_t x114 = INT8_MIN;
volatile uint8_t x116 = 2U;
uint32_t x119 = 0U;
int32_t t30 = -706;
int64_t x127 = -1LL;
int32_t x131 = -15;
int8_t x133 = INT8_MAX;
int32_t x138 = INT32_MAX;
int32_t x140 = INT32_MIN;
static int8_t x142 = 1;
uint8_t x143 = 2U;
volatile int32_t t35 = 56;
uint64_t x152 = 42980104644181LLU;
uint32_t x153 = 3318182U;
static int32_t x156 = INT32_MIN;
int8_t x158 = INT8_MIN;
static int8_t x175 = INT8_MIN;
int32_t x188 = INT32_MAX;
volatile int32_t t47 = -23;
int8_t x194 = INT8_MIN;
int32_t t48 = -10999;
int16_t x197 = INT16_MIN;
int64_t x205 = 2934275LL;
volatile int32_t t51 = 3543496;
volatile int32_t t52 = -29;
volatile int32_t x214 = INT32_MAX;
int64_t x219 = INT64_MIN;
static int64_t x220 = -1LL;
volatile int32_t t55 = 9280;
volatile uint64_t x228 = 96704567081626LLU;
static volatile int32_t t58 = 54989137;
uint16_t x240 = 20U;
int64_t x244 = 731LL;
volatile int8_t x248 = 27;
int16_t x252 = 4072;
static uint8_t x255 = 10U;
int32_t t64 = -32482;
int32_t t65 = -260;
int32_t x267 = 43802;
volatile int32_t t66 = -3994;
uint8_t x271 = UINT8_MAX;
volatile uint32_t x283 = UINT32_MAX;
static int16_t x295 = INT16_MIN;
int16_t x296 = INT16_MIN;
int32_t x298 = INT32_MAX;
int32_t x302 = INT32_MIN;
uint64_t x305 = UINT64_MAX;
uint64_t x308 = UINT64_MAX;
volatile int32_t t76 = -12591;
static int16_t x311 = INT16_MAX;
static uint8_t x314 = 24U;
uint16_t x318 = 6U;
uint64_t x319 = 2134352579047LLU;
int16_t x322 = INT16_MIN;
volatile int32_t t80 = 707;
uint32_t x328 = 8225U;
int32_t x340 = INT32_MIN;
volatile int8_t x342 = -1;
int8_t x346 = -1;
int32_t x348 = 22216;
uint64_t x349 = 36928054711706LLU;
volatile uint64_t x350 = 135672564472422LLU;
static int8_t x351 = 1;
int64_t x353 = INT64_MIN;
volatile uint8_t x355 = 1U;
volatile int32_t t90 = 1383;
int8_t x366 = INT8_MAX;
uint64_t x368 = 1455490LLU;
int32_t t92 = 277722127;
static int32_t t93 = -105554;
int8_t x381 = INT8_MIN;
int8_t x387 = INT8_MIN;
uint64_t x392 = UINT64_MAX;
volatile uint16_t x398 = 208U;
static uint16_t x400 = 37U;


void f0(void) {
	int32_t x2 = INT32_MIN;
	volatile int8_t x3 = INT8_MIN;
	int8_t x4 = 5;
	volatile int32_t t0 = 384;

	t0 = (((x1==x2)&x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	int64_t x6 = -1LL;
	int8_t x7 = -6;
	uint32_t x8 = 13U;
	volatile int32_t t1 = -1;

	t1 = (((x5==x6)&x7)<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 850435;
	uint32_t x10 = 852U;
	int64_t x11 = INT64_MIN;
	static int32_t t2 = -5;

	t2 = (((x9==x10)&x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	uint32_t x14 = UINT32_MAX;
	static int8_t x15 = -1;
	int8_t x16 = -1;
	int32_t t3 = 0;

	t3 = (((x13==x14)&x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 45U;
	int32_t t4 = 121155534;

	t4 = (((x17==x18)&x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MAX;
	uint8_t x22 = 1U;
	volatile int8_t x23 = -1;
	volatile uint16_t x24 = 3776U;
	static volatile int32_t t5 = 430586;

	t5 = (((x21==x22)&x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	volatile uint32_t x26 = 1001U;
	volatile int8_t x27 = INT8_MIN;
	int32_t x28 = INT32_MIN;
	int32_t t6 = 1;

	t6 = (((x25==x26)&x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	volatile int32_t x31 = -6;
	int32_t t7 = 147059402;

	t7 = (((x29==x30)&x31)<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = -1;
	int8_t x34 = 24;
	int16_t x35 = INT16_MAX;
	int32_t x36 = INT32_MIN;

	t8 = (((x33==x34)&x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	static volatile int64_t x38 = INT64_MAX;
	uint16_t x39 = 12U;
	int32_t t9 = 219;

	t9 = (((x37==x38)&x39)<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int16_t x42 = 3818;
	volatile int8_t x43 = -1;
	static int32_t x44 = INT32_MAX;

	t10 = (((x41==x42)&x43)<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 15983077982829194LLU;
	int8_t x47 = 0;
	static int16_t x48 = INT16_MIN;
	int32_t t11 = -1064449884;

	t11 = (((x45==x46)&x47)<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = INT8_MAX;
	int64_t x50 = -1LL;
	uint64_t x51 = UINT64_MAX;
	int32_t t12 = 10779;

	t12 = (((x49==x50)&x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 23U;
	int64_t x54 = -1LL;
	static int32_t t13 = -15327491;

	t13 = (((x53==x54)&x55)<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 54U;
	int16_t x58 = INT16_MAX;
	int64_t x59 = 11LL;
	int32_t t14 = -524968523;

	t14 = (((x57==x58)&x59)<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = INT16_MIN;
	volatile int64_t x62 = -102LL;
	int8_t x63 = -2;
	uint8_t x64 = 49U;
	volatile int32_t t15 = 261;

	t15 = (((x61==x62)&x63)<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	uint16_t x66 = 2338U;
	volatile int32_t x67 = INT32_MIN;
	uint32_t x68 = 40262412U;
	int32_t t16 = 0;

	t16 = (((x65==x66)&x67)<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x71 = UINT8_MAX;
	int64_t x72 = -1LL;
	volatile int32_t t17 = 1026122133;

	t17 = (((x69==x70)&x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x73 = UINT16_MAX;
	volatile int16_t x74 = -1;
	int16_t x76 = -1;
	volatile int32_t t18 = 4008021;

	t18 = (((x73==x74)&x75)<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = -5;
	int64_t x78 = INT64_MAX;
	uint64_t x80 = 1866159439LLU;
	int32_t t19 = 68;

	t19 = (((x77==x78)&x79)<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = 3;
	static volatile uint8_t x82 = 23U;
	static int64_t x83 = INT64_MIN;
	static int32_t x84 = INT32_MIN;
	volatile int32_t t20 = 619053504;

	t20 = (((x81==x82)&x83)<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MAX;
	static int64_t x86 = 30840788830142592LL;
	uint8_t x87 = UINT8_MAX;
	volatile int8_t x88 = -1;
	static int32_t t21 = 1448;

	t21 = (((x85==x86)&x87)<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x91 = 197;
	int32_t x92 = -15896332;
	int32_t t22 = -37;

	t22 = (((x89==x90)&x91)<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x94 = 52LL;
	uint64_t x96 = 242LLU;

	t23 = (((x93==x94)&x95)<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = -1;
	int16_t x98 = 11436;
	static uint16_t x99 = 827U;
	static int32_t t24 = 13;

	t24 = (((x97==x98)&x99)<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x102 = UINT64_MAX;
	static volatile int16_t x103 = INT16_MIN;
	volatile uint64_t x104 = 39062284636861LLU;

	t25 = (((x101==x102)&x103)<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -3124;
	volatile int8_t x106 = INT8_MAX;
	int64_t x107 = INT64_MIN;
	int32_t t26 = -189425;

	t26 = (((x105==x106)&x107)<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = 0;
	volatile int8_t x110 = INT8_MIN;
	static uint8_t x112 = UINT8_MAX;
	static volatile int32_t t27 = -596388493;

	t27 = (((x109==x110)&x111)<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MAX;
	uint8_t x115 = UINT8_MAX;
	int32_t t28 = 665993217;

	t28 = (((x113==x114)&x115)<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = -1LL;
	volatile int64_t x118 = INT64_MIN;
	uint32_t x120 = 31U;
	int32_t t29 = 1960;

	t29 = (((x117==x118)&x119)<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = 1468822065U;
	int8_t x122 = INT8_MAX;
	uint64_t x123 = UINT64_MAX;
	int64_t x124 = INT64_MIN;

	t30 = (((x121==x122)&x123)<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MAX;
	static int64_t x126 = INT64_MAX;
	static uint8_t x128 = UINT8_MAX;
	int32_t t31 = 3181;

	t31 = (((x125==x126)&x127)<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x129 = UINT32_MAX;
	uint16_t x130 = 96U;
	static uint8_t x132 = 3U;
	int32_t t32 = 359;

	t32 = (((x129==x130)&x131)<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x134 = INT8_MAX;
	static uint16_t x135 = UINT16_MAX;
	uint64_t x136 = UINT64_MAX;
	volatile int32_t t33 = -376432608;

	t33 = (((x133==x134)&x135)<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = -1;
	int8_t x139 = 4;
	volatile int32_t t34 = -1;

	t34 = (((x137==x138)&x139)<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = -25;
	int32_t x144 = INT32_MAX;

	t35 = (((x141==x142)&x143)<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1;
	int16_t x146 = INT16_MAX;
	int32_t x147 = -58;
	volatile int16_t x148 = 175;
	static volatile int32_t t36 = -248097;

	t36 = (((x145==x146)&x147)<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = 1577;
	static uint32_t x150 = 8453U;
	static int32_t x151 = INT32_MIN;
	static volatile int32_t t37 = -14;

	t37 = (((x149==x150)&x151)<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x154 = 296;
	static volatile int16_t x155 = INT16_MIN;
	int32_t t38 = 1734275;

	t38 = (((x153==x154)&x155)<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x157 = -1;
	static volatile uint8_t x159 = UINT8_MAX;
	static int64_t x160 = INT64_MIN;
	volatile int32_t t39 = -2806;

	t39 = (((x157==x158)&x159)<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MAX;
	static int32_t x162 = INT32_MAX;
	volatile int8_t x163 = 3;
	int64_t x164 = -17588786112LL;
	volatile int32_t t40 = 401922;

	t40 = (((x161==x162)&x163)<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -1;
	int64_t x166 = -25552407LL;
	volatile uint16_t x167 = 1034U;
	int32_t x168 = -64351;
	volatile int32_t t41 = -1605;

	t41 = (((x165==x166)&x167)<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -100562257309LL;
	int32_t x170 = -1;
	int8_t x171 = -61;
	int64_t x172 = INT64_MAX;
	volatile int32_t t42 = -210381;

	t42 = (((x169==x170)&x171)<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -5161;
	static int16_t x174 = 0;
	int64_t x176 = INT64_MAX;
	int32_t t43 = -8927;

	t43 = (((x173==x174)&x175)<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -7428761;
	int64_t x178 = -125678777717102496LL;
	int16_t x179 = INT16_MIN;
	int32_t x180 = -1;
	int32_t t44 = -20;

	t44 = (((x177==x178)&x179)<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 0U;
	int8_t x182 = -13;
	volatile int16_t x183 = 352;
	int8_t x184 = INT8_MIN;
	volatile int32_t t45 = 10;

	t45 = (((x181==x182)&x183)<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x185 = 83U;
	int8_t x186 = INT8_MIN;
	uint16_t x187 = UINT16_MAX;
	volatile int32_t t46 = 998403424;

	t46 = (((x185==x186)&x187)<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = 2;
	uint32_t x190 = UINT32_MAX;
	uint16_t x191 = 180U;
	int64_t x192 = -1LL;

	t47 = (((x189==x190)&x191)<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x193 = 40U;
	volatile uint32_t x195 = UINT32_MAX;
	int8_t x196 = INT8_MAX;

	t48 = (((x193==x194)&x195)<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x198 = INT32_MIN;
	int32_t x199 = INT32_MAX;
	volatile int8_t x200 = INT8_MIN;
	int32_t t49 = 958538;

	t49 = (((x197==x198)&x199)<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	int8_t x202 = 2;
	volatile int8_t x203 = INT8_MIN;
	int32_t x204 = -33;
	int32_t t50 = 464906;

	t50 = (((x201==x202)&x203)<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x206 = 40U;
	uint8_t x207 = 4U;
	volatile uint8_t x208 = UINT8_MAX;

	t51 = (((x205==x206)&x207)<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = UINT8_MAX;
	volatile int32_t x210 = INT32_MIN;
	int8_t x211 = INT8_MAX;
	static int16_t x212 = INT16_MIN;

	t52 = (((x209==x210)&x211)<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint16_t x213 = UINT16_MAX;
	uint8_t x215 = 114U;
	int8_t x216 = INT8_MAX;
	int32_t t53 = -15;

	t53 = (((x213==x214)&x215)<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = 13483LL;
	int32_t x218 = -595;
	int32_t t54 = 2;

	t54 = (((x217==x218)&x219)<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	int16_t x222 = -1;
	int64_t x223 = INT64_MIN;
	int32_t x224 = INT32_MAX;

	t55 = (((x221==x222)&x223)<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	volatile uint8_t x226 = UINT8_MAX;
	int8_t x227 = -1;
	int32_t t56 = -519964;

	t56 = (((x225==x226)&x227)<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 23701U;
	static int32_t x230 = -1029044;
	int32_t x231 = -309688;
	int16_t x232 = INT16_MIN;
	int32_t t57 = 1;

	t57 = (((x229==x230)&x231)<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x233 = 39U;
	int64_t x234 = -1LL;
	int64_t x235 = 248LL;
	volatile uint8_t x236 = 1U;

	t58 = (((x233==x234)&x235)<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	int32_t x238 = 59342;
	volatile int8_t x239 = INT8_MIN;
	volatile int32_t t59 = -1161;

	t59 = (((x237==x238)&x239)<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	int16_t x242 = -1;
	uint8_t x243 = UINT8_MAX;
	static volatile int32_t t60 = 7440;

	t60 = (((x241==x242)&x243)<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = -1;
	uint16_t x246 = UINT16_MAX;
	int8_t x247 = INT8_MIN;
	static volatile int32_t t61 = -1;

	t61 = (((x245==x246)&x247)<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = 6LL;
	volatile int64_t x250 = INT64_MIN;
	int64_t x251 = -1LL;
	volatile int32_t t62 = 962;

	t62 = (((x249==x250)&x251)<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -47322288;
	static uint8_t x254 = 1U;
	static uint16_t x256 = 892U;
	int32_t t63 = 119;

	t63 = (((x253==x254)&x255)<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x257 = 0;
	int64_t x258 = -1LL;
	int8_t x259 = INT8_MIN;
	uint16_t x260 = 1240U;

	t64 = (((x257==x258)&x259)<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	int8_t x262 = INT8_MAX;
	uint64_t x263 = UINT64_MAX;
	volatile uint8_t x264 = UINT8_MAX;

	t65 = (((x261==x262)&x263)<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -12061302;
	volatile int16_t x266 = INT16_MAX;
	volatile uint8_t x268 = UINT8_MAX;

	t66 = (((x265==x266)&x267)<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = 1087182U;
	static uint8_t x270 = 0U;
	int8_t x272 = -1;
	static int32_t t67 = 176651818;

	t67 = (((x269==x270)&x271)<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -1;
	int8_t x274 = 1;
	static int16_t x275 = INT16_MAX;
	uint8_t x276 = UINT8_MAX;
	int32_t t68 = 484659;

	t68 = (((x273==x274)&x275)<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x277 = 1901901734208317LLU;
	static int32_t x278 = INT32_MAX;
	int64_t x279 = -14565739511625LL;
	int32_t x280 = INT32_MIN;
	volatile int32_t t69 = 25509829;

	t69 = (((x277==x278)&x279)<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	int16_t x282 = INT16_MAX;
	static uint16_t x284 = UINT16_MAX;
	volatile int32_t t70 = 0;

	t70 = (((x281==x282)&x283)<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -3;
	int32_t x286 = INT32_MAX;
	int16_t x287 = INT16_MIN;
	int32_t x288 = 148521945;
	volatile int32_t t71 = 17;

	t71 = (((x285==x286)&x287)<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = -56828;
	volatile int32_t x290 = INT32_MIN;
	uint32_t x291 = UINT32_MAX;
	uint8_t x292 = 3U;
	static int32_t t72 = 19656;

	t72 = (((x289==x290)&x291)<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x293 = 3;
	uint32_t x294 = UINT32_MAX;
	static int32_t t73 = -946;

	t73 = (((x293==x294)&x295)<x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x297 = -1;
	uint8_t x299 = 0U;
	int8_t x300 = INT8_MIN;
	volatile int32_t t74 = 267;

	t74 = (((x297==x298)&x299)<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = -481301220396447LL;
	uint64_t x303 = 3148LLU;
	static uint8_t x304 = 1U;
	volatile int32_t t75 = 179940935;

	t75 = (((x301==x302)&x303)<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = -1;
	int64_t x307 = -1LL;

	t76 = (((x305==x306)&x307)<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x309 = 1U;
	uint16_t x310 = 6U;
	static int8_t x312 = INT8_MAX;
	volatile int32_t t77 = 91;

	t77 = (((x309==x310)&x311)<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x313 = 5083U;
	int16_t x315 = INT16_MIN;
	volatile uint64_t x316 = 40425LLU;
	int32_t t78 = -333295794;

	t78 = (((x313==x314)&x315)<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = -7004;
	volatile int8_t x320 = 4;
	int32_t t79 = 796368538;

	t79 = (((x317==x318)&x319)<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 6820LLU;
	static int8_t x323 = -3;
	int32_t x324 = INT32_MIN;

	t80 = (((x321==x322)&x323)<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	int8_t x326 = 0;
	uint8_t x327 = 87U;
	volatile int32_t t81 = -1898253;

	t81 = (((x325==x326)&x327)<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x329 = 17720U;
	static int32_t x330 = -4351;
	int32_t x331 = INT32_MAX;
	uint64_t x332 = 373394090LLU;
	int32_t t82 = 11;

	t82 = (((x329==x330)&x331)<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint8_t x333 = 30U;
	static int64_t x334 = INT64_MAX;
	int64_t x335 = INT64_MIN;
	uint32_t x336 = 100514U;
	int32_t t83 = -437724;

	t83 = (((x333==x334)&x335)<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x337 = UINT8_MAX;
	uint64_t x338 = 4LLU;
	volatile int32_t x339 = INT32_MIN;
	volatile int32_t t84 = -24406;

	t84 = (((x337==x338)&x339)<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MAX;
	int32_t x343 = INT32_MIN;
	int8_t x344 = INT8_MAX;
	volatile int32_t t85 = -1384345;

	t85 = (((x341==x342)&x343)<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = 3284;
	uint8_t x347 = 5U;
	volatile int32_t t86 = 2580;

	t86 = (((x345==x346)&x347)<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x352 = INT8_MIN;
	int32_t t87 = 1049851767;

	t87 = (((x349==x350)&x351)<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x354 = 7936;
	static volatile int8_t x356 = INT8_MIN;
	volatile int32_t t88 = -592397;

	t88 = (((x353==x354)&x355)<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x357 = INT64_MIN;
	int32_t x358 = INT32_MIN;
	uint8_t x359 = UINT8_MAX;
	int8_t x360 = INT8_MAX;
	int32_t t89 = -1;

	t89 = (((x357==x358)&x359)<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x361 = UINT16_MAX;
	volatile int8_t x362 = -1;
	static int8_t x363 = INT8_MAX;
	static int32_t x364 = INT32_MIN;

	t90 = (((x361==x362)&x363)<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = 16;
	static int32_t x367 = -1;
	int32_t t91 = -231884;

	t91 = (((x365==x366)&x367)<x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x369 = 27526U;
	uint64_t x370 = 0LLU;
	int8_t x371 = INT8_MIN;
	int64_t x372 = INT64_MIN;

	t92 = (((x369==x370)&x371)<x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MAX;
	static int8_t x374 = INT8_MIN;
	uint8_t x375 = 29U;
	int64_t x376 = -1139287LL;

	t93 = (((x373==x374)&x375)<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = -1;
	uint16_t x378 = 1U;
	volatile uint64_t x379 = 3LLU;
	volatile int64_t x380 = -1LL;
	static volatile int32_t t94 = 1864767;

	t94 = (((x377==x378)&x379)<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x382 = 202LL;
	int64_t x383 = 50584047302LL;
	int64_t x384 = -1LL;
	int32_t t95 = -135411;

	t95 = (((x381==x382)&x383)<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x385 = UINT32_MAX;
	uint16_t x386 = 1088U;
	uint64_t x388 = UINT64_MAX;
	static volatile int32_t t96 = 495639542;

	t96 = (((x385==x386)&x387)<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -110867;
	int8_t x390 = INT8_MIN;
	uint16_t x391 = 23U;
	volatile int32_t t97 = 1489;

	t97 = (((x389==x390)&x391)<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x393 = 39U;
	volatile int64_t x394 = -785668804246888LL;
	int64_t x395 = 1826LL;
	static int16_t x396 = -1;
	volatile int32_t t98 = 2349228;

	t98 = (((x393==x394)&x395)<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -1;
	uint32_t x399 = 292249508U;
	volatile int32_t t99 = -1000783471;

	t99 = (((x397==x398)&x399)<x400);

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

