#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x7 = -1;
int8_t x12 = -1;
int32_t t1 = -9;
uint64_t x17 = 11LLU;
int16_t x38 = 1;
static int32_t x39 = 25;
uint16_t x45 = 4U;
int64_t x53 = INT64_MIN;
static int16_t x63 = INT16_MAX;
volatile int64_t t10 = -8333675LL;
int64_t t11 = 95LL;
uint64_t t12 = 1064450900047555146LLU;
volatile uint16_t x81 = UINT16_MAX;
uint64_t x98 = UINT64_MAX;
static volatile int32_t x103 = INT32_MIN;
int32_t x116 = -1;
uint64_t t18 = 1267297158LLU;
int8_t x119 = INT8_MIN;
int64_t x122 = 228562047546LL;
volatile int64_t t20 = 5LL;
uint64_t x125 = UINT64_MAX;
int32_t x126 = -318;
uint64_t x132 = UINT64_MAX;
static int64_t x139 = -43027878200289LL;
int32_t t24 = 0;
int8_t x159 = INT8_MIN;
uint64_t x167 = UINT64_MAX;
static uint64_t x178 = 1393012566924904LLU;
static int8_t x179 = INT8_MAX;
static int16_t x180 = INT16_MIN;
uint32_t x181 = 6380214U;
static volatile uint64_t x193 = UINT64_MAX;
uint32_t t37 = 562880982U;
int16_t x209 = 135;
static int16_t x211 = INT16_MAX;
uint64_t t38 = 7296015276LLU;
int8_t x213 = 5;
volatile uint32_t t39 = 492819U;
int8_t x229 = -1;
int64_t t41 = -7814529691171323LL;
volatile int8_t x234 = INT8_MIN;
uint16_t x235 = UINT16_MAX;
int16_t x239 = 6;
volatile int16_t x243 = -1;
int16_t x249 = 2997;
static int64_t x251 = 294758768043379411LL;
uint32_t t47 = 660916714U;
uint8_t x268 = 1U;
volatile uint16_t x273 = UINT16_MAX;
volatile int32_t x279 = INT32_MIN;
int16_t x281 = -1970;
volatile int8_t x282 = INT8_MAX;
uint64_t t54 = 14151LLU;
uint16_t x295 = 7U;
int64_t x305 = 17714LL;
volatile uint16_t x309 = 32679U;
int8_t x314 = INT8_MAX;
static volatile int8_t x315 = INT8_MAX;
static volatile uint32_t t58 = 1711U;
volatile int64_t x320 = -1LL;
static int8_t x325 = -5;
int64_t x332 = INT64_MIN;
static uint64_t x348 = 4041581995420423556LLU;
uint64_t t66 = 294930481221LLU;
volatile int16_t x364 = 14574;
static int8_t x371 = -3;
uint16_t x376 = 1U;
int16_t x380 = 2;
int8_t x381 = -1;
int8_t x388 = INT8_MIN;
static uint32_t x390 = 5U;
static int8_t x391 = INT8_MAX;
static int64_t x392 = -64301690LL;
int16_t x396 = INT16_MIN;
int32_t t75 = -876917028;
volatile int32_t x398 = INT32_MIN;
uint64_t x399 = UINT64_MAX;
int64_t x404 = 11275LL;
int64_t t77 = -307202715914892LL;
uint32_t x406 = 53553U;
volatile int64_t x410 = 2791472501306386205LL;
int32_t t80 = -1234198;
static int16_t x431 = INT16_MIN;
volatile int16_t x437 = INT16_MAX;
volatile uint64_t t82 = 1970842824LLU;
static volatile uint32_t t83 = 147440U;
uint64_t t84 = 6397361622218777919LLU;
int16_t x450 = 92;
uint64_t x459 = UINT64_MAX;
volatile uint64_t t88 = 2846822883372620614LLU;
uint64_t t89 = 243718322LLU;
static volatile int64_t t91 = 23635530201961170LL;
int64_t t94 = 5252518LL;
int8_t x505 = -1;
static uint64_t x506 = UINT64_MAX;
int32_t x514 = INT32_MAX;
volatile uint8_t x526 = UINT8_MAX;
volatile int32_t x528 = -1;


void f0(void) {
	static int32_t x5 = INT32_MIN;
	static uint16_t x6 = 14U;
	uint16_t x8 = 3U;
	volatile int32_t t0 = -4;

	t0 = (x5+((x6+x7)-x8));

	if (t0 != -2147483638) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x9 = 38U;
	volatile int16_t x10 = INT16_MIN;
	int8_t x11 = 1;

	t1 = (x9+((x10+x11)-x12));

	if (t1 != -32728) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x18 = INT8_MIN;
	static int8_t x19 = INT8_MAX;
	volatile uint8_t x20 = 2U;
	static volatile uint64_t t2 = 1400403869LLU;

	t2 = (x17+((x18+x19)-x20));

	if (t2 != 8LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x21 = INT16_MIN;
	int32_t x22 = INT32_MAX;
	int32_t x23 = INT32_MIN;
	static volatile int32_t x24 = -1;
	volatile int32_t t3 = 977278020;

	t3 = (x21+((x22+x23)-x24));

	if (t3 != -32768) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x29 = INT8_MAX;
	uint8_t x30 = UINT8_MAX;
	volatile int64_t x31 = -1LL;
	uint16_t x32 = 11U;
	static volatile int64_t t4 = -978LL;

	t4 = (x29+((x30+x31)-x32));

	if (t4 != 370LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x37 = -1604;
	volatile int32_t x40 = 7;
	volatile int32_t t5 = 3143;

	t5 = (x37+((x38+x39)-x40));

	if (t5 != -1585) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x41 = UINT16_MAX;
	uint32_t x42 = UINT32_MAX;
	int8_t x43 = INT8_MAX;
	int16_t x44 = INT16_MAX;
	uint32_t t6 = 1836575U;

	t6 = (x41+((x42+x43)-x44));

	if (t6 != 32894U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x46 = 20U;
	int32_t x47 = -1;
	static volatile uint64_t x48 = 2871895071LLU;
	static volatile uint64_t t7 = 3417187LLU;

	t7 = (x45+((x46+x47)-x48));

	if (t7 != 18446744070837656568LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x54 = -1;
	static int16_t x55 = INT16_MIN;
	int64_t x56 = INT64_MIN;
	int64_t t8 = 3911772925549496LL;

	t8 = (x53+((x54+x55)-x56));

	if (t8 != -32769LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x57 = INT32_MAX;
	int16_t x58 = 0;
	uint8_t x59 = 0U;
	int8_t x60 = INT8_MAX;
	int32_t t9 = 10;

	t9 = (x57+((x58+x59)-x60));

	if (t9 != 2147483520) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x61 = INT8_MIN;
	static int64_t x62 = 794047191049599LL;
	static volatile int16_t x64 = INT16_MAX;

	t10 = (x61+((x62+x63)-x64));

	if (t10 != 794047191049471LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x65 = 1649U;
	int32_t x66 = INT32_MIN;
	int64_t x67 = -2265LL;
	int8_t x68 = 9;

	t11 = (x65+((x66+x67)-x68));

	if (t11 != -2147484273LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x73 = INT8_MIN;
	uint64_t x74 = 26535555LLU;
	volatile int32_t x75 = 415;
	int64_t x76 = 7LL;

	t12 = (x73+((x74+x75)-x76));

	if (t12 != 26535835LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x77 = INT8_MAX;
	int8_t x78 = -1;
	volatile int64_t x79 = -30LL;
	static int8_t x80 = -1;
	static volatile int64_t t13 = 70570106389593454LL;

	t13 = (x77+((x78+x79)-x80));

	if (t13 != 97LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x82 = -1;
	int64_t x83 = -28385LL;
	int8_t x84 = INT8_MIN;
	volatile int64_t t14 = -2062360278LL;

	t14 = (x81+((x82+x83)-x84));

	if (t14 != 37277LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x93 = -1;
	int64_t x94 = 17639LL;
	int16_t x95 = -1;
	int16_t x96 = -1;
	int64_t t15 = -2924194203LL;

	t15 = (x93+((x94+x95)-x96));

	if (t15 != 17638LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x97 = -1LL;
	static int32_t x99 = INT32_MAX;
	static int32_t x100 = INT32_MAX;
	uint64_t t16 = 4359758205400LLU;

	t16 = (x97+((x98+x99)-x100));

	if (t16 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x101 = INT8_MIN;
	uint8_t x102 = 5U;
	int64_t x104 = INT64_MIN;
	static volatile int64_t t17 = 38230LL;

	t17 = (x101+((x102+x103)-x104));

	if (t17 != 9223372034707292037LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x113 = -602945651;
	uint64_t x114 = UINT64_MAX;
	int64_t x115 = INT64_MAX;

	t18 = (x113+((x114+x115)-x116));

	if (t18 != 9223372036251830156LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x117 = -1;
	int8_t x118 = INT8_MIN;
	static int8_t x120 = -3;
	volatile int32_t t19 = 52;

	t19 = (x117+((x118+x119)-x120));

	if (t19 != -254) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int16_t x121 = -99;
	int64_t x123 = INT64_MIN;
	int32_t x124 = INT32_MIN;

	t20 = (x121+((x122+x123)-x124));

	if (t20 != -9223371806145244713LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x127 = 0U;
	static uint64_t x128 = 64966LLU;
	uint64_t t21 = 45459915LLU;

	t21 = (x125+((x126+x127)-x128));

	if (t21 != 18446744073709486331LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint16_t x129 = 320U;
	int64_t x130 = 3612357040941LL;
	uint32_t x131 = UINT32_MAX;
	uint64_t t22 = 403896779621169LLU;

	t22 = (x129+((x130+x131)-x132));

	if (t22 != 3616652008557LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x137 = 4U;
	uint32_t x138 = UINT32_MAX;
	int16_t x140 = -1;
	int64_t t23 = -1766LL;

	t23 = (x137+((x138+x139)-x140));

	if (t23 != -43023583232989LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x141 = -234;
	int8_t x142 = INT8_MIN;
	int8_t x143 = INT8_MAX;
	volatile uint16_t x144 = 1U;

	t24 = (x141+((x142+x143)-x144));

	if (t24 != -236) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x149 = UINT64_MAX;
	static uint16_t x150 = 9810U;
	volatile int32_t x151 = -32669;
	static uint32_t x152 = 0U;
	static volatile uint64_t t25 = 5093521002707219159LLU;

	t25 = (x149+((x150+x151)-x152));

	if (t25 != 4294944436LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x153 = -1;
	int8_t x154 = -1;
	int16_t x155 = INT16_MAX;
	volatile uint8_t x156 = UINT8_MAX;
	volatile int32_t t26 = 22161;

	t26 = (x153+((x154+x155)-x156));

	if (t26 != 32510) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x157 = -202;
	int64_t x158 = -1LL;
	volatile int8_t x160 = INT8_MAX;
	volatile int64_t t27 = -2894791LL;

	t27 = (x157+((x158+x159)-x160));

	if (t27 != -458LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x161 = 259U;
	int32_t x162 = -1;
	int16_t x163 = INT16_MIN;
	int64_t x164 = 411353189469037712LL;
	static int64_t t28 = 11858215039997299LL;

	t28 = (x161+((x162+x163)-x164));

	if (t28 != -411353189469070222LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x165 = 1916785463U;
	volatile uint32_t x166 = UINT32_MAX;
	int16_t x168 = INT16_MAX;
	volatile uint64_t t29 = 14LLU;

	t29 = (x165+((x166+x167)-x168));

	if (t29 != 6211719990LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x173 = INT64_MIN;
	volatile int8_t x174 = 0;
	volatile uint64_t x175 = UINT64_MAX;
	volatile int64_t x176 = 110902822473619704LL;
	uint64_t t30 = 55474038424118288LLU;

	t30 = (x173+((x174+x175)-x176));

	if (t30 != 9112469214381156103LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x177 = 333471816U;
	uint64_t t31 = 3458LLU;

	t31 = (x177+((x178+x179)-x180));

	if (t31 != 1393012900429615LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x182 = -1028012;
	uint64_t x183 = 809336524310367LLU;
	volatile int64_t x184 = INT64_MIN;
	volatile uint64_t t32 = 32787206LLU;

	t32 = (x181+((x182+x183)-x184));

	if (t32 != 9224181373384438377LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x189 = 3;
	int64_t x190 = -1LL;
	uint64_t x191 = UINT64_MAX;
	static int8_t x192 = -14;
	volatile uint64_t t33 = 144770129007147LLU;

	t33 = (x189+((x190+x191)-x192));

	if (t33 != 15LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x194 = INT16_MIN;
	uint64_t x195 = UINT64_MAX;
	volatile int8_t x196 = INT8_MAX;
	volatile uint64_t t34 = 12044397053LLU;

	t34 = (x193+((x194+x195)-x196));

	if (t34 != 18446744073709518719LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x197 = -1;
	int8_t x198 = INT8_MAX;
	volatile int8_t x199 = INT8_MIN;
	volatile int8_t x200 = -2;
	static int32_t t35 = -3976;

	t35 = (x197+((x198+x199)-x200));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x201 = -5LL;
	volatile int64_t x202 = INT64_MAX;
	int8_t x203 = INT8_MIN;
	volatile int32_t x204 = 82396;
	volatile int64_t t36 = 255LL;

	t36 = (x201+((x202+x203)-x204));

	if (t36 != 9223372036854693278LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x205 = -1;
	uint32_t x206 = 85U;
	uint16_t x207 = UINT16_MAX;
	static int16_t x208 = INT16_MIN;

	t37 = (x205+((x206+x207)-x208));

	if (t37 != 98387U) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x210 = 945579507365304LLU;
	int32_t x212 = -1;

	t38 = (x209+((x210+x211)-x212));

	if (t38 != 945579507398207LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x214 = 12833373U;
	static volatile int16_t x215 = INT16_MAX;
	int16_t x216 = INT16_MIN;

	t39 = (x213+((x214+x215)-x216));

	if (t39 != 12898913U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x221 = UINT64_MAX;
	static volatile int64_t x222 = 783558333LL;
	uint64_t x223 = UINT64_MAX;
	uint32_t x224 = 1U;
	static uint64_t t40 = 446996571592261LLU;

	t40 = (x221+((x222+x223)-x224));

	if (t40 != 783558330LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x230 = 37U;
	int64_t x231 = 376233629520823LL;
	int8_t x232 = INT8_MIN;

	t41 = (x229+((x230+x231)-x232));

	if (t41 != 376233629520987LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x233 = -142;
	static int16_t x236 = 987;
	volatile int32_t t42 = -6832835;

	t42 = (x233+((x234+x235)-x236));

	if (t42 != 64278) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x237 = -586;
	int8_t x238 = INT8_MAX;
	volatile uint32_t x240 = 12289275U;
	volatile uint32_t t43 = 208U;

	t43 = (x237+((x238+x239)-x240));

	if (t43 != 4282677568U) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x241 = INT32_MIN;
	int16_t x242 = 7;
	uint32_t x244 = UINT32_MAX;
	uint32_t t44 = 6U;

	t44 = (x241+((x242+x243)-x244));

	if (t44 != 2147483655U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x245 = INT8_MAX;
	int16_t x246 = -10459;
	static int16_t x247 = -1;
	uint8_t x248 = 118U;
	int32_t t45 = 11949790;

	t45 = (x245+((x246+x247)-x248));

	if (t45 != -10451) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x250 = -27;
	static uint8_t x252 = 4U;
	int64_t t46 = -28LL;

	t46 = (x249+((x250+x251)-x252));

	if (t46 != 294758768043382377LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x257 = -37;
	int8_t x258 = INT8_MIN;
	uint8_t x259 = 2U;
	uint32_t x260 = 730186U;

	t47 = (x257+((x258+x259)-x260));

	if (t47 != 4294236947U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x265 = INT64_MIN;
	uint64_t x266 = 20448404574270870LLU;
	volatile int32_t x267 = INT32_MIN;
	volatile uint64_t t48 = 27758LLU;

	t48 = (x265+((x266+x267)-x268));

	if (t48 != 9243820439281563029LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x269 = 2568LL;
	int8_t x270 = -1;
	uint16_t x271 = UINT16_MAX;
	uint64_t x272 = 117735729LLU;
	uint64_t t49 = 32642496LLU;

	t49 = (x269+((x270+x271)-x272));

	if (t49 != 18446744073591883989LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x274 = INT32_MIN;
	int16_t x275 = INT16_MAX;
	volatile uint64_t x276 = UINT64_MAX;
	volatile uint64_t t50 = 2038008LLU;

	t50 = (x273+((x274+x275)-x276));

	if (t50 != 18446744071562166271LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x277 = 29144548U;
	uint8_t x278 = 2U;
	volatile int8_t x280 = INT8_MIN;
	volatile uint32_t t51 = 16693U;

	t51 = (x277+((x278+x279)-x280));

	if (t51 != 2176628326U) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x283 = INT8_MAX;
	int8_t x284 = INT8_MIN;
	int32_t t52 = 0;

	t52 = (x281+((x282+x283)-x284));

	if (t52 != -1588) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x285 = 1395LLU;
	uint32_t x286 = 166999926U;
	uint16_t x287 = 10U;
	int32_t x288 = -1;
	volatile uint64_t t53 = 5609809LLU;

	t53 = (x285+((x286+x287)-x288));

	if (t53 != 167001332LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x289 = INT8_MIN;
	uint64_t x290 = UINT64_MAX;
	int16_t x291 = -1;
	volatile int64_t x292 = -264207706938LL;

	t54 = (x289+((x290+x291)-x292));

	if (t54 != 264207706808LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x293 = -7512LL;
	volatile int32_t x294 = INT32_MIN;
	static int8_t x296 = INT8_MIN;
	volatile int64_t t55 = 1793679087231586LL;

	t55 = (x293+((x294+x295)-x296));

	if (t55 != -2147491025LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x306 = 1U;
	static volatile int32_t x307 = INT32_MIN;
	volatile int32_t x308 = INT32_MIN;
	int64_t t56 = -68354019LL;

	t56 = (x305+((x306+x307)-x308));

	if (t56 != 17715LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x310 = -1;
	uint32_t x311 = 143363U;
	int64_t x312 = -1LL;
	static int64_t t57 = -5314998LL;

	t57 = (x309+((x310+x311)-x312));

	if (t57 != 176042LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x313 = UINT32_MAX;
	uint16_t x316 = 1U;

	t58 = (x313+((x314+x315)-x316));

	if (t58 != 252U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x317 = INT64_MIN;
	int32_t x318 = 16;
	uint32_t x319 = 1681U;
	static int64_t t59 = 263493606LL;

	t59 = (x317+((x318+x319)-x320));

	if (t59 != -9223372036854774110LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x321 = -1;
	volatile uint32_t x322 = 2083368945U;
	uint16_t x323 = 13U;
	static int32_t x324 = INT32_MIN;
	uint32_t t60 = 3585U;

	t60 = (x321+((x322+x323)-x324));

	if (t60 != 4230852605U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x326 = INT16_MIN;
	int32_t x327 = -6;
	int16_t x328 = INT16_MAX;
	volatile int32_t t61 = -3306;

	t61 = (x325+((x326+x327)-x328));

	if (t61 != -65546) { NG(); } else { ; }
	
}

void f62(void) {
	static uint32_t x329 = 882886U;
	int64_t x330 = 241778105770465LL;
	static uint64_t x331 = 9134LLU;
	uint64_t t62 = 50352612868LLU;

	t62 = (x329+((x330+x331)-x332));

	if (t62 != 9223613814961438293LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int64_t x337 = INT64_MAX;
	uint8_t x338 = 32U;
	int64_t x339 = -179514208515LL;
	int32_t x340 = -5;
	int64_t t63 = -18158175213183LL;

	t63 = (x337+((x338+x339)-x340));

	if (t63 != 9223371857340567329LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x341 = 61U;
	int64_t x342 = 259245012702458LL;
	uint16_t x343 = 16U;
	int32_t x344 = INT32_MIN;
	static int64_t t64 = 3598342350176069635LL;

	t64 = (x341+((x342+x343)-x344));

	if (t64 != 259247160186183LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x345 = INT8_MIN;
	int32_t x346 = INT32_MAX;
	int64_t x347 = 4155270LL;
	uint64_t t65 = 39329687573412543LLU;

	t65 = (x345+((x346+x347)-x348));

	if (t65 != 14405162080440766849LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x349 = 24658686873663LLU;
	volatile int64_t x350 = -13LL;
	int8_t x351 = INT8_MAX;
	uint32_t x352 = 10405U;

	t66 = (x349+((x350+x351)-x352));

	if (t66 != 24658686863372LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x353 = INT8_MIN;
	static int64_t x354 = INT64_MAX;
	int64_t x355 = -7787638233276LL;
	int8_t x356 = 28;
	volatile int64_t t67 = -896676785LL;

	t67 = (x353+((x354+x355)-x356));

	if (t67 != 9223364249216542375LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x361 = INT8_MIN;
	uint8_t x362 = UINT8_MAX;
	uint32_t x363 = 218668U;
	volatile uint32_t t68 = 389561U;

	t68 = (x361+((x362+x363)-x364));

	if (t68 != 204221U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x369 = INT16_MIN;
	static uint64_t x370 = 1968078178LLU;
	static int8_t x372 = INT8_MIN;
	uint64_t t69 = 105720782LLU;

	t69 = (x369+((x370+x371)-x372));

	if (t69 != 1968045535LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x373 = INT16_MAX;
	static int64_t x374 = INT64_MAX;
	int64_t x375 = INT64_MIN;
	int64_t t70 = 15455LL;

	t70 = (x373+((x374+x375)-x376));

	if (t70 != 32765LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x377 = -1;
	int8_t x378 = INT8_MIN;
	volatile uint32_t x379 = 42U;
	uint32_t t71 = 124191U;

	t71 = (x377+((x378+x379)-x380));

	if (t71 != 4294967207U) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x382 = INT32_MIN;
	int64_t x383 = -1208137304481LL;
	int16_t x384 = INT16_MIN;
	static int64_t t72 = -6322883LL;

	t72 = (x381+((x382+x383)-x384));

	if (t72 != -1210284755362LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint16_t x385 = 3982U;
	int8_t x386 = -1;
	uint32_t x387 = UINT32_MAX;
	volatile uint32_t t73 = 8231861U;

	t73 = (x385+((x386+x387)-x388));

	if (t73 != 4108U) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x389 = -43816273;
	volatile int64_t t74 = 3675LL;

	t74 = (x389+((x390+x391)-x392));

	if (t74 != 20485549LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x393 = 5277;
	int16_t x394 = 13;
	int32_t x395 = INT32_MIN;

	t75 = (x393+((x394+x395)-x396));

	if (t75 != -2147445590) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x397 = 77369864U;
	int16_t x400 = INT16_MIN;
	uint64_t t76 = 31923336851234LLU;

	t76 = (x397+((x398+x399)-x400));

	if (t76 != 18446744071639470599LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x401 = UINT16_MAX;
	uint16_t x402 = UINT16_MAX;
	volatile int32_t x403 = INT32_MIN;

	t77 = (x401+((x402+x403)-x404));

	if (t77 != -2147363853LL) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x405 = INT64_MIN;
	volatile int16_t x407 = 862;
	int16_t x408 = INT16_MIN;
	int64_t t78 = 3LL;

	t78 = (x405+((x406+x407)-x408));

	if (t78 != -9223372036854688625LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x409 = 13U;
	int64_t x411 = -1855712008505LL;
	int64_t x412 = INT64_MAX;
	volatile int64_t t79 = -2076433LL;

	t79 = (x409+((x410+x411)-x412));

	if (t79 != -6431901391260398094LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x413 = UINT16_MAX;
	uint8_t x414 = 4U;
	int16_t x415 = -1;
	int8_t x416 = -1;

	t80 = (x413+((x414+x415)-x416));

	if (t80 != 65539) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x429 = 10587U;
	int16_t x430 = -103;
	int64_t x432 = -69094558059948LL;
	volatile int64_t t81 = -59545LL;

	t81 = (x429+((x430+x431)-x432));

	if (t81 != 69094558037664LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x438 = 73086973LLU;
	int64_t x439 = INT64_MAX;
	uint32_t x440 = UINT32_MAX;

	t82 = (x437+((x438+x439)-x440));

	if (t82 != 9223372032632928252LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x441 = -1;
	volatile int16_t x442 = INT16_MIN;
	volatile int32_t x443 = -1;
	uint32_t x444 = UINT32_MAX;

	t83 = (x441+((x442+x443)-x444));

	if (t83 != 4294934527U) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x445 = -384426549LL;
	static int16_t x446 = INT16_MIN;
	static uint64_t x447 = UINT64_MAX;
	int64_t x448 = -1LL;

	t84 = (x445+((x446+x447)-x448));

	if (t84 != 18446744073325092299LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint32_t x449 = UINT32_MAX;
	static int64_t x451 = -45LL;
	static int64_t x452 = -1823731200068LL;
	volatile int64_t t85 = 116973901LL;

	t85 = (x449+((x450+x451)-x452));

	if (t85 != 1828026167410LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x453 = 5944273U;
	int8_t x454 = INT8_MIN;
	int32_t x455 = 615740;
	uint8_t x456 = 0U;
	uint32_t t86 = 42U;

	t86 = (x453+((x454+x455)-x456));

	if (t86 != 6559885U) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x457 = 275168337LL;
	static volatile int32_t x458 = INT32_MAX;
	int8_t x460 = -13;
	static uint64_t t87 = 50257568655538LLU;

	t87 = (x457+((x458+x459)-x460));

	if (t87 != 2422651996LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x465 = INT32_MIN;
	volatile int8_t x466 = -1;
	volatile uint8_t x467 = 1U;
	volatile uint64_t x468 = 2095667521534770646LLU;

	t88 = (x465+((x466+x467)-x468));

	if (t88 != 16351076550027297322LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x473 = 1411745;
	uint64_t x474 = 6357LLU;
	static int16_t x475 = -1;
	static volatile uint16_t x476 = 13U;

	t89 = (x473+((x474+x475)-x476));

	if (t89 != 1418088LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x481 = -8187812;
	uint64_t x482 = 2LLU;
	static int32_t x483 = 2;
	uint16_t x484 = 18752U;
	volatile uint64_t t90 = 121LLU;

	t90 = (x481+((x482+x483)-x484));

	if (t90 != 18446744073701345056LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x485 = 2U;
	volatile uint8_t x486 = 1U;
	volatile int64_t x487 = INT64_MIN;
	int8_t x488 = 0;

	t91 = (x485+((x486+x487)-x488));

	if (t91 != -9223372036854775805LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x489 = -1LL;
	int8_t x490 = INT8_MAX;
	int16_t x491 = INT16_MIN;
	volatile int8_t x492 = INT8_MAX;
	static volatile int64_t t92 = -19519877LL;

	t92 = (x489+((x490+x491)-x492));

	if (t92 != -32769LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x493 = 222;
	int16_t x494 = INT16_MIN;
	int8_t x495 = INT8_MAX;
	uint64_t x496 = 1908LLU;
	volatile uint64_t t93 = 53945036306966LLU;

	t93 = (x493+((x494+x495)-x496));

	if (t93 != 18446744073709517289LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x501 = -1;
	int32_t x502 = 857306511;
	volatile int8_t x503 = INT8_MIN;
	static volatile int64_t x504 = -1LL;

	t94 = (x501+((x502+x503)-x504));

	if (t94 != 857306383LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x507 = INT16_MAX;
	uint32_t x508 = 35155401U;
	uint64_t t95 = 404139564LLU;

	t95 = (x505+((x506+x507)-x508));

	if (t95 != 18446744073674428980LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x509 = INT32_MAX;
	int32_t x510 = -1;
	volatile int64_t x511 = 461LL;
	static int32_t x512 = -946;
	volatile int64_t t96 = -5211LL;

	t96 = (x509+((x510+x511)-x512));

	if (t96 != 2147485053LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x513 = INT16_MAX;
	volatile uint64_t x515 = 48569022579LLU;
	volatile int8_t x516 = 0;
	volatile uint64_t t97 = 8744024125LLU;

	t97 = (x513+((x514+x515)-x516));

	if (t97 != 50716538993LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x517 = INT8_MAX;
	volatile uint32_t x518 = 1031178U;
	int32_t x519 = INT32_MIN;
	uint64_t x520 = UINT64_MAX;
	volatile uint64_t t98 = 56279LLU;

	t98 = (x517+((x518+x519)-x520));

	if (t98 != 2148514954LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x525 = INT64_MAX;
	static int64_t x527 = INT64_MIN;
	volatile int64_t t99 = 114305728495LL;

	t99 = (x525+((x526+x527)-x528));

	if (t99 != 255LL) { NG(); } else { ; }
	
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

