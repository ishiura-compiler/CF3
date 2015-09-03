#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = -245;
static volatile int8_t x5 = -1;
int32_t x7 = INT32_MIN;
int16_t x10 = -1593;
static int16_t x14 = INT16_MAX;
int8_t x15 = INT8_MAX;
int16_t x20 = INT16_MIN;
static volatile int32_t t4 = -4643;
volatile int8_t x24 = INT8_MAX;
volatile uint32_t x30 = UINT32_MAX;
volatile int16_t x35 = 17;
int64_t x46 = INT64_MAX;
volatile int64_t x47 = INT64_MAX;
volatile uint16_t x48 = 7160U;
uint8_t x54 = UINT8_MAX;
static uint8_t x61 = UINT8_MAX;
int8_t x68 = INT8_MAX;
uint16_t x72 = UINT16_MAX;
static volatile int32_t x73 = INT32_MIN;
volatile int64_t t18 = 131143040953941LL;
volatile uint8_t x77 = 3U;
int16_t x80 = -1;
static int32_t t20 = -831;
int64_t x89 = 504628432254LL;
volatile int64_t t21 = -706830933914835LL;
uint8_t x94 = 14U;
int32_t x105 = INT32_MAX;
static int32_t x107 = -1;
static volatile int32_t x109 = -767130;
static int16_t x117 = 10;
int16_t x121 = INT16_MIN;
int16_t x123 = INT16_MIN;
uint16_t x126 = 1361U;
uint8_t x139 = UINT8_MAX;
volatile uint32_t t30 = 1U;
uint16_t x143 = 2U;
int32_t x148 = -1;
int32_t x154 = -1;
static uint16_t x155 = UINT16_MAX;
uint16_t x156 = UINT16_MAX;
int8_t x159 = INT8_MIN;
uint8_t x162 = UINT8_MAX;
int32_t x165 = -1;
uint32_t x170 = 13U;
static int8_t x171 = INT8_MIN;
uint64_t x172 = 2024473162887866LLU;
int8_t x175 = INT8_MIN;
uint32_t x176 = 36708891U;
int32_t x179 = -7;
volatile int16_t x182 = INT16_MIN;
int16_t x184 = -6365;
int16_t x186 = INT16_MIN;
volatile int16_t x193 = INT16_MIN;
static volatile int32_t t43 = -2935990;
volatile uint32_t x201 = 316678122U;
int64_t x205 = -1LL;
int8_t x206 = INT8_MAX;
static int8_t x209 = INT8_MAX;
volatile uint64_t t49 = 2105LLU;
uint8_t x253 = UINT8_MAX;
int8_t x254 = 2;
static int64_t x259 = INT64_MIN;
volatile uint64_t t56 = 8027703164999638884LLU;
int8_t x265 = -1;
int8_t x267 = INT8_MAX;
volatile int16_t x277 = 2;
int8_t x279 = -1;
static uint64_t t59 = 3LLU;
uint64_t t60 = 176914LLU;
int32_t x288 = -1;
int8_t x290 = -1;
static int16_t x294 = INT16_MIN;
volatile uint64_t t64 = 997449LLU;
int64_t t65 = 1903929LL;
int64_t x306 = 2844449700018LL;
int64_t t67 = 1764LL;
uint8_t x317 = UINT8_MAX;
int32_t x319 = INT32_MIN;
int32_t t68 = -8855439;
int32_t x326 = INT32_MAX;
static uint32_t x329 = UINT32_MAX;
int8_t x330 = 2;
int32_t x333 = INT32_MAX;
int32_t x349 = -244;
int16_t x352 = INT16_MIN;
static int16_t x353 = INT16_MAX;
uint32_t x367 = UINT32_MAX;
int16_t x373 = INT16_MIN;
static int8_t x396 = INT8_MIN;
int8_t x403 = INT8_MIN;
int16_t x406 = -1;
volatile int8_t x408 = -1;
static int16_t x410 = -16113;
static uint64_t x417 = UINT64_MAX;
int16_t x419 = INT16_MAX;
static int64_t x420 = -1LL;
static uint16_t x424 = UINT16_MAX;
int16_t x425 = -55;
static int16_t x426 = INT16_MIN;
static int64_t x430 = INT64_MIN;
static uint64_t t92 = 146307LLU;
volatile int32_t x439 = INT32_MAX;
static uint64_t t93 = 203147891LLU;
int64_t t95 = -115702513502108640LL;
static uint16_t x453 = 25415U;
static uint16_t x455 = 199U;
int32_t x456 = INT32_MIN;
static int32_t t96 = INT32_MIN;
volatile int32_t x466 = -1;
uint16_t x468 = UINT16_MAX;
static volatile int32_t t99 = 721565;


void f0(void) {
	volatile int16_t x1 = -39;
	static uint32_t x2 = UINT32_MAX;
	volatile int64_t x4 = INT64_MIN;
	int64_t t0 = 685121417LL;

	t0 = (((x1+x2)%x3)&x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x6 = -8354276;
	int8_t x8 = -1;
	static int32_t t1 = 840947237;

	t1 = (((x5+x6)%x7)&x8);

	if (t1 != -8354277) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	static volatile uint16_t x11 = UINT16_MAX;
	uint16_t x12 = 6U;
	volatile int32_t t2 = -13091063;

	t2 = (((x9+x10)%x11)&x12);

	if (t2 != 6) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = 14;
	static volatile uint64_t x16 = UINT64_MAX;
	uint64_t t3 = 1409887278482LLU;

	t3 = (((x13+x14)%x15)&x16);

	if (t3 != 15LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 1;
	int16_t x18 = INT16_MAX;
	uint8_t x19 = UINT8_MAX;

	t4 = (((x17+x18)%x19)&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -96181465035414386LL;
	static volatile int16_t x22 = 2;
	int64_t x23 = INT64_MAX;
	int64_t t5 = 1766578241LL;

	t5 = (((x21+x22)%x23)&x24);

	if (t5 != 16LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 3700LLU;
	int32_t x26 = INT32_MIN;
	static uint32_t x27 = 390U;
	uint32_t x28 = 204033250U;
	volatile uint64_t t6 = 242013LLU;

	t6 = (((x25+x26)%x27)&x28);

	if (t6 != 66LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 119U;
	static int16_t x31 = 40;
	int8_t x32 = 30;
	uint32_t t7 = 4245U;

	t7 = (((x29+x30)%x31)&x32);

	if (t7 != 6U) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = -1;
	uint16_t x34 = UINT16_MAX;
	volatile int16_t x36 = INT16_MAX;
	volatile int32_t t8 = -3937095;

	t8 = (((x33+x34)%x35)&x36);

	if (t8 != 16) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	int32_t x38 = INT32_MAX;
	static int8_t x39 = INT8_MIN;
	volatile uint16_t x40 = 112U;
	volatile uint64_t t9 = 14250956665419LLU;

	t9 = (((x37+x38)%x39)&x40);

	if (t9 != 112LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	uint64_t x42 = 477287LLU;
	volatile int8_t x43 = -1;
	static int16_t x44 = -1;
	volatile uint64_t t10 = 504567LLU;

	t10 = (((x41+x42)%x43)&x44);

	if (t10 != 444519LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	volatile int64_t t11 = -184298015184171426LL;

	t11 = (((x45+x46)%x47)&x48);

	if (t11 != 7160LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 184775868448900857LLU;
	uint32_t x50 = UINT32_MAX;
	static int64_t x51 = INT64_MAX;
	static int32_t x52 = -505;
	volatile uint64_t t12 = 128238878345551LLU;

	t12 = (((x49+x50)%x51)&x52);

	if (t12 != 184775872743867904LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 45U;
	static volatile int64_t x55 = -1LL;
	int16_t x56 = 14118;
	int64_t t13 = 616889954LL;

	t13 = (((x53+x54)%x55)&x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = 1;
	int8_t x58 = INT8_MIN;
	static int32_t x59 = INT32_MAX;
	static int16_t x60 = INT16_MAX;
	static int32_t t14 = 109229001;

	t14 = (((x57+x58)%x59)&x60);

	if (t14 != 32641) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x62 = 1U;
	int32_t x63 = INT32_MAX;
	uint16_t x64 = 3U;
	volatile int32_t t15 = 66194;

	t15 = (((x61+x62)%x63)&x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 3U;
	static int8_t x66 = INT8_MAX;
	uint16_t x67 = 5598U;
	static int32_t t16 = 12678;

	t16 = (((x65+x66)%x67)&x68);

	if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = 119945U;
	volatile uint8_t x70 = 1U;
	int64_t x71 = 199028072LL;
	int64_t t17 = 26424428716LL;

	t17 = (((x69+x70)%x71)&x72);

	if (t17 != 54410LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x74 = 0;
	uint32_t x75 = 44998U;
	volatile int64_t x76 = INT64_MIN;

	t18 = (((x73+x74)%x75)&x76);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x78 = INT64_MIN;
	int32_t x79 = -96868545;
	volatile int64_t t19 = -272LL;

	t19 = (((x77+x78)%x79)&x80);

	if (t19 != -26248025LL) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	int32_t x82 = 38137;
	volatile int8_t x83 = INT8_MAX;
	uint16_t x84 = 163U;

	t20 = (((x81+x82)%x83)&x84);

	if (t20 != 32) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x90 = 31U;
	static uint16_t x91 = 20U;
	volatile uint32_t x92 = UINT32_MAX;

	t21 = (((x89+x90)%x91)&x92);

	if (t21 != 5LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x93 = 47U;
	volatile uint32_t x95 = 23018U;
	volatile int8_t x96 = 7;
	static volatile uint32_t t22 = 21U;

	t22 = (((x93+x94)%x95)&x96);

	if (t22 != 5U) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x97 = 9U;
	volatile uint16_t x98 = 12U;
	uint32_t x99 = UINT32_MAX;
	volatile uint32_t x100 = UINT32_MAX;
	uint32_t t23 = 174035U;

	t23 = (((x97+x98)%x99)&x100);

	if (t23 != 21U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x106 = INT64_MIN;
	int16_t x108 = INT16_MIN;
	static int64_t t24 = 197199435432134LL;

	t24 = (((x105+x106)%x107)&x108);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x110 = UINT8_MAX;
	int64_t x111 = INT64_MAX;
	volatile int32_t x112 = -1;
	static volatile int64_t t25 = -93406679LL;

	t25 = (((x109+x110)%x111)&x112);

	if (t25 != -766875LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x113 = 2U;
	uint16_t x114 = 1U;
	int16_t x115 = -1;
	int8_t x116 = -1;
	static volatile int32_t t26 = -51747;

	t26 = (((x113+x114)%x115)&x116);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x118 = 219LLU;
	volatile uint32_t x119 = UINT32_MAX;
	uint16_t x120 = 7848U;
	uint64_t t27 = 0LLU;

	t27 = (((x117+x118)%x119)&x120);

	if (t27 != 160LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x122 = -1;
	volatile int8_t x124 = INT8_MIN;
	volatile int32_t t28 = 76958;

	t28 = (((x121+x122)%x123)&x124);

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x125 = INT32_MIN;
	int8_t x127 = 1;
	uint32_t x128 = UINT32_MAX;
	static volatile uint32_t t29 = 3986U;

	t29 = (((x125+x126)%x127)&x128);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = -1;
	volatile int8_t x138 = INT8_MIN;
	uint32_t x140 = 1000803808U;

	t30 = (((x137+x138)%x139)&x140);

	if (t30 != 1000803680U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = -36;
	uint8_t x142 = 0U;
	static int32_t x144 = INT32_MAX;
	int32_t t31 = 2552;

	t31 = (((x141+x142)%x143)&x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x145 = 1U;
	static int32_t x146 = -1;
	volatile int16_t x147 = -1;
	volatile int32_t t32 = 31199554;

	t32 = (((x145+x146)%x147)&x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x149 = 25U;
	static int8_t x150 = INT8_MIN;
	volatile int16_t x151 = INT16_MIN;
	uint64_t x152 = 257747685LLU;
	static uint64_t t33 = 55522442699185852LLU;

	t33 = (((x149+x150)%x151)&x152);

	if (t33 != 27265LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x153 = 1;
	volatile int32_t t34 = 191766261;

	t34 = (((x153+x154)%x155)&x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x157 = 495252218946LL;
	static int64_t x158 = INT64_MIN;
	int64_t x160 = -27078999953LL;
	int64_t t35 = 1326748618689LL;

	t35 = (((x157+x158)%x159)&x160);

	if (t35 != -27078999998LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x161 = -1;
	uint32_t x163 = 1628616U;
	static uint64_t x164 = 58192815LLU;
	uint64_t t36 = 15432003241371LLU;

	t36 = (((x161+x162)%x163)&x164);

	if (t36 != 174LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x166 = -1;
	int8_t x167 = -19;
	int64_t x168 = INT64_MIN;
	volatile int64_t t37 = INT64_MIN;

	t37 = (((x165+x166)%x167)&x168);

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x169 = INT32_MIN;
	volatile uint64_t t38 = 227LLU;

	t38 = (((x169+x170)%x171)&x172);

	if (t38 != 8LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x173 = 3U;
	int32_t x174 = INT32_MIN;
	volatile uint32_t t39 = 63U;

	t39 = (((x173+x174)%x175)&x176);

	if (t39 != 36708867U) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x177 = 300426056U;
	int16_t x178 = -10553;
	uint16_t x180 = 30572U;
	volatile uint32_t t40 = 677784298U;

	t40 = (((x177+x178)%x179)&x180);

	if (t40 != 29196U) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x181 = UINT64_MAX;
	static uint64_t x183 = 174520796LLU;
	static uint64_t t41 = 103225LLU;

	t41 = (((x181+x182)%x183)&x184);

	if (t41 != 118792963LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = INT8_MIN;
	volatile uint32_t x187 = UINT32_MAX;
	uint32_t x188 = 5U;
	uint32_t t42 = 18429U;

	t42 = (((x185+x186)%x187)&x188);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x194 = INT16_MIN;
	static volatile int8_t x195 = INT8_MIN;
	int8_t x196 = INT8_MIN;

	t43 = (((x193+x194)%x195)&x196);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x202 = UINT16_MAX;
	static int64_t x203 = 37250LL;
	static int8_t x204 = -1;
	volatile int64_t t44 = -1LL;

	t44 = (((x201+x202)%x203)&x204);

	if (t44 != 6907LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x207 = INT64_MAX;
	volatile uint16_t x208 = 5U;
	int64_t t45 = 2408LL;

	t45 = (((x205+x206)%x207)&x208);

	if (t45 != 4LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x210 = 397;
	int16_t x211 = -1;
	uint32_t x212 = 1560415067U;
	uint32_t t46 = 830234716U;

	t46 = (((x209+x210)%x211)&x212);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x213 = UINT32_MAX;
	int64_t x214 = -1LL;
	int64_t x215 = -1LL;
	uint16_t x216 = 1728U;
	int64_t t47 = 32LL;

	t47 = (((x213+x214)%x215)&x216);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x225 = INT32_MIN;
	int64_t x226 = 0LL;
	int32_t x227 = INT32_MIN;
	volatile uint16_t x228 = 3984U;
	int64_t t48 = -50967674LL;

	t48 = (((x225+x226)%x227)&x228);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x229 = INT16_MAX;
	int8_t x230 = -2;
	static uint32_t x231 = UINT32_MAX;
	uint64_t x232 = 367LLU;

	t49 = (((x229+x230)%x231)&x232);

	if (t49 != 365LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint32_t x233 = 123397U;
	int16_t x234 = -3;
	uint8_t x235 = 1U;
	int8_t x236 = INT8_MAX;
	volatile uint32_t t50 = 2130241U;

	t50 = (((x233+x234)%x235)&x236);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x237 = 0;
	static int32_t x238 = INT32_MIN;
	int64_t x239 = 762394334LL;
	uint16_t x240 = 7U;
	volatile int64_t t51 = 46474228649LL;

	t51 = (((x237+x238)%x239)&x240);

	if (t51 != 4LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x241 = INT16_MIN;
	int64_t x242 = -20LL;
	int64_t x243 = -10443319143LL;
	volatile int16_t x244 = INT16_MIN;
	volatile int64_t t52 = 382359643440627210LL;

	t52 = (((x241+x242)%x243)&x244);

	if (t52 != -65536LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x245 = UINT64_MAX;
	int16_t x246 = -19;
	volatile int64_t x247 = INT64_MIN;
	uint16_t x248 = UINT16_MAX;
	uint64_t t53 = 64929102LLU;

	t53 = (((x245+x246)%x247)&x248);

	if (t53 != 65516LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x249 = UINT64_MAX;
	static int8_t x250 = -1;
	uint16_t x251 = 141U;
	int32_t x252 = -6414656;
	uint64_t t54 = 5319977051272LLU;

	t54 = (((x249+x250)%x251)&x252);

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x255 = INT16_MIN;
	int16_t x256 = INT16_MAX;
	volatile int32_t t55 = 358320719;

	t55 = (((x253+x254)%x255)&x256);

	if (t55 != 257) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x257 = 3841670773LLU;
	uint16_t x258 = 1U;
	int32_t x260 = INT32_MAX;

	t56 = (((x257+x258)%x259)&x260);

	if (t56 != 1694187126LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x266 = 9U;
	uint32_t x268 = 1575U;
	static volatile uint32_t t57 = 2479130U;

	t57 = (((x265+x266)%x267)&x268);

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x269 = INT64_MIN;
	uint64_t x270 = 20900179548LLU;
	volatile int16_t x271 = 17;
	static uint32_t x272 = UINT32_MAX;
	volatile uint64_t t58 = 56265LLU;

	t58 = (((x269+x270)%x271)&x272);

	if (t58 != 15LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x278 = UINT64_MAX;
	uint32_t x280 = 65U;

	t59 = (((x277+x278)%x279)&x280);

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x281 = 199U;
	int16_t x282 = -1;
	volatile uint64_t x283 = 3653LLU;
	volatile uint32_t x284 = UINT32_MAX;

	t60 = (((x281+x282)%x283)&x284);

	if (t60 != 198LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x285 = 2U;
	uint16_t x286 = 3466U;
	int32_t x287 = INT32_MAX;
	static volatile int32_t t61 = 52765474;

	t61 = (((x285+x286)%x287)&x288);

	if (t61 != 3468) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x289 = 1U;
	volatile int32_t x291 = INT32_MAX;
	uint32_t x292 = 429197U;
	volatile uint32_t t62 = 0U;

	t62 = (((x289+x290)%x291)&x292);

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x293 = -1;
	int16_t x295 = INT16_MIN;
	static int32_t x296 = -1;
	static int32_t t63 = 295338292;

	t63 = (((x293+x294)%x295)&x296);

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x297 = UINT32_MAX;
	int16_t x298 = INT16_MAX;
	volatile uint64_t x299 = 16785029192LLU;
	int64_t x300 = 4028130288402510LL;

	t64 = (((x297+x298)%x299)&x300);

	if (t64 != 78LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x301 = -7084LL;
	int16_t x302 = INT16_MIN;
	uint8_t x303 = 119U;
	int8_t x304 = -1;

	t65 = (((x301+x302)%x303)&x304);

	if (t65 != -106LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint16_t x305 = 6U;
	int32_t x307 = INT32_MIN;
	static int8_t x308 = INT8_MAX;
	volatile int64_t t66 = 21035858300422LL;

	t66 = (((x305+x306)%x307)&x308);

	if (t66 != 56LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x313 = -2276508;
	volatile uint32_t x314 = UINT32_MAX;
	int64_t x315 = -117842040LL;
	int16_t x316 = INT16_MAX;

	t67 = (((x313+x314)%x315)&x316);

	if (t67 != 12931LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x318 = UINT16_MAX;
	static int16_t x320 = INT16_MIN;

	t68 = (((x317+x318)%x319)&x320);

	if (t68 != 65536) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x325 = 739445422866LLU;
	int32_t x327 = INT32_MIN;
	uint64_t x328 = 1497595640464LLU;
	volatile uint64_t t69 = 8128LLU;

	t69 = (((x325+x326)%x327)&x328);

	if (t69 != 54393944592LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x331 = 5275U;
	uint32_t x332 = 139U;
	volatile uint32_t t70 = 2U;

	t70 = (((x329+x330)%x331)&x332);

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x334 = INT16_MIN;
	volatile uint64_t x335 = 10353LLU;
	int32_t x336 = 47686;
	uint64_t t71 = 21614150640036LLU;

	t71 = (((x333+x334)%x335)&x336);

	if (t71 != 512LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x337 = -77;
	int32_t x338 = -4883;
	int64_t x339 = INT64_MIN;
	int64_t x340 = INT64_MAX;
	int64_t t72 = -731058LL;

	t72 = (((x337+x338)%x339)&x340);

	if (t72 != 9223372036854770848LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x350 = INT64_MAX;
	int16_t x351 = 1002;
	int64_t t73 = 3699LL;

	t73 = (((x349+x350)%x351)&x352);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x354 = INT16_MIN;
	int8_t x355 = -1;
	int32_t x356 = INT32_MAX;
	volatile int32_t t74 = -571721748;

	t74 = (((x353+x354)%x355)&x356);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x357 = INT8_MAX;
	uint32_t x358 = UINT32_MAX;
	uint64_t x359 = 14483578LLU;
	uint64_t x360 = UINT64_MAX;
	volatile uint64_t t75 = 294585726365LLU;

	t75 = (((x357+x358)%x359)&x360);

	if (t75 != 126LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x361 = 3438211;
	uint32_t x362 = UINT32_MAX;
	uint16_t x363 = 14649U;
	int64_t x364 = INT64_MIN;
	volatile int64_t t76 = 22634LL;

	t76 = (((x361+x362)%x363)&x364);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x365 = INT8_MIN;
	uint32_t x366 = UINT32_MAX;
	volatile uint32_t x368 = UINT32_MAX;
	uint32_t t77 = 118U;

	t77 = (((x365+x366)%x367)&x368);

	if (t77 != 4294967167U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x369 = -1;
	static int32_t x370 = -1;
	uint16_t x371 = 630U;
	int64_t x372 = -13438142539577438LL;
	volatile int64_t t78 = -9LL;

	t78 = (((x369+x370)%x371)&x372);

	if (t78 != -13438142539577438LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x374 = INT64_MAX;
	uint64_t x375 = UINT64_MAX;
	static volatile int8_t x376 = INT8_MIN;
	volatile uint64_t t79 = 50903572624850LLU;

	t79 = (((x373+x374)%x375)&x376);

	if (t79 != 9223372036854742912LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x381 = UINT64_MAX;
	int16_t x382 = 4255;
	static int32_t x383 = 132946983;
	int8_t x384 = -1;
	static uint64_t t80 = 21LLU;

	t80 = (((x381+x382)%x383)&x384);

	if (t80 != 4254LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x385 = INT8_MIN;
	static int32_t x386 = -1;
	static volatile int8_t x387 = INT8_MIN;
	static volatile int32_t x388 = 10803579;
	int32_t t81 = -3556;

	t81 = (((x385+x386)%x387)&x388);

	if (t81 != 10803579) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x389 = UINT16_MAX;
	static int8_t x390 = -1;
	int8_t x391 = INT8_MIN;
	uint8_t x392 = UINT8_MAX;
	volatile int32_t t82 = -124710;

	t82 = (((x389+x390)%x391)&x392);

	if (t82 != 126) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x393 = -1;
	int8_t x394 = 0;
	uint64_t x395 = 23500300043LLU;
	uint64_t t83 = 4089675587862603643LLU;

	t83 = (((x393+x394)%x395)&x396);

	if (t83 != 17613365760LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x401 = 30998U;
	int64_t x402 = INT64_MIN;
	int64_t x404 = -8811LL;
	volatile int64_t t84 = 6661560509623LL;

	t84 = (((x401+x402)%x403)&x404);

	if (t84 != -8812LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x405 = 72LLU;
	uint32_t x407 = 36635537U;
	volatile uint64_t t85 = 18522660440314397LLU;

	t85 = (((x405+x406)%x407)&x408);

	if (t85 != 71LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x409 = -10;
	int8_t x411 = INT8_MIN;
	static uint32_t x412 = 12755U;
	volatile uint32_t t86 = 7U;

	t86 = (((x409+x410)%x411)&x412);

	if (t86 != 12673U) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x413 = 29U;
	int32_t x414 = -1;
	int8_t x415 = -1;
	uint64_t x416 = UINT64_MAX;
	volatile uint64_t t87 = 58LLU;

	t87 = (((x413+x414)%x415)&x416);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x418 = -1LL;
	volatile uint64_t t88 = 756860685LLU;

	t88 = (((x417+x418)%x419)&x420);

	if (t88 != 14LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x421 = INT64_MAX;
	int32_t x422 = INT32_MIN;
	uint64_t x423 = 26579633036LLU;
	volatile uint64_t t89 = 4388093869996840281LLU;

	t89 = (((x421+x422)%x423)&x424);

	if (t89 != 867LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x427 = INT32_MAX;
	uint16_t x428 = UINT16_MAX;
	volatile int32_t t90 = -56747;

	t90 = (((x425+x426)%x427)&x428);

	if (t90 != 32713) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x429 = 0;
	uint8_t x431 = UINT8_MAX;
	static volatile int16_t x432 = INT16_MIN;
	int64_t t91 = -4006196364720763047LL;

	t91 = (((x429+x430)%x431)&x432);

	if (t91 != -32768LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x433 = 66398584779500LLU;
	int8_t x434 = INT8_MAX;
	static int8_t x435 = -6;
	int16_t x436 = 707;

	t92 = (((x433+x434)%x435)&x436);

	if (t92 != 579LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x437 = 12;
	uint8_t x438 = 47U;
	uint64_t x440 = UINT64_MAX;

	t93 = (((x437+x438)%x439)&x440);

	if (t93 != 59LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x445 = UINT16_MAX;
	volatile uint64_t x446 = UINT64_MAX;
	uint32_t x447 = 2115U;
	static uint16_t x448 = 11063U;
	volatile uint64_t t94 = 3352221069460LLU;

	t94 = (((x445+x446)%x447)&x448);

	if (t94 != 2084LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x449 = INT64_MIN;
	static int64_t x450 = INT64_MAX;
	volatile int64_t x451 = INT64_MIN;
	static int16_t x452 = -1;

	t95 = (((x449+x450)%x451)&x452);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x454 = INT32_MIN;

	t96 = (((x453+x454)%x455)&x456);

	if (t96 != INT32_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x457 = INT16_MIN;
	uint32_t x458 = 1009487894U;
	int8_t x459 = -30;
	int16_t x460 = 889;
	volatile uint32_t t97 = 458801U;

	t97 = (((x457+x458)%x459)&x460);

	if (t97 != 16U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x461 = UINT8_MAX;
	int16_t x462 = INT16_MAX;
	static uint8_t x463 = 14U;
	int64_t x464 = INT64_MIN;
	static int64_t t98 = 59079876617392LL;

	t98 = (((x461+x462)%x463)&x464);

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x465 = INT8_MIN;
	volatile int32_t x467 = -1642;

	t99 = (((x465+x466)%x467)&x468);

	if (t99 != 65407) { NG(); } else { ; }
	
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

