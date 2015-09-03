#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x3 = INT64_MIN;
int32_t t0 = -1698;
static int64_t x10 = INT64_MIN;
volatile int32_t t2 = 1;
int32_t x15 = INT32_MAX;
static int32_t x18 = 716102;
uint64_t x23 = UINT64_MAX;
static int16_t x27 = INT16_MIN;
int16_t x31 = INT16_MIN;
static volatile int8_t x35 = 3;
int16_t x39 = 5619;
uint64_t x42 = 188404953571028LLU;
uint8_t x44 = 35U;
volatile int32_t t10 = -4883688;
int32_t x47 = 12788;
int8_t x50 = INT8_MIN;
uint8_t x51 = 35U;
static volatile int32_t x52 = INT32_MAX;
uint8_t x60 = 99U;
int64_t x66 = -1LL;
uint32_t x73 = UINT32_MAX;
int64_t x74 = INT64_MIN;
static int64_t x80 = -1LL;
static uint64_t x81 = 16191903040LLU;
uint64_t x84 = 9731738861LLU;
volatile uint16_t x85 = 76U;
int32_t x97 = INT32_MIN;
uint64_t x98 = UINT64_MAX;
uint16_t x99 = UINT16_MAX;
int8_t x101 = INT8_MAX;
int8_t x110 = -1;
int32_t t31 = 149346;
int8_t x132 = 0;
static int64_t x133 = -23571832LL;
int32_t x137 = 228275078;
int32_t t34 = -888037;
uint8_t x141 = UINT8_MAX;
volatile int32_t t35 = -9089148;
static int64_t x149 = INT64_MIN;
int16_t x156 = 6;
static int32_t t38 = 19140;
static volatile int32_t x163 = INT32_MIN;
int16_t x164 = INT16_MIN;
int8_t x165 = 1;
volatile int16_t x171 = -3;
int8_t x175 = INT8_MIN;
int16_t x179 = INT16_MIN;
uint64_t t44 = 0LLU;
static int32_t t48 = -2;
uint16_t x199 = 2U;
int32_t x203 = -794259751;
volatile int32_t t50 = 7984405;
int64_t x210 = INT64_MIN;
static int8_t x214 = -1;
volatile int32_t x216 = -1;
int8_t x221 = INT8_MAX;
int16_t x223 = -1;
volatile uint64_t x225 = 68346648881890902LLU;
volatile uint64_t x232 = UINT64_MAX;
static volatile int32_t t57 = 260185969;
uint64_t x244 = UINT64_MAX;
volatile uint64_t t60 = UINT64_MAX;
int8_t x245 = INT8_MIN;
static uint32_t x246 = 108U;
int8_t x247 = INT8_MIN;
volatile int16_t x249 = INT16_MIN;
int8_t x263 = -33;
uint8_t x264 = UINT8_MAX;
int32_t x268 = INT32_MIN;
static volatile int16_t x272 = INT16_MIN;
static int64_t x274 = INT64_MIN;
static uint32_t x275 = 98859U;
int64_t x276 = 136LL;
int32_t x284 = INT32_MIN;
volatile int16_t x285 = INT16_MIN;
volatile int32_t t71 = -164;
static int8_t x290 = INT8_MIN;
uint64_t x293 = UINT64_MAX;
uint64_t x294 = UINT64_MAX;
int32_t t75 = 464;
volatile uint8_t x306 = 6U;
int16_t x310 = INT16_MAX;
int16_t x311 = INT16_MIN;
static int32_t t77 = -4195640;
static int8_t x316 = 28;
int8_t x317 = -6;
int64_t x319 = INT64_MAX;
static int16_t x321 = 6;
volatile int8_t x325 = -1;
int16_t x329 = -1;
static int64_t x339 = 153672LL;
int16_t x343 = INT16_MIN;
uint16_t x344 = UINT16_MAX;
volatile int32_t t86 = INT32_MIN;
uint64_t x354 = 128164179728758LLU;
int32_t t89 = -23942;
int8_t x363 = INT8_MIN;
int16_t x370 = 1;
volatile int32_t x371 = -67360;
int32_t x372 = 27170527;
int32_t x375 = -1816220;
volatile int64_t t93 = INT64_MAX;
int64_t x378 = 0LL;
int16_t x387 = INT16_MIN;
int8_t x390 = INT8_MAX;
int32_t t97 = -590;


void f0(void) {
	volatile int8_t x1 = INT8_MIN;
	int8_t x2 = -1;
	int64_t x4 = 1618889008377173LL;

	t0 = (x1|((x2^x3)<=x4));

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = -33;
	static int8_t x6 = -2;
	int8_t x7 = INT8_MAX;
	static volatile int64_t x8 = 0LL;
	int32_t t1 = 44;

	t1 = (x5|((x6^x7)<=x8));

	if (t1 != -33) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x9 = -1;
	static int8_t x11 = 0;
	int64_t x12 = INT64_MAX;

	t2 = (x9|((x10^x11)<=x12));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = 7U;
	volatile int64_t x14 = -8273380445626LL;
	volatile int64_t x16 = INT64_MIN;
	int32_t t3 = 12308065;

	t3 = (x13|((x14^x15)<=x16));

	if (t3 != 7) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = UINT16_MAX;
	uint16_t x19 = UINT16_MAX;
	int16_t x20 = -8394;
	int32_t t4 = 3188323;

	t4 = (x17|((x18^x19)<=x20));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int8_t x22 = INT8_MIN;
	int16_t x24 = INT16_MAX;
	volatile int32_t t5 = -55067;

	t5 = (x21|((x22^x23)<=x24));

	if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = -1;
	volatile int32_t x26 = -503976;
	static int64_t x28 = -2LL;
	int32_t t6 = 7;

	t6 = (x25|((x26^x27)<=x28));

	if (t6 != -1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	uint8_t x30 = 1U;
	volatile int16_t x32 = -1;
	volatile int32_t t7 = 1840971;

	t7 = (x29|((x30^x31)<=x32));

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 1;
	uint8_t x34 = UINT8_MAX;
	uint64_t x36 = 28918008800LLU;
	int32_t t8 = -2785343;

	t8 = (x33|((x34^x35)<=x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 10651153253914LLU;
	int32_t x38 = INT32_MIN;
	int16_t x40 = INT16_MAX;
	uint64_t t9 = 448544169854731LLU;

	t9 = (x37|((x38^x39)<=x40));

	if (t9 != 10651153253915LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = -1;
	static int16_t x43 = INT16_MIN;

	t10 = (x41|((x42^x43)<=x44));

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = INT64_MIN;
	static int8_t x46 = INT8_MIN;
	int8_t x48 = -1;
	int64_t t11 = 5LL;

	t11 = (x45|((x46^x47)<=x48));

	if (t11 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = 24;
	volatile int32_t t12 = -33;

	t12 = (x49|((x50^x51)<=x52));

	if (t12 != 25) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = 11U;
	volatile int16_t x54 = INT16_MAX;
	uint16_t x55 = 5613U;
	static int16_t x56 = 43;
	static int32_t t13 = -112;

	t13 = (x53|((x54^x55)<=x56));

	if (t13 != 11) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	int8_t x58 = -3;
	int64_t x59 = -168423994987592LL;
	int32_t t14 = -48226773;

	t14 = (x57|((x58^x59)<=x60));

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -1;
	volatile int64_t x62 = -1LL;
	int64_t x63 = INT64_MIN;
	static int16_t x64 = INT16_MIN;
	volatile int32_t t15 = 0;

	t15 = (x61|((x62^x63)<=x64));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint32_t x65 = 30754064U;
	int32_t x67 = 7639;
	volatile uint64_t x68 = 17350873808LLU;
	uint32_t t16 = 4121103U;

	t16 = (x65|((x66^x67)<=x68));

	if (t16 != 30754064U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 2391LLU;
	int8_t x70 = INT8_MIN;
	int32_t x71 = INT32_MIN;
	int32_t x72 = 166;
	volatile uint64_t t17 = 27500LLU;

	t17 = (x69|((x70^x71)<=x72));

	if (t17 != 2391LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x75 = 8U;
	int8_t x76 = INT8_MAX;
	volatile uint32_t t18 = UINT32_MAX;

	t18 = (x73|((x74^x75)<=x76));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 2U;
	static int8_t x78 = INT8_MIN;
	static uint64_t x79 = 31LLU;
	static uint32_t t19 = 24020U;

	t19 = (x77|((x78^x79)<=x80));

	if (t19 != 3U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x82 = -1;
	static uint64_t x83 = 1532LLU;
	uint64_t t20 = 114744565LLU;

	t20 = (x81|((x82^x83)<=x84));

	if (t20 != 16191903040LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x86 = UINT16_MAX;
	volatile int8_t x87 = -47;
	int64_t x88 = 315284313LL;
	volatile int32_t t21 = -30;

	t21 = (x85|((x86^x87)<=x88));

	if (t21 != 77) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = 162133075LLU;
	int64_t x90 = -67892538708196LL;
	int8_t x91 = INT8_MIN;
	int64_t x92 = INT64_MIN;
	static uint64_t t22 = 2096LLU;

	t22 = (x89|((x90^x91)<=x92));

	if (t22 != 162133075LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x93 = UINT32_MAX;
	int32_t x94 = -1;
	static volatile uint32_t x95 = 102578U;
	int64_t x96 = 1045118524088612LL;
	uint32_t t23 = UINT32_MAX;

	t23 = (x93|((x94^x95)<=x96));

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x100 = INT32_MIN;
	int32_t t24 = INT32_MIN;

	t24 = (x97|((x98^x99)<=x100));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x102 = UINT16_MAX;
	volatile uint8_t x103 = 62U;
	static int64_t x104 = INT64_MIN;
	volatile int32_t t25 = -193942;

	t25 = (x101|((x102^x103)<=x104));

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = UINT16_MAX;
	int64_t x106 = INT64_MIN;
	uint16_t x107 = 28U;
	volatile int32_t x108 = INT32_MIN;
	int32_t t26 = -261918991;

	t26 = (x105|((x106^x107)<=x108));

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -1;
	int16_t x111 = INT16_MIN;
	int64_t x112 = -1LL;
	static int32_t t27 = -27;

	t27 = (x109|((x110^x111)<=x112));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = -46LL;
	int8_t x114 = -20;
	int64_t x115 = 2062518905086738840LL;
	static uint8_t x116 = UINT8_MAX;
	volatile int64_t t28 = -207LL;

	t28 = (x113|((x114^x115)<=x116));

	if (t28 != -45LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -1LL;
	static volatile int64_t x118 = INT64_MAX;
	int16_t x119 = INT16_MIN;
	int8_t x120 = -3;
	volatile int64_t t29 = 27576361921362LL;

	t29 = (x117|((x118^x119)<=x120));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = UINT64_MAX;
	int16_t x122 = 30;
	uint32_t x123 = 259U;
	int8_t x124 = INT8_MIN;
	volatile uint64_t t30 = UINT64_MAX;

	t30 = (x121|((x122^x123)<=x124));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	int16_t x126 = -3;
	volatile uint32_t x127 = 8777U;
	volatile int32_t x128 = 13383273;

	t31 = (x125|((x126^x127)<=x128));

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	static uint64_t x129 = UINT64_MAX;
	volatile int32_t x130 = -177898282;
	uint32_t x131 = 215394027U;
	volatile uint64_t t32 = UINT64_MAX;

	t32 = (x129|((x130^x131)<=x132));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x134 = 14U;
	uint64_t x135 = 3099233349LLU;
	int16_t x136 = INT16_MAX;
	volatile int64_t t33 = -23485659LL;

	t33 = (x133|((x134^x135)<=x136));

	if (t33 != -23571832LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x138 = INT16_MIN;
	volatile int64_t x139 = -1LL;
	uint64_t x140 = 759681695813401LLU;

	t34 = (x137|((x138^x139)<=x140));

	if (t34 != 228275079) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = INT64_MIN;
	uint16_t x143 = 2032U;
	int32_t x144 = 28464;

	t35 = (x141|((x142^x143)<=x144));

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -58490945496265LL;
	int16_t x146 = 833;
	int32_t x147 = INT32_MAX;
	uint64_t x148 = 20085LLU;
	volatile int64_t t36 = 114666189889663923LL;

	t36 = (x145|((x146^x147)<=x148));

	if (t36 != -58490945496265LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x150 = INT16_MIN;
	int16_t x151 = INT16_MIN;
	int32_t x152 = INT32_MAX;
	volatile int64_t t37 = -1LL;

	t37 = (x149|((x150^x151)<=x152));

	if (t37 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = 290;
	int64_t x154 = 122187LL;
	int8_t x155 = 0;

	t38 = (x153|((x154^x155)<=x156));

	if (t38 != 290) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -30;
	int16_t x158 = -1;
	int64_t x159 = INT64_MIN;
	int32_t x160 = INT32_MAX;
	volatile int32_t t39 = -428568682;

	t39 = (x157|((x158^x159)<=x160));

	if (t39 != -30) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x161 = -1LL;
	static volatile uint32_t x162 = 541U;
	int64_t t40 = 1386045LL;

	t40 = (x161|((x162^x163)<=x164));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x166 = 5U;
	int32_t x167 = INT32_MAX;
	int64_t x168 = INT64_MAX;
	static volatile int32_t t41 = -17142240;

	t41 = (x165|((x166^x167)<=x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x169 = UINT32_MAX;
	static int8_t x170 = -27;
	int64_t x172 = INT64_MAX;
	uint32_t t42 = UINT32_MAX;

	t42 = (x169|((x170^x171)<=x172));

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x173 = INT64_MIN;
	int64_t x174 = -71376LL;
	static int32_t x176 = INT32_MAX;
	volatile int64_t t43 = -3029LL;

	t43 = (x173|((x174^x175)<=x176));

	if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 1275103LLU;
	static int16_t x178 = INT16_MIN;
	int16_t x180 = -15;

	t44 = (x177|((x178^x179)<=x180));

	if (t44 != 1275103LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = 0;
	volatile int8_t x182 = -1;
	uint32_t x183 = 49999862U;
	int16_t x184 = INT16_MIN;
	int32_t t45 = 24;

	t45 = (x181|((x182^x183)<=x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = UINT8_MAX;
	int16_t x186 = 3639;
	uint8_t x187 = 2U;
	int16_t x188 = INT16_MIN;
	static int32_t t46 = -599970247;

	t46 = (x185|((x186^x187)<=x188));

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x189 = UINT64_MAX;
	int8_t x190 = INT8_MIN;
	volatile int64_t x191 = INT64_MIN;
	int8_t x192 = -29;
	volatile uint64_t t47 = UINT64_MAX;

	t47 = (x189|((x190^x191)<=x192));

	if (t47 != UINT64_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	uint64_t x194 = 7920393135297776LLU;
	uint8_t x195 = 1U;
	int32_t x196 = -21760495;

	t48 = (x193|((x194^x195)<=x196));

	if (t48 != -2147483647) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x197 = 97U;
	static int8_t x198 = 0;
	volatile uint16_t x200 = UINT16_MAX;
	volatile int32_t t49 = 5;

	t49 = (x197|((x198^x199)<=x200));

	if (t49 != 97) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -1;
	int64_t x202 = -2683326434LL;
	uint32_t x204 = 1U;

	t50 = (x201|((x202^x203)<=x204));

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x205 = 0U;
	uint16_t x206 = UINT16_MAX;
	int8_t x207 = INT8_MIN;
	uint16_t x208 = UINT16_MAX;
	static int32_t t51 = 6865727;

	t51 = (x205|((x206^x207)<=x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x209 = INT8_MIN;
	static int8_t x211 = INT8_MIN;
	static uint16_t x212 = 9U;
	volatile int32_t t52 = -6;

	t52 = (x209|((x210^x211)<=x212));

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 1U;
	uint32_t x215 = UINT32_MAX;
	static volatile int32_t t53 = -1;

	t53 = (x213|((x214^x215)<=x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = 1;
	int16_t x218 = INT16_MAX;
	static int64_t x219 = -1LL;
	volatile int32_t x220 = INT32_MIN;
	volatile int32_t t54 = -13;

	t54 = (x217|((x218^x219)<=x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x222 = 98U;
	int32_t x224 = INT32_MIN;
	int32_t t55 = -105034;

	t55 = (x221|((x222^x223)<=x224));

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x226 = 79U;
	uint32_t x227 = 489194U;
	int16_t x228 = -1;
	static uint64_t t56 = 157475675569484340LLU;

	t56 = (x225|((x226^x227)<=x228));

	if (t56 != 68346648881890903LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = -3;
	int32_t x230 = -1;
	int32_t x231 = INT32_MAX;

	t57 = (x229|((x230^x231)<=x232));

	if (t57 != -3) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -1LL;
	int8_t x234 = 1;
	static int16_t x235 = INT16_MIN;
	volatile uint64_t x236 = UINT64_MAX;
	volatile int64_t t58 = 25862456LL;

	t58 = (x233|((x234^x235)<=x236));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x237 = UINT16_MAX;
	static uint16_t x238 = 3105U;
	static int16_t x239 = 1;
	uint32_t x240 = 26287774U;
	int32_t t59 = 2;

	t59 = (x237|((x238^x239)<=x240));

	if (t59 != 65535) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = UINT64_MAX;
	uint8_t x242 = 26U;
	int32_t x243 = -1;

	t60 = (x241|((x242^x243)<=x244));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x248 = INT64_MAX;
	int32_t t61 = 247490814;

	t61 = (x245|((x246^x247)<=x248));

	if (t61 != -127) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x250 = -1;
	int32_t x251 = -115758;
	int8_t x252 = -10;
	volatile int32_t t62 = -5715969;

	t62 = (x249|((x250^x251)<=x252));

	if (t62 != -32768) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = UINT16_MAX;
	int64_t x254 = 208380LL;
	int16_t x255 = -86;
	uint32_t x256 = UINT32_MAX;
	volatile int32_t t63 = -108439;

	t63 = (x253|((x254^x255)<=x256));

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	static uint8_t x257 = UINT8_MAX;
	uint32_t x258 = UINT32_MAX;
	uint64_t x259 = 30903016164394854LLU;
	static int8_t x260 = INT8_MIN;
	static volatile int32_t t64 = -13146870;

	t64 = (x257|((x258^x259)<=x260));

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = -1;
	int64_t x262 = INT64_MIN;
	int32_t t65 = -2;

	t65 = (x261|((x262^x263)<=x264));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -1;
	uint64_t x266 = 8320721LLU;
	int16_t x267 = INT16_MAX;
	int32_t t66 = 45380521;

	t66 = (x265|((x266^x267)<=x268));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = UINT8_MAX;
	static volatile int64_t x270 = INT64_MIN;
	int8_t x271 = -1;
	volatile int32_t t67 = 21;

	t67 = (x269|((x270^x271)<=x272));

	if (t67 != 255) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MAX;
	volatile int32_t t68 = 2000107;

	t68 = (x273|((x274^x275)<=x276));

	if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x277 = -1;
	int16_t x278 = INT16_MAX;
	volatile int64_t x279 = 1758524609LL;
	volatile int8_t x280 = INT8_MIN;
	volatile int32_t t69 = -180725;

	t69 = (x277|((x278^x279)<=x280));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = UINT64_MAX;
	static volatile int32_t x282 = -1;
	static volatile int8_t x283 = INT8_MIN;
	volatile uint64_t t70 = UINT64_MAX;

	t70 = (x281|((x282^x283)<=x284));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x286 = UINT8_MAX;
	int8_t x287 = 0;
	volatile int16_t x288 = -1;

	t71 = (x285|((x286^x287)<=x288));

	if (t71 != -32768) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 9690U;
	static int8_t x291 = 49;
	uint32_t x292 = 3214U;
	volatile int32_t t72 = 391854;

	t72 = (x289|((x290^x291)<=x292));

	if (t72 != 9690) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x295 = INT32_MIN;
	int64_t x296 = INT64_MAX;
	uint64_t t73 = UINT64_MAX;

	t73 = (x293|((x294^x295)<=x296));

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = 3;
	int16_t x298 = 5;
	int8_t x299 = INT8_MIN;
	volatile int8_t x300 = INT8_MIN;
	int32_t t74 = 3345372;

	t74 = (x297|((x298^x299)<=x300));

	if (t74 != 3) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 5U;
	static int64_t x302 = INT64_MAX;
	static int16_t x303 = -1;
	int32_t x304 = -394257;

	t75 = (x301|((x302^x303)<=x304));

	if (t75 != 5) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = 97246LLU;
	int8_t x307 = -4;
	uint32_t x308 = 16894U;
	static uint64_t t76 = 3029632656928LLU;

	t76 = (x305|((x306^x307)<=x308));

	if (t76 != 97246LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	static int8_t x312 = INT8_MAX;

	t77 = (x309|((x310^x311)<=x312));

	if (t77 != -32767) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -1;
	static int16_t x314 = INT16_MIN;
	int16_t x315 = -1;
	static volatile int32_t t78 = 255;

	t78 = (x313|((x314^x315)<=x316));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x318 = UINT16_MAX;
	int16_t x320 = -1;
	volatile int32_t t79 = -3;

	t79 = (x317|((x318^x319)<=x320));

	if (t79 != -6) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x322 = INT8_MAX;
	uint8_t x323 = 1U;
	volatile uint64_t x324 = 338123LLU;
	volatile int32_t t80 = -41392835;

	t80 = (x321|((x322^x323)<=x324));

	if (t80 != 7) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x326 = -39278071270241983LL;
	static int32_t x327 = -1;
	uint64_t x328 = 16960406LLU;
	int32_t t81 = -25;

	t81 = (x325|((x326^x327)<=x328));

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x330 = INT16_MAX;
	volatile int16_t x331 = -1;
	int64_t x332 = 329073364829284LL;
	int32_t t82 = 198714880;

	t82 = (x329|((x330^x331)<=x332));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x333 = INT32_MIN;
	int64_t x334 = INT64_MIN;
	static int16_t x335 = INT16_MIN;
	int8_t x336 = INT8_MAX;
	volatile int32_t t83 = INT32_MIN;

	t83 = (x333|((x334^x335)<=x336));

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = UINT16_MAX;
	uint16_t x338 = UINT16_MAX;
	static uint32_t x340 = 427342999U;
	int32_t t84 = 3734;

	t84 = (x337|((x338^x339)<=x340));

	if (t84 != 65535) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = -7432;
	volatile int64_t x342 = INT64_MIN;
	int32_t t85 = 394;

	t85 = (x341|((x342^x343)<=x344));

	if (t85 != -7432) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	uint16_t x346 = UINT16_MAX;
	uint8_t x347 = 3U;
	static int32_t x348 = -400751042;

	t86 = (x345|((x346^x347)<=x348));

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = 0;
	int32_t x350 = -1;
	uint32_t x351 = 90U;
	int8_t x352 = 20;
	int32_t t87 = -31;

	t87 = (x349|((x350^x351)<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x353 = -1LL;
	volatile int16_t x355 = -1;
	int16_t x356 = INT16_MIN;
	int64_t t88 = -7327145053524406LL;

	t88 = (x353|((x354^x355)<=x356));

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 24U;
	volatile int8_t x358 = -1;
	int64_t x359 = 137386472753353LL;
	int32_t x360 = 2062086;

	t89 = (x357|((x358^x359)<=x360));

	if (t89 != 25) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = UINT64_MAX;
	static int16_t x362 = -1;
	static volatile int16_t x364 = INT16_MAX;
	static uint64_t t90 = UINT64_MAX;

	t90 = (x361|((x362^x363)<=x364));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = INT8_MIN;
	int32_t x366 = -1;
	int32_t x367 = INT32_MAX;
	static int16_t x368 = INT16_MIN;
	int32_t t91 = 867204;

	t91 = (x365|((x366^x367)<=x368));

	if (t91 != -127) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = 5;
	volatile int32_t t92 = 85837864;

	t92 = (x369|((x370^x371)<=x372));

	if (t92 != 5) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = INT64_MAX;
	int64_t x374 = INT64_MIN;
	int8_t x376 = INT8_MIN;

	t93 = (x373|((x374^x375)<=x376));

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint32_t x377 = 16454743U;
	static volatile int64_t x379 = INT64_MIN;
	uint16_t x380 = UINT16_MAX;
	volatile uint32_t t94 = 12498206U;

	t94 = (x377|((x378^x379)<=x380));

	if (t94 != 16454743U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = -45848788974981LL;
	static int16_t x382 = 236;
	int32_t x383 = -1;
	int64_t x384 = INT64_MAX;
	volatile int64_t t95 = -7713LL;

	t95 = (x381|((x382^x383)<=x384));

	if (t95 != -45848788974981LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 6122598710189911LLU;
	int16_t x386 = -1;
	int32_t x388 = INT32_MIN;
	volatile uint64_t t96 = 1LLU;

	t96 = (x385|((x386^x387)<=x388));

	if (t96 != 6122598710189911LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x389 = INT8_MIN;
	int16_t x391 = INT16_MAX;
	int8_t x392 = INT8_MAX;

	t97 = (x389|((x390^x391)<=x392));

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = 1008;
	int64_t x394 = INT64_MAX;
	int64_t x395 = 81LL;
	int32_t x396 = INT32_MIN;
	static volatile int32_t t98 = -1618;

	t98 = (x393|((x394^x395)<=x396));

	if (t98 != 1008) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	uint16_t x398 = 1539U;
	int8_t x399 = -1;
	int32_t x400 = -1;
	volatile int32_t t99 = 98907050;

	t99 = (x397|((x398^x399)<=x400));

	if (t99 != -2147483647) { NG(); } else { ; }
	
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

