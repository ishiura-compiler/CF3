#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t0 = 5780;
int32_t x8 = INT32_MIN;
volatile int8_t x12 = INT8_MAX;
volatile int32_t t2 = -3177;
int64_t x14 = INT64_MAX;
static int32_t t3 = 22;
int16_t x22 = 13061;
static int8_t x23 = INT8_MIN;
volatile int32_t t6 = -1302;
int8_t x37 = -7;
volatile int32_t t9 = 78658;
volatile int8_t x41 = -1;
int8_t x45 = INT8_MAX;
static uint32_t x47 = 33815U;
volatile int32_t t11 = 5454;
volatile uint64_t x57 = 3305213567064329680LLU;
int8_t x61 = 1;
static int16_t x65 = INT16_MIN;
static int32_t x67 = -1731423;
int16_t x68 = INT16_MIN;
volatile int8_t x72 = 44;
int32_t t19 = -360741887;
static int8_t x81 = -1;
int16_t x85 = INT16_MAX;
volatile int16_t x88 = INT16_MIN;
volatile int32_t t21 = 89;
static uint8_t x89 = 29U;
int8_t x91 = INT8_MAX;
int8_t x92 = INT8_MIN;
int64_t x93 = -19LL;
uint64_t x96 = 165733912309815LLU;
static uint16_t x99 = 3885U;
volatile int8_t x103 = -1;
uint64_t x109 = 15852LLU;
volatile uint64_t x111 = 11337834818611LLU;
int16_t x117 = 14761;
uint64_t t29 = 572LLU;
int64_t x131 = -1782261844326LL;
volatile int32_t x150 = INT32_MIN;
volatile int32_t x151 = INT32_MAX;
uint32_t x160 = 140829371U;
volatile uint8_t x162 = 125U;
int8_t x163 = INT8_MIN;
int32_t x167 = INT32_MIN;
uint64_t t42 = 1229582073LLU;
uint64_t x175 = 11744577651LLU;
int16_t x181 = INT16_MIN;
int32_t t45 = 15092526;
int64_t x187 = INT64_MIN;
uint16_t x188 = 25U;
int32_t t46 = -3;
int16_t x190 = 92;
static int16_t x194 = INT16_MAX;
static int16_t x197 = -16;
volatile int32_t x199 = 15831;
volatile int32_t x204 = INT32_MIN;
volatile int16_t x209 = -10349;
volatile uint64_t x211 = 91023979LLU;
int8_t x213 = -8;
volatile int32_t t53 = -2465;
volatile int64_t x217 = -48701788LL;
static int32_t x219 = 163462;
uint8_t x224 = 1U;
int16_t x226 = -1;
static uint64_t x231 = UINT64_MAX;
static int16_t x233 = 3866;
volatile int64_t x235 = -1LL;
static volatile uint8_t x240 = 69U;
volatile uint8_t x248 = 3U;
int32_t x253 = INT32_MAX;
static volatile int64_t x263 = -38570019426697LL;
volatile int32_t t66 = -234020871;
uint8_t x270 = UINT8_MAX;
static int8_t x271 = INT8_MIN;
static int64_t x272 = -1LL;
int16_t x275 = INT16_MIN;
volatile int32_t t69 = -54468;
int8_t x282 = INT8_MIN;
int32_t x285 = -1;
int64_t x290 = INT64_MIN;
static int64_t x299 = INT64_MIN;
int64_t x304 = INT64_MIN;
volatile uint32_t x306 = 47100512U;
uint64_t x308 = 4364849186704999985LLU;
static int32_t t77 = -149;
int64_t x314 = -1LL;
static int16_t x318 = -1;
int32_t x319 = INT32_MIN;
int64_t x332 = INT64_MIN;
int64_t t83 = 233865LL;
int8_t x345 = INT8_MIN;
volatile int64_t x347 = 26843LL;
static volatile uint16_t x349 = 767U;
int64_t x353 = INT64_MAX;
int64_t x354 = -1LL;
int8_t x359 = INT8_MIN;
static volatile uint64_t t89 = 1331559980545896LLU;
static int32_t t90 = 7236871;
volatile int16_t x371 = -1;
int64_t t93 = -628LL;
int32_t t95 = -30910;
int8_t x390 = INT8_MIN;
static int16_t x397 = INT16_MAX;
static int8_t x399 = INT8_MIN;


void f0(void) {
	int64_t x1 = -541658255099LL;
	uint64_t x2 = 257874914LLU;
	volatile int16_t x3 = INT16_MIN;
	int32_t x4 = INT32_MIN;

	t0 = (((x1&x2)==x3)&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	int8_t x6 = 16;
	static int32_t x7 = -1;
	int32_t t1 = 11640;

	t1 = (((x5&x6)==x7)&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	uint16_t x10 = UINT16_MAX;
	static int64_t x11 = -1LL;

	t2 = (((x9&x10)==x11)&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	uint32_t x15 = 10271311U;
	static uint16_t x16 = 106U;

	t3 = (((x13&x14)==x15)&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 0;
	static int8_t x18 = -1;
	int32_t x19 = INT32_MAX;
	int8_t x20 = 1;
	int32_t t4 = 26592;

	t4 = (((x17&x18)==x19)&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	volatile int8_t x24 = INT8_MIN;
	int32_t t5 = -94666;

	t5 = (((x21&x22)==x23)&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint8_t x25 = 15U;
	static uint32_t x26 = UINT32_MAX;
	uint32_t x27 = 86U;
	int8_t x28 = INT8_MAX;

	t6 = (((x25&x26)==x27)&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = 26;
	int8_t x30 = INT8_MIN;
	static int64_t x31 = INT64_MAX;
	int8_t x32 = INT8_MAX;
	volatile int32_t t7 = -3485223;

	t7 = (((x29&x30)==x31)&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 7707436;
	uint8_t x34 = UINT8_MAX;
	uint8_t x35 = 27U;
	int8_t x36 = -1;
	int32_t t8 = -1;

	t8 = (((x33&x34)==x35)&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x38 = 125462027;
	int8_t x39 = INT8_MAX;
	static uint16_t x40 = 373U;

	t9 = (((x37&x38)==x39)&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x42 = UINT8_MAX;
	volatile int32_t x43 = INT32_MIN;
	volatile int32_t x44 = 50;
	volatile int32_t t10 = 20175;

	t10 = (((x41&x42)==x43)&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x46 = 0;
	int32_t x48 = INT32_MIN;

	t11 = (((x45&x46)==x47)&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x49 = 129020654U;
	int16_t x50 = INT16_MIN;
	int8_t x51 = -19;
	int64_t x52 = INT64_MAX;
	static int64_t t12 = -258625663970LL;

	t12 = (((x49&x50)==x51)&x52);

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 3;
	uint64_t x54 = 222213127992LLU;
	volatile uint64_t x55 = UINT64_MAX;
	int64_t x56 = 2637LL;
	int64_t t13 = -15LL;

	t13 = (((x53&x54)==x55)&x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x58 = 3805315833904924370LLU;
	int8_t x59 = INT8_MIN;
	int64_t x60 = -497LL;
	int64_t t14 = 1725870264228LL;

	t14 = (((x57&x58)==x59)&x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = 1;
	static int32_t x63 = INT32_MIN;
	int64_t x64 = -1212342417697804LL;
	static volatile int64_t t15 = 62006121950LL;

	t15 = (((x61&x62)==x63)&x64);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = -63;
	int32_t t16 = -9781;

	t16 = (((x65&x66)==x67)&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MAX;
	volatile int8_t x70 = 8;
	uint8_t x71 = 37U;
	volatile int32_t t17 = 6;

	t17 = (((x69&x70)==x71)&x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x73 = UINT8_MAX;
	static volatile int64_t x74 = -11052642806LL;
	int8_t x75 = INT8_MIN;
	static int32_t x76 = INT32_MAX;
	volatile int32_t t18 = 834841561;

	t18 = (((x73&x74)==x75)&x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MIN;
	int64_t x78 = INT64_MAX;
	volatile uint32_t x79 = 754144836U;
	uint16_t x80 = UINT16_MAX;

	t19 = (((x77&x78)==x79)&x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x82 = UINT64_MAX;
	int32_t x83 = INT32_MIN;
	static int32_t x84 = 366633567;
	volatile int32_t t20 = -14618942;

	t20 = (((x81&x82)==x83)&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x86 = INT32_MIN;
	static uint64_t x87 = 3492093368LLU;

	t21 = (((x85&x86)==x87)&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x90 = INT32_MAX;
	int32_t t22 = 25;

	t22 = (((x89&x90)==x91)&x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x94 = INT32_MAX;
	uint32_t x95 = 8156697U;
	static volatile uint64_t t23 = 1LLU;

	t23 = (((x93&x94)==x95)&x96);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x97 = UINT8_MAX;
	static int8_t x98 = INT8_MAX;
	static int64_t x100 = INT64_MAX;
	int64_t t24 = 3249161462LL;

	t24 = (((x97&x98)==x99)&x100);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MIN;
	static volatile int64_t x102 = -725446LL;
	int8_t x104 = 3;
	static volatile int32_t t25 = -33;

	t25 = (((x101&x102)==x103)&x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -1LL;
	int8_t x106 = 8;
	volatile uint8_t x107 = UINT8_MAX;
	uint16_t x108 = 1U;
	int32_t t26 = 3;

	t26 = (((x105&x106)==x107)&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int8_t x110 = 1;
	volatile uint8_t x112 = 3U;
	int32_t t27 = 85;

	t27 = (((x109&x110)==x111)&x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x113 = 1U;
	volatile uint8_t x114 = 65U;
	int16_t x115 = INT16_MIN;
	int16_t x116 = -1;
	int32_t t28 = -2366;

	t28 = (((x113&x114)==x115)&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x118 = -35;
	int8_t x119 = -1;
	static uint64_t x120 = UINT64_MAX;

	t29 = (((x117&x118)==x119)&x120);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -27;
	int32_t x122 = -1;
	static uint16_t x123 = UINT16_MAX;
	uint32_t x124 = UINT32_MAX;
	volatile uint32_t t30 = 99586U;

	t30 = (((x121&x122)==x123)&x124);

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x125 = 1487U;
	volatile int64_t x126 = -7LL;
	uint32_t x127 = 47457U;
	static int16_t x128 = INT16_MIN;
	int32_t t31 = -121109959;

	t31 = (((x125&x126)==x127)&x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -1067769569;
	int8_t x130 = INT8_MIN;
	int16_t x132 = -1;
	volatile int32_t t32 = 941346;

	t32 = (((x129&x130)==x131)&x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	static int16_t x134 = INT16_MIN;
	int32_t x135 = -1;
	int16_t x136 = INT16_MAX;
	static volatile int32_t t33 = 0;

	t33 = (((x133&x134)==x135)&x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	volatile int16_t x138 = 27;
	static int8_t x139 = INT8_MAX;
	volatile int64_t x140 = -1LL;
	static int64_t t34 = -43704913270487628LL;

	t34 = (((x137&x138)==x139)&x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 9573U;
	uint32_t x142 = 3566992U;
	uint16_t x143 = 2133U;
	volatile int32_t x144 = -1;
	int32_t t35 = -18;

	t35 = (((x141&x142)==x143)&x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x145 = 3070082301947516LLU;
	int32_t x146 = -29;
	static uint8_t x147 = 42U;
	uint64_t x148 = UINT64_MAX;
	volatile uint64_t t36 = 15840638162284857LLU;

	t36 = (((x145&x146)==x147)&x148);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x149 = UINT8_MAX;
	uint16_t x152 = 4U;
	volatile int32_t t37 = 27625;

	t37 = (((x149&x150)==x151)&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 22748340115416925LLU;
	volatile int16_t x154 = INT16_MIN;
	static int64_t x155 = -1431076683333LL;
	uint32_t x156 = 95672U;
	static uint32_t t38 = 5725211U;

	t38 = (((x153&x154)==x155)&x156);

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = 2;
	int16_t x158 = INT16_MAX;
	static int16_t x159 = INT16_MAX;
	uint32_t t39 = 2U;

	t39 = (((x157&x158)==x159)&x160);

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	int32_t x164 = -1;
	int32_t t40 = -21395512;

	t40 = (((x161&x162)==x163)&x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MAX;
	int16_t x166 = -672;
	static volatile uint64_t x168 = 789655406LLU;
	volatile uint64_t t41 = 1649765348LLU;

	t41 = (((x165&x166)==x167)&x168);

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 12374232U;
	int16_t x170 = INT16_MIN;
	uint8_t x171 = 4U;
	uint64_t x172 = 44615094LLU;

	t42 = (((x169&x170)==x171)&x172);

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = 2;
	int32_t x174 = 15;
	uint16_t x176 = 4538U;
	static int32_t t43 = -7;

	t43 = (((x173&x174)==x175)&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	int64_t x178 = INT64_MIN;
	static int16_t x179 = INT16_MIN;
	uint16_t x180 = UINT16_MAX;
	volatile int32_t t44 = 69143972;

	t44 = (((x177&x178)==x179)&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x182 = INT32_MAX;
	int64_t x183 = INT64_MIN;
	volatile int16_t x184 = INT16_MAX;

	t45 = (((x181&x182)==x183)&x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = 1074022083178637LL;
	int64_t x186 = INT64_MAX;

	t46 = (((x185&x186)==x187)&x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = UINT16_MAX;
	uint32_t x191 = 929U;
	int16_t x192 = INT16_MIN;
	static volatile int32_t t47 = 78340;

	t47 = (((x189&x190)==x191)&x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 8U;
	int8_t x195 = INT8_MAX;
	volatile int32_t x196 = 26130624;
	volatile int32_t t48 = -2;

	t48 = (((x193&x194)==x195)&x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x198 = 1389799724705205168LLU;
	int16_t x200 = INT16_MAX;
	static int32_t t49 = 3;

	t49 = (((x197&x198)==x199)&x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = 3023644LL;
	static int8_t x202 = -1;
	int32_t x203 = -1;
	int32_t t50 = 121776195;

	t50 = (((x201&x202)==x203)&x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = INT32_MIN;
	int32_t x206 = INT32_MIN;
	uint8_t x207 = 85U;
	int32_t x208 = -1;
	int32_t t51 = 1980;

	t51 = (((x205&x206)==x207)&x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x210 = 62855060881247LL;
	uint8_t x212 = UINT8_MAX;
	volatile int32_t t52 = -26193955;

	t52 = (((x209&x210)==x211)&x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x214 = -1;
	int16_t x215 = INT16_MIN;
	static int16_t x216 = INT16_MIN;

	t53 = (((x213&x214)==x215)&x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x218 = INT64_MAX;
	uint8_t x220 = 114U;
	int32_t t54 = -835992;

	t54 = (((x217&x218)==x219)&x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = 1;
	static int16_t x222 = INT16_MIN;
	int8_t x223 = INT8_MIN;
	volatile int32_t t55 = -51056;

	t55 = (((x221&x222)==x223)&x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MAX;
	int32_t x227 = INT32_MAX;
	int64_t x228 = 88587LL;
	volatile int64_t t56 = 422367LL;

	t56 = (((x225&x226)==x227)&x228);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 749158649395LLU;
	static int8_t x230 = INT8_MIN;
	volatile uint64_t x232 = 1612035LLU;
	static uint64_t t57 = 5615881924858032241LLU;

	t57 = (((x229&x230)==x231)&x232);

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x234 = 0U;
	volatile int32_t x236 = -1;
	int32_t t58 = 589;

	t58 = (((x233&x234)==x235)&x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = 7;
	volatile uint32_t x238 = 556183532U;
	int32_t x239 = INT32_MIN;
	int32_t t59 = 3;

	t59 = (((x237&x238)==x239)&x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = INT64_MIN;
	volatile int64_t x242 = INT64_MIN;
	uint64_t x243 = 2795112624489622142LLU;
	int64_t x244 = INT64_MAX;
	volatile int64_t t60 = -2071590LL;

	t60 = (((x241&x242)==x243)&x244);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = UINT32_MAX;
	int8_t x246 = -1;
	int8_t x247 = INT8_MIN;
	int32_t t61 = -1;

	t61 = (((x245&x246)==x247)&x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = -1;
	static int16_t x250 = -1;
	uint16_t x251 = 103U;
	uint32_t x252 = 364U;
	volatile uint32_t t62 = 29U;

	t62 = (((x249&x250)==x251)&x252);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x254 = UINT8_MAX;
	volatile uint8_t x255 = 83U;
	volatile int32_t x256 = INT32_MIN;
	int32_t t63 = 7287;

	t63 = (((x253&x254)==x255)&x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = -1;
	int64_t x258 = -1LL;
	int8_t x259 = INT8_MIN;
	volatile int32_t x260 = INT32_MIN;
	volatile int32_t t64 = -332;

	t64 = (((x257&x258)==x259)&x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x261 = 17628863U;
	int8_t x262 = INT8_MAX;
	int16_t x264 = INT16_MIN;
	volatile int32_t t65 = -1041864;

	t65 = (((x261&x262)==x263)&x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x265 = 359744760LLU;
	volatile int64_t x266 = -1520841743168271029LL;
	int16_t x267 = INT16_MIN;
	static int16_t x268 = INT16_MIN;

	t66 = (((x265&x266)==x267)&x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = UINT32_MAX;
	volatile int64_t t67 = -2097109711609899LL;

	t67 = (((x269&x270)==x271)&x272);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 42U;
	uint64_t x274 = UINT64_MAX;
	volatile int32_t x276 = INT32_MIN;
	volatile int32_t t68 = 161576;

	t68 = (((x273&x274)==x275)&x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -1;
	int32_t x278 = INT32_MIN;
	volatile int8_t x279 = INT8_MIN;
	static int32_t x280 = INT32_MAX;

	t69 = (((x277&x278)==x279)&x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = 231LL;
	int32_t x283 = -161837;
	uint64_t x284 = 2229394786746674939LLU;
	volatile uint64_t t70 = 50013LLU;

	t70 = (((x281&x282)==x283)&x284);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x286 = INT8_MIN;
	int32_t x287 = 1;
	volatile int16_t x288 = INT16_MAX;
	int32_t t71 = 23456;

	t71 = (((x285&x286)==x287)&x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x289 = 4811U;
	static int16_t x291 = INT16_MIN;
	static volatile int64_t x292 = 28LL;
	int64_t t72 = -216927847591639730LL;

	t72 = (((x289&x290)==x291)&x292);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = INT16_MAX;
	static uint8_t x294 = 1U;
	volatile int32_t x295 = -1;
	int16_t x296 = 13236;
	int32_t t73 = 19;

	t73 = (((x293&x294)==x295)&x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 60U;
	volatile uint16_t x298 = 804U;
	uint64_t x300 = 2061647536LLU;
	uint64_t t74 = 16503324747LLU;

	t74 = (((x297&x298)==x299)&x300);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x301 = INT16_MIN;
	int8_t x302 = 0;
	uint16_t x303 = 12U;
	volatile int64_t t75 = 1069412981752LL;

	t75 = (((x301&x302)==x303)&x304);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = -4357;
	int32_t x307 = -1;
	static uint64_t t76 = 14LLU;

	t76 = (((x305&x306)==x307)&x308);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = INT32_MIN;
	int32_t x310 = -1;
	int8_t x311 = -1;
	int16_t x312 = -9546;

	t77 = (((x309&x310)==x311)&x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -970393095249LL;
	int16_t x315 = 14365;
	static volatile int8_t x316 = INT8_MIN;
	volatile int32_t t78 = -846032125;

	t78 = (((x313&x314)==x315)&x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 82U;
	uint64_t x320 = 1091LLU;
	volatile uint64_t t79 = 2040644LLU;

	t79 = (((x317&x318)==x319)&x320);

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x321 = 724LLU;
	int8_t x322 = INT8_MAX;
	int32_t x323 = INT32_MIN;
	int16_t x324 = INT16_MIN;
	static volatile int32_t t80 = -63302549;

	t80 = (((x321&x322)==x323)&x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = -1;
	uint64_t x326 = UINT64_MAX;
	int64_t x327 = INT64_MIN;
	static volatile uint32_t x328 = 2U;
	static volatile uint32_t t81 = 1U;

	t81 = (((x325&x326)==x327)&x328);

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MAX;
	volatile int8_t x330 = INT8_MIN;
	int64_t x331 = -1LL;
	int64_t t82 = -58992569255LL;

	t82 = (((x329&x330)==x331)&x332);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x333 = 16938464699650781LL;
	volatile uint16_t x334 = 203U;
	static uint8_t x335 = UINT8_MAX;
	int64_t x336 = -1LL;

	t83 = (((x333&x334)==x335)&x336);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = INT16_MIN;
	int16_t x338 = -431;
	volatile int64_t x339 = INT64_MAX;
	static int64_t x340 = INT64_MIN;
	int64_t t84 = -9139398245LL;

	t84 = (((x337&x338)==x339)&x340);

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int8_t x341 = -1;
	int8_t x342 = -1;
	uint8_t x343 = UINT8_MAX;
	int16_t x344 = INT16_MAX;
	int32_t t85 = 13970779;

	t85 = (((x341&x342)==x343)&x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x346 = INT16_MIN;
	int64_t x348 = INT64_MIN;
	static volatile int64_t t86 = 1974LL;

	t86 = (((x345&x346)==x347)&x348);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x350 = 1U;
	int64_t x351 = -1LL;
	static volatile int64_t x352 = -22601769LL;
	volatile int64_t t87 = -11LL;

	t87 = (((x349&x350)==x351)&x352);

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x355 = INT16_MIN;
	int16_t x356 = -87;
	volatile int32_t t88 = 41478;

	t88 = (((x353&x354)==x355)&x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 6U;
	uint32_t x358 = 7U;
	uint64_t x360 = 7141684074130209751LLU;

	t89 = (((x357&x358)==x359)&x360);

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x361 = 84311502U;
	uint16_t x362 = 4U;
	int16_t x363 = INT16_MAX;
	int16_t x364 = -1;

	t90 = (((x361&x362)==x363)&x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -83769939735782LL;
	static uint16_t x366 = 0U;
	int64_t x367 = INT64_MIN;
	volatile int64_t x368 = 5353113793790LL;
	volatile int64_t t91 = 91LL;

	t91 = (((x365&x366)==x367)&x368);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -496;
	static int16_t x370 = INT16_MIN;
	int64_t x372 = INT64_MIN;
	volatile int64_t t92 = -83900188865LL;

	t92 = (((x369&x370)==x371)&x372);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 164U;
	int16_t x374 = -7;
	int64_t x375 = INT64_MIN;
	volatile int64_t x376 = 113011LL;

	t93 = (((x373&x374)==x375)&x376);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x377 = UINT64_MAX;
	int32_t x378 = INT32_MAX;
	uint8_t x379 = 112U;
	uint64_t x380 = 3LLU;
	volatile uint64_t t94 = 15733LLU;

	t94 = (((x377&x378)==x379)&x380);

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = -1257;
	static int64_t x382 = -1LL;
	int8_t x383 = 1;
	int32_t x384 = INT32_MIN;

	t95 = (((x381&x382)==x383)&x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x385 = 868555575728246161LL;
	uint64_t x386 = 20495432LLU;
	int16_t x387 = INT16_MIN;
	volatile int8_t x388 = INT8_MIN;
	volatile int32_t t96 = 14154;

	t96 = (((x385&x386)==x387)&x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x389 = 39333677LLU;
	uint8_t x391 = 86U;
	uint32_t x392 = UINT32_MAX;
	uint32_t t97 = 1152869587U;

	t97 = (((x389&x390)==x391)&x392);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 1953U;
	int32_t x394 = -1;
	int16_t x395 = -1;
	uint16_t x396 = UINT16_MAX;
	int32_t t98 = -11;

	t98 = (((x393&x394)==x395)&x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x398 = INT64_MIN;
	uint32_t x400 = UINT32_MAX;
	uint32_t t99 = 7U;

	t99 = (((x397&x398)==x399)&x400);

	if (t99 != 0U) { NG(); } else { ; }
	
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

