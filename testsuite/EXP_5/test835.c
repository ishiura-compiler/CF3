#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = -60;
static uint16_t x10 = 3384U;
volatile int16_t x12 = 12;
static int64_t t1 = -36432415LL;
int64_t x24 = -3603725LL;
int8_t x25 = -1;
volatile int32_t x26 = -1461;
int32_t x27 = INT32_MAX;
uint64_t t4 = 34256LLU;
int16_t x29 = INT16_MAX;
volatile int64_t x30 = INT64_MIN;
uint64_t x39 = 572862489699LLU;
int64_t x42 = 2LL;
int16_t x53 = INT16_MIN;
static int16_t x56 = INT16_MAX;
int32_t t9 = 15;
static int16_t x63 = -8172;
int32_t t10 = -1995;
int32_t x67 = -637;
uint32_t x74 = 665353915U;
int16_t x75 = INT16_MAX;
int64_t x83 = 6112563635LL;
int8_t x95 = INT8_MAX;
int32_t x96 = -661;
uint64_t t18 = 14110614LLU;
int32_t x106 = -1;
int64_t x113 = -1LL;
volatile uint16_t x115 = 210U;
static int64_t x116 = -212538LL;
uint32_t x118 = 7406U;
int16_t x119 = INT16_MIN;
int32_t x125 = -1;
int16_t x128 = 0;
volatile uint64_t x134 = UINT64_MAX;
int16_t x138 = -1;
int32_t x145 = -1;
int32_t x146 = INT32_MAX;
int16_t x147 = INT16_MIN;
int32_t x149 = 0;
volatile int64_t x159 = INT64_MIN;
volatile int16_t x179 = -3;
int8_t x180 = INT8_MAX;
int32_t x195 = -1;
volatile int32_t x203 = INT32_MIN;
uint32_t x205 = 1U;
uint8_t x211 = 3U;
volatile uint32_t t43 = 16233U;
uint16_t x229 = 256U;
volatile int32_t x232 = 1849044;
static int32_t x247 = -1;
static volatile int64_t x248 = 8178712LL;
int64_t t47 = 2LL;
int16_t x259 = 4055;
volatile int16_t x262 = 1624;
static int16_t x263 = INT16_MIN;
int16_t x268 = 140;
int64_t x271 = -1LL;
volatile int64_t x272 = -1LL;
uint8_t x274 = 0U;
int64_t x282 = -1LL;
int32_t x284 = INT32_MAX;
int64_t t54 = -91929979461742LL;
static int8_t x286 = INT8_MIN;
int16_t x288 = -5582;
volatile int32_t t55 = 9348;
int8_t x294 = INT8_MIN;
int64_t x296 = -1LL;
volatile int64_t t58 = 4483639425755866LL;
static volatile int64_t x304 = -1LL;
int32_t x311 = INT32_MIN;
uint16_t x313 = 7U;
int64_t x316 = 2273318360LL;
uint8_t x321 = 17U;
static int64_t x323 = -1LL;
uint16_t x331 = 889U;
int8_t x332 = -1;
static volatile int64_t x336 = 184LL;
volatile int64_t t65 = -2240LL;
int64_t x337 = -27255040379586LL;
uint8_t x341 = 60U;
volatile int64_t t67 = 14154354522436LL;
static volatile int16_t x354 = INT16_MAX;
volatile uint32_t x357 = 843360548U;
static volatile uint64_t x363 = UINT64_MAX;
volatile int8_t x373 = INT8_MIN;
uint16_t x381 = 595U;
uint8_t x383 = 5U;
int8_t x388 = INT8_MIN;
uint32_t t76 = 6U;
int32_t x396 = INT32_MIN;
int64_t t77 = 5LL;
volatile int16_t x401 = -1;
int32_t x403 = -1;
volatile uint32_t t79 = 7U;
uint32_t t80 = 418U;
uint64_t x413 = 2006091523866LLU;
static int32_t x414 = -13108;
uint32_t x415 = UINT32_MAX;
int64_t x419 = INT64_MAX;
uint8_t x421 = 63U;
uint16_t x437 = UINT16_MAX;
volatile uint32_t x447 = 479U;
static uint64_t t87 = 457587LLU;
uint16_t x455 = 398U;
int64_t x458 = 164744430046888LL;
static int64_t x475 = INT64_MAX;
volatile int64_t t92 = -6594764587LL;
static int64_t x479 = -199LL;
volatile int16_t x480 = -3;
int8_t x481 = INT8_MIN;
uint16_t x484 = 0U;
static int64_t x489 = -9261616843LL;
int8_t x494 = INT8_MIN;
volatile uint16_t x519 = UINT16_MAX;


void f0(void) {
	int32_t x1 = INT32_MAX;
	uint32_t x2 = 31U;
	int16_t x3 = -1;
	uint32_t t0 = 621278U;

	t0 = (x1*((x2%x3)^x4));

	if (t0 != 2147483685U) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x9 = -1;
	int64_t x11 = INT64_MAX;

	t1 = (x9*((x10%x11)^x12));

	if (t1 != -3380LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = INT8_MAX;
	volatile int16_t x18 = -14706;
	int8_t x19 = INT8_MIN;
	static volatile int32_t x20 = 672;
	int32_t t2 = 684;

	t2 = (x17*((x18%x19)^x20));

	if (t2 != -91694) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x21 = 2511U;
	int8_t x22 = INT8_MIN;
	volatile uint64_t x23 = UINT64_MAX;
	uint64_t t3 = 747824LLU;

	t3 = (x21*((x22%x23)^x24));

	if (t3 != 9049209597LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x28 = 14948LLU;

	t4 = (x25*((x26%x27)^x28));

	if (t4 != 16337LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x31 = UINT16_MAX;
	int16_t x32 = INT16_MAX;
	volatile int64_t t5 = -904757060354LL;

	t5 = (x29*((x30%x31)^x32));

	if (t5 != -32767LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = -1;
	int16_t x34 = 243;
	uint32_t x35 = UINT32_MAX;
	static int16_t x36 = -1;
	uint32_t t6 = 2U;

	t6 = (x33*((x34%x35)^x36));

	if (t6 != 244U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = 27;
	static int8_t x38 = INT8_MAX;
	static uint16_t x40 = UINT16_MAX;
	static volatile uint64_t t7 = 55LLU;

	t7 = (x37*((x38%x39)^x40));

	if (t7 != 1766016LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint8_t x41 = 5U;
	uint32_t x43 = UINT32_MAX;
	uint8_t x44 = 30U;
	volatile int64_t t8 = 248154870766LL;

	t8 = (x41*((x42%x43)^x44));

	if (t8 != 140LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint8_t x54 = 1U;
	volatile int16_t x55 = INT16_MAX;

	t9 = (x53*((x54%x55)^x56));

	if (t9 != -1073676288) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x61 = 0;
	static int16_t x62 = 1786;
	int16_t x64 = 0;

	t10 = (x61*((x62%x63)^x64));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x65 = 36;
	int64_t x66 = INT64_MAX;
	volatile int8_t x68 = INT8_MIN;
	int64_t t11 = 66354365954LL;

	t11 = (x65*((x66%x67)^x68));

	if (t11 != -1080LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x69 = INT8_MAX;
	uint8_t x70 = 1U;
	int16_t x71 = INT16_MIN;
	static int64_t x72 = -1LL;
	volatile int64_t t12 = -26LL;

	t12 = (x69*((x70%x71)^x72));

	if (t12 != -254LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x73 = 18U;
	volatile int8_t x76 = -1;
	uint32_t t13 = 232669U;

	t13 = (x73*((x74%x75)^x76));

	if (t13 != 4294607638U) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x81 = UINT8_MAX;
	int8_t x82 = INT8_MIN;
	static int8_t x84 = INT8_MIN;
	int64_t t14 = -452885378262LL;

	t14 = (x81*((x82%x83)^x84));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x85 = 51U;
	volatile int32_t x86 = INT32_MAX;
	int32_t x87 = -917;
	int8_t x88 = INT8_MIN;
	volatile uint32_t t15 = 452017U;

	t15 = (x85*((x86%x87)^x88));

	if (t15 != 4294922110U) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint16_t x93 = 6022U;
	int32_t x94 = INT32_MIN;
	volatile int32_t t16 = 101012;

	t16 = (x93*((x94%x95)^x96));

	if (t16 != 3968498) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x97 = INT8_MIN;
	uint32_t x98 = 6096457U;
	static uint64_t x99 = UINT64_MAX;
	static int32_t x100 = 95;
	volatile uint64_t t17 = 1007LLU;

	t17 = (x97*((x98%x99)^x100));

	if (t17 != 18446744072929211648LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x101 = INT16_MIN;
	uint64_t x102 = UINT64_MAX;
	static int32_t x103 = INT32_MIN;
	uint16_t x104 = 16764U;

	t18 = (x101*((x102%x103)^x104));

	if (t18 != 18446673705514729472LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x105 = 2U;
	static int32_t x107 = INT32_MIN;
	int64_t x108 = -38LL;
	static volatile int64_t t19 = -8284LL;

	t19 = (x105*((x106%x107)^x108));

	if (t19 != 74LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x114 = UINT16_MAX;
	static volatile int64_t t20 = -822031368LL;

	t20 = (x113*((x114%x115)^x116));

	if (t20 != 212535LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x117 = 9991970LL;
	int16_t x120 = 82;
	int64_t t21 = -29325LL;

	t21 = (x117*((x118%x119)^x120));

	if (t21 != 73500931320LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x126 = 3;
	uint8_t x127 = UINT8_MAX;
	static int32_t t22 = -1;

	t22 = (x125*((x126%x127)^x128));

	if (t22 != -3) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x129 = UINT16_MAX;
	static int16_t x130 = INT16_MIN;
	static int64_t x131 = -1LL;
	int32_t x132 = 62999;
	static int64_t t23 = 2484LL;

	t23 = (x129*((x130%x131)^x132));

	if (t23 != 4128639465LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x133 = 6861;
	uint16_t x135 = 8736U;
	static int8_t x136 = -6;
	volatile uint64_t t24 = 26905953LLU;

	t24 = (x133*((x134%x135)^x136));

	if (t24 != 18446744073679507297LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x137 = 3;
	int16_t x139 = -1;
	uint64_t x140 = UINT64_MAX;
	static uint64_t t25 = 505517908369LLU;

	t25 = (x137*((x138%x139)^x140));

	if (t25 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x141 = 0U;
	uint16_t x142 = 5U;
	uint8_t x143 = 9U;
	int32_t x144 = INT32_MIN;
	int32_t t26 = 2215;

	t26 = (x141*((x142%x143)^x144));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x148 = -10;
	volatile int32_t t27 = -289470;

	t27 = (x145*((x146%x147)^x148));

	if (t27 != 32759) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x150 = INT8_MIN;
	int32_t x151 = INT32_MAX;
	int32_t x152 = INT32_MAX;
	static int32_t t28 = 2854;

	t28 = (x149*((x150%x151)^x152));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x153 = 12LLU;
	int16_t x154 = INT16_MAX;
	uint32_t x155 = 447063581U;
	volatile uint8_t x156 = 5U;
	uint64_t t29 = 8844730667LLU;

	t29 = (x153*((x154%x155)^x156));

	if (t29 != 393144LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x157 = UINT32_MAX;
	static volatile uint64_t x158 = 53LLU;
	uint8_t x160 = 1U;
	volatile uint64_t t30 = 1456015002607LLU;

	t30 = (x157*((x158%x159)^x160));

	if (t30 != 223338299340LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x165 = 1;
	static int64_t x166 = INT64_MIN;
	uint16_t x167 = UINT16_MAX;
	int16_t x168 = 452;
	volatile int64_t t31 = 1953139231693572LL;

	t31 = (x165*((x166%x167)^x168));

	if (t31 != -32316LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x173 = 5U;
	static int32_t x174 = 49131;
	int64_t x175 = 2534LL;
	static volatile int32_t x176 = INT32_MAX;
	int64_t t32 = 6LL;

	t32 = (x173*((x174%x175)^x176));

	if (t32 != 10737413310LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x177 = UINT8_MAX;
	uint8_t x178 = 2U;
	volatile int32_t t33 = -930384525;

	t33 = (x177*((x178%x179)^x180));

	if (t33 != 31875) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x181 = INT8_MIN;
	int16_t x182 = INT16_MAX;
	uint16_t x183 = 13265U;
	int32_t x184 = 0;
	int32_t t34 = -140969750;

	t34 = (x181*((x182%x183)^x184));

	if (t34 != -798336) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x185 = -1;
	static uint32_t x186 = UINT32_MAX;
	int64_t x187 = 853050LL;
	int8_t x188 = 4;
	volatile int64_t t35 = -2LL;

	t35 = (x185*((x186%x187)^x188));

	if (t35 != -713599LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x189 = INT8_MAX;
	static int64_t x190 = INT64_MAX;
	volatile uint8_t x191 = 61U;
	static uint64_t x192 = 182155295LLU;
	static volatile uint64_t t36 = 1646LLU;

	t36 = (x189*((x190%x191)^x192));

	if (t36 != 23133721576LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x193 = INT16_MIN;
	static int16_t x194 = -1;
	static int8_t x196 = -13;
	int32_t t37 = 1187;

	t37 = (x193*((x194%x195)^x196));

	if (t37 != 425984) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x197 = -1;
	volatile uint32_t x198 = 89U;
	int32_t x199 = -1;
	uint8_t x200 = UINT8_MAX;
	volatile uint32_t t38 = 254795U;

	t38 = (x197*((x198%x199)^x200));

	if (t38 != 4294967130U) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x201 = 652LLU;
	uint64_t x202 = UINT64_MAX;
	volatile int64_t x204 = 581876116LL;
	volatile uint64_t t39 = 2082338861464811LLU;

	t39 = (x201*((x202%x203)^x204));

	if (t39 != 1020776110212LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x206 = -8;
	static int64_t x207 = -17LL;
	volatile int64_t x208 = INT64_MAX;
	int64_t t40 = -13216LL;

	t40 = (x205*((x206%x207)^x208));

	if (t40 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x209 = INT64_MAX;
	volatile uint32_t x210 = UINT32_MAX;
	int64_t x212 = -1LL;
	int64_t t41 = 14721802241LL;

	t41 = (x209*((x210%x211)^x212));

	if (t41 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x213 = 216U;
	int16_t x214 = -242;
	uint8_t x215 = 99U;
	uint8_t x216 = UINT8_MAX;
	volatile int32_t t42 = -1;

	t42 = (x213*((x214%x215)^x216));

	if (t42 != -46008) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x217 = UINT32_MAX;
	static uint16_t x218 = UINT16_MAX;
	volatile uint32_t x219 = 2077625425U;
	volatile int16_t x220 = INT16_MIN;

	t43 = (x217*((x218%x219)^x220));

	if (t43 != 32769U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x221 = INT32_MAX;
	int16_t x222 = INT16_MIN;
	uint32_t x223 = 2991923U;
	static int8_t x224 = INT8_MIN;
	volatile uint32_t t44 = 32573107U;

	t44 = (x221*((x222%x223)^x224));

	if (t44 != 2149008737U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x230 = -1;
	static int64_t x231 = INT64_MIN;
	volatile int64_t t45 = 854806861190LL;

	t45 = (x229*((x230%x231)^x232));

	if (t45 != -473355520LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x237 = -1119014121993203LL;
	int16_t x238 = INT16_MIN;
	static int64_t x239 = -1LL;
	int32_t x240 = 51;
	volatile int64_t t46 = -423534275494602LL;

	t46 = (x237*((x238%x239)^x240));

	if (t46 != -57069720221653353LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint32_t x245 = 1724626U;
	int8_t x246 = INT8_MIN;

	t47 = (x245*((x246%x247)^x248));

	if (t47 != 14105219361712LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x249 = INT16_MAX;
	volatile uint64_t x250 = UINT64_MAX;
	volatile int32_t x251 = 5;
	volatile int32_t x252 = INT32_MIN;
	uint64_t t48 = 56914188634LLU;

	t48 = (x249*((x250%x251)^x252));

	if (t48 != 18446673707112857600LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x257 = -1LL;
	int8_t x258 = -11;
	volatile uint64_t x260 = UINT64_MAX;
	static uint64_t t49 = 331565731526382LLU;

	t49 = (x257*((x258%x259)^x260));

	if (t49 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x261 = 984LLU;
	static uint8_t x264 = 52U;
	static volatile uint64_t t50 = 23281LLU;

	t50 = (x261*((x262%x263)^x264));

	if (t50 != 1617696LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x265 = 5034U;
	static volatile int8_t x266 = -1;
	uint16_t x267 = UINT16_MAX;
	uint32_t t51 = 2824164U;

	t51 = (x265*((x266%x267)^x268));

	if (t51 != 4294257502U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x269 = -1;
	uint32_t x270 = 50196229U;
	int64_t t52 = -123804759169LL;

	t52 = (x269*((x270%x271)^x272));

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x273 = -1LL;
	int32_t x275 = INT32_MIN;
	int16_t x276 = INT16_MAX;
	int64_t t53 = 5173123LL;

	t53 = (x273*((x274%x275)^x276));

	if (t53 != -32767LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x281 = INT32_MIN;
	static int8_t x283 = -44;

	t54 = (x281*((x282%x283)^x284));

	if (t54 != 4611686018427387904LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x285 = 4279;
	static int32_t x287 = -13524395;

	t55 = (x285*((x286%x287)^x288));

	if (t55 != 23765566) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x289 = INT32_MAX;
	int32_t x290 = -292;
	uint64_t x291 = 132010043021LLU;
	int8_t x292 = INT8_MIN;
	volatile uint64_t t56 = 83962334446LLU;

	t56 = (x289*((x290%x291)^x292));

	if (t56 != 760045467557399925LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x293 = -1;
	volatile int8_t x295 = INT8_MIN;
	volatile int64_t t57 = -127016084809LL;

	t57 = (x293*((x294%x295)^x296));

	if (t57 != 1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x297 = INT16_MIN;
	static int16_t x298 = 28;
	int64_t x299 = INT64_MIN;
	int64_t x300 = -107586LL;

	t58 = (x297*((x298%x299)^x300));

	if (t58 != 3526295552LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x301 = INT16_MAX;
	int64_t x302 = 90174958504723383LL;
	int8_t x303 = INT8_MIN;
	volatile int64_t t59 = 30756697591344687LL;

	t59 = (x301*((x302%x303)^x304));

	if (t59 != -1834952LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x305 = -1;
	int32_t x306 = INT32_MAX;
	static int64_t x307 = INT64_MAX;
	uint64_t x308 = UINT64_MAX;
	uint64_t t60 = 60115224865637372LLU;

	t60 = (x305*((x306%x307)^x308));

	if (t60 != 2147483648LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x309 = 93249;
	int64_t x310 = -1LL;
	int16_t x312 = -224;
	volatile int64_t t61 = 0LL;

	t61 = (x309*((x310%x311)^x312));

	if (t61 != 20794527LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x314 = INT32_MIN;
	int32_t x315 = 13894;
	int64_t t62 = 20762LL;

	t62 = (x313*((x314%x315)^x316));

	if (t62 != -15913259054LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x322 = INT8_MIN;
	volatile int16_t x324 = INT16_MAX;
	static volatile int64_t t63 = 1566840286823155LL;

	t63 = (x321*((x322%x323)^x324));

	if (t63 != 557039LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x329 = INT16_MIN;
	int16_t x330 = 7990;
	int32_t t64 = -117098033;

	t64 = (x329*((x330%x331)^x332));

	if (t64 != 28803072) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x333 = 25;
	static int8_t x334 = INT8_MIN;
	static volatile uint16_t x335 = 853U;

	t65 = (x333*((x334%x335)^x336));

	if (t65 != -5000LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x338 = 11747LLU;
	int16_t x339 = INT16_MIN;
	uint8_t x340 = UINT8_MAX;
	uint64_t t66 = 1185538485191519LLU;

	t66 = (x337*((x338%x339)^x340));

	if (t66 != 18132002867406092488LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x342 = 0;
	int32_t x343 = -348138064;
	volatile int64_t x344 = 62717437627018091LL;

	t67 = (x341*((x342%x343)^x344));

	if (t67 != 3763046257621085460LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x345 = 5;
	int16_t x346 = INT16_MIN;
	int64_t x347 = -1LL;
	int32_t x348 = INT32_MIN;
	int64_t t68 = 7LL;

	t68 = (x345*((x346%x347)^x348));

	if (t68 != -10737418240LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x349 = -4349;
	uint32_t x350 = 23361297U;
	int8_t x351 = -6;
	volatile uint8_t x352 = 49U;
	uint32_t t69 = 0U;

	t69 = (x349*((x350%x351)^x352));

	if (t69 != 1480869216U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint16_t x353 = 151U;
	static volatile uint8_t x355 = UINT8_MAX;
	volatile uint64_t x356 = 4239732205529284966LLU;
	uint64_t t70 = 37161992471361LLU;

	t70 = (x353*((x354%x355)^x356));

	if (t70 != 13010264528797263295LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x358 = 1;
	int16_t x359 = INT16_MAX;
	volatile uint32_t x360 = 3130080U;
	volatile uint32_t t71 = 6U;

	t71 = (x357*((x358%x359)^x360));

	if (t71 != 1143074980U) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x361 = 2912590U;
	int32_t x362 = INT32_MIN;
	uint32_t x364 = UINT32_MAX;
	uint64_t t72 = 2255416296121066310LLU;

	t72 = (x361*((x362%x363)^x364));

	if (t72 != 18440489334308310706LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x365 = -1;
	uint8_t x366 = 26U;
	int64_t x367 = -1LL;
	volatile int16_t x368 = INT16_MIN;
	int64_t t73 = -4538186224267LL;

	t73 = (x365*((x366%x367)^x368));

	if (t73 != 32768LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x374 = 265351U;
	uint64_t x375 = 5824439609935520LLU;
	int16_t x376 = INT16_MAX;
	uint64_t t74 = 639809LLU;

	t74 = (x373*((x374%x375)^x376));

	if (t74 != 18446744073672213504LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x382 = UINT8_MAX;
	uint32_t x384 = 523U;
	volatile uint32_t t75 = 441U;

	t75 = (x381*((x382%x383)^x384));

	if (t75 != 311185U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x385 = 156903U;
	int32_t x386 = -7;
	uint32_t x387 = UINT32_MAX;

	t76 = (x385*((x386%x387)^x388));

	if (t76 != 18985263U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x393 = 3;
	static int64_t x394 = -315082434LL;
	uint16_t x395 = 14U;

	t77 = (x393*((x394%x395)^x396));

	if (t77 != 6442450938LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x397 = -1;
	int8_t x398 = -1;
	static uint32_t x399 = 2394889U;
	uint8_t x400 = UINT8_MAX;
	uint32_t t78 = 74U;

	t78 = (x397*((x398%x399)^x400));

	if (t78 != 4294036215U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x402 = INT32_MIN;
	uint32_t x404 = 468U;

	t79 = (x401*((x402%x403)^x404));

	if (t79 != 4294966828U) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x409 = 835293756U;
	int32_t x410 = -1;
	uint8_t x411 = 4U;
	static int8_t x412 = INT8_MIN;

	t80 = (x409*((x410%x411)^x412));

	if (t80 != 3003091908U) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x416 = UINT16_MAX;
	uint64_t t81 = 268LLU;

	t81 = (x413*((x414%x415)^x416));

	if (t81 != 1362827992408111150LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x417 = INT8_MIN;
	int16_t x418 = -1;
	static int64_t x420 = 6964202801LL;
	volatile int64_t t82 = 106843LL;

	t82 = (x417*((x418%x419)^x420));

	if (t82 != 891417958656LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x422 = 1431061330U;
	volatile int16_t x423 = INT16_MIN;
	int8_t x424 = -8;
	static volatile uint32_t t83 = 4910U;

	t83 = (x421*((x422%x423)^x424));

	if (t83 != 37449174U) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x425 = 772869869U;
	uint64_t x426 = UINT64_MAX;
	uint64_t x427 = UINT64_MAX;
	int8_t x428 = INT8_MAX;
	volatile uint64_t t84 = 76371773202287191LLU;

	t84 = (x425*((x426%x427)^x428));

	if (t84 != 98154473363LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x429 = -1LL;
	uint32_t x430 = 3U;
	uint32_t x431 = 1U;
	int64_t x432 = -7130765641LL;
	volatile int64_t t85 = 239176032196663LL;

	t85 = (x429*((x430%x431)^x432));

	if (t85 != 7130765641LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x438 = 8695U;
	static volatile int32_t x439 = -1;
	uint8_t x440 = 42U;
	volatile int32_t t86 = -15;

	t86 = (x437*((x438%x439)^x440));

	if (t86 != 2752470) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x445 = INT8_MAX;
	volatile int8_t x446 = 0;
	static volatile uint64_t x448 = 520806LLU;

	t87 = (x445*((x446%x447)^x448));

	if (t87 != 66142362LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x449 = 24;
	int8_t x450 = -1;
	int8_t x451 = 21;
	int8_t x452 = INT8_MIN;
	static volatile int32_t t88 = 3356;

	t88 = (x449*((x450%x451)^x452));

	if (t88 != 3048) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x453 = UINT64_MAX;
	static int32_t x454 = -1;
	uint16_t x456 = 158U;
	volatile uint64_t t89 = 4463LLU;

	t89 = (x453*((x454%x455)^x456));

	if (t89 != 159LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x457 = INT32_MIN;
	uint32_t x459 = 21590550U;
	int16_t x460 = 9601;
	int64_t t90 = -109805303137LL;

	t90 = (x457*((x458%x459)^x460));

	if (t90 != -11352506948911104LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x465 = INT32_MAX;
	int32_t x466 = -264898228;
	int32_t x467 = INT32_MIN;
	uint32_t x468 = 51226U;
	volatile uint32_t t91 = 1U;

	t91 = (x465*((x466%x467)^x468));

	if (t91 != 264949418U) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x473 = 27302374LL;
	static int8_t x474 = INT8_MIN;
	uint8_t x476 = UINT8_MAX;

	t92 = (x473*((x474%x475)^x476));

	if (t92 != -3522006246LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x477 = INT16_MAX;
	volatile uint64_t x478 = 3924LLU;
	volatile uint64_t t93 = 3LLU;

	t93 = (x477*((x478%x479)^x480));

	if (t93 != 18446744073580875607LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x482 = UINT32_MAX;
	uint16_t x483 = 2U;
	volatile uint32_t t94 = 753U;

	t94 = (x481*((x482%x483)^x484));

	if (t94 != 4294967168U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x490 = 3488U;
	static int16_t x491 = -1;
	uint32_t x492 = 150621786U;
	volatile int64_t t95 = -171LL;

	t95 = (x489*((x490%x491)^x492));

	if (t95 != -1395001270140341598LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x493 = 5937U;
	static int64_t x495 = 116LL;
	int64_t x496 = 811099737220LL;
	static volatile int64_t t96 = -1266448381930005207LL;

	t96 = (x493*((x494%x495)^x496));

	if (t96 != -4815499139946384LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x497 = 37LLU;
	static uint16_t x498 = 2U;
	int64_t x499 = -1LL;
	static uint16_t x500 = UINT16_MAX;
	volatile uint64_t t97 = 9344LLU;

	t97 = (x497*((x498%x499)^x500));

	if (t97 != 2424795LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x513 = UINT32_MAX;
	volatile int16_t x514 = 1093;
	int32_t x515 = INT32_MIN;
	static volatile int32_t x516 = INT32_MIN;
	volatile uint32_t t98 = 37U;

	t98 = (x513*((x514%x515)^x516));

	if (t98 != 2147482555U) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x517 = INT32_MIN;
	volatile uint64_t x518 = 617328LLU;
	uint16_t x520 = 189U;
	static volatile uint64_t t99 = 32465201362493917LLU;

	t99 = (x517*((x518%x519)^x520));

	if (t99 != 18446684828930670592LLU) { NG(); } else { ; }
	
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

