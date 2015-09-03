#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 226238U;
volatile int32_t x5 = 922284506;
int64_t x9 = -1LL;
int8_t x12 = 0;
uint64_t x17 = 971786545448329018LLU;
volatile int8_t x21 = INT8_MIN;
static uint16_t x25 = 1044U;
static volatile uint16_t x26 = 36U;
uint8_t x31 = UINT8_MAX;
volatile int32_t t6 = -7329;
static int64_t t7 = -353682855196314LL;
uint64_t x47 = UINT64_MAX;
uint64_t t11 = 73383LLU;
int64_t t13 = 365079136239928LL;
int8_t x65 = -1;
int64_t x66 = -404501846LL;
int64_t t14 = 11873086079565074LL;
volatile int16_t x71 = INT16_MIN;
volatile int32_t x75 = -1;
uint64_t t16 = 429559415074208LLU;
int32_t t17 = -130;
uint8_t x83 = 3U;
static int16_t x84 = INT16_MIN;
uint16_t x97 = UINT16_MAX;
int8_t x99 = INT8_MIN;
volatile int16_t x100 = INT16_MIN;
static volatile uint64_t x103 = 146718779LLU;
int8_t x105 = INT8_MAX;
static int8_t x126 = INT8_MIN;
int64_t t27 = -150306727LL;
volatile uint8_t x141 = 5U;
int64_t x151 = -1LL;
int16_t x165 = INT16_MAX;
static uint32_t x167 = UINT32_MAX;
int32_t x171 = -1;
int8_t x177 = INT8_MIN;
int16_t x181 = 1;
int16_t x183 = INT16_MIN;
uint64_t t36 = 41131LLU;
uint64_t x186 = 2831400529501598LLU;
uint16_t x193 = UINT16_MAX;
static int8_t x212 = INT8_MIN;
uint32_t x213 = UINT32_MAX;
int64_t x214 = INT64_MIN;
volatile int64_t t44 = -481135067456LL;
static uint16_t x219 = 494U;
int8_t x221 = -12;
uint16_t x223 = 15973U;
volatile int32_t t46 = -46925877;
int16_t x231 = -1718;
volatile int32_t x232 = -1;
volatile uint32_t t48 = 17U;
int64_t x237 = -1LL;
int32_t x242 = INT32_MAX;
uint32_t x244 = UINT32_MAX;
uint64_t t51 = 7880568328727831LLU;
static volatile uint8_t x249 = UINT8_MAX;
uint64_t x252 = 1784554826LLU;
static volatile int32_t t53 = -190641748;
uint16_t x272 = 36U;
int32_t x273 = INT32_MIN;
static int8_t x275 = 29;
static uint64_t t57 = 6817LLU;
volatile uint64_t x293 = UINT64_MAX;
uint64_t t58 = 5880LLU;
static int8_t x306 = INT8_MIN;
int8_t x308 = -1;
static int8_t x309 = INT8_MAX;
volatile int64_t t60 = -30610478273902432LL;
static int16_t x314 = 5;
uint16_t x316 = 13U;
int8_t x318 = INT8_MIN;
int32_t x320 = -9;
int32_t x321 = INT32_MIN;
static volatile int64_t t63 = -2LL;
uint16_t x340 = 334U;
uint64_t x345 = UINT64_MAX;
uint16_t x352 = 251U;
int64_t x354 = INT64_MIN;
volatile int16_t x373 = -8;
int8_t x378 = 19;
int64_t x389 = -12LL;
static volatile uint32_t x390 = 89297U;
uint16_t x393 = 1U;
volatile uint64_t x398 = UINT64_MAX;
volatile uint64_t t80 = 5LLU;
int16_t x415 = 7928;
static uint64_t t83 = 6715722636026209282LLU;
uint8_t x425 = 11U;
static int32_t x426 = INT32_MAX;
int32_t t85 = 83;
uint16_t x438 = UINT16_MAX;
int8_t x444 = -28;
uint32_t x449 = 12U;
volatile int64_t t91 = -4059522081572LL;
uint32_t x472 = 7664566U;
static uint8_t x475 = 12U;
volatile uint16_t x476 = 7549U;
int64_t x483 = -941208834603LL;
uint8_t x485 = 18U;
uint64_t x488 = 94028LLU;
static uint16_t x489 = UINT16_MAX;
volatile int32_t x493 = INT32_MAX;


void f0(void) {
	int16_t x2 = INT16_MIN;
	volatile uint8_t x3 = 4U;
	uint32_t x4 = 172463U;
	volatile uint32_t t0 = 13U;

	t0 = (((x1/x2)^x3)*x4);

	if (t0 != 689852U) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x6 = 96088340U;
	uint8_t x7 = UINT8_MAX;
	static int8_t x8 = INT8_MAX;
	static uint32_t t1 = 9557U;

	t1 = (((x5/x6)^x7)*x8);

	if (t1 != 31242U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = INT32_MAX;
	int64_t x11 = INT64_MIN;
	volatile int64_t t2 = 25074LL;

	t2 = (((x9/x10)^x11)*x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x18 = UINT64_MAX;
	int64_t x19 = -1411741LL;
	static int8_t x20 = 11;
	uint64_t t3 = 939271486254715LLU;

	t3 = (((x17/x18)^x19)*x20);

	if (t3 != 18446744073694022465LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x22 = 7U;
	static int8_t x23 = INT8_MAX;
	static uint32_t x24 = 5181U;
	uint32_t t4 = 3997U;

	t4 = (((x21/x22)^x23)*x24);

	if (t4 != 4294392205U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x27 = 0;
	volatile int32_t x28 = -1;
	volatile int32_t t5 = -12698;

	t5 = (((x25/x26)^x27)*x28);

	if (t5 != -29) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	int8_t x30 = INT8_MIN;
	uint16_t x32 = 525U;

	t6 = (((x29/x30)^x31)*x32);

	if (t6 != 133875) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x33 = 1741;
	int64_t x34 = INT64_MIN;
	volatile int8_t x35 = INT8_MIN;
	int64_t x36 = 5375669007921LL;

	t7 = (((x33/x34)^x35)*x36);

	if (t7 != -688085633013888LL) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int64_t x37 = -1LL;
	int64_t x38 = INT64_MIN;
	uint16_t x39 = UINT16_MAX;
	int8_t x40 = INT8_MAX;
	int64_t t8 = -64928038412158712LL;

	t8 = (((x37/x38)^x39)*x40);

	if (t8 != 8322945LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x45 = INT16_MIN;
	volatile uint8_t x46 = 78U;
	static uint64_t x48 = UINT64_MAX;
	volatile uint64_t t9 = 384LLU;

	t9 = (((x45/x46)^x47)*x48);

	if (t9 != 18446744073709551197LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = UINT16_MAX;
	int16_t x50 = -368;
	static uint64_t x51 = 7247LLU;
	int32_t x52 = -1;
	uint64_t t10 = 229362168LLU;

	t10 = (((x49/x50)^x51)*x52);

	if (t10 != 7423LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint64_t x53 = 36714971059LLU;
	volatile int8_t x54 = -3;
	int16_t x55 = INT16_MAX;
	int64_t x56 = -1LL;

	t11 = (((x53/x54)^x55)*x56);

	if (t11 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = INT8_MAX;
	uint32_t x58 = 8790U;
	uint32_t x59 = 631U;
	int16_t x60 = INT16_MIN;
	uint32_t t12 = 215744U;

	t12 = (((x57/x58)^x59)*x60);

	if (t12 != 4274290688U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = -1;
	static int32_t x62 = 16286657;
	int64_t x63 = -1LL;
	volatile uint32_t x64 = 722U;

	t13 = (((x61/x62)^x63)*x64);

	if (t13 != -722LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x67 = -9;
	uint16_t x68 = 3964U;

	t14 = (((x65/x66)^x67)*x68);

	if (t14 != -35676LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = -1;
	int64_t x70 = INT64_MAX;
	int8_t x72 = INT8_MIN;
	int64_t t15 = -196833444978LL;

	t15 = (((x69/x70)^x71)*x72);

	if (t15 != 4194304LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x73 = 1U;
	int8_t x74 = -1;
	uint64_t x76 = 12LLU;

	t16 = (((x73/x74)^x75)*x76);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x77 = INT8_MIN;
	int8_t x78 = 3;
	int8_t x79 = -1;
	int8_t x80 = INT8_MIN;

	t17 = (((x77/x78)^x79)*x80);

	if (t17 != -5248) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x81 = 16370690U;
	int8_t x82 = -1;
	uint32_t t18 = 35048U;

	t18 = (((x81/x82)^x83)*x84);

	if (t18 != 4294868992U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = -1;
	static int64_t x86 = INT64_MIN;
	volatile int16_t x87 = INT16_MIN;
	uint16_t x88 = 372U;
	int64_t t19 = 5868277630388LL;

	t19 = (((x85/x86)^x87)*x88);

	if (t19 != -12189696LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = -26LL;
	int32_t x90 = INT32_MIN;
	uint64_t x91 = 7675084LLU;
	volatile int16_t x92 = INT16_MIN;
	uint64_t t20 = 6921807240LLU;

	t20 = (((x89/x90)^x91)*x92);

	if (t20 != 18446743822212399104LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x93 = 79LLU;
	uint64_t x94 = UINT64_MAX;
	uint16_t x95 = 16224U;
	static int16_t x96 = -3;
	volatile uint64_t t21 = 16297174LLU;

	t21 = (((x93/x94)^x95)*x96);

	if (t21 != 18446744073709502944LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x98 = 4106363LLU;
	uint64_t t22 = 72LLU;

	t22 = (((x97/x98)^x99)*x100);

	if (t22 != 4194304LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = UINT64_MAX;
	int8_t x102 = INT8_MIN;
	static int64_t x104 = -234681686749LL;
	uint64_t t23 = 6662552474205552LLU;

	t23 = (((x101/x102)^x103)*x104);

	if (t23 != 2461277848627030510LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x106 = INT8_MIN;
	int64_t x107 = INT64_MIN;
	uint8_t x108 = 1U;
	int64_t t24 = INT64_MIN;

	t24 = (((x105/x106)^x107)*x108);

	if (t24 != INT64_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x113 = INT32_MAX;
	int64_t x114 = -505365944501846487LL;
	int32_t x115 = -1;
	int32_t x116 = -1;
	static int64_t t25 = -24457LL;

	t25 = (((x113/x114)^x115)*x116);

	if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x117 = INT8_MAX;
	uint64_t x118 = UINT64_MAX;
	uint16_t x119 = UINT16_MAX;
	int8_t x120 = -1;
	volatile uint64_t t26 = 138959987LLU;

	t26 = (((x117/x118)^x119)*x120);

	if (t26 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x125 = 473744LL;
	uint32_t x127 = UINT32_MAX;
	uint8_t x128 = 122U;

	t27 = (((x125/x126)^x127)*x128);

	if (t27 != -523985558712LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x129 = -1;
	int16_t x130 = INT16_MIN;
	volatile int32_t x131 = -1;
	static uint64_t x132 = 13LLU;
	volatile uint64_t t28 = 130571593170745102LLU;

	t28 = (((x129/x130)^x131)*x132);

	if (t28 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x142 = 4LLU;
	static volatile uint16_t x143 = 9912U;
	int64_t x144 = -78819643114155LL;
	volatile uint64_t t29 = 132LLU;

	t29 = (((x141/x142)^x143)*x144);

	if (t29 != 17665404951518933101LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x149 = 28065LLU;
	static int32_t x150 = INT32_MIN;
	static int16_t x152 = 7;
	uint64_t t30 = 145LLU;

	t30 = (((x149/x150)^x151)*x152);

	if (t30 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint32_t x153 = 32031U;
	int32_t x154 = INT32_MIN;
	int64_t x155 = -1LL;
	volatile int32_t x156 = 0;
	int64_t t31 = -190242212LL;

	t31 = (((x153/x154)^x155)*x156);

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x161 = UINT64_MAX;
	static int32_t x162 = -1;
	int64_t x163 = -1LL;
	int8_t x164 = 47;
	uint64_t t32 = 459446399564362126LLU;

	t32 = (((x161/x162)^x163)*x164);

	if (t32 != 18446744073709551522LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int8_t x166 = 25;
	volatile uint8_t x168 = 23U;
	static volatile uint32_t t33 = 4U;

	t33 = (((x165/x166)^x167)*x168);

	if (t33 != 4294937143U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x169 = -1LL;
	static int64_t x170 = -1LL;
	int64_t x172 = 13LL;
	volatile int64_t t34 = 14LL;

	t34 = (((x169/x170)^x171)*x172);

	if (t34 != -26LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x178 = INT32_MAX;
	int16_t x179 = INT16_MIN;
	uint64_t x180 = 13863263LLU;
	uint64_t t35 = 3019006593361975019LLU;

	t35 = (((x177/x178)^x179)*x180);

	if (t35 != 18446743619438149632LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x182 = 274204026LLU;
	int8_t x184 = -1;

	t36 = (((x181/x182)^x183)*x184);

	if (t36 != 32768LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x185 = 37U;
	int8_t x187 = INT8_MAX;
	uint32_t x188 = 1289744873U;
	uint64_t t37 = 550467632438931LLU;

	t37 = (((x185/x186)^x187)*x188);

	if (t37 != 163797598871LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x189 = 28;
	int16_t x190 = INT16_MAX;
	volatile uint64_t x191 = 18658LLU;
	int32_t x192 = INT32_MIN;
	volatile uint64_t t38 = 1779979769589838605LLU;

	t38 = (((x189/x190)^x191)*x192);

	if (t38 != 18446704005959647232LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x194 = INT8_MIN;
	volatile uint16_t x195 = 12U;
	static int32_t x196 = -1;
	volatile int32_t t39 = -132943134;

	t39 = (((x193/x194)^x195)*x196);

	if (t39 != 499) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x197 = 1U;
	int8_t x198 = -7;
	int16_t x199 = -1967;
	uint8_t x200 = 0U;
	volatile uint32_t t40 = 34270032U;

	t40 = (((x197/x198)^x199)*x200);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x201 = INT8_MIN;
	int8_t x202 = 1;
	int32_t x203 = 120192;
	static uint32_t x204 = UINT32_MAX;
	volatile uint32_t t41 = 737918U;

	t41 = (((x201/x202)^x203)*x204);

	if (t41 != 120320U) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x205 = INT32_MIN;
	uint64_t x206 = 560364493921009421LLU;
	uint16_t x207 = 13507U;
	volatile int64_t x208 = INT64_MIN;
	volatile uint64_t t42 = 20LLU;

	t42 = (((x205/x206)^x207)*x208);

	if (t42 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x209 = -1087LL;
	int16_t x210 = INT16_MAX;
	static int8_t x211 = 0;
	volatile int64_t t43 = -653601481416217LL;

	t43 = (((x209/x210)^x211)*x212);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x215 = -28021309;
	int16_t x216 = 64;

	t44 = (((x213/x214)^x215)*x216);

	if (t44 != -1793363776LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x217 = UINT16_MAX;
	uint64_t x218 = 3376336105721505LLU;
	int32_t x220 = -13343921;
	volatile uint64_t t45 = 3653688LLU;

	t45 = (((x217/x218)^x219)*x220);

	if (t45 != 18446744067117654642LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x222 = INT8_MIN;
	static volatile int8_t x224 = INT8_MIN;

	t46 = (((x221/x222)^x223)*x224);

	if (t46 != -2044544) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x229 = INT8_MIN;
	uint8_t x230 = 6U;
	volatile int32_t t47 = 2280723;

	t47 = (((x229/x230)^x231)*x232);

	if (t47 != -1697) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x233 = 144604234;
	uint8_t x234 = 20U;
	int16_t x235 = INT16_MIN;
	static volatile uint32_t x236 = 40915526U;

	t48 = (((x233/x234)^x235)*x236);

	if (t48 != 4005996754U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x238 = INT32_MIN;
	static int16_t x239 = INT16_MIN;
	uint8_t x240 = 3U;
	volatile int64_t t49 = 29955015446317LL;

	t49 = (((x237/x238)^x239)*x240);

	if (t49 != -98304LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x241 = 7LL;
	volatile int32_t x243 = INT32_MAX;
	volatile int64_t t50 = -4440884555740LL;

	t50 = (((x241/x242)^x243)*x244);

	if (t50 != 9223372030412324865LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x245 = UINT64_MAX;
	static int32_t x246 = 6;
	int8_t x247 = -1;
	int8_t x248 = INT8_MIN;

	t51 = (((x245/x246)^x247)*x248);

	if (t51 != 6148914691236517248LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x250 = INT16_MAX;
	int16_t x251 = 0;
	volatile uint64_t t52 = 3109075785921457LLU;

	t52 = (((x249/x250)^x251)*x252);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x257 = -124;
	int16_t x258 = -10533;
	int8_t x259 = 1;
	volatile uint8_t x260 = 5U;

	t53 = (((x257/x258)^x259)*x260);

	if (t53 != 5) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x261 = -1;
	volatile int64_t x262 = INT64_MAX;
	int32_t x263 = 1285023;
	int8_t x264 = -1;
	static int64_t t54 = 0LL;

	t54 = (((x261/x262)^x263)*x264);

	if (t54 != -1285023LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x269 = 304530506LLU;
	int32_t x270 = -389;
	int32_t x271 = INT32_MIN;
	uint64_t t55 = 7241LLU;

	t55 = (((x269/x270)^x271)*x272);

	if (t55 != 18446743996400140288LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x274 = 417485484U;
	volatile uint32_t x276 = UINT32_MAX;
	uint32_t t56 = 3692488U;

	t56 = (((x273/x274)^x275)*x276);

	if (t56 != 4294967272U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x277 = -1;
	uint64_t x278 = 1065427078957LLU;
	int32_t x279 = INT32_MIN;
	int16_t x280 = 7;

	t57 = (((x277/x278)^x279)*x280);

	if (t57 != 18446744058798363681LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x294 = 538983200436557LLU;
	static int8_t x295 = INT8_MIN;
	static int64_t x296 = INT64_MIN;

	t58 = (((x293/x294)^x295)*x296);

	if (t58 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x305 = UINT32_MAX;
	int32_t x307 = INT32_MIN;
	static volatile uint32_t t59 = 167580U;

	t59 = (((x305/x306)^x307)*x308);

	if (t59 != 2147483647U) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x310 = -1LL;
	int64_t x311 = 2LL;
	uint8_t x312 = 3U;

	t60 = (((x309/x310)^x311)*x312);

	if (t60 != -375LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x313 = UINT16_MAX;
	int32_t x315 = -1;
	static int32_t t61 = 1;

	t61 = (((x313/x314)^x315)*x316);

	if (t61 != -170404) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x317 = -1;
	int8_t x319 = 12;
	volatile int32_t t62 = 5494032;

	t62 = (((x317/x318)^x319)*x320);

	if (t62 != -108) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x322 = INT64_MIN;
	int32_t x323 = -1077;
	int16_t x324 = -6;

	t63 = (((x321/x322)^x323)*x324);

	if (t63 != 6462LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x325 = 1759336156834150LLU;
	int32_t x326 = INT32_MIN;
	int16_t x327 = INT16_MAX;
	int8_t x328 = INT8_MIN;
	static uint64_t t64 = 1LLU;

	t64 = (((x325/x326)^x327)*x328);

	if (t64 != 18446744073705357440LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x329 = INT32_MAX;
	int64_t x330 = -1581372347470LL;
	int16_t x331 = 1;
	uint16_t x332 = 4U;
	int64_t t65 = -9132778430575564LL;

	t65 = (((x329/x330)^x331)*x332);

	if (t65 != 4LL) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x333 = INT64_MIN;
	volatile int8_t x334 = 15;
	int32_t x335 = INT32_MAX;
	int64_t x336 = -1LL;
	static volatile int64_t t66 = 1027379492655LL;

	t66 = (((x333/x334)^x335)*x336);

	if (t66 != 614891470984804217LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x337 = -2;
	static int32_t x338 = INT32_MIN;
	int8_t x339 = INT8_MIN;
	int32_t t67 = -534;

	t67 = (((x337/x338)^x339)*x340);

	if (t67 != -42752) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x346 = -1;
	int64_t x347 = 4950672215946LL;
	int32_t x348 = INT32_MIN;
	volatile uint64_t t68 = 4262982995205LLU;

	t68 = (((x345/x346)^x347)*x348);

	if (t68 != 12283700176303947776LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint16_t x349 = UINT16_MAX;
	int8_t x350 = INT8_MIN;
	uint32_t x351 = 24667U;
	uint32_t t69 = 3490796U;

	t69 = (((x349/x350)^x351)*x352);

	if (t69 != 4288692798U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x353 = INT64_MIN;
	int64_t x355 = -1LL;
	volatile int16_t x356 = INT16_MIN;
	volatile int64_t t70 = 280268LL;

	t70 = (((x353/x354)^x355)*x356);

	if (t70 != 65536LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x357 = 507514212LLU;
	int32_t x358 = -1;
	static int16_t x359 = -1;
	uint64_t x360 = 26282772426686LLU;
	static volatile uint64_t t71 = 9047409879LLU;

	t71 = (((x357/x358)^x359)*x360);

	if (t71 != 18446717790937124930LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x361 = UINT8_MAX;
	int8_t x362 = INT8_MAX;
	uint8_t x363 = 20U;
	uint64_t x364 = 41820565939346LLU;
	volatile uint64_t t72 = 4372186386LLU;

	t72 = (((x361/x362)^x363)*x364);

	if (t72 != 920052450665612LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x365 = INT8_MIN;
	int64_t x366 = INT64_MAX;
	static int16_t x367 = INT16_MIN;
	static uint8_t x368 = UINT8_MAX;
	static volatile int64_t t73 = -95502LL;

	t73 = (((x365/x366)^x367)*x368);

	if (t73 != -8355840LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x369 = 5896408407LLU;
	int32_t x370 = INT32_MAX;
	static int32_t x371 = INT32_MIN;
	static uint16_t x372 = UINT16_MAX;
	uint64_t t74 = 98956515LLU;

	t74 = (((x369/x370)^x371)*x372);

	if (t74 != 18446603338368811006LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x374 = INT8_MIN;
	volatile int16_t x375 = INT16_MIN;
	volatile uint8_t x376 = 1U;
	int32_t t75 = 26481729;

	t75 = (((x373/x374)^x375)*x376);

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x377 = INT8_MIN;
	uint8_t x379 = 1U;
	int8_t x380 = 14;
	volatile int32_t t76 = -134;

	t76 = (((x377/x378)^x379)*x380);

	if (t76 != -70) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x381 = 434019LLU;
	int8_t x382 = INT8_MIN;
	static int32_t x383 = 41696784;
	uint32_t x384 = 54801U;
	uint64_t t77 = 356852197831871LLU;

	t77 = (((x381/x382)^x383)*x384);

	if (t77 != 2285025459984LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x391 = -475;
	uint32_t x392 = 471U;
	static volatile int64_t t78 = -32746775865931LL;

	t78 = (((x389/x390)^x391)*x392);

	if (t78 != -223725LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x394 = 651U;
	uint8_t x395 = 11U;
	int8_t x396 = INT8_MAX;
	int32_t t79 = 108513165;

	t79 = (((x393/x394)^x395)*x396);

	if (t79 != 1397) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x397 = 1U;
	int64_t x399 = -1LL;
	uint8_t x400 = 0U;

	t80 = (((x397/x398)^x399)*x400);

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x405 = UINT32_MAX;
	int64_t x406 = INT64_MAX;
	int8_t x407 = INT8_MIN;
	int64_t x408 = -1LL;
	static volatile int64_t t81 = -19LL;

	t81 = (((x405/x406)^x407)*x408);

	if (t81 != 128LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x413 = INT32_MIN;
	int64_t x414 = INT64_MIN;
	static uint32_t x416 = 3261466U;
	static volatile int64_t t82 = -7LL;

	t82 = (((x413/x414)^x415)*x416);

	if (t82 != 25856902448LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x417 = 37453601LL;
	uint64_t x418 = 49554047178726643LLU;
	uint32_t x419 = UINT32_MAX;
	int32_t x420 = INT32_MAX;

	t83 = (((x417/x418)^x419)*x420);

	if (t83 != 9223372030412324865LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x421 = INT8_MAX;
	uint8_t x422 = UINT8_MAX;
	int16_t x423 = INT16_MIN;
	static uint16_t x424 = 330U;
	volatile int32_t t84 = 5811703;

	t84 = (((x421/x422)^x423)*x424);

	if (t84 != -10813440) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x427 = 4;
	static uint16_t x428 = UINT16_MAX;

	t85 = (((x425/x426)^x427)*x428);

	if (t85 != 262140) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x429 = INT64_MIN;
	volatile int8_t x430 = -18;
	uint64_t x431 = 6104205LLU;
	uint16_t x432 = 38U;
	volatile uint64_t t86 = 219461378083782LLU;

	t86 = (((x429/x430)^x431)*x432);

	if (t86 != 1024819115034527622LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x437 = UINT64_MAX;
	static uint32_t x439 = UINT32_MAX;
	int64_t x440 = -1LL;
	volatile uint64_t t87 = 690330042434LLU;

	t87 = (((x437/x438)^x439)*x440);

	if (t87 != 18446462590142971906LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x441 = -8145888;
	int8_t x442 = INT8_MIN;
	int8_t x443 = INT8_MAX;
	volatile int32_t t88 = 266864988;

	t88 = (((x441/x442)^x443)*x444);

	if (t88 != -1784160) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x445 = -1;
	static uint16_t x446 = 156U;
	uint32_t x447 = UINT32_MAX;
	static volatile uint64_t x448 = 198820284221755833LLU;
	volatile uint64_t t89 = 1760LLU;

	t89 = (((x445/x446)^x447)*x448);

	if (t89 != 13577147512217792071LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x450 = INT16_MAX;
	int16_t x451 = INT16_MIN;
	uint8_t x452 = 6U;
	uint32_t t90 = 25805U;

	t90 = (((x449/x450)^x451)*x452);

	if (t90 != 4294770688U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x457 = INT64_MIN;
	int64_t x458 = INT64_MAX;
	static uint8_t x459 = UINT8_MAX;
	volatile int8_t x460 = INT8_MIN;

	t91 = (((x457/x458)^x459)*x460);

	if (t91 != 32768LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x465 = INT32_MAX;
	volatile int16_t x466 = -118;
	volatile int64_t x467 = INT64_MAX;
	static uint64_t x468 = 134496LLU;
	static uint64_t t92 = 1061771364321LLU;

	t92 = (((x465/x466)^x467)*x468);

	if (t92 != 2447694317952LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x469 = INT32_MIN;
	int16_t x470 = INT16_MIN;
	int16_t x471 = -1;
	static volatile uint32_t t93 = 945086766U;

	t93 = (((x469/x470)^x471)*x472);

	if (t93 != 198511690U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x473 = INT8_MIN;
	uint64_t x474 = UINT64_MAX;
	uint64_t t94 = 148082LLU;

	t94 = (((x473/x474)^x475)*x476);

	if (t94 != 90588LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x477 = INT8_MIN;
	static int16_t x478 = 7558;
	uint32_t x479 = 0U;
	uint8_t x480 = 63U;
	uint32_t t95 = 140889U;

	t95 = (((x477/x478)^x479)*x480);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x481 = 34879489430498LL;
	int64_t x482 = INT64_MIN;
	int8_t x484 = 1;
	volatile int64_t t96 = 232875LL;

	t96 = (((x481/x482)^x483)*x484);

	if (t96 != -941208834603LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x486 = 1931U;
	int8_t x487 = -4;
	static volatile uint64_t t97 = 204356241994035LLU;

	t97 = (((x485/x486)^x487)*x488);

	if (t97 != 403847184532176LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x490 = 108U;
	int16_t x491 = 11564;
	static volatile uint64_t x492 = 13651LLU;
	uint64_t t98 = 200782514884LLU;

	t98 = (((x489/x490)^x491)*x492);

	if (t98 != 165805046LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x494 = INT8_MAX;
	uint64_t x495 = 41229975385LLU;
	int64_t x496 = INT64_MIN;
	static volatile uint64_t t99 = 23457159065124368LLU;

	t99 = (((x493/x494)^x495)*x496);

	if (t99 != 9223372036854775808LLU) { NG(); } else { ; }
	
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

