#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x4 = INT8_MAX;
static uint32_t x8 = 124129339U;
static int64_t x15 = -1LL;
int16_t x18 = INT16_MIN;
int16_t x29 = -292;
int16_t x31 = INT16_MIN;
volatile int64_t t8 = -452588975062754LL;
volatile int64_t x38 = INT64_MIN;
uint64_t x39 = 33678226663177754LLU;
int64_t x45 = INT64_MIN;
int16_t x47 = INT16_MAX;
int64_t x50 = 1091536811930LL;
volatile int16_t x61 = -11510;
int16_t x62 = 0;
int64_t t15 = -1062066652063160LL;
int64_t x67 = -1LL;
int16_t x73 = INT16_MIN;
int64_t x76 = INT64_MIN;
int64_t t18 = 368984931419825LL;
uint32_t x85 = 1151288U;
uint32_t x88 = 205963U;
int8_t x89 = 1;
volatile int8_t x90 = INT8_MAX;
int16_t x93 = INT16_MIN;
int64_t x101 = INT64_MAX;
int32_t x103 = -936527902;
static int8_t x105 = -46;
int32_t x106 = -1;
uint32_t x109 = UINT32_MAX;
volatile int32_t x112 = INT32_MAX;
int16_t x121 = -1;
uint8_t x133 = 10U;
int16_t x144 = INT16_MIN;
uint8_t x146 = UINT8_MAX;
int32_t x154 = INT32_MIN;
int64_t x159 = INT64_MIN;
volatile uint32_t x160 = 105441U;
int8_t x165 = 0;
volatile uint64_t t40 = 211753176346601LLU;
int64_t t41 = -126LL;
int32_t x176 = INT32_MAX;
volatile int64_t t43 = 77LL;
volatile uint32_t t44 = 106609U;
volatile uint32_t x191 = UINT32_MAX;
int8_t x194 = INT8_MIN;
int16_t x196 = INT16_MIN;
int64_t t50 = 2952131619552990LL;
int64_t x214 = -8721763232LL;
volatile uint64_t t53 = 4LLU;
int32_t t54 = 54497149;
volatile uint64_t t55 = 23698382796LLU;
volatile uint8_t x229 = UINT8_MAX;
volatile uint64_t x230 = 49003LLU;
static uint8_t x236 = 18U;
uint64_t x238 = UINT64_MAX;
volatile int8_t x242 = -4;
int16_t x253 = 11;
int16_t x260 = INT16_MIN;
static volatile uint32_t t62 = 1U;
int64_t x261 = -13642278596685202LL;
volatile uint16_t x264 = 219U;
int32_t x272 = INT32_MIN;
static uint32_t x276 = 151322500U;
volatile uint32_t t66 = 831831503U;
int32_t x277 = INT32_MAX;
volatile int16_t x287 = INT16_MIN;
int64_t t70 = -372057LL;
volatile int16_t x293 = INT16_MIN;
int8_t x298 = INT8_MAX;
uint32_t x299 = 1U;
int32_t x311 = -475365102;
volatile uint64_t t75 = 5407070242013LLU;
int8_t x322 = INT8_MIN;
volatile uint8_t x328 = UINT8_MAX;
int8_t x334 = -1;
static int8_t x339 = INT8_MIN;
uint64_t t82 = UINT64_MAX;
volatile uint8_t x345 = UINT8_MAX;
uint8_t x363 = 82U;
int64_t x365 = INT64_MIN;
uint64_t t88 = 1200119415719021LLU;
static int16_t x369 = -1;
int64_t x371 = INT64_MAX;
int16_t x372 = INT16_MIN;
static volatile int16_t x382 = INT16_MAX;
int8_t x383 = INT8_MIN;
uint8_t x385 = 6U;
uint16_t x393 = UINT16_MAX;
static uint16_t x403 = 41U;
uint8_t x404 = UINT8_MAX;
volatile uint32_t t98 = 6842973U;
int8_t x410 = INT8_MAX;


void f0(void) {
	int8_t x1 = -1;
	int8_t x2 = INT8_MIN;
	int64_t x3 = -1LL;
	int64_t t0 = -15007LL;

	t0 = (x1|((x2&x3)+x4));

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	volatile int16_t x6 = -1;
	int16_t x7 = -530;
	volatile uint32_t t1 = UINT32_MAX;

	t1 = (x5|((x6&x7)+x8));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 1232553;
	int32_t x10 = 25235;
	uint64_t x11 = UINT64_MAX;
	uint8_t x12 = 4U;
	uint64_t t2 = 16747990LLU;

	t2 = (x9|((x10&x11)+x12));

	if (t2 != 1240767LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -49384;
	uint64_t x14 = UINT64_MAX;
	static int16_t x16 = INT16_MAX;
	volatile uint64_t t3 = 516439LLU;

	t3 = (x13|((x14&x15)+x16));

	if (t3 != 18446744073709518846LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -180;
	static int32_t x19 = INT32_MAX;
	uint16_t x20 = 2820U;
	static volatile int32_t t4 = -607;

	t4 = (x17|((x18&x19)+x20));

	if (t4 != -180) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	uint8_t x22 = UINT8_MAX;
	int16_t x23 = -2;
	volatile uint8_t x24 = UINT8_MAX;
	static volatile int32_t t5 = -712929;

	t5 = (x21|((x22&x23)+x24));

	if (t5 != -3) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	static volatile int16_t x26 = 9088;
	static int8_t x27 = 7;
	volatile int8_t x28 = INT8_MAX;
	volatile int32_t t6 = INT32_MAX;

	t6 = (x25|((x26&x27)+x28));

	if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = INT8_MAX;
	uint64_t x32 = 19180806LLU;
	uint64_t t7 = 63189388107190654LLU;

	t7 = (x29|((x30&x31)+x32));

	if (t7 != 18446744073709551582LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = 1139;
	static int8_t x34 = -3;
	int16_t x35 = -1;
	int64_t x36 = -1LL;

	t8 = (x33|((x34&x35)+x36));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = UINT64_MAX;
	int32_t x40 = -1;
	volatile uint64_t t9 = UINT64_MAX;

	t9 = (x37|((x38&x39)+x40));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MIN;
	int64_t x42 = -1LL;
	int16_t x43 = INT16_MIN;
	static volatile uint32_t x44 = 714853U;
	int64_t t10 = 1593175811590LL;

	t10 = (x41|((x42&x43)+x44));

	if (t10 != -2146801563LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x46 = INT32_MIN;
	static uint32_t x48 = 1351466092U;
	volatile int64_t t11 = -8LL;

	t11 = (x45|((x46&x47)+x48));

	if (t11 != -9223372035503309716LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = -1;
	uint16_t x51 = 6549U;
	uint64_t x52 = UINT64_MAX;
	volatile uint64_t t12 = UINT64_MAX;

	t12 = (x49|((x50&x51)+x52));

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -1;
	volatile int64_t x54 = INT64_MIN;
	volatile int64_t x55 = -1LL;
	volatile uint32_t x56 = 1665685U;
	int64_t t13 = 7789251698805LL;

	t13 = (x53|((x54&x55)+x56));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -1;
	static int64_t x58 = -15379626870209131LL;
	uint64_t x59 = 26409382471789LLU;
	static uint8_t x60 = 2U;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = (x57|((x58&x59)+x60));

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x63 = -1;
	int64_t x64 = INT64_MAX;

	t15 = (x61|((x62&x63)+x64));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -1;
	int64_t x66 = -1LL;
	int8_t x68 = -1;
	int64_t t16 = 118727169151416061LL;

	t16 = (x65|((x66&x67)+x68));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x69 = INT16_MAX;
	static uint32_t x70 = UINT32_MAX;
	int8_t x71 = INT8_MIN;
	static int32_t x72 = 29;
	static uint32_t t17 = UINT32_MAX;

	t17 = (x69|((x70&x71)+x72));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = -4864;
	int32_t x75 = INT32_MAX;

	t18 = (x73|((x74&x75)+x76));

	if (t18 != -4864LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 50U;
	int8_t x78 = 4;
	static uint64_t x79 = 41054593141484906LLU;
	int64_t x80 = 63712280510LL;
	volatile uint64_t t19 = 10463953843597737LLU;

	t19 = (x77|((x78&x79)+x80));

	if (t19 != 63712280510LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -1;
	int64_t x82 = 1617347168315050251LL;
	static int16_t x83 = INT16_MIN;
	uint8_t x84 = UINT8_MAX;
	volatile int64_t t20 = -56LL;

	t20 = (x81|((x82&x83)+x84));

	if (t20 != -1LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = INT8_MIN;
	volatile int16_t x87 = INT16_MAX;
	uint32_t t21 = 8225047U;

	t21 = (x85|((x86&x87)+x88));

	if (t21 != 1291579U) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x91 = 27;
	static int64_t x92 = -776575344436818LL;
	static int64_t t22 = 48001824663862463LL;

	t22 = (x89|((x90&x91)+x92));

	if (t22 != -776575344436791LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x94 = -1;
	int8_t x95 = INT8_MIN;
	uint32_t x96 = 13015U;
	volatile uint32_t t23 = 77U;

	t23 = (x93|((x94&x95)+x96));

	if (t23 != 4294947415U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 599LLU;
	int16_t x98 = -1;
	int64_t x99 = -7LL;
	uint32_t x100 = 0U;
	static volatile uint64_t t24 = UINT64_MAX;

	t24 = (x97|((x98&x99)+x100));

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = -2;
	int16_t x104 = -1;
	volatile int64_t t25 = -3660LL;

	t25 = (x101|((x102&x103)+x104));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint16_t x107 = 1479U;
	volatile int16_t x108 = INT16_MIN;
	static int32_t t26 = -6;

	t26 = (x105|((x106&x107)+x108));

	if (t26 != -41) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x110 = 0U;
	int32_t x111 = 6;
	uint32_t t27 = UINT32_MAX;

	t27 = (x109|((x110&x111)+x112));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -14588;
	int64_t x114 = INT64_MIN;
	volatile int16_t x115 = INT16_MAX;
	int32_t x116 = -1;
	volatile int64_t t28 = 30548377034934LL;

	t28 = (x113|((x114&x115)+x116));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MAX;
	int8_t x118 = INT8_MIN;
	volatile int16_t x119 = 333;
	uint8_t x120 = UINT8_MAX;
	int32_t t29 = INT32_MAX;

	t29 = (x117|((x118&x119)+x120));

	if (t29 != INT32_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x122 = 0;
	int32_t x123 = -1;
	uint64_t x124 = 94163LLU;
	uint64_t t30 = UINT64_MAX;

	t30 = (x121|((x122&x123)+x124));

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x125 = INT64_MAX;
	uint64_t x126 = UINT64_MAX;
	volatile uint64_t x127 = UINT64_MAX;
	uint32_t x128 = UINT32_MAX;
	volatile uint64_t t31 = 11336LLU;

	t31 = (x125|((x126&x127)+x128));

	if (t31 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x134 = 116146838LLU;
	uint16_t x135 = 108U;
	uint64_t x136 = UINT64_MAX;
	volatile uint64_t t32 = 112550LLU;

	t32 = (x133|((x134&x135)+x136));

	if (t32 != 11LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x137 = UINT64_MAX;
	static int64_t x138 = -26976LL;
	uint64_t x139 = UINT64_MAX;
	int32_t x140 = -1;
	uint64_t t33 = UINT64_MAX;

	t33 = (x137|((x138&x139)+x140));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = INT64_MAX;
	int8_t x142 = INT8_MAX;
	int16_t x143 = -5637;
	volatile int64_t t34 = 37LL;

	t34 = (x141|((x142&x143)+x144));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x145 = -1;
	int16_t x147 = INT16_MAX;
	int64_t x148 = -1LL;
	static volatile int64_t t35 = -1297643114677422816LL;

	t35 = (x145|((x146&x147)+x148));

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x149 = INT8_MAX;
	uint8_t x150 = 3U;
	int64_t x151 = -1LL;
	uint32_t x152 = UINT32_MAX;
	int64_t t36 = 89484070LL;

	t36 = (x149|((x150&x151)+x152));

	if (t36 != 4294967423LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = 1193516U;
	static uint32_t x155 = UINT32_MAX;
	volatile int64_t x156 = 428LL;
	int64_t t37 = 15054LL;

	t37 = (x153|((x154&x155)+x156));

	if (t37 != 2148677548LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = -1;
	static int8_t x158 = INT8_MIN;
	volatile int64_t t38 = 660589555LL;

	t38 = (x157|((x158&x159)+x160));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x161 = -1;
	int8_t x162 = 40;
	volatile uint32_t x163 = 12595532U;
	int16_t x164 = -1;
	volatile uint32_t t39 = UINT32_MAX;

	t39 = (x161|((x162&x163)+x164));

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x166 = 25;
	uint64_t x167 = 7989579569LLU;
	int16_t x168 = INT16_MAX;

	t40 = (x165|((x166&x167)+x168));

	if (t40 != 32784LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = -1LL;
	static int16_t x170 = 80;
	static int8_t x171 = INT8_MAX;
	static int32_t x172 = -1;

	t41 = (x169|((x170&x171)+x172));

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x173 = 30U;
	volatile int16_t x174 = -295;
	static int32_t x175 = -1;
	static volatile int32_t t42 = 1;

	t42 = (x173|((x174&x175)+x176));

	if (t42 != 2147483358) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x177 = 8072084595LL;
	volatile int64_t x178 = 3990825LL;
	int8_t x179 = INT8_MAX;
	int64_t x180 = -1LL;

	t43 = (x177|((x178&x179)+x180));

	if (t43 != 8072084603LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x181 = 2193U;
	volatile int16_t x182 = -318;
	uint32_t x183 = UINT32_MAX;
	uint16_t x184 = 25943U;

	t44 = (x181|((x182&x183)+x184));

	if (t44 != 27801U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = -1;
	static volatile uint64_t x186 = 10599LLU;
	uint16_t x187 = 41U;
	int8_t x188 = -8;
	uint64_t t45 = UINT64_MAX;

	t45 = (x185|((x186&x187)+x188));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x189 = INT8_MAX;
	int32_t x190 = INT32_MIN;
	static uint16_t x192 = UINT16_MAX;
	volatile uint32_t t46 = 9U;

	t46 = (x189|((x190&x191)+x192));

	if (t46 != 2147549183U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = -1;
	static volatile int16_t x195 = INT16_MAX;
	volatile int32_t t47 = 794065056;

	t47 = (x193|((x194&x195)+x196));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = 94969711372LL;
	uint8_t x198 = UINT8_MAX;
	uint32_t x199 = UINT32_MAX;
	static int64_t x200 = INT64_MIN;
	volatile int64_t t48 = 5999LL;

	t48 = (x197|((x198&x199)+x200));

	if (t48 != -9223371941885064193LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x201 = -1LL;
	uint64_t x202 = 38475098738LLU;
	int8_t x203 = 5;
	int32_t x204 = INT32_MIN;
	uint64_t t49 = UINT64_MAX;

	t49 = (x201|((x202&x203)+x204));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x205 = 10512064754633799LL;
	volatile uint16_t x206 = 2U;
	int32_t x207 = 13853412;
	volatile int16_t x208 = INT16_MAX;

	t50 = (x205|((x206&x207)+x208));

	if (t50 != 10512064754647039LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x209 = -1LL;
	int64_t x210 = 3102440699LL;
	static uint16_t x211 = 492U;
	int32_t x212 = -1;
	volatile int64_t t51 = 32476938LL;

	t51 = (x209|((x210&x211)+x212));

	if (t51 != -1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x213 = 7696895187273413LLU;
	int8_t x215 = 0;
	volatile uint8_t x216 = 7U;
	uint64_t t52 = 17088187680521033LLU;

	t52 = (x213|((x214&x215)+x216));

	if (t52 != 7696895187273415LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x217 = UINT8_MAX;
	volatile int32_t x218 = -64;
	int8_t x219 = INT8_MIN;
	uint64_t x220 = 244LLU;

	t53 = (x217|((x218&x219)+x220));

	if (t53 != 255LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x221 = 229U;
	static uint8_t x222 = 0U;
	static int8_t x223 = -2;
	uint8_t x224 = UINT8_MAX;

	t54 = (x221|((x222&x223)+x224));

	if (t54 != 255) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = -80254895;
	int64_t x226 = INT64_MAX;
	volatile uint8_t x227 = 107U;
	uint64_t x228 = UINT64_MAX;

	t55 = (x225|((x226&x227)+x228));

	if (t55 != 18446744073629296763LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x231 = 45786LLU;
	int16_t x232 = INT16_MIN;
	static volatile uint64_t t56 = 4609120107280909554LLU;

	t56 = (x229|((x230&x231)+x232));

	if (t56 != 13055LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x233 = 161670534;
	int16_t x234 = INT16_MAX;
	uint64_t x235 = 7LLU;
	volatile uint64_t t57 = 35314852097440LLU;

	t57 = (x233|((x234&x235)+x236));

	if (t57 != 161670559LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = INT16_MIN;
	uint32_t x239 = 169U;
	static int32_t x240 = INT32_MAX;
	uint64_t t58 = 123427363LLU;

	t58 = (x237|((x238&x239)+x240));

	if (t58 != 18446744073709519016LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x241 = UINT16_MAX;
	volatile int32_t x243 = INT32_MAX;
	volatile uint64_t x244 = 24341LLU;
	static uint64_t t59 = 202586329LLU;

	t59 = (x241|((x242&x243)+x244));

	if (t59 != 2147549183LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x249 = INT32_MIN;
	int8_t x250 = INT8_MIN;
	int64_t x251 = -72665871084LL;
	uint8_t x252 = 29U;
	volatile int64_t t60 = 7470LL;

	t60 = (x249|((x250&x251)+x252));

	if (t60 != -1798910691LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x254 = INT8_MAX;
	static uint64_t x255 = UINT64_MAX;
	volatile int16_t x256 = 1;
	uint64_t t61 = 2858819877LLU;

	t61 = (x253|((x254&x255)+x256));

	if (t61 != 139LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x257 = INT32_MIN;
	uint8_t x258 = UINT8_MAX;
	volatile uint32_t x259 = UINT32_MAX;

	t62 = (x257|((x258&x259)+x260));

	if (t62 != 4294934783U) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x262 = 1153195542U;
	static volatile int16_t x263 = INT16_MIN;
	volatile int64_t t63 = 2082914452437LL;

	t63 = (x261|((x262&x263)+x264));

	if (t63 != -13642278585412865LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x265 = INT8_MAX;
	static uint16_t x266 = 2U;
	uint8_t x267 = 35U;
	int8_t x268 = 0;
	static volatile int32_t t64 = -61527;

	t64 = (x265|((x266&x267)+x268));

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x269 = INT8_MIN;
	uint16_t x270 = UINT16_MAX;
	uint64_t x271 = 386761432085401303LLU;
	volatile uint64_t t65 = 415073506LLU;

	t65 = (x269|((x270&x271)+x272));

	if (t65 != 18446744073709551575LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x273 = 28U;
	int16_t x274 = -36;
	volatile int16_t x275 = INT16_MIN;

	t66 = (x273|((x274&x275)+x276));

	if (t66 != 151289756U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x278 = INT32_MIN;
	int8_t x279 = INT8_MAX;
	int32_t x280 = INT32_MIN;
	volatile int32_t t67 = -54353;

	t67 = (x277|((x278&x279)+x280));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x281 = -733;
	int16_t x282 = 0;
	static int32_t x283 = 460410709;
	uint64_t x284 = UINT64_MAX;
	static uint64_t t68 = UINT64_MAX;

	t68 = (x281|((x282&x283)+x284));

	if (t68 != UINT64_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x285 = -29418086;
	int32_t x286 = INT32_MIN;
	volatile int32_t x288 = 195;
	static int32_t t69 = 883006762;

	t69 = (x285|((x286&x287)+x288));

	if (t69 != -29418021) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x289 = 106U;
	int64_t x290 = INT64_MIN;
	static volatile int8_t x291 = -1;
	uint32_t x292 = 100363U;

	t70 = (x289|((x290&x291)+x292));

	if (t70 != -9223372036854675349LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x294 = 862272727153694909LLU;
	static int16_t x295 = 394;
	volatile int8_t x296 = -5;
	volatile uint64_t t71 = 375059730451759LLU;

	t71 = (x293|((x294&x295)+x296));

	if (t71 != 18446744073709518979LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x297 = 1U;
	int64_t x300 = -1LL;
	int64_t t72 = 187600666705809489LL;

	t72 = (x297|((x298&x299)+x300));

	if (t72 != 1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x301 = 2;
	int64_t x302 = 105014784LL;
	int32_t x303 = 2;
	static volatile uint64_t x304 = 51803661844238807LLU;
	uint64_t t73 = 3735LLU;

	t73 = (x301|((x302&x303)+x304));

	if (t73 != 51803661844238807LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x305 = INT16_MIN;
	int8_t x306 = -1;
	int64_t x307 = INT64_MIN;
	int32_t x308 = 56;
	volatile int64_t t74 = 1558544295493950LL;

	t74 = (x305|((x306&x307)+x308));

	if (t74 != -32712LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x309 = 96LLU;
	uint32_t x310 = 15204401U;
	uint64_t x312 = 5499360298387LLU;

	t75 = (x309|((x310&x311)+x312));

	if (t75 != 5499371308515LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x313 = UINT64_MAX;
	int8_t x314 = -1;
	static volatile int8_t x315 = 13;
	static uint16_t x316 = UINT16_MAX;
	uint64_t t76 = UINT64_MAX;

	t76 = (x313|((x314&x315)+x316));

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x317 = INT16_MIN;
	uint32_t x318 = 86U;
	int8_t x319 = 0;
	int8_t x320 = -1;
	uint32_t t77 = UINT32_MAX;

	t77 = (x317|((x318&x319)+x320));

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x321 = -1LL;
	uint8_t x323 = 16U;
	int16_t x324 = -1;
	volatile int64_t t78 = 785LL;

	t78 = (x321|((x322&x323)+x324));

	if (t78 != -1LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x325 = 1867U;
	uint64_t x326 = 31025345173291033LLU;
	volatile int8_t x327 = 14;
	uint64_t t79 = 115326502734772712LLU;

	t79 = (x325|((x326&x327)+x328));

	if (t79 != 1871LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x329 = INT16_MIN;
	static uint64_t x330 = UINT64_MAX;
	int32_t x331 = INT32_MIN;
	uint32_t x332 = UINT32_MAX;
	uint64_t t80 = UINT64_MAX;

	t80 = (x329|((x330&x331)+x332));

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x333 = INT8_MAX;
	volatile int32_t x335 = -1;
	uint32_t x336 = UINT32_MAX;
	static uint32_t t81 = UINT32_MAX;

	t81 = (x333|((x334&x335)+x336));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x337 = INT64_MAX;
	int16_t x338 = -1;
	volatile uint64_t x340 = UINT64_MAX;

	t82 = (x337|((x338&x339)+x340));

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x346 = 26743374U;
	int32_t x347 = INT32_MIN;
	int8_t x348 = INT8_MAX;
	uint32_t t83 = 165678421U;

	t83 = (x345|((x346&x347)+x348));

	if (t83 != 255U) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x349 = INT8_MIN;
	static volatile int8_t x350 = INT8_MIN;
	static uint64_t x351 = UINT64_MAX;
	uint16_t x352 = 20U;
	volatile uint64_t t84 = 1473338414765522858LLU;

	t84 = (x349|((x350&x351)+x352));

	if (t84 != 18446744073709551508LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x353 = -1;
	static int64_t x354 = -8053LL;
	int8_t x355 = INT8_MAX;
	int16_t x356 = 27;
	volatile int64_t t85 = 125724176LL;

	t85 = (x353|((x354&x355)+x356));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x357 = INT8_MIN;
	volatile int16_t x358 = -1;
	int64_t x359 = INT64_MIN;
	volatile int8_t x360 = 45;
	int64_t t86 = -8438378733LL;

	t86 = (x357|((x358&x359)+x360));

	if (t86 != -83LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x361 = -22;
	uint32_t x362 = 6016808U;
	int32_t x364 = INT32_MAX;
	static uint32_t t87 = UINT32_MAX;

	t87 = (x361|((x362&x363)+x364));

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x366 = 99969445LLU;
	int64_t x367 = 17880075267140550LL;
	volatile uint16_t x368 = UINT16_MAX;

	t88 = (x365|((x366&x367)+x368));

	if (t88 != 9223372036935608707LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x370 = -1;
	int64_t t89 = -27326827911899LL;

	t89 = (x369|((x370&x371)+x372));

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x373 = INT32_MAX;
	uint8_t x374 = 0U;
	uint16_t x375 = 269U;
	uint64_t x376 = UINT64_MAX;
	uint64_t t90 = UINT64_MAX;

	t90 = (x373|((x374&x375)+x376));

	if (t90 != UINT64_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x377 = 219473;
	volatile uint32_t x378 = 26U;
	volatile int16_t x379 = INT16_MAX;
	int8_t x380 = -1;
	volatile uint32_t t91 = 33780U;

	t91 = (x377|((x378&x379)+x380));

	if (t91 != 219481U) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x381 = 175309588968984LLU;
	int8_t x384 = INT8_MIN;
	uint64_t t92 = 14171591818906695LLU;

	t92 = (x381|((x382&x383)+x384));

	if (t92 != 175309588987672LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x386 = UINT16_MAX;
	int16_t x387 = INT16_MIN;
	static uint32_t x388 = UINT32_MAX;
	uint32_t t93 = 1U;

	t93 = (x385|((x386&x387)+x388));

	if (t93 != 32767U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x389 = INT64_MAX;
	int32_t x390 = 13;
	static int32_t x391 = INT32_MIN;
	int8_t x392 = -1;
	volatile int64_t t94 = 471LL;

	t94 = (x389|((x390&x391)+x392));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x394 = INT16_MIN;
	uint32_t x395 = UINT32_MAX;
	int32_t x396 = INT32_MAX;
	volatile uint32_t t95 = 6U;

	t95 = (x393|((x394&x395)+x396));

	if (t95 != 2147483647U) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x397 = 29;
	int64_t x398 = INT64_MAX;
	int32_t x399 = INT32_MIN;
	static int32_t x400 = 7;
	volatile int64_t t96 = 1620LL;

	t96 = (x397|((x398&x399)+x400));

	if (t96 != 9223372034707292191LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x401 = UINT16_MAX;
	int16_t x402 = INT16_MIN;
	int32_t t97 = -5;

	t97 = (x401|((x402&x403)+x404));

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x405 = 126698U;
	int8_t x406 = 19;
	uint8_t x407 = 3U;
	int16_t x408 = INT16_MIN;

	t98 = (x405|((x406&x407)+x408));

	if (t98 != 4294962923U) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x409 = INT32_MAX;
	int32_t x411 = -31975608;
	volatile uint8_t x412 = UINT8_MAX;
	static volatile int32_t t99 = INT32_MAX;

	t99 = (x409|((x410&x411)+x412));

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

