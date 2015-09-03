#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x14 = 298U;
static int32_t x31 = INT32_MIN;
int16_t x32 = 2;
static int32_t x33 = INT32_MAX;
int16_t x39 = -1;
volatile int64_t x49 = -14420738947333295LL;
int64_t t12 = -13716956535791LL;
int64_t x58 = INT64_MIN;
volatile int64_t x60 = INT64_MIN;
uint32_t x64 = 12516U;
volatile int8_t x66 = INT8_MIN;
static int8_t x68 = -50;
int8_t x73 = INT8_MAX;
volatile int64_t x74 = -33449041005077405LL;
uint8_t x78 = 3U;
static int16_t x84 = 29;
uint64_t x101 = 12488233LLU;
int32_t x102 = INT32_MIN;
uint16_t x112 = 2U;
volatile uint64_t t27 = 67374561116556110LLU;
int16_t x120 = -1;
static volatile uint64_t t29 = 259085520466LLU;
int32_t x129 = 3296;
volatile int8_t x130 = INT8_MAX;
uint32_t t30 = 2021U;
uint32_t t31 = 30U;
static uint32_t t32 = 33U;
volatile int64_t x141 = -554203705894542LL;
int8_t x146 = -1;
int64_t x150 = INT64_MIN;
uint8_t x151 = UINT8_MAX;
int8_t x153 = INT8_MIN;
int64_t x156 = -1LL;
int8_t x159 = INT8_MAX;
uint32_t x163 = 5U;
int64_t t38 = 1938625649672164LL;
volatile int32_t x167 = -1;
static int32_t x169 = INT32_MIN;
int16_t x171 = -6;
static volatile int16_t x172 = INT16_MAX;
int16_t x181 = INT16_MIN;
int64_t x190 = -3971109856LL;
uint32_t x192 = 1609U;
int32_t x193 = -183;
volatile int32_t t45 = -6;
int16_t x199 = INT16_MAX;
static int16_t x207 = INT16_MIN;
int64_t t50 = -900466LL;
volatile uint16_t x217 = 6U;
int32_t x219 = INT32_MAX;
int16_t x227 = INT16_MAX;
volatile uint32_t t55 = 4943887U;
uint8_t x241 = UINT8_MAX;
static int16_t x247 = -1;
int32_t x262 = -1;
volatile int64_t t60 = -137884246LL;
volatile int64_t x278 = -1LL;
volatile int32_t x281 = -1201908;
int8_t x294 = -6;
static int16_t x310 = INT16_MIN;
volatile int64_t t71 = INT64_MIN;
volatile int64_t x321 = -1LL;
int8_t x323 = 1;
int32_t x324 = -408188;
static volatile uint16_t x338 = UINT16_MAX;
volatile uint64_t t77 = 53LLU;
int32_t t78 = -14628465;
volatile uint32_t x349 = 464398978U;
int16_t x354 = INT16_MIN;
static int16_t x364 = INT16_MIN;
uint64_t t82 = 1897544054426LLU;
static int16_t x373 = -1;
int16_t x376 = 254;
int64_t x378 = -1LL;
int32_t x380 = -1;
uint32_t x390 = 416078U;
uint64_t t90 = 108LLU;
static int8_t x397 = -1;
int32_t t91 = 54;
volatile int32_t x403 = -1;
int8_t x408 = 6;
uint32_t x409 = 900477123U;
static volatile uint64_t x410 = UINT64_MAX;
static uint32_t x411 = 386U;
uint64_t t95 = 4410085439500918567LLU;
int64_t x418 = INT64_MAX;
int16_t x419 = -1893;
int16_t x420 = -78;
volatile int64_t x428 = 408876743595359LL;
uint8_t x431 = 1U;
int64_t x432 = -1LL;


void f0(void) {
	int16_t x1 = 7;
	int16_t x2 = INT16_MIN;
	int16_t x3 = -74;
	uint16_t x4 = 16U;
	volatile int32_t t0 = 1;

	t0 = (x1/((x2|x3)&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -1;
	int16_t x6 = 9820;
	static int32_t x7 = -1;
	int64_t x8 = INT64_MIN;
	static volatile int64_t t1 = 416099603LL;

	t1 = (x5/((x6|x7)&x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -3735001661249LL;
	int32_t x10 = -1;
	volatile uint64_t x11 = 1054LLU;
	uint8_t x12 = 92U;
	volatile uint64_t t2 = 485483257923LLU;

	t2 = (x9/((x10|x11)&x12));

	if (t2 != 200508047159868373LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = UINT16_MAX;
	int8_t x15 = 2;
	static volatile int64_t x16 = INT64_MAX;
	volatile int64_t t3 = 3986009LL;

	t3 = (x13/((x14|x15)&x16));

	if (t3 != 219LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = 3U;
	uint32_t x18 = 86990503U;
	volatile int32_t x19 = INT32_MIN;
	int32_t x20 = -1;
	static uint32_t t4 = 15498527U;

	t4 = (x17/((x18|x19)&x20));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint64_t x21 = 17329345318952629LLU;
	uint64_t x22 = UINT64_MAX;
	volatile int8_t x23 = -3;
	uint64_t x24 = 28913049LLU;
	volatile uint64_t t5 = 82064LLU;

	t5 = (x21/((x22|x23)&x24));

	if (t5 != 599360701LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MAX;
	int16_t x26 = -1;
	volatile int16_t x27 = INT16_MIN;
	static int8_t x28 = INT8_MIN;
	int32_t t6 = 3592;

	t6 = (x25/((x26|x27)&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -45866;
	static int64_t x30 = INT64_MAX;
	int64_t t7 = 47LL;

	t7 = (x29/((x30|x31)&x32));

	if (t7 != -22933LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x34 = 672068338861833836LLU;
	static int16_t x35 = INT16_MIN;
	uint8_t x36 = 55U;
	volatile uint64_t t8 = 86655657282LLU;

	t8 = (x33/((x34|x35)&x36));

	if (t8 != 59652323LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 27821684761834672LLU;
	uint64_t x38 = 25846703980624974LLU;
	int64_t x40 = -1LL;
	volatile uint64_t t9 = 429630728LLU;

	t9 = (x37/((x38|x39)&x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -1LL;
	int64_t x46 = 939396LL;
	static uint16_t x47 = 26U;
	volatile int16_t x48 = 1013;
	static int64_t t10 = 122827037LL;

	t10 = (x45/((x46|x47)&x48));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x50 = INT64_MIN;
	uint16_t x51 = 112U;
	static int8_t x52 = 27;
	int64_t t11 = -15366362985LL;

	t11 = (x49/((x50|x51)&x52));

	if (t11 != -901296184208330LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x53 = 10688LL;
	volatile uint16_t x54 = 7U;
	int32_t x55 = -1;
	volatile int16_t x56 = -51;

	t12 = (x53/((x54|x55)&x56));

	if (t12 != -209LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x57 = 22U;
	static int8_t x59 = -1;
	int64_t t13 = -136LL;

	t13 = (x57/((x58|x59)&x60));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MAX;
	uint8_t x62 = 114U;
	volatile int32_t x63 = -1;
	int64_t t14 = -222572801536956LL;

	t14 = (x61/((x62|x63)&x64));

	if (t14 != 736926497032180LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 22138U;
	volatile int8_t x67 = 3;
	static volatile uint32_t t15 = 0U;

	t15 = (x65/((x66|x67)&x68));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = 1U;
	uint64_t x70 = 1430519561008713204LLU;
	int64_t x71 = INT64_MIN;
	int32_t x72 = 5098194;
	volatile uint64_t t16 = 1053794242669LLU;

	t16 = (x69/((x70|x71)&x72));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x75 = UINT64_MAX;
	uint32_t x76 = 59099U;
	static volatile uint64_t t17 = 157179LLU;

	t17 = (x73/((x74|x75)&x76));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -1LL;
	int16_t x79 = INT16_MIN;
	uint16_t x80 = 97U;
	int64_t t18 = -58646298256935603LL;

	t18 = (x77/((x78|x79)&x80));

	if (t18 != -1LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = 890U;
	static int8_t x82 = INT8_MIN;
	static volatile int8_t x83 = INT8_MAX;
	static volatile int32_t t19 = 1038985;

	t19 = (x81/((x82|x83)&x84));

	if (t19 != 30) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x85 = INT16_MIN;
	int32_t x86 = INT32_MIN;
	int16_t x87 = INT16_MAX;
	volatile uint32_t x88 = 2657U;
	uint32_t t20 = 360926550U;

	t20 = (x85/((x86|x87)&x88));

	if (t20 != 1616460U) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x89 = 13U;
	volatile uint32_t x90 = 489702474U;
	volatile int64_t x91 = INT64_MAX;
	uint16_t x92 = 679U;
	int64_t t21 = 5027LL;

	t21 = (x89/((x90|x91)&x92));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x93 = 0;
	int32_t x94 = 1047351;
	int8_t x95 = -13;
	int16_t x96 = INT16_MIN;
	volatile int32_t t22 = 29;

	t22 = (x93/((x94|x95)&x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x97 = -260301717;
	uint32_t x98 = 42841117U;
	static int8_t x99 = INT8_MAX;
	int8_t x100 = 6;
	volatile uint32_t t23 = 471999U;

	t23 = (x97/((x98|x99)&x100));

	if (t23 != 672444263U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x103 = 78124LLU;
	uint16_t x104 = 967U;
	volatile uint64_t t24 = 30244LLU;

	t24 = (x101/((x102|x103)&x104));

	if (t24 != 48031LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = INT8_MIN;
	uint8_t x106 = 6U;
	int8_t x107 = -1;
	int32_t x108 = INT32_MAX;
	static int32_t t25 = -19815265;

	t25 = (x105/((x106|x107)&x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x109 = 12019400015080LLU;
	int8_t x110 = INT8_MIN;
	int32_t x111 = -1;
	static uint64_t t26 = 1LLU;

	t26 = (x109/((x110|x111)&x112));

	if (t26 != 6009700007540LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x113 = 769LLU;
	volatile int8_t x114 = INT8_MIN;
	static int32_t x115 = INT32_MIN;
	int64_t x116 = INT64_MAX;

	t27 = (x113/((x114|x115)&x116));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x117 = INT32_MAX;
	int16_t x118 = INT16_MIN;
	int32_t x119 = INT32_MAX;
	static int32_t t28 = 60899;

	t28 = (x117/((x118|x119)&x120));

	if (t28 != -2147483647) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x125 = UINT8_MAX;
	int16_t x126 = -1;
	uint64_t x127 = UINT64_MAX;
	uint32_t x128 = UINT32_MAX;

	t29 = (x125/((x126|x127)&x128));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x131 = 20U;
	volatile uint32_t x132 = UINT32_MAX;

	t30 = (x129/((x130|x131)&x132));

	if (t30 != 25U) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x133 = INT32_MIN;
	uint32_t x134 = 3009822U;
	int32_t x135 = 33;
	volatile uint16_t x136 = UINT16_MAX;

	t31 = (x133/((x134|x135)&x136));

	if (t31 != 35358U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = 15;
	int16_t x138 = -6215;
	int16_t x139 = -67;
	uint32_t x140 = 2609U;

	t32 = (x137/((x138|x139)&x140));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x142 = 9652U;
	int16_t x143 = INT16_MIN;
	volatile int16_t x144 = 101;
	int64_t t33 = 2LL;

	t33 = (x141/((x142|x143)&x144));

	if (t33 != -15394547385959LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x145 = 3519022LL;
	static int8_t x147 = INT8_MIN;
	static int32_t x148 = 488023527;
	int64_t t34 = 1211473LL;

	t34 = (x145/((x146|x147)&x148));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x149 = INT64_MIN;
	uint8_t x152 = UINT8_MAX;
	volatile int64_t t35 = -13785LL;

	t35 = (x149/((x150|x151)&x152));

	if (t35 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x154 = INT16_MAX;
	int8_t x155 = 63;
	static int64_t t36 = -6021790LL;

	t36 = (x153/((x154|x155)&x156));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x157 = INT16_MIN;
	int32_t x158 = -1;
	static volatile int32_t x160 = INT32_MIN;
	volatile int32_t t37 = -115335;

	t37 = (x157/((x158|x159)&x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int64_t x161 = INT64_MIN;
	int64_t x162 = INT64_MIN;
	int8_t x164 = INT8_MIN;

	t38 = (x161/((x162|x163)&x164));

	if (t38 != 1LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x165 = INT16_MAX;
	int16_t x166 = -2;
	int8_t x168 = INT8_MAX;
	volatile int32_t t39 = 1844;

	t39 = (x165/((x166|x167)&x168));

	if (t39 != 258) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x170 = UINT16_MAX;
	int32_t t40 = -252896;

	t40 = (x169/((x170|x171)&x172));

	if (t40 != -65538) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x177 = UINT16_MAX;
	volatile int8_t x178 = 18;
	int32_t x179 = 83148;
	uint64_t x180 = 498784100311014LLU;
	uint64_t t41 = 72LLU;

	t41 = (x177/((x178|x179)&x180));

	if (t41 != 3LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint8_t x182 = 29U;
	uint8_t x183 = UINT8_MAX;
	static uint16_t x184 = 407U;
	static volatile int32_t t42 = 129048038;

	t42 = (x181/((x182|x183)&x184));

	if (t42 != -217) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = -423722;
	int32_t x186 = -676;
	int64_t x187 = INT64_MAX;
	volatile uint8_t x188 = UINT8_MAX;
	volatile int64_t t43 = -22384280994367LL;

	t43 = (x185/((x186|x187)&x188));

	if (t43 != -1661LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x189 = INT8_MIN;
	uint8_t x191 = 5U;
	volatile int64_t t44 = 7760LL;

	t44 = (x189/((x190|x191)&x192));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint8_t x194 = UINT8_MAX;
	int8_t x195 = INT8_MIN;
	int16_t x196 = INT16_MIN;

	t45 = (x193/((x194|x195)&x196));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = INT16_MAX;
	uint8_t x198 = UINT8_MAX;
	int32_t x200 = -9;
	volatile int32_t t46 = 53;

	t46 = (x197/((x198|x199)&x200));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x201 = INT16_MIN;
	int32_t x202 = INT32_MIN;
	uint16_t x203 = UINT16_MAX;
	uint32_t x204 = 30U;
	uint32_t t47 = 1872925U;

	t47 = (x201/((x202|x203)&x204));

	if (t47 != 143164484U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x205 = INT32_MIN;
	int8_t x206 = -1;
	int16_t x208 = INT16_MAX;
	volatile int32_t t48 = 310920356;

	t48 = (x205/((x206|x207)&x208));

	if (t48 != -65538) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = -1LL;
	int8_t x210 = -57;
	uint8_t x211 = 1U;
	int16_t x212 = INT16_MAX;
	volatile int64_t t49 = -1090024030530LL;

	t49 = (x209/((x210|x211)&x212));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x213 = 79U;
	int64_t x214 = INT64_MIN;
	int64_t x215 = -1LL;
	int8_t x216 = 26;

	t50 = (x213/((x214|x215)&x216));

	if (t50 != 3LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x218 = 28U;
	int8_t x220 = -1;
	volatile int32_t t51 = 432902;

	t51 = (x217/((x218|x219)&x220));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x225 = INT16_MAX;
	int8_t x226 = -1;
	static volatile int8_t x228 = -16;
	volatile int32_t t52 = -208428027;

	t52 = (x225/((x226|x227)&x228));

	if (t52 != -2047) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x229 = 15922U;
	volatile int32_t x230 = INT32_MIN;
	int64_t x231 = -2244400278LL;
	int8_t x232 = INT8_MIN;
	int64_t t53 = -133LL;

	t53 = (x229/((x230|x231)&x232));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x233 = -1;
	uint32_t x234 = 1527U;
	static volatile int32_t x235 = -1;
	int32_t x236 = INT32_MIN;
	uint32_t t54 = 780733U;

	t54 = (x233/((x234|x235)&x236));

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x237 = UINT16_MAX;
	uint32_t x238 = UINT32_MAX;
	uint8_t x239 = UINT8_MAX;
	int16_t x240 = INT16_MIN;

	t55 = (x237/((x238|x239)&x240));

	if (t55 != 0U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x242 = INT64_MIN;
	volatile int8_t x243 = -1;
	int64_t x244 = INT64_MIN;
	static volatile int64_t t56 = 46987052920LL;

	t56 = (x241/((x242|x243)&x244));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x245 = 31535249015391LLU;
	volatile int8_t x246 = INT8_MIN;
	int64_t x248 = 135549037LL;
	uint64_t t57 = 110007LLU;

	t57 = (x245/((x246|x247)&x248));

	if (t57 != 232648LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x253 = INT8_MAX;
	volatile int16_t x254 = INT16_MIN;
	static int8_t x255 = INT8_MAX;
	volatile uint16_t x256 = UINT16_MAX;
	static int32_t t58 = -624854278;

	t58 = (x253/((x254|x255)&x256));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x261 = 74675920;
	int16_t x263 = INT16_MIN;
	int8_t x264 = -1;
	volatile int32_t t59 = -251061;

	t59 = (x261/((x262|x263)&x264));

	if (t59 != -74675920) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x265 = UINT32_MAX;
	int8_t x266 = -1;
	int64_t x267 = INT64_MIN;
	volatile int32_t x268 = 2;

	t60 = (x265/((x266|x267)&x268));

	if (t60 != 2147483647LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x269 = INT8_MIN;
	uint16_t x270 = 19843U;
	uint64_t x271 = 66590985644299392LLU;
	static volatile uint8_t x272 = 31U;
	uint64_t t61 = 14482681602852082LLU;

	t61 = (x269/((x270|x271)&x272));

	if (t61 != 6148914691236517162LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x273 = 318239U;
	uint8_t x274 = 7U;
	int16_t x275 = INT16_MAX;
	static volatile uint16_t x276 = 20400U;
	uint32_t t62 = 15439U;

	t62 = (x273/((x274|x275)&x276));

	if (t62 != 15U) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x277 = -1;
	volatile int64_t x279 = 28LL;
	int64_t x280 = -1LL;
	volatile int64_t t63 = -3753306LL;

	t63 = (x277/((x278|x279)&x280));

	if (t63 != 1LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x282 = INT64_MAX;
	volatile uint64_t x283 = 60295030LLU;
	int8_t x284 = -38;
	static uint64_t t64 = 7863LLU;

	t64 = (x281/((x282|x283)&x284));

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x285 = INT64_MAX;
	int32_t x286 = -1;
	int16_t x287 = INT16_MIN;
	int32_t x288 = INT32_MAX;
	volatile int64_t t65 = 61603503341LL;

	t65 = (x285/((x286|x287)&x288));

	if (t65 != 4294967298LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x289 = UINT16_MAX;
	uint32_t x290 = UINT32_MAX;
	static int16_t x291 = -1;
	static int16_t x292 = -28;
	static uint32_t t66 = 60U;

	t66 = (x289/((x290|x291)&x292));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x293 = -1;
	int32_t x295 = 19798443;
	int32_t x296 = INT32_MAX;
	volatile int32_t t67 = 561;

	t67 = (x293/((x294|x295)&x296));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x297 = INT16_MAX;
	int32_t x298 = INT32_MIN;
	static volatile uint16_t x299 = UINT16_MAX;
	int8_t x300 = INT8_MIN;
	int32_t t68 = -182666;

	t68 = (x297/((x298|x299)&x300));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x301 = -3100;
	int64_t x302 = -1LL;
	static int8_t x303 = INT8_MIN;
	uint8_t x304 = UINT8_MAX;
	int64_t t69 = -10886075781LL;

	t69 = (x301/((x302|x303)&x304));

	if (t69 != -12LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x309 = 115U;
	static int32_t x311 = INT32_MAX;
	uint64_t x312 = 24382029544479266LLU;
	static uint64_t t70 = 10298LLU;

	t70 = (x309/((x310|x311)&x312));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x313 = INT64_MIN;
	volatile int16_t x314 = -371;
	uint8_t x315 = 109U;
	int8_t x316 = 1;

	t71 = (x313/((x314|x315)&x316));

	if (t71 != INT64_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x317 = -567708166324052153LL;
	uint8_t x318 = 2U;
	int32_t x319 = INT32_MAX;
	int32_t x320 = -1;
	static volatile int64_t t72 = -3740534LL;

	t72 = (x317/((x318|x319)&x320));

	if (t72 != -264359715LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x322 = -36;
	int64_t t73 = -36115308178496689LL;

	t73 = (x321/((x322|x323)&x324));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x325 = 5843U;
	uint32_t x326 = 114568999U;
	int16_t x327 = INT16_MIN;
	int32_t x328 = INT32_MIN;
	volatile uint32_t t74 = 1U;

	t74 = (x325/((x326|x327)&x328));

	if (t74 != 0U) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x329 = 1920448831740LL;
	volatile uint8_t x330 = 3U;
	static int16_t x331 = -1;
	int64_t x332 = 154290LL;
	volatile int64_t t75 = 101743018114457LL;

	t75 = (x329/((x330|x331)&x332));

	if (t75 != 12447007LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x333 = INT16_MIN;
	int64_t x334 = INT64_MAX;
	volatile int32_t x335 = INT32_MIN;
	static volatile int8_t x336 = INT8_MAX;
	volatile int64_t t76 = 590086437528534932LL;

	t76 = (x333/((x334|x335)&x336));

	if (t76 != -258LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x337 = 1605210709388LLU;
	static volatile int16_t x339 = INT16_MIN;
	static uint64_t x340 = UINT64_MAX;

	t77 = (x337/((x338|x339)&x340));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x345 = UINT16_MAX;
	static int32_t x346 = -228;
	int8_t x347 = INT8_MAX;
	int16_t x348 = -53;

	t78 = (x345/((x346|x347)&x348));

	if (t78 != -362) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x350 = -93424418;
	volatile int64_t x351 = -2729906541013629LL;
	static int64_t x352 = INT64_MIN;
	static int64_t t79 = 82522903536953LL;

	t79 = (x349/((x350|x351)&x352));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x353 = 40;
	int64_t x355 = INT64_MIN;
	int16_t x356 = INT16_MIN;
	volatile int64_t t80 = -1303851362369880488LL;

	t80 = (x353/((x354|x355)&x356));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x357 = -1;
	int32_t x358 = -1;
	volatile uint32_t x359 = 476942229U;
	static uint32_t x360 = 1965U;
	static uint32_t t81 = 34289U;

	t81 = (x357/((x358|x359)&x360));

	if (t81 != 2185733U) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x361 = INT64_MAX;
	uint64_t x362 = 1876530477439350562LLU;
	static int16_t x363 = INT16_MIN;

	t82 = (x361/((x362|x363)&x364));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x365 = -1745642;
	static int8_t x366 = 6;
	volatile int8_t x367 = -1;
	int64_t x368 = -11200000387LL;
	static int64_t t83 = 375937427115913LL;

	t83 = (x365/((x366|x367)&x368));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x369 = 3553U;
	static uint8_t x370 = 37U;
	uint64_t x371 = 17LLU;
	uint32_t x372 = UINT32_MAX;
	volatile uint64_t t84 = 579837LLU;

	t84 = (x369/((x370|x371)&x372));

	if (t84 != 67LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x374 = INT64_MIN;
	volatile int32_t x375 = -2609762;
	int64_t t85 = 119962219303LL;

	t85 = (x373/((x374|x375)&x376));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint16_t x377 = 0U;
	uint64_t x379 = 72LLU;
	uint64_t t86 = 355885885234LLU;

	t86 = (x377/((x378|x379)&x380));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x381 = 40LLU;
	int64_t x382 = 279560994072864LL;
	volatile int8_t x383 = INT8_MIN;
	uint64_t x384 = 13853346628981LLU;
	uint64_t t87 = 182817739LLU;

	t87 = (x381/((x382|x383)&x384));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x385 = 12671514123001LLU;
	int8_t x386 = INT8_MAX;
	uint64_t x387 = UINT64_MAX;
	volatile uint32_t x388 = 3762257U;
	volatile uint64_t t88 = 8574807464891781LLU;

	t88 = (x385/((x386|x387)&x388));

	if (t88 != 3368061LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x389 = -195;
	int32_t x391 = INT32_MIN;
	int32_t x392 = INT32_MIN;
	static uint32_t t89 = 7568U;

	t89 = (x389/((x390|x391)&x392));

	if (t89 != 1U) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x393 = 103U;
	uint64_t x394 = 1027232984LLU;
	uint32_t x395 = 6030980U;
	uint64_t x396 = 2369662752LLU;

	t90 = (x393/((x394|x395)&x396));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x398 = -1;
	int16_t x399 = 1;
	uint8_t x400 = 34U;

	t91 = (x397/((x398|x399)&x400));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x401 = 437651166LL;
	uint16_t x402 = 195U;
	int8_t x404 = 12;
	static volatile int64_t t92 = 32977257LL;

	t92 = (x401/((x402|x403)&x404));

	if (t92 != 36470930LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x405 = 1LLU;
	uint32_t x406 = 1706832U;
	int16_t x407 = -524;
	uint64_t t93 = 19190564437287955LLU;

	t93 = (x405/((x406|x407)&x408));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x412 = INT8_MAX;
	volatile uint64_t t94 = 12144673481132LLU;

	t94 = (x409/((x410|x411)&x412));

	if (t94 != 7090371LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x413 = -2755;
	static uint64_t x414 = 232LLU;
	uint8_t x415 = 5U;
	int8_t x416 = INT8_MIN;

	t95 = (x413/((x414|x415)&x416));

	if (t95 != 144115188075855850LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x417 = INT16_MIN;
	int64_t t96 = -3514308LL;

	t96 = (x417/((x418|x419)&x420));

	if (t96 != 420LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x421 = 531902LLU;
	int64_t x422 = INT64_MIN;
	int64_t x423 = -1LL;
	int32_t x424 = INT32_MAX;
	volatile uint64_t t97 = 22786106757934LLU;

	t97 = (x421/((x422|x423)&x424));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x425 = -1;
	int32_t x426 = -139835980;
	int16_t x427 = INT16_MIN;
	volatile int64_t t98 = 4095LL;

	t98 = (x425/((x426|x427)&x428));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x429 = UINT64_MAX;
	int32_t x430 = INT32_MIN;
	static uint64_t t99 = 923467601205LLU;

	t99 = (x429/((x430|x431)&x432));

	if (t99 != 1LLU) { NG(); } else { ; }
	
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

