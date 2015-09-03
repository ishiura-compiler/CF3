#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t t1 = 7711351518087622LL;
uint32_t x18 = 51347U;
int64_t x21 = -1LL;
volatile uint32_t x30 = 55980457U;
int16_t x34 = 159;
int32_t x35 = 19612098;
volatile uint64_t t7 = UINT64_MAX;
int8_t x37 = INT8_MIN;
int32_t x38 = 0;
static int32_t x41 = -33329;
int32_t x51 = -1;
static uint8_t x52 = 1U;
static int64_t x55 = INT64_MIN;
uint64_t t13 = 23LLU;
static uint8_t x69 = UINT8_MAX;
static volatile uint16_t x72 = 31721U;
volatile int32_t x74 = INT32_MAX;
static int8_t x75 = INT8_MIN;
int8_t x79 = -1;
volatile int32_t t20 = -391;
uint8_t x97 = 3U;
uint8_t x99 = 3U;
uint8_t x100 = 4U;
volatile int32_t t23 = -5;
int32_t x101 = INT32_MIN;
int16_t x106 = INT16_MIN;
int8_t x107 = INT8_MIN;
int32_t x116 = INT32_MIN;
int8_t x118 = INT8_MIN;
volatile int64_t t28 = 6610482025LL;
int64_t x121 = -1LL;
uint16_t x130 = UINT16_MAX;
static uint64_t x131 = 9991378093031LLU;
uint32_t x134 = 364U;
int32_t x141 = INT32_MIN;
int16_t x142 = INT16_MIN;
int16_t x144 = -1;
uint8_t x149 = 22U;
int8_t x151 = -3;
int64_t t37 = 91117689296474LL;
int32_t x158 = INT32_MAX;
int8_t x163 = -1;
int32_t x168 = INT32_MIN;
static int32_t x179 = INT32_MAX;
volatile int8_t x182 = INT8_MAX;
int64_t x193 = INT64_MIN;
int16_t x197 = -1;
int8_t x204 = INT8_MAX;
int8_t x208 = -9;
uint8_t x211 = UINT8_MAX;
volatile int8_t x212 = INT8_MIN;
uint64_t t52 = 39346LLU;
int64_t t53 = 7038850188LL;
static int64_t x223 = 6739046LL;
static int32_t x229 = INT32_MIN;
volatile int32_t x232 = INT32_MAX;
uint8_t x236 = 97U;
int8_t x238 = 1;
static int16_t x239 = -1;
uint64_t t58 = UINT64_MAX;
int32_t x246 = 30854828;
volatile int64_t x249 = INT64_MAX;
static uint64_t x251 = 797540205839LLU;
static uint16_t x256 = 301U;
int16_t x260 = INT16_MIN;
static volatile uint8_t x264 = 3U;
volatile int64_t t64 = 4479405874334169324LL;
int64_t x272 = INT64_MAX;
int64_t x279 = INT64_MIN;
static int64_t t68 = 1618428LL;
int8_t x285 = INT8_MIN;
uint8_t x287 = 105U;
uint16_t x288 = 49U;
int32_t t74 = -33783;
int32_t x307 = -3165;
uint64_t x323 = UINT64_MAX;
uint16_t x324 = 5553U;
uint16_t x332 = 4U;
uint32_t x333 = UINT32_MAX;
int8_t x337 = INT8_MAX;
static uint8_t x339 = 7U;
int32_t t83 = 207;
int32_t x350 = INT32_MIN;
uint16_t x352 = 15U;
uint32_t x356 = 510608U;
int8_t x358 = INT8_MIN;
uint16_t x359 = 53U;
uint16_t x361 = 122U;
static volatile int32_t t92 = -3301888;
static int8_t x383 = INT8_MAX;
int8_t x384 = INT8_MIN;
int64_t x386 = -438LL;
int32_t x387 = INT32_MIN;
volatile int32_t x399 = 77;
int64_t x403 = INT64_MAX;
int64_t t98 = 2LL;
volatile uint16_t x410 = 28214U;
int8_t x411 = INT8_MAX;
int64_t x412 = INT64_MIN;


void f0(void) {
	uint16_t x1 = 6U;
	int8_t x2 = INT8_MIN;
	uint32_t x3 = UINT32_MAX;
	static uint16_t x4 = UINT16_MAX;
	volatile uint32_t t0 = UINT32_MAX;

	t0 = ((x1|(x2%x3))|x4);

	if (t0 != UINT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 12;
	int64_t x6 = -1LL;
	static int16_t x7 = -1;
	int64_t x8 = -1LL;

	t1 = ((x5|(x6%x7))|x8);

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x9 = INT8_MIN;
	int8_t x10 = INT8_MIN;
	volatile uint16_t x11 = 27293U;
	int8_t x12 = -1;
	int32_t t2 = -631342351;

	t2 = ((x9|(x10%x11))|x12);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	uint32_t x14 = 13U;
	volatile int8_t x15 = 14;
	int8_t x16 = INT8_MIN;
	uint32_t t3 = UINT32_MAX;

	t3 = ((x13|(x14%x15))|x16);

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	volatile int32_t x19 = INT32_MIN;
	int32_t x20 = 9461;
	int64_t t4 = -4395485700862LL;

	t4 = ((x17|(x18%x19))|x20);

	if (t4 != -9223372036854715145LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x22 = -1;
	int8_t x23 = INT8_MIN;
	uint32_t x24 = 5635793U;
	static volatile int64_t t5 = 0LL;

	t5 = ((x21|(x22%x23))|x24);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 6U;
	int64_t x31 = 1002LL;
	int16_t x32 = INT16_MIN;
	volatile int64_t t6 = -35LL;

	t6 = ((x29|(x30%x31))|x32);

	if (t6 != -32041LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = UINT64_MAX;
	static uint8_t x36 = UINT8_MAX;

	t7 = ((x33|(x34%x35))|x36);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x39 = 6235;
	int16_t x40 = INT16_MIN;
	int32_t t8 = 3044357;

	t8 = ((x37|(x38%x39))|x40);

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x42 = INT32_MIN;
	int32_t x43 = -3;
	static int32_t x44 = -1;
	int32_t t9 = 13;

	t9 = ((x41|(x42%x43))|x44);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x45 = 0U;
	int64_t x46 = INT64_MIN;
	int8_t x47 = INT8_MAX;
	int8_t x48 = 0;
	int64_t t10 = -138473864287030779LL;

	t10 = ((x45|(x46%x47))|x48);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = UINT16_MAX;
	int8_t x50 = INT8_MIN;
	static volatile int32_t t11 = -65;

	t11 = ((x49|(x50%x51))|x52);

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = UINT16_MAX;
	static uint32_t x54 = UINT32_MAX;
	int8_t x56 = 21;
	int64_t t12 = 5876764906642LL;

	t12 = ((x53|(x54%x55))|x56);

	if (t12 != 4294967295LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MIN;
	uint64_t x58 = 255LLU;
	int64_t x59 = 59394970285570299LL;
	int64_t x60 = -6382727011824LL;

	t13 = ((x57|(x58%x59))|x60);

	if (t13 != 18446744073709544191LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x61 = INT64_MIN;
	int8_t x62 = 7;
	static uint64_t x63 = 51LLU;
	int8_t x64 = INT8_MIN;
	static volatile uint64_t t14 = 733386683LLU;

	t14 = ((x61|(x62%x63))|x64);

	if (t14 != 18446744073709551495LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 792U;
	volatile int8_t x66 = -1;
	int8_t x67 = INT8_MIN;
	uint32_t x68 = 3737U;
	uint32_t t15 = UINT32_MAX;

	t15 = ((x65|(x66%x67))|x68);

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x70 = 2981920LL;
	uint64_t x71 = UINT64_MAX;
	uint64_t t16 = 940824037631327LLU;

	t16 = ((x69|(x70%x71))|x72);

	if (t16 != 3013631LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x73 = 0U;
	volatile uint8_t x76 = UINT8_MAX;
	volatile int32_t t17 = -16705126;

	t17 = ((x73|(x74%x75))|x76);

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = -25;
	int64_t x78 = -1LL;
	uint8_t x80 = 3U;
	volatile int64_t t18 = 5LL;

	t18 = ((x77|(x78%x79))|x80);

	if (t18 != -25LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x81 = 53U;
	volatile int32_t x82 = -141680446;
	int32_t x83 = -1;
	volatile int16_t x84 = INT16_MAX;
	static volatile int32_t t19 = 28;

	t19 = ((x81|(x82%x83))|x84);

	if (t19 != 32767) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x85 = 166;
	uint8_t x86 = 2U;
	volatile int32_t x87 = INT32_MAX;
	int8_t x88 = INT8_MAX;

	t20 = ((x85|(x86%x87))|x88);

	if (t20 != 255) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x89 = INT8_MIN;
	volatile uint64_t x90 = 34816699LLU;
	static int8_t x91 = -1;
	volatile uint32_t x92 = 129318U;
	uint64_t t21 = 11477675444790396LLU;

	t21 = ((x89|(x90%x91))|x92);

	if (t21 != 18446744073709551551LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x93 = 4U;
	static volatile int64_t x94 = INT64_MAX;
	static volatile int16_t x95 = -1;
	int16_t x96 = INT16_MIN;
	static volatile int64_t t22 = 107873227191LL;

	t22 = ((x93|(x94%x95))|x96);

	if (t22 != -32764LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x98 = INT32_MIN;

	t23 = ((x97|(x98%x99))|x100);

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x102 = 10124840;
	volatile int8_t x103 = INT8_MIN;
	int16_t x104 = -1;
	volatile int32_t t24 = 91074701;

	t24 = ((x101|(x102%x103))|x104);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x105 = 214290278101786LL;
	int64_t x108 = -8317608218011LL;
	int64_t t25 = -33775671283LL;

	t25 = ((x105|(x106%x107))|x108);

	if (t25 != -5568560385153LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = -15;
	static int32_t x110 = -1707258;
	static uint64_t x111 = 29096840825377339LLU;
	int32_t x112 = INT32_MIN;
	volatile uint64_t t26 = 34912978090LLU;

	t26 = ((x109|(x110%x111))|x112);

	if (t26 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = INT16_MIN;
	uint32_t x114 = UINT32_MAX;
	uint8_t x115 = 5U;
	static uint32_t t27 = 4999910U;

	t27 = ((x113|(x114%x115))|x116);

	if (t27 != 4294934528U) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x117 = 2U;
	int64_t x119 = INT64_MAX;
	int16_t x120 = INT16_MIN;

	t28 = ((x117|(x118%x119))|x120);

	if (t28 != -126LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x122 = 172LL;
	int16_t x123 = -1;
	int32_t x124 = -18517;
	volatile int64_t t29 = -352710LL;

	t29 = ((x121|(x122%x123))|x124);

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MAX;
	uint16_t x126 = UINT16_MAX;
	int8_t x127 = -1;
	int8_t x128 = INT8_MIN;
	volatile int64_t t30 = -7896507LL;

	t30 = ((x125|(x126%x127))|x128);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = INT8_MAX;
	uint64_t x132 = 29253504793868461LLU;
	volatile uint64_t t31 = 2077487LLU;

	t31 = ((x129|(x130%x131))|x132);

	if (t31 != 29253504793903103LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x133 = 291220076611414910LLU;
	volatile int32_t x135 = INT32_MIN;
	volatile int8_t x136 = INT8_MIN;
	volatile uint64_t t32 = 1354LLU;

	t32 = ((x133|(x134%x135))|x136);

	if (t32 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x137 = UINT16_MAX;
	static volatile uint8_t x138 = UINT8_MAX;
	static int32_t x139 = INT32_MIN;
	uint16_t x140 = 2942U;
	volatile int32_t t33 = -95;

	t33 = ((x137|(x138%x139))|x140);

	if (t33 != 65535) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x143 = -1;
	int32_t t34 = -1455505;

	t34 = ((x141|(x142%x143))|x144);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x145 = 13475LLU;
	static int64_t x146 = -433892949554340140LL;
	volatile int8_t x147 = 7;
	static volatile uint16_t x148 = 7602U;
	uint64_t t35 = UINT64_MAX;

	t35 = ((x145|(x146%x147))|x148);

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x150 = 6946093403LLU;
	uint64_t x152 = UINT64_MAX;
	uint64_t t36 = UINT64_MAX;

	t36 = ((x149|(x150%x151))|x152);

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = INT16_MIN;
	static int64_t x154 = INT64_MIN;
	uint32_t x155 = 58U;
	int32_t x156 = INT32_MAX;

	t37 = ((x153|(x154%x155))|x156);

	if (t37 != -1LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = -15;
	int8_t x159 = INT8_MIN;
	volatile int32_t x160 = -1;
	int32_t t38 = -3512832;

	t38 = ((x157|(x158%x159))|x160);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	static uint64_t x161 = 19645882608LLU;
	int32_t x162 = INT32_MIN;
	uint8_t x164 = 3U;
	static uint64_t t39 = 1770517968359468381LLU;

	t39 = ((x161|(x162%x163))|x164);

	if (t39 != 19645882611LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x165 = 841976748;
	volatile uint8_t x166 = 11U;
	uint64_t x167 = UINT64_MAX;
	static uint64_t t40 = 602LLU;

	t40 = ((x165|(x166%x167))|x168);

	if (t40 != 18446744072404044719LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x169 = -5122152LL;
	static int64_t x170 = INT64_MAX;
	static int32_t x171 = INT32_MIN;
	int64_t x172 = INT64_MIN;
	int64_t t41 = 40250227494LL;

	t41 = ((x169|(x170%x171))|x172);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x173 = 18;
	volatile uint16_t x174 = UINT16_MAX;
	volatile uint64_t x175 = 18540537498LLU;
	volatile uint64_t x176 = 3913236LLU;
	uint64_t t42 = 34LLU;

	t42 = ((x173|(x174%x175))|x176);

	if (t42 != 3932159LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x177 = INT16_MAX;
	int64_t x178 = 7326836889046372LL;
	int8_t x180 = INT8_MIN;
	volatile int64_t t43 = 2511905340818LL;

	t43 = ((x177|(x178%x179))|x180);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x181 = 2U;
	volatile uint16_t x183 = 119U;
	int8_t x184 = INT8_MAX;
	volatile uint32_t t44 = 105U;

	t44 = ((x181|(x182%x183))|x184);

	if (t44 != 127U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = INT32_MAX;
	int8_t x186 = INT8_MAX;
	static uint64_t x187 = 22764447493LLU;
	int64_t x188 = INT64_MIN;
	uint64_t t45 = 303LLU;

	t45 = ((x185|(x186%x187))|x188);

	if (t45 != 9223372039002259455LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = INT32_MIN;
	volatile int32_t x190 = INT32_MIN;
	volatile int32_t x191 = -1;
	int8_t x192 = INT8_MAX;
	volatile int32_t t46 = 2666;

	t46 = ((x189|(x190%x191))|x192);

	if (t46 != -2147483521) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x194 = -1;
	int32_t x195 = 256551972;
	uint16_t x196 = 1U;
	volatile int64_t t47 = 9070277LL;

	t47 = ((x193|(x194%x195))|x196);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x198 = 113U;
	int32_t x199 = INT32_MAX;
	int8_t x200 = -1;
	volatile int32_t t48 = -48811440;

	t48 = ((x197|(x198%x199))|x200);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = -49735;
	int32_t x202 = 0;
	uint64_t x203 = 11263490561LLU;
	static volatile uint64_t t49 = 92720LLU;

	t49 = ((x201|(x202%x203))|x204);

	if (t49 != 18446744073709501951LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x205 = 54766LL;
	static uint16_t x206 = 13059U;
	uint16_t x207 = 342U;
	volatile int64_t t50 = 32493LL;

	t50 = ((x205|(x206%x207))|x208);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x209 = -30;
	int16_t x210 = INT16_MIN;
	int32_t t51 = -935;

	t51 = ((x209|(x210%x211))|x212);

	if (t51 != -30) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x213 = 71571676;
	int64_t x214 = -593571LL;
	int16_t x215 = -1;
	uint64_t x216 = 1244864496293765916LLU;

	t52 = ((x213|(x214%x215))|x216);

	if (t52 != 1244864496297966556LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x217 = UINT16_MAX;
	int32_t x218 = INT32_MIN;
	int64_t x219 = INT64_MIN;
	volatile int8_t x220 = INT8_MIN;

	t53 = ((x217|(x218%x219))|x220);

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x221 = 25;
	static uint64_t x222 = UINT64_MAX;
	int64_t x224 = INT64_MIN;
	volatile uint64_t t54 = 6213641558323LLU;

	t54 = ((x221|(x222%x223))|x224);

	if (t54 != 9223372036860105757LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x225 = -1LL;
	volatile int16_t x226 = INT16_MIN;
	int32_t x227 = INT32_MIN;
	static uint16_t x228 = 462U;
	int64_t t55 = -23LL;

	t55 = ((x225|(x226%x227))|x228);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x230 = -7;
	int32_t x231 = -1;
	int32_t t56 = 0;

	t56 = ((x229|(x230%x231))|x232);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = INT8_MIN;
	volatile int32_t x234 = -73908;
	static int64_t x235 = -1LL;
	volatile int64_t t57 = -42244225696358786LL;

	t57 = ((x233|(x234%x235))|x236);

	if (t57 != -31LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = -1;
	uint64_t x240 = UINT64_MAX;

	t58 = ((x237|(x238%x239))|x240);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x241 = 12LLU;
	int64_t x242 = -148654039120LL;
	uint32_t x243 = 524481041U;
	uint8_t x244 = 116U;
	uint64_t t59 = 2825402145951572226LLU;

	t59 = ((x241|(x242%x243))|x244);

	if (t59 != 18446744073483647103LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x245 = INT16_MIN;
	static volatile int16_t x247 = INT16_MIN;
	int16_t x248 = INT16_MIN;
	int32_t t60 = 1;

	t60 = ((x245|(x246%x247))|x248);

	if (t60 != -12628) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x250 = 13384U;
	static int16_t x252 = INT16_MIN;
	uint64_t t61 = UINT64_MAX;

	t61 = ((x249|(x250%x251))|x252);

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x253 = -1;
	int32_t x254 = -1;
	uint8_t x255 = UINT8_MAX;
	int32_t t62 = -211761521;

	t62 = ((x253|(x254%x255))|x256);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x257 = UINT64_MAX;
	uint32_t x258 = UINT32_MAX;
	volatile int8_t x259 = INT8_MAX;
	volatile uint64_t t63 = UINT64_MAX;

	t63 = ((x257|(x258%x259))|x260);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x261 = UINT32_MAX;
	volatile uint32_t x262 = UINT32_MAX;
	static int64_t x263 = -1LL;

	t64 = ((x261|(x262%x263))|x264);

	if (t64 != 4294967295LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x265 = UINT16_MAX;
	static int32_t x266 = INT32_MIN;
	volatile int64_t x267 = INT64_MIN;
	int8_t x268 = 12;
	volatile int64_t t65 = 672576LL;

	t65 = ((x265|(x266%x267))|x268);

	if (t65 != -2147418113LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x269 = INT32_MIN;
	int16_t x270 = -1;
	uint32_t x271 = 2088720934U;
	volatile int64_t t66 = INT64_MAX;

	t66 = ((x269|(x270%x271))|x272);

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x273 = -374996577;
	int32_t x274 = -3953;
	static int8_t x275 = INT8_MIN;
	static uint16_t x276 = 4U;
	int32_t t67 = 17;

	t67 = ((x273|(x274%x275))|x276);

	if (t67 != -97) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x277 = UINT16_MAX;
	volatile int64_t x278 = 13584LL;
	static volatile uint32_t x280 = UINT32_MAX;

	t68 = ((x277|(x278%x279))|x280);

	if (t68 != 4294967295LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x281 = -1LL;
	volatile int32_t x282 = INT32_MIN;
	static int64_t x283 = -361LL;
	int8_t x284 = INT8_MIN;
	int64_t t69 = -2901LL;

	t69 = ((x281|(x282%x283))|x284);

	if (t69 != -1LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x286 = INT16_MIN;
	int32_t t70 = 1;

	t70 = ((x285|(x286%x287))|x288);

	if (t70 != -7) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x289 = UINT64_MAX;
	static int64_t x290 = INT64_MIN;
	int64_t x291 = -4807462825809LL;
	uint16_t x292 = UINT16_MAX;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = ((x289|(x290%x291))|x292);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x293 = -1;
	static int32_t x294 = INT32_MIN;
	static volatile int32_t x295 = INT32_MIN;
	int64_t x296 = INT64_MIN;
	volatile int64_t t72 = -314683668755LL;

	t72 = ((x293|(x294%x295))|x296);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x297 = INT16_MIN;
	volatile int8_t x298 = -1;
	volatile uint32_t x299 = 3U;
	int16_t x300 = -5481;
	volatile uint32_t t73 = 220722544U;

	t73 = ((x297|(x298%x299))|x300);

	if (t73 != 4294961815U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x301 = 245U;
	int8_t x302 = -1;
	static uint8_t x303 = UINT8_MAX;
	volatile int16_t x304 = INT16_MIN;

	t74 = ((x301|(x302%x303))|x304);

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x305 = -7643701881345LL;
	volatile int32_t x306 = INT32_MAX;
	static volatile uint16_t x308 = UINT16_MAX;
	volatile int64_t t75 = -3051673046LL;

	t75 = ((x305|(x306%x307))|x308);

	if (t75 != -7643701837825LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x309 = INT16_MIN;
	volatile int32_t x310 = INT32_MIN;
	volatile int16_t x311 = 25;
	volatile int16_t x312 = 241;
	static volatile int32_t t76 = -16166;

	t76 = ((x309|(x310%x311))|x312);

	if (t76 != -7) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x313 = 110785812LLU;
	static int16_t x314 = -132;
	int8_t x315 = INT8_MAX;
	uint32_t x316 = UINT32_MAX;
	volatile uint64_t t77 = UINT64_MAX;

	t77 = ((x313|(x314%x315))|x316);

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x317 = INT8_MIN;
	uint8_t x318 = 26U;
	volatile int16_t x319 = -61;
	static int8_t x320 = -7;
	static volatile int32_t t78 = 34149983;

	t78 = ((x317|(x318%x319))|x320);

	if (t78 != -5) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x321 = UINT64_MAX;
	int64_t x322 = INT64_MIN;
	uint64_t t79 = UINT64_MAX;

	t79 = ((x321|(x322%x323))|x324);

	if (t79 != UINT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile uint8_t x325 = 3U;
	int8_t x326 = INT8_MIN;
	uint32_t x327 = UINT32_MAX;
	uint32_t x328 = UINT32_MAX;
	uint32_t t80 = UINT32_MAX;

	t80 = ((x325|(x326%x327))|x328);

	if (t80 != UINT32_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x329 = 8U;
	int64_t x330 = INT64_MIN;
	int32_t x331 = INT32_MIN;
	int64_t t81 = 8105922623803LL;

	t81 = ((x329|(x330%x331))|x332);

	if (t81 != 12LL) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int8_t x334 = INT8_MIN;
	static uint32_t x335 = 240U;
	static volatile int32_t x336 = -1;
	uint32_t t82 = UINT32_MAX;

	t82 = ((x333|(x334%x335))|x336);

	if (t82 != UINT32_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x338 = 33U;
	int8_t x340 = 55;

	t83 = ((x337|(x338%x339))|x340);

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x341 = 0;
	int16_t x342 = INT16_MIN;
	int8_t x343 = -1;
	static uint64_t x344 = UINT64_MAX;
	volatile uint64_t t84 = UINT64_MAX;

	t84 = ((x341|(x342%x343))|x344);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x345 = -1;
	volatile uint32_t x346 = UINT32_MAX;
	int64_t x347 = INT64_MIN;
	volatile int8_t x348 = INT8_MIN;
	int64_t t85 = -44LL;

	t85 = ((x345|(x346%x347))|x348);

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x349 = INT32_MIN;
	int64_t x351 = INT64_MAX;
	volatile int64_t t86 = -114716LL;

	t86 = ((x349|(x350%x351))|x352);

	if (t86 != -2147483633LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x353 = INT32_MIN;
	int16_t x354 = INT16_MIN;
	int32_t x355 = INT32_MAX;
	volatile uint32_t t87 = 9U;

	t87 = ((x353|(x354%x355))|x356);

	if (t87 != 4294953616U) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x357 = 325762LLU;
	uint64_t x360 = UINT64_MAX;
	volatile uint64_t t88 = UINT64_MAX;

	t88 = ((x357|(x358%x359))|x360);

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x362 = 2U;
	volatile uint16_t x363 = 656U;
	int32_t x364 = -1;
	uint32_t t89 = UINT32_MAX;

	t89 = ((x361|(x362%x363))|x364);

	if (t89 != UINT32_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x365 = INT16_MIN;
	static int64_t x366 = -4356243639026186LL;
	int16_t x367 = INT16_MIN;
	volatile int8_t x368 = -1;
	int64_t t90 = -284968267773526247LL;

	t90 = ((x365|(x366%x367))|x368);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x369 = 478092050U;
	volatile int32_t x370 = -94257;
	int64_t x371 = -2560121LL;
	static int64_t x372 = INT64_MAX;
	int64_t t91 = 1045896209LL;

	t91 = ((x369|(x370%x371))|x372);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x373 = INT16_MAX;
	static int16_t x374 = 6168;
	static int16_t x375 = INT16_MIN;
	static int16_t x376 = INT16_MAX;

	t92 = ((x373|(x374%x375))|x376);

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x377 = -231868336LL;
	volatile int8_t x378 = INT8_MIN;
	int64_t x379 = 16636078566459248LL;
	static int16_t x380 = -1;
	int64_t t93 = 11LL;

	t93 = ((x377|(x378%x379))|x380);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x381 = 103065U;
	int8_t x382 = INT8_MAX;
	uint32_t t94 = 1U;

	t94 = ((x381|(x382%x383))|x384);

	if (t94 != 4294967193U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x385 = INT32_MIN;
	uint8_t x388 = UINT8_MAX;
	int64_t t95 = -22189830221401988LL;

	t95 = ((x385|(x386%x387))|x388);

	if (t95 != -257LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x393 = -17;
	static int32_t x394 = 50166;
	uint32_t x395 = 1390578216U;
	volatile int8_t x396 = -9;
	uint32_t t96 = UINT32_MAX;

	t96 = ((x393|(x394%x395))|x396);

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x397 = 4431576089LLU;
	int64_t x398 = 262240099659901403LL;
	int8_t x400 = INT8_MIN;
	volatile uint64_t t97 = 863907896201851LLU;

	t97 = ((x397|(x398%x399))|x400);

	if (t97 != 18446744073709551545LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile uint8_t x401 = 9U;
	uint32_t x402 = UINT32_MAX;
	volatile uint16_t x404 = 6U;

	t98 = ((x401|(x402%x403))|x404);

	if (t98 != 4294967295LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x409 = -438LL;
	volatile int64_t t99 = 6347241884LL;

	t99 = ((x409|(x410%x411))|x412);

	if (t99 != -418LL) { NG(); } else { ; }
	
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

