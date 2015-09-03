#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x3 = UINT32_MAX;
uint16_t x11 = 75U;
int32_t x13 = -1;
volatile int32_t x16 = -40034;
static int64_t t2 = 446969803968LL;
int8_t x24 = INT8_MIN;
uint32_t x26 = 7U;
int32_t x27 = INT32_MAX;
int32_t x29 = 2;
int8_t x30 = -1;
int32_t x33 = -1;
int16_t x37 = INT16_MIN;
volatile uint64_t x38 = UINT64_MAX;
uint16_t x42 = 8999U;
volatile int16_t x44 = 112;
volatile int8_t x47 = -1;
int8_t x61 = INT8_MAX;
volatile uint32_t t14 = 0U;
volatile int16_t x65 = -1;
int64_t x67 = INT64_MIN;
int64_t t15 = 1101057098180238LL;
int64_t x73 = 1581787LL;
int32_t x75 = -124455470;
uint16_t x77 = 9974U;
int16_t x79 = -1;
int16_t x82 = INT16_MAX;
volatile int64_t x84 = INT64_MAX;
int8_t x88 = -3;
static uint64_t t19 = 1538397LLU;
static volatile int64_t t21 = -40360236395281584LL;
int8_t x101 = 1;
uint8_t x106 = UINT8_MAX;
uint32_t t24 = 3026U;
int16_t x114 = 47;
static int64_t t25 = 27LL;
uint64_t t27 = 7LLU;
int64_t x126 = INT64_MIN;
static uint64_t x127 = UINT64_MAX;
int64_t x133 = 15943729870415974LL;
int32_t x135 = -92415;
int32_t x137 = INT32_MIN;
uint16_t x146 = 3U;
volatile uint32_t t33 = 208638U;
volatile uint64_t t34 = 89185474514469796LLU;
int64_t x160 = INT64_MAX;
int32_t x163 = 159194499;
int64_t t37 = -723LL;
int8_t x168 = -1;
volatile uint8_t x169 = UINT8_MAX;
uint64_t x171 = 2314LLU;
int32_t x174 = -815623;
volatile uint64_t t40 = 62374403064001675LLU;
uint64_t x179 = UINT64_MAX;
int64_t x182 = -116201316LL;
uint32_t x183 = UINT32_MAX;
static int8_t x184 = -1;
volatile uint32_t t43 = 89096511U;
int64_t x192 = 1796442768140LL;
int64_t x197 = INT64_MIN;
int32_t x198 = 5511924;
volatile int16_t x199 = -203;
static uint64_t x200 = 118547973364LLU;
uint64_t t46 = 2LLU;
int64_t x207 = -1053935525879626LL;
static volatile int64_t x208 = -1773258342LL;
int8_t x218 = INT8_MAX;
int16_t x219 = -7466;
volatile int32_t x237 = -1;
static int8_t x253 = -32;
int32_t x264 = INT32_MAX;
int64_t x266 = -1LL;
int64_t x270 = INT64_MIN;
uint32_t x272 = 19034141U;
uint32_t x286 = UINT32_MAX;
uint32_t x294 = 982923U;
static volatile uint16_t x298 = 323U;
uint64_t x305 = 4073003961834395LLU;
int32_t t73 = -30231;
uint64_t t74 = 4314LLU;
int16_t x328 = -1;
int32_t x332 = INT32_MIN;
uint64_t x346 = 2384LLU;
int8_t x350 = INT8_MIN;
int8_t x351 = INT8_MAX;
volatile uint16_t x359 = UINT16_MAX;
volatile int32_t x364 = 1;
int8_t x368 = INT8_MAX;
static int32_t x374 = -1;
int64_t x376 = INT64_MAX;
int64_t x377 = INT64_MIN;
int64_t t88 = -1921587700732LL;
uint16_t x382 = 1U;
uint32_t t89 = 5419U;
static uint16_t x387 = UINT16_MAX;
int32_t t90 = -1;
int64_t x392 = INT64_MIN;
volatile int64_t t91 = -2521088648LL;
volatile uint16_t x406 = 15U;
volatile uint8_t x407 = UINT8_MAX;
uint64_t t95 = 14112330405752LLU;
uint8_t x409 = UINT8_MAX;
int8_t x410 = -1;
int8_t x411 = INT8_MIN;
volatile int64_t x412 = -9LL;
volatile int64_t t96 = -1562039326687579LL;
uint32_t t97 = 63696U;
int16_t x417 = INT16_MAX;
volatile uint64_t x420 = 5LLU;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint8_t x2 = UINT8_MAX;
	int8_t x4 = -1;
	static uint32_t t0 = 20U;

	t0 = (x1&((x2+x3)&x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x9 = 95271561506666LLU;
	static int32_t x10 = INT32_MIN;
	uint8_t x12 = 1U;
	volatile uint64_t t1 = 1839916LLU;

	t1 = (x9&((x10+x11)&x12));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x14 = INT8_MIN;
	int64_t x15 = INT64_MAX;

	t2 = (x13&((x14+x15)&x16));

	if (t2 != 9223372036854735646LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x17 = -1;
	volatile int64_t x18 = INT64_MIN;
	int8_t x19 = 1;
	uint16_t x20 = 8U;
	int64_t t3 = 26LL;

	t3 = (x17&((x18+x19)&x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x21 = INT16_MIN;
	static int16_t x22 = -1;
	int64_t x23 = -1LL;
	volatile int64_t t4 = -20537930331878655LL;

	t4 = (x21&((x22+x23)&x24));

	if (t4 != -32768LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = 31;
	int8_t x28 = INT8_MAX;
	uint32_t t5 = 10832U;

	t5 = (x25&((x26+x27)&x28));

	if (t5 != 6U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x31 = -1;
	volatile int32_t x32 = INT32_MIN;
	int32_t t6 = -22;

	t6 = (x29&((x30+x31)&x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x34 = -1;
	volatile int64_t x35 = -1LL;
	int16_t x36 = INT16_MAX;
	volatile int64_t t7 = 3223498429LL;

	t7 = (x33&((x34+x35)&x36));

	if (t7 != 32766LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x39 = 2U;
	volatile int64_t x40 = INT64_MIN;
	uint64_t t8 = 2692457701925576151LLU;

	t8 = (x37&((x38+x39)&x40));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x41 = 3782U;
	static volatile int32_t x43 = INT32_MIN;
	int32_t t9 = 820476851;

	t9 = (x41&((x42+x43)&x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = UINT64_MAX;
	int16_t x46 = INT16_MIN;
	static int8_t x48 = INT8_MAX;
	uint64_t t10 = 937249625178544LLU;

	t10 = (x45&((x46+x47)&x48));

	if (t10 != 127LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = INT32_MIN;
	uint64_t x50 = UINT64_MAX;
	static uint16_t x51 = 52U;
	int32_t x52 = INT32_MIN;
	volatile uint64_t t11 = 17LLU;

	t11 = (x49&((x50+x51)&x52));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x53 = 27055498947265916LLU;
	int16_t x54 = INT16_MIN;
	static uint16_t x55 = 140U;
	int32_t x56 = -475306062;
	volatile uint64_t t12 = 80969335LLU;

	t12 = (x53&((x54+x55)&x56));

	if (t12 != 27055498539368448LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MAX;
	int64_t x58 = INT64_MIN;
	uint32_t x59 = 338300U;
	static int16_t x60 = INT16_MIN;
	int64_t t13 = -9046511041LL;

	t13 = (x57&((x58+x59)&x60));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x62 = INT8_MAX;
	int32_t x63 = INT32_MIN;
	volatile uint32_t x64 = 125815U;

	t14 = (x61&((x62+x63)&x64));

	if (t14 != 119U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x66 = INT32_MAX;
	uint32_t x68 = 101313U;

	t15 = (x65&((x66+x67)&x68));

	if (t15 != 101313LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x74 = INT16_MIN;
	static uint8_t x76 = 106U;
	int64_t t16 = 52917LL;

	t16 = (x73&((x74+x75)&x76));

	if (t16 != 66LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x78 = INT16_MAX;
	uint32_t x80 = 14U;
	volatile uint32_t t17 = 42568983U;

	t17 = (x77&((x78+x79)&x80));

	if (t17 != 6U) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x81 = -1;
	int16_t x83 = INT16_MIN;
	int64_t t18 = INT64_MAX;

	t18 = (x81&((x82+x83)&x84));

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x85 = -1;
	static uint32_t x86 = 2U;
	uint64_t x87 = 10859184353LLU;

	t19 = (x85&((x86+x87)&x88));

	if (t19 != 10859184353LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x93 = UINT16_MAX;
	static uint16_t x94 = 1U;
	int64_t x95 = INT64_MIN;
	int64_t x96 = INT64_MAX;
	int64_t t20 = -605623163120325467LL;

	t20 = (x93&((x94+x95)&x96));

	if (t20 != 1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = INT64_MAX;
	int16_t x98 = -1;
	int16_t x99 = INT16_MAX;
	int64_t x100 = 89601909396714LL;

	t21 = (x97&((x98+x99)&x100));

	if (t21 != 5354LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x102 = 6LLU;
	int16_t x103 = 1804;
	int64_t x104 = INT64_MIN;
	static uint64_t t22 = 368522846770LLU;

	t22 = (x101&((x102+x103)&x104));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x105 = 127U;
	int32_t x107 = 134652549;
	uint32_t x108 = 24U;
	uint32_t t23 = 146U;

	t23 = (x105&((x106+x107)&x108));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x109 = UINT8_MAX;
	volatile uint32_t x110 = 45637066U;
	int16_t x111 = INT16_MIN;
	int8_t x112 = -1;

	t24 = (x109&((x110+x111)&x112));

	if (t24 != 202U) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = -1;
	int64_t x115 = INT64_MIN;
	uint32_t x116 = 1007639U;

	t25 = (x113&((x114+x115)&x116));

	if (t25 != 7LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x117 = 158941339U;
	uint16_t x118 = UINT16_MAX;
	int16_t x119 = -4865;
	int32_t x120 = -1;
	volatile uint32_t t26 = 7968U;

	t26 = (x117&((x118+x119)&x120));

	if (t26 != 16538U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x121 = 201429U;
	int32_t x122 = -7067;
	uint64_t x123 = UINT64_MAX;
	static uint16_t x124 = 156U;

	t27 = (x121&((x122+x123)&x124));

	if (t27 != 4LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x125 = -81LL;
	int16_t x128 = INT16_MIN;
	uint64_t t28 = 1559LLU;

	t28 = (x125&((x126+x127)&x128));

	if (t28 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x129 = INT16_MIN;
	int8_t x130 = INT8_MIN;
	static int64_t x131 = INT64_MAX;
	static uint8_t x132 = UINT8_MAX;
	int64_t t29 = 10000321846481LL;

	t29 = (x129&((x130+x131)&x132));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x134 = -1;
	uint64_t x136 = 31206072003894962LLU;
	uint64_t t30 = 1141624LLU;

	t30 = (x133&((x134+x135)&x136));

	if (t30 != 11404687580332032LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x138 = INT16_MIN;
	volatile int8_t x139 = INT8_MIN;
	int32_t x140 = 16591095;
	volatile int32_t t31 = 220;

	t31 = (x137&((x138+x139)&x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x141 = UINT8_MAX;
	uint64_t x142 = 29592LLU;
	volatile int32_t x143 = INT32_MAX;
	uint8_t x144 = UINT8_MAX;
	volatile uint64_t t32 = 9LLU;

	t32 = (x141&((x142+x143)&x144));

	if (t32 != 151LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = INT16_MAX;
	volatile uint16_t x147 = UINT16_MAX;
	volatile uint32_t x148 = 68373204U;

	t33 = (x145&((x146+x147)&x148));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x149 = 44U;
	volatile uint64_t x150 = 805829536LLU;
	volatile uint8_t x151 = 1U;
	uint16_t x152 = UINT16_MAX;

	t34 = (x149&((x150+x151)&x152));

	if (t34 != 32LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x153 = 1;
	static volatile int16_t x154 = 7;
	int64_t x155 = INT64_MIN;
	int64_t x156 = INT64_MIN;
	static volatile int64_t t35 = 273665893560515594LL;

	t35 = (x153&((x154+x155)&x156));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x157 = INT64_MIN;
	static uint64_t x158 = 62186456222LLU;
	int64_t x159 = INT64_MIN;
	volatile uint64_t t36 = 5689220509368821316LLU;

	t36 = (x157&((x158+x159)&x160));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x161 = INT64_MIN;
	int32_t x162 = 9752;
	int32_t x164 = INT32_MAX;

	t37 = (x161&((x162+x163)&x164));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = 83008430016712LL;
	uint8_t x166 = 20U;
	static int16_t x167 = INT16_MIN;
	static int64_t t38 = -2523670699LL;

	t38 = (x165&((x166+x167)&x168));

	if (t38 != 83008430014464LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x170 = INT8_MIN;
	volatile int64_t x172 = INT64_MIN;
	volatile uint64_t t39 = 181LLU;

	t39 = (x169&((x170+x171)&x172));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int16_t x173 = INT16_MAX;
	int16_t x175 = -1;
	static uint64_t x176 = 14393LLU;

	t40 = (x173&((x174+x175)&x176));

	if (t40 != 2104LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x177 = 1U;
	int8_t x178 = INT8_MAX;
	int16_t x180 = INT16_MIN;
	uint64_t t41 = 376LLU;

	t41 = (x177&((x178+x179)&x180));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x181 = UINT8_MAX;
	int64_t t42 = 62098656419037898LL;

	t42 = (x181&((x182+x183)&x184));

	if (t42 != 155LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x185 = UINT32_MAX;
	uint8_t x186 = 4U;
	static int16_t x187 = INT16_MAX;
	static int32_t x188 = INT32_MIN;

	t43 = (x185&((x186+x187)&x188));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	static int32_t x189 = INT32_MIN;
	int16_t x190 = -1;
	uint64_t x191 = 1528559537115396LLU;
	uint64_t t44 = 51LLU;

	t44 = (x189&((x190+x191)&x192));

	if (t44 != 146028888064LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x193 = 962181608891LLU;
	uint32_t x194 = UINT32_MAX;
	int16_t x195 = INT16_MAX;
	volatile int16_t x196 = -5;
	static uint64_t t45 = 273848033872183LLU;

	t45 = (x193&((x194+x195)&x196));

	if (t45 != 13754LLU) { NG(); } else { ; }
	
}

void f46(void) {


	t46 = (x197&((x198+x199)&x200));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x201 = INT8_MIN;
	static int8_t x202 = -1;
	uint64_t x203 = UINT64_MAX;
	volatile uint8_t x204 = 7U;
	uint64_t t47 = 271364767378LLU;

	t47 = (x201&((x202+x203)&x204));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x205 = INT8_MIN;
	int64_t x206 = 76021LL;
	static int64_t t48 = -5414297LL;

	t48 = (x205&((x206+x207)&x208));

	if (t48 != -1053935543645824LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x209 = 0;
	static int8_t x210 = -1;
	int16_t x211 = INT16_MIN;
	static uint8_t x212 = 0U;
	volatile int32_t t49 = 3;

	t49 = (x209&((x210+x211)&x212));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x213 = -9745;
	static int64_t x214 = -79932485LL;
	uint16_t x215 = 1974U;
	volatile int16_t x216 = -1064;
	int64_t t50 = -66236LL;

	t50 = (x213&((x214+x215)&x216));

	if (t50 != -79931072LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x217 = 7642U;
	static volatile int64_t x220 = INT64_MIN;
	int64_t t51 = 285057255880LL;

	t51 = (x217&((x218+x219)&x220));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x221 = UINT32_MAX;
	uint32_t x222 = UINT32_MAX;
	static uint8_t x223 = 36U;
	int8_t x224 = -1;
	static uint32_t t52 = 406954441U;

	t52 = (x221&((x222+x223)&x224));

	if (t52 != 35U) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int64_t x229 = INT64_MIN;
	uint64_t x230 = UINT64_MAX;
	uint16_t x231 = 684U;
	static volatile int16_t x232 = INT16_MAX;
	static uint64_t t53 = 2439LLU;

	t53 = (x229&((x230+x231)&x232));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x233 = -1;
	int32_t x234 = -1;
	volatile int16_t x235 = INT16_MAX;
	int8_t x236 = -1;
	int32_t t54 = 3059486;

	t54 = (x233&((x234+x235)&x236));

	if (t54 != 32766) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x238 = 486839;
	static volatile uint64_t x239 = UINT64_MAX;
	volatile int32_t x240 = 80332;
	uint64_t t55 = 12123923LLU;

	t55 = (x237&((x238+x239)&x240));

	if (t55 != 76164LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x241 = UINT64_MAX;
	int8_t x242 = INT8_MIN;
	int8_t x243 = INT8_MIN;
	int64_t x244 = INT64_MAX;
	static uint64_t t56 = 6836LLU;

	t56 = (x241&((x242+x243)&x244));

	if (t56 != 9223372036854775552LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x245 = INT32_MIN;
	static uint32_t x246 = UINT32_MAX;
	uint16_t x247 = UINT16_MAX;
	static volatile int8_t x248 = 2;
	uint32_t t57 = 1U;

	t57 = (x245&((x246+x247)&x248));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x249 = INT8_MIN;
	static int64_t x250 = -69LL;
	volatile uint16_t x251 = UINT16_MAX;
	static int64_t x252 = -1898408675668867LL;
	volatile int64_t t58 = -221LL;

	t58 = (x249&((x250+x251)&x252));

	if (t58 != 35840LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x254 = 45U;
	int8_t x255 = -1;
	int8_t x256 = INT8_MIN;
	static volatile int32_t t59 = -6736868;

	t59 = (x253&((x254+x255)&x256));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x261 = 1U;
	int8_t x262 = -1;
	int64_t x263 = INT64_MAX;
	int64_t t60 = 28628071841025LL;

	t60 = (x261&((x262+x263)&x264));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x265 = 4632U;
	int16_t x267 = -18;
	static uint64_t x268 = 14LLU;
	volatile uint64_t t61 = 9855324LLU;

	t61 = (x265&((x266+x267)&x268));

	if (t61 != 8LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x269 = -1;
	volatile uint32_t x271 = 1502543937U;
	volatile int64_t t62 = 61260440LL;

	t62 = (x269&((x270+x271)&x272));

	if (t62 != 16908289LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x273 = INT32_MAX;
	int16_t x274 = INT16_MIN;
	uint64_t x275 = 1797318976629593LLU;
	int8_t x276 = 1;
	static volatile uint64_t t63 = 180251LLU;

	t63 = (x273&((x274+x275)&x276));

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x277 = UINT8_MAX;
	uint16_t x278 = 8504U;
	int32_t x279 = 59077591;
	int64_t x280 = INT64_MAX;
	int64_t t64 = 0LL;

	t64 = (x277&((x278+x279)&x280));

	if (t64 != 15LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint32_t x281 = 674437U;
	volatile int16_t x282 = INT16_MIN;
	int16_t x283 = INT16_MIN;
	volatile int32_t x284 = INT32_MAX;
	volatile uint32_t t65 = 466215449U;

	t65 = (x281&((x282+x283)&x284));

	if (t65 != 655360U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x285 = INT8_MAX;
	volatile uint32_t x287 = 33U;
	int8_t x288 = 2;
	volatile uint32_t t66 = 8U;

	t66 = (x285&((x286+x287)&x288));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x289 = INT16_MIN;
	int64_t x290 = 273LL;
	uint8_t x291 = 8U;
	static volatile uint8_t x292 = UINT8_MAX;
	int64_t t67 = 2967670741615LL;

	t67 = (x289&((x290+x291)&x292));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x293 = -34LL;
	static int32_t x295 = -1;
	int32_t x296 = 222252;
	volatile int64_t t68 = 54535451LL;

	t68 = (x293&((x294+x295)&x296));

	if (t68 != 156680LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x297 = INT32_MIN;
	uint16_t x299 = UINT16_MAX;
	static int16_t x300 = INT16_MIN;
	static int32_t t69 = 2961136;

	t69 = (x297&((x298+x299)&x300));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x301 = 121U;
	volatile int32_t x302 = 0;
	int64_t x303 = -64LL;
	int64_t x304 = -2711295582308417849LL;
	volatile int64_t t70 = -388974528513LL;

	t70 = (x301&((x302+x303)&x304));

	if (t70 != 64LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x306 = 2379818353168111LL;
	volatile int32_t x307 = -33;
	int16_t x308 = -2;
	volatile uint64_t t71 = 1344291830717676LLU;

	t71 = (x305&((x306+x307)&x308));

	if (t71 != 2375358004333194LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x309 = INT32_MIN;
	static uint32_t x310 = UINT32_MAX;
	volatile int8_t x311 = 7;
	int16_t x312 = -1;
	static volatile uint32_t t72 = 5506110U;

	t72 = (x309&((x310+x311)&x312));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x313 = INT32_MAX;
	uint16_t x314 = UINT16_MAX;
	static int32_t x315 = INT32_MIN;
	int16_t x316 = 4481;

	t73 = (x313&((x314+x315)&x316));

	if (t73 != 4481) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x317 = UINT8_MAX;
	uint64_t x318 = 1LLU;
	int16_t x319 = INT16_MIN;
	volatile uint16_t x320 = 2U;

	t74 = (x317&((x318+x319)&x320));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x321 = -1LL;
	int32_t x322 = INT32_MIN;
	int64_t x323 = 250LL;
	static volatile int16_t x324 = INT16_MIN;
	volatile int64_t t75 = -1177201308455LL;

	t75 = (x321&((x322+x323)&x324));

	if (t75 != -2147483648LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x325 = INT16_MAX;
	int8_t x326 = INT8_MIN;
	int64_t x327 = -642LL;
	int64_t t76 = 540432833080LL;

	t76 = (x325&((x326+x327)&x328));

	if (t76 != 31998LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x329 = INT16_MAX;
	static uint16_t x330 = 0U;
	static volatile uint8_t x331 = UINT8_MAX;
	int32_t t77 = 82931;

	t77 = (x329&((x330+x331)&x332));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int16_t x333 = -1;
	int64_t x334 = -1LL;
	uint8_t x335 = 10U;
	uint32_t x336 = 703052U;
	static int64_t t78 = 84686LL;

	t78 = (x333&((x334+x335)&x336));

	if (t78 != 8LL) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x337 = UINT8_MAX;
	uint32_t x338 = 25056243U;
	uint64_t x339 = 4458222139832410LLU;
	static uint32_t x340 = 896612U;
	volatile uint64_t t79 = 7529650756LLU;

	t79 = (x337&((x338+x339)&x340));

	if (t79 != 68LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x345 = 0U;
	int32_t x347 = INT32_MIN;
	static uint16_t x348 = 6U;
	uint64_t t80 = 121191279LLU;

	t80 = (x345&((x346+x347)&x348));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x349 = UINT8_MAX;
	int16_t x352 = INT16_MAX;
	volatile int32_t t81 = 1002;

	t81 = (x349&((x350+x351)&x352));

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x353 = INT64_MIN;
	uint32_t x354 = UINT32_MAX;
	uint8_t x355 = 97U;
	static int16_t x356 = -1;
	volatile int64_t t82 = -979LL;

	t82 = (x353&((x354+x355)&x356));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x357 = 55246070250085LLU;
	int16_t x358 = INT16_MAX;
	volatile int32_t x360 = INT32_MIN;
	uint64_t t83 = 516LLU;

	t83 = (x357&((x358+x359)&x360));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x361 = -1LL;
	static uint32_t x362 = UINT32_MAX;
	int16_t x363 = 13;
	static volatile int64_t t84 = -426828796998795LL;

	t84 = (x361&((x362+x363)&x364));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x365 = 2;
	static int16_t x366 = -1;
	static int8_t x367 = -1;
	volatile int32_t t85 = -1;

	t85 = (x365&((x366+x367)&x368));

	if (t85 != 2) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x369 = INT16_MAX;
	volatile uint32_t x370 = UINT32_MAX;
	volatile uint8_t x371 = 13U;
	int32_t x372 = -1;
	uint32_t t86 = 999504U;

	t86 = (x369&((x370+x371)&x372));

	if (t86 != 12U) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x373 = -1;
	volatile int64_t x375 = 134788LL;
	volatile int64_t t87 = 4740LL;

	t87 = (x373&((x374+x375)&x376));

	if (t87 != 134787LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x378 = -1LL;
	int16_t x379 = INT16_MIN;
	int64_t x380 = INT64_MAX;

	t88 = (x377&((x378+x379)&x380));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x381 = 2058U;
	uint8_t x383 = 40U;
	volatile int8_t x384 = INT8_MIN;

	t89 = (x381&((x382+x383)&x384));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x385 = INT16_MIN;
	int16_t x386 = INT16_MIN;
	int16_t x388 = 361;

	t90 = (x385&((x386+x387)&x388));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x389 = -3;
	int64_t x390 = -1LL;
	static uint8_t x391 = UINT8_MAX;

	t91 = (x389&((x390+x391)&x392));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x393 = 753917067LLU;
	volatile int64_t x394 = 1379440257137LL;
	uint32_t x395 = 13052U;
	volatile int64_t x396 = INT64_MIN;
	uint64_t t92 = 25120312LLU;

	t92 = (x393&((x394+x395)&x396));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x397 = -1;
	volatile uint8_t x398 = 1U;
	int64_t x399 = INT64_MIN;
	int8_t x400 = INT8_MIN;
	volatile int64_t t93 = INT64_MIN;

	t93 = (x397&((x398+x399)&x400));

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x401 = -1LL;
	int16_t x402 = INT16_MIN;
	int16_t x403 = INT16_MIN;
	int16_t x404 = INT16_MIN;
	static int64_t t94 = -17275LL;

	t94 = (x401&((x402+x403)&x404));

	if (t94 != -65536LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x405 = 5;
	uint64_t x408 = UINT64_MAX;

	t95 = (x405&((x406+x407)&x408));

	if (t95 != 4LLU) { NG(); } else { ; }
	
}

void f96(void) {


	t96 = (x409&((x410+x411)&x412));

	if (t96 != 119LL) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile uint16_t x413 = 288U;
	uint8_t x414 = UINT8_MAX;
	int16_t x415 = INT16_MIN;
	uint32_t x416 = UINT32_MAX;

	t97 = (x413&((x414+x415)&x416));

	if (t97 != 32U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x418 = 10U;
	int8_t x419 = -1;
	uint64_t t98 = 441228797383288483LLU;

	t98 = (x417&((x418+x419)&x420));

	if (t98 != 1LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x421 = 61046757U;
	int32_t x422 = -29;
	static int8_t x423 = INT8_MIN;
	volatile uint64_t x424 = 59001072310855LLU;
	uint64_t t99 = 31678922860384LLU;

	t99 = (x421&((x422+x423)&x424));

	if (t99 != 27286081LLU) { NG(); } else { ; }
	
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

