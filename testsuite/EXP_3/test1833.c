#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = 136890548565021LLU;
int64_t x2 = 707LL;
uint64_t t0 = 24313308LLU;
volatile uint64_t t1 = 20101609945785LLU;
volatile uint32_t t3 = 2U;
uint8_t x21 = UINT8_MAX;
uint32_t x22 = 126U;
int64_t x26 = INT64_MAX;
int64_t x28 = INT64_MAX;
static volatile uint32_t x32 = 59998U;
int16_t x36 = -961;
volatile int64_t t10 = -210171802908845572LL;
static volatile uint32_t t12 = 514U;
volatile int16_t x54 = INT16_MIN;
static int64_t t13 = -56268193282LL;
volatile int16_t x60 = INT16_MIN;
int64_t x63 = -1LL;
uint64_t x64 = 109035002LLU;
volatile int32_t x66 = INT32_MIN;
uint16_t x69 = 202U;
volatile int8_t x71 = 14;
uint16_t x72 = 14656U;
int16_t x74 = INT16_MAX;
uint8_t x84 = 3U;
uint64_t x85 = 27737760940650960LLU;
static int32_t x92 = INT32_MAX;
uint32_t x97 = 7U;
uint16_t x98 = UINT16_MAX;
uint8_t x99 = 3U;
int32_t x116 = INT32_MIN;
uint64_t t29 = 29730399917LLU;
static volatile int32_t x121 = INT32_MAX;
int16_t x122 = 12;
int8_t x127 = 0;
static uint64_t t32 = 227LLU;
int64_t x136 = 3459098245430752LL;
static uint64_t x139 = 14012124519LLU;
uint16_t x143 = 78U;
int32_t x144 = INT32_MAX;
uint32_t x147 = UINT32_MAX;
static int16_t x149 = INT16_MIN;
int64_t x151 = -1LL;
int16_t x152 = INT16_MIN;
int32_t x156 = INT32_MAX;
uint8_t x159 = 1U;
uint8_t x162 = 45U;
int8_t x166 = -12;
volatile uint8_t x169 = 6U;
volatile uint8_t x174 = 5U;
volatile uint32_t x175 = 27U;
int16_t x176 = -1;
int32_t x180 = INT32_MIN;
uint64_t t45 = 8713291851LLU;
uint8_t x187 = UINT8_MAX;
volatile int32_t t47 = 1233;
int16_t x196 = INT16_MIN;
int64_t x197 = -32666983879LL;
int64_t x198 = 415583811698LL;
int16_t x204 = INT16_MAX;
uint32_t x216 = 198893282U;
volatile int8_t x219 = -1;
volatile uint16_t x221 = 28U;
volatile int64_t t55 = 13210162805LL;
uint32_t x231 = 1413U;
int8_t x232 = INT8_MAX;
uint16_t x241 = 306U;
int32_t x248 = 9861;
int8_t x249 = -59;
static int64_t x251 = INT64_MAX;
uint32_t x254 = UINT32_MAX;
static volatile uint64_t t63 = 8163400601409770969LLU;
volatile int8_t x258 = INT8_MAX;
volatile int32_t t64 = 93;
int8_t x262 = INT8_MIN;
volatile int32_t x264 = INT32_MIN;
int8_t x266 = -50;
volatile int64_t x268 = -402472915275598LL;
volatile int64_t t66 = -17256873849774981LL;
uint64_t t67 = 3518951002565LLU;
volatile int32_t x275 = INT32_MIN;
int32_t x277 = -1;
uint16_t x281 = UINT16_MAX;
int64_t x295 = -1LL;
int16_t x298 = -3413;
uint64_t t75 = 544803690398833477LLU;
volatile uint64_t x311 = 27476LLU;
int64_t x315 = INT64_MIN;
uint64_t t78 = 990167121044LLU;
volatile int16_t x324 = INT16_MIN;
volatile int16_t x336 = INT16_MAX;
volatile int64_t x344 = INT64_MIN;
static uint8_t x345 = 122U;
int16_t x346 = 1;
int64_t t87 = -74043829515690LL;
int16_t x356 = INT16_MIN;
uint64_t x359 = UINT64_MAX;
int8_t x364 = 3;
volatile uint64_t x365 = 4121938LLU;
static volatile uint8_t x366 = 8U;
volatile int64_t t92 = 1LL;
volatile int8_t x374 = -2;
uint8_t x375 = UINT8_MAX;
uint32_t x380 = 241095U;
int32_t x382 = -87342;
volatile int32_t t96 = -938042;
int16_t x389 = -1;
uint32_t x390 = 47670478U;
static volatile int64_t x391 = 0LL;
uint8_t x394 = 2U;
int8_t x395 = -1;
static uint64_t t98 = 25432984980979LLU;
uint32_t x398 = 1U;


void f0(void) {
	int8_t x3 = 6;
	int64_t x4 = -1LL;

	t0 = ((x1&x2)^(x3&x4));

	if (t0 != 7LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -2476930781945185166LL;
	int32_t x6 = -1;
	int64_t x7 = INT64_MIN;
	volatile uint64_t x8 = UINT64_MAX;

	t1 = ((x5&x6)^(x7&x8));

	if (t1 != 6746441254909590642LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	uint8_t x10 = UINT8_MAX;
	int64_t x11 = 2644105LL;
	uint32_t x12 = UINT32_MAX;
	volatile int64_t t2 = -1070882LL;

	t2 = ((x9&x10)^(x11&x12));

	if (t2 != 2644105LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int8_t x14 = INT8_MAX;
	volatile uint32_t x15 = 630576U;
	int8_t x16 = -1;

	t3 = ((x13&x14)^(x15&x16));

	if (t3 != 630576U) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 3176U;
	static int32_t x18 = -1;
	int8_t x19 = -1;
	static int32_t x20 = INT32_MIN;
	static int32_t t4 = 3916872;

	t4 = ((x17&x18)^(x19&x20));

	if (t4 != -2147480472) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x23 = -1LL;
	volatile int16_t x24 = INT16_MIN;
	int64_t t5 = 77266409091LL;

	t5 = ((x21&x22)^(x23&x24));

	if (t5 != -32642LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	volatile int64_t x27 = INT64_MAX;
	static volatile int64_t t6 = -84695395086024837LL;

	t6 = ((x25&x26)^(x27&x28));

	if (t6 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int64_t x30 = INT64_MIN;
	static int64_t x31 = INT64_MAX;
	volatile int64_t t7 = 3370076035124LL;

	t7 = ((x29&x30)^(x31&x32));

	if (t7 != -9223372036854715810LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MIN;
	uint8_t x34 = UINT8_MAX;
	int32_t x35 = INT32_MIN;
	static volatile int64_t t8 = 5LL;

	t8 = ((x33&x34)^(x35&x36));

	if (t8 != -2147483648LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -49;
	int8_t x38 = 1;
	int8_t x39 = 1;
	uint8_t x40 = 0U;
	int32_t t9 = 544;

	t9 = ((x37&x38)^(x39&x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = INT64_MIN;
	volatile uint8_t x42 = 21U;
	int32_t x43 = INT32_MIN;
	int64_t x44 = -617419390861LL;

	t10 = ((x41&x42)^(x43&x44));

	if (t10 != -618475290624LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = 1LLU;
	static uint16_t x46 = 12723U;
	int64_t x47 = INT64_MIN;
	volatile uint16_t x48 = 1U;
	volatile uint64_t t11 = 5701055439313259485LLU;

	t11 = ((x45&x46)^(x47&x48));

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	uint8_t x50 = UINT8_MAX;
	uint32_t x51 = 53864U;
	volatile uint32_t x52 = 6362U;

	t12 = ((x49&x50)^(x51&x52));

	if (t12 != 4296U) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	int32_t x55 = INT32_MAX;
	static int64_t x56 = INT64_MIN;

	t13 = ((x53&x54)^(x55&x56));

	if (t13 != 32768LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int64_t x57 = -1LL;
	int32_t x58 = INT32_MAX;
	int16_t x59 = 6687;
	volatile int64_t t14 = -35858257452719485LL;

	t14 = ((x57&x58)^(x59&x60));

	if (t14 != 2147483647LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = 2332U;
	static int32_t x62 = INT32_MAX;
	uint64_t t15 = 28494576468394109LLU;

	t15 = ((x61&x62)^(x63&x64));

	if (t15 != 109032678LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x65 = INT8_MIN;
	uint8_t x67 = 1U;
	static uint32_t x68 = UINT32_MAX;
	volatile uint32_t t16 = 88177592U;

	t16 = ((x65&x66)^(x67&x68));

	if (t16 != 2147483649U) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x70 = 920804LLU;
	volatile uint64_t t17 = 45201370512480LLU;

	t17 = ((x69&x70)^(x71&x72));

	if (t17 != 192LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = -1709;
	uint64_t x75 = 70LLU;
	uint32_t x76 = 3959660U;
	volatile uint64_t t18 = 68152459198LLU;

	t18 = ((x73&x74)^(x75&x76));

	if (t18 != 30999LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	uint16_t x78 = UINT16_MAX;
	int64_t x79 = 1371626192LL;
	int8_t x80 = INT8_MAX;
	static volatile int64_t t19 = -3892LL;

	t19 = ((x77&x78)^(x79&x80));

	if (t19 != 80LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = UINT64_MAX;
	uint16_t x82 = UINT16_MAX;
	volatile int16_t x83 = -1;
	uint64_t t20 = 1LLU;

	t20 = ((x81&x82)^(x83&x84));

	if (t20 != 65532LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x86 = 16480U;
	volatile uint16_t x87 = 7337U;
	int64_t x88 = INT64_MIN;
	uint64_t t21 = 34863617696274LLU;

	t21 = ((x85&x86)^(x87&x88));

	if (t21 != 16448LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = INT32_MIN;
	uint32_t x90 = 13378456U;
	uint32_t x91 = UINT32_MAX;
	uint32_t t22 = 395613U;

	t22 = ((x89&x90)^(x91&x92));

	if (t22 != 2147483647U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1LL;
	int64_t x94 = -1LL;
	int32_t x95 = INT32_MIN;
	uint64_t x96 = 218650779528LLU;
	uint64_t t23 = 3LLU;

	t23 = ((x93&x94)^(x95&x96));

	if (t23 != 18446743856813703167LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x100 = -7;
	uint32_t t24 = 3955292U;

	t24 = ((x97&x98)^(x99&x100));

	if (t24 != 6U) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = INT64_MAX;
	int64_t x102 = INT64_MAX;
	uint16_t x103 = 87U;
	volatile uint8_t x104 = 4U;
	static int64_t t25 = -7005138078571791LL;

	t25 = ((x101&x102)^(x103&x104));

	if (t25 != 9223372036854775803LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = INT64_MAX;
	volatile int16_t x106 = -51;
	int64_t x107 = -14742441LL;
	volatile int8_t x108 = 5;
	int64_t t26 = 2329791580LL;

	t26 = ((x105&x106)^(x107&x108));

	if (t26 != 9223372036854775752LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = 539;
	static uint8_t x110 = 92U;
	int8_t x111 = 4;
	uint64_t x112 = UINT64_MAX;
	volatile uint64_t t27 = 33869959140LLU;

	t27 = ((x109&x110)^(x111&x112));

	if (t27 != 28LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	volatile int32_t x114 = 31843;
	int32_t x115 = INT32_MIN;
	int32_t t28 = INT32_MIN;

	t28 = ((x113&x114)^(x115&x116));

	if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x117 = 6427635489LLU;
	int16_t x118 = INT16_MIN;
	static int32_t x119 = 132;
	static uint8_t x120 = 1U;

	t29 = ((x117&x118)^(x119&x120));

	if (t29 != 6427607040LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x123 = -441;
	int32_t x124 = INT32_MIN;
	int32_t t30 = -2223901;

	t30 = ((x121&x122)^(x123&x124));

	if (t30 != -2147483636) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = INT16_MIN;
	int8_t x126 = INT8_MIN;
	uint8_t x128 = UINT8_MAX;
	int32_t t31 = -764445217;

	t31 = ((x125&x126)^(x127&x128));

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x129 = INT64_MIN;
	uint8_t x130 = 11U;
	uint64_t x131 = 407665699193319LLU;
	volatile int16_t x132 = -1;

	t32 = ((x129&x130)^(x131&x132));

	if (t32 != 407665699193319LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = 2831;
	volatile int8_t x134 = INT8_MAX;
	int16_t x135 = INT16_MAX;
	int64_t t33 = -106203LL;

	t33 = ((x133&x134)^(x135&x136));

	if (t33 != 32239LL) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint16_t x137 = 508U;
	int32_t x138 = -1;
	int64_t x140 = -23896141LL;
	static uint64_t t34 = 1LLU;

	t34 = ((x137&x138)^(x139&x140));

	if (t34 != 13993250015LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x141 = 209U;
	int8_t x142 = -1;
	volatile int32_t t35 = 7064;

	t35 = ((x141&x142)^(x143&x144));

	if (t35 != 159) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MAX;
	static volatile int32_t x146 = INT32_MIN;
	static uint16_t x148 = UINT16_MAX;
	uint32_t t36 = 310963241U;

	t36 = ((x145&x146)^(x147&x148));

	if (t36 != 65535U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x150 = INT8_MIN;
	int64_t t37 = 1072415727406555908LL;

	t37 = ((x149&x150)^(x151&x152));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x153 = -2598720856LL;
	static int64_t x154 = 1460584LL;
	int16_t x155 = -39;
	volatile int64_t t38 = 701619LL;

	t38 = ((x153&x154)^(x155&x156));

	if (t38 != 2146301937LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	static uint64_t x158 = 1343LLU;
	static int16_t x160 = INT16_MIN;
	static volatile uint64_t t39 = 2022289224980444LLU;

	t39 = ((x157&x158)^(x159&x160));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = 237;
	int8_t x163 = -62;
	static int32_t x164 = INT32_MIN;
	volatile int32_t t40 = 1019912269;

	t40 = ((x161&x162)^(x163&x164));

	if (t40 != -2147483603) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MAX;
	uint8_t x167 = 1U;
	int64_t x168 = -1410694958724975LL;
	int64_t t41 = -51LL;

	t41 = ((x165&x166)^(x167&x168));

	if (t41 != 32757LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x170 = -1LL;
	volatile uint16_t x171 = 94U;
	volatile uint16_t x172 = 11788U;
	volatile int64_t t42 = -165367LL;

	t42 = ((x169&x170)^(x171&x172));

	if (t42 != 10LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = 8;
	static volatile uint32_t t43 = 106U;

	t43 = ((x173&x174)^(x175&x176));

	if (t43 != 27U) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 229472U;
	uint8_t x178 = 5U;
	int16_t x179 = 5;
	uint32_t t44 = 218757078U;

	t44 = ((x177&x178)^(x179&x180));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -1;
	static uint64_t x182 = 748426641252867LLU;
	static int8_t x183 = -1;
	int16_t x184 = INT16_MIN;

	t45 = ((x181&x182)^(x183&x184));

	if (t45 != 18445995647068283395LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MAX;
	volatile uint8_t x186 = 27U;
	int16_t x188 = -309;
	int32_t t46 = 1;

	t46 = ((x185&x186)^(x187&x188));

	if (t46 != 208) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x189 = UINT16_MAX;
	uint8_t x190 = 20U;
	int16_t x191 = -1;
	int32_t x192 = INT32_MIN;

	t47 = ((x189&x190)^(x191&x192));

	if (t47 != -2147483628) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -16;
	int64_t x194 = -1LL;
	int32_t x195 = 20;
	static volatile int64_t t48 = -702127430153742LL;

	t48 = ((x193&x194)^(x195&x196));

	if (t48 != -16LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x199 = 29232LLU;
	uint16_t x200 = 30307U;
	static uint64_t t49 = 3297141265LLU;

	t49 = ((x197&x198)^(x199&x200));

	if (t49 != 413401174544LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint32_t x201 = 2U;
	int32_t x202 = -1;
	static int64_t x203 = INT64_MIN;
	int64_t t50 = 957699402LL;

	t50 = ((x201&x202)^(x203&x204));

	if (t50 != 2LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1024700060581088092LL;
	static uint64_t x206 = UINT64_MAX;
	volatile int8_t x207 = INT8_MIN;
	volatile uint16_t x208 = 20952U;
	uint64_t t51 = 1114202LLU;

	t51 = ((x205&x206)^(x207&x208));

	if (t51 != 17422044013128475940LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = -1;
	int16_t x210 = -1;
	int32_t x211 = INT32_MIN;
	uint8_t x212 = UINT8_MAX;
	volatile int32_t t52 = -54;

	t52 = ((x209&x210)^(x211&x212));

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = INT16_MIN;
	static uint32_t x214 = UINT32_MAX;
	int64_t x215 = 175LL;
	int64_t t53 = -65918644597055856LL;

	t53 = ((x213&x214)^(x215&x216));

	if (t53 != 4294934690LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = UINT8_MAX;
	static uint16_t x218 = UINT16_MAX;
	volatile int32_t x220 = INT32_MIN;
	volatile int32_t t54 = 29873569;

	t54 = ((x217&x218)^(x219&x220));

	if (t54 != -2147483393) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x222 = UINT16_MAX;
	int16_t x223 = INT16_MIN;
	int64_t x224 = INT64_MIN;

	t55 = ((x221&x222)^(x223&x224));

	if (t55 != -9223372036854775780LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x225 = UINT64_MAX;
	int16_t x226 = 9448;
	int8_t x227 = INT8_MIN;
	int32_t x228 = 1;
	volatile uint64_t t56 = 355LLU;

	t56 = ((x225&x226)^(x227&x228));

	if (t56 != 9448LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = UINT32_MAX;
	static int8_t x230 = -1;
	volatile uint32_t t57 = 1726171U;

	t57 = ((x229&x230)^(x231&x232));

	if (t57 != 4294967290U) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = 1LLU;
	volatile uint8_t x234 = 15U;
	int16_t x235 = -209;
	static volatile uint32_t x236 = 16779U;
	uint64_t t58 = 16463LLU;

	t58 = ((x233&x234)^(x235&x236));

	if (t58 != 16650LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = UINT64_MAX;
	volatile uint32_t x238 = UINT32_MAX;
	uint32_t x239 = 404U;
	int32_t x240 = INT32_MAX;
	static uint64_t t59 = 9LLU;

	t59 = ((x237&x238)^(x239&x240));

	if (t59 != 4294966891LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x242 = INT32_MIN;
	uint8_t x243 = 0U;
	uint64_t x244 = UINT64_MAX;
	uint64_t t60 = 5861537LLU;

	t60 = ((x241&x242)^(x243&x244));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x245 = INT16_MAX;
	static uint8_t x246 = 37U;
	static uint8_t x247 = UINT8_MAX;
	static volatile int32_t t61 = 1;

	t61 = ((x245&x246)^(x247&x248));

	if (t61 != 160) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x250 = 1;
	int32_t x252 = INT32_MAX;
	volatile int64_t t62 = 299731496632361LL;

	t62 = ((x249&x250)^(x251&x252));

	if (t62 != 2147483646LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 4225729422494LLU;
	uint16_t x255 = UINT16_MAX;
	int32_t x256 = -1;

	t63 = ((x253&x254)^(x255&x256));

	if (t63 != 3776519009LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = 1309;
	int16_t x259 = INT16_MIN;
	int16_t x260 = -1;

	t64 = ((x257&x258)^(x259&x260));

	if (t64 != -32739) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x261 = 147398737LL;
	static int64_t x263 = INT64_MIN;
	int64_t t65 = 632LL;

	t65 = ((x261&x262)^(x263&x264));

	if (t65 != -9223372036707377152LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 98U;
	volatile int64_t x267 = 222108418LL;

	t66 = ((x265&x266)^(x267&x268));

	if (t66 != 135794752LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x269 = -1LL;
	uint64_t x270 = 36LLU;
	uint32_t x271 = UINT32_MAX;
	int16_t x272 = INT16_MAX;

	t67 = ((x269&x270)^(x271&x272));

	if (t67 != 32731LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = -4003;
	uint32_t x274 = 60053U;
	static uint16_t x276 = 287U;
	volatile uint32_t t68 = 7085399U;

	t68 = ((x273&x274)^(x275&x276));

	if (t68 != 57365U) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x278 = -3296;
	int16_t x279 = 1352;
	uint64_t x280 = UINT64_MAX;
	uint64_t t69 = 1048472911679918LLU;

	t69 = ((x277&x278)^(x279&x280));

	if (t69 != 18446744073709549160LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x282 = INT16_MIN;
	static uint64_t x283 = 349LLU;
	int32_t x284 = INT32_MIN;
	uint64_t t70 = 11876LLU;

	t70 = ((x281&x282)^(x283&x284));

	if (t70 != 32768LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MAX;
	int64_t x286 = 4LL;
	static volatile int64_t x287 = INT64_MIN;
	volatile uint8_t x288 = 1U;
	int64_t t71 = 102308578670022195LL;

	t71 = ((x285&x286)^(x287&x288));

	if (t71 != 4LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = -1;
	volatile uint32_t x290 = 100U;
	volatile int64_t x291 = -1LL;
	uint64_t x292 = 1812972166LLU;
	uint64_t t72 = 3637020125306671833LLU;

	t72 = ((x289&x290)^(x291&x292));

	if (t72 != 1812972258LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	int64_t x294 = INT64_MIN;
	static int16_t x296 = INT16_MAX;
	int64_t t73 = -18231535LL;

	t73 = ((x293&x294)^(x295&x296));

	if (t73 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -1;
	int32_t x299 = -1;
	uint32_t x300 = UINT32_MAX;
	uint32_t t74 = 38U;

	t74 = ((x297&x298)^(x299&x300));

	if (t74 != 3412U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = INT8_MIN;
	uint8_t x302 = 10U;
	static volatile uint64_t x303 = 1269383886837042068LLU;
	static volatile uint8_t x304 = UINT8_MAX;

	t75 = ((x301&x302)^(x303&x304));

	if (t75 != 148LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = -1;
	int32_t x306 = 3;
	uint16_t x307 = 28691U;
	uint32_t x308 = UINT32_MAX;
	uint32_t t76 = 7U;

	t76 = ((x305&x306)^(x307&x308));

	if (t76 != 28688U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = -5;
	int8_t x310 = -1;
	static int64_t x312 = INT64_MAX;
	uint64_t t77 = 29999256LLU;

	t77 = ((x309&x310)^(x311&x312));

	if (t77 != 18446744073709524143LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 259400LLU;
	volatile int32_t x314 = INT32_MIN;
	uint32_t x316 = UINT32_MAX;

	t78 = ((x313&x314)^(x315&x316));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	int16_t x318 = INT16_MIN;
	int32_t x319 = 140;
	int8_t x320 = INT8_MAX;
	volatile int64_t t79 = 421869609LL;

	t79 = ((x317&x318)^(x319&x320));

	if (t79 != -9223372036854775796LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = 2841054;
	volatile uint8_t x322 = 21U;
	int32_t x323 = -1;
	int32_t t80 = -1;

	t80 = ((x321&x322)^(x323&x324));

	if (t80 != -32748) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = INT8_MIN;
	int16_t x326 = 1;
	int32_t x327 = INT32_MIN;
	int16_t x328 = INT16_MIN;
	volatile int32_t t81 = INT32_MIN;

	t81 = ((x325&x326)^(x327&x328));

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = UINT16_MAX;
	uint32_t x330 = 46U;
	int64_t x331 = 262920135396LL;
	static int16_t x332 = -832;
	int64_t t82 = 9078030298164378LL;

	t82 = ((x329&x330)^(x331&x332));

	if (t82 != 262920134894LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -1;
	int8_t x334 = -3;
	int8_t x335 = 0;
	int32_t t83 = 1051584;

	t83 = ((x333&x334)^(x335&x336));

	if (t83 != -3) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x337 = 3357158U;
	volatile uint64_t x338 = UINT64_MAX;
	int64_t x339 = -402870158LL;
	int8_t x340 = -1;
	volatile uint64_t t84 = 21164LLU;

	t84 = ((x337&x338)^(x339&x340));

	if (t84 != 18446744073303722388LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x341 = 108U;
	int8_t x342 = 1;
	volatile uint32_t x343 = 20U;
	volatile int64_t t85 = -84176253521715LL;

	t85 = ((x341&x342)^(x343&x344));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x347 = INT32_MIN;
	static int64_t x348 = INT64_MAX;
	int64_t t86 = -633LL;

	t86 = ((x345&x346)^(x347&x348));

	if (t86 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x349 = -6455893954LL;
	int8_t x350 = -1;
	int8_t x351 = -1;
	int32_t x352 = 14009;

	t87 = ((x349&x350)^(x351&x352));

	if (t87 != -6455896441LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x353 = 0;
	int8_t x354 = -45;
	int16_t x355 = INT16_MAX;
	volatile int32_t t88 = 8387912;

	t88 = ((x353&x354)^(x355&x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x357 = 36;
	int8_t x358 = -1;
	volatile uint8_t x360 = 2U;
	uint64_t t89 = 126817207444506LLU;

	t89 = ((x357&x358)^(x359&x360));

	if (t89 != 38LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x361 = 16753564478LLU;
	uint8_t x362 = 36U;
	uint32_t x363 = 82898U;
	volatile uint64_t t90 = 1849008590591LLU;

	t90 = ((x361&x362)^(x363&x364));

	if (t90 != 38LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x367 = INT16_MIN;
	uint32_t x368 = 1U;
	static uint64_t t91 = 5340560885412LLU;

	t91 = ((x365&x366)^(x367&x368));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	static uint16_t x370 = 1U;
	uint8_t x371 = UINT8_MAX;
	volatile int64_t x372 = -5023942552LL;

	t92 = ((x369&x370)^(x371&x372));

	if (t92 != 104LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x373 = 51;
	int64_t x376 = 5LL;
	static int64_t t93 = 153079524770193LL;

	t93 = ((x373&x374)^(x375&x376));

	if (t93 != 55LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x377 = UINT16_MAX;
	volatile uint32_t x378 = 1113137U;
	volatile int32_t x379 = INT32_MIN;
	uint32_t t94 = 893838226U;

	t94 = ((x377&x378)^(x379&x380));

	if (t94 != 64561U) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MIN;
	static uint8_t x383 = 9U;
	uint64_t x384 = 872557898290LLU;
	static uint64_t t95 = 31395589380LLU;

	t95 = ((x381&x382)^(x383&x384));

	if (t95 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = -1;
	static int32_t x386 = INT32_MIN;
	static int32_t x387 = 1613709;
	volatile uint16_t x388 = UINT16_MAX;

	t96 = ((x385&x386)^(x387&x388));

	if (t96 != -2147442803) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x392 = INT8_MIN;
	int64_t t97 = 6LL;

	t97 = ((x389&x390)^(x391&x392));

	if (t97 != 47670478LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 325924LLU;
	int32_t x396 = INT32_MAX;

	t98 = ((x393&x394)^(x395&x396));

	if (t98 != 2147483647LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MAX;
	static uint16_t x399 = 22737U;
	static int64_t x400 = -606750190LL;
	int64_t t99 = 8752500297LL;

	t99 = ((x397&x398)^(x399&x400));

	if (t99 != 6161LL) { NG(); } else { ; }
	
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

