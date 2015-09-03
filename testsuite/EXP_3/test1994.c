#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MIN;
int16_t x4 = INT16_MAX;
uint32_t x5 = UINT32_MAX;
static int64_t x11 = INT64_MIN;
static int8_t x17 = -1;
uint8_t x22 = 2U;
uint8_t x27 = 66U;
uint64_t x30 = UINT64_MAX;
int32_t x34 = 5747429;
uint32_t x43 = UINT32_MAX;
int8_t x45 = -2;
uint16_t x48 = 8069U;
static int64_t t11 = 16LL;
int8_t x50 = -1;
uint64_t x51 = 6519251949949LLU;
int16_t x68 = -11152;
volatile int64_t t16 = -6537LL;
int8_t x71 = INT8_MAX;
int16_t x78 = INT16_MAX;
uint64_t x93 = 16690243762551996LLU;
uint16_t x95 = UINT16_MAX;
volatile uint64_t t23 = 7930LLU;
volatile int16_t x97 = INT16_MIN;
volatile uint64_t x102 = 88594058706LLU;
uint8_t x103 = 19U;
uint64_t t25 = 4LLU;
static uint8_t x106 = 2U;
int32_t x107 = INT32_MIN;
int32_t x113 = 202987467;
int16_t x115 = INT16_MIN;
uint16_t x120 = UINT16_MAX;
int32_t x134 = -11685411;
int8_t x135 = -8;
static int32_t x137 = 12;
volatile uint64_t t38 = 16268170943178995LLU;
int16_t x161 = INT16_MAX;
static int64_t x162 = INT64_MIN;
uint64_t t41 = 2236676LLU;
int32_t x182 = 39;
int32_t x183 = 115;
volatile int8_t x188 = 0;
volatile uint64_t x202 = 6425396LLU;
volatile uint64_t x209 = 4110399677522736LLU;
volatile int32_t x215 = -421;
volatile uint16_t x218 = 201U;
int64_t x220 = INT64_MIN;
uint8_t x222 = UINT8_MAX;
static uint8_t x224 = 0U;
int64_t t56 = 42968285331705411LL;
uint16_t x232 = 4U;
volatile int8_t x233 = INT8_MIN;
static int32_t x235 = 308982;
uint16_t x240 = 6781U;
int16_t x245 = INT16_MIN;
volatile uint64_t x255 = 49474189539261454LLU;
static int8_t x260 = INT8_MIN;
static int64_t x267 = INT64_MIN;
static int8_t x268 = INT8_MIN;
uint64_t x269 = 32212865LLU;
volatile uint64_t t67 = 86341244LLU;
volatile int64_t x274 = INT64_MIN;
volatile uint64_t x275 = 4320374298LLU;
uint32_t x278 = 100854306U;
static int64_t t69 = -239313479LL;
volatile int16_t x282 = INT16_MIN;
int32_t x283 = INT32_MIN;
uint64_t t70 = 7194328515LLU;
int64_t x292 = INT64_MAX;
uint8_t x293 = 1U;
uint64_t t73 = 15783441458LLU;
uint16_t x297 = 0U;
int8_t x300 = INT8_MIN;
volatile uint64_t t74 = 511798258569LLU;
volatile int32_t x302 = 120056951;
int32_t x309 = INT32_MIN;
int64_t x310 = 32LL;
int32_t x312 = 2;
int64_t t77 = 3782658568390092LL;
int64_t x324 = -1LL;
static uint64_t x328 = 614854645747LLU;
uint64_t t81 = 610477835102LLU;
int32_t x332 = -1;
static int8_t x333 = INT8_MIN;
uint8_t x334 = UINT8_MAX;
uint64_t t83 = 10LLU;
int16_t x338 = -1;
int64_t x340 = -652651698696267LL;
int8_t x345 = INT8_MIN;
int8_t x346 = -1;
uint32_t x347 = 4993U;
int64_t x348 = 65757565394LL;
int16_t x353 = INT16_MIN;
volatile uint16_t x360 = UINT16_MAX;
int64_t t91 = 24341166LL;
int32_t x381 = INT32_MIN;
int8_t x382 = INT8_MIN;
volatile uint64_t x387 = 8LLU;
uint64_t t96 = 13730589301207009LLU;
volatile int64_t x389 = INT64_MIN;
int64_t x390 = 26LL;
volatile uint16_t x391 = 604U;
int8_t x394 = INT8_MIN;
int8_t x399 = -1;


void f0(void) {
	volatile int32_t x1 = INT32_MIN;
	volatile int64_t x3 = INT64_MAX;
	int64_t t0 = -123452707541697LL;

	t0 = ((x1&x2)%(x3|x4));

	if (t0 != -2147483648LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x6 = INT16_MIN;
	static int32_t x7 = -1;
	static int8_t x8 = INT8_MIN;
	uint32_t t1 = 1U;

	t1 = ((x5&x6)%(x7|x8));

	if (t1 != 4294934528U) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = UINT8_MAX;
	static uint8_t x10 = 6U;
	int32_t x12 = -1;
	int64_t t2 = -40143735213165443LL;

	t2 = ((x9&x10)%(x11|x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int32_t x13 = 491814412;
	uint16_t x14 = UINT16_MAX;
	uint32_t x15 = 29313028U;
	static volatile int32_t x16 = INT32_MIN;
	volatile uint32_t t3 = 7622456U;

	t3 = ((x13&x14)%(x15|x16));

	if (t3 != 32268U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x18 = -1;
	int32_t x19 = INT32_MAX;
	static int8_t x20 = -1;
	int32_t t4 = 681275758;

	t4 = ((x17&x18)%(x19|x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	static uint8_t x23 = 48U;
	uint8_t x24 = UINT8_MAX;
	volatile int64_t t5 = -53564313LL;

	t5 = ((x21&x22)%(x23|x24));

	if (t5 != 2LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 115106U;
	int16_t x26 = INT16_MIN;
	static int8_t x28 = -8;
	uint32_t t6 = 9535869U;

	t6 = ((x25&x26)%(x27|x28));

	if (t6 != 98304U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 2858U;
	volatile int8_t x31 = INT8_MAX;
	static int64_t x32 = 226869525293LL;
	volatile uint64_t t7 = 31563768142LLU;

	t7 = ((x29&x30)%(x31|x32));

	if (t7 != 2858LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 231912730LLU;
	int16_t x35 = -1;
	volatile int16_t x36 = INT16_MAX;
	volatile uint64_t t8 = 3519747918412LLU;

	t8 = ((x33&x34)%(x35|x36));

	if (t8 != 5419008LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	uint8_t x38 = 13U;
	int64_t x39 = INT64_MIN;
	int8_t x40 = INT8_MIN;
	int64_t t9 = -437496998254649681LL;

	t9 = ((x37&x38)%(x39|x40));

	if (t9 != 13LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1LL;
	uint64_t x42 = 179511274419726LLU;
	uint8_t x44 = 1U;
	static uint64_t t10 = 201718724781LLU;

	t10 = ((x41&x42)%(x43|x44));

	if (t10 != 3116325201LLU) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x46 = 1U;
	int64_t x47 = -1LL;

	t11 = ((x45&x46)%(x47|x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 14993188403LL;
	int32_t x52 = -1;
	volatile uint64_t t12 = 25635086613328LLU;

	t12 = ((x49&x50)%(x51|x52));

	if (t12 != 14993188403LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 20236U;
	uint32_t x54 = 14765U;
	uint8_t x55 = 0U;
	int32_t x56 = INT32_MIN;
	volatile uint32_t t13 = 44U;

	t13 = ((x53&x54)%(x55|x56));

	if (t13 != 2316U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x57 = -427717;
	uint8_t x58 = 5U;
	static uint16_t x59 = 1U;
	int32_t x60 = INT32_MIN;
	volatile int32_t t14 = -6617;

	t14 = ((x57&x58)%(x59|x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 18584641337935LL;
	int16_t x62 = -1;
	uint8_t x63 = UINT8_MAX;
	int64_t x64 = INT64_MIN;
	int64_t t15 = -16317099LL;

	t15 = ((x61&x62)%(x63|x64));

	if (t15 != 18584641337935LL) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = 245U;
	volatile int16_t x66 = -52;
	int64_t x67 = INT64_MIN;

	t16 = ((x65&x66)%(x67|x68));

	if (t16 != 196LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x69 = UINT16_MAX;
	uint16_t x70 = 704U;
	volatile int64_t x72 = INT64_MIN;
	int64_t t17 = 1810LL;

	t17 = ((x69&x70)%(x71|x72));

	if (t17 != 704LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = -1LL;
	int64_t x74 = INT64_MIN;
	int8_t x75 = INT8_MAX;
	int32_t x76 = -1;
	volatile int64_t t18 = -36368795073788LL;

	t18 = ((x73&x74)%(x75|x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = 2059U;
	int64_t x79 = INT64_MAX;
	static int32_t x80 = 692289;
	int64_t t19 = 4124914440169LL;

	t19 = ((x77&x78)%(x79|x80));

	if (t19 != 2059LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MIN;
	uint16_t x82 = 0U;
	uint32_t x83 = 25829868U;
	static uint8_t x84 = 28U;
	uint32_t t20 = 1U;

	t20 = ((x81&x82)%(x83|x84));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x85 = UINT64_MAX;
	int16_t x86 = INT16_MAX;
	uint64_t x87 = UINT64_MAX;
	int8_t x88 = -1;
	uint64_t t21 = 239786899771747912LLU;

	t21 = ((x85&x86)%(x87|x88));

	if (t21 != 32767LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = -488843672506598721LL;
	int64_t x90 = INT64_MAX;
	uint64_t x91 = UINT64_MAX;
	static volatile uint64_t x92 = 33686LLU;
	static uint64_t t22 = 105939218624563612LLU;

	t22 = ((x89&x90)%(x91|x92));

	if (t22 != 8734528364348177087LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x94 = INT32_MIN;
	int32_t x96 = INT32_MIN;

	t23 = ((x93&x94)%(x95|x96));

	if (t23 != 16690242912256000LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x98 = 266787149U;
	int64_t x99 = INT64_MIN;
	int64_t x100 = INT64_MAX;
	int64_t t24 = -40026667LL;

	t24 = ((x97&x98)%(x99|x100));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	uint32_t x104 = 0U;

	t25 = ((x101&x102)%(x103|x104));

	if (t25 != 14LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	int16_t x108 = INT16_MAX;
	static volatile int32_t t26 = 127990291;

	t26 = ((x105&x106)%(x107|x108));

	if (t26 != 2) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 1632594U;
	int16_t x110 = 1;
	uint32_t x111 = 40381819U;
	int8_t x112 = INT8_MIN;
	uint32_t t27 = 2U;

	t27 = ((x109&x110)%(x111|x112));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x114 = 3;
	int64_t x116 = INT64_MIN;
	volatile int64_t t28 = -765018216217LL;

	t28 = ((x113&x114)%(x115|x116));

	if (t28 != 3LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = -745987;
	int8_t x118 = INT8_MAX;
	int8_t x119 = -15;
	volatile int32_t t29 = -47894;

	t29 = ((x117&x118)%(x119|x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint64_t x121 = 112569798219940146LLU;
	volatile int64_t x122 = 34626309690204LL;
	static uint16_t x123 = 0U;
	uint32_t x124 = UINT32_MAX;
	uint64_t t30 = 19697LLU;

	t30 = ((x121&x122)%(x123|x124));

	if (t30 != 272764466LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MIN;
	int8_t x126 = INT8_MIN;
	int16_t x127 = INT16_MIN;
	static int32_t x128 = INT32_MIN;
	volatile int32_t t31 = 15677;

	t31 = ((x125&x126)%(x127|x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x129 = UINT8_MAX;
	int16_t x130 = -1;
	volatile uint16_t x131 = UINT16_MAX;
	static uint32_t x132 = 10510U;
	volatile uint32_t t32 = 92U;

	t32 = ((x129&x130)%(x131|x132));

	if (t32 != 255U) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = 28052U;
	volatile int32_t x136 = 19;
	volatile int32_t t33 = 53406;

	t33 = ((x133&x134)%(x135|x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x138 = -1;
	static uint8_t x139 = 1U;
	int16_t x140 = INT16_MAX;
	int32_t t34 = -47258098;

	t34 = ((x137&x138)%(x139|x140));

	if (t34 != 12) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x141 = INT64_MIN;
	volatile int8_t x142 = 8;
	uint32_t x143 = 1581541370U;
	int64_t x144 = INT64_MIN;
	int64_t t35 = 0LL;

	t35 = ((x141&x142)%(x143|x144));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = INT64_MIN;
	uint8_t x146 = 105U;
	int16_t x147 = -97;
	static uint32_t x148 = UINT32_MAX;
	volatile int64_t t36 = 0LL;

	t36 = ((x145&x146)%(x147|x148));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x149 = INT64_MIN;
	volatile int64_t x150 = -232LL;
	int16_t x151 = INT16_MAX;
	uint8_t x152 = 1U;
	static volatile int64_t t37 = -178899347288683LL;

	t37 = ((x149&x150)%(x151|x152));

	if (t37 != -8LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = INT16_MAX;
	uint64_t x154 = 66235691LLU;
	static uint64_t x155 = 293569729517187LLU;
	uint32_t x156 = UINT32_MAX;

	t38 = ((x153&x154)%(x155|x156));

	if (t38 != 11563LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = UINT16_MAX;
	int8_t x158 = -5;
	uint64_t x159 = 161789882945889LLU;
	int32_t x160 = -107;
	uint64_t t39 = 39654229LLU;

	t39 = ((x157&x158)%(x159|x160));

	if (t39 != 65531LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x163 = INT8_MIN;
	int64_t x164 = 7073329LL;
	int64_t t40 = 105253733357LL;

	t40 = ((x161&x162)%(x163|x164));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 23U;
	volatile uint64_t x166 = 13125769689LLU;
	volatile int16_t x167 = INT16_MAX;
	uint16_t x168 = UINT16_MAX;

	t41 = ((x165&x166)%(x167|x168));

	if (t41 != 17LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = 237670LL;
	static uint64_t x170 = UINT64_MAX;
	uint16_t x171 = 4045U;
	int32_t x172 = 3;
	volatile uint64_t t42 = 7535199663545807LLU;

	t42 = ((x169&x170)%(x171|x172));

	if (t42 != 2944LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = -1;
	static uint16_t x174 = 2173U;
	int16_t x175 = INT16_MIN;
	static int8_t x176 = -1;
	int32_t t43 = 464010;

	t43 = ((x173&x174)%(x175|x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 1U;
	int32_t x178 = 259;
	volatile int32_t x179 = -582;
	uint64_t x180 = UINT64_MAX;
	uint64_t t44 = 15999467527LLU;

	t44 = ((x177&x178)%(x179|x180));

	if (t44 != 1LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x181 = 46887U;
	int8_t x184 = INT8_MIN;
	uint32_t t45 = 491U;

	t45 = ((x181&x182)%(x183|x184));

	if (t45 != 39U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	volatile int32_t x186 = INT32_MIN;
	int32_t x187 = INT32_MIN;
	volatile int32_t t46 = -54;

	t46 = ((x185&x186)%(x187|x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x189 = UINT32_MAX;
	int8_t x190 = -5;
	uint32_t x191 = 3U;
	volatile int32_t x192 = INT32_MIN;
	volatile uint32_t t47 = 83550104U;

	t47 = ((x189&x190)%(x191|x192));

	if (t47 != 2147483640U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x193 = UINT64_MAX;
	int64_t x194 = -197LL;
	int32_t x195 = -431;
	uint16_t x196 = 6209U;
	static volatile uint64_t t48 = 1LLU;

	t48 = ((x193&x194)%(x195|x196));

	if (t48 != 234LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = -1;
	int8_t x198 = INT8_MAX;
	uint16_t x199 = UINT16_MAX;
	static uint16_t x200 = UINT16_MAX;
	static volatile int32_t t49 = 1;

	t49 = ((x197&x198)%(x199|x200));

	if (t49 != 127) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = INT32_MIN;
	int64_t x203 = INT64_MAX;
	static uint8_t x204 = UINT8_MAX;
	static uint64_t t50 = 30180489422208LLU;

	t50 = ((x201&x202)%(x203|x204));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 2398002153139LLU;
	int64_t x206 = INT64_MIN;
	volatile uint64_t x207 = 31337267231LLU;
	int32_t x208 = -1;
	static volatile uint64_t t51 = 30404650668LLU;

	t51 = ((x205&x206)%(x207|x208));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x210 = -1;
	volatile int16_t x211 = INT16_MIN;
	static int16_t x212 = 664;
	uint64_t t52 = 82126934739LLU;

	t52 = ((x209&x210)%(x211|x212));

	if (t52 != 4110399677522736LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x213 = UINT64_MAX;
	uint32_t x214 = 121624U;
	int16_t x216 = INT16_MAX;
	uint64_t t53 = 909535LLU;

	t53 = ((x213&x214)%(x215|x216));

	if (t53 != 121624LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	int8_t x219 = -8;
	static int64_t t54 = 157485713240LL;

	t54 = ((x217&x218)%(x219|x220));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = 1;
	volatile uint8_t x223 = UINT8_MAX;
	static int32_t t55 = 21927766;

	t55 = ((x221&x222)%(x223|x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = -1;
	static int32_t x226 = -1;
	int8_t x227 = INT8_MAX;
	static int64_t x228 = INT64_MAX;

	t56 = ((x225&x226)%(x227|x228));

	if (t56 != -1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MAX;
	static volatile int64_t x230 = 1805991342LL;
	int32_t x231 = 55928;
	volatile int64_t t57 = -2494278481357LL;

	t57 = ((x229&x230)%(x231|x232));

	if (t57 != 2994LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x234 = 6LLU;
	uint64_t x236 = 3744LLU;
	static volatile uint64_t t58 = 16854446983770698LLU;

	t58 = ((x233&x234)%(x235|x236));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x237 = -53;
	int16_t x238 = -7650;
	int8_t x239 = INT8_MIN;
	volatile int32_t t59 = 944202;

	t59 = ((x237&x238)%(x239|x240));

	if (t59 != -2) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = INT64_MIN;
	int64_t x242 = -1LL;
	uint64_t x243 = UINT64_MAX;
	volatile uint64_t x244 = 2993515581LLU;
	volatile uint64_t t60 = 138747LLU;

	t60 = ((x241&x242)%(x243|x244));

	if (t60 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x246 = UINT8_MAX;
	int64_t x247 = INT64_MIN;
	int8_t x248 = -1;
	volatile int64_t t61 = -3LL;

	t61 = ((x245&x246)%(x247|x248));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MIN;
	uint16_t x250 = 1U;
	uint64_t x251 = 10852456008821LLU;
	uint16_t x252 = UINT16_MAX;
	uint64_t t62 = 87786754550LLU;

	t62 = ((x249&x250)%(x251|x252));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x253 = INT8_MIN;
	static uint32_t x254 = UINT32_MAX;
	volatile uint16_t x256 = UINT16_MAX;
	volatile uint64_t t63 = 33507191761LLU;

	t63 = ((x253&x254)%(x255|x256));

	if (t63 != 4294967168LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x257 = 1U;
	uint32_t x258 = 148025781U;
	int16_t x259 = -4;
	uint32_t t64 = 1890069768U;

	t64 = ((x257&x258)%(x259|x260));

	if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = -17;
	int32_t x262 = INT32_MIN;
	uint8_t x263 = UINT8_MAX;
	int32_t x264 = -55;
	int32_t t65 = -7;

	t65 = ((x261&x262)%(x263|x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = 84U;
	static uint64_t x266 = UINT64_MAX;
	static uint64_t t66 = 7756260LLU;

	t66 = ((x265&x266)%(x267|x268));

	if (t66 != 84LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x270 = INT8_MIN;
	static int32_t x271 = INT32_MIN;
	uint64_t x272 = 1LLU;

	t67 = ((x269&x270)%(x271|x272));

	if (t67 != 32212864LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x273 = INT64_MIN;
	volatile uint8_t x276 = UINT8_MAX;
	static uint64_t t68 = 730082881896334LLU;

	t68 = ((x273&x274)%(x275|x276));

	if (t68 != 3633942355LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -1;
	int64_t x279 = INT64_MAX;
	int32_t x280 = -5014047;

	t69 = ((x277&x278)%(x279|x280));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 457U;
	volatile uint64_t x284 = 221911LLU;

	t70 = ((x281&x282)%(x283|x284));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x285 = UINT16_MAX;
	static int64_t x286 = 14330LL;
	int64_t x287 = -1LL;
	int32_t x288 = -1;
	volatile int64_t t71 = -123955219LL;

	t71 = ((x285&x286)%(x287|x288));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = INT64_MIN;
	int16_t x290 = -2557;
	int16_t x291 = -1;
	volatile int64_t t72 = 17354865867512040LL;

	t72 = ((x289&x290)%(x291|x292));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x294 = INT64_MIN;
	volatile int32_t x295 = 596569;
	volatile uint64_t x296 = 986599125LLU;

	t73 = ((x293&x294)%(x295|x296));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int16_t x298 = INT16_MIN;
	uint64_t x299 = 15LLU;

	t74 = ((x297&x298)%(x299|x300));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x301 = 1U;
	uint8_t x303 = UINT8_MAX;
	int16_t x304 = -1;
	volatile uint32_t t75 = 16248766U;

	t75 = ((x301&x302)%(x303|x304));

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x305 = 1;
	volatile int8_t x306 = INT8_MIN;
	uint64_t x307 = UINT64_MAX;
	int8_t x308 = 17;
	volatile uint64_t t76 = 170LLU;

	t76 = ((x305&x306)%(x307|x308));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x311 = -1;

	t77 = ((x309&x310)%(x311|x312));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = UINT64_MAX;
	int16_t x314 = -386;
	uint16_t x315 = 521U;
	uint64_t x316 = 67579185458LLU;
	uint64_t t78 = 2547607LLU;

	t78 = ((x313&x314)%(x315|x316));

	if (t78 != 20350063605LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = -1LL;
	int32_t x318 = -1;
	int32_t x319 = INT32_MAX;
	uint8_t x320 = 3U;
	static int64_t t79 = 101596LL;

	t79 = ((x317&x318)%(x319|x320));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 5083U;
	static int64_t x322 = INT64_MAX;
	volatile uint64_t x323 = 9063279545LLU;
	static volatile uint64_t t80 = 5962279564354392LLU;

	t80 = ((x321&x322)%(x323|x324));

	if (t80 != 5083LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = UINT32_MAX;
	uint64_t x326 = 5LLU;
	int8_t x327 = 23;

	t81 = ((x325&x326)%(x327|x328));

	if (t81 != 5LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x329 = INT64_MIN;
	static uint16_t x330 = UINT16_MAX;
	int8_t x331 = INT8_MAX;
	int64_t t82 = 891LL;

	t82 = ((x329&x330)%(x331|x332));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int64_t x335 = INT64_MIN;
	uint64_t x336 = 332467003LLU;

	t83 = ((x333&x334)%(x335|x336));

	if (t83 != 128LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = UINT64_MAX;
	volatile int16_t x339 = -1;
	volatile uint64_t t84 = 65219909209425LLU;

	t84 = ((x337&x338)%(x339|x340));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x341 = 2U;
	int16_t x342 = INT16_MIN;
	int8_t x343 = -4;
	int64_t x344 = INT64_MAX;
	volatile int64_t t85 = -15563LL;

	t85 = ((x341&x342)%(x343|x344));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t t86 = -5320083453LL;

	t86 = ((x345&x346)%(x347|x348));

	if (t86 != -128LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x349 = 56;
	int16_t x350 = INT16_MIN;
	static int32_t x351 = -1;
	static volatile int8_t x352 = INT8_MAX;
	static int32_t t87 = 31878426;

	t87 = ((x349&x350)%(x351|x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint16_t x354 = UINT16_MAX;
	volatile int32_t x355 = INT32_MIN;
	volatile uint32_t x356 = 11U;
	static volatile uint32_t t88 = 4U;

	t88 = ((x353&x354)%(x355|x356));

	if (t88 != 32768U) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x357 = INT16_MIN;
	int32_t x358 = -109124520;
	int32_t x359 = -1;
	int32_t t89 = -31411197;

	t89 = ((x357&x358)%(x359|x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = INT32_MIN;
	volatile uint64_t x362 = 194247584691LLU;
	int8_t x363 = INT8_MAX;
	volatile int64_t x364 = INT64_MIN;
	volatile uint64_t t90 = 7LLU;

	t90 = ((x361&x362)%(x363|x364));

	if (t90 != 193273528320LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = INT16_MAX;
	int64_t x366 = INT64_MIN;
	static volatile uint8_t x367 = 0U;
	volatile uint8_t x368 = 6U;

	t91 = ((x365&x366)%(x367|x368));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint8_t x369 = UINT8_MAX;
	volatile uint8_t x370 = UINT8_MAX;
	static volatile uint32_t x371 = 1115U;
	static int32_t x372 = 106;
	static uint32_t t92 = 559034U;

	t92 = ((x369&x370)%(x371|x372));

	if (t92 != 255U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = 86101641434613LL;
	static uint16_t x374 = 38U;
	int8_t x375 = INT8_MAX;
	uint64_t x376 = UINT64_MAX;
	uint64_t t93 = 543482779LLU;

	t93 = ((x373&x374)%(x375|x376));

	if (t93 != 36LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x377 = 1719633588LL;
	int8_t x378 = 23;
	volatile uint16_t x379 = 4822U;
	static int64_t x380 = INT64_MIN;
	volatile int64_t t94 = 15654888334LL;

	t94 = ((x377&x378)%(x379|x380));

	if (t94 != 20LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x383 = 1;
	int16_t x384 = 7;
	static volatile int32_t t95 = 2157962;

	t95 = ((x381&x382)%(x383|x384));

	if (t95 != -2) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = 2U;
	volatile int16_t x386 = -491;
	int16_t x388 = -1;

	t96 = ((x385&x386)%(x387|x388));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x392 = -3;
	int64_t t97 = -52645577729251540LL;

	t97 = ((x389&x390)%(x391|x392));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x393 = INT8_MIN;
	int64_t x395 = INT64_MAX;
	int8_t x396 = INT8_MIN;
	volatile int64_t t98 = 108290600LL;

	t98 = ((x393&x394)%(x395|x396));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = 6241280;
	volatile uint8_t x398 = UINT8_MAX;
	uint32_t x400 = 68U;
	uint32_t t99 = 117326U;

	t99 = ((x397&x398)%(x399|x400));

	if (t99 != 0U) { NG(); } else { ; }
	
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

