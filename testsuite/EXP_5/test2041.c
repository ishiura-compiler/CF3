#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 0U;
int16_t x5 = 74;
int8_t x7 = INT8_MIN;
uint8_t x15 = 116U;
int32_t x16 = -1;
int8_t x26 = -1;
volatile uint64_t t7 = 3219616648LLU;
int8_t x37 = INT8_MIN;
int16_t x39 = 2;
int32_t x46 = INT32_MAX;
static volatile int8_t x47 = 8;
volatile int8_t x52 = 1;
uint16_t x57 = 316U;
uint16_t x58 = UINT16_MAX;
uint8_t x59 = 25U;
volatile uint8_t x62 = UINT8_MAX;
uint64_t t15 = 14385606768890LLU;
int16_t x68 = 1;
volatile uint64_t t17 = 13942447398662LLU;
volatile int8_t x80 = 1;
static volatile int64_t t19 = -6707373988LL;
static volatile int64_t x83 = INT64_MIN;
int64_t x86 = INT64_MAX;
volatile uint8_t x93 = UINT8_MAX;
volatile int64_t x98 = -234397075021859223LL;
uint16_t x103 = UINT16_MAX;
uint16_t x107 = 34U;
uint16_t x116 = 0U;
uint8_t x125 = 38U;
int32_t x128 = 20051;
int16_t x131 = INT16_MAX;
static volatile int64_t x132 = 66432LL;
int32_t x135 = INT32_MIN;
int64_t x136 = 45393760036630462LL;
uint16_t x138 = 43U;
static int32_t t34 = 13;
int32_t x149 = INT32_MIN;
int8_t x151 = 1;
volatile int8_t x152 = INT8_MAX;
volatile uint16_t x155 = UINT16_MAX;
static volatile int8_t x158 = INT8_MIN;
static volatile int32_t t39 = -11210947;
static uint32_t t40 = 3187083U;
static int8_t x165 = -1;
static int8_t x166 = INT8_MAX;
uint32_t x169 = UINT32_MAX;
static int16_t x179 = 4347;
static int64_t x182 = -1LL;
static volatile uint64_t t46 = 108114228LLU;
int32_t x191 = INT32_MIN;
int16_t x199 = -1546;
int16_t x209 = -1;
static volatile uint64_t t52 = 1943295668373LLU;
static uint64_t x220 = 6570267688458991375LLU;
int32_t x221 = -1;
int16_t x222 = INT16_MIN;
int64_t t55 = -5046729332789LL;
int16_t x225 = INT16_MIN;
int64_t t56 = -60LL;
uint8_t x231 = 89U;
uint32_t x236 = 8U;
int32_t x241 = INT32_MIN;
volatile uint64_t x244 = 90330993LLU;
uint64_t t61 = 157644LLU;
int8_t x251 = -31;
static volatile uint64_t x252 = 1102562285761999LLU;
static uint16_t x254 = UINT16_MAX;
static int8_t x256 = -1;
volatile int16_t x258 = INT16_MIN;
int32_t x262 = -6133;
int64_t x263 = 22793531762849138LL;
int32_t x271 = INT32_MIN;
int32_t x277 = -1;
static uint8_t x280 = UINT8_MAX;
int16_t x281 = INT16_MIN;
int16_t x292 = -354;
static int32_t x303 = INT32_MIN;
volatile int64_t x308 = -1LL;
uint64_t t75 = 28256403387LLU;
int64_t x309 = 203551885LL;
static uint64_t x311 = UINT64_MAX;
static volatile uint32_t x315 = 103U;
static int8_t x316 = INT8_MIN;
volatile uint32_t x321 = 337582463U;
int16_t x325 = INT16_MIN;
static int8_t x336 = 0;
static volatile uint64_t t80 = 117LLU;
volatile int16_t x347 = INT16_MAX;
int16_t x367 = -1;
static volatile int64_t t88 = 3991735LL;
static int64_t x375 = INT64_MIN;
int64_t t90 = 59LL;
volatile uint64_t t91 = 1158625265586LLU;
volatile int64_t x382 = -796539365766LL;
volatile int64_t t92 = -7LL;
int64_t x388 = INT64_MIN;
static int32_t x389 = INT32_MIN;
volatile int64_t t96 = -11646727877000LL;
volatile uint32_t x401 = UINT32_MAX;
static int8_t x404 = 1;
uint16_t x407 = 99U;


void f0(void) {
	static int32_t x1 = INT32_MIN;
	int16_t x3 = -2475;
	static int8_t x4 = 14;
	int32_t t0 = 1;

	t0 = (x1^((x2^x3)+x4));

	if (t0 != 2147481187) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x6 = 1321413385180766510LL;
	int16_t x8 = -1707;
	int64_t t1 = 1086861956626121LL;

	t1 = (x5^((x6^x7)+x8));

	if (t1 != -1321413385180768183LL) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint16_t x9 = 38U;
	static int16_t x10 = 461;
	int32_t x11 = -1;
	static volatile uint32_t x12 = 232U;
	static uint32_t t2 = 58607U;

	t2 = (x9^((x10^x11)+x12));

	if (t2 != 4294967100U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int64_t x14 = INT64_MIN;
	int64_t t3 = -3838878LL;

	t3 = (x13^((x14^x15)+x16));

	if (t3 != 9223372036854775692LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = 1;
	uint16_t x18 = UINT16_MAX;
	int8_t x19 = -1;
	int16_t x20 = INT16_MAX;
	int32_t t4 = 36;

	t4 = (x17^((x18^x19)+x20));

	if (t4 != -32770) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = 4U;
	volatile int16_t x22 = INT16_MIN;
	static int8_t x23 = 21;
	int16_t x24 = -35;
	static volatile int32_t t5 = 1132;

	t5 = (x21^((x22^x23)+x24));

	if (t5 != -32778) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 143954U;
	int16_t x27 = -123;
	uint32_t x28 = 17U;
	uint32_t t6 = 5U;

	t6 = (x25^((x26^x27)+x28));

	if (t6 != 144089U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = 2747LL;
	int16_t x30 = 1;
	uint16_t x31 = 0U;
	uint64_t x32 = UINT64_MAX;

	t7 = (x29^((x30^x31)+x32));

	if (t7 != 2747LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 6119U;
	uint64_t x34 = 11568930267773501LLU;
	static int64_t x35 = -1LL;
	uint32_t x36 = 2109U;
	uint64_t t8 = 1074944084164819164LLU;

	t8 = (x33^((x34^x35)+x36));

	if (t8 != 18435175143441783320LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint16_t x38 = UINT16_MAX;
	static volatile int32_t x40 = -363489732;
	volatile int32_t t9 = 3580;

	t9 = (x37^((x38^x39)+x40));

	if (t9 != 363424185) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = UINT8_MAX;
	static int8_t x42 = -1;
	static uint16_t x43 = 0U;
	uint64_t x44 = UINT64_MAX;
	uint64_t t10 = 3033LLU;

	t10 = (x41^((x42^x43)+x44));

	if (t10 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x45 = INT64_MIN;
	int16_t x48 = INT16_MIN;
	volatile int64_t t11 = -11924693LL;

	t11 = (x45^((x46^x47)+x48));

	if (t11 != -9223372034707324937LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	int8_t x50 = -1;
	static uint32_t x51 = UINT32_MAX;
	volatile int64_t t12 = -59283441728LL;

	t12 = (x49^((x50^x51)+x52));

	if (t12 != -2LL) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = 0U;
	uint64_t x54 = 136291026963LLU;
	int32_t x55 = INT32_MIN;
	int8_t x56 = 0;
	uint64_t t13 = 761483188932552LLU;

	t13 = (x53^((x54^x55)+x56));

	if (t13 != 18446743937270155283LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x60 = INT16_MIN;
	static int32_t t14 = -113140;

	t14 = (x57^((x58^x59)+x60));

	if (t14 != 32474) { NG(); } else { ; }
	
}

void f15(void) {
	static uint64_t x61 = 234777LLU;
	int16_t x63 = -1;
	int8_t x64 = -1;

	t15 = (x61^((x62^x63)+x64));

	if (t15 != 18446744073709317094LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x65 = UINT16_MAX;
	int64_t x66 = INT64_MIN;
	int8_t x67 = INT8_MAX;
	static volatile int64_t t16 = 4965LL;

	t16 = (x65^((x66^x67)+x68));

	if (t16 != -9223372036854710401LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MAX;
	uint64_t x70 = 890712140455LLU;
	int32_t x71 = INT32_MAX;
	uint64_t x72 = 584675943460971LLU;

	t17 = (x69^((x70^x71)+x72));

	if (t17 != 9222786471359511100LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	int32_t x74 = INT32_MIN;
	int8_t x75 = INT8_MIN;
	int8_t x76 = INT8_MIN;
	int64_t t18 = 5465102179LL;

	t18 = (x73^((x74^x75)+x76));

	if (t18 != -9223372034707292416LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x77 = 3U;
	uint32_t x78 = UINT32_MAX;
	int64_t x79 = -1LL;

	t19 = (x77^((x78^x79)+x80));

	if (t19 != -4294967294LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = 14U;
	static uint16_t x82 = 9376U;
	uint8_t x84 = 0U;
	static int64_t t20 = 3018LL;

	t20 = (x81^((x82^x83)+x84));

	if (t20 != -9223372036854766418LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = UINT64_MAX;
	int64_t x87 = 552980605497689LL;
	volatile uint16_t x88 = 13U;
	uint64_t t21 = 124LLU;

	t21 = (x85^((x86^x87)+x88));

	if (t21 != 9223925017460273484LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x89 = 33184LLU;
	volatile uint16_t x90 = UINT16_MAX;
	uint16_t x91 = UINT16_MAX;
	int32_t x92 = INT32_MIN;
	volatile uint64_t t22 = 18615195LLU;

	t22 = (x89^((x90^x91)+x92));

	if (t22 != 18446744071562101152LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x94 = -3868985454635516LL;
	int8_t x95 = INT8_MIN;
	int32_t x96 = -1;
	int64_t t23 = -69253862661925LL;

	t23 = (x93^((x94^x95)+x96));

	if (t23 != 3868985454635388LL) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x97 = 97095775521006400LLU;
	uint64_t x99 = 104844173116098356LLU;
	volatile int16_t x100 = INT16_MIN;
	volatile uint64_t t24 = 263285775126LLU;

	t24 = (x97^((x98^x99)+x100));

	if (t24 != 18200117248321573405LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	uint64_t x102 = UINT64_MAX;
	int64_t x104 = INT64_MAX;
	uint64_t t25 = 11856250277LLU;

	t25 = (x101^((x102^x103)+x104));

	if (t25 != 9223372036854841344LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -1LL;
	int32_t x106 = INT32_MAX;
	uint64_t x108 = 18937LLU;
	static volatile uint64_t t26 = 75611365419282LLU;

	t26 = (x105^((x106^x107)+x108));

	if (t26 != 18446744071562049065LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 52354563LLU;
	int8_t x110 = INT8_MIN;
	static int64_t x111 = INT64_MAX;
	uint32_t x112 = UINT32_MAX;
	volatile uint64_t t27 = 1825718928LLU;

	t27 = (x109^((x110^x111)+x112));

	if (t27 != 9223372041202097789LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	uint16_t x114 = 3294U;
	static int8_t x115 = -1;
	int32_t t28 = -55;

	t28 = (x113^((x114^x115)+x116));

	if (t28 != 29473) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = 2;
	int32_t x118 = -1;
	volatile int16_t x119 = -1;
	volatile int16_t x120 = INT16_MAX;
	int32_t t29 = 32513435;

	t29 = (x117^((x118^x119)+x120));

	if (t29 != 32765) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = 0;
	int8_t x122 = -1;
	volatile uint32_t x123 = 3720927U;
	int8_t x124 = 0;
	static uint32_t t30 = 8385509U;

	t30 = (x121^((x122^x123)+x124));

	if (t30 != 4291246368U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = INT32_MAX;
	int32_t x127 = INT32_MIN;
	volatile int32_t t31 = -3292;

	t31 = (x125^((x126^x127)+x128));

	if (t31 != 20084) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 1U;
	uint8_t x130 = 0U;
	static volatile int64_t t32 = -195LL;

	t32 = (x129^((x130^x131)+x132));

	if (t32 != 99198LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	int16_t x134 = 0;
	volatile int64_t t33 = 3141306899800030965LL;

	t33 = (x133^((x134^x135)+x136));

	if (t33 != -45393757889146818LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 89U;
	int8_t x139 = INT8_MIN;
	int8_t x140 = INT8_MIN;

	t34 = (x137^((x138^x139)+x140));

	if (t34 != -142) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x141 = 78317419U;
	int8_t x142 = 3;
	int64_t x143 = INT64_MAX;
	int16_t x144 = INT16_MIN;
	int64_t t35 = 1622LL;

	t35 = (x141^((x142^x143)+x144));

	if (t35 != 9223372036776425623LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	static uint32_t x146 = UINT32_MAX;
	int64_t x147 = -1LL;
	static uint8_t x148 = UINT8_MAX;
	int64_t t36 = 272976096333LL;

	t36 = (x145^((x146^x147)+x148));

	if (t36 != 9223372032559808767LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint16_t x150 = UINT16_MAX;
	int32_t t37 = -99;

	t37 = (x149^((x150^x151)+x152));

	if (t37 != -2147417987) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	volatile int64_t x154 = INT64_MIN;
	static uint32_t x156 = 11U;
	int64_t t38 = -6LL;

	t38 = (x153^((x154^x155)+x156));

	if (t38 != 9223372036854710154LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = -431325824;
	static int8_t x159 = INT8_MIN;
	int8_t x160 = 9;

	t39 = (x157^((x158^x159)+x160));

	if (t39 != -431325815) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = -1;
	uint32_t x162 = 122016204U;
	int8_t x163 = INT8_MIN;
	int8_t x164 = INT8_MIN;

	t40 = (x161^((x162^x163)+x164));

	if (t40 != 122016307U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x167 = 9837U;
	int32_t x168 = -1;
	uint32_t t41 = 6296U;

	t41 = (x165^((x166^x167)+x168));

	if (t41 != 4294957550U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x170 = UINT8_MAX;
	uint8_t x171 = 4U;
	int64_t x172 = INT64_MIN;
	volatile int64_t t42 = 26875018LL;

	t42 = (x169^((x170^x171)+x172));

	if (t42 != -9223372032559808764LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	int16_t x174 = -3871;
	int16_t x175 = INT16_MIN;
	static int64_t x176 = -223LL;
	static volatile int64_t t43 = -6196294420416LL;

	t43 = (x173^((x174^x175)+x176));

	if (t43 != -9223372036854747134LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = INT8_MAX;
	static int16_t x178 = -649;
	volatile uint32_t x180 = 3832833U;
	volatile uint32_t t44 = 362243U;

	t44 = (x177^((x178^x179)+x180));

	if (t44 != 3828210U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 0U;
	uint8_t x183 = UINT8_MAX;
	uint8_t x184 = UINT8_MAX;
	static int64_t t45 = -680310560431316LL;

	t45 = (x181^((x182^x183)+x184));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = 23;
	static uint64_t x186 = 73815955409728947LLU;
	static int16_t x187 = 30;
	int32_t x188 = -1;

	t46 = (x185^((x186^x187)+x188));

	if (t46 != 73815955409728955LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 22;
	volatile int8_t x190 = INT8_MAX;
	int16_t x192 = 0;
	volatile int32_t t47 = -1133;

	t47 = (x189^((x190^x191)+x192));

	if (t47 != -2147483543) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -21628;
	uint64_t x194 = UINT64_MAX;
	int16_t x195 = INT16_MAX;
	static int16_t x196 = -1;
	static uint64_t t48 = 77158770204LLU;

	t48 = (x193^((x194^x195)+x196));

	if (t48 != 54395LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MAX;
	int8_t x198 = INT8_MIN;
	int8_t x200 = -1;
	int32_t t49 = 99;

	t49 = (x197^((x198^x199)+x200));

	if (t49 != 2147481994) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	static uint16_t x202 = 28917U;
	static uint16_t x203 = 14866U;
	uint8_t x204 = 7U;
	int32_t t50 = -524778371;

	t50 = (x201^((x202^x203)+x204));

	if (t50 != -19183) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -2;
	int16_t x206 = 0;
	uint8_t x207 = 1U;
	static int8_t x208 = INT8_MIN;
	static int32_t t51 = 74;

	t51 = (x205^((x206^x207)+x208));

	if (t51 != 127) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x210 = 2136698092825496166LL;
	int32_t x211 = 75;
	uint64_t x212 = 7286386911506924LLU;

	t52 = (x209^((x210^x211)+x212));

	if (t52 != 16302759593972548582LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = 3858801332948509596LL;
	int32_t x214 = 23;
	static int16_t x215 = -56;
	int8_t x216 = -1;
	volatile int64_t t53 = -444515031240854LL;

	t53 = (x213^((x214^x215)+x216));

	if (t53 != -3858801332948509630LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 0U;
	uint64_t x218 = UINT64_MAX;
	uint16_t x219 = 4935U;
	static volatile uint64_t t54 = 693987382367630LLU;

	t54 = (x217^((x218^x219)+x220));

	if (t54 != 6570267688458986439LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x223 = 860811LL;
	uint16_t x224 = 35U;

	t55 = (x221^((x222^x223)+x224));

	if (t55 != 875857LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x226 = 1U;
	int32_t x227 = INT32_MIN;
	int64_t x228 = 16643103975LL;

	t56 = (x225^((x226^x227)+x228));

	if (t56 != -14495638296LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x229 = 6U;
	int8_t x230 = -1;
	int32_t x232 = -1;
	volatile int32_t t57 = -20931;

	t57 = (x229^((x230^x231)+x232));

	if (t57 != -93) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x233 = INT64_MIN;
	uint64_t x234 = 1LLU;
	int16_t x235 = INT16_MIN;
	static volatile uint64_t t58 = 620959LLU;

	t58 = (x233^((x234^x235)+x236));

	if (t58 != 9223372036854743049LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -1;
	static uint32_t x238 = 1341520739U;
	int8_t x239 = INT8_MIN;
	uint32_t x240 = UINT32_MAX;
	static uint32_t t59 = 6397470U;

	t59 = (x237^((x238^x239)+x240));

	if (t59 != 1341520669U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x242 = 48U;
	uint32_t x243 = 10422U;
	uint64_t t60 = 32LLU;

	t60 = (x241^((x242^x243)+x244));

	if (t60 != 18446744071652409335LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x245 = INT8_MIN;
	uint16_t x246 = UINT16_MAX;
	volatile uint64_t x247 = UINT64_MAX;
	int16_t x248 = 8550;

	t61 = (x245^((x246^x247)+x248));

	if (t61 != 57062LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -1;
	int32_t x250 = 253950;
	uint64_t t62 = 3367632111005534LLU;

	t62 = (x249^((x250^x251)+x252));

	if (t62 != 18445641511424043537LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 21U;
	int32_t x255 = INT32_MIN;
	volatile int32_t t63 = 0;

	t63 = (x253^((x254^x255)+x256));

	if (t63 != -2147418133) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -1;
	int8_t x259 = -1;
	int16_t x260 = -1;
	int32_t t64 = -3737641;

	t64 = (x257^((x258^x259)+x260));

	if (t64 != -32767) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MAX;
	static uint8_t x264 = 63U;
	int64_t t65 = 24481350498LL;

	t65 = (x261^((x262^x263)+x264));

	if (t65 != -22793532437257657LL) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = -1;
	int8_t x266 = 8;
	volatile int32_t x267 = INT32_MIN;
	uint64_t x268 = 101118490348012LLU;
	volatile uint64_t t66 = 1699113709108LLU;

	t66 = (x265^((x266^x267)+x268));

	if (t66 != 18446642957366687243LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = -1;
	static int32_t x270 = INT32_MIN;
	volatile uint64_t x272 = UINT64_MAX;
	static uint64_t t67 = 15516854039970LLU;

	t67 = (x269^((x270^x271)+x272));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	static int8_t x274 = INT8_MIN;
	static volatile int16_t x275 = INT16_MIN;
	uint8_t x276 = 7U;
	volatile int32_t t68 = 369850843;

	t68 = (x273^((x274^x275)+x276));

	if (t68 != -121) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x278 = 0;
	int16_t x279 = -1;
	int32_t t69 = -6814805;

	t69 = (x277^((x278^x279)+x280));

	if (t69 != -255) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x282 = 1U;
	uint64_t x283 = UINT64_MAX;
	static volatile int64_t x284 = -1LL;
	static uint64_t t70 = 17800662080948LLU;

	t70 = (x281^((x282^x283)+x284));

	if (t70 != 32765LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 1U;
	int32_t x286 = INT32_MIN;
	uint16_t x287 = UINT16_MAX;
	uint16_t x288 = 19196U;
	volatile uint32_t t71 = 1499U;

	t71 = (x285^((x286^x287)+x288));

	if (t71 != 2147568378U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 111U;
	int8_t x290 = INT8_MAX;
	uint64_t x291 = 15442LLU;
	volatile uint64_t t72 = 3290184824576LLU;

	t72 = (x289^((x290^x291)+x292));

	if (t72 != 15012LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = UINT32_MAX;
	int8_t x294 = INT8_MIN;
	int32_t x295 = 11688;
	static uint8_t x296 = 20U;
	volatile uint32_t t73 = 253U;

	t73 = (x293^((x294^x295)+x296));

	if (t73 != 11715U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x301 = -2;
	static int16_t x302 = -1;
	static int64_t x304 = INT64_MIN;
	int64_t t74 = -110243776307281996LL;

	t74 = (x301^((x302^x303)+x304));

	if (t74 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x305 = 1047440250782252LLU;
	int32_t x306 = -1;
	volatile uint32_t x307 = 216U;

	t75 = (x305^((x306^x307)+x308));

	if (t75 != 1047442932743434LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x310 = 5;
	int32_t x312 = INT32_MIN;
	static uint64_t t76 = 13484446LLU;

	t76 = (x309^((x310^x311)+x312));

	if (t76 != 18446744071358516087LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x313 = 3229867U;
	int8_t x314 = INT8_MIN;
	uint32_t t77 = 68U;

	t77 = (x313^((x314^x315)+x316));

	if (t77 != 4291737548U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x322 = 124545LL;
	int16_t x323 = -1;
	int32_t x324 = -7517111;
	static volatile int64_t t78 = 248369555107954288LL;

	t78 = (x321^((x322^x323)+x324));

	if (t78 != -342590280LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x326 = INT16_MIN;
	uint16_t x327 = 6U;
	uint32_t x328 = 76395799U;
	volatile uint32_t t79 = 29U;

	t79 = (x325^((x326^x327)+x328));

	if (t79 != 4218598685U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x333 = INT32_MAX;
	volatile uint64_t x334 = 3477002801446LLU;
	static uint8_t x335 = 36U;

	t80 = (x333^((x334^x335)+x336));

	if (t80 != 3478696734461LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x337 = 1LLU;
	volatile uint32_t x338 = UINT32_MAX;
	static int32_t x339 = INT32_MAX;
	uint16_t x340 = 0U;
	uint64_t t81 = 146471881171078512LLU;

	t81 = (x337^((x338^x339)+x340));

	if (t81 != 2147483649LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x341 = 81;
	int32_t x342 = INT32_MIN;
	static volatile int64_t x343 = INT64_MIN;
	uint8_t x344 = UINT8_MAX;
	static volatile int64_t t82 = -238708LL;

	t82 = (x341^((x342^x343)+x344));

	if (t82 != 9223372034707292334LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x345 = 14674U;
	uint8_t x346 = 1U;
	static volatile int32_t x348 = -1;
	volatile uint32_t t83 = 7318245U;

	t83 = (x345^((x346^x347)+x348));

	if (t83 != 18095U) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x349 = 5U;
	uint64_t x350 = UINT64_MAX;
	int8_t x351 = INT8_MAX;
	static volatile int16_t x352 = -1;
	uint64_t t84 = 6515LLU;

	t84 = (x349^((x350^x351)+x352));

	if (t84 != 18446744073709551482LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x353 = 519U;
	int32_t x354 = INT32_MIN;
	int64_t x355 = -1LL;
	static int16_t x356 = -8;
	static int64_t t85 = -7222269867LL;

	t85 = (x353^((x354^x355)+x356));

	if (t85 != 2147483120LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x357 = UINT64_MAX;
	int32_t x358 = -1;
	uint64_t x359 = UINT64_MAX;
	static volatile uint32_t x360 = UINT32_MAX;
	uint64_t t86 = 324LLU;

	t86 = (x357^((x358^x359)+x360));

	if (t86 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x361 = INT32_MAX;
	int8_t x362 = INT8_MIN;
	int8_t x363 = INT8_MIN;
	volatile uint64_t x364 = UINT64_MAX;
	uint64_t t87 = 15LLU;

	t87 = (x361^((x362^x363)+x364));

	if (t87 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x365 = INT64_MAX;
	int32_t x366 = -1;
	int32_t x368 = INT32_MIN;

	t88 = (x365^((x366^x367)+x368));

	if (t88 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x369 = -29;
	uint8_t x370 = 16U;
	volatile int16_t x371 = INT16_MAX;
	volatile int8_t x372 = -1;
	int32_t t89 = -33635;

	t89 = (x369^((x370^x371)+x372));

	if (t89 != -32755) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x373 = 100U;
	int16_t x374 = -120;
	volatile int16_t x376 = INT16_MIN;

	t90 = (x373^((x374^x375)+x376));

	if (t90 != 9223372036854743020LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x377 = 8217604959943572546LLU;
	int32_t x378 = 85;
	int32_t x379 = -1;
	uint16_t x380 = 15U;

	t91 = (x377^((x378^x379)+x380));

	if (t91 != 10229139113765979131LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x381 = -1829621;
	int32_t x383 = INT32_MAX;
	int8_t x384 = INT8_MIN;

	t92 = (x381^((x382^x383)+x384));

	if (t92 != 794746567694LL) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x385 = -1LL;
	uint64_t x386 = 4962649884976LLU;
	int16_t x387 = -8;
	volatile uint64_t t93 = 2LLU;

	t93 = (x385^((x386^x387)+x388));

	if (t93 != 9223376999504660791LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x390 = 3813U;
	int32_t x391 = INT32_MIN;
	uint32_t x392 = 79746994U;
	volatile uint32_t t94 = 833U;

	t94 = (x389^((x390^x391)+x392));

	if (t94 != 79750807U) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x393 = INT32_MAX;
	int8_t x394 = INT8_MAX;
	volatile int8_t x395 = INT8_MIN;
	uint32_t x396 = 48207596U;
	uint32_t t95 = 38358347U;

	t95 = (x393^((x394^x395)+x396));

	if (t95 != 2099276052U) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x397 = INT8_MIN;
	volatile int64_t x398 = INT64_MIN;
	static int8_t x399 = -1;
	static int16_t x400 = -14474;

	t96 = (x397^((x398^x399)+x400));

	if (t96 != -9223372036854761227LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x402 = 412377436LL;
	volatile uint64_t x403 = 11551175270LLU;
	uint64_t t97 = 6359216532489018LLU;

	t97 = (x401^((x402^x403)+x404));

	if (t97 != 10064981188LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x405 = 173U;
	static int32_t x406 = INT32_MAX;
	int16_t x408 = INT16_MIN;
	int32_t t98 = -20020;

	t98 = (x405^((x406^x407)+x408));

	if (t98 != 2147450673) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x409 = -80;
	int64_t x410 = -71728447061451068LL;
	int16_t x411 = 94;
	volatile int16_t x412 = -1;
	volatile int64_t t99 = 2284446146759LL;

	t99 = (x409^((x410^x411)+x412));

	if (t99 != 71728447061451049LL) { NG(); } else { ; }
	
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

