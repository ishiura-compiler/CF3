#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x4 = -1;
volatile int32_t t1 = 75988783;
int32_t x9 = -2086983;
int32_t t2 = 0;
volatile uint8_t x13 = 3U;
int8_t x18 = INT8_MIN;
static int64_t x19 = -1LL;
volatile int32_t x22 = INT32_MIN;
uint64_t x32 = UINT64_MAX;
static uint32_t x37 = 23097U;
int16_t x39 = 217;
uint8_t x40 = 17U;
uint32_t x43 = UINT32_MAX;
int32_t t11 = -3;
int16_t x50 = INT16_MAX;
int8_t x54 = INT8_MAX;
volatile int32_t t13 = 7487160;
uint16_t x57 = 1U;
int32_t x61 = 0;
int32_t t15 = 7;
static int8_t x67 = -1;
static uint64_t x70 = 11117574192758073LLU;
int64_t x79 = INT64_MIN;
static int32_t x85 = 0;
volatile int32_t t21 = 0;
int8_t x89 = 1;
volatile uint16_t x90 = 0U;
int8_t x92 = 27;
static int8_t x96 = INT8_MIN;
int32_t t23 = -97539;
static uint16_t x98 = 5852U;
volatile int16_t x101 = INT16_MIN;
volatile int32_t t25 = -276266;
int32_t x107 = -9478249;
volatile uint16_t x108 = 9U;
uint32_t x112 = 29368U;
int32_t t27 = -44728;
static volatile int16_t x116 = INT16_MIN;
volatile int8_t x124 = -29;
static int32_t x126 = INT32_MAX;
volatile uint64_t x128 = 724288LLU;
static volatile int64_t x129 = -1LL;
volatile uint64_t x134 = UINT64_MAX;
uint64_t x136 = UINT64_MAX;
int8_t x141 = INT8_MIN;
int32_t t35 = 2632713;
int64_t x145 = INT64_MAX;
uint16_t x147 = 1308U;
volatile int64_t x148 = 40LL;
static volatile int32_t t37 = -1171958;
static uint64_t x156 = 17344433053206LLU;
int32_t x157 = INT32_MIN;
int32_t t39 = -88326266;
volatile uint64_t x162 = UINT64_MAX;
static uint8_t x164 = UINT8_MAX;
static volatile int32_t t40 = 99553;
int8_t x170 = INT8_MIN;
static int32_t t42 = -365;
volatile int32_t x173 = INT32_MAX;
int16_t x175 = INT16_MAX;
uint64_t x178 = 456964356316LLU;
int32_t t44 = 1;
volatile uint64_t x182 = 232325LLU;
uint8_t x186 = 30U;
static volatile int32_t t46 = -24087;
volatile int32_t x200 = 35;
uint16_t x202 = 355U;
int32_t t51 = -1;
volatile uint64_t x211 = 518063174LLU;
static volatile int32_t t52 = -22186889;
static uint8_t x216 = 9U;
volatile int8_t x217 = INT8_MIN;
int8_t x220 = INT8_MIN;
int16_t x233 = -3;
int16_t x236 = INT16_MIN;
int8_t x237 = -1;
volatile int32_t t59 = 283;
volatile int16_t x243 = -2165;
uint64_t x249 = UINT64_MAX;
volatile int32_t t62 = -9;
int32_t x256 = -1;
int32_t t64 = 426925;
int8_t x261 = -25;
static int64_t x265 = -976683152205830087LL;
int8_t x271 = INT8_MIN;
static volatile int32_t t68 = -1098;
static uint8_t x278 = 13U;
static int32_t t70 = -4419147;
int64_t x285 = INT64_MIN;
uint32_t x287 = 319254U;
int8_t x293 = INT8_MIN;
int8_t x297 = INT8_MIN;
volatile uint32_t x302 = 385705U;
static uint16_t x307 = UINT16_MAX;
volatile int16_t x314 = INT16_MIN;
volatile int8_t x315 = INT8_MAX;
int32_t t78 = -194031835;
int16_t x317 = -1;
int8_t x318 = -24;
volatile int32_t x319 = 5305317;
int16_t x327 = 207;
static int32_t t81 = 594;
int32_t x333 = -1;
int64_t x340 = -3760036LL;
int32_t x341 = INT32_MIN;
uint8_t x343 = UINT8_MAX;
static volatile int32_t t87 = 3444199;
uint32_t x353 = 3900837U;
volatile uint8_t x356 = 11U;
volatile int32_t t88 = 20254;
static int64_t x358 = -1LL;
static uint64_t x360 = UINT64_MAX;
volatile int16_t x361 = 15;
volatile int32_t t90 = -1;
int64_t x365 = INT64_MIN;
volatile int32_t x372 = INT32_MIN;
int32_t x373 = -1;
uint16_t x375 = 391U;
int32_t x376 = INT32_MAX;
int64_t x381 = -255117184281LL;
int64_t x383 = 3119053736054824673LL;
uint8_t x386 = 15U;
uint32_t x388 = UINT32_MAX;
int8_t x393 = INT8_MAX;


void f0(void) {
	volatile int16_t x1 = INT16_MAX;
	volatile uint8_t x2 = 27U;
	int32_t x3 = INT32_MIN;
	volatile int32_t t0 = 602364;

	t0 = (((x1|x2)^x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	uint8_t x6 = 52U;
	uint8_t x7 = 1U;
	static int16_t x8 = -15;

	t1 = (((x5|x6)^x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x10 = -1;
	volatile int32_t x11 = INT32_MAX;
	uint64_t x12 = 3198961090265014LLU;

	t2 = (((x9|x10)^x11)<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = UINT64_MAX;
	volatile int8_t x15 = INT8_MIN;
	uint64_t x16 = 3LLU;
	volatile int32_t t3 = -33;

	t3 = (((x13|x14)^x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	static uint16_t x20 = 1U;
	volatile int32_t t4 = -325091;

	t4 = (((x17|x18)^x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = -259LL;
	volatile int32_t x23 = -1;
	uint8_t x24 = UINT8_MAX;
	volatile int32_t t5 = -122866;

	t5 = (((x21|x22)^x23)<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	uint16_t x26 = 2716U;
	static volatile int8_t x27 = INT8_MIN;
	uint8_t x28 = 2U;
	int32_t t6 = -2;

	t6 = (((x25|x26)^x27)<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 8878184143541658659LLU;
	int8_t x30 = INT8_MAX;
	int8_t x31 = 10;
	static int32_t t7 = -1;

	t7 = (((x29|x30)^x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = 54U;
	int64_t x34 = -1LL;
	static int32_t x35 = INT32_MIN;
	int8_t x36 = INT8_MAX;
	volatile int32_t t8 = 4;

	t8 = (((x33|x34)^x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x38 = 69;
	static int32_t t9 = -217650698;

	t9 = (((x37|x38)^x39)<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 7937;
	uint64_t x42 = UINT64_MAX;
	int64_t x44 = 6552811153472LL;
	volatile int32_t t10 = -43686282;

	t10 = (((x41|x42)^x43)<x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	static uint8_t x46 = 2U;
	uint32_t x47 = UINT32_MAX;
	int64_t x48 = INT64_MIN;

	t11 = (((x45|x46)^x47)<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	volatile int64_t x51 = 53711387LL;
	uint8_t x52 = UINT8_MAX;
	volatile int32_t t12 = 757;

	t12 = (((x49|x50)^x51)<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	volatile uint64_t x55 = UINT64_MAX;
	int8_t x56 = INT8_MAX;

	t13 = (((x53|x54)^x55)<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x58 = 3234U;
	int8_t x59 = INT8_MIN;
	volatile int16_t x60 = -139;
	volatile int32_t t14 = -6701;

	t14 = (((x57|x58)^x59)<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x62 = UINT16_MAX;
	volatile uint8_t x63 = UINT8_MAX;
	int32_t x64 = -8;

	t15 = (((x61|x62)^x63)<x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -501674833;
	uint32_t x66 = 331U;
	uint16_t x68 = 159U;
	volatile int32_t t16 = -11;

	t16 = (((x65|x66)^x67)<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = INT16_MAX;
	int16_t x71 = 1288;
	static volatile uint16_t x72 = 1U;
	int32_t t17 = 693;

	t17 = (((x69|x70)^x71)<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x73 = UINT32_MAX;
	uint64_t x74 = 145657817068426LLU;
	int8_t x75 = INT8_MAX;
	static int16_t x76 = 5;
	volatile int32_t t18 = -3834;

	t18 = (((x73|x74)^x75)<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MAX;
	int32_t x78 = INT32_MAX;
	static uint64_t x80 = UINT64_MAX;
	static volatile int32_t t19 = -5;

	t19 = (((x77|x78)^x79)<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x81 = INT8_MIN;
	int8_t x82 = INT8_MIN;
	static uint16_t x83 = 801U;
	uint32_t x84 = UINT32_MAX;
	static volatile int32_t t20 = 1;

	t20 = (((x81|x82)^x83)<x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x86 = 1U;
	static uint64_t x87 = 243972LLU;
	uint8_t x88 = 24U;

	t21 = (((x85|x86)^x87)<x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x91 = 462934100367LLU;
	int32_t t22 = -6300;

	t22 = (((x89|x90)^x91)<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -1;
	int64_t x94 = -182LL;
	static uint32_t x95 = UINT32_MAX;

	t23 = (((x93|x94)^x95)<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = -595;
	uint8_t x99 = 100U;
	uint8_t x100 = 113U;
	int32_t t24 = 20;

	t24 = (((x97|x98)^x99)<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x102 = -172570LL;
	static uint16_t x103 = 1U;
	int32_t x104 = INT32_MIN;

	t25 = (((x101|x102)^x103)<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x105 = UINT8_MAX;
	static int64_t x106 = INT64_MAX;
	volatile int32_t t26 = 2189645;

	t26 = (((x105|x106)^x107)<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int64_t x109 = 280LL;
	uint16_t x110 = 320U;
	int32_t x111 = INT32_MIN;

	t27 = (((x109|x110)^x111)<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x113 = INT8_MIN;
	int8_t x114 = INT8_MIN;
	volatile int32_t x115 = -247;
	int32_t t28 = -1;

	t28 = (((x113|x114)^x115)<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = INT16_MIN;
	static int16_t x118 = 13;
	int16_t x119 = 1010;
	static int16_t x120 = 157;
	volatile int32_t t29 = -158;

	t29 = (((x117|x118)^x119)<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x121 = UINT16_MAX;
	int8_t x122 = INT8_MIN;
	int32_t x123 = -1335580;
	static volatile int32_t t30 = 741394;

	t30 = (((x121|x122)^x123)<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x125 = -1;
	static uint8_t x127 = 2U;
	int32_t t31 = -482;

	t31 = (((x125|x126)^x127)<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = -127;
	static int8_t x131 = 10;
	int8_t x132 = 2;
	int32_t t32 = 38258;

	t32 = (((x129|x130)^x131)<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x133 = 6U;
	int8_t x135 = -1;
	static volatile int32_t t33 = -195;

	t33 = (((x133|x134)^x135)<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x137 = INT32_MIN;
	uint32_t x138 = 12U;
	static uint8_t x139 = 0U;
	int8_t x140 = 3;
	int32_t t34 = 9;

	t34 = (((x137|x138)^x139)<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = 9179;
	int32_t x143 = INT32_MIN;
	static uint32_t x144 = UINT32_MAX;

	t35 = (((x141|x142)^x143)<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x146 = INT64_MAX;
	volatile int32_t t36 = -939;

	t36 = (((x145|x146)^x147)<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = 50U;
	uint64_t x150 = 222190LLU;
	int64_t x151 = 48100263961237LL;
	int8_t x152 = -4;

	t37 = (((x149|x150)^x151)<x152);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = -3289778794LL;
	int32_t x154 = INT32_MIN;
	int64_t x155 = -1LL;
	static int32_t t38 = 1487;

	t38 = (((x153|x154)^x155)<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x158 = 5;
	static int16_t x159 = 1931;
	int64_t x160 = 43826598023837426LL;

	t39 = (((x157|x158)^x159)<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x161 = 9;
	int8_t x163 = INT8_MIN;

	t40 = (((x161|x162)^x163)<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x165 = 1;
	uint8_t x166 = 2U;
	static volatile int8_t x167 = -1;
	int64_t x168 = INT64_MIN;
	int32_t t41 = 6687886;

	t41 = (((x165|x166)^x167)<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = UINT32_MAX;
	int32_t x171 = INT32_MIN;
	uint8_t x172 = UINT8_MAX;

	t42 = (((x169|x170)^x171)<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x174 = 393295U;
	uint8_t x176 = 8U;
	volatile int32_t t43 = 783714100;

	t43 = (((x173|x174)^x175)<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -1LL;
	int32_t x179 = INT32_MIN;
	int32_t x180 = -1;

	t44 = (((x177|x178)^x179)<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = INT16_MAX;
	volatile int8_t x183 = INT8_MAX;
	int8_t x184 = INT8_MIN;
	int32_t t45 = -101361;

	t45 = (((x181|x182)^x183)<x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = -7;
	int32_t x187 = INT32_MIN;
	int64_t x188 = INT64_MIN;

	t46 = (((x185|x186)^x187)<x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MAX;
	int32_t x190 = INT32_MAX;
	int16_t x191 = INT16_MIN;
	static volatile uint8_t x192 = 0U;
	volatile int32_t t47 = -1016032;

	t47 = (((x189|x190)^x191)<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -185416052248655696LL;
	volatile int16_t x194 = INT16_MIN;
	uint32_t x195 = UINT32_MAX;
	static int8_t x196 = -1;
	volatile int32_t t48 = 17910;

	t48 = (((x193|x194)^x195)<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MAX;
	volatile int64_t x198 = INT64_MIN;
	int64_t x199 = INT64_MIN;
	int32_t t49 = 15370;

	t49 = (((x197|x198)^x199)<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = 11568;
	uint8_t x203 = 0U;
	int16_t x204 = -1;
	volatile int32_t t50 = -113655214;

	t50 = (((x201|x202)^x203)<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -1;
	static uint64_t x206 = 2782140LLU;
	uint64_t x207 = 8881172163821567LLU;
	uint8_t x208 = 18U;

	t51 = (((x205|x206)^x207)<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	static volatile int8_t x210 = 47;
	volatile int32_t x212 = INT32_MIN;

	t52 = (((x209|x210)^x211)<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 2U;
	int32_t x214 = INT32_MAX;
	static int32_t x215 = INT32_MIN;
	int32_t t53 = 7321;

	t53 = (((x213|x214)^x215)<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x218 = -47;
	static int64_t x219 = -264LL;
	int32_t t54 = 29;

	t54 = (((x217|x218)^x219)<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = UINT32_MAX;
	int8_t x222 = INT8_MIN;
	volatile int32_t x223 = INT32_MIN;
	int64_t x224 = INT64_MIN;
	int32_t t55 = 1;

	t55 = (((x221|x222)^x223)<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MAX;
	int64_t x226 = INT64_MAX;
	uint8_t x227 = UINT8_MAX;
	int64_t x228 = 8968LL;
	int32_t t56 = 2459;

	t56 = (((x225|x226)^x227)<x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x229 = INT32_MIN;
	static volatile int8_t x230 = INT8_MIN;
	uint8_t x231 = UINT8_MAX;
	static int32_t x232 = -238;
	volatile int32_t t57 = -13283142;

	t57 = (((x229|x230)^x231)<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x234 = UINT16_MAX;
	static uint16_t x235 = UINT16_MAX;
	volatile int32_t t58 = 115524;

	t58 = (((x233|x234)^x235)<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x238 = UINT64_MAX;
	uint64_t x239 = UINT64_MAX;
	uint8_t x240 = UINT8_MAX;

	t59 = (((x237|x238)^x239)<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -1;
	int8_t x242 = 1;
	volatile int32_t x244 = -1;
	int32_t t60 = 7419367;

	t60 = (((x241|x242)^x243)<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x245 = 14873400LLU;
	uint8_t x246 = UINT8_MAX;
	uint16_t x247 = 210U;
	static int8_t x248 = -1;
	int32_t t61 = -1928070;

	t61 = (((x245|x246)^x247)<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x250 = INT32_MIN;
	static int8_t x251 = -56;
	int32_t x252 = INT32_MIN;

	t62 = (((x249|x250)^x251)<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x253 = INT16_MIN;
	int32_t x254 = 8;
	volatile int32_t x255 = INT32_MAX;
	static volatile int32_t t63 = -56;

	t63 = (((x253|x254)^x255)<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -1;
	uint32_t x258 = 54U;
	int64_t x259 = -1LL;
	int64_t x260 = 2696909LL;

	t64 = (((x257|x258)^x259)<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x262 = 458;
	uint32_t x263 = UINT32_MAX;
	volatile uint16_t x264 = 1U;
	static volatile int32_t t65 = 4;

	t65 = (((x261|x262)^x263)<x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x266 = INT64_MAX;
	int32_t x267 = -1;
	int16_t x268 = INT16_MAX;
	int32_t t66 = -3879060;

	t66 = (((x265|x266)^x267)<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x269 = -1LL;
	volatile int8_t x270 = INT8_MIN;
	volatile int8_t x272 = -1;
	volatile int32_t t67 = 6678;

	t67 = (((x269|x270)^x271)<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MIN;
	uint32_t x274 = 3045U;
	static int16_t x275 = INT16_MIN;
	uint64_t x276 = 1LLU;

	t68 = (((x273|x274)^x275)<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = INT32_MIN;
	volatile uint16_t x279 = 17U;
	volatile int64_t x280 = -3263547LL;
	int32_t t69 = -4047;

	t69 = (((x277|x278)^x279)<x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = UINT32_MAX;
	volatile uint32_t x282 = 4U;
	int64_t x283 = INT64_MIN;
	static uint64_t x284 = UINT64_MAX;

	t70 = (((x281|x282)^x283)<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile uint32_t x286 = 3111U;
	int32_t x288 = INT32_MIN;
	volatile int32_t t71 = 296681;

	t71 = (((x285|x286)^x287)<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 109U;
	uint32_t x290 = 66037868U;
	int8_t x291 = INT8_MIN;
	int8_t x292 = INT8_MAX;
	volatile int32_t t72 = 5;

	t72 = (((x289|x290)^x291)<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x294 = -2;
	volatile int16_t x295 = 0;
	static uint64_t x296 = UINT64_MAX;
	static int32_t t73 = 1624502;

	t73 = (((x293|x294)^x295)<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x298 = -1LL;
	int32_t x299 = 1887102;
	static int8_t x300 = INT8_MIN;
	static int32_t t74 = 4646;

	t74 = (((x297|x298)^x299)<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = INT64_MIN;
	uint64_t x303 = 13LLU;
	int8_t x304 = INT8_MAX;
	volatile int32_t t75 = 4;

	t75 = (((x301|x302)^x303)<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = INT16_MIN;
	static int8_t x306 = -1;
	int64_t x308 = -1LL;
	int32_t t76 = 45312946;

	t76 = (((x305|x306)^x307)<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int64_t x309 = 1634795901514435LL;
	int64_t x310 = -1LL;
	int32_t x311 = INT32_MIN;
	int16_t x312 = INT16_MAX;
	int32_t t77 = 163629135;

	t77 = (((x309|x310)^x311)<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 2501119274316LLU;
	static volatile int16_t x316 = -1;

	t78 = (((x313|x314)^x315)<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x320 = 1;
	volatile int32_t t79 = -1;

	t79 = (((x317|x318)^x319)<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x321 = INT8_MAX;
	static volatile int8_t x322 = INT8_MIN;
	int32_t x323 = -18053;
	uint16_t x324 = 27U;
	static int32_t t80 = -4129739;

	t80 = (((x321|x322)^x323)<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = 75U;
	uint8_t x326 = 0U;
	int16_t x328 = 63;

	t81 = (((x325|x326)^x327)<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = INT64_MIN;
	volatile uint64_t x330 = 228150484LLU;
	int32_t x331 = INT32_MAX;
	int8_t x332 = INT8_MAX;
	volatile int32_t t82 = -50172932;

	t82 = (((x329|x330)^x331)<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x334 = INT8_MAX;
	int64_t x335 = -270365LL;
	int8_t x336 = -1;
	static volatile int32_t t83 = -6;

	t83 = (((x333|x334)^x335)<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = 23;
	uint8_t x338 = 29U;
	uint8_t x339 = 3U;
	static volatile int32_t t84 = 13328;

	t84 = (((x337|x338)^x339)<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x342 = -1;
	static uint64_t x344 = 2973678648LLU;
	volatile int32_t t85 = 332965165;

	t85 = (((x341|x342)^x343)<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x345 = 10U;
	uint32_t x346 = 56942U;
	int16_t x347 = INT16_MIN;
	static volatile int64_t x348 = INT64_MIN;
	volatile int32_t t86 = 28;

	t86 = (((x345|x346)^x347)<x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = 483U;
	int32_t x350 = INT32_MIN;
	volatile int32_t x351 = INT32_MIN;
	volatile int32_t x352 = 24609197;

	t87 = (((x349|x350)^x351)<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x354 = 27U;
	int16_t x355 = INT16_MAX;

	t88 = (((x353|x354)^x355)<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x357 = INT8_MAX;
	static uint8_t x359 = 14U;
	static volatile int32_t t89 = -28972704;

	t89 = (((x357|x358)^x359)<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x362 = 22U;
	static uint16_t x363 = 9229U;
	int8_t x364 = -48;

	t90 = (((x361|x362)^x363)<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x366 = INT16_MAX;
	static volatile int16_t x367 = INT16_MAX;
	volatile int16_t x368 = INT16_MIN;
	int32_t t91 = -1;

	t91 = (((x365|x366)^x367)<x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = 1;
	int16_t x370 = INT16_MIN;
	int32_t x371 = INT32_MAX;
	static volatile int32_t t92 = 1756;

	t92 = (((x369|x370)^x371)<x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x374 = 6629298U;
	static volatile int32_t t93 = 13794545;

	t93 = (((x373|x374)^x375)<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = UINT16_MAX;
	int32_t x378 = INT32_MAX;
	int8_t x379 = INT8_MAX;
	int32_t x380 = 863113;
	volatile int32_t t94 = -22122;

	t94 = (((x377|x378)^x379)<x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x382 = 9U;
	static volatile int32_t x384 = -1;
	volatile int32_t t95 = -3982;

	t95 = (((x381|x382)^x383)<x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x385 = UINT8_MAX;
	static int8_t x387 = INT8_MIN;
	int32_t t96 = -113;

	t96 = (((x385|x386)^x387)<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x389 = 1540U;
	uint64_t x390 = UINT64_MAX;
	uint8_t x391 = 5U;
	int8_t x392 = -5;
	volatile int32_t t97 = -127602;

	t97 = (((x389|x390)^x391)<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x394 = -158816276;
	volatile int8_t x395 = -3;
	int32_t x396 = INT32_MIN;
	static volatile int32_t t98 = 10085;

	t98 = (((x393|x394)^x395)<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	int64_t x398 = INT64_MAX;
	static int32_t x399 = -1;
	uint16_t x400 = UINT16_MAX;
	volatile int32_t t99 = 1;

	t99 = (((x397|x398)^x399)<x400);

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

