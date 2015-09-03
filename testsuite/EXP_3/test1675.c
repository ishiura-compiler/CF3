#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = -7;
int32_t t1 = 3;
int64_t x9 = 4334LL;
uint8_t x10 = 57U;
uint64_t x15 = UINT64_MAX;
int64_t x18 = -12LL;
volatile int8_t x22 = INT8_MAX;
static int8_t x30 = 0;
uint64_t x35 = 630777657LLU;
int16_t x36 = INT16_MIN;
volatile int64_t t9 = -316702033320212017LL;
volatile int16_t x42 = INT16_MIN;
static uint32_t x51 = UINT32_MAX;
uint64_t x57 = 14578448001790794LLU;
uint64_t x59 = UINT64_MAX;
volatile uint64_t t14 = 219980747LLU;
static int16_t x67 = INT16_MIN;
uint64_t x70 = 2242324506722357LLU;
int64_t t18 = -207114743351169LL;
uint32_t x80 = 291787042U;
int8_t x83 = INT8_MIN;
volatile int16_t x84 = -1;
static volatile uint32_t t20 = 142U;
uint64_t x92 = 3973512063LLU;
int64_t x102 = INT64_MIN;
uint32_t x104 = 50U;
int64_t t25 = -93LL;
int16_t x105 = INT16_MIN;
volatile uint16_t x116 = 33U;
volatile int32_t x127 = -228080231;
int32_t t31 = -85;
static int64_t x135 = -35834421576722LL;
int16_t x136 = INT16_MIN;
static int16_t x139 = INT16_MIN;
volatile uint32_t t34 = 120985964U;
volatile int16_t x141 = -1;
volatile uint8_t x150 = UINT8_MAX;
int32_t x155 = 7;
volatile uint16_t x156 = UINT16_MAX;
static uint64_t t38 = 2270346771773947756LLU;
int32_t x159 = 107536;
volatile int32_t x163 = 529182498;
uint64_t t40 = 10995376599514068LLU;
uint32_t x167 = 12U;
static uint64_t x173 = 24152LLU;
uint64_t t43 = 91113310LLU;
uint64_t x178 = UINT64_MAX;
int32_t x184 = -96;
volatile uint16_t x189 = 1U;
int32_t x190 = 13433061;
volatile int8_t x192 = -1;
int16_t x202 = INT16_MIN;
volatile int32_t t50 = 3;
uint8_t x205 = 11U;
int8_t x217 = INT8_MIN;
uint16_t x220 = 0U;
volatile uint8_t x223 = 11U;
int8_t x224 = INT8_MIN;
uint16_t x226 = 2U;
int32_t t56 = 27111;
int32_t x239 = -1;
int32_t x240 = -1;
volatile int64_t x244 = 0LL;
static int32_t t60 = 1;
static int8_t x250 = INT8_MAX;
volatile int16_t x251 = INT16_MIN;
static int16_t x254 = 33;
volatile int64_t x256 = -1LL;
uint64_t x257 = 3431399LLU;
volatile uint16_t x266 = UINT16_MAX;
volatile int32_t t66 = 1;
uint64_t x269 = UINT64_MAX;
static int8_t x270 = 0;
int64_t x273 = -452037646707982351LL;
static uint32_t x279 = 3824313U;
uint64_t x287 = 24646LLU;
int32_t x289 = INT32_MIN;
static uint32_t x294 = 4705250U;
static int64_t x304 = INT64_MIN;
volatile int32_t t75 = 471349;
int16_t x305 = INT16_MAX;
int16_t x314 = 5491;
int8_t x316 = INT8_MAX;
volatile uint64_t x319 = UINT64_MAX;
volatile int32_t t79 = 14544977;
int64_t x330 = 2058036146LL;
int32_t x332 = INT32_MIN;
uint64_t x333 = UINT64_MAX;
static uint16_t x334 = 4U;
int32_t x335 = INT32_MAX;
volatile int64_t x338 = -1LL;
int16_t x341 = -1;
static int16_t x348 = -920;
volatile int64_t t86 = -2968LL;
int64_t x350 = INT64_MIN;
volatile int32_t x351 = 1;
volatile int64_t t88 = 1815LL;
volatile int32_t t95 = 971096696;
static int32_t x387 = -2;


void f0(void) {
	int8_t x1 = INT8_MAX;
	static int64_t x2 = INT64_MIN;
	static int16_t x3 = INT16_MIN;
	static int8_t x4 = INT8_MIN;
	static volatile int64_t t0 = 22185LL;

	t0 = ((x1|x2)&(x3<=x4));

	if (t0 != 1LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MIN;
	int16_t x7 = -1;
	uint8_t x8 = 1U;

	t1 = ((x5|x6)&(x7<=x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x11 = INT16_MIN;
	int32_t x12 = INT32_MAX;
	volatile int64_t t2 = -213320546822443LL;

	t2 = ((x9|x10)&(x11<=x12));

	if (t2 != 1LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 32U;
	uint16_t x14 = UINT16_MAX;
	int16_t x16 = -1;
	static volatile int32_t t3 = 900809;

	t3 = ((x13|x14)&(x15<=x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	int16_t x19 = INT16_MIN;
	volatile int64_t x20 = -1LL;
	volatile int64_t t4 = -7LL;

	t4 = ((x17|x18)&(x19<=x20));

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = -1;
	static int16_t x23 = INT16_MIN;
	int64_t x24 = 218631063LL;
	static volatile int32_t t5 = -26;

	t5 = ((x21|x22)&(x23<=x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint64_t x25 = UINT64_MAX;
	volatile int32_t x26 = -1;
	int16_t x27 = -1;
	static uint64_t x28 = 58269146LLU;
	uint64_t t6 = 923266974004984217LLU;

	t6 = ((x25|x26)&(x27<=x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -6;
	int32_t x31 = INT32_MIN;
	volatile int32_t x32 = INT32_MAX;
	volatile int32_t t7 = -997;

	t7 = ((x29|x30)&(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = -1;
	int32_t x34 = INT32_MIN;
	volatile int32_t t8 = -1839144;

	t8 = ((x33|x34)&(x35<=x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	static int64_t x38 = INT64_MIN;
	int32_t x39 = 854973;
	static int16_t x40 = INT16_MAX;

	t9 = ((x37|x38)&(x39<=x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	int16_t x43 = 59;
	volatile uint16_t x44 = 32145U;
	volatile int32_t t10 = -142239;

	t10 = ((x41|x42)&(x43<=x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 1;
	int8_t x46 = INT8_MAX;
	int32_t x47 = -1;
	int64_t x48 = INT64_MAX;
	volatile int32_t t11 = 588;

	t11 = ((x45|x46)&(x47<=x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x49 = 14;
	int32_t x50 = -36001;
	int32_t x52 = -31940;
	int32_t t12 = -24405670;

	t12 = ((x49|x50)&(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -2;
	int16_t x54 = INT16_MIN;
	uint32_t x55 = 492309U;
	int32_t x56 = 2222375;
	static volatile int32_t t13 = 939;

	t13 = ((x53|x54)&(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x58 = 425292U;
	static volatile uint16_t x60 = 10U;

	t14 = ((x57|x58)&(x59<=x60));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 50;
	uint16_t x62 = 3U;
	int8_t x63 = INT8_MAX;
	volatile int32_t x64 = INT32_MAX;
	static int32_t t15 = -29;

	t15 = ((x61|x62)&(x63<=x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -1LL;
	static uint64_t x66 = 139178551LLU;
	static int8_t x68 = INT8_MAX;
	static uint64_t t16 = 203143835453798LLU;

	t16 = ((x65|x66)&(x67<=x68));

	if (t16 != 1LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x69 = 3U;
	int16_t x71 = INT16_MIN;
	volatile int16_t x72 = 14;
	static volatile uint64_t t17 = 428253LLU;

	t17 = ((x69|x70)&(x71<=x72));

	if (t17 != 1LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = -289948LL;
	int64_t x74 = INT64_MAX;
	volatile uint32_t x75 = 28U;
	volatile uint64_t x76 = 11LLU;

	t18 = ((x73|x74)&(x75<=x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	int64_t x78 = INT64_MIN;
	static int16_t x79 = INT16_MIN;
	volatile int64_t t19 = 12502439051316526LL;

	t19 = ((x77|x78)&(x79<=x80));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = UINT32_MAX;
	int32_t x82 = -342;

	t20 = ((x81|x82)&(x83<=x84));

	if (t20 != 1U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	static uint8_t x86 = 3U;
	static int8_t x87 = INT8_MIN;
	int64_t x88 = -1LL;
	volatile int64_t t21 = 1LL;

	t21 = ((x85|x86)&(x87<=x88));

	if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	uint32_t x90 = 6391U;
	int16_t x91 = INT16_MIN;
	uint64_t t22 = 882312LLU;

	t22 = ((x89|x90)&(x91<=x92));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = 1;
	int8_t x94 = -1;
	int16_t x95 = INT16_MAX;
	int32_t x96 = INT32_MIN;
	static volatile int32_t t23 = 455170204;

	t23 = ((x93|x94)&(x95<=x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	int16_t x98 = 167;
	int32_t x99 = -20896300;
	uint8_t x100 = UINT8_MAX;
	static volatile int64_t t24 = -62299251104848116LL;

	t24 = ((x97|x98)&(x99<=x100));

	if (t24 != 1LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -1LL;
	int32_t x103 = INT32_MIN;

	t25 = ((x101|x102)&(x103<=x104));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x106 = 4475087684515LL;
	static uint32_t x107 = 234371418U;
	int16_t x108 = -11;
	static int64_t t26 = 34002615042181LL;

	t26 = ((x105|x106)&(x107<=x108));

	if (t26 != 1LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x109 = INT32_MIN;
	int32_t x110 = 10866;
	int64_t x111 = -1LL;
	int32_t x112 = INT32_MAX;
	int32_t t27 = -1;

	t27 = ((x109|x110)&(x111<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = -1;
	static uint8_t x114 = UINT8_MAX;
	static uint8_t x115 = UINT8_MAX;
	int32_t t28 = -490177369;

	t28 = ((x113|x114)&(x115<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	int64_t x118 = -2022148009LL;
	volatile int16_t x119 = 1;
	int8_t x120 = 1;
	static volatile int64_t t29 = 4819942LL;

	t29 = ((x117|x118)&(x119<=x120));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x121 = 689076155975511LL;
	int8_t x122 = 1;
	volatile int16_t x123 = 1;
	static volatile int64_t x124 = INT64_MAX;
	int64_t t30 = -5LL;

	t30 = ((x121|x122)&(x123<=x124));

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = UINT8_MAX;
	int16_t x126 = INT16_MIN;
	static int8_t x128 = INT8_MAX;

	t31 = ((x125|x126)&(x127<=x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 22947099879177549LLU;
	uint8_t x130 = UINT8_MAX;
	uint8_t x131 = UINT8_MAX;
	static int64_t x132 = 629178973106574LL;
	uint64_t t32 = 480929521186164172LLU;

	t32 = ((x129|x130)&(x131<=x132));

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x133 = 84U;
	uint64_t x134 = UINT64_MAX;
	uint64_t t33 = 64LLU;

	t33 = ((x133|x134)&(x135<=x136));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint16_t x137 = 577U;
	volatile uint32_t x138 = UINT32_MAX;
	volatile uint16_t x140 = 2U;

	t34 = ((x137|x138)&(x139<=x140));

	if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x142 = -1;
	static volatile int32_t x143 = INT32_MAX;
	uint8_t x144 = UINT8_MAX;
	int32_t t35 = -10697;

	t35 = ((x141|x142)&(x143<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = -1;
	static volatile uint16_t x146 = UINT16_MAX;
	uint16_t x147 = 1U;
	int16_t x148 = INT16_MIN;
	volatile int32_t t36 = 4076249;

	t36 = ((x145|x146)&(x147<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x149 = -1LL;
	uint64_t x151 = UINT64_MAX;
	volatile int64_t x152 = INT64_MIN;
	volatile int64_t t37 = 20039163299LL;

	t37 = ((x149|x150)&(x151<=x152));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = 1LLU;
	int8_t x154 = INT8_MAX;

	t38 = ((x153|x154)&(x155<=x156));

	if (t38 != 1LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = INT32_MAX;
	int64_t x158 = INT64_MIN;
	uint8_t x160 = UINT8_MAX;
	static int64_t t39 = 22480LL;

	t39 = ((x157|x158)&(x159<=x160));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x161 = 8589452871966017982LLU;
	volatile int8_t x162 = INT8_MIN;
	uint16_t x164 = UINT16_MAX;

	t40 = ((x161|x162)&(x163<=x164));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 111U;
	int64_t x166 = 352LL;
	volatile int64_t x168 = -346852897215755LL;
	static volatile int64_t t41 = 8021LL;

	t41 = ((x165|x166)&(x167<=x168));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = 17;
	volatile int32_t x170 = INT32_MIN;
	volatile uint8_t x171 = 0U;
	int64_t x172 = -509142308736015427LL;
	int32_t t42 = -85;

	t42 = ((x169|x170)&(x171<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x174 = INT32_MIN;
	int8_t x175 = 0;
	uint64_t x176 = UINT64_MAX;

	t43 = ((x173|x174)&(x175<=x176));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = 64353;
	int8_t x179 = -1;
	static int16_t x180 = INT16_MIN;
	uint64_t t44 = 49672244LLU;

	t44 = ((x177|x178)&(x179<=x180));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x181 = -18200;
	static int64_t x182 = INT64_MIN;
	uint16_t x183 = UINT16_MAX;
	volatile int64_t t45 = -920LL;

	t45 = ((x181|x182)&(x183<=x184));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MAX;
	int16_t x186 = INT16_MIN;
	uint8_t x187 = 1U;
	int16_t x188 = INT16_MIN;
	int32_t t46 = 61258;

	t46 = ((x185|x186)&(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x191 = INT16_MIN;
	int32_t t47 = 952114;

	t47 = ((x189|x190)&(x191<=x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = 0;
	static uint32_t x194 = 18370U;
	int8_t x195 = 3;
	int16_t x196 = -3;
	volatile uint32_t t48 = 666369149U;

	t48 = ((x193|x194)&(x195<=x196));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 3U;
	int16_t x198 = INT16_MIN;
	volatile uint16_t x199 = 10802U;
	uint64_t x200 = UINT64_MAX;
	volatile int32_t t49 = 3847;

	t49 = ((x197|x198)&(x199<=x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = -1;
	volatile int64_t x203 = INT64_MIN;
	int64_t x204 = INT64_MAX;

	t50 = ((x201|x202)&(x203<=x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x206 = UINT32_MAX;
	volatile int16_t x207 = INT16_MIN;
	int64_t x208 = INT64_MIN;
	volatile uint32_t t51 = 397414623U;

	t51 = ((x205|x206)&(x207<=x208));

	if (t51 != 0U) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x209 = 1531;
	int32_t x210 = INT32_MAX;
	int16_t x211 = INT16_MIN;
	int32_t x212 = 26;
	volatile int32_t t52 = -37784898;

	t52 = ((x209|x210)&(x211<=x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x213 = -1LL;
	int8_t x214 = INT8_MIN;
	uint8_t x215 = 5U;
	uint8_t x216 = UINT8_MAX;
	volatile int64_t t53 = 43550557648711779LL;

	t53 = ((x213|x214)&(x215<=x216));

	if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x218 = UINT16_MAX;
	int32_t x219 = -1;
	int32_t t54 = 649280;

	t54 = ((x217|x218)&(x219<=x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -1;
	int64_t x222 = INT64_MAX;
	int64_t t55 = 128536740039LL;

	t55 = ((x221|x222)&(x223<=x224));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = 0;
	uint64_t x227 = 7044627625903596573LLU;
	int16_t x228 = INT16_MIN;

	t56 = ((x225|x226)&(x227<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -1;
	int16_t x230 = INT16_MAX;
	uint8_t x231 = 30U;
	static volatile int32_t x232 = INT32_MIN;
	volatile int32_t t57 = -809070;

	t57 = ((x229|x230)&(x231<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = -86LL;
	int64_t x234 = INT64_MAX;
	volatile int16_t x235 = -5;
	int16_t x236 = 38;
	int64_t t58 = -31374695426573LL;

	t58 = ((x233|x234)&(x235<=x236));

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -1;
	uint8_t x238 = 2U;
	volatile int32_t t59 = -1834753;

	t59 = ((x237|x238)&(x239<=x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 0U;
	volatile int8_t x242 = INT8_MIN;
	int64_t x243 = INT64_MAX;

	t60 = ((x241|x242)&(x243<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x245 = 111597620749398LL;
	int64_t x246 = -17914230LL;
	volatile uint8_t x247 = 7U;
	int64_t x248 = INT64_MIN;
	int64_t t61 = -1016LL;

	t61 = ((x245|x246)&(x247<=x248));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint8_t x249 = 0U;
	int32_t x252 = -1;
	static int32_t t62 = -80781453;

	t62 = ((x249|x250)&(x251<=x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = -847;
	int64_t x255 = -1LL;
	static int32_t t63 = -295689607;

	t63 = ((x253|x254)&(x255<=x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x258 = -1;
	uint32_t x259 = 1284725346U;
	static uint8_t x260 = 17U;
	uint64_t t64 = 117345628LLU;

	t64 = ((x257|x258)&(x259<=x260));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = 14061;
	int16_t x262 = -1;
	volatile int8_t x263 = INT8_MIN;
	static int8_t x264 = INT8_MIN;
	volatile int32_t t65 = -16021514;

	t65 = ((x261|x262)&(x263<=x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	static volatile int32_t x267 = 10;
	static uint64_t x268 = 7627122191166LLU;

	t66 = ((x265|x266)&(x267<=x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x271 = UINT32_MAX;
	static int64_t x272 = INT64_MIN;
	uint64_t t67 = 571LLU;

	t67 = ((x269|x270)&(x271<=x272));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x274 = 104U;
	uint16_t x275 = 2765U;
	int16_t x276 = -41;
	int64_t t68 = 457959LL;

	t68 = ((x273|x274)&(x275<=x276));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -1;
	uint32_t x278 = UINT32_MAX;
	int32_t x280 = INT32_MIN;
	uint32_t t69 = 166U;

	t69 = ((x277|x278)&(x279<=x280));

	if (t69 != 1U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint8_t x281 = UINT8_MAX;
	int64_t x282 = -1LL;
	int64_t x283 = -86949703031891054LL;
	int32_t x284 = INT32_MIN;
	volatile int64_t t70 = -2612455305268LL;

	t70 = ((x281|x282)&(x283<=x284));

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	static int16_t x286 = -22;
	uint8_t x288 = 21U;
	volatile int32_t t71 = 36225;

	t71 = ((x285|x286)&(x287<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x290 = INT16_MIN;
	uint32_t x291 = 2170306U;
	int32_t x292 = -113688;
	int32_t t72 = -506;

	t72 = ((x289|x290)&(x291<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -138;
	int16_t x295 = INT16_MIN;
	static uint64_t x296 = 169414881474LLU;
	volatile uint32_t t73 = 2391U;

	t73 = ((x293|x294)&(x295<=x296));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x297 = UINT64_MAX;
	volatile int64_t x298 = -509828LL;
	static int64_t x299 = INT64_MIN;
	static uint32_t x300 = 9U;
	static volatile uint64_t t74 = 459LLU;

	t74 = ((x297|x298)&(x299<=x300));

	if (t74 != 1LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x301 = 2;
	volatile uint8_t x302 = 1U;
	int8_t x303 = INT8_MAX;

	t75 = ((x301|x302)&(x303<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x306 = -44;
	int8_t x307 = -5;
	int32_t x308 = INT32_MIN;
	volatile int32_t t76 = -14267;

	t76 = ((x305|x306)&(x307<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = UINT8_MAX;
	int32_t x310 = 6;
	int32_t x311 = INT32_MIN;
	int8_t x312 = INT8_MIN;
	volatile int32_t t77 = -5373391;

	t77 = ((x309|x310)&(x311<=x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 1388775U;
	int8_t x315 = 42;
	volatile uint32_t t78 = 17618924U;

	t78 = ((x313|x314)&(x315<=x316));

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	int16_t x318 = -1;
	uint16_t x320 = 54U;

	t79 = ((x317|x318)&(x319<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x321 = 94U;
	int32_t x322 = -207054;
	int8_t x323 = 1;
	int32_t x324 = INT32_MIN;
	int32_t t80 = 690;

	t80 = ((x321|x322)&(x323<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int16_t x325 = INT16_MIN;
	volatile int32_t x326 = 23656;
	int8_t x327 = INT8_MIN;
	int16_t x328 = -782;
	volatile int32_t t81 = 271898247;

	t81 = ((x325|x326)&(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x329 = INT32_MAX;
	volatile int16_t x331 = -510;
	static volatile int64_t t82 = -83LL;

	t82 = ((x329|x330)&(x331<=x332));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x336 = INT16_MAX;
	static volatile uint64_t t83 = 6590454361651905LLU;

	t83 = ((x333|x334)&(x335<=x336));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MAX;
	int64_t x339 = -1440728513569088646LL;
	int8_t x340 = -1;
	volatile int64_t t84 = -4052606838675LL;

	t84 = ((x337|x338)&(x339<=x340));

	if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x342 = 0U;
	volatile int64_t x343 = -1LL;
	int8_t x344 = -27;
	volatile int32_t t85 = -142299;

	t85 = ((x341|x342)&(x343<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MAX;
	int16_t x346 = INT16_MIN;
	static int64_t x347 = 984268847463127LL;

	t86 = ((x345|x346)&(x347<=x348));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x349 = -1LL;
	int64_t x352 = -940778189651LL;
	int64_t t87 = -41292LL;

	t87 = ((x349|x350)&(x351<=x352));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = INT64_MAX;
	int16_t x354 = 8;
	uint64_t x355 = 342LLU;
	int32_t x356 = 13674;

	t88 = ((x353|x354)&(x355<=x356));

	if (t88 != 1LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x357 = -41;
	int64_t x358 = INT64_MAX;
	int16_t x359 = INT16_MIN;
	int16_t x360 = INT16_MAX;
	volatile int64_t t89 = 29932483LL;

	t89 = ((x357|x358)&(x359<=x360));

	if (t89 != 1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MAX;
	int16_t x362 = -120;
	uint16_t x363 = UINT16_MAX;
	uint64_t x364 = 1036440952LLU;
	volatile int32_t t90 = -229613293;

	t90 = ((x361|x362)&(x363<=x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -1;
	uint8_t x366 = 7U;
	int32_t x367 = -128503438;
	static int8_t x368 = -61;
	int32_t t91 = 1434795;

	t91 = ((x365|x366)&(x367<=x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x369 = -1;
	volatile int16_t x370 = INT16_MIN;
	static volatile uint16_t x371 = 1352U;
	int32_t x372 = 41;
	int32_t t92 = 1;

	t92 = ((x369|x370)&(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 3310769269355670LLU;
	volatile int16_t x374 = INT16_MIN;
	int32_t x375 = INT32_MIN;
	int64_t x376 = 598547263442LL;
	volatile uint64_t t93 = 4761LLU;

	t93 = ((x373|x374)&(x375<=x376));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	uint8_t x378 = UINT8_MAX;
	int8_t x379 = INT8_MIN;
	int8_t x380 = INT8_MIN;
	int32_t t94 = 52386;

	t94 = ((x377|x378)&(x379<=x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = -13383;
	uint16_t x382 = 11U;
	static int8_t x383 = -1;
	int64_t x384 = INT64_MAX;

	t95 = ((x381|x382)&(x383<=x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = -299;
	uint64_t x386 = 4500408LLU;
	uint64_t x388 = 567LLU;
	volatile uint64_t t96 = 121134LLU;

	t96 = ((x385|x386)&(x387<=x388));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = 7245;
	static volatile int64_t x390 = INT64_MIN;
	volatile int32_t x391 = INT32_MAX;
	uint16_t x392 = UINT16_MAX;
	volatile int64_t t97 = -48LL;

	t97 = ((x389|x390)&(x391<=x392));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = INT32_MIN;
	static volatile uint8_t x394 = 0U;
	int16_t x395 = INT16_MAX;
	int32_t x396 = INT32_MAX;
	volatile int32_t t98 = 851;

	t98 = ((x393|x394)&(x395<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MAX;
	volatile int8_t x398 = 34;
	int64_t x399 = INT64_MIN;
	int8_t x400 = -6;
	int64_t t99 = -26553130330299LL;

	t99 = ((x397|x398)&(x399<=x400));

	if (t99 != 1LL) { NG(); } else { ; }
	
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

