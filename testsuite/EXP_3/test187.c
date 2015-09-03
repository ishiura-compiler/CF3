#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t t0 = 27897402405LL;
volatile uint64_t t1 = 127734409285546LLU;
uint64_t x12 = 402964526542381034LLU;
uint16_t x16 = 49U;
volatile int64_t t6 = -54635278063762LL;
uint64_t x34 = 6LLU;
static int32_t t8 = -7;
int64_t x50 = -717LL;
static int8_t x55 = INT8_MIN;
static volatile uint64_t x59 = 151330692122LLU;
int8_t x63 = INT8_MIN;
uint32_t x64 = UINT32_MAX;
int8_t x66 = INT8_MIN;
volatile uint64_t x67 = UINT64_MAX;
static volatile int16_t x74 = -1;
int8_t x78 = INT8_MIN;
int64_t t16 = 15846456677485708LL;
static int16_t x91 = -60;
int16_t x95 = -1;
uint64_t t18 = 4003LLU;
static volatile int16_t x97 = INT16_MIN;
volatile int64_t t19 = -733060055528LL;
int8_t x108 = INT8_MAX;
static uint32_t x109 = UINT32_MAX;
static int64_t x112 = 7LL;
volatile uint64_t t23 = 8977085546668996LLU;
int8_t x137 = 1;
uint32_t x144 = UINT32_MAX;
static volatile uint32_t x146 = 136286075U;
int8_t x148 = -30;
int64_t x170 = INT64_MAX;
uint16_t x172 = 0U;
int32_t x194 = -519914167;
static uint16_t x195 = 3366U;
volatile int32_t t32 = 41;
uint32_t x220 = UINT32_MAX;
int32_t x234 = INT32_MIN;
int16_t x236 = 26;
static int8_t x249 = -1;
int32_t x250 = -14;
uint16_t x251 = 3U;
uint8_t x252 = 2U;
int8_t x254 = INT8_MIN;
static uint8_t x256 = 0U;
uint8_t x260 = 5U;
int8_t x263 = INT8_MIN;
uint64_t x265 = 3427LLU;
int16_t x266 = -7;
static int8_t x280 = INT8_MIN;
int64_t x281 = 3610542942126281LL;
static uint32_t x283 = UINT32_MAX;
static int64_t x301 = -1792824695666746LL;
static volatile int32_t x304 = -1;
int64_t t52 = 13623601LL;
volatile uint32_t x305 = 93666282U;
volatile uint64_t t53 = 30269LLU;
volatile int32_t x314 = INT32_MIN;
static int8_t x317 = 0;
int64_t x320 = -617017724LL;
uint8_t x322 = 62U;
int8_t x332 = 0;
uint32_t x337 = 55U;
uint32_t t59 = 5970751U;
int16_t x351 = INT16_MIN;
static int32_t x356 = -10296;
int8_t x365 = -3;
int32_t x368 = -1;
uint32_t x372 = UINT32_MAX;
int8_t x376 = INT8_MIN;
static int32_t t65 = 14979;
uint64_t x404 = 2236901474156255LLU;
int64_t x406 = INT64_MIN;
volatile int16_t x411 = -1;
volatile int32_t t71 = 22;
uint16_t x418 = UINT16_MAX;
static int64_t t73 = -45LL;
volatile uint8_t x434 = UINT8_MAX;
static volatile int32_t t75 = 1;
int64_t x453 = INT64_MIN;
int8_t x466 = -1;
int64_t x469 = -1LL;
int8_t x470 = 7;
int32_t x516 = -1333;
int8_t x538 = 1;
uint32_t t90 = 0U;
int8_t x548 = INT8_MIN;
int32_t t92 = -5374667;
uint32_t x549 = 308974193U;
int32_t x553 = 10999;
uint16_t x556 = 45U;
uint8_t x557 = UINT8_MAX;
int32_t x560 = 28466;
int16_t x564 = INT16_MIN;
int8_t x567 = INT8_MIN;
int64_t x568 = -6LL;
int32_t x572 = INT32_MIN;
int16_t x578 = 0;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int16_t x2 = -1;
	volatile int16_t x3 = INT16_MAX;
	uint32_t x4 = 197U;

	t0 = ((x1-x2)%(x3-x4));

	if (t0 != -30517LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 1029342LLU;
	uint8_t x6 = 8U;
	int16_t x7 = INT16_MIN;
	uint32_t x8 = 13438U;

	t1 = ((x5-x6)%(x7-x8));

	if (t1 != 1029334LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = UINT32_MAX;
	uint32_t x10 = 15678966U;
	static volatile int32_t x11 = INT32_MIN;
	volatile uint64_t t2 = 1090831LLU;

	t2 = ((x9-x10)%(x11-x12));

	if (t2 != 4279288329LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	static volatile int16_t x14 = INT16_MAX;
	uint8_t x15 = 3U;
	volatile int32_t t3 = -33;

	t3 = ((x13-x14)%(x15-x16));

	if (t3 != -5) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x17 = INT16_MIN;
	volatile uint64_t x18 = UINT64_MAX;
	int32_t x19 = 29770;
	uint64_t x20 = 124056978498558486LLU;
	static volatile uint64_t t4 = 17234474314278161LLU;

	t4 = ((x17-x18)%(x19-x20));

	if (t4 != 124056978498495949LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x25 = -1;
	int64_t x26 = 29819704873LL;
	int8_t x27 = INT8_MAX;
	uint8_t x28 = 3U;
	int64_t t5 = -594562459253413LL;

	t5 = ((x25-x26)%(x27-x28));

	if (t5 != -114LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = INT64_MAX;
	uint16_t x30 = 751U;
	int64_t x31 = -102206LL;
	volatile int32_t x32 = -191;

	t6 = ((x29-x30)%(x31-x32));

	if (t6 != 58341LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = 33U;
	uint32_t x35 = UINT32_MAX;
	uint32_t x36 = 498U;
	uint64_t t7 = 3212939274675502440LLU;

	t7 = ((x33-x34)%(x35-x36));

	if (t7 != 27LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = INT8_MIN;
	volatile int16_t x38 = 2219;
	uint16_t x39 = 7U;
	static int8_t x40 = INT8_MAX;

	t8 = ((x37-x38)%(x39-x40));

	if (t8 != -67) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x45 = 1U;
	static int16_t x46 = 2222;
	int64_t x47 = INT64_MIN;
	static volatile int16_t x48 = -112;
	volatile int64_t t9 = 16367553LL;

	t9 = ((x45-x46)%(x47-x48));

	if (t9 != -2221LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = INT16_MIN;
	int64_t x51 = 150796053LL;
	uint64_t x52 = 167791381157090LLU;
	static uint64_t t10 = 342753135LLU;

	t10 = ((x49-x50)%(x51-x52));

	if (t10 != 167791230328986LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = 130649724364LL;
	int16_t x54 = INT16_MAX;
	static int16_t x56 = INT16_MAX;
	int64_t t11 = 4183444809214683LL;

	t11 = ((x53-x54)%(x55-x56));

	if (t11 != 27987LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x57 = INT16_MIN;
	int64_t x58 = -1LL;
	volatile int8_t x60 = INT8_MIN;
	static uint64_t t12 = 2254300928439LLU;

	t12 = ((x57-x58)%(x59-x60));

	if (t12 != 148942879099LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = -1LL;
	static int32_t x62 = INT32_MAX;
	volatile int64_t t13 = 244575396LL;

	t13 = ((x61-x62)%(x63-x64));

	if (t13 != -2147483648LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = INT64_MIN;
	uint32_t x68 = 18U;
	uint64_t t14 = 377493338670986LLU;

	t14 = ((x65-x66)%(x67-x68));

	if (t14 != 9223372036854775936LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x73 = 26U;
	int8_t x75 = INT8_MAX;
	int16_t x76 = -808;
	int32_t t15 = 465131;

	t15 = ((x73-x74)%(x75-x76));

	if (t15 != 27) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = INT64_MIN;
	int8_t x79 = -1;
	uint8_t x80 = 6U;

	t16 = ((x77-x78)%(x79-x80));

	if (t16 != -6LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x89 = INT32_MIN;
	int32_t x90 = -1;
	static int16_t x92 = 491;
	volatile int32_t t17 = 1185;

	t17 = ((x89-x90)%(x91-x92));

	if (t17 != -268) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x93 = 3443540683688626LL;
	static uint64_t x94 = UINT64_MAX;
	static int32_t x96 = INT32_MAX;

	t18 = ((x93-x94)%(x95-x96));

	if (t18 != 3443540683688627LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x98 = 11U;
	static int16_t x99 = 2743;
	volatile int64_t x100 = -834LL;

	t19 = ((x97-x98)%(x99-x100));

	if (t19 != -586LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x101 = INT32_MIN;
	int8_t x102 = 0;
	uint32_t x103 = 7414U;
	static int8_t x104 = 19;
	volatile uint32_t t20 = 428357U;

	t20 = ((x101-x102)%(x103-x104));

	if (t20 != 5228U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x105 = 1372895745305363568LL;
	uint32_t x106 = UINT32_MAX;
	uint8_t x107 = UINT8_MAX;
	volatile int64_t t21 = -70839761891196LL;

	t21 = ((x105-x106)%(x107-x108));

	if (t21 != 113LL) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x110 = 790;
	int8_t x111 = INT8_MIN;
	volatile int64_t t22 = -2978LL;

	t22 = ((x109-x110)%(x111-x112));

	if (t22 != 95LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x129 = 0;
	static uint64_t x130 = 179745324418839347LLU;
	volatile uint64_t x131 = 2080300904LLU;
	uint32_t x132 = UINT32_MAX;

	t23 = ((x129-x130)%(x131-x132));

	if (t23 != 18266998749290712269LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x138 = INT8_MAX;
	static volatile int8_t x139 = -25;
	static volatile int32_t x140 = INT32_MIN;
	static int32_t t24 = 896772219;

	t24 = ((x137-x138)%(x139-x140));

	if (t24 != -126) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x141 = -33;
	uint64_t x142 = 7015013LLU;
	int64_t x143 = -51839065831007909LL;
	static uint64_t t25 = 4129415992045926179LLU;

	t25 = ((x141-x142)%(x143-x144));

	if (t25 != 51839070118960158LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x145 = -1;
	static int32_t x147 = -119057245;
	volatile uint32_t t26 = 25170606U;

	t26 = ((x145-x146)%(x147-x148));

	if (t26 != 4158681220U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x149 = 5;
	volatile int8_t x150 = INT8_MAX;
	int16_t x151 = -1;
	volatile int8_t x152 = INT8_MAX;
	int32_t t27 = -13034;

	t27 = ((x149-x150)%(x151-x152));

	if (t27 != -122) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x157 = 125500293254LLU;
	int16_t x158 = 3;
	uint64_t x159 = UINT64_MAX;
	uint64_t x160 = 5191147472LLU;
	uint64_t t28 = 54661LLU;

	t28 = ((x157-x158)%(x159-x160));

	if (t28 != 125500293251LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x161 = 3743LLU;
	uint32_t x162 = 6U;
	int8_t x163 = INT8_MIN;
	int32_t x164 = -949428278;
	volatile uint64_t t29 = 31936831229702LLU;

	t29 = ((x161-x162)%(x163-x164));

	if (t29 != 3737LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x169 = UINT8_MAX;
	int16_t x171 = -23;
	static volatile int64_t t30 = 1008276303864LL;

	t30 = ((x169-x170)%(x171-x172));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x185 = INT8_MAX;
	int8_t x186 = INT8_MIN;
	uint64_t x187 = UINT64_MAX;
	static int32_t x188 = 0;
	volatile uint64_t t31 = 54969922LLU;

	t31 = ((x185-x186)%(x187-x188));

	if (t31 != 255LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x193 = 11;
	static int16_t x196 = 46;

	t32 = ((x193-x194)%(x195-x196));

	if (t32 != 2178) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x197 = -245;
	int16_t x198 = INT16_MIN;
	int8_t x199 = INT8_MAX;
	uint32_t x200 = 105111609U;
	static volatile uint32_t t33 = 7832U;

	t33 = ((x197-x198)%(x199-x200));

	if (t33 != 32523U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x217 = UINT64_MAX;
	uint16_t x218 = 152U;
	uint64_t x219 = 3LLU;
	uint64_t t34 = 3009284239839LLU;

	t34 = ((x217-x218)%(x219-x220));

	if (t34 != 4294967139LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint16_t x221 = 0U;
	uint32_t x222 = 3199U;
	int8_t x223 = 0;
	int64_t x224 = 130880LL;
	int64_t t35 = 23586586649LL;

	t35 = ((x221-x222)%(x223-x224));

	if (t35 != 6017LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x225 = INT32_MIN;
	uint32_t x226 = UINT32_MAX;
	volatile int16_t x227 = INT16_MIN;
	uint64_t x228 = 1508025079714774LLU;
	volatile uint64_t t36 = 3918333LLU;

	t36 = ((x225-x226)%(x227-x228));

	if (t36 != 2147483649LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x229 = -2630;
	static volatile uint64_t x230 = UINT64_MAX;
	int8_t x231 = INT8_MIN;
	int64_t x232 = 154746LL;
	uint64_t t37 = 2023667894667LLU;

	t37 = ((x229-x230)%(x231-x232));

	if (t37 != 152245LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x233 = -1;
	static uint8_t x235 = UINT8_MAX;
	volatile int32_t t38 = 0;

	t38 = ((x233-x234)%(x235-x236));

	if (t38 != 194) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x241 = 211;
	int16_t x242 = INT16_MIN;
	int8_t x243 = -1;
	int16_t x244 = -115;
	int32_t t39 = 1;

	t39 = ((x241-x242)%(x243-x244));

	if (t39 != 33) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x245 = -1;
	volatile int64_t x246 = 1974816766034779LL;
	static int8_t x247 = INT8_MAX;
	int16_t x248 = INT16_MAX;
	static volatile int64_t t40 = 255888714834LL;

	t40 = ((x245-x246)%(x247-x248));

	if (t40 != -21980LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t t41 = 27;

	t41 = ((x249-x250)%(x251-x252));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x253 = INT32_MIN;
	int16_t x255 = INT16_MIN;
	static volatile int32_t t42 = 4715;

	t42 = ((x253-x254)%(x255-x256));

	if (t42 != -32640) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x257 = 1461832155334516LL;
	static uint8_t x258 = 9U;
	uint8_t x259 = 0U;
	volatile int64_t t43 = 769642345468223884LL;

	t43 = ((x257-x258)%(x259-x260));

	if (t43 != 2LL) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x261 = UINT32_MAX;
	int16_t x262 = INT16_MIN;
	uint32_t x264 = UINT32_MAX;
	volatile uint32_t t44 = 373245U;

	t44 = ((x261-x262)%(x263-x264));

	if (t44 != 32767U) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x267 = UINT32_MAX;
	int8_t x268 = INT8_MAX;
	static volatile uint64_t t45 = 214LLU;

	t45 = ((x265-x266)%(x267-x268));

	if (t45 != 3434LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x269 = 22U;
	int64_t x270 = -8564926LL;
	int64_t x271 = -2556LL;
	volatile uint16_t x272 = 4365U;
	int64_t t46 = -43518086696283LL;

	t46 = ((x269-x270)%(x271-x272));

	if (t46 != 3671LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x277 = 12289U;
	volatile int32_t x278 = -35;
	int8_t x279 = INT8_MAX;
	static volatile int32_t t47 = -6;

	t47 = ((x277-x278)%(x279-x280));

	if (t47 != 84) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x282 = INT16_MIN;
	int64_t x284 = -1LL;
	static int64_t t48 = 1180976651LL;

	t48 = ((x281-x282)%(x283-x284));

	if (t48 != 159613129LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x289 = 27U;
	uint32_t x290 = UINT32_MAX;
	int32_t x291 = -1;
	uint32_t x292 = 1774194721U;
	volatile uint32_t t49 = 23U;

	t49 = ((x289-x290)%(x291-x292));

	if (t49 != 28U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x293 = INT16_MAX;
	int16_t x294 = 1;
	volatile int32_t x295 = -153017;
	volatile int16_t x296 = 634;
	static volatile int32_t t50 = 81027;

	t50 = ((x293-x294)%(x295-x296));

	if (t50 != 32766) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x297 = UINT16_MAX;
	int16_t x298 = INT16_MIN;
	uint8_t x299 = UINT8_MAX;
	static int8_t x300 = -1;
	static int32_t t51 = 13472890;

	t51 = ((x297-x298)%(x299-x300));

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x302 = 30587;
	volatile int64_t x303 = INT64_MIN;

	t52 = ((x301-x302)%(x303-x304));

	if (t52 != -1792824695697333LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x306 = UINT64_MAX;
	int32_t x307 = 116003;
	uint32_t x308 = UINT32_MAX;

	t53 = ((x305-x306)%(x307-x308));

	if (t53 != 51055LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x309 = -1;
	int64_t x310 = INT64_MIN;
	volatile int16_t x311 = -1;
	int8_t x312 = INT8_MIN;
	volatile int64_t t54 = 241605LL;

	t54 = ((x309-x310)%(x311-x312));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x313 = -62366;
	volatile int64_t x315 = 8387041192144026LL;
	static int32_t x316 = INT32_MIN;
	int64_t t55 = -224290LL;

	t55 = ((x313-x314)%(x315-x316));

	if (t55 != 2147421282LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x318 = 7596U;
	volatile int32_t x319 = INT32_MIN;
	int64_t t56 = -2050169332384460169LL;

	t56 = ((x317-x318)%(x319-x320));

	if (t56 != -7596LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x321 = INT32_MAX;
	int64_t x323 = 100161715LL;
	int64_t x324 = -1LL;
	static volatile int64_t t57 = 31866LL;

	t57 = ((x321-x322)%(x323-x324));

	if (t57 != 44087549LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x329 = INT16_MAX;
	volatile int64_t x330 = INT64_MAX;
	uint32_t x331 = 19028895U;
	int64_t t58 = 4858LL;

	t58 = ((x329-x330)%(x331-x332));

	if (t58 != -12889215LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x338 = INT32_MIN;
	int8_t x339 = INT8_MAX;
	uint16_t x340 = UINT16_MAX;

	t59 = ((x337-x338)%(x339-x340));

	if (t59 != 2147483703U) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x349 = 13U;
	int16_t x350 = INT16_MAX;
	uint16_t x352 = 3461U;
	int32_t t60 = -22069052;

	t60 = ((x349-x350)%(x351-x352));

	if (t60 != -32754) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x353 = INT32_MAX;
	int64_t x354 = INT64_MAX;
	int8_t x355 = -6;
	volatile int64_t t61 = 1981582953494349595LL;

	t61 = ((x353-x354)%(x355-x356));

	if (t61 != -1770LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x361 = 10659;
	static int8_t x362 = 1;
	uint8_t x363 = UINT8_MAX;
	static int8_t x364 = -10;
	static volatile int32_t t62 = 144784;

	t62 = ((x361-x362)%(x363-x364));

	if (t62 != 58) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x366 = 103358U;
	volatile uint16_t x367 = 29U;
	volatile uint32_t t63 = 3U;

	t63 = ((x365-x366)%(x367-x368));

	if (t63 != 5U) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x369 = -448;
	static int64_t x370 = INT64_MIN;
	int8_t x371 = 0;
	static volatile int64_t t64 = -337792964122943338LL;

	t64 = ((x369-x370)%(x371-x372));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x373 = INT8_MIN;
	int32_t x374 = INT32_MIN;
	volatile uint16_t x375 = 3679U;

	t65 = ((x373-x374)%(x375-x376));

	if (t65 != 504) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x389 = 0U;
	uint32_t x390 = UINT32_MAX;
	int32_t x391 = INT32_MIN;
	int8_t x392 = -1;
	uint32_t t66 = 3436U;

	t66 = ((x389-x390)%(x391-x392));

	if (t66 != 1U) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x393 = INT8_MIN;
	static int64_t x394 = -1LL;
	int64_t x395 = INT64_MIN;
	static uint64_t x396 = 18411011564686LLU;
	static uint64_t t67 = 11377LLU;

	t67 = ((x393-x394)%(x395-x396));

	if (t67 != 36822023129245LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x397 = INT8_MAX;
	static int8_t x398 = -1;
	int16_t x399 = INT16_MIN;
	int64_t x400 = INT64_MIN;
	int64_t t68 = -9581LL;

	t68 = ((x397-x398)%(x399-x400));

	if (t68 != 128LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x401 = 68702344491380201LL;
	int32_t x402 = -75798824;
	static int8_t x403 = INT8_MIN;
	volatile uint64_t t69 = 48707LLU;

	t69 = ((x401-x402)%(x403-x404));

	if (t69 != 68702344567179025LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x405 = INT16_MIN;
	uint64_t x407 = UINT64_MAX;
	volatile int16_t x408 = 0;
	volatile uint64_t t70 = 2127587LLU;

	t70 = ((x405-x406)%(x407-x408));

	if (t70 != 9223372036854743040LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x409 = -1;
	int16_t x410 = -1;
	volatile uint8_t x412 = 16U;

	t71 = ((x409-x410)%(x411-x412));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x417 = -1;
	uint64_t x419 = 82LLU;
	int16_t x420 = INT16_MIN;
	volatile uint64_t t72 = 188LLU;

	t72 = ((x417-x418)%(x419-x420));

	if (t72 != 5130LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x421 = 7U;
	int32_t x422 = INT32_MAX;
	int64_t x423 = INT64_MIN;
	uint16_t x424 = 0U;

	t73 = ((x421-x422)%(x423-x424));

	if (t73 != -2147483640LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x429 = -1;
	int16_t x430 = INT16_MAX;
	int64_t x431 = -190488656097LL;
	uint64_t x432 = UINT64_MAX;
	volatile uint64_t t74 = 3137088052LLU;

	t74 = ((x429-x430)%(x431-x432));

	if (t74 != 190488623328LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x433 = INT16_MAX;
	int8_t x435 = INT8_MAX;
	volatile int32_t x436 = 0;

	t75 = ((x433-x434)%(x435-x436));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x441 = INT32_MAX;
	int8_t x442 = 2;
	int8_t x443 = -3;
	int32_t x444 = -2;
	int32_t t76 = 32;

	t76 = ((x441-x442)%(x443-x444));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x445 = INT16_MAX;
	uint32_t x446 = 128761355U;
	uint64_t x447 = UINT64_MAX;
	volatile uint32_t x448 = UINT32_MAX;
	uint64_t t77 = 206593470LLU;

	t77 = ((x445-x446)%(x447-x448));

	if (t77 != 4166238708LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x449 = 36;
	uint64_t x450 = 37716LLU;
	int8_t x451 = INT8_MAX;
	int64_t x452 = INT64_MAX;
	uint64_t t78 = 44057949912LLU;

	t78 = ((x449-x450)%(x451-x452));

	if (t78 != 9223372036854738000LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x454 = 0U;
	volatile int16_t x455 = -1;
	volatile int8_t x456 = INT8_MAX;
	int64_t t79 = 230946351847264LL;

	t79 = ((x453-x454)%(x455-x456));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x457 = 8LLU;
	int32_t x458 = INT32_MIN;
	static uint64_t x459 = UINT64_MAX;
	int16_t x460 = INT16_MIN;
	volatile uint64_t t80 = 964LLU;

	t80 = ((x457-x458)%(x459-x460));

	if (t80 != 10LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x461 = UINT8_MAX;
	volatile uint64_t x462 = 7361786200156LLU;
	static int64_t x463 = -1LL;
	static int32_t x464 = 1020534;
	uint64_t t81 = 378156581334015726LLU;

	t81 = ((x461-x462)%(x463-x464));

	if (t81 != 18446736711923351715LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x465 = UINT8_MAX;
	volatile int32_t x467 = 14277515;
	int16_t x468 = INT16_MIN;
	volatile int32_t t82 = 33224140;

	t82 = ((x465-x466)%(x467-x468));

	if (t82 != 256) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x471 = 8;
	static uint8_t x472 = 17U;
	int64_t t83 = -254LL;

	t83 = ((x469-x470)%(x471-x472));

	if (t83 != -8LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x477 = -1;
	static volatile int8_t x478 = INT8_MAX;
	uint32_t x479 = 29396844U;
	int32_t x480 = INT32_MIN;
	static uint32_t t84 = 190255057U;

	t84 = ((x477-x478)%(x479-x480));

	if (t84 != 2118086676U) { NG(); } else { ; }
	
}

void f85(void) {
	static int64_t x497 = -56079688673239991LL;
	int16_t x498 = -1;
	static int8_t x499 = 9;
	int8_t x500 = INT8_MAX;
	volatile int64_t t85 = -216LL;

	t85 = ((x497-x498)%(x499-x500));

	if (t85 != -74LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x505 = INT8_MIN;
	static volatile int64_t x506 = 2LL;
	int16_t x507 = -167;
	int8_t x508 = INT8_MIN;
	int64_t t86 = -258855438011LL;

	t86 = ((x505-x506)%(x507-x508));

	if (t86 != -13LL) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x513 = -1;
	int32_t x514 = INT32_MAX;
	volatile uint32_t x515 = UINT32_MAX;
	uint32_t t87 = 0U;

	t87 = ((x513-x514)%(x515-x516));

	if (t87 != 1280U) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x517 = -491266884515LL;
	static uint16_t x518 = UINT16_MAX;
	volatile int16_t x519 = 5636;
	uint64_t x520 = UINT64_MAX;
	uint64_t t88 = 32954127LLU;

	t88 = ((x517-x518)%(x519-x520));

	if (t88 != 4247LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x533 = -111069120;
	int8_t x534 = 13;
	static int32_t x535 = 118;
	uint64_t x536 = 4129370071LLU;
	volatile uint64_t t89 = 56LLU;

	t89 = ((x533-x534)%(x535-x536));

	if (t89 != 4018300820LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x537 = 24U;
	uint16_t x539 = 1U;
	volatile uint8_t x540 = 0U;

	t90 = ((x537-x538)%(x539-x540));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x541 = UINT64_MAX;
	int32_t x542 = INT32_MAX;
	int8_t x543 = INT8_MAX;
	uint32_t x544 = 789495594U;
	volatile uint64_t t91 = 1007LLU;

	t91 = ((x541-x542)%(x543-x544));

	if (t91 != 2935529435LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x545 = INT16_MAX;
	int8_t x546 = -1;
	uint8_t x547 = 10U;

	t92 = ((x545-x546)%(x547-x548));

	if (t92 != 62) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x550 = INT8_MAX;
	int64_t x551 = INT64_MAX;
	int8_t x552 = INT8_MAX;
	volatile int64_t t93 = -16069993995LL;

	t93 = ((x549-x550)%(x551-x552));

	if (t93 != 308974066LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x554 = 1LLU;
	int32_t x555 = 14068;
	volatile uint64_t t94 = 58525872071088LLU;

	t94 = ((x553-x554)%(x555-x556));

	if (t94 != 10998LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x558 = INT16_MAX;
	static int64_t x559 = -10862966165397LL;
	static int64_t t95 = 1338299373314LL;

	t95 = ((x557-x558)%(x559-x560));

	if (t95 != -32512LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x561 = -1LL;
	uint16_t x562 = 2U;
	uint64_t x563 = 0LLU;
	uint64_t t96 = 117568599397520995LLU;

	t96 = ((x561-x562)%(x563-x564));

	if (t96 != 32765LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x565 = INT16_MIN;
	uint8_t x566 = 102U;
	volatile int64_t t97 = 29067299486LL;

	t97 = ((x565-x566)%(x567-x568));

	if (t97 != -52LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x569 = INT64_MIN;
	int8_t x570 = INT8_MIN;
	int64_t x571 = 8056734781929518LL;
	int64_t t98 = -3277LL;

	t98 = ((x569-x570)%(x571-x572));

	if (t98 != -6464989606113776LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x577 = INT8_MIN;
	int32_t x579 = -1;
	uint16_t x580 = UINT16_MAX;
	volatile int32_t t99 = 840;

	t99 = ((x577-x578)%(x579-x580));

	if (t99 != -128) { NG(); } else { ; }
	
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

