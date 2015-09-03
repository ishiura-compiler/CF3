#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x7 = -1;
uint16_t x9 = UINT16_MAX;
int8_t x12 = INT8_MIN;
int8_t x16 = INT8_MAX;
int16_t x20 = INT16_MIN;
static uint64_t x24 = 8809615LLU;
static int16_t x25 = -1;
int32_t x35 = 4;
int32_t x37 = INT32_MAX;
int64_t t8 = 17095947863966222LL;
volatile int8_t x45 = -1;
uint64_t x48 = UINT64_MAX;
uint32_t x66 = UINT32_MAX;
static volatile uint64_t t13 = 1254996446LLU;
uint16_t x96 = 3791U;
uint32_t x101 = 0U;
volatile int64_t x107 = 712LL;
int64_t t19 = 5948791553742LL;
static volatile int32_t x120 = -1;
volatile uint16_t x123 = 144U;
int64_t x151 = 1LL;
int32_t x156 = INT32_MIN;
static uint64_t t31 = 132037128LLU;
int32_t x176 = INT32_MIN;
int16_t x182 = -1;
volatile int32_t t34 = -5;
int8_t x189 = INT8_MIN;
uint16_t x202 = UINT16_MAX;
int32_t t38 = 14495265;
static volatile uint64_t x208 = 15300204LLU;
uint16_t x217 = 114U;
int32_t x223 = -1;
uint64_t x229 = 5202149527LLU;
int16_t x231 = -7750;
uint64_t t44 = 13666448LLU;
int32_t x246 = INT32_MIN;
static uint64_t x253 = 4289679897LLU;
volatile int64_t t54 = -77LL;
int16_t x283 = 7996;
static int64_t x284 = -28996154LL;
int8_t x295 = -11;
volatile int64_t x297 = INT64_MIN;
uint64_t t57 = 3LLU;
static int64_t t58 = -100LL;
static uint32_t x321 = UINT32_MAX;
static int8_t x324 = INT8_MAX;
static volatile int64_t x325 = INT64_MIN;
int8_t x336 = -1;
uint32_t x337 = 2U;
static int8_t x343 = INT8_MAX;
int32_t t66 = 25;
volatile int8_t x353 = INT8_MIN;
volatile int32_t t67 = 0;
int16_t x365 = -1;
static int64_t x386 = INT64_MAX;
int16_t x391 = INT16_MIN;
uint8_t x395 = 0U;
int8_t x398 = INT8_MAX;
int64_t x404 = -1LL;
static int16_t x410 = -1;
volatile int32_t t75 = -5602764;
static volatile uint64_t t77 = 517011818500325LLU;
uint8_t x429 = UINT8_MAX;
int8_t x433 = -50;
int8_t x440 = INT8_MAX;
volatile uint64_t t81 = 391614228874LLU;
uint64_t x460 = UINT64_MAX;
int16_t x465 = -1;
int32_t t87 = INT32_MAX;
uint32_t x479 = 4U;
int64_t t89 = -1851LL;
int16_t x495 = -2204;
int64_t t90 = 72LL;
static uint16_t x497 = 19U;
uint32_t x500 = 3853U;
volatile int64_t x503 = 14447LL;
int64_t t92 = -54LL;
int16_t x509 = INT16_MIN;
uint32_t t94 = 4408364U;
uint64_t t95 = 9484303643288LLU;
volatile int16_t x517 = INT16_MIN;
volatile uint32_t t97 = 685257U;


void f0(void) {
	static int8_t x1 = INT8_MAX;
	uint16_t x2 = 3797U;
	int8_t x3 = INT8_MIN;
	uint16_t x4 = 454U;
	static volatile int32_t t0 = 232141;

	t0 = (x1^((x2*x3)%x4));

	if (t0 != -149) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = 62219491;
	int16_t x6 = -1;
	int32_t x8 = INT32_MIN;
	static volatile int32_t t1 = -15;

	t1 = (x5^((x6*x7)%x8));

	if (t1 != 62219490) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = 24;
	volatile int32_t x11 = 8996440;
	volatile int32_t t2 = 4731399;

	t2 = (x9^((x10*x11)%x12));

	if (t2 != 65471) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	int32_t x14 = -1;
	volatile int8_t x15 = INT8_MAX;
	int32_t t3 = INT32_MIN;

	t3 = (x13^((x14*x15)%x16));

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = INT16_MAX;
	int8_t x18 = 0;
	uint16_t x19 = 26965U;
	volatile int32_t t4 = 1;

	t4 = (x17^((x18*x19)%x20));

	if (t4 != 32767) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = UINT32_MAX;
	uint8_t x22 = UINT8_MAX;
	int8_t x23 = -1;
	volatile uint64_t t5 = 115059061928379LLU;

	t5 = (x21^((x22*x23)%x24));

	if (t5 != 4289959144LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x26 = UINT64_MAX;
	int16_t x27 = INT16_MIN;
	int32_t x28 = INT32_MAX;
	static uint64_t t6 = 2407259LLU;

	t6 = (x25^((x26*x27)%x28));

	if (t6 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x33 = -220576;
	uint16_t x34 = 10U;
	volatile int8_t x36 = INT8_MIN;
	int32_t t7 = 109128335;

	t7 = (x33^((x34*x35)%x36));

	if (t7 != -220600) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x38 = 96970920620772LL;
	static uint8_t x39 = 0U;
	int16_t x40 = -1;

	t8 = (x37^((x38*x39)%x40));

	if (t8 != 2147483647LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x46 = 48U;
	volatile uint16_t x47 = UINT16_MAX;
	uint64_t t9 = 555220LLU;

	t9 = (x45^((x46*x47)%x48));

	if (t9 != 18446744073706405935LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x57 = UINT8_MAX;
	volatile int8_t x58 = -5;
	static int16_t x59 = -1;
	static int64_t x60 = INT64_MAX;
	volatile int64_t t10 = 8474876959LL;

	t10 = (x57^((x58*x59)%x60));

	if (t10 != 250LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x61 = -111164043LL;
	uint64_t x62 = 4456832033LLU;
	int8_t x63 = 15;
	int16_t x64 = INT16_MIN;
	static volatile uint64_t t11 = 46161313LLU;

	t11 = (x61^((x62*x63)%x64));

	if (t11 != 18446744006766895258LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x65 = -1LL;
	uint8_t x67 = UINT8_MAX;
	static int16_t x68 = -1;
	int64_t t12 = 666265143782LL;

	t12 = (x65^((x66*x67)%x68));

	if (t12 != -4294967042LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x69 = 1070U;
	volatile uint64_t x70 = 675LLU;
	int64_t x71 = INT64_MIN;
	static uint16_t x72 = 4654U;

	t13 = (x69^((x70*x71)%x72));

	if (t13 != 2298LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x73 = INT64_MIN;
	uint32_t x74 = 6U;
	uint32_t x75 = UINT32_MAX;
	int8_t x76 = 1;
	static volatile int64_t t14 = INT64_MIN;

	t14 = (x73^((x74*x75)%x76));

	if (t14 != INT64_MIN) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x81 = INT64_MAX;
	volatile uint8_t x82 = UINT8_MAX;
	static uint64_t x83 = 138412056766708111LLU;
	int16_t x84 = -946;
	static volatile uint64_t t15 = 313308016662104103LLU;

	t15 = (x81^((x82*x83)%x84));

	if (t15 != 10821785708763310734LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x85 = INT16_MIN;
	static int16_t x86 = INT16_MIN;
	int64_t x87 = 644812774LL;
	int32_t x88 = -11822051;
	static volatile int64_t t16 = -11115095272977660LL;

	t16 = (x85^((x86*x87)%x88));

	if (t16 != 4243352LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x93 = INT64_MIN;
	uint64_t x94 = 17564LLU;
	uint32_t x95 = UINT32_MAX;
	static volatile uint64_t t17 = 684684659LLU;

	t17 = (x93^((x94*x95)%x96));

	if (t17 != 9223372036854776828LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int16_t x102 = INT16_MIN;
	uint8_t x103 = 106U;
	static volatile uint16_t x104 = UINT16_MAX;
	uint32_t t18 = 43U;

	t18 = (x101^((x102*x103)%x104));

	if (t18 != 4294967243U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x105 = 7U;
	int32_t x106 = INT32_MIN;
	int8_t x108 = INT8_MAX;

	t19 = (x105^((x106*x107)%x108));

	if (t19 != -109LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x109 = -1LL;
	int64_t x110 = -1LL;
	int64_t x111 = INT64_MAX;
	int32_t x112 = -3432;
	static int64_t t20 = -8238291LL;

	t20 = (x109^((x110*x111)%x112));

	if (t20 != 6LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x113 = 20U;
	uint32_t x114 = 47553U;
	static uint32_t x115 = 14475183U;
	volatile int8_t x116 = INT8_MIN;
	uint32_t t21 = 60U;

	t21 = (x113^((x114*x115)%x116));

	if (t21 != 1143609851U) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x117 = INT32_MAX;
	static volatile uint8_t x118 = 0U;
	static uint8_t x119 = 1U;
	int32_t t22 = INT32_MAX;

	t22 = (x117^((x118*x119)%x120));

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x121 = INT16_MIN;
	volatile int16_t x122 = 80;
	int16_t x124 = INT16_MAX;
	volatile int32_t t23 = -45;

	t23 = (x121^((x122*x123)%x124));

	if (t23 != -21248) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x125 = 6;
	int64_t x126 = INT64_MAX;
	uint64_t x127 = 85LLU;
	uint16_t x128 = 3U;
	uint64_t t24 = 3828901LLU;

	t24 = (x125^((x126*x127)%x128));

	if (t24 != 7LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x133 = 2629286779930426LLU;
	int32_t x134 = INT32_MIN;
	uint64_t x135 = 62920688100546LLU;
	volatile int64_t x136 = INT64_MIN;
	volatile uint64_t t25 = 26604868171338LLU;

	t25 = (x133^((x134*x135)%x136));

	if (t25 != 1249496891679819578LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x145 = INT32_MIN;
	uint32_t x146 = 1918U;
	volatile uint64_t x147 = 22LLU;
	uint16_t x148 = 218U;
	static volatile uint64_t t26 = 336141162537772LLU;

	t26 = (x145^((x146*x147)%x148));

	if (t26 != 18446744071562068090LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x149 = -1;
	static int16_t x150 = 8;
	int8_t x152 = INT8_MIN;
	volatile int64_t t27 = -13LL;

	t27 = (x149^((x150*x151)%x152));

	if (t27 != -9LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x153 = UINT64_MAX;
	static uint8_t x154 = 20U;
	uint16_t x155 = 4U;
	volatile uint64_t t28 = 70377109284LLU;

	t28 = (x153^((x154*x155)%x156));

	if (t28 != 18446744073709551535LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x161 = INT64_MAX;
	int64_t x162 = -1LL;
	static uint32_t x163 = 1602U;
	volatile uint32_t x164 = 595682U;
	static volatile int64_t t29 = 136241128631LL;

	t29 = (x161^((x162*x163)%x164));

	if (t29 != -9223372036854774207LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x165 = INT64_MIN;
	int8_t x166 = -1;
	uint32_t x167 = 51U;
	uint16_t x168 = UINT16_MAX;
	static int64_t t30 = -3582763LL;

	t30 = (x165^((x166*x167)%x168));

	if (t30 != -9223372036854710323LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x169 = 20473775LLU;
	int32_t x170 = INT32_MIN;
	volatile int32_t x171 = 1;
	volatile int64_t x172 = -9769132312LL;

	t31 = (x169^((x170*x171)%x172));

	if (t31 != 18446744071582541743LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x173 = INT16_MIN;
	static uint16_t x174 = UINT16_MAX;
	static uint64_t x175 = UINT64_MAX;
	volatile uint64_t t32 = 427779765050680LLU;

	t32 = (x173^((x174*x175)%x176));

	if (t32 != 18446744071562100737LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x181 = INT32_MIN;
	volatile uint32_t x183 = 20454U;
	volatile uint32_t x184 = 802876025U;
	volatile uint32_t t33 = 1754U;

	t33 = (x181^((x182*x183)%x184));

	if (t33 != 2428050365U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x185 = -1;
	int32_t x186 = INT32_MAX;
	int32_t x187 = -1;
	int32_t x188 = INT32_MAX;

	t34 = (x185^((x186*x187)%x188));

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x190 = 129233LLU;
	volatile int64_t x191 = 167731278968LL;
	int64_t x192 = INT64_MIN;
	volatile uint64_t t35 = 1984828490452569476LLU;

	t35 = (x189^((x190*x191)%x192));

	if (t35 != 18425067657334680184LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x193 = INT8_MIN;
	int32_t x194 = -1;
	uint16_t x195 = 8U;
	int16_t x196 = INT16_MIN;
	int32_t t36 = -16117657;

	t36 = (x193^((x194*x195)%x196));

	if (t36 != 120) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x197 = INT64_MIN;
	int16_t x198 = INT16_MIN;
	volatile uint8_t x199 = 6U;
	int8_t x200 = 1;
	int64_t t37 = INT64_MIN;

	t37 = (x197^((x198*x199)%x200));

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	static uint16_t x201 = 116U;
	uint8_t x203 = UINT8_MAX;
	static int16_t x204 = INT16_MIN;

	t38 = (x201^((x202*x203)%x204));

	if (t38 != 32629) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x205 = -11;
	int32_t x206 = -1;
	int16_t x207 = INT16_MIN;
	uint64_t t39 = 25436068391205741LLU;

	t39 = (x205^((x206*x207)%x208));

	if (t39 != 18446744073709518837LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x213 = UINT32_MAX;
	uint32_t x214 = 3U;
	uint16_t x215 = 161U;
	int8_t x216 = 39;
	volatile uint32_t t40 = 23385770U;

	t40 = (x213^((x214*x215)%x216));

	if (t40 != 4294967280U) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x218 = -1;
	int32_t x219 = -1;
	int32_t x220 = -1;
	volatile int32_t t41 = 30;

	t41 = (x217^((x218*x219)%x220));

	if (t41 != 114) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x221 = UINT64_MAX;
	volatile uint32_t x222 = 2U;
	static int8_t x224 = INT8_MIN;
	uint64_t t42 = 872953563304LLU;

	t42 = (x221^((x222*x223)%x224));

	if (t42 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x225 = 1008U;
	volatile int32_t x226 = -1;
	volatile int64_t x227 = -1LL;
	uint64_t x228 = 4280407491291LLU;
	volatile uint64_t t43 = 30478372980471LLU;

	t43 = (x225^((x226*x227)%x228));

	if (t43 != 1009LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x230 = 6423855765776145LLU;
	uint64_t x232 = UINT64_MAX;

	t44 = (x229^((x230*x231)%x232));

	if (t44 != 5555350039954740173LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int8_t x233 = -1;
	int64_t x234 = INT64_MIN;
	static uint64_t x235 = 185323879LLU;
	int8_t x236 = -8;
	static volatile uint64_t t45 = 3762999LLU;

	t45 = (x233^((x234*x235)%x236));

	if (t45 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x237 = UINT32_MAX;
	int16_t x238 = INT16_MIN;
	static volatile int32_t x239 = -51;
	uint64_t x240 = 182615872324841LLU;
	uint64_t t46 = 570754550462686046LLU;

	t46 = (x237^((x238*x239)%x240));

	if (t46 != 4293296127LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint8_t x241 = 7U;
	int32_t x242 = 723;
	static int8_t x243 = 8;
	int32_t x244 = INT32_MIN;
	int32_t t47 = -4715;

	t47 = (x241^((x242*x243)%x244));

	if (t47 != 5791) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x245 = UINT64_MAX;
	uint32_t x247 = UINT32_MAX;
	static int8_t x248 = 3;
	volatile uint64_t t48 = 256113059548478LLU;

	t48 = (x245^((x246*x247)%x248));

	if (t48 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x249 = 11981788U;
	uint32_t x250 = 11U;
	int64_t x251 = -1LL;
	int64_t x252 = 8982LL;
	static volatile int64_t t49 = -105580154017LL;

	t49 = (x249^((x250*x251)%x252));

	if (t49 != -11981783LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x254 = -1LL;
	int8_t x255 = -1;
	static int16_t x256 = INT16_MIN;
	volatile uint64_t t50 = 6454620475562200LLU;

	t50 = (x253^((x254*x255)%x256));

	if (t50 != 4289679896LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x257 = -7;
	uint64_t x258 = UINT64_MAX;
	int64_t x259 = -712966569999LL;
	volatile int16_t x260 = -1;
	volatile uint64_t t51 = 1021346127984LLU;

	t51 = (x257^((x258*x259)%x260));

	if (t51 != 18446743360742981622LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x269 = INT8_MIN;
	int16_t x270 = INT16_MAX;
	int64_t x271 = -1LL;
	uint64_t x272 = 827154429503567378LLU;
	uint64_t t52 = 58525336537353901LLU;

	t52 = (x269^((x270*x271)%x272));

	if (t52 != 18197397449078515189LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x273 = -1;
	static int16_t x274 = 0;
	uint64_t x275 = 1215071LLU;
	int16_t x276 = 1;
	volatile uint64_t t53 = UINT64_MAX;

	t53 = (x273^((x274*x275)%x276));

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x277 = INT16_MIN;
	int16_t x278 = INT16_MIN;
	int64_t x279 = 7098LL;
	int64_t x280 = 9014826171748754LL;

	t54 = (x277^((x278*x279)%x280));

	if (t54 != 232554496LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x281 = UINT8_MAX;
	static uint16_t x282 = 90U;
	volatile int64_t t55 = -150363028LL;

	t55 = (x281^((x282*x283)%x284));

	if (t55 != 719847LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x293 = INT16_MAX;
	volatile int16_t x294 = INT16_MAX;
	int64_t x296 = -46315642LL;
	int64_t t56 = -402235139LL;

	t56 = (x293^((x294*x295)%x296));

	if (t56 != -327692LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x298 = 23LLU;
	static volatile uint8_t x299 = 0U;
	int16_t x300 = INT16_MIN;

	t57 = (x297^((x298*x299)%x300));

	if (t57 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x301 = -1500138140982LL;
	int32_t x302 = INT32_MIN;
	volatile uint32_t x303 = UINT32_MAX;
	int8_t x304 = -1;

	t58 = (x301^((x302*x303)%x304));

	if (t58 != -1502285624630LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x313 = INT64_MAX;
	uint8_t x314 = 3U;
	uint64_t x315 = UINT64_MAX;
	static uint8_t x316 = 4U;
	volatile uint64_t t59 = 16418501364427LLU;

	t59 = (x313^((x314*x315)%x316));

	if (t59 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x322 = 130557368713228LLU;
	int8_t x323 = 3;
	uint64_t t60 = 254535465332298246LLU;

	t60 = (x321^((x322*x323)%x324));

	if (t60 != 4294967227LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x326 = INT16_MIN;
	uint64_t x327 = 59564114470355123LLU;
	int8_t x328 = -1;
	static uint64_t t61 = 14LLU;

	t61 = (x325^((x326*x327)%x328));

	if (t61 != 12781340885470576640LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x329 = INT8_MAX;
	volatile int8_t x330 = INT8_MAX;
	int64_t x331 = 22893LL;
	int64_t x332 = INT64_MIN;
	int64_t t62 = -79842LL;

	t62 = (x329^((x330*x331)%x332));

	if (t62 != 2907500LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x333 = -5;
	volatile uint64_t x334 = 253395575LLU;
	uint32_t x335 = 38U;
	volatile uint64_t t63 = 42851630923LLU;

	t63 = (x333^((x334*x335)%x336));

	if (t63 != 18446744064080519761LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x338 = INT8_MIN;
	uint16_t x339 = 8529U;
	uint8_t x340 = UINT8_MAX;
	volatile uint32_t t64 = 14964U;

	t64 = (x337^((x338*x339)%x340));

	if (t64 != 4294967237U) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x341 = 368456758815454722LLU;
	uint16_t x342 = 0U;
	static int16_t x344 = INT16_MAX;
	uint64_t t65 = 27186247347228LLU;

	t65 = (x341^((x342*x343)%x344));

	if (t65 != 368456758815454722LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x345 = INT8_MIN;
	uint8_t x346 = 1U;
	int32_t x347 = -1;
	uint8_t x348 = UINT8_MAX;

	t66 = (x345^((x346*x347)%x348));

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x354 = INT8_MAX;
	int32_t x355 = -1;
	int8_t x356 = INT8_MIN;

	t67 = (x353^((x354*x355)%x356));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x366 = 15;
	int16_t x367 = 1234;
	int16_t x368 = INT16_MIN;
	volatile int32_t t68 = -3273;

	t68 = (x365^((x366*x367)%x368));

	if (t68 != -18511) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x369 = UINT32_MAX;
	uint8_t x370 = UINT8_MAX;
	int64_t x371 = -1LL;
	int64_t x372 = INT64_MAX;
	int64_t t69 = -208645381021909LL;

	t69 = (x369^((x370*x371)%x372));

	if (t69 != -4294967042LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x385 = INT32_MIN;
	int8_t x387 = -1;
	uint64_t x388 = UINT64_MAX;
	volatile uint64_t t70 = 915486484409015LLU;

	t70 = (x385^((x386*x387)%x388));

	if (t70 != 9223372034707292161LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x389 = -1;
	uint32_t x390 = 8531090U;
	int64_t x392 = INT64_MAX;
	int64_t t71 = 654LL;

	t71 = (x389^((x390*x391)%x392));

	if (t71 != -3921084417LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x393 = -1;
	volatile uint8_t x394 = 21U;
	int8_t x396 = -1;
	volatile int32_t t72 = 6186;

	t72 = (x393^((x394*x395)%x396));

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x397 = UINT64_MAX;
	static uint64_t x399 = 3398269162626885LLU;
	volatile uint16_t x400 = 97U;
	volatile uint64_t t73 = 3438616695518152527LLU;

	t73 = (x397^((x398*x399)%x400));

	if (t73 != 18446744073709551538LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x401 = 11U;
	int16_t x402 = 62;
	uint32_t x403 = 5U;
	int64_t t74 = 1LL;

	t74 = (x401^((x402*x403)%x404));

	if (t74 != 11LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x409 = 821;
	volatile int8_t x411 = INT8_MAX;
	uint16_t x412 = UINT16_MAX;

	t75 = (x409^((x410*x411)%x412));

	if (t75 != -844) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x421 = -245667;
	static uint64_t x422 = 30LLU;
	uint64_t x423 = UINT64_MAX;
	volatile uint32_t x424 = UINT32_MAX;
	static volatile uint64_t t76 = 332202527LLU;

	t76 = (x421^((x422*x423)%x424));

	if (t76 != 18446744069414830015LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x425 = 0U;
	uint16_t x426 = UINT16_MAX;
	static uint64_t x427 = 1821062040800164184LLU;
	static volatile uint8_t x428 = 1U;

	t77 = (x425^((x426*x427)%x428));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x430 = 91448LLU;
	int8_t x431 = -1;
	static int8_t x432 = -1;
	uint64_t t78 = 390LLU;

	t78 = (x429^((x430*x431)%x432));

	if (t78 != 18446744073709460023LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x434 = 2LL;
	uint16_t x435 = 29U;
	static int64_t x436 = 477LL;
	int64_t t79 = 5LL;

	t79 = (x433^((x434*x435)%x436));

	if (t79 != -12LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x437 = UINT64_MAX;
	static int32_t x438 = -1;
	uint64_t x439 = UINT64_MAX;
	volatile uint64_t t80 = 380868LLU;

	t80 = (x437^((x438*x439)%x440));

	if (t80 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x441 = INT64_MIN;
	uint64_t x442 = UINT64_MAX;
	int8_t x443 = 2;
	volatile uint16_t x444 = 5199U;

	t81 = (x441^((x442*x443)%x444));

	if (t81 != 9223372036854778777LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x445 = UINT16_MAX;
	static int16_t x446 = -2;
	volatile uint16_t x447 = 40U;
	volatile uint32_t x448 = 569592U;
	uint32_t t82 = 8U;

	t82 = (x445^((x446*x447)%x448));

	if (t82 != 215215U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x453 = UINT32_MAX;
	static int32_t x454 = 3123;
	static int8_t x455 = INT8_MIN;
	int64_t x456 = 1223342732078001LL;
	int64_t t83 = 3534274071257125LL;

	t83 = (x453^((x454*x455)%x456));

	if (t83 != -4294567553LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x457 = -1;
	int64_t x458 = -1LL;
	uint32_t x459 = 12U;
	uint64_t t84 = 1519LLU;

	t84 = (x457^((x458*x459)%x460));

	if (t84 != 11LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x466 = INT16_MAX;
	int8_t x467 = INT8_MIN;
	volatile uint8_t x468 = UINT8_MAX;
	int32_t t85 = 3761670;

	t85 = (x465^((x466*x467)%x468));

	if (t85 != 190) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x469 = -544017;
	int32_t x470 = 0;
	int64_t x471 = 5872LL;
	volatile int32_t x472 = 124462206;
	int64_t t86 = -6826025LL;

	t86 = (x469^((x470*x471)%x472));

	if (t86 != -544017LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x473 = INT32_MAX;
	int8_t x474 = -1;
	int16_t x475 = INT16_MIN;
	volatile uint16_t x476 = 1U;

	t87 = (x473^((x474*x475)%x476));

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x477 = -1LL;
	volatile int8_t x478 = -1;
	uint8_t x480 = UINT8_MAX;
	volatile int64_t t88 = 17934800244325905LL;

	t88 = (x477^((x478*x479)%x480));

	if (t88 != -253LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x485 = INT64_MAX;
	int64_t x486 = -2073593783236734LL;
	volatile uint8_t x487 = 2U;
	static uint16_t x488 = 1808U;

	t89 = (x485^((x486*x487)%x488));

	if (t89 != -9223372036854774005LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x493 = INT16_MIN;
	volatile int64_t x494 = -50LL;
	int32_t x496 = 156;

	t90 = (x493^((x494*x495)%x496));

	if (t90 != -32704LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x498 = -1;
	int32_t x499 = -9920500;
	uint32_t t91 = 0U;

	t91 = (x497^((x498*x499)%x500));

	if (t91 != 2861U) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x501 = UINT8_MAX;
	volatile int64_t x502 = 11LL;
	int8_t x504 = -1;

	t92 = (x501^((x502*x503)%x504));

	if (t92 != 255LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x505 = 232572235935117LLU;
	int8_t x506 = INT8_MAX;
	int8_t x507 = INT8_MAX;
	int16_t x508 = 165;
	volatile uint64_t t93 = 767858282027LLU;

	t93 = (x505^((x506*x507)%x508));

	if (t93 != 232572235935217LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x510 = 2986U;
	volatile int16_t x511 = -1;
	static int8_t x512 = -1;

	t94 = (x509^((x510*x511)%x512));

	if (t94 != 29782U) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x513 = 19743U;
	static uint64_t x514 = UINT64_MAX;
	int16_t x515 = -1;
	volatile uint8_t x516 = UINT8_MAX;

	t95 = (x513^((x514*x515)%x516));

	if (t95 != 19742LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x518 = 1209757656LLU;
	static int8_t x519 = 0;
	volatile int64_t x520 = -2346029597532368LL;
	uint64_t t96 = 433195764944688LLU;

	t96 = (x517^((x518*x519)%x520));

	if (t96 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x525 = UINT32_MAX;
	int16_t x526 = -1;
	static int8_t x527 = INT8_MIN;
	static uint32_t x528 = UINT32_MAX;

	t97 = (x525^((x526*x527)%x528));

	if (t97 != 4294967167U) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x529 = 1227LLU;
	int16_t x530 = -10;
	static int8_t x531 = -16;
	int64_t x532 = -1LL;
	static uint64_t t98 = 17LLU;

	t98 = (x529^((x530*x531)%x532));

	if (t98 != 1227LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x533 = 225035545052882966LLU;
	uint64_t x534 = 0LLU;
	int64_t x535 = 4302LL;
	static int32_t x536 = INT32_MIN;
	static uint64_t t99 = 19714LLU;

	t99 = (x533^((x534*x535)%x536));

	if (t99 != 225035545052882966LLU) { NG(); } else { ; }
	
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

