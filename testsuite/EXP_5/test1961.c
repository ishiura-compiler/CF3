#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x6 = 1511660145LL;
int64_t x8 = INT64_MIN;
int32_t t1 = 34814466;
int32_t x9 = INT32_MAX;
volatile uint16_t x10 = 13U;
volatile int32_t x11 = -1;
int8_t x12 = INT8_MIN;
static int8_t x19 = INT8_MAX;
volatile uint32_t x24 = 6490666U;
int32_t t8 = 21508;
static int8_t x40 = INT8_MIN;
int32_t x45 = INT32_MAX;
volatile int8_t x46 = INT8_MIN;
uint64_t x47 = UINT64_MAX;
volatile int32_t x49 = -1;
volatile uint32_t x52 = 58528U;
int16_t x54 = 13;
int32_t x60 = INT32_MIN;
static volatile uint32_t t16 = 1U;
volatile uint64_t x71 = 211090LLU;
static int32_t t19 = -41;
volatile int32_t t20 = 529855422;
int64_t x90 = INT64_MIN;
int64_t x91 = INT64_MAX;
int32_t x92 = -215194;
uint64_t t23 = 11993344804LLU;
uint32_t x98 = 127158U;
volatile uint16_t x100 = 163U;
int32_t t24 = -1710715;
volatile int32_t x101 = INT32_MIN;
int32_t x104 = 14808;
int32_t t25 = 3518;
volatile int64_t t26 = 359323561844238029LL;
static uint32_t x109 = 935U;
uint8_t x110 = UINT8_MAX;
uint64_t x111 = 2214202053LLU;
int64_t x112 = INT64_MIN;
uint32_t t27 = 13184036U;
static int32_t x117 = 21562;
uint8_t x122 = 0U;
volatile int16_t x128 = INT16_MIN;
static int32_t x137 = -17671738;
volatile int32_t x140 = INT32_MAX;
int32_t x142 = INT32_MIN;
static uint16_t x148 = 15U;
int64_t x152 = INT64_MIN;
uint64_t x158 = 32460273690LLU;
static volatile uint32_t t40 = 23U;
volatile uint64_t x167 = 229140638948558478LLU;
int32_t x170 = INT32_MIN;
int32_t t42 = -54;
int32_t t43 = 1725678;
static uint8_t x189 = UINT8_MAX;
static int8_t x192 = 1;
static int32_t t49 = -1007155;
static int32_t x215 = 66647643;
int8_t x216 = -1;
volatile int32_t x217 = INT32_MAX;
uint16_t x220 = 2729U;
uint16_t x228 = 160U;
volatile int16_t x231 = INT16_MAX;
uint32_t x237 = 448U;
uint32_t x242 = UINT32_MAX;
volatile int32_t t60 = 5548;
int16_t x248 = INT16_MIN;
int8_t x252 = INT8_MIN;
static int32_t x257 = 1411;
int16_t x259 = INT16_MIN;
int16_t x260 = 5;
int16_t x263 = 20;
static volatile uint32_t x270 = UINT32_MAX;
static int16_t x273 = INT16_MIN;
volatile int32_t t68 = -1756;
int64_t x277 = INT64_MIN;
int64_t t70 = 1960326926165986LL;
static uint64_t x285 = UINT64_MAX;
int32_t x287 = INT32_MAX;
volatile int16_t x290 = INT16_MIN;
uint8_t x291 = UINT8_MAX;
volatile int32_t t72 = 893148090;
int32_t x295 = -1;
uint64_t x300 = 7300789056335981LLU;
int16_t x303 = INT16_MIN;
volatile uint64_t t76 = 32090605LLU;
volatile int64_t x313 = INT64_MAX;
int64_t x317 = -1LL;
uint16_t x319 = 20878U;
int8_t x324 = -1;
static volatile int32_t t82 = -15;
uint16_t x333 = UINT16_MAX;
volatile int32_t x334 = -7;
int32_t x335 = INT32_MAX;
static uint32_t x336 = UINT32_MAX;
int32_t t86 = 35006;
uint16_t x349 = 2698U;
int8_t x351 = INT8_MIN;
volatile uint32_t x352 = 402U;
static volatile uint64_t x354 = 80LLU;
static uint64_t x368 = 1LLU;
volatile int64_t x369 = INT64_MIN;
int64_t x373 = INT64_MIN;
static volatile int32_t x375 = INT32_MIN;
int8_t x386 = -1;
int32_t t96 = 253766104;
int32_t x390 = INT32_MAX;
static int16_t x397 = -14084;
static int16_t x400 = INT16_MIN;


void f0(void) {
	int16_t x1 = INT16_MIN;
	volatile uint8_t x2 = 7U;
	static int16_t x3 = 46;
	int8_t x4 = -56;
	static volatile int32_t t0 = -154563;

	t0 = (x1&((x2|x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = UINT8_MAX;
	uint32_t x7 = 6U;

	t1 = (x5&((x6|x7)==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t t2 = 352345;

	t2 = (x9&((x10|x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	int8_t x14 = INT8_MIN;
	static volatile int64_t x15 = INT64_MIN;
	volatile int32_t x16 = INT32_MAX;
	static volatile int32_t t3 = 4062660;

	t3 = (x13&((x14|x15)==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MIN;
	volatile int32_t x18 = INT32_MIN;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = -100106;

	t4 = (x17&((x18|x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	int64_t x22 = -110995LL;
	uint32_t x23 = 11U;
	uint32_t t5 = 16563185U;

	t5 = (x21&((x22|x23)==x24));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	int32_t x26 = -1;
	static int64_t x27 = INT64_MIN;
	int8_t x28 = -12;
	int32_t t6 = -15055;

	t6 = (x25&((x26|x27)==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = UINT16_MAX;
	volatile int32_t x30 = INT32_MIN;
	int32_t x31 = INT32_MIN;
	int32_t x32 = -1;
	static volatile int32_t t7 = 29;

	t7 = (x29&((x30|x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	volatile uint32_t x34 = 4338U;
	static int8_t x35 = -3;
	volatile uint8_t x36 = 17U;

	t8 = (x33&((x34|x35)==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	int16_t x38 = INT16_MAX;
	uint64_t x39 = UINT64_MAX;
	static volatile int32_t t9 = -3;

	t9 = (x37&((x38|x39)==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = -1;
	int16_t x42 = 21;
	int32_t x43 = 12;
	uint32_t x44 = UINT32_MAX;
	int32_t t10 = -988589;

	t10 = (x41&((x42|x43)==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x48 = 43LL;
	volatile int32_t t11 = 11975421;

	t11 = (x45&((x46|x47)==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x50 = 14779;
	volatile int16_t x51 = INT16_MAX;
	int32_t t12 = 112806;

	t12 = (x49&((x50|x51)==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = -1114;
	int8_t x55 = -1;
	static uint8_t x56 = UINT8_MAX;
	volatile int32_t t13 = -99245704;

	t13 = (x53&((x54|x55)==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = -124176;
	int8_t x58 = -1;
	int16_t x59 = INT16_MAX;
	int32_t t14 = -120961;

	t14 = (x57&((x58|x59)==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 61U;
	uint64_t x62 = 2126894279LLU;
	int16_t x63 = INT16_MIN;
	int64_t x64 = -1LL;
	int32_t t15 = -920;

	t15 = (x61&((x62|x63)==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 89950U;
	int16_t x66 = INT16_MIN;
	static int64_t x67 = INT64_MAX;
	uint64_t x68 = 248677835931405LLU;

	t16 = (x65&((x66|x67)==x68));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x69 = UINT8_MAX;
	volatile int32_t x70 = INT32_MIN;
	int64_t x72 = INT64_MAX;
	volatile int32_t t17 = 4854891;

	t17 = (x69&((x70|x71)==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = -1LL;
	static uint64_t x74 = 6LLU;
	int16_t x75 = -42;
	int8_t x76 = -1;
	int64_t t18 = -2769024806884LL;

	t18 = (x73&((x74|x75)==x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 3U;
	int8_t x78 = INT8_MAX;
	uint8_t x79 = UINT8_MAX;
	static int8_t x80 = 3;

	t19 = (x77&((x78|x79)==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MAX;
	uint32_t x82 = UINT32_MAX;
	uint64_t x83 = 443787LLU;
	int16_t x84 = -1;

	t20 = (x81&((x82|x83)==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = 214790866;
	uint8_t x86 = 6U;
	volatile int8_t x87 = -44;
	int8_t x88 = -1;
	volatile int32_t t21 = 95612359;

	t21 = (x85&((x86|x87)==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x89 = 479888U;
	volatile uint32_t t22 = 20453623U;

	t22 = (x89&((x90|x91)==x92));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 869259236954178459LLU;
	int8_t x94 = -6;
	int16_t x95 = INT16_MIN;
	static int64_t x96 = INT64_MAX;

	t23 = (x93&((x94|x95)==x96));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = INT16_MIN;
	static int16_t x99 = 30;

	t24 = (x97&((x98|x99)==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x102 = 3096792812969461LL;
	uint32_t x103 = 15U;

	t25 = (x101&((x102|x103)==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = -1LL;
	int16_t x106 = -1;
	static int32_t x107 = INT32_MAX;
	uint16_t x108 = 3U;

	t26 = (x105&((x106|x107)==x108));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {


	t27 = (x109&((x110|x111)==x112));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = -1;
	static uint64_t x114 = 1906596LLU;
	volatile uint64_t x115 = 112158303032LLU;
	int64_t x116 = INT64_MIN;
	int32_t t28 = 955460325;

	t28 = (x113&((x114|x115)==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = INT64_MIN;
	int32_t x119 = INT32_MIN;
	int64_t x120 = 446854111462562956LL;
	static volatile int32_t t29 = 15712;

	t29 = (x117&((x118|x119)==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = -1;
	int64_t x123 = INT64_MAX;
	static int64_t x124 = -1LL;
	volatile int32_t t30 = -11;

	t30 = (x121&((x122|x123)==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -1;
	int32_t x126 = 22;
	int8_t x127 = -1;
	volatile int32_t t31 = -285595;

	t31 = (x125&((x126|x127)==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	volatile int32_t x130 = 1690;
	uint8_t x131 = 0U;
	volatile int16_t x132 = INT16_MAX;
	static volatile int32_t t32 = 32782;

	t32 = (x129&((x130|x131)==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = UINT32_MAX;
	static int32_t x134 = INT32_MIN;
	static int16_t x135 = 1;
	static int64_t x136 = INT64_MAX;
	uint32_t t33 = 14243611U;

	t33 = (x133&((x134|x135)==x136));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x138 = INT16_MIN;
	int64_t x139 = -1LL;
	volatile int32_t t34 = 1;

	t34 = (x137&((x138|x139)==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = INT64_MIN;
	volatile int32_t x143 = 319514148;
	uint32_t x144 = UINT32_MAX;
	int64_t t35 = 173514713064LL;

	t35 = (x141&((x142|x143)==x144));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x145 = 0U;
	int64_t x146 = INT64_MAX;
	static int32_t x147 = INT32_MAX;
	volatile int32_t t36 = -52;

	t36 = (x145&((x146|x147)==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x149 = 653;
	int16_t x150 = INT16_MIN;
	uint32_t x151 = 7U;
	volatile int32_t t37 = -1;

	t37 = (x149&((x150|x151)==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = UINT16_MAX;
	int32_t x154 = 207139;
	static uint32_t x155 = 1755592U;
	uint64_t x156 = UINT64_MAX;
	volatile int32_t t38 = 13601988;

	t38 = (x153&((x154|x155)==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = UINT64_MAX;
	int64_t x159 = INT64_MIN;
	static int16_t x160 = INT16_MAX;
	static volatile uint64_t t39 = 302224LLU;

	t39 = (x157&((x158|x159)==x160));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x161 = 383712854U;
	volatile int64_t x162 = INT64_MIN;
	int64_t x163 = -1126695410554LL;
	uint16_t x164 = 4924U;

	t40 = (x161&((x162|x163)==x164));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MIN;
	int64_t x166 = -1LL;
	uint64_t x168 = 1970623582420LLU;
	int32_t t41 = -146;

	t41 = (x165&((x166|x167)==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	uint32_t x171 = 950U;
	uint8_t x172 = UINT8_MAX;

	t42 = (x169&((x170|x171)==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x173 = 1U;
	volatile uint8_t x174 = 0U;
	int64_t x175 = INT64_MIN;
	uint16_t x176 = 2U;

	t43 = (x173&((x174|x175)==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MIN;
	int8_t x178 = -1;
	uint32_t x179 = 24466U;
	uint32_t x180 = 4353U;
	volatile int64_t t44 = -6024192882LL;

	t44 = (x177&((x178|x179)==x180));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 2139U;
	static volatile int8_t x182 = INT8_MIN;
	static uint32_t x183 = 59459U;
	int8_t x184 = INT8_MIN;
	volatile int32_t t45 = -832;

	t45 = (x181&((x182|x183)==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	static uint16_t x186 = 1U;
	uint32_t x187 = UINT32_MAX;
	static int64_t x188 = INT64_MIN;
	int32_t t46 = -14994391;

	t46 = (x185&((x186|x187)==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x190 = 3U;
	uint16_t x191 = 14U;
	volatile int32_t t47 = 26403;

	t47 = (x189&((x190|x191)==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x193 = INT8_MAX;
	int64_t x194 = INT64_MAX;
	volatile int32_t x195 = INT32_MIN;
	int64_t x196 = -1LL;
	int32_t t48 = 1324271;

	t48 = (x193&((x194|x195)==x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x197 = INT16_MAX;
	volatile int8_t x198 = -1;
	static int16_t x199 = 2935;
	int16_t x200 = 1;

	t49 = (x197&((x198|x199)==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -23229029739LL;
	int32_t x202 = 3204;
	uint8_t x203 = 94U;
	uint16_t x204 = UINT16_MAX;
	int64_t t50 = -21613404LL;

	t50 = (x201&((x202|x203)==x204));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x205 = 913U;
	uint8_t x206 = UINT8_MAX;
	uint8_t x207 = UINT8_MAX;
	uint8_t x208 = 4U;
	volatile uint32_t t51 = 2625589U;

	t51 = (x205&((x206|x207)==x208));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = 18;
	static uint16_t x210 = UINT16_MAX;
	int8_t x211 = INT8_MIN;
	volatile uint8_t x212 = 1U;
	int32_t t52 = -1;

	t52 = (x209&((x210|x211)==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x213 = INT16_MIN;
	uint8_t x214 = 118U;
	volatile int32_t t53 = -5;

	t53 = (x213&((x214|x215)==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x218 = UINT16_MAX;
	volatile uint32_t x219 = UINT32_MAX;
	int32_t t54 = -1842;

	t54 = (x217&((x218|x219)==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -1LL;
	static int16_t x222 = INT16_MIN;
	int8_t x223 = -1;
	uint8_t x224 = UINT8_MAX;
	int64_t t55 = -1LL;

	t55 = (x221&((x222|x223)==x224));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x225 = UINT16_MAX;
	uint32_t x226 = 90707335U;
	uint64_t x227 = 1026LLU;
	int32_t t56 = 73605003;

	t56 = (x225&((x226|x227)==x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = -1;
	int32_t x230 = -42;
	static int16_t x232 = -122;
	volatile int32_t t57 = 13457957;

	t57 = (x229&((x230|x231)==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x233 = UINT32_MAX;
	volatile uint16_t x234 = 1U;
	volatile uint8_t x235 = 0U;
	int16_t x236 = INT16_MAX;
	volatile uint32_t t58 = 27573083U;

	t58 = (x233&((x234|x235)==x236));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x238 = -1LL;
	int64_t x239 = 92014093304LL;
	volatile int16_t x240 = -1;
	volatile uint32_t t59 = 9U;

	t59 = (x237&((x238|x239)==x240));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x241 = 58U;
	int8_t x243 = INT8_MAX;
	int8_t x244 = INT8_MAX;

	t60 = (x241&((x242|x243)==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x245 = INT8_MIN;
	int8_t x246 = 50;
	uint64_t x247 = 372115774852671LLU;
	int32_t t61 = 3017118;

	t61 = (x245&((x246|x247)==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 13187U;
	int16_t x250 = -5517;
	uint16_t x251 = 19195U;
	int32_t t62 = 26460121;

	t62 = (x249&((x250|x251)==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x253 = 615;
	int8_t x254 = 0;
	uint32_t x255 = 9763114U;
	uint64_t x256 = 107042LLU;
	static volatile int32_t t63 = -1429;

	t63 = (x253&((x254|x255)==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x258 = UINT64_MAX;
	static int32_t t64 = -2860261;

	t64 = (x257&((x258|x259)==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = 191652;
	static int64_t x262 = INT64_MAX;
	int8_t x264 = INT8_MAX;
	volatile int32_t t65 = -368351;

	t65 = (x261&((x262|x263)==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	static volatile int8_t x266 = -2;
	int8_t x267 = INT8_MIN;
	volatile int8_t x268 = 9;
	volatile int32_t t66 = 19;

	t66 = (x265&((x266|x267)==x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -1LL;
	static int32_t x271 = 31;
	volatile int8_t x272 = -1;
	int64_t t67 = 21265739382673LL;

	t67 = (x269&((x270|x271)==x272));

	if (t67 != 1LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x274 = 1;
	uint8_t x275 = UINT8_MAX;
	int16_t x276 = 346;

	t68 = (x273&((x274|x275)==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x278 = -1;
	int64_t x279 = INT64_MAX;
	static volatile int8_t x280 = -1;
	volatile int64_t t69 = 99034896645380016LL;

	t69 = (x277&((x278|x279)==x280));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MAX;
	uint64_t x282 = UINT64_MAX;
	uint64_t x283 = UINT64_MAX;
	static uint16_t x284 = UINT16_MAX;

	t70 = (x281&((x282|x283)==x284));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x286 = -1LL;
	static volatile int32_t x288 = 5;
	volatile uint64_t t71 = 36879576620170LLU;

	t71 = (x285&((x286|x287)==x288));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = INT16_MAX;
	static int8_t x292 = 7;

	t72 = (x289&((x290|x291)==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = 165;
	uint8_t x294 = 3U;
	static int16_t x296 = 123;
	int32_t t73 = 409;

	t73 = (x293&((x294|x295)==x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MAX;
	int64_t x298 = INT64_MIN;
	volatile int8_t x299 = -1;
	static volatile int32_t t74 = -318;

	t74 = (x297&((x298|x299)==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 24885U;
	int32_t x302 = 0;
	uint16_t x304 = 0U;
	volatile int32_t t75 = 38364;

	t75 = (x301&((x302|x303)==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x305 = 1133475385902748LLU;
	int8_t x306 = 0;
	static uint16_t x307 = UINT16_MAX;
	volatile int32_t x308 = INT32_MAX;

	t76 = (x305&((x306|x307)==x308));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x309 = INT32_MAX;
	int64_t x310 = -1LL;
	volatile int32_t x311 = -1;
	uint64_t x312 = 1LLU;
	static int32_t t77 = -106;

	t77 = (x309&((x310|x311)==x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x314 = UINT64_MAX;
	static uint64_t x315 = UINT64_MAX;
	uint16_t x316 = UINT16_MAX;
	volatile int64_t t78 = -212108221292679433LL;

	t78 = (x313&((x314|x315)==x316));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x318 = 34U;
	int64_t x320 = -1LL;
	volatile int64_t t79 = -2503352201741LL;

	t79 = (x317&((x318|x319)==x320));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x321 = INT16_MIN;
	int16_t x322 = INT16_MAX;
	static volatile int8_t x323 = -1;
	static int32_t t80 = 0;

	t80 = (x321&((x322|x323)==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x325 = UINT8_MAX;
	uint8_t x326 = UINT8_MAX;
	uint64_t x327 = 255746020169LLU;
	uint8_t x328 = 15U;
	int32_t t81 = -23;

	t81 = (x325&((x326|x327)==x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x329 = INT32_MAX;
	int64_t x330 = INT64_MAX;
	uint16_t x331 = UINT16_MAX;
	volatile int32_t x332 = INT32_MAX;

	t82 = (x329&((x330|x331)==x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t t83 = -123465165;

	t83 = (x333&((x334|x335)==x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 116U;
	int32_t x338 = -4014;
	volatile int32_t x339 = INT32_MAX;
	volatile uint8_t x340 = 13U;
	int32_t t84 = -1473341;

	t84 = (x337&((x338|x339)==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 823U;
	int8_t x342 = INT8_MIN;
	int16_t x343 = INT16_MIN;
	static int64_t x344 = 648629747790550LL;
	volatile int32_t t85 = 1843267;

	t85 = (x341&((x342|x343)==x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x345 = INT32_MAX;
	uint64_t x346 = 0LLU;
	int8_t x347 = -1;
	static uint32_t x348 = 388861116U;

	t86 = (x345&((x346|x347)==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x350 = -8;
	int32_t t87 = 54;

	t87 = (x349&((x350|x351)==x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	int16_t x355 = -195;
	int32_t x356 = INT32_MIN;
	int32_t t88 = 472912;

	t88 = (x353&((x354|x355)==x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int16_t x357 = -1;
	static int16_t x358 = INT16_MIN;
	static int8_t x359 = INT8_MIN;
	uint8_t x360 = 46U;
	int32_t t89 = 1980273;

	t89 = (x357&((x358|x359)==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x361 = 1064228756U;
	int16_t x362 = -22;
	volatile uint32_t x363 = UINT32_MAX;
	uint32_t x364 = UINT32_MAX;
	volatile uint32_t t90 = 35U;

	t90 = (x361&((x362|x363)==x364));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x365 = INT8_MIN;
	volatile int16_t x366 = 2;
	volatile uint32_t x367 = UINT32_MAX;
	int32_t t91 = -1;

	t91 = (x365&((x366|x367)==x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x370 = -1;
	int64_t x371 = -1LL;
	uint8_t x372 = UINT8_MAX;
	volatile int64_t t92 = 1190LL;

	t92 = (x369&((x370|x371)==x372));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x374 = 1382951;
	volatile int64_t x376 = -1LL;
	int64_t t93 = -220221268LL;

	t93 = (x373&((x374|x375)==x376));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x377 = 363796U;
	uint64_t x378 = 15LLU;
	volatile int64_t x379 = INT64_MIN;
	int16_t x380 = -1;
	volatile uint32_t t94 = 713034220U;

	t94 = (x377&((x378|x379)==x380));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 11742060U;
	int8_t x382 = INT8_MIN;
	volatile uint64_t x383 = UINT64_MAX;
	static volatile int32_t x384 = INT32_MAX;
	volatile uint32_t t95 = 1U;

	t95 = (x381&((x382|x383)==x384));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x385 = 1U;
	uint16_t x387 = 1474U;
	static uint32_t x388 = 27U;

	t96 = (x385&((x386|x387)==x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = INT64_MIN;
	int32_t x391 = INT32_MIN;
	int16_t x392 = INT16_MIN;
	int64_t t97 = -988950285920020283LL;

	t97 = (x389&((x390|x391)==x392));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = UINT64_MAX;
	uint8_t x394 = UINT8_MAX;
	volatile int16_t x395 = INT16_MIN;
	volatile int64_t x396 = -1LL;
	uint64_t t98 = 30496LLU;

	t98 = (x393&((x394|x395)==x396));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x398 = UINT16_MAX;
	int32_t x399 = INT32_MIN;
	volatile int32_t t99 = 7;

	t99 = (x397&((x398|x399)==x400));

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

