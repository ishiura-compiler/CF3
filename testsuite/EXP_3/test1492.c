#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x10 = 161976454;
static volatile int32_t t2 = 2;
volatile int8_t x16 = 11;
volatile int32_t x17 = -1;
volatile int16_t x19 = -1;
uint16_t x28 = UINT16_MAX;
int32_t t6 = 268251888;
int8_t x29 = -17;
uint16_t x31 = UINT16_MAX;
int32_t x32 = INT32_MAX;
volatile int32_t t7 = -1251;
uint32_t x36 = 3545U;
uint16_t x48 = 1688U;
static uint8_t x49 = 6U;
volatile int64_t x52 = INT64_MAX;
int32_t x59 = -1;
int8_t x62 = INT8_MIN;
int16_t x63 = 3738;
static int64_t x67 = -1LL;
static volatile uint16_t x68 = UINT16_MAX;
int8_t x71 = -1;
int16_t x72 = INT16_MIN;
static int64_t x78 = INT64_MIN;
int16_t x79 = INT16_MAX;
int16_t x91 = INT16_MIN;
int64_t x94 = -220380247223LL;
int16_t x95 = INT16_MIN;
int64_t x96 = -1LL;
int8_t x99 = -1;
volatile int32_t t24 = -360845;
int32_t x104 = INT32_MIN;
int32_t t25 = 924;
static int64_t x110 = -1LL;
int8_t x112 = 0;
int16_t x121 = INT16_MAX;
uint16_t x123 = 0U;
volatile int64_t x124 = -14501937LL;
uint8_t x130 = 15U;
uint16_t x133 = 1850U;
int32_t t33 = 400227115;
volatile int32_t x138 = 5;
int8_t x139 = INT8_MAX;
int16_t x142 = -1;
int64_t x149 = INT64_MIN;
volatile uint64_t x156 = UINT64_MAX;
uint8_t x158 = 0U;
volatile int16_t x164 = -1;
int64_t x166 = -1LL;
int64_t x170 = 3715LL;
static int16_t x171 = 1798;
static int64_t x178 = INT64_MIN;
volatile int32_t t45 = -416271;
static uint64_t x188 = 169772642937LLU;
int16_t x189 = 16;
static uint32_t x198 = UINT32_MAX;
uint8_t x202 = UINT8_MAX;
int32_t t52 = -15633336;
int32_t x218 = 212;
int16_t x224 = INT16_MAX;
volatile int32_t t55 = 542;
static volatile uint8_t x235 = 19U;
volatile int32_t t58 = -851;
int32_t x238 = INT32_MIN;
uint16_t x240 = 59U;
volatile uint32_t x244 = 35U;
volatile int32_t t60 = 61;
volatile int64_t x245 = INT64_MAX;
static uint64_t x247 = 4260704918LLU;
volatile int32_t t61 = 20;
int16_t x249 = 1;
int32_t x257 = INT32_MAX;
int8_t x261 = 3;
int16_t x262 = INT16_MIN;
static int64_t x265 = -1LL;
static int64_t x274 = INT64_MIN;
int32_t t68 = 84408046;
int64_t x278 = INT64_MAX;
volatile int8_t x289 = INT8_MIN;
static int64_t x294 = 195825312618153LL;
uint32_t x295 = 523784U;
int16_t x297 = -1;
int64_t x303 = 1657350790387LL;
int8_t x305 = INT8_MIN;
uint64_t x311 = 1548294215942499656LLU;
int32_t t77 = 65015415;
int8_t x327 = INT8_MAX;
volatile int64_t x329 = -1LL;
static int32_t x330 = INT32_MIN;
int64_t x335 = INT64_MAX;
static int8_t x347 = -1;
int32_t t87 = -342391129;
int32_t x358 = INT32_MIN;
int64_t x363 = INT64_MIN;
volatile uint32_t x367 = 97U;
uint8_t x368 = 2U;
int16_t x369 = INT16_MAX;
uint64_t x373 = UINT64_MAX;
volatile int32_t t93 = -367;
int8_t x378 = 0;
volatile uint64_t x379 = 135065760671332LLU;
uint16_t x383 = 10473U;
uint8_t x388 = 6U;
volatile int32_t t96 = 10487;
int32_t x391 = INT32_MIN;
volatile int32_t t97 = 87762359;
static int64_t x398 = INT64_MIN;
int32_t x399 = INT32_MAX;


void f0(void) {
	volatile uint16_t x1 = 12565U;
	int8_t x2 = INT8_MIN;
	volatile int8_t x3 = INT8_MIN;
	int32_t x4 = -1;
	volatile int32_t t0 = -2074475;

	t0 = ((x1&x2)<=(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	volatile int32_t x6 = 13121;
	int32_t x7 = INT32_MIN;
	uint32_t x8 = UINT32_MAX;
	int32_t t1 = -4742;

	t1 = ((x5&x6)<=(x7<x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	int16_t x11 = INT16_MIN;
	int16_t x12 = INT16_MIN;

	t2 = ((x9&x10)<=(x11<x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	uint16_t x14 = 15U;
	uint8_t x15 = 8U;
	int32_t t3 = -31726;

	t3 = ((x13&x14)<=(x15<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = -1;
	uint8_t x20 = UINT8_MAX;
	int32_t t4 = -7;

	t4 = ((x17&x18)<=(x19<x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	static int16_t x22 = -484;
	int32_t x23 = -1;
	volatile uint64_t x24 = UINT64_MAX;
	int32_t t5 = -610245;

	t5 = ((x21&x22)<=(x23<x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	volatile int8_t x26 = -1;
	int64_t x27 = INT64_MIN;

	t6 = ((x25&x26)<=(x27<x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = 35;

	t7 = ((x29&x30)<=(x31<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	int64_t x34 = -17LL;
	volatile int32_t x35 = INT32_MIN;
	volatile int32_t t8 = 5875624;

	t8 = ((x33&x34)<=(x35<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = 0;
	int16_t x38 = 31;
	int8_t x39 = INT8_MIN;
	volatile int8_t x40 = INT8_MIN;
	volatile int32_t t9 = -1;

	t9 = ((x37&x38)<=(x39<x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = UINT8_MAX;
	uint64_t x42 = 5665961952622605LLU;
	int32_t x43 = INT32_MAX;
	int16_t x44 = -1;
	int32_t t10 = -12906;

	t10 = ((x41&x42)<=(x43<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	static int32_t x46 = INT32_MAX;
	int16_t x47 = -599;
	int32_t t11 = 1176838;

	t11 = ((x45&x46)<=(x47<x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = 23802059U;
	int32_t x51 = INT32_MIN;
	static volatile int32_t t12 = -22936031;

	t12 = ((x49&x50)<=(x51<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = 2085U;
	static volatile int32_t x54 = -1;
	static int64_t x55 = -1LL;
	int64_t x56 = -1LL;
	static volatile int32_t t13 = 0;

	t13 = ((x53&x54)<=(x55<x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -1;
	volatile int16_t x58 = INT16_MIN;
	uint16_t x60 = 998U;
	static int32_t t14 = 347365;

	t14 = ((x57&x58)<=(x59<x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int32_t x61 = 103;
	static uint32_t x64 = UINT32_MAX;
	static volatile int32_t t15 = -1;

	t15 = ((x61&x62)<=(x63<x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint64_t x65 = 3923278672236LLU;
	volatile uint16_t x66 = UINT16_MAX;
	volatile int32_t t16 = 204689592;

	t16 = ((x65&x66)<=(x67<x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = -1LL;
	int16_t x70 = -1;
	static int32_t t17 = -36;

	t17 = ((x69&x70)<=(x71<x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	volatile uint32_t x74 = 992767U;
	uint16_t x75 = 3U;
	static uint16_t x76 = 2U;
	int32_t t18 = -114;

	t18 = ((x73&x74)<=(x75<x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = 725;
	static volatile uint32_t x80 = 396351455U;
	int32_t t19 = 30;

	t19 = ((x77&x78)<=(x79<x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = 3U;
	int64_t x82 = 1918477121783795919LL;
	uint64_t x83 = 615015651822931LLU;
	volatile int16_t x84 = INT16_MAX;
	volatile int32_t t20 = 55471;

	t20 = ((x81&x82)<=(x83<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MAX;
	volatile int32_t x86 = INT32_MIN;
	uint32_t x87 = 2900934U;
	int16_t x88 = INT16_MAX;
	int32_t t21 = -7038;

	t21 = ((x85&x86)<=(x87<x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	static uint64_t x90 = 271846LLU;
	static int16_t x92 = 7281;
	int32_t t22 = -69;

	t22 = ((x89&x90)<=(x91<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = UINT32_MAX;
	volatile int32_t t23 = -97470472;

	t23 = ((x93&x94)<=(x95<x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = 485;
	static volatile uint8_t x98 = 0U;
	int8_t x100 = INT8_MAX;

	t24 = ((x97&x98)<=(x99<x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = INT16_MIN;
	int32_t x102 = INT32_MAX;
	volatile int64_t x103 = INT64_MAX;

	t25 = ((x101&x102)<=(x103<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = INT32_MAX;
	uint8_t x106 = 1U;
	uint16_t x107 = 1255U;
	uint64_t x108 = UINT64_MAX;
	static volatile int32_t t26 = 0;

	t26 = ((x105&x106)<=(x107<x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = INT64_MAX;
	static uint64_t x111 = 1984329852247LLU;
	int32_t t27 = -2739839;

	t27 = ((x109&x110)<=(x111<x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int32_t x113 = -105688551;
	volatile int8_t x114 = -1;
	int16_t x115 = -1;
	int16_t x116 = INT16_MAX;
	volatile int32_t t28 = 350;

	t28 = ((x113&x114)<=(x115<x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -58;
	int16_t x118 = INT16_MAX;
	int32_t x119 = INT32_MIN;
	int16_t x120 = -166;
	volatile int32_t t29 = 7483263;

	t29 = ((x117&x118)<=(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x122 = 1;
	static volatile int32_t t30 = 53408676;

	t30 = ((x121&x122)<=(x123<x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x125 = UINT8_MAX;
	uint64_t x126 = UINT64_MAX;
	uint64_t x127 = UINT64_MAX;
	int64_t x128 = -1LL;
	volatile int32_t t31 = 1;

	t31 = ((x125&x126)<=(x127<x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 31981LLU;
	int32_t x131 = INT32_MAX;
	int64_t x132 = -1LL;
	int32_t t32 = 1839;

	t32 = ((x129&x130)<=(x131<x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x134 = 3U;
	static uint64_t x135 = UINT64_MAX;
	int32_t x136 = INT32_MIN;

	t33 = ((x133&x134)<=(x135<x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -16;
	static int16_t x140 = -1;
	int32_t t34 = -560025;

	t34 = ((x137&x138)<=(x139<x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = INT32_MAX;
	int8_t x143 = -1;
	uint64_t x144 = 10991756469270LLU;
	int32_t t35 = 1;

	t35 = ((x141&x142)<=(x143<x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 41969U;
	static uint32_t x146 = 132957691U;
	volatile int8_t x147 = -18;
	volatile int8_t x148 = INT8_MIN;
	volatile int32_t t36 = 26089020;

	t36 = ((x145&x146)<=(x147<x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x150 = 7;
	volatile int16_t x151 = INT16_MIN;
	uint8_t x152 = 1U;
	volatile int32_t t37 = 330444407;

	t37 = ((x149&x150)<=(x151<x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = -25;
	static uint32_t x154 = 60137U;
	static uint8_t x155 = 0U;
	int32_t t38 = 151127535;

	t38 = ((x153&x154)<=(x155<x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x157 = 0LLU;
	volatile uint16_t x159 = UINT16_MAX;
	static int32_t x160 = 123;
	static int32_t t39 = -335986;

	t39 = ((x157&x158)<=(x159<x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	static volatile uint8_t x162 = 49U;
	int64_t x163 = INT64_MIN;
	volatile int32_t t40 = -1;

	t40 = ((x161&x162)<=(x163<x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x165 = -1041293;
	uint64_t x167 = 0LLU;
	int8_t x168 = INT8_MIN;
	volatile int32_t t41 = -6430331;

	t41 = ((x165&x166)<=(x167<x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = INT64_MAX;
	volatile uint8_t x172 = UINT8_MAX;
	static volatile int32_t t42 = 14;

	t42 = ((x169&x170)<=(x171<x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x173 = 5761073602462LLU;
	int16_t x174 = INT16_MAX;
	static volatile int16_t x175 = INT16_MIN;
	uint32_t x176 = UINT32_MAX;
	int32_t t43 = 319365;

	t43 = ((x173&x174)<=(x175<x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = UINT8_MAX;
	int64_t x179 = -1LL;
	int32_t x180 = 7;
	int32_t t44 = 299878132;

	t44 = ((x177&x178)<=(x179<x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	int8_t x182 = INT8_MIN;
	volatile uint16_t x183 = 1697U;
	volatile uint16_t x184 = UINT16_MAX;

	t45 = ((x181&x182)<=(x183<x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -2045;
	static int64_t x186 = 25583464LL;
	static int16_t x187 = 1356;
	int32_t t46 = -2;

	t46 = ((x185&x186)<=(x187<x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = INT16_MAX;
	static int32_t x191 = INT32_MIN;
	int32_t x192 = -906486;
	volatile int32_t t47 = 98130;

	t47 = ((x189&x190)<=(x191<x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	int16_t x194 = -1;
	uint64_t x195 = 1192871593LLU;
	int64_t x196 = INT64_MIN;
	static volatile int32_t t48 = 1460;

	t48 = ((x193&x194)<=(x195<x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = INT64_MAX;
	int32_t x199 = INT32_MAX;
	int16_t x200 = INT16_MIN;
	volatile int32_t t49 = -730567636;

	t49 = ((x197&x198)<=(x199<x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = -10;
	int32_t x203 = INT32_MIN;
	uint16_t x204 = 3U;
	int32_t t50 = -224919;

	t50 = ((x201&x202)<=(x203<x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MIN;
	int32_t x206 = -250300;
	int16_t x207 = -44;
	uint8_t x208 = UINT8_MAX;
	volatile int32_t t51 = -315280;

	t51 = ((x205&x206)<=(x207<x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = -1;
	int64_t x210 = INT64_MIN;
	static uint64_t x211 = UINT64_MAX;
	static int32_t x212 = 15454;

	t52 = ((x209&x210)<=(x211<x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = -1;
	int16_t x214 = INT16_MAX;
	int8_t x215 = INT8_MIN;
	int64_t x216 = -23070LL;
	static volatile int32_t t53 = 289956477;

	t53 = ((x213&x214)<=(x215<x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = -376LL;
	uint16_t x219 = 1200U;
	volatile int32_t x220 = INT32_MAX;
	int32_t t54 = -503873;

	t54 = ((x217&x218)<=(x219<x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = INT16_MAX;
	volatile uint8_t x222 = 24U;
	static int16_t x223 = INT16_MIN;

	t55 = ((x221&x222)<=(x223<x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	int16_t x226 = 7008;
	static int32_t x227 = INT32_MIN;
	int16_t x228 = 3;
	int32_t t56 = -5121;

	t56 = ((x225&x226)<=(x227<x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	volatile uint8_t x230 = 1U;
	uint16_t x231 = 602U;
	static uint64_t x232 = 14886LLU;
	int32_t t57 = 9;

	t57 = ((x229&x230)<=(x231<x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 1675U;
	int16_t x234 = -1;
	static int8_t x236 = -1;

	t58 = ((x233&x234)<=(x235<x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = 1694536243440828LLU;
	int32_t x239 = -1;
	int32_t t59 = 38901;

	t59 = ((x237&x238)<=(x239<x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = UINT8_MAX;
	int8_t x242 = -1;
	int16_t x243 = -6752;

	t60 = ((x241&x242)<=(x243<x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x246 = 522709728253LL;
	int32_t x248 = 17105777;

	t61 = ((x245&x246)<=(x247<x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x250 = -15;
	uint64_t x251 = 189991837LLU;
	volatile uint32_t x252 = 15396U;
	volatile int32_t t62 = -726;

	t62 = ((x249&x250)<=(x251<x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x253 = -1;
	uint32_t x254 = UINT32_MAX;
	int32_t x255 = INT32_MIN;
	uint8_t x256 = 1U;
	volatile int32_t t63 = -30802;

	t63 = ((x253&x254)<=(x255<x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x258 = 77722065622LLU;
	int64_t x259 = INT64_MAX;
	static int32_t x260 = -58475012;
	int32_t t64 = -29;

	t64 = ((x257&x258)<=(x259<x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x263 = INT64_MAX;
	volatile int8_t x264 = INT8_MIN;
	int32_t t65 = -232183;

	t65 = ((x261&x262)<=(x263<x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x266 = INT64_MIN;
	static volatile int32_t x267 = INT32_MIN;
	volatile uint64_t x268 = UINT64_MAX;
	static int32_t t66 = 1231;

	t66 = ((x265&x266)<=(x267<x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x269 = 42U;
	uint32_t x270 = 127122U;
	volatile int16_t x271 = -1;
	uint8_t x272 = UINT8_MAX;
	int32_t t67 = -1;

	t67 = ((x269&x270)<=(x271<x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = 194838LL;
	int16_t x275 = INT16_MAX;
	int64_t x276 = -2LL;

	t68 = ((x273&x274)<=(x275<x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = -1LL;
	int16_t x279 = 34;
	volatile int32_t x280 = INT32_MIN;
	volatile int32_t t69 = -122277;

	t69 = ((x277&x278)<=(x279<x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	static uint8_t x282 = UINT8_MAX;
	int64_t x283 = INT64_MIN;
	int32_t x284 = 1553;
	volatile int32_t t70 = -99;

	t70 = ((x281&x282)<=(x283<x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x285 = -1LL;
	static volatile int8_t x286 = INT8_MAX;
	int8_t x287 = INT8_MIN;
	volatile int8_t x288 = INT8_MAX;
	volatile int32_t t71 = -251;

	t71 = ((x285&x286)<=(x287<x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x290 = 539109808;
	volatile int16_t x291 = -3302;
	int8_t x292 = 2;
	static int32_t t72 = -418778;

	t72 = ((x289&x290)<=(x291<x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = INT16_MIN;
	static uint16_t x296 = 245U;
	volatile int32_t t73 = 405352;

	t73 = ((x293&x294)<=(x295<x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x298 = -842386025952126LL;
	int16_t x299 = INT16_MIN;
	static int16_t x300 = INT16_MIN;
	int32_t t74 = 87167683;

	t74 = ((x297&x298)<=(x299<x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x301 = INT32_MAX;
	int16_t x302 = INT16_MIN;
	uint8_t x304 = UINT8_MAX;
	volatile int32_t t75 = -2816633;

	t75 = ((x301&x302)<=(x303<x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = INT8_MIN;
	int8_t x307 = INT8_MAX;
	uint32_t x308 = 1467U;
	volatile int32_t t76 = -5;

	t76 = ((x305&x306)<=(x307<x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int32_t x309 = 0;
	static uint64_t x310 = 983477709LLU;
	int64_t x312 = 860842108472350519LL;

	t77 = ((x309&x310)<=(x311<x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x313 = 547U;
	int16_t x314 = INT16_MAX;
	int16_t x315 = INT16_MIN;
	int16_t x316 = INT16_MAX;
	int32_t t78 = -394;

	t78 = ((x313&x314)<=(x315<x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 29631U;
	uint16_t x318 = UINT16_MAX;
	volatile int32_t x319 = -7584;
	static uint32_t x320 = UINT32_MAX;
	volatile int32_t t79 = 439225690;

	t79 = ((x317&x318)<=(x319<x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	int32_t x322 = INT32_MIN;
	uint16_t x323 = 2U;
	uint8_t x324 = 0U;
	static volatile int32_t t80 = -2756436;

	t80 = ((x321&x322)<=(x323<x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = 25LL;
	static int32_t x326 = -1;
	volatile int64_t x328 = 1684918556664LL;
	volatile int32_t t81 = -182860023;

	t81 = ((x325&x326)<=(x327<x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x331 = -91;
	uint64_t x332 = 124LLU;
	static int32_t t82 = 426;

	t82 = ((x329&x330)<=(x331<x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x333 = 2401U;
	static volatile int32_t x334 = 4419;
	int8_t x336 = 9;
	volatile int32_t t83 = -793647;

	t83 = ((x333&x334)<=(x335<x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	static uint32_t x338 = UINT32_MAX;
	static volatile uint8_t x339 = UINT8_MAX;
	volatile uint32_t x340 = UINT32_MAX;
	volatile int32_t t84 = -1;

	t84 = ((x337&x338)<=(x339<x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = INT32_MIN;
	volatile int16_t x342 = 460;
	uint8_t x343 = UINT8_MAX;
	static int64_t x344 = INT64_MIN;
	int32_t t85 = -707328;

	t85 = ((x341&x342)<=(x343<x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x345 = 30841LLU;
	static uint64_t x346 = 102LLU;
	int8_t x348 = INT8_MAX;
	int32_t t86 = -696246458;

	t86 = ((x345&x346)<=(x347<x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x349 = 92786464957LLU;
	int8_t x350 = INT8_MIN;
	int16_t x351 = 290;
	int64_t x352 = -2276496118253459564LL;

	t87 = ((x349&x350)<=(x351<x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x353 = 7443U;
	int64_t x354 = -3699292442028284LL;
	int32_t x355 = INT32_MIN;
	uint16_t x356 = 2U;
	int32_t t88 = 48200038;

	t88 = ((x353&x354)<=(x355<x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x357 = INT16_MAX;
	uint32_t x359 = 12684U;
	int16_t x360 = -1;
	int32_t t89 = 43;

	t89 = ((x357&x358)<=(x359<x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x361 = INT8_MIN;
	static uint8_t x362 = 17U;
	static int16_t x364 = INT16_MIN;
	int32_t t90 = -111;

	t90 = ((x361&x362)<=(x363<x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x365 = -1;
	int32_t x366 = INT32_MIN;
	static int32_t t91 = 29206;

	t91 = ((x365&x366)<=(x367<x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x370 = -1;
	int64_t x371 = -1LL;
	static int16_t x372 = -2;
	static volatile int32_t t92 = -358;

	t92 = ((x369&x370)<=(x371<x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x374 = -1LL;
	static volatile int16_t x375 = -1;
	uint32_t x376 = UINT32_MAX;

	t93 = ((x373&x374)<=(x375<x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = UINT16_MAX;
	static uint16_t x380 = 2U;
	volatile int32_t t94 = -5474;

	t94 = ((x377&x378)<=(x379<x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x381 = 90625U;
	uint8_t x382 = UINT8_MAX;
	static int8_t x384 = INT8_MAX;
	volatile int32_t t95 = 2300162;

	t95 = ((x381&x382)<=(x383<x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	volatile int32_t x386 = -55107934;
	static uint32_t x387 = UINT32_MAX;

	t96 = ((x385&x386)<=(x387<x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x389 = -1LL;
	volatile uint32_t x390 = UINT32_MAX;
	int64_t x392 = -945748055203341LL;

	t97 = ((x389&x390)<=(x391<x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x393 = 128918893;
	static uint16_t x394 = 385U;
	uint16_t x395 = 11U;
	int32_t x396 = -1;
	int32_t t98 = -5124;

	t98 = ((x393&x394)<=(x395<x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	int64_t x400 = INT64_MIN;
	static volatile int32_t t99 = -102704;

	t99 = ((x397&x398)<=(x399<x400));

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

