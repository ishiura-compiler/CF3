#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t t1 = 5532488788LL;
static int8_t x15 = INT8_MAX;
int8_t x21 = -1;
static int16_t x23 = -24;
int8_t x30 = INT8_MAX;
static int64_t x32 = -51580LL;
static uint16_t x34 = 959U;
int64_t t6 = -101969380703919LL;
int32_t x46 = -1519347;
int32_t x47 = -1;
uint64_t t8 = 343873144468035LLU;
uint8_t x62 = 0U;
uint64_t x63 = 1207LLU;
int16_t x65 = INT16_MIN;
static uint16_t x67 = UINT16_MAX;
volatile uint64_t x83 = 551091298754680LLU;
uint16_t x110 = 1542U;
static int8_t x112 = 0;
int32_t t16 = INT32_MAX;
int8_t x117 = 5;
volatile int32_t x118 = INT32_MIN;
uint32_t x119 = UINT32_MAX;
int8_t x120 = 2;
int16_t x122 = -5421;
volatile uint32_t x126 = 392117U;
uint8_t x134 = 50U;
int16_t x135 = -871;
uint8_t x157 = 116U;
uint32_t x160 = 4885U;
volatile uint64_t t24 = 192412LLU;
int64_t x161 = -1LL;
uint16_t x182 = 2U;
int32_t x185 = INT32_MIN;
uint64_t x187 = 412277LLU;
int32_t x188 = INT32_MIN;
uint64_t t28 = 934078677039LLU;
int32_t x191 = 30;
uint8_t x193 = UINT8_MAX;
static uint32_t x197 = UINT32_MAX;
int64_t x205 = INT64_MIN;
static int8_t x216 = INT8_MIN;
uint64_t t35 = UINT64_MAX;
uint16_t x221 = 322U;
volatile int64_t t37 = -268302LL;
volatile uint16_t x241 = UINT16_MAX;
uint32_t x243 = 2624U;
uint16_t x256 = 64U;
static volatile uint8_t x257 = 73U;
uint32_t x258 = UINT32_MAX;
int8_t x270 = 51;
int32_t t44 = -1;
volatile int32_t x274 = INT32_MIN;
int16_t x275 = INT16_MAX;
volatile uint32_t t45 = 39716959U;
uint32_t x278 = UINT32_MAX;
static volatile int32_t t48 = 61321752;
uint16_t x289 = 791U;
int64_t x293 = -71931573LL;
uint16_t x297 = UINT16_MAX;
int32_t x299 = INT32_MAX;
volatile int32_t x301 = INT32_MAX;
int8_t x302 = 10;
volatile int32_t x323 = 1918;
static uint16_t x344 = UINT16_MAX;
volatile int64_t t61 = -15501733LL;
int16_t x385 = INT16_MIN;
uint16_t x386 = UINT16_MAX;
uint8_t x388 = 0U;
static int16_t x411 = INT16_MIN;
int8_t x427 = INT8_MIN;
static uint64_t x429 = 11707346977640LLU;
uint32_t x430 = UINT32_MAX;
static uint64_t x432 = UINT64_MAX;
volatile uint64_t t72 = 1066253751151964890LLU;
int32_t x435 = INT32_MIN;
uint64_t t73 = 21363566210718LLU;
int32_t x443 = 0;
int64_t x446 = -26161LL;
volatile uint32_t x459 = 452616U;
volatile int16_t x464 = INT16_MAX;
volatile int8_t x474 = 1;
int32_t x480 = INT32_MAX;
static volatile int64_t t85 = -217565LL;
volatile int16_t x506 = 10;
uint64_t x513 = 219676398512742LLU;
int8_t x523 = -20;
static int64_t x527 = INT64_MIN;
volatile int32_t x531 = INT32_MAX;
int64_t t91 = -2996182469207LL;
static volatile int8_t x538 = -1;
uint64_t x540 = 950033360LLU;
uint64_t t92 = 18623028LLU;
int32_t x547 = INT32_MIN;
volatile int64_t t94 = 84163980951137LL;
int16_t x556 = INT16_MIN;
uint64_t t96 = 50898643040LLU;
uint16_t x565 = 27351U;
int16_t x570 = INT16_MIN;
volatile uint64_t x573 = 5261002LLU;


void f0(void) {
	volatile uint32_t x1 = 162U;
	uint8_t x2 = 1U;
	uint8_t x3 = UINT8_MAX;
	int8_t x4 = 1;
	uint32_t t0 = 172U;

	t0 = (x1|((x2+x3)*x4));

	if (t0 != 418U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MAX;
	uint16_t x6 = 3U;
	int64_t x7 = -1LL;
	static volatile uint16_t x8 = 5U;

	t1 = (x5|((x6+x7)*x8));

	if (t1 != 32767LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = 2;
	int64_t x10 = -1LL;
	int16_t x11 = -8;
	int32_t x12 = -418316;
	int64_t t2 = 1136808897299700443LL;

	t2 = (x9|((x10+x11)*x12));

	if (t2 != 3764846LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	static volatile uint32_t x14 = 1218U;
	int16_t x16 = -752;
	int64_t t3 = 1362554250636792663LL;

	t3 = (x13|((x14+x15)*x16));

	if (t3 != -9223372032560819952LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x22 = 100116U;
	volatile uint16_t x24 = 19U;
	uint32_t t4 = UINT32_MAX;

	t4 = (x21|((x22+x23)*x24));

	if (t4 != UINT32_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x29 = 3338U;
	uint8_t x31 = UINT8_MAX;
	static int64_t t5 = -494353752649070021LL;

	t5 = (x29|((x30+x31)*x32));

	if (t5 != -19702278LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = 0;
	volatile uint8_t x35 = UINT8_MAX;
	int64_t x36 = -1LL;

	t6 = (x33|((x34+x35)*x36));

	if (t6 != -1214LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x45 = 3U;
	uint64_t x48 = UINT64_MAX;
	uint64_t t7 = 18763016716LLU;

	t7 = (x45|((x46+x47)*x48));

	if (t7 != 1519351LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x53 = -16;
	int32_t x54 = INT32_MAX;
	int8_t x55 = -2;
	uint64_t x56 = UINT64_MAX;

	t8 = (x53|((x54+x55)*x56));

	if (t8 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x61 = 6192681332LLU;
	int8_t x64 = 0;
	volatile uint64_t t9 = 719001829710536064LLU;

	t9 = (x61|((x62+x63)*x64));

	if (t9 != 6192681332LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x66 = 6321790561980072LL;
	uint16_t x68 = 382U;
	volatile int64_t t10 = -56987928328632LL;

	t10 = (x65|((x66+x67)*x68));

	if (t10 != -8910LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x69 = 107;
	volatile int8_t x70 = -1;
	int16_t x71 = INT16_MIN;
	uint32_t x72 = UINT32_MAX;
	volatile uint32_t t11 = 71078U;

	t11 = (x69|((x70+x71)*x72));

	if (t11 != 32875U) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x77 = INT16_MAX;
	static volatile uint64_t x78 = UINT64_MAX;
	uint16_t x79 = 52U;
	int32_t x80 = INT32_MAX;
	uint64_t t12 = 7189309322177397LLU;

	t12 = (x77|((x78+x79)*x80));

	if (t12 != 109521666047LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x81 = 2143133U;
	uint16_t x82 = 122U;
	int32_t x84 = INT32_MIN;
	volatile uint64_t t13 = 117112LLU;

	t13 = (x81|((x82+x83)*x84));

	if (t13 != 9760161889939141533LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x89 = INT16_MAX;
	uint32_t x90 = UINT32_MAX;
	volatile int8_t x91 = INT8_MAX;
	uint32_t x92 = UINT32_MAX;
	uint32_t t14 = UINT32_MAX;

	t14 = (x89|((x90+x91)*x92));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x101 = INT8_MIN;
	int32_t x102 = INT32_MAX;
	int32_t x103 = -1;
	uint32_t x104 = 7263355U;
	uint32_t t15 = 2669U;

	t15 = (x101|((x102+x103)*x104));

	if (t15 != 4294967178U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x109 = INT32_MAX;
	int16_t x111 = INT16_MIN;

	t16 = (x109|((x110+x111)*x112));

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t t17 = UINT32_MAX;

	t17 = (x117|((x118+x119)*x120));

	if (t17 != UINT32_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x121 = -1;
	int8_t x123 = INT8_MAX;
	uint8_t x124 = 5U;
	volatile int32_t t18 = 114426;

	t18 = (x121|((x122+x123)*x124));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x125 = INT32_MIN;
	static uint64_t x127 = 37354261LLU;
	static volatile int64_t x128 = INT64_MIN;
	volatile uint64_t t19 = 20LLU;

	t19 = (x125|((x126+x127)*x128));

	if (t19 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x133 = 26LLU;
	volatile uint16_t x136 = 15U;
	volatile uint64_t t20 = 3730558449168392720LLU;

	t20 = (x133|((x134+x135)*x136));

	if (t20 != 18446744073709539327LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x137 = -9;
	int64_t x138 = 4009192579112399LL;
	int64_t x139 = -50732627LL;
	uint8_t x140 = UINT8_MAX;
	volatile int64_t t21 = 105967175520385LL;

	t21 = (x137|((x138+x139)*x140));

	if (t21 != -9LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x141 = 3;
	int64_t x142 = -1LL;
	uint64_t x143 = 141499872628518876LLU;
	int16_t x144 = -1;
	volatile uint64_t t22 = 1517938191055LLU;

	t22 = (x141|((x142+x143)*x144));

	if (t22 != 18305244201081032743LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x149 = -1;
	static int32_t x150 = 2743;
	uint16_t x151 = 13972U;
	static int8_t x152 = -1;
	volatile int32_t t23 = 117;

	t23 = (x149|((x150+x151)*x152));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint64_t x158 = 11472753398131LLU;
	static volatile int64_t x159 = -11451726764322LL;

	t24 = (x157|((x158+x159)*x160));

	if (t24 != 102715106157045LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x162 = UINT16_MAX;
	int64_t x163 = 141794LL;
	uint16_t x164 = UINT16_MAX;
	volatile int64_t t25 = 65577838522LL;

	t25 = (x161|((x162+x163)*x164));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x169 = -25;
	volatile int32_t x170 = -1;
	volatile int32_t x171 = INT32_MAX;
	static int8_t x172 = -1;
	static int32_t t26 = 53;

	t26 = (x169|((x170+x171)*x172));

	if (t26 != -25) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x181 = 177071LLU;
	uint32_t x183 = UINT32_MAX;
	int32_t x184 = -1;
	volatile uint64_t t27 = 25LLU;

	t27 = (x181|((x182+x183)*x184));

	if (t27 != 4294967295LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x186 = -1;

	t28 = (x185|((x186+x187)*x188));

	if (t28 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x189 = 1;
	int64_t x190 = 166576503661550002LL;
	uint16_t x192 = 0U;
	static int64_t t29 = -3855266008548LL;

	t29 = (x189|((x190+x191)*x192));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x194 = INT8_MIN;
	int64_t x195 = INT64_MAX;
	int8_t x196 = -1;
	int64_t t30 = -5380878381LL;

	t30 = (x193|((x194+x195)*x196));

	if (t30 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x198 = INT64_MIN;
	int32_t x199 = 202294;
	uint64_t x200 = 33155262LLU;
	volatile uint64_t t31 = 371614098591610891LLU;

	t31 = (x197|((x198+x199)*x200));

	if (t31 != 6708738916351LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x206 = 3144U;
	int8_t x207 = INT8_MAX;
	static uint64_t x208 = UINT64_MAX;
	static uint64_t t32 = 3440476345487LLU;

	t32 = (x205|((x206+x207)*x208));

	if (t32 != 18446744073709548345LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int32_t x209 = INT32_MAX;
	int8_t x210 = INT8_MIN;
	int16_t x211 = -7758;
	uint64_t x212 = 2LLU;
	volatile uint64_t t33 = UINT64_MAX;

	t33 = (x209|((x210+x211)*x212));

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x213 = 28U;
	uint8_t x214 = UINT8_MAX;
	int16_t x215 = 2;
	volatile uint32_t t34 = 82564420U;

	t34 = (x213|((x214+x215)*x216));

	if (t34 != 4294934428U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x217 = -1LL;
	static uint64_t x218 = 485374LLU;
	int32_t x219 = -4994;
	uint32_t x220 = 210514559U;

	t35 = (x217|((x218+x219)*x220));

	if (t35 != UINT64_MAX) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x222 = INT32_MAX;
	int64_t x223 = -1LL;
	uint32_t x224 = 33U;
	volatile int64_t t36 = -91LL;

	t36 = (x221|((x222+x223)*x224));

	if (t36 != 70866960382LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x237 = INT32_MIN;
	uint8_t x238 = UINT8_MAX;
	volatile int16_t x239 = INT16_MIN;
	static int64_t x240 = 27LL;

	t37 = (x237|((x238+x239)*x240));

	if (t37 != -877851LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x242 = 1;
	uint32_t x244 = 60313695U;
	volatile uint32_t t38 = 4U;

	t38 = (x241|((x242+x243)*x244));

	if (t38 != 3704684543U) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x245 = -1856;
	int32_t x246 = -1;
	int32_t x247 = 2;
	uint16_t x248 = UINT16_MAX;
	int32_t t39 = 110673817;

	t39 = (x245|((x246+x247)*x248));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x249 = 62U;
	uint32_t x250 = UINT32_MAX;
	uint8_t x251 = UINT8_MAX;
	uint16_t x252 = 4034U;
	uint32_t t40 = 122U;

	t40 = (x249|((x250+x251)*x252));

	if (t40 != 1024638U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x253 = UINT32_MAX;
	volatile int32_t x254 = 34;
	volatile int16_t x255 = 1612;
	volatile uint32_t t41 = UINT32_MAX;

	t41 = (x253|((x254+x255)*x256));

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x259 = 1930;
	uint16_t x260 = UINT16_MAX;
	uint32_t t42 = 17096U;

	t42 = (x257|((x258+x259)*x260));

	if (t42 != 126417023U) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint8_t x265 = 8U;
	static uint64_t x266 = 14662600524328483LLU;
	int16_t x267 = INT16_MIN;
	static int32_t x268 = 260957847;
	volatile uint64_t t43 = 288071636890LLU;

	t43 = (x265|((x266+x267)*x268));

	if (t43 != 4774752077233776813LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x269 = 3717U;
	uint8_t x271 = 22U;
	static int16_t x272 = INT16_MAX;

	t44 = (x269|((x270+x271)*x272));

	if (t44 != 2391991) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x273 = INT16_MAX;
	static volatile uint32_t x276 = 551U;

	t45 = (x273|((x274+x275)*x276));

	if (t45 != 2165538815U) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x277 = UINT32_MAX;
	uint64_t x279 = 4LLU;
	int8_t x280 = -1;
	volatile uint64_t t46 = 3952248783LLU;

	t46 = (x277|((x278+x279)*x280));

	if (t46 != 18446744069414584319LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x281 = 3119U;
	static int16_t x282 = -1;
	uint32_t x283 = 778563081U;
	volatile int16_t x284 = -134;
	uint32_t t47 = 1789U;

	t47 = (x281|((x282+x283)*x284));

	if (t47 != 3046731775U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x285 = 28330U;
	int16_t x286 = INT16_MAX;
	int8_t x287 = INT8_MIN;
	static int16_t x288 = 2;

	t48 = (x285|((x286+x287)*x288));

	if (t48 != 65278) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x290 = -1;
	int64_t x291 = 82LL;
	volatile uint16_t x292 = UINT16_MAX;
	int64_t t49 = 255960558561956LL;

	t49 = (x289|((x290+x291)*x292));

	if (t49 != 5308351LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x294 = 10;
	volatile uint64_t x295 = 1054299032950652LLU;
	int16_t x296 = INT16_MIN;
	volatile uint64_t t50 = 3302983301LLU;

	t50 = (x293|((x294+x295)*x296));

	if (t50 != 18446744073705318731LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x298 = INT32_MIN;
	volatile int16_t x300 = INT16_MAX;
	volatile int32_t t51 = -1013565;

	t51 = (x297|((x298+x299)*x300));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x303 = 68U;
	int8_t x304 = INT8_MIN;
	static volatile int32_t t52 = 16019108;

	t52 = (x301|((x302+x303)*x304));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x305 = UINT16_MAX;
	static volatile int16_t x306 = INT16_MIN;
	volatile int16_t x307 = -1;
	static int8_t x308 = INT8_MIN;
	static int32_t t53 = 1043278218;

	t53 = (x305|((x306+x307)*x308));

	if (t53 != 4259839) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x313 = 0U;
	int8_t x314 = INT8_MAX;
	int32_t x315 = INT32_MIN;
	volatile uint32_t x316 = 103U;
	static uint32_t t54 = 184465820U;

	t54 = (x313|((x314+x315)*x316));

	if (t54 != 2147496729U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x317 = -1647LL;
	int32_t x318 = -2;
	uint64_t x319 = 48451539LLU;
	int16_t x320 = INT16_MIN;
	uint64_t t55 = 4477LLU;

	t55 = (x317|((x318+x319)*x320));

	if (t55 != 18446744073709549969LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x321 = INT32_MIN;
	int32_t x322 = -1;
	int32_t x324 = -1;
	int32_t t56 = -202951;

	t56 = (x321|((x322+x323)*x324));

	if (t56 != -1917) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x325 = INT64_MIN;
	static uint64_t x326 = UINT64_MAX;
	static uint16_t x327 = 5026U;
	int64_t x328 = 2068472772489727185LL;
	uint64_t t57 = 16532285214404954LLU;

	t57 = (x325|((x326+x327)*x328));

	if (t57 != 17782140299256320625LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x341 = 2;
	int64_t x342 = -1LL;
	uint32_t x343 = 2333936U;
	int64_t t58 = -1090LL;

	t58 = (x341|((x342+x343)*x344));

	if (t58 != 152954430227LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x345 = INT8_MIN;
	static int16_t x346 = INT16_MAX;
	int32_t x347 = INT32_MIN;
	int64_t x348 = -1LL;
	volatile int64_t t59 = -443464LL;

	t59 = (x345|((x346+x347)*x348));

	if (t59 != -127LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x349 = -95;
	int32_t x350 = INT32_MIN;
	static uint32_t x351 = 14878U;
	static int8_t x352 = -27;
	volatile uint32_t t60 = 666632U;

	t60 = (x349|((x350+x351)*x352));

	if (t60 != 4294967287U) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x365 = 473558U;
	int16_t x366 = INT16_MAX;
	static volatile int64_t x367 = 7216LL;
	int8_t x368 = -1;

	t61 = (x365|((x366+x367)*x368));

	if (t61 != -33833LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x369 = 161U;
	static int32_t x370 = -1;
	uint32_t x371 = 15248U;
	int32_t x372 = INT32_MAX;
	volatile uint32_t t62 = 6381U;

	t62 = (x369|((x370+x371)*x372));

	if (t62 != 2147468529U) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x387 = 12U;
	volatile uint32_t t63 = 148U;

	t63 = (x385|((x386+x387)*x388));

	if (t63 != 4294934528U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x389 = -1;
	volatile int8_t x390 = INT8_MIN;
	int32_t x391 = -15274707;
	uint64_t x392 = 53438332261027281LLU;
	static volatile uint64_t t64 = UINT64_MAX;

	t64 = (x389|((x390+x391)*x392));

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x397 = 3254012U;
	volatile uint8_t x398 = 1U;
	volatile int16_t x399 = INT16_MIN;
	int16_t x400 = 0;
	uint32_t t65 = 91723478U;

	t65 = (x397|((x398+x399)*x400));

	if (t65 != 3254012U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x401 = INT8_MAX;
	static uint64_t x402 = UINT64_MAX;
	int64_t x403 = INT64_MAX;
	volatile int32_t x404 = -1;
	static uint64_t t66 = 28LLU;

	t66 = (x401|((x402+x403)*x404));

	if (t66 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x409 = INT64_MIN;
	int8_t x410 = INT8_MIN;
	volatile uint64_t x412 = UINT64_MAX;
	volatile uint64_t t67 = 4783647883399LLU;

	t67 = (x409|((x410+x411)*x412));

	if (t67 != 9223372036854808704LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x413 = UINT16_MAX;
	uint64_t x414 = 310LLU;
	int32_t x415 = INT32_MAX;
	uint8_t x416 = 0U;
	volatile uint64_t t68 = 12244171LLU;

	t68 = (x413|((x414+x415)*x416));

	if (t68 != 65535LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x417 = 23U;
	int8_t x418 = 0;
	int32_t x419 = -1;
	volatile uint8_t x420 = UINT8_MAX;
	int32_t t69 = 302;

	t69 = (x417|((x418+x419)*x420));

	if (t69 != -233) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x421 = 5367614254500761LL;
	static volatile uint32_t x422 = UINT32_MAX;
	static int64_t x423 = 2059498566LL;
	int8_t x424 = INT8_MIN;
	int64_t t70 = -1027045755664572LL;

	t70 = (x421|((x422+x423)*x424));

	if (t70 != -190590230631LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x425 = INT8_MIN;
	static volatile int64_t x426 = -1LL;
	int32_t x428 = -1;
	int64_t t71 = -55308441416633806LL;

	t71 = (x425|((x426+x427)*x428));

	if (t71 != -127LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x431 = -3;

	t72 = (x429|((x430+x431)*x432));

	if (t72 != 18446744072975680364LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x433 = UINT8_MAX;
	uint64_t x434 = 229353984717745207LLU;
	int32_t x436 = -1;

	t73 = (x433|((x434+x435)*x436));

	if (t73 != 18217390091139290111LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x437 = 3;
	uint64_t x438 = 34713269041351877LLU;
	uint64_t x439 = UINT64_MAX;
	int64_t x440 = INT64_MAX;
	static uint64_t t74 = 59LLU;

	t74 = (x437|((x438+x439)*x440));

	if (t74 != 18412030804668199743LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x441 = 6U;
	uint16_t x442 = UINT16_MAX;
	int16_t x444 = INT16_MIN;
	int32_t t75 = -696;

	t75 = (x441|((x442+x443)*x444));

	if (t75 != -2147450874) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x445 = INT64_MAX;
	volatile uint8_t x447 = 10U;
	int32_t x448 = INT32_MAX;
	static volatile int64_t t76 = -2LL;

	t76 = (x445|((x446+x447)*x448));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x457 = 7U;
	static int8_t x458 = -1;
	int16_t x460 = INT16_MIN;
	volatile uint32_t t77 = 3748141U;

	t77 = (x457|((x458+x459)*x460));

	if (t77 != 2348580871U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x461 = -346569462290LL;
	volatile uint8_t x462 = 3U;
	int16_t x463 = -1;
	int64_t t78 = 7838LL;

	t78 = (x461|((x462+x463)*x464));

	if (t78 != -346569441282LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x469 = INT64_MAX;
	int8_t x470 = 0;
	int64_t x471 = -1LL;
	volatile int16_t x472 = 212;
	static volatile int64_t t79 = 4LL;

	t79 = (x469|((x470+x471)*x472));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x473 = 147;
	volatile int32_t x475 = 4;
	int32_t x476 = 893126;
	volatile int32_t t80 = -488081;

	t80 = (x473|((x474+x475)*x476));

	if (t80 != 4465631) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x477 = 3660;
	volatile uint64_t x478 = UINT64_MAX;
	uint8_t x479 = UINT8_MAX;
	static volatile uint64_t t81 = 1LLU;

	t81 = (x477|((x478+x479)*x480));

	if (t81 != 545460846414LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x485 = 127988376LLU;
	int8_t x486 = INT8_MAX;
	int64_t x487 = -500LL;
	static uint8_t x488 = 44U;
	volatile uint64_t t82 = 71LLU;

	t82 = (x485|((x486+x487)*x488));

	if (t82 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x489 = INT32_MIN;
	int32_t x490 = INT32_MIN;
	int16_t x491 = INT16_MAX;
	volatile int32_t x492 = -1;
	static int32_t t83 = 0;

	t83 = (x489|((x490+x491)*x492));

	if (t83 != -32767) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x493 = INT16_MAX;
	volatile int8_t x494 = INT8_MIN;
	static uint64_t x495 = 6458043228294878LLU;
	volatile int32_t x496 = INT32_MIN;
	uint64_t t84 = 4284096728LLU;

	t84 = (x493|((x494+x495)*x496));

	if (t84 != 15111679913708519423LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x501 = INT64_MIN;
	int32_t x502 = INT32_MIN;
	int16_t x503 = INT16_MAX;
	int8_t x504 = -1;

	t85 = (x501|((x502+x503)*x504));

	if (t85 != -9223372034707324927LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x505 = 11;
	int64_t x507 = 0LL;
	uint32_t x508 = 769U;
	static int64_t t86 = 1920843822019LL;

	t86 = (x505|((x506+x507)*x508));

	if (t86 != 7691LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x514 = 101239635LLU;
	volatile int64_t x515 = -1LL;
	uint16_t x516 = UINT16_MAX;
	volatile uint64_t t87 = 7194657668229LLU;

	t87 = (x513|((x514+x515)*x516));

	if (t87 != 219678550785774LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x521 = -1;
	uint16_t x522 = 9U;
	volatile int16_t x524 = INT16_MIN;
	static int32_t t88 = 7;

	t88 = (x521|((x522+x523)*x524));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x525 = INT32_MIN;
	int32_t x526 = 1035757;
	int64_t x528 = -1LL;
	int64_t t89 = 1LL;

	t89 = (x525|((x526+x527)*x528));

	if (t89 != -1035757LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x529 = INT32_MIN;
	uint64_t x530 = UINT64_MAX;
	uint8_t x532 = 14U;
	uint64_t t90 = 13954290LLU;

	t90 = (x529|((x530+x531)*x532));

	if (t90 != 18446744073709551588LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x533 = -1;
	int8_t x534 = INT8_MAX;
	static uint8_t x535 = 1U;
	static int64_t x536 = -1LL;

	t91 = (x533|((x534+x535)*x536));

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x537 = INT16_MAX;
	uint16_t x539 = 6127U;

	t92 = (x537|((x538+x539)*x540));

	if (t92 != 5819904393215LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x541 = 22442;
	int8_t x542 = INT8_MIN;
	uint32_t x543 = UINT32_MAX;
	int8_t x544 = INT8_MIN;
	uint32_t t93 = 23931U;

	t93 = (x541|((x542+x543)*x544));

	if (t93 != 22442U) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x545 = 58U;
	volatile int64_t x546 = 114492LL;
	int16_t x548 = INT16_MAX;

	t94 = (x545|((x546+x547)*x548));

	if (t94 != -70362845134594LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x553 = UINT8_MAX;
	volatile int8_t x554 = -1;
	static uint8_t x555 = UINT8_MAX;
	static int32_t t95 = -7036;

	t95 = (x553|((x554+x555)*x556));

	if (t95 != -8322817) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x561 = 1LLU;
	uint16_t x562 = UINT16_MAX;
	uint16_t x563 = UINT16_MAX;
	static uint32_t x564 = 2128258121U;

	t96 = (x561|((x562+x563)*x564));

	if (t96 != 1255978863LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x566 = 1;
	volatile int16_t x567 = -8518;
	int16_t x568 = 1;
	volatile int32_t t97 = 256;

	t97 = (x565|((x566+x567)*x568));

	if (t97 != -257) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x569 = -2;
	int16_t x571 = INT16_MAX;
	uint64_t x572 = UINT64_MAX;
	uint64_t t98 = UINT64_MAX;

	t98 = (x569|((x570+x571)*x572));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x574 = 14974U;
	int16_t x575 = INT16_MIN;
	volatile int32_t x576 = INT32_MIN;
	static volatile uint64_t t99 = 981460330211LLU;

	t99 = (x573|((x574+x575)*x576));

	if (t99 != 5261002LLU) { NG(); } else { ; }
	
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

