#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x15 = -1;
int32_t t3 = 6656467;
volatile int64_t x28 = -1556419185LL;
volatile int64_t t7 = 2603506LL;
volatile uint16_t x45 = 36U;
int32_t t9 = 7;
static int32_t x67 = INT32_MAX;
uint64_t x75 = 19969LLU;
int16_t x79 = INT16_MAX;
uint32_t x81 = UINT32_MAX;
volatile uint64_t x84 = 1LLU;
int8_t x85 = 6;
int8_t x86 = INT8_MIN;
static int64_t x108 = -1LL;
uint64_t x111 = UINT64_MAX;
static volatile uint64_t t21 = 5LLU;
volatile int16_t x115 = INT16_MAX;
static volatile int32_t t24 = -460351379;
static int32_t x131 = 149770050;
int64_t x141 = INT64_MIN;
volatile uint64_t t27 = 1738461287293LLU;
int64_t t28 = 3426131828LL;
int8_t x151 = -1;
int64_t t29 = 1674862453LL;
volatile uint64_t t30 = 256763523681672173LLU;
int8_t x160 = INT8_MIN;
int32_t x161 = INT32_MAX;
uint64_t t33 = 14978LLU;
static int64_t t34 = -1660LL;
static uint64_t x178 = 8510631978LLU;
int8_t x196 = 1;
volatile uint64_t t39 = 3LLU;
int32_t x205 = 364974015;
int32_t x207 = 25;
static uint32_t x216 = 1572U;
uint16_t x217 = 4025U;
int64_t x226 = INT64_MIN;
uint64_t x227 = UINT64_MAX;
static volatile uint64_t t44 = 46356609533LLU;
static volatile int16_t x241 = INT16_MIN;
volatile int32_t x244 = 3973;
uint64_t x245 = 1051689720092358LLU;
int16_t x246 = -12;
uint16_t x252 = UINT16_MAX;
int32_t x257 = -183023430;
int64_t x258 = -1LL;
int32_t x266 = 0;
uint32_t x273 = UINT32_MAX;
uint8_t x278 = UINT8_MAX;
uint64_t x279 = 12103772365797379LLU;
uint64_t t52 = 30217836842857LLU;
volatile uint64_t t53 = 585398779366382LLU;
int32_t x290 = -1;
int8_t x292 = -3;
uint32_t x293 = UINT32_MAX;
int64_t x296 = -1LL;
int16_t x300 = 128;
int64_t t57 = -656278848127866LL;
static uint16_t x305 = 3U;
static uint8_t x316 = 17U;
static int8_t x337 = INT8_MIN;
int16_t x339 = INT16_MIN;
int64_t x353 = 9736917LL;
uint64_t x355 = 18395033812051903LLU;
int32_t x358 = -1;
static volatile int32_t t66 = 235629962;
static uint64_t x364 = 476LLU;
int8_t x371 = -1;
uint64_t x376 = UINT64_MAX;
volatile uint32_t x386 = 1400039195U;
int16_t x387 = -1;
volatile uint16_t x388 = 1U;
uint16_t x391 = 2U;
uint16_t x402 = 1616U;
int32_t x403 = 731;
static int64_t x409 = INT64_MIN;
static int64_t t77 = 1697641858099570LL;
static volatile int32_t t80 = 11981;
int8_t x438 = -3;
uint8_t x453 = 26U;
volatile int32_t x454 = 8;
int16_t x458 = INT16_MIN;
int64_t x459 = 1LL;
volatile int8_t x463 = 11;
volatile uint32_t t87 = 262071914U;
uint16_t x479 = 55U;
volatile int64_t x486 = 191455383108004LL;
int64_t x491 = -1LL;
int8_t x500 = 1;
uint32_t x505 = 1932807U;
int8_t x506 = -57;
uint32_t x522 = UINT32_MAX;
volatile int64_t x524 = -361427LL;
volatile int32_t t94 = -141320;
volatile uint64_t x529 = UINT64_MAX;
int64_t x531 = -1LL;
int32_t x532 = INT32_MIN;
static volatile uint64_t t95 = 175296365878733314LLU;
int64_t x545 = 223976LL;
static int64_t t97 = 323919660066395LL;
int8_t x553 = INT8_MAX;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int16_t x2 = INT16_MAX;
	uint8_t x3 = 2U;
	int16_t x4 = INT16_MIN;
	int32_t t0 = 2655;

	t0 = ((x1^x2)/(x3*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = UINT16_MAX;
	int32_t x10 = 223975;
	int8_t x11 = -1;
	int16_t x12 = INT16_MIN;
	volatile int32_t t1 = -1;

	t1 = ((x9^x10)/(x11*x12));

	if (t1 != 7) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x13 = INT64_MAX;
	int64_t x14 = -1LL;
	static uint16_t x16 = 10U;
	volatile int64_t t2 = 20762137414580LL;

	t2 = ((x13^x14)/(x15*x16));

	if (t2 != 922337203685477580LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x21 = INT16_MIN;
	int16_t x22 = -3;
	int16_t x23 = INT16_MIN;
	int8_t x24 = INT8_MIN;

	t3 = ((x21^x22)/(x23*x24));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = INT8_MIN;
	static int64_t x26 = -1LL;
	static uint32_t x27 = 7415U;
	volatile int64_t t4 = -29094125254618528LL;

	t4 = ((x25^x26)/(x27*x28));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = INT64_MAX;
	volatile int16_t x30 = 0;
	int8_t x31 = INT8_MAX;
	int32_t x32 = -1;
	static volatile int64_t t5 = -5629093LL;

	t5 = ((x29^x30)/(x31*x32));

	if (t5 != -72624976668147841LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x33 = INT16_MIN;
	int64_t x34 = -30241110331575LL;
	static int16_t x35 = INT16_MAX;
	uint16_t x36 = 11U;
	int64_t t6 = 1542386767LL;

	t6 = ((x33^x34)/(x35*x36));

	if (t6 != 83901237LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x41 = INT32_MIN;
	static int64_t x42 = INT64_MIN;
	int8_t x43 = 11;
	int64_t x44 = -6LL;

	t7 = ((x41^x42)/(x43*x44));

	if (t7 != -139748061131928669LL) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x46 = -1;
	static int16_t x47 = INT16_MIN;
	int16_t x48 = 4498;
	int32_t t8 = 3517;

	t8 = ((x45^x46)/(x47*x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x49 = 57U;
	int16_t x50 = INT16_MAX;
	uint8_t x51 = 15U;
	int32_t x52 = 60;

	t9 = ((x49^x50)/(x51*x52));

	if (t9 != 36) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x53 = UINT16_MAX;
	int16_t x54 = 165;
	int8_t x55 = 18;
	int16_t x56 = INT16_MAX;
	int32_t t10 = 67692;

	t10 = ((x53^x54)/(x55*x56));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x57 = 67694306960706234LLU;
	volatile uint8_t x58 = 16U;
	uint32_t x59 = 523116562U;
	uint16_t x60 = 32606U;
	uint64_t t11 = 30889422LLU;

	t11 = ((x57^x58)/(x59*x60));

	if (t11 != 47555230LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x61 = 55;
	static int8_t x62 = -9;
	int16_t x63 = INT16_MIN;
	volatile uint16_t x64 = 27U;
	int32_t t12 = -350033;

	t12 = ((x61^x62)/(x63*x64));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x65 = INT64_MAX;
	int64_t x66 = INT64_MIN;
	static int8_t x68 = -1;
	int64_t t13 = -2122079776892049LL;

	t13 = ((x65^x66)/(x67*x68));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x73 = INT32_MIN;
	uint16_t x74 = 8196U;
	int8_t x76 = -7;
	volatile uint64_t t14 = 1611LLU;

	t14 = ((x73^x74)/(x75*x76));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x77 = INT8_MAX;
	int16_t x78 = INT16_MIN;
	int64_t x80 = -30101040LL;
	static volatile int64_t t15 = 20062442234188LL;

	t15 = ((x77^x78)/(x79*x80));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x82 = UINT8_MAX;
	int64_t x83 = INT64_MIN;
	volatile uint64_t t16 = 6213882514224LLU;

	t16 = ((x81^x82)/(x83*x84));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x87 = -1;
	uint64_t x88 = 10485677501679LLU;
	volatile uint64_t t17 = 10378358LLU;

	t17 = ((x85^x86)/(x87*x88));

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x89 = -1;
	uint16_t x90 = UINT16_MAX;
	int64_t x91 = 2LL;
	uint64_t x92 = 102882843LLU;
	volatile uint64_t t18 = 1487997713LLU;

	t18 = ((x89^x90)/(x91*x92));

	if (t18 != 89649272589LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = 26;
	volatile int64_t x94 = INT64_MIN;
	uint16_t x95 = UINT16_MAX;
	int32_t x96 = -1;
	volatile int64_t t19 = 1LL;

	t19 = ((x93^x94)/(x95*x96));

	if (t19 != 140739635871744LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x105 = INT64_MAX;
	int8_t x106 = -1;
	uint8_t x107 = 3U;
	volatile int64_t t20 = -13LL;

	t20 = ((x105^x106)/(x107*x108));

	if (t20 != 3074457345618258602LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x109 = 0U;
	int16_t x110 = -2031;
	uint32_t x112 = 1565641U;

	t21 = ((x109^x110)/(x111*x112));

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x113 = 469LLU;
	int16_t x114 = INT16_MIN;
	int16_t x116 = INT16_MIN;
	volatile uint64_t t22 = 7509LLU;

	t22 = ((x113^x114)/(x115*x116));

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x117 = 6;
	uint64_t x118 = 38770721814LLU;
	static int8_t x119 = -1;
	volatile uint16_t x120 = 8925U;
	uint64_t t23 = 4714308LLU;

	t23 = ((x117^x118)/(x119*x120));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x125 = INT8_MAX;
	uint8_t x126 = 0U;
	int16_t x127 = 2;
	int32_t x128 = -1;

	t24 = ((x125^x126)/(x127*x128));

	if (t24 != -63) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x129 = -1;
	static uint32_t x130 = UINT32_MAX;
	uint64_t x132 = UINT64_MAX;
	volatile uint64_t t25 = 6080011LLU;

	t25 = ((x129^x130)/(x131*x132));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x133 = INT16_MIN;
	int16_t x134 = INT16_MIN;
	static uint8_t x135 = UINT8_MAX;
	int16_t x136 = -425;
	int32_t t26 = -46611;

	t26 = ((x133^x134)/(x135*x136));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x142 = 17075U;
	static int16_t x143 = 1;
	uint64_t x144 = 46414834972LLU;

	t27 = ((x141^x142)/(x143*x144));

	if (t27 != 198716036LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x145 = INT32_MIN;
	static volatile int64_t x146 = 42013002997062LL;
	int32_t x147 = -1;
	volatile int32_t x148 = 2;

	t28 = ((x145^x146)/(x147*x148));

	if (t28 != 21005794849117LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x149 = INT32_MIN;
	static int32_t x150 = INT32_MAX;
	int64_t x152 = 21083656732LL;

	t29 = ((x149^x150)/(x151*x152));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x153 = 4;
	volatile int16_t x154 = INT16_MAX;
	uint16_t x155 = 3355U;
	uint64_t x156 = 736310LLU;

	t30 = ((x153^x154)/(x155*x156));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x157 = UINT16_MAX;
	volatile int16_t x158 = INT16_MAX;
	static int16_t x159 = -22;
	volatile int32_t t31 = -12;

	t31 = ((x157^x158)/(x159*x160));

	if (t31 != 11) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x162 = INT16_MIN;
	uint64_t x163 = UINT64_MAX;
	int64_t x164 = -1LL;
	uint64_t t32 = 6986543683043LLU;

	t32 = ((x161^x162)/(x163*x164));

	if (t32 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x165 = INT16_MAX;
	static int16_t x166 = INT16_MIN;
	static uint64_t x167 = 7973015549936LLU;
	int32_t x168 = -1;

	t33 = ((x165^x166)/(x167*x168));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x173 = 1034098278960349LL;
	uint16_t x174 = 15903U;
	uint16_t x175 = 11U;
	uint8_t x176 = UINT8_MAX;

	t34 = ((x173^x174)/(x175*x176));

	if (t34 != 368662488046LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint16_t x177 = 8189U;
	volatile uint8_t x179 = 3U;
	uint8_t x180 = UINT8_MAX;
	volatile uint64_t t35 = 2965805731280LLU;

	t35 = ((x177^x178)/(x179*x180));

	if (t35 != 11125009LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint16_t x185 = 0U;
	int16_t x186 = -1;
	int16_t x187 = -1330;
	uint32_t x188 = 37957012U;
	volatile uint32_t t36 = 19U;

	t36 = ((x185^x186)/(x187*x188));

	if (t36 != 4U) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x193 = 2779U;
	uint8_t x194 = 25U;
	uint8_t x195 = 61U;
	int32_t t37 = -97815120;

	t37 = ((x193^x194)/(x195*x196));

	if (t37 != 45) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x197 = 295U;
	volatile int16_t x198 = INT16_MIN;
	int8_t x199 = -1;
	int64_t x200 = -1LL;
	int64_t t38 = -97499472LL;

	t38 = ((x197^x198)/(x199*x200));

	if (t38 != -32473LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x201 = 7;
	int8_t x202 = INT8_MIN;
	static uint64_t x203 = UINT64_MAX;
	static volatile uint64_t x204 = 22518487061692880LLU;

	t39 = ((x201^x202)/(x203*x204));

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x206 = 8U;
	uint32_t x208 = UINT32_MAX;
	uint32_t t40 = 47335U;

	t40 = ((x205^x206)/(x207*x208));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x213 = 27758347;
	int32_t x214 = -12;
	static volatile uint8_t x215 = UINT8_MAX;
	volatile uint32_t t41 = 837264837U;

	t41 = ((x213^x214)/(x215*x216));

	if (t41 != 10645U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x218 = INT8_MAX;
	uint32_t x219 = 19494856U;
	uint64_t x220 = 23085LLU;
	volatile uint64_t t42 = 1416641381278839771LLU;

	t42 = ((x217^x218)/(x219*x220));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x221 = -15479;
	int32_t x222 = INT32_MIN;
	uint32_t x223 = 635326285U;
	int16_t x224 = -84;
	static uint32_t t43 = 24586529U;

	t43 = ((x221^x222)/(x223*x224));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x225 = 64330LLU;
	volatile int32_t x228 = 23536;

	t44 = ((x225^x226)/(x227*x228));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int32_t x229 = 82485006;
	static uint16_t x230 = 3U;
	uint32_t x231 = 111521U;
	uint64_t x232 = 1596523676LLU;
	uint64_t t45 = 8840799859059026LLU;

	t45 = ((x229^x230)/(x231*x232));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x242 = INT8_MAX;
	static uint8_t x243 = UINT8_MAX;
	int32_t t46 = 13162;

	t46 = ((x241^x242)/(x243*x244));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x247 = -6031146LL;
	uint64_t x248 = UINT64_MAX;
	volatile uint64_t t47 = 234158LLU;

	t47 = ((x245^x246)/(x247*x248));

	if (t47 != 3058405879079LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x249 = 9U;
	uint16_t x250 = 0U;
	int8_t x251 = INT8_MIN;
	uint32_t t48 = 236545U;

	t48 = ((x249^x250)/(x251*x252));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x259 = INT64_MIN;
	static volatile uint64_t x260 = 123577LLU;
	volatile uint64_t t49 = 120848LLU;

	t49 = ((x257^x258)/(x259*x260));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x265 = 84395889U;
	int16_t x267 = INT16_MIN;
	int8_t x268 = -7;
	static volatile uint32_t t50 = 72497U;

	t50 = ((x265^x266)/(x267*x268));

	if (t50 != 367U) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x274 = INT16_MAX;
	static uint32_t x275 = UINT32_MAX;
	uint32_t x276 = 50247U;
	uint32_t t51 = 14U;

	t51 = ((x273^x274)/(x275*x276));

	if (t51 != 1U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x277 = 899108225;
	volatile int32_t x280 = 4;

	t52 = ((x277^x278)/(x279*x280));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x285 = 318U;
	int16_t x286 = INT16_MIN;
	volatile uint64_t x287 = 284837897LLU;
	static volatile int64_t x288 = INT64_MIN;

	t53 = ((x285^x286)/(x287*x288));

	if (t53 != 1LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x289 = INT64_MAX;
	volatile uint16_t x291 = UINT16_MAX;
	int64_t t54 = 3242099445LL;

	t54 = ((x289^x290)/(x291*x292));

	if (t54 != 46913211957248LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int32_t x294 = INT32_MAX;
	static uint64_t x295 = 1244680LLU;
	volatile uint64_t t55 = 14837LLU;

	t55 = ((x293^x294)/(x295*x296));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x297 = INT16_MAX;
	int64_t x298 = INT64_MIN;
	static int8_t x299 = INT8_MAX;
	int64_t t56 = 7375372LL;

	t56 = ((x297^x298)/(x299*x300));

	if (t56 != -567382630219902LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x301 = 21034673LL;
	int32_t x302 = INT32_MIN;
	int8_t x303 = INT8_MIN;
	uint32_t x304 = UINT32_MAX;

	t57 = ((x301^x302)/(x303*x304));

	if (t57 != -16612882LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x306 = INT64_MAX;
	int8_t x307 = INT8_MAX;
	int32_t x308 = 3;
	int64_t t58 = 2095681176985246LL;

	t58 = ((x305^x306)/(x307*x308));

	if (t58 != 24208325556049280LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x313 = -1;
	uint16_t x314 = 44U;
	int16_t x315 = INT16_MIN;
	int32_t t59 = -12;

	t59 = ((x313^x314)/(x315*x316));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x317 = 2278;
	uint8_t x318 = UINT8_MAX;
	uint32_t x319 = 16U;
	int32_t x320 = INT32_MAX;
	volatile uint32_t t60 = 6662U;

	t60 = ((x317^x318)/(x319*x320));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x321 = INT16_MIN;
	int32_t x322 = INT32_MIN;
	int64_t x323 = 1118287LL;
	int16_t x324 = INT16_MAX;
	int64_t t61 = 1552617868728182079LL;

	t61 = ((x321^x322)/(x323*x324));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x329 = 2124191786881LL;
	static uint32_t x330 = 1040967604U;
	int64_t x331 = 26LL;
	uint32_t x332 = 3045242U;
	int64_t t62 = 11936LL;

	t62 = ((x329^x330)/(x331*x332));

	if (t62 != 26834LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint64_t x333 = UINT64_MAX;
	int16_t x334 = INT16_MIN;
	static uint64_t x335 = 1LLU;
	static volatile int16_t x336 = INT16_MAX;
	volatile uint64_t t63 = 2LLU;

	t63 = ((x333^x334)/(x335*x336));

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x338 = INT8_MIN;
	static volatile int16_t x340 = -542;
	volatile int32_t t64 = 1;

	t64 = ((x337^x338)/(x339*x340));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x354 = INT8_MIN;
	int8_t x356 = INT8_MIN;
	volatile uint64_t t65 = 35487601005LLU;

	t65 = ((x353^x354)/(x355*x356));

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x357 = -1;
	uint16_t x359 = UINT16_MAX;
	int16_t x360 = -1;

	t66 = ((x357^x358)/(x359*x360));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x361 = INT8_MIN;
	int16_t x362 = INT16_MAX;
	static int16_t x363 = INT16_MIN;
	volatile uint64_t t67 = 635130220LLU;

	t67 = ((x361^x362)/(x363*x364));

	if (t67 != 1LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x369 = 1957;
	int32_t x370 = -1;
	uint32_t x372 = UINT32_MAX;
	uint32_t t68 = 14458619U;

	t68 = ((x369^x370)/(x371*x372));

	if (t68 != 4294965338U) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x373 = -368006984;
	int64_t x374 = 801462LL;
	static volatile uint64_t x375 = 898174950465846LLU;
	uint64_t t69 = 104512676LLU;

	t69 = ((x373^x374)/(x375*x376));

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x385 = -5996834260741LL;
	volatile int64_t t70 = 122514LL;

	t70 = ((x385^x386)/(x387*x388));

	if (t70 != 5997592567840LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x389 = INT16_MIN;
	static int64_t x390 = -22074210984LL;
	uint16_t x392 = 398U;
	static volatile int64_t t71 = -209407149880560LL;

	t71 = ((x389^x390)/(x391*x392));

	if (t71 != 27731424LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x393 = -1;
	static volatile int16_t x394 = 2;
	int32_t x395 = -1;
	int16_t x396 = INT16_MIN;
	int32_t t72 = 24651208;

	t72 = ((x393^x394)/(x395*x396));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x397 = 928022654LL;
	int64_t x398 = -1LL;
	uint32_t x399 = UINT32_MAX;
	uint64_t x400 = UINT64_MAX;
	static uint64_t t73 = 21772LLU;

	t73 = ((x397^x398)/(x399*x400));

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x401 = INT16_MAX;
	int16_t x404 = -1;
	int32_t t74 = -8021;

	t74 = ((x401^x402)/(x403*x404));

	if (t74 != -42) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x405 = 108U;
	int16_t x406 = INT16_MAX;
	volatile uint8_t x407 = UINT8_MAX;
	int8_t x408 = INT8_MIN;
	int32_t t75 = 74382689;

	t75 = ((x405^x406)/(x407*x408));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int64_t x410 = 4301LL;
	static volatile int16_t x411 = INT16_MIN;
	volatile int16_t x412 = 2;
	volatile int64_t t76 = -138502942468042785LL;

	t76 = ((x409^x410)/(x411*x412));

	if (t76 != 140737488355327LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x413 = -1LL;
	static int64_t x414 = INT64_MAX;
	static uint32_t x415 = 701U;
	int64_t x416 = -692017827811LL;

	t77 = ((x413^x414)/(x415*x416));

	if (t77 != 19013LL) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x417 = -27;
	uint64_t x418 = UINT64_MAX;
	static uint32_t x419 = 183950U;
	volatile uint32_t x420 = UINT32_MAX;
	volatile uint64_t t78 = 26230683LLU;

	t78 = ((x417^x418)/(x419*x420));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x425 = INT8_MIN;
	static uint16_t x426 = 2U;
	volatile int64_t x427 = -1LL;
	int16_t x428 = INT16_MIN;
	int64_t t79 = -678851097605784LL;

	t79 = ((x425^x426)/(x427*x428));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x433 = 9U;
	int32_t x434 = INT32_MIN;
	uint8_t x435 = 1U;
	uint16_t x436 = UINT16_MAX;

	t80 = ((x433^x434)/(x435*x436));

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x437 = INT16_MAX;
	uint8_t x439 = 2U;
	uint16_t x440 = UINT16_MAX;
	int32_t t81 = 8;

	t81 = ((x437^x438)/(x439*x440));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x449 = 2256974008LL;
	int8_t x450 = INT8_MIN;
	int8_t x451 = INT8_MIN;
	volatile uint16_t x452 = 3623U;
	volatile int64_t t82 = -1219672271017748439LL;

	t82 = ((x449^x450)/(x451*x452));

	if (t82 != 4866LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x455 = -17950806786075479LL;
	int8_t x456 = -3;
	volatile int64_t t83 = -931341719280815550LL;

	t83 = ((x453^x454)/(x455*x456));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x457 = -1;
	int64_t x460 = 37345LL;
	static int64_t t84 = -180655LL;

	t84 = ((x457^x458)/(x459*x460));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x461 = -1;
	int16_t x462 = 1;
	uint8_t x464 = 1U;
	volatile int32_t t85 = 538034;

	t85 = ((x461^x462)/(x463*x464));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x469 = 51U;
	int32_t x470 = INT32_MAX;
	uint32_t x471 = 24517499U;
	volatile int8_t x472 = INT8_MAX;
	uint32_t t86 = 20160U;

	t86 = ((x469^x470)/(x471*x472));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x473 = INT32_MAX;
	static uint32_t x474 = 69U;
	int8_t x475 = -1;
	int16_t x476 = INT16_MAX;

	t87 = ((x473^x474)/(x475*x476));

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x477 = 1120845062566555LLU;
	int64_t x478 = INT64_MIN;
	int8_t x480 = INT8_MIN;
	uint64_t t88 = 365226988LLU;

	t88 = ((x477^x478)/(x479*x480));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x485 = -1LL;
	uint32_t x487 = 993348846U;
	int8_t x488 = 5;
	volatile int64_t t89 = -1LL;

	t89 = ((x485^x486)/(x487*x488));

	if (t89 != -284998LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x489 = INT32_MAX;
	static int16_t x490 = INT16_MIN;
	int32_t x492 = -1;
	int64_t t90 = -7243LL;

	t90 = ((x489^x490)/(x491*x492));

	if (t90 != -2147450881LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x497 = 5002U;
	static int16_t x498 = 3366;
	int32_t x499 = -343591585;
	volatile uint32_t t91 = 8859396U;

	t91 = ((x497^x498)/(x499*x500));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x507 = UINT32_MAX;
	uint8_t x508 = UINT8_MAX;
	static volatile uint32_t t92 = 115U;

	t92 = ((x505^x506)/(x507*x508));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x521 = -1LL;
	int64_t x523 = -2921869210352LL;
	volatile int64_t t93 = -84995344619305LL;

	t93 = ((x521^x522)/(x523*x524));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x525 = INT16_MIN;
	uint16_t x526 = UINT16_MAX;
	int16_t x527 = INT16_MAX;
	uint8_t x528 = 1U;

	t94 = ((x525^x526)/(x527*x528));

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x530 = INT64_MIN;

	t95 = ((x529^x530)/(x531*x532));

	if (t95 != 4294967295LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x533 = 3LLU;
	int8_t x534 = -1;
	uint64_t x535 = 1832LLU;
	static int8_t x536 = 20;
	static uint64_t t96 = 7160LLU;

	t96 = ((x533^x534)/(x535*x536));

	if (t96 != 503459172317400LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x546 = -1;
	static int8_t x547 = -3;
	uint32_t x548 = 91491800U;

	t97 = ((x545^x546)/(x547*x548));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x549 = INT64_MIN;
	uint8_t x550 = 7U;
	uint32_t x551 = 4932776U;
	static uint8_t x552 = UINT8_MAX;
	volatile int64_t t98 = 2173995224180598179LL;

	t98 = ((x549^x550)/(x551*x552));

	if (t98 != -7332602660LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x554 = INT64_MIN;
	int8_t x555 = -1;
	static uint32_t x556 = 1U;
	static int64_t t99 = -219223708459LL;

	t99 = ((x553^x554)/(x555*x556));

	if (t99 != -2147483648LL) { NG(); } else { ; }
	
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

