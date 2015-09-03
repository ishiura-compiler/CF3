#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -579613;
uint16_t x9 = 2026U;
uint8_t x11 = UINT8_MAX;
volatile int32_t t1 = 1238079;
static int8_t x14 = -1;
int32_t x18 = 4424092;
volatile uint16_t x19 = 227U;
int32_t t3 = -94698712;
uint8_t x21 = 4U;
volatile int32_t t4 = 941;
int16_t x25 = -133;
int16_t x27 = -1;
int64_t x37 = 202529878172625362LL;
uint8_t x39 = 40U;
int64_t x46 = -281237032139237LL;
volatile int16_t x49 = INT16_MIN;
int64_t x51 = INT64_MAX;
int32_t x54 = INT32_MIN;
uint32_t x55 = UINT32_MAX;
int64_t x57 = -1LL;
int16_t x60 = INT16_MAX;
static int32_t x62 = INT32_MIN;
int16_t x63 = INT16_MIN;
int32_t t13 = 0;
static int16_t x70 = INT16_MIN;
int8_t x72 = INT8_MIN;
static int64_t x78 = INT64_MAX;
int64_t x80 = 5003261952LL;
int64_t x82 = INT64_MIN;
int8_t x85 = INT8_MAX;
static int16_t x93 = INT16_MIN;
int32_t x94 = 46;
int32_t x95 = -1;
uint8_t x98 = 1U;
volatile int32_t x99 = -366825;
uint32_t x115 = UINT32_MAX;
int64_t x123 = -750LL;
volatile int64_t x124 = INT64_MAX;
int32_t t26 = -120088;
volatile uint32_t x134 = 205781889U;
int64_t x137 = -1LL;
int64_t x141 = -14327357504455697LL;
static uint8_t x149 = UINT8_MAX;
static int8_t x158 = 5;
static uint16_t x163 = 4827U;
int32_t t35 = -439;
int8_t x166 = INT8_MIN;
uint8_t x182 = 97U;
static volatile uint8_t x186 = 0U;
static volatile uint16_t x188 = 186U;
int32_t x190 = -1;
int32_t x193 = INT32_MIN;
uint64_t x195 = 929LLU;
static uint32_t x199 = 30538503U;
uint64_t x204 = 23801041LLU;
volatile int64_t x210 = INT64_MIN;
volatile uint32_t x211 = 1997172135U;
int8_t x213 = INT8_MIN;
volatile int8_t x215 = INT8_MIN;
volatile uint64_t x231 = 72228280431LLU;
int64_t x240 = INT64_MAX;
int64_t x241 = -1LL;
volatile int64_t x242 = 31813610514296LL;
int32_t t53 = -96590065;
uint64_t x246 = 53379LLU;
int16_t x249 = INT16_MIN;
uint64_t x253 = 67567LLU;
int8_t x263 = INT8_MAX;
volatile int32_t x264 = -1;
int32_t x265 = -10801201;
uint16_t x274 = UINT16_MAX;
int64_t x282 = INT64_MAX;
volatile int32_t x283 = 2;
int16_t x285 = INT16_MIN;
int16_t x292 = -9;
static int32_t x294 = -1;
volatile int8_t x297 = INT8_MIN;
volatile uint16_t x299 = 427U;
int32_t t68 = 13447046;
static uint64_t x305 = UINT64_MAX;
int16_t x307 = INT16_MAX;
uint8_t x316 = 22U;
volatile int8_t x324 = INT8_MIN;
int8_t x329 = INT8_MAX;
volatile int32_t x334 = INT32_MAX;
uint16_t x335 = 3715U;
int8_t x342 = INT8_MIN;
int64_t x343 = -1LL;
int32_t t77 = -855159699;
int16_t x354 = INT16_MIN;
int32_t t80 = 841;
int8_t x359 = -1;
uint64_t x369 = 226211569462LLU;
volatile int32_t x371 = -10455;
int8_t x378 = -1;
uint16_t x393 = UINT16_MAX;
int32_t t90 = -1224;
static int32_t x403 = INT32_MAX;
volatile int32_t t91 = -5;
int16_t x408 = -1;
static int64_t x410 = INT64_MIN;
int8_t x412 = -1;
uint64_t x414 = UINT64_MAX;
uint8_t x416 = 75U;
uint32_t x422 = 4742U;
static int32_t x423 = INT32_MIN;
int32_t t96 = -681586;
int32_t t97 = 14;
volatile int64_t x435 = 624047171772125LL;


void f0(void) {
	uint32_t x1 = 718359U;
	int64_t x2 = -56884955LL;
	int64_t x3 = INT64_MIN;
	volatile uint32_t x4 = UINT32_MAX;

	t0 = ((x1|x2)<(x3+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x10 = 62389119LLU;
	int32_t x12 = 1161;

	t1 = ((x9|x10)<(x11+x12));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = INT8_MIN;
	int16_t x15 = INT16_MIN;
	uint8_t x16 = 81U;
	static int32_t t2 = 1631;

	t2 = ((x13|x14)<(x15+x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MIN;
	volatile uint32_t x20 = 7U;

	t3 = ((x17|x18)<(x19+x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x22 = INT8_MAX;
	int8_t x23 = INT8_MAX;
	volatile uint16_t x24 = 30183U;

	t4 = ((x21|x22)<(x23+x24));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x26 = INT32_MIN;
	int16_t x28 = -1;
	int32_t t5 = 88;

	t5 = ((x25|x26)<(x27+x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = INT8_MAX;
	uint64_t x34 = UINT64_MAX;
	int8_t x35 = INT8_MIN;
	int8_t x36 = INT8_MIN;
	int32_t t6 = 1;

	t6 = ((x33|x34)<(x35+x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x38 = -3;
	int64_t x40 = INT64_MIN;
	int32_t t7 = 14250;

	t7 = ((x37|x38)<(x39+x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x41 = 0;
	static int32_t x42 = INT32_MIN;
	volatile int32_t x43 = -1;
	uint8_t x44 = UINT8_MAX;
	int32_t t8 = -963;

	t8 = ((x41|x42)<(x43+x44));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = -2025;
	int32_t x47 = INT32_MIN;
	static int8_t x48 = 13;
	static volatile int32_t t9 = -12172841;

	t9 = ((x45|x46)<(x47+x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x50 = 295U;
	volatile int8_t x52 = INT8_MIN;
	int32_t t10 = -56075;

	t10 = ((x49|x50)<(x51+x52));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = 5027U;
	uint8_t x56 = 26U;
	int32_t t11 = -8804137;

	t11 = ((x53|x54)<(x55+x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x58 = 7;
	int8_t x59 = -1;
	int32_t t12 = 33;

	t12 = ((x57|x58)<(x59+x60));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x61 = UINT8_MAX;
	int8_t x64 = INT8_MAX;

	t13 = ((x61|x62)<(x63+x64));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x65 = UINT8_MAX;
	static uint32_t x66 = UINT32_MAX;
	uint8_t x67 = UINT8_MAX;
	static volatile uint8_t x68 = 2U;
	volatile int32_t t14 = -2;

	t14 = ((x65|x66)<(x67+x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x69 = -1LL;
	uint32_t x71 = UINT32_MAX;
	volatile int32_t t15 = 269;

	t15 = ((x69|x70)<(x71+x72));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x77 = -63;
	int64_t x79 = INT64_MIN;
	volatile int32_t t16 = -2544182;

	t16 = ((x77|x78)<(x79+x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x81 = -453;
	uint8_t x83 = UINT8_MAX;
	static int16_t x84 = 133;
	volatile int32_t t17 = -1451;

	t17 = ((x81|x82)<(x83+x84));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x86 = 39U;
	volatile int16_t x87 = -1;
	uint8_t x88 = UINT8_MAX;
	volatile int32_t t18 = -369;

	t18 = ((x85|x86)<(x87+x88));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x96 = INT16_MIN;
	int32_t t19 = -855;

	t19 = ((x93|x94)<(x95+x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x97 = 7334747U;
	int32_t x100 = -19;
	static volatile int32_t t20 = -7;

	t20 = ((x97|x98)<(x99+x100));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x101 = INT16_MAX;
	int32_t x102 = -1364938;
	uint8_t x103 = 21U;
	uint32_t x104 = UINT32_MAX;
	static int32_t t21 = 147353;

	t21 = ((x101|x102)<(x103+x104));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int64_t x105 = 2917LL;
	int8_t x106 = INT8_MIN;
	static int32_t x107 = -91;
	int16_t x108 = INT16_MAX;
	volatile int32_t t22 = 7;

	t22 = ((x105|x106)<(x107+x108));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x109 = 595413835U;
	int8_t x110 = INT8_MAX;
	static volatile int16_t x111 = 0;
	int16_t x112 = -129;
	static volatile int32_t t23 = -52;

	t23 = ((x109|x110)<(x111+x112));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = INT64_MIN;
	volatile int16_t x114 = -1;
	uint8_t x116 = UINT8_MAX;
	static volatile int32_t t24 = 58121869;

	t24 = ((x113|x114)<(x115+x116));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x117 = 38654U;
	static uint32_t x118 = 58040U;
	static uint32_t x119 = UINT32_MAX;
	static int64_t x120 = INT64_MIN;
	volatile int32_t t25 = -7104;

	t25 = ((x117|x118)<(x119+x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = -1LL;
	volatile uint32_t x122 = 257588121U;

	t26 = ((x121|x122)<(x123+x124));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x125 = 3694U;
	int8_t x126 = 61;
	static int8_t x127 = INT8_MIN;
	volatile int64_t x128 = -1417499937308867519LL;
	static int32_t t27 = -35023546;

	t27 = ((x125|x126)<(x127+x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x133 = INT8_MIN;
	int8_t x135 = INT8_MAX;
	static uint64_t x136 = UINT64_MAX;
	volatile int32_t t28 = -70110517;

	t28 = ((x133|x134)<(x135+x136));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x138 = -4354LL;
	uint64_t x139 = 139139LLU;
	volatile int64_t x140 = INT64_MIN;
	static int32_t t29 = -10851;

	t29 = ((x137|x138)<(x139+x140));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x142 = INT32_MAX;
	static volatile uint16_t x143 = UINT16_MAX;
	volatile int8_t x144 = INT8_MAX;
	volatile int32_t t30 = -7437;

	t30 = ((x141|x142)<(x143+x144));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x145 = -1;
	int16_t x146 = INT16_MIN;
	int8_t x147 = INT8_MIN;
	int16_t x148 = INT16_MIN;
	volatile int32_t t31 = 505281141;

	t31 = ((x145|x146)<(x147+x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x150 = UINT8_MAX;
	static int16_t x151 = INT16_MIN;
	int16_t x152 = INT16_MAX;
	int32_t t32 = -232652213;

	t32 = ((x149|x150)<(x151+x152));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x153 = -1;
	static uint32_t x154 = 8288U;
	volatile int32_t x155 = INT32_MAX;
	int64_t x156 = INT64_MIN;
	int32_t t33 = 509687;

	t33 = ((x153|x154)<(x155+x156));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x157 = 81LL;
	uint64_t x159 = UINT64_MAX;
	int16_t x160 = 9202;
	int32_t t34 = -87293072;

	t34 = ((x157|x158)<(x159+x160));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x161 = INT32_MIN;
	int8_t x162 = -1;
	static volatile int16_t x164 = -3;

	t35 = ((x161|x162)<(x163+x164));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x165 = 15U;
	int32_t x167 = -1;
	static int32_t x168 = 333;
	static int32_t t36 = -773249;

	t36 = ((x165|x166)<(x167+x168));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x169 = UINT32_MAX;
	static uint16_t x170 = 241U;
	uint32_t x171 = 8U;
	int32_t x172 = -1;
	int32_t t37 = 89;

	t37 = ((x169|x170)<(x171+x172));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x177 = 1622LLU;
	static uint32_t x178 = 1475U;
	uint8_t x179 = 4U;
	volatile uint8_t x180 = UINT8_MAX;
	static int32_t t38 = -1265356;

	t38 = ((x177|x178)<(x179+x180));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x181 = INT8_MAX;
	int64_t x183 = -620102LL;
	static uint16_t x184 = UINT16_MAX;
	int32_t t39 = -1195278;

	t39 = ((x181|x182)<(x183+x184));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x185 = UINT32_MAX;
	int32_t x187 = INT32_MIN;
	volatile int32_t t40 = 0;

	t40 = ((x185|x186)<(x187+x188));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x189 = 0U;
	int16_t x191 = 4372;
	volatile int32_t x192 = INT32_MIN;
	volatile int32_t t41 = 27024;

	t41 = ((x189|x190)<(x191+x192));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x194 = -35974901111249028LL;
	uint16_t x196 = UINT16_MAX;
	static volatile int32_t t42 = -4405;

	t42 = ((x193|x194)<(x195+x196));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x197 = 650;
	uint32_t x198 = 1890958U;
	int32_t x200 = INT32_MAX;
	static int32_t t43 = -1008473131;

	t43 = ((x197|x198)<(x199+x200));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x201 = UINT8_MAX;
	volatile uint16_t x202 = 9U;
	volatile uint64_t x203 = 38001LLU;
	volatile int32_t t44 = 0;

	t44 = ((x201|x202)<(x203+x204));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x205 = UINT8_MAX;
	int64_t x206 = INT64_MIN;
	int64_t x207 = -2706259925949390LL;
	static int32_t x208 = 1294381;
	int32_t t45 = 14352;

	t45 = ((x205|x206)<(x207+x208));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x209 = 405U;
	volatile int32_t x212 = 145072;
	volatile int32_t t46 = 222764983;

	t46 = ((x209|x210)<(x211+x212));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x214 = 3U;
	int64_t x216 = -8LL;
	static int32_t t47 = -8346487;

	t47 = ((x213|x214)<(x215+x216));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x221 = 1358384;
	volatile int64_t x222 = INT64_MIN;
	static int8_t x223 = 11;
	int32_t x224 = -16949165;
	int32_t t48 = 22644;

	t48 = ((x221|x222)<(x223+x224));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x225 = UINT16_MAX;
	static int16_t x226 = 1;
	uint32_t x227 = 422600841U;
	static int32_t x228 = INT32_MAX;
	static int32_t t49 = 1105;

	t49 = ((x225|x226)<(x227+x228));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x229 = 23;
	uint64_t x230 = 24126019743157773LLU;
	uint16_t x232 = 22117U;
	volatile int32_t t50 = -50;

	t50 = ((x229|x230)<(x231+x232));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x233 = UINT16_MAX;
	uint32_t x234 = UINT32_MAX;
	uint64_t x235 = 5121028463429LLU;
	int32_t x236 = INT32_MIN;
	int32_t t51 = -1;

	t51 = ((x233|x234)<(x235+x236));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x237 = INT32_MIN;
	uint64_t x238 = 661412242LLU;
	volatile int16_t x239 = INT16_MIN;
	volatile int32_t t52 = -125;

	t52 = ((x237|x238)<(x239+x240));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x243 = -1;
	volatile int32_t x244 = INT32_MAX;

	t53 = ((x241|x242)<(x243+x244));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x245 = 0U;
	int32_t x247 = INT32_MAX;
	int8_t x248 = 0;
	int32_t t54 = 1698156;

	t54 = ((x245|x246)<(x247+x248));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x250 = INT8_MIN;
	int32_t x251 = -2;
	static volatile int8_t x252 = INT8_MIN;
	volatile int32_t t55 = 199306;

	t55 = ((x249|x250)<(x251+x252));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x254 = 3215U;
	int64_t x255 = -7699270038223LL;
	uint32_t x256 = UINT32_MAX;
	int32_t t56 = -12953231;

	t56 = ((x253|x254)<(x255+x256));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x257 = INT8_MIN;
	volatile int16_t x258 = INT16_MIN;
	static int64_t x259 = INT64_MAX;
	int8_t x260 = INT8_MIN;
	int32_t t57 = -975027812;

	t57 = ((x257|x258)<(x259+x260));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x261 = UINT8_MAX;
	static int64_t x262 = INT64_MIN;
	volatile int32_t t58 = 48;

	t58 = ((x261|x262)<(x263+x264));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x266 = 510087696U;
	volatile int16_t x267 = -30;
	int16_t x268 = INT16_MIN;
	int32_t t59 = -161746;

	t59 = ((x265|x266)<(x267+x268));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x269 = UINT64_MAX;
	int16_t x270 = INT16_MIN;
	uint64_t x271 = 97LLU;
	volatile int64_t x272 = -997096937LL;
	volatile int32_t t60 = -56;

	t60 = ((x269|x270)<(x271+x272));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x273 = INT64_MAX;
	int64_t x275 = -1LL;
	uint32_t x276 = UINT32_MAX;
	static int32_t t61 = -39;

	t61 = ((x273|x274)<(x275+x276));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x277 = INT64_MIN;
	volatile int32_t x278 = 422;
	uint32_t x279 = 971766162U;
	static int8_t x280 = INT8_MIN;
	int32_t t62 = -4;

	t62 = ((x277|x278)<(x279+x280));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x281 = 11U;
	uint32_t x284 = UINT32_MAX;
	int32_t t63 = 1;

	t63 = ((x281|x282)<(x283+x284));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x286 = 13158773606324LLU;
	static volatile uint16_t x287 = 0U;
	int32_t x288 = -1;
	static volatile int32_t t64 = 10067143;

	t64 = ((x285|x286)<(x287+x288));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x289 = -59;
	volatile uint64_t x290 = UINT64_MAX;
	volatile int8_t x291 = INT8_MIN;
	volatile int32_t t65 = 1618;

	t65 = ((x289|x290)<(x291+x292));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x293 = INT8_MIN;
	volatile int64_t x295 = 297775431831845783LL;
	int8_t x296 = INT8_MAX;
	volatile int32_t t66 = 2739772;

	t66 = ((x293|x294)<(x295+x296));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x298 = -3523386;
	static int8_t x300 = INT8_MIN;
	volatile int32_t t67 = 3437941;

	t67 = ((x297|x298)<(x299+x300));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x301 = -3112;
	int8_t x302 = 4;
	uint32_t x303 = UINT32_MAX;
	int32_t x304 = 555457940;

	t68 = ((x301|x302)<(x303+x304));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x306 = 25010367616419102LLU;
	int16_t x308 = INT16_MIN;
	int32_t t69 = -140831040;

	t69 = ((x305|x306)<(x307+x308));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x309 = INT32_MAX;
	int8_t x310 = INT8_MAX;
	static uint64_t x311 = 178978952703728025LLU;
	static int64_t x312 = INT64_MIN;
	volatile int32_t t70 = 220;

	t70 = ((x309|x310)<(x311+x312));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x313 = 69U;
	int16_t x314 = INT16_MIN;
	int32_t x315 = -1;
	volatile int32_t t71 = 2991434;

	t71 = ((x313|x314)<(x315+x316));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x317 = INT16_MAX;
	static volatile int16_t x318 = INT16_MAX;
	int32_t x319 = INT32_MAX;
	static uint64_t x320 = 472508466LLU;
	volatile int32_t t72 = 8716393;

	t72 = ((x317|x318)<(x319+x320));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x321 = INT8_MIN;
	static int64_t x322 = INT64_MIN;
	volatile int16_t x323 = -710;
	static volatile int32_t t73 = -42603481;

	t73 = ((x321|x322)<(x323+x324));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x325 = INT32_MIN;
	int64_t x326 = INT64_MIN;
	int8_t x327 = 5;
	int64_t x328 = INT64_MIN;
	int32_t t74 = -117014802;

	t74 = ((x325|x326)<(x327+x328));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x330 = 106320U;
	static int64_t x331 = -1LL;
	uint8_t x332 = 12U;
	int32_t t75 = -160;

	t75 = ((x329|x330)<(x331+x332));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x333 = 7;
	int8_t x336 = INT8_MAX;
	int32_t t76 = 7053765;

	t76 = ((x333|x334)<(x335+x336));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x341 = 3;
	uint32_t x344 = UINT32_MAX;

	t77 = ((x341|x342)<(x343+x344));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x345 = 99322U;
	static int8_t x346 = INT8_MAX;
	volatile int16_t x347 = INT16_MIN;
	static volatile uint8_t x348 = 9U;
	volatile int32_t t78 = 1035452;

	t78 = ((x345|x346)<(x347+x348));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x349 = INT8_MIN;
	static int64_t x350 = -1LL;
	static int32_t x351 = INT32_MIN;
	int64_t x352 = 788087322576436LL;
	static int32_t t79 = -82206;

	t79 = ((x349|x350)<(x351+x352));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x353 = INT16_MAX;
	uint64_t x355 = UINT64_MAX;
	uint64_t x356 = 705131483LLU;

	t80 = ((x353|x354)<(x355+x356));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x357 = 1;
	uint16_t x358 = UINT16_MAX;
	int8_t x360 = INT8_MIN;
	volatile int32_t t81 = -9;

	t81 = ((x357|x358)<(x359+x360));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x361 = 88LLU;
	int32_t x362 = INT32_MAX;
	volatile int8_t x363 = INT8_MIN;
	volatile int16_t x364 = INT16_MIN;
	static volatile int32_t t82 = -740;

	t82 = ((x361|x362)<(x363+x364));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x370 = -1LL;
	static int32_t x372 = -8639410;
	static int32_t t83 = 15942399;

	t83 = ((x369|x370)<(x371+x372));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x373 = INT16_MIN;
	volatile uint32_t x374 = 1070870418U;
	static int64_t x375 = INT64_MAX;
	int16_t x376 = -1;
	int32_t t84 = 350;

	t84 = ((x373|x374)<(x375+x376));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x377 = INT8_MIN;
	uint16_t x379 = 569U;
	uint8_t x380 = UINT8_MAX;
	volatile int32_t t85 = -519434753;

	t85 = ((x377|x378)<(x379+x380));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x381 = 550LLU;
	static int32_t x382 = INT32_MIN;
	int16_t x383 = INT16_MAX;
	static int32_t x384 = INT32_MIN;
	int32_t t86 = -2124;

	t86 = ((x381|x382)<(x383+x384));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x385 = INT32_MIN;
	uint32_t x386 = UINT32_MAX;
	volatile uint16_t x387 = 71U;
	int16_t x388 = -1;
	volatile int32_t t87 = 0;

	t87 = ((x385|x386)<(x387+x388));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x389 = INT32_MIN;
	int32_t x390 = INT32_MIN;
	static int16_t x391 = INT16_MIN;
	int16_t x392 = -1;
	int32_t t88 = 5337859;

	t88 = ((x389|x390)<(x391+x392));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x394 = INT8_MAX;
	uint32_t x395 = 133614U;
	int8_t x396 = INT8_MIN;
	volatile int32_t t89 = 88;

	t89 = ((x393|x394)<(x395+x396));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x397 = -1;
	int64_t x398 = 768709501292012679LL;
	volatile int8_t x399 = INT8_MIN;
	volatile int8_t x400 = INT8_MAX;

	t90 = ((x397|x398)<(x399+x400));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x401 = INT64_MIN;
	volatile uint16_t x402 = UINT16_MAX;
	static int64_t x404 = -5456LL;

	t91 = ((x401|x402)<(x403+x404));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x405 = 2005283285U;
	static int64_t x406 = 30987468LL;
	volatile int8_t x407 = 1;
	volatile int32_t t92 = -32508;

	t92 = ((x405|x406)<(x407+x408));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x409 = -1;
	uint64_t x411 = UINT64_MAX;
	volatile int32_t t93 = 1;

	t93 = ((x409|x410)<(x411+x412));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x413 = -1;
	int16_t x415 = -1;
	static volatile int32_t t94 = -4;

	t94 = ((x413|x414)<(x415+x416));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x417 = 11600LLU;
	uint32_t x418 = 224U;
	uint64_t x419 = 476070201273309538LLU;
	static volatile uint8_t x420 = UINT8_MAX;
	volatile int32_t t95 = -56570509;

	t95 = ((x417|x418)<(x419+x420));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x421 = INT8_MAX;
	uint32_t x424 = UINT32_MAX;

	t96 = ((x421|x422)<(x423+x424));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x425 = -1;
	uint8_t x426 = 1U;
	static int16_t x427 = -1;
	uint32_t x428 = UINT32_MAX;

	t97 = ((x425|x426)<(x427+x428));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x429 = 27U;
	int8_t x430 = INT8_MIN;
	int16_t x431 = INT16_MIN;
	int16_t x432 = INT16_MAX;
	volatile int32_t t98 = -6;

	t98 = ((x429|x430)<(x431+x432));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x433 = INT16_MIN;
	static volatile uint16_t x434 = UINT16_MAX;
	int16_t x436 = INT16_MIN;
	static int32_t t99 = -563762885;

	t99 = ((x433|x434)<(x435+x436));

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

