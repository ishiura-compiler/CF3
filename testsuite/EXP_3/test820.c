#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x2 = INT16_MIN;
volatile int64_t x7 = INT64_MIN;
int64_t t1 = -2LL;
volatile int16_t x19 = 1;
int8_t x22 = INT8_MIN;
static volatile int8_t x24 = INT8_MIN;
static uint64_t t5 = 1159747978LLU;
uint64_t x25 = 48947911LLU;
int64_t x32 = -104LL;
volatile uint32_t x35 = 1U;
uint32_t t11 = 2141U;
static volatile int32_t t13 = 187331;
volatile int16_t x63 = -1;
int8_t x66 = INT8_MIN;
volatile uint8_t x70 = 54U;
volatile int16_t x71 = INT16_MIN;
volatile uint64_t t18 = UINT64_MAX;
static int8_t x84 = -1;
uint64_t t21 = 15672048979429LLU;
volatile int64_t t22 = -505559143204769544LL;
int64_t x93 = -1LL;
volatile uint32_t x112 = 92U;
static volatile uint32_t t27 = 169U;
int32_t x114 = INT32_MIN;
uint64_t t28 = 101104922450617157LLU;
uint8_t x124 = 5U;
int64_t t29 = -161LL;
static int16_t x125 = -1;
uint8_t x129 = UINT8_MAX;
uint32_t x134 = 16616592U;
static int16_t x139 = 117;
uint64_t t33 = 2022LLU;
int64_t x142 = INT64_MAX;
static int8_t x153 = INT8_MAX;
static volatile int8_t x158 = INT8_MAX;
int8_t x160 = -1;
int16_t x162 = INT16_MAX;
volatile uint16_t x165 = UINT16_MAX;
static uint32_t x170 = 697U;
int8_t x187 = INT8_MIN;
int64_t t45 = 8LL;
uint64_t x190 = UINT64_MAX;
int64_t x192 = INT64_MIN;
uint32_t t47 = 1434054962U;
static int32_t x198 = INT32_MIN;
volatile int16_t x210 = 11;
uint8_t x218 = 7U;
int16_t x228 = 365;
int16_t x231 = 2571;
static int64_t t57 = 3123564566984812LL;
int16_t x241 = INT16_MAX;
int64_t t58 = -8750LL;
int16_t x248 = INT16_MIN;
uint16_t x250 = 373U;
uint64_t x251 = UINT64_MAX;
uint64_t t60 = UINT64_MAX;
int8_t x254 = 1;
volatile int16_t x256 = -1;
int32_t x263 = INT32_MIN;
uint64_t x272 = 32LLU;
volatile uint64_t t65 = 1638869950LLU;
int16_t x279 = INT16_MIN;
int64_t t68 = 300852186420LL;
int32_t x286 = 1657646;
int64_t x288 = INT64_MIN;
int16_t x291 = -296;
static uint8_t x297 = 29U;
int8_t x301 = 0;
int32_t x309 = INT32_MIN;
uint32_t x311 = 2500860U;
volatile uint16_t x313 = UINT16_MAX;
int64_t x315 = INT64_MIN;
int64_t x320 = INT64_MIN;
uint64_t x321 = 2029964LLU;
int32_t x335 = INT32_MIN;
static volatile int64_t t80 = 7863LL;
int64_t x345 = -1LL;
int32_t x347 = -26;
volatile int64_t t85 = -6580982726639820LL;
uint8_t x366 = UINT8_MAX;
uint32_t x369 = 4U;
int16_t x370 = INT16_MAX;
uint64_t t91 = 123996148982685LLU;
static volatile uint16_t x395 = 1986U;
volatile int16_t x397 = INT16_MAX;
volatile int8_t x402 = 0;
volatile int8_t x405 = INT8_MIN;
volatile int16_t x406 = -1;


void f0(void) {
	int16_t x1 = INT16_MAX;
	volatile uint8_t x3 = 15U;
	uint16_t x4 = 1723U;
	static volatile int32_t t0 = -14961434;

	t0 = ((x1|x2)+(x3%x4));

	if (t0 != 14) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 24U;
	uint16_t x6 = 29217U;
	int64_t x8 = 14019LL;

	t1 = ((x5|x6)+(x7%x8));

	if (t1 != 27016LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 9;
	int32_t x10 = 33156577;
	int16_t x11 = INT16_MIN;
	int64_t x12 = -1LL;
	volatile int64_t t2 = 0LL;

	t2 = ((x9|x10)+(x11%x12));

	if (t2 != 33156585LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 614292;
	volatile int64_t x14 = INT64_MIN;
	int64_t x15 = INT64_MIN;
	int8_t x16 = -1;
	volatile int64_t t3 = -4LL;

	t3 = ((x13|x14)+(x15%x16));

	if (t3 != -9223372036854161516LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MIN;
	static int8_t x18 = INT8_MAX;
	uint16_t x20 = UINT16_MAX;
	volatile int32_t t4 = 4;

	t4 = ((x17|x18)+(x19%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = UINT64_MAX;
	static volatile int32_t x23 = INT32_MAX;

	t5 = ((x21|x22)+(x23%x24));

	if (t5 != 126LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = INT64_MIN;
	int8_t x27 = INT8_MIN;
	volatile uint16_t x28 = 3U;
	volatile uint64_t t6 = 381140474820LLU;

	t6 = ((x25|x26)+(x27%x28));

	if (t6 != 9223372036903723717LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	volatile int32_t x30 = INT32_MAX;
	int8_t x31 = INT8_MAX;
	static int64_t t7 = -27855980392622482LL;

	t7 = ((x29|x30)+(x31%x32));

	if (t7 != 22LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = 127;
	uint16_t x34 = 672U;
	int8_t x36 = -19;
	uint32_t t8 = 5976U;

	t8 = ((x33|x34)+(x35%x36));

	if (t8 != 768U) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x37 = 3869U;
	static int8_t x38 = INT8_MAX;
	int16_t x39 = INT16_MAX;
	int32_t x40 = -10924120;
	uint32_t t9 = 3U;

	t9 = ((x37|x38)+(x39%x40));

	if (t9 != 36734U) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 6U;
	uint32_t x42 = UINT32_MAX;
	static int8_t x43 = -1;
	uint8_t x44 = UINT8_MAX;
	uint32_t t10 = 694U;

	t10 = ((x41|x42)+(x43%x44));

	if (t10 != 4294967294U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x45 = 21U;
	uint8_t x46 = 60U;
	uint8_t x47 = UINT8_MAX;
	int32_t x48 = INT32_MIN;

	t11 = ((x45|x46)+(x47%x48));

	if (t11 != 316U) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = INT64_MAX;
	int32_t x50 = 15904958;
	static int16_t x51 = -1;
	volatile uint32_t x52 = UINT32_MAX;
	int64_t t12 = INT64_MAX;

	t12 = ((x49|x50)+(x51%x52));

	if (t12 != INT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile uint8_t x53 = UINT8_MAX;
	int32_t x54 = 503;
	int16_t x55 = -1;
	static volatile int32_t x56 = INT32_MAX;

	t13 = ((x53|x54)+(x55%x56));

	if (t13 != 510) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 1317;
	static uint64_t x58 = 7932587996803LLU;
	volatile uint8_t x59 = 1U;
	int32_t x60 = -1;
	uint64_t t14 = 13813950LLU;

	t14 = ((x57|x58)+(x59%x60));

	if (t14 != 7932587997095LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x61 = -24605901081716799LL;
	volatile int64_t x62 = -2118040931909995154LL;
	volatile int32_t x64 = -22;
	static int64_t t15 = 17127798721939LL;

	t15 = ((x61|x62)+(x63%x64));

	if (t15 != -19221667647227922LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 1900;
	volatile int16_t x67 = INT16_MIN;
	int32_t x68 = INT32_MAX;
	volatile int32_t t16 = -66;

	t16 = ((x65|x66)+(x67%x68));

	if (t16 != -32788) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x69 = -1;
	static uint8_t x72 = 1U;
	int32_t t17 = -361306004;

	t17 = ((x69|x70)+(x71%x72));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -29455;
	int16_t x74 = -1;
	uint16_t x75 = 0U;
	static uint64_t x76 = 997752555394472LLU;

	t18 = ((x73|x74)+(x75%x76));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x77 = INT8_MIN;
	static int32_t x78 = INT32_MIN;
	int64_t x79 = 257550LL;
	static int8_t x80 = 32;
	int64_t t19 = 115457682272345522LL;

	t19 = ((x77|x78)+(x79%x80));

	if (t19 != -114LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x81 = 1975U;
	int16_t x82 = 7537;
	static uint16_t x83 = 6U;
	static volatile int32_t t20 = 1048;

	t20 = ((x81|x82)+(x83%x84));

	if (t20 != 8183) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 55958U;
	int8_t x86 = INT8_MIN;
	static volatile uint8_t x87 = 18U;
	uint64_t x88 = UINT64_MAX;

	t21 = ((x85|x86)+(x87%x88));

	if (t21 != 4294967208LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MIN;
	int64_t x90 = -1LL;
	uint8_t x91 = 61U;
	uint16_t x92 = UINT16_MAX;

	t22 = ((x89|x90)+(x91%x92));

	if (t22 != 60LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = INT16_MIN;
	uint16_t x95 = 5119U;
	int16_t x96 = INT16_MAX;
	int64_t t23 = -3336844828903906801LL;

	t23 = ((x93|x94)+(x95%x96));

	if (t23 != 5118LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = -6425172843028LL;
	int32_t x98 = -1;
	int8_t x99 = -39;
	uint16_t x100 = UINT16_MAX;
	int64_t t24 = -241916LL;

	t24 = ((x97|x98)+(x99%x100));

	if (t24 != -40LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	int8_t x102 = -1;
	int8_t x103 = 46;
	int64_t x104 = 14LL;
	static int64_t t25 = 0LL;

	t25 = ((x101|x102)+(x103%x104));

	if (t25 != 3LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	volatile int64_t x106 = INT64_MAX;
	volatile int64_t x107 = -1LL;
	volatile int32_t x108 = -14540264;
	volatile int64_t t26 = 0LL;

	t26 = ((x105|x106)+(x107%x108));

	if (t26 != -2LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = -2494;
	int32_t x110 = -1;
	int32_t x111 = 96438831;

	t27 = ((x109|x110)+(x111%x112));

	if (t27 != 14U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 210494903LLU;
	int32_t x115 = 7595769;
	int8_t x116 = -1;

	t28 = ((x113|x114)+(x115%x116));

	if (t28 != 18446744071772562871LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x121 = INT32_MAX;
	int8_t x122 = INT8_MIN;
	int64_t x123 = -4460801581181869386LL;

	t29 = ((x121|x122)+(x123%x124));

	if (t29 != -2LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x126 = -7;
	volatile uint8_t x127 = UINT8_MAX;
	int64_t x128 = INT64_MAX;
	volatile int64_t t30 = 52546172LL;

	t30 = ((x125|x126)+(x127%x128));

	if (t30 != 254LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x130 = -19551268;
	int64_t x131 = -1LL;
	uint64_t x132 = 5921431282954162LLU;
	uint64_t t31 = 11542581385LLU;

	t31 = ((x129|x130)+(x131%x132));

	if (t31 != 1485627287785752LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x133 = -1;
	int64_t x135 = INT64_MIN;
	uint16_t x136 = 13306U;
	int64_t t32 = -89466LL;

	t32 = ((x133|x134)+(x135%x136));

	if (t32 != 4294962655LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = 538870307LL;
	int16_t x138 = INT16_MIN;
	static volatile uint64_t x140 = 10889LLU;

	t33 = ((x137|x138)+(x139%x140));

	if (t33 != 18446744073709519512LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x141 = 6U;
	int8_t x143 = INT8_MIN;
	volatile uint64_t x144 = 1746400247749851571LLU;
	uint64_t t34 = 10161LLU;

	t34 = ((x141|x142)+(x143%x144));

	if (t34 != 10206113633065811585LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = -1;
	int8_t x146 = 5;
	int8_t x147 = -1;
	uint16_t x148 = 383U;
	volatile int32_t t35 = 376941225;

	t35 = ((x145|x146)+(x147%x148));

	if (t35 != -2) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x149 = 0U;
	int32_t x150 = -472;
	int32_t x151 = -1;
	int64_t x152 = INT64_MIN;
	static int64_t t36 = 116136627112LL;

	t36 = ((x149|x150)+(x151%x152));

	if (t36 != 4294966823LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x154 = -1;
	int32_t x155 = INT32_MAX;
	uint64_t x156 = 1LLU;
	volatile uint64_t t37 = UINT64_MAX;

	t37 = ((x153|x154)+(x155%x156));

	if (t37 != UINT64_MAX) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x157 = UINT8_MAX;
	int16_t x159 = 149;
	int32_t t38 = -298;

	t38 = ((x157|x158)+(x159%x160));

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x161 = 2082LLU;
	int16_t x163 = INT16_MIN;
	volatile uint64_t x164 = UINT64_MAX;
	volatile uint64_t t39 = UINT64_MAX;

	t39 = ((x161|x162)+(x163%x164));

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x166 = INT32_MIN;
	volatile int32_t x167 = INT32_MIN;
	volatile int16_t x168 = INT16_MAX;
	volatile int32_t t40 = 43;

	t40 = ((x165|x166)+(x167%x168));

	if (t40 != -2147418115) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = -3715509043663524461LL;
	uint8_t x171 = 93U;
	volatile uint8_t x172 = UINT8_MAX;
	volatile int64_t t41 = 0LL;

	t41 = ((x169|x170)+(x171%x172));

	if (t41 != -3715509043663523816LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = -11;
	int8_t x174 = -1;
	uint16_t x175 = 86U;
	int8_t x176 = INT8_MAX;
	static volatile int32_t t42 = 0;

	t42 = ((x173|x174)+(x175%x176));

	if (t42 != 85) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x177 = 4U;
	static int16_t x178 = 135;
	int32_t x179 = INT32_MIN;
	uint32_t x180 = 152U;
	volatile uint32_t t43 = 4090U;

	t43 = ((x177|x178)+(x179%x180));

	if (t43 != 271U) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = 15786543711871LL;
	static volatile uint32_t x182 = 23U;
	int16_t x183 = -1056;
	int32_t x184 = -1;
	volatile int64_t t44 = -516545701353824LL;

	t44 = ((x181|x182)+(x183%x184));

	if (t44 != 15786543711871LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = INT32_MIN;
	int8_t x186 = -1;
	int64_t x188 = 426410790107773865LL;

	t45 = ((x185|x186)+(x187%x188));

	if (t45 != -129LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x189 = -30055LL;
	static volatile int8_t x191 = 7;
	volatile uint64_t t46 = 2783560524589062132LLU;

	t46 = ((x189|x190)+(x191%x192));

	if (t46 != 6LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x193 = INT16_MIN;
	uint32_t x194 = UINT32_MAX;
	uint16_t x195 = UINT16_MAX;
	int16_t x196 = 5193;

	t47 = ((x193|x194)+(x195%x196));

	if (t47 != 3218U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = -1;
	volatile int8_t x199 = 1;
	int8_t x200 = -1;
	static volatile int32_t t48 = -830861;

	t48 = ((x197|x198)+(x199%x200));

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x201 = -1;
	uint8_t x202 = 1U;
	static int16_t x203 = INT16_MAX;
	uint32_t x204 = 3U;
	volatile uint32_t t49 = 243085620U;

	t49 = ((x201|x202)+(x203%x204));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x205 = -27491908334LL;
	int8_t x206 = INT8_MAX;
	static int64_t x207 = INT64_MAX;
	volatile int8_t x208 = INT8_MAX;
	volatile int64_t t50 = 120LL;

	t50 = ((x205|x206)+(x207%x208));

	if (t50 != -27491908225LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x209 = 1U;
	volatile int16_t x211 = INT16_MIN;
	int8_t x212 = -38;
	static int32_t t51 = -6;

	t51 = ((x209|x210)+(x211%x212));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x213 = INT64_MAX;
	uint16_t x214 = 24U;
	int16_t x215 = -1450;
	uint16_t x216 = UINT16_MAX;
	volatile int64_t t52 = 379229602LL;

	t52 = ((x213|x214)+(x215%x216));

	if (t52 != 9223372036854774357LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x217 = INT16_MIN;
	int64_t x219 = INT64_MIN;
	int32_t x220 = INT32_MIN;
	int64_t t53 = 434041LL;

	t53 = ((x217|x218)+(x219%x220));

	if (t53 != -32761LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x221 = 2039U;
	uint64_t x222 = UINT64_MAX;
	volatile int64_t x223 = -835LL;
	uint16_t x224 = UINT16_MAX;
	volatile uint64_t t54 = 2442813046LLU;

	t54 = ((x221|x222)+(x223%x224));

	if (t54 != 18446744073709550780LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x225 = INT8_MIN;
	volatile int16_t x226 = INT16_MAX;
	static int16_t x227 = INT16_MIN;
	volatile int32_t t55 = 0;

	t55 = ((x225|x226)+(x227%x228));

	if (t55 != -284) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = INT32_MAX;
	static int16_t x230 = -1;
	int16_t x232 = -19;
	static volatile int32_t t56 = -22;

	t56 = ((x229|x230)+(x231%x232));

	if (t56 != 5) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = -1LL;
	static volatile int16_t x234 = -13965;
	int64_t x235 = INT64_MAX;
	uint32_t x236 = 215479331U;

	t57 = ((x233|x234)+(x235%x236));

	if (t57 != 83444318LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x242 = INT32_MIN;
	int64_t x243 = -143761LL;
	static int8_t x244 = 15;

	t58 = ((x241|x242)+(x243%x244));

	if (t58 != -2147450882LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x245 = INT64_MIN;
	uint64_t x246 = 3015787LLU;
	uint8_t x247 = 1U;
	volatile uint64_t t59 = 50041766324895LLU;

	t59 = ((x245|x246)+(x247%x248));

	if (t59 != 9223372036857791596LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x249 = UINT64_MAX;
	uint64_t x252 = UINT64_MAX;

	t60 = ((x249|x250)+(x251%x252));

	if (t60 != UINT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = -6928389;
	static int64_t x255 = -1LL;
	int64_t t61 = 1285017614LL;

	t61 = ((x253|x254)+(x255%x256));

	if (t61 != -6928389LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x257 = 1U;
	int8_t x258 = INT8_MAX;
	static int8_t x259 = INT8_MIN;
	int64_t x260 = INT64_MAX;
	int64_t t62 = -163028LL;

	t62 = ((x257|x258)+(x259%x260));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x261 = 30U;
	int64_t x262 = -1LL;
	int16_t x264 = INT16_MIN;
	static volatile int64_t t63 = -7840738LL;

	t63 = ((x261|x262)+(x263%x264));

	if (t63 != -1LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x265 = INT64_MIN;
	int64_t x266 = -1LL;
	uint64_t x267 = UINT64_MAX;
	static volatile uint64_t x268 = UINT64_MAX;
	uint64_t t64 = UINT64_MAX;

	t64 = ((x265|x266)+(x267%x268));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x269 = -1;
	int8_t x270 = INT8_MAX;
	uint64_t x271 = UINT64_MAX;

	t65 = ((x269|x270)+(x271%x272));

	if (t65 != 30LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x273 = 2742LLU;
	uint32_t x274 = 0U;
	int16_t x275 = 1;
	static int16_t x276 = INT16_MAX;
	volatile uint64_t t66 = 561522934028132131LLU;

	t66 = ((x273|x274)+(x275%x276));

	if (t66 != 2743LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x277 = 9391LLU;
	static volatile int16_t x278 = INT16_MIN;
	uint8_t x280 = UINT8_MAX;
	volatile uint64_t t67 = 525852273419972LLU;

	t67 = ((x277|x278)+(x279%x280));

	if (t67 != 18446744073709528111LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x281 = INT64_MIN;
	int32_t x282 = -1;
	uint8_t x283 = UINT8_MAX;
	uint16_t x284 = UINT16_MAX;

	t68 = ((x281|x282)+(x283%x284));

	if (t68 != 254LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x285 = 29092414;
	int32_t x287 = INT32_MAX;
	volatile int64_t t69 = 6896276617177555LL;

	t69 = ((x285|x286)+(x287%x288));

	if (t69 != 2176576317LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x289 = 40;
	static volatile uint64_t x290 = 259533992327LLU;
	uint64_t x292 = 874389LLU;
	static volatile uint64_t t70 = 464020172953351LLU;

	t70 = ((x289|x290)+(x291%x292));

	if (t70 != 259534670507LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x293 = 653188670222453480LLU;
	static uint64_t x294 = UINT64_MAX;
	int32_t x295 = -127096126;
	volatile int64_t x296 = -1320625034955086495LL;
	uint64_t t71 = 102981406250LLU;

	t71 = ((x293|x294)+(x295%x296));

	if (t71 != 18446744073582455489LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x298 = 148LLU;
	static int64_t x299 = INT64_MIN;
	volatile uint64_t x300 = UINT64_MAX;
	volatile uint64_t t72 = 105859599406LLU;

	t72 = ((x297|x298)+(x299%x300));

	if (t72 != 9223372036854775965LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x302 = 118175153LLU;
	int16_t x303 = -1;
	uint8_t x304 = 35U;
	uint64_t t73 = 512905122391LLU;

	t73 = ((x301|x302)+(x303%x304));

	if (t73 != 118175152LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x305 = INT8_MIN;
	static int32_t x306 = INT32_MIN;
	volatile uint8_t x307 = 25U;
	int32_t x308 = -1;
	int32_t t74 = -66400;

	t74 = ((x305|x306)+(x307%x308));

	if (t74 != -128) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x310 = 10U;
	volatile int16_t x312 = 16139;
	volatile uint32_t t75 = 0U;

	t75 = ((x309|x310)+(x311%x312));

	if (t75 != 2147499112U) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x314 = 39119LL;
	int16_t x316 = 8856;
	int64_t t76 = -5049784900LL;

	t76 = ((x313|x314)+(x315%x316));

	if (t76 != 59623LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x317 = INT8_MAX;
	int32_t x318 = -1;
	uint32_t x319 = 24U;
	int64_t t77 = -82367103842722983LL;

	t77 = ((x317|x318)+(x319%x320));

	if (t77 != 23LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x322 = -1;
	volatile int64_t x323 = INT64_MAX;
	static int16_t x324 = 3;
	uint64_t t78 = 27167713659487050LLU;

	t78 = ((x321|x322)+(x323%x324));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x325 = INT16_MIN;
	volatile int32_t x326 = INT32_MIN;
	int8_t x327 = INT8_MIN;
	uint16_t x328 = 1353U;
	volatile int32_t t79 = 2364299;

	t79 = ((x325|x326)+(x327%x328));

	if (t79 != -32896) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint8_t x333 = UINT8_MAX;
	int16_t x334 = -399;
	static int64_t x336 = INT64_MIN;

	t80 = ((x333|x334)+(x335%x336));

	if (t80 != -2147483905LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x337 = 2LLU;
	int8_t x338 = -1;
	uint32_t x339 = 1U;
	volatile int16_t x340 = -739;
	uint64_t t81 = 25LLU;

	t81 = ((x337|x338)+(x339%x340));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x341 = 249792739LLU;
	int16_t x342 = 10;
	int32_t x343 = INT32_MIN;
	int32_t x344 = -1;
	volatile uint64_t t82 = 1037702199695LLU;

	t82 = ((x341|x342)+(x343%x344));

	if (t82 != 249792747LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x346 = 55;
	int16_t x348 = -4721;
	volatile int64_t t83 = -1822048282773LL;

	t83 = ((x345|x346)+(x347%x348));

	if (t83 != -27LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x349 = 22931U;
	volatile int16_t x350 = INT16_MIN;
	uint8_t x351 = 4U;
	int64_t x352 = 5LL;
	volatile int64_t t84 = 43377354285183LL;

	t84 = ((x349|x350)+(x351%x352));

	if (t84 != -9833LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x353 = INT16_MIN;
	int8_t x354 = -1;
	uint8_t x355 = UINT8_MAX;
	int64_t x356 = INT64_MIN;

	t85 = ((x353|x354)+(x355%x356));

	if (t85 != 254LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x357 = UINT16_MAX;
	uint16_t x358 = UINT16_MAX;
	uint8_t x359 = 14U;
	int64_t x360 = INT64_MIN;
	int64_t t86 = -4LL;

	t86 = ((x357|x358)+(x359%x360));

	if (t86 != 65549LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x361 = 3172LLU;
	volatile int16_t x362 = INT16_MAX;
	int32_t x363 = INT32_MAX;
	volatile uint32_t x364 = UINT32_MAX;
	volatile uint64_t t87 = 0LLU;

	t87 = ((x361|x362)+(x363%x364));

	if (t87 != 2147516414LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = INT32_MIN;
	int32_t x367 = INT32_MIN;
	static int64_t x368 = INT64_MAX;
	volatile int64_t t88 = 29996519553LL;

	t88 = ((x365|x366)+(x367%x368));

	if (t88 != -4294967041LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x371 = 549;
	uint64_t x372 = UINT64_MAX;
	static volatile uint64_t t89 = 259246618147612612LLU;

	t89 = ((x369|x370)+(x371%x372));

	if (t89 != 33316LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x373 = INT8_MIN;
	int64_t x374 = -2249735LL;
	static int16_t x375 = 7194;
	uint16_t x376 = UINT16_MAX;
	static int64_t t90 = 32437696463LL;

	t90 = ((x373|x374)+(x375%x376));

	if (t90 != 7187LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x377 = UINT32_MAX;
	static volatile int32_t x378 = -82586;
	volatile uint64_t x379 = UINT64_MAX;
	int16_t x380 = INT16_MAX;

	t91 = ((x377|x378)+(x379%x380));

	if (t91 != 4294967310LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x385 = 6;
	static int8_t x386 = -21;
	static int64_t x387 = INT64_MIN;
	uint16_t x388 = 565U;
	volatile int64_t t92 = -1026432835397149116LL;

	t92 = ((x385|x386)+(x387%x388));

	if (t92 != -145LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x389 = UINT16_MAX;
	volatile int16_t x390 = INT16_MIN;
	uint8_t x391 = UINT8_MAX;
	int64_t x392 = -736LL;
	int64_t t93 = -1091959338960392233LL;

	t93 = ((x389|x390)+(x391%x392));

	if (t93 != 254LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x393 = -1;
	uint16_t x394 = UINT16_MAX;
	int16_t x396 = -12;
	static int32_t t94 = -2941;

	t94 = ((x393|x394)+(x395%x396));

	if (t94 != 5) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x398 = -1;
	int16_t x399 = INT16_MAX;
	uint32_t x400 = UINT32_MAX;
	uint32_t t95 = 31U;

	t95 = ((x397|x398)+(x399%x400));

	if (t95 != 32766U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x401 = -71;
	int32_t x403 = 35538135;
	int64_t x404 = -924012341050LL;
	int64_t t96 = 514611922LL;

	t96 = ((x401|x402)+(x403%x404));

	if (t96 != 35538064LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x407 = INT8_MIN;
	uint16_t x408 = 43U;
	static volatile int32_t t97 = -111;

	t97 = ((x405|x406)+(x407%x408));

	if (t97 != -43) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x409 = 84226179U;
	static int8_t x410 = -7;
	uint8_t x411 = UINT8_MAX;
	static volatile uint32_t x412 = 110U;
	uint32_t t98 = 500973162U;

	t98 = ((x409|x410)+(x411%x412));

	if (t98 != 30U) { NG(); } else { ; }
	
}

void f99(void) {
	static uint64_t x413 = 5462LLU;
	int8_t x414 = INT8_MAX;
	uint32_t x415 = 2U;
	uint64_t x416 = UINT64_MAX;
	uint64_t t99 = 9LLU;

	t99 = ((x413|x414)+(x415%x416));

	if (t99 != 5505LLU) { NG(); } else { ; }
	
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

