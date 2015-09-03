#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x12 = -26;
uint32_t x14 = UINT32_MAX;
int64_t x15 = -1LL;
int8_t x19 = INT8_MAX;
uint64_t t7 = 14439295348LLU;
int64_t x40 = INT64_MIN;
int8_t x41 = INT8_MIN;
static int8_t x52 = -1;
volatile uint32_t t11 = 75248U;
int64_t x57 = INT64_MIN;
uint64_t x70 = 867409539210LLU;
volatile int32_t x73 = INT32_MAX;
volatile int64_t t15 = -516270789LL;
uint32_t x82 = 54566242U;
uint32_t t16 = 68972072U;
static int8_t x89 = -1;
volatile int8_t x90 = -59;
uint32_t x91 = UINT32_MAX;
volatile int16_t x92 = -1;
volatile uint32_t t18 = 372277945U;
uint64_t x100 = UINT64_MAX;
uint32_t x104 = 1U;
int8_t x114 = INT8_MIN;
volatile int64_t t24 = -895167101165LL;
volatile uint64_t t25 = 43LLU;
volatile int64_t t28 = -735001415444100LL;
static int16_t x153 = -3;
int16_t x164 = 7091;
static int8_t x166 = -1;
int8_t x177 = INT8_MIN;
int64_t t32 = 462180928516LL;
uint32_t x185 = 1429U;
uint16_t x191 = 4698U;
int64_t x195 = -1LL;
uint64_t x202 = 21LLU;
uint64_t t38 = 9216013379139082729LLU;
uint64_t x218 = 92312389LLU;
int64_t x220 = INT64_MIN;
volatile uint16_t x223 = 32087U;
volatile uint64_t x224 = 3071LLU;
volatile uint64_t t42 = 0LLU;
int8_t x227 = -1;
int16_t x232 = -1;
volatile uint64_t t44 = 1299055286271035859LLU;
static int8_t x234 = 0;
int8_t x237 = -3;
volatile int16_t x239 = INT16_MIN;
uint64_t x241 = 31LLU;
static int16_t x246 = -1414;
volatile uint64_t t49 = 2527352420357LLU;
volatile int32_t x253 = -1;
int8_t x256 = -1;
uint32_t x258 = UINT32_MAX;
static uint32_t t51 = 20735U;
int64_t x269 = -1LL;
volatile uint64_t t53 = 13321839471987LLU;
int16_t x275 = -1;
static volatile int8_t x278 = INT8_MIN;
int16_t x284 = -1;
static int8_t x288 = INT8_MIN;
int32_t x302 = -1;
uint64_t x303 = 96491427504LLU;
static int8_t x318 = INT8_MIN;
static int64_t x340 = INT64_MIN;
uint64_t t64 = 183445683500989LLU;
static int64_t x345 = INT64_MIN;
int16_t x346 = INT16_MAX;
static int16_t x347 = 11;
uint8_t x351 = 0U;
int32_t x352 = -3125659;
static int16_t x372 = 51;
static volatile int8_t x373 = INT8_MAX;
uint16_t x378 = 1U;
static int32_t x382 = -1;
static uint32_t t75 = 3U;
int32_t x400 = INT32_MIN;
uint8_t x401 = 17U;
volatile uint64_t t78 = 437813947557LLU;
static volatile int64_t t80 = -3LL;
static volatile int64_t t84 = 1054150538263LL;
volatile uint8_t x453 = 6U;
uint32_t x472 = 84212U;
uint64_t x477 = 24706302289691618LLU;
int64_t x488 = INT64_MAX;
int64_t x491 = -1LL;
volatile int8_t x505 = INT8_MIN;
volatile uint64_t x507 = UINT64_MAX;
static int16_t x517 = INT16_MIN;
volatile int16_t x532 = INT16_MAX;


void f0(void) {
	static volatile uint32_t x1 = 23982723U;
	int16_t x2 = -1229;
	int32_t x3 = -1;
	int64_t x4 = INT64_MIN;
	int64_t t0 = 1422048630706792LL;

	t0 = ((x1&(x2*x3))%x4);

	if (t0 != 129LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 11930U;
	uint64_t x6 = UINT64_MAX;
	uint8_t x7 = 0U;
	int32_t x8 = -797;
	uint64_t t1 = 304639647531393322LLU;

	t1 = ((x5&(x6*x7))%x8);

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 864939082918507LL;
	uint32_t x10 = 2113518487U;
	uint64_t x11 = UINT64_MAX;
	static uint64_t t2 = 3838294715LLU;

	t2 = ((x9&(x10*x11))%x12);

	if (t2 != 864937727623273LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x13 = -1;
	volatile int16_t x16 = INT16_MIN;
	volatile int64_t t3 = -32545503LL;

	t3 = ((x13&(x14*x15))%x16);

	if (t3 != -32767LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 706U;
	volatile int32_t x18 = 56790;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = 3030539;

	t4 = ((x17&(x18*x19))%x20);

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	volatile int16_t x22 = INT16_MIN;
	int64_t x23 = -1LL;
	int32_t x24 = 1;
	static volatile int64_t t5 = -212687616883759LL;

	t5 = ((x21&(x22*x23))%x24);

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x25 = -48;
	static int16_t x26 = INT16_MAX;
	static int32_t x27 = -1;
	int32_t x28 = -1;
	volatile int32_t t6 = 4931;

	t6 = ((x25&(x26*x27))%x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int8_t x29 = -1;
	uint32_t x30 = 436039410U;
	int32_t x31 = INT32_MAX;
	static uint64_t x32 = 92LLU;

	t7 = ((x29&(x30*x31))%x32);

	if (t7 != 30LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 11007439083LLU;
	int32_t x34 = -1;
	volatile uint32_t x35 = UINT32_MAX;
	uint64_t x36 = 621078145LLU;
	uint64_t t8 = 5259771763LLU;

	t8 = ((x33&(x34*x35))%x36);

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	uint32_t x38 = 404835094U;
	volatile int32_t x39 = -84;
	int64_t t9 = 595825185LL;

	t9 = ((x37&(x38*x39))%x40);

	if (t9 != 353590472LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x42 = 5000U;
	static uint8_t x43 = UINT8_MAX;
	int64_t x44 = INT64_MIN;
	static volatile int64_t t10 = 6704192587224LL;

	t10 = ((x41&(x42*x43))%x44);

	if (t10 != 1274880LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MIN;
	int32_t x50 = INT32_MIN;
	static uint32_t x51 = 161655U;

	t11 = ((x49&(x50*x51))%x52);

	if (t11 != 2147483648U) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x53 = INT16_MIN;
	volatile int8_t x54 = 1;
	int8_t x55 = INT8_MIN;
	int8_t x56 = INT8_MAX;
	int32_t t12 = -892093;

	t12 = ((x53&(x54*x55))%x56);

	if (t12 != -2) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x58 = INT64_MIN;
	static int8_t x59 = 1;
	static int16_t x60 = 3437;
	int64_t t13 = -1295679636LL;

	t13 = ((x57&(x58*x59))%x60);

	if (t13 != -1359LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x69 = 16U;
	int16_t x71 = INT16_MIN;
	int8_t x72 = -1;
	static volatile uint64_t t14 = 5083588990276568086LLU;

	t14 = ((x69&(x70*x71))%x72);

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x74 = 4019U;
	int8_t x75 = INT8_MAX;
	volatile int64_t x76 = INT64_MAX;

	t15 = ((x73&(x74*x75))%x76);

	if (t15 != 510413LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x81 = -1;
	int16_t x83 = INT16_MAX;
	uint16_t x84 = UINT16_MAX;

	t16 = ((x81&(x82*x83))%x84);

	if (t16 != 44558U) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x85 = INT16_MIN;
	static int8_t x86 = -2;
	volatile int8_t x87 = INT8_MAX;
	static volatile int32_t x88 = -1;
	volatile int32_t t17 = 173489;

	t17 = ((x85&(x86*x87))%x88);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {


	t18 = ((x89&(x90*x91))%x92);

	if (t18 != 59U) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x97 = INT64_MIN;
	int64_t x98 = -1LL;
	static int8_t x99 = INT8_MIN;
	static uint64_t t19 = 3328106LLU;

	t19 = ((x97&(x98*x99))%x100);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x101 = 1030656LLU;
	int8_t x102 = -1;
	int64_t x103 = 354060162569423865LL;
	volatile uint64_t t20 = 280991LLU;

	t20 = ((x101&(x102*x103))%x104);

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x105 = -1;
	int64_t x106 = -1LL;
	int8_t x107 = INT8_MAX;
	uint64_t x108 = 113160LLU;
	volatile uint64_t t21 = 129778609931136LLU;

	t21 = ((x105&(x106*x107))%x108);

	if (t21 != 24489LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x109 = INT32_MIN;
	uint8_t x110 = 121U;
	static uint16_t x111 = 20U;
	uint64_t x112 = 6LLU;
	volatile uint64_t t22 = 64978579582LLU;

	t22 = ((x109&(x110*x111))%x112);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x113 = -1;
	int16_t x115 = INT16_MIN;
	static int32_t x116 = -1;
	int32_t t23 = -1420971;

	t23 = ((x113&(x114*x115))%x116);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x117 = INT16_MIN;
	static int64_t x118 = -1LL;
	volatile uint8_t x119 = 0U;
	uint16_t x120 = 698U;

	t24 = ((x117&(x118*x119))%x120);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x121 = 2460421222371600444LLU;
	static int64_t x122 = 61985LL;
	static volatile uint32_t x123 = 710U;
	static int64_t x124 = INT64_MAX;

	t25 = ((x121&(x122*x123))%x124);

	if (t25 != 688132LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x133 = 101U;
	static int32_t x134 = -1;
	int8_t x135 = INT8_MAX;
	int8_t x136 = -1;
	volatile int32_t t26 = 945259;

	t26 = ((x133&(x134*x135))%x136);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x137 = 39;
	static int64_t x138 = 269LL;
	int8_t x139 = INT8_MIN;
	uint16_t x140 = 3U;
	static int64_t t27 = -260432LL;

	t27 = ((x137&(x138*x139))%x140);

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x141 = -1392095LL;
	uint16_t x142 = 15271U;
	int8_t x143 = INT8_MIN;
	uint32_t x144 = 20050U;

	t28 = ((x141&(x142*x143))%x144);

	if (t28 != -1180LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x154 = -1;
	static uint32_t x155 = 90U;
	int64_t x156 = -1LL;
	static volatile int64_t t29 = -5LL;

	t29 = ((x153&(x154*x155))%x156);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x161 = 39U;
	int32_t x162 = 695053;
	uint16_t x163 = 1U;
	static int32_t t30 = 10624751;

	t30 = ((x161&(x162*x163))%x164);

	if (t30 != 5) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x165 = 7U;
	int8_t x167 = -41;
	static int64_t x168 = INT64_MIN;
	volatile int64_t t31 = 6LL;

	t31 = ((x165&(x166*x167))%x168);

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x178 = -1LL;
	int32_t x179 = INT32_MIN;
	int8_t x180 = INT8_MIN;

	t32 = ((x177&(x178*x179))%x180);

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x181 = INT32_MAX;
	int16_t x182 = INT16_MAX;
	int64_t x183 = -202354516431551LL;
	static volatile int32_t x184 = -65;
	static int64_t t33 = -1437698106821LL;

	t33 = ((x181&(x182*x183))%x184);

	if (t33 != 60LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x186 = INT32_MAX;
	static uint32_t x187 = 3U;
	int32_t x188 = INT32_MAX;
	uint32_t t34 = 365034366U;

	t34 = ((x185&(x186*x187))%x188);

	if (t34 != 1429U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x189 = -1LL;
	static int16_t x190 = INT16_MIN;
	int32_t x192 = -1;
	int64_t t35 = 24LL;

	t35 = ((x189&(x190*x191))%x192);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int32_t x193 = -1;
	uint8_t x194 = UINT8_MAX;
	uint64_t x196 = 86479LLU;
	volatile uint64_t t36 = 1143000922715044LLU;

	t36 = ((x193&(x194*x195))%x196);

	if (t36 != 11238LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x197 = -1;
	uint8_t x198 = UINT8_MAX;
	static int8_t x199 = INT8_MIN;
	int16_t x200 = -3795;
	volatile int32_t t37 = 87;

	t37 = ((x197&(x198*x199))%x200);

	if (t37 != -2280) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x201 = INT16_MAX;
	int16_t x203 = 187;
	static volatile int32_t x204 = -230068301;

	t38 = ((x201&(x202*x203))%x204);

	if (t38 != 3927LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x209 = INT32_MIN;
	static uint8_t x210 = 40U;
	int16_t x211 = 92;
	static volatile int8_t x212 = INT8_MAX;
	static int32_t t39 = -8;

	t39 = ((x209&(x210*x211))%x212);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x213 = -1;
	int32_t x214 = INT32_MIN;
	int8_t x215 = 1;
	int32_t x216 = 1;
	int32_t t40 = 15;

	t40 = ((x213&(x214*x215))%x216);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x217 = UINT16_MAX;
	int8_t x219 = INT8_MAX;
	uint64_t t41 = 111843802481LLU;

	t41 = ((x217&(x218*x219))%x220);

	if (t41 != 3899LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x221 = INT8_MIN;
	uint64_t x222 = UINT64_MAX;

	t42 = ((x221&(x222*x223))%x224);

	if (t42 != 444LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x225 = 7;
	static volatile int32_t x226 = -52750539;
	uint64_t x228 = 6222955911446126LLU;
	uint64_t t43 = 26950648881157LLU;

	t43 = ((x225&(x226*x227))%x228);

	if (t43 != 3LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x229 = INT32_MIN;
	int64_t x230 = -1LL;
	uint64_t x231 = UINT64_MAX;

	t44 = ((x229&(x230*x231))%x232);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x233 = 2;
	volatile int8_t x235 = INT8_MAX;
	static volatile int32_t x236 = -80;
	int32_t t45 = 1150;

	t45 = ((x233&(x234*x235))%x236);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x238 = 57U;
	int8_t x240 = -1;
	volatile uint32_t t46 = 44393646U;

	t46 = ((x237&(x238*x239))%x240);

	if (t46 != 4293099520U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x242 = UINT32_MAX;
	int32_t x243 = -153;
	uint16_t x244 = 1943U;
	volatile uint64_t t47 = 809623LLU;

	t47 = ((x241&(x242*x243))%x244);

	if (t47 != 25LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x245 = INT16_MIN;
	volatile uint16_t x247 = 13U;
	int64_t x248 = -1661884566661936614LL;
	volatile int64_t t48 = 39063893520508681LL;

	t48 = ((x245&(x246*x247))%x248);

	if (t48 != -32768LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x249 = -24;
	static int32_t x250 = 1501;
	uint32_t x251 = 816412568U;
	uint64_t x252 = UINT64_MAX;

	t49 = ((x249&(x250*x251))%x252);

	if (t49 != 1369585192LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x254 = 117179404U;
	volatile uint32_t x255 = 60232572U;
	volatile uint32_t t50 = 503254324U;

	t50 = ((x253&(x254*x255))%x256);

	if (t50 != 2641549776U) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x257 = INT16_MIN;
	uint32_t x259 = 1U;
	volatile int8_t x260 = INT8_MIN;

	t51 = ((x257&(x258*x259))%x260);

	if (t51 != 4294934528U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x261 = -1;
	uint8_t x262 = 3U;
	volatile int8_t x263 = -1;
	int32_t x264 = INT32_MIN;
	int32_t t52 = 1;

	t52 = ((x261&(x262*x263))%x264);

	if (t52 != -3) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x270 = 113LLU;
	int32_t x271 = INT32_MIN;
	static int8_t x272 = INT8_MIN;

	t53 = ((x269&(x270*x271))%x272);

	if (t53 != 18446743831043899392LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x273 = 233LLU;
	int8_t x274 = INT8_MIN;
	static uint16_t x276 = 1063U;
	static volatile uint64_t t54 = 55632024376LLU;

	t54 = ((x273&(x274*x275))%x276);

	if (t54 != 128LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x277 = INT32_MAX;
	uint32_t x279 = 58729430U;
	uint64_t x280 = 4264316668447LLU;
	static volatile uint64_t t55 = 378018420896LLU;

	t55 = ((x277&(x278*x279))%x280);

	if (t55 != 1072567552LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int32_t x281 = -1;
	int32_t x282 = 36759;
	volatile int64_t x283 = -125250LL;
	volatile int64_t t56 = 373790263405138237LL;

	t56 = ((x281&(x282*x283))%x284);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x285 = 742733U;
	uint8_t x286 = UINT8_MAX;
	uint64_t x287 = UINT64_MAX;
	volatile uint64_t t57 = 1496238621160115LLU;

	t57 = ((x285&(x286*x287))%x288);

	if (t57 != 742657LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x301 = UINT8_MAX;
	static int16_t x304 = -1;
	uint64_t t58 = 6864LLU;

	t58 = ((x301&(x302*x303))%x304);

	if (t58 != 80LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint64_t x313 = 21127196090LLU;
	int8_t x314 = -4;
	int16_t x315 = 3516;
	int8_t x316 = INT8_MIN;
	uint64_t t59 = 2LLU;

	t59 = ((x313&(x314*x315))%x316);

	if (t59 != 21127186704LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x317 = -1;
	static int16_t x319 = INT16_MAX;
	volatile int64_t x320 = -2024351351750LL;
	volatile int64_t t60 = 1066049453766670LL;

	t60 = ((x317&(x318*x319))%x320);

	if (t60 != -4194176LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x321 = INT16_MIN;
	int8_t x322 = INT8_MIN;
	uint8_t x323 = 101U;
	uint8_t x324 = UINT8_MAX;
	volatile int32_t t61 = -3451438;

	t61 = ((x321&(x322*x323))%x324);

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x325 = UINT64_MAX;
	int8_t x326 = INT8_MAX;
	static int8_t x327 = -1;
	volatile int8_t x328 = -29;
	static uint64_t t62 = 117002065LLU;

	t62 = ((x325&(x326*x327))%x328);

	if (t62 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x329 = INT16_MIN;
	uint16_t x330 = 1U;
	int16_t x331 = INT16_MIN;
	static volatile uint64_t x332 = 14593017350305603LLU;
	volatile uint64_t t63 = 262580782LLU;

	t63 = ((x329&(x330*x331))%x332);

	if (t63 != 1170142923236656LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x337 = 7715866445964800215LLU;
	int8_t x338 = INT8_MIN;
	volatile uint8_t x339 = UINT8_MAX;

	t64 = ((x337&(x338*x339))%x340);

	if (t64 != 7715866445964771456LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x341 = INT8_MIN;
	int8_t x342 = -4;
	static volatile int8_t x343 = INT8_MAX;
	uint8_t x344 = UINT8_MAX;
	int32_t t65 = 292;

	t65 = ((x341&(x342*x343))%x344);

	if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x348 = 1105U;
	volatile int64_t t66 = -166182252LL;

	t66 = ((x345&(x346*x347))%x348);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x349 = 0U;
	volatile uint32_t x350 = 218692474U;
	uint32_t t67 = 30U;

	t67 = ((x349&(x350*x351))%x352);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x353 = -3;
	volatile int8_t x354 = INT8_MIN;
	uint16_t x355 = UINT16_MAX;
	volatile int32_t x356 = INT32_MIN;
	volatile int32_t t68 = -1;

	t68 = ((x353&(x354*x355))%x356);

	if (t68 != -8388480) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x357 = INT16_MIN;
	volatile uint8_t x358 = 116U;
	int8_t x359 = -2;
	static int8_t x360 = -20;
	int32_t t69 = -197;

	t69 = ((x357&(x358*x359))%x360);

	if (t69 != -8) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x361 = -1;
	uint64_t x362 = 732740706309LLU;
	int8_t x363 = INT8_MIN;
	volatile int32_t x364 = INT32_MIN;
	volatile uint64_t t70 = 93747531LLU;

	t70 = ((x361&(x362*x363))%x364);

	if (t70 != 18446650282899144064LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x369 = INT64_MIN;
	volatile uint32_t x370 = 0U;
	static int8_t x371 = 8;
	volatile int64_t t71 = -35754906630LL;

	t71 = ((x369&(x370*x371))%x372);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x374 = -4;
	int16_t x375 = -1;
	volatile int16_t x376 = INT16_MAX;
	int32_t t72 = 7;

	t72 = ((x373&(x374*x375))%x376);

	if (t72 != 4) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x377 = INT16_MIN;
	int32_t x379 = INT32_MIN;
	int16_t x380 = INT16_MIN;
	static volatile int32_t t73 = 2298806;

	t73 = ((x377&(x378*x379))%x380);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x381 = -491;
	static uint16_t x383 = UINT16_MAX;
	volatile int16_t x384 = -3201;
	int32_t t74 = 11;

	t74 = ((x381&(x382*x383))%x384);

	if (t74 != -1515) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x393 = UINT32_MAX;
	int8_t x394 = -1;
	int32_t x395 = -1;
	int8_t x396 = -15;

	t75 = ((x393&(x394*x395))%x396);

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x397 = 38;
	int16_t x398 = 10;
	static uint32_t x399 = 0U;
	uint32_t t76 = 11381U;

	t76 = ((x397&(x398*x399))%x400);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x402 = -1;
	int16_t x403 = INT16_MIN;
	int16_t x404 = 7560;
	volatile int32_t t77 = 63749182;

	t77 = ((x401&(x402*x403))%x404);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint8_t x409 = UINT8_MAX;
	uint64_t x410 = UINT64_MAX;
	int32_t x411 = INT32_MIN;
	uint32_t x412 = 408U;

	t78 = ((x409&(x410*x411))%x412);

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x413 = -1LL;
	uint32_t x414 = 7379484U;
	volatile int16_t x415 = INT16_MIN;
	volatile int64_t x416 = -1LL;
	int64_t t79 = 50095LL;

	t79 = ((x413&(x414*x415))%x416);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x417 = 1LL;
	int32_t x418 = -120617;
	int8_t x419 = INT8_MAX;
	static volatile int16_t x420 = INT16_MAX;

	t80 = ((x417&(x418*x419))%x420);

	if (t80 != 1LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x425 = UINT16_MAX;
	volatile int8_t x426 = 3;
	int8_t x427 = 1;
	volatile int8_t x428 = INT8_MAX;
	int32_t t81 = -476560302;

	t81 = ((x425&(x426*x427))%x428);

	if (t81 != 3) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x433 = -56;
	uint32_t x434 = UINT32_MAX;
	int32_t x435 = INT32_MIN;
	int64_t x436 = 65566503LL;
	int64_t t82 = -2927419720297042LL;

	t82 = ((x433&(x434*x435))%x436);

	if (t82 != 49355552LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x437 = -1LL;
	uint32_t x438 = 3275633U;
	int32_t x439 = INT32_MIN;
	volatile uint64_t x440 = UINT64_MAX;
	volatile uint64_t t83 = 5332211547545808473LLU;

	t83 = ((x437&(x438*x439))%x440);

	if (t83 != 2147483648LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x441 = 10547U;
	static int8_t x442 = -2;
	int64_t x443 = 780LL;
	int64_t x444 = INT64_MIN;

	t84 = ((x441&(x442*x443))%x444);

	if (t84 != 10528LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint64_t x445 = 1788589629910012LLU;
	uint8_t x446 = UINT8_MAX;
	static uint16_t x447 = 220U;
	int32_t x448 = INT32_MIN;
	static uint64_t t85 = 0LLU;

	t85 = ((x445&(x446*x447))%x448);

	if (t85 != 2852LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x454 = UINT16_MAX;
	uint8_t x455 = 43U;
	volatile int8_t x456 = INT8_MIN;
	volatile int32_t t86 = 0;

	t86 = ((x453&(x454*x455))%x456);

	if (t86 != 4) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x461 = 71U;
	int8_t x462 = -1;
	uint16_t x463 = 3305U;
	volatile int8_t x464 = -14;
	volatile uint32_t t87 = 1864373U;

	t87 = ((x461&(x462*x463))%x464);

	if (t87 != 7U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x465 = 2U;
	uint32_t x466 = 0U;
	int64_t x467 = INT64_MIN;
	uint16_t x468 = 516U;
	volatile int64_t t88 = 28934LL;

	t88 = ((x465&(x466*x467))%x468);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x469 = 137446452014383925LL;
	int8_t x470 = INT8_MIN;
	uint32_t x471 = UINT32_MAX;
	volatile int64_t t89 = -145LL;

	t89 = ((x469&(x470*x471))%x472);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x473 = INT16_MIN;
	static int16_t x474 = INT16_MIN;
	int64_t x475 = 5398LL;
	int32_t x476 = INT32_MIN;
	int64_t t90 = -144LL;

	t90 = ((x473&(x474*x475))%x476);

	if (t90 != -176881664LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x478 = 1;
	static volatile int64_t x479 = INT64_MAX;
	uint32_t x480 = UINT32_MAX;
	uint64_t t91 = 2074694LLU;

	t91 = ((x477&(x478*x479))%x480);

	if (t91 != 1141410338LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x481 = INT32_MIN;
	int32_t x482 = -5;
	int16_t x483 = INT16_MAX;
	int64_t x484 = 44907616428693LL;
	volatile int64_t t92 = 383LL;

	t92 = ((x481&(x482*x483))%x484);

	if (t92 != -2147483648LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x485 = 8055U;
	uint8_t x486 = 0U;
	static uint32_t x487 = 285732U;
	int64_t t93 = 44977LL;

	t93 = ((x485&(x486*x487))%x488);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x489 = UINT16_MAX;
	uint64_t x490 = UINT64_MAX;
	uint16_t x492 = 121U;
	static uint64_t t94 = 114290022783LLU;

	t94 = ((x489&(x490*x491))%x492);

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x497 = UINT8_MAX;
	int32_t x498 = -12986234;
	static int8_t x499 = INT8_MIN;
	int8_t x500 = INT8_MIN;
	volatile int32_t t95 = -63602;

	t95 = ((x497&(x498*x499))%x500);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x506 = -1LL;
	uint16_t x508 = UINT16_MAX;
	static volatile uint64_t t96 = 798538446450LLU;

	t96 = ((x505&(x506*x507))%x508);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x513 = 513U;
	static int32_t x514 = -101979;
	int8_t x515 = -1;
	int8_t x516 = INT8_MIN;
	volatile int32_t t97 = -390630417;

	t97 = ((x513&(x514*x515))%x516);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x518 = 1;
	uint16_t x519 = UINT16_MAX;
	int8_t x520 = -1;
	static int32_t t98 = -107385015;

	t98 = ((x517&(x518*x519))%x520);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x529 = 7034746;
	static volatile int16_t x530 = INT16_MIN;
	uint64_t x531 = 116126LLU;
	static uint64_t t99 = 28452LLU;

	t99 = ((x529&(x530*x531))%x532);

	if (t99 != 66LLU) { NG(); } else { ; }
	
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

