#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x9 = INT32_MIN;
int64_t x11 = -52140LL;
int64_t t2 = 2391LL;
int8_t x14 = -54;
int32_t x16 = INT32_MIN;
uint64_t x18 = 12341256LLU;
int32_t x26 = -1;
int8_t x30 = INT8_MIN;
int64_t x42 = INT64_MIN;
static int8_t x54 = 1;
int8_t x60 = INT8_MIN;
static volatile uint64_t x61 = 404291417906LLU;
int8_t x63 = -1;
static volatile int64_t x77 = INT64_MAX;
volatile uint32_t x81 = 14844011U;
static uint32_t x82 = UINT32_MAX;
uint16_t x83 = UINT16_MAX;
uint64_t t20 = 176454677022LLU;
volatile uint32_t x90 = UINT32_MAX;
int8_t x106 = INT8_MAX;
static uint8_t x107 = 51U;
int8_t x109 = INT8_MIN;
static int32_t x119 = INT32_MIN;
static volatile uint16_t x121 = 5U;
int64_t x124 = INT64_MIN;
int16_t x129 = INT16_MIN;
volatile uint64_t t34 = 14297708727832815LLU;
uint64_t x158 = 990784898654126347LLU;
int8_t x163 = -7;
int8_t x166 = -1;
static int8_t x169 = -1;
uint8_t x170 = UINT8_MAX;
uint64_t t43 = 7395LLU;
volatile int32_t x186 = INT32_MAX;
int32_t x190 = INT32_MIN;
volatile int16_t x192 = 2;
volatile uint32_t x196 = UINT32_MAX;
static int16_t x201 = 1;
uint16_t x208 = 14991U;
int64_t t51 = 43986970484LL;
int64_t x213 = -1LL;
volatile uint64_t t52 = 15LLU;
uint64_t x218 = 11630301974LLU;
int64_t x223 = INT64_MIN;
int64_t t54 = 1486081455771913296LL;
static volatile int16_t x229 = INT16_MAX;
int64_t x234 = INT64_MIN;
volatile int32_t x236 = INT32_MIN;
int64_t t57 = 86005206LL;
uint32_t x239 = 258319U;
volatile uint32_t t59 = 360295723U;
int64_t x245 = -2848100659LL;
int16_t x248 = INT16_MAX;
int64_t t60 = -10667761232LL;
uint16_t x249 = UINT16_MAX;
volatile int64_t t61 = -25670881LL;
int16_t x260 = INT16_MAX;
int32_t x261 = -689693627;
int16_t x264 = 1;
uint64_t x266 = 150053452LLU;
int32_t x275 = INT32_MIN;
uint64_t t67 = 243098LLU;
static int64_t t68 = -466LL;
uint64_t x285 = 34694579447LLU;
static int16_t x290 = -1;
int32_t x291 = 0;
int8_t x297 = INT8_MIN;
volatile int32_t t79 = -1;
volatile uint32_t t81 = 277U;
static uint16_t x335 = UINT16_MAX;
static int16_t x343 = INT16_MIN;
uint32_t x344 = UINT32_MAX;
volatile int64_t t84 = -939009LL;
volatile uint64_t x347 = UINT64_MAX;
int32_t x348 = -20;
uint64_t t85 = 30003280LLU;
uint8_t x353 = 2U;
int32_t x355 = INT32_MAX;
static volatile int32_t t87 = 257198305;
static int8_t x360 = INT8_MAX;
volatile uint32_t t88 = 676848U;
int16_t x361 = INT16_MIN;
static volatile int8_t x364 = 1;
static uint32_t x368 = 429771177U;
volatile uint64_t x376 = 215956360965088LLU;
int32_t t93 = 799722;
volatile int8_t x383 = 1;
volatile int16_t x385 = INT16_MIN;
volatile int64_t x388 = -1LL;
int64_t t95 = -1LL;
volatile int16_t x400 = -35;
int16_t x403 = INT16_MIN;


void f0(void) {
	static uint64_t x1 = 4LLU;
	uint8_t x2 = 119U;
	int8_t x3 = INT8_MIN;
	uint16_t x4 = 9905U;
	uint64_t t0 = 3701900LLU;

	t0 = (((x1|x2)&x3)%x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 261609LLU;
	uint32_t x6 = UINT32_MAX;
	static int16_t x7 = INT16_MAX;
	uint16_t x8 = 295U;
	volatile uint64_t t1 = 3332115795682LLU;

	t1 = (((x5|x6)&x7)%x8);

	if (t1 != 22LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = -7537457LL;
	int32_t x12 = -1;

	t2 = (((x9|x10)&x11)%x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	int64_t x15 = INT64_MAX;
	int64_t t3 = -46195278LL;

	t3 = (((x13|x14)&x15)%x16);

	if (t3 != 2147483647LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -1LL;
	int8_t x19 = -2;
	int64_t x20 = INT64_MAX;
	volatile uint64_t t4 = 1007488580745LLU;

	t4 = (((x17|x18)&x19)%x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int16_t x22 = INT16_MAX;
	int8_t x23 = 0;
	int8_t x24 = -1;
	int32_t t5 = 9941180;

	t5 = (((x21|x22)&x23)%x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 42U;
	uint16_t x27 = UINT16_MAX;
	static volatile int16_t x28 = 1769;
	volatile int32_t t6 = -2;

	t6 = (((x25|x26)&x27)%x28);

	if (t6 != 82) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -9;
	int32_t x31 = INT32_MIN;
	int16_t x32 = INT16_MIN;
	int32_t t7 = 3;

	t7 = (((x29|x30)&x31)%x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 51146U;
	volatile int16_t x34 = INT16_MIN;
	uint8_t x35 = 25U;
	int8_t x36 = -1;
	volatile uint32_t t8 = 21439174U;

	t8 = (((x33|x34)&x35)%x36);

	if (t8 != 8U) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 707U;
	uint64_t x43 = 945LLU;
	uint32_t x44 = 408U;
	uint64_t t9 = 221912922149480LLU;

	t9 = (((x41|x42)&x43)%x44);

	if (t9 != 233LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = -1;
	int32_t x46 = INT32_MIN;
	int16_t x47 = INT16_MAX;
	volatile int8_t x48 = INT8_MIN;
	static volatile int32_t t10 = 2388072;

	t10 = (((x45|x46)&x47)%x48);

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = 7LL;
	int32_t x50 = -226911098;
	volatile int16_t x51 = -1;
	int16_t x52 = INT16_MIN;
	volatile int64_t t11 = 14298354698747204LL;

	t11 = (((x49|x50)&x51)%x52);

	if (t11 != -25465LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = 746741;
	volatile int64_t x55 = -91537LL;
	volatile uint8_t x56 = 2U;
	volatile int64_t t12 = -143898048LL;

	t12 = (((x53|x54)&x55)%x56);

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = -9460222858347LL;
	int8_t x58 = 0;
	static int32_t x59 = -906131;
	int64_t t13 = -129192122LL;

	t13 = (((x57|x58)&x59)%x60);

	if (t13 != -123LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x62 = -346;
	volatile int32_t x64 = -278137;
	volatile uint64_t t14 = 4244235412LLU;

	t14 = (((x61|x62)&x63)%x64);

	if (t14 != 278063LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x65 = 150067971U;
	volatile int16_t x66 = INT16_MIN;
	uint32_t x67 = 24U;
	uint64_t x68 = UINT64_MAX;
	uint64_t t15 = 3851420475LLU;

	t15 = (((x65|x66)&x67)%x68);

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x69 = 1LLU;
	volatile uint32_t x70 = 1548321U;
	volatile uint64_t x71 = 5657101LLU;
	int32_t x72 = INT32_MIN;
	volatile uint64_t t16 = 64923755693223568LLU;

	t16 = (((x69|x70)&x71)%x72);

	if (t16 != 1441793LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint64_t x73 = 998813025544570LLU;
	int32_t x74 = 1;
	int8_t x75 = INT8_MIN;
	volatile uint32_t x76 = UINT32_MAX;
	uint64_t t17 = 374597864597740LLU;

	t17 = (((x73|x74)&x75)%x76);

	if (t17 != 1201223018LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x78 = -25;
	static int8_t x79 = 0;
	volatile int8_t x80 = INT8_MIN;
	static int64_t t18 = -3534416228145LL;

	t18 = (((x77|x78)&x79)%x80);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint32_t x84 = 243018182U;
	static volatile uint32_t t19 = 1317U;

	t19 = (((x81|x82)&x83)%x84);

	if (t19 != 65535U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x85 = 1U;
	int16_t x86 = INT16_MIN;
	uint64_t x87 = 31925844022LLU;
	static uint32_t x88 = 1987821657U;

	t20 = (((x85|x86)&x87)%x88);

	if (t20 != 1861058560LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = INT16_MAX;
	volatile int32_t x91 = 873;
	int16_t x92 = INT16_MIN;
	uint32_t t21 = 25U;

	t21 = (((x89|x90)&x91)%x92);

	if (t21 != 873U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MIN;
	static volatile int64_t x94 = INT64_MIN;
	volatile uint64_t x95 = 57003LLU;
	uint16_t x96 = 781U;
	static volatile uint64_t t22 = 10434LLU;

	t22 = (((x93|x94)&x95)%x96);

	if (t22 != 747LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = UINT16_MAX;
	static volatile int8_t x98 = -4;
	int8_t x99 = -1;
	int8_t x100 = -61;
	int32_t t23 = 5;

	t23 = (((x97|x98)&x99)%x100);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = INT16_MIN;
	volatile int32_t x102 = -6763;
	static uint32_t x103 = 10435U;
	static int64_t x104 = INT64_MIN;
	int64_t t24 = -725728951LL;

	t24 = (((x101|x102)&x103)%x104);

	if (t24 != 8321LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = 2773U;
	volatile int32_t x108 = 4448121;
	volatile uint32_t t25 = 86841U;

	t25 = (((x105|x106)&x107)%x108);

	if (t25 != 51U) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x110 = 0U;
	int8_t x111 = -1;
	int32_t x112 = -2360;
	int32_t t26 = -3;

	t26 = (((x109|x110)&x111)%x112);

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = -1;
	uint16_t x114 = 96U;
	uint32_t x115 = 63693007U;
	uint32_t x116 = 53U;
	static volatile uint32_t t27 = 368U;

	t27 = (((x113|x114)&x115)%x116);

	if (t27 != 45U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x117 = 14U;
	uint32_t x118 = UINT32_MAX;
	uint16_t x120 = UINT16_MAX;
	uint32_t t28 = 7U;

	t28 = (((x117|x118)&x119)%x120);

	if (t28 != 32768U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x122 = INT64_MIN;
	uint16_t x123 = UINT16_MAX;
	volatile int64_t t29 = 2078LL;

	t29 = (((x121|x122)&x123)%x124);

	if (t29 != 5LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = -1;
	int8_t x126 = INT8_MIN;
	int32_t x127 = -194740840;
	static int16_t x128 = -1;
	volatile int32_t t30 = -28669;

	t30 = (((x125|x126)&x127)%x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x130 = INT64_MIN;
	int8_t x131 = INT8_MIN;
	uint16_t x132 = 641U;
	static int64_t t31 = 140338LL;

	t31 = (((x129|x130)&x131)%x132);

	if (t31 != -77LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = INT16_MAX;
	static uint16_t x134 = 244U;
	volatile int16_t x135 = 136;
	int32_t x136 = INT32_MIN;
	static int32_t t32 = -168527312;

	t32 = (((x133|x134)&x135)%x136);

	if (t32 != 136) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x137 = UINT64_MAX;
	uint16_t x138 = UINT16_MAX;
	volatile int16_t x139 = 22;
	volatile int8_t x140 = INT8_MIN;
	static volatile uint64_t t33 = 25309784699735090LLU;

	t33 = (((x137|x138)&x139)%x140);

	if (t33 != 22LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x141 = UINT64_MAX;
	int8_t x142 = INT8_MAX;
	static int64_t x143 = -1250909975858846457LL;
	uint32_t x144 = 4024043U;

	t34 = (((x141|x142)&x143)%x144);

	if (t34 != 3902590LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x145 = INT64_MIN;
	int64_t x146 = INT64_MIN;
	volatile uint16_t x147 = UINT16_MAX;
	uint32_t x148 = UINT32_MAX;
	volatile int64_t t35 = -1LL;

	t35 = (((x145|x146)&x147)%x148);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = 14374576;
	int16_t x150 = INT16_MAX;
	int16_t x151 = INT16_MAX;
	uint32_t x152 = 713U;
	uint32_t t36 = 1U;

	t36 = (((x149|x150)&x151)%x152);

	if (t36 != 682U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = 37;
	uint8_t x154 = UINT8_MAX;
	uint32_t x155 = 1869265U;
	uint64_t x156 = 238168016120LLU;
	static uint64_t t37 = 27596871LLU;

	t37 = (((x153|x154)&x155)%x156);

	if (t37 != 209LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint32_t x157 = 395U;
	volatile uint32_t x159 = UINT32_MAX;
	int64_t x160 = INT64_MAX;
	volatile uint64_t t38 = 160121813808558LLU;

	t38 = (((x157|x158)&x159)%x160);

	if (t38 != 2904146315LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x161 = INT16_MIN;
	int8_t x162 = INT8_MAX;
	volatile uint8_t x164 = 2U;
	static volatile int32_t t39 = 15;

	t39 = (((x161|x162)&x163)%x164);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x165 = INT64_MAX;
	static uint8_t x167 = UINT8_MAX;
	uint8_t x168 = 119U;
	volatile int64_t t40 = 532348054811016030LL;

	t40 = (((x165|x166)&x167)%x168);

	if (t40 != 17LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x171 = INT32_MIN;
	uint32_t x172 = 349U;
	uint32_t t41 = 6152U;

	t41 = (((x169|x170)&x171)%x172);

	if (t41 != 96U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = -1;
	volatile int16_t x174 = INT16_MIN;
	int8_t x175 = INT8_MAX;
	uint16_t x176 = UINT16_MAX;
	volatile int32_t t42 = -5676050;

	t42 = (((x173|x174)&x175)%x176);

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x177 = INT8_MAX;
	static uint8_t x178 = 70U;
	int8_t x179 = -1;
	uint64_t x180 = UINT64_MAX;

	t43 = (((x177|x178)&x179)%x180);

	if (t43 != 127LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x181 = -10;
	volatile int64_t x182 = 3189901061817LL;
	uint64_t x183 = UINT64_MAX;
	volatile uint32_t x184 = UINT32_MAX;
	volatile uint64_t t44 = 1770024325304048682LLU;

	t44 = (((x181|x182)&x183)%x184);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x185 = INT8_MIN;
	uint32_t x187 = 2481201U;
	static int32_t x188 = INT32_MAX;
	volatile uint32_t t45 = 76599854U;

	t45 = (((x185|x186)&x187)%x188);

	if (t45 != 2481201U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = INT32_MAX;
	int16_t x191 = INT16_MIN;
	static volatile int32_t t46 = 2;

	t46 = (((x189|x190)&x191)%x192);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = -241218361816LL;
	int16_t x194 = INT16_MIN;
	volatile int8_t x195 = -1;
	int64_t t47 = -598602507125527LL;

	t47 = (((x193|x194)&x195)%x196);

	if (t47 != -6616LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = 4724;
	volatile int16_t x198 = -1;
	int64_t x199 = INT64_MIN;
	volatile int64_t x200 = -32718272486LL;
	volatile int64_t t48 = 69640399662286941LL;

	t48 = (((x197|x198)&x199)%x200);

	if (t48 != -817319756LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x202 = INT32_MIN;
	int16_t x203 = INT16_MAX;
	int16_t x204 = INT16_MAX;
	volatile int32_t t49 = 3504;

	t49 = (((x201|x202)&x203)%x204);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x205 = 10424U;
	int16_t x206 = INT16_MAX;
	volatile int8_t x207 = -1;
	static int32_t t50 = 85573;

	t50 = (((x205|x206)&x207)%x208);

	if (t50 != 2785) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = 4;
	int64_t x210 = -3472006302653529LL;
	uint32_t x211 = 1U;
	int64_t x212 = -5088609277100LL;

	t51 = (((x209|x210)&x211)%x212);

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x214 = -1;
	uint64_t x215 = UINT64_MAX;
	int32_t x216 = INT32_MIN;

	t52 = (((x213|x214)&x215)%x216);

	if (t52 != 2147483647LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x217 = -1;
	uint8_t x219 = 8U;
	static volatile uint8_t x220 = 83U;
	uint64_t t53 = 4LLU;

	t53 = (((x217|x218)&x219)%x220);

	if (t53 != 8LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x221 = INT8_MIN;
	uint32_t x222 = 0U;
	int16_t x224 = -545;

	t54 = (((x221|x222)&x223)%x224);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x225 = 2801U;
	int32_t x226 = -1;
	volatile uint64_t x227 = 92854931423LLU;
	uint32_t x228 = 155316728U;
	volatile uint64_t t55 = 709701LLU;

	t55 = (((x225|x226)&x227)%x228);

	if (t55 != 20233831LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x230 = 15577548429979421LL;
	static int8_t x231 = -1;
	int64_t x232 = INT64_MIN;
	volatile int64_t t56 = -291934478LL;

	t56 = (((x229|x230)&x231)%x232);

	if (t56 != 15577548429983743LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = -1919;
	int32_t x235 = INT32_MAX;

	t57 = (((x233|x234)&x235)%x236);

	if (t57 != 2147481729LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = -1;
	int16_t x238 = INT16_MAX;
	volatile uint32_t x240 = 12917U;
	uint32_t t58 = 51U;

	t58 = (((x237|x238)&x239)%x240);

	if (t58 != 12896U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = -1;
	uint32_t x242 = 319U;
	static uint16_t x243 = UINT16_MAX;
	uint8_t x244 = 2U;

	t59 = (((x241|x242)&x243)%x244);

	if (t59 != 1U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x246 = 1U;
	int8_t x247 = 1;

	t60 = (((x245|x246)&x247)%x248);

	if (t60 != 1LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x250 = UINT16_MAX;
	int64_t x251 = INT64_MAX;
	int32_t x252 = 112;

	t61 = (((x249|x250)&x251)%x252);

	if (t61 != 15LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x253 = INT32_MIN;
	int8_t x254 = -1;
	int8_t x255 = 1;
	int8_t x256 = -1;
	volatile int32_t t62 = -389598501;

	t62 = (((x253|x254)&x255)%x256);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x257 = 2038345759571712067LLU;
	static uint8_t x258 = 7U;
	volatile uint16_t x259 = UINT16_MAX;
	volatile uint64_t t63 = 3645LLU;

	t63 = (((x257|x258)&x259)%x260);

	if (t63 != 6215LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x262 = -1;
	volatile int8_t x263 = -1;
	static volatile int32_t t64 = 793317;

	t64 = (((x261|x262)&x263)%x264);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x265 = -1;
	volatile int8_t x267 = INT8_MAX;
	uint8_t x268 = 1U;
	volatile uint64_t t65 = 450178LLU;

	t65 = (((x265|x266)&x267)%x268);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = -1;
	uint8_t x270 = 4U;
	int32_t x271 = INT32_MAX;
	static int16_t x272 = INT16_MIN;
	volatile int32_t t66 = 22951855;

	t66 = (((x269|x270)&x271)%x272);

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = -1LL;
	uint64_t x274 = 10539534LLU;
	int64_t x276 = 3984651547499398914LL;

	t67 = (((x273|x274)&x275)%x276);

	if (t67 != 2508137881564472312LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x277 = -1;
	int32_t x278 = -1;
	int64_t x279 = -1LL;
	int8_t x280 = -1;

	t68 = (((x277|x278)&x279)%x280);

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x281 = 95U;
	volatile int8_t x282 = -1;
	volatile int16_t x283 = -1;
	volatile uint16_t x284 = 2019U;
	int32_t t69 = 19125;

	t69 = (((x281|x282)&x283)%x284);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x286 = UINT32_MAX;
	uint8_t x287 = 3U;
	int32_t x288 = -1;
	uint64_t t70 = 998696984561023LLU;

	t70 = (((x285|x286)&x287)%x288);

	if (t70 != 3LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x289 = 2846964LLU;
	int32_t x292 = 621367296;
	uint64_t t71 = 3813402LLU;

	t71 = (((x289|x290)&x291)%x292);

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x293 = 5LL;
	static int8_t x294 = INT8_MAX;
	uint32_t x295 = UINT32_MAX;
	int64_t x296 = INT64_MIN;
	int64_t t72 = -7406420818LL;

	t72 = (((x293|x294)&x295)%x296);

	if (t72 != 127LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x298 = INT64_MIN;
	volatile int8_t x299 = INT8_MIN;
	int8_t x300 = INT8_MIN;
	volatile int64_t t73 = 515346850389668LL;

	t73 = (((x297|x298)&x299)%x300);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x301 = -24229341578LL;
	int64_t x302 = INT64_MIN;
	uint32_t x303 = 932U;
	uint8_t x304 = UINT8_MAX;
	volatile int64_t t74 = 1393633380LL;

	t74 = (((x301|x302)&x303)%x304);

	if (t74 != 38LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x305 = -1;
	uint64_t x306 = 10809416LLU;
	uint64_t x307 = UINT64_MAX;
	static int16_t x308 = INT16_MIN;
	uint64_t t75 = 906527650LLU;

	t75 = (((x305|x306)&x307)%x308);

	if (t75 != 32767LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x309 = -1;
	volatile uint32_t x310 = 680045908U;
	uint64_t x311 = UINT64_MAX;
	volatile uint32_t x312 = UINT32_MAX;
	volatile uint64_t t76 = 3742636321LLU;

	t76 = (((x309|x310)&x311)%x312);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x313 = INT8_MIN;
	int16_t x314 = -1590;
	int8_t x315 = -1;
	static volatile int16_t x316 = INT16_MIN;
	volatile int32_t t77 = 9;

	t77 = (((x313|x314)&x315)%x316);

	if (t77 != -54) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x317 = 56U;
	int8_t x318 = INT8_MIN;
	volatile int64_t x319 = -8585680708138LL;
	uint8_t x320 = 7U;
	volatile int64_t t78 = -1591490970LL;

	t78 = (((x317|x318)&x319)%x320);

	if (t78 != -2LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = -2;
	uint8_t x322 = UINT8_MAX;
	int8_t x323 = INT8_MIN;
	static volatile int16_t x324 = INT16_MIN;

	t79 = (((x321|x322)&x323)%x324);

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x325 = UINT32_MAX;
	int64_t x326 = INT64_MAX;
	static volatile int8_t x327 = 56;
	volatile int8_t x328 = INT8_MIN;
	static volatile int64_t t80 = 107280359431157755LL;

	t80 = (((x325|x326)&x327)%x328);

	if (t80 != 56LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x329 = 3U;
	volatile int16_t x330 = 10;
	uint32_t x331 = 1507219224U;
	static int8_t x332 = -1;

	t81 = (((x329|x330)&x331)%x332);

	if (t81 != 8U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x333 = INT16_MIN;
	volatile int16_t x334 = INT16_MAX;
	int64_t x336 = -1LL;
	static volatile int64_t t82 = 133232542299823LL;

	t82 = (((x333|x334)&x335)%x336);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x337 = 3U;
	uint64_t x338 = UINT64_MAX;
	static int64_t x339 = -1LL;
	volatile int64_t x340 = INT64_MAX;
	uint64_t t83 = 2125821147540LLU;

	t83 = (((x337|x338)&x339)%x340);

	if (t83 != 1LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x341 = -1005;
	int64_t x342 = INT64_MIN;

	t84 = (((x341|x342)&x343)%x344);

	if (t84 != -32768LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x345 = -8;
	int32_t x346 = INT32_MIN;

	t85 = (((x345|x346)&x347)%x348);

	if (t85 != 12LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x349 = 117U;
	uint16_t x350 = 8U;
	uint32_t x351 = 112949750U;
	int8_t x352 = 14;
	uint32_t t86 = 976260669U;

	t86 = (((x349|x350)&x351)%x352);

	if (t86 != 4U) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x354 = -1;
	static int16_t x356 = -14;

	t87 = (((x353|x354)&x355)%x356);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x357 = UINT32_MAX;
	uint8_t x358 = 3U;
	int16_t x359 = -1;

	t88 = (((x357|x358)&x359)%x360);

	if (t88 != 15U) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x362 = UINT64_MAX;
	uint32_t x363 = 140594254U;
	uint64_t t89 = 3149542079898897LLU;

	t89 = (((x361|x362)&x363)%x364);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x365 = -72458118;
	volatile int64_t x366 = INT64_MIN;
	static int8_t x367 = -5;
	int64_t t90 = -916401785848LL;

	t90 = (((x365|x366)&x367)%x368);

	if (t90 != -72458118LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x369 = INT64_MIN;
	volatile uint64_t x370 = 38708244359814591LLU;
	int16_t x371 = INT16_MIN;
	int8_t x372 = -29;
	volatile uint64_t t91 = 3014365483LLU;

	t91 = (((x369|x370)&x371)%x372);

	if (t91 != 9262080281214582784LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x373 = INT8_MIN;
	volatile int16_t x374 = INT16_MIN;
	uint32_t x375 = 722432U;
	uint64_t t92 = 196LLU;

	t92 = (((x373|x374)&x375)%x376);

	if (t92 != 722432LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x377 = INT32_MIN;
	uint16_t x378 = 6878U;
	volatile int16_t x379 = INT16_MAX;
	static int16_t x380 = INT16_MAX;

	t93 = (((x377|x378)&x379)%x380);

	if (t93 != 6878) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x381 = INT16_MIN;
	int64_t x382 = 4352600429LL;
	uint16_t x384 = 3U;
	int64_t t94 = 63702LL;

	t94 = (((x381|x382)&x383)%x384);

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x386 = INT64_MIN;
	int16_t x387 = INT16_MAX;

	t95 = (((x385|x386)&x387)%x388);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x389 = UINT16_MAX;
	int64_t x390 = INT64_MIN;
	static volatile int32_t x391 = 202971;
	static int64_t x392 = 420081657111702LL;
	volatile int64_t t96 = -1309LL;

	t96 = (((x389|x390)&x391)%x392);

	if (t96 != 6363LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x393 = INT8_MAX;
	uint32_t x394 = 43U;
	int64_t x395 = -101504214986LL;
	uint8_t x396 = 14U;
	volatile int64_t t97 = 82723LL;

	t97 = (((x393|x394)&x395)%x396);

	if (t97 != 12LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x397 = UINT16_MAX;
	uint8_t x398 = 24U;
	uint8_t x399 = 43U;
	int32_t t98 = -1;

	t98 = (((x397|x398)&x399)%x400);

	if (t98 != 8) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x401 = 740LL;
	static int8_t x402 = INT8_MIN;
	uint16_t x404 = UINT16_MAX;
	static volatile int64_t t99 = 1LL;

	t99 = (((x401|x402)&x403)%x404);

	if (t99 != -32768LL) { NG(); } else { ; }
	
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

