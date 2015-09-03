#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = INT32_MAX;
volatile int64_t t0 = 51LL;
uint16_t x5 = UINT16_MAX;
uint16_t x14 = 7U;
uint16_t x15 = 104U;
uint16_t x16 = 256U;
uint64_t x20 = UINT64_MAX;
volatile int16_t x25 = -6571;
int64_t x28 = INT64_MIN;
volatile int32_t x29 = INT32_MAX;
volatile int32_t x30 = INT32_MIN;
uint8_t x38 = 7U;
uint32_t t7 = 13937374U;
uint64_t x43 = 188720459372950539LLU;
uint64_t t8 = 546848LLU;
static volatile uint32_t t10 = 1410U;
volatile int64_t x63 = 4226278968LL;
int32_t x64 = INT32_MAX;
int32_t t13 = 59314;
int8_t x81 = -1;
static int16_t x90 = INT16_MAX;
int16_t x95 = -25;
int16_t x98 = INT16_MAX;
volatile int32_t x99 = INT32_MIN;
uint8_t x101 = 1U;
volatile int64_t x104 = -2LL;
uint32_t x108 = 122U;
uint16_t x109 = 23U;
static int8_t x121 = -1;
int64_t t25 = 17434971LL;
volatile int32_t t27 = -367130;
int16_t x137 = 3;
volatile int8_t x138 = -1;
uint64_t x139 = 33669587606647LLU;
static volatile int16_t x140 = INT16_MIN;
volatile uint64_t t28 = 540469841927LLU;
volatile uint8_t x148 = UINT8_MAX;
uint8_t x153 = 57U;
volatile uint16_t x156 = UINT16_MAX;
uint16_t x160 = 9100U;
int16_t x163 = INT16_MAX;
volatile uint64_t t34 = 22LLU;
int16_t x169 = INT16_MAX;
int32_t x177 = 1;
int32_t x183 = -383;
volatile int64_t t38 = 267490LL;
volatile int8_t x186 = INT8_MIN;
volatile uint8_t x191 = 4U;
int64_t x192 = -1LL;
static volatile int64_t x200 = 244839340LL;
volatile int64_t t42 = 1602554LL;
int8_t x203 = -6;
static uint16_t x205 = 621U;
int32_t x207 = -4;
volatile uint32_t t44 = 5U;
static volatile int8_t x210 = INT8_MAX;
int32_t x211 = INT32_MIN;
uint32_t x215 = 2391U;
static int64_t t46 = -297565LL;
int16_t x225 = INT16_MIN;
static int8_t x228 = INT8_MIN;
volatile int32_t t48 = -7777299;
uint32_t t50 = 26U;
static int16_t x242 = 220;
static uint8_t x243 = 0U;
uint64_t t52 = 48255299259946611LLU;
volatile int16_t x245 = INT16_MIN;
int64_t t54 = 31896416LL;
int32_t x256 = 1;
static uint32_t x260 = 108470U;
static int64_t x261 = -1LL;
static int16_t x263 = 11888;
int64_t x270 = INT64_MIN;
static uint8_t x273 = 4U;
volatile int32_t t60 = -102782;
int8_t x278 = -15;
int32_t t61 = 6;
uint32_t x282 = 33351U;
int32_t x283 = INT32_MIN;
static int8_t x284 = -1;
uint32_t x285 = UINT32_MAX;
uint32_t t63 = 914194U;
uint8_t x298 = 14U;
uint64_t x299 = 3LLU;
static int16_t x301 = 8055;
volatile int16_t x305 = INT16_MAX;
uint16_t x306 = 9371U;
uint32_t x307 = 52879576U;
volatile int8_t x311 = INT8_MIN;
static volatile int32_t t69 = 240;
volatile int8_t x316 = INT8_MAX;
uint64_t t70 = 3333497030871LLU;
int64_t x318 = INT64_MIN;
uint16_t x320 = UINT16_MAX;
uint32_t x322 = UINT32_MAX;
int32_t x324 = -6;
uint64_t x327 = 36570112861288521LLU;
uint8_t x347 = UINT8_MAX;
int32_t x356 = INT32_MIN;
int16_t x363 = INT16_MIN;
uint64_t x366 = 42LLU;
int16_t x373 = INT16_MAX;
static int32_t x383 = INT32_MIN;
int8_t x386 = INT8_MAX;
volatile int64_t x394 = -4470LL;
int8_t x395 = 19;
int64_t t90 = -341097LL;
uint8_t x401 = UINT8_MAX;
volatile int32_t x404 = INT32_MIN;
int8_t x413 = INT8_MIN;
uint64_t x421 = 64LLU;
int64_t x425 = INT64_MIN;
volatile int64_t t97 = -294LL;
uint64_t x432 = 14715945724187LLU;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int64_t x2 = INT64_MAX;
	volatile int64_t x3 = INT64_MAX;

	t0 = (((x1|x2)-x3)%x4);

	if (t0 != -2LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MIN;
	volatile uint16_t x7 = 20U;
	uint16_t x8 = UINT16_MAX;
	volatile int32_t t1 = 121607;

	t1 = (((x5|x6)-x7)%x8);

	if (t1 != -32788) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x13 = INT16_MIN;
	volatile int32_t t2 = 2;

	t2 = (((x13|x14)-x15)%x16);

	if (t2 != -97) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -25LL;
	int32_t x18 = INT32_MIN;
	uint8_t x19 = UINT8_MAX;
	volatile uint64_t t3 = 17779785566736791LLU;

	t3 = (((x17|x18)-x19)%x20);

	if (t3 != 18446744073709551336LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x26 = 49;
	static volatile int8_t x27 = -1;
	int64_t t4 = 205133606LL;

	t4 = (((x25|x26)-x27)%x28);

	if (t4 != -6538LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x31 = 93823329349331085LLU;
	int64_t x32 = -1LL;
	volatile uint64_t t5 = 8088723408154232LLU;

	t5 = (((x29|x30)-x31)%x32);

	if (t5 != 18352920744360220530LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = -1LL;
	static int64_t x34 = INT64_MIN;
	volatile int8_t x35 = INT8_MAX;
	volatile uint32_t x36 = 1704U;
	int64_t t6 = -51LL;

	t6 = (((x33|x34)-x35)%x36);

	if (t6 != -128LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x37 = UINT32_MAX;
	int8_t x39 = -1;
	volatile int16_t x40 = INT16_MIN;

	t7 = (((x37|x38)-x39)%x40);

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x41 = INT32_MIN;
	static int32_t x42 = INT32_MAX;
	int32_t x44 = INT32_MIN;

	t8 = (((x41|x42)-x43)%x44);

	if (t8 != 18258023614336601076LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int64_t x45 = -1LL;
	volatile int8_t x46 = INT8_MIN;
	uint16_t x47 = 8U;
	int32_t x48 = INT32_MAX;
	int64_t t9 = 3LL;

	t9 = (((x45|x46)-x47)%x48);

	if (t9 != -9LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint32_t x53 = 5014U;
	int32_t x54 = INT32_MIN;
	int32_t x55 = INT32_MIN;
	int32_t x56 = -68745298;

	t10 = (((x53|x54)-x55)%x56);

	if (t10 != 5014U) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x57 = 35908268617653LL;
	int64_t x58 = INT64_MIN;
	uint16_t x59 = 128U;
	volatile int32_t x60 = INT32_MIN;
	volatile int64_t t11 = 906980838693LL;

	t11 = (((x57|x58)-x59)%x60);

	if (t11 != -1952944331LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = INT64_MIN;
	volatile int8_t x62 = INT8_MIN;
	int64_t t12 = -34487231LL;

	t12 = (((x61|x62)-x63)%x64);

	if (t12 != -2078795449LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x65 = UINT8_MAX;
	static int32_t x66 = -1;
	int8_t x67 = INT8_MIN;
	int8_t x68 = INT8_MIN;

	t13 = (((x65|x66)-x67)%x68);

	if (t13 != 127) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MIN;
	int32_t x70 = INT32_MIN;
	volatile int64_t x71 = INT64_MIN;
	static volatile uint16_t x72 = 10U;
	int64_t t14 = 152629LL;

	t14 = (((x69|x70)-x71)%x72);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x77 = -1LL;
	int32_t x78 = INT32_MIN;
	volatile int16_t x79 = INT16_MIN;
	int32_t x80 = -1;
	int64_t t15 = -328717LL;

	t15 = (((x77|x78)-x79)%x80);

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x82 = 285260406;
	int16_t x83 = -1;
	int8_t x84 = INT8_MIN;
	int32_t t16 = 0;

	t16 = (((x81|x82)-x83)%x84);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x89 = 0;
	uint16_t x91 = UINT16_MAX;
	static int64_t x92 = 99LL;
	static int64_t t17 = -40501696344278LL;

	t17 = (((x89|x90)-x91)%x92);

	if (t17 != -98LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint8_t x93 = 1U;
	static int32_t x94 = INT32_MIN;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t18 = 56;

	t18 = (((x93|x94)-x95)%x96);

	if (t18 != -102) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x97 = UINT32_MAX;
	static int32_t x100 = INT32_MIN;
	uint32_t t19 = 15664783U;

	t19 = (((x97|x98)-x99)%x100);

	if (t19 != 2147483647U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x102 = INT16_MIN;
	static uint32_t x103 = UINT32_MAX;
	volatile int64_t t20 = 231LL;

	t20 = (((x101|x102)-x103)%x104);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x105 = UINT32_MAX;
	volatile int64_t x106 = 31516003LL;
	int64_t x107 = INT64_MAX;
	static int64_t t21 = -63369207542352768LL;

	t21 = (((x105|x106)-x107)%x108);

	if (t21 != -12LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x110 = INT16_MIN;
	int8_t x111 = -1;
	uint16_t x112 = UINT16_MAX;
	int32_t t22 = -4127902;

	t22 = (((x109|x110)-x111)%x112);

	if (t22 != -32744) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x113 = 1653511LL;
	int32_t x114 = INT32_MAX;
	volatile int64_t x115 = INT64_MAX;
	static volatile int8_t x116 = 11;
	int64_t t23 = -880925090698100401LL;

	t23 = (((x113|x114)-x115)%x116);

	if (t23 != -6LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x122 = -2419;
	uint16_t x123 = UINT16_MAX;
	static int8_t x124 = 1;
	int32_t t24 = 39023150;

	t24 = (((x121|x122)-x123)%x124);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x125 = 4073414;
	int64_t x126 = -252480892LL;
	int8_t x127 = INT8_MAX;
	static uint32_t x128 = UINT32_MAX;

	t25 = (((x125|x126)-x127)%x128);

	if (t25 != -251693241LL) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x129 = -33681849;
	int16_t x130 = -1;
	uint32_t x131 = UINT32_MAX;
	int32_t x132 = -1;
	uint32_t t26 = 4835637U;

	t26 = (((x129|x130)-x131)%x132);

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x133 = 9U;
	int16_t x134 = -1;
	static int32_t x135 = INT32_MAX;
	uint16_t x136 = 2U;

	t27 = (((x133|x134)-x135)%x136);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {


	t28 = (((x137|x138)-x139)%x140);

	if (t28 != 18446710404121944968LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x141 = 16U;
	static int64_t x142 = -1LL;
	int16_t x143 = -193;
	int16_t x144 = -1;
	int64_t t29 = 2761394648704142LL;

	t29 = (((x141|x142)-x143)%x144);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x145 = 2769U;
	int8_t x146 = INT8_MIN;
	int32_t x147 = -1;
	int32_t t30 = -3627;

	t30 = (((x145|x146)-x147)%x148);

	if (t30 != -46) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x154 = 138564372U;
	static volatile int64_t x155 = INT64_MAX;
	static volatile int64_t t31 = -7LL;

	t31 = (((x153|x154)-x155)%x156);

	if (t31 != -9344LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x157 = INT16_MIN;
	uint8_t x158 = UINT8_MAX;
	uint16_t x159 = 20U;
	int32_t t32 = 14;

	t32 = (((x157|x158)-x159)%x160);

	if (t32 != -5233) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x161 = INT64_MAX;
	int64_t x162 = INT64_MIN;
	static int64_t x164 = INT64_MIN;
	int64_t t33 = -314165164279985LL;

	t33 = (((x161|x162)-x163)%x164);

	if (t33 != -32768LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x165 = -1LL;
	int16_t x166 = INT16_MAX;
	uint64_t x167 = UINT64_MAX;
	int32_t x168 = INT32_MIN;

	t34 = (((x165|x166)-x167)%x168);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x170 = -59;
	volatile int16_t x171 = 1;
	int8_t x172 = INT8_MIN;
	int32_t t35 = -25221467;

	t35 = (((x169|x170)-x171)%x172);

	if (t35 != -2) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x173 = 56477513080221359LLU;
	int16_t x174 = -1;
	static int8_t x175 = INT8_MIN;
	uint64_t x176 = 47872LLU;
	volatile uint64_t t36 = 99025763553565LLU;

	t36 = (((x173|x174)-x175)%x176);

	if (t36 != 127LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x178 = 122423LLU;
	int8_t x179 = 17;
	int32_t x180 = INT32_MAX;
	uint64_t t37 = 88225LLU;

	t37 = (((x177|x178)-x179)%x180);

	if (t37 != 122406LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x181 = -66LL;
	int16_t x182 = INT16_MAX;
	volatile int16_t x184 = INT16_MIN;

	t38 = (((x181|x182)-x183)%x184);

	if (t38 != 382LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x185 = INT8_MIN;
	volatile uint32_t x187 = 26U;
	uint64_t x188 = 34971075852LLU;
	uint64_t t39 = 58998291846762LLU;

	t39 = (((x185|x186)-x187)%x188);

	if (t39 != 4294967142LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x189 = UINT8_MAX;
	int16_t x190 = -2577;
	int64_t t40 = 16466354603LL;

	t40 = (((x189|x190)-x191)%x192);

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x193 = INT32_MIN;
	uint16_t x194 = 24273U;
	int64_t x195 = INT64_MIN;
	uint64_t x196 = 13305299508803LLU;
	static uint64_t t41 = 7753246511LLU;

	t41 = (((x193|x194)-x195)%x196);

	if (t41 != 5362209988803LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x197 = -1;
	int64_t x198 = INT64_MAX;
	int32_t x199 = -1;

	t42 = (((x197|x198)-x199)%x200);

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x201 = INT8_MIN;
	int16_t x202 = 22;
	uint16_t x204 = 665U;
	static volatile int32_t t43 = -1;

	t43 = (((x201|x202)-x203)%x204);

	if (t43 != -100) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x206 = INT8_MIN;
	volatile uint32_t x208 = 1U;

	t44 = (((x205|x206)-x207)%x208);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x209 = INT32_MIN;
	int8_t x212 = 4;
	int32_t t45 = -24;

	t45 = (((x209|x210)-x211)%x212);

	if (t45 != 3) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint32_t x213 = UINT32_MAX;
	int64_t x214 = INT64_MAX;
	int64_t x216 = 2294613795906421LL;

	t46 = (((x213|x214)-x215)%x216);

	if (t46 != 1319191106867417LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x221 = -399498190LL;
	int64_t x222 = INT64_MAX;
	int32_t x223 = INT32_MAX;
	int8_t x224 = INT8_MIN;
	static int64_t t47 = 0LL;

	t47 = (((x221|x222)-x223)%x224);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x226 = -1;
	static int8_t x227 = INT8_MIN;

	t48 = (((x225|x226)-x227)%x228);

	if (t48 != 127) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x229 = -1;
	static int64_t x230 = INT64_MIN;
	volatile uint16_t x231 = 269U;
	int32_t x232 = -1;
	int64_t t49 = 80LL;

	t49 = (((x229|x230)-x231)%x232);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x233 = UINT8_MAX;
	uint32_t x234 = 10631695U;
	int32_t x235 = 125816372;
	volatile uint32_t x236 = 227647U;

	t50 = (((x233|x234)-x235)%x236);

	if (t50 != 183939U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x237 = INT32_MAX;
	volatile int32_t x238 = INT32_MIN;
	uint32_t x239 = 418998368U;
	int32_t x240 = -1;
	uint32_t t51 = 155U;

	t51 = (((x237|x238)-x239)%x240);

	if (t51 != 3875968927U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x241 = 27U;
	static uint64_t x244 = UINT64_MAX;

	t52 = (((x241|x242)-x243)%x244);

	if (t52 != 223LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x246 = INT32_MIN;
	int64_t x247 = INT64_MIN;
	volatile int16_t x248 = INT16_MIN;
	static int64_t t53 = 246467086915764448LL;

	t53 = (((x245|x246)-x247)%x248);

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x249 = INT32_MAX;
	static int8_t x250 = 4;
	static uint32_t x251 = UINT32_MAX;
	int64_t x252 = INT64_MIN;

	t54 = (((x249|x250)-x251)%x252);

	if (t54 != 2147483648LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x253 = INT16_MAX;
	uint16_t x254 = UINT16_MAX;
	uint8_t x255 = 80U;
	int32_t t55 = 22;

	t55 = (((x253|x254)-x255)%x256);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x257 = INT16_MIN;
	int16_t x258 = INT16_MIN;
	uint64_t x259 = 7007260LLU;
	volatile uint64_t t56 = 13998638486LLU;

	t56 = (((x257|x258)-x259)%x260);

	if (t56 != 21898LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x262 = -1;
	int64_t x264 = INT64_MAX;
	static int64_t t57 = 203314599994LL;

	t57 = (((x261|x262)-x263)%x264);

	if (t57 != -11889LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x265 = UINT32_MAX;
	int64_t x266 = -1LL;
	uint32_t x267 = UINT32_MAX;
	uint8_t x268 = 4U;
	volatile int64_t t58 = 713239LL;

	t58 = (((x265|x266)-x267)%x268);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint8_t x269 = 12U;
	int8_t x271 = INT8_MIN;
	uint16_t x272 = 1145U;
	static volatile int64_t t59 = -2039355163817561LL;

	t59 = (((x269|x270)-x271)%x272);

	if (t59 != -798LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x274 = INT8_MIN;
	int8_t x275 = -1;
	int8_t x276 = -1;

	t60 = (((x273|x274)-x275)%x276);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x277 = INT16_MIN;
	static int32_t x279 = INT32_MIN;
	static uint16_t x280 = 18825U;

	t61 = (((x277|x278)-x279)%x280);

	if (t61 != 2933) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint64_t x281 = UINT64_MAX;
	volatile uint64_t t62 = 400123830462LLU;

	t62 = (((x281|x282)-x283)%x284);

	if (t62 != 2147483647LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x286 = 16U;
	volatile int16_t x287 = -262;
	int16_t x288 = -2;

	t63 = (((x285|x286)-x287)%x288);

	if (t63 != 261U) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x289 = INT64_MIN;
	int8_t x290 = INT8_MIN;
	int8_t x291 = -1;
	int8_t x292 = INT8_MAX;
	volatile int64_t t64 = 2LL;

	t64 = (((x289|x290)-x291)%x292);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x293 = -27;
	static volatile int8_t x294 = INT8_MAX;
	int16_t x295 = -1;
	static volatile uint16_t x296 = 103U;
	int32_t t65 = 119958;

	t65 = (((x293|x294)-x295)%x296);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x297 = 3594382U;
	int64_t x300 = -19201314390LL;
	static uint64_t t66 = 13044LLU;

	t66 = (((x297|x298)-x299)%x300);

	if (t66 != 3594379LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x302 = 1834U;
	int8_t x303 = -1;
	int8_t x304 = INT8_MAX;
	int32_t t67 = -46;

	t67 = (((x301|x302)-x303)%x304);

	if (t67 != 63) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x308 = INT32_MAX;
	uint32_t t68 = 0U;

	t68 = (((x305|x306)-x307)%x308);

	if (t68 != 2094636840U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x309 = -45;
	static volatile int8_t x310 = INT8_MAX;
	int16_t x312 = INT16_MIN;

	t69 = (((x309|x310)-x311)%x312);

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x313 = 258081590085LLU;
	static volatile int32_t x314 = INT32_MIN;
	int64_t x315 = 100230926217060472LL;

	t70 = (((x313|x314)-x315)%x316);

	if (t70 != 114LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x317 = INT32_MAX;
	static volatile int32_t x319 = INT32_MIN;
	int64_t t71 = 11410580096LL;

	t71 = (((x317|x318)-x319)%x320);

	if (t71 != -32768LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x321 = 167;
	int8_t x323 = INT8_MAX;
	uint32_t t72 = 3246U;

	t72 = (((x321|x322)-x323)%x324);

	if (t72 != 4294967168U) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x325 = INT64_MIN;
	static int16_t x326 = INT16_MIN;
	int32_t x328 = -1;
	volatile uint64_t t73 = 2076108234995931LLU;

	t73 = (((x325|x326)-x327)%x328);

	if (t73 != 18410173960848230327LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x329 = INT64_MAX;
	uint64_t x330 = UINT64_MAX;
	uint16_t x331 = 912U;
	int16_t x332 = INT16_MIN;
	volatile uint64_t t74 = 8260219LLU;

	t74 = (((x329|x330)-x331)%x332);

	if (t74 != 31855LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x333 = 1U;
	uint64_t x334 = UINT64_MAX;
	int16_t x335 = INT16_MIN;
	volatile uint32_t x336 = 6U;
	uint64_t t75 = 1961818304LLU;

	t75 = (((x333|x334)-x335)%x336);

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x337 = UINT64_MAX;
	int32_t x338 = -1;
	static int32_t x339 = INT32_MIN;
	int64_t x340 = INT64_MAX;
	uint64_t t76 = 51171607LLU;

	t76 = (((x337|x338)-x339)%x340);

	if (t76 != 2147483647LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x341 = UINT8_MAX;
	static uint64_t x342 = 2220727LLU;
	int64_t x343 = -3701171688LL;
	volatile int32_t x344 = INT32_MIN;
	uint64_t t77 = 143LLU;

	t77 = (((x341|x342)-x343)%x344);

	if (t77 != 3703392487LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x345 = UINT16_MAX;
	uint16_t x346 = 25U;
	uint16_t x348 = 3U;
	int32_t t78 = -92436585;

	t78 = (((x345|x346)-x347)%x348);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x349 = 705;
	static volatile int64_t x350 = 14LL;
	static volatile uint16_t x351 = 0U;
	int64_t x352 = INT64_MIN;
	volatile int64_t t79 = 204LL;

	t79 = (((x349|x350)-x351)%x352);

	if (t79 != 719LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x353 = -1;
	int16_t x354 = INT16_MAX;
	int8_t x355 = -1;
	volatile int32_t t80 = -71691912;

	t80 = (((x353|x354)-x355)%x356);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x357 = -948817795LL;
	int8_t x358 = -1;
	static int8_t x359 = -1;
	int32_t x360 = -888887208;
	volatile int64_t t81 = 31418054440965950LL;

	t81 = (((x357|x358)-x359)%x360);

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x361 = UINT64_MAX;
	int64_t x362 = INT64_MIN;
	int32_t x364 = INT32_MIN;
	volatile uint64_t t82 = 366LLU;

	t82 = (((x361|x362)-x363)%x364);

	if (t82 != 32767LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x365 = 6U;
	uint8_t x367 = 27U;
	int16_t x368 = -1;
	uint64_t t83 = 84LLU;

	t83 = (((x365|x366)-x367)%x368);

	if (t83 != 19LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x369 = INT32_MIN;
	static int64_t x370 = INT64_MIN;
	int32_t x371 = INT32_MAX;
	uint8_t x372 = 30U;
	int64_t t84 = -54196608339LL;

	t84 = (((x369|x370)-x371)%x372);

	if (t84 != -15LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x374 = 33324213145590LL;
	static int16_t x375 = INT16_MIN;
	static int32_t x376 = -1;
	int64_t t85 = 4LL;

	t85 = (((x373|x374)-x375)%x376);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x381 = INT16_MAX;
	uint32_t x382 = 868491066U;
	volatile int32_t x384 = -1;
	static volatile uint32_t t86 = 61U;

	t86 = (((x381|x382)-x383)%x384);

	if (t86 != 3015999487U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x385 = INT32_MIN;
	uint64_t x387 = 273797216LLU;
	uint32_t x388 = 14979662U;
	static uint64_t t87 = 153LLU;

	t87 = (((x385|x386)-x387)%x388);

	if (t87 != 13044241LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x389 = -1;
	int16_t x390 = INT16_MIN;
	volatile int32_t x391 = -1;
	static int16_t x392 = 37;
	int32_t t88 = 73582267;

	t88 = (((x389|x390)-x391)%x392);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint64_t x393 = UINT64_MAX;
	int64_t x396 = -26154698264343618LL;
	static volatile uint64_t t89 = 345989LLU;

	t89 = (((x393|x394)-x395)%x396);

	if (t89 != 26154698264343598LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x397 = UINT8_MAX;
	static int64_t x398 = INT64_MIN;
	uint8_t x399 = 1U;
	volatile int32_t x400 = INT32_MIN;

	t90 = (((x397|x398)-x399)%x400);

	if (t90 != -2147483394LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x402 = 7;
	volatile int8_t x403 = INT8_MAX;
	volatile int32_t t91 = 4796096;

	t91 = (((x401|x402)-x403)%x404);

	if (t91 != 128) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint64_t x405 = UINT64_MAX;
	int32_t x406 = INT32_MAX;
	int16_t x407 = 1790;
	int64_t x408 = INT64_MIN;
	uint64_t t92 = 1LLU;

	t92 = (((x405|x406)-x407)%x408);

	if (t92 != 9223372036854774017LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x409 = INT32_MIN;
	int8_t x410 = INT8_MIN;
	static volatile uint32_t x411 = UINT32_MAX;
	static int8_t x412 = INT8_MIN;
	volatile uint32_t t93 = 9753U;

	t93 = (((x409|x410)-x411)%x412);

	if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x414 = UINT8_MAX;
	int32_t x415 = INT32_MIN;
	uint32_t x416 = UINT32_MAX;
	static volatile uint32_t t94 = 1594U;

	t94 = (((x413|x414)-x415)%x416);

	if (t94 != 2147483647U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x417 = INT16_MAX;
	int32_t x418 = INT32_MIN;
	uint8_t x419 = UINT8_MAX;
	int8_t x420 = -1;
	int32_t t95 = -1;

	t95 = (((x417|x418)-x419)%x420);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x422 = INT8_MAX;
	static int16_t x423 = INT16_MIN;
	uint64_t x424 = 49LLU;
	static uint64_t t96 = 281602086386184386LLU;

	t96 = (((x421|x422)-x423)%x424);

	if (t96 != 16LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x426 = 1;
	static int32_t x427 = INT32_MIN;
	int32_t x428 = -14165680;

	t97 = (((x425|x426)-x427)%x428);

	if (t97 != -12488879LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x429 = 3506639U;
	uint8_t x430 = 4U;
	int8_t x431 = INT8_MAX;
	uint64_t t98 = 138155LLU;

	t98 = (((x429|x430)-x431)%x432);

	if (t98 != 3506512LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint32_t x433 = 133U;
	int32_t x434 = INT32_MIN;
	int16_t x435 = 3404;
	static volatile int32_t x436 = INT32_MIN;
	uint32_t t99 = 1827799110U;

	t99 = (((x433|x434)-x435)%x436);

	if (t99 != 2147480377U) { NG(); } else { ; }
	
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

