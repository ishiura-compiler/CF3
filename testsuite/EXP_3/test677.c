#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x7 = -7547;
uint8_t x8 = UINT8_MAX;
volatile int32_t t0 = 28080;
uint16_t x11 = 20182U;
volatile int64_t t2 = -105LL;
static uint32_t x17 = UINT32_MAX;
int32_t x21 = 52;
int16_t x22 = INT16_MAX;
int64_t t8 = -287463401191546451LL;
uint64_t x52 = UINT64_MAX;
int64_t t11 = -246717624LL;
uint32_t x70 = 3718799U;
volatile int16_t x76 = INT16_MIN;
uint8_t x79 = UINT8_MAX;
volatile int16_t x90 = INT16_MIN;
int32_t x93 = -60284;
int16_t x94 = 14;
int16_t x98 = INT16_MIN;
int32_t x99 = 661551471;
int8_t x101 = -1;
int8_t x105 = INT8_MIN;
volatile int64_t x107 = 382724690243683LL;
int16_t x108 = INT16_MIN;
int64_t x109 = 14LL;
int16_t x110 = 125;
uint16_t x111 = 13243U;
volatile int32_t x114 = -20792994;
volatile int64_t t22 = 3840454LL;
int64_t x117 = -1LL;
int32_t x118 = 1820;
uint64_t x121 = 5372686074199LLU;
int16_t x132 = INT16_MIN;
int16_t x137 = INT16_MAX;
static uint16_t x159 = 21U;
static volatile int64_t x168 = 873314658522335746LL;
uint8_t x169 = UINT8_MAX;
int64_t x185 = INT64_MIN;
int16_t x193 = INT16_MIN;
uint32_t x203 = 5572258U;
int8_t x204 = INT8_MIN;
static int32_t x216 = -568115;
int16_t x222 = -385;
uint64_t t44 = 1773497291531322231LLU;
volatile int64_t t45 = -70581456796887528LL;
int32_t x237 = INT32_MAX;
volatile uint32_t t47 = 18004U;
volatile int64_t t48 = 281870640240LL;
uint64_t x246 = 1LLU;
uint32_t x248 = UINT32_MAX;
int64_t x252 = INT64_MIN;
int64_t x264 = INT64_MAX;
int64_t t53 = 15989510LL;
uint64_t x271 = 0LLU;
uint64_t t56 = 143952088259197607LLU;
uint64_t x282 = 26366144270877043LLU;
uint64_t t57 = 49604183LLU;
uint32_t x285 = 26U;
int32_t x286 = -1;
static volatile uint64_t t58 = 30269144202533700LLU;
static volatile int64_t t59 = -46568LL;
uint64_t x295 = 349059348217LLU;
uint32_t x296 = 152673698U;
volatile int32_t t61 = 24909;
uint32_t x306 = 6664736U;
static uint32_t x310 = 4U;
int64_t x313 = 628452LL;
volatile uint32_t x317 = 4952289U;
uint64_t x322 = 37723012921LLU;
int16_t x339 = INT16_MIN;
static volatile int16_t x343 = INT16_MIN;
uint64_t x345 = 1935791070897LLU;
uint32_t x349 = 11719944U;
static uint32_t x367 = 86390U;
int16_t x372 = 320;
uint8_t x383 = 24U;
volatile int32_t x394 = INT32_MIN;
volatile uint64_t t84 = 56915067168586LLU;
int32_t x397 = 6876663;
static volatile uint64_t x398 = 63056583417530LLU;
static uint32_t x402 = UINT32_MAX;
int64_t t87 = 11976387105433820LL;
int32_t x413 = -3792;
int16_t x415 = INT16_MAX;
int64_t x416 = INT64_MAX;
static int64_t x425 = 5LL;
volatile int16_t x427 = INT16_MIN;
int32_t x428 = 319300;
static uint16_t x430 = UINT16_MAX;
uint64_t t93 = 861LLU;
int64_t x443 = INT64_MIN;
uint64_t x459 = 77742871754242LLU;
int8_t x465 = INT8_MIN;
volatile uint8_t x468 = UINT8_MAX;
int32_t x480 = -1397;


void f0(void) {
	int8_t x5 = INT8_MIN;
	int8_t x6 = -1;

	t0 = ((x5+x6)+(x7%x8));

	if (t0 != -281) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x9 = INT32_MIN;
	uint32_t x10 = 144708941U;
	int32_t x12 = INT32_MIN;
	uint32_t t1 = 2260U;

	t1 = ((x9+x10)+(x11%x12));

	if (t1 != 2292212771U) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x13 = INT32_MIN;
	static volatile uint32_t x14 = 126234U;
	int64_t x15 = -1LL;
	int64_t x16 = -5136524379470LL;

	t2 = ((x13+x14)+(x15%x16));

	if (t2 != 2147609881LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x18 = 1U;
	static int8_t x19 = INT8_MIN;
	volatile int32_t x20 = INT32_MIN;
	static uint32_t t3 = 171227U;

	t3 = ((x17+x18)+(x19%x20));

	if (t3 != 4294967168U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x23 = INT16_MIN;
	int64_t x24 = 301891LL;
	volatile int64_t t4 = 4700LL;

	t4 = ((x21+x22)+(x23%x24));

	if (t4 != 51LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint32_t x25 = 1202477591U;
	int8_t x26 = -1;
	int8_t x27 = INT8_MIN;
	int16_t x28 = INT16_MIN;
	volatile uint32_t t5 = 859U;

	t5 = ((x25+x26)+(x27%x28));

	if (t5 != 1202477462U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x29 = INT64_MIN;
	int8_t x30 = 49;
	int32_t x31 = -1;
	uint64_t x32 = UINT64_MAX;
	uint64_t t6 = 73194793LLU;

	t6 = ((x29+x30)+(x31%x32));

	if (t6 != 9223372036854775857LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x33 = UINT8_MAX;
	int8_t x34 = -1;
	static int32_t x35 = INT32_MAX;
	uint16_t x36 = 727U;
	int32_t t7 = -2;

	t7 = ((x33+x34)+(x35%x36));

	if (t7 != 782) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = -324615579496994LL;
	uint16_t x42 = 339U;
	static int8_t x43 = INT8_MIN;
	volatile int64_t x44 = INT64_MIN;

	t8 = ((x41+x42)+(x43%x44));

	if (t8 != -324615579496783LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x49 = 13U;
	int32_t x50 = -1;
	static int32_t x51 = INT32_MAX;
	uint64_t t9 = 1762294142LLU;

	t9 = ((x49+x50)+(x51%x52));

	if (t9 != 2147483659LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = 1973287;
	int8_t x54 = INT8_MAX;
	int32_t x55 = INT32_MIN;
	static uint8_t x56 = UINT8_MAX;
	int32_t t10 = -1;

	t10 = ((x53+x54)+(x55%x56));

	if (t10 != 1973286) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x57 = -1;
	static int32_t x58 = INT32_MAX;
	volatile int64_t x59 = 1507LL;
	static int32_t x60 = INT32_MAX;

	t11 = ((x57+x58)+(x59%x60));

	if (t11 != 2147485153LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x65 = 2U;
	volatile int8_t x66 = INT8_MAX;
	static int8_t x67 = 1;
	static int16_t x68 = INT16_MIN;
	volatile int32_t t12 = 430;

	t12 = ((x65+x66)+(x67%x68));

	if (t12 != 130) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = INT64_MIN;
	static volatile int64_t x71 = -20644590760023779LL;
	uint32_t x72 = 50U;
	int64_t t13 = 23836138LL;

	t13 = ((x69+x70)+(x71%x72));

	if (t13 != -9223372036851057038LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x73 = UINT8_MAX;
	int32_t x74 = 9;
	volatile int16_t x75 = INT16_MAX;
	static int32_t t14 = 443325245;

	t14 = ((x73+x74)+(x75%x76));

	if (t14 != 33031) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x77 = INT8_MIN;
	int16_t x78 = INT16_MIN;
	int16_t x80 = INT16_MIN;
	int32_t t15 = 1770015;

	t15 = ((x77+x78)+(x79%x80));

	if (t15 != -32641) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x89 = INT16_MIN;
	volatile int64_t x91 = INT64_MIN;
	int32_t x92 = INT32_MIN;
	volatile int64_t t16 = 1LL;

	t16 = ((x89+x90)+(x91%x92));

	if (t16 != -65536LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x95 = INT16_MAX;
	static volatile int32_t x96 = INT32_MIN;
	int32_t t17 = 605;

	t17 = ((x93+x94)+(x95%x96));

	if (t17 != -27503) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x97 = -940;
	uint32_t x100 = 193U;
	uint32_t t18 = 98874197U;

	t18 = ((x97+x98)+(x99%x100));

	if (t18 != 4294933748U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x102 = -2;
	int16_t x103 = 22;
	uint64_t x104 = 30102198587106LLU;
	static volatile uint64_t t19 = 128523907LLU;

	t19 = ((x101+x102)+(x103%x104));

	if (t19 != 19LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x106 = UINT64_MAX;
	volatile uint64_t t20 = 776LLU;

	t20 = ((x105+x106)+(x107%x108));

	if (t20 != 28642LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x112 = INT64_MIN;
	volatile int64_t t21 = 13LL;

	t21 = ((x109+x110)+(x111%x112));

	if (t21 != 13382LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x113 = -1LL;
	int32_t x115 = -1;
	volatile int64_t x116 = -1LL;

	t22 = ((x113+x114)+(x115%x116));

	if (t22 != -20792995LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x119 = UINT64_MAX;
	int64_t x120 = INT64_MIN;
	volatile uint64_t t23 = 1595959962614LLU;

	t23 = ((x117+x118)+(x119%x120));

	if (t23 != 9223372036854777626LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x122 = 439857391374291LLU;
	int32_t x123 = INT32_MAX;
	int32_t x124 = INT32_MIN;
	uint64_t t24 = 337161824349093264LLU;

	t24 = ((x121+x122)+(x123%x124));

	if (t24 != 445232224932137LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x125 = 297U;
	int64_t x126 = INT64_MIN;
	static uint32_t x127 = 51149346U;
	volatile int16_t x128 = -1;
	volatile int64_t t25 = 335LL;

	t25 = ((x125+x126)+(x127%x128));

	if (t25 != -9223372036803626165LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x129 = -1LL;
	static int32_t x130 = 725220861;
	volatile uint8_t x131 = 11U;
	static int64_t t26 = -12538095467LL;

	t26 = ((x129+x130)+(x131%x132));

	if (t26 != 725220871LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x133 = UINT64_MAX;
	volatile int8_t x134 = -1;
	uint8_t x135 = UINT8_MAX;
	static int64_t x136 = -75144601751924LL;
	volatile uint64_t t27 = 120891407700448154LLU;

	t27 = ((x133+x134)+(x135%x136));

	if (t27 != 253LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x138 = INT32_MIN;
	volatile int64_t x139 = INT64_MAX;
	static int16_t x140 = INT16_MIN;
	volatile int64_t t28 = 521537254LL;

	t28 = ((x137+x138)+(x139%x140));

	if (t28 != -2147418114LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint8_t x141 = 109U;
	int16_t x142 = 97;
	int64_t x143 = 82438LL;
	uint32_t x144 = 1U;
	int64_t t29 = -12371LL;

	t29 = ((x141+x142)+(x143%x144));

	if (t29 != 206LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x145 = -417323474LL;
	int64_t x146 = -25236384160112079LL;
	int64_t x147 = -7081LL;
	static int16_t x148 = -9;
	static int64_t t30 = -30461586530875LL;

	t30 = ((x145+x146)+(x147%x148));

	if (t30 != -25236384577435560LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x149 = INT8_MIN;
	static int8_t x150 = INT8_MIN;
	uint16_t x151 = 1854U;
	static uint64_t x152 = UINT64_MAX;
	volatile uint64_t t31 = 22790878488407616LLU;

	t31 = ((x149+x150)+(x151%x152));

	if (t31 != 1598LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x157 = INT64_MAX;
	int32_t x158 = -22;
	uint32_t x160 = 724U;
	static int64_t t32 = -1246608663LL;

	t32 = ((x157+x158)+(x159%x160));

	if (t32 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x161 = INT64_MAX;
	volatile int32_t x162 = -1;
	int16_t x163 = 29;
	uint64_t x164 = 2455922308LLU;
	uint64_t t33 = 4237887LLU;

	t33 = ((x161+x162)+(x163%x164));

	if (t33 != 9223372036854775835LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x165 = UINT32_MAX;
	int16_t x166 = INT16_MIN;
	volatile int16_t x167 = INT16_MIN;
	volatile int64_t t34 = 69785426581190745LL;

	t34 = ((x165+x166)+(x167%x168));

	if (t34 != 4294901759LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x170 = -1;
	int32_t x171 = INT32_MAX;
	static int8_t x172 = -1;
	volatile int32_t t35 = 125;

	t35 = ((x169+x170)+(x171%x172));

	if (t35 != 254) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x177 = INT8_MIN;
	uint32_t x178 = UINT32_MAX;
	volatile uint64_t x179 = 3560LLU;
	static int8_t x180 = INT8_MIN;
	uint64_t t36 = 103885001275412857LLU;

	t36 = ((x177+x178)+(x179%x180));

	if (t36 != 4294970727LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x181 = -30;
	uint8_t x182 = UINT8_MAX;
	int8_t x183 = INT8_MIN;
	volatile uint64_t x184 = UINT64_MAX;
	volatile uint64_t t37 = 22536246396769LLU;

	t37 = ((x181+x182)+(x183%x184));

	if (t37 != 97LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x186 = 1U;
	static int16_t x187 = INT16_MAX;
	static volatile int16_t x188 = INT16_MAX;
	int64_t t38 = -26428834036LL;

	t38 = ((x185+x186)+(x187%x188));

	if (t38 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x189 = 16132554U;
	int64_t x190 = INT64_MIN;
	int32_t x191 = INT32_MIN;
	static int8_t x192 = 1;
	volatile int64_t t39 = -4081LL;

	t39 = ((x189+x190)+(x191%x192));

	if (t39 != -9223372036838643254LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x194 = -1;
	uint32_t x195 = 916U;
	uint32_t x196 = UINT32_MAX;
	uint32_t t40 = 255U;

	t40 = ((x193+x194)+(x195%x196));

	if (t40 != 4294935443U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x201 = 3981U;
	int16_t x202 = INT16_MIN;
	volatile uint32_t t41 = 21217315U;

	t41 = ((x201+x202)+(x203%x204));

	if (t41 != 5543471U) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x209 = 5841LLU;
	uint64_t x210 = 886633742310891561LLU;
	int8_t x211 = INT8_MIN;
	volatile int32_t x212 = -1;
	volatile uint64_t t42 = 10012LLU;

	t42 = ((x209+x210)+(x211%x212));

	if (t42 != 886633742310897402LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x213 = INT64_MIN;
	int32_t x214 = 1;
	uint32_t x215 = 12889U;
	int64_t t43 = -1728611633422450942LL;

	t43 = ((x213+x214)+(x215%x216));

	if (t43 != -9223372036854762918LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x221 = 26670208LLU;
	uint8_t x223 = 6U;
	uint8_t x224 = UINT8_MAX;

	t44 = ((x221+x222)+(x223%x224));

	if (t44 != 26669829LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x225 = 4609U;
	int32_t x226 = 1924751;
	int64_t x227 = -1LL;
	int8_t x228 = INT8_MIN;

	t45 = ((x225+x226)+(x227%x228));

	if (t45 != 1929359LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x233 = INT8_MAX;
	uint64_t x234 = UINT64_MAX;
	static uint16_t x235 = 22U;
	uint32_t x236 = 12U;
	volatile uint64_t t46 = 1051113529LLU;

	t46 = ((x233+x234)+(x235%x236));

	if (t46 != 136LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x238 = INT8_MIN;
	uint32_t x239 = 159U;
	uint32_t x240 = 49U;

	t47 = ((x237+x238)+(x239%x240));

	if (t47 != 2147483531U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x241 = UINT16_MAX;
	uint32_t x242 = 80955765U;
	volatile int64_t x243 = INT64_MIN;
	int32_t x244 = 1;

	t48 = ((x241+x242)+(x243%x244));

	if (t48 != 81021300LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x245 = 12995U;
	static int16_t x247 = 116;
	uint64_t t49 = 4129758371975LLU;

	t49 = ((x245+x246)+(x247%x248));

	if (t49 != 13112LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x249 = 330522991U;
	int16_t x250 = -1;
	int64_t x251 = INT64_MIN;
	int64_t t50 = 248266847798488LL;

	t50 = ((x249+x250)+(x251%x252));

	if (t50 != 330522990LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x253 = 1801U;
	int16_t x254 = INT16_MAX;
	uint64_t x255 = UINT64_MAX;
	int16_t x256 = INT16_MAX;
	uint64_t t51 = 6301LLU;

	t51 = ((x253+x254)+(x255%x256));

	if (t51 != 34583LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x257 = 1039551356U;
	int8_t x258 = -12;
	static int64_t x259 = 4LL;
	uint16_t x260 = 1127U;
	int64_t t52 = -10201501LL;

	t52 = ((x257+x258)+(x259%x260));

	if (t52 != 1039551348LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x261 = INT32_MIN;
	volatile int32_t x262 = 12844;
	int32_t x263 = -779080631;

	t53 = ((x261+x262)+(x263%x264));

	if (t53 != -2926551435LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x265 = INT32_MIN;
	int64_t x266 = 283819958093785332LL;
	uint8_t x267 = 26U;
	static int16_t x268 = -815;
	static volatile int64_t t54 = 396449505929LL;

	t54 = ((x265+x266)+(x267%x268));

	if (t54 != 283819955946301710LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x269 = UINT64_MAX;
	int64_t x270 = 4857896LL;
	int16_t x272 = 17;
	volatile uint64_t t55 = 13878464LLU;

	t55 = ((x269+x270)+(x271%x272));

	if (t55 != 4857895LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x273 = -1;
	uint64_t x274 = 89165085465974680LLU;
	int16_t x275 = -1;
	static int8_t x276 = INT8_MIN;

	t56 = ((x273+x274)+(x275%x276));

	if (t56 != 89165085465974678LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x281 = UINT16_MAX;
	volatile int8_t x283 = 5;
	int64_t x284 = -97LL;

	t57 = ((x281+x282)+(x283%x284));

	if (t57 != 26366144270942583LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x287 = -1;
	uint64_t x288 = 22262312LLU;

	t58 = ((x285+x286)+(x287%x288));

	if (t58 != 15343920LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x289 = 2151451153888916101LL;
	int16_t x290 = 0;
	volatile int8_t x291 = INT8_MIN;
	static volatile int32_t x292 = -1;

	t59 = ((x289+x290)+(x291%x292));

	if (t59 != 2151451153888916101LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x293 = 7883665;
	int32_t x294 = INT32_MIN;
	volatile uint64_t t60 = 148LLU;

	t60 = ((x293+x294)+(x295%x296));

	if (t60 != 18446744071617226222LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x297 = -1056576;
	uint16_t x298 = 19U;
	int32_t x299 = 26019;
	int16_t x300 = -1;

	t61 = ((x297+x298)+(x299%x300));

	if (t61 != -1056557) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x301 = UINT8_MAX;
	volatile int64_t x302 = 840748571LL;
	uint8_t x303 = UINT8_MAX;
	uint8_t x304 = UINT8_MAX;
	int64_t t62 = -669348141LL;

	t62 = ((x301+x302)+(x303%x304));

	if (t62 != 840748826LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x305 = UINT64_MAX;
	int64_t x307 = -4074730414962505652LL;
	int8_t x308 = -1;
	volatile uint64_t t63 = 5926369966179LLU;

	t63 = ((x305+x306)+(x307%x308));

	if (t63 != 6664735LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x309 = INT8_MAX;
	static volatile uint32_t x311 = 12U;
	uint8_t x312 = 69U;
	uint32_t t64 = 137808748U;

	t64 = ((x309+x310)+(x311%x312));

	if (t64 != 143U) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x314 = -296952;
	volatile int8_t x315 = -1;
	volatile int32_t x316 = 25967;
	int64_t t65 = -6492884388LL;

	t65 = ((x313+x314)+(x315%x316));

	if (t65 != 331499LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x318 = -1;
	int64_t x319 = -1LL;
	static volatile int32_t x320 = INT32_MIN;
	int64_t t66 = 10LL;

	t66 = ((x317+x318)+(x319%x320));

	if (t66 != 4952287LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x321 = INT32_MIN;
	volatile uint16_t x323 = 22U;
	uint16_t x324 = UINT16_MAX;
	volatile uint64_t t67 = 121LLU;

	t67 = ((x321+x322)+(x323%x324));

	if (t67 != 35575529295LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x325 = INT8_MIN;
	uint16_t x326 = 1976U;
	int64_t x327 = INT64_MAX;
	int64_t x328 = 25483998058181LL;
	static int64_t t68 = 14661LL;

	t68 = ((x325+x326)+(x327%x328));

	if (t68 != 25071651502868LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x333 = 124U;
	uint16_t x334 = 1210U;
	int8_t x335 = INT8_MIN;
	static volatile uint8_t x336 = UINT8_MAX;
	int32_t t69 = 907108359;

	t69 = ((x333+x334)+(x335%x336));

	if (t69 != 1206) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x337 = -1;
	volatile int64_t x338 = INT64_MAX;
	static int32_t x340 = 1425;
	static int64_t t70 = 49622785843333113LL;

	t70 = ((x337+x338)+(x339%x340));

	if (t70 != 9223372036854774388LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x341 = 6114U;
	int64_t x342 = -1LL;
	static int64_t x344 = 2045694475LL;
	int64_t t71 = 300921144LL;

	t71 = ((x341+x342)+(x343%x344));

	if (t71 != -26655LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x346 = INT16_MIN;
	static volatile int16_t x347 = -1;
	volatile int16_t x348 = -1;
	volatile uint64_t t72 = 9702219822272705LLU;

	t72 = ((x345+x346)+(x347%x348));

	if (t72 != 1935791038129LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x350 = 10U;
	volatile int16_t x351 = INT16_MIN;
	uint8_t x352 = 1U;
	volatile uint32_t t73 = 7758702U;

	t73 = ((x349+x350)+(x351%x352));

	if (t73 != 11719954U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x353 = 292428730877176215LLU;
	volatile int64_t x354 = -3761LL;
	static int8_t x355 = INT8_MIN;
	static int64_t x356 = 996806039564529LL;
	volatile uint64_t t74 = 17LLU;

	t74 = ((x353+x354)+(x355%x356));

	if (t74 != 292428730877172326LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x357 = INT32_MIN;
	int16_t x358 = INT16_MAX;
	static int8_t x359 = -10;
	int64_t x360 = INT64_MIN;
	volatile int64_t t75 = 16780528954652755LL;

	t75 = ((x357+x358)+(x359%x360));

	if (t75 != -2147450891LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x361 = INT16_MAX;
	static int64_t x362 = 1145978345LL;
	int8_t x363 = INT8_MAX;
	volatile int32_t x364 = -1;
	volatile int64_t t76 = -7728872LL;

	t76 = ((x361+x362)+(x363%x364));

	if (t76 != 1146011112LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x365 = 891LLU;
	int16_t x366 = -1;
	static volatile int32_t x368 = INT32_MIN;
	uint64_t t77 = 485372504LLU;

	t77 = ((x365+x366)+(x367%x368));

	if (t77 != 87280LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x369 = 2LLU;
	static int64_t x370 = INT64_MIN;
	uint32_t x371 = 66917U;
	volatile uint64_t t78 = 1028197LLU;

	t78 = ((x369+x370)+(x371%x372));

	if (t78 != 9223372036854775847LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x373 = 15974653199LL;
	uint64_t x374 = UINT64_MAX;
	int8_t x375 = INT8_MAX;
	uint64_t x376 = 233739988015917LLU;
	uint64_t t79 = 3538354194496147LLU;

	t79 = ((x373+x374)+(x375%x376));

	if (t79 != 15974653325LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x377 = 10811U;
	int32_t x378 = -1;
	uint16_t x379 = 5506U;
	static int16_t x380 = -1;
	volatile int32_t t80 = -1467323;

	t80 = ((x377+x378)+(x379%x380));

	if (t80 != 10810) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x381 = INT16_MAX;
	volatile uint16_t x382 = UINT16_MAX;
	int64_t x384 = INT64_MAX;
	volatile int64_t t81 = -524847408LL;

	t81 = ((x381+x382)+(x383%x384));

	if (t81 != 98326LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x385 = INT8_MAX;
	int32_t x386 = 5125953;
	static volatile int16_t x387 = -69;
	static int16_t x388 = 798;
	static volatile int32_t t82 = -861;

	t82 = ((x385+x386)+(x387%x388));

	if (t82 != 5126011) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x389 = 1969966667823LLU;
	uint64_t x390 = 257510460LLU;
	uint16_t x391 = UINT16_MAX;
	uint16_t x392 = UINT16_MAX;
	volatile uint64_t t83 = 2680871947994538LLU;

	t83 = ((x389+x390)+(x391%x392));

	if (t83 != 1970224178283LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x393 = UINT32_MAX;
	int32_t x395 = 1;
	uint64_t x396 = 9952378926LLU;

	t84 = ((x393+x394)+(x395%x396));

	if (t84 != 2147483648LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x399 = INT8_MIN;
	volatile int16_t x400 = -1;
	uint64_t t85 = 39089936585LLU;

	t85 = ((x397+x398)+(x399%x400));

	if (t85 != 63056590294193LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x401 = 19550754529526496LL;
	uint32_t x403 = 53061U;
	int8_t x404 = INT8_MIN;
	volatile int64_t t86 = -3704LL;

	t86 = ((x401+x402)+(x403%x404));

	if (t86 != 19550758824546852LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x409 = 109446U;
	int64_t x410 = 6973630565220LL;
	int32_t x411 = -1;
	int32_t x412 = INT32_MIN;

	t87 = ((x409+x410)+(x411%x412));

	if (t87 != 6973630674665LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x414 = -1;
	int64_t t88 = 2328835702632845LL;

	t88 = ((x413+x414)+(x415%x416));

	if (t88 != 28974LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x421 = 2810;
	static int8_t x422 = INT8_MIN;
	uint8_t x423 = 106U;
	static uint64_t x424 = 5348449LLU;
	volatile uint64_t t89 = 1889361095972094LLU;

	t89 = ((x421+x422)+(x423%x424));

	if (t89 != 2788LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x426 = 1668U;
	static int64_t t90 = -1853689507589LL;

	t90 = ((x425+x426)+(x427%x428));

	if (t90 != -31095LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x429 = INT8_MAX;
	int8_t x431 = 2;
	uint32_t x432 = UINT32_MAX;
	volatile uint32_t t91 = 3166384U;

	t91 = ((x429+x430)+(x431%x432));

	if (t91 != 65664U) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x433 = 6873;
	int8_t x434 = INT8_MIN;
	int64_t x435 = INT64_MIN;
	int8_t x436 = -1;
	int64_t t92 = -11845029227252LL;

	t92 = ((x433+x434)+(x435%x436));

	if (t92 != 6745LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x437 = 953LLU;
	static uint8_t x438 = UINT8_MAX;
	int32_t x439 = INT32_MAX;
	volatile int32_t x440 = -1;

	t93 = ((x437+x438)+(x439%x440));

	if (t93 != 1208LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x441 = INT8_MAX;
	int8_t x442 = 0;
	uint64_t x444 = UINT64_MAX;
	uint64_t t94 = 232LLU;

	t94 = ((x441+x442)+(x443%x444));

	if (t94 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x445 = 512;
	uint64_t x446 = UINT64_MAX;
	int8_t x447 = -1;
	static int16_t x448 = -1;
	static uint64_t t95 = 511LLU;

	t95 = ((x445+x446)+(x447%x448));

	if (t95 != 511LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x453 = 17343000998538064LLU;
	int16_t x454 = -13;
	int8_t x455 = INT8_MIN;
	static int16_t x456 = -1;
	uint64_t t96 = 236611686139392951LLU;

	t96 = ((x453+x454)+(x455%x456));

	if (t96 != 17343000998538051LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x457 = INT16_MIN;
	uint64_t x458 = 17LLU;
	volatile uint32_t x460 = 146267U;
	static uint64_t t97 = 16LLU;

	t97 = ((x457+x458)+(x459%x460));

	if (t97 != 73555LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x466 = -1;
	uint8_t x467 = UINT8_MAX;
	static int32_t t98 = -984876112;

	t98 = ((x465+x466)+(x467%x468));

	if (t98 != -129) { NG(); } else { ; }
	
}

void f99(void) {
	static uint32_t x477 = UINT32_MAX;
	uint8_t x478 = 1U;
	volatile uint32_t x479 = 223069U;
	volatile uint32_t t99 = 4U;

	t99 = ((x477+x478)+(x479%x480));

	if (t99 != 223069U) { NG(); } else { ; }
	
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

