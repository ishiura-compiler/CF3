#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x11 = 1U;
int16_t x13 = INT16_MIN;
volatile uint8_t x15 = 10U;
static int64_t x19 = INT64_MAX;
volatile int32_t t5 = 287;
int16_t x26 = INT16_MAX;
int8_t x29 = 1;
static int32_t x30 = INT32_MIN;
int32_t t7 = -6;
volatile int16_t x35 = INT16_MAX;
uint32_t t10 = 1840894046U;
int16_t x45 = 60;
uint32_t t11 = 345144262U;
static int8_t x49 = INT8_MIN;
volatile int64_t t12 = -41907086973356993LL;
int16_t x53 = INT16_MIN;
volatile int64_t x56 = INT64_MIN;
int8_t x57 = INT8_MIN;
int32_t x61 = -1;
static int32_t x63 = 112586;
int32_t x68 = INT32_MAX;
static int32_t x74 = INT32_MIN;
int64_t t19 = -52393514434718300LL;
int64_t x90 = INT64_MIN;
uint64_t x91 = UINT64_MAX;
volatile int64_t x92 = 3048LL;
static volatile uint16_t x97 = UINT16_MAX;
static uint32_t x99 = 102062U;
volatile uint64_t x103 = UINT64_MAX;
volatile uint16_t x109 = 170U;
volatile uint8_t x110 = 1U;
uint16_t x120 = 3U;
uint16_t x123 = UINT16_MAX;
int64_t x127 = 721436760LL;
uint8_t x145 = 52U;
int16_t x149 = INT16_MIN;
volatile uint8_t x150 = UINT8_MAX;
int16_t x157 = INT16_MIN;
int8_t x159 = 4;
int8_t x161 = INT8_MIN;
int16_t x162 = -1;
static int8_t x164 = 22;
int8_t x165 = INT8_MAX;
int64_t x167 = -32977913812161612LL;
volatile int64_t x171 = -228672647166430LL;
int32_t x182 = -1;
uint32_t x191 = 193229U;
static uint32_t t47 = 226U;
int16_t x193 = INT16_MIN;
int64_t x195 = -1LL;
static volatile uint64_t x196 = 3LLU;
static volatile int32_t x205 = -2151533;
static volatile uint64_t t51 = 143478406LLU;
uint64_t x213 = UINT64_MAX;
int8_t x214 = -1;
uint64_t t53 = 102308511LLU;
static uint64_t x217 = UINT64_MAX;
int8_t x220 = 3;
volatile int64_t t55 = -504LL;
int8_t x229 = INT8_MAX;
uint32_t x231 = UINT32_MAX;
int64_t x235 = -40947671354LL;
int32_t x237 = -5285506;
uint8_t x245 = 0U;
int16_t x247 = INT16_MAX;
uint64_t x253 = 3752819252LLU;
int8_t x254 = -1;
static volatile uint64_t t63 = 2LLU;
int8_t x261 = -6;
static int8_t x270 = INT8_MIN;
int16_t x271 = INT16_MIN;
int16_t x276 = INT16_MIN;
int64_t t68 = 235962577023557631LL;
static volatile uint32_t x278 = 102790496U;
int32_t x279 = -1;
int16_t x283 = INT16_MAX;
static int8_t x291 = INT8_MIN;
int16_t x293 = INT16_MAX;
int32_t x294 = 110821702;
int16_t x302 = -1617;
int8_t x306 = -1;
static int32_t x315 = -1;
int8_t x317 = 32;
static uint16_t x318 = 0U;
int16_t x319 = -70;
int64_t x320 = INT64_MIN;
uint16_t x328 = UINT16_MAX;
int64_t x330 = INT64_MIN;
volatile int16_t x331 = INT16_MAX;
uint32_t x333 = 10308186U;
uint64_t x336 = UINT64_MAX;
int16_t x337 = -1;
int16_t x346 = INT16_MIN;
int16_t x348 = -1;
static uint16_t x351 = 73U;
static volatile int16_t x361 = 1;
volatile int8_t x371 = INT8_MIN;
static volatile int16_t x373 = 3790;
uint32_t x377 = 1521U;
volatile int32_t x378 = -1;
volatile int32_t x380 = INT32_MIN;
volatile uint16_t x382 = 1299U;
uint32_t x387 = 642U;
uint32_t x388 = UINT32_MAX;
static volatile int16_t x399 = 340;


void f0(void) {
	int32_t x1 = -52;
	int16_t x2 = 78;
	volatile uint64_t x3 = 0LLU;
	int8_t x4 = 4;
	static volatile uint64_t t0 = 68LLU;

	t0 = (x1^((x2^x3)^x4));

	if (t0 != 18446744073709551494LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 13344U;
	int16_t x6 = INT16_MIN;
	int32_t x7 = INT32_MIN;
	int16_t x8 = 384;
	int32_t t1 = -14065;

	t1 = (x5^((x6^x7)^x8));

	if (t1 != 2147464608) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	int16_t x10 = 0;
	int32_t x12 = INT32_MAX;
	int64_t t2 = -59019007746656LL;

	t2 = (x9^((x10^x11)^x12));

	if (t2 != -9223372034707292162LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = -44;
	int64_t x16 = -1LL;
	static volatile int64_t t3 = 5611140506LL;

	t3 = (x13^((x14^x15)^x16));

	if (t3 != -32735LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int64_t x18 = INT64_MIN;
	int32_t x20 = 62783084;
	static volatile int64_t t4 = -8268029363239LL;

	t4 = (x17^((x18^x19)^x20));

	if (t4 != 62751123LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	static int8_t x22 = 31;
	int16_t x23 = -2935;
	uint8_t x24 = 0U;

	t5 = (x21^((x22^x23)^x24));

	if (t5 != 2838) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = -1;
	uint32_t x27 = 222577531U;
	static int64_t x28 = INT64_MIN;
	int64_t t6 = 2604388685882159066LL;

	t6 = (x25^((x26^x27)^x28));

	if (t6 != 9223372036632200059LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x31 = INT8_MIN;
	int8_t x32 = 1;

	t7 = (x29^((x30^x31)^x32));

	if (t7 != 2147483520) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	uint8_t x34 = UINT8_MAX;
	volatile int32_t x36 = 6178;
	volatile int32_t t8 = 64895;

	t8 = (x33^((x34^x35)^x36));

	if (t8 != -26403) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	uint16_t x38 = UINT16_MAX;
	volatile int32_t x39 = INT32_MIN;
	int8_t x40 = -1;
	int32_t t9 = -692;

	t9 = (x37^((x38^x39)^x40));

	if (t9 != -2147450880) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MAX;
	static int8_t x42 = INT8_MAX;
	int16_t x43 = 5210;
	static volatile uint32_t x44 = 0U;

	t10 = (x41^((x42^x43)^x44));

	if (t10 != 5210U) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x46 = UINT32_MAX;
	static uint32_t x47 = 5477U;
	uint8_t x48 = 1U;

	t11 = (x45^((x46^x47)^x48));

	if (t11 != 4294961831U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x50 = INT16_MIN;
	int64_t x51 = -2615829654607191LL;
	static int16_t x52 = INT16_MAX;

	t12 = (x49^((x50^x51)^x52));

	if (t12 != -2615829654607146LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = INT64_MIN;
	int16_t x55 = INT16_MIN;
	static volatile int64_t t13 = -7LL;

	t13 = (x53^((x54^x55)^x56));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x58 = -1LL;
	int32_t x59 = 196;
	uint64_t x60 = 3381665LLU;
	uint64_t t14 = 115864643517503LLU;

	t14 = (x57^((x58^x59)^x60));

	if (t14 != 3381530LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x62 = INT32_MAX;
	uint64_t x64 = 1685584191807039LLU;
	uint64_t t15 = 5486205927566998988LLU;

	t15 = (x61^((x62^x63)^x64));

	if (t15 != 18445058488678509045LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x65 = INT8_MIN;
	volatile int8_t x66 = -49;
	int8_t x67 = 3;
	volatile int32_t t16 = 977523674;

	t16 = (x65^((x66^x67)^x68));

	if (t16 != 2147483571) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 945873705216LLU;
	uint32_t x70 = UINT32_MAX;
	int16_t x71 = 2594;
	static int32_t x72 = 0;
	volatile uint64_t t17 = 3258765798LLU;

	t17 = (x69^((x70^x71)^x72));

	if (t17 != 948206873821LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	uint16_t x75 = UINT16_MAX;
	int8_t x76 = INT8_MIN;
	volatile int32_t t18 = -127492;

	t18 = (x73^((x74^x75)^x76));

	if (t18 != -2147418113) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -1;
	int64_t x78 = INT64_MAX;
	volatile uint32_t x79 = UINT32_MAX;
	static int64_t x80 = -228156704705LL;

	t19 = (x77^((x78^x79)^x80));

	if (t19 != 9223371805449979840LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = INT8_MIN;
	int32_t x82 = -1;
	int16_t x83 = INT16_MAX;
	uint16_t x84 = UINT16_MAX;
	static volatile int32_t t20 = -1;

	t20 = (x81^((x82^x83)^x84));

	if (t20 != 32895) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = -554850070719740LL;
	static int32_t x86 = INT32_MIN;
	int64_t x87 = -1LL;
	uint64_t x88 = 5139685802LLU;
	volatile uint64_t t21 = 18749567LLU;

	t21 = (x85^((x86^x87)^x88));

	if (t21 != 18446189218343882065LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x89 = UINT8_MAX;
	uint64_t t22 = 383451367435367011LLU;

	t22 = (x89^((x90^x91)^x92));

	if (t22 != 9223372036854772968LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	static uint8_t x94 = UINT8_MAX;
	uint32_t x95 = UINT32_MAX;
	static uint16_t x96 = UINT16_MAX;
	int64_t t23 = -18LL;

	t23 = (x93^((x94^x95)^x96));

	if (t23 != -9223372032559873793LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = INT32_MAX;
	volatile int16_t x100 = INT16_MAX;
	uint32_t t24 = 1168347U;

	t24 = (x97^((x98^x99)^x100));

	if (t24 != 2147414353U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = UINT64_MAX;
	int8_t x102 = INT8_MIN;
	int16_t x104 = INT16_MAX;
	volatile uint64_t t25 = 2590889428550576304LLU;

	t25 = (x101^((x102^x103)^x104));

	if (t25 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = -149;
	static int16_t x106 = -978;
	uint64_t x107 = UINT64_MAX;
	uint64_t x108 = 32675LLU;
	uint64_t t26 = 25015358322989316LLU;

	t26 = (x105^((x106^x107)^x108));

	if (t26 != 18446744073709519641LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x111 = INT16_MIN;
	uint64_t x112 = UINT64_MAX;
	volatile uint64_t t27 = 893774207585LLU;

	t27 = (x109^((x110^x111)^x112));

	if (t27 != 32596LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x113 = 3422316133LLU;
	uint8_t x114 = 1U;
	int64_t x115 = -1LL;
	int8_t x116 = 41;
	static uint64_t t28 = 144013710429291LLU;

	t28 = (x113^((x114^x115)^x116));

	if (t28 != 18446744070287235506LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x117 = INT32_MAX;
	int64_t x118 = INT64_MIN;
	int16_t x119 = INT16_MAX;
	static int64_t t29 = -1647LL;

	t29 = (x117^((x118^x119)^x120));

	if (t29 != -9223372034707324925LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MAX;
	static uint64_t x122 = 737LLU;
	int8_t x124 = INT8_MAX;
	volatile uint64_t t30 = 3491595528099LLU;

	t30 = (x121^((x122^x123)^x124));

	if (t30 != 2147418782LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = -687393324;
	int32_t x126 = -503742228;
	static uint16_t x128 = UINT16_MAX;
	static int64_t t31 = 219LL;

	t31 = (x125^((x126^x127)^x128));

	if (t31 != 503188127LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -13774;
	uint16_t x130 = UINT16_MAX;
	int32_t x131 = -10358;
	int8_t x132 = -1;
	static int32_t t32 = 3813;

	t32 = (x129^((x130^x131)^x132));

	if (t32 != -57928) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = -1LL;
	int64_t x134 = INT64_MIN;
	static uint16_t x135 = 11U;
	int16_t x136 = 22;
	static int64_t t33 = -6507471862882958LL;

	t33 = (x133^((x134^x135)^x136));

	if (t33 != 9223372036854775778LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MAX;
	int32_t x138 = 48002485;
	int64_t x139 = -114117558064616LL;
	int32_t x140 = INT32_MIN;
	volatile int64_t t34 = -475400506LL;

	t34 = (x137^((x138^x139)^x140));

	if (t34 != 114117589246034LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = UINT16_MAX;
	uint16_t x142 = 2221U;
	uint8_t x143 = 5U;
	static uint8_t x144 = 0U;
	int32_t t35 = 287;

	t35 = (x141^((x142^x143)^x144));

	if (t35 != 63319) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x146 = 91LL;
	int64_t x147 = 107LL;
	uint32_t x148 = 1549303U;
	static int64_t t36 = -1LL;

	t36 = (x145^((x146^x147)^x148));

	if (t36 != 1549299LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x151 = -372;
	uint32_t x152 = UINT32_MAX;
	static uint32_t t37 = 978475U;

	t37 = (x149^((x150^x151)^x152));

	if (t37 != 4294934924U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = 44;
	uint64_t x154 = 5413LLU;
	uint64_t x155 = 324929606811928200LLU;
	uint8_t x156 = UINT8_MAX;
	volatile uint64_t t38 = 2339167LLU;

	t38 = (x153^((x154^x155)^x156));

	if (t38 != 324929606811931518LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x158 = -1;
	static uint16_t x160 = 13097U;
	volatile int32_t t39 = -1993;

	t39 = (x157^((x158^x159)^x160));

	if (t39 != 19666) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x163 = 1584U;
	int32_t t40 = 0;

	t40 = (x161^((x162^x163)^x164));

	if (t40 != 1625) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x166 = 4U;
	volatile int8_t x168 = INT8_MIN;
	int64_t t41 = 63271LL;

	t41 = (x165^((x166^x167)^x168));

	if (t41 != 32977913812161615LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x169 = 7678730U;
	uint64_t x170 = 46272LLU;
	volatile int16_t x172 = INT16_MAX;
	static uint64_t t42 = 10LLU;

	t42 = (x169^((x170^x171)^x172));

	if (t42 != 18446515401067947543LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MAX;
	uint8_t x174 = 63U;
	volatile int32_t x175 = -1;
	volatile int8_t x176 = INT8_MIN;
	int32_t t43 = -2;

	t43 = (x173^((x174^x175)^x176));

	if (t43 != 2147483583) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = 116;
	static uint8_t x178 = 5U;
	int32_t x179 = -1;
	volatile uint8_t x180 = 12U;
	int32_t t44 = -1280947;

	t44 = (x177^((x178^x179)^x180));

	if (t44 != -126) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	int32_t x183 = -7468014;
	int64_t x184 = 1327695061272789LL;
	volatile int64_t t45 = -1897717460LL;

	t45 = (x181^((x182^x183)^x184));

	if (t45 != -1327695053898952LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MAX;
	int64_t x186 = INT64_MAX;
	int8_t x187 = -1;
	volatile int8_t x188 = -15;
	int64_t t46 = -235347LL;

	t46 = (x185^((x186^x187)^x188));

	if (t46 != 9223372034707292174LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = 7U;
	int16_t x190 = INT16_MIN;
	volatile uint32_t x192 = 0U;

	t47 = (x189^((x190^x191)^x192));

	if (t47 != 4294800074U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x194 = 3500170LLU;
	uint64_t t48 = 3LLU;

	t48 = (x193^((x194^x195)^x196));

	if (t48 != 3479414LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = UINT32_MAX;
	uint64_t x198 = 15075812LLU;
	uint32_t x199 = UINT32_MAX;
	int32_t x200 = INT32_MAX;
	volatile uint64_t t49 = 182258LLU;

	t49 = (x197^((x198^x199)^x200));

	if (t49 != 2132407835LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = 114057990498LLU;
	static int32_t x202 = INT32_MIN;
	int16_t x203 = INT16_MIN;
	int8_t x204 = INT8_MIN;
	volatile uint64_t t50 = 2LLU;

	t50 = (x201^((x202^x203)^x204));

	if (t50 != 18446743957986782946LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x206 = -1LL;
	int64_t x207 = INT64_MIN;
	uint64_t x208 = 1326LLU;

	t51 = (x205^((x206^x207)^x208));

	if (t51 != 9223372036856926530LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x209 = 6284358533693LL;
	uint8_t x210 = UINT8_MAX;
	int32_t x211 = INT32_MIN;
	int8_t x212 = -39;
	volatile int64_t t52 = -12LL;

	t52 = (x209^((x210^x211)^x212));

	if (t52 != 6284863257883LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x215 = -415067491396LL;
	static volatile int16_t x216 = 221;

	t53 = (x213^((x214^x215)^x216));

	if (t53 != 18446743658642060129LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x218 = -1;
	uint64_t x219 = 1185556410709805LLU;
	static uint64_t t54 = 1883090988991039LLU;

	t54 = (x217^((x218^x219)^x220));

	if (t54 != 1185556410709806LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = -680742;
	volatile uint8_t x222 = 14U;
	int64_t x223 = INT64_MIN;
	uint16_t x224 = UINT16_MAX;

	t55 = (x221^((x222^x223)^x224));

	if (t55 != 9223372036854080299LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = INT8_MIN;
	int64_t x226 = -1LL;
	volatile uint32_t x227 = 91058037U;
	uint16_t x228 = 53U;
	volatile int64_t t56 = 2LL;

	t56 = (x225^((x226^x227)^x228));

	if (t56 != 91057983LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x230 = 20U;
	int32_t x232 = -58;
	volatile uint32_t t57 = 2449616U;

	t57 = (x229^((x230^x231)^x232));

	if (t57 != 82U) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MAX;
	static int8_t x234 = -1;
	uint16_t x236 = 25955U;
	int64_t t58 = 17094LL;

	t58 = (x233^((x234^x235)^x236));

	if (t58 != 40947647525LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x238 = 2335;
	int64_t x239 = INT64_MAX;
	volatile int32_t x240 = 19295566;
	int64_t t59 = -6851663LL;

	t59 = (x237^((x238^x239)^x240));

	if (t59 != -9223372036830215472LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x241 = INT16_MIN;
	int8_t x242 = INT8_MIN;
	static uint64_t x243 = 536766LLU;
	static int32_t x244 = INT32_MIN;
	uint64_t t60 = 3234636LLU;

	t60 = (x241^((x242^x243)^x244));

	if (t60 != 18446744071562612542LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x246 = 137U;
	int16_t x248 = 6776;
	static int32_t t61 = -85917;

	t61 = (x245^((x246^x247)^x248));

	if (t61 != 25870) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -1;
	volatile int8_t x250 = -1;
	int64_t x251 = -1LL;
	int32_t x252 = INT32_MAX;
	int64_t t62 = 237385LL;

	t62 = (x249^((x250^x251)^x252));

	if (t62 != -2147483648LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x255 = 9;
	volatile int64_t x256 = INT64_MIN;

	t63 = (x253^((x254^x255)^x256));

	if (t63 != 9223372033101956546LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x257 = INT16_MIN;
	static volatile int64_t x258 = -82074729320662928LL;
	int8_t x259 = INT8_MIN;
	int8_t x260 = INT8_MIN;
	volatile int64_t t64 = 5LL;

	t64 = (x257^((x258^x259)^x260));

	if (t64 != 82074729320659056LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x262 = 431U;
	int64_t x263 = INT64_MIN;
	volatile uint32_t x264 = UINT32_MAX;
	static volatile int64_t t65 = -3183LL;

	t65 = (x261^((x262^x263)^x264));

	if (t65 != 9223372032559808938LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x265 = -1LL;
	static int32_t x266 = -17;
	uint8_t x267 = UINT8_MAX;
	int8_t x268 = -1;
	int64_t t66 = -651195882322223239LL;

	t66 = (x265^((x266^x267)^x268));

	if (t66 != -240LL) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x269 = 5U;
	int64_t x272 = INT64_MIN;
	int64_t t67 = 31016639392176228LL;

	t67 = (x269^((x270^x271)^x272));

	if (t67 != -9223372036854743163LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = INT16_MIN;
	int64_t x274 = INT64_MIN;
	uint16_t x275 = 28483U;

	t68 = (x273^((x274^x275)^x276));

	if (t68 != -9223372036854747325LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = 1941LL;
	static int16_t x280 = -1;
	volatile int64_t t69 = 1502276LL;

	t69 = (x277^((x278^x279)^x280));

	if (t69 != 102789877LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x281 = -1;
	volatile int8_t x282 = 4;
	int8_t x284 = INT8_MAX;
	volatile int32_t t70 = 8957153;

	t70 = (x281^((x282^x283)^x284));

	if (t70 != -32645) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x285 = 2366518585LLU;
	uint8_t x286 = 1U;
	int8_t x287 = INT8_MIN;
	int8_t x288 = 2;
	static uint64_t t71 = 37919229891LLU;

	t71 = (x285^((x286^x287)^x288));

	if (t71 != 18446744071343033018LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x289 = -3757926LL;
	uint16_t x290 = 245U;
	int32_t x292 = 115472;
	int64_t t72 = 2877870100LL;

	t72 = (x289^((x290^x291)^x292));

	if (t72 != 3708159LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x295 = 79U;
	int16_t x296 = INT16_MIN;
	int32_t t73 = 2187338;

	t73 = (x293^((x294^x295)^x296));

	if (t73 != -110821642) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x297 = INT16_MIN;
	static uint8_t x298 = 82U;
	int8_t x299 = -38;
	int8_t x300 = INT8_MAX;
	int32_t t74 = -122431;

	t74 = (x297^((x298^x299)^x300));

	if (t74 != 32759) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	int64_t x303 = INT64_MIN;
	int64_t x304 = -1LL;
	int64_t t75 = 5957LL;

	t75 = (x301^((x302^x303)^x304));

	if (t75 != 9223372036854744656LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 151U;
	int64_t x307 = -1LL;
	int32_t x308 = INT32_MIN;
	volatile int64_t t76 = -871LL;

	t76 = (x305^((x306^x307)^x308));

	if (t76 != -2147483497LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = -685629LL;
	volatile int16_t x310 = INT16_MAX;
	volatile uint8_t x311 = 5U;
	volatile int8_t x312 = 0;
	int64_t t77 = 2278319865651698003LL;

	t77 = (x309^((x310^x311)^x312));

	if (t77 != -657863LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint16_t x313 = UINT16_MAX;
	int16_t x314 = -658;
	int64_t x316 = -1493674446LL;
	int64_t t78 = -6541LL;

	t78 = (x313^((x314^x315)^x316));

	if (t78 != -1493652644LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t t79 = 1053076591085429948LL;

	t79 = (x317^((x318^x319)^x320));

	if (t79 != 9223372036854775706LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = UINT16_MAX;
	int64_t x322 = INT64_MAX;
	uint64_t x323 = UINT64_MAX;
	static volatile int64_t x324 = INT64_MAX;
	static volatile uint64_t t80 = 1LLU;

	t80 = (x321^((x322^x323)^x324));

	if (t80 != 18446744073709486080LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x325 = 89LLU;
	static int8_t x326 = INT8_MAX;
	int16_t x327 = -1;
	volatile uint64_t t81 = 81327373667467829LLU;

	t81 = (x325^((x326^x327)^x328));

	if (t81 != 18446744073709486118LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x329 = UINT16_MAX;
	int64_t x332 = INT64_MIN;
	volatile int64_t t82 = -898LL;

	t82 = (x329^((x330^x331)^x332));

	if (t82 != 32768LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x334 = -47472;
	uint32_t x335 = 1860140913U;
	uint64_t t83 = 16359663703489LLU;

	t83 = (x333^((x334^x335)^x336));

	if (t83 != 18446744071264439364LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x338 = 920790654605374787LL;
	int32_t x339 = INT32_MIN;
	int64_t x340 = INT64_MIN;
	volatile int64_t t84 = 21489893877117LL;

	t84 = (x337^((x338^x339)^x340));

	if (t84 != -8302581382526317892LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = UINT8_MAX;
	int32_t x342 = INT32_MIN;
	int8_t x343 = INT8_MIN;
	volatile uint64_t x344 = 120513655874344LLU;
	volatile uint64_t t85 = 1096184355776848LLU;

	t85 = (x341^((x342^x343)^x344));

	if (t85 != 120513466326103LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x345 = INT8_MIN;
	int32_t x347 = INT32_MIN;
	int32_t t86 = 0;

	t86 = (x345^((x346^x347)^x348));

	if (t86 != 2147451007) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x349 = -1;
	static uint16_t x350 = 5931U;
	int64_t x352 = 3272LL;
	volatile int64_t t87 = -91437LL;

	t87 = (x349^((x350^x351)^x352));

	if (t87 != -7083LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MIN;
	int8_t x354 = INT8_MIN;
	volatile int16_t x355 = INT16_MIN;
	volatile uint8_t x356 = 13U;
	static int64_t t88 = -6608159LL;

	t88 = (x353^((x354^x355)^x356));

	if (t88 != -9223372036854743155LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x357 = -91;
	volatile int8_t x358 = INT8_MAX;
	int16_t x359 = -1;
	int8_t x360 = INT8_MAX;
	volatile int32_t t89 = -346942;

	t89 = (x357^((x358^x359)^x360));

	if (t89 != 90) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x362 = UINT16_MAX;
	int64_t x363 = 353287LL;
	static int32_t x364 = INT32_MIN;
	volatile int64_t t90 = 58387765009693LL;

	t90 = (x361^((x362^x363)^x364));

	if (t90 != -2147116039LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x365 = INT32_MIN;
	int64_t x366 = INT64_MIN;
	volatile int8_t x367 = -10;
	int16_t x368 = INT16_MAX;
	int64_t t91 = 40798021986LL;

	t91 = (x365^((x366^x367)^x368));

	if (t91 != -9223372034707324919LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MAX;
	int8_t x370 = INT8_MIN;
	uint16_t x372 = 3838U;
	volatile int32_t t92 = -2049;

	t92 = (x369^((x370^x371)^x372));

	if (t92 != 2147479809) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x374 = -1;
	int64_t x375 = -517788LL;
	int16_t x376 = INT16_MIN;
	volatile int64_t t93 = -253415639980972332LL;

	t93 = (x373^((x374^x375)^x376));

	if (t93 != -497579LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x379 = 25U;
	volatile uint32_t t94 = 257U;

	t94 = (x377^((x378^x379)^x380));

	if (t94 != 2147482135U) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = 1511497LLU;
	int8_t x383 = INT8_MIN;
	int16_t x384 = INT16_MIN;
	uint64_t t95 = 125LLU;

	t95 = (x381^((x382^x383)^x384));

	if (t95 != 1534682LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x385 = 17796853U;
	static int32_t x386 = INT32_MIN;
	volatile uint32_t t96 = 4074U;

	t96 = (x385^((x386^x387)^x388));

	if (t96 != 2129687432U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x389 = UINT8_MAX;
	int64_t x390 = INT64_MIN;
	uint64_t x391 = 0LLU;
	uint32_t x392 = 0U;
	volatile uint64_t t97 = 24LLU;

	t97 = (x389^((x390^x391)^x392));

	if (t97 != 9223372036854776063LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	int64_t x394 = INT64_MAX;
	uint16_t x395 = 25U;
	uint64_t x396 = 1880101319728689LLU;
	static uint64_t t98 = 6LLU;

	t98 = (x393^((x394^x395)^x396));

	if (t98 != 9225252138174489047LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = -15098;
	int64_t x398 = INT64_MIN;
	int16_t x400 = -1;
	static int64_t t99 = -13226373964362566LL;

	t99 = (x397^((x398^x399)^x400));

	if (t99 != -9223372036854760531LL) { NG(); } else { ; }
	
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

