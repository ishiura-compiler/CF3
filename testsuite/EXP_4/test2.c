#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = UINT8_MAX;
volatile int32_t x6 = -11;
volatile uint32_t t2 = 29050U;
static uint16_t x13 = 3U;
uint64_t x15 = 3381LLU;
static volatile uint64_t t3 = 6483674726344039LLU;
int16_t x28 = -2958;
int64_t x31 = -1LL;
static int64_t x35 = -1LL;
static int32_t x39 = -2753;
volatile int16_t x43 = INT16_MAX;
int32_t x44 = -245764;
static uint64_t x56 = UINT64_MAX;
volatile uint64_t t10 = 96371490383LLU;
uint64_t x66 = 423802074560641398LLU;
static int32_t x71 = -85;
uint64_t t13 = 7040625322742986584LLU;
int8_t x75 = -1;
volatile int64_t t14 = 168082660673LL;
int32_t x85 = INT32_MIN;
int64_t x93 = 446249928LL;
static int8_t x94 = INT8_MIN;
static uint64_t x103 = 11945053008921LLU;
volatile int16_t x106 = INT16_MIN;
int32_t x107 = 2;
static int64_t x112 = -1533485655987LL;
volatile uint64_t t24 = 1685425LLU;
uint64_t x117 = 257286998932053935LLU;
volatile uint64_t t25 = 10883LLU;
int8_t x135 = INT8_MIN;
static int8_t x138 = 1;
static int16_t x139 = -1;
int32_t x161 = -1;
static uint32_t t35 = 1459149U;
static volatile int64_t t37 = -16248804LL;
static int16_t x186 = INT16_MIN;
uint32_t t39 = 16207396U;
int32_t t40 = -1;
int16_t x197 = INT16_MIN;
int32_t x199 = 336;
int16_t x202 = INT16_MIN;
int64_t x209 = INT64_MIN;
int8_t x221 = INT8_MAX;
static uint32_t x229 = UINT32_MAX;
static int8_t x230 = -1;
int32_t x236 = INT32_MAX;
volatile int8_t x237 = INT8_MIN;
int8_t x238 = 2;
int32_t x239 = 1321;
uint64_t t49 = 1278747626916293205LLU;
uint16_t x257 = 589U;
volatile uint32_t x258 = 5U;
uint8_t x259 = 0U;
int64_t x262 = 619816516LL;
static volatile uint32_t x265 = UINT32_MAX;
int8_t x271 = INT8_MIN;
static volatile int16_t x274 = 6879;
int32_t x287 = INT32_MIN;
int16_t x291 = -2090;
int8_t x292 = INT8_MIN;
int64_t x296 = INT64_MIN;
int64_t t60 = -12755382221070863LL;
uint64_t x297 = 2013184LLU;
int64_t x299 = -14628864LL;
uint16_t x300 = 7U;
int16_t x308 = INT16_MIN;
volatile int16_t x310 = INT16_MIN;
static int32_t t64 = -35867;
volatile int16_t x315 = -544;
static int8_t x340 = INT8_MIN;
volatile uint8_t x344 = 7U;
uint32_t x349 = 28063U;
int16_t x351 = -7428;
volatile uint32_t x360 = 1548257894U;
volatile int64_t t70 = -246493LL;
int64_t x371 = INT64_MIN;
static volatile int16_t x384 = -11;
uint8_t x387 = 16U;
int64_t x388 = -1LL;
int8_t x389 = INT8_MIN;
volatile int32_t x402 = INT32_MIN;
int8_t x404 = -28;
uint32_t x407 = UINT32_MAX;
volatile int16_t x409 = INT16_MIN;
volatile int64_t x410 = -286977754864184LL;
static int16_t x411 = -1;
int8_t x419 = -1;
uint32_t x421 = 258064U;
int8_t x424 = INT8_MIN;
uint32_t x427 = 19880300U;
volatile uint32_t t83 = 849078208U;
volatile uint64_t x432 = 2LLU;
volatile uint16_t x434 = 2207U;
int64_t x436 = 24983LL;
static int16_t x437 = -14142;
volatile uint16_t x439 = 7U;
volatile int16_t x444 = INT16_MAX;
static int32_t t87 = -603708692;
volatile uint8_t x457 = UINT8_MAX;
static int16_t x459 = -11124;
int64_t x460 = 106075747420892LL;
int64_t x474 = INT64_MIN;
int8_t x476 = 3;
static volatile int8_t x482 = 17;
int64_t x484 = INT64_MIN;
uint8_t x485 = 2U;
volatile int64_t t95 = 23560342LL;
int16_t x494 = 4;
int8_t x498 = INT8_MIN;
int16_t x500 = -1;
static uint64_t t98 = 31LLU;


void f0(void) {
	int32_t x1 = INT32_MIN;
	static int32_t x2 = 401102;
	static int32_t x3 = -1009752;
	static volatile int32_t t0 = 0;

	t0 = (x1-(x2+(x3+x4)));

	if (t0 != -2146875253) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	int16_t x7 = -2;
	uint64_t x8 = 1LLU;
	static uint64_t t1 = 94418754LLU;

	t1 = (x5-(x6+(x7+x8)));

	if (t1 != 18446744073709551500LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 81;
	volatile int8_t x10 = INT8_MIN;
	uint32_t x11 = 8522U;
	int32_t x12 = INT32_MAX;

	t2 = (x9-(x10+(x11+x12)));

	if (t2 != 2147475336U) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = INT32_MIN;
	volatile uint32_t x16 = 2U;

	t3 = (x13-(x14+(x15+x16)));

	if (t3 != 2147480268LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = INT64_MIN;
	uint32_t x26 = UINT32_MAX;
	uint64_t x27 = UINT64_MAX;
	uint64_t t4 = 321396645933826732LLU;

	t4 = (x25-(x26+(x27+x28)));

	if (t4 != 9223372032559811472LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = -1;
	volatile int32_t x30 = INT32_MIN;
	volatile int16_t x32 = -1;
	volatile int64_t t5 = 276285466075LL;

	t5 = (x29-(x30+(x31+x32)));

	if (t5 != 2147483649LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = INT16_MIN;
	int32_t x34 = INT32_MIN;
	volatile int64_t x36 = INT64_MAX;
	int64_t t6 = -31424252369498LL;

	t6 = (x33-(x34+(x35+x36)));

	if (t6 != -9223372034707324926LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = INT32_MAX;
	uint8_t x38 = UINT8_MAX;
	volatile uint64_t x40 = UINT64_MAX;
	static uint64_t t7 = 4759187LLU;

	t7 = (x37-(x38+(x39+x40)));

	if (t7 != 2147486146LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = 1622;
	int16_t x42 = 511;
	volatile int32_t t8 = 44846497;

	t8 = (x41-(x42+(x43+x44)));

	if (t8 != 214108) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x45 = -13;
	static volatile int32_t x46 = -3669;
	uint64_t x47 = 6582LLU;
	int64_t x48 = -1LL;
	static volatile uint64_t t9 = 8031279606210654228LLU;

	t9 = (x45-(x46+(x47+x48)));

	if (t9 != 18446744073709548691LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x53 = UINT8_MAX;
	int8_t x54 = INT8_MAX;
	int64_t x55 = INT64_MIN;

	t10 = (x53-(x54+(x55+x56)));

	if (t10 != 9223372036854775937LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x61 = INT8_MIN;
	volatile int16_t x62 = 175;
	int8_t x63 = INT8_MIN;
	int64_t x64 = -13098493942330LL;
	volatile int64_t t11 = 3152022203383257219LL;

	t11 = (x61-(x62+(x63+x64)));

	if (t11 != 13098493942155LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint64_t x65 = 42865739631526LLU;
	volatile uint8_t x67 = UINT8_MAX;
	int8_t x68 = 0;
	uint64_t t12 = 98651345043476LLU;

	t12 = (x65-(x66+(x67+x68)));

	if (t12 != 18022984864888541489LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x69 = 2086;
	volatile uint8_t x70 = UINT8_MAX;
	static uint64_t x72 = UINT64_MAX;

	t13 = (x69-(x70+(x71+x72)));

	if (t13 != 1917LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x73 = 29U;
	int32_t x74 = INT32_MAX;
	int64_t x76 = 333397189072381253LL;

	t14 = (x73-(x74+(x75+x76)));

	if (t14 != -333397191219864870LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x77 = INT64_MAX;
	volatile int16_t x78 = INT16_MIN;
	uint32_t x79 = UINT32_MAX;
	volatile uint64_t x80 = 505LLU;
	static uint64_t t15 = 2414LLU;

	t15 = (x77-(x78+(x79+x80)));

	if (t15 != 9223372032559840775LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x81 = INT8_MIN;
	int32_t x82 = 1877;
	int16_t x83 = INT16_MIN;
	volatile uint16_t x84 = UINT16_MAX;
	int32_t t16 = -2;

	t16 = (x81-(x82+(x83+x84)));

	if (t16 != -34772) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x86 = 35U;
	uint16_t x87 = 11U;
	int32_t x88 = -1;
	volatile uint32_t t17 = 171U;

	t17 = (x85-(x86+(x87+x88)));

	if (t17 != 2147483603U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x89 = 80U;
	int32_t x90 = -2;
	uint16_t x91 = 1678U;
	static uint64_t x92 = UINT64_MAX;
	volatile uint64_t t18 = 1443287196LLU;

	t18 = (x89-(x90+(x91+x92)));

	if (t18 != 18446744073709550021LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x95 = INT32_MIN;
	volatile uint8_t x96 = UINT8_MAX;
	volatile int64_t t19 = 10342719223075829LL;

	t19 = (x93-(x94+(x95+x96)));

	if (t19 != 2593733449LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x97 = -234;
	static uint32_t x98 = 6404U;
	int32_t x99 = -108770392;
	int32_t x100 = -17497;
	static volatile uint32_t t20 = 124115378U;

	t20 = (x97-(x98+(x99+x100)));

	if (t20 != 108781251U) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x101 = INT8_MAX;
	uint8_t x102 = UINT8_MAX;
	uint32_t x104 = UINT32_MAX;
	volatile uint64_t t21 = 106531453880118LLU;

	t21 = (x101-(x102+(x103+x104)));

	if (t21 != 18446732124361575272LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x105 = INT64_MIN;
	int16_t x108 = INT16_MIN;
	volatile int64_t t22 = 396373278LL;

	t22 = (x105-(x106+(x107+x108)));

	if (t22 != -9223372036854710274LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = INT16_MIN;
	int8_t x110 = -1;
	int64_t x111 = 1LL;
	int64_t t23 = -11089449LL;

	t23 = (x109-(x110+(x111+x112)));

	if (t23 != 1533485623219LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x113 = UINT16_MAX;
	uint64_t x114 = UINT64_MAX;
	volatile int8_t x115 = 1;
	int8_t x116 = 63;

	t24 = (x113-(x114+(x115+x116)));

	if (t24 != 65472LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x118 = -87762612599358496LL;
	int64_t x119 = -107056324185564LL;
	static int16_t x120 = INT16_MIN;

	t25 = (x117-(x118+(x119+x120)));

	if (t25 != 345156667855630763LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x125 = 525873572596137LL;
	uint8_t x126 = UINT8_MAX;
	static int32_t x127 = -1;
	int32_t x128 = -3;
	static volatile int64_t t26 = 27LL;

	t26 = (x125-(x126+(x127+x128)));

	if (t26 != 525873572595886LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x129 = UINT32_MAX;
	volatile int16_t x130 = INT16_MIN;
	uint64_t x131 = 68812343466265358LLU;
	int8_t x132 = -4;
	volatile uint64_t t27 = 62115762329LLU;

	t27 = (x129-(x130+(x131+x132)));

	if (t27 != 18377931734538286325LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x133 = UINT64_MAX;
	volatile int16_t x134 = 2359;
	int8_t x136 = INT8_MIN;
	static uint64_t t28 = 127359LLU;

	t28 = (x133-(x134+(x135+x136)));

	if (t28 != 18446744073709549512LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x137 = UINT64_MAX;
	uint32_t x140 = UINT32_MAX;
	volatile uint64_t t29 = 7820509255696631332LLU;

	t29 = (x137-(x138+(x139+x140)));

	if (t29 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x141 = INT32_MIN;
	volatile uint8_t x142 = 0U;
	int16_t x143 = INT16_MIN;
	static volatile int64_t x144 = 375217LL;
	volatile int64_t t30 = -1072441810346999636LL;

	t30 = (x141-(x142+(x143+x144)));

	if (t30 != -2147826097LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x153 = INT32_MIN;
	int16_t x154 = 15176;
	uint32_t x155 = 242U;
	volatile uint16_t x156 = UINT16_MAX;
	volatile uint32_t t31 = 1030213U;

	t31 = (x153-(x154+(x155+x156)));

	if (t31 != 2147402695U) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x162 = 0;
	volatile uint16_t x163 = 1274U;
	uint16_t x164 = 29363U;
	volatile int32_t t32 = -238579;

	t32 = (x161-(x162+(x163+x164)));

	if (t32 != -30638) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x165 = INT16_MAX;
	uint64_t x166 = 5941135106LLU;
	int16_t x167 = -1;
	volatile int32_t x168 = -1;
	uint64_t t33 = 14209294LLU;

	t33 = (x165-(x166+(x167+x168)));

	if (t33 != 18446744067768449279LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x169 = 1717;
	static uint8_t x170 = UINT8_MAX;
	uint8_t x171 = 2U;
	int8_t x172 = -1;
	volatile int32_t t34 = -7;

	t34 = (x169-(x170+(x171+x172)));

	if (t34 != 1461) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x173 = UINT32_MAX;
	int8_t x174 = INT8_MIN;
	static int16_t x175 = INT16_MAX;
	int16_t x176 = 3894;

	t35 = (x173-(x174+(x175+x176)));

	if (t35 != 4294930762U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x177 = -45;
	int64_t x178 = 2487267378769LL;
	int64_t x179 = INT64_MIN;
	volatile uint64_t x180 = UINT64_MAX;
	volatile uint64_t t36 = 766130120970LLU;

	t36 = (x177-(x178+(x179+x180)));

	if (t36 != 9223369549587396995LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x181 = INT8_MIN;
	uint32_t x182 = UINT32_MAX;
	int32_t x183 = INT32_MIN;
	int64_t x184 = -1LL;

	t37 = (x181-(x182+(x183+x184)));

	if (t37 != -2147483774LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x185 = INT8_MIN;
	int16_t x187 = -1;
	static int16_t x188 = INT16_MAX;
	volatile int32_t t38 = 656588882;

	t38 = (x185-(x186+(x187+x188)));

	if (t38 != -126) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x189 = INT8_MIN;
	uint8_t x190 = UINT8_MAX;
	volatile int32_t x191 = INT32_MIN;
	static uint32_t x192 = 13355U;

	t39 = (x189-(x190+(x191+x192)));

	if (t39 != 2147469910U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x193 = -65;
	int16_t x194 = INT16_MIN;
	int16_t x195 = -1;
	int16_t x196 = -1;

	t40 = (x193-(x194+(x195+x196)));

	if (t40 != 32705) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x198 = INT8_MIN;
	int8_t x200 = INT8_MIN;
	volatile int32_t t41 = -23411295;

	t41 = (x197-(x198+(x199+x200)));

	if (t41 != -32848) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x201 = -1;
	static int64_t x203 = INT64_MAX;
	int16_t x204 = INT16_MIN;
	int64_t t42 = -501LL;

	t42 = (x201-(x202+(x203+x204)));

	if (t42 != -9223372036854710272LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x205 = -1;
	static int32_t x206 = -1;
	uint8_t x207 = 0U;
	static volatile uint64_t x208 = 7045378496620LLU;
	static volatile uint64_t t43 = 3305999LLU;

	t43 = (x205-(x206+(x207+x208)));

	if (t43 != 18446737028331054996LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x210 = 965937984LLU;
	int64_t x211 = -8187319641LL;
	int8_t x212 = INT8_MIN;
	volatile uint64_t t44 = 2137423051933LLU;

	t44 = (x209-(x210+(x211+x212)));

	if (t44 != 9223372044076157593LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x222 = UINT32_MAX;
	int16_t x223 = INT16_MAX;
	volatile uint64_t x224 = 329LLU;
	volatile uint64_t t45 = 1086687741034901292LLU;

	t45 = (x221-(x222+(x223+x224)));

	if (t45 != 18446744069414551352LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x231 = INT32_MIN;
	uint64_t x232 = 223117211LLU;
	volatile uint64_t t46 = 77333340409835203LLU;

	t46 = (x229-(x230+(x231+x232)));

	if (t46 != 6219333733LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x233 = 24U;
	volatile int8_t x234 = -1;
	static int32_t x235 = INT32_MIN;
	int32_t t47 = -1;

	t47 = (x233-(x234+(x235+x236)));

	if (t47 != 26) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x240 = UINT8_MAX;
	int32_t t48 = 1;

	t48 = (x237-(x238+(x239+x240)));

	if (t48 != -1706) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x241 = UINT64_MAX;
	static volatile int16_t x242 = INT16_MIN;
	int32_t x243 = -2478;
	static uint16_t x244 = 111U;

	t49 = (x241-(x242+(x243+x244)));

	if (t49 != 35134LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x245 = INT16_MAX;
	int32_t x246 = INT32_MAX;
	uint32_t x247 = 34U;
	int8_t x248 = -2;
	uint32_t t50 = 9687649U;

	t50 = (x245-(x246+(x247+x248)));

	if (t50 != 2147516384U) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x249 = 1U;
	int64_t x250 = INT64_MIN;
	uint16_t x251 = 859U;
	int64_t x252 = -244LL;
	int64_t t51 = -2681870912546921LL;

	t51 = (x249-(x250+(x251+x252)));

	if (t51 != 9223372036854775194LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x260 = -2;
	volatile uint32_t t52 = 117U;

	t52 = (x257-(x258+(x259+x260)));

	if (t52 != 586U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x261 = 6U;
	static int32_t x263 = -1;
	volatile int32_t x264 = -127;
	static int64_t t53 = 43478437231549280LL;

	t53 = (x261-(x262+(x263+x264)));

	if (t53 != -619816382LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x266 = -1LL;
	int8_t x267 = INT8_MIN;
	volatile uint64_t x268 = UINT64_MAX;
	static uint64_t t54 = 4818309487887243LLU;

	t54 = (x265-(x266+(x267+x268)));

	if (t54 != 4294967425LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x269 = 33353;
	int64_t x270 = -374232589275703LL;
	int8_t x272 = 14;
	int64_t t55 = 36577LL;

	t55 = (x269-(x270+(x271+x272)));

	if (t55 != 374232589309170LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x273 = INT8_MIN;
	static uint8_t x275 = 115U;
	int64_t x276 = INT64_MIN;
	volatile int64_t t56 = 183303360957170905LL;

	t56 = (x273-(x274+(x275+x276)));

	if (t56 != 9223372036854768686LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x281 = 1LL;
	int8_t x282 = INT8_MAX;
	int64_t x283 = 19098170518798LL;
	static uint32_t x284 = UINT32_MAX;
	int64_t t57 = 32857819813LL;

	t57 = (x281-(x282+(x283+x284)));

	if (t57 != -19102465486219LL) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x285 = -1;
	int8_t x286 = 17;
	static uint16_t x288 = 26U;
	volatile int32_t t58 = 1;

	t58 = (x285-(x286+(x287+x288)));

	if (t58 != 2147483604) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x289 = 378319273U;
	static volatile int8_t x290 = INT8_MIN;
	volatile uint32_t t59 = 113820268U;

	t59 = (x289-(x290+(x291+x292)));

	if (t59 != 378321619U) { NG(); } else { ; }
	
}

void f60(void) {
	static uint8_t x293 = 1U;
	int8_t x294 = INT8_MIN;
	uint32_t x295 = UINT32_MAX;

	t60 = (x293-(x294+(x295+x296)));

	if (t60 != 9223372032559808642LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x298 = -1;
	uint64_t t61 = 513885LLU;

	t61 = (x297-(x298+(x299+x300)));

	if (t61 != 16642042LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x301 = INT16_MIN;
	int8_t x302 = -1;
	int32_t x303 = INT32_MIN;
	volatile int8_t x304 = INT8_MAX;
	volatile int32_t t62 = -63337812;

	t62 = (x301-(x302+(x303+x304)));

	if (t62 != 2147450754) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x305 = -1;
	static uint8_t x306 = UINT8_MAX;
	int32_t x307 = INT32_MAX;
	volatile int32_t t63 = -2730490;

	t63 = (x305-(x306+(x307+x308)));

	if (t63 != -2147451135) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x309 = UINT16_MAX;
	int32_t x311 = INT32_MAX;
	int16_t x312 = INT16_MIN;

	t64 = (x309-(x310+(x311+x312)));

	if (t64 != -2147352576) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x313 = INT64_MAX;
	static uint8_t x314 = 54U;
	volatile uint64_t x316 = 8725827282609LLU;
	volatile uint64_t t65 = 3LLU;

	t65 = (x313-(x314+(x315+x316)));

	if (t65 != 9223363311027493688LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x333 = UINT64_MAX;
	static int8_t x334 = 0;
	int32_t x335 = 370;
	static uint16_t x336 = UINT16_MAX;
	uint64_t t66 = 409471250824141LLU;

	t66 = (x333-(x334+(x335+x336)));

	if (t66 != 18446744073709485710LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x337 = -22;
	uint8_t x338 = 107U;
	volatile uint64_t x339 = UINT64_MAX;
	static uint64_t t67 = 112316735052689LLU;

	t67 = (x337-(x338+(x339+x340)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x341 = 1321;
	static volatile int64_t x342 = INT64_MIN;
	static uint64_t x343 = UINT64_MAX;
	uint64_t t68 = 225137888512LLU;

	t68 = (x341-(x342+(x343+x344)));

	if (t68 != 9223372036854777123LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x350 = INT16_MIN;
	static volatile uint64_t x352 = UINT64_MAX;
	uint64_t t69 = 2324058849449992LLU;

	t69 = (x349-(x350+(x351+x352)));

	if (t69 != 68260LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x357 = 0;
	uint16_t x358 = UINT16_MAX;
	int64_t x359 = 109446656574143408LL;

	t70 = (x357-(x358+(x359+x360)));

	if (t70 != -109446658122466837LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x361 = 5953683212746213LLU;
	int16_t x362 = 3;
	volatile int32_t x363 = -1;
	uint8_t x364 = 50U;
	uint64_t t71 = 417048LLU;

	t71 = (x361-(x362+(x363+x364)));

	if (t71 != 5953683212746161LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x369 = -1;
	static uint64_t x370 = 4357655679816LLU;
	int16_t x372 = INT16_MAX;
	static uint64_t t72 = 3827084262201LLU;

	t72 = (x369-(x370+(x371+x372)));

	if (t72 != 9223367679199063224LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x377 = INT16_MIN;
	int64_t x378 = INT64_MIN;
	int16_t x379 = -34;
	static volatile uint8_t x380 = UINT8_MAX;
	int64_t t73 = -702044519787LL;

	t73 = (x377-(x378+(x379+x380)));

	if (t73 != 9223372036854742819LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x381 = INT16_MAX;
	static int32_t x382 = INT32_MIN;
	uint32_t x383 = UINT32_MAX;
	volatile uint32_t t74 = 7U;

	t74 = (x381-(x382+(x383+x384)));

	if (t74 != 2147516427U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x385 = -1731;
	static int16_t x386 = 280;
	int64_t t75 = -54LL;

	t75 = (x385-(x386+(x387+x388)));

	if (t75 != -2026LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x390 = UINT64_MAX;
	static int8_t x391 = -7;
	int32_t x392 = 26694777;
	uint64_t t76 = 312909979409649282LLU;

	t76 = (x389-(x390+(x391+x392)));

	if (t76 != 18446744073682856719LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int64_t x401 = -503LL;
	uint8_t x403 = UINT8_MAX;
	static int64_t t77 = 5985LL;

	t77 = (x401-(x402+(x403+x404)));

	if (t77 != 2147482918LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x405 = UINT32_MAX;
	static int32_t x406 = 253863299;
	static uint32_t x408 = 58296500U;
	uint32_t t78 = 1039940181U;

	t78 = (x405-(x406+(x407+x408)));

	if (t78 != 3982807497U) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x412 = 22U;
	static volatile int64_t t79 = -391121LL;

	t79 = (x409-(x410+(x411+x412)));

	if (t79 != 286977754831395LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x413 = 5328394336613LL;
	int16_t x414 = INT16_MIN;
	volatile uint32_t x415 = 4652839U;
	int32_t x416 = -1;
	int64_t t80 = 2066950334LL;

	t80 = (x413-(x414+(x415+x416)));

	if (t80 != 5328389716543LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x417 = INT8_MIN;
	static uint64_t x418 = 4814597458LLU;
	int64_t x420 = 17797612522LL;
	volatile uint64_t t81 = 7821685623325865LLU;

	t81 = (x417-(x418+(x419+x420)));

	if (t81 != 18446744051097341509LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x422 = 3U;
	int8_t x423 = -1;
	volatile uint32_t t82 = 31944061U;

	t82 = (x421-(x422+(x423+x424)));

	if (t82 != 258190U) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x425 = 4U;
	uint32_t x426 = 360288U;
	int8_t x428 = INT8_MAX;

	t83 = (x425-(x426+(x427+x428)));

	if (t83 != 4274726585U) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x429 = 35317LL;
	int32_t x430 = INT32_MIN;
	uint16_t x431 = 38U;
	uint64_t t84 = 4475930LLU;

	t84 = (x429-(x430+(x431+x432)));

	if (t84 != 2147518925LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x433 = 448577229125662LL;
	int8_t x435 = -44;
	volatile int64_t t85 = 10087LL;

	t85 = (x433-(x434+(x435+x436)));

	if (t85 != 448577229098516LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x438 = 490806477058473LL;
	volatile int8_t x440 = INT8_MIN;
	volatile int64_t t86 = 1670946980564818LL;

	t86 = (x437-(x438+(x439+x440)));

	if (t86 != -490806477072494LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x441 = -1;
	int32_t x442 = INT32_MIN;
	volatile int8_t x443 = INT8_MIN;

	t87 = (x441-(x442+(x443+x444)));

	if (t87 != 2147451008) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x445 = INT32_MIN;
	int32_t x446 = -1;
	volatile uint16_t x447 = 1709U;
	int64_t x448 = 24832704LL;
	int64_t t88 = -77993863LL;

	t88 = (x445-(x446+(x447+x448)));

	if (t88 != -2172318060LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x458 = INT8_MIN;
	int64_t t89 = -9819281702025LL;

	t89 = (x457-(x458+(x459+x460)));

	if (t89 != -106075747409385LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x461 = 0;
	volatile int8_t x462 = 1;
	int8_t x463 = 10;
	int8_t x464 = -14;
	int32_t t90 = -2150;

	t90 = (x461-(x462+(x463+x464)));

	if (t90 != 3) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x469 = 1;
	static int8_t x470 = INT8_MAX;
	int64_t x471 = -1LL;
	int16_t x472 = -2498;
	volatile int64_t t91 = -1179792LL;

	t91 = (x469-(x470+(x471+x472)));

	if (t91 != 2373LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x473 = -1;
	int8_t x475 = INT8_MAX;
	volatile int64_t t92 = -971621311504702647LL;

	t92 = (x473-(x474+(x475+x476)));

	if (t92 != 9223372036854775677LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x477 = UINT8_MAX;
	int8_t x478 = -1;
	int64_t x479 = INT64_MAX;
	volatile uint16_t x480 = 0U;
	volatile int64_t t93 = -29227680LL;

	t93 = (x477-(x478+(x479+x480)));

	if (t93 != -9223372036854775551LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x481 = -1LL;
	uint16_t x483 = 6U;
	volatile int64_t t94 = 26LL;

	t94 = (x481-(x482+(x483+x484)));

	if (t94 != 9223372036854775784LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x486 = 0LL;
	static int16_t x487 = -1;
	int32_t x488 = INT32_MAX;

	t95 = (x485-(x486+(x487+x488)));

	if (t95 != -2147483644LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x493 = INT8_MIN;
	int64_t x495 = 21589109LL;
	volatile int8_t x496 = 0;
	static int64_t t96 = 0LL;

	t96 = (x493-(x494+(x495+x496)));

	if (t96 != -21589241LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x497 = -92;
	uint16_t x499 = 3U;
	int32_t t97 = -562049721;

	t97 = (x497-(x498+(x499+x500)));

	if (t97 != 34) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x501 = -1;
	int32_t x502 = -1;
	int32_t x503 = -26445098;
	uint64_t x504 = 1926009LLU;

	t98 = (x501-(x502+(x503+x504)));

	if (t98 != 24519089LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x505 = UINT8_MAX;
	volatile int32_t x506 = -1;
	int64_t x507 = INT64_MAX;
	int16_t x508 = INT16_MIN;
	int64_t t99 = 3441163010799368796LL;

	t99 = (x505-(x506+(x507+x508)));

	if (t99 != -9223372036854742783LL) { NG(); } else { ; }
	
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

