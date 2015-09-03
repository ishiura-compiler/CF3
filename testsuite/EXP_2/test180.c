#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x18 = -772614058;
uint32_t x19 = 1586100530U;
uint8_t x25 = 61U;
uint64_t t5 = 275393243518185063LLU;
volatile uint64_t x33 = 24LLU;
int8_t x41 = -8;
int8_t x46 = 8;
uint8_t x47 = 0U;
volatile uint16_t x50 = 43U;
int16_t x56 = INT16_MAX;
int32_t x58 = -116679;
int32_t x69 = -122143;
volatile uint32_t t14 = 4U;
static int32_t x79 = -669084850;
int32_t x83 = INT32_MIN;
static uint32_t x88 = 158322628U;
int64_t t18 = 677403098689LL;
int64_t t19 = 16495340649306LL;
int8_t x95 = INT8_MIN;
volatile int64_t t20 = INT64_MIN;
static volatile uint16_t x101 = UINT16_MAX;
static uint8_t x110 = 0U;
static int64_t x112 = INT64_MIN;
static int32_t x132 = 89738769;
int16_t x143 = -1;
static uint32_t x145 = UINT32_MAX;
int16_t x152 = -1;
int16_t x156 = -563;
volatile uint64_t t31 = 723400242LLU;
int32_t x162 = -6;
uint32_t x164 = 23U;
int64_t x166 = -2LL;
uint64_t t33 = 303967753LLU;
int32_t x178 = 0;
static int8_t x179 = -1;
volatile int64_t x193 = INT64_MIN;
uint32_t x195 = UINT32_MAX;
static int64_t t39 = 1LL;
volatile int64_t x223 = -2574LL;
static uint32_t x224 = 5U;
volatile int32_t x230 = -1;
int64_t x231 = -97694LL;
int8_t x232 = INT8_MAX;
volatile int64_t t45 = -16914LL;
int64_t x235 = INT64_MIN;
uint32_t x237 = UINT32_MAX;
int32_t x240 = 1443241;
int32_t t48 = 953796;
int16_t x254 = INT16_MIN;
uint16_t x269 = UINT16_MAX;
static volatile int32_t x271 = -1168261;
static int32_t t54 = -14;
int32_t x282 = INT32_MAX;
int8_t x292 = 15;
static int16_t x300 = -10325;
volatile int16_t x303 = -1448;
static volatile int32_t t61 = 2676258;
static uint64_t x318 = 264LLU;
uint64_t t63 = 5LLU;
uint16_t x330 = 737U;
uint8_t x342 = 28U;
int32_t t67 = -111881;
uint64_t x378 = UINT64_MAX;
static uint64_t t73 = 28343637007085220LLU;
static int64_t x388 = INT64_MIN;
volatile uint32_t t80 = 7U;
uint64_t x411 = 4045666346LLU;
volatile uint64_t t81 = 14199815LLU;
uint16_t x414 = 1U;
int32_t x416 = INT32_MIN;
volatile uint64_t t82 = 26516LLU;
int16_t x418 = INT16_MIN;
static volatile uint64_t t84 = 1610624597LLU;
uint64_t x427 = 749231270324850LLU;
int64_t x428 = INT64_MIN;
int32_t x430 = INT32_MIN;
static int64_t x438 = -1LL;
uint64_t x447 = 9199290194872031LLU;
volatile int32_t x449 = 1042298042;
uint16_t x473 = UINT16_MAX;
uint8_t x481 = 18U;
int16_t x483 = -1;
uint64_t x491 = 15444795140091123LLU;
uint64_t t97 = 516LLU;
int32_t x507 = -1;
static volatile int32_t t99 = -75;


void f0(void) {
	volatile int32_t x5 = INT32_MIN;
	volatile uint16_t x6 = UINT16_MAX;
	int64_t x7 = -1LL;
	static int16_t x8 = -1;
	volatile int64_t t0 = 15870228055142LL;

	t0 = ((x5+(x6-x7))&x8);

	if (t0 != -2147418112LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = 606903944;
	static uint16_t x10 = 109U;
	uint16_t x11 = 1U;
	int32_t x12 = INT32_MIN;
	int32_t t1 = 0;

	t1 = ((x9+(x10-x11))&x12);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x17 = INT32_MIN;
	int8_t x20 = -1;
	volatile uint32_t t2 = 45U;

	t2 = ((x17+(x18-x19))&x20);

	if (t2 != 4083736356U) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x21 = INT64_MIN;
	uint16_t x22 = UINT16_MAX;
	static int64_t x23 = -1LL;
	static uint32_t x24 = 208838U;
	volatile int64_t t3 = 461128534368403LL;

	t3 = ((x21+(x22-x23))&x24);

	if (t3 != 65536LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x26 = INT16_MIN;
	int32_t x27 = -1;
	int16_t x28 = -1;
	volatile int32_t t4 = 4338779;

	t4 = ((x25+(x26-x27))&x28);

	if (t4 != -32706) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = -1;
	int32_t x30 = -1;
	static uint64_t x31 = 170258017124LLU;
	static int16_t x32 = INT16_MIN;

	t5 = ((x29+(x30-x31))&x32);

	if (t5 != 18446743903451512832LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x34 = 987220562U;
	static int16_t x35 = -1;
	uint64_t x36 = UINT64_MAX;
	uint64_t t6 = 2774475130204218524LLU;

	t6 = ((x33+(x34-x35))&x36);

	if (t6 != 987220587LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = 13U;
	int32_t x38 = 26760;
	uint16_t x39 = UINT16_MAX;
	int8_t x40 = -1;
	static volatile int32_t t7 = 1;

	t7 = ((x37+(x38-x39))&x40);

	if (t7 != -38762) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x42 = -1LL;
	volatile uint8_t x43 = UINT8_MAX;
	int32_t x44 = INT32_MIN;
	int64_t t8 = 715380927LL;

	t8 = ((x41+(x42-x43))&x44);

	if (t8 != -2147483648LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x45 = UINT64_MAX;
	uint64_t x48 = UINT64_MAX;
	uint64_t t9 = 12690LLU;

	t9 = ((x45+(x46-x47))&x48);

	if (t9 != 7LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = INT8_MAX;
	static uint32_t x51 = UINT32_MAX;
	volatile int64_t x52 = 647603050389303LL;
	int64_t t10 = -180254LL;

	t10 = ((x49+(x50-x51))&x52);

	if (t10 != 35LL) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = INT32_MIN;
	int16_t x54 = 68;
	uint8_t x55 = 4U;
	int32_t t11 = -88;

	t11 = ((x53+(x54-x55))&x56);

	if (t11 != 64) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = INT8_MAX;
	int32_t x59 = 0;
	int8_t x60 = INT8_MIN;
	int32_t t12 = -118320459;

	t12 = ((x57+(x58-x59))&x60);

	if (t12 != -116608) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = 7U;
	static uint16_t x62 = 853U;
	int16_t x63 = 1549;
	uint8_t x64 = UINT8_MAX;
	volatile int32_t t13 = 7;

	t13 = ((x61+(x62-x63))&x64);

	if (t13 != 79) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x70 = INT32_MIN;
	uint32_t x71 = 1062786U;
	uint32_t x72 = 25893293U;

	t14 = ((x69+(x70-x71))&x72);

	if (t14 != 25757965U) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x73 = INT64_MIN;
	int64_t x74 = 16509743546LL;
	int16_t x75 = INT16_MAX;
	uint32_t x76 = 27508U;
	int64_t t15 = 11218LL;

	t15 = ((x73+(x74-x75))&x76);

	if (t15 != 8496LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = 0LL;
	int64_t x78 = 1LL;
	int64_t x80 = INT64_MAX;
	int64_t t16 = -9679111755LL;

	t16 = ((x77+(x78-x79))&x80);

	if (t16 != 669084851LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = 1591030159140LL;
	static int8_t x82 = -1;
	int8_t x84 = -1;
	volatile int64_t t17 = -510884196LL;

	t17 = ((x81+(x82-x83))&x84);

	if (t17 != 1593177642787LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x85 = -1;
	int64_t x86 = -1LL;
	volatile int16_t x87 = INT16_MIN;

	t18 = ((x85+(x86-x87))&x88);

	if (t18 != 20420LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x89 = 1040542723LL;
	int64_t x90 = 1784874099LL;
	int16_t x91 = -5726;
	volatile int32_t x92 = INT32_MIN;

	t19 = ((x89+(x90-x91))&x92);

	if (t19 != 2147483648LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x93 = 86U;
	int64_t x94 = INT64_MIN;
	volatile int64_t x96 = INT64_MIN;

	t20 = ((x93+(x94-x95))&x96);

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x102 = 48899269323LLU;
	int16_t x103 = INT16_MIN;
	int8_t x104 = 1;
	volatile uint64_t t21 = 355677LLU;

	t21 = ((x101+(x102-x103))&x104);

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x109 = -1;
	int16_t x111 = INT16_MIN;
	volatile int64_t t22 = -15369897069899326LL;

	t22 = ((x109+(x110-x111))&x112);

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x113 = 1;
	static uint64_t x114 = 6193390264662247537LLU;
	volatile int64_t x115 = 3925410235719032341LL;
	uint32_t x116 = UINT32_MAX;
	volatile uint64_t t23 = 387828465411207LLU;

	t23 = ((x113+(x114-x115))&x116);

	if (t23 != 4007078493LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x129 = 3U;
	int64_t x130 = -1LL;
	int8_t x131 = INT8_MIN;
	volatile int64_t t24 = -4141064978706371898LL;

	t24 = ((x129+(x130-x131))&x132);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x133 = 0U;
	uint8_t x134 = 113U;
	volatile int64_t x135 = INT64_MAX;
	volatile uint32_t x136 = UINT32_MAX;
	volatile int64_t t25 = 2083LL;

	t25 = ((x133+(x134-x135))&x136);

	if (t25 != 114LL) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x137 = -1;
	uint16_t x138 = 323U;
	static int16_t x139 = -1;
	uint64_t x140 = 5434767507043164260LLU;
	volatile uint64_t t26 = 7611838698944099016LLU;

	t26 = ((x137+(x138-x139))&x140);

	if (t26 != 64LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x141 = 1785U;
	volatile int64_t x142 = -61LL;
	static uint8_t x144 = UINT8_MAX;
	int64_t t27 = -886909LL;

	t27 = ((x141+(x142-x143))&x144);

	if (t27 != 189LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x146 = INT16_MIN;
	static volatile uint64_t x147 = 283111LLU;
	int32_t x148 = INT32_MAX;
	uint64_t t28 = 215471LLU;

	t28 = ((x145+(x146-x147))&x148);

	if (t28 != 2147167768LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x149 = 8;
	static int32_t x150 = -16592738;
	volatile uint16_t x151 = UINT16_MAX;
	int32_t t29 = -23;

	t29 = ((x149+(x150-x151))&x152);

	if (t29 != -16658265) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x153 = INT16_MIN;
	static int32_t x154 = INT32_MIN;
	uint64_t x155 = 7899127529592LLU;
	volatile uint64_t t30 = 775825LLU;

	t30 = ((x153+(x154-x155))&x156);

	if (t30 != 18446736172434505096LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x157 = 205545479957LLU;
	static uint16_t x158 = 5U;
	int8_t x159 = INT8_MIN;
	int8_t x160 = INT8_MIN;

	t31 = ((x157+(x158-x159))&x160);

	if (t31 != 205545480064LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x161 = INT8_MIN;
	uint32_t x163 = 5684072U;
	static volatile uint32_t t32 = 6U;

	t32 = ((x161+(x162-x163))&x164);

	if (t32 != 18U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x165 = INT8_MIN;
	uint32_t x167 = UINT32_MAX;
	uint64_t x168 = UINT64_MAX;

	t33 = ((x165+(x166-x167))&x168);

	if (t33 != 18446744069414584191LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x169 = -1;
	volatile uint8_t x170 = UINT8_MAX;
	uint8_t x171 = 1U;
	int16_t x172 = -1;
	int32_t t34 = 1036229;

	t34 = ((x169+(x170-x171))&x172);

	if (t34 != 253) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x177 = -679549583;
	uint32_t x180 = 895518230U;
	volatile uint32_t t35 = 144925U;

	t35 = ((x177+(x178-x179))&x180);

	if (t35 != 358646802U) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x181 = -1;
	static int32_t x182 = 187;
	int32_t x183 = INT32_MAX;
	static uint32_t x184 = UINT32_MAX;
	volatile uint32_t t36 = 3U;

	t36 = ((x181+(x182-x183))&x184);

	if (t36 != 2147483835U) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x185 = 61U;
	int64_t x186 = INT64_MIN;
	int8_t x187 = 0;
	static int64_t x188 = INT64_MIN;
	volatile int64_t t37 = INT64_MIN;

	t37 = ((x185+(x186-x187))&x188);

	if (t37 != INT64_MIN) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x189 = UINT16_MAX;
	static int16_t x190 = -1;
	int64_t x191 = -1LL;
	int8_t x192 = -1;
	int64_t t38 = 30237LL;

	t38 = ((x189+(x190-x191))&x192);

	if (t38 != 65535LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x194 = 174;
	static int8_t x196 = INT8_MAX;

	t39 = ((x193+(x194-x195))&x196);

	if (t39 != 47LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint32_t x197 = 1591U;
	static int8_t x198 = 50;
	static int8_t x199 = -1;
	uint8_t x200 = 4U;
	uint32_t t40 = 3702U;

	t40 = ((x197+(x198-x199))&x200);

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x201 = UINT8_MAX;
	int32_t x202 = -1;
	uint8_t x203 = 6U;
	volatile uint32_t x204 = UINT32_MAX;
	uint32_t t41 = 89543U;

	t41 = ((x201+(x202-x203))&x204);

	if (t41 != 248U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x209 = 3;
	int32_t x210 = INT32_MIN;
	static uint32_t x211 = UINT32_MAX;
	int32_t x212 = INT32_MIN;
	static volatile uint32_t t42 = 40U;

	t42 = ((x209+(x210-x211))&x212);

	if (t42 != 2147483648U) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x213 = 23U;
	uint64_t x214 = 1979LLU;
	int64_t x215 = -1LL;
	int16_t x216 = INT16_MIN;
	uint64_t t43 = 9204786LLU;

	t43 = ((x213+(x214-x215))&x216);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x221 = UINT64_MAX;
	static int8_t x222 = -43;
	volatile uint64_t t44 = 71369819512038957LLU;

	t44 = ((x221+(x222-x223))&x224);

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x229 = UINT8_MAX;

	t45 = ((x229+(x230-x231))&x232);

	if (t45 != 28LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x233 = -1;
	int32_t x234 = INT32_MIN;
	int64_t x236 = -26LL;
	static volatile int64_t t46 = -7172834LL;

	t46 = ((x233+(x234-x235))&x236);

	if (t46 != 9223372034707292134LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x238 = INT16_MAX;
	uint8_t x239 = 1U;
	uint32_t t47 = 494410U;

	t47 = ((x237+(x238-x239))&x240);

	if (t47 != 1449U) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x241 = 11;
	static int16_t x242 = INT16_MIN;
	uint16_t x243 = 3148U;
	uint16_t x244 = UINT16_MAX;

	t48 = ((x241+(x242-x243))&x244);

	if (t48 != 29631) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x245 = 46;
	int8_t x246 = 0;
	uint64_t x247 = 17102101902168882LLU;
	int64_t x248 = -625556321LL;
	uint64_t t49 = 2951792014504LLU;

	t49 = ((x245+(x246-x247))&x248);

	if (t49 != 18429641971790529692LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x249 = INT32_MAX;
	int64_t x250 = 717775410952LL;
	uint32_t x251 = UINT32_MAX;
	int64_t x252 = -1LL;
	static volatile int64_t t50 = 113399957343634LL;

	t50 = ((x249+(x250-x251))&x252);

	if (t50 != 715627927304LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x253 = -1;
	static int64_t x255 = INT64_MIN;
	volatile int64_t x256 = -2522162831883214LL;
	static int64_t t51 = -1198667505223815954LL;

	t51 = ((x253+(x254-x255))&x256);

	if (t51 != 9220849874022892594LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x270 = -1;
	int8_t x272 = INT8_MIN;
	int32_t t52 = -66;

	t52 = ((x269+(x270-x271))&x272);

	if (t52 != 1233792) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x273 = INT16_MIN;
	static uint32_t x274 = 363U;
	int16_t x275 = INT16_MAX;
	int32_t x276 = -1;
	volatile uint32_t t53 = 1797080U;

	t53 = ((x273+(x274-x275))&x276);

	if (t53 != 4294902124U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x277 = 3U;
	int8_t x278 = INT8_MAX;
	int8_t x279 = INT8_MIN;
	static int16_t x280 = -1;

	t54 = ((x277+(x278-x279))&x280);

	if (t54 != 258) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x281 = 2U;
	static int32_t x283 = 3351745;
	static uint32_t x284 = 31800108U;
	uint32_t t55 = 6987U;

	t55 = ((x281+(x282-x283))&x284);

	if (t55 != 29629184U) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x285 = UINT64_MAX;
	int16_t x286 = -1;
	int8_t x287 = INT8_MAX;
	int64_t x288 = -2428702167449612LL;
	uint64_t t56 = 16LLU;

	t56 = ((x285+(x286-x287))&x288);

	if (t56 != 18444315371542101876LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int32_t x289 = INT32_MAX;
	uint8_t x290 = UINT8_MAX;
	uint16_t x291 = UINT16_MAX;
	static int32_t t57 = -285535;

	t57 = ((x289+(x290-x291))&x292);

	if (t57 != 15) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x293 = 1;
	int8_t x294 = -1;
	int16_t x295 = -4697;
	int64_t x296 = INT64_MIN;
	static int64_t t58 = -9277025736829023LL;

	t58 = ((x293+(x294-x295))&x296);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x297 = INT64_MIN;
	int32_t x298 = -1;
	static int64_t x299 = INT64_MIN;
	int64_t t59 = -4411462093927365LL;

	t59 = ((x297+(x298-x299))&x300);

	if (t59 != -10325LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x301 = INT64_MAX;
	int32_t x302 = INT32_MIN;
	volatile int32_t x304 = 187429676;
	int64_t t60 = 8427762811LL;

	t60 = ((x301+(x302-x303))&x304);

	if (t60 != 292LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x313 = 0;
	static volatile int16_t x314 = INT16_MIN;
	static volatile int32_t x315 = INT32_MIN;
	int32_t x316 = INT32_MIN;

	t61 = ((x313+(x314-x315))&x316);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x317 = -256173LL;
	int16_t x319 = INT16_MIN;
	int32_t x320 = INT32_MIN;
	static volatile uint64_t t62 = 6364474LLU;

	t62 = ((x317+(x318-x319))&x320);

	if (t62 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x325 = -1;
	uint8_t x326 = UINT8_MAX;
	int8_t x327 = INT8_MAX;
	uint64_t x328 = 8240541101625385818LLU;

	t63 = ((x325+(x326-x327))&x328);

	if (t63 != 90LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x329 = -1LL;
	int16_t x331 = INT16_MIN;
	int32_t x332 = INT32_MIN;
	volatile int64_t t64 = -2LL;

	t64 = ((x329+(x330-x331))&x332);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x337 = 226153367458LLU;
	static uint16_t x338 = 14U;
	int8_t x339 = 0;
	volatile uint32_t x340 = 0U;
	uint64_t t65 = 142407433216007150LLU;

	t65 = ((x337+(x338-x339))&x340);

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x341 = INT8_MIN;
	static uint64_t x343 = 4363560132129716LLU;
	int64_t x344 = 2453LL;
	uint64_t t66 = 24995515194132LLU;

	t66 = ((x341+(x342-x343))&x344);

	if (t66 != 2432LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x349 = 0U;
	uint16_t x350 = UINT16_MAX;
	int8_t x351 = INT8_MAX;
	volatile int32_t x352 = INT32_MAX;

	t67 = ((x349+(x350-x351))&x352);

	if (t67 != 65408) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x353 = 38LLU;
	volatile int32_t x354 = INT32_MIN;
	int8_t x355 = INT8_MIN;
	volatile int32_t x356 = 101295;
	volatile uint64_t t68 = 133LLU;

	t68 = ((x353+(x354-x355))&x356);

	if (t68 != 166LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x361 = UINT32_MAX;
	volatile int64_t x362 = -2276512077863LL;
	uint64_t x363 = 3899LLU;
	volatile uint16_t x364 = 10U;
	static volatile uint64_t t69 = 716LLU;

	t69 = ((x361+(x362-x363))&x364);

	if (t69 != 8LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x365 = INT64_MIN;
	static uint32_t x366 = 4U;
	volatile uint64_t x367 = 55350489010623940LLU;
	volatile int16_t x368 = -1;
	volatile uint64_t t70 = 27576402LLU;

	t70 = ((x365+(x366-x367))&x368);

	if (t70 != 9168021547844151872LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x369 = 4596U;
	int8_t x370 = -1;
	volatile int16_t x371 = INT16_MIN;
	volatile uint8_t x372 = 20U;
	static volatile int32_t t71 = -265391958;

	t71 = ((x369+(x370-x371))&x372);

	if (t71 != 16) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x373 = UINT32_MAX;
	uint32_t x374 = 58467U;
	int32_t x375 = INT32_MIN;
	volatile uint16_t x376 = UINT16_MAX;
	uint32_t t72 = 53098943U;

	t72 = ((x373+(x374-x375))&x376);

	if (t72 != 58466U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x377 = INT16_MIN;
	uint32_t x379 = 195455U;
	static int64_t x380 = -1LL;

	t73 = ((x377+(x378-x379))&x380);

	if (t73 != 18446744073709323392LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x381 = UINT32_MAX;
	int8_t x382 = 7;
	int8_t x383 = INT8_MIN;
	volatile int64_t x384 = -3149956365155484484LL;
	int64_t t74 = 2156405565686LL;

	t74 = ((x381+(x382-x383))&x384);

	if (t74 != 132LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint16_t x385 = 28U;
	volatile int16_t x386 = -1;
	volatile uint64_t x387 = UINT64_MAX;
	volatile uint64_t t75 = 3LLU;

	t75 = ((x385+(x386-x387))&x388);

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x389 = 10U;
	int8_t x390 = INT8_MIN;
	int64_t x391 = 923332420LL;
	int8_t x392 = 14;
	int64_t t76 = -22932276574632LL;

	t76 = ((x389+(x390-x391))&x392);

	if (t76 != 6LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x393 = 100U;
	volatile int8_t x394 = -39;
	int16_t x395 = -12843;
	uint32_t x396 = 91895U;
	volatile uint32_t t77 = 71368U;

	t77 = ((x393+(x394-x395))&x396);

	if (t77 != 8800U) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x397 = INT32_MIN;
	int64_t x398 = -1LL;
	uint8_t x399 = UINT8_MAX;
	uint64_t x400 = 3767203993LLU;
	uint64_t t78 = 1691LLU;

	t78 = ((x397+(x398-x399))&x400);

	if (t78 != 1619720192LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x401 = UINT32_MAX;
	int8_t x402 = INT8_MIN;
	volatile int8_t x403 = 4;
	uint8_t x404 = 83U;
	uint32_t t79 = 1442399U;

	t79 = ((x401+(x402-x403))&x404);

	if (t79 != 83U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint32_t x405 = 2U;
	int32_t x406 = INT32_MAX;
	uint32_t x407 = 2534U;
	static uint8_t x408 = 0U;

	t80 = ((x405+(x406-x407))&x408);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x409 = INT64_MIN;
	int64_t x410 = 126700269616191291LL;
	volatile int32_t x412 = INT32_MIN;

	t81 = ((x409+(x410-x411))&x412);

	if (t81 != 9350072300776456192LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x413 = UINT64_MAX;
	uint16_t x415 = 14U;

	t82 = ((x413+(x414-x415))&x416);

	if (t82 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x417 = -849;
	uint16_t x419 = 1783U;
	static uint64_t x420 = 6700957LLU;
	static uint64_t t83 = 26939LLU;

	t83 = ((x417+(x418-x419))&x420);

	if (t83 != 6698392LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x421 = UINT8_MAX;
	volatile int8_t x422 = -1;
	uint64_t x423 = UINT64_MAX;
	uint8_t x424 = 17U;

	t84 = ((x421+(x422-x423))&x424);

	if (t84 != 17LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x425 = INT64_MIN;
	uint8_t x426 = UINT8_MAX;
	uint64_t t85 = 4374LLU;

	t85 = ((x425+(x426-x427))&x428);

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static int8_t x429 = INT8_MIN;
	volatile int16_t x431 = INT16_MIN;
	int16_t x432 = INT16_MIN;
	volatile int32_t t86 = INT32_MIN;

	t86 = ((x429+(x430-x431))&x432);

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x437 = -1;
	static int32_t x439 = -1;
	int16_t x440 = 4;
	volatile int64_t t87 = 8690982736642LL;

	t87 = ((x437+(x438-x439))&x440);

	if (t87 != 4LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x441 = INT16_MAX;
	volatile int8_t x442 = INT8_MIN;
	uint32_t x443 = 22U;
	int8_t x444 = INT8_MIN;
	volatile uint32_t t88 = 22537U;

	t88 = ((x441+(x442-x443))&x444);

	if (t88 != 32512U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x445 = INT8_MIN;
	static int32_t x446 = -1;
	int64_t x448 = -97560LL;
	volatile uint64_t t89 = 91355809004172LLU;

	t89 = ((x445+(x446-x447))&x448);

	if (t89 != 18437544783514599584LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x450 = 1666U;
	int64_t x451 = INT64_MAX;
	static int64_t x452 = -15996088276598119LL;
	static volatile int64_t t90 = 105505318828LL;

	t90 = ((x449+(x450-x451))&x452);

	if (t90 != -9223372035913154023LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x457 = INT64_MIN;
	static uint8_t x458 = 0U;
	int64_t x459 = -9309117002620LL;
	volatile int8_t x460 = -1;
	int64_t t91 = -247428057672482430LL;

	t91 = ((x457+(x458-x459))&x460);

	if (t91 != -9223362727737773188LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x465 = INT16_MIN;
	volatile int8_t x466 = -1;
	uint64_t x467 = 4304740673380LLU;
	static volatile uint64_t x468 = 50059567LLU;
	uint64_t t92 = 153516391176LLU;

	t92 = ((x465+(x466-x467))&x468);

	if (t92 != 7444491LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x469 = -1705793915950433806LL;
	int16_t x470 = -6;
	volatile int8_t x471 = 58;
	int8_t x472 = INT8_MIN;
	volatile int64_t t93 = 403121394784679276LL;

	t93 = ((x469+(x470-x471))&x472);

	if (t93 != -1705793915950433920LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x474 = 31047478220058636LLU;
	int32_t x475 = INT32_MIN;
	int32_t x476 = 3018900;
	volatile uint64_t t94 = 22211282045LLU;

	t94 = ((x473+(x474-x475))&x476);

	if (t94 != 2756608LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x482 = 40;
	int32_t x484 = INT32_MIN;
	volatile int32_t t95 = 24;

	t95 = ((x481+(x482-x483))&x484);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x485 = INT32_MIN;
	static volatile int32_t x486 = INT32_MAX;
	static int8_t x487 = 61;
	int16_t x488 = INT16_MIN;
	int32_t t96 = 25145339;

	t96 = ((x485+(x486-x487))&x488);

	if (t96 != -32768) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x489 = INT32_MIN;
	uint64_t x490 = 15442162280720248LLU;
	int16_t x492 = -947;

	t97 = ((x489+(x490-x491))&x492);

	if (t97 != 18446741438702696453LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x493 = -6674;
	uint32_t x494 = 9035252U;
	int16_t x495 = -10;
	int16_t x496 = INT16_MIN;
	uint32_t t98 = 103U;

	t98 = ((x493+(x494-x495))&x496);

	if (t98 != 9011200U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x505 = 2521;
	static uint8_t x506 = 3U;
	static int8_t x508 = INT8_MAX;

	t99 = ((x505+(x506-x507))&x508);

	if (t99 != 93) { NG(); } else { ; }
	
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

