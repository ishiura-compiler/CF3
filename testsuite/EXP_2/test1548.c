#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = INT32_MIN;
uint64_t x16 = 118288LLU;
volatile int8_t x20 = INT8_MIN;
volatile uint32_t x25 = 236U;
volatile int16_t x33 = INT16_MIN;
uint64_t x36 = 11471652603LLU;
int8_t x52 = 58;
int32_t x54 = INT32_MIN;
int32_t x60 = INT32_MIN;
static uint32_t x76 = 883653486U;
static int32_t x84 = -1;
int64_t x87 = 1724714009370328731LL;
volatile uint64_t t19 = 757401384885636LLU;
static volatile int8_t x91 = -1;
static int64_t t24 = INT64_MAX;
uint8_t x114 = 1U;
volatile int32_t t25 = -164;
int8_t x117 = 0;
static int8_t x120 = -1;
volatile int32_t t26 = -3438801;
int16_t x124 = -2;
static uint32_t t29 = 119U;
int8_t x146 = 59;
int32_t x151 = INT32_MIN;
int32_t x156 = INT32_MAX;
uint64_t t35 = 2767704167637153LLU;
int8_t x159 = -1;
volatile uint8_t x160 = 31U;
static int32_t x162 = INT32_MAX;
int64_t t38 = 28147006036LL;
volatile int32_t t39 = 58577;
uint16_t x173 = 32220U;
uint32_t x179 = UINT32_MAX;
int64_t x184 = -1LL;
int64_t t42 = -10LL;
int8_t x201 = -14;
int32_t t47 = -1;
uint32_t t49 = 2117912U;
int8_t x223 = -1;
int32_t x224 = -54355;
uint8_t x232 = 60U;
int64_t x236 = INT64_MIN;
int16_t x244 = 1;
int64_t t58 = 1LL;
int64_t t60 = -3453626962883LL;
volatile uint32_t x263 = 2U;
static uint32_t x265 = 38U;
int32_t x270 = INT32_MIN;
uint64_t x273 = UINT64_MAX;
volatile int8_t x276 = INT8_MIN;
int64_t x286 = INT64_MIN;
int16_t x289 = INT16_MIN;
uint64_t x292 = 30863892141028851LLU;
int8_t x296 = -1;
int8_t x302 = -1;
int16_t x306 = -1;
uint64_t x310 = 87935LLU;
int16_t x311 = -1;
uint16_t x314 = 1844U;
int16_t x315 = INT16_MIN;
int64_t t75 = -799549LL;
volatile int8_t x336 = INT8_MIN;
int64_t x337 = INT64_MIN;
volatile int64_t t81 = INT64_MIN;
uint8_t x356 = 36U;
int8_t x358 = INT8_MIN;
uint16_t x361 = UINT16_MAX;
uint64_t x364 = 17139324317LLU;
uint64_t t86 = 4097285LLU;
volatile int32_t x370 = -27;
volatile uint16_t x375 = 1971U;
int64_t x378 = INT64_MIN;
uint32_t t90 = 5U;
volatile uint32_t x383 = 3465824U;
int8_t x384 = -1;
int16_t x386 = INT16_MAX;
uint16_t x393 = 16U;
int16_t x396 = INT16_MIN;
volatile int32_t t94 = 4286;
volatile int8_t x400 = INT8_MIN;
volatile uint16_t x406 = 1U;
int64_t x408 = INT64_MIN;
int16_t x409 = INT16_MIN;
int32_t t98 = -5227202;
int32_t x413 = INT32_MAX;
int64_t x415 = INT64_MAX;
int64_t t99 = -1LL;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static int8_t x2 = -9;
	static int64_t x4 = INT64_MIN;
	static int64_t t0 = INT64_MIN;

	t0 = ((x1*(x2<=x3))+x4);

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -5;
	volatile uint16_t x6 = UINT16_MAX;
	static int64_t x7 = -1LL;
	int8_t x8 = -1;
	volatile int32_t t1 = -1070;

	t1 = ((x5*(x6<=x7))+x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 7722U;
	static int32_t x10 = -1;
	uint64_t x11 = 113502101580252LLU;
	int32_t x12 = INT32_MIN;
	int32_t t2 = INT32_MIN;

	t2 = ((x9*(x10<=x11))+x12);

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = -1;
	uint32_t x14 = 232U;
	volatile uint16_t x15 = UINT16_MAX;
	static volatile uint64_t t3 = 656150479LLU;

	t3 = ((x13*(x14<=x15))+x16);

	if (t3 != 118287LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = UINT64_MAX;
	uint8_t x18 = UINT8_MAX;
	uint8_t x19 = UINT8_MAX;
	static uint64_t t4 = 792169812LLU;

	t4 = ((x17*(x18<=x19))+x20);

	if (t4 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = INT64_MAX;
	static int32_t x22 = INT32_MIN;
	volatile uint32_t x23 = 12U;
	int8_t x24 = INT8_MIN;
	static volatile int64_t t5 = -68092658141LL;

	t5 = ((x21*(x22<=x23))+x24);

	if (t5 != -128LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = INT64_MIN;
	uint8_t x27 = 0U;
	int64_t x28 = -319871092168LL;
	int64_t t6 = 59915418973LL;

	t6 = ((x25*(x26<=x27))+x28);

	if (t6 != -319871091932LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	int32_t x30 = -240;
	int8_t x31 = -1;
	uint64_t x32 = 167LLU;
	volatile uint64_t t7 = 29608LLU;

	t7 = ((x29*(x30<=x31))+x32);

	if (t7 != 9223372036854775975LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x34 = 29583499U;
	int8_t x35 = INT8_MIN;
	uint64_t t8 = 553237220LLU;

	t8 = ((x33*(x34<=x35))+x36);

	if (t8 != 11471619835LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = INT32_MIN;
	uint8_t x38 = 16U;
	volatile int16_t x39 = INT16_MIN;
	static int16_t x40 = INT16_MIN;
	int32_t t9 = 25;

	t9 = ((x37*(x38<=x39))+x40);

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x45 = INT16_MAX;
	static uint8_t x46 = UINT8_MAX;
	int8_t x47 = -1;
	int64_t x48 = INT64_MIN;
	volatile int64_t t10 = INT64_MIN;

	t10 = ((x45*(x46<=x47))+x48);

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x49 = INT64_MIN;
	int32_t x50 = INT32_MIN;
	int64_t x51 = INT64_MIN;
	static int64_t t11 = -6992LL;

	t11 = ((x49*(x50<=x51))+x52);

	if (t11 != 58LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = -47552414;
	static int8_t x55 = INT8_MIN;
	int64_t x56 = 12439276221484LL;
	int64_t t12 = -88615432LL;

	t12 = ((x53*(x54<=x55))+x56);

	if (t12 != 12439228669070LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x57 = 1;
	static uint16_t x58 = 27420U;
	static uint64_t x59 = 2LLU;
	volatile int32_t t13 = INT32_MIN;

	t13 = ((x57*(x58<=x59))+x60);

	if (t13 != INT32_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = -1;
	int32_t x62 = INT32_MIN;
	uint8_t x63 = 23U;
	int16_t x64 = INT16_MIN;
	int32_t t14 = 3;

	t14 = ((x61*(x62<=x63))+x64);

	if (t14 != -32769) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = UINT16_MAX;
	uint8_t x66 = UINT8_MAX;
	static uint32_t x67 = 498384U;
	static uint16_t x68 = 2U;
	volatile int32_t t15 = 4;

	t15 = ((x65*(x66<=x67))+x68);

	if (t15 != 65537) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = -1;
	static int8_t x70 = INT8_MAX;
	int8_t x71 = INT8_MIN;
	int16_t x72 = INT16_MIN;
	volatile int32_t t16 = 99311;

	t16 = ((x69*(x70<=x71))+x72);

	if (t16 != -32768) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = 49599U;
	volatile int16_t x74 = INT16_MIN;
	static volatile uint32_t x75 = UINT32_MAX;
	uint32_t t17 = 213771557U;

	t17 = ((x73*(x74<=x75))+x76);

	if (t17 != 883703085U) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x81 = INT32_MIN;
	volatile int16_t x82 = INT16_MIN;
	static int64_t x83 = INT64_MIN;
	int32_t t18 = -19734801;

	t18 = ((x81*(x82<=x83))+x84);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x85 = UINT64_MAX;
	volatile int32_t x86 = INT32_MAX;
	int32_t x88 = INT32_MAX;

	t19 = ((x85*(x86<=x87))+x88);

	if (t19 != 2147483646LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x89 = INT16_MIN;
	int32_t x90 = INT32_MIN;
	uint32_t x92 = UINT32_MAX;
	static uint32_t t20 = 178096155U;

	t20 = ((x89*(x90<=x91))+x92);

	if (t20 != 4294934527U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = INT8_MAX;
	int16_t x94 = INT16_MIN;
	int16_t x95 = 58;
	volatile int64_t x96 = -4829LL;
	static volatile int64_t t21 = -260140625813666LL;

	t21 = ((x93*(x94<=x95))+x96);

	if (t21 != -4702LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x101 = INT16_MIN;
	volatile int16_t x102 = INT16_MIN;
	int8_t x103 = INT8_MIN;
	static uint16_t x104 = UINT16_MAX;
	static int32_t t22 = -6707377;

	t22 = ((x101*(x102<=x103))+x104);

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = INT8_MIN;
	volatile uint32_t x106 = UINT32_MAX;
	int16_t x107 = 9;
	int64_t x108 = 13LL;
	int64_t t23 = -9989294484461LL;

	t23 = ((x105*(x106<=x107))+x108);

	if (t23 != 13LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = INT64_MAX;
	int8_t x110 = -1;
	uint16_t x111 = UINT16_MAX;
	int16_t x112 = 0;

	t24 = ((x109*(x110<=x111))+x112);

	if (t24 != INT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = 4279;
	static int64_t x115 = INT64_MIN;
	int8_t x116 = -1;

	t25 = ((x113*(x114<=x115))+x116);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint8_t x118 = UINT8_MAX;
	static volatile int32_t x119 = -382;

	t26 = ((x117*(x118<=x119))+x120);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = INT32_MAX;
	int8_t x122 = 1;
	volatile int16_t x123 = INT16_MIN;
	int32_t t27 = 11737946;

	t27 = ((x121*(x122<=x123))+x124);

	if (t27 != -2) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x125 = INT64_MIN;
	volatile uint8_t x126 = 15U;
	uint32_t x127 = 1029091798U;
	uint32_t x128 = 397U;
	volatile int64_t t28 = 1058631064LL;

	t28 = ((x125*(x126<=x127))+x128);

	if (t28 != -9223372036854775411LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x129 = 73U;
	int16_t x130 = INT16_MAX;
	uint16_t x131 = 139U;
	int8_t x132 = INT8_MIN;

	t29 = ((x129*(x130<=x131))+x132);

	if (t29 != 4294967168U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x133 = UINT64_MAX;
	int16_t x134 = INT16_MAX;
	volatile int16_t x135 = -1;
	volatile int16_t x136 = 2366;
	volatile uint64_t t30 = 0LLU;

	t30 = ((x133*(x134<=x135))+x136);

	if (t30 != 2366LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x137 = 21LLU;
	int16_t x138 = -348;
	int32_t x139 = INT32_MIN;
	volatile int8_t x140 = INT8_MIN;
	volatile uint64_t t31 = 22804744306LLU;

	t31 = ((x137*(x138<=x139))+x140);

	if (t31 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x141 = -1;
	int16_t x142 = INT16_MIN;
	int8_t x143 = INT8_MIN;
	int8_t x144 = INT8_MIN;
	int32_t t32 = -2048511;

	t32 = ((x141*(x142<=x143))+x144);

	if (t32 != -129) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x145 = 1U;
	static int16_t x147 = INT16_MIN;
	int16_t x148 = 95;
	volatile uint32_t t33 = 584403U;

	t33 = ((x145*(x146<=x147))+x148);

	if (t33 != 95U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x149 = INT16_MAX;
	int8_t x150 = INT8_MIN;
	int8_t x152 = INT8_MIN;
	int32_t t34 = -1;

	t34 = ((x149*(x150<=x151))+x152);

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x153 = 2LLU;
	int32_t x154 = INT32_MIN;
	int32_t x155 = -1;

	t35 = ((x153*(x154<=x155))+x156);

	if (t35 != 2147483649LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x157 = 11272;
	volatile uint16_t x158 = UINT16_MAX;
	static int32_t t36 = 3;

	t36 = ((x157*(x158<=x159))+x160);

	if (t36 != 31) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x161 = INT64_MIN;
	volatile int64_t x163 = INT64_MAX;
	static volatile int64_t x164 = INT64_MAX;
	int64_t t37 = 645511883043LL;

	t37 = ((x161*(x162<=x163))+x164);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x165 = UINT8_MAX;
	int32_t x166 = INT32_MIN;
	static int32_t x167 = -71;
	int64_t x168 = INT64_MIN;

	t38 = ((x165*(x166<=x167))+x168);

	if (t38 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x169 = UINT16_MAX;
	static int32_t x170 = 1832;
	int64_t x171 = 5495713333886LL;
	volatile int8_t x172 = 19;

	t39 = ((x169*(x170<=x171))+x172);

	if (t39 != 65554) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x174 = 5990;
	uint16_t x175 = 1533U;
	static int16_t x176 = INT16_MIN;
	volatile int32_t t40 = 114835416;

	t40 = ((x173*(x174<=x175))+x176);

	if (t40 != -32768) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = INT8_MIN;
	static int32_t x178 = INT32_MAX;
	volatile uint64_t x180 = UINT64_MAX;
	volatile uint64_t t41 = 15839605431LLU;

	t41 = ((x177*(x178<=x179))+x180);

	if (t41 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x181 = 718440822LL;
	uint16_t x182 = 18391U;
	int16_t x183 = -1;

	t42 = ((x181*(x182<=x183))+x184);

	if (t42 != -1LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = 0;
	uint8_t x186 = 0U;
	int8_t x187 = INT8_MAX;
	int64_t x188 = -1LL;
	volatile int64_t t43 = -88053585540467LL;

	t43 = ((x185*(x186<=x187))+x188);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x189 = INT64_MIN;
	int16_t x190 = -308;
	int16_t x191 = -1;
	volatile uint32_t x192 = 14U;
	volatile int64_t t44 = 248LL;

	t44 = ((x189*(x190<=x191))+x192);

	if (t44 != -9223372036854775794LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x193 = 50;
	volatile int8_t x194 = 27;
	int16_t x195 = -890;
	int64_t x196 = -1LL;
	int64_t t45 = -1340LL;

	t45 = ((x193*(x194<=x195))+x196);

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x197 = INT8_MIN;
	int64_t x198 = INT64_MAX;
	uint8_t x199 = 2U;
	int16_t x200 = 31;
	int32_t t46 = 203594;

	t46 = ((x197*(x198<=x199))+x200);

	if (t46 != 31) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x202 = INT64_MIN;
	uint32_t x203 = UINT32_MAX;
	int16_t x204 = 1602;

	t47 = ((x201*(x202<=x203))+x204);

	if (t47 != 1588) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x205 = 1;
	volatile uint8_t x206 = 50U;
	int64_t x207 = 16LL;
	int16_t x208 = INT16_MAX;
	int32_t t48 = -1;

	t48 = ((x205*(x206<=x207))+x208);

	if (t48 != 32767) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x209 = INT16_MIN;
	uint8_t x210 = 16U;
	volatile int64_t x211 = -1LL;
	uint32_t x212 = 1329674U;

	t49 = ((x209*(x210<=x211))+x212);

	if (t49 != 1329674U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x213 = UINT16_MAX;
	int8_t x214 = 0;
	uint32_t x215 = 3565U;
	volatile int32_t x216 = INT32_MIN;
	int32_t t50 = -9441;

	t50 = ((x213*(x214<=x215))+x216);

	if (t50 != -2147418113) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x217 = INT64_MIN;
	int32_t x218 = INT32_MIN;
	static int64_t x219 = -1LL;
	uint32_t x220 = UINT32_MAX;
	int64_t t51 = 2546LL;

	t51 = ((x217*(x218<=x219))+x220);

	if (t51 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x221 = INT8_MIN;
	uint16_t x222 = 1739U;
	int32_t t52 = -16109373;

	t52 = ((x221*(x222<=x223))+x224);

	if (t52 != -54355) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x225 = -1;
	int8_t x226 = 0;
	volatile uint16_t x227 = 255U;
	uint64_t x228 = 65541455LLU;
	volatile uint64_t t53 = 129LLU;

	t53 = ((x225*(x226<=x227))+x228);

	if (t53 != 65541454LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x229 = -1;
	static uint64_t x230 = 2LLU;
	int32_t x231 = -45314909;
	static volatile int32_t t54 = -85358;

	t54 = ((x229*(x230<=x231))+x232);

	if (t54 != 59) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x233 = INT64_MAX;
	int16_t x234 = INT16_MIN;
	int32_t x235 = -1;
	int64_t t55 = -7147292LL;

	t55 = ((x233*(x234<=x235))+x236);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x237 = UINT16_MAX;
	uint32_t x238 = 3U;
	int8_t x239 = INT8_MIN;
	int64_t x240 = -3577712793LL;
	volatile int64_t t56 = -14965236LL;

	t56 = ((x237*(x238<=x239))+x240);

	if (t56 != -3577647258LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x241 = 3U;
	static volatile uint32_t x242 = 200U;
	static volatile uint32_t x243 = 0U;
	volatile int32_t t57 = -2328;

	t57 = ((x241*(x242<=x243))+x244);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x245 = INT8_MAX;
	int64_t x246 = INT64_MIN;
	uint16_t x247 = UINT16_MAX;
	int64_t x248 = -998416LL;

	t58 = ((x245*(x246<=x247))+x248);

	if (t58 != -998289LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x249 = 294899559U;
	static int16_t x250 = -653;
	uint8_t x251 = 3U;
	static int16_t x252 = -1;
	uint32_t t59 = 1629U;

	t59 = ((x249*(x250<=x251))+x252);

	if (t59 != 294899558U) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x253 = UINT32_MAX;
	volatile int8_t x254 = INT8_MAX;
	uint32_t x255 = UINT32_MAX;
	int64_t x256 = INT64_MIN;

	t60 = ((x253*(x254<=x255))+x256);

	if (t60 != -9223372032559808513LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x257 = INT8_MAX;
	int32_t x258 = -1;
	int64_t x259 = -16989599132263LL;
	int32_t x260 = INT32_MAX;
	int32_t t61 = INT32_MAX;

	t61 = ((x257*(x258<=x259))+x260);

	if (t61 != INT32_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x261 = INT8_MIN;
	volatile int64_t x262 = 159284LL;
	int32_t x264 = -1;
	int32_t t62 = -8270294;

	t62 = ((x261*(x262<=x263))+x264);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x266 = -1;
	int16_t x267 = -2947;
	static int8_t x268 = INT8_MAX;
	volatile uint32_t t63 = 776489U;

	t63 = ((x265*(x266<=x267))+x268);

	if (t63 != 127U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x269 = -1;
	uint16_t x271 = 196U;
	uint32_t x272 = UINT32_MAX;
	volatile uint32_t t64 = 23880562U;

	t64 = ((x269*(x270<=x271))+x272);

	if (t64 != 4294967294U) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x274 = 220;
	uint16_t x275 = UINT16_MAX;
	volatile uint64_t t65 = 33884653613LLU;

	t65 = ((x273*(x274<=x275))+x276);

	if (t65 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x277 = INT32_MAX;
	volatile uint16_t x278 = 0U;
	int8_t x279 = INT8_MIN;
	static int16_t x280 = INT16_MAX;
	volatile int32_t t66 = -8082;

	t66 = ((x277*(x278<=x279))+x280);

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x281 = -1LL;
	int32_t x282 = INT32_MAX;
	uint64_t x283 = 4001999472LLU;
	int16_t x284 = 11;
	volatile int64_t t67 = 0LL;

	t67 = ((x281*(x282<=x283))+x284);

	if (t67 != 10LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x285 = -1;
	int16_t x287 = INT16_MAX;
	volatile int32_t x288 = INT32_MAX;
	volatile int32_t t68 = -20532898;

	t68 = ((x285*(x286<=x287))+x288);

	if (t68 != 2147483646) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x290 = 0;
	int8_t x291 = -1;
	volatile uint64_t t69 = 28333851871045LLU;

	t69 = ((x289*(x290<=x291))+x292);

	if (t69 != 30863892141028851LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x293 = INT64_MAX;
	uint16_t x294 = 245U;
	int8_t x295 = INT8_MAX;
	volatile int64_t t70 = -57260LL;

	t70 = ((x293*(x294<=x295))+x296);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x297 = INT64_MIN;
	static volatile uint8_t x298 = 92U;
	int16_t x299 = -1;
	static int16_t x300 = INT16_MAX;
	static volatile int64_t t71 = -29179787852279057LL;

	t71 = ((x297*(x298<=x299))+x300);

	if (t71 != 32767LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint8_t x301 = 16U;
	volatile int16_t x303 = INT16_MIN;
	static int16_t x304 = 5;
	static volatile int32_t t72 = -452788;

	t72 = ((x301*(x302<=x303))+x304);

	if (t72 != 5) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x305 = INT8_MIN;
	volatile int64_t x307 = INT64_MIN;
	int64_t x308 = INT64_MIN;
	static volatile int64_t t73 = INT64_MIN;

	t73 = ((x305*(x306<=x307))+x308);

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x309 = INT16_MIN;
	static uint32_t x312 = UINT32_MAX;
	uint32_t t74 = 26283304U;

	t74 = ((x309*(x310<=x311))+x312);

	if (t74 != 4294934527U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x313 = INT64_MIN;
	int16_t x316 = INT16_MIN;

	t75 = ((x313*(x314<=x315))+x316);

	if (t75 != -32768LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int8_t x317 = INT8_MAX;
	uint64_t x318 = UINT64_MAX;
	uint16_t x319 = 6693U;
	uint32_t x320 = 1917041U;
	uint32_t t76 = 849099U;

	t76 = ((x317*(x318<=x319))+x320);

	if (t76 != 1917041U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x321 = INT32_MIN;
	static int32_t x322 = -1;
	volatile uint32_t x323 = 2243U;
	int16_t x324 = INT16_MIN;
	int32_t t77 = -70255509;

	t77 = ((x321*(x322<=x323))+x324);

	if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x325 = 2;
	static volatile uint32_t x326 = 15U;
	uint32_t x327 = 620U;
	volatile uint16_t x328 = 27402U;
	volatile int32_t t78 = 16395;

	t78 = ((x325*(x326<=x327))+x328);

	if (t78 != 27404) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x329 = UINT8_MAX;
	int8_t x330 = INT8_MIN;
	static int16_t x331 = -1;
	static int16_t x332 = INT16_MAX;
	volatile int32_t t79 = 20;

	t79 = ((x329*(x330<=x331))+x332);

	if (t79 != 33022) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = -7227447LL;
	static volatile int64_t x334 = 151740582LL;
	static int32_t x335 = -178;
	int64_t t80 = -257487840148674668LL;

	t80 = ((x333*(x334<=x335))+x336);

	if (t80 != -128LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x338 = -1;
	int8_t x339 = -8;
	volatile int64_t x340 = INT64_MIN;

	t81 = ((x337*(x338<=x339))+x340);

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = INT32_MAX;
	int32_t x342 = INT32_MIN;
	int16_t x343 = -528;
	volatile uint32_t x344 = 2435U;
	uint32_t t82 = 7931833U;

	t82 = ((x341*(x342<=x343))+x344);

	if (t82 != 2147486082U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x349 = 92U;
	volatile uint32_t x350 = UINT32_MAX;
	uint64_t x351 = 29671593454913574LLU;
	static int16_t x352 = INT16_MIN;
	volatile uint32_t t83 = 54U;

	t83 = ((x349*(x350<=x351))+x352);

	if (t83 != 4294934620U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x353 = INT16_MIN;
	int8_t x354 = INT8_MAX;
	static int64_t x355 = INT64_MIN;
	int32_t t84 = -1997300;

	t84 = ((x353*(x354<=x355))+x356);

	if (t84 != 36) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x357 = INT64_MAX;
	uint16_t x359 = 2811U;
	int16_t x360 = -12;
	int64_t t85 = 160378399266LL;

	t85 = ((x357*(x358<=x359))+x360);

	if (t85 != 9223372036854775795LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x362 = UINT64_MAX;
	static int32_t x363 = INT32_MAX;

	t86 = ((x361*(x362<=x363))+x364);

	if (t86 != 17139324317LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x365 = UINT8_MAX;
	volatile int16_t x366 = INT16_MAX;
	int8_t x367 = 0;
	static uint32_t x368 = UINT32_MAX;
	static volatile uint32_t t87 = UINT32_MAX;

	t87 = ((x365*(x366<=x367))+x368);

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x369 = INT16_MIN;
	uint64_t x371 = UINT64_MAX;
	uint16_t x372 = 694U;
	int32_t t88 = -92;

	t88 = ((x369*(x370<=x371))+x372);

	if (t88 != -32074) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x373 = -1;
	static volatile int16_t x374 = INT16_MIN;
	int16_t x376 = INT16_MIN;
	int32_t t89 = 22029550;

	t89 = ((x373*(x374<=x375))+x376);

	if (t89 != -32769) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint32_t x377 = UINT32_MAX;
	uint64_t x379 = 13363560658141875LLU;
	int16_t x380 = 1;

	t90 = ((x377*(x378<=x379))+x380);

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x381 = 10383860U;
	static int16_t x382 = -1;
	volatile uint32_t t91 = UINT32_MAX;

	t91 = ((x381*(x382<=x383))+x384);

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x385 = INT32_MAX;
	int32_t x387 = 12107;
	int16_t x388 = INT16_MAX;
	static int32_t t92 = -1;

	t92 = ((x385*(x386<=x387))+x388);

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x389 = INT32_MIN;
	int16_t x390 = INT16_MIN;
	volatile int16_t x391 = INT16_MIN;
	uint32_t x392 = 28257U;
	uint32_t t93 = 22U;

	t93 = ((x389*(x390<=x391))+x392);

	if (t93 != 2147511905U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x394 = 0;
	volatile int16_t x395 = INT16_MIN;

	t94 = ((x393*(x394<=x395))+x396);

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x397 = -1;
	static volatile int32_t x398 = 107411995;
	int64_t x399 = 6553051187LL;
	int32_t t95 = 100704;

	t95 = ((x397*(x398<=x399))+x400);

	if (t95 != -129) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x401 = 8149253U;
	int64_t x402 = INT64_MIN;
	volatile uint16_t x403 = UINT16_MAX;
	volatile int8_t x404 = INT8_MIN;
	uint32_t t96 = 7022U;

	t96 = ((x401*(x402<=x403))+x404);

	if (t96 != 8149125U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x405 = 13;
	int16_t x407 = 5;
	int64_t t97 = 30836375476LL;

	t97 = ((x405*(x406<=x407))+x408);

	if (t97 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x410 = -26;
	uint32_t x411 = UINT32_MAX;
	volatile uint16_t x412 = UINT16_MAX;

	t98 = ((x409*(x410<=x411))+x412);

	if (t98 != 32767) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x414 = 58161406LLU;
	int64_t x416 = -1LL;

	t99 = ((x413*(x414<=x415))+x416);

	if (t99 != 2147483646LL) { NG(); } else { ; }
	
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

