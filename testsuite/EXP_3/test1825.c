#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x16 = INT64_MIN;
volatile int32_t t3 = -1;
int64_t x40 = -52451463503414LL;
volatile uint8_t x44 = UINT8_MAX;
static uint64_t t7 = 6677891827003703LLU;
int16_t x50 = -1;
uint32_t x56 = UINT32_MAX;
uint32_t x61 = UINT32_MAX;
int32_t x65 = -1;
volatile uint16_t x69 = UINT16_MAX;
uint32_t x71 = UINT32_MAX;
static int8_t x81 = -1;
volatile int8_t x90 = 48;
int32_t x92 = 2743;
int64_t x93 = INT64_MIN;
static uint64_t x94 = 888642931578991091LLU;
volatile uint64_t t20 = 908576LLU;
int16_t x101 = -21;
int32_t x107 = INT32_MIN;
static int64_t x115 = INT64_MIN;
uint16_t x140 = UINT16_MAX;
int8_t x155 = -1;
int16_t x156 = 170;
int32_t t29 = -7166;
uint32_t x163 = 46102626U;
volatile int64_t t31 = -8249173720LL;
volatile int32_t t32 = -1;
uint64_t x177 = 11387LLU;
volatile uint64_t t33 = 57141LLU;
int8_t x182 = 33;
int16_t x185 = INT16_MIN;
int64_t t35 = -24LL;
int8_t x189 = INT8_MAX;
static volatile int16_t x201 = INT16_MIN;
static int32_t x202 = -1;
uint8_t x206 = UINT8_MAX;
uint64_t x207 = 8542975465LLU;
int32_t x219 = 148003859;
volatile int32_t t43 = -34;
static int16_t x238 = INT16_MIN;
static int8_t x245 = INT8_MIN;
volatile int64_t x252 = 1LL;
volatile int8_t x254 = -12;
uint64_t t49 = 4921374219LLU;
int64_t x259 = INT64_MIN;
int64_t x269 = -22227584LL;
static uint16_t x272 = UINT16_MAX;
int8_t x274 = -34;
static uint8_t x275 = 55U;
volatile uint64_t t54 = 15772LLU;
volatile int64_t x281 = INT64_MIN;
int64_t t55 = -2128LL;
uint64_t t56 = 3LLU;
int8_t x289 = INT8_MAX;
int8_t x290 = -1;
int16_t x303 = INT16_MAX;
int32_t x312 = -14931112;
int64_t x326 = 7620LL;
uint64_t x327 = 126663LLU;
int64_t x336 = INT64_MAX;
static volatile uint8_t x341 = 12U;
uint32_t x345 = UINT32_MAX;
static uint32_t x349 = UINT32_MAX;
int64_t t69 = -1LL;
volatile int32_t t71 = -6953272;
int64_t x375 = 1517LL;
volatile int64_t t74 = 781239005983117882LL;
int8_t x387 = -1;
volatile uint16_t x391 = 26U;
int32_t x395 = -1;
int16_t x396 = INT16_MAX;
static uint32_t x417 = UINT32_MAX;
int8_t x419 = -1;
uint32_t t82 = 21517398U;
uint64_t x422 = UINT64_MAX;
uint32_t x424 = 495433685U;
int8_t x428 = INT8_MIN;
int64_t t84 = -656307542794028135LL;
volatile uint32_t x439 = 3U;
volatile uint64_t t88 = 13366572601LLU;
int16_t x451 = 1;
volatile int8_t x452 = -1;
static uint64_t t89 = 4369436004099LLU;
int64_t x459 = 3LL;
uint16_t x464 = 1U;
volatile int16_t x470 = INT16_MIN;
int32_t x471 = INT32_MIN;
volatile int64_t x484 = 2936405975600LL;
uint32_t x491 = UINT32_MAX;
static int8_t x493 = INT8_MAX;
int64_t x499 = -279568422322145LL;


void f0(void) {
	static volatile int32_t x1 = INT32_MAX;
	int8_t x2 = -1;
	int64_t x3 = INT64_MAX;
	volatile int8_t x4 = INT8_MIN;
	volatile int64_t t0 = -71401532LL;

	t0 = ((x1&x2)%(x3&x4));

	if (t0 != 2147483647LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	volatile uint16_t x6 = UINT16_MAX;
	uint16_t x7 = UINT16_MAX;
	uint16_t x8 = 624U;
	volatile int32_t t1 = -1875;

	t1 = ((x5&x6)%(x7&x8));

	if (t1 != 15) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x13 = INT32_MAX;
	uint32_t x14 = 6166499U;
	int8_t x15 = INT8_MIN;
	int64_t t2 = -69195LL;

	t2 = ((x13&x14)%(x15&x16));

	if (t2 != 6166499LL) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -673741;
	int8_t x18 = 34;
	static volatile uint8_t x19 = 24U;
	uint8_t x20 = 53U;

	t3 = ((x17&x18)%(x19&x20));

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	int16_t x22 = -1295;
	int64_t x23 = INT64_MIN;
	int32_t x24 = INT32_MIN;
	volatile int64_t t4 = 10LL;

	t4 = ((x21&x22)%(x23&x24));

	if (t4 != -1408LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x29 = -1;
	uint32_t x30 = 6559210U;
	int16_t x31 = INT16_MIN;
	uint64_t x32 = UINT64_MAX;
	volatile uint64_t t5 = 266554104409383845LLU;

	t5 = ((x29&x30)%(x31&x32));

	if (t5 != 6559210LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x37 = UINT16_MAX;
	int32_t x38 = 4238;
	int32_t x39 = -192161;
	volatile int64_t t6 = -165367039373LL;

	t6 = ((x37&x38)%(x39&x40));

	if (t6 != 4238LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x41 = 5;
	uint64_t x42 = 3LLU;
	uint8_t x43 = 2U;

	t7 = ((x41&x42)%(x43&x44));

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x45 = -1;
	uint64_t x46 = 166518515LLU;
	int8_t x47 = -1;
	int32_t x48 = INT32_MIN;
	static uint64_t t8 = 1LLU;

	t8 = ((x45&x46)%(x47&x48));

	if (t8 != 166518515LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x49 = 7U;
	static int64_t x51 = 3353LL;
	uint16_t x52 = UINT16_MAX;
	int64_t t9 = 10LL;

	t9 = ((x49&x50)%(x51&x52));

	if (t9 != 7LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x53 = 21U;
	uint64_t x54 = 133LLU;
	uint16_t x55 = 29945U;
	uint64_t t10 = 29600859084901080LLU;

	t10 = ((x53&x54)%(x55&x56));

	if (t10 != 5LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = INT32_MAX;
	static uint8_t x58 = 62U;
	int16_t x59 = 4891;
	int8_t x60 = 42;
	int32_t t11 = 161;

	t11 = ((x57&x58)%(x59&x60));

	if (t11 != 2) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x62 = UINT32_MAX;
	volatile int16_t x63 = -1;
	int64_t x64 = 31908LL;
	static volatile int64_t t12 = -49LL;

	t12 = ((x61&x62)%(x63&x64));

	if (t12 != 22863LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x66 = INT64_MIN;
	int8_t x67 = INT8_MAX;
	uint16_t x68 = 7083U;
	volatile int64_t t13 = -1795760546433610695LL;

	t13 = ((x65&x66)%(x67&x68));

	if (t13 != -42LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x70 = INT64_MAX;
	static uint16_t x72 = 6U;
	static volatile int64_t t14 = -2792845098053318120LL;

	t14 = ((x69&x70)%(x71&x72));

	if (t14 != 3LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x73 = 11075422LLU;
	int16_t x74 = INT16_MAX;
	int32_t x75 = -1;
	volatile int8_t x76 = -1;
	static uint64_t t15 = 2933LLU;

	t15 = ((x73&x74)%(x75&x76));

	if (t15 != 32606LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x77 = 7318U;
	uint64_t x78 = 131440724LLU;
	uint8_t x79 = UINT8_MAX;
	int16_t x80 = -1;
	uint64_t t16 = 430152LLU;

	t16 = ((x77&x78)%(x79&x80));

	if (t16 != 20LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x82 = UINT8_MAX;
	uint32_t x83 = 12592U;
	volatile uint16_t x84 = 3096U;
	volatile uint32_t t17 = 2149901U;

	t17 = ((x81&x82)%(x83&x84));

	if (t17 != 15U) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x85 = 65777U;
	volatile uint16_t x86 = 30036U;
	uint8_t x87 = 5U;
	uint64_t x88 = UINT64_MAX;
	static volatile uint64_t t18 = 1727034258834699LLU;

	t18 = ((x85&x86)%(x87&x88));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x89 = -1;
	int32_t x91 = -1;
	volatile int32_t t19 = -3111;

	t19 = ((x89&x90)%(x91&x92));

	if (t19 != 48) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x95 = 1;
	int16_t x96 = 1;

	t20 = ((x93&x94)%(x95&x96));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x102 = 0U;
	static int64_t x103 = INT64_MAX;
	int64_t x104 = -1LL;
	int64_t t21 = 845442132308156LL;

	t21 = ((x101&x102)%(x103&x104));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x105 = 15935LLU;
	int16_t x106 = INT16_MIN;
	int64_t x108 = -1LL;
	uint64_t t22 = 0LLU;

	t22 = ((x105&x106)%(x107&x108));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x113 = 114775050U;
	volatile int8_t x114 = -10;
	int64_t x116 = -1007LL;
	int64_t t23 = -300166481LL;

	t23 = ((x113&x114)%(x115&x116));

	if (t23 != 114775042LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x125 = 15206;
	int32_t x126 = -1;
	int8_t x127 = -13;
	volatile uint64_t x128 = UINT64_MAX;
	uint64_t t24 = 4368685210740308388LLU;

	t24 = ((x125&x126)%(x127&x128));

	if (t24 != 15206LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x137 = 4429427LLU;
	volatile int32_t x138 = -1;
	static int64_t x139 = -1LL;
	uint64_t t25 = 35632726560271177LLU;

	t25 = ((x137&x138)%(x139&x140));

	if (t25 != 38582LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x141 = 5399736;
	int64_t x142 = 2222207675787LL;
	int32_t x143 = 129893;
	uint64_t x144 = 184581717LLU;
	volatile uint64_t t26 = 249559311LLU;

	t26 = ((x141&x142)%(x143&x144));

	if (t26 != 15190LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x149 = 739985LLU;
	volatile uint32_t x150 = 413U;
	int16_t x151 = INT16_MIN;
	int32_t x152 = -1;
	uint64_t t27 = 7058895566224LLU;

	t27 = ((x149&x150)%(x151&x152));

	if (t27 != 145LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x153 = 84U;
	int16_t x154 = 6;
	volatile int32_t t28 = 14;

	t28 = ((x153&x154)%(x155&x156));

	if (t28 != 4) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x157 = 6;
	int8_t x158 = INT8_MAX;
	static uint16_t x159 = 45U;
	int32_t x160 = INT32_MAX;

	t29 = ((x157&x158)%(x159&x160));

	if (t29 != 6) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x161 = -13;
	static int8_t x162 = -12;
	static uint32_t x164 = UINT32_MAX;
	volatile uint32_t t30 = 246769U;

	t30 = ((x161&x162)%(x163&x164));

	if (t30 != 7423062U) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x165 = 82245596LL;
	int16_t x166 = 88;
	uint32_t x167 = UINT32_MAX;
	volatile int32_t x168 = -252083;

	t31 = ((x165&x166)%(x167&x168));

	if (t31 != 88LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x173 = -1;
	static int32_t x174 = INT32_MIN;
	volatile int8_t x175 = INT8_MIN;
	volatile int16_t x176 = INT16_MIN;

	t32 = ((x173&x174)%(x175&x176));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x178 = 140U;
	uint64_t x179 = 3784LLU;
	volatile uint8_t x180 = 101U;

	t33 = ((x177&x178)%(x179&x180));

	if (t33 != 8LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x181 = UINT64_MAX;
	int8_t x183 = -7;
	int16_t x184 = INT16_MIN;
	uint64_t t34 = 31763337282LLU;

	t34 = ((x181&x182)%(x183&x184));

	if (t34 != 33LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x186 = INT32_MIN;
	static int64_t x187 = -10461LL;
	uint16_t x188 = 11552U;

	t35 = ((x185&x186)%(x187&x188));

	if (t35 != -736LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x190 = INT16_MIN;
	uint64_t x191 = UINT64_MAX;
	int64_t x192 = 12667684579207LL;
	volatile uint64_t t36 = 34776429839552407LLU;

	t36 = ((x189&x190)%(x191&x192));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static int32_t x193 = 21;
	int16_t x194 = -1;
	static uint32_t x195 = 17U;
	static uint8_t x196 = 1U;
	uint32_t t37 = 44238079U;

	t37 = ((x193&x194)%(x195&x196));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x197 = 12U;
	static volatile int32_t x198 = INT32_MIN;
	static int8_t x199 = 57;
	static uint16_t x200 = UINT16_MAX;
	volatile int32_t t38 = -659919663;

	t38 = ((x197&x198)%(x199&x200));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x203 = 2026;
	int16_t x204 = -1;
	volatile int32_t t39 = 0;

	t39 = ((x201&x202)%(x203&x204));

	if (t39 != -352) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x205 = INT32_MIN;
	volatile int64_t x208 = INT64_MAX;
	uint64_t t40 = 5519303195234760LLU;

	t40 = ((x205&x206)%(x207&x208));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x209 = 0;
	int16_t x210 = INT16_MAX;
	uint32_t x211 = 71317523U;
	int8_t x212 = INT8_MIN;
	uint32_t t41 = 141U;

	t41 = ((x209&x210)%(x211&x212));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x213 = INT8_MIN;
	uint64_t x214 = 40LLU;
	uint8_t x215 = 58U;
	int8_t x216 = -1;
	static volatile uint64_t t42 = 1637454815613114788LLU;

	t42 = ((x213&x214)%(x215&x216));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x217 = 0;
	int16_t x218 = 1531;
	int8_t x220 = 15;

	t43 = ((x217&x218)%(x219&x220));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x229 = UINT8_MAX;
	int8_t x230 = INT8_MIN;
	volatile uint32_t x231 = 105U;
	uint32_t x232 = 3544U;
	volatile uint32_t t44 = 519881911U;

	t44 = ((x229&x230)%(x231&x232));

	if (t44 != 56U) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x233 = INT16_MIN;
	uint16_t x234 = 6581U;
	int16_t x235 = INT16_MIN;
	volatile int16_t x236 = INT16_MIN;
	volatile int32_t t45 = -68445702;

	t45 = ((x233&x234)%(x235&x236));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x237 = -792482999;
	static int16_t x239 = -1;
	int64_t x240 = -909179912LL;
	static int64_t t46 = 127210051904901574LL;

	t46 = ((x237&x238)%(x239&x240));

	if (t46 != -792494080LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x246 = 19615829LLU;
	int16_t x247 = -1;
	int8_t x248 = INT8_MIN;
	static uint64_t t47 = 1LLU;

	t47 = ((x245&x246)%(x247&x248));

	if (t47 != 19615744LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x249 = 51U;
	uint64_t x250 = 15782LLU;
	volatile int8_t x251 = -1;
	uint64_t t48 = 592500LLU;

	t48 = ((x249&x250)%(x251&x252));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x253 = INT32_MIN;
	volatile uint8_t x255 = UINT8_MAX;
	static uint64_t x256 = 267257555044LLU;

	t49 = ((x253&x254)%(x255&x256));

	if (t49 != 68LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x257 = INT8_MAX;
	int16_t x258 = INT16_MIN;
	int64_t x260 = INT64_MIN;
	volatile int64_t t50 = 978114LL;

	t50 = ((x257&x258)%(x259&x260));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x261 = INT8_MIN;
	static int8_t x262 = 9;
	static volatile int32_t x263 = -239490202;
	static int16_t x264 = INT16_MAX;
	static volatile int32_t t51 = -28650155;

	t51 = ((x261&x262)%(x263&x264));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x265 = 0U;
	uint32_t x266 = UINT32_MAX;
	int64_t x267 = 256868067955576987LL;
	static uint32_t x268 = 29700850U;
	int64_t t52 = 27149LL;

	t52 = ((x265&x266)%(x267&x268));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x270 = 1;
	volatile int16_t x271 = 3038;
	int64_t t53 = -18943292388LL;

	t53 = ((x269&x270)%(x271&x272));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x273 = 5908814320643935576LLU;
	uint8_t x276 = 120U;

	t54 = ((x273&x274)%(x275&x276));

	if (t54 != 40LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x282 = INT8_MIN;
	uint32_t x283 = 16219067U;
	int8_t x284 = INT8_MIN;

	t55 = ((x281&x282)%(x283&x284));

	if (t55 != -12148352LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x285 = 223385470082LL;
	uint16_t x286 = UINT16_MAX;
	int8_t x287 = 52;
	uint64_t x288 = 8006957421290LLU;

	t56 = ((x285&x286)%(x287&x288));

	if (t56 != 2LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x291 = -14985;
	uint64_t x292 = UINT64_MAX;
	volatile uint64_t t57 = 2025462LLU;

	t57 = ((x289&x290)%(x291&x292));

	if (t57 != 127LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x297 = 3732402LLU;
	int8_t x298 = -1;
	int32_t x299 = -1;
	int16_t x300 = INT16_MAX;
	volatile uint64_t t58 = 4882689608LLU;

	t58 = ((x297&x298)%(x299&x300));

	if (t58 != 29731LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x301 = INT8_MIN;
	volatile int32_t x302 = INT32_MAX;
	int64_t x304 = -1LL;
	int64_t t59 = 400523824LL;

	t59 = ((x301&x302)%(x303&x304));

	if (t59 != 32641LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x309 = -23254224420974107LL;
	static uint16_t x310 = UINT16_MAX;
	int8_t x311 = INT8_MIN;
	int64_t t60 = -1636758LL;

	t60 = ((x309&x310)%(x311&x312));

	if (t60 != 20965LL) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint32_t x313 = 184682899U;
	int32_t x314 = INT32_MIN;
	uint32_t x315 = 3547U;
	static int16_t x316 = -1;
	static volatile uint32_t t61 = 155138474U;

	t61 = ((x313&x314)%(x315&x316));

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x321 = 2;
	uint64_t x322 = 307455808308LLU;
	static uint64_t x323 = 46374818LLU;
	volatile int16_t x324 = -1;
	uint64_t t62 = 57672239642052397LLU;

	t62 = ((x321&x322)%(x323&x324));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x325 = INT8_MAX;
	int32_t x328 = INT32_MAX;
	volatile uint64_t t63 = 3035473LLU;

	t63 = ((x325&x326)%(x327&x328));

	if (t63 != 68LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x329 = 1;
	volatile uint16_t x330 = 1U;
	uint32_t x331 = UINT32_MAX;
	static uint64_t x332 = 104434896481LLU;
	uint64_t t64 = 34000224477114369LLU;

	t64 = ((x329&x330)%(x331&x332));

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x333 = INT16_MAX;
	volatile uint64_t x334 = 54878504LLU;
	static int16_t x335 = 10333;
	volatile uint64_t t65 = 8971268LLU;

	t65 = ((x333&x334)%(x335&x336));

	if (t65 != 4206LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x337 = -6;
	volatile int32_t x338 = INT32_MAX;
	uint64_t x339 = UINT64_MAX;
	int16_t x340 = INT16_MIN;
	static uint64_t t66 = 1174LLU;

	t66 = ((x337&x338)%(x339&x340));

	if (t66 != 2147483642LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x342 = UINT32_MAX;
	static int8_t x343 = -1;
	uint32_t x344 = 1U;
	uint32_t t67 = 243U;

	t67 = ((x341&x342)%(x343&x344));

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x346 = UINT16_MAX;
	static volatile uint16_t x347 = 14U;
	static int64_t x348 = -1LL;
	int64_t t68 = -138443531268LL;

	t68 = ((x345&x346)%(x347&x348));

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x350 = -1;
	volatile int64_t x351 = INT64_MIN;
	int16_t x352 = -10780;

	t69 = ((x349&x350)%(x351&x352));

	if (t69 != 4294967295LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x353 = 6718U;
	static int16_t x354 = INT16_MIN;
	static int32_t x355 = INT32_MIN;
	int32_t x356 = -35432666;
	int32_t t70 = -401;

	t70 = ((x353&x354)%(x355&x356));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x357 = UINT8_MAX;
	int8_t x358 = INT8_MIN;
	int8_t x359 = -1;
	uint16_t x360 = 30U;

	t71 = ((x357&x358)%(x359&x360));

	if (t71 != 8) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x361 = INT64_MIN;
	uint16_t x362 = UINT16_MAX;
	int8_t x363 = INT8_MIN;
	uint32_t x364 = 1764051296U;
	int64_t t72 = -1007773749LL;

	t72 = ((x361&x362)%(x363&x364));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x373 = INT16_MIN;
	int64_t x374 = -5LL;
	uint32_t x376 = 30U;
	volatile int64_t t73 = 1LL;

	t73 = ((x373&x374)%(x375&x376));

	if (t73 != -8LL) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint32_t x377 = 821U;
	static int8_t x378 = INT8_MIN;
	static volatile uint8_t x379 = UINT8_MAX;
	int64_t x380 = INT64_MAX;

	t74 = ((x377&x378)%(x379&x380));

	if (t74 != 3LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x385 = INT32_MIN;
	volatile int32_t x386 = -1;
	volatile int32_t x388 = INT32_MIN;
	static volatile int32_t t75 = 85455784;

	t75 = ((x385&x386)%(x387&x388));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x389 = INT16_MAX;
	int32_t x390 = INT32_MIN;
	static int64_t x392 = -1LL;
	volatile int64_t t76 = 253179830LL;

	t76 = ((x389&x390)%(x391&x392));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x393 = 0U;
	uint32_t x394 = 37U;
	volatile uint32_t t77 = 1721351887U;

	t77 = ((x393&x394)%(x395&x396));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x397 = 1;
	int32_t x398 = -1;
	static uint8_t x399 = 60U;
	volatile uint8_t x400 = UINT8_MAX;
	volatile int32_t t78 = 12112966;

	t78 = ((x397&x398)%(x399&x400));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x401 = INT64_MIN;
	int8_t x402 = INT8_MIN;
	volatile int16_t x403 = INT16_MAX;
	volatile uint32_t x404 = 257302U;
	volatile int64_t t79 = 0LL;

	t79 = ((x401&x402)%(x403&x404));

	if (t79 != -13564LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x405 = -5;
	uint8_t x406 = 17U;
	uint8_t x407 = 7U;
	static int8_t x408 = -1;
	int32_t t80 = 128806118;

	t80 = ((x405&x406)%(x407&x408));

	if (t80 != 3) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x413 = UINT64_MAX;
	volatile uint8_t x414 = 29U;
	static int16_t x415 = 16;
	int32_t x416 = INT32_MAX;
	volatile uint64_t t81 = 934448038260LLU;

	t81 = ((x413&x414)%(x415&x416));

	if (t81 != 13LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x418 = INT32_MIN;
	uint32_t x420 = UINT32_MAX;

	t82 = ((x417&x418)%(x419&x420));

	if (t82 != 2147483648U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x421 = 63934U;
	static volatile uint64_t x423 = UINT64_MAX;
	uint64_t t83 = 324830138215715300LLU;

	t83 = ((x421&x422)%(x423&x424));

	if (t83 != 63934LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x425 = INT64_MIN;
	uint16_t x426 = 3U;
	uint32_t x427 = 306U;

	t84 = ((x425&x426)%(x427&x428));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x433 = 64349;
	volatile int8_t x434 = -3;
	uint16_t x435 = UINT16_MAX;
	static uint8_t x436 = 8U;
	volatile int32_t t85 = 43;

	t85 = ((x433&x434)%(x435&x436));

	if (t85 != 5) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x437 = 3;
	static int32_t x438 = INT32_MAX;
	int8_t x440 = INT8_MAX;
	uint32_t t86 = 6U;

	t86 = ((x437&x438)%(x439&x440));

	if (t86 != 0U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x441 = INT16_MIN;
	volatile int8_t x442 = 2;
	int32_t x443 = 2258630;
	int16_t x444 = -1;
	volatile int32_t t87 = -7;

	t87 = ((x441&x442)%(x443&x444));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x445 = 8039LLU;
	static int16_t x446 = INT16_MAX;
	volatile uint64_t x447 = 42434800237LLU;
	volatile int32_t x448 = -6548163;

	t88 = ((x445&x446)%(x447&x448));

	if (t88 != 8039LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x449 = 492559135404873LLU;
	int8_t x450 = INT8_MIN;

	t89 = ((x449&x450)%(x451&x452));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x453 = 3155;
	int64_t x454 = -1LL;
	int32_t x455 = -1;
	int16_t x456 = INT16_MIN;
	int64_t t90 = 868231574157949955LL;

	t90 = ((x453&x454)%(x455&x456));

	if (t90 != 3155LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x457 = INT16_MIN;
	static int16_t x458 = INT16_MIN;
	int16_t x460 = -235;
	volatile int64_t t91 = -5960184860819709LL;

	t91 = ((x457&x458)%(x459&x460));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x461 = 32536312059LLU;
	uint64_t x462 = 1LLU;
	int8_t x463 = -1;
	static uint64_t t92 = 840932LLU;

	t92 = ((x461&x462)%(x463&x464));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x465 = 910462420044LL;
	int16_t x466 = 4;
	volatile int64_t x467 = 6549LL;
	uint64_t x468 = 236750006271550012LLU;
	static uint64_t t93 = 47274482573LLU;

	t93 = ((x465&x466)%(x467&x468));

	if (t93 != 4LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x469 = INT8_MIN;
	volatile int8_t x472 = INT8_MIN;
	volatile int32_t t94 = -20452435;

	t94 = ((x469&x470)%(x471&x472));

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x473 = 0;
	uint32_t x474 = 170695007U;
	int64_t x475 = INT64_MIN;
	static int32_t x476 = INT32_MIN;
	int64_t t95 = 431271LL;

	t95 = ((x473&x474)%(x475&x476));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x481 = UINT64_MAX;
	uint32_t x482 = UINT32_MAX;
	static uint64_t x483 = UINT64_MAX;
	volatile uint64_t t96 = 3934LLU;

	t96 = ((x481&x482)%(x483&x484));

	if (t96 != 4294967295LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x489 = -1;
	int8_t x490 = 0;
	uint64_t x492 = 3LLU;
	volatile uint64_t t97 = 1311LLU;

	t97 = ((x489&x490)%(x491&x492));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x494 = -3;
	uint32_t x495 = 219U;
	uint8_t x496 = UINT8_MAX;
	volatile uint32_t t98 = 27701U;

	t98 = ((x493&x494)%(x495&x496));

	if (t98 != 125U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x497 = INT16_MIN;
	static uint16_t x498 = 572U;
	uint32_t x500 = 417U;
	static volatile int64_t t99 = 38961346612LL;

	t99 = ((x497&x498)%(x499&x500));

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

