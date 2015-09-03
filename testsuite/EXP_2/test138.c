#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = 14;
int64_t x5 = INT64_MIN;
static uint8_t x11 = 5U;
int16_t x28 = INT16_MAX;
static uint64_t x39 = 8849107LLU;
int32_t t8 = -109;
volatile uint32_t x42 = 458312850U;
static int32_t t11 = -424528;
int8_t x53 = INT8_MAX;
static int64_t x55 = 117309599481LL;
uint32_t x58 = 48800U;
static uint16_t x59 = 6682U;
static int16_t x60 = INT16_MIN;
uint16_t x66 = 5898U;
static uint8_t x70 = UINT8_MAX;
int32_t t15 = -3;
int8_t x73 = INT8_MIN;
volatile int8_t x74 = INT8_MAX;
int64_t x78 = -1LL;
volatile uint16_t x82 = 41U;
volatile uint8_t x87 = 3U;
volatile uint16_t x89 = UINT16_MAX;
int32_t t20 = 21088971;
int16_t x94 = INT16_MIN;
int16_t x96 = INT16_MIN;
int16_t x97 = INT16_MAX;
static int8_t x101 = INT8_MIN;
volatile int32_t t23 = 40242;
static uint32_t x107 = UINT32_MAX;
static int8_t x110 = INT8_MIN;
volatile int32_t t25 = 16784;
int8_t x113 = INT8_MIN;
int16_t x127 = INT16_MIN;
volatile int32_t t29 = 29159662;
int64_t x129 = -16456986026135LL;
volatile int16_t x132 = 2;
volatile int32_t x134 = -70022;
volatile int64_t x138 = 689769LL;
static int32_t t32 = -74594;
int8_t x143 = -1;
int64_t x147 = -1LL;
int32_t x148 = INT32_MAX;
int64_t x152 = INT64_MIN;
uint16_t x154 = 3U;
int32_t x159 = 58;
int32_t x162 = -48;
static volatile int32_t t38 = 25022;
int8_t x173 = 28;
int32_t x174 = -1;
static int32_t t43 = -126263355;
static volatile int32_t t44 = -3;
volatile int64_t x193 = -1LL;
int64_t x195 = -2161553040619511301LL;
volatile int32_t x202 = 0;
static uint64_t x219 = 188LLU;
int64_t x221 = INT64_MAX;
static int16_t x222 = INT16_MAX;
int8_t x226 = -1;
uint16_t x235 = 4U;
static int16_t x236 = INT16_MAX;
static volatile int32_t t55 = 8142;
uint8_t x248 = 24U;
int32_t t58 = -440757;
int64_t x254 = INT64_MAX;
static volatile int8_t x259 = INT8_MAX;
uint16_t x260 = 3772U;
uint32_t x267 = 578837057U;
int8_t x271 = -54;
int64_t x274 = INT64_MIN;
volatile int32_t t64 = 9947;
int16_t x288 = INT16_MIN;
static volatile int32_t t67 = -36;
int64_t x296 = -23028LL;
static volatile int32_t t68 = 1;
int16_t x298 = INT16_MAX;
int32_t t69 = 6516;
uint64_t x302 = 0LLU;
int64_t x304 = INT64_MIN;
int32_t t70 = 44292404;
volatile int16_t x308 = -1;
int32_t t71 = 1014876455;
int8_t x312 = 0;
uint8_t x316 = UINT8_MAX;
int8_t x317 = INT8_MAX;
uint32_t x327 = 4519U;
int16_t x328 = -323;
volatile int32_t x337 = INT32_MAX;
int16_t x347 = -1;
int32_t t79 = -35;
volatile int8_t x352 = 33;
static volatile int8_t x354 = INT8_MAX;
volatile int8_t x362 = INT8_MAX;
static uint16_t x366 = UINT16_MAX;
int64_t x368 = 16463991480382495LL;
int32_t t85 = -52165582;
uint16_t x374 = UINT16_MAX;
volatile int32_t x375 = INT32_MIN;
static volatile int32_t t88 = -110510996;
volatile int32_t t89 = 12621;
volatile int16_t x391 = 97;
static uint32_t x394 = 60U;
int16_t x396 = -3119;
volatile int32_t t91 = 498967433;
int64_t x397 = 1LL;
int8_t x399 = INT8_MIN;
static int16_t x427 = -1;
static int32_t x432 = -679852;
int16_t x440 = INT16_MIN;
volatile int32_t t99 = 211978758;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int32_t x2 = 0;
	int64_t x4 = -1LL;
	int32_t t0 = -155233;

	t0 = ((x1&(x2+x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x6 = 1;
	uint8_t x7 = UINT8_MAX;
	static volatile int8_t x8 = INT8_MIN;
	static volatile int32_t t1 = -1;

	t1 = ((x5&(x6+x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 8U;
	int64_t x10 = INT64_MIN;
	static int64_t x12 = -1LL;
	static volatile int32_t t2 = 25;

	t2 = ((x9&(x10+x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	uint16_t x14 = 19712U;
	volatile uint8_t x15 = 93U;
	static int32_t x16 = INT32_MIN;
	static volatile int32_t t3 = 1098;

	t3 = ((x13&(x14+x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	int32_t x22 = -19060688;
	volatile int16_t x23 = 0;
	uint16_t x24 = UINT16_MAX;
	int32_t t4 = 1257814;

	t4 = ((x21&(x22+x23))==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x25 = INT16_MIN;
	int8_t x26 = INT8_MAX;
	int32_t x27 = 2842;
	volatile int32_t t5 = -4409666;

	t5 = ((x25&(x26+x27))==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MIN;
	uint16_t x30 = 595U;
	uint8_t x31 = 1U;
	static int8_t x32 = INT8_MIN;
	volatile int32_t t6 = 850636742;

	t6 = ((x29&(x30+x31))==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x33 = INT32_MAX;
	int16_t x34 = INT16_MAX;
	volatile int32_t x35 = 0;
	uint64_t x36 = 9070LLU;
	volatile int32_t t7 = 31241;

	t7 = ((x33&(x34+x35))==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = -797;
	volatile int16_t x38 = INT16_MIN;
	uint32_t x40 = UINT32_MAX;

	t8 = ((x37&(x38+x39))==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = 8;
	static int64_t x43 = -1LL;
	volatile int8_t x44 = INT8_MAX;
	int32_t t9 = 433962642;

	t9 = ((x41&(x42+x43))==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x45 = -1;
	uint16_t x46 = 15416U;
	int8_t x47 = 28;
	static volatile int64_t x48 = -1LL;
	volatile int32_t t10 = -36;

	t10 = ((x45&(x46+x47))==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = -419344;
	int8_t x50 = INT8_MIN;
	volatile uint32_t x51 = 1882858U;
	uint64_t x52 = 49413LLU;

	t11 = ((x49&(x50+x51))==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x54 = UINT16_MAX;
	volatile int32_t x56 = INT32_MAX;
	int32_t t12 = -14;

	t12 = ((x53&(x54+x55))==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x57 = UINT16_MAX;
	volatile int32_t t13 = 107;

	t13 = ((x57&(x58+x59))==x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x65 = 11943806U;
	volatile int64_t x67 = INT64_MIN;
	int8_t x68 = 26;
	int32_t t14 = 1;

	t14 = ((x65&(x66+x67))==x68);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = 1166U;
	uint64_t x71 = 3566185498047583LLU;
	static uint16_t x72 = 12217U;

	t15 = ((x69&(x70+x71))==x72);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x75 = 5126LLU;
	int16_t x76 = INT16_MIN;
	int32_t t16 = 142346;

	t16 = ((x73&(x74+x75))==x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = -1;
	uint32_t x79 = 3U;
	int8_t x80 = INT8_MAX;
	volatile int32_t t17 = 88716;

	t17 = ((x77&(x78+x79))==x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint64_t x81 = 85677262LLU;
	volatile int8_t x83 = INT8_MIN;
	volatile int16_t x84 = INT16_MIN;
	static volatile int32_t t18 = 38223022;

	t18 = ((x81&(x82+x83))==x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x85 = INT64_MAX;
	int8_t x86 = INT8_MIN;
	int8_t x88 = 5;
	volatile int32_t t19 = -21;

	t19 = ((x85&(x86+x87))==x88);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x90 = 0;
	int8_t x91 = INT8_MIN;
	int32_t x92 = -974433;

	t20 = ((x89&(x90+x91))==x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = INT16_MIN;
	int8_t x95 = -1;
	static volatile int32_t t21 = -2016180;

	t21 = ((x93&(x94+x95))==x96);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x98 = 342004689451LLU;
	int8_t x99 = 15;
	int16_t x100 = INT16_MAX;
	int32_t t22 = 8626;

	t22 = ((x97&(x98+x99))==x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x102 = 1916U;
	static volatile uint64_t x103 = 134887080LLU;
	volatile uint8_t x104 = UINT8_MAX;

	t23 = ((x101&(x102+x103))==x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x105 = INT32_MIN;
	static volatile uint8_t x106 = 2U;
	volatile int16_t x108 = 890;
	int32_t t24 = 260025917;

	t24 = ((x105&(x106+x107))==x108);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = INT64_MAX;
	int64_t x111 = 88180083478007951LL;
	static volatile int64_t x112 = INT64_MIN;

	t25 = ((x109&(x110+x111))==x112);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x114 = -7;
	uint8_t x115 = 121U;
	volatile int16_t x116 = 1;
	volatile int32_t t26 = 4222031;

	t26 = ((x113&(x114+x115))==x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x117 = -435;
	uint16_t x118 = UINT16_MAX;
	static uint32_t x119 = UINT32_MAX;
	volatile uint32_t x120 = 3618365U;
	int32_t t27 = 8370234;

	t27 = ((x117&(x118+x119))==x120);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x121 = UINT16_MAX;
	int16_t x122 = INT16_MIN;
	uint8_t x123 = 1U;
	static int64_t x124 = -1754275LL;
	volatile int32_t t28 = 102919;

	t28 = ((x121&(x122+x123))==x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x125 = -71532086111291480LL;
	uint32_t x126 = 120086U;
	uint8_t x128 = UINT8_MAX;

	t29 = ((x125&(x126+x127))==x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x130 = INT16_MIN;
	uint32_t x131 = 1200U;
	int32_t t30 = 254374267;

	t30 = ((x129&(x130+x131))==x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x133 = 0;
	int16_t x135 = 1;
	int16_t x136 = INT16_MIN;
	volatile int32_t t31 = -2;

	t31 = ((x133&(x134+x135))==x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = -7;
	int16_t x139 = INT16_MIN;
	static volatile int8_t x140 = -1;

	t32 = ((x137&(x138+x139))==x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = INT64_MAX;
	uint8_t x142 = UINT8_MAX;
	static uint8_t x144 = 3U;
	int32_t t33 = 373825;

	t33 = ((x141&(x142+x143))==x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int64_t x145 = INT64_MIN;
	static volatile int64_t x146 = -129049494585LL;
	static volatile int32_t t34 = 1024232502;

	t34 = ((x145&(x146+x147))==x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x149 = 2954;
	uint8_t x150 = 0U;
	volatile uint32_t x151 = 2642U;
	int32_t t35 = -7761;

	t35 = ((x149&(x150+x151))==x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = 22;
	uint8_t x155 = UINT8_MAX;
	uint16_t x156 = 71U;
	volatile int32_t t36 = -6056;

	t36 = ((x153&(x154+x155))==x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x157 = INT8_MAX;
	static uint64_t x158 = 6604348669374261LLU;
	volatile int32_t x160 = INT32_MIN;
	int32_t t37 = 83496186;

	t37 = ((x157&(x158+x159))==x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x161 = 52U;
	static volatile int32_t x163 = INT32_MAX;
	int32_t x164 = INT32_MIN;

	t38 = ((x161&(x162+x163))==x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x165 = 14U;
	int16_t x166 = INT16_MIN;
	uint16_t x167 = UINT16_MAX;
	int16_t x168 = INT16_MAX;
	volatile int32_t t39 = 3845;

	t39 = ((x165&(x166+x167))==x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x169 = 1U;
	static uint8_t x170 = 76U;
	int16_t x171 = INT16_MAX;
	volatile int64_t x172 = INT64_MIN;
	volatile int32_t t40 = -1;

	t40 = ((x169&(x170+x171))==x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x175 = 28642882;
	static int16_t x176 = -436;
	volatile int32_t t41 = 65;

	t41 = ((x173&(x174+x175))==x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x181 = 1;
	static volatile int8_t x182 = INT8_MIN;
	int8_t x183 = INT8_MIN;
	int32_t x184 = -3;
	int32_t t42 = 0;

	t42 = ((x181&(x182+x183))==x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x185 = INT8_MIN;
	int64_t x186 = -1LL;
	static int64_t x187 = 11928312820703LL;
	int64_t x188 = INT64_MIN;

	t43 = ((x185&(x186+x187))==x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x189 = -1;
	int16_t x190 = INT16_MAX;
	int64_t x191 = INT64_MIN;
	static int8_t x192 = -1;

	t44 = ((x189&(x190+x191))==x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x194 = -1;
	int16_t x196 = 281;
	int32_t t45 = 100396179;

	t45 = ((x193&(x194+x195))==x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x197 = INT32_MIN;
	static int16_t x198 = 7765;
	uint64_t x199 = UINT64_MAX;
	uint64_t x200 = 2206397368813912317LLU;
	static int32_t t46 = 1759;

	t46 = ((x197&(x198+x199))==x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x201 = -3639;
	int8_t x203 = -1;
	static int64_t x204 = -1LL;
	volatile int32_t t47 = 174912;

	t47 = ((x201&(x202+x203))==x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x209 = 0;
	int16_t x210 = -1;
	int32_t x211 = -1;
	int64_t x212 = INT64_MAX;
	static int32_t t48 = 7;

	t48 = ((x209&(x210+x211))==x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x213 = 496U;
	static uint8_t x214 = 9U;
	int32_t x215 = INT32_MIN;
	uint32_t x216 = 13938435U;
	int32_t t49 = 1;

	t49 = ((x213&(x214+x215))==x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x217 = INT8_MIN;
	static int8_t x218 = 10;
	int8_t x220 = INT8_MAX;
	int32_t t50 = -48170;

	t50 = ((x217&(x218+x219))==x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x223 = 2682LL;
	volatile int8_t x224 = INT8_MIN;
	int32_t t51 = 1338141;

	t51 = ((x221&(x222+x223))==x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x225 = INT32_MIN;
	uint8_t x227 = 8U;
	static volatile uint8_t x228 = 31U;
	int32_t t52 = 593417;

	t52 = ((x225&(x226+x227))==x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x229 = INT32_MAX;
	int64_t x230 = INT64_MIN;
	uint8_t x231 = UINT8_MAX;
	uint8_t x232 = 1U;
	int32_t t53 = 0;

	t53 = ((x229&(x230+x231))==x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int32_t x233 = INT32_MAX;
	uint64_t x234 = UINT64_MAX;
	int32_t t54 = -1;

	t54 = ((x233&(x234+x235))==x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x237 = -1LL;
	uint8_t x238 = 2U;
	int8_t x239 = INT8_MAX;
	static volatile int32_t x240 = INT32_MIN;

	t55 = ((x237&(x238+x239))==x240);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x241 = INT16_MIN;
	int16_t x242 = INT16_MAX;
	int8_t x243 = -1;
	int32_t x244 = 2;
	volatile int32_t t56 = 6552;

	t56 = ((x241&(x242+x243))==x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x245 = 1U;
	int64_t x246 = -16LL;
	uint64_t x247 = 3138896971626310LLU;
	volatile int32_t t57 = -188139944;

	t57 = ((x245&(x246+x247))==x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x249 = INT64_MIN;
	uint32_t x250 = UINT32_MAX;
	volatile int16_t x251 = INT16_MIN;
	static int16_t x252 = -1;

	t58 = ((x249&(x250+x251))==x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x253 = INT32_MAX;
	int8_t x255 = -20;
	uint8_t x256 = 6U;
	static volatile int32_t t59 = -22;

	t59 = ((x253&(x254+x255))==x256);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x257 = UINT8_MAX;
	int8_t x258 = INT8_MAX;
	static int32_t t60 = 1511811;

	t60 = ((x257&(x258+x259))==x260);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x261 = INT8_MAX;
	int8_t x262 = INT8_MIN;
	volatile uint64_t x263 = 662868766LLU;
	int8_t x264 = INT8_MIN;
	volatile int32_t t61 = -1860810;

	t61 = ((x261&(x262+x263))==x264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x265 = INT32_MAX;
	static int32_t x266 = INT32_MIN;
	int32_t x268 = INT32_MAX;
	volatile int32_t t62 = -40957;

	t62 = ((x265&(x266+x267))==x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x269 = 693191;
	int8_t x270 = INT8_MIN;
	volatile int32_t x272 = INT32_MIN;
	static volatile int32_t t63 = 1;

	t63 = ((x269&(x270+x271))==x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x273 = INT32_MIN;
	static uint16_t x275 = 45U;
	int64_t x276 = 632253667LL;

	t64 = ((x273&(x274+x275))==x276);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x277 = INT8_MIN;
	int8_t x278 = 7;
	uint16_t x279 = UINT16_MAX;
	int16_t x280 = INT16_MIN;
	volatile int32_t t65 = -5353582;

	t65 = ((x277&(x278+x279))==x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x285 = 52U;
	static uint64_t x286 = 2333172237LLU;
	int32_t x287 = INT32_MIN;
	static volatile int32_t t66 = 80057841;

	t66 = ((x285&(x286+x287))==x288);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static uint16_t x289 = UINT16_MAX;
	int16_t x290 = 1;
	static int8_t x291 = 7;
	uint32_t x292 = 260832U;

	t67 = ((x289&(x290+x291))==x292);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x293 = 51561503088LL;
	int16_t x294 = INT16_MAX;
	volatile int64_t x295 = INT64_MIN;

	t68 = ((x293&(x294+x295))==x296);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x297 = INT32_MIN;
	uint64_t x299 = 0LLU;
	static uint64_t x300 = UINT64_MAX;

	t69 = ((x297&(x298+x299))==x300);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x301 = -45LL;
	int32_t x303 = 98;

	t70 = ((x301&(x302+x303))==x304);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x305 = INT8_MIN;
	int8_t x306 = -4;
	static int16_t x307 = 857;

	t71 = ((x305&(x306+x307))==x308);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x309 = -1;
	volatile uint8_t x310 = UINT8_MAX;
	int64_t x311 = -1LL;
	volatile int32_t t72 = 151;

	t72 = ((x309&(x310+x311))==x312);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x313 = INT8_MAX;
	int8_t x314 = 2;
	volatile int8_t x315 = INT8_MIN;
	volatile int32_t t73 = -7876601;

	t73 = ((x313&(x314+x315))==x316);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x318 = -8447;
	static volatile uint32_t x319 = 0U;
	volatile int16_t x320 = 6072;
	volatile int32_t t74 = -81491990;

	t74 = ((x317&(x318+x319))==x320);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x321 = -1LL;
	int32_t x322 = -3;
	int16_t x323 = INT16_MIN;
	volatile int64_t x324 = INT64_MIN;
	static volatile int32_t t75 = -544955;

	t75 = ((x321&(x322+x323))==x324);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x325 = 1;
	volatile uint16_t x326 = UINT16_MAX;
	int32_t t76 = -333;

	t76 = ((x325&(x326+x327))==x328);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x338 = -113950942LL;
	volatile int64_t x339 = -1LL;
	uint8_t x340 = 19U;
	int32_t t77 = 39413825;

	t77 = ((x337&(x338+x339))==x340);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x341 = 1672364;
	volatile uint32_t x342 = 52U;
	volatile uint16_t x343 = UINT16_MAX;
	int8_t x344 = INT8_MIN;
	volatile int32_t t78 = 65236810;

	t78 = ((x341&(x342+x343))==x344);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x345 = -1;
	int8_t x346 = 2;
	static volatile int8_t x348 = INT8_MAX;

	t79 = ((x345&(x346+x347))==x348);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x349 = UINT8_MAX;
	volatile uint32_t x350 = 813295848U;
	volatile uint8_t x351 = 7U;
	volatile int32_t t80 = 2091110;

	t80 = ((x349&(x350+x351))==x352);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x353 = UINT8_MAX;
	uint32_t x355 = 0U;
	int16_t x356 = INT16_MIN;
	int32_t t81 = -3316;

	t81 = ((x353&(x354+x355))==x356);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x357 = 10;
	static volatile int64_t x358 = 248293791941LL;
	volatile uint32_t x359 = 1953270U;
	int16_t x360 = INT16_MIN;
	volatile int32_t t82 = -21133222;

	t82 = ((x357&(x358+x359))==x360);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x361 = 24858830995717LL;
	static int64_t x363 = 149982351594008561LL;
	volatile int16_t x364 = INT16_MIN;
	volatile int32_t t83 = -11892976;

	t83 = ((x361&(x362+x363))==x364);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x365 = INT32_MAX;
	static uint64_t x367 = UINT64_MAX;
	volatile int32_t t84 = 2244;

	t84 = ((x365&(x366+x367))==x368);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x369 = 2U;
	uint8_t x370 = UINT8_MAX;
	int16_t x371 = 122;
	static uint8_t x372 = 18U;

	t85 = ((x369&(x370+x371))==x372);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x373 = -5;
	uint64_t x376 = UINT64_MAX;
	int32_t t86 = 896;

	t86 = ((x373&(x374+x375))==x376);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x377 = INT16_MAX;
	int64_t x378 = 8505LL;
	int16_t x379 = INT16_MIN;
	uint16_t x380 = 1U;
	int32_t t87 = 1339488;

	t87 = ((x377&(x378+x379))==x380);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x381 = -9;
	uint64_t x382 = UINT64_MAX;
	int8_t x383 = INT8_MIN;
	static volatile int8_t x384 = -7;

	t88 = ((x381&(x382+x383))==x384);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x385 = -1;
	volatile int8_t x386 = INT8_MIN;
	uint16_t x387 = 441U;
	int64_t x388 = 102871960777989LL;

	t89 = ((x385&(x386+x387))==x388);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x389 = UINT8_MAX;
	uint32_t x390 = 159U;
	uint32_t x392 = 45U;
	int32_t t90 = 221265914;

	t90 = ((x389&(x390+x391))==x392);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x393 = 56245LLU;
	static uint8_t x395 = 0U;

	t91 = ((x393&(x394+x395))==x396);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x398 = 7;
	static uint32_t x400 = 56U;
	static volatile int32_t t92 = 229056669;

	t92 = ((x397&(x398+x399))==x400);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x401 = -2;
	int16_t x402 = -1587;
	int32_t x403 = -1035549;
	volatile int16_t x404 = INT16_MIN;
	int32_t t93 = -15524;

	t93 = ((x401&(x402+x403))==x404);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x405 = 151U;
	int8_t x406 = INT8_MIN;
	static uint32_t x407 = 374193625U;
	static volatile int64_t x408 = INT64_MIN;
	int32_t t94 = -21649;

	t94 = ((x405&(x406+x407))==x408);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x413 = INT16_MIN;
	static int64_t x414 = INT64_MIN;
	volatile int32_t x415 = 1;
	uint64_t x416 = 6345343020086520LLU;
	volatile int32_t t95 = -9967232;

	t95 = ((x413&(x414+x415))==x416);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x417 = INT32_MAX;
	int8_t x418 = -1;
	uint64_t x419 = 8316601223051678LLU;
	int8_t x420 = 8;
	int32_t t96 = -5124002;

	t96 = ((x417&(x418+x419))==x420);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x425 = UINT16_MAX;
	static uint8_t x426 = 18U;
	int8_t x428 = INT8_MIN;
	int32_t t97 = -20342327;

	t97 = ((x425&(x426+x427))==x428);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x429 = INT8_MIN;
	static volatile int32_t x430 = -70;
	uint16_t x431 = 11U;
	static int32_t t98 = 2968051;

	t98 = ((x429&(x430+x431))==x432);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x437 = -58965011361LL;
	static volatile int64_t x438 = INT64_MIN;
	volatile int32_t x439 = 242255950;

	t99 = ((x437&(x438+x439))==x440);

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

