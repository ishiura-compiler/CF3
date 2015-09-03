#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 28475717570LLU;
int16_t x2 = -198;
int32_t x6 = 1;
volatile int32_t x11 = -1;
static int64_t t2 = -7LL;
int16_t x19 = INT16_MAX;
static int32_t x33 = -1;
static int16_t x60 = -6997;
int64_t x62 = 5511783927LL;
int8_t x70 = INT8_MIN;
static int8_t x72 = INT8_MIN;
int8_t x79 = 2;
volatile int64_t t12 = 19041808368LL;
int8_t x82 = -1;
uint64_t t13 = 177394811885340707LLU;
uint32_t x91 = 97U;
static int32_t x97 = INT32_MAX;
int16_t x99 = INT16_MAX;
static uint32_t x105 = 1009320533U;
uint8_t x108 = 6U;
int64_t x109 = INT64_MAX;
uint64_t x119 = 545538081LLU;
int16_t x123 = INT16_MIN;
volatile int32_t x126 = 203;
static int64_t x132 = INT64_MIN;
volatile int64_t t23 = -3238076060781623435LL;
int8_t x136 = 31;
static uint64_t t24 = 80LLU;
int8_t x138 = INT8_MAX;
uint16_t x154 = 985U;
uint16_t x169 = UINT16_MAX;
int8_t x172 = INT8_MIN;
int16_t x173 = -1;
int64_t t32 = 16LL;
int64_t x197 = -1LL;
uint32_t x199 = 27U;
volatile int64_t t33 = 5LL;
int64_t x205 = INT64_MIN;
int16_t x208 = -1;
static uint16_t x209 = 1007U;
int32_t x237 = -5992;
int8_t x239 = INT8_MIN;
int16_t x243 = INT16_MIN;
static uint16_t x251 = UINT16_MAX;
int8_t x253 = INT8_MIN;
static int16_t x264 = INT16_MAX;
int64_t x265 = -116LL;
static int16_t x269 = INT16_MAX;
static int32_t x275 = INT32_MIN;
uint64_t t49 = 46154920766380978LLU;
uint8_t x282 = UINT8_MAX;
volatile uint64_t x300 = 305LLU;
int64_t x301 = -1LL;
uint32_t x302 = UINT32_MAX;
volatile uint64_t x310 = UINT64_MAX;
uint32_t x316 = 2876347U;
volatile uint32_t t56 = 9U;
static uint16_t x327 = 11U;
volatile int16_t x344 = -1;
uint16_t x357 = 12U;
static int32_t x374 = -130190864;
uint16_t x378 = 0U;
static uint16_t x381 = 1417U;
uint16_t x385 = 5183U;
int64_t x388 = INT64_MIN;
static uint32_t x391 = 581709050U;
static volatile uint64_t t73 = 0LLU;
static int64_t x396 = -1LL;
static volatile int32_t t75 = 0;
static uint32_t x407 = UINT32_MAX;
int8_t x410 = 1;
static volatile int16_t x414 = -1;
int64_t x417 = INT64_MAX;
static uint16_t x428 = 766U;
int16_t x429 = -13;
int16_t x430 = INT16_MIN;
uint8_t x438 = UINT8_MAX;
static volatile int32_t x441 = INT32_MIN;
int8_t x446 = INT8_MIN;
static int64_t x448 = -156948LL;
int64_t t86 = -155480304931591668LL;
int16_t x451 = INT16_MAX;
int32_t x452 = INT32_MIN;
volatile int64_t t89 = 877341LL;
int16_t x465 = -1;
int8_t x468 = -1;
uint32_t x470 = UINT32_MAX;
static uint64_t x471 = 2058569816137LLU;
uint32_t x474 = UINT32_MAX;
uint8_t x475 = 38U;
volatile uint32_t t93 = 0U;
int8_t x478 = 1;
static uint64_t x480 = UINT64_MAX;
volatile int32_t x488 = INT32_MIN;
volatile uint32_t t96 = 389571U;
static volatile int64_t x495 = INT64_MIN;
volatile int64_t t97 = -343LL;
static uint8_t x498 = UINT8_MAX;
uint16_t x499 = UINT16_MAX;
uint32_t x501 = UINT32_MAX;
uint32_t x503 = UINT32_MAX;


void f0(void) {
	int32_t x3 = 22215541;
	uint8_t x4 = UINT8_MAX;
	uint64_t t0 = 51031LLU;

	t0 = (x1^(x2*(x3&x4)));

	if (t0 != 18446744045233852992LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint32_t x5 = 68147U;
	volatile int64_t x7 = INT64_MAX;
	int64_t x8 = -1LL;
	int64_t t1 = 9717LL;

	t1 = (x5^(x6*(x7&x8)));

	if (t1 != 9223372036854707660LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MAX;
	static int16_t x10 = -13;
	uint32_t x12 = 1013U;

	t2 = (x9^(x10*(x11&x12)));

	if (t2 != 9223372032559821680LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = UINT16_MAX;
	uint64_t x18 = UINT64_MAX;
	volatile int32_t x20 = INT32_MIN;
	volatile uint64_t t3 = 300302887807LLU;

	t3 = (x17^(x18*(x19&x20)));

	if (t3 != 65535LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MAX;
	int64_t x22 = -526502368264LL;
	int8_t x23 = -1;
	static int16_t x24 = INT16_MIN;
	static int64_t t4 = 254395919222LL;

	t4 = (x21^(x22*(x23&x24)));

	if (t4 != 9206119607251501055LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x34 = UINT16_MAX;
	int64_t x35 = INT64_MIN;
	uint32_t x36 = 3575015U;
	int64_t t5 = 13517007LL;

	t5 = (x33^(x34*(x35&x36)));

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x49 = UINT64_MAX;
	volatile uint32_t x50 = 7737671U;
	int8_t x51 = INT8_MIN;
	int32_t x52 = INT32_MIN;
	volatile uint64_t t6 = 64LLU;

	t6 = (x49^(x50*(x51&x52)));

	if (t6 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x53 = INT32_MIN;
	int64_t x54 = -1LL;
	static int32_t x55 = 406357;
	static int64_t x56 = INT64_MIN;
	volatile int64_t t7 = -7834214LL;

	t7 = (x53^(x54*(x55&x56)));

	if (t7 != -2147483648LL) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x57 = 1U;
	int64_t x58 = 55298160730826LL;
	static int16_t x59 = 167;
	static volatile int64_t t8 = -125884824107LL;

	t8 = (x57^(x58*(x59&x60)));

	if (t8 != 9013600199124639LL) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x61 = 1987LLU;
	uint32_t x63 = 567852714U;
	int32_t x64 = -3;
	uint64_t t9 = 895028103360956613LLU;

	t9 = (x61^(x62*(x63&x64)));

	if (t9 != 3129881450904959963LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x69 = INT8_MAX;
	volatile uint16_t x71 = 367U;
	static volatile int32_t t10 = -375266114;

	t10 = (x69^(x70*(x71&x72)));

	if (t10 != -32641) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x73 = -1;
	int64_t x74 = 16LL;
	static volatile int64_t x75 = INT64_MIN;
	int64_t x76 = INT64_MAX;
	int64_t t11 = -20983069353LL;

	t11 = (x73^(x74*(x75&x76)));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x77 = -15381LL;
	volatile int16_t x78 = 0;
	int8_t x80 = -37;

	t12 = (x77^(x78*(x79&x80)));

	if (t12 != -15381LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x81 = 8482373278613795464LLU;
	uint64_t x83 = UINT64_MAX;
	int16_t x84 = 0;

	t13 = (x81^(x82*(x83&x84)));

	if (t13 != 8482373278613795464LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x85 = 0U;
	static int32_t x86 = -1;
	int16_t x87 = -1;
	uint16_t x88 = 217U;
	volatile int32_t t14 = 434;

	t14 = (x85^(x86*(x87&x88)));

	if (t14 != -217) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x89 = UINT16_MAX;
	uint64_t x90 = 51603362665LLU;
	int8_t x92 = INT8_MAX;
	uint64_t t15 = 62723400494LLU;

	t15 = (x89^(x90*(x91&x92)));

	if (t15 != 5005526230326LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x98 = -1;
	int64_t x100 = -1LL;
	static volatile int64_t t16 = -7733901420LL;

	t16 = (x97^(x98*(x99&x100)));

	if (t16 != -2147450882LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x106 = 63504269;
	int16_t x107 = -30;
	static volatile uint32_t t17 = 2753U;

	t17 = (x105^(x106*(x107&x108)));

	if (t17 != 1001979215U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x110 = UINT64_MAX;
	uint8_t x111 = 66U;
	int64_t x112 = -1LL;
	volatile uint64_t t18 = 319338696661LLU;

	t18 = (x109^(x110*(x111&x112)));

	if (t18 != 9223372036854775873LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x113 = 14970;
	int8_t x114 = -1;
	static volatile int16_t x115 = -339;
	int32_t x116 = -1;
	int32_t t19 = 56;

	t19 = (x113^(x114*(x115&x116)));

	if (t19 != 15145) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x117 = INT8_MIN;
	int64_t x118 = -1LL;
	int32_t x120 = INT32_MIN;
	static volatile uint64_t t20 = 6684628383LLU;

	t20 = (x117^(x118*(x119&x120)));

	if (t20 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x121 = 50971U;
	static volatile uint64_t x122 = 818911307LLU;
	uint16_t x124 = 2064U;
	volatile uint64_t t21 = 171650605LLU;

	t21 = (x121^(x122*(x123&x124)));

	if (t21 != 50971LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x125 = INT32_MIN;
	uint8_t x127 = UINT8_MAX;
	int16_t x128 = 1;
	volatile int32_t t22 = 506;

	t22 = (x125^(x126*(x127&x128)));

	if (t22 != -2147483445) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x129 = -209579;
	static uint8_t x130 = 4U;
	static int16_t x131 = 3210;

	t23 = (x129^(x130*(x131&x132)));

	if (t23 != -209579LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x133 = INT8_MAX;
	static uint16_t x134 = UINT16_MAX;
	uint64_t x135 = 6671LLU;

	t24 = (x133^(x134*(x135&x136)));

	if (t24 != 982926LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x137 = 267640;
	static int32_t x139 = 14837;
	int32_t x140 = 190;
	static volatile int32_t t25 = 745918;

	t25 = (x137^(x138*(x139&x140)));

	if (t25 != 281652) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x153 = -1LL;
	int32_t x155 = INT32_MAX;
	uint64_t x156 = 2031LLU;
	static uint64_t t26 = 1470289416349LLU;

	t26 = (x153^(x154*(x155&x156)));

	if (t26 != 18446744073707551080LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint8_t x161 = UINT8_MAX;
	uint8_t x162 = UINT8_MAX;
	int32_t x163 = INT32_MAX;
	int64_t x164 = 107LL;
	volatile int64_t t27 = -1825LL;

	t27 = (x161^(x162*(x163&x164)));

	if (t27 != 27242LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x165 = UINT32_MAX;
	uint8_t x166 = 93U;
	int16_t x167 = INT16_MAX;
	volatile int32_t x168 = INT32_MIN;
	uint32_t t28 = UINT32_MAX;

	t28 = (x165^(x166*(x167&x168)));

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x170 = INT8_MIN;
	static uint16_t x171 = UINT16_MAX;
	int32_t t29 = 200826913;

	t29 = (x169^(x170*(x171&x172)));

	if (t29 != -8339457) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x174 = 5989U;
	int16_t x175 = INT16_MIN;
	uint8_t x176 = 58U;
	static volatile int32_t t30 = -39;

	t30 = (x173^(x174*(x175&x176)));

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x185 = 4029U;
	int8_t x186 = 31;
	int32_t x187 = INT32_MIN;
	int16_t x188 = INT16_MAX;
	volatile int32_t t31 = 0;

	t31 = (x185^(x186*(x187&x188)));

	if (t31 != 4029) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x189 = INT8_MIN;
	uint8_t x190 = 1U;
	int8_t x191 = INT8_MIN;
	static int64_t x192 = 2131572LL;

	t32 = (x189^(x190*(x191&x192)));

	if (t32 != -2131584LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x198 = UINT16_MAX;
	int16_t x200 = 31;

	t33 = (x197^(x198*(x199&x200)));

	if (t33 != -1769446LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x206 = -1;
	uint16_t x207 = 3820U;
	int64_t t34 = 382368677700LL;

	t34 = (x205^(x206*(x207&x208)));

	if (t34 != 9223372036854771988LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x210 = 1807U;
	int16_t x211 = INT16_MIN;
	static volatile int32_t x212 = -5;
	uint32_t t35 = 23U;

	t35 = (x209^(x210*(x211&x212)));

	if (t35 != 4235756527U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint16_t x213 = 552U;
	int8_t x214 = INT8_MIN;
	volatile uint64_t x215 = 32361828817255280LLU;
	int8_t x216 = INT8_MIN;
	static uint64_t t36 = 48342981599999LLU;

	t36 = (x213^(x214*(x215&x216)));

	if (t36 != 14304429985100890664LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x221 = -210344516;
	static volatile uint64_t x222 = UINT64_MAX;
	static uint16_t x223 = 3U;
	int64_t x224 = INT64_MIN;
	volatile uint64_t t37 = 427406584370829251LLU;

	t37 = (x221^(x222*(x223&x224)));

	if (t37 != 18446744073499207100LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x229 = INT32_MIN;
	int8_t x230 = -1;
	volatile uint16_t x231 = 198U;
	int32_t x232 = -1;
	int32_t t38 = -6;

	t38 = (x229^(x230*(x231&x232)));

	if (t38 != 2147483450) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x233 = -1LL;
	uint32_t x234 = 14601228U;
	volatile uint8_t x235 = UINT8_MAX;
	volatile uint16_t x236 = UINT16_MAX;
	volatile int64_t t39 = -701LL;

	t39 = (x233^(x234*(x235&x236)));

	if (t39 != -3723313141LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x238 = -45045437;
	uint32_t x240 = 304213893U;
	static volatile uint32_t t40 = 41350766U;

	t40 = (x237^(x238*(x239&x240)));

	if (t40 != 2181219864U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x241 = INT32_MAX;
	static int16_t x242 = INT16_MIN;
	int8_t x244 = 7;
	static int32_t t41 = INT32_MAX;

	t41 = (x241^(x242*(x243&x244)));

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x245 = -62347630072739961LL;
	volatile int32_t x246 = -1;
	int32_t x247 = 7;
	int8_t x248 = -1;
	int64_t t42 = -377672883065362452LL;

	t42 = (x245^(x246*(x247&x248)));

	if (t42 != 62347630072739966LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x249 = INT64_MAX;
	static uint64_t x250 = 16LLU;
	volatile int64_t x252 = INT64_MAX;
	volatile uint64_t t43 = 2081LLU;

	t43 = (x249^(x250*(x251&x252)));

	if (t43 != 9223372036853727247LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x254 = 2135U;
	static int32_t x255 = INT32_MIN;
	int32_t x256 = INT32_MAX;
	static int32_t t44 = 0;

	t44 = (x253^(x254*(x255&x256)));

	if (t44 != -128) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x257 = UINT64_MAX;
	uint8_t x258 = 11U;
	int16_t x259 = INT16_MAX;
	static uint16_t x260 = 3U;
	uint64_t t45 = 126773614438LLU;

	t45 = (x257^(x258*(x259&x260)));

	if (t45 != 18446744073709551582LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x261 = -1;
	static int16_t x262 = INT16_MIN;
	int16_t x263 = INT16_MAX;
	volatile int32_t t46 = 0;

	t46 = (x261^(x262*(x263&x264)));

	if (t46 != 1073709055) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x266 = -1LL;
	int8_t x267 = -1;
	int16_t x268 = INT16_MIN;
	int64_t t47 = -8LL;

	t47 = (x265^(x266*(x267&x268)));

	if (t47 != -32884LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x270 = INT16_MAX;
	int8_t x271 = -26;
	volatile int8_t x272 = INT8_MAX;
	int32_t t48 = 1;

	t48 = (x269^(x270*(x271&x272)));

	if (t48 != 3309669) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x273 = INT32_MIN;
	uint64_t x274 = 45304028598785538LLU;
	int16_t x276 = -1;

	t49 = (x273^(x274*(x275&x276)));

	if (t49 != 1279914000250830848LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x281 = 19060U;
	int32_t x283 = INT32_MAX;
	uint16_t x284 = UINT16_MAX;
	int32_t t50 = 1;

	t50 = (x281^(x282*(x283&x284)));

	if (t50 != 16692597) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x293 = INT8_MAX;
	int16_t x294 = 9;
	int8_t x295 = -39;
	uint64_t x296 = 2899501962794410280LLU;
	volatile uint64_t t51 = 498324LLU;

	t51 = (x293^(x294*(x295&x296)));

	if (t51 != 7648773591440140599LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x297 = INT16_MAX;
	int8_t x298 = -1;
	uint32_t x299 = 2615U;
	uint64_t t52 = 1870LLU;

	t52 = (x297^(x298*(x299&x300)));

	if (t52 != 18446744073709518896LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int16_t x303 = INT16_MIN;
	static volatile uint32_t x304 = 52993543U;
	volatile int64_t t53 = -40877821642LL;

	t53 = (x301^(x302*(x303&x304)));

	if (t53 != -4241981441LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x305 = 8U;
	static volatile int8_t x306 = INT8_MIN;
	static volatile int64_t x307 = INT64_MAX;
	volatile int16_t x308 = 0;
	static volatile int64_t t54 = 56326504LL;

	t54 = (x305^(x306*(x307&x308)));

	if (t54 != 8LL) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x309 = INT64_MIN;
	uint32_t x311 = UINT32_MAX;
	uint32_t x312 = UINT32_MAX;
	volatile uint64_t t55 = 105LLU;

	t55 = (x309^(x310*(x311&x312)));

	if (t55 != 9223372032559808513LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x313 = INT32_MIN;
	uint8_t x314 = 1U;
	static int8_t x315 = INT8_MIN;

	t56 = (x313^(x314*(x315&x316)));

	if (t56 != 2150359936U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x321 = INT64_MIN;
	int32_t x322 = INT32_MIN;
	int32_t x323 = -1;
	uint32_t x324 = 563U;
	int64_t t57 = 489765973857542LL;

	t57 = (x321^(x322*(x323&x324)));

	if (t57 != -9223372034707292160LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x325 = INT64_MIN;
	int16_t x326 = INT16_MIN;
	int64_t x328 = INT64_MIN;
	volatile int64_t t58 = INT64_MIN;

	t58 = (x325^(x326*(x327&x328)));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x329 = 19U;
	volatile uint64_t x330 = UINT64_MAX;
	int16_t x331 = INT16_MIN;
	int8_t x332 = INT8_MIN;
	uint64_t t59 = 14025LLU;

	t59 = (x329^(x330*(x331&x332)));

	if (t59 != 32787LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x333 = 85727806281LLU;
	uint8_t x334 = UINT8_MAX;
	int16_t x335 = INT16_MAX;
	int32_t x336 = -1;
	volatile uint64_t t60 = 108553121738365844LLU;

	t60 = (x333^(x334*(x335&x336)));

	if (t60 != 85726985288LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x337 = INT16_MAX;
	uint8_t x338 = 35U;
	volatile int16_t x339 = INT16_MIN;
	int64_t x340 = -1LL;
	static volatile int64_t t61 = -713LL;

	t61 = (x337^(x338*(x339&x340)));

	if (t61 != -1114113LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x341 = 0U;
	int64_t x342 = -1LL;
	volatile int32_t x343 = -41;
	volatile int64_t t62 = -13LL;

	t62 = (x341^(x342*(x343&x344)));

	if (t62 != 41LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x345 = -1;
	volatile int32_t x346 = -2014913;
	volatile int32_t x347 = INT32_MIN;
	int8_t x348 = INT8_MAX;
	volatile int32_t t63 = -131;

	t63 = (x345^(x346*(x347&x348)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x349 = INT8_MIN;
	uint8_t x350 = 0U;
	uint64_t x351 = 1834986853102LLU;
	uint64_t x352 = 16030857LLU;
	volatile uint64_t t64 = 27184610639752LLU;

	t64 = (x349^(x350*(x351&x352)));

	if (t64 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x353 = UINT8_MAX;
	static int16_t x354 = INT16_MIN;
	int32_t x355 = -1;
	int16_t x356 = 924;
	volatile int32_t t65 = 17;

	t65 = (x353^(x354*(x355&x356)));

	if (t65 != -30277377) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x358 = INT8_MIN;
	uint32_t x359 = UINT32_MAX;
	int32_t x360 = 603945238;
	volatile uint32_t t66 = 441981U;

	t66 = (x357^(x358*(x359&x360)));

	if (t66 != 4420876U) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x365 = INT16_MAX;
	static uint16_t x366 = 782U;
	int64_t x367 = -151949LL;
	int32_t x368 = -642025;
	int64_t t67 = -7059066LL;

	t67 = (x365^(x366*(x367&x368)));

	if (t67 != -607760907LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x369 = INT8_MIN;
	int64_t x370 = INT64_MIN;
	uint32_t x371 = 24U;
	int64_t x372 = 3666531LL;
	volatile int64_t t68 = -8455564397147497LL;

	t68 = (x369^(x370*(x371&x372)));

	if (t68 != -128LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x373 = 105U;
	int16_t x375 = -1;
	uint32_t x376 = UINT32_MAX;
	uint32_t t69 = 1083U;

	t69 = (x373^(x374*(x375&x376)));

	if (t69 != 130190969U) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x377 = -10;
	static volatile int8_t x379 = INT8_MIN;
	int64_t x380 = -1LL;
	static int64_t t70 = 1131764179605LL;

	t70 = (x377^(x378*(x379&x380)));

	if (t70 != -10LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x382 = -1LL;
	uint64_t x383 = 23556576514166LLU;
	int8_t x384 = -1;
	volatile uint64_t t71 = 335LLU;

	t71 = (x381^(x382*(x383&x384)));

	if (t71 != 18446720517133036035LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x386 = 98U;
	int16_t x387 = INT16_MAX;
	volatile int64_t t72 = -7097945371LL;

	t72 = (x385^(x386*(x387&x388)));

	if (t72 != 5183LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x389 = 555U;
	uint64_t x390 = UINT64_MAX;
	uint8_t x392 = UINT8_MAX;

	t73 = (x389^(x390*(x391&x392)));

	if (t73 != 18446744073709550893LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x393 = INT16_MAX;
	int8_t x394 = 0;
	int32_t x395 = INT32_MAX;
	volatile int64_t t74 = 3117774LL;

	t74 = (x393^(x394*(x395&x396)));

	if (t74 != 32767LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x397 = INT16_MIN;
	static volatile int32_t x398 = -18217644;
	uint8_t x399 = 1U;
	static uint16_t x400 = 15U;

	t75 = (x397^(x398*(x399&x400)));

	if (t75 != 18187604) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x401 = -1;
	static int8_t x402 = INT8_MIN;
	static uint32_t x403 = 151841U;
	uint64_t x404 = UINT64_MAX;
	uint64_t t76 = 135416642058205607LLU;

	t76 = (x401^(x402*(x403&x404)));

	if (t76 != 19435647LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x405 = 3U;
	int8_t x406 = 10;
	static uint16_t x408 = UINT16_MAX;
	uint32_t t77 = 1239U;

	t77 = (x405^(x406*(x407&x408)));

	if (t77 != 655349U) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x409 = -189;
	volatile int64_t x411 = -1LL;
	uint64_t x412 = 1242540132505609361LLU;
	volatile uint64_t t78 = 1LLU;

	t78 = (x409^(x410*(x411&x412)));

	if (t78 != 17204203941203942354LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x413 = -1;
	int32_t x415 = INT32_MAX;
	static int8_t x416 = INT8_MAX;
	volatile int32_t t79 = 58088;

	t79 = (x413^(x414*(x415&x416)));

	if (t79 != 126) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x418 = INT8_MIN;
	uint64_t x419 = 672120559972284707LLU;
	int64_t x420 = 1185549162736313159LL;
	volatile uint64_t t80 = 162209657LLU;

	t80 = (x417^(x418*(x419&x420)));

	if (t80 != 12242194744350900607LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x425 = INT32_MIN;
	int8_t x426 = INT8_MIN;
	uint8_t x427 = 1U;
	static int32_t t81 = INT32_MIN;

	t81 = (x425^(x426*(x427&x428)));

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x431 = INT64_MIN;
	static volatile uint16_t x432 = 975U;
	volatile int64_t t82 = 2LL;

	t82 = (x429^(x430*(x431&x432)));

	if (t82 != -13LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x433 = -1LL;
	uint32_t x434 = 4651U;
	int8_t x435 = INT8_MAX;
	uint8_t x436 = 4U;
	int64_t t83 = 24361482766657LL;

	t83 = (x433^(x434*(x435&x436)));

	if (t83 != -18605LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x437 = 469LLU;
	uint8_t x439 = 0U;
	static uint8_t x440 = 104U;
	uint64_t t84 = 32985290360910446LLU;

	t84 = (x437^(x438*(x439&x440)));

	if (t84 != 469LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x442 = 3U;
	uint64_t x443 = 962104351930225LLU;
	uint8_t x444 = 109U;
	uint64_t t85 = 162501416LLU;

	t85 = (x441^(x442*(x443&x444)));

	if (t85 != 18446744071562068259LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x445 = INT16_MIN;
	int8_t x447 = INT8_MIN;

	t86 = (x445^(x446*(x447&x448)));

	if (t86 != -20103168LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x449 = INT32_MIN;
	int32_t x450 = INT32_MIN;
	int32_t t87 = INT32_MIN;

	t87 = (x449^(x450*(x451&x452)));

	if (t87 != INT32_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x453 = INT16_MIN;
	int8_t x454 = INT8_MIN;
	uint32_t x455 = 114U;
	uint64_t x456 = UINT64_MAX;
	uint64_t t88 = 2LLU;

	t88 = (x453^(x454*(x455&x456)));

	if (t88 != 18176LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x457 = INT16_MIN;
	int16_t x458 = -1639;
	int64_t x459 = INT64_MAX;
	uint8_t x460 = 0U;

	t89 = (x457^(x458*(x459&x460)));

	if (t89 != -32768LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x461 = 71U;
	static uint32_t x462 = 2095U;
	static uint16_t x463 = 741U;
	static int64_t x464 = INT64_MAX;
	volatile int64_t t90 = -242951LL;

	t90 = (x461^(x462*(x463&x464)));

	if (t90 != 1552460LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x466 = 5U;
	int64_t x467 = -1LL;
	static volatile int64_t t91 = 2042162629LL;

	t91 = (x465^(x466*(x467&x468)));

	if (t91 != 4LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x469 = 1;
	volatile int16_t x472 = INT16_MIN;
	uint64_t t92 = 25LLU;

	t92 = (x469^(x470*(x471&x472)));

	if (t92 != 5499596773891342337LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x473 = -61;
	int32_t x476 = INT32_MAX;

	t93 = (x473^(x474*(x475&x476)));

	if (t93 != 25U) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint64_t x477 = UINT64_MAX;
	uint64_t x479 = 12LLU;
	uint64_t t94 = 270033696085873LLU;

	t94 = (x477^(x478*(x479&x480)));

	if (t94 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x481 = -1;
	volatile uint64_t x482 = UINT64_MAX;
	static int16_t x483 = -13;
	int32_t x484 = INT32_MIN;
	uint64_t t95 = 2046LLU;

	t95 = (x481^(x482*(x483&x484)));

	if (t95 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x485 = INT8_MIN;
	static volatile uint32_t x486 = 11U;
	int8_t x487 = INT8_MIN;

	t96 = (x485^(x486*(x487&x488)));

	if (t96 != 2147483520U) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x493 = 619061059U;
	int16_t x494 = 7;
	static int32_t x496 = 53;

	t97 = (x493^(x494*(x495&x496)));

	if (t97 != 619061059LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x497 = 41LL;
	volatile int64_t x500 = INT64_MAX;
	volatile int64_t t98 = 276430682656321585LL;

	t98 = (x497^(x498*(x499&x500)));

	if (t98 != 16711464LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x502 = INT64_MIN;
	uint64_t x504 = 120380260731616808LLU;
	uint64_t t99 = 361LLU;

	t99 = (x501^(x502*(x503&x504)));

	if (t99 != 4294967295LLU) { NG(); } else { ; }
	
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

