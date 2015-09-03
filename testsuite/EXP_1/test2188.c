#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -407;
static uint16_t x3 = 24U;
int32_t x6 = -17130188;
volatile uint64_t x8 = UINT64_MAX;
uint8_t x11 = 2U;
static int64_t x18 = INT64_MAX;
static volatile int32_t x31 = INT32_MIN;
uint32_t x38 = 48U;
int16_t x39 = -1;
uint32_t x40 = 1405612106U;
uint32_t t8 = 102U;
static int8_t x56 = INT8_MAX;
static int16_t x59 = -1;
uint32_t t13 = 1026053368U;
volatile int64_t x61 = INT64_MIN;
int16_t x63 = 85;
int64_t x70 = INT64_MIN;
int32_t x71 = -1;
int64_t x76 = -1LL;
uint64_t x80 = UINT64_MAX;
static uint8_t x89 = 0U;
int32_t x98 = INT32_MAX;
int32_t x101 = INT32_MIN;
uint32_t x108 = 2088U;
int32_t x109 = INT32_MIN;
int16_t x115 = INT16_MIN;
int32_t x116 = 153;
uint32_t x119 = UINT32_MAX;
volatile uint64_t t29 = 2667437LLU;
uint64_t t30 = 6691276LLU;
volatile uint8_t x130 = 2U;
volatile uint64_t t33 = 1435807LLU;
uint64_t t34 = 2209092286011523LLU;
int32_t x149 = 205009;
int64_t t37 = -1LL;
volatile int32_t x158 = INT32_MAX;
volatile int8_t x160 = 3;
int16_t x169 = INT16_MAX;
volatile int64_t t41 = -631711229818LL;
int16_t x174 = INT16_MIN;
static int16_t x176 = INT16_MAX;
volatile int16_t x183 = 168;
uint8_t x188 = UINT8_MAX;
uint64_t t46 = 31762675379200LLU;
volatile uint8_t x194 = 4U;
int32_t x196 = INT32_MIN;
static int8_t x200 = INT8_MAX;
int8_t x207 = INT8_MIN;
int8_t x216 = -7;
static volatile int8_t x217 = INT8_MAX;
static uint8_t x219 = 0U;
int64_t x220 = INT64_MAX;
int64_t t52 = 10699730LL;
volatile int32_t t53 = -17;
int16_t x233 = INT16_MIN;
static int64_t x241 = INT64_MIN;
uint32_t x247 = 945576242U;
volatile int64_t x254 = INT64_MIN;
volatile int32_t x257 = INT32_MIN;
uint8_t x260 = UINT8_MAX;
int64_t x269 = -1LL;
int64_t t65 = -34077618598721LL;
static int8_t x273 = -59;
static int16_t x275 = INT16_MIN;
static int32_t x278 = INT32_MIN;
int64_t x279 = INT64_MIN;
uint64_t x287 = 124317557LLU;
volatile int64_t x288 = -1LL;
volatile int64_t t70 = 1641617293330500086LL;
int8_t x295 = 11;
static volatile int32_t x298 = -1;
int8_t x299 = -5;
int16_t x307 = 11;
int32_t x308 = -1;
uint8_t x311 = UINT8_MAX;
uint32_t x323 = 4U;
int8_t x331 = INT8_MIN;
int64_t t81 = 21116236983364LL;
int64_t x337 = -93443784908457532LL;
uint64_t x339 = UINT64_MAX;
volatile uint64_t t82 = 16154595384901034LLU;
int64_t x341 = INT64_MAX;
static uint64_t t84 = 2334134384017174722LLU;
uint16_t x350 = 5602U;
uint32_t x353 = UINT32_MAX;
static uint64_t t88 = 7200017800537LLU;
uint64_t x374 = UINT64_MAX;
static uint8_t x376 = 1U;
volatile uint8_t x378 = UINT8_MAX;
volatile int32_t x379 = 175;
int16_t x380 = -10;
uint64_t t92 = 43533LLU;
static volatile int64_t x381 = -1LL;
uint16_t x392 = 5172U;
int16_t x396 = INT16_MIN;
volatile uint64_t t96 = 1786455311227876568LLU;
int8_t x399 = -1;
static uint8_t x404 = 7U;
int64_t x406 = INT64_MIN;


void f0(void) {
	volatile int8_t x2 = INT8_MAX;
	uint16_t x4 = UINT16_MAX;
	int32_t t0 = 3;

	t0 = (((x1^x2)^x3)/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 78316LLU;
	uint8_t x7 = 4U;
	uint64_t t1 = 2412610047120322LLU;

	t1 = (((x5^x6)^x7)/x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	int8_t x10 = -7;
	uint64_t x12 = 77LLU;
	static uint64_t t2 = 85289438162LLU;

	t2 = (((x9^x10)^x11)/x12);

	if (t2 != 239568104853369949LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	volatile uint16_t x14 = 26U;
	volatile int32_t x15 = -82706151;
	uint8_t x16 = 5U;
	volatile int32_t t3 = 95517;

	t3 = (((x13^x14)^x15)/x16);

	if (t3 != 16534784) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = INT8_MAX;
	static int8_t x19 = -38;
	int64_t x20 = -1LL;
	static volatile int64_t t4 = 1768LL;

	t4 = (((x17^x18)^x19)/x20);

	if (t4 != 9223372036854775718LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MIN;
	int8_t x22 = INT8_MIN;
	int16_t x23 = INT16_MAX;
	int64_t x24 = -4955LL;
	int64_t t5 = 151LL;

	t5 = (((x21^x22)^x23)/x24);

	if (t5 != -433390LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int64_t x26 = INT64_MIN;
	static int64_t x27 = -1LL;
	int32_t x28 = INT32_MAX;
	int64_t t6 = -7397225142087LL;

	t6 = (((x25^x26)^x27)/x28);

	if (t6 != -4294967297LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x29 = INT16_MIN;
	uint16_t x30 = 31U;
	static uint64_t x32 = 5427149799LLU;
	uint64_t t7 = 5480275LLU;

	t7 = (((x29^x30)^x31)/x32);

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x37 = UINT32_MAX;

	t8 = (((x37^x38)^x39)/x40);

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = -16;
	static uint64_t x42 = 13540LLU;
	int32_t x43 = -138360;
	static int32_t x44 = INT32_MIN;
	uint64_t t9 = 222183117221172LLU;

	t9 = (((x41^x42)^x43)/x44);

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x45 = INT16_MIN;
	int64_t x46 = INT64_MAX;
	static volatile int64_t x47 = INT64_MIN;
	volatile int8_t x48 = -3;
	int64_t t10 = 1385132768174334LL;

	t10 = (((x45^x46)^x47)/x48);

	if (t10 != -10922LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 32U;
	volatile int16_t x50 = -1;
	volatile int16_t x51 = INT16_MIN;
	int64_t x52 = -538LL;
	volatile int64_t t11 = 968524207820LL;

	t11 = (((x49^x50)^x51)/x52);

	if (t11 != -60LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x53 = 4;
	uint8_t x54 = UINT8_MAX;
	uint64_t x55 = 196327920413398LLU;
	uint64_t t12 = 3649556704559LLU;

	t12 = (((x53^x54)^x55)/x56);

	if (t12 != 1545889137112LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MIN;
	uint32_t x58 = 1760U;
	int32_t x60 = 1;

	t13 = (((x57^x58)^x59)/x60);

	if (t13 != 2147481887U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x62 = 3U;
	uint64_t x64 = 8763564080010LLU;
	static uint64_t t14 = 187288412038881904LLU;

	t14 = (((x61^x62)^x63)/x64);

	if (t14 != 1052468LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x65 = 13U;
	int16_t x66 = INT16_MIN;
	static int32_t x67 = -1;
	int16_t x68 = -1;
	int32_t t15 = 7511;

	t15 = (((x65^x66)^x67)/x68);

	if (t15 != -32754) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x69 = INT8_MIN;
	volatile int8_t x72 = INT8_MAX;
	volatile int64_t t16 = 3779053576251188694LL;

	t16 = (((x69^x70)^x71)/x72);

	if (t16 != -72624976668147840LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = -1;
	int64_t x74 = INT64_MIN;
	int32_t x75 = 0;
	int64_t t17 = 442070949205083LL;

	t17 = (((x73^x74)^x75)/x76);

	if (t17 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = 47U;
	static uint32_t x78 = 80U;
	int64_t x79 = INT64_MIN;
	volatile uint64_t t18 = 4041LLU;

	t18 = (((x77^x78)^x79)/x80);

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x81 = -1;
	uint16_t x82 = UINT16_MAX;
	volatile uint8_t x83 = UINT8_MAX;
	int16_t x84 = -4;
	int32_t t19 = 238168142;

	t19 = (((x81^x82)^x83)/x84);

	if (t19 != 16320) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = 244U;
	int16_t x86 = INT16_MAX;
	uint8_t x87 = UINT8_MAX;
	uint8_t x88 = 18U;
	static volatile int32_t t20 = 614495;

	t20 = (((x85^x86)^x87)/x88);

	if (t20 != 1819) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile uint32_t x90 = UINT32_MAX;
	uint64_t x91 = UINT64_MAX;
	volatile int32_t x92 = -7778;
	uint64_t t21 = 15309636121LLU;

	t21 = (((x89^x90)^x91)/x92);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x93 = -1;
	uint32_t x94 = 1453705U;
	int32_t x95 = 41439;
	volatile uint16_t x96 = 5012U;
	uint32_t t22 = 19384781U;

	t22 = (((x93^x94)^x95)/x96);

	if (t22 != 856641U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = INT64_MAX;
	int32_t x99 = INT32_MAX;
	static volatile uint64_t x100 = 2287LLU;
	volatile uint64_t t23 = 33712955031536029LLU;

	t23 = (((x97^x98)^x99)/x100);

	if (t23 != 4032956727964484LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x102 = UINT8_MAX;
	int64_t x103 = 166472498803134LL;
	uint8_t x104 = UINT8_MAX;
	static int64_t t24 = 2142313618LL;

	t24 = (((x101^x102)^x103)/x104);

	if (t24 != -652828307840LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = -18204442LL;
	int16_t x106 = INT16_MIN;
	int32_t x107 = INT32_MIN;
	int64_t t25 = 1207LL;

	t25 = (((x105^x106)^x107)/x108);

	if (t25 != -1019771LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x110 = 8666;
	int16_t x111 = -13087;
	int8_t x112 = -1;
	int32_t t26 = 349828;

	t26 = (((x109^x110)^x111)/x112);

	if (t26 != -2147478843) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x113 = -1LL;
	int16_t x114 = 6;
	volatile int64_t t27 = 957LL;

	t27 = (((x113^x114)^x115)/x116);

	if (t27 != 214LL) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = INT32_MAX;
	static uint32_t x118 = 175276021U;
	uint64_t x120 = 2485091332LLU;
	uint64_t t28 = 267947LLU;

	t28 = (((x117^x118)^x119)/x120);

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x121 = 22540LLU;
	static volatile int32_t x122 = INT32_MIN;
	static uint32_t x123 = 18019138U;
	int16_t x124 = INT16_MIN;

	t29 = (((x121^x122)^x123)/x124);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x125 = UINT64_MAX;
	static int64_t x126 = INT64_MIN;
	uint8_t x127 = 0U;
	volatile int16_t x128 = INT16_MIN;

	t30 = (((x125^x126)^x127)/x128);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x129 = INT64_MIN;
	uint32_t x131 = 912177U;
	int16_t x132 = INT16_MAX;
	volatile int64_t t31 = -2935796500672LL;

	t31 = (((x129^x130)^x131)/x132);

	if (t31 != -281483566907372LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = INT8_MAX;
	static int8_t x134 = 11;
	int64_t x135 = INT64_MIN;
	static uint32_t x136 = 48746U;
	int64_t t32 = 481399928513LL;

	t32 = (((x133^x134)^x135)/x136);

	if (t32 != -189212900276018LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint16_t x137 = 17163U;
	volatile uint64_t x138 = UINT64_MAX;
	volatile int32_t x139 = INT32_MAX;
	uint64_t x140 = UINT64_MAX;

	t33 = (((x137^x138)^x139)/x140);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = -20092;
	static volatile int64_t x142 = INT64_MIN;
	int64_t x143 = -303776203LL;
	uint64_t x144 = UINT64_MAX;

	t34 = (((x141^x142)^x143)/x144);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x145 = INT16_MAX;
	static volatile int8_t x146 = -1;
	int16_t x147 = INT16_MIN;
	int8_t x148 = INT8_MAX;
	volatile int32_t t35 = -8;

	t35 = (((x145^x146)^x147)/x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x150 = INT32_MIN;
	int8_t x151 = -1;
	int32_t x152 = -172376106;
	int32_t t36 = 865626;

	t36 = (((x149^x150)^x151)/x152);

	if (t36 != -12) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x153 = INT64_MIN;
	static int32_t x154 = INT32_MAX;
	int16_t x155 = -814;
	int8_t x156 = 7;

	t37 = (((x153^x154)^x155)/x156);

	if (t37 != 1317624576386756139LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x157 = 3298640U;
	uint64_t x159 = 13325265663552LLU;
	uint64_t t38 = 343942306LLU;

	t38 = (((x157^x158)^x159)/x160);

	if (t38 != 4442385642575LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x161 = 335U;
	int64_t x162 = INT64_MIN;
	uint32_t x163 = 59U;
	int64_t x164 = INT64_MAX;
	volatile int64_t t39 = 5876LL;

	t39 = (((x161^x162)^x163)/x164);

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x165 = 470U;
	static uint8_t x166 = UINT8_MAX;
	volatile int64_t x167 = INT64_MIN;
	uint8_t x168 = 11U;
	static int64_t t40 = 142LL;

	t40 = (((x165^x166)^x167)/x168);

	if (t40 != -838488366986797773LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x170 = INT32_MIN;
	int16_t x171 = INT16_MIN;
	int64_t x172 = -186817918794232LL;

	t41 = (((x169^x170)^x171)/x172);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x173 = -1;
	static uint32_t x175 = 3877U;
	uint32_t t42 = 749176382U;

	t42 = (((x173^x174)^x175)/x176);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x177 = -615;
	static int16_t x178 = INT16_MAX;
	static volatile int32_t x179 = 231995;
	static uint16_t x180 = 592U;
	int32_t t43 = 2292719;

	t43 = (((x177^x178)^x179)/x180);

	if (t43 != -439) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = -1LL;
	int64_t x182 = INT64_MAX;
	int32_t x184 = -1;
	static int64_t t44 = 930262LL;

	t44 = (((x181^x182)^x183)/x184);

	if (t44 != 9223372036854775640LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x185 = UINT16_MAX;
	int32_t x186 = INT32_MAX;
	static volatile uint64_t x187 = 671142195LLU;
	uint64_t t45 = 223273141062827LLU;

	t45 = (((x185^x186)^x187)/x188);

	if (t45 != 5789737LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = 1453058;
	int32_t x190 = INT32_MIN;
	static uint64_t x191 = 3704205910871LLU;
	volatile int64_t x192 = -3LL;

	t46 = (((x189^x190)^x191)/x192);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x193 = 16U;
	int16_t x195 = INT16_MIN;
	volatile int32_t t47 = 115727985;

	t47 = (((x193^x194)^x195)/x196);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x197 = 4U;
	int8_t x198 = 52;
	uint32_t x199 = UINT32_MAX;
	uint32_t t48 = 861U;

	t48 = (((x197^x198)^x199)/x200);

	if (t48 != 33818639U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x201 = -5;
	uint64_t x202 = 1892800875964369176LLU;
	int32_t x203 = -781;
	uint64_t x204 = 40653679741497LLU;
	volatile uint64_t t49 = 335885356205LLU;

	t49 = (((x201^x202)^x203)/x204);

	if (t49 != 46559LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x205 = 128972575LLU;
	volatile int8_t x206 = INT8_MAX;
	uint8_t x208 = 2U;
	uint64_t t50 = 1018254687918417LLU;

	t50 = (((x205^x206)^x207)/x208);

	if (t50 != 9223372036790289520LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x213 = 0U;
	static volatile int16_t x214 = INT16_MIN;
	int64_t x215 = 56169265115814737LL;
	int64_t t51 = -1266LL;

	t51 = (((x213^x214)^x215)/x216);

	if (t51 != 8024180730828678LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x218 = INT32_MIN;

	t52 = (((x217^x218)^x219)/x220);

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = -1;
	int32_t x222 = INT32_MAX;
	static int8_t x223 = -7;
	static int16_t x224 = -1;

	t53 = (((x221^x222)^x223)/x224);

	if (t53 != -2147483641) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x225 = 1;
	uint32_t x226 = 2722U;
	int8_t x227 = 28;
	volatile int16_t x228 = INT16_MIN;
	volatile uint32_t t54 = 2U;

	t54 = (((x225^x226)^x227)/x228);

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x229 = INT64_MIN;
	static int16_t x230 = INT16_MIN;
	int32_t x231 = -1;
	uint32_t x232 = 102608433U;
	static volatile int64_t t55 = 18527603LL;

	t55 = (((x229^x230)^x231)/x232);

	if (t55 != -89889025367LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x234 = 0U;
	int64_t x235 = INT64_MIN;
	volatile uint64_t x236 = 736LLU;
	uint64_t t56 = 273201107514LLU;

	t56 = (((x233^x234)^x235)/x236);

	if (t56 != 12531755484856987LLU) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x237 = INT64_MIN;
	uint16_t x238 = 107U;
	int32_t x239 = INT32_MIN;
	int32_t x240 = 3;
	static int64_t t57 = 1947778539329926LL;

	t57 = (((x237^x238)^x239)/x240);

	if (t57 != 3074457344902430755LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x242 = INT32_MIN;
	static int64_t x243 = INT64_MIN;
	static volatile int8_t x244 = INT8_MIN;
	static volatile int64_t t58 = 15671LL;

	t58 = (((x241^x242)^x243)/x244);

	if (t58 != 16777216LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = INT16_MIN;
	static int64_t x246 = INT64_MAX;
	volatile int32_t x248 = -1;
	static int64_t t59 = 0LL;

	t59 = (((x245^x246)^x247)/x248);

	if (t59 != 9223372035909212467LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x249 = INT8_MAX;
	int32_t x250 = INT32_MAX;
	int32_t x251 = INT32_MIN;
	int8_t x252 = INT8_MIN;
	int32_t t60 = -1070166834;

	t60 = (((x249^x250)^x251)/x252);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = -143850640;
	uint16_t x255 = 1U;
	uint64_t x256 = UINT64_MAX;
	static uint64_t t61 = 218LLU;

	t61 = (((x253^x254)^x255)/x256);

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x258 = 1073U;
	int64_t x259 = INT64_MAX;
	int64_t t62 = -1940743676LL;

	t62 = (((x257^x258)^x259)/x260);

	if (t62 != -36170086410616836LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x261 = 7;
	uint32_t x262 = 357218031U;
	int8_t x263 = INT8_MIN;
	static uint32_t x264 = 3U;
	static uint32_t t63 = 28U;

	t63 = (((x261^x262)^x263)/x264);

	if (t63 != 1312583117U) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x265 = INT64_MIN;
	int64_t x266 = -1LL;
	int8_t x267 = -1;
	static int16_t x268 = -17;
	volatile int64_t t64 = -346505LL;

	t64 = (((x265^x266)^x267)/x268);

	if (t64 != 542551296285575047LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x270 = INT64_MIN;
	int64_t x271 = INT64_MIN;
	static int32_t x272 = -1;

	t65 = (((x269^x270)^x271)/x272);

	if (t65 != 1LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint16_t x274 = 597U;
	volatile uint32_t x276 = 85362665U;
	static uint32_t t66 = 275866U;

	t66 = (((x273^x274)^x275)/x276);

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x277 = -1;
	int32_t x280 = -290;
	static volatile int64_t t67 = 461068LL;

	t67 = (((x277^x278)^x279)/x280);

	if (t67 != 31804731154163076LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x281 = INT32_MAX;
	int16_t x282 = INT16_MIN;
	static int32_t x283 = -623;
	static volatile int64_t x284 = -1LL;
	static int64_t t68 = 0LL;

	t68 = (((x281^x282)^x283)/x284);

	if (t68 != -2147451502LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x285 = INT16_MIN;
	int64_t x286 = INT64_MIN;
	volatile uint64_t t69 = 284LLU;

	t69 = (((x285^x286)^x287)/x288);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x289 = 25U;
	int32_t x290 = INT32_MIN;
	uint8_t x291 = 5U;
	static int64_t x292 = 3858345286599894LL;

	t70 = (((x289^x290)^x291)/x292);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x293 = -6145;
	int16_t x294 = INT16_MIN;
	int8_t x296 = -1;
	int32_t t71 = 84399;

	t71 = (((x293^x294)^x295)/x296);

	if (t71 != -26612) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x297 = -1;
	uint64_t x300 = 254601LLU;
	volatile uint64_t t72 = 5506LLU;

	t72 = (((x297^x298)^x299)/x300);

	if (t72 != 72453541320377LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x301 = INT64_MAX;
	static int16_t x302 = INT16_MIN;
	volatile int8_t x303 = INT8_MIN;
	static int64_t x304 = INT64_MAX;
	int64_t t73 = -71027449609LL;

	t73 = (((x301^x302)^x303)/x304);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x305 = UINT64_MAX;
	uint64_t x306 = 4425LLU;
	uint64_t t74 = 830126317713LLU;

	t74 = (((x305^x306)^x307)/x308);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x309 = 3280;
	volatile int64_t x310 = 49907125921917LL;
	static volatile int32_t x312 = -178;
	int64_t t75 = -71606955259759164LL;

	t75 = (((x309^x310)^x311)/x312);

	if (t75 != -280377111914LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x313 = INT32_MIN;
	uint64_t x314 = 236374LLU;
	volatile uint16_t x315 = 25887U;
	volatile int8_t x316 = -3;
	volatile uint64_t t76 = 12462442004215807LLU;

	t76 = (((x313^x314)^x315)/x316);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x317 = 0;
	int16_t x318 = INT16_MIN;
	uint32_t x319 = 129284U;
	volatile int8_t x320 = -55;
	static uint32_t t77 = 15161U;

	t77 = (((x317^x318)^x319)/x320);

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x321 = UINT32_MAX;
	static int8_t x322 = -1;
	int64_t x324 = INT64_MIN;
	int64_t t78 = 60300095640547511LL;

	t78 = (((x321^x322)^x323)/x324);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x325 = INT64_MIN;
	uint8_t x326 = 2U;
	int64_t x327 = 997289LL;
	int8_t x328 = INT8_MAX;
	static int64_t t79 = 15607LL;

	t79 = (((x325^x326)^x327)/x328);

	if (t79 != -72624976668139988LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x329 = -1;
	int32_t x330 = -2;
	static int8_t x332 = INT8_MAX;
	volatile int32_t t80 = -106693630;

	t80 = (((x329^x330)^x331)/x332);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x333 = INT64_MAX;
	volatile int8_t x334 = -1;
	volatile uint8_t x335 = 0U;
	int64_t x336 = 24178LL;

	t81 = (((x333^x334)^x335)/x336);

	if (t81 != -381477873970335LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x338 = 6U;
	int32_t x340 = -1;

	t82 = (((x337^x338)^x339)/x340);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x342 = -1;
	uint8_t x343 = 1U;
	static int64_t x344 = INT64_MIN;
	volatile int64_t t83 = 81206960750557069LL;

	t83 = (((x341^x342)^x343)/x344);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x345 = -1;
	volatile uint64_t x346 = UINT64_MAX;
	volatile int32_t x347 = INT32_MAX;
	uint16_t x348 = 5724U;

	t84 = (((x345^x346)^x347)/x348);

	if (t84 != 375171LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x349 = INT32_MIN;
	int32_t x351 = INT32_MIN;
	uint64_t x352 = 507561772470091LLU;
	uint64_t t85 = 8278918940966LLU;

	t85 = (((x349^x350)^x351)/x352);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x354 = INT16_MIN;
	int32_t x355 = -27855874;
	static int64_t x356 = -1LL;
	volatile int64_t t86 = -5116113750638695LL;

	t86 = (((x353^x354)^x355)/x356);

	if (t86 != -4267084801LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x357 = 3U;
	int32_t x358 = INT32_MAX;
	volatile int16_t x359 = -1;
	int16_t x360 = 705;
	static int32_t t87 = -4588759;

	t87 = (((x357^x358)^x359)/x360);

	if (t87 != -3046076) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x361 = 294LLU;
	volatile int16_t x362 = -1;
	static int8_t x363 = INT8_MIN;
	uint8_t x364 = 28U;

	t88 = (((x361^x362)^x363)/x364);

	if (t88 != 12LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x365 = 0U;
	static int32_t x366 = -1;
	int64_t x367 = INT64_MIN;
	int32_t x368 = INT32_MAX;
	volatile int64_t t89 = -2637LL;

	t89 = (((x365^x366)^x367)/x368);

	if (t89 != 4294967298LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int64_t x369 = INT64_MAX;
	uint64_t x370 = 236957124831104LLU;
	int16_t x371 = 847;
	volatile uint32_t x372 = 6999U;
	uint64_t t90 = 27185053LLU;

	t90 = (((x369^x370)^x371)/x372);

	if (t90 != 1317778979815680LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x373 = INT16_MIN;
	int64_t x375 = 933427150453688LL;
	uint64_t t91 = 793204969LLU;

	t91 = (((x373^x374)^x375)/x376);

	if (t91 != 933427150423111LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint64_t x377 = UINT64_MAX;

	t92 = (((x377^x378)^x379)/x380);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x382 = INT32_MIN;
	int16_t x383 = INT16_MIN;
	int16_t x384 = 1;
	int64_t t93 = -12233975LL;

	t93 = (((x381^x382)^x383)/x384);

	if (t93 != -2147450881LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x385 = -9;
	uint8_t x386 = 8U;
	volatile int16_t x387 = INT16_MAX;
	uint32_t x388 = 3399743U;
	static uint32_t t94 = 1318539U;

	t94 = (((x385^x386)^x387)/x388);

	if (t94 != 1263U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x389 = -92780520467989LL;
	int64_t x390 = INT64_MAX;
	int16_t x391 = -1;
	static int64_t t95 = -278640285LL;

	t95 = (((x389^x390)^x391)/x392);

	if (t95 != 1783309987690314LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x393 = INT8_MIN;
	static uint64_t x394 = 4LLU;
	static int32_t x395 = -1524;

	t96 = (((x393^x394)^x395)/x396);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x397 = -794088;
	int32_t x398 = -1;
	int16_t x400 = INT16_MAX;
	int32_t t97 = 856;

	t97 = (((x397^x398)^x399)/x400);

	if (t97 != -24) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x401 = 219U;
	static int8_t x402 = 0;
	int16_t x403 = 1246;
	uint32_t t98 = 267457112U;

	t98 = (((x401^x402)^x403)/x404);

	if (t98 != 147U) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x405 = INT16_MIN;
	uint16_t x407 = 205U;
	int8_t x408 = -1;
	volatile int64_t t99 = 62LL;

	t99 = (((x405^x406)^x407)/x408);

	if (t99 != -9223372036854743245LL) { NG(); } else { ; }
	
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

