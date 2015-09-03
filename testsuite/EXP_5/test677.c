#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t t0 = 1517063LL;
static int8_t x7 = INT8_MIN;
static uint32_t x21 = UINT32_MAX;
volatile int64_t x22 = -1LL;
volatile int64_t x23 = INT64_MIN;
uint64_t x33 = UINT64_MAX;
static int16_t x37 = INT16_MIN;
volatile uint32_t x43 = 1082U;
int16_t x46 = -1;
volatile int8_t x48 = INT8_MIN;
volatile int64_t t9 = 2343LL;
uint64_t t12 = 67289846625281312LLU;
uint8_t x70 = 52U;
int64_t t16 = 101432828932033LL;
int32_t x84 = INT32_MIN;
uint8_t x90 = 14U;
uint64_t x92 = 2122481292601LLU;
volatile uint64_t x107 = UINT64_MAX;
int64_t x109 = 172521405765LL;
uint8_t x111 = 80U;
static int64_t x114 = INT64_MAX;
int64_t x117 = 1895LL;
uint32_t x118 = 12631889U;
uint8_t x120 = 23U;
int8_t x122 = -1;
uint32_t x134 = UINT32_MAX;
uint16_t x138 = UINT16_MAX;
static uint32_t t31 = 2395U;
int64_t x156 = 3978LL;
volatile uint32_t x160 = 34U;
static volatile uint32_t t34 = 279U;
volatile int32_t x168 = -62;
volatile int8_t x171 = INT8_MAX;
uint32_t x175 = 66242695U;
int8_t x178 = -1;
int64_t x183 = INT64_MIN;
uint8_t x190 = 51U;
volatile int32_t t41 = 23;
uint64_t x194 = 241895166903168044LLU;
static uint64_t x201 = 1752131307017688299LLU;
volatile uint64_t x203 = 2274403LLU;
int8_t x206 = -1;
static int8_t x211 = INT8_MAX;
volatile int64_t t47 = -137734152997LL;
static int64_t x224 = 2LL;
uint8_t x232 = UINT8_MAX;
static volatile int8_t x237 = INT8_MIN;
int8_t x241 = 0;
volatile int32_t t53 = -14241871;
static int16_t x249 = 1;
volatile uint8_t x255 = UINT8_MAX;
volatile int64_t t56 = 385697868149429416LL;
uint8_t x260 = 0U;
uint64_t t57 = 203LLU;
uint32_t x267 = 1762U;
int64_t t60 = 0LL;
volatile int16_t x274 = 40;
int16_t x281 = INT16_MIN;
uint16_t x282 = UINT16_MAX;
static uint16_t x283 = UINT16_MAX;
int8_t x284 = -1;
volatile uint64_t x287 = 21762LLU;
int32_t x300 = INT32_MIN;
uint32_t x305 = 486U;
static int32_t x308 = INT32_MIN;
volatile int8_t x328 = INT8_MIN;
uint16_t x330 = UINT16_MAX;
int16_t x337 = INT16_MAX;
int32_t x338 = INT32_MIN;
int16_t x341 = -1185;
uint32_t x343 = 6U;
static uint16_t x348 = 301U;
int32_t x349 = 875;
int64_t x361 = -1LL;
static uint64_t x370 = 20LLU;
uint64_t t81 = 11262425926LLU;
int16_t x377 = INT16_MIN;
uint8_t x379 = 125U;
int16_t x384 = INT16_MIN;
uint16_t x388 = 5U;
int64_t x392 = INT64_MIN;
volatile uint64_t t86 = 494054514427048786LLU;
int8_t x403 = 8;
int16_t x413 = -234;
int64_t x415 = INT64_MIN;
volatile uint32_t x420 = 2782U;
volatile int8_t x421 = 1;
int64_t x427 = -1LL;
static int16_t x431 = 340;
int16_t x434 = -1;
int8_t x442 = INT8_MAX;
int8_t x447 = INT8_MAX;


void f0(void) {
	volatile int16_t x1 = INT16_MIN;
	int64_t x2 = 1702820468785LL;
	uint16_t x3 = UINT16_MAX;
	int16_t x4 = -1;

	t0 = (x1+((x2%x3)+x4));

	if (t0 != 20926LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	volatile int32_t x6 = -1;
	uint8_t x8 = 59U;
	volatile int32_t t1 = -214;

	t1 = (x5+((x6%x7)+x8));

	if (t1 != 57) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 100U;
	static uint64_t x14 = 24LLU;
	uint8_t x15 = 95U;
	int32_t x16 = INT32_MIN;
	static uint64_t t2 = 42487LLU;

	t2 = (x13+((x14%x15)+x16));

	if (t2 != 18446744071562068092LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = -1;
	volatile uint8_t x18 = 1U;
	uint64_t x19 = 3430738285796LLU;
	uint64_t x20 = 53LLU;
	volatile uint64_t t3 = 917414204851135LLU;

	t3 = (x17+((x18%x19)+x20));

	if (t3 != 53LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x24 = INT32_MIN;
	static int64_t t4 = 40LL;

	t4 = (x21+((x22%x23)+x24));

	if (t4 != 2147483646LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x29 = INT8_MAX;
	int8_t x30 = INT8_MAX;
	volatile uint16_t x31 = 7U;
	int8_t x32 = 0;
	static volatile int32_t t5 = 37313;

	t5 = (x29+((x30%x31)+x32));

	if (t5 != 128) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x34 = -58929659745682LL;
	uint32_t x35 = UINT32_MAX;
	volatile int64_t x36 = INT64_MAX;
	uint64_t t6 = 127240988169584LLU;

	t6 = (x33+((x34%x35)+x36));

	if (t6 != 9223372034146317524LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x38 = 30;
	volatile int8_t x39 = -3;
	int8_t x40 = 1;
	volatile int32_t t7 = 85011;

	t7 = (x37+((x38%x39)+x40));

	if (t7 != -32767) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x41 = -1609005142714839728LL;
	static uint64_t x42 = 1914LLU;
	int16_t x44 = INT16_MIN;
	volatile uint64_t t8 = 252926LLU;

	t8 = (x41+((x42%x43)+x44));

	if (t8 != 16837738930994679952LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x45 = INT64_MAX;
	int16_t x47 = -1;

	t9 = (x45+((x46%x47)+x48));

	if (t9 != 9223372036854775679LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = 7033;
	static uint32_t x50 = 2U;
	static int64_t x51 = INT64_MIN;
	static uint8_t x52 = 95U;
	volatile int64_t t10 = 246942LL;

	t10 = (x49+((x50%x51)+x52));

	if (t10 != 7130LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x53 = UINT8_MAX;
	uint8_t x54 = 0U;
	static volatile int64_t x55 = -707LL;
	int8_t x56 = INT8_MIN;
	volatile int64_t t11 = -35951221007813LL;

	t11 = (x53+((x54%x55)+x56));

	if (t11 != 127LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = UINT32_MAX;
	static int64_t x58 = -1LL;
	uint64_t x59 = UINT64_MAX;
	volatile uint64_t x60 = 42256599300188LLU;

	t12 = (x57+((x58%x59)+x60));

	if (t12 != 42260894267483LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x61 = 126149390U;
	static volatile uint32_t x62 = 5U;
	int8_t x63 = INT8_MAX;
	static int32_t x64 = INT32_MIN;
	volatile uint32_t t13 = 2067U;

	t13 = (x61+((x62%x63)+x64));

	if (t13 != 2273633043U) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x65 = 788034665;
	int32_t x66 = 31533385;
	uint16_t x67 = 5U;
	volatile uint16_t x68 = UINT16_MAX;
	volatile int32_t t14 = -104054;

	t14 = (x65+((x66%x67)+x68));

	if (t14 != 788100200) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x69 = UINT16_MAX;
	static int8_t x71 = -45;
	uint32_t x72 = UINT32_MAX;
	static uint32_t t15 = 464U;

	t15 = (x69+((x70%x71)+x72));

	if (t15 != 65541U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = INT32_MAX;
	int64_t x74 = -1LL;
	volatile uint16_t x75 = 251U;
	static volatile int16_t x76 = -1;

	t16 = (x73+((x74%x75)+x76));

	if (t16 != 2147483645LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x77 = UINT32_MAX;
	uint8_t x78 = 14U;
	int16_t x79 = 24;
	volatile int32_t x80 = INT32_MIN;
	uint32_t t17 = 6U;

	t17 = (x77+((x78%x79)+x80));

	if (t17 != 2147483661U) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = INT16_MAX;
	int16_t x82 = INT16_MIN;
	int64_t x83 = -3857956826446143LL;
	volatile int64_t t18 = -2519712446919347920LL;

	t18 = (x81+((x82%x83)+x84));

	if (t18 != -2147483649LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x89 = INT8_MAX;
	static int32_t x91 = -1;
	volatile uint64_t t19 = 28LLU;

	t19 = (x89+((x90%x91)+x92));

	if (t19 != 2122481292728LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x93 = INT32_MAX;
	int64_t x94 = 103767119951139412LL;
	int64_t x95 = INT64_MAX;
	int32_t x96 = INT32_MIN;
	volatile int64_t t20 = -11694LL;

	t20 = (x93+((x94%x95)+x96));

	if (t20 != 103767119951139411LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = 4;
	uint16_t x102 = 6254U;
	static int8_t x103 = -16;
	int16_t x104 = -1;
	int32_t t21 = -55;

	t21 = (x101+((x102%x103)+x104));

	if (t21 != 17) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x105 = -1;
	uint32_t x106 = 11U;
	int8_t x108 = -1;
	volatile uint64_t t22 = 20550LLU;

	t22 = (x105+((x106%x107)+x108));

	if (t22 != 9LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x110 = INT16_MAX;
	int8_t x112 = -1;
	volatile int64_t t23 = -6LL;

	t23 = (x109+((x110%x111)+x112));

	if (t23 != 172521405811LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x113 = -1;
	int8_t x115 = INT8_MIN;
	uint32_t x116 = UINT32_MAX;
	int64_t t24 = -2332649154LL;

	t24 = (x113+((x114%x115)+x116));

	if (t24 != 4294967421LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x119 = 1U;
	int64_t t25 = -37369922800436440LL;

	t25 = (x117+((x118%x119)+x120));

	if (t25 != 1918LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x121 = UINT64_MAX;
	int64_t x123 = INT64_MIN;
	static uint32_t x124 = 6373773U;
	uint64_t t26 = 792347706416715LLU;

	t26 = (x121+((x122%x123)+x124));

	if (t26 != 6373771LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint8_t x129 = 17U;
	static uint32_t x130 = 1890035U;
	volatile uint8_t x131 = UINT8_MAX;
	volatile uint8_t x132 = 18U;
	uint32_t t27 = 562U;

	t27 = (x129+((x130%x131)+x132));

	if (t27 != 265U) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x133 = -1;
	volatile uint32_t x135 = 1681055U;
	uint8_t x136 = 0U;
	volatile uint32_t t28 = 3U;

	t28 = (x133+((x134%x135)+x136));

	if (t28 != 1552824U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x137 = INT16_MIN;
	static volatile uint8_t x139 = UINT8_MAX;
	int8_t x140 = -1;
	volatile int32_t t29 = -18;

	t29 = (x137+((x138%x139)+x140));

	if (t29 != -32769) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x141 = INT8_MAX;
	int32_t x142 = INT32_MAX;
	int32_t x143 = -4278;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t30 = 7539354LLU;

	t30 = (x141+((x142%x143)+x144));

	if (t30 != 499LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x145 = -1;
	static volatile int32_t x146 = INT32_MIN;
	uint16_t x147 = 7U;
	uint32_t x148 = 2056U;

	t31 = (x145+((x146%x147)+x148));

	if (t31 != 2053U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x149 = -2;
	uint64_t x150 = 13LLU;
	uint16_t x151 = 151U;
	static int32_t x152 = -6;
	uint64_t t32 = 6486561270LLU;

	t32 = (x149+((x150%x151)+x152));

	if (t32 != 5LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x153 = -1;
	static uint16_t x154 = UINT16_MAX;
	volatile int32_t x155 = 15;
	volatile int64_t t33 = -7068877706LL;

	t33 = (x153+((x154%x155)+x156));

	if (t33 != 3977LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x157 = INT32_MIN;
	int8_t x158 = INT8_MIN;
	int32_t x159 = -1;

	t34 = (x157+((x158%x159)+x160));

	if (t34 != 2147483682U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x161 = INT16_MIN;
	volatile uint8_t x162 = UINT8_MAX;
	static uint8_t x163 = 110U;
	static int16_t x164 = -1;
	volatile int32_t t35 = -77528393;

	t35 = (x161+((x162%x163)+x164));

	if (t35 != -32734) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x165 = INT64_MAX;
	static int16_t x166 = -1;
	static uint8_t x167 = UINT8_MAX;
	int64_t t36 = -3LL;

	t36 = (x165+((x166%x167)+x168));

	if (t36 != 9223372036854775744LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x169 = UINT32_MAX;
	int64_t x170 = 16151652039525927LL;
	uint32_t x172 = 955798592U;
	volatile int64_t t37 = 7501LL;

	t37 = (x169+((x170%x171)+x172));

	if (t37 != 5250765910LL) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x173 = -1577218;
	volatile int32_t x174 = INT32_MAX;
	static uint8_t x176 = UINT8_MAX;
	uint32_t t38 = 60667U;

	t38 = (x173+((x174%x175)+x176));

	if (t38 != 26140444U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x177 = INT8_MIN;
	uint64_t x179 = UINT64_MAX;
	static int8_t x180 = INT8_MIN;
	uint64_t t39 = 1241502LLU;

	t39 = (x177+((x178%x179)+x180));

	if (t39 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x181 = 3U;
	int32_t x182 = INT32_MIN;
	uint8_t x184 = 106U;
	int64_t t40 = 7044003255690LL;

	t40 = (x181+((x182%x183)+x184));

	if (t40 != -2147483539LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x189 = -12767;
	volatile int16_t x191 = INT16_MAX;
	int16_t x192 = 19;

	t41 = (x189+((x190%x191)+x192));

	if (t41 != -12697) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x193 = -1;
	int32_t x195 = 89;
	int8_t x196 = INT8_MIN;
	volatile uint64_t t42 = 6182025LLU;

	t42 = (x193+((x194%x195)+x196));

	if (t42 != 18446744073709551542LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x202 = INT64_MIN;
	int8_t x204 = -1;
	volatile uint64_t t43 = 27287083979805LLU;

	t43 = (x201+((x202%x203)+x204));

	if (t43 != 1752131307018185194LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x205 = UINT32_MAX;
	volatile int64_t x207 = 7306954540044197LL;
	int64_t x208 = 503345164LL;
	int64_t t44 = -295310LL;

	t44 = (x205+((x206%x207)+x208));

	if (t44 != 4798312458LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x209 = -1LL;
	uint16_t x210 = UINT16_MAX;
	volatile int8_t x212 = INT8_MIN;
	int64_t t45 = -780926209085270949LL;

	t45 = (x209+((x210%x211)+x212));

	if (t45 != -126LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x213 = 4U;
	int32_t x214 = INT32_MAX;
	static uint32_t x215 = UINT32_MAX;
	int32_t x216 = -9590229;
	uint32_t t46 = 94U;

	t46 = (x213+((x214%x215)+x216));

	if (t46 != 2137893422U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x217 = INT8_MIN;
	int8_t x218 = -1;
	static int64_t x219 = -1LL;
	int8_t x220 = INT8_MIN;

	t47 = (x217+((x218%x219)+x220));

	if (t47 != -256LL) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint16_t x221 = 13014U;
	uint16_t x222 = 5067U;
	volatile int32_t x223 = -1;
	int64_t t48 = -2327075186102LL;

	t48 = (x221+((x222%x223)+x224));

	if (t48 != 13016LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x225 = UINT8_MAX;
	uint32_t x226 = 0U;
	int64_t x227 = INT64_MAX;
	uint32_t x228 = 24U;
	int64_t t49 = -7860944907606435LL;

	t49 = (x225+((x226%x227)+x228));

	if (t49 != 279LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x229 = UINT16_MAX;
	static uint16_t x230 = UINT16_MAX;
	int32_t x231 = -1;
	int32_t t50 = -68304;

	t50 = (x229+((x230%x231)+x232));

	if (t50 != 65790) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x233 = 3U;
	int64_t x234 = INT64_MAX;
	static uint8_t x235 = 69U;
	static uint16_t x236 = UINT16_MAX;
	volatile int64_t t51 = 2533264762249176LL;

	t51 = (x233+((x234%x235)+x236));

	if (t51 != 65563LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x238 = 15477;
	uint32_t x239 = 5382U;
	uint64_t x240 = UINT64_MAX;
	volatile uint64_t t52 = 1640476217LLU;

	t52 = (x237+((x238%x239)+x240));

	if (t52 != 4584LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x242 = INT32_MIN;
	uint8_t x243 = 12U;
	volatile uint16_t x244 = UINT16_MAX;

	t53 = (x241+((x242%x243)+x244));

	if (t53 != 65527) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x245 = INT8_MIN;
	static int16_t x246 = INT16_MIN;
	volatile int32_t x247 = INT32_MIN;
	int32_t x248 = -1;
	int32_t t54 = 2;

	t54 = (x245+((x246%x247)+x248));

	if (t54 != -32897) { NG(); } else { ; }
	
}

void f55(void) {
	static uint8_t x250 = 11U;
	uint64_t x251 = UINT64_MAX;
	uint8_t x252 = UINT8_MAX;
	static volatile uint64_t t55 = 1179995528081259672LLU;

	t55 = (x249+((x250%x251)+x252));

	if (t55 != 267LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x253 = -1;
	static volatile int64_t x254 = -7440812771864524LL;
	volatile uint8_t x256 = 10U;

	t56 = (x253+((x254%x255)+x256));

	if (t56 != -115LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x257 = INT8_MAX;
	int8_t x258 = INT8_MAX;
	uint64_t x259 = 10459724LLU;

	t57 = (x257+((x258%x259)+x260));

	if (t57 != 254LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x261 = 1;
	int32_t x262 = -1;
	uint16_t x263 = UINT16_MAX;
	int8_t x264 = -1;
	static volatile int32_t t58 = 259;

	t58 = (x261+((x262%x263)+x264));

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x265 = -1LL;
	uint8_t x266 = 95U;
	int32_t x268 = INT32_MIN;
	int64_t t59 = -80052844937357030LL;

	t59 = (x265+((x266%x267)+x268));

	if (t59 != 2147483742LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x269 = INT16_MAX;
	static int64_t x270 = INT64_MIN;
	int8_t x271 = INT8_MAX;
	int16_t x272 = INT16_MAX;

	t60 = (x269+((x270%x271)+x272));

	if (t60 != 65533LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x273 = UINT32_MAX;
	int16_t x275 = INT16_MAX;
	int16_t x276 = INT16_MIN;
	volatile uint32_t t61 = 25592U;

	t61 = (x273+((x274%x275)+x276));

	if (t61 != 4294934567U) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x277 = 7U;
	int16_t x278 = INT16_MIN;
	int32_t x279 = 999986521;
	int64_t x280 = -1LL;
	int64_t t62 = -3169941528718545LL;

	t62 = (x277+((x278%x279)+x280));

	if (t62 != -32762LL) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t t63 = 408;

	t63 = (x281+((x282%x283)+x284));

	if (t63 != -32769) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x285 = INT64_MAX;
	volatile int16_t x286 = INT16_MAX;
	int8_t x288 = INT8_MIN;
	volatile uint64_t t64 = 1883064097LLU;

	t64 = (x285+((x286%x287)+x288));

	if (t64 != 9223372036854786684LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x289 = 95185LLU;
	static int32_t x290 = INT32_MIN;
	volatile int32_t x291 = 290095003;
	static uint8_t x292 = 14U;
	uint64_t t65 = 11LLU;

	t65 = (x289+((x290%x291)+x292));

	if (t65 != 18446744073592828188LLU) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x293 = -1LL;
	uint64_t x294 = 2631LLU;
	int64_t x295 = INT64_MAX;
	static int8_t x296 = INT8_MIN;
	uint64_t t66 = 105LLU;

	t66 = (x293+((x294%x295)+x296));

	if (t66 != 2502LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x297 = INT64_MIN;
	uint32_t x298 = 2375959U;
	int32_t x299 = -1;
	volatile int64_t t67 = 14817704696LL;

	t67 = (x297+((x298%x299)+x300));

	if (t67 != -9223372034704916201LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x301 = 98;
	int64_t x302 = -694937665LL;
	static int32_t x303 = INT32_MAX;
	volatile uint32_t x304 = UINT32_MAX;
	volatile int64_t t68 = 125275970481LL;

	t68 = (x301+((x302%x303)+x304));

	if (t68 != 3600029728LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x306 = INT64_MIN;
	int16_t x307 = INT16_MIN;
	int64_t t69 = 194416415LL;

	t69 = (x305+((x306%x307)+x308));

	if (t69 != -2147483162LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x309 = 0U;
	int16_t x310 = INT16_MAX;
	static int64_t x311 = -282230920LL;
	int64_t x312 = INT64_MIN;
	volatile int64_t t70 = -113287926LL;

	t70 = (x309+((x310%x311)+x312));

	if (t70 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x321 = 426;
	static int32_t x322 = INT32_MIN;
	int64_t x323 = INT64_MAX;
	static int8_t x324 = INT8_MIN;
	int64_t t71 = -62490314757799585LL;

	t71 = (x321+((x322%x323)+x324));

	if (t71 != -2147483350LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x325 = 93U;
	uint64_t x326 = 63450985LLU;
	volatile int32_t x327 = -1;
	static uint64_t t72 = 175874396368185LLU;

	t72 = (x325+((x326%x327)+x328));

	if (t72 != 63450950LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x329 = 62U;
	volatile int8_t x331 = INT8_MIN;
	static int64_t x332 = 12138096256770429LL;
	static int64_t t73 = 635LL;

	t73 = (x329+((x330%x331)+x332));

	if (t73 != 12138096256770618LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x333 = INT16_MIN;
	int32_t x334 = -1;
	int16_t x335 = -1;
	int32_t x336 = -20418;
	volatile int32_t t74 = 5;

	t74 = (x333+((x334%x335)+x336));

	if (t74 != -53186) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x339 = INT8_MAX;
	int16_t x340 = INT16_MAX;
	int32_t t75 = 1330970;

	t75 = (x337+((x338%x339)+x340));

	if (t75 != 65526) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x342 = -1385LL;
	uint16_t x344 = 14U;
	volatile int64_t t76 = -10396LL;

	t76 = (x341+((x342%x343)+x344));

	if (t76 != -1176LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x345 = 2U;
	static volatile int8_t x346 = 1;
	uint64_t x347 = UINT64_MAX;
	uint64_t t77 = 733419422676LLU;

	t77 = (x345+((x346%x347)+x348));

	if (t77 != 304LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x350 = 310;
	uint64_t x351 = UINT64_MAX;
	int32_t x352 = INT32_MAX;
	uint64_t t78 = 1563136626LLU;

	t78 = (x349+((x350%x351)+x352));

	if (t78 != 2147484832LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x362 = UINT16_MAX;
	int64_t x363 = -1LL;
	uint16_t x364 = UINT16_MAX;
	volatile int64_t t79 = -1LL;

	t79 = (x361+((x362%x363)+x364));

	if (t79 != 65534LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x365 = 1866624230LLU;
	int32_t x366 = INT32_MAX;
	volatile int64_t x367 = INT64_MAX;
	volatile int64_t x368 = INT64_MIN;
	volatile uint64_t t80 = 0LLU;

	t80 = (x365+((x366%x367)+x368));

	if (t80 != 9223372040868883685LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x369 = INT8_MAX;
	volatile int32_t x371 = -536164825;
	volatile int8_t x372 = INT8_MAX;

	t81 = (x369+((x370%x371)+x372));

	if (t81 != 274LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x373 = INT32_MAX;
	int16_t x374 = INT16_MIN;
	uint32_t x375 = 467801U;
	int64_t x376 = -1LL;
	volatile int64_t t82 = 7144474732001124LL;

	t82 = (x373+((x374%x375)+x376));

	if (t82 != 2147537193LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x378 = INT16_MAX;
	volatile int8_t x380 = 0;
	int32_t t83 = 759304;

	t83 = (x377+((x378%x379)+x380));

	if (t83 != -32751) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x381 = -1LL;
	volatile int32_t x382 = 33206152;
	int16_t x383 = INT16_MIN;
	int64_t t84 = 13LL;

	t84 = (x381+((x382%x383)+x384));

	if (t84 != -20601LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x385 = -1;
	int8_t x386 = 7;
	int16_t x387 = INT16_MAX;
	volatile int32_t t85 = -208;

	t85 = (x385+((x386%x387)+x388));

	if (t85 != 11) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x389 = INT16_MAX;
	uint64_t x390 = 3039820892LLU;
	int32_t x391 = -11938;

	t86 = (x389+((x390%x391)+x392));

	if (t86 != 9223372039894629467LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x393 = 59U;
	volatile int32_t x394 = -1;
	int16_t x395 = -1;
	int16_t x396 = -1;
	static volatile int32_t t87 = -543;

	t87 = (x393+((x394%x395)+x396));

	if (t87 != 58) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x397 = 85279LLU;
	volatile int64_t x398 = -1LL;
	int32_t x399 = INT32_MAX;
	static int16_t x400 = INT16_MIN;
	uint64_t t88 = 126LLU;

	t88 = (x397+((x398%x399)+x400));

	if (t88 != 52510LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x401 = INT8_MIN;
	uint16_t x402 = UINT16_MAX;
	static int16_t x404 = INT16_MIN;
	volatile int32_t t89 = -729397;

	t89 = (x401+((x402%x403)+x404));

	if (t89 != -32889) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x405 = INT64_MIN;
	volatile int64_t x406 = 2932683757LL;
	static int32_t x407 = 178639777;
	static uint64_t x408 = 5LLU;
	volatile uint64_t t90 = 18226419602LLU;

	t90 = (x405+((x406%x407)+x408));

	if (t90 != 9223372036929223138LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x409 = -5;
	int64_t x410 = -1LL;
	volatile uint8_t x411 = UINT8_MAX;
	int16_t x412 = INT16_MIN;
	volatile int64_t t91 = 119011584051355181LL;

	t91 = (x409+((x410%x411)+x412));

	if (t91 != -32774LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x414 = -1;
	static uint16_t x416 = 28461U;
	static int64_t t92 = 1755LL;

	t92 = (x413+((x414%x415)+x416));

	if (t92 != 28226LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x417 = INT16_MIN;
	uint8_t x418 = 71U;
	int32_t x419 = -1;
	uint32_t t93 = 6329974U;

	t93 = (x417+((x418%x419)+x420));

	if (t93 != 4294937310U) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x422 = -7;
	int64_t x423 = INT64_MAX;
	static uint16_t x424 = 18584U;
	volatile int64_t t94 = 286523068920LL;

	t94 = (x421+((x422%x423)+x424));

	if (t94 != 18578LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x425 = INT8_MIN;
	int32_t x426 = -841;
	static uint64_t x428 = 750415220884309LLU;
	volatile uint64_t t95 = 15LLU;

	t95 = (x425+((x426%x427)+x428));

	if (t95 != 750415220884181LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x429 = -613968723432LL;
	int16_t x430 = 7381;
	int32_t x432 = INT32_MIN;
	static int64_t t96 = -2995003384891311543LL;

	t96 = (x429+((x430%x431)+x432));

	if (t96 != -616116206839LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x433 = 67424242438334LLU;
	static uint32_t x435 = 3138U;
	int16_t x436 = INT16_MIN;
	volatile uint64_t t97 = 34525546878LLU;

	t97 = (x433+((x434%x435)+x436));

	if (t97 != 67428537375247LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x441 = 10977;
	uint8_t x443 = 15U;
	volatile uint8_t x444 = 0U;
	static volatile int32_t t98 = 0;

	t98 = (x441+((x442%x443)+x444));

	if (t98 != 10984) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x445 = -1089;
	volatile int32_t x446 = INT32_MIN;
	static uint64_t x448 = 277LLU;
	static volatile uint64_t t99 = 53298183306LLU;

	t99 = (x445+((x446%x447)+x448));

	if (t99 != 18446744073709550796LLU) { NG(); } else { ; }
	
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

