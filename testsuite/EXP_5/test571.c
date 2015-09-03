#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MAX;
uint64_t x11 = 188LLU;
int16_t x14 = INT16_MIN;
volatile int32_t t3 = 3094026;
int8_t x19 = INT8_MIN;
volatile int64_t t4 = 687946751681LL;
static int64_t x25 = INT64_MIN;
uint64_t t6 = 143LLU;
static int64_t x38 = 1861570LL;
static uint32_t x39 = UINT32_MAX;
uint64_t x44 = 3494034LLU;
int16_t x45 = 14722;
uint16_t x47 = 60U;
uint16_t x49 = UINT16_MAX;
int16_t x51 = INT16_MIN;
volatile uint32_t t12 = 1125340U;
volatile uint16_t x57 = UINT16_MAX;
uint16_t x58 = UINT16_MAX;
int8_t x63 = INT8_MAX;
int64_t x72 = -1LL;
int64_t t17 = -3394308571720961565LL;
uint32_t x74 = 364U;
volatile int64_t x81 = -8907455508573993LL;
volatile int8_t x94 = INT8_MIN;
static int64_t x95 = -110711038616LL;
int64_t t24 = -26LL;
int16_t x108 = INT16_MIN;
int32_t x109 = INT32_MIN;
uint16_t x110 = 2031U;
volatile int64_t x114 = INT64_MIN;
volatile int64_t t28 = 1239LL;
uint64_t x121 = UINT64_MAX;
int32_t x124 = -56099003;
static uint16_t x127 = 1454U;
uint32_t x129 = 18850226U;
static volatile uint64_t x132 = 674465107401195383LLU;
static uint8_t x136 = UINT8_MAX;
static volatile uint64_t t33 = 10182855LLU;
static int64_t x143 = -1LL;
static volatile int16_t x144 = -87;
static int16_t x150 = -1;
int32_t x151 = INT32_MIN;
static int8_t x155 = -1;
int64_t x156 = INT64_MIN;
volatile uint64_t x160 = 4733361671845LLU;
int64_t x167 = -1LL;
static int32_t x168 = INT32_MIN;
int16_t x172 = 585;
int8_t x173 = INT8_MIN;
static volatile int16_t x178 = -15;
uint16_t x180 = UINT16_MAX;
volatile int32_t t43 = 1082122;
int8_t x186 = 9;
static int8_t x187 = 56;
uint32_t x193 = 564743119U;
int16_t x195 = 692;
int8_t x196 = 3;
uint32_t x200 = 3429896U;
static uint64_t x202 = 16144651LLU;
int8_t x203 = -52;
int16_t x205 = INT16_MIN;
int64_t x211 = -1LL;
volatile int8_t x218 = INT8_MAX;
uint8_t x222 = 107U;
uint32_t t54 = 7631U;
uint16_t x228 = UINT16_MAX;
int64_t x234 = INT64_MAX;
static int16_t x238 = -1;
uint8_t x241 = 16U;
uint64_t t59 = 692245338137477LLU;
int8_t x246 = INT8_MIN;
volatile int64_t t60 = 827LL;
static int32_t x251 = -1;
int8_t x255 = INT8_MIN;
static int64_t t63 = INT64_MIN;
int32_t x265 = INT32_MAX;
uint16_t x266 = 302U;
int16_t x276 = INT16_MIN;
int16_t x278 = -1;
uint32_t x282 = UINT32_MAX;
volatile uint32_t t68 = 1199U;
uint32_t x291 = UINT32_MAX;
int16_t x292 = -1;
int8_t x293 = INT8_MIN;
uint64_t x305 = 269042851LLU;
uint16_t x307 = UINT16_MAX;
int64_t x314 = 13LL;
int32_t x322 = INT32_MIN;
int32_t t77 = -391;
volatile uint64_t t78 = 125621776356LLU;
static int32_t x338 = INT32_MIN;
volatile int64_t t80 = INT64_MIN;
int8_t x343 = INT8_MIN;
volatile int64_t x350 = -38805LL;
int8_t x351 = -1;
uint32_t x357 = UINT32_MAX;
int32_t x358 = 1;
int16_t x360 = -1;
volatile uint32_t t85 = UINT32_MAX;
int32_t x366 = INT32_MIN;
uint16_t x368 = 1932U;
static int64_t x370 = INT64_MIN;
uint32_t x379 = 6908U;
int64_t x389 = INT64_MIN;
static uint32_t x398 = UINT32_MAX;
int32_t x399 = -1;
uint32_t x400 = 240552U;
int16_t x402 = 54;
int32_t t96 = 1;
int16_t x409 = INT16_MAX;
int16_t x416 = 123;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	uint32_t x2 = UINT32_MAX;
	uint32_t x3 = 803618250U;
	static uint64_t x4 = 229010469LLU;
	volatile uint64_t t0 = 515691863220912LLU;

	t0 = (x1|((x2/x3)%x4));

	if (t0 != 18446744073709518853LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x6 = -4;
	int16_t x7 = -1;
	int32_t x8 = INT32_MAX;
	int32_t t1 = -8980;

	t1 = (x5|((x6/x7)%x8));

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 21;
	uint32_t x10 = 5U;
	uint16_t x12 = UINT16_MAX;
	volatile uint64_t t2 = 10290914396779LLU;

	t2 = (x9|((x10/x11)%x12));

	if (t2 != 21LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int32_t x15 = -416;
	volatile int8_t x16 = -1;

	t3 = (x13|((x14/x15)%x16));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = INT64_MIN;
	static volatile int64_t x18 = -46559289295260767LL;
	uint16_t x20 = UINT16_MAX;

	t4 = (x17|((x18/x19)%x20));

	if (t4 != -9223372036854774269LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 4842U;
	uint32_t x22 = UINT32_MAX;
	int8_t x23 = -1;
	int16_t x24 = INT16_MIN;
	static uint32_t t5 = 39443U;

	t5 = (x21|((x22/x23)%x24));

	if (t5 != 4843U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x26 = 0U;
	uint32_t x27 = UINT32_MAX;
	uint64_t x28 = 135431735744135LLU;

	t6 = (x25|((x26/x27)%x28));

	if (t6 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	static int32_t x30 = -1;
	static int8_t x31 = -31;
	volatile int8_t x32 = -14;
	uint64_t t7 = UINT64_MAX;

	t7 = (x29|((x30/x31)%x32));

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1351;
	static int64_t x34 = -1LL;
	int8_t x35 = INT8_MAX;
	uint8_t x36 = 126U;
	int64_t t8 = -206LL;

	t8 = (x33|((x34/x35)%x36));

	if (t8 != -1351LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	int64_t x40 = -26LL;
	int64_t t9 = -243919579LL;

	t9 = (x37|((x38/x39)%x40));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	int8_t x42 = INT8_MAX;
	int64_t x43 = INT64_MAX;
	uint64_t t10 = 1306140678559638LLU;

	t10 = (x41|((x42/x43)%x44));

	if (t10 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x46 = 63LLU;
	volatile int32_t x48 = INT32_MIN;
	static uint64_t t11 = 17791601LLU;

	t11 = (x45|((x46/x47)%x48));

	if (t11 != 14723LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = UINT32_MAX;
	volatile uint16_t x52 = UINT16_MAX;

	t12 = (x49|((x50/x51)%x52));

	if (t12 != 65535U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x53 = UINT16_MAX;
	volatile int16_t x54 = 9;
	int64_t x55 = INT64_MAX;
	static int8_t x56 = INT8_MIN;
	int64_t t13 = 811844335294LL;

	t13 = (x53|((x54/x55)%x56));

	if (t13 != 65535LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x59 = INT32_MIN;
	static int64_t x60 = 581224252808LL;
	int64_t t14 = 415568LL;

	t14 = (x57|((x58/x59)%x60));

	if (t14 != 65535LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MAX;
	uint16_t x62 = UINT16_MAX;
	int16_t x64 = -1;
	int32_t t15 = INT32_MAX;

	t15 = (x61|((x62/x63)%x64));

	if (t15 != INT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x65 = 1014604370895LLU;
	uint32_t x66 = 721806834U;
	static int8_t x67 = -1;
	int8_t x68 = 1;
	volatile uint64_t t16 = 118636LLU;

	t16 = (x65|((x66/x67)%x68));

	if (t16 != 1014604370895LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -2710013167851406LL;
	volatile int16_t x70 = INT16_MIN;
	int64_t x71 = INT64_MAX;

	t17 = (x69|((x70/x71)%x72));

	if (t17 != -2710013167851406LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 6U;
	uint64_t x75 = 60LLU;
	static volatile uint32_t x76 = 279U;
	uint64_t t18 = 169534588LLU;

	t18 = (x73|((x74/x75)%x76));

	if (t18 != 6LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -11;
	static uint8_t x78 = 50U;
	static uint16_t x79 = 870U;
	int32_t x80 = INT32_MIN;
	volatile int32_t t19 = -64;

	t19 = (x77|((x78/x79)%x80));

	if (t19 != -11) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x82 = UINT8_MAX;
	int8_t x83 = INT8_MIN;
	uint64_t x84 = 640942LLU;
	uint64_t t20 = 99LLU;

	t20 = (x81|((x82/x83)%x84));

	if (t20 != 18437836618201027551LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 13U;
	static int32_t x86 = -1;
	int16_t x87 = -1;
	int8_t x88 = INT8_MIN;
	static int32_t t21 = -164563632;

	t21 = (x85|((x86/x87)%x88));

	if (t21 != 13) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = UINT32_MAX;
	static int8_t x90 = INT8_MAX;
	uint8_t x91 = 1U;
	int32_t x92 = INT32_MAX;
	uint32_t t22 = UINT32_MAX;

	t22 = (x89|((x90/x91)%x92));

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -1;
	int32_t x96 = INT32_MIN;
	static int64_t t23 = -17650855LL;

	t23 = (x93|((x94/x95)%x96));

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = 1069641740045016650LL;
	int32_t x98 = INT32_MAX;
	uint16_t x99 = 260U;
	int8_t x100 = INT8_MIN;

	t24 = (x97|((x98/x99)%x100));

	if (t24 != 1069641740045016682LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MAX;
	volatile uint64_t x102 = 14167641329LLU;
	uint8_t x103 = 94U;
	volatile int16_t x104 = -1;
	volatile uint64_t t25 = 81149669736060972LLU;

	t25 = (x101|((x102/x103)%x104));

	if (t25 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	int64_t x106 = -1LL;
	int32_t x107 = 49;
	int64_t t26 = INT64_MIN;

	t26 = (x105|((x106/x107)%x108));

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x111 = INT32_MIN;
	int16_t x112 = INT16_MIN;
	int32_t t27 = INT32_MIN;

	t27 = (x109|((x110/x111)%x112));

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	volatile int32_t x115 = INT32_MAX;
	int8_t x116 = 9;

	t28 = (x113|((x114/x115)%x116));

	if (t28 != -6LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x122 = 40U;
	uint16_t x123 = 173U;
	volatile uint64_t t29 = UINT64_MAX;

	t29 = (x121|((x122/x123)%x124));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x125 = -1;
	int64_t x126 = INT64_MIN;
	int16_t x128 = -71;
	volatile int64_t t30 = -2179607LL;

	t30 = (x125|((x126/x127)%x128));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x130 = 160U;
	int16_t x131 = 135;
	volatile uint64_t t31 = 11913850362529043LLU;

	t31 = (x129|((x130/x131)%x132));

	if (t31 != 18850227LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x133 = 37;
	static volatile int64_t x134 = INT64_MIN;
	static int8_t x135 = 1;
	volatile int64_t t32 = 248299691LL;

	t32 = (x133|((x134/x135)%x136));

	if (t32 != -91LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MIN;
	static uint16_t x138 = UINT16_MAX;
	volatile uint64_t x139 = 185749149496078LLU;
	int16_t x140 = INT16_MIN;

	t33 = (x137|((x138/x139)%x140));

	if (t33 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = INT16_MIN;
	uint8_t x142 = UINT8_MAX;
	volatile int64_t t34 = 735246646LL;

	t34 = (x141|((x142/x143)%x144));

	if (t34 != -81LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x145 = 255687LLU;
	uint8_t x146 = 87U;
	uint32_t x147 = 958U;
	int64_t x148 = INT64_MIN;
	uint64_t t35 = 1604511869305147LLU;

	t35 = (x145|((x146/x147)%x148));

	if (t35 != 255687LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x149 = UINT16_MAX;
	int8_t x152 = 1;
	int32_t t36 = -7;

	t36 = (x149|((x150/x151)%x152));

	if (t36 != 65535) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x153 = UINT16_MAX;
	uint64_t x154 = UINT64_MAX;
	uint64_t t37 = 36715330LLU;

	t37 = (x153|((x154/x155)%x156));

	if (t37 != 65535LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x157 = -43;
	int16_t x158 = -243;
	int64_t x159 = 21278982251428LL;
	volatile uint64_t t38 = 7138245749617LLU;

	t38 = (x157|((x158/x159)%x160));

	if (t38 != 18446744073709551573LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x161 = 7573704377785452LLU;
	int64_t x162 = 1543712408230LL;
	static int64_t x163 = INT64_MAX;
	int64_t x164 = INT64_MIN;
	uint64_t t39 = 198816LLU;

	t39 = (x161|((x162/x163)%x164));

	if (t39 != 7573704377785452LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x165 = 1821136141043132LLU;
	static volatile int8_t x166 = INT8_MAX;
	volatile uint64_t t40 = 40708819LLU;

	t40 = (x165|((x166/x167)%x168));

	if (t40 != 18446744073709551549LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x169 = 1538865969U;
	static int32_t x170 = INT32_MIN;
	int16_t x171 = INT16_MAX;
	static uint32_t t41 = UINT32_MAX;

	t41 = (x169|((x170/x171)%x172));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x174 = 170U;
	volatile uint8_t x175 = UINT8_MAX;
	uint64_t x176 = 6731220812029LLU;
	uint64_t t42 = 864592125347240LLU;

	t42 = (x173|((x174/x175)%x176));

	if (t42 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x177 = -1;
	int32_t x179 = INT32_MIN;

	t43 = (x177|((x178/x179)%x180));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x181 = -1;
	int32_t x182 = -2021;
	int32_t x183 = -1;
	static volatile uint16_t x184 = 250U;
	volatile int32_t t44 = 28515;

	t44 = (x181|((x182/x183)%x184));

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x185 = INT8_MIN;
	int64_t x188 = INT64_MIN;
	volatile int64_t t45 = 1908697124LL;

	t45 = (x185|((x186/x187)%x188));

	if (t45 != -128LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = -1;
	uint16_t x190 = 4U;
	volatile uint16_t x191 = 49U;
	static int32_t x192 = 7;
	int32_t t46 = -3335;

	t46 = (x189|((x190/x191)%x192));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x194 = INT64_MIN;
	static volatile int64_t t47 = -1504LL;

	t47 = (x193|((x194/x195)%x196));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x197 = -1;
	static int64_t x198 = -46076LL;
	int64_t x199 = 19363283790680LL;
	volatile int64_t t48 = -29306LL;

	t48 = (x197|((x198/x199)%x200));

	if (t48 != -1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x201 = 6U;
	uint8_t x204 = 1U;
	volatile uint64_t t49 = 64787LLU;

	t49 = (x201|((x202/x203)%x204));

	if (t49 != 6LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x206 = 7128933LLU;
	int32_t x207 = -49158548;
	int64_t x208 = -1LL;
	uint64_t t50 = 6628358277LLU;

	t50 = (x205|((x206/x207)%x208));

	if (t50 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x209 = 63274469463LLU;
	static int64_t x210 = -28482946972389307LL;
	volatile int32_t x212 = 57995910;
	uint64_t t51 = 358554141480441LLU;

	t51 = (x209|((x210/x211)%x212));

	if (t51 != 63275006975LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = INT32_MIN;
	volatile uint32_t x214 = 6937U;
	int64_t x215 = 423611823LL;
	static int64_t x216 = -271595358157173465LL;
	int64_t t52 = 15403779126977LL;

	t52 = (x213|((x214/x215)%x216));

	if (t52 != -2147483648LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int32_t x217 = INT32_MIN;
	static int32_t x219 = INT32_MIN;
	int8_t x220 = INT8_MIN;
	int32_t t53 = INT32_MIN;

	t53 = (x217|((x218/x219)%x220));

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x221 = 452532505U;
	volatile int16_t x223 = INT16_MIN;
	uint32_t x224 = 124524782U;

	t54 = (x221|((x222/x223)%x224));

	if (t54 != 452532505U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = INT16_MAX;
	int8_t x226 = -1;
	int16_t x227 = INT16_MIN;
	int32_t t55 = 762303;

	t55 = (x225|((x226/x227)%x228));

	if (t55 != 32767) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = 13210230;
	int64_t x230 = -14881693951851131LL;
	int64_t x231 = INT64_MIN;
	int16_t x232 = INT16_MIN;
	int64_t t56 = 690985781LL;

	t56 = (x229|((x230/x231)%x232));

	if (t56 != 13210230LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = INT64_MAX;
	volatile uint64_t x235 = 2349650136245682LLU;
	static uint16_t x236 = 418U;
	static uint64_t t57 = 7324796003LLU;

	t57 = (x233|((x234/x235)%x236));

	if (t57 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = INT16_MAX;
	volatile int64_t x239 = -1LL;
	uint8_t x240 = 31U;
	int64_t t58 = 28586LL;

	t58 = (x237|((x238/x239)%x240));

	if (t58 != 32767LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x242 = UINT64_MAX;
	volatile int16_t x243 = INT16_MIN;
	int8_t x244 = INT8_MAX;

	t59 = (x241|((x242/x243)%x244));

	if (t59 != 17LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x245 = INT64_MAX;
	int8_t x247 = 1;
	static int32_t x248 = INT32_MIN;

	t60 = (x245|((x246/x247)%x248));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x249 = 305792026192LLU;
	static volatile int64_t x250 = -1052527588749679640LL;
	int8_t x252 = INT8_MAX;
	volatile uint64_t t61 = 43057688942LLU;

	t61 = (x249|((x250/x251)%x252));

	if (t61 != 305792026203LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x253 = INT64_MAX;
	int64_t x254 = -1LL;
	uint16_t x256 = UINT16_MAX;
	int64_t t62 = INT64_MAX;

	t62 = (x253|((x254/x255)%x256));

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x257 = INT64_MIN;
	int16_t x258 = INT16_MIN;
	volatile uint16_t x259 = UINT16_MAX;
	int64_t x260 = INT64_MIN;

	t63 = (x257|((x258/x259)%x260));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x267 = INT64_MIN;
	volatile int8_t x268 = -1;
	int64_t t64 = -2LL;

	t64 = (x265|((x266/x267)%x268));

	if (t64 != 2147483647LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x269 = INT32_MAX;
	int64_t x270 = INT64_MIN;
	static uint64_t x271 = 47818LLU;
	int64_t x272 = INT64_MIN;
	volatile uint64_t t65 = 13650356276785LLU;

	t65 = (x269|((x270/x271)%x272));

	if (t65 != 192886981263359LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x273 = INT32_MAX;
	uint16_t x274 = 5221U;
	static volatile int32_t x275 = -13507;
	int32_t t66 = INT32_MAX;

	t66 = (x273|((x274/x275)%x276));

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x277 = -1;
	uint8_t x279 = UINT8_MAX;
	static uint8_t x280 = 1U;
	static int32_t t67 = -16058;

	t67 = (x277|((x278/x279)%x280));

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x281 = INT16_MIN;
	int16_t x283 = INT16_MAX;
	int16_t x284 = INT16_MAX;

	t68 = (x281|((x282/x283)%x284));

	if (t68 != 4294934536U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x289 = 25U;
	int8_t x290 = -10;
	uint32_t t69 = 584764358U;

	t69 = (x289|((x290/x291)%x292));

	if (t69 != 25U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x294 = UINT8_MAX;
	uint64_t x295 = 33848910282285709LLU;
	volatile int64_t x296 = INT64_MIN;
	uint64_t t70 = 2226659000350926LLU;

	t70 = (x293|((x294/x295)%x296));

	if (t70 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x297 = INT32_MIN;
	int64_t x298 = -108282LL;
	int8_t x299 = 1;
	volatile int8_t x300 = INT8_MAX;
	int64_t t71 = 3758984452170LL;

	t71 = (x297|((x298/x299)%x300));

	if (t71 != -78LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x301 = -110LL;
	volatile uint64_t x302 = 921859020LLU;
	static uint64_t x303 = UINT64_MAX;
	volatile int32_t x304 = -119647;
	volatile uint64_t t72 = 382LLU;

	t72 = (x301|((x302/x303)%x304));

	if (t72 != 18446744073709551506LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x306 = -43804;
	int64_t x308 = INT64_MAX;
	uint64_t t73 = 23447904137745LLU;

	t73 = (x305|((x306/x307)%x308));

	if (t73 != 269042851LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x309 = -1;
	volatile int8_t x310 = INT8_MIN;
	int8_t x311 = INT8_MAX;
	int64_t x312 = INT64_MIN;
	int64_t t74 = 254928275805LL;

	t74 = (x309|((x310/x311)%x312));

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x313 = 1U;
	int8_t x315 = -3;
	volatile uint16_t x316 = 1U;
	int64_t t75 = 7481963226761LL;

	t75 = (x313|((x314/x315)%x316));

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x321 = -1LL;
	volatile int64_t x323 = -44023791556034953LL;
	int64_t x324 = INT64_MAX;
	volatile int64_t t76 = 1843618663347328347LL;

	t76 = (x321|((x322/x323)%x324));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x325 = -5763;
	static int8_t x326 = -1;
	int8_t x327 = -2;
	uint8_t x328 = 17U;

	t77 = (x325|((x326/x327)%x328));

	if (t77 != -5763) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x329 = 0;
	static volatile int8_t x330 = INT8_MAX;
	static volatile uint64_t x331 = 27916537827LLU;
	int32_t x332 = INT32_MAX;

	t78 = (x329|((x330/x331)%x332));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x333 = 0;
	static int8_t x334 = -1;
	int8_t x335 = 8;
	static int16_t x336 = INT16_MAX;
	static int32_t t79 = 2075;

	t79 = (x333|((x334/x335)%x336));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x337 = INT64_MIN;
	uint8_t x339 = 1U;
	static int32_t x340 = INT32_MIN;

	t80 = (x337|((x338/x339)%x340));

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	static int64_t x341 = -1LL;
	uint8_t x342 = 6U;
	int8_t x344 = INT8_MIN;
	static int64_t t81 = 4472383LL;

	t81 = (x341|((x342/x343)%x344));

	if (t81 != -1LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x345 = -1;
	int8_t x346 = INT8_MIN;
	int32_t x347 = INT32_MAX;
	int32_t x348 = -1;
	volatile int32_t t82 = 471754565;

	t82 = (x345|((x346/x347)%x348));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x349 = UINT8_MAX;
	uint8_t x352 = UINT8_MAX;
	volatile int64_t t83 = 1453301412199545941LL;

	t83 = (x349|((x350/x351)%x352));

	if (t83 != 255LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x353 = 1579U;
	int64_t x354 = INT64_MIN;
	int64_t x355 = INT64_MIN;
	volatile int32_t x356 = -1;
	volatile int64_t t84 = -388281789544925LL;

	t84 = (x353|((x354/x355)%x356));

	if (t84 != 1579LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x359 = INT16_MAX;

	t85 = (x357|((x358/x359)%x360));

	if (t85 != UINT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x361 = -1;
	volatile int32_t x362 = 3346376;
	int64_t x363 = INT64_MIN;
	int16_t x364 = -412;
	int64_t t86 = 532944501616869981LL;

	t86 = (x361|((x362/x363)%x364));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x365 = -1;
	volatile int32_t x367 = -865;
	static int32_t t87 = -3840;

	t87 = (x365|((x366/x367)%x368));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x369 = INT8_MAX;
	static uint16_t x371 = 104U;
	volatile uint16_t x372 = UINT16_MAX;
	int64_t t88 = -3LL;

	t88 = (x369|((x370/x371)%x372));

	if (t88 != -257LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x373 = 330939719727563LLU;
	int8_t x374 = INT8_MIN;
	uint64_t x375 = UINT64_MAX;
	int64_t x376 = INT64_MAX;
	static volatile uint64_t t89 = 24247997269665LLU;

	t89 = (x373|((x374/x375)%x376));

	if (t89 != 330939719727563LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x377 = INT16_MAX;
	int16_t x378 = -6;
	static uint8_t x380 = 115U;
	static uint32_t t90 = 13215U;

	t90 = (x377|((x378/x379)%x380));

	if (t90 != 32767U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x385 = INT64_MAX;
	int16_t x386 = INT16_MIN;
	int16_t x387 = INT16_MIN;
	uint16_t x388 = 17U;
	static int64_t t91 = INT64_MAX;

	t91 = (x385|((x386/x387)%x388));

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x390 = INT16_MAX;
	volatile int16_t x391 = INT16_MAX;
	uint8_t x392 = 4U;
	volatile int64_t t92 = -807594968947LL;

	t92 = (x389|((x390/x391)%x392));

	if (t92 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x393 = 21U;
	int16_t x394 = -27;
	static int8_t x395 = INT8_MAX;
	int16_t x396 = INT16_MIN;
	volatile int32_t t93 = 6897;

	t93 = (x393|((x394/x395)%x396));

	if (t93 != 21) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x397 = -1LL;
	volatile int64_t t94 = 2061700438791504LL;

	t94 = (x397|((x398/x399)%x400));

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x401 = 58U;
	static int32_t x403 = -1;
	int8_t x404 = INT8_MIN;
	volatile int32_t t95 = 320251356;

	t95 = (x401|((x402/x403)%x404));

	if (t95 != -6) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x405 = INT8_MIN;
	int32_t x406 = INT32_MAX;
	int8_t x407 = -1;
	volatile int8_t x408 = -1;

	t96 = (x405|((x406/x407)%x408));

	if (t96 != -128) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x410 = INT8_MAX;
	volatile int64_t x411 = -30337391LL;
	int64_t x412 = INT64_MIN;
	volatile int64_t t97 = 17209226465374577LL;

	t97 = (x409|((x410/x411)%x412));

	if (t97 != 32767LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x413 = INT32_MIN;
	volatile int8_t x414 = 10;
	volatile int64_t x415 = 1146140803033332142LL;
	volatile int64_t t98 = 1025212495LL;

	t98 = (x413|((x414/x415)%x416));

	if (t98 != -2147483648LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x417 = -1;
	int8_t x418 = INT8_MAX;
	volatile int8_t x419 = INT8_MIN;
	int64_t x420 = INT64_MAX;
	volatile int64_t t99 = -3926489634LL;

	t99 = (x417|((x418/x419)%x420));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

