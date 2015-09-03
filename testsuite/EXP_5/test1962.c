#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 242159702LLU;
int16_t x4 = -1;
int16_t x7 = INT16_MAX;
volatile uint64_t x16 = 29755377LLU;
volatile int64_t t4 = -182464197LL;
static int32_t x22 = INT32_MIN;
static volatile int32_t x23 = -1;
uint32_t x31 = 6863U;
int32_t x33 = INT32_MIN;
int32_t t8 = INT32_MIN;
int64_t x38 = INT64_MAX;
int32_t x39 = INT32_MIN;
volatile int32_t t9 = 227546;
int64_t x43 = 52LL;
int8_t x44 = -11;
int32_t t10 = -103193;
int32_t x46 = -1;
volatile uint64_t t11 = 17496398691203LLU;
int64_t x50 = -1LL;
static int64_t x51 = INT64_MAX;
int16_t x61 = -3749;
static uint16_t x62 = 1427U;
static volatile int8_t x69 = INT8_MIN;
volatile uint64_t x75 = 2929332683980075256LLU;
volatile int32_t x76 = INT32_MIN;
volatile int32_t x80 = INT32_MIN;
static uint16_t x81 = 1U;
int64_t x84 = -29018296LL;
int32_t x89 = INT32_MIN;
int16_t x97 = INT16_MAX;
int32_t x99 = 20799;
volatile int32_t t24 = 479;
int32_t x102 = INT32_MIN;
volatile uint8_t x107 = 23U;
uint8_t x113 = 7U;
static int64_t x117 = INT64_MAX;
uint64_t x128 = 2977882LLU;
int8_t x130 = INT8_MIN;
volatile uint64_t x132 = 579LLU;
int64_t x139 = -1LL;
static uint32_t x156 = 5U;
int64_t x160 = INT64_MAX;
int32_t x163 = INT32_MIN;
uint32_t x164 = 0U;
int16_t x166 = INT16_MIN;
uint64_t x167 = 2971541226LLU;
static uint32_t x168 = UINT32_MAX;
volatile uint16_t x173 = UINT16_MAX;
volatile int8_t x174 = INT8_MAX;
uint8_t x184 = 10U;
int64_t t46 = INT64_MAX;
uint32_t x190 = 0U;
static int16_t x192 = INT16_MIN;
int8_t x197 = -1;
volatile int8_t x205 = 2;
volatile int32_t t53 = -302330;
int16_t x224 = INT16_MIN;
static int64_t t56 = -19851798LL;
int64_t t57 = -59000LL;
static int32_t x233 = INT32_MAX;
uint8_t x238 = 64U;
int16_t x260 = INT16_MIN;
uint32_t x262 = 14U;
uint32_t x264 = 97942U;
int8_t x267 = INT8_MAX;
int32_t t68 = INT32_MIN;
volatile int32_t x283 = INT32_MIN;
static volatile uint64_t t70 = UINT64_MAX;
uint8_t x286 = 5U;
int64_t x289 = 2429337032297LL;
int32_t x293 = 4;
static int16_t x294 = -1;
int64_t x301 = INT64_MIN;
int32_t x304 = 243043;
static volatile int64_t t75 = INT64_MIN;
static volatile int8_t x306 = -1;
volatile int32_t t76 = -2935071;
int32_t x310 = INT32_MAX;
int64_t x312 = INT64_MIN;
static volatile int32_t t77 = -2;
volatile int32_t x313 = -1;
int16_t x329 = 4;
uint64_t x330 = UINT64_MAX;
int32_t t84 = 11578087;
uint32_t x342 = 12610U;
volatile int32_t t86 = -133752302;
volatile uint32_t x356 = UINT32_MAX;
volatile int32_t t88 = -788;
uint16_t x357 = 33U;
uint16_t x359 = 0U;
volatile int16_t x361 = -1;
int8_t x362 = INT8_MAX;
volatile int32_t t90 = 99;
static uint32_t x368 = 2U;
static volatile uint8_t x371 = UINT8_MAX;
static uint64_t x380 = 10397589098013015LLU;
static int64_t t95 = INT64_MIN;
int64_t x386 = -1596642554LL;
int8_t x388 = INT8_MIN;
static int8_t x389 = INT8_MIN;
static volatile int64_t x390 = -1LL;
volatile uint64_t x397 = 210213300LLU;
static uint32_t x400 = UINT32_MAX;


void f0(void) {
	static volatile uint64_t x2 = 3414284666722404379LLU;
	volatile uint16_t x3 = UINT16_MAX;
	uint64_t t0 = 13401315LLU;

	t0 = (x1|((x2|x3)==x4));

	if (t0 != 242159702LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = INT32_MAX;
	int16_t x6 = INT16_MIN;
	uint32_t x8 = UINT32_MAX;
	static int32_t t1 = INT32_MAX;

	t1 = (x5|((x6|x7)==x8));

	if (t1 != INT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -22;
	static uint16_t x10 = 12U;
	volatile uint16_t x11 = UINT16_MAX;
	int8_t x12 = -1;
	int32_t t2 = 9705778;

	t2 = (x9|((x10|x11)==x12));

	if (t2 != -22) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = 3;
	volatile int64_t x14 = -1LL;
	int8_t x15 = 14;
	volatile int32_t t3 = 197450979;

	t3 = (x13|((x14|x15)==x16));

	if (t3 != 3) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -64104964LL;
	static volatile uint32_t x18 = UINT32_MAX;
	uint64_t x19 = UINT64_MAX;
	uint32_t x20 = 6141334U;

	t4 = (x17|((x18|x19)==x20));

	if (t4 != -64104964LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	int16_t x24 = -1;
	volatile int32_t t5 = 874189;

	t5 = (x21|((x22|x23)==x24));

	if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -6;
	int32_t x26 = 772470564;
	uint32_t x27 = 201452936U;
	int8_t x28 = INT8_MIN;
	int32_t t6 = 54865228;

	t6 = (x25|((x26|x27)==x28));

	if (t6 != -6) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 14755369LLU;
	uint8_t x30 = 5U;
	volatile int16_t x32 = INT16_MIN;
	volatile uint64_t t7 = 368LLU;

	t7 = (x29|((x30|x31)==x32));

	if (t7 != 14755369LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x34 = -1;
	static uint32_t x35 = 8103551U;
	int32_t x36 = INT32_MIN;

	t8 = (x33|((x34|x35)==x36));

	if (t8 != INT32_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MIN;
	int64_t x40 = -1LL;

	t9 = (x37|((x38|x39)==x40));

	if (t9 != -2147483647) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = INT16_MIN;
	int32_t x42 = INT32_MIN;

	t10 = (x41|((x42|x43)==x44));

	if (t10 != -32768) { NG(); } else { ; }
	
}

void f11(void) {
	static uint64_t x45 = 46308666LLU;
	uint32_t x47 = 9851U;
	volatile int8_t x48 = INT8_MAX;

	t11 = (x45|((x46|x47)==x48));

	if (t11 != 46308666LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x49 = 16653260944LLU;
	int8_t x52 = -2;
	static volatile uint64_t t12 = 22470354872302645LLU;

	t12 = (x49|((x50|x51)==x52));

	if (t12 != 16653260944LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	static uint8_t x54 = 44U;
	int32_t x55 = INT32_MIN;
	int64_t x56 = -2852705724880184LL;
	volatile int32_t t13 = -3068120;

	t13 = (x53|((x54|x55)==x56));

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 234U;
	int8_t x58 = -1;
	static int16_t x59 = INT16_MIN;
	int64_t x60 = INT64_MAX;
	volatile uint32_t t14 = 3088U;

	t14 = (x57|((x58|x59)==x60));

	if (t14 != 234U) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x63 = INT64_MIN;
	int32_t x64 = -1;
	volatile int32_t t15 = 3962127;

	t15 = (x61|((x62|x63)==x64));

	if (t15 != -3749) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = INT16_MIN;
	static uint64_t x66 = UINT64_MAX;
	volatile int8_t x67 = INT8_MIN;
	uint16_t x68 = 127U;
	static volatile int32_t t16 = -929;

	t16 = (x65|((x66|x67)==x68));

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = -1;
	volatile uint64_t x71 = 6617046711893LLU;
	uint64_t x72 = 65585LLU;
	static volatile int32_t t17 = -1;

	t17 = (x69|((x70|x71)==x72));

	if (t17 != -128) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -1;
	static uint8_t x74 = UINT8_MAX;
	volatile int32_t t18 = -46442;

	t18 = (x73|((x74|x75)==x76));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 0;
	volatile uint64_t x78 = UINT64_MAX;
	int64_t x79 = INT64_MIN;
	int32_t t19 = 7007;

	t19 = (x77|((x78|x79)==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = INT32_MIN;
	static volatile int32_t x83 = INT32_MIN;
	static volatile int32_t t20 = -1620;

	t20 = (x81|((x82|x83)==x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x85 = 20067092587466LLU;
	static int8_t x86 = INT8_MAX;
	int64_t x87 = -1LL;
	static int64_t x88 = -1LL;
	uint64_t t21 = 9050905109547LLU;

	t21 = (x85|((x86|x87)==x88));

	if (t21 != 20067092587467LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x90 = INT16_MIN;
	int64_t x91 = 489374564508739LL;
	volatile int8_t x92 = -26;
	volatile int32_t t22 = INT32_MIN;

	t22 = (x89|((x90|x91)==x92));

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x93 = -1;
	uint16_t x94 = 0U;
	volatile int64_t x95 = INT64_MAX;
	volatile int32_t x96 = INT32_MAX;
	int32_t t23 = -449344090;

	t23 = (x93|((x94|x95)==x96));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x98 = -1;
	int32_t x100 = INT32_MIN;

	t24 = (x97|((x98|x99)==x100));

	if (t24 != 32767) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 0;
	int32_t x103 = -14;
	int32_t x104 = 2678;
	int32_t t25 = 1357;

	t25 = (x101|((x102|x103)==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 10240688LLU;
	int64_t x106 = INT64_MIN;
	volatile uint64_t x108 = UINT64_MAX;
	uint64_t t26 = 1251310292312LLU;

	t26 = (x105|((x106|x107)==x108));

	if (t26 != 10240688LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = 0;
	uint32_t x110 = UINT32_MAX;
	static uint32_t x111 = 9488219U;
	volatile uint32_t x112 = 29190U;
	volatile int32_t t27 = -11406;

	t27 = (x109|((x110|x111)==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x114 = 679184330974814LL;
	uint32_t x115 = 3085815U;
	int16_t x116 = -1;
	int32_t t28 = 125;

	t28 = (x113|((x114|x115)==x116));

	if (t28 != 7) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = -3;
	int8_t x119 = INT8_MIN;
	int16_t x120 = 3396;
	static int64_t t29 = INT64_MAX;

	t29 = (x117|((x118|x119)==x120));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	static uint8_t x122 = UINT8_MAX;
	uint16_t x123 = 217U;
	int32_t x124 = INT32_MAX;
	int32_t t30 = -23536;

	t30 = (x121|((x122|x123)==x124));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 6835U;
	static int32_t x126 = INT32_MAX;
	static volatile int8_t x127 = INT8_MAX;
	volatile int32_t t31 = -338618;

	t31 = (x125|((x126|x127)==x128));

	if (t31 != 6835) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	uint32_t x131 = 1562U;
	volatile uint64_t t32 = UINT64_MAX;

	t32 = (x129|((x130|x131)==x132));

	if (t32 != UINT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = -7;
	int64_t x134 = INT64_MAX;
	volatile uint8_t x135 = 4U;
	int32_t x136 = -22767;
	int32_t t33 = 45844442;

	t33 = (x133|((x134|x135)==x136));

	if (t33 != -7) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = 1U;
	uint8_t x138 = 74U;
	int8_t x140 = INT8_MIN;
	static int32_t t34 = -16;

	t34 = (x137|((x138|x139)==x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint8_t x141 = UINT8_MAX;
	volatile int32_t x142 = -1;
	int64_t x143 = INT64_MAX;
	int32_t x144 = INT32_MIN;
	static int32_t t35 = 1103867;

	t35 = (x141|((x142|x143)==x144));

	if (t35 != 255) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x145 = UINT8_MAX;
	int32_t x146 = INT32_MIN;
	static uint32_t x147 = UINT32_MAX;
	int16_t x148 = -1;
	volatile int32_t t36 = -59753854;

	t36 = (x145|((x146|x147)==x148));

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = UINT16_MAX;
	volatile int32_t x150 = INT32_MIN;
	int32_t x151 = 2179801;
	int8_t x152 = 9;
	int32_t t37 = -192887489;

	t37 = (x149|((x150|x151)==x152));

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = 91681411LL;
	static uint16_t x154 = UINT16_MAX;
	int32_t x155 = INT32_MIN;
	int64_t t38 = 2151567294566LL;

	t38 = (x153|((x154|x155)==x156));

	if (t38 != 91681411LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = INT32_MIN;
	int64_t x158 = 36939638920LL;
	int64_t x159 = INT64_MIN;
	volatile int32_t t39 = INT32_MIN;

	t39 = (x157|((x158|x159)==x160));

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	int64_t x162 = -428057571371575732LL;
	volatile int32_t t40 = -308993;

	t40 = (x161|((x162|x163)==x164));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = INT8_MAX;
	int32_t t41 = -662630106;

	t41 = (x165|((x166|x167)==x168));

	if (t41 != 127) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -1;
	static int32_t x170 = INT32_MAX;
	volatile int64_t x171 = INT64_MAX;
	int8_t x172 = -2;
	static int32_t t42 = -493;

	t42 = (x169|((x170|x171)==x172));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x175 = 29168U;
	uint8_t x176 = UINT8_MAX;
	int32_t t43 = 708881831;

	t43 = (x173|((x174|x175)==x176));

	if (t43 != 65535) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 122U;
	uint32_t x178 = UINT32_MAX;
	uint32_t x179 = 961613908U;
	int8_t x180 = INT8_MIN;
	int32_t t44 = -40338;

	t44 = (x177|((x178|x179)==x180));

	if (t44 != 122) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = -7;
	static int8_t x182 = INT8_MIN;
	uint8_t x183 = 73U;
	int32_t t45 = -1727704;

	t45 = (x181|((x182|x183)==x184));

	if (t45 != -7) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MAX;
	volatile uint8_t x186 = 10U;
	int8_t x187 = INT8_MIN;
	volatile uint64_t x188 = 536731193903478LLU;

	t46 = (x185|((x186|x187)==x188));

	if (t46 != INT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = -23;
	int64_t x191 = INT64_MIN;
	int32_t t47 = 3;

	t47 = (x189|((x190|x191)==x192));

	if (t47 != -23) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -924;
	uint32_t x194 = UINT32_MAX;
	static volatile uint16_t x195 = 7546U;
	static int8_t x196 = INT8_MAX;
	volatile int32_t t48 = 10;

	t48 = (x193|((x194|x195)==x196));

	if (t48 != -924) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x198 = INT64_MAX;
	static int8_t x199 = INT8_MIN;
	volatile int64_t x200 = INT64_MIN;
	volatile int32_t t49 = -1883;

	t49 = (x197|((x198|x199)==x200));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	int64_t x202 = 1762559912016136570LL;
	uint8_t x203 = 19U;
	int8_t x204 = -1;
	volatile int32_t t50 = -281;

	t50 = (x201|((x202|x203)==x204));

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x206 = INT16_MIN;
	uint16_t x207 = UINT16_MAX;
	static int32_t x208 = -1;
	int32_t t51 = 30;

	t51 = (x205|((x206|x207)==x208));

	if (t51 != 3) { NG(); } else { ; }
	
}

void f52(void) {
	static uint8_t x209 = UINT8_MAX;
	int16_t x210 = -1;
	static uint8_t x211 = 5U;
	static int32_t x212 = 37082755;
	volatile int32_t t52 = -2;

	t52 = (x209|((x210|x211)==x212));

	if (t52 != 255) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x213 = UINT8_MAX;
	uint16_t x214 = 0U;
	static int8_t x215 = INT8_MAX;
	int32_t x216 = INT32_MIN;

	t53 = (x213|((x214|x215)==x216));

	if (t53 != 255) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x217 = 3U;
	volatile uint32_t x218 = 162U;
	uint32_t x219 = 1U;
	int16_t x220 = INT16_MIN;
	volatile uint32_t t54 = 3938U;

	t54 = (x217|((x218|x219)==x220));

	if (t54 != 3U) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x221 = INT8_MAX;
	volatile int32_t x222 = INT32_MIN;
	volatile uint8_t x223 = UINT8_MAX;
	int32_t t55 = -3;

	t55 = (x221|((x222|x223)==x224));

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = 4255740788659LL;
	uint32_t x226 = 36766025U;
	static uint64_t x227 = UINT64_MAX;
	int32_t x228 = INT32_MIN;

	t56 = (x225|((x226|x227)==x228));

	if (t56 != 4255740788659LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -1LL;
	volatile int64_t x230 = INT64_MIN;
	volatile uint32_t x231 = 526U;
	volatile int64_t x232 = 23910084LL;

	t57 = (x229|((x230|x231)==x232));

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x234 = -1LL;
	volatile int16_t x235 = INT16_MIN;
	int64_t x236 = 889LL;
	volatile int32_t t58 = INT32_MAX;

	t58 = (x233|((x234|x235)==x236));

	if (t58 != INT32_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x237 = -11757;
	int32_t x239 = INT32_MIN;
	uint32_t x240 = 1634660936U;
	int32_t t59 = 4;

	t59 = (x237|((x238|x239)==x240));

	if (t59 != -11757) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x241 = -1;
	int64_t x242 = INT64_MIN;
	uint16_t x243 = 105U;
	static volatile int32_t x244 = -1;
	int32_t t60 = -1;

	t60 = (x241|((x242|x243)==x244));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x245 = 1723U;
	int8_t x246 = -3;
	int8_t x247 = INT8_MIN;
	int8_t x248 = INT8_MIN;
	static volatile int32_t t61 = 1821833;

	t61 = (x245|((x246|x247)==x248));

	if (t61 != 1723) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = 38553763987LL;
	static int64_t x250 = 288922840984207LL;
	int64_t x251 = 201896466875535930LL;
	int32_t x252 = 162159128;
	static int64_t t62 = 11549LL;

	t62 = (x249|((x250|x251)==x252));

	if (t62 != 38553763987LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = 9;
	uint32_t x254 = 60285U;
	static int8_t x255 = INT8_MAX;
	static int16_t x256 = INT16_MIN;
	static int32_t t63 = -5337;

	t63 = (x253|((x254|x255)==x256));

	if (t63 != 9) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = UINT8_MAX;
	volatile uint8_t x258 = 40U;
	int8_t x259 = INT8_MIN;
	int32_t t64 = 126;

	t64 = (x257|((x258|x259)==x260));

	if (t64 != 255) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 0U;
	uint16_t x263 = 1001U;
	int32_t t65 = 4;

	t65 = (x261|((x262|x263)==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x265 = 1U;
	static int16_t x266 = -1;
	volatile int8_t x268 = 4;
	volatile int32_t t66 = 3;

	t66 = (x265|((x266|x267)==x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -1LL;
	int64_t x270 = -1LL;
	int64_t x271 = INT64_MAX;
	volatile int64_t x272 = INT64_MIN;
	volatile int64_t t67 = 990071053459186678LL;

	t67 = (x269|((x270|x271)==x272));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x273 = INT32_MIN;
	int16_t x274 = INT16_MIN;
	static uint16_t x275 = UINT16_MAX;
	static int8_t x276 = INT8_MIN;

	t68 = (x273|((x274|x275)==x276));

	if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = -1;
	int8_t x278 = INT8_MIN;
	int8_t x279 = INT8_MIN;
	int32_t x280 = -1;
	int32_t t69 = -212;

	t69 = (x277|((x278|x279)==x280));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	static uint64_t x281 = UINT64_MAX;
	static volatile int64_t x282 = INT64_MIN;
	uint16_t x284 = 16313U;

	t70 = (x281|((x282|x283)==x284));

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = -1;
	int8_t x287 = 13;
	int16_t x288 = INT16_MIN;
	int32_t t71 = -1;

	t71 = (x285|((x286|x287)==x288));

	if (t71 != -1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x290 = 30U;
	int32_t x291 = INT32_MIN;
	int64_t x292 = INT64_MAX;
	volatile int64_t t72 = 65716492366841531LL;

	t72 = (x289|((x290|x291)==x292));

	if (t72 != 2429337032297LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x295 = -359;
	static int32_t x296 = INT32_MIN;
	volatile int32_t t73 = 119729;

	t73 = (x293|((x294|x295)==x296));

	if (t73 != 4) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 5326147LLU;
	int64_t x298 = INT64_MIN;
	int64_t x299 = INT64_MAX;
	uint32_t x300 = 844426U;
	volatile uint64_t t74 = 541954845LLU;

	t74 = (x297|((x298|x299)==x300));

	if (t74 != 5326147LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x302 = INT8_MAX;
	uint64_t x303 = UINT64_MAX;

	t75 = (x301|((x302|x303)==x304));

	if (t75 != INT64_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = 1963;
	volatile int16_t x307 = INT16_MIN;
	int64_t x308 = -1LL;

	t76 = (x305|((x306|x307)==x308));

	if (t76 != 1963) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = UINT16_MAX;
	uint32_t x311 = 318182514U;

	t77 = (x309|((x310|x311)==x312));

	if (t77 != 65535) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x314 = UINT8_MAX;
	int8_t x315 = 1;
	volatile int32_t x316 = INT32_MIN;
	int32_t t78 = 17329062;

	t78 = (x313|((x314|x315)==x316));

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x317 = INT64_MAX;
	static uint32_t x318 = 403356131U;
	volatile int64_t x319 = 1936LL;
	uint32_t x320 = 430780289U;
	volatile int64_t t79 = INT64_MAX;

	t79 = (x317|((x318|x319)==x320));

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = -57;
	static volatile int64_t x322 = INT64_MAX;
	volatile int16_t x323 = INT16_MAX;
	uint32_t x324 = 352514289U;
	int32_t t80 = 13274214;

	t80 = (x321|((x322|x323)==x324));

	if (t80 != -57) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -42;
	volatile int64_t x326 = INT64_MIN;
	static volatile uint64_t x327 = UINT64_MAX;
	int64_t x328 = INT64_MIN;
	static int32_t t81 = 119947047;

	t81 = (x325|((x326|x327)==x328));

	if (t81 != -42) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x331 = 4028849;
	uint8_t x332 = 7U;
	volatile int32_t t82 = -5485;

	t82 = (x329|((x330|x331)==x332));

	if (t82 != 4) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -1;
	static int16_t x334 = INT16_MIN;
	int8_t x335 = -1;
	int32_t x336 = -1;
	volatile int32_t t83 = 2;

	t83 = (x333|((x334|x335)==x336));

	if (t83 != -1) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = INT8_MAX;
	int32_t x338 = -7505;
	int64_t x339 = -1LL;
	volatile int64_t x340 = INT64_MIN;

	t84 = (x337|((x338|x339)==x340));

	if (t84 != 127) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 0U;
	uint16_t x343 = UINT16_MAX;
	uint64_t x344 = 39LLU;
	int32_t t85 = -23775;

	t85 = (x341|((x342|x343)==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = 6424;
	volatile uint16_t x346 = UINT16_MAX;
	static int32_t x347 = INT32_MAX;
	static int32_t x348 = -1;

	t86 = (x345|((x346|x347)==x348));

	if (t86 != 6424) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -1;
	uint8_t x350 = 2U;
	int8_t x351 = -1;
	uint16_t x352 = UINT16_MAX;
	static volatile int32_t t87 = 917;

	t87 = (x349|((x350|x351)==x352));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = 2190;
	int32_t x354 = INT32_MIN;
	int32_t x355 = -1;

	t88 = (x353|((x354|x355)==x356));

	if (t88 != 2191) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x358 = -1532;
	volatile int32_t x360 = 604;
	volatile int32_t t89 = 836757198;

	t89 = (x357|((x358|x359)==x360));

	if (t89 != 33) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x363 = 1556994152LLU;
	int8_t x364 = -1;

	t90 = (x361|((x362|x363)==x364));

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 0U;
	int64_t x366 = 26LL;
	uint16_t x367 = 1U;
	volatile int32_t t91 = -3193364;

	t91 = (x365|((x366|x367)==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	volatile int16_t x370 = INT16_MAX;
	int64_t x372 = INT64_MAX;
	volatile int32_t t92 = 1;

	t92 = (x369|((x370|x371)==x372));

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = UINT8_MAX;
	volatile uint32_t x374 = UINT32_MAX;
	uint8_t x375 = 4U;
	volatile int32_t x376 = -1204;
	int32_t t93 = 154;

	t93 = (x373|((x374|x375)==x376));

	if (t93 != 255) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x377 = 5041;
	uint8_t x378 = 30U;
	static uint64_t x379 = 605369325903LLU;
	static int32_t t94 = 896418571;

	t94 = (x377|((x378|x379)==x380));

	if (t94 != 5041) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x381 = INT64_MIN;
	int16_t x382 = -3;
	int64_t x383 = 15LL;
	int32_t x384 = INT32_MIN;

	t95 = (x381|((x382|x383)==x384));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x385 = -1LL;
	int8_t x387 = INT8_MIN;
	static int64_t t96 = -129781756437062LL;

	t96 = (x385|((x386|x387)==x388));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x391 = INT8_MIN;
	int16_t x392 = INT16_MIN;
	int32_t t97 = 9632575;

	t97 = (x389|((x390|x391)==x392));

	if (t97 != -128) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x393 = 1;
	static int16_t x394 = INT16_MIN;
	int8_t x395 = 36;
	uint64_t x396 = 0LLU;
	volatile int32_t t98 = 29;

	t98 = (x393|((x394|x395)==x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x398 = -10478;
	static int16_t x399 = -1;
	static uint64_t t99 = 990510021001LLU;

	t99 = (x397|((x398|x399)==x400));

	if (t99 != 210213301LLU) { NG(); } else { ; }
	
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

