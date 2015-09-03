#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = 1U;
uint8_t x9 = UINT8_MAX;
uint64_t x14 = UINT64_MAX;
volatile int32_t x15 = INT32_MIN;
int64_t x20 = -1LL;
static uint64_t x24 = 142061827LLU;
volatile int32_t x36 = 11;
int32_t t8 = 6;
static uint64_t x41 = 4LLU;
uint32_t x44 = 1738051U;
volatile uint64_t t10 = 60710295074026737LLU;
uint16_t x48 = UINT16_MAX;
static uint64_t t12 = 26101272LLU;
static int64_t t13 = -436LL;
volatile int64_t t15 = INT64_MAX;
uint16_t x70 = UINT16_MAX;
uint32_t t18 = UINT32_MAX;
int64_t x77 = -6635077LL;
int16_t x92 = 13;
volatile int64_t t23 = 9169LL;
uint32_t x97 = 980U;
static volatile int8_t x98 = INT8_MIN;
volatile uint64_t t24 = 84006040LLU;
int32_t x101 = INT32_MAX;
static int64_t x109 = -1LL;
int16_t x113 = 39;
int16_t x116 = INT16_MIN;
int64_t x124 = -1LL;
int16_t x126 = INT16_MAX;
volatile int16_t x132 = INT16_MIN;
int8_t x136 = 2;
int16_t x139 = -1455;
uint8_t x154 = 15U;
static uint64_t t38 = 4321075073LLU;
static volatile int32_t x158 = INT32_MIN;
int32_t x171 = 505258;
volatile uint32_t t46 = 8U;
int64_t x189 = -1LL;
int8_t x192 = INT8_MIN;
static volatile int64_t t47 = 276LL;
uint8_t x195 = 122U;
static volatile int64_t t48 = -9881LL;
static int32_t x197 = INT32_MAX;
int32_t x199 = 107929;
int16_t x212 = INT16_MIN;
int32_t x214 = -1;
volatile uint32_t x216 = 433545U;
uint64_t x220 = 4066786180276LLU;
uint64_t t54 = 11422135056LLU;
int8_t x222 = -1;
static int32_t x226 = INT32_MAX;
int32_t t56 = 656887;
volatile int64_t t57 = INT64_MAX;
uint64_t x234 = 197791575989867LLU;
int64_t x235 = INT64_MIN;
int16_t x237 = 1;
uint32_t x243 = UINT32_MAX;
static uint8_t x248 = UINT8_MAX;
uint16_t x250 = 0U;
int16_t x253 = 0;
static int32_t x257 = INT32_MAX;
int8_t x259 = INT8_MIN;
uint16_t x261 = UINT16_MAX;
volatile uint32_t x269 = 163U;
uint16_t x270 = UINT16_MAX;
uint16_t x272 = 58U;
uint16_t x273 = 45U;
uint16_t x284 = 1811U;
volatile uint32_t t70 = 60670765U;
uint32_t x286 = UINT32_MAX;
volatile int32_t x288 = INT32_MAX;
static uint8_t x292 = 0U;
uint16_t x293 = 1U;
static uint8_t x295 = 20U;
uint64_t t74 = 23504517640504LLU;
int8_t x302 = INT8_MAX;
static int8_t x304 = INT8_MIN;
static uint16_t x310 = 0U;
int8_t x315 = -2;
uint64_t t78 = 376731123603LLU;
uint32_t t79 = 208106387U;
volatile int8_t x322 = INT8_MIN;
volatile int64_t t82 = 0LL;
uint16_t x334 = 0U;
uint8_t x338 = 3U;
static int32_t x340 = INT32_MIN;
uint64_t t85 = 6313158LLU;
int64_t x349 = -12898101534LL;
int8_t x353 = INT8_MAX;
uint32_t x356 = 7892U;
volatile uint64_t x364 = UINT64_MAX;
uint64_t t90 = UINT64_MAX;
int64_t x367 = -114470259499786LL;
int8_t x368 = 28;
int64_t t91 = -1247027LL;
int32_t x375 = INT32_MIN;
int32_t x378 = 0;
int64_t x393 = INT64_MAX;
int32_t x397 = INT32_MAX;
volatile int64_t t99 = -12316408703LL;


void f0(void) {
	uint64_t x1 = 6350835794802LLU;
	uint32_t x2 = 16076U;
	uint16_t x4 = 3613U;
	uint64_t t0 = 64231403758LLU;

	t0 = (x1|((x2|x3)^x4));

	if (t0 != 6350835807218LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = 1U;
	volatile uint16_t x6 = 18178U;
	uint32_t x7 = 3161U;
	int64_t x8 = -1LL;
	int64_t t1 = 1395635961159894836LL;

	t1 = (x5|((x6|x7)^x8));

	if (t1 != -20315LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = 4336846LLU;
	uint32_t x11 = 747394717U;
	int8_t x12 = -1;
	volatile uint64_t t2 = 6LLU;

	t2 = (x9|((x10|x11)^x12));

	if (t2 != 18446744072957821439LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	uint32_t x16 = 1632U;
	volatile uint64_t t3 = 12005180447989LLU;

	t3 = (x13|((x14|x15)^x16));

	if (t3 != 18446744073709549983LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = UINT8_MAX;
	int32_t x18 = INT32_MIN;
	static int16_t x19 = -1683;
	volatile int64_t t4 = 131388109LL;

	t4 = (x17|((x18|x19)^x20));

	if (t4 != 1791LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = UINT64_MAX;
	int8_t x22 = INT8_MIN;
	uint8_t x23 = UINT8_MAX;
	uint64_t t5 = UINT64_MAX;

	t5 = (x21|((x22|x23)^x24));

	if (t5 != UINT64_MAX) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	static uint32_t x26 = UINT32_MAX;
	volatile int8_t x27 = INT8_MAX;
	int32_t x28 = INT32_MIN;
	static volatile uint32_t t6 = UINT32_MAX;

	t6 = (x25|((x26|x27)^x28));

	if (t6 != UINT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	static int16_t x30 = -10;
	volatile uint8_t x31 = 114U;
	int64_t x32 = -133985892346005677LL;
	int64_t t7 = 2000931822574LL;

	t7 = (x29|((x30|x31)^x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x33 = UINT16_MAX;
	static int16_t x34 = INT16_MIN;
	int8_t x35 = 23;

	t8 = (x33|((x34|x35)^x36));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	uint16_t x38 = 4819U;
	int8_t x39 = INT8_MIN;
	int64_t x40 = -1LL;
	volatile int64_t t9 = 319436746860537LL;

	t9 = (x37|((x38|x39)^x40));

	if (t9 != 4294967295LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x42 = 1U;
	uint32_t x43 = UINT32_MAX;

	t10 = (x41|((x42|x43)^x44));

	if (t10 != 4293229244LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -1;
	volatile int16_t x46 = 53;
	uint32_t x47 = UINT32_MAX;
	volatile uint32_t t11 = UINT32_MAX;

	t11 = (x45|((x46|x47)^x48));

	if (t11 != UINT32_MAX) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = INT32_MIN;
	static uint8_t x50 = 3U;
	uint64_t x51 = UINT64_MAX;
	int8_t x52 = INT8_MIN;

	t12 = (x49|((x50|x51)^x52));

	if (t12 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = 6U;
	int8_t x54 = INT8_MAX;
	static int64_t x55 = INT64_MIN;
	volatile int8_t x56 = -1;

	t13 = (x53|((x54|x55)^x56));

	if (t13 != 9223372036854775686LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x57 = INT8_MIN;
	int16_t x58 = -1;
	volatile int32_t x59 = INT32_MIN;
	volatile int64_t x60 = INT64_MAX;
	volatile int64_t t14 = 1121123356586330LL;

	t14 = (x57|((x58|x59)^x60));

	if (t14 != -128LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	static int64_t x62 = -1LL;
	int16_t x63 = -219;
	int16_t x64 = INT16_MIN;

	t15 = (x61|((x62|x63)^x64));

	if (t15 != INT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = -1;
	static uint8_t x66 = 25U;
	int16_t x67 = -1560;
	static int64_t x68 = INT64_MIN;
	int64_t t16 = -26261697698LL;

	t16 = (x65|((x66|x67)^x68));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MAX;
	static uint32_t x71 = UINT32_MAX;
	int32_t x72 = INT32_MAX;
	volatile uint32_t t17 = UINT32_MAX;

	t17 = (x69|((x70|x71)^x72));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x73 = -1;
	int16_t x74 = -1;
	int16_t x75 = INT16_MIN;
	uint32_t x76 = 2632U;

	t18 = (x73|((x74|x75)^x76));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x78 = -1;
	uint32_t x79 = 39U;
	volatile int64_t x80 = 274529356835670LL;
	int64_t t19 = 6898451LL;

	t19 = (x77|((x78|x79)^x80));

	if (t19 != -4270661LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	int32_t x82 = -1;
	uint32_t x83 = UINT32_MAX;
	int64_t x84 = INT64_MIN;
	volatile int64_t t20 = -877LL;

	t20 = (x81|((x82|x83)^x84));

	if (t20 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = -1;
	int8_t x86 = -1;
	static volatile int32_t x87 = -2986;
	int32_t x88 = 994352;
	volatile int32_t t21 = 31516;

	t21 = (x85|((x86|x87)^x88));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 0U;
	int32_t x90 = INT32_MIN;
	uint16_t x91 = 3U;
	static int32_t t22 = -19531956;

	t22 = (x89|((x90|x91)^x92));

	if (t22 != -2147483634) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x93 = -1;
	int64_t x94 = INT64_MAX;
	int64_t x95 = -242668743295815636LL;
	uint16_t x96 = 1926U;

	t23 = (x93|((x94|x95)^x96));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x99 = 0;
	uint64_t x100 = UINT64_MAX;

	t24 = (x97|((x98|x99)^x100));

	if (t24 != 1023LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x102 = INT64_MAX;
	static uint64_t x103 = 1170230LLU;
	volatile int16_t x104 = -1;
	volatile uint64_t t25 = 39600601368750239LLU;

	t25 = (x101|((x102|x103)^x104));

	if (t25 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	int64_t x106 = -120900125997LL;
	int32_t x107 = -1;
	int64_t x108 = INT64_MIN;
	volatile int64_t t26 = 590593498LL;

	t26 = (x105|((x106|x107)^x108));

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x110 = INT64_MAX;
	int64_t x111 = -39352LL;
	static int16_t x112 = INT16_MIN;
	volatile int64_t t27 = 266940636919378645LL;

	t27 = (x109|((x110|x111)^x112));

	if (t27 != -1LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x114 = UINT32_MAX;
	uint32_t x115 = 3627555U;
	volatile uint32_t t28 = 377519601U;

	t28 = (x113|((x114|x115)^x116));

	if (t28 != 32767U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	volatile int32_t x118 = -63;
	static uint8_t x119 = 11U;
	uint8_t x120 = 39U;
	volatile int32_t t29 = -2425124;

	t29 = (x117|((x118|x119)^x120));

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = 110U;
	static uint16_t x122 = UINT16_MAX;
	int32_t x123 = INT32_MAX;
	int64_t t30 = 82229LL;

	t30 = (x121|((x122|x123)^x124));

	if (t30 != -2147483538LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x125 = 19U;
	static uint32_t x127 = 2600468U;
	volatile uint16_t x128 = 389U;
	uint32_t t31 = 841U;

	t31 = (x125|((x126|x127)^x128));

	if (t31 != 2621051U) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = 0U;
	uint8_t x130 = 34U;
	static uint16_t x131 = 1126U;
	int32_t t32 = 9697674;

	t32 = (x129|((x130|x131)^x132));

	if (t32 != -31642) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = 1;
	int8_t x134 = INT8_MIN;
	int8_t x135 = 1;
	static volatile int32_t t33 = 835428267;

	t33 = (x133|((x134|x135)^x136));

	if (t33 != -125) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint8_t x137 = UINT8_MAX;
	uint32_t x138 = 570483221U;
	int32_t x140 = -97273;
	uint32_t t34 = 293926U;

	t34 = (x137|((x138|x139)^x140));

	if (t34 != 98047U) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = -90873932;
	int64_t x142 = INT64_MIN;
	static volatile int16_t x143 = INT16_MIN;
	static int64_t x144 = 2687149992055263735LL;
	static volatile int64_t t35 = 0LL;

	t35 = (x141|((x142|x143)^x144));

	if (t35 != -69246985LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x145 = 186950;
	int16_t x146 = -3;
	volatile int8_t x147 = INT8_MIN;
	static int64_t x148 = 21180LL;
	volatile int64_t t36 = -8LL;

	t36 = (x145|((x146|x147)^x148));

	if (t36 != -185LL) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = INT64_MIN;
	int64_t x150 = -3593794064911067LL;
	uint16_t x151 = UINT16_MAX;
	static int8_t x152 = INT8_MIN;
	volatile int64_t t37 = -1828142812542404490LL;

	t37 = (x149|((x150|x151)^x152));

	if (t37 != -9219778242789900161LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = 17976030;
	uint64_t x155 = 10672480176097711LLU;
	int8_t x156 = INT8_MAX;

	t38 = (x153|((x154|x155)^x156));

	if (t38 != 10672480177277918LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = 1;
	uint8_t x159 = 6U;
	static volatile uint64_t x160 = 5073611956399009405LLU;
	uint64_t t39 = 7961LLU;

	t39 = (x157|((x158|x159)^x160));

	if (t39 != 13373132119100255867LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	static int32_t x162 = INT32_MIN;
	static uint8_t x163 = 4U;
	uint8_t x164 = UINT8_MAX;
	int32_t t40 = -442;

	t40 = (x161|((x162|x163)^x164));

	if (t40 != -2147483397) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x165 = UINT8_MAX;
	int8_t x166 = INT8_MIN;
	static int64_t x167 = INT64_MIN;
	int64_t x168 = 19LL;
	volatile int64_t t41 = -4242783117667077850LL;

	t41 = (x165|((x166|x167)^x168));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x169 = INT32_MAX;
	int8_t x170 = 0;
	volatile uint16_t x172 = 22726U;
	int32_t t42 = INT32_MAX;

	t42 = (x169|((x170|x171)^x172));

	if (t42 != INT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MAX;
	int32_t x174 = INT32_MIN;
	int64_t x175 = -1856801022544465LL;
	volatile int16_t x176 = -32;
	int64_t t43 = 7LL;

	t43 = (x173|((x174|x175)^x176));

	if (t43 != 761137791LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x177 = UINT32_MAX;
	volatile uint32_t x178 = UINT32_MAX;
	int16_t x179 = -16;
	volatile uint32_t x180 = 1784422U;
	volatile uint32_t t44 = UINT32_MAX;

	t44 = (x177|((x178|x179)^x180));

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x181 = 62424247754835LLU;
	int64_t x182 = -11110025LL;
	static volatile int16_t x183 = INT16_MIN;
	uint64_t x184 = UINT64_MAX;
	volatile uint64_t t45 = 68747915LLU;

	t45 = (x181|((x182|x183)^x184));

	if (t45 != 62424247756507LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = -3;
	uint32_t x186 = 100163225U;
	int32_t x187 = -101;
	static int16_t x188 = INT16_MAX;

	t46 = (x185|((x186|x187)^x188));

	if (t46 != 4294967293U) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x190 = 9137010;
	int64_t x191 = INT64_MIN;

	t47 = (x189|((x190|x191)^x192));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = -14743853LL;
	static uint16_t x194 = 1817U;
	uint16_t x196 = UINT16_MAX;

	t48 = (x193|((x194|x195)^x196));

	if (t48 != -14680361LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x198 = 38LLU;
	volatile uint16_t x200 = UINT16_MAX;
	volatile uint64_t t49 = 457LLU;

	t49 = (x197|((x198|x199)^x200));

	if (t49 != 2147483647LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	static volatile int32_t x202 = -15999034;
	volatile int64_t x203 = INT64_MAX;
	uint64_t x204 = 1108999430891559LLU;
	uint64_t t50 = 847LLU;

	t50 = (x201|((x202|x203)^x204));

	if (t50 != 18446744073709524952LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -28;
	volatile int8_t x206 = INT8_MAX;
	volatile uint32_t x207 = 98U;
	int64_t x208 = -1LL;
	static volatile int64_t t51 = 39424737LL;

	t51 = (x205|((x206|x207)^x208));

	if (t51 != -28LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	uint8_t x210 = 29U;
	int8_t x211 = INT8_MAX;
	volatile int32_t t52 = 19086334;

	t52 = (x209|((x210|x211)^x212));

	if (t52 != -32641) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MAX;
	uint32_t x215 = 125U;
	static volatile int64_t t53 = INT64_MAX;

	t53 = (x213|((x214|x215)^x216));

	if (t53 != INT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x217 = INT16_MAX;
	int8_t x218 = INT8_MIN;
	uint8_t x219 = UINT8_MAX;

	t54 = (x217|((x218|x219)^x220));

	if (t54 != 18446740006923403263LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = 158393817;
	int32_t x223 = INT32_MIN;
	int8_t x224 = INT8_MAX;
	int32_t t55 = -17;

	t55 = (x221|((x222|x223)^x224));

	if (t55 != -39) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 3U;
	static volatile int32_t x227 = -3;
	volatile int16_t x228 = -1;

	t56 = (x225|((x226|x227)^x228));

	if (t56 != 3) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x229 = INT32_MAX;
	int32_t x230 = INT32_MAX;
	int8_t x231 = INT8_MAX;
	volatile int64_t x232 = INT64_MAX;

	t57 = (x229|((x230|x231)^x232));

	if (t57 != INT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = 54965LL;
	int32_t x236 = INT32_MAX;
	volatile uint64_t t58 = 2449954020820LLU;

	t58 = (x233|((x234|x235)^x236));

	if (t58 != 9223569826799155125LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x238 = INT32_MIN;
	volatile int32_t x239 = -855492437;
	static int16_t x240 = INT16_MAX;
	int32_t t59 = 1479832;

	t59 = (x237|((x238|x239)^x240));

	if (t59 != -855488683) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = -1LL;
	int8_t x242 = INT8_MIN;
	volatile int64_t x244 = INT64_MIN;
	int64_t t60 = -32185503084LL;

	t60 = (x241|((x242|x243)^x244));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -956272013828829LL;
	int32_t x246 = INT32_MIN;
	int32_t x247 = -1;
	int64_t t61 = 403934698650LL;

	t61 = (x245|((x246|x247)^x248));

	if (t61 != -221LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x249 = UINT64_MAX;
	volatile int8_t x251 = -1;
	int64_t x252 = 852770696316122417LL;
	volatile uint64_t t62 = UINT64_MAX;

	t62 = (x249|((x250|x251)^x252));

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x254 = -1;
	volatile int8_t x255 = 0;
	uint32_t x256 = UINT32_MAX;
	uint32_t t63 = 1U;

	t63 = (x253|((x254|x255)^x256));

	if (t63 != 0U) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x258 = 96LLU;
	uint32_t x260 = UINT32_MAX;
	uint64_t t64 = 6693LLU;

	t64 = (x257|((x258|x259)^x260));

	if (t64 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x262 = 354250098725245784LL;
	int16_t x263 = 1;
	volatile int16_t x264 = -1;
	int64_t t65 = -1LL;

	t65 = (x261|((x262|x263)^x264));

	if (t65 != -354250098725224449LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = -1;
	int16_t x266 = 7;
	int16_t x267 = INT16_MIN;
	static int16_t x268 = INT16_MAX;
	int32_t t66 = 724;

	t66 = (x265|((x266|x267)^x268));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x271 = 101U;
	volatile uint32_t t67 = 467849722U;

	t67 = (x269|((x270|x271)^x272));

	if (t67 != 65511U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x274 = INT8_MIN;
	static int32_t x275 = INT32_MIN;
	int32_t x276 = 169;
	int32_t t68 = 244;

	t68 = (x273|((x274|x275)^x276));

	if (t68 != -211) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x277 = 2;
	int32_t x278 = -1;
	int16_t x279 = INT16_MIN;
	uint16_t x280 = 638U;
	volatile int32_t t69 = 7081;

	t69 = (x277|((x278|x279)^x280));

	if (t69 != -637) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	int32_t x282 = -1;
	uint32_t x283 = 524U;

	t70 = (x281|((x282|x283)^x284));

	if (t70 != 4294965484U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	static uint8_t x287 = 58U;
	uint32_t t71 = 2104225931U;

	t71 = (x285|((x286|x287)^x288));

	if (t71 != 4294967168U) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = 626697U;
	static int64_t x290 = INT64_MAX;
	volatile int8_t x291 = INT8_MIN;
	volatile int64_t t72 = -4395528186324LL;

	t72 = (x289|((x290|x291)^x292));

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x294 = 449034516LLU;
	static int16_t x296 = -1;
	uint64_t t73 = 252835607465205LLU;

	t73 = (x293|((x294|x295)^x296));

	if (t73 != 18446744073260517099LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = 61LL;
	uint32_t x298 = 7240902U;
	static int16_t x299 = INT16_MIN;
	uint64_t x300 = 266075964356574818LLU;

	t74 = (x297|((x298|x299)^x300));

	if (t74 != 266075968291062461LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x301 = INT32_MIN;
	uint64_t x303 = UINT64_MAX;
	volatile uint64_t t75 = 1908063834LLU;

	t75 = (x301|((x302|x303)^x304));

	if (t75 != 18446744071562068095LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	int8_t x306 = -1;
	static volatile uint8_t x307 = UINT8_MAX;
	uint32_t x308 = UINT32_MAX;
	volatile int64_t t76 = INT64_MIN;

	t76 = (x305|((x306|x307)^x308));

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = 949343161LLU;
	volatile int32_t x311 = -1;
	int16_t x312 = INT16_MAX;
	static volatile uint64_t t77 = 20234757483299251LLU;

	t77 = (x309|((x310|x311)^x312));

	if (t77 != 18446744073709540281LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	uint64_t x314 = 40976193548LLU;
	int64_t x316 = -7LL;

	t78 = (x313|((x314|x315)^x316));

	if (t78 != 18446744071562067975LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	static int16_t x318 = -1;
	uint32_t x319 = 1551521U;
	int8_t x320 = INT8_MAX;

	t79 = (x317|((x318|x319)^x320));

	if (t79 != 4294967168U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	uint64_t x323 = 971375LLU;
	static int16_t x324 = 18;
	uint64_t t80 = 71164944526911LLU;

	t80 = (x321|((x322|x323)^x324));

	if (t80 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	volatile uint16_t x326 = UINT16_MAX;
	uint64_t x327 = UINT64_MAX;
	static int16_t x328 = -2850;
	volatile uint64_t t81 = 247898950581616041LLU;

	t81 = (x325|((x326|x327)^x328));

	if (t81 != 18446744073709551521LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = -3;
	volatile uint8_t x330 = UINT8_MAX;
	volatile int64_t x331 = INT64_MIN;
	static volatile uint16_t x332 = 88U;

	t82 = (x329|((x330|x331)^x332));

	if (t82 != -1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	uint64_t x335 = 236588881LLU;
	volatile uint32_t x336 = 325601U;
	static volatile uint64_t t83 = 941LLU;

	t83 = (x333|((x334|x335)^x336));

	if (t83 != 18446744071798978736LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	int32_t x339 = INT32_MAX;
	volatile int32_t t84 = 6689;

	t84 = (x337|((x338|x339)^x340));

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -32;
	static uint8_t x342 = 52U;
	uint64_t x343 = 10596687999LLU;
	int16_t x344 = INT16_MAX;

	t85 = (x341|((x342|x343)^x344));

	if (t85 != 18446744073709551584LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = UINT8_MAX;
	int32_t x346 = INT32_MIN;
	int64_t x347 = 14329806535993LL;
	static int16_t x348 = -10735;
	int64_t t86 = -25886701913020LL;

	t86 = (x345|((x346|x347)^x348));

	if (t86 != 351857663LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x350 = INT64_MIN;
	volatile int8_t x351 = -1;
	uint64_t x352 = UINT64_MAX;
	volatile uint64_t t87 = 14396058121132LLU;

	t87 = (x349|((x350|x351)^x352));

	if (t87 != 18446744060811450082LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x354 = INT32_MIN;
	int8_t x355 = -36;
	volatile uint32_t t88 = 50621317U;

	t88 = (x353|((x354|x355)^x356));

	if (t88 != 4294959487U) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x357 = 1469U;
	uint16_t x358 = UINT16_MAX;
	int32_t x359 = 29379;
	int64_t x360 = INT64_MIN;
	int64_t t89 = -208201749364LL;

	t89 = (x357|((x358|x359)^x360));

	if (t89 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -1;
	static int16_t x362 = -3306;
	int64_t x363 = -1LL;

	t90 = (x361|((x362|x363)^x364));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x365 = INT8_MIN;
	int8_t x366 = 7;

	t91 = (x365|((x366|x367)^x368));

	if (t91 != -21LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 45402U;
	volatile int32_t x370 = 3;
	uint32_t x371 = 374583U;
	static volatile int16_t x372 = -3130;
	volatile uint32_t t92 = 40356049U;

	t92 = (x369|((x370|x371)^x372));

	if (t92 != 4294637051U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = UINT16_MAX;
	volatile int8_t x374 = INT8_MIN;
	static uint8_t x376 = 15U;
	static volatile int32_t t93 = 75321785;

	t93 = (x373|((x374|x375)^x376));

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = -1LL;
	int8_t x379 = -1;
	uint32_t x380 = 3U;
	volatile int64_t t94 = -3616595582764082LL;

	t94 = (x377|((x378|x379)^x380));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MIN;
	uint16_t x382 = 725U;
	volatile int64_t x383 = -1LL;
	static int8_t x384 = INT8_MAX;
	int64_t t95 = 119676969351058885LL;

	t95 = (x381|((x382|x383)^x384));

	if (t95 != -128LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x385 = INT32_MAX;
	int32_t x386 = -1;
	int8_t x387 = -1;
	int16_t x388 = INT16_MIN;
	volatile int32_t t96 = INT32_MAX;

	t96 = (x385|((x386|x387)^x388));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x389 = UINT64_MAX;
	int64_t x390 = INT64_MIN;
	static uint32_t x391 = UINT32_MAX;
	volatile int8_t x392 = 1;
	volatile uint64_t t97 = UINT64_MAX;

	t97 = (x389|((x390|x391)^x392));

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x394 = 0U;
	static int32_t x395 = -1;
	int32_t x396 = INT32_MIN;
	static volatile int64_t t98 = INT64_MAX;

	t98 = (x393|((x394|x395)^x396));

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x398 = INT64_MIN;
	volatile int16_t x399 = INT16_MAX;
	uint16_t x400 = UINT16_MAX;

	t99 = (x397|((x398|x399)^x400));

	if (t99 != -9223372034707292161LL) { NG(); } else { ; }
	
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

