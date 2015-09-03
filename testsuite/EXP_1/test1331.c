#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = INT32_MAX;
static volatile int32_t t1 = 641089;
int64_t x9 = INT64_MIN;
volatile int32_t t2 = -876901;
volatile int64_t t3 = -137LL;
volatile int64_t x25 = -1LL;
int8_t x29 = INT8_MIN;
static uint8_t x30 = UINT8_MAX;
int32_t x36 = INT32_MIN;
int64_t x46 = INT64_MAX;
int8_t x53 = INT8_MAX;
uint64_t x56 = 148401942945LLU;
volatile int16_t x60 = INT16_MAX;
int8_t x62 = 10;
int32_t x65 = INT32_MIN;
volatile int32_t t15 = 9524;
static int16_t x70 = -3;
volatile int16_t x71 = INT16_MIN;
int32_t x73 = 7823;
int64_t t18 = 255687LL;
volatile uint8_t x89 = UINT8_MAX;
uint64_t x96 = UINT64_MAX;
int64_t x97 = 408356870698LL;
static uint64_t x105 = UINT64_MAX;
int8_t x106 = -13;
int32_t x107 = INT32_MIN;
static volatile int8_t x109 = 59;
uint64_t x110 = 4258073667LLU;
uint8_t x121 = 40U;
int8_t x123 = -1;
static int32_t x125 = -1;
uint16_t x138 = UINT16_MAX;
uint64_t x142 = 843780057164304LLU;
volatile int8_t x143 = INT8_MAX;
int32_t t33 = 249348;
volatile uint64_t x155 = 20LLU;
int64_t x165 = INT64_MIN;
static volatile int16_t x166 = INT16_MIN;
volatile uint32_t x170 = 50793U;
volatile uint32_t t39 = 6U;
volatile int32_t t40 = -11;
volatile int8_t x183 = INT8_MIN;
volatile int8_t x186 = -55;
uint8_t x187 = 2U;
uint64_t x188 = 8LLU;
volatile uint32_t x195 = 7437U;
volatile uint32_t t44 = 61U;
static int64_t x201 = 65LL;
uint64_t t46 = 81334411LLU;
uint8_t x205 = 83U;
uint8_t x206 = 1U;
static volatile int32_t x212 = INT32_MIN;
volatile int8_t x227 = INT8_MAX;
static volatile int8_t x230 = 53;
volatile int32_t t53 = -9553;
int8_t x236 = -1;
int32_t x238 = INT32_MAX;
int64_t x239 = -1LL;
volatile int32_t t56 = 383;
uint16_t x249 = 6173U;
uint16_t x251 = 13660U;
int16_t x252 = -70;
volatile int32_t t58 = 354016228;
static int8_t x256 = INT8_MIN;
uint64_t x261 = 36493337LLU;
int16_t x264 = INT16_MIN;
int8_t x267 = INT8_MAX;
volatile int16_t x270 = INT16_MIN;
uint16_t x271 = 27U;
int16_t x283 = INT16_MIN;
int32_t x284 = INT32_MIN;
static int32_t t67 = 406156;
int32_t x313 = INT32_MIN;
uint64_t x329 = UINT64_MAX;
int16_t x337 = -24;
volatile int16_t x346 = -114;
static int8_t x347 = INT8_MIN;
static int64_t x355 = INT64_MIN;
static int16_t x360 = INT16_MIN;
int64_t x366 = -1LL;
static volatile int64_t t84 = -24831022LL;
static uint64_t x373 = UINT64_MAX;
int64_t t87 = 116LL;
volatile uint64_t x387 = 36LLU;
uint32_t x393 = UINT32_MAX;
uint64_t x402 = UINT64_MAX;
int64_t x403 = -7LL;
static volatile int32_t x404 = -1;
uint8_t x407 = 125U;
uint64_t x415 = UINT64_MAX;
int8_t x431 = 43;
static volatile int32_t t98 = 3083284;
int8_t x435 = 0;


void f0(void) {
	static volatile int64_t x1 = INT64_MIN;
	uint64_t x2 = 1998459279104LLU;
	static int32_t x3 = INT32_MIN;
	static uint8_t x4 = UINT8_MAX;
	int32_t t0 = -1;

	t0 = (((x1==x2)|x3)%x4);

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -3274;
	int8_t x7 = INT8_MIN;
	volatile uint8_t x8 = UINT8_MAX;

	t1 = (((x5==x6)|x7)%x8);

	if (t1 != -128) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = INT8_MAX;
	uint16_t x11 = 16855U;
	int8_t x12 = 1;

	t2 = (((x9==x10)|x11)%x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = 1316087620575752861LLU;
	volatile int16_t x14 = 0;
	int64_t x15 = 470195901LL;
	int64_t x16 = 218431300202761LL;

	t3 = (((x13==x14)|x15)%x16);

	if (t3 != 470195901LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -5481974;
	uint8_t x18 = UINT8_MAX;
	int32_t x19 = -7190557;
	static int32_t x20 = -1;
	static volatile int32_t t4 = 10;

	t4 = (((x17==x18)|x19)%x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x26 = UINT16_MAX;
	static int16_t x27 = -1;
	static int32_t x28 = INT32_MIN;
	volatile int32_t t5 = -2196071;

	t5 = (((x25==x26)|x27)%x28);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x31 = 391;
	static int32_t x32 = INT32_MAX;
	volatile int32_t t6 = -159581115;

	t6 = (((x29==x30)|x31)%x32);

	if (t6 != 391) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x33 = -1;
	static uint8_t x34 = 41U;
	volatile int64_t x35 = INT64_MAX;
	static int64_t t7 = 12190LL;

	t7 = (((x33==x34)|x35)%x36);

	if (t7 != 2147483647LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x37 = INT32_MIN;
	int8_t x38 = 0;
	int16_t x39 = -6;
	int16_t x40 = INT16_MIN;
	int32_t t8 = 458208375;

	t8 = (((x37==x38)|x39)%x40);

	if (t8 != -6) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x41 = 22229897;
	int32_t x42 = -1;
	int64_t x43 = INT64_MAX;
	static uint8_t x44 = 7U;
	volatile int64_t t9 = -5LL;

	t9 = (((x41==x42)|x43)%x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x45 = UINT64_MAX;
	volatile int32_t x47 = 65;
	static int32_t x48 = 20;
	volatile int32_t t10 = -42589316;

	t10 = (((x45==x46)|x47)%x48);

	if (t10 != 5) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x49 = INT64_MIN;
	static uint16_t x50 = 2U;
	int16_t x51 = -1;
	int64_t x52 = INT64_MIN;
	volatile int64_t t11 = 1755399LL;

	t11 = (((x49==x50)|x51)%x52);

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x54 = 22U;
	int32_t x55 = 5228;
	static uint64_t t12 = 433800835174LLU;

	t12 = (((x53==x54)|x55)%x56);

	if (t12 != 5228LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MIN;
	int32_t x58 = INT32_MAX;
	uint32_t x59 = 77U;
	static volatile uint32_t t13 = 63926787U;

	t13 = (((x57==x58)|x59)%x60);

	if (t13 != 77U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MIN;
	int64_t x63 = INT64_MIN;
	static int16_t x64 = INT16_MAX;
	volatile int64_t t14 = -271LL;

	t14 = (((x61==x62)|x63)%x64);

	if (t14 != -8LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x66 = 1866783201U;
	int8_t x67 = INT8_MIN;
	int32_t x68 = INT32_MIN;

	t15 = (((x65==x66)|x67)%x68);

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x69 = 2510546379439153805LLU;
	volatile uint32_t x72 = UINT32_MAX;
	uint32_t t16 = 23U;

	t16 = (((x69==x70)|x71)%x72);

	if (t16 != 4294934528U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x74 = UINT64_MAX;
	uint32_t x75 = 486U;
	static int32_t x76 = -1;
	uint32_t t17 = 7U;

	t17 = (((x73==x74)|x75)%x76);

	if (t17 != 486U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = 1;
	int32_t x78 = INT32_MIN;
	int16_t x79 = -1;
	int64_t x80 = -1LL;

	t18 = (((x77==x78)|x79)%x80);

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = 49637996640186LL;
	int8_t x82 = -1;
	int8_t x83 = -4;
	int8_t x84 = -33;
	int32_t t19 = 1656815;

	t19 = (((x81==x82)|x83)%x84);

	if (t19 != -4) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 10855LLU;
	volatile uint32_t x86 = 7275458U;
	int32_t x87 = 31;
	int64_t x88 = 219302750LL;
	volatile int64_t t20 = 1LL;

	t20 = (((x85==x86)|x87)%x88);

	if (t20 != 31LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x90 = -22016;
	uint32_t x91 = 918471599U;
	int8_t x92 = 1;
	static uint32_t t21 = 79214208U;

	t21 = (((x89==x90)|x91)%x92);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MIN;
	int16_t x94 = INT16_MIN;
	uint64_t x95 = 953029343LLU;
	uint64_t t22 = 161478895227LLU;

	t22 = (((x93==x94)|x95)%x96);

	if (t22 != 953029343LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x98 = INT8_MIN;
	int16_t x99 = INT16_MIN;
	int64_t x100 = -9798624460983791LL;
	volatile int64_t t23 = -1LL;

	t23 = (((x97==x98)|x99)%x100);

	if (t23 != -32768LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x101 = 538U;
	static int32_t x102 = 1352704;
	uint32_t x103 = UINT32_MAX;
	int32_t x104 = 256;
	volatile uint32_t t24 = 192507U;

	t24 = (((x101==x102)|x103)%x104);

	if (t24 != 255U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x108 = INT8_MAX;
	volatile int32_t t25 = -30238;

	t25 = (((x105==x106)|x107)%x108);

	if (t25 != -8) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x111 = 37913LLU;
	int8_t x112 = INT8_MIN;
	uint64_t t26 = 1304654148040800607LLU;

	t26 = (((x109==x110)|x111)%x112);

	if (t26 != 37913LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x117 = -489827966334LL;
	int16_t x118 = INT16_MIN;
	int64_t x119 = INT64_MIN;
	static int16_t x120 = INT16_MIN;
	static volatile int64_t t27 = 3266269774017251308LL;

	t27 = (((x117==x118)|x119)%x120);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x122 = 0;
	static int64_t x124 = 5LL;
	static int64_t t28 = -249226308562409LL;

	t28 = (((x121==x122)|x123)%x124);

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x126 = INT64_MIN;
	int32_t x127 = INT32_MAX;
	int32_t x128 = 24056486;
	int32_t t29 = 399206225;

	t29 = (((x125==x126)|x127)%x128);

	if (t29 != 6456393) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x129 = INT16_MAX;
	static int16_t x130 = INT16_MIN;
	int8_t x131 = INT8_MAX;
	int32_t x132 = INT32_MIN;
	volatile int32_t t30 = -44197;

	t30 = (((x129==x130)|x131)%x132);

	if (t30 != 127) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = INT8_MIN;
	static int16_t x134 = INT16_MIN;
	int8_t x135 = -1;
	static uint64_t x136 = 5135360143LLU;
	uint64_t t31 = 258549LLU;

	t31 = (((x133==x134)|x135)%x136);

	if (t31 != 3569021002LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = 414419741LL;
	int16_t x139 = INT16_MIN;
	static uint16_t x140 = UINT16_MAX;
	int32_t t32 = -24111593;

	t32 = (((x137==x138)|x139)%x140);

	if (t32 != -32768) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x141 = UINT64_MAX;
	int32_t x144 = INT32_MAX;

	t33 = (((x141==x142)|x143)%x144);

	if (t33 != 127) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x149 = -2;
	volatile uint64_t x150 = UINT64_MAX;
	uint16_t x151 = 1U;
	uint16_t x152 = UINT16_MAX;
	int32_t t34 = -708741186;

	t34 = (((x149==x150)|x151)%x152);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x153 = 78744408863714120LLU;
	static volatile uint32_t x154 = 6354482U;
	static int64_t x156 = INT64_MIN;
	uint64_t t35 = 193179338LLU;

	t35 = (((x153==x154)|x155)%x156);

	if (t35 != 20LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x157 = 47U;
	uint32_t x158 = 1U;
	volatile int32_t x159 = INT32_MIN;
	volatile int8_t x160 = INT8_MIN;
	static volatile int32_t t36 = 0;

	t36 = (((x157==x158)|x159)%x160);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x161 = INT32_MIN;
	static int64_t x162 = INT64_MIN;
	static uint16_t x163 = UINT16_MAX;
	uint16_t x164 = 838U;
	volatile int32_t t37 = 260310;

	t37 = (((x161==x162)|x163)%x164);

	if (t37 != 171) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x167 = 27;
	uint64_t x168 = UINT64_MAX;
	volatile uint64_t t38 = 14923869948646LLU;

	t38 = (((x165==x166)|x167)%x168);

	if (t38 != 27LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x169 = INT16_MIN;
	uint32_t x171 = 61077963U;
	static int32_t x172 = 840;

	t39 = (((x169==x170)|x171)%x172);

	if (t39 != 723U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x173 = 3;
	int64_t x174 = -63LL;
	int16_t x175 = INT16_MIN;
	static int32_t x176 = INT32_MIN;

	t40 = (((x173==x174)|x175)%x176);

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x177 = INT16_MIN;
	static int16_t x178 = INT16_MAX;
	int8_t x179 = 0;
	int16_t x180 = INT16_MIN;
	int32_t t41 = -634125705;

	t41 = (((x177==x178)|x179)%x180);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x181 = 1;
	int8_t x182 = INT8_MAX;
	volatile int16_t x184 = -1;
	int32_t t42 = 3442;

	t42 = (((x181==x182)|x183)%x184);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = INT32_MAX;
	volatile uint64_t t43 = 2360LLU;

	t43 = (((x185==x186)|x187)%x188);

	if (t43 != 2LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x193 = 3634299741LLU;
	int64_t x194 = 936769260908255158LL;
	int32_t x196 = INT32_MAX;

	t44 = (((x193==x194)|x195)%x196);

	if (t44 != 7437U) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x197 = 22561U;
	int64_t x198 = INT64_MIN;
	int16_t x199 = 0;
	int16_t x200 = INT16_MIN;
	int32_t t45 = -113646;

	t45 = (((x197==x198)|x199)%x200);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x202 = INT8_MIN;
	uint64_t x203 = 30083623463275235LLU;
	int32_t x204 = INT32_MIN;

	t46 = (((x201==x202)|x203)%x204);

	if (t46 != 30083623463275235LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x207 = INT32_MAX;
	volatile uint16_t x208 = 106U;
	volatile int32_t t47 = -1538;

	t47 = (((x205==x206)|x207)%x208);

	if (t47 != 73) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x209 = 1671U;
	uint32_t x210 = UINT32_MAX;
	static uint8_t x211 = UINT8_MAX;
	volatile int32_t t48 = 0;

	t48 = (((x209==x210)|x211)%x212);

	if (t48 != 255) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = INT16_MAX;
	static int16_t x214 = -130;
	int8_t x215 = INT8_MIN;
	uint8_t x216 = 4U;
	static int32_t t49 = 535195;

	t49 = (((x213==x214)|x215)%x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x217 = 692;
	static uint64_t x218 = UINT64_MAX;
	int16_t x219 = 1852;
	uint64_t x220 = 48657503LLU;
	uint64_t t50 = 1LLU;

	t50 = (((x217==x218)|x219)%x220);

	if (t50 != 1852LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x221 = 6428182677505061LL;
	static int32_t x222 = -1;
	uint16_t x223 = 52U;
	int64_t x224 = -6576011892LL;
	static volatile int64_t t51 = -12853218152LL;

	t51 = (((x221==x222)|x223)%x224);

	if (t51 != 52LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x225 = 44U;
	volatile int32_t x226 = INT32_MIN;
	int16_t x228 = -233;
	int32_t t52 = 2;

	t52 = (((x225==x226)|x227)%x228);

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x229 = INT32_MIN;
	static int8_t x231 = INT8_MIN;
	int32_t x232 = -15;

	t53 = (((x229==x230)|x231)%x232);

	if (t53 != -8) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x233 = INT8_MAX;
	static uint32_t x234 = 0U;
	static uint16_t x235 = 21573U;
	int32_t t54 = 150021595;

	t54 = (((x233==x234)|x235)%x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x237 = 181540U;
	static int64_t x240 = 1434LL;
	static int64_t t55 = 97041818852350LL;

	t55 = (((x237==x238)|x239)%x240);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x241 = INT64_MAX;
	int64_t x242 = -1LL;
	uint8_t x243 = 7U;
	int16_t x244 = INT16_MIN;

	t56 = (((x241==x242)|x243)%x244);

	if (t56 != 7) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x245 = 61963U;
	int8_t x246 = -3;
	int64_t x247 = 179149278465LL;
	int64_t x248 = -2028LL;
	volatile int64_t t57 = -32525LL;

	t57 = (((x245==x246)|x247)%x248);

	if (t57 != 1041LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x250 = 383353380472LL;

	t58 = (((x249==x250)|x251)%x252);

	if (t58 != 10) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x253 = INT16_MAX;
	static uint16_t x254 = UINT16_MAX;
	volatile int8_t x255 = 1;
	int32_t t59 = -22;

	t59 = (((x253==x254)|x255)%x256);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile uint64_t x257 = 1046596228311LLU;
	int64_t x258 = -1LL;
	int32_t x259 = INT32_MIN;
	uint64_t x260 = 689439LLU;
	uint64_t t60 = 3696809LLU;

	t60 = (((x257==x258)|x259)%x260);

	if (t60 != 554087LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x262 = UINT32_MAX;
	int64_t x263 = -518421584987LL;
	int64_t t61 = 15441584LL;

	t61 = (((x261==x262)|x263)%x264);

	if (t61 != -7259LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x265 = UINT8_MAX;
	volatile int64_t x266 = -1LL;
	volatile int32_t x268 = 2;
	volatile int32_t t62 = 31;

	t62 = (((x265==x266)|x267)%x268);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x269 = -9;
	volatile int8_t x272 = -1;
	int32_t t63 = -485;

	t63 = (((x269==x270)|x271)%x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x273 = 2;
	uint8_t x274 = UINT8_MAX;
	int32_t x275 = -1693216;
	static uint8_t x276 = 6U;
	volatile int32_t t64 = 53031;

	t64 = (((x273==x274)|x275)%x276);

	if (t64 != -4) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x277 = -1LL;
	int32_t x278 = INT32_MIN;
	uint16_t x279 = 29401U;
	static int32_t x280 = INT32_MAX;
	static volatile int32_t t65 = 55138676;

	t65 = (((x277==x278)|x279)%x280);

	if (t65 != 29401) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x281 = INT16_MIN;
	int8_t x282 = -25;
	static volatile int32_t t66 = 62457;

	t66 = (((x281==x282)|x283)%x284);

	if (t66 != -32768) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x285 = -1LL;
	uint32_t x286 = 867883270U;
	volatile int16_t x287 = -74;
	int32_t x288 = INT32_MAX;

	t67 = (((x285==x286)|x287)%x288);

	if (t67 != -74) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x289 = INT64_MIN;
	static uint32_t x290 = UINT32_MAX;
	int32_t x291 = -1;
	static uint16_t x292 = UINT16_MAX;
	volatile int32_t t68 = -998460;

	t68 = (((x289==x290)|x291)%x292);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x293 = -1;
	static uint32_t x294 = UINT32_MAX;
	int8_t x295 = INT8_MIN;
	volatile int64_t x296 = INT64_MIN;
	static int64_t t69 = 3848182822422587198LL;

	t69 = (((x293==x294)|x295)%x296);

	if (t69 != -127LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x297 = 40688226623690506LLU;
	static int64_t x298 = INT64_MAX;
	static int64_t x299 = -12968LL;
	uint16_t x300 = 83U;
	static volatile int64_t t70 = -3127455828LL;

	t70 = (((x297==x298)|x299)%x300);

	if (t70 != -20LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x301 = INT8_MIN;
	int32_t x302 = -60124522;
	uint32_t x303 = 4U;
	int16_t x304 = INT16_MAX;
	static uint32_t t71 = 32182U;

	t71 = (((x301==x302)|x303)%x304);

	if (t71 != 4U) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x309 = 1;
	uint32_t x310 = 593818U;
	volatile int16_t x311 = -137;
	uint16_t x312 = 16768U;
	volatile int32_t t72 = 621380177;

	t72 = (((x309==x310)|x311)%x312);

	if (t72 != -137) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x314 = UINT16_MAX;
	uint8_t x315 = 1U;
	uint32_t x316 = UINT32_MAX;
	volatile uint32_t t73 = 134U;

	t73 = (((x313==x314)|x315)%x316);

	if (t73 != 1U) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x317 = INT64_MIN;
	int64_t x318 = INT64_MIN;
	volatile int8_t x319 = -1;
	int16_t x320 = INT16_MAX;
	int32_t t74 = 30270421;

	t74 = (((x317==x318)|x319)%x320);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x321 = -1;
	uint32_t x322 = 42U;
	uint64_t x323 = UINT64_MAX;
	static uint8_t x324 = 3U;
	uint64_t t75 = 1LLU;

	t75 = (((x321==x322)|x323)%x324);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x330 = -2;
	int16_t x331 = INT16_MIN;
	int8_t x332 = INT8_MAX;
	volatile int32_t t76 = 0;

	t76 = (((x329==x330)|x331)%x332);

	if (t76 != -2) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x333 = -12;
	int16_t x334 = -1;
	static uint64_t x335 = UINT64_MAX;
	volatile int64_t x336 = -772LL;
	volatile uint64_t t77 = 1709201032903290LLU;

	t77 = (((x333==x334)|x335)%x336);

	if (t77 != 771LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x338 = -1;
	int64_t x339 = INT64_MAX;
	int16_t x340 = INT16_MIN;
	volatile int64_t t78 = 251LL;

	t78 = (((x337==x338)|x339)%x340);

	if (t78 != 32767LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x345 = 0;
	static uint64_t x348 = UINT64_MAX;
	static volatile uint64_t t79 = 19434708LLU;

	t79 = (((x345==x346)|x347)%x348);

	if (t79 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x349 = 3;
	uint64_t x350 = 1LLU;
	int8_t x351 = INT8_MIN;
	int8_t x352 = INT8_MIN;
	static volatile int32_t t80 = -9290;

	t80 = (((x349==x350)|x351)%x352);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x353 = UINT8_MAX;
	static uint16_t x354 = 318U;
	static int64_t x356 = INT64_MIN;
	static volatile int64_t t81 = 0LL;

	t81 = (((x353==x354)|x355)%x356);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int32_t x357 = INT32_MIN;
	static int16_t x358 = -1;
	volatile uint8_t x359 = 1U;
	volatile int32_t t82 = 373716950;

	t82 = (((x357==x358)|x359)%x360);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x365 = INT64_MIN;
	int64_t x367 = INT64_MIN;
	static int16_t x368 = -8005;
	volatile int64_t t83 = -17LL;

	t83 = (((x365==x366)|x367)%x368);

	if (t83 != -2153LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x369 = -1;
	int32_t x370 = INT32_MAX;
	uint8_t x371 = UINT8_MAX;
	int64_t x372 = 33LL;

	t84 = (((x369==x370)|x371)%x372);

	if (t84 != 24LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x374 = -1;
	uint64_t x375 = UINT64_MAX;
	int16_t x376 = INT16_MAX;
	uint64_t t85 = 1392LLU;

	t85 = (((x373==x374)|x375)%x376);

	if (t85 != 15LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x377 = -106;
	int8_t x378 = INT8_MAX;
	volatile int8_t x379 = INT8_MIN;
	int32_t x380 = -4421;
	int32_t t86 = 1424025;

	t86 = (((x377==x378)|x379)%x380);

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x381 = INT16_MIN;
	uint32_t x382 = 1529254U;
	int64_t x383 = -3375490LL;
	int8_t x384 = INT8_MAX;

	t87 = (((x381==x382)|x383)%x384);

	if (t87 != -84LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x385 = -1LL;
	int16_t x386 = -333;
	volatile int64_t x388 = INT64_MIN;
	uint64_t t88 = 289248433498LLU;

	t88 = (((x385==x386)|x387)%x388);

	if (t88 != 36LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x389 = INT8_MIN;
	volatile uint32_t x390 = UINT32_MAX;
	int32_t x391 = 181;
	int64_t x392 = INT64_MIN;
	volatile int64_t t89 = -1714047720520594LL;

	t89 = (((x389==x390)|x391)%x392);

	if (t89 != 181LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x394 = -152029;
	int32_t x395 = INT32_MIN;
	int64_t x396 = -11715388916311262LL;
	int64_t t90 = -232645119614LL;

	t90 = (((x393==x394)|x395)%x396);

	if (t90 != -2147483648LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x397 = -869307169LL;
	int8_t x398 = -35;
	int8_t x399 = INT8_MAX;
	volatile int64_t x400 = INT64_MIN;
	static int64_t t91 = 26264LL;

	t91 = (((x397==x398)|x399)%x400);

	if (t91 != 127LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x401 = -1;
	int64_t t92 = 49044660462LL;

	t92 = (((x401==x402)|x403)%x404);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x405 = -1;
	static int32_t x406 = INT32_MAX;
	int16_t x408 = INT16_MIN;
	volatile int32_t t93 = -505561;

	t93 = (((x405==x406)|x407)%x408);

	if (t93 != 125) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x409 = INT64_MIN;
	int32_t x410 = INT32_MIN;
	static int32_t x411 = INT32_MIN;
	static volatile int16_t x412 = INT16_MIN;
	int32_t t94 = -4690;

	t94 = (((x409==x410)|x411)%x412);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x413 = -3;
	volatile uint32_t x414 = 37961U;
	volatile int16_t x416 = 124;
	uint64_t t95 = 26186588131LLU;

	t95 = (((x413==x414)|x415)%x416);

	if (t95 != 15LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x417 = INT32_MIN;
	volatile uint64_t x418 = 49962083LLU;
	volatile int8_t x419 = INT8_MIN;
	uint32_t x420 = UINT32_MAX;
	volatile uint32_t t96 = 3876U;

	t96 = (((x417==x418)|x419)%x420);

	if (t96 != 4294967168U) { NG(); } else { ; }
	
}

void f97(void) {
	static uint8_t x421 = UINT8_MAX;
	uint16_t x422 = UINT16_MAX;
	static int16_t x423 = INT16_MIN;
	static int32_t x424 = 8804;
	int32_t t97 = -7385230;

	t97 = (((x421==x422)|x423)%x424);

	if (t97 != -6356) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x429 = -69521116211742LL;
	volatile int32_t x430 = -1;
	uint8_t x432 = 59U;

	t98 = (((x429==x430)|x431)%x432);

	if (t98 != 43) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x433 = INT32_MIN;
	int8_t x434 = INT8_MIN;
	static int64_t x436 = -2421799264330457LL;
	int64_t t99 = -1744213107LL;

	t99 = (((x433==x434)|x435)%x436);

	if (t99 != 0LL) { NG(); } else { ; }
	
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

