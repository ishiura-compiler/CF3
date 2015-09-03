#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MIN;
static uint64_t x6 = 26798LLU;
int32_t t1 = -39830;
int32_t x10 = INT32_MIN;
uint32_t x11 = UINT32_MAX;
volatile uint32_t x14 = 266855277U;
uint16_t x34 = UINT16_MAX;
uint8_t x40 = UINT8_MAX;
static volatile int32_t t8 = -1947;
static uint64_t x45 = UINT64_MAX;
int8_t x50 = INT8_MIN;
uint8_t x53 = 105U;
uint32_t x56 = 37588202U;
int32_t x57 = INT32_MIN;
int32_t x58 = INT32_MIN;
uint64_t x64 = 50LLU;
static uint64_t t14 = 204LLU;
volatile int32_t t16 = -204718;
uint16_t x73 = 12U;
uint8_t x84 = 3U;
int8_t x85 = 1;
uint16_t x86 = 1017U;
static uint32_t x87 = UINT32_MAX;
int8_t x89 = INT8_MAX;
static uint16_t x107 = UINT16_MAX;
int32_t x110 = -1;
static int16_t x112 = INT16_MIN;
uint16_t x116 = 65U;
volatile int32_t t26 = 13453404;
uint32_t x119 = 17U;
static int32_t t28 = 1;
int8_t x137 = INT8_MIN;
int16_t x141 = 0;
static uint16_t x142 = UINT16_MAX;
int64_t x144 = -65264276031419LL;
int64_t t30 = -25844LL;
uint32_t x145 = 467949782U;
int8_t x146 = 1;
uint64_t x149 = UINT64_MAX;
static uint8_t x152 = 18U;
volatile int64_t t33 = 23726556230LL;
int16_t x162 = -1;
volatile int8_t x165 = INT8_MIN;
uint64_t x170 = UINT64_MAX;
int16_t x171 = INT16_MIN;
int32_t x172 = INT32_MAX;
int32_t t36 = -756;
int32_t t37 = -2830733;
volatile int64_t x177 = 7395650022766LL;
int64_t x181 = -7596LL;
volatile int8_t x196 = -4;
uint8_t x204 = 0U;
volatile int32_t t43 = 119968090;
int32_t t44 = 42229229;
uint8_t x212 = UINT8_MAX;
uint16_t x216 = UINT16_MAX;
static uint32_t x217 = UINT32_MAX;
uint16_t x220 = 66U;
int32_t t48 = -983;
volatile uint64_t x230 = 1136143902440666LLU;
volatile uint64_t t51 = 1LLU;
static int64_t x245 = INT64_MAX;
static uint16_t x247 = 890U;
static int8_t x252 = INT8_MIN;
volatile uint8_t x257 = 6U;
uint64_t x260 = 28069035LLU;
int16_t x271 = INT16_MIN;
static uint64_t x274 = UINT64_MAX;
int32_t t60 = 212982051;
static int16_t x296 = -1;
static volatile int32_t t64 = 19115;
int16_t x302 = -1;
uint64_t x304 = UINT64_MAX;
int32_t x306 = INT32_MIN;
int16_t x311 = INT16_MAX;
int16_t x313 = -1;
volatile uint32_t t69 = 445279U;
uint16_t x324 = 25U;
int16_t x325 = INT16_MIN;
volatile uint32_t t72 = 0U;
static uint32_t x331 = 13296U;
int32_t t74 = 11185994;
int64_t x356 = -15917546290561LL;
static volatile uint8_t x357 = 0U;
static int8_t x360 = INT8_MIN;
static uint32_t x362 = 694883U;
uint64_t x363 = UINT64_MAX;
volatile int32_t t81 = 12915813;
uint8_t x370 = 122U;
uint64_t x374 = 79LLU;
uint32_t x378 = UINT32_MAX;
volatile uint16_t x379 = 465U;
volatile int16_t x380 = -1;
int32_t t84 = 3;
int64_t x387 = INT64_MAX;
volatile int32_t t85 = 17;
static volatile uint8_t x393 = UINT8_MAX;
int8_t x396 = 2;
uint8_t x400 = 10U;
volatile uint64_t x403 = UINT64_MAX;
int16_t x409 = INT16_MIN;
volatile int8_t x418 = INT8_MAX;
static int32_t x426 = INT32_MAX;
static int32_t x433 = -74134;
int32_t x434 = INT32_MIN;
volatile int32_t x438 = INT32_MIN;
int16_t x439 = -1;
uint32_t x440 = 0U;
static int32_t x441 = -1;
uint64_t x443 = 5LLU;
uint32_t x446 = 1419271781U;
int16_t x447 = -1095;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int8_t x2 = 7;
	static volatile int16_t x4 = -1;
	int32_t t0 = -724334;

	t0 = (((x1&x2)<=x3)-x4);

	if (t0 != 2) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 5U;
	static int8_t x7 = INT8_MIN;
	volatile int32_t x8 = -6022418;

	t1 = (((x5&x6)<=x7)-x8);

	if (t1 != 6022419) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	int8_t x12 = -1;
	int32_t t2 = 1;

	t2 = (((x9&x10)<=x11)-x12);

	if (t2 != 2) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	volatile uint32_t x15 = UINT32_MAX;
	int32_t x16 = 1381;
	volatile int32_t t3 = -164;

	t3 = (((x13&x14)<=x15)-x16);

	if (t3 != -1380) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -256;
	uint32_t x18 = UINT32_MAX;
	static int64_t x19 = -1LL;
	static volatile uint64_t x20 = 189856030529LLU;
	volatile uint64_t t4 = 114200LLU;

	t4 = (((x17&x18)<=x19)-x20);

	if (t4 != 18446743883853521087LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x21 = 94U;
	static int64_t x22 = INT64_MAX;
	int32_t x23 = INT32_MAX;
	static uint64_t x24 = 7LLU;
	static uint64_t t5 = 19196475841LLU;

	t5 = (((x21&x22)<=x23)-x24);

	if (t5 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = 22;
	uint32_t x30 = 466884342U;
	int16_t x31 = INT16_MIN;
	uint32_t x32 = UINT32_MAX;
	volatile uint32_t t6 = 47115474U;

	t6 = (((x29&x30)<=x31)-x32);

	if (t6 != 2U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MAX;
	int32_t x35 = -1;
	uint16_t x36 = 2U;
	static volatile int32_t t7 = 13731521;

	t7 = (((x33&x34)<=x35)-x36);

	if (t7 != -2) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint64_t x37 = 1322LLU;
	volatile uint32_t x38 = 4631U;
	static int8_t x39 = INT8_MAX;

	t8 = (((x37&x38)<=x39)-x40);

	if (t8 != -254) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = -1;
	int16_t x42 = INT16_MIN;
	int8_t x43 = INT8_MIN;
	int64_t x44 = 11LL;
	volatile int64_t t9 = 21LL;

	t9 = (((x41&x42)<=x43)-x44);

	if (t9 != -10LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x46 = 0;
	uint8_t x47 = UINT8_MAX;
	uint64_t x48 = 850795304LLU;
	uint64_t t10 = 4022653LLU;

	t10 = (((x45&x46)<=x47)-x48);

	if (t10 != 18446744072858756313LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MIN;
	int64_t x51 = INT64_MAX;
	int8_t x52 = INT8_MIN;
	volatile int32_t t11 = 56;

	t11 = (((x49&x50)<=x51)-x52);

	if (t11 != 129) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x54 = INT32_MIN;
	uint8_t x55 = 0U;
	uint32_t t12 = 112403589U;

	t12 = (((x53&x54)<=x55)-x56);

	if (t12 != 4257379095U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x59 = UINT8_MAX;
	uint32_t x60 = UINT32_MAX;
	volatile uint32_t t13 = 218U;

	t13 = (((x57&x58)<=x59)-x60);

	if (t13 != 2U) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x61 = INT32_MAX;
	int8_t x62 = INT8_MAX;
	static int8_t x63 = INT8_MIN;

	t14 = (((x61&x62)<=x63)-x64);

	if (t14 != 18446744073709551566LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x65 = 9603;
	static int32_t x66 = INT32_MAX;
	int16_t x67 = INT16_MIN;
	uint32_t x68 = 142U;
	volatile uint32_t t15 = 83948550U;

	t15 = (((x65&x66)<=x67)-x68);

	if (t15 != 4294967154U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = -1LL;
	static int32_t x70 = INT32_MIN;
	uint32_t x71 = 956U;
	int8_t x72 = INT8_MIN;

	t16 = (((x69&x70)<=x71)-x72);

	if (t16 != 129) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x74 = 0;
	int16_t x75 = 8222;
	static int64_t x76 = -15367560252LL;
	int64_t t17 = -20459951LL;

	t17 = (((x73&x74)<=x75)-x76);

	if (t17 != 15367560253LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x81 = INT16_MAX;
	int32_t x82 = INT32_MIN;
	volatile uint32_t x83 = 2U;
	int32_t t18 = -18;

	t18 = (((x81&x82)<=x83)-x84);

	if (t18 != -2) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x88 = INT16_MIN;
	volatile int32_t t19 = -494;

	t19 = (((x85&x86)<=x87)-x88);

	if (t19 != 32769) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x90 = INT32_MIN;
	uint64_t x91 = 6962LLU;
	int8_t x92 = 0;
	int32_t t20 = -866054229;

	t20 = (((x89&x90)<=x91)-x92);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MAX;
	static int16_t x94 = -4;
	static int16_t x95 = INT16_MAX;
	static int64_t x96 = -160121715621LL;
	volatile int64_t t21 = -2090724885LL;

	t21 = (((x93&x94)<=x95)-x96);

	if (t21 != 160121715621LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x97 = 1069548159681LLU;
	uint8_t x98 = 57U;
	int16_t x99 = INT16_MAX;
	uint64_t x100 = UINT64_MAX;
	uint64_t t22 = 2288837803716446584LLU;

	t22 = (((x97&x98)<=x99)-x100);

	if (t22 != 2LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = INT16_MIN;
	static uint8_t x102 = 21U;
	uint64_t x103 = 28136094LLU;
	volatile int8_t x104 = INT8_MIN;
	int32_t t23 = 30204;

	t23 = (((x101&x102)<=x103)-x104);

	if (t23 != 129) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x105 = -13;
	int64_t x106 = 1181LL;
	static uint64_t x108 = UINT64_MAX;
	volatile uint64_t t24 = 54954LLU;

	t24 = (((x105&x106)<=x107)-x108);

	if (t24 != 2LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x109 = INT8_MIN;
	uint16_t x111 = 10759U;
	int32_t t25 = 139;

	t25 = (((x109&x110)<=x111)-x112);

	if (t25 != 32769) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = -1;
	uint32_t x114 = 3657U;
	volatile uint64_t x115 = 26844LLU;

	t26 = (((x113&x114)<=x115)-x116);

	if (t26 != -64) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x117 = 26044870U;
	int64_t x118 = INT64_MAX;
	int16_t x120 = INT16_MIN;
	static int32_t t27 = -3755787;

	t27 = (((x117&x118)<=x119)-x120);

	if (t27 != 32768) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x125 = -1;
	uint16_t x126 = 55U;
	static int16_t x127 = INT16_MAX;
	int16_t x128 = -13;

	t28 = (((x125&x126)<=x127)-x128);

	if (t28 != 14) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x138 = INT8_MAX;
	uint64_t x139 = UINT64_MAX;
	int8_t x140 = 16;
	volatile int32_t t29 = 429269;

	t29 = (((x137&x138)<=x139)-x140);

	if (t29 != -15) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x143 = INT8_MAX;

	t30 = (((x141&x142)<=x143)-x144);

	if (t30 != 65264276031420LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x147 = 200115290U;
	volatile int16_t x148 = -1;
	static volatile int32_t t31 = 0;

	t31 = (((x145&x146)<=x147)-x148);

	if (t31 != 2) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x150 = INT8_MAX;
	uint64_t x151 = 7236144121676849LLU;
	int32_t t32 = 29032;

	t32 = (((x149&x150)<=x151)-x152);

	if (t32 != -17) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x153 = -45;
	int64_t x154 = INT64_MAX;
	int16_t x155 = INT16_MAX;
	int64_t x156 = -6772396072LL;

	t33 = (((x153&x154)<=x155)-x156);

	if (t33 != 6772396072LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x161 = 642;
	int64_t x163 = INT64_MAX;
	int16_t x164 = INT16_MIN;
	int32_t t34 = 1038591924;

	t34 = (((x161&x162)<=x163)-x164);

	if (t34 != 32769) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x166 = UINT16_MAX;
	int16_t x167 = 15018;
	uint32_t x168 = UINT32_MAX;
	volatile uint32_t t35 = 242U;

	t35 = (((x165&x166)<=x167)-x168);

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x169 = INT64_MAX;

	t36 = (((x169&x170)<=x171)-x172);

	if (t36 != -2147483646) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x173 = INT8_MAX;
	int32_t x174 = 12313;
	volatile int64_t x175 = -1LL;
	static int8_t x176 = 21;

	t37 = (((x173&x174)<=x175)-x176);

	if (t37 != -21) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x178 = INT32_MIN;
	int16_t x179 = 6264;
	static int32_t x180 = -1185;
	static volatile int32_t t38 = 105;

	t38 = (((x177&x178)<=x179)-x180);

	if (t38 != 1185) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x182 = UINT16_MAX;
	uint32_t x183 = UINT32_MAX;
	int32_t x184 = -6;
	int32_t t39 = 7148;

	t39 = (((x181&x182)<=x183)-x184);

	if (t39 != 7) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x185 = INT8_MAX;
	int32_t x186 = INT32_MAX;
	static int16_t x187 = INT16_MAX;
	int64_t x188 = -51980639623329LL;
	volatile int64_t t40 = -45322LL;

	t40 = (((x185&x186)<=x187)-x188);

	if (t40 != 51980639623330LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x189 = -1;
	volatile int64_t x190 = 168478581278LL;
	int64_t x191 = INT64_MIN;
	static volatile int16_t x192 = INT16_MIN;
	int32_t t41 = 2;

	t41 = (((x189&x190)<=x191)-x192);

	if (t41 != 32768) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x193 = 13U;
	volatile int16_t x194 = INT16_MIN;
	volatile uint64_t x195 = 36828LLU;
	volatile int32_t t42 = 58280;

	t42 = (((x193&x194)<=x195)-x196);

	if (t42 != 5) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x201 = -2;
	int64_t x202 = INT64_MIN;
	static int64_t x203 = 3514444239027445LL;

	t43 = (((x201&x202)<=x203)-x204);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x205 = INT64_MIN;
	uint32_t x206 = 39U;
	int64_t x207 = INT64_MAX;
	volatile int16_t x208 = -1;

	t44 = (((x205&x206)<=x207)-x208);

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x209 = -304254953825485645LL;
	int32_t x210 = INT32_MIN;
	int8_t x211 = -9;
	volatile int32_t t45 = -1;

	t45 = (((x209&x210)<=x211)-x212);

	if (t45 != -254) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x213 = INT8_MAX;
	uint64_t x214 = UINT64_MAX;
	int16_t x215 = INT16_MAX;
	int32_t t46 = 825169983;

	t46 = (((x213&x214)<=x215)-x216);

	if (t46 != -65534) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x218 = 1U;
	volatile int8_t x219 = INT8_MAX;
	volatile int32_t t47 = 320;

	t47 = (((x217&x218)<=x219)-x220);

	if (t47 != -65) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x221 = -1;
	int8_t x222 = -1;
	int8_t x223 = INT8_MAX;
	int8_t x224 = 1;

	t48 = (((x221&x222)<=x223)-x224);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x225 = INT8_MIN;
	uint64_t x226 = UINT64_MAX;
	int64_t x227 = -1LL;
	static int64_t x228 = -597818765809169141LL;
	volatile int64_t t49 = -13279LL;

	t49 = (((x225&x226)<=x227)-x228);

	if (t49 != 597818765809169142LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x229 = INT64_MIN;
	int32_t x231 = INT32_MIN;
	uint64_t x232 = 25LLU;
	volatile uint64_t t50 = 536028810569520541LLU;

	t50 = (((x229&x230)<=x231)-x232);

	if (t50 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x233 = INT64_MIN;
	static volatile int8_t x234 = INT8_MAX;
	int64_t x235 = -1LL;
	uint64_t x236 = UINT64_MAX;

	t51 = (((x233&x234)<=x235)-x236);

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x237 = INT8_MIN;
	int64_t x238 = -1LL;
	uint64_t x239 = 5878214493712054LLU;
	uint64_t x240 = 14638LLU;
	static uint64_t t52 = 3986LLU;

	t52 = (((x237&x238)<=x239)-x240);

	if (t52 != 18446744073709536978LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x241 = 12592U;
	uint16_t x242 = 13U;
	int64_t x243 = INT64_MIN;
	uint8_t x244 = UINT8_MAX;
	int32_t t53 = -1;

	t53 = (((x241&x242)<=x243)-x244);

	if (t53 != -255) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x246 = INT16_MIN;
	int8_t x248 = INT8_MAX;
	volatile int32_t t54 = -5566;

	t54 = (((x245&x246)<=x247)-x248);

	if (t54 != -127) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x249 = -774007965;
	volatile int8_t x250 = 12;
	int64_t x251 = INT64_MIN;
	int32_t t55 = 5;

	t55 = (((x249&x250)<=x251)-x252);

	if (t55 != 128) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x253 = UINT8_MAX;
	int8_t x254 = -1;
	int32_t x255 = INT32_MAX;
	int16_t x256 = -7358;
	volatile int32_t t56 = 2312;

	t56 = (((x253&x254)<=x255)-x256);

	if (t56 != 7359) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x258 = 55U;
	volatile uint32_t x259 = 4U;
	volatile uint64_t t57 = 205LLU;

	t57 = (((x257&x258)<=x259)-x260);

	if (t57 != 18446744073681482581LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x269 = INT8_MIN;
	volatile uint64_t x270 = 1486295605LLU;
	static uint32_t x272 = 536529586U;
	static volatile uint32_t t58 = 1U;

	t58 = (((x269&x270)<=x271)-x272);

	if (t58 != 3758437711U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x273 = INT32_MIN;
	volatile int64_t x275 = -209760358LL;
	int16_t x276 = 10;
	static int32_t t59 = 151;

	t59 = (((x273&x274)<=x275)-x276);

	if (t59 != -9) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x277 = 1;
	static int8_t x278 = INT8_MAX;
	int8_t x279 = INT8_MIN;
	volatile int8_t x280 = INT8_MAX;

	t60 = (((x277&x278)<=x279)-x280);

	if (t60 != -127) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x281 = INT8_MIN;
	int8_t x282 = INT8_MAX;
	int32_t x283 = INT32_MAX;
	int64_t x284 = -17470190421648382LL;
	volatile int64_t t61 = 4905626080254364LL;

	t61 = (((x281&x282)<=x283)-x284);

	if (t61 != 17470190421648383LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x285 = INT16_MIN;
	int8_t x286 = INT8_MIN;
	int16_t x287 = INT16_MAX;
	int64_t x288 = INT64_MAX;
	volatile int64_t t62 = 469544401LL;

	t62 = (((x285&x286)<=x287)-x288);

	if (t62 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x289 = INT16_MIN;
	int32_t x290 = -1;
	int64_t x291 = -127568962268LL;
	static int8_t x292 = INT8_MAX;
	int32_t t63 = 24531553;

	t63 = (((x289&x290)<=x291)-x292);

	if (t63 != -127) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x293 = 208;
	uint32_t x294 = UINT32_MAX;
	int8_t x295 = INT8_MIN;

	t64 = (((x293&x294)<=x295)-x296);

	if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x297 = UINT32_MAX;
	uint64_t x298 = 2869218013788LLU;
	int64_t x299 = INT64_MAX;
	uint8_t x300 = 0U;
	int32_t t65 = 783743913;

	t65 = (((x297&x298)<=x299)-x300);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x301 = INT32_MIN;
	static uint32_t x303 = 10473U;
	static uint64_t t66 = 471385633732365141LLU;

	t66 = (((x301&x302)<=x303)-x304);

	if (t66 != 1LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x305 = INT8_MAX;
	static volatile uint8_t x307 = 0U;
	int8_t x308 = -53;
	volatile int32_t t67 = 26626275;

	t67 = (((x305&x306)<=x307)-x308);

	if (t67 != 54) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x309 = INT64_MAX;
	volatile int16_t x310 = INT16_MIN;
	int32_t x312 = -2293584;
	int32_t t68 = -563044202;

	t68 = (((x309&x310)<=x311)-x312);

	if (t68 != 2293584) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x314 = 59;
	volatile uint32_t x315 = 186146180U;
	uint32_t x316 = 21935U;

	t69 = (((x313&x314)<=x315)-x316);

	if (t69 != 4294945362U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x317 = -16608506202213LL;
	static int8_t x318 = INT8_MIN;
	int8_t x319 = -1;
	volatile uint8_t x320 = 9U;
	int32_t t70 = -2;

	t70 = (((x317&x318)<=x319)-x320);

	if (t70 != -8) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x321 = 1;
	static int32_t x322 = -1;
	static int8_t x323 = -1;
	int32_t t71 = -399006919;

	t71 = (((x321&x322)<=x323)-x324);

	if (t71 != -25) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int8_t x326 = INT8_MIN;
	static int32_t x327 = INT32_MAX;
	uint32_t x328 = 4U;

	t72 = (((x325&x326)<=x327)-x328);

	if (t72 != 4294967293U) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x329 = 42U;
	static uint16_t x330 = 5011U;
	uint8_t x332 = 11U;
	int32_t t73 = 318642;

	t73 = (((x329&x330)<=x331)-x332);

	if (t73 != -10) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x333 = INT64_MAX;
	uint8_t x334 = 123U;
	volatile int16_t x335 = INT16_MIN;
	uint16_t x336 = 13U;

	t74 = (((x333&x334)<=x335)-x336);

	if (t74 != -13) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x341 = INT16_MIN;
	static uint8_t x342 = 123U;
	uint64_t x343 = 993948059445251216LLU;
	static int32_t x344 = -1;
	volatile int32_t t75 = 3334;

	t75 = (((x341&x342)<=x343)-x344);

	if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x345 = -1;
	int8_t x346 = 13;
	static volatile uint32_t x347 = 9100U;
	volatile int32_t x348 = INT32_MAX;
	volatile int32_t t76 = -3242;

	t76 = (((x345&x346)<=x347)-x348);

	if (t76 != -2147483646) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x349 = -1;
	volatile uint32_t x350 = 1865U;
	uint8_t x351 = 58U;
	static int32_t x352 = -1;
	volatile int32_t t77 = -127;

	t77 = (((x349&x350)<=x351)-x352);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x353 = INT64_MIN;
	uint32_t x354 = 61U;
	volatile int32_t x355 = INT32_MIN;
	volatile int64_t t78 = 1370250572020LL;

	t78 = (((x353&x354)<=x355)-x356);

	if (t78 != 15917546290561LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x358 = INT32_MAX;
	volatile int32_t x359 = -1;
	static int32_t t79 = 138911409;

	t79 = (((x357&x358)<=x359)-x360);

	if (t79 != 128) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x361 = INT8_MIN;
	static volatile uint8_t x364 = UINT8_MAX;
	volatile int32_t t80 = 542288;

	t80 = (((x361&x362)<=x363)-x364);

	if (t80 != -254) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x365 = -113;
	int8_t x366 = INT8_MIN;
	uint64_t x367 = UINT64_MAX;
	int8_t x368 = 40;

	t81 = (((x365&x366)<=x367)-x368);

	if (t81 != -39) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x369 = INT32_MIN;
	uint32_t x371 = 496118863U;
	int16_t x372 = 1;
	int32_t t82 = -77369632;

	t82 = (((x369&x370)<=x371)-x372);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x373 = UINT32_MAX;
	int16_t x375 = INT16_MIN;
	int64_t x376 = INT64_MAX;
	int64_t t83 = -1LL;

	t83 = (((x373&x374)<=x375)-x376);

	if (t83 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x377 = INT32_MAX;

	t84 = (((x377&x378)<=x379)-x380);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x385 = INT8_MIN;
	int8_t x386 = -4;
	int8_t x388 = INT8_MAX;

	t85 = (((x385&x386)<=x387)-x388);

	if (t85 != -126) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x389 = 1;
	static volatile int32_t x390 = INT32_MIN;
	static int64_t x391 = -1LL;
	volatile int8_t x392 = -58;
	int32_t t86 = 1853853;

	t86 = (((x389&x390)<=x391)-x392);

	if (t86 != 58) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x394 = -1;
	volatile uint32_t x395 = 29U;
	int32_t t87 = 11;

	t87 = (((x393&x394)<=x395)-x396);

	if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x397 = UINT16_MAX;
	static uint8_t x398 = 1U;
	int8_t x399 = INT8_MAX;
	volatile int32_t t88 = -1;

	t88 = (((x397&x398)<=x399)-x400);

	if (t88 != -9) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x401 = 17622088035420308LLU;
	int16_t x402 = -1;
	uint8_t x404 = 48U;
	static int32_t t89 = -78313029;

	t89 = (((x401&x402)<=x403)-x404);

	if (t89 != -47) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x405 = UINT32_MAX;
	volatile int32_t x406 = -1560;
	int64_t x407 = INT64_MIN;
	uint8_t x408 = 7U;
	volatile int32_t t90 = 1;

	t90 = (((x405&x406)<=x407)-x408);

	if (t90 != -7) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x410 = INT8_MIN;
	int16_t x411 = INT16_MIN;
	static uint8_t x412 = 1U;
	static volatile int32_t t91 = 45;

	t91 = (((x409&x410)<=x411)-x412);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x417 = 15434723841643LL;
	static uint8_t x419 = UINT8_MAX;
	static uint32_t x420 = UINT32_MAX;
	uint32_t t92 = 12U;

	t92 = (((x417&x418)<=x419)-x420);

	if (t92 != 2U) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x421 = 1392;
	static uint64_t x422 = UINT64_MAX;
	int32_t x423 = 6034;
	uint32_t x424 = UINT32_MAX;
	uint32_t t93 = 2616688U;

	t93 = (((x421&x422)<=x423)-x424);

	if (t93 != 2U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x425 = 417344;
	uint64_t x427 = UINT64_MAX;
	int8_t x428 = INT8_MIN;
	volatile int32_t t94 = -64090392;

	t94 = (((x425&x426)<=x427)-x428);

	if (t94 != 129) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x429 = -1;
	static volatile int64_t x430 = 1647LL;
	static int64_t x431 = -1LL;
	uint64_t x432 = UINT64_MAX;
	uint64_t t95 = 2160694838732491997LLU;

	t95 = (((x429&x430)<=x431)-x432);

	if (t95 != 1LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint8_t x435 = UINT8_MAX;
	volatile int16_t x436 = -1;
	static volatile int32_t t96 = 483187;

	t96 = (((x433&x434)<=x435)-x436);

	if (t96 != 2) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x437 = 38U;
	volatile uint32_t t97 = 3U;

	t97 = (((x437&x438)<=x439)-x440);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x442 = 1611504311031577LLU;
	int16_t x444 = -1;
	volatile int32_t t98 = 0;

	t98 = (((x441&x442)<=x443)-x444);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x445 = INT64_MIN;
	int64_t x448 = -5672413825488LL;
	int64_t t99 = -330737902633469LL;

	t99 = (((x445&x446)<=x447)-x448);

	if (t99 != 5672413825488LL) { NG(); } else { ; }
	
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

