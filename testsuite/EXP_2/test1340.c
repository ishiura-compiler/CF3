#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MAX;
static int32_t t0 = -141;
static uint64_t x20 = 113891158633LLU;
static int16_t x26 = INT16_MIN;
int8_t x32 = 19;
static volatile int32_t t6 = 1;
uint16_t x33 = 18260U;
int8_t x35 = -1;
int8_t x39 = INT8_MAX;
int16_t x48 = 14261;
static int8_t x51 = -25;
uint64_t x53 = 564708994LLU;
int64_t x54 = -29LL;
uint16_t x55 = 536U;
static uint64_t t13 = 11LLU;
volatile int8_t x67 = INT8_MAX;
int32_t x70 = 3535561;
int16_t x71 = -1;
static int8_t x74 = 0;
int64_t x85 = INT64_MAX;
int32_t x87 = -1;
int16_t x88 = INT16_MIN;
int64_t x93 = 5277241372LL;
int64_t x97 = -1645462558986872625LL;
volatile uint8_t x98 = UINT8_MAX;
int64_t x100 = -1LL;
static uint16_t x103 = 0U;
int16_t x109 = INT16_MIN;
uint16_t x110 = UINT16_MAX;
int32_t x130 = -1061924;
volatile uint64_t x139 = UINT64_MAX;
volatile uint8_t x147 = UINT8_MAX;
int16_t x149 = -1;
static volatile int8_t x156 = INT8_MIN;
static int32_t x161 = INT32_MAX;
int8_t x163 = -1;
uint32_t x165 = UINT32_MAX;
uint32_t x168 = 2044241U;
uint8_t x172 = 28U;
static int64_t x177 = -1LL;
int32_t x186 = INT32_MAX;
static volatile int64_t x197 = 3475LL;
int8_t x199 = -1;
uint8_t x205 = UINT8_MAX;
uint8_t x206 = 85U;
static int8_t x208 = -1;
int8_t x212 = INT8_MAX;
int32_t x214 = INT32_MIN;
static volatile int64_t t47 = 8LL;
static volatile uint64_t x244 = 13LLU;
int16_t x248 = INT16_MIN;
static int8_t x251 = INT8_MAX;
int8_t x268 = INT8_MIN;
volatile uint64_t x281 = 2012820379153033LLU;
static int16_t x285 = INT16_MIN;
int8_t x292 = INT8_MAX;
static uint32_t x293 = 498025U;
int32_t x294 = INT32_MAX;
int8_t x295 = INT8_MIN;
static uint8_t x296 = UINT8_MAX;
int8_t x307 = INT8_MIN;
int16_t x308 = -1;
uint64_t t64 = 4684LLU;
uint64_t x309 = UINT64_MAX;
int32_t x315 = -1;
static uint8_t x316 = 4U;
volatile int32_t x328 = INT32_MIN;
uint8_t x329 = 54U;
static int32_t t70 = -24225417;
int32_t x343 = 11783779;
static int32_t x344 = 9;
volatile uint16_t x346 = 231U;
int64_t t76 = 2153520871902586LL;
int16_t x359 = -1;
static uint8_t x360 = UINT8_MAX;
int32_t x363 = INT32_MIN;
int16_t x366 = 63;
int32_t x368 = -11;
uint64_t x375 = UINT64_MAX;
volatile uint32_t x380 = 13U;
volatile int64_t x381 = -39LL;
int32_t x386 = INT32_MIN;
volatile int8_t x388 = 54;
volatile int32_t t83 = -741;
volatile int16_t x389 = 6;
int32_t x390 = INT32_MAX;
uint32_t x391 = 1U;
int64_t x393 = -7106796616441LL;
int64_t t85 = 215149734313LL;
int8_t x411 = INT8_MIN;
static volatile int64_t t89 = 591LL;
int64_t t91 = -4120002047419024093LL;
volatile int8_t x422 = INT8_MIN;
static volatile int32_t x427 = 20802;
int32_t t94 = -200;
volatile uint16_t x436 = UINT16_MAX;
volatile int32_t t96 = 110;
static volatile int8_t x441 = INT8_MIN;
volatile int32_t t98 = -5;
static int8_t x456 = 59;
static int32_t t99 = 409865643;


void f0(void) {
	uint16_t x1 = 161U;
	static int32_t x2 = INT32_MIN;
	static volatile int16_t x3 = 191;

	t0 = ((x1^(x2==x3))+x4);

	if (t0 != 32928) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -56772LL;
	uint8_t x6 = UINT8_MAX;
	int32_t x7 = INT32_MIN;
	volatile int64_t x8 = -22LL;
	int64_t t1 = 11930308320032932LL;

	t1 = ((x5^(x6==x7))+x8);

	if (t1 != -56794LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = 39;
	int16_t x10 = INT16_MAX;
	volatile int8_t x11 = INT8_MIN;
	volatile int32_t x12 = INT32_MIN;
	static int32_t t2 = -4;

	t2 = ((x9^(x10==x11))+x12);

	if (t2 != -2147483609) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x17 = 2U;
	int64_t x18 = INT64_MAX;
	uint64_t x19 = 8LLU;
	uint64_t t3 = 903926LLU;

	t3 = ((x17^(x18==x19))+x20);

	if (t3 != 113891158635LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x21 = -1;
	uint32_t x22 = 371022457U;
	uint64_t x23 = 1099485831694726LLU;
	int16_t x24 = INT16_MIN;
	int32_t t4 = -81;

	t4 = ((x21^(x22==x23))+x24);

	if (t4 != -32769) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x25 = INT64_MAX;
	uint16_t x27 = UINT16_MAX;
	int64_t x28 = -7571506333LL;
	int64_t t5 = 1676918916127192551LL;

	t5 = ((x25^(x26==x27))+x28);

	if (t5 != 9223372029283269474LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x29 = -1;
	uint32_t x30 = 246U;
	static int16_t x31 = -1;

	t6 = ((x29^(x30==x31))+x32);

	if (t6 != 18) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int16_t x34 = -14552;
	static int16_t x36 = -1;
	int32_t t7 = 92271973;

	t7 = ((x33^(x34==x35))+x36);

	if (t7 != 18259) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x37 = -1;
	static int64_t x38 = INT64_MIN;
	uint16_t x40 = 6348U;
	volatile int32_t t8 = -12075;

	t8 = ((x37^(x38==x39))+x40);

	if (t8 != 6347) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = -1;
	static int32_t x42 = INT32_MAX;
	uint32_t x43 = UINT32_MAX;
	int64_t x44 = -1LL;
	int64_t t9 = -16683554261895LL;

	t9 = ((x41^(x42==x43))+x44);

	if (t9 != -2LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x45 = INT16_MIN;
	uint16_t x46 = UINT16_MAX;
	volatile uint16_t x47 = 72U;
	static volatile int32_t t10 = -1;

	t10 = ((x45^(x46==x47))+x48);

	if (t10 != -18507) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x49 = 35U;
	uint32_t x50 = 304839168U;
	int64_t x52 = INT64_MIN;
	int64_t t11 = 16368LL;

	t11 = ((x49^(x50==x51))+x52);

	if (t11 != -9223372036854775773LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint16_t x56 = 122U;
	static uint64_t t12 = 21894584LLU;

	t12 = ((x53^(x54==x55))+x56);

	if (t12 != 564709116LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x61 = UINT64_MAX;
	static uint8_t x62 = 2U;
	static int32_t x63 = INT32_MIN;
	int32_t x64 = -4229276;

	t13 = ((x61^(x62==x63))+x64);

	if (t13 != 18446744073705322339LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x65 = 10U;
	int16_t x66 = 0;
	static int16_t x68 = 24;
	int32_t t14 = 2;

	t14 = ((x65^(x66==x67))+x68);

	if (t14 != 34) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x69 = 6U;
	int16_t x72 = INT16_MAX;
	static volatile int32_t t15 = -238;

	t15 = ((x69^(x70==x71))+x72);

	if (t15 != 32773) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x73 = 1300919;
	static volatile int32_t x75 = INT32_MIN;
	uint8_t x76 = 0U;
	volatile int32_t t16 = 13049;

	t16 = ((x73^(x74==x75))+x76);

	if (t16 != 1300919) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = -15;
	int16_t x78 = -214;
	uint32_t x79 = 568261U;
	static volatile int32_t x80 = INT32_MAX;
	volatile int32_t t17 = 36050062;

	t17 = ((x77^(x78==x79))+x80);

	if (t17 != 2147483632) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x86 = UINT64_MAX;
	int64_t t18 = -293404860416119LL;

	t18 = ((x85^(x86==x87))+x88);

	if (t18 != 9223372036854743038LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x89 = 119;
	int32_t x90 = INT32_MAX;
	static volatile uint8_t x91 = 4U;
	uint32_t x92 = UINT32_MAX;
	uint32_t t19 = 71609791U;

	t19 = ((x89^(x90==x91))+x92);

	if (t19 != 118U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x94 = INT64_MAX;
	uint32_t x95 = UINT32_MAX;
	int8_t x96 = -3;
	static int64_t t20 = 1774767344312250558LL;

	t20 = ((x93^(x94==x95))+x96);

	if (t20 != 5277241369LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x99 = 0LL;
	static int64_t t21 = 34792448278046116LL;

	t21 = ((x97^(x98==x99))+x100);

	if (t21 != -1645462558986872626LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = INT32_MIN;
	int16_t x102 = INT16_MAX;
	volatile int32_t x104 = 1;
	volatile int32_t t22 = 2462;

	t22 = ((x101^(x102==x103))+x104);

	if (t22 != -2147483647) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x111 = INT16_MIN;
	static volatile int8_t x112 = -1;
	volatile int32_t t23 = 9;

	t23 = ((x109^(x110==x111))+x112);

	if (t23 != -32769) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x113 = 3U;
	int32_t x114 = INT32_MAX;
	int8_t x115 = -19;
	static int16_t x116 = INT16_MAX;
	int32_t t24 = -826995;

	t24 = ((x113^(x114==x115))+x116);

	if (t24 != 32770) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = INT8_MIN;
	uint32_t x118 = UINT32_MAX;
	int8_t x119 = 0;
	volatile int8_t x120 = INT8_MIN;
	static int32_t t25 = -2912067;

	t25 = ((x117^(x118==x119))+x120);

	if (t25 != -256) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x125 = -937557975;
	int8_t x126 = -1;
	int16_t x127 = INT16_MIN;
	static uint32_t x128 = UINT32_MAX;
	uint32_t t26 = 155562U;

	t26 = ((x125^(x126==x127))+x128);

	if (t26 != 3357409320U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x129 = INT8_MAX;
	uint8_t x131 = UINT8_MAX;
	uint8_t x132 = 4U;
	volatile int32_t t27 = 1;

	t27 = ((x129^(x130==x131))+x132);

	if (t27 != 131) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x133 = 2921593U;
	uint32_t x134 = 1003U;
	int8_t x135 = INT8_MIN;
	int16_t x136 = INT16_MAX;
	uint32_t t28 = 82U;

	t28 = ((x133^(x134==x135))+x136);

	if (t28 != 2954360U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x137 = INT16_MIN;
	int16_t x138 = 0;
	static int64_t x140 = -1LL;
	int64_t t29 = 1LL;

	t29 = ((x137^(x138==x139))+x140);

	if (t29 != -32769LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x141 = 856929956690LLU;
	uint8_t x142 = 32U;
	volatile int32_t x143 = INT32_MIN;
	volatile int64_t x144 = -1LL;
	volatile uint64_t t30 = 157169579782LLU;

	t30 = ((x141^(x142==x143))+x144);

	if (t30 != 856929956689LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint32_t x145 = UINT32_MAX;
	int64_t x146 = INT64_MAX;
	int64_t x148 = -295334LL;
	volatile int64_t t31 = 55598080LL;

	t31 = ((x145^(x146==x147))+x148);

	if (t31 != 4294671961LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x150 = INT32_MIN;
	uint8_t x151 = 1U;
	int32_t x152 = -1;
	int32_t t32 = 20207;

	t32 = ((x149^(x150==x151))+x152);

	if (t32 != -2) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x153 = 1457167U;
	uint32_t x154 = 6547U;
	int16_t x155 = -1;
	static volatile uint32_t t33 = 8798U;

	t33 = ((x153^(x154==x155))+x156);

	if (t33 != 1457039U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x157 = 13;
	volatile int8_t x158 = 2;
	volatile uint16_t x159 = 13684U;
	static int64_t x160 = INT64_MIN;
	static volatile int64_t t34 = -713056144960LL;

	t34 = ((x157^(x158==x159))+x160);

	if (t34 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x162 = 11;
	int8_t x164 = INT8_MIN;
	static volatile int32_t t35 = 35653;

	t35 = ((x161^(x162==x163))+x164);

	if (t35 != 2147483519) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x166 = -2;
	int64_t x167 = -981926903LL;
	volatile uint32_t t36 = 151849233U;

	t36 = ((x165^(x166==x167))+x168);

	if (t36 != 2044240U) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x169 = -55;
	static uint64_t x170 = UINT64_MAX;
	int8_t x171 = INT8_MIN;
	static int32_t t37 = 13837;

	t37 = ((x169^(x170==x171))+x172);

	if (t37 != -27) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x173 = 1LL;
	int16_t x174 = INT16_MAX;
	int32_t x175 = 82;
	uint64_t x176 = 4110741LLU;
	uint64_t t38 = 137956LLU;

	t38 = ((x173^(x174==x175))+x176);

	if (t38 != 4110742LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x178 = -5612;
	int64_t x179 = -1LL;
	uint8_t x180 = 55U;
	int64_t t39 = 318LL;

	t39 = ((x177^(x178==x179))+x180);

	if (t39 != 54LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x185 = -1;
	int8_t x187 = INT8_MIN;
	uint32_t x188 = UINT32_MAX;
	uint32_t t40 = 595326717U;

	t40 = ((x185^(x186==x187))+x188);

	if (t40 != 4294967294U) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x193 = -8054915;
	int8_t x194 = INT8_MIN;
	uint16_t x195 = 102U;
	int32_t x196 = -1;
	volatile int32_t t41 = 388;

	t41 = ((x193^(x194==x195))+x196);

	if (t41 != -8054916) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x198 = 2U;
	uint64_t x200 = 0LLU;
	volatile uint64_t t42 = 1887423658840197LLU;

	t42 = ((x197^(x198==x199))+x200);

	if (t42 != 3475LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x201 = INT32_MIN;
	int64_t x202 = -4144022312481892869LL;
	volatile uint16_t x203 = UINT16_MAX;
	uint16_t x204 = UINT16_MAX;
	static volatile int32_t t43 = 1;

	t43 = ((x201^(x202==x203))+x204);

	if (t43 != -2147418113) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x207 = -1;
	volatile int32_t t44 = 57198;

	t44 = ((x205^(x206==x207))+x208);

	if (t44 != 254) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int16_t x209 = -6425;
	volatile int64_t x210 = INT64_MAX;
	int8_t x211 = -40;
	volatile int32_t t45 = -6;

	t45 = ((x209^(x210==x211))+x212);

	if (t45 != -6298) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x213 = -1;
	volatile int64_t x215 = -155539993114677633LL;
	int16_t x216 = -1;
	volatile int32_t t46 = 0;

	t46 = ((x213^(x214==x215))+x216);

	if (t46 != -2) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x221 = 10499LL;
	int32_t x222 = -1;
	int64_t x223 = INT64_MAX;
	volatile uint8_t x224 = UINT8_MAX;

	t47 = ((x221^(x222==x223))+x224);

	if (t47 != 10754LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x229 = 1954;
	volatile int16_t x230 = INT16_MIN;
	volatile int32_t x231 = INT32_MAX;
	int32_t x232 = -1;
	static volatile int32_t t48 = 31;

	t48 = ((x229^(x230==x231))+x232);

	if (t48 != 1953) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x237 = INT16_MAX;
	static int16_t x238 = INT16_MIN;
	int8_t x239 = -1;
	static uint8_t x240 = 0U;
	volatile int32_t t49 = -13364;

	t49 = ((x237^(x238==x239))+x240);

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x241 = 43265U;
	uint32_t x242 = 126U;
	volatile uint32_t x243 = UINT32_MAX;
	volatile uint64_t t50 = 977591162660278879LLU;

	t50 = ((x241^(x242==x243))+x244);

	if (t50 != 43278LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int32_t x245 = -1;
	static volatile uint8_t x246 = 1U;
	volatile uint32_t x247 = 4U;
	volatile int32_t t51 = 99;

	t51 = ((x245^(x246==x247))+x248);

	if (t51 != -32769) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x249 = INT64_MIN;
	int32_t x250 = -1;
	uint32_t x252 = 12854U;
	volatile int64_t t52 = 2585LL;

	t52 = ((x249^(x250==x251))+x252);

	if (t52 != -9223372036854762954LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x253 = -974;
	uint32_t x254 = UINT32_MAX;
	volatile uint16_t x255 = 21367U;
	int32_t x256 = 3438;
	volatile int32_t t53 = 40;

	t53 = ((x253^(x254==x255))+x256);

	if (t53 != 2464) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x257 = INT16_MAX;
	int32_t x258 = INT32_MIN;
	int8_t x259 = -11;
	static uint8_t x260 = UINT8_MAX;
	int32_t t54 = -22;

	t54 = ((x257^(x258==x259))+x260);

	if (t54 != 33022) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x261 = 4U;
	static uint32_t x262 = UINT32_MAX;
	volatile uint64_t x263 = UINT64_MAX;
	static int32_t x264 = -1;
	volatile int32_t t55 = -146746256;

	t55 = ((x261^(x262==x263))+x264);

	if (t55 != 3) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x265 = 0U;
	int16_t x266 = 15062;
	static int8_t x267 = INT8_MIN;
	volatile int32_t t56 = -7;

	t56 = ((x265^(x266==x267))+x268);

	if (t56 != -128) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x269 = INT8_MAX;
	int32_t x270 = 24;
	volatile uint32_t x271 = 53U;
	int32_t x272 = -95;
	int32_t t57 = -5997;

	t57 = ((x269^(x270==x271))+x272);

	if (t57 != 32) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x282 = 3U;
	static volatile int32_t x283 = INT32_MAX;
	int16_t x284 = INT16_MAX;
	uint64_t t58 = 49LLU;

	t58 = ((x281^(x282==x283))+x284);

	if (t58 != 2012820379185800LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x286 = 1;
	static uint32_t x287 = 85U;
	static int8_t x288 = -1;
	volatile int32_t t59 = 0;

	t59 = ((x285^(x286==x287))+x288);

	if (t59 != -32769) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x289 = INT16_MIN;
	static int8_t x290 = INT8_MIN;
	int8_t x291 = INT8_MIN;
	int32_t t60 = -1620507;

	t60 = ((x289^(x290==x291))+x292);

	if (t60 != -32640) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t t61 = 738719068U;

	t61 = ((x293^(x294==x295))+x296);

	if (t61 != 498280U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x297 = INT16_MIN;
	uint32_t x298 = 6135893U;
	uint8_t x299 = 71U;
	static volatile int64_t x300 = -617541899628155LL;
	int64_t t62 = -380382715LL;

	t62 = ((x297^(x298==x299))+x300);

	if (t62 != -617541899660923LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x301 = -328;
	uint64_t x302 = 466LLU;
	int32_t x303 = INT32_MIN;
	int16_t x304 = -1;
	volatile int32_t t63 = -381;

	t63 = ((x301^(x302==x303))+x304);

	if (t63 != -329) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x305 = 3472879494LLU;
	static int8_t x306 = -1;

	t64 = ((x305^(x306==x307))+x308);

	if (t64 != 3472879493LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x310 = INT8_MIN;
	int64_t x311 = INT64_MIN;
	uint16_t x312 = UINT16_MAX;
	static uint64_t t65 = 6548LLU;

	t65 = ((x309^(x310==x311))+x312);

	if (t65 != 65534LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x313 = 59207U;
	static int32_t x314 = -1;
	volatile uint32_t t66 = 0U;

	t66 = ((x313^(x314==x315))+x316);

	if (t66 != 59210U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x317 = -274;
	uint16_t x318 = 105U;
	int8_t x319 = INT8_MAX;
	uint16_t x320 = 236U;
	static volatile int32_t t67 = 23864860;

	t67 = ((x317^(x318==x319))+x320);

	if (t67 != -38) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x321 = INT16_MAX;
	static int32_t x322 = -1667;
	static uint64_t x323 = 8947686835666LLU;
	int32_t x324 = INT32_MIN;
	int32_t t68 = 1;

	t68 = ((x321^(x322==x323))+x324);

	if (t68 != -2147450881) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x325 = 31U;
	int32_t x326 = -1;
	int8_t x327 = INT8_MIN;
	volatile int32_t t69 = 1819933;

	t69 = ((x325^(x326==x327))+x328);

	if (t69 != -2147483617) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x330 = -1;
	int64_t x331 = -732LL;
	volatile int8_t x332 = 2;

	t70 = ((x329^(x330==x331))+x332);

	if (t70 != 56) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x333 = 25U;
	static int32_t x334 = -1;
	static uint8_t x335 = 3U;
	uint16_t x336 = 24U;
	static int32_t t71 = 205;

	t71 = ((x333^(x334==x335))+x336);

	if (t71 != 49) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x337 = INT8_MIN;
	volatile int64_t x338 = INT64_MIN;
	static int32_t x339 = INT32_MAX;
	int64_t x340 = 32271LL;
	int64_t t72 = -27249LL;

	t72 = ((x337^(x338==x339))+x340);

	if (t72 != 32143LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x341 = -9484584LL;
	uint64_t x342 = 22489558975LLU;
	volatile int64_t t73 = -53884150LL;

	t73 = ((x341^(x342==x343))+x344);

	if (t73 != -9484575LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x345 = INT8_MIN;
	uint16_t x347 = 37U;
	static int8_t x348 = -2;
	static volatile int32_t t74 = 55524;

	t74 = ((x345^(x346==x347))+x348);

	if (t74 != -130) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x349 = -219;
	uint8_t x350 = 5U;
	volatile int8_t x351 = INT8_MAX;
	static uint64_t x352 = UINT64_MAX;
	uint64_t t75 = 15357639451LLU;

	t75 = ((x349^(x350==x351))+x352);

	if (t75 != 18446744073709551396LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x353 = -1LL;
	uint8_t x354 = 119U;
	static volatile uint16_t x355 = UINT16_MAX;
	int8_t x356 = INT8_MIN;

	t76 = ((x353^(x354==x355))+x356);

	if (t76 != -129LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x357 = 28;
	static int8_t x358 = INT8_MIN;
	volatile int32_t t77 = -1;

	t77 = ((x357^(x358==x359))+x360);

	if (t77 != 283) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x361 = INT16_MIN;
	uint8_t x362 = UINT8_MAX;
	int64_t x364 = 41099455LL;
	volatile int64_t t78 = -9097477478LL;

	t78 = ((x361^(x362==x363))+x364);

	if (t78 != 41066687LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x365 = 63;
	int32_t x367 = -1;
	int32_t t79 = 754;

	t79 = ((x365^(x366==x367))+x368);

	if (t79 != 52) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x373 = -1;
	int16_t x374 = INT16_MIN;
	int8_t x376 = 2;
	int32_t t80 = 458047;

	t80 = ((x373^(x374==x375))+x376);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x377 = -1LL;
	int64_t x378 = -1LL;
	volatile int64_t x379 = INT64_MAX;
	static int64_t t81 = -121990714851LL;

	t81 = ((x377^(x378==x379))+x380);

	if (t81 != 12LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x382 = INT16_MIN;
	static int16_t x383 = INT16_MIN;
	int32_t x384 = 260603;
	int64_t t82 = -318939LL;

	t82 = ((x381^(x382==x383))+x384);

	if (t82 != 260563LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x385 = 29;
	int8_t x387 = -1;

	t83 = ((x385^(x386==x387))+x388);

	if (t83 != 83) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x392 = INT16_MIN;
	volatile int32_t t84 = -1;

	t84 = ((x389^(x390==x391))+x392);

	if (t84 != -32762) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x394 = -1;
	int8_t x395 = 1;
	int32_t x396 = -1;

	t85 = ((x393^(x394==x395))+x396);

	if (t85 != -7106796616442LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x397 = INT64_MIN;
	volatile int64_t x398 = 471490142203109LL;
	int64_t x399 = -55LL;
	uint8_t x400 = 2U;
	volatile int64_t t86 = 19060547502225680LL;

	t86 = ((x397^(x398==x399))+x400);

	if (t86 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x401 = INT8_MIN;
	uint64_t x402 = 133073869683938LLU;
	static int64_t x403 = -15267LL;
	static uint8_t x404 = 1U;
	static int32_t t87 = 41270;

	t87 = ((x401^(x402==x403))+x404);

	if (t87 != -127) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x405 = 0LLU;
	static volatile uint32_t x406 = 17936U;
	uint8_t x407 = 34U;
	int32_t x408 = -1;
	uint64_t t88 = UINT64_MAX;

	t88 = ((x405^(x406==x407))+x408);

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x409 = 10387;
	int8_t x410 = -2;
	int64_t x412 = -1LL;

	t89 = ((x409^(x410==x411))+x412);

	if (t89 != 10386LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x413 = 326LL;
	static int32_t x414 = INT32_MIN;
	uint64_t x415 = 1LLU;
	int32_t x416 = 0;
	volatile int64_t t90 = -99945590721233LL;

	t90 = ((x413^(x414==x415))+x416);

	if (t90 != 326LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x417 = -1LL;
	int32_t x418 = INT32_MAX;
	uint64_t x419 = UINT64_MAX;
	volatile uint8_t x420 = 1U;

	t91 = ((x417^(x418==x419))+x420);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x421 = INT32_MIN;
	int32_t x423 = INT32_MIN;
	volatile uint64_t x424 = 114554247459199LLU;
	uint64_t t92 = 5242602127LLU;

	t92 = ((x421^(x422==x423))+x424);

	if (t92 != 114552099975551LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x425 = 1U;
	static volatile uint16_t x426 = 91U;
	uint32_t x428 = UINT32_MAX;
	volatile uint32_t t93 = 17962667U;

	t93 = ((x425^(x426==x427))+x428);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x429 = INT16_MIN;
	volatile int32_t x430 = -1;
	uint8_t x431 = UINT8_MAX;
	static int8_t x432 = INT8_MIN;

	t94 = ((x429^(x430==x431))+x432);

	if (t94 != -32896) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x433 = 1;
	uint16_t x434 = UINT16_MAX;
	volatile int64_t x435 = -1LL;
	static volatile int32_t t95 = 25070;

	t95 = ((x433^(x434==x435))+x436);

	if (t95 != 65536) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x437 = INT16_MIN;
	uint8_t x438 = 3U;
	volatile int64_t x439 = -949LL;
	int32_t x440 = -71919;

	t96 = ((x437^(x438==x439))+x440);

	if (t96 != -104687) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x442 = INT32_MIN;
	uint8_t x443 = 0U;
	int8_t x444 = INT8_MIN;
	static int32_t t97 = -6314584;

	t97 = ((x441^(x442==x443))+x444);

	if (t97 != -256) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x445 = -30;
	uint64_t x446 = UINT64_MAX;
	static int32_t x447 = -1534;
	int32_t x448 = INT32_MAX;

	t98 = ((x445^(x446==x447))+x448);

	if (t98 != 2147483617) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x453 = INT8_MIN;
	static int64_t x454 = INT64_MIN;
	static volatile int32_t x455 = 1985;

	t99 = ((x453^(x454==x455))+x456);

	if (t99 != -69) { NG(); } else { ; }
	
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

