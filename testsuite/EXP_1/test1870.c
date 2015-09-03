#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x7 = 2008466LL;
int64_t t1 = 2869439890403513249LL;
int64_t x13 = 4180161182918111LL;
uint16_t x16 = UINT16_MAX;
volatile int32_t t3 = -1;
int64_t t4 = -65923019590732LL;
static volatile int8_t x34 = INT8_MAX;
int32_t t7 = 1928;
volatile uint16_t x41 = 504U;
int16_t x50 = -1;
volatile int64_t t11 = -3LL;
int8_t x56 = -1;
int16_t x60 = 2025;
uint8_t x69 = 13U;
int16_t x72 = -1;
int32_t t15 = -65077;
int64_t t17 = -3930613LL;
int64_t x86 = INT64_MIN;
int32_t x87 = INT32_MAX;
int16_t x100 = INT16_MAX;
int64_t x101 = INT64_MIN;
int16_t x109 = INT16_MIN;
static volatile int8_t x127 = 1;
int32_t x128 = 340;
int8_t x132 = -13;
volatile uint8_t x135 = 8U;
static uint16_t x137 = 143U;
static uint64_t x139 = UINT64_MAX;
int32_t x143 = 5;
volatile int32_t t33 = -944380;
static uint16_t x146 = 30U;
static int32_t x148 = INT32_MIN;
volatile int8_t x156 = INT8_MIN;
volatile int64_t t36 = 228507LL;
volatile int64_t x157 = INT64_MIN;
int64_t t37 = -1LL;
volatile int32_t x161 = INT32_MIN;
static uint64_t x162 = 3010681358LLU;
static int8_t x171 = -1;
int8_t x172 = -1;
uint64_t x173 = 162962565680998603LLU;
uint16_t x179 = 761U;
int8_t x186 = INT8_MIN;
uint16_t x189 = 3U;
int32_t x193 = INT32_MIN;
int8_t x195 = INT8_MAX;
uint64_t t46 = 116652014531478225LLU;
volatile int8_t x206 = -23;
uint16_t x213 = 0U;
volatile int16_t x223 = 50;
int64_t x225 = INT64_MAX;
uint16_t x227 = 2060U;
int64_t t53 = -48LL;
int8_t x231 = INT8_MIN;
int64_t x234 = INT64_MIN;
int64_t t55 = -21914171LL;
static int64_t x240 = INT64_MAX;
uint8_t x247 = UINT8_MAX;
uint32_t x260 = 45444U;
volatile int8_t x264 = -11;
int32_t t61 = -5;
volatile int64_t x272 = -1LL;
static volatile int16_t x277 = 601;
uint8_t x278 = 17U;
static uint32_t x285 = UINT32_MAX;
uint64_t t68 = 158222124991016289LLU;
uint16_t x301 = 1U;
int16_t x303 = -1;
volatile int64_t t71 = 973228535936500LL;
int16_t x308 = 80;
int64_t x315 = 1LL;
static int32_t x319 = 239722629;
static int32_t x322 = 13746;
static volatile int64_t t75 = -1512690388452LL;
uint64_t t76 = 23668299LLU;
static volatile int64_t x330 = -2446948867582LL;
static int16_t x331 = INT16_MIN;
static int8_t x336 = INT8_MIN;
int16_t x338 = -1;
static int32_t x339 = INT32_MIN;
int64_t x340 = -230887788638782301LL;
static int8_t x342 = 0;
volatile int64_t t81 = -321534787699166313LL;
volatile int64_t x358 = 7531275609381075LL;
volatile int8_t x359 = -1;
int32_t x362 = -1;
static volatile uint32_t t86 = 102694U;
volatile int64_t x370 = -1LL;
int32_t x371 = -1;
volatile int64_t x383 = 393974411LL;
volatile uint32_t x388 = 90U;
volatile int8_t x394 = -1;
int64_t x395 = -1LL;
static int32_t x396 = INT32_MAX;
static volatile uint16_t x397 = 1U;
static volatile int8_t x398 = 1;
static volatile uint16_t x399 = UINT16_MAX;
int16_t x405 = INT16_MAX;
volatile int16_t x406 = INT16_MIN;
int64_t t95 = -708LL;
volatile int32_t t98 = 341953414;
int32_t x421 = -1610389;


void f0(void) {
	int16_t x5 = -1;
	static volatile uint16_t x6 = 1832U;
	int8_t x8 = -1;
	volatile int64_t t0 = 78029282553588LL;

	t0 = (((x5|x6)+x7)&x8);

	if (t0 != 2008465LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = -1;
	int32_t x10 = INT32_MIN;
	volatile int64_t x11 = -27481202LL;
	int64_t x12 = -1LL;

	t1 = (((x9|x10)+x11)&x12);

	if (t1 != -27481203LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x14 = UINT16_MAX;
	int8_t x15 = 0;
	volatile int64_t t2 = -4107295LL;

	t2 = (((x13|x14)+x15)&x16);

	if (t2 != 65535LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x17 = 52U;
	int32_t x18 = INT32_MIN;
	int16_t x19 = INT16_MAX;
	uint16_t x20 = UINT16_MAX;

	t3 = (((x17|x18)+x19)&x20);

	if (t3 != 32819) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x21 = -1;
	volatile int64_t x22 = INT64_MIN;
	volatile int64_t x23 = 56402LL;
	int8_t x24 = INT8_MIN;

	t4 = (((x21|x22)+x23)&x24);

	if (t4 != 56320LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x25 = UINT64_MAX;
	static int16_t x26 = -1;
	volatile uint8_t x27 = UINT8_MAX;
	int32_t x28 = -1;
	uint64_t t5 = 751195638563LLU;

	t5 = (((x25|x26)+x27)&x28);

	if (t5 != 254LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MAX;
	volatile int8_t x30 = 26;
	int8_t x31 = -1;
	int8_t x32 = INT8_MAX;
	volatile int64_t t6 = -99LL;

	t6 = (((x29|x30)+x31)&x32);

	if (t6 != 126LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = 1009U;
	static int32_t x35 = -159;
	int16_t x36 = INT16_MIN;

	t7 = (((x33|x34)+x35)&x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MAX;
	static int16_t x38 = -3;
	uint16_t x39 = 16634U;
	uint16_t x40 = 3U;
	static volatile int32_t t8 = 30122536;

	t8 = (((x37|x38)+x39)&x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x42 = -1;
	uint8_t x43 = 78U;
	int64_t x44 = INT64_MIN;
	volatile int64_t t9 = -5620399LL;

	t9 = (((x41|x42)+x43)&x44);

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 36U;
	static uint64_t x46 = 3LLU;
	int32_t x47 = -13115;
	uint16_t x48 = 15U;
	volatile uint64_t t10 = 25LLU;

	t10 = (((x45|x46)+x47)&x48);

	if (t10 != 12LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = -1;
	int32_t x51 = INT32_MAX;
	static int64_t x52 = 4044910236590329396LL;

	t11 = (((x49|x50)+x51)&x52);

	if (t11 != 1749995060LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x53 = -1;
	int16_t x54 = INT16_MAX;
	static uint8_t x55 = UINT8_MAX;
	static int32_t t12 = 596;

	t12 = (((x53|x54)+x55)&x56);

	if (t12 != 254) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x57 = 44148;
	int16_t x58 = INT16_MIN;
	static uint16_t x59 = 4U;
	volatile int32_t t13 = -44492;

	t13 = (((x57|x58)+x59)&x60);

	if (t13 != 1128) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = 128443;
	static uint64_t x62 = 15982671308LLU;
	uint64_t x63 = UINT64_MAX;
	int32_t x64 = -1;
	static volatile uint64_t t14 = 947507LLU;

	t14 = (((x61|x62)+x63)&x64);

	if (t14 != 15982786046LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x70 = UINT8_MAX;
	uint16_t x71 = 19590U;

	t15 = (((x69|x70)+x71)&x72);

	if (t15 != 19845) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = INT64_MIN;
	static uint64_t x74 = UINT64_MAX;
	volatile int16_t x75 = INT16_MAX;
	static int32_t x76 = INT32_MIN;
	uint64_t t16 = 249857299341341165LLU;

	t16 = (((x73|x74)+x75)&x76);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x77 = -17330190254LL;
	int32_t x78 = INT32_MIN;
	static volatile int8_t x79 = -1;
	int32_t x80 = -1;

	t17 = (((x77|x78)+x79)&x80);

	if (t17 != -150321071LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x81 = UINT64_MAX;
	int32_t x82 = INT32_MAX;
	int16_t x83 = 4;
	int32_t x84 = INT32_MIN;
	uint64_t t18 = 1097688056LLU;

	t18 = (((x81|x82)+x83)&x84);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x85 = -1;
	volatile int32_t x88 = -21;
	volatile int64_t t19 = -326892489LL;

	t19 = (((x85|x86)+x87)&x88);

	if (t19 != 2147483626LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = 1999229319144LL;
	uint8_t x90 = UINT8_MAX;
	uint16_t x91 = 402U;
	int16_t x92 = -2031;
	static volatile int64_t t20 = 219890165225835655LL;

	t20 = (((x89|x90)+x91)&x92);

	if (t20 != 1999229319185LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x93 = 3383U;
	volatile uint16_t x94 = 30U;
	uint32_t x95 = 9566U;
	int32_t x96 = INT32_MIN;
	uint32_t t21 = 508029721U;

	t21 = (((x93|x94)+x95)&x96);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = INT32_MAX;
	int32_t x98 = INT32_MIN;
	uint64_t x99 = UINT64_MAX;
	static volatile uint64_t t22 = 1700195556LLU;

	t22 = (((x97|x98)+x99)&x100);

	if (t22 != 32766LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x102 = 7350517U;
	int16_t x103 = INT16_MIN;
	uint8_t x104 = 29U;
	int64_t t23 = 3LL;

	t23 = (((x101|x102)+x103)&x104);

	if (t23 != 21LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x105 = INT8_MIN;
	static int16_t x106 = INT16_MIN;
	uint32_t x107 = 89U;
	int16_t x108 = -1;
	uint32_t t24 = 9283U;

	t24 = (((x105|x106)+x107)&x108);

	if (t24 != 4294967257U) { NG(); } else { ; }
	
}

void f25(void) {
	static volatile int16_t x110 = -117;
	uint64_t x111 = 162580101810309LLU;
	static int8_t x112 = -37;
	volatile uint64_t t25 = 1446820749770LLU;

	t25 = (((x109|x110)+x111)&x112);

	if (t25 != 162580101810192LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x113 = INT16_MIN;
	int8_t x114 = INT8_MIN;
	int16_t x115 = -1;
	int8_t x116 = INT8_MIN;
	volatile int32_t t26 = -43679190;

	t26 = (((x113|x114)+x115)&x116);

	if (t26 != -256) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x117 = 17LLU;
	int32_t x118 = INT32_MIN;
	uint32_t x119 = 346306U;
	static int16_t x120 = -1;
	uint64_t t27 = 1932057LLU;

	t27 = (((x117|x118)+x119)&x120);

	if (t27 != 18446744071562414291LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x121 = -8;
	int16_t x122 = INT16_MIN;
	volatile int16_t x123 = -7;
	volatile int8_t x124 = -8;
	volatile int32_t t28 = -27558;

	t28 = (((x121|x122)+x123)&x124);

	if (t28 != -16) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = -3962;
	int64_t x126 = INT64_MIN;
	volatile int64_t t29 = -247042907089LL;

	t29 = (((x125|x126)+x127)&x128);

	if (t29 != 4LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x129 = 477U;
	int16_t x130 = INT16_MAX;
	uint8_t x131 = 103U;
	static volatile int32_t t30 = 81605653;

	t30 = (((x129|x130)+x131)&x132);

	if (t30 != 32866) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = INT16_MIN;
	int32_t x134 = -342630;
	int8_t x136 = -1;
	volatile int32_t t31 = 2295;

	t31 = (((x133|x134)+x135)&x136);

	if (t31 != -14942) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x138 = 6840151LLU;
	static int16_t x140 = INT16_MAX;
	volatile uint64_t t32 = 69940LLU;

	t32 = (((x137|x138)+x139)&x140);

	if (t32 != 24542LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x141 = 5U;
	int8_t x142 = INT8_MIN;
	int16_t x144 = INT16_MIN;

	t33 = (((x141|x142)+x143)&x144);

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x145 = 10227926880265686LLU;
	static volatile int32_t x147 = -1;
	static uint64_t t34 = 320686476310870526LLU;

	t34 = (((x145|x146)+x147)&x148);

	if (t34 != 10227925597028352LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = INT64_MIN;
	int32_t x150 = INT32_MIN;
	int8_t x151 = INT8_MAX;
	int8_t x152 = 1;
	static int64_t t35 = 40609343736LL;

	t35 = (((x149|x150)+x151)&x152);

	if (t35 != 1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = -1;
	int64_t x154 = 2974147580673372111LL;
	volatile int32_t x155 = -1;

	t36 = (((x153|x154)+x155)&x156);

	if (t36 != -128LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x158 = UINT32_MAX;
	int16_t x159 = INT16_MAX;
	int8_t x160 = -1;

	t37 = (((x157|x158)+x159)&x160);

	if (t37 != -9223372032559775746LL) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x163 = 15LLU;
	static uint16_t x164 = 1685U;
	static volatile uint64_t t38 = 119692627314943LLU;

	t38 = (((x161|x162)+x163)&x164);

	if (t38 != 533LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x165 = 700U;
	int32_t x166 = INT32_MIN;
	static volatile int8_t x167 = -1;
	uint8_t x168 = UINT8_MAX;
	volatile int32_t t39 = -430;

	t39 = (((x165|x166)+x167)&x168);

	if (t39 != 187) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x169 = UINT32_MAX;
	uint64_t x170 = 65438LLU;
	uint64_t t40 = 41LLU;

	t40 = (((x169|x170)+x171)&x172);

	if (t40 != 4294967294LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x174 = INT32_MAX;
	volatile uint16_t x175 = UINT16_MAX;
	int32_t x176 = INT32_MAX;
	volatile uint64_t t41 = 141LLU;

	t41 = (((x173|x174)+x175)&x176);

	if (t41 != 65534LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x177 = INT8_MIN;
	volatile uint16_t x178 = 1881U;
	static int64_t x180 = -6712976159LL;
	static int64_t t42 = 32LL;

	t42 = (((x177|x178)+x179)&x180);

	if (t42 != 192LL) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x181 = UINT32_MAX;
	static uint8_t x182 = UINT8_MAX;
	uint64_t x183 = UINT64_MAX;
	static int32_t x184 = -1;
	uint64_t t43 = 41LLU;

	t43 = (((x181|x182)+x183)&x184);

	if (t43 != 4294967294LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x185 = INT32_MIN;
	volatile int8_t x187 = INT8_MAX;
	uint8_t x188 = UINT8_MAX;
	volatile int32_t t44 = 0;

	t44 = (((x185|x186)+x187)&x188);

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x190 = INT64_MIN;
	static int16_t x191 = -1;
	uint32_t x192 = UINT32_MAX;
	int64_t t45 = 79607425362226114LL;

	t45 = (((x189|x190)+x191)&x192);

	if (t45 != 2LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x194 = -14121;
	uint64_t x196 = UINT64_MAX;

	t46 = (((x193|x194)+x195)&x196);

	if (t46 != 18446744073709537622LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = -1;
	static uint32_t x198 = 302379600U;
	static uint8_t x199 = 80U;
	static uint32_t x200 = 24U;
	volatile uint32_t t47 = 12886333U;

	t47 = (((x197|x198)+x199)&x200);

	if (t47 != 8U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x205 = -1;
	static int16_t x207 = INT16_MAX;
	uint64_t x208 = 3477160232LLU;
	volatile uint64_t t48 = 640923LLU;

	t48 = (((x205|x206)+x207)&x208);

	if (t48 != 16680LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x209 = 489U;
	int64_t x210 = INT64_MAX;
	static int64_t x211 = -1LL;
	int32_t x212 = 346957280;
	int64_t t49 = -4LL;

	t49 = (((x209|x210)+x211)&x212);

	if (t49 != 346957280LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x214 = 933012367165LL;
	volatile uint16_t x215 = 43U;
	static uint32_t x216 = 139089521U;
	static volatile int64_t t50 = -338723323LL;

	t50 = (((x213|x214)+x215)&x216);

	if (t50 != 139085408LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x217 = INT64_MIN;
	int16_t x218 = INT16_MAX;
	int8_t x219 = 0;
	int32_t x220 = INT32_MIN;
	int64_t t51 = INT64_MIN;

	t51 = (((x217|x218)+x219)&x220);

	if (t51 != INT64_MIN) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x221 = -1;
	uint8_t x222 = 0U;
	volatile int16_t x224 = INT16_MIN;
	volatile int32_t t52 = -1117379;

	t52 = (((x221|x222)+x223)&x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x226 = INT32_MIN;
	volatile int32_t x228 = INT32_MAX;

	t53 = (((x225|x226)+x227)&x228);

	if (t53 != 2059LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x229 = -1;
	uint16_t x230 = 240U;
	static int32_t x232 = -1;
	static int32_t t54 = -1;

	t54 = (((x229|x230)+x231)&x232);

	if (t54 != -129) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x233 = -15;
	volatile int32_t x235 = INT32_MAX;
	int16_t x236 = INT16_MIN;

	t55 = (((x233|x234)+x235)&x236);

	if (t55 != 2147450880LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x237 = 249992466U;
	uint16_t x238 = 64U;
	static volatile int16_t x239 = INT16_MAX;
	int64_t t56 = 69736461328662LL;

	t56 = (((x237|x238)+x239)&x240);

	if (t56 != 250025297LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x245 = -39445967240LL;
	static int8_t x246 = INT8_MIN;
	int16_t x248 = -15;
	static volatile int64_t t57 = -1LL;

	t57 = (((x245|x246)+x247)&x248);

	if (t57 != 241LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x249 = 32U;
	static int16_t x250 = INT16_MIN;
	volatile int8_t x251 = INT8_MIN;
	uint64_t x252 = 3LLU;
	uint64_t t58 = 132LLU;

	t58 = (((x249|x250)+x251)&x252);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x253 = 35U;
	uint32_t x254 = 135939U;
	static int16_t x255 = -1;
	uint16_t x256 = UINT16_MAX;
	volatile uint32_t t59 = 18301U;

	t59 = (((x253|x254)+x255)&x256);

	if (t59 != 4898U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x257 = 250173641545LLU;
	static int8_t x258 = INT8_MIN;
	int16_t x259 = 14;
	volatile uint64_t t60 = 4077936424LLU;

	t60 = (((x257|x258)+x259)&x260);

	if (t60 != 45444LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x261 = -18;
	uint8_t x262 = 13U;
	int16_t x263 = -131;

	t61 = (((x261|x262)+x263)&x264);

	if (t61 != -156) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x265 = 366LL;
	int8_t x266 = 0;
	int32_t x267 = 976693141;
	int16_t x268 = -1;
	volatile int64_t t62 = 179632183654LL;

	t62 = (((x265|x266)+x267)&x268);

	if (t62 != 976693507LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x269 = INT32_MAX;
	static int16_t x270 = INT16_MIN;
	int8_t x271 = INT8_MAX;
	volatile int64_t t63 = 7LL;

	t63 = (((x269|x270)+x271)&x272);

	if (t63 != 126LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x273 = -37LL;
	volatile int8_t x274 = INT8_MAX;
	volatile uint16_t x275 = UINT16_MAX;
	volatile int64_t x276 = INT64_MIN;
	volatile int64_t t64 = 47LL;

	t64 = (((x273|x274)+x275)&x276);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x279 = 9433U;
	static int32_t x280 = 3770;
	volatile uint32_t t65 = 311U;

	t65 = (((x277|x278)+x279)&x280);

	if (t65 != 1586U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x281 = INT64_MIN;
	int32_t x282 = INT32_MIN;
	static int32_t x283 = INT32_MIN;
	static int8_t x284 = 0;
	volatile int64_t t66 = 3858936691945LL;

	t66 = (((x281|x282)+x283)&x284);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x286 = 8U;
	uint64_t x287 = 1812532845LLU;
	int32_t x288 = INT32_MIN;
	uint64_t t67 = 603019639827LLU;

	t67 = (((x285|x286)+x287)&x288);

	if (t67 != 4294967296LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x289 = UINT32_MAX;
	uint64_t x290 = 241144230338LLU;
	int64_t x291 = INT64_MIN;
	int32_t x292 = 1;

	t68 = (((x289|x290)+x291)&x292);

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x293 = UINT8_MAX;
	int8_t x294 = INT8_MIN;
	int64_t x295 = -1LL;
	static uint16_t x296 = UINT16_MAX;
	static int64_t t69 = -23159625442139LL;

	t69 = (((x293|x294)+x295)&x296);

	if (t69 != 65534LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x297 = INT64_MAX;
	int16_t x298 = INT16_MIN;
	volatile uint8_t x299 = 1U;
	static uint64_t x300 = UINT64_MAX;
	static uint64_t t70 = 2770820364301678934LLU;

	t70 = (((x297|x298)+x299)&x300);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x302 = INT64_MAX;
	static int16_t x304 = -1;

	t71 = (((x301|x302)+x303)&x304);

	if (t71 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x305 = -1LL;
	int64_t x306 = INT64_MIN;
	static int16_t x307 = INT16_MIN;
	volatile int64_t t72 = 331LL;

	t72 = (((x305|x306)+x307)&x308);

	if (t72 != 80LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x313 = 118469U;
	int16_t x314 = 4007;
	uint32_t x316 = 838743U;
	int64_t t73 = 39725269447LL;

	t73 = (((x313|x314)+x315)&x316);

	if (t73 != 52288LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x317 = 32285;
	static int16_t x318 = INT16_MAX;
	int16_t x320 = INT16_MIN;
	volatile int32_t t74 = 57072;

	t74 = (((x317|x318)+x319)&x320);

	if (t74 != 239730688) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x321 = 0;
	int64_t x323 = -1LL;
	static uint8_t x324 = UINT8_MAX;

	t75 = (((x321|x322)+x323)&x324);

	if (t75 != 177LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x325 = UINT64_MAX;
	int16_t x326 = -2;
	volatile uint64_t x327 = 379LLU;
	int64_t x328 = INT64_MAX;

	t76 = (((x325|x326)+x327)&x328);

	if (t76 != 378LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x329 = 478255255LLU;
	int16_t x332 = INT16_MIN;
	uint64_t t77 = 243969692LLU;

	t77 = (((x329|x330)+x331)&x332);

	if (t77 != 18446741627171700736LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x333 = 15LLU;
	static int64_t x334 = -1LL;
	uint8_t x335 = 0U;
	volatile uint64_t t78 = 1119LLU;

	t78 = (((x333|x334)+x335)&x336);

	if (t78 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x337 = UINT32_MAX;
	volatile int64_t t79 = -4LL;

	t79 = (((x337|x338)+x339)&x340);

	if (t79 != 255179939LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x341 = INT16_MIN;
	static int16_t x343 = INT16_MIN;
	uint16_t x344 = 5U;
	int32_t t80 = 45998357;

	t80 = (((x341|x342)+x343)&x344);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x345 = 2083461;
	int64_t x346 = -1LL;
	volatile int8_t x347 = INT8_MIN;
	int32_t x348 = INT32_MAX;

	t81 = (((x345|x346)+x347)&x348);

	if (t81 != 2147483519LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x349 = -682468254;
	int64_t x350 = 196243383LL;
	static uint16_t x351 = UINT16_MAX;
	int16_t x352 = -1;
	volatile int64_t t82 = 210LL;

	t82 = (((x349|x350)+x351)&x352);

	if (t82 != -537690122LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x353 = -1603;
	volatile int64_t x354 = 21970LL;
	uint8_t x355 = UINT8_MAX;
	volatile uint64_t x356 = 127473LLU;
	static uint64_t t83 = 66624550304LLU;

	t83 = (((x353|x354)+x355)&x356);

	if (t83 != 127216LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x357 = -34;
	uint8_t x360 = 115U;
	int64_t t84 = 65719LL;

	t84 = (((x357|x358)+x359)&x360);

	if (t84 != 82LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x361 = 0U;
	volatile int16_t x363 = 0;
	static volatile uint8_t x364 = 0U;
	int32_t t85 = 6627;

	t85 = (((x361|x362)+x363)&x364);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x365 = 1;
	uint32_t x366 = 2U;
	int16_t x367 = INT16_MIN;
	uint16_t x368 = 2U;

	t86 = (((x365|x366)+x367)&x368);

	if (t86 != 2U) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x369 = 996931028851LLU;
	uint32_t x372 = UINT32_MAX;
	static uint64_t t87 = 61008948297LLU;

	t87 = (((x369|x370)+x371)&x372);

	if (t87 != 4294967294LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x377 = 41U;
	int16_t x378 = INT16_MIN;
	int32_t x379 = -5;
	int16_t x380 = -14;
	volatile int32_t t88 = -390;

	t88 = (((x377|x378)+x379)&x380);

	if (t88 != -32736) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x381 = INT64_MIN;
	int32_t x382 = -16337;
	uint64_t x384 = UINT64_MAX;
	volatile uint64_t t89 = 231LLU;

	t89 = (((x381|x382)+x383)&x384);

	if (t89 != 393958074LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x385 = 46;
	int8_t x386 = -1;
	int32_t x387 = -1;
	volatile uint32_t t90 = 126U;

	t90 = (((x385|x386)+x387)&x388);

	if (t90 != 90U) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int64_t x389 = -1LL;
	volatile int8_t x390 = -6;
	uint64_t x391 = UINT64_MAX;
	static int32_t x392 = INT32_MIN;
	uint64_t t91 = 3245690780247495LLU;

	t91 = (((x389|x390)+x391)&x392);

	if (t91 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x393 = INT32_MAX;
	static int64_t t92 = 7801900LL;

	t92 = (((x393|x394)+x395)&x396);

	if (t92 != 2147483646LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x400 = 934;
	volatile int32_t t93 = 3482;

	t93 = (((x397|x398)+x399)&x400);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x401 = 999619709171830LL;
	int16_t x402 = INT16_MAX;
	uint32_t x403 = 55U;
	volatile int32_t x404 = INT32_MIN;
	static int64_t t94 = 44660702114352LL;

	t94 = (((x401|x402)+x403)&x404);

	if (t94 != 999619278405632LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x407 = 49U;
	int64_t x408 = INT64_MAX;

	t95 = (((x405|x406)+x407)&x408);

	if (t95 != 48LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x409 = UINT16_MAX;
	int8_t x410 = INT8_MIN;
	int8_t x411 = 15;
	int64_t x412 = -1LL;
	volatile int64_t t96 = -13824565LL;

	t96 = (((x409|x410)+x411)&x412);

	if (t96 != 14LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x413 = INT32_MIN;
	int16_t x414 = -63;
	int8_t x415 = 8;
	uint32_t x416 = 623250U;
	volatile uint32_t t97 = 14393442U;

	t97 = (((x413|x414)+x415)&x416);

	if (t97 != 623232U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x417 = -23;
	volatile int32_t x418 = -1;
	int8_t x419 = INT8_MAX;
	static int32_t x420 = -1;

	t98 = (((x417|x418)+x419)&x420);

	if (t98 != 126) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x422 = UINT8_MAX;
	uint32_t x423 = 113357953U;
	uint8_t x424 = 3U;
	volatile uint32_t t99 = 881U;

	t99 = (((x421|x422)+x423)&x424);

	if (t99 != 0U) { NG(); } else { ; }
	
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

