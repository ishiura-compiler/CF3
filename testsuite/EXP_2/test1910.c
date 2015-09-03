#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x4 = INT64_MIN;
static uint8_t x5 = UINT8_MAX;
static uint16_t x6 = 10533U;
uint64_t x8 = UINT64_MAX;
volatile uint64_t t1 = UINT64_MAX;
int64_t x25 = INT64_MAX;
int8_t x32 = INT8_MIN;
uint64_t x34 = 18934621863LLU;
static uint64_t t8 = 534409523LLU;
uint8_t x47 = 2U;
volatile uint64_t t11 = 145871004495LLU;
static volatile int32_t x53 = INT32_MAX;
uint64_t x57 = 1LLU;
volatile int32_t x63 = -12;
int16_t x64 = 282;
int16_t x65 = INT16_MIN;
volatile int8_t x70 = -1;
volatile uint64_t t18 = UINT64_MAX;
static uint64_t x84 = UINT64_MAX;
uint64_t t20 = UINT64_MAX;
int32_t x87 = -602011;
int16_t x94 = INT16_MAX;
uint32_t t23 = 3U;
uint16_t x101 = UINT16_MAX;
int8_t x108 = INT8_MIN;
static int32_t t26 = -844;
int16_t x112 = INT16_MIN;
uint32_t t27 = 44U;
uint8_t x115 = 10U;
volatile int64_t x118 = INT64_MIN;
int32_t x129 = -1;
uint64_t x138 = UINT64_MAX;
int8_t x139 = INT8_MAX;
int16_t x142 = INT16_MIN;
int16_t x143 = 2;
uint64_t t35 = 4784388002354990LLU;
static uint64_t x148 = 1528759689201746LLU;
int8_t x154 = -2;
static uint64_t t41 = 50137357491289015LLU;
int32_t x169 = -1;
int16_t x177 = INT16_MAX;
uint16_t x185 = 2U;
int8_t x199 = INT8_MIN;
static uint64_t x201 = UINT64_MAX;
static volatile uint32_t x208 = 3789164U;
int64_t x210 = INT64_MIN;
int32_t x216 = -411732;
volatile uint64_t t54 = 3909245350LLU;
uint8_t x223 = UINT8_MAX;
int32_t x225 = INT32_MIN;
static uint16_t x228 = UINT16_MAX;
static int16_t x234 = 46;
static int8_t x239 = -1;
uint16_t x242 = 12U;
uint16_t x243 = 359U;
int8_t x246 = -6;
int32_t x253 = INT32_MAX;
uint32_t x258 = 12U;
volatile int64_t x259 = 6919163094LL;
int64_t x261 = -1LL;
uint32_t x273 = 122541U;
int64_t t71 = 317605096718LL;
int8_t x316 = INT8_MIN;
uint64_t t76 = 6LLU;
uint8_t x324 = UINT8_MAX;
int32_t x326 = -273566;
volatile int16_t x327 = INT16_MAX;
static volatile uint64_t x342 = 1193LLU;
static int16_t x344 = -1;
static uint32_t x346 = 17U;
int64_t x350 = INT64_MIN;
int64_t x351 = INT64_MIN;
int32_t x353 = INT32_MAX;
uint16_t x354 = 236U;
int8_t x360 = 17;
uint16_t x363 = UINT16_MAX;
static int64_t t87 = 538896747256LL;
static int8_t x365 = 20;
int16_t x372 = INT16_MAX;
int64_t x379 = INT64_MIN;
int64_t t93 = -94798094LL;
int64_t x396 = -1LL;
int16_t x403 = INT16_MIN;
uint16_t x409 = 126U;
int32_t t98 = 50;


void f0(void) {
	int64_t x1 = INT64_MAX;
	volatile int64_t x2 = INT64_MAX;
	uint64_t x3 = 30979424692375LLU;
	static volatile uint64_t t0 = 32838260309866LLU;

	t0 = ((x1/(x2|x3))|x4);

	if (t0 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x7 = -1;

	t1 = ((x5/(x6|x7))|x8);

	if (t1 != UINT64_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = 743U;
	uint8_t x10 = 13U;
	static volatile int8_t x11 = INT8_MIN;
	int8_t x12 = INT8_MIN;
	static int32_t t2 = -5;

	t2 = ((x9/(x10|x11))|x12);

	if (t2 != -6) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x13 = 76U;
	int16_t x14 = INT16_MIN;
	int32_t x15 = -31034142;
	int32_t x16 = -187;
	volatile int32_t t3 = -14205;

	t3 = ((x13/(x14|x15))|x16);

	if (t3 != -187) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = 535007082375458390LLU;
	volatile uint32_t x18 = UINT32_MAX;
	volatile int64_t x19 = -44708978301839792LL;
	static uint32_t x20 = 2007555109U;
	volatile uint64_t t4 = 473562264951LLU;

	t4 = ((x17/(x18|x19))|x20);

	if (t4 != 2007555109LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = INT32_MIN;
	int16_t x22 = -243;
	uint32_t x23 = 11U;
	uint32_t x24 = 22493223U;
	static uint32_t t5 = 85195090U;

	t5 = ((x21/(x22|x23))|x24);

	if (t5 != 22493223U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x26 = INT64_MAX;
	uint16_t x27 = UINT16_MAX;
	static volatile int16_t x28 = INT16_MIN;
	volatile int64_t t6 = -7498529720LL;

	t6 = ((x25/(x26|x27))|x28);

	if (t6 != -32767LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 5;
	static volatile int32_t x30 = INT32_MIN;
	int64_t x31 = -1LL;
	volatile int64_t t7 = 242735735751331LL;

	t7 = ((x29/(x30|x31))|x32);

	if (t7 != -5LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 5317064512LLU;
	volatile int32_t x35 = -6;
	uint8_t x36 = UINT8_MAX;

	t8 = ((x33/(x34|x35))|x36);

	if (t8 != 255LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 3554626;
	static int64_t x38 = INT64_MIN;
	int32_t x39 = INT32_MIN;
	uint16_t x40 = 104U;
	int64_t t9 = -422832715LL;

	t9 = ((x37/(x38|x39))|x40);

	if (t9 != 104LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = UINT64_MAX;
	int32_t x42 = INT32_MIN;
	int16_t x43 = INT16_MIN;
	static uint16_t x44 = 1171U;
	uint64_t t10 = 125351028LLU;

	t10 = ((x41/(x42|x43))|x44);

	if (t10 != 1171LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = INT32_MIN;
	uint64_t x46 = 2525922151636236LLU;
	uint64_t x48 = 2856LLU;

	t11 = ((x45/(x46|x47))|x48);

	if (t11 != 8110LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	int32_t x50 = INT32_MIN;
	uint16_t x51 = 2845U;
	int16_t x52 = INT16_MAX;
	volatile int32_t t12 = 54;

	t12 = ((x49/(x50|x51))|x52);

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = INT64_MIN;
	static uint32_t x55 = UINT32_MAX;
	volatile int64_t x56 = INT64_MIN;
	volatile int64_t t13 = INT64_MIN;

	t13 = ((x53/(x54|x55))|x56);

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x58 = INT16_MIN;
	int64_t x59 = INT64_MAX;
	uint8_t x60 = 23U;
	volatile uint64_t t14 = 12628087488158761LLU;

	t14 = ((x57/(x58|x59))|x60);

	if (t14 != 23LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x61 = -14504;
	uint32_t x62 = UINT32_MAX;
	uint32_t t15 = 0U;

	t15 = ((x61/(x62|x63))|x64);

	if (t15 != 282U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = INT64_MIN;
	static volatile uint32_t x67 = 170236U;
	int32_t x68 = 11687;
	volatile int64_t t16 = 207789094LL;

	t16 = ((x65/(x66|x67))|x68);

	if (t16 != 11687LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint32_t x69 = 31205U;
	uint8_t x71 = UINT8_MAX;
	volatile int32_t x72 = 84117;
	uint32_t t17 = 40974594U;

	t17 = ((x69/(x70|x71))|x72);

	if (t17 != 84117U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 14379957LLU;
	uint32_t x74 = 1U;
	uint8_t x75 = 3U;
	int8_t x76 = -2;

	t18 = ((x73/(x74|x75))|x76);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	uint64_t x78 = 2101988881955094LLU;
	static uint32_t x79 = 42117812U;
	int16_t x80 = 1820;
	volatile uint64_t t19 = 3836954541LLU;

	t19 = ((x77/(x78|x79))|x80);

	if (t19 != 10079LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = UINT16_MAX;
	uint64_t x82 = UINT64_MAX;
	static int16_t x83 = INT16_MIN;

	t20 = ((x81/(x82|x83))|x84);

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = 1;
	int16_t x86 = -306;
	int16_t x88 = INT16_MIN;
	static volatile int32_t t21 = 29;

	t21 = ((x85/(x86|x87))|x88);

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 52U;
	uint16_t x90 = 527U;
	int16_t x91 = -1;
	volatile int64_t x92 = 1045LL;
	volatile int64_t t22 = 15329LL;

	t22 = ((x89/(x90|x91))|x92);

	if (t22 != -35LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 1730U;
	int8_t x95 = INT8_MAX;
	int16_t x96 = INT16_MIN;

	t23 = ((x93/(x94|x95))|x96);

	if (t23 != 4294934528U) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	int8_t x98 = INT8_MIN;
	int64_t x99 = INT64_MAX;
	int8_t x100 = -1;
	static volatile int64_t t24 = 210015186541LL;

	t24 = ((x97/(x98|x99))|x100);

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x102 = -1;
	int16_t x103 = INT16_MAX;
	uint16_t x104 = UINT16_MAX;
	volatile int32_t t25 = -1;

	t25 = ((x101/(x102|x103))|x104);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = -11;
	int16_t x106 = INT16_MAX;
	int8_t x107 = INT8_MIN;

	t26 = ((x105/(x106|x107))|x108);

	if (t26 != -117) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x109 = 1;
	uint8_t x110 = UINT8_MAX;
	uint32_t x111 = 2U;

	t27 = ((x109/(x110|x111))|x112);

	if (t27 != 4294934528U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 398LLU;
	static volatile uint64_t x114 = 203661684257383373LLU;
	volatile int8_t x116 = 1;
	uint64_t t28 = 107479720946936701LLU;

	t28 = ((x113/(x114|x115))|x116);

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	static uint64_t x119 = 1842384098961510LLU;
	int64_t x120 = -26951734653LL;
	static volatile uint64_t t29 = 2075461532120915LLU;

	t29 = ((x117/(x118|x119))|x120);

	if (t29 != 18446744046757816963LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -42299;
	int64_t x122 = -1LL;
	static int16_t x123 = INT16_MIN;
	uint16_t x124 = UINT16_MAX;
	int64_t t30 = 949705471LL;

	t30 = ((x121/(x122|x123))|x124);

	if (t30 != 65535LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 24U;
	uint32_t x126 = 3719673U;
	static int64_t x127 = INT64_MIN;
	uint16_t x128 = UINT16_MAX;
	volatile int64_t t31 = -66303301LL;

	t31 = ((x125/(x126|x127))|x128);

	if (t31 != 65535LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x130 = 5U;
	int32_t x131 = -1;
	uint8_t x132 = 16U;
	volatile int32_t t32 = -98493440;

	t32 = ((x129/(x130|x131))|x132);

	if (t32 != 17) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = UINT64_MAX;
	static int8_t x134 = -19;
	volatile int64_t x135 = 26200893LL;
	uint16_t x136 = 3U;
	uint64_t t33 = 138489811097100LLU;

	t33 = ((x133/(x134|x135))|x136);

	if (t33 != 3LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 47LL;
	uint32_t x140 = 26758U;
	uint64_t t34 = 328430LLU;

	t34 = ((x137/(x138|x139))|x140);

	if (t34 != 26758LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = UINT64_MAX;
	static int32_t x144 = INT32_MIN;

	t35 = ((x141/(x142|x143))|x144);

	if (t35 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x145 = 3U;
	uint16_t x146 = UINT16_MAX;
	int32_t x147 = INT32_MAX;
	volatile uint64_t t36 = 8024615086011LLU;

	t36 = ((x145/(x146|x147))|x148);

	if (t36 != 1528759689201746LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 1808U;
	int32_t x150 = INT32_MAX;
	int32_t x151 = INT32_MAX;
	int32_t x152 = INT32_MIN;
	static volatile int32_t t37 = INT32_MIN;

	t37 = ((x149/(x150|x151))|x152);

	if (t37 != INT32_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x153 = 2;
	static int32_t x155 = INT32_MIN;
	int32_t x156 = INT32_MIN;
	int32_t t38 = 1819;

	t38 = ((x153/(x154|x155))|x156);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = 18282U;
	static uint32_t x158 = UINT32_MAX;
	int8_t x159 = INT8_MIN;
	int16_t x160 = -115;
	static volatile uint32_t t39 = 2U;

	t39 = ((x157/(x158|x159))|x160);

	if (t39 != 4294967181U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x161 = INT64_MIN;
	int64_t x162 = INT64_MIN;
	static volatile uint32_t x163 = 1307096926U;
	uint32_t x164 = 187712884U;
	int64_t t40 = -13LL;

	t40 = ((x161/(x162|x163))|x164);

	if (t40 != 187712885LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x165 = 65150370LLU;
	uint64_t x166 = UINT64_MAX;
	int64_t x167 = 8101768LL;
	static int8_t x168 = -40;

	t41 = ((x165/(x166|x167))|x168);

	if (t41 != 18446744073709551576LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x170 = INT64_MAX;
	int32_t x171 = -312367482;
	int8_t x172 = 0;
	int64_t t42 = 537091010665LL;

	t42 = ((x169/(x170|x171))|x172);

	if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x173 = -7702023;
	uint16_t x174 = 23880U;
	uint16_t x175 = 44U;
	uint64_t x176 = 985332380LLU;
	uint64_t t43 = 312800669307195228LLU;

	t43 = ((x173/(x174|x175))|x176);

	if (t43 != 18446744073709551294LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x178 = INT64_MIN;
	int32_t x179 = -1;
	int16_t x180 = INT16_MAX;
	static volatile int64_t t44 = -24770028391551LL;

	t44 = ((x177/(x178|x179))|x180);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = UINT8_MAX;
	volatile int32_t x182 = -1;
	uint32_t x183 = 1326350U;
	int8_t x184 = INT8_MIN;
	volatile uint32_t t45 = 77U;

	t45 = ((x181/(x182|x183))|x184);

	if (t45 != 4294967168U) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x186 = 0U;
	uint64_t x187 = UINT64_MAX;
	uint32_t x188 = 59550U;
	volatile uint64_t t46 = 765688334351577LLU;

	t46 = ((x185/(x186|x187))|x188);

	if (t46 != 59550LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = UINT64_MAX;
	int8_t x190 = INT8_MAX;
	uint64_t x191 = 2888050LLU;
	int64_t x192 = INT64_MIN;
	uint64_t t47 = 376479005LLU;

	t47 = ((x189/(x190|x191))|x192);

	if (t47 != 9223378424092198852LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x193 = 71U;
	uint8_t x194 = 0U;
	int32_t x195 = INT32_MAX;
	int8_t x196 = INT8_MIN;
	int32_t t48 = 1587;

	t48 = ((x193/(x194|x195))|x196);

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x197 = 31LLU;
	uint16_t x198 = 10252U;
	volatile int16_t x200 = -1;
	uint64_t t49 = UINT64_MAX;

	t49 = ((x197/(x198|x199))|x200);

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x202 = -543;
	volatile int16_t x203 = -1;
	static volatile int16_t x204 = INT16_MIN;
	static volatile uint64_t t50 = 28842250LLU;

	t50 = ((x201/(x202|x203))|x204);

	if (t50 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x205 = -1;
	uint32_t x206 = 423102091U;
	int8_t x207 = INT8_MIN;
	uint32_t t51 = 55379U;

	t51 = ((x205/(x206|x207))|x208);

	if (t51 != 3789165U) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = -1LL;
	uint16_t x211 = UINT16_MAX;
	uint32_t x212 = UINT32_MAX;
	volatile int64_t t52 = -65576LL;

	t52 = ((x209/(x210|x211))|x212);

	if (t52 != 4294967295LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = 27;
	uint32_t x214 = 20312407U;
	int16_t x215 = INT16_MIN;
	volatile uint32_t t53 = 30U;

	t53 = ((x213/(x214|x215))|x216);

	if (t53 != 4294555564U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x217 = 81717199338174014LLU;
	int32_t x218 = INT32_MAX;
	static uint32_t x219 = UINT32_MAX;
	volatile int64_t x220 = INT64_MIN;

	t54 = ((x217/(x218|x219))|x220);

	if (t54 != 9223372036873802076LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x221 = 0U;
	volatile uint64_t x222 = 6799111LLU;
	volatile int32_t x224 = INT32_MAX;
	static volatile uint64_t t55 = 229751LLU;

	t55 = ((x221/(x222|x223))|x224);

	if (t55 != 2147483647LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x226 = 22U;
	int64_t x227 = -1LL;
	volatile int64_t t56 = 1008987974366407LL;

	t56 = ((x225/(x226|x227))|x228);

	if (t56 != 2147549183LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x233 = UINT32_MAX;
	volatile int64_t x235 = -479679LL;
	int16_t x236 = INT16_MAX;
	volatile int64_t t57 = 357522025787331LL;

	t57 = ((x233/(x234|x235))|x236);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x237 = INT8_MIN;
	volatile uint64_t x238 = UINT64_MAX;
	int64_t x240 = INT64_MIN;
	static volatile uint64_t t58 = 13791335120965LLU;

	t58 = ((x237/(x238|x239))|x240);

	if (t58 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x241 = INT64_MAX;
	int32_t x244 = INT32_MIN;
	int64_t t59 = 51179LL;

	t59 = ((x241/(x242|x243))|x244);

	if (t59 != -1796396404LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x245 = 17;
	static int64_t x247 = INT64_MAX;
	int64_t x248 = -1LL;
	int64_t t60 = 3266351635593193LL;

	t60 = ((x245/(x246|x247))|x248);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x249 = 20U;
	int16_t x250 = INT16_MIN;
	int8_t x251 = INT8_MAX;
	volatile uint8_t x252 = 52U;
	static int32_t t61 = -696;

	t61 = ((x249/(x250|x251))|x252);

	if (t61 != 52) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x254 = 2;
	volatile int32_t x255 = -1;
	int32_t x256 = -1;
	volatile int32_t t62 = 1;

	t62 = ((x253/(x254|x255))|x256);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x257 = INT8_MIN;
	static int8_t x260 = -31;
	int64_t t63 = 2644LL;

	t63 = ((x257/(x258|x259))|x260);

	if (t63 != -31LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x262 = INT32_MIN;
	volatile int64_t x263 = INT64_MIN;
	int64_t x264 = 258556LL;
	volatile int64_t t64 = -48570807LL;

	t64 = ((x261/(x262|x263))|x264);

	if (t64 != 258556LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x265 = UINT16_MAX;
	int16_t x266 = INT16_MIN;
	int8_t x267 = INT8_MAX;
	int8_t x268 = -1;
	volatile int32_t t65 = -90;

	t65 = ((x265/(x266|x267))|x268);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x269 = 0U;
	static uint64_t x270 = UINT64_MAX;
	int16_t x271 = -1;
	int32_t x272 = INT32_MAX;
	uint64_t t66 = 2LLU;

	t66 = ((x269/(x270|x271))|x272);

	if (t66 != 2147483647LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x274 = 8U;
	int32_t x275 = -1;
	volatile uint8_t x276 = 12U;
	uint32_t t67 = 156871U;

	t67 = ((x273/(x274|x275))|x276);

	if (t67 != 12U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x277 = UINT16_MAX;
	static uint32_t x278 = UINT32_MAX;
	int16_t x279 = -5;
	volatile int8_t x280 = INT8_MIN;
	uint32_t t68 = 5U;

	t68 = ((x277/(x278|x279))|x280);

	if (t68 != 4294967168U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x281 = INT32_MIN;
	uint8_t x282 = 7U;
	static uint32_t x283 = UINT32_MAX;
	static uint64_t x284 = 3740551389051561505LLU;
	volatile uint64_t t69 = 3LLU;

	t69 = ((x281/(x282|x283))|x284);

	if (t69 != 3740551389051561505LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x285 = 71U;
	int16_t x286 = 4;
	int64_t x287 = INT64_MIN;
	volatile int8_t x288 = -1;
	volatile int64_t t70 = -31105537003756333LL;

	t70 = ((x285/(x286|x287))|x288);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x289 = INT16_MIN;
	volatile int64_t x290 = -1LL;
	int8_t x291 = -1;
	int64_t x292 = 8570497420863LL;

	t71 = ((x289/(x290|x291))|x292);

	if (t71 != 8570497453631LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x301 = INT16_MIN;
	uint16_t x302 = 3U;
	volatile uint8_t x303 = 100U;
	uint32_t x304 = 874593890U;
	volatile uint32_t t72 = 1961336U;

	t72 = ((x301/(x302|x303))|x304);

	if (t72 != 4294967010U) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x305 = 1;
	volatile uint64_t x306 = UINT64_MAX;
	int16_t x307 = 296;
	static uint32_t x308 = UINT32_MAX;
	uint64_t t73 = 120955283LLU;

	t73 = ((x305/(x306|x307))|x308);

	if (t73 != 4294967295LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x309 = INT8_MIN;
	static int32_t x310 = INT32_MIN;
	static uint64_t x311 = 5726110223LLU;
	static int32_t x312 = 469163;
	volatile uint64_t t74 = 4080774959LLU;

	t74 = ((x309/(x310|x311))|x312);

	if (t74 != 469163LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x313 = INT64_MIN;
	uint64_t x314 = UINT64_MAX;
	int8_t x315 = -28;
	static volatile uint64_t t75 = 15LLU;

	t75 = ((x313/(x314|x315))|x316);

	if (t75 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x317 = 2867U;
	static int32_t x318 = 1;
	uint64_t x319 = 4391000723310701361LLU;
	static uint32_t x320 = UINT32_MAX;

	t76 = ((x317/(x318|x319))|x320);

	if (t76 != 4294967295LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x321 = INT32_MAX;
	int32_t x322 = -4;
	uint16_t x323 = 15U;
	volatile int32_t t77 = 778351;

	t77 = ((x321/(x322|x323))|x324);

	if (t77 != -2147483393) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x325 = UINT32_MAX;
	int16_t x328 = INT16_MAX;
	volatile uint32_t t78 = 122689436U;

	t78 = ((x325/(x326|x327))|x328);

	if (t78 != 32767U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x329 = 785U;
	int64_t x330 = INT64_MIN;
	uint32_t x331 = UINT32_MAX;
	int16_t x332 = 1;
	int64_t t79 = 140814167197186783LL;

	t79 = ((x329/(x330|x331))|x332);

	if (t79 != 1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = -1LL;
	uint8_t x334 = 7U;
	static int16_t x335 = 113;
	int8_t x336 = 1;
	static int64_t t80 = -4031311738099LL;

	t80 = ((x333/(x334|x335))|x336);

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x337 = -1;
	uint64_t x338 = 1316390LLU;
	int32_t x339 = INT32_MAX;
	volatile uint8_t x340 = 78U;
	static uint64_t t81 = 1060907429001540LLU;

	t81 = ((x337/(x338|x339))|x340);

	if (t81 != 8589934670LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x341 = -365387939412712307LL;
	volatile int32_t x343 = INT32_MAX;
	static volatile uint64_t t82 = UINT64_MAX;

	t82 = ((x341/(x342|x343))|x344);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x345 = UINT32_MAX;
	int16_t x347 = 4;
	uint16_t x348 = UINT16_MAX;
	static uint32_t t83 = 275U;

	t83 = ((x345/(x346|x347))|x348);

	if (t83 != 204537855U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x349 = 222488220048766495LLU;
	int64_t x352 = 790093132606764240LL;
	uint64_t t84 = 46479292931345910LLU;

	t84 = ((x349/(x350|x351))|x352);

	if (t84 != 790093132606764240LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x355 = 0;
	uint64_t x356 = UINT64_MAX;
	volatile uint64_t t85 = UINT64_MAX;

	t85 = ((x353/(x354|x355))|x356);

	if (t85 != UINT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x357 = 461792093LLU;
	static int32_t x358 = 3;
	int64_t x359 = -1LL;
	volatile uint64_t t86 = 2095971LLU;

	t86 = ((x357/(x358|x359))|x360);

	if (t86 != 17LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x361 = 192LL;
	int8_t x362 = -41;
	int64_t x364 = -1LL;

	t87 = ((x361/(x362|x363))|x364);

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x366 = INT32_MIN;
	int8_t x367 = 1;
	volatile uint16_t x368 = UINT16_MAX;
	volatile int32_t t88 = 125;

	t88 = ((x365/(x366|x367))|x368);

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = 50005094LL;
	int8_t x370 = INT8_MAX;
	static uint64_t x371 = 9804591LLU;
	uint64_t t89 = 1858254LLU;

	t89 = ((x369/(x370|x371))|x372);

	if (t89 != 32767LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x373 = 2U;
	static int8_t x374 = 3;
	int16_t x375 = 81;
	volatile uint32_t x376 = 54U;
	volatile uint32_t t90 = 48299U;

	t90 = ((x373/(x374|x375))|x376);

	if (t90 != 54U) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x377 = UINT64_MAX;
	int64_t x378 = -35LL;
	static uint64_t x380 = UINT64_MAX;
	uint64_t t91 = UINT64_MAX;

	t91 = ((x377/(x378|x379))|x380);

	if (t91 != UINT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x385 = 30383U;
	int16_t x386 = 4059;
	uint64_t x387 = 406LLU;
	int16_t x388 = INT16_MIN;
	uint64_t t92 = 2712641687502LLU;

	t92 = ((x385/(x386|x387))|x388);

	if (t92 != 18446744073709518855LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x389 = 70U;
	int64_t x390 = INT64_MIN;
	volatile int16_t x391 = INT16_MIN;
	int8_t x392 = -1;

	t93 = ((x389/(x390|x391))|x392);

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x393 = 97U;
	uint64_t x394 = UINT64_MAX;
	int8_t x395 = -1;
	uint64_t t94 = UINT64_MAX;

	t94 = ((x393/(x394|x395))|x396);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x397 = INT8_MIN;
	volatile int32_t x398 = INT32_MIN;
	int16_t x399 = -1827;
	int64_t x400 = INT64_MIN;
	volatile int64_t t95 = INT64_MIN;

	t95 = ((x397/(x398|x399))|x400);

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x401 = -4096108;
	uint32_t x402 = 124U;
	int64_t x404 = INT64_MIN;
	static int64_t t96 = INT64_MIN;

	t96 = ((x401/(x402|x403))|x404);

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int8_t x405 = INT8_MAX;
	static int8_t x406 = -3;
	int8_t x407 = 1;
	int32_t x408 = INT32_MAX;
	volatile int32_t t97 = 6;

	t97 = ((x405/(x406|x407))|x408);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x410 = 938U;
	int16_t x411 = -640;
	int16_t x412 = -1;

	t98 = ((x409/(x410|x411))|x412);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x413 = INT64_MIN;
	volatile uint32_t x414 = UINT32_MAX;
	volatile int8_t x415 = INT8_MIN;
	uint64_t x416 = 73244870184LLU;
	uint64_t t99 = 8LLU;

	t99 = ((x413/(x414|x415))|x416);

	if (t99 != 18446744071792494120LLU) { NG(); } else { ; }
	
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

