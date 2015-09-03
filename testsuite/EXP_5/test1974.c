#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x5 = INT64_MIN;
int64_t t1 = 615LL;
int32_t x10 = INT32_MIN;
int64_t x11 = -1LL;
static int8_t x14 = INT8_MAX;
volatile int32_t t3 = 501663898;
volatile int32_t x19 = INT32_MIN;
int64_t x20 = -2LL;
volatile uint16_t x21 = 6U;
static uint16_t x22 = 2U;
static int32_t t5 = 1541;
int64_t t7 = -567183218790104093LL;
uint64_t x37 = 1055496474956LLU;
int8_t x39 = INT8_MIN;
static volatile int8_t x40 = -1;
int16_t x42 = INT16_MIN;
static volatile int64_t x45 = INT64_MIN;
int8_t x48 = -1;
int64_t t12 = -3246791LL;
int8_t x58 = -1;
int16_t x62 = 5;
volatile int64_t x69 = INT64_MAX;
int8_t x73 = INT8_MIN;
static uint8_t x75 = 6U;
volatile int32_t t18 = -2651;
static int32_t x80 = -1;
int8_t x82 = -7;
int64_t x92 = 248LL;
uint64_t x93 = 23383745337LLU;
int16_t x100 = INT16_MIN;
uint16_t x114 = 27U;
static volatile uint8_t x115 = 74U;
static int16_t x116 = -1;
volatile uint64_t x119 = 56541519547211LLU;
static volatile int32_t t30 = -22374101;
static int64_t x130 = INT64_MAX;
static int8_t x131 = 3;
int16_t x136 = 1;
static int32_t x137 = -1;
uint64_t x142 = UINT64_MAX;
volatile int64_t t35 = 234563762203816362LL;
int16_t x146 = INT16_MIN;
int32_t x151 = -4013;
static uint16_t x155 = 58U;
uint32_t x163 = UINT32_MAX;
uint32_t x164 = UINT32_MAX;
uint16_t x172 = 498U;
static int8_t x173 = 11;
static volatile int64_t t44 = -55488616155884473LL;
int8_t x181 = -56;
static uint32_t x182 = 58708U;
uint16_t x191 = 12U;
static int32_t x194 = INT32_MAX;
int8_t x196 = -15;
uint8_t x197 = 6U;
uint32_t x198 = UINT32_MAX;
int32_t x202 = INT32_MIN;
int8_t x203 = 56;
uint8_t x206 = UINT8_MAX;
static uint8_t x207 = UINT8_MAX;
int16_t x208 = INT16_MIN;
uint64_t x209 = 129060279975737070LLU;
volatile uint32_t x211 = 10728061U;
volatile uint64_t t52 = 28228349527544LLU;
int32_t x216 = -14;
int8_t x229 = 0;
int64_t x233 = -383LL;
volatile int64_t x239 = INT64_MIN;
volatile int32_t x243 = INT32_MAX;
int16_t x253 = INT16_MAX;
uint64_t x255 = 3029948454LLU;
volatile int32_t t63 = -1;
uint64_t x261 = UINT64_MAX;
int8_t x264 = INT8_MIN;
int16_t x265 = -171;
volatile int64_t t67 = 101844520994515239LL;
static volatile uint32_t x275 = 51282351U;
uint64_t x276 = 832931LLU;
int16_t x277 = 1401;
static int16_t x278 = 48;
volatile int32_t t69 = 12;
static volatile uint32_t x287 = 207097464U;
static volatile int32_t x289 = INT32_MIN;
static uint64_t x290 = 3LLU;
uint32_t x296 = UINT32_MAX;
static volatile int32_t t73 = -79660312;
volatile uint64_t x297 = 21091LLU;
int32_t x298 = 2015;
uint32_t x300 = 196U;
volatile uint64_t t74 = 43075LLU;
int32_t x310 = -71;
volatile int16_t x329 = -24;
int16_t x331 = INT16_MIN;
volatile uint16_t x335 = 9U;
int32_t x343 = INT32_MIN;
static uint16_t x347 = 7U;
volatile int32_t t87 = 0;
int32_t x359 = INT32_MAX;
int8_t x362 = -49;
volatile uint8_t x365 = UINT8_MAX;
int8_t x366 = INT8_MIN;
int32_t t91 = -3383526;
uint64_t x370 = UINT64_MAX;
int16_t x380 = -1;
int64_t x382 = INT64_MAX;
uint32_t x387 = 13631U;
int8_t x393 = -1;
int32_t t98 = 8138707;


void f0(void) {
	uint64_t x1 = 5LLU;
	int8_t x2 = -62;
	static uint64_t x3 = UINT64_MAX;
	int64_t x4 = INT64_MIN;
	static uint64_t t0 = 12935LLU;

	t0 = (x1&((x2|x3)<x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x6 = 26;
	uint8_t x7 = 108U;
	volatile int8_t x8 = INT8_MIN;

	t1 = (x5&((x6|x7)<x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = 11;
	uint32_t x12 = 1U;
	volatile int32_t t2 = -6235785;

	t2 = (x9&((x10|x11)<x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = -51;
	uint32_t x15 = UINT32_MAX;
	int32_t x16 = INT32_MIN;

	t3 = (x13&((x14|x15)<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = 24;
	uint64_t x18 = UINT64_MAX;
	int32_t t4 = -123919;

	t4 = (x17&((x18|x19)<x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x23 = INT32_MAX;
	int8_t x24 = INT8_MIN;

	t5 = (x21&((x22|x23)<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	uint64_t x26 = 33409591061303019LLU;
	int64_t x27 = -564186291LL;
	volatile int32_t x28 = INT32_MIN;
	static int32_t t6 = -1;

	t6 = (x25&((x26|x27)<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	int64_t x30 = 569LL;
	int16_t x31 = INT16_MIN;
	int32_t x32 = -1;

	t7 = (x29&((x30|x31)<x32));

	if (t7 != 1LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x33 = -1;
	int16_t x34 = INT16_MIN;
	uint32_t x35 = 913457128U;
	int8_t x36 = INT8_MIN;
	volatile int32_t t8 = -65;

	t8 = (x33&((x34|x35)<x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = -1;
	uint64_t t9 = 3339346594LLU;

	t9 = (x37&((x38|x39)<x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	uint16_t x43 = UINT16_MAX;
	volatile int8_t x44 = -1;
	static volatile uint32_t t10 = 165U;

	t10 = (x41&((x42|x43)<x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = -1;
	volatile uint8_t x47 = 2U;
	volatile int64_t t11 = -12983274750140261LL;

	t11 = (x45&((x46|x47)<x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 818226287554507LL;
	volatile int64_t x50 = 65870556857LL;
	static volatile uint64_t x51 = 830386376490296LLU;
	int32_t x52 = -197;

	t12 = (x49&((x50|x51)<x52));

	if (t12 != 1LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	static int8_t x54 = -11;
	int64_t x55 = INT64_MAX;
	volatile uint8_t x56 = 7U;
	volatile int32_t t13 = -85;

	t13 = (x53&((x54|x55)<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = UINT16_MAX;
	int64_t x59 = INT64_MAX;
	volatile uint8_t x60 = UINT8_MAX;
	volatile int32_t t14 = 483515;

	t14 = (x57&((x58|x59)<x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MIN;
	int64_t x63 = -134898007279800LL;
	static uint16_t x64 = 26U;
	volatile int32_t t15 = -1;

	t15 = (x61&((x62|x63)<x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MAX;
	static volatile uint16_t x66 = 12106U;
	int16_t x67 = -1;
	uint64_t x68 = 131384451603354LLU;
	volatile int32_t t16 = -3;

	t16 = (x65&((x66|x67)<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x70 = 936233LLU;
	int64_t x71 = INT64_MIN;
	int32_t x72 = INT32_MIN;
	volatile int64_t t17 = 1401LL;

	t17 = (x69&((x70|x71)<x72));

	if (t17 != 1LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = -1;
	int16_t x76 = INT16_MIN;

	t18 = (x73&((x74|x75)<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = 2;
	uint16_t x78 = 7U;
	static int64_t x79 = -1LL;
	static volatile int32_t t19 = -2454021;

	t19 = (x77&((x78|x79)<x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 0U;
	uint64_t x83 = UINT64_MAX;
	int16_t x84 = INT16_MIN;
	int32_t t20 = 1314;

	t20 = (x81&((x82|x83)<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 6681U;
	int16_t x86 = 13;
	volatile int64_t x87 = -252LL;
	int32_t x88 = -1;
	int32_t t21 = -2931;

	t21 = (x85&((x86|x87)<x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	uint64_t x90 = 171434987LLU;
	uint16_t x91 = UINT16_MAX;
	int32_t t22 = 97;

	t22 = (x89&((x90|x91)<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x94 = UINT32_MAX;
	volatile int16_t x95 = INT16_MIN;
	volatile uint8_t x96 = 18U;
	static volatile uint64_t t23 = 974638968970830LLU;

	t23 = (x93&((x94|x95)<x96));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	int64_t x98 = 214480037103285LL;
	uint32_t x99 = UINT32_MAX;
	volatile int32_t t24 = -157;

	t24 = (x97&((x98|x99)<x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x101 = UINT64_MAX;
	uint16_t x102 = UINT16_MAX;
	static volatile int8_t x103 = 3;
	uint32_t x104 = UINT32_MAX;
	static uint64_t t25 = 552185383LLU;

	t25 = (x101&((x102|x103)<x104));

	if (t25 != 1LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 9457U;
	static int16_t x106 = 5;
	uint8_t x107 = 1U;
	int32_t x108 = INT32_MIN;
	int32_t t26 = -901;

	t26 = (x105&((x106|x107)<x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = INT8_MAX;
	uint8_t x110 = 5U;
	int64_t x111 = 1113166140255555LL;
	uint64_t x112 = UINT64_MAX;
	volatile int32_t t27 = -13395;

	t27 = (x109&((x110|x111)<x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = UINT32_MAX;
	volatile uint32_t t28 = 1237859658U;

	t28 = (x113&((x114|x115)<x116));

	if (t28 != 0U) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	uint32_t x118 = 893298584U;
	uint32_t x120 = UINT32_MAX;
	volatile int64_t t29 = 7LL;

	t29 = (x117&((x118|x119)<x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -7;
	volatile int16_t x122 = INT16_MIN;
	int64_t x123 = INT64_MAX;
	int64_t x124 = INT64_MAX;

	t30 = (x121&((x122|x123)<x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 206U;
	uint32_t x126 = 2193U;
	int64_t x127 = -150378LL;
	static volatile uint16_t x128 = 969U;
	volatile int32_t t31 = -3386883;

	t31 = (x125&((x126|x127)<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	int64_t x132 = INT64_MIN;
	static volatile int32_t t32 = -683;

	t32 = (x129&((x130|x131)<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	int64_t x134 = INT64_MAX;
	volatile int8_t x135 = INT8_MIN;
	volatile int32_t t33 = -2;

	t33 = (x133&((x134|x135)<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x138 = -3270;
	uint16_t x139 = 3U;
	static uint8_t x140 = UINT8_MAX;
	static int32_t t34 = 19;

	t34 = (x137&((x138|x139)<x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = -1LL;
	uint64_t x143 = 502749562731890LLU;
	int64_t x144 = INT64_MIN;

	t35 = (x141&((x142|x143)<x144));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = 4287;
	volatile uint64_t x147 = 3165821LLU;
	static uint32_t x148 = UINT32_MAX;
	volatile int32_t t36 = -711787005;

	t36 = (x145&((x146|x147)<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -15381986LL;
	int64_t x150 = INT64_MAX;
	int32_t x152 = INT32_MIN;
	int64_t t37 = -1311963357LL;

	t37 = (x149&((x150|x151)<x152));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 314409779888781LLU;
	int32_t x154 = 21;
	static uint8_t x156 = UINT8_MAX;
	static uint64_t t38 = 143008292056060942LLU;

	t38 = (x153&((x154|x155)<x156));

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	uint64_t x158 = 7920564053272126LLU;
	int16_t x159 = INT16_MIN;
	volatile uint8_t x160 = UINT8_MAX;
	volatile int32_t t39 = 0;

	t39 = (x157&((x158|x159)<x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = UINT8_MAX;
	static uint32_t x162 = 7U;
	static int32_t t40 = 13230;

	t40 = (x161&((x162|x163)<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = INT32_MIN;
	int32_t x166 = INT32_MIN;
	uint8_t x167 = 6U;
	static uint32_t x168 = UINT32_MAX;
	int32_t t41 = 1015472;

	t41 = (x165&((x166|x167)<x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x169 = INT8_MAX;
	int8_t x170 = INT8_MIN;
	static int8_t x171 = INT8_MIN;
	int32_t t42 = -376685821;

	t42 = (x169&((x170|x171)<x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x174 = 1U;
	volatile int8_t x175 = INT8_MAX;
	uint64_t x176 = UINT64_MAX;
	volatile int32_t t43 = -1;

	t43 = (x173&((x174|x175)<x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -11644LL;
	uint8_t x178 = UINT8_MAX;
	uint32_t x179 = 338484U;
	int16_t x180 = -1;

	t44 = (x177&((x178|x179)<x180));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x183 = 0;
	uint16_t x184 = 923U;
	int32_t t45 = -339;

	t45 = (x181&((x182|x183)<x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MIN;
	volatile int64_t x186 = INT64_MAX;
	static int8_t x187 = INT8_MIN;
	int64_t x188 = INT64_MIN;
	int32_t t46 = -281522418;

	t46 = (x185&((x186|x187)<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = INT16_MIN;
	int16_t x190 = INT16_MIN;
	int32_t x192 = INT32_MIN;
	int32_t t47 = 5627417;

	t47 = (x189&((x190|x191)<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 106334U;
	int16_t x195 = -1;
	volatile uint32_t t48 = 10486U;

	t48 = (x193&((x194|x195)<x196));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x199 = UINT64_MAX;
	uint8_t x200 = UINT8_MAX;
	volatile int32_t t49 = -195422116;

	t49 = (x197&((x198|x199)<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x201 = 0;
	uint32_t x204 = 9U;
	int32_t t50 = 55;

	t50 = (x201&((x202|x203)<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = -209;
	volatile int32_t t51 = -6;

	t51 = (x205&((x206|x207)<x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x210 = 27U;
	int32_t x212 = 2994;

	t52 = (x209&((x210|x211)<x212));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = 54;
	int64_t x214 = 379LL;
	int32_t x215 = 296748;
	int32_t t53 = 14822;

	t53 = (x213&((x214|x215)<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MAX;
	int32_t x218 = -46;
	uint64_t x219 = 353559LLU;
	int32_t x220 = INT32_MIN;
	volatile int32_t t54 = -10074;

	t54 = (x217&((x218|x219)<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x221 = INT16_MIN;
	uint64_t x222 = 554112649321616191LLU;
	int16_t x223 = 14;
	uint64_t x224 = 3LLU;
	volatile int32_t t55 = 15;

	t55 = (x221&((x222|x223)<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -3796;
	static uint32_t x226 = 1482692898U;
	volatile int8_t x227 = INT8_MIN;
	int8_t x228 = 13;
	int32_t t56 = 0;

	t56 = (x225&((x226|x227)<x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x230 = -1;
	int32_t x231 = INT32_MAX;
	uint8_t x232 = 29U;
	volatile int32_t t57 = -5441490;

	t57 = (x229&((x230|x231)<x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x234 = INT64_MIN;
	static volatile int8_t x235 = INT8_MIN;
	static int64_t x236 = 109759371489066236LL;
	int64_t t58 = 66890334001562LL;

	t58 = (x233&((x234|x235)<x236));

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = 179;
	volatile int8_t x238 = INT8_MAX;
	int16_t x240 = INT16_MIN;
	volatile int32_t t59 = -20658;

	t59 = (x237&((x238|x239)<x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x241 = UINT32_MAX;
	int64_t x242 = -576LL;
	int8_t x244 = -1;
	volatile uint32_t t60 = 9054375U;

	t60 = (x241&((x242|x243)<x244));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = 1916185733U;
	int16_t x246 = -1407;
	static volatile uint32_t x247 = 2833390U;
	volatile uint64_t x248 = 2LLU;
	volatile uint32_t t61 = 7979154U;

	t61 = (x245&((x246|x247)<x248));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	uint64_t x250 = UINT64_MAX;
	int16_t x251 = 0;
	static volatile uint64_t x252 = UINT64_MAX;
	volatile int32_t t62 = 3757999;

	t62 = (x249&((x250|x251)<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x254 = INT8_MIN;
	int16_t x256 = INT16_MIN;

	t63 = (x253&((x254|x255)<x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x257 = 44196541121329193LLU;
	volatile int64_t x258 = INT64_MAX;
	int8_t x259 = INT8_MAX;
	int64_t x260 = INT64_MIN;
	static volatile uint64_t t64 = 6821184335207989578LLU;

	t64 = (x257&((x258|x259)<x260));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x262 = 8U;
	int64_t x263 = INT64_MAX;
	uint64_t t65 = 6821284LLU;

	t65 = (x261&((x262|x263)<x264));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x266 = -1LL;
	static int8_t x267 = -1;
	int8_t x268 = INT8_MIN;
	int32_t t66 = 187857162;

	t66 = (x265&((x266|x267)<x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = 16094919LL;
	static volatile int32_t x270 = INT32_MAX;
	int32_t x271 = -7617;
	int16_t x272 = -1;

	t67 = (x269&((x270|x271)<x272));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x273 = INT8_MIN;
	volatile int64_t x274 = -8263060578255978LL;
	int32_t t68 = 11959110;

	t68 = (x273&((x274|x275)<x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x279 = 1030586204U;
	static uint16_t x280 = 18959U;

	t69 = (x277&((x278|x279)<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x281 = 3927881488656767319LL;
	static uint32_t x282 = 8116U;
	int64_t x283 = -1LL;
	int8_t x284 = INT8_MIN;
	int64_t t70 = -66810567871484604LL;

	t70 = (x281&((x282|x283)<x284));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x285 = UINT16_MAX;
	int64_t x286 = INT64_MAX;
	static uint32_t x288 = UINT32_MAX;
	int32_t t71 = 35;

	t71 = (x285&((x286|x287)<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int16_t x291 = -17;
	volatile int32_t x292 = -102279342;
	volatile int32_t t72 = -127;

	t72 = (x289&((x290|x291)<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x293 = -68;
	volatile uint8_t x294 = 5U;
	uint8_t x295 = UINT8_MAX;

	t73 = (x293&((x294|x295)<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x299 = -436;

	t74 = (x297&((x298|x299)<x300));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = -1;
	volatile int8_t x302 = INT8_MIN;
	volatile uint64_t x303 = UINT64_MAX;
	int8_t x304 = -1;
	static int32_t t75 = -2388230;

	t75 = (x301&((x302|x303)<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = 402;
	int32_t x306 = -1;
	volatile uint32_t x307 = UINT32_MAX;
	static int32_t x308 = INT32_MIN;
	volatile int32_t t76 = -22;

	t76 = (x305&((x306|x307)<x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MIN;
	uint64_t x311 = 41711LLU;
	int64_t x312 = INT64_MAX;
	int32_t t77 = 19980655;

	t77 = (x309&((x310|x311)<x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 175886U;
	int64_t x314 = -415LL;
	int64_t x315 = INT64_MIN;
	int16_t x316 = 12343;
	volatile uint32_t t78 = 51065384U;

	t78 = (x313&((x314|x315)<x316));

	if (t78 != 0U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	uint16_t x318 = UINT16_MAX;
	uint32_t x319 = 0U;
	uint64_t x320 = 310518LLU;
	static volatile int32_t t79 = 162232408;

	t79 = (x317&((x318|x319)<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 1024U;
	int8_t x322 = 0;
	volatile uint64_t x323 = 4348479754246LLU;
	int16_t x324 = INT16_MAX;
	static volatile uint32_t t80 = 98240229U;

	t80 = (x321&((x322|x323)<x324));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = -1LL;
	int16_t x326 = 4;
	uint8_t x327 = 24U;
	volatile int64_t x328 = -1LL;
	static int64_t t81 = -7430348368715LL;

	t81 = (x325&((x326|x327)<x328));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x330 = INT64_MIN;
	int8_t x332 = INT8_MIN;
	static volatile int32_t t82 = -2757;

	t82 = (x329&((x330|x331)<x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	volatile int16_t x334 = 52;
	static uint64_t x336 = UINT64_MAX;
	int32_t t83 = -883;

	t83 = (x333&((x334|x335)<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 1U;
	uint64_t x338 = UINT64_MAX;
	int32_t x339 = INT32_MIN;
	static int32_t x340 = 484;
	volatile int32_t t84 = 14;

	t84 = (x337&((x338|x339)<x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x341 = 21LLU;
	int8_t x342 = 0;
	volatile uint64_t x344 = 4860LLU;
	uint64_t t85 = 45LLU;

	t85 = (x341&((x342|x343)<x344));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = -1LL;
	int16_t x346 = INT16_MIN;
	volatile int32_t x348 = -1;
	int64_t t86 = -30648LL;

	t86 = (x345&((x346|x347)<x348));

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	static uint8_t x350 = 98U;
	volatile int16_t x351 = INT16_MAX;
	volatile int32_t x352 = INT32_MIN;

	t87 = (x349&((x350|x351)<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = INT32_MAX;
	int16_t x354 = -1;
	volatile int8_t x355 = 59;
	uint32_t x356 = 372U;
	int32_t t88 = -27275035;

	t88 = (x353&((x354|x355)<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -1;
	static volatile uint64_t x358 = UINT64_MAX;
	int64_t x360 = INT64_MAX;
	volatile int32_t t89 = -2231084;

	t89 = (x357&((x358|x359)<x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = 20;
	int32_t x363 = -1;
	int64_t x364 = 637834532855288LL;
	int32_t t90 = 91017438;

	t90 = (x361&((x362|x363)<x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x367 = INT8_MIN;
	volatile int32_t x368 = INT32_MIN;

	t91 = (x365&((x366|x367)<x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x369 = UINT64_MAX;
	volatile uint64_t x371 = UINT64_MAX;
	uint8_t x372 = 126U;
	volatile uint64_t t92 = 333194LLU;

	t92 = (x369&((x370|x371)<x372));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 8405347483060214009LLU;
	uint16_t x374 = UINT16_MAX;
	int16_t x375 = -1;
	uint16_t x376 = UINT16_MAX;
	uint64_t t93 = 387526LLU;

	t93 = (x373&((x374|x375)<x376));

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x377 = INT16_MIN;
	int32_t x378 = -1;
	int8_t x379 = -2;
	volatile int32_t t94 = -127;

	t94 = (x377&((x378|x379)<x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x381 = INT64_MIN;
	int32_t x383 = INT32_MAX;
	int8_t x384 = -1;
	int64_t t95 = -19584232971159LL;

	t95 = (x381&((x382|x383)<x384));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x385 = 14U;
	int64_t x386 = 213628LL;
	int16_t x388 = INT16_MIN;
	int32_t t96 = 107;

	t96 = (x385&((x386|x387)<x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MAX;
	static uint8_t x390 = 126U;
	volatile int16_t x391 = INT16_MAX;
	uint8_t x392 = 63U;
	volatile int32_t t97 = -347;

	t97 = (x389&((x390|x391)<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x394 = UINT16_MAX;
	volatile uint8_t x395 = 1U;
	int8_t x396 = INT8_MIN;

	t98 = (x393&((x394|x395)<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -1;
	uint16_t x398 = 6U;
	static int64_t x399 = -78954755372722LL;
	uint32_t x400 = UINT32_MAX;
	volatile int32_t t99 = 1;

	t99 = (x397&((x398|x399)<x400));

	if (t99 != 1) { NG(); } else { ; }
	
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

