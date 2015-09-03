#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = 3;
uint8_t x11 = UINT8_MAX;
int64_t x12 = INT64_MIN;
volatile int64_t t3 = -331616168079261762LL;
volatile uint32_t x31 = 83309987U;
int32_t x43 = INT32_MAX;
uint8_t x51 = 16U;
int16_t x53 = INT16_MIN;
int8_t x58 = -1;
volatile int32_t t14 = -968910148;
int16_t x61 = INT16_MIN;
static int64_t x64 = INT64_MIN;
int16_t x66 = INT16_MIN;
int64_t t17 = -17917822572106LL;
static int8_t x80 = 25;
int32_t t20 = 32741;
volatile int8_t x86 = 4;
static int32_t x88 = INT32_MIN;
uint16_t x93 = 112U;
volatile uint32_t t22 = 266755U;
static int32_t x103 = -1;
uint8_t x104 = 0U;
uint32_t x113 = 52797426U;
int32_t x116 = -247;
int16_t x120 = INT16_MAX;
volatile uint16_t x124 = 13U;
int16_t x129 = INT16_MAX;
uint64_t x137 = 282590875473532706LLU;
int32_t x145 = 41387;
int32_t x146 = INT32_MIN;
uint32_t x147 = 8642912U;
int64_t x150 = -1LL;
int32_t x153 = 244195233;
uint16_t x156 = UINT16_MAX;
volatile int64_t x169 = -1LL;
uint8_t x173 = 57U;
uint16_t x174 = UINT16_MAX;
int64_t x176 = -42744387239LL;
volatile int64_t t42 = 270448LL;
int8_t x179 = -15;
int64_t x182 = INT64_MIN;
static int8_t x184 = INT8_MIN;
int8_t x190 = 1;
uint32_t x199 = UINT32_MAX;
int8_t x200 = 28;
uint16_t x201 = 18U;
volatile uint8_t x215 = 6U;
uint64_t x216 = 1374LLU;
int32_t x227 = INT32_MAX;
int32_t x234 = 4;
volatile int64_t x237 = INT64_MIN;
volatile uint8_t x240 = UINT8_MAX;
int8_t x242 = INT8_MIN;
static int64_t x243 = 121329802175LL;
uint64_t x245 = UINT64_MAX;
int64_t x246 = 211247215LL;
static int16_t x248 = -1;
static uint16_t x259 = 1309U;
uint16_t x260 = 539U;
int64_t x261 = INT64_MAX;
volatile uint64_t x262 = UINT64_MAX;
static int32_t x266 = INT32_MAX;
uint32_t x270 = 3640605U;
static uint64_t x271 = 1359632581164256LLU;
static int16_t x274 = INT16_MAX;
volatile int32_t x278 = 82;
int8_t x281 = -37;
volatile int64_t x282 = INT64_MIN;
uint32_t t72 = 21U;
int64_t x300 = INT64_MAX;
int64_t t75 = 690LL;
int32_t x313 = INT32_MIN;
volatile int64_t x318 = INT64_MIN;
volatile int32_t t77 = -22352886;
volatile int32_t t79 = 387393596;
volatile uint64_t t84 = 5104551892668204848LLU;
volatile int64_t t85 = -25966LL;
static int8_t x356 = -1;
volatile int32_t x358 = INT32_MIN;
uint32_t x360 = UINT32_MAX;
int16_t x365 = -1469;
int64_t x369 = INT64_MIN;
static uint16_t x384 = UINT16_MAX;
int16_t x389 = INT16_MIN;
int32_t x392 = INT32_MIN;
int32_t t95 = -49930;
int8_t x395 = INT8_MIN;
uint32_t x397 = 1909504254U;


void f0(void) {
	int16_t x1 = -1;
	volatile int32_t x3 = INT32_MIN;
	int8_t x4 = -11;
	int32_t t0 = 2;

	t0 = ((x1<=x2)+(x3|x4));

	if (t0 != -10) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MAX;
	volatile uint32_t x6 = 269357943U;
	int32_t x7 = -1;
	int8_t x8 = -3;
	volatile int32_t t1 = -34637;

	t1 = ((x5<=x6)+(x7|x8));

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	int8_t x10 = INT8_MIN;
	static int64_t t2 = 607957724LL;

	t2 = ((x9<=x10)+(x11|x12));

	if (t2 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -6;
	static int32_t x14 = INT32_MAX;
	volatile int64_t x15 = 15LL;
	volatile int16_t x16 = -1;

	t3 = ((x13<=x14)+(x15|x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x17 = 1U;
	uint16_t x18 = 57U;
	int32_t x19 = -1;
	volatile uint64_t x20 = UINT64_MAX;
	volatile uint64_t t4 = 2921974973LLU;

	t4 = ((x17<=x18)+(x19|x20));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MIN;
	int32_t x22 = INT32_MIN;
	static int8_t x23 = -1;
	volatile uint16_t x24 = UINT16_MAX;
	int32_t t5 = -2;

	t5 = ((x21<=x22)+(x23|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int8_t x25 = 4;
	uint8_t x26 = UINT8_MAX;
	int64_t x27 = INT64_MIN;
	int16_t x28 = -1;
	volatile int64_t t6 = -665LL;

	t6 = ((x25<=x26)+(x27|x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = UINT32_MAX;
	volatile int16_t x30 = INT16_MAX;
	uint16_t x32 = 37U;
	uint32_t t7 = 35616U;

	t7 = ((x29<=x30)+(x31|x32));

	if (t7 != 83309991U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -30;
	uint32_t x34 = 179U;
	volatile int64_t x35 = 979LL;
	int16_t x36 = INT16_MIN;
	volatile int64_t t8 = 129105824483LL;

	t8 = ((x33<=x34)+(x35|x36));

	if (t8 != -31789LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = UINT8_MAX;
	int8_t x38 = -40;
	volatile uint8_t x39 = UINT8_MAX;
	static uint16_t x40 = UINT16_MAX;
	volatile int32_t t9 = -304730;

	t9 = ((x37<=x38)+(x39|x40));

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = 1;
	static uint8_t x42 = 51U;
	int16_t x44 = INT16_MIN;
	volatile int32_t t10 = -115;

	t10 = ((x41<=x42)+(x43|x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = 206871665LL;
	static volatile uint64_t x46 = 15273196584548859LLU;
	volatile int32_t x47 = INT32_MIN;
	static volatile int32_t x48 = INT32_MAX;
	volatile int32_t t11 = -2;

	t11 = ((x45<=x46)+(x47|x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 3542U;
	volatile int8_t x50 = INT8_MIN;
	int8_t x52 = -1;
	int32_t t12 = 646760038;

	t12 = ((x49<=x50)+(x51|x52));

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = -2594LL;
	uint16_t x55 = 166U;
	int64_t x56 = 117890209725LL;
	int64_t t13 = 999699504619892023LL;

	t13 = ((x53<=x54)+(x55|x56));

	if (t13 != 117890209728LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 1360580U;
	static uint8_t x59 = UINT8_MAX;
	int32_t x60 = -1647;

	t14 = ((x57<=x58)+(x59|x60));

	if (t14 != -1536) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = INT16_MIN;
	int32_t x63 = 0;
	volatile int64_t t15 = -936635LL;

	t15 = ((x61<=x62)+(x63|x64));

	if (t15 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = 14;
	int32_t x67 = -1;
	static uint64_t x68 = 3162392217022559154LLU;
	static uint64_t t16 = UINT64_MAX;

	t16 = ((x65<=x66)+(x67|x68));

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = -1;
	int8_t x70 = -1;
	int64_t x71 = -30025334LL;
	int64_t x72 = -1LL;

	t17 = ((x69<=x70)+(x71|x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x73 = -1;
	int8_t x74 = INT8_MAX;
	int16_t x75 = INT16_MIN;
	static int64_t x76 = INT64_MIN;
	int64_t t18 = -418176258LL;

	t18 = ((x73<=x74)+(x75|x76));

	if (t18 != -32767LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	static volatile int8_t x78 = 59;
	int16_t x79 = INT16_MIN;
	volatile int32_t t19 = 348;

	t19 = ((x77<=x78)+(x79|x80));

	if (t19 != -32742) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -344;
	int16_t x82 = -1;
	static int8_t x83 = -1;
	volatile uint8_t x84 = 50U;

	t20 = ((x81<=x82)+(x83|x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 9U;
	int32_t x87 = -219730;
	static int32_t t21 = 289191658;

	t21 = ((x85<=x86)+(x87|x88));

	if (t21 != -219730) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x94 = INT8_MAX;
	static volatile int8_t x95 = 1;
	static uint32_t x96 = 131867604U;

	t22 = ((x93<=x94)+(x95|x96));

	if (t22 != 131867606U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x97 = UINT32_MAX;
	int64_t x98 = 1197058266570LL;
	volatile uint32_t x99 = 112998U;
	uint8_t x100 = UINT8_MAX;
	uint32_t t23 = 84761U;

	t23 = ((x97<=x98)+(x99|x100));

	if (t23 != 113152U) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x101 = -196LL;
	static uint8_t x102 = 100U;
	static int32_t t24 = 42718;

	t24 = ((x101<=x102)+(x103|x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = -18;
	int16_t x106 = -481;
	int64_t x107 = -11539221LL;
	int64_t x108 = INT64_MIN;
	int64_t t25 = 1817184609LL;

	t25 = ((x105<=x106)+(x107|x108));

	if (t25 != -11539221LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = -61;
	static int64_t x110 = -1413805LL;
	int64_t x111 = INT64_MIN;
	int32_t x112 = -204917;
	volatile int64_t t26 = -11472LL;

	t26 = ((x109<=x110)+(x111|x112));

	if (t26 != -204917LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x114 = INT32_MAX;
	volatile int64_t x115 = -1LL;
	static int64_t t27 = 22610931340740820LL;

	t27 = ((x113<=x114)+(x115|x116));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x117 = -1;
	volatile uint64_t x118 = 46501559494172409LLU;
	volatile int8_t x119 = -18;
	int32_t t28 = 3485;

	t28 = ((x117<=x118)+(x119|x120));

	if (t28 != -1) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x121 = 965975088772LLU;
	int32_t x122 = INT32_MIN;
	static uint64_t x123 = UINT64_MAX;
	static volatile uint64_t t29 = 52028LLU;

	t29 = ((x121<=x122)+(x123|x124));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x125 = -3;
	volatile int16_t x126 = INT16_MIN;
	volatile uint64_t x127 = 774285099287092019LLU;
	int8_t x128 = 13;
	volatile uint64_t t30 = 7661042911235182453LLU;

	t30 = ((x125<=x126)+(x127|x128));

	if (t30 != 774285099287092031LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x130 = INT16_MIN;
	int32_t x131 = INT32_MIN;
	uint32_t x132 = UINT32_MAX;
	static uint32_t t31 = UINT32_MAX;

	t31 = ((x129<=x130)+(x131|x132));

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int8_t x133 = -22;
	int16_t x134 = -1;
	int8_t x135 = INT8_MIN;
	uint16_t x136 = UINT16_MAX;
	int32_t t32 = -583485456;

	t32 = ((x133<=x134)+(x135|x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x138 = INT8_MIN;
	static int64_t x139 = INT64_MIN;
	int16_t x140 = INT16_MAX;
	int64_t t33 = 3862032760LL;

	t33 = ((x137<=x138)+(x139|x140));

	if (t33 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x141 = 112U;
	volatile int8_t x142 = INT8_MIN;
	int32_t x143 = -92;
	int8_t x144 = 6;
	static int32_t t34 = -6;

	t34 = ((x141<=x142)+(x143|x144));

	if (t34 != -90) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x148 = INT32_MIN;
	uint32_t t35 = 12U;

	t35 = ((x145<=x146)+(x147|x148));

	if (t35 != 2156126560U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x149 = 31U;
	uint8_t x151 = 0U;
	int64_t x152 = -1LL;
	volatile int64_t t36 = 892694946LL;

	t36 = ((x149<=x150)+(x151|x152));

	if (t36 != -1LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x154 = INT16_MAX;
	volatile int16_t x155 = -4013;
	int32_t t37 = 7656146;

	t37 = ((x153<=x154)+(x155|x156));

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x157 = 1U;
	volatile int64_t x158 = INT64_MIN;
	int32_t x159 = INT32_MIN;
	uint16_t x160 = UINT16_MAX;
	int32_t t38 = -43274;

	t38 = ((x157<=x158)+(x159|x160));

	if (t38 != -2147418113) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x161 = 37675101U;
	uint64_t x162 = 1727731LLU;
	static int64_t x163 = INT64_MIN;
	uint8_t x164 = 43U;
	volatile int64_t t39 = 29836183LL;

	t39 = ((x161<=x162)+(x163|x164));

	if (t39 != -9223372036854775765LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x165 = 12898U;
	int64_t x166 = INT64_MIN;
	int64_t x167 = 69LL;
	uint16_t x168 = 1165U;
	int64_t t40 = 94LL;

	t40 = ((x165<=x166)+(x167|x168));

	if (t40 != 1229LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x170 = 6;
	volatile int32_t x171 = 5866962;
	static volatile uint16_t x172 = UINT16_MAX;
	volatile int32_t t41 = -15;

	t41 = ((x169<=x170)+(x171|x172));

	if (t41 != 5898240) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x175 = -163263058LL;

	t42 = ((x173<=x174)+(x175|x176));

	if (t42 != -25367040LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x177 = INT8_MIN;
	int64_t x178 = 105336495167476LL;
	int16_t x180 = INT16_MIN;
	int32_t t43 = -748446;

	t43 = ((x177<=x178)+(x179|x180));

	if (t43 != -14) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x181 = 707122LLU;
	int64_t x183 = -258LL;
	volatile int64_t t44 = 204417133305LL;

	t44 = ((x181<=x182)+(x183|x184));

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = -82;
	int8_t x186 = INT8_MIN;
	uint64_t x187 = 124419LLU;
	static int32_t x188 = -48969739;
	volatile uint64_t t45 = 919LLU;

	t45 = ((x185<=x186)+(x187|x188));

	if (t45 != 18446744073660655607LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x189 = 0U;
	static int16_t x191 = 205;
	int64_t x192 = -241LL;
	int64_t t46 = -25145551175719511LL;

	t46 = ((x189<=x190)+(x191|x192));

	if (t46 != -48LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x193 = UINT64_MAX;
	static int16_t x194 = 173;
	int64_t x195 = -110606086160144LL;
	static int8_t x196 = INT8_MIN;
	volatile int64_t t47 = 285607075385964LL;

	t47 = ((x193<=x194)+(x195|x196));

	if (t47 != -16LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x197 = -1;
	int32_t x198 = -1019;
	uint32_t t48 = UINT32_MAX;

	t48 = ((x197<=x198)+(x199|x200));

	if (t48 != UINT32_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x202 = INT64_MAX;
	static int32_t x203 = -420241936;
	int16_t x204 = -1750;
	int32_t t49 = -24937;

	t49 = ((x201<=x202)+(x203|x204));

	if (t49 != -517) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x205 = -1;
	int32_t x206 = -200;
	static volatile int64_t x207 = 0LL;
	int32_t x208 = -1;
	static int64_t t50 = 153LL;

	t50 = ((x205<=x206)+(x207|x208));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x209 = INT8_MIN;
	uint8_t x210 = 3U;
	int8_t x211 = INT8_MIN;
	int64_t x212 = INT64_MIN;
	int64_t t51 = 1112818590LL;

	t51 = ((x209<=x210)+(x211|x212));

	if (t51 != -127LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = INT32_MIN;
	int16_t x214 = -1;
	static volatile uint64_t t52 = 125960090330417LLU;

	t52 = ((x213<=x214)+(x215|x216));

	if (t52 != 1375LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x217 = INT8_MIN;
	volatile int32_t x218 = 41467149;
	int64_t x219 = -1118LL;
	volatile int64_t x220 = 1432466509874LL;
	volatile int64_t t53 = 231424673LL;

	t53 = ((x217<=x218)+(x219|x220));

	if (t53 != -1101LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = INT8_MIN;
	int32_t x222 = -82549414;
	volatile int64_t x223 = 1422084231359LL;
	static int64_t x224 = -1042879899LL;
	static int64_t t54 = -229569LL;

	t54 = ((x221<=x222)+(x223|x224));

	if (t54 != -606602497LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x225 = 507LLU;
	volatile int64_t x226 = 3695313957922898LL;
	int64_t x228 = -1LL;
	volatile int64_t t55 = -2871635490159LL;

	t55 = ((x225<=x226)+(x227|x228));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = INT32_MIN;
	int16_t x230 = INT16_MAX;
	volatile int64_t x231 = -1LL;
	int16_t x232 = INT16_MIN;
	int64_t t56 = -36704LL;

	t56 = ((x229<=x230)+(x231|x232));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x233 = 256486850LLU;
	static volatile int32_t x235 = INT32_MIN;
	uint64_t x236 = 126378969183980815LLU;
	volatile uint64_t t57 = 301251244LLU;

	t57 = ((x233<=x234)+(x235|x236));

	if (t57 != 18446744072590363919LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x238 = 2U;
	static int64_t x239 = 31406842891563117LL;
	static int64_t t58 = 32570438776955LL;

	t58 = ((x237<=x238)+(x239|x240));

	if (t58 != 31406842891563264LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x241 = INT16_MAX;
	int32_t x244 = -1;
	int64_t t59 = 33898457437455LL;

	t59 = ((x241<=x242)+(x243|x244));

	if (t59 != -1LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x247 = 21243U;
	int32_t t60 = -104;

	t60 = ((x245<=x246)+(x247|x248));

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x249 = INT8_MAX;
	volatile int16_t x250 = -3;
	volatile uint16_t x251 = 1960U;
	int64_t x252 = INT64_MIN;
	int64_t t61 = -1LL;

	t61 = ((x249<=x250)+(x251|x252));

	if (t61 != -9223372036854773848LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x253 = INT32_MIN;
	uint64_t x254 = 418463385848401231LLU;
	int64_t x255 = 9LL;
	static uint64_t x256 = 1513557358132162LLU;
	static volatile uint64_t t62 = 1082LLU;

	t62 = ((x253<=x254)+(x255|x256));

	if (t62 != 1513557358132171LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x257 = 1;
	int16_t x258 = -1;
	volatile int32_t t63 = 1;

	t63 = ((x257<=x258)+(x259|x260));

	if (t63 != 1823) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x263 = -1;
	uint8_t x264 = 6U;
	int32_t t64 = -57838908;

	t64 = ((x261<=x262)+(x263|x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x265 = UINT64_MAX;
	int32_t x267 = -289;
	uint16_t x268 = 1U;
	int32_t t65 = 213049;

	t65 = ((x265<=x266)+(x267|x268));

	if (t65 != -289) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x269 = INT32_MAX;
	volatile int64_t x272 = INT64_MIN;
	volatile uint64_t t66 = 159LLU;

	t66 = ((x269<=x270)+(x271|x272));

	if (t66 != 9224731669435940064LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = 10;
	static int8_t x275 = 0;
	int8_t x276 = -1;
	static int32_t t67 = 17338;

	t67 = ((x273<=x274)+(x275|x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x277 = 47U;
	int64_t x279 = INT64_MAX;
	int64_t x280 = -1LL;
	static int64_t t68 = 177392LL;

	t68 = ((x277<=x278)+(x279|x280));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x283 = 641;
	int64_t x284 = INT64_MIN;
	int64_t t69 = -712323601007330LL;

	t69 = ((x281<=x282)+(x283|x284));

	if (t69 != -9223372036854775167LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x285 = INT16_MIN;
	int32_t x286 = INT32_MAX;
	static int64_t x287 = INT64_MIN;
	uint64_t x288 = UINT64_MAX;
	static volatile uint64_t t70 = 367604460293LLU;

	t70 = ((x285<=x286)+(x287|x288));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x289 = INT16_MIN;
	uint16_t x290 = 2U;
	static int32_t x291 = -2423127;
	uint64_t x292 = UINT64_MAX;
	volatile uint64_t t71 = 171769090LLU;

	t71 = ((x289<=x290)+(x291|x292));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x293 = INT32_MAX;
	int8_t x294 = INT8_MIN;
	uint16_t x295 = 3U;
	uint32_t x296 = 29U;

	t72 = ((x293<=x294)+(x295|x296));

	if (t72 != 31U) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x297 = 2946U;
	int32_t x298 = INT32_MIN;
	static int8_t x299 = INT8_MAX;
	volatile int64_t t73 = INT64_MAX;

	t73 = ((x297<=x298)+(x299|x300));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x301 = 30741U;
	static uint32_t x302 = 7U;
	int16_t x303 = INT16_MIN;
	static volatile int16_t x304 = -1;
	static volatile int32_t t74 = 153385743;

	t74 = ((x301<=x302)+(x303|x304));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x309 = -1;
	uint16_t x310 = 2U;
	volatile int64_t x311 = -1LL;
	static int64_t x312 = INT64_MAX;

	t75 = ((x309<=x310)+(x311|x312));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x314 = 13224U;
	volatile uint16_t x315 = UINT16_MAX;
	int8_t x316 = INT8_MIN;
	static int32_t t76 = -154698668;

	t76 = ((x313<=x314)+(x315|x316));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x317 = INT8_MAX;
	int32_t x319 = -1;
	int8_t x320 = -6;

	t77 = ((x317<=x318)+(x319|x320));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x321 = INT32_MIN;
	static int64_t x322 = -3100399351241158039LL;
	uint16_t x323 = 115U;
	int16_t x324 = INT16_MAX;
	int32_t t78 = 0;

	t78 = ((x321<=x322)+(x323|x324));

	if (t78 != 32767) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x325 = INT16_MIN;
	int16_t x326 = 1;
	static uint16_t x327 = 35U;
	volatile int16_t x328 = -1;

	t79 = ((x325<=x326)+(x327|x328));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x329 = INT8_MIN;
	static volatile uint64_t x330 = UINT64_MAX;
	static volatile int16_t x331 = -3360;
	uint8_t x332 = 1U;
	int32_t t80 = 23;

	t80 = ((x329<=x330)+(x331|x332));

	if (t80 != -3358) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x333 = -1;
	int32_t x334 = -1;
	static int8_t x335 = INT8_MAX;
	static int64_t x336 = -113LL;
	volatile int64_t t81 = -189832698279184LL;

	t81 = ((x333<=x334)+(x335|x336));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x337 = INT16_MAX;
	uint16_t x338 = UINT16_MAX;
	uint64_t x339 = 3149487096651921LLU;
	volatile int32_t x340 = -1;
	volatile uint64_t t82 = 34310065489134LLU;

	t82 = ((x337<=x338)+(x339|x340));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x341 = -1;
	static int64_t x342 = INT64_MIN;
	int16_t x343 = 126;
	volatile uint32_t x344 = UINT32_MAX;
	volatile uint32_t t83 = UINT32_MAX;

	t83 = ((x341<=x342)+(x343|x344));

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x345 = 5246423421779LL;
	volatile int64_t x346 = -12342175651LL;
	int16_t x347 = -2;
	uint64_t x348 = 171870806LLU;

	t84 = ((x345<=x346)+(x347|x348));

	if (t84 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x349 = INT16_MAX;
	int8_t x350 = -1;
	int64_t x351 = INT64_MIN;
	volatile int16_t x352 = -1;

	t85 = ((x349<=x350)+(x351|x352));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x353 = INT64_MAX;
	static volatile int64_t x354 = INT64_MIN;
	int64_t x355 = INT64_MIN;
	int64_t t86 = -379791363LL;

	t86 = ((x353<=x354)+(x355|x356));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x357 = INT32_MIN;
	uint8_t x359 = 48U;
	uint32_t t87 = 0U;

	t87 = ((x357<=x358)+(x359|x360));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x361 = UINT64_MAX;
	int16_t x362 = INT16_MIN;
	volatile int8_t x363 = INT8_MAX;
	int8_t x364 = INT8_MIN;
	int32_t t88 = 5612;

	t88 = ((x361<=x362)+(x363|x364));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x366 = INT16_MIN;
	static int16_t x367 = INT16_MIN;
	int64_t x368 = 242840LL;
	volatile int64_t t89 = -2LL;

	t89 = ((x365<=x366)+(x367|x368));

	if (t89 != -19304LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x370 = INT64_MIN;
	volatile int64_t x371 = INT64_MIN;
	int8_t x372 = 5;
	int64_t t90 = -1LL;

	t90 = ((x369<=x370)+(x371|x372));

	if (t90 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x373 = 481;
	static int16_t x374 = -1;
	static int16_t x375 = INT16_MIN;
	uint8_t x376 = 2U;
	int32_t t91 = -1;

	t91 = ((x373<=x374)+(x375|x376));

	if (t91 != -32766) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x377 = 6622355429158571LLU;
	volatile int16_t x378 = 12;
	uint32_t x379 = 27U;
	int64_t x380 = -204339746LL;
	volatile int64_t t92 = 2228191202544397LL;

	t92 = ((x377<=x378)+(x379|x380));

	if (t92 != -204339745LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x381 = UINT32_MAX;
	int32_t x382 = -1;
	int16_t x383 = INT16_MIN;
	int32_t t93 = 5692880;

	t93 = ((x381<=x382)+(x383|x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x385 = 5U;
	int64_t x386 = 712255LL;
	uint8_t x387 = 13U;
	uint16_t x388 = 999U;
	static int32_t t94 = -63;

	t94 = ((x385<=x386)+(x387|x388));

	if (t94 != 1008) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x390 = INT8_MIN;
	static int16_t x391 = 57;

	t95 = ((x389<=x390)+(x391|x392));

	if (t95 != -2147483590) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x393 = INT32_MIN;
	static uint32_t x394 = 43U;
	int64_t x396 = -1LL;
	int64_t t96 = -365LL;

	t96 = ((x393<=x394)+(x395|x396));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x398 = INT16_MIN;
	int64_t x399 = 7649LL;
	volatile int64_t x400 = -46689244142518LL;
	volatile int64_t t97 = 114446981601045LL;

	t97 = ((x397<=x398)+(x399|x400));

	if (t97 != -46689244135956LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x401 = 45502126;
	int8_t x402 = INT8_MAX;
	volatile uint16_t x403 = 14036U;
	static int8_t x404 = INT8_MIN;
	static int32_t t98 = 56081;

	t98 = ((x401<=x402)+(x403|x404));

	if (t98 != -44) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x405 = INT64_MIN;
	int16_t x406 = -1;
	int16_t x407 = 183;
	int32_t x408 = INT32_MIN;
	volatile int32_t t99 = 442321271;

	t99 = ((x405<=x406)+(x407|x408));

	if (t99 != -2147483464) { NG(); } else { ; }
	
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

