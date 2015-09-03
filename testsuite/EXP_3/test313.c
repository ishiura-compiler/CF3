#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x9 = 46;
uint64_t x16 = UINT64_MAX;
static int32_t x34 = INT32_MIN;
int32_t x36 = INT32_MIN;
static int8_t x37 = INT8_MAX;
uint16_t x38 = 1U;
static int32_t x39 = INT32_MIN;
static volatile int16_t x40 = INT16_MIN;
uint32_t x46 = 666421U;
volatile uint8_t x50 = 2U;
volatile uint16_t x51 = 0U;
volatile int8_t x54 = 15;
int32_t x55 = INT32_MAX;
uint64_t t12 = 879328382LLU;
int64_t x82 = -1LL;
uint64_t t17 = 59588LLU;
int64_t x89 = INT64_MIN;
volatile int64_t x90 = -1LL;
int64_t x91 = INT64_MIN;
int64_t x92 = -1LL;
int64_t t18 = INT64_MIN;
uint8_t x93 = 6U;
static int16_t x103 = -1;
uint32_t x104 = 18U;
static volatile uint64_t t20 = 108150066818427513LLU;
uint16_t x107 = UINT16_MAX;
volatile uint16_t x111 = 3U;
int32_t x113 = INT32_MAX;
static volatile int16_t x121 = INT16_MIN;
int32_t x126 = -3;
int16_t x130 = INT16_MAX;
int64_t x145 = INT64_MIN;
int16_t x157 = INT16_MIN;
static uint16_t x161 = 11240U;
static uint8_t x162 = UINT8_MAX;
int64_t x164 = -1LL;
static int8_t x169 = INT8_MAX;
volatile int8_t x173 = INT8_MAX;
int32_t x174 = INT32_MIN;
int64_t x180 = INT64_MIN;
uint64_t t36 = 7392610604252281LLU;
volatile uint8_t x184 = 22U;
volatile int32_t x185 = INT32_MIN;
volatile int64_t t38 = 0LL;
int32_t x189 = INT32_MAX;
int8_t x193 = -1;
static int64_t t43 = 30716510360636319LL;
static int64_t x212 = INT64_MIN;
int64_t x215 = INT64_MAX;
uint16_t x216 = 75U;
int8_t x223 = INT8_MAX;
int32_t x224 = 5538;
static uint8_t x239 = UINT8_MAX;
static int64_t t48 = -13488294780482113LL;
static int32_t x253 = -1;
int16_t x255 = 148;
volatile uint64_t t51 = 75518511329LLU;
uint64_t x273 = UINT64_MAX;
volatile int16_t x274 = -1;
static int32_t x275 = 1331795;
volatile uint64_t t52 = 526621493LLU;
static uint32_t x312 = UINT32_MAX;
uint64_t x320 = 45LLU;
volatile int32_t t61 = 93454931;
volatile int16_t x336 = -1;
int64_t t63 = -120LL;
volatile uint16_t x342 = 1U;
int32_t x346 = INT32_MAX;
int64_t x349 = -1LL;
static int16_t x353 = -1;
static int32_t x358 = -1;
uint64_t x360 = UINT64_MAX;
static int32_t x364 = -1;
int8_t x374 = 4;
int16_t x383 = -6637;
int16_t x384 = INT16_MAX;
int32_t x385 = INT32_MAX;
volatile int32_t x387 = INT32_MIN;
volatile uint64_t t77 = 867455LLU;
uint32_t x399 = 118533648U;
int16_t x409 = -57;
static volatile uint8_t x411 = 58U;
volatile int8_t x412 = INT8_MAX;
volatile int32_t t81 = -1;
volatile int64_t x420 = -1LL;
volatile uint8_t x422 = 52U;
uint64_t x429 = 9517LLU;
int16_t x433 = -424;
volatile uint64_t t87 = 8551342941168909873LLU;
uint8_t x438 = 22U;
static uint8_t x441 = 77U;
static volatile int8_t x444 = -6;
int32_t t89 = -3;
int32_t x451 = -1;
volatile uint64_t t91 = 8LLU;
int64_t x461 = -1LL;
volatile int8_t x463 = INT8_MAX;
int8_t x469 = 3;
int16_t x472 = -1;
int8_t x477 = -1;
uint32_t x478 = UINT32_MAX;
static uint32_t t97 = 1516787U;


void f0(void) {
	volatile int16_t x1 = INT16_MAX;
	volatile int64_t x2 = -23LL;
	int16_t x3 = INT16_MIN;
	int8_t x4 = -1;
	int64_t t0 = -89243586349786437LL;

	t0 = ((x1|x2)+(x3-x4));

	if (t0 != -32768LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 0LLU;
	int32_t x6 = -1;
	int8_t x7 = INT8_MIN;
	static volatile uint8_t x8 = 1U;
	volatile uint64_t t1 = 1835038238235409LLU;

	t1 = ((x5|x6)+(x7-x8));

	if (t1 != 18446744073709551486LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = -1;
	int8_t x11 = INT8_MIN;
	static volatile uint8_t x12 = 91U;
	int32_t t2 = 7425430;

	t2 = ((x9|x10)+(x11-x12));

	if (t2 != -220) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -158493;
	int8_t x14 = -1;
	static volatile int8_t x15 = 0;
	static volatile uint64_t t3 = 4153805013993054LLU;

	t3 = ((x13|x14)+(x15-x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = -1;
	int16_t x18 = -1;
	int16_t x19 = -1;
	static int16_t x20 = INT16_MIN;
	int32_t t4 = 294858635;

	t4 = ((x17|x18)+(x19-x20));

	if (t4 != 32766) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = -187;
	int64_t x30 = INT64_MAX;
	int8_t x31 = 27;
	uint32_t x32 = 6648943U;
	volatile int64_t t5 = 573LL;

	t5 = ((x29|x30)+(x31-x32));

	if (t5 != 4288318379LL) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = INT64_MAX;
	volatile uint64_t x35 = 1046078478987LLU;
	uint64_t t6 = 101262166678243LLU;

	t6 = ((x33|x34)+(x35-x36));

	if (t6 != 1048225962634LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t t7 = 399502;

	t7 = ((x37|x38)+(x39-x40));

	if (t7 != -2147450753) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = INT32_MIN;
	int32_t x47 = -1;
	int64_t x48 = 656531LL;
	volatile int64_t t8 = 1729533411360LL;

	t8 = ((x45|x46)+(x47-x48));

	if (t8 != 2147493537LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x49 = 11449259479LL;
	static uint16_t x52 = 2U;
	static volatile int64_t t9 = -2095923LL;

	t9 = ((x49|x50)+(x51-x52));

	if (t9 != 11449259477LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x53 = 6;
	volatile int32_t x56 = 1487;
	int32_t t10 = -666975;

	t10 = ((x53|x54)+(x55-x56));

	if (t10 != 2147482175) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x57 = INT16_MAX;
	int32_t x58 = INT32_MIN;
	uint32_t x59 = 381U;
	uint32_t x60 = 7U;
	volatile uint32_t t11 = 6871U;

	t11 = ((x57|x58)+(x59-x60));

	if (t11 != 2147516789U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = -1;
	uint64_t x62 = UINT64_MAX;
	int8_t x63 = 3;
	volatile uint64_t x64 = 22119674579917902LLU;

	t12 = ((x61|x62)+(x63-x64));

	if (t12 != 18424624399129633716LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x65 = INT8_MIN;
	int16_t x66 = INT16_MIN;
	volatile int32_t x67 = -1;
	uint64_t x68 = 32215LLU;
	uint64_t t13 = 4911453107369054LLU;

	t13 = ((x65|x66)+(x67-x68));

	if (t13 != 18446744073709519272LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x69 = -34;
	static int64_t x70 = INT64_MIN;
	int64_t x71 = INT64_MIN;
	static int8_t x72 = INT8_MIN;
	volatile int64_t t14 = 3837973LL;

	t14 = ((x69|x70)+(x71-x72));

	if (t14 != -9223372036854775714LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x73 = 0;
	uint64_t x74 = 28208923213732083LLU;
	int16_t x75 = -50;
	int32_t x76 = INT32_MIN;
	uint64_t t15 = 24LLU;

	t15 = ((x73|x74)+(x75-x76));

	if (t15 != 28208925361215681LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x81 = 0;
	int64_t x83 = INT64_MIN;
	int16_t x84 = -43;
	static int64_t t16 = -31767602776478888LL;

	t16 = ((x81|x82)+(x83-x84));

	if (t16 != -9223372036854775766LL) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile uint32_t x85 = 1U;
	int32_t x86 = -3122333;
	volatile uint32_t x87 = UINT32_MAX;
	uint64_t x88 = 8950441708343657LLU;

	t17 = ((x85|x86)+(x87-x88));

	if (t17 != 18437793640588020217LLU) { NG(); } else { ; }
	
}

void f18(void) {


	t18 = ((x89|x90)+(x91-x92));

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x94 = INT8_MIN;
	volatile int32_t x95 = INT32_MIN;
	volatile int64_t x96 = INT64_MIN;
	volatile int64_t t19 = 208664984969362LL;

	t19 = ((x93|x94)+(x95-x96));

	if (t19 != 9223372034707292038LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x101 = 5507421537818070LLU;
	uint32_t x102 = 42809369U;

	t20 = ((x101|x102)+(x103-x104));

	if (t20 != 5507425875525068LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x105 = -1;
	static int8_t x106 = -63;
	static int64_t x108 = -41531842946580933LL;
	static volatile int64_t t21 = -1795226468750227190LL;

	t21 = ((x105|x106)+(x107-x108));

	if (t21 != 41531842946646467LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x109 = UINT64_MAX;
	int64_t x110 = INT64_MAX;
	int32_t x112 = INT32_MAX;
	uint64_t t22 = 345853784840051511LLU;

	t22 = ((x109|x110)+(x111-x112));

	if (t22 != 18446744071562067971LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x114 = 1983449397570850LLU;
	static int8_t x115 = INT8_MAX;
	static uint8_t x116 = 3U;
	static uint64_t t23 = 38454877226LLU;

	t23 = ((x113|x114)+(x115-x116));

	if (t23 != 1983450257031291LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x117 = INT64_MIN;
	int32_t x118 = INT32_MIN;
	static int32_t x119 = 474556101;
	int64_t x120 = -376345234544845999LL;
	int64_t t24 = 746488279654LL;

	t24 = ((x117|x118)+(x119-x120));

	if (t24 != 376345232871918452LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x122 = INT16_MAX;
	int16_t x123 = -1;
	int32_t x124 = -130873;
	static int32_t t25 = -11;

	t25 = ((x121|x122)+(x123-x124));

	if (t25 != 130871) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x125 = INT32_MAX;
	int8_t x127 = -28;
	int16_t x128 = INT16_MAX;
	volatile int32_t t26 = 334;

	t26 = ((x125|x126)+(x127-x128));

	if (t26 != -32796) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x129 = UINT32_MAX;
	uint32_t x131 = UINT32_MAX;
	int32_t x132 = 119;
	volatile uint32_t t27 = 5573211U;

	t27 = ((x129|x130)+(x131-x132));

	if (t27 != 4294967175U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x137 = 1;
	volatile uint8_t x138 = 0U;
	volatile uint8_t x139 = 0U;
	int16_t x140 = INT16_MIN;
	volatile int32_t t28 = -602169137;

	t28 = ((x137|x138)+(x139-x140));

	if (t28 != 32769) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x141 = 44U;
	uint64_t x142 = 1579536429916110103LLU;
	static volatile int64_t x143 = 1751800530131017226LL;
	volatile uint8_t x144 = 0U;
	static volatile uint64_t t29 = 1178000856074611338LLU;

	t29 = ((x141|x142)+(x143-x144));

	if (t29 != 3331336960047127369LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x146 = INT64_MIN;
	int8_t x147 = INT8_MAX;
	volatile int8_t x148 = INT8_MAX;
	int64_t t30 = INT64_MIN;

	t30 = ((x145|x146)+(x147-x148));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x149 = INT16_MIN;
	uint8_t x150 = 0U;
	static volatile uint16_t x151 = 9U;
	static uint16_t x152 = 12106U;
	static int32_t t31 = 37480;

	t31 = ((x149|x150)+(x151-x152));

	if (t31 != -44865) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x158 = INT64_MIN;
	uint8_t x159 = 15U;
	int32_t x160 = -1;
	int64_t t32 = -4295276955415917LL;

	t32 = ((x157|x158)+(x159-x160));

	if (t32 != -32752LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x163 = -1;
	int64_t t33 = 80226LL;

	t33 = ((x161|x162)+(x163-x164));

	if (t33 != 11263LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x170 = INT64_MAX;
	int64_t x171 = -1LL;
	static uint8_t x172 = 39U;
	volatile int64_t t34 = 1217598686496194958LL;

	t34 = ((x169|x170)+(x171-x172));

	if (t34 != 9223372036854775767LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x175 = INT32_MAX;
	static uint8_t x176 = 0U;
	volatile int32_t t35 = 4;

	t35 = ((x173|x174)+(x175-x176));

	if (t35 != 126) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x177 = 1711509658877713683LLU;
	uint8_t x178 = 3U;
	int32_t x179 = INT32_MIN;

	t36 = ((x177|x178)+(x179-x180));

	if (t36 != 10934881693585005843LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x181 = INT16_MAX;
	uint16_t x182 = UINT16_MAX;
	volatile uint16_t x183 = UINT16_MAX;
	static volatile int32_t t37 = -65;

	t37 = ((x181|x182)+(x183-x184));

	if (t37 != 131048) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x186 = -1LL;
	volatile uint32_t x187 = 145U;
	int32_t x188 = INT32_MIN;

	t38 = ((x185|x186)+(x187-x188));

	if (t38 != 2147483792LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x190 = INT8_MAX;
	int16_t x191 = -604;
	uint64_t x192 = 7933575LLU;
	volatile uint64_t t39 = 114568LLU;

	t39 = ((x189|x190)+(x191-x192));

	if (t39 != 2139549468LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x194 = 15;
	int32_t x195 = -10;
	int32_t x196 = -30532;
	int32_t t40 = -3399;

	t40 = ((x193|x194)+(x195-x196));

	if (t40 != 30521) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x197 = INT8_MIN;
	uint32_t x198 = UINT32_MAX;
	volatile int16_t x199 = INT16_MAX;
	int8_t x200 = -1;
	uint32_t t41 = 3382U;

	t41 = ((x197|x198)+(x199-x200));

	if (t41 != 32767U) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x201 = 14100210070344LL;
	uint16_t x202 = 2232U;
	int8_t x203 = INT8_MAX;
	int32_t x204 = -1;
	volatile int64_t t42 = -30521041LL;

	t42 = ((x201|x202)+(x203-x204));

	if (t42 != 14100210072696LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x205 = UINT32_MAX;
	static int64_t x206 = -584582761LL;
	int64_t x207 = -1LL;
	uint16_t x208 = 1U;

	t43 = ((x205|x206)+(x207-x208));

	if (t43 != -3LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x209 = -319864;
	int64_t x210 = -1LL;
	int8_t x211 = -1;
	int64_t t44 = 2198892100LL;

	t44 = ((x209|x210)+(x211-x212));

	if (t44 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x213 = 1486506979410471LLU;
	int64_t x214 = -1LL;
	volatile uint64_t t45 = 31432979LLU;

	t45 = ((x213|x214)+(x215-x216));

	if (t45 != 9223372036854775731LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x221 = 9116130834369LLU;
	int8_t x222 = INT8_MAX;
	uint64_t t46 = 125685LLU;

	t46 = ((x221|x222)+(x223-x224));

	if (t46 != 9116130829020LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x237 = -1;
	uint8_t x238 = 3U;
	int8_t x240 = -1;
	volatile int32_t t47 = 39944961;

	t47 = ((x237|x238)+(x239-x240));

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x245 = -7;
	int16_t x246 = INT16_MIN;
	int64_t x247 = 1875612103621854661LL;
	volatile int8_t x248 = INT8_MAX;

	t48 = ((x245|x246)+(x247-x248));

	if (t48 != 1875612103621854527LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x254 = INT8_MIN;
	volatile int8_t x256 = INT8_MAX;
	int32_t t49 = 0;

	t49 = ((x253|x254)+(x255-x256));

	if (t49 != 20) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x261 = UINT16_MAX;
	volatile uint64_t x262 = 36LLU;
	int16_t x263 = -1;
	int32_t x264 = INT32_MAX;
	static volatile uint64_t t50 = 3526871LLU;

	t50 = ((x261|x262)+(x263-x264));

	if (t50 != 18446744071562133503LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x265 = INT16_MIN;
	uint16_t x266 = UINT16_MAX;
	volatile uint64_t x267 = 60894375643LLU;
	uint64_t x268 = 447942546745457403LLU;

	t51 = ((x265|x266)+(x267-x268));

	if (t51 != 17998801587858469855LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x276 = -1;

	t52 = ((x273|x274)+(x275-x276));

	if (t52 != 1331795LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x277 = 212732244U;
	volatile uint64_t x278 = 208880237925LLU;
	uint8_t x279 = 25U;
	int16_t x280 = 221;
	static uint64_t t53 = 1270207658312022844LLU;

	t53 = ((x277|x278)+(x279-x280));

	if (t53 != 209090215089LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x289 = -1LL;
	int8_t x290 = INT8_MIN;
	volatile int32_t x291 = -51996393;
	int8_t x292 = 3;
	static volatile int64_t t54 = -15209LL;

	t54 = ((x289|x290)+(x291-x292));

	if (t54 != -51996397LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x293 = -1;
	volatile uint32_t x294 = UINT32_MAX;
	int8_t x295 = INT8_MIN;
	uint64_t x296 = UINT64_MAX;
	volatile uint64_t t55 = 2982219655LLU;

	t55 = ((x293|x294)+(x295-x296));

	if (t55 != 4294967168LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x297 = UINT64_MAX;
	int16_t x298 = -15245;
	static volatile uint16_t x299 = 0U;
	uint32_t x300 = 1038566610U;
	volatile uint64_t t56 = 23180079LLU;

	t56 = ((x297|x298)+(x299-x300));

	if (t56 != 3256400685LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x301 = 22758;
	int64_t x302 = -368942934616LL;
	int32_t x303 = -78205;
	uint16_t x304 = 29884U;
	int64_t t57 = -9251404169113LL;

	t57 = ((x301|x302)+(x303-x304));

	if (t57 != -368943024203LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x305 = 82U;
	uint16_t x306 = 191U;
	uint8_t x307 = UINT8_MAX;
	volatile int64_t x308 = -1LL;
	volatile int64_t t58 = 4788324876984744LL;

	t58 = ((x305|x306)+(x307-x308));

	if (t58 != 511LL) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x309 = INT8_MIN;
	volatile uint64_t x310 = 1LLU;
	volatile int16_t x311 = INT16_MAX;
	uint64_t t59 = 1596935661471894LLU;

	t59 = ((x309|x310)+(x311-x312));

	if (t59 != 32641LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int32_t x317 = INT32_MIN;
	uint64_t x318 = 307482441824104LLU;
	volatile int16_t x319 = INT16_MAX;
	uint64_t t60 = 863LLU;

	t60 = ((x317|x318)+(x319-x320));

	if (t60 != 18446744073000236858LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x325 = INT32_MAX;
	static uint16_t x326 = UINT16_MAX;
	uint8_t x327 = 1U;
	int16_t x328 = INT16_MAX;

	t61 = ((x325|x326)+(x327-x328));

	if (t61 != 2147450881) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x329 = 36U;
	static int64_t x330 = -1LL;
	int64_t x331 = INT64_MIN;
	int8_t x332 = INT8_MIN;
	volatile int64_t t62 = 35LL;

	t62 = ((x329|x330)+(x331-x332));

	if (t62 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x333 = -1LL;
	int8_t x334 = 3;
	int16_t x335 = INT16_MAX;

	t63 = ((x333|x334)+(x335-x336));

	if (t63 != 32767LL) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x337 = 12U;
	static uint16_t x338 = 64U;
	uint64_t x339 = UINT64_MAX;
	int8_t x340 = INT8_MIN;
	static uint64_t t64 = 49088077163969LLU;

	t64 = ((x337|x338)+(x339-x340));

	if (t64 != 203LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x341 = -1;
	int16_t x343 = 13;
	int16_t x344 = -570;
	static volatile int32_t t65 = -3;

	t65 = ((x341|x342)+(x343-x344));

	if (t65 != 582) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x345 = INT64_MAX;
	uint64_t x347 = UINT64_MAX;
	static int16_t x348 = -1;
	volatile uint64_t t66 = 132293349533468590LLU;

	t66 = ((x345|x346)+(x347-x348));

	if (t66 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x350 = 125U;
	static int16_t x351 = INT16_MIN;
	volatile uint64_t x352 = UINT64_MAX;
	volatile uint64_t t67 = 1434120760LLU;

	t67 = ((x349|x350)+(x351-x352));

	if (t67 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x354 = INT8_MIN;
	int8_t x355 = INT8_MIN;
	int16_t x356 = INT16_MIN;
	int32_t t68 = -74618919;

	t68 = ((x353|x354)+(x355-x356));

	if (t68 != 32639) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x357 = INT8_MIN;
	int8_t x359 = INT8_MIN;
	static uint64_t t69 = 25389927986218LLU;

	t69 = ((x357|x358)+(x359-x360));

	if (t69 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x361 = 11U;
	volatile uint32_t x362 = UINT32_MAX;
	static int16_t x363 = INT16_MIN;
	volatile uint32_t t70 = 23465U;

	t70 = ((x361|x362)+(x363-x364));

	if (t70 != 4294934528U) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x365 = 7U;
	uint16_t x366 = 5U;
	int16_t x367 = -1;
	uint32_t x368 = 0U;
	uint32_t t71 = 3U;

	t71 = ((x365|x366)+(x367-x368));

	if (t71 != 6U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x369 = 9U;
	uint8_t x370 = 0U;
	static uint64_t x371 = UINT64_MAX;
	int8_t x372 = -9;
	uint64_t t72 = 195500LLU;

	t72 = ((x369|x370)+(x371-x372));

	if (t72 != 17LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x373 = -3399956LL;
	uint8_t x375 = 26U;
	static volatile uint8_t x376 = 24U;
	int64_t t73 = -42203868922994LL;

	t73 = ((x373|x374)+(x375-x376));

	if (t73 != -3399954LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x377 = -1;
	static int32_t x378 = INT32_MIN;
	uint64_t x379 = 2198471157914877LLU;
	volatile uint16_t x380 = 41U;
	uint64_t t74 = 232LLU;

	t74 = ((x377|x378)+(x379-x380));

	if (t74 != 2198471157914835LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x381 = INT64_MAX;
	uint16_t x382 = 39U;
	int64_t t75 = 7338277164LL;

	t75 = ((x381|x382)+(x383-x384));

	if (t75 != 9223372036854736403LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x386 = 455LLU;
	int64_t x388 = INT64_MIN;
	uint64_t t76 = 35279LLU;

	t76 = ((x385|x386)+(x387-x388));

	if (t76 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x389 = UINT64_MAX;
	int16_t x390 = -15;
	uint8_t x391 = 1U;
	static int32_t x392 = -17629467;

	t77 = ((x389|x390)+(x391-x392));

	if (t77 != 17629467LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x393 = INT8_MIN;
	int64_t x394 = INT64_MIN;
	int64_t x395 = -578LL;
	int16_t x396 = INT16_MIN;
	static int64_t t78 = -46868492LL;

	t78 = ((x393|x394)+(x395-x396));

	if (t78 != 32062LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x397 = -564;
	static volatile int32_t x398 = INT32_MIN;
	volatile int64_t x400 = -4024LL;
	volatile int64_t t79 = -1707823296730LL;

	t79 = ((x397|x398)+(x399-x400));

	if (t79 != 118537108LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x405 = 0;
	int32_t x406 = INT32_MIN;
	int32_t x407 = INT32_MAX;
	uint32_t x408 = UINT32_MAX;
	static volatile uint32_t t80 = 535U;

	t80 = ((x405|x406)+(x407-x408));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x410 = INT32_MIN;

	t81 = ((x409|x410)+(x411-x412));

	if (t81 != -126) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x413 = UINT8_MAX;
	uint32_t x414 = UINT32_MAX;
	uint16_t x415 = 87U;
	static int64_t x416 = INT64_MAX;
	int64_t t82 = -165853464372LL;

	t82 = ((x413|x414)+(x415-x416));

	if (t82 != -9223372032559808425LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x417 = 25800419252415029LL;
	volatile int64_t x418 = INT64_MAX;
	int64_t x419 = -1LL;
	int64_t t83 = INT64_MAX;

	t83 = ((x417|x418)+(x419-x420));

	if (t83 != INT64_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x421 = INT32_MIN;
	int8_t x423 = 14;
	static int64_t x424 = -1LL;
	int64_t t84 = -18621267830LL;

	t84 = ((x421|x422)+(x423-x424));

	if (t84 != -2147483581LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x425 = -1LL;
	int32_t x426 = INT32_MAX;
	int64_t x427 = -1LL;
	uint32_t x428 = 863U;
	int64_t t85 = 8439LL;

	t85 = ((x425|x426)+(x427-x428));

	if (t85 != -865LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x430 = INT8_MIN;
	static int16_t x431 = -250;
	int32_t x432 = -1;
	volatile uint64_t t86 = 140112897938858LLU;

	t86 = ((x429|x430)+(x431-x432));

	if (t86 != 18446744073709551284LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x434 = 8628326317912167237LLU;
	int16_t x435 = INT16_MIN;
	volatile int16_t x436 = -39;

	t87 = ((x433|x434)+(x435-x436));

	if (t87 != 18446744073709518724LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x437 = -19;
	static int16_t x439 = -1;
	uint64_t x440 = UINT64_MAX;
	uint64_t t88 = UINT64_MAX;

	t88 = ((x437|x438)+(x439-x440));

	if (t88 != UINT64_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x442 = 2U;
	volatile int16_t x443 = -1;

	t89 = ((x441|x442)+(x443-x444));

	if (t89 != 84) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x445 = INT32_MIN;
	int64_t x446 = INT64_MAX;
	volatile int64_t x447 = 12876375156489017LL;
	static uint32_t x448 = 37987582U;
	static int64_t t90 = -10839957383069475LL;

	t90 = ((x445|x446)+(x447-x448));

	if (t90 != 12876375118501434LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x449 = 1102LLU;
	uint16_t x450 = 65U;
	int32_t x452 = INT32_MIN;

	t91 = ((x449|x450)+(x451-x452));

	if (t91 != 2147484750LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x457 = 38U;
	volatile uint8_t x458 = 103U;
	int16_t x459 = INT16_MIN;
	volatile int32_t x460 = 1;
	int32_t t92 = -28;

	t92 = ((x457|x458)+(x459-x460));

	if (t92 != -32666) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x462 = 93LLU;
	int64_t x464 = INT64_MAX;
	volatile uint64_t t93 = 3LLU;

	t93 = ((x461|x462)+(x463-x464));

	if (t93 != 9223372036854775935LLU) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x465 = 160LLU;
	int8_t x466 = 0;
	uint16_t x467 = UINT16_MAX;
	volatile uint64_t x468 = 84LLU;
	volatile uint64_t t94 = 2651LLU;

	t94 = ((x465|x466)+(x467-x468));

	if (t94 != 65611LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x470 = 1239U;
	int32_t x471 = INT32_MIN;
	static uint32_t t95 = 23753147U;

	t95 = ((x469|x470)+(x471-x472));

	if (t95 != 2147484888U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x479 = INT16_MIN;
	uint32_t x480 = UINT32_MAX;
	uint32_t t96 = 4U;

	t96 = ((x477|x478)+(x479-x480));

	if (t96 != 4294934528U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x481 = UINT16_MAX;
	int16_t x482 = -1;
	static volatile uint32_t x483 = UINT32_MAX;
	volatile uint8_t x484 = UINT8_MAX;

	t97 = ((x481|x482)+(x483-x484));

	if (t97 != 4294967039U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x485 = INT16_MAX;
	uint8_t x486 = 29U;
	int16_t x487 = -43;
	volatile uint8_t x488 = 1U;
	int32_t t98 = -6661;

	t98 = ((x485|x486)+(x487-x488));

	if (t98 != 32723) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x489 = 22U;
	uint16_t x490 = 3742U;
	int16_t x491 = -1;
	int16_t x492 = 11;
	int32_t t99 = -664399870;

	t99 = ((x489|x490)+(x491-x492));

	if (t99 != 3730) { NG(); } else { ; }
	
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

