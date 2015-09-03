#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x4 = 58;
volatile uint32_t x10 = 3813U;
volatile int16_t x12 = 8277;
int64_t x16 = INT64_MIN;
volatile int32_t t3 = -7;
int32_t t5 = -156;
volatile int32_t t9 = -563008002;
volatile int8_t x42 = -1;
volatile int16_t x47 = INT16_MAX;
uint8_t x48 = 1U;
volatile int32_t t12 = -82578;
static int8_t x53 = INT8_MIN;
volatile uint8_t x59 = UINT8_MAX;
int64_t x62 = INT64_MIN;
volatile int16_t x69 = INT16_MIN;
uint8_t x73 = 2U;
volatile uint32_t x81 = 301U;
uint64_t x82 = 413LLU;
uint32_t x85 = 1U;
volatile int16_t x99 = -1;
uint16_t x100 = 384U;
int8_t x107 = INT8_MIN;
uint16_t x113 = 29635U;
static uint8_t x114 = 123U;
volatile int32_t t28 = 3264;
static volatile int8_t x124 = INT8_MAX;
int16_t x137 = 0;
int32_t t33 = 0;
uint16_t x148 = 391U;
volatile int64_t t35 = 798943520198LL;
static int8_t x156 = -7;
volatile int32_t t37 = -18;
uint16_t x162 = UINT16_MAX;
int64_t x175 = 24755986089LL;
static volatile int32_t t41 = 66640;
uint8_t x177 = 11U;
int32_t x179 = -540;
int8_t x182 = 0;
volatile int8_t x187 = INT8_MIN;
volatile int64_t t44 = -181261512822LL;
int8_t x192 = INT8_MIN;
uint16_t x199 = UINT16_MAX;
int32_t t47 = 7;
uint32_t x204 = 13654U;
volatile uint32_t x211 = 1U;
int32_t x219 = -60634;
uint16_t x227 = UINT16_MAX;
static int64_t x228 = -1489125LL;
static int32_t x232 = 8;
int16_t x242 = 2;
int8_t x245 = INT8_MIN;
int64_t x251 = INT64_MIN;
int64_t x263 = INT64_MIN;
uint8_t x267 = 42U;
volatile int32_t t66 = 38655;
volatile uint64_t t67 = 13LLU;
int64_t x281 = INT64_MAX;
uint32_t x289 = 7257U;
uint32_t x298 = 15488U;
volatile uint64_t t72 = 3044LLU;
uint8_t x303 = 2U;
int32_t x306 = -516960;
int32_t x309 = -1;
int32_t x313 = INT32_MIN;
static int16_t x315 = INT16_MIN;
uint8_t x320 = 19U;
static volatile int32_t t77 = -746;
volatile int64_t x324 = INT64_MIN;
static volatile int32_t t78 = 43;
int16_t x335 = -891;
int64_t x336 = INT64_MIN;
uint64_t x339 = 216LLU;
volatile int32_t t82 = -144;
int64_t x342 = -10LL;
int16_t x359 = 44;
int32_t x365 = INT32_MIN;
static int8_t x373 = INT8_MIN;
static int32_t x374 = INT32_MAX;
uint8_t x376 = 0U;
int32_t t90 = 13835;
int32_t x378 = -1;
int16_t x382 = INT16_MAX;
volatile int32_t x387 = INT32_MIN;
volatile int16_t x390 = INT16_MIN;
int32_t t94 = 75654995;
uint8_t x394 = UINT8_MAX;
uint32_t x411 = UINT32_MAX;
uint16_t x412 = 11U;


void f0(void) {
	volatile int32_t x1 = 3138953;
	volatile int16_t x2 = -1;
	static volatile int16_t x3 = 701;
	int32_t t0 = 634816;

	t0 = (x1&((x2/x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	uint32_t x6 = 0U;
	int16_t x7 = 544;
	int8_t x8 = 13;
	uint32_t t1 = 4U;

	t1 = (x5&((x6/x7)==x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	int16_t x11 = -1;
	int32_t t2 = 16;

	t2 = (x9&((x10/x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	volatile uint32_t x14 = UINT32_MAX;
	uint64_t x15 = 212284560813242859LLU;

	t3 = (x13&((x14/x15)==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int16_t x18 = INT16_MIN;
	volatile uint16_t x19 = 1U;
	int64_t x20 = INT64_MIN;
	int64_t t4 = -2857671763LL;

	t4 = (x17&((x18/x19)==x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = 416;
	static int64_t x22 = -1LL;
	static volatile uint64_t x23 = 224606865LLU;
	volatile int16_t x24 = -1;

	t5 = (x21&((x22/x23)==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 442U;
	uint64_t x26 = UINT64_MAX;
	uint16_t x27 = 249U;
	volatile uint64_t x28 = UINT64_MAX;
	int32_t t6 = 242;

	t6 = (x25&((x26/x27)==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = INT32_MAX;
	static volatile uint8_t x30 = 63U;
	int8_t x31 = -1;
	volatile int32_t x32 = 8;
	volatile int32_t t7 = 48779451;

	t7 = (x29&((x30/x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 68042690643424LLU;
	uint32_t x34 = 7U;
	int64_t x35 = -85392LL;
	int8_t x36 = -1;
	uint64_t t8 = 6465911LLU;

	t8 = (x33&((x34/x35)==x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int8_t x37 = INT8_MIN;
	int16_t x38 = INT16_MAX;
	uint8_t x39 = 10U;
	volatile uint8_t x40 = 4U;

	t9 = (x37&((x38/x39)==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x41 = UINT8_MAX;
	volatile uint64_t x43 = 7468746862767167LLU;
	int32_t x44 = -1;
	volatile int32_t t10 = 24;

	t10 = (x41&((x42/x43)==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	static int32_t x46 = 1;
	static uint64_t t11 = 3156907LLU;

	t11 = (x45&((x46/x47)==x48));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	volatile int64_t x50 = 4245599882555313695LL;
	int32_t x51 = -31;
	int16_t x52 = INT16_MAX;

	t12 = (x49&((x50/x51)==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x54 = -27092LL;
	volatile int8_t x55 = INT8_MIN;
	volatile int16_t x56 = 430;
	int32_t t13 = -2;

	t13 = (x53&((x54/x55)==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x57 = INT16_MIN;
	static int8_t x58 = INT8_MAX;
	int32_t x60 = INT32_MAX;
	int32_t t14 = -771123;

	t14 = (x57&((x58/x59)==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = INT64_MIN;
	static volatile int64_t x63 = -1199362692590743922LL;
	int8_t x64 = INT8_MAX;
	volatile int64_t t15 = 460427907645925573LL;

	t15 = (x61&((x62/x63)==x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 69862898958LLU;
	static int8_t x66 = 3;
	static uint16_t x67 = UINT16_MAX;
	static uint16_t x68 = 4338U;
	uint64_t t16 = 3258LLU;

	t16 = (x65&((x66/x67)==x68));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x70 = 101419613U;
	uint8_t x71 = 2U;
	uint16_t x72 = 1U;
	volatile int32_t t17 = -177081671;

	t17 = (x69&((x70/x71)==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = INT32_MAX;
	uint32_t x75 = UINT32_MAX;
	volatile int8_t x76 = INT8_MIN;
	volatile int32_t t18 = -3687159;

	t18 = (x73&((x74/x75)==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x77 = INT32_MIN;
	int16_t x78 = INT16_MIN;
	int8_t x79 = INT8_MAX;
	int32_t x80 = 889763493;
	static volatile int32_t t19 = 314;

	t19 = (x77&((x78/x79)==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x83 = 298274715LLU;
	static uint64_t x84 = 1831LLU;
	volatile uint32_t t20 = 842589U;

	t20 = (x81&((x82/x83)==x84));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = -28LL;
	int8_t x87 = INT8_MIN;
	uint16_t x88 = 814U;
	uint32_t t21 = 34868162U;

	t21 = (x85&((x86/x87)==x88));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	uint64_t x90 = UINT64_MAX;
	int64_t x91 = INT64_MIN;
	uint8_t x92 = UINT8_MAX;
	volatile int32_t t22 = 0;

	t22 = (x89&((x90/x91)==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MAX;
	uint32_t x94 = 150798U;
	uint64_t x95 = 404080204458649LLU;
	uint32_t x96 = UINT32_MAX;
	int32_t t23 = 0;

	t23 = (x93&((x94/x95)==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	volatile uint8_t x98 = UINT8_MAX;
	volatile int32_t t24 = -460053408;

	t24 = (x97&((x98/x99)==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = 14U;
	static int8_t x102 = INT8_MIN;
	uint8_t x103 = UINT8_MAX;
	int8_t x104 = INT8_MIN;
	int32_t t25 = -191;

	t25 = (x101&((x102/x103)==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = 1;
	int32_t x106 = INT32_MIN;
	static int64_t x108 = -1LL;
	volatile int32_t t26 = 3490154;

	t26 = (x105&((x106/x107)==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = INT16_MIN;
	volatile int32_t x110 = -75;
	static volatile uint16_t x111 = 5U;
	static int64_t x112 = INT64_MIN;
	int32_t t27 = -5988;

	t27 = (x109&((x110/x111)==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x115 = 16U;
	int8_t x116 = INT8_MIN;

	t28 = (x113&((x114/x115)==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x117 = 1491659410U;
	int32_t x118 = -1;
	uint32_t x119 = UINT32_MAX;
	int8_t x120 = INT8_MAX;
	volatile uint32_t t29 = 245U;

	t29 = (x117&((x118/x119)==x120));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x121 = UINT64_MAX;
	volatile uint8_t x122 = 8U;
	int32_t x123 = INT32_MIN;
	volatile uint64_t t30 = 772799LLU;

	t30 = (x121&((x122/x123)==x124));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	uint64_t x126 = UINT64_MAX;
	volatile uint32_t x127 = UINT32_MAX;
	int8_t x128 = 4;
	int32_t t31 = -4051724;

	t31 = (x125&((x126/x127)==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	volatile int16_t x130 = INT16_MAX;
	static uint32_t x131 = 53U;
	int64_t x132 = INT64_MIN;
	static volatile int32_t t32 = -10;

	t32 = (x129&((x130/x131)==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x138 = 16185U;
	uint64_t x139 = UINT64_MAX;
	int8_t x140 = 12;

	t33 = (x137&((x138/x139)==x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = INT16_MIN;
	int32_t x142 = INT32_MIN;
	int32_t x143 = INT32_MAX;
	int16_t x144 = INT16_MAX;
	int32_t t34 = 110929741;

	t34 = (x141&((x142/x143)==x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x145 = 27764LL;
	int8_t x146 = INT8_MIN;
	int8_t x147 = INT8_MIN;

	t35 = (x145&((x146/x147)==x148));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = -1;
	uint8_t x150 = 24U;
	static uint64_t x151 = 219552289317029LLU;
	static int16_t x152 = INT16_MIN;
	int32_t t36 = 527231947;

	t36 = (x149&((x150/x151)==x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x153 = 478U;
	uint16_t x154 = 17601U;
	int32_t x155 = 1;

	t37 = (x153&((x154/x155)==x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x157 = 49300U;
	volatile uint64_t x158 = 221823320931567436LLU;
	int32_t x159 = -1;
	int32_t x160 = -637051;
	uint32_t t38 = 15U;

	t38 = (x157&((x158/x159)==x160));

	if (t38 != 0U) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int8_t x161 = -1;
	uint64_t x163 = UINT64_MAX;
	uint32_t x164 = 899343U;
	int32_t t39 = 461;

	t39 = (x161&((x162/x163)==x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x165 = INT64_MAX;
	int16_t x166 = INT16_MIN;
	int64_t x167 = 624915LL;
	volatile uint16_t x168 = 27386U;
	volatile int64_t t40 = -922047041838272824LL;

	t40 = (x165&((x166/x167)==x168));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = -1;
	int16_t x174 = INT16_MAX;
	static uint16_t x176 = 14U;

	t41 = (x173&((x174/x175)==x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x178 = 1847159246492534LLU;
	int16_t x180 = INT16_MAX;
	int32_t t42 = -260029;

	t42 = (x177&((x178/x179)==x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x181 = 158368867547LL;
	int64_t x183 = INT64_MAX;
	int8_t x184 = INT8_MAX;
	volatile int64_t t43 = -22LL;

	t43 = (x181&((x182/x183)==x184));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x185 = -358986091500701LL;
	int64_t x186 = 5LL;
	int8_t x188 = INT8_MAX;

	t44 = (x185&((x186/x187)==x188));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x189 = 0U;
	uint32_t x190 = UINT32_MAX;
	volatile int16_t x191 = -1;
	int32_t t45 = -2954;

	t45 = (x189&((x190/x191)==x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = 255580833956889268LL;
	volatile int8_t x194 = -6;
	int16_t x195 = INT16_MIN;
	static int16_t x196 = INT16_MAX;
	int64_t t46 = 41193371658281882LL;

	t46 = (x193&((x194/x195)==x196));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x197 = INT16_MAX;
	int8_t x198 = 40;
	static volatile int8_t x200 = -1;

	t47 = (x197&((x198/x199)==x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x201 = INT64_MAX;
	uint64_t x202 = 279973LLU;
	static int32_t x203 = -1103;
	static volatile int64_t t48 = -3LL;

	t48 = (x201&((x202/x203)==x204));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = -1;
	int8_t x206 = INT8_MIN;
	uint16_t x207 = 3830U;
	int32_t x208 = INT32_MAX;
	static int32_t t49 = -20;

	t49 = (x205&((x206/x207)==x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x209 = 0U;
	volatile int8_t x210 = -1;
	uint8_t x212 = 3U;
	int32_t t50 = 620440;

	t50 = (x209&((x210/x211)==x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x213 = INT32_MAX;
	volatile uint8_t x214 = 17U;
	static volatile int16_t x215 = INT16_MIN;
	int32_t x216 = -1;
	int32_t t51 = -7421;

	t51 = (x213&((x214/x215)==x216));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x217 = INT32_MAX;
	int32_t x218 = INT32_MAX;
	int8_t x220 = INT8_MAX;
	volatile int32_t t52 = -1284436;

	t52 = (x217&((x218/x219)==x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x221 = INT16_MIN;
	int16_t x222 = 11723;
	static volatile uint8_t x223 = 1U;
	int8_t x224 = -13;
	volatile int32_t t53 = 9788;

	t53 = (x221&((x222/x223)==x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x225 = -1LL;
	int8_t x226 = -1;
	static int64_t t54 = 67999266877128LL;

	t54 = (x225&((x226/x227)==x228));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x229 = -10;
	int32_t x230 = INT32_MAX;
	volatile uint64_t x231 = UINT64_MAX;
	int32_t t55 = -15302;

	t55 = (x229&((x230/x231)==x232));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x233 = 97U;
	int8_t x234 = -1;
	int32_t x235 = INT32_MIN;
	int16_t x236 = INT16_MIN;
	int32_t t56 = 0;

	t56 = (x233&((x234/x235)==x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x237 = INT8_MIN;
	uint32_t x238 = UINT32_MAX;
	int32_t x239 = INT32_MIN;
	volatile uint8_t x240 = 85U;
	volatile int32_t t57 = 111648;

	t57 = (x237&((x238/x239)==x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x241 = 158734LL;
	uint16_t x243 = 11U;
	int8_t x244 = INT8_MIN;
	static volatile int64_t t58 = 1281908748LL;

	t58 = (x241&((x242/x243)==x244));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x246 = -1;
	int64_t x247 = INT64_MAX;
	int16_t x248 = INT16_MIN;
	static volatile int32_t t59 = -5299;

	t59 = (x245&((x246/x247)==x248));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x249 = INT8_MIN;
	int16_t x250 = INT16_MIN;
	int64_t x252 = 439410666772623LL;
	int32_t t60 = -59375;

	t60 = (x249&((x250/x251)==x252));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = -332477;
	int8_t x254 = INT8_MAX;
	int8_t x255 = INT8_MIN;
	volatile int32_t x256 = 1;
	volatile int32_t t61 = -2478;

	t61 = (x253&((x254/x255)==x256));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x257 = -1;
	int16_t x258 = INT16_MIN;
	int16_t x259 = 10541;
	volatile int8_t x260 = -46;
	int32_t t62 = 11055640;

	t62 = (x257&((x258/x259)==x260));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x261 = INT16_MAX;
	static uint16_t x262 = 139U;
	int8_t x264 = INT8_MAX;
	volatile int32_t t63 = 5242656;

	t63 = (x261&((x262/x263)==x264));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x265 = 7397LLU;
	int32_t x266 = -247871537;
	int8_t x268 = INT8_MAX;
	static volatile uint64_t t64 = 1821195LLU;

	t64 = (x265&((x266/x267)==x268));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int64_t x269 = -11029087LL;
	uint16_t x270 = 26543U;
	uint32_t x271 = 384U;
	uint8_t x272 = 0U;
	volatile int64_t t65 = 3891625048558LL;

	t65 = (x269&((x270/x271)==x272));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x273 = -1242192;
	int64_t x274 = INT64_MIN;
	int32_t x275 = INT32_MIN;
	int8_t x276 = INT8_MIN;

	t66 = (x273&((x274/x275)==x276));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint64_t x277 = 2509059769808LLU;
	uint32_t x278 = UINT32_MAX;
	int16_t x279 = INT16_MIN;
	int8_t x280 = 10;

	t67 = (x277&((x278/x279)==x280));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x282 = 2836134810LLU;
	uint16_t x283 = UINT16_MAX;
	int16_t x284 = INT16_MIN;
	int64_t t68 = 2560384LL;

	t68 = (x281&((x282/x283)==x284));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x285 = INT8_MIN;
	int16_t x286 = INT16_MAX;
	uint64_t x287 = UINT64_MAX;
	int32_t x288 = INT32_MIN;
	volatile int32_t t69 = -42;

	t69 = (x285&((x286/x287)==x288));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x290 = INT16_MIN;
	static int16_t x291 = 21;
	uint32_t x292 = UINT32_MAX;
	volatile uint32_t t70 = 20U;

	t70 = (x289&((x290/x291)==x292));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x293 = 29U;
	int8_t x294 = -1;
	int32_t x295 = INT32_MAX;
	static int32_t x296 = INT32_MIN;
	int32_t t71 = 4008;

	t71 = (x293&((x294/x295)==x296));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x297 = 313LLU;
	static volatile int8_t x299 = -13;
	int8_t x300 = -1;

	t72 = (x297&((x298/x299)==x300));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = -1;
	volatile int64_t x302 = INT64_MIN;
	int32_t x304 = -5584;
	int32_t t73 = -33906896;

	t73 = (x301&((x302/x303)==x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x305 = -1;
	uint32_t x307 = UINT32_MAX;
	uint16_t x308 = 2362U;
	static int32_t t74 = -1986;

	t74 = (x305&((x306/x307)==x308));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x310 = 2;
	int8_t x311 = INT8_MIN;
	int64_t x312 = 4191LL;
	static int32_t t75 = -126;

	t75 = (x309&((x310/x311)==x312));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x314 = 7550U;
	int16_t x316 = INT16_MIN;
	int32_t t76 = 1;

	t76 = (x313&((x314/x315)==x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x317 = INT8_MAX;
	uint64_t x318 = 428511947LLU;
	uint64_t x319 = UINT64_MAX;

	t77 = (x317&((x318/x319)==x320));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x321 = -1;
	int32_t x322 = 105;
	int32_t x323 = 30592;

	t78 = (x321&((x322/x323)==x324));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x325 = 3LLU;
	int16_t x326 = -52;
	int8_t x327 = INT8_MIN;
	volatile uint32_t x328 = UINT32_MAX;
	uint64_t t79 = 2204926931362078483LLU;

	t79 = (x325&((x326/x327)==x328));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x329 = -1;
	uint64_t x330 = UINT64_MAX;
	uint32_t x331 = 7U;
	uint32_t x332 = 105308052U;
	int32_t t80 = -3246378;

	t80 = (x329&((x330/x331)==x332));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x333 = UINT8_MAX;
	uint8_t x334 = 3U;
	int32_t t81 = -68;

	t81 = (x333&((x334/x335)==x336));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x337 = 1U;
	uint16_t x338 = 28806U;
	int64_t x340 = INT64_MIN;

	t82 = (x337&((x338/x339)==x340));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x341 = INT32_MIN;
	int32_t x343 = INT32_MIN;
	volatile int64_t x344 = 21314200LL;
	int32_t t83 = 36;

	t83 = (x341&((x342/x343)==x344));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x349 = UINT8_MAX;
	static volatile uint8_t x350 = UINT8_MAX;
	uint8_t x351 = UINT8_MAX;
	int8_t x352 = 46;
	volatile int32_t t84 = -111768179;

	t84 = (x349&((x350/x351)==x352));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x353 = UINT8_MAX;
	uint16_t x354 = 5U;
	uint64_t x355 = UINT64_MAX;
	volatile int8_t x356 = INT8_MAX;
	static volatile int32_t t85 = -34266423;

	t85 = (x353&((x354/x355)==x356));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x357 = INT32_MAX;
	uint64_t x358 = 4LLU;
	int16_t x360 = -1;
	int32_t t86 = 72090490;

	t86 = (x357&((x358/x359)==x360));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x361 = -15;
	int8_t x362 = 0;
	volatile uint64_t x363 = 7996827280068LLU;
	int64_t x364 = INT64_MIN;
	volatile int32_t t87 = -71;

	t87 = (x361&((x362/x363)==x364));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x366 = INT64_MAX;
	static int32_t x367 = -212327588;
	int8_t x368 = INT8_MAX;
	int32_t t88 = 12587;

	t88 = (x365&((x366/x367)==x368));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = -1LL;
	int32_t x370 = 201;
	uint16_t x371 = UINT16_MAX;
	static int32_t x372 = 0;
	int64_t t89 = -7181102922704LL;

	t89 = (x369&((x370/x371)==x372));

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x375 = 162164242986LLU;

	t90 = (x373&((x374/x375)==x376));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x377 = INT16_MAX;
	int8_t x379 = INT8_MIN;
	int8_t x380 = INT8_MAX;
	volatile int32_t t91 = 1;

	t91 = (x377&((x378/x379)==x380));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x381 = INT8_MIN;
	static uint16_t x383 = UINT16_MAX;
	int32_t x384 = -1;
	int32_t t92 = 709255389;

	t92 = (x381&((x382/x383)==x384));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x385 = -1;
	int16_t x386 = 5;
	int32_t x388 = INT32_MIN;
	volatile int32_t t93 = -125168582;

	t93 = (x385&((x386/x387)==x388));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x389 = 23152125;
	volatile uint32_t x391 = UINT32_MAX;
	int8_t x392 = 0;

	t94 = (x389&((x390/x391)==x392));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x393 = -1LL;
	int8_t x395 = -1;
	uint16_t x396 = UINT16_MAX;
	int64_t t95 = -15523LL;

	t95 = (x393&((x394/x395)==x396));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x397 = -2;
	int16_t x398 = INT16_MIN;
	volatile int16_t x399 = INT16_MAX;
	int16_t x400 = -2412;
	volatile int32_t t96 = 15465;

	t96 = (x397&((x398/x399)==x400));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x401 = 6U;
	int16_t x402 = INT16_MIN;
	volatile int64_t x403 = INT64_MIN;
	volatile int8_t x404 = 3;
	static volatile int32_t t97 = -49511259;

	t97 = (x401&((x402/x403)==x404));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x405 = INT32_MAX;
	int8_t x406 = 1;
	int16_t x407 = -1;
	uint16_t x408 = 47U;
	volatile int32_t t98 = -377;

	t98 = (x405&((x406/x407)==x408));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint16_t x409 = 1U;
	static int64_t x410 = -1LL;
	int32_t t99 = -270;

	t99 = (x409&((x410/x411)==x412));

	if (t99 != 0) { NG(); } else { ; }
	
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

