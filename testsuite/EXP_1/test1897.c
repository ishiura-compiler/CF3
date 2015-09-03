#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x2 = INT16_MIN;
static uint16_t x3 = 6U;
volatile int8_t x7 = 36;
int64_t x9 = -747849301690790LL;
static int32_t x12 = 538914;
static int64_t t2 = -18827625208871LL;
int16_t x23 = INT16_MIN;
int32_t t4 = 4132093;
uint32_t t6 = 47308861U;
uint16_t x42 = 1U;
volatile uint64_t x44 = UINT64_MAX;
volatile int8_t x58 = INT8_MIN;
int64_t t11 = 465245993538LL;
int32_t x65 = -1;
int8_t x68 = INT8_MAX;
volatile int64_t t12 = -4280LL;
int8_t x69 = -1;
static uint64_t x76 = 5887910LLU;
uint64_t t14 = 355727894349389267LLU;
int16_t x79 = -5;
int8_t x91 = INT8_MAX;
uint16_t x95 = 0U;
static volatile int64_t x113 = INT64_MAX;
uint64_t x116 = 1918054073477253LLU;
int64_t x118 = INT64_MIN;
int64_t t23 = -56021770203737LL;
int64_t x127 = 432277LL;
int32_t x128 = INT32_MAX;
int64_t x130 = INT64_MIN;
int16_t x133 = INT16_MIN;
int16_t x134 = -1;
uint64_t t26 = 137628219216235LLU;
int16_t x142 = INT16_MIN;
uint16_t x149 = 323U;
int16_t x150 = INT16_MIN;
int32_t t28 = -706201;
int64_t x160 = 23360LL;
uint8_t x163 = UINT8_MAX;
int16_t x183 = INT16_MIN;
int16_t x188 = INT16_MIN;
uint64_t t34 = 3057882303906448LLU;
int16_t x189 = -6696;
int16_t x190 = 13;
static volatile int64_t x192 = -1045074053543771LL;
uint64_t x199 = 240599999194683269LLU;
static int32_t x200 = 3;
static volatile uint32_t x201 = 4549U;
volatile uint32_t t37 = 62496870U;
static int16_t x212 = 49;
uint32_t x220 = 9070U;
uint32_t x222 = 884446U;
int64_t x224 = INT64_MAX;
static volatile uint8_t x226 = UINT8_MAX;
static int32_t x236 = INT32_MAX;
int32_t x241 = -1472;
uint64_t x247 = UINT64_MAX;
int64_t x248 = INT64_MAX;
volatile uint32_t x253 = 1931620648U;
volatile int8_t x271 = INT8_MIN;
int32_t x277 = INT32_MIN;
int16_t x279 = -1;
int8_t x307 = INT8_MAX;
int64_t x315 = 30565LL;
volatile uint8_t x316 = 13U;
static int64_t x325 = -3754128392317245119LL;
int64_t x346 = -83683986446LL;
uint64_t x349 = UINT64_MAX;
static int64_t x351 = INT64_MIN;
uint64_t t64 = 70315586060585472LLU;
static uint32_t x357 = 1586705U;
int32_t x360 = INT32_MAX;
uint8_t x370 = 0U;
int64_t x372 = INT64_MAX;
int8_t x382 = INT8_MIN;
static uint32_t x385 = 81247U;
static int64_t x388 = -2690662208LL;
uint16_t x389 = 2U;
volatile int64_t x391 = -1LL;
int32_t x392 = -6152;
static int64_t x396 = INT64_MIN;
uint16_t x404 = UINT16_MAX;
uint8_t x405 = 0U;
int32_t x406 = INT32_MIN;
uint32_t x407 = UINT32_MAX;
int64_t t76 = INT64_MAX;
volatile int8_t x413 = INT8_MIN;
volatile int64_t t77 = 865220859553LL;
volatile uint32_t x420 = UINT32_MAX;
static volatile int32_t x421 = INT32_MAX;
int32_t x423 = -1;
volatile uint32_t t79 = 80487435U;
volatile int16_t x429 = INT16_MAX;
int64_t t83 = -391495LL;
volatile uint64_t t85 = 585356932224140LLU;
uint16_t x454 = 286U;
volatile int64_t t86 = 1483LL;
volatile uint64_t t88 = 0LLU;
int8_t x471 = -24;
int8_t x479 = -1;
int8_t x480 = INT8_MIN;
uint64_t t90 = 0LLU;
uint64_t t92 = 0LLU;
int32_t x500 = INT32_MIN;
volatile uint8_t x507 = UINT8_MAX;
volatile int32_t t94 = -2;
int64_t t95 = 244837528474763341LL;
static uint64_t x515 = UINT64_MAX;
volatile int32_t x518 = -1;
volatile int64_t t97 = 2LL;
static int8_t x521 = INT8_MIN;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int64_t x4 = -1LL;
	int64_t t0 = -57102LL;

	t0 = (((x1|x2)*x3)|x4);

	if (t0 != -1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = -1;
	int8_t x6 = -1;
	int8_t x8 = INT8_MAX;
	int32_t t1 = -334265;

	t1 = (((x5|x6)*x7)|x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x10 = 656;
	int8_t x11 = INT8_MAX;

	t2 = (((x9|x10)*x11)|x12);

	if (t2 != -94976861314187482LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 99U;
	int32_t x14 = INT32_MIN;
	uint64_t x15 = 2LLU;
	int64_t x16 = INT64_MAX;
	static uint64_t t3 = UINT64_MAX;

	t3 = (((x13|x14)*x15)|x16);

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -14;
	int32_t x22 = 1;
	int16_t x24 = INT16_MAX;

	t4 = (((x21|x22)*x23)|x24);

	if (t4 != 458751) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	int32_t x26 = -1;
	volatile int8_t x27 = INT8_MAX;
	static int16_t x28 = -3590;
	int32_t t5 = 2514;

	t5 = (((x25|x26)*x27)|x28);

	if (t5 != -5) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 207U;
	uint16_t x30 = 48U;
	int8_t x31 = 1;
	uint8_t x32 = 31U;

	t6 = (((x29|x30)*x31)|x32);

	if (t6 != 255U) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x33 = INT16_MAX;
	int8_t x34 = INT8_MIN;
	static volatile int16_t x35 = -2271;
	static int8_t x36 = INT8_MIN;
	int32_t t7 = 50188;

	t7 = (((x33|x34)*x35)|x36);

	if (t7 != -33) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x41 = -11309;
	static int16_t x43 = INT16_MAX;
	uint64_t t8 = UINT64_MAX;

	t8 = (((x41|x42)*x43)|x44);

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = -34;
	int64_t x46 = 1607237276LL;
	volatile int8_t x47 = -1;
	int32_t x48 = INT32_MIN;
	static int64_t t9 = -3731242876330458205LL;

	t9 = (((x45|x46)*x47)|x48);

	if (t9 != -2147483614LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x57 = -1;
	int64_t x59 = -1LL;
	int8_t x60 = 12;
	int64_t t10 = 1859LL;

	t10 = (((x57|x58)*x59)|x60);

	if (t10 != 13LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x61 = INT8_MAX;
	int8_t x62 = -1;
	int64_t x63 = -94LL;
	uint32_t x64 = 14U;

	t11 = (((x61|x62)*x63)|x64);

	if (t11 != 94LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x66 = -123468100;
	int64_t x67 = -1421672750703589822LL;

	t12 = (((x65|x66)*x67)|x68);

	if (t12 != 1421672750703589887LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x70 = INT64_MAX;
	uint32_t x71 = 202689208U;
	int32_t x72 = 1;
	int64_t t13 = -67040468LL;

	t13 = (((x69|x70)*x71)|x72);

	if (t13 != -202689207LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x73 = INT64_MIN;
	int8_t x74 = -1;
	static uint16_t x75 = UINT16_MAX;

	t14 = (((x73|x74)*x75)|x76);

	if (t14 != 18446744073709541287LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x77 = -1;
	static int8_t x78 = INT8_MAX;
	int64_t x80 = -7081402125592LL;
	static int64_t t15 = -1168153135784LL;

	t15 = (((x77|x78)*x79)|x80);

	if (t15 != -7081402125587LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x81 = INT64_MIN;
	int16_t x82 = INT16_MIN;
	int64_t x83 = -2300LL;
	int32_t x84 = -1;
	int64_t t16 = 63242586156LL;

	t16 = (((x81|x82)*x83)|x84);

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x89 = INT32_MAX;
	static uint32_t x90 = 422219187U;
	int16_t x92 = INT16_MIN;
	uint32_t t17 = 16U;

	t17 = (((x89|x90)*x91)|x92);

	if (t17 != 4294967169U) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x93 = INT16_MIN;
	static uint8_t x94 = 12U;
	int64_t x96 = INT64_MIN;
	int64_t t18 = INT64_MIN;

	t18 = (((x93|x94)*x95)|x96);

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x97 = INT32_MAX;
	int16_t x98 = INT16_MIN;
	uint64_t x99 = UINT64_MAX;
	static uint8_t x100 = 32U;
	static uint64_t t19 = 9699211335LLU;

	t19 = (((x97|x98)*x99)|x100);

	if (t19 != 33LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x101 = INT32_MAX;
	int16_t x102 = INT16_MIN;
	static uint32_t x103 = 202091U;
	static volatile int32_t x104 = INT32_MAX;
	volatile uint32_t t20 = UINT32_MAX;

	t20 = (((x101|x102)*x103)|x104);

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x109 = INT8_MAX;
	uint64_t x110 = 2004605057330343LLU;
	uint32_t x111 = 1018512U;
	volatile int64_t x112 = 540983392LL;
	volatile uint64_t t21 = 14727LLU;

	t21 = (((x109|x110)*x111)|x112);

	if (t21 != 12572458044220228976LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x114 = -1LL;
	uint16_t x115 = UINT16_MAX;
	volatile uint64_t t22 = 260827339243LLU;

	t22 = (((x113|x114)*x115)|x116);

	if (t22 != 18446744073709529221LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x117 = -1;
	int64_t x119 = -1LL;
	int32_t x120 = INT32_MIN;

	t23 = (((x117|x118)*x119)|x120);

	if (t23 != -2147483647LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x125 = INT32_MIN;
	int8_t x126 = 0;
	volatile int64_t t24 = -86997821608964LL;

	t24 = (((x125|x126)*x127)|x128);

	if (t24 != -928305641422849LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x129 = INT16_MAX;
	int16_t x131 = 1;
	uint16_t x132 = UINT16_MAX;
	volatile int64_t t25 = -28536LL;

	t25 = (((x129|x130)*x131)|x132);

	if (t25 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x135 = 1907443959412408185LLU;
	volatile int64_t x136 = -110194700LL;

	t26 = (((x133|x134)*x135)|x136);

	if (t26 != 18446744073632927735LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x141 = 12648U;
	int16_t x143 = INT16_MIN;
	volatile int8_t x144 = INT8_MAX;
	volatile int32_t t27 = 365212;

	t27 = (((x141|x142)*x143)|x144);

	if (t27 != 659292287) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int8_t x151 = INT8_MAX;
	uint8_t x152 = 23U;

	t28 = (((x149|x150)*x151)|x152);

	if (t28 != -4120513) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x153 = INT16_MAX;
	static int8_t x154 = -1;
	volatile int64_t x155 = -76527094849LL;
	uint16_t x156 = UINT16_MAX;
	volatile int64_t t29 = -5208LL;

	t29 = (((x153|x154)*x155)|x156);

	if (t29 != 76527108095LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint8_t x157 = UINT8_MAX;
	volatile int16_t x158 = INT16_MIN;
	uint8_t x159 = 44U;
	int64_t t30 = 4489274548948399LL;

	t30 = (((x157|x158)*x159)|x160);

	if (t30 != -1410092LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x161 = -1;
	int8_t x162 = INT8_MIN;
	int16_t x164 = -1;
	volatile int32_t t31 = 144375;

	t31 = (((x161|x162)*x163)|x164);

	if (t31 != -1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x165 = INT32_MIN;
	int32_t x166 = -1;
	volatile int8_t x167 = 1;
	uint32_t x168 = UINT32_MAX;
	static volatile uint32_t t32 = UINT32_MAX;

	t32 = (((x165|x166)*x167)|x168);

	if (t32 != UINT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x181 = INT8_MIN;
	static volatile uint8_t x182 = 60U;
	static uint32_t x184 = 3507446U;
	uint32_t t33 = 644U;

	t33 = (((x181|x182)*x183)|x184);

	if (t33 != 3638518U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x185 = UINT64_MAX;
	int64_t x186 = INT64_MAX;
	int32_t x187 = INT32_MIN;

	t34 = (((x185|x186)*x187)|x188);

	if (t34 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x191 = 2702630682723901697LLU;
	volatile uint64_t t35 = 11155102943538499LLU;

	t35 = (((x189|x190)*x191)|x192);

	if (t35 != 18446178508110490365LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x197 = 0U;
	int64_t x198 = INT64_MIN;
	uint64_t t36 = 6LLU;

	t36 = (((x197|x198)*x199)|x200);

	if (t36 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x202 = 1;
	static int32_t x203 = INT32_MIN;
	int8_t x204 = INT8_MIN;

	t37 = (((x201|x202)*x203)|x204);

	if (t37 != 4294967168U) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x205 = 499U;
	int32_t x206 = 52484132;
	int64_t x207 = 3330LL;
	int32_t x208 = INT32_MIN;
	volatile int64_t t38 = -229373554LL;

	t38 = (((x205|x206)*x207)|x208);

	if (t38 != -1319944466LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x209 = -7;
	static int32_t x210 = INT32_MIN;
	int64_t x211 = -161693122351682455LL;
	static int64_t t39 = 239313152697LL;

	t39 = (((x209|x210)*x211)|x212);

	if (t39 != 1131851856461777201LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x213 = INT8_MIN;
	uint16_t x214 = 4U;
	volatile int64_t x215 = -460195302966LL;
	uint8_t x216 = 28U;
	volatile int64_t t40 = -102696396654LL;

	t40 = (((x213|x214)*x215)|x216);

	if (t40 != 57064217567804LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x217 = 736U;
	int16_t x218 = INT16_MIN;
	uint16_t x219 = 6U;
	volatile uint32_t t41 = 5180026U;

	t41 = (((x217|x218)*x219)|x220);

	if (t41 != 4294783854U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x221 = -1;
	uint8_t x223 = 36U;
	int64_t t42 = INT64_MAX;

	t42 = (((x221|x222)*x223)|x224);

	if (t42 != INT64_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x225 = INT32_MAX;
	static uint64_t x227 = 7718957LLU;
	volatile int32_t x228 = INT32_MIN;
	static volatile uint64_t t43 = 1061011992358492073LLU;

	t43 = (((x225|x226)*x227)|x228);

	if (t43 != 18446744073701832659LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x229 = 230U;
	int8_t x230 = INT8_MAX;
	int8_t x231 = 1;
	volatile int16_t x232 = -1;
	volatile uint32_t t44 = UINT32_MAX;

	t44 = (((x229|x230)*x231)|x232);

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x233 = INT32_MIN;
	static int64_t x234 = -1LL;
	uint64_t x235 = 1219711765279155LLU;
	volatile uint64_t t45 = 58243245134610436LLU;

	t45 = (((x233|x234)*x235)|x236);

	if (t45 != 18445524363127029759LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x242 = INT16_MIN;
	int16_t x243 = INT16_MIN;
	int8_t x244 = -1;
	volatile int32_t t46 = -29;

	t46 = (((x241|x242)*x243)|x244);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x245 = INT8_MIN;
	int8_t x246 = -4;
	uint64_t t47 = 10LLU;

	t47 = (((x245|x246)*x247)|x248);

	if (t47 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x254 = -1;
	uint8_t x255 = 25U;
	static int8_t x256 = INT8_MIN;
	static uint32_t t48 = 860888U;

	t48 = (((x253|x254)*x255)|x256);

	if (t48 != 4294967271U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x257 = INT64_MIN;
	static uint64_t x258 = 15647800278765594LLU;
	int8_t x259 = 21;
	int64_t x260 = INT64_MAX;
	uint64_t t49 = UINT64_MAX;

	t49 = (((x257|x258)*x259)|x260);

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x261 = 3U;
	volatile int32_t x262 = 1;
	int16_t x263 = -1;
	static int32_t x264 = -523544004;
	int32_t t50 = -9867272;

	t50 = (((x261|x262)*x263)|x264);

	if (t50 != -3) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x269 = 2LLU;
	uint64_t x270 = 482916916546LLU;
	static int32_t x272 = INT32_MAX;
	volatile uint64_t t51 = 87102449977LLU;

	t51 = (((x269|x270)*x271)|x272);

	if (t51 != 18446682260540227583LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x273 = INT16_MIN;
	int64_t x274 = -325LL;
	int16_t x275 = -1;
	int16_t x276 = INT16_MIN;
	int64_t t52 = -7818308463656LL;

	t52 = (((x273|x274)*x275)|x276);

	if (t52 != -32443LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x278 = -1LL;
	uint8_t x280 = UINT8_MAX;
	volatile int64_t t53 = -43672023092261204LL;

	t53 = (((x277|x278)*x279)|x280);

	if (t53 != 255LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x281 = UINT64_MAX;
	int16_t x282 = -614;
	volatile uint32_t x283 = 18064U;
	uint32_t x284 = UINT32_MAX;
	uint64_t t54 = UINT64_MAX;

	t54 = (((x281|x282)*x283)|x284);

	if (t54 != UINT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x285 = INT32_MIN;
	int8_t x286 = -2;
	int64_t x287 = -1856502283LL;
	int8_t x288 = -1;
	volatile int64_t t55 = 131LL;

	t55 = (((x285|x286)*x287)|x288);

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x289 = -1;
	int32_t x290 = -6;
	int64_t x291 = -1LL;
	int8_t x292 = INT8_MIN;
	static int64_t t56 = 0LL;

	t56 = (((x289|x290)*x291)|x292);

	if (t56 != -127LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x305 = 27;
	int8_t x306 = 4;
	int16_t x308 = -27;
	int32_t t57 = 471410277;

	t57 = (((x305|x306)*x307)|x308);

	if (t57 != -27) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x309 = INT32_MIN;
	int64_t x310 = INT64_MAX;
	uint16_t x311 = 6146U;
	volatile int8_t x312 = -7;
	volatile int64_t t58 = -420087112133200LL;

	t58 = (((x309|x310)*x311)|x312);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x313 = 3464U;
	int16_t x314 = INT16_MIN;
	static volatile int64_t t59 = -71224703055866617LL;

	t59 = (((x313|x314)*x315)|x316);

	if (t59 != -895676755LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x317 = 33U;
	static volatile int8_t x318 = -1;
	volatile uint8_t x319 = 1U;
	int8_t x320 = INT8_MIN;
	int32_t t60 = -1643167;

	t60 = (((x317|x318)*x319)|x320);

	if (t60 != -1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x326 = -1;
	int16_t x327 = 757;
	uint16_t x328 = 1901U;
	static int64_t t61 = 767312539393163LL;

	t61 = (((x325|x326)*x327)|x328);

	if (t61 != -145LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x333 = 28819U;
	static int64_t x334 = -1LL;
	static int16_t x335 = -1;
	int64_t x336 = 825621346775LL;
	int64_t t62 = 16641368651195LL;

	t62 = (((x333|x334)*x335)|x336);

	if (t62 != 825621346775LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x345 = -2863;
	uint16_t x347 = 0U;
	uint64_t x348 = 48252LLU;
	static volatile uint64_t t63 = 11421833LLU;

	t63 = (((x345|x346)*x347)|x348);

	if (t63 != 48252LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x350 = -1LL;
	volatile int64_t x352 = INT64_MIN;

	t64 = (((x349|x350)*x351)|x352);

	if (t64 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x358 = INT8_MIN;
	static int8_t x359 = -1;
	uint32_t t65 = 149U;

	t65 = (((x357|x358)*x359)|x360);

	if (t65 != 2147483647U) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x361 = 2;
	static int8_t x362 = INT8_MIN;
	volatile uint8_t x363 = 3U;
	uint32_t x364 = UINT32_MAX;
	volatile uint32_t t66 = UINT32_MAX;

	t66 = (((x361|x362)*x363)|x364);

	if (t66 != UINT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x369 = INT16_MIN;
	uint8_t x371 = UINT8_MAX;
	volatile int64_t t67 = -116548875290LL;

	t67 = (((x369|x370)*x371)|x372);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x377 = INT32_MIN;
	uint16_t x378 = 2274U;
	uint16_t x379 = 0U;
	int8_t x380 = -1;
	int32_t t68 = -199238;

	t68 = (((x377|x378)*x379)|x380);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x381 = 9U;
	int64_t x383 = -26575167676LL;
	uint16_t x384 = UINT16_MAX;
	volatile int64_t t69 = 2LL;

	t69 = (((x381|x382)*x383)|x384);

	if (t69 != 3162444988415LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x386 = 2480024U;
	volatile uint32_t x387 = 90560587U;
	volatile int64_t t70 = -22494183433582624LL;

	t70 = (((x385|x386)*x387)|x388);

	if (t70 != -2153783595LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x390 = INT8_MAX;
	volatile int64_t t71 = -102219854875LL;

	t71 = (((x389|x390)*x391)|x392);

	if (t71 != -7LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x393 = 47U;
	static int16_t x394 = -1;
	volatile int64_t x395 = INT64_MAX;
	volatile int64_t t72 = 26LL;

	t72 = (((x393|x394)*x395)|x396);

	if (t72 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x397 = -1;
	uint16_t x398 = UINT16_MAX;
	static int16_t x399 = -1;
	int32_t x400 = -10623788;
	int32_t t73 = 211868;

	t73 = (((x397|x398)*x399)|x400);

	if (t73 != -10623787) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x401 = -58791890006LL;
	uint8_t x402 = 1U;
	int32_t x403 = -1;
	static int64_t t74 = -3745829231511345056LL;

	t74 = (((x401|x402)*x403)|x404);

	if (t74 != 58791952383LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x408 = -1;
	volatile uint32_t t75 = UINT32_MAX;

	t75 = (((x405|x406)*x407)|x408);

	if (t75 != UINT32_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x409 = INT16_MIN;
	int16_t x410 = INT16_MAX;
	uint32_t x411 = UINT32_MAX;
	int64_t x412 = INT64_MAX;

	t76 = (((x409|x410)*x411)|x412);

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x414 = INT64_MIN;
	int8_t x415 = -1;
	uint8_t x416 = 5U;

	t77 = (((x413|x414)*x415)|x416);

	if (t77 != 133LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x417 = UINT16_MAX;
	int16_t x418 = -1;
	uint16_t x419 = 8950U;
	static volatile uint32_t t78 = UINT32_MAX;

	t78 = (((x417|x418)*x419)|x420);

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x422 = 13156764U;
	volatile uint8_t x424 = UINT8_MAX;

	t79 = (((x421|x422)*x423)|x424);

	if (t79 != 2147483903U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x425 = INT32_MAX;
	static uint32_t x426 = UINT32_MAX;
	uint16_t x427 = 284U;
	uint32_t x428 = 1031552149U;
	static uint32_t t80 = 292U;

	t80 = (((x425|x426)*x427)|x428);

	if (t80 != 4294967029U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x430 = 1U;
	int16_t x431 = -1;
	uint8_t x432 = UINT8_MAX;
	int32_t t81 = 1;

	t81 = (((x429|x430)*x431)|x432);

	if (t81 != -32513) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x433 = 11608863994599885LLU;
	volatile int16_t x434 = -660;
	int16_t x435 = -1;
	uint32_t x436 = 1746501065U;
	volatile uint64_t t82 = 2489787784001LLU;

	t82 = (((x433|x434)*x435)|x436);

	if (t82 != 1746501595LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x437 = 2395769782245614LL;
	uint32_t x438 = UINT32_MAX;
	int16_t x439 = -1;
	volatile int32_t x440 = INT32_MIN;

	t83 = (((x437|x438)*x439)|x440);

	if (t83 != -2147483647LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x441 = INT8_MIN;
	int8_t x442 = -1;
	int8_t x443 = -14;
	static int32_t x444 = -1;
	int32_t t84 = 3258;

	t84 = (((x441|x442)*x443)|x444);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x449 = INT16_MIN;
	static volatile int32_t x450 = INT32_MIN;
	int8_t x451 = INT8_MIN;
	volatile uint64_t x452 = 348288045573178189LLU;

	t85 = (((x449|x450)*x451)|x452);

	if (t85 != 348288045573178189LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x453 = -1LL;
	uint8_t x455 = UINT8_MAX;
	int64_t x456 = -1620192818LL;

	t86 = (((x453|x454)*x455)|x456);

	if (t86 != -49LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x457 = 21880U;
	int16_t x458 = 1;
	static uint64_t x459 = 38365232845LLU;
	uint8_t x460 = 3U;
	volatile uint64_t t87 = 8184145740LLU;

	t87 = (((x457|x458)*x459)|x460);

	if (t87 != 839469659881447LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x465 = INT16_MIN;
	uint8_t x466 = UINT8_MAX;
	uint8_t x467 = 7U;
	uint64_t x468 = 7338888683393085037LLU;

	t88 = (((x465|x466)*x467)|x468);

	if (t88 != 18446744073709547261LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x469 = 47LL;
	uint8_t x470 = 42U;
	static uint16_t x472 = 17U;
	volatile int64_t t89 = -269753307008363652LL;

	t89 = (((x469|x470)*x471)|x472);

	if (t89 != -1127LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x477 = INT32_MAX;
	uint64_t x478 = 874419139303406LLU;

	t90 = (((x477|x478)*x479)|x480);

	if (t90 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x481 = 15962;
	int32_t x482 = -1;
	uint32_t x483 = 4U;
	int8_t x484 = INT8_MIN;
	static volatile uint32_t t91 = 12U;

	t91 = (((x481|x482)*x483)|x484);

	if (t91 != 4294967292U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x493 = INT32_MAX;
	uint64_t x494 = UINT64_MAX;
	int8_t x495 = INT8_MIN;
	int8_t x496 = INT8_MIN;

	t92 = (((x493|x494)*x495)|x496);

	if (t92 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x497 = -1;
	int64_t x498 = -278424486003184LL;
	int32_t x499 = -396860404;
	volatile int64_t t93 = -216264973LL;

	t93 = (((x497|x498)*x499)|x500);

	if (t93 != -1750623244LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x505 = INT16_MIN;
	int32_t x506 = INT32_MIN;
	uint16_t x508 = UINT16_MAX;

	t94 = (((x505|x506)*x507)|x508);

	if (t94 != -8323073) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x509 = 7664954U;
	volatile int64_t x510 = 15039642866717LL;
	int16_t x511 = 6;
	int16_t x512 = -1993;

	t95 = (((x509|x510)*x511)|x512);

	if (t95 != -129LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x513 = 56U;
	static int64_t x514 = INT64_MAX;
	volatile int64_t x516 = INT64_MIN;
	uint64_t t96 = 8874534585862353LLU;

	t96 = (((x513|x514)*x515)|x516);

	if (t96 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x517 = INT64_MIN;
	int16_t x519 = INT16_MAX;
	int16_t x520 = INT16_MAX;

	t97 = (((x517|x518)*x519)|x520);

	if (t97 != -1LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x522 = -1;
	int16_t x523 = -1;
	int32_t x524 = INT32_MIN;
	volatile int32_t t98 = 378565;

	t98 = (((x521|x522)*x523)|x524);

	if (t98 != -2147483647) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x525 = -2;
	int64_t x526 = -727LL;
	uint64_t x527 = 501615845481LLU;
	uint32_t x528 = 24727U;
	uint64_t t99 = 18LLU;

	t99 = (((x525|x526)*x527)|x528);

	if (t99 != 18446743572093730711LLU) { NG(); } else { ; }
	
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

