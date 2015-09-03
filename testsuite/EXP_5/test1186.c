#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x7 = INT64_MIN;
volatile int32_t x10 = 857;
uint32_t t1 = 8U;
uint16_t x16 = 0U;
static volatile int32_t x19 = INT32_MIN;
int32_t x21 = 1;
uint16_t x22 = 4952U;
int64_t x23 = INT64_MIN;
int32_t x30 = -37660197;
int32_t t5 = -511197;
uint64_t x49 = 48022884804LLU;
uint32_t x65 = 1854178U;
int32_t x68 = INT32_MIN;
uint8_t x75 = 2U;
int64_t x76 = -1LL;
uint8_t x78 = 111U;
int16_t x81 = -7251;
static uint32_t x82 = 5U;
static uint8_t x99 = 12U;
static volatile uint32_t x100 = UINT32_MAX;
static int8_t x111 = INT8_MIN;
volatile int8_t x118 = INT8_MIN;
int64_t x124 = 0LL;
volatile int16_t x126 = -128;
volatile int32_t x130 = -1;
int16_t x151 = -1;
int16_t x155 = -1;
volatile int64_t x171 = -1LL;
static uint64_t x183 = UINT64_MAX;
int64_t x188 = -316116457449973LL;
uint64_t t36 = 8513122975LLU;
static volatile uint32_t x208 = 19377U;
static uint32_t t38 = 9039U;
volatile uint32_t x209 = UINT32_MAX;
volatile int64_t x210 = 65855134LL;
volatile int8_t x214 = INT8_MIN;
uint16_t x218 = 189U;
volatile uint8_t x223 = 1U;
int64_t x233 = 75708LL;
int16_t x237 = INT16_MAX;
uint32_t x238 = 1088321U;
static int32_t x263 = INT32_MIN;
uint8_t x264 = 108U;
static int16_t x265 = INT16_MAX;
volatile int16_t x268 = INT16_MAX;
static volatile int32_t t51 = -15;
static int16_t x285 = -1;
uint64_t x288 = 51LLU;
static uint64_t t55 = 489329823291420LLU;
uint32_t x295 = UINT32_MAX;
uint32_t x303 = 63155111U;
volatile int16_t x308 = INT16_MIN;
uint8_t x312 = UINT8_MAX;
uint16_t x314 = 17629U;
volatile int16_t x315 = 2237;
int32_t x316 = 24;
int32_t t61 = 985923998;
uint8_t x320 = 7U;
int32_t t62 = -2158;
uint64_t x326 = 516528230LLU;
int16_t x332 = INT16_MIN;
volatile int8_t x334 = -7;
uint16_t x336 = UINT16_MAX;
volatile int8_t x362 = -59;
uint16_t x365 = UINT16_MAX;
volatile uint8_t x366 = 7U;
static uint8_t x368 = 0U;
volatile uint16_t x371 = 8683U;
static int8_t x373 = 46;
static volatile uint8_t x379 = UINT8_MAX;
static int8_t x381 = -1;
int32_t x385 = INT32_MAX;
int64_t x387 = -1LL;
volatile uint32_t x388 = 91157U;
int16_t x434 = 81;
int32_t t81 = 393563;
volatile int16_t x460 = INT16_MAX;
int32_t t83 = 648;
volatile uint64_t x466 = UINT64_MAX;
int16_t x467 = -12314;
volatile int32_t t85 = -6989030;
uint64_t x479 = 4218376310484467174LLU;
volatile uint16_t x481 = 31604U;
static int16_t x484 = -10224;
int16_t x486 = 1;
int64_t t88 = 22613634LL;
uint64_t x501 = UINT64_MAX;
uint16_t x505 = 0U;
volatile int32_t t91 = 0;
uint64_t t92 = 19LLU;
volatile uint64_t x519 = 5433073589113LLU;
int8_t x526 = INT8_MIN;
int16_t x533 = -1;
uint16_t x535 = 3U;
volatile uint8_t x537 = 1U;
uint8_t x538 = UINT8_MAX;
uint32_t t96 = UINT32_MAX;
volatile uint32_t t98 = 440U;
static int32_t x554 = INT32_MIN;
int32_t t99 = 51660;


void f0(void) {
	static int64_t x5 = -1LL;
	static int64_t x6 = -1LL;
	int32_t x8 = INT32_MIN;
	int64_t t0 = -25LL;

	t0 = (x5*((x6==x7)+x8));

	if (t0 != 2147483648LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = INT32_MAX;
	int32_t x11 = INT32_MIN;
	uint32_t x12 = 245916436U;

	t1 = (x9*((x10==x11)+x12));

	if (t1 != 4049050860U) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x13 = -1LL;
	int32_t x14 = -1;
	int32_t x15 = INT32_MIN;
	static volatile int64_t t2 = -887209LL;

	t2 = (x13*((x14==x15)+x16));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x17 = UINT8_MAX;
	static int8_t x18 = INT8_MIN;
	uint64_t x20 = 971334304474924556LLU;
	uint64_t t3 = 1180749906240LLU;

	t3 = (x17*((x18==x19)+x20));

	if (t3 != 7882574682881590772LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x24 = 222U;
	uint32_t t4 = 119129U;

	t4 = (x21*((x22==x23)+x24));

	if (t4 != 222U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = INT16_MIN;
	volatile uint64_t x31 = 92480577331862718LLU;
	int16_t x32 = 1;

	t5 = (x29*((x30==x31)+x32));

	if (t5 != -32768) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x33 = 4U;
	int32_t x34 = -2;
	int32_t x35 = 1864299;
	int16_t x36 = INT16_MIN;
	volatile int32_t t6 = -911156904;

	t6 = (x33*((x34==x35)+x36));

	if (t6 != -131072) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x50 = 13U;
	uint64_t x51 = 191438096LLU;
	volatile uint8_t x52 = UINT8_MAX;
	volatile uint64_t t7 = 11066918798854700LLU;

	t7 = (x49*((x50==x51)+x52));

	if (t7 != 12245835625020LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int8_t x61 = 20;
	volatile uint16_t x62 = UINT16_MAX;
	int16_t x63 = INT16_MAX;
	int64_t x64 = 60LL;
	int64_t t8 = 63337LL;

	t8 = (x61*((x62==x63)+x64));

	if (t8 != 1200LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x66 = -1;
	int8_t x67 = INT8_MIN;
	volatile uint32_t t9 = 6379U;

	t9 = (x65*((x66==x67)+x68));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x69 = 0;
	int16_t x70 = INT16_MAX;
	int32_t x71 = 222;
	static volatile int64_t x72 = -1LL;
	int64_t t10 = -100184972400757697LL;

	t10 = (x69*((x70==x71)+x72));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x73 = INT8_MAX;
	static volatile int32_t x74 = 19501299;
	volatile int64_t t11 = 1032876LL;

	t11 = (x73*((x74==x75)+x76));

	if (t11 != -127LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x77 = 4403615LLU;
	uint64_t x79 = 18821650LLU;
	static uint32_t x80 = UINT32_MAX;
	uint64_t t12 = 1314604LLU;

	t12 = (x77*((x78==x79)+x80));

	if (t12 != 18913382404771425LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x83 = -19870961;
	int16_t x84 = INT16_MAX;
	int32_t t13 = -391006701;

	t13 = (x81*((x82==x83)+x84));

	if (t13 != -237593517) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint64_t x85 = 16353242750694057LLU;
	uint32_t x86 = 5916U;
	static int64_t x87 = INT64_MIN;
	uint64_t x88 = UINT64_MAX;
	volatile uint64_t t14 = 2132941529826134LLU;

	t14 = (x85*((x86==x87)+x88));

	if (t14 != 18430390830958857559LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x89 = 1U;
	int64_t x90 = INT64_MIN;
	uint16_t x91 = UINT16_MAX;
	uint64_t x92 = 4846686263716LLU;
	uint64_t t15 = 1LLU;

	t15 = (x89*((x90==x91)+x92));

	if (t15 != 4846686263716LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x97 = UINT64_MAX;
	int32_t x98 = 1;
	uint64_t t16 = 117052216123436621LLU;

	t16 = (x97*((x98==x99)+x100));

	if (t16 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x101 = 36U;
	static int8_t x102 = 1;
	static uint8_t x103 = 16U;
	static int8_t x104 = -30;
	static volatile int32_t t17 = 126;

	t17 = (x101*((x102==x103)+x104));

	if (t17 != -1080) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint64_t x109 = UINT64_MAX;
	int8_t x110 = -57;
	uint32_t x112 = UINT32_MAX;
	static uint64_t t18 = 25126LLU;

	t18 = (x109*((x110==x111)+x112));

	if (t18 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x113 = 997U;
	int32_t x114 = -1;
	uint64_t x115 = 6027283529819466LLU;
	volatile int8_t x116 = INT8_MAX;
	int32_t t19 = -1954807;

	t19 = (x113*((x114==x115)+x116));

	if (t19 != 126619) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x117 = UINT32_MAX;
	int64_t x119 = -72371426293146208LL;
	int16_t x120 = INT16_MAX;
	volatile uint32_t t20 = 2178683U;

	t20 = (x117*((x118==x119)+x120));

	if (t20 != 4294934529U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x121 = INT16_MIN;
	int8_t x122 = 0;
	int32_t x123 = -149096;
	int64_t t21 = 555330392369345425LL;

	t21 = (x121*((x122==x123)+x124));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x125 = -3582719103LL;
	volatile uint64_t x127 = UINT64_MAX;
	static int8_t x128 = INT8_MAX;
	volatile int64_t t22 = 13432333LL;

	t22 = (x125*((x126==x127)+x128));

	if (t22 != -455005326081LL) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x129 = -311;
	volatile int16_t x131 = INT16_MIN;
	volatile uint8_t x132 = UINT8_MAX;
	int32_t t23 = -13549;

	t23 = (x129*((x130==x131)+x132));

	if (t23 != -79305) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x133 = -1LL;
	uint32_t x134 = UINT32_MAX;
	int32_t x135 = INT32_MAX;
	int16_t x136 = INT16_MAX;
	volatile int64_t t24 = -3638753907205302LL;

	t24 = (x133*((x134==x135)+x136));

	if (t24 != -32767LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x137 = -1;
	static int16_t x138 = INT16_MIN;
	int64_t x139 = INT64_MIN;
	int8_t x140 = 22;
	volatile int32_t t25 = 3883014;

	t25 = (x137*((x138==x139)+x140));

	if (t25 != -22) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x149 = -1;
	uint64_t x150 = UINT64_MAX;
	int16_t x152 = INT16_MAX;
	int32_t t26 = -1;

	t26 = (x149*((x150==x151)+x152));

	if (t26 != -32768) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x153 = 6U;
	uint8_t x154 = 42U;
	static int16_t x156 = INT16_MIN;
	static volatile int32_t t27 = 405;

	t27 = (x153*((x154==x155)+x156));

	if (t27 != -196608) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x157 = 0;
	int64_t x158 = -4182874554547LL;
	int64_t x159 = 22727505646118425LL;
	static volatile int32_t x160 = INT32_MIN;
	volatile int32_t t28 = -246;

	t28 = (x157*((x158==x159)+x160));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x161 = 249836671603230LLU;
	static volatile int64_t x162 = INT64_MIN;
	uint16_t x163 = 3272U;
	int32_t x164 = -13753033;
	volatile uint64_t t29 = 237162LLU;

	t29 = (x161*((x162==x163)+x164));

	if (t29 != 13529152614301055602LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x165 = INT8_MIN;
	uint64_t x166 = 12LLU;
	static int16_t x167 = -1;
	int16_t x168 = INT16_MIN;
	int32_t t30 = 655012571;

	t30 = (x165*((x166==x167)+x168));

	if (t30 != 4194304) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x169 = 75247506211956LLU;
	int32_t x170 = INT32_MIN;
	uint16_t x172 = UINT16_MAX;
	static uint64_t t31 = 1LLU;

	t31 = (x169*((x170==x171)+x172));

	if (t31 != 4931345319600536460LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x177 = 35U;
	volatile uint32_t x178 = 331504U;
	static int8_t x179 = INT8_MIN;
	uint64_t x180 = 176053903154450LLU;
	uint64_t t32 = 1LLU;

	t32 = (x177*((x178==x179)+x180));

	if (t32 != 6161886610405750LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint8_t x181 = UINT8_MAX;
	int64_t x182 = -94LL;
	uint32_t x184 = 117968655U;
	volatile uint32_t t33 = 68U;

	t33 = (x181*((x182==x183)+x184));

	if (t33 != 17235953U) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x185 = INT8_MIN;
	static int16_t x186 = INT16_MIN;
	static volatile uint32_t x187 = 13U;
	static int64_t t34 = 3866684LL;

	t34 = (x185*((x186==x187)+x188));

	if (t34 != 40462906553596544LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x193 = 1;
	static uint64_t x194 = 57045LLU;
	static int16_t x195 = INT16_MIN;
	int8_t x196 = INT8_MAX;
	volatile int32_t t35 = 1;

	t35 = (x193*((x194==x195)+x196));

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x197 = INT32_MIN;
	static uint8_t x198 = UINT8_MAX;
	int16_t x199 = INT16_MIN;
	uint64_t x200 = UINT64_MAX;

	t36 = (x197*((x198==x199)+x200));

	if (t36 != 2147483648LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x201 = -1LL;
	uint8_t x202 = UINT8_MAX;
	uint8_t x203 = 1U;
	uint32_t x204 = 3U;
	static int64_t t37 = -4LL;

	t37 = (x201*((x202==x203)+x204));

	if (t37 != -3LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x205 = -11094;
	static uint16_t x206 = UINT16_MAX;
	int8_t x207 = INT8_MIN;

	t38 = (x205*((x206==x207)+x208));

	if (t38 != 4079998858U) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x211 = UINT32_MAX;
	int8_t x212 = -9;
	volatile uint32_t t39 = 6U;

	t39 = (x209*((x210==x211)+x212));

	if (t39 != 9U) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x213 = INT8_MAX;
	int32_t x215 = INT32_MIN;
	int8_t x216 = 55;
	int32_t t40 = 26031179;

	t40 = (x213*((x214==x215)+x216));

	if (t40 != 6985) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x217 = 5;
	int16_t x219 = INT16_MIN;
	int16_t x220 = 1237;
	int32_t t41 = 28606580;

	t41 = (x217*((x218==x219)+x220));

	if (t41 != 6185) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x221 = -1;
	int64_t x222 = 53LL;
	uint64_t x224 = 2767089378LLU;
	volatile uint64_t t42 = 58622219304718LLU;

	t42 = (x221*((x222==x223)+x224));

	if (t42 != 18446744070942462238LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x225 = INT16_MIN;
	volatile int8_t x226 = -1;
	volatile int32_t x227 = INT32_MIN;
	int64_t x228 = -1LL;
	int64_t t43 = 336796791328818LL;

	t43 = (x225*((x226==x227)+x228));

	if (t43 != 32768LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x234 = UINT16_MAX;
	int64_t x235 = INT64_MIN;
	int8_t x236 = INT8_MIN;
	int64_t t44 = -3246721026LL;

	t44 = (x233*((x234==x235)+x236));

	if (t44 != -9690624LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x239 = INT8_MIN;
	uint32_t x240 = UINT32_MAX;
	uint32_t t45 = 939U;

	t45 = (x237*((x238==x239)+x240));

	if (t45 != 4294934529U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x241 = INT64_MIN;
	int8_t x242 = INT8_MIN;
	static volatile int64_t x243 = -1LL;
	uint64_t x244 = UINT64_MAX;
	volatile uint64_t t46 = 890579749061147404LLU;

	t46 = (x241*((x242==x243)+x244));

	if (t46 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x249 = 1655463504876675LLU;
	static volatile int8_t x250 = INT8_MAX;
	uint8_t x251 = 1U;
	static volatile int16_t x252 = INT16_MIN;
	static uint64_t t47 = 488508000893199689LLU;

	t47 = (x249*((x250==x251)+x252));

	if (t47 != 1094004093329768448LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x253 = -30716333076357404LL;
	int32_t x254 = INT32_MIN;
	int32_t x255 = -1;
	int16_t x256 = 50;
	int64_t t48 = -10728542729909859LL;

	t48 = (x253*((x254==x255)+x256));

	if (t48 != -1535816653817870200LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x257 = INT16_MIN;
	static volatile int16_t x258 = INT16_MIN;
	uint16_t x259 = 4U;
	uint64_t x260 = 586500LLU;
	uint64_t t49 = 0LLU;

	t49 = (x257*((x258==x259)+x260));

	if (t49 != 18446744054491119616LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x261 = 49131;
	int16_t x262 = -1;
	int32_t t50 = 21731756;

	t50 = (x261*((x262==x263)+x264));

	if (t50 != 5306148) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x266 = 43544U;
	volatile uint8_t x267 = 80U;

	t51 = (x265*((x266==x267)+x268));

	if (t51 != 1073676289) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x269 = 0;
	int8_t x270 = -9;
	int32_t x271 = INT32_MIN;
	static uint32_t x272 = 145740250U;
	static uint32_t t52 = 1U;

	t52 = (x269*((x270==x271)+x272));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x273 = 27563U;
	int16_t x274 = -1;
	uint32_t x275 = 27331914U;
	uint64_t x276 = 804990274531595LLU;
	uint64_t t53 = 16291LLU;

	t53 = (x273*((x274==x275)+x276));

	if (t53 != 3741202863204801369LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x281 = -4;
	static int32_t x282 = INT32_MIN;
	static int64_t x283 = INT64_MIN;
	uint8_t x284 = 1U;
	static volatile int32_t t54 = 322896;

	t54 = (x281*((x282==x283)+x284));

	if (t54 != -4) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x286 = UINT16_MAX;
	int64_t x287 = -1LL;

	t55 = (x285*((x286==x287)+x288));

	if (t55 != 18446744073709551565LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x293 = -1;
	int16_t x294 = 5;
	int64_t x296 = INT64_MAX;
	int64_t t56 = 1LL;

	t56 = (x293*((x294==x295)+x296));

	if (t56 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x297 = 11LLU;
	uint64_t x298 = 992323925438LLU;
	int8_t x299 = INT8_MAX;
	uint16_t x300 = 0U;
	uint64_t t57 = 860LLU;

	t57 = (x297*((x298==x299)+x300));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x301 = -1LL;
	static int64_t x302 = -1915524892053LL;
	uint32_t x304 = 133754995U;
	volatile int64_t t58 = 15100332552960303LL;

	t58 = (x301*((x302==x303)+x304));

	if (t58 != -133754995LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x305 = -1LL;
	int16_t x306 = INT16_MIN;
	int16_t x307 = 674;
	int64_t t59 = -1202LL;

	t59 = (x305*((x306==x307)+x308));

	if (t59 != 32768LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x309 = INT8_MIN;
	int64_t x310 = INT64_MIN;
	static int32_t x311 = -1;
	volatile int32_t t60 = -9;

	t60 = (x309*((x310==x311)+x312));

	if (t60 != -32640) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int32_t x313 = -70872970;

	t61 = (x313*((x314==x315)+x316));

	if (t61 != -1700951280) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x317 = 21U;
	int16_t x318 = -6332;
	volatile int8_t x319 = 0;

	t62 = (x317*((x318==x319)+x320));

	if (t62 != 147) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x325 = UINT8_MAX;
	static int64_t x327 = -46037381LL;
	volatile int16_t x328 = 1608;
	int32_t t63 = -60;

	t63 = (x325*((x326==x327)+x328));

	if (t63 != 410040) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x329 = -4833;
	int64_t x330 = INT64_MIN;
	static uint16_t x331 = 1U;
	volatile int32_t t64 = 45749878;

	t64 = (x329*((x330==x331)+x332));

	if (t64 != 158367744) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x333 = -1;
	uint16_t x335 = UINT16_MAX;
	int32_t t65 = 47455;

	t65 = (x333*((x334==x335)+x336));

	if (t65 != -65535) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x337 = 268590449604421072LLU;
	uint16_t x338 = UINT16_MAX;
	int8_t x339 = INT8_MIN;
	int32_t x340 = INT32_MIN;
	volatile uint64_t t66 = 245LLU;

	t66 = (x337*((x338==x339)+x340));

	if (t66 != 6819027182522728448LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x341 = 0U;
	volatile int64_t x342 = 4143134LL;
	static volatile int64_t x343 = INT64_MIN;
	int8_t x344 = INT8_MAX;
	int32_t t67 = 3;

	t67 = (x341*((x342==x343)+x344));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x361 = 45U;
	int32_t x363 = 315316;
	static volatile uint8_t x364 = UINT8_MAX;
	volatile int32_t t68 = 459448;

	t68 = (x361*((x362==x363)+x364));

	if (t68 != 11475) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x367 = 43U;
	int32_t t69 = -459;

	t69 = (x365*((x366==x367)+x368));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x369 = 2141543730382LL;
	static int64_t x370 = INT64_MIN;
	uint32_t x372 = 3618180U;
	volatile int64_t t70 = -2219032773457774LL;

	t70 = (x369*((x370==x371)+x372));

	if (t70 != 7748490694393544760LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x374 = INT32_MAX;
	static int8_t x375 = INT8_MIN;
	int64_t x376 = -510869LL;
	int64_t t71 = -7990189LL;

	t71 = (x373*((x374==x375)+x376));

	if (t71 != -23499974LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x377 = 76026829416LLU;
	static uint64_t x378 = 28659993056994994LLU;
	int16_t x380 = 40;
	uint64_t t72 = 10692706301LLU;

	t72 = (x377*((x378==x379)+x380));

	if (t72 != 3041073176640LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x382 = 519741U;
	uint8_t x383 = UINT8_MAX;
	uint64_t x384 = UINT64_MAX;
	uint64_t t73 = 90866483LLU;

	t73 = (x381*((x382==x383)+x384));

	if (t73 != 1LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x386 = 32U;
	volatile uint32_t t74 = 2U;

	t74 = (x385*((x386==x387)+x388));

	if (t74 != 2147392491U) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x393 = -2601LL;
	uint16_t x394 = 0U;
	static int8_t x395 = -1;
	volatile uint8_t x396 = 0U;
	static volatile int64_t t75 = 15375948362527632LL;

	t75 = (x393*((x394==x395)+x396));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x405 = UINT16_MAX;
	int64_t x406 = INT64_MAX;
	uint64_t x407 = UINT64_MAX;
	volatile uint16_t x408 = 4U;
	static volatile int32_t t76 = -1209;

	t76 = (x405*((x406==x407)+x408));

	if (t76 != 262140) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x409 = INT16_MAX;
	static uint32_t x410 = 0U;
	int64_t x411 = INT64_MIN;
	uint8_t x412 = 2U;
	volatile int32_t t77 = 481574;

	t77 = (x409*((x410==x411)+x412));

	if (t77 != 65534) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x417 = INT8_MAX;
	int32_t x418 = -1;
	static uint16_t x419 = UINT16_MAX;
	int8_t x420 = INT8_MIN;
	static volatile int32_t t78 = -256395795;

	t78 = (x417*((x418==x419)+x420));

	if (t78 != -16256) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x433 = INT8_MIN;
	static int8_t x435 = 13;
	static volatile int64_t x436 = -1LL;
	int64_t t79 = 2841LL;

	t79 = (x433*((x434==x435)+x436));

	if (t79 != 128LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x441 = INT32_MIN;
	uint32_t x442 = 3U;
	static uint8_t x443 = 1U;
	volatile uint32_t x444 = 0U;
	static volatile uint32_t t80 = 7331U;

	t80 = (x441*((x442==x443)+x444));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x445 = -1;
	int16_t x446 = -1;
	uint8_t x447 = UINT8_MAX;
	uint8_t x448 = UINT8_MAX;

	t81 = (x445*((x446==x447)+x448));

	if (t81 != -255) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x449 = 443U;
	static volatile int16_t x450 = INT16_MIN;
	volatile uint64_t x451 = 1022LLU;
	int8_t x452 = -1;
	volatile int32_t t82 = 1;

	t82 = (x449*((x450==x451)+x452));

	if (t82 != -443) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x457 = UINT16_MAX;
	volatile int16_t x458 = INT16_MAX;
	int32_t x459 = INT32_MIN;

	t83 = (x457*((x458==x459)+x460));

	if (t83 != 2147385345) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint64_t x461 = 594598991LLU;
	int32_t x462 = INT32_MAX;
	int64_t x463 = -11774169LL;
	static volatile int32_t x464 = -1241;
	volatile uint64_t t84 = 5180646155112370LLU;

	t84 = (x461*((x462==x463)+x464));

	if (t84 != 18446743335812203785LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x465 = -9;
	int8_t x468 = -1;

	t85 = (x465*((x466==x467)+x468));

	if (t85 != 9) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int16_t x477 = INT16_MIN;
	int8_t x478 = INT8_MIN;
	int64_t x480 = -2478636371395LL;
	volatile int64_t t86 = 6386788811LL;

	t86 = (x477*((x478==x479)+x480));

	if (t86 != 81219956617871360LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x482 = 0U;
	int8_t x483 = -4;
	int32_t t87 = -1961218;

	t87 = (x481*((x482==x483)+x484));

	if (t87 != -323119296) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x485 = INT64_MAX;
	static uint32_t x487 = UINT32_MAX;
	int8_t x488 = -1;

	t88 = (x485*((x486==x487)+x488));

	if (t88 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x493 = INT64_MIN;
	volatile int64_t x494 = INT64_MIN;
	static uint16_t x495 = 4997U;
	int8_t x496 = 1;
	int64_t t89 = INT64_MIN;

	t89 = (x493*((x494==x495)+x496));

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x502 = INT64_MIN;
	int64_t x503 = INT64_MIN;
	int32_t x504 = -1;
	uint64_t t90 = 312584066785365532LLU;

	t90 = (x501*((x502==x503)+x504));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x506 = 1U;
	static uint8_t x507 = 0U;
	uint16_t x508 = 490U;

	t91 = (x505*((x506==x507)+x508));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x513 = -11936539413LL;
	int16_t x514 = -7;
	int32_t x515 = -711;
	static uint64_t x516 = 24457LLU;

	t92 = (x513*((x514==x515)+x516));

	if (t92 != 18446452141765127875LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int16_t x517 = -5474;
	uint16_t x518 = 917U;
	uint8_t x520 = UINT8_MAX;
	int32_t t93 = 65;

	t93 = (x517*((x518==x519)+x520));

	if (t93 != -1395870) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x525 = INT8_MIN;
	int8_t x527 = -1;
	uint8_t x528 = UINT8_MAX;
	static volatile int32_t t94 = 267043729;

	t94 = (x525*((x526==x527)+x528));

	if (t94 != -32640) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x534 = 33748302016826LL;
	static int32_t x536 = -151675;
	static volatile int32_t t95 = -67;

	t95 = (x533*((x534==x535)+x536));

	if (t95 != 151675) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x539 = INT16_MAX;
	uint32_t x540 = UINT32_MAX;

	t96 = (x537*((x538==x539)+x540));

	if (t96 != UINT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x541 = 1U;
	static uint16_t x542 = UINT16_MAX;
	static uint16_t x543 = UINT16_MAX;
	static uint16_t x544 = 330U;
	volatile uint32_t t97 = 11839129U;

	t97 = (x541*((x542==x543)+x544));

	if (t97 != 331U) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x549 = 57416711U;
	static uint64_t x550 = 6549039724373739LLU;
	uint64_t x551 = 61338441627719LLU;
	uint8_t x552 = 3U;

	t98 = (x549*((x550==x551)+x552));

	if (t98 != 172250133U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x553 = -1;
	volatile uint64_t x555 = 757151145003LLU;
	static int16_t x556 = -1;

	t99 = (x553*((x554==x555)+x556));

	if (t99 != 1) { NG(); } else { ; }
	
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

