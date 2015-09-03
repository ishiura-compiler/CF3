#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t2 = 17410U;
int64_t t3 = -519160497214301LL;
volatile int8_t x24 = INT8_MAX;
int32_t x26 = INT32_MAX;
volatile int64_t t5 = 117245398278LL;
int8_t x31 = INT8_MIN;
volatile uint64_t t6 = 457323LLU;
static int32_t x37 = -330722;
static uint32_t x42 = UINT32_MAX;
int32_t x44 = INT32_MIN;
uint16_t x49 = 254U;
uint8_t x51 = UINT8_MAX;
static volatile uint64_t t12 = 2192LLU;
uint16_t x62 = 15U;
volatile uint32_t x64 = 29816388U;
volatile uint32_t t13 = 122045U;
static int16_t x76 = INT16_MIN;
static volatile int32_t x91 = INT32_MIN;
int64_t x92 = INT64_MIN;
static int64_t x134 = INT64_MIN;
volatile uint64_t x135 = 1824904LLU;
static volatile uint32_t t29 = 2382U;
static volatile int64_t x143 = 5306674LL;
static uint16_t x148 = 566U;
static volatile uint8_t x151 = 0U;
int64_t x154 = 678488634LL;
static int64_t x156 = INT64_MIN;
volatile int64_t t33 = 476338111LL;
int64_t x167 = INT64_MAX;
uint8_t x168 = 1U;
int8_t x169 = INT8_MIN;
static int8_t x170 = 1;
static uint16_t x171 = UINT16_MAX;
static uint32_t t36 = 478183980U;
uint32_t x180 = UINT32_MAX;
int16_t x184 = INT16_MAX;
uint16_t x190 = 21U;
volatile uint64_t t40 = 1301130517240LLU;
uint16_t x205 = UINT16_MAX;
int32_t t41 = 434;
volatile uint32_t t42 = 1942U;
volatile uint16_t x217 = 1U;
int16_t x228 = 1705;
static volatile int16_t x229 = -1599;
uint8_t x232 = 13U;
uint32_t x235 = 1U;
static volatile int16_t x254 = INT16_MIN;
uint8_t x255 = UINT8_MAX;
int8_t x259 = INT8_MIN;
static uint64_t x268 = 5367056487410534LLU;
int16_t x285 = -1;
uint32_t x295 = 744959U;
volatile uint64_t t60 = 7885352654460706LLU;
uint64_t x299 = 231003409955LLU;
int16_t x308 = 183;
int32_t x313 = -3186;
static int64_t x315 = 3363LL;
int64_t t64 = 8998503LL;
uint16_t x321 = UINT16_MAX;
static uint16_t x323 = UINT16_MAX;
volatile int8_t x327 = -1;
uint16_t x343 = 3092U;
uint64_t x346 = 135823490LLU;
volatile uint64_t t70 = 515140229829LLU;
int8_t x349 = 15;
static volatile uint64_t x351 = UINT64_MAX;
int16_t x358 = INT16_MIN;
volatile int64_t x367 = -12166943592602LL;
volatile uint32_t x374 = 4125925U;
uint32_t t75 = 16547965U;
volatile int32_t x380 = -1;
static int8_t x381 = INT8_MIN;
int8_t x382 = 1;
int8_t x390 = INT8_MAX;
volatile uint16_t x392 = UINT16_MAX;
volatile int32_t t78 = -399535973;
static int64_t x393 = -1LL;
int64_t x396 = -1LL;
static int64_t t79 = -906099LL;
int16_t x401 = INT16_MIN;
int64_t x406 = 1LL;
static int64_t t81 = -54528474714LL;
uint8_t x409 = 2U;
uint64_t x410 = 1464911516LLU;
int16_t x412 = 287;
uint8_t x415 = 64U;
volatile uint64_t t83 = 913840741200492191LLU;
static volatile uint16_t x425 = 1U;
static volatile int64_t t85 = -503LL;
uint64_t x436 = 2862455833101LLU;
static volatile uint32_t t88 = 354654U;
static uint16_t x457 = UINT16_MAX;
int64_t t90 = -240927156737LL;
int32_t t92 = 94617;
static int16_t x484 = INT16_MIN;
uint16_t x488 = UINT16_MAX;
static uint16_t x510 = 158U;
uint16_t x511 = 1U;
static int32_t t98 = -108;
volatile int16_t x516 = -1;


void f0(void) {
	int8_t x5 = INT8_MAX;
	int8_t x6 = INT8_MAX;
	int64_t x7 = -4183325324609970115LL;
	int8_t x8 = INT8_MAX;
	volatile int64_t t0 = 284164494752722992LL;

	t0 = (x5*((x6+x7)%x8));

	if (t0 != -14859LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = -255348;
	uint8_t x10 = 0U;
	uint8_t x11 = UINT8_MAX;
	static volatile int64_t x12 = INT64_MAX;
	volatile int64_t t1 = 3375673580782LL;

	t1 = (x9*((x10+x11)%x12));

	if (t1 != -65113740LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 1124U;
	static uint8_t x14 = UINT8_MAX;
	static uint8_t x15 = 2U;
	uint32_t x16 = 4091U;

	t2 = (x13*((x14+x15)%x16));

	if (t2 != 288868U) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x17 = INT16_MIN;
	int8_t x18 = INT8_MAX;
	int8_t x19 = -1;
	volatile int64_t x20 = -83921LL;

	t3 = (x17*((x18+x19)%x20));

	if (t3 != -4128768LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x21 = INT8_MIN;
	uint16_t x22 = UINT16_MAX;
	volatile uint8_t x23 = UINT8_MAX;
	int32_t t4 = -2483;

	t4 = (x21*((x22+x23)%x24));

	if (t4 != -512) { NG(); } else { ; }
	
}

void f5(void) {
	static uint32_t x25 = UINT32_MAX;
	static int64_t x27 = -57821749882546LL;
	uint16_t x28 = 15495U;

	t5 = (x25*((x26+x27)%x28));

	if (t5 != -56216826924255LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x29 = 4666581738577LLU;
	uint32_t x30 = UINT32_MAX;
	int8_t x32 = INT8_MIN;

	t6 = (x29*((x30+x31)%x32));

	if (t6 != 9651285261419246383LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	int8_t x34 = -1;
	static uint64_t x35 = 2023LLU;
	static volatile int8_t x36 = 2;
	static uint64_t t7 = 113268590LLU;

	t7 = (x33*((x34+x35)%x36));

	if (t7 != 0LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x38 = INT16_MIN;
	int32_t x39 = -1;
	int16_t x40 = -15178;
	int32_t t8 = -2;

	t8 = (x37*((x38+x39)%x40));

	if (t8 != 798032186) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = 114LL;
	volatile int8_t x43 = 1;
	volatile int64_t t9 = -486023LL;

	t9 = (x41*((x42+x43)%x44));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x45 = -1LL;
	static uint64_t x46 = 490LLU;
	int16_t x47 = INT16_MAX;
	int64_t x48 = -1LL;
	volatile uint64_t t10 = 7354986601189563LLU;

	t10 = (x45*((x46+x47)%x48));

	if (t10 != 18446744073709518359LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x50 = -30723817710LL;
	static uint64_t x52 = UINT64_MAX;
	static uint64_t t11 = 4019931204637619079LLU;

	t11 = (x49*((x50+x51)%x52));

	if (t11 != 18446736269859918046LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x57 = UINT64_MAX;
	static volatile int16_t x58 = INT16_MAX;
	uint16_t x59 = 96U;
	static int32_t x60 = INT32_MAX;

	t12 = (x57*((x58+x59)%x60));

	if (t12 != 18446744073709518753LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x61 = 78;
	int8_t x63 = -1;

	t13 = (x61*((x62+x63)%x64));

	if (t13 != 1092U) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x65 = UINT8_MAX;
	uint64_t x66 = UINT64_MAX;
	volatile int8_t x67 = INT8_MIN;
	uint16_t x68 = UINT16_MAX;
	volatile uint64_t t14 = 285490507287716LLU;

	t14 = (x65*((x66+x67)%x68));

	if (t14 != 16678785LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = INT8_MIN;
	volatile uint64_t x70 = 4LLU;
	int64_t x71 = INT64_MIN;
	int16_t x72 = -5100;
	static volatile uint64_t t15 = 5407704119196LLU;

	t15 = (x69*((x70+x71)%x72));

	if (t15 != 18446744073709551104LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x73 = UINT32_MAX;
	static int64_t x74 = INT64_MIN;
	uint64_t x75 = UINT64_MAX;
	volatile uint64_t t16 = 374577715309023LLU;

	t16 = (x73*((x74+x75)%x76));

	if (t16 != 9223372032559808513LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = 5LL;
	uint32_t x78 = UINT32_MAX;
	uint8_t x79 = 119U;
	int16_t x80 = INT16_MAX;
	int64_t t17 = -724257LL;

	t17 = (x77*((x78+x79)%x80));

	if (t17 != 590LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x81 = -1;
	static int8_t x82 = INT8_MAX;
	int64_t x83 = -1018LL;
	int32_t x84 = INT32_MIN;
	int64_t t18 = 2LL;

	t18 = (x81*((x82+x83)%x84));

	if (t18 != 891LL) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x85 = -4;
	volatile uint32_t x86 = 88292010U;
	int32_t x87 = 25996;
	volatile int64_t x88 = INT64_MAX;
	volatile int64_t t19 = -106945365236LL;

	t19 = (x85*((x86+x87)%x88));

	if (t19 != -353272024LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x89 = UINT8_MAX;
	volatile uint16_t x90 = 5099U;
	volatile int64_t t20 = 916834460461643748LL;

	t20 = (x89*((x90+x91)%x92));

	if (t20 != -547607029995LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint16_t x93 = UINT16_MAX;
	uint64_t x94 = 16763213815877203LLU;
	int64_t x95 = -1LL;
	uint32_t x96 = 102149U;
	volatile uint64_t t21 = 7956937LLU;

	t21 = (x93*((x94+x95)%x96));

	if (t21 != 785436975LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = INT16_MAX;
	uint8_t x102 = 11U;
	volatile int8_t x103 = -1;
	int32_t x104 = -1;
	int32_t t22 = -320039;

	t22 = (x101*((x102+x103)%x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = -1;
	static int64_t x106 = 296379633650268627LL;
	int32_t x107 = INT32_MIN;
	int64_t x108 = -8174953LL;
	static volatile int64_t t23 = -23047089784LL;

	t23 = (x105*((x106+x107)%x108));

	if (t23 != -7122649LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x117 = 3;
	int16_t x118 = -2;
	volatile int8_t x119 = INT8_MIN;
	static int16_t x120 = INT16_MAX;
	int32_t t24 = -1825;

	t24 = (x117*((x118+x119)%x120));

	if (t24 != -390) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x121 = -1;
	int8_t x122 = INT8_MIN;
	static uint8_t x123 = 1U;
	int32_t x124 = 56136;
	volatile int32_t t25 = 543227;

	t25 = (x121*((x122+x123)%x124));

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x125 = -1;
	int16_t x126 = INT16_MIN;
	int32_t x127 = -1;
	static volatile int32_t x128 = -1;
	volatile int32_t t26 = 2532277;

	t26 = (x125*((x126+x127)%x128));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x129 = 103819LLU;
	static volatile int64_t x130 = 4254816839788LL;
	static uint64_t x131 = UINT64_MAX;
	uint16_t x132 = UINT16_MAX;
	volatile uint64_t t27 = 2225284752413LLU;

	t27 = (x129*((x130+x131)%x132));

	if (t27 != 2209475958LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x133 = -1LL;
	uint64_t x136 = 1934044685002LLU;
	static volatile uint64_t t28 = 2393274415118713108LLU;

	t28 = (x133*((x134+x135)%x136));

	if (t28 != 18446742173571978812LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int16_t x137 = 7815;
	int32_t x138 = 215877129;
	uint32_t x139 = UINT32_MAX;
	int8_t x140 = 30;

	t29 = (x137*((x138+x139)%x140));

	if (t29 != 62520U) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x141 = -1;
	int32_t x142 = 639;
	static int64_t x144 = INT64_MAX;
	volatile int64_t t30 = -2942LL;

	t30 = (x141*((x142+x143)%x144));

	if (t30 != -5307313LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x145 = UINT64_MAX;
	int8_t x146 = 43;
	uint8_t x147 = 92U;
	static volatile uint64_t t31 = 174465530LLU;

	t31 = (x145*((x146+x147)%x148));

	if (t31 != 18446744073709551481LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x149 = -1;
	int8_t x150 = INT8_MIN;
	static int64_t x152 = INT64_MAX;
	int64_t t32 = 1640592100810829LL;

	t32 = (x149*((x150+x151)%x152));

	if (t32 != 128LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x153 = INT8_MIN;
	static uint32_t x155 = 49U;

	t33 = (x153*((x154+x155)%x156));

	if (t33 != -86846551424LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x161 = UINT32_MAX;
	int64_t x162 = INT64_MIN;
	static uint16_t x163 = 1U;
	volatile int32_t x164 = INT32_MAX;
	static int64_t t34 = 28582378194LL;

	t34 = (x161*((x162+x163)%x164));

	if (t34 != -4294967295LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x165 = UINT16_MAX;
	int64_t x166 = -1LL;
	static int64_t t35 = -848030600392LL;

	t35 = (x165*((x166+x167)%x168));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x172 = 16839888U;

	t36 = (x169*((x170+x171)%x172));

	if (t36 != 4286578688U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x177 = 4U;
	int16_t x178 = -1;
	volatile int16_t x179 = INT16_MIN;
	static uint32_t t37 = 25U;

	t37 = (x177*((x178+x179)%x180));

	if (t37 != 4294836220U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x181 = INT8_MIN;
	int8_t x182 = -1;
	static volatile int8_t x183 = -1;
	int32_t t38 = 16;

	t38 = (x181*((x182+x183)%x184));

	if (t38 != 256) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x185 = INT32_MAX;
	int16_t x186 = -50;
	int8_t x187 = -1;
	int64_t x188 = 656107926750711LL;
	int64_t t39 = -338320996409LL;

	t39 = (x185*((x186+x187)%x188));

	if (t39 != -109521665997LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x189 = UINT64_MAX;
	int64_t x191 = 8556797480146840LL;
	uint16_t x192 = 13877U;

	t40 = (x189*((x190+x191)%x192));

	if (t40 != 18446744073709544365LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x206 = -1;
	int8_t x207 = INT8_MIN;
	static int32_t x208 = INT32_MIN;

	t41 = (x205*((x206+x207)%x208));

	if (t41 != -8454015) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x209 = UINT8_MAX;
	volatile int8_t x210 = INT8_MIN;
	int16_t x211 = INT16_MAX;
	uint32_t x212 = 887U;

	t42 = (x209*((x210+x211)%x212));

	if (t42 != 180285U) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x213 = INT16_MAX;
	int8_t x214 = -1;
	static uint64_t x215 = UINT64_MAX;
	uint64_t x216 = UINT64_MAX;
	static uint64_t t43 = 570032LLU;

	t43 = (x213*((x214+x215)%x216));

	if (t43 != 18446744073709486082LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x218 = INT32_MAX;
	int16_t x219 = INT16_MIN;
	volatile uint8_t x220 = 11U;
	int32_t t44 = 71842;

	t44 = (x217*((x218+x219)%x220));

	if (t44 != 2) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x225 = UINT16_MAX;
	static volatile uint16_t x226 = 1430U;
	int64_t x227 = INT64_MIN;
	int64_t t45 = -1067325625982LL;

	t45 = (x225*((x226+x227)%x228));

	if (t45 != -18546405LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x230 = 3564U;
	uint64_t x231 = 115000208871257858LLU;
	uint64_t t46 = 5551898951483165898LLU;

	t46 = (x229*((x230+x231)%x232));

	if (t46 != 18446744073709540423LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x233 = INT32_MAX;
	int8_t x234 = -1;
	int32_t x236 = INT32_MIN;
	uint32_t t47 = 1U;

	t47 = (x233*((x234+x235)%x236));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x237 = 27U;
	int16_t x238 = INT16_MIN;
	int8_t x239 = -1;
	volatile uint8_t x240 = 7U;
	volatile int32_t t48 = -20434;

	t48 = (x237*((x238+x239)%x240));

	if (t48 != -54) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x241 = INT32_MIN;
	uint16_t x242 = 3U;
	static volatile int64_t x243 = -120982LL;
	uint16_t x244 = 2U;
	static int64_t t49 = 9427167LL;

	t49 = (x241*((x242+x243)%x244));

	if (t49 != 2147483648LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x245 = INT16_MAX;
	int16_t x246 = INT16_MIN;
	uint16_t x247 = 15841U;
	uint64_t x248 = UINT64_MAX;
	uint64_t t50 = 1595967026497615LLU;

	t50 = (x245*((x246+x247)%x248));

	if (t50 != 18446744073154904607LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x249 = -1LL;
	uint16_t x250 = UINT16_MAX;
	int64_t x251 = INT64_MIN;
	volatile int64_t x252 = INT64_MIN;
	volatile int64_t t51 = -313883932402287LL;

	t51 = (x249*((x250+x251)%x252));

	if (t51 != 9223372036854710273LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x253 = -1;
	uint8_t x256 = UINT8_MAX;
	int32_t t52 = 678494221;

	t52 = (x253*((x254+x255)%x256));

	if (t52 != 128) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x257 = 785992015979319494LLU;
	uint32_t x258 = UINT32_MAX;
	volatile uint16_t x260 = 28U;
	volatile uint64_t t53 = 1743786611441736LLU;

	t53 = (x257*((x258+x259)%x260));

	if (t53 != 11789880239689792410LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x261 = UINT32_MAX;
	static uint64_t x262 = 8LLU;
	volatile int64_t x263 = 8LL;
	uint32_t x264 = 440617U;
	volatile uint64_t t54 = 6173889581324446446LLU;

	t54 = (x261*((x262+x263)%x264));

	if (t54 != 68719476720LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x265 = 244206LLU;
	int32_t x266 = INT32_MIN;
	int8_t x267 = INT8_MAX;
	uint64_t t55 = 5184090084262011957LLU;

	t55 = (x265*((x266+x267)%x268));

	if (t55 != 4847259288293648590LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x269 = 1U;
	int64_t x270 = INT64_MAX;
	static int8_t x271 = INT8_MIN;
	static uint64_t x272 = 7135169186LLU;
	uint64_t t56 = 11LLU;

	t56 = (x269*((x270+x271)%x272));

	if (t56 != 5845460023LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x277 = UINT64_MAX;
	static int8_t x278 = INT8_MAX;
	static int32_t x279 = INT32_MIN;
	static int8_t x280 = INT8_MIN;
	volatile uint64_t t57 = 6953LLU;

	t57 = (x277*((x278+x279)%x280));

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x281 = -8;
	int64_t x282 = -1LL;
	uint64_t x283 = 2567599LLU;
	volatile uint8_t x284 = UINT8_MAX;
	uint64_t t58 = 562472LLU;

	t58 = (x281*((x282+x283)%x284));

	if (t58 != 18446744073709551592LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x286 = 1U;
	volatile int64_t x287 = INT64_MIN;
	volatile uint32_t x288 = 259318064U;
	static volatile int64_t t59 = 53370034019520LL;

	t59 = (x285*((x286+x287)%x288));

	if (t59 != 46030591LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x293 = 1438667LLU;
	uint64_t x294 = 138628043235671488LLU;
	volatile uint32_t x296 = UINT32_MAX;

	t60 = (x293*((x294+x295)%x296));

	if (t60 != 3353521162641309LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x297 = INT16_MAX;
	int64_t x298 = INT64_MIN;
	int16_t x300 = INT16_MIN;
	volatile uint64_t t61 = 25638607LLU;

	t61 = (x297*((x298+x299)%x300));

	if (t61 != 9230941325588771293LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x301 = 958LLU;
	static int8_t x302 = INT8_MIN;
	static int16_t x303 = INT16_MAX;
	int64_t x304 = -1LL;
	volatile uint64_t t62 = 78920424LLU;

	t62 = (x301*((x302+x303)%x304));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x305 = 2U;
	volatile int8_t x306 = -1;
	volatile int64_t x307 = INT64_MAX;
	static int64_t t63 = 58123865922127LL;

	t63 = (x305*((x306+x307)%x308));

	if (t63 != 12LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x314 = UINT8_MAX;
	int8_t x316 = 51;

	t64 = (x313*((x314+x315)%x316));

	if (t64 != -152928LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x317 = 2565313252LLU;
	uint32_t x318 = 9U;
	int32_t x319 = -1;
	static int32_t x320 = INT32_MIN;
	uint64_t t65 = 83481873374043LLU;

	t65 = (x317*((x318+x319)%x320));

	if (t65 != 20522506016LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x322 = INT16_MIN;
	int8_t x324 = -1;
	int32_t t66 = -4345761;

	t66 = (x321*((x322+x323)%x324));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x325 = UINT8_MAX;
	int32_t x326 = INT32_MAX;
	static int8_t x328 = INT8_MIN;
	volatile int32_t t67 = -10280;

	t67 = (x325*((x326+x327)%x328));

	if (t67 != 32130) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x337 = 0;
	int32_t x338 = -1;
	static int32_t x339 = -1;
	int64_t x340 = -1LL;
	volatile int64_t t68 = 37964823184904LL;

	t68 = (x337*((x338+x339)%x340));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x341 = INT8_MIN;
	int8_t x342 = INT8_MIN;
	static int8_t x344 = INT8_MIN;
	int32_t t69 = -103227453;

	t69 = (x341*((x342+x343)%x344));

	if (t69 != -2560) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x345 = INT16_MAX;
	int16_t x347 = INT16_MIN;
	volatile uint16_t x348 = UINT16_MAX;

	t70 = (x345*((x346+x347)%x348));

	if (t70 != 72152934LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x350 = INT16_MIN;
	volatile int32_t x352 = -230000;
	uint64_t t71 = 1290LLU;

	t71 = (x349*((x350+x351)%x352));

	if (t71 != 2958465LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x357 = 61348U;
	int32_t x359 = -1;
	int16_t x360 = INT16_MIN;
	volatile uint32_t t72 = 53413187U;

	t72 = (x357*((x358+x359)%x360));

	if (t72 != 4294905948U) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x361 = -8;
	int64_t x362 = 2083459664109LL;
	static uint32_t x363 = 6243U;
	int16_t x364 = INT16_MAX;
	static int64_t t73 = 1045419LL;

	t73 = (x361*((x362+x363)%x364));

	if (t73 != -181528LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x365 = INT32_MIN;
	int16_t x366 = 56;
	uint32_t x368 = 245U;
	int64_t t74 = 3LL;

	t74 = (x365*((x366+x367)%x368));

	if (t74 != 152471339008LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x373 = -616;
	int16_t x375 = -1;
	int8_t x376 = INT8_MAX;

	t75 = (x373*((x374+x375)%x376));

	if (t75 != 4294921096U) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x377 = -1;
	static volatile int64_t x378 = INT64_MIN;
	volatile int16_t x379 = 1;
	volatile int64_t t76 = -599538516174LL;

	t76 = (x377*((x378+x379)%x380));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x383 = -56;
	int16_t x384 = -1257;
	static volatile int32_t t77 = 0;

	t77 = (x381*((x382+x383)%x384));

	if (t77 != 7040) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x389 = INT16_MAX;
	volatile int16_t x391 = -1;

	t78 = (x389*((x390+x391)%x392));

	if (t78 != 4128642) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x394 = INT16_MIN;
	static uint16_t x395 = 14U;

	t79 = (x393*((x394+x395)%x396));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x402 = -1;
	uint64_t x403 = UINT64_MAX;
	uint16_t x404 = UINT16_MAX;
	volatile uint64_t t80 = 6587085552825411LLU;

	t80 = (x401*((x402+x403)%x404));

	if (t80 != 18446744071562133504LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x405 = UINT16_MAX;
	int8_t x407 = INT8_MIN;
	int8_t x408 = -1;

	t81 = (x405*((x406+x407)%x408));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x411 = INT8_MAX;
	uint64_t t82 = 8269993271120819172LLU;

	t82 = (x409*((x410+x411)%x412));

	if (t82 != 432LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x413 = INT8_MIN;
	volatile int32_t x414 = -1;
	volatile uint64_t x416 = UINT64_MAX;

	t83 = (x413*((x414+x415)%x416));

	if (t83 != 18446744073709543552LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x417 = 1;
	int8_t x418 = -1;
	uint32_t x419 = UINT32_MAX;
	int8_t x420 = -5;
	volatile uint32_t t84 = 522079426U;

	t84 = (x417*((x418+x419)%x420));

	if (t84 != 3U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x426 = INT16_MIN;
	int16_t x427 = INT16_MIN;
	int64_t x428 = INT64_MIN;

	t85 = (x425*((x426+x427)%x428));

	if (t85 != -65536LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x433 = INT64_MIN;
	int64_t x434 = -1LL;
	static int32_t x435 = INT32_MAX;
	volatile uint64_t t86 = 91LLU;

	t86 = (x433*((x434+x435)%x436));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x437 = 28U;
	int8_t x438 = -1;
	int64_t x439 = INT64_MAX;
	int16_t x440 = INT16_MAX;
	volatile int64_t t87 = 1LL;

	t87 = (x437*((x438+x439)%x440));

	if (t87 != 168LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x441 = INT16_MIN;
	volatile int16_t x442 = INT16_MAX;
	uint32_t x443 = 672714U;
	int32_t x444 = -33763672;

	t88 = (x441*((x442+x443)%x444));

	if (t88 != 2652602368U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x449 = 13;
	int32_t x450 = 155033;
	int8_t x451 = INT8_MIN;
	volatile int8_t x452 = INT8_MAX;
	volatile int32_t t89 = 2908;

	t89 = (x449*((x450+x451)%x452));

	if (t89 != 1196) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x458 = 1U;
	int8_t x459 = -41;
	int64_t x460 = -1LL;

	t90 = (x457*((x458+x459)%x460));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x465 = -1LL;
	int64_t x466 = INT64_MAX;
	volatile int32_t x467 = INT32_MIN;
	volatile int16_t x468 = 118;
	volatile int64_t t91 = 5184LL;

	t91 = (x465*((x466+x467)%x468));

	if (t91 != -35LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x477 = -1841318;
	int8_t x478 = 1;
	int32_t x479 = -1142;
	volatile int32_t x480 = INT32_MIN;

	t92 = (x477*((x478+x479)%x480));

	if (t92 != 2100943838) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x481 = -551235758;
	int16_t x482 = 0;
	int64_t x483 = -2LL;
	int64_t t93 = -2LL;

	t93 = (x481*((x482+x483)%x484));

	if (t93 != 1102471516LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x485 = -1;
	static uint8_t x486 = 26U;
	volatile int64_t x487 = 32LL;
	volatile int64_t t94 = -252LL;

	t94 = (x485*((x486+x487)%x488));

	if (t94 != -58LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x489 = UINT32_MAX;
	volatile int64_t x490 = INT64_MIN;
	int16_t x491 = 21;
	uint8_t x492 = 12U;
	static int64_t t95 = 27247831172LL;

	t95 = (x489*((x490+x491)%x492));

	if (t95 != -47244640245LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x493 = 214358494U;
	int8_t x494 = INT8_MIN;
	uint64_t x495 = UINT64_MAX;
	volatile uint32_t x496 = UINT32_MAX;
	static volatile uint64_t t96 = 40LLU;

	t96 = (x493*((x494+x495)%x496));

	if (t96 != 920662693697566498LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x497 = -5;
	static int8_t x498 = -1;
	int64_t x499 = -1LL;
	int8_t x500 = -1;
	volatile int64_t t97 = -87737LL;

	t97 = (x497*((x498+x499)%x500));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x509 = 3911174;
	uint16_t x512 = 14707U;

	t98 = (x509*((x510+x511)%x512));

	if (t98 != 621876666) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x513 = 0U;
	uint16_t x514 = 12484U;
	int8_t x515 = INT8_MIN;
	volatile int32_t t99 = 4;

	t99 = (x513*((x514+x515)%x516));

	if (t99 != 0) { NG(); } else { ; }
	
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

