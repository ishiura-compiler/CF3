#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = INT8_MIN;
uint8_t x5 = UINT8_MAX;
uint8_t x7 = 32U;
static volatile uint8_t x15 = 2U;
volatile uint8_t x23 = UINT8_MAX;
volatile int32_t x25 = INT32_MIN;
uint32_t x28 = 937977U;
static volatile uint64_t t6 = 10454184397LLU;
int64_t x31 = 12510112389485932LL;
int16_t x52 = INT16_MIN;
uint64_t t11 = 117756LLU;
volatile uint64_t t13 = 3LLU;
int16_t x64 = INT16_MAX;
volatile uint16_t x66 = 1973U;
int8_t x67 = INT8_MIN;
int64_t x71 = INT64_MAX;
int64_t x74 = -1LL;
static volatile int16_t x82 = INT16_MIN;
volatile int8_t x84 = 3;
static int8_t x87 = INT8_MIN;
int32_t t20 = -7677810;
int32_t x93 = INT32_MAX;
volatile uint32_t x96 = 89349U;
uint64_t x97 = UINT64_MAX;
int32_t x99 = INT32_MIN;
volatile int8_t x107 = 49;
static volatile int16_t x125 = -250;
volatile int8_t x127 = -8;
uint32_t x137 = 28U;
static volatile int32_t x142 = INT32_MIN;
static uint16_t x144 = 23U;
volatile int32_t t34 = -65;
volatile uint8_t x146 = 9U;
int32_t x147 = INT32_MIN;
int8_t x152 = -1;
uint32_t x164 = UINT32_MAX;
static uint32_t t38 = 19939245U;
static int64_t x167 = INT64_MIN;
int32_t t41 = -1;
volatile int16_t x177 = INT16_MIN;
static int16_t x189 = -2;
int64_t x195 = INT64_MIN;
uint64_t t46 = 90217654674LLU;
int32_t x216 = -2;
static int16_t x217 = INT16_MAX;
static volatile int64_t x224 = -15955313497LL;
volatile int64_t t51 = -702326172LL;
volatile uint16_t x232 = UINT16_MAX;
uint64_t t53 = 2010663LLU;
uint16_t x238 = 1661U;
volatile uint64_t t55 = 32190292010LLU;
int64_t x242 = -4021547661903374LL;
int16_t x246 = -2898;
volatile int64_t x251 = INT64_MIN;
volatile uint32_t x252 = 425279049U;
int32_t t59 = -820;
uint16_t x257 = 6U;
volatile int32_t t60 = -399;
int8_t x268 = 13;
volatile int8_t x270 = INT8_MAX;
int8_t x271 = 1;
uint64_t x272 = 11057094071845299LLU;
int64_t x276 = 4254283005901LL;
uint64_t x281 = UINT64_MAX;
uint16_t x285 = UINT16_MAX;
int32_t x294 = INT32_MIN;
uint64_t x296 = 15336784682408673LLU;
int16_t x297 = -1;
int8_t x304 = 3;
uint64_t x312 = 7341302719506178305LLU;
volatile uint64_t t71 = 148558406469396901LLU;
static int32_t x314 = INT32_MIN;
int16_t x316 = INT16_MIN;
static int32_t x317 = 106;
volatile uint8_t x319 = 13U;
int64_t t73 = 12LL;
uint16_t x323 = 459U;
static volatile int64_t t74 = 2416666759LL;
uint64_t x325 = UINT64_MAX;
static volatile int16_t x326 = INT16_MAX;
uint16_t x328 = UINT16_MAX;
volatile int64_t x332 = -1LL;
volatile uint32_t x342 = 76316884U;
uint64_t x344 = 702170770848481LLU;
static volatile uint64_t t79 = 4LLU;
static uint64_t x350 = 14LLU;
int64_t x351 = INT64_MIN;
static int32_t x354 = INT32_MIN;
static int64_t x366 = -1LL;
uint64_t t85 = 1057304920015LLU;
uint16_t x373 = 0U;
int16_t x389 = INT16_MIN;
static int32_t x390 = -1;
volatile int32_t x397 = INT32_MAX;
int64_t x398 = INT64_MIN;
int8_t x426 = -1;
int64_t t97 = 81LL;
int64_t x433 = -1LL;
static volatile int64_t t99 = 10422461300694718LL;


void f0(void) {
	static uint32_t x1 = 417754U;
	uint8_t x3 = UINT8_MAX;
	int32_t x4 = INT32_MIN;
	uint32_t t0 = 1U;

	t0 = ((x1/x2)*(x3%x4));

	if (t0 != 0U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MIN;
	static int32_t x8 = INT32_MAX;
	static volatile int32_t t1 = -1;

	t1 = ((x5/x6)*(x7%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 0;
	uint64_t x10 = 6660LLU;
	uint16_t x11 = 920U;
	int64_t x12 = INT64_MIN;
	volatile uint64_t t2 = 13LLU;

	t2 = ((x9/x10)*(x11%x12));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = -18963227;
	uint8_t x14 = UINT8_MAX;
	int64_t x16 = -956848LL;
	volatile int64_t t3 = 7LL;

	t3 = ((x13/x14)*(x15%x16));

	if (t3 != -148730LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int64_t x17 = -15365319LL;
	int8_t x18 = INT8_MAX;
	uint16_t x19 = UINT16_MAX;
	int8_t x20 = -1;
	volatile int64_t t4 = -348666363398052LL;

	t4 = ((x17/x18)*(x19%x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	volatile int8_t x22 = INT8_MIN;
	uint16_t x24 = 193U;
	volatile int64_t t5 = 12LL;

	t5 = ((x21/x22)*(x23%x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x26 = 428459710543510LLU;
	volatile uint32_t x27 = UINT32_MAX;

	t6 = ((x25/x26)*(x27%x28));

	if (t6 != 39117482217LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	uint16_t x30 = 9U;
	int16_t x32 = 1;
	int64_t t7 = -901682LL;

	t7 = ((x29/x30)*(x31%x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = INT16_MIN;
	uint32_t x34 = UINT32_MAX;
	int64_t x35 = 325337014LL;
	int8_t x36 = INT8_MIN;
	volatile int64_t t8 = -10723025102256LL;

	t8 = ((x33/x34)*(x35%x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	static volatile int32_t x38 = INT32_MIN;
	uint8_t x39 = UINT8_MAX;
	uint64_t x40 = 63183651708225607LLU;
	uint64_t t9 = 235235226LLU;

	t9 = ((x37/x38)*(x39%x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x45 = 11;
	static int16_t x46 = INT16_MIN;
	uint64_t x47 = UINT64_MAX;
	int8_t x48 = INT8_MAX;
	volatile uint64_t t10 = 1761966437LLU;

	t10 = ((x45/x46)*(x47%x48));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x49 = INT32_MIN;
	int64_t x50 = -194606814652432691LL;
	uint64_t x51 = 156398371284919719LLU;

	t11 = ((x49/x50)*(x51%x52));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x53 = 5U;
	int16_t x54 = INT16_MIN;
	int16_t x55 = 39;
	uint8_t x56 = 15U;
	int32_t t12 = 21277;

	t12 = ((x53/x54)*(x55%x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x57 = INT32_MIN;
	uint64_t x58 = 2771596938807714882LLU;
	int16_t x59 = INT16_MIN;
	volatile int64_t x60 = -1LL;

	t13 = ((x57/x58)*(x59%x60));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x61 = INT8_MAX;
	int8_t x62 = -1;
	int8_t x63 = INT8_MIN;
	static int32_t t14 = 25319;

	t14 = ((x61/x62)*(x63%x64));

	if (t14 != 16256) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MIN;
	int64_t x68 = -2751718071303LL;
	int64_t t15 = 2321LL;

	t15 = ((x65/x66)*(x67%x68));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x69 = 0;
	int64_t x70 = -412412404804LL;
	int8_t x72 = -1;
	static int64_t t16 = -3795LL;

	t16 = ((x69/x70)*(x71%x72));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = 3530360645769180LLU;
	int64_t x75 = 12729208491416LL;
	uint64_t x76 = 104405LLU;
	volatile uint64_t t17 = 40LLU;

	t17 = ((x73/x74)*(x75%x76));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = INT8_MAX;
	int8_t x78 = -6;
	uint8_t x79 = UINT8_MAX;
	int64_t x80 = -72913806LL;
	volatile int64_t t18 = -7938456553052LL;

	t18 = ((x77/x78)*(x79%x80));

	if (t18 != -5355LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int8_t x81 = 0;
	int32_t x83 = INT32_MAX;
	static volatile int32_t t19 = 820069;

	t19 = ((x81/x82)*(x83%x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x85 = 1U;
	int8_t x86 = INT8_MIN;
	int8_t x88 = 39;

	t20 = ((x85/x86)*(x87%x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = 22312738;
	int16_t x90 = -3;
	uint64_t x91 = UINT64_MAX;
	volatile int32_t x92 = 42975202;
	uint64_t t21 = 0LLU;

	t21 = ((x89/x90)*(x91%x92));

	if (t21 != 18446740174119943705LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x94 = UINT32_MAX;
	uint8_t x95 = UINT8_MAX;
	uint32_t t22 = 69U;

	t22 = ((x93/x94)*(x95%x96));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x98 = INT16_MIN;
	static int8_t x100 = INT8_MAX;
	uint64_t t23 = 3008318661LLU;

	t23 = ((x97/x98)*(x99%x100));

	if (t23 != 18446744073709551608LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x101 = 1;
	int32_t x102 = INT32_MIN;
	volatile int8_t x103 = 0;
	int8_t x104 = INT8_MIN;
	int32_t t24 = 1;

	t24 = ((x101/x102)*(x103%x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 2964562234061LLU;
	volatile uint64_t x106 = UINT64_MAX;
	volatile int64_t x108 = -1LL;
	volatile uint64_t t25 = 99503LLU;

	t25 = ((x105/x106)*(x107%x108));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x109 = 8017LLU;
	volatile uint8_t x110 = 124U;
	static uint16_t x111 = 15U;
	volatile int8_t x112 = 1;
	volatile uint64_t t26 = 8514702743625LLU;

	t26 = ((x109/x110)*(x111%x112));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x113 = 1675987050LL;
	int8_t x114 = INT8_MIN;
	int8_t x115 = -1;
	static int32_t x116 = -1;
	int64_t t27 = -19163518350935LL;

	t27 = ((x113/x114)*(x115%x116));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x117 = 16U;
	static int16_t x118 = INT16_MIN;
	volatile uint8_t x119 = 81U;
	int8_t x120 = 1;
	volatile int32_t t28 = -2;

	t28 = ((x117/x118)*(x119%x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x121 = -1;
	uint16_t x122 = UINT16_MAX;
	int32_t x123 = INT32_MIN;
	static volatile int64_t x124 = INT64_MIN;
	int64_t t29 = -45639055225LL;

	t29 = ((x121/x122)*(x123%x124));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x126 = 959272127U;
	volatile int8_t x128 = INT8_MIN;
	volatile uint32_t t30 = 3U;

	t30 = ((x125/x126)*(x127%x128));

	if (t30 != 4294967264U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x129 = 115U;
	uint64_t x130 = UINT64_MAX;
	static uint32_t x131 = UINT32_MAX;
	uint16_t x132 = UINT16_MAX;
	uint64_t t31 = 359169270428134LLU;

	t31 = ((x129/x130)*(x131%x132));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x133 = 6;
	static volatile int16_t x134 = -1;
	int8_t x135 = INT8_MIN;
	int64_t x136 = INT64_MAX;
	volatile int64_t t32 = 2162270356057533LL;

	t32 = ((x133/x134)*(x135%x136));

	if (t32 != 768LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x138 = -1;
	uint8_t x139 = 5U;
	volatile int64_t x140 = -1LL;
	volatile int64_t t33 = 85395060351764148LL;

	t33 = ((x137/x138)*(x139%x140));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x141 = INT32_MAX;
	int8_t x143 = -1;

	t34 = ((x141/x142)*(x143%x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x145 = UINT16_MAX;
	uint16_t x148 = 16498U;
	int32_t t35 = 129070329;

	t35 = ((x145/x146)*(x147%x148));

	if (t35 != -36259380) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = 1;
	uint64_t x150 = 1955420343LLU;
	volatile int8_t x151 = INT8_MIN;
	volatile uint64_t t36 = 1818033LLU;

	t36 = ((x149/x150)*(x151%x152));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x157 = UINT32_MAX;
	int32_t x158 = INT32_MAX;
	static uint64_t x159 = 12LLU;
	int64_t x160 = -1LL;
	uint64_t t37 = 8331627LLU;

	t37 = ((x157/x158)*(x159%x160));

	if (t37 != 24LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x161 = -121246724;
	uint16_t x162 = 198U;
	volatile uint32_t x163 = 11963U;

	t38 = ((x161/x162)*(x163%x164));

	if (t38 != 1264307801U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x165 = 3U;
	int8_t x166 = 21;
	int64_t x168 = INT64_MIN;
	static volatile int64_t t39 = 156571135522941412LL;

	t39 = ((x165/x166)*(x167%x168));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x169 = 1U;
	static int16_t x170 = INT16_MIN;
	int16_t x171 = INT16_MIN;
	int16_t x172 = INT16_MIN;
	volatile int32_t t40 = -20;

	t40 = ((x169/x170)*(x171%x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x173 = INT32_MAX;
	int8_t x174 = -10;
	int8_t x175 = -5;
	volatile int32_t x176 = -1;

	t41 = ((x173/x174)*(x175%x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x178 = UINT32_MAX;
	int32_t x179 = -282011184;
	uint32_t x180 = 6140868U;
	uint32_t t42 = 46565806U;

	t42 = ((x177/x178)*(x179%x180));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x181 = INT8_MIN;
	uint16_t x182 = 21U;
	uint8_t x183 = UINT8_MAX;
	int32_t x184 = INT32_MIN;
	volatile int32_t t43 = 1021;

	t43 = ((x181/x182)*(x183%x184));

	if (t43 != -1530) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x185 = UINT32_MAX;
	int64_t x186 = INT64_MAX;
	uint8_t x187 = 2U;
	uint8_t x188 = UINT8_MAX;
	volatile int64_t t44 = 860LL;

	t44 = ((x185/x186)*(x187%x188));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x190 = INT8_MAX;
	int8_t x191 = -13;
	static int8_t x192 = INT8_MIN;
	volatile int32_t t45 = 6105;

	t45 = ((x189/x190)*(x191%x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x193 = 1829213756462506831LLU;
	int32_t x194 = 994272822;
	static int64_t x196 = -1LL;

	t46 = ((x193/x194)*(x195%x196));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x201 = UINT8_MAX;
	uint32_t x202 = UINT32_MAX;
	volatile int32_t x203 = 8;
	int32_t x204 = INT32_MIN;
	uint32_t t47 = 849218680U;

	t47 = ((x201/x202)*(x203%x204));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int8_t x205 = INT8_MIN;
	static volatile int64_t x206 = -1LL;
	static int16_t x207 = -1;
	static int32_t x208 = -1;
	volatile int64_t t48 = 10476505LL;

	t48 = ((x205/x206)*(x207%x208));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x213 = -4792;
	volatile int8_t x214 = 4;
	volatile uint64_t x215 = 5815575289903897856LLU;
	volatile uint64_t t49 = 9LLU;

	t49 = ((x213/x214)*(x215%x216));

	if (t49 != 5810062557340879360LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x218 = UINT32_MAX;
	volatile int64_t x219 = INT64_MAX;
	volatile int64_t x220 = -1LL;
	volatile int64_t t50 = 3912LL;

	t50 = ((x217/x218)*(x219%x220));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x221 = 30;
	static volatile int32_t x222 = INT32_MIN;
	int64_t x223 = -632919692349LL;

	t51 = ((x221/x222)*(x223%x224));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x225 = INT32_MIN;
	static int32_t x226 = 66;
	int16_t x227 = 286;
	uint8_t x228 = 2U;
	int32_t t52 = 12100055;

	t52 = ((x225/x226)*(x227%x228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x229 = 6155671LLU;
	int16_t x230 = INT16_MAX;
	volatile uint8_t x231 = 9U;

	t53 = ((x229/x230)*(x231%x232));

	if (t53 != 1683LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x233 = INT64_MAX;
	uint8_t x234 = UINT8_MAX;
	volatile int64_t x235 = -1LL;
	static int8_t x236 = INT8_MAX;
	static int64_t t54 = -46550845LL;

	t54 = ((x233/x234)*(x235%x236));

	if (t54 != -36170086419038336LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x237 = -4;
	int64_t x239 = -1LL;
	static uint64_t x240 = 1235LLU;

	t55 = ((x237/x238)*(x239%x240));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x241 = UINT64_MAX;
	uint16_t x243 = UINT16_MAX;
	int32_t x244 = -704;
	volatile uint64_t t56 = 1573LLU;

	t56 = ((x241/x242)*(x243%x244));

	if (t56 != 63LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x245 = UINT16_MAX;
	uint64_t x247 = 2645724842LLU;
	volatile int8_t x248 = 1;
	static uint64_t t57 = 22800LLU;

	t57 = ((x245/x246)*(x247%x248));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x249 = 18019583LLU;
	int64_t x250 = INT64_MIN;
	volatile uint64_t t58 = 3063591LLU;

	t58 = ((x249/x250)*(x251%x252));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x253 = -7;
	static uint16_t x254 = 18U;
	int16_t x255 = INT16_MAX;
	int8_t x256 = INT8_MIN;

	t59 = ((x253/x254)*(x255%x256));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x258 = 14;
	int32_t x259 = 470106;
	static volatile int8_t x260 = -1;

	t60 = ((x257/x258)*(x259%x260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x261 = INT16_MIN;
	int8_t x262 = INT8_MIN;
	volatile int64_t x263 = 27833217LL;
	int32_t x264 = INT32_MAX;
	volatile int64_t t61 = -6198330LL;

	t61 = ((x261/x262)*(x263%x264));

	if (t61 != 7125303552LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x265 = INT8_MIN;
	static volatile uint8_t x266 = 2U;
	volatile uint64_t x267 = 1399347924642498824LLU;
	static uint64_t t62 = 372026LLU;

	t62 = ((x265/x266)*(x267%x268));

	if (t62 != 18446744073709551232LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x269 = UINT64_MAX;
	uint64_t t63 = 19LLU;

	t63 = ((x269/x270)*(x271%x272));

	if (t63 != 145249953336295682LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x273 = 885232LLU;
	int32_t x274 = INT32_MIN;
	volatile int64_t x275 = -294127857708LL;
	static volatile uint64_t t64 = 58LLU;

	t64 = ((x273/x274)*(x275%x276));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x277 = INT32_MIN;
	int32_t x278 = INT32_MAX;
	int8_t x279 = 0;
	uint32_t x280 = 751U;
	uint32_t t65 = 1998U;

	t65 = ((x277/x278)*(x279%x280));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x282 = -563634LL;
	static int8_t x283 = -1;
	uint8_t x284 = 12U;
	volatile uint64_t t66 = UINT64_MAX;

	t66 = ((x281/x282)*(x283%x284));

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x286 = INT32_MIN;
	int32_t x287 = INT32_MIN;
	int16_t x288 = -1;
	volatile int32_t t67 = 1;

	t67 = ((x285/x286)*(x287%x288));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x293 = INT32_MIN;
	volatile int32_t x295 = -35;
	volatile uint64_t t68 = 13973LLU;

	t68 = ((x293/x294)*(x295%x296));

	if (t68 != 11928885454326635LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x298 = INT32_MIN;
	static int64_t x299 = -625145525238LL;
	static volatile int64_t x300 = INT64_MIN;
	volatile int64_t t69 = -132LL;

	t69 = ((x297/x298)*(x299%x300));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint64_t x301 = 310420045265085LLU;
	uint64_t x302 = 19682928648357944LLU;
	volatile uint8_t x303 = 6U;
	uint64_t t70 = 194049LLU;

	t70 = ((x301/x302)*(x303%x304));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x309 = 27U;
	int32_t x310 = -1;
	int64_t x311 = INT64_MIN;

	t71 = ((x309/x310)*(x311%x312));

	if (t71 != 4524360652716522267LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x313 = -1;
	static int32_t x315 = -352;
	int32_t t72 = 646;

	t72 = ((x313/x314)*(x315%x316));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x318 = -53081LL;
	int8_t x320 = -1;

	t73 = ((x317/x318)*(x319%x320));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int64_t x321 = 15082LL;
	static int8_t x322 = -47;
	volatile int64_t x324 = 730199640472897186LL;

	t74 = ((x321/x322)*(x323%x324));

	if (t74 != -146880LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x327 = INT16_MIN;
	uint64_t t75 = 1LLU;

	t75 = ((x325/x326)*(x327%x328));

	if (t75 != 18446181106575736832LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x329 = 1U;
	uint16_t x330 = 202U;
	volatile uint8_t x331 = UINT8_MAX;
	volatile int64_t t76 = -1LL;

	t76 = ((x329/x330)*(x331%x332));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x333 = INT8_MAX;
	static int64_t x334 = INT64_MIN;
	volatile uint64_t x335 = UINT64_MAX;
	int8_t x336 = INT8_MAX;
	volatile uint64_t t77 = 28057927699945LLU;

	t77 = ((x333/x334)*(x335%x336));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x337 = INT32_MAX;
	volatile uint32_t x338 = 61656937U;
	int64_t x339 = INT64_MAX;
	static int64_t x340 = 455019LL;
	int64_t t78 = 10944LL;

	t78 = ((x337/x338)*(x339%x340));

	if (t78 != 509626LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x341 = 0U;
	volatile int8_t x343 = -9;

	t79 = ((x341/x342)*(x343%x344));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x349 = -11717;
	volatile uint64_t x352 = 3063590731LLU;
	static uint64_t t80 = 2LLU;

	t80 = ((x349/x350)*(x351%x352));

	if (t80 != 11858620971301253716LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x353 = INT64_MAX;
	volatile uint64_t x355 = 1233LLU;
	volatile int32_t x356 = -1;
	static volatile uint64_t t81 = 241945888204LLU;

	t81 = ((x353/x354)*(x355%x356));

	if (t81 != 18446738778014876881LLU) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int64_t x357 = 7LL;
	int64_t x358 = INT64_MIN;
	uint64_t x359 = UINT64_MAX;
	uint8_t x360 = 4U;
	uint64_t t82 = 139428402222861941LLU;

	t82 = ((x357/x358)*(x359%x360));

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x361 = -1;
	int16_t x362 = -766;
	int8_t x363 = -29;
	int8_t x364 = 14;
	int32_t t83 = 315;

	t83 = ((x361/x362)*(x363%x364));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x365 = INT32_MIN;
	int16_t x367 = INT16_MIN;
	int64_t x368 = INT64_MAX;
	volatile int64_t t84 = -132LL;

	t84 = ((x365/x366)*(x367%x368));

	if (t84 != -70368744177664LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x369 = INT8_MIN;
	volatile uint64_t x370 = 2176678971057468943LLU;
	int8_t x371 = 25;
	static volatile int8_t x372 = -1;

	t85 = ((x369/x370)*(x371%x372));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x374 = -54695924;
	int32_t x375 = INT32_MIN;
	static volatile int64_t x376 = INT64_MIN;
	volatile int64_t t86 = -590813001LL;

	t86 = ((x373/x374)*(x375%x376));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x377 = 63;
	static int64_t x378 = INT64_MAX;
	uint64_t x379 = 57974188051472LLU;
	int8_t x380 = 5;
	uint64_t t87 = 0LLU;

	t87 = ((x377/x378)*(x379%x380));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x381 = 441563294334697LLU;
	int16_t x382 = 1909;
	volatile int16_t x383 = -1;
	uint64_t x384 = 31768813311LLU;
	uint64_t t88 = 63024LLU;

	t88 = ((x381/x382)*(x383%x384));

	if (t88 != 16922302080106120440LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x391 = 205;
	int64_t x392 = INT64_MIN;
	volatile int64_t t89 = -10844LL;

	t89 = ((x389/x390)*(x391%x392));

	if (t89 != 6717440LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x393 = -307800;
	volatile int8_t x394 = INT8_MAX;
	volatile uint64_t x395 = UINT64_MAX;
	volatile uint64_t x396 = 1202601787205977LLU;
	volatile uint64_t t90 = 6644595210LLU;

	t90 = ((x393/x394)*(x395%x396));

	if (t90 != 18361309682327943340LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x399 = 12;
	static volatile uint64_t x400 = UINT64_MAX;
	uint64_t t91 = 1988179LLU;

	t91 = ((x397/x398)*(x399%x400));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x401 = INT32_MIN;
	int64_t x402 = INT64_MIN;
	int64_t x403 = -1LL;
	static uint32_t x404 = 6U;
	static int64_t t92 = 312556192417LL;

	t92 = ((x401/x402)*(x403%x404));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x409 = -31852;
	int64_t x410 = -49354761LL;
	int16_t x411 = INT16_MIN;
	int16_t x412 = INT16_MIN;
	int64_t t93 = 3988107806707470402LL;

	t93 = ((x409/x410)*(x411%x412));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x413 = INT16_MIN;
	uint64_t x414 = UINT64_MAX;
	uint16_t x415 = 6U;
	int32_t x416 = INT32_MIN;
	volatile uint64_t t94 = 2239054LLU;

	t94 = ((x413/x414)*(x415%x416));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x417 = INT64_MIN;
	static int64_t x418 = INT64_MIN;
	int64_t x419 = 40449157755726LL;
	int16_t x420 = 190;
	int64_t t95 = -78LL;

	t95 = ((x417/x418)*(x419%x420));

	if (t95 != 96LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x421 = -106;
	static volatile uint32_t x422 = 305U;
	static int32_t x423 = -1;
	int16_t x424 = -1;
	volatile uint32_t t96 = 453310U;

	t96 = ((x421/x422)*(x423%x424));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x425 = 5U;
	int64_t x427 = 7LL;
	int64_t x428 = -1LL;

	t97 = ((x425/x426)*(x427%x428));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint8_t x429 = 7U;
	volatile uint8_t x430 = 16U;
	int8_t x431 = 17;
	uint32_t x432 = 848591034U;
	uint32_t t98 = 813U;

	t98 = ((x429/x430)*(x431%x432));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x434 = INT16_MAX;
	static int64_t x435 = INT64_MIN;
	int64_t x436 = -1LL;

	t99 = ((x433/x434)*(x435%x436));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

