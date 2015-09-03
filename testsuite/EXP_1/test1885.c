#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x4 = -1LL;
int64_t t0 = 4587327433490LL;
int32_t x16 = INT32_MAX;
int16_t x19 = INT16_MIN;
volatile int32_t t5 = -880;
int64_t x30 = INT64_MIN;
static uint64_t x35 = 75016390874380LLU;
uint16_t x36 = UINT16_MAX;
volatile uint64_t t7 = 491LLU;
int32_t x40 = 562548;
static int64_t x41 = INT64_MIN;
uint32_t x45 = 7U;
int16_t x56 = INT16_MIN;
int32_t x60 = INT32_MAX;
int64_t x67 = -1LL;
uint64_t x72 = 167679LLU;
uint8_t x75 = UINT8_MAX;
volatile int8_t x76 = INT8_MIN;
uint8_t x78 = UINT8_MAX;
static int64_t x82 = 1466463476089LL;
uint64_t x83 = 8LLU;
uint16_t x84 = 1143U;
static volatile int32_t t20 = -26693;
int8_t x96 = INT8_MIN;
volatile uint64_t t21 = 434461LLU;
static volatile uint8_t x100 = 0U;
int64_t x101 = INT64_MAX;
volatile int64_t t23 = 9984847030809LL;
int32_t x105 = INT32_MIN;
uint32_t x107 = UINT32_MAX;
int8_t x111 = -6;
uint32_t x117 = UINT32_MAX;
volatile int8_t x118 = -25;
volatile int32_t x121 = -571;
volatile uint16_t x122 = 6786U;
int32_t x124 = 3;
int16_t x125 = INT16_MAX;
uint8_t x129 = UINT8_MAX;
int32_t x134 = 2388939;
static int8_t x136 = INT8_MIN;
static int64_t x143 = INT64_MIN;
volatile int8_t x148 = -1;
static int64_t x154 = INT64_MIN;
int32_t x155 = INT32_MIN;
int16_t x158 = -11;
volatile uint64_t t37 = 303425313784LLU;
volatile uint16_t x164 = 28347U;
int16_t x167 = INT16_MAX;
int8_t x176 = 0;
int64_t x178 = -1LL;
int32_t x181 = INT32_MIN;
volatile int64_t t42 = INT64_MIN;
int32_t x188 = -508986904;
int8_t x189 = INT8_MAX;
volatile int8_t x190 = 0;
uint16_t x191 = 5430U;
int8_t x194 = -1;
uint8_t x198 = UINT8_MAX;
int64_t x202 = INT64_MIN;
uint64_t t47 = 1308864320760147LLU;
static int8_t x205 = 13;
static uint32_t t49 = 0U;
int8_t x213 = -1;
volatile int8_t x214 = INT8_MAX;
int32_t x216 = INT32_MAX;
int8_t x221 = INT8_MIN;
int64_t x224 = 333234719057LL;
static volatile int64_t t51 = 566415152793208362LL;
uint64_t x226 = 133229LLU;
static uint64_t t52 = 1066753LLU;
volatile int32_t x237 = -4;
int32_t x240 = -1;
int64_t x242 = -3067618847406089LL;
volatile int64_t x244 = INT64_MAX;
uint8_t x253 = UINT8_MAX;
uint32_t x255 = 0U;
static volatile int32_t x259 = INT32_MAX;
int32_t x266 = -22416;
uint16_t x269 = UINT16_MAX;
int16_t x271 = INT16_MAX;
static int64_t t62 = 96989847036LL;
uint8_t x279 = 17U;
int16_t x280 = INT16_MIN;
int32_t x295 = INT32_MIN;
int8_t x303 = -1;
volatile int64_t t71 = 38495016929830291LL;
int64_t t72 = 2408496799369090LL;
volatile int64_t x315 = INT64_MIN;
static volatile uint64_t t73 = 889308218764LLU;
static int32_t x324 = INT32_MIN;
int32_t t75 = 197280;
int32_t x325 = -1;
volatile int16_t x326 = -1;
volatile int64_t t76 = 56776001925557LL;
uint16_t x329 = 87U;
static volatile int32_t x332 = -1;
static int16_t x335 = INT16_MIN;
uint8_t x339 = UINT8_MAX;
int8_t x344 = -1;
int64_t x357 = INT64_MIN;
uint8_t x359 = UINT8_MAX;
int16_t x368 = -178;
uint16_t x370 = 1820U;
int64_t x372 = INT64_MIN;
volatile int8_t x376 = INT8_MIN;
int16_t x390 = INT16_MAX;
int8_t x392 = 12;
uint64_t x393 = 0LLU;
uint16_t x395 = 183U;
int16_t x396 = 779;
int32_t x401 = INT32_MIN;
volatile int64_t t93 = -48LL;
uint64_t t94 = 1977496486144884LLU;
uint16_t x415 = UINT16_MAX;
int8_t x417 = -1;
static int16_t x419 = INT16_MIN;
volatile uint32_t t97 = 5405U;
volatile int32_t t98 = -3762;
int8_t x426 = INT8_MAX;
int32_t x427 = -1;


void f0(void) {
	uint8_t x1 = UINT8_MAX;
	uint32_t x2 = 7U;
	int32_t x3 = INT32_MIN;

	t0 = (((x1|x2)-x3)^x4);

	if (t0 != -2147483904LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x9 = -1;
	volatile int8_t x10 = INT8_MIN;
	int64_t x11 = 97709499339032619LL;
	int16_t x12 = -1;
	volatile int64_t t1 = 3292448007944141459LL;

	t1 = (((x9|x10)-x11)^x12);

	if (t1 != 97709499339032619LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MIN;
	int32_t x14 = INT32_MIN;
	volatile uint32_t x15 = UINT32_MAX;
	volatile uint32_t t2 = 32U;

	t2 = (((x13|x14)-x15)^x16);

	if (t2 != 4294967294U) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x17 = INT32_MIN;
	int32_t x18 = INT32_MAX;
	int8_t x20 = INT8_MIN;
	volatile int32_t t3 = 7;

	t3 = (((x17|x18)-x19)^x20);

	if (t3 != -32641) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x21 = UINT64_MAX;
	uint16_t x22 = 20U;
	uint32_t x23 = 0U;
	volatile uint8_t x24 = 1U;
	uint64_t t4 = 118723LLU;

	t4 = (((x21|x22)-x23)^x24);

	if (t4 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x25 = 5U;
	volatile int32_t x26 = INT32_MIN;
	static int16_t x27 = INT16_MIN;
	static volatile int32_t x28 = INT32_MIN;

	t5 = (((x25|x26)-x27)^x28);

	if (t5 != 32773) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x29 = INT64_MAX;
	int16_t x31 = INT16_MIN;
	uint32_t x32 = 407490099U;
	volatile int64_t t6 = 0LL;

	t6 = (((x29|x30)-x31)^x32);

	if (t6 != 407482828LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MAX;
	uint16_t x34 = 6436U;

	t7 = (((x33|x34)-x35)^x36);

	if (t7 != 18446669057318655244LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MIN;
	static volatile int32_t x38 = INT32_MAX;
	volatile int8_t x39 = INT8_MAX;
	int32_t t8 = -5764;

	t8 = (((x37|x38)-x39)^x40);

	if (t8 != -562444) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x42 = 1146747998622544160LL;
	static uint8_t x43 = 34U;
	static volatile int32_t x44 = INT32_MIN;
	int64_t t9 = -13800744634LL;

	t9 = (((x41|x42)-x43)^x44);

	if (t9 != 8076624037184893182LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x46 = 0;
	uint16_t x47 = 3181U;
	static int32_t x48 = -1;
	volatile uint32_t t10 = 233880097U;

	t10 = (((x45|x46)-x47)^x48);

	if (t10 != 3173U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = -1;
	static int64_t x54 = INT64_MIN;
	uint16_t x55 = 3U;
	int64_t t11 = 2692672LL;

	t11 = (((x53|x54)-x55)^x56);

	if (t11 != 32764LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x57 = 648092463U;
	int16_t x58 = -167;
	uint8_t x59 = 17U;
	uint32_t t12 = 74U;

	t12 = (((x57|x58)-x59)^x60);

	if (t12 != 2147483793U) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = -4285167777278246285LL;
	uint8_t x62 = UINT8_MAX;
	uint32_t x63 = UINT32_MAX;
	uint64_t x64 = 4305136328629940LLU;
	uint64_t t13 = 5358946016LLU;

	t13 = (((x61|x62)-x63)^x64);

	if (t13 != 14161373198862687668LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = INT32_MAX;
	static int32_t x66 = -1;
	int8_t x68 = 0;
	int64_t t14 = 123766162LL;

	t14 = (((x65|x66)-x67)^x68);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = UINT16_MAX;
	int32_t x70 = INT32_MIN;
	uint16_t x71 = 186U;
	volatile uint64_t t15 = 840553332137076602LLU;

	t15 = (((x69|x70)-x71)^x72);

	if (t15 != 18446744071562228154LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x73 = 724U;
	int8_t x74 = 7;
	int32_t t16 = -372;

	t16 = (((x73|x74)-x75)^x76);

	if (t16 != -424) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x77 = 2U;
	int32_t x79 = -1;
	int16_t x80 = INT16_MIN;
	volatile int32_t t17 = -243401;

	t17 = (((x77|x78)-x79)^x80);

	if (t17 != -32512) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = -1;
	uint64_t t18 = 74232639LLU;

	t18 = (((x81|x82)-x83)^x84);

	if (t18 != 18446744073709550464LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = -1;
	int32_t x86 = 17980;
	int8_t x87 = INT8_MAX;
	static int8_t x88 = -1;
	static int32_t t19 = -490829;

	t19 = (((x85|x86)-x87)^x88);

	if (t19 != 127) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x89 = INT32_MAX;
	volatile uint8_t x90 = 3U;
	static uint8_t x91 = 12U;
	int8_t x92 = INT8_MAX;

	t20 = (((x89|x90)-x91)^x92);

	if (t20 != 2147483532) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x93 = UINT8_MAX;
	static uint64_t x94 = 23967145117LLU;
	int64_t x95 = INT64_MIN;

	t21 = (((x93|x94)-x95)^x96);

	if (t21 != 9223372012887630719LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x97 = INT64_MAX;
	int16_t x98 = INT16_MAX;
	volatile int8_t x99 = 20;
	int64_t t22 = 25537LL;

	t22 = (((x97|x98)-x99)^x100);

	if (t22 != 9223372036854775787LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x102 = 2U;
	static uint16_t x103 = UINT16_MAX;
	uint16_t x104 = 0U;

	t23 = (((x101|x102)-x103)^x104);

	if (t23 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x106 = 0;
	int32_t x108 = INT32_MIN;
	volatile uint32_t t24 = 57064U;

	t24 = (((x105|x106)-x107)^x108);

	if (t24 != 1U) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x109 = 11143U;
	uint64_t x110 = 245548999091105LLU;
	volatile int16_t x112 = INT16_MAX;
	volatile uint64_t t25 = 2LLU;

	t25 = (((x109|x110)-x111)^x112);

	if (t25 != 245548999103570LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = INT8_MIN;
	int32_t x114 = INT32_MIN;
	uint64_t x115 = 3042799LLU;
	uint16_t x116 = 42U;
	volatile uint64_t t26 = 21364780989088630LLU;

	t26 = (((x113|x114)-x115)^x116);

	if (t26 != 18446744073706508731LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x119 = -1;
	static int8_t x120 = 3;
	volatile uint32_t t27 = 30324U;

	t27 = (((x117|x118)-x119)^x120);

	if (t27 != 3U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x123 = INT8_MAX;
	volatile int32_t t28 = -23388;

	t28 = (((x121|x122)-x123)^x124);

	if (t28 != -181) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x126 = INT16_MIN;
	static int16_t x127 = 0;
	int8_t x128 = 1;
	static volatile int32_t t29 = 2;

	t29 = (((x125|x126)-x127)^x128);

	if (t29 != -2) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x130 = -807591662930LL;
	int8_t x131 = INT8_MIN;
	uint64_t x132 = 34827721517LLU;
	volatile uint64_t t30 = 304383652070019825LLU;

	t30 = (((x129|x130)-x131)^x132);

	if (t30 != 18446743300282904658LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x133 = INT16_MIN;
	int8_t x135 = INT8_MAX;
	int32_t t31 = 7866;

	t31 = (((x133|x134)-x135)^x136);

	if (t31 != 3276) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x137 = INT16_MIN;
	int64_t x138 = INT64_MIN;
	int32_t x139 = INT32_MIN;
	volatile int64_t x140 = INT64_MIN;
	volatile int64_t t32 = 48314197965LL;

	t32 = (((x137|x138)-x139)^x140);

	if (t32 != -9223372034707324928LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = INT64_MIN;
	uint16_t x142 = 38U;
	uint16_t x144 = 432U;
	int64_t t33 = -380144LL;

	t33 = (((x141|x142)-x143)^x144);

	if (t33 != 406LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x145 = INT8_MIN;
	int64_t x146 = -246431151927356837LL;
	static uint8_t x147 = UINT8_MAX;
	int64_t t34 = 958843717LL;

	t34 = (((x145|x146)-x147)^x148);

	if (t34 != 291LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x149 = 6U;
	int16_t x150 = INT16_MIN;
	int32_t x151 = INT32_MIN;
	int8_t x152 = -2;
	uint32_t t35 = 1U;

	t35 = (((x149|x150)-x151)^x152);

	if (t35 != 2147516408U) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x153 = INT8_MAX;
	static int8_t x156 = INT8_MAX;
	static int64_t t36 = -8494400823331LL;

	t36 = (((x153|x154)-x155)^x156);

	if (t36 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x157 = 3553794857076829LLU;
	uint32_t x159 = UINT32_MAX;
	volatile uint16_t x160 = 4665U;

	t37 = (((x157|x158)-x159)^x160);

	if (t37 != 18446744069414579655LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x161 = INT8_MAX;
	int64_t x162 = 246380266906962LL;
	volatile int32_t x163 = INT32_MAX;
	int64_t t38 = -67035056920272LL;

	t38 = (((x161|x162)-x163)^x164);

	if (t38 != 246378119400251LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x165 = INT16_MIN;
	volatile uint16_t x166 = 89U;
	uint32_t x168 = 4392U;
	volatile uint32_t t39 = 32184U;

	t39 = (((x165|x166)-x167)^x168);

	if (t39 != 4294906226U) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x173 = 5U;
	uint8_t x174 = 1U;
	uint8_t x175 = UINT8_MAX;
	int32_t t40 = 11780833;

	t40 = (((x173|x174)-x175)^x176);

	if (t40 != -250) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x177 = 53;
	static int64_t x179 = -2703LL;
	uint64_t x180 = 32LLU;
	volatile uint64_t t41 = 710873580723456574LLU;

	t41 = (((x177|x178)-x179)^x180);

	if (t41 != 2734LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x182 = -1LL;
	int64_t x183 = INT64_MAX;
	uint8_t x184 = 0U;

	t42 = (((x181|x182)-x183)^x184);

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x185 = UINT64_MAX;
	uint16_t x186 = UINT16_MAX;
	uint16_t x187 = 31U;
	uint64_t t43 = 34981724477454961LLU;

	t43 = (((x185|x186)-x187)^x188);

	if (t43 != 508986888LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x192 = UINT64_MAX;
	uint64_t t44 = 297675665448LLU;

	t44 = (((x189|x190)-x191)^x192);

	if (t44 != 5302LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x193 = INT64_MIN;
	static uint8_t x195 = UINT8_MAX;
	int64_t x196 = INT64_MIN;
	volatile int64_t t45 = -1LL;

	t45 = (((x193|x194)-x195)^x196);

	if (t45 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x197 = 3U;
	int8_t x199 = 1;
	int64_t x200 = INT64_MAX;
	int64_t t46 = 1LL;

	t46 = (((x197|x198)-x199)^x200);

	if (t46 != 9223372036854775553LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x201 = UINT64_MAX;
	int32_t x203 = INT32_MAX;
	volatile int16_t x204 = 30;

	t47 = (((x201|x202)-x203)^x204);

	if (t47 != 18446744071562067998LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x206 = 16261410926648586LLU;
	static uint8_t x207 = 77U;
	int8_t x208 = -1;
	uint64_t t48 = 119560593888028385LLU;

	t48 = (((x205|x206)-x207)^x208);

	if (t48 != 18430482662782903101LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x209 = 2417732U;
	int32_t x210 = -120153804;
	static int32_t x211 = INT32_MIN;
	uint32_t x212 = UINT32_MAX;

	t49 = (((x209|x210)-x211)^x212);

	if (t49 != 2265514635U) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x215 = UINT64_MAX;
	volatile uint64_t t50 = 2319LLU;

	t50 = (((x213|x214)-x215)^x216);

	if (t50 != 2147483647LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x222 = 17875LL;
	int64_t x223 = -1LL;

	t51 = (((x221|x222)-x223)^x224);

	if (t51 != -333234719099LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x225 = 7492U;
	volatile int64_t x227 = INT64_MAX;
	int32_t x228 = INT32_MAX;

	t52 = (((x225|x226)-x227)^x228);

	if (t52 != 9223372039002120849LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x229 = INT32_MAX;
	int8_t x230 = 16;
	uint16_t x231 = 3567U;
	volatile int8_t x232 = -1;
	volatile int32_t t53 = 1988425;

	t53 = (((x229|x230)-x231)^x232);

	if (t53 != -2147480081) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x233 = INT32_MAX;
	volatile int8_t x234 = -1;
	uint64_t x235 = 254LLU;
	int64_t x236 = INT64_MAX;
	uint64_t t54 = 3275849592619642037LLU;

	t54 = (((x233|x234)-x235)^x236);

	if (t54 != 9223372036854776062LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x238 = -1LL;
	int64_t x239 = INT64_MAX;
	int64_t t55 = INT64_MAX;

	t55 = (((x237|x238)-x239)^x240);

	if (t55 != INT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x241 = INT16_MIN;
	volatile uint64_t x243 = 94374313LLU;
	volatile uint64_t t56 = 787142079898281877LLU;

	t56 = (((x241|x242)-x243)^x244);

	if (t56 != 9223372036949164465LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x245 = INT16_MAX;
	volatile int8_t x246 = INT8_MAX;
	uint16_t x247 = UINT16_MAX;
	int64_t x248 = INT64_MIN;
	volatile int64_t t57 = -192LL;

	t57 = (((x245|x246)-x247)^x248);

	if (t57 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x249 = -1;
	int16_t x250 = -1;
	uint8_t x251 = 24U;
	int32_t x252 = -1;
	int32_t t58 = 49;

	t58 = (((x249|x250)-x251)^x252);

	if (t58 != 24) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x254 = INT32_MAX;
	int64_t x256 = INT64_MAX;
	int64_t t59 = -2311821191484419499LL;

	t59 = (((x253|x254)-x255)^x256);

	if (t59 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x257 = 12721350096547LLU;
	static uint64_t x258 = UINT64_MAX;
	static int32_t x260 = INT32_MIN;
	volatile uint64_t t60 = 113LLU;

	t60 = (((x257|x258)-x259)^x260);

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x265 = INT8_MAX;
	int16_t x267 = 597;
	static int64_t x268 = INT64_MIN;
	volatile int64_t t61 = -755LL;

	t61 = (((x265|x266)-x267)^x268);

	if (t61 != 9223372036854752810LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x270 = INT64_MIN;
	int32_t x272 = INT32_MIN;

	t62 = (((x269|x270)-x271)^x272);

	if (t62 != 9223372034707324928LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x273 = 1;
	int16_t x274 = -1996;
	int16_t x275 = 166;
	static int32_t x276 = -1;
	volatile int32_t t63 = 1611;

	t63 = (((x273|x274)-x275)^x276);

	if (t63 != 2160) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x277 = INT32_MIN;
	uint16_t x278 = UINT16_MAX;
	volatile int32_t t64 = -257219;

	t64 = (((x277|x278)-x279)^x280);

	if (t64 != 2147450862) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x281 = 0LL;
	uint32_t x282 = 0U;
	static volatile uint64_t x283 = 568149542329381681LLU;
	static int8_t x284 = 2;
	volatile uint64_t t65 = 179016660049537LLU;

	t65 = (((x281|x282)-x283)^x284);

	if (t65 != 17878594531380169933LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x285 = -1;
	volatile uint8_t x286 = 6U;
	uint32_t x287 = 61049860U;
	volatile uint64_t x288 = UINT64_MAX;
	uint64_t t66 = 0LLU;

	t66 = (((x285|x286)-x287)^x288);

	if (t66 != 18446744069475634180LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int16_t x289 = INT16_MIN;
	uint16_t x290 = 319U;
	volatile int16_t x291 = 5;
	int32_t x292 = INT32_MIN;
	volatile int32_t t67 = 1149;

	t67 = (((x289|x290)-x291)^x292);

	if (t67 != 2147451194) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x293 = INT8_MAX;
	int64_t x294 = -907954360818508702LL;
	volatile uint64_t x296 = 9631199040LLU;
	uint64_t t68 = 15327432896LLU;

	t68 = (((x293|x294)-x295)^x296);

	if (t68 != 17538789707422708543LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x297 = 16U;
	int8_t x298 = 23;
	uint16_t x299 = 7024U;
	int8_t x300 = INT8_MIN;
	static volatile int32_t t69 = 666887752;

	t69 = (((x297|x298)-x299)^x300);

	if (t69 != 6951) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x301 = INT64_MIN;
	uint8_t x302 = 3U;
	int8_t x304 = INT8_MIN;
	int64_t t70 = 132957324877LL;

	t70 = (((x301|x302)-x303)^x304);

	if (t70 != 9223372036854775684LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x305 = INT64_MIN;
	int16_t x306 = -3251;
	int8_t x307 = -1;
	uint8_t x308 = 5U;

	t71 = (((x305|x306)-x307)^x308);

	if (t71 != -3253LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x309 = INT32_MAX;
	int64_t x310 = INT64_MIN;
	int8_t x311 = -1;
	volatile int16_t x312 = -1;

	t72 = (((x309|x310)-x311)^x312);

	if (t72 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x313 = 13;
	volatile uint64_t x314 = 5804185LLU;
	int8_t x316 = 1;

	t73 = (((x313|x314)-x315)^x316);

	if (t73 != 9223372036860579996LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x317 = UINT32_MAX;
	int64_t x318 = -1LL;
	int8_t x319 = -1;
	int8_t x320 = INT8_MIN;
	volatile int64_t t74 = 33247384425706552LL;

	t74 = (((x317|x318)-x319)^x320);

	if (t74 != -128LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x321 = 0;
	volatile uint16_t x322 = 173U;
	static int8_t x323 = -1;

	t75 = (((x321|x322)-x323)^x324);

	if (t75 != -2147483474) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x327 = -3;
	int64_t x328 = 14463LL;

	t76 = (((x325|x326)-x327)^x328);

	if (t76 != 14461LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x330 = UINT32_MAX;
	volatile int32_t x331 = INT32_MIN;
	static volatile uint32_t t77 = 8U;

	t77 = (((x329|x330)-x331)^x332);

	if (t77 != 2147483648U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x333 = -78308621199LL;
	int64_t x334 = INT64_MIN;
	volatile int64_t x336 = INT64_MIN;
	int64_t t78 = 81265921LL;

	t78 = (((x333|x334)-x335)^x336);

	if (t78 != 9223371958546187377LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x337 = -1;
	int8_t x338 = INT8_MAX;
	uint32_t x340 = UINT32_MAX;
	static volatile uint32_t t79 = 0U;

	t79 = (((x337|x338)-x339)^x340);

	if (t79 != 255U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x341 = 87455LLU;
	static uint8_t x342 = 97U;
	uint8_t x343 = UINT8_MAX;
	uint64_t t80 = 2237977414955732LLU;

	t80 = (((x341|x342)-x343)^x344);

	if (t80 != 18446744073709464319LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x345 = INT8_MIN;
	uint8_t x346 = 70U;
	volatile int8_t x347 = -1;
	uint8_t x348 = 3U;
	int32_t t81 = -940;

	t81 = (((x345|x346)-x347)^x348);

	if (t81 != -60) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x349 = 0;
	static volatile int8_t x350 = 1;
	int16_t x351 = -1;
	uint8_t x352 = 8U;
	volatile int32_t t82 = 1;

	t82 = (((x349|x350)-x351)^x352);

	if (t82 != 10) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x353 = 524U;
	uint8_t x354 = 0U;
	volatile uint32_t x355 = 154541775U;
	volatile uint16_t x356 = UINT16_MAX;
	uint32_t t83 = 136915511U;

	t83 = (((x353|x354)-x355)^x356);

	if (t83 != 4140375234U) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x358 = UINT16_MAX;
	static uint64_t x360 = UINT64_MAX;
	volatile uint64_t t84 = 287080474679LLU;

	t84 = (((x357|x358)-x359)^x360);

	if (t84 != 9223372036854710527LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x361 = INT64_MIN;
	static int8_t x362 = INT8_MAX;
	uint64_t x363 = 3808LLU;
	volatile uint64_t x364 = 9LLU;
	uint64_t t85 = 7047972010699855914LLU;

	t85 = (((x361|x362)-x363)^x364);

	if (t85 != 9223372036854772118LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x365 = -1;
	uint16_t x366 = UINT16_MAX;
	static uint16_t x367 = 4915U;
	int32_t t86 = 93;

	t86 = (((x365|x366)-x367)^x368);

	if (t86 != 4994) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x369 = 25;
	int64_t x371 = -149989941192778LL;
	int64_t t87 = -6393448437038934LL;

	t87 = (((x369|x370)-x371)^x372);

	if (t87 != -9223222046913581209LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x373 = 268147687LLU;
	int64_t x374 = -371LL;
	int16_t x375 = INT16_MAX;
	volatile uint64_t t88 = 1LLU;

	t88 = (((x373|x374)-x375)^x376);

	if (t88 != 32880LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x381 = INT64_MIN;
	uint32_t x382 = UINT32_MAX;
	uint8_t x383 = 1U;
	uint16_t x384 = UINT16_MAX;
	volatile int64_t t89 = -28257LL;

	t89 = (((x381|x382)-x383)^x384);

	if (t89 != -9223372032559874047LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x385 = 252344LLU;
	int16_t x386 = INT16_MIN;
	static volatile int8_t x387 = INT8_MIN;
	static uint8_t x388 = 3U;
	uint64_t t90 = 16LLU;

	t90 = (((x385|x386)-x387)^x388);

	if (t90 != 18446744073709541947LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x389 = 1153457898LL;
	int32_t x391 = -6011;
	volatile int64_t t91 = 1382157732597423LL;

	t91 = (((x389|x390)-x391)^x392);

	if (t91 != 1153472374LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x394 = INT64_MIN;
	volatile uint64_t t92 = 188961881328535LLU;

	t92 = (((x393|x394)-x395)^x396);

	if (t92 != 9223372036854774850LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x402 = -1;
	int32_t x403 = -956726;
	static int64_t x404 = -3201090951770201340LL;

	t93 = (((x401|x402)-x403)^x404);

	if (t93 != -3201090951769769423LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x405 = -26;
	uint32_t x406 = 861U;
	uint64_t x407 = 2556673LLU;
	uint64_t x408 = 75012465135102LLU;

	t94 = (((x405|x406)-x407)^x408);

	if (t94 != 75015035711744LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x409 = 1U;
	int16_t x410 = -1;
	int8_t x411 = INT8_MIN;
	uint8_t x412 = UINT8_MAX;
	int32_t t95 = 216;

	t95 = (((x409|x410)-x411)^x412);

	if (t95 != 128) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x413 = UINT16_MAX;
	int64_t x414 = 500422787820LL;
	static uint8_t x416 = 2U;
	volatile int64_t t96 = -5861391LL;

	t96 = (((x413|x414)-x415)^x416);

	if (t96 != 500422737922LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x418 = UINT32_MAX;
	volatile uint16_t x420 = 1U;

	t97 = (((x417|x418)-x419)^x420);

	if (t97 != 32766U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x421 = INT8_MIN;
	volatile uint16_t x422 = 310U;
	static int16_t x423 = -1991;
	int8_t x424 = -1;

	t98 = (((x421|x422)-x423)^x424);

	if (t98 != -1918) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x425 = UINT8_MAX;
	uint32_t x428 = UINT32_MAX;
	volatile uint32_t t99 = 36008U;

	t99 = (((x425|x426)-x427)^x428);

	if (t99 != 4294967039U) { NG(); } else { ; }
	
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

