#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 294062314;
uint64_t x6 = UINT64_MAX;
volatile uint32_t x8 = UINT32_MAX;
uint32_t x11 = 164645U;
static uint64_t x12 = 247988900522LLU;
static int32_t x13 = INT32_MIN;
uint64_t x14 = 1194077901LLU;
static int32_t x19 = INT32_MAX;
int16_t x38 = -1;
static int32_t x41 = 728777;
uint16_t x48 = 31117U;
uint16_t x49 = UINT16_MAX;
int16_t x50 = -1;
uint16_t x52 = UINT16_MAX;
int32_t t12 = -10404154;
static volatile int32_t t13 = -62;
int16_t x60 = -31;
int32_t x61 = INT32_MIN;
volatile int16_t x63 = INT16_MIN;
int32_t x64 = INT32_MAX;
int16_t x72 = INT16_MAX;
static uint32_t t17 = 1073580924U;
int16_t x80 = 6;
static int32_t t21 = -756996914;
int8_t x96 = 0;
int32_t x101 = INT32_MIN;
uint32_t x104 = UINT32_MAX;
int32_t x106 = -1;
static volatile uint32_t t27 = 11U;
volatile uint64_t t28 = 86LLU;
int64_t x120 = 15711272072343LL;
static int16_t x121 = 451;
volatile int16_t x122 = 10;
int16_t x130 = INT16_MIN;
static int32_t t33 = -553;
int16_t x137 = 680;
int16_t x145 = 0;
static uint32_t x146 = 1U;
static int64_t x176 = 99816032025LL;
static uint32_t x196 = 98109U;
uint64_t x209 = 22LLU;
static volatile uint8_t x210 = 3U;
static uint64_t x215 = UINT64_MAX;
volatile uint64_t t53 = 1LLU;
uint8_t x218 = 22U;
int32_t t54 = -258347131;
int64_t x221 = 15044009538744277LL;
volatile int64_t x222 = INT64_MAX;
static int16_t x224 = 399;
uint32_t x226 = UINT32_MAX;
static int64_t x227 = -146LL;
volatile int64_t t56 = 10LL;
volatile int8_t x232 = INT8_MIN;
uint16_t x235 = 811U;
int16_t x239 = 5274;
int8_t x241 = -22;
int8_t x242 = 1;
int64_t x246 = INT64_MIN;
static volatile int64_t t61 = 2586LL;
volatile uint16_t x253 = UINT16_MAX;
volatile uint64_t x254 = 4137444250595LLU;
int16_t x268 = INT16_MIN;
static int32_t t67 = -58958;
volatile int8_t x279 = -62;
int32_t t69 = INT32_MIN;
uint16_t x284 = UINT16_MAX;
static int32_t t71 = -29589895;
uint32_t x292 = 1882U;
volatile int64_t t72 = 123738323042411LL;
static int16_t x299 = -7;
int8_t x313 = -1;
int8_t x314 = INT8_MIN;
uint8_t x317 = 60U;
static int64_t x321 = -6LL;
int32_t x323 = -2740;
int16_t x324 = INT16_MAX;
int64_t x328 = -1LL;
static uint16_t x335 = 72U;
volatile int32_t x337 = INT32_MIN;
int32_t t84 = -61756208;
int32_t x349 = INT32_MIN;
uint16_t x353 = 0U;
volatile int16_t x354 = -1;
int64_t t89 = 11LL;
int32_t t90 = INT32_MIN;
uint8_t x373 = 123U;
uint16_t x379 = 10709U;
int32_t x380 = -1;
uint32_t x382 = 1006461894U;
int16_t x386 = -1;
volatile int64_t x389 = -1LL;
uint32_t x390 = UINT32_MAX;
uint32_t x395 = 9098727U;
static int64_t x398 = INT64_MIN;


void f0(void) {
	int8_t x1 = -7;
	uint8_t x2 = UINT8_MAX;
	uint16_t x3 = UINT16_MAX;
	uint8_t x4 = 14U;

	t0 = ((x1&x2)*(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	volatile uint32_t x7 = UINT32_MAX;
	uint64_t t1 = 9863LLU;

	t1 = ((x5&x6)*(x7<=x8));

	if (t1 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	int16_t x10 = INT16_MIN;
	int64_t t2 = -2067LL;

	t2 = ((x9&x10)*(x11<=x12));

	if (t2 != -32768LL) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x15 = INT64_MIN;
	static uint16_t x16 = UINT16_MAX;
	uint64_t t3 = 8092548282LLU;

	t3 = ((x13&x14)*(x15<=x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	static int16_t x18 = INT16_MAX;
	int64_t x20 = -1LL;
	volatile int64_t t4 = 177LL;

	t4 = ((x17&x18)*(x19<=x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = 19;
	volatile int32_t x22 = -1;
	static int32_t x23 = 12;
	volatile int16_t x24 = -1;
	static int32_t t5 = 187;

	t5 = ((x21&x22)*(x23<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int16_t x25 = INT16_MAX;
	int64_t x26 = -1LL;
	uint32_t x27 = 56U;
	uint8_t x28 = 1U;
	volatile int64_t t6 = -1185667078537LL;

	t6 = ((x25&x26)*(x27<=x28));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -1;
	volatile int64_t x30 = -1LL;
	volatile int64_t x31 = 766578333817514395LL;
	uint8_t x32 = 0U;
	int64_t t7 = 36696178968547384LL;

	t7 = ((x29&x30)*(x31<=x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = UINT64_MAX;
	static int32_t x34 = INT32_MIN;
	int16_t x35 = INT16_MAX;
	int16_t x36 = INT16_MAX;
	uint64_t t8 = 12499LLU;

	t8 = ((x33&x34)*(x35<=x36));

	if (t8 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = 2U;
	uint16_t x39 = 8270U;
	int8_t x40 = -4;
	volatile uint32_t t9 = 1224236U;

	t9 = ((x37&x38)*(x39<=x40));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = -1;
	volatile int64_t x43 = 1001534428658374LL;
	volatile uint8_t x44 = 67U;
	int32_t t10 = 120;

	t10 = ((x41&x42)*(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	int8_t x46 = INT8_MAX;
	int16_t x47 = INT16_MIN;
	volatile int32_t t11 = -83913877;

	t11 = ((x45&x46)*(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x51 = -1;

	t12 = ((x49&x50)*(x51<=x52));

	if (t12 != 65535) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x53 = 3754U;
	int16_t x54 = INT16_MAX;
	int16_t x55 = -1;
	uint64_t x56 = 183527838016LLU;

	t13 = ((x53&x54)*(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -1;
	static volatile int32_t x58 = -1;
	static volatile int64_t x59 = -2848114LL;
	int32_t t14 = -278268;

	t14 = ((x57&x58)*(x59<=x60));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x62 = 1U;
	int32_t t15 = 4;

	t15 = ((x61&x62)*(x63<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = UINT16_MAX;
	volatile int32_t x66 = INT32_MIN;
	int32_t x67 = 251;
	int32_t x68 = INT32_MIN;
	volatile int32_t t16 = 12032;

	t16 = ((x65&x66)*(x67<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -4;
	uint32_t x70 = 265447897U;
	int8_t x71 = -1;

	t17 = ((x69&x70)*(x71<=x72));

	if (t17 != 265447896U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	int64_t x74 = -3089204LL;
	int64_t x75 = 50195LL;
	int16_t x76 = 3;
	static int64_t t18 = 236LL;

	t18 = ((x73&x74)*(x75<=x76));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -3;
	int64_t x78 = -1121096499997477LL;
	uint64_t x79 = UINT64_MAX;
	volatile int64_t t19 = 4097914473LL;

	t19 = ((x77&x78)*(x79<=x80));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t x81 = 1180757;
	uint64_t x82 = UINT64_MAX;
	static int32_t x83 = INT32_MIN;
	static int32_t x84 = INT32_MAX;
	uint64_t t20 = 797104457702LLU;

	t20 = ((x81&x82)*(x83<=x84));

	if (t20 != 1180757LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = INT16_MIN;
	uint8_t x86 = UINT8_MAX;
	int64_t x87 = INT64_MIN;
	static uint16_t x88 = UINT16_MAX;

	t21 = ((x85&x86)*(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = -1;
	static volatile int64_t x90 = INT64_MIN;
	uint32_t x91 = 81593121U;
	uint64_t x92 = UINT64_MAX;
	static int64_t t22 = INT64_MIN;

	t22 = ((x89&x90)*(x91<=x92));

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int8_t x93 = INT8_MIN;
	int64_t x94 = -69530081656065440LL;
	int16_t x95 = INT16_MIN;
	int64_t t23 = -1714414520114645784LL;

	t23 = ((x93&x94)*(x95<=x96));

	if (t23 != -69530081656065536LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t x97 = INT32_MIN;
	volatile int8_t x98 = -1;
	int64_t x99 = INT64_MAX;
	uint16_t x100 = 30348U;
	static int32_t t24 = 478;

	t24 = ((x97&x98)*(x99<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x102 = -1LL;
	static uint8_t x103 = 24U;
	static int64_t t25 = 10LL;

	t25 = ((x101&x102)*(x103<=x104));

	if (t25 != -2147483648LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 238U;
	int8_t x107 = 4;
	static uint32_t x108 = 156699214U;
	static volatile int32_t t26 = 32639460;

	t26 = ((x105&x106)*(x107<=x108));

	if (t26 != 238) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 29U;
	static uint32_t x110 = UINT32_MAX;
	int32_t x111 = INT32_MAX;
	volatile uint8_t x112 = 80U;

	t27 = ((x109&x110)*(x111<=x112));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = UINT64_MAX;
	volatile int64_t x114 = INT64_MAX;
	static uint64_t x115 = UINT64_MAX;
	int16_t x116 = INT16_MIN;

	t28 = ((x113&x114)*(x115<=x116));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x117 = 1U;
	int64_t x118 = INT64_MAX;
	int8_t x119 = INT8_MIN;
	int64_t t29 = -4662361370623973LL;

	t29 = ((x117&x118)*(x119<=x120));

	if (t29 != 1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x123 = INT16_MAX;
	int8_t x124 = -37;
	int32_t t30 = -3680640;

	t30 = ((x121&x122)*(x123<=x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = 1759;
	static uint16_t x126 = 12U;
	int8_t x127 = INT8_MIN;
	uint8_t x128 = 52U;
	int32_t t31 = -8408;

	t31 = ((x125&x126)*(x127<=x128));

	if (t31 != 12) { NG(); } else { ; }
	
}

void f32(void) {
	static int16_t x129 = -2181;
	uint8_t x131 = 1U;
	int8_t x132 = -3;
	volatile int32_t t32 = 109;

	t32 = ((x129&x130)*(x131<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = 200488169;
	int32_t x134 = INT32_MIN;
	uint8_t x135 = UINT8_MAX;
	int8_t x136 = INT8_MIN;

	t33 = ((x133&x134)*(x135<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x138 = -254LL;
	int8_t x139 = 1;
	static int32_t x140 = 20;
	volatile int64_t t34 = 225LL;

	t34 = ((x137&x138)*(x139<=x140));

	if (t34 != 512LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MAX;
	int64_t x142 = INT64_MAX;
	int32_t x143 = -1;
	static int16_t x144 = -1;
	int64_t t35 = -4LL;

	t35 = ((x141&x142)*(x143<=x144));

	if (t35 != 127LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x147 = INT64_MIN;
	volatile int8_t x148 = -1;
	uint32_t t36 = 81404840U;

	t36 = ((x145&x146)*(x147<=x148));

	if (t36 != 0U) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x149 = -1;
	int32_t x150 = INT32_MAX;
	uint8_t x151 = 81U;
	int8_t x152 = INT8_MIN;
	int32_t t37 = 1859549;

	t37 = ((x149&x150)*(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = -1;
	int8_t x154 = INT8_MIN;
	int32_t x155 = -126550072;
	int16_t x156 = 4436;
	int32_t t38 = 22;

	t38 = ((x153&x154)*(x155<=x156));

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x157 = INT64_MIN;
	int16_t x158 = INT16_MAX;
	int32_t x159 = 309588113;
	static int8_t x160 = INT8_MIN;
	volatile int64_t t39 = 64988927087318LL;

	t39 = ((x157&x158)*(x159<=x160));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = -1;
	volatile uint16_t x162 = 2896U;
	uint64_t x163 = UINT64_MAX;
	int32_t x164 = -1966;
	int32_t t40 = -18781259;

	t40 = ((x161&x162)*(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = -4609;
	volatile int8_t x166 = -1;
	volatile uint32_t x167 = 653U;
	static volatile uint8_t x168 = 44U;
	volatile int32_t t41 = 18;

	t41 = ((x165&x166)*(x167<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 3987534U;
	uint8_t x170 = 3U;
	volatile int32_t x171 = INT32_MIN;
	volatile int8_t x172 = INT8_MIN;
	uint32_t t42 = 251724146U;

	t42 = ((x169&x170)*(x171<=x172));

	if (t42 != 2U) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -1;
	int16_t x174 = -1;
	int64_t x175 = -592LL;
	static volatile int32_t t43 = 0;

	t43 = ((x173&x174)*(x175<=x176));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = UINT64_MAX;
	int8_t x178 = -1;
	int64_t x179 = INT64_MIN;
	int32_t x180 = -1;
	volatile uint64_t t44 = UINT64_MAX;

	t44 = ((x177&x178)*(x179<=x180));

	if (t44 != UINT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = UINT64_MAX;
	int8_t x182 = -1;
	static int8_t x183 = INT8_MAX;
	volatile uint64_t x184 = UINT64_MAX;
	volatile uint64_t t45 = UINT64_MAX;

	t45 = ((x181&x182)*(x183<=x184));

	if (t45 != UINT64_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = 11U;
	volatile int8_t x186 = -3;
	static volatile int8_t x187 = INT8_MIN;
	int8_t x188 = INT8_MAX;
	volatile uint32_t t46 = 10199U;

	t46 = ((x185&x186)*(x187<=x188));

	if (t46 != 9U) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = 16399652U;
	volatile uint8_t x190 = 29U;
	int16_t x191 = INT16_MAX;
	int8_t x192 = -2;
	static volatile uint32_t t47 = 213U;

	t47 = ((x189&x190)*(x191<=x192));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = -1;
	int16_t x194 = INT16_MIN;
	int8_t x195 = INT8_MIN;
	int32_t t48 = -2803768;

	t48 = ((x193&x194)*(x195<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = INT32_MIN;
	int32_t x198 = INT32_MIN;
	uint8_t x199 = 122U;
	int64_t x200 = INT64_MAX;
	int32_t t49 = INT32_MIN;

	t49 = ((x197&x198)*(x199<=x200));

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 145544U;
	static int64_t x202 = 160LL;
	int16_t x203 = INT16_MIN;
	int8_t x204 = -1;
	volatile int64_t t50 = -62574152917299LL;

	t50 = ((x201&x202)*(x203<=x204));

	if (t50 != 128LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x205 = 12515;
	int64_t x206 = -1LL;
	volatile int32_t x207 = INT32_MIN;
	volatile uint16_t x208 = 13007U;
	volatile int64_t t51 = -1LL;

	t51 = ((x205&x206)*(x207<=x208));

	if (t51 != 12515LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x211 = 25;
	int8_t x212 = -1;
	volatile uint64_t t52 = 1407889546783190725LLU;

	t52 = ((x209&x210)*(x211<=x212));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = UINT16_MAX;
	uint64_t x214 = 111570436900116473LLU;
	uint16_t x216 = 7U;

	t53 = ((x213&x214)*(x215<=x216));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = INT8_MIN;
	volatile int8_t x219 = -1;
	volatile int16_t x220 = INT16_MAX;

	t54 = ((x217&x218)*(x219<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x223 = -1LL;
	int64_t t55 = 515305LL;

	t55 = ((x221&x222)*(x223<=x224));

	if (t55 != 15044009538744277LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	int16_t x228 = INT16_MIN;

	t56 = ((x225&x226)*(x227<=x228));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = -1;
	uint8_t x230 = UINT8_MAX;
	int8_t x231 = 1;
	int32_t t57 = 589847;

	t57 = ((x229&x230)*(x231<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = -467761802;
	int8_t x234 = INT8_MIN;
	int8_t x236 = INT8_MIN;
	int32_t t58 = -8316888;

	t58 = ((x233&x234)*(x235<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x237 = 744519804LLU;
	int32_t x238 = -1;
	static volatile int64_t x240 = INT64_MAX;
	volatile uint64_t t59 = 6789LLU;

	t59 = ((x237&x238)*(x239<=x240));

	if (t59 != 744519804LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x243 = 210136616973629419LL;
	static int16_t x244 = INT16_MAX;
	volatile int32_t t60 = -82;

	t60 = ((x241&x242)*(x243<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = -1LL;
	int32_t x247 = INT32_MAX;
	volatile int16_t x248 = 1;

	t61 = ((x245&x246)*(x247<=x248));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x249 = -22;
	int16_t x250 = INT16_MAX;
	volatile int64_t x251 = -4084928271LL;
	int8_t x252 = -1;
	volatile int32_t t62 = -15710;

	t62 = ((x249&x250)*(x251<=x252));

	if (t62 != 32746) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x255 = 2;
	volatile int32_t x256 = -5513;
	volatile uint64_t t63 = 7177956517368140401LLU;

	t63 = ((x253&x254)*(x255<=x256));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x257 = UINT8_MAX;
	uint32_t x258 = 100U;
	static uint8_t x259 = 3U;
	volatile int32_t x260 = 10043932;
	volatile uint32_t t64 = 1754081392U;

	t64 = ((x257&x258)*(x259<=x260));

	if (t64 != 100U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x261 = INT64_MAX;
	static int16_t x262 = -1;
	volatile int16_t x263 = 162;
	static uint16_t x264 = 65U;
	static volatile int64_t t65 = -73160643505LL;

	t65 = ((x261&x262)*(x263<=x264));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MAX;
	int8_t x266 = -1;
	int32_t x267 = INT32_MIN;
	static volatile int32_t t66 = INT32_MAX;

	t66 = ((x265&x266)*(x267<=x268));

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x269 = INT32_MIN;
	int8_t x270 = 0;
	volatile uint16_t x271 = 6U;
	int8_t x272 = INT8_MAX;

	t67 = ((x269&x270)*(x271<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x273 = 15671U;
	static uint64_t x274 = UINT64_MAX;
	static uint64_t x275 = 3743505913524015LLU;
	uint64_t x276 = 72639975998393LLU;
	uint64_t t68 = 494636661974696529LLU;

	t68 = ((x273&x274)*(x275<=x276));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MIN;
	volatile int32_t x278 = -129126;
	volatile uint16_t x280 = 1U;

	t69 = ((x277&x278)*(x279<=x280));

	if (t69 != INT32_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MAX;
	uint32_t x282 = UINT32_MAX;
	static int64_t x283 = INT64_MIN;
	static uint32_t t70 = 179470442U;

	t70 = ((x281&x282)*(x283<=x284));

	if (t70 != 32767U) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = 1;
	int32_t x286 = -484221921;
	uint64_t x287 = 1369186LLU;
	volatile int64_t x288 = INT64_MAX;

	t71 = ((x285&x286)*(x287<=x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MAX;
	static int64_t x290 = 25LL;
	volatile int16_t x291 = -1;

	t72 = ((x289&x290)*(x291<=x292));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x293 = INT64_MIN;
	int8_t x294 = 11;
	uint32_t x295 = 79U;
	static int32_t x296 = 46858;
	int64_t t73 = 2138789164568LL;

	t73 = ((x293&x294)*(x295<=x296));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = -2;
	int16_t x298 = INT16_MIN;
	int16_t x300 = INT16_MIN;
	volatile int32_t t74 = 6983407;

	t74 = ((x297&x298)*(x299<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x301 = INT64_MIN;
	int32_t x302 = INT32_MIN;
	uint8_t x303 = 14U;
	int64_t x304 = INT64_MIN;
	volatile int64_t t75 = 527630919361934LL;

	t75 = ((x301&x302)*(x303<=x304));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = 48507U;
	static int8_t x306 = INT8_MAX;
	int8_t x307 = -1;
	volatile int8_t x308 = INT8_MIN;
	volatile uint32_t t76 = 90707U;

	t76 = ((x305&x306)*(x307<=x308));

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x309 = 116504U;
	int16_t x310 = -71;
	uint64_t x311 = 468363LLU;
	int16_t x312 = -1;
	static volatile uint32_t t77 = 4U;

	t77 = ((x309&x310)*(x311<=x312));

	if (t77 != 116504U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x315 = 659549U;
	int32_t x316 = INT32_MIN;
	volatile int32_t t78 = 55273946;

	t78 = ((x313&x314)*(x315<=x316));

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x318 = INT16_MIN;
	int32_t x319 = INT32_MIN;
	static int16_t x320 = 915;
	int32_t t79 = -465643863;

	t79 = ((x317&x318)*(x319<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x322 = -1LL;
	int64_t t80 = 1046017350458880LL;

	t80 = ((x321&x322)*(x323<=x324));

	if (t80 != -6LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = INT32_MIN;
	static int8_t x326 = INT8_MAX;
	int16_t x327 = 2325;
	int32_t t81 = -29380;

	t81 = ((x325&x326)*(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x329 = UINT64_MAX;
	int8_t x330 = INT8_MAX;
	int8_t x331 = INT8_MIN;
	static int32_t x332 = 1;
	static uint64_t t82 = 1506LLU;

	t82 = ((x329&x330)*(x331<=x332));

	if (t82 != 127LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x333 = 1;
	int32_t x334 = INT32_MIN;
	uint32_t x336 = UINT32_MAX;
	volatile int32_t t83 = -1;

	t83 = ((x333&x334)*(x335<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x338 = 31986;
	volatile int32_t x339 = -287011;
	static int16_t x340 = INT16_MIN;

	t84 = ((x337&x338)*(x339<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = 599100;
	uint64_t x342 = 966LLU;
	uint32_t x343 = 1944370U;
	volatile int16_t x344 = INT16_MIN;
	uint64_t t85 = 51661399367LLU;

	t85 = ((x341&x342)*(x343<=x344));

	if (t85 != 4LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = 34183957516LL;
	int16_t x346 = INT16_MAX;
	int8_t x347 = INT8_MIN;
	uint32_t x348 = 35U;
	volatile int64_t t86 = 56849603083LL;

	t86 = ((x345&x346)*(x347<=x348));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x350 = INT16_MAX;
	int16_t x351 = -3959;
	static int32_t x352 = -8121190;
	int32_t t87 = -6;

	t87 = ((x349&x350)*(x351<=x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x355 = 173U;
	int16_t x356 = INT16_MAX;
	static volatile int32_t t88 = -3;

	t88 = ((x353&x354)*(x355<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint8_t x357 = UINT8_MAX;
	int64_t x358 = INT64_MIN;
	static uint16_t x359 = 67U;
	uint64_t x360 = 131423519259LLU;

	t89 = ((x357&x358)*(x359<=x360));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x361 = -3463;
	static int32_t x362 = INT32_MIN;
	static int16_t x363 = INT16_MIN;
	static int16_t x364 = INT16_MIN;

	t90 = ((x361&x362)*(x363<=x364));

	if (t90 != INT32_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x365 = UINT16_MAX;
	uint8_t x366 = UINT8_MAX;
	static uint32_t x367 = 7U;
	uint32_t x368 = 7U;
	int32_t t91 = 114902;

	t91 = ((x365&x366)*(x367<=x368));

	if (t91 != 255) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int32_t x369 = -100;
	uint32_t x370 = 49783781U;
	int32_t x371 = 1;
	int32_t x372 = INT32_MAX;
	volatile uint32_t t92 = 75U;

	t92 = ((x369&x370)*(x371<=x372));

	if (t92 != 49783684U) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x374 = INT64_MIN;
	static uint32_t x375 = 6U;
	int8_t x376 = INT8_MAX;
	volatile int64_t t93 = 857066821LL;

	t93 = ((x373&x374)*(x375<=x376));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x377 = INT32_MIN;
	uint32_t x378 = 9U;
	uint32_t t94 = 195739624U;

	t94 = ((x377&x378)*(x379<=x380));

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x381 = UINT64_MAX;
	uint64_t x383 = UINT64_MAX;
	volatile int8_t x384 = INT8_MIN;
	volatile uint64_t t95 = 92562LLU;

	t95 = ((x381&x382)*(x383<=x384));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x385 = 53055U;
	int64_t x387 = -45LL;
	static int8_t x388 = -2;
	static uint32_t t96 = 123908U;

	t96 = ((x385&x386)*(x387<=x388));

	if (t96 != 53055U) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x391 = INT16_MAX;
	uint64_t x392 = UINT64_MAX;
	volatile int64_t t97 = -1LL;

	t97 = ((x389&x390)*(x391<=x392));

	if (t97 != 4294967295LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = INT16_MIN;
	volatile int16_t x394 = INT16_MIN;
	int8_t x396 = INT8_MIN;
	volatile int32_t t98 = -4;

	t98 = ((x393&x394)*(x395<=x396));

	if (t98 != -32768) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x397 = INT32_MIN;
	uint16_t x399 = UINT16_MAX;
	static int8_t x400 = 0;
	static int64_t t99 = -23360181101215LL;

	t99 = ((x397&x398)*(x399<=x400));

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

